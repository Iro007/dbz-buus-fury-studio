/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #26
 * Address Range: 0x08048A1A..0x0804AACE (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08048A1A..0x08048A28 (14 bytes, Thumb)
u32 sub_08048A1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x08048B80U;
    r4 = (r0 >> 32);
    r1 = 0x0300313CU; // [0x08048A28]
    r0 = 0x08049BF8U /* &VTable_08049BF8 */; // [0x08048A2C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048A28..0x08048A2A (2 bytes, Thumb)
u32 sub_08048A28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x3CU;
    return r0;
}

// ROM Address: 0x08048A2A..0x08048A38 (14 bytes, Thumb)
u32 sub_08048A2A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r3 = stack[248]; // [sp + 0x3E0]
    r4 = (r0 >> 32);
    r1 = 0x03003140U; // [0x08048A38]
    r0 = 0x08049DB8U /* &VTable_08049DB8 */; // [0x08048A3C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048A38..0x08048A3A (2 bytes, Thumb)
u32 sub_08048A38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x40U;
    return r0;
}

// ROM Address: 0x08048A3A..0x08048A54 (26 bytes, Thumb)
u32 sub_08048A3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r5 = stack[184]; // [sp + 0x2E0]
    r4 = (r0 >> 32);
    r1 = 0x03003144U; // [0x08048A54]
    r0 = 0x08049EACU /* &VTable_08049EAC */; // [0x08048A58]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804C284U /* &VTable_0804C284 */; // [0x08048A5C]
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AA3CU /* &VTable_0804AA3C */; // [0x08048A60]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048A54..0x08048A56 (2 bytes, Thumb)
u32 sub_08048A54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x44U;
    return r0;
}

// ROM Address: 0x08048A56..0x08048A88 (50 bytes, Thumb)
u32 sub_08048A56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = stack[172]; // [sp + 0x2B0]
    r4 = (r0 >> 32);
    *(u32*)r2 = r2; r2 += 4;
    *(u32*)r2 = r7; r2 += 4;
    r4 = (r0 >> 32);
    r2 = 0xF0; // sp + 0xF0
    r4 = (r0 >> 32);
    r1 = 0x03003158U; // [0x08048A74]
    r0 = 0x0804B788U; // [0x08048A78]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A110U /* &VTable_0804A110 */; // [0x08048A7C]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r1 += 0x58U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x08048AC0U;
    r4 = (r0 >> 32);
    r1 = 0x03003170U; // [0x08048A88]
    r0 = 0x0804CB90U; // [0x08048A8C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048A88..0x08048A8A (2 bytes, Thumb)
u32 sub_08048A88(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x70U;
    return r0;
}

// ROM Address: 0x08048A8A..0x08048A98 (14 bytes, Thumb)
u32 sub_08048A8A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r4 = *(u32*)r3; r3 += 4;
    r7 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r1 = 0x03003174U; // [0x08048A98]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048A98..0x08048A9A (2 bytes, Thumb)
u32 sub_08048A98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x74U;
    return r0;
}

// ROM Address: 0x08048A9A..0x08048AB4 (26 bytes, Thumb)
u32 sub_08048A9A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r1 = 0x030031F8U; // [0x08048AA4]
    r0 = 0x0804BD78U /* &VTable_0804BD78 */; // [0x08048AA8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r1 += 0xF8U;
    r0 = (r0 << 12);
    return r0;
    r4 = (r0 >> 32);
    r1 = 0x030031FCU; // [0x08048AB4]
    r0 = 0x0804B148U /* &VTable_0804B148 */; // [0x08048AB8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048ABA..0x08048AC4 (10 bytes, Thumb)
u32 sub_08048ABA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x03003200U; // [0x08048AC4]
    r0 = 0x0804AAD4U; // [0x08048AC8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048AC4..0x08048AC6 (2 bytes, Thumb)
u32 sub_08048AC4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x0U;
    return r0;
}

// ROM Address: 0x08048AC6..0x08048AE4 (30 bytes, Thumb)
u32 sub_08048AC6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = 0x350; // sp + 0x350
    r4 = (r0 >> 32);
    r1 = 0x03003204U; // [0x08048AD4]
    r0 = 0x0804B710U /* &VTable_0804B710 */; // [0x08048AD8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r2 += 0x4U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x03003208U; // [0x08048AE4]
    r0 = 0x0804ADB0U /* &VTable_0804ADB0 */; // [0x08048AE8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048AE4..0x08048AE6 (2 bytes, Thumb)
