/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #19
 * Address Range: 0x08036CB6..0x080391BA (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08036CB6..0x08036D40 (138 bytes, Thumb)
u32 sub_08036CB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x38);
    r0 = *(u16*)(r0 + 0xC);
    r3 = *(u8*)(r1 + 0x2);
    r4 = *(u8*)(r1 + 0x3);
    r0 = (r0 << 5);
    r1 = *(u32*)(r1 + 0x8);
    r3 *= r4;
    r2 = r3;
    r3 = 0x06010000U; // [0x08036D78]
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08036CCA: BL 0x08049138
    r0 = 0x0U;
    return sub_08036CB2(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08036CD8: BL 0x08046AA2
    r0 = 0x0U;
    return sub_08036CB2(r0, r1, r2, r3);
    r2 = *(u32*)(r0 + 0x10);
    r3 = *(u32*)(r0 + 0x14);
    r2 += 0x10U;
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r2; // [sp + 0xC]
    r3 += 0x10U;
    r2 += 0x20U;
    stack[5] = r2; // [sp + 0x14]
    r2 = r3;
    r2 += 0x20U;
    stack[6] = r2; // [sp + 0x18]
    stack[2] = r3; // [sp + 0x8]
    stack[4] = r3; // [sp + 0x10]
    r2 = *(u32*)(r7);
    r3 = stack[5]; // [sp + 0x14]
    r6 = 0xC; // sp + 0xC
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08036D40(r0, r1, r2, r3);
    r2 = stack[3]; // [sp + 0xC]
    r3 = *(u32*)(r7 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08036D40(r0, r1, r2, r3);
    r2 = *(u32*)(r7 + 0x4);
    r3 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08036D40(r0, r1, r2, r3);
    r2 = stack[4]; // [sp + 0x10]
    r3 = *(u32*)(r7 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08036D40(r0, r1, r2, r3);
    r5 = 0x0875F7ACU; // [0x08036D74]
    r2 = r1;
    r3 = *(u32*)(r0 + 0x38);
    r1 += 0xCU;
    r5 += 0x18U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08036D2C;
    r1 = r5;
loc_08036D2C:
    *(u32*)(r0 + 0x38) = (u32)r1;
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    *(u32*)r7 = r6; r7 += 4;
    r0 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_08036D3A;
    r4 = 0x0U;
loc_08036D3A:
    r0 = r4;
    return sub_08036CB2(r0, r1, r2, r3);
    return sub_08036D62(r0, r1, r2, r3);
}

// ROM Address: 0x08036D40..0x08036D44 (4 bytes, Thumb)
u32 sub_08036D40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08036CB2(r0, r1, r2, r3);
}

// ROM Address: 0x08036D44..0x08036D62 (30 bytes, Thumb)
u32 sub_08036D44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036D4A;
    r4 = 0x0U;
loc_08036D4A:
    r2 = r4;
    r0 = r6;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08036D50
    r2 = r4;
    r0 = 0xC; // sp + 0xC
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08036D5A
    r0 = 0x0U;
    return sub_08036CB2(r0, r1, r2, r3);
}

// ROM Address: 0x08036D62..0x08036D66 (4 bytes, Thumb)
u32 sub_08036D62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08036CB2(r0, r1, r2, r3);
}

// ROM Address: 0x08036D86..0x08036E1E (152 bytes, Thumb)
u32 sub_08036D86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0875F7F4U; // [0x08036E54]
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x08036D8C
    r0 = *(u32*)(r5 + 0x4);
    r2 = *(u32*)(r4 + 0x8);
    r6 = r0;
    r2 = (r2 << 10);
    *(u32*)(r0 + 0x8) = (u32)r2;
    r0 = *(u32*)(r4 + 0x8);
    r6 += 0x10U;
    r0 = sub_08054ADC(r0, r1, r2, r3); // 0x08036D9E: BL 0x08054ADC
    r1 = 0x3BB7E762U; // [0x08036E58]
    r0 = sub_08054B3C(r0, r1, r2, r3); // 0x08036DA4: BL 0x08054B3C
    r0 = sub_080549B4(r0, r1, r2, r3); // 0x08036DA8
    r0 = sub_08049198(r0, r1, r2, r3); // 0x08036DAC: BL 0x08049198
    r0 = sub_080532E8(r0, r1, r2, r3); // 0x08036DB0: BL 0x080532E8
    r1 = 0x4222F9DBU; // [0x08036E5C]
    r0 = sub_08054B3C(r0, r1, r2, r3); // 0x08036DB6: BL 0x08054B3C
    r1 = 0x44800000U; // (137 << 23)
    r0 = sub_08054B3C(r0, r1, r2, r3); // 0x08036DBE: BL 0x08054B3C
    r0 = sub_08054A64(r0, r1, r2, r3); // 0x08036DC2: BL 0x08054A64
    r1 = 0x4400U; // (17 << 10)
    r0 = r0 + r1;
    *(u32*)(r6) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0802ED98(r0, r1, r2, r3); // 0x08036DD0: BL 0x0802ED98
    return r0;
    r4 = 0x0875F7F4U; // [0x08036E54]
    r5 = r0;
    r0 = *(u32*)(r4);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x08036DDE
    r1 = *(u32*)(r5 + 0x8);
    r0 = *(u32*)(r4 + 0x4);
    r1 = (r1 << 10);
    *(u32*)(r0 + 0xC) = (u32)r1;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_0802ED98(r0, r1, r2, r3); // 0x08036DEC: BL 0x0802ED98
    return r0;
    r5 = 0x0875F7F4U; // [0x08036E54]
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x08036DFA
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08036E1E(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x8);
    r0 = *(u32*)(r5 + 0x4);
    r2 = *(u32*)(r4 + 0xC);
    r1 = (r1 << 10);
    *(u32*)r0 = r1; r0 += 4;
    r2 = (r2 << 10);
    *(u32*)(r0) = (u32)r2;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0802ED98(r0, r1, r2, r3); // 0x08036E18: BL 0x0802ED98
    return r0;
}

// ROM Address: 0x08036E1E..0x08036E2A (12 bytes, Thumb)
u32 sub_08036E1E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r4;
    r1 += 0x8U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080094F0(r0, r1, r2, r3); // 0x08036E24
    return sub_08036E1C(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_ram_shift_words1_stores_the_three_arguments_shifted_left_by_ten seeds 1, 2 and 3 at the argument's +8, +0xC and +0x10 and asserts 0x400, 0x800 and 0xC00; 0x08036E2C loads 0x0875F7F4, 0x08036E3C-0x08036E48 shift each word left by ten and store it at 0x030019A4..0x030019AC through its +4 word, and 0x08036E4C calls 0x0802ED98
// ROM Address: 0x08036E2A..0x08036E76 (76 bytes, Thumb)
u32 Ram_ShiftWords1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0875F7F4U; // [0x08036E54]
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x08036E32
    r1 = *(u32*)(r4 + 0x8);
    r2 = *(u32*)(r4 + 0xC);
    r0 = *(u32*)(r5 + 0x4);
    r1 = (r1 << 10);
    r2 = (r2 << 10);
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r1 = *(u32*)(r4 + 0x10);
    r0 -= 0x8U;
    r1 = (r1 << 10);
    *(u32*)(r0 + 0x8) = (u32)r1;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0802ED98(r0, r1, r2, r3); // 0x08036E4C: BL 0x0802ED98
    return r0;
    r0 = r0;
    r5 = (r6 >> 1);
    return sub_08036D20(r0, r1, r2, r3);
    r3 -= 0xB7U;
    cmp_lhs = (s32)(r2 & r4); cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x74);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036E6E: BL __call_via_r3
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08036E76..0x08036E7A (4 bytes, Thumb)
u32 sub_08036E76(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003280U; // [0x08036EA0]
    return r0; // BX lr
}

// ROM Address: 0x08036E7A..0x08036EB8 (62 bytes, Thumb)
u32 sub_08036E7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r3 = *(u32*)(r1 + 0x74);
    r3 = r3 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036E86: BL __call_via_r3
    r0 = 0x1U;
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r3 = *(u32*)(r1 + 0x74);
    r3 = r3 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036E9A: BL __call_via_r3
    return r0;
    r2 += 0x80U;
    r0 = (r0 << 12);
    r0 = 0x03001C34U; // [0x08036F64]
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08036EB8(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08036EB8..0x08036F44 (140 bytes, Thumb)
u32 sub_08036EB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r2;
    r0 += 0x1A0U;
    r3 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r3 = ((u32)((s32)r3 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[1] = r0; // [sp + 0x4]
    r0 = r3;
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    r3 = stack[1]; // [sp + 0x4]
    r0 = r1;
    r0 += 0x1A0U;
    stack[3] = r3; // [sp + 0xC]
    r3 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r3 = ((u32)((s32)r3 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[1] = r0; // [sp + 0x4]
    r0 = r3;
    stack[0] = r3; // [sp + 0x0]
    r3 = stack[1]; // [sp + 0x4]
    stack[4] = r0; // [sp + 0x10]
    stack[5] = r3; // [sp + 0x14]
    r3 = stack[4]; // [sp + 0x10]
    r0 = stack[2]; // [sp + 0x8]
    r4 = stack[5]; // [sp + 0x14]
    r0 = r0 - r3;
    r3 = stack[3]; // [sp + 0xC]
    stack[0] = r0; // [sp + 0x0]
    r3 = r3 - r4;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[1] = r3; // [sp + 0x4]
    stack[7] = r3; // [sp + 0x1C]
    stack[6] = r0; // [sp + 0x18]
    if (cmp_lhs >= cmp_rhs) goto loc_08036F08;
    r0 = (u32)(-(s32)r4);
loc_08036F08:
    r3 = r0;
    r0 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08036F12;
    r0 = (u32)(-(s32)r0);
loc_08036F12:
    stack[1] = r0; // [sp + 0x4]
    r0 = r3;
    stack[0] = r3; // [sp + 0x0]
    r3 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs > cmp_rhs) goto loc_08036F22;
    cmp_lhs = (s32)r3; cmp_rhs = 16;
    if (cmp_lhs <= cmp_rhs) goto loc_08036F26;
loc_08036F22:
    r0 = 0x0U;
    return sub_08036EB2(r0, r1, r2, r3);
loc_08036F26:
    r0 = 0xFFU;
    r0 += 0xA9U;
    r1 = r1 + r0;
    r0 = *(u32*)(r0 + r2);
    r1 = *(u32*)(r1);
    r0 = r0 - r1;
    r0 = ((u32)((s32)r0 >> 10));
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08036F38;
    r0 = (u32)(-(s32)r0);
loc_08036F38:
    r1 = r0;
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) return sub_08036EB2(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08036EB2(r0, r1, r2, r3);
}

// ROM Address: 0x08036F44..0x08036FC0 (124 bytes, Thumb)
u32 sub_08036F44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036F4A: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08036F52: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036F60;
    r1 = 0x0804BDE0U; // [0x08036F68]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08036F60:
    return r0;
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    return r0;
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0 + 0x3C);
    r4 = r0;
    r0 = *(u8*)(r1 + 0x3);
    r2 = *(u8*)(r1 + 0x2);
    r5 = 0x06010000U; // [0x08037230]
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08036F82: BL 0x08049138
    r1 = *(u32*)(r4 + 0x3C);
    r3 = 0x1U;
    r2 = *(u8*)(r1 + 0xE);
    r0 = *(u8*)(r1 + 0xF);
    r3 = (r3 << 9);
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x14);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08036F9C: BL 0x08049138
    return r0;
    r7 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08036FC0(r0, r1, r2, r3);
    r0 = 0x48U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08036FB2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08036FC0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08036FC0..0x080370CC (268 bytes, Thumb)
u32 sub_08036FC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08037234]
    r6 = 0x0875F808U; // [0x08037238]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x600U; // (3 << 9)
    *(u16*)(r4 + 0xE) = (u16)r0;
    r1 = r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08036FD0
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08036FEC;
    r1 = 0x600U; // (3 << 9)
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08036FDE: BL 0x08011732
    r1 = 0x600U; // (3 << 9)
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08036FE8
loc_08036FEC:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804AF24U /* &VTable_0804AF24 */; // [0x0803723C]
    r3 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x1C) = (u32)r1;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r0 = *(u8*)(r7 + 0x10);
    r5 -= 0x8U;
    r6 = 0x0875F808U; // [0x08037238]
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u32*)(r4 + 0x44) = (u32)r7;
    r0 = 0x20U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u8*)(r4 + 0x10) = (u8)r3;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r5 + 0x4);
    r0 -= 0xCU;
    r1 -= 0xCU;
    stack[4] = r1; // [sp + 0x10]
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r5 + 0x4);
    r0 += 0xCU;
    stack[5] = r0; // [sp + 0x14]
    r1 += 0xCU;
    stack[6] = r1; // [sp + 0x18]
    r0 = 0x8U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r5 = *(u32*)(r6 + 0x8);
    r0 = 0xC; // sp + 0xC
    r5 += 0x80U;
    r1 = *(u32*)(r5 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08037036
    r6 = 0x0807268CU; // [0x08037240]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08037082;
    r7 = 0xC; // sp + 0xC
loc_08037042:
    r0 = *(u32*)(r4 + 0x38);
    r2 = 0x8; // sp + 0x8
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 3);
    r0 = (r0 << 3);
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r2 = r2 + r0;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[4]; // [sp + 0x10]
    r2 = r2 + r1;
    stack[4] = r2; // [sp + 0x10]
    r2 = stack[5]; // [sp + 0x14]
    r0 = r2 + r0;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[6]; // [sp + 0x18]
    r0 = r0 + r1;
    stack[6] = r0; // [sp + 0x18]
    r0 = *(u32*)(r4 + 0x34);
    r0 += 0x8U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r1 = *(u32*)(r5 + 0x2C);
    r0 = r7;
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0803707A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08037042;
loc_08037082:
    r0 = stack[10]; // [sp + 0x28]
    r1 = 0x0876174CU; // [0x08037244]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x40) = (u32)r0;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r4 + 0x38);
    r2 = (r0 << 1);
    r2 = r2 + r0;
    r2 = (r2 << 3);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x3C) = (u32)r1;
    r1 = 0x03000F90U; // [0x08037248]
    r0 = (r0 << 3);
    r1 = *(u32*)(r1 + 0x4);
    r0 = r0 + r6;
    *(u32*)(r4 + 0x14) = (u32)r1;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x30) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r1;
    r0 = r4;
    r0 = sub_08036F6C(r0, r1, r2, r3); // 0x080370B2
    r6 = 0x0875F808U; // [0x08037238]
    r5 = 0x000005C4U; // [0x08037250]
    r0 = *(u32*)(r6);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319428U; // [0x0803724C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080370C4
    r0 = r4;
    return sub_08036FBC(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy21_stores_the_three_tables_and_frees_the_object
// ROM Address: 0x080370CC..0x08037132 (102 bytes, Thumb)
u32 Object_Destroy21(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804AF24U /* &VTable_0804AF24 */; // [0x0803723C]
    r5 = 0x0875F808U; // [0x08037238]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5);
    r6 = r1;
    r2 = 0x000005C4U; // [0x08037250]
    r1 = 0x08319428U; // [0x0803724C]
    r0 = r0 + r2;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x080370E0
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08037234]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08037254]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080370F6;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080370F2
loc_080370F6:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08037258]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08037104;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08037100: BL 0x0803D63C
loc_08037104:
    return r0;
    r1 = 0x2U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08037132(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_08037140(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x18);
    r0 -= 0x20U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803712E;
    r6 = 0x0875F808U; // [0x08037238]
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803712A
loc_0803712E:
    return r0;
}

