/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #16
 * Address Range: 0x0802DE66..0x08030C2E (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0802DE66..0x0802DE6A (4 bytes, Thumb)
u32 sub_0802DE66(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030030C0U; // [0x0802DE70]
    return r0; // BX lr
}

// ROM Address: 0x0802DFD8..0x0802DFFC (36 bytes, Thumb)
u32 sub_0802DFD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r1;
    r0 = sub_0800EE9E(r0, r1, r2, r3); // 0x0802DFDE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802E02E(r0, r1, r2, r3);
    r0 = 0x60U;
    r6 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802DFEA: BL 0x08000158
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802DFFC(r0, r1, r2, r3);
    r0 = 0x5EU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802DFF4: BL 0x08000158
    r5 = r0;
    return sub_0802E026(r0, r1, r2, r3);
}

// ROM Address: 0x0802DFFC..0x0802E036 (58 bytes, Thumb)
u32 sub_0802DFFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xDCU;
    r6 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E000: BL 0x08000158
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802E012;
    r0 = 0xDBU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E00A: BL 0x08000158
    r5 = r0;
    goto loc_0802E026;
loc_0802E012:
    r0 = 0xE5U;
    r6 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E016: BL 0x08000158
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802E026;
    r0 = 0xE4U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E020: BL 0x08000158
    r5 = r0;
loc_0802E026:
    r1 = r5;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802E02A
    r0 = r4;
    r0 = sub_0800EE9E(r0, r1, r2, r3); // 0x0802E030
    return r0;
}

// ROM Address: 0x0802E036..0x0802E03A (4 bytes, Thumb)
u32 sub_0802E036(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030030D8U; // [0x0802E03C]
    return r0; // BX lr
}

// ROM Address: 0x0802E040..0x0802E064 (36 bytes, Thumb)
u32 sub_0802E040(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r1;
    r0 = sub_0800EE9E(r0, r1, r2, r3); // 0x0802E046
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802E096(r0, r1, r2, r3);
    r0 = 0x5EU;
    r6 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E052: BL 0x08000158
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802E064(r0, r1, r2, r3);
    r0 = 0x60U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E05C: BL 0x08000158
    r5 = r0;
    return sub_0802E08E(r0, r1, r2, r3);
}

// ROM Address: 0x0802E064..0x0802E09E (58 bytes, Thumb)
u32 sub_0802E064(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xDBU;
    r6 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E068: BL 0x08000158
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802E07A;
    r0 = 0xDCU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E072: BL 0x08000158
    r5 = r0;
    goto loc_0802E08E;
loc_0802E07A:
    r0 = 0xE4U;
    r6 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E07E: BL 0x08000158
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802E08E;
    r0 = 0xE5U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802E088: BL 0x08000158
    r5 = r0;
loc_0802E08E:
    r1 = r5;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802E092
    r0 = r4;
    r0 = sub_0800EE9E(r0, r1, r2, r3); // 0x0802E098
    return r0;
}

// ROM Address: 0x0802E09E..0x0802E0A2 (4 bytes, Thumb)
u32 sub_0802E09E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030030DCU; // [0x0802E0A4]
    return r0; // BX lr
}

// ROM Address: 0x0802E0A8..0x0802E0DC (52 bytes, Thumb)
u32 sub_0802E0A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0803BB48(r0, r1, r2, r3); // 0x0802E0B0
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
    if (cmp_lhs < cmp_rhs) return sub_0802E0DC(r0, r1, r2, r3);
    r1 = stack[5]; // [sp + 0x14]
    return sub_0802E0E0(r0, r1, r2, r3);
}

// ROM Address: 0x0802E0DC..0x0802E130 (84 bytes, Thumb)
u32 sub_0802E0DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[5]; // [sp + 0x14]
    r1 = (u32)(-(s32)r0);
    r0 = 0x800U; // (1 << 11)
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802E100;
    r1 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0802E0F2;
    r1 = stack[6]; // [sp + 0x18]
    goto loc_0802E0F6;
loc_0802E0F2:
    r1 = stack[6]; // [sp + 0x18]
    r1 = (u32)(-(s32)r1);
loc_0802E0F6:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802E100;
    r0 = 0x1U;
loc_0802E0FC:
    return r0;
loc_0802E100:
    r0 = 0x0U;
    goto loc_0802E0FC;
    r0 += 0xCU;
    r4 = *(u32*)r0; r0 += 4;
    r5 = *(u32*)r0; r0 += 4;
    r6 = *(u32*)r0; r0 += 4;
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802E10C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802E12A;
    r2 = 0x32U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r2 = 0x0U;
    *(u32*)(r0 + 0x14) = (u32)r2;
    r2 = 0x08049A3CU /* &VTable_08049A3C */; // [0x0802E12C]
    *(u32*)(r0) = (u32)r2;
    r2 = (r5 << 8);
    *(u32*)(r0 + 0x1C) = (u32)r2;
    r2 = (r6 << 8);
    *(u32*)(r0 + 0x20) = (u32)r2;
loc_0802E12A:
    return r0;
    r2 = stack[60]; // [sp + 0xF0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0802E1C0..0x0802E242 (130 bytes, Thumb)
u32 sub_0802E1C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x083192A8U; // [0x0802E260]
    r1 = (r1 << 2);
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r1 = r1 + r2;
    r4 = 0x000005C4U; // [0x0802E264]
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r4;
    r0 = sub_0803E32C(r0, r1, r2, r3); // 0x0802E1D2: BL 0x0803E32C
    return r0;
    r0 = 0x03001C34U; // [0x0802E268]
    r5 = 0x0U;
    r0 = *(u32*)(r0);
    r4 = r1;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802E26C]
    r1 = r5;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[1] = r5; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    if (cmp_lhs == cmp_rhs) goto loc_0802E1F8;
    r1 = r4;
    r1 += 0x18CU;
loc_0802E1F8:
    r0 = sp;
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802E1FA
    r1 = 0x3U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802E202
    r1 = 0x030030E0U; // [0x0802E270]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802E20A
    r0 = 0x08757324U; // [0x0802E25C]
    r1 = 0xBDU;
    r2 = 0x083192A8U; // [0x0802E260]
    r1 = (r1 << 2);
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r1 = r1 + r2;
    r4 = 0x000005C4U; // [0x0802E264]
    r2 = 0x40U;
    r3 = r5;
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802E224
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802E274]
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802E23E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802E23A: BL __call_via_r3
loc_0802E23E:
    return r0;
}

// ROM Address: 0x0802E242..0x0802E254 (18 bytes, Thumb)
u32 sub_0802E242(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x030030E0U; // [0x0802E270]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802E250;
    r0 = 0x0U;
loc_0802E250:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802E278..0x0802E2F2 (122 bytes, Thumb)
u32 sub_0802E278(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = r1;
    r0 = sub_0800DE6C(r0, r1, r2, r3); // 0x0802E280
    r0 = *(u8*)(r4 + 0x11);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0802E2EE;
    r0 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802E2EE;
    r6 = 0x08757350U; // [0x0802E2F8]
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802E294
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) goto loc_0802E2EE;
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
    r3 = r4;
    stack[3] = r1; // [sp + 0xC]
    r0 = *(u8*)(r3 + 0x10);
    r1 = r6 + 4;
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
    r0 = sub_0801C900(r0, r1, r2, r3); // 0x0802E2DE
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802E2E6: BL 0x0801191A
    r0 = 0x1U;
    *(u32*)(r5 + 0x8) = (u32)r0;
loc_0802E2EE:
    return r0;
}

// ROM Address: 0x0802E2F2..0x0802E2F6 (4 bytes, Thumb)
u32 sub_0802E2F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030030E8U; // [0x0802E2FC]
    return r0; // BX lr
}

// ROM Address: 0x0802E300..0x0802E336 (54 bytes, Thumb)
u32 sub_0802E300(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r1 + 0x58);
    r4 = r1;
    r0 += 0x48U;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802E320;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802E314
    r1 = 0x03001B20U; // [0x0802E340]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802E31C
loc_0802E320:
    r1 = r4;
    r1 += 0x160U;
    r3 = 0x16U;
    r0 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_0802E336(r0, r1, r2, r3);
    r0 += 0x1U;
    *(u16*)(r1 + 0x16) = (u16)r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802E336..0x0802E33A (4 bytes, Thumb)
u32 sub_0802E336(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802E33A..0x0802E33E (4 bytes, Thumb)
u32 sub_0802E33A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030030F8U; // [0x0802E344]
    return r0; // BX lr
}

// ROM Address: 0x0802E354..0x0802E3B4 (96 bytes, Thumb)
u32 sub_0802E354(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x96U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    r5 = *(u32*)(r4 + 0x8);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802E368: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802E376;
    r1 = 0x08049D74U; // [0x0802E638]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
loc_0802E376:
    r1 = r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x03001C34U; // [0x0802E63C]
    r0 = *(u32*)(r0);
    r0 = sub_08010BB8(r0, r1, r2, r3); // 0x0802E37E
    return r0;
    r7 = 0x0875738CU; // [0x0802E640]
    r4 = r1;
    r1 = *(u32*)(r7);
    r2 = 0xF3U;
    r1 = *(u16*)(r1 + 0x4);
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_0802E3A0;
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x4U;
    r2 = *(u32*)(r1);
    r2 -= 0x5U;
    *(u32*)(r1) = (u32)r2;
loc_0802E3A0:
    r1 = *(u32*)(r0 + 0x8);
    r2 = (r1 >> 31);
    r1 = r2 + r1;
    r2 = *(u32*)(r0 + 0x4);
    r1 = ((u32)((s32)r1 >> 1));
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_0802E3B4(r0, r1, r2, r3);
    r1 = 0x1U;
    return sub_0802E3B6(r0, r1, r2, r3);
}

// ROM Address: 0x0802E3B4..0x0802E42E (122 bytes, Thumb)
u32 sub_0802E3B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r0 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0802E42A;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802E3C2
    r6 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_0802E41C;
    r5 = (r6 << 2);
    r0 = r5;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802E3D2
    r5 = r0 + r5;
    r0 = 0xC; // sp + 0xC
    r1 = r4;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0802E3DC
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
    stack[1] = r1; // [sp + 0x4]
    r2 = 0x37U;
    stack[0] = r5; // [sp + 0x0]
    stack[7] = r1; // [sp + 0x1C]
    r3 = 0x1C; // sp + 0x1C
    r1 = r3;
    r5 = 0x4U;
    stack[2] = r2; // [sp + 0x8]
    r0 = 0x0U;
    r3 = r5;
    r2 = 0x086FD9D0U; // [0x0802E644]
    stack[1] = r6; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0802E410
    r1 = r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802E418: BL 0x0801191A
loc_0802E41C:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802E426: BL __call_via_r3
loc_0802E42A:
    return r0;
}

// ROM Address: 0x0802E42E..0x0802E444 (22 bytes, Thumb)
u32 sub_0802E42E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x03001C34U; // [0x0802E63C]
    r1 = 0x03001C3CU; // [0x0802E648]
    r0 = *(u32*)(r0);
    r0 = sub_08010BB8(r0, r1, r2, r3); // 0x0802E438
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0802E43E: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0802E444..0x0802E55A (278 bytes, Thumb)
u32 sub_0802E444(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r6 = stack[16]; // [sp + 0x40]
    if (cmp_lhs != cmp_rhs) goto loc_0802E464;
    r0 = 0x54U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802E456: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802E464;
    r0 = r4;
loc_0802E460:
    return r0;
loc_0802E464:
    r1 = 0xFFU;
    r1 += 0x1U;
    r2 = r7;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x0802E46C
    r0 = 0x0804AC5CU /* &VTable_0804AC5C */; // [0x0802E64C]
    r1 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r2 = *(u32*)(r5);
    r3 = *(u32*)(r5 + 0x4);
    *(u32*)(r4 + 0x48) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x20) = (u32)r2;
    r3 = (r3 << 8);
    *(u32*)(r4 + 0x24) = (u32)r3;
    r1 = *(u32*)(r6);
    r2 = *(u32*)(r5);
    r0 = r4;
    r1 = r1 - r2;
    r2 = *(u32*)(r6 + 0x4);
    r3 = *(u32*)(r5 + 0x4);
    r0 += 0x40U;
    r2 = r2 - r3;
    stack[8] = r2; // [sp + 0x20]
    stack[10] = r2; // [sp + 0x28]
    r2 = r1;
    r7 = r0 + 4;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    stack[7] = r1; // [sp + 0x1C]
    stack[9] = r1; // [sp + 0x24]
    if (cmp_lhs >= cmp_rhs) goto loc_0802E4A6;
    r2 = (u32)(-(s32)r2);
loc_0802E4A6:
    r1 = stack[10]; // [sp + 0x28]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802E4AE;
    r1 = (u32)(-(s32)r1);
loc_0802E4AE:
    stack[8] = r1; // [sp + 0x20]
    r1 = r2;
    stack[7] = r2; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0802E4BC;
    r1 = r2;
loc_0802E4BC:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802E4C2;
    r1 = 0x1U;
loc_0802E4C2:
    r2 = stack[9]; // [sp + 0x24]
    r3 = stack[10]; // [sp + 0x28]
    r2 = (r2 << 8);
    stack[2] = r0; // [sp + 0x8]
    r0 = (r2 << 9);
    r3 = (r3 << 8);
    stack[8] = r3; // [sp + 0x20]
    stack[7] = r2; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    r0 = ((u32)((s32)r0 >> 8));
    r2 = (r2 << 9);
    r2 = ((u32)((s32)r2 >> 8));
    r5 = (r1 << 8);
    r1 = (r0 << 8);
    stack[0] = r0; // [sp + 0x0]
    stack[3] = r0; // [sp + 0xC]
    r0 = r5;
    stack[1] = r2; // [sp + 0x4]
    stack[4] = r2; // [sp + 0x10]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802E4E8: BL 0x08046E58
    r6 = r0;
    r0 = stack[4]; // [sp + 0x10]
    r1 = (r0 << 8);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802E4F4: BL 0x08046E58
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    stack[0] = r6; // [sp + 0x0]
    stack[5] = r6; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    *(u32*)(r0) = (u32)r6;
    r0 = stack[6]; // [sp + 0x18]
    r1 = 0x0U;
    *(u32*)(r7) = (u32)r0;
    r0 = 0x087579B8U; // [0x0802E650]
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x4C) = (u32)r1;
    r1 = stack[9]; // [sp + 0x24]
    r2 = (r1 << 1);
    r1 = stack[10]; // [sp + 0x28]
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r5 = (u32)(-(s32)r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_0802E54C;
    r6 = stack[9]; // [sp + 0x24]
    r3 = (r6 << 1);
    r3 = r3 + r6;
    r3 = (r3 << 2);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_0802E534;
    r0 += 0x18U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    goto loc_0802E54C;
loc_0802E534:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0802E53E;
    r0 += 0x60U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    goto loc_0802E54C;
loc_0802E53E:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0802E548;
    r0 += 0x48U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    goto loc_0802E54C;
loc_0802E548:
    r0 += 0x30U;
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_0802E54C:
    r0 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802E552
    r0 = r4;
    goto loc_0802E460;
    return r0;
}

// ROM Address: 0x0802E568..0x0802E58E (38 bytes, Thumb)
u32 sub_0802E568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x48);
    r0 += 0x1U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    r5 = r1;
    r2 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802E596(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x4C);
    r1 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802E58E(r0, r1, r2, r3);
    r1 += 0xCU;
    *(u32*)(r4 + 0x18) = (u32)r1;
    return sub_0802E592(r0, r1, r2, r3);
}

// ROM Address: 0x0802E58E..0x0802E638 (170 bytes, Thumb)
u32 sub_0802E58E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 -= 0xCU;
    *(u32*)(r4 + 0x18) = (u32)r1;
    r0 ^= r2;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r4 + 0x40);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = *(u32*)(r4 + 0x44);
    r1 = *(u32*)(r4 + 0x24);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802E5A8
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802E5CE;
    r7 = 0x0875738CU; // [0x0802E640]
    r0 = r4;
    r0 += 0x28U;
    r1 = *(u32*)(r7 + 0x8);
    r5 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0802E5BE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802E5D2;
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802E5CA
loc_0802E5CE:
    return r0;
loc_0802E5D2:
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802E5CE;
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r6 = sp;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8090U; // [0x0802E654]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r0 = 0x4; // sp + 0x4
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    stack[12] = r4; // [sp + 0x30]
    r2 = r6;
    r1 = 0x0U;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802E602
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802E5CE;
    r0 = 0x03001C34U; // [0x0802E63C]
    r5 = *(u32*)(r0);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802E610: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802E61C;
    r1 = 0x0804AB34U /* &VTable_0804AB34 */; // [0x0802E658]
    *(u32*)(r0) = (u32)r1;
loc_0802E61C:
    r6 = r0;
    r1 = 0x15U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802E622
    r1 = r6;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802E62A
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802E632
    goto loc_0802E5CE;
    return r0;
}

// ROM Address: 0x0802E6AC..0x0802E6FA (78 bytes, Thumb)
u32 sub_0802E6AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x087573A0U; // [0x0802E814]
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x0802E6B4: BL 0x0802BFBC
    r1 = r0;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x087573A0U; // [0x0802E814]
    r0 -= 0x8U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802E6C2: BL 0x0801191A
    r0 = 0x0U;
    *(u16*)(r4 + 0x8) = (u16)r0;
    return r0;
    r5 = 0x087573A0U; // [0x0802E814]
    r4 = r0;
    r5 -= 0x8U;
    r1 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802E6D8
    r0 = *(u32*)(r5);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x0802E6DE
    r0 = *(u32*)(r5);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x0802E6E4
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_0802E6F8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802E6F4: BL __call_via_r3
loc_0802E6F8:
    return r0;
}

// ROM Address: 0x0802E6FA..0x0802E708 (14 bytes, Thumb)
u32 sub_0802E6FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x087573A0U; // [0x0802E814]
    r0 -= 0x8U;
    r0 = *(u32*)(r0);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x0802E702
    return r0;
}

