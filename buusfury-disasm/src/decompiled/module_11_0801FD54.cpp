/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #11
 * Address Range: 0x0801FD54..0x080232FA (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0801FD54..0x0801FE2C (216 bytes, Thumb)
u32 sub_0801FD54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x20);
    r0 += 0x1U;
    *(u32*)(r4 + 0x20) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r7;
    r0 = 0x0U;
    return r0;
    r6 = 0x0U;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0801FE2C(r0, r1, r2, r3);
    cmp_lhs = (s32)r5; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) return sub_0801FE54(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x1DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801FD74: BL 0x0803D5B8
    r7 = 0x0804920CU /* &VTable_0804920C */; // [0x0801FF40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FD9A;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r0 + 0x4) = (u32)r6;
    *(u32*)(r0) = (u32)r7;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    r2 = 0xFFU;
    r2 += 0x15U;
    *(u32*)(r1 + 0x10) = (u32)r6;
    *(u8*)(r2 + r0) = (u8)r6;
    r2 = 0x0804CAD4U /* &VTable_0804CAD4 */; // [0x0801FF48]
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x18) = (u32)r4;
loc_0801FD9A:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801FD9A
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0801FE5E(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x21U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801FDA6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FDC4;
    r1 = r0;
    r1 += 0xFFU;
    *(u32*)(r0 + 0x4) = (u32)r6;
    *(u32*)(r0) = (u32)r7;
    r1 += 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    r2 = 0x0804B604U /* &VTable_0804B604 */; // [0x0801FF4C]
    *(u32*)(r1 + 0x10) = (u32)r6;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r4;
loc_0801FDC4:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801FDC4
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0801FE5E(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_0801F556(r0, r1, r2, r3); // 0x0801FDCE
    r1 = 0x7U;
    r0 = 0x0U;
    r0 = sub_080502FC(r0, r1, r2, r3); // 0x0801FDD6: BL 0x080502FC
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801FDDA
    r0 = 0xFFU;
    r0 += 0x19U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801FDE2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FE00;
    r1 = r0;
    r1 += 0xFFU;
    *(u32*)(r0 + 0x4) = (u32)r6;
    *(u32*)(r0) = (u32)r7;
    r1 += 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    r2 = 0x08049B5CU /* &VTable_08049B5C */; // [0x0801FF50]
    *(u32*)(r1 + 0x10) = (u32)r6;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r6;
loc_0801FE00:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801FE00
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801FE08: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FE24;
    r1 = r0;
    r1 += 0xFFU;
    *(u32*)(r0 + 0x4) = (u32)r6;
    *(u32*)(r0) = (u32)r7;
    r1 += 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x0801FF54]
    *(u32*)(r0) = (u32)r1;
loc_0801FE24:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801FE24
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801FE2C..0x0801FE56 (42 bytes, Thumb)
u32 sub_0801FE2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2FCU; // (191 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801FE30: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FE50;
    r3 = 0x1U;
    r2 = 0xDU;
    r1 = 0x5EU;
    r0 = r4;
    r0 = sub_08005460(r0, r1, r2, r3); // 0x0801FE40
    r0 = 0x08049B2CU /* &VTable_08049B2C */; // [0x0801FF58]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x38) = (u32)r6;
loc_0801FE50:
    r0 = r4;
    return sub_0801FE56(r0, r1, r2, r3);
    return sub_0801FE68(r0, r1, r2, r3);
}

// ROM Address: 0x0801FE56..0x0801FE5E (8 bytes, Thumb)
u32 sub_0801FE56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801FE56
    r0 = 0x1U;
    return sub_0801FE2A(r0, r1, r2, r3);
}

// ROM Address: 0x0801FE5E..0x0801FE92 (52 bytes, Thumb)
u32 sub_0801FE5E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = sub_08050414(r0, r1, r2, r3); // 0x0801FE60
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801FE64
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = *(u8*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FE82;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801FE8E;
    r2 = r5;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0801FA3C(r0, r1, r2, r3); // 0x0801FE7C
    return sub_0801FE2A(r0, r1, r2, r3);
loc_0801FE82:
    r2 = r5;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0801FC7A(r0, r1, r2, r3); // 0x0801FE88
    return sub_0801FE2A(r0, r1, r2, r3);
loc_0801FE8E:
    r0 = 0x0U;
    return sub_0801FE2A(r0, r1, r2, r3);
}

// ROM Address: 0x0801FE92..0x0801FEDA (72 bytes, Thumb)
u32 sub_0801FE92(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r4 += 0x110U;
    r3 = 0x0872083CU; // [0x0801FF60]
    r2 = *(u8*)(r4 + 0x4);
    r6 = *(u32*)(r3 + 0x4);
    r1 = 0x000005C4U; // [0x0801FF5C]
    r5 = r4;
    r7 = r6 + r1;
    r6 = 0x0U;
    r5 -= 0x10U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r1 = 0x0831947CU; // [0x0801FF64]
    if (cmp_lhs == cmp_rhs) return sub_0801FEDA(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801FED6;
    r0 += 0x12CU;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801FED6;
    r0 = *(u32*)(r3);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 26);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801FED6;
    r3 = r6;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801FECE
    *(u8*)(r4 + 0x4) = (u8)r6;
    *(u32*)(r5 + 0x10) = (u32)r6;
loc_0801FED6:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801FEDA..0x0801FF02 (40 bytes, Thumb)
u32 sub_0801FEDA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xBA0U; // (93 << 5)
    r0 = r0 + r2;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0801FED6(r0, r1, r2, r3);
    r0 = *(u32*)(r3);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801FED6(r0, r1, r2, r3);
    r3 = r6;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801FEF6
    r0 = 0x1U;
    *(u8*)(r4 + 0x4) = (u8)r0;
    *(u32*)(r5 + 0x10) = (u32)r6;
    return sub_0801FED6(r0, r1, r2, r3);
}

// ROM Address: 0x0801FF04..0x0801FF3A (54 bytes, Thumb)
u32 sub_0801FF04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801FF3A(r0, r1, r2, r3);
    r4 = 0x0U;
    r0 = 0xFFU;
    r0 += 0x15U;
    *(u32*)(r1) = (u32)r4;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801FF14: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FF32;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801FF40]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    *(u32*)(r1 + 0x10) = (u32)r4;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x0801FF54]
    *(u32*)(r0) = (u32)r1;
loc_0801FF32:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801FF32
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801FF3A..0x0801FF40 (6 bytes, Thumb)
u32 sub_0801FF3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x0801FF3A
    return r0;
}

// ROM Address: 0x0801FF54..0x0801FF94 (64 bytes, Thumb)
u32 sub_0801FF54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r3 = stack[44]; // [sp + 0xB0]
    r4 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = (r7 >> 32);
    r2 = (r6 >> 1);
    stack[124] = r4; // [sp + 0x1F0]
    r1 = (r6 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    r0 += 0x100U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FF7C;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0801FF7C;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0801FF8E;
loc_0801FF7C:
    r1 = *(u32*)(r0 + 0x2C);
    r1 += 0x1U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 20;
    if (cmp_lhs <= cmp_rhs) goto loc_0801FF8C;
    r1 = 0x03002F50U; // [0x0801FF94]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
loc_0801FF8C:
    return r0; // BX lr
loc_0801FF8E:
    r1 = 0x0U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x0801FF94..0x0801FF98 (4 bytes, Thumb)
u32 sub_0801FF94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0801FF98..0x08020054 (188 bytes, Thumb)
u32 sub_0801FF98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08005740(r0, r1, r2, r3); // 0x0801FF9C: BL 0x08005740
    r2 = 0x4000000U; // (1 << 26)
    r0 = *(u16*)(r2);
    r1 = 0x1040U; // (65 << 6)
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FFC4;
    r0 = 0x0U;
    r0 = sub_080504B4(r0, r1, r2, r3); // 0x0801FFBC
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801FFC0
loc_0801FFC4:
    r0 = 0x5U;
    r1 = r4;
    r0 = (r0 << 7);
    r0 = r4 + r0;
    r1 += 0x12CU;
    r4 += 0x100U;
    r2 = *(u32*)(r4 + 0xC);
    r0 = *(u32*)(r0 + 0x34);
    r2 = (r2 << 7);
    r1 = *(u32*)(r1 + r2);
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0;
    r0 = sub_08005864(r0, r1, r2, r3); // 0x0801FFE2
    r2 = 0x4000000U; // (1 << 26)
    r0 = *(u16*)(r2);
    r1 = 0x1040U; // (65 << 6)
    r0 &= ~r1;
    *(u16*)(r2) = (u16)r0;
    return r0;
    r5 = r0;
    r6 = r0;
    r3 = 0x0872084CU; // [0x0802028C]
    r0 = 0x000005C4U; // [0x08020288]
    r1 = *(u32*)(r3 + 0x4);
    r4 = r5;
    r4 += 0xFFU;
    r6 += 0xFFU;
    r0 = r1 + r0;
    r6 += 0x2DU;
    r4 += 0x1U;
    r7 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r1 = 0x08319488U; // [0x08020290]
    if (cmp_lhs == cmp_rhs) return sub_08020054(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080200FE(r0, r1, r2, r3);
    r1 = 0x280U; // (5 << 7)
    r5 = r5 + r1;
    r1 = 0x08319488U; // [0x08020290]
    r1 -= 0xCU;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08020100(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08020050;
    r2 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs >= cmp_rhs) goto loc_08020048;
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08020036
    r0 = *(u32*)(r4 + 0xC);
    r0 += 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = (r0 << 7);
    r0 = *(u32*)(r6 + r0);
    r1 = *(u32*)(r5 + 0x34);
    *(u32*)(r1 + 0x8) = (u32)r0;
loc_08020048:
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r7;
loc_08020050:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08020054..0x08020102 (174 bytes, Thumb)
u32 sub_08020054(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08020058
    r0 = *(u32*)(r4 + 0xC);
    r0 = (r0 << 7);
    r0 = *(u32*)(r6 + r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08020050(r0, r1, r2, r3);
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802006E: BL 0x08046AA2
    r6 = 0x0872084CU; // [0x0802028C]
    r0 = *(u32*)(r6 + 0x14);
    r0 = sub_08009680(r0, r1, r2, r3); // 0x08020076
    r0 = 0x03001910U; // [0x08020294]
    r1 = *(u32*)(r4 + 0xC);
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r6 + 0x10);
    r0 = sub_080048A0(r0, r1, r2, r3); // 0x08020082
    r0 = 0x2C0U; // (11 << 6)
    r0 = r5 + r0;
    r0 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802009C;
    r0 = sub_0801F506(r0, r1, r2, r3); // 0x08020092
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08020096
    return sub_08020050(r0, r1, r2, r3);
loc_0802009C:
    r0 = *(u32*)(r6 + 0x8);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080200A6: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080200D8;
    r0 = 0xFFU;
    r0 += 0x3DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080200B2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080200D0;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08020298]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    *(u32*)(r1 + 0x10) = (u32)r7;
    r1 = 0x0804A3BCU /* &VTable_0804A3BC */; // [0x0802029C]
    *(u32*)(r0) = (u32)r1;
loc_080200D0:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080200D0
    r0 = 0x1U;
    return sub_08020052(r0, r1, r2, r3);
loc_080200D8:
    r0 = 0xFFU;
    r0 += 0x1DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080200DC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08020108(r0, r1, r2, r3);
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08020298]
    r2 = 0xFFU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    *(u32*)(r1 + 0x10) = (u32)r7;
    r2 += 0x15U;
    *(u8*)(r2 + r0) = (u8)r7;
    return sub_08020102(r0, r1, r2, r3);
    return sub_080201A6(r0, r1, r2, r3);
    return sub_080201D8(r0, r1, r2, r3);
}

// ROM Address: 0x08020102..0x080201D8 (214 bytes, Thumb)
u32 sub_08020102(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0804B550U /* &VTable_0804B550 */; // [0x080202A0]
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x18) = (u32)r7;
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08020108
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0802019A;
    r0 = 0x00000F6CU; // [0x080202A4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08020112: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08020190;
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x08020298]
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    r4 -= 0x8U;
    r0 = r4;
    r0 += 0x100U;
    *(u32*)(r0 + 0xC) = (u32)r7;
    *(u32*)(r0 + 0x8) = (u32)r7;
    *(u32*)(r0 + 0x10) = (u32)r7;
    r0 = 0x0804CAA8U /* &VTable_0804CAA8 */; // [0x080202A8]
    *(u32*)(r4) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x95U;
    *(u32*)(r0 + r4) = r7;
    r0 = 0x00000584U; // [0x080202AC]
    r0 = r4 + r0;
    *(u32*)(r0) = (u32)r7;
    r0 = 0x000005F4U; // [0x080202B0]
    r0 = r4 + r0;
    r0 = sub_08004838(r0, r1, r2, r3); // 0x08020140
    r0 = 0x00000E9CU; // [0x080202B4]
    r6 = 0x08050869U; // [0x080202B8]
    r5 = r4 + r0;
    r1 = r5;
    r1 += 0x3AU;
    r0 = r5;
    r2 = 0x2U;
    r3 = r6;
    r0 += 0x2EU;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08020156: BL 0x08046FF4
    r7 = 0x08050535U; // [0x080202BC]
    r1 = r5;
    r1 += 0x4CU;
    r2 = 0x4U;
    r0 = r5;
    r3 = r7;
    r0 += 0x3CU;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08020168: BL 0x08046FF4
    r0 = 0x00000F04U; // [0x080202C0]
    r3 = r6;
    r5 = r4 + r0;
    r1 = r5;
    r1 += 0x3AU;
    r0 = r5;
    r2 = 0x2U;
    r0 += 0x2EU;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0802017C: BL 0x08046FF4
    r1 = r5;
    r1 += 0x4CU;
    r3 = r7;
    r2 = 0x4U;
    r0 = r5;
    r0 += 0x3CU;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0802018C: BL 0x08046FF4
loc_08020190:
    r0 = r4;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08020192
    r0 = 0x1U;
    return sub_08020052(r0, r1, r2, r3);
loc_0802019A:
    r0 = 0x0U;
    r0 = sub_080504B4(r0, r1, r2, r3); // 0x0802019C
    r0 = sub_08040160(r0, r1, r2, r3); // 0x080201A0
    return sub_08020050(r0, r1, r2, r3);
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080201AA
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080201B2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080201D0;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08020298]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    *(u32*)(r1 + 0x10) = (u32)r7;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x080202C4]
    *(u32*)(r0) = (u32)r1;
loc_080201D0:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080201D0
    r0 = 0x1U;
    return sub_08020052(r0, r1, r2, r3);
}

// ROM Address: 0x080201D8..0x080201FE (38 bytes, Thumb)
u32 sub_080201D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080201F4;
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080201E2
    r0 = *(u32*)(r4 + 0xC);
    r0 -= 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = (r0 << 7);
    r0 = *(u32*)(r6 + r0);
    r1 = *(u32*)(r5 + 0x34);
    *(u32*)(r1 + 0x8) = (u32)r0;
loc_080201F4:
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r7;
    return sub_08020050(r0, r1, r2, r3);
}

// ROM Address: 0x080201FE..0x0802032A (300 bytes, Thumb)
u32 sub_080201FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0872084CU; // [0x0802028C]
    r5 = r0;
    r1 = *(u32*)(r1);
    r3 = 0x0872084CU; // [0x0802028C]
    r1 = *(u16*)(r1 + 0x4);
    r5 += 0x12CU;
    r3 = *(u32*)(r3 + 0x4);
    r6 = 0x08319488U; // [0x08020290]
    r2 = 0x000005C4U; // [0x08020288]
    r4 = r5;
    r1 = (r1 << 26);
    r1 = (r1 >> 31);
    r4 -= 0x2CU;
    r6 -= 0xCU;
    r7 = r3 + r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802024E;
    r1 = r6;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802022C
    r0 = *(u32*)(r4 + 0xC);
    r0 = (r0 << 7);
    r0 = r0 + r5;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802024E;
    r0 = sub_08004C8C(r0, r1, r2, r3); // 0x0802023C: BL 0x08004C8C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802024E;
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r3 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r3;
loc_0802024E:
    r0 = 0x0872084CU; // [0x0802028C]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08020282;
    r1 = r6;
    r6 = 0x0U;
    r3 = r6;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08020264
    r0 = *(u32*)(r4 + 0xC);
    r0 = (r0 << 7);
    r0 = r0 + r5;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020282;
    r0 = sub_08004CE0(r0, r1, r2, r3); // 0x08020274: BL 0x08004CE0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020282;
    r0 = ~r6;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r6;
loc_08020282:
    r0 = 0x0U;
    return r0;
    r0 = r0;
    r4 = (r0 << 23);
    r0 = r0;
    r4 = (r1 >> 1);
    r2 = (r6 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r0 = r2 + r4;
    r0 = (r0 << 12);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r3 = 0x08020590U;
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r4 = (r5 >> 29);
    r0 = r0;
    r3 = *(u32*)r2; r2 += 4;
    r5 = *(u32*)r2; r2 += 4;
    r7 = *(u32*)r2; r2 += 4;
    r4 = (r0 >> 32);
    r4 = (r0 << 22);
    r0 = r0;
    r4 = (r6 << 23);
    r0 = r0;
    r4 = (r3 >> 26);
    r0 = r0;
    r1 = (r5 >> 1);
    r5 = (r0 >> 32);
    r5 = (r6 << 20);
    r5 = (r0 >> 32);
    r4 = (r0 >> 28);
    r0 = r0;
    r4 = (r0 >> 32);
    r1 = 0x2C0U; // (11 << 6)
    r1 = r0 + r1;
    r1 = *(u32*)(r1 + 0x38);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020328;
    r2 = r0;
    r2 += 0x12CU;
    r7 = r2;
    r7 -= 0x2CU;
    r6 = *(u32*)(r7 + 0xC);
    r1 = (r6 << 7);
    r3 = *(u32*)(r2 + r1);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020328;
    r3 = r1 + r2;
    r2 = r3;
    r4 = *(u32*)(r3 + 0xC);
    r2 += 0xCU;
    r1 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08020328;
    r5 = *(u32*)(r3 + 0x7C);
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 2);
    r3 = r3 + r2;
    r3 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) return sub_0802032A(r0, r1, r2, r3);
    r2 = *(u32*)(r7 + 0x28);
    r1 = (r1 << 2);
    r2 = r6 - r2;
    r2 = (r2 << 5);
    r0 = r2 + r0;
    r0 = r0 + r1;
    r1 = 0x280U; // (5 << 7)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x38);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08020324: BL __call_via_r3
loc_08020328:
    return r0;
}

// ROM Address: 0x0802032A..0x08020332 (8 bytes, Thumb)
u32 sub_0802032A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_080202FA(r0, r1, r2, r3);
    return sub_08020328(r0, r1, r2, r3);
}

// ROM Address: 0x08020332..0x08020370 (62 bytes, Thumb)
u32 sub_08020332(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x03002F50U; // [0x08020530]
    r7 = 0xFFU;
    r0 = *(u32*)(r0);
    r7 += 0x15U;
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = 0x0804920CU /* &VTable_0804920C */; // [0x08020534]
    if (cmp_lhs == cmp_rhs) return sub_08020370(r0, r1, r2, r3);
    r0 = 0x03002F50U; // [0x08020530]
    *(u32*)(r0) = (u32)r6;
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802034C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020368;
    r1 = r0;
    r1 += 0xFFU;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r1 += 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x08020538]
    r0 -= 0x8U;
    *(u32*)(r0) = (u32)r1;
loc_08020368:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08020368
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08020370..0x080203DE (110 bytes, Thumb)
u32 sub_08020370(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 += 0x12CU;
    r0 = sub_08004DC0(r0, r1, r2, r3); // 0x08020376: BL 0x08004DC0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020386;
    r0 = r4;
    r0 = sub_080058AC(r0, r1, r2, r3); // 0x08020380
    return sub_0802036E(r0, r1, r2, r3);
loc_08020386:
    r0 = r4;
    r0 = sub_080058AC(r0, r1, r2, r3); // 0x08020388
    r0 = 0xFFU;
    r0 += 0x19U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08020390: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080203B4;
    r1 = r0;
    r1 += 0xFFU;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r1 += 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x0804BB48U /* &VTable_0804BB48 */; // [0x0802053C]
    r0 -= 0x8U;
    *(u32*)(r0) = (u32)r1;
    r1 = 0x2U;
    r2 = 0xFFU;
    r2 += 0x15U;
    *(u8*)(r2 + r0) = (u8)r1;
loc_080203B4:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080203B4
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080203BA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080203D6;
    r1 = r0;
    r1 += 0xFFU;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r1 += 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x08020538]
    r0 -= 0x8U;
    *(u32*)(r0) = (u32)r1;
