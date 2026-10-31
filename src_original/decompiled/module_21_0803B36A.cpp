/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #21
 * Address Range: 0x0803B36A..0x0803CE64 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0803B36A..0x0803B40A (160 bytes, Thumb)
u32 sub_0803B36A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r3 = *(u32*)r3; r3 += 4;
    r6 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r3 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    *(u8*)(r1 + 0x11) = (u8)r2;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    r1 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803B3FA;
    r0 -= 0x50U;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0803B3FA;
    r6 = sp;
    r1 = r4;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803B3A2
    stack[8] = r4; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x0; // sp + 0x0
    r7 = 0x0U;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8098U; // [0x0803B4DC]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    *(u8*)(r3) = (u8)r7;
    r0 = 0x03001C34U; // [0x0803B4E0]
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r6;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B3CC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B3FA;
    r0 = 0x0877B158U; // [0x0803B4E4]
    r6 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803B3DA
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0803B4E8]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x0803B4EC]
    r3 = r7;
    r2 = 0x40U;
    r0 = r6 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803B3F2
    r0 = 0x1U;
    *(u32*)(r5 + 0x4) = (u32)r0;
loc_0803B3FA:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 104;
    if (cmp_lhs != cmp_rhs) return sub_0803B40A(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803B402: BL 0x0800EE78
    return r0;
}

// ROM Address: 0x0803B40A..0x0803B410 (6 bytes, Thumb)
u32 sub_0803B40A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0803B406(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_clear_fields4_clears_the_two_words
// ROM Address: 0x0803B410..0x0803B418 (8 bytes, Thumb)
u32 Object_ClearFields4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x0803B418..0x0803B46A (82 bytes, Thumb)
u32 sub_0803B418(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r7 = 0x1U;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B4B6(r0, r1, r2, r3);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803B42A
    r2 = r4;
    r2 += 0x1A0U;
    r1 = r2 + 4;
    r3 = 0x03001C34U; // [0x0803B4E0]
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u32*)(r3);
    if (cmp_lhs == cmp_rhs) return sub_0803B46A(r0, r1, r2, r3);
    r0 += 0xFFU;
    r3 = (r7 << 10);
    stack[4] = r6; // [sp + 0x10]
    stack[3] = r3; // [sp + 0xC]
    r0 += 0xA1U;
    r3 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r6 = (r7 << 10);
    r3 = r3 + r6;
    stack[2] = r0; // [sp + 0x8]
    r0 = r3;
    stack[1] = r3; // [sp + 0x4]
    r3 = stack[2]; // [sp + 0x8]
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r3; // [sp + 0x18]
    *(u32*)(r2) = (u32)r0;
    r0 = stack[6]; // [sp + 0x18]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_0803B492(r0, r1, r2, r3);
}

// ROM Address: 0x0803B46A..0x0803B514 (170 bytes, Thumb)
u32 sub_0803B46A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFFFEC00U; // [0x0803B4F0]
    r0 += 0xFFU;
    stack[4] = r6; // [sp + 0x10]
    r0 += 0xA1U;
    stack[3] = r3; // [sp + 0xC]
    r3 = *(u32*)r0; r0 += 4;
    r6 = 0xFFFFEC00U; // [0x0803B4F0]
    r0 = *(u32*)(r0);
    r3 = r3 + r6;
    stack[2] = r0; // [sp + 0x8]
    r0 = r3;
    stack[1] = r3; // [sp + 0x4]
    r3 = stack[2]; // [sp + 0x8]
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r3; // [sp + 0x18]
    *(u32*)(r2) = (u32)r0;
    r0 = stack[6]; // [sp + 0x18]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = 0x8U;
    *(u32*)(r5 + 0x4) = (u32)r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803B496: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B4A2;
    r1 = 0x0804D714U /* &VTable_0804D714 */; // [0x0803B4F4]
    *(u32*)(r0) = (u32)r1;
loc_0803B4A2:
    r6 = r0;
    r1 = 0x12U;
    *(u32*)(r5 + 0x8) = (u32)r0;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803B4AA
    r1 = r6;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803B4B2
    r0 = *(u32*)(r5 + 0x8);
    r2 = *(u32*)(r4 + 0x14);
    r1 = r7;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B4C2;
    r1 = 0x0U;
loc_0803B4C2:
    r0 = r7 - r1;
    return r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803B4CC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B4D8;
    r1 = 0x0804C174U /* &VTable_0804C174 */; // [0x0803B4F8]
    *(u32*)(r0) = (u32)r1;
loc_0803B4D8:
    return r0;
    r0 = r0;
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r7 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803B520(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r4; r1 += 4;
    *(u32*)r1 = r5; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
    r4 = (r0 >> 32);
    r4 = r1;
    r1 = 0x78; // sp + 0x78
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[19] = r0; // [sp + 0x4C]
    stack[17] = r0; // [sp + 0x44]
    stack[20] = r1; // [sp + 0x50]
    stack[18] = r1; // [sp + 0x48]
    r1 = stack[30]; // [sp + 0x78]
    r0 = stack[31]; // [sp + 0x7C]
    stack[16] = r1; // [sp + 0x40]
    return r0;
}

// ROM Address: 0x0803B516..0x0803B524 (14 bytes, Thumb)
u32 sub_0803B516(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[15] = r0; // [sp + 0x3C]
    r1 = 0x78; // sp + 0x78
    stack[10] = r3; // [sp + 0x28]
    stack[12] = r3; // [sp + 0x30]
    stack[9] = r2; // [sp + 0x24]
    stack[11] = r2; // [sp + 0x2C]
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    return r0;
}

// ROM Address: 0x0803B526..0x0803B56C (70 bytes, Thumb)
u32 sub_0803B526(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0U;
    r5 = 0x0U;
    r7 = 0xFFU;
    stack[14] = r0; // [sp + 0x38]
    stack[13] = r1; // [sp + 0x34]
    r0 = stack[11]; // [sp + 0x2C]
    r1 = stack[15]; // [sp + 0x3C]
    r0 = r0 + r1;
    stack[11] = r0; // [sp + 0x2C]
    r0 = stack[12]; // [sp + 0x30]
    r1 = stack[16]; // [sp + 0x40]
    r0 = r0 + r1;
    stack[12] = r0; // [sp + 0x30]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x2C; // sp + 0x2C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B54A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B57E(r0, r1, r2, r3);
    r0 = stack[11]; // [sp + 0x2C]
    r1 = stack[15]; // [sp + 0x3C]
    r0 = r0 - r1;
    stack[11] = r0; // [sp + 0x2C]
    r0 = stack[12]; // [sp + 0x30]
    r1 = stack[16]; // [sp + 0x40]
    r0 = r0 - r1;
    stack[12] = r0; // [sp + 0x30]
    r0 = stack[15]; // [sp + 0x3C]
    stack[8] = r1; // [sp + 0x20]
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[19]; // [sp + 0x4C]
    r1 = stack[20]; // [sp + 0x50]
    return r0;
}

// ROM Address: 0x0803B56E..0x0803B572 (4 bytes, Thumb)
u32 sub_0803B56E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[15] = r0; // [sp + 0x3C]
    r0 = stack[7]; // [sp + 0x1C]
    return r0;
}

// ROM Address: 0x0803B574..0x0803B57E (10 bytes, Thumb)
u32 sub_0803B574(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[16] = r1; // [sp + 0x40]
    stack[19] = r0; // [sp + 0x4C]
    r0 = stack[8]; // [sp + 0x20]
    stack[20] = r0; // [sp + 0x50]
    return sub_0803B5AA(r0, r1, r2, r3);
}

// ROM Address: 0x0803B57E..0x0803B5AA (44 bytes, Thumb)
u32 sub_0803B57E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[11]; // [sp + 0x2C]
    r2 = stack[19]; // [sp + 0x4C]
    r3 = stack[20]; // [sp + 0x50]
    r1 = r1 + r2;
    r2 = stack[12]; // [sp + 0x30]
    stack[5] = r1; // [sp + 0x14]
    r2 = r2 + r3;
    stack[6] = r2; // [sp + 0x18]
    stack[8] = r2; // [sp + 0x20]
    stack[7] = r1; // [sp + 0x1C]
    r0 = r4;
    r1 = *(u32*)(r0);
    r3 = 0x1C; // sp + 0x1C
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B59E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803B5AA(r0, r1, r2, r3);
    r5 = 0x1U;
    return sub_0803B5B2(r0, r1, r2, r3);
}

// ROM Address: 0x0803B5AA..0x0803B5F0 (70 bytes, Thumb)
u32 sub_0803B5AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r7;
    r7 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_0803B530(r0, r1, r2, r3);
    r7 = 0xFFU;
    r0 = stack[9]; // [sp + 0x24]
    r1 = stack[13]; // [sp + 0x34]
    r0 = r0 + r1;
    stack[9] = r0; // [sp + 0x24]
    r0 = stack[10]; // [sp + 0x28]
    r1 = stack[14]; // [sp + 0x38]
    r0 = r0 + r1;
    stack[10] = r0; // [sp + 0x28]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x24; // sp + 0x24
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B5CE: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B602(r0, r1, r2, r3);
    r0 = stack[9]; // [sp + 0x24]
    r1 = stack[13]; // [sp + 0x34]
    r0 = r0 - r1;
    stack[9] = r0; // [sp + 0x24]
    r0 = stack[10]; // [sp + 0x28]
    r1 = stack[14]; // [sp + 0x38]
    r0 = r0 - r1;
    stack[10] = r0; // [sp + 0x28]
    r0 = stack[13]; // [sp + 0x34]
    stack[8] = r1; // [sp + 0x20]
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[17]; // [sp + 0x44]
    r1 = stack[18]; // [sp + 0x48]
    return r0;
}

// ROM Address: 0x0803B5F2..0x0803B5F6 (4 bytes, Thumb)
u32 sub_0803B5F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[7]; // [sp + 0x1C]
    return r0;
}

// ROM Address: 0x0803B5F8..0x0803B602 (10 bytes, Thumb)
u32 sub_0803B5F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[17] = r0; // [sp + 0x44]
    r0 = stack[8]; // [sp + 0x20]
    stack[14] = r1; // [sp + 0x38]
    stack[18] = r0; // [sp + 0x48]
    return sub_0803B62C(r0, r1, r2, r3);
}

