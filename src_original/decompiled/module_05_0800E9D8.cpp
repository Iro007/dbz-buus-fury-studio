/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #05
 * Address Range: 0x0800E9D8..0x08011650 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// Evidence: 0x0800E9D8 pushes five registers and 0x0800EA02 loads the attacker's +0x1B0 strength word (asm/Battle_ComputeDamage.s:24); the same body multiplies it by the event's +4 word, rolls 0..0x1A and stores the result at the damage record's +0x18 (asm/sub_0800EA2C.s:75), and the applier body subtracts that word from the target's +0x28C (asm/Battle_ApplyDamage.s:19-22)
// ROM Address: 0x0800E9D8..0x0800EA10 (56 bytes, Thumb)
u32 Battle_ComputeDamage(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r4 = r1;
    r1 += 0x8U;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[9] = r1; // [sp + 0x24]
    r2 = r6;
    r2 += 0xFFU;
    r1 = *(u8*)(r0);
    r5 = *(u32*)(r0 + 0x4);
    r2 += 0xA1U;
    stack[12] = r2; // [sp + 0x30]
    r2 += 0x10U;
    stack[11] = r2; // [sp + 0x2C]
    r2 = *(u32*)(r4 + 0xC);
    r2 += 0x1A0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800EA44(r0, r1, r2, r3);
    stack[10] = r2; // [sp + 0x28]
    r7 = *(u16*)(r2 + 0x10);
    r0 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_0800EA10(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    return sub_0800EA2C(r0, r1, r2, r3);
}

// ROM Address: 0x0800EA10..0x0800EA2C (28 bytes, Thumb)
u32 sub_0800EA10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[9]; // [sp + 0x24]
    r0 = 0x52U;
    r1 += 0x180U;
    r1 = *(u32*)(r1 + 0x3C);
    r0 *= r7;
    r0 = r0 + r1;
    r0 = sub_0803FADE(r0, r1, r2, r3); // 0x0800EA1E
    *(u32*)(r4 + 0x10) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800EA2C(r0, r1, r2, r3);
    r0 = ((u32)((s32)r5 >> 1));
    r5 = r0 + r5;
    return r0;
}

// ROM Address: 0x0800EA2C..0x0800EB34 (264 bytes, Thumb)
u32 sub_0800EA2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[10]; // [sp + 0x28]
    r3 = 0x00000CCDU; // [0x0800EB40]
    r0 = *(u16*)(r2 + 0x10);
    r2 = stack[11]; // [sp + 0x2C]
    r0 *= r5;
    r0 *= r3;
    r5 = ((u32)((s32)r0 >> 16));
    r0 = *(u8*)(r2 + 0x8);
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[12]; // [sp + 0x30]
    r0 = *(u16*)(r0 + 0x14);
    goto loc_0800EA54;
    r7 = *(u16*)(r2 + 0x12);
    r2 = stack[11]; // [sp + 0x2C]
    r1 = 0x0U;
    r0 = *(u8*)(r2 + 0x9);
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[12]; // [sp + 0x30]
    r0 = *(u16*)(r0 + 0x16);
    *(u32*)(r4 + 0x10) = (u32)r1;
loc_0800EA54:
    cmp_lhs = (s32)r0; cmp_rhs = 200;
    if (cmp_lhs < cmp_rhs) goto loc_0800EA68;
    r1 = ((u32)((s32)r0 >> 31));
    r1 = (r1 >> 30);
    r0 = r1 + r0;
    r0 = ((u32)((s32)r0 >> 2));
    r0 += 0x96U;
    cmp_lhs = (s32)r0; cmp_rhs = 220;
    if (cmp_lhs <= cmp_rhs) goto loc_0800EA68;
    r0 = 0xDCU;
loc_0800EA68:
    r1 = 0xDDU;
    r0 = r1 - r0;
    r1 = r7;
    r2 = r7;
    r2 += 0x64U;
    r1 *= r7;
    r0 *= r5;
    r3 = 0xFFU;
    r3 += 0x2AU;
    r1 *= r2;
    r1 = ((u32)((s32)r1 >> 13));
    r5 = r1 + r7;
    r1 = *(u32*)(r4 + 0x4);
    r0 *= r3;
    r0 = ((u32)((s32)r0 >> 16));
    r1 *= r0;
    r0 = 0x400U; // (1 << 10)
    r0 = r1 + r0;
    r0 -= 0x1U;
    r7 = ((u32)((s32)r0 >> 10));
    r0 = 0x1AU;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800EA94
    r0 += 0x100U;
    r0 *= r7;
    r0 = (r0 >> 8);
    r0 *= r5;
    r1 = r0;
    *(u32*)(r4 + 0x14) = (u32)r1;
    r0 = stack[8]; // [sp + 0x20]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0800EAA8: BL 0x08046B70
    r2 = 0x7FU;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x0800EAAE
    r2 = 0x7U;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0800EAB4: BL 0x08046C28
    r7 = r6;
    r7 += 0x1C0U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r1 = *(u32*)(r7 + 0x8);
    r5 = r4;
    r5 += 0x18U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EAEC;
    r1 = *(u8*)(r4);
    r2 = 0x1U;
    r1 ^= r2;
    r2 = *(u8*)(r6 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0800EAEC;
    r1 = *(u32*)(r5);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EAEC;
    r1 = r0;
    r0 = *(u32*)(r7);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0800EAE0: BL 0x08046B70
    r2 = 0x10U;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0800EAE6: BL 0x08046C28
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_0800EAEC:
    r0 = *(u32*)(r4 + 0x8);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800EB30;
    r0 = r5;
    r0 = *(u32*)(r0);
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EB30;
    r1 = *(u32*)(r4 + 0x18);
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0800EB02: BL 0x08046B70
    r2 = 0x8U;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0800EB08: BL 0x08046C28
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EB30;
    stack[7] = r0; // [sp + 0x1C]
    stack[6] = r0; // [sp + 0x18]
    stack[5] = r5; // [sp + 0x14]
    stack[4] = r6; // [sp + 0x10]
    r0 = *(u8*)(r4);
    r2 = 0x1U;
    r3 = 0x0; // sp + 0x0
    r0 ^= r2;
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = stack[9]; // [sp + 0x24]
    r1 = 0x4; // sp + 0x4
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x5C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EB2C: BL __call_via_r3
loc_0800EB30:
    return r0;
}

// ROM Address: 0x0800EB34..0x0800EB36 (2 bytes, Thumb)
u32 sub_0800EB34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)r0; r0 += 4;
    r7 = *(u32*)r0; r0 += 4;
    return r0;
}

// ROM Address: 0x0800EB36..0x0800EB7C (70 bytes, Thumb)
u32 sub_0800EB36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r7 = 0x0800EDC0U;
    r4 = (r0 >> 32);
    r5 = (r1 >> 19);
    r0 = r0;
    r1 += 0x1A0U;
    r2 = *(u16*)(r1 + 0x10);
    r0 += 0x1A0U;
    *(u16*)(r0 + 0x10) = (u16)r2;
    r2 = *(u16*)(r1 + 0x12);
    *(u16*)(r0 + 0x12) = (u16)r2;
    r2 = *(u16*)(r1 + 0x14);
    *(u16*)(r0 + 0x14) = (u16)r2;
    r1 = *(u16*)(r1 + 0x16);
    *(u16*)(r0 + 0x16) = (u16)r1;
    return r0; // BX lr
    r0 = r0;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800EB7C(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x8DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800EB6E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800EB7C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800EB7C..0x0800EC34 (184 bytes, Thumb)
u32 sub_0800EB7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u16*)(r6 + 0x2);
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800EDDC]
    r7 = 0x080725E8U; // [0x0800EDE0]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r7);
    r1 = r5;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800EB8A
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800EBA2;
    r1 = r5;
    r0 = *(u32*)(r7);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800EB96: BL 0x08011732
    r1 = r5;
    r0 = *(u32*)(r7);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800EB9E
loc_0800EBA2:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804AC20U /* &VTable_0804AC20 */; // [0x0800EDE4]
    r7 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    r5 = r4;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x58) = (u32)r6;
    *(u32*)(r4 + 0x24) = (u32)r7;
    *(u32*)(r4 + 0x4C) = (u32)r7;
    r0 = *(u32*)(r6 + 0x50);
    r5 += 0x180U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EBD0;
    r0 = *(u32*)(r0);
    r1 = 0x080725E8U; // [0x0800EDE0]
    r2 = 0x80U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r0 = 0x03001BA8U; // [0x0800EDE8]
    r1 += 0x8U;
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x0800EBCC: BL 0x0804E490
loc_0800EBD0:
    r0 = *(u32*)(r6 + 0x54);
    *(u32*)(r4 + 0x50) = (u32)r0;
    r0 = r4;
    r0 += 0x174U;
    *(u16*)(r0) = (u16)r7;
    *(u16*)(r0 + 0x2) = (u16)r7;
    r0 = 0x03001BA8U; // [0x0800EDE8]
    *(u32*)(r5) = (u32)r7;
    r0 -= 0x4U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 += 0xFFU;
    *(u32*)(r4 + 0x30) = (u32)r7;
    *(u32*)(r4 + 0x38) = (u32)r7;
    r0 += 0x79U;
    *(u32*)(r0) = (u32)r7;
    *(u32*)(r0 + 0x4) = (u32)r7;
    r0 = *(u32*)(r4 + 0x58);
    r1 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x34) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x3C) = (u32)r1;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = *(u16*)(r0 + 0x2);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800EC02: BL 0x0803D5B8
    *(u32*)(r4 + 0x40) = (u32)r0;
    r0 = *(u32*)(r4 + 0x58);
    r1 = *(u8*)(r0 + 0xB);
    r0 = *(u8*)(r0 + 0xA);
    r0 = sub_08013E38(r0, r1, r2, r3); // 0x0800EC0E
    *(u32*)(r4 + 0x5C) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EC22;
    r2 = *(u16*)(r0 + 0x2);
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r0 + 0x8);
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x0800EC1E: BL 0x0804E490
loc_0800EC22:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EC2C: BL __call_via_r3
    r0 = r4;
    return sub_0800EB78(r0, r1, r2, r3);
}

// ROM Address: 0x0800EC34..0x0800EE74 (576 bytes, Thumb)
u32 sub_0800EC34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804AC20U /* &VTable_0804AC20 */; // [0x0800EDE4]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EC4A;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0804FE20(r0, r1, r2, r3); // 0x0800EC46
loc_0800EC4A:
    r0 = *(u32*)(r4 + 0x58);
    r0 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EC58;
    r0 = 0x03001BA8U; // [0x0800EDE8]
    r0 = sub_0804FE20(r0, r1, r2, r3); // 0x0800EC54
loc_0800EC58:
    r0 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EC6A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EC66: BL __call_via_r3
loc_0800EC6A:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EC74: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EC82: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x40);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800EC88: BL 0x0803D63C
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800EDDC]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0800EDEC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800ECA0;
    r0 = 0x080725E8U; // [0x0800EDE0]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800EC9C
loc_0800ECA0:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800EDF0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800ECAE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800ECAA: BL 0x0803D63C
loc_0800ECAE:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x5C);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800ECC2;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0804FE20(r0, r1, r2, r3); // 0x0800ECBE
loc_0800ECC2:
    r0 = *(u32*)r5; r5 += 4;
    r1 = *(u32*)r5; r5 += 4;
    r0 = sub_08013E38(r0, r1, r2, r3); // 0x0800ECC4
    *(u32*)(r4 + 0x5C) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800ECD8;
    r2 = *(u16*)(r0 + 0x2);
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r0 + 0x8);
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x0800ECD4: BL 0x0804E490
loc_0800ECD8:
    return r0;
    r2 = *(u32*)(r0 + 0x58);
    r1 = (r1 << 2);
    r3 = r2 + r1;
    r3 = *(u32*)(r3 + 0x54);
    *(u32*)(r0 + 0x50) = (u32)r3;
    r2 = *(u32*)(r2 + 0x50);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800ECEE;
    r1 = *(u32*)(r2 + r1);
    *(u32*)(r0 + 0x4C) = (u32)r1;
loc_0800ECEE:
    return r0; // BX lr
    r2 = 0x080725E8U; // [0x0800EDE0]
    r2 += 0x88U;
    r3 = *(u8*)(r2 + r1);
    r2 = *(u32*)(r0 + 0x58);
    r3 = (r3 << 2);
    r4 = r2 + r3;
    r4 = *(u32*)(r4 + 0x54);
    *(u32*)(r0 + 0x50) = (u32)r4;
    r2 = *(u32*)(r2 + 0x50);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800ED0C;
    r2 = *(u32*)(r2 + r3);
    *(u32*)(r0 + 0x4C) = (u32)r2;
loc_0800ED0C:
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x2C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800ED12: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r5 = r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800ED28: BL __call_via_r3
    *(u32*)(r4 + 0x14) = (u32)r5;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800ED38: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = 0x080725E8U; // [0x0800EDE0]
    r5 = r2;
    r0 += 0x88U;
    r1 = *(u8*)(r0 + r1);
    r0 = *(u32*)(r4 + 0x58);
    r1 = (r1 << 2);
    r2 = r0 + r1;
    r2 = *(u32*)(r2 + 0x54);
    *(u32*)(r4 + 0x50) = (u32)r2;
    r0 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800ED5E;
    r0 = *(u32*)(r0 + r1);
    *(u32*)(r4 + 0x4C) = (u32)r0;
loc_0800ED5E:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800ED68: BL __call_via_r3
    r0 = 0x03001B00U; // [0x0800EDF4]
    *(u32*)(r4 + 0x14) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800ED78: BL __call_via_r3
    *(u8*)(r4 + 0x11) = (u8)r5;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x18);
    r5 = r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800ED90: BL __call_via_r3
    *(u32*)(r4 + 0x18) = (u32)r5;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EDA0: BL __call_via_r3
    return r0;
    r1 = *(u32*)(r0 + 0x34);
    r4 = r0;
    r0 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EDBA;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    *(u32*)(r4 + 0x30) = (u32)r0;
loc_0800EDBA:
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EDC4: BL __call_via_r3
    r0 = 0x03001BA8U; // [0x0800EDE8]
    r0 -= 0x4U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EDD6: BL __call_via_r3
    return r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r5 = 0xE8U;
    r7 = (r0 >> 32);
    r4 = 0x80; // sp + 0x80
    r4 = (r0 >> 32);
    r0 = r5 - r6;
    r0 = (r0 << 12);
    r0 = r0;
    return sub_0800E69C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = r0 - r4;
    r0 = (r0 << 12);
    r4 = r0;
    r0 = *(u32*)(r0 + 0x58);
    r5 = r1;
    r0 = *(u32*)(r0 + 0x50);
    r6 = 0x03001BA8U; // [0x0800F1E4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EE0E;
    r0 = r6;
    r0 = sub_0804FE20(r0, r1, r2, r3); // 0x0800EE0A
loc_0800EE0E:
    r0 = *(u32*)(r5 + 0x4);
    r7 = 0x0U;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r1 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800EE20;
    *(u32*)(r4 + 0x34) = (u32)r0;
    *(u32*)(r4 + 0x38) = (u32)r7;
    *(u32*)(r4 + 0x30) = (u32)r7;
loc_0800EE20:
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EE2A: BL __call_via_r3
    r0 = 0x03001BA8U; // [0x0800F1E4]
    r0 -= 0x4U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EE3C: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x58);
    r0 = *(u16*)(r0 + 0x2);
    r1 = *(u16*)(r5 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0800EE60;
    r0 = *(u32*)(r4 + 0x40);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800EE4C: BL 0x0803D63C
    r0 = *(u16*)(r5 + 0x2);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800EE52: BL 0x0803D5B8
    *(u32*)(r4 + 0x40) = (u32)r0;
    r1 = *(u16*)(r5 + 0x2);
    r0 = r4;
    r0 = sub_0801183E(r0, r1, r2, r3); // 0x0800EE5C
loc_0800EE60:
    *(u32*)(r4 + 0x58) = (u32)r5;
    r0 = *(u32*)(r5 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800EE74(r0, r1, r2, r3);
    r2 = 0x80U;
    r0 = r6;
    r1 = 0x080725F0U; // [0x0800F1E8]
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x0800EE6E: BL 0x0804E490
    return r0;
}

// ROM Address: 0x0800EE74..0x0800EE78 (4 bytes, Thumb)
u32 sub_0800EE74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x4C) = (u32)r7;
    return sub_0800EE72(r0, r1, r2, r3);
}

// ROM Address: 0x0800EE78..0x0800EEC8 (80 bytes, Thumb)
u32 sub_0800EE78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EE86: BL __call_via_r3
    r0 = 0x03001BA8U; // [0x0800F1E4]
    r0 -= 0x4U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EE98: BL __call_via_r3
    return r0;
    r1 = r0;
    r2 = 0x03001BA8U; // [0x0800F1E4]
    r1 = *(u32*)(r1 + 0x14);
    r0 = 0x1U;
    r2 -= 0x4U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_0800EEAE;
    r0 = 0x0U;
loc_0800EEAE:
    return r0; // BX lr
    r3 = 0x080725F0U; // [0x0800F1E8]
    r2 = *(u32*)(r0 + 0x58);
    r3 += 0x80U;
    r1 = *(u8*)(r3 + r1);
    r1 = (r1 << 2);
    r1 = r2 + r1;
    r1 = *(u32*)(r1 + 0x54);
    r0 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0800EEC8(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800EEC8..0x0800EECC (4 bytes, Thumb)
u32 sub_0800EEC8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800EECC..0x0800EEFA (46 bytes, Thumb)
u32 sub_0800EECC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x38) = (u32)r1;
    r2 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return Object_ClearFields2(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800EEFA(r0, r1, r2, r3);
    r2 = r0;
    r2 += 0x74U;
    *(u32*)(r0 + 0x34) = (u32)r2;
    r2 = 0x0U;
    r4 = 0xFFU;
    r4 += 0x1U;
loc_0800EEE6:
    r3 = *(u32*)(r0 + 0x3C);
    r5 = r0 + r2;
    r3 = *(u8*)(r3 + r2);
    r5 += 0x70U;
    r2 += 0x1U;
    r3 = *(u8*)(r1 + r3);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    *(u8*)(r5 + 0x4) = (u8)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0800EEE6;
    return sub_0800EF00(r0, r1, r2, r3);
}

