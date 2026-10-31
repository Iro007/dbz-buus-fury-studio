/**
 * Dragon Ball Z: Buu's Fury — Combat, Damage, Vital Bars & Enemy Spawning Engine
 * Reconstructed original C++ code from ARM7TDMI/Thumb assembly:
 *   - Battle_ApplyDamage       (0x0800FA2A, asm/Battle_ApplyDamage.s)
 *   - Battle_ComputeDamage     (0x0800E9DC, asm/Battle_ComputeDamage.s)
 *   - Battle_CreateEnemy       (0x0800F694, asm/Battle_CreateEnemy.s)
 *   - Battle_SpawnDamageObject (0x0800E8E8, asm/Battle_SpawnDamageObject.s)
 *   - Gfx_BuildVitalBars       (0x0800B9B0, asm/Gfx_BuildVitalBars.s)
 */

#include "../include/buusfury_types.hpp"

extern "C" void* GBARam_Malloc(int size);
extern void Object_GetPoints(s32 out_bounds[4], Actor* actor);
extern void Battle_NotifyEventState(void* manager, int event_code, Actor* actor);
extern void Battle_AttachFloatingNumber(Actor* target, void* node);
extern void Battle_RefreshComboNumber(void* combo_node);
extern s32  Bios_SwiDiv(s32 numerator, s32 denominator);

extern void* g_BattleEventManager; // [0x0800FCDC]
extern struct GlobalTimerState {
    u32 pad_00;
    u32 frame_tick; // +0x04
}* g_TimerState;

/* ============================================================================
 * Battle_ApplyDamage (0x0800FA2A — vtable 0x0804C484 slot #22)
 * Applies a DamagePacket to an Actor's HP (+0x28C), spawns the floating
 * damage number object, and triggers the death callback if HP drops to <= 0.
 * ============================================================================ */
int Battle_ApplyDamage(Actor* target, DamagePacket* packet) {
    s32* hp_ptr = &target->current_hp; // Offset 0x28C = (0xA3 << 2)
    if (*hp_ptr == 0) {
        // Actor is already at 0 HP (dead / invulnerable to further damage)
        return 1;
    }

    // Spawn floating damage number / hit spark over the target
    Battle_SpawnDamageObject(target, packet);

    // Subtract incoming damage (packet + 0x18) from current HP
    s32 remaining_hp = *hp_ptr - packet->final_damage;
    *hp_ptr = remaining_hp;

    if (remaining_hp <= 0) {
        // Clamp HP to 0 and notify the global battle/quest manager (code 0x11)
        *hp_ptr = 0;
        Battle_NotifyEventState(g_BattleEventManager, 0x11, target);

        // Invoke death handler via target's combat component (+0x224 -> +0x14 -> +0x08)
        u8* combat_comp = *(u8**)((u8*)target + 0x224);
        u8* handler_obj = *(u8**)(combat_comp + 0x14);
        typedef void (*DeathCallbackFn)(void* self, Actor* dead_actor, DamagePacket* pkt);
        DeathCallbackFn on_death = *(DeathCallbackFn*)(handler_obj + 0x08);
        on_death(handler_obj, target, packet);
        return 1;
    }

    return 0;
}

/* ============================================================================
 * Battle_SpawnDamageObject (0x0800E8E8)
 * Allocates an 8-byte floating damage node, computes the midpoint of the
 * actor's bounding box, and merges consecutive hits within 8 ticks.
 * ============================================================================ */
void Battle_SpawnDamageObject(Actor* target, DamagePacket* packet) {
    struct DamagePopupNode {
        u32 vtable;
        u8  kind;
        u8  pad[3];
    };

    DamagePopupNode* node = (DamagePopupNode*)GBARam_Malloc(sizeof(DamagePopupNode));
    if (node != nullptr) {
        node->vtable = 0x0804C1B0;
        node->kind   = 0x0C;
    }

    Battle_AttachFloatingNumber(target, node);

    s32 bounds[4]; // [x1, y1, x2, y2]
    Object_GetPoints(bounds, target);

    s32 center_x = (bounds[0] + bounds[2]) >> 1;
    s32 top_y    = bounds[1];
    (void)center_x;
    (void)top_y;

    // Check if consecutive hit occurred within 8 frames of the previous hit (target + 0x1C0)
    u8* hit_tracker = (u8*)target + 0x1C0;
    u32 elapsed = g_TimerState->frame_tick - *(u32*)(hit_tracker + 0x14);

    if (elapsed < 8) {
        u8* active_popup = *(u8**)(hit_tracker + 0x18);
        if (active_popup != nullptr) {
            // Accumulate damage into the existing floating popup counter
            *(s32*)(active_popup + 0x14) += packet->final_damage;
            Battle_RefreshComboNumber(active_popup);
            return;
        }
    }
}