// ROM Address: 0x08037132..0x0803722E (252 bytes, Thumb)
u32 sub_08037132(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xFFU;
    r0 = *(u32*)(r4 + 0x18);
    r2 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08037140;
    r0 += 0x20U;
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_08037140:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803712E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r4 + 0x2C);
    r2 = *(u32*)(r4 + 0x30);
    r1 *= r0;
    r2 *= r0;
    r0 = r1;
    stack[11] = r1; // [sp + 0x2C]
    r1 = r2;
    stack[12] = r2; // [sp + 0x30]
    r2 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    r0 = r2 + r0;
    r2 = *(u32*)(r4 + 0x20);
    stack[11] = r0; // [sp + 0x2C]
    r1 = r2 + r1;
    stack[12] = r1; // [sp + 0x30]
    stack[14] = r1; // [sp + 0x38]
    stack[13] = r0; // [sp + 0x34]
    r0 = *(u32*)(r4 + 0x40);
    r1 = *(u32*)(r4 + 0x18);
    r0 = *(u32*)(r0 + 0x4);
    r2 = r4;
    r0 *= r1;
    r1 = *(u32*)(r4 + 0x44);
    r0 = ((u32)((s32)r0 >> 8));
    stack[8] = r1; // [sp + 0x20]
    r1 = *(u32*)(r4 + 0x38);
    r2 += 0x1CU;
    *(u8*)(r3 + 0x14) = (u8)r1;
    r1 = 0x086B80E0U; // [0x0803725C]
    r6 = 0x34; // sp + 0x34
    stack[7] = r1; // [sp + 0x1C]
    r1 = *(u32*)(r4 + 0x40);
    r1 = *(u32*)(r1 + 0x8);
    stack[6] = r1; // [sp + 0x18]
    r1 = *(u32*)(r4 + 0x44);
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x10);
    *(u8*)(r3) = (u8)r1;
    stack[12] = r4; // [sp + 0x30]
    r1 = stack[13]; // [sp + 0x34]
    r3 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_080371A2;
    r1 = r6;
    goto loc_080371A4;
loc_080371A2:
    r1 = r2;
loc_080371A4:
    r1 = *(u32*)(r1);
    r5 = stack[14]; // [sp + 0x38]
    r1 = r1 - r0;
    stack[1] = r1; // [sp + 0x4]
    r1 = r4;
    r7 = *(u32*)(r4 + 0x20);
    r1 += 0x20U;
    r3 = r6 + 4;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_080371BC;
    r5 = r3;
    goto loc_080371BE;
loc_080371BC:
    r5 = r1;
loc_080371BE:
    r5 = *(u32*)(r5);
    r5 = r5 - r0;
    stack[2] = r5; // [sp + 0x8]
    r5 = stack[13]; // [sp + 0x34]
    r7 = *(u32*)(r2);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_080371CE;
    r2 = r6;
loc_080371CE:
    r2 = *(u32*)(r2);
    r2 = r2 + r0;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[14]; // [sp + 0x38]
    r5 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_080371DE;
    r1 = r3;
loc_080371DE:
    r1 = *(u32*)(r1);
    r6 = 0x0875F808U; // [0x08037238]
    r0 = r1 + r0;
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u32*)(r6 + 0x4);
    r1 = 0x0U;
    r2 = sp;
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080371EC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803712E(r0, r1, r2, r3);
    r0 = 0x03000F90U; // [0x08037248]
    r5 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r4 + 0x14);
    r0 = r5 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0803712E(r0, r1, r2, r3);
    r0 = 0x5U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08037202
    r0 = r5 + r0;
    r0 += 0x3U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r4 = *(u32*)(r6);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08037210
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08037260]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08037250]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08037228
    return sub_0803712E(r0, r1, r2, r3);
}

// ROM Address: 0x08037264..0x08037376 (274 bytes, Thumb)
u32 sub_08037264(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803726E: BL __call_via_r3
    return r0;
    r1 = 0x0875F808U; // [0x08037478]
    r1 = *(u32*)(r1 + 0x8);
    r3 = *(u32*)(r0 + 0x1C);
    r1 += 0x18U;
    r4 = *(u32*)(r1);
    r3 = r3 - r4;
    r4 = *(u32*)(r0 + 0x20);
    r1 = *(u32*)(r1 + 0x4);
    r2 = r0;
    r1 = r4 - r1;
    stack[1] = r1; // [sp + 0x4]
    r2 += 0x24U;
    r1 = r3;
    stack[0] = r3; // [sp + 0x0]
    r3 = stack[1]; // [sp + 0x4]
    *(u32*)r2 = r1; r2 += 4;
    *(u32*)r2 = r3; r2 += 4;
    r1 = *(u32*)(r0 + 0x20);
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x1U;
    return r0; // BX lr
    r12 = r3;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r5 = stack[6]; // [sp + 0x18]
    r4 = *(u32*)(r0 + 0x3C);
    r1 = (r1 << 2);
    r1 = r4 + r1;
    r3 = 0x0U;
    r6 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r0 + 0x24);
    r3 = r4 - r6;
    r6 = stack[5]; // [sp + 0x14]
    r4 = *(u32*)(r6);
    r4 = r3 + r4;
    r3 = 0x1U;
    r7 = (u32)(*(s8*)(r1 + r3));
    r6 = *(u32*)(r0 + 0x28);
    r3 = r6 - r7;
    r6 = stack[5]; // [sp + 0x14]
    r7 = *(u8*)(r1 + 0x3);
    r6 = *(u32*)(r6 + 0x4);
    r3 = r3 + r6;
    lr = r3;
    lr += r7;
    r7 = 0x0875F808U; // [0x08037478]
    r6 = *(u8*)(r1 + 0x2);
    r7 += 0x14U;
    r7 = *(u32*)(r7 + 0x8);
    r6 = r4 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08037374;
    r7 = 0x0875F808U; // [0x08037478]
    r7 += 0x14U;
    r7 = *(u32*)(r7);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08037374;
    r6 = 0x0875F808U; // [0x08037478]
    r6 += 0x14U;
    r7 = *(u32*)(r6 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08037374;
    r6 = *(u32*)(r6 + 0x4);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)lr;
    if (cmp_lhs >= cmp_rhs) goto loc_08037374;
    r6 = *(u32*)(r2);
    r1 = *(u32*)(r1 + 0x4);
    r7 = 0xFE00FFFFU; // [0x0803747C]
    *(u32*)(r6) = (u32)r1;
    r1 = *(u32*)(r2);
    r4 = (r4 << 23);
    r6 = *(u32*)(r1);
    r4 = (r4 >> 7);
    r6 &= r7;
    r4 |= r6;
    *(u32*)(r1) = (u32)r4;
    r4 = (r4 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r4 = (r4 << 8);
    r1 = *(u32*)(r2);
    r3 |= r4;
    *(u32*)(r1) = (u32)r3;
    r1 = r3;
    r3 = r5 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_08037342;
    r4 = 0xFFU;
    r4 += 0x1U;
    r1 |= r4;
    r3 = *(u32*)(r2);
    r4 = 0x1FU;
    *(u32*)(r3) = (u32)r1;
    r4 = (r4 << 25);
    r1 &= ~r4;
    r4 = (r5 << 27);
    r4 = (r4 >> 2);
    r3 = *(u32*)(r2);
    r1 |= r4;
    *(u32*)(r3) = (u32)r1;
loc_08037342:
    r1 = *(u16*)(r0 + 0xC);
    r3 = r1;
    r1 = *(u32*)(r2);
    r3 += r12;
    r1 += 0x4U;
    r4 = *(u32*)(r1);
    r3 = (r3 << 22);
    r4 = (r4 >> 10);
    r4 = (r4 << 10);
    r3 = (r3 >> 22);
    r3 |= r4;
    *(u32*)(r1) = (u32)r3;
    r0 = *(u8*)(r0 + 0x8);
    r4 = 0xC00U; // (3 << 10)
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r0 = (r0 << 10);
    r3 &= ~r4;
    r1 = *(u32*)(r2);
    r0 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = *(u32*)(r2);
    r0 += 0x8U;
    *(u32*)(r2) = (u32)r0;
loc_08037374:
    return r0;
}

// ROM Address: 0x08037376..0x0803740E (152 bytes, Thumb)
u32 sub_08037376(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r1);
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u32*)(r4 + 0x18);
    r7 = 0x0U;
    r7 = ~r7;
    r6 = r1;
    r0 -= 0x100U;
    if (cmp_lhs == cmp_rhs) goto loc_080373CA;
    r0 = *(u32*)(r6 + 0x4);
    r5 = r0;
    r0 += 0x20U;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = *(u32*)(r6 + 0x8);
    r7 = r0;
    r0 += 0x1U;
    *(u32*)(r6 + 0x8) = (u32)r0;
    r0 = 0x10000U; // (1 << 16)
    r1 = *(u32*)(r4 + 0x18);
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r1 = 0x7FU;
    r3 = *(u32*)(r4 + 0x38);
    r1 = ~r1;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080373EA;
    r2 = 0xFFU;
    r2 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080373F6;
    cmp_lhs = (s32)r3; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_08037402;
    cmp_lhs = (s32)r3; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_080373CA;
    *(u16*)(r5 + 0x6) = (u16)r2;
    r2 = 0x0U;
    *(u16*)(r5 + 0xE) = (u16)r2;
    *(u16*)(r5 + 0x16) = (u16)r2;
    *(u16*)(r5 + 0x1E) = (u16)r0;
loc_080373CA:
    r1 = 0x0875F808U; // [0x08037478]
    r3 = 0x0U;
    r1 += 0xCU;
    stack[0] = r1; // [sp + 0x0]
    r1 = 0x0U;
    r0 = r4;
    stack[1] = r7; // [sp + 0x4]
    r2 = 0x10; // sp + 0x10
    r0 = sub_080372A4(r0, r1, r2, r3); // 0x080373DA
    r0 = *(u32*)(r4 + 0x34);
    r5 = 0x10U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs <= cmp_rhs) return sub_0803743C(r0, r1, r2, r3);
    return sub_0803740E(r0, r1, r2, r3);
loc_080373EA:
    *(u16*)(r5 + 0x6) = (u16)r0;
    r2 = 0x0U;
    *(u16*)(r5 + 0xE) = (u16)r2;
    *(u16*)(r5 + 0x16) = (u16)r2;
    *(u16*)(r5 + 0x1E) = (u16)r1;
    goto loc_080373CA;
loc_080373F6:
    *(u16*)(r5 + 0x6) = (u16)r0;
    r1 = 0x0U;
    *(u16*)(r5 + 0xE) = (u16)r1;
    *(u16*)(r5 + 0x16) = (u16)r1;
    *(u16*)(r5 + 0x1E) = (u16)r2;
    goto loc_080373CA;
loc_08037402:
    *(u16*)(r5 + 0x6) = (u16)r1;
    r2 = 0x0U;
    *(u16*)(r5 + 0xE) = (u16)r2;
    *(u16*)(r5 + 0x16) = (u16)r2;
    *(u16*)(r5 + 0x1E) = (u16)r0;
    goto loc_080373CA;
    return r0;
}

// ROM Address: 0x0803740E..0x08037460 (82 bytes, Thumb)
u32 sub_0803740E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_0803740E:
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r4 + 0x30);
    r0 *= r5;
    r1 *= r5;
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x8; // sp + 0x8
    stack[0] = r0; // [sp + 0x0]
    stack[0] = r1; // [sp + 0x0]
    r3 = 0x10U;
    r2 = sp;
    r2 = r2 + r3;
    r1 = 0x1U;
    stack[2] = r0; // [sp + 0x8]
    r0 = r4;
    stack[1] = r7; // [sp + 0x4]
    r0 = sub_080372A4(r0, r1, r2, r3); // 0x0803742E
    r0 = *(u32*)(r4 + 0x34);
    r5 += 0x20U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0803740E;
    r0 = stack[4]; // [sp + 0x10]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_08037460(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_08037468(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037458: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08037460..0x0803746C (12 bytes, Thumb)
u32 sub_08037460(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08036F6C(r0, r1, r2, r3); // 0x08037460
    r0 = 0x0U;
    return sub_0803745E(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0803745E(r0, r1, r2, r3);
}

// ROM Address: 0x0803746C..0x08037474 (8 bytes, Thumb)
u32 sub_0803746C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_08037474(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08037474..0x08037478 (4 bytes, Thumb)
u32 sub_08037474(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08037480..0x08037482 (2 bytes, Thumb)
u32 sub_08037480(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x08037482..0x0803749C (26 bytes, Thumb)
u32 sub_08037482(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r6 = r3;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803749C(r0, r1, r2, r3);
    r0 = 0x70U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08037490: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0803749C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0803749C..0x0803750E (114 bytes, Thumb)
u32 sub_0803749C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1000U; // (1 << 12)
    r2 = r7;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x080374A4
    r0 = 0x0804A26CU /* &VTable_0804A26C */; // [0x08037878]
    r3 = 0x0807268CU; // [0x0803787C]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    *(u32*)(r4 + 0x4C) = (u32)r6;
    r0 = *(u8*)(r4 + 0x10);
    r5 = 0x0U;
    r1 = (r0 << 3);
    r2 = *(u32*)(r3 + r1);
    r1 = r1 + r3;
    r2 = (r2 << 7);
    *(u32*)(r4 + 0x44) = (u32)r2;
    r1 = *(u32*)(r1 + 0x4);
    r3 = (r0 << 4);
    r1 = (r1 << 7);
    *(u32*)(r4 + 0x48) = (u32)r1;
    r1 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r1 = *(u32*)(r6 + 0x8);
    r0 = r3 - r0;
    r0 = (r0 << 3);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x50) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x58) = (u32)r5;
    *(u32*)(r4 + 0x54) = (u32)r5;
    r0 = 0x40U;
    *(u8*)(r0 + r4) = (u8)r5;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x080374EC
    r0 = 0x0876ACF0U; // [0x08037880]
    r3 = r5;
    r5 = 0x000005C4U; // [0x08037888]
    r0 = *(u32*)(r0);
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x083192CCU; // [0x08037884]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080374FE
    r1 = 0x03003284U; // [0x0803788C]
    r0 = *(u8*)(r1);
    r0 += 0x1U;
    *(u8*)(r1) = (u8)r0;
    r0 = r4;
    return sub_0803749A(r0, r1, r2, r3);
}

// ROM Address: 0x0803750E..0x08037564 (86 bytes, Thumb)
u32 sub_0803750E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804A26CU /* &VTable_0804A26C */; // [0x08037878]
    r6 = r1;
    r1 = 0x03003284U; // [0x0803788C]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u8*)(r1);
    r5 = 0x0876ACF0U; // [0x08037880]
    r0 += 0xFFU;
    *(u8*)(r1) = (u8)r0;
    r0 = 0x40U;
    r1 = *(u8*)(r0 + r4);
    r0 = 0x000005C4U; // [0x08037888]
    r2 = *(u32*)(r5);
    r0 = r2 + r0;
    r2 = 0x083192CCU; // [0x08037884]
    r2 -= 0x24U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08037564(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08037542;
    r1 = r2;
    r1 += 0x180U;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0803753E
loc_08037542:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08037890]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08037894]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08037554;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08037550
loc_08037554:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08037898]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08037562;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803755E: BL 0x0803D63C
loc_08037562:
    return r0;
}

// ROM Address: 0x08037564..0x08037568 (4 bytes, Thumb)
u32 sub_08037564(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r2;
    r1 += 0x24U;
    return r0;
}