// ROM Address: 0x0800EEFA..0x0800EEFE (4 bytes, Thumb)
u32 sub_0800EEFA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x34) = (u32)r2;
    return sub_0800EF00(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_clear_fields2_clears_the_two_words
// ROM Address: 0x0800EEFE..0x0800EFD0 (210 bytes, Thumb)
u32 Object_ClearFields2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x34) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x30) = (u32)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x18);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EF16: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EF24: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800EF32: BL __call_via_r3
    return r0;
    r2 = *(u8*)(r0 + 0x11);
    r1 = *(u32*)(r0 + 0x50);
    r2 = (r2 << 4);
    r1 = r1 + r2;
    r2 = *(u8*)(r0 + 0x10);
    r2 = (r2 << 2);
    r1 = r1 + r2;
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r0 + 0x54) = (u32)r1;
    r1 = r0;
    r1 += 0x180U;
    r2 = r1;
    r2 -= 0x80U;
    r3 = *(u32*)(r2 + 0x78);
    r2 = *(u32*)(r2 + 0x7C);
    *(u32*)(r1 + 0x8) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r3;
    r1 = 0x1U;
    *(u32*)(r0 + 0x60) = (u32)r1;
    *(u32*)(r0 + 0x64) = (u32)r1;
    r0 = 0x1U;
    return r0; // BX lr
    r3 = *(u8*)(r1 + 0x11);
    r2 = *(u32*)(r1 + 0x50);
    r4 = *(u32*)(r1 + 0x58);
    r3 = (r3 << 4);
    r2 = r2 + r3;
    r3 = *(u8*)(r1 + 0x10);
    r4 = *(u8*)(r4 + 0x8);
    r3 = (r3 << 2);
    r2 = r2 + r3;
    r3 = *(u32*)(r2 + 0x4);
    r2 = *(u32*)(r1 + 0x6C);
    r1 = *(u32*)(r1 + 0x70);
    r2 = r2 + r4;
    r4 = r3;
    r3 = 0x5U;
    r4 = (u32)(*(s8*)(r4 + r3));
    r2 -= 0x8U;
    r1 = r1 + r4;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    return r0; // BX lr
    r3 = 0xFFFFEFBCU; // [0x0800F1EC]
    r4 = r0;
    sp += r3;
    r2 = 0x0U;
    stack[9] = r2; // [sp + 0x24]
    r0 = 0x080725F0U; // [0x0800F1E8]
    r3 = 0x1U;
    r0 -= 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    r3 = (r3 << 12);
    r3 += sp;
    r0 += 0x80U;
    *(u32*)(r3 + 0x40) = (u32)r0;
    r2 = r4;
    r5 = r1;
    r1 = *(u32*)(r0 + 0x10);
    r2 += 0x180U;
    *(u32*)(r3 + 0x3C) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r0 = 0x08050761U; // [0x0800F1F0]
    if (cmp_lhs == cmp_rhs) return sub_0800F02C(r0, r1, r2, r3);
    r1 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) return Math_Divide3(r0, r1, r2, r3);
    r0 = 0x0U;
    r3 = 0x00001044U; // [0x0800F1F4]
    sp += r3;
    return r0;
}

// Evidence: calls BIOS Div (SWI 0x06) at 0800F0D6, 0800F0F8; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0800EFD0
// ROM Address: 0x0800EFD0..0x0800F1E8 (536 bytes, Thumb)
u32 Math_Divide3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    stack[9] = r2; // [sp + 0x24]
    r2 = *(u32*)(r5 + 0x4);
    r7 = sp;
    r6 = r2;
    r2 += 0x20U;
    *(u32*)(r5 + 0x4) = (u32)r2;
    r2 = r1 + 1;
    *(u32*)(r5 + 0x8) = (u32)r2;
    r2 = 0x8U;
    r7 = r7 + r2;
    stack[8] = r1; // [sp + 0x20]
    r1 = r7;
    r3 = r0;
    r0 = sp;
    r1 += 0x18U;
    r0 = r0 + r2;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0800EFF2: BL 0x08046FF4
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x3C);
    r0 = r7;
    r0 = sub_0803FCF4(r0, r1, r2, r3); // 0x0800F000
    r0 = *(u32*)(r4 + 0x68);
    *(u16*)(r6 + 0x6) = (u16)r0;
    r0 = 0x0U;
    *(u16*)(r6 + 0xE) = (u16)r0;
    *(u16*)(r6 + 0x16) = (u16)r0;
    r0 = *(u32*)(r4 + 0x68);
    *(u16*)(r6 + 0x1E) = (u16)r0;
    r0 = *(u32*)(r4 + 0x54);
    r0 = *(u32*)(r0 + 0xC);
    r0 = (r0 << 3);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0800F08E;
    r1 = *(u16*)(r6 + 0x6);
    r3 = 0x0; // sp + 0x0
    r1 = (u32)(-(s32)r1);
    *(u16*)(r3) = (u16)r1;
    r1 = stack[0]; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u16*)(r3 + 0x4);
    *(u16*)(r6 + 0x6) = (u16)r1;
    goto loc_0800F08E;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x3C);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F08E;
    r1 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0800F044;
    r0 = 0x0U;
    return sub_0800EFCA(r0, r1, r2, r3);
loc_0800F044:
    r2 = 0x1U;
    stack[9] = r2; // [sp + 0x24]
    r2 = *(u32*)(r5 + 0x4);
    r3 = r0;
    r6 = r2;
    r2 += 0x20U;
    *(u32*)(r5 + 0x4) = (u32)r2;
    r2 = r1 + 1;
    *(u32*)(r5 + 0x8) = (u32)r2;
    stack[8] = r1; // [sp + 0x20]
    r1 = sp;
    r2 = 0x8U;
    r1 = r1 + r2;
    r1 += 0x18U;
    r0 = sp;
    r0 = r0 + r2;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0800F064: BL 0x08046FF4
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x3C);
    r0 = 0x8; // sp + 0x8
    r0 = sub_0803FCF4(r0, r1, r2, r3); // 0x0800F072
    r0 = stack[2]; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 2));
    *(u16*)(r6 + 0x6) = (u16)r0;
    r0 = stack[4]; // [sp + 0x10]
    r0 = ((u32)((s32)r0 >> 2));
    *(u16*)(r6 + 0xE) = (u16)r0;
    r0 = stack[3]; // [sp + 0xC]
    r0 = ((u32)((s32)r0 >> 2));
    *(u16*)(r6 + 0x16) = (u16)r0;
    r0 = stack[5]; // [sp + 0x14]
    r0 = ((u32)((s32)r0 >> 2));
    *(u16*)(r6 + 0x1E) = (u16)r0;
loc_0800F08E:
    r0 = *(u32*)(r4 + 0x60);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F17A;
    r0 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F130;
    r0 = *(u32*)(r5);
    r6 = r0;
    r0 += 0x8U;
    *(u32*)(r5) = (u32)r0;
    r1 = *(u8*)(r4 + 0x11);
    r0 = *(u32*)(r4 + 0x4C);
    r1 = (r1 << 3);
    r0 = r0 + r1;
    r1 = *(u8*)(r4 + 0x10);
    r1 = (r1 << 1);
    r7 = r0 + r1;
    r0 = *(u8*)(r7);
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs == cmp_rhs) goto loc_0800F130;
    r3 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F132;
    r1 = stack[8]; // [sp + 0x20]
    r0 = 0x63U;
    r1 = (r1 << 27);
    r1 = (r1 >> 2);
    r0 = (r0 << 8);
    r0 |= r1;
    *(u32*)(r6) = (u32)r0;
    r3 = 0x0U;
    r0 = (u32)(*(s8*)(r7 + r3));
    r1 = *(u32*)(r4 + 0x68);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 6);
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r1 = *(u32*)(r4 + 0x6C);
    r3 = 0x1U;
    r0 = r0 + r1;
    r0 -= 0x8U;
    r1 = *(u32*)(r6);
    r2 = 0xFE00FFFFU; // [0x0800F1F8]
    r0 = (r0 << 23);
    r0 = (r0 >> 7);
    r1 &= r2;
    r0 |= r1;
    *(u32*)(r6) = (u32)r0;
    r0 = (u32)(*(s8*)(r7 + r3));
    r1 = *(u32*)(r4 + 0x68);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 6);
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r1 = *(u32*)(r4 + 0x70);
    r2 = 0x3U;
    r0 = r0 + r1;
    r1 = *(u32*)(r6);
    r0 += 0xF4U;
    r0 = (r0 << 24);
    r1 = (r1 >> 8);
    r1 = (r1 << 8);
    r0 = (r0 >> 24);
    r0 |= r1;
    *(u32*)(r6) = (u32)r0;
    r0 = *(u8*)(r4 + 0x8);
    r1 = *(u32*)(r6 + 0x4);
    r2 = (r2 << 10);
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r0 = (r0 << 10);
    r1 &= ~r2;
    r0 |= r1;
    r1 = 0x03001BA8U; // [0x0800F1E4]
    r0 = (r0 >> 10);
    r1 = *(u16*)(r1 + 0x2);
    r0 = (r0 << 10);
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    r0 |= r1;
    *(u32*)(r6 + 0x4) = (u32)r0;
loc_0800F130:
    goto loc_0800F180;
loc_0800F132:
    r0 = 0x6000U; // (3 << 13)
    *(u32*)(r6) = (u32)r0;
    r3 = 0x0U;
    r2 = (u32)(*(s8*)(r7 + r3));
    r1 = *(u32*)(r4 + 0x6C);
    r1 = r1 + r2;
    r1 = (r1 << 23);
    r1 = (r1 >> 7);
    r0 |= r1;
    *(u32*)(r6) = (u32)r0;
    r2 = *(u8*)(r7 + 0x1);
    r1 = *(u32*)(r4 + 0x70);
    r0 = (r0 >> 8);
    r1 = r1 + r2;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r0 = (r0 << 8);
    r0 |= r1;
    *(u32*)(r6) = (u32)r0;
    r0 = *(u8*)(r4 + 0x8);
    r1 = *(u32*)(r6 + 0x4);
    r2 = 0x3U;
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r2 = (r2 << 10);
    r1 &= ~r2;
    r0 = (r0 << 10);
    r0 |= r1;
    r1 = 0x03001BA8U; // [0x0800F1E4]
    r0 = (r0 >> 10);
    r1 = *(u16*)(r1 + 0x2);
    r0 = (r0 << 10);
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    goto loc_0800F17C;
loc_0800F17A:
    return sub_0800F274(r0, r1, r2, r3);
loc_0800F17C:
    r0 |= r1;
    *(u32*)(r6 + 0x4) = (u32)r0;
loc_0800F180:
    r0 = *(u16*)(r4 + 0xC);
    r6 = 0x0U;
    r12 = r6;
    lr = r0;
    r0 = *(u32*)(r4 + 0x54);
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0800F274(r0, r1, r2, r3);
    r1 = stack[8]; // [sp + 0x20]
    r3 = 0x1000U; // (1 << 12)
    r0 = (r1 << 27);
    r0 = (r0 >> 2);
    r2 = r4;
    r2 += 0xFFU;
    r3 += sp;
    *(u32*)(r3 + 0x38) = (u32)r0;
    r2 += 0x61U;
    r0 = *(u32*)(r5);
    r6 = r12;
    r1 = r0;
    r0 += 0x8U;
    *(u32*)(r5) = (u32)r0;
    r3 = (r6 << 1);
    r3 = r3 + r6;
    r0 = *(u32*)(r4 + 0x54);
    r3 = (r3 << 2);
    r0 = r0 + r3;
    r3 = stack[9]; // [sp + 0x24]
    r0 += 0x8U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800F24C(r0, r1, r2, r3);
    r6 = 0x3U;
    r3 = *(u32*)(r0 + 0x4);
    r6 = (r6 << 8);
    r6 |= r3;
    r3 = 0x3E000000U; // (31 << 25)
    r6 &= ~r3;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r3 = *(u32*)(r3 + 0x38);
    r6 |= r3;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    *(u32*)(r1) = (u32)r6;
    *(u32*)(r3 + 0x34) = (u32)r6;
    return sub_0800F1FC(r0, r1, r2, r3);
    r0 = r5 - r6;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0800F3F8..0x0800F442 (74 bytes, Thumb)
u32 sub_0800F3F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r0 = *(u16*)(r0 + 0xC);
    r2 = 0x06010000U; // [0x0800F4B4]
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r1 += 0x44U;
    r1 = *(u32*)r1; r1 += 4;
    r2 = *(u32*)r1; r1 += 4;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800F408: BL 0x08049138
    return r0;
    r4 = r0;
    r5 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 10;
    r0 = 0x03001BA8U; // [0x0800F4B8]
    if (cmp_lhs == cmp_rhs) return sub_0800F45C(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_0800F442(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    if (cmp_lhs == cmp_rhs) return sub_0800F49E(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 6;
    if (cmp_lhs != cmp_rhs) return sub_0800F4AC(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x58);
    r1 = *(u32*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800F43E;
    r0 = *(u32*)(r2 + 0x4);
    r1 = r2 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs == cmp_rhs) goto loc_0800F43E;
    r2 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r1) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r4;
loc_0800F43E:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800F442..0x0800F478 (54 bytes, Thumb)
u32 sub_0800F442(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0800F478(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) return sub_0800F4AC(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800F454: BL __call_via_r3
    r0 = 0x0U;
    return sub_0800F440(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x58);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F468;
    r0 = sub_0804FE20(r0, r1, r2, r3); // 0x0800F464
loc_0800F468:
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F474;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0804FE20(r0, r1, r2, r3); // 0x0800F470
loc_0800F474:
    r0 = r5;
    return sub_0800F440(r0, r1, r2, r3);
}

// ROM Address: 0x0800F49E..0x0800F4B0 (18 bytes, Thumb)
u32 sub_0800F49E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x58);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0800F4A8;
    r0 = r4;
    return sub_0800F440(r0, r1, r2, r3);
loc_0800F4A8:
    r0 = 0x0U;
    return sub_0800F440(r0, r1, r2, r3);
    r0 = r5;
    return sub_0800F440(r0, r1, r2, r3);
}

// ROM Address: 0x0800F4C0..0x0800F4E2 (34 bytes, Thumb)
u32 sub_0800F4C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800F4CA: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F4DA;
    cmp_lhs = (s32)r4; cmp_rhs = 14;
    if (cmp_lhs < cmp_rhs) return sub_0800F4E2(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0;
loc_0800F4DA:
    cmp_lhs = (s32)r4; cmp_rhs = 13;
    if (cmp_lhs < cmp_rhs) return sub_0800F4E2(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0;
}

// ROM Address: 0x0800F4E2..0x0800F4E6 (4 bytes, Thumb)
u32 sub_0800F4E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800F4E6..0x0800F584 (158 bytes, Thumb)
u32 sub_0800F4E6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08011818(r0, r1, r2, r3); // 0x0800F4EA
    r0 = *(u32*)(r4 + 0x58);
    r0 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F500;
    r2 = 0x80U;
    r1 = 0x080725F0U; // [0x0800F584]
    r0 = 0x03001BA8U; // [0x0800F588]
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x0800F4FC: BL 0x0804E490
loc_0800F500:
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F510;
    r2 = *(u16*)(r0 + 0x2);
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r0 + 0x8);
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x0800F50C: BL 0x0804E490
loc_0800F510:
    r0 = 0x0U;
    *(u32*)(r4 + 0x30) = (u32)r0;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x58);
    r0 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F528;
    r0 = 0x03001BA8U; // [0x0800F588]
    r0 = sub_0804FE20(r0, r1, r2, r3); // 0x0800F524
loc_0800F528:
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F534;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0804FE20(r0, r1, r2, r3); // 0x0800F530
loc_0800F534:
    r0 = r4;
    r0 = Handle_Release1(r0, r1, r2, r3); // 0x0800F536: BL 0x08011568
    return r0;
    r1 = *(u8*)(r0 + 0x11);
    *(u32*)(r0 + 0x1C) = (u32)r1;
    r1 = *(u16*)(r0 + 0x12);
    *(u32*)(r0 + 0x20) = (u32)r1;
    r1 = *(u32*)(r0 + 0x14);
    *(u32*)(r0 + 0x24) = (u32)r1;
    r1 = *(u32*)(r0 + 0x50);
    *(u32*)(r0 + 0x28) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4C);
    *(u32*)(r0 + 0x2C) = (u32)r1;
    r1 = 0x03001BA8U; // [0x0800F588]
    r1 -= 0x4U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800F566: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x24);
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u32*)(r4 + 0x1C);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u32*)(r4 + 0x20);
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = *(u32*)(r4 + 0x28);
    *(u32*)(r4 + 0x50) = (u32)r0;
    r0 = *(u32*)(r4 + 0x2C);
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    return r0;
}

// ROM Address: 0x0800F584..0x0800F58C (8 bytes, Thumb)
u32 sub_0800F584(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0xF0U;
    r7 = (r0 >> 32);
    r0 = r5 - r6;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0800F58C..0x0800F61E (146 bytes, Thumb)
u32 sub_0800F58C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800F5A8;
    r0 = 0xFFU;
    r0 += 0x95U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800F59C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800F5A8;
    r0 = r4;
    return r0;
loc_0800F5A8:
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800EB60(r0, r1, r2, r3); // 0x0800F5AE
    r0 = r4;
    r0 += 0x18CU;
    r1 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0804D174U /* &VTable_0804D174 */; // [0x0800F624]
    *(u32*)(r4) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r0 = r4;
    return r0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) goto loc_0800F5EE;
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800F5DC: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800F5EA: BL __call_via_r3
loc_0800F5EE:
    r0 = r4;
    r0 += 0xFFU;
    r1 = r5;
    r0 += 0x8DU;
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x0800F5F6: BL 0x080193AE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F602;
    r0 -= 0x1U;
    return r0;
