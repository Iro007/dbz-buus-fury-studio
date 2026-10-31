/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #30
 * Address Range: 0x08050750..0x08050F84 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08050750..0x080507BE (110 bytes, Thumb)
u32 sub_08050750(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0805075C;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08050758: BL 0x0803D5B8
loc_0805075C:
    return r0;
    r0 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0805076C;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08050768: BL 0x0803D5B8
loc_0805076C:
    return r0;
    r0 = r0;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050782;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805077A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805078E;
loc_08050782:
    r1 = *(u32*)(r4);
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r4 + 0x4);
    *(u32*)(r0 + 0x4) = (u32)r2;
    r2 = *(u32*)(r4 + 0x8);
    *(u32*)(r0 + 0x8) = (u32)r2;
loc_0805078E:
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0805079C;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08050798: BL 0x0803D5B8
loc_0805079C:
    return r0;
    r0 = r0;
    r5 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r6 = stack[10]; // [sp + 0x28]
    if (cmp_lhs != cmp_rhs) return sub_080507BE(r0, r1, r2, r3);
    r0 = 0x34U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080507B0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080507BE(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080507BE..0x08050818 (90 bytes, Thumb)
u32 sub_080507BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08050818]
    r7 = 0x0871DD38U; // [0x0805081C]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r7 + 0x4);
    r1 = r5;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080507CA
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_080507E2;
    r1 = r5;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x080507D6: BL 0x08011732
    r1 = r5;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080507DE
loc_080507E2:
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r1 = 0x0804BA50U /* &VTable_0804BA50 */; // [0x08050820]
    *(u16*)(r4 + 0xC) = (u16)r0;
    *(u32*)(r4) = (u32)r1;
    r1 = stack[2]; // [sp + 0x8]
    r0 = (r0 << 5);
    *(u32*)(r4 + 0x28) = (u32)r1;
    *(u8*)(r4 + 0x8) = (u8)r6;
    r3 = *(u8*)(r1 + 0x2);
    r5 = *(u8*)(r1 + 0x3);
    r1 = *(u32*)(r1 + 0x8);
    r3 *= r5;
    r2 = r3;
    r3 = 0x06010000U; // [0x08050824]
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08050802: BL 0x08049138
    r0 = 0x0804CA80U /* &VTable_0804CA80 */; // [0x08050828]
    *(u32*)(r4) = (u32)r0;
    r1 = stack[3]; // [sp + 0xC]
    r0 = r4;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r4 + 0x30) = (u32)r1;
    *(u32*)(r4 + 0x2C) = (u32)r2;
    return sub_080507BA(r0, r1, r2, r3);
}

// ROM Address: 0x08050818..0x08050820 (8 bytes, Thumb)
u32 sub_08050818(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    if (cmp_lhs <= cmp_rhs) return sub_08050890(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x0805082C..0x08050896 (106 bytes, Thumb)
u32 sub_0805082C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r3;
    r5 = r2;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050842;
    r0 = 0x28U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805083A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805085C;
loc_08050842:
    r1 = 0x0804AE84U; // [0x08050860]
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r1 = 0x0804D0A4U /* &VTable_0804D0A4 */; // [0x08050864]
    r0 -= 0x8U;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r2;
    *(u32*)(r0 + 0x14) = (u32)r3;
    *(u32*)(r0 + 0x18) = (u32)r4;
    *(u32*)(r0 + 0x8) = (u32)r6;
    r1 = 0x24U;
    *(u8*)(r1 + r0) = (u8)r5;
loc_0805085C:
    return r0;
    r0 = r0;
    r6 = 0x210; // sp + 0x210
    r4 = (r0 >> 32);
    if (cmp_lhs == cmp_rhs) return sub_080507B0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050874;
    r0 = 0x2U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08050870: BL 0x0803D5B8
loc_08050874:
    return r0;
    r0 = r0;
    r5 = stack[23]; // [sp + 0x5C]
    r6 = stack[24]; // [sp + 0x60]
    r7 = stack[25]; // [sp + 0x64]
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08050896(r0, r1, r2, r3);
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08050888: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08050896(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08050896..0x080508C0 (42 bytes, Thumb)
u32 sub_08050896(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[5] = r5; // [sp + 0x14]
    stack[6] = r6; // [sp + 0x18]
    stack[7] = r7; // [sp + 0x1C]
    r2 = 0x50; // sp + 0x50
    r0 = *(u32*)r2; r2 += 4;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r2; // [sp + 0x10]
    r2 = 0x48; // sp + 0x48
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    stack[0] = r1; // [sp + 0x0]
    r3 = 0x28; // sp + 0x28
    stack[1] = r2; // [sp + 0x4]
    r1 = *(u32*)r3; r3 += 4;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = r4;
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x080508B4
    r0 = 0x0804D82CU /* &VTable_0804D82C */; // [0x080508C0]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_08050892(r0, r1, r2, r3);
}

// ROM Address: 0x080508C4..0x080508D4 (16 bytes, Thumb)
u32 sub_080508C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x080508D4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080508D2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080508CE: BL 0x0803D63C
loc_080508D2:
    return r0;
}

// ROM Address: 0x080508D4..0x080508D6 (2 bytes, Thumb)
u32 sub_080508D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    return r0;
}

// ROM Address: 0x080508D6..0x080508F4 (30 bytes, Thumb)
u32 sub_080508D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x08049238U /* &VTable_08049238 */; // [0x080508E0]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    stack[56] = r2; // [sp + 0xE0]
    r4 = (r0 >> 32);
    r2 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x080508F4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080508F2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080508EE: BL 0x0803D63C
loc_080508F2:
    return r0;
}