u32 sub_08048AE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x8U;
    return r0;
}

// ROM Address: 0x08048AE6..0x08048AF4 (14 bytes, Thumb)
u32 sub_08048AE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r5 = 0x2C0; // sp + 0x2C0
    r4 = (r0 >> 32);
    r1 = 0x0300320CU; // [0x08048AF4]
    r0 = 0x0804C1D4U /* &VTable_0804C1D4 */; // [0x08048AF8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048AF4..0x08048AF6 (2 bytes, Thumb)
u32 sub_08048AF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xCU;
    return r0;
}

// ROM Address: 0x08048AF6..0x08048B18 (34 bytes, Thumb)
u32 sub_08048AF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r4; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
    *(u32*)r1 = r7; r1 += 4;
    r4 = (r0 >> 32);
    r1 = 0x03003214U; // [0x08048B10]
    r0 = 0x0804CCA4U /* &VTable_0804CCA4 */; // [0x08048B14]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804B1B0U /* &VTable_0804B1B0 */; // [0x08048B18]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r2 += 0x14U;
    r0 = (r0 << 12);
    r2 = *(u32*)r4; r4 += 4;
    r5 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08048B1A..0x08048B24 (10 bytes, Thumb)
u32 sub_08048B1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0300321CU; // [0x08048B24]
    r0 = 0x0804C660U /* &VTable_0804C660 */; // [0x08048B28]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048B24..0x08048B26 (2 bytes, Thumb)
u32 sub_08048B24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x1CU;
    return r0;
}

// ROM Address: 0x08048B26..0x08048B34 (14 bytes, Thumb)
u32 sub_08048B26(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r6 = r5; r6 += 4;
    *(u32*)r6 = r6; r6 += 4;
    r4 = (r0 >> 32);
    r1 = 0x03003220U; // [0x08048B34]
    r0 = 0x0804D6ACU; // [0x08048B38]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048B34..0x08048B36 (2 bytes, Thumb)
u32 sub_08048B34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x20U;
    return r0;
}

// ROM Address: 0x08048B36..0x08048B44 (14 bytes, Thumb)
u32 sub_08048B36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08048A94(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x03003224U; // [0x08048B44]
    r0 = 0x0804D69CU /* &VTable_0804D69C */; // [0x08048B48]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048B44..0x08048B46 (2 bytes, Thumb)
u32 sub_08048B44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x24U;
    return r0;
}

// ROM Address: 0x08048B46..0x08048B76 (48 bytes, Thumb)
u32 sub_08048B46(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08048A84(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = 0x0804D968U /* &VTable_0804D968 */; // [0x08048B5C]
    r1 = 0x0300322CU; // [0x08048B60]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804BD48U /* &VTable_0804BD48 */; // [0x08048B64]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08048C30(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 += 0x2CU;
    r0 = (r0 << 12);
    return r0;
    r4 = (r0 >> 32);
    r0 = 0x0804E064U /* &VTable_0804E064 */; // [0x08048B78]
    r1 = 0x03003234U; // [0x08048B7C]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804D934U /* &VTable_0804D934 */; // [0x08048B80]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048B7A..0x08048BBE (68 bytes, Thumb)
u32 sub_08048B7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 += 0x34U;
    r0 = (r0 << 12);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08048BEC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = 0x0804DBCCU /* &VTable_0804DBCC */; // [0x08048B94]
    r1 = 0x0300323CU; // [0x08048B98]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804CB70U /* &VTable_0804CB70 */; // [0x08048B9C]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if (cmp_lhs < cmp_rhs) return sub_08048B30(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 += 0x3CU;
    r0 = (r0 << 12);
    r4 = *(u32*)r3; r3 += 4;
    r5 = *(u32*)r3; r3 += 4;
    r6 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r1 = 0x03003244U; // [0x08048BA8]
    r0 = 0x0804BD68U /* &VTable_0804BD68 */; // [0x08048BAC]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r2 += 0x44U;
    r0 = (r0 << 12);
    return r0;
    r4 = (r0 >> 32);
    r0 = 0x0804E170U /* &VTable_0804E170 */; // [0x08048BC0]
    r1 = 0x03003248U; // [0x08048BC4]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804BD38U /* &VTable_0804BD38 */; // [0x08048BC8]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048BBE..0x08048BC2 (4 bytes, Thumb)
u32 sub_08048BBE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_08048EA4(r0, r1, r2, r3);
}

// ROM Address: 0x08048BC2..0x08048BD4 (18 bytes, Thumb)
u32 sub_08048BC2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 += 0x48U;
    r0 = (r0 << 12);
    return r0;
    r4 = (r0 >> 32);
    r1 = 0x03003250U; // [0x08048BD4]
    r0 = 0x0804B220U /* &VTable_0804B220 */; // [0x08048BD8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048BDA..0x08048BE4 (10 bytes, Thumb)
u32 sub_08048BDA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x03003254U; // [0x08048BE4]
    r0 = 0x0804D45CU /* &VTable_0804D45C */; // [0x08048BE8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048BE4..0x08048BE6 (2 bytes, Thumb)
u32 sub_08048BE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x54U;
    return r0;
}