loc_0800F602:
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800F40E(r0, r1, r2, r3); // 0x0800F608
    return r0;
    r2 = 0x03001BACU; // [0x0800F628]
    r2 = *(u32*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_0800F61E(r0, r1, r2, r3);
    r0 = sub_0801155C(r0, r1, r2, r3); // 0x0800F618
    return r0;
}

// ROM Address: 0x0800F61E..0x0800F624 (6 bytes, Thumb)
u32 sub_0800F61E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0800F4C0(r0, r1, r2, r3); // 0x0800F61E: BL 0x0800F4C0
    return sub_0800F61C(r0, r1, r2, r3);
}

// ROM Address: 0x0800F668..0x0800F6AE (70 bytes, Thumb)
u32 sub_0800F668(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r5) = (u32)r3;
    r1 = *(u32*)(r4 + 0x18);
    r6 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F67E;
    stack[1] = r6; // [sp + 0x4]
    stack[18] = r6; // [sp + 0x48]
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0800F67A
loc_0800F67E:
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r0);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800F682: BL 0x08046AA2
    *(u32*)(r5) = (u32)r6;
    return r0;
    r7 = r2;
    r6 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800F6AE(r0, r1, r2, r3);
    r0 = 0x29CU; // (167 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800F6A0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800F6AE(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800F6AE..0x0800F740 (146 bytes, Thumb)
u32 sub_0800F6AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x10);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0800F6B0: BL 0x08000158
    r1 = r5;
    r1 += 0xCU;
    stack[0] = r1; // [sp + 0x0]
    r1 = r0;
    r3 = r7;
    r0 = r4;
    stack[1] = r6; // [sp + 0x4]
    r2 = 0x03001B0CU; // [0x0800F90C]
    r0 = sub_0800E754(r0, r1, r2, r3); // 0x0800F6C4: BL 0x0800E754
    r0 = 0x0804C484U /* &VTable_0804C484 */; // [0x0800F910]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x22CU; // (139 << 2)
    r1 += 0x18U;
    r0 = r4 + r0;
    r0 = sub_0800A93C(r0, r1, r2, r3); // 0x0800F6D6: BL 0x0800A93C
    r0 = 0x238U; // (71 << 3)
    r6 = r4 + r0;
    r0 = 0x0U;
    r3 = 0x200U; // (1 << 9)
    *(u32*)(r6 + 0x4) = (u32)r0;
    r2 = r7;
    r7 = r4 + r3;
    *(u32*)(r6 + 0x30) = (u32)r0;
    *(u32*)(r7 + 0x24) = (u32)r2;
    r3 = *(u32*)(r5 + 0x14);
    r1 = 0xA3U;
    *(u32*)(r7 + 0x28) = (u32)r3;
    r3 = 0x290U; // (41 << 4)
    r3 = r4 + r3;
    *(u8*)(r3 + 0x1) = (u8)r0;
    *(u8*)(r3) = (u8)r0;
    r0 = *(u32*)(r2 + 0x4);
    r1 = (r1 << 2);
    r1 = r4 + r1;
    r0 = (r0 << 10);
    *(u32*)(r1) = (u32)r0;
    r0 = 0x080726ACU; // [0x0800F904]
    r1 = r4;
    r5 = *(u32*)(r0 + 0x8);
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800F712: BL 0x0800FDFA
    r5 += 0x80U;
    r1 = *(u32*)(r5 + 0x30);
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800F71E
    *(u32*)(r6) = (u32)r4;
    r0 = *(u32*)(r7 + 0x24);
    r1 = *(u32*)(r0 + 0x8);
    r0 = r6;
    r0 = sub_0800AA9C(r0, r1, r2, r3); // 0x0800F72A
    r0 = 0x03001BB0U; // [0x0800F914]
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r0 = r4;
    return sub_0800F6AA(r0, r1, r2, r3);
}

// ROM Address: 0x0800F740..0x0800F866 (294 bytes, Thumb)
u32 sub_0800F740(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r1 = 0x290U; // (41 << 4)
    r1 = r0 + r1;
    r1 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800F76A;
    r1 = 0x080726ACU; // [0x0800F904]
    r4 = *(u32*)(r1 + 0x8);
    r1 = r0;
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800F75A: BL 0x0800FDFA
    r4 += 0x80U;
    r1 = *(u32*)(r4 + 0x30);
    r2 = r5;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800F766
loc_0800F76A:
    return r0;
    r4 = r0;
    r0 = 0x0804C484U /* &VTable_0804C484 */; // [0x0800F910]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x290U; // (41 << 4)
    r0 = r4 + r0;
    r0 = *(u8*)(r0 + 0x1);
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800F79E;
    r0 = 0x080726ACU; // [0x0800F904]
    r1 = r4;
    r5 = *(u32*)(r0 + 0x8);
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800F78E: BL 0x0800FDFA
    r5 += 0x80U;
    r1 = *(u32*)(r5 + 0x30);
    r2 = 0x1U;
    r0 = sp;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800F79A
loc_0800F79E:
    r3 = 0x03001BB0U; // [0x0800F914]
    r0 = 0x0U;
    r1 = *(u32*)(r3);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800F7B8;
loc_0800F7A8:
    r2 = (r0 << 2);
    r2 = r2 + r3;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_0800F7BC;
    r0 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0800F7A8;
loc_0800F7B8:
    r0 = 0x0U;
    r0 = ~r0;
loc_0800F7BC:
    r1 -= 0x1U;
    *(u32*)(r3) = (u32)r1;
    r1 = r1 - r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F7D4;
    r0 = (r0 << 2);
    r0 = r0 + r3;
    r2 = (r1 << 2);
    r1 = r0;
    r1 += 0x8U;
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800F7D0: BL 0x08049138
loc_0800F7D4:
    r0 = 0x238U; // (71 << 3)
    r1 = 0x0U;
    r0 = r4 + r0;
    r0 = sub_0800A9FE(r0, r1, r2, r3); // 0x0800F7DC
    r0 = 0x22CU; // (139 << 2)
    r0 = r4 + r0;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F7F6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800F7F2: BL 0x08046AA2
loc_0800F7F6:
    r1 = 0x0U;
    r0 = r4;
    r0 = Object_Destroy6(r0, r1, r2, r3); // 0x0800F7FA: BL 0x0800E85E
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F808;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800F804: BL 0x0803D63C
loc_0800F808:
    return r0;
    r1 = 0x200U; // (1 << 9)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x24);
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F864;
    r2 = 0x080726ACU; // [0x0800F904]
    r3 = 0x68U;
    r0 = *(u32*)(r2 + 0x4);
    r4 = *(u8*)(r0);
    r3 *= r4;
    r0 = r3 + r0;
    r3 = 0x4F8U; // (159 << 3)
    r0 = r0 + r3;
    r3 = 0x58U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r0 *= r1;
    r0 += 0xFFU;
    r4 = ((u32)((s32)r0 >> 8));
    if (cmp_lhs == cmp_rhs) goto loc_0800F864;
    r0 = 0xCU;
    r5 = *(u32*)(r2);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800F83E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F850;
    r1 = 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804A820U /* &VTable_0804A820 */; // [0x0800F918]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_0800F850:
    r2 = r0;
    r0 = 0x610U; // (97 << 4)
    r0 = r5 + r0;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
loc_0800F864:
    return r0;
}

// ROM Address: 0x0800F866..0x0800F89A (52 bytes, Thumb)
u32 sub_0800F866(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r2;
    r4 = r0;
    r1 = r0;
    r0 = 0x10; // sp + 0x10
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800F872: BL 0x0800FDFA
    r0 = stack[4]; // [sp + 0x10]
    r1 = stack[6]; // [sp + 0x18]
    r7 = stack[7]; // [sp + 0x1C]
    r0 = r0 + r1;
    r6 = ((u32)((s32)r0 >> 1));
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800F89A(r0, r1, r2, r3);
    r0 = *(u8*)(r5);
    r1 = 0x0807268CU; // [0x0800F91C]
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 8);
    r0 = (r0 << 8);
    stack[3] = r0; // [sp + 0xC]
    stack[2] = r1; // [sp + 0x8]
    return sub_0800F8A0(r0, r1, r2, r3);
}

// ROM Address: 0x0800F89A..0x0800F99E (260 bytes, Thumb)
u32 sub_0800F89A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    stack[2] = r0; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x080726ACU; // [0x0800F904]
    r0 = *(u32*)(r0);
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r1 = *(u32*)(r0 + 0x24);
    r1 = *(u32*)(r1 + 0x18);
    stack[0] = r1; // [sp + 0x0]
    r5 = *(u32*)(r0 + 0x28);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800F8B6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800F8DA;
    r1 = stack[9]; // [sp + 0x24]
    r3 = 0x8; // sp + 0x8
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804955CU /* &VTable_0804955C */; // [0x0800F920]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r6;
    *(u32*)(r0 + 0xC) = (u32)r7;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    *(u32*)(r0 + 0x10) = (u32)r2;
    *(u32*)(r0 + 0x14) = (u32)r3;
    *(u32*)(r0 + 0x20) = (u32)r4;
    r1 = stack[0]; // [sp + 0x0]
    *(u32*)(r0 + 0x18) = (u32)r1;
    *(u32*)(r0 + 0x1C) = (u32)r5;
loc_0800F8DA:
    r2 = r0;
    r0 = stack[1]; // [sp + 0x4]
    r1 = 0x610U; // (97 << 4)
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r0 = r4;
    r0 = sub_0800F80C(r0, r1, r2, r3); // 0x0800F8F2
    return r0;
    r0 = r0;
    r0 = ((u32)((s32)r2 >> 32));
    r0 = (r0 << 12);
    r0 = ((u32)((s32)r3 >> 32));
    r0 = (r0 << 12);
    r6 = 0xACU;
    r7 = (r0 >> 32);
    r4 = r5 - r6;
    r0 = (r0 << 12);
    r4 = r1 - r4;
    r0 = (r0 << 12);
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    r4 = (r0 >> 32);
    r0 = r6 - r6;
    r0 = (r0 << 12);
    r0 = 0x80; // sp + 0x80
    r4 = (r0 >> 32);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    stack[92] = r5; // [sp + 0x170]
    r4 = (r0 >> 32);
    r1 = 0x290U; // (41 << 4)
    r1 = r0 + r1;
    r2 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800F950;
    r2 = 0x1U;
    *(u8*)(r1 + 0x1) = (u8)r2;
    r1 = 0x080726ACU; // [0x0800FCE0]
    r4 = *(u32*)(r1 + 0x8);
    r1 = r0;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800F940: BL 0x0800FDFA
    r4 += 0x80U;
    r1 = *(u32*)(r4 + 0x30);
    r2 = 0x1U;
    r0 = sp;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800F94C
loc_0800F950:
    return r0;
    r4 = r0;
    r0 = 0x290U; // (41 << 4)
    r6 = r4 + r0;
    r0 = *(u8*)(r6 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800F99E(r0, r1, r2, r3);
    r0 = 0x080726ACU; // [0x0800FCE0]
    r1 = r4;
    r5 = *(u32*)(r0 + 0x8);
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800F96E: BL 0x0800FDFA
    r7 = r5;
    r7 += 0x80U;
    r1 = *(u32*)(r7 + 0x30);
    r0 = 0x4; // sp + 0x4
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0800F97A
    r1 = 0x1U;
    r5 = r1 - r0;
    r0 = 0x0U;
    *(u8*)(r6 + 0x1) = (u8)r0;
    r0 = 0x4; // sp + 0x4
    r1 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800F98A: BL 0x0800FDFA
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r1 = *(u32*)(r7 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800F994
    r0 = r5;
    return r0;
}

// ROM Address: 0x0800F99E..0x0800F9A2 (4 bytes, Thumb)
u32 sub_0800F99E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return sub_0800F99A(r0, r1, r2, r3);
}

// ROM Address: 0x0800F9A2..0x0800F9EA (72 bytes, Thumb)
u32 sub_0800F9A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r0;
    r0 = r1;
    r1 = 0x290U; // (41 << 4)
    r1 = r3 + r1;
    r1 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800F9C0;
    r1 = 0x080726ACU; // [0x0800FCE0]
    r1 = *(u32*)(r1 + 0x8);
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800F9BC
loc_0800F9C0:
    return r0;
    r2 = r0;
    r0 = r1;
    r1 = r2;
    r2 = 0x290U; // (41 << 4)
    r1 = r1 + r2;
    r1 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800F9E6;
    r1 = 0x080726ACU; // [0x0800FCE0]
    r1 = *(u32*)(r1 + 0x8);
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x30);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0800F9DE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800F9EA(r0, r1, r2, r3);
loc_0800F9E6:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800F9EA..0x0800F9EE (4 bytes, Thumb)
u32 sub_0800F9EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800F9E8(r0, r1, r2, r3);
}

// ROM Address: 0x0800F9F4..0x0800FA12 (30 bytes, Thumb)
u32 sub_0800F9F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r2 + 0x1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800FA0E;
    r2 = r0;
    r0 = 0x080726ACU; // [0x0800FCE0]
    r2 += 0x19CU;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08009904(r0, r1, r2, r3); // 0x0800FA06: BL 0x08009904
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800FA12(r0, r1, r2, r3);
loc_0800FA0E:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800FA12..0x0800FA16 (4 bytes, Thumb)
u32 sub_0800FA12(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800FA10(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_write_table_pointer1_stores_the_table_entry_the_index_names runs it on a zeroed object: asm/Object_WriteTablePointer1.s:3-6 multiply the argument by 28 and add the literal table, :9-10 add 0x200 to the object and :11 stores the entry at +0x24; argument 2 stores the entry 0x38 past the literal table at +0x224
// ROM Address: 0x0800FA16..0x0800FA2A (20 bytes, Thumb)
u32 Object_WriteTablePointer1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r1 << 3);
    r1 = r3 - r1;
    r2 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x0800FCE4]
    r1 = (r1 << 2);
    r1 = r1 + r2;
    r2 = 0x200U; // (1 << 9)
    r0 = r0 + r2;
    *(u32*)(r0 + 0x24) = (u32)r1;
    return r0; // BX lr
}

// Evidence: 0x0804C484#22 resolves to 0x0800FA2A, and 0x0800F6CC stores 0x0804C484 in the enemy constructor's init body; the body at 0x0800FA4C loads the damage word at +0x18 and 0x0800FA4E-0x0800FA50 subtracts it from the holder's +0x28C word (asm/Battle_ApplyDamage.s:19-22)
// ROM Address: 0x0800FA2A..0x0800FA80 (86 bytes, Thumb)
u32 Battle_ApplyDamage(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x28CU; // (163 << 2)
    r5 = r4 + r0;
    r0 = *(u32*)(r5);
    r7 = 0x0U;
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800FA42;
    r0 = 0x1U;
loc_0800FA40:
    return r0;
loc_0800FA42:
    r1 = r6;
    r0 = r4;
    r0 = sub_0800E8E6(r0, r1, r2, r3); // 0x0800FA46
    r1 = *(u32*)(r5);
    r0 = *(u32*)(r6 + 0x18);
    r0 = r1 - r0;
    *(u32*)(r5) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0800FA7C;
    r0 = 0x080726ACU; // [0x0800FCE0]
    r2 = r4;
    *(u32*)(r5) = (u32)r7;
    r0 = *(u32*)(r0);
    r1 = 0x11U;
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0800FA60
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x24);
    r2 = r6;
    r0 = *(u32*)(r0 + 0x14);
    r1 = r4;
    r3 = *(u32*)(r0 + 0x8);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800FA74: BL __call_via_r3
    r0 = 0x1U;
    goto loc_0800FA40;
loc_0800FA7C:
    r0 = 0x0U;
    goto loc_0800FA40;
    return r0;
}

// ROM Address: 0x0800FA80..0x0800FAE2 (98 bytes, Thumb)
u32 sub_0800FA80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E97E(r0, r1, r2, r3); // 0x0800FA86
    r2 = 0x000003FFU; // [0x0800FCE8]
    r1 = *(u32*)(r5);
    r0 = 0x28CU; // (163 << 2)
    r1 = r1 + r2;
    r0 = r4 + r0;
    r2 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 10));
    r1 = (r1 << 10);
    r1 = r2 + r1;
    *(u32*)(r0) = (u32)r1;
    r1 = 0x200U; // (1 << 9)
    r1 = r4 + r1;
    r1 = *(u32*)(r1 + 0x24);
    r1 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r0);
    r1 = (r1 << 10);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0800FAB4;
    *(u32*)(r0) = (u32)r1;
loc_0800FAB4:
    return r0;
    r2 = 0x080726ACU; // [0x0800FCE0]
    r1 = (r1 << 2);
    r2 += 0xCU;
    r1 = *(u32*)(r2 + r1);
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0800FAC0
    return r0;
    r3 = 0x080726ACU; // [0x0800FCE0]
    r2 = (r1 << 2);
    r3 += 0xCU;
    r2 = *(u32*)(r3 + r2);
    r3 = *(u32*)(r0 + 0x14);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_0800FAE2(r0, r1, r2, r3);
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x0800FAD6
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800FAE2(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800FAE2..0x0800FAE6 (4 bytes, Thumb)
u32 sub_0800FAE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800FAE0(r0, r1, r2, r3);
}

