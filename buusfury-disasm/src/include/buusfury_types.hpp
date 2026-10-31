#pragma once
/**
 * Dragon Ball Z: Buu's Fury (GBA, USA) — Original Engine Types & Hardware Definitions
 * Reconstructed C/C++ header for the Webfoot Technologies GBA Engine (ADS 1.2 / tcpp).
 */

#include <stdint.h>
#include <stdbool.h>

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;
typedef volatile uint8_t  vu8;
typedef volatile uint16_t vu16;
typedef volatile uint32_t vu32;

/* ============================================================================
 * 1. GBA Memory Map & Hardware I/O Registers (0x04000000)
 * ============================================================================ */
#define EWRAM_BASE          0x02000000U
#define HEAP_START          0x02000800U
#define IWRAM_BASE          0x03000000U
#define IO_BASE             0x04000000U
#define PALETTE_RAM_BASE    0x05000000U
#define VRAM_BASE           0x06000000U
#define OAM_BASE            0x07000000U
#define ROM_BASE            0x08000000U
#define SRAM_BASE           0x0E000000U

#define REG_DISPCNT         (*(vu16*)(IO_BASE + 0x0000))
#define REG_DISPSTAT        (*(vu16*)(IO_BASE + 0x0004))
#define REG_VCOUNT          (*(vu16*)(IO_BASE + 0x0006))
#define REG_BG0CNT          (*(vu16*)(IO_BASE + 0x0008))
#define REG_BG1CNT          (*(vu16*)(IO_BASE + 0x000A))
#define REG_BG2CNT          (*(vu16*)(IO_BASE + 0x000C))
#define REG_BG3CNT          (*(vu16*)(IO_BASE + 0x000E))
#define REG_BG0HOFS         (*(vu16*)(IO_BASE + 0x0010))
#define REG_BG0VOFS         (*(vu16*)(IO_BASE + 0x0012))
#define REG_BG1HOFS         (*(vu16*)(IO_BASE + 0x0014))
#define REG_BG1VOFS         (*(vu16*)(IO_BASE + 0x0016))
#define REG_BG2HOFS         (*(vu16*)(IO_BASE + 0x0018))
#define REG_BG2VOFS         (*(vu16*)(IO_BASE + 0x001A))
#define REG_BG3HOFS         (*(vu16*)(IO_BASE + 0x001C))
#define REG_BG3VOFS         (*(vu16*)(IO_BASE + 0x001E))

#define REG_WIN0H           (*(vu16*)(IO_BASE + 0x0040))
#define REG_WIN1H           (*(vu16*)(IO_BASE + 0x0042))
#define REG_WIN0V           (*(vu16*)(IO_BASE + 0x0044))
#define REG_WIN1V           (*(vu16*)(IO_BASE + 0x0046))
#define REG_WININ           (*(vu16*)(IO_BASE + 0x0048))
#define REG_WINOUT          (*(vu16*)(IO_BASE + 0x004A))
#define REG_MOSAIC_L        (*(vu8* )(IO_BASE + 0x004C))
#define REG_MOSAIC_H        (*(vu8* )(IO_BASE + 0x004D))
#define REG_BLDCNT          (*(vu16*)(IO_BASE + 0x0050))
#define REG_BLDALPHA        (*(vu16*)(IO_BASE + 0x0052))
#define REG_BLDALPHA_EVA    (*(vu8* )(IO_BASE + 0x0052))
#define REG_BLDALPHA_EVB    (*(vu8* )(IO_BASE + 0x0053))
#define REG_BLDY            (*(vu16*)(IO_BASE + 0x0054))