// ROM Address: 0x08048BE6..0x08048BF4 (14 bytes, Thumb)
u32 sub_08048BE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_08048CA4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x03003258U; // [0x08048BF4]
    r0 = 0x0804AD48U /* &VTable_0804AD48 */; // [0x08048BF8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048BF4..0x08048BF6 (2 bytes, Thumb)
u32 sub_08048BF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x58U;
    return r0;
}

// ROM Address: 0x08048BF6..0x08048C42 (76 bytes, Thumb)
u32 sub_08048BF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r5 = 0x120; // sp + 0x120
    r4 = (r0 >> 32);
    r0 = 0x0804D310U /* &VTable_0804D310 */; // [0x08048C0C]
    r1 = 0x0300325CU; // [0x08048C10]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804BC78U /* &VTable_0804BC78 */; // [0x08048C14]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08048C30;
    r4 = (r0 >> 32);
    r2 += 0x5CU;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = 0x0804CBC8U /* &VTable_0804CBC8 */; // [0x08048C28]
    r1 = 0x03003264U; // [0x08048C2C]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804B090U /* &VTable_0804B090 */; // [0x08048C30]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r3 = *(u32*)r3; r3 += 4;
    r6 = *(u32*)r3; r3 += 4;
    r7 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r2 += 0x64U;
    r0 = (r0 << 12);
loc_08048C30:
    r4 = (r0 >> 32);
    r0 = 0x0804B764U /* &VTable_0804B764 */; // [0x08048C44]
    r1 = 0x0300326CU; // [0x08048C48]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A0F0U /* &VTable_0804A0F0 */; // [0x08048C4C]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048C46..0x08048C58 (18 bytes, Thumb)
u32 sub_08048C46(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 += 0x6CU;
    r0 = (r0 << 12);
    r0 = 0x08049010U;
    r4 = (r0 >> 32);
    r1 = 0x03003274U; // [0x08048C58]
    r0 = 0x0804CFA8U /* &VTable_0804CFA8 */; // [0x08048C5C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048C58..0x08048C5A (2 bytes, Thumb)
u32 sub_08048C58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x74U;
    return r0;
}

// ROM Address: 0x08048C5A..0x08048C84 (42 bytes, Thumb)
u32 sub_08048C5A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r3 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r4 = (r0 >> 32);
    r0 = 0x0804C6D8U /* &VTable_0804C6D8 */; // [0x08048C70]
    r1 = 0x03003278U; // [0x08048C74]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AD28U /* &VTable_0804AD28 */; // [0x08048C78]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    *(u32*)r6 = r3; r6 += 4;
    *(u32*)r6 = r4; r6 += 4;
    *(u32*)r6 = r6; r6 += 4;
    *(u32*)r6 = r7; r6 += 4;
    r4 = (r0 >> 32);
    r2 += 0x78U;
    r0 = (r0 << 12);
    r5 = 0xA0; // sp + 0xA0
    r4 = (r0 >> 32);
    r1 = 0x03003280U; // [0x08048C84]
    r0 = 0x0804C1B4U /* &VTable_0804C1B4 */; // [0x08048C88]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048C84..0x08048C86 (2 bytes, Thumb)
u32 sub_08048C84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x80U;
    return r0;
}