// ROM Address: 0x0800FAE6..0x0800FB56 (112 bytes, Thumb)
u32 sub_0800FAE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_0800EF08(r0, r1, r2, r3); // 0x0800FAEA
    r0 = 0x238U; // (71 << 3)
    r0 = r4 + r0;
    r0 = sub_0800AB0C(r0, r1, r2, r3); // 0x0800FAF4
    return r0;
    r4 = r0;
    r0 += 0x1C0U;
    r7 = r2 + 4;
    r6 = r1;
    r5 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800FBE0(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0800FBE2(r0, r1, r2, r3);
    r7 = 0x080726ACU; // [0x0800FCE0]
    cmp_lhs = (s32)r6; cmp_rhs = 22;
    if (cmp_lhs == cmp_rhs) return sub_0800FB56(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 25;
    if (cmp_lhs != cmp_rhs) return sub_0800FBE4(r0, r1, r2, r3);
    r1 = r4;
    r6 = 0x6C; // sp + 0x6C
    r0 = r6;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0800FB22
    r0 = *(u32*)(r7 + 0x8);
    r1 = stack[27]; // [sp + 0x6C]
    r0 += 0x18U;
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800FC16(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = stack[29]; // [sp + 0x74]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800FC16(r0, r1, r2, r3);
    r1 = stack[28]; // [sp + 0x70]
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800FC16(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x4);
    r1 = stack[30]; // [sp + 0x78]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800FC16(r0, r1, r2, r3);
    r0 = *(u32*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_0800FC36(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800FB56..0x0800FBE6 (144 bytes, Thumb)
u32 sub_0800FB56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800FB5E: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800FB68;
    return sub_0800FB52(r0, r1, r2, r3);
loc_0800FB68:
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r1 = *(u32*)(r0 + 0x24);
    r0 = *(u32*)(r4 + 0x58);
    r0 = sub_08027948(r0, r1, r2, r3); // 0x0800FB72
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800FB7E;
    r0 = 0x0U;
    return sub_0800FB52(r0, r1, r2, r3);
loc_0800FB7E:
    r1 = *(u32*)(r5);
    r2 = r1 + 1;
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r5;
    *(u32*)(r5) = (u32)r2;
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x28CU; // (163 << 2)
    r0 = r4 + r0;
    r0 = *(u32*)(r0);
    r2 = 0x000003FFU; // [0x0800FCE8]
    r0 = r0 + r2;
    r0 = ((u32)((s32)r0 >> 10));
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    *(u32*)(r1 + 0x8) = (u32)r0;
    r0 = r1;
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[28] = r1; // [sp + 0x70]
    r1 = r2;
    stack[27] = r2; // [sp + 0x6C]
    r2 = stack[28]; // [sp + 0x70]
    stack[29] = r1; // [sp + 0x74]
    stack[30] = r2; // [sp + 0x78]
    r1 = *(u32*)(r7 + 0x8);
    r2 = stack[29]; // [sp + 0x74]
    r1 += 0x28U;
    r3 = *(u32*)(r1);
    r0 += 0xCU;
    r2 = r2 - r3;
    r3 = stack[30]; // [sp + 0x78]
    r1 = *(u32*)(r1 + 0x4);
    stack[27] = r2; // [sp + 0x6C]
    r1 = r3 - r1;
    stack[28] = r1; // [sp + 0x70]
    r1 = r2;
    r2 = stack[28]; // [sp + 0x70]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = 0x0U;
    return sub_0800FB52(r0, r1, r2, r3);
    return sub_0800FBE6(r0, r1, r2, r3);
    return sub_0800FC8E(r0, r1, r2, r3);
    return sub_0800FD28(r0, r1, r2, r3);
}

// ROM Address: 0x0800FC16..0x0800FC18 (2 bytes, Thumb)
u32 sub_0800FC16(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0800FD24(r0, r1, r2, r3);
}

// ROM Address: 0x0800FC36..0x0800FC38 (2 bytes, Thumb)
u32 sub_0800FC36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0800FD08(r0, r1, r2, r3);
}

// ROM Address: 0x0800FD08..0x0800FD28 (32 bytes, Thumb)
u32 sub_0800FD08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0 + 1;
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r0 = r0 + r5;
    *(u32*)(r5) = (u32)r1;
    r5 = 0x0U;
    r0 += 0x4U;
    *(u32*)(r0 + 0x10) = (u32)r5;
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x10U;
    *(u8*)(r0 + 0x14) = (u8)r5;
    *(u32*)(r0 + 0x18) = (u32)r4;
    r0 = 0x0U;
    return sub_0800FB52(r0, r1, r2, r3);
}

// ROM Address: 0x0800FD34..0x0800FD96 (98 bytes, Thumb)
u32 sub_0800FD34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800FD3E: BL __call_via_r3
    return r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800FD4E: BL __call_via_r3
    return r0;
    r2 = *(u32*)(r0 + 0x8);
    r3 = (r2 << 3);
    r2 = r3 - r2;
    r3 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x0800FD70]
    r2 = (r2 << 2);
    r2 = r2 + r3;
    r3 = r1;
    r1 = r0;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0800FD68
    return r0;
    r0 = r0;
    r4 = ((u32)((s32)r6 >> 9));
    r1 = (r6 >> 1);
    r7 = r2;
    r5 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r6 = stack[10]; // [sp + 0x28]
    if (cmp_lhs != cmp_rhs) return sub_0800FD96(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xB1U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800FD88: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800FD96(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800FD96..0x0800FDFA (100 bytes, Thumb)
u32 sub_0800FD96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r7;
    r0 = r4;
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_0800F58C(r0, r1, r2, r3); // 0x0800FD9C: BL 0x0800F58C
    r0 = 0x0804BA08U /* &VTable_0804BA08 */; // [0x08010008]
    r7 = 0xFFU;
    r7 += 0xA9U;
    r3 = 0xF000U; // (15 << 12)
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r7 + r4) = r3;
    r3 = 0x0U;
    r2 = r7 + 4;
    *(u32*)(r2 + r4) = r3;
    r2 = 0xFFU;
    r2 += 0x99U;
    *(u32*)(r2 + r4) = r6;
    r3 = *(u32*)(r4 + 0x58);
    r2 += 0x4U;
    r3 = *(u16*)(r3 + 0x8);
    r1 = r4;
    r1 += 0xFFU;
    *(u16*)(r2 + r4) = (u16)r3;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r5 + r3));
    r3 = 0x2U;
    r5 = (u32)(*(s16*)(r5 + r3));
    r1 += 0xA1U;
    r2 = (r2 << 8);
    *(u32*)(r1) = (u32)r2;
    r0 = r1 + 4;
    r3 = (r5 << 8);
    *(u32*)(r0) = (u32)r3;
    r0 = *(u32*)(r4 + 0x58);
    r2 = *(u8*)(r0 + 0xA);
    r1 = *(u8*)(r0 + 0xC);
    r2 = (r2 >> 1);
    r2 = r1 + r2;
    r1 = r4;
    r1 += 0x190U;
    *(u8*)(r1 + 0xE) = (u8)r2;
    r2 = *(u8*)(r0 + 0xD);
    r0 = *(u8*)(r0 + 0xB);
    r0 = (r0 >> 1);
    r0 = r2 + r0;
    *(u8*)(r1 + 0xF) = (u8)r0;
    r0 = r4;
    return sub_0800FD92(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_names.py::test_object_write_bounds1_stores_the_position_and_the_sum_of_position_and_size reads [r1+0x1A0] and [r1+0x1A4] as 8.8 fixed-point values, shifts each right 8 and stores four integers at r0: x, y, x+[r1+0x19C] and y+[r1+0x19D]
// ROM Address: 0x0800FDFA..0x0800FF32 (312 bytes, Thumb)
u32 Object_WriteBounds1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xFFU;
    r2 += 0xA1U;
    r2 = *(u32*)(r2 + r1);
    r3 = 0xFFU;
    r3 += 0xA5U;
    r3 = *(u32*)(r3 + r1);
    r2 = ((u32)((s32)r2 >> 8));
    stack[0] = r2; // [sp + 0x0]
    r2 = r1;
    r2 += 0xFFU;
    r3 = ((u32)((s32)r3 >> 8));
    stack[1] = r3; // [sp + 0x4]
    r2 += 0x91U;
    r1 = *(u8*)(r2 + 0xC);
    r2 = *(u8*)(r2 + 0xD);
    r3 = stack[0]; // [sp + 0x0]
    r4 = sp;
    r1 = r3 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[1]; // [sp + 0x4]
    r1 = r1 + r2;
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    return r0; // BX lr
    r4 = *(u32*)(r1 + 0x54);
    r2 = 0xFFU;
    r3 = 0x4U;
    r5 = (u32)(*(s8*)(r4 + r3));
    r2 += 0xA1U;
    r2 = *(u32*)(r2 + r1);
    r3 = 0xFFU;
    r3 += 0xA5U;
    r3 = *(u32*)(r3 + r1);
    r2 = ((u32)((s32)r2 >> 8));
    r2 = r2 + r5;
    r5 = ((u32)((s32)r3 >> 8));
    r3 = 0x5U;
    r4 = (u32)(*(s8*)(r4 + r3));
    stack[0] = r2; // [sp + 0x0]
    r3 = r5 + r4;
    stack[1] = r3; // [sp + 0x4]
    r2 = *(u32*)(r1 + 0x54);
    r4 = sp;
    r1 = *(u8*)(r2 + 0x6);
    r2 = *(u8*)(r2 + 0x7);
    r3 = stack[0]; // [sp + 0x0]
    r1 = r3 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[1]; // [sp + 0x4]
    r1 = r1 + r2;
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    return r0; // BX lr
    r3 = *(u8*)(r1 + 0x10);
    r2 = r0;
    r0 = *(u32*)(r1 + 0x58);
    r3 = (r3 << 4);
    r0 = r0 + r3;
    r1 += 0x1A0U;
    r3 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r3 = ((u32)((s32)r3 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[5] = r1; // [sp + 0x14]
    r1 = r3;
    stack[4] = r3; // [sp + 0x10]
    r3 = stack[5]; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    r0 += 0x10U;
    stack[7] = r3; // [sp + 0x1C]
    r1 = *(u32*)(r0);
    r3 = stack[6]; // [sp + 0x18]
    r1 = r1 + r3;
    r3 = *(u32*)(r0 + 0x4);
    r4 = stack[7]; // [sp + 0x1C]
    stack[0] = r1; // [sp + 0x0]
    r3 = r3 + r4;
    stack[1] = r3; // [sp + 0x4]
    r4 = stack[1]; // [sp + 0x4]
    r3 = r1;
    r0 += 0x8U;
    r1 = *(u32*)(r0);
    r5 = stack[6]; // [sp + 0x18]
    r0 = *(u32*)(r0 + 0x4);
    r1 = r1 + r5;
    r5 = stack[7]; // [sp + 0x1C]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r5;
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    stack[2] = r3; // [sp + 0x8]
    r3 = 0x8; // sp + 0x8
    stack[4] = r0; // [sp + 0x10]
    r1 = stack[1]; // [sp + 0x4]
    r0 = r3;
    stack[3] = r4; // [sp + 0xC]
    r4 = r2;
    stack[5] = r1; // [sp + 0x14]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    return r0; // BX lr
    r5 = r0;
    r1 = 0x08072714U; // [0x0801000C]
    r5 += 0x180U;
    r3 = 0x08072714U; // [0x0801000C]
    r1 = *(u32*)(r1);
    r2 = r5;
    r3 = *(u32*)(r3);
    r4 = r1;
    r2 += 0x20U;
    r6 = *(u32*)(r5 + 0x20);
    r3 += 0x94U;
    r1 = *(u32*)(r2);
    r4 += 0x94U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    r3 = *(u32*)(r3);
    if (cmp_lhs >= cmp_rhs) goto loc_0800FF0E;
    r3 = (r3 << 8);
    r1 = r1 + r3;
    *(u32*)(r2) = (u32)r1;
    goto loc_0800FF1A;
loc_0800FF0E:
    r6 = ((u32)((s32)r1 >> 8));
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0800FF1A;
    r3 = (r3 << 8);
    r1 = r1 - r3;
    *(u32*)(r2) = (u32)r1;
loc_0800FF1A:
    r0 += 0xFFU;
    r1 = *(u32*)(r5 + 0x24);
    r0 += 0xA5U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_0800FF32(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x4);
    r2 = *(u32*)(r0);
    r1 = (r1 << 8);
    r1 = r2 + r1;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x0800FF32..0x0800FF44 (18 bytes, Thumb)
u32 sub_0800FF32(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r3 = *(u32*)(r4 + 0x4);
    r2 = ((u32)((s32)r1 >> 8));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) return sub_0800FF2E(r0, r1, r2, r3);
    r2 = (r3 << 8);
    r1 = r1 - r2;
    *(u32*)(r0) = (u32)r1;
    return sub_0800FF2E(r0, r1, r2, r3);
}

// ROM Address: 0x0800FF44..0x0800FF8A (70 bytes, Thumb)
u32 sub_0800FF44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x10; // sp + 0x10
    r4 = r1;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0800FF4E
    r0 = stack[4]; // [sp + 0x10]
    r1 = stack[6]; // [sp + 0x18]
    r2 = stack[7]; // [sp + 0x1C]
    r1 = r0 + r1;
    r0 = stack[5]; // [sp + 0x14]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[0] = r1; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r2 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800FF8A(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0800FF96(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0800FF9C(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_0800FF84;
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[3]; // [sp + 0xC]
loc_0800FF84:
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    return r0;
}

// ROM Address: 0x0800FF8A..0x0800FFA2 (24 bytes, Thumb)
u32 sub_0800FF8A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0xA5U;
    r1 = *(u32*)(r1 + r4);
    r0 = stack[2]; // [sp + 0x8]
    r1 = ((u32)((s32)r1 >> 8));
    return sub_0800FF84(r0, r1, r2, r3);
    r1 = 0x8; // sp + 0x8
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    return sub_0800FF84(r0, r1, r2, r3);
    r0 = stack[4]; // [sp + 0x10]
    r1 = stack[3]; // [sp + 0xC]
    return sub_0800FF84(r0, r1, r2, r3);
}

// ROM Address: 0x0800FFA2..0x08010008 (102 bytes, Thumb)
u32 sub_0800FFA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u8*)(r1 + 0x11);
    r2 = *(u32*)(r1 + 0x50);
    r3 = (r3 << 4);
    r2 = r2 + r3;
    r3 = *(u8*)(r1 + 0x10);
    r3 = (r3 << 2);
    r2 = r2 + r3;
    r3 = *(u32*)(r2 + 0x4);
    r2 = r1;
    r2 += 0x1A0U;
    r4 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)(r2);
    r4 = ((u32)((s32)r4 >> 8));
    r2 = ((u32)((s32)r2 >> 8));
    stack[1] = r2; // [sp + 0x4]
    r2 = r4;
    stack[0] = r4; // [sp + 0x0]
    r4 = stack[1]; // [sp + 0x4]
    stack[2] = r2; // [sp + 0x8]
    r2 = 0x08072714U; // [0x0801000C]
    stack[3] = r4; // [sp + 0xC]
    r2 = *(u32*)(r2);
    r4 = stack[2]; // [sp + 0x8]
    r2 += 0x28U;
    r5 = *(u32*)(r2);
    r4 = r4 - r5;
    r5 = stack[3]; // [sp + 0xC]
    r2 = *(u32*)(r2 + 0x4);
    stack[0] = r4; // [sp + 0x0]
    r2 = r5 - r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = r4;
    r4 = stack[1]; // [sp + 0x4]
    stack[4] = r2; // [sp + 0x10]
    stack[5] = r4; // [sp + 0x14]
    r1 = *(u32*)(r1 + 0x58);
    r1 = *(u8*)(r1 + 0x8);
    r1 = r2 + r1;
    r2 = r4;
    r4 = r3;
    r3 = 0x5U;
    r4 = (u32)(*(s8*)(r4 + r3));
    r1 -= 0x8U;
    r2 = r2 + r4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    return r0; // BX lr
}