// ROM Address: 0x0803756E..0x08037644 (214 bytes, Thumb)
u32 sub_0803756E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r7 += 0x40U;
    r4 = r0;
    r2 = 0x0876ACF0U; // [0x08037880]
    r0 = *(u8*)(r7);
    r2 = *(u32*)(r2);
    r6 = 0x083192CCU; // [0x08037884]
    r1 = 0x000005C4U; // [0x08037888]
    r6 -= 0x24U;
    r5 = r2 + r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08037644(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803759A;
    r1 = r6;
    r1 += 0x180U;
    r0 = r5;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x08037596
loc_0803759A:
    r0 = 0x3CU;
    *(u32*)(r4 + 0x5C) = (u32)r0;
    r0 = 0x2U;
    *(u8*)(r7) = (u8)r0;
    r1 = r4;
    r1 += 0x28U;
    r0 = 0x44; // sp + 0x44
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x080375A8
    r0 = *(u32*)(r4 + 0x58);
    r1 = 0x0876ACF0U; // [0x08037880]
    r0 = (r0 << 2);
    r1 += 0x14U;
    r0 = *(u32*)(r1 + r0);
    r1 = 0x0U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = ((u32)((s32)r0 >> 1));
    *(u32*)(r4 + 0x6C) = (u32)r0;
    r0 = 0x3C; // sp + 0x3C
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = *(u32*)(r4 + 0x6C);
    r3 = 0x0; // sp + 0x0
    stack[15] = r0; // [sp + 0x3C]
    r0 = *(u32*)(r4 + 0x6C);
    r2 = 0x8; // sp + 0x8
    stack[16] = r0; // [sp + 0x40]
    r0 = *(u32*)(r4 + 0x1C);
    stack[10] = r0; // [sp + 0x28]
    r0 = *(u8*)(r4 + 0x10);
    *(u8*)(r3 + 0x1C) = (u8)r0;
    r0 = 0x086B80F0U; // [0x0803789C]
    stack[9] = r0; // [sp + 0x24]
    r1 = *(u32*)(r4 + 0x4C);
    r0 = *(u32*)(r4 + 0x60);
    r1 = *(u32*)(r1 + 0xC);
    r3 = (r1 << 4);
    r1 = r3 - r1;
    r1 = (r1 << 4);
    r1 = ((u32)((s32)r1 >> 16));
    r0 *= r1;
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[17]; // [sp + 0x44]
    r1 = stack[15]; // [sp + 0x3C]
    r3 = stack[16]; // [sp + 0x40]
    r1 = r0 - r1;
    r0 = stack[18]; // [sp + 0x48]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 - r3;
    stack[1] = r0; // [sp + 0x4]
    stack[4] = r0; // [sp + 0x10]
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[15]; // [sp + 0x3C]
    r0 = stack[17]; // [sp + 0x44]
    r1 = r0 + r1;
    r0 = stack[18]; // [sp + 0x48]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r3;
    stack[1] = r0; // [sp + 0x4]
    stack[6] = r0; // [sp + 0x18]
    stack[5] = r1; // [sp + 0x14]
    r0 = *(u8*)(r4 + 0x11);
    r3 = 0x0; // sp + 0x0
    r1 = 0x0U;
    *(u8*)(r3 + 0x8) = (u8)r0;
    r0 = 0x0876ACF0U; // [0x08037880]
    stack[14] = r4; // [sp + 0x38]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08037624
    r1 = r6;
    r1 += 0x114U;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08037634
    r1 = 0xC; // sp + 0xC
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r4 += 0x64U;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    return r0;
}

// ROM Address: 0x08037644..0x0803764A (6 bytes, Thumb)
u32 sub_08037644(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r6;
    r1 += 0x24U;
    r0 = r5;
    return r0;
}

// ROM Address: 0x08037650..0x08037682 (50 bytes, Thumb)
u32 sub_08037650(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 += 0x40U;
    stack[20] = r0; // [sp + 0x50]
    r0 = *(u8*)(r0);
    r6 = r4;
    r6 += 0x28U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r7 = 0x0876ACF0U; // [0x08037880]
    if (cmp_lhs == cmp_rhs) return sub_08037682(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080376CE(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0803774E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x5C);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x5C) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08037750(r0, r1, r2, r3);
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803767A
    return r0;
}

// ROM Address: 0x08037682..0x08037794 (274 bytes, Thumb)
u32 sub_08037682(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x54);
    r0 += 0x1U;
    *(u32*)(r4 + 0x54) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs >= cmp_rhs) goto loc_08037698;
    r1 = ((u32)((s32)r0 >> 3));
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x58) = (u32)r0;
    goto loc_080376AC;
loc_08037698:
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_080376A0;
    r0 = 0x60U;
    *(u32*)(r4 + 0x54) = (u32)r0;
loc_080376A0:
    r0 = *(u32*)(r4 + 0x54);
    r1 = ((u32)((s32)r0 >> 5));
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x58) = (u32)r0;
loc_080376AC:
    r0 = *(u32*)(r4 + 0x4C);
    r1 = *(u32*)(r4 + 0x58);
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_0803774E;
    r0 = *(u32*)(r0 + 0x4);
    r0 = r0 - r5;
    if (cmp_lhs != cmp_rhs) goto loc_080376C0;
    *(u32*)(r4 + 0x58) = (u32)r5;
    goto loc_0803774E;
loc_080376C0:
    r1 = *(u32*)(r4 + 0x54);
    r1 = ((u32)((s32)r1 >> 2));
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080376C4: BL 0x08046E58
    r0 = r1 + r5;
    *(u32*)(r4 + 0x58) = (u32)r0;
    goto loc_0803774E;
    r0 = *(u32*)(r4 + 0x4C);
    r1 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r5 = *(u32*)(r1);
    r0 = r0 - r5;
    if (cmp_lhs == cmp_rhs) goto loc_080376EC;
    r1 = *(u32*)(r4 + 0x58);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_080376EC;
    r1 = *(u32*)(r4 + 0x54);
    r1 = ((u32)((s32)r1 >> 2));
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080376E4: BL 0x08046E58
    r0 = r1 + r5;
    *(u32*)(r4 + 0x58) = (u32)r0;
loc_080376EC:
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r4 + 0x44);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = *(u32*)(r4 + 0x48);
    r1 = *(u32*)(r4 + 0x24);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x54);
    r0 += 0x1U;
    *(u32*)(r4 + 0x54) = (u32)r0;
    r0 = 0x38; // sp + 0x38
    r1 = r6;
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x08037706
    r1 = 0x0876ACF0U; // [0x08037880]
    r0 = stack[14]; // [sp + 0x38]
    r1 += 0xCU;
    r2 = *(u32*)(r1);
    r2 = r0 - r2;
    r0 = stack[15]; // [sp + 0x3C]
    r3 = *(u32*)(r1 + 0x4);
    stack[12] = r2; // [sp + 0x30]
    r0 = r0 - r3;
    stack[13] = r0; // [sp + 0x34]
    stack[17] = r0; // [sp + 0x44]
    r0 = stack[14]; // [sp + 0x38]
    stack[16] = r2; // [sp + 0x40]
    r2 = *(u32*)(r1);
    r0 = r0 + r2;
    r2 = stack[15]; // [sp + 0x3C]
    r1 = *(u32*)(r1 + 0x4);
    stack[12] = r0; // [sp + 0x30]
    r1 = r2 + r1;
    stack[13] = r1; // [sp + 0x34]
    stack[19] = r1; // [sp + 0x4C]
    stack[18] = r0; // [sp + 0x48]
    r0 = *(u32*)(r7 + 0x8);
    r0 += 0x80U;
    r1 = *(u32*)(r0 + 0x2C);
    r0 = 0x40; // sp + 0x40
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0803773E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803774E;
    r0 = r4;
    r0 = sub_0803756E(r0, r1, r2, r3); // 0x08037748: BL 0x0803756E
    return sub_0803767E(r0, r1, r2, r3);
loc_0803774E:
    return sub_08037794(r0, r1, r2, r3);
    goto loc_08037752;
loc_08037752:
    r0 = (r0 << 29);
    if (cmp_lhs != cmp_rhs) return sub_0803767E(r0, r1, r2, r3);
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08037758
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_0803767E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x6C);
    r0 = (r0 << 1);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08037768
    r1 = *(u32*)(r4 + 0x64);
    r0 = r0 + r1;
    stack[18] = r0; // [sp + 0x48]
    r0 = *(u32*)(r4 + 0x6C);
    r0 = (r0 << 1);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08037776
    r1 = *(u32*)(r4 + 0x68);
    r2 = 0x38U;
    r0 = r0 + r1;
    stack[19] = r0; // [sp + 0x4C]
    r0 = 0x0U;
    r1 = 0x48; // sp + 0x48
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x08037786
    r1 = r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803778E: BL 0x0801191A
    return sub_0803767E(r0, r1, r2, r3);
}

// ROM Address: 0x08037794..0x08037878 (228 bytes, Thumb)
u32 sub_08037794(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4 + 0x58);
    r0 = *(u32*)(r4 + 0x50);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x080377A4
    r0 = r4;
    r0 = sub_08019B7C(r0, r1, r2, r3); // 0x080377AA
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080377BC;
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080377B6
    return sub_0803767E(r0, r1, r2, r3);
loc_080377BC:
    r0 = stack[20]; // [sp + 0x50]
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0803774C(r0, r1, r2, r3);
    r0 = stack[22]; // [sp + 0x58]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803774C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803774C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x54);
    r0 = (r0 << 30);
    if (cmp_lhs != cmp_rhs) return sub_0803774C(r0, r1, r2, r3);
    r1 = r6;
    r0 = 0x48; // sp + 0x48
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x080377DA
    r0 = 0x40; // sp + 0x40
    r1 = 0x0U;
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = *(u32*)(r4 + 0x58);
    r1 = 0x0876ACF0U; // [0x08037880]
    r0 = (r0 << 2);
    r1 += 0x14U;
    r0 = *(u32*)(r1 + r0);
    r3 = 0x20; // sp + 0x20
    stack[16] = r0; // [sp + 0x40]
    r0 = *(u32*)(r4 + 0x58);
    r2 = 0xC; // sp + 0xC
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    stack[17] = r0; // [sp + 0x44]
    r0 = *(u32*)(r4 + 0x1C);
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u8*)(r4 + 0x10);
    *(u8*)(r3) = (u8)r0;
    r0 = 0x086B80F0U; // [0x0803789C]
    stack[10] = r0; // [sp + 0x28]
    r1 = *(u32*)(r4 + 0x4C);
    r0 = *(u32*)(r4 + 0x60);
    r1 = *(u32*)(r1 + 0xC);
    r0 *= r1;
    r1 = 0x0000FFFFU; // [0x08037894]
    r0 = r0 + r1;
    r0 = ((u32)((s32)r0 >> 16));
    stack[9] = r0; // [sp + 0x24]
    r0 = stack[18]; // [sp + 0x48]
    r1 = stack[16]; // [sp + 0x40]
    r3 = stack[17]; // [sp + 0x44]
    r1 = r0 - r1;
    r0 = stack[19]; // [sp + 0x4C]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 - r3;
    stack[2] = r0; // [sp + 0x8]
    stack[5] = r0; // [sp + 0x14]
    stack[4] = r1; // [sp + 0x10]
    r1 = stack[16]; // [sp + 0x40]
    r0 = stack[18]; // [sp + 0x48]
    r1 = r0 + r1;
    r0 = stack[19]; // [sp + 0x4C]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r3;
    stack[2] = r0; // [sp + 0x8]
    stack[7] = r0; // [sp + 0x1C]
    stack[6] = r1; // [sp + 0x18]
    r0 = *(u8*)(r4 + 0x11);
    r3 = 0x0; // sp + 0x0
    r1 = 0x0U;
    *(u8*)(r3 + 0xC) = (u8)r0;
    stack[15] = r4; // [sp + 0x3C]
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0803784C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08037792(r0, r1, r2, r3);
    r0 = 0x2U;
    r4 = *(u32*)(r7);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08037858
    r0 += 0x30U;
    r3 = (r0 << 1);
    r1 = 0x083192CCU; // [0x08037884]
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 -= 0x24U;
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08037888]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08037872
    return sub_0803767E(r0, r1, r2, r3);
}

// ROM Address: 0x080378A0..0x080378B6 (22 bytes, Thumb)
u32 sub_080378A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x60) = (u32)r1;
    r1 = *(u32*)(r0 + 0x54);
    r2 = 0x0876ACF0U; // [0x080379BC]
    cmp_lhs = (s32)r1; cmp_rhs = 60;
    if (cmp_lhs >= cmp_rhs) return sub_080378B6(r0, r1, r2, r3);
    r1 = r0;
    r0 = *(u32*)(r2 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080378B0
    return r0;
}

// ROM Address: 0x080378B6..0x080378DA (36 bytes, Thumb)
u32 sub_080378B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1U;
    r0 += 0x40U;
    *(u8*)(r0) = (u8)r1;
    r0 = *(u32*)(r2);
    r5 = 0x083192A8U; // [0x080379C0]
    r2 = 0x000005C4U; // [0x080379C4]
    r1 = r5;
    r1 += 0x24U;
    r0 = r0 + r2;
    r4 = r0;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x080378CA
    r1 = r5;
    r1 += 0x180U;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4;
    return r0;
}

