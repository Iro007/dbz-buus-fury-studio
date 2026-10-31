/**
 * Dragon Ball Z: Buu's Fury — EWRAM Heap, Actor Factories, Object Lifecycle & Lists
 * Reconstructed original C++ code from ARM7TDMI/Thumb assembly:
 *   - GBARam_Init / GBARam_Malloc / GBARam_Free (0x0803D564..0x0803D780, src/GBARam.c)
 *   - Npc_SpawnFromSiblingRecord (sub_08017DA2, asm/sub_08017DA2.s)
 *   - Object_Construct1..8       (asm/Object_Construct*.s)
 *   - Object_Destroy1..25        (asm/Object_Destroy*.s)
 *   - Object_AdvanceTimer1..2    (asm/Object_AdvanceTimer*.s)
 *   - List_Append / List_Remove1 / List_ReleaseAll1..3
 *   - Handle_Acquire1 / Handle_Release1
 */

#include "../include/buusfury_types.hpp"

#define FROM_OFFSET(offset) ((MallocHeader*)(EWRAM_BASE + ((u32)(offset) << 2)))
#define TO_OFFSET(block)    ((u16)(((u32)(block) - EWRAM_BASE) >> 2))

MallocHeader* g_FreeListTail = (MallocHeader*)HEAP_START; // [0x03003488]

/* ============================================================================
 * 1. EWRAM Heap Allocator (0x02000800..0x0203FFFF, 0xFDFE words)
 * ============================================================================ */
void GBARam_Init(void) {
    MallocHeader* block = (MallocHeader*)HEAP_START;
    g_FreeListTail   = block;
    block->nextBlock = 0;
    block->size      = 0xFDFE;
    block->prevBlock = 0;
    block->used      = 0;
    block->nextFree  = 0;
    block->prevFree  = 0;
}

void GBARam_MarkAsUsed(MallocHeader* block) {
    block->used = 1;
    if (block->prevFree != 0) {
        FROM_OFFSET(block->prevFree)->nextFree = block->nextFree;
    } else if (block->nextFree != 0) {
        g_FreeListTail = FROM_OFFSET(block->nextFree);
    } else {
        g_FreeListTail = nullptr;
    }
    if (block->nextFree != 0) {
        FROM_OFFSET(block->nextFree)->prevFree = block->prevFree;
    }
}

void GBARam_AddToFreeList(MallocHeader* block) {
    MallocHeader* head = g_FreeListTail;
    if (head != nullptr) {
        block->nextFree = TO_OFFSET(head);
        head->prevFree  = TO_OFFSET(block);
    } else {
        block->nextFree = 0;
    }
    block->prevFree = 0;
    g_FreeListTail  = block;
}

extern "C" void* GBARam_Malloc(int size) {
    MallocHeader* block = g_FreeListTail;
    MallocHeader* best  = nullptr;
    int bestSize = 0x7FFFFFFF;
    int words    = (size + 3) >> 2;

    while (block != nullptr) {
        if (block->size < bestSize) {
            if (block->size == words) {
                GBARam_MarkAsUsed(block);
                return (u8*)block + 8;
            }
            if (block->size > words) {
                best     = block;
                bestSize = block->size;
            }
        }
        if (block->nextFree == 0) {
            break;
        }
        block = FROM_OFFSET(block->nextFree);
    }

    int leftover = best->size - words - 2;
    if (leftover <= 0) {
        GBARam_MarkAsUsed(best);
        return (u8*)best + 8;
    }

    MallocHeader* split = (MallocHeader*)((u8*)best + (words << 2) + 8);
    if (best->nextBlock == 0) {
        split->nextBlock = 0;
    } else {
        MallocHeader* next = FROM_OFFSET(best->nextBlock);
        split->nextBlock = best->nextBlock;
        next->prevBlock  = TO_OFFSET(split);
    }
    best->nextBlock  = TO_OFFSET(split);
    best->used       = 1;
    split->size      = (u16)(best->size - (words + 2));
    best->size       = (u16)words;
    split->prevBlock = TO_OFFSET(best);
    split->used      = 0;

    if (best->prevFree != 0) {
        FROM_OFFSET(best->prevFree)->nextFree = best->nextBlock;
    } else {
        g_FreeListTail = split;
    }
    split->prevFree = best->prevFree;

    if (best->nextFree != 0) {
        FROM_OFFSET(best->nextFree)->prevFree = best->nextBlock;
    }
    split->nextFree = best->nextFree;

    return (u8*)best + 8;
}