// ROM Address: 0x080508F4..0x080508F8 (4 bytes, Thumb)
u32 sub_080508F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080508F8..0x08050908 (16 bytes, Thumb)
u32 sub_080508F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0804E454U /* &VTable_0804E454 */; // [0x08050908]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050906;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050902: BL 0x0803D63C
loc_08050906:
    return r0;
}

// ROM Address: 0x08050908..0x0805090A (2 bytes, Thumb)
u32 sub_08050908(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080501B4(r0, r1, r2, r3);
}

// ROM Address: 0x0805090A..0x0805094C (66 bytes, Thumb)
u32 sub_0805090A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0804929CU /* &VTable_0804929C */; // [0x08050914]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    r5 = r1;
    r1 = 0x0U;
    r4 = r0;
    r0 += 0x8U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08050922: BL 0x0803F58C
    r0 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050938]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08050934;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050930: BL 0x0803D63C
loc_08050934:
    return r0;
    r0 = r0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x0805094C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805094A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050946: BL 0x0803D63C
loc_0805094A:
    return r0;
}

// ROM Address: 0x0805094C..0x08050950 (4 bytes, Thumb)
u32 sub_0805094C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050950..0x08050960 (16 bytes, Thumb)
u32 sub_08050950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08050960]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805095E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805095A: BL 0x0803D63C
loc_0805095E:
    return r0;
}

// ROM Address: 0x08050960..0x08050964 (4 bytes, Thumb)
u32 sub_08050960(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050964..0x08050974 (16 bytes, Thumb)
u32 sub_08050964(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08050974]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050972;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805096E: BL 0x0803D63C
loc_08050972:
    return r0;
}

// ROM Address: 0x08050974..0x08050978 (4 bytes, Thumb)
u32 sub_08050974(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050978..0x08050988 (16 bytes, Thumb)
u32 sub_08050978(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050988]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050986;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050982: BL 0x0803D63C
loc_08050986:
    return r0;
}

// ROM Address: 0x08050988..0x0805098C (4 bytes, Thumb)
u32 sub_08050988(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0805098C..0x0805099C (16 bytes, Thumb)
u32 sub_0805098C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x0805099C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805099A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050996: BL 0x0803D63C
loc_0805099A:
    return r0;
}

// ROM Address: 0x0805099C..0x080509A0 (4 bytes, Thumb)
u32 sub_0805099C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080509A0..0x080509B0 (16 bytes, Thumb)
u32 sub_080509A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0804E47CU; // [0x080509B0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080509AE;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080509AA: BL 0x0803D63C
loc_080509AE:
    return r0;
}

// ROM Address: 0x080509B0..0x080509B2 (2 bytes, Thumb)
u32 sub_080509B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080502AC(r0, r1, r2, r3);
}