// ROM Address: 0x0801000A..0x08010098 (142 bytes, Thumb)
u32 sub_0801000A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r7 = 0x14U;
    r7 = (r0 >> 32);
    r2 = 0x08072714U; // [0x080102D0]
    r1 = *(u32*)(r2 + 0x8);
    r3 = *(u32*)(r2 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    r2 = *(u32*)(r2);
    r1 = 0xFFU;
    r1 += 0xADU;
    r1 = *(u32*)(r1 + r0);
    r2 = *(u32*)(r2 + 0xC);
    r1 = ((u32)((s32)r1 >> 10));
    r2 = ((u32)((s32)r2 >> 10));
    r1 = r1 - r2;
    r1 = (r1 << 24);
    r1 = (r1 >> 29);
    r2 = sp;
    r1 = *(u8*)(r2 + r1);
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = 0x08072714U; // [0x080102D0]
    r1 = r4;
    r0 = *(u32*)(r0);
    r1 += 0xFFU;
    r0 += 0x80U;
    r2 = *(u32*)(r0 + 0x10);
    r3 = 0x08072714U; // [0x080102D0]
    r1 += 0xA1U;
    r0 = r1 + 4;
    r7 = *(u32*)(r3);
    r5 = r0;
    r5 -= 0x24U;
    r6 = 0x0U;
    r7 += 0x18U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08010144(r0, r1, r2, r3);
    r1 = *(u32*)(r1);
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[6] = r0; // [sp + 0x18]
    r0 = r1;
    stack[5] = r1; // [sp + 0x14]
    r1 = stack[6]; // [sp + 0x18]
    stack[7] = r0; // [sp + 0x1C]
    stack[8] = r1; // [sp + 0x20]
    r1 = *(u32*)(r7);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08010092;
    r0 = stack[7]; // [sp + 0x1C]
    r1 = *(u32*)(r7 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08010092;
    r0 = stack[8]; // [sp + 0x20]
    r1 = *(u32*)(r7 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08010092;
    r0 = stack[8]; // [sp + 0x20]
    r1 = *(u32*)(r7 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08010098(r0, r1, r2, r3);
loc_08010092:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08010098..0x08010146 (174 bytes, Thumb)
u32 sub_08010098(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x44);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080100A0: BL 0x08046AA2
    r1 = *(u8*)(r4 + 0x11);
    r0 = *(u32*)(r4 + 0x50);
    r2 = r4;
    r1 = (r1 << 4);
    r0 = r0 + r1;
    r1 = *(u8*)(r4 + 0x10);
    r2 += 0x194U;
    r1 = (r1 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r7 = r2;
    *(u32*)(r4 + 0x54) = (u32)r0;
    r0 = *(u32*)(r5 + 0x20);
    r1 = 0x18; // sp + 0x18
    r0 = (r0 << 2);
    stack[6] = r0; // [sp + 0x18]
    r0 = *(u32*)(r5 + 0x24);
    r3 = 0x10; // sp + 0x10
    r0 = (r0 << 2);
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0xFFU;
    r0 += 0xA9U;
    r0 = *(u32*)(r0 + r4);
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x08072714U; // [0x080102D0]
    r0 = *(u32*)(r0);
    stack[0] = r2; // [sp + 0x0]
    r2 = r4;
    r2 += 0x60U;
    r0 = sub_0802F1C6(r0, r1, r2, r3); // 0x080100E0
    r0 = *(u32*)(r4 + 0x60);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010124;
    r0 = 0x3FU;
    r1 = stack[4]; // [sp + 0x10]
    r0 = ~r0;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) goto loc_0801010A;
    r2 = 0xFFU;
    r1 = stack[4]; // [sp + 0x10]
    r2 += 0x31U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0801010A;
    r1 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) goto loc_0801010A;
    r0 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r0; cmp_rhs = 224;
    if (cmp_lhs <= cmp_rhs) goto loc_0801010E;
loc_0801010A:
    *(u32*)(r4 + 0x60) = (u32)r6;
    goto loc_08010124;
loc_0801010E:
    r1 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r4 + 0x58);
    r2 = *(u8*)(r0 + 0x8);
    r2 = (r2 >> 1);
    r1 = r1 - r2;
    *(u32*)(r4 + 0x6C) = (u32)r1;
    r0 = *(u8*)(r0 + 0x9);
    r1 = stack[5]; // [sp + 0x14]
    r0 = (r0 >> 1);
    r0 = r1 - r0;
    *(u32*)(r4 + 0x70) = (u32)r0;
loc_08010124:
    r1 = 0x00000222U; // [0x080102D4]
    r0 = *(u32*)(r5 + 0x14);
    r1 *= r0;
    r1 = ((u32)((s32)r1 >> 17));
    *(u32*)(r4 + 0x68) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 128;
    if (cmp_lhs >= cmp_rhs) goto loc_08010136;
    r1 = 0x80U;
    *(u32*)(r4 + 0x68) = (u32)r1;
loc_08010136:
    r0 = (u32)(-(s32)r0);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801018E(r0, r1, r2, r3);
    r1 = 0x18; // sp + 0x18
    return sub_08010146(r0, r1, r2, r3);
    return sub_08010192(r0, r1, r2, r3);
}

// ROM Address: 0x08010192..0x0801022C (154 bytes, Thumb)
u32 sub_08010192(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u8*)(r4 + 0x11);
    r2 = *(u32*)(r4 + 0x50);
    r3 = (r3 << 4);
    r2 = r2 + r3;
    r3 = *(u8*)(r4 + 0x10);
    r3 = (r3 << 2);
    r2 = r2 + r3;
    r2 = *(u32*)(r2 + 0x4);
    r3 = 0xEU;
    *(u32*)(r4 + 0x54) = (u32)r2;
    r1 = *(u32*)(r1);
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[6] = r0; // [sp + 0x18]
    r0 = r1;
    stack[7] = r0; // [sp + 0x1C]
    stack[5] = r1; // [sp + 0x14]
    r1 = stack[6]; // [sp + 0x18]
    r0 = r4;
    r0 += 0x190U;
    stack[8] = r1; // [sp + 0x20]
    r2 = *(u8*)(r0 + 0xD);
    r2 = (r2 >> 1);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r2 = (u32)(*(s8*)(r0 + r3));
    r1 = stack[7]; // [sp + 0x1C]
    r3 = 0xFU;
    r1 = r1 + r2;
    stack[5] = r1; // [sp + 0x14]
    r0 = (u32)(*(s8*)(r0 + r3));
    r1 = stack[8]; // [sp + 0x20]
    r3 = 0x4U;
    r0 = r1 + r0;
    stack[6] = r0; // [sp + 0x18]
    r1 = stack[7]; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x54);
    r2 = (u32)(*(s8*)(r0 + r3));
    r3 = 0x14U;
    r1 = r1 + r2;
    r2 = r4;
    r2 += 0x160U;
    lr = r2;
    r2 = (u32)(*(s16*)(r2 + r3));
    r12 = r1;
    r3 = 0x5U;
    r12 += r2;
    r2 = (u32)(*(s8*)(r0 + r3));
    r1 = stack[8]; // [sp + 0x20]
    r3 = 0x16U;
    r1 = r1 + r2;
    r2 = lr;
    r2 = (u32)(*(s16*)(r2 + r3));
    r3 = *(u8*)(r0 + 0x6);
    r0 = *(u8*)(r0 + 0x7);
    r2 = r1 + r2;
    r1 = r12;
    r3 += r12;
    r12 = r2;
    r12 += r0;
    r0 = *(u32*)(r7 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0801022E(r0, r1, r2, r3);
    r0 = *(u32*)(r7);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0801022E(r0, r1, r2, r3);
    r0 = *(u32*)(r7 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0801022E(r0, r1, r2, r3);
    r0 = *(u32*)(r7 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r12;
    if (cmp_lhs >= cmp_rhs) return sub_0801022E(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08010230(r0, r1, r2, r3);
}

// ROM Address: 0x0801022E..0x080102CE (160 bytes, Thumb)
u32 sub_0801022E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x60) = (u32)r0;
    r1 = 0x08072714U; // [0x080102D0]
    r0 = r4;
    r1 = *(u32*)(r1);
    r2 = stack[7]; // [sp + 0x1C]
    r1 += 0x28U;
    r3 = *(u32*)(r1);
    r0 += 0x6CU;
    r2 = r2 - r3;
    r3 = stack[8]; // [sp + 0x20]
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r2; // [sp + 0xC]
    r1 = r3 - r1;
    stack[4] = r1; // [sp + 0x10]
    r1 = r2;
    r2 = stack[4]; // [sp + 0x10]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080102B8;
    r6 = r4;
    r6 += 0x140U;
    r0 = *(u32*)(r6 + 0x38);
    r1 = 0x14; // sp + 0x14
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x08072714U; // [0x080102D0]
    r2 = *(u8*)(r4 + 0x8);
    r0 = *(u32*)(r0);
    r0 = sub_080099A4(r0, r1, r2, r3); // 0x0801026A
    r1 = *(u32*)(r6 + 0x3C);
    r3 = 0xCU;
    r1 = r0 + r1;
    *(u32*)(r5 + 0x8) = (u32)r1;
    r2 = stack[7]; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x58);
    r6 = (u32)(*(s8*)(r0 + r3));
    r3 = *(u32*)(r5 + 0x4);
    r2 = r2 + r6;
    r2 = r2 + r3;
    r3 = 0xDU;
    r0 = (u32)(*(s8*)(r0 + r3));
    r5 = stack[8]; // [sp + 0x20]
    r3 = *(u32*)(r4 + 0x5C);
    r0 = r5 + r0;
    r0 = r0 + r1;
    r1 = *(u8*)(r3);
    r3 = *(u8*)(r3 + 0x1);
    r5 = *(u32*)(r7 + 0x8);
    r1 = r2 + r1;
    r3 = r0 + r3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_080102B2;
    r2 = *(u32*)(r7);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080102B2;
    r1 = *(u32*)(r7 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080102B2;
    r0 = *(u32*)(r7 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_080102B2;
    r0 = 0x1U;
    goto loc_080102B4;
loc_080102B2:
    r0 = 0x0U;
loc_080102B4:
    *(u32*)(r4 + 0x64) = (u32)r0;
    goto loc_080102BA;
loc_080102B8:
    *(u32*)(r4 + 0x64) = (u32)r6;
loc_080102BA:
    r0 = *(u32*)(r4 + 0x60);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080102C6;
    r0 = *(u32*)(r4 + 0x64);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080102CA;
loc_080102C6:
    r0 = 0x1U;
    return sub_08010094(r0, r1, r2, r3);
loc_080102CA:
    r0 = 0x0U;
    return sub_08010094(r0, r1, r2, r3);
}

// ROM Address: 0x080102D8..0x080102FC (36 bytes, Thumb)
u32 sub_080102D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 7;
    if (cmp_lhs == cmp_rhs) return sub_080102FC(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 22;
    if (cmp_lhs != cmp_rhs) return sub_08010378(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080102F0: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801030E(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x080102FC..0x08010382 (134 bytes, Thumb)
u32 sub_080102FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xFFU;
    r0 += 0x99U;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_0801030A;
    r0 = r4;
    return sub_080102F8(r0, r1, r2, r3);
loc_0801030A:
    r0 = 0x0U;
    return sub_080102F8(r0, r1, r2, r3);
    r1 = 0x0U;
    r0 = *(u32*)(r4 + 0x58);
    r0 = sub_08027948(r0, r1, r2, r3); // 0x08010312
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801031E;
    r0 = 0x0U;
    return sub_080102F8(r0, r1, r2, r3);
loc_0801031E:
    r1 = *(u32*)(r5);
    r2 = r1 + 1;
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r5;
    r1 += 0x4U;
    *(u32*)(r5) = (u32)r2;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    *(u32*)(r1 + 0x8) = (u32)r0;
    r0 = r1;
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
    r1 = 0x08072714U; // [0x08010384]
    stack[4] = r2; // [sp + 0x10]
    r1 = *(u32*)(r1);
    r2 = stack[3]; // [sp + 0xC]
    r1 += 0x28U;
    r3 = *(u32*)(r1);
    r0 += 0xCU;
    r2 = r2 - r3;
    r3 = stack[4]; // [sp + 0x10]
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r2; // [sp + 0x4]
    r1 = r3 - r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = r2;
    r2 = stack[2]; // [sp + 0x8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = 0x0U;
    return sub_080102F8(r0, r1, r2, r3);
    r2 = r5;
    r0 = r4;
    r0 = sub_0800F5C6(r0, r1, r2, r3); // 0x0801037C
    return sub_080102F8(r0, r1, r2, r3);
}

// ROM Address: 0x08010382..0x080103A6 (36 bytes, Thumb)
u32 sub_08010382(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r7 = 0x14U;
    r7 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    r0 = 0x1U;
    *(u8*)(r1 + 0x10) = (u8)r0;
    return r0; // BX lr
    r0 = *(u16*)(r1 + 0x12);
    r0 += 0x1U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = (r0 << 27);
    r0 = (r0 >> 30);
    *(u8*)(r1 + 0x11) = (u8)r0;
    return r0; // BX lr
}

// ROM Address: 0x080103A6..0x0801043A (148 bytes, Thumb)
u32 sub_080103A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08072720U; // [0x08010578]
    r5 = r1;
    r2 = *(u32*)(r2);
    r3 = r5;
    r2 = *(u16*)(r2 + 0x2);
    r4 = r0;
    r0 = r1;
    r3 += 0xFFU;
    r6 = 0x1U;
    r7 = (r2 << 31);
    r7 = (r7 >> 31);
    r6 = (r6 << 10);
    r3 += 0xA9U;
    r1 = 0x0U;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080103D8;
    r7 = 0x5U;
    r2 = *(u32*)(r3);
    r7 = (r7 << 10);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_080103EC;
    r2 = r2 - r6;
    *(u32*)(r3) = (u32)r2;
    goto loc_080103EC;
loc_080103D8:
    r2 = (r2 << 30);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080103EC;
    r7 = 0xFU;
    r2 = *(u32*)(r3);
    r7 = (r7 << 13);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_080103EC;
    r2 = r2 + r6;
    *(u32*)(r3) = (u32)r2;
loc_080103EC:
    r2 = 0x08072720U; // [0x08010578]
    r2 = *(u32*)(r2);
    r2 = *(u16*)(r2 + 0x2);
    r3 = (r2 << 27);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080103FC;
    r1 = 0x80U;
    goto loc_08010406;
loc_080103FC:
    r3 = (r2 << 26);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08010406;
    r1 = 0x7FU;
    r1 = ~r1;
loc_08010406:
    r3 = (r2 << 25);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08010414;
    r2 = *(u32*)(r4 + 0x8);
    r2 += 0xC0U;
    *(u32*)(r4 + 0x8) = (u32)r2;
    goto loc_08010420;
loc_08010414:
    r2 = (r2 << 24);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08010420;
    r2 = *(u32*)(r4 + 0x8);
    r2 -= 0xC0U;
    *(u32*)(r4 + 0x8) = (u32)r2;
loc_08010420:
    r2 = *(u32*)(r4 + 0x8);
    r3 = (r2 << 4);
    r2 = r3 - r2;
    r3 = ((u32)((s32)r2 >> 31));
    r3 = (r3 >> 28);
    r2 = r3 + r2;
    r2 = ((u32)((s32)r2 >> 4));
    *(u32*)(r4 + 0x8) = (u32)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0801043A(r0, r1, r2, r3);
    r2 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r2;
    return sub_08010442(r0, r1, r2, r3);
}

// ROM Address: 0x0801043A..0x08010448 (14 bytes, Thumb)
u32 sub_0801043A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08010442;
    r2 = 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r2;
loc_08010442:
    r2 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801044A(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0801044A..0x080104BE (116 bytes, Thumb)
u32 sub_0801044A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r4 + 0xC);
    r1 = r2 + r1;
    r2 = ((u32)((s32)r1 >> 3));
    r1 = r1 - r2;
    *(u32*)(r4 + 0xC) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801045C;
    r1 -= 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r1;
loc_0801045C:
    r1 = r0;
    r1 += 0x180U;
    r2 = *(u32*)(r1 + 0x2C);
    r3 = *(u32*)(r4 + 0xC);
    r6 = 0x087B6EECU; // [0x0801057C]
    r2 = r2 + r3;
    *(u32*)(r1 + 0x2C) = (u32)r2;
    r2 = r1;
    r2 += 0x2CU;
    r3 = *(u32*)(r2);
    r7 = *(u32*)(r4 + 0x8);
    r3 = ((u32)((s32)r3 >> 10));
    r3 = (r3 << 24);
    r3 = (r3 >> 22);
    r3 = *(u32*)(r6 + r3);
    r3 *= r7;
    r7 = *(u32*)(r1 + 0x20);
    r3 = ((u32)((s32)r3 >> 18));
    r3 = r3 + r7;
    *(u32*)(r1 + 0x20) = (u32)r3;
    r2 = *(u32*)(r2);
    r3 = *(u32*)(r4 + 0x8);
    r2 = ((u32)((s32)r2 >> 10));
    r2 += 0x40U;
    r2 = (r2 << 24);
    r2 = (r2 >> 22);
    r2 = *(u32*)(r6 + r2);
    r2 *= r3;
    r3 = *(u32*)(r1 + 0x24);
    r2 = ((u32)((s32)r2 >> 18));
    r2 = r3 - r2;
    *(u32*)(r1 + 0x24) = (u32)r2;
    r0 = sub_0800FEE2(r0, r1, r2, r3); // 0x0801049E
    r0 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs <= cmp_rhs) return sub_080104BE(r0, r1, r2, r3);
    r1 = 0x10U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080104AC
    r1 = *(u32*)(r4 + 0x4);
    r0 = 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080104BA;
    r0 = 0x1U;
loc_080104BA:
    *(u8*)(r5 + 0x10) = (u8)r0;
    return r0;
}

// ROM Address: 0x080104BE..0x080104F2 (52 bytes, Thumb)
u32 sub_080104BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x7FU;
    r1 = ~r1;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080104DC;
    r1 = 0x10U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080104CA
    r0 = *(u32*)(r4 + 0x4);
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080104D8;
    r2 = 0x3U;
loc_080104D8:
    *(u8*)(r5 + 0x10) = (u8)r2;
    return sub_080104BC(r0, r1, r2, r3);
loc_080104DC:
    r1 = 0xFU;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080104E0
    r0 = *(u32*)(r4 + 0x4);
    r2 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080104EE;
    r2 = 0x0U;
loc_080104EE:
    *(u8*)(r5 + 0x10) = (u8)r2;
    return sub_080104BC(r0, r1, r2, r3);
}

// ROM Address: 0x080104F2..0x08010574 (130 bytes, Thumb)
u32 sub_080104F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801050E;
    r0 = 0x240U; // (9 << 6)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08010502: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801050E;
    r0 = r4;
    return r0;
loc_0801050E:
    r3 = 0x1U;
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_080109AA(r0, r1, r2, r3); // 0x08010516
    r0 = 0x0804E1B4U /* &VTable_0804E1B4 */; // [0x08010580]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08010520: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010534;
    r1 = 0x0804D038U /* &VTable_0804D038 */; // [0x08010584]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08010534:
    r1 = r0;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08010538
    r1 = 0xFU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08010540
    r0 = r4;
    return r0;
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801054E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010562;
    r1 = 0x0804D038U /* &VTable_0804D038 */; // [0x08010584]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08010562:
    r1 = r0;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08010566
    return r0;
    r0 = sub_0800EF08(r0, r1, r2, r3); // 0x0801056E
    return r0;
}

// ROM Address: 0x08010574..0x08010576 (2 bytes, Thumb)
u32 sub_08010574(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0801058A..0x080107E4 (602 bytes, Thumb)
u32 sub_0801058A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x8);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u8*)(r0 + 0x14);
    r2 = (r1 << 1);
    r2 = r2 + r1;
    r1 = 0x086B82ECU; // [0x080107E8]
    r2 = (r2 << 3);
    r2 = r2 + r1;
    r2 = *(u8*)(r2);
    r2 = (r2 << 25);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080105D8;
    r2 = r0;
    r2 += 0x1EU;
    r3 = 0x0U;
