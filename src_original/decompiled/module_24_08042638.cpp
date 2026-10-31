/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #24
 * Address Range: 0x08042638..0x08047FB4 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08042638..0x0804263C (4 bytes, Thumb)
u32 sub_08042638(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08042784(r0, r1, r2, r3);
    return sub_080427BE(r0, r1, r2, r3);
}

// ROM Address: 0x0804269C..0x0804269E (2 bytes, Thumb)
u32 sub_0804269C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08042782(r0, r1, r2, r3);
}

// ROM Address: 0x080426C4..0x080426D0 (12 bytes, Thumb)
u32 sub_080426C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08042782(r0, r1, r2, r3);
    r0 = 0xDU;
    *(u8*)(r5 + 0x5) = (u8)r0;
    *(u8*)(r5 + 0x4) = (u8)r0;
    return sub_08042782(r0, r1, r2, r3);
}

// ROM Address: 0x08042782..0x08042784 (2 bytes, Thumb)
u32 sub_08042782(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0804287A(r0, r1, r2, r3);
}

// ROM Address: 0x08042876..0x0804287A (4 bytes, Thumb)
u32 sub_08042876(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042876
    return r0;
}

// ROM Address: 0x0804287A..0x08042880 (6 bytes, Thumb)
u32 sub_0804287A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x1U;
    *(u8*)(r5 + 0xE) = (u8)r7;
    return sub_080428D0(r0, r1, r2, r3);
}

// Evidence: calls BIOS CpuSet (SWI 0x0B) at 080428FC; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08042880
// ROM Address: 0x08042880..0x08042904 (132 bytes, Thumb)
u32 Bios_CpuSet1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r4; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_080428D0;
    r5 = 0x03004CC8U; // [0x08042BB0]
    r0 = *(u8*)(r5 + 0xF);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080428D0;
    cmp_lhs = (s32)r6; cmp_rhs = 36;
    if (cmp_lhs == cmp_rhs) goto loc_08042898;
    cmp_lhs = (s32)r6; cmp_rhs = 38;
    if (cmp_lhs == cmp_rhs) goto loc_08042898;
    cmp_lhs = (s32)r6; cmp_rhs = 39;
    if (cmp_lhs != cmp_rhs) goto loc_080428D0;
loc_08042898:
    r0 = sub_080438B2(r0, r1, r2, r3); // 0x08042898
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x0804289C
    r0 = 0x8; // sp + 0x8
    r0 = sub_080438C4(r0, r1, r2, r3); // 0x080428A2
    r3 = 0x0; // sp + 0x0
    r0 = *(u8*)(r3 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080428D0;
    r5 = 0x0300525CU; // [0x08042BAC]
    r0 = *(u32*)(r5);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080428D0;
    r0 = sub_08043800(r0, r1, r2, r3); // 0x080428B8
    r1 = *(u32*)(r5);
    r0 += 0x4U;
    r1 = *(u8*)(r1 + 0x2);
    r7 = 0x1U;
    *(u8*)(r0) = (u8)r1;
    *(u8*)(r0 + 0x1) = (u8)r7;
    r0 = 0x29U;
    r0 = sub_08042372(r0, r1, r2, r3); // 0x080428CA
    r4 = 0x0U;
loc_080428D0:
    cmp_lhs = (s32)r6; cmp_rhs = 16;
    if (cmp_lhs == cmp_rhs) goto loc_080428E0;
    cmp_lhs = (s32)r6; cmp_rhs = 38;
    if (cmp_lhs == cmp_rhs) return sub_080429A4(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 48;
    if (cmp_lhs == cmp_rhs) return sub_08042904(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 61;
    if (cmp_lhs != cmp_rhs) return sub_080429C4(r0, r1, r2, r3);
loc_080428E0:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080429C6(r0, r1, r2, r3);
    r5 = 0x03004CC8U; // [0x08042BB0]
    r7 = 0xFFU;
    *(u8*)(r5 + 0xD) = (u8)r4;
    *(u8*)(r5 + 0x1) = (u8)r4;
    *(u8*)(r5) = (u8)r4;
    *(u8*)(r5 + 0x6) = (u8)r7;
    r0 = sub_08043368(r0, r1, r2, r3); // 0x080428F0
    cmp_lhs = (s32)r6; cmp_rhs = 61;
    if (cmp_lhs != cmp_rhs) return sub_080429C8(r0, r1, r2, r3);
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x4) = (u16)r4;
    r0 = Bios_CpuSet(r0, r1); // SWI 0x0B
    *(u8*)(r5 + 0x6) = (u8)r7;
    return r0;
}

// ROM Address: 0x08042904..0x080429A6 (162 bytes, Thumb)
u32 sub_08042904(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080429DE(r0, r1, r2, r3);
    r0 = sub_08043800(r0, r1, r2, r3); // 0x08042908
    r0 = *(u8*)(r0 + 0x8);
    r5 = 0x03004CC8U; // [0x08042BB0]
    *(u16*)(r5 + 0x14) = (u16)r0;
    r0 = sub_080422D4(r0, r1, r2, r3); // 0x08042912
    r0 = stack[8]; // [sp + 0x20]
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042950;
    r1 = *(u16*)(r5 + 0x14);
    r7 = 0x1U;
    r0 &= ~r1;
    r1 = stack[8]; // [sp + 0x20]
    *(u8*)(r1) = (u8)r0;
    r0 = 0x0U;
    r1 = 0x0U;
loc_0804292C:
    r2 = *(u16*)(r5 + 0x14);
    r3 = r7;
    r3 <<= (r0 & 0xFF);
    r2 &= r3;
    if (cmp_lhs == cmp_rhs) goto loc_0804293C;
    r2 = (r0 << 1);
    r2 = r2 + r5;
    *(u16*)(r2 + 0x34) = (u16)r1;
loc_0804293C:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804292C;
    r0 = *(u8*)(r5 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08042950;
    *(u8*)(r5 + 0x5) = (u8)r1;
    *(u8*)(r5 + 0x4) = (u8)r1;
loc_08042950:
    r0 = *(u8*)(r5);
    r1 = *(u16*)(r5 + 0x14);
    r3 = 0x0; // sp + 0x0
    r12 = r0;
    r0 &= r1;
    *(u8*)(r3 + 0x8) = (u8)r0;
    r0 = 0x0U;
    r7 = 0x1U;
loc_08042960:
    r3 = 0x0; // sp + 0x0
    r3 = *(u8*)(r3 + 0x8);
    r2 = r7;
    r2 <<= (r0 & 0xFF);
    r2 &= r3;
    if (cmp_lhs == cmp_rhs) goto loc_08042976;
    r2 = *(u8*)(r5 + 0x1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042976;
    r2 += 0xFFU;
    *(u8*)(r5 + 0x1) = (u8)r2;
loc_08042976:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042960;
    r0 = r12;
    r0 &= ~r1;
    *(u8*)(r5) = (u8)r0;
    r0 = *(u8*)(r5 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080429B6(r0, r1, r2, r3);
    r1 = 0x0300525CU; // [0x08042BAC]
    r1 = *(u32*)(r1);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) return sub_080429D2(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_080429A6(r0, r1, r2, r3);
    r0 = *(u16*)(r5 + 0x1C);
    *(u16*)(r5 + 0x1A) = (u16)r0;
    r0 = 0x6U;
    *(u8*)(r5 + 0x7) = (u8)r0;
    return sub_080429B4(r0, r1, r2, r3);
    return sub_080429E0(r0, r1, r2, r3);
}

// ROM Address: 0x080429A6..0x080429C4 (30 bytes, Thumb)
u32 sub_080429A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 6;
    if (cmp_lhs == cmp_rhs) return sub_080429D2(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 7;
    if (cmp_lhs == cmp_rhs) return sub_080429D2(r0, r1, r2, r3);
    *(u8*)(r5 + 0x7) = (u8)r7;
    r0 = 0x5U;
    *(u8*)(r5 + 0x4) = (u8)r0;
    r0 = 0x0300525CU; // [0x08042BAC]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) return sub_080429D2(r0, r1, r2, r3);
    r0 = *(u8*)(r5 + 0x4);
    return sub_080429CA(r0, r1, r2, r3);
}

// ROM Address: 0x080429C4..0x080429CA (6 bytes, Thumb)
u32 sub_080429C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080429F6(r0, r1, r2, r3);
    return sub_080429FA(r0, r1, r2, r3);
    return sub_08042A3C(r0, r1, r2, r3);
}

// ROM Address: 0x080429D2..0x08042A1C (74 bytes, Thumb)
u32 sub_080429D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r5 + 0xE);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080429F6;
    r1 = 0x1U;
    r0 = 0x40U;
    goto loc_080429F2;
    return sub_08042A1E(r0, r1, r2, r3);
    r0 = sub_08043392(r0, r1, r2, r3); // 0x080429E0
    r0 = 0x0300525CU; // [0x08042BAC]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_080429F6;
    r1 = 0x0U;
    r0 = 0x50U;
loc_080429F2:
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x080429F2
loc_080429F6:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08042A3C(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 28;
    if (cmp_lhs != cmp_rhs) return sub_08042A1E(r0, r1, r2, r3);
    r5 = 0x03004CC8U; // [0x08042BB0]
    r0 = *(u8*)(r5 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_08042A1E(r0, r1, r2, r3);
    r0 = 0x0300525CU; // [0x08042BAC]
    r7 = 0x1U;
    r0 = *(u32*)(r0);
    r1 = 0xFU;
    *(u8*)(r0) = (u8)r7;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r0 = 0xFU;
    r0 = sub_0804337C(r0, r1, r2, r3); // 0x08042A14
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x08042A18
    return r0;
}

// ROM Address: 0x08042A1C..0x08042A1E (2 bytes, Thumb)
u32 sub_08042A1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08042900(r0, r1, r2, r3);
}

// ROM Address: 0x08042A3C..0x08042A4E (18 bytes, Thumb)
u32 sub_08042A3C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r6; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) return sub_08042A1C(r0, r1, r2, r3);
    r1 = 0x0U;
    r0 = 0xF2U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042A44
    r0 = sub_08043368(r0, r1, r2, r3); // 0x08042A48
    return sub_08042900(r0, r1, r2, r3);
}

// ROM Address: 0x08042A4E..0x08042AB8 (106 bytes, Thumb)
u32 sub_08042A4E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x03004CC8U; // [0x08042BB0]
    r7 = 0x0U;
    r5 = r0;
    r4 = *(u8*)(r6 + 0xE);
    *(u8*)(r6 + 0xE) = (u8)r7;
    r0 = 0x1U;
    *(u8*)(r6 + 0xF) = (u8)r0;
    r0 = 0x0300525CU; // [0x08042BAC]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08042A7A;
    r0 = r5;
    r0 = sub_08042372(r0, r1, r2, r3); // 0x08042A6A
    r0 = *(u8*)(r6 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08042A8E;
loc_08042A74:
    r0 = sub_08043368(r0, r1, r2, r3); // 0x08042A74
    goto loc_08042AA4;
loc_08042A7A:
    r0 = sp;
    r0 = sub_0804380C(r0, r1, r2, r3); // 0x08042A7C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08042A8E;
    r0 = *(u8*)(r6 + 0x3);
    r3 = 0x0; // sp + 0x0
    r1 = *(u8*)(r3);
    r0 |= r1;
    *(u8*)(r6 + 0x3) = (u8)r0;
loc_08042A8E:
    r1 = *(u32*)(r6 + 0x44);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042AA4;
    r0 = r5;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08042A96: BL 0x08046AA2
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x08042A9A
    r0 = *(u8*)(r6 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_08042A74;
loc_08042AA4:
    *(u8*)(r6 + 0xF) = (u8)r7;
    *(u8*)(r6 + 0xE) = (u8)r4;
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return Bios_CpuSet2(r0, r1, r2, r3);
    r0 = 0x4U;
    return r0;
}

// Evidence: calls BIOS CpuSet (SWI 0x0B) at 08042ABE; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08042AB8
// ROM Address: 0x08042AB8..0x08042ADA (34 bytes, Thumb)
u32 Bios_CpuSet2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r0;
    r0 = Bios_CpuSet(r0, r1); // SWI 0x0B
    r1 = 0xFFU;
    r0 = 0x03004CC8U; // [0x08042BB0]
    *(u8*)(r0 + 0x6) = (u8)r1;
    r0 += 0x40U;
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = 0x08042A4FU /* &sub_08042A4E */; // [0x08042BB4]
    r0 = sub_08043860(r0, r1, r2, r3); // 0x08042ACC: BL 0x08043860
    r0 = 0x080424B3U; // [0x08042BB8]
    r0 = sub_0804388A(r0, r1, r2, r3); // 0x08042AD2
    r0 = 0x0U;
    return sub_08042AB6(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_ram_init_records1_initialises_the_four_halfword_records runs it with no argument and asserts all sixteen stores; 0x08042ADA loads 0x03004CC8, 0x08042ADE-0x08042AF2 write zero at +4, +5, +7, +0xC, +0x10, +0x24 and +0x30 and 0xFF at +6, and 0x08042AF6-0x08042B06 write a zero halfword at +0x28 and +0x34 of each of four records
// ROM Address: 0x08042ADA..0x08042B68 (142 bytes, Thumb)
u32 Ram_InitRecords1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x03004CC8U; // [0x08042BB0]
    r2 = 0x0U;
    *(u8*)(r3 + 0x5) = (u8)r2;
    *(u8*)(r3 + 0x4) = (u8)r2;
    r0 = 0xFFU;
    *(u8*)(r3 + 0x6) = (u8)r0;
    *(u8*)(r3 + 0x7) = (u8)r2;
    *(u8*)(r3 + 0x10) = (u8)r2;
    *(u8*)(r3 + 0xC) = (u8)r2;
    r0 = 0x24U;
    *(u8*)(r0 + r3) = (u8)r2;
    r0 = 0x30U;
    *(u8*)(r0 + r3) = (u8)r2;
    r0 = 0x0U;
loc_08042AF6:
    r1 = (r0 << 1);
    r1 = r1 + r3;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u16*)(r1 + 0x28) = (u16)r2;
    *(u16*)(r1 + 0x34) = (u16)r2;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042AF6;
    return r0; // BX lr
    r4 = r0;
    r0 = Ram_InitRecords1(r0, r1, r2, r3); // 0x08042B0E: BL 0x08042ADA
    r0 = 0x03004CC8U; // [0x08042BB0]
    r2 = 0x1U;
    *(u8*)(r0 + 0x4) = (u8)r2;
    r1 = 0x2U;
    *(u8*)(r0 + 0x5) = (u8)r1;
    *(u32*)(r0 + 0x3C) = (u32)r4;
    r1 = *(u8*)(r4 + 0x11);
    *(u8*)(r0 + 0x9) = (u8)r1;
    r1 = *(u16*)(r4 + 0x12);
    *(u16*)(r0 + 0x32) = (u16)r1;
    r1 = *(u16*)(r4 + 0x14);
    *(u16*)(r0 + 0x18) = (u16)r1;
    r1 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042B32;
    *(u8*)(r0 + 0xB) = (u8)r2;
loc_08042B32:
    return r0;
    r1 = 0x03004CC8U; // [0x08042BB0]
    r0 = 0x15U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    return r0; // BX lr
    r5 = 0x03004CC8U; // [0x08042BB0]
    r4 = r0;
    r0 = *(u8*)(r5 + 0x4);
    r7 = r1;
    r6 = r3;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08042B68(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_08042B56;
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08042B68(r0, r1, r2, r3);
loc_08042B56:
    r0 = 0x1U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    r1 = 0x1U;
    r0 = 0xF3U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042B5E
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08042B68..0x08042BAC (68 bytes, Thumb)
u32 sub_08042B68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0804400C(r0, r1, r2, r3); // 0x08042B68
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08042B80;
    r0 = 0x2U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    r1 = 0x1U;
    r0 = 0xF3U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042B78
    r0 = 0x2U;
    return sub_08042B64(r0, r1, r2, r3);
loc_08042B80:
    r1 = r6;
    r3 = 0x0000FFFFU; // [0x08042BBC]
    r0 = 0x0U;
loc_08042B86:
    r2 = *(u16*)(r1);
    r1 += 0x2U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08042B98;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042B86;
loc_08042B98:
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_08042BC0(r0, r1, r2, r3);
    r0 = 0x4U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    r1 = 0x1U;
    r0 = 0xF3U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042BA4
    r0 = 0x4U;
    return sub_08042B64(r0, r1, r2, r3);
}

// ROM Address: 0x08042BF8..0x08042C36 (62 bytes, Thumb)
u32 sub_08042BF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03004CC8U; // [0x08042FAC]
    r4 = r0;
    r0 = *(u8*)(r5 + 0x4);
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042C1E;
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042C0E;
    cmp_lhs = (s32)r0; cmp_rhs = 11;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08042C1E;
loc_08042C0E:
    r0 = 0x1U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    r1 = 0x1U;
    r0 = 0xF3U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042C16
    r0 = 0x1U;
    return r0;
loc_08042C1E:
    r0 = sub_0804400C(r0, r1, r2, r3); // 0x08042C1E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08042C36(r0, r1, r2, r3);
    r0 = 0x2U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    r1 = 0x1U;
    r0 = 0xF3U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042C2E
    r0 = 0x2U;
    return r0;
}

// ROM Address: 0x08042C36..0x08042C40 (10 bytes, Thumb)
u32 sub_08042C36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0300525CU; // [0x08042FB0]
    r0 = 0x0U;
    r3 = *(u32*)(r1);
    r1 = *(u8*)(r3 + 0x8);
    return sub_08042C50(r0, r1, r2, r3);
}

// ROM Address: 0x08042C40..0x08042C6C (44 bytes, Thumb)
u32 sub_08042C40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_08042C40:
    r2 = (r0 << 5);
    r2 = r2 + r3;
    r2 = *(u16*)(r2 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08042C54;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08042C40;
loc_08042C54:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042C5C;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08042C6C(r0, r1, r2, r3);
loc_08042C5C:
    r0 = 0x3U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    r1 = 0x1U;
    r0 = 0xF3U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042C64
    r0 = 0x3U;
    return r0;
}

// ROM Address: 0x08042C6C..0x08042C80 (20 bytes, Thumb)
u32 sub_08042C6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r5 + 0x4);
    r1 = 0xCU;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042C78;
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if (cmp_lhs != cmp_rhs) return sub_08042C80(r0, r1, r2, r3);
loc_08042C78:
    *(u8*)(r5 + 0x4) = (u8)r1;
    r0 = 0xDU;
    *(u8*)(r5 + 0x5) = (u8)r0;
    return sub_08042C86(r0, r1, r2, r3);
}

// ROM Address: 0x08042C80..0x08042D00 (128 bytes, Thumb)
u32 sub_08042C80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xBU;
    *(u8*)(r5 + 0x4) = (u8)r0;
    *(u8*)(r5 + 0x5) = (u8)r1;
    *(u16*)(r5 + 0x1E) = (u16)r4;
    *(u16*)(r5 + 0x1A) = (u16)r6;
    r0 = *(u8*)(r5 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042C94;
    r0 = 0x7U;
    *(u8*)(r5 + 0x7) = (u8)r0;
loc_08042C94:
    r0 = 0x0U;
    return r0;
    r5 = 0x03004CC8U; // [0x08042FAC]
    r1 = r5;
    r1 += 0x30U;
    r2 = *(u8*)(r1);
    r3 = r2;
    r3 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_08042CE4;
    r2 &= ~r0;
    *(u8*)(r1) = (u8)r2;
    r1 = 0x0U;
    r3 = 0x1U;
    r4 = 0x0U;
loc_08042CB2:
    r2 = r3;
    r2 <<= (r1 & 0xFF);
    r2 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_08042CC0;
    r2 = (r1 << 1);
    r2 = r2 + r5;
    *(u16*)(r2 + 0x34) = (u16)r4;
loc_08042CC0:
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042CB2;
    r1 = 0x0300525CU; // [0x08042FB0]
    r1 = *(u32*)(r1);
    r4 = *(u8*)(r1 + 0x3);
    r4 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_08042CDA;
    r0 = r4;
    r0 = sub_0804337C(r0, r1, r2, r3); // 0x08042CD6
loc_08042CDA:
    r1 = r4;
    r0 = 0x33U;
    *(u16*)(r5 + 0x14) = (u16)r4;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042CE0
loc_08042CE4:
    return r0;
    r4 = 0x03004CC8U; // [0x08042FAC]
    r2 = r0;
    r1 = 0x0U;
    r0 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    *(u8*)(r4 + 0x7) = (u8)r1;
    if (cmp_lhs == cmp_rhs) return sub_08042D00(r0, r1, r2, r3);
    r0 = Ram_InitRecords1(r0, r1, r2, r3); // 0x08042CF6: BL 0x08042ADA
    r0 = 0x17U;
    *(u8*)(r4 + 0x4) = (u8)r0;
    return r0;
}

// ROM Address: 0x08042D00..0x08042D2A (42 bytes, Thumb)
u32 sub_08042D00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u8*)(r4 + 0x4);
    r2 = 0x8U;
    r5 -= 0x5U;
    cmp_lhs = (s32)r5; cmp_rhs = 14;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08042D72(r0, r1, r2, r3);
    r3 = 0x08042D14U;
    r3 = *(u8*)(r3 + r5);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r7 = (r0 >> 12);
    r2 += 0xBU;
    r7 = ((u32)((s32)r1 >> 12));
    r3 = ((u32)((s32)r2 >> 28));
    r3 = r3 - r4;
    r2 = r6 + 4;
    cmp_lhs = (s32)r4; cmp_rhs = 44;
    *(u8*)(r4 + 0x4) = (u8)r2;
    *(u8*)(r4 + 0x5) = (u8)r1;
    r0 = 0x13U;
    return sub_08042D78(r0, r1, r2, r3);
}

// ROM Address: 0x08042D72..0x08042F4C (474 bytes, Thumb)
u32 sub_08042D72(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r4 + 0x5) = (u8)r1;
    *(u8*)(r4 + 0x4) = (u8)r1;
    r0 = 0x43U;
    r1 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08042CFE(r0, r1, r2, r3);
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042D7E
    return r0;
    r0 = sub_080440E0(r0, r1, r2, r3); // 0x08042D86
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042D9A;
    r1 = 0x0U;
    r0 = 0xF1U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042D92
    r0 = sub_08043368(r0, r1, r2, r3); // 0x08042D96