// ROM Address: 0x08048C86..0x08048D0C (134 bytes, Thumb)
u32 sub_08048C86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r4; r1 += 4;
    *(u32*)r1 = r5; r1 += 4;
    *(u32*)r1 = r7; r1 += 4;
    r4 = (r0 >> 32);
    r1 = 0x0300328CU; // [0x08048CA0]
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804C7B4U /* &VTable_0804C7B4 */; // [0x08048CA4]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AD88U /* &VTable_0804AD88 */; // [0x08048CA8]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r2 += 0x8CU;
    r0 = (r0 << 12);
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r4; r7 += 4;
    *(u32*)r7 = r5; r7 += 4;
    *(u32*)r7 = r7; r7 += 4;
    r4 = (r0 >> 32);
    r5 = 0x220; // sp + 0x220
    r4 = (r0 >> 32);
    r0 = 0x0804CFF0U /* &VTable_0804CFF0 */; // [0x08048CBC]
    r1 = 0x03003294U; // [0x08048CC0]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804B630U /* &VTable_0804B630 */; // [0x08048CC4]
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r4 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r6 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r4 = (r0 >> 32);
    r2 += 0x94U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = 0x0804D014U /* &VTable_0804D014 */; // [0x08048CD8]
    r1 = 0x030032A0U; // [0x08048CDC]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804B668U /* &VTable_0804B668 */; // [0x08048CE0]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08048D04;
    r4 = (r0 >> 32);
    r2 += 0xA0U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x030032A8U; // [0x08048CEC]
    r0 = 0x0804B688U /* &VTable_0804B688 */; // [0x08048CF0]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r2 += 0xA8U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x030032ACU; // [0x08048CFC]
    r0 = 0x0804CB00U /* &VTable_0804CB00 */; // [0x08048D00]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r2 += 0xACU;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
loc_08048D04:
    r1 = 0x030032B0U; // [0x08048D0C]
    r0 = 0x0804BC88U /* &VTable_0804BC88 */; // [0x08048D10]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048D0C..0x08048D0E (2 bytes, Thumb)
u32 sub_08048D0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xB0U;
    return r0;
}

// ROM Address: 0x08048D0E..0x08048D1C (14 bytes, Thumb)
u32 sub_08048D0E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x030032B4U; // [0x08048D1C]
    r0 = 0x0804DF74U /* &VTable_0804DF74 */; // [0x08048D20]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048D1E..0x08048D2C (14 bytes, Thumb)
u32 sub_08048D1E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r0 = Bios_Swi_74(r0, r1); // SWI 0x74
    r4 = (r0 >> 32);
    r1 = 0x030032B8U; // [0x08048D2C]
    r0 = 0x0804CC34U /* &VTable_0804CC34 */; // [0x08048D30]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048D2C..0x08048D2E (2 bytes, Thumb)
u32 sub_08048D2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xB8U;
    return r0;
}

// ROM Address: 0x08048D2E..0x08048D40 (18 bytes, Thumb)
u32 sub_08048D2E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    r5 = *(u32*)r4; r4 += 4;
    r4 = (r0 >> 32);
    r1 = 0x030032BCU; // [0x08048D40]
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804D3A0U /* &VTable_0804D3A0 */; // [0x08048D44]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048D40..0x08048D42 (2 bytes, Thumb)
u32 sub_08048D40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xBCU;
    return r0;
}