// ROM Address: 0x080509B4..0x080509C4 (16 bytes, Thumb)
u32 sub_080509B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x080509C4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080509C2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080509BE: BL 0x0803D63C
loc_080509C2:
    return r0;
}

// ROM Address: 0x080509C4..0x080509C6 (2 bytes, Thumb)
u32 sub_080509C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    return r0;
}

// ROM Address: 0x080509C6..0x080509E4 (30 bytes, Thumb)
u32 sub_080509C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x080493E4U /* &VTable_080493E4 */; // [0x080509D0]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    r2 = 0x0804929CU /* &VTable_0804929C */; // [0x080509E4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080509E2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080509DE: BL 0x0803D63C
loc_080509E2:
    return r0;
}

// ROM Address: 0x080509E4..0x080509E8 (4 bytes, Thumb)
u32 sub_080509E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080509E8..0x080509F8 (16 bytes, Thumb)
u32 sub_080509E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0804E47CU; // [0x080509F8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080509F6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080509F2: BL 0x0803D63C
loc_080509F6:
    return r0;
}

// ROM Address: 0x080509F8..0x080509FA (2 bytes, Thumb)
u32 sub_080509F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080502F4(r0, r1, r2, r3);
}

// ROM Address: 0x080509FC..0x08050A0C (16 bytes, Thumb)
u32 sub_080509FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050A0C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050A0A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050A06: BL 0x0803D63C
loc_08050A0A:
    return r0;
}

// ROM Address: 0x08050A0C..0x08050A10 (4 bytes, Thumb)
u32 sub_08050A0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050A10..0x08050A20 (16 bytes, Thumb)
u32 sub_08050A10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050A20]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050A1E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050A1A: BL 0x0803D63C
loc_08050A1E:
    return r0;
}

// ROM Address: 0x08050A20..0x08050A22 (2 bytes, Thumb)
u32 sub_08050A20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    return r0;
}

// ROM Address: 0x08050A24..0x08050A4C (40 bytes, Thumb)
u32 sub_08050A24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050A2C: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050A3A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050A36: BL 0x0803D63C
loc_08050A3A:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050A4C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050A4A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050A46: BL 0x0803D63C
loc_08050A4A:
    return r0;
}

// ROM Address: 0x08050A4C..0x08050A50 (4 bytes, Thumb)
u32 sub_08050A4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050A50..0x08050A90 (64 bytes, Thumb)
u32 sub_08050A50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050A58: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050A66;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050A62: BL 0x0803D63C
loc_08050A66:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050A70: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050A7E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050A7A: BL 0x0803D63C
loc_08050A7E:
    return r0;
    r2 = 0x0804E47CU; // [0x08050A90]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050A8E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050A8A: BL 0x0803D63C
loc_08050A8E:
    return r0;
}

// ROM Address: 0x08050A90..0x08050A92 (2 bytes, Thumb)
u32 sub_08050A90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0805038C(r0, r1, r2, r3);
}

// ROM Address: 0x08050A94..0x08050AA4 (16 bytes, Thumb)
u32 sub_08050A94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x08050AA4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050AA2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050A9E: BL 0x0803D63C
loc_08050AA2:
    return r0;
}

// ROM Address: 0x08050AA4..0x08050AA8 (4 bytes, Thumb)
u32 sub_08050AA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050AA8..0x08050AB8 (16 bytes, Thumb)
u32 sub_08050AA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050AB8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050AB6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050AB2: BL 0x0803D63C
loc_08050AB6:
    return r0;
}

// ROM Address: 0x08050AB8..0x08050ABC (4 bytes, Thumb)
u32 sub_08050AB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050ABC..0x08050AE4 (40 bytes, Thumb)
u32 sub_08050ABC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050AC4: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050AD2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050ACE: BL 0x0803D63C
loc_08050AD2:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050AE4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050AE2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050ADE: BL 0x0803D63C
loc_08050AE2:
    return r0;
}

// ROM Address: 0x08050AE4..0x08050AE8 (4 bytes, Thumb)
u32 sub_08050AE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050AE8..0x08050AF8 (16 bytes, Thumb)
u32 sub_08050AE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0804E47CU; // [0x08050AF8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050AF6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050AF2: BL 0x0803D63C
loc_08050AF6:
    return r0;
}