// ROM Address: 0x080378E0..0x080378EE (14 bytes, Thumb)
u32 sub_080378E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x40U;
    r1 = *(u8*)(r1 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_080378EE(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080378EE..0x080378F4 (6 bytes, Thumb)
u32 sub_080378EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08019BF4(r0, r1, r2, r3); // 0x080378EE
    return sub_080378EC(r0, r1, r2, r3);
}

// ROM Address: 0x080378F4..0x08037912 (30 bytes, Thumb)
u32 sub_080378F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080379B2(r0, r1, r2, r3);
    r0 = 0x40U;
    r0 = *(u8*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_080379AE(r0, r1, r2, r3);
    r0 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) return sub_08037912(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08037912..0x080379B4 (162 bytes, Thumb)
u32 sub_08037912(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2 + 0x1C);
    r0 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_080379AE;
    r0 = *(u32*)(r2 + 0x4);
    r1 = *(u32*)(r4 + 0x30);
    r6 = r2 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080379AE;
    r0 = *(u32*)(r4 + 0x28);
    r1 = *(u32*)(r6 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080379AE;
    r0 = *(u32*)(r6 + 0x4);
    r1 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080379AE;
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r6 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080379AE;
    r0 = *(u32*)(r4 + 0x58);
    r1 = 0x0876ACF0U; // [0x080379BC]
    r0 = (r0 << 2);
    r1 += 0x14U;
    r0 = *(u32*)(r1 + r0);
    r1 = r4;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r5 = ((u32)((s32)r0 >> 2));
    r0 = 0x20; // sp + 0x20
    r1 += 0x28U;
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x08037952
    r0 = 0x18; // sp + 0x18
    r1 = 0x0U;
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = stack[8]; // [sp + 0x20]
    stack[6] = r5; // [sp + 0x18]
    r1 = r0 - r5;
    r0 = stack[9]; // [sp + 0x24]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 - r5;
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[6]; // [sp + 0x18]
    r0 = stack[8]; // [sp + 0x20]
    stack[7] = r5; // [sp + 0x1C]
    r1 = r0 + r1;
    r0 = stack[9]; // [sp + 0x24]
    r2 = stack[7]; // [sp + 0x1C]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    stack[5] = r0; // [sp + 0x14]
    stack[4] = r1; // [sp + 0x10]
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080379AE;
    r0 = stack[2]; // [sp + 0x8]
    r1 = *(u32*)(r6 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080379AE;
    r0 = *(u32*)(r6 + 0x4);
    r1 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080379AE;
    r0 = stack[3]; // [sp + 0xC]
    r1 = *(u32*)(r6 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080379AE;
    r0 = r4;
    r0 = sub_0803756E(r0, r1, r2, r3); // 0x080379A6: BL 0x0803756E
    r0 = 0x1U;
    return sub_0803790E(r0, r1, r2, r3);
loc_080379AE:
    r0 = 0x0U;
    return sub_0803790E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080379BA..0x08037A00 (70 bytes, Thumb)
u32 sub_080379BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = 0x3C0; // sp + 0x3C0
    r6 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r0 = 0x0876BA3CU; // [0x08037A24]
    r0 = *(u32*)(r0);
    r4 = r0;
    r4 += 0x18U;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x080379D6
    r0 = *(u32*)(r4);
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08037A00(r0, r1, r2, r3);
    r0 = stack[0]; // [sp + 0x0]
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08037A00(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x4);
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08037A00(r0, r1, r2, r3);
    r0 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08037A00(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08037A00..0x08037A04 (4 bytes, Thumb)
u32 sub_08037A00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_080379FC(r0, r1, r2, r3);
}

// ROM Address: 0x08037A04..0x08037A24 (32 bytes, Thumb)
u32 sub_08037A04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037A0A: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08037A12: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08037A20;
    r1 = 0x08049E08U; // [0x08037A28]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08037A20:
    return r0;
    r0 = r0;
    return r0;
}

// ROM Address: 0x08037A26..0x08037A6A (68 bytes, Thumb)
u32 sub_08037A26(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = (r6 >> 1);
    r6 = stack[8]; // [sp + 0x20]
    r4 = (r0 >> 32);
    r0 = *(u16*)(r1 + 0x12);
    r0 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08037A3A;
    r0 = *(u32*)(r1 + 0x50);
    r0 = *(u32*)(r0);
    r0 = (r0 << 3);
    r0 -= 0x1U;
loc_08037A3A:
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = ((u32)((s32)r0 >> 3));
    *(u8*)(r1 + 0x11) = (u8)r0;
    return r0; // BX lr
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x30);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = 0x4U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037A50: BL __call_via_r3
    return r0;
    r0 = 0x03001C34U; // [0x08037B34]
    r4 = r1;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08037A6A(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08037A6A..0x08037B2E (196 bytes, Thumb)
u32 sub_08037A6A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x08037B3C]
    stack[9] = r1; // [sp + 0x24]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    r7 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08037B38]
    stack[10] = r0; // [sp + 0x28]
    stack[8] = r2; // [sp + 0x20]
    if (cmp_lhs == cmp_rhs) goto loc_08037A80;
    r1 = r4;
    r1 += 0x18CU;
loc_08037A80:
    r0 = 0x20; // sp + 0x20
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08037A82
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0876BA40U; // [0x08037B40]
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r5 = *(u32*)r0; r0 += 4;
    r6 = *(u32*)r0; r0 += 4;
    r1 = 0x4U;
    r0 = r4;
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x08037A94
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08037AB6;
    r0 = stack[9]; // [sp + 0x24]
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[8] = r7; // [sp + 0x20]
    if (cmp_lhs == cmp_rhs) goto loc_08037AB2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037AAE: BL __call_via_r3
loc_08037AB2:
    r0 = r4;
    return sub_08037A66(r0, r1, r2, r3);
loc_08037AB6:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037AC0: BL __call_via_r3
    r0 = (r5 << 8);
    r5 = r4;
    r5 += 0xFFU;
    r1 = (r6 << 8);
    stack[7] = r1; // [sp + 0x1C]
    r5 += 0xA1U;
    stack[6] = r0; // [sp + 0x18]
    r0 = *(u32*)(r5);
    r1 = stack[6]; // [sp + 0x18]
    r6 = r5 + 4;
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = stack[7]; // [sp + 0x1C]
    stack[0] = r0; // [sp + 0x0]
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[5] = r1; // [sp + 0x14]
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x10; // sp + 0x10
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037AF6: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08037B06;
    r0 = stack[4]; // [sp + 0x10]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[5]; // [sp + 0x14]
    *(u32*)(r6) = (u32)r0;
loc_08037B06:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037B10: BL __call_via_r3
    r0 = stack[9]; // [sp + 0x24]
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[8] = r7; // [sp + 0x20]
    if (cmp_lhs == cmp_rhs) goto loc_08037B2A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037B26: BL __call_via_r3
loc_08037B2A:
    r0 = r4;
    return sub_08037A66(r0, r1, r2, r3);
}

// ROM Address: 0x08037B48..0x08037B92 (74 bytes, Thumb)
u32 sub_08037B48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x08037BB4]
    r4 = r1;
    r1 = *(u32*)(r0);
    r0 = 0x10; // sp + 0x10
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08037B54
    r0 = stack[4]; // [sp + 0x10]
    r0 += 0x6U;
    stack[4] = r0; // [sp + 0x10]
    r0 = stack[6]; // [sp + 0x18]
    r0 -= 0x6U;
    stack[6] = r0; // [sp + 0x18]
    r0 = sp;
    r1 = r4;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08037B68
    r0 = stack[4]; // [sp + 0x10]
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08037B92(r0, r1, r2, r3);
    r0 = stack[0]; // [sp + 0x0]
    r1 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08037B92(r0, r1, r2, r3);
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08037B92(r0, r1, r2, r3);
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08037B92(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08037B92..0x08037B96 (4 bytes, Thumb)
u32 sub_08037B92(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08037B8E(r0, r1, r2, r3);
}

// ROM Address: 0x08037B96..0x08037BB4 (30 bytes, Thumb)
u32 sub_08037B96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037B9C: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08037BA4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08037BB2;
    r1 = 0x0804B0F8U; // [0x08037BB8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08037BB2:
    return r0;
}

// ROM Address: 0x08037BB4..0x08037BBC (8 bytes, Thumb)
u32 sub_08037BB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08037BBC..0x08037C18 (92 bytes, Thumb)
u32 sub_08037BBC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = 0x3U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08037BC6
    r0 -= 0x1U;
    r0 = (r0 << 8);
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x3U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08037BD2
    r0 -= 0x1U;
    r0 = (r0 << 8);
    stack[6] = r0; // [sp + 0x18]
    r2 = *(u32*)(r4 + 0x4);
    r3 = stack[5]; // [sp + 0x14]
    r1 = *(u32*)(r4 + 0x8);
    r2 = r2 + r3;
    r3 = stack[6]; // [sp + 0x18]
    r0 = r5;
    r0 += 0xFFU;
    r1 = r1 + r3;
    stack[2] = r1; // [sp + 0x8]
    r0 += 0xA1U;
    r1 = r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    *(u32*)r0 = r1; r0 += 4;
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r0) = (u32)r1;
    r0 = 0x0U;
    return r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08037C0A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08037C16;
    r1 = 0x0804B1C0U /* &VTable_0804B1C0 */; // [0x08037C18]
    *(u32*)(r0) = (u32)r1;
loc_08037C16:
    return r0;
}

// ROM Address: 0x08037C1C..0x08037D48 (300 bytes, Thumb)
u32 sub_08037C1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08037C36;
    r0 = 0x48U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08037C2A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08037C36;
    r0 = r4;
    return r0;
loc_08037C36:
    r1 = 0x400U; // (1 << 10)
    r2 = r6;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x08037C3E
    r0 = 0x0804B4ACU /* &VTable_0804B4AC */; // [0x08037D40]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r0 = 0x0U;
    *(u32*)(r4 + 0x40) = (u32)r0;
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r1 = *(u8*)(r6 + 0x10);
    r0 = 0x3CU;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) goto loc_08037C60;
    r0 = 0x0U;
loc_08037C60:
    r1 = 0x0876CBD8U; // [0x08037D44]
    r0 = r0 + r1;
    *(u32*)(r4 + 0x44) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08037C6A
    r0 = r4;
    return r0;
    r6 = 0x0876BA78U; // [0x08037D48]
    r4 = r0;
    r0 = *(u32*)(r6 + 0xC);
    r2 = *(u32*)(r6 + 0x8);
    stack[17] = r2; // [sp + 0x44]
    stack[18] = r0; // [sp + 0x48]
    r0 = *(u32*)(r6 + 0x14);
    r2 = *(u32*)(r6 + 0x10);
    stack[16] = r0; // [sp + 0x40]
    stack[15] = r2; // [sp + 0x3C]
    r0 = *(u8*)(r1 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    r0 = *(u8*)(r1 + 0x11);
    if (cmp_lhs != cmp_rhs) goto loc_08037C9C;
    r1 = 0x3C; // sp + 0x3C
    r0 = r0 + r1;
    r0 -= 0x10U;
    r5 = *(u8*)(r0 + 0xE);
    goto loc_08037CA4;
loc_08037C9C:
    r1 = 0x44; // sp + 0x44
    r0 = r0 + r1;
    r0 -= 0x10U;
    r5 = *(u8*)(r0 + 0xE);
loc_08037CA4:
    r0 = (r5 << 1);
    r0 = r0 + r5;
    r1 = 0x0876CBD8U; // [0x08037D44]
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08037CB2
    r0 = *(u32*)(r6 + 0x1C);
    r1 = *(u32*)(r6 + 0x18);
    stack[14] = r0; // [sp + 0x38]
    stack[13] = r1; // [sp + 0x34]
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x34; // sp + 0x34
    r0 = r0 + r5;
    r0 -= 0x10U;
    r0 = *(u8*)(r0 + 0x6);
    r7 = sp;
    r5 = r7 + 4;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8100U; // [0x08037D4C]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x2800U; // (5 << 11)
    stack[6] = r0; // [sp + 0x18]
    r0 = r4;
    r0 += 0x28U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r0 = *(u8*)(r4 + 0x11);
    r3 = 0x0; // sp + 0x0
    r2 = r7;
    *(u8*)(r3) = (u8)r0;
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u32*)(r6 + 0x4);
    r1 = 0x0U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08037CF2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08037D1A;
    r0 = 0x2U;
    r4 = *(u32*)(r6);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08037CFE
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08037D50]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08037D54]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08037D16
loc_08037D1A:
    return r0;
    r1 = *(u32*)(r0 + 0x40);
    cmp_lhs = (s32)r1; cmp_rhs = 80;
    if (cmp_lhs >= cmp_rhs) goto loc_08037D3C;
    r2 = r1 + 1;
    r1 = ((u32)((s32)r1 >> 4));
    r3 = (r1 << 1);
    *(u32*)(r0 + 0x40) = (u32)r2;
    r2 = *(u32*)(r0 + 0x44);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r1 = r1 + r2;
    *(u32*)(r0 + 0x18) = (u32)r1;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08037D38
loc_08037D3C:
    return r0;
    r0 = r0;
    r4 = (r0 >> 32);
    r3 = *(u32*)r3; r3 += 4;
    r4 = *(u32*)r3; r3 += 4;
    r6 = *(u32*)r3; r3 += 4;
    r7 = *(u32*)r3; r3 += 4;
    r6 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x08037D4A..0x08037D82 (56 bytes, Thumb)
u32 sub_08037D4A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = (r6 >> 1);
    *(u16*)(r0 + 0x8) = (u16)r0;
    r3 = (r5 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08037D82(r0, r1, r2, r3);
    r0 = (r0 << 29);
    r0 = (r0 >> 31);
    *(u8*)(r4 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x08037D82..0x08037E26 (164 bytes, Thumb)
u32 sub_08037D82(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 28;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08037D8C;
    r0 = 0x2U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_08037D7E(r0, r1, r2, r3);
loc_08037D8C:
    r6 = 0x03003294U; // [0x08037E94]
    r5 = 0x0876CCB0U; // [0x08037E98]
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08037DFE;
    r0 = 0x3U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 28;
    if (cmp_lhs != cmp_rhs) return sub_08037D7E(r0, r1, r2, r3);
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08037DA0
    r1 = 0x700U; // (7 << 8)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08037D7E(r0, r1, r2, r3);
    r0 = r4;
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
    r0 = *(u8*)(r4 + 0x10);
    r1 = r5 + 4;
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
    r3 = r4;
    r0 = 0x0U;
    r2 = *(u8*)(r4 + 0x10);
    r1 = 0x10; // sp + 0x10
    r0 = sub_08037EA8(r0, r1, r2, r3); // 0x08037DEE
    r1 = r0;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x08037DF8: BL 0x0801191A
    return sub_08037D7E(r0, r1, r2, r3);
loc_08037DFE:
    r0 = *(u32*)(r5);
    r3 = *(u32*)(r6 + 0x4);
    r1 = r0 + 4;
    r5 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08037E1C;
loc_08037E0C:
    r2 = (r0 << 2);
    r2 = r2 + r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) return sub_08037D7E(r0, r1, r2, r3);
    r0 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08037E0C;
loc_08037E1C:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    return r0;
}

// ROM Address: 0x08037E2C..0x08037EC4 (152 bytes, Thumb)
u32 sub_08037E2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x08037E9C]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x08037EA0]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_08037E4A;
    r1 = r4;
    r1 += 0x18CU;
loc_08037E4A:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08037E4C
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08037E54
    r1 = 0x03003294U; // [0x08037E94]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08037E5C
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08037EA4]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08037E76;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08037E72: BL __call_via_r3
loc_08037E76:
    return r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003294U; // [0x08037E94]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08037E88;
    r0 = 0x0U;
loc_08037E88:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = 0x03003294U; // [0x08037E94]
    r0 += 0x8U;
    return r0; // BX lr
    r0 = r0;
    r2 += 0x94U;
    r0 = (r0 << 12);
    r4 = *(u32*)r4; r4 += 4;
    r5 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r6 = (r6 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08037EC4(r0, r1, r2, r3);
    r0 = 0x5CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08037EB6: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08037EC4(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08037EC4..0x08037F8A (198 bytes, Thumb)
u32 sub_08037EC4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08038178]
    r7 = 0x700U; // (7 << 8)
    r6 = 0x0876CCE0U; // [0x0803817C]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r7;
    r0 = *(u32*)(r6);
    r1 = r7;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08037ED4
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08037EEC;
    r1 = r7;
    r0 = *(u32*)(r6);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08037EE0: BL 0x08011732
    r1 = r7;
    r0 = *(u32*)(r6);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08037EE8
loc_08037EEC:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804B380U /* &VTable_0804B380 */; // [0x08038180]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x1C) = (u32)r1;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r1 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r5 -= 0x8U;
    r1 = *(u32*)(r5 + 0x4);
    r0 = r4;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = stack[4]; // [sp + 0x10]
    r0 += 0x1CU;
    *(u32*)(r4 + 0x58) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r1;
    *(u8*)(r4 + 0x10) = (u8)r1;
    r1 = 0x8U;
    *(u32*)(r4 + 0x3C) = (u32)r1;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r4 + 0x18) = (u32)r1;
    r1 = stack[3]; // [sp + 0xC]
    *(u32*)(r4 + 0x40) = (u32)r1;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = *(u32*)(r4 + 0x40);
    r2 = 0x0876DFF8U; // [0x08038184]
    r1 = (r0 << 1);
    r1 = r1 + r0;
    r1 = (r1 << 4);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x54) = (u32)r1;
    r1 = 0x0876CCE0U; // [0x0803817C]
    r0 = (r0 << 3);
    r1 += 0x8U;
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x30) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r1;
    r1 = 0x0U;
    stack[0] = r1; // [sp + 0x0]
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x08038188]
    r0 = (r0 << 5);
    r7 = r0 + r1;
    r5 = 0x0U;