loc_080203D6:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080203D6
    r0 = 0x0U;
    return sub_0802036E(r0, r1, r2, r3);
}

// ROM Address: 0x080203DE..0x0802052C (334 bytes, Thumb)
u32 sub_080203DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x100U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080203EE;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080203EE;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08020400;
loc_080203EE:
    r1 = *(u32*)(r0 + 0x2C);
    r1 += 0x1U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 20;
    if (cmp_lhs <= cmp_rhs) goto loc_080203FE;
    r1 = 0x03002F50U; // [0x08020530]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
loc_080203FE:
    return r0; // BX lr
loc_08020400:
    r1 = 0x0U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = 0xFFU;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08020540]
    r0 += 0x61U;
    r3 = *(u32*)(r1 + r0);
    r0 += 0x4U;
    r5 = *(u32*)(r1 + r0);
    r6 = 0x0872084CU; // [0x08020544]
    r2 = *(u32*)(r6 + 0xC);
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x3CU;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x14U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08020430
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08020438
    r2 = *(u32*)(r6 + 0xC);
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x3CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x22U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08020452
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802045A
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F800U; // [0x08020548]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08020466: BL 0x0804912C
    r2 = 0x1C00U; // (7 << 10)
    r1 = 0x0U;
    r0 = 0x06009640U; // [0x0802054C]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08020472: BL 0x0804912C
    r0 = 0x7U;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x8U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x17U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0xFU;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0x00000259U; // [0x08020550]
    r1 = 0x0600F800U; // [0x08020548]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x0802048C
    r1 = 0x00001F83U; // [0x08020554]
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0 + 0x8) = (u16)r1;
    r1 = *(u16*)(r0);
    r2 = (r0 >> 18);
    r1 |= r2;
    *(u16*)(r0) = (u16)r1;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080204A8: BL 0x08046AA2
    return r0;
    r3 = 0x4000000U; // (1 << 26)
    r1 = *(u16*)(r3);
    r2 = (r3 >> 18);
    r1 &= ~r2;
    *(u16*)(r3) = (u16)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080204CE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080204CA: BL __call_via_r3
loc_080204CE:
    return r0;
    r5 = r0;
    r2 = 0x38U;
    r1 = 0x80U;
    r0 = sp;
    r4 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080204DE
    r0 = r4;
    r0 = sub_08005096(r0, r1, r2, r3); // 0x080204E4
    r1 = r4;
    r0 = r5;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x080204EC
    r1 = 0x06009640U; // [0x0802054C]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x080204F4: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080204FC: BL 0x0803F58C
    return r0;
    r4 = r0;
    r4 += 0x100U;
    r0 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802051E;
    r0 = 0x03001910U; // [0x08020558]
    r1 = *(u32*)(r0);
    r0 = 0x0872084CU; // [0x08020544]
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_0800491A(r0, r1, r2, r3); // 0x0802051A: BL 0x0800491A
loc_0802051E:
    r0 = *(u32*)(r4 + 0x14);
    r0 += 0x1U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 60;
    if (cmp_lhs <= cmp_rhs) return sub_0802052C(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802052C..0x08020530 (4 bytes, Thumb)
u32 sub_0802052C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802054A..0x0802065E (276 bytes, Thumb)
u32 sub_0802054A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 24);
    stack[64] = r6; // [sp + 0x100]
    r0 = (r0 << 24);
    r1 = (r3 << 9);
    r0 = r0;
    r3 = r0 - 6;
    r0 = r0;
    r0 = r2 + r4;
    r0 = (r0 << 12);
    r4 = *(u32*)(r1 + 0x4);
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[2] = r1; // [sp + 0x8]
    r1 = r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r2 = *(u32*)(r0 + 0x8);
    r1 = r0;
    stack[0] = r2; // [sp + 0x0]
    r2 = r0;
    r3 = r0;
    r3 += 0xCU;
    r2 += 0x1CU;
    r1 += 0x14U;
    r5 = 0xC; // sp + 0xC
    r0 = r5;
    r0 = sub_080192CE(r0, r1, r2, r3); // 0x08020590
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802059C: BL 0x08046AA2
    return r0;
    r2 = *(u32*)(r1 + 0x4);
    r5 = *(u32*)(r0 + 0xC);
    r2 += 0x1A0U;
    r4 = *(u32*)(r2);
    r4 = r4 + r5;
    *(u32*)(r2) = (u32)r4;
    r4 = *(u32*)(r2 + 0x4);
    r3 = *(u32*)(r0 + 0x10);
    r3 = r4 + r3;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r3 = *(u32*)(r0 + 0x1C);
    r3 -= 0x1U;
    *(u32*)(r0 + 0x1C) = (u32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_080205DE;
    r3 = *(u32*)(r0 + 0x14);
    r4 = *(u32*)(r0 + 0x18);
    r3 = (r3 << 8);
    *(u32*)r2 = r3; r2 += 4;
    r4 = (r4 << 8);
    *(u32*)(r2) = (u32)r4;
    r2 = 0x1U;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x14);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080205DA: BL __call_via_r3
loc_080205DE:
    return r0;
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x40);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080205EA: BL 0x08046AA2
    return r0;
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r4 = r0;
    r2 = *(u32*)(r1 + 0x40);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080205FC: BL 0x08046AA2
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802060A: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = *(u32*)(r1 + 0x4);
    r5 = r0;
    r1 = r5;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[2] = r1; // [sp + 0x8]
    r1 = r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r2 = *(u32*)(r4 + 0x8);
    r3 = r4;
    stack[0] = r2; // [sp + 0x0]
    r2 = r4;
    r2 += 0x1CU;
    r3 += 0xCU;
    r1 = r4;
    r1 += 0x14U;
    r0 = 0xC; // sp + 0xC
    r0 = sub_080192CE(r0, r1, r2, r3); // 0x08020646
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08020652: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0xC);
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08020660(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08020660..0x08020668 (8 bytes, Thumb)
u32 sub_08020660(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4 + 0x10);
    r3 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_0802066A(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0802066A..0x08020676 (12 bytes, Thumb)
u32 sub_0802066A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) return sub_0802067C(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_08020676(r0, r1, r2, r3);
    r0 = 0x3U;
    return sub_08020678(r0, r1, r2, r3);
}

// ROM Address: 0x08020676..0x08020678 (2 bytes, Thumb)
u32 sub_08020676(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return r0;
}

// ROM Address: 0x08020678..0x0802067C (4 bytes, Thumb)
u32 sub_08020678(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r5 + 0x10) = (u8)r0;
    return sub_0802068C(r0, r1, r2, r3);
}

// ROM Address: 0x0802067C..0x08020684 (8 bytes, Thumb)
u32 sub_0802067C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_08020684(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08020686(r0, r1, r2, r3);
}

// ROM Address: 0x08020684..0x080206D6 (82 bytes, Thumb)
u32 sub_08020684(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = 0x1U;
    r0 = r1 - r0;
    *(u8*)(r5 + 0x10) = (u8)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r4 += 0x20U;
    r1 = *(u8*)(r4 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08020698: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x30);
    r3 = r2 + r1;
    r1 = *(u8*)(r4 + 0x8);
    r2 = *(u32*)(r4 + 0xC);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080206B0: BL __call_via_r3
    return r0;
    r0 = r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r7 = stack[10]; // [sp + 0x28]
    if (cmp_lhs != cmp_rhs) return sub_080206D6(r0, r1, r2, r3);
    r0 = 0x54U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080206C8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080206D6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080206D6..0x08020768 (146 bytes, Thumb)
u32 sub_080206D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08020A78]
    r6 = 0x08725048U; // [0x08020A7C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x300U; // (3 << 8)
    *(u16*)(r4 + 0xE) = (u16)r0;
    r1 = r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080206E6
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08020702;
    r1 = 0x300U; // (3 << 8)
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x080206F4: BL 0x08011732
    r1 = 0x300U; // (3 << 8)
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080206FE
loc_08020702:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804AEF8U /* &VTable_0804AEF8 */; // [0x08020A80]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = stack[3]; // [sp + 0xC]
    r5 -= 0x8U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    r5 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = stack[4]; // [sp + 0x10]
    r1 = 0x8U;
    *(u32*)(r4 + 0x50) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r5;
    *(u8*)(r4 + 0x11) = (u8)r5;
    *(u8*)(r4 + 0x10) = (u8)r5;
    *(u32*)(r4 + 0x38) = (u32)r1;
    *(u32*)(r4 + 0x40) = (u32)r7;
    r0 = *(u8*)(r0 + 0x10);
    r2 = 0x06010000U; // [0x08020A88]
    r0 = (r0 >> 1);
    r0 = *(u8*)(r7 + r0);
    *(u8*)(r4 + 0x12) = (u8)r0;
    r1 = *(u32*)(r7 + 0x8);
    r0 = 0x03000F90U; // [0x08020A84]
    *(u32*)(r4 + 0x4C) = (u32)r1;
    *(u32*)(r4 + 0x48) = (u32)r1;
    *(u32*)(r4 + 0x44) = (u32)r1;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = ~r5;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020750: BL 0x08049138
    r3 = r5;
    r5 = 0x000005C4U; // [0x08020A90]
    r0 = *(u32*)(r6);
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x083192CCU; // [0x08020A8C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08020760
    r0 = r4;
    return sub_080206D2(r0, r1, r2, r3);
}

// ROM Address: 0x080207A2..0x08020840 (158 bytes, Thumb)
u32 sub_080207A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r6;
    r1 += 0x24U;
    r0 = r5;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x080207A8
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08020A78]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08020A94]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080207BE;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080207BA
loc_080207BE:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08020A98]
    *(u32*)(r4) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080207CE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080207CA: BL 0x0803D63C
loc_080207CE:
    return r0;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    r3 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    r5 = 0x083192CCU; // [0x08020A8C]
    *(u32*)(r0 + 0x24) = (u32)r2;
    *(u32*)(r0 + 0x20) = (u32)r3;
    r1 = *(u32*)(r0 + 0x40);
    r5 -= 0x24U;
    r2 = *(u32*)(r1 + 0xC);
    r1 = *(u32*)(r0 + 0x3C);
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 6);
    r2 = r2 + r3;
    *(u32*)(r0 + 0x4C) = (u32)r2;
    *(u32*)(r0 + 0x48) = (u32)r2;
    r2 = 0x0807268CU; // [0x08020A9C]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r0 + 0x34) = (u32)r1;
    *(u32*)(r0 + 0x30) = (u32)r2;
    r1 = 0x1U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    r0 = 0x08725048U; // [0x08020A7C]
    r2 = 0x000005C4U; // [0x08020A90]
    r0 = *(u32*)(r0);
    r1 = r5;
    r1 += 0x24U;
    r0 = r0 + r2;
    r4 = r0;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x08020814
    r1 = r5;
    r1 += 0x180U;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08020824
    return r0;
    r1 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08020840(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802083E;
    r1 = 0x2U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    r1 -= 0x3U;
    *(u32*)(r0 + 0x1C) = (u32)r1;
loc_0802083E:
    return r0;
}

// ROM Address: 0x08020840..0x0802084C (12 bytes, Thumb)
u32 sub_08020840(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r0 = 0x08725048U; // [0x08020A7C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08020846
    return sub_0802083E(r0, r1, r2, r3);
}

// ROM Address: 0x0802084C..0x08020896 (74 bytes, Thumb)
u32 sub_0802084C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r2 = *(u8*)(r4 + 0x10);
    r0 = r1;
    r5 = 0x06010000U; // [0x08020A88]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08020896(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080208CE(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_08020948(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x30);
    r1 = *(u32*)(r4 + 0x34);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    stack[19] = r1; // [sp + 0x4C]
    stack[18] = r0; // [sp + 0x48]
    r2 = *(u32*)(r4 + 0x20);
    r0 = r2 + r0;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x38);
    r0 -= 0x3U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08020948(r0, r1, r2, r3);
    r0 = 0x08725048U; // [0x08020A7C]
    r1 = r4;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802088E
    return r0;
}

// ROM Address: 0x08020896..0x0802094A (180 bytes, Thumb)
u32 sub_08020896(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4 + 0x18);
    r1 += 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_08020892(r0, r1, r2, r3);
    r1 = (r1 << 29);
    r1 = (r1 >> 31);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r4 + 0x4C);
    r1 = (r1 << 2);
    r1 = r0 + r1;
    r1 += 0xCU;
    *(u32*)(r4 + 0x48) = (u32)r1;
    r0 = *(u32*)(r4 + 0x44);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) return sub_08020892(r0, r1, r2, r3);
    *(u32*)(r4 + 0x44) = (u32)r1;
    r2 = *(u8*)(r1 + 0x2);
    r0 = *(u8*)(r1 + 0x3);
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080208C8: BL 0x08049138
    return sub_08020892(r0, r1, r2, r3);
    r1 = 0x08725048U; // [0x08020A7C]
    r1 = *(u32*)(r1 + 0x8);
    r6 = r1;
    r6 += 0x18U;
    r1 += 0x80U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x38);
    r2 = *(u32*)(r4 + 0x30);
    if (cmp_lhs == cmp_rhs) return sub_080209C6(r0, r1, r2, r3);
    r3 = *(u32*)(r4 + 0x34);
    r2 *= r0;
    r3 *= r0;
    r0 = r2;
    stack[16] = r2; // [sp + 0x40]
    r2 = r3;
    stack[17] = r3; // [sp + 0x44]
    r3 = *(u32*)(r4 + 0x20);
    r0 = r3 + r0;
    r3 = *(u32*)(r4 + 0x24);
    stack[16] = r0; // [sp + 0x40]
    r2 = r3 + r2;
    stack[17] = r2; // [sp + 0x44]
    stack[19] = r2; // [sp + 0x4C]
    stack[18] = r0; // [sp + 0x48]
    r0 = *(u32*)(r4 + 0x50);
    r3 = 0x20; // sp + 0x20
    stack[13] = r0; // [sp + 0x34]
    r0 = *(u32*)(r4 + 0x3C);
    r2 = 0x14; // sp + 0x14
    *(u8*)(r3 + 0x8) = (u8)r0;
    r0 = *(u32*)(r4 + 0x40);
    r3 = 0x086B8088U; // [0x08020AA0]
    r0 = *(u8*)(r0 + 0x6);
    r7 = r2 + 4;
    r0 = (r0 << 3);
    r0 = r0 + r3;
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u32*)(r4 + 0x40);
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r0 + 0x2);
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u32*)(r4 + 0x50);
    r0 += 0x1C0U;
    r0 = *(u32*)(r0 + 0x10);
    *(u8*)(r3 + 0x14) = (u8)r0;
    r3 = stack[18]; // [sp + 0x48]
    r0 = stack[18]; // [sp + 0x48]
    r3 -= 0x8U;
    r12 = r3;
    r3 = stack[19]; // [sp + 0x4C]
    r2 = stack[19]; // [sp + 0x4C]
    r3 -= 0x8U;
    lr = r3;
    r3 = r12;
    stack[6] = r3; // [sp + 0x18]
    r0 += 0x8U;
    r2 += 0x8U;
    r3 = lr;
    stack[17] = r4; // [sp + 0x44]
    return sub_0802094A(r0, r1, r2, r3);
    return sub_08020B62(r0, r1, r2, r3);
}

// ROM Address: 0x0802094A..0x08020A76 (300 bytes, Thumb)
u32 sub_0802094A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[8] = r0; // [sp + 0x20]
    stack[7] = r3; // [sp + 0x1C]
    stack[9] = r2; // [sp + 0x24]
    r1 = *(u32*)(r1 + 0x2C);
    r0 = r7;
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08020954
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020A36;
    r0 = 0x08725048U; // [0x08020A7C]
    r2 = 0x14; // sp + 0x14
    r1 = 0x0U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08020964
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020A38;
    r0 = *(u32*)(r4 + 0x30);
    r1 = *(u32*)(r4 + 0x34);
    r0 = (r0 << 2);
    r1 = (r1 << 2);
    stack[2] = r1; // [sp + 0x8]
    r2 = stack[18]; // [sp + 0x48]
    stack[1] = r0; // [sp + 0x4]
    r0 = r2 + r0;
    r2 = stack[19]; // [sp + 0x4C]
    stack[3] = r0; // [sp + 0xC]
    r1 = r2 + r1;
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u8*)(r4 + 0x11);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08020996;
    r0 = 0x08725048U; // [0x08020A7C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08020992
loc_08020996:
    r0 = 0x03000F90U; // [0x08020A84]
    r6 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r4 + 0x14);
    r0 = r6 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08020A26;
    r0 = 0x5U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080209A4
    r0 = r6 + r0;
    r0 += 0x3U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r7 = 0x08725048U; // [0x08020A7C]
    r0 = 0x2U;
    r6 = *(u32*)(r7);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080209B4
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192CCU; // [0x08020A8C]
    r0 = (r0 << 2);
    r1 -= 0x24U;
    goto loc_080209C8;
    return sub_08020AFC(r0, r1, r2, r3);
loc_080209C8:
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08020A90]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r6 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080209D2
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x080209D8
    r6 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) goto loc_08020A26;
    r0 = 0x20U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080209E6
    r1 = stack[3]; // [sp + 0xC]
    r0 = r0 + r1;
    r0 -= 0x10U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x20U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080209F4
    r1 = stack[4]; // [sp + 0x10]
    r0 = r0 + r1;
    r0 -= 0x10U;
    stack[4] = r0; // [sp + 0x10]
    r0 = (r6 << 4);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08020A02
    r1 = (r6 << 2);
    r0 = r0 + r1;
    r2 = 0x38U;
    stack[2] = r2; // [sp + 0x8]
    stack[0] = r0; // [sp + 0x0]
    r3 = 0x4U;
    r0 = 0x0U;
    r2 = 0x08712FDCU; // [0x08020AA4]
    r1 = 0xC; // sp + 0xC
    stack[1] = r6; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08020A1A
    r1 = r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08020A22: BL 0x0801191A
loc_08020A26:
    r0 = *(u8*)(r4 + 0x11);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08020A64;
    r0 = 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = (u32)(-(s32)r0);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    goto loc_08020A64;
loc_08020A36:
    goto loc_08020A56;
loc_08020A38:
    goto loc_08020A3A;
loc_08020A3A:
    r0 = 0x03002C04U; // [0x08020AA8]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08020A4E;
    r0 = r6;
    r1 = r7;
    r0 = sub_080532C0(r0, r1, r2, r3); // 0x08020A46
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020A64;
loc_08020A4E:
    r0 = *(u32*)(r4 + 0x38);
    r0 += 0x3U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    goto loc_08020A64;
loc_08020A56:
    r0 = *(u8*)(r4 + 0x11);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08020A64;
    r0 = 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = (u32)(-(s32)r0);
    *(u32*)(r4 + 0x1C) = (u32)r0;
loc_08020A64:
    r0 = stack[18]; // [sp + 0x48]
    r2 = *(u32*)(r4 + 0x20);
    r1 = r4;
    r1 += 0x20U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    r6 = 0x48; // sp + 0x48
    if (cmp_lhs >= cmp_rhs) return sub_08020AAC(r0, r1, r2, r3);
    r0 = r6;
    return sub_08020AAE(r0, r1, r2, r3);
}

// ROM Address: 0x08020B62..0x08020CB8 (342 bytes, Thumb)
u32 sub_08020B62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x18);
    r0 += 0x1U;
    r6 = ((u32)((s32)r0 >> 2));
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_08020B72;
loc_08020B70:
    return sub_08020892(r0, r1, r2, r3);
loc_08020B72:
    *(u32*)(r4 + 0x1C) = (u32)r6;
    r0 = *(u32*)(r4 + 0x40);
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020BD0;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08020BD0;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08020C26;
    r7 = (r6 << 30);
    r7 = (r7 >> 30);
    cmp_lhs = (s32)r7; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08020B8E;
    r7 = 0x1U;
loc_08020B8E:
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x4C);
    r2 = (r7 << 6);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r1 = r1 + r2;
    stack[20] = r2; // [sp + 0x50]
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020BA0: BL 0x08049138
    r0 = *(u8*)(r4 + 0x11);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u16*)(r4 + 0xC);
    if (cmp_lhs == cmp_rhs) goto loc_08020C28;
    r0 = (r0 << 5);
    r2 = 0x200U; // (1 << 9)
    r0 = r0 + r5;
    r0 = r0 + r2;
    r2 = (r7 << 31);
    r2 = (r2 >> 31);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r1 = *(u32*)(r4 + 0x4C);
    r2 = (r2 << 2);
    r1 = r1 + r2;
    r1 += 0x80U;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020BCA: BL 0x08049138
    goto loc_08020C26;