// ROM Address: 0x0803B602..0x0803B6D4 (210 bytes, Thumb)
u32 sub_0803B602(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[9]; // [sp + 0x24]
    r2 = stack[17]; // [sp + 0x44]
    r3 = stack[18]; // [sp + 0x48]
    r2 = r1 + r2;
    r1 = stack[10]; // [sp + 0x28]
    stack[5] = r2; // [sp + 0x14]
    r3 = r1 + r3;
    stack[6] = r3; // [sp + 0x18]
    stack[8] = r3; // [sp + 0x20]
    stack[7] = r2; // [sp + 0x1C]
    r0 = r4;
    r2 = *(u32*)(r0);
    r1 = 0x1C; // sp + 0x1C
    r3 = *(u32*)(r2 + 0x54);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B620: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B62C;
    r6 = 0x1U;
    goto loc_0803B634;
loc_0803B62C:
    r0 = r7;
    r7 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_0803B5B4(r0, r1, r2, r3);
loc_0803B634:
    r1 = stack[21]; // [sp + 0x54]
    r1 += 0xCU;
    r0 = r1 + 4;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B64C;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803B65E;
    r2 = stack[11]; // [sp + 0x2C]
    *(u32*)(r1) = (u32)r2;
    r1 = stack[12]; // [sp + 0x30]
    *(u32*)(r0) = (u32)r1;
    return sub_0803B6DC(r0, r1, r2, r3);
loc_0803B64C:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B65E;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803B65E;
    r2 = stack[9]; // [sp + 0x24]
    *(u32*)(r1) = (u32)r2;
    r1 = stack[10]; // [sp + 0x28]
    *(u32*)(r0) = (u32)r1;
    return sub_0803B6DC(r0, r1, r2, r3);
loc_0803B65E:
    r2 = stack[32]; // [sp + 0x80]
    r3 = stack[11]; // [sp + 0x2C]
    r4 = stack[12]; // [sp + 0x30]
    r2 = r2 - r3;
    r3 = stack[33]; // [sp + 0x84]
    stack[3] = r2; // [sp + 0xC]
    r3 = r3 - r4;
    stack[8] = r3; // [sp + 0x20]
    stack[4] = r3; // [sp + 0x10]
    stack[6] = r3; // [sp + 0x18]
    stack[5] = r2; // [sp + 0x14]
    stack[7] = r2; // [sp + 0x1C]
    r2 = stack[32]; // [sp + 0x80]
    r3 = stack[9]; // [sp + 0x24]
    r4 = stack[10]; // [sp + 0x28]
    r2 = r2 - r3;
    r3 = stack[33]; // [sp + 0x84]
    stack[1] = r2; // [sp + 0x4]
    r3 = r3 - r4;
    stack[3] = r2; // [sp + 0xC]
    stack[5] = r2; // [sp + 0x14]
    r2 = stack[7]; // [sp + 0x1C]
    stack[2] = r3; // [sp + 0x8]
    stack[4] = r3; // [sp + 0x10]
    stack[6] = r3; // [sp + 0x18]
    r3 = ((u32)((s32)r2 >> 8));
    r2 = stack[8]; // [sp + 0x20]
    stack[1] = r3; // [sp + 0x4]
    r2 = ((u32)((s32)r2 >> 8));
    stack[2] = r2; // [sp + 0x8]
    stack[4] = r2; // [sp + 0x10]
    r2 = r3;
    r2 *= r3;
    stack[3] = r3; // [sp + 0xC]
    r3 = stack[4]; // [sp + 0x10]
    r4 = r3;
    r3 *= r4;
    r4 = r2 + r3;
    r2 = stack[5]; // [sp + 0x14]
    r3 = ((u32)((s32)r2 >> 8));
    r2 = stack[6]; // [sp + 0x18]
    stack[1] = r3; // [sp + 0x4]
    r2 = ((u32)((s32)r2 >> 8));
    stack[2] = r2; // [sp + 0x8]
    stack[4] = r2; // [sp + 0x10]
    r2 = r3;
    r2 *= r3;
    stack[3] = r3; // [sp + 0xC]
    r3 = stack[4]; // [sp + 0x10]
    r7 = r3;
    r3 *= r7;
    r2 = r2 + r3;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0803B6D4(r0, r1, r2, r3);
    r2 = stack[11]; // [sp + 0x2C]
    *(u32*)(r1) = (u32)r2;
    r1 = stack[12]; // [sp + 0x30]
    *(u32*)(r0) = (u32)r1;
    return sub_0803B6DC(r0, r1, r2, r3);
}

// ROM Address: 0x0803B6D4..0x0803B71A (70 bytes, Thumb)
u32 sub_0803B6D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[9]; // [sp + 0x24]
    *(u32*)(r1) = (u32)r2;
    r1 = stack[10]; // [sp + 0x28]
    *(u32*)(r0) = (u32)r1;
    r1 = stack[21]; // [sp + 0x54]
    r0 = 0x1U;
    *(u32*)(r1 + 0x14) = (u32)r0;
    r5 |= r6;
    r0 = r5;
    return r0;
    r7 = r0;
    r0 = r1;
    r0 += 0x1A0U;
    r4 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    stack[18] = r1; // [sp + 0x48]
    r1 = stack[21]; // [sp + 0x54]
    stack[17] = r2; // [sp + 0x44]
    r1 = r1 - r2;
    r2 = stack[22]; // [sp + 0x58]
    r3 = stack[18]; // [sp + 0x48]
    stack[9] = r1; // [sp + 0x24]
    r2 = r2 - r3;
    stack[10] = r2; // [sp + 0x28]
    stack[12] = r2; // [sp + 0x30]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    stack[11] = r1; // [sp + 0x2C]
    if (cmp_lhs < cmp_rhs) return sub_0803B71A(r0, r1, r2, r3);
    r1 = stack[11]; // [sp + 0x2C]
    return sub_0803B71E(r0, r1, r2, r3);
}

// ROM Address: 0x0803B71A..0x0803B71E (4 bytes, Thumb)
u32 sub_0803B71A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[11]; // [sp + 0x2C]
    r1 = (u32)(-(s32)r1);
    return r0;
}

// ROM Address: 0x0803B71E..0x0803B728 (10 bytes, Thumb)
u32 sub_0803B71E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[12]; // [sp + 0x30]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_0803B728(r0, r1, r2, r3);
    r2 = stack[12]; // [sp + 0x30]
    return sub_0803B72C(r0, r1, r2, r3);
}

// ROM Address: 0x0803B728..0x0803B772 (74 bytes, Thumb)
u32 sub_0803B728(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[12]; // [sp + 0x30]
    r2 = (u32)(-(s32)r2);
    stack[9] = r1; // [sp + 0x24]
    stack[10] = r2; // [sp + 0x28]
    stack[13] = r1; // [sp + 0x34]
    stack[14] = r2; // [sp + 0x38]
    stack[15] = r1; // [sp + 0x3C]
    stack[16] = r2; // [sp + 0x40]
    r1 = *(u32*)(r7 + 0x8);
    r2 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    stack[13] = r2; // [sp + 0x34]
    r2 = 0x3C; // sp + 0x3C
    stack[14] = r0; // [sp + 0x38]
    r0 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) return sub_0803B772(r0, r1, r2, r3);
    r3 = stack[16]; // [sp + 0x40]
    r0 = stack[15]; // [sp + 0x3C]
    r3 = ((u32)((s32)r3 >> 8));
    r5 = (r3 << 1);
    r6 = r5;
    r2 = ((u32)((s32)r0 >> 8));
    r0 = r2 + 1;
    r5 = r5 - r2;
    r2 = r3 - r2;
    r2 = (r2 << 1);
    stack[11] = r2; // [sp + 0x2C]
    r2 = 0xFFU;
    r2 += 0x1U;
    r3 = 0x0U;
    stack[10] = r3; // [sp + 0x28]
    stack[9] = r2; // [sp + 0x24]
    stack[7] = r2; // [sp + 0x1C]
    stack[8] = r2; // [sp + 0x20]
    stack[12] = r6; // [sp + 0x30]
    return sub_0803B798(r0, r1, r2, r3);
}

// ROM Address: 0x0803B772..0x0803B7A8 (54 bytes, Thumb)
u32 sub_0803B772(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = stack[15]; // [sp + 0x3C]
    r0 = stack[16]; // [sp + 0x40]
    r3 = ((u32)((s32)r3 >> 8));
    r5 = (r3 << 1);
    r6 = r5;
    r2 = ((u32)((s32)r0 >> 8));
    r0 = r2 + 1;
    r5 = r5 - r2;
    r2 = r3 - r2;
    r2 = (r2 << 1);
    stack[11] = r2; // [sp + 0x2C]
    r2 = 0x0U;
    stack[9] = r2; // [sp + 0x24]
    r2 = 0xFFU;
    r2 += 0x1U;
    stack[7] = r2; // [sp + 0x1C]
    stack[10] = r2; // [sp + 0x28]
    stack[8] = r2; // [sp + 0x20]
    stack[12] = r6; // [sp + 0x30]
    r3 = 0xFFU;
    r2 = stack[17]; // [sp + 0x44]
    r6 = stack[21]; // [sp + 0x54]
    r3 = ~r3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) return sub_0803B7AC(r0, r1, r2, r3);
    r2 = stack[9]; // [sp + 0x24]
    stack[7] = r3; // [sp + 0x1C]
    return r0;
}

// ROM Address: 0x0803B7AA..0x0803B7B8 (14 bytes, Thumb)
u32 sub_0803B7AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[9] = r2; // [sp + 0x24]
    r2 = stack[18]; // [sp + 0x48]
    r6 = stack[22]; // [sp + 0x58]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) return sub_0803B7BC(r0, r1, r2, r3);
    r2 = stack[10]; // [sp + 0x28]
    stack[8] = r3; // [sp + 0x20]
    return r0;
}

// ROM Address: 0x0803B7BA..0x0803B824 (106 bytes, Thumb)
u32 sub_0803B7BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[10] = r2; // [sp + 0x28]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0803B7C2;
    r1 = r0 - 1;
loc_0803B7C2:
    r6 = r1 - 1;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0803B8B0(r0, r1, r2, r3);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_0803B824(r0, r1, r2, r3);
    r0 = stack[12]; // [sp + 0x30]
    r1 = stack[9]; // [sp + 0x24]
    r5 = r5 + r0;
    r0 = stack[13]; // [sp + 0x34]
    r0 = r0 + r1;
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[14]; // [sp + 0x38]
    r1 = stack[10]; // [sp + 0x28]
    r0 = r0 + r1;
    stack[14] = r0; // [sp + 0x38]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x34; // sp + 0x34
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B7EA: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B8CA(r0, r1, r2, r3);
    r0 = stack[13]; // [sp + 0x34]
    r1 = stack[9]; // [sp + 0x24]
    stack[4] = r6; // [sp + 0x10]
    r0 = r0 - r1;
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[14]; // [sp + 0x38]
    r1 = stack[10]; // [sp + 0x28]
    r3 = 0x34; // sp + 0x34
    r0 = r0 - r1;
    stack[14] = r0; // [sp + 0x38]
    r1 = 0x54; // sp + 0x54
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[2] = r0; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x24; // sp + 0x24
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[0] = r0; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    r1 = r4;
    r0 = r7;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = sub_0803B4FC(r0, r1, r2, r3); // 0x0803B81C
    return r0;
}