// ROM Address: 0x0802E732..0x0802E746 (20 bytes, Thumb)
u32 sub_0802E732(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802E746(r0, r1, r2, r3);
    r0 = 0x48U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802E73A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802E746(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802E746..0x0802E7AA (100 bytes, Thumb)
u32 sub_0802E746(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x200U; // (1 << 9)
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802E818]
    r5 = 0x087573A0U; // [0x0802E814]
    r1 = r6;
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r5 -= 0x8U;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802E758
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802E770;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0802E764: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802E76C
loc_0802E770:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804A394U /* &VTable_0804A394 */; // [0x0802E81C]
    r2 = 0x10U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4 + r2;
    r1 = 0x20U;
    r6 = r0;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0802E77E
    r0 = *(u32*)(r5 + 0x4);
    r2 = 0x1U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x13) = (u8)r0;
    r1 = 0x0803F5A5U; // [0x0802E820]
    *(u8*)(r6 + 0x2) = (u8)r2;
    *(u32*)(r6 + 0x20) = (u32)r1;
    *(u8*)(r4 + 0x10) = (u8)r2;
    r0 = 0x78U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = 0x10U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x7FFFFFFFU /* &INT_MAX */; // [0x0802E824]
    r1 = 0x0U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u32*)(r4 + 0x44) = (u32)r1;
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802E7AA..0x0802E7B0 (6 bytes, Thumb)
u32 sub_0802E7AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1U;
    *(u32*)(r0 + 0x44) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x0802E7B4..0x0802E80E (90 bytes, Thumb)
u32 sub_0802E7B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r2 = *(u32*)(r0 + 0x40);
    r0 = *(u32*)(r0 + 0x34);
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0802E7C0: BL 0x08046E40
    r0 = 0x8U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = 0x7U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x03002C00U; // [0x0802E828]
    r1 = 0x0802E82CU;
    r2 = *(u32*)(r0);
    r0 = r4;
    r0 += 0x10U;
    r6 = r0;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0802E7D8
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802E834]
    r2 = 0x087573A0U; // [0x0802E814]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r2 += 0x8U;
    r0 = r6;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0802E7EA: BL 0x0804915C
    r0 = *(u32*)(r5);
    r1 = r0;
    r1 += 0x8U;
    *(u32*)(r5) = (u32)r1;
    r1 = 0x8078600CU; // [0x0802E838]
    *(u32*)(r0) = (u32)r1;
    r1 = *(u16*)(r4 + 0xC);
    r2 = *(u32*)(r0 + 0x4);
    r2 = (r2 >> 10);
    r2 = (r2 << 10);
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802E80E..0x0802E812 (4 bytes, Thumb)
u32 sub_0802E80E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0802E83C..0x0802E85A (30 bytes, Thumb)
u32 sub_0802E83C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r6 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802E85A(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x79U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802E84C: BL 0x0803D5B8
    r6 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802E85A(r0, r1, r2, r3);
    r0 = r6;
    return r0;
}

// ROM Address: 0x0802E85A..0x0802E97A (288 bytes, Thumb)
u32 sub_0802E85A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x0802EB2C]
    r4 = 0x0U;
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r4; r6 += 4;
    r6 -= 0x8U;
    r0 = r6;
    r0 += 0x100U;
    *(u32*)(r0 + 0xC) = (u32)r4;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0x10) = (u32)r4;
    r0 = 0x0804A5E0U /* &VTable_0804A5E0 */; // [0x0802EB30]
    r5 = r6;
    r5 += 0x114U;
    *(u32*)(r6) = (u32)r0;
    stack[2] = r5; // [sp + 0x8]
    *(u32*)(r5) = (u32)r4;
    r5 = 0x08757A30U; // [0x0802EB34]
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x0802E880
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x0802E886
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x0802E88C
    r0 = r6;
    r0 += 0x140U;
    stack[1] = r0; // [sp + 0x4]
    *(u32*)(r0 + 0x34) = (u32)r7;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0800433E(r0, r1, r2, r3); // 0x0802E89C
    r7 = r0;
    r1 = 0x90U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802E8A4: BL 0x08046E58
    stack[0] = r0; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    if (cmp_lhs <= cmp_rhs) goto loc_0802E8B2;
    r0 = 0x30U;
    stack[0] = r0; // [sp + 0x0]
loc_0802E8B2:
    r0 = stack[0]; // [sp + 0x0]
    r7 -= 0x1U;
    r0 *= r7;
    r0 = ((u32)((s32)r0 >> 1));
    r1 = 0x70U;
    r7 = r1 - r0;
    r0 = stack[1]; // [sp + 0x4]
    *(u32*)(r0 + 0x20) = (u32)r4;
    r4 = 0x0U;
loc_0802E8C4:
    r1 = 0x68U;
    r2 = 0x08757A30U; // [0x0802EB34]
    r1 *= r4;
    r0 = *(u32*)(r2 + 0x8);
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u8*)(r0);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0802E950;
    r5 = stack[2]; // [sp + 0x8]
    r3 = r2;
    r2 = *(u32*)(r2 + 0x8);
    r1 = *(u32*)(r5);
    r2 = *(u8*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_0802E8EC;
    r5 = stack[1]; // [sp + 0x4]
    *(u32*)(r5 + 0x20) = (u32)r1;
loc_0802E8EC:
    r2 = r1 + 1;
    r5 = stack[2]; // [sp + 0x8]
    r1 = (r1 << 3);
    *(u32*)(r5) = (u32)r2;
    r5 = r1 + r5;
    r5 += 0x4U;
    *(u32*)(r5) = (u32)r4;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x0802EB38]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x0802E906
    r1 = r0;
    r0 = 0x0U;
    r2 = 0x03001B0CU; // [0x0802EB3C]
    r0 = sub_0800EB60(r0, r1, r2, r3); // 0x0802E910
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 += 0x6CU;
    r1 = 0x58U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r7;
    r0 = stack[0]; // [sp + 0x0]
    r3 = 0x08757A30U; // [0x0802EB34]
    r7 = r7 + r0;
    r0 = *(u32*)(r3 + 0x8);
    r1 = *(u32*)(r5);
    r3 = 0x68U;
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0802E950;
    r1 = *(u32*)(r5 + 0x4);
    r0 = 0x1U;
    *(u8*)(r1 + 0x10) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    r1 = 0x0805682CU; // [0x0802EB40]
    r2 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802E950;
    r0 = sub_0800EECC(r0, r1, r2, r3); // 0x0802E94C: BL 0x0800EECC
loc_0802E950:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_0802E8C4;
    r5 = 0x4; // sp + 0x4
    r0 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r0 = *(u32*)(r0 + 0x20);
    r1 = 0x1U;
    r0 = (r0 << 3);
    r0 = r0 + r5;
    r4 = *(u32*)(r0 + 0x8);
    r0 = stack[1]; // [sp + 0x4]
    *(u32*)(r0 + 0x24) = (u32)r4;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802E96A
    r1 = 0x03001B58U; // [0x0802EB44]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802E972
    r0 = r6;
    return sub_0802E856(r0, r1, r2, r3);
}

// Evidence: writes BG3HOFS 0x0400001C: 0x0802E9AC ldr r0, [pc, #0x19c] (= 0x0400001C) then 0x0802E9B0 strh r5, [r0]; writes BG3VOFS 0x0400001E: 0x0802E9B2 strh r5, [r0, #2]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0802E97A
// ROM Address: 0x0802E97A..0x0802EC58 (734 bytes, Thumb)
u32 Bg_WriteScroll3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x0802EB48]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802E988: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802E996: BL 0x0804912C
    r6 = 0x4000000U; // (1 << 26)
    r5 = 0x0U;
    *(u16*)(r6) = (u16)r5;
    *(u16*)(r6 + 0x10) = (u16)r5;
    *(u16*)(r6 + 0x12) = (u16)r5;
    *(u16*)(r6 + 0x14) = (u16)r5;
    *(u16*)(r6 + 0x16) = (u16)r5;
    *(u16*)(r6 + 0x18) = (u16)r5;
    r0 = 0x0400001CU /* &REG_BG3HOFS */; // [0x0802EB4C]
    *(u16*)(r6 + 0x1A) = (u16)r5;
    *(u16*)(r0) = (u16)r5;
    *(u16*)(r0 + 0x2) = (u16)r5;
    r0 = 0x00001E83U; // [0x0802EB50]
    r1 = 0x0U;
    *(u16*)(r6 + 0xA) = (u16)r0;
    r0 = (r0 << 25);
    r2 = 0x00009640U; // [0x0802EB54]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802E9BE: BL 0x0804912C
    r0 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x14U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r2 = 0x1U;
    stack[1] = r5; // [sp + 0x4]
    stack[2] = r5; // [sp + 0x8]
    r1 = 0x0600F000U; // [0x0802EB58]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x0802E9D4
    r0 = 0x1240U; // (73 << 6)
    *(u16*)(r6) = (u16)r0;
    r6 = r4;
    r6 += 0x114U;
    r0 = *(u32*)(r6);
    r7 = 0x08757A30U; // [0x0802EB34]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802EA00;
loc_0802E9EC:
    r0 = (r5 << 3);
    r0 = r0 + r6;
    r1 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802E9F4: BL 0x0801191A
    r0 = *(u32*)(r6);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0802E9EC;
loc_0802EA00:
    r5 = r4;
    r5 += 0x140U;
    r0 = *(u32*)(r5 + 0x20);
    r1 = 0x1U;
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r6 = *(u32*)(r0 + 0x8);
    r0 = r6;
    *(u32*)(r5 + 0x24) = (u32)r6;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802EA14
    r1 = 0x03001B58U; // [0x0802EB44]
    r0 = r6;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802EA1C
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0802EB5C]
    r2 = 0x0U;
    r6 = *(u32*)(r0 + 0x5C);
    r0 = *(u32*)(r0 + 0x68);
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0802EA3E: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802EA46
    r2 = *(u32*)(r7 + 0x4);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r6; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0802EA60
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802EA68
    r1 = r6;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0802EA70
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r6 = r0;
    r1 = 0x1U;
    r6 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r6;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0802EA8E: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802EA96
    r2 = *(u32*)(r7 + 0x4);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[4]; // [sp + 0x10]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r2 = r6;
    r2 += 0x10U;
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0802EAB4
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802EABC
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x4AU;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x4U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x4U;
    r1 = r4;
    r3 = 0x18U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0802EAD8: BL 0x08013E64
    *(u32*)(r5 + 0x28) = (u32)r0;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x4AU;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x5U;
    r1 = r4;
    r3 = 0xC8U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0802EAF6: BL 0x08013E64
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r1 = *(u32*)(r5 + 0x28);
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802EB00
    r0 = r4;
    r1 = *(u32*)(r5 + 0x2C);
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802EB08
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x0802EB60]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0802EB16: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x0802EB60]
    r0 = 0x05000200U; // [0x0802EB48]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0802EB22: BL 0x08049144
    return r0;
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r5 = 0x0802EEB4U;
    r4 = (r0 >> 32);
    r0 = *(u8*)(r6 + 0x8);
    r5 = (r6 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r4 = r1 - r4;
    r0 = (r0 << 12);
    r4 = *(u32*)(r5);
    r5 = (r0 >> 32);
    r0 = r3 - r5;
    r0 = (r0 << 12);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    r4 = r3;
    r0 = (r0 << 16);
    r3 = r0 - 2;
    r0 = r0;
    stack[64] = r6; // [sp + 0x100]
    r0 = r0;
    r0 = (r0 << 24);
    r6 = (r0 >> 32);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r4 = r0;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x0802ED7C]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802EB70: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802EB7E: BL 0x0804912C
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_0802EB92;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802EB8E: BL __call_via_r3
loc_0802EB92:
    return r0;
    r0 = sub_080067D6(r0, r1, r2, r3); // 0x0802EB96
    r0 = 0x08757A30U; // [0x0802ED80]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x0802EB9E
    return r0;
    r4 = 0x08757A30U; // [0x0802ED80]
    r5 = r0;
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x0802EBAC
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_08011A1E(r0, r1, r2, r3); // 0x0802EBB2: BL 0x08011A1E
    r0 = r5;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x0802EBB8
    return r0;
    r2 = r0;
    r0 += 0x140U;
    r2 += 0xFFU;
    r0 = *(u32*)(r0 + 0x20);
    r2 += 0x15U;
    r4 = *(u32*)(r2);
    r0 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802EBF8;
    r5 = 0x9FU;
    r6 = 0x08757A30U; // [0x0802ED80]
    r5 = (r5 << 3);
loc_0802EBDA:
    r1 = (r0 << 3);
    r3 = r1 + r2;
    r7 = *(u32*)(r3 + 0x4);
    r3 = 0x68U;
    r1 = *(u32*)(r6 + 0x8);
    r3 *= r7;
    r1 = r3 + r1;
    r1 = r1 + r5;
    r1 = *(u8*)(r1);
    r1 = (r1 << 30);
    r1 = (r1 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0802EBFC;
    r0 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0802EBDA;
loc_0802EBF8:
    r0 = 0x0U;
    r0 = ~r0;
loc_0802EBFC:
    return r0; // BX lr
    r1 = r0;
    r0 += 0x140U;
    r0 = *(u32*)(r0 + 0x20);
    r0 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_0802EC36;
    r4 = 0x9FU;
    r2 = r1;
    r2 += 0xFFU;
    r4 = (r4 << 3);
    r5 = 0x08757A30U; // [0x0802ED80]
    r2 += 0x15U;
loc_0802EC1A:
    r1 = (r0 << 3);
    r3 = r1 + r2;
    r6 = *(u32*)(r3 + 0x4);
    r3 = 0x68U;
    r1 = *(u32*)(r5 + 0x8);
    r3 *= r6;
    r1 = r3 + r1;
    r1 = r1 + r4;
    r1 = *(u8*)(r1);
    r1 = (r1 << 30);
    r1 = (r1 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0802EC3A;
    r0 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0802EC1A;
loc_0802EC36:
    r0 = 0x0U;
    r0 = ~r0;
loc_0802EC3A:
    return r0; // BX lr
    r6 = r0;
    r6 += 0xFFU;
    r4 = r0;
    r6 += 0x41U;
    r5 = *(u32*)(r6 + 0x28);
    r0 = sub_0802EC00(r0, r1, r2, r3); // 0x0802EC4C
    r3 = r0 + 1;
    if (cmp_lhs == cmp_rhs) return sub_0802EC58(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0802EC5A(r0, r1, r2, r3);
}

// ROM Address: 0x0802EC58..0x0802EC9C (68 bytes, Thumb)
u32 sub_0802EC58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r5 + 0x8) = (u32)r0;
    r5 = *(u32*)(r6 + 0x2C);
    r0 = r4;
    r0 = sub_0802EBBE(r0, r1, r2, r3); // 0x0802EC60
    r3 = r0 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_0802EC6C;
    r0 = 0x1U;
    goto loc_0802EC6E;
loc_0802EC6C:
    r0 = 0x0U;
loc_0802EC6E:
    *(u32*)(r5 + 0x8) = (u32)r0;
    r5 = 0x4; // sp + 0x4
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = r5;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0802EC78
    r3 = 0x1U;
    r2 = 0xCU;
    r1 = r5;
    r0 = r4;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x0802EC84
    r1 = 0x06000040U; // [0x0802ED84]
    r0 = r5;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0802EC8C: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0802EC94: BL 0x0803F58C
    return r0;
}

// ROM Address: 0x0802EC9C..0x0802ED2C (144 bytes, Thumb)
u32 sub_0802EC9C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = 0x08757A30U; // [0x0802ED80]
    r4 = 0x000005C4U; // [0x0802ED8C]
    r0 = *(u32*)(r0);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x0831947CU; // [0x0802ED88]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802ECAE
    r5 = r6;
    r5 += 0x140U;
    r4 = *(u32*)(r5 + 0x24);
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802ECBE
    r1 = 0x03001B0CU; // [0x0802ED90]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802ECC6
    r1 = *(u32*)(r5 + 0x20);
    r0 = r5;
    r0 -= 0x2CU;
    r1 = (r1 << 3);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x8);
    r1 = 0x1U;
    r0 = r4;
    *(u32*)(r5 + 0x24) = (u32)r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802ECDC
    r1 = 0x03001B58U; // [0x0802ED94]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802ECE4
    return r0;
    r6 = 0x08757A30U; // [0x0802ED80]
    r5 = r0;
    r4 = r0;
    r0 = 0x000005C4U; // [0x0802ED8C]
    r1 = *(u32*)(r6);
    r5 += 0xFFU;
    r0 = r1 + r0;
    r1 = 0x0831947CU; // [0x0802ED88]
    r5 += 0x41U;
    r7 = 0x0U;
    r1 += 0xCU;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802ED2C(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0802ED58(r0, r1, r2, r3);
    r6 = r4;
    r6 += 0x100U;
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if (cmp_lhs == cmp_rhs) return sub_0802ED6A(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) goto loc_0802ED28;
    r0 = r4;
    r0 = sub_0802EBBE(r0, r1, r2, r3); // 0x0802ED1A
    *(u32*)(r5 + 0x20) = (u32)r0;
    r0 = r4;
    r0 = sub_0802EC9C(r0, r1, r2, r3); // 0x0802ED22: BL 0x0802EC9C
    *(u32*)(r6 + 0x10) = (u32)r7;
loc_0802ED28:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802ED2C..0x0802ED7C (80 bytes, Thumb)
u32 sub_0802ED2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802ED30
    r1 = r4;
    r2 = *(u32*)(r5 + 0x20);
    r1 += 0x114U;
    r2 = (r2 << 3);
    r1 = r2 + r1;
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r6 + 0x8);
    *(u8*)(r0) = (u8)r1;
    r1 = 0x4C0U; // (19 << 6)
    r0 = r0 + r1;
    *(u32*)(r0 + 0x1C) = (u32)r7;
    r0 = 0x2U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0802ED50
    r0 = 0x1U;
    return sub_0802ED2A(r0, r1, r2, r3);
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802ED5C
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0802ED62
    r0 = 0x1U;
    return sub_0802ED2A(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_0802EC00(r0, r1, r2, r3); // 0x0802ED6C
    *(u32*)(r5 + 0x20) = (u32)r0;
    r0 = r4;
    r0 = sub_0802EC9C(r0, r1, r2, r3); // 0x0802ED74: BL 0x0802EC9C
    *(u32*)(r6 + 0x10) = (u32)r7;
    return sub_0802ED28(r0, r1, r2, r3);
}