// ROM Address: 0x08048D42..0x08048D50 (14 bytes, Thumb)
u32 sub_08048D42(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08048C88(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x030032C4U; // [0x08048D50]
    r0 = 0x0804D68CU /* &VTable_0804D68C */; // [0x08048D54]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048D50..0x08048D52 (2 bytes, Thumb)
u32 sub_08048D50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xC4U;
    return r0;
}

// ROM Address: 0x08048D52..0x08048D60 (14 bytes, Thumb)
u32 sub_08048D52(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08048C70(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x030032C8U; // [0x08048D60]
    r0 = 0x0804C3F0U /* &VTable_0804C3F0 */; // [0x08048D64]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048D60..0x08048D62 (2 bytes, Thumb)
u32 sub_08048D60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xC8U;
    return r0;
}

// ROM Address: 0x08048D62..0x08048D70 (14 bytes, Thumb)
u32 sub_08048D62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r5; r3 += 4;
    *(u32*)r3 = r6; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r4 = (r0 >> 32);
    r1 = 0x030032CCU; // [0x08048D70]
    r0 = 0x0804D7F4U /* &VTable_0804D7F4 */; // [0x08048D74]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048D70..0x08048D72 (2 bytes, Thumb)
u32 sub_08048D70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xCCU;
    return r0;
}

// ROM Address: 0x08048D72..0x08048D90 (30 bytes, Thumb)
u32 sub_08048D72(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08048D60(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x030032D0U; // [0x08048D80]
    r0 = 0x0804B81CU /* &VTable_0804B81C */; // [0x08048D84]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r2 += 0xD0U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x030032D4U; // [0x08048D90]
    r0 = 0x0804C680U /* &VTable_0804C680 */; // [0x08048D94]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048D90..0x08048D92 (2 bytes, Thumb)
u32 sub_08048D90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xD4U;
    return r0;
}

// ROM Address: 0x08048D92..0x08048DB0 (30 bytes, Thumb)
u32 sub_08048D92(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r6 = r7; r6 += 4;
    r4 = (r0 >> 32);
    r1 = 0x030032D8U; // [0x08048DA0]
    r0 = 0x0804DE24U /* &VTable_0804DE24 */; // [0x08048DA4]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r2 += 0xD8U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x030032E0U; // [0x08048DB0]
    r0 = 0x0804B0E8U /* &VTable_0804B0E8 */; // [0x08048DB4]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048DB0..0x08048DB2 (2 bytes, Thumb)
u32 sub_08048DB0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xE0U;
    return r0;
}

// ROM Address: 0x08048DB2..0x08048DC0 (14 bytes, Thumb)
u32 sub_08048DB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x030032E8U; // [0x08048DC0]
    r0 = 0x0804C140U /* &VTable_0804C140 */; // [0x08048DC4]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048DC0..0x08048DC2 (2 bytes, Thumb)
u32 sub_08048DC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xE8U;
    return r0;
}

// ROM Address: 0x08048DC2..0x08048DD0 (14 bytes, Thumb)
u32 sub_08048DC2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r1 = r6; r1 += 4;
    r4 = (r0 >> 32);
    r1 = 0x030032F0U; // [0x08048DD0]
    r0 = 0x0804A100U /* &VTable_0804A100 */; // [0x08048DD4]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048DD0..0x08048DD2 (2 bytes, Thumb)
u32 sub_08048DD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xF0U;
    return r0;
}

// ROM Address: 0x08048DD2..0x08048DE6 (20 bytes, Thumb)
u32 sub_08048DD2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r1 = 0x08048DD8U;
    r4 = (r0 >> 32);
    r0 = 0x0804B7F8U /* &VTable_0804B7F8 */; // [0x08048DE8]
    r1 = 0x030032F4U; // [0x08048DEC]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A158U /* &VTable_0804A158 */; // [0x08048DF0]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048DEA..0x08048DFC (18 bytes, Thumb)
u32 sub_08048DEA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 += 0xF4U;
    r0 = (r0 << 12);
    r1 = 0x08048F54U;
    r4 = (r0 >> 32);
    r1 = 0x030032FCU; // [0x08048DFC]
    r0 = 0x0804D2D8U /* &VTable_0804D2D8 */; // [0x08048E00]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048DFC..0x08048DFE (2 bytes, Thumb)
u32 sub_08048DFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xFCU;
    return r0;
}

// ROM Address: 0x08048DFE..0x08048E38 (58 bytes, Thumb)
u32 sub_08048DFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08048DB4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = 0x080493C8U /* &VTable_080493C8 */; // [0x08048E14]
    r1 = 0x0300348CU; // [0x08048E18]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804956CU /* &VTable_0804956C */; // [0x08048E1C]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    stack[200] = r3; // [sp + 0x320]
    r4 = (r0 >> 32);
    r4 += 0x8CU;
    r0 = (r0 << 12);
    stack[108] = r5; // [sp + 0x1B0]
    r4 = (r0 >> 32);
    r0 = 0x08049834U /* &VTable_08049834 */; // [0x08048E30]
    r1 = 0x03004A70U; // [0x08048E34]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A7D0U /* &VTable_0804A7D0 */; // [0x08048E38]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r0 = stack[52]; // [sp + 0xD0]
    r4 = (r0 >> 32);
    r2 = 0xFFFFF915U; // [0x08048FF8]
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08048E3A..0x08048E44 (10 bytes, Thumb)
u32 sub_08048E3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = 0x0804984CU /* &VTable_0804984C */; // [0x08048E44]
    r1 = 0x03001964U; // [0x08048E48]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048E44..0x08048E46 (2 bytes, Thumb)