// ROM Address: 0x0803B824..0x0803B8B2 (142 bytes, Thumb)
u32 sub_0803B824(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[11]; // [sp + 0x2C]
    r1 = stack[7]; // [sp + 0x1C]
    r5 = r5 + r0;
    r0 = stack[13]; // [sp + 0x34]
    r0 = r0 + r1;
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[14]; // [sp + 0x38]
    r1 = stack[8]; // [sp + 0x20]
    r0 = r0 + r1;
    stack[14] = r0; // [sp + 0x38]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x34; // sp + 0x34
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B842: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B8CA(r0, r1, r2, r3);
    r0 = stack[13]; // [sp + 0x34]
    r1 = stack[7]; // [sp + 0x1C]
    r0 = r0 - r1;
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[14]; // [sp + 0x38]
    r1 = stack[8]; // [sp + 0x20]
    r0 = r0 - r1;
    stack[14] = r0; // [sp + 0x38]
    r0 = stack[9]; // [sp + 0x24]
    r1 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0803B86C;
    r0 = stack[8]; // [sp + 0x20]
    r1 = 0x0U;
    stack[5] = r1; // [sp + 0x14]
    stack[6] = r0; // [sp + 0x18]
    goto loc_0803B874;
loc_0803B86C:
    r0 = stack[7]; // [sp + 0x1C]
    r1 = 0x0U;
    stack[6] = r1; // [sp + 0x18]
    stack[5] = r0; // [sp + 0x14]
loc_0803B874:
    r0 = stack[13]; // [sp + 0x34]
    r1 = stack[9]; // [sp + 0x24]
    r0 = r0 + r1;
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[14]; // [sp + 0x38]
    r1 = stack[10]; // [sp + 0x28]
    r0 = r0 + r1;
    stack[14] = r0; // [sp + 0x38]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x34; // sp + 0x34
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B88E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B8CC(r0, r1, r2, r3);
    r0 = stack[13]; // [sp + 0x34]
    r1 = stack[9]; // [sp + 0x24]
    stack[4] = r6; // [sp + 0x10]
    r0 = r0 - r1;
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[14]; // [sp + 0x38]
    r1 = stack[10]; // [sp + 0x28]
    r0 = r0 - r1;
    stack[14] = r0; // [sp + 0x38]
    r1 = 0x54; // sp + 0x54
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[2] = r0; // [sp + 0x8]
    return sub_0803B8B2(r0, r1, r2, r3);
    return sub_0803B926(r0, r1, r2, r3);
}

// ROM Address: 0x0803B8CA..0x0803B8CC (2 bytes, Thumb)
u32 sub_0803B8CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0803B91E(r0, r1, r2, r3);
}

// ROM Address: 0x0803B91E..0x0803B934 (22 bytes, Thumb)
u32 sub_0803B91E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 -= 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803B926;
    return sub_0803B7C8(r0, r1, r2, r3);
loc_0803B926:
    r1 = stack[21]; // [sp + 0x54]
    r0 = 0x1U;
    *(u32*)(r7 + 0xC) = (u32)r1;
    r1 = stack[22]; // [sp + 0x58]
    *(u32*)(r7 + 0x14) = (u32)r0;
    *(u32*)(r7 + 0x10) = (u32)r1;
    return sub_0803B820(r0, r1, r2, r3);
}

// ROM Address: 0x0803B934..0x0803B99A (102 bytes, Thumb)
u32 sub_0803B934(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0803BC18]
    r4 = r1;
    r0 = *(u32*)(r0);
    r0 += 0x1A0U;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    stack[16] = r1; // [sp + 0x40]
    stack[15] = r2; // [sp + 0x3C]
    r2 = stack[17]; // [sp + 0x44]
    r5 = r4;
    r2 += 0xCU;
    r1 = *(u32*)r2; r2 += 4;
    r5 += 0xFFU;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2);
    r5 += 0xA1U;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r0 + 0x4);
    r2 = ((u32)((s32)r2 >> 8));
    r3 = ((u32)((s32)r3 >> 8));
    stack[8] = r3; // [sp + 0x20]
    stack[10] = r3; // [sp + 0x28]
    stack[7] = r2; // [sp + 0x1C]
    stack[9] = r2; // [sp + 0x24]
    r2 = *(u32*)(r5);
    r3 = *(u32*)(r5 + 0x4);
    r2 = ((u32)((s32)r2 >> 8));
    r3 = ((u32)((s32)r3 >> 8));
    stack[11] = r2; // [sp + 0x2C]
    stack[8] = r3; // [sp + 0x20]
    stack[12] = r3; // [sp + 0x30]
    stack[7] = r2; // [sp + 0x1C]
    r2 = stack[9]; // [sp + 0x24]
    r3 = stack[11]; // [sp + 0x2C]
    r7 = stack[12]; // [sp + 0x30]
    r2 = r2 - r3;
    r3 = stack[10]; // [sp + 0x28]
    r6 = r5 + 4;
    r3 = r3 - r7;
    r7 = r2;
    r1 = r0 + 4;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    stack[8] = r3; // [sp + 0x20]
    stack[14] = r3; // [sp + 0x38]
    stack[7] = r2; // [sp + 0x1C]
    stack[13] = r2; // [sp + 0x34]
    if (cmp_lhs >= cmp_rhs) return sub_0803B99C(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803B99C..0x0803B9A4 (8 bytes, Thumb)
u32 sub_0803B99C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r2;
    r2 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_0803B9A6(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803B9A6..0x0803B9BE (24 bytes, Thumb)
u32 sub_0803B9A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    stack[11] = r3; // [sp + 0x2C]
    stack[12] = r2; // [sp + 0x30]
    if (cmp_lhs <= cmp_rhs) return sub_0803B9BE(r0, r1, r2, r3);
    r3 = stack[13]; // [sp + 0x34]
    r2 = 0x3U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803B9BA;
    r2 = 0x2U;
loc_0803B9BA:
    *(u8*)(r4 + 0x10) = (u8)r2;
    return sub_0803B9CC(r0, r1, r2, r3);
}

// ROM Address: 0x0803B9BE..0x0803B9CC (14 bytes, Thumb)
u32 sub_0803B9BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r3 = stack[14]; // [sp + 0x38]
    r2 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803B9CA;
    r2 = 0x0U;
loc_0803B9CA:
    *(u8*)(r4 + 0x10) = (u8)r2;
    return r0;
}

// ROM Address: 0x0803B9CC..0x0803BA84 (184 bytes, Thumb)
u32 sub_0803B9CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    *(u32*)(r0) = (u32)r2;
    r0 = stack[16]; // [sp + 0x40]
    *(u32*)(r1) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803B9DA;
    r7 = 0x1U;
loc_0803B9DA:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B9E4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803B9FA;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B9F6: BL __call_via_r3
loc_0803B9FA:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BA04: BL __call_via_r3
    r0 = stack[13]; // [sp + 0x34]
    r1 = stack[14]; // [sp + 0x38]
    r0 = (r0 << 8);
    stack[11] = r0; // [sp + 0x2C]
    r0 = stack[17]; // [sp + 0x44]
    r1 = (r1 << 8);
    stack[12] = r1; // [sp + 0x30]
    r1 = *(u32*)(r0 + 0x4);
    r0 = stack[11]; // [sp + 0x2C]
    r2 = stack[12]; // [sp + 0x30]
    r0 *= r1;
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    r1 = (r0 << 8);
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r7 = (r7 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803BA32: BL 0x08046E58
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[4]; // [sp + 0x10]
    r1 = (r0 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803BA3E: BL 0x08046E58
    r1 = stack[0]; // [sp + 0x0]
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    r0 = *(u32*)(r5);
    r1 = stack[5]; // [sp + 0x14]
    r0 = r0 + r1;
    r1 = *(u32*)(r6);
    r2 = stack[6]; // [sp + 0x18]
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 + r2;
    stack[2] = r1; // [sp + 0x8]
    stack[10] = r1; // [sp + 0x28]
    stack[8] = r1; // [sp + 0x20]
    stack[9] = r0; // [sp + 0x24]
    stack[7] = r0; // [sp + 0x1C]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x24; // sp + 0x24
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BA72: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803BA84(r0, r1, r2, r3);
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r6) = (u32)r0;
    return sub_0803BAEE(r0, r1, r2, r3);
}

// ROM Address: 0x0803BA84..0x0803BABE (58 bytes, Thumb)
u32 sub_0803BA84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[9]; // [sp + 0x24]
    r7 = r4;
    r7 += 0x1A4U;
    stack[15] = r0; // [sp + 0x3C]
    r0 = *(u32*)(r7);
    stack[16] = r0; // [sp + 0x40]
    r0 = stack[9]; // [sp + 0x24]
    r1 = *(u32*)(r5);
    r0 = r0 - r1;
    stack[8] = r0; // [sp + 0x20]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803BA9E;
    r0 = (u32)(-(s32)r0);
loc_0803BA9E:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0803BABE(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x3C; // sp + 0x3C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BAAC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803BABE(r0, r1, r2, r3);
    r0 = stack[15]; // [sp + 0x3C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[16]; // [sp + 0x40]
    *(u32*)(r6) = (u32)r0;
    return sub_0803BAEE(r0, r1, r2, r3);
}