loc_080105B6:
    *(u16*)(r2) = (u16)r3;
    r4 = *(u16*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_080105B6;
    r2 = r0;
    r2 += 0x20U;
loc_080105C2:
    *(u16*)(r2) = (u16)r3;
    r4 = *(u16*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_080105C2;
    r2 = *(u8*)(r0 + 0x14);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r2 = (r2 << 3);
    r2 = r2 + r1;
    r2 = *(u8*)(r2 + 0x17);
    *(u8*)(r0 + 0x14) = (u8)r2;
loc_080105D8:
    r0 = *(u8*)(r0 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x080105E2
    r1 = r0;
    r0 = 0x03001C34U; // [0x080107EC]
    r0 = *(u32*)(r0);
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x080105EC
    r1 = 0x0U;
    r0 = 0x0877C5A4U /* EventPoolRecord */; // [0x080107F0]
    r0 = sub_08012588(r0, r1, r2, r3); // 0x080105F4: BL 0x08012588
    return r0;
    r6 = r0;
    r0 = r1;
    r5 = r1;
    r1 = *(u32*)(r1);
    r4 = r2;
    r2 = *(u32*)(r1 + 0x5C);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801060C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010618;
    r0 = 0x1U;
    return r0;
loc_08010618:
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08010620;
    return r0;
loc_08010620:
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0xC);
    r3 = r2 + r1;
    r2 = r4;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801062C: BL __call_via_r3
    r0 = 0x0U;
    return r0;
    r1 = 0x200U; // (1 << 9)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010646: BL 0x08046AA2
    return r0;
    r1 = *(u32*)(r0);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r4 = r0;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010658: BL 0x08046AA2
    r5 = r0;
    r0 = 0x200U; // (1 << 9)
    r6 = r4 + r0;
    r0 = *(u32*)(r6 + 0x2C);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801066E: BL __call_via_r3
    r0 = *(u8*)(r5 + 0x14);
    r1 = 0x086B82ECU; // [0x080107E8]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801714A(r0, r1, r2, r3); // 0x0801067E
    *(u32*)(r6 + 0x2C) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801068C: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = *(u8*)(r1 + 0x14);
    r7 = 0x086B82ECU; // [0x080107E8]
    r5 = r1;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r7;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x080106A4
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x080106AC
    r0 = 0x200U; // (1 << 9)
    r6 = r4 + r0;
    r0 = *(u32*)(r6 + 0x2C);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080106C0: BL __call_via_r3
    r0 = *(u8*)(r5 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r7;
    r0 = sub_0801714A(r0, r1, r2, r3); // 0x080106CE
    *(u32*)(r6 + 0x2C) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080106DC: BL __call_via_r3
    r0 = r4;
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x080106E2
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080106F0: BL __call_via_r3
    return r0;
    r1 = 0x200U; // (1 << 9)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010708: BL 0x08046AA2
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801071C: BL 0x08046AA2
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x080107E8]
    r7 = 0x08072728U; // [0x080107E4]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 26);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801078E;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010740: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r5 = (r0 >> 8);
    r0 = 0x200U; // (1 << 9)
    r6 = r4 + r0;
    r0 = *(u32*)(r6 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010758: BL 0x08046AA2
    r0 = *(u32*)(r7 + 0x8);
    r2 = 0x4C0U; // (19 << 6)
    *(u8*)(r0) = (u8)r5;
    r0 = r0 + r2;
    r1 = 0x0U;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    r0 = *(u32*)(r7 + 0x8);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = r2;
    r1 += 0x38U;
    r1 = r0 + r1;
    r0 = r4;
    r0 = sub_08010692(r0, r1, r2, r3); // 0x0801077C
    r0 = *(u32*)(r6 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801078A: BL 0x08046AA2
loc_0801078E:
    r0 = 0xFFU;
    r0 += 0xCDU;
    r1 = 0x0U;
    *(u32*)(r0 + r4) = r1;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08010798: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080107A8;
    r1 = 0x5U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = 0x0804C768U /* &VTable_0804C768 */; // [0x080107F4]
    *(u32*)(r0) = (u32)r1;
loc_080107A8:
    r5 = r0;
    r1 = 0x11U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080107AE
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080107B6
    r0 = 0x8U;
    r4 = *(u32*)(r7 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080107BE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080107CE;
    r1 = 0xC8U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x080496BCU /* &VTable_080496BC */; // [0x080107F8]
    *(u32*)(r0) = (u32)r1;
loc_080107CE:
    r2 = r0;
    r0 = 0x610U; // (97 << 4)
    r0 = r4 + r0;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0;
}

// ROM Address: 0x080107E4..0x080107E6 (2 bytes, Thumb)
u32 sub_080107E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x28U;
    return r0;
}

// ROM Address: 0x080107E6..0x08010862 (124 bytes, Thumb)
u32 sub_080107E6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r5; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r7 = (r6 >> 1);
    *(u32*)r7 = r3; r7 += 4;
    *(u32*)r7 = r5; r7 += 4;
    *(u32*)r7 = r6; r7 += 4;
    r4 = (r0 >> 32);
    stack[188] = r6; // [sp + 0x2F0]
    r4 = (r0 >> 32);
    r0 = 0xFFU;
    r0 += 0xC9U;
    r0 = *(u32*)(r0 + r1);
    r2 = *(u8*)(r2);
    r4 = r1;
    r1 = 0x1U;
    r1 ^= r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08010862(r0, r1, r2, r3);
    r0 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08010862(r0, r1, r2, r3);
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x080727A0U; // [0x08010B44]
    r5 = r4;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r5 += 0x1A0U;
    r1 = *(u32*)(r5);
    r2 = *(u32*)r0; r0 += 4;
    r6 = r5 + 4;
    r1 = r1 + r2;
    r2 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r0);
    stack[0] = r1; // [sp + 0x0]
    r0 = r2 + r0;
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    r1 = stack[1]; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x080727A0U; // [0x08010B44]
    r2 = r5 - 4;
    stack[3] = r1; // [sp + 0xC]
    stack[5] = r1; // [sp + 0x14]
    r0 -= 0x78U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = 0x10; // sp + 0x10
    r0 = sub_080097EA(r0, r1, r2, r3); // 0x0801084E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801085E;
    r0 = stack[4]; // [sp + 0x10]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[5]; // [sp + 0x14]
    *(u32*)(r6) = (u32)r0;
loc_0801085E:
    return r0;
}

// ROM Address: 0x08010862..0x0801088A (40 bytes, Thumb)
u32 sub_08010862(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r4 + 0x10) = (u8)r1;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08010866: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010876;
    r1 = 0x3U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = 0x0804D75CU /* &VTable_0804D75C */; // [0x08010B48]
    *(u32*)(r0) = (u32)r1;
loc_08010876:
    r5 = r0;
    r1 = 0x9U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801087C
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08010884
    return sub_0801085E(r0, r1, r2, r3);
}

// ROM Address: 0x080108E8..0x080109C8 (224 bytes, Thumb)
u32 sub_080108E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x03002BFDU; // [0x08010B54]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = *(u8*)(r1);
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080108F6;
    r5 = 0x1U;
loc_080108F6:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010970;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010904: BL 0x08046AA2
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x08010908
    stack[27] = r0; // [sp + 0x6C]
    r0 = 0x0U;
    r0 = ~r0;
    stack[28] = r0; // [sp + 0x70]
    r0 = 0x5C; // sp + 0x5C
    r1 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08010918: BL 0x0800FDFA
    r0 = stack[23]; // [sp + 0x5C]
    r1 = stack[25]; // [sp + 0x64]
    r3 = stack[26]; // [sp + 0x68]
    r1 = r0 + r1;
    r0 = stack[24]; // [sp + 0x60]
    stack[21] = r1; // [sp + 0x54]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = r0 + r3;
    stack[22] = r0; // [sp + 0x58]
    r0 = ((u32)((s32)r0 >> 1));
    r2 = 0x03001010U; // [0x08010B58]
    stack[22] = r0; // [sp + 0x58]
    stack[21] = r1; // [sp + 0x54]
    *(u32*)(r2 + 0x4) = (u32)r0;
    *(u32*)(r2) = (u32)r1;
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0801093C
    r0 -= 0x20U;
    r1 = ((u32)((s32)r0 >> 31));
    r1 = (r1 >> 27);
    r0 = r1 + r0;
    r0 = ((u32)((s32)r0 >> 5));
    r1 = 0x03001018U; // [0x08010B5C]
    r0 = (r0 << 8);
    *(u32*)(r1) = (u32)r0;
    r4 = r1 + 4;
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08010954
    r0 -= 0x20U;
    r1 = ((u32)((s32)r0 >> 31));
    r1 = (r1 >> 27);
    r0 = r1 + r0;
    r0 = ((u32)((s32)r0 >> 5));
    r0 = (r0 << 8);
    *(u32*)(r4) = (u32)r0;
    r0 = sp;
    r1 = 0x08799D0CU /* EventPoolRecord */; // [0x08010B60]
    r2 = 0x6C; // sp + 0x6C
    r0 = sub_08004098(r0, r1, r2, r3); // 0x0801096C: BL 0x08004098
loc_08010970:
    return r0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801099A;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801098C: BL 0x08046AA2
    r1 = r0;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08010994
    return r0;
loc_0801099A:
    r0 = (r1 << 2);
    r1 = 0x080727A0U; // [0x08010B44]
    r1 -= 0x64U;
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080109A4
    return r0;
    r7 = r1;
    r6 = r3;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080109C8(r0, r1, r2, r3);
    r0 = 0x240U; // (9 << 6)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080109BC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080109C8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080109C8..0x08010A3A (114 bytes, Thumb)
u32 sub_080109C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r5;
    r1 = r7;
    r0 = r4;
    r2 = 0x03001B0CU; // [0x08010B64]
    r0 = sub_0800E6B8(r0, r1, r2, r3); // 0x080109D0
    r0 = 0x0804C9F0U /* &VTable_0804C9F0 */; // [0x08010B68]
    r2 = 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x228U; // (69 << 3)
    r1 = r4 + r0;
    r0 = 0x03001C34U; // [0x08010B6C]
    r2 = (r2 << 9);
    r5 = r4 + r2;
    *(u32*)(r0) = (u32)r4;
    r0 += 0x8U;
    *(u32*)(r5 + 0x24) = (u32)r0;
    r2 += 0x20U;
    r2 = r4 + r2;
    r0 = 0x0U;
    *(u16*)(r2 + 0x10) = (u16)r0;
    *(u32*)(r5 + 0x34) = (u32)r0;
    *(u32*)(r1) = (u32)r0;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010A36;
    r0 = 0x080727A0U; // [0x08010B44]
    r3 = 0x68U;
    r0 -= 0x78U;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x08010B70]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801714A(r0, r1, r2, r3); // 0x08010A1C
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08010A2A: BL __call_via_r3
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08010974(r0, r1, r2, r3); // 0x08010A32
loc_08010A36:
    r0 = r4;
    return sub_080109C6(r0, r1, r2, r3);
}

// ROM Address: 0x08010A3A..0x08010A5C (34 bytes, Thumb)
u32 sub_08010A3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r6 = r1;
    r5 = r0;
    r4 = r3;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08010A5C(r0, r1, r2, r3);
    r0 = 0x2A8U; // (85 << 3)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08010A4E: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08010A5C(r0, r1, r2, r3);
    r0 = r5;
    return r0;
}

// ROM Address: 0x08010A5C..0x08010B42 (230 bytes, Thumb)
u32 sub_08010A5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0U;
    r2 = r7;
    r1 = r6;
    r0 = r5;
    r0 = sub_080109AA(r0, r1, r2, r3); // 0x08010A64
    r0 = 0x0804DA88U /* &VTable_0804DA88 */; // [0x08010B74]
    r2 = 0x2U;
    *(u32*)(r5) = (u32)r0;
    r0 = 0x240U; // (9 << 6)
    r0 = r5 + r0;
    r1 = r0;
    r1 += 0x3AU;
    r6 = r0;
    r0 += 0x2EU;
    r3 = 0x08050869U; // [0x08010B78]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08010A7E: BL 0x08046FF4
    r1 = r6;
    r1 += 0x4CU;
    r2 = 0x4U;
    r0 = r6;
    r0 += 0x3CU;
    r3 = 0x08050535U; // [0x08010B7C]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08010A8E: BL 0x08046FF4
    r0 = r6;
    r0 += 0x56U;
    stack[8] = r0; // [sp + 0x20]
    r0 += 0x1U;
    stack[7] = r0; // [sp + 0x1C]
    r0 += 0x1U;
    stack[6] = r0; // [sp + 0x18]
    r0 += 0x2U;
    stack[5] = r0; // [sp + 0x14]
    r0 += 0x2U;
    stack[4] = r0; // [sp + 0x10]
    r0 += 0x2U;
    stack[3] = r0; // [sp + 0xC]
    r0 += 0x2U;
    stack[2] = r0; // [sp + 0x8]
    r0 += 0x2U;
    stack[1] = r0; // [sp + 0x4]
    r7 = r0 + 2;
    r2 = 0x56U;
    r1 = r4;
    r0 = r6;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x08010ABC: BL 0x08046DD0
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r4);
    r0 = stack[8]; // [sp + 0x20]
    r3 = r4;
    *(u8*)(r0) = (u8)r1;
    r1 = 0x57U;
    r1 = *(u8*)(r1 + r4);
    r0 = stack[7]; // [sp + 0x1C]
    r3 += 0x40U;
    *(u8*)(r0) = (u8)r1;
    r1 = 0x58U;
    r1 = *(u16*)(r1 + r4);
    r0 = stack[6]; // [sp + 0x18]
    *(u16*)(r0) = (u16)r1;
    r1 = 0x5AU;
    r1 = *(u16*)(r1 + r4);
    r0 = stack[5]; // [sp + 0x14]
    *(u16*)(r0) = (u16)r1;
    r1 = 0x5CU;
    r1 = *(u16*)(r1 + r4);
    r0 = stack[4]; // [sp + 0x10]
    *(u16*)(r0) = (u16)r1;
    r1 = 0x5EU;
    r1 = *(u16*)(r1 + r4);
    r0 = stack[3]; // [sp + 0xC]
    *(u16*)(r0) = (u16)r1;
    r1 = 0x60U;
    r1 = *(u16*)(r1 + r4);
    r0 = stack[2]; // [sp + 0x8]
    *(u16*)(r0) = (u16)r1;
    r1 = 0x62U;
    r1 = *(u16*)(r1 + r4);
    r0 = stack[1]; // [sp + 0x4]
    *(u16*)(r0) = (u16)r1;
    r0 = 0x64U;
    r0 = *(u16*)(r0 + r4);
    r1 = 0x086B82ECU; // [0x08010B70]
    *(u16*)(r7) = (u16)r0;
    r0 = *(u16*)(r3 + 0x26);
    r3 = r6;
    r3 += 0x40U;
    *(u16*)(r3 + 0x26) = (u16)r0;
    r0 = *(u8*)(r6 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801714A(r0, r1, r2, r3); // 0x08010B1E
    r1 = 0x200U; // (1 << 9)
    r1 = r5 + r1;
    *(u32*)(r1 + 0x2C) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08010B32: BL __call_via_r3
    r1 = 0x0U;
    r0 = r5;
    r0 = sub_08010974(r0, r1, r2, r3); // 0x08010B3A
    r0 = r5;
    return sub_08010A58(r0, r1, r2, r3);
}

// ROM Address: 0x08010B42..0x08010C14 (210 bytes, Thumb)
u32 sub_08010B42(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r7 = 0xA0U;
    r7 = (r0 >> 32);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08010C04;
    r4 = (r0 >> 32);
    *(u32*)r7 = r3; r7 += 4;
    *(u32*)r7 = r5; r7 += 4;
    *(u32*)r7 = r6; r7 += 4;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r3; cmp_rhs = 252;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r3; cmp_rhs = 253;
    r0 = (r0 << 12);
    r0 = ((u32)((s32)r2 >> 32));
    r0 = (r0 << 12);
    r0 = ((u32)((s32)r3 >> 32));
    r0 = (r0 << 12);
    r5 = stack[12]; // [sp + 0x30]
    r1 = (r7 >> 1);
    r4 = r1 - r4;
    r0 = (r0 << 12);
    r4 = *(u32*)r1; r1 += 4;
    r5 = *(u32*)r1; r1 += 4;
    r6 = *(u32*)r1; r1 += 4;
    r7 = *(u32*)r1; r1 += 4;
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    if (cmp_lhs >= cmp_rhs) return sub_08010A88(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = (r5 >> 1);
    r5 = (r0 >> 32);
    r5 = (r6 << 20);
    r5 = (r0 >> 32);
    r4 = r0;
    r0 = 0x0804C9F0U /* &VTable_0804C9F0 */; // [0x08010F28]
    r5 = r1;
    r1 = 0x03001C34U; // [0x08010F2C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08010BA0: BL __call_via_r3
    r1 = 0x0U;
    r0 = r4;
    r0 = Object_Destroy5(r0, r1, r2, r3); // 0x08010BA8: BL 0x0800E6F8
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010BB6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08010BB2: BL 0x0803D63C
loc_08010BB6:
    return r0;
    r5 = r1;
    r1 = 0x200U; // (1 << 9)
    r4 = r0 + r1;
    r0 = *(u32*)(r4 + 0x24);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010BCA: BL 0x08046AA2
    *(u32*)(r4 + 0x24) = (u32)r5;
    return r0;
    r4 = r0;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08010BE6: BL __call_via_r3
    r0 = r4;
    r0 = sub_0800EF08(r0, r1, r2, r3); // 0x08010BEC
    return r0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E8E6(r0, r1, r2, r3); // 0x08010BF8
    r0 = 0x03001C34U; // [0x08010F2C]
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08010C10;
loc_08010C04:
    r6 = r5;
    r0 = *(u32*)(r5 + 0x18);
    r6 += 0x18U;
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08010C14(r0, r1, r2, r3);
loc_08010C10:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08010C14..0x08010C9C (136 bytes, Thumb)
u32 sub_08010C14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010C1E: BL 0x08046AA2
    r5 = r0;
    r5 += 0x16U;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r5 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08010C32;
    r0 = 0x1U;
    return sub_08010C12(r0, r1, r2, r3);
loc_08010C32:
    r1 = 0x228U; // (69 << 3)
    r2 = r4 + r1;
    r1 = *(u32*)(r2);
    r3 = *(u32*)(r6);
    r1 = r1 + r3;
    r3 = r1;
    *(u32*)(r2) = (u32)r1;
    r1 = ((u32)((s32)r1 >> 10));
    if (cmp_lhs != cmp_rhs) goto loc_08010C4A;
    r0 = 0x0U;
    return sub_08010C12(r0, r1, r2, r3);
loc_08010C4A:
    r6 = (r1 << 10);
    r3 = r3 - r6;
    *(u32*)(r2) = (u32)r3;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r5 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08010C64;
loc_08010C58:
    *(u16*)(r5) = (u16)r7;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r5 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_08010C58;
    goto loc_08010C76;
loc_08010C64:
    r2 = *(u16*)(r5);
    r1 = r2 - r1;
    r1 = (r1 << 16);
    r1 = ((u32)((s32)r1 >> 16));
loc_08010C6C:
    *(u16*)(r5) = (u16)r1;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r5 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08010C6C;
loc_08010C76:
    r1 = *(u8*)(r0 + 0x13);
    r1 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08010C80;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x08010C7C
loc_08010C80:
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r5 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010C8C;
    r0 = 0x0U;
    return sub_08010C12(r0, r1, r2, r3);
loc_08010C8C:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x7C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010C94: BL 0x08046AA2
    r0 = 0x1U;
    return sub_08010C12(r0, r1, r2, r3);
}

// ROM Address: 0x08010CA4..0x08010CD0 (44 bytes, Thumb)
u32 sub_08010CA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x24);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x4);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08010CAE: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x24);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2);
    r3 = r3 + r2;
    r2 = r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08010CCA: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08010CD0..0x08010D08 (56 bytes, Thumb)