loc_08037F4E:
    r0 = (r5 << 2);
    r1 = stack[0]; // [sp + 0x0]
    r0 = r0 + r4;
    *(u32*)(r0 + 0x44) = (u32)r1;
    r1 = (r5 << 1);
    r1 = r1 + r5;
    r0 = *(u32*)(r4 + 0x54);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    r6 = *(u8*)(r0 + 0x2);
    r1 = *(u8*)(r0 + 0x3);
    r6 *= r1;
    r2 = r6;
    r1 = *(u32*)(r0 + 0x8);
    r0 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08037F6C: BL 0x08049138
    r0 = ((u32)((s32)r6 >> 31));
    r0 = (r0 >> 27);
    r0 = r0 + r6;
    r1 = stack[0]; // [sp + 0x0]
    r0 = ((u32)((s32)r0 >> 5));
    r1 = r0 + r1;
    r7 = r7 + r6;
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 4;
    stack[0] = r1; // [sp + 0x0]
    if (cmp_lhs < cmp_rhs) goto loc_08037F4E;
    r0 = r4;
    return sub_08037EC0(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy22_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x08037F8A..0x08037FB4 (42 bytes, Thumb)
u32 Object_Destroy22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08038178]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0803818C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08037FA4;
    r0 = 0x0876CCE0U; // [0x0803817C]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08037FA0
loc_08037FA4:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08038190]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08037FB2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08037FAE: BL 0x0803D63C
loc_08037FB2:
    return r0;
}

// ROM Address: 0x08037FB4..0x08038010 (92 bytes, Thumb)
u32 sub_08037FB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x10);
    r6 = r4;
    r7 = 0x03001C34U; // [0x08038194]
    r6 += 0x34U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = *(u32*)(r7);
    if (cmp_lhs == cmp_rhs) return sub_08038010(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080380AA(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_080380A6(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r4 + 0x30);
    r0 = (r0 << 2);
    r1 = (r1 << 2);
    stack[16] = r1; // [sp + 0x40]
    stack[15] = r0; // [sp + 0x3C]
    r2 = *(u32*)(r4 + 0x34);
    r0 = r2 - r0;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = *(u32*)(r4 + 0x38);
    r2 = r5;
    r0 = r0 - r1;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = 0x0876CCE0U; // [0x0803817C]
    r2 += 0x19CU;
    r1 = r6;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080097C2(r0, r1, r2, r3); // 0x08037FF4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080380E2(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x34);
    r0 = 0xFFU;
    r0 += 0xA1U;
    r1 = (r1 << 8);
    *(u32*)(r0 + r5) = r1;
    r1 = *(u32*)(r4 + 0x38);
    r0 += 0x4U;
    r1 = (r1 << 8);
    *(u32*)(r0 + r5) = r1;
    return sub_080380AA(r0, r1, r2, r3);
}

// ROM Address: 0x08038010..0x080380AA (154 bytes, Thumb)
u32 sub_08038010(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080380A6;
    r0 = *(u32*)(r4 + 0x3C);
    r1 = *(u32*)(r4 + 0x2C);
    r2 = *(u32*)(r4 + 0x30);
    r1 *= r0;
    r2 *= r0;
    r0 = r1;
    stack[14] = r1; // [sp + 0x38]
    r1 = r2;
    stack[15] = r2; // [sp + 0x3C]
    r2 = *(u32*)(r4 + 0x1C);
    r3 = 0x20; // sp + 0x20
    r0 = r2 + r0;
    r2 = *(u32*)(r4 + 0x20);
    stack[14] = r0; // [sp + 0x38]
    r1 = r2 + r1;
    stack[15] = r1; // [sp + 0x3C]
    stack[16] = r1; // [sp + 0x40]
    r7 = r0;
    r0 = *(u32*)(r4 + 0x58);
    r1 = 0xC; // sp + 0xC
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u32*)(r4 + 0x40);
    r2 = r7;
    *(u8*)(r3) = (u8)r0;
    r0 = 0x086B8088U; // [0x08038198]
    r3 = 0x0; // sp + 0x0
    stack[10] = r0; // [sp + 0x28]
    r0 = 0x400U; // (1 << 10)
    stack[9] = r0; // [sp + 0x24]
    r0 = 0x0U;
    *(u8*)(r3 + 0xC) = (u8)r0;
    r0 = r1 + 4;
    r1 = stack[16]; // [sp + 0x40]
    r3 = stack[16]; // [sp + 0x40]
    r1 -= 0xCU;
    stack[5] = r1; // [sp + 0x14]
    r1 = 0x0876CCE0U; // [0x0803817C]
    stack[15] = r4; // [sp + 0x3C]
    r2 += 0x20U;
    r3 += 0xCU;
    stack[7] = r3; // [sp + 0x1C]
    stack[6] = r2; // [sp + 0x18]
    stack[4] = r7; // [sp + 0x10]
    r1 = *(u32*)(r1 + 0x4);
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08038072
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08038136(r0, r1, r2, r3);
    r0 = 0x0876CCE0U; // [0x0803817C]
    r2 = 0xC; // sp + 0xC
    r1 = 0x0U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08038082
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08038124(r0, r1, r2, r3);
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08038094: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_080380AC(r0, r1, r2, r3);
    r2 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r2;
loc_080380A6:
    return r0;
}

// ROM Address: 0x080380AA..0x080380AC (2 bytes, Thumb)
u32 sub_080380AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0803814E(r0, r1, r2, r3);
}

// ROM Address: 0x080380AC..0x080380E2 (54 bytes, Thumb)
u32 sub_080380AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u32*)(r4 + 0x40);
    r1 = 0x0876CCE0U; // [0x0803817C]
    r0 = (r0 << 3);
    r1 += 0x28U;
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    r3 = stack[16]; // [sp + 0x40]
    r0 = *(u32*)(r0 + 0x4);
    r1 = r7 + r1;
    r0 = r3 + r0;
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r1; r6 += 4;
    r0 = 0xFFU;
    r0 += 0xC9U;
    r0 = *(u32*)(r0 + r5);
    r6 -= 0x8U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080380EE(r0, r1, r2, r3);
    r0 = *(u8*)(r5 + 0x10);
    r1 = *(u32*)(r4 + 0x40);
    r2 = 0x1U;
    return sub_080380E4(r0, r1, r2, r3);
}

// ROM Address: 0x080380E4..0x0803813C (88 bytes, Thumb)
u32 sub_080380E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 ^= r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080380EE;
    *(u8*)(r4 + 0x10) = (u8)r2;
    return sub_080380A6(r0, r1, r2, r3);
loc_080380EE:
    r2 = r5;
    r2 += 0xFFU;
    r0 = 0x0876CCE0U; // [0x0803817C]
    r2 += 0x9DU;
    r1 = r6;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080097C2(r0, r1, r2, r3); // 0x080380FA
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803811E;
    r1 = 0x03001B00U; // [0x0803819C]
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08038106
    r1 = *(u32*)(r4 + 0x34);
    r0 = 0xFFU;
    r0 += 0xA1U;
    r1 = (r1 << 8);
    *(u32*)(r0 + r5) = r1;
    r1 = *(u32*)(r4 + 0x38);
    r0 += 0x4U;
    r1 = (r1 << 8);
    *(u32*)(r0 + r5) = r1;
    return sub_080380A6(r0, r1, r2, r3);
loc_0803811E:
    r2 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r2;
    return sub_080380A6(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r0; cmp_rhs = 80;
    if (cmp_lhs >= cmp_rhs) goto loc_08038130;
    r0 += 0x4U;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    return sub_080380A6(r0, r1, r2, r3);
loc_08038130:
    r2 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r2;
    return sub_080380A6(r0, r1, r2, r3);
    r2 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r2;
    return sub_080380A6(r0, r1, r2, r3);
}

// ROM Address: 0x08038192..0x0803828A (248 bytes, Thumb)
u32 sub_08038192(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    *(u16*)(r1 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r0 = r0 - r4;
    r0 = (r0 << 12);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080381AA: BL __call_via_r3
    return r0;
    r1 = 0x0876CCE0U; // [0x080383CC]
    r3 = *(u32*)(r0 + 0x1C);
    r1 = *(u32*)(r1 + 0x4);
    r2 = r0;
    r1 += 0x18U;
    r4 = *(u32*)(r1);
    r0 = *(u32*)(r0 + 0x20);
    r1 = *(u32*)(r1 + 0x4);
    r3 = r3 - r4;
    r2 += 0x24U;
    r0 = r0 - r1;
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    *(u32*)(r2 + 0x4) = (u32)r1;
    *(u32*)(r2) = (u32)r3;
    r0 = 0x1U;
    return r0; // BX lr
    r12 = r3;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r5 = stack[4]; // [sp + 0x10]
    r4 = *(u32*)(r0 + 0x54);
    r1 = (r1 << 2);
    r1 = r4 + r1;
    r3 = 0x0U;
    r6 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r0 + 0x24);
    r3 = r4 + r6;
    r4 = *(u32*)(r5);
    r6 = *(u32*)(r0 + 0x28);
    r4 = r3 + r4;
    r3 = 0x1U;
    r7 = (u32)(*(s8*)(r1 + r3));
    r5 = *(u32*)(r5 + 0x4);
    r3 = r6 + r7;
    r3 = r3 + r5;
    r7 = 0x0876CCE0U; // [0x080383CC]
    r5 = *(u8*)(r1 + 0x2);
    r6 = *(u8*)(r1 + 0x3);
    r7 += 0x48U;
    r7 = *(u32*)(r7 + 0x8);
    r5 = r4 + r5;
    r6 = r3 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08038286;
    r7 = 0x0876CCE0U; // [0x080383CC]
    r7 += 0x48U;
    r7 = *(u32*)(r7);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_08038286;
    r5 = 0x0876CCE0U; // [0x080383CC]
    r5 += 0x48U;
    r7 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08038286;
    r5 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08038286;
    r5 = *(u32*)(r2);
    r1 = *(u32*)(r1 + 0x4);
    r6 = 0xFE00FFFFU; // [0x080383D0]
    *(u32*)(r5) = (u32)r1;
    r1 = *(u32*)(r2);
    r4 = (r4 << 23);
    r5 = *(u32*)(r1);
    r4 = (r4 >> 7);
    r5 &= r6;
    r4 |= r5;
    *(u32*)(r1) = (u32)r4;
    r4 = (r4 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r4 = (r4 << 8);
    r1 = *(u32*)(r2);
    r3 |= r4;
    *(u32*)(r1) = (u32)r3;
    r1 = *(u16*)(r0 + 0xC);
    r3 = r1;
    r1 = *(u32*)(r2);
    r3 += r12;
    r1 += 0x4U;
    r4 = *(u32*)(r1);
    r3 = (r3 << 22);
    r4 = (r4 >> 10);
    r4 = (r4 << 10);
    r3 = (r3 >> 22);
    r3 |= r4;
    *(u32*)(r1) = (u32)r3;
    r0 = *(u8*)(r0 + 0x8);
    r4 = 0xC00U; // (3 << 10)
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r0 = (r0 << 10);
    r3 &= ~r4;
    r1 = *(u32*)(r2);
    r0 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = *(u32*)(r2);
    r0 += 0x8U;
    *(u32*)(r2) = (u32)r0;
loc_08038286:
    return r0; // BX lr
}

// ROM Address: 0x0803828A..0x080382C4 (58 bytes, Thumb)
u32 sub_0803828A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r1);
    stack[4] = r0; // [sp + 0x10]
    r6 = r1;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r4 + 0x3C);
    r2 = *(u32*)(r4 + 0x30);
    r1 *= r0;
    r2 *= r0;
    r0 = r1;
    stack[5] = r0; // [sp + 0x14]
    stack[3] = r2; // [sp + 0xC]
    stack[6] = r2; // [sp + 0x18]
    stack[2] = r1; // [sp + 0x8]
    r0 = *(u8*)(r4 + 0x10);
    r5 = 0x14; // sp + 0x14
    r7 = 0x10; // sp + 0x10
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_080382C4(r0, r1, r2, r3);
    stack[0] = r5; // [sp + 0x0]
    r2 = r7;
    r1 = 0x1U;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x48);
    r0 = sub_080381DC(r0, r1, r2, r3); // 0x080382BE
    return sub_080382EC(r0, r1, r2, r3);
}

// ROM Address: 0x080382C4..0x0803834C (136 bytes, Thumb)
u32 sub_080382C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[0] = r5; // [sp + 0x0]
    r2 = r7;
    r1 = 0x2U;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x4C);
    r0 = sub_080381DC(r0, r1, r2, r3); // 0x080382CE
    r0 = *(u8*)(r4 + 0x8);
    r2 = r7;
    r1 = 0x3U;
    r0 += 0xF6U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    stack[0] = r5; // [sp + 0x0]
    r3 = *(u32*)(r4 + 0x50);
    r0 = r4;
    r0 = sub_080381DC(r0, r1, r2, r3); // 0x080382E2
    r0 = *(u8*)(r4 + 0x8);
    r0 += 0xAU;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u32*)(r4 + 0x3C);
    r5 = 0x0U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08038320;
loc_080382F6:
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r4 + 0x30);
    r0 *= r5;
    r1 *= r5;
    stack[0] = r0; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[2] = r0; // [sp + 0x8]
    r1 = 0x0U;
    r2 = r7;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x44);
    r0 = sub_080381DC(r0, r1, r2, r3); // 0x08038312
    r0 = *(u32*)(r4 + 0x3C);
    r5 += 0x8U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_080382F6;
loc_08038320:
    r0 = stack[4]; // [sp + 0x10]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803834C(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_080383B6(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_080383BA(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08038342: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803834C..0x080383BE (114 bytes, Thumb)
u32 sub_0803834C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2 + 0x30);
    r5 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08038358;
    r0 = 0x0U;
    return sub_08038348(r0, r1, r2, r3);
loc_08038358:
    r1 = *(u8*)(r5 + 0x14);
    r2 = *(u32*)(r0 + 0x40);
    r3 = 0x1U;
    r2 ^= r3;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08038368;
    r0 = 0x0U;
    return sub_08038348(r0, r1, r2, r3);
loc_08038368:
    r1 = *(u32*)(r0 + 0x3C);
    r2 = *(u32*)(r0 + 0x2C);
    r3 = *(u32*)(r0 + 0x30);
    r2 *= r1;
    r3 *= r1;
    r1 = r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = r3;
    stack[2] = r3; // [sp + 0x8]
    r3 = *(u32*)(r0 + 0x1C);
    r0 = *(u32*)(r0 + 0x20);
    r1 = r3 + r1;
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r2 = r0;
    r4 = r0;
    r0 = r5 + 4;
    stack[1] = r1; // [sp + 0x4]
    r3 = r1;
    r5 = *(u32*)(r5 + 0x4);
    r3 += 0xCU;
    r1 -= 0xCU;
    r4 += 0xCU;
    r2 -= 0xCU;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_080383B2;
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_080383B2;
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_080383B2;
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_080383B2;
    r0 = 0x1U;
    return sub_08038348(r0, r1, r2, r3);