// ROM Address: 0x0802ED98..0x0802F1A0 (1032 bytes, Thumb)
u32 sub_0802ED98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0xC8; // sp + 0xC8
    r2 = 0x8U;
    r1 = 0xE0; // sp + 0xE0
    r3 = 0x08050761U; // [0x0802F17C]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0802EDA6: BL 0x08046FF4
    r1 = r4;
    r1 += 0xCU;
    r0 = 0xC8; // sp + 0xC8
    r0 = sub_0803FCF4(r0, r1, r2, r3); // 0x0802EDB0
    r0 = r4;
    r0 += 0x44U;
    r6 = r0;
    r0 = sub_0803FCB4(r0, r1, r2, r3); // 0x0802EDBA
    r0 = *(u32*)(r4 + 0x54);
    r1 = *(u32*)(r4);
    r2 = 0xC8; // sp + 0xC8
    r0 = r0 - r1;
    *(u32*)(r4 + 0x54) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4 + 0x58);
    r0 = r1 - r0;
    *(u32*)(r4 + 0x58) = (u32)r0;
    r0 = 0xB0; // sp + 0xB0
    r1 = r6;
    r0 = sub_0803FD76(r0, r1, r2, r3); // 0x0802EDD4
    r2 = 0x080502A1U; // [0x0802F180]
    r3 = 0x8U;
    stack[0] = r2; // [sp + 0x0]
    r2 = 0xC8; // sp + 0xC8
    r0 = r6;
    r1 = 0xB0; // sp + 0xB0
    r0 = sub_08047018(r0, r1, r2, r3); // 0x0802EDE4
    r0 = r4;
    r0 += 0x5CU;
    r5 = r0;
    r0 = sub_0804035C(r0, r1, r2, r3); // 0x0802EDEE
    r0 = *(u32*)(r4);
    stack[47] = r0; // [sp + 0xBC]
    r0 = *(u32*)(r4 + 0x4);
    stack[48] = r0; // [sp + 0xC0]
    r0 = *(u32*)(r4 + 0x8);
    stack[49] = r0; // [sp + 0xC4]
    r0 = *(u32*)(r5 + 0x24);
    r1 = stack[47]; // [sp + 0xBC]
    r0 = r0 - r1;
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = *(u32*)(r5 + 0x28);
    r1 = stack[48]; // [sp + 0xC0]
    r0 = r0 - r1;
    *(u32*)(r5 + 0x28) = (u32)r0;
    r0 = *(u32*)(r5 + 0x2C);
    r1 = stack[49]; // [sp + 0xC4]
    r0 = r0 - r1;
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = (r0 << 5);
    stack[46] = r1; // [sp + 0xB8]
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802EE1E: BL 0x08046E58
    r2 = ((u32)((s32)r0 >> 15));
    r1 = r2;
    r1 += 0x40U;
    stack[58] = r2; // [sp + 0xE8]
    r2 = (r1 << 24);
    r1 += 0x1U;
    stack[41] = r0; // [sp + 0xA4]
    r3 = 0x087B6EECU; // [0x0802F184]
    r1 = (r1 << 24);
    r2 = (r2 >> 22);
    r2 = *(u32*)(r3 + r2);
    r1 = (r1 >> 22);
    r1 = *(u32*)(r3 + r1);
    r0 = (r0 << 17);
    r12 = r1;
    r1 = 0x8000U; // (1 << 15)
    r0 = (r0 >> 17);
    r1 = r1 - r0;
    r7 = r1;
    r7 *= r2;
    r2 = r12;
    r2 *= r0;
    r2 = r7 + r2;
    r2 = ((u32)((s32)r2 >> 16));
    lr = r2;
    r2 = stack[58]; // [sp + 0xE8]
    r7 = 0x0U;
    r12 = r7;
    r7 = (r2 << 24);
    r7 = (r7 >> 22);
    r7 = *(u32*)(r3 + r7);
    r2 += 0x1U;
    r2 = (r2 << 24);
    r2 = (r2 >> 22);
    r2 = *(u32*)(r3 + r2);
    r1 *= r7;
    r0 *= r2;
    r0 = r1 + r0;
    r0 = ((u32)((s32)r0 >> 16));
    r7 = r12;
    stack[45] = r0; // [sp + 0xB4]
    r1 = lr;
    stack[42] = r1; // [sp + 0xA8]
    r0 = 0x46B504F7U; // [0x0802F188]
    stack[43] = r7; // [sp + 0xAC]
    stack[44] = r7; // [sp + 0xB0]
    r0 = sub_08054A64(r0, r1, r2, r3); // 0x0802EE80: BL 0x08054A64
    r7 = 0x0U;
    stack[40] = r7; // [sp + 0xA0]
    stack[41] = r7; // [sp + 0xA4]
    stack[38] = r0; // [sp + 0x98]
    stack[39] = r0; // [sp + 0x9C]
    r0 = *(u32*)(r4 + 0x10);
    r1 = (r0 << 5);
    stack[46] = r1; // [sp + 0xB8]
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802EE96: BL 0x08046E58
    r1 = ((u32)((s32)r0 >> 15));
    r2 = r1;
    r2 += 0x40U;
    r7 = r1;
    r1 = (r2 << 24);
    stack[33] = r0; // [sp + 0x84]
    r2 += 0x1U;
    r3 = 0x087B6EECU; // [0x0802F184]
    r2 = (r2 << 24);
    r2 = (r2 >> 22);
    r2 = *(u32*)(r3 + r2);
    r1 = (r1 >> 22);
    r1 = *(u32*)(r3 + r1);
    r3 = 0x1U;
    r0 = (r0 << 17);
    r0 = (r0 >> 17);
    r3 = (r3 << 15);
    r12 = r2;
    r2 = r3 - r0;
    r3 = r2;
    r3 *= r1;
    r1 = r12;
    r1 *= r0;
    r1 = r3 + r1;
    r1 = ((u32)((s32)r1 >> 16));
    r12 = r1;
    r1 = r7;
    r3 = (r7 << 24);
    r7 = 0x087B6EECU; // [0x0802F184]
    r3 = (r3 >> 22);
    r3 = *(u32*)(r7 + r3);
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 22);
    r1 = *(u32*)(r7 + r1);
    r2 *= r3;
    r0 *= r1;
    r0 = r2 + r0;
    r7 = 0x0U;
    stack[36] = r7; // [sp + 0x90]
    stack[37] = r7; // [sp + 0x94]
    r0 = ((u32)((s32)r0 >> 16));
    r1 = r12;
    stack[34] = r1; // [sp + 0x88]
    stack[35] = r0; // [sp + 0x8C]
    r7 = 0x78; // sp + 0x78
    r0 = r7;
    r1 = 0xA8; // sp + 0xA8
    r2 = 0x98; // sp + 0x98
    r0 = sub_08052F08(r0, r1, r2, r3); // 0x0802EEFC: BL 0x08052F08
    r2 = 0x88; // sp + 0x88
    r1 = r7;
    r0 = 0x68; // sp + 0x68
    r0 = sub_08052F08(r0, r1, r2, r3); // 0x0802EF06: BL 0x08052F08
    r3 = 0x08050791U; // [0x0802F18C]
    r2 = 0xCU;
    r1 = 0x68; // sp + 0x68
    r0 = 0x38; // sp + 0x38
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0802EF12: BL 0x08046FF4
    r0 = stack[27]; // [sp + 0x6C]
    r3 = stack[26]; // [sp + 0x68]
    r1 = (r0 << 1);
    r3 *= r1;
    r3 = ((u32)((s32)r3 >> 15));
    r12 = r3;
    r0 = stack[28]; // [sp + 0x70]
    r3 = stack[26]; // [sp + 0x68]
    r0 = (r0 << 1);
    r3 *= r0;
    r7 = ((u32)((s32)r3 >> 15));
    r2 = stack[29]; // [sp + 0x74]
    r3 = stack[26]; // [sp + 0x68]
    r2 = (r2 << 1);
    r3 *= r2;
    stack[13] = r7; // [sp + 0x34]
    r7 = ((u32)((s32)r3 >> 15));
    r3 = stack[27]; // [sp + 0x6C]
    stack[12] = r7; // [sp + 0x30]
    r3 *= r1;
    r1 = stack[27]; // [sp + 0x6C]
    r7 = ((u32)((s32)r3 >> 15));
    r1 *= r0;
    r3 = ((u32)((s32)r1 >> 15));
    stack[11] = r3; // [sp + 0x2C]
    r1 = stack[27]; // [sp + 0x6C]
    lr = r7;
    r1 *= r2;
    r3 = ((u32)((s32)r1 >> 15));
    r1 = stack[28]; // [sp + 0x70]
    stack[10] = r3; // [sp + 0x28]
    r1 *= r0;
    r0 = ((u32)((s32)r1 >> 15));
    r1 = stack[28]; // [sp + 0x70]
    r3 = stack[29]; // [sp + 0x74]
    r1 *= r2;
    r3 *= r2;
    r2 = ((u32)((s32)r3 >> 15));
    r3 = 0x8000U; // (1 << 15)
    r7 = r0 + r2;
    r3 = r3 - r7;
    r3 = ((u32)((s32)r3 >> 5));
    stack[14] = r3; // [sp + 0x38]
    r7 = 0x2C; // sp + 0x2C
    r3 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r2 += lr;
    r3 = r3 - r7;
    r3 = ((u32)((s32)r3 >> 5));
    stack[15] = r3; // [sp + 0x3C]
    r3 = stack[10]; // [sp + 0x28]
    r7 = stack[13]; // [sp + 0x34]
    r1 = ((u32)((s32)r1 >> 15));
    r3 = r3 + r7;
    r3 = ((u32)((s32)r3 >> 5));
    stack[16] = r3; // [sp + 0x40]
    r7 = 0x2C; // sp + 0x2C
    r3 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r3 = r3 + r7;
    r7 = ((u32)((s32)r3 >> 5));
    stack[17] = r7; // [sp + 0x44]
    r7 = 0x8000U; // (1 << 15)
    r2 = r7 - r2;
    r2 = ((u32)((s32)r2 >> 5));
    stack[18] = r2; // [sp + 0x48]
    r2 = r12;
    r2 = r1 - r2;
    r7 = stack[13]; // [sp + 0x34]
    r1 += r12;
    r3 = 0xCU;
    r3 = stack[10]; // [sp + 0x28]
    r1 = ((u32)((s32)r1 >> 5));
    r2 = ((u32)((s32)r2 >> 5));
    stack[19] = r2; // [sp + 0x4C]
    stack[21] = r1; // [sp + 0x54]
    r1 = lr;
    r2 = r3 - r7;
    r1 = r1 + r0;
    r0 = 0x8000U; // (1 << 15)
    r0 = r0 - r1;
    r7 = 0x0U;
    r0 = ((u32)((s32)r0 >> 5));
    r2 = ((u32)((s32)r2 >> 5));
    stack[20] = r2; // [sp + 0x50]
    stack[22] = r0; // [sp + 0x58]
    r0 = 0x8; // sp + 0x8
    r2 = 0x38; // sp + 0x38
    r1 = r5;
    stack[23] = r7; // [sp + 0x5C]
    stack[24] = r7; // [sp + 0x60]
    stack[25] = r7; // [sp + 0x64]
    r0 = sub_08049174(r0, r1, r2, r3); // 0x0802EFD0: BL 0x08049174
    r2 = 0x080502ADU; // [0x0802F190]
    r3 = 0xCU;
    stack[0] = r2; // [sp + 0x0]
    r2 = 0x38; // sp + 0x38
    r0 = r5;
    r1 = 0x8; // sp + 0x8
    r0 = sub_08047018(r0, r1, r2, r3); // 0x0802EFE0
    r0 = *(u32*)(r5);
    r3 = 0x087B72ECU; // [0x0802F198]
    r0 = (r0 << 1);
    *(u32*)(r5) = (u32)r0;
    r1 = *(u32*)(r5 + 0xC);
    r0 = 0xFFFFD080U; // [0x0802F194]
    r1 = (r1 << 1);
    *(u32*)(r5 + 0xC) = (u32)r1;
    r1 = *(u32*)(r5 + 0x24);
    r1 = (r1 << 1);
    *(u32*)(r5 + 0x24) = (u32)r1;
    *(u32*)(r5 + 0x18) = (u32)r7;
    r1 = 0x400U; // (1 << 10)
    r5 += 0x1CU;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r2 = *(u32*)(r4 + 0x10);
    r5 = r3;
    r0 = r2 + r0;
    stack[33] = r0; // [sp + 0x84]
    r0 = ((u32)((s32)r0 >> 10));
    r2 = (r0 << 24);
    r0 += 0x1U;
    r0 = (r0 << 24);
    r2 = (r2 >> 22);
    r2 = *(u32*)(r3 + r2);
    r0 = (r0 >> 22);
    r5 = *(u32*)(r5 + r0);
    r0 = stack[33]; // [sp + 0x84]
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r7 = r1 - r0;
    r0 *= r5;
    r7 *= r2;
    r0 = r7 + r0;
    r5 = *(u32*)(r4 + 0x8);
    r0 = ((u32)((s32)r0 >> 16));
    r5 *= r0;
    r0 = ((u32)((s32)r5 >> 10));
    *(u32*)(r4 + 0x14) = (u32)r0;
    r2 = *(u32*)(r4 + 0x10);
    r0 = 0x00007EF9U; // [0x0802F19C]
    r7 = 0x087B72ECU; // [0x0802F198]
    r0 = r2 + r0;
    r2 = ((u32)((s32)r0 >> 10));
    stack[33] = r0; // [sp + 0x84]
    r5 = (r2 << 24);
    r5 = (r5 >> 22);
    r3 = *(u32*)(r3 + r5);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r5 = r2 + 1;
    r5 = (r5 << 24);
    r5 = (r5 >> 22);
    r5 = *(u32*)(r7 + r5);
    r1 = r1 - r0;
    r3 *= r1;
    r5 *= r0;
    r3 = r3 + r5;
    r2 += 0x40U;
    r5 = (r2 << 24);
    r7 = 0x087B6EECU; // [0x0802F184]
    r2 += 0x1U;
    r2 = (r2 << 24);
    r2 = (r2 >> 22);
    r5 = (r5 >> 22);
    r5 = *(u32*)(r7 + r5);
    r2 = *(u32*)(r7 + r2);
    r1 *= r5;
    r0 *= r2;
    r0 = r1 + r0;
    r1 = *(u32*)(r4 + 0x8);
    r0 = ((u32)((s32)r0 >> 16));
    r1 *= r0;
    r0 = ((u32)((s32)r1 >> 10));
    r3 = ((u32)((s32)r3 >> 16));
    r0 *= r3;
    r1 = 0x400U; // (1 << 10)
    r0 = ((u32)((s32)r0 >> 10));
    r2 = r0 - r1;
    r0 = *(u32*)(r6 + 0x4);
    r3 = *(u32*)(r4);
    r0 *= r2;
    r0 = ((u32)((s32)r0 >> 10));
    r0 = r3 - r0;
    r5 = ((u32)((s32)r0 >> 10));
    r0 = r6;
    r0 += 0x8U;
    stack[57] = r0; // [sp + 0xE4]
loc_0802F098:
    r0 += 0x4U;
    r3 = *(u32*)(r0);
    r1 = r6 + 4;
    r3 *= r2;
    r2 = ((u32)((s32)r3 >> 10));
    r3 = *(u32*)(r4 + 0x4);
    *(u32*)(r4 + 0x18) = (u32)r5;
    r2 = r3 - r2;
    r7 = ((u32)((s32)r2 >> 10));
    *(u32*)(r4 + 0x1C) = (u32)r7;
    *(u32*)(r4 + 0x20) = (u32)r5;
    *(u32*)(r4 + 0x24) = (u32)r7;
    r1 = *(u32*)(r1);
    r3 = (r1 << 3);
    r1 = r3 - r1;
    r1 = (r1 << 5);
    r1 = ((u32)((s32)r1 >> 10));
    r1 = r5 - r1;
    stack[32] = r1; // [sp + 0x80]
    r0 = *(u32*)(r0);
    r1 = 0x80; // sp + 0x80
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 5);
    r0 = ((u32)((s32)r0 >> 10));
    r0 = r7 - r0;
    stack[33] = r0; // [sp + 0x84]
    r0 = r4;
    r0 += 0x18U;
    stack[56] = r0; // [sp + 0xE0]
    r0 = sub_08053294(r0, r1, r2, r3); // 0x0802F0D4
    r0 = *(u32*)(r6);
    r1 = 0x80; // sp + 0x80
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 4);
    r0 = ((u32)((s32)r0 >> 10));
    r0 = r5 - r0;
    stack[32] = r0; // [sp + 0x80]
    r0 = stack[57]; // [sp + 0xE4]
    r0 = *(u32*)(r0);
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 4);
    r0 = ((u32)((s32)r0 >> 10));
    r0 = r7 - r0;
    stack[33] = r0; // [sp + 0x84]
    r0 = stack[56]; // [sp + 0xE0]
    r0 = sub_08053294(r0, r1, r2, r3); // 0x0802F0FA
    r0 = *(u32*)(r6);
    r1 = 0x80; // sp + 0x80
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 4);
    r0 = ((u32)((s32)r0 >> 10));
    r0 = r0 + r5;
    stack[32] = r0; // [sp + 0x80]
    r0 = stack[57]; // [sp + 0xE4]
    r0 = *(u32*)(r0);
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 4);
    r0 = ((u32)((s32)r0 >> 10));
    r0 = r0 + r7;
    stack[33] = r0; // [sp + 0x84]
    r0 = stack[56]; // [sp + 0xE0]
    r0 = sub_08053294(r0, r1, r2, r3); // 0x0802F120
    r0 = *(u32*)(r4 + 0xC);
    r2 = 0x087B6EECU; // [0x0802F184]
    r6 = ((u32)((s32)r0 >> 10));
    r0 = r6;
    r0 += 0xECU;
    r1 = (r0 << 24);
    r1 = (r1 >> 22);
    r1 = *(u32*)(r2 + r1);
    r0 += 0x40U;
    r3 = (r1 << 3);
    r1 = r3 - r1;
    r1 = (r1 << 5);
    r1 = ((u32)((s32)r1 >> 16));
    r1 = r1 + r5;
    r0 = (r0 << 24);
    r0 = (r0 >> 22);
    stack[32] = r1; // [sp + 0x80]
    r0 = *(u32*)(r2 + r0);
    r1 = 0x80; // sp + 0x80
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 5);
    r0 = ((u32)((s32)r0 >> 16));
    r0 = r7 - r0;
    stack[33] = r0; // [sp + 0x84]
    r0 = stack[56]; // [sp + 0xE0]
    r0 = sub_08053294(r0, r1, r2, r3); // 0x0802F158
    r0 = r6;
    r0 += 0x14U;
    r1 = (r0 << 24);
    r2 = 0x087B6EECU; // [0x0802F184]
    r1 = (r1 >> 22);
    r1 = *(u32*)(r2 + r1);
    r3 = (r1 << 3);
    r1 = r3 - r1;
    r1 = (r1 << 5);
    r1 = ((u32)((s32)r1 >> 16));
    r1 = r1 + r5;
    r0 += 0x40U;
    r0 = (r0 << 24);
    r0 = (r0 >> 22);
    stack[32] = r1; // [sp + 0x80]
    return sub_0802F1A0(r0, r1, r2, r3);
    r1 = (r4 << 29);
    r5 = (r0 >> 32);
    r1 = (r4 << 10);
    r5 = (r0 >> 32);
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    r7 = (r6 << 19);
    sp = r6;
    r1 = (r2 << 30);
    r5 = (r0 >> 32);
    r5 = (r5 << 10);
    r5 = (r0 >> 32);
    if (cmp_lhs == cmp_rhs) goto loc_0802F098;
    *(u8*)(r5 + 0xB) = (u8)r4;
    r3 = (r7 >> 1);
    r1 = *(u8*)(r7 + 0x1B);
    r0 = r0;
    return r0;
}