u32 sub_08048E44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[76]; // [sp + 0x130]
    return r0;
}

// ROM Address: 0x08048E46..0x08048E54 (14 bytes, Thumb)
u32 sub_08048E46(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = r4 + r5;
    r0 = (r0 << 12);
    r0 = 0x080493E4U /* &VTable_080493E4 */; // [0x08048E54]
    r1 = 0x03001AF0U; // [0x08048E58]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048E54..0x08048E56 (2 bytes, Thumb)
u32 sub_08048E54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    return r0;
}

// ROM Address: 0x08048E56..0x08048E84 (46 bytes, Thumb)
u32 sub_08048E56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = r6 - r3;
    r0 = (r0 << 12);
    r0 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x08048E6C]
    r1 = 0x03001C44U; // [0x08048E70]
    *(u32*)(r1) = (u32)r0;
    r1 = 0x03002A4CU; // [0x08048E78]
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08048E74]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    r4 = r0 + 1;
    r0 = (r0 << 12);
    return sub_08048720(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r2; cmp_rhs = 76;
    r0 = (r0 << 12);
    r0 = 0x08049AE0U /* &VTable_08049AE0 */; // [0x08048E84]
    r1 = 0x03002BD4U; // [0x08048E88]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048E84..0x08048E8E (10 bytes, Thumb)
u32 sub_08048E84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[224]; // [sp + 0x380]
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r3; cmp_rhs = 212;
    r0 = (r0 << 12);
    r0 = 0x03002BD8U; // [0x08048EA4]
    return r0;
}

// ROM Address: 0x08048E8E..0x08048EA4 (22 bytes, Thumb)
u32 sub_08048E8E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08048EA2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08048E9E: BL __call_via_r3
loc_08048EA2:
    return r0;
}

// ROM Address: 0x08048EA4..0x08048EA6 (2 bytes, Thumb)
u32 sub_08048EA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 216;
    return r0;
}

// ROM Address: 0x08048EA6..0x08048EB4 (14 bytes, Thumb)
u32 sub_08048EA6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r0 = 0x080491F0U /* &VTable_080491F0 */; // [0x08048EB4]
    r1 = 0x03003490U; // [0x08048EB8]
    *(u32*)(r1) = (u32)r0;
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048EB4..0x08048EB6 (2 bytes, Thumb)
u32 sub_08048EB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    return r0;
}

// ROM Address: 0x08048EB6..0x08048ECA (20 bytes, Thumb)
u32 sub_08048EB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 += 0x90U;
    r0 = (r0 << 12);
    r0 = 0x08049AE0U /* &VTable_08049AE0 */; // [0x08048ECC]
    r1 = 0x03004A74U; // [0x08048ED0]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x08049320U /* &VTable_08049320 */; // [0x08048ED4]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// Evidence: docs/MAP_BLOCK_LAYOUTS.md:45 states the address is a Thumb veneer that switches to ARM and runs the packed decoder on IWRAM 0x03000040; the body's literal pool names it
// ROM Address: 0x08049120..0x08049124 (4 bytes, Thumb)
u32 Thunk_Jcalg1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x0804912C..0x08049130 (4 bytes, Thumb)
u32 sub_0804912C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// Evidence: docs/MAP_BLOCK_LAYOUTS.md:73 states a 32-byte ldm/stm copy loop at the address, called to move a decoded buffer to VRAM
// ROM Address: 0x08049138..0x0804913C (4 bytes, Thumb)
u32 Thunk_VramCopy(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM/IWRAM Address: 0x0804913C..0x08049144 (8 bytes, ARM32)
u32 sub_0804913C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x0804913C: ARM 0xE51FF004 */
    /* 0x08049140: ARM 0x03000768 */
    return r0;
}