loc_080383B2:
    r0 = 0x0U;
    return sub_08038348(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08038348(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08038348(r0, r1, r2, r3);
}

// ROM Address: 0x080383BE..0x080383C6 (8 bytes, Thumb)
u32 sub_080383BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_080383C6(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080383C6..0x080383CA (4 bytes, Thumb)
u32 sub_080383C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080383D4..0x080383D6 (2 bytes, Thumb)
u32 sub_080383D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x080383D6..0x080383EE (24 bytes, Thumb)
u32 sub_080383D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080383EE(r0, r1, r2, r3);
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080383E2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080383EE(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080383EE..0x08038498 (170 bytes, Thumb)
u32 sub_080383EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080386DC]
    r7 = 0x0876E0B8U; // [0x080386E0]
    *(u32*)(r4) = (u32)r0;
    r0 = 0xC0U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r7 + 0x4);
    r1 = 0xC0U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080383FC
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08038414;
    r1 = 0xC0U;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08038408: BL 0x08011732
    r1 = 0xC0U;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08038410
loc_08038414:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804C55CU /* &VTable_0804C55C */; // [0x080386E4]
    r1 = r4;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x24) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r2;
    r2 = 0x0U;
    *(u32*)(r4 + 0x18) = (u32)r2;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r5 -= 0x8U;
    r0 = *(u32*)(r5 + 0x4);
    r1 += 0x24U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u8*)(r6 + 0x10);
    *(u32*)(r4 + 0x40) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08038440;
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0x2CU;
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_08038440:
    *(u32*)(r4 + 0x14) = (u32)r2;
    *(u32*)(r4 + 0x48) = (u32)r6;
    *(u8*)(r4 + 0x10) = (u8)r2;
    r0 = 0x8U;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)r1 = r0; r1 += 4;
    *(u32*)r1 = r3; r1 += 4;
    r5 -= 0x8U;
    r1 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x1C) = (u32)r1;
    *(u32*)(r4 + 0x20) = (u32)r3;
    r0 = *(u32*)(r4 + 0x40);
    r3 = 0x0876E264U; // [0x080386E8]
    r1 = (r0 << 3);
    r1 = r1 + r0;
    r1 = (r1 << 2);
    r1 = r1 + r3;
    *(u32*)(r4 + 0x44) = (u32)r1;
    r1 = 0x0807268CU; // [0x080386EC]
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r3 = r2;
    *(u32*)(r4 + 0x38) = (u32)r0;
    *(u32*)(r4 + 0x34) = (u32)r1;
    r0 = *(u32*)(r7);
    r5 = 0x000005C4U; // [0x080386F4]
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319440U; // [0x080386F0]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803847E
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x080386F8]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = *(u32*)(r4 + 0x44);
    r2 = 0xC0U;
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08038490: BL 0x08049138
    r0 = r4;
    return sub_080383EC(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy23_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x08038498..0x08038502 (106 bytes, Thumb)
u32 Object_Destroy23(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080386DC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080386FC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080384B2;
    r0 = 0x0876E0B8U; // [0x080386E0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080384AE
loc_080384B2:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08038700]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080384C0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080384BC: BL 0x0803D63C
loc_080384C0:
    return r0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08038502(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080384FE;
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r4 + 0x38);
    r0 = (r0 << 2);
    r1 = (r1 << 2);
    stack[16] = r1; // [sp + 0x40]
    stack[15] = r0; // [sp + 0x3C]
    r2 = *(u32*)(r4 + 0x1C);
    r0 = r2 + r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x20);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x3C);
    r0 -= 0x4U;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_080384FE;
    r6 = 0x0876E0B8U; // [0x080386E0]
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080384FA
loc_080384FE:
    return r0;
}

// ROM Address: 0x08038502..0x080385F2 (240 bytes, Thumb)
u32 sub_08038502(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080384FE(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x3C);
    r1 = *(u32*)(r4 + 0x34);
    r2 = *(u32*)(r4 + 0x38);
    r1 *= r0;
    r2 *= r0;
    r0 = r1;
    stack[13] = r1; // [sp + 0x34]
    r1 = r2;
    stack[14] = r2; // [sp + 0x38]
    r2 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    r0 = r2 + r0;
    r2 = *(u32*)(r4 + 0x20);
    stack[13] = r0; // [sp + 0x34]
    r1 = r2 + r1;
    stack[14] = r1; // [sp + 0x38]
    stack[16] = r1; // [sp + 0x40]
    stack[15] = r0; // [sp + 0x3C]
    r0 = *(u32*)(r4 + 0x48);
    r5 = 0x1U;
    stack[10] = r0; // [sp + 0x28]
    r0 = *(u32*)(r4 + 0x40);
    r1 = r4;
    *(u8*)(r3 + 0x1C) = (u8)r0;
    r0 = 0x086B8108U; // [0x08038704]
    r1 += 0x1CU;
    stack[9] = r0; // [sp + 0x24]
    r0 = 0x400U; // (1 << 10)
    stack[8] = r0; // [sp + 0x20]
    *(u8*)(r3 + 0x8) = (u8)r5;
    stack[14] = r4; // [sp + 0x38]
    r0 = stack[15]; // [sp + 0x3C]
    r2 = *(u32*)(r4 + 0x1C);
    r6 = 0x3C; // sp + 0x3C
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08038554;
    r0 = r6;
    goto loc_08038556;
loc_08038554:
    r0 = r1;
loc_08038556:
    r0 = *(u32*)(r0);
    r3 = stack[16]; // [sp + 0x40]
    r0 -= 0x2U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r4;
    r7 = *(u32*)(r4 + 0x20);
    r0 += 0x20U;
    r2 = r6 + 4;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_0803856E;
    r3 = r2;
    goto loc_08038570;
loc_0803856E:
    r3 = r0;
loc_08038570:
    r3 = *(u32*)(r3);
    r3 -= 0x2U;
    stack[4] = r3; // [sp + 0x10]
    r3 = stack[15]; // [sp + 0x3C]
    r7 = *(u32*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_08038580;
    r1 = r6;
loc_08038580:
    r1 = *(u32*)(r1);
    r1 += 0x2U;
    stack[5] = r1; // [sp + 0x14]
    r1 = stack[16]; // [sp + 0x40]
    r3 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_08038590;
    r0 = r2;
loc_08038590:
    r0 = *(u32*)(r0);
    r6 = 0x0876E0B8U; // [0x080386E0]
    r0 += 0x2U;
    stack[6] = r0; // [sp + 0x18]
    r1 = *(u32*)(r6 + 0x8);
    r7 = 0x8; // sp + 0x8
    r0 = r7 + 4;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x080385A2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080385EE;
    r2 = r7;
    r1 = 0x0U;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080385B0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080385BC;
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_080384FE(r0, r1, r2, r3);
loc_080385BC:
    r0 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    if (cmp_lhs >= cmp_rhs) goto loc_080385C8;
    r0 += 0x4U;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    goto loc_080385E0;
loc_080385C8:
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r4 + 0x38);
    r0 = (r0 << 2);
    r1 = (r1 << 2);
    stack[1] = r1; // [sp + 0x4]
    stack[0] = r0; // [sp + 0x0]
    r2 = *(u32*)(r4 + 0x1C);
    r0 = r2 + r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x20);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x20) = (u32)r0;
loc_080385E0:
    r0 = *(u32*)(r4 + 0x18);
    r0 += 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 240;
    if (cmp_lhs <= cmp_rhs) return sub_080384FE(r0, r1, r2, r3);
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_080384FE(r0, r1, r2, r3);
loc_080385EE:
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_080384FE(r0, r1, r2, r3);
}

// ROM Address: 0x080385F2..0x0803870A (280 bytes, Thumb)
u32 sub_080385F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080385FC: BL __call_via_r3
    return r0;
    r1 = 0x0876E0B8U; // [0x080386E0]
    r3 = *(u32*)(r0 + 0x1C);
    r1 = *(u32*)(r1 + 0x8);
    r2 = r0;
    r1 += 0x18U;
    r4 = *(u32*)(r1);
    r0 = *(u32*)(r0 + 0x20);
    r1 = *(u32*)(r1 + 0x4);
    r3 = r3 - r4;
    r2 += 0x2CU;
    r0 = r0 - r1;
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    *(u32*)(r2 + 0x4) = (u32)r1;
    *(u32*)(r2) = (u32)r3;
    r0 = 0x1U;
    return r0; // BX lr
    r12 = r3;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r5 = stack[4]; // [sp + 0x10]
    r4 = *(u32*)(r0 + 0x44);
    r1 = (r1 << 2);
    r1 = r4 + r1;
    r3 = 0x0U;
    r6 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r0 + 0x2C);
    r3 = r4 + r6;
    r4 = *(u32*)(r5);
    r6 = *(u32*)(r0 + 0x30);
    r4 = r3 + r4;
    r3 = 0x1U;
    r7 = (u32)(*(s8*)(r1 + r3));
    r5 = *(u32*)(r5 + 0x4);
    r3 = r6 + r7;
    r3 = r3 + r5;
    r7 = 0x0876E0B8U; // [0x080386E0]
    r5 = *(u8*)(r1 + 0x2);
    r6 = *(u8*)(r1 + 0x3);
    r7 += 0x14U;
    r7 = *(u32*)(r7 + 0x8);
    r5 = r4 + r5;
    r6 = r3 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_080386D8;
    r7 = 0x0876E0B8U; // [0x080386E0]
    r7 += 0x14U;
    r7 = *(u32*)(r7);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_080386D8;
    r5 = 0x0876E0B8U; // [0x080386E0]
    r5 += 0x14U;
    r7 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_080386D8;
    r5 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_080386D8;
    r5 = *(u32*)(r2);
    r1 = *(u32*)(r1 + 0x4);
    r6 = 0xFE00FFFFU; // [0x08038708]
    *(u32*)(r5) = (u32)r1;
    r1 = *(u32*)(r2);
    r4 = (r4 << 23);
    r5 = *(u32*)(r1);
    r4 = (r4 >> 7);
    r5 &= r6;
    r4 |= r5;
    *(u32*)(r1) = (u32)r4;
    r4 = (r4 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r4 = (r4 << 8);
    r1 = *(u32*)(r2);
    r3 |= r4;
    *(u32*)(r1) = (u32)r3;
    r1 = *(u16*)(r0 + 0xC);
    r3 = r1;
    r1 = *(u32*)(r2);
    r3 += r12;
    r1 += 0x4U;
    r4 = *(u32*)(r1);
    r3 = (r3 << 22);
    r4 = (r4 >> 10);
    r4 = (r4 << 10);
    r3 = (r3 >> 22);
    r3 |= r4;
    *(u32*)(r1) = (u32)r3;
    r0 = *(u8*)(r0 + 0x8);
    r4 = 0xC00U; // (3 << 10)
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r0 = (r0 << 10);
    r3 &= ~r4;
    r1 = *(u32*)(r2);
    r0 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = *(u32*)(r2);
    r0 += 0x8U;
    *(u32*)(r2) = (u32)r0;
loc_080386D8:
    return r0; // BX lr
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    return sub_08038854(r0, r1, r2, r3);
    r6 = (r6 >> 1);
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    *(u32*)r5 = r4; r5 += 4;
    *(u32*)r5 = r6; r5 += 4;
    r4 = (r0 >> 32);
    return sub_08038BB4(r0, r1, r2, r3);
    r6 = (r6 >> 1);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    stack[64] = r4; // [sp + 0x100]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r0 = r0;
    r1 = (r0 << 24);
    r0 = r0;
    return sub_08037FAC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u16*)(r1 + 0x8) = (u16)r0;
    r3 = (r5 >> 1);
    return r0;
}

// ROM Address: 0x0803870E..0x080387AC (158 bytes, Thumb)
u32 sub_0803870E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r1);
    r2 = 0x0876E0C4U; // [0x080387D4]
    r7 = 0x10; // sp + 0x10
    r6 = r1;
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    r1 = 0x0U;
    stack[4] = r0; // [sp + 0x10]
    r3 = 0x0U;
    r0 = r4;
    r0 = sub_0803862E(r0, r1, r2, r3); // 0x08038726
    r0 = *(u32*)(r4 + 0x3C);
    r5 = 0x8U;
    r0 -= 0x9U;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs <= cmp_rhs) goto loc_0803875E;
loc_08038734:
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r4 + 0x38);
    r0 *= r5;
    r1 *= r5;
    stack[0] = r0; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x1U;
    r2 = r7;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x2U;
    r0 = r4;
    r0 = sub_0803862E(r0, r1, r2, r3); // 0x08038750
    r0 = *(u32*)(r4 + 0x3C);
    r5 += 0x8U;
    r0 -= 0x9U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08038734;
loc_0803875E:
    r0 = *(u32*)(r4 + 0x3C);
    r1 = *(u32*)(r4 + 0x34);
    r0 -= 0x8U;
    r2 = *(u32*)(r4 + 0x38);
    r1 *= r0;
    r2 *= r0;
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r2; // [sp + 0xC]
    stack[0] = r1; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    r0 = r1;
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    stack[2] = r0; // [sp + 0x8]
    r1 = 0x2U;
    r3 = 0x4U;
    r0 = r4;
    r0 = sub_0803862E(r0, r1, r2, r3); // 0x08038780
    r0 = stack[4]; // [sp + 0x10]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    r2 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_080387AC(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_080387C2(r0, r1, r2, r3);
    r1 = *(u32*)(r2);
    r0 = r2;
    r2 = *(u32*)(r1 + 0x28);
    r3 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080387A4: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080387AC..0x080387C6 (26 bytes, Thumb)
u32 sub_080387AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r2 + 0xC);
    r1 = 0x06010000U; // [0x080387D8]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = *(u32*)(r2 + 0x44);
    r2 = 0xC0U;
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080387BA: BL 0x08049138
    r0 = 0x0U;
    return sub_080387AA(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_080387AA(r0, r1, r2, r3);
}

// ROM Address: 0x080387C6..0x080387CE (8 bytes, Thumb)
u32 sub_080387C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_080387CE(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080387CE..0x080387D2 (4 bytes, Thumb)
u32 sub_080387CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080387D2..0x080387DC (10 bytes, Thumb)
u32 sub_080387D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_08038960(r0, r1, r2, r3);
    r6 = (r6 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    return r0;
}

// ROM Address: 0x080387DC..0x0803881A (62 bytes, Thumb)
u32 sub_080387DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x3C);
    r0 += 0x1U;
    r1 = ((u32)((s32)r0 >> 2));
    r2 = (r1 << 30);
    r2 = (r2 >> 30);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x2C);
    r3 = *(u32*)(r4 + 0x30);
    r2 = (r2 << 2);
    r6 = 0x400U; // (1 << 10)
    r2 = r0 + r2;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    r5 = 0x0876E0DCU; // [0x08038A64]
    if (cmp_lhs == cmp_rhs) return sub_0803884E(r0, r1, r2, r3);
    r7 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803881A(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0803881A(r0, r1, r2, r3);
    r1 = r4;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08038812
    return r0;
}

// ROM Address: 0x0803881A..0x08038886 (108 bytes, Thumb)
u32 sub_0803881A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x30) = (u32)r2;
    r1 = (r1 << 31);
    r1 = (r1 >> 31);
    r3 = (r1 << 1);
    r0 = *(u16*)(r4 + 0xC);
    r1 = r3 + r1;
    r2 = 0x08770CF4U; // [0x08038A6C]
    r1 = (r1 << 2);
    r7 = 0x06010000U; // [0x08038A68]
    r1 = r1 + r2;
    r0 = (r0 << 5);
    r0 = r0 + r7;
    r2 = r6;
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08038836: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x30);
    r2 = 0x1U;
    r0 = (r0 << 5);
    r0 = r0 + r7;
    r0 = r0 + r6;
    r2 = (r2 << 9);
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803884A: BL 0x08049138
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08038816(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x34);
    r3 = 0x0; // sp + 0x0
    stack[8] = r1; // [sp + 0x20]
    r1 = *(u32*)(r4 + 0x38);
    r0 = sp;
    *(u8*)(r3 + 0x14) = (u8)r1;
    r1 = 0x086B8110U; // [0x08038A70]
    stack[6] = r6; // [sp + 0x18]
    stack[7] = r1; // [sp + 0x1C]
    r1 = *(u32*)(r4 + 0x34);
    r6 = r0 + 4;
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x10);
    *(u8*)(r3) = (u8)r1;
    stack[12] = r4; // [sp + 0x30]
    r4 += 0x18U;
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    *(u32*)r6 = r4; r6 += 4;
    r2 = r0;
    r0 = *(u32*)(r5);
    r1 = 0x0U;
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08038880
    return sub_08038816(r0, r1, r2, r3);
}