// ROM Address: 0x0803BABE..0x0803BAD0 (18 bytes, Thumb)
u32 sub_0803BABE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5);
    r1 = 0x3C; // sp + 0x3C
    stack[15] = r0; // [sp + 0x3C]
    r0 = stack[10]; // [sp + 0x28]
    stack[16] = r0; // [sp + 0x40]
    r2 = *(u32*)(r7);
    r0 = r0 - r2;
    stack[8] = r0; // [sp + 0x20]
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803BAD2(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803BAD2..0x0803BC18 (326 bytes, Thumb)
u32 sub_0803BAD2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803BAEE;
    r2 = *(u32*)(r4);
    r0 = r4;
    r3 = *(u32*)(r2 + 0x54);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BADE: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803BAEE;
    r0 = stack[15]; // [sp + 0x3C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[16]; // [sp + 0x40]
    *(u32*)(r6) = (u32)r0;
loc_0803BAEE:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BAF8: BL __call_via_r3
    return r0;
    r2 = 0x030032E5U; // [0x0803BC1C]
    r5 = r1;
    r1 = *(u8*)(r2);
    r4 = r0;
    r0 = r1 + 1;
    r0 = (r0 << 29);
    r0 = (r0 >> 29);
    *(u8*)(r4 + 0x18) = (u8)r1;
    *(u8*)(r2) = (u8)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BB1E: BL __call_via_r3
    r1 = r5;
    r2 = *(u32*)(r4 + 0x1C);
    r3 = *(u32*)(r4 + 0x20);
    r0 = r4;
    r0 = sub_0803B6EA(r0, r1, r2, r3); // 0x0803BB2A
    r1 = *(u32*)(r5);
    r6 = r0;
    r2 = *(u32*)(r1 + 0x48);
    r0 = r5;
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BB3A: BL __call_via_r3
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803BB46;
    r0 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r0;
loc_0803BB46:
    return r0;
    r5 = r0;
    r0 = *(u8*)(r0 + 0x18);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803BB86;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BB5E: BL __call_via_r3
    r1 = r4;
    r2 = *(u32*)(r5 + 0x1C);
    r3 = *(u32*)(r5 + 0x20);
    r0 = r5;
    r0 = sub_0803B6EA(r0, r1, r2, r3); // 0x0803BB6A
    r1 = *(u32*)(r4);
    r6 = r0;
    r2 = *(u32*)(r1 + 0x48);
    r0 = r4;
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BB7A: BL __call_via_r3
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803BB86;
    r3 = 0x0U;
    *(u32*)(r5 + 0x14) = (u32)r3;
loc_0803BB86:
    r0 = *(u8*)(r5 + 0x18);
    r1 = r4;
    r0 += 0x7U;
    r0 = (r0 << 29);
    r0 = (r0 >> 29);
    *(u8*)(r5 + 0x18) = (u8)r0;
    r0 = r5;
    r0 = sub_0803B934(r0, r1, r2, r3); // 0x0803BB94: BL 0x0803B934
    r0 = 0x4EU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803BB9C: BL 0x08000158
    r2 = 0x0877B168U; // [0x0803BC24]
    r1 = 0x000005C4U; // [0x0803BC20]
    r2 = *(u32*)(r2);
    r7 = r2 + r1;
    r2 = 0x27U;
    r1 = 0x083192A8U; // [0x0803BC28]
    r2 = (r2 << 4);
    r6 = r2 + r1;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803BBC8;
    r0 = 0x11U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803BBB6: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803BBC8;
    r0 = 0x4CU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803BBC0: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_0803BBE0;
loc_0803BBC8:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803BBD2;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0803BC14;
loc_0803BBD2:
    r1 = r6;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803BBDA
    goto loc_0803BC14;
loc_0803BBE0:
    r0 = 0xA4U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803BBE2: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803BBFE;
    r0 = 0x44U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803BBEC: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803BBFE;
    r0 = 0xBFU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803BBF6: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_0803BC14;
loc_0803BBFE:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs == cmp_rhs) goto loc_0803BC08;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0803BC14;
loc_0803BC08:
    r1 = r6;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803BC10
loc_0803BC14:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803BC2C..0x0803BCAA (126 bytes, Thumb)
u32 sub_0803BC2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r1 += 0x1A0U;
    stack[4] = r1; // [sp + 0x10]
    r4 = r0;
    r4 += 0x20U;
    r1 += 0x4U;
    stack[6] = r1; // [sp + 0x18]
    r5 = r4 - 4;
    r6 = r0;
    r1 = r5 + 4;
    stack[5] = r1; // [sp + 0x14]
loc_0803BC48:
    r0 = 0xFFU;
    r0 += 0x27U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803BC4C
    r0 += 0x60U;
    r0 = (r0 << 8);
    *(u32*)(r6 + 0x1C) = (u32)r0;
    r0 = 0xF0U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803BC58
    r0 += 0x70U;
    r0 = (r0 << 8);
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r7);
    r0 = r7;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BC6C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803BC48;
    r1 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r1);
    r2 = 0x14; // sp + 0x14
    r0 = r0 - r1;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r2);
    stack[0] = r0; // [sp + 0x0]
    r1 = r1 - r2;
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = r0;
    stack[2] = r0; // [sp + 0x8]
    r0 *= r1;
    r1 = ((u32)((s32)r0 >> 8));
    r0 = stack[3]; // [sp + 0xC]
    r2 = r0;
    r0 *= r2;
    r0 = ((u32)((s32)r0 >> 8));
    r0 = r1 + r0;
    r1 = 0x5000U; // (5 << 12)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803BC48;
    return r0;
}

// ROM Address: 0x0803BCAA..0x0803BCF4 (74 bytes, Thumb)
u32 sub_0803BCAA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0803BB48(r0, r1, r2, r3); // 0x0803BCB2
    r1 = r5;
    r1 += 0x1A0U;
    r3 = *(u32*)r1; r1 += 4;
    r2 = *(u32*)(r4 + 0x1C);
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r1);
    r2 = r2 - r3;
    r0 = r0 - r1;
    stack[2] = r0; // [sp + 0x8]
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r2; // [sp + 0xC]
    stack[5] = r2; // [sp + 0x14]
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    if (cmp_lhs < cmp_rhs) goto loc_0803BCDE;
    r1 = stack[5]; // [sp + 0x14]
    goto loc_0803BCE2;
loc_0803BCDE:
    r0 = stack[5]; // [sp + 0x14]
    r1 = (u32)(-(s32)r0);
loc_0803BCE2:
    r0 = 0x800U; // (1 << 11)
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0803BD02(r0, r1, r2, r3);
    r1 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_0803BCF4(r0, r1, r2, r3);
    r1 = stack[6]; // [sp + 0x18]
    return sub_0803BCF8(r0, r1, r2, r3);
}

// ROM Address: 0x0803BCF4..0x0803BCF6 (2 bytes, Thumb)
u32 sub_0803BCF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[6]; // [sp + 0x18]
    return r0;
}

// ROM Address: 0x0803BCF8..0x0803BD02 (10 bytes, Thumb)
u32 sub_0803BCF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0803BD02(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803BD02..0x0803BD06 (4 bytes, Thumb)
u32 sub_0803BD02(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0803BCFE(r0, r1, r2, r3);
}

// ROM Address: 0x0803BD06..0x0803BD84 (126 bytes, Thumb)
u32 sub_0803BD06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BD16: BL __call_via_r3
    r0 = 0x34U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803BD1C: BL 0x08000158
    r2 = r0;
    r0 = 0x0877B16CU; // [0x0803BD84]
    r1 = 0x5U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0803BD28
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803BD60;
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0803BD88]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0803BD44;
    r1 = r4;
    r1 += 0x18CU;
loc_0803BD44:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0803BD46
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0803BD8C]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803BD60;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BD5C: BL __call_via_r3
loc_0803BD60:
    return r0;
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803BD68: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803BD80;
    r1 = 0xB3U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x32U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r1 = 0x0804ADC0U /* &VTable_0804ADC0 */; // [0x0803BD90]
    *(u32*)(r0) = (u32)r1;
loc_0803BD80:
    return r0;
    r0 = r0;
    return r0;
}

// ROM Address: 0x0803BD86..0x0803BE02 (124 bytes, Thumb)
u32 sub_0803BD86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r6 >> 1);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r5 = 0x300; // sp + 0x300
    r4 = (r0 >> 32);
    r4 = r0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x24U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    r0 = *(u8*)(r1 + 0x10);
    r2 = 0x0877B180U; // [0x0803BF14]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r2;
    r2 = r1;
    r2 += 0x1A0U;
    r3 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)(r2);
    r3 = ((u32)((s32)r3 >> 8));
    r2 = ((u32)((s32)r2 >> 8));
    stack[2] = r2; // [sp + 0x8]
    r2 = r3;
    stack[1] = r3; // [sp + 0x4]
    r3 = stack[2]; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    stack[4] = r3; // [sp + 0x10]
    r3 = *(u32*)(r0);
    r2 = r2 + r3;
    r3 = stack[4]; // [sp + 0x10]
    r5 = *(u32*)(r0 + 0x4);
    stack[1] = r2; // [sp + 0x4]
    r3 = r3 + r5;
    stack[5] = r2; // [sp + 0x14]
    r2 = 0x0872A6A8U; // [0x0803BF18]
    stack[2] = r3; // [sp + 0x8]
    stack[6] = r3; // [sp + 0x18]
    r3 = r1;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r0 + 0x8);
    r0 = 0x0U;
    r1 = 0x14; // sp + 0x14
    r0 = sub_08021280(r0, r1, r2, r3); // 0x0803BDE8: BL 0x08021280
    r1 = r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x0877B180U; // [0x0803BF14]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803BDF6: BL 0x0801191A
    r0 = 0x3CU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    return r0;
}

// ROM Address: 0x0803BE02..0x0803BE04 (2 bytes, Thumb)
u32 sub_0803BE02(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803BE04..0x0803BE34 (48 bytes, Thumb)
u32 sub_0803BE04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803BE34(r0, r1, r2, r3);
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803BE30;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803BE28: BL __call_via_r3
    r0 = 0x24U;
    *(u8*)(r4 + 0x8) = (u8)r0;
loc_0803BE30:
    return r0;
}

// ROM Address: 0x0803BE34..0x0803BEB2 (126 bytes, Thumb)
u32 sub_0803BE34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x8);
    r1 = r0 - 1;
    *(u32*)(r5 + 0x8) = (u32)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803BE30(r0, r1, r2, r3);
    r0 = 0x03001C34U; // [0x0803BF1C]
    r1 = r4;
    r0 = *(u32*)(r0);
    r1 += 0xFFU;
    r0 += 0x1A0U;
    r1 += 0xA1U;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r1; r1 += 4;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r2 = r2 - r3;
    r0 = r0 - r1;
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    stack[0] = r2; // [sp + 0x0]
    stack[5] = r1; // [sp + 0x14]
    r0 = stack[5]; // [sp + 0x14]
    stack[3] = r1; // [sp + 0xC]
    r1 = ((u32)((s32)r2 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[2] = r2; // [sp + 0x8]
    stack[2] = r1; // [sp + 0x8]
    r0 *= r1;
    stack[0] = r1; // [sp + 0x0]
    r1 = stack[3]; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r2 = r1;
    r1 *= r2;
    r0 = r0 + r1;
    r0 = sub_0803FAF6(r0, r1, r2, r3); // 0x0803BE80: BL 0x0803FAF6
    r6 = r0;
    r1 = stack[4]; // [sp + 0x10]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803BE88: BL 0x08046E58
    stack[4] = r0; // [sp + 0x10]
    r0 = r6;
    r1 = stack[5]; // [sp + 0x14]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803BE92: BL 0x08046E58
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    *(u8*)(r4 + 0x11) = (u8)r0;
    stack[0] = r6; // [sp + 0x0]
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r5 + 0x4);
    r3 = 0x10; // sp + 0x10
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = sub_080214DA(r0, r1, r2, r3); // 0x0803BEA8
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    return sub_0803BE30(r0, r1, r2, r3);
}