// Evidence: docs/MAP_BLOCK_LAYOUTS.md:85 states 0x0800657A calls it to copy 512 B to 0x05000000
// ROM Address: 0x08049144..0x08049148 (4 bytes, Thumb)
u32 Thunk_PaletteCopy(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x08049150..0x08049154 (4 bytes, Thumb)
u32 sub_08049150(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM/IWRAM Address: 0x08049154..0x0804915C (8 bytes, ARM32)
u32 sub_08049154(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08049154: ARM 0xE51FF004 */
    /* 0x08049158: ARM 0x03000388 */
    return r0;
}

// ROM Address: 0x0804915C..0x08049160 (4 bytes, Thumb)
u32 sub_0804915C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x08049168..0x0804916C (4 bytes, Thumb)
u32 sub_08049168(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x08049174..0x08049178 (4 bytes, Thumb)
u32 sub_08049174(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x08049180..0x08049184 (4 bytes, Thumb)
u32 sub_08049180(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x0804918C..0x08049190 (4 bytes, Thumb)
u32 sub_0804918C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM/IWRAM Address: 0x08049190..0x08049198 (8 bytes, ARM32)
u32 sub_08049190(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08049190: ARM 0xE51FF004 */
    /* 0x08049194: ARM 0x030002DC */
    return r0;
}

// ROM Address: 0x08049198..0x0804919C (4 bytes, Thumb)
u32 sub_08049198(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x080491A0..0x080491A4 (4 bytes, Thumb)
u32 sub_080491A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x080491A8..0x080491AC (4 bytes, Thumb)
u32 sub_080491A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x080491B4..0x080491B8 (4 bytes, Thumb)
u32 sub_080491B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x080491C0..0x080491C4 (4 bytes, Thumb)
u32 sub_080491C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r8 = r8;
    return r0;
}

// ROM Address: 0x080494D8..0x080494DE (6 bytes, Thumb)
u32 sub_080494D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r7 + 0x15) = (u8)r1;
    r0 = r0;
    return r0;
}

// ROM Address: 0x08049B44..0x08049B4A (6 bytes, Thumb)
u32 sub_08049B44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x18) = (u32)r1;
    r0 = r0;
    return r0;
}

// ROM Address: 0x08049DBA..0x08049DC8 (14 bytes, Thumb)
u32 sub_08049DBA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u32*)(r1 + 0x10) = (u32)r5;
    r0 = r0;
    r1 = (u32)(*(s8*)(r7 + r6));
    r0 = r0;
    *(u16*)(r2 + r6) = (u16)r1;
    r0 = r0;
    return r0;
}

// ROM Address: 0x0804A21A..0x0804A242 (40 bytes, Thumb)
u32 sub_0804A21A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r1 = *(u8*)(r3 + r2);
    r0 = r0;
    *(u16*)(r3 + r6) = (u16)r5;
    r0 = r0;
    r5 = *(u16*)(r4 + r2);
    r0 = r0;
    r5 = *(u16*)(r7 + r0);
    r0 = r0;
    r3 = 0xFFFCF90DU; // [0x0804A2F4]
    r0 = r0;
    r1 = (u32)(*(s8*)(r0 + r7));
    r0 = r0;
    r5 = *(u32*)(r7 + r1);
    r0 = r0;
    r5 = *(u32*)(r4 + 0x6C);
    r0 = r0;
    r5 = (u32)(*(s8*)(r0 + r3));
    r0 = r0;
    r0 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r4 = *(u32*)r2; r2 += 4;
    r5 = *(u32*)r2; r2 += 4;
    r6 = *(u32*)r2; r2 += 4;
    return r0;
}

// ROM Address: 0x0804A246..0x0804A24A (4 bytes, Thumb)
u32 sub_0804A246(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0;
}

// ROM Address: 0x0804A59C..0x0804A5AA (14 bytes, Thumb)
u32 sub_0804A59C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2 + r4);
    r0 = r0;
    r5 = *(u32*)(r4 + r4);
    r0 = r0;
    r1 = 0x00004731U; // [0x0804A67C]
    r0 = r0;
    return r0;
}

// ROM Address: 0x0804A678..0x0804A67C (4 bytes, Thumb)
u32 sub_0804A678(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r5 + 0x48);
    r0 = r0;
    return r0;
}

// ROM Address: 0x0804AA9C..0x0804AAA0 (4 bytes, Thumb)
u32 sub_0804AA9C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xFFFC304DU; // [0x0804AE14]
    r0 = r0;
    return r0;
}

// ROM Address: 0x0804AACE..0x0804AAE0 (18 bytes, Thumb)
u32 sub_0804AACE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r5 |= r3;
    r0 = r0;
    r3 -= 0xF1U;
    r0 = r0;
    *(u8*)(r3 + r3) = (u8)r5;
    r0 = r0;
    r2 = 0x00004539U; // [0x0804AD54]
    r0 = r0;
    return r0;
}