// ROM Address: 0x08050AF8..0x08050AFA (2 bytes, Thumb)
u32 sub_08050AF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080503F4(r0, r1, r2, r3);
}

// ROM Address: 0x08050AFC..0x08050B0C (16 bytes, Thumb)
u32 sub_08050AFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049238U /* &VTable_08049238 */; // [0x08050B0C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050B0A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050B06: BL 0x0803D63C
loc_08050B0A:
    return r0;
}

// ROM Address: 0x08050B0C..0x08050B10 (4 bytes, Thumb)
u32 sub_08050B0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[56] = r2; // [sp + 0xE0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050B10..0x08050B20 (16 bytes, Thumb)
u32 sub_08050B10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049238U /* &VTable_08049238 */; // [0x08050B20]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050B1E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050B1A: BL 0x0803D63C
loc_08050B1E:
    return r0;
}

// ROM Address: 0x08050B20..0x08050B24 (4 bytes, Thumb)
u32 sub_08050B20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[56] = r2; // [sp + 0xE0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050B24..0x08050B34 (16 bytes, Thumb)
u32 sub_08050B24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x08050B34]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050B32;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050B2E: BL 0x0803D63C
loc_08050B32:
    return r0;
}

// ROM Address: 0x08050B34..0x08050B38 (4 bytes, Thumb)
u32 sub_08050B34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050B38..0x08050B78 (64 bytes, Thumb)
u32 sub_08050B38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08050B58]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08050B5C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08050B50;
    r0 = 0x08054FBCU; // [0x08050B60]
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08050B4C
loc_08050B50:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08050B64]
    *(u32*)(r4) = (u32)r0;
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r7 = 0xBD38FBF3U; // [0x08050E54]
    r5 = (r0 >> 32);
    return sub_08050410(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x08050B78]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050B76;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050B72: BL 0x0803D63C
loc_08050B76:
    return r0;
}

// ROM Address: 0x08050B78..0x08050B7C (4 bytes, Thumb)
u32 sub_08050B78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050B7C..0x08050B8C (16 bytes, Thumb)
u32 sub_08050B7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x08050B8C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050B8A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050B86: BL 0x0803D63C
loc_08050B8A:
    return r0;
}

// ROM Address: 0x08050B8C..0x08050B90 (4 bytes, Thumb)
u32 sub_08050B8C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050B90..0x08050BA0 (16 bytes, Thumb)
u32 sub_08050B90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050BA0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050B9E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050B9A: BL 0x0803D63C
loc_08050B9E:
    return r0;
}

// ROM Address: 0x08050BA0..0x08050BA4 (4 bytes, Thumb)
u32 sub_08050BA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050BA4..0x08050C0E (106 bytes, Thumb)
u32 sub_08050BA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050BAC: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050BBA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050BB6: BL 0x0803D63C
loc_08050BBA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050BC4: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050BD2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050BCE: BL 0x0803D63C
loc_08050BD2:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050BDC: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050BEA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050BE6: BL 0x0803D63C
loc_08050BEA:
    return r0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x08050C10]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08050BFE: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050C0C;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050C08: BL 0x0803D63C
loc_08050C0C:
    return r0;
}

// ROM Address: 0x08050C0E..0x08050C12 (4 bytes, Thumb)
u32 sub_08050C0E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_0805049C(r0, r1, r2, r3);
}

// ROM Address: 0x08050C14..0x08050C24 (16 bytes, Thumb)
u32 sub_08050C14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08050C24]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050C22;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050C1E: BL 0x0803D63C
loc_08050C22:
    return r0;
}

// ROM Address: 0x08050C24..0x08050C28 (4 bytes, Thumb)
u32 sub_08050C24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050C28..0x08050C38 (16 bytes, Thumb)
u32 sub_08050C28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08050C38]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050C36;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050C32: BL 0x0803D63C
loc_08050C36:
    return r0;
}

// ROM Address: 0x08050C38..0x08050C3C (4 bytes, Thumb)
u32 sub_08050C38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050C3C..0x08050C4C (16 bytes, Thumb)
u32 sub_08050C3C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08050C4C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050C4A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050C46: BL 0x0803D63C
loc_08050C4A:
    return r0;
}

// ROM Address: 0x08050C4C..0x08050C4E (2 bytes, Thumb)
u32 sub_08050C4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    return r0;
}