u32 sub_08010CD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E97E(r0, r1, r2, r3); // 0x08010CD6
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010CE4: BL 0x08046AA2
    r1 = r0;
    r3 = 0x000003FFU; // [0x08010F30]
    r2 = *(u32*)(r5);
    r1 += 0x16U;
    r2 = r2 + r3;
    r2 = ((u32)((s32)r2 >> 10));
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r1 + r3));
    r4 = r4 + r2;
    r3 = 0x2U;
    r5 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) return sub_08010D08(r0, r1, r2, r3);
    r2 = *(u16*)(r1 + 0x2);
    *(u16*)(r1) = (u16)r2;
    return sub_08010D1A(r0, r1, r2, r3);
}

// ROM Address: 0x08010D08..0x08010D58 (80 bytes, Thumb)
u32 sub_08010D08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u16*)(r1);
    r2 = r3 + r2;
    r2 = (r2 << 16);
    r2 = ((u32)((s32)r2 >> 16));
loc_08010D10:
    *(u16*)(r1) = (u16)r2;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08010D10;
    r1 = *(u8*)(r0 + 0x13);
    r1 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08010D24;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x08010D20
loc_08010D24:
    return r0;
    r4 = r0;
    r5 = r1;
    if (cmp_lhs != cmp_rhs) return sub_08010D5C(r0, r1, r2, r3);
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08010D3E: BL 0x08046AA2
    r1 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08010D58(r0, r1, r2, r3);
    r1 = r5;
    r0 = r4;
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x08010D4C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08010D58(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08010D58..0x08010D7C (36 bytes, Thumb)
u32 sub_08010D58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08010D56(r0, r1, r2, r3);
    r1 = 0x0807273CU; // [0x08010F34]
    r0 = (r5 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08010D78;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x08010D6C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08010D78;
    r0 = 0x1U;
    return sub_08010D56(r0, r1, r2, r3);
loc_08010D78:
    r0 = 0x0U;
    return sub_08010D56(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_table_clear_slot1_clears_the_slot_word_and_calls_the_two_record_helpers runs it on a crafted object at 0x02000000 and asserts the one store it makes and the 2 call targets; clears the slot word at +0x1CC and then selects and copies through the two record helpers
// ROM Address: 0x08010D7C..0x08010DBA (62 bytes, Thumb)
u32 Table_ClearSlot1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r1 = 0xFFU;
    r1 += 0xCDU;
    r0 = 0x0U;
    *(u32*)(r1 + r4) = r0;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08010D8C
    r1 = 0x03002B54U; // [0x08010F38]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08010D94
    return r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08010DA4: BL __call_via_r3
    return r0;
    r0 = 0x03001C34U; // [0x08010F2C]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08010DBA(r0, r1, r2, r3);
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x08010DB4
    return r0;
}

// ROM Address: 0x08010DBA..0x08010DD8 (30 bytes, Thumb)
u32 sub_08010DBA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0807273CU; // [0x08010F34]
    r1 = 0x2FU;
    r0 -= 0x14U;
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 6);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08010DB8(r0, r1, r2, r3);
    r2 = 0x0U;
    r1 = 0x9U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08010DD0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08010DB8(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08010DDE..0x08010E1A (60 bytes, Thumb)
u32 sub_08010DDE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 += 0xFFU;
    r5 = r2;
    r2 = 0x0807273CU; // [0x08010F34]
    r0 += 0xC1U;
    r7 = r1;
    r1 = 0x9FU;
    stack[4] = r0; // [sp + 0x10]
    r1 = (r1 << 3);
    r2 -= 0x14U;
    cmp_lhs = (s32)r7; cmp_rhs = 10;
    r0 = 0x086B82ECU; // [0x08010F3C]
    if (cmp_lhs == cmp_rhs) return sub_08010ECA(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_08010E1A(r0, r1, r2, r3);
    r6 = r5;
    r6 += 0x14U;
    r0 = r5 + 4;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08010EEC(r0, r1, r2, r3);
    cmp_lhs = (s32)r7; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08010EEE(r0, r1, r2, r3);
    cmp_lhs = (s32)r7; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08010EF0(r0, r1, r2, r3);
    cmp_lhs = (s32)r7; cmp_rhs = 9;
    if (cmp_lhs != cmp_rhs) return sub_08010EF2(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08010E1A..0x08010EF4 (218 bytes, Thumb)
u32 sub_08010E1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_08010EF4(r0, r1, r2, r3);
    cmp_lhs = (s32)r7; cmp_rhs = 26;
    if (cmp_lhs == cmp_rhs) return sub_08010EF6(r0, r1, r2, r3);
    cmp_lhs = (s32)r7; cmp_rhs = 40;
    if (cmp_lhs != cmp_rhs) goto loc_08010EF2;
    r1 = r4;
    r6 = *(u32*)r5; r5 += 4;
    r7 = *(u32*)r5; r5 += 4;
    r5 -= 0x8U;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08010E2E
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) goto loc_08010E42;
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08010E3C
    r6 = stack[0]; // [sp + 0x0]
loc_08010E42:
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08010E46
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08010E5A;
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08010E54
    r6 = stack[2]; // [sp + 0x8]
loc_08010E5A:
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08010E5E
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_08010E72;
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08010E6C
    r7 = stack[1]; // [sp + 0x4]
loc_08010E72:
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08010E76
    r0 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08010E8A;
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08010E84
    r7 = stack[3]; // [sp + 0xC]
loc_08010E8A:
    r0 = *(u32*)(r5);
    r0 = r0 - r6;
    r1 = r0;
    r0 *= r1;
    r1 = *(u32*)(r5 + 0x4);
    r1 = r1 - r7;
    r2 = r1;
    r1 *= r2;
    r1 = r0 + r1;
    r0 = *(u32*)(r5 + 0x8);
    r2 = r0;
    r0 *= r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) return sub_08010F8C(r0, r1, r2, r3);
    r0 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08010F8C(r0, r1, r2, r3);
    r5 += 0xCU;
    r1 = r5;
    r0 = r4;
    r0 = Battle_ComputeDamage(r0, r1, r2, r3); // 0x08010EB4: BL 0x0800E9D8
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x58);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08010EC2: BL __call_via_r3
    r0 = 0x1U;
    return sub_08010E16(r0, r1, r2, r3);
    goto loc_08010ECC;
loc_08010ECC:
    r2 = *(u32*)(r2 + 0x8);
    r3 = 0x68U;
    r6 = *(u8*)(r2);
    r3 *= r6;
    r2 = r3 + r2;
    r1 = r2 + r1;
    r1 = *(u8*)(r1 + 0x14);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r0 = r1 + r0;
    r0 = sub_0801712C(r0, r1, r2, r3); // 0x08010EE2
    r0 = 0x0U;
    r1 = 0x03001C34U; // [0x08010F2C]
    return sub_08010EF8(r0, r1, r2, r3);
    return sub_08010F40(r0, r1, r2, r3);
    return sub_08010F9E(r0, r1, r2, r3);
    return sub_08011014(r0, r1, r2, r3);
loc_08010EF2:
    return sub_08010F1A(r0, r1, r2, r3);
}

// ROM Address: 0x08010F1A..0x08010F26 (12 bytes, Thumb)
u32 sub_08010F1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r5;
    r1 = r7;
    r0 = r4;
    r0 = sub_080102D8(r0, r1, r2, r3); // 0x08010F20: BL 0x080102D8
    return sub_08010E16(r0, r1, r2, r3);
}