loc_08020BD0:
    r0 = *(u8*)(r4 + 0x10);
    r7 = (r6 << 31);
    r7 = (r7 >> 31);
    r3 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08020BDE;
    r3 = 0xDU;
loc_08020BDE:
    r0 = r7 + r3;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = *(u32*)(r4 + 0x4C);
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r2 = *(u8*)(r1 + 0x2);
    r0 = *(u8*)(r1 + 0x3);
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020BF8: BL 0x08049138
    r1 = *(u8*)(r4 + 0x11);
    r0 = 0xAU;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08020C06;
    r0 = 0x7U;
loc_08020C06:
    r0 = r7 + r0;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = *(u32*)(r4 + 0x4C);
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = *(u16*)(r4 + 0xC);
    r2 = 0x200U; // (1 << 9)
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 = r0 + r2;
    r2 = (r2 >> 1);
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020C22: BL 0x08049138
loc_08020C26:
    goto loc_08020C40;
loc_08020C28:
    r0 = (r0 << 5);
    r2 = 0x1U;
    r1 = *(u32*)(r4 + 0x4C);
    r2 = (r2 << 9);
    r0 = r0 + r5;
    r0 = r0 + r2;
    r1 = *(u32*)(r1 + 0x5C);
    r2 = stack[20]; // [sp + 0x50]
    r1 = r1 + r2;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020C3C: BL 0x08049138
loc_08020C40:
    r0 = *(u32*)(r4 + 0x40);
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020C76;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08020C9A;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08020B70;
    r1 = (r6 << 30);
    r1 = (r1 >> 30);
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08020C5A;
    r1 = 0x1U;
loc_08020C5A:
    r0 = *(u16*)(r4 + 0xC);
    r2 = *(u32*)(r4 + 0x4C);
    r1 = (r1 << 8);
    r2 = *(u32*)(r2 + 0x44);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 += 0xFFU;
    r1 = r2 + r1;
    r2 = 0xFFU;
    r0 += 0x1U;
    r2 += 0x1U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020C70: BL 0x08049138
    return sub_08020892(r0, r1, r2, r3);
loc_08020C76:
    r2 = (r6 << 31);
    r2 = (r2 >> 31);
    r0 = *(u16*)(r4 + 0xC);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r1 = *(u32*)(r4 + 0x4C);
    r2 = (r2 << 2);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r1 = r1 + r2;
    r0 += 0x100U;
    r2 = 0xFFU;
    r2 += 0x1U;
    r1 = *(u32*)(r1 + 0x44);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020C94: BL 0x08049138
    return sub_08020892(r0, r1, r2, r3);
loc_08020C9A:
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x4C);
    r2 = (r6 << 30);
    r1 = *(u32*)(r1 + 0x44);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r2 = (r2 >> 24);
    r1 = r1 + r2;
    r0 += 0x100U;
    r2 = 0xFFU;
    r2 += 0x1U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08020CB2: BL 0x08049138
    return sub_08020892(r0, r1, r2, r3);
}

// ROM Address: 0x08020CB8..0x08020DA0 (232 bytes, Thumb)
u32 sub_08020CB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08020CC2: BL __call_via_r3
    return r0;
    r1 = 0x08725048U; // [0x08020DA0]
    r3 = *(u32*)(r0 + 0x20);
    r1 = *(u32*)(r1 + 0x8);
    r2 = r0;
    r1 += 0x18U;
    r4 = *(u32*)(r1);
    r0 = *(u32*)(r0 + 0x24);
    r1 = *(u32*)(r1 + 0x4);
    r3 = r3 - r4;
    r2 += 0x28U;
    r0 = r0 - r1;
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    *(u32*)(r2 + 0x4) = (u32)r1;
    *(u32*)(r2) = (u32)r3;
    r0 = 0x1U;
    return r0; // BX lr
    r7 = r3;
    r3 = (r1 << 1);
    r6 = r0;
    r0 = stack[10]; // [sp + 0x28]
    r1 = r3 + r1;
    r4 = r2;
    r2 = *(u32*)(r6 + 0x4C);
    r1 = (r1 << 2);
    r5 = r2 + r1;
    r3 = 0x0U;
    r2 = (u32)(*(s8*)(r5 + r3));
    r1 = *(u32*)(r6 + 0x28);
    r3 = 0x1U;
    r1 = r1 + r2;
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    r2 = (u32)(*(s8*)(r5 + r3));
    r1 = *(u32*)(r6 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r1 = r1 + r2;
    r0 = r1 + r0;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u8*)(r5 + 0x2);
    r1 = *(u8*)(r5 + 0x3);
    r2 = stack[1]; // [sp + 0x4]
    r0 = r2 + r0;
    stack[3] = r0; // [sp + 0xC]
    r0 = stack[2]; // [sp + 0x8]
    r0 = r0 + r1;
    r1 = 0x08725048U; // [0x08020DA0]
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r1 += 0x14U;
    r0 = sub_080532C0(r0, r1, r2, r3); // 0x08020D3C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020D9C;
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r5 + 0x4);
    r2 = 0xFE00FFFFU; // [0x08020DA8]
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r4);
    r3 = 0x3U;
    r1 = *(u32*)(r0);
    r3 = (r3 << 10);
    r1 &= r2;
    r2 = stack[1]; // [sp + 0x4]
    r2 = (r2 << 23);
    r2 = (r2 >> 7);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r4);
    r2 = stack[2]; // [sp + 0x8]
    r1 = (r1 >> 8);
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r1 = (r1 << 8);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r0 = *(u16*)(r6 + 0xC);
    r1 = r0 + r7;
    r0 = *(u32*)(r4);
    r1 = (r1 << 22);
    r0 += 0x4U;
    r2 = *(u32*)(r0);
    r1 = (r1 >> 22);
    r2 = (r2 >> 10);
    r2 = (r2 << 10);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r0 = *(u8*)(r6 + 0x8);
    r2 = *(u32*)(r4);
    r1 &= ~r3;
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r0 = (r0 << 10);
    r0 |= r1;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r0 = *(u32*)(r4);
    r0 += 0x8U;
    *(u32*)(r4) = (u32)r0;
loc_08020D9C:
    return r0;
}

// ROM Address: 0x08020E2C..0x08020E82 (86 bytes, Thumb)
u32 sub_08020E2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08020E80;
    r0 = *(u32*)(r6);
    r2 = 0xFE00FFFFU; // [0x08021058]
    r1 = r0;
    r1 += 0x8U;
    *(u32*)(r6) = (u32)r1;
    stack[10] = r0; // [sp + 0x28]
    r1 = *(u32*)(r4 + 0x48);
    r3 = 0x3U;
    r1 = *(u32*)(r1 + 0x4);
    r3 = (r3 << 10);
    *(u32*)(r0) = (u32)r1;
    r0 = stack[10]; // [sp + 0x28]
    r1 = *(u32*)(r0);
    r1 &= r2;
    r2 = stack[6]; // [sp + 0x18]
    r2 = (r2 << 23);
    r2 = (r2 >> 7);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r2 = stack[7]; // [sp + 0x1C]
    r1 = (r1 >> 8);
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r1 = (r1 << 8);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u16*)(r4 + 0xC);
    r2 = *(u32*)(r0 + 0x4);
    r2 = (r2 >> 10);
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    r2 = (r2 << 10);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r2 = *(u8*)(r4 + 0x8);
    r1 &= ~r3;
    r2 = (r2 << 26);
    r2 = (r2 >> 30);
    r2 = (r2 << 10);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08020E80:
    return sub_08020FBE(r0, r1, r2, r3);
}

// ROM Address: 0x08020EF0..0x08020FE6 (246 bytes, Thumb)
u32 sub_08020EF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x10U;
    r2 = r7;
    r1 = 0x7U;
    r0 = r4;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08020CF4(r0, r1, r2, r3); // 0x08020EFA
    r0 = *(u32*)(r4 + 0x40);
    r0 = *(u8*)(r0 + 0x4);
    r0 = (r0 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08020F14;
    r3 = 0x10U;
    r2 = r7;
    r1 = 0x9U;
    r0 = r4;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08020CF4(r0, r1, r2, r3); // 0x08020F10
loc_08020F14:
    r0 = *(u32*)(r4 + 0x38);
    r1 = *(u8*)(r4 + 0x12);
    r0 += 0x7U;
    r5 = 0x0U;
    r0 = r0 - r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08020F50;
loc_08020F22:
    r0 = *(u32*)(r4 + 0x30);
    r1 = *(u32*)(r4 + 0x34);
    r0 *= r5;
    r1 *= r5;
    stack[0] = r0; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x5U;
    r2 = r7;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x8U;
    r0 = r4;
    r0 = sub_08020CF4(r0, r1, r2, r3); // 0x08020F3E
    r0 = *(u8*)(r4 + 0x12);
    r1 = *(u32*)(r4 + 0x38);
    r1 += 0x7U;
    r5 = r0 + r5;
    r0 = r1 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08020F22;
loc_08020F50:
    r0 = *(u32*)(r4 + 0x38);
    r0 -= 0x9U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_08020F86;
    r0 = *(u32*)(r4 + 0x4C);
    r1 = *(u32*)(r0 + 0x38);
    r0 = *(u32*)(r0 + 0x44);
    r0 = r1 - r0;
    r1 = *(u32*)(r4 + 0x30);
    r2 = *(u32*)(r4 + 0x34);
    r1 *= r5;
    r2 *= r5;
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r2; // [sp + 0xC]
    stack[0] = r1; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    r0 = ((u32)((s32)r0 >> 5));
    r3 = r0;
    stack[0] = r2; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r1 = 0x4U;
    r2 = r7;
    r3 += 0x8U;
    r0 = r4;
    r0 = sub_08020CF4(r0, r1, r2, r3); // 0x08020F80
    r5 += 0x10U;
loc_08020F86:
    r0 = *(u32*)(r4 + 0x38);
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_08020FBA;
    r0 = *(u32*)(r4 + 0x4C);
    r1 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x44);
    r0 = r1 - r0;
    r1 = *(u32*)(r4 + 0x30);
    r2 = *(u32*)(r4 + 0x34);
    r1 *= r5;
    r2 *= r5;
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r2; // [sp + 0xC]
    stack[0] = r1; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    r0 = ((u32)((s32)r0 >> 5));
    r3 = r0;
    stack[0] = r2; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r1 = 0x3U;
    r2 = r7;
    r3 += 0x8U;
    r0 = r4;
    r0 = sub_08020CF4(r0, r1, r2, r3); // 0x08020FB6
loc_08020FBA:
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08020FE6(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0802104A(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_0802104E(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08020FDC: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08020FE6..0x08021052 (108 bytes, Thumb)
u32 sub_08020FE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08020FF0;
    r0 = 0x0U;
    return sub_08020FE2(r0, r1, r2, r3);
loc_08020FF0:
    r1 = *(u8*)(r2 + 0x14);
    r3 = *(u32*)(r0 + 0x3C);
    r4 = 0x1U;
    r3 ^= r4;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08021000;
    r0 = 0x0U;
    return sub_08020FE2(r0, r1, r2, r3);
loc_08021000:
    r1 = *(u32*)(r0 + 0x38);
    r3 = *(u32*)(r0 + 0x30);
    r4 = *(u32*)(r0 + 0x34);
    r3 *= r1;
    r4 *= r1;
    r1 = r3;
    stack[2] = r3; // [sp + 0x8]
    r3 = r4;
    stack[3] = r4; // [sp + 0xC]
    r4 = *(u32*)(r0 + 0x20);
    r0 = *(u32*)(r0 + 0x24);
    r1 = r4 + r1;
    r0 = r0 + r3;
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[3]; // [sp + 0xC]
    r3 = r0;
    r4 = r1;
    r1 += 0xCU;
    r4 -= 0xCU;
    r3 -= 0xCU;
    r0 += 0xCU;
    stack[2] = r0; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r1 = sp;
    r0 = r2 + 4;
    stack[0] = r3; // [sp + 0x0]
    stack[1] = r4; // [sp + 0x4]
    r0 = sub_080532C0(r0, r1, r2, r3); // 0x0802103A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021046;
    r0 = 0x1U;
    return sub_08020FE2(r0, r1, r2, r3);
loc_08021046:
    r0 = 0x0U;
    return sub_08020FE2(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08020FE2(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08020FE2(r0, r1, r2, r3);
}

// ROM Address: 0x0802105E..0x08021064 (6 bytes, Thumb)
u32 sub_0802105E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_08021064(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08021064..0x08021068 (4 bytes, Thumb)
u32 sub_08021064(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08021068..0x0802114C (228 bytes, Thumb)
u32 sub_08021068(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08021078;
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08021070: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021082;
loc_08021078:
    r1 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = 0x03001964U; // [0x08021118]
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08021082:
    return r0;
    r1 = r0;
    r1 = *(u32*)(r1 + 0x8);
    r2 = 0x03001964U; // [0x08021118]
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08021092;
    r0 = 0x0U;
loc_08021092:
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r5 = r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080210A2: BL 0x08046AA2
    *(u32*)(r4 + 0x8) = (u32)r5;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080210B0: BL 0x08046AA2
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080210C2: BL 0x08046AA2
    r0 = 0x03001964U; // [0x08021118]
    *(u32*)(r4 + 0x8) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080210D0: BL 0x08046AA2
    return r0;
    r2 = *(u32*)(r0 + 0xC);
    r1 = r0;
    r3 = r2 + 1;
    r2 = (r2 << 2);
    r1 += 0xCU;
    r4 = *(u32*)(r0 + 0x8);
    *(u32*)(r0 + 0xC) = (u32)r3;
    r1 = r2 + r1;
    *(u32*)(r1 + 0x4) = (u32)r4;
    r1 = 0x03001964U; // [0x08021118]
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080210FE: BL 0x08046AA2
    r1 = *(u32*)(r4 + 0xC);
    r0 = r4;
    r1 -= 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r1;
    r1 = (r1 << 2);
    r0 += 0xCU;
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x8) = (u32)r0;
    return r0;
    r0 = r0;
    r4 = r4 + r5;
    r0 = (r0 << 12);
    r4 = 0x0872507CU; // [0x08021168]
    r1 = *(u32*)(r4 + 0x4);
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x10);
    r5 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802114C(r0, r1, r2, r3);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802112E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021142;
    r1 = 0x0804E324U; // [0x0802116C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08021142:
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x08021146
    return r0;
}

// ROM Address: 0x0802114C..0x08021166 (26 bytes, Thumb)
u32 sub_0802114C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802114E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802115C;
    r1 = 0x0804D300U; // [0x08021170]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
loc_0802115C:
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x08021160
    return sub_0802114A(r0, r1, r2, r3);
}

// ROM Address: 0x08021174..0x08021254 (224 bytes, Thumb)
u32 sub_08021174(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r2;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08021188;
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08021180: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080211A6;
loc_08021188:
    r1 = 0x0804AB7CU; // [0x08021260]
    r3 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    r2 = 0x0804A7E4U; // [0x08021264]
    r0 -= 0x8U;
    r1 = 0x0804B894U /* &VTable_0804B894 */; // [0x08021268]
    *(u32*)(r0 + 0x8) = (u32)r2;
    *(u32*)(r0) = (u32)r1;
    r1 += 0x2CU;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r2 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    r0 += 0xCU;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x18U;
    *(u32*)(r0 + 0x2C) = (u32)r3;
loc_080211A6:
    return r0;
    r5 = 0x08725084U; // [0x0802126C]
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r0; // [sp + 0x10]
    r2 = stack[4]; // [sp + 0x10]
    r1 = (r1 << 10);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 10);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r2 = *(u32*)(r4 + 0x14);
    r1 = r4;
    stack[0] = r2; // [sp + 0x0]
    r2 = r4;
    r2 += 0x28U;
    r1 += 0xCU;
    r0 = 0xC; // sp + 0xC
    r3 = 0x4; // sp + 0x4
    r0 = sub_080192CE(r0, r1, r2, r3); // 0x080211D6
    r0 = stack[1]; // [sp + 0x4]
    r1 = 0x0U;
    r0 = (r0 << 2);
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    r0 = (r0 << 2);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080211F0;
    r1 = r4;
    r1 += 0x8U;
loc_080211F0:
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x080211F2
    return r0;
    r4 = r0;
    r0 += 0x18U;
    r2 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)(r4 + 0x20);
    r5 = r4;
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r1 = *(u32*)(r4 + 0x24);
    r0 = *(u32*)(r0);
    r5 += 0x20U;
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x28);
    r6 = r5 + 4;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r7 = 0x08725084U; // [0x0802126C]
    if (cmp_lhs != cmp_rhs) goto loc_08021238;
    r0 = 0x1U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x08021228
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x10);
    r0 = (r0 << 10);
    *(u32*)(r5) = (u32)r0;
    r1 = (r1 << 10);
    *(u32*)(r6) = (u32)r1;
loc_08021238:
    r0 = *(u32*)(r7);
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08021254(r0, r1, r2, r3);
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r5);
    *(u32*)r0 = r1; r0 += 4;
    r1 = *(u32*)(r6);
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r7);
    r0 = sub_0802ED98(r0, r1, r2, r3); // 0x0802124E: BL 0x0802ED98
    return r0;
}

// ROM Address: 0x08021254..0x0802125E (10 bytes, Thumb)
u32 sub_08021254(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = *(u32*)(r7);
    r0 = sub_08009744(r0, r1, r2, r3); // 0x08021258
    return sub_08021252(r0, r1, r2, r3);
}

// ROM Address: 0x08021272..0x0802127C (10 bytes, Thumb)
u32 sub_08021272(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x08021276
    return r0;
}

// ROM Address: 0x0802127C..0x08021280 (4 bytes, Thumb)
u32 sub_0802127C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r1 + r2) = r4;
    r2 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x08021280..0x080212A0 (32 bytes, Thumb)
u32 sub_08021280(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r6 = stack[10]; // [sp + 0x28]
    if (cmp_lhs != cmp_rhs) return sub_080212A0(r0, r1, r2, r3);
    r0 = 0x60U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08021292: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080212A0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080212A0..0x080212FA (90 bytes, Thumb)
u32 sub_080212A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1000U; // (1 << 12)
    r2 = r7;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x080212A8
    r0 = 0x0804A33CU /* &VTable_0804A33C */; // [0x08021568]
    *(u32*)(r4) = (u32)r0;
    r3 = *(u32*)(r5);
    r5 = *(u32*)(r5 + 0x4);
    r3 = (r3 << 8);
    *(u32*)(r4 + 0x20) = (u32)r3;
    r5 = (r5 << 8);
    *(u32*)(r4 + 0x24) = (u32)r5;
    *(u32*)(r4 + 0x5C) = (u32)r6;
    r2 = stack[3]; // [sp + 0xC]
    r5 = 0x0U;
    *(u8*)(r4 + 0x8) = (u8)r2;
    r2 = *(u32*)(r6 + 0x4);
    r0 = r4;
    *(u32*)(r4 + 0x18) = (u32)r2;
    *(u32*)(r4 + 0x40) = (u32)r5;
    *(u32*)(r4 + 0x44) = (u32)r5;
    r2 = 0x1U;
    r0 += 0x54U;
    r2 = (r2 << 13);
    *(u32*)(r4 + 0x48) = (u32)r5;
    *(u32*)(r0) = (u32)r2;
    r1 = r0 + 4;
    r0 = (r2 >> 4);
    *(u32*)(r1) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x080212E0
    r0 = 0x08725090U; // [0x0802156C]
    r3 = r5;
    r5 = 0x000005C4U; // [0x08021574]
    r0 = *(u32*)(r0);
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x083192CCU; // [0x08021570]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080212F2
    r0 = r4;
    return sub_0802129C(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy13_stores_the_three_tables_and_frees_the_object
// ROM Address: 0x080212FA..0x0802136C (114 bytes, Thumb)
u32 Object_Destroy13(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804A33CU /* &VTable_0804A33C */; // [0x08021568]
    r6 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x44);
    r5 = 0x08725090U; // [0x0802156C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08021318;
    r2 = 0x000005C4U; // [0x08021574]
    r0 = *(u32*)(r5);
    r1 = 0x083192CCU; // [0x08021570]
    r0 = r0 + r2;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x08021314
loc_08021318:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08021578]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0802157C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802132A;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08021326
loc_0802132A:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08021580]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08021338;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08021334: BL 0x0803D63C
loc_08021338:
    return r0;
    r5 = r1;
    r1 = *(u32*)(r0 + 0x40);
    r2 = *(u32*)(r0 + 0x44);
    r4 = r0;
    r1 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x5C);
    if (cmp_lhs == cmp_rhs) return sub_0802142C(r0, r1, r2, r3);
    r2 = *(u32*)(r4 + 0x48);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08021380(r0, r1, r2, r3);
    *(u32*)(r4 + 0x40) = (u32)r1;
    r2 = *(u8*)(r0 + 0x2);
    r1 = ((u32)((s32)r1 >> 2));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_0802136C(r0, r1, r2, r3);
    r5 = 0x08725090U; // [0x0802156C]
    r1 = r4;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08021364
    return r0;
}