// ROM Address: 0x0802F1A0..0x0802F1C0 (32 bytes, Thumb)
u32 sub_0802F1A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2 + r0);
    r1 = 0x80; // sp + 0x80
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 5);
    r0 = ((u32)((s32)r0 >> 16));
    r0 = r7 - r0;
    stack[33] = r0; // [sp + 0x84]
    r0 = stack[56]; // [sp + 0xE0]
    r0 = sub_08053294(r0, r1, r2, r3); // 0x0802F1B2
    r0 = *(u32*)(r4 + 0x20);
    r0 += 0x1U;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    r0 += 0x1U;
    return r0;
}

// ROM Address: 0x0802F1C0..0x0802F200 (64 bytes, Thumb)
u32 sub_0802F1C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    return r0;
    r4 = r0;
    r0 = 0x0U;
    r7 = stack[8]; // [sp + 0x20]
    *(u32*)(r2) = (u32)r0;
    r5 = r2;
    r2 = r4;
    r6 = r3;
    r2 += 0x5CU;
    r0 = sp;
    r0 = sub_08049180(r0, r1, r2, r3); // 0x0802F1DC: BL 0x08049180
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0802F216(r0, r1, r2, r3);
    r0 = stack[2]; // [sp + 0x8]
    r1 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_0802F216(r0, r1, r2, r3);
    r0 = 0x1U;
    *(u32*)(r5) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    *(u32*)(r7) = (u32)r0;
    r0 = stack[0]; // [sp + 0x0]
    r1 = stack[2]; // [sp + 0x8]
    r3 = (r0 << 4);
    r0 = r3 - r0;
    r0 = (r0 << 3);
    return r0;
}

// ROM Address: 0x0802F202..0x0802F210 (14 bytes, Thumb)
u32 sub_0802F202(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x78U;
    *(u32*)(r6) = (u32)r0;
    r1 = 0x4; // sp + 0x4
    r3 = 0x4FU;
    r3 = ~r3;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r0 *= r3;
    return r0;
}

// ROM Address: 0x0802F212..0x0802F21A (8 bytes, Thumb)
u32 sub_0802F212(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x50U;
    *(u32*)(r6 + 0x4) = (u32)r0;
    return r0;
}

// ROM Address: 0x0802F21A..0x0802F220 (6 bytes, Thumb)
u32 sub_0802F21A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x030030FCU; // [0x0802F220]
    return r0; // BX lr
}

// ROM Address: 0x0802F23A..0x0802F250 (22 bytes, Thumb)
u32 sub_0802F23A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = 0x03001B94U; // [0x0802F44C]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802F250(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802F250..0x0802F434 (484 bytes, Thumb)
u32 sub_0802F250(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0802F252: BL 0x0800FDFA
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
    r0 = 0x24; // sp + 0x24
    r1 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0802F276: BL 0x0800FDFA
    r0 = stack[9]; // [sp + 0x24]
    r1 = stack[11]; // [sp + 0x2C]
    r2 = stack[12]; // [sp + 0x30]
    r1 = r0 + r1;
    r0 = stack[10]; // [sp + 0x28]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[14] = r0; // [sp + 0x38]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = stack[7]; // [sp + 0x1C]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 - r1;
    stack[13] = r1; // [sp + 0x34]
    r1 = stack[8]; // [sp + 0x20]
    r2 = stack[14]; // [sp + 0x38]
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 - r2;
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[2] = r1; // [sp + 0x8]
    stack[16] = r1; // [sp + 0x40]
    stack[15] = r0; // [sp + 0x3C]
    if (cmp_lhs >= cmp_rhs) goto loc_0802F2B0;
    r0 = (u32)(-(s32)r2);
loc_0802F2B0:
    r1 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802F2BA;
    r0 = (u32)(-(s32)r0);
loc_0802F2BA:
    r7 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    stack[13] = r1; // [sp + 0x34]
    stack[14] = r0; // [sp + 0x38]
    if (cmp_lhs <= cmp_rhs) goto loc_0802F2D8;
    r1 = stack[15]; // [sp + 0x3C]
    r0 = 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0802F2CE;
    r0 = 0x3U;
loc_0802F2CE:
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[16]; // [sp + 0x40]
    r0 = (u32)(-(s32)r0);
    stack[16] = r0; // [sp + 0x40]
    goto loc_0802F2E6;
loc_0802F2D8:
    r7 = r0;
    r0 = stack[16]; // [sp + 0x40]
    r0 = (r0 >> 31);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[15]; // [sp + 0x3C]
    r0 = (u32)(-(s32)r0);
    stack[15] = r0; // [sp + 0x3C]
loc_0802F2E6:
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802F2EE;
    r0 = 0x0U;
    return sub_0802F24C(r0, r1, r2, r3);
loc_0802F2EE:
    r5 = 0x03003100U; // [0x0802F450]
    r0 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0802F306;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802F2FA
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802F302
loc_0802F306:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F310: BL __call_via_r3
    r0 = stack[15]; // [sp + 0x3C]
    r1 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 8);
    r1 = (r1 << 8);
    stack[14] = r1; // [sp + 0x38]
    stack[13] = r0; // [sp + 0x34]
    r1 = *(u32*)(r6 + 0x4);
    r2 = stack[14]; // [sp + 0x38]
    r0 *= r1;
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    r5 = r4;
    r5 += 0xFFU;
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    r1 = (r0 << 8);
    r5 += 0xA1U;
    stack[3] = r0; // [sp + 0xC]
    stack[5] = r0; // [sp + 0x14]
    r7 = (r7 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802F340: BL 0x08046E58
    stack[2] = r0; // [sp + 0x8]
    r0 = stack[6]; // [sp + 0x18]
    r1 = (r0 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802F34C: BL 0x08046E58
    r1 = stack[2]; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[4]; // [sp + 0x10]
    stack[7] = r0; // [sp + 0x1C]
    stack[8] = r1; // [sp + 0x20]
    r0 = *(u32*)(r5);
    r1 = stack[7]; // [sp + 0x1C]
    r7 = r5 + 4;
    r0 = r0 - r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = stack[8]; // [sp + 0x20]
    stack[3] = r0; // [sp + 0xC]
    r1 = r1 - r2;
    stack[4] = r1; // [sp + 0x10]
    stack[12] = r1; // [sp + 0x30]
    stack[10] = r1; // [sp + 0x28]
    stack[11] = r0; // [sp + 0x2C]
    stack[9] = r0; // [sp + 0x24]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x2C; // sp + 0x2C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F382: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F394;
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r7) = (u32)r0;
    goto loc_0802F410;
loc_0802F394:
    r0 = r6 + 4;
    r2 = stack[15]; // [sp + 0x3C]
    stack[18] = r0; // [sp + 0x48]
    r1 = 0x24; // sp + 0x24
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802F3A8;
    r0 = *(u32*)(r6 + 0x4);
    r0 = (u32)(-(s32)r0);
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x20; // sp + 0x20
loc_0802F3A8:
    r2 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r1 = 0x24; // sp + 0x24
    r0 = r2 - r0;
    stack[9] = r0; // [sp + 0x24]
    r0 = r4;
    r0 += 0x1A4U;
    stack[17] = r0; // [sp + 0x44]
    r0 = *(u32*)(r0);
    stack[10] = r0; // [sp + 0x28]
    r2 = *(u32*)(r4);
    r0 = r4;
    r3 = *(u32*)(r2 + 0x54);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F3C6: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F3D8;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r7) = (u32)r0;
    goto loc_0802F410;
loc_0802F3D8:
    r0 = *(u32*)(r5);
    r2 = 0x44; // sp + 0x44
    stack[9] = r0; // [sp + 0x24]
    r0 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r3 = stack[16]; // [sp + 0x40]
    r1 = 0x24; // sp + 0x24
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802F3F0;
    r2 = *(u32*)(r6 + 0x4);
    r2 = (u32)(-(s32)r2);
    stack[8] = r2; // [sp + 0x20]
    r2 = 0x20; // sp + 0x20
loc_0802F3F0:
    r0 = *(u32*)(r0);
    r2 = *(u32*)(r2);
    r0 = r0 - r2;
    stack[10] = r0; // [sp + 0x28]
    r2 = *(u32*)(r4);
    r0 = r4;
    r3 = *(u32*)(r2 + 0x54);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F400: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F422;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r7) = (u32)r0;
loc_0802F410:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F41A: BL __call_via_r3
    r0 = 0x0U;
    return sub_0802F24C(r0, r1, r2, r3);
loc_0802F422:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F42C: BL __call_via_r3
    r0 = 0x1U;
    return sub_0802F24C(r0, r1, r2, r3);
}

// ROM Address: 0x0802F434..0x0802F4EA (182 bytes, Thumb)
u32 sub_0802F434(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802F43A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F448;
    r1 = 0x0804B1A0U; // [0x0802F454]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0802F448:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r1 += 0x0U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r4 = r1;
    r1 = 0x38; // sp + 0x38
    r2 = 0x8U;
    r0 = 0x28; // sp + 0x28
    r3 = 0x08050751U /* &sub_08050750 */; // [0x0802F5D8]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0802F466: BL 0x08046FF4
    r0 = 0x0U;
    stack[8] = r0; // [sp + 0x20]
    stack[9] = r0; // [sp + 0x24]
    stack[10] = r0; // [sp + 0x28]
    stack[11] = r0; // [sp + 0x2C]
    r1 = 0x1000U; // (1 << 12)
    r0 = 0xFFFFF800U; // [0x0802F5DC]
    r5 = r4;
    r5 += 0x1A0U;
    stack[9] = r0; // [sp + 0x24]
    stack[13] = r0; // [sp + 0x34]
    r0 = 0x2U;
    stack[8] = r1; // [sp + 0x20]
    stack[12] = r1; // [sp + 0x30]
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802F48A
    r0 = (r0 << 3);
    r1 = 0x28; // sp + 0x28
    r0 = r0 + r1;
    r2 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)(r5);
    r1 = r1 + r2;
    r2 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r0);
    stack[4] = r1; // [sp + 0x10]
    r0 = r2 + r0;
    stack[5] = r0; // [sp + 0x14]
    r0 = r1;
    r1 = stack[5]; // [sp + 0x14]
    stack[6] = r0; // [sp + 0x18]
    stack[8] = r0; // [sp + 0x20]
    stack[7] = r1; // [sp + 0x1C]
    stack[9] = r1; // [sp + 0x24]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F4BA: BL __call_via_r3
    r0 = 0x57U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802F4C0: BL 0x08000158
    r2 = r0;
    r6 = 0x08757A4CU; // [0x0802F5E0]
    r2 += 0x8U;
    r1 = 0x20; // sp + 0x20
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08009904(r0, r1, r2, r3); // 0x0802F4CE: BL 0x08009904
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802F4EA(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F4E0: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802F4EA..0x0802F570 (134 bytes, Thumb)
u32 sub_0802F4EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08757A4CU; // [0x0802F5E0]
    r2 = 0x20U;
    r1 += 0x8U;
    r5 = sp;
    r0 = sp;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802F4F4: BL 0x08049138
    r0 = stack[8]; // [sp + 0x20]
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xC) = (u16)r0;
    r0 = stack[9]; // [sp + 0x24]
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x0802F5E4]
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xE) = (u16)r0;
    r0 = 0x2A0U; // (21 << 5)
    r2 = r0 + r1;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0802F516
    r5 = r0;
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802F520: BL 0x0801191A
    r1 = r5;
    r1 += 0xFFU;
    r2 = r4;
    r2 += 0xFFU;
    r1 += 0xC1U;
    *(u32*)(r1 + 0x34) = (u32)r4;
    r2 += 0xC1U;
    r0 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802F53C;
    *(u32*)(r2 + 0x30) = (u32)r5;
    goto loc_0802F55E;
loc_0802F53C:
    r2 = 0xFFU;
    r2 += 0xF9U;
    r2 = *(u32*)(r2 + r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F556;
loc_0802F546:
    r0 += 0x1C0U;
    r0 = *(u32*)(r0 + 0x38);
    r2 = 0xFFU;
    r2 += 0xF9U;
    r2 = *(u32*)(r2 + r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802F546;
loc_0802F556:
    r2 = 0xFFU;
    r2 += 0xF9U;
    *(u32*)(r2 + r0) = r5;
    *(u32*)(r1 + 0x3C) = (u32)r0;
loc_0802F55E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F568: BL __call_via_r3
    r0 = 0x1U;
    return sub_0802F4E6(r0, r1, r2, r3);
}

// ROM Address: 0x0802F580..0x0802F59A (26 bytes, Thumb)
u32 sub_0802F580(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x200U; // (1 << 9)
    r5 = r1 + r0;
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_0802F59A(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xE1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802F59A..0x0802F5C2 (40 bytes, Thumb)
u32 sub_0802F59A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F5A4;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_0802F5A4:
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802F5BE;
    r0 = r4;
    r0 = sub_0802F458(r0, r1, r2, r3); // 0x0802F5AC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F5BE;
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0x1U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x78U;
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_0802F5BE:
    r0 = 0x0U;
    return sub_0802F598(r0, r1, r2, r3);
}

// ROM Address: 0x0802F6A8..0x0802F6F6 (78 bytes, Thumb)
u32 sub_0802F6A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0802F718]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802F71C]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0802F6C6;
    r1 = r4;
    r1 += 0x18CU;
loc_0802F6C6:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802F6C8
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802F6D0
    r1 = 0x03003108U; // [0x0802F710]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802F6D8
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802F720]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F6F2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F6EE: BL __call_via_r3
loc_0802F6F2:
    return r0;
}

// ROM Address: 0x0802F6F6..0x0802F708 (18 bytes, Thumb)
u32 sub_0802F6F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003108U; // [0x0802F710]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802F704;
    r0 = 0x0U;
loc_0802F704:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802F74C..0x0802F79C (80 bytes, Thumb)
u32 sub_0802F74C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r1 = 0x03001B94U; // [0x0802F92C]
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F77A;
    r2 += 0x1C0U;
    r1 = *(u32*)(r2 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F77A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x30);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = 0x4U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F76E: BL __call_via_r3
    r0 = 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x3CU;
    *(u16*)(r4 + 0x8) = (u16)r0;
loc_0802F77A:
    return r0;
    r0 = 0x03001B94U; // [0x0802F92C]
    r7 = 0x0U;
    r5 = *(u32*)(r0);
    r4 = r1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F796;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802F79C(r0, r1, r2, r3);
loc_0802F796:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802F79C..0x0802F8DA (318 bytes, Thumb)
u32 sub_0802F79C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08757ABCU; // [0x0802F930]
    r1 = 0x5DU;
    r2 = 0x083192A8U; // [0x0802F934]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r6 = 0x000005C4U; // [0x0802F938]
    r0 = *(u32*)(r0);
    r2 = 0x40U;
    r3 = r7;
    r0 = r0 + r6;
    stack[28] = r0; // [sp + 0x70]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802F7B2
    r1 = r5;
    r0 = 0x60; // sp + 0x60
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0802F7BA
    r1 = r4;
    r0 = 0x50; // sp + 0x50
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0802F7C2
    r0 = stack[20]; // [sp + 0x50]
    r1 = stack[22]; // [sp + 0x58]
    r2 = stack[23]; // [sp + 0x5C]
    r0 = r0 + r1;
    r1 = stack[21]; // [sp + 0x54]
    stack[16] = r0; // [sp + 0x40]
    r1 = r1 + r2;
    r0 = ((u32)((s32)r0 >> 1));
    r3 = ((u32)((s32)r1 >> 1));
    stack[18] = r0; // [sp + 0x48]
    stack[16] = r0; // [sp + 0x40]
    stack[17] = r1; // [sp + 0x44]
    r1 = stack[26]; // [sp + 0x68]
    r0 = stack[24]; // [sp + 0x60]
    stack[17] = r3; // [sp + 0x44]
    r1 = r0 + r1;
    r0 = stack[25]; // [sp + 0x64]
    stack[19] = r3; // [sp + 0x4C]
    r2 = stack[27]; // [sp + 0x6C]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[18]; // [sp + 0x48]
    r2 = stack[19]; // [sp + 0x4C]
    r0 = r0 - r1;
    r1 = stack[4]; // [sp + 0x10]
    stack[1] = r0; // [sp + 0x4]
    r6 = r1 - r2;
    r1 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[2] = r6; // [sp + 0x8]
    if (cmp_lhs >= cmp_rhs) goto loc_0802F816;
    r1 = (u32)(-(s32)r0);