loc_08042D9A:
    return r0;
    r6 = 0x03004CC8U; // [0x08042FAC]
    r0 = *(u16*)(r6 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042E3C;
    r0 = 0x0300525CU; // [0x08042FB0]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042E0A;
    r6 = 0x0U;
loc_08042DB2:
    r3 = 0x03005268U; // [0x08042FB4]
    r7 = (r6 << 2);
    r0 = *(u32*)(r3 + r7);
    r0 = *(u16*)(r0);
    r0 = (r0 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08042E00;
    r5 = 0x0U;
    r4 = 0x0U;
loc_08042DC2:
    r3 = 0x03005268U; // [0x08042FB4]
    r1 = 0x1U;
    r0 = *(u32*)(r3 + r7);
    r1 <<= (r4 & 0xFF);
    r0 = *(u8*)(r0 + 0x1A);
    r2 = r0;
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08042DE6;
    r2 = (r4 << 2);
    r2 = *(u32*)(r3 + r2);
    r3 = 0x03004CC8U; // [0x08042FAC]
    r2 = *(u16*)(r2 + 0x2);
    r3 = *(u16*)(r3 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08042DE6;
    r1 |= r5;
    r5 = (r1 << 24);
    r5 = (r5 >> 24);
loc_08042DE6:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042DF6;
    r0 ^= r5;
    r2 = r0;
    r1 = r6;
    r0 = 0x20U;
    r0 = sub_08044A0C(r0, r1, r2, r3); // 0x08042DF2
loc_08042DF6:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042DC2;
loc_08042E00:
    r6 += 0x1U;
    r6 = (r6 << 24);
    r6 = (r6 >> 24);
    cmp_lhs = (s32)r6; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042DB2;
loc_08042E0A:
    r0 = 0x0300525CU; // [0x08042FB0]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042E3C;
    r5 = 0x03005268U; // [0x08042FB4]
    r6 = 0x03004CC8U; // [0x08042FAC]
    r4 = 0x0U;
loc_08042E1A:
    r0 = (r4 << 2);
    r0 = *(u32*)(r5 + r0);
    r1 = *(u16*)(r0 + 0x34);
    r1 = (r1 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08042E32;
    r0 = *(u16*)(r0 + 0x36);
    r1 = *(u16*)(r6 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08042E32;
    r0 = r4;
    r0 = sub_08044AF4(r0, r1, r2, r3); // 0x08042E2E
loc_08042E32:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042E1A;
loc_08042E3C:
    return r0;
    r1 = 0x03004CC8U; // [0x08042FAC]
    r0 = *(u8*)(r1 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08042E52;
    r1 = 0x0U;
    r0 = 0x45U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042E4C
loc_08042E50:
    return r0;
loc_08042E52:
    r0 = *(u8*)(r1 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08042E50;
    r0 = 0x2U;
    *(u8*)(r1 + 0x2) = (u8)r0;
    return r0;
    r7 = 0x04000200U /* &REG_IE */; // [0x08042FB8]
    r6 = *(u16*)(r7 + 0x8);
    r5 = 0x0U;
    *(u16*)(r7 + 0x8) = (u16)r5;
    r4 = 0x03004CC8U; // [0x08042FAC]
    r0 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) goto loc_08042EB6;
    r0 = *(u8*)(r4 + 0x10);
    r0 = (r0 << 1);
    r0 = r0 + r4;
    r1 = *(u16*)(r0 + 0x28);
    r1 -= 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r0 + 0x28) = (u16)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08042E90;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x03005268U; // [0x08042FB4]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 39;
    if (cmp_lhs != cmp_rhs) goto loc_08042EB6;
loc_08042E90:
    r0 = sub_08042E3E(r0, r1, r2, r3); // 0x08042E90
    r0 = 0x18U;
    *(u8*)(r4 + 0x4) = (u8)r0;
    r1 = *(u8*)(r4 + 0x10);
    r0 = 0x4U;
    r0 = sub_080446A8(r0, r1, r2, r3); // 0x08042E9C
    r0 = *(u8*)(r4 + 0x10);
    r1 = r4;
    r1 += 0x20U;
    r3 = 0x1U;
    r2 = *(u8*)(r1 + 0x4);
    r3 <<= (r0 & 0xFF);
    r2 &= ~r3;
    r0 = (r0 << 1);
    r0 = r0 + r4;
    *(u8*)(r1 + 0x4) = (u8)r2;
    *(u16*)(r0 + 0x28) = (u16)r5;
loc_08042EB6:
    *(u16*)(r7 + 0x8) = (u16)r6;
    r0 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_08042EEA;
    r0 = *(u8*)(r4 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08042EC8;
    r0 = sub_08042E3E(r0, r1, r2, r3); // 0x08042EC4
loc_08042EC8:
    r0 = *(u8*)(r4 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08042EEA;
    *(u8*)(r4 + 0x5) = (u8)r5;
    r0 = 0x0300525CU; // [0x08042FB0]
    *(u8*)(r4 + 0x4) = (u8)r5;
    r0 = *(u32*)(r0);
    r1 = *(u8*)(r0 + 0x2);
    r0 = *(u8*)(r0 + 0x3);
    r0 |= r1;
    r0 = sub_0804337C(r0, r1, r2, r3); // 0x08042EDC
    r1 = 0x1U;
    r0 = 0x25U;
    *(u16*)(r4 + 0x14) = (u16)r5;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042EE6
loc_08042EEA:
    return r0;
    r5 = 0x03004CC8U; // [0x08042FAC]
    r0 = *(u8*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08042FC0(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if ((u32)cmp_lhs > (u32)cmp_rhs) return sub_08042FC0(r0, r1, r2, r3);
    r6 = 0x0300525CU; // [0x08042FB0]
    r2 = *(u8*)(r5 + 0xC);
    r1 = *(u32*)(r6);
    r0 = *(u8*)(r1 + 0x2);
    r1 = *(u8*)(r1 + 0x7);
    r2 ^= r0;
    r2 &= r0;
    r2 &= ~r1;
    stack[2] = r2; // [sp + 0x8]
    *(u8*)(r5 + 0xC) = (u8)r0;
    r2 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042F20;
    r0 = stack[2]; // [sp + 0x8]
    r1 = 0x1U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    r0 = 0x10U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042F1C
loc_08042F20:
    r0 = 0x0U;
    r7 = 0x03004CC8U; // [0x08042FAC]
    r4 = 0x0U;
    r7 += 0x20U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x1U;
    r0 <<= (r4 & 0xFF);
    r6 = (r0 << 24);
    r0 = stack[2]; // [sp + 0x8]
    r6 = (r6 >> 24);
    r5 = 0x0U;
    r0 &= r6;
    if (cmp_lhs == cmp_rhs) return sub_08042F4C(r0, r1, r2, r3);
    r5 = 0x03004CC8U; // [0x08042FAC]
    r1 = (r4 << 1);
    r0 = *(u16*)(r5 + 0x26);
    r1 = r1 + r5;
    *(u16*)(r1 + 0x28) = (u16)r0;
    r0 = *(u8*)(r7 + 0x4);
    r0 |= r6;
    *(u8*)(r7 + 0x4) = (u8)r0;
    return sub_08042FFE(r0, r1, r2, r3);
}

// ROM Address: 0x08042F4C..0x08042FAA (94 bytes, Thumb)
u32 sub_08042F4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r7 + 0x4);
    r0 &= r6;
    if (cmp_lhs == cmp_rhs) return sub_08042FFE(r0, r1, r2, r3);
    r1 = 0x03005268U; // [0x08042FB4]
    r0 = (r4 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = *(u16*)(r0 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = 70;
    if (cmp_lhs != cmp_rhs) return sub_08042FC2(r0, r1, r2, r3);
    r0 += 0x60U;
    r0 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08042FD6(r0, r1, r2, r3);
    r1 = 0x03004CC8U; // [0x08042FAC]
    r2 = 0x0300525CU; // [0x08042FB0]
    r0 = *(u32*)(r1 + 0x20);
    r2 = *(u32*)(r2);
    r1 = (r4 << 5);
    r5 = 0x2U;
    r3 = r1 + r2;
    goto loc_08042F98;
loc_08042F76:
    r2 = *(u16*)(r3 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08042F96;
    r1 = 0x03004CC8U; // [0x08042FAC]
    r0 = *(u8*)(r1);
    r0 |= r6;
    *(u8*)(r1) = (u8)r0;
    r0 = *(u8*)(r1 + 0x1);
    r0 += 0x1U;
    *(u8*)(r1 + 0x1) = (u8)r0;
    r0 = stack[1]; // [sp + 0x4]
    r0 |= r6;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x1U;
    r5 |= r0;
    goto loc_08042FA0;
loc_08042F96:
    r0 += 0x2U;
loc_08042F98:
    r1 = *(u16*)(r0);
    r2 = 0x0000FFFFU; // [0x08042FBC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08042F76;
loc_08042FA0:
    r0 = (r5 << 31);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_08042FD6(r0, r1, r2, r3);
    r0 = 0x4U;
    r5 |= r0;
    return sub_08042FD6(r0, r1, r2, r3);
}

// ROM Address: 0x08042FC2..0x0804306E (172 bytes, Thumb)
u32 sub_08042FC2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x03004CC8U; // [0x08043354]
    r0 = (r4 << 1);
    r0 = r0 + r1;
    r1 = *(u16*)(r0 + 0x28);
    r1 -= 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r0 + 0x28) = (u16)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08042FD6;
    r5 = 0x6U;
loc_08042FD6:
    r0 = (r5 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08042FF2;
    r0 = *(u8*)(r7 + 0x4);
    r1 = 0x03004CC8U; // [0x08043354]
    r2 = 0x0U;
    r0 &= ~r6;
    *(u8*)(r7 + 0x4) = (u8)r0;
    r0 = (r4 << 1);
    r0 = r0 + r1;
    *(u16*)(r0 + 0x28) = (u16)r2;
    r1 = r4;
    r0 = 0x8U;
    r0 = sub_080446A8(r0, r1, r2, r3); // 0x08042FEE
loc_08042FF2:
    r0 = (r5 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08042FFE;
    r1 = 0x03004CC8U; // [0x08043354]
    r0 = *(u8*)(r1 + 0xD);
    r0 |= r6;
    *(u8*)(r1 + 0xD) = (u8)r0;
loc_08042FFE:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08042F2A(r0, r1, r2, r3);
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804301C;
    r5 = 0x03004CC8U; // [0x08043354]
    r0 = stack[1]; // [sp + 0x4]
    r1 = 0x1U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    r0 = 0x11U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08043018
loc_0804301C:
    r5 = 0x03004CC8U; // [0x08043354]
    r0 = *(u8*)(r5 + 0xD);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804304C;
    r2 = 0x0300525CU; // [0x08043358]
    r1 = *(u32*)(r2);
    r1 = *(u8*)(r1 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08043038;
    r2 = *(u8*)(r5 + 0x3);
    r1 = *(u8*)(r5);
    r2 &= r1;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0804304C;
loc_08043038:
    r0 = sub_0804337C(r0, r1, r2, r3); // 0x08043038
    r0 = *(u8*)(r5 + 0xD);
    r2 = 0x0U;
    r1 = 0x1U;
    *(u16*)(r5 + 0x14) = (u16)r0;
    *(u8*)(r5 + 0xD) = (u8)r2;
    r0 = 0x12U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08043048
loc_0804304C:
    r0 = *(u8*)(r7 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804306C;
    r1 = *(u8*)(r5 + 0x4);
    r0 = r5;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0804306C;
    r1 = *(u8*)(r0 + 0x7);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0804306E(r0, r1, r2, r3);
    r2 = 0x0U;
    *(u8*)(r0 + 0x5) = (u8)r2;
    *(u8*)(r0 + 0x4) = (u8)r2;
    r0 = 0x14U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08043068
loc_0804306C:
    return r0;
}

// ROM Address: 0x0804306E..0x08043098 (42 bytes, Thumb)
u32 sub_0804306E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = 0x5U;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08043080;
    r2 = 0x3U;
    *(u8*)(r0 + 0x7) = (u8)r2;
    r2 = 0x9U;
    *(u8*)(r0 + 0x4) = (u8)r2;
    goto loc_08043086;
loc_08043080:
    r2 = 0x1U;
    *(u8*)(r0 + 0x7) = (u8)r2;
    *(u8*)(r0 + 0x4) = (u8)r1;
loc_08043086:
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804306C(r0, r1, r2, r3);
    r2 = 0x0U;
    *(u16*)(r0 + 0x1A) = (u16)r2;
    r2 = 0x8U;
    *(u8*)(r0 + 0x7) = (u8)r2;
    *(u8*)(r0 + 0x4) = (u8)r1;
    return sub_0804306C(r0, r1, r2, r3);
}

// ROM Address: 0x08043098..0x080430E2 (74 bytes, Thumb)
u32 sub_08043098(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x03004CC8U; // [0x08043354]
    r2 = 0x5U;
    r3 = *(u8*)(r4 + 0x7);
    r1 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) goto loc_080430BA;
    *(u8*)(r4 + 0x6) = (u8)r1;
    *(u8*)(r4 + 0x4) = (u8)r2;
    r3 = *(u16*)(r4 + 0x1C);
    *(u16*)(r4 + 0x1A) = (u16)r3;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080430B8;
    r3 = 0x6U;
    *(u8*)(r4 + 0x7) = (u8)r3;
    goto loc_080430BA;
loc_080430B8:
    *(u8*)(r4 + 0x7) = (u8)r1;
loc_080430BA:
    r3 = *(u8*)(r4 + 0x7);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_080430E8(r0, r1, r2, r3);
    *(u8*)(r4 + 0x6) = (u8)r1;
    r1 = r0;
    r0 = 0x8CU;
    *(u8*)(r4 + 0x4) = (u8)r2;
    r0 = sub_08046F30(r0, r1, r2, r3); // 0x080430C8: BL 0x08046F30
    r0 = (r1 << 16);
    r0 = (r0 >> 16);
    r1 = 0x8CU;
    r1 = r1 - r0;
    *(u16*)(r4 + 0x1A) = (u16)r0;
    *(u16*)(r4 + 0x1C) = (u16)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080430E2(r0, r1, r2, r3);
    r0 = 0x2U;
    *(u8*)(r4 + 0x7) = (u8)r0;
    return r0;
}

// ROM Address: 0x080430E2..0x080430E8 (6 bytes, Thumb)
u32 sub_080430E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x3U;
    *(u8*)(r4 + 0x7) = (u8)r0;
    return sub_080430EC(r0, r1, r2, r3);
}

// ROM Address: 0x080430E8..0x08043114 (44 bytes, Thumb)
u32 sub_080430E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_080430E0(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u8*)(r4 + 0x6) = (u8)r0;
    r0 = 0x28U;
    *(u16*)(r4 + 0x1A) = (u16)r0;
    r0 = 0x4U;
    *(u8*)(r4 + 0x7) = (u8)r0;
    r0 = 0x9U;
    *(u8*)(r4 + 0x4) = (u8)r0;
    return r0;
    r4 = 0x03004CC8U; // [0x08043354]
    r5 = 0x0U;
    r1 = *(u32*)(r4 + 0x40);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08043114(r0, r1, r2, r3);
    r1 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08043114(r0, r1, r2, r3);
    *(u8*)(r4 + 0x4) = (u8)r5;
    return r0;
}

// ROM Address: 0x08043114..0x08043118 (4 bytes, Thumb)
u32 sub_08043114(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r4 + 0x7);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x08043118..0x08043140 (40 bytes, Thumb)
u32 sub_08043118(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804311E;
    r0 = sub_08043098(r0, r1, r2, r3); // 0x0804311A: BL 0x08043098
loc_0804311E:
    r6 = 0x00008001U; // [0x0804335C]
    r7 = 0x0300525CU; // [0x08043358]
    r0 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080431F4(r0, r1, r2, r3);
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x08043128
    r0 = 0x1U;
    *(u8*)(r4 + 0xE) = (u8)r0;
    r0 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_080431B0(r0, r1, r2, r3);
    r3 = 0x08043140U;
    r3 = *(u8*)(r3 + r0);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    return r0;
}

// ROM Address: 0x08043140..0x08043158 (24 bytes, Thumb)
u32 sub_08043140(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = ((u32)((s32)r7 >> 28));
    cmp_lhs = (s32)r2; cmp_rhs = 39;
    r1 -= 0x31U;
    r7 -= 0x3CU;
    cmp_lhs = (s32)(r0 & r7); cmp_rhs = 0;
    r0 = 0xB580493CU; // [0x08043260]
    r7 = 0x2800D007U; // [0x0804327C]
    r0 -= 0x52U;
    r5 = *(u16*)(r2 + r5);
    *(u32*)(r3 + 0x14) = (u32)r6;
    *(u32*)(r7 + 0x40) = (u32)r0;
    r0 = (r7 >> 16);
    return r0;
}

// ROM Address: 0x08043158..0x08043318 (448 bytes, Thumb)
u32 sub_08043158(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08042278(r0, r1, r2, r3); // 0x08043158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_08043164;
    r0 = 0x44U;
    goto loc_08043166;
loc_08043164:
    r0 = 0xFFU;
loc_08043166:
    *(u8*)(r4 + 0x5) = (u8)r5;
    *(u8*)(r4 + 0x4) = (u8)r5;
    r1 = 0x0U;
    goto loc_08043188;
    r0 = sub_08042278(r0, r1, r2, r3); // 0x0804316E
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_08043180;
    r0 = *(u8*)(r4 + 0x5);
    *(u8*)(r4 + 0x4) = (u8)r0;
    r0 = 0x3U;
    *(u8*)(r4 + 0x5) = (u8)r0;
    goto loc_080431B0;
loc_08043180:
    *(u8*)(r4 + 0x5) = (u8)r5;
    r1 = 0x0U;
    r0 = 0xFFU;
    *(u8*)(r4 + 0x4) = (u8)r5;
loc_08043188:
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08043188
    goto loc_080431B0;
    r0 = sub_08043A1E(r0, r1, r2, r3); // 0x0804318E
    goto loc_080431B0;
    r0 = *(u32*)(r4 + 0x3C);
    r2 = *(u8*)(r0 + 0x1);
    r1 = *(u8*)(r0);
    r0 = *(u16*)(r0 + 0x2);
    r0 = sub_08043A30(r0, r1, r2, r3); // 0x0804319C
    goto loc_080431B0;
    r0 = *(u32*)(r4 + 0x3C);
    r1 = *(u16*)(r0 + 0x6);
    r2 = *(u32*)(r0 + 0x8);
    r3 = *(u32*)(r0 + 0xC);
    r0 = *(u8*)(r0 + 0x4);
    r0 = sub_08043AF2(r0, r1, r2, r3); // 0x080431AC
loc_080431B0:
    goto loc_0804320C;
    r0 = sub_08043BAC(r0, r1, r2, r3); // 0x080431B2
    goto loc_0804320C;
    r0 = sub_08043D5E(r0, r1, r2, r3); // 0x080431B8
    goto loc_0804320C;
    r0 = sub_08043D70(r0, r1, r2, r3); // 0x080431BE
    goto loc_0804320C;
    r0 = sub_08043D82(r0, r1, r2, r3); // 0x080431C4
    goto loc_0804320C;
    r0 = sub_08043E66(r0, r1, r2, r3); // 0x080431CA
    goto loc_0804320C;
    r0 = sub_08043E78(r0, r1, r2, r3); // 0x080431D0
    goto loc_0804320C;
    r0 = *(u16*)(r4 + 0x1E);
    r0 = sub_08043E8A(r0, r1, r2, r3); // 0x080431D8
    goto loc_0804320C;
    r0 = sub_08043FAA(r0, r1, r2, r3); // 0x080431DE
    goto loc_0804320C;
    r0 = sub_08043FE4(r0, r1, r2, r3); // 0x080431E4
    goto loc_0804320C;
    r0 = *(u32*)(r7);
    r0 = *(u8*)(r0 + 0x3);
    r0 = sub_08044554(r0, r1, r2, r3); // 0x080431EE
    goto loc_0804320C;
    goto loc_0804321C;
    r0 = sub_080445FC(r0, r1, r2, r3); // 0x080431F6
    goto loc_0804320C;
    r0 = sub_08044630(r0, r1, r2, r3); // 0x080431FC
    goto loc_0804320C;
    r0 = sub_08044642(r0, r1, r2, r3); // 0x08043202
    goto loc_0804320C;
    r0 = sub_0804397A(r0, r1, r2, r3); // 0x08043208
loc_0804320C:
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x0804320C
    *(u8*)(r4 + 0xE) = (u8)r5;
    r0 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 18;
    if (cmp_lhs == cmp_rhs) return sub_08043122(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 19;
    if (cmp_lhs == cmp_rhs) return sub_08043122(r0, r1, r2, r3);
loc_0804321C:
    r0 = *(u32*)(r7);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08043230;
    r0 = 0x0U;
    r0 = sub_08042372(r0, r1, r2, r3); // 0x08043226
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08043230;
    return sub_08043112(r0, r1, r2, r3);
loc_08043230:
    r0 = sub_08042EEC(r0, r1, r2, r3); // 0x08043230
    r0 = sub_08042E5E(r0, r1, r2, r3); // 0x08043234
    r0 = *(u8*)(r4 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804325A;
    r1 = *(u8*)(r4 + 0xA);
    r0 = r4;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0804325A;
    r1 = *(u8*)(r0 + 0x4);
    *(u8*)(r0 + 0x11) = (u8)r1;
    r1 = *(u8*)(r0 + 0x5);
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = 0x10U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = 0x11U;
    *(u8*)(r0 + 0x5) = (u8)r1;
    r1 = 0x2U;
    *(u8*)(r0 + 0xA) = (u8)r1;
loc_0804325A:
    r0 = sub_08042D9C(r0, r1, r2, r3); // 0x0804325A
    return sub_08043112(r0, r1, r2, r3);
    r1 = 0x03004CC8U; // [0x08043354]
    *(u32*)(r1 + 0x44) = (u32)r0;
    r0 = 0x08042A4FU /* &sub_08042A4E */; // [0x08043360]
    r0 = sub_08043860(r0, r1, r2, r3); // 0x08043268: BL 0x08043860
    return r0;
    r1 = 0x03004CC8U; // [0x08043354]
    *(u32*)(r1 + 0x40) = (u32)r0;
    return r0; // BX lr
    r2 = 0x03004CC8U; // [0x08043354]
    r3 = *(u8*)(r2 + 0x9);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804328E;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804328E;
    r3 = 0x30U;
    r3 = *(u8*)(r3 + r2);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804328E;
    r0 = 0x5U;
    return r0;
loc_0804328E:
    r3 = 0x04000200U /* &REG_IE */; // [0x08043364]
    r4 = *(u16*)(r3 + 0x8);
    r5 = 0x0U;
    *(u16*)(r3 + 0x8) = (u16)r5;
    *(u8*)(r2 + 0x9) = (u8)r0;
    *(u16*)(r2 + 0x32) = (u16)r1;
    *(u16*)(r3 + 0x8) = (u16)r4;
    r0 = 0x0U;
    return r0;
    r1 = 0x0300525CU; // [0x08043358]
    r1 = *(u32*)(r1);
    r2 = *(u8*)(r1 + 0x4);
    r1 = *(u8*)(r1 + 0x5);
    r1 |= r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r2 = 0x03004CC8U; // [0x08043354]
    if (cmp_lhs == cmp_rhs) goto loc_080432C2;
    r0 = 0x6U;
    *(u16*)(r2 + 0x14) = (u16)r0;
    r1 = 0x1U;
    r0 = 0xF3U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x080432BA
    r0 = 0x6U;
    return r0;
loc_080432C2:
    *(u16*)(r2 + 0x18) = (u16)r0;
    r0 = 0x0U;
    return r0;
    r2 = 0x03004CC8U; // [0x08043354]
    r1 = *(u8*)(r2 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 9;
    if (cmp_lhs == cmp_rhs) goto loc_080432DA;
    cmp_lhs = (s32)r1; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) goto loc_080432DA;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) goto loc_080432EA;
loc_080432DA:
    r0 = 0x7U;
    *(u16*)(r2 + 0x14) = (u16)r0;
    r1 = 0x1U;
    r0 = 0xF3U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x080432E2
    r0 = 0x7U;
    return r0;
loc_080432EA:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080432F2;
    r0 = 0x1U;
    goto loc_080432F4;
loc_080432F2:
    r0 = 0x0U;
loc_080432F4:
    *(u8*)(r2 + 0xB) = (u8)r0;
    r0 = 0x0U;
    return r0;
    r0 = 0x03004CC8U; // [0x08043354]
    r1 = *(u8*)(r0 + 0x7);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804332E(r0, r1, r2, r3);
    r4 = *(u8*)(r0 + 0x4);
    r1 = 0x28U;
    r2 = 0x2U;
    r4 -= 0x5U;
    cmp_lhs = (s32)r4; cmp_rhs = 7;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0804332E(r0, r1, r2, r3);
    r3 = 0x08043318U;
    r3 = *(u8*)(r3 + r4);
    r3 = (r3 << 1);
    pc += r3;
    return r0;
}

// ROM Address: 0x08043320..0x080433E2 (194 bytes, Thumb)
u32 sub_08043320(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x3U;
    *(u8*)(r0 + 0x7) = (u8)r1;
    r1 = 0x9U;
    goto loc_08043338;
    *(u8*)(r0 + 0x7) = (u8)r2;
    r1 = 0x1U;
    *(u16*)(r0 + 0x1A) = (u16)r1;
    return r0;
    *(u8*)(r0 + 0x7) = (u8)r2;
    return r0;
    *(u16*)(r0 + 0x1A) = (u16)r1;
    r1 = 0xAU;
loc_08043338:
    *(u8*)(r0 + 0x4) = (u8)r1;
    return r0;
loc_0804333C:
    r4 = 0x03004CC8U; // [0x08043354]
    r2 = *(u32*)(r4 + 0x40);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804334A;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08043346: BL __call_via_r3
loc_0804334A:
    r0 = 0x0U;
    *(u16*)(r4 + 0x16) = (u16)r0;
    *(u16*)(r4 + 0x14) = (u16)r0;
    return r0;
    r0 = r0;
    r4 = 0x4DA130FFU; // [0x08043678]
    r0 = (r0 << 12);
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    *(u16*)(r0) = (u16)r1;
    r0 = r0;
    cmp_lhs = (s32)r2; cmp_rhs = 79;
    r4 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r1 = 0x03004CC8U; // [0x080433D8]
    r0 = *(u8*)(r1 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804337A;
    r0 = 0x0U;
    *(u8*)(r1 + 0x2) = (u8)r0;
    r1 = 0x0U;
    r0 = 0x45U;
    goto loc_0804333C;
loc_0804337A:
    return r0; // BX lr
    r4 = 0x03004CC8U; // [0x080433D8]
    r1 = 0x1U;
    r5 = *(u8*)(r4 + 0xE);
    *(u8*)(r4 + 0xE) = (u8)r1;
    r0 = sub_080444EE(r0, r1, r2, r3); // 0x08043386
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x0804338A
    *(u8*)(r4 + 0xE) = (u8)r5;
    return r0;
    r4 = 0x03004CC8U; // [0x080433D8]
    r0 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) goto loc_080433D4;
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x03005268U; // [0x080433DC]
    r0 = (r1 << 2);
    r0 = *(u32*)(r2 + r0);
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 38;
    if (cmp_lhs != cmp_rhs) goto loc_080433D4;
    r5 = 0x0U;
    *(u8*)(r4 + 0x5) = (u8)r5;
    *(u8*)(r4 + 0x4) = (u8)r5;
    r0 = 0x4U;
    r0 = sub_080446A8(r0, r1, r2, r3); // 0x080433B2
    r0 = *(u8*)(r4 + 0x10);
    r1 = r4;
    r3 = 0x1U;
    r1 += 0x20U;
    r2 = *(u8*)(r1 + 0x4);
    r3 <<= (r0 & 0xFF);
    r2 &= ~r3;
    *(u8*)(r1 + 0x4) = (u8)r2;
    r0 = (r0 << 1);
    r0 = r0 + r4;
    *(u16*)(r0 + 0x28) = (u16)r5;
    r1 = 0x0U;
    r0 = 0x24U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x080433D0
loc_080433D4:
    return r0;
    r0 = r0;
    r4 = 0x31091C01U; // [0x080436FC]
    r0 = (r0 << 12);
    *(u16*)(r5 + r1) = (u16)r0;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x080433E4..0x08043860 (1148 bytes, Thumb)
u32 sub_080433E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
    r2 = r0;
    r0 = r1;
    r1 = r2;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080433EE: BL 0x08046E58
    return r0;
    r5 = 0x04000200U /* &REG_IE */; // [0x08043544]
    r3 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r3;
    r2 = *(u16*)(r5);
    r6 = 0x80U;
    r1 = 0x1U;
    r7 = 0x40U;
    r2 &= ~r6;
    r2 &= ~r7;
    *(u16*)(r5) = (u16)r2;
    r0 = 0x087B7710U; // [0x08043548]
    *(u16*)(r5 + 0x8) = (u16)r1;
    r0 = *(u32*)(r0);
    r1 = 0x00000504U; // [0x0804354C]
    r2 = r0;
    r2 += 0x1CU;
    r0 = 0x03004D14U; // [0x08043550]
    r0 = sub_0804362E(r0, r1, r2, r3); // 0x08043418
    r0 = 0x087B7710U; // [0x08043548]
    r4 = *(u32*)(r0);
    r4 += 0x18U;
    r1 = r4;
    r0 = 0x3U;
    r0 = sub_0804384E(r0, r1, r2, r3); // 0x08043426
    r0 = *(u32*)(r4);
    r1 = 0x1U;
    r0 |= r1;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x83U;
    r2 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08043554]
    r0 = (r0 << 8);
    *(u16*)(r2 + 0x8) = (u16)r0;
    r0 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r0;
    r0 = *(u16*)(r5);
    r0 |= r6;
    r0 |= r7;
    *(u16*)(r5) = (u16)r0;
    *(u16*)(r5 + 0x8) = (u16)r1;
    return r0;
    r0 = sub_08043558(r0, r1, r2, r3); // 0x0804344C
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x08043450
    r0 = 0x1U;
    r0 = sub_08042CE6(r0, r1, r2, r3); // 0x08043456
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x0804345A
    r0 = sub_08042B34(r0, r1, r2, r3); // 0x0804345E
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x08043462
    r0 = 0x04000200U /* &REG_IE */; // [0x08043544]
    r1 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r2 = *(u16*)(r0);
    r3 = 0x80U;
    r1 = 0x1U;
    r2 &= ~r3;
    r3 = 0x40U;
    r2 &= ~r3;
    *(u16*)(r0) = (u16)r2;
    *(u16*)(r0 + 0x8) = (u16)r1;
    return r0;
    r4 = r0;
    r2 = 0x64U;
    r1 = 0x0U;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08043486: BL 0x08049168
    r0 = 0x1U;
    *(u8*)(r4) = (u8)r0;
    return r0;
    r2 = *(u8*)(r0);
    r4 = r0;
    r0 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080434A6;
    r2 = *(u8*)(r4 + 0x1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080434A6;
    r0 = 0x1U;
    return r0;
loc_080434A6:
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r4;
    r0 += 0x4U;
    r2 = 0x18U;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080434B2: BL 0x08049144
    r0 = *(u8*)(r4 + 0x3);
    r0 += 0x1U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = *(u8*)(r4 + 0x2);
    r0 += 0x1U;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    *(u8*)(r4 + 0x2) = (u8)r0;
    r0 = 0x0U;
    *(u8*)(r4) = (u8)r0;
    return r0;
    r4 = r0;
    r0 = r1;
    r1 = *(u8*)(r4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080434DC;
    r0 = 0x0U;
loc_080434DA:
    return r0;
loc_080434DC:
    r5 = 0x04000200U /* &REG_IE */; // [0x08043544]
    r1 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r1;
    r1 = *(u8*)(r4 + 0x1);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r4;
    r1 += 0x4U;
    r2 = 0x18U;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080434F0: BL 0x08049144
    r0 = *(u8*)(r4 + 0x1);
    r2 = 0x18U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r4;
    r0 += 0x4U;
    r1 = 0x0U;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08043504: BL 0x08049168
    r0 = *(u8*)(r4 + 0x3);
    r1 = 0x1U;
    r0 += 0xFFU;
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = *(u8*)(r4 + 0x1);
    r0 += 0x1U;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    *(u8*)(r4 + 0x1) = (u8)r0;
    r2 = *(u8*)(r4 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08043522;
    *(u8*)(r4) = (u8)r1;
loc_08043522:
    *(u16*)(r5 + 0x8) = (u16)r1;
    r0 = 0x1U;
    goto loc_080434DA;
    r0 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08043542;
    r2 = 0x03004D14U; // [0x08043550]
    r1 = *(u8*)(r1 + 0x2);
    r2 -= 0x4U;
    r0 = 0x0U;
loc_08043536:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043536;
    *(u8*)(r2) = (u8)r1;
loc_08043542:
    return r0; // BX lr
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    *(u8*)(r2 + 0x1C) = (u8)r0;
    r3 = (r7 >> 1);
    r4 = (r0 << 20);
    r0 = r0;
    r5 = 0x68103A0CU; // [0x080435A4]
    r0 = (r0 << 12);
    r0 = (r0 << 4);
    r0 = (r0 << 16);
    r0 = 0x04000200U /* &REG_IE */; // [0x080438FC]
    r7 = *(u16*)(r0 + 0x8);
    r6 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r6;
    r4 = 0x0U;
loc_08043564:
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r6;
    r0 = 0x03005268U; // [0x08043900]
    r5 = (r4 << 2);
    r1 = *(u32*)(r0 + r5);
    r0 = sp;
    r2 = 0x01000034U; // [0x08043904]
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043572
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r6;
    r0 = 0x03005268U; // [0x08043900]
    r2 = 0x01000034U; // [0x08043904]
    r0 += 0x10U;
    r1 = *(u32*)(r0 + r5);
    r0 = sp;
    r2 -= 0x2AU;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043586
    r0 = 0x03005268U; // [0x08043900]
    r1 = 0x10U;
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r0 = r0 + r4;
    r4 += 0x1U;
    r4 = (r4 << 16);
    r4 = (r4 >> 16);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    *(u8*)(r0 + 0x10) = (u8)r1;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043564;
    r2 = 0x03005268U; // [0x08043900]
    r1 = 0x57U;
    r2 -= 0xCU;
    r0 = *(u32*)(r2);
    *(u8*)(r0 + 0xF) = (u8)r1;
    *(u8*)(r0 + 0x4) = (u8)r6;
    *(u8*)(r0 + 0x5) = (u8)r6;
    *(u8*)(r0 + 0x6) = (u8)r6;
    r0 = *(u32*)(r2 + 0x4);
    *(u8*)(r0 + 0x2) = (u8)r6;
    r0 = 0x04000200U /* &REG_IE */; // [0x080438FC]
    *(u16*)(r0 + 0x8) = (u16)r7;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x04000200U /* &REG_IE */; // [0x080438FC]
    r6 = *(u16*)(r0 + 0x8);
    r7 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r7;
    r4 = 0x03005268U; // [0x08043900]
    r3 = 0x0; // sp + 0x0
    r4 -= 0xCU;
    r1 = *(u32*)(r4 + 0x4);
    r0 = 0x0U;
    r5 = *(u8*)(r1);
    *(u16*)(r3) = (u16)r0;
    r2 = 0x01000034U; // [0x08043904]
    r0 = sp;
    r2 -= 0x20U;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x080435DC
    r0 = 0x8U;
    r5 &= r0;
    r0 = *(u32*)(r4 + 0x4);
    r3 = 0x0; // sp + 0x0
    *(u8*)(r0) = (u8)r5;
    r0 = 0x0U;
    *(u16*)(r3) = (u16)r0;
    r2 = 0x01000034U; // [0x08043904]
    r0 = sp;
    r1 = *(u32*)(r4);
    r2 += 0x26U;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x080435F6
    r0 = *(u32*)(r4);
    r1 = 0x4U;
    *(u8*)(r0 + 0x9) = (u8)r1;
    r2 = *(u32*)(r4 + 0x4);
    r1 = 0x0U;
    *(u8*)(r2 + 0x6) = (u8)r1;
    r1 = 0xFFU;
    *(u8*)(r0) = (u8)r1;
    r0 = sub_08043558(r0, r1, r2, r3); // 0x0804360A
    r1 = *(u32*)(r4 + 0x4);
    r0 = 0x0U;
    *(u8*)(r1 + 0x9) = (u8)r0;
loc_08043614:
    r2 = (r0 << 1);
    r0 += 0x1U;
    r0 = (r0 << 24);
    r2 = r2 + r1;
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    *(u16*)(r2 + 0x12) = (u16)r7;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043614;
    r0 = 0x04000200U /* &REG_IE */; // [0x080438FC]
    *(u16*)(r0 + 0x8) = (u16)r6;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r2 = r3;
    r3 = (r0 << 4);
    r3 = (r3 >> 28);
    cmp_lhs = (s32)r3; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08043640;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043644;
loc_08043640:
    r3 = (r0 << 30);
    if (cmp_lhs == cmp_rhs) goto loc_0804364E;
loc_08043644:
    r0 = 0x2U;
loc_08043646:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_0804364E:
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08043656;
    r3 = 0x00000E64U; // [0x08043908]
    goto loc_08043658;
loc_08043656:
    r3 = 0x00000504U; // [0x0804390C]
loc_08043658:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08043660;
    r0 = 0x1U;
    goto loc_08043646;
loc_08043660:
    r6 = 0x03005268U; // [0x08043900]
    r4 = 0x03005268U; // [0x08043900]
    r6 -= 0xCU;
    *(u32*)(r6) = (u32)r0;
    r0 += 0xB4U;
    r1 = r0;
    r1 += 0x28U;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = r1;
    r0 += 0xE0U;
    *(u32*)(r6 + 0x8) = (u32)r1;
    *(u32*)(r4) = (u32)r0;
    r0 += 0xFFU;
    r5 = 0x03005268U; // [0x08043900]
    r0 += 0xC1U;
    r5 += 0x10U;
    *(u32*)(r5) = (u32)r0;
    r0 = 0x1U;
loc_08043684:
    r3 = (r0 << 2);
    r7 = r3 + r4;
    r7 -= 0x40U;
    r7 = *(u32*)(r7 + 0x3C);
    r0 += 0x1U;
    r7 += 0x70U;
    *(u32*)(r4 + r3) = r7;
    r7 = r3 + r5;
    r7 -= 0x40U;
    r7 = *(u32*)(r7 + 0x3C);
    r0 = (r0 << 16);
    r7 += 0x1CU;
    r0 = (r0 >> 16);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    *(u32*)(r5 + r3) = r7;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043684;
    r0 = *(u32*)(r5 + 0xC);
    r0 += 0x1CU;
    r1 += 0xC0U;
    *(u32*)(r1 + 0x1C) = (u32)r0;
    r1 = stack[3]; // [sp + 0xC]
    r0 = sub_08045A70(r0, r1, r2, r3); // 0x080436AE
    r0 = sub_080435BE(r0, r1, r2, r3); // 0x080436B2
    r0 = 0x0U;
    r2 = 0x0U;
loc_080436BA:
    r1 = (r0 << 2);
    r3 = *(u32*)(r4 + r1);
    r0 += 0x1U;
    *(u32*)(r3 + 0x68) = (u32)r2;
    r3 = *(u32*)(r4 + r1);
    r0 = (r0 << 16);
    *(u32*)(r3 + 0x6C) = (u32)r2;
    r3 = *(u32*)(r5 + r1);
    r0 = (r0 >> 16);
    *(u32*)(r3 + 0x14) = (u32)r2;
    r1 = *(u32*)(r5 + r1);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    *(u32*)(r1 + 0x18) = (u32)r2;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080436BA;
    r0 = 0x08045531U; // [0x08043910]
    r2 = *(u32*)(r6 + 0x8);
    r0 = (r0 >> 1);
    r0 = (r0 << 1);
    r2 += 0x8U;
    r1 = 0x30U;
    goto loc_080436EC;
loc_080436E4:
    r3 = *(u16*)(r0);
    r0 += 0x2U;
    *(u16*)(r2) = (u16)r3;
    r2 += 0x2U;
loc_080436EC:
    r3 = r1 - 1;
    r3 = (r3 << 16);
    r3 = (r3 >> 16);
    r4 = r1;
    r1 = r3;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080436E4;
    r0 = *(u32*)(r6 + 0x8);
    r1 = r0;
    r1 += 0x9U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x0U;
    goto loc_08043646;
    r5 = r0;
    r0 = 0x1U;
    r7 = 0x03005268U; // [0x08043900]
    r0 <<= (r5 & 0xFF);
    r4 = (r0 << 24);
    r7 -= 0xCU;
    r0 = *(u32*)(r7);
    r4 = (r4 >> 24);
    r2 = *(u8*)(r0 + 0x2);
    r3 = r2;
    r3 &= r4;
    if (cmp_lhs == cmp_rhs) goto loc_0804372A;
    r3 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804372A;
    r3 += 0xFFU;
    *(u8*)(r0 + 0x1) = (u8)r3;
loc_0804372A:
    r2 &= ~r4;
    *(u8*)(r0 + 0x2) = (u8)r2;
    r3 = *(u8*)(r0 + 0x3);
    r3 |= r4;
    *(u8*)(r0 + 0x3) = (u8)r3;
    r3 = *(u8*)(r0);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043742;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043742;
    r2 = 0xFFU;
    *(u8*)(r0) = (u8)r2;
loc_08043742:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804376E;
    r6 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r6;
    r1 = (r5 << 5);
    r1 = r1 + r0;
    r2 = 0x01000034U; // [0x08043904]
    r1 += 0x14U;
    r2 -= 0x24U;
    r0 = sp;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043758
    r0 = *(u32*)(r7);
    r1 = *(u8*)(r0 + 0x3);
    r1 &= ~r4;
    *(u8*)(r0 + 0x3) = (u8)r1;
    r1 = *(u8*)(r0 + 0x7);
    r1 &= ~r4;
    *(u8*)(r0 + 0x7) = (u8)r1;
    r0 = r0 + r5;
    *(u8*)(r0 + 0xA) = (u8)r6;
loc_0804376E:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_080437BC;
    r6 = 0x03005268U; // [0x08043900]
    r6 -= 0xCU;
    r2 = *(u32*)(r6 + 0x4);
    r2 = *(u8*)(r2);
    r2 = (r2 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0804378E;
    r2 = *(u32*)(r6 + 0x8);
    r2 = *(u32*)(r2);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804378A: BL __call_via_r3
loc_0804378E:
    r0 = *(u32*)(r6);
    r4 = 0x0U;
    r1 = *(u8*)(r0 + 0x2);
    r0 = *(u8*)(r0 + 0x3);
    r1 |= r0;
    r5 = r1;
    r7 = 0x1U;
loc_0804379C:
    r0 = r7;
    r0 <<= (r4 & 0xFF);
    r0 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_080437AC;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_08043706(r0, r1, r2, r3); // 0x080437A8
loc_080437AC:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804379C;
    r1 = *(u32*)(r6);
    r0 = 0xFFU;
    *(u8*)(r1) = (u8)r0;
loc_080437BC:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r0;
    r0 = 0x08043775U; // [0x08043914]
    r4 = r1;
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x080437CA
    r1 = 0x03005268U; // [0x08043900]
    r1 -= 0xCU;
    r0 = *(u32*)(r1 + 0x4);
    *(u16*)(r0 + 0x1C) = (u16)r4;
    r0 = *(u8*)(r0);
    r0 = (r0 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080437E8;
    r0 = *(u32*)(r1 + 0x8);
    r1 = r4;
    r2 = *(u32*)(r0);
    r0 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080437E4: BL __call_via_r3
loc_080437E8:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x080437C3U; // [0x08043918]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x080437F2
    r0 = sub_080461B2(r0, r1, r2, r3); // 0x080437F6
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x03005268U; // [0x08043900]
    r0 -= 0xCU;
    r0 = *(u32*)(r0 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    return r0; // BX lr
    r1 = r0;
    r2 = 0x03005268U; // [0x08043900]
    r0 = 0x0U;
    *(u8*)(r1) = (u8)r0;
    r2 -= 0xCU;
    r0 = *(u32*)(r2);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08043828;
    r0 = 0x300U; // (3 << 8)
loc_08043824:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08043828:
    r0 = sub_08043800(r0, r1, r2, r3); // 0x08043828
    r3 = *(u8*)(r0);
    cmp_lhs = (s32)r3; cmp_rhs = 40;
    if (cmp_lhs == cmp_rhs) goto loc_08043836;
    cmp_lhs = (s32)r3; cmp_rhs = 54;
    if (cmp_lhs != cmp_rhs) goto loc_0804384A;
loc_08043836:
    r3 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043842;
    r0 = *(u32*)(r2);
    r0 = *(u8*)(r0 + 0x2);
    goto loc_08043844;
loc_08043842:
    r0 = *(u8*)(r0 + 0x4);
loc_08043844:
    *(u8*)(r1) = (u8)r0;
    r0 = 0x0U;
    goto loc_08043824;
loc_0804384A:
    r0 = 0x10U;
    goto loc_08043824;
    r2 = r0;
    r0 = r1;
    r1 = r2;
    r0 = sub_08045CA8(r0, r1, r2, r3); // 0x08043856
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08043860..0x0804386C (12 bytes, Thumb)
u32 sub_08043860(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08045A4C(r0, r1, r2, r3); // 0x08043862
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x0804386C..0x08045598 (7468 bytes, Thumb)
u32 sub_0804386C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_0804386C:
    r1 = r0;
    r0 = 0x03005268U; // [0x08043900]
    r2 = 0x8U;
    r0 -= 0xCU;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r3 = *(u8*)(r0);
    if (cmp_lhs == cmp_rhs) goto loc_08043884;
    r3 |= r2;
    r1 = r3;
    *(u8*)(r0) = (u8)r1;
    return r0; // BX lr
loc_08043884:
    r3 &= ~r2;
    *(u8*)(r0) = (u8)r3;
    return r0; // BX lr
    r2 = 0x03005268U; // [0x08043900]
    r1 = r0;
    r2 -= 0xCU;
    r2 = *(u32*)(r2 + 0x8);
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    *(u32*)(r2) = (u32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804389C;
    r0 = 0x1U;
loc_0804389C:
    goto loc_0804386C;
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x080438A0
    r0 = 0x03005268U; // [0x08043900]
    r0 -= 0xCU;
    r0 = *(u32*)(r0 + 0x4);
    r0 = *(u16*)(r0 + 0x1C);
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x080437C3U; // [0x08043918]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x080438B6
    r0 = sub_08045EA8(r0, r1, r2, r3); // 0x080438BA
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = 0x03005268U; // [0x08043900]
    r4 = r0;
    r5 -= 0xCU;
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 147;
    if (cmp_lhs == cmp_rhs) goto loc_080438E0;
    r0 = 0x10U;
loc_080438DA:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_080438E0:
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x080438E0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080438F2;
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0 + 0x7);
    goto loc_080438F4;
loc_080438F2:
    r0 = 0xFFU;
loc_080438F4:
    *(u8*)(r4) = (u8)r0;
    r0 = 0x0U;
    goto loc_080438DA;
    r0 = r0;
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    *(u16*)(r5 + r1) = (u16)r0;
    r0 = (r0 << 12);
    r4 = r6;
    r0 = (r0 << 4);
    r4 = (r4 >> 25);
    r0 = r0;
    r4 = (r0 << 20);
    r0 = r0;
    *(u8*)(r6 + r4) = (u8)r1;
    r4 = (r0 >> 32);
    r7 += 0x75U;
    r4 = (r0 >> 32);
    r7 += 0xC3U;
    r4 = (r0 >> 32);
    r0 = 0x087B7734U; // [0x08043CC4]
    r1 = 0x030000F0U; // [0x08043CC8]
    goto loc_0804392E;
loc_08043924:
    r3 = *(u8*)(r1);
    r1 += 0x1U;
    r0 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_0804395A;
loc_0804392E:
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043924;
    r0 = 0x3000000U; // (3 << 24)
    r3 = r0;
    r1 = 0x0U;
loc_0804393C:
    r4 = *(u16*)(r3);
    r1 += 0x1U;
    r1 = (r1 << 24);
    r2 = r4 + r2;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    r1 = (r1 >> 24);
    r3 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 90;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804393C;
    r1 = 0x030000F0U; // [0x08043CC8]
    r1 -= 0x10U;
    r1 = *(u16*)(r1 + 0x1A);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08043962;
loc_0804395A:
    r0 = 0x1U;
loc_0804395C:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08043962:
    r4 = 0x0300525CU; // [0x08043CCC]
    r2 = 0x5AU;
    r1 = *(u32*)(r4);
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043968
    r0 = *(u32*)(r4 + 0x4);
    r2 = 0x80U;
    r1 = *(u8*)(r0);
    r1 |= r2;
    *(u8*)(r0) = (u8)r1;
    r0 = 0x0U;
    goto loc_0804395C;
    r0 = 0x04000200U /* &REG_IE */; // [0x08043CD0]
    r0 = *(u16*)(r0 + 0x8);
    r4 = 0x03005294U; // [0x08043CD4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804399A;
    r1 = 0x6U;
    r0 = 0x3DU;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x0804398A
    r1 = *(u32*)(r4);
    r0 = 0x6U;
    *(u16*)(r1 + 0x12) = (u16)r0;
loc_08043994:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_0804399A:
    r0 = sub_08045CCE(r0, r1, r2, r3); // 0x0804399A
    r0 = sub_080435BE(r0, r1, r2, r3); // 0x0804399E
    r0 = 0x8U;
    r0 = sub_080459A4(r0, r1, r2, r3); // 0x080439A4
    r1 = 0x00008001U; // [0x08043CD8]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080439DA;
    r0 = *(u32*)(r4);
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08043CDC]
    r0 = *(u8*)(r0 + 0xA);
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r1 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    r2 = 0x830000U; // (131 << 16)
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 1);
loc_080439C4:
    r3 = *(u32*)(r0);
    r3 = (r3 << 16);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080439C4;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x0804554DU; // [0x08043CE0]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x080439D0
    r0 = sub_0804628A(r0, r1, r2, r3); // 0x080439D4
    goto loc_08043994;
loc_080439DA:
    r0 = 0x1U;
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08043CDC]
    r0 = (r0 << 13);
    r1 += 0x20U;
    *(u16*)(r1 + 0x8) = (u16)r0;
    r1 = 0x0U;
    r0 = 0x3DU;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x080439E8
    goto loc_08043994;
    r0 = 0x04000200U /* &REG_IE */; // [0x08043CD0]
    r0 = *(u16*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043A00;
    r0 = ~r0;
loc_080439FA:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08043A00:
    r0 = sub_08045CCE(r0, r1, r2, r3); // 0x08043A00
    r0 = sub_080435BE(r0, r1, r2, r3); // 0x08043A04
    r0 = 0x1EU;
    r0 = sub_080459A4(r0, r1, r2, r3); // 0x08043A0A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080439FA;
    r1 = 0x1U;
    r2 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08043CDC]
    r1 = (r1 << 13);
    r2 += 0x20U;
    *(u16*)(r2 + 0x8) = (u16)r1;
    goto loc_080439FA;
    r0 = 0x08045565U; // [0x08043CE4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043A22
    r0 = sub_08045E54(r0, r1, r2, r3); // 0x08043A26
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r0;
    r6 = r1;
    r4 = r2;
    r0 = 0x080437C3U; // [0x08043CE8]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043A3A
    r0 = (r5 << 30);
    r0 = (r0 >> 30);
    r0 += 0x3CU;
    r2 = r4;
    r1 = r6;
    r0 = sub_08045F4A(r0, r1, r2, r3); // 0x08043A48
    r7 = 0x0300525CU; // [0x08043CCC]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043A5E;
    r1 = *(u32*)(r7 + 0x4);
    r0 = 0x1U;
    *(u16*)(r1 + 0x1A) = (u16)r0;
loc_08043A58:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08043A5E:
    r5 = 0x04000200U /* &REG_IE */; // [0x08043CD0]
    r6 = *(u16*)(r5 + 0x8);
    r0 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r0;
    r1 = r4;
    r0 = 0x258U; // (75 << 3)
    r0 = sub_080433E4(r0, r1, r2, r3); // 0x08043A6C: BL 0x080433E6
    r1 = *(u32*)(r7 + 0x4);
    *(u16*)(r1 + 0x1A) = (u16)r0;
    *(u16*)(r5 + 0x8) = (u16)r6;
    goto loc_08043A58;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043AE8;
    r2 = 0x03005294U; // [0x08043CD4]
    r3 = 0x0300525CU; // [0x08043CCC]
    r2 = *(u32*)(r2);
    r3 = *(u32*)(r3);
    r2 = *(u32*)(r2 + 0x24);
    r4 = r3;
    r2 += 0x4U;
    r5 = *(u8*)(r2);
    r4 += 0x80U;
    r2 += 0x1U;
    *(u16*)(r4 + 0x18) = (u16)r5;
    r6 = *(u8*)(r2);
    r2 += 0x1U;
    r6 = (r6 << 8);
    r6 |= r5;
    r5 = 0x0300525CU; // [0x08043CCC]
    *(u16*)(r4 + 0x18) = (u16)r6;
    r5 = *(u32*)(r5);
    r7 = (r6 << 16);
    r5 += 0x90U;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08043AB6;
    r7 = 0x8000U; // (1 << 15)
    r6 ^= r7;
    *(u16*)(r4 + 0x18) = (u16)r6;
    r4 = 0x1U;
    goto loc_08043AB8;
loc_08043AB6:
    r4 = 0x0U;
loc_08043AB8:
    *(u8*)(r5 + 0x7) = (u8)r4;
    r4 = 0x0U;
loc_08043ABC:
    r6 = r3 + r4;
    r4 += 0x1U;
    r5 = *(u8*)(r2);
    r4 = (r4 << 24);
    r6 += 0x90U;
    r4 = (r4 >> 24);
    r2 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 13;
    *(u8*)(r6 + 0xA) = (u8)r5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043ABC;
    r4 = r2 + 1;
    r2 = 0x0U;
loc_08043AD4:
    r6 = r3 + r2;
    r2 += 0x1U;
    r5 = *(u8*)(r4);
    r2 = (r2 << 24);
    r6 += 0xA0U;
    r2 = (r2 >> 24);
    r4 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    *(u8*)(r6 + 0x9) = (u8)r5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043AD4;
loc_08043AE8:
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08043AE8
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r1;
    r1 = (r1 >> 8);
    r5 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    *(u8*)(r3 + 0x1) = (u8)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08043B0E;
    r1 = *(u8*)(r3 + 0x1);
    r3 = 0x80U;
    r1 |= r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x1) = (u8)r1;
loc_08043B0E:
    r1 = 0x2U;
loc_08043B10:
    r3 = *(u8*)(r2);
    r6 = sp;
    r2 += 0x1U;
    *(u8*)(r6 + r1) = (u8)r3;
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r1; cmp_rhs = 15;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043B10;
    r2 = 0x0U;
    r3 = r4;
    r1 = 0x0U;
loc_08043B28:
    r6 = *(u8*)(r3);
    r1 += 0x1U;
    r1 = (r1 << 24);
    r2 = r6 + r2;
    r6 = *(u8*)(r5);
    r5 += 0x1U;
    r1 = (r1 >> 24);
    r2 = r6 + r2;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r3 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043B28;
    r1 = 0xFFU;
    r2 ^= r1;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0xF) = (u8)r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08043B52;
    r0 = 0x0U;
    *(u8*)(r3 + 0xE) = (u8)r0;
loc_08043B52:
    r0 = 0x08043A79U; // [0x08043CEC]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043B54
    r1 = r4;
    r0 = sp;
    r0 = sub_08045EFC(r0, r1, r2, r3); // 0x08043B5C
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r0;
    r0 = sub_08043558(r0, r1, r2, r3); // 0x08043B6A
    r0 = r4;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = 0x0300525CU; // [0x08043CCC]
    if (cmp_lhs == cmp_rhs) goto loc_08043B8C;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r4;
    r1 = *(u32*)(r5);
    r2 = 0x01000040U; // [0x08043CF0]
    r0 = sp;
    r1 += 0x14U;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043B84
    r0 = *(u32*)(r5);
    *(u8*)(r0 + 0x8) = (u8)r4;
loc_08043B8C:
    r1 = *(u32*)(r5);
    r0 = 0x0U;
loc_08043B90:
    r2 = r1 + r0;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    *(u8*)(r2 + 0xA) = (u8)r4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043B90;
    *(u8*)(r1 + 0x1) = (u8)r4;
    *(u8*)(r1 + 0x2) = (u8)r4;
    *(u8*)(r1 + 0x3) = (u8)r4;
    *(u8*)(r1 + 0x7) = (u8)r4;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x08043775U; // [0x08043CF4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043BB0
    r0 = sub_08045EA8(r0, r1, r2, r3); // 0x08043BB4
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x08043BB8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043BD6;
    r0 = 0x0300525CU; // [0x08043CCC]
    r0 = *(u32*)(r0 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043BDE;
    r0 = 0x1U;
    r0 = sub_08043B66(r0, r1, r2, r3); // 0x08043BD0
    goto loc_08043BDE;
loc_08043BD6:
    r1 = r0;
    r0 = 0x19U;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08043BDA
loc_08043BDE:
    r0 = 0x0804557FU; // [0x08043CF8]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043BE0
    r0 = sub_08045F7C(r0, r1, r2, r3); // 0x08043BE4
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = 0x0300525CU; // [0x08043CCC]
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r4 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08043C36;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x08043775U; // [0x08043CF4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043C02
    r0 = sub_08045E70(r0, r1, r2, r3); // 0x08043C06
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x08043C0A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043C2E;
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0xC0U;
    r1 = *(u32*)(r0 + 0x1C);
    r1 += 0x4U;
    r0 = 0x0U;
loc_08043C1C:
    r2 = *(u8*)(r1);
    r3 = sp;
    r1 += 0x1U;
    *(u8*)(r3 + r0) = (u8)r2;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043C1C;
loc_08043C2E:
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    *(u32*)(r0 + 0x4) = (u32)r6;
loc_08043C36:
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0xC0U;
    r2 = *(u32*)(r0 + 0x1C);
    r2 += 0x4U;
    r7 = r5;
    goto loc_08043CBA;
loc_08043C42:
    r0 = *(u8*)(r2 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08043CB2;
    r1 = *(u32*)(r7);
    r6 = 0x1U;
    r3 = r6;
    r5 = *(u8*)(r1 + 0x2);
    r3 <<= (r0 & 0xFF);
    r5 &= r3;
    if (cmp_lhs != cmp_rhs) goto loc_08043CB2;
    r5 = *(u8*)(r1 + 0x3);
    r5 &= r3;
    if (cmp_lhs != cmp_rhs) goto loc_08043CB2;
    r5 = sp;
    r5 = *(u8*)(r5 + r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08043C6E;
    r5 = *(u32*)(r7 + 0x4);
    r5 = r5 + r0;
    r6 = *(u8*)(r5 + 0xE);
    r6 += 0x1U;
    *(u8*)(r5 + 0xE) = (u8)r6;
loc_08043C6E:
    r5 = *(u32*)(r7 + 0x4);
    r5 = r5 + r0;
    r6 = *(u8*)(r5 + 0xE);
    cmp_lhs = (s32)r6; cmp_rhs = 3;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08043CB2;
    r6 = 0x0U;
    *(u8*)(r5 + 0xE) = (u8)r6;
    r5 = 0xFFU;
    r6 = r1 + r0;
    *(u8*)(r6 + 0xA) = (u8)r5;
    r5 = *(u8*)(r1 + 0x2);
    r3 |= r5;
    *(u8*)(r1 + 0x2) = (u8)r3;
    r3 = *(u8*)(r1 + 0x1);
    r5 = (r0 << 5);
    r3 += 0x1U;
    *(u8*)(r1 + 0x1) = (u8)r3;
    r6 = *(u16*)(r2);
    r3 = r5 + r1;
    *(u16*)(r3 + 0x14) = (u16)r6;
    *(u8*)(r3 + 0x16) = (u8)r0;
    r3 = 0x1U;
    *(u8*)(r1) = (u8)r3;
    r1 = *(u32*)(r7 + 0x4);
    r6 = 0x80U;
    r3 = *(u8*)(r1);
    r0 = (r0 << 1);
    r3 &= ~r6;
    *(u8*)(r1) = (u8)r3;
    r3 = *(u32*)(r7);
    r3 = r5 + r3;
    r3 = *(u16*)(r3 + 0x14);
    r0 = r0 + r1;
    *(u16*)(r0 + 0x12) = (u16)r3;
loc_08043CB2:
    r4 += 0xFFU;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    r2 += 0x4U;
loc_08043CBA:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043C42;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    *(u8*)(r6 + 0x1C) = (u8)r4;
    r3 = (r7 >> 1);
    r0 = (r6 << 3);
    r0 = (r0 << 12);
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    *(u16*)(r2 + r2) = (u16)r4;
    r0 = (r0 << 12);
    *(u16*)(r0) = (u16)r1;
    r0 = r0;
    r0 = (r0 << 4);
    r0 = (r0 << 16);
    *(u8*)(r1 + r5) = (u8)r5;
    r4 = (r0 >> 32);
    *(u8*)(r4 + r5) = (u8)r5;
    r4 = (r0 >> 32);
    r7 += 0xC3U;
    r4 = (r0 >> 32);
    r2 -= 0x79U;
    r4 = (r0 >> 32);
    r0 = (r0 << 1);
    r0 = (r0 << 4);
    r7 += 0x75U;
    r4 = (r0 >> 32);
    *(u8*)(r7 + r5) = (u8)r7;
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    if (cmp_lhs != cmp_rhs) goto loc_08043D08;
    r0 = sub_08043BEE(r0, r1, r2, r3); // 0x08043D04
loc_08043D08:
    r6 = 0x0300525CU; // [0x080440B8]
    cmp_lhs = (s32)r4; cmp_rhs = 26;
    if (cmp_lhs != cmp_rhs) goto loc_08043D3A;
    r0 = *(u32*)(r6);
    r0 += 0x80U;
    r0 = *(u16*)(r0 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043D50;
    r0 = 0x08043775U; // [0x080440BC]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043D1A
    r0 = sub_08045EA8(r0, r1, r2, r3); // 0x08043D1E
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x08043D22
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043D50;
    r0 = *(u32*)(r6 + 0x8);
    r1 = *(u32*)(r6);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r1 += 0x80U;
    r0 = *(u16*)(r0 + 0x4);
    *(u16*)(r1 + 0x14) = (u16)r0;
    goto loc_08043D50;
loc_08043D3A:
    cmp_lhs = (s32)r4; cmp_rhs = 27;
    if (cmp_lhs != cmp_rhs) goto loc_08043D50;
    r1 = *(u32*)(r6);
    r0 = 0x0U;
    r2 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_08043D4C;
    r1 += 0x80U;
    *(u16*)(r1 + 0x14) = (u16)r0;
loc_08043D4C:
    r1 = *(u32*)(r6 + 0x4);
    *(u8*)(r1 + 0x9) = (u8)r0;
loc_08043D50:
    r1 = r5;
    r0 = r4;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08043D54
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x08043CFDU; // [0x080440C0]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043D62
    r0 = sub_08045F98(r0, r1, r2, r3); // 0x08043D66
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x08043CFDU; // [0x080440C0]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043D74
    r0 = sub_08045FB4(r0, r1, r2, r3); // 0x08043D78
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x08045599U /* &sub_08045598 */; // [0x080440C4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043D86
    r0 = sub_08045FD0(r0, r1, r2, r3); // 0x08043D8A
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r3 = 0x0; // sp + 0x0
    r4 = 0x0U;
    *(u16*)(r3) = (u16)r4;
    r5 = 0x0300525CU; // [0x080440B8]
    r2 = 0x01000040U; // [0x080440C8]
    r1 = *(u32*)(r5);
    r0 = sp;
    r1 += 0x14U;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043DA6
    r0 = *(u32*)(r5 + 0x8);
    r1 = *(u32*)(r5);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r2 = *(u8*)(r0 + 0x1);
    *(u8*)(r1 + 0x8) = (u8)r4;
    r0 += 0x4U;
    r1 = 0x0U;
loc_08043DBA:
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08043E60;
    r6 = r0 + 6;
    r0 += 0x13U;
    r5 = *(u8*)(r0);
    r2 += 0xF9U;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r3 = 0xFFU;
    r5 ^= r3;
    r0 += 0x1U;
    r4 = 0x0U;
    r3 = 0x0U;
loc_08043DD4:
    r7 = *(u8*)(r0);
    r3 += 0x1U;
    r3 = (r3 << 24);
    r4 = r7 + r4;
    r7 = *(u8*)(r6);
    r6 += 0x1U;
    r3 = (r3 >> 24);
    r4 = r7 + r4;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    r0 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = 8;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043DD4;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_08043E56;
    r6 = 0x0300525CU; // [0x080440B8]
    r0 -= 0x1CU;
    r3 = *(u32*)(r6);
    r4 = *(u8*)(r3 + 0x8);
    r4 = (r4 << 5);
    r3 = r4 + r3;
    r4 = *(u16*)(r0);
    r3 += 0x14U;
    r0 += 0x2U;
    *(u16*)(r3) = (u16)r4;
    r4 = *(u8*)(r0);
    r0 += 0x2U;
    *(u8*)(r3 + 0x2) = (u8)r4;
    r4 = *(u16*)(r0);
    r4 = (r4 << 17);
    r4 = (r4 >> 17);
    *(u16*)(r3 + 0x4) = (u16)r4;
    r4 = *(u16*)(r0);
    r4 = (r4 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08043E1E;
    r4 = 0x1U;
    goto loc_08043E20;
loc_08043E1E:
    r4 = 0x0U;
loc_08043E20:
    *(u8*)(r3 + 0x3) = (u8)r4;
    r4 = r0 + 2;
    r0 = 0x0U;
loc_08043E26:
    r7 = r3 + r0;
    r0 += 0x1U;
    r5 = *(u8*)(r4);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 13;
    *(u8*)(r7 + 0x6) = (u8)r5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043E26;
    r0 = r4 + 1;
    r4 = 0x0U;
loc_08043E3C:
    r7 = r3 + r4;
    r4 += 0x1U;
    r5 = *(u8*)(r0);
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    r0 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 8;
    *(u8*)(r7 + 0x15) = (u8)r5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043E3C;
    r3 = *(u32*)(r6);
    r4 = *(u8*)(r3 + 0x8);
    r4 += 0x1U;
    *(u8*)(r3 + 0x8) = (u8)r4;
loc_08043E56:
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043DBA;
loc_08043E60:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x080455B5U /* &sub_080455B4 */; // [0x080440CC]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043E6A
    r0 = sub_08045FEC(r0, r1, r2, r3); // 0x08043E6E
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x080437C3U; // [0x080440D0]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043E7C
    r0 = sub_08046008(r0, r1, r2, r3); // 0x08043E80
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = 0x0300525CU; // [0x080440B8]
    r4 = r0;
    r1 = 0x0U;
    r3 = *(u32*)(r5);
    r0 = 0x0U;
loc_08043E96:
    r2 = (r0 << 5);
    r2 = r2 + r3;
    r2 = *(u16*)(r2 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08043EAA;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08043E96;
loc_08043EAA:
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_08043EB2;
    r1 = (r0 << 6);
    goto loc_08043ECC;
loc_08043EB2:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043ECC;
    r0 = *(u32*)(r5 + 0x4);
    *(u16*)(r0 + 0x1E) = (u16)r4;
    r0 = 0x080437C3U; // [0x080440D0]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043EBC
    r0 = r4;
    r0 = sub_08046024(r0, r1, r2, r3); // 0x08043EC2
loc_08043EC6:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08043ECC:
    r0 = 0x1FU;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08043ECE
    goto loc_08043EC6;
    r7 = r1;
    if (cmp_lhs != cmp_rhs) goto loc_08043F8E;
    r3 = 0x0300525CU; // [0x080440B8]
    r0 = *(u32*)(r3 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 += 0x4U;
    r2 = *(u16*)(r0);
    r0 += 0x2U;
    r5 = *(u8*)(r0);
    r0 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08043F8E;
    r0 = 0x1U;
    r0 <<= (r5 & 0xFF);
    r1 = (r0 << 24);
    r0 = *(u32*)(r3);
    r1 = (r1 >> 24);
    r4 = *(u8*)(r0 + 0x2);
    r6 = r4;
    r6 &= r1;
    if (cmp_lhs != cmp_rhs) goto loc_08043F8E;
    r4 |= r1;
    *(u8*)(r0 + 0x2) = (u8)r4;
    r4 = *(u8*)(r0 + 0x3);
    r4 &= ~r1;
    *(u8*)(r0 + 0x3) = (u8)r4;
    r1 = 0x94U;
    *(u16*)(r1 + r0) = (u16)r2;
    r1 = *(u8*)(r0 + 0x1);
    r2 = 0x80U;
    r1 += 0x1U;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r1 = 0x0U;
    *(u8*)(r0) = (u8)r1;
    r0 = *(u32*)(r3 + 0x4);
    r1 = *(u8*)(r0);
    r1 |= r2;
    *(u8*)(r0) = (u8)r1;
    r2 = *(u16*)(r0 + 0x1E);
    r0 = *(u32*)(r3);
    r4 = 0x0U;
loc_08043F2C:
    r1 = (r4 << 5);
    r1 = r1 + r0;
    r1 = *(u16*)(r1 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08043F9E;
    r1 = *(u8*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08043F6A;
    r1 = (r4 << 5);
    r0 = r1 + r0;
    r0 += 0x14U;
    r2 = 0x10U;
    r1 = 0x4; // sp + 0x4
    r6 = 0x4; // sp + 0x4
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043F48
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r0;
    r0 = 0x0300525CU; // [0x080440B8]
    r2 = 0x01000040U; // [0x080440C8]
    r1 = *(u32*)(r0);
    r0 = sp;
    r1 += 0x14U;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043F5C
    r1 = 0x0300525CU; // [0x080440B8]
    r0 = 0x0U;
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x8) = (u8)r0;
    goto loc_08043F70;
loc_08043F6A:
    r1 = (r4 << 5);
    r6 = r1 + r0;
    r6 += 0x14U;
loc_08043F70:
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08043F8E;
    r0 = 0x0300525CU; // [0x080440B8]
    r4 = (r5 << 5);
    r0 = *(u32*)(r0);
    r2 = 0x10U;
    r1 = r4 + r0;
    r1 += 0x14U;
    r0 = r6;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x08043F82
    r0 = 0x0300525CU; // [0x080440B8]
    r0 = *(u32*)(r0);
    r0 = r4 + r0;
    *(u8*)(r0 + 0x16) = (u8)r5;
loc_08043F8E:
    r1 = r7;
    r0 = stack[9]; // [sp + 0x24]
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08043F92
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08043F9E:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08043F8E;
    goto loc_08043F2C;
    r0 = 0x08043ED5U; // [0x080440D4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043FAE
    r0 = sub_08046048(r0, r1, r2, r3); // 0x08043FB2
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r2 = 0xFFU;
    *(u8*)(r0) = (u8)r2;
    r2 = 0x0300525CU; // [0x080440B8]
    r2 = *(u32*)(r2 + 0x8);
    r2 += 0xC0U;
    r2 = *(u32*)(r2 + 0x1C);
    r3 = *(u8*)(r2);
    cmp_lhs = (s32)r3; cmp_rhs = 160;
    if (cmp_lhs == cmp_rhs) goto loc_08043FD2;
    cmp_lhs = (s32)r3; cmp_rhs = 161;
    if (cmp_lhs != cmp_rhs) goto loc_08043FE0;
loc_08043FD2:
    r2 += 0x6U;
    r3 = *(u8*)(r2);
    *(u8*)(r1) = (u8)r3;
    r1 = *(u8*)(r2 + 0x1);
    *(u8*)(r0) = (u8)r1;
    r0 = 0x0U;
    return r0; // BX lr
loc_08043FE0:
    r0 = 0x10U;
    return r0; // BX lr
    r0 = 0x08043ED5U; // [0x080440D4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08043FE8
    r0 = sub_08046064(r0, r1, r2, r3); // 0x08043FEC
    r2 = 0x0300525CU; // [0x080440B8]
    r0 = *(u32*)(r2 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08044006;
    r2 = *(u32*)(r2 + 0x4);
    r1 = 0x0U;
    r0 = r0 + r2;
    *(u8*)(r0 + 0xA) = (u8)r1;
loc_08044006:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x1U;
    r0 = sub_08045D46(r0, r1, r2, r3); // 0x08044010
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0804403A;
    r1 = 0x03005294U; // [0x080440D8]
    r1 = *(u32*)(r1);
    r2 = r1;
    r2 += 0x20U;
    r2 = *(u8*)(r2 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804403A;
    r1 = *(u8*)(r1 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 39;
    if (cmp_lhs == cmp_rhs) goto loc_08044038;
    cmp_lhs = (s32)r1; cmp_rhs = 37;
    if (cmp_lhs == cmp_rhs) goto loc_08044038;
    cmp_lhs = (s32)r1; cmp_rhs = 55;
    if (cmp_lhs != cmp_rhs) goto loc_0804403A;
loc_08044038:
    r0 = 0x0U;
loc_0804403A:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r3 = 0x0300525CU; // [0x080440B8]
    r0 = *(u32*)(r3);
    r1 = *(u8*)(r0 + 0x4);
    r0 = *(u8*)(r0 + 0x5);
    r0 |= r1;
    if (cmp_lhs == cmp_rhs) goto loc_080440B2;
    r0 = 0x04000200U /* &REG_IE */; // [0x080440DC]
    r7 = *(u16*)(r0 + 0x8);
    r1 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r0 = *(u32*)(r3 + 0x4);
    r6 = 0x0300525CU; // [0x080440B8]
    r0 = *(u8*)(r0 + 0x2);
    r5 = (r0 >> 4);
    r0 = 0x0U;
    r6 += 0xCU;
loc_08044062:
    r1 = 0x1U;
    r2 = *(u32*)(r3);
    r1 <<= (r0 & 0xFF);
    r2 = *(u8*)(r2 + 0x4);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08044086;
    r2 = *(u32*)(r3 + 0x4);
    r2 = *(u8*)(r2 + 0x2);
    r2 &= r1;
    if (cmp_lhs != cmp_rhs) goto loc_08044086;
    r2 = (r0 << 2);
    r2 = *(u32*)(r6 + r2);
    r2 += 0x2U;
    r4 = *(u16*)(r2);
    r4 += 0x1U;
    *(u16*)(r2) = (u16)r4;
loc_08044086:
    r2 = *(u32*)(r3);
    r2 = *(u8*)(r2 + 0x5);
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804409E;
    r1 &= r5;
    if (cmp_lhs != cmp_rhs) goto loc_0804409E;
    r1 = (r0 << 2);
    r1 = *(u32*)(r6 + r1);
    r1 += 0x36U;
    r2 = *(u16*)(r1);
    r2 += 0x1U;
    *(u16*)(r1) = (u16)r2;
loc_0804409E:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044062;
    r0 = *(u32*)(r3 + 0x4);
    r1 = 0x0U;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r0 = 0x04000200U /* &REG_IE */; // [0x080440DC]
    *(u16*)(r0 + 0x8) = (u16)r7;
loc_080440B2:
    return r0; // BX lr
    r0 = r0;
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    r7 += 0x75U;
    r4 = (r0 >> 32);
    r4 -= 0xFDU;
    r4 = (r0 >> 32);
    *(u8*)(r3 + r6) = (u8)r1;
    r4 = (r0 >> 32);
    r0 = (r0 << 1);
    r0 = (r0 << 4);
    *(u8*)(r6 + r6) = (u8)r5;
    r4 = (r0 >> 32);
    r7 += 0xC3U;
    r4 = (r0 >> 32);
    r6 -= 0xD5U;
    r4 = (r0 >> 32);
    *(u16*)(r2 + r2) = (u16)r4;
    r0 = (r0 << 12);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r0 = sub_08044040(r0, r1, r2, r3); // 0x080440E2
    r4 = 0x0300525CU; // [0x080444C4]
    r0 = *(u32*)(r4);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_0804418A;
    r1 = *(u32*)(r4 + 0x4);
    r0 = *(u8*)(r1 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080440FC;
    r0 += 0xFFU;
    *(u8*)(r1 + 0x6) = (u8)r0;
loc_080440FC:
    r0 = sub_0804400C(r0, r1, r2, r3); // 0x080440FC
    r1 = *(u32*)(r4 + 0x4);
    r5 = 0x2U;
    r3 = *(u8*)(r1);
    r2 = 0x4U;
    r6 = (r3 << 30);
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08044120;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044120;
    r3 |= r2;
    r0 = r3;
    *(u8*)(r1) = (u8)r0;
    r0 = 0xFFU;
    r0 += 0x69U;
    *(u16*)(r1 + 0x20) = (u16)r0;
    goto loc_08044138;
loc_08044120:
    r6 = (r3 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0804412E;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044138;
    r3 &= ~r2;
    *(u8*)(r1) = (u8)r3;
    goto loc_08044132;
loc_0804412E:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044138;
loc_08044132:
    r0 = *(u8*)(r1);
    r0 &= ~r5;
    goto loc_0804413C;
loc_08044138:
    r0 = *(u8*)(r1);
    r0 |= r5;
loc_0804413C:
    *(u8*)(r1) = (u8)r0;
    r0 = *(u8*)(r1);
    r3 = (r0 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0804418A;
    r3 = *(u16*)(r1 + 0x20);
    r6 = r4;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044186;
    r0 &= ~r2;
    *(u8*)(r1) = (u8)r0;
    r0 = *(u32*)(r6);
    r4 = 0x0U;
    r1 = *(u8*)(r0 + 0x2);
    r0 = *(u8*)(r0 + 0x3);
    r1 |= r0;
    r5 = r1;
    r7 = 0x1U;
loc_0804415E:
    r0 = r7;
    r0 <<= (r4 & 0xFF);
    r0 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_0804416E;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_08043706(r0, r1, r2, r3); // 0x0804416A
loc_0804416E:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804415E;
    r1 = *(u32*)(r6);
    r0 = 0xFFU;
    *(u8*)(r1) = (u8)r0;
    r0 = 0x1U;
loc_08044180:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08044186:
    r0 = r3 - 1;
    *(u16*)(r1 + 0x20) = (u16)r0;
loc_0804418A:
    r0 = 0x0U;
    goto loc_08044180;
    r7 = r2;
    r2 = 0x0U;
    r6 = r1;
    r1 = 0x0U;
    stack[5] = r2; // [sp + 0x14]
    *(u8*)(r6) = (u8)r1;
    *(u8*)(r7) = (u8)r1;
    r2 = stack[10]; // [sp + 0x28]
    r4 = 0x0300525CU; // [0x080444C4]
    *(u8*)(r2) = (u8)r1;
    r1 = *(u32*)(r4);
    r2 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_0804428C;
    r2 = 0x03005294U; // [0x080444C8]
    r2 = *(u32*)(r2);
    r2 = *(u8*)(r2 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804428C;
    r2 = *(u32*)(r4 + 0x4);
    r3 = *(u8*)(r2);
    r3 = (r3 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080441C6;
    r3 = 0xFFU;
    r3 += 0x69U;
    *(u16*)(r2 + 0x20) = (u16)r3;
loc_080441C6:
    r3 = *(u8*)(r2 + 0x6);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080441D4;
    r3 = *(u8*)(r1 + 0x9);
    *(u8*)(r2 + 0x6) = (u8)r3;
    r2 = 0x1U;
    stack[5] = r2; // [sp + 0x14]
loc_080441D4:
    r2 = (r0 << 24);
    r2 = (r2 >> 24);
    cmp_lhs = (s32)r2; cmp_rhs = 41;
    if (cmp_lhs != cmp_rhs) goto loc_080441FC;
    r0 = *(u32*)(r4 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 += 0x4U;
    r1 = *(u8*)(r0);
    *(u8*)(r6) = (u8)r1;
    r0 = *(u8*)(r0 + 0x1);
    *(u8*)(r7) = (u8)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080441F6;
    r0 = *(u32*)(r4);
    r0 = *(u8*)(r0 + 0x2);
    *(u8*)(r6) = (u8)r0;
loc_080441F6:
    r0 = 0x2U;
    stack[5] = r0; // [sp + 0x14]
    goto loc_08044240;
loc_080441FC:
    r0 -= 0x136U;
    if (cmp_lhs != cmp_rhs) goto loc_0804423A;
    r0 = *(u32*)(r4 + 0x8);
    r1 = *(u8*)(r1 + 0x2);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0 + 0x5);
    r0 ^= r1;
    r0 &= r1;
    r1 = 0x1U;
    *(u8*)(r6) = (u8)r0;
    *(u8*)(r7) = (u8)r1;
    r5 = 0x0U;
loc_08044218:
    r0 = *(u8*)(r6);
    r1 = 0x1U;
    r1 <<= (r5 & 0xFF);
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08044230;
    r0 = *(u32*)(r4);
    r1 = 0x0U;
    r0 = r0 + r5;
    *(u8*)(r0 + 0xA) = (u8)r1;
    r0 = r5;
    r0 = sub_08043706(r0, r1, r2, r3); // 0x0804422C
loc_08044230:
    r5 += 0x1U;
    r5 = (r5 << 24);
    r5 = (r5 >> 24);
    cmp_lhs = (s32)r5; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044218;
loc_0804423A:
    r0 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804428C;
loc_08044240:
    r0 = *(u32*)(r4 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r1 = *(u32*)(r0);
    stack[1] = r1; // [sp + 0x4]
    r0 = *(u32*)(r0 + 0x4);
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x08043775U; // [0x080444CC]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044250
    r0 = sub_08045E70(r0, r1, r2, r3); // 0x08044254
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x08044258
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    stack[4] = r0; // [sp + 0x10]
    if (cmp_lhs != cmp_rhs) goto loc_0804428E;
    r0 = *(u32*)(r4 + 0x8);
    r1 = r4;
    r0 += 0xC0U;
    r2 = *(u32*)(r0 + 0x1C);
    r3 = *(u32*)(r4);
    r2 += 0x4U;
    r0 = 0x0U;
loc_08044272:
    r5 = r3 + r0;
    r0 += 0x1U;
    r4 = *(u8*)(r2);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r2 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    *(u8*)(r5 + 0xA) = (u8)r4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044272;
    r0 = 0x0U;
    stack[3] = r0; // [sp + 0xC]
    r4 = 0x0U;
    goto loc_080442A0;
loc_0804428C:
    goto loc_08044428;
loc_0804428E:
    r0 = 0x11U;
    r1 = stack[4]; // [sp + 0x10]
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08044292
    r0 = stack[4]; // [sp + 0x10]
loc_08044298:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_080442A0:
    r0 = 0x1U;
    r0 <<= (r4 & 0xFF);
    stack[6] = r0; // [sp + 0x18]
    r5 = (r0 << 24);
    r0 = stack[4]; // [sp + 0x10]
    r5 = (r5 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044380;
    r0 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044338;
    r2 = 0x0300525CU; // [0x080444C4]
    r0 = *(u32*)(r2);
    r1 = *(u8*)(r0 + 0x2);
    r1 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_08044338;
    r1 = r0 + r4;
    r1 = *(u8*)(r1 + 0xA);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044330;
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080442E4;
    r0 = r2;
    r0 = *(u32*)(r0 + 0x4);
    r0 = r0 + r4;
    r1 = *(u8*)(r0 + 0xA);
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r0 + 0xA) = (u8)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08044338;
    goto loc_080442FE;
loc_080442E4:
    r0 = sub_08045EA8(r0, r1, r2, r3); // 0x080442E4
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x080442E8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044338;
    r3 = 0x0300525CU; // [0x080444C4]
    r0 = *(u32*)(r3 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804430A;
loc_080442FE:
    r0 = *(u8*)(r6);
    r0 |= r5;
    *(u8*)(r6) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r7) = (u8)r0;
    goto loc_08044338;
loc_0804430A:
    r2 = *(u32*)(r3 + 0x4);
    r1 = r2 + r4;
    r0 = *(u8*)(r1 + 0xA);
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r1 + 0xA) = (u8)r0;
    r2 = *(u16*)(r2 + 0x1A);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08044338;
    r0 = 0x0U;
    *(u8*)(r1 + 0xA) = (u8)r0;
    r0 = *(u32*)(r3);
    r0 = *(u8*)(r0 + 0x2);
    r0 = sub_080461CE(r0, r1, r2, r3); // 0x08044326
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x0804432A
    goto loc_080442FE;
loc_08044330:
    r1 = *(u32*)(r2 + 0x4);
    r0 = 0x0U;
    r1 = r1 + r4;
    *(u8*)(r1 + 0xA) = (u8)r0;
loc_08044338:
    r1 = 0x0300525CU; // [0x080444C4]
    r0 = *(u32*)(r1);
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044380;
    r2 = r0 + r4;
    r12 = r2;
    r2 = *(u8*)(r2 + 0xA);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044380;
    r1 = *(u8*)(r0 + 0x3);
    r3 = r1;
    r3 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_0804438A;
    r1 = 0x0300525CU; // [0x080444C4]
    cmp_lhs = (s32)r2; cmp_rhs = 10;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08044382;
    r2 = stack[10]; // [sp + 0x28]
    r0 = *(u8*)(r2);
    r0 |= r5;
    *(u8*)(r2) = (u8)r0;
    r0 = *(u32*)(r1);
    r2 = r1;
    r1 = *(u8*)(r0 + 0x2);
    r1 |= r5;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r1 = *(u8*)(r0 + 0x3);
    r1 &= ~r5;
    *(u8*)(r0 + 0x3) = (u8)r1;
    r1 = *(u8*)(r0 + 0x1);
    r1 += 0x1U;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r1 = *(u32*)(r2 + 0x4);
    r0 = 0x0U;
    r1 = r1 + r4;
    *(u8*)(r1 + 0xA) = (u8)r0;
loc_08044380:
    goto loc_080443E0;
loc_08044382:
    r0 = 0x0U;
    r2 = r12;
    *(u8*)(r2 + 0xA) = (u8)r0;
    goto loc_080443E0;
loc_0804438A:
    r0 = *(u8*)(r0 + 0x2);
    r0 |= r1;
    r0 &= r5;
    if (cmp_lhs != cmp_rhs) goto loc_080443E0;
    r0 = sub_08045EC4(r0, r1, r2, r3); // 0x08044392
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x08044396
    r3 = 0x0300525CU; // [0x080444C4]
    r0 = *(u32*)(r3 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r1 = *(u8*)(r0 + 0x1);
    r3 = *(u32*)(r3 + 0x4);
    r1 += 0xFFU;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r0 += 0x8U;
    r2 = (r4 << 1);
    r12 = r2;
    r12 += r3;
    goto loc_080443DC;
loc_080443B6:
    r2 = *(u16*)(r0);
    r3 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_080443D4;
    r3 = r12;
    r3 = *(u16*)(r3 + 0x12);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080443D4;
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[3]; // [sp + 0xC]
    r0 |= r1;
    r1 = (r0 << 24);
    r1 = (r1 >> 24);
    stack[3] = r1; // [sp + 0xC]
    goto loc_080443E0;
loc_080443D4:
    r0 += 0x4U;
    r1 += 0xFFU;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
loc_080443DC:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080443B6;
loc_080443E0:
    r1 = 0x0300525CU; // [0x080444C4]
    r0 = *(u32*)(r1);
    r0 = *(u8*)(r0 + 0x2);
    r1 = *(u8*)(r6);
    r0 &= r1;
    r0 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_080443F6;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08043706(r0, r1, r2, r3); // 0x080443F2
loc_080443F6:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08044402;
    goto loc_080442A0;
loc_08044402:
    r0 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044412;
    r0 = stack[3]; // [sp + 0xC]
    r0 = sub_080461CE(r0, r1, r2, r3); // 0x0804440A
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x0804440E
loc_08044412:
    r2 = 0x0300525CU; // [0x080444C4]
    r1 = stack[1]; // [sp + 0x4]
    r0 = *(u32*)(r2 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    *(u32*)(r0) = (u32)r1;
    r0 = stack[2]; // [sp + 0x8]
    r1 = *(u32*)(r2 + 0x8);
    r1 += 0xC0U;
    r1 = *(u32*)(r1 + 0x1C);
    *(u32*)(r1 + 0x4) = (u32)r0;
loc_08044428:
    r0 = 0x0U;
    goto loc_08044298;
    r5 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    r6 = 0x0300525CU; // [0x080444C4]
    if (cmp_lhs != cmp_rhs) goto loc_08044460;
    r0 = *(u32*)(r6);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044460;
    r0 = 0x08043775U; // [0x080444CC]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044442
    r0 = sub_08045EA8(r0, r1, r2, r3); // 0x08044446
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x0804444A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044460;
    r0 = *(u32*)(r6 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044460;
    r5 = 0x0U;
loc_08044460:
    r0 = *(u32*)(r6);
    r1 = *(u8*)(r0 + 0x2);
    r0 = *(u8*)(r0 + 0x3);
    r1 |= r0;
    r0 = *(u32*)(r6 + 0x4);
    r2 = *(u8*)(r0 + 0x5);
    r1 &= r2;
    *(u8*)(r0 + 0x5) = (u8)r1;
    r0 = *(u32*)(r6 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u8*)(r0 + 0x8) = (u8)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080444A2;
    r4 = 0x0U;
    r7 = 0x1U;
loc_08044480:
    r0 = r7;
    r1 = *(u32*)(r6 + 0x4);
    r0 <<= (r4 & 0xFF);
    r1 = *(u8*)(r1 + 0x5);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r1 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_08044498;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_08043706(r0, r1, r2, r3); // 0x08044494
loc_08044498:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044480;
loc_080444A2:
    r0 = *(u32*)(r6);
    r1 = *(u8*)(r0 + 0x2);
    r2 = *(u8*)(r0 + 0x3);
    r1 |= r2;
    if (cmp_lhs != cmp_rhs) goto loc_080444B0;
    r1 = 0xFFU;
    *(u8*)(r0) = (u8)r1;
loc_080444B0:
    r1 = r5;
    r0 = stack[1]; // [sp + 0x4]
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x080444B4
    r0 = *(u32*)(r6 + 0x4);
    r0 = *(u8*)(r0 + 0x9);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080444E8;
    r0 = 0x08043775U; // [0x080444CC]
    goto loc_080444D0;
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    *(u16*)(r2 + r2) = (u16)r4;
    r0 = (r0 << 12);
    r7 += 0x75U;
    r4 = (r0 >> 32);
loc_080444D0:
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x080444D0
    r0 = sub_08045F7C(r0, r1, r2, r3); // 0x080444D4
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x080444D8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080444E8;
    r1 = r0;
    r0 = 0x19U;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x080444E4
loc_080444E8:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r1 = 0x0300525CU; // [0x080448A8]
    r4 = r0;
    r0 = *(u32*)(r1);
    r2 = *(u8*)(r0 + 0x2);
    r3 = *(u8*)(r0 + 0x3);
    r2 |= r3;
    r2 &= r4;
    if (cmp_lhs == cmp_rhs) goto loc_0804451E;
    r1 = *(u32*)(r1 + 0x4);
    *(u8*)(r1 + 0x5) = (u8)r4;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_08044524;
    r2 = *(u8*)(r1);
    r2 = (r2 << 24);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044524;
    r0 = *(u8*)(r0 + 0x3);
    r0 &= r4;
    if (cmp_lhs == cmp_rhs) goto loc_0804451E;
    r1 = 0x0U;
    r0 = 0x30U;
    r0 = sub_0804442C(r0, r1, r2, r3); // 0x0804451A
loc_0804451E:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08044524:
    r0 = *(u8*)(r1 + 0x9);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044546;
    r0 = 0x08043775U; // [0x080448AC]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x0804452C
    r0 = sub_08045FB4(r0, r1, r2, r3); // 0x08044530
    r0 = sub_08045D7A(r0, r1, r2, r3); // 0x08044534
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044546;
    r1 = r0;
    r0 = 0x1BU;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08044540
    goto loc_0804451E;
loc_08044546:
    r0 = 0x0804442DU; // [0x080448B0]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044548
    r0 = r4;
    r0 = sub_080461CE(r0, r1, r2, r3); // 0x0804454E
    goto loc_0804451E;
    r6 = 0x0300525CU; // [0x080448A8]
    r5 = r0;
    r0 = *(u32*)(r6 + 0x4);
    r4 = 0x0U;
    r1 = 0x1U;
    *(u8*)(r0 + 0x5) = (u8)r5;
loc_08044562:
    r0 = r1;
    r0 <<= (r4 & 0xFF);
    r0 &= r5;
    if (cmp_lhs != cmp_rhs) goto loc_08044574;
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044562;
loc_08044574:
    r0 = 0x080437C3U; // [0x080448B4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044576
    r0 = *(u32*)(r6);
    r1 = 0x94U;
    r1 = *(u16*)(r1 + r0);
    r2 = (r4 << 5);
    r0 = r2 + r0;
    r0 = *(u16*)(r0 + 0x14);
    r2 = r5;
    r0 = sub_08046222(r0, r1, r2, r3); // 0x08044588
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r12 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080445F0;
    r6 = 0x0300525CU; // [0x080448A8]
    r0 = *(u32*)(r6 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080445F0;
    r0 = *(u32*)(r6 + 0x4);
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080445F0;
    r7 = 0x0U;
    r0 = *(u32*)(r6);
    r2 = 0x0U;
    *(u8*)(r0) = (u8)r7;
loc_080445B8:
    r3 = 0x1U;
    r5 = *(u32*)(r6 + 0x4);
    r4 = *(u8*)(r0 + 0x3);
    r5 = *(u8*)(r5 + 0x5);
    r3 <<= (r2 & 0xFF);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r5 &= r3;
    r5 &= r4;
    if (cmp_lhs == cmp_rhs) goto loc_080445E2;
    r5 = *(u8*)(r0 + 0x2);
    r4 &= ~r3;
    r5 |= r3;
    *(u8*)(r0 + 0x2) = (u8)r5;
    *(u8*)(r0 + 0x3) = (u8)r4;
    r3 = *(u8*)(r0 + 0x1);
    r3 += 0x1U;
    *(u8*)(r0 + 0x1) = (u8)r3;
    r3 = *(u32*)(r6 + 0x4);
    r3 = r3 + r2;
    *(u8*)(r3 + 0xA) = (u8)r7;
loc_080445E2:
    r2 += 0x1U;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080445B8;
    r0 = *(u32*)(r6 + 0x4);
    *(u8*)(r0 + 0x5) = (u8)r7;
loc_080445F0:
    r0 = r12;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x080445F2
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x08044593U; // [0x080448B8]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044600
    r0 = sub_08046252(r0, r1, r2, r3); // 0x08044604
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r1 = 0xFFU;
    *(u8*)(r0) = (u8)r1;
    r1 = 0x0300525CU; // [0x080448A8]
    r1 = *(u32*)(r1 + 0x8);
    r1 += 0xC0U;
    r1 = *(u32*)(r1 + 0x1C);
    r2 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 179;
    if (cmp_lhs == cmp_rhs) goto loc_08044624;
    cmp_lhs = (s32)r2; cmp_rhs = 180;
    if (cmp_lhs != cmp_rhs) goto loc_0804462C;
loc_08044624:
    r1 = *(u8*)(r1 + 0x4);
    *(u8*)(r0) = (u8)r1;
    r0 = 0x0U;
    return r0; // BX lr
loc_0804462C:
    r0 = 0x10U;
    return r0; // BX lr
    r0 = 0x08044593U; // [0x080448B8]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044634
    r0 = sub_0804626E(r0, r1, r2, r3); // 0x08044638
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x1U;
    r0 = sub_08045D46(r0, r1, r2, r3); // 0x08044646
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0804465E;
    r0 = 0x080437C3U; // [0x080448B4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044650
    r0 = sub_08046124(r0, r1, r2, r3); // 0x08044654: BL 0x08046124
loc_08044658:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_0804465E:
    r1 = 0x0U;
    r0 = 0x27U;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08044662
    goto loc_08044658;
    r3 = 0x0300525CU; // [0x080448A8]
    r3 = *(u32*)(r3 + 0x4);
    r3 = *(u8*)(r3);
    r4 = (r3 << 24);
    r3 = 0x0300525CU; // [0x080448A8]
    r3 = *(u32*)(r3);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_0804468E;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044684;
    r0 = *(u8*)(r3 + 0xF);
    r1 = *(u16*)(r2 + 0x2E);
    r0 = r0 + r1;
    *(u8*)(r3 + 0xF) = (u8)r0;
loc_08044684:
    r0 = *(u8*)(r3 + 0xF);
    r0 += 0x3U;
    *(u8*)(r3 + 0xF) = (u8)r0;
loc_0804468A:
    return r0; // BX lr
loc_0804468E:
    r3 = 0x0300525CU; // [0x080448A8]
    r3 = *(u32*)(r3);
    r0 = r3 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080446A0;
    r1 = *(u8*)(r0 + 0x10);
    r2 = *(u16*)(r2 + 0x2E);
    r1 = r1 + r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
loc_080446A0:
    r1 = *(u8*)(r0 + 0x10);
    r1 += 0x2U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    goto loc_0804468A;
    r6 = r0;
    r0 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080446C0;
    r0 = 0x400U; // (1 << 10)
loc_080446B8:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_080446C0:
    r0 = (r6 << 28);
    if (cmp_lhs != cmp_rhs) goto loc_080446CA;
    r0 = 0x600U; // (3 << 9)
    goto loc_080446B8;
loc_080446CA:
    r0 = 0x04000200U /* &REG_IE */; // [0x080448BC]
    r1 = *(u16*)(r0 + 0x8);
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r3;
    r3 = stack[4]; // [sp + 0x10]
    r0 = (r6 << 28);
    r0 = (r0 >> 30);
    r7 = (r3 << 2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804476C;
    r0 = stack[4]; // [sp + 0x10]
    r5 = 0x0U;
    r2 = 0x1U;
    r2 <<= (r0 & 0xFF);
    stack[2] = r2; // [sp + 0x8]
loc_080446EA:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044708;
    r0 = (r6 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044762;
    r0 = 0x0300525CU; // [0x080448A8]
    r2 = 0x2CU;
    r0 += 0xCU;
    r4 = *(u32*)(r0 + r7);
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r2 = *(u8*)(r2 + r4);
    r1 = *(u8*)(r0 + 0x4);
    r1 &= ~r2;
    *(u8*)(r0 + 0x4) = (u8)r1;
    goto loc_08044720;
loc_08044708:
    r0 = (r6 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044762;
    r0 = 0x0300525CU; // [0x080448A8]
    r0 += 0xCU;
    r4 = *(u32*)(r0 + r7);
    r4 += 0x34U;
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r1 = *(u8*)(r0 + 0x5);
    r2 = stack[2]; // [sp + 0x8]
    r1 &= ~r2;
    *(u8*)(r0 + 0x5) = (u8)r1;
loc_08044720:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044762;
    r0 = *(u16*)(r4);
    r0 = (r0 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044752;
    r2 = r4;
    r1 = (r5 << 24);
    r1 = (r1 >> 24);
    r0 = stack[4]; // [sp + 0x10]
    r0 = sub_08044668(r0, r1, r2, r3); // 0x08044732
    r1 = 0x2CU;
    r1 = *(u8*)(r1 + r4);
    r0 = 0x0U;
    r3 = 0x0U;
loc_0804473E:
    r2 = 0x1U;
    r2 <<= (r0 & 0xFF);
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08044748;
    *(u16*)(r4 + 0x2) = (u16)r3;
loc_08044748:
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804473E;
loc_08044752:
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r0;
    r2 = 0x0100001AU; // [0x080448C0]
    r1 = r4;
    r0 = sp;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x0804475E
loc_08044762:
    r5 += 0x1U;
    r5 = (r5 << 16);
    r5 = (r5 >> 16);
    cmp_lhs = (s32)r5; cmp_rhs = 2;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080446EA;
loc_0804476C:
    r4 = 0x0300525CU; // [0x080448A8]
    r0 = (r6 << 31);
    r4 += 0x1CU;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080447BE;
    r1 = *(u32*)(r4 + r7);
    r0 = *(u16*)(r1);
    r0 = (r0 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080447AE;
    r0 = 0x0300525CU; // [0x080448A8]
    r2 = *(u32*)(r0 + 0x4);
    r2 = *(u8*)(r2);
    r2 = (r2 << 24);
    r2 = *(u32*)(r0);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08044796;
    r3 = *(u8*)(r2 + 0xF);
    r5 = *(u16*)(r1 + 0x4);
    r3 = r3 + r5;
    r3 += 0x3U;
    *(u8*)(r2 + 0xF) = (u8)r3;
    goto loc_080447A4;
loc_08044796:
    r3 = stack[4]; // [sp + 0x10]
    r5 = *(u16*)(r1 + 0x4);
    r2 = r2 + r3;
    r3 = *(u8*)(r2 + 0x10);
    r3 = r3 + r5;
    r3 += 0x2U;
    *(u8*)(r2 + 0x10) = (u8)r3;
loc_080447A4:
    r0 = *(u32*)(r0);
    r3 = *(u8*)(r1 + 0x3);
    r2 = *(u8*)(r0 + 0x6);
    r2 &= ~r3;
    *(u8*)(r0 + 0x6) = (u8)r2;
loc_080447AE:
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r0;
    r2 = 0x0100001AU; // [0x080448C0]
    r0 = sp;
    r2 -= 0x14U;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x080447BA
loc_080447BE:
    r0 = (r6 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080447D6;
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r0;
    r1 = *(u32*)(r4 + r7);
    r2 = 0x0100001AU; // [0x080448C0]
    r1 += 0xCU;
    r2 -= 0x16U;
    r0 = sp;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x080447D2
loc_080447D6:
    r0 = 0x04000200U /* &REG_IE */; // [0x080448BC]
    r1 = stack[1]; // [sp + 0x4]
    *(u16*)(r0 + 0x8) = (u16)r1;
    r0 = 0x0U;
    goto loc_080446B8;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080447EE;
    r0 = 0x400U; // (1 << 10)
loc_080447EA:
    return r0; // BX lr
loc_080447EE:
    r4 = (r0 << 26);
    r1 = (r1 << 2);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08044804;
    r0 = 0x0300525CU; // [0x080448A8]
    r0 += 0xCU;
    r4 = *(u32*)(r0 + r1);
    *(u32*)(r4 + 0x68) = (u32)r2;
    r0 = *(u32*)(r0 + r1);
    *(u32*)(r0 + 0x6C) = (u32)r3;
    goto loc_08044814;
loc_08044804:
    r0 = (r0 << 27);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044818;
    r0 = 0x0300525CU; // [0x080448A8]
    r0 += 0x1CU;
    r4 = *(u32*)(r0 + r1);
    *(u32*)(r4 + 0x14) = (u32)r2;
    r0 = *(u32*)(r0 + r1);
    *(u32*)(r0 + 0x18) = (u32)r3;
loc_08044814:
    r0 = 0x0U;
    goto loc_080447EA;
loc_08044818:
    r0 = 0x600U; // (3 << 9)
    goto loc_080447EA;
    r7 = 0x0300525CU; // [0x080448A8]
    r12 = r3;
    r5 = *(u32*)(r7);
    r4 = r0;
    r3 = *(u8*)(r5);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_08044836;
    r0 = 0x00000301U; // [0x080448C4]
loc_08044830:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08044836:
    r0 = (r1 << 28);
    if (cmp_lhs != cmp_rhs) goto loc_08044840;
    r0 = 0x400U; // (1 << 10)
    goto loc_08044830;
loc_08044840:
    r0 = *(u8*)(r5 + 0x2);
    r7 = *(u8*)(r5 + 0x3);
    r0 |= r7;
    r7 = r1;
    r7 &= ~r0;
    if (cmp_lhs == cmp_rhs) goto loc_08044850;
    r0 = 0x00000401U; // [0x080448C8]
    goto loc_08044830;
loc_08044850:
    r0 = 0x00000401U; // [0x080448C8]
    r7 = (r4 << 27);
    r0 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08044862;
    r7 = *(u8*)(r5 + 0x6);
    r7 &= r1;
    if (cmp_lhs != cmp_rhs) goto loc_08044830;
    goto loc_08044868;
loc_08044862:
    r7 = *(u8*)(r5 + 0x4);
    r7 &= r1;
    if (cmp_lhs != cmp_rhs) goto loc_08044830;
loc_08044868:
    r0 = 0x0U;
loc_0804486A:
    r7 = 0x1U;
    r7 <<= (r0 & 0xFF);
    r7 &= r1;
    if (cmp_lhs != cmp_rhs) goto loc_0804487C;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804486A;
loc_0804487C:
    r7 = 0x0300525CU; // [0x080448A8]
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044888;
    r6 = r5;
    r6 += 0xFU;
    goto loc_08044890;
loc_08044888:
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044890;
    r6 = r5 + r0;
    r6 += 0x10U;
loc_08044890:
    r5 = 0x087B7714U; // [0x080448CC]
    r3 = (r3 << 4);
    r7 = *(u8*)(r5 + r3);
    r3 = *(u8*)(r6);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080448A0;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_080448D0;
loc_080448A0:
    r0 = 0x500U; // (5 << 8)
    goto loc_08044830;
    r0 = r0;
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    r7 += 0x75U;
    r4 = (r0 >> 32);
    r5 += r5;
    r4 = (r0 >> 32);
    r7 += 0xC3U;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r11; cmp_rhs = (s32)r2;
    r4 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r2 = r3;
    r0 = (r0 << 4);
    r1 = (r0 << 12);
    r0 = r0;
    r1 = (r0 << 16);
    r0 = r0;
    *(u8*)(r2 + 0x1C) = (u8)r4;
    r3 = (r7 >> 1);
loc_080448D0:
    r5 = 0x04000200U /* &REG_IE */; // [0x08044C74]
    r3 = *(u16*)(r5 + 0x8);
    stack[0] = r3; // [sp + 0x0]
    r3 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r3;
    lr = r3;
    r3 = (r4 << 26);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080448E4;
    cmp_lhs = (s32)r4; cmp_rhs = 64;
    if (cmp_lhs != cmp_rhs) goto loc_0804496A;
loc_080448E4:
    r3 = 0x03005268U; // [0x08044C78]
    r0 = (r0 << 2);
    r5 = *(u32*)(r3 + r0);
    r0 = 0x0U;
    *(u16*)(r5 + 0x18) = (u16)r0;
    r0 = r5;
    r0 += 0x2DU;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x7U;
    *(u32*)(r5 + 0x14) = (u32)r0;
    r0 = r5;
    r0 += 0x20U;
    *(u8*)(r0 + 0xC) = (u8)r1;
    *(u8*)(r5 + 0x1A) = (u8)r1;
    r3 = r2 - r7;
    *(u16*)(r5 + 0x2E) = (u16)r3;
    r3 = (r4 << 26);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0804490C;
    r3 = 0x0U;
    goto loc_0804490E;
loc_0804490C:
    r3 = 0x1U;
loc_0804490E:
    *(u8*)(r0 + 0xD) = (u8)r3;
    r3 = stack[6]; // [sp + 0x18]
    r4 = 0x0U;
    *(u32*)(r5 + 0x30) = (u32)r3;
    r3 = r12;
    *(u32*)(r5 + 0x28) = (u32)r3;
    r3 = 0x1FU;
    *(u8*)(r3 + r5) = (u8)r4;
    *(u8*)(r0) = (u8)r4;
    r0 = 0x0U;
    r3 = 0x1U;
loc_08044924:
    r7 = r5 + r0;
    *(u8*)(r7 + 0x1B) = (u8)r4;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r7 += 0x20U;
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    *(u8*)(r7 + 0x1) = (u8)r3;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044924;
    r3 = 0x03005268U; // [0x08044C78]
    r0 = 0x0U;
loc_0804493A:
    r7 = 0x1U;
    r7 <<= (r0 & 0xFF);
    r7 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08044948;
    r7 = (r0 << 2);
    r7 = *(u32*)(r3 + r7);
    *(u16*)(r7 + 0x2) = (u16)r4;
loc_08044948:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804493A;
    r0 = 0x03005268U; // [0x08044C78]
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r3 = *(u8*)(r0 + 0x4);
    r1 |= r3;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r0 = *(u8*)(r6);
    r0 = r0 - r2;
    *(u8*)(r6) = (u8)r0;
    r0 = 0x00008021U; // [0x08044C7C]
    *(u16*)(r5) = (u16)r0;
    goto loc_08044998;
loc_0804496A:
    r3 = (r4 << 27);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044998;
    r3 = 0x03005268U; // [0x08044C78]
    r0 = (r0 << 2);
    r3 += 0x10U;
    r0 = *(u32*)(r3 + r0);
    r3 = r12;
    *(u8*)(r0 + 0x3) = (u8)r1;
    *(u32*)(r0 + 0x8) = (u32)r3;
    r3 = r2 - r7;
    *(u16*)(r0 + 0x4) = (u16)r3;
    r3 = *(u8*)(r6);
    r2 = r3 - r2;
    *(u8*)(r6) = (u8)r2;
    r2 = 0x00008021U; // [0x08044C7C]
    r2 += 0x3U;
    *(u16*)(r0) = (u16)r2;
    r0 = 0x03005268U; // [0x08044C78]
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r2 = *(u8*)(r0 + 0x6);
    r1 |= r2;
    *(u8*)(r0 + 0x6) = (u8)r1;
loc_08044998:
    r0 = 0x04000200U /* &REG_IE */; // [0x08044C74]
    r3 = stack[0]; // [sp + 0x0]
    *(u16*)(r0 + 0x8) = (u16)r3;
    r0 = lr;
    goto loc_08044830;
    stack[0] = r3; // [sp + 0x0]
    r3 = r2;
    r2 = r1;
    r1 = r0;
    r0 = 0x20U;
    r0 = sub_0804481E(r0, r1, r2, r3); // 0x080449AE
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r3 = 0x03005268U; // [0x08044C78]
    r3 -= 0xCU;
    r3 = *(u32*)(r3);
    r3 = *(u8*)(r3);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080449CA;
    r2 += 0x3U;
    goto loc_080449CC;
loc_080449CA:
    r2 += 0x2U;
loc_080449CC:
    r4 = (r2 << 24);
    r2 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r4 = (r4 >> 24);
    r2 = r4;
    r3 = r1;
    r1 = r0;
    r0 = 0x10U;
    r0 = sub_0804481E(r0, r1, r2, r3); // 0x080449DC
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r1;
    r1 = 0x1U;
    r1 <<= (r0 & 0xFF);
    r0 = 0x03005268U; // [0x08044C78]
    r2 = 0x1AU;
    stack[0] = r2; // [sp + 0x0]
    r0 -= 0xCU;
    r3 = *(u32*)(r0);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r3 += 0x98U;
    r2 = r4;
    r0 = 0x40U;
    r0 = sub_0804481E(r0, r1, r2, r3); // 0x08044A02
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r6 = r0;
    r3 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044A20;
    r0 = 0x400U; // (1 << 10)
loc_08044A1A:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08044A20:
    r5 = 0x0U;
    r4 = (r3 << 2);
    cmp_lhs = (s32)r6; cmp_rhs = 32;
    r0 = 0x00000403U; // [0x08044C80]
    if (cmp_lhs != cmp_rhs) goto loc_08044A92;
    r7 = 0x03005268U; // [0x08044C78]
    r1 = 0x00008021U; // [0x08044C7C]
    r4 = *(u32*)(r7 + r4);
    r1 -= 0x1U;
    r6 = *(u16*)(r4);
    r1 &= ~r6;
    if (cmp_lhs != cmp_rhs) goto loc_08044A1A;
    r1 = *(u8*)(r4 + 0x1A);
    r1 ^= r2;
    r0 = r1;
    r0 &= r2;
    if (cmp_lhs != cmp_rhs) goto loc_08044AC6;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044AEA;
    r0 = 0x04000200U /* &REG_IE */; // [0x08044C74]
    r6 = *(u16*)(r0 + 0x8);
    stack[0] = r6; // [sp + 0x0]
    *(u16*)(r0 + 0x8) = (u16)r5;
    r0 = 0x0U;
    r6 = r5;
loc_08044A52:
    r5 = 0x1U;
    r5 <<= (r0 & 0xFF);
    r5 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08044A60;
    r5 = (r0 << 2);
    r5 = *(u32*)(r7 + r5);
    *(u16*)(r5 + 0x2) = (u16)r6;
loc_08044A60:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044A52;
    r0 = 0x03005268U; // [0x08044C78]
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r5 = *(u8*)(r0 + 0x4);
    r5 &= ~r1;
    *(u8*)(r0 + 0x4) = (u8)r5;
    *(u8*)(r4 + 0x1A) = (u8)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044A8A;
    r2 = r4;
    r1 = 0x0U;
    r0 = r3;
    r0 = sub_08044668(r0, r1, r2, r3); // 0x08044A82
    r0 = 0x27U;
    *(u16*)(r4) = (u16)r0;
loc_08044A8A:
    r0 = 0x04000200U /* &REG_IE */; // [0x08044C74]
    r6 = stack[0]; // [sp + 0x0]
    *(u16*)(r0 + 0x8) = (u16)r6;
    goto loc_08044AEA;
loc_08044A92:
    cmp_lhs = (s32)r6; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_08044AEE;
    r7 = 0x03005268U; // [0x08044C78]
    r6 = 0x00008021U; // [0x08044C7C]
    r7 += 0x10U;
    r1 = *(u32*)(r7 + r4);
    r6 += 0x3U;
    r12 = r1;
    r1 = *(u16*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_08044A1A;
    r1 = 0x0U;
    r0 = 0x0U;
loc_08044AAC:
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08044AB8;
    r6 = (r0 << 2);
    r6 = *(u32*)(r7 + r6);
    r6 = *(u8*)(r6 + 0x3);
    r1 |= r6;
loc_08044AB8:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044AAC;
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_08044ACC;
loc_08044AC6:
    r0 = 0x00000403U; // [0x08044C80]
    r0 += 0x1U;
    goto loc_08044A1A;
loc_08044ACC:
    r0 = 0x04000200U /* &REG_IE */; // [0x08044C74]
    r1 = *(u16*)(r0 + 0x8);
    *(u16*)(r0 + 0x8) = (u16)r5;
    r3 = 0x03005268U; // [0x08044C78]
    r6 = r12;
    r3 -= 0xCU;
    r3 = *(u32*)(r3);
    r6 = *(u8*)(r6 + 0x3);
    r5 = *(u8*)(r3 + 0x6);
    r5 &= ~r6;
    r5 |= r2;
    *(u8*)(r3 + 0x6) = (u8)r5;
    r3 = *(u32*)(r7 + r4);
    *(u8*)(r3 + 0x3) = (u8)r2;
    *(u16*)(r0 + 0x8) = (u16)r1;
loc_08044AEA:
    r0 = 0x0U;
    goto loc_08044A1A;
loc_08044AEE:
    r0 = 0x600U; // (3 << 9)
    goto loc_08044A1A;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044B04;
    r0 = 0x400U; // (1 << 10)
loc_08044AFE:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08044B04:
    r2 = 0x03005268U; // [0x08044C78]
    r1 = (r0 << 2);
    r5 = 0x04000200U /* &REG_IE */; // [0x08044C74]
    r2 = *(u32*)(r2 + r1);
    r4 = *(u16*)(r5 + 0x8);
    r2 += 0x34U;
    r1 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r1;
    r1 = *(u16*)(r2);
    r3 = (r1 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044B40;
    r3 = 0x00008021U; // [0x08044C7C]
    r3 += 0x22U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08044B26;
    r1 = 0x48U;
    goto loc_08044B28;
loc_08044B26:
    r1 = 0x47U;
loc_08044B28:
    *(u16*)(r2) = (u16)r1;
    r1 = 0x03005268U; // [0x08044C78]
    r6 = 0x1U;
    r1 -= 0xCU;
    r1 = *(u32*)(r1);
    r6 <<= (r0 & 0xFF);
    r3 = *(u8*)(r1 + 0x5);
    r3 &= ~r6;
    *(u8*)(r1 + 0x5) = (u8)r3;
    r1 = 0x1U;
    r0 = sub_08044668(r0, r1, r2, r3); // 0x08044B3C
loc_08044B40:
    *(u16*)(r5 + 0x8) = (u16)r4;
    r0 = 0x0U;
    goto loc_08044AFE;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044B54;
    r0 = 0x400U; // (1 << 10)
loc_08044B50:
    return r0; // BX lr
loc_08044B54:
    r4 = 0x03005268U; // [0x08044C78]
    r3 = (r0 << 2);
    r4 += 0x10U;
    r3 = *(u32*)(r4 + r3);
    r5 = 0x00008021U; // [0x08044C7C]
    r4 = *(u16*)(r3);
    r5 += 0x3U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_08044B6A;
    r0 = 0x00000403U; // [0x08044C80]
    goto loc_08044B50;
loc_08044B6A:
    r4 = 0x03005268U; // [0x08044C78]
    r4 -= 0xCU;
    r5 = *(u32*)(r4);
    r4 = *(u8*)(r5);
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044B7E;
    r4 = r5;
    r4 += 0xFU;
    r0 = *(u8*)(r5 + 0xF);
    goto loc_08044B86;
loc_08044B7E:
    r0 = r5 + r0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x10);
    r4 += 0x10U;
loc_08044B86:
    r5 = *(u16*)(r3 + 0x4);
    r0 = r0 + r5;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08044B98;
    r0 = 0x500U; // (5 << 8)
    goto loc_08044B50;
loc_08044B98:
    r5 = 0x04000200U /* &REG_IE */; // [0x08044C74]
    r6 = *(u16*)(r5 + 0x8);
    r7 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r7;
    r0 = r0 - r2;
    *(u32*)(r3 + 0x8) = (u32)r1;
    *(u8*)(r4) = (u8)r0;
    *(u16*)(r3 + 0x4) = (u16)r2;
    r0 = 0x1U;
    *(u8*)(r3 + 0x2) = (u8)r0;
    *(u16*)(r5 + 0x8) = (u16)r6;
    r0 = 0x0U;
    goto loc_08044B50;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08044BCC;
    r1 = 0x03005268U; // [0x08044C78]
    r0 = (r0 << 2);
    r1 += 0x10U;
    r0 = *(u32*)(r1 + r0);
    r2 = 0x00008021U; // [0x08044C7C]
    r1 = *(u16*)(r0);
    r2 += 0x3U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08044BCC;
    r1 = 0x1U;
    *(u8*)(r0 + 0x2) = (u8)r1;
loc_08044BCC:
    return r0; // BX lr
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08044BDE;
    r2 = 0x03005268U; // [0x08044C78]
    r1 = 0x0U;
    r0 = (r0 << 2);
    r2 += 0x10U;
    r0 = *(u32*)(r2 + r0);
    *(u8*)(r0 + 0x12) = (u8)r1;
loc_08044BDE:
    return r0; // BX lr
    r2 = 0x03005268U; // [0x08044C78]
    r6 = r0;
    r0 = (r0 << 2);
    r2 += 0x10U;
    r4 = *(u32*)(r2 + r0);
    r0 = *(u8*)(r4 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044BF8;
    r0 = *(u8*)(r4 + 0x3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044C00;
loc_08044BF8:
    r0 = 0x0U;
loc_08044BFA:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08044C00:
    r2 = 0x03005268U; // [0x08044C78]
    r3 = 0x087B7714U; // [0x08044C84]
    r2 -= 0xCU;
    r0 = *(u32*)(r2);
    r0 = *(u8*)(r0);
    r0 = (r0 << 4);
    r5 = r0 + r3;
    r0 = *(u16*)(r4);
    r3 = *(u8*)(r5 + 0x3);
    r0 = (r0 << 28);
    r0 = (r0 >> 28);
    r0 <<= (r3 & 0xFF);
    r3 = 0x0U;
    r0 |= r3;
    r3 = *(u16*)(r4 + 0x4);
    r0 |= r3;
    stack[2] = r0; // [sp + 0x8]
    r2 = *(u32*)(r2);
    r2 = *(u8*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044C32;
    r2 = *(u8*)(r4 + 0x3);
    r2 = (r2 << 18);
    r0 |= r2;
    stack[2] = r0; // [sp + 0x8]
loc_08044C32:
    r2 = 0x8; // sp + 0x8
    r0 = 0x0U;
    goto loc_08044C4A;
loc_08044C38:
    r3 = *(u8*)(r2);
    r7 = *(u32*)(r1);
    r2 += 0x1U;
    *(u8*)(r7) = (u8)r3;
    r7 += 0x1U;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r1) = (u32)r7;
loc_08044C4A:
    r3 = *(u8*)(r5);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08044C38;
    r0 = *(u32*)(r4 + 0x8);
    r7 = 0x03005268U; // [0x08044C78]
    stack[1] = r0; // [sp + 0x4]
    r7 -= 0xCU;
    r0 = *(u32*)(r7 + 0x8);
    r2 = *(u16*)(r4 + 0x4);
    r3 = *(u32*)(r0 + 0x4);
    r0 = 0x4; // sp + 0x4
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08044C60: BL __call_via_r3
    r0 = *(u32*)(r7);
    r2 = 0x10U;
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044C88;
    *(u8*)(r0 + 0xE) = (u8)r2;
    goto loc_08044C90;
    r0 = r0;
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    *(u16*)(r5 + r1) = (u16)r0;
    r0 = (r0 << 12);
    *(u16*)(r4) = (u16)r1;
    r0 = r0;
    r3 = (r0 << 16);
    r0 = r0;
    *(u8*)(r2 + 0x1C) = (u8)r4;
    r3 = (r7 >> 1);
loc_08044C88:
    r1 = *(u8*)(r0 + 0xE);
    r2 <<= (r6 & 0xFF);
    r1 |= r2;
    *(u8*)(r0 + 0xE) = (u8)r1;
loc_08044C90:
    r0 = *(u8*)(r5);
    r1 = *(u16*)(r4 + 0x4);
    r0 = r0 + r1;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    goto loc_08044BFA;
    r0 = 0x0300525CU; // [0x08045074]
    r4 = r2;
    r0 = *(u32*)(r0);
    r2 = 0x087B7714U; // [0x08045078]
    r0 = *(u8*)(r0);
    r5 = r4;
    r5 += 0x20U;
    r0 = (r0 << 4);
    r7 = r0 + r2;
    r0 = *(u16*)(r4);
    r2 = 0x00008022U; // [0x0804507C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08044CDE;
    r2 = *(u32*)(r4 + 0x30);
    r3 = *(u32*)(r4 + 0x28);
    r3 = r3 + r2;
loc_08044CC0:
    r2 = *(u8*)(r5);
    r6 = (r2 << 2);
    r6 = r6 + r4;
    r6 = *(u32*)(r6 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08044CDE;
    r2 += 0x1U;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    *(u8*)(r5) = (u8)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_08044CC0;
    r2 = 0x0U;
    *(u8*)(r5) = (u8)r2;
    goto loc_08044CC0;
loc_08044CDE:
    r2 = (r0 << 25);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044CE6;
    r6 = 0x0U;
    goto loc_08044D1C;
loc_08044CE6:
    r2 = 0x00008022U; // [0x0804507C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08044D10;
    r2 = *(u8*)(r5);
    r6 = *(u16*)(r4 + 0x2E);
    r2 = (r2 << 2);
    r2 = r2 + r4;
    r2 = *(u32*)(r2 + 0x4);
    r12 = r6;
    lr = r2;
    r3 = r2 + r6;
    r2 = *(u32*)(r4 + 0x28);
    r6 = *(u32*)(r4 + 0x30);
    r2 = r2 + r6;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08044D0C;
    r3 = lr;
    r2 = r2 - r3;
    goto loc_08044D18;
loc_08044D0C:
    r6 = r12;
    goto loc_08044D1C;
loc_08044D10:
    r6 = *(u16*)(r4 + 0x2E);
    r2 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08044D1C;
loc_08044D18:
    r6 = (r2 << 16);
    r6 = (r6 >> 16);
loc_08044D1C:
    r2 = *(u8*)(r7 + 0x3);
    r0 = (r0 << 28);
    r0 = (r0 >> 28);
    r0 <<= (r2 & 0xFF);
    r2 = 0x0U;
    r2 |= r0;
    r0 = 0x1FU;
    r0 = *(u8*)(r0 + r4);
    r3 = *(u8*)(r7 + 0x4);
    r0 <<= (r3 & 0xFF);
    r2 |= r0;
    r0 = *(u8*)(r5);
    r3 = *(u8*)(r7 + 0x5);
    r12 = r0;
    r0 <<= (r3 & 0xFF);
    r2 |= r0;
    r0 = r12;
    r0 = r0 + r4;
    r0 += 0x20U;
    r0 = *(u8*)(r0 + 0x1);
    r3 = *(u8*)(r7 + 0x6);
    r0 <<= (r3 & 0xFF);
    r0 |= r2;
    r0 |= r6;
    r2 = 0x0300525CU; // [0x08045074]
    stack[0] = r0; // [sp + 0x0]
    r2 = *(u32*)(r2);
    r2 = *(u8*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044D60;
    r2 = *(u8*)(r4 + 0x1A);
    r2 = (r2 << 18);
    r0 |= r2;
    stack[0] = r0; // [sp + 0x0]
loc_08044D60:
    r12 = sp;
    r0 = 0x0U;
    goto loc_08044D7C;
loc_08044D66:
    r3 = r12;
    r2 = *(u8*)(r3);
    r3 += 0x1U;
    r12 = r3;
    r3 = *(u32*)(r1);
    *(u8*)(r3) = (u8)r2;
    r3 += 0x1U;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r1) = (u32)r3;
loc_08044D7C:
    r2 = *(u8*)(r7);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08044D66;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044D9E;
    r0 = *(u8*)(r5);
    r2 = 0x0300525CU; // [0x08045074]
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r2 + 0x8);
    r2 = r6;
    r3 = *(u32*)(r0 + 0x4);
    r0 = 0x4; // sp + 0x4
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08044D9A: BL __call_via_r3
loc_08044D9E:
    r0 = *(u16*)(r4);
    r2 = 0x00008022U; // [0x0804507C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08044DB8;
    r0 = *(u8*)(r5);
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r5) = (u8)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_08044DB8;
    r2 = 0x0U;
    *(u8*)(r5) = (u8)r2;
loc_08044DB8:
    r0 = 0x0300525CU; // [0x08045074]
    r2 = 0x1U;
    r0 = *(u32*)(r0);
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044DC8;
    *(u8*)(r0 + 0xE) = (u8)r2;
    goto loc_08044DD2;
loc_08044DC8:
    r1 = *(u8*)(r0 + 0xE);
    r3 = stack[2]; // [sp + 0x8]
    r2 <<= (r3 & 0xFF);
    r1 |= r2;
    *(u8*)(r0 + 0xE) = (u8)r1;
loc_08044DD2:
    r0 = *(u8*)(r7);
    r0 = r0 + r6;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x0300525CU; // [0x08045074]
    r1 = *(u32*)(r0);
    r2 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_08044EAA;
    r2 = *(u8*)(r1 + 0x4);
    r3 = *(u8*)(r1 + 0x5);
    r2 |= r3;
    r3 = *(u8*)(r1 + 0x6);
    r2 |= r3;
    if (cmp_lhs == cmp_rhs) goto loc_08044EAA;
    r2 = 0x0U;
    *(u8*)(r1 + 0xE) = (u8)r2;
    r1 = *(u32*)(r0 + 0x8);
    r6 = 0x0U;
    r1 += 0x6CU;
    stack[0] = r1; // [sp + 0x0]
    r5 = 0x0U;
loc_08044E08:
    r0 = 0x0300525CU; // [0x08045074]
    r7 = (r5 << 2);
    r0 += 0xCU;
    r2 = *(u32*)(r0 + r7);
    r4 = 0x0U;
    r0 = *(u16*)(r2);
    r0 = (r0 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044E22;
    r1 = sp;
    r0 = r5;
    r0 = sub_08044C9C(r0, r1, r2, r3); // 0x08044E1C
    r4 = r0;
loc_08044E22:
    r0 = 0x0300525CU; // [0x08045074]
    r0 += 0xCU;
    r0 = *(u32*)(r0 + r7);
    r1 = *(u16*)(r0 + 0x34);
    r1 = (r1 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08044E3C;
    r2 = r0;
    r2 += 0x34U;
    r0 = r5;
    r1 = sp;
    r0 = sub_08044C9C(r0, r1, r2, r3); // 0x08044E36
    r4 = r0 + r4;
loc_08044E3C:
    r0 = 0x0300525CU; // [0x08045074]
    r1 = 0x00008022U; // [0x0804507C]
    r0 += 0x1CU;
    r0 = *(u32*)(r0 + r7);
    r1 += 0x2U;
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08044E56;
    r1 = sp;
    r0 = r5;
    r0 = sub_08044BE0(r0, r1, r2, r3); // 0x08044E50
    r4 = r0 + r4;
loc_08044E56:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044E72;
    r0 = 0x0300525CU; // [0x08045074]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044E68;
    r6 = r6 + r4;
    goto loc_08044E72;
loc_08044E68:
    r0 = (r5 << 2);
    r0 = r0 + r5;
    r0 += 0x8U;
    r4 <<= (r0 & 0xFF);
    r6 |= r4;
loc_08044E72:
    r5 += 0x1U;
    r5 = (r5 << 24);
    r5 = (r5 >> 24);
    cmp_lhs = (s32)r5; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08044E08;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044EA4;
    r1 = 0x0U;
    goto loc_08044E8A;
loc_08044E84:
    *(u8*)(r0) = (u8)r1;
    r0 += 0x1U;
    stack[0] = r0; // [sp + 0x0]
loc_08044E8A:
    r0 = stack[0]; // [sp + 0x0]
    r2 = (r0 << 30);
    if (cmp_lhs != cmp_rhs) goto loc_08044E84;
    r1 = 0x0300525CU; // [0x08045074]
    r0 = *(u32*)(r1 + 0x8);
    *(u32*)(r0 + 0x68) = (u32)r6;
    r1 = *(u32*)(r1);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044EA4;
    r1 = stack[0]; // [sp + 0x0]
    r0 += 0x6CU;
    r6 = r1 - r0;
loc_08044EA4:
    r0 = 0x0300525CU; // [0x08045074]
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r0 + 0x24) = (u32)r6;
loc_08044EAA:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = 0x0300525CU; // [0x08045074]
    r4 = r0;
    r0 = *(u32*)(r5);
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_08044F46;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044F18;
    r1 = *(u8*)(r0 + 0x4);
    r2 = *(u8*)(r0 + 0x5);
    r1 |= r2;
    r2 = *(u8*)(r0 + 0x6);
    r1 |= r2;
    if (cmp_lhs != cmp_rhs) goto loc_08044F18;
    r0 = *(u32*)(r5 + 0x4);
    r1 = *(u8*)(r0 + 0x3);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044EDE;
    r1 = 0x10U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    r1 = 0x0U;
    *(u8*)(r0 + 0x7) = (u8)r1;
loc_08044EDE:
    r1 = *(u8*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044EEA;
    r1 += 0xFFU;
    *(u8*)(r0 + 0x8) = (u8)r1;
    goto loc_08044EF0;
loc_08044EEA:
    r1 = *(u8*)(r0 + 0x7);
    r1 += 0x1U;
    *(u8*)(r0 + 0x7) = (u8)r1;
loc_08044EF0:
    r1 = *(u8*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044EFC;
    r0 = *(u8*)(r0 + 0x7);
    r0 = (r0 << 28);
    if (cmp_lhs != cmp_rhs) goto loc_08044F5C;
loc_08044EFC:
    r0 = *(u32*)(r5 + 0x8);
    r1 = 0x1U;
    *(u32*)(r0 + 0x68) = (u32)r1;
    r1 = 0xFFU;
    *(u32*)(r0 + 0x78) = (u32)r1;
    r0 = 0x08045659U /* &sub_08045658 */; // [0x08045080]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044F08
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044F14;
    r1 = 0x1U;
    goto loc_08044F3E;
loc_08044F14:
    r1 = 0x1U;
    goto loc_08044F52;
loc_08044F18:
    r0 = *(u8*)(r0 + 0xE);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08044F22;
    r0 = sub_08044DE2(r0, r1, r2, r3); // 0x08044F1E
loc_08044F22:
    r0 = *(u32*)(r5);
    r0 = *(u8*)(r0 + 0xE);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044F5C;
    r0 = 0x080455DDU; // [0x08045084]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044F2C
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x24);
    if (cmp_lhs != cmp_rhs) goto loc_08044F4C;
    r0 += 0x4U;
    r1 = (r0 << 24);
    r1 = (r1 >> 24);
loc_08044F3E:
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0x68U;
    r0 = sub_08046080(r0, r1, r2, r3); // 0x08044F42
loc_08044F46:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08044F4C:
    r0 += 0x4U;
    r1 = (r0 << 24);
    r1 = (r1 >> 24);
loc_08044F52:
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0x68U;
    r0 = sub_080460C4(r0, r1, r2, r3); // 0x08044F56
    goto loc_08044F46;
loc_08044F5C:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044F46;
    r0 = *(u32*)(r5);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044F7A;
    r0 = 0x03005294U; // [0x08045088]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08044F46;
    r0 = 0x27U;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08044F74: BL 0x08046AA2
    goto loc_08044F46;
loc_08044F7A:
    r0 = 0x080455CFU; // [0x0804508C]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x08044F7C
    r0 = sub_08046124(r0, r1, r2, r3); // 0x08044F80: BL 0x08046124
    goto loc_08044F46;
    r3 = 0x0300525CU; // [0x08045074]
    r0 = (r0 << 2);
    r3 += 0xCU;
    r0 = *(u32*)(r3 + r0);
    r5 = 0x1U;
    r3 = *(u16*)(r0);
    r5 <<= (r1 & 0xFF);
    stack[0] = r3; // [sp + 0x0]
    r4 = *(u8*)(r2 + 0x4);
    r6 = 0x00008022U; // [0x0804507C]
    r4 = r4 + r0;
    lr = r4;
    r4 += 0x20U;
    r4 = *(u8*)(r4 + 0x1);
    r12 = r4;
    r4 = *(u8*)(r2 + 0x2);
    cmp_lhs = (s32)r4; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08044FB0;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) goto loc_08044FC8;
loc_08044FB0:
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08044FBC;
    r7 = 0x00008022U; // [0x0804507C]
    r7 -= 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs == cmp_rhs) goto loc_08044FC8;
loc_08044FBC:
    cmp_lhs = (s32)r4; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08044FD8;
    r4 = 0x00008022U; // [0x0804507C]
    r4 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08044FD8;
loc_08044FC8:
    r4 = *(u8*)(r2 + 0x5);
    cmp_lhs = (s32)r12; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08044FD8;
    r3 = lr;
    r3 += 0x1BU;
    r4 = *(u8*)(r3);
    r4 |= r5;
    *(u8*)(r3) = (u8)r4;
loc_08044FD8:
    r3 = *(u8*)(r2 + 0x4);
    r4 = *(u8*)(r0 + 0x1A);
    r3 = r3 + r0;
    r7 = *(u8*)(r3 + 0x1B);
    r4 &= ~r7;
    if (cmp_lhs != cmp_rhs) goto loc_08045072;
    r3 += 0x20U;
    r4 = *(u8*)(r3 + 0x1);
    r7 = 0x00008022U; // [0x0804507C]
    r4 += 0x1U;
    r4 = (r4 << 30);
    r4 = (r4 >> 30);
    *(u8*)(r3 + 0x1) = (u8)r4;
    r3 = *(u8*)(r2 + 0x4);
    r4 = 0x0U;
    r7 -= 0x1U;
    r3 = r3 + r0;
    *(u8*)(r3 + 0x1B) = (u8)r4;
    r3 = *(u16*)(r0);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs == cmp_rhs) goto loc_08045006;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0804509C;
loc_08045006:
    r7 = 0x00008022U; // [0x0804507C]
    r7 -= 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    r3 = *(u8*)(r2 + 0x4);
    if (cmp_lhs != cmp_rhs) goto loc_0804501C;
    r3 = (r3 << 2);
    r3 = r3 + r0;
    r3 += 0x4U;
    r7 = *(u16*)(r0 + 0x2E);
    r4 = *(u32*)(r3);
    goto loc_08045028;
loc_0804501C:
    r3 = (r3 << 2);
    r3 = r3 + r0;
    r7 = *(u16*)(r0 + 0x2E);
    r3 += 0x4U;
    r4 = *(u32*)(r3);
    r7 = (r7 << 2);
loc_08045028:
    r4 = r4 + r7;
    *(u32*)(r3) = (u32)r4;
    r4 = *(u16*)(r0 + 0x2E);
    r3 = *(u32*)(r0 + 0x14);
    r3 = r3 - r4;
    *(u32*)(r0 + 0x14) = (u32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08045038;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08045072;
loc_08045038:
    r3 = r0;
    r3 += 0x20U;
    r4 = 0x0U;
    *(u8*)(r3) = (u8)r4;
    r4 = *(u16*)(r0);
    r7 = 0x00008022U; // [0x0804507C]
    r7 -= 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_08045090;
    r3 = 0x0U;
loc_0804504C:
    r7 = r0 + r3;
    r7 += 0x20U;
    r4 = 0x1U;
    *(u8*)(r7 + 0x1) = (u8)r4;
    r4 = *(u16*)(r0 + 0x2E);
    r7 = *(u32*)(r0 + 0x28);
    r4 *= r3;
    r4 = r7 + r4;
    r7 = (r3 << 2);
    r3 += 0x1U;
    r3 = (r3 << 24);
    r7 = r7 + r0;
    r3 = (r3 >> 24);
    cmp_lhs = (s32)r3; cmp_rhs = 4;
    *(u32*)(r7 + 0x4) = (u32)r4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804504C;
    r3 = *(u32*)(r0 + 0x30);
    *(u32*)(r0 + 0x14) = (u32)r3;
    *(u16*)(r0) = (u16)r6;
loc_08045072:
    goto loc_080450A6;
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    *(u8*)(r2 + 0x1C) = (u8)r4;
    r3 = (r7 >> 1);
    *(u16*)(r4) = (u16)r2;
    r0 = r0;
    r1 = (u32)(*(s8*)(r3 + r1));
    r4 = (r0 >> 32);
    *(u8*)(r3 + r7) = (u8)r5;
    r4 = (r0 >> 32);
    *(u16*)(r2 + r2) = (u16)r4;
    r0 = (r0 << 12);
    *(u8*)(r1 + r7) = (u8)r7;
    r4 = (r0 >> 32);
loc_08045090:
    r4 = 0x0U;
    *(u8*)(r3 + 0x1) = (u8)r4;
    *(u32*)(r0 + 0x14) = (u32)r4;
    r4 = 0x00008023U; // [0x0804544C]
    *(u16*)(r0) = (u16)r4;
    goto loc_080450A6;
loc_0804509C:
    r4 = 0x00008023U; // [0x0804544C]
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_080450A6;
    r3 -= 0x3U;
    *(u16*)(r0) = (u16)r3;
loc_080450A6:
    r3 = *(u16*)(r0);
    r4 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_080450C0;
    r2 = *(u8*)(r2 + 0x4);
    r0 = r2 + r0;
    r2 = 0x21U;
    r2 = *(u8*)(r2 + r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r12;
    if (cmp_lhs != cmp_rhs) goto loc_080450C0;
    r0 = *(u8*)(r0 + 0x1B);
    r0 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_080450E2;
loc_080450C0:
    r0 = 0x04000200U /* &REG_IE */; // [0x08045450]
    r2 = *(u16*)(r0 + 0x8);
    r5 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r5;
    r3 = 0x0300525CU; // [0x08045454]
    r6 = 0x10U;
    r3 = *(u32*)(r3 + 0x4);
    r6 <<= (r1 & 0xFF);
    r4 = *(u8*)(r3 + 0x2);
    r1 = (r1 << 2);
    r4 |= r6;
    *(u8*)(r3 + 0x2) = (u8)r4;
    r3 = 0x0300525CU; // [0x08045454]
    r3 += 0xCU;
    r1 = *(u32*)(r3 + r1);
    *(u16*)(r1 + 0x2) = (u16)r5;
    *(u16*)(r0 + 0x8) = (u16)r2;
loc_080450E2:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r2 = 0x0300525CU; // [0x08045454]
    r5 = r1;
    r1 = (r0 << 2);
    r2 += 0xCU;
    r4 = *(u32*)(r2 + r1);
    r4 += 0x34U;
    r3 = *(u16*)(r4);
    r6 = 0x1U;
    r6 <<= (r0 & 0xFF);
    stack[1] = r3; // [sp + 0x4]
    r1 = *(u8*)(r5 + 0x4);
    r7 = 0x0300525CU; // [0x08045454]
    r1 = r1 + r4;
    r1 += 0x20U;
    r1 = *(u8*)(r1 + 0x1);
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u8*)(r5 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08045136;
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u8*)(r0 + 0x1);
    r1 |= r6;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = *(u16*)(r4);
    r1 = 0x00008023U; // [0x0804544C]
    r1 += 0x1FU;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080451CC;
    r0 = r4;
    r0 += 0x20U;
    r1 = 0x0U;
    *(u8*)(r0) = (u8)r1;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = 0x00008023U; // [0x0804544C]
    r0 += 0x20U;
    *(u16*)(r4) = (u16)r0;
    goto loc_080451CC;
loc_08045136:
    r2 = 0x00008023U; // [0x0804544C]
    r2 += 0x1EU;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0804515A;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0804514E;
    r1 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804514E;
    r1 = r4;
    r0 = sub_080456E0(r0, r1, r2, r3); // 0x0804514A
loc_0804514E:
    r0 = *(u16*)(r4);
    r1 = 0x00008023U; // [0x0804544C]
    r1 += 0x1FU;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080451CC;
    goto loc_08045176;
loc_0804515A:
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080451CC;
    r2 = 0x00008023U; // [0x0804544C]
    r2 += 0x1EU;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08045176;
    r1 = r4;
    r0 = sub_08045670(r0, r1, r2, r3); // 0x08045168: BL 0x08045670
    r0 = *(u16*)(r4);
    r2 = 0x00008023U; // [0x0804544C]
    r2 += 0x1EU;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08045208;
loc_08045176:
    r0 = *(u8*)(r5 + 0x4);
    r1 = r0 + r4;
    r1 += 0x20U;
    r1 = *(u8*)(r1 + 0x1);
    r2 = *(u8*)(r5 + 0x5);
    r1 += 0x1U;
    r1 = (r1 << 30);
    r1 = (r1 >> 30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080451CC;
    r0 = (r0 << 2);
    r1 = r0 + r4;
    r0 = *(u32*)(r7 + 0x8);
    r2 = *(u16*)(r5 + 0x6);
    r3 = *(u32*)(r0 + 0x4);
    r0 = 0x10; // sp + 0x10
    r1 += 0x4U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08045198: BL __call_via_r3
    r0 = *(u16*)(r4);
    r1 = 0x00008023U; // [0x0804544C]
    r1 += 0x1FU;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080451BA;
    r0 = *(u8*)(r5 + 0x4);
    r2 = *(u16*)(r4 + 0x2E);
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 += 0x4U;
    r1 = *(u32*)(r0);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r1 = r1 + r2;
    *(u32*)(r0) = (u32)r1;
loc_080451BA:
    r1 = *(u16*)(r5 + 0x6);
    r0 = *(u32*)(r4 + 0x14);
    r0 = r0 - r1;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r1 = *(u8*)(r5 + 0x4);
    r0 = *(u8*)(r5 + 0x5);
    r1 = r1 + r4;
    r1 += 0x20U;
    *(u8*)(r1 + 0x1) = (u8)r0;
loc_080451CC:
    r0 = *(u16*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045208;
    r0 = *(u8*)(r5 + 0x4);
    r1 = 0x20U;
    *(u8*)(r1 + r4) = (u8)r0;
    r0 = *(u16*)(r4);
    r3 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_080451F4;
    r0 = *(u8*)(r5 + 0x4);
    r0 = r0 + r4;
    r0 += 0x20U;
    r0 = *(u8*)(r0 + 0x1);
    r1 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080451F4;
    r1 = *(u8*)(r5 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08045208;
loc_080451F4:
    r0 = 0x04000200U /* &REG_IE */; // [0x08045450]
    r1 = *(u16*)(r0 + 0x8);
    r2 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r2;
    r3 = *(u32*)(r7 + 0x4);
    r5 = *(u8*)(r3 + 0x2);
    r5 |= r6;
    *(u8*)(r3 + 0x2) = (u8)r5;
    *(u16*)(r4 + 0x2) = (u16)r2;
    *(u16*)(r0 + 0x8) = (u16)r1;
loc_08045208:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r2 = 0x0300525CU; // [0x08045454]
    r5 = r0;
    r0 = (r0 << 2);
    r2 += 0x1CU;
    r4 = *(u32*)(r2 + r0);
    r6 = 0x0U;
    r4 += 0xCU;
    *(u16*)(r4 + 0x2) = (u16)r6;
    r2 = *(u32*)(r2 + r0);
    r7 = 0x0300525CU; // [0x08045454]
    r2 = *(u32*)(r2 + 0x18);
    r3 = *(u16*)(r1 + 0x6);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08045238;
    r0 = 0x49U;
    *(u16*)(r4) = (u16)r0;
    r0 = 0x00000701U; // [0x08045458]
    goto loc_08045248;
loc_08045238:
    r2 = *(u8*)(r4 + 0x7);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r2 = *(u8*)(r4 + 0x6);
    if (cmp_lhs == cmp_rhs) goto loc_0804524C;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045256;
    r0 = 0x00000701U; // [0x08045458]
    r0 += 0x8U;
loc_08045248:
    *(u16*)(r4 + 0x2) = (u16)r0;
    goto loc_08045284;
loc_0804524C:
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045256;
    r2 = 0x708U; // (225 << 3)
    *(u16*)(r4 + 0x2) = (u16)r2;
loc_08045256:
    r2 = 0x00008023U; // [0x0804544C]
    r2 += 0x1FU;
    *(u16*)(r4) = (u16)r2;
    r2 = *(u16*)(r1 + 0x6);
    *(u16*)(r4 + 0x4) = (u16)r2;
    r2 = *(u16*)(r1 + 0x6);
    r1 = 0x0300525CU; // [0x08045454]
    r1 += 0x1CU;
    r0 = *(u32*)(r1 + r0);
    r1 = 0x4; // sp + 0x4
    r0 = *(u32*)(r0 + 0x14);
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r7 + 0x8);
    r3 = *(u32*)(r0 + 0x4);
    r0 = 0x10; // sp + 0x10
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08045274: BL __call_via_r3
    r0 = 0x1U;
    *(u8*)(r4 + 0x6) = (u8)r0;
    *(u16*)(r4) = (u16)r6;
    r0 = *(u16*)(r4 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045290;
loc_08045284:
    r0 = *(u32*)(r7 + 0x4);
    r2 = 0x10U;
    r1 = *(u8*)(r0 + 0x4);
    r2 <<= (r5 & 0xFF);
    r1 |= r2;
    *(u8*)(r0 + 0x4) = (u8)r1;
loc_08045290:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r1;
    r1 = 0x0300525CU; // [0x08045454]
    r4 = r0;
    r1 = *(u32*)(r1);
    r0 = r2;
    r3 = *(u8*)(r1);
    r2 = 0x1U;
    r2 &= ~r3;
    r3 = 0x087B7714U; // [0x0804545C]
    r2 = (r2 << 4);
    r6 = r2 + r3;
    r3 = *(u8*)(r6);
    r12 = r3;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08045392;
    r0 = 0x0U;
    r2 = 0x0U;
    goto loc_080452CE;
loc_080452BE:
    r3 = *(u8*)(r5);
    r7 = (r2 << 3);
    r5 += 0x1U;
    r2 += 0x1U;
    r3 <<= (r7 & 0xFF);
    r0 |= r3;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
loc_080452CE:
    cmp_lhs = (s32)r12; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_080452BE;
    r3 = *(u8*)(r6 + 0x1);
    r2 = r0;
    r2 >>= (r3 & 0xFF);
    r3 = *(u8*)(r6 + 0x7);
    r2 &= r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r2;
    r3 = *(u8*)(r6 + 0x2);
    r2 = r0;
    r2 >>= (r3 & 0xFF);
    r3 = *(u8*)(r6 + 0x8);
    r2 &= r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x5) = (u8)r2;
    r3 = *(u8*)(r6 + 0x3);
    r2 = r0;
    r2 >>= (r3 & 0xFF);
    r3 = *(u8*)(r6 + 0x9);
    r2 &= r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x6) = (u8)r2;
    r3 = *(u8*)(r6 + 0x4);
    r2 = r0;
    r2 >>= (r3 & 0xFF);
    r3 = *(u8*)(r6 + 0xA);
    r2 &= r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x7) = (u8)r2;
    r3 = *(u8*)(r6 + 0x5);
    r2 = r0;
    r2 >>= (r3 & 0xFF);
    r3 = *(u8*)(r6 + 0xB);
    r2 &= r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x8) = (u8)r2;
    r3 = *(u8*)(r6 + 0x6);
    r2 = r0;
    r2 >>= (r3 & 0xFF);
    r3 = *(u8*)(r6 + 0xC);
    r2 &= r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x9) = (u8)r2;
    r2 = *(u16*)(r6 + 0xE);
    r2 &= r0;
    *(u16*)(r3 + 0xA) = (u16)r2;
    r0 = *(u8*)(r6);
    r0 = r0 + r2;
    r7 = (r0 << 16);
    r0 = *(u8*)(r3 + 0x4);
    r7 = (r7 >> 16);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045402;
    r2 = *(u8*)(r1);
    r0 = 0x0300525CU; // [0x08045454]
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080453A4;
    r0 = *(u8*)(r1 + 0x2);
    r2 <<= (r4 & 0xFF);
    r0 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_08045402;
    r0 = *(u8*)(r3 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_0804535C;
    r2 = r5;
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08045210(r0, r1, r2, r3); // 0x08045356
    goto loc_08045402;
loc_0804535C:
    r3 = 0x0; // sp + 0x0
    r0 = *(u8*)(r3 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045370;
    r2 = r5;
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_080450E8(r0, r1, r2, r3); // 0x0804536A
    goto loc_08045402;
loc_08045370:
    r6 = 0x0300525CU; // [0x08045454]
    r0 = 0x0U;
    r6 += 0xCU;
loc_08045376:
    r3 = (r0 << 2);
    r3 = *(u32*)(r6 + r3);
    r3 = *(u8*)(r3 + 0x1A);
    r3 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_08045386;
    r3 = *(u8*)(r1 + 0x4);
    r3 &= r2;
    if (cmp_lhs != cmp_rhs) goto loc_08045394;
loc_08045386:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08045376;
    goto loc_08045402;
loc_08045392:
    goto loc_08045404;
loc_08045394:
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08045402;
    r3 = r5;
    r1 = r4;
    r2 = 0x4; // sp + 0x4
    r0 = sub_08044F86(r0, r1, r2, r3); // 0x0804539E
    goto loc_08045402;
loc_080453A4:
    r6 = *(u8*)(r1 + 0x2);
    r3 = 0x0; // sp + 0x0
    r1 = *(u8*)(r3 + 0x5);
    r6 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08045402;
    r4 = 0x0U;
loc_080453B0:
    r0 = 0x1U;
    r0 <<= (r4 & 0xFF);
    r1 = r0;
    r1 &= r6;
    if (cmp_lhs == cmp_rhs) goto loc_080453F8;
    r3 = 0x0; // sp + 0x0
    r1 = *(u8*)(r3 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_080453CE;
    r2 = r5;
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08045210(r0, r1, r2, r3); // 0x080453C8
    goto loc_080453F8;
loc_080453CE:
    r3 = 0x0; // sp + 0x0
    r1 = *(u8*)(r3 + 0x7);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080453E2;
    r2 = r5;
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_080450E8(r0, r1, r2, r3); // 0x080453DC
    goto loc_080453F8;
loc_080453E2:
    r1 = 0x0300525CU; // [0x08045454]
    r1 = *(u32*)(r1);
    r1 = *(u8*)(r1 + 0x4);
    r1 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_080453F8;
    r3 = r5;
    r1 = r4;
    r0 = r4;
    r2 = 0x4; // sp + 0x4
    r0 = sub_08044F86(r0, r1, r2, r3); // 0x080453F4
loc_080453F8:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080453B0;
loc_08045402:
    r0 = r7;
loc_08045404:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r7 = r1;
    if (cmp_lhs != cmp_rhs) goto loc_080454DC;
    r6 = 0x0300525CU; // [0x08045454]
    r0 = *(u32*)(r6 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080454DC;
    r0 = *(u32*)(r6 + 0x4);
    *(u8*)(r0 + 0x1) = (u8)r1;
    r1 = *(u32*)(r6);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08045432;
    r0 = sub_08045762(r0, r1, r2, r3); // 0x0804542C
    goto loc_0804547A;
loc_08045432:
    r1 = *(u32*)(r6 + 0x8);
    r1 += 0xC0U;
    r1 = *(u32*)(r1 + 0x1C);
    r1 += 0x4U;
    r2 = *(u16*)(r1);
    r5 = r1 + 4;
    r4 = (r2 << 25);
    r4 = (r4 >> 25);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045460;
    r1 = 0xFU;
    *(u8*)(r0 + 0x1) = (u8)r1;
    goto loc_0804547A;
    *(u16*)(r4) = (u16)r3;
    r0 = r0;
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    r1 = (r0 << 28);
    r0 = r0;
    *(u8*)(r2 + 0x1C) = (u8)r4;
    r3 = (r7 >> 1);
loc_08045460:
    r2 = r4;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_08045298(r0, r1, r2, r3); // 0x08045466
    r5 = r5 + r0;
    r0 = r4 - r0;
    r4 = (r0 << 16);
    r4 = (r4 >> 16);
    r0 = (r4 << 16);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_0804547A;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045460;
loc_0804547A:
    r4 = 0x0U;
loc_0804547C:
    r1 = 0x03005268U; // [0x080457DC]
    r0 = (r4 << 2);
    r1 = *(u32*)(r1 + r0);
    r2 = 0x00008043U; // [0x080457E0]
    r0 = *(u16*)(r1 + 0x34);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080454C2;
    r0 = *(u32*)(r6 + 0x4);
    r2 = *(u8*)(r0 + 0x1);
    r0 = 0x1U;
    r0 <<= (r4 & 0xFF);
    r2 &= r0;
    if (cmp_lhs != cmp_rhs) goto loc_080454C2;
    r5 = r1;
    r5 += 0x34U;
    r1 = 0x2DU;
    r1 = *(u8*)(r1 + r5);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080454AA;
    r1 = *(u32*)(r6);
    r2 = *(u8*)(r1 + 0x7);
    r0 |= r2;
    *(u8*)(r1 + 0x7) = (u8)r0;
loc_080454AA:
    r2 = r5;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_08044668(r0, r1, r2, r3); // 0x080454B0
    r0 = *(u32*)(r6);
    r2 = *(u8*)(r5 + 0x1A);
    r1 = *(u8*)(r0 + 0x5);
    r1 &= ~r2;
    *(u8*)(r0 + 0x5) = (u8)r1;
    r0 = 0x46U;
    *(u16*)(r5) = (u16)r0;
loc_080454C2:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804547C;
    r0 = *(u32*)(r6 + 0x4);
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080454DC;
    r1 = 0x700U; // (7 << 8)
    r0 |= r1;
    r7 = r0;
loc_080454DC:
    r1 = r7;
    r0 = stack[1]; // [sp + 0x4]
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x080454E0
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r2 = 0x03005268U; // [0x080457DC]
    r2 -= 0xCU;
    r0 = *(u32*)(r2);
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_08045514;
    r1 = *(u8*)(r0 + 0x4);
    r3 = *(u8*)(r0 + 0x5);
    r0 = *(u8*)(r0 + 0x6);
    r1 |= r3;
    r0 |= r1;
    r1 = *(u32*)(r2 + 0x4);
    *(u8*)(r1 + 0x3) = (u8)r0;
    r0 = 0x0U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804540BU; // [0x080457E4]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x0804550C
    r0 = sub_08046108(r0, r1, r2, r3); // 0x08045510
loc_08045514:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x080437C3U; // [0x080457E8]
    r0 = sub_08045A5E(r0, r1, r2, r3); // 0x0804551E
    r1 = 0x0U;
    r0 = 0x1U;
    r0 = sub_080461F8(r0, r1, r2, r3); // 0x08045526: BL 0x080461F8
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = *(u32*)(r0);
    r5 = *(u32*)(r1);
    goto loc_08045540;
loc_08045538:
    r3 = *(u8*)(r4);
    r4 += 0x1U;
    *(u8*)(r5) = (u8)r3;
    r5 += 0x1U;
loc_08045540:
    r2 -= 0x1U;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08045538;
    *(u32*)(r0) = (u32)r4;
    *(u32*)(r1) = (u32)r5;
    return r0; // BX lr
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804555A;
    r2 = 0x1U;
    r3 = 0x04000120U; // [0x080457EC]
    r2 = (r2 << 13);
    *(u16*)(r3 + 0x8) = (u16)r2;
loc_0804555A:
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x0804555A
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r0;
    r4 = r1;
    if (cmp_lhs != cmp_rhs) goto loc_08045570;
    r0 = sub_080435BE(r0, r1, r2, r3); // 0x0804556C
loc_08045570:
    r1 = r4;
    r0 = r5;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08045574
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804558E;
    r3 = 0x03005268U; // [0x080457DC]
    r2 = 0x1U;
    r3 -= 0xCU;
    r3 = *(u32*)(r3 + 0x4);
    *(u8*)(r3 + 0x9) = (u8)r2;
loc_0804558E:
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x0804558E
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08045598..0x080455B4 (28 bytes, Thumb)
u32 sub_08045598(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = r1;
    if (cmp_lhs != cmp_rhs) goto loc_080455A6;
    r0 = 0x0U;
    r0 = sub_08043B66(r0, r1, r2, r3); // 0x080455A2
loc_080455A6:
    r1 = r4;
    r0 = r5;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x080455AA
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x080455B4..0x08045658 (164 bytes, Thumb)
u32 sub_080455B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = r1;
    if (cmp_lhs != cmp_rhs) goto loc_080455C0;
    r0 = sub_08043D94(r0, r1, r2, r3); // 0x080455BC
loc_080455C0:
    r1 = r4;
    r0 = r5;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x080455C4
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x24U;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x080455D2
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r7 = 0x0U;
    r6 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045642;
    r4 = 0x0U;
loc_080455E8:
    r0 = 0x03005268U; // [0x080457DC]
    r1 = (r4 << 2);
    r0 += 0x10U;
    r0 = *(u32*)(r0 + r1);
    r2 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080455F8;
    *(u8*)(r0 + 0x2) = (u8)r7;
loc_080455F8:
    r0 = 0x03005268U; // [0x080457DC]
    r2 = 0x00008043U; // [0x080457E0]
    r5 = *(u32*)(r0 + r1);
    r2 -= 0x23U;
    r0 = *(u16*)(r5);
    r1 = r5;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08045638;
    r5 = r1;
    r2 = r1;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08044668(r0, r1, r2, r3); // 0x08045610
    r0 = 0x03005268U; // [0x080457DC]
    r2 = *(u8*)(r5 + 0x1A);
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r1 = *(u8*)(r0 + 0x4);
    r1 &= ~r2;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = 0x2DU;
    r1 = *(u8*)(r1 + r5);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08045634;
    r1 = *(u8*)(r0 + 0x7);
    r2 = 0x1U;
    r2 <<= (r4 & 0xFF);
    r1 |= r2;
    *(u8*)(r0 + 0x7) = (u8)r1;
loc_08045634:
    r0 = 0x26U;
    *(u16*)(r5) = (u16)r0;
loc_08045638:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080455E8;
loc_08045642:
    r0 = 0x03005268U; // [0x080457DC]
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0xE) = (u8)r7;
    r1 = r6;
    r0 = 0x24U;
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x0804564E
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08045658..0x08045670 (24 bytes, Thumb)
u32 sub_08045658(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045662;
    r0 = 0x24U;
    goto loc_08045666;
loc_08045662:
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_0804566A;
loc_08045666:
    r0 = sub_080437C2(r0, r1, r2, r3); // 0x08045666
loc_0804566A:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08045670..0x08046118 (2728 bytes, Thumb)
u32 sub_08045670(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x03005268U; // [0x080457DC]
    r4 -= 0xCU;
    r2 = *(u32*)(r4);
    r3 = *(u8*)(r2);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08045684;
    r3 = 0x3U;
    r2 += 0xFU;
    goto loc_0804568A;
loc_08045684:
    r3 = 0x2U;
    r2 = r2 + r0;
    r2 += 0x10U;
loc_0804568A:
    r6 = 0x1U;
    r5 = r6;
    r5 <<= (r0 & 0xFF);
    r0 = (r5 << 24);
    r5 = *(u16*)(r1);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080456B0;
    r5 = *(u8*)(r2);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080456B4;
    r2 = 0x49U;
    *(u16*)(r1) = (u16)r2;
    r2 = 0x00000702U; // [0x080457F0]
    *(u16*)(r1 + 0x18) = (u16)r2;
    r1 = *(u32*)(r4 + 0x4);
    r2 = *(u8*)(r1 + 0x4);
    r0 |= r2;
    *(u8*)(r1 + 0x4) = (u8)r0;
loc_080456B0:
    return r0; // BX lr
loc_080456B4:
    r7 = 0x0U;
    *(u16*)(r1 + 0x18) = (u16)r7;
    r5 = *(u8*)(r2);
    r3 = r5 - r3;
    *(u8*)(r2) = (u8)r3;
    r2 = r1;
    r2 += 0x2DU;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r2 = 0x7U;
    *(u32*)(r1 + 0x14) = (u32)r2;
    r2 = 0x1FU;
    *(u8*)(r2 + r1) = (u8)r6;
    r2 = 0x00008043U; // [0x080457E0]
    *(u16*)(r1 + 0x2E) = (u16)r7;
    *(u8*)(r1 + 0x1A) = (u8)r0;
    r2 -= 0x2U;
    *(u16*)(r1) = (u16)r2;
    r1 = *(u32*)(r4);
    r2 = *(u8*)(r1 + 0x5);
    r0 |= r2;
    *(u8*)(r1 + 0x5) = (u8)r0;
    goto loc_080456B0;
    r5 = 0x03005268U; // [0x080457DC]
    r2 = 0x2DU;
    r3 = *(u8*)(r2 + r1);
    r5 -= 0xCU;
    r2 = *(u32*)(r5);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080456F8;
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r0 += 0x18U;
    goto loc_08045732;
loc_080456F8:
    r6 = 0x03005268U; // [0x080457DC]
    r3 = (r0 << 2);
    r3 = *(u32*)(r6 + r3);
    r4 = *(u32*)(r1 + 0x30);
    r6 = *(u32*)(r3 + 0x6C);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r6;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08045730;
    r4 = *(u32*)(r5 + 0x4);
    r3 = 0x1U;
    r5 = *(u8*)(r4 + 0x4);
    r3 <<= (r0 & 0xFF);
    r5 |= r3;
    *(u8*)(r4 + 0x4) = (u8)r5;
    r4 = *(u8*)(r2 + 0x5);
    r4 &= ~r3;
    *(u8*)(r2 + 0x5) = (u8)r4;
    r2 = 0x00000702U; // [0x080457F0]
    r2 -= 0x1U;
    *(u16*)(r1 + 0x18) = (u16)r2;
    r2 = 0x47U;
    *(u16*)(r1) = (u16)r2;
    r2 = r1;
    r1 = 0x1U;
    r0 = sub_08044668(r0, r1, r2, r3); // 0x08045726
loc_0804572A:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08045730:
    r0 = *(u32*)(r3 + 0x68);
loc_08045732:
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    r4 = 0x0U;
loc_08045738:
    r2 = r1 + r0;
    r2 += 0x20U;
    *(u8*)(r2 + 0x1) = (u8)r4;
    r2 = *(u16*)(r1 + 0x2E);
    r3 = *(u32*)(r1 + 0x4);
    r2 *= r0;
    r2 = r3 + r2;
    r3 = (r0 << 2);
    r0 += 0x1U;
    r0 = (r0 << 24);
    r3 = r3 + r1;
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    *(u32*)(r3 + 0x4) = (u32)r2;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08045738;
    r0 = *(u32*)(r1 + 0x30);
    *(u32*)(r1 + 0x14) = (u32)r0;
    r0 = 0x00008043U; // [0x080457E0]
    r0 -= 0x1U;
    *(u16*)(r1) = (u16)r0;
    goto loc_0804572A;
    r5 = 0x03005268U; // [0x080457DC]
    r5 -= 0xCU;
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0xC0U;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r5 + 0x4);
    r1 = (r0 >> 8);
    r0 = 0x0U;
    r6 = 0x1U;
loc_08045778:
    r2 = (r1 << 27);
    r2 = (r2 >> 27);
    r1 = (r1 >> 5);
    r4 = sp;
    *(u8*)(r4 + r0) = (u8)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045790;
    r2 = *(u8*)(r3 + 0x1);
    r4 = r6;
    r4 <<= (r0 & 0xFF);
    r2 |= r4;
    *(u8*)(r3 + 0x1) = (u8)r2;
loc_08045790:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08045778;
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0xC0U;
    r5 = *(u32*)(r0 + 0x1C);
    r5 += 0x8U;
    r4 = 0x0U;
    goto loc_080457C2;
loc_080457A6:
    r1 = r5;
    r0 = r4;
    r0 = sub_08045298(r0, r1, r2, r3); // 0x080457AA
    r1 = sp;
    r1 = *(u8*)(r1 + r4);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r5 = r5 + r0;
    r0 = r1 - r0;
    r1 = sp;
    *(u8*)(r1 + r4) = (u8)r0;
    r0 = (r0 << 24);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080457CA;
loc_080457C2:
    r0 = sp;
    r2 = *(u8*)(r0 + r4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080457A6;
loc_080457CA:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080457C2;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = r0;
    *(u16*)(r5 + r1) = (u16)r0;
    r0 = (r0 << 12);
    *(u16*)(r0 + 0x2) = (u16)r3;
    r0 = r0;
    *(u8*)(r1 + r0) = (u8)r3;
    r4 = (r0 >> 32);
    r7 += 0xC3U;
    r4 = (r0 >> 32);
    r0 = (r4 << 4);
    r0 = (r0 << 16);
    r2 = (r0 << 28);
    r0 = r0;
    r2 = 0x03005288U; // [0x08045A28]
    r3 = 0x04000200U /* &REG_IE */; // [0x08045A2C]
    r1 = *(u8*)(r2 + 0x1);
    r4 = r3;
    r4 -= 0xD8U;
    r6 = 0x0U;
    r5 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804582E;
    r0 = r2;
    r0 = *(u16*)(r0 + 0xA);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0804588A;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804588E;
    r1 = *(u8*)(r2);
    r0 = r2;
    r0 = *(u16*)(r0 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0804584C;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045888;
    *(u16*)(r3 + 0x8) = (u16)r6;
    r0 = *(u16*)(r4);
    r1 = 0x80U;
    r0 |= r1;
    *(u16*)(r4) = (u16)r0;
    goto loc_08045886;
loc_0804582E:
    *(u8*)(r2) = (u8)r5;
    r0 = *(u16*)(r4);
    r0 |= r5;
    *(u16*)(r4) = (u16)r0;
    *(u16*)(r3 + 0x8) = (u16)r6;
    r1 = *(u16*)(r3);
    r0 = 0x80U;
    r1 |= r0;
    *(u16*)(r3) = (u16)r1;
    *(u16*)(r3 + 0x8) = (u16)r5;
    *(u8*)(r2 + 0x1) = (u8)r5;
    r1 = *(u16*)(r4);
    r0 |= r1;
    *(u16*)(r4) = (u16)r0;
    goto loc_08045888;
loc_0804584C:
    r1 = *(u16*)(r2 + 0x4);
    r2 = 0x00008001U; // [0x08045A30]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08045888;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045888;
    *(u16*)(r3 + 0x8) = (u16)r6;
    r0 = *(u16*)(r3);
    r1 = 0x80U;
    r0 &= ~r1;
    *(u16*)(r3) = (u16)r0;
    *(u16*)(r3 + 0x8) = (u16)r5;
    r0 = 0x04000200U /* &REG_IE */; // [0x08045A2C]
    r0 -= 0xE0U;
    *(u16*)(r0 + 0x8) = (u16)r6;
    r1 = (r0 >> 14);
    *(u16*)(r0 + 0x8) = (u16)r1;
    r0 = 0x80U;
    *(u16*)(r3 + 0x2) = (u16)r0;
    r0 = *(u16*)(r4);
    r1 = 0x4080U; // (129 << 7)
    r0 |= r1;
    *(u16*)(r4) = (u16)r0;
    *(u16*)(r3 + 0x8) = (u16)r6;
    r0 = *(u16*)(r3);
    r1 = 0x80U;
    r0 |= r1;
    *(u16*)(r3) = (u16)r0;
loc_08045886:
    *(u16*)(r3 + 0x8) = (u16)r5;
loc_08045888:
    r0 = 0x0U;
loc_0804588A:
    return r0; // BX lr
loc_0804588E:
    r1 = 0x2U;
    *(u8*)(r2 + 0x1) = (u8)r1;
    goto loc_0804588A;
    r4 = 0x04000200U /* &REG_IE */; // [0x08045A2C]
    r0 = 0x0U;
    *(u16*)(r4 + 0x8) = (u16)r0;
    r1 = *(u16*)(r4);
    r2 = 0x03005294U; // [0x08045A34]
    r5 = 0x80U;
    r2 = *(u32*)(r2);
    r3 = *(u8*)(r2 + 0xA);
    r2 = 0x8U;
    r2 <<= (r3 & 0xFF);
    r2 |= r5;
    r1 &= ~r2;
    *(u16*)(r4) = (u16)r1;
    r1 = 0x1U;
    *(u16*)(r4 + 0x8) = (u16)r1;
    r1 = 0x04000200U /* &REG_IE */; // [0x08045A2C]
    r1 -= 0xE0U;
    *(u16*)(r1 + 0x14) = (u16)r0;
    r2 = (r1 >> 14);
    *(u16*)(r1 + 0x8) = (u16)r2;
    r3 = 0x04000200U /* &REG_IE */; // [0x08045A2C]
    r3 -= 0xD8U;
    r1 = *(u16*)(r3);
    r2 = 0x4080U; // (129 << 7)
    r1 |= r2;
    *(u16*)(r3) = (u16)r1;
    stack[0] = r0; // [sp + 0x0]
    r2 = 0x05000003U; // [0x08045A38]
    r1 = 0x03005288U; // [0x08045A28]
    r0 = sp;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x080458D4
    *(u16*)(r4 + 0x2) = (u16)r5;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r2 = 0x03005288U; // [0x08045A28]
    r4 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08045A3C]
    r1 = *(u8*)(r2);
    r0 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080458FA;
    r5 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08045A3C]
    r5 += 0x28U;
    r3 = *(u16*)(r5);
    r4 = 0x80U;
    r3 |= r4;
    *(u16*)(r5) = (u16)r3;
loc_080458FA:
    r3 = (r1 << 4);
    r4 = r0;
    r4 <<= (r3 & 0xFF);
    r12 = r3;
    r3 = (r4 >> 16);
    r4 = 0x1U;
    r4 = r4 - r1;
    r5 = (r4 << 4);
    r4 = *(u16*)(r2 + 0xA);
    r0 <<= (r5 & 0xFF);
    r0 = (r0 >> 16);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804593A;
    r6 = *(u16*)(r2 + 0x6);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_0804597E;
    r4 = *(u16*)(r2 + 0x2);
    cmp_lhs = (s32)r4; cmp_rhs = 3;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_0804594A;
    r7 = *(u16*)(r2 + 0x4);
    r7 = ~r7;
    r7 = (r7 << 16);
    r7 = (r7 >> 16);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08045940;
    r3 = ~r6;
    r3 = (r3 << 16);
    r3 = (r3 >> 16);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08045940;
    r3 = r4 + 1;
    *(u16*)(r2 + 0x2) = (u16)r3;
loc_0804593A:
    r3 = *(u16*)(r2 + 0x2);
    cmp_lhs = (s32)r3; cmp_rhs = 3;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_0804594C;
loc_08045940:
    r3 = *(u16*)(r2 + 0x2);
    r4 = 0x087B773EU; // [0x08045A40]
    r3 = (r3 << 1);
    r3 = *(u16*)(r4 + r3);
    goto loc_0804594E;
loc_0804594A:
    *(u16*)(r2 + 0xA) = (u16)r0;
loc_0804594C:
    r3 = 0x00008001U; // [0x08045A30]
loc_0804594E:
    *(u16*)(r2 + 0x4) = (u16)r3;
    r3 = ~r0;
    r3 = (r3 << 16);
    r3 = (r3 >> 16);
    *(u16*)(r2 + 0x6) = (u16)r3;
    r4 = *(u16*)(r2 + 0x4);
    r4 <<= (r5 & 0xFF);
    r5 = r12;
    r3 <<= (r5 & 0xFF);
    r3 = r4 + r3;
    r4 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08045A3C]
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    *(u32*)(r4 + 0x20) = (u32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_080459A0;
    r1 = *(u16*)(r2 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045976;
    r1 = 0x0000494EU; // [0x08045A44]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080459A0;
loc_08045976:
    r0 = 0x0U;
    r1 = 0x258U; // (75 << 3)
    goto loc_0804598A;
loc_0804597E:
    r3 = 0x0U;
    *(u16*)(r2 + 0x2) = (u16)r3;
    goto loc_08045940;
loc_08045984:
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_0804598A:
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08045984;
    r0 = *(u16*)(r2 + 0xA);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080459A0;
    r5 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08045A3C]
    r5 += 0x28U;
    r0 = *(u16*)(r5);
    r4 = 0x80U;
    r0 |= r4;
    *(u16*)(r5) = (u16)r0;
loc_080459A0:
    return r0; // BX lr
    r1 = 0x04000200U /* &REG_IE */; // [0x08045A2C]
    r5 = r0;
    r0 = *(u16*)(r1 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080459B8;
    r0 = ~r0;
loc_080459B2:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_080459B8:
    r0 = 0x04000200U /* &REG_IE */; // [0x08045A2C]
    r1 = *(u16*)(r0);
    r4 = 0x03005294U; // [0x08045A34]
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r4);
    r0 = 0xAU;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x080458E1U; // [0x08045A48]
    r0 = sub_08045D72(r0, r1, r2, r3); // 0x080459C8
    r0 = sub_08045894(r0, r1, r2, r3); // 0x080459CC
    r0 = *(u32*)(r4);
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08045A3C]
    r0 = *(u8*)(r0 + 0xA);
    r0 = (r0 << 2);
    r4 = r0 + r1;
    r0 = (r5 << 27);
    r5 = (r0 >> 24);
    r7 = 0x0U;
    goto loc_080459FC;
loc_080459E2:
    r0 = sub_080457F4(r0, r1, r2, r3); // 0x080459E2
    r6 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08045A0C;
    *(u16*)(r4 + 0x2) = (u16)r7;
    *(u16*)(r4) = (u16)r7;
    r0 = 0x83U;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_080459F2:
    r0 = *(u16*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080459F2;
    *(u16*)(r4 + 0x2) = (u16)r7;
    *(u16*)(r4) = (u16)r7;
loc_080459FC:
    r0 = r5;
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r1 = r5;
    r5 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080459E2;
loc_08045A0C:
    r0 = 0x04000200U /* &REG_IE */; // [0x08045A2C]
    *(u16*)(r0 + 0x8) = (u16)r7;
    r1 = stack[0]; // [sp + 0x0]
    *(u16*)(r0) = (u16)r1;
    r1 = 0x1U;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r4 = 0x03005294U; // [0x08045A34]
    r0 = *(u32*)(r4);
    *(u32*)(r0) = (u32)r7;
    r0 = 0x0U;
    r0 = sub_08045D72(r0, r1, r2, r3); // 0x08045A20
    r0 = r6;
    goto loc_080459B2;
    *(u16*)(r1 + r2) = (u16)r0;
    r0 = (r0 << 12);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    *(u16*)(r0) = (u16)r1;
    r0 = r0;
    *(u16*)(r2 + r2) = (u16)r4;
    r0 = (r0 << 12);
    r3 = r0;
    r0 = (r0 << 20);
    r0 = (r0 << 4);
    r0 = (r0 << 16);
    *(u8*)(r7 + 0x1C) = (u8)r6;
    r3 = (r7 >> 1);
    r1 = 0x48AA810AU; // [0x08045B80]
    r0 = r0;
    r1 = *(u32*)(r4 + r3);
    r4 = (r0 >> 32);
    r1 = 0x03005294U; // [0x08045E14]
    r1 = *(u32*)(r1);
    *(u32*)(r1 + 0x1C) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03005294U; // [0x08045E14]
    r0 = 0x0U;
    r1 = *(u32*)(r1);
    *(u32*)(r1 + 0x1C) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03005294U; // [0x08045E14]
    r1 = *(u32*)(r1);
    *(u32*)(r1 + 0x18) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03005294U; // [0x08045E14]
    r0 = 0x0U;
    r1 = *(u32*)(r1);
    *(u32*)(r1 + 0x18) = (u32)r0;
    return r0; // BX lr
    r4 = r2;
    r2 = r0;
    r2 += 0xE8U;
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    r5 = 0x08046A28U; // [0x08045E18]
    r3 = 0x03005294U; // [0x08045E14]
    if (cmp_lhs != cmp_rhs) goto loc_08045AA2;
    *(u32*)(r1) = (u32)r2;
    r2 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r6 = 0x080462ACU; // [0x08045E20]
    *(u32*)(r2) = (u32)r6;
    r4 = *(u32*)(r1);
    *(u32*)(r2 + 0x4) = (u32)r4;
    r4 = 0x800004B0U; // [0x08045E24]
    *(u32*)(r2 + 0x8) = (u32)r4;
    r2 = *(u32*)(r2 + 0x8);
    r2 = *(u32*)(r1);
    r4 = r5 - r6;
    r2 = r2 + r4;
    *(u32*)(r1) = (u32)r2;
    r1 = 0x00000A48U; // [0x08045E28]
    r1 = r0 + r1;
    *(u32*)(r3) = (u32)r1;
    goto loc_08045AA6;
loc_08045AA2:
    *(u32*)(r1) = (u32)r5;
    *(u32*)(r3) = (u32)r2;
loc_08045AA6:
    r1 = *(u32*)(r3);
    *(u32*)(r1 + 0x28) = (u32)r0;
    r0 += 0x74U;
    *(u32*)(r1 + 0x24) = (u32)r0;
    r0 = 0x1U;
    *(u8*)(r1 + 0x14) = (u8)r0;
    r2 = 0x0U;
    *(u32*)(r1) = (u32)r2;
    *(u8*)(r1 + 0x4) = (u8)r2;
    *(u8*)(r1 + 0x5) = (u8)r2;
    *(u8*)(r1 + 0x7) = (u8)r2;
    *(u8*)(r1 + 0x8) = (u8)r2;
    *(u8*)(r1 + 0x9) = (u8)r2;
    *(u32*)(r1 + 0xC) = (u32)r2;
    *(u8*)(r1 + 0x10) = (u8)r2;
    *(u16*)(r1 + 0x12) = (u16)r2;
    *(u8*)(r1 + 0x15) = (u8)r2;
    r1 += 0x20U;
    *(u8*)(r1 + 0xC) = (u8)r2;
    r1 = (r0 << 8);
    r0 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r0 += 0x4CU;
    *(u16*)(r0 + 0x14) = (u16)r1;
    r1 = 0x00005003U; // [0x08045E2C]
    *(u16*)(r0 + 0x8) = (u16)r1;
    r0 = sub_08045A66(r0, r1, r2, r3); // 0x08045AD8
    r0 = sub_08045A54(r0, r1, r2, r3); // 0x08045ADC
    r0 = 0x04000200U /* &REG_IE */; // [0x08045E30]
    r1 = *(u16*)(r0 + 0x8);
    *(u16*)(r0 + 0x8) = (u16)r2;
    r2 = *(u16*)(r0);
    r3 = 0x80U;
    r2 |= r3;
    *(u16*)(r0) = (u16)r2;
    *(u16*)(r0 + 0x8) = (u16)r1;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x03005294U; // [0x08045E14]
    r1 = 0x5U;
    r0 = *(u32*)(r0);
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    *(u8*)(r0 + 0x5) = (u8)r1;
    r0 = 0x1U;
    r2 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r0 = (r0 << 31);
    r2 += 0x2CU;
    *(u32*)(r2 + 0x20) = (u32)r0;
    r0 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r0 += 0x4CU;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r1 = 0x00005003U; // [0x08045E2C]
    *(u16*)(r0 + 0x8) = (u16)r1;
    r1 = 0x00005003U; // [0x08045E2C]
    r1 += 0x7FU;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r0 = 0x0U;
    return r0; // BX lr
    r0 = 0x03005294U; // [0x08045E14]
    r1 = 0x0U;
    r0 = *(u32*)(r0);
    *(u32*)(r0 + 0xC) = (u32)r1;
    r2 = *(u8*)(r0 + 0xA);
    r3 = (r2 << 2);
    r2 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r2 += 0x2CU;
    r3 = r3 + r2;
    *(u16*)(r3) = (u16)r1;
    r0 = *(u8*)(r0 + 0xA);
    r0 = (r0 << 2);
    r0 = r0 + r2;
    *(u16*)(r0 + 0x2) = (u16)r1;
    return r0; // BX lr
    r2 = 0x03005294U; // [0x08045E14]
    r0 = *(u32*)(r2);
    r1 = *(u8*)(r0 + 0x4);
    r3 = *(u8*)(r0 + 0x6);
    r0 = *(u32*)(r0 + 0x24);
    r1 = (r1 << 8);
    r1 |= r3;
    r3 = 0x99660000U; // [0x08045E34]
    r1 |= r3;
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r2);
    r2 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r2 += 0x2CU;
    *(u32*)(r2 + 0x20) = (u32)r1;
    r3 = 0x0U;
    *(u32*)(r0) = (u32)r3;
    r1 = 0x1U;
    *(u8*)(r0 + 0x5) = (u8)r1;
    r1 = 0x04000200U /* &REG_IE */; // [0x08045E30]
    r2 = *(u16*)(r1 + 0x8);
    *(u16*)(r1 + 0x8) = (u16)r3;
    r3 = *(u16*)(r1);
    r4 = *(u8*)(r0 + 0xA);
    r0 = 0x8U;
    r0 <<= (r4 & 0xFF);
    r0 |= r3;
    *(u16*)(r1) = (u16)r0;
    r0 = *(u16*)(r1);
    r3 = 0x80U;
    r0 |= r3;
    *(u16*)(r1) = (u16)r0;
    *(u16*)(r1 + 0x8) = (u16)r2;
    r0 = 0x00005003U; // [0x08045E2C]
    r1 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r0 += 0x80U;
    r1 += 0x4CU;
    *(u16*)(r1 + 0x8) = (u16)r0;
    r0 = 0x0U;
    return r0; // BX lr
    r4 = 0x03005294U; // [0x08045E14]
    r1 = *(u32*)(r4);
    r0 = *(u8*)(r1 + 0x15);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08045BA8;
    r0 += 0x1U;
    *(u8*)(r1 + 0x15) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045BA2
    goto loc_08045BEC;
loc_08045BA8:
    r2 = 0x03005294U; // [0x08045E14]
    r0 = *(u8*)(r1 + 0x6);
    r2 = *(u32*)(r2);
    r5 = 0x0U;
    r3 = 0x1U;
    r2 += 0x20U;
    cmp_lhs = (s32)r0; cmp_rhs = 39;
    if (cmp_lhs == cmp_rhs) goto loc_08045BC4;
    cmp_lhs = (s32)r0; cmp_rhs = 37;
    if (cmp_lhs == cmp_rhs) goto loc_08045BC4;
    cmp_lhs = (s32)r0; cmp_rhs = 53;
    if (cmp_lhs == cmp_rhs) goto loc_08045BC4;
    cmp_lhs = (s32)r0; cmp_rhs = 55;
    if (cmp_lhs != cmp_rhs) goto loc_08045BD6;
loc_08045BC4:
    *(u16*)(r1 + 0x12) = (u16)r3;
    *(u8*)(r2 + 0xC) = (u8)r5;
    r2 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045BEC;
    r1 = *(u16*)(r1 + 0x12);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08045BD0: BL __call_via_r3
    goto loc_08045BEC;
loc_08045BD6:
    *(u16*)(r1 + 0x12) = (u16)r3;
    *(u8*)(r2 + 0xC) = (u8)r5;
    r2 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045BE6;
    r1 = *(u16*)(r1 + 0x12);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08045BE2: BL __call_via_r3
loc_08045BE6:
    r1 = *(u32*)(r4);
    r0 = 0x4U;
    *(u32*)(r1) = (u32)r0;
loc_08045BEC:
    r0 = 0x0U;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r2 = 0x03005294U; // [0x08045E14]
    r1 = *(u32*)(r2);
    r4 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r1 = *(u8*)(r1 + 0xA);
    r4 += 0x2EU;
    r5 = 0x0U;
    r3 = (r1 << 2);
    r1 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r1 += 0x2CU;
    r1 = r3 + r1;
    r3 = r3 + r4;
    r4 += 0xFEU;
    *(u16*)(r4 + 0x8) = (u16)r5;
    r5 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 50;
    if (cmp_lhs == cmp_rhs) goto loc_08045C2A;
    cmp_lhs = (s32)r0; cmp_rhs = 80;
    if (cmp_lhs == cmp_rhs) goto loc_08045C34;
    cmp_lhs = (s32)r0; cmp_rhs = 100;
    if (cmp_lhs == cmp_rhs) goto loc_08045C3C;
    cmp_lhs = (s32)r0; cmp_rhs = 130;
    if (cmp_lhs != cmp_rhs) goto loc_08045C46;
    r0 = 0x0000F7ADU; // [0x08045E38]
    *(u16*)(r1) = (u16)r0;
    r0 = 0x4U;
    goto loc_08045C42;
loc_08045C2A:
    r0 = 0x0000FCCBU; // [0x08045E3C]
    *(u16*)(r1) = (u16)r0;
    r0 = *(u32*)(r2);
    *(u32*)(r0 + 0xC) = (u32)r5;
    goto loc_08045C46;
loc_08045C34:
    r0 = 0x0000FAE0U; // [0x08045E40]
    *(u16*)(r1) = (u16)r0;
    r0 = 0x2U;
    goto loc_08045C42;
loc_08045C3C:
    r0 = 0x0000F996U; // [0x08045E44]
    *(u16*)(r1) = (u16)r0;
    r0 = 0x3U;
loc_08045C42:
    r1 = *(u32*)(r2);
    *(u32*)(r1 + 0xC) = (u32)r0;
loc_08045C46:
    r0 = 0xC3U;
    *(u16*)(r3) = (u16)r0;
    r0 = *(u32*)(r2);
    r1 = *(u8*)(r0 + 0xA);
    r0 = 0x8U;
    r0 <<= (r1 & 0xFF);
    *(u16*)(r4 + 0x2) = (u16)r0;
    *(u16*)(r4 + 0x8) = (u16)r5;
    return r0; // BX lr
    r4 = 0x03005294U; // [0x08045E14]
    r0 = *(u32*)(r4);
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08045C74;
    r1 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_08045C82;
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) goto loc_08045C8C;
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_08045C7C;
loc_08045C74:
    r0 = sub_08045B22(r0, r1, r2, r3); // 0x08045C74
    r0 = sub_08045B92(r0, r1, r2, r3); // 0x08045C78
loc_08045C7C:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08045C82:
    *(u8*)(r0 + 0x10) = (u8)r1;
    r0 = 0x32U;
    r0 = sub_08045BF4(r0, r1, r2, r3); // 0x08045C86
    goto loc_08045C7C;
loc_08045C8C:
    *(u8*)(r0 + 0x10) = (u8)r1;
    r0 = sub_08045B22(r0, r1, r2, r3); // 0x08045C8E
    r0 = sub_08045AF6(r0, r1, r2, r3); // 0x08045C92
    r0 = *(u32*)(r4);
    r2 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045C7C;
    r1 = 0x0U;
    r0 = 0xFFU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08045CA2: BL __call_via_r3
    goto loc_08045C7C;
    r2 = 0x08045C5BU; // [0x08045E48]
    *(u32*)(r0) = (u32)r2;
    r0 = 0x03005294U; // [0x08045E14]
    r2 = *(u32*)(r0);
    r0 = 0x04000200U /* &REG_IE */; // [0x08045E30]
    *(u8*)(r2 + 0xA) = (u8)r1;
    r1 = *(u16*)(r0 + 0x8);
    r3 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r3;
    r3 = *(u16*)(r0);
    r4 = *(u8*)(r2 + 0xA);
    r2 = 0x8U;
    r2 <<= (r4 & 0xFF);
    r2 |= r3;
    *(u16*)(r0) = (u16)r2;
    *(u16*)(r0 + 0x8) = (u16)r1;
    return r0; // BX lr
    r1 = 0x1U;
    r0 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r1 = (r1 << 15);
    r0 += 0x4CU;
    *(u16*)(r0 + 0x14) = (u16)r1;
    r1 = 0x000080A0U; // [0x08045E4C]
    *(u16*)(r0 + 0x14) = (u16)r1;
    r3 = 0x03005294U; // [0x08045E14]
    r1 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r0 = *(u32*)(r3);
    r2 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r0 = *(u8*)(r0 + 0xA);
    r1 += 0x2CU;
    r2 += 0x2EU;
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = r0 + r2;
    r4 = 0x0U;
    *(u16*)(r0) = (u16)r4;
    *(u16*)(r1) = (u16)r4;
    r2 = 0x83U;
    *(u16*)(r0) = (u16)r2;
    r5 = 0x000080A0U; // [0x08045E4C]
    r2 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r5 += 0x2U;
    r2 += 0x4CU;
    goto loc_08045D08;
loc_08045D06:
    *(u16*)(r2 + 0x14) = (u16)r5;
loc_08045D08:
    r6 = *(u16*)(r1);
    cmp_lhs = (s32)r6; cmp_rhs = 18;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08045D06;
    r1 = 0x3U;
    *(u16*)(r0) = (u16)r1;
    r0 = 0x000080A0U; // [0x08045E4C]
    *(u16*)(r2 + 0x14) = (u16)r0;
    r0 = 0x00005003U; // [0x08045E2C]
    *(u16*)(r2 + 0x8) = (u16)r0;
    r0 = *(u32*)(r3);
    *(u32*)(r0) = (u32)r4;
    *(u8*)(r0 + 0x4) = (u8)r4;
    *(u8*)(r0 + 0x5) = (u8)r4;
    *(u8*)(r0 + 0x6) = (u8)r4;
    *(u8*)(r0 + 0x7) = (u8)r4;
    *(u8*)(r0 + 0x8) = (u8)r4;
    *(u8*)(r0 + 0x9) = (u8)r4;
    *(u32*)(r0 + 0xC) = (u32)r4;
    *(u8*)(r0 + 0x10) = (u8)r4;
    *(u16*)(r0 + 0x12) = (u16)r4;
    r1 = 0x1U;
    *(u8*)(r0 + 0x14) = (u8)r1;
    *(u8*)(r0 + 0x15) = (u8)r4;
    r0 += 0x20U;
    *(u8*)(r0 + 0xC) = (u8)r4;
    return r0; // BX lr
    r1 = 0x03005294U; // [0x08045E14]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x14) = (u8)r0;
    return r0; // BX lr
    r1 = 0x03005294U; // [0x08045E14]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r1 = *(u32*)(r1);
    if (cmp_lhs == cmp_rhs) goto loc_08045D5E;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08045D62;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_08045D66;
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08045D6E;
    r0 = *(u8*)(r1 + 0x6);
    return r0; // BX lr
loc_08045D5E:
    r0 = *(u16*)(r1 + 0x12);
    return r0; // BX lr
loc_08045D62:
    r0 = *(u8*)(r1 + 0x14);
    return r0; // BX lr
loc_08045D66:
    r0 = *(u32*)(r1);
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    return r0; // BX lr
loc_08045D6E:
    r0 = 0x0000FFFFU; // [0x08045E50]
    return r0; // BX lr
    r1 = 0x03005294U; // [0x08045E14]
    r1 = *(u32*)(r1);
    *(u32*)(r1 + 0x20) = (u32)r0;
    return r0; // BX lr
    r0 = 0x03005294U; // [0x08045E14]
    r1 = *(u32*)(r0);
    r0 = r1;
    r0 += 0x20U;
loc_08045D82:
    r2 = *(u8*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08045D82;
    r0 = *(u16*)(r1 + 0x12);
    return r0; // BX lr
    r1 = 0x04000200U /* &REG_IE */; // [0x08045E30]
    r2 = *(u16*)(r1 + 0x8);
    r1 = 0x03005294U; // [0x08045E14]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r1 = *(u32*)(r1);
    if (cmp_lhs != cmp_rhs) goto loc_08045DAC;
    r2 = 0x6U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r2 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045DE2;
    r1 = *(u16*)(r1 + 0x12);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08045DA6: BL __call_via_r3
    goto loc_08045DE2;
loc_08045DAC:
    r2 = r1;
    r2 += 0x20U;
    r3 = *(u8*)(r2 + 0xC);
    r4 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08045DCC;
    r3 = 0x2U;
    *(u16*)(r1 + 0x12) = (u16)r3;
    *(u8*)(r2 + 0xC) = (u8)r4;
    r2 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045DE2;
    r1 = *(u16*)(r1 + 0x12);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08045DC6: BL __call_via_r3
    goto loc_08045DE2;
loc_08045DCC:
    r3 = *(u8*)(r1 + 0x14);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045DEA;
    r2 = 0x4U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r2 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08045DE2;
    r1 = *(u16*)(r1 + 0x12);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08045DDE: BL __call_via_r3
loc_08045DE2:
    r0 = 0x1U;
loc_08045DE4:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
loc_08045DEA:
    r3 = 0x1U;
    *(u8*)(r2 + 0xC) = (u8)r3;
    *(u8*)(r1 + 0x6) = (u8)r0;
    *(u32*)(r1) = (u32)r4;
    *(u8*)(r1 + 0x4) = (u8)r4;
    *(u8*)(r1 + 0x5) = (u8)r4;
    *(u8*)(r1 + 0x7) = (u8)r4;
    *(u8*)(r1 + 0x8) = (u8)r4;
    *(u8*)(r1 + 0x9) = (u8)r4;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u8*)(r1 + 0x10) = (u8)r4;
    *(u16*)(r1 + 0x12) = (u16)r4;
    *(u8*)(r1 + 0x15) = (u8)r4;
    r0 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08045E1C]
    r1 = (r3 << 8);
    r0 += 0x4CU;
    *(u16*)(r0 + 0x14) = (u16)r1;
    r1 = 0x00005003U; // [0x08045E2C]
    *(u16*)(r0 + 0x8) = (u16)r1;
    r0 = 0x0U;
    goto loc_08045DE4;
    *(u16*)(r2 + r2) = (u16)r4;
    r0 = (r0 << 12);
    r0 = *(u32*)(r5 + 0x20);
    r4 = (r0 >> 32);
    r4 = (r2 << 3);
    r0 = (r0 << 16);
    *(u32*)(r5 + 0x28) = (u32)r4;
    r4 = (r0 >> 32);
    r0 = (r6 << 18);
    *(u16*)(r0) = (u16)r0;
    r0 = (r1 >> 9);
    r0 = r0;
    *(u32*)(r0 + r0) = r3;
    r0 = r0;
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r0 = r0;
    r1 = stack[102]; // [sp + 0x198]
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r3 = *(u8*)(r3 + r1);
    r4 = (r0 >> 32);
    *(u16*)(r4 + 0x4) = (u16)r0;
    r0 = r0;
    r0 = r0;
    r0 = 0x10U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045E58
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045E6A;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045E66
loc_08045E6A:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x11U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045E74
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045E86;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045E82
loc_08045E86:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x12U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045E90
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045EA2;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045E9E
loc_08045EA2:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x13U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045EAC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045EBE;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045EBA
loc_08045EBE:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x14U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045EC8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045EDA;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045ED6
loc_08045EDA:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x15U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045EE4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045EF6;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045EF2
loc_08045EF6:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r0;
    r4 = r1;
    r0 = 0x16U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045F04
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045F44;
    r0 = 0x03005294U; // [0x080461F4]
    r1 = 0x6U;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0x4) = (u8)r1;
    r0 = *(u32*)(r0 + 0x24);
    r1 = *(u16*)(r5);
    r0 += 0x4U;
    *(u16*)(r0) = (u16)r1;
    r0 += 0x2U;
    r1 = r5 + 2;
    r2 = 0x2U;
loc_08045F22:
    r3 = *(u8*)(r1);
    r1 += 0x1U;
    r2 += 0x1U;
    *(u8*)(r0) = (u8)r3;
    r0 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_08045F22;
    r1 = 0x0U;
loc_08045F32:
    r2 = *(u8*)(r4);
    r4 += 0x1U;
    r1 += 0x1U;
    *(u8*)(r0) = (u8)r2;
    r0 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs < cmp_rhs) goto loc_08045F32;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045F40
loc_08045F44:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r1;
    r4 = r0;
    r6 = r2;
    r0 = 0x17U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045F54
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045F76;
    r0 = 0x03005294U; // [0x080461F4]
    r1 = 0x1U;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0x4) = (u8)r1;
    r0 = *(u32*)(r0 + 0x24);
    r0 += 0x4U;
    *(u8*)(r0) = (u8)r6;
    r0 = r0 + r1;
    *(u8*)(r0) = (u8)r5;
    r0 = r0 + r1;
    *(u16*)(r0) = (u16)r4;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045F72
loc_08045F76:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x19U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045F80
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045F92;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045F8E
loc_08045F92:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x1AU;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045F9C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045FAE;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045FAA
loc_08045FAE:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x1BU;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045FB8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045FCA;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045FC6
loc_08045FCA:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x1CU;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045FD4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08045FE6;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045FE2
loc_08045FE6:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x1DU;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08045FF0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08046002;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08045FFE
loc_08046002:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x1EU;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x0804600C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804601E;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x0804601A
loc_0804601E:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r0;
    r0 = 0x1FU;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x0804602A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08046042;
    r0 = 0x03005294U; // [0x080461F4]
    r1 = 0x1U;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0x4) = (u8)r1;
    r0 = *(u32*)(r0 + 0x24);
    *(u32*)(r0 + 0x4) = (u32)r4;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x0804603E
loc_08046042:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x20U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x0804604C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804605E;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x0804605A
loc_0804605E:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x21U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08046068
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804607A;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08046076
loc_0804607A:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r0;
    r4 = r1;
    r0 = 0x24U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08046088
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080460BE;
    r0 = (r4 >> 2);
    r1 = (r4 << 30);
    if (cmp_lhs == cmp_rhs) goto loc_0804609C;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_0804609C:
    r1 = (r0 << 24);
    r0 = 0x03005294U; // [0x080461F4]
    r1 = (r1 >> 24);
    r0 = *(u32*)(r0);
    r2 = 0x1U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = (r1 << 2);
    r1 = (r1 >> 2);
    r2 = (r2 << 26);
    r2 |= r1;
    r1 = *(u32*)(r0 + 0x24);
    r1 += 0x4U;
    r0 = r5;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x080460B6
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x080460BA
loc_080460BE:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r0;
    r4 = r1;
    r0 = 0x25U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x080460CC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08046102;
    r0 = (r4 >> 2);
    r1 = (r4 << 30);
    if (cmp_lhs == cmp_rhs) goto loc_080460E0;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_080460E0:
    r1 = (r0 << 24);
    r0 = 0x03005294U; // [0x080461F4]
    r1 = (r1 >> 24);
    r0 = *(u32*)(r0);
    r2 = 0x1U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = (r1 << 2);
    r1 = (r1 >> 2);
    r2 = (r2 << 26);
    r2 |= r1;
    r1 = *(u32*)(r0 + 0x24);
    r1 += 0x4U;
    r0 = r5;
    r0 = sub_080433E0(r0, r1, r2, r3); // 0x080460FA
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x080460FE
loc_08046102:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x26U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x0804610C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0804611E(r0, r1, r2, r3);
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    return r0;
}

// ROM Address: 0x08046118..0x08046124 (12 bytes, Thumb)
u32 sub_08046118(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x0804611A
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08046124..0x080461F8 (212 bytes, Thumb)
u32 sub_08046124(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x27U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08046128
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804613A;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08046136
loc_0804613A:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r0;
    r0 = 0x28U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08046146
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08046178;
    r2 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    r0 = 0x03005294U; // [0x080461F4]
    if (cmp_lhs != cmp_rhs) goto loc_0804615C;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0x4) = (u8)r2;
    goto loc_08046174;
loc_0804615C:
    r0 = *(u32*)(r0);
    r1 = 0x1U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r0 = *(u32*)(r0 + 0x24);
    r0 += 0x4U;
    *(u8*)(r0) = (u8)r4;
    r0 = r0 + r1;
    *(u8*)(r0) = (u8)r2;
    r0 = r0 + r1;
    *(u8*)(r0) = (u8)r2;
    r0 = r0 + r1;
    *(u8*)(r0) = (u8)r2;
loc_08046174:
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08046174
loc_08046178:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r0;
    r5 = r1;
    r0 = 0x29U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08046186
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080461AC;
    r0 = 0x03005294U; // [0x080461F4]
    r1 = 0x1U;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0x4) = (u8)r1;
    r0 = *(u32*)(r0 + 0x24);
    r0 += 0x4U;
    *(u8*)(r0) = (u8)r4;
    r0 = r0 + r1;
    *(u8*)(r0) = (u8)r5;
    r0 = r0 + r1;
    r1 = 0x0U;
    *(u8*)(r0) = (u8)r1;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x080461A8
loc_080461AC:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x37U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x080461B6
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080461C8;
    r1 = 0x03005294U; // [0x080461F4]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x080461C4
loc_080461C8:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r0;
    r0 = 0x30U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x080461D4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080461EC;
    r0 = 0x03005294U; // [0x080461F4]
    r1 = 0x1U;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0x4) = (u8)r1;
    r0 = *(u32*)(r0 + 0x24);
    *(u32*)(r0 + 0x4) = (u32)r4;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x080461E8
loc_080461EC:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = r0;
    *(u16*)(r2 + r2) = (u16)r4;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x080461F8..0x080462AC (180 bytes, Thumb)
u32 sub_080461F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = 0x31U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08046200
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804621C;
    r0 = 0x03005294U; // [0x080462A8]
    r1 = 0x1U;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = (r5 << 8);
    r0 = *(u32*)(r0 + 0x24);
    r1 |= r4;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08046218
loc_0804621C:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r1;
    r4 = r0;
    r6 = r2;
    r0 = 0x32U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x0804622C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804624C;
    r0 = 0x03005294U; // [0x080462A8]
    r1 = 0x2U;
    r0 = *(u32*)(r0);
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = (r4 << 16);
    r2 = *(u32*)(r0 + 0x24);
    r1 |= r5;
    *(u32*)(r2 + 0x4) = (u32)r1;
    r0 = *(u32*)(r0 + 0x24);
    *(u32*)(r0 + 0x8) = (u32)r6;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08046248
loc_0804624C:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x33U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08046256
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08046268;
    r1 = 0x03005294U; // [0x080462A8]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08046264
loc_08046268:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x34U;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x08046272
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08046284;
    r1 = 0x03005294U; // [0x080462A8]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x08046280
loc_08046284:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = 0x3DU;
    r0 = sub_08045D8C(r0, r1, r2, r3); // 0x0804628E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080462A0;
    r1 = 0x03005294U; // [0x080462A8]
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = sub_08045B40(r0, r1, r2, r3); // 0x0804629C
loc_080462A0:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = r0;
    *(u16*)(r2 + r2) = (u16)r4;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08046AA0..0x08046AA8 (8 bytes, Thumb)
u32 sub_08046AA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))r0)(r0, r1, r2, r3); // BX r0
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
    return ((u32 (*)(u32, u32, u32, u32))r2)(r0, r1, r2, r3); // BX r2
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08046AAE..0x08046B1C (110 bytes, Thumb)
u32 sub_08046AAE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))r7)(r0, r1, r2, r3); // BX r7
    r0 = sub_08046AB6(r0, r1, r2, r3); // 0x08046AB2
    r0 = sub_08046AC0(r0, r1, r2, r3); // 0x08046AB6
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = 0x00002630U; // [0x08046AE4]
    r5 += pc;
    r4 = 0x00002648U; // [0x08046AE8]
    r4 += pc;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08046ADC;
loc_08046ACE:
    r4 -= 0x4U;
    r0 = *(u32*)(r4);
    r0 = r4 + r0;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08046AD4: BL 0x08046AA0
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08046ACE;
loc_08046ADC:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = r0;
    r6 = 0x30U;
    r0 = r0;
    r6 = 0x48U;
    r0 = r0;
    r4 = 0x000023E4U; // [0x08046B10]
    r4 += pc;
    r5 = 0x00002600U; // [0x08046B14]
    r5 += pc;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_08046B08;
loc_08046AFA:
    r0 = *(u32*)(r4);
    r0 = r0 + r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08046AFE: BL 0x08046AA0
    r4 += 0x4U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_08046AFA;
loc_08046B08:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = r0;
    r3 = 0xE4U;
    r0 = r0;
    r6 = 0x0U;
    r0 = r0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046B1C..0x08046B28 (12 bytes, ARM32)
u32 sub_08046B1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046B1C: ARM 0xE0900002 */
    /* 0x08046B20: ARM 0xE2A11000 */
    return r0; // 0x08046B24: BX lr
    return r0;
}

// Evidence: armlib/c_t__se.l, member llcmpu.o, symbol __16_ll_cmpu, 16 B matched, 0 B masked, 16 B compared
// ROM Address: 0x08046B28..0x08046B2C (4 bytes, Thumb)
u32 __16_ll_cmpu(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046B2C..0x08046B38 (12 bytes, ARM32)
u32 sub_08046B2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046B2C: ARM 0xE1510003 */
    /* 0x08046B30: ARM 0x01500002 */
    return r0; // 0x08046B34: BX lr
    return r0;
}

// Evidence: armlib/c_t__se.l, member llmul3m.o, symbol __16_ll_mul, 32 B matched, 0 B masked, 32 B compared
// ROM Address: 0x08046B38..0x08046B3C (4 bytes, Thumb)
u32 __16_ll_mul(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046B3C..0x08046B58 (28 bytes, ARM32)
u32 sub_08046B3C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046B3C: ARM 0xE92D4070 */
    /* 0x08046B40: ARM 0xE1A0E000 */
    /* 0x08046B44: ARM 0xE08C0E92 */
    /* 0x08046B48: ARM 0xE021C192 */
    /* 0x08046B4C: ARM 0xE0211E93 */
    /* 0x08046B50: ARM 0xE8BD4070 */
    return r0; // 0x08046B54: BX lr
    return r0;
}

// ROM Address: 0x08046B58..0x08046B5C (4 bytes, Thumb)
u32 sub_08046B58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046B5C..0x08046B64 (8 bytes, ARM32)
u32 sub_08046B5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046B5C: ARM 0xE1A03042 */
    /* 0x08046B60: ARM 0xEAFFFFF5 */
    return r0;
}

// ROM Address: 0x08046B64..0x08046B68 (4 bytes, Thumb)
u32 sub_08046B64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046B68..0x08046B70 (8 bytes, ARM32)
u32 sub_08046B68(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046B68: ARM 0xE3A03000 */
    /* 0x08046B6C: ARM 0xEAFFFFF2 */
    return r0;
}

// ROM Address: 0x08046B70..0x08046B74 (4 bytes, Thumb)
u32 sub_08046B70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046B74..0x08046B84 (16 bytes, ARM32)
u32 sub_08046B74(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046B74: ARM 0xE1A03FC1 */
    /* 0x08046B78: ARM 0xE1A02001 */
    /* 0x08046B7C: ARM 0xE1A01FC0 */
    /* 0x08046B80: ARM 0xEAFFFFED */
    return r0;
}

// Evidence: armlib/c_t__se.l, member llneg.o, symbol __16_ll_neg, 16 B matched, 0 B masked, 16 B compared
// ROM Address: 0x08046B84..0x08046B88 (4 bytes, Thumb)
u32 __16_ll_neg(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046B88..0x08046B94 (12 bytes, ARM32)
u32 sub_08046B88(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046B88: ARM 0xE2700000 */
    /* 0x08046B8C: ARM 0xE2E11000 */
    return r0; // 0x08046B90: BX lr
    return r0;
}

// Evidence: armlib/c_t__se.l, member llrsb.o, symbol __16_ll_rsb, 16 B matched, 0 B masked, 16 B compared
// ROM Address: 0x08046B94..0x08046B98 (4 bytes, Thumb)
u32 __16_ll_rsb(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046B98..0x08046BA4 (12 bytes, ARM32)
u32 sub_08046B98(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046B98: ARM 0xE0700002 */
    /* 0x08046B9C: ARM 0xE0E11003 */
    return r0; // 0x08046BA0: BX lr
    return r0;
}

// ROM Address: 0x08046BA4..0x08046BA8 (4 bytes, Thumb)
u32 sub_08046BA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046BA8..0x08046BFC (84 bytes, ARM32)
u32 sub_08046BA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046BA8: ARM 0xE92D4010 */
    /* 0x08046BAC: ARM 0xE1B040C1 */
    /* 0x08046BB0: ARM 0xE02440A3 */
    /* 0x08046BB4: ARM 0x5A000001 */
    /* 0x08046BB8: ARM 0xE2700000 */
    /* 0x08046BBC: ARM 0xE2E11000 */
    /* 0x08046BC0: ARM 0xE1130003 */
    /* 0x08046BC4: ARM 0x5A000001 */
    /* 0x08046BC8: ARM 0xE2722000 */
    /* 0x08046BCC: ARM 0xE2E33000 */
    /* 0x08046BD0: ARM 0xEB0002B5 */
    /* 0x08046BD4: ARM 0xE3140440 */
    /* 0x08046BD8: ARM 0x0A000001 */
    /* 0x08046BDC: ARM 0xE2700000 */
    /* 0x08046BE0: ARM 0xE2E11000 */
    /* 0x08046BE4: ARM 0xE3140480 */
    /* 0x08046BE8: ARM 0x0A000001 */
    /* 0x08046BEC: ARM 0xE2722000 */
    /* 0x08046BF0: ARM 0xE2E33000 */
    /* 0x08046BF4: ARM 0xE8BD4010 */
    return r0; // 0x08046BF8: BX lr
    return r0;
}

// Evidence: armlib/c_t__se.l, member llshl.o, symbol __16_ll_shift_l, 44 B matched, 0 B masked, 44 B compared
// ROM Address: 0x08046BFC..0x08046C00 (4 bytes, Thumb)
u32 __16_ll_shift_l(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046C00..0x08046C28 (40 bytes, ARM32)
u32 sub_08046C00(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046C00: ARM 0xE2523020 */
    /* 0x08046C04: ARM 0x5A000004 */
    /* 0x08046C08: ARM 0xE2623020 */
    /* 0x08046C0C: ARM 0xE1A01211 */
    /* 0x08046C10: ARM 0xE1811330 */
    /* 0x08046C14: ARM 0xE1A00210 */
    return r0; // 0x08046C18: BX lr
    /* 0x08046C1C: ARM 0xE1A01310 */
    /* 0x08046C20: ARM 0xE3A00000 */
    return r0; // 0x08046C24: BX lr
    return r0;
}

// Evidence: armlib/c_t__se.l, member llsshr.o, symbol __16_ll_sshift_r, 44 B matched, 0 B masked, 44 B compared
// ROM Address: 0x08046C28..0x08046C2C (4 bytes, Thumb)
u32 __16_ll_sshift_r(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046C2C..0x08046C50 (36 bytes, ARM32)
u32 sub_08046C2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046C2C: ARM 0xE2523020 */
    /* 0x08046C30: ARM 0x5A000004 */
    /* 0x08046C34: ARM 0xE2623020 */
    /* 0x08046C38: ARM 0xE1A00230 */
    /* 0x08046C3C: ARM 0xE1800311 */
    /* 0x08046C40: ARM 0xE1A01251 */
    return r0; // 0x08046C44: BX lr
    /* 0x08046C48: ARM 0xE1A00351 */
    /* 0x08046C4C: ARM 0xE1A01FC1 */
    return r0;
}

// ROM Address: 0x08046C54..0x08046C82 (46 bytes, Thumb)
u32 sub_08046C54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08046C78;
    r3 = r0;
    r3 |= r1;
    r3 = (r3 << 30);
    if (cmp_lhs != cmp_rhs) goto loc_08046C78;
loc_08046C62:
    r3 = *(u32*)r0; r0 += 4;
    r4 = *(u32*)r1; r1 += 4;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08046C70;
    r2 -= 0x4U;
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08046C62;
loc_08046C70:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08046C78;
    r0 -= 0x4U;
    r1 -= 0x4U;
loc_08046C78:
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08046C82(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08046C82..0x08046CAA (40 bytes, Thumb)
u32 sub_08046C82(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r2 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08046C8A;
    r2 += 0x1U;
    goto loc_08046C96;
loc_08046C8A:
    r3 = *(u8*)(r0);
    r4 = *(u8*)(r1);
    r1 += 0x1U;
    r0 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08046CA6;
loc_08046C96:
    r3 = *(u8*)(r0);
    r4 = *(u8*)(r1);
    r1 += 0x1U;
    r0 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08046CA6;
    r2 -= 0x2U;
    if (cmp_lhs != cmp_rhs) goto loc_08046C8A;
loc_08046CA6:
    r0 = r3 - r4;
    return sub_08046C7E(r0, r1, r2, r3);
}

// ROM Address: 0x08046CAC..0x08046CBA (14 bytes, Thumb)
u32 sub_08046CAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xCU;
    r0 = sub_08047A08(r0, r1, r2, r3); // 0x08046CB0: BL 0x08047A08
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08046CBC..0x08046CC0 (4 bytes, Thumb)
u32 sub_08046CBC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046CC0..0x08046D18 (88 bytes, ARM32)
u32 sub_08046CC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046CC0: ARM 0xE3A02000 */
    /* 0x08046CC4: ARM 0xE92D4000 */
    /* 0x08046CC8: ARM 0xE1A03002 */
    /* 0x08046CCC: ARM 0xE1A0C002 */
    /* 0x08046CD0: ARM 0xE1A0E002 */
    /* 0x08046CD4: ARM 0xE2511020 */
    /* 0x08046CD8: ARM 0x28A0500C */
    /* 0x08046CDC: ARM 0x28A0500C */
    /* 0x08046CE0: ARM 0x22511020 */
    /* 0x08046CE4: ARM 0x2AFFFFFB */
    /* 0x08046CE8: ARM 0xE1B01E01 */
    /* 0x08046CEC: ARM 0x28A0500C */
    /* 0x08046CF0: ARM 0x48A0000C */
    /* 0x08046CF4: ARM 0xE8BD4000 */
    /* 0x08046CF8: ARM 0xE1B01101 */
    /* 0x08046CFC: ARM 0x24802004 */
    /* 0x08046D00: ARM 0x012FFF1E */
    /* 0x08046D04: ARM 0x44C02001 */
    /* 0x08046D08: ARM 0x44C02001 */
    /* 0x08046D0C: ARM 0xE3110440 */
    /* 0x08046D10: ARM 0x14C02001 */
    return r0; // 0x08046D14: BX lr
    return r0;
}

// ROM Address: 0x08046D18..0x08046D1C (4 bytes, Thumb)
u32 sub_08046D18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046D1C..0x08046DD0 (180 bytes, ARM32)
u32 sub_08046D1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046D1C: ARM 0xE3520003 */
    /* 0x08046D20: ARM 0x9A00003E */
    /* 0x08046D24: ARM 0xE210C003 */
    /* 0x08046D28: ARM 0x0A000008 */
    /* 0x08046D2C: ARM 0xE4D13001 */
    /* 0x08046D30: ARM 0xE35C0002 */
    /* 0x08046D34: ARM 0xE082200C */
    /* 0x08046D38: ARM 0x94D1C001 */
    /* 0x08046D3C: ARM 0xE4C03001 */
    /* 0x08046D40: ARM 0x34D13001 */
    /* 0x08046D44: ARM 0xE2422004 */
    /* 0x08046D48: ARM 0x94C0C001 */
    /* 0x08046D4C: ARM 0x34C03001 */
    /* 0x08046D50: ARM 0xE2113003 */
    /* 0x08046D54: ARM 0x0A00001E */
    /* 0x08046D58: ARM 0xE2522004 */
    /* 0x08046D5C: ARM 0x3A00002F */
    /* 0x08046D60: ARM 0xE731C003 */
    /* 0x08046D64: ARM 0xE3530002 */
    /* 0x08046D68: ARM 0x0A000008 */
    /* 0x08046D6C: ARM 0x8A00000F */
    /* 0x08046D70: ARM 0xE1A0342C */
    /* 0x08046D74: ARM 0xE5B1C004 */
    /* 0x08046D78: ARM 0xE2522004 */
    /* 0x08046D7C: ARM 0xE1833C0C */
    /* 0x08046D80: ARM 0xE4803004 */
    /* 0x08046D84: ARM 0x2AFFFFF9 */
    /* 0x08046D88: ARM 0xE2811001 */
    /* 0x08046D8C: ARM 0xEA000023 */
    /* 0x08046D90: ARM 0xE1A0382C */
    /* 0x08046D94: ARM 0xE5B1C004 */
    /* 0x08046D98: ARM 0xE2522004 */
    /* 0x08046D9C: ARM 0xE183380C */
    /* 0x08046DA0: ARM 0xE4803004 */
    /* 0x08046DA4: ARM 0x2AFFFFF9 */
    /* 0x08046DA8: ARM 0xE2811002 */
    /* 0x08046DAC: ARM 0xEA00001B */
    /* 0x08046DB0: ARM 0xE1A03C2C */
    /* 0x08046DB4: ARM 0xE5B1C004 */
    /* 0x08046DB8: ARM 0xE2522004 */
    /* 0x08046DBC: ARM 0xE183340C */
    /* 0x08046DC0: ARM 0xE4803004 */
    /* 0x08046DC4: ARM 0x2AFFFFF9 */
    /* 0x08046DC8: ARM 0xE2811003 */
    /* 0x08046DCC: ARM 0xEA000013 */
    return r0;
}

// ROM Address: 0x08046DD0..0x08046DD4 (4 bytes, Thumb)
u32 sub_08046DD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046DD4..0x08046E40 (108 bytes, ARM32)
u32 sub_08046DD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046DD4: ARM 0xE92D4010 */
    /* 0x08046DD8: ARM 0xE2522020 */
    /* 0x08046DDC: ARM 0x3A000005 */
    /* 0x08046DE0: ARM 0x28B15018 */
    /* 0x08046DE4: ARM 0x28A05018 */
    /* 0x08046DE8: ARM 0x28B15018 */
    /* 0x08046DEC: ARM 0x28A05018 */
    /* 0x08046DF0: ARM 0x22522020 */
    /* 0x08046DF4: ARM 0x2AFFFFF9 */
    /* 0x08046DF8: ARM 0xE1B0CE02 */
    /* 0x08046DFC: ARM 0x28B15018 */
    /* 0x08046E00: ARM 0x28A05018 */
    /* 0x08046E04: ARM 0x48B10018 */
    /* 0x08046E08: ARM 0x48A00018 */
    /* 0x08046E0C: ARM 0xE8BD4010 */
    /* 0x08046E10: ARM 0xE1B0CF02 */
    /* 0x08046E14: ARM 0x24913004 */
    /* 0x08046E18: ARM 0x24803004 */
    /* 0x08046E1C: ARM 0x012FFF1E */
    /* 0x08046E20: ARM 0xE1B02F82 */
    /* 0x08046E24: ARM 0x44D12001 */
    /* 0x08046E28: ARM 0x24D13001 */
    /* 0x08046E2C: ARM 0x24D1C001 */
    /* 0x08046E30: ARM 0x44C02001 */
    /* 0x08046E34: ARM 0x24C03001 */
    /* 0x08046E38: ARM 0x24C0C001 */
    return r0; // 0x08046E3C: BX lr
    return r0;
}

// ROM Address: 0x08046E40..0x08046E44 (4 bytes, Thumb)
u32 sub_08046E40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046E44..0x08046E58 (20 bytes, ARM32)
u32 sub_08046E44(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046E44: ARM 0xE20130FF */
    /* 0x08046E48: ARM 0xE1A01002 */
    /* 0x08046E4C: ARM 0xE1832403 */
    /* 0x08046E50: ARM 0xE1822802 */
    /* 0x08046E54: ARM 0xEA0002FB */
    return r0;
}

// Evidence: BX pc at 0x08046E58 switches to ARM state, whose body (asm/unk_08046E5C.s) negates each operand by its sign (ANDS r2,r0,#0x40000000; RSBMI r0,r0,#0; EORS r3,r2,r1,asr #32; RSBHS r1,r1,#0), runs the restoring division at |arm_08046EBC| (RSBS ip,r0,r1,lsr #7; SUBHS r1,r1,r0,lsl #7; ADC r2,r2,r2) and fixes the quotient sign (EORS r0,r2,r3,asr #31); 53 BL sites reach the veneer
// ROM Address: 0x08046E58..0x08046E5C (4 bytes, Thumb)
u32 Thunk_SignedDivide(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046E5C..0x08046F30 (212 bytes, ARM32)
u32 sub_08046E5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046E5C: ARM 0xE2102480 */
    /* 0x08046E60: ARM 0x42600000 */
    /* 0x08046E64: ARM 0xE0323041 */
    /* 0x08046E68: ARM 0x22611000 */
    /* 0x08046E6C: ARM 0xE070C1A1 */
    /* 0x08046E70: ARM 0x3A000020 */
    /* 0x08046E74: ARM 0xE070C421 */
    /* 0x08046E78: ARM 0x3A00000F */
    /* 0x08046E7C: ARM 0xE1A00400 */
    /* 0x08046E80: ARM 0xE38224FF */
    /* 0x08046E84: ARM 0xE070C221 */
    /* 0x08046E88: ARM 0x3A000017 */
    /* 0x08046E8C: ARM 0xE070C421 */
    /* 0x08046E90: ARM 0x3A000009 */
    /* 0x08046E94: ARM 0xE1A00400 */
    /* 0x08046E98: ARM 0xE38228FF */
    /* 0x08046E9C: ARM 0xE070C421 */
    /* 0x08046EA0: ARM 0x21A00400 */
    /* 0x08046EA4: ARM 0x23822CFF */
    /* 0x08046EA8: ARM 0xE070C221 */
    /* 0x08046EAC: ARM 0x3A00000E */
    /* 0x08046EB0: ARM 0xE270C000 */
    /* 0x08046EB4: ARM 0x2A0002D8 */
    /* 0x08046EB8: ARM 0x21A00420 */
    /* 0x08046EBC: ARM 0xE070C3A1 */
    /* 0x08046EC0: ARM 0x20411380 */
    /* 0x08046EC4: ARM 0xE0A22002 */
    /* 0x08046EC8: ARM 0xE070C321 */
    /* 0x08046ECC: ARM 0x20411300 */
    /* 0x08046ED0: ARM 0xE0A22002 */
    /* 0x08046ED4: ARM 0xE070C2A1 */
    /* 0x08046ED8: ARM 0x20411280 */
    /* 0x08046EDC: ARM 0xE0A22002 */
    /* 0x08046EE0: ARM 0xE070C221 */
    /* 0x08046EE4: ARM 0x20411200 */
    /* 0x08046EE8: ARM 0xE0A22002 */
    /* 0x08046EEC: ARM 0xE070C1A1 */
    /* 0x08046EF0: ARM 0x20411180 */
    /* 0x08046EF4: ARM 0xE0A22002 */
    /* 0x08046EF8: ARM 0xE070C121 */
    /* 0x08046EFC: ARM 0x20411100 */
    /* 0x08046F00: ARM 0xE0A22002 */
    /* 0x08046F04: ARM 0xE070C0A1 */
    /* 0x08046F08: ARM 0x20411080 */
    /* 0x08046F0C: ARM 0xE0A22002 */
    /* 0x08046F10: ARM 0xE070C001 */
    /* 0x08046F14: ARM 0x20411000 */
    /* 0x08046F18: ARM 0xE0B22002 */
    /* 0x08046F1C: ARM 0x2AFFFFE5 */
    /* 0x08046F20: ARM 0xE0320FC3 */
    /* 0x08046F24: ARM 0xE0800FA3 */
    /* 0x08046F28: ARM 0x22611000 */
    return r0; // 0x08046F2C: BX lr
    return r0;
}

// ROM Address: 0x08046F30..0x08046F34 (4 bytes, Thumb)
u32 sub_08046F30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08046F34..0x08046FF4 (192 bytes, ARM32)
u32 sub_08046F34(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08046F34: ARM 0xE3A02000 */
    /* 0x08046F38: ARM 0xE070C1A1 */
    /* 0x08046F3C: ARM 0x3A000020 */
    /* 0x08046F40: ARM 0xE070C421 */
    /* 0x08046F44: ARM 0x3A00000F */
    /* 0x08046F48: ARM 0xE1A00400 */
    /* 0x08046F4C: ARM 0xE38224FF */
    /* 0x08046F50: ARM 0xE070C221 */
    /* 0x08046F54: ARM 0x3A000017 */
    /* 0x08046F58: ARM 0xE070C421 */
    /* 0x08046F5C: ARM 0x3A000009 */
    /* 0x08046F60: ARM 0xE1A00400 */
    /* 0x08046F64: ARM 0xE38228FF */
    /* 0x08046F68: ARM 0xE070C421 */
    /* 0x08046F6C: ARM 0x21A00400 */
    /* 0x08046F70: ARM 0x23822CFF */
    /* 0x08046F74: ARM 0xE070C221 */
    /* 0x08046F78: ARM 0x3A00000E */
    /* 0x08046F7C: ARM 0xE270C000 */
    /* 0x08046F80: ARM 0x2A0002A5 */
    /* 0x08046F84: ARM 0x21A00420 */
    /* 0x08046F88: ARM 0xE070C3A1 */
    /* 0x08046F8C: ARM 0x20411380 */
    /* 0x08046F90: ARM 0xE0A22002 */
    /* 0x08046F94: ARM 0xE070C321 */
    /* 0x08046F98: ARM 0x20411300 */
    /* 0x08046F9C: ARM 0xE0A22002 */
    /* 0x08046FA0: ARM 0xE070C2A1 */
    /* 0x08046FA4: ARM 0x20411280 */
    /* 0x08046FA8: ARM 0xE0A22002 */
    /* 0x08046FAC: ARM 0xE070C221 */
    /* 0x08046FB0: ARM 0x20411200 */
    /* 0x08046FB4: ARM 0xE0A22002 */
    /* 0x08046FB8: ARM 0xE070C1A1 */
    /* 0x08046FBC: ARM 0x20411180 */
    /* 0x08046FC0: ARM 0xE0A22002 */
    /* 0x08046FC4: ARM 0xE070C121 */
    /* 0x08046FC8: ARM 0x20411100 */
    /* 0x08046FCC: ARM 0xE0A22002 */
    /* 0x08046FD0: ARM 0xE070C0A1 */
    /* 0x08046FD4: ARM 0x20411080 */
    /* 0x08046FD8: ARM 0xE0A22002 */
    /* 0x08046FDC: ARM 0xE070C001 */
    /* 0x08046FE0: ARM 0x20411000 */
    /* 0x08046FE4: ARM 0xE0B22002 */
    /* 0x08046FE8: ARM 0x2AFFFFE5 */
    /* 0x08046FEC: ARM 0xE1A00002 */
    return r0; // 0x08046FF0: BX lr
    return r0;
}

// Evidence: armlib/c_t__ue.l, member vc1c.o, symbol __vecmap1c__FPvT1iPFPv_v, 36 B matched, 4 B masked, 32 B compared
// ROM Address: 0x08046FF4..0x08047040 (76 bytes, Thumb)
u32 __vecmap1c__FPvT1iPFPv_v(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    r7 = r3;
    r6 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08047010;
loc_08047004:
    r0 = r4;
    r0 = sub_08046AAE(r0, r1, r2, r3); // 0x08047006: BL 0x08046AAE
    r4 = r4 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_08047004;
loc_08047010:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r0 = r0;
    r5 = r0;
    r4 = r1;
    r7 = r2;
    r6 = r3;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0804703A;
loc_08047028:
    r1 = r4;
    r0 = r5;
    r2 = stack[6]; // [sp + 0x18]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804702E: BL __call_via_r3
    r4 = r4 + r6;
    r5 = r5 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08047028;
loc_0804703A:
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08047654..0x08047684 (48 bytes, Thumb)
u32 sub_08047654(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r5; cmp_rhs = 24;
    *(u8*)(r0 + r1) = (u8)r4;
    r1 = 0xFBU;
    r7 -= 0xF9U;
    cmp_lhs = (s32)r5; cmp_rhs = 24;
    *(u8*)(r0 + r1) = (u8)r4;
    r1 = 0xFBU;
    *(u32*)r0 = r0; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    cmp_lhs = (s32)r5; cmp_rhs = 24;
    *(u8*)(r0 + r1) = (u8)r4;
    r1 = 0xFBU;
    r1 &= r1;
    r1 = r0;
    r0 = r0;
    r0 = r0;
    r0 = *(u8*)(r7 + 0x1F);
    r4 = (r0 << 11);
    r7 = (r6 << 1);
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r7 = *(u8*)(r0 + r0);
    r3 += 0x14U;
    return r0;
}

// ROM Address: 0x08047686..0x080476A6 (32 bytes, Thumb)
u32 sub_08047686(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 -= 0xA1U;
    r0 = sub_08047FC0(r0, r1, r2, r3); // 0x0804768A
    r0 = *(u32*)(r0);
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r0;
    r0 = sub_08047FC0(r0, r1, r2, r3); // 0x0804769A
    *(u32*)(r0) = (u32)r4;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x080476A8..0x080476AC (4 bytes, Thumb)
u32 sub_080476A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x080476AC..0x0804776C (192 bytes, ARM32)
u32 sub_080476AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x080476AC: ARM 0xE92D4070 */
    /* 0x080476B0: ARM 0xE1A04001 */
    /* 0x080476B4: ARM 0xE1A05000 */
    /* 0x080476B8: ARM 0xE3A06000 */
    /* 0x080476BC: ARM 0xE193CFA2 */
    /* 0x080476C0: ARM 0x1A000011 */
    /* 0x080476C4: ARM 0xE1120002 */
    /* 0x080476C8: ARM 0x0A0000CC */
    /* 0x080476CC: ARM 0xE1B0C7A2 */
    /* 0x080476D0: ARM 0x02866010 */
    /* 0x080476D4: ARM 0xE1A0C612 */
    /* 0x080476D8: ARM 0xE1B0EBAC */
    /* 0x080476DC: ARM 0x01A0C40C */
    /* 0x080476E0: ARM 0x02866008 */
    /* 0x080476E4: ARM 0xE1B0EDAC */
    /* 0x080476E8: ARM 0x01A0C20C */
    /* 0x080476EC: ARM 0x02866004 */
    /* 0x080476F0: ARM 0xE1B0EEAC */
    /* 0x080476F4: ARM 0x01A0C10C */
    /* 0x080476F8: ARM 0x02866002 */
    /* 0x080476FC: ARM 0xE1B0EF2C */
    /* 0x08047700: ARM 0x01A0C08C */
    /* 0x08047704: ARM 0x02866001 */
    /* 0x08047708: ARM 0xEA000017 */
    /* 0x0804770C: ARM 0xE3130480 */
    /* 0x08047710: ARM 0x1A000012 */
    /* 0x08047714: ARM 0xE1B0C7A3 */
    /* 0x08047718: ARM 0x02866010 */
    /* 0x0804771C: ARM 0xE1A0C613 */
    /* 0x08047720: ARM 0xE1B0EBAC */
    /* 0x08047724: ARM 0x01A0C40C */
    /* 0x08047728: ARM 0x02866008 */
    /* 0x0804772C: ARM 0xE1B0EDAC */
    /* 0x08047730: ARM 0x01A0C20C */
    /* 0x08047734: ARM 0x02866004 */
    /* 0x08047738: ARM 0xE1B0EEAC */
    /* 0x0804773C: ARM 0x01A0C10C */
    /* 0x08047740: ARM 0x02866002 */
    /* 0x08047744: ARM 0xE1B0EF2C */
    /* 0x08047748: ARM 0x01A0C08C */
    /* 0x0804774C: ARM 0x02866001 */
    /* 0x08047750: ARM 0xE2663020 */
    /* 0x08047754: ARM 0xE18CC332 */
    /* 0x08047758: ARM 0xE1A0E612 */
    /* 0x0804775C: ARM 0xEA00004C */
    /* 0x08047760: ARM 0xE1A0C003 */
    /* 0x08047764: ARM 0xE1A0E002 */
    /* 0x08047768: ARM 0xEA00009C */
    return r0;
}

// ROM Address: 0x0804776C..0x0804776E (2 bytes, Thumb)
u32 sub_0804776C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x0U;
    return r0;
}

// ROM Address: 0x08047A08..0x08047A0A (2 bytes, Thumb)
u32 sub_08047A08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x08047A0A..0x08047A1C (18 bytes, Thumb)
u32 sub_08047A0A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r0 = sub_08047FD4(r0, r1, r2, r3); // 0x08047A0C: BL 0x08047FD4
    r0 = 0x0U;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08047A1C..0x08047A28 (12 bytes, ARM32)
u32 sub_08047A1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08047A1C: ARM 0xE3A00002 */
    /* 0x08047A20: ARM 0xE3A01002 */
    /* 0x08047A24: ARM 0xEA00016B */
    return r0;
}

// ROM Address: 0x08047A28..0x08047A2C (4 bytes, Thumb)
u32 sub_08047A28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08047A2C..0x08047A40 (20 bytes, ARM32)
u32 sub_08047A2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08047A2C: ARM 0xE92D4010 */
    /* 0x08047A30: ARM 0xEB00015F */
    /* 0x08047A34: ARM 0xE2800004 */
    /* 0x08047A38: ARM 0xE8BD4010 */
    return r0; // 0x08047A3C: BX lr
    return r0;
}

// ROM Address: 0x08047A40..0x08047A44 (4 bytes, Thumb)
u32 sub_08047A40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08047A44..0x08047F5C (1304 bytes, ARM32)
u32 sub_08047A44(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08047A44: ARM 0xE3A02000 */
    /* 0x08047A48: ARM 0xE3510004 */
    /* 0x08047A4C: ARM 0x3A000008 */
    /* 0x08047A50: ARM 0xE210C003 */
    /* 0x08047A54: ARM 0x0AFFFC9A */
    /* 0x08047A58: ARM 0xE26CC004 */
    /* 0x08047A5C: ARM 0xE35C0002 */
    /* 0x08047A60: ARM 0xE4C02001 */
    /* 0x08047A64: ARM 0xA4C02001 */
    /* 0x08047A68: ARM 0xC4C02001 */
    /* 0x08047A6C: ARM 0xE041100C */
    /* 0x08047A70: ARM 0xEAFFFC93 */
    /* 0x08047A74: ARM 0xE1B0CF81 */
    /* 0x08047A78: ARM 0x24C02001 */
    /* 0x08047A7C: ARM 0x24C02001 */
    /* 0x08047A80: ARM 0x44C02001 */
    return r0; // 0x08047A84: BX lr
    /* 0x08047A88: ARM 0xE92D4D80 */
    /* 0x08047A8C: ARM 0xE92D007C */
    /* 0x08047A90: ARM 0xE3C16480 */
    /* 0x08047A94: ARM 0xE296C4C0 */
    /* 0x08047A98: ARM 0xA25CC641 */
    /* 0x08047A9C: ARM 0xE1A05000 */
    /* 0x08047AA0: ARM 0xE1A04001 */
    /* 0x08047AA4: ARM 0xE1A0B001 */
    /* 0x08047AA8: ARM 0xBA000012 */
    /* 0x08047AAC: ARM 0xE296C490 */
    /* 0x08047AB0: ARM 0xA25CC6FF */
    /* 0x08047AB4: ARM 0xCA000002 */
    /* 0x08047AB8: ARM 0x1A000009 */
    /* 0x08047ABC: ARM 0xE3550000 */
    /* 0x08047AC0: ARM 0x0A000007 */
    /* 0x08047AC4: ARM 0xE1A03004 */
    /* 0x08047AC8: ARM 0xE1A02005 */
    /* 0x08047ACC: ARM 0xE1A01004 */
    /* 0x08047AD0: ARM 0xE1A00005 */
    /* 0x08047AD4: ARM 0xEB002E73 */
    /* 0x08047AD8: ARM 0xE8BD007C */
    /* 0x08047ADC: ARM 0xE8BD4D80 */
    return r0; // 0x08047AE0: BX lr
    /* 0x08047AE4: ARM 0xE28F1F9A */
    /* 0x08047AE8: ARM 0xE35B0000 */
    /* 0x08047AEC: ARM 0xD28F1F9A */
    /* 0x08047AF0: ARM 0xE8910003 */
    /* 0x08047AF4: ARM 0xEAFFFFF7 */
    /* 0x08047AF8: ARM 0xE296C4C4 */
    /* 0x08047AFC: ARM 0xA25CC7F7 */
    /* 0x08047B00: ARM 0xE28F7F97 */
    /* 0x08047B04: ARM 0xAA00000E */
    /* 0x08047B08: ARM 0xE296C4D0 */
    /* 0x08047B0C: ARM 0xA25CC6E2 */
    /* 0x08047B10: ARM 0xAA000009 */
    /* 0x08047B14: ARM 0xE28F0F94 */
    /* 0x08047B18: ARM 0xE890000C */
    /* 0x08047B1C: ARM 0xE1A00005 */
    /* 0x08047B20: ARM 0xE1A01004 */
    /* 0x08047B24: ARM 0xEB002E5F */
    /* 0x08047B28: ARM 0xE897000C */
    /* 0x08047B2C: ARM 0xEB003149 */
    /* 0x08047B30: ARM 0x81A00005 */
    /* 0x08047B34: ARM 0x81A01004 */
    /* 0x08047B38: ARM 0x8AFFFFE6 */
    /* 0x08047B3C: ARM 0xE3E06000 */
    /* 0x08047B40: ARM 0xEA000040 */
    /* 0x08047B44: ARM 0xE3C41480 */
    /* 0x08047B48: ARM 0xE1A04005 */
    /* 0x08047B4C: ARM 0xE296C4C1 */
    /* 0x08047B50: ARM 0xA25CC8F3 */
    /* 0x08047B54: ARM 0xE1A05001 */
    /* 0x08047B58: ARM 0xAA00001E */
    /* 0x08047B5C: ARM 0xE296C4C1 */
    /* 0x08047B60: ARM 0xA25CC8E6 */
    /* 0x08047B64: ARM 0xAA000010 */
    /* 0x08047B68: ARM 0xE28F8F81 */
    /* 0x08047B6C: ARM 0xE898000C */
    /* 0x08047B70: ARM 0xE3A06000 */
    /* 0x08047B74: ARM 0xE1A01005 */
    /* 0x08047B78: ARM 0xE1A00004 */
    /* 0x08047B7C: ARM 0xEB003177 */
    /* 0x08047B80: ARM 0xE897000C */
    /* 0x08047B84: ARM 0xEB002ED5 */
    /* 0x08047B88: ARM 0xE1A07000 */
    /* 0x08047B8C: ARM 0xE1A0A001 */
    /* 0x08047B90: ARM 0xE1A01005 */
    /* 0x08047B94: ARM 0xE1A00004 */
    /* 0x08047B98: ARM 0xE898000C */
    /* 0x08047B9C: ARM 0xEB002E41 */
    /* 0x08047BA0: ARM 0xE1A0300A */
    /* 0x08047BA4: ARM 0xE1A02007 */
    /* 0x08047BA8: ARM 0xEA000023 */
    /* 0x08047BAC: ARM 0xE3A06001 */
    /* 0x08047BB0: ARM 0xE1A01005 */
    /* 0x08047BB4: ARM 0xE1A00004 */
    /* 0x08047BB8: ARM 0xE897000C */
    /* 0x08047BBC: ARM 0xEB002EC7 */
    /* 0x08047BC0: ARM 0xE1A08000 */
    /* 0x08047BC4: ARM 0xE1A0A001 */
    /* 0x08047BC8: ARM 0xE1A01005 */
    /* 0x08047BCC: ARM 0xE1A00004 */
    /* 0x08047BD0: ARM 0xE897000C */
    /* 0x08047BD4: ARM 0xEA000015 */
    /* 0x08047BD8: ARM 0xE296C4C0 */
    /* 0x08047BDC: ARM 0xA25CCBE0 */
    /* 0x08047BE0: ARM 0xA28F0F65 */
    /* 0x08047BE4: ARM 0xA890000C */
    /* 0x08047BE8: ARM 0xA1A00004 */
    /* 0x08047BEC: ARM 0xA3A06003 */
    /* 0x08047BF0: ARM 0xA1A01005 */
    /* 0x08047BF4: ARM 0xAA000010 */
    /* 0x08047BF8: ARM 0xE28F0F61 */
    /* 0x08047BFC: ARM 0xE890000C */
    /* 0x08047C00: ARM 0xE1A00004 */
    /* 0x08047C04: ARM 0xE3A06002 */
    /* 0x08047C08: ARM 0xE1A01005 */
    /* 0x08047C0C: ARM 0xEB002EB3 */
    /* 0x08047C10: ARM 0xE1A08000 */
    /* 0x08047C14: ARM 0xE28F0F5A */
    /* 0x08047C18: ARM 0xE890000C */
    /* 0x08047C1C: ARM 0xE1A0A001 */
    /* 0x08047C20: ARM 0xE1A01005 */
    /* 0x08047C24: ARM 0xE1A00004 */
    /* 0x08047C28: ARM 0xEB00314C */
    /* 0x08047C2C: ARM 0xE897000C */
    /* 0x08047C30: ARM 0xEB002E1C */
    /* 0x08047C34: ARM 0xE1A0300A */
    /* 0x08047C38: ARM 0xE1A02008 */
    /* 0x08047C3C: ARM 0xEB002F77 */
    /* 0x08047C40: ARM 0xE1A05000 */
    /* 0x08047C44: ARM 0xE1A04001 */
    /* 0x08047C48: ARM 0xE1A03004 */
    /* 0x08047C4C: ARM 0xE1A02005 */
    /* 0x08047C50: ARM 0xE1A01004 */
    /* 0x08047C54: ARM 0xE1A00005 */
    /* 0x08047C58: ARM 0xEB003140 */
    /* 0x08047C5C: ARM 0xE1A0A000 */
    /* 0x08047C60: ARM 0xE58D1000 */
    /* 0x08047C64: ARM 0xE1A03001 */
    /* 0x08047C68: ARM 0xE1A02000 */
    /* 0x08047C6C: ARM 0xEB00313B */
    /* 0x08047C70: ARM 0xE1A07000 */
    /* 0x08047C74: ARM 0xE1A02000 */
    /* 0x08047C78: ARM 0xE59F010C */
    /* 0x08047C7C: ARM 0xE1A08001 */
    /* 0x08047C80: ARM 0xE1A03001 */
    /* 0x08047C84: ARM 0xE3A01006 */
    /* 0x08047C88: ARM 0xE08F0000 */
    /* 0x08047C8C: ARM 0xEB000042 */
    /* 0x08047C90: ARM 0xE1A0200A */
    /* 0x08047C94: ARM 0xE59D3000 */
    /* 0x08047C98: ARM 0xEB003130 */
    /* 0x08047C9C: ARM 0xE1A0A000 */
    /* 0x08047CA0: ARM 0xE59F00E8 */
    /* 0x08047CA4: ARM 0xE58D1004 */
    /* 0x08047CA8: ARM 0xE3A01005 */
    /* 0x08047CAC: ARM 0xE1A03008 */
    /* 0x08047CB0: ARM 0xE1A02007 */
    /* 0x08047CB4: ARM 0xE08F0000 */
    /* 0x08047CB8: ARM 0xEB000037 */
    /* 0x08047CBC: ARM 0xE1A03008 */
    /* 0x08047CC0: ARM 0xE1A02007 */
    /* 0x08047CC4: ARM 0xEB003125 */
    /* 0x08047CC8: ARM 0xE1A03001 */
    /* 0x08047CCC: ARM 0xE1A02000 */
    /* 0x08047CD0: ARM 0xE1A0000A */
    /* 0x08047CD4: ARM 0xE59D1004 */
    /* 0x08047CD8: ARM 0xE3560000 */
    /* 0x08047CDC: ARM 0xAA000007 */
    /* 0x08047CE0: ARM 0xEB002DF0 */
    /* 0x08047CE4: ARM 0xE1A03004 */
    /* 0x08047CE8: ARM 0xE1A02005 */
    /* 0x08047CEC: ARM 0xEB00311B */
    /* 0x08047CF0: ARM 0xE1A03004 */
    /* 0x08047CF4: ARM 0xE1A02005 */
    /* 0x08047CF8: ARM 0xEB002E66 */
    /* 0x08047CFC: ARM 0xEAFFFF75 */
    /* 0x08047D00: ARM 0xEB002DE8 */
    /* 0x08047D04: ARM 0xE1A03004 */
    /* 0x08047D08: ARM 0xE1A02005 */
    /* 0x08047D0C: ARM 0xEB003113 */
    /* 0x08047D10: ARM 0xE59F207C */
    /* 0x08047D14: ARM 0xE08F2002 */
    /* 0x08047D18: ARM 0xE0822186 */
    /* 0x08047D1C: ARM 0xE892000C */
    /* 0x08047D20: ARM 0xEB002E6E */
    /* 0x08047D24: ARM 0xE1A03004 */
    /* 0x08047D28: ARM 0xE1A02005 */
    /* 0x08047D2C: ARM 0xEB002E6B */
    /* 0x08047D30: ARM 0xE59F2060 */
    /* 0x08047D34: ARM 0xE08F2002 */
    /* 0x08047D38: ARM 0xE0822186 */
    /* 0x08047D3C: ARM 0xE892000C */
    /* 0x08047D40: ARM 0xEB002E54 */
    /* 0x08047D44: ARM 0xE35B0000 */
    /* 0x08047D48: ARM 0xB2211480 */
    /* 0x08047D4C: ARM 0xBAFFFF61 */
    /* 0x08047D50: ARM 0xEAFFFF60 */
    /* 0x08047D54: ARM 0x54442D18 */
    /* 0x08047D58: ARM 0x3FF921FB */
    /* 0x08047D5C: ARM 0x54442D18 */
    /* 0x08047D60: ARM 0xBFF921FB */
    /* 0x08047D64: ARM 0x00000000 */
    /* 0x08047D68: ARM 0x3FF00000 */
    /* 0x08047D6C: ARM 0x8800759C */
    /* 0x08047D70: ARM 0x7E37E43C */
    /* 0x08047D74: ARM 0x00000000 */
    /* 0x08047D78: ARM 0x40000000 */
    /* 0x08047D7C: ARM 0x00000000 */
    /* 0x08047D80: ARM 0xBFF00000 */
    /* 0x08047D84: ARM 0x00000000 */
    /* 0x08047D88: ARM 0x3FF80000 */
    /* 0x08047D8C: ARM 0x0076FB70 */
    /* 0x08047D90: ARM 0x0076FB1C */
    /* 0x08047D94: ARM 0x0076FA9C */
    /* 0x08047D98: ARM 0x0076FA5C */
    /* 0x08047D9C: ARM 0xE92D40F0 */
    /* 0x08047DA0: ARM 0xE2414001 */
    /* 0x08047DA4: ARM 0xE0801184 */
    /* 0x08047DA8: ARM 0xE52D3004 */
    /* 0x08047DAC: ARM 0xE1A05000 */
    /* 0x08047DB0: ARM 0xE8910003 */
    /* 0x08047DB4: ARM 0xE3540008 */
    /* 0x08047DB8: ARM 0xE1A07003 */
    /* 0x08047DBC: ARM 0xE1A06002 */
    /* 0x08047DC0: ARM 0x908FF104 */
    /* 0x08047DC4: ARM 0xEA00000F */
    /* 0x08047DC8: ARM 0xEA00000E */
    /* 0x08047DCC: ARM 0xEA000040 */
    /* 0x08047DD0: ARM 0xEA000038 */
    /* 0x08047DD4: ARM 0xEA000030 */
    /* 0x08047DD8: ARM 0xEA000028 */
    /* 0x08047DDC: ARM 0xEA000020 */
    /* 0x08047DE0: ARM 0xEA000018 */
    /* 0x08047DE4: ARM 0xEA000010 */
    /* 0x08047DE8: ARM 0xEA000008 */
    /* 0x08047DEC: ARM 0xE1A03007 */
    /* 0x08047DF0: ARM 0xE1A02006 */
    /* 0x08047DF4: ARM 0xEB0030D9 */
    /* 0x08047DF8: ARM 0xE2444001 */
    /* 0x08047DFC: ARM 0xE0852184 */
    /* 0x08047E00: ARM 0xE892000C */
    /* 0x08047E04: ARM 0xEB002DA7 */
    /* 0x08047E08: ARM 0xE3540008 */
    /* 0x08047E0C: ARM 0xCAFFFFF6 */
    /* 0x08047E10: ARM 0xE1A03007 */
    /* 0x08047E14: ARM 0xE1A02006 */
    /* 0x08047E18: ARM 0xEB0030D0 */
    /* 0x08047E1C: ARM 0xE2444001 */
    /* 0x08047E20: ARM 0xE0852184 */
    /* 0x08047E24: ARM 0xE892000C */
    /* 0x08047E28: ARM 0xEB002D9E */
    /* 0x08047E2C: ARM 0xE1A03007 */
    /* 0x08047E30: ARM 0xE1A02006 */
    /* 0x08047E34: ARM 0xEB0030C9 */
    /* 0x08047E38: ARM 0xE2444001 */
    /* 0x08047E3C: ARM 0xE0852184 */
    /* 0x08047E40: ARM 0xE892000C */
    /* 0x08047E44: ARM 0xEB002D97 */
    /* 0x08047E48: ARM 0xE1A03007 */
    /* 0x08047E4C: ARM 0xE1A02006 */
    /* 0x08047E50: ARM 0xEB0030C2 */
    /* 0x08047E54: ARM 0xE2444001 */
    /* 0x08047E58: ARM 0xE0852184 */
    /* 0x08047E5C: ARM 0xE892000C */
    /* 0x08047E60: ARM 0xEB002D90 */
    /* 0x08047E64: ARM 0xE1A03007 */
    /* 0x08047E68: ARM 0xE1A02006 */
    /* 0x08047E6C: ARM 0xEB0030BB */
    /* 0x08047E70: ARM 0xE2444001 */
    /* 0x08047E74: ARM 0xE0852184 */
    /* 0x08047E78: ARM 0xE892000C */
    /* 0x08047E7C: ARM 0xEB002D89 */
    /* 0x08047E80: ARM 0xE1A03007 */
    /* 0x08047E84: ARM 0xE1A02006 */
    /* 0x08047E88: ARM 0xEB0030B4 */
    /* 0x08047E8C: ARM 0xE2444001 */
    /* 0x08047E90: ARM 0xE0852184 */
    /* 0x08047E94: ARM 0xE892000C */
    /* 0x08047E98: ARM 0xEB002D82 */
    /* 0x08047E9C: ARM 0xE1A03007 */
    /* 0x08047EA0: ARM 0xE1A02006 */
    /* 0x08047EA4: ARM 0xEB0030AD */
    /* 0x08047EA8: ARM 0xE2444001 */
    /* 0x08047EAC: ARM 0xE0852184 */
    /* 0x08047EB0: ARM 0xE892000C */
    /* 0x08047EB4: ARM 0xEB002D7B */
    /* 0x08047EB8: ARM 0xE1A03007 */
    /* 0x08047EBC: ARM 0xE1A02006 */
    /* 0x08047EC0: ARM 0xEB0030A6 */
    /* 0x08047EC4: ARM 0xE2444001 */
    /* 0x08047EC8: ARM 0xE0852184 */
    /* 0x08047ECC: ARM 0xE892000C */
    /* 0x08047ED0: ARM 0xEB002D74 */
    /* 0x08047ED4: ARM 0xE1A03007 */
    /* 0x08047ED8: ARM 0xE1A02006 */
    /* 0x08047EDC: ARM 0xEB00309F */
    /* 0x08047EE0: ARM 0xE2442001 */
    /* 0x08047EE4: ARM 0xE0852182 */
    /* 0x08047EE8: ARM 0xE892000C */
    /* 0x08047EEC: ARM 0xE28DD004 */
    /* 0x08047EF0: ARM 0xE8BD40F0 */
    /* 0x08047EF4: ARM 0xEA002D6B */
    /* 0x08047EF8: ARM 0xE92D4038 */
    /* 0x08047EFC: ARM 0xE2603000 */
    /* 0x08047F00: ARM 0xE1803003 */
    /* 0x08047F04: ARM 0xE3C12480 */
    /* 0x08047F08: ARM 0xE1822FA3 */
    /* 0x08047F0C: ARM 0xE26226FF */
    /* 0x08047F10: ARM 0xE2822470 */
    /* 0x08047F14: ARM 0xE1B02FA2 */
    /* 0x08047F18: ARM 0xE1A05001 */
    /* 0x08047F1C: ARM 0xE1A04000 */
    /* 0x08047F20: ARM 0x1A000009 */
    /* 0x08047F24: ARM 0xE28F2030 */
    /* 0x08047F28: ARM 0xE892000C */
    /* 0x08047F2C: ARM 0xEB00306A */
    /* 0x08047F30: ARM 0x2A000005 */
    /* 0x08047F34: ARM 0xE3A00001 */
    /* 0x08047F38: ARM 0xEB0004A3 */
    /* 0x08047F3C: ARM 0xE28F1020 */
    /* 0x08047F40: ARM 0xE8910003 */
    /* 0x08047F44: ARM 0xE8BD4038 */
    return r0; // 0x08047F48: BX lr
    /* 0x08047F4C: ARM 0xE1A01005 */
    /* 0x08047F50: ARM 0xE1A00004 */
    /* 0x08047F54: ARM 0xEB003131 */
    /* 0x08047F58: ARM 0xEAFFFFF9 */
    return r0;
}

// ROM Address: 0x08047F5C..0x08047F94 (56 bytes, Thumb)
u32 sub_08047F5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r1 = r0;
    r0 = r0;
    r0 = r0;
    r0 = *(u8*)(r7 + 0x1F);
    r4 = stack[10]; // [sp + 0x28]
    r5 = 0x4; // sp + 0x4
    r1 = r5;
    r0 = 0x0U;
    r3 = 0x14; // sp + 0x14
    r2 = 0xC; // sp + 0xC
    stack[0] = r4; // [sp + 0x0]
    r0 = sub_08047F84(r0, r1, r2, r3); // 0x08047F80
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08047F94(r0, r1, r2, r3);
    r1 = 0x4; // sp + 0x4
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08047F94..0x08047FAE (26 bytes, Thumb)
u32 sub_08047F94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x7C000000U; // (31 << 26)
    r4 &= r0;
    r1 = r4;
    r0 = 0x2U;
    r0 = sub_08047FD4(r0, r1, r2, r3); // 0x08047F9E: BL 0x08047FD4
    r0 = 0x0U;
    r1 = 0x0U;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    r1 = 0x4; // sp + 0x4
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    return sub_08047F8C(r0, r1, r2, r3);
}

// Evidence: armlib/c_t__sn.l, member libspace.o, symbol __16__user_libspace, 16 B matched, 4 B masked, 12 B compared
// ROM Address: 0x08047FB0..0x08047FB4 (4 bytes, Thumb)
u32 __16__user_libspace(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08047FB4..0x08047FBC (8 bytes, ARM32)
u32 sub_08047FB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08047FB4: ARM 0xE59F0000 */
    return r0; // 0x08047FB8: BX lr
    return r0;
}