// ROM Address: 0x0802136C..0x08021452 (230 bytes, Thumb)
u32 sub_0802136C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r0 + 0x8);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802137A
    return sub_08021368(r0, r1, r2, r3);
    r3 = *(u32*)(r4 + 0x20);
    r6 = *(u32*)(r4 + 0x4C);
    r3 = r3 + r6;
    *(u32*)(r4 + 0x20) = (u32)r3;
    r2 = *(u32*)(r4 + 0x50);
    r3 = *(u32*)(r4 + 0x24);
    r2 = r3 + r2;
    *(u32*)(r4 + 0x24) = (u32)r2;
    r2 = *(u32*)(r4 + 0x50);
    *(u32*)(r4 + 0x40) = (u32)r1;
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    r2 += 0x20U;
    *(u32*)(r4 + 0x50) = (u32)r2;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    r0 += 0xCU;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x080213AC
    r0 = *(u32*)(r4 + 0x58);
    r0 -= 0x20U;
    *(u32*)(r4 + 0x58) = (u32)r0;
    r1 = *(u32*)(r4 + 0x54);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x54) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08021368(r0, r1, r2, r3);
    r6 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021424;
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r5 = sp;
    r7 = r5 + 4;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B80C0U; // [0x08021584]
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x5C);
    r0 = *(u16*)(r0);
    stack[6] = r0; // [sp + 0x18]
    r0 = r4;
    r0 += 0x28U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    r0 += 0x1C0U;
    r0 = *(u32*)(r0 + 0x10);
    r2 = r5;
    r5 = 0x08725090U; // [0x0802156C]
    *(u8*)(r3) = (u8)r0;
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u32*)(r5 + 0x4);
    r1 = 0x0U;
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080213FA
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021424;
    r5 = *(u32*)(r5);
    r0 = 0x3U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08021406
    r0 += 0x30U;
    r3 = (r0 << 1);
    r1 = 0x083192CCU; // [0x08021570]
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 -= 0x24U;
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08021574]
    r3 = r6;
    r2 = 0x40U;
    r0 = r5 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08021420
loc_08021424:
    r0 = 0x1U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    *(u32*)(r4 + 0x40) = (u32)r6;
    return sub_08021368(r0, r1, r2, r3);
    goto loc_0802142E;
loc_0802142E:
    *(u32*)(r4 + 0x40) = (u32)r1;
    r1 = (r1 << 27);
    r1 = (r1 >> 30);
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    r0 = *(u32*)(r0 + 0x4);
    if (cmp_lhs != cmp_rhs) goto loc_08021440;
    r0 += 0xCU;
    *(u32*)(r4 + 0x18) = (u32)r0;
    goto loc_0802144A;
loc_08021440:
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_0802144A:
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802144C
    return sub_08021368(r0, r1, r2, r3);
}

// ROM Address: 0x08021452..0x080215B0 (350 bytes, Thumb)
u32 sub_08021452(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x1U;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = *(u32*)(r4 + 0x5C);
    r5 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r6 = r2;
    r1 += 0x18U;
    *(u32*)(r4 + 0x18) = (u32)r1;
    r2 = *(u8*)(r1 + 0x2);
    r0 = *(u8*)(r1 + 0x3);
    r3 = 0x06010000U; // [0x08021588]
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08021476: BL 0x08049138
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802147C
    r0 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    cmp_lhs = (s32)r5; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08021490;
    r1 = *(u32*)(r4 + 0x24);
    r0 = (r5 << 11);
    r0 = r1 - r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
loc_08021490:
    r0 = (r5 << 3);
    r1 = 0x0807268CU; // [0x0802158C]
    r3 = 0x000005F4U; // [0x08021590]
    r2 = *(u32*)(r1 + r0);
    r0 = r0 + r1;
    r2 *= r6;
    r2 *= r3;
    r2 = ((u32)((s32)r2 >> 8));
    *(u32*)(r4 + 0x4C) = (u32)r2;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x1U;
    r0 *= r6;
    r0 *= r3;
    r0 = ((u32)((s32)r0 >> 8));
    r1 = (r1 << 9);
    r0 = r0 - r1;
    *(u32*)(r4 + 0x50) = (u32)r0;
    r0 = 0x08725090U; // [0x0802156C]
    r5 = 0x083192CCU; // [0x08021570]
    r2 = 0x000005C4U; // [0x08021574]
    r0 = *(u32*)(r0);
    r5 -= 0x24U;
    r1 = r5;
    r1 += 0x24U;
    r0 = r0 + r2;
    r4 = r0;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x080214C4
    r1 = r5;
    r1 += 0x198U;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080214D4
    return r0;
    r4 = r0;
    r0 = 0x1U;
    r5 = stack[8]; // [sp + 0x20]
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = *(u32*)(r4 + 0x5C);
    r6 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r3 = 0x06010000U; // [0x08021588]
    r1 += 0x18U;
    *(u32*)(r4 + 0x18) = (u32)r1;
    r2 = *(u8*)(r1 + 0x2);
    r0 = *(u8*)(r1 + 0x3);
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080214FE: BL 0x08049138
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08021504
    r0 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    cmp_lhs = (s32)r6; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08021518;
    r1 = *(u32*)(r4 + 0x24);
    r0 = (r6 << 11);
    r0 = r1 - r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
loc_08021518:
    r1 = stack[2]; // [sp + 0x8]
    r3 = 0x000005F4U; // [0x08021590]
    *(u32*)(r4 + 0x4C) = (u32)r1;
    r1 = stack[3]; // [sp + 0xC]
    r2 = 0x000005C4U; // [0x08021574]
    *(u32*)(r4 + 0x50) = (u32)r1;
    r0 = *(u32*)(r4 + 0x4C);
    r1 *= r5;
    r0 *= r5;
    r0 *= r3;
    r0 = ((u32)((s32)r0 >> 16));
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r0 = r1;
    r0 *= r3;
    r1 = 0x200U; // (1 << 9)
    r0 = ((u32)((s32)r0 >> 16));
    r0 = r0 - r1;
    *(u32*)(r4 + 0x50) = (u32)r0;
    r0 = 0x08725090U; // [0x0802156C]
    r5 = 0x083192CCU; // [0x08021570]
    r0 = *(u32*)(r0);
    r5 -= 0x24U;
    r1 = r5;
    r1 += 0x24U;
    r0 = r0 + r2;
    r4 = r0;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0802154E
    r1 = r5;
    r1 += 0x198U;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802155E
    return r0;
    r0 = r0;
    r3 = 0x0802165CU;
    r4 = (r0 >> 32);
    *(u32*)(r2 + r2) = r0;
    r2 = (r6 >> 1);
    stack[204] = r2; // [sp + 0x330]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    return sub_08020E2C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u16*)(r0 + 0x6) = (u16)r0;
    r3 = (r5 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    r4 = (r6 << 23);
    r0 = r0;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080215B0(r0, r1, r2, r3);
    r0 = 0x50U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080215A2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080215B0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080215B0..0x0802163A (138 bytes, Thumb)
u32 sub_080215B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x0872509EU; // [0x08021728]
    r5 = *(u8*)(r7);
    r0 = *(u8*)(r7 + 0x1);
    r5 *= r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802172C]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = r7 - 6;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080215C4
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_080215E0;
    r1 = r5;
    r0 = r7 - 6;
    r0 = *(u32*)(r0);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x080215D2: BL 0x08011732
    r1 = r5;
    r0 = r7 - 6;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080215DC
loc_080215E0:
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r1 = 0x0804BA50U /* &VTable_0804BA50 */; // [0x08021730]
    *(u16*)(r4 + 0xC) = (u16)r0;
    *(u32*)(r4) = (u32)r1;
    r1 = 0x0872509EU; // [0x08021728]
    r2 = 0x3AU;
    r1 -= 0x2U;
    *(u32*)(r4 + 0x28) = (u32)r1;
    *(u8*)(r4 + 0x8) = (u8)r2;
    r2 = *(u8*)(r7);
    r3 = *(u8*)(r7 + 0x1);
    r0 = (r0 << 5);
    r1 = *(u32*)(r1 + 0x8);
    r2 *= r3;
    r3 = 0x06010000U; // [0x08021734]
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08021602: BL 0x08049138
    r0 = 0x0804CA80U /* &VTable_0804CA80 */; // [0x08021738]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0804BFF8U /* &VTable_0804BFF8 */; // [0x0802173C]
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r1;
    *(u32*)(r4 + 0x30) = (u32)r2;
    r0 = 0x0U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = stack[4]; // [sp + 0x10]
    r1 = 0x46U;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x2U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = stack[3]; // [sp + 0xC]
    r6 -= 0x8U;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    *(u32*)(r4 + 0x40) = (u32)r0;
    if (cmp_lhs < cmp_rhs) goto loc_0802162E;
    r1 = 0x64U;
loc_0802162E:
    *(u32*)(r4 + 0x3C) = (u32)r1;
    r0 = r4;
    r4 += 0x48U;
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    return sub_080215AC(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_clear_fields3_clears_the_two_words
// ROM Address: 0x080216E6..0x08021728 (66 bytes, Thumb)
u32 Object_ClearFields3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080216F2;
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs >= cmp_rhs) goto loc_080216F2;
    r1 = 0x2U;
    *(u32*)(r0 + 0x38) = (u32)r1;
loc_080216F2:
    r3 = 0x0872509EU; // [0x08021728]
    r2 = (r4 << 3);
    r3 += 0xAU;
    r2 = r2 + r3;
    r4 = *(u32*)(r2);
    r3 = *(u32*)(r0 + 0x34);
    r2 = *(u32*)(r2 + 0x4);
    r4 *= r3;
    r2 *= r3;
    stack[1] = r2; // [sp + 0x4]
    r3 = stack[1]; // [sp + 0x4]
    r2 = r4;
    stack[0] = r4; // [sp + 0x0]
    r4 = *(u32*)(r0 + 0x48);
    r1 = r0;
    r0 = *(u32*)(r0 + 0x4C);
    r2 = r4 + r2;
    r0 = r0 + r3;
    stack[1] = r0; // [sp + 0x4]
    r1 += 0x2CU;
    r0 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    *(u32*)r1 = r0; r1 += 4;
    *(u32*)r1 = r2; r1 += 4;
    return r0; // BX lr
}

// ROM Address: 0x08021740..0x080217A6 (102 bytes, Thumb)
u32 sub_08021740(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x28);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08021760;
    *(u32*)(r0 + 0x28) = (u32)r1;
    r3 = *(u8*)(r1 + 0x2);
    r4 = *(u8*)(r1 + 0x3);
    r0 = *(u16*)(r0 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r3 *= r4;
    r2 = r3;
    r3 = 0x06010000U; // [0x08021828]
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802175C: BL 0x08049138
loc_08021760:
    return r0;
    r1 = *(u32*)(r0 + 0x28);
    r3 = 0x0U;
    r4 = (u32)(*(s8*)(r1 + r3));
    r2 = *(u32*)(r0 + 0x20);
    r3 = 0x1U;
    r2 = r2 - r4;
    *(u32*)(r0 + 0x10) = (u32)r2;
    r5 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r0 + 0x24);
    r3 = r4 - r5;
    *(u32*)(r0 + 0x14) = (u32)r3;
    r4 = *(u8*)(r1 + 0x2);
    r1 = *(u8*)(r1 + 0x3);
    r5 = 0x087251C8U; // [0x0802182C]
    r4 = r2 + r4;
    r1 = r3 + r1;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    *(u32*)(r0 + 0x18) = (u32)r4;
    r6 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_080217A0;
    r2 = *(u32*)(r5);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_080217A0;
    r2 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080217A0;
    r2 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_080217A6(r0, r1, r2, r3);
loc_080217A0:
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080217A6..0x080217AC (6 bytes, Thumb)
u32 sub_080217A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x1U;
    return sub_080217A2(r0, r1, r2, r3);
}

// ROM Address: 0x080217AC..0x08021824 (120 bytes, Thumb)
u32 sub_080217AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r4 = 0xFE00FFFFU; // [0x08021830]
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x28);
    r2 = *(u32*)(r2 + 0x4);
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x10);
    r2 &= r4;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x14);
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r2 = *(u16*)(r0 + 0xC);
    r3 = *(u32*)(r1 + 0x4);
    r3 = (r3 >> 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r3 = (r3 << 10);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r0 = *(u8*)(r0 + 0x8);
    r3 = 0xC00U; // (3 << 10)
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r0 = (r0 << 10);
    r2 &= ~r3;
    r0 |= r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_08021824(r0, r1, r2, r3);
    r1 = *(u32*)(r0 + 0x28);
    r0 = *(u16*)(r0 + 0xC);
    r3 = *(u8*)(r1 + 0x2);
    r4 = *(u8*)(r1 + 0x3);
    r0 = (r0 << 5);
    r1 = *(u32*)(r1 + 0x8);
    r3 *= r4;
    r2 = r3;
    r3 = 0x06010000U; // [0x08021828]
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802181C: BL 0x08049138
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08021824..0x08021828 (4 bytes, Thumb)
u32 sub_08021824(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08021836..0x08021868 (50 bytes, Thumb)
u32 sub_08021836(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r1 = r0;
    r0 = 0x087251D8U; // [0x08021870]
    r2 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0);
    r0 += 0x28U;
    r3 = *(u32*)(r0);
    r1 += 0x20U;
    r2 = r2 - r3;
    r3 = *(u32*)(r4 + 0x30);
    r0 = *(u32*)(r0 + 0x4);
    stack[0] = r2; // [sp + 0x0]
    r0 = r3 - r0;
    stack[1] = r0; // [sp + 0x4]
    r0 = r2;
    r2 = stack[1]; // [sp + 0x4]
    *(u32*)r1 = r0; r1 += 4;
    *(u32*)r1 = r2; r1 += 4;
    r0 = r4;
    r0 = sub_08021762(r0, r1, r2, r3); // 0x0802185C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08021868(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08021868..0x08021870 (8 bytes, Thumb)
u32 sub_08021868(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x30);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return sub_08021864(r0, r1, r2, r3);
}

// ROM Address: 0x08021872..0x0802193A (200 bytes, Thumb)
u32 sub_08021872(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r6 >> 1);
    r2 = 0x03002BFCU; // [0x08021BB4]
    r0 = 0x0U;
    *(u8*)(r2) = (u8)r0;
    r1 = 0x0872A6B4U; // [0x08021BB8]
    *(u8*)(r2 + 0x1) = (u8)r0;
    r3 = *(u32*)(r1 + 0x10);
    *(u16*)(r3 + 0x2) = (u16)r0;
    r3 = *(u32*)(r1 + 0x10);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = *(u32*)(r1 + 0x10);
    *(u16*)(r3 + 0x6) = (u16)r0;
    r3 = *(u32*)(r1 + 0x10);
    r3 += 0x180U;
    *(u16*)(r3 + 0xC) = (u16)r0;
    r3 = *(u32*)(r1 + 0x14);
    *(u16*)(r3 + 0x2) = (u16)r0;
    r3 = *(u32*)(r1 + 0x14);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = *(u32*)(r1 + 0x14);
    *(u16*)(r3 + 0x6) = (u16)r0;
    r1 = *(u32*)(r1 + 0x14);
    r1 += 0x180U;
    *(u16*)(r1 + 0xC) = (u16)r0;
    r0 = 0x1U;
    *(u32*)(r2 + 0x8) = (u32)r0;
    return r0; // BX lr
    r7 = r0;
    r0 = 0x03002BFCU; // [0x08021BB4]
    r6 = 0x1U;
    r4 = 0x0U;
    r6 = (r6 << 9);
    *(u32*)(r0 + 0x8) = (u32)r4;
    r2 = r6;
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x08021BBC]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080218C2: BL 0x0804912C
    r2 = r6;
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080218CE: BL 0x0804912C
    r5 = (r6 << 17);
    *(u16*)(r5) = (u16)r4;
    *(u16*)(r5 + 0x10) = (u16)r4;
    *(u16*)(r5 + 0x12) = (u16)r4;
    *(u16*)(r5 + 0x14) = (u16)r4;
    *(u16*)(r5 + 0x16) = (u16)r4;
    *(u16*)(r5 + 0x18) = (u16)r4;
    *(u16*)(r5 + 0x1A) = (u16)r4;
    *(u16*)(r5 + 0x1C) = (u16)r4;
    r0 = 0x00001E83U; // [0x08021BC0]
    *(u16*)(r5 + 0x1E) = (u16)r4;
    *(u16*)(r5 + 0xA) = (u16)r0;
    r1 = 0x0U;
    r0 = (r0 << 25);
    r2 = 0x00009640U; // [0x08021BC4]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080218F0: BL 0x0804912C
    r0 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x14U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r2 = 0x1U;
    stack[1] = r4; // [sp + 0x4]
    stack[2] = r4; // [sp + 0x8]
    r1 = 0x0600F000U; // [0x08021BC8]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08021906
    r2 = (r5 >> 17);
    r0 = 0x5000000U; // (5 << 24)
    *(u16*)(r5) = (u16)r6;
    r1 = 0x0805652CU; // [0x08021BCC]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08021914: BL 0x08049144
    r2 = (r5 >> 17);
    r1 = 0x0805652CU; // [0x08021BCC]
    r0 = 0x05000200U; // [0x08021BBC]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0802191E: BL 0x08049144
    r0 = 0x04000040U /* &REG_WIN0H */; // [0x08021BD0]
    *(u16*)(r0 + 0x10) = (u16)r4;
    r0 = r7;
    if (cmp_lhs == cmp_rhs) goto loc_08021936;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08021932: BL __call_via_r3
loc_08021936:
    return r0;
}

// ROM Address: 0x0802193A..0x08021950 (22 bytes, Thumb)
u32 sub_0802193A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r1 = 0x03004A5CU; // [0x08021BD4]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r1 = 0x03004A60U; // [0x08021BD8]
    r5 = r4 + 4;
    r6 = r5 + 4;
    *(u32*)(r1) = (u32)r0;
    return sub_08021B98(r0, r1, r2, r3);
}

// ROM Address: 0x08021950..0x08021A4E (254 bytes, Thumb)
u32 sub_08021950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x98U;
    r3 = 0xC0; // sp + 0xC0
    *(u16*)(r3 + 0x28) = (u16)r0;
    r0 = 0xDCU;
    *(u16*)(r3 + 0x2A) = (u16)r0;
    r0 = *(u32*)(r7 + 0x20);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080219BE;
    r0 = 0x80; // sp + 0x80
    r0 = sub_08050364(r0, r1, r2, r3); // 0x08021964
    r0 = 0x18; // sp + 0x18
    r0 = sub_08050364(r0, r1, r2, r3); // 0x0802196A
    r2 = 0x68U;
    r1 = 0x0U;
    r0 = 0x80; // sp + 0x80
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08021974: BL 0x0804912C
    r2 = 0x68U;
    r1 = 0x0U;
    r0 = 0x18; // sp + 0x18
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802197E: BL 0x0804912C
    r0 = 0x80; // sp + 0x80
    r1 = *(u32*)(r7 + 0x24);
    r0 = sub_0801339C(r0, r1, r2, r3); // 0x08021986
    r0 = 0x18; // sp + 0x18
    r1 = *(u32*)(r7 + 0x28);
    r0 = sub_0801339C(r0, r1, r2, r3); // 0x0802198E
    r0 = *(u32*)(r7 + 0x28);
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08021996: BL 0x08000158
    stack[5] = r0; // [sp + 0x14]
    r0 = *(u32*)(r7 + 0x24);
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080219A0: BL 0x08000158
    r2 = 0x18; // sp + 0x18
    r1 = 0x80; // sp + 0x80
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = r0;
    stack[1] = r6; // [sp + 0x4]
    stack[0] = r5; // [sp + 0x0]
    r3 = stack[5]; // [sp + 0x14]
    r0 = *(u32*)(r7 + 0x2C);
    r1 = 0xE8; // sp + 0xE8
    r0 = sub_08008E70(r0, r1, r2, r3); // 0x080219B8
    goto loc_08021A18;