#define REG_DMA0SAD         (*(vu32*)(IO_BASE + 0x00B0))
#define REG_DMA0DAD         (*(vu32*)(IO_BASE + 0x00B4))
#define REG_DMA0CNT_L       (*(vu16*)(IO_BASE + 0x00B8))
#define REG_DMA0CNT_H       (*(vu16*)(IO_BASE + 0x00BA))
#define REG_DMA1SAD         (*(vu32*)(IO_BASE + 0x00BC))
#define REG_DMA1DAD         (*(vu32*)(IO_BASE + 0x00C0))
#define REG_DMA1CNT_L       (*(vu16*)(IO_BASE + 0x00C4))
#define REG_DMA1CNT_H       (*(vu16*)(IO_BASE + 0x00C6))
#define REG_DMA2SAD         (*(vu32*)(IO_BASE + 0x00C8))
#define REG_DMA2DAD         (*(vu32*)(IO_BASE + 0x00CC))
#define REG_DMA2CNT_L       (*(vu16*)(IO_BASE + 0x00D0))
#define REG_DMA2CNT_H       (*(vu16*)(IO_BASE + 0x00D2))
#define REG_DMA3SAD         (*(vu32*)(IO_BASE + 0x00D4))
#define REG_DMA3DAD         (*(vu32*)(IO_BASE + 0x00D8))
#define REG_DMA3CNT_L       (*(vu16*)(IO_BASE + 0x00DC))
#define REG_DMA3CNT_H       (*(vu16*)(IO_BASE + 0x00DE))

#define REG_TM0CNT_L        (*(vu16*)(IO_BASE + 0x0100))
#define REG_TM0CNT_H        (*(vu16*)(IO_BASE + 0x0102))
#define REG_TM1CNT_L        (*(vu16*)(IO_BASE + 0x0104))
#define REG_TM1CNT_H        (*(vu16*)(IO_BASE + 0x0106))
#define REG_TM2CNT_L        (*(vu16*)(IO_BASE + 0x0108))
#define REG_TM2CNT_H        (*(vu16*)(IO_BASE + 0x010A))
#define REG_TM3CNT_L        (*(vu16*)(IO_BASE + 0x010C))
#define REG_TM3CNT_H        (*(vu16*)(IO_BASE + 0x010E))

#define REG_KEYINPUT        (*(vu16*)(IO_BASE + 0x0130))
#define REG_KEYCNT          (*(vu16*)(IO_BASE + 0x0132))
#define REG_IE              (*(vu16*)(IO_BASE + 0x0200))
#define REG_IF              (*(vu16*)(IO_BASE + 0x0202))
#define REG_WAITCNT         (*(vu16*)(IO_BASE + 0x0204))
#define REG_IME             (*(vu16*)(IO_BASE + 0x0208))

/* ============================================================================
 * 2. EWRAM Heap Allocator (src/GBARam.c — 0x02000800)
 * ============================================================================ */
struct MallocHeader {
    u16 nextBlock;  // +0x00: Word offset (>>2) from EWRAM_BASE to next physical block
    u16 size;       // +0x02: Payload size in 32-bit words
    u16 prevBlock;  // +0x04: Word offset (>>2) from EWRAM_BASE to previous physical block
    u8  used;       // +0x06: 1 if allocated, 0 if free
    u8  pad;        // +0x07: Alignment padding
    u16 nextFree;   // +0x08: Intrusive free-list next offset
    u16 prevFree;   // +0x0A: Intrusive free-list prev offset
};

/* ============================================================================
 * 3. Webfoot LZ & JCALG1 Compression Containers
 * ============================================================================ */
enum WebfootContainerKind : u32 {
    WEBFOOT_LZ_STORED = 0,
    WEBFOOT_LZ_PACKED_7BIT = 1,
    WEBFOOT_LZ_PACKED_8BIT = 2,
};

struct WebfootContainerHeader {
    u32 kind;           // +0x00: 0 = raw stored, 1 = packed (7-bit init), 2 = packed (8-bit init)
    u32 declared_size;  // +0x04: Uncompressed output size in bytes
    u8  bitstream[];    // +0x08: 32-bit word bitstream
};

/* ============================================================================
 * 4. Map System Structures (0x0808E2E0 & 0x08179A50..0x082B8BC8)
 * ============================================================================ */
struct MapTriggerZone {
    u32 fn0;            // +0x00: Enter/check callback 0
    u32 fn1;            // +0x04: Enter/check callback 1
    u16 x1;             // +0x08: Left X in map pixels
    u16 y1;             // +0x0A: Top Y in map pixels
    u16 x2;             // +0x0C: Right X in map pixels
    u16 y2;             // +0x0E: Bottom Y in map pixels
    u32 script_ptr;     // +0x10: Pointer to event/script stream
    u32 word_14;        // +0x14: Trigger parameter 0
    u32 word_18;        // +0x18: Trigger parameter 1
}; // Size: 0x1C (28 bytes)