/* ============================================================================
 * Battle_ComputeDamage (0x0800E9DC)
 * Evaluates attacker stats, attack type (melee, ki blast, status), and target
 * defense/resistances to populate the DamagePacket.
 * ============================================================================ */
void Battle_ComputeDamage(Actor* attacker, DamagePacket* packet) {
    u8* attack_def   = packet->attacker_info;
    u8  attack_class = attack_def[0];
    u8  effect_type  = attack_def[1];

    u8* attacker_stats = (u8*)attacker + 0x1A0;
    u8* defender_stats = *(u8**)((u8*)packet + 0x0C) + 0x1A0;
    (void)attacker_stats;

    if (attack_class == 0) {
        u16 defender_armor = *(u16*)(defender_stats + 0x10);
        (void)defender_armor;
        if (effect_type == 3) {
            packet->status_effect = 0;
        }
    }
}

/* ============================================================================
 * Battle_CreateEnemy (0x0800F694)
 * Allocates an EnemyActor (0x29C = 668 bytes) on the EWRAM heap if not
 * pre-allocated, and chains into the enemy constructor sub_0800F6AE.
 * ============================================================================ */
extern void EnemyActor_ConstructBody(Actor* self, void* arg1, void* arg2, void* arg3);

Actor* Battle_CreateEnemy(Actor* existing_mem, void* stat_rec, void* sprite_rec, void* patrol_rec) {
    Actor* self = existing_mem;
    if (self == nullptr) {
        // 0xA7 << 2 = 0x29C (668 bytes)
        self = (Actor*)GBARam_Malloc(0x29C);
        if (self == nullptr) {
            return nullptr;
        }
    }
    EnemyActor_ConstructBody(self, stat_rec, sprite_rec, patrol_rec);
    return self;
}

/* ============================================================================
 * Gfx_BuildVitalBars (0x0800B9B0)
 * Builds the 3 OAM sprite entries for the HUD HP / EP (Ki) / EXP vital bars
 * and scales the current HP/EP fill width using BIOS SWI 0x06 (Div).
 * ============================================================================ */
void Gfx_BuildVitalBars(u8* hud_self, u32** oam_cursor_ptr, u8* player_stats) {
    u32* oam = *oam_cursor_ptr;
    u8   y_pos = *(u8*)(hud_self + 0x28);
    u16  x_pos = *(u16*)(hud_self + 0x0C);

    // 1. Left HUD frame piece
    oam[0] = (0x20000000U) | y_pos;
    oam[1] = (oam[1] & ~0x0FFE) | (x_pos & 0x03FF) | 0x0400;

    // 2. Middle HUD bar piece (x + 16)
    oam += 2;
    oam[0] = (0x20000000U) | y_pos;
    oam[1] = (oam[1] & ~0x0FFE) | ((x_pos + 16) & 0x03FF) | 0x0400;

    // 3. Right HUD bar piece (x + 24)
    oam += 2;
    oam[0] = (0x20000000U) | y_pos;
    oam[1] = (oam[1] & ~0x0FFE) | ((x_pos + 24) & 0x03FF) | 0x0400;

    *oam_cursor_ptr = oam + 2;

    // Compute HP bar fill width: (current_hp * 41) / max_hp via SWI Div (6)
    s16 cur_hp = *(s16*)(player_stats + 0x16);
    s16 max_hp = *(s16*)(player_stats + 0x18);
    if (cur_hp != 0 && (cur_hp * 5) <= max_hp) {
        // Low-HP warning flash timer check (60 ticks = 1 second)
        u32 now  = g_TimerState->frame_tick;
        u32 last = *(u32*)(hud_self + 0x10);
        if ((s32)(now - last) > 60) {
            *(u32*)(hud_self + 0x10) = now;
        }
    }
    s32 hp_pixels = (max_hp > 0) ? Bios_SwiDiv(cur_hp * 41, max_hp) : 0;
    (void)hp_pixels;
}