// ROM Address: 0x0803BEB2..0x0803BEF6 (68 bytes, Thumb)
u32 sub_0803BEB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803BEC8;
    r1 = r0;
    r0 = 0x0877B180U; // [0x0803BF14]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803BEC4
loc_0803BEC8:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803BECA: BL 0x0803D63C
    return r0;
    r4 = r1;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803BED6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803BEE2;
    r1 = 0x0804D6CCU /* &VTable_0804D6CC */; // [0x0803BF20]
    *(u32*)(r0) = (u32)r1;
loc_0803BEE2:
    r5 = r0;
    r1 = 0x10U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803BEE8
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803BEF0
    return r0;
}

// ROM Address: 0x0803BEF6..0x0803BF06 (16 bytes, Thumb)
u32 sub_0803BEF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r1 + 0x58);
    r0 += 0x40U;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0803BF06(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0803BF08(r0, r1, r2, r3);
}

// ROM Address: 0x0803BF06..0x0803BF0E (8 bytes, Thumb)
u32 sub_0803BF06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = 0x1U;
    r0 = r1 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0803BF0E..0x0803BF12 (4 bytes, Thumb)
u32 sub_0803BF0E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030032E8U; // [0x0803BF24]
    return r0; // BX lr
}

// ROM Address: 0x0803BFD4..0x0803BFD6 (2 bytes, Thumb)
u32 sub_0803BFD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (u32)(-(s32)r2);
    return r0;
}

// ROM Address: 0x0803BFD6..0x0803BFE6 (16 bytes, Thumb)
u32 sub_0803BFD6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) return sub_0803BFEC(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0803BFE6(r0, r1, r2, r3);
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return r0;
}

// ROM Address: 0x0803BFE6..0x0803BFFC (22 bytes, Thumb)
u32 sub_0803BFE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_0803BFE2(r0, r1, r2, r3);
    r1 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803BFF6;
    *(u8*)(r4 + 0x10) = (u8)r1;
    return sub_0803BFE2(r0, r1, r2, r3);
loc_0803BFF6:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_0803BFE2(r0, r1, r2, r3);
}

// ROM Address: 0x0803BFFC..0x0803C030 (52 bytes, Thumb)
u32 sub_0803BFFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r1 + 0x58);
    r4 = r1;
    r0 += 0x3CU;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0803C022;
    r1 = 0xFU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803C012
    r1 = 0x03001B20U; // [0x0803C0B0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803C01A
    r0 = 0x24U;
    *(u8*)(r4 + 0x8) = (u8)r0;
loc_0803C022:
    r0 = *(u32*)(r5 + 0xC);
    r1 = r0 - 1;
    *(u32*)(r5 + 0xC) = (u32)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803C030(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803C030..0x0803C04A (26 bytes, Thumb)
u32 sub_0803C030(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 += 0x1A0U;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r5 + 0x4);
    r2 = r2 + r3;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r5 + 0x8);
    r1 = r2 + r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x0U;
    return sub_0803C02E(r0, r1, r2, r3);
}

// ROM Address: 0x0803C04A..0x0803C0A4 (90 bytes, Thumb)
u32 sub_0803C04A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r1;
    r1 = 0x030032ECU; // [0x0803C0A8]
    r2 = 0x0877B1BCU; // [0x0803C0AC]
    r1 = *(u32*)(r1);
    r0 += 0xFFU;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = *(u32*)r1; r1 += 4;
    r0 += 0xA1U;
    *(u32*)r0 = r2; r0 += 4;
    r1 = *(u32*)(r1);
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C070: BL __call_via_r3
    r0 = 0x24U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    return r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803C07E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C08A;
    r1 = 0x0804B678U /* &VTable_0804B678 */; // [0x0803C0B4]
    *(u32*)(r0) = (u32)r1;
loc_0803C08A:
    return r0;
    r0 = 0x03001C34U; // [0x0803C0B8]
    r0 = *(u32*)(r0);
    r2 = *(u32*)(r0 + 0x58);
    r2 += 0x4CU;
    r2 = *(u32*)(r2 + 0x54);
    r0 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0803C0A4(r0, r1, r2, r3);
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0803C0A4..0x0803C0A8 (4 bytes, Thumb)
u32 sub_0803C0A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0803C0B6..0x0803C0C0 (10 bytes, Thumb)
u32 sub_0803C0B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    r0 = 0x030032F0U; // [0x0803C0C0]
    return r0; // BX lr
}

// ROM Address: 0x0803C0C0..0x0803C0C4 (4 bytes, Thumb)
u32 sub_0803C0C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xF0U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0803C0C4..0x0803C1D4 (272 bytes, Thumb)
u32 sub_0803C0C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r4 = *(u32*)(r1 + 0x4);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803C0D4
    r0 = r4;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803C0DA: BL 0x0800EE78
    r6 = 0x0U;
    *(u16*)(r4 + 0x12) = (u16)r6;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r6;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0877B200U; // [0x0803C1D8]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = stack[3]; // [sp + 0xC]
    r3 = *(u32*)(r0 + 0x4);
    stack[0] = r1; // [sp + 0x0]
    r2 = r2 + r3;
    stack[1] = r2; // [sp + 0x4]
    stack[5] = r2; // [sp + 0x14]
    r2 = 0x0871DA88U; // [0x0803C1DC]
    stack[4] = r1; // [sp + 0x10]
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r0 + 0x8);
    r3 = r4;
    r0 = 0x0U;
    r1 = 0x10; // sp + 0x10
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x0803C12C
    *(u32*)(r5 + 0x10) = (u32)r0;
    *(u32*)(r0 + 0x50) = (u32)r6;
    r0 = 0x0877B200U; // [0x0803C1D8]
    r1 = *(u32*)(r5 + 0x10);
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803C13C: BL 0x0801191A
    return r0;
    r4 = *(u32*)(r1 + 0x4);
    r1 = *(u16*)(r4 + 0x12);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803C1AC;
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0803C1A2;
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x0877B200U; // [0x0803C1D8]
    r2 += 0x30U;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = stack[2]; // [sp + 0x8]
    r3 = *(u32*)(r1);
    r2 = r2 + r3;
    r3 = stack[3]; // [sp + 0xC]
    r1 = *(u32*)(r1 + 0x4);
    stack[0] = r2; // [sp + 0x0]
    r1 = r3 + r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    r2 = stack[1]; // [sp + 0x4]
    stack[4] = r1; // [sp + 0x10]
    stack[5] = r2; // [sp + 0x14]
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r0 + 0x10);
    r2 = 0x10; // sp + 0x10
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0803C19E
loc_0803C1A2:
    r0 = *(u16*)(r4 + 0x12);
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_0803C1AC:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0803C1D4(r0, r1, r2, r3);
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C1C6: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x10);
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x0803C1CC
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803C1D4..0x0803C1D8 (4 bytes, Thumb)
u32 sub_0803C1D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803C1E0..0x0803C2EA (266 bytes, Thumb)
u32 sub_0803C1E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r4 = *(u32*)(r1 + 0x4);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r1 = 0x3U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803C1F0
    r0 = r4;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803C1F6: BL 0x0800EE78
    r6 = 0x0U;
    *(u16*)(r4 + 0x12) = (u16)r6;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r6;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0877B254U; // [0x0803C2F0]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = stack[3]; // [sp + 0xC]
    r3 = *(u32*)(r0 + 0x4);
    stack[0] = r1; // [sp + 0x0]
    r2 = r2 + r3;
    stack[1] = r2; // [sp + 0x4]
    stack[5] = r2; // [sp + 0x14]
    r2 = 0x0877C41CU; // [0x0803C2F4]
    stack[4] = r1; // [sp + 0x10]
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r0 + 0x8);
    r3 = r4;
    r0 = 0x0U;
    r1 = 0x10; // sp + 0x10
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x0803C248
    *(u32*)(r5 + 0x10) = (u32)r0;
    *(u32*)(r0 + 0x50) = (u32)r6;
    r0 = 0x0877B254U; // [0x0803C2F0]
    r1 = *(u32*)(r5 + 0x10);
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803C258: BL 0x0801191A
    return r0;
    r4 = *(u32*)(r1 + 0x4);
    r1 = *(u16*)(r4 + 0x12);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803C2C2;
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0803C2BE;
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x0877B254U; // [0x0803C2F0]
    r2 += 0x30U;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = stack[2]; // [sp + 0x8]
    r3 = *(u32*)(r1);
    r2 = r2 + r3;
    r3 = stack[3]; // [sp + 0xC]
    r1 = *(u32*)(r1 + 0x4);
    stack[0] = r2; // [sp + 0x0]
    r1 = r3 + r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    r2 = stack[1]; // [sp + 0x4]
    stack[4] = r1; // [sp + 0x10]
    stack[5] = r2; // [sp + 0x14]
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r0 + 0x10);
    r2 = 0x10; // sp + 0x10
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0803C2BA
loc_0803C2BE:
    r0 = 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_0803C2C2:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0803C2EA(r0, r1, r2, r3);
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C2DC: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x10);
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x0803C2E2
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803C2EA..0x0803C2EE (4 bytes, Thumb)
u32 sub_0803C2EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803C2F8..0x0803C402 (266 bytes, Thumb)
u32 sub_0803C2F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r4 = *(u32*)(r1 + 0x4);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r1 = 0x3U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803C308
    r0 = r4;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803C30E: BL 0x0800EE78
    r6 = 0x0U;
    *(u16*)(r4 + 0x12) = (u16)r6;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r6;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0877B2A8U; // [0x0803C408]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = stack[3]; // [sp + 0xC]
    r3 = *(u32*)(r0 + 0x4);
    stack[0] = r1; // [sp + 0x0]
    r2 = r2 + r3;
    stack[1] = r2; // [sp + 0x4]
    stack[5] = r2; // [sp + 0x14]
    r2 = 0x08725038U; // [0x0803C40C]
    stack[4] = r1; // [sp + 0x10]
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r0 + 0x8);
    r3 = r4;
    r0 = 0x0U;
    r1 = 0x10; // sp + 0x10
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x0803C360
    *(u32*)(r5 + 0x10) = (u32)r0;
    *(u32*)(r0 + 0x50) = (u32)r6;
    r0 = 0x0877B2A8U; // [0x0803C408]
    r1 = *(u32*)(r5 + 0x10);
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803C370: BL 0x0801191A
    return r0;
    r4 = *(u32*)(r1 + 0x4);
    r1 = *(u16*)(r4 + 0x12);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803C3DA;
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0803C3D6;
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x0877B2A8U; // [0x0803C408]
    r2 += 0x30U;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = stack[2]; // [sp + 0x8]
    r3 = *(u32*)(r1);
    r2 = r2 + r3;
    r3 = stack[3]; // [sp + 0xC]
    r1 = *(u32*)(r1 + 0x4);
    stack[0] = r2; // [sp + 0x0]
    r1 = r3 + r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    r2 = stack[1]; // [sp + 0x4]
    stack[4] = r1; // [sp + 0x10]
    stack[5] = r2; // [sp + 0x14]
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r0 + 0x10);
    r2 = 0x10; // sp + 0x10
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0803C3D2
loc_0803C3D6:
    r0 = 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_0803C3DA:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0803C402(r0, r1, r2, r3);
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C3F4: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x10);
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x0803C3FA
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803C402..0x0803C406 (4 bytes, Thumb)
u32 sub_0803C402(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803C410..0x0803C4D4 (196 bytes, Thumb)
u32 sub_0803C410(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r1 + 0x4);
    r1 = 0x12U;
    r5 = r0;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803C41A
    r0 = r4;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803C420: BL 0x0800EE78
    r0 = *(u32*)(r5 + 0xC);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = 0x0U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r1 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    *(u8*)(r4 + 0x11) = (u8)r0;
    *(u32*)(r5 + 0x10) = (u32)r0;
    return r0;
    r3 = *(u32*)(r1 + 0x4);
    r4 = r0;
    r0 = *(u16*)(r3 + 0x12);
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r3 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0803C4A6;
    r1 = (r0 >> 3);
    *(u8*)(r3 + 0x11) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0803C4A6;
    r0 = r3;
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    r1 = stack[1]; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r0 = *(u8*)(r3 + 0x10);
    r1 = 0x0877C430U; // [0x0803C4D8]
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = stack[2]; // [sp + 0x8]
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = stack[3]; // [sp + 0xC]
    r0 = *(u32*)(r0 + 0x4);
    stack[0] = r1; // [sp + 0x0]
    r0 = r2 + r0;
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    r1 = stack[1]; // [sp + 0x4]
    stack[4] = r0; // [sp + 0x10]
    stack[5] = r1; // [sp + 0x14]
    r2 = *(u8*)(r3 + 0x10);
    r1 = 0x10; // sp + 0x10
    r0 = 0x0U;
    r0 = sub_080286D4(r0, r1, r2, r3); // 0x0803C494: BL 0x080286D4
    r1 = r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x0877C430U; // [0x0803C4D8]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803C4A2: BL 0x0801191A
loc_0803C4A6:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0803C4D4(r0, r1, r2, r3);
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C4C0: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C4D0;
    r1 = r0;
    r0 = 0x1U;
    *(u8*)(r1 + 0x10) = (u8)r0;
loc_0803C4D0:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803C4D4..0x0803C4D8 (4 bytes, Thumb)
u32 sub_0803C4D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803C4D8..0x0803C55E (134 bytes, Thumb)
u32 sub_0803C4D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r5; r4 += 4;
    r7 = (r6 >> 1);
    r5 = *(u32*)(r1 + 0x4);
    r1 = 0x14U;
    r4 = r0;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803C4E8
    r0 = r5;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803C4EE: BL 0x0800EE78
    r1 = r5;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803C4F6: BL 0x0800FDFA
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r2 = stack[6]; // [sp + 0x18]
    r1 = r0 + r1;
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[1] = r1; // [sp + 0x4]
    stack[7] = r1; // [sp + 0x1C]
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u32*)(r4 + 0x8);
    r7 = 0x0U;
    r0 = r0 - r1;
    r1 = *(u32*)(r4 + 0xC);
    r2 = stack[8]; // [sp + 0x20]
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 - r2;
    stack[2] = r1; // [sp + 0x8]
    r1 = r0;
    r0 = stack[2]; // [sp + 0x8]
    r2 = (r1 << 1);
    r3 = (r0 << 2);
    r0 = r3 + r0;
    r6 = (u32)(-(s32)r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_0803C53A;
    *(u32*)(r4 + 0x14) = (u32)r7;
    return sub_0803C562(r0, r1, r2, r3);
loc_0803C53A:
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_0803C54A;
    r0 = 0x1U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    return sub_0803C562(r0, r1, r2, r3);
loc_0803C54A:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803C554;
    r0 = 0x4U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    return sub_0803C562(r0, r1, r2, r3);
loc_0803C554:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) return sub_0803C55E(r0, r1, r2, r3);
    r0 = 0x3U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    return sub_0803C562(r0, r1, r2, r3);
}