loc_0802F816:
    r2 = r6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802F81E;
    r2 = (u32)(-(s32)r2);
loc_0802F81E:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0802F84E;
    stack[7] = r3; // [sp + 0x1C]
    r1 = stack[23]; // [sp + 0x5C]
    r1 += 0x3U;
    stack[9] = r1; // [sp + 0x24]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802F83E;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[18]; // [sp + 0x48]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[22]; // [sp + 0x58]
    r0 += 0x3U;
    stack[8] = r0; // [sp + 0x20]
    goto loc_0802F87C;
loc_0802F83E:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[20]; // [sp + 0x50]
    r0 -= 0x4U;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[18]; // [sp + 0x48]
    stack[8] = r0; // [sp + 0x20]
    goto loc_0802F87C;
loc_0802F84E:
    r1 = r4;
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0802F852: BL 0x0800FDFA
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[3]; // [sp + 0xC]
    stack[8] = r0; // [sp + 0x20]
    if (cmp_lhs <= cmp_rhs) goto loc_0802F870;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = stack[21]; // [sp + 0x54]
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[23]; // [sp + 0x5C]
    r0 -= 0x6U;
    stack[9] = r0; // [sp + 0x24]
    goto loc_0802F87C;
loc_0802F870:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[21]; // [sp + 0x54]
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[2]; // [sp + 0x8]
    stack[9] = r0; // [sp + 0x24]
loc_0802F87C:
    stack[13] = r4; // [sp + 0x34]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r2 = 0x14; // sp + 0x14
    *(u8*)(r3 + 0x8) = (u8)r0;
    r0 = 0x086B8098U; // [0x0802F93C]
    r3 = 0x0; // sp + 0x0
    stack[12] = r0; // [sp + 0x30]
    r0 = 0x400U; // (1 << 10)
    stack[11] = r0; // [sp + 0x2C]
    *(u8*)(r3 + 0x14) = (u8)r7;
    stack[17] = r4; // [sp + 0x44]
    r1 = *(u32*)(r5);
    r0 = r5;
    r3 = *(u32*)(r1 + 0x24);
    r3 = r3 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F8A0: BL __call_via_r3
    r1 = stack[29]; // [sp + 0x74]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    *(u32*)(r1 + 0x4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F8C8;
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802F8AE
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0802F934]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r3 = r7;
    r2 = 0x40U;
    r0 = stack[28]; // [sp + 0x70]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802F8C4
loc_0802F8C8:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x4U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F8D2: BL __call_via_r3
    r0 = 0x1U;
    return sub_0802F798(r0, r1, r2, r3);
}

// ROM Address: 0x0802F8DA..0x0802F912 (56 bytes, Thumb)
u32 sub_0802F8DA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r6 = 0x1U;
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F904;
    r0 = *(u16*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F8F2;
    r0 -= 0x1U;
    *(u16*)(r4 + 0x8) = (u16)r0;
loc_0802F8F2:
    r0 = *(u16*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802F904;
    r1 = r5;
    r0 = r4;
    r0 = sub_0802F77C(r0, r1, r2, r3); // 0x0802F8FC
    r0 = r6 - r0;
    *(u32*)(r4 + 0xC) = (u32)r0;
loc_0802F904:
    r0 = *(u32*)(r5 + 0x58);
    r0 = *(u32*)(r0 + 0x64);
    r1 = *(u32*)(r5 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0802F912(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0802F914(r0, r1, r2, r3);
}

// ROM Address: 0x0802F912..0x0802F918 (6 bytes, Thumb)
u32 sub_0802F912(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = r6 - r0;
    return r0;
}

// ROM Address: 0x0802F918..0x0802F92A (18 bytes, Thumb)
u32 sub_0802F918(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802F91C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F928;
    r1 = 0x0804AD68U /* &VTable_0804AD68 */; // [0x0802F940]
    *(u32*)(r0) = (u32)r1;
loc_0802F928:
    return r0;
}

// ROM Address: 0x0802F976..0x0802FA94 (286 bytes, Thumb)
u32 sub_0802F976(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F97C: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802F984: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802F992;
    r1 = 0x0804C1E4U; // [0x0802F99C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0802F992:
    return r0;
    r4 = *(u8*)(r1 + 0xB);
    r5 = (r6 >> 1);
    r0 = r6 - r4;
    r0 = (r0 << 12);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r5; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
    *(u32*)r1 = r7; r1 += 4;
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r0 = 0xFCU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802F9A8: BL 0x08000158
    r2 = r0;
    r0 = 0x08757AD0U; // [0x0802FC28]
    r1 = 0x5U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802F9B4
    *(u32*)(r4 + 0x4) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802F9C0;
loc_0802F9BE:
    return r0;
loc_0802F9C0:
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802F9CA: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x4);
    r6 = r4;
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r6 += 0xCU;
    *(u32*)(r4 + 0xC) = (u32)r1;
    r0 = *(u32*)(r0);
    r7 = r6 + 4;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0xFFU;
    r1 = *(u32*)(r4 + 0x4);
    r0 += 0xA1U;
    r1 = r1 + r0;
    r0 = *(u32*)(r0 + r5);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0802FA28;
    r1 = 0x5U;
    r0 = *(u32*)(r4 + 0xC);
    r1 = (r1 << 11);
    r0 = r0 + r1;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = *(u32*)(r4 + 0x10);
    r0 += 0x100U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802FA0E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802FA28;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802FA20: BL __call_via_r3
    r0 = 0x1U;
    goto loc_0802F9BE;
loc_0802FA28:
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    *(u32*)(r6) = (u32)r1;
    r0 = *(u32*)(r0);
    r1 = 0x5U;
    *(u32*)(r7) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = (r1 << 11);
    r0 = r0 - r1;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = *(u32*)(r4 + 0x10);
    r0 += 0x100U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802FA52: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802FA6C;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802FA64: BL __call_via_r3
    r0 = 0x1U;
    goto loc_0802F9BE;
loc_0802FA6C:
    r0 = 0x0U;
    goto loc_0802F9BE;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802FABA(r0, r1, r2, r3);
    r1 = r5;
    r0 = r4;
    r0 = sub_0802F9A0(r0, r1, r2, r3); // 0x0802FA82
    *(u32*)(r4 + 0x8) = (u32)r0;
    r1 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802FA94(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802FA94..0x0802FB9C (264 bytes, Thumb)
u32 sub_0802FA94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802FABA;
    r0 = 0xFFU;
    r0 += 0x1U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0xC) = (u16)r0;
    r1 = *(u32*)(r4 + 0xC);
    r2 = *(u32*)(r4 + 0x10);
    r1 = ((u32)((s32)r1 >> 8));
    *(u16*)(r3) = (u16)r1;
    r2 = ((u32)((s32)r2 >> 8));
    *(u16*)(r3 + 0x2) = (u16)r2;
    *(u16*)(r3 + 0x8) = (u16)r1;
    *(u16*)(r3 + 0xA) = (u16)r2;
    r1 = r5;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0800A1D4(r0, r1, r2, r3); // 0x0802FAB4
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_0802FABA:
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802FAC4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802FAE0;
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802FADC;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802FAD8: BL 0x08046AA2
loc_0802FADC:
    r0 = 0x1U;
    return sub_0802FA90(r0, r1, r2, r3);
loc_0802FAE0:
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802FAE8;
    return sub_0802FA90(r0, r1, r2, r3);
loc_0802FAE8:
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802FAF2: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802FB92;
    r0 = 0xFFU;
    r1 = *(u32*)(r4 + 0x4);
    r0 += 0xA1U;
    r1 = r1 + r0;
    r0 = *(u32*)(r0 + r5);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0802FB0E;
    r0 = 0x2U;
    goto loc_0802FB10;
loc_0802FB0E:
    r0 = 0x3U;
loc_0802FB10:
    *(u8*)(r5 + 0x10) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r4 + 0x14) = (u8)r0;
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802FB1E: BL 0x08046AA2
    r1 = 0x12U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802FB26
    r1 = 0x03003118U; // [0x0802FC2C]
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802FB2E
    r0 = 0x03001C34U; // [0x0802FC30]
    r2 = 0x80U;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r5 = r0;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802FB40: BL 0x08046AA2
    r0 += 0x1AU;
    r3 = 0x0U;
    r6 = (u32)(*(s16*)(r0 + r3));
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802FB54: BL 0x08046AA2
    r0 += 0x1CU;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r0 = ((u32)((s32)r0 >> 2));
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802FB94;
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802FB6E: BL 0x08046AA2
    r0 += 0x1AU;
    r3 = 0x0U;
    r6 = (u32)(*(s16*)(r0 + r3));
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802FB82: BL 0x08046AA2
    r0 += 0x1CU;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r0 = ((u32)((s32)r0 >> 2));
    r0 = r6 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
loc_0802FB92:
    goto loc_0802FB98;
loc_0802FB94:
    r0 = 0x0U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
loc_0802FB98:
    r0 = 0x0U;
    return sub_0802FA90(r0, r1, r2, r3);
}

// ROM Address: 0x0802FCA0..0x0802FD16 (118 bytes, Thumb)
u32 sub_0802FCA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802FCB8;
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802FCAC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802FCB8;
    r0 = r4;
loc_0802FCB6:
    return r0;
loc_0802FCB8:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802FF08]
    r6 = 0x400U; // (1 << 10)
    r5 = 0x08757AE4U; // [0x0802FF0C]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802FCC8
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802FCE0;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0802FCD4: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802FCDC
loc_0802FCE0:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804BACCU /* &VTable_0804BACC */; // [0x0802FF10]
    r2 = 0x10U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x18U;
    r1 = 0x40U;
    r6 = r0;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0802FCF0
    *(u32*)(r4 + 0x10) = (u32)r7;
    r0 = *(u32*)(r5 + 0xC);
    r1 = 0x1U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    *(u8*)(r6 + 0x2) = (u8)r1;
    r1 = 0x0803F70DU; // [0x0802FF14]
    r0 = 0x5U;
    *(u32*)(r6 + 0x20) = (u32)r1;
    *(u8*)(r4 + 0x1B) = (u8)r0;
    r0 = 0x10U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = ~r0;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = r4;
    goto loc_0802FCB6;
    return r0;
}

// ROM Address: 0x0802FD16..0x0802FE52 (316 bytes, Thumb)
u32 sub_0802FD16(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r2 = *(u32*)(r0 + 0x48);
    r0 = *(u32*)(r0 + 0x3C);
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0802FD24: BL 0x08046E40
    r1 = *(u16*)(r5);
    r6 = r4;
    r6 += 0x18U;
    cmp_lhs = (s32)r1; cmp_rhs = 48;
    if (cmp_lhs == cmp_rhs) goto loc_0802FD6A;
    r0 = 0x08757AE4U; // [0x0802FF0C]
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0804F9A4(r0, r1, r2, r3); // 0x0802FD36
    r7 = 0xCU;
    r0 = r7 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r7;
    r1 = *(u16*)(r5);
    r0 = r6;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0802FD46: BL 0x0803DE50
    r0 = 0x08757AE4U; // [0x0802FF0C]
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r0 = 0x74U;
    r0 = *(u16*)(r1 + r0);
    r0 = (r0 << 1);
    r0 = *(u16*)(r1 + r0);
    r1 = 0x11U;
    r0 += 0x1U;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r1 = 0x3AU;
    r0 = r6;
    *(u32*)(r4 + 0x20) = (u32)r7;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0802FD66: BL 0x0803DE50
loc_0802FD6A:
    r7 = 0x08757AE4U; // [0x0802FF0C]
    r1 = *(u16*)(r5 + 0x2);
    r0 = *(u32*)(r7 + 0x8);
    r0 = sub_0804F9A4(r0, r1, r2, r3); // 0x0802FD70
    r1 = 0x1BU;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0xCU;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r1 = *(u16*)(r5 + 0x2);
    r0 = r6;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0802FD82: BL 0x0803DE50
    r1 = *(u16*)(r5 + 0x4);
    r0 = *(u32*)(r7 + 0x8);
    r0 = sub_0804F9A4(r0, r1, r2, r3); // 0x0802FD8A
    r1 = 0x25U;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0xCU;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r1 = *(u16*)(r5 + 0x4);
    r0 = r6;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0802FD9C: BL 0x0803DE50
    r0 = *(u32*)(r7 + 0x8);
    r1 = 0x74U;
    r0 = *(u32*)(r0);
    r7 = 0xCU;
    r1 = *(u16*)(r0 + r1);
    r1 = (r1 << 1);
    r0 = *(u16*)(r0 + r1);
    r1 = 0x2AU;
    r0 += 0x1U;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r1 = 0x3AU;
    r0 = r6;
    *(u32*)(r4 + 0x20) = (u32)r7;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0802FDBC: BL 0x0803DE50
    r0 = 0x08757AE4U; // [0x0802FF0C]
    r1 = *(u16*)(r5 + 0x6);
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0804F9A4(r0, r1, r2, r3); // 0x0802FDC6
    r1 = 0x34U;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r7;
    r1 = *(u16*)(r5 + 0x6);
    r0 = r6;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0802FDD6: BL 0x0803DE50
    r0 = 0x08757AE4U; // [0x0802FF0C]
    r1 = *(u16*)(r5 + 0x8);
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0804F9A4(r0, r1, r2, r3); // 0x0802FDE0
    r1 = 0x3EU;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r7;
    r1 = *(u16*)(r5 + 0x8);
    r0 = r6;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0802FDF0: BL 0x0803DE50
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802FF18]
    r5 = 0x0U;
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = 0x20U;
    r7 = 0x10U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r6;
    stack[4] = r7; // [sp + 0x10]
    stack[1] = r5; // [sp + 0x4]
    stack[2] = r5; // [sp + 0x8]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0802FE0E: BL 0x0804915C
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802FF18]
    stack[2] = r5; // [sp + 0x8]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r7 << 5);
    r1 = r0 + r1;
    r0 = 0x20U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x40U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r6;
    stack[4] = r7; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0802FE2E: BL 0x0804915C
    return r0;
    r6 = r1;
    r1 = *(u32*)(r0 + 0x10);
    r2 = 0x08757AE4U; // [0x0802FF0C]
    r5 = r0;
    r0 = 0x13U;
    r2 = *(u32*)(r2 + 0x4);
    r0 = (r0 << 6);
    r0 = r2 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802FE52(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x18);
    return sub_0802FE54(r0, r1, r2, r3);
}

// ROM Address: 0x0802FE52..0x0802FEEE (156 bytes, Thumb)
u32 sub_0802FE52(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x14);
    r1 = 0x00008CA0U; // [0x0802FF1C]
    r2 = *(u32*)(r5 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0802FE6E;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802FEA2;
    *(u32*)(r5 + 0x14) = (u32)r1;
    r1 = 0x08757AE4U; // [0x0802FF0C]
    r1 += 0x10U;
    r0 = r5;
    r0 = sub_0802FD16(r0, r1, r2, r3); // 0x0802FE68: BL 0x0802FD16
    goto loc_0802FEA2;
loc_0802FE6E:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802FEA2;
    r3 = 0x35U;
    *(u32*)(r5 + 0x14) = (u32)r0;
    r0 *= r3;
    r0 = (r0 >> 5);
    r0 = sub_0805315C(r0, r1, r2, r3); // 0x0802FE7A: BL 0x0805315C
    r1 += 0x30U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r1;
    r4 = 0x4U;
    r7 = sp;
loc_0802FE88:
    r0 = sub_0805311C(r0, r1, r2, r3); // 0x0802FE88: BL 0x0805311C
    r2 = (r4 << 1);
    r0 += 0x30U;
    *(u16*)(r7 + r2) = (u16)r0;
    r0 = r1;
    r4 -= 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802FE88;
    r1 = r7;
    r0 = r5;
    r0 = sub_0802FD16(r0, r1, r2, r3); // 0x0802FE9E: BL 0x0802FD16
loc_0802FEA2:
    r1 = 0x80A86008U; // [0x0802FF20]
    r0 = *(u32*)(r6);
    r3 = 0x3U;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r3 = (r3 << 10);
    r4 = 0x400U; // (1 << 10)
    r1 &= ~r3;
    r1 = r1 + r4;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r2 = *(u16*)(r5 + 0xC);
    r1 = (r1 >> 10);
    r1 = (r1 << 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x80C86008U; // [0x0802FF24]
    r0 += 0x8U;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r1 &= ~r3;
    r1 = r1 + r4;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r2 = *(u16*)(r5 + 0xC);
    r1 = (r1 >> 10);
    r1 = (r1 << 10);
    r2 += 0x10U;
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 += 0x8U;
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802FEEE..0x0802FF06 (24 bytes, Thumb)
u32 sub_0802FEEE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 28;
    if (cmp_lhs != cmp_rhs) goto loc_0802FF02;
    r1 = r0;
    r0 = 0x08757AE4U; // [0x0802FF0C]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802FEFA
    r0 = 0x1U;
loc_0802FF00:
    return r0;
loc_0802FF02:
    r0 = 0x0U;
    goto loc_0802FF00;
    return r0;
}

// ROM Address: 0x0802FF36..0x0802FF50 (26 bytes, Thumb)
u32 sub_0802FF36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u16*)(r1 + 0x12);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r0 + 0x12) = (u16)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_0802FF4E;
    *(u8*)(r0 + 0x11) = (u8)r1;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0802FF4A: BL 0x0800EE78
loc_0802FF4E:
    return r0;
}

// ROM Address: 0x0802FF50..0x0802FF54 (4 bytes, Thumb)
u32 sub_0802FF50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003124U; // [0x0802FF68]
    return r0; // BX lr
}

// ROM Address: 0x0802FF7C..0x0802FF90 (20 bytes, Thumb)
u32 sub_0802FF7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0802FF90(r0, r1, r2, r3);
    r2 = (r1 >> 2);
    *(u8*)(r0 + 0x11) = (u8)r2;
    r1 += 0x1U;
    *(u16*)(r0 + 0x12) = (u16)r1;
    return r0;
}