// ROM Address: 0x08011050..0x08011070 (32 bytes, Thumb)
u32 sub_08011050(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0801155C(r0, r1, r2, r3); // 0x08011052
    return r0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080110CE(r0, r1, r2, r3);
    r0 = *(u32*)(r2 + 0x20);
    r5 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) return sub_08011070(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08011070..0x080110D0 (96 bytes, Thumb)
u32 sub_08011070(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0801107A;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_080110CA;
loc_0801107A:
    r6 = r5 + 4;
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08011080
    r0 = *(u32*)(r6);
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080110CA;
    r0 = stack[0]; // [sp + 0x0]
    r1 = *(u32*)(r6 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080110CA;
    r0 = *(u32*)(r6 + 0x4);
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080110CA;
    r0 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r6 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080110CA;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080110CA;
    r5 += 0x14U;
    r1 = r5;
    r0 = r4;
    r0 = Battle_ComputeDamage(r0, r1, r2, r3); // 0x080110B4: BL 0x0800E9D8
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x58);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080110C2: BL __call_via_r3
    r0 = 0x1U;
    return sub_0801106C(r0, r1, r2, r3);
loc_080110CA:
    r0 = 0x0U;
    return sub_0801106C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080110D8..0x080110FA (34 bytes, Thumb)
u32 sub_080110D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r6 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = stack[10]; // [sp + 0x28]
    if (cmp_lhs != cmp_rhs) return sub_080110FA(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xBDU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080110EC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080110FA(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080110FA..0x0801111C (34 bytes, Thumb)
u32 sub_080110FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r6;
    r0 = r4;
    stack[0] = r5; // [sp + 0x0]
    r2 = 0x03001B0CU; // [0x080111F4]
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_0800FD74(r0, r1, r2, r3); // 0x08011104
    r0 = 0x0804CEF4U /* &VTable_0804CEF4 */; // [0x080111F8]
    r1 = r7;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x1B0U;
    r0 = sub_0800A93C(r0, r1, r2, r3); // 0x08011114: BL 0x0800A93C
    r0 = r4;
    return sub_080110F6(r0, r1, r2, r3);
}

// ROM Address: 0x0801111C..0x0801113C (32 bytes, Thumb)
u32 sub_0801111C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801113C(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xBDU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801112E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801113C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801113C..0x08011162 (38 bytes, Thumb)
u32 sub_0801113C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r2 = ~r2;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    r1 = r6;
    r0 = r4;
    r2 = 0x03001B0CU; // [0x080111F4]
    r0 = sub_0800FD74(r0, r1, r2, r3); // 0x0801114A
    r0 = 0x0804CEF4U /* &VTable_0804CEF4 */; // [0x080111F8]
    r1 = 0x080727C0U; // [0x080111FC]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x1B0U;
    r0 = sub_0800A93C(r0, r1, r2, r3); // 0x0801115A: BL 0x0800A93C
    r0 = r4;
    return sub_08011138(r0, r1, r2, r3);
}

// ROM Address: 0x08011162..0x0801118E (44 bytes, Thumb)
u32 sub_08011162(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080727C0U; // [0x080111FC]
    r1 = (r1 << 2);
    r2 += 0x8U;
    r1 = *(u32*)(r2 + r1);
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801116C
    return r0;
    r3 = 0x080727C0U; // [0x080111FC]
    r2 = (r1 << 2);
    r3 += 0x8U;
    r2 = *(u32*)(r3 + r2);
    r3 = *(u32*)(r0 + 0x14);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_0801118E(r0, r1, r2, r3);
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x08011182
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801118E(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801118E..0x08011192 (4 bytes, Thumb)
u32 sub_0801118E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0801118C(r0, r1, r2, r3);
}

// ROM Address: 0x08011192..0x080111D0 (62 bytes, Thumb)
u32 sub_08011192(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r1 = r0;
    r0 += 0x1B0U;
    r0 = sub_0800A95A(r0, r1, r2, r3); // 0x0801119C
    r0 = r4;
    r0 = sub_0800EF08(r0, r1, r2, r3); // 0x080111A2
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080111B0: BL 0x08000158
    r6 = r0;
    r7 = r4;
    r5 = r4;
    r5 += 0x8U;
    r7 += 0x10U;
    r0 = 0xFFU;
    r0 += 0xBDU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080111C2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080111D0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080111D0..0x080111FC (44 bytes, Thumb)
u32 sub_080111D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[2]; // [sp + 0x8]
    r3 = r5;
    r1 = r6;
    stack[0] = r2; // [sp + 0x0]
    r2 = 0x03001B0CU; // [0x080111F4]
    r0 = r4;
    r0 = sub_0800FD74(r0, r1, r2, r3); // 0x080111DC
    r0 = 0x0804CEF4U /* &VTable_0804CEF4 */; // [0x080111F8]
    r1 = r7;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x1B0U;
    r0 = sub_0800A93C(r0, r1, r2, r3); // 0x080111EC: BL 0x0800A93C
    r0 = r4;
    return sub_080111CC(r0, r1, r2, r3);
    r4 = r1 - r4;
    r0 = (r0 << 12);
    r2 = *(u32*)r6; r6 += 4;
    r4 = *(u32*)r6; r6 += 4;
    r5 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    r7 = *(u32*)r6; r6 += 4;
    r4 = (r0 >> 32);
    return r0;
}

// Evidence: tools/behaviour/test_table.py::test_table_unlink1_unlinks_the_record_from_its_two_neighbours runs it on a crafted object at 0x02000000 and asserts the 2 stores it makes; unlinks the 10-byte record the index names from its two neighbour link bytes
// ROM Address: 0x08011200..0x0801140A (522 bytes, Thumb)
u32 Table_Unlink1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r1 << 2);
    r2 = r2 + r1;
    r3 = 0x00000694U; // [0x08011554]
    r2 = (r2 << 1);
    r2 = r2 + r0;
    r2 = r2 + r3;
    r5 = r3 - 4;
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r3 = r5 + 4;
    r4 = *(u8*)(r2 + 0x9);
    r1 = r1 + r3;
    r1 = *(u8*)(r1 + 0x8);
    cmp_lhs = (s32)r4; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_08011228;
    *(u8*)(r0) = (u8)r1;
    goto loc_08011234;
loc_08011228:
    r3 = (r4 << 2);
    r3 = r3 + r4;
    r3 = (r3 << 1);
    r3 = r3 + r0;
    r3 = r3 + r5;
    *(u8*)(r3 + 0xC) = (u8)r1;
loc_08011234:
    r1 = *(u8*)(r2 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_08011248;
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r1 = (r1 << 1);
    r2 = *(u8*)(r2 + 0x9);
    r0 = r1 + r0;
    r0 = r0 + r5;
    *(u8*)(r0 + 0xD) = (u8)r2;
loc_08011248:
    return r0; // BX lr
    r4 = r0;
    r5 = *(u8*)(r4);
    r0 = ((u32)((s32)r1 >> 6));
    r7 = 0xFFU;
    cmp_lhs = (s32)r5; cmp_rhs = 255;
    r1 = 0x7FFFFFFFU /* &INT_MAX */; // [0x08011558]
    if (cmp_lhs == cmp_rhs) goto loc_080112A2;
    r2 = 0x00000694U; // [0x08011554]
loc_0801125E:
    r3 = (r5 << 2);
    r3 = r3 + r5;
    r3 = (r3 << 1);
    r3 = r3 + r4;
    r6 = r3 + r2;
    r3 = *(u16*)(r6 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08011298;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08011290;
    r2 = 0x1U;
    r1 = r5;
    r0 = r4;
    *(u8*)(r6) = (u8)r2;
    r0 = Table_Unlink1(r0, r1, r2, r3); // 0x0801127A: BL 0x08011200
    r0 = *(u16*)(r6 + 0x2);
    r1 = 0xC00U; // (3 << 10)
    r0 = r0 + r4;
    r0 = r0 + r1;
    *(u8*)(r0) = (u8)r5;
    r0 = *(u16*)(r6 + 0x2);
    r0 = (r0 << 1);
    return r0;
loc_08011290:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08011298;
    r7 = r5;
    r1 = r3;
loc_08011298:
    r5 = *(u8*)(r6 + 0x8);
    cmp_lhs = (s32)r5; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_0801125E;
    cmp_lhs = (s32)r7; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_080112A8;
loc_080112A2:
    r0 = 0x0U;
    r0 = ~r0;
    return r0;
loc_080112A8:
    r1 = (r7 << 2);
    r1 = r1 + r7;
    r1 = (r1 << 1);
    r1 = r1 + r4;
    r5 = r1 + r2;
    r1 = *(u8*)(r4 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_080112D6;
    r2 = 0x1U;
    r1 = r7;
    r0 = r4;
    *(u8*)(r5) = (u8)r2;
    r0 = Table_Unlink1(r0, r1, r2, r3); // 0x080112C0: BL 0x08011200
    r0 = *(u16*)(r5 + 0x2);
    r1 = 0xC00U; // (3 << 10)
    r0 = r0 + r4;
    r0 = r0 + r1;
    *(u8*)(r0) = (u8)r7;
    r0 = *(u16*)(r5 + 0x2);
    r0 = (r0 << 1);
    return r0;
loc_080112D6:
    r12 = r1;
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r1 = (r1 << 1);
    r1 = r1 + r4;
    r1 = r1 + r2;
    r3 = *(u8*)(r1 + 0x6);
    *(u8*)(r4 + 0x1) = (u8)r3;
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_080112FE;
    r6 = r3;
    r3 = (r6 << 2);
    r3 = r3 + r6;
    r3 = (r3 << 1);
    r6 = 0x690U; // (105 << 4)
    r3 = r3 + r4;
    r2 = 0xFFU;
    r3 = r3 + r6;
    *(u8*)(r3 + 0xB) = (u8)r2;
loc_080112FE:
    *(u8*)(r1 + 0x7) = (u8)r7;
    r2 = *(u8*)(r5 + 0x6);
    *(u8*)(r1 + 0x6) = (u8)r2;
    r2 = *(u8*)(r5 + 0x6);
    cmp_lhs = (s32)r2; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_0801131C;
    r3 = (r2 << 2);
    r2 = r3 + r2;
    r2 = (r2 << 1);
    r3 = 0x690U; // (105 << 4)
    r2 = r2 + r4;
    r2 = r2 + r3;
    r6 = r12;
    *(u8*)(r2 + 0xB) = (u8)r6;
loc_0801131C:
    r6 = r12;
    *(u8*)(r5 + 0x6) = (u8)r6;
    r2 = *(u16*)(r5 + 0x4);
    r2 = r2 - r0;
    *(u16*)(r5 + 0x4) = (u16)r2;
    r2 = 0x1U;
    *(u8*)(r1) = (u8)r2;
    r2 = *(u16*)(r5 + 0x2);
    r3 = *(u16*)(r5 + 0x4);
    r2 = r2 + r3;
    *(u16*)(r1 + 0x2) = (u16)r2;
    *(u16*)(r1 + 0x4) = (u16)r0;
    r0 = *(u16*)(r1 + 0x2);
    r2 = 0xC00U; // (3 << 10)
    r0 = r0 + r4;
    r0 = r0 + r2;
    *(u8*)(r0) = (u8)r6;
    r0 = *(u16*)(r1 + 0x2);
    r0 = (r0 << 1);
    return r0;
    r2 = (r1 << 2);
    r2 = r2 + r1;
    r2 = (r2 << 1);
    r3 = 0x00000694U; // [0x08011554]
    r2 = r2 + r0;
    r2 = r2 + r3;
    r3 = 0x0U;
    *(u8*)(r2) = (u8)r3;
    r3 = 0xFFU;
    *(u8*)(r2 + 0x9) = (u8)r3;
    r3 = *(u8*)(r0);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    *(u8*)(r2 + 0x8) = (u8)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08011378;
    r2 = r3;
    r3 = (r2 << 2);
    r2 = r3 + r2;
    r2 = (r2 << 1);
    r3 = 0x690U; // (105 << 4)
    r2 = r2 + r0;
    r2 = r2 + r3;
    *(u8*)(r2 + 0xD) = (u8)r1;
loc_08011378:
    *(u8*)(r0) = (u8)r1;
    return r0; // BX lr
    r2 = (r1 << 2);
    r2 = r2 + r1;
    r2 = (r2 << 1);
    r3 = 0x00000694U; // [0x08011554]
    r2 = r2 + r0;
    r2 = r2 + r3;
    r3 = 0xFFU;
    *(u8*)(r2) = (u8)r3;
    *(u8*)(r2 + 0x7) = (u8)r3;
    r3 = *(u8*)(r0 + 0x1);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    *(u8*)(r2 + 0x6) = (u8)r3;
    if (cmp_lhs == cmp_rhs) goto loc_080113AC;
    r2 = r3;
    r3 = (r2 << 2);
    r2 = r3 + r2;
    r2 = (r2 << 1);
    r3 = 0x690U; // (105 << 4)
    r2 = r2 + r0;
    r2 = r2 + r3;
    *(u8*)(r2 + 0xB) = (u8)r1;
loc_080113AC:
    *(u8*)(r0 + 0x1) = (u8)r1;
    return r0; // BX lr
    r3 = (r1 << 2);
    r3 = r3 + r1;
    r4 = 0x00000694U; // [0x08011554]
    r3 = (r3 << 1);
    r3 = r3 + r0;
    r5 = r3 + r4;
    r3 = (r2 << 2);
    r3 = r3 + r2;
    r3 = (r3 << 1);
    r3 = r3 + r0;
    r4 = r3 + r4;
    r6 = *(u16*)(r4 + 0x4);
    r3 = *(u16*)(r5 + 0x4);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r3 = r3 + r6;
    *(u16*)(r5 + 0x4) = (u16)r3;
    r3 = *(u8*)(r4 + 0x6);
    r6 = 0x690U; // (105 << 4)
    *(u8*)(r5 + 0x6) = (u8)r3;
    r3 = *(u8*)(r4 + 0x6);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_080113F0;
    r7 = r3;
    r3 = (r7 << 2);
    r3 = r3 + r7;
    r3 = (r3 << 1);
    r3 = r3 + r0;
    r3 = r3 + r6;
    *(u8*)(r3 + 0xB) = (u8)r1;
loc_080113F0:
    r3 = *(u8*)(r4 + 0x9);
    *(u8*)(r5 + 0x9) = (u8)r3;
    r3 = *(u8*)(r4 + 0x9);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) return sub_0801140A(r0, r1, r2, r3);
    r7 = r3;
    r3 = (r7 << 2);
    r3 = r3 + r7;
    r3 = (r3 << 1);
    r3 = r3 + r0;
    r3 = r3 + r6;
    *(u8*)(r3 + 0xC) = (u8)r1;
    return sub_0801140C(r0, r1, r2, r3);
}

// ROM Address: 0x0801140A..0x0801140C (2 bytes, Thumb)
u32 sub_0801140A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r0) = (u8)r1;
    return r0;
}

// ROM Address: 0x0801140C..0x080114C0 (180 bytes, Thumb)
u32 sub_0801140C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u8*)(r4 + 0x8);
    *(u8*)(r5 + 0x8) = (u8)r3;
    r3 = *(u8*)(r4 + 0x8);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_08011424;
    r4 = r3;
    r3 = (r4 << 2);
    r3 = r3 + r4;
    r3 = (r3 << 1);
    r3 = r3 + r0;
    r3 = r3 + r6;
    *(u8*)(r3 + 0xD) = (u8)r1;
loc_08011424:
    r1 = r2;
    return sub_0801137C(r0, r1, r2, r3);
    r4 = r0;
    r0 = ((u32)((s32)r1 >> 1));
    r1 = 0xC00U; // (3 << 10)
    r0 = r4 + r0;
    r0 = r0 + r1;
    r6 = *(u8*)(r0);
    r0 = (r6 << 2);
    r0 = r0 + r6;
    r0 = (r0 << 1);
    r1 = r0 + r4;
    r0 = 0x00000694U; // [0x08011554]
    r5 = r1 + r0;
    r1 = 0x0U;
    *(u8*)(r5) = (u8)r1;
    r1 = *(u8*)(r5 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) return sub_08011514(r0, r1, r2, r3);
    r2 = (r1 << 2);
    r2 = r2 + r1;
    r2 = (r2 << 1);
    r2 = r2 + r4;
    r2 = r2 + r0;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u8*)(r5 + 0x7);
    cmp_lhs = (s32)r2; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) return sub_080114F6(r0, r1, r2, r3);
    r3 = (r2 << 2);
    r2 = r3 + r2;
    r2 = (r2 << 1);
    r2 = r2 + r4;
    r7 = r2 + r0;
    r2 = stack[0]; // [sp + 0x0]
    r0 = *(u8*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u8*)(r7);
    if (cmp_lhs != cmp_rhs) return sub_080114CC(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080114C0(r0, r1, r2, r3);
    r0 = r4;
    r0 = Table_Unlink1(r0, r1, r2, r3); // 0x0801147C: BL 0x08011200
    r0 = *(u16*)(r5 + 0x4);
    r2 = stack[0]; // [sp + 0x0]
    r1 = *(u16*)(r2 + 0x4);
    r0 = r0 + r1;
    r1 = *(u16*)(r7 + 0x4);
    r0 = r0 + r1;
    *(u16*)(r7 + 0x4) = (u16)r0;
    r2 = stack[0]; // [sp + 0x0]
    r0 = *(u8*)(r2 + 0x6);
    *(u8*)(r7 + 0x6) = (u8)r0;
    r2 = stack[0]; // [sp + 0x0]
    r1 = *(u8*)(r2 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_080114AE;
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r1 = (r1 << 1);
    r0 = *(u8*)(r5 + 0x7);
    r2 = 0x690U; // (105 << 4)
    r1 = r1 + r4;
    r1 = r1 + r2;
    *(u8*)(r1 + 0xB) = (u8)r0;
loc_080114AE:
    r1 = *(u8*)(r5 + 0x6);
    r0 = r4;
    r0 = sub_0801137C(r0, r1, r2, r3); // 0x080114B2
    r1 = r6;
    r0 = r4;
    r0 = sub_0801137C(r0, r1, r2, r3); // 0x080114BA
    return r0;
}

// ROM Address: 0x080114C0..0x08011552 (146 bytes, Thumb)
u32 sub_080114C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = r6;
    r0 = r4;
    r0 = sub_080113B0(r0, r1, r2, r3); // 0x080114C6
    return sub_080114BE(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080114EC;
    r0 = *(u16*)(r7 + 0x4);
    r1 = *(u16*)(r5 + 0x4);
    r0 = r0 + r1;
    *(u16*)(r7 + 0x4) = (u16)r0;
    r0 = *(u8*)(r5 + 0x6);
    r1 = r6;
    *(u8*)(r7 + 0x6) = (u8)r0;
    r0 = *(u8*)(r5 + 0x7);
    r2 = stack[0]; // [sp + 0x0]
    *(u8*)(r2 + 0x7) = (u8)r0;
    r0 = r4;
    r0 = sub_0801137C(r0, r1, r2, r3); // 0x080114E6
    return sub_080114BE(r0, r1, r2, r3);
loc_080114EC:
    r1 = r6;
    r0 = r4;
    r0 = sub_08011346(r0, r1, r2, r3); // 0x080114F0
    return sub_080114BE(r0, r1, r2, r3);
    r2 = stack[0]; // [sp + 0x0]
    r0 = *(u8*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801150A;
    r2 = r1;
    r1 = r6;
    r0 = r4;
    r0 = sub_080113B0(r0, r1, r2, r3); // 0x08011504
    return sub_080114BE(r0, r1, r2, r3);
loc_0801150A:
    r1 = r6;
    r0 = r4;
    r0 = sub_08011346(r0, r1, r2, r3); // 0x0801150E
    return sub_080114BE(r0, r1, r2, r3);
    r2 = *(u8*)(r5 + 0x7);
    r1 = 0xFFU;
    cmp_lhs = (s32)r2; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_0801154A;
    r3 = (r2 << 2);
    r2 = r3 + r2;
    r2 = (r2 << 1);
    r2 = r2 + r4;
    r0 = r2 + r0;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08011540;
    r2 = *(u16*)(r0 + 0x4);
    r3 = *(u16*)(r5 + 0x4);
    r2 = r2 + r3;
    *(u16*)(r0 + 0x4) = (u16)r2;
    *(u8*)(r0 + 0x6) = (u8)r1;
    r1 = r6;
    r0 = r4;
    r0 = sub_0801137C(r0, r1, r2, r3); // 0x0801153A
    return sub_080114BE(r0, r1, r2, r3);
loc_08011540:
    r1 = r6;
    r0 = r4;
    r0 = sub_08011346(r0, r1, r2, r3); // 0x08011544
    return sub_080114BE(r0, r1, r2, r3);
loc_0801154A:
    *(u8*)(r4) = (u8)r6;
    *(u8*)(r5 + 0x8) = (u8)r1;
    *(u8*)(r5 + 0x9) = (u8)r1;
    return sub_080114BE(r0, r1, r2, r3);
}

// ROM Address: 0x0801155A..0x08011564 (10 bytes, Thumb)
u32 sub_0801155A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = *(u8*)(r7 + 0x1F);
    cmp_lhs = (s32)r1; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) return sub_08011564(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x08011564..0x08011568 (4 bytes, Thumb)
u32 sub_08011564(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// Evidence: tools/behaviour/test_table.py::test_handle_release1_unregisters_the_handle_and_stores_0xffff runs it on a crafted object at 0x02000000 and asserts the one store it makes and the one call target; unregisters the handle at +0xC and stores 0xFFFF there
// ROM Address: 0x08011568..0x0801163A (210 bytes, Thumb)
u32 Handle_Release1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u16*)(r0 + 0xC);
    r4 = r0;
    r0 = 0x08072824U; // [0x0801180C]
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08011572
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0xC) = (u16)r0;
    return r0;
    r4 = r0;
    r0 = 0x08072824U; // [0x0801180C]
    r0 = *(u32*)(r0);
    r0 = sub_0803DA62(r0, r1, r2, r3); // 0x08011586
    r0 = 0x208U; // (65 << 3)
    r5 = r4 + r0;
    r4 = *(u32*)(r5);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080115AA;
loc_08011596:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080115A2: BL 0x08046AA2
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011596;
loc_080115AA:
    r0 = 0x0U;
    *(u32*)(r5) = (u32)r0;
    return r0;
    r1 = 0x0U;
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[132]; // [sp + 0x210]
    r7 = 0xC; // sp + 0xC
    r4 = *(u32*)(r1 + 0x4);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080115F2;
    r6 = stack[132]; // [sp + 0x210]
    r6 += 0x4U;
loc_080115C8:
    r0 = (r4 << 2);
    r5 = r0 + r6;
    r5 += 0x4U;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080115D6: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080115EE;
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[3]; // [sp + 0xC]
    r0 += 0x1U;
    stack[3] = r0; // [sp + 0xC]
    r0 = (r1 << 2);
    r1 = *(u32*)(r5);
    r0 = r0 + r7;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_080115EE:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080115C8;
loc_080115F2:
    r0 = stack[3]; // [sp + 0xC]
    r7 = 0xC; // sp + 0xC
    r6 = r7 + 4;
    r0 = (r0 << 2);
    r7 = r0 + r7;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_080116A2(r0, r1, r2, r3);
    r0 = r7 - r6;
    r0 = ((u32)((s32)r0 >> 3));
    r0 = (r0 << 2);
    r4 = r0 + r6;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) return sub_0801163A(r0, r1, r2, r3);
    r1 = r6;
    r0 = r4;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x08011610
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08011620;
    r0 = stack[4]; // [sp + 0x10]
    r1 = *(u32*)(r4);
    stack[4] = r1; // [sp + 0x10]
    *(u32*)(r4) = (u32)r0;
loc_08011620:
    r1 = r7;
    r0 = r6;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x08011624
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08011634;
    r0 = stack[4]; // [sp + 0x10]
    r1 = *(u32*)(r7);
    stack[4] = r1; // [sp + 0x10]
    *(u32*)(r7) = (u32)r0;
loc_08011634:
    r5 = r6;
    r4 = r7;
    return sub_08011650(r0, r1, r2, r3);
}

// ROM Address: 0x0801163A..0x08011650 (22 bytes, Thumb)
u32 sub_0801163A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r7;
    r0 = r6;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x0801163E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080116A2(r0, r1, r2, r3);
    r0 = stack[4]; // [sp + 0x10]
    r1 = *(u32*)(r7);
    stack[4] = r1; // [sp + 0x10]
    *(u32*)(r7) = (u32)r0;
    return sub_080116A2(r0, r1, r2, r3);
}

// ROM Address: 0x08011650..0x0801170A (186 bytes, Thumb)
u32 sub_08011650(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_08011650:
    r1 = r6;
    r0 = r4;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x08011654
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801166A;
loc_0801165C:
    r4 -= 0x4U;
    r1 = r6;
    r0 = r4;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x08011662
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801165C;
loc_0801166A:
    r5 += 0x4U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801168A;
    r1 = r5;
    r0 = r6;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x08011674
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801166A;
    r0 = r4;
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r5);
    *(u32*)(r5) = (u32)r2;
    *(u32*)(r0) = (u32)r1;
    r4 -= 0x4U;
    goto loc_08011650;
loc_0801168A:
    r1 = *(u32*)(r4);
    r0 = *(u32*)(r6);
    *(u32*)(r6) = (u32)r1;
    *(u32*)(r4) = (u32)r0;
    r1 = r4 - 4;
    r0 = r6;
    r0 = sub_080531A4(r0, r1, r2, r3); // 0x08011696: BL 0x080531A4
    r1 = r7;
    r0 = r4 + 4;
    r0 = sub_080531A4(r0, r1, r2, r3); // 0x0801169E: BL 0x080531A4
    r4 = 0x08072824U; // [0x0801180C]
    r0 = *(u32*)(r4);
    r0 = sub_0803DA54(r0, r1, r2, r3); // 0x080116A6
    r0 = *(u32*)(r4);
    r1 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    r0 = *(u32*)(r4);
    r4 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[3]; // [sp + 0xC]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080116F6;
    r0 = 0x41U;
    r1 = stack[132]; // [sp + 0x210]
    r0 = (r0 << 3);
    r6 = r1 + r0;
    r7 = 0xC; // sp + 0xC
loc_080116C8:
    r0 = (r4 << 2);
    r5 = r0 + r7;
    r5 += 0x4U;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r2 = r2 + r1;
    r1 = sp;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080116D8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080116EE;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r5);
    r2 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r6;
    *(u32*)(r6) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_080116EE:
    r0 = stack[3]; // [sp + 0xC]
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_080116C8;
loc_080116F6:
    return r0;
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 128;
    if (cmp_lhs != cmp_rhs) return sub_0801170A(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}