struct MapWarpZone {
    u32 x1;             // +0x00: Bounding box left X (px)
    u32 y1;             // +0x04: Bounding box top Y (px)
    u32 x2;             // +0x08: Bounding box right X (px)
    u32 y2;             // +0x0C: Bounding box bottom Y (px)
    u16 dest_x;         // +0x10: Destination spawn X (px)
    u16 dest_y;         // +0x12: Destination spawn Y (px)
    u16 dest_map_id;    // +0x14: Destination MapEntry ID (0..451)
    u16 dest_facing;    // +0x16: Destination facing direction
}; // Size: 0x18 (24 bytes, root_table_record)

struct DominantLayerRecord {
    u32 handler_fn;     // +0x00: Always 0x08008087 (Thumb entry 0x08008086)
    u32 words_04[4];    // +0x04..0x13: Layer scroll/priority settings
    u8  chunk_cols;     // +0x14: Width in 256x256px screenblock chunks
    u8  chunk_rows;     // +0x15: Height in 256x256px screenblock chunks
    u16 pad_16;         // +0x16: Padding
    const WebfootContainerHeader* chunk_ptrs[]; // +0x18: chunk_cols * chunk_rows pointers
};

struct MapRootRecord {
    u32 scene_word;                     // +0x00
    u32 grid_dimensions;                // +0x04
    u32 word_08;                        // +0x08
    u32 anim_row_count;                 // +0x0C
    const void* anim_rows_ptr;          // +0x10
    const DominantLayerRecord* layers[4]; // +0x14..0x20: BG0, BG1, BG2, BG3
    u32 warp_count;                     // +0x24
    const MapWarpZone* warps_ptr;       // +0x28
    u32 word_2C;                        // +0x2C
    u32 word_30;                        // +0x30
    const WebfootContainerHeader* collision_a; // +0x34
    const WebfootContainerHeader* collision_b; // +0x38
    u32 word_3C;                        // +0x3C
    u32 word_40;                        // +0x40
    u32 word_44;                        // +0x44
    const WebfootContainerHeader* vram_delta_container; // +0x48: Delta-encoded (bank<<8)|tile array
    const u32* tile_bank_table;         // +0x4C: Always 0x08179764 (187 tilebanks)
}; // Size: 0x50 (80 bytes)

struct MapEntry {
    u8  flags_00;           // +0x00
    u8  chapter_group_id;   // +0x01
    u8  active_root_slot;   // +0x02: 1-based index into variation_roots_ptr
    u8  trigger_zone_count; // +0x03: Number of MapTriggerZone records at trigger_zones_ptr
    u8  placement_count;    // +0x04: Number of entity pointers at placements_ptr
    u8  count_05;           // +0x05
    u8  count_06;           // +0x06
    u8  count_07;           // +0x07
    u8  bytes_08[4];        // +0x08..0x0B
    u32 ptr_0C;             // +0x0C
    const MapTriggerZone* trigger_zones_ptr; // +0x10 (fields[13])
    const void* const* placements_ptr;       // +0x14 (fields[14])
    u32 ptr_18;             // +0x18
    u32 ptr_1C;             // +0x1C
    u32 ptr_20;             // +0x20
    u32 ptr_24;             // +0x24
    u32 ptr_28;             // +0x28
    const MapRootRecord* const* variation_roots_ptr; // +0x2C (fields[20])
    const u8* map_script_stream_ptr;         // +0x30 (fields[21])
    u32 ptr_34;             // +0x34
}; // Size: 0x38 (56 bytes, 452 entries at 0x0808E2E0)

/* ============================================================================
 * 5. Entity Placement, Enemy Stats & Sprite OAM Structures
 * ============================================================================ */
struct PlacementChild {
    u32 handler_fn;     // +0x00: Patrol waypoint handler (e.g. 0x0800FF4D)
    u16 waypoint_x;     // +0x04: Patrol target X (px)
    u16 waypoint_y;     // +0x06: Patrol target Y (px)
    u16 wait_frames;    // +0x08: Pause duration at waypoint
    u16 radius_or_spd;  // +0x0A: Detection radius / speed parameter
}; // Size: 0x0C (12 bytes)