// ROM Address: 0x0802FF90..0x0802FF96 (6 bytes, Thumb)
u32 sub_0802FF90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0802FF90: BL 0x0800EE78
    return sub_0802FF8E(r0, r1, r2, r3);
}

// ROM Address: 0x08030000..0x08030076 (118 bytes, Thumb)
u32 sub_08030000(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0U;
    r0 = sub_0803018C(r0, r1, r2, r3); // 0x08030006
    r1 = r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x08757B38U; // [0x0803007C]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08030012: BL 0x0801191A
    return r0;
    r1 = *(u32*)(r0 + 0x4);
    r4 = r0;
    r0 = 0x08757B38U; // [0x0803007C]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08030022
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_08030036;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08030032: BL __call_via_r3
loc_08030036:
    return r0;
    r4 = r0;
    r0 = 0x08757B38U; // [0x0803007C]
    r2 = 0x0U;
    r1 = 0xCU;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08030044
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08030050: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r0 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08030076(r0, r1, r2, r3);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803005E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803006E;
    r1 = 0x08049978U /* &VTable_08049978 */; // [0x08030080]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x1EU;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_0803006E:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0803006E
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08030076..0x0803007A (4 bytes, Thumb)
u32 sub_08030076(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803007A..0x08030084 (10 bytes, Thumb)
u32 sub_0803007A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = *(u8*)(r7 + 0xC);
    r5 = (r6 >> 1);
    r1 = stack[120]; // [sp + 0x1E0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08030084..0x08030098 (20 bytes, Thumb)
u32 sub_08030084(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B94U; // [0x08030174]
    r5 = r1;
    r4 = *(u32*)(r0);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08030098(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08030098..0x08030156 (190 bytes, Thumb)
u32 sub_08030098(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r5 + 0x10);
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x1U;
    r1 ^= r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080300A8;
    r0 = 0x0U;
    return sub_08030094(r0, r1, r2, r3);
loc_080300A8:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080300B2: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs == cmp_rhs) goto loc_080300BE;
    r0 = 0x0U;
    return sub_08030094(r0, r1, r2, r3);
loc_080300BE:
    r1 = r4;
    r0 = 0x14; // sp + 0x14
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x080300C2
    r1 = r5;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x080300CA
    r0 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030116;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0803012A;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_0803013E;
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_080300F2;
    r0 = stack[6]; // [sp + 0x18]
    r0 -= 0x4U;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[8]; // [sp + 0x20]
    r0 += 0x4U;
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[7]; // [sp + 0x1C]
    r0 += 0xF0U;
    stack[7] = r0; // [sp + 0x1C]
loc_080300F2:
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08030152;
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08030152;
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08030152;
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08030152;
    r0 = 0x1U;
    return sub_08030094(r0, r1, r2, r3);
loc_08030116:
    r0 = stack[5]; // [sp + 0x14]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[7]; // [sp + 0x1C]
    r0 += 0x4U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[8]; // [sp + 0x20]
    r0 += 0xF0U;
    stack[8] = r0; // [sp + 0x20]
    goto loc_080300F2;
loc_0803012A:
    r0 = stack[5]; // [sp + 0x14]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[7]; // [sp + 0x1C]
    r0 += 0x4U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[6]; // [sp + 0x18]
    r0 -= 0xF0U;
    stack[6] = r0; // [sp + 0x18]
    goto loc_080300F2;
loc_0803013E:
    r0 = stack[6]; // [sp + 0x18]
    r0 -= 0x4U;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[8]; // [sp + 0x20]
    r0 += 0x4U;
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[5]; // [sp + 0x14]
    r0 -= 0xF0U;
    stack[5] = r0; // [sp + 0x14]
    goto loc_080300F2;
loc_08030152:
    r0 = 0x0U;
    return sub_08030094(r0, r1, r2, r3);
}

// ROM Address: 0x08030156..0x08030174 (30 bytes, Thumb)
u32 sub_08030156(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803015C: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08030164: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030172;
    r1 = 0x0804BD20U; // [0x08030178]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08030172:
    return r0;
}

// ROM Address: 0x08030174..0x0803017A (6 bytes, Thumb)
u32 sub_08030174(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x080301C0..0x080301F4 (52 bytes, Thumb)
u32 sub_080301C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xF3U;
    r1 = *(u16*)(r1 + 0x4);
    r1 &= r3;
    r3 = *(u32*)(r0 + 0x20);
    if (cmp_lhs == cmp_rhs) goto loc_080301E4;
    r3 += 0xAU;
    *(u32*)(r0 + 0x20) = (u32)r3;
    cmp_lhs = (s32)r3; cmp_rhs = 85;
    if (cmp_lhs < cmp_rhs) goto loc_080301D8;
    r1 = 0x55U;
    *(u32*)(r0 + 0x20) = (u32)r1;
    *(u32*)(r0 + 0x24) = (u32)r2;
loc_080301D8:
    r1 = *(u32*)(r0 + 0x20);
    r2 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080301E2;
    *(u32*)(r0 + 0x1C) = (u32)r1;
loc_080301E2:
    return r0; // BX lr
loc_080301E4:
    r1 = r3;
    r3 = (r1 << 5);
    r1 = r3 - r1;
    r1 = ((u32)((s32)r1 >> 5));
    *(u32*)(r0 + 0x20) = (u32)r1;
    return r0; // BX lr
    r4 = *(u8*)(r3 + 0xD);
    r5 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x080301F8..0x08030210 (24 bytes, Thumb)
u32 sub_080301F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08030210(r0, r1, r2, r3);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08030204: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08030210(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08030210..0x08030274 (100 bytes, Thumb)
u32 sub_08030210(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0803036C]
    r6 = 0x380U; // (7 << 7)
    r5 = 0x08757B64U; // [0x08030370]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08030220
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08030238;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0803022C: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08030234
loc_08030238:
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r1 = 0x0804C020U /* &VTable_0804C020 */; // [0x08030374]
    *(u16*)(r4 + 0xC) = (u16)r0;
    *(u32*)(r4) = (u32)r1;
    r1 = *(u32*)(r7 + 0x4);
    r2 = *(u32*)(r7);
    *(u32*)(r4 + 0x14) = (u32)r1;
    *(u32*)(r4 + 0x10) = (u32)r2;
    r2 = 0x55U;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r2 = 0x0U;
    r2 = ~r2;
    *(u32*)(r4 + 0x18) = (u32)r2;
    *(u32*)(r4 + 0x1C) = (u32)r2;
    r2 = 0x10U;
    *(u8*)(r4 + 0x8) = (u8)r2;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = 0x06010000U; // [0x08030378]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r1 >> 17);
    r0 = r0 + r1;
    r1 = 0x08757B64U; // [0x08030370]
    r2 = 0x80U;
    r1 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803026C: BL 0x08049138
    r0 = r4;
    return sub_0803020E(r0, r1, r2, r3);
}

// ROM Address: 0x08030274..0x080303A0 (300 bytes, Thumb)
u32 sub_08030274(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x20);
    r5 = r1;
    r1 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080302CC;
    r1 = 0x08757B64U; // [0x08030370]
    r2 = 0x300U; // (3 << 8)
    r6 = 0x4; // sp + 0x4
    *(u32*)(r4 + 0x18) = (u32)r0;
    r1 += 0x84U;
    r0 = r6;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08030294: BL 0x08049138
    r0 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = 85;
    if (cmp_lhs >= cmp_rhs) goto loc_080302BC;
    r7 = 0x08757EE8U; // [0x0803037C]
    r1 = 0x1U;
loc_080302A2:
    r2 = (r0 << 3);
    r3 = *(u16*)(r7 + r2);
    r2 = r2 + r7;
    r0 += 0x1U;
    *(u8*)(r6 + r3) = (u8)r1;
    r3 = *(u16*)(r2 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 85;
    *(u8*)(r6 + r3) = (u8)r1;
    r3 = *(u16*)(r2 + 0x4);
    *(u8*)(r6 + r3) = (u8)r1;
    r2 = *(u16*)(r2 + 0x6);
    *(u8*)(r6 + r2) = (u8)r1;
    if (cmp_lhs < cmp_rhs) goto loc_080302A2;
loc_080302BC:
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x08030378]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = (r1 >> 17);
    r1 = r6;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080302C8: BL 0x08049138
loc_080302CC:
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r4 + 0x1C);
    r2 = 0x1U;
    r6 = 0xC00U; // (3 << 10)
    r2 = (r2 << 10);
    r3 = r1 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_0803031C;
    r7 = 0xA000U; // (5 << 13)
    *(u32*)(r0) = (u32)r7;
    r1 = *(u32*)(r4 + 0x10);
    r3 = *(u32*)(r4 + 0x1C);
    r1 = r1 + r3;
    r1 += 0x1U;
    r1 = (r1 << 23);
    r1 = (r1 >> 7);
    r1 |= r7;
    *(u32*)(r0) = (u32)r1;
    r3 = *(u32*)(r4 + 0x14);
    r1 = (r1 >> 8);
    r3 += 0xFDU;
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r1 = (r1 << 8);
    r1 |= r3;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r1 &= ~r6;
    r1 = r1 + r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r3 = *(u16*)(r4 + 0xC);
    r1 = (r1 >> 10);
    r1 = (r1 << 10);
    r3 += 0x18U;
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r1 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 += 0x8U;
loc_0803031C:
    r1 = 0x0U;
loc_0803031E:
    r7 = 0x40006000U; // [0x08030380]
    r3 = (r1 << 5);
    *(u32*)(r0) = (u32)r7;
    r2 = *(u32*)(r4 + 0x10);
    r2 = r2 + r3;
    r2 = (r2 << 23);
    r2 = (r2 >> 7);
    r2 |= r7;
    *(u32*)(r0) = (u32)r2;
    r3 = *(u32*)(r4 + 0x14);
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r0 + 0x4);
    r3 = (r7 >> 20);
    r2 &= ~r6;
    r2 = r2 + r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r3 = *(u16*)(r4 + 0xC);
    r7 = (r1 << 3);
    r2 = (r2 >> 10);
    r3 = r3 + r7;
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r2 = (r2 << 10);
    r2 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r0 += 0x8U;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_0803031E;
    *(u32*)(r5) = (u32)r0;
    r0 = 0x0U;
    return r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r4 = *(u8*)(r4 + 0xD);
    r5 = (r6 >> 1);
    *(u32*)r0 = r5; r0 += 4;
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r0 = *(u8*)(r5 + 0x1B);
    r5 = (r6 >> 1);
    *(u32*)(r0) = (u32)r0;
    r0 &= r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080303A0(r0, r1, r2, r3);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08030392: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080303A0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080303A0..0x080303C4 (36 bytes, Thumb)
u32 sub_080303A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804D8F0U /* &VTable_0804D8F0 */; // [0x08030440]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r0 = sub_080309F4(r0, r1, r2, r3); // 0x080303A8
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x78U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x94U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x98U;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08030950(r0, r1, r2, r3); // 0x080303BA: BL 0x08030950
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r4;
    return sub_0803039C(r0, r1, r2, r3);
}

// ROM Address: 0x080303C4..0x0803043A (118 bytes, Thumb)
u32 sub_080303C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x08758190U; // [0x08030444]
    r1 = *(u32*)(r0 + 0x4);
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x080303CE: BL 0x0801191A
    r1 = *(u32*)(r4 + 0x8);
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x080303D6: BL 0x0801191A
    return r0;
    r5 = 0x08758190U; // [0x08030444]
    r1 = *(u32*)(r0 + 0x8);
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080303E6
    r1 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080303EE
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_08030402;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080303FE: BL __call_via_r3
loc_08030402:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08030410: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r0 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803043A(r0, r1, r2, r3);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803041E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803042E;
    r1 = 0x08049978U /* &VTable_08049978 */; // [0x08030448]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x1EU;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_0803042E:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0803042E
    r0 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r0 + 0x1C);
    r0 += 0x1U;
    return r0;
}

// ROM Address: 0x0803043A..0x0803043E (4 bytes, Thumb)
u32 sub_0803043A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803043E..0x0803046E (48 bytes, Thumb)
u32 sub_0803043E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    if ((u32)cmp_lhs > (u32)cmp_rhs) return sub_08030424(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u16*)(r2 + 0xC) = (u16)r0;
    r5 = (r6 >> 1);
    r1 = stack[120]; // [sp + 0x1E0]
    r4 = (r0 >> 32);
    r4 = r1;
    r0 = 0x2DU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08030454: BL 0x08000158
    r2 = r0;
    r6 = 0x08758194U; // [0x080304DC]
    r1 = 0x5U;
    r0 = *(u32*)(r6);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08030460
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803046E(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803046E..0x080304DC (110 bytes, Thumb)
u32 sub_0803046E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r4;
    r5 += 0x1A0U;
    r0 = *(u32*)(r5 + 0x4);
    r1 = *(u32*)(r5);
    stack[10] = r0; // [sp + 0x28]
    stack[9] = r1; // [sp + 0x24]
    r1 = stack[10]; // [sp + 0x28]
    r0 = 0x4000U; // (1 << 14)
    r0 = r1 + r0;
    stack[10] = r0; // [sp + 0x28]
    r0 = 0x2DU;
    r7 = 0x24; // sp + 0x24
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803048A: BL 0x08000158
    r2 = r0;
    r2 += 0x8U;
    r1 = r7;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08009904(r0, r1, r2, r3); // 0x08030496: BL 0x08009904
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080304A2;
    r0 = 0x1U;
    return sub_0803046A(r0, r1, r2, r3);
loc_080304A2:
    r1 = 0x08758194U; // [0x080304DC]
    r2 = 0x20U;
    r7 = 0x4; // sp + 0x4
    r1 += 0x8U;
    r0 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080304AC: BL 0x08049138
    r0 = *(u32*)(r5);
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x10) = (u16)r0;
    r0 = 0xFFU;
    r0 += 0xA5U;
    r0 = *(u32*)(r0 + r4);
    r2 = 0x087113FCU /* &g_EnemyStatTable[14] */; // [0x080304E0]
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x12) = (u16)r0;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r7;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x080304CC
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x080304D4: BL 0x0801191A
    r0 = 0x1U;
    return sub_0803046A(r0, r1, r2, r3);
}

// ROM Address: 0x080304E4..0x08030604 (288 bytes, Thumb)
u32 sub_080304E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r5 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r5;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    r0 = 0xFFU;
    r0 += 0x77U;
    *(u8*)(r1 + 0x11) = (u8)r5;
    *(u16*)(r0 + r1) = (u16)r5;
    r0 = r1;
    r4 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08030504: BL __call_via_r3
    r1 = 0x03001C34U; // [0x08030604]
    r0 = r4;
    r1 = *(u32*)(r1);
    r0 += 0xFFU;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r0 += 0xA1U;
    *(u32*)r0 = r2; r0 += 4;
    r1 = *(u32*)(r1);
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 += 0x100U;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08030530: BL __call_via_r3
    *(u8*)(r6 + 0x4) = (u8)r5;
    return r0;
    r0 = 0x087581C8U; // [0x08030608]
    r4 = r1;
    r1 = *(u32*)(r0);
    r2 = 0xF0U;
    r1 = *(u16*)(r1 + 0x4);
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_0803054E;
    r1 = *(u16*)(r4 + 0x12);
    r1 += 0x2U;
    *(u16*)(r4 + 0x12) = (u16)r1;
loc_0803054E:
    r3 = 0x5AU;
    r2 = 0x10U;
    r1 = 0xF3U;
    r0 = *(u32*)(r0);
    r0 = sub_08040284(r0, r1, r2, r3); // 0x08030556
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030582;
    r0 = 0x03001C34U; // [0x08030604]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803056A: BL __call_via_r3
    r0 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803057E: BL __call_via_r3
loc_08030582:
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 7;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080305A8;
    r0 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = *(u8*)(r1 + 0x11);
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r1 + 0x11) = (u8)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080305A8;
    r0 = 0x4U;
    *(u8*)(r1 + 0x11) = (u8)r0;
loc_080305A8:
    return r0; // BX lr
    r6 = 0x03001C34U; // [0x08030604]
    r5 = r1;
    r4 = *(u32*)(r6);
    r0 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080305BA
    r1 = 0x03001B00U; // [0x0803060C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080305C2
    r1 = 0x03003144U; // [0x08030610]
    r0 = *(u32*)(r6);
    r0 = sub_08010BB8(r0, r1, r2, r3); // 0x080305CA
    r1 = 0x12U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080305D2
    r1 = 0x03003144U; // [0x08030610]
    r1 += 0x8U;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080305DC
    return r0;
    r4 = 0x03001C34U; // [0x08030604]
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080305F0: BL __call_via_r3
    r1 = 0x03001C3CU; // [0x08030614]
    r0 = *(u32*)(r4);
    r0 = sub_08010BB8(r0, r1, r2, r3); // 0x080305F8
    return r0;
    r0 = 0x03003144U; // [0x08030610]
    r0 += 0x4U;
    return r0; // BX lr
}

// ROM Address: 0x08030604..0x08030606 (2 bytes, Thumb)
u32 sub_08030604(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    return r0;
}

// ROM Address: 0x08030606..0x08030630 (42 bytes, Thumb)
u32 sub_08030606(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u16*)(r1 + 0xE) = (u16)r0;
    r5 = (r6 >> 1);
    r0 = r0 - r4;
    r0 = (r0 << 12);
    r1 += 0x44U;
    r0 = (r0 << 12);
    r4 = r7;
    r0 = (r0 << 12);
    r3 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r3;
    r2 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    *(u8*)(r1 + 0x11) = (u8)r3;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x8);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803062A: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08030630..0x08030740 (272 bytes, Thumb)