// ROM Address: 0x08038886..0x080388A0 (26 bytes, Thumb)
u32 sub_08038886(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080388A0(r0, r1, r2, r3);
    r0 = 0x40U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08038892: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080388A0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080388A0..0x0803893E (158 bytes, Thumb)
u32 sub_080388A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08038A74]
    r6 = 0x600U; // (3 << 9)
    r5 = 0x0876E0DCU; // [0x08038A64]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080388B0
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_080388C8;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x080388BC: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080388C4
loc_080388C8:
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r1 = 0x0804DD6CU /* &VTable_0804DD6C */; // [0x08038A78]
    *(u16*)(r4 + 0xC) = (u16)r0;
    *(u32*)(r4) = (u32)r1;
    r1 = stack[1]; // [sp + 0x4]
    r5 = 0x0U;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    r0 = (r0 << 5);
    *(u32*)(r4 + 0x14) = (u32)r1;
    *(u32*)(r4 + 0x10) = (u32)r2;
    *(u32*)(r4 + 0x3C) = (u32)r5;
    *(u32*)(r4 + 0x34) = (u32)r7;
    r3 = *(u8*)(r7 + 0x10);
    r6 = r3;
    *(u32*)(r4 + 0x38) = (u32)r3;
    r3 = (r6 << 4);
    r3 = r3 - r6;
    r6 = 0x08770D0CU; // [0x08038A7C]
    r3 = (r3 << 2);
    r3 = r3 + r6;
    *(u32*)(r4 + 0x2C) = (u32)r3;
    *(u32*)(r4 + 0x30) = (u32)r3;
    *(u32*)(r4 + 0x28) = (u32)r5;
    r3 = r2;
    r3 -= 0x10U;
    *(u32*)(r4 + 0x18) = (u32)r3;
    r5 = r1;
    r5 -= 0x10U;
    *(u32*)(r4 + 0x1C) = (u32)r5;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r3 = r1;
    r2 += 0x10U;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r3 += 0x10U;
    *(u32*)(r4 + 0x24) = (u32)r3;
    r1 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r5 = 0x06010000U; // [0x08038A68]
    r1 = 0x08770CF4U; // [0x08038A6C]
    r6 = 0x400U; // (1 << 10)
    r0 = r0 + r5;
    r2 = r6;
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08038924: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x2C);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 = r0 + r6;
    r2 = (r6 >> 1);
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08038936: BL 0x08049138
    r0 = r4;
    return sub_0803889C(r0, r1, r2, r3);
}

// ROM Address: 0x0803893E..0x08038A82 (324 bytes, Thumb)
u32 sub_0803893E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0876E0DCU; // [0x08038A64]
    r4 = *(u32*)(r0 + 0x10);
    r3 = *(u32*)(r3 + 0x4);
    r2 = *(u32*)(r1);
    r3 += 0x28U;
    r5 = *(u32*)(r3);
    r4 = r4 - r5;
    r5 = *(u32*)(r0 + 0x14);
    r3 = *(u32*)(r3 + 0x4);
    stack[0] = r4; // [sp + 0x0]
    r3 = r5 - r3;
    stack[1] = r3; // [sp + 0x4]
    r5 = r3;
    r3 = *(u32*)(r0 + 0x30);
    lr = r4;
    r6 = *(u32*)(r3 + 0x4);
    r3 = 0x0U;
    *(u32*)(r2) = (u32)r6;
    r7 = *(u32*)(r0 + 0x30);
    r7 = (u32)(*(s8*)(r7 + r3));
    r3 = r4 + r7;
    r7 = 0xFE00FFFFU; // [0x08038A80]
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r6 &= r7;
    r3 |= r6;
    *(u32*)(r2) = (u32)r3;
    r6 = *(u32*)(r0 + 0x30);
    r3 = (r3 >> 8);
    r6 = *(u8*)(r6 + 0x1);
    r3 = (r3 << 8);
    r7 = 0x3U;
    r6 = r5 + r6;
    r6 = (r6 << 24);
    r6 = (r6 >> 24);
    r3 |= r6;
    *(u32*)(r2) = (u32)r3;
    r3 = *(u16*)(r0 + 0xC);
    r6 = *(u32*)(r2 + 0x4);
    r7 = (r7 << 10);
    r3 += 0x20U;
    r3 = (r3 << 22);
    r6 = (r6 >> 10);
    r6 = (r6 << 10);
    r3 = (r3 >> 22);
    r6 |= r3;
    *(u32*)(r2 + 0x4) = (u32)r6;
    r3 = *(u8*)(r0 + 0x8);
    r6 &= ~r7;
    r3 = (r3 << 26);
    r3 = (r3 >> 30);
    r3 = (r3 << 10);
    r3 |= r6;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r6 = *(u32*)(r0 + 0x2C);
    r2 += 0x8U;
    r6 += 0x30U;
    r3 = *(u32*)(r6 + 0x4);
    r12 = r3;
    *(u32*)(r2) = (u32)r3;
    r3 = 0x0U;
    r7 = (u32)(*(s8*)(r6 + r3));
    r3 = r12;
    lr += r7;
    r7 = 0xFE00FFFFU; // [0x08038A80]
    r3 &= r7;
    r7 = lr;
    r7 = (r7 << 23);
    r7 = (r7 >> 7);
    r3 |= r7;
    *(u32*)(r2) = (u32)r3;
    r6 = *(u8*)(r6 + 0x1);
    r3 = (r3 >> 8);
    r3 = (r3 << 8);
    r6 = r5 + r6;
    r6 = (r6 << 24);
    r6 = (r6 >> 24);
    r3 |= r6;
    *(u32*)(r2) = (u32)r3;
    r3 = *(u16*)(r0 + 0xC);
    r6 = *(u32*)(r2 + 0x4);
    r7 = 0x3U;
    r3 += 0x20U;
    r3 = (r3 << 22);
    r6 = (r6 >> 10);
    r6 = (r6 << 10);
    r3 = (r3 >> 22);
    r3 |= r6;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r6 = *(u8*)(r0 + 0x8);
    r7 = (r7 << 10);
    r3 &= ~r7;
    r6 = (r6 << 26);
    r6 = (r6 >> 30);
    r6 = (r6 << 10);
    r3 |= r6;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r3 = *(u32*)(r0 + 0x28);
    r2 += 0x8U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08038A5C;
    r6 = 0x08770CF4U; // [0x08038A6C]
    r3 = *(u32*)(r6 + 0x4);
    r12 = r3;
    *(u32*)(r2) = (u32)r3;
    r3 = 0x0U;
    r7 = (u32)(*(s8*)(r6 + r3));
    r3 = r12;
    r4 = r4 + r7;
    r7 = 0xFE00FFFFU; // [0x08038A80]
    r4 = (r4 << 23);
    r4 = (r4 >> 7);
    r3 &= r7;
    r3 |= r4;
    *(u32*)(r2) = (u32)r3;
    r4 = *(u8*)(r6 + 0x1);
    r3 = (r3 >> 8);
    r3 = (r3 << 8);
    r4 = r5 + r4;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    r3 |= r4;
    *(u32*)(r2) = (u32)r3;
    r3 = *(u16*)(r0 + 0xC);
    r4 = *(u32*)(r2 + 0x4);
    r4 = (r4 >> 10);
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r4 = (r4 << 10);
    r3 |= r4;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r0 = *(u8*)(r0 + 0x8);
    r4 = 0xC00U; // (3 << 10)
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r0 = (r0 << 10);
    r3 &= ~r4;
    r0 |= r3;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r2 += 0x8U;
loc_08038A5C:
    *(u32*)(r1) = (u32)r2;
    r0 = 0x0U;
    return r0;
    return sub_08038C20(r0, r1, r2, r3);
    r6 = (r6 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    r4 = (r6 >> 19);
    r7 = (r6 >> 1);
    *(u16*)(r2 + 0x8) = (u16)r0;
    r3 = (r5 >> 1);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    if (cmp_lhs <= cmp_rhs) return sub_08038B54(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = (r1 >> 20);
    r7 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x08038A86..0x08038ACC (70 bytes, Thumb)
u32 sub_08038A86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) goto loc_08038A9C;
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_08038ACC(r0, r1, r2, r3);
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_080387DC(r0, r1, r2, r3); // 0x08038A94: BL 0x080387DC
    r0 = 0x0U;
    return r0;
loc_08038A9C:
    r0 = *(u32*)(r4 + 0x2C);
    r5 = 0x06010000U; // [0x08038AD0]
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x08770CF4U; // [0x08038AD4]
    r6 = 0x1U;
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r6 = (r6 << 10);
    r2 = r6;
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08038AB2: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x2C);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 = r0 + r6;
    r2 = (r6 >> 1);
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08038AC4: BL 0x08049138
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08038ACC..0x08038AD0 (4 bytes, Thumb)
u32 sub_08038ACC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08038AD0..0x08038AD8 (8 bytes, Thumb)
u32 sub_08038AD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r1 = (r0 << 24);
    r4 = (r6 >> 19);
    r7 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x08038AD8..0x08038AF8 (32 bytes, Thumb)
u32 sub_08038AD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08038AF8(r0, r1, r2, r3);
    r0 = 0x64U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08038AEA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08038AF8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08038AF8..0x08038BB2 (186 bytes, Thumb)
u32 sub_08038AF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1000U; // (1 << 12)
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038B02;
    r1 = (r1 >> 2);
loc_08038B02:
    r2 = r5;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x08038B06
    r0 = 0x0804D1B8U /* &VTable_0804D1B8 */; // [0x08038DC8]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r6);
    r2 = *(u32*)(r6 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = stack[10]; // [sp + 0x28]
    r1 = 0x40U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x44) = (u32)r0;
    *(u8*)(r1 + r4) = (u8)r0;
    *(u32*)(r4 + 0x50) = (u32)r0;
    *(u32*)(r4 + 0x54) = (u32)r0;
    r0 = *(u8*)(r5 + 0x10);
    r1 = 0x0877AD10U; // [0x08038DCC]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 4);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x5C) = (u32)r0;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08038B5A;
    r0 += 0xCU;
    *(u32*)(r4 + 0x5C) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08038B52: BL 0x08046AA2
    *(u32*)(r4 + 0x58) = (u32)r0;
    goto loc_08038BA4;
loc_08038B5A:
    r0 = *(u8*)(r5 + 0x10);
    r1 = 0x0807268CU; // [0x08038DD0]
    r3 = r7 - 1;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = 0x6U;
    r2 = *(u32*)(r0);
    r1 = r1 - r7;
    r0 = *(u32*)(r0 + 0x4);
    r2 *= r1;
    r0 *= r1;
    stack[2] = r0; // [sp + 0x8]
    r1 = stack[2]; // [sp + 0x8]
    r0 = r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = *(u32*)(r6);
    r0 = r2 + r0;
    r2 = *(u32*)(r6 + 0x4);
    stack[1] = r0; // [sp + 0x4]
    r1 = r2 + r1;
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    r1 = r5;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x0U;
    r2 = 0xC; // sp + 0xC
    stack[0] = r4; // [sp + 0x0]
    r0 = sub_08038AD8(r0, r1, r2, r3); // 0x08038B90: BL 0x08038AD8
    r1 = r0;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r0 = 0x0877110CU; // [0x08038DD4]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08038B9C: BL 0x0801191A
    r0 = 0x0U;
    *(u32*)(r4 + 0x58) = (u32)r0;
loc_08038BA4:
    r0 = *(u32*)(r4 + 0x5C);
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08038BAA
    r0 = r4;
    return sub_08038AF4(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy24_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x08038BB2..0x08038C32 (128 bytes, Thumb)
u32 Object_Destroy24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08038DD8]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08038DDC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08038BCC;
    r0 = 0x0877110CU; // [0x08038DD4]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08038BC8
loc_08038BCC:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08038DE0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08038BDA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08038BD6: BL 0x0803D63C
loc_08038BDA:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038BEC;
    r0 = sub_08038BDC(r0, r1, r2, r3); // 0x08038BE8
loc_08038BEC:
    r0 = r4;
    r0 += 0x28U;
    r1 = r0;
    r2 = *(u32*)(r4 + 0x28);
    r3 = *(u32*)(r4 + 0x30);
    r1 += 0x8U;
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r1 + 0x4);
    r2 = r2 + r3;
    r0 = r0 + r1;
    stack[2] = r0; // [sp + 0x8]
    r1 = ((u32)((s32)r2 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[1] = r2; // [sp + 0x4]
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = r4;
    r4 = 0x0877110CU; // [0x08038DD4]
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u32*)(r4);
    r5 = 0xC; // sp + 0xC
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08038C18
    r2 = 0x38U;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x08038C22
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08038C2A: BL 0x0801191A
    return r0;
}

// ROM Address: 0x08038C32..0x08038CC2 (144 bytes, Thumb)
u32 sub_08038C32(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r6 = r1;
    r1 = 0x3U;
    r2 = *(u32*)(r0 + 0x48);
    r4 = r0;
    r0 += 0x20U;
    r1 = (r1 << 8);
    r5 += 0x40U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08038CC2(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08038CEA(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x4C);
    r2 = *(u32*)(r4 + 0x48);
    r1 += 0x20U;
    r2 += 0x20U;
    r3 = *(u32*)r1; r1 += 4;
    r7 = *(u32*)r2; r2 += 4;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r2);
    r3 = r3 + r7;
    r1 = r1 + r2;
    stack[6] = r1; // [sp + 0x18]
    r2 = stack[6]; // [sp + 0x18]
    r1 = ((u32)((s32)r3 >> 1));
    stack[8] = r2; // [sp + 0x20]
    r2 = ((u32)((s32)r2 >> 1));
    stack[5] = r3; // [sp + 0x14]
    stack[5] = r1; // [sp + 0x14]
    stack[6] = r2; // [sp + 0x18]
    stack[10] = r2; // [sp + 0x28]
    stack[12] = r2; // [sp + 0x30]
    stack[9] = r1; // [sp + 0x24]
    stack[11] = r1; // [sp + 0x2C]
    stack[7] = r3; // [sp + 0x1C]
    r1 = *(u32*)(r0);
    r7 = *(u32*)(r0 + 0x4);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r3 = (r7 << 1);
    r3 = r3 + r7;
    r3 = (r3 << 8);
    r1 = (r1 << 8);
    r2 = ((u32)((s32)r1 >> 8));
    r3 = ((u32)((s32)r3 >> 8));
    stack[4] = r3; // [sp + 0x10]
    stack[6] = r3; // [sp + 0x18]
    stack[3] = r2; // [sp + 0xC]
    r3 = stack[11]; // [sp + 0x2C]
    stack[5] = r2; // [sp + 0x14]
    r2 = r2 + r3;
    r3 = stack[6]; // [sp + 0x18]
    r7 = stack[12]; // [sp + 0x30]
    stack[3] = r2; // [sp + 0xC]
    stack[7] = r2; // [sp + 0x1C]
    r1 = r0 + 4;
    r3 = r3 + r7;
    r2 = ((u32)((s32)r2 >> 2));
    stack[4] = r3; // [sp + 0x10]
    stack[8] = r3; // [sp + 0x20]
    r3 = ((u32)((s32)r3 >> 2));
    stack[4] = r3; // [sp + 0x10]
    stack[10] = r3; // [sp + 0x28]
    stack[3] = r2; // [sp + 0xC]
    stack[9] = r2; // [sp + 0x24]
    *(u32*)(r0) = (u32)r2;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r1) = (u32)r0;
    return sub_08038CEA(r0, r1, r2, r3);
}