loc_080219BE:
    r0 = 0x80; // sp + 0x80
    r0 = sub_08050364(r0, r1, r2, r3); // 0x080219C0
    r0 = 0x18; // sp + 0x18
    r0 = sub_08050364(r0, r1, r2, r3); // 0x080219C6
    r1 = 0x80; // sp + 0x80
    r0 = *(u32*)(r7 + 0x24);
    r0 = sub_080229B0(r0, r1, r2, r3); // 0x080219CE
    r1 = 0x18; // sp + 0x18
    r0 = *(u32*)(r7 + 0x28);
    r0 = sub_080229B0(r0, r1, r2, r3); // 0x080219D6
    r3 = 0x20; // sp + 0x20
    r0 = *(u8*)(r3 + 0xC);
    r1 = 0x086B82ECU; // [0x08021BDC]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x080219E8
    stack[5] = r0; // [sp + 0x14]
    r3 = 0x80; // sp + 0x80
    r0 = *(u8*)(r3 + 0x14);
    r1 = 0x086B82ECU; // [0x08021BDC]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x080219FC
    r2 = 0x18; // sp + 0x18
    r1 = 0x80; // sp + 0x80
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = r0;
    stack[1] = r6; // [sp + 0x4]
    stack[0] = r5; // [sp + 0x0]
    r3 = stack[5]; // [sp + 0x14]
    r0 = *(u32*)(r7 + 0x2C);
    r1 = 0xE8; // sp + 0xE8
    r0 = sub_08008E70(r0, r1, r2, r3); // 0x08021A14
loc_08021A18:
    r7 = 0x0872A6B4U; // [0x08021BB8]
    r0 = *(u32*)(r7 + 0x8);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021A24: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021A30;
    r0 = *(u32*)(r4 + 0x4);
    goto loc_08021A32;
loc_08021A30:
    r0 = *(u32*)(r4 + 0x8);
loc_08021A32:
    r7 = 0x03002BFCU; // [0x08021BB4]
    *(u32*)(r7 + 0x14) = (u32)r0;
    r0 = 0x0872A6B4U; // [0x08021BB8]
    r0 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021A42: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08021A4E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x8);
    return sub_08021A50(r0, r1, r2, r3);
}

// ROM Address: 0x08021A4E..0x08021B4A (252 bytes, Thumb)
u32 sub_08021A4E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x4);
    *(u32*)(r7 + 0x18) = (u32)r0;
    r0 = 0x0872A6B4U; // [0x08021BB8]
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_080042FC(r0, r1, r2, r3); // 0x08021A56
    r1 = 0x03001C40U; // [0x08021BE0]
    r0 = *(u32*)(r7 + 0x14);
    r0 = sub_08010BB8(r0, r1, r2, r3); // 0x08021A5E
    r1 = 0x03001C40U; // [0x08021BE0]
    r0 = *(u32*)(r7 + 0x18);
    r0 = sub_08010BB8(r0, r1, r2, r3); // 0x08021A66
    r0 = *(u32*)(r7 + 0x14);
    r0 = sub_08010634(r0, r1, r2, r3); // 0x08021A6C
    r0 = *(u32*)(r7 + 0x18);
    r0 = sub_08010634(r0, r1, r2, r3); // 0x08021A72
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08021A78: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021A8C;
    r1 = 0x080495B4U /* &VTable_080495B4 */; // [0x08021BE4]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x4U;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08021A8C:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08021A8C
    r7 = 0x03002BFCU; // [0x08021BB4]
    r0 = *(u8*)(r7);
    r1 = *(u8*)(r7 + 0x1);
    r7 = r0 + r1;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08021A9A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021AAC;
    r1 = r7;
    r1 += 0x6AU;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804A8ACU /* &VTable_0804A8AC */; // [0x08021BE8]
    *(u32*)(r0) = (u32)r1;
loc_08021AAC:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08021AAC
    r2 = r4 + 4;
    r7 = 0x0872A6B4U; // [0x08021BB8]
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r0 = *(u32*)(r7 + 0x18);
    r0 = sub_08004722(r0, r1, r2, r3); // 0x08021AB8
    r3 = 0x64U;
    r2 = 0x0U;
    r0 = 0x0U;
    r1 = *(u32*)(r4 + 0x8);
    r0 = sub_080195A8(r0, r1, r2, r3); // 0x08021AC4: BL 0x080195A8
    r1 = r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08021ACC: BL 0x0801191A
    r1 = 0x03002BFCU; // [0x08021BB4]
    r0 = *(u8*)(r1);
    r1 = *(u8*)(r1 + 0x1);
    r7 = r0 + r1;
    r1 = *(u32*)(r4 + 0x4);
    r0 = 0x34U;
    stack[56] = r1; // [sp + 0xE0]
    r1 = *(u32*)(r4 + 0x8);
    stack[57] = r1; // [sp + 0xE4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08021AE2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021AF8;
    r1 = 0x08049424U /* &VTable_08049424 */; // [0x08021BEC]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r7;
    r1 = stack[56]; // [sp + 0xE0]
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = stack[57]; // [sp + 0xE4]
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_08021AF8:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08021AF8
    r7 = r0;
    r0 = 0x0872A6B4U; // [0x08021BB8]
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08004764(r0, r1, r2, r3); // 0x08021B02
    r0 = 0x0872A6B4U; // [0x08021BB8]
    r2 = 0x0U;
    r1 = 0x13U;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08021B0E
    r0 = 0x0872A6B4U; // [0x08021BB8]
    r2 = 0x0U;
    r1 = 0xFU;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08021B1A
    cmp_lhs = (s32)r7; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08021B4A(r0, r1, r2, r3);
    cmp_lhs = (s32)r7; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08021B54(r0, r1, r2, r3);
    cmp_lhs = (s32)r7; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) return sub_08021B5C(r0, r1, r2, r3);
    cmp_lhs = (s32)r7; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) return sub_08021B5C(r0, r1, r2, r3);
    r7 = 0x0872A6B4U; // [0x08021BB8]
    r0 = *(u32*)(r7 + 0x30);
    r0 = sub_0804019A(r0, r1, r2, r3); // 0x08021B32
    r0 = sub_0804014E(r0, r1, r2, r3); // 0x08021B36
    r1 = 0x000005C4U; // [0x08021BF0]
    r0 = *(u32*)(r7 + 0x4);
    r0 = r0 + r1;
    r0 = sub_0803E2EC(r0, r1, r2, r3); // 0x08021B40
    r0 = 0x2U;
    return r0;
}

// ROM Address: 0x08021B4A..0x08021BB4 (106 bytes, Thumb)
u32 sub_08021B4A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x03002BFCU; // [0x08021BB4]
    r0 = *(u8*)(r1 + 0x1);
    r0 += 0x1U;
    *(u8*)(r1 + 0x1) = (u8)r0;
    goto loc_08021B5C;
    r1 = 0x03002BFCU; // [0x08021BB4]
    r0 = *(u8*)(r1);
    r0 += 0x1U;
    *(u8*)(r1) = (u8)r0;
loc_08021B5C:
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08021B5E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021B74;
    r1 = 0x080496CCU /* &VTable_080496CC */; // [0x08021BF4]
    *(u32*)(r0) = (u32)r1;
    r1 = 0xFFU;
    r1 += 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x4U;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08021B74:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08021B74
    r0 = 0x03002BFCU; // [0x08021BB4]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_080106F6(r0, r1, r2, r3); // 0x08021B7C
    r0 = 0x03002BFCU; // [0x08021BB4]
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_080106F6(r0, r1, r2, r3); // 0x08021B84
    r0 = 0x0872A6B4U; // [0x08021BB8]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x08021B8C
    r3 = r7 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08021B98;
    r0 = 0x1U;
    return sub_08021B46(r0, r1, r2, r3);
loc_08021B98:
    r7 = 0x0872A6B4U; // [0x08021BB8]
    r1 = 0x03002BFCU; // [0x08021BB4]
    r0 = *(u32*)(r7 + 0x20);
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u8*)(r1);
    r0 = ((u32)((s32)r0 >> 1));
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_08021BB0;
    r1 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08021BB0;
    return sub_08021950(r0, r1, r2, r3);
loc_08021BB0:
    r0 = 0x1U;
    return sub_08021B46(r0, r1, r2, r3);
}

// ROM Address: 0x08021BB6..0x08021C0C (86 bytes, Thumb)
u32 sub_08021BB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x08021E8CU;
    r2 = (r6 >> 1);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    r3 = r0 - 2;
    r0 = r0;
    stack[64] = r6; // [sp + 0x100]
    r0 = r0;
    r0 = (r0 << 24);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r0 = (r0 << 1);
    r0 = (r0 << 16);
    r2 = 0x43286878U; // [0x08021D48]
    r0 = (r0 << 12);
    r2 = 0x31344955U; // [0x08021D5C]
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r0 = r0 + 1;
    r0 = (r0 << 12);
    stack[180] = r5; // [sp + 0x2D0]
    r4 = (r0 >> 32);
    r0 = 0x2B0; // sp + 0x2B0
    r4 = (r0 >> 32);
    stack[36] = r4; // [sp + 0x90]
    r4 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[204] = r6; // [sp + 0x330]
    r4 = (r0 >> 32);
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08021C0C(r0, r1, r2, r3);
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08021C00: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08021C0C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08021C0C..0x08021C40 (52 bytes, Thumb)
u32 sub_08021C0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x080492D4U /* &VTable_080492D4 */; // [0x08021EB0]
    r5 = 0x0872A6B4U; // [0x08021EB4]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5 + 0x10);
    r1 = 0x1U;
    r0 += 0x180U;
    *(u16*)(r0 + 0x10) = (u16)r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x18) = (u32)r1;
    r0 = *(u32*)(r5 + 0x14);
    r0 += 0x190U;
    r2 = 0x4U;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08021C2A: BL 0x08049168
    r0 = *(u32*)(r5 + 0x10);
    r2 = 0x4U;
    r0 += 0x19CU;
    r1 = 0x0U;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08021C38: BL 0x08049168
    r0 = r4;
    return sub_08021C0A(r0, r1, r2, r3);
}

// ROM Address: 0x08021C40..0x08021CD0 (144 bytes, Thumb)
u32 sub_08021C40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0U;
    *(u32*)(r0 + 0x2C) = (u32)r5;
    r4 = r0;
    r0 = 0x03002BFCU; // [0x08021EB8]
    r1 = 0xB4U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x3CU;
    *(u32*)(r4 + 0x30) = (u32)r1;
    *(u32*)(r4 + 0x18) = (u32)r5;
    *(u32*)(r0 + 0xC) = (u32)r5;
    *(u32*)(r4 + 0x20) = (u32)r5;
    *(u32*)(r0 + 0x10) = (u32)r5;
    *(u32*)(r4 + 0x28) = (u32)r5;
    r0 = 0x0U;
    r0 = sub_0802E732(r0, r1, r2, r3); // 0x08021C5E: BL 0x0802E732
    r1 = r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x0872A6B4U; // [0x08021EB4]
    r0 = *(u32*)(r0 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08021C6A: BL 0x0801191A
    r0 = 0x0U;
    *(u32*)(r4 + 0x24) = (u32)r5;
    r0 = sub_08021BF8(r0, r1, r2, r3); // 0x08021C72
    r0 = sub_08040160(r0, r1, r2, r3); // 0x08021C76
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021C8E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08021C8A: BL __call_via_r3
loc_08021C8E:
    r0 = sub_08040182(r0, r1, r2, r3); // 0x08021C8E
    r1 = 0x0872A6B4U; // [0x08021EB4]
    r0 = 0x0U;
    r2 = *(u32*)(r1 + 0x10);
    *(u16*)(r2 + 0x2) = (u16)r0;
    r2 = *(u32*)(r1 + 0x10);
    *(u16*)(r2 + 0x4) = (u16)r0;
    r2 = *(u32*)(r1 + 0x10);
    *(u16*)(r2 + 0x6) = (u16)r0;
    r2 = *(u32*)(r1 + 0x10);
    r2 += 0x180U;
    *(u16*)(r2 + 0xC) = (u16)r0;
    r2 = *(u32*)(r1 + 0x14);
    *(u16*)(r2 + 0x2) = (u16)r0;
    r2 = *(u32*)(r1 + 0x14);
    *(u16*)(r2 + 0x4) = (u16)r0;
    r2 = *(u32*)(r1 + 0x14);
    *(u16*)(r2 + 0x6) = (u16)r0;
    r1 = *(u32*)(r1 + 0x14);
    r1 += 0x180U;
    *(u16*)(r1 + 0xC) = (u16)r0;
    return r0;
    r7 = 0x03002BFCU; // [0x08021EB8]
    r4 = r0;
    r0 = *(u32*)(r7 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08021CD0(r0, r1, r2, r3);
    r0 = 0xFFU;
    return r0;
}

// ROM Address: 0x08021CD0..0x08021E8E (446 bytes, Thumb)
u32 sub_08021CD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x18);
    r6 = 0x0872A6B4U; // [0x08021EB4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021CDE;
    r0 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08021DAC;
loc_08021CDE:
    r0 = *(u32*)(r6 + 0xC);
    r0 = sub_08011A1E(r0, r1, r2, r3); // 0x08021CE0: BL 0x08011A1E
    r0 = *(u32*)(r4 + 0x8);
    r2 = 0x80U;
    r1 = *(u32*)(r0);
    r5 = 0x0U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021CF0: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08021D00;
    r5 = 0x1U;
loc_08021D00:
    r0 = *(u32*)(r4 + 0xC);
    r2 = 0x80U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021D0A: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08021D1C;
    r0 = 0x2U;
    r5 |= r0;
loc_08021D1C:
    r1 = *(u32*)(r7 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021D3A;
    r0 = *(u32*)(r4 + 0x30);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x30) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08021D3A;
    r0 = 0x3CU;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r1 -= 0x1U;
    *(u32*)(r7 + 0x4) = (u32)r1;
    r1 |= r5;
    if (cmp_lhs != cmp_rhs) goto loc_08021D3A;
    r0 = 0x1U;
    *(u32*)(r7 + 0x10) = (u32)r0;
loc_08021D3A:
    r1 = 0xFFU;
    r0 = *(u32*)(r4 + 0x2C);
    r1 += 0x1DU;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08021D48;
    r0 = 0x1U;
    *(u32*)(r7 + 0x10) = (u32)r0;
loc_08021D48:
    r0 = *(u32*)(r7 + 0x4);
    r0 |= r5;
    if (cmp_lhs != cmp_rhs) goto loc_08021D52;
    r5 = 0x3U;
    goto loc_08021D56;
loc_08021D52:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021DEA;
loc_08021D56:
    r0 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08021DC2;
    r1 = 0x0872A6B4U; // [0x08021EB4]
    r1 += 0x34U;
    cmp_lhs = (s32)r5; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08021D86;
    r0 = *(u32*)(r6 + 0x20);
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u8*)(r7 + 0x1);
    r0 = ((u32)((s32)r0 >> 1));
    r2 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08021D7C;
    r0 = 0x73U;
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x08021D74: BL 0x0802BFBC
    *(u32*)(r4 + 0x24) = (u32)r0;
    goto loc_08021DB6;
loc_08021D7C:
    r0 = 0x70U;
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x08021D7E: BL 0x0802BFBC
    *(u32*)(r4 + 0x24) = (u32)r0;
    goto loc_08021DB6;
loc_08021D86:
    cmp_lhs = (s32)r5; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08021DAE;
    r0 = *(u32*)(r6 + 0x20);
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u8*)(r7);
    r0 = ((u32)((s32)r0 >> 1));
    r2 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08021DA2;
    r0 = 0x72U;
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x08021D9A: BL 0x0802BFBC
    *(u32*)(r4 + 0x24) = (u32)r0;
    goto loc_08021DB6;
loc_08021DA2:
    r0 = 0x6FU;
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x08021DA4: BL 0x0802BFBC
    *(u32*)(r4 + 0x24) = (u32)r0;
    goto loc_08021DB6;
loc_08021DAC:
    goto loc_08021E0A;
loc_08021DAE:
    r0 = 0x71U;
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x08021DB0: BL 0x0802BFBC
    *(u32*)(r4 + 0x24) = (u32)r0;
loc_08021DB6:
    r1 = *(u32*)(r4 + 0x24);
    r0 = *(u32*)(r6 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08021DBA: BL 0x0801191A
    r0 = 0x3CU;
    *(u32*)(r4 + 0x28) = (u32)r0;
loc_08021DC2:
    r0 = *(u32*)(r4 + 0x2C);
    r1 = 0xFFU;
    r0 += 0x1U;
    r1 += 0x2DU;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    if (cmp_lhs < cmp_rhs) goto loc_08021DEE;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = *(u32*)(r6 + 0xC);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08021DD4
    r0 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021DE6;
    r1 = r0;
    r0 = *(u32*)(r6 + 0xC);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08021DE2
loc_08021DE6:
    r0 = r5;
    return sub_08021CCE(r0, r1, r2, r3);
loc_08021DEA:
    r0 = 0x0U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
loc_08021DEE:
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021DFA;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
    goto loc_08021E0A;
loc_08021DFA:
    r1 = *(u32*)(r7 + 0x14);
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_080126D4(r0, r1, r2, r3); // 0x08021DFE
    r1 = *(u32*)(r7 + 0x18);
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_080126D4(r0, r1, r2, r3); // 0x08021E06
loc_08021E0A:
    r0 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08021E98(r0, r1, r2, r3);
    r0 = *(u32*)(r6 + 0x14);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 28);
    r1 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_08021E24;
    r0 = *(u32*)(r6 + 0x10);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08021EAA(r0, r1, r2, r3);
loc_08021E24:
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08021E50;
    r1 = 0x0U;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r1 = *(u32*)(r6 + 0x14);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08021E3C;
    r1 = 0x1U;
    *(u32*)(r4 + 0x20) = (u32)r1;
loc_08021E3C:
    r1 = *(u32*)(r6 + 0x10);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08021E6A;
    r1 = *(u32*)(r4 + 0x20);
    r2 = 0x2U;
    r1 |= r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    goto loc_08021E6A;
loc_08021E50:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021E5A;
    r1 = *(u32*)(r4 + 0x20);
    r1 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08021E6A;
loc_08021E5A:
    r1 = *(u32*)(r6 + 0x10);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08021EAA(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x20);
    r1 = (r1 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08021EAA(r0, r1, r2, r3);
loc_08021E6A:
    r1 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021E72;
    r1 = 0x0U;
loc_08021E72:
    *(u32*)(r4 + 0x18) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08021E8E(r0, r1, r2, r3);
    r1 = 0x0872A6B4U; // [0x08021EB4]
    r1 += 0x3CU;
    r0 = 0x27U;
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x08021E7E: BL 0x0802BFBC
    r1 = r0;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u32*)(r6 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08021E88: BL 0x0801191A
    return sub_08021EAA(r0, r1, r2, r3);
}

// ROM Address: 0x08021E8E..0x08021EAA (28 bytes, Thumb)
u32 sub_08021E8E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4 + 0x14);
    r0 = *(u32*)(r6 + 0xC);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08021E92
    return sub_08021EAA(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08021EAA(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r1 = *(u32*)(r4 + 0x14);
    r0 = *(u32*)(r6 + 0xC);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08021EA6
    return r0;
}

// ROM Address: 0x08021EAA..0x08021EAE (4 bytes, Thumb)
u32 sub_08021EAA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08021CCE(r0, r1, r2, r3);
}