// ROM Address: 0x0803C55E..0x0803C602 (164 bytes, Thumb)
u32 sub_0803C55E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u16*)(r5 + 0x12) = (u16)r7;
    r0 = 0x38U;
    *(u8*)(r5 + 0x8) = (u8)r0;
    r0 = *(u32*)(r4 + 0x14);
    r0 = (r0 << 1);
    r0 += 0x1U;
    *(u8*)(r5 + 0x11) = (u8)r0;
    *(u32*)(r4 + 0x10) = (u32)r7;
    return r0;
    r5 = *(u32*)(r1 + 0x4);
    r4 = r0;
    r0 = *(u16*)(r5 + 0x12);
    r6 = 0x0877C450U; // [0x0803C674]
    r0 += 0x1U;
    *(u16*)(r5 + 0x12) = (u16)r0;
    r1 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C59E;
    r0 = *(u32*)(r4 + 0x18);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803C59E;
    r0 = *(u32*)(r6);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803C596
    r0 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r0;
loc_0803C59E:
    r0 = *(u16*)(r5 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_0803C64E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x14);
    r0 = (r0 << 1);
    r0 += 0x2U;
    *(u8*)(r5 + 0x11) = (u8)r0;
    r0 = r5;
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[3]; // [sp + 0xC]
    stack[4] = r0; // [sp + 0x10]
    stack[5] = r1; // [sp + 0x14]
    r1 = 0x0877C450U; // [0x0803C674]
    r0 = *(u32*)(r4 + 0x14);
    r1 += 0x4U;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = stack[4]; // [sp + 0x10]
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = stack[5]; // [sp + 0x14]
    r0 = *(u32*)(r0 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r0 = r2 + r0;
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    r1 = stack[3]; // [sp + 0xC]
    stack[6] = r0; // [sp + 0x18]
    stack[7] = r1; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x8);
    r1 = stack[6]; // [sp + 0x18]
    r0 = r0 - r1;
    r1 = *(u32*)(r4 + 0xC);
    r2 = stack[7]; // [sp + 0x1C]
    stack[0] = r0; // [sp + 0x0]
    r1 = r1 - r2;
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[2] = r0; // [sp + 0x8]
    if (cmp_lhs >= cmp_rhs) return sub_0803C604(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803C604..0x0803C60A (6 bytes, Thumb)
u32 sub_0803C604(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_0803C60C(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803C60C..0x0803C64E (66 bytes, Thumb)
u32 sub_0803C60C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    r1 = stack[1]; // [sp + 0x4]
    stack[4] = r0; // [sp + 0x10]
    r3 = 0x10; // sp + 0x10
    stack[5] = r1; // [sp + 0x14]
    r1 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r2 = 0x10; // sp + 0x10
    r0 = r2 + 4;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_0803C626;
    r0 = r2;
loc_0803C626:
    r0 = *(u32*)(r0);
    r2 = r4;
    r0 = ((u32)((s32)r0 >> 1));
    r0 += 0x1U;
    r2 += 0x8U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    r0 = 0x0U;
    r2 = *(u8*)(r5 + 0x10);
    r1 = 0x18; // sp + 0x18
    r0 = sub_0802E444(r0, r1, r2, r3); // 0x0803C63C: BL 0x0802E444
    r1 = r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803C646: BL 0x0801191A
    return r0;
}

// ROM Address: 0x0803C64E..0x0803C65C (14 bytes, Thumb)
u32 sub_0803C64E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_0803C64A(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x14);
    r0 = (r0 << 1);
    r0 += 0x1U;
    *(u8*)(r5 + 0x11) = (u8)r0;
    return sub_0803C64A(r0, r1, r2, r3);
}

// ROM Address: 0x0803C65C..0x0803C66E (18 bytes, Thumb)
u32 sub_0803C65C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r1 + 0x4);
    r1 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803C66E(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803C66E(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0803C66E..0x0803C672 (4 bytes, Thumb)
u32 sub_0803C66E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0803C672..0x0803C67C (10 bytes, Thumb)
u32 sub_0803C672(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    r7 = (r6 >> 1);
    r0 = r1;
    r1 = 0x03001C34U; // [0x0803C740]
    return r0;
}

// ROM Address: 0x0803C67C..0x0803C71C (160 bytes, Thumb)
u32 sub_0803C67C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C688;
    r1 = *(u8*)(r2 + 0x10);
    *(u8*)(r0 + 0x10) = (u8)r1;
loc_0803C688:
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C690: BL __call_via_r3
    return r0;
    r5 = r1;
    r5 += 0x1A0U;
    r0 = *(u32*)(r5);
    r4 = r1;
    r1 = *(u32*)(r5 + 0x4);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0807268CU; // [0x0803C744]
    r6 = r5 + 4;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r2 = stack[3]; // [sp + 0xC]
    r1 = (r1 << 1);
    stack[0] = r1; // [sp + 0x0]
    r7 = r2 + r1;
    r1 = stack[4]; // [sp + 0x10]
    r0 = (r0 << 1);
    stack[1] = r0; // [sp + 0x4]
    r0 = r1 + r0;
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r7; // [sp + 0x0]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C6E0: BL __call_via_r3
    r0 = stack[2]; // [sp + 0x8]
    r2 = (r7 << 8);
    r0 = (r0 << 8);
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r4);
    r0 = r4;
    r3 = *(u32*)(r2 + 0x54);
    r1 = sp;
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C6F8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803C71C(r0, r1, r2, r3);
    r0 = stack[0]; // [sp + 0x0]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[1]; // [sp + 0x4]
    *(u32*)(r6) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C712: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803C71C..0x0803C72E (18 bytes, Thumb)
u32 sub_0803C71C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C726: BL __call_via_r3
    r0 = 0x1U;
    return sub_0803C718(r0, r1, r2, r3);
}

// ROM Address: 0x0803C72E..0x0803C7FA (204 bytes, Thumb)
u32 sub_0803C72E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803C732: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C73E;
    r1 = 0x0804B720U /* &VTable_0804B720 */; // [0x0803C748]
    *(u32*)(r0) = (u32)r1;