// ROM Address: 0x08038CC2..0x08038CDC (26 bytes, Thumb)
u32 sub_08038CC2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r5);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08038CEC(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x44);
    r1 += 0x1U;
    *(u32*)(r4 + 0x44) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if (cmp_lhs < cmp_rhs) return sub_08038CDC(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_08038BDC(r0, r1, r2, r3); // 0x08038CD4
    return r0;
}

// ROM Address: 0x08038CDC..0x08038DC6 (234 bytes, Thumb)
u32 sub_08038CDC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = ((u32)((s32)r1 >> 3));
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r4 + 0x5C);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    goto loc_08038D5E;
    r2 = *(u32*)(r4 + 0x58);
    r2 = *(u16*)(r2 + 0x2);
    r3 = (r2 << 26);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08038D0C;
    r3 = 0x37U;
    r2 = *(u32*)(r4 + 0x50);
    r3 = ~r3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_08038D22;
    r2 -= 0x3U;
    *(u32*)(r4 + 0x50) = (u32)r2;
    r2 = *(u32*)(r4 + 0x20);
    r2 = r2 - r1;
    *(u32*)(r0) = (u32)r2;
    goto loc_08038D22;
loc_08038D0C:
    r2 = (r2 << 27);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08038D22;
    r2 = *(u32*)(r4 + 0x50);
    cmp_lhs = (s32)r2; cmp_rhs = 56;
    if (cmp_lhs >= cmp_rhs) goto loc_08038D22;
    r2 += 0x3U;
    *(u32*)(r4 + 0x50) = (u32)r2;
    r2 = *(u32*)(r4 + 0x20);
    r2 = r2 + r1;
    *(u32*)(r0) = (u32)r2;
loc_08038D22:
    r0 = *(u32*)(r4 + 0x58);
    r2 = *(u16*)(r0 + 0x2);
    r0 = (r2 << 25);
    r3 = (r0 >> 31);
    r0 = r4;
    r0 += 0x24U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038D48;
    r3 = 0x1FU;
    r2 = *(u32*)(r4 + 0x54);
    r3 = ~r3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_08038D5E;
    r2 -= 0x3U;
    *(u32*)(r4 + 0x54) = (u32)r2;
    r2 = *(u32*)(r4 + 0x24);
    r1 = r2 - r1;
    *(u32*)(r0) = (u32)r1;
    goto loc_08038D5E;
loc_08038D48:
    r2 = (r2 << 24);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08038D5E;
    r2 = *(u32*)(r4 + 0x54);
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08038D5E;
    r2 += 0x3U;
    *(u32*)(r4 + 0x54) = (u32)r2;
    r2 = *(u32*)(r4 + 0x24);
    r1 = r2 + r1;
    *(u32*)(r0) = (u32)r1;
loc_08038D5E:
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08038D60
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038DA6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038DA6;
    r0 = *(u8*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08038DA6;
    r1 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r1; // [sp + 0x20]
    r1 = *(u8*)(r4 + 0x10);
    r5 = r4;
    r5 += 0x28U;
    *(u8*)(r3 + 0x14) = (u8)r1;
    r1 = 0x086B8118U; // [0x08038DE4]
    r0 = sp;
    stack[7] = r1; // [sp + 0x1C]
    r1 = 0xFFU;
    r1 += 0x49U;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x1U;
    *(u8*)(r3) = (u8)r1;
    stack[12] = r4; // [sp + 0x30]
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r6 = r0 + 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    *(u32*)r6 = r5; r6 += 4;
    r2 = r0;
    r0 = 0x0877110CU; // [0x08038DD4]
    r1 = 0x0U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08038DA2
loc_08038DA6:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_08038CD8(r0, r1, r2, r3);
    *(u32*)(r4 + 0x14) = (u32)r1;
    r2 = *(u8*)(r1 + 0x2);
    r0 = *(u8*)(r1 + 0x3);
    r3 = 0x06010000U; // [0x08038DE8]
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08038DC0: BL 0x08049138
    return sub_08038CD8(r0, r1, r2, r3);
}

// ROM Address: 0x08038DEC..0x08038EE2 (246 bytes, Thumb)
u32 sub_08038DEC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x48);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038DFC;
    r0 = sub_08038DEC(r0, r1, r2, r3); // 0x08038DF8: BL 0x08038DEC
loc_08038DFC:
    r0 = r4;
    r0 += 0x28U;
    r1 = r0;
    r2 = *(u32*)(r4 + 0x28);
    r3 = *(u32*)(r4 + 0x30);
    r1 += 0x8U;
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r1 + 0x4);
    r2 = r2 + r3;
    r0 = r0 + r1;
    stack[2] = r0; // [sp + 0x8]
    r1 = ((u32)((s32)r2 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[1] = r2; // [sp + 0x4]
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = r4;
    r4 = 0x0877110CU; // [0x08038F20]
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u32*)(r4);
    r5 = 0xC; // sp + 0xC
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08038E28
    r2 = 0x38U;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x08038E32
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08038E3A: BL 0x0801191A
    return r0;
loc_08038E46:
    r1 = r0;
    r0 += 0x40U;
    r2 = 0x1U;
    *(u8*)(r0) = (u8)r2;
    r0 = *(u32*)(r1 + 0x48);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038E56;
    goto loc_08038E46;
loc_08038E56:
    r0 = *(u32*)(r1 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r1 + 0x10);
    r4 = sp;
    r5 = r4 + 4;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8118U; // [0x08038F24]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0xA00U; // (5 << 9)
    stack[6] = r0; // [sp + 0x18]
    r0 = r1;
    *(u8*)(r3) = (u8)r2;
    stack[12] = r1; // [sp + 0x30]
    r0 += 0x28U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r0 = 0x0877110CU; // [0x08038F20]
    r2 = r4;
    r1 = 0x0U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08038E82
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x48);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038EA4;
    r0 = *(u32*)(r5);
    r1 = sp;
    r0 += 0x20U;
    stack[0] = r0; // [sp + 0x0]
    r0 = *(u32*)(r4 + 0x48);
    r0 = sub_08038E8A(r0, r1, r2, r3); // 0x08038EA0
loc_08038EA4:
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x0807268CU; // [0x08038F28]
    r2 = *(u32*)(r5);
    r1 = (r0 << 3);
    r0 = *(u32*)(r3 + r1);
    r2 *= r0;
    r0 = *(u32*)(r4 + 0x20);
    r0 = r0 + r2;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r1 + r3;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r5);
    r1 *= r0;
    r0 = *(u32*)(r4 + 0x24);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x24) = (u32)r0;
    return r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x60) = (u32)r1;
    r0 = sub_08019BF4(r0, r1, r2, r3); // 0x08038ECC
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x60);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08038EE2(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08038EE2..0x08038F1E (60 bytes, Thumb)
u32 sub_08038EE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    *(u32*)(r4 + 0x60) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08038F00;
    r0 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038F12;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08038EFA: BL __call_via_r3
    goto loc_08038F12;
loc_08038F00:
    r0 = *(u32*)(r4 + 0x48);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08038F12;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08038F0E: BL __call_via_r3
loc_08038F12:
    r1 = r5;
    r0 = r4;
    r0 = sub_08019C44(r0, r1, r2, r3); // 0x08038F16: BL 0x08019C44
    r0 = 0x0U;
    return sub_08038EE0(r0, r1, r2, r3);
}

// ROM Address: 0x08038F1E..0x08038F3E (32 bytes, Thumb)
u32 sub_08038F1E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = ((u32)((s32)r1 >> 4));
    r7 = (r6 >> 1);
    *(u16*)(r3 + 0x8) = (u16)r0;
    r3 = (r5 >> 1);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    r7 = 0x03001BB0U; // [0x08039090]
    r5 = r1;
    r0 = *(u32*)(r7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08038F3E(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08038F3E..0x08039078 (314 bytes, Thumb)
u32 sub_08038F3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = 0x1C; // sp + 0x1C
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08038F42
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[9]; // [sp + 0x24]
    r2 = stack[10]; // [sp + 0x28]
    r1 = r0 + r1;
    r0 = stack[8]; // [sp + 0x20]
    stack[5] = r1; // [sp + 0x14]
    r0 = r0 + r2;
    stack[6] = r0; // [sp + 0x18]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[5] = r1; // [sp + 0x14]
    stack[11] = r1; // [sp + 0x2C]
    stack[6] = r0; // [sp + 0x18]
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u32*)(r7);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r6 = 0x7FFFFFFFU /* &INT_MAX */; // [0x08039094]
    if (cmp_lhs <= cmp_rhs) goto loc_08038FC0;
loc_08038F6C:
    r0 = (r4 << 2);
    r0 = r0 + r7;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0xC; // sp + 0xC
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08038F74
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
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    stack[7] = r1; // [sp + 0x1C]
    r1 = stack[11]; // [sp + 0x2C]
    r2 = stack[12]; // [sp + 0x30]
    r0 = r0 - r1;
    r1 = stack[8]; // [sp + 0x20]
    stack[5] = r0; // [sp + 0x14]
    r1 = r1 - r2;
    r2 = r0;
    r3 = r1;
    r3 *= r1;
    r2 *= r0;
    r2 = r2 + r3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    stack[6] = r1; // [sp + 0x18]
    if (cmp_lhs >= cmp_rhs) goto loc_08038FB8;
    r6 = r2;
    stack[9] = r0; // [sp + 0x24]
    stack[10] = r1; // [sp + 0x28]
loc_08038FB8:
    r0 = *(u32*)(r7);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08038F6C;
loc_08038FC0:
    r1 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08038FC8;
    r1 = (u32)(-(s32)r1);
loc_08038FC8:
    r0 = stack[10]; // [sp + 0x28]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08038FD0;
    r0 = (u32)(-(s32)r0);
loc_08038FD0:
    r4 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    stack[7] = r1; // [sp + 0x1C]
    stack[8] = r0; // [sp + 0x20]
    if (cmp_lhs <= cmp_rhs) goto loc_08038FE8;
    r1 = stack[9]; // [sp + 0x24]
    r0 = 0x3U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08038FE4;
    r0 = 0x2U;
loc_08038FE4:
    *(u8*)(r5 + 0x10) = (u8)r0;
    goto loc_08038FF6;
loc_08038FE8:
    r4 = r0;
    r1 = stack[10]; // [sp + 0x28]
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08038FF4;
    r0 = 0x0U;
loc_08038FF4:
    *(u8*)(r5 + 0x10) = (u8)r0;
loc_08038FF6:
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if (cmp_lhs >= cmp_rhs) goto loc_08038FFE;
    r0 = 0x0U;
    return sub_08038F3A(r0, r1, r2, r3);
loc_08038FFE:
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08039008: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803901E;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803901A: BL __call_via_r3
loc_0803901E:
    r0 = stack[9]; // [sp + 0x24]
    r1 = stack[10]; // [sp + 0x28]
    r0 = (r0 << 8);
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[13]; // [sp + 0x34]
    r1 = (r1 << 8);
    stack[8] = r1; // [sp + 0x20]
    r1 = *(u32*)(r0 + 0x4);
    r0 = stack[7]; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    r0 *= r1;
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    r5 += 0x1A0U;
    r1 = (r0 << 8);
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r4 = (r4 << 8);
    r0 = r4;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803904C: BL 0x08046E58
    r6 = r0;
    r0 = stack[4]; // [sp + 0x10]
    r1 = (r0 << 8);
    r0 = r4;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08039058: BL 0x08046E58
    stack[2] = r0; // [sp + 0x8]
    r1 = stack[2]; // [sp + 0x8]
    stack[1] = r6; // [sp + 0x4]
    stack[5] = r6; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    r0 = *(u32*)(r5);
    r0 = r0 + r6;
    *(u32*)(r5) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4);
    r1 = stack[6]; // [sp + 0x18]
    r0 = r0 + r1;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return sub_08038F3A(r0, r1, r2, r3);
}

// ROM Address: 0x08039078..0x080390FE (134 bytes, Thumb)
u32 sub_08039078(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803907E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803908C;
    r1 = 0x0804D2A8U; // [0x08039098]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803908C:
    return r0;
    r0 = r0;
    r0 = r6 - r6;
    r0 = (r0 << 12);
    r7 = *(u8*)(r7 + 0x1F);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08038FEC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    stack[8] = r1; // [sp + 0x20]
    r0 = *(u8*)(r1 + 0x10);
    r3 = 0x0; // sp + 0x0
    r4 = r1;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8090U; // [0x08039120]
    r5 = sp;
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x1000U; // (1 << 12)
    stack[6] = r0; // [sp + 0x18]
    r0 = 0x4; // sp + 0x4
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x080390B8
    r0 = 0xFFU;
    r0 += 0xD1U;
    r0 = *(u32*)(r0 + r4);
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    stack[12] = r4; // [sp + 0x30]
    r4 = 0x0877ADD0U; // [0x08039124]
    r2 = r5;
    r1 = 0x0U;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080390D0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080390FE(r0, r1, r2, r3);
    r4 = *(u32*)(r4);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080390DC
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08039128]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x0803912C]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080390F4
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080390FE..0x08039102 (4 bytes, Thumb)
u32 sub_080390FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_080390FA(r0, r1, r2, r3);
}

// ROM Address: 0x08039102..0x08039120 (30 bytes, Thumb)
u32 sub_08039102(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08039108: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039110: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803911E;
    r1 = 0x0804D65CU; // [0x08039130]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803911E:
    return r0;
}

// ROM Address: 0x08039120..0x08039122 (2 bytes, Thumb)
u32 sub_08039120(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r2 + 0x4) = (u16)r0;
    return r0;
}

// ROM Address: 0x08039122..0x08039152 (48 bytes, Thumb)
u32 sub_08039122(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r5 >> 1);
    r5 = 0x340; // sp + 0x340
    r7 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_080391EC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r7 = r1;
    r6 = r2;
    r5 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08039152(r0, r1, r2, r3);
    r0 = 0x27CU; // (159 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039146: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08039152(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08039152..0x08039182 (48 bytes, Thumb)
u32 sub_08039152(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0; // sp + 0x0
    r0 = *(u32*)r5; r5 += 4;
    r1 = *(u32*)r5; r5 += 4;
    *(u16*)(r3) = (u16)r0;
    *(u16*)(r3 + 0x2) = (u16)r1;
    r1 = r7;
    r0 = r4;
    r3 = sp;
    r2 = 0x03001B0CU; // [0x08039208]
    r0 = sub_0800E6B8(r0, r1, r2, r3); // 0x08039162
    r0 = 0x0804D514U /* &VTable_0804D514 */; // [0x0803920C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x228U; // (69 << 3)
    r0 = r4 + r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x30) = (u32)r1;
    *(u32*)(r0) = (u32)r4;
    r1 = *(u32*)(r6 + 0x8);
    r0 = sub_0800AA9C(r0, r1, r2, r3); // 0x0803917A
    r0 = r4;
    return sub_08039150(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy25_stores_the_table_and_frees_the_object
// ROM Address: 0x08039182..0x080391BA (56 bytes, Thumb)
u32 Object_Destroy25(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804D514U /* &VTable_0804D514 */; // [0x0803920C]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x228U; // (69 << 3)
    r1 = 0x0U;
    r0 = r4 + r0;
    r0 = sub_0800A9FE(r0, r1, r2, r3); // 0x08039194
    r1 = 0x0U;
    r0 = r4;
    r0 = Object_Destroy5(r0, r1, r2, r3); // 0x0803919C: BL 0x0800E6F8
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080391AA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080391A6: BL 0x0803D63C
loc_080391AA:
    return r0;
    r2 = 0x228U; // (69 << 3)
    r0 = r0 + r2;
    r0 = sub_0800AA4A(r0, r1, r2, r3); // 0x080391B4
    return r0;
}

// ROM Address: 0x080391BA..0x080391BE (4 bytes, Thumb)
u32 sub_080391BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}