// ROM Address: 0x08050C4E..0x08050C6C (30 bytes, Thumb)
u32 sub_08050C4E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0804984CU /* &VTable_0804984C */; // [0x08050C58]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r0 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    r2 = 0x0804E47CU; // [0x08050C6C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050C6A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050C66: BL 0x0803D63C
loc_08050C6A:
    return r0;
}

// ROM Address: 0x08050C6C..0x08050C6E (2 bytes, Thumb)
u32 sub_08050C6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08050568(r0, r1, r2, r3);
}

// ROM Address: 0x08050C70..0x08050CB0 (64 bytes, Thumb)
u32 sub_08050C70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050C78: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050C86;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050C82: BL 0x0803D63C
loc_08050C86:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050C90: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050C9E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050C9A: BL 0x0803D63C
loc_08050C9E:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050CB0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050CAE;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050CAA: BL 0x0803D63C
loc_08050CAE:
    return r0;
}

// ROM Address: 0x08050CB0..0x08050CB2 (2 bytes, Thumb)
u32 sub_08050CB0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    return r0;
}

// ROM Address: 0x08050CB4..0x08050CD6 (34 bytes, Thumb)
u32 sub_08050CB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x08050CD8]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08050CC6: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050CD4;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050CD0: BL 0x0803D63C
loc_08050CD4:
    return r0;
}

// ROM Address: 0x08050CD6..0x08050CDA (4 bytes, Thumb)
u32 sub_08050CD6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_08050564(r0, r1, r2, r3);
}

// ROM Address: 0x08050CDC..0x08050D04 (40 bytes, Thumb)
u32 sub_08050CDC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08050CE4: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050CF2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050CEE: BL 0x0803D63C
loc_08050CF2:
    return r0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08050D04]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050D02;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050CFE: BL 0x0803D63C
loc_08050D02:
    return r0;
}

// ROM Address: 0x08050D04..0x08050D08 (4 bytes, Thumb)
u32 sub_08050D04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050D08..0x08050D18 (16 bytes, Thumb)
u32 sub_08050D08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08050D18]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050D16;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050D12: BL 0x0803D63C
loc_08050D16:
    return r0;
}

// ROM Address: 0x08050D18..0x08050D1C (4 bytes, Thumb)
u32 sub_08050D18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050D1C..0x08050D2C (16 bytes, Thumb)
u32 sub_08050D1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x08050D2C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050D2A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050D26: BL 0x0803D63C
loc_08050D2A:
    return r0;
}

// ROM Address: 0x08050D2C..0x08050D30 (4 bytes, Thumb)
u32 sub_08050D2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// Evidence: tools/behaviour/test_table.py::test_object_install_handler_table1_stores_the_handler_table_word_at_0_and_reaches_the_handler_the_object_at_4_names runs it on a crafted object at 0x02000000 and asserts the one store it makes and the one call target; stores the handler-table word 0x08049ACC at +0 and reaches the handler the object at +4 names
// ROM Address: 0x08050D30..0x08050D58 (40 bytes, Thumb)
u32 Object_InstallHandlerTable1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08050D58]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050D4C;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08050D48: BL __call_via_r3
loc_08050D4C:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050D56;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050D52: BL 0x0803D63C
loc_08050D56:
    return r0;
}

// ROM Address: 0x08050D58..0x08050D5C (4 bytes, Thumb)
u32 sub_08050D58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050D5C..0x08050D6C (16 bytes, Thumb)
u32 sub_08050D5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049AE0U /* &VTable_08049AE0 */; // [0x08050D6C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050D6A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050D66: BL 0x0803D63C
loc_08050D6A:
    return r0;
}

// ROM Address: 0x08050D6C..0x08050D6E (2 bytes, Thumb)
u32 sub_08050D6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[224]; // [sp + 0x380]
    return r0;
}

// ROM Address: 0x08050D6E..0x08050DD4 (102 bytes, Thumb)
u32 sub_08050D6E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x08050D78]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050D84: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050D92;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050D8E: BL 0x0803D63C
loc_08050D92:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050D9C: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050DAA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050DA6: BL 0x0803D63C
loc_08050DAA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050DB4: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050DC2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050DBE: BL 0x0803D63C
loc_08050DC2:
    return r0;
    r2 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x08050DD4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050DD2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050DCE: BL 0x0803D63C