loc_0803C73E:
    return r0;
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    r4 = (r0 >> 32);
    r6 = r0;
    r0 = 0x200U; // (1 << 9)
    r0 = r1 + r0;
    r4 = r1;
    r1 = *(u32*)(r0);
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0803C75E
    r5 = 0x0877C488U; // [0x0803C814]
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0803C766
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803C7BE;
    r1 = r4;
    r0 = 0x8; // sp + 0x8
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0803C776
    r0 = stack[2]; // [sp + 0x8]
    r2 = stack[4]; // [sp + 0x10]
    r3 = stack[5]; // [sp + 0x14]
    r2 = r0 + r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = ((u32)((s32)r2 >> 1));
    r0 = stack[3]; // [sp + 0xC]
    stack[0] = r2; // [sp + 0x0]
    r0 = r0 + r3;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    stack[6] = r2; // [sp + 0x18]
    r2 = 0x37U;
    stack[1] = r0; // [sp + 0x4]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x0U;
    r1 = 0x18; // sp + 0x18
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x0803C79C
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803C7A4: BL 0x0801191A
    r1 = 0x45U;
    r2 = 0x083192A8U; // [0x0803C818]
    r1 = (r1 << 3);
    r0 = *(u32*)(r5);
    r5 = 0x000005C4U; // [0x0803C81C]
    r1 = r1 + r2;
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803C7BA
loc_0803C7BE:
    r0 = 0x03001C34U; // [0x0803C820]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C7F6;
    r1 = *(u8*)(r6 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C7F6;
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u8*)(r0 + 0x10);
    r3 = 0x0; // sp + 0x0
    r5 = 0x4; // sp + 0x4
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x086B8098U; // [0x0803C824]
    r1 = r5;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x1000U; // (1 << 12)
    stack[2] = r0; // [sp + 0x8]
    r0 = r4;
    r0 = Battle_ComputeDamage(r0, r1, r2, r3); // 0x0803C7E4: BL 0x0800E9D8
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x58);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C7F2: BL __call_via_r3
loc_0803C7F6:
    return r0;
}

// ROM Address: 0x0803C7FA..0x0803C7FE (4 bytes, Thumb)
u32 sub_0803C7FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0803C7FE..0x0803C814 (22 bytes, Thumb)
u32 sub_0803C7FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u8*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803C804: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C812;
    r1 = 0x0804D2B8U /* &VTable_0804D2B8 */; // [0x0803C828]
    *(u32*)(r0) = (u32)r1;
    *(u8*)(r0 + 0x4) = (u8)r4;
loc_0803C812:
    return r0;
}

// ROM Address: 0x0803C814..0x0803C816 (2 bytes, Thumb)
u32 sub_0803C814(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)r4 = r3; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    return r0;
}

// ROM Address: 0x0803C816..0x0803C8BA (164 bytes, Thumb)
u32 sub_0803C816(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0803C79C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = *(u32*)(r1 + 0x58);
    r4 = r1;
    r1 = 0x200U; // (1 << 9)
    r1 = r4 + r1;
    *(u32*)(r1) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x23U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803C840: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0803C848
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C856: BL __call_via_r3
    r5 = 0x0877C490U; // [0x0803C8D0]
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0803C85E
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803C8B6;
    r1 = r4;
    r0 = 0xC; // sp + 0xC
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0803C86E
    r0 = stack[3]; // [sp + 0xC]
    r2 = stack[5]; // [sp + 0x14]
    r3 = stack[6]; // [sp + 0x18]
    r2 = r0 + r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = ((u32)((s32)r2 >> 1));
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r2; // [sp + 0x4]
    r0 = r0 + r3;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x37U;
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x0U;
    r1 = 0x1C; // sp + 0x1C
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x0803C894
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803C89C: BL 0x0801191A
    r1 = 0x45U;
    r2 = 0x083192A8U; // [0x0803C8D4]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r4 = 0x000005C4U; // [0x0803C8D8]
    r0 = *(u32*)(r5);
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803C8B2
loc_0803C8B6:
    return r0;
}

// ROM Address: 0x0803C8BA..0x0803C8BE (4 bytes, Thumb)
u32 sub_0803C8BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0803C8BE..0x0803C8D0 (18 bytes, Thumb)
u32 sub_0803C8BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803C8C2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C8CE;
    r1 = 0x0804CB10U /* &VTable_0804CB10 */; // [0x0803C8DC]
    *(u32*)(r0) = (u32)r1;
loc_0803C8CE:
    return r0;
}

// ROM Address: 0x0803C8D0..0x0803C8D2 (2 bytes, Thumb)
u32 sub_0803C8D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    return r0;
}

// ROM Address: 0x0803C8D2..0x0803C960 (142 bytes, Thumb)
u32 sub_0803C8D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r0 = *(u8*)(r2);
    r2 = 0x290U; // (41 << 4)
    r1 = r1 + r2;
    *(u8*)(r1) = (u8)r0;
    r0 = 0x1U;
    return r0; // BX lr
    r0 = r0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r0 = 0x03001B94U; // [0x0803CB28]
    r7 = 0x0U;
    r5 = *(u32*)(r0);
    r4 = r1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803C9F2(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803C9F2(r0, r1, r2, r3);
    r1 = r4;
    r0 = 0x4C; // sp + 0x4C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803C91A
    r0 = stack[19]; // [sp + 0x4C]
    r1 = stack[21]; // [sp + 0x54]
    r2 = stack[22]; // [sp + 0x58]
    r0 = r0 + r1;
    r1 = stack[20]; // [sp + 0x50]
    stack[11] = r0; // [sp + 0x2C]
    r1 = r1 + r2;
    r0 = ((u32)((s32)r0 >> 1));
    r6 = ((u32)((s32)r1 >> 1));
    stack[12] = r1; // [sp + 0x30]
    stack[11] = r0; // [sp + 0x2C]
    stack[17] = r0; // [sp + 0x44]
    r0 = 0x34; // sp + 0x34
    stack[12] = r6; // [sp + 0x30]
    r1 = r4;
    stack[18] = r6; // [sp + 0x48]
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803C93E: BL 0x0800FDFA
    r0 = *(u8*)(r4 + 0x10);
    r2 = sp;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803C960(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0803C960(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_0803C956;
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_0803C968(r0, r1, r2, r3);
loc_0803C956:
    r0 = stack[22]; // [sp + 0x58]
    stack[2] = r6; // [sp + 0x8]
    r0 += 0x3U;
    stack[4] = r0; // [sp + 0x10]
    return sub_0803C968(r0, r1, r2, r3);
}

// ROM Address: 0x0803C960..0x0803C968 (8 bytes, Thumb)
u32 sub_0803C960(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[13]; // [sp + 0x34]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[15]; // [sp + 0x3C]
    stack[3] = r0; // [sp + 0xC]
    return r0;
}

// ROM Address: 0x0803C968..0x0803C986 (30 bytes, Thumb)
u32 sub_0803C968(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803C992(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0803C99E(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0803C986(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_0803C9A6(r0, r1, r2, r3);
    r0 = stack[17]; // [sp + 0x44]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[21]; // [sp + 0x54]
    r0 += 0x3U;
    stack[3] = r0; // [sp + 0xC]
    return sub_0803C9A6(r0, r1, r2, r3);
}

// ROM Address: 0x0803C986..0x0803C9F8 (114 bytes, Thumb)
u32 sub_0803C986(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[19]; // [sp + 0x4C]
    r0 -= 0x4U;
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[17]; // [sp + 0x44]
    stack[3] = r0; // [sp + 0xC]
    goto loc_0803C9A6;
    r0 = stack[20]; // [sp + 0x50]
    stack[2] = r0; // [sp + 0x8]
    r0 = stack[22]; // [sp + 0x58]
    r0 -= 0x6U;
    stack[4] = r0; // [sp + 0x10]
    goto loc_0803C9A6;
    r0 = stack[20]; // [sp + 0x50]
    stack[2] = r0; // [sp + 0x8]
    r0 = stack[14]; // [sp + 0x38]
    stack[4] = r0; // [sp + 0x10]
loc_0803C9A6:
    stack[8] = r4; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8098U; // [0x0803CB2C]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    *(u8*)(r3) = (u8)r7;
    stack[12] = r4; // [sp + 0x30]
    r1 = *(u32*)(r5);
    r0 = r5;
    r3 = *(u32*)(r1 + 0x24);
    r3 = r3 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803C9C6: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803C9F2;
    r0 = 0x0877C4B0U; // [0x0803CB30]
    r4 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803C9D4
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0803CB34]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x0803CB38]
    r3 = r7;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803C9EC
    goto loc_0803C9F4;
loc_0803C9F2:
    goto loc_0803C9F4;
loc_0803C9F4:
    return r0;
}

// ROM Address: 0x0803C9F8..0x0803CA10 (24 bytes, Thumb)
u32 sub_0803C9F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u16*)(r1 + 0x12);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0803CA10(r0, r1, r2, r3);
    r2 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r2;
    return sub_0803CA1A(r0, r1, r2, r3);
}

// ROM Address: 0x0803CA10..0x0803CA3A (42 bytes, Thumb)
u32 sub_0803CA10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r2 -= 0x10U;
    r2 = ((u32)((s32)r2 >> 3));
    r2 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0803CA24;
    r1 = r4;
    r0 = sub_0803C8FC(r0, r1, r2, r3); // 0x0803CA20
loc_0803CA24:
    r0 = *(u8*)(r4 + 0x11);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803CA38;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803CA34: BL __call_via_r3
loc_0803CA38:
    return r0;
}

// ROM Address: 0x0803CA3A..0x0803CAD8 (158 bytes, Thumb)
u32 sub_0803CA3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B94U; // [0x0803CB28]
    r4 = r1;
    r1 = *(u32*)(r0);
    r5 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803CAFA(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803CAFA(r0, r1, r2, r3);
    r0 = 0x28; // sp + 0x28
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803CA56
    r1 = r4;
    r0 = 0x18; // sp + 0x18
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803CA5E
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[8]; // [sp + 0x20]
    r2 = stack[9]; // [sp + 0x24]
    r1 = r0 + r1;
    r0 = stack[7]; // [sp + 0x1C]
    stack[2] = r1; // [sp + 0x8]
    r0 = r0 + r2;
    stack[3] = r0; // [sp + 0xC]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
    stack[5] = r0; // [sp + 0x14]
    stack[4] = r1; // [sp + 0x10]
    r1 = stack[12]; // [sp + 0x30]
    r0 = stack[10]; // [sp + 0x28]
    r2 = stack[13]; // [sp + 0x34]
    r1 = r0 + r1;
    r0 = stack[11]; // [sp + 0x2C]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[4]; // [sp + 0x10]
    r2 = stack[5]; // [sp + 0x14]
    r0 = r0 - r1;
    r1 = stack[3]; // [sp + 0xC]
    r6 = 0x1U;
    r1 = r1 - r2;
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[1] = r1; // [sp + 0x4]
    stack[0] = r0; // [sp + 0x0]
    if (cmp_lhs >= cmp_rhs) goto loc_0803CAB4;
    r2 = (u32)(-(s32)r0);
loc_0803CAB4:
    r3 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803CABC;
    r3 = (u32)(-(s32)r1);
loc_0803CABC:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_0803CAD0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803CACA;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_0803CADA(r0, r1, r2, r3);
loc_0803CACA:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_0803CADA(r0, r1, r2, r3);
loc_0803CAD0:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0803CAD8(r0, r1, r2, r3);
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_0803CADA(r0, r1, r2, r3);
}