// ROM Address: 0x08021EAE..0x08021F7E (208 bytes, Thumb)
u32 sub_08021EAE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    stack[212] = r2; // [sp + 0x350]
    r4 = (r0 >> 32);
    r6 = 0x08022188U;
    r2 = (r6 >> 1);
    cmp_lhs = (s32)r3; cmp_rhs = 252;
    r0 = (r0 << 12);
    r4 = 0x0872A6B4U; // [0x080220C4]
    r5 = r0;
    r0 = *(u32*)(r4 + 0x10);
    r1 = 0xFFU;
    r1 += 0x89U;
    r1 = *(u32*)(r1 + r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021ECE: BL 0x08046AA2
    r1 = 0xFFU;
    r0 = *(u32*)(r4 + 0x14);
    r1 += 0x89U;
    r1 = *(u32*)(r1 + r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021EDE: BL 0x08046AA2
    r0 = r5;
    r0 = sub_08007040(r0, r1, r2, r3); // 0x08021EE4
    return r0;
    r1 = 0xFFU;
    r1 += 0x8DU;
    r1 = *(u16*)(r1 + r0);
    r0 = sub_0804023C(r0, r1, r2, r3); // 0x08021EF2
    return r0;
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021F08;
loc_08021EFE:
    r2 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08021F04;
    r0 += 0x1U;
loc_08021F04:
    r1 = (r1 >> 1);
    if (cmp_lhs != cmp_rhs) goto loc_08021EFE;
loc_08021F08:
    return r0; // BX lr
    r1 = 0x03004A80U; // [0x080220C8]
    r2 = *(u32*)(r1);
    stack[0] = r2; // [sp + 0x0]
    r6 = *(u32*)(r1);
    r5 = 0x0U;
    r4 = r0;
    r4 += 0x180U;
    r7 = 0x0872A6B4U; // [0x080220C4]
    r0 = *(u32*)(r7 + 0x8);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021F28: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021F40;
    r0 = *(u32*)(r7 + 0x8);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021F3A: BL 0x08046AA2
    goto loc_08021F58;
loc_08021F40:
    r1 = 0x03004A80U; // [0x080220C8]
    r0 = *(u32*)(r1);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08021F58;
    r6 = *(u32*)(r1);
    r0 = *(u32*)(r7 + 0x8);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08021F54: BL 0x08046AA2
loc_08021F58:
    r1 = *(u32*)(r4 + 0x1C);
    r3 = 0x03004A80U; // [0x080220C8]
    r0 = stack[0]; // [sp + 0x0]
    r2 = *(u32*)(r3);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) return sub_08021F82(r0, r1, r2, r3);
    r0 = *(u32*)(r3);
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 60;
    stack[0] = r0; // [sp + 0x0]
    if (cmp_lhs != cmp_rhs) return sub_08021F82(r0, r1, r2, r3);
    r0 = 0x03002BFCU; // [0x080220CC]
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08021F7E(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08021F7E..0x08021FDE (96 bytes, Thumb)
u32 sub_08021F7E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08021F7C(r0, r1, r2, r3);
    r0 = (r1 << 30);
    r0 = (r0 >> 30);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08021F1C(r0, r1, r2, r3);
    r0 = (r1 << 1);
    r2 = (r1 << 28);
    r3 = (r2 >> 30);
    r0 = (r0 >> 30);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) return sub_08021F1C(r0, r1, r2, r3);
    r0 = (r1 << 8);
    r0 = (r0 >> 8);
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08021FAA;
loc_08021FA0:
    r7 = (r0 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08021FA6;
    r2 += 0x1U;
loc_08021FA6:
    r0 = (r0 >> 1);
    if (cmp_lhs != cmp_rhs) goto loc_08021FA0;
loc_08021FAA:
    r0 = (r1 << 3);
    r0 = (r0 >> 27);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08021F1C(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0x10);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08021FC0;
    r0 = (r1 << 8);
    r0 = (r0 >> 22);
    *(u16*)(r4 + 0xC) = (u16)r0;
    goto loc_08021FD0;
loc_08021FC0:
    r0 += 0x1U;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) return sub_08021F1C(r0, r1, r2, r3);
    r0 = (r1 << 18);
    r0 = (r0 >> 22);
    *(u16*)(r4 + 0xC) = (u16)r0;
loc_08021FD0:
    r0 = *(u16*)(r4 + 0x10);
    r0 += 0x1U;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    *(u16*)(r4 + 0x10) = (u16)r0;
    r0 = 0x1U;
    return sub_08021F7C(r0, r1, r2, r3);
}

// ROM Address: 0x08021FDE..0x08022006 (40 bytes, Thumb)
u32 sub_08021FDE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r4 += 0x180U;
    r5 = r0;
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080220AA(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x14);
    r7 = 0x03002BFCU; // [0x080220CC]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08022006(r0, r1, r2, r3);
    r0 = r5;
    r0 = sub_08021F0A(r0, r1, r2, r3); // 0x08021FF8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08022006(r0, r1, r2, r3);
    r1 = 0x1U;
    *(u32*)(r7 + 0xC) = (u32)r1;
    return r0;
}

// ROM Address: 0x08022006..0x080220C2 (188 bytes, Thumb)
u32 sub_08022006(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0872A6B4U; // [0x080220C4]
    r3 = 0xFFFFC00FU; // [0x080220D0]
    r0 = *(u32*)(r6 + 0x14);
    r0 += 0x180U;
    r1 = *(u32*)(r0 + 0x10);
    r2 = (r1 << 8);
    r2 = (r2 >> 22);
    *(u16*)(r0 + 0xC) = (u16)r2;
    r2 = (r2 << 4);
    r1 &= r3;
    r1 |= r2;
    r2 = *(u32*)(r7 + 0x10);
    r3 = 0xFF003FFFU; // [0x080220D4]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08022034;
    r2 = *(u32*)(r6);
    r1 &= r3;
    r2 = *(u16*)(r2 + 0x2);
    r2 = (r2 << 22);
    r2 = (r2 >> 8);
    r1 |= r2;
    goto loc_08022036;
loc_08022034:
    r1 &= r3;
loc_08022036:
    r1 = (r1 >> 2);
    r1 = (r1 << 2);
    r1 += 0x1U;
    r3 = r1;
    r2 = 0xCU;
    r1 += 0x4U;
    r1 &= r2;
    r3 &= ~r2;
    r1 |= r3;
    r3 = r1;
    r1 = (r1 << 28);
    r1 = (r1 >> 30);
    r1 = (r1 << 2);
    r3 &= ~r2;
    r1 |= r3;
    r3 = (r2 << 27);
    r2 = r1;
    r1 = (r1 << 28);
    r1 = (r1 >> 30);
    r1 = (r1 << 29);
    r2 &= ~r3;
    r2 |= r1;
    r3 = r2;
    r1 = (r3 << 8);
    r1 = (r1 >> 8);
    r2 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08022078;
loc_0802206E:
    r7 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08022074;
    r2 += 0x1U;
loc_08022074:
    r1 = (r1 >> 1);
    if (cmp_lhs != cmp_rhs) goto loc_0802206E;
loc_08022078:
    r1 = 0x1F000000U; // (31 << 24)
    r3 &= ~r1;
    r1 = (r2 << 27);
    r1 = (r1 >> 3);
    r1 |= r3;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r0 = *(u32*)(r6 + 0x8);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08022090: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080220A6;
    r0 = *(u32*)(r6 + 0x8);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080220A2: BL 0x08046AA2
loc_080220A6:
    r0 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    r1 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_080220B4;
    r1 -= 0x5U;
loc_080220B4:
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = r5;
    r0 = sub_0804023C(r0, r1, r2, r3); // 0x080220BC
    return sub_08022004(r0, r1, r2, r3);
}

// ROM Address: 0x080220D8..0x080220F8 (32 bytes, Thumb)
u32 sub_080220D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080220F8(r0, r1, r2, r3);
    r0 = 0x200U; // (1 << 9)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080220EA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080220F8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080220F8..0x0802214A (82 bytes, Thumb)
u32 sub_080220F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804D260U /* &VTable_0804D260 */; // [0x080222D8]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r1 += 0xD1U;
    *(u32*)(r1 + r4) = r6;
    r6 = r4;
    r5 = r4;
    r5 += 0xCU;
    r6 += 0x1D4U;
    *(u32*)(r6) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_08022470(r0, r1, r2, r3); // 0x08022116
    r7 = 0x0872A6F8U; // [0x080222DC]
    r1 = r0;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08022122: BL 0x0801191A
    r0 = *(u32*)(r6);
    r2 = *(u32*)(r4 + 0x8);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r6;
    *(u32*)(r6) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r2 = r5;
    r1 = 0x19U;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0802213A
    r1 = r5;
    r0 = *(u32*)(r7 + 0x8);
    r0 = sub_08012846(r0, r1, r2, r3); // 0x08022142: BL 0x08012846
    r0 = r4;
    return sub_080220F4(r0, r1, r2, r3);
}

// ROM Address: 0x0802214C..0x08022186 (58 bytes, Thumb)
u32 sub_0802214C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r5 += 0x1D4U;
    r6 = r0;
    r0 = *(u32*)(r5);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08022174;
    r7 = 0x0872A6F8U; // [0x080222DC]
loc_08022160:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08022168
    r0 = *(u32*)(r5);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08022160;
loc_08022174:
    r0 = r6;
    if (cmp_lhs == cmp_rhs) goto loc_08022184;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022180: BL __call_via_r3
loc_08022184:
    return r0;
}

// ROM Address: 0x08022186..0x080221B6 (48 bytes, Thumb)
u32 sub_08022186(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r4;
    r5 += 0xFFU;
    r0 = *(u32*)(r0 + 0x4);
    r5 += 0xD5U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802227C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x8);
    r2 = 0x14; // sp + 0x14
    r1 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x30);
    stack[5] = r1; // [sp + 0x14]
    stack[6] = r0; // [sp + 0x18]
    r3 = *(u32*)(r4 + 0xC);
    r0 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    r12 = r3;
    if (cmp_lhs <= cmp_rhs) return sub_0802227C(r0, r1, r2, r3);
    r6 = r4;
    r6 += 0xCU;
    r1 = *(u32*)(r2);
    lr = r6;
    return r0;
}

// ROM Address: 0x080221B6..0x08022290 (218 bytes, Thumb)
u32 sub_080221B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r0 << 3);
    r3 = r3 - r0;
    r3 = (r3 << 2);
    r3 += lr;
    r3 += 0x4U;
    r6 = *(u32*)(r3);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_0802228E;
    r6 = *(u32*)(r3 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_0802228E;
    r6 = *(u32*)(r2 + 0x4);
    r7 = *(u32*)(r3 + 0x4);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_0802228E;
    r7 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_0802228E;
    r6 = *(u32*)(r3 + 0x10);
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802228E;
    r0 = 0x1U;
    *(u32*)(r3 + 0x10) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0xD1U;
    r0 = *(u32*)(r0 + r4);
    r2 = *(u32*)(r0);
    r6 = r2 + 1;
    *(u32*)(r0) = (u32)r6;
    r2 = (r2 << 3);
    r0 = r2 + r0;
    r1 = *(u32*)(r3 + 0x18);
    r0 += 0x4U;
    r2 = *(u32*)(r3 + 0x14);
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    r0 = r3;
    r2 = *(u32*)(r3);
    r6 = *(u32*)(r3 + 0x8);
    r3 = *(u32*)(r3 + 0x4);
    r0 += 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    r2 = r2 + r6;
    stack[1] = r2; // [sp + 0x4]
    r2 = ((u32)((s32)r2 >> 1));
    r0 = r3 + r0;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x0U;
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r2; // [sp + 0xC]
    r1 = 0xC; // sp + 0xC
    r0 = sub_080222E0(r0, r1, r2, r3); // 0x08022222
    r6 = r0;
    r0 = sub_08022368(r0, r1, r2, r3); // 0x08022228: BL 0x08022368
    r7 = 0x0872A6F8U; // [0x080222DC]
    r1 = r6;
    r0 = *(u32*)(r7 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08022232: BL 0x0801191A
    r0 = *(u32*)(r5);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r5;
    *(u32*)(r5) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r6;
    r0 = *(u32*)(r4 + 0x4);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802227C;
    r2 = *(u32*)(r5);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08022262;
    r3 = *(u32*)(r4 + 0x8);
loc_08022252:
    r1 = (r0 << 2);
    r1 = r1 + r5;
    r1 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08022266;
    r0 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08022252;
loc_08022262:
    r0 = 0x0U;
    r0 = ~r0;
loc_08022266:
    r1 = *(u32*)(r5);
    r1 -= 0x1U;
    *(u32*)(r5) = (u32)r1;
    r1 = r1 - r0;
    if (cmp_lhs == cmp_rhs) goto loc_08022284;
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r2 = (r1 << 2);
    r1 = r0;
    r1 += 0x8U;
    goto loc_0802227E;
loc_0802227C:
    return sub_08022296(r0, r1, r2, r3);
loc_0802227E:
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08022280: BL 0x08049138
loc_08022284:
    r1 = *(u32*)(r4 + 0x8);
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08022288
    return sub_08022296(r0, r1, r2, r3);
loc_0802228E:
    return sub_08022290(r0, r1, r2, r3);
}

// ROM Address: 0x08022290..0x080222F8 (104 bytes, Thumb)
u32 sub_08022290(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x1U;
    cmp_lhs = (s32)r12; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) return sub_080221B6(r0, r1, r2, r3);
    r0 = *(u32*)(r5);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080222B6;
loc_0802229E:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080222AA: BL 0x08046AA2
    r0 = *(u32*)(r5);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0802229E;
loc_080222B6:
    r7 = 0x0872A6F8U; // [0x080222DC]
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x080222BA
    return r0;
    r4 = 0x0872A6F8U; // [0x080222DC]
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x080222C8
    r0 = *(u32*)(r4);
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = ((u32)((s32)r0 >> 31));
    r0 += 0x1U;
    return r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0802239C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r6 = 0x080226C0U;
    r2 = (r6 >> 1);
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080222F8(r0, r1, r2, r3);
    r0 = 0x3CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080222EA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080222F8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080222F8..0x08022368 (112 bytes, Thumb)
u32 sub_080222F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0872BF06U; // [0x08022600]
    r7 = 0x0872BF94U; // [0x08022608]
    r5 = *(u8*)(r6);
    r0 = *(u8*)(r6 + 0x1);
    r5 *= r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08022604]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802230C
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08022324;
    r1 = r5;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08022318: BL 0x08011732
    r1 = r5;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08022320
loc_08022324:
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r1 = 0x0804BA50U /* &VTable_0804BA50 */; // [0x0802260C]
    *(u16*)(r4 + 0xC) = (u16)r0;
    *(u32*)(r4) = (u32)r1;
    r1 = 0x0872BF06U; // [0x08022600]
    r2 = 0x8U;
    r1 -= 0x2U;
    *(u32*)(r4 + 0x28) = (u32)r1;
    *(u8*)(r4 + 0x8) = (u8)r2;
    r2 = *(u8*)(r6);
    r3 = *(u8*)(r6 + 0x1);
    r0 = (r0 << 5);
    r1 = *(u32*)(r1 + 0x8);
    r2 *= r3;
    r3 = 0x06010000U; // [0x08022610]
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08022346: BL 0x08049138
    r0 = 0x0804CA80U /* &VTable_0804CA80 */; // [0x08022614]
    *(u32*)(r4) = (u32)r0;
    r1 = stack[2]; // [sp + 0x8]
    r0 = 0x0804E120U /* &VTable_0804E120 */; // [0x08022618]
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x30) = (u32)r1;
    *(u32*)(r4 + 0x2C) = (u32)r2;
    r0 = *(u32*)(r4 + 0x28);
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = r4;
    return sub_080222F4(r0, r1, r2, r3);
}

// ROM Address: 0x08022368..0x08022626 (702 bytes, Thumb)
u32 sub_08022368(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0872BF34U; // [0x0802261C]
    *(u32*)(r0 + 0x34) = (u32)r1;
    return r0; // BX lr
    r1 = 0x0872BF06U; // [0x08022600]
    r1 -= 0x2U;
    *(u32*)(r0 + 0x34) = (u32)r1;
    return r0; // BX lr
    r1 = 0x0872BF64U; // [0x08022620]
    *(u32*)(r0 + 0x34) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x38);
    r1 += 0x1U;
    *(u32*)(r0 + 0x38) = (u32)r1;
    r1 = (r1 << 28);
    r2 = (r1 >> 30);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r1 = *(u32*)(r0 + 0x34);
    r2 = (r2 << 2);
    r1 = r1 + r2;
    r2 = *(u32*)(r0 + 0x28);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080223B0;
    *(u32*)(r0 + 0x28) = (u32)r1;
    r3 = *(u8*)(r1 + 0x2);
    r4 = *(u8*)(r1 + 0x3);
    r0 = *(u16*)(r0 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r3 *= r4;
    r2 = r3;
    r3 = 0x06010000U; // [0x08022610]
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080223AC: BL 0x08049138
loc_080223B0:
    return r0;
    r2 = 0x0872BF94U; // [0x08022608]
    r2 = *(u32*)(r2 + 0x8);
    r4 = *(u32*)(r0 + 0x2C);
    r2 += 0x18U;
    r5 = *(u32*)(r2);
    r4 = r4 - r5;
    r5 = *(u32*)(r0 + 0x30);
    r2 = *(u32*)(r2 + 0x4);
    stack[0] = r4; // [sp + 0x0]
    r2 = r5 - r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = r4;
    r3 = r0;
    r3 += 0x20U;
    r4 = stack[1]; // [sp + 0x4]
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    r4 = *(u32*)(r0 + 0x28);
    r3 = 0x0U;
    r5 = (u32)(*(s8*)(r4 + r3));
    r2 = *(u32*)(r0 + 0x20);
    r3 = 0x1U;
    r2 = r2 - r5;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r5 = (u32)(*(s8*)(r4 + r3));
    r2 = *(u32*)(r0 + 0x24);
    r6 = 0x3U;
    r2 = r2 - r5;
    *(u32*)(r0 + 0x24) = (u32)r2;
    r2 = *(u32*)(r1);
    r4 = *(u32*)(r4 + 0x4);
    r5 = 0xFE00FFFFU; // [0x08022624]
    *(u32*)(r2) = (u32)r4;
    r3 = *(u32*)(r0 + 0x20);
    r4 &= r5;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r3 |= r4;
    *(u32*)(r2) = (u32)r3;
    r4 = *(u32*)(r0 + 0x24);
    r3 = (r3 >> 8);
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    r3 = (r3 << 8);
    r3 |= r4;
    *(u32*)(r2) = (u32)r3;
    r3 = *(u16*)(r0 + 0xC);
    r4 = *(u32*)(r2 + 0x4);
    r6 = (r6 << 10);
    r4 = (r4 >> 10);
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r4 = (r4 << 10);
    r3 |= r4;
    r3 &= ~r6;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r3 = *(u32*)(r0 + 0x28);
    r4 = 0x1U;
    r3 = *(u32*)(r3 + 0x4);
    r4 = (r4 << 29);
    r3 |= r4;
    r2 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r4 = *(u32*)(r0 + 0x20);
    r3 &= r5;
    r4 = (r4 << 23);
    r4 = (r4 >> 7);
    r3 |= r4;
    *(u32*)(r2) = (u32)r3;
    r5 = *(u32*)(r0 + 0x28);
    r4 = *(u32*)(r0 + 0x24);
    r5 = *(u8*)(r5 + 0x3);
    r3 = (r3 >> 8);
    r3 = (r3 << 8);
    r4 = r4 + r5;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    r3 |= r4;
    *(u32*)(r2) = (u32)r3;
    r0 = *(u16*)(r0 + 0xC);
    r3 = *(u32*)(r2 + 0x4);
    r3 = (r3 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r3 = (r3 << 10);
    r0 |= r3;
    r0 &= ~r6;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r2 += 0x8U;
    *(u32*)(r1) = (u32)r2;
    r0 = 0x0U;
    return r0; // BX lr
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08022488;
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802247C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08022488;
    r0 = r4;
    return r0;
loc_08022488:
    r1 = r5;
    r0 = r4;
    r0 = sub_080222E0(r0, r1, r2, r3); // 0x0802248C
    r0 = 0x0804E41CU /* &VTable_0804E41C */; // [0x08022628]
    r1 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r2 = *(u32*)(r5);
    r5 = *(u32*)(r5 + 0x4);
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x44) = (u32)r1;
    r5 = (r5 << 8);
    *(u32*)(r4 + 0x3C) = (u32)r2;
    r0 = r4;
    r0 += 0x44U;
    *(u32*)(r4 + 0x40) = (u32)r5;
    *(u32*)(r4 + 0x48) = (u32)r1;
    r0 = r4;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x38);
    r0 += 0x1U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = (r0 << 28);
    r1 = (r0 >> 30);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r4 + 0x34);
    r1 = (r1 << 2);
    r1 = r0 + r1;
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080224E4;
    *(u32*)(r4 + 0x28) = (u32)r1;
    r2 = *(u8*)(r1 + 0x2);
    r0 = *(u8*)(r1 + 0x3);
    r3 = 0x06010000U; // [0x08022610]
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080224E0: BL 0x08049138
loc_080224E4:
    r0 = *(u32*)(r4 + 0x44);
    r1 = *(u32*)(r4 + 0x48);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r5 = r4;
    r5 += 0x44U;
    r6 = r5 + 4;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 8);
    r0 = (r0 << 8);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    r1 = (r0 << 8);
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x400U; // (1 << 10)
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802250C: BL 0x08046E58
    r7 = r0;
    r0 = stack[4]; // [sp + 0x10]
    r1 = (r0 << 8);
    r0 = 0x400U; // (1 << 10)
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802251A: BL 0x08046E58
    stack[2] = r0; // [sp + 0x8]
    r1 = stack[2]; // [sp + 0x8]
    stack[1] = r7; // [sp + 0x4]
    stack[5] = r7; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    *(u32*)(r5) = (u32)r7;
    r0 = stack[6]; // [sp + 0x18]
    r1 = 0x0872BF94U; // [0x08022608]
    *(u32*)(r6) = (u32)r0;
    r0 = *(u32*)(r1);
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 26);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08022542;
    r0 = *(u32*)(r4 + 0x44);
    r0 -= 0x100U;
    *(u32*)(r4 + 0x44) = (u32)r0;