u32 sub_08030630(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x03001B94U; // [0x08030850]
    r4 = r1;
    r7 = *(u32*)(r0);
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030722;
    r0 = *(u16*)(r4 + 0x12);
    r6 = r5 + 4;
    r3 = r6 + 4;
    stack[16] = r3; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08030724;
    r1 = r7;
    r0 = 0x10; // sp + 0x10
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08030650: BL 0x0800FDFA
    r1 = 0x10; // sp + 0x10
    r0 = 0x20; // sp + 0x20
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x08030658
    r1 = r4;
    r0 = 0x28; // sp + 0x28
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08030660: BL 0x0800FDFA
    r1 = 0x28; // sp + 0x28
    r0 = 0x38; // sp + 0x38
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x08030668
    r0 = stack[8]; // [sp + 0x20]
    r1 = stack[14]; // [sp + 0x38]
    r2 = stack[15]; // [sp + 0x3C]
    r0 = r0 - r1;
    r1 = stack[9]; // [sp + 0x24]
    stack[2] = r0; // [sp + 0x8]
    r1 = r1 - r2;
    r2 = 0x1U;
    r3 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[3] = r1; // [sp + 0xC]
    if (cmp_lhs > cmp_rhs) goto loc_08030686;
    r3 = (u32)(-(s32)r2);
loc_08030686:
    r3 = (r3 << 8);
    r2 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08030690;
    r2 = (u32)(-(s32)r2);
loc_08030690:
    *(u32*)(r6) = (u32)r3;
    r3 = stack[16]; // [sp + 0x40]
    r2 = (r2 << 8);
    *(u32*)(r3) = (u32)r2;
    r2 = 0x20U;
    r3 = (u32)(-(s32)r2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_080306A2;
    r2 = r3;
loc_080306A2:
    r0 = 0x20U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_080306AA;
    r0 = r3;
loc_080306AA:
    r1 = r7;
    r7 = 0x8; // sp + 0x8
    stack[15] = r0; // [sp + 0x3C]
    r0 = r7;
    stack[14] = r2; // [sp + 0x38]
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080306B4: BL 0x0800FDFA
    r1 = r7;
    r0 = 0x18; // sp + 0x18
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x080306BC
    r1 = r4;
    r7 = 0x20; // sp + 0x20
    r0 = r7;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080306C6: BL 0x0800FDFA
    r1 = r7;
    r0 = 0x30; // sp + 0x30
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x080306CE
    r0 = stack[12]; // [sp + 0x30]
    r2 = stack[14]; // [sp + 0x38]
    r3 = 0x1U;
    r1 = r0 + r2;
    r0 = stack[15]; // [sp + 0x3C]
    r2 = stack[13]; // [sp + 0x34]
    stack[0] = r1; // [sp + 0x0]
    r0 = r2 + r0;
    r2 = stack[6]; // [sp + 0x18]
    stack[1] = r0; // [sp + 0x4]
    r1 = r2 - r1;
    r2 = stack[7]; // [sp + 0x1C]
    stack[0] = r1; // [sp + 0x0]
    r0 = r2 - r0;
    r2 = r3;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    stack[1] = r0; // [sp + 0x4]
    if (cmp_lhs > cmp_rhs) goto loc_080306F8;
    r2 = (u32)(-(s32)r2);
loc_080306F8:
    r1 = (r2 << 8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08030702;
    r3 = 0x0U;
    r3 = ~r3;
loc_08030702:
    r0 = (r3 << 8);
    stack[13] = r0; // [sp + 0x34]
    stack[12] = r1; // [sp + 0x30]
    r0 = *(u32*)(r5 + 0x4);
    r0 *= r1;
    r0 = ((u32)((s32)r0 >> 8));
    r1 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08030726;
    r0 = *(u32*)(r5 + 0x8);
    r2 = stack[13]; // [sp + 0x34]
    r0 *= r2;
    r0 = ((u32)((s32)r0 >> 8));
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08030726;
    r0 = 0x1U;
    goto loc_08030728;
loc_08030722:
    return sub_080307F6(r0, r1, r2, r3);
loc_08030724:
    return sub_0803074A(r0, r1, r2, r3);
loc_08030726:
    r0 = 0x0U;
loc_08030728:
    *(u8*)(r5 + 0xC) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r0 = *(u8*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08030740(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0803074A(r0, r1, r2, r3);
    r1 = 0xEU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803073A
    return sub_0803074A(r0, r1, r2, r3);
}

// ROM Address: 0x08030740..0x080307FA (186 bytes, Thumb)
u32 sub_08030740(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r4 + 0x12) = (u16)r1;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08030746
    r7 = r4;
    r0 = *(u8*)(r5 + 0xC);
    r7 += 0x1A0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803076E;
    r0 = *(u32*)(r6);
    r3 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 9);
    r1 = *(u32*)(r3);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = (r1 << 9);
    r1 = ((u32)((s32)r1 >> 8));
    stack[9] = r1; // [sp + 0x24]
    stack[11] = r1; // [sp + 0x2C]
    stack[8] = r0; // [sp + 0x20]
    stack[10] = r0; // [sp + 0x28]
    r6 = 0x28; // sp + 0x28
loc_0803076E:
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r6);
    r2 = *(u32*)(r7 + 0x4);
    r0 = r0 + r1;
    r1 = *(u32*)(r6 + 0x4);
    stack[8] = r0; // [sp + 0x20]
    r1 = r2 + r1;
    stack[9] = r1; // [sp + 0x24]
    stack[13] = r1; // [sp + 0x34]
    stack[15] = r1; // [sp + 0x3C]
    stack[12] = r0; // [sp + 0x30]
    stack[14] = r0; // [sp + 0x38]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r5 = r7 + 4;
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08030792: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x38; // sp + 0x38
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080307A0: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080307B0;
    r0 = stack[14]; // [sp + 0x38]
    *(u32*)(r7) = (u32)r0;
    r0 = stack[15]; // [sp + 0x3C]
    *(u32*)(r5) = (u32)r0;
loc_080307B0:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080307BA: BL __call_via_r3
    r1 = r4;
    r0 = 0x18; // sp + 0x18
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x080307C2
    r0 = 0x03001C34U; // [0x08030854]
    r1 = *(u32*)(r0);
    r0 = 0x28; // sp + 0x28
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x080307CC
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[12]; // [sp + 0x30]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080307F6;
    r0 = stack[10]; // [sp + 0x28]
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080307F6;
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080307F6;
    r0 = stack[11]; // [sp + 0x2C]
    r1 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080307F6;
    r0 = r4;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x080307F2: BL 0x0800EE78
loc_080307F6:
    return r0;
}

// ROM Address: 0x080307FA..0x08030838 (62 bytes, Thumb)
u32 sub_080307FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u8*)(r0 + 0xC);
    r2 = r1;
    r2 += 0x160U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = 0x087B6EECU; // [0x08030858]
    if (cmp_lhs == cmp_rhs) goto loc_08030826;
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08030840(r0, r1, r2, r3);
    r3 = (r0 << 24);
    r3 = (r3 >> 22);
    r3 = *(u32*)(r4 + r3);
    r3 = (u32)(-(s32)r3);
    r3 = ((u32)((s32)r3 >> 11));
    *(u16*)(r2 + 0x16) = (u16)r3;
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    if (cmp_lhs != cmp_rhs) return sub_08030838(r0, r1, r2, r3);
    r2 = 0x1U;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return sub_08030840(r0, r1, r2, r3);
loc_08030826:
    r3 = 0x0U;
    *(u8*)(r1 + 0x11) = (u8)r3;
    r3 = (r0 << 24);
    r3 = (r3 >> 22);
    r3 = *(u32*)(r4 + r3);
    r3 = (u32)(-(s32)r3);
    r3 = ((u32)((s32)r3 >> 13));
    *(u16*)(r2 + 0x16) = (u16)r3;
    return sub_08030840(r0, r1, r2, r3);
}

// ROM Address: 0x08030838..0x0803084C (20 bytes, Thumb)
u32 sub_08030838(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 80;
    if (cmp_lhs != cmp_rhs) goto loc_08030840;
    r2 = 0x2U;
    *(u8*)(r1 + 0x11) = (u8)r2;
loc_08030840:
    r0 += 0x8U;
    r0 = (r0 << 25);
    r0 = (r0 >> 25);
    *(u16*)(r1 + 0x12) = (u16)r0;
    return r0; // BX lr
}

// ROM Address: 0x0803084C..0x08030850 (4 bytes, Thumb)
u32 sub_0803084C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003154U; // [0x0803085C]
    return r0; // BX lr
}

// ROM Address: 0x08030850..0x0803087E (46 bytes, Thumb)
u32 sub_08030850(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r4 = r6;
    r0 = (r0 << 12);
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    r1 += 0x54U;
    r0 = (r0 << 12);
    r7 = r3;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803087E(r0, r1, r2, r3);
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08030870: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0803087E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0803087E..0x08030950 (210 bytes, Thumb)
u32 sub_0803087E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080309D8]
    r5 = (r6 << 4);
    *(u32*)(r4) = (u32)r0;
    r0 = 0x087581E4U; // [0x080309DC]
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r0);
    r1 = r5;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0803088C
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_080308A8;
    r0 = 0x087581E4U; // [0x080309DC]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0803089A: BL 0x08011732
    r0 = 0x087581E4U; // [0x080309DC]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080308A4
loc_080308A8:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804AF78U /* &VTable_0804AF78 */; // [0x080309E0]
    r2 = 0x10U;
    r5 = sp;
    *(u32*)(r4) = (u32)r0;
    r5 = r5 + r2;
    r1 = r6;
    r0 = r5;
    *(u32*)(r4 + 0x10) = (u32)r6;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080308BA
    r0 = 0x087581E4U; // [0x080309DC]
    r3 = 0x0; // sp + 0x0
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x2U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x1U;
    *(u8*)(r3 + 0x10) = (u8)r0;
    *(u8*)(r3 + 0x13) = (u8)r1;
    *(u8*)(r3 + 0x12) = (u8)r0;
    r0 = 0x0803F70DU; // [0x080309E4]
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u32*)(r4 + 0x10);
    r2 = stack[16]; // [sp + 0x40]
    r1 = (r0 >> 31);
    r0 = r1 + r0;
    r0 = ((u32)((s32)r0 >> 1));
    stack[5] = r0; // [sp + 0x14]
    r0 = 0xCU;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[13]; // [sp + 0x34]
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x080308E8: BL 0x08046E40
    r0 = r5;
    r1 = stack[19]; // [sp + 0x4C]
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x080308F0
    r0 = *(u32*)(r4 + 0x10);
    r1 = (r0 >> 31);
    r0 = r1 + r0;
    r1 = *(u32*)(r7);
    r0 = ((u32)((s32)r0 >> 1));
    r0 = r1 - r0;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 -= 0x8U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x10U;
    stack[3] = r0; // [sp + 0xC]
    r1 = *(u32*)(r4 + 0x10);
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803093E;
    r7 = sp;
loc_0803091A:
    r6 = r0;
    r6 += 0x20U;
    stack[2] = r6; // [sp + 0x8]
    stack[0] = r0; // [sp + 0x0]
    r1 = *(u16*)(r4 + 0xC);
    r2 = 0x06010000U; // [0x080309E8]
    r0 = (r0 << 4);
    r1 = (r1 << 5);
    r1 = r1 + r2;
    r1 = r1 + r0;
    r2 = r7;
    r0 = r5;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08030932: BL 0x0804915C
    r1 = *(u32*)(r4 + 0x10);
    r0 = r6;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) goto loc_0803091A;
loc_0803093E:
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r1 = 0x0U;
    r0 = r5;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08030948: BL 0x0803F58C
    r0 = r4;
    return sub_0803087A(r0, r1, r2, r3);
}

// ROM Address: 0x08030950..0x08030A0C (188 bytes, Thumb)
u32 sub_08030950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080309EC]
    r0 = (r0 << 2);
    r4 = *(u32*)(r1 + r0);
    r6 = 0x087581E4U; // [0x080309DC]
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08030960
    r0 += 0x21U;
    r5 = (r0 >> 5);
    r5 = (r5 << 5);
    r1 = (r5 << 4);
    r0 = *(u32*)(r6);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0803096E: BL 0x08011732
    r3 = r7;
    r2 = r4;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_08030860(r0, r1, r2, r3); // 0x0803097A
    return r0;
    r2 = *(u32*)(r1);
    r4 = *(u32*)(r0 + 0x10);
    r3 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080309CE;
    r6 = 0x3U;
    r7 = 0x80006000U; // [0x080309F0]
    r6 = (r6 << 10);
loc_08030992:
    *(u32*)(r2) = (u32)r7;
    r4 = *(u32*)(r0 + 0x14);
    r4 = r4 + r3;
    r4 = (r4 << 23);
    r4 = (r4 >> 7);
    r4 |= r7;
    *(u32*)(r2) = (u32)r4;
    r5 = *(u32*)(r0 + 0x18);
    r4 = (r4 >> 8);
    r5 = (r5 << 24);
    r5 = (r5 >> 24);
    r4 = (r4 << 8);
    r4 |= r5;
    *(u32*)(r2) = (u32)r4;
    r4 = *(u16*)(r0 + 0xC);
    r5 = ((u32)((s32)r3 >> 1));
    r3 += 0x20U;
    r4 = r4 + r5;
    r5 = *(u32*)(r2 + 0x4);
    r4 = (r4 << 22);
    r5 = (r5 >> 10);
    r5 = (r5 << 10);
    r4 = (r4 >> 22);
    r4 |= r5;
    r4 &= ~r6;
    *(u32*)(r2 + 0x4) = (u32)r4;
    r4 = *(u32*)(r0 + 0x10);
    r2 += 0x8U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_08030992;
loc_080309CE:
    *(u32*)(r1) = (u32)r2;
    r0 = 0x0U;
    return r0; // BX lr
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    *(u16*)(r4 + 0xE) = (u16)r4;
    r5 = (r6 >> 1);
    r7 = 0x1E0; // sp + 0x1E0
    r4 = (r0 >> 32);
    r3 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r6 = (r0 >> 32);
    *(u32*)(r0) = (u32)r0;
    *(u16*)(r0) = (u16)r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08030A0C(r0, r1, r2, r3);
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08030A00: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08030A0C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08030A0C..0x08030A2C (32 bytes, Thumb)
u32 sub_08030A0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x087581F4U; // [0x08030AA4]
    r0 = r4;
    r0 = sub_080301F8(r0, r1, r2, r3); // 0x08030A10: BL 0x080301F8
    r0 = 0x0804D20CU /* &VTable_0804D20C */; // [0x08030AA8]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = 0x290U; // (41 << 4)
    r0 *= r5;
    r0 = ((u32)((s32)r0 >> 8));
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = r4;
    return sub_08030A0A(r0, r1, r2, r3);
}

// ROM Address: 0x08030A42..0x08030A68 (38 bytes, Thumb)
u32 sub_08030A42(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    r0 = 0x1U;
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x2C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08030A64;
    r1 = 0x087581F4U; // [0x08030AA4]
    r1 -= 0x8U;
    r1 = *(u32*)(r1);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) return sub_08030A68(r0, r1, r2, r3);
    r1 = 0x1U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
loc_08030A64:
    return r0; // BX lr
}

// ROM Address: 0x08030A68..0x08030AA2 (58 bytes, Thumb)
u32 sub_08030A68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x24);
    r2 = *(u32*)(r0 + 0x28);
    r1 = r1 + r2;
    r2 = r0;
    r2 += 0x28U;
    r3 = r2 - 4;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    *(u32*)(r0 + 0x24) = (u32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08030A86;
    r1 = (u32)(-(s32)r1);
    *(u32*)(r3) = (u32)r1;
    r1 = *(u32*)(r0 + 0x28);
    r1 = (u32)(-(s32)r1);
    *(u32*)(r2) = (u32)r1;
    goto loc_08030A9A;
loc_08030A86:
    r4 = 0x5500U; // (85 << 8)
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_08030A9A;
    r4 = (r4 << 1);
    r1 = r4 - r1;
    *(u32*)(r3) = (u32)r1;
    r1 = *(u32*)(r0 + 0x28);
    r1 = (u32)(-(s32)r1);
    *(u32*)(r2) = (u32)r1;
loc_08030A9A:
    r1 = *(u32*)(r0 + 0x24);
    r1 = ((u32)((s32)r1 >> 8));
    *(u32*)(r0 + 0x1C) = (u32)r1;
    return sub_08030A64(r0, r1, r2, r3);
}

// ROM Address: 0x08030AA2..0x08030AD8 (54 bytes, Thumb)
u32 sub_08030AA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u16*)(r6 + 0xE) = (u16)r4;
    r5 = (r6 >> 1);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08030AC4;
    r4 = (r0 >> 32);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r5 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0 + 0x8);
    r1 += 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r2 = (r1 << 29);
    if (cmp_lhs != cmp_rhs) goto loc_08030AD4;
    r4 = ((u32)((s32)r1 >> 3));
    r2 = *(u32*)(r0 + 0x10);
loc_08030AC4:
    r1 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08030AD8(r0, r1, r2, r3);
    cmp_lhs = (s32)r4; cmp_rhs = 8;
    if (cmp_lhs < cmp_rhs) return sub_08030AE4(r0, r1, r2, r3);
    r2 = 0x0U;
    *(u32*)(r5 + 0x1C) = (u32)r2;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_08030AD4:
    return r0;
}

// ROM Address: 0x08030AD8..0x08030B12 (58 bytes, Thumb)
u32 sub_08030AD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r4; cmp_rhs = 5;
    if (cmp_lhs < cmp_rhs) goto loc_08030AE0;
    *(u32*)(r0 + 0xC) = (u32)r1;
    return sub_08030AD4(r0, r1, r2, r3);
loc_08030AE0:
    r0 = 0x087581FCU; // [0x08030B18]
    r4 = *(u8*)(r0 + r4);
    r2 = 0x40U;
    r1 = 0x40U;
    r6 = 0x4; // sp + 0x4
    r0 = r6;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08030AEC
    r2 = 0x087581FCU; // [0x08030B18]
    r1 = (r4 << 2);
    r2 += 0x8U;
    r1 = r1 + r2;
    r0 = stack[10]; // [sp + 0x28]
    r1 = *(u32*)(r1 + 0x4);
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x08030AFC: BL 0x08049120
    r0 = *(u16*)(r5 + 0x16);
    r1 = 0x06010000U; // [0x08030B1C]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = r6;
    r0 = sub_0803F9B8(r0, r1, r2, r3); // 0x08030B0A
    r1 = 0x0U;
    r0 = r6;
    return r0;
}