extern "C" void GBARam_Free(void* ptr) {
    if (ptr == nullptr) return;
    MallocHeader* block = (MallocHeader*)((u8*)ptr - 8);
    block->used = 0;
    GBARam_AddToFreeList(block);
}

/* ============================================================================
 * 2. NPC & Map Object Spawner (sub_08017DA2 in asm/sub_08017DA2.s)
 * Factory stored at word[0] = 0x08017DA3 of a SiblingObjectRecord.
 * ============================================================================ */
extern void* Sprite_LookupDefinition(u32 sprite_id);
extern void  NpcActor_Construct(
    void* existing_mem,
    void* sprite_def,
    u32   event_pool_ptr,
    const u32* extra_ptr,
    const u16* spawn_xy_ptr,
    void* parent_context
);

void Npc_SpawnFromSiblingRecord(const SiblingObjectRecord* rec, void* parent_context) {
    // Load sprite_id from rec + 0x10 and resolve its SpriteDefinition
    void* sprite_def = Sprite_LookupDefinition(rec->word_10);

    // Construct the interactive NPC actor at (rec->spawn_x, rec->spawn_y)
    // linked to EventPoolRecord at rec->word_0C (+0x0C)
    NpcActor_Construct(
        nullptr,
        sprite_def,
        rec->word_0C,
        &rec->word_14,
        &rec->spawn_x,
        parent_context
    );
}

/* ============================================================================
 * 3. Object Constructors, Timers & Intrusive Lists
 * ============================================================================ */
void* Object_Construct1(
    u8* self, u32 reg_r1, u32 reg_r2, u8 reg_r3,
    u32 stack_arg0, u32 stack_arg1, u32 stack_arg2
) {
    // 0x08014124: Allocates 0x20 bytes if self == NULL and installs vtable 0x0804A254
    if (self == nullptr) {
        self = (u8*)GBARam_Malloc(0x20);
        if (self == nullptr) return nullptr;
    }
    *(u32*)(self + 0x00) = 0x0804A254;
    *(u32*)(self + 0x04) = stack_arg0;
    *(u32*)(self + 0x08) = stack_arg1;
    *(u32*)(self + 0x0C) = stack_arg2;
    *(u32*)(self + 0x10) = reg_r2;
    *(u32*)(self + 0x14) = reg_r1;
    *(u8* )(self + 0x18) = reg_r3;
    return self;
}

void Object_AppendEntry1(u8* self, u32 value) {
    // 0x08004448: Appends a 28-bit masked word to the array at +0xE8 (max 0xFA entries)
    u32 count = *(u32*)(self + 0xE4);
    if (count >= 0xFA) {
        return;
    }
    *(u32*)(self + 0xE4) = count + 1;
    *(u32*)(self + 0xE8 + count * 4) = value & 0x0FFFFFFF;
}

void Object_AdvanceTimer1(u8* self) {
    // 0x0803E5AC: Subtracts delta (+0x4B) from timer (+0x48), mirrors at +0x12, sets bit 4 at +0x10
    u8 timer = self[0x48];
    u8 delta = self[0x4B];
    u8 next  = (u8)(timer - delta);
    self[0x48] = next;
    self[0x12] = next;
    self[0x10] |= 0x10;
}

void Object_AdvanceTimer2(u8* self) {
    // 0x0803E5DA: Adds delta (+0x4B) to timer (+0x48), clamps at 0x40, rounds +0x4A to multiple of 4
    u32 sum = (u32)self[0x48] + (u32)self[0x4B];
    if (sum >= 0x40) {
        sum = 0x40;
        self[0x4A] &= ~0x03;
    }
    self[0x48] = (u8)sum;
    self[0x12] = (u8)sum;
    self[0x10] |= 0x10;
}