loc_08022542:
    r0 = *(u32*)(r1);
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08022554;
    r0 = *(u32*)(r4 + 0x44);
    r0 += 0x100U;
    *(u32*)(r4 + 0x44) = (u32)r0;
loc_08022554:
    r0 = *(u32*)(r1);
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 25);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08022566;
    r0 = *(u32*)(r4 + 0x48);
    r0 -= 0x100U;
    *(u32*)(r4 + 0x48) = (u32)r0;
loc_08022566:
    r0 = *(u32*)(r1);
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08022578;
    r0 = *(u32*)(r4 + 0x48);
    r0 += 0x100U;
    *(u32*)(r4 + 0x48) = (u32)r0;
loc_08022578:
    r0 = *(u32*)(r1 + 0x8);
    r7 = *(u32*)(r5);
    r3 = r0;
    r3 += 0x18U;
    r3 = r3 + 4;
    r1 = *(u32*)r3; r3 += 4;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = *(u32*)(r0 + 0x18);
    r12 = r3;
    r3 = *(u32*)(r4 + 0x3C);
    r3 = r3 + r7;
    *(u32*)(r4 + 0x3C) = (u32)r3;
    r3 = *(u32*)(r4 + 0x40);
    r6 = *(u32*)(r6);
    r3 = r3 + r6;
    *(u32*)(r4 + 0x40) = (u32)r3;
    r3 = r4;
    r3 += 0x2CU;
    stack[6] = r3; // [sp + 0x18]
    r6 = *(u32*)(r4 + 0x3C);
    r3 += 0x10U;
    lr = r3;
    r3 = *(u32*)(r4 + 0x40);
    r6 = ((u32)((s32)r6 >> 8));
    r3 = ((u32)((s32)r3 >> 8));
    stack[5] = r3; // [sp + 0x14]
    r3 = stack[6]; // [sp + 0x18]
    r7 = stack[5]; // [sp + 0x14]
    stack[4] = r6; // [sp + 0x10]
    *(u32*)r3 = r6; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r6 = *(u32*)(r4 + 0x2C);
    r3 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_080225C4;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = (r0 << 8);
    r6 = lr;
    *(u32*)(r6) = (u32)r0;
    *(u32*)(r5) = (u32)r3;
loc_080225C4:
    r0 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_080225D4;
    r6 = lr;
    r0 = (r2 << 8);
    *(u32*)(r4 + 0x2C) = (u32)r2;
    *(u32*)(r6) = (u32)r0;
    *(u32*)(r5) = (u32)r3;
loc_080225D4:
    r0 = r4;
    r2 = r4;
    r5 = *(u32*)(r4 + 0x30);
    r2 += 0x40U;
    r0 += 0x48U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080225EA;
    *(u32*)(r4 + 0x30) = (u32)r1;
    r1 = (r1 << 8);
    *(u32*)(r2) = (u32)r1;
    *(u32*)(r0) = (u32)r3;
loc_080225EA:
    r1 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r12;
    if (cmp_lhs <= cmp_rhs) goto loc_080225FA;
    r5 = r12;
    r1 = (r5 << 8);
    *(u32*)(r4 + 0x30) = (u32)r5;
    *(u32*)(r2) = (u32)r1;
    *(u32*)(r0) = (u32)r3;
loc_080225FA:
    return r0;
    r0 = r0;
    r2 = (r6 >> 1);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r2 = (r6 >> 1);
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r7 = *(u32*)r2; r2 += 4;
    r4 = (r0 >> 32);
    return sub_0802285C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = (r6 >> 1);
    r2 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x0802262C..0x0802266E (66 bytes, Thumb)
u32 sub_0802262C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2);
    r0 = r2;
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08022638: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    r0 = (r0 >> 31);
    return r0;
    r7 = 0x0872BFA0U; // [0x08022674]
    r4 = r1;
    r6 = *(u32*)(r7);
    r1 = r2;
    r2 = *(u32*)(r4);
    r6 += 0xC0U;
    r5 = *(u32*)(r6 + 0x8);
    r3 = *(u32*)(r2 + 0x4);
    r0 = r4;
    r3 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802265A: BL __call_via_r3
    r0 = *(u32*)(r6 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_0802266C;
    r1 = r4;
    r0 = *(u32*)(r7);
    r0 = sub_0801268A(r0, r1, r2, r3); // 0x08022668
loc_0802266C:
    return r0;
}

// ROM Address: 0x0802266E..0x08022672 (4 bytes, Thumb)
u32 sub_0802266E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002F4CU; // [0x08022678]
    return r0; // BX lr
}

// ROM Address: 0x08022676..0x080226C0 (74 bytes, Thumb)
u32 sub_08022676(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r6 >> 1);
    cmp_lhs = (s32)r7; cmp_rhs = 76;
    r0 = (r0 << 12);
    r2 = 0xFFU;
    r2 += 0x15U;
    r3 = 0x0; // sp + 0x0
    r3 = *(u16*)(r3);
    r2 = *(u8*)(r2 + r0);
    r0 += 0xFFU;
    r3 = (r3 >> 3);
    r2 = (r2 << 29);
    r2 = (r2 >> 29);
    r3 = (r3 << 3);
    r2 |= r3;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r2;
    r0 += 0x1U;
    r0 = *(u32*)(r0 + 0x18);
    r3 = 0x7F8U; // (255 << 3)
    r2 &= ~r3;
    r0 = (r0 << 24);
    r0 = (r0 >> 21);
    r0 |= r2;
    r2 = 0x800U; // (1 << 11)
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r0;
    r1 = (r1 << 31);
    r1 = (r1 >> 20);
    r0 &= ~r2;
    r0 |= r1;
    *(u16*)(r3) = (u16)r0;
    r0 = *(u16*)(r3);
    return r0; // BX lr
}

// ROM Address: 0x080226C0..0x08022720 (96 bytes, Thumb)
u32 sub_080226C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r4 += 0x100U;
    r6 = r0;
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080226E2;
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x18);
    r2 = r2 + r1;
    r1 = r6 + 4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080226DC: BL __call_via_r3
    *(u32*)(r4 + 0x20) = (u32)r0;
loc_080226E2:
    r5 = 0x2U;
    r7 = 0x0872BFA4U; // [0x080228FC]
    goto loc_08022702;
loc_080226E8:
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080226FA;
    r1 = r0 + 1;
    *(u32*)(r4 + 0x1C) = (u32)r1;
    r0 = r0 + r6;
    r0 = *(u8*)(r0 + 0x4);
    goto loc_080226FC;
loc_080226FA:
    r0 = 0x0U;
loc_080226FC:
    r1 = 0x8; // sp + 0x8
    *(u8*)(r1 + r5) = (u8)r0;
    r5 += 0x1U;
loc_08022702:
    r0 = *(u32*)(r7);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802270C: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_080226E8;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08022720(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08022722(r0, r1, r2, r3);
}

// ROM Address: 0x08022720..0x08022820 (256 bytes, Thumb)
u32 sub_08022720(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r6 += 0x110U;
    r3 = 0x0; // sp + 0x0
    r2 = *(u16*)(r3 + 0x4);
    r1 = *(u8*)(r6 + 0x4);
    r0 = (r0 << 31);
    r2 = (r2 >> 3);
    r1 = (r1 << 29);
    r1 = (r1 >> 29);
    r2 = (r2 << 3);
    r1 |= r2;
    *(u16*)(r3 + 0x4) = (u16)r1;
    r2 = *(u16*)(r3 + 0x4);
    r3 = 0xFFU;
    r1 = *(u32*)(r4 + 0x18);
    r3 = (r3 << 3);
    r2 &= ~r3;
    r1 = (r1 << 24);
    r1 = (r1 >> 21);
    r1 |= r2;
    r2 = 0x1U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x4) = (u16)r1;
    r2 = (r2 << 11);
    r1 &= ~r2;
    r0 = (r0 >> 20);
    r0 |= r1;
    *(u16*)(r3 + 0x4) = (u16)r0;
    *(u16*)(r3 + 0x8) = (u16)r0;
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r1) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    r0 += 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022776;
    r0 = 0x0U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_08022776:
    return r0;
    r6 = r0;
    r0 = *(u32*)(r1);
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0x8);
    r1 = r6;
    r1 += 0xFFU;
    *(u16*)(r3 + 0xC) = (u16)r0;
    r2 = r6;
    r2 += 0xFFU;
    r1 += 0x21U;
    stack[6] = r1; // [sp + 0x18]
    r2 += 0x5U;
    r1 = *(u8*)(r1 + 0x8);
    stack[5] = r2; // [sp + 0x14]
    r7 = r2 - 4;
    r2 -= 0x80U;
    r0 = (r0 << 29);
    r0 = (r0 >> 29);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    stack[4] = r2; // [sp + 0x10]
    if (cmp_lhs == cmp_rhs) goto loc_080227D0;
    r2 = 0x80U;
    r1 = 0x0U;
    r1 = ~r1;
    r0 = stack[4]; // [sp + 0x10]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080227B2: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080227BC: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08022900]
    r3 = 0x0; // sp + 0x0
    *(u32*)(r7 + 0x24) = (u32)r0;
    r0 = *(u16*)(r3 + 0xC);
    r1 = stack[6]; // [sp + 0x18]
    r0 = (r0 << 29);
    r0 = (r0 >> 29);
    *(u8*)(r1 + 0x8) = (u8)r0;
loc_080227D0:
    r5 = 0x0872BFA4U; // [0x080228FC]
    r0 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080227DC: BL 0x08046AA2
    r3 = 0x0; // sp + 0x0
    r1 = *(u16*)(r3 + 0xC);
    r0 -= 0x2U;
    r1 = (r1 << 21);
    r1 = (r1 >> 24);
    r0 *= r1;
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080227F8: BL 0x08046AA2
    r0 = r0 + r4;
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) return sub_08022820(r0, r1, r2, r3);
    r2 = 0x80U;
    r1 = 0x0U;
    r1 = ~r1;
    r0 = stack[4]; // [sp + 0x10]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802280A: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08022814: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08022900]
    *(u32*)(r7 + 0x24) = (u32)r0;
    return r0;
}

// ROM Address: 0x08022820..0x080228FA (218 bytes, Thumb)
u32 sub_08022820(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x2U;
    goto loc_0802284A;
loc_08022824:
    r0 = ((u32)((s32)r4 >> 3));
    r0 = r0 + r6;
    r0 += 0x100U;
    r3 = (r4 << 29);
    r3 = (r3 >> 29);
    r1 = *(u8*)(r0 + 0x4);
    r2 = 0x2U;
    r2 <<= (r3 & 0xFF);
    r1 |= r2;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r0 = 0x8; // sp + 0x8
    r1 = *(u8*)(r0 + r5);
    r0 = r4;
    r0 = r0 + r6;
    r0 += 0x80U;
    r4 += 0x1U;
    r5 += 0x1U;
    *(u8*)(r0 + 0x4) = (u8)r1;
loc_0802284A:
    r0 = 0x0872BFA4U; // [0x080228FC]
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08022856: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08022824;
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0xC);
    r0 = (r0 << 20);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08022870;
    r0 = *(u16*)(r3 + 0xC);
    r0 = (r0 << 21);
    r0 = (r0 >> 24);
    r0 += 0x1U;
    *(u32*)(r7 + 0x24) = (u32)r0;
loc_08022870:
    r1 = 0x0000FFFFU; // [0x08022900]
    r0 = *(u32*)(r7 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_0802281C(r0, r1, r2, r3);
    r4 = 0x0U;
    stack[1] = r4; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080228CC;
loc_08022880:
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    r5 = 0x2U;
    goto loc_080228A6;
loc_08022888:
    r0 = ((u32)((s32)r4 >> 3));
    r0 = r0 + r6;
    r0 += 0x100U;
    r2 = (r4 << 29);
    r2 = (r2 >> 29);
    r0 = *(u8*)(r0 + 0x4);
    r1 = 0x2U;
    r1 <<= (r2 & 0xFF);
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_080228A2;
    r0 = 0x1U;
    stack[0] = r0; // [sp + 0x0]
loc_080228A2:
    r4 += 0x1U;
    r5 += 0x1U;
loc_080228A6:
    r0 = 0x0872BFA4U; // [0x080228FC]
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080228B2: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08022888;
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802281C(r0, r1, r2, r3);
    r1 = stack[1]; // [sp + 0x4]
    r1 += 0x1U;
    stack[1] = r1; // [sp + 0x4]
    r0 = *(u32*)(r7 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08022880;
loc_080228CC:
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x1C);
    r3 = r2 + r1;
    r1 = stack[6]; // [sp + 0x18]
    r2 = *(u8*)(r1 + 0x8);
    r1 = stack[4]; // [sp + 0x10]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080228DA: BL __call_via_r3
    r2 = 0x80U;
    r1 = 0x0U;
    r1 = ~r1;
    r0 = stack[4]; // [sp + 0x10]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080228E6: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080228F0: BL 0x0804912C
    r1 = 0x0000FFFFU; // [0x08022900]
    *(u32*)(r7 + 0x24) = (u32)r1;
    return sub_0802281C(r0, r1, r2, r3);
}