// ROM Address: 0x08030B18..0x08030BCC (180 bytes, Thumb)
u32 sub_08030B18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r7 + 0xE) = (u16)r4;
    r5 = (r6 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    r0 = 0x1U;
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x58);
    r3 = 0x10U;
    r1 -= 0x1U;
    r2 = r1;
    *(u32*)(r0 + 0x58) = (u32)r1;
    r1 = 0x04000050U /* &REG_BLDCNT */; // [0x08030EF4]
    *(u8*)(r1 + 0x2) = (u8)r2;
    r2 = *(u32*)(r0 + 0x58);
    r2 = r3 - r2;
    *(u8*)(r1 + 0x3) = (u8)r2;
    r0 = *(u32*)(r0 + 0x58);
    r1 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030B42;
    r1 = 0x0U;
loc_08030B42:
    r0 = r1;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x54);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030B5A;
    r1 = r0;
    r0 = 0x08759154U; // [0x08030EF8]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08030B56
loc_08030B5A:
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030B66;
    r0 = 0x08030B25U; // [0x08030EFC]
    *(u32*)(r4 + 0x60) = (u32)r0;
    return r0;
loc_08030B66:
    r0 = 0x08030B21U; // [0x08030F00]
    *(u32*)(r4 + 0x60) = (u32)r0;
    return r0;
    r5 = 0x08759154U; // [0x08030EF8]
    r2 = *(u32*)(r0 + 0x10);
    r4 = r0;
    r1 = *(u32*)(r5);
    r0 = 0x03002A60U; // [0x08030F04]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r1 = *(u16*)(r1 + 0x4);
    if (cmp_lhs == cmp_rhs) goto loc_08030BA4;
    r3 = (r1 << 25);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08030B90;
    r3 = *(u32*)(r0);
    r3 -= 0x1U;
    *(u32*)(r0) = (u32)r3;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08030B90;
    r3 = r2 - 1;
    *(u32*)(r0) = (u32)r3;
loc_08030B90:
    r3 = (r1 << 24);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08030BA4;
    r3 = *(u32*)(r0);
    r3 += 0x1U;
    *(u32*)(r0) = (u32)r3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_08030BA4;
    r2 = 0x0U;
    *(u32*)(r0) = (u32)r2;
loc_08030BA4:
    r1 = (r1 << 30);
    r1 = (r1 >> 31);
    r6 = 0x08030B25U; // [0x08030EFC]
    r7 = 0x08030B21U; // [0x08030F00]
    if (cmp_lhs == cmp_rhs) return sub_08030BCE(r0, r1, r2, r3);
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r4 + 0x54);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030BC2;
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08030BBE
loc_08030BC2:
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08030BCC(r0, r1, r2, r3);
    *(u32*)(r4 + 0x60) = (u32)r6;
    return sub_08030BCE(r0, r1, r2, r3);
}

// ROM Address: 0x08030BCC..0x08030BCE (2 bytes, Thumb)
u32 sub_08030BCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x60) = (u32)r7;
    return r0;
}

// ROM Address: 0x08030BCE..0x08030C2E (96 bytes, Thumb)
u32 sub_08030BCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08030BF0;
    r0 = *(u32*)(r4 + 0x54);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030BE4;
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08030BE0
loc_08030BE4:
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030BEE;
    *(u32*)(r4 + 0x60) = (u32)r6;
    goto loc_08030BF0;
loc_08030BEE:
    *(u32*)(r4 + 0x60) = (u32)r7;
loc_08030BF0:
    r0 = 0x0U;
    return r0;
    r1 = *(u32*)(r0 + 0x58);
    r3 = 0x10U;
    r1 += 0x1U;
    r2 = r1;
    *(u32*)(r0 + 0x58) = (u32)r1;
    r1 = 0x04000050U /* &REG_BLDCNT */; // [0x08030EF4]
    *(u8*)(r1 + 0x2) = (u8)r2;
    r2 = *(u32*)(r0 + 0x58);
    r2 = r3 - r2;
    *(u8*)(r1 + 0x3) = (u8)r2;
    r1 = *(u32*)(r0 + 0x58);
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_08030C12;
    r1 = 0x08030B6DU; // [0x08030F08]
    *(u32*)(r0 + 0x60) = (u32)r1;
loc_08030C12:
    r0 = 0x0U;
    return r0; // BX lr
    r6 = r0;
    if (cmp_lhs != cmp_rhs) return Bg_WriteScroll0AndBlendAlpha(r0, r1, r2, r3);
    r0 = 0x64U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08030C20: BL 0x0803D5B8
    r6 = r0;
    if (cmp_lhs != cmp_rhs) return Bg_WriteScroll0AndBlendAlpha(r0, r1, r2, r3);
    r0 = r6;
    return r0;
}

// Evidence: writes BG0HOFS 0x04000010: 0x08030EC4 ldr r2, [pc, #0x6c] (= 0x04000010) then 0x08030EC8 strh r0, [r2]; writes BG0VOFS 0x04000012: 0x08030EC4 ldr r2, [pc, #0x6c] (= 0x04000010) then 0x08030ECC strh r1, [r2, #2]; writes BLDALPHA 0x04000052: 0x08030EE2 ldr r0, [pc, #0x58] (= 0x04000052) then 0x08030EE6 strb r3, [r0]; writes BLDALPHA 0x04000053: 0x08030EE4 ldr r2, [pc, #0x58] (= 0x04000053) then 0x08030EEA strb r0, [r2]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08030C2E
// ROM Address: 0x08030C2E..0x08030EF4 (710 bytes, Thumb)
u32 Bg_WriteScroll0AndBlendAlpha(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08030F0C]
    r1 = r6;
    *(u32*)(r6) = (u32)r0;
    r0 = 0x080496B4U; // [0x08030F10]
    r1 += 0xCU;
    stack[24] = r1; // [sp + 0x60]
    *(u32*)(r6 + 0xC) = (u32)r0;
    r0 = 0x0804ABD8U /* &VTable_0804ABD8 */; // [0x08030F14]
    *(u32*)(r6) = (u32)r0;
    r0 += 0x2CU;
    *(u32*)(r6 + 0xC) = (u32)r0;
    r2 = r1 + 4;
    stack[23] = r2; // [sp + 0x5C]
    r0 = 0x0U;
    *(u32*)(r6 + 0x10) = (u32)r0;
    r2 = 0x800U; // (1 << 11)
    *(u32*)(r6 + 0x54) = (u32)r0;
    r0 = 0x0600E000U; // [0x08030F18]
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08030C56: BL 0x0804912C
    r0 = 0x0U;
    r4 = 0x03000F50U; // [0x08030F1C]
    stack[18] = r0; // [sp + 0x48]
    stack[19] = r0; // [sp + 0x4C]
    r1 = *(u32*)(r4 + 0x8);
    r2 = *(u32*)(r4);
    r5 = 0x08759154U; // [0x08030EF8]
    r1 = r1 - r2;
    r2 = ((u32)((s32)r1 >> 31));
    r2 = (r2 >> 29);
    r1 = r2 + r1;
    r2 = ((u32)((s32)r1 >> 3));
    r1 = *(u32*)(r4 + 0xC);
    r3 = *(u32*)(r4 + 0x4);
    stack[20] = r2; // [sp + 0x50]
    r1 = r1 - r3;
    r3 = ((u32)((s32)r1 >> 31));
    r3 = (r3 >> 29);
    r1 = r3 + r1;
    r1 = ((u32)((s32)r1 >> 3));
    stack[21] = r1; // [sp + 0x54]
    r1 = *(u32*)(r5 + 0x10);
    r0 = 0x48; // sp + 0x48
    r7 = *(u16*)(r1);
    r1 = 0x0600E000U; // [0x08030F18]
    r2 = r7;
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08030C8E
    r0 = 0x6000000U; // (3 << 25)
    r1 = (r7 << 6);
    r0 = r1 + r0;
    stack[22] = r0; // [sp + 0x58]
    r1 = *(u32*)(r4 + 0x8);
    r2 = *(u32*)(r4);
    r1 = r1 - r2;
    r2 = *(u32*)(r4 + 0xC);
    r3 = *(u32*)(r4 + 0x4);
    r2 = r2 - r3;
    r2 *= r1;
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08030CAC: BL 0x0804912C
    r0 = *(u32*)(r4 + 0x8);
    r1 = *(u32*)(r4);
    r1 = r0 - r1;
    r0 = *(u32*)(r4 + 0xC);
    r2 = *(u32*)(r4 + 0x4);
    r4 = 0x14; // sp + 0x14
    r2 = r0 - r2;
    r0 = r4;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08030CC0
    r0 = *(u32*)(r5 + 0x14);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = 0xEU;
    *(u8*)(r3 + 0x15) = (u8)r0;
    r0 = 0x2U;
    *(u8*)(r3 + 0x17) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r3 + 0x16) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x08030F20]
    r2 = 0x3C; // sp + 0x3C
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[15]; // [sp + 0x3C]
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r0 -= 0x8U;
    stack[1] = r0; // [sp + 0x4]
    r2 -= 0x8U;
    stack[4] = r2; // [sp + 0x10]
    r0 = 0x0U;
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x0U;
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x4; // sp + 0x4
    r0 = r4;
    r0 = sub_0803F974(r0, r1, r2, r3); // 0x08030CF4
    r0 = stack[16]; // [sp + 0x40]
    r2 = 0x3C; // sp + 0x3C
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r3 = 0x0U;
    r0 -= 0x8U;
    stack[4] = r2; // [sp + 0x10]
    r2 = 0x0U;
    stack[2] = r0; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x4; // sp + 0x4
    r0 = r4;
    stack[1] = r3; // [sp + 0x4]
    r0 = sub_0803F974(r0, r1, r2, r3); // 0x08030D10
    r0 = stack[15]; // [sp + 0x3C]
    r2 = stack[16]; // [sp + 0x40]
    r0 -= 0xCU;
    r2 -= 0xCU;
    stack[4] = r2; // [sp + 0x10]
    r1 = 0x4U;
    r2 -= 0x4U;
    r3 = r0 - 4;
    stack[0] = r2; // [sp + 0x0]
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x14; // sp + 0x14
    r2 = r1;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r0 = sub_08004F1C(r0, r1, r2, r3); // 0x08030D30
    r1 = stack[16]; // [sp + 0x40]
    r0 = stack[15]; // [sp + 0x3C]
    r2 = 0x0U;
    r1 -= 0x8U;
    r0 -= 0x8U;
    stack[3] = r0; // [sp + 0xC]
    stack[4] = r1; // [sp + 0x10]
    r1 = 0x4; // sp + 0x4
    r0 = r4;
    stack[1] = r2; // [sp + 0x4]
    stack[2] = r2; // [sp + 0x8]
    r0 = sub_08004F50(r0, r1, r2, r3); // 0x08030D4A
    r0 = stack[26]; // [sp + 0x68]
    r4 = 0x14U;
    stack[2] = r0; // [sp + 0x8]
    goto loc_08030D5A;
loc_08030D56:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030DBE;
loc_08030D5A:
    r1 = 0x03000F50U; // [0x08030F1C]
    r7 = 0x8U;
    r0 = *(u32*)(r1 + 0x8);
    r1 = *(u32*)(r1);
    r0 = r0 - r1;
    r0 -= 0x18U;
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_08030D84;
loc_08030D70:
    r0 = stack[2]; // [sp + 0x8]
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r0 + 0x2);
    *(u8*)(r3 + 0x17) = (u8)r0;
    r0 = stack[2]; // [sp + 0x8]
    r0 += 0x4U;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs == cmp_rhs) goto loc_08030D70;
loc_08030D84:
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 45;
    if (cmp_lhs != cmp_rhs) goto loc_08030DBE;
    r0 = stack[2]; // [sp + 0x8]
    r0 += 0x2U;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if (cmp_lhs != cmp_rhs) goto loc_08030DA4;
loc_08030D98:
    r0 = stack[2]; // [sp + 0x8]
    r0 += 0x2U;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if (cmp_lhs == cmp_rhs) goto loc_08030D98;
loc_08030DA4:
    r0 = stack[0]; // [sp + 0x0]
    r2 = stack[23]; // [sp + 0x5C]
    r0 -= 0x10U;
    stack[0] = r0; // [sp + 0x0]
    r0 = *(u32*)(r2);
    r7 += 0x10U;
    r1 = r0 + 1;
    r0 = (r0 << 3);
    r0 = r0 + r2;
    r0 += 0x4U;
    *(u32*)(r2) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    *(u32*)(r0) = (u32)r7;
loc_08030DBE:
    r5 = r7;
    r3 = 0x4; // sp + 0x4
    r0 = 0x14; // sp + 0x14
    r1 = stack[2]; // [sp + 0x8]
    r2 = stack[0]; // [sp + 0x0]
    r0 = sub_0803DE6A(r0, r1, r2, r3); // 0x08030DC8
    r1 = 0x4; // sp + 0x4
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08030E26;
loc_08030DD4:
    r0 = stack[1]; // [sp + 0x4]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_08030DEC;
    r0 = stack[1]; // [sp + 0x4]
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r0 + 0x2);
    *(u8*)(r3 + 0x17) = (u8)r0;
    r0 = stack[1]; // [sp + 0x4]
    r0 += 0x4U;
    stack[1] = r0; // [sp + 0x4]
    goto loc_08030E1E;
loc_08030DEC:
    r0 = stack[1]; // [sp + 0x4]
    stack[6] = r5; // [sp + 0x18]
    stack[7] = r4; // [sp + 0x1C]
    r1 = *(u16*)(r0);
    r0 = 0x14; // sp + 0x14
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x08030DF6: BL 0x0803DE50
    r0 = stack[1]; // [sp + 0x4]
    r0 = *(u16*)(r0);
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08030E0A;
    r0 = *(u32*)(r1 + 0x4);
    r0 += 0x1U;
    goto loc_08030E16;
loc_08030E0A:
    r1 = *(u32*)(r1);
    r0 = (r0 << 1);
    r0 = *(u16*)(r1 + r0);
    r0 = (r0 << 1);
    r0 = *(u16*)(r1 + r0);
    r0 += 0x1U;
loc_08030E16:
    r5 = r0 + r5;
    r0 = stack[1]; // [sp + 0x4]
    r0 += 0x2U;
    stack[1] = r0; // [sp + 0x4]
loc_08030E1E:
    r1 = 0x4; // sp + 0x4
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08030DD4;
loc_08030E26:
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) goto loc_08030E34;
    r4 += 0xEU;
    r1 = 0x0U;
    goto loc_08030E44;
loc_08030E34:
    r1 = 0x1U;
loc_08030E36:
    r0 = stack[2]; // [sp + 0x8]
    r4 += 0xEU;
    r0 += 0x2U;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) goto loc_08030E36;
loc_08030E44:
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08030D56;
    r0 = 0x03000F4CU; // [0x08030F24]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030E7E;
    r0 = 0x2U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = stack[15]; // [sp + 0x3C]
    r1 = stack[16]; // [sp + 0x40]
    r0 -= 0x10U;
    stack[6] = r0; // [sp + 0x18]
    r1 -= 0x10U;
    stack[7] = r1; // [sp + 0x1C]
    r0 = 0x08759154U; // [0x08030EF8]
    r1 = 0x000004F4U; // [0x08030F28]
    r0 = *(u32*)(r0 + 0x8);
    r0 = r0 + r1;
    r2 = *(u32*)(r0);
    r0 = 0x99U;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08030F2C]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = 0x14; // sp + 0x14
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08030E7A
loc_08030E7E:
    r0 = *(u32*)(r6 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030EA4;
    r0 = 0x0U;
    r1 = 0x03002A60U; // [0x08030F04]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r1) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08030E90;
    r0 = stack[24]; // [sp + 0x60]
loc_08030E90:
    r1 = r0;
    r0 = 0x0U;
    r0 = sub_080178C8(r0, r1, r2, r3); // 0x08030E94: BL 0x080178C8
    r1 = r0;
    *(u32*)(r6 + 0x54) = (u32)r0;
    r0 = 0x08759154U; // [0x08030EF8]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08030EA0: BL 0x0801191A
loc_08030EA4:
    r4 = 0x03000F50U; // [0x08030F1C]
    r0 = *(u32*)(r4 + 0x8);
    r1 = *(u32*)(r4);
    r0 = r0 - r1;
    r1 = *(u32*)(r4 + 0xC);
    r2 = *(u32*)(r4 + 0x4);
    r1 = r1 - r2;
    r0 *= r1;
    r1 = stack[14]; // [sp + 0x38]
    r3 = r0;
    r0 = r1;
    r2 = 0x0805672CU; // [0x08030F30]
    r0 = sub_0804918C(r0, r1, r2, r3); // 0x08030EBC: BL 0x0804918C
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r4 + 0x4);
    r2 = 0x04000010U /* &REG_BG0HOFS */; // [0x08030F34]
    r0 = (u32)(-(s32)r0);
    *(u16*)(r2) = (u16)r0;
    r1 = (u32)(-(s32)r1);
    *(u16*)(r2 + 0x2) = (u16)r1;
    r1 = r2;
    r1 += 0x30U;
    r0 = *(u16*)(r1 + 0x10);
    r0 = (r0 << 26);
    if (cmp_lhs != cmp_rhs) return sub_08030F48(r0, r1, r2, r3);
    r0 = 0x08030BF5U; // [0x08030F38]
    r3 = 0x0U;
    *(u32*)(r6 + 0x60) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r6 + 0x5C) = (u32)r0;
    r0 = 0x04000052U /* &REG_BLDALPHA */; // [0x08030F3C]
    r2 = 0x04000053U; // [0x08030F40]
    *(u8*)(r0) = (u8)r3;
    r0 = 0x10U;
    *(u8*)(r2) = (u8)r0;
    r0 = 0x00003E41U; // [0x08030F44]
    *(u32*)(r6 + 0x58) = (u32)r3;
    *(u16*)(r1 + 0x10) = (u16)r0;
    return sub_08030F50(r0, r1, r2, r3);
}