// ROM Address: 0x0803CAD8..0x0803CAFE (38 bytes, Thumb)
u32 sub_0803CAD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r4 + 0x10) = (u8)r6;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803CADC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803CAE8;
    r1 = 0x0804C6B4U /* &VTable_0804C6B4 */; // [0x0803CB3C]
    *(u32*)(r0) = (u32)r1;
loc_0803CAE8:
    r5 = r0;
    r1 = 0x4U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803CAEE
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803CAF6
    return r0;
}

// ROM Address: 0x0803CAFE..0x0803CB0C (14 bytes, Thumb)
u32 sub_0803CAFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r1 + 0x58);
    r0 = *(u32*)(r0 + 0x64);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0803CB0C(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0803CB0E(r0, r1, r2, r3);
}

// ROM Address: 0x0803CB0C..0x0803CB7E (114 bytes, Thumb)
u32 sub_0803CB0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = 0x1U;
    r0 = r1 - r0;
    return r0; // BX lr
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803CB18: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803CB24;
    r1 = 0x0804AD08U /* &VTable_0804AD08 */; // [0x0803CB40]
    *(u32*)(r0) = (u32)r1;
loc_0803CB24:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r5; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    r7 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r4; r6 += 4;
    *(u32*)r6 = r5; r6 += 4;
    *(u32*)r6 = r7; r6 += 4;
    r4 = (r0 >> 32);
    r5 = 0x20; // sp + 0x20
    r4 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r2 = *(u16*)(r1 + 0x12);
    r0 = 0x0U;
    r2 += 0x1U;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 48;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803CB66;
    r2 -= 0x30U;
    r0 = ((u32)((s32)r2 >> 3));
loc_0803CB66:
    r2 = *(u32*)(r1 + 0x50);
    r2 = *(u32*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) return sub_0803CB7E(r0, r1, r2, r3);
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803CB78: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0803CB7E..0x0803CB82 (4 bytes, Thumb)
u32 sub_0803CB7E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return sub_0803CB7C(r0, r1, r2, r3);
}

// ROM Address: 0x0803CB82..0x0803CBE6 (100 bytes, Thumb)
u32 sub_0803CB82(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0803CD24]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0803CD28]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0803CBA0;
    r1 = r4;
    r1 += 0x18CU;
loc_0803CBA0:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0803CBA2
    r1 = 0x4U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803CBAA
    r1 = 0x030032F4U; // [0x0803CD2C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803CBB2
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0803CD30]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803CBCC;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803CBC8: BL __call_via_r3
loc_0803CBCC:
    return r0;
    r0 = *(u32*)(r1 + 0x58);
    r4 = r1;
    r0 = *(u32*)(r0 + 0x64);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_0803CBE6(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803CBE6..0x0803CD1E (312 bytes, Thumb)
u32 sub_0803CBE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    if (cmp_lhs != cmp_rhs) goto loc_0803CCBE;
    r0 = 0x03001C34U; // [0x0803CD24]
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803CBFE;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803CC02;
loc_0803CBFE:
    r0 = 0x0U;
    return sub_0803CBE2(r0, r1, r2, r3);
loc_0803CC02:
    r1 = r5;
    r0 = 0x5C; // sp + 0x5C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803CC06
    r1 = r4;
    r0 = 0x4C; // sp + 0x4C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803CC0E
    r0 = stack[19]; // [sp + 0x4C]
    r1 = stack[21]; // [sp + 0x54]
    r2 = stack[22]; // [sp + 0x58]
    r0 = r0 + r1;
    r1 = stack[20]; // [sp + 0x50]
    stack[15] = r0; // [sp + 0x3C]
    r1 = r1 + r2;
    r0 = ((u32)((s32)r0 >> 1));
    r3 = ((u32)((s32)r1 >> 1));
    stack[17] = r0; // [sp + 0x44]
    stack[15] = r0; // [sp + 0x3C]
    stack[16] = r1; // [sp + 0x40]
    r1 = stack[25]; // [sp + 0x64]
    r0 = stack[23]; // [sp + 0x5C]
    stack[16] = r3; // [sp + 0x40]
    r1 = r0 + r1;
    r0 = stack[24]; // [sp + 0x60]
    stack[18] = r3; // [sp + 0x48]
    r2 = stack[26]; // [sp + 0x68]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[17]; // [sp + 0x44]
    r2 = stack[18]; // [sp + 0x48]
    r0 = r0 - r1;
    r1 = stack[3]; // [sp + 0xC]
    stack[0] = r0; // [sp + 0x0]
    r6 = r1 - r2;
    r1 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[1] = r6; // [sp + 0x4]
    if (cmp_lhs >= cmp_rhs) goto loc_0803CC62;
    r1 = (u32)(-(s32)r0);
loc_0803CC62:
    r2 = r6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803CC6A;
    r2 = (u32)(-(s32)r2);
loc_0803CC6A:
    r7 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0803CC9C;
    stack[6] = r3; // [sp + 0x18]
    r1 = stack[22]; // [sp + 0x58]
    r1 += 0x3U;
    stack[8] = r1; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803CC8C;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[17]; // [sp + 0x44]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[21]; // [sp + 0x54]
    r0 += 0x3U;
    stack[7] = r0; // [sp + 0x1C]
    goto loc_0803CCCC;
loc_0803CC8C:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[19]; // [sp + 0x4C]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[17]; // [sp + 0x44]
    stack[7] = r0; // [sp + 0x1C]
    goto loc_0803CCCC;
loc_0803CC9C:
    r1 = r4;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803CCA0: BL 0x0800FDFA
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[2]; // [sp + 0x8]
    stack[7] = r0; // [sp + 0x1C]
    if (cmp_lhs <= cmp_rhs) goto loc_0803CCC0;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[22]; // [sp + 0x58]
    r0 -= 0x6U;
    stack[8] = r0; // [sp + 0x20]
    goto loc_0803CCCC;
loc_0803CCBE:
    goto loc_0803CD1A;
loc_0803CCC0:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[1]; // [sp + 0x4]
    stack[8] = r0; // [sp + 0x20]
loc_0803CCCC:
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r2 = 0x10; // sp + 0x10
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x086B8098U; // [0x0803CD34]
    r3 = 0x0; // sp + 0x0
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x600U; // (3 << 9)
    stack[10] = r0; // [sp + 0x28]
    *(u8*)(r3 + 0x10) = (u8)r7;
    stack[16] = r4; // [sp + 0x40]
    r1 = *(u32*)(r5);
    r0 = r5;
    r3 = *(u32*)(r1 + 0x24);
    r3 = r3 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803CCF0: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803CD1A;
    r0 = 0x0877C4C0U; // [0x0803CD38]
    r4 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803CCFE
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0803CD3C]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x0803CD40]
    r3 = r7;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803CD16
loc_0803CD1A:
    r0 = 0x0U;
    return sub_0803CBE2(r0, r1, r2, r3);
}

// ROM Address: 0x0803CD1E..0x0803CD24 (6 bytes, Thumb)
u32 sub_0803CD1E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030032F4U; // [0x0803CD2C]
    r0 += 0x4U;
    return r0; // BX lr
}

// ROM Address: 0x0803CD24..0x0803CD26 (2 bytes, Thumb)
u32 sub_0803CD24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    return r0;
}

// ROM Address: 0x0803CD26..0x0803CD94 (110 bytes, Thumb)
u32 sub_0803CD26(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r2 += 0xF4U;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    *(u32*)r4 = r6; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    r7 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r3 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    *(u8*)(r1 + 0x11) = (u8)r2;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r6 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    r5 = (r0 >> 3);
    *(u8*)(r1 + 0x11) = (u8)r5;
    r1 = *(u32*)(r6 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803CDE6(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) return sub_0803CDE6(r0, r1, r2, r3);
    r7 = 0x0877C4D0U; // [0x0803CE64]
    r0 = *(u32*)(r7);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0803CD76
    r1 = 0x600U; // (3 << 9)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0803CD94(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803CD8C: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0803CD94..0x0803CE0E (122 bytes, Thumb)
u32 sub_0803CD94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
    stack[4] = r1; // [sp + 0x10]
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0877C4D0U; // [0x0803CE64]
    r3 = 0x2U;
    r1 += 0x4U;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = stack[3]; // [sp + 0xC]
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r0 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r0 = r2 + r0;
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    r1 = stack[2]; // [sp + 0x8]
    stack[5] = r0; // [sp + 0x14]
    r2 = r4;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x14; // sp + 0x14
    r0 = 0x0U;
    r0 = sub_08036FA2(r0, r1, r2, r3); // 0x0803CDD8
    r1 = r0;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = *(u32*)(r7);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803CDE2: BL 0x0801191A
    r0 = *(u32*)(r4 + 0x50);
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0803CDF8;
    r5 += 0x1U;
    r0 = (r5 << 31);
    r0 = (r0 >> 31);
    r0 += 0x3U;
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_0803CDF8:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 180;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0803CD90(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803CE08: BL __call_via_r3
    return sub_0803CD90(r0, r1, r2, r3);
}

// ROM Address: 0x0803CE4C..0x0803CE64 (24 bytes, Thumb)
u32 sub_0803CE4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = r6 - r0;
    return r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803CE56: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803CE62;
    r1 = 0x0804C20CU /* &VTable_0804C20C */; // [0x0803CE6C]
    *(u32*)(r0) = (u32)r1;
loc_0803CE62:
    return r0;
}

// ROM Address: 0x0803CE64..0x0803CE70 (12 bytes, Thumb)
u32 sub_0803CE64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    r7 = (r6 >> 1);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803CE0C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u32*)r2 = r2; r2 += 4;
    *(u32*)r2 = r3; r2 += 4;
    r4 = (r0 >> 32);
    return r0;
}