// ROM Address: 0x08022902..0x08022DF0 (1262 bytes, Thumb)
u32 sub_08022902(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r3 = 0x0U;
    *(u8*)(r1) = (u8)r3;
    r2 = *(u32*)(r0 + 0x4);
    *(u16*)(r1 + 0x2) = (u16)r2;
    r2 = *(u32*)(r0 + 0x8);
    *(u16*)(r1 + 0x4) = (u16)r2;
    r2 = *(u32*)(r0 + 0xC);
    *(u8*)(r1 + 0x6) = (u8)r2;
    r2 = *(u32*)(r0 + 0x10);
    *(u8*)(r1 + 0x7) = (u8)r2;
    r2 = *(u32*)(r0 + 0x14);
    *(u8*)(r1 + 0x8) = (u8)r2;
    r2 = *(u32*)(r0 + 0x18);
    *(u8*)(r1 + 0x9) = (u8)r2;
    r2 = 0x2DU;
    *(u8*)(r1 + 0xA) = (u8)r2;
    r2 = 0x1U;
    *(u8*)(r1 + 0xB) = (u8)r2;
    r2 = 0x7U;
    *(u8*)(r1 + 0xC) = (u8)r2;
    *(u8*)(r1 + 0xD) = (u8)r3;
    r0 = *(u16*)(r0);
    *(u32*)(r1 + 0x14) = (u32)r0;
    return r0; // BX lr
    r5 = r0;
    r4 = r1;
    r0 = r1;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x0802293C
    *(u8*)(r5) = (u8)r0;
    r0 = *(u8*)(r4 + 0xC);
    *(u8*)(r5 + 0x1) = (u8)r0;
    r0 = *(u8*)(r4 + 0x15);
    *(u8*)(r5 + 0x2) = (u8)r0;
    r0 = 0x0U;
loc_0802294C:
    r1 = r4 + r0;
    r2 = *(u8*)(r1 + 0xD);
    r1 = r5 + r0;
    *(u8*)(r1 + 0x3) = (u8)r2;
    r2 = (r0 << 1);
    r2 = r2 + r4;
    r2 += 0x2EU;
    r2 = *(u8*)(r2);
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 6;
    *(u8*)(r1 + 0x9) = (u8)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0802294C;
    r0 = *(u8*)(r4 + 0x14);
    *(u8*)(r5 + 0xF) = (u8)r0;
    r0 = r4;
    r0 += 0x18U;
    r0 = *(u16*)(r0);
    *(u16*)(r5 + 0x10) = (u16)r0;
    r0 = r4;
    r0 += 0x1CU;
    r0 = *(u16*)(r0);
    *(u16*)(r5 + 0x12) = (u16)r0;
    r0 = r4;
    r0 += 0x28U;
    r0 = *(u8*)(r0);
    *(u8*)(r5 + 0x14) = (u8)r0;
    r0 = r4;
    r0 += 0x29U;
    r0 = *(u8*)(r0);
    *(u8*)(r5 + 0x15) = (u8)r0;
    r0 = r4;
    r0 += 0x2AU;
    r0 = *(u8*)(r0);
    *(u8*)(r5 + 0x16) = (u8)r0;
    r0 = r4;
    r0 += 0x2BU;
    r0 = *(u8*)(r0);
    *(u8*)(r5 + 0x17) = (u8)r0;
    r0 = 0x0U;
loc_0802299A:
    r1 = (r0 << 2);
    r1 = r1 + r4;
    r1 += 0x3CU;
    r1 = *(u32*)(r1);
    r2 = (r0 << 1);
    r2 = r2 + r5;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    *(u16*)(r2 + 0x18) = (u16)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0802299A;
    return r0;
    r4 = r1;
    r1 = 0x68U;
    r5 = r0;
    r0 = r4;
    r0 = sub_08046CBC(r0, r1, r2, r3); // 0x080229BA: BL 0x08046CBC
    r0 = 0x2U;
    *(u8*)(r4) = (u8)r0;
    r0 -= 0x3U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r6 = r4;
    r6 += 0x24U;
    r0 = *(u8*)(r5);
    r0 = sub_08013378(r0, r1, r2, r3); // 0x080229CC
loc_080229D0:
    *(u32*)(r6) = (u32)r0;
    r1 = *(u32*)(r6);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080229D0;
    r0 = *(u8*)(r5 + 0x1);
    r1 = 0x0U;
    *(u8*)(r4 + 0xC) = (u8)r0;
    r0 = *(u8*)(r5 + 0x2);
    *(u8*)(r4 + 0x15) = (u8)r0;
loc_080229E2:
    r2 = r5 + r1;
    r0 = *(u8*)(r2 + 0x3);
    r3 = r4 + r1;
    *(u8*)(r3 + 0xD) = (u8)r0;
    r0 = (r1 << 1);
    r2 = *(u8*)(r2 + 0x9);
    r0 = r0 + r4;
    r0 += 0x2EU;
    r6 = r2;
loc_080229F4:
    *(u8*)(r0) = (u8)r2;
    r3 = *(u8*)(r0);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080229F4;
loc_080229FC:
    *(u8*)(r0 + 0x1) = (u8)r6;
    r2 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_080229FC;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 6;
    if (cmp_lhs < cmp_rhs) goto loc_080229E2;
    r3 = 0x10U;
    r6 = (u32)(*(s16*)(r5 + r3));
    r0 = r4;
    r0 += 0x16U;
    r1 = r6;
loc_08022A14:
    *(u16*)(r0) = (u16)r1;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022A14;
    r1 = (r6 << 16);
    r1 = ((u32)((s32)r1 >> 16));
loc_08022A22:
    *(u16*)(r0 + 0x2) = (u16)r1;
    r3 = 0x2U;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022A22;
    r3 = 0x12U;
    r6 = (u32)(*(s16*)(r5 + r3));
    r0 = r4;
    r0 += 0x1AU;
    r1 = r6;
loc_08022A36:
    *(u16*)(r0) = (u16)r1;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022A36;
    r1 = (r6 << 16);
    r1 = ((u32)((s32)r1 >> 16));
loc_08022A44:
    *(u16*)(r0 + 0x2) = (u16)r1;
    r3 = 0x2U;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022A44;
    r1 = *(u8*)(r5 + 0x14);
    r0 = r4;
    r0 += 0x28U;
loc_08022A54:
    *(u8*)(r0) = (u8)r1;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022A54;
    r1 = *(u8*)(r5 + 0x15);
    r0 = r4;
    r0 += 0x29U;
loc_08022A62:
    *(u8*)(r0) = (u8)r1;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022A62;
    r1 = *(u8*)(r5 + 0x16);
    r0 = r4;
    r0 += 0x2AU;
loc_08022A70:
    *(u8*)(r0) = (u8)r1;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022A70;
    r1 = *(u8*)(r5 + 0x17);
    r0 = r4;
    r0 += 0x2BU;
loc_08022A7E:
    *(u8*)(r0) = (u8)r1;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08022A7E;
    r0 = *(u8*)(r5 + 0xF);
    *(u8*)(r4 + 0x14) = (u8)r0;
    r0 = 0x0U;
loc_08022A8C:
    r1 = (r0 << 2);
    r1 = r1 + r4;
    r1 += 0x3CU;
    r2 = (r0 << 1);
    r2 = r2 + r5;
    r3 = 0x18U;
    r2 = (u32)(*(s16*)(r2 + r3));
loc_08022A9A:
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08022A9A;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_08022A8C;
    r0 = *(u8*)(r4 + 0x14);
    r1 = 0x086B82ECU; // [0x08022D34]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 30);
    r2 = (r0 >> 31);
    r0 = r4;
    r0 += 0x1CU;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08022AD2;
    r3 = *(u16*)(r0);
    r2 = r0 + 4;
    r3 = (r3 << 16);
    r3 = (r3 >> 16);
loc_08022ACA:
    *(u16*)(r2) = (u16)r3;
    r5 = *(u16*)(r2);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08022ACA;
loc_08022AD2:
    r2 = *(u8*)(r4 + 0x14);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r2 = (r2 << 3);
    r1 = r2 + r1;
    r1 = *(u8*)(r1);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08022AF4;
    r0 = *(u16*)(r0);
    r1 = r4;
    r1 += 0x1EU;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_08022AEC:
    *(u16*)(r1) = (u16)r0;
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08022AEC;
loc_08022AF4:
    return r0;
    r4 = 0x0872BFA8U; // [0x08022D38]
    r5 = r0;
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x08022B00
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x08022B06
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x08022B0C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x08022D3C]
    r0 = 0x05000200U; // [0x08022D40]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08022B18: BL 0x08049144
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F800U; // [0x08022D44]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08022B24: BL 0x0804912C
    r2 = 0xA80U; // (21 << 7)
    r1 = 0x0U;
    r0 = 0x06009640U; // [0x08022D48]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08022B30: BL 0x0804912C
    r0 = 0xCU;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x9U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x12U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x10U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r2 = 0x00000259U; // [0x08022D4C]
    r1 = 0x0600F800U; // [0x08022D44]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08022B4A
    r1 = 0x00001E83U; // [0x08022D50]
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0 + 0xA) = (u16)r1;
    r1 += 0xFDU;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r1 = 0x1340U; // (77 << 6)
    *(u16*)(r0) = (u16)r1;
    r0 = 0x1U;
    r5 += 0x140U;
    *(u8*)(r5) = (u8)r0;
    return r0;
    r4 = r0;
    r0 = 0x000005F4U; // [0x08022D58]
    r5 = 0x0872BFA8U; // [0x08022D38]
    r2 = 0x000008A8U; // [0x08022D54]
    r0 = r4 + r0;
    r1 = *(u32*)(r5 + 0xC);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08022B7C: BL 0x08049138
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_080042FC(r0, r1, r2, r3); // 0x08022B82
    r0 = 0xFFU;
    r7 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08022D5C]
    r0 += 0xA1U;
    r3 = *(u32*)(r7 + r0);
    r2 = *(u32*)(r5 + 0x8);
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    r0 = 0x75U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x78U;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x26U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08022BA4
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08022BAC
    r0 = 0xFFU;
    r0 += 0xA5U;
    r3 = *(u32*)(r7 + r0);
    r2 = *(u32*)(r5 + 0x8);
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    r0 = 0x75U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x78U;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x82U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08022BCC
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08022BD4
    r0 = *(u32*)(r7 + 0x68);
    r6 = *(u32*)(r7 + 0x5C);
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u32*)(r5 + 0x8);
    r1 = r6;
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08022BE2
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r7 = r0;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x0U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r7 += 0x1EU;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08022C00: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08022C08
    r2 = *(u32*)(r5 + 0x8);
    stack[0] = r6; // [sp + 0x0]
    r6 = 0x90U;
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r3 = r6;
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08022C24
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08022C2C
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x1U;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r3 = r7;
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08022C46: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08022C4E
    r2 = *(u32*)(r5 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[4]; // [sp + 0x10]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    r2 += 0x10U;
    r0 = 0x5U;
    r3 = r6;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08022C6C
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08022C74
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x56U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x4U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x4U;
    r1 = r4;
    r3 = 0xBU;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08022C90: BL 0x08013E64
    r6 = r4;
    r6 += 0x100U;
    *(u32*)(r6 + 0x14) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08022CA0
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x56U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x5U;
    r1 = r4;
    r3 = 0xD6U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08022CBC: BL 0x08013E64
    r1 = r0;
    *(u32*)(r6 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08022CC6
    r0 = r4;
    r0 = sub_08022AF6(r0, r1, r2, r3); // 0x08022CCC
    r0 = 0x0U;
    *(u32*)(r6 + 0x1C) = (u32)r0;
    *(u32*)(r6 + 0x28) = (u32)r0;
    r0 = *(u32*)(r5 + 0x10);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08022D24;
    r0 = 0x00000584U; // [0x08022D60]
    r5 = 0x0U;
    r7 = r4 + r0;
loc_08022CE4:
    r0 = 0x68U;
    r0 *= r5;
    r1 = 0x00000AECU; // [0x08022D64]
    r0 = r0 + r4;
    r0 = r0 + r1;
    r1 = *(u8*)(r0);
    r2 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08022D1E;
    r1 = (r1 << 30);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08022D1E;
    r1 = *(u32*)(r7);
    r2 = r1 + 1;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r6 = r1 + r7;
    r6 += 0x4U;
    *(u32*)(r7) = (u32)r2;
    *(u32*)(r6 + 0x8) = (u32)r5;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x08022D34]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x08022D18
    *(u32*)(r6) = (u32)r0;
loc_08022D1E:
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_08022CE4;
loc_08022D24:
    r0 = 0x0U;
    r0 = sub_08050620(r0, r1, r2, r3); // 0x08022D26
    r0 = sub_08040160(r0, r1, r2, r3); // 0x08022D2A
    return r0;
    r0 = r0;
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r2 = (r6 >> 1);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    r0 = (r0 << 24);
    stack[64] = r6; // [sp + 0x100]
    r0 = (r0 << 24);
    r1 = (r3 << 9);
    r0 = r0;
    r3 = r0 - 2;
    r0 = r0;
    r0 = (r5 >> 2);
    r0 = r0;
    r4 = (r6 << 23);
    r0 = r0;
    r6 = (r0 >> 32);
    r4 = (r0 << 22);
    r0 = r0;
    r4 = (r5 >> 11);
    r0 = r0;
    r2 = 0x4000000U; // (1 << 26)
    r4 = r0;
    r0 = *(u16*)(r2);
    r1 = (r2 >> 18);
    r5 = 0x0872BFA8U; // [0x08023088]
    r0 &= ~r1;
    *(u16*)(r2) = (u16)r0;
    r0 = *(u32*)(r5 + 0x1C);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x08022D7C
    r0 = *(u32*)(r5 + 0x1C);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x08022D82
    r0 = *(u32*)(r5 + 0x1C);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x08022D88
    r0 = 0x000005F4U; // [0x08023090]
    r2 = 0x000008A8U; // [0x0802308C]
    r1 = r4 + r0;
    r0 = *(u32*)(r5 + 0xC);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08022D94: BL 0x08049138
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_08022DA8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022DA4: BL __call_via_r3
loc_08022DA8:
    return r0;
    r2 = 0x0872BFA8U; // [0x08023088]
    r2 = *(u32*)(r2 + 0x10);
    r4 = 0x03001B0CU; // [0x08023094]
    r2 = *(u8*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08022DD8;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08022DF0(r0, r1, r2, r3);
    r0 = (r1 << 3);
    r0 = r0 - r1;
    r1 = 0x0872BFA8U; // [0x08023088]
    r0 = (r0 << 2);
    r1 += 0x24U;
    r0 = *(u16*)(r1 + r0);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08022DC8: BL 0x08000158
    r1 = r0;
    r2 = r4;
    r0 = 0x0U;
    r0 = sub_0800EB60(r0, r1, r2, r3); // 0x08022DD2
    return r0;
loc_08022DD8:
    r2 = 0x00000584U; // [0x08023098]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r0 = r0 + r2;
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r2 = r4;
    r0 = 0x0U;
    r0 = sub_0800EB60(r0, r1, r2, r3); // 0x08022DEA
    return r0;
}

// ROM Address: 0x08022DF0..0x08022DF4 (4 bytes, Thumb)
u32 sub_08022DF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08022DF4..0x08022E8C (152 bytes, Thumb)
u32 sub_08022DF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0872BFA8U; // [0x08023088]
    r5 = r0;
    r1 = *(u32*)(r6 + 0x10);
    r0 = 0x20U;
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08022E0C;
    r0 = 0x00000584U; // [0x08023098]
    r0 = r5 + r0;
    r0 = *(u32*)(r0);
loc_08022E0C:
    stack[0] = r0; // [sp + 0x0]
    r0 = r5;
    r0 += 0x140U;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u8*)(r0);
    r4 = r5;
    r4 += 0x100U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08022E8C(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08022EF2(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08022EF4(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_08022EAC(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08022E3C;
    r1 = r0;
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08022E38
loc_08022E3C:
    r0 = *(u32*)(r4 + 0x38);
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x34);
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = *(u32*)(r4 + 0x30);
    *(u32*)(r4 + 0x34) = (u32)r0;
    r1 = *(u32*)(r4 + 0x2C);
    *(u32*)(r4 + 0x30) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x2C) = (u32)r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022E58: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08022E6E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022E6A: BL __call_via_r3
loc_08022E6E:
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08022E86;
    r1 = r0 - 2;
    r0 = r5;
    r0 = sub_08022DAA(r0, r1, r2, r3); // 0x08022E78
    r1 = r0;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r6 + 0x1C);
    r0 = List_Append(r0, r1, r2, r3); // 0x08022E82: BL 0x0801191A
loc_08022E86:
    r0 = 0x0U;
    r6 = 0x6AU;
    return sub_0802304E(r0, r1, r2, r3);
}

// ROM Address: 0x08022E8C..0x08022EAE (34 bytes, Thumb)
u32 sub_08022E8C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022E96: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08022EAE(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022EA8: BL __call_via_r3
    return sub_08022FBC(r0, r1, r2, r3);
}

// ROM Address: 0x08022EAE..0x08022EF2 (68 bytes, Thumb)
u32 sub_08022EAE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x30);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022EB8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08022ED0;
    r0 = *(u32*)(r4 + 0x30);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022ECA: BL __call_via_r3
    return sub_08022FBC(r0, r1, r2, r3);
loc_08022ED0:
    r0 = *(u32*)(r4 + 0x38);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022EDA: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08022EF6(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x38);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022EEC: BL __call_via_r3
    return sub_08022FBC(r0, r1, r2, r3);
}

// ROM Address: 0x08022FBE..0x0802304E (144 bytes, Thumb)
u32 sub_08022FBE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08022FCC;
    r1 = r0;
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08022FC8
loc_08022FCC:
    r0 = *(u32*)(r4 + 0x30);
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x34);
    *(u32*)(r4 + 0x30) = (u32)r0;
    r1 = *(u32*)(r4 + 0x38);
    *(u32*)(r4 + 0x34) = (u32)r1;
    r1 = *(u32*)(r4 + 0x3C);
    *(u32*)(r4 + 0x38) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x3C) = (u32)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08022FF0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022FEC: BL __call_via_r3
loc_08022FF0:
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08022FFA: BL __call_via_r3
    r1 = *(u32*)(r4 + 0x1C);
    r0 = stack[0]; // [sp + 0x0]
    r1 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08023018;
    r0 = r5;
    r0 = sub_08022DAA(r0, r1, r2, r3); // 0x0802300A
    r1 = r0;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = *(u32*)(r6 + 0x1C);
    r0 = List_Append(r0, r1, r2, r3); // 0x08023014: BL 0x0801191A
loc_08023018:
    r0 = 0x0U;
    r6 = 0x6AU;
loc_0802301C:
    r1 = (r0 << 2);
    r1 = r1 + r5;
    r1 += 0x100U;
    r2 = *(u32*)(r1 + 0x2C);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08023046;
    r1 = r2;
    r2 = *(u32*)(r2 + 0x58);
    r1 += 0x6CU;
    r3 = *(u8*)(r2 + 0x8);
    r2 = *(u8*)(r2 + 0x9);
    r4 = (r3 >> 1);
    r3 = 0x2AU;
    r3 *= r0;
    r3 += 0x23U;
    r3 = r3 - r4;
    r2 = (r2 >> 1);
    r2 = r6 - r2;
    *(u32*)(r1 + 0x4) = (u32)r2;
    *(u32*)(r1) = (u32)r3;
loc_08023046:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs < cmp_rhs) goto loc_0802301C;
    return sub_0802307E(r0, r1, r2, r3);
}

// ROM Address: 0x0802304E..0x08023088 (58 bytes, Thumb)
u32 sub_0802304E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_0802304E:
    r1 = (r0 << 2);
    r1 = r1 + r5;
    r1 += 0x100U;
    r2 = *(u32*)(r1 + 0x2C);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08023078;
    r1 = r2;
    r2 = *(u32*)(r2 + 0x58);
    r1 += 0x6CU;
    r3 = *(u8*)(r2 + 0x8);
    r2 = *(u8*)(r2 + 0x9);
    r4 = (r3 >> 1);
    r3 = 0x2AU;
    r3 *= r0;
    r3 += 0x23U;
    r3 = r3 - r4;
    r2 = (r2 >> 1);
    r2 = r6 - r2;
    *(u32*)(r1 + 0x4) = (u32)r2;
    *(u32*)(r1) = (u32)r3;
loc_08023078:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs < cmp_rhs) goto loc_0802304E;
    r0 = stack[2]; // [sp + 0x8]
    r1 = 0x0U;
    *(u8*)(r0) = (u8)r1;
    return r0;
}

// ROM Address: 0x08023130..0x08023220 (240 bytes, Thumb)
u32 sub_08023130(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r1 = r1 + r6;
    r1 = *(u32*)(r1 + 0xC);
    r1 += 0x9EU;
    r1 = (r1 << 2);
    r2 = *(u32*)(r0 + r1);
    r1 = 0x08023490U;
    r0 = r7;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08023144
    r1 = 0x06000040U; // [0x08023498]
    r0 = r7;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0802314C: BL 0x08049150
    r2 = 0x38U;
    r1 = 0x30U;
    r4 = 0x14; // sp + 0x14
    r0 = r4;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08023158
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x30U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x38U;
    stack[4] = r0; // [sp + 0x10]
    r2 = 0x0U;
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_0803F974(r0, r1, r2, r3); // 0x08023170
    r0 = 0xAU;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x2U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x25U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x2CU;
    stack[4] = r0; // [sp + 0x10]
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08004F50(r0, r1, r2, r3); // 0x08023188
    r1 = 0x06009640U; // [0x0802349C]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08023190: BL 0x08049150
    r0 = r5;
    r0 = sub_08022DF4(r0, r1, r2, r3); // 0x08023196: BL 0x08022DF4
    r1 = 0x0U;
    r0 = 0x14; // sp + 0x14
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0802319E: BL 0x0803F58C
    r1 = 0x0U;
    r0 = r7;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080231A6: BL 0x0803F58C
    return r0;
    r6 = 0x0872BFA8U; // [0x08023484]
    r5 = r0;
    r0 = *(u32*)(r6 + 0xC);
    r1 = 0x000004F4U; // [0x080234A0]
    r2 = 0x0U;
    r0 = r0 + r1;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u32*)(r0);
    r1 = 0x580U; // (11 << 7)
    r1 = r5 + r1;
    stack[1] = r1; // [sp + 0x4]
    *(u32*)(r1) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080231D2;
    r2 = 0x1U;
loc_080231D2:
    r0 = 0x0U;
loc_080231D4:
    r1 = *(u32*)(r6 + 0xC);
    r3 = r5 + r0;
    r1 = r1 + r0;
    r1 = *(u8*)(r1 + 0x2);
    r3 += 0x140U;
    *(u8*)(r3 + 0x1) = (u8)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080231E8;
    r2 = 0x1U;
loc_080231E8:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 83;
    if (cmp_lhs < cmp_rhs) goto loc_080231D4;
    r1 = *(u32*)(r6 + 0xC);
    r4 = r5;
    r1 += 0xE4U;
    r3 = *(u32*)(r1);
    r4 += 0x194U;
    r0 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08023220(r0, r1, r2, r3);
loc_08023200:
    r2 = (r0 << 2);
    r2 = r2 + r1;
    r2 = *(u32*)(r2 + 0x4);
    r0 += 0x1U;
    r3 = (r2 << 4);
    r2 = *(u32*)(r4);
    r3 = (r3 >> 4);
    r7 = r2 + 1;
    r2 = (r2 << 2);
    r2 = r2 + r4;
    *(u32*)(r4) = (u32)r7;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08023200;
    return sub_08023224(r0, r1, r2, r3);
}

// ROM Address: 0x08023220..0x08023224 (4 bytes, Thumb)
u32 sub_08023220(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802329C(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08023224..0x080232A6 (130 bytes, Thumb)
u32 sub_08023224(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x000005F4U; // [0x080234A8]
    r2 = 0x000008A8U; // [0x080234A4]
    r1 = r5 + r0;
    r7 = r1;
    r0 = *(u32*)(r6 + 0xC);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802322E: BL 0x08049138
    r0 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r0 = stack[2]; // [sp + 0x8]
    r2 = *(u32*)(r0);
    r1 = r2 + r1;
loc_0802323C:
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0802323C;
    r0 = 0x0U;
loc_08023246:
    r2 = r5 + r0;
    r2 += 0xFFU;
    r1 = *(u32*)(r6 + 0xC);
    r2 += 0x41U;
    r2 = *(u8*)(r2 + 0x1);
    r1 = r1 + r0;
    r3 = *(u8*)(r1 + 0x2);
    r2 = r3 + r2;
    r3 = 0xFFU;
    r3 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08023262;
    *(u8*)(r1 + 0x2) = (u8)r2;
    goto loc_08023266;
loc_08023262:
    r2 = 0xFFU;
    *(u8*)(r1 + 0x2) = (u8)r2;
loc_08023266:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 83;
    if (cmp_lhs < cmp_rhs) goto loc_08023246;
    r0 = *(u32*)(r4);
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08023288;
loc_08023274:
    r0 = (r5 << 2);
    r0 = r0 + r4;
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r6 + 0xC);
    r0 = sub_08004448(r0, r1, r2, r3); // 0x0802327C
    r0 = *(u32*)(r4);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08023274;
loc_08023288:
    r2 = 0x000008A8U; // [0x080234A4]
    r0 = r7;
    r1 = *(u32*)(r6 + 0xC);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802328E: BL 0x08049138
    r0 = 0x03001910U; // [0x080234AC]
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r6 + 0xC);
    r0 = sub_080049F2(r0, r1, r2, r3); // 0x08023298
    r0 = *(u32*)(r6 + 0xC);
    r0 = sub_080042FC(r0, r1, r2, r3); // 0x0802329E
    return r0;
}

// ROM Address: 0x080232A6..0x080232FA (84 bytes, Thumb)
u32 sub_080232A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r7 = 0x0872BFA8U; // [0x08023484]
    r0 = 0x000005C4U; // [0x080234B4]
    r4 = r5;
    r3 = *(u32*)(r7);
    r4 += 0x100U;
    r6 = 0x0U;
    r0 = r3 + r0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r1 = 0x08319488U; // [0x080234B0]
    if (cmp_lhs == cmp_rhs) return sub_0802336E(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080232FA(r0, r1, r2, r3);
    r5 += 0x140U;
    r1 -= 0xCU;
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if (cmp_lhs == cmp_rhs) goto loc_080232E6;
    cmp_lhs = (s32)r2; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) return sub_080233BC(r0, r1, r2, r3);
    r3 = r6;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080232D6
    r0 = *(u32*)(r4 + 0x1C);
    r0 += 0x1U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x2U;
    *(u8*)(r5) = (u8)r0;
    return sub_080233BC(r0, r1, r2, r3);
loc_080232E6:
    r3 = r6;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080232EA
    r0 = *(u32*)(r4 + 0x1C);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x3U;
    *(u8*)(r5) = (u8)r0;
    return sub_080233BC(r0, r1, r2, r3);
}

// ROM Address: 0x080232FA..0x0802333E (68 bytes, Thumb)
u32 sub_080232FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r6;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080232FE
    r0 = *(u32*)(r7 + 0x4);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802330C: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802333E(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x3DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08023318: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08023336;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x080234B8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x0804A3BCU /* &VTable_0804A3BC */; // [0x080234BC]
    *(u32*)(r0) = (u32)r1;
loc_08023336:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08023336
    r0 = 0x1U;
    return r0;
}