loc_08050DD2:
    return r0;
}

// ROM Address: 0x08050DD4..0x08050DD8 (4 bytes, Thumb)
u32 sub_08050DD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050DD8..0x08050DFA (34 bytes, Thumb)
u32 sub_08050DD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x08050DFC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08050DEA: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050DF8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050DF4: BL 0x0803D63C
loc_08050DF8:
    return r0;
}

// ROM Address: 0x08050E00..0x08050E22 (34 bytes, Thumb)
u32 sub_08050E00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x08050E24]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08050E12: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050E20;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050E1C: BL 0x0803D63C
loc_08050E20:
    return r0;
}

// ROM Address: 0x08050E22..0x08050E26 (4 bytes, Thumb)
u32 sub_08050E22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_080506B0(r0, r1, r2, r3);
}

// ROM Address: 0x08050E28..0x08050E68 (64 bytes, Thumb)
u32 sub_08050E28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08050E30: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050E3E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050E3A: BL 0x0803D63C
loc_08050E3E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08050E48: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050E56;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050E52: BL 0x0803D63C
loc_08050E56:
    return r0;
    r2 = 0x0804929CU /* &VTable_0804929C */; // [0x08050E68]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050E66;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050E62: BL 0x0803D63C
loc_08050E66:
    return r0;
}

// ROM Address: 0x08050E68..0x08050E6C (4 bytes, Thumb)
u32 sub_08050E68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050E6C..0x08050EAC (64 bytes, Thumb)
u32 sub_08050E6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_Destroy11(r0, r1, r2, r3); // 0x08050E74: BL 0x080185B8
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050E82;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050E7E: BL 0x0803D63C
loc_08050E82:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050E8C: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050E9A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050E96: BL 0x0803D63C
loc_08050E9A:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08050EAC]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050EAA;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050EA6: BL 0x0803D63C
loc_08050EAA:
    return r0;
}

// ROM Address: 0x08050EAC..0x08050EB0 (4 bytes, Thumb)
u32 sub_08050EAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050EB0..0x08050EEA (58 bytes, Thumb)
u32 sub_08050EB0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08050EB8: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050EC6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050EC2: BL 0x0803D63C
loc_08050EC6:
    return r0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x08050EEC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08050EDA: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050EE8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050EE4: BL 0x0803D63C
loc_08050EE8:
    return r0;
}

// ROM Address: 0x08050EEA..0x08050EEE (4 bytes, Thumb)
u32 sub_08050EEA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_08050778(r0, r1, r2, r3);
}

// ROM Address: 0x08050EF0..0x08050F48 (88 bytes, Thumb)
u32 sub_08050EF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08050EF8: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050F06;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050F02: BL 0x0803D63C
loc_08050F06:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08050F10: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050F1E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050F1A: BL 0x0803D63C
loc_08050F1E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08050F28: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050F36;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050F32: BL 0x0803D63C
loc_08050F36:
    return r0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08050F48]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050F46;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050F42: BL 0x0803D63C
loc_08050F46:
    return r0;
}

// ROM Address: 0x08050F48..0x08050F4C (4 bytes, Thumb)
u32 sub_08050F48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050F4C..0x08050F5C (16 bytes, Thumb)
u32 sub_08050F4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x08050F5C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050F5A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050F56: BL 0x0803D63C
loc_08050F5A:
    return r0;
}

// ROM Address: 0x08050F5C..0x08050F60 (4 bytes, Thumb)
u32 sub_08050F5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050F60..0x08050F70 (16 bytes, Thumb)
u32 sub_08050F60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x08050F70]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050F6E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050F6A: BL 0x0803D63C
loc_08050F6E:
    return r0;
}

// ROM Address: 0x08050F70..0x08050F74 (4 bytes, Thumb)
u32 sub_08050F70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050F74..0x08050F84 (16 bytes, Thumb)
u32 sub_08050F74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049AE0U /* &VTable_08049AE0 */; // [0x08050F84]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050F82;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050F7E: BL 0x0803D63C
loc_08050F82:
    return r0;
}

// ROM Address: 0x08050F84..0x08050F86 (2 bytes, Thumb)
u32 sub_08050F84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[224]; // [sp + 0x380]
    return r0;
}