struct PlacementRecord {
    u32 factory_fn;     // +0x00: 0x0800FD55 (Battle_CreateEnemyFromPlacement)
    u32 spawn_id;       // +0x04: Persistent spawn flag ID
    u32 enemy_stat_id;  // +0x08: Index (0..149) into g_EnemyStatTable (0x08711274)
    u16 spawn_x;        // +0x0C: Initial X coordinate (px)
    u16 spawn_y;        // +0x0E: Initial Y coordinate (px)
    u32 sprite_id;      // +0x10: Index (0..296) into g_SpriteDefinitionTable (0x086B6BDC)
    const void* descriptor_ptr; // +0x14: Pointer to 8-byte DescriptorRecord
    u32 child_count;    // +0x18: Number of patrol waypoints (1..4)
    const PlacementChild* children[]; // +0x1C: Waypoint pointers
};

struct SiblingObjectRecord {
    u32 factory_fn;     // +0x00: 0x08017DA3 (NPC/Dialog) or 0x080111A9 (Interactive Object)
    u32 spawn_id;       // +0x04: Spawn flag / persistent ID
    u16 spawn_x;        // +0x08: Initial X coordinate (px)
    u16 spawn_y;        // +0x0A: Initial Y coordinate (px)
    u32 word_0C;        // +0x0C: For NPC: EventPoolRecord* (0x0877C5A4..); For Obj: sprite_id
    u32 word_10;        // +0x10: For NPC: sprite_id (0..296); For Obj: parameter
    u32 word_14;        // +0x14: Callback / Event pointer for Objects
    u32 word_18;        // +0x18: Extra parameter
}; // Size: 0x1C (28 bytes)

struct EnemyStatRecord {
    u32 level_or_type;  // +0x00: Base level / category flags
    u32 hp;             // +0x04: Hit Points (HP)
    u32 attack;         // +0x08: Strength / Melee Damage
    u32 defense_exp;    // +0x0C: Defense / Experience reward packed word
    u32 speed_ki;       // +0x10: Speed / Energy stat
    const void* ai_node_ptr; // +0x14: Pointer to AI behaviour tree node (ai_behaviour_node)
    u32 drop_table;     // +0x18: Item drop / Zeni table
}; // Size: 0x1C (28 bytes, 150 entries at 0x08711274)

struct OamPiece {
    s8  dx;             // +0x00: Signed X offset from actor origin
    s8  dy;             // +0x01: Signed Y offset from actor origin
    u8  width;          // +0x02: Width in pixels (8, 16, 32, 64)
    u8  height;         // +0x03: Height in pixels (8, 16, 32, 64)
    u32 oam_flags;      // +0x04: GBA OAM attr0/attr1 flags (bit 28 = HFlip, bit 29 = VFlip)
    const WebfootContainerHeader* tiles_container; // +0x08: 8bpp compressed tiles
}; // Size: 0x0C (12 bytes)

struct SpriteFrame {
    u32 piece_count;    // +0x00
    u32 bounds_word;    // +0x04
    OamPiece pieces[];  // +0x08
};

struct SpriteAnimation {
    u32 frame_count;    // +0x00
    const SpriteFrame* directional_frames[]; // +0x04: 4 directions (S, N, W, E) per frame
};

struct SpriteDefinition {
    u8  slot_count;     // +0x00: Number of animation slots
    u8  header_pad[0x53];
    const SpriteAnimation* slots[]; // +0x54
};

/* ============================================================================
 * 6. Runtime Actor & Combat Structures in EWRAM
 * ============================================================================ */
struct DamagePacket {
    u8  bytes_00[0x08];
    u8* attacker_info;  // +0x08
    u32 flags_0C;       // +0x0C
    u32 status_effect;  // +0x10
    u32 knockback;      // +0x14
    s32 final_damage;   // +0x18: Subtracted from target->current_hp (+0x28C) in Battle_ApplyDamage
};

struct ActorVTable {
    void (*dtor)(void* self, int flags);
    void (*update)(void* self);
    void (*render)(void* self);
    void (*on_event)(void* self, void* ev);
    void (*slot_04)(void* self);
    void (*slot_05)(void* self);
    void (*slot_06)(void* self);
};

struct Actor {
    const ActorVTable* vtable; // +0x000
    u8  pad_004[0x220];
    void* combat_component;    // +0x224: Loaded in Battle_ApplyDamage (this + 0x200 + 0x24)
    u8  pad_228[0x64];
    s32 current_hp;            // +0x28C: Offset (0xA3 << 2) read/updated in Battle_ApplyDamage
};
