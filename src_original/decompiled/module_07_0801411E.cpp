/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #07
 * Address Range: 0x0801411E..0x080178BC (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0801411E..0x08014180 (98 bytes, Thumb)
u32 sub_0801411E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = 0x0U;
    return r0; // BX lr
    r7 = 0x28; // sp + 0x28
    r4 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r6 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801413A;
    r0 = 0x20U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08014132: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08014152;
loc_0801413A:
    r1 = stack[2]; // [sp + 0x8]
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804A254U /* &VTable_0804A254 */; // [0x08014180]
    *(u32*)(r0) = (u32)r1;
    r1 = stack[3]; // [sp + 0xC]
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x14) = (u32)r4;
    *(u8*)(r0 + 0x18) = (u8)r6;
    *(u32*)(r0 + 0x10) = (u32)r5;
    *(u32*)(r0 + 0x1C) = (u32)r7;
loc_08014152:
    return r0;
    r2 = r0;
    r0 = r1;
    r1 = *(u32*)(r2 + 0x10);
    *(u8*)(r0 + 0x3) = (u8)r1;
    r1 = 0x1U;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r1 = 0x0803F5A5U; // [0x08014184]
    *(u32*)(r0 + 0x20) = (u32)r1;
    r3 = *(u32*)(r2 + 0x8);
    r4 = *(u32*)(r2 + 0xC);
    *(u32*)(r0 + 0x4) = (u32)r3;
    *(u32*)(r0 + 0x8) = (u32)r4;
    r1 = *(u8*)(r2 + 0x18);
    *(u8*)(r0) = (u8)r1;
    r1 = *(u32*)(r2 + 0x1C);
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = *(u32*)(r2 + 0x14);
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801417A
    return r0;
}

// ROM Address: 0x08014188..0x080141A0 (24 bytes, Thumb)
u32 sub_08014188(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080141A0(r0, r1, r2, r3);
    r0 = 0x00000574U; // [0x0801440C]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08014192: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080141A0(r0, r1, r2, r3);
    r0 = r5;
    return r0;
}

// ROM Address: 0x080141A0..0x0801425C (188 bytes, Thumb)
u32 sub_080141A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x08014410]
    r1 = r5;
    *(u32*)(r5) = (u32)r0;
    r0 = 0x0U;
    r1 += 0x100U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    *(u32*)(r1 + 0xC) = (u32)r0;
    *(u32*)(r1 + 0x8) = (u32)r0;
    r2 = 0x080498C4U /* &VTable_080498C4 */; // [0x08014414]
    *(u32*)(r1 + 0x10) = (u32)r0;
    *(u32*)(r5) = (u32)r2;
    r2 = r1;
    r2 += 0x2CU;
    stack[28] = r2; // [sp + 0x70]
    *(u32*)(r2) = (u32)r0;
    r2 += 0xA4U;
    stack[27] = r2; // [sp + 0x6C]
    *(u32*)(r2) = (u32)r0;
    *(u32*)(r1 + 0x1C) = (u32)r0;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r4 = 0x0U;
    r6 = 0x086B8028U; // [0x08014418]
    r7 = 0x274U; // (157 << 2)
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
loc_080141D6:
    r0 = (r4 << 8);
    r0 = r0 + r5;
    r1 = r0 + r7;
    r0 = (r4 << 2);
    r0 = *(u32*)(r6 + r0);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080141E0
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_080141D6;
    r6 = 0x0U;
    r7 = sp;
loc_080141EE:
    r1 = 0x08720564U; // [0x0801441C]
    r0 = (r6 << 4);
    r4 = r0 + r1;
    r2 = 0x0U;
    r0 = r7;
    r1 = *(u32*)(r4 + 0x4);
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080141FA
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08014252;
    r2 = 0x0U;
    r0 = r7;
    r1 = *(u32*)(r4 + 0x8);
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0801420A
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801422C;
    r2 = stack[27]; // [sp + 0x6C]
    r0 = *(u32*)(r2);
    r1 = r0 + 1;
    *(u32*)(r2) = (u32)r1;
    r1 = *(u8*)(r4);
    r0 = (r0 << 2);
    r0 = r0 + r2;
    r0 += 0x4U;
    *(u8*)(r0) = (u8)r1;
    r1 = *(u16*)(r4 + 0x2);
    *(u16*)(r0 + 0x2) = (u16)r1;
    goto loc_08014252;
loc_0801422C:
    r2 = 0x0U;
    r0 = r7;
    r1 = *(u32*)(r4 + 0xC);
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08014232
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08014252;
    r2 = stack[28]; // [sp + 0x70]
    r0 = *(u32*)(r2);
    r1 = r0 + 1;
    *(u32*)(r2) = (u32)r1;
    r1 = *(u8*)(r4);
    r0 = (r0 << 2);
    r0 = r0 + r2;
    r0 += 0x4U;
    *(u8*)(r0) = (u8)r1;
    r1 = *(u16*)(r4 + 0x2);
    *(u16*)(r0 + 0x2) = (u16)r1;
loc_08014252:
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 40;
    if (cmp_lhs < cmp_rhs) goto loc_080141EE;
    r0 = r5;
    return sub_0801419C(r0, r1, r2, r3);
}

// ROM Address: 0x080143F2..0x0801455E (364 bytes, Thumb)
u32 sub_080143F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x080143FA
    r1 = r0;
    *(u32*)(r5 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014404
    return r0;
    r4 = (r6 << 21);
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r0 = stack[196]; // [sp + 0x310]
    r4 = (r0 >> 32);
    *(u16*)(r5) = (u16)r0;
    r3 = (r5 >> 1);
    r4 = (r4 << 21);
    r2 = (r6 >> 1);
    r6 = (r0 >> 32);
    r4 = r1;
    r1 = stack[14]; // [sp + 0x38]
    r6 = 0x0U;
    r0 = *(u32*)(r1);
    r7 = stack[12]; // [sp + 0x30]
    r5 = 0x1U;
    r7 += 0x100U;
    r1 = *(u32*)(r7 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801444C;
    *(u32*)(r1 + 0x10) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    r0 = *(u32*)(r7 + 0x24);
    *(u32*)(r0 + 0x10) = (u32)r6;
    *(u32*)(r0 + 0x8) = (u32)r6;
loc_08014448:
    return r0;
loc_0801444C:
    *(u32*)(r1 + 0x10) = (u32)r5;
    r1 = *(u32*)(r7 + 0x20);
    r2 = *(u32*)(r7 + 0x28);
    r0 = r5;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801445A;
    r0 = 0x0U;
loc_0801445A:
    *(u32*)(r1 + 0x8) = (u32)r0;
    r0 = *(u32*)(r7 + 0x24);
    *(u32*)(r0 + 0x10) = (u32)r5;
    r0 = *(u32*)(r7 + 0x24);
    r1 = stack[14]; // [sp + 0x38]
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r7 + 0x28);
    r2 += 0x3U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08014472;
    r1 = 0x1U;
    goto loc_08014474;
loc_08014472:
    r1 = 0x0U;
loc_08014474:
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = 0xDBU;
    r3 = 0x70U;
    r2 = 0x37U;
    r0 = r4;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x0801447E
    r0 = 0x2U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x08014744]
    *(u8*)(r4 + 0x2) = (u8)r5;
    *(u32*)(r4 + 0x20) = (u32)r0;
    *(u8*)(r4) = (u8)r6;
    r0 = 0x086B801CU; // [0x08014748]
    r1 = 0xEU;
    *(u8*)(r4 + 0x1) = (u8)r1;
    r0 = *(u32*)(r0 + 0x8);
    r6 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
loc_0801449A:
    r0 = *(u32*)(r7 + 0x28);
    r1 = stack[14]; // [sp + 0x38]
    r0 = r0 + r6;
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08014448;
    r1 = stack[14]; // [sp + 0x38]
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 += 0x4U;
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u16*)(r0 + 0x2);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801474C]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r5 = 0x0U;
    stack[9] = r0; // [sp + 0x24]
    stack[6] = r0; // [sp + 0x18]
loc_080144BE:
    r2 = 0xB0U;
    r0 = r4;
    r3 = 0x14; // sp + 0x14
    r1 = stack[6]; // [sp + 0x18]
    r0 = sub_0803DE6A(r0, r1, r2, r3); // 0x080144C6
    r0 = stack[8]; // [sp + 0x20]
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080144BE;
    r0 = (r6 << 3);
    r0 = r0 - r6;
    r0 = (r0 << 2);
    stack[10] = r0; // [sp + 0x28]
    r1 = (r5 << 3);
    r1 = r1 - r5;
    r0 += 0x43U;
    r0 = r0 - r1;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r1 = 0x20U;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = 0xB0U;
    r0 = r4;
    r2 = stack[9]; // [sp + 0x24]
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x080144EE
    r0 = stack[10]; // [sp + 0x28]
    r1 = 0xEU;
    r0 += 0x31U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = stack[2]; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r0 += 0x10U;
    stack[4] = r0; // [sp + 0x10]
    r0 = stack[11]; // [sp + 0x2C]
    r2 = 0x4; // sp + 0x4
    r0 = *(u8*)(r0);
    r1 = stack[12]; // [sp + 0x30]
    r0 = (r0 << 8);
    r0 = r0 + r1;
    r1 = 0x274U; // (157 << 2)
    r1 = r0 + r1;
    r0 = r4;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x0801451A
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_0801449A;
    goto loc_08014448;
    r4 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = sp;
    r5 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08014534
    r3 = 0x0U;
    r2 = 0x1EU;
    r1 = r5;
    r0 = r4;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x08014540
    r0 = 0xFFU;
    r0 += 0x1DU;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801455E(r0, r1, r2, r3);
    r2 = r4;
    r2 += 0x12CU;
    r1 = r5;
    r0 = r4;
    r0 = sub_08014424(r0, r1, r2, r3); // 0x08014558
    return sub_0801456C(r0, r1, r2, r3);
}

// ROM Address: 0x0801455E..0x08014588 (42 bytes, Thumb)
u32 sub_0801455E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r4;
    r2 += 0x1D0U;
    r1 = r5;
    r0 = r4;
    r0 = sub_08014424(r0, r1, r2, r3); // 0x08014568
    r1 = r5;
    r0 = r4;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x08014570
    r1 = 0x06000040U; // [0x08014750]
    r0 = r5;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08014578: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08014580: BL 0x0803F58C
    return r0;
}

// ROM Address: 0x08014588..0x080146B6 (302 bytes, Thumb)
u32 sub_08014588(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08014666;
    r3 = 0x08014598U;
    r3 = *(u8*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r7 = (r4 << 17);
    r0 = *(u8*)(r5 + 0xD);
    *(u32*)(r4 + 0x74) = (u32)r7;
    r2 = (u32)((s32)r2 >> (r2 & 0xFF));
    r0 = 0x086B801CU; // [0x08014748]
    r4 = 0x000005C4U; // [0x08014758]
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x08319488U; // [0x08014754]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080145AE
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x080145B4
    r0 = 0x1U;
    return r0;
    r0 = 0x086B801CU; // [0x08014748]
    r4 = 0x0U;
    r5 = 0x000005C4U; // [0x08014758]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r4;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x08014754]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080145CC
    r0 = 0xFFU;
    r0 += 0x21U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080145D4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08014612;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801475C]
    r2 = 0xFFU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    r3 = 0x0804BF28U /* &VTable_0804BF28 */; // [0x08014760]
    *(u32*)(r1 + 0x10) = (u32)r4;
    r2 += 0x15U;
    *(u32*)(r2 + r0) = r3;
    r2 = 0x080498F0U /* &VTable_080498F0 */; // [0x08014764]
    r3 = 0x03001914U; // [0x08014768]
    *(u32*)(r0) = (u32)r2;
    r2 += 0x38U;
    *(u32*)(r1 + 0x14) = (u32)r2;
    r2 = *(u8*)(r3);
    r1 += 0x18U;
    *(u8*)(r1) = (u8)r2;
    r2 = *(u8*)(r3 + 0x1);
    *(u8*)(r1 + 0x1) = (u8)r2;
    r2 = *(u8*)(r3 + 0x2);
    *(u8*)(r1 + 0x2) = (u8)r2;
    r2 = *(u8*)(r3 + 0x3);
    *(u8*)(r1 + 0x3) = (u8)r2;
loc_08014612:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08014612
    r0 = 0x1U;
    return r0;
    r0 = 0x086B801CU; // [0x08014748]
    r4 = 0x0U;
    r5 = 0x000005C4U; // [0x08014758]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r4;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x08014754]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801462A
    r0 = 0xFFU;
    r0 += 0x59U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08014632: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801465E;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801475C]
    r2 = 0x08049758U /* &VTable_08049758 */; // [0x0801476C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    *(u32*)(r1 + 0x10) = (u32)r4;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r4;
    *(u32*)(r1 + 0x18) = (u32)r4;
    *(u32*)(r1 + 0x20) = (u32)r4;
    *(u32*)(r1 + 0x24) = (u32)r4;
    r1 = 0xFFU;
    r1 += 0x55U;
    *(u32*)(r1 + r0) = r4;
loc_0801465E:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801465E
    r0 = 0x1U;
    return r0;
loc_08014666:
    goto loc_080146B2;
    r4 = r0;
    r4 += 0x100U;
    r0 = *(u32*)(r4 + 0x28);
    r1 = 0x08319488U; // [0x08014754]
    r0 -= 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = 0x086B801CU; // [0x08014748]
    r5 = 0x0U;
    r6 = 0x000005C4U; // [0x08014758]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r5;
    r2 = 0x40U;
    r1 -= 0xCU;
    r0 = r0 + r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08014686
    *(u32*)(r4 + 0x10) = (u32)r5;
    goto loc_080146B2;
    r4 = r0;
    r4 += 0x100U;
    r0 = *(u32*)(r4 + 0x28);
    r1 = 0x08319488U; // [0x08014754]
    r0 += 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = 0x086B801CU; // [0x08014748]
    r5 = 0x0U;
    r6 = 0x000005C4U; // [0x08014758]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r5;
    r2 = 0x40U;
    r1 -= 0xCU;
    r0 = r0 + r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080146AC
    *(u32*)(r4 + 0x10) = (u32)r5;
loc_080146B2:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08014770..0x08014AFE (910 bytes, Thumb)
u32 sub_08014770(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r2 += 0x100U;
    r1 = *(u32*)(r2 + 0x1C);
    r2 = *(u32*)(r2 + 0xC);
    r6 = 0x1U;
    r4 = r0;
    r0 = r6;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs > cmp_rhs) goto loc_0801478A;
    r0 = 0x0U;
loc_0801478A:
    *(u32*)(r1 + 0x8) = (u32)r0;
    r1 = 0xF0U;
    r2 = 0xA0U;
    r5 = 0x4; // sp + 0x4
    r0 = r5;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08014794
    r3 = r6;
    r2 = 0x2U;
    r1 = r5;
    r0 = r4;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x080147A0
    r1 = 0x06000040U; // [0x08014A90]
    r0 = r5;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x080147A8: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080147B0: BL 0x0803F58C
    return r0;
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08014A94]
    r5 = *(u32*)(r0 + 0x5C);
    r7 = *(u32*)(r0 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x0U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080147DA: BL 0x08013E64
    r1 = 0xFFU;
    r1 += 0x1DU;
    *(u32*)(r1 + r4) = r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080147E8
    r6 = 0x086B8034U; // [0x08014A98]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x8);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014804
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801480C
    r1 = r5;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08014814
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08014832: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801483A
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = r5;
    r2 += 0x10U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014856
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801485E
    r0 = 0x6DU;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0xDDU;
    stack[3] = r2; // [sp + 0xC]
    r0 = r4;
    r0 += 0xFFU;
    r2 = 0x0U;
    r1 = 0x21U;
    r6 = 0x0U;
    r3 = r6;
    r0 += 0x15U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    if (cmp_lhs == cmp_rhs) goto loc_08014882;
    r3 = r0;
loc_08014882:
    r5 = r3;
    r1 = r4;
    r2 = 0x0U;
    r0 = 0x0U;
    r0 = Object_Construct2(r0, r1, r2, r3); // 0x0801488A: BL 0x08006880
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014892
    r2 = 0xDDU;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x33U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x1U;
    r0 = 0x6DU;
    r3 = r5;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r0 = Object_Construct2(r0, r1, r2, r3); // 0x080148AC: BL 0x08006880
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080148B4
    r2 = 0xDDU;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x45U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x2U;
    r0 = 0x6DU;
    r3 = r5;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r0 = Object_Construct2(r0, r1, r2, r3); // 0x080148CE: BL 0x08006880
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080148D6
    r2 = 0x0U;
    r1 = ~r2;
    r0 = 0x28U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x0U;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x10U;
    r0 = ~r0;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x10U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x1U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x0U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x3U;
    r0 = 0x0U;
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x08014904
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801490C
    r2 = 0x0U;
    r1 = ~r2;
    r0 = 0x3AU;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x0U;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x10U;
    r0 = ~r0;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x11U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x2U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r3 = r6;
    r1 = r4;
    r2 = 0x1U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x0801493A
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014942
    r2 = 0x0U;
    r1 = ~r2;
    r0 = 0x4CU;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x0U;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x10U;
    r0 = ~r0;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x12U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x3U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x2U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x1U;
    r0 = 0x0U;
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x08014970
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014978
    r2 = 0x1U;
    r1 = (u32)(-(s32)r2);
    stack[6] = r1; // [sp + 0x18]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x46U;
    r1 = 0x14U;
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r0 = 0x70U;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x4U;
    r1 = 0x0U;
    r5 = 0x2U;
    r3 = r5;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r0 = 0x4U;
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x3U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x080149A6
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080149AE
    r2 = 0x1U;
    r1 = (u32)(-(s32)r2);
    stack[6] = r1; // [sp + 0x18]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0xAAU;
    r1 = 0x13U;
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r0 = 0x70U;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x3U;
    r1 = 0x0U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r0 = 0x3U;
    r3 = r5;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x4U;
    r0 = 0x0U;
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x080149DA
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080149E2
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x6U;
    r1 = r4;
    r3 = 0x8U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080149FE: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014A06
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x7U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x7U;
    r1 = r4;
    r3 = 0xD0U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08014A22: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014A2A
    r5 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08014A94]
    r0 = 0x90U;
    r3 = *(u32*)(r5 + r0);
    r6 = 0x086B8034U; // [0x08014A98]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x8);
    stack[0] = r3; // [sp + 0x0]
    r7 = 0x14U;
    r3 = r7;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x2U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x22U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014A4E
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014A56
    r3 = *(u32*)(r5 + 0x78);
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x2U;
    stack[0] = r3; // [sp + 0x0]
    r3 = r7;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xCEU;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014A70
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014A78
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x08014A80: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014A88
    return r0;
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r6 = (r0 >> 32);
    *(u16*)(r6) = (u16)r4;
    r3 = (r5 >> 1);
    r4 = r0;
    r0 += 0x118U;
    r1 = 0x03001914U; // [0x08014C34]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08014AB6;
    r0 = 0x086B8034U; // [0x08014C38]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08006B5E(r0, r1, r2, r3); // 0x08014AB2
loc_08014AB6:
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_08014AC6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08014AC2: BL __call_via_r3
loc_08014AC6:
    return r0;
    r4 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r5 = 0x086B8034U; // [0x08014C38]
    if (cmp_lhs == cmp_rhs) return sub_08014AFE(r0, r1, r2, r3);
    r1 = r5;
    r1 = *(u32*)(r1 + 0x4);
    r0 = 0x000005C4U; // [0x08014C3C]
    r0 = r1 + r0;
    r1 = 0x08319488U; // [0x08014C40]
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08014B70(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 6;
    if (cmp_lhs == cmp_rhs) return sub_08014B82(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) return sub_08014BB6(r0, r1, r2, r3);
    r3 = r4;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08014AEC
    r0 = 0x0U;
    r0 = sub_08014188(r0, r1, r2, r3); // 0x08014AF2: BL 0x08014188
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08014AF6
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08014AFE..0x08014BBC (190 bytes, Thumb)
u32 sub_08014AFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) goto loc_08014B44;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_08014B40;
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x08014B0E
    r5 = *(u32*)(r5 + 0x10);
    r6 = 0x0877CCC4U /* EventPoolRecord */; // [0x08014C44]
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08014B18: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08014B2C;
    r1 = 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x08049264U /* &VTable_08049264 */; // [0x08014C48]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r4;
    *(u32*)(r0 + 0x8) = (u32)r6;
loc_08014B2C:
    r2 = r0;
    r0 = 0x610U; // (97 << 4)
    r0 = r5 + r0;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
loc_08014B40:
    r0 = 0x1U;
    return r0;
loc_08014B44:
    r1 = 0x0U;
    r0 = 0x0U;
    r0 = sub_080335BC(r0, r1, r2, r3); // 0x08014B48: BL 0x080335BC
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08014B4C
    r0 = sub_08015882(r0, r1, r2, r3); // 0x08014B50
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x08014C4C]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08014B5E: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x08014C4C]
    r0 = 0x05000200U; // [0x08014C50]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08014B6A: BL 0x08049144
    goto loc_08014B40;
    r3 = r4;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08014B74
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x08014B7A
    r0 = 0x1U;
    return r0;
    r3 = r4;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08014B86
    r0 = 0xFFU;
    r0 += 0x19U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08014B8E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08014BAE;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08014C54]
    r2 = 0x08049588U /* &VTable_08049588 */; // [0x08014C58]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    *(u32*)(r1 + 0x10) = (u32)r4;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r4;
loc_08014BAE:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08014BAE
    r0 = 0x1U;
    return r0;
    goto loc_08014BB8;
loc_08014BB8:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08014BBC..0x08014BE2 (38 bytes, Thumb)
u32 sub_08014BBC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x086B8034U; // [0x08014C38]
    r1 = *(u32*)(r0);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08014BDE;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x000005C4U; // [0x08014C3C]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x08319488U; // [0x08014C40]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08014BD6
    r0 = 0x1U;
    return r0;
loc_08014BDE:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08014C06..0x08014C20 (26 bytes, Thumb)
u32 sub_08014C06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r1;
    r1 = r2;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    r0 = 0x086B8034U; // [0x08014C38]
    if (cmp_lhs == cmp_rhs) return sub_08014C20(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08014C28(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08014C1E;
    r0 = *(u32*)(r0 + 0xC);
    *(u8*)(r0) = (u8)r1;
loc_08014C1E:
    return r0;
}

// ROM Address: 0x08014C20..0x08014C30 (16 bytes, Thumb)
u32 sub_08014C20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08006AB8(r0, r1, r2, r3); // 0x08014C22
    return sub_08014C1E(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08006ACA(r0, r1, r2, r3); // 0x08014C2A
    return sub_08014C1E(r0, r1, r2, r3);
}

// ROM Address: 0x08014C5C..0x08014DA0 (324 bytes, Thumb)
u32 sub_08014C5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r5 += 0xFFU;
    r7 = r2;
    r4 = r0;
    r5 += 0x1U;
    r1 = *(u32*)(r5 + 0x14);
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x08014C6C
    r6 = 0x0U;
    *(u32*)(r5 + 0x14) = (u32)r6;
    r1 = *(u32*)(r5 + 0x18);
    r0 = r4;
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x08014C78
    *(u32*)(r5 + 0x18) = (u32)r6;
    r1 = *(u32*)(r5 + 0x20);
    r0 = r4;
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x08014C82
    *(u32*)(r5 + 0x20) = (u32)r6;
    r1 = *(u32*)(r5 + 0x24);
    r0 = r4;
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x08014C8C
    *(u32*)(r5 + 0x24) = (u32)r6;
    r0 = stack[5]; // [sp + 0x14]
    r6 = 0xCU;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08014CFC;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r1 = 0x1U;
    r0 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = r6;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08014CB0: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0x14) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014CBA
    r0 = stack[5]; // [sp + 0x14]
    r1 = 0x0U;
    r6 = (r0 << 2);
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080150A0]
    r3 = *(u32*)(r0 + r6);
    r0 = 0x086B8048U; // [0x080150A4]
    r2 = *(u32*)(r0 + 0xC);
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x90U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014CDE
    r1 = r0;
    *(u32*)(r5 + 0x20) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014CE8
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080150A0]
    r1 = *(u32*)(r0 + r6);
    r0 = 0x086B8048U; // [0x080150A4]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08014CF4
    r6 = r0;
    r6 += 0x20U;
loc_08014CFC:
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08014D52;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x1U;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r3 = r6;
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08014D16: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014D20
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080150A0]
    r0 = (r7 << 2);
    r3 = *(u32*)(r1 + r0);
    r0 = 0x086B8048U; // [0x080150A4]
    r1 = 0x0U;
    r2 = *(u32*)(r0 + 0xC);
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = r6;
    r2 += 0x10U;
    stack[0] = r3; // [sp + 0x0]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x90U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014D44
    r1 = r0;
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014D4E
loc_08014D52:
    return r0;
    r4 = r0;
    r0 += 0x100U;
    r1 = *(u32*)(r0 + 0x2C);
    r0 = r1;
    r1 = *(u32*)(r1 + 0x40);
    r0 += 0x4CU;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x8);
    r3 = 0x68U;
    r0 = 0x086B8048U; // [0x080150A4]
    r1 *= r3;
    r0 = *(u32*)(r0 + 0x10);
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r5 = r0 + r1;
    r0 = r5;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x08014D82
    r0 = 0xFFU;
    r0 += 0x31U;
    r0 = *(u8*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08014DA0(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08014D9E;
    r2 = 0x1AU;
    r1 = 0x18U;
    r0 = r4;
    r0 = sub_08014C5C(r0, r1, r2, r3); // 0x08014D9A: BL 0x08014C5C
loc_08014D9E:
    return r0;
}

// ROM Address: 0x08014DA0..0x08014DC2 (34 bytes, Thumb)
u32 sub_08014DA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r5;
    r0 += 0x2CU;
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08014DB6;
    r2 = 0x1AU;
    r1 = 0x36U;
    r0 = r4;
    r0 = sub_08014C5C(r0, r1, r2, r3); // 0x08014DB0: BL 0x08014C5C
    return sub_08014D9E(r0, r1, r2, r3);
loc_08014DB6:
    r2 = 0x1AU;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08014C5C(r0, r1, r2, r3); // 0x08014DBC: BL 0x08014C5C
    return sub_08014D9E(r0, r1, r2, r3);
}

// ROM Address: 0x08014DC2..0x080150A8 (742 bytes, Thumb)
u32 sub_08014DC2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r1 = 0xFFU;
    r1 += 0x31U;
    r0 = 0x0U;
    *(u8*)(r1 + r4) = (u8)r0;
    r6 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080150A0]
    r0 = 0x086B8048U; // [0x080150A4]
    r5 = *(u32*)(r6 + 0x74);
    r2 = *(u32*)(r0 + 0xC);
    r1 = 0x2U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xE0U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014DEC
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014DF4
    r0 = 0x086B8048U; // [0x080150A4]
    r1 = r5;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08014DFE
    r1 = 0xCEU;
    r3 = r1 - r0;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x3U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x3U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08014E1C: BL 0x08013E64
    r5 = r4;
    r5 += 0x100U;
    *(u32*)(r5 + 0x1C) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014E2C
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x6U;
    r1 = r4;
    r3 = 0x8U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08014E48: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014E50
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x7U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x7U;
    r1 = r4;
    r3 = 0xD0U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08014E6C: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014E74
    r0 = r6;
    r3 = *(u32*)(r0 + 0x78);
    r0 = 0x086B8048U; // [0x080150A4]
    r1 = 0x0U;
    r2 = *(u32*)(r0 + 0xC);
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    r0 = 0x2U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x22U;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x14U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014E94
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014E9C
    r0 = 0x84U;
    r1 = r6;
    r3 = *(u32*)(r1 + r0);
    r0 = 0x086B8048U; // [0x080150A4]
    r1 = 0x2U;
    r2 = *(u32*)(r0 + 0xC);
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xCEU;
    r3 = 0x14U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08014EBC
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014EC4
    r0 = 0xBCU;
    r1 = r6;
    r3 = *(u32*)(r1 + r0);
    r2 = 0x0U;
    r1 = ~r2;
    r0 = 0x4FU;
    stack[5] = r0; // [sp + 0x14]
    r0 = r1;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0xB2U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x2U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r3; // [sp + 0xC]
    r3 = 0x3U;
    r2 = 0x1U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_080060F8(r0, r1, r2, r3); // 0x08014EF4: BL 0x080060F8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014EFC
    r0 = 0xC0U;
    r1 = r6;
    r3 = *(u32*)(r1 + r0);
    r2 = 0x0U;
    r1 = ~r2;
    r0 = 0x5BU;
    stack[5] = r0; // [sp + 0x14]
    r0 = r1;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0xB2U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x3U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r3; // [sp + 0xC]
    r3 = 0x1U;
    r2 = 0x2U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_080060F8(r0, r1, r2, r3); // 0x08014F2C: BL 0x080060F8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014F34
    r0 = 0xC4U;
    r1 = r6;
    r3 = *(u32*)(r1 + r0);
    r2 = 0x0U;
    r1 = ~r2;
    r0 = 0x67U;
    stack[5] = r0; // [sp + 0x14]
    r0 = r1;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0xB2U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x1U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r3; // [sp + 0xC]
    r3 = 0x2U;
    r2 = 0x3U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_080060F8(r0, r1, r2, r3); // 0x08014F64: BL 0x080060F8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014F6C
    r0 = 0xC8U;
    r1 = r6;
    r3 = *(u32*)(r1 + r0);
    r2 = 0x0U;
    r1 = ~r2;
    r0 = 0x73U;
    stack[5] = r0; // [sp + 0x14]
    r0 = r1;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0xB2U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    stack[3] = r3; // [sp + 0xC]
    r3 = r0;
    stack[6] = r1; // [sp + 0x18]
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r0 = sub_080060F8(r0, r1, r2, r3); // 0x08014F98: BL 0x080060F8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08014FA0
    r0 = 0x10U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x1EU;
    stack[6] = r0; // [sp + 0x18]
    r0 = 0xE0U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x2EU;
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x0U;
    r0 = ~r0;
    r2 = 0x64U;
    r1 = 0x14; // sp + 0x14
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r2; // [sp + 0x8]
    r3 = r0;
    r1 = r4;
    r2 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x0U;
    r0 = sub_08015D10(r0, r1, r2, r3); // 0x08014FCA
    r1 = 0x086B8048U; // [0x080150A4]
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r1 = *(u32*)(r1 + 0x10);
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 = *(u8*)(r1);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08014FEC;
    r1 = 0x278U; // (79 << 3)
    r1 = *(u32*)(r6 + r1);
    r2 = 0x0U;
    r0 = Object_AppendRecord1(r0, r1, r2, r3); // 0x08014FE8: BL 0x08015FFC
loc_08014FEC:
    r7 = 0x086B8048U; // [0x080150A4]
    r1 = 0x9FU;
    r0 = *(u32*)(r7 + 0x10);
    r1 = (r1 << 3);
    r0 += 0x68U;
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801500A;
    r0 = (r1 >> 1);
    r1 = *(u32*)(r6 + r0);
    r0 = *(u32*)(r5 + 0x2C);
    r2 = 0x1U;
    r0 = Object_AppendRecord1(r0, r1, r2, r3); // 0x08015006: BL 0x08015FFC
loc_0801500A:
    r0 = *(u32*)(r7 + 0x10);
    r1 = 0x4F8U; // (159 << 3)
    r0 += 0xD0U;
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08015028;
    r0 = 0x280U; // (5 << 7)
    r1 = *(u32*)(r6 + r0);
    r0 = *(u32*)(r5 + 0x2C);
    r2 = 0x2U;
    r0 = Object_AppendRecord1(r0, r1, r2, r3); // 0x08015024: BL 0x08015FFC
loc_08015028:
    r0 = *(u32*)(r7 + 0x10);
    r1 = 0x9FU;
    r0 += 0x138U;
    r1 = (r1 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08015048;
    r0 = 0x284U; // (161 << 2)
    r1 = *(u32*)(r6 + r0);
    r0 = *(u32*)(r5 + 0x2C);
    r2 = 0x3U;
    r0 = Object_AppendRecord1(r0, r1, r2, r3); // 0x08015044: BL 0x08015FFC
loc_08015048:
    r0 = *(u32*)(r7 + 0x10);
    r1 = 0x9FU;
    r0 += 0x1A0U;
    r1 = (r1 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08015068;
    r0 = 0x288U; // (81 << 3)
    r1 = *(u32*)(r6 + r0);
    r0 = *(u32*)(r5 + 0x2C);
    r2 = 0x4U;
    r0 = Object_AppendRecord1(r0, r1, r2, r3); // 0x08015064: BL 0x08015FFC
loc_08015068:
    r0 = 0x41U;
    r1 = *(u32*)(r7 + 0x10);
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801508A;
    r0 = 0x28CU; // (163 << 2)
    r1 = *(u32*)(r6 + r0);
    r0 = *(u32*)(r5 + 0x2C);
    r2 = 0x5U;
    r0 = Object_AppendRecord1(r0, r1, r2, r3); // 0x08015086: BL 0x08015FFC
loc_0801508A:
    r0 = 0x27U;
    r1 = *(u32*)(r7 + 0x10);
    r0 = (r0 << 4);
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) return sub_080150B6(r0, r1, r2, r3);
    return sub_080150A8(r0, r1, r2, r3);
    r6 = (r0 >> 32);
    *(u16*)(r1 + 0x2) = (u16)r0;
    r3 = (r5 >> 1);
    return r0;
}

// ROM Address: 0x080150A8..0x080150F4 (76 bytes, Thumb)
u32 sub_080150A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x290U; // (41 << 4)
    r1 = *(u32*)(r6 + r0);
    r0 = *(u32*)(r5 + 0x2C);
    r2 = 0x6U;
    r0 = Object_AppendRecord1(r0, r1, r2, r3); // 0x080150B2: BL 0x08015FFC
    r0 = 0x5BU;
    r1 = *(u32*)(r7 + 0x10);
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_080150D8;
    r0 = 0x294U; // (165 << 2)
    r1 = *(u32*)(r6 + r0);
    r0 = *(u32*)(r5 + 0x2C);
    r2 = 0x7U;
    r0 = Object_AppendRecord1(r0, r1, r2, r3); // 0x080150D4: BL 0x08015FFC
loc_080150D8:
    r0 = r4;
    r1 = *(u32*)(r5 + 0x2C);
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080150DC
    r0 = *(u32*)(r7 + 0x10);
    r1 = *(u8*)(r0);
    r0 = *(u32*)(r5 + 0x2C);
    r0 = sub_08015FA8(r0, r1, r2, r3); // 0x080150E6
    r0 = r4;
    r0 = sub_08014D56(r0, r1, r2, r3); // 0x080150EC
    return r0;
}

// ROM Address: 0x080150F4..0x0801514A (86 bytes, Thumb)
u32 sub_080150F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0x31U;
    r1 = *(u8*)(r1 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08015144;
    r1 = r0;
    r1 += 0x140U;
    r2 = *(u32*)(r1 + 0x14);
    r2 += 0x1U;
    *(u32*)(r1 + 0x14) = (u32)r2;
    r1 = (r2 << 29);
    if (cmp_lhs != cmp_rhs) goto loc_08015144;
    r2 = r0;
    r2 += 0x100U;
    r3 = *(u32*)(r2 + 0x2C);
    r1 = r3;
    r4 = *(u32*)(r3 + 0x40);
    r1 += 0x4CU;
    r3 = (r4 << 1);
    r3 = r3 + r4;
    r3 = (r3 << 2);
    r1 = r3 + r1;
    r4 = *(u32*)(r1 + 0x8);
    r3 = 0x68U;
    r1 = 0x086B8048U; // [0x080154AC]
    r3 *= r4;
    r1 = *(u32*)(r1 + 0x10);
    r1 = r3 + r1;
    r3 = 0x4F8U; // (159 << 3)
    r1 = r1 + r3;
    r1 += 0x2CU;
    r1 = *(u16*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015144;
    r1 = 0x0U;
    *(u32*)(r2 + 0x10) = (u32)r1;
loc_08015144:
    r0 = sub_080067D6(r0, r1, r2, r3); // 0x08015144
    return r0;
}

// ROM Address: 0x0801514A..0x080153F2 (680 bytes, Thumb)
u32 sub_0801514A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFFFEFFCU; // [0x080154B0]
    r4 = r1;
    sp += r3;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x4);
    r1 += 0x100U;
    *(u32*)(r3) = (u32)r1;
    r0 = *(u32*)(r1 + 0x2C);
    r1 = r0;
    r0 = *(u32*)(r0 + 0x40);
    r1 += 0x4CU;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x8);
    r3 = 0x68U;
    r1 = 0x086B8048U; // [0x080154AC]
    r0 *= r3;
    r1 = *(u32*)(r1 + 0x10);
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r5 = r0 + r1;
    r0 = 0x086B8048U; // [0x080154AC]
    r0 = *(u32*)(r0 + 0x8);
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x0U;
    *(u8*)(r4) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r4 + 0x2) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x080154B4]
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = 0x10U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x37U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x0801519E
    r7 = r0;
    r0 = *(u8*)(r5 + 0x14);
    r1 = 0x086B82ECU; // [0x080154B8]
    r6 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080154BC]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 2);
    r2 = *(u32*)(r6 + r0);
    r0 = 0xA0U;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r3 = r7;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x080151C0
    r0 = 0x086B8048U; // [0x080154AC]
    r0 = *(u32*)(r0 + 0xC);
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x52U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x43U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 += 0x18U;
    r3 = 0x0U;
    r7 = (u32)(*(s16*)(r0 + r3));
    r0 -= 0x2U;
    r2 = (u32)(*(s16*)(r0 + r3));
    r0 = 0xA4U;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r3 = r7;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x080151E6
    r0 = 0x52U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x4FU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 += 0x1CU;
    r3 = 0x0U;
    r7 = (u32)(*(s16*)(r0 + r3));
    r0 -= 0x2U;
    r2 = (u32)(*(s16*)(r0 + r3));
    r0 = 0xA8U;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r3 = r7;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08015206
    r0 = 0x52U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x5BU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 += 0x24U;
    r2 = *(u32*)(r0);
    r0 = 0xACU;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801521E
    r0 = 0x52U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x67U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 = sub_0801361C(r0, r1, r2, r3); // 0x0801522C
    r2 = r0;
    r0 = 0xB0U;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08015238
    r0 = 0x52U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x73U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x086B8048U; // [0x080154AC]
    r1 = 0x000004F4U; // [0x080154C0]
    r0 = *(u32*)(r0 + 0x10);
    r0 = r0 + r1;
    r2 = *(u32*)(r0);
    r0 = 0xB4U;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08015254
    r0 = 0x086B8048U; // [0x080154AC]
    r1 = 0x03000F90U; // [0x080154C4]
    r2 = 0x13U;
    r0 = *(u32*)(r0 + 0x10);
    r2 = (r2 << 6);
    r0 = r0 + r2;
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0x10);
    r0 = r1 + r0;
    r0 = sub_080530C8(r0, r1, r2, r3); // 0x0801526A: BL 0x080530C8
    r0 = r1;
    r1 = 0x52U;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = 0x7FU;
    *(u32*)(r4 + 0x8) = (u32)r1;
    r0 = sub_080530F4(r0, r1, r2, r3); // 0x08015278
    r2 = r1;
    r1 = 0xB8U;
    r3 = r0;
    r0 = r4;
    r1 = *(u32*)(r6 + r1);
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08015286
    r3 = 0x7AU;
    r2 = 0x46U;
    r1 = 0xA8U;
    r0 = r4;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x08015292
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x4);
    r0 += 0x130U;
    r0 = *(u8*)(r0);
    r6 = *(u32*)(r3 + 0x4);
    r6 += 0x140U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080152FA;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08015396;
    r0 = 0xB2U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x43U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080154BC]
    r0 = 0xD0U;
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x080152C2
    r0 = 0x2U;
    *(u8*)(r4) = (u8)r0;
    r0 = 0x6U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0x43U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r7 = 0xE0U;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r2 = *(u32*)(r6 + 0x10);
    r0 = r4;
    r1 = 0x080154C8U;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x080152DC
    r0 = 0x4FU;
    r3 = 0x1000U; // (1 << 12)
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r3 += sp;
    r1 = *(u32*)(r3);
    r0 = *(u32*)(r6 + 0x4);
    r1 = *(u32*)(r1 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080153D6;
    r0 = 0x2U;
    return sub_080153F6(r0, r1, r2, r3);
loc_080152FA:
    r7 = r5;
    r7 += 0x2CU;
    r0 = *(u16*)(r7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801534A;
    r0 = *(u32*)(r6 + 0x14);
    r0 = (r0 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0801531E;
    r0 = 0xB2U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x35U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r6 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080154BC]
    r0 = 0xCCU;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801531A
loc_0801531E:
    r0 = 0xB2U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r6 = 0x43U;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080154BC]
    *(u32*)(r4 + 0x8) = (u32)r6;
    r0 = 0xD0U;
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801532E
    r0 = 0x2U;
    *(u8*)(r4) = (u8)r0;
    r0 = 0x75U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0xE0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u32*)(r4 + 0x8) = (u32)r6;
    r2 = *(u16*)(r7);
    r1 = 0x080154C8U;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08015346
loc_0801534A:
    r0 = 0x2U;
    *(u8*)(r4) = (u8)r0;
    r0 = 0x4FU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r7 = 0xE0U;
    r0 = r5;
    r0 += 0x4CU;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r2 = *(u16*)(r0);
    r1 = r5;
    r1 += 0x28U;
    r6 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0801536A;
    r1 = 0x75U;
    goto loc_08015378;
loc_0801536A:
    r2 = *(u16*)(r0);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08015376;
    r1 = 0x6U;
    goto loc_08015378;
loc_08015376:
    r1 = 0x3U;
loc_08015378:
    *(u8*)(r4 + 0x3) = (u8)r1;
    r2 = *(u16*)(r0);
    r1 = 0x080154C8U;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08015380
    r0 = 0x5BU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 += 0x4EU;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r2 = *(u16*)(r0);
    r1 = r5;
    r1 += 0x29U;
    goto loc_08015398;
loc_08015396:
    return sub_0801544A(r0, r1, r2, r3);
loc_08015398:
    r6 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_080153A2;
    r1 = 0x75U;
    goto loc_080153B0;
loc_080153A2:
    r2 = *(u16*)(r0);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080153AE;
    r1 = 0x6U;
    goto loc_080153B0;
loc_080153AE:
    r1 = 0x3U;
loc_080153B0:
    *(u8*)(r4 + 0x3) = (u8)r1;
    r2 = *(u16*)(r0);
    r1 = 0x080154C8U;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x080153B8
    r0 = 0x67U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 += 0x50U;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r2 = *(u16*)(r0);
    r1 = r5;
    r1 += 0x2AU;
    r6 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_080153D8;
    r1 = 0x75U;
    goto loc_080153E6;
loc_080153D6:
    return sub_080153F4(r0, r1, r2, r3);
loc_080153D8:
    r2 = *(u16*)(r0);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080153E4;
    r1 = 0x6U;
    goto loc_080153E6;
loc_080153E4:
    r1 = 0x3U;
loc_080153E6:
    *(u8*)(r4 + 0x3) = (u8)r1;
    r2 = *(u16*)(r0);
    r1 = 0x080154C8U;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x080153EE
    return r0;
}

// ROM Address: 0x08015472..0x08015596 (292 bytes, Thumb)
u32 sub_08015472(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x3U;
    *(u8*)(r4 + 0x3) = (u8)r1;
    r2 = *(u16*)(r0);
    r1 = 0x080154C8U;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801547C
    r0 = *(u8*)(r5 + 0x14);
    r1 = 0x086B82ECU; // [0x080154B8]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0x10);
    r0 = sub_08011F20(r0, r1, r2, r3); // 0x0801548E
    r5 = sp;
    r1 = sp;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08015496
    r2 = 0x086B8048U; // [0x080154AC]
    r1 = r5;
    r2 += 0x14U;
    r0 = r4;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x080154A2
    r3 = 0x0000100CU; // [0x080154D0]
    sp += r3;
    return r0;
    *(u16*)(r1 + 0x2) = (u16)r0;
    r3 = (r5 >> 1);
    r3 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r6 = (r0 >> 32);
    r4 = (r6 << 19);
    r0 = r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r5 = r4;
    r4 = (r4 << 1);
    r0 = r0;
    r0 = r0;
    r4 = ((u32)((s32)r1 >> 32));
    r0 = r0;
    r4 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = sp;
    r5 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080154E2
    r3 = 0x0U;
    r2 = 0x1CU;
    r1 = r5;
    r0 = r4;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x080154EE
    r1 = r5;
    r0 = r4;
    r0 = sub_0801514A(r0, r1, r2, r3); // 0x080154F6: BL 0x0801514A
    r1 = r5;
    r0 = r4;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x080154FE
    r1 = 0x06000040U; // [0x08015794]
    r0 = r5;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08015506: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801550E: BL 0x0803F58C
    return r0;
    r6 = r1;
    r5 = r0;
    r1 = 0x086B8048U; // [0x0801579C]
    r0 = 0x000005C4U; // [0x08015798]
    r1 = *(u32*)(r1 + 0x4);
    r4 = r5;
    r7 = r1 + r0;
    r1 = 0x08319488U; // [0x080157A0]
    r4 += 0x100U;
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r2; cmp_rhs = 6;
    if (cmp_lhs == cmp_rhs) return sub_080155C4(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_08015596(r0, r1, r2, r3);
    r1 = r4;
    r1 += 0x30U;
    stack[1] = r1; // [sp + 0x4]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08015614(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08015616(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_080155C0(r0, r1, r2, r3);
    r6 = 0x0U;
    r3 = r6;
    r2 = 0x40U;
    r0 = r7;
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08015552
    r1 = *(u32*)(r4 + 0x2C);
    r0 = r1;
    r1 = *(u32*)(r1 + 0x40);
    r0 += 0x4CU;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x8);
    r0 = 0x0U;
    r0 = sub_08017160(r0, r1, r2, r3); // 0x0801556A
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801556E
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_080155F8(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) return sub_08015606(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_08015618(r0, r1, r2, r3);
    r3 = r6;
    r2 = 0x40U;
    r0 = r7;
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08015586
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801558C
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08015596..0x080155DE (72 bytes, Thumb)
u32 sub_08015596(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 7;
    if (cmp_lhs == cmp_rhs) return sub_080155DE(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 100;
    if (cmp_lhs != cmp_rhs) goto loc_080155C0;
    r1 = 0x08319488U; // [0x080157A0]
    r3 = 0x0U;
    r2 = 0x40U;
    r1 -= 0xCU;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080155A8
    r1 = r6;
    r0 = *(u32*)(r4 + 0x2C);
    r0 = sub_08015FEA(r0, r1, r2, r3); // 0x080155B0
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r0 + 0x3C);
    *(u32*)(r0 + 0x40) = (u32)r1;
    r0 = r5;
    r0 = sub_08014D56(r0, r1, r2, r3); // 0x080155BC
loc_080155C0:
    r0 = 0x0U;
    return sub_08015592(r0, r1, r2, r3);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080155CC
    r0 = 0x0U;
    r0 = sub_08014188(r0, r1, r2, r3); // 0x080155D2: BL 0x08014188
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080155D6
    r0 = 0x1U;
    return sub_08015592(r0, r1, r2, r3);
}

// ROM Address: 0x080155DE..0x080155F8 (26 bytes, Thumb)
u32 sub_080155DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080155E6
    r0 = 0x0U;
    r0 = sub_08016524(r0, r1, r2, r3); // 0x080155EC
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080155F0
    r0 = 0x1U;
    return sub_08015592(r0, r1, r2, r3);
}

// ROM Address: 0x080155F8..0x0801561C (36 bytes, Thumb)
u32 sub_080155F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = sub_08014188(r0, r1, r2, r3); // 0x080155FA: BL 0x08014188
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080155FE
    r0 = 0x1U;
    return sub_08015592(r0, r1, r2, r3);
    r0 = 0x0U;
    r0 = sub_08016524(r0, r1, r2, r3); // 0x08015608
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801560C
    r0 = 0x1U;
    return sub_08015592(r0, r1, r2, r3);
    return sub_0801561C(r0, r1, r2, r3);
    return sub_0801574E(r0, r1, r2, r3);
    *(u32*)(r4 + 0x10) = (u32)r6;
    return sub_080155C0(r0, r1, r2, r3);
}

// ROM Address: 0x0801561C..0x08015792 (374 bytes, Thumb)
u32 sub_0801561C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[1]; // [sp + 0x4]
    r6 = r5;
    r0 = *(u8*)(r1);
    r6 += 0x140U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015672;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080156F0;
    r0 = r5;
    r1 = *(u32*)(r4 + 0x28);
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x08015632
    r0 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r1 = stack[1]; // [sp + 0x4]
    *(u8*)(r1) = (u8)r0;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = r1;
    r1 = *(u32*)(r1 + 0x40);
    r0 += 0x4CU;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x8);
    r3 = 0x68U;
    r1 = 0x086B8048U; // [0x0801579C]
    r0 *= r3;
    r1 = *(u32*)(r1 + 0x10);
    r2 = *(u32*)(r6 + 0x4);
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = r0;
    r1 += 0x28U;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    goto loc_080156F2;
loc_08015672:
    r0 = 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0801567A: BL 0x08016208
    r1 = r0;
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = r5;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08015684
    r1 = stack[1]; // [sp + 0x4]
    r0 = 0x1U;
    *(u8*)(r1) = (u8)r0;
    r0 = *(u32*)(r4 + 0x1C);
    r2 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = r1;
    r1 = *(u32*)(r1 + 0x40);
    r0 += 0x4CU;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x8);
    r3 = 0x68U;
    r1 = 0x086B8048U; // [0x0801579C]
    r0 *= r3;
    r1 = *(u32*)(r1 + 0x10);
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = r0;
    r1 += 0x2CU;
    r3 = *(u16*)(r1);
    *(u32*)(r4 + 0x34) = (u32)r3;
    r1 = *(u16*)(r1);
    *(u32*)(r6 + 0x10) = (u32)r1;
    r1 = r0;
    r1 += 0x28U;
    r3 = *(u8*)(r1);
    *(u32*)(r4 + 0x38) = (u32)r3;
    r1 = *(u8*)(r1);
    *(u32*)(r6 + 0x4) = (u32)r1;
    r1 = r0;
    r1 += 0x29U;
    r3 = *(u8*)(r1);
    *(u32*)(r4 + 0x3C) = (u32)r3;
    r1 = *(u8*)(r1);
    r0 += 0x2AU;
    *(u32*)(r6 + 0x8) = (u32)r1;
    r1 = *(u8*)(r0);
    *(u32*)(r6) = (u32)r1;
    r0 = *(u8*)(r0);
    *(u32*)(r6 + 0xC) = (u32)r0;
    r3 = r2;
    r2 = 0x40U;
    r0 = r7;
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080156EC
loc_080156F0:
    goto loc_08015742;
loc_080156F2:
    *(u8*)(r1) = (u8)r2;
    r3 = *(u8*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080156F2;
    r2 = *(u32*)(r6 + 0x8);
    r1 = r0;
    r1 += 0x29U;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
loc_08015704:
    *(u8*)(r1) = (u8)r2;
    r3 = *(u8*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08015704;
    r2 = *(u32*)(r6 + 0xC);
    r1 = r0;
    r1 += 0x2AU;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
loc_08015716:
    *(u8*)(r1) = (u8)r2;
    r3 = *(u8*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08015716;
    r2 = *(u32*)(r6 + 0x10);
    r1 = r0;
    r1 += 0x2CU;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
loc_08015728:
    *(u16*)(r1) = (u16)r2;
    r3 = *(u16*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08015728;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x08015730
    r1 = 0x08319488U; // [0x080157A0]
    r3 = 0x0U;
    r2 = 0x40U;
    r1 += 0xCU;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801573E
loc_08015742:
    r0 = r5;
    r0 = sub_08014D56(r0, r1, r2, r3); // 0x08015744
    r2 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r2;
loc_0801574C:
    return sub_080155C0(r0, r1, r2, r3);
    r6 = 0x0U;
    r3 = r6;
    r2 = 0x40U;
    r0 = r7;
    r1 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08015758
    r1 = stack[1]; // [sp + 0x4]
    r0 = *(u8*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015788;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801574C;
    r1 = stack[1]; // [sp + 0x4]
    *(u8*)(r1) = (u8)r6;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = *(u32*)(r4 + 0x28);
    r0 = r5;
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x08015776
    r0 = r5;
    *(u32*)(r4 + 0xC) = (u32)r6;
    r0 = sub_08014D56(r0, r1, r2, r3); // 0x0801577E
    r0 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r6;
    return sub_08015592(r0, r1, r2, r3);
loc_08015788:
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801578A
    r0 = 0x1U;
    return sub_08015592(r0, r1, r2, r3);
}

// ROM Address: 0x08015792..0x080157D4 (66 bytes, Thumb)
u32 sub_08015792(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r4 = (r0 << 23);
    r0 = r0;
    *(u16*)(r1 + 0x2) = (u16)r0;
    r3 = (r5 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r2 = 0x086B8048U; // [0x08015920]
    r4 = 0x000005C4U; // [0x08015924]
    r1 = *(u32*)(r2);
    r5 = r2;
    r1 = *(u16*)(r1 + 0x4);
    r5 = *(u32*)(r5 + 0x4);
    r4 = r5 + r4;
    r3 = (r1 << 28);
    r3 = (r3 >> 31);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    stack[2] = r4; // [sp + 0x8]
    r6 = 0x08319488U; // [0x08015928]
    if (cmp_lhs == cmp_rhs) return sub_080157D4(r0, r1, r2, r3);
    r1 = r6;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080157CA
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080157D4..0x08015882 (174 bytes, Thumb)
u32 sub_080157D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFU;
    r3 += 0x31U;
    r3 = *(u8*)(r3 + r0);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801587E;
    r7 = r0;
    r7 += 0x100U;
    r3 = *(u32*)(r7 + 0xC);
    r1 = (r1 << 26);
    r3 = (r3 << 2);
    r3 = r3 + r0;
    r4 = r3;
    r4 += 0x134U;
    r5 = r4;
    stack[1] = r4; // [sp + 0x4]
    r4 = r7;
    r4 += 0x40U;
    r5 += 0xCU;
    r1 = (r1 >> 31);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015826;
    r1 = r6;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801580A
    r0 = *(u32*)(r5);
    r1 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08015826;
    r0 -= 0x1U;
    *(u32*)(r5) = (u32)r0;
    r0 = *(u32*)(r4 + 0x10);
    r0 += 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r3 = 0x0U;
    *(u32*)(r7 + 0x10) = (u32)r3;
loc_08015826:
    r2 = 0x086B8048U; // [0x08015920]
    r0 = *(u32*)(r2);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801587E;
    r1 = r6;
    r6 = 0x0U;
    r3 = r6;
    r2 = 0x40U;
    r0 = stack[2]; // [sp + 0x8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801583C
    r1 = *(u32*)(r7 + 0x2C);
    r2 = 0x086B8048U; // [0x08015920]
    r0 = r1;
    r1 = *(u32*)(r1 + 0x40);
    r0 += 0x4CU;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x8);
    r3 = 0x68U;
    r1 = *(u32*)(r2 + 0x10);
    r0 *= r3;
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x08015862
    r1 = *(u32*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0801587E;
    r0 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801587E;
    r1 += 0x1U;
    *(u32*)(r5) = (u32)r1;
    r0 = *(u32*)(r4 + 0x10);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    *(u32*)(r7 + 0x10) = (u32)r6;
loc_0801587E:
    r0 = 0x0U;
    return sub_080157D0(r0, r1, r2, r3);
}

// Evidence: writes BLDCNT 0x04000050: 0x080158C0 ldr r0, [pc, #0x6c] (= 0x04000040) then 0x080158C4 strh r4, [r0, #0x10]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08015886
// ROM Address: 0x08015886..0x08015966 (224 bytes, Thumb)
u32 Blend_WriteControl3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x0801592C]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801588E: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801589C: BL 0x0804912C
    r2 = 0x18000U; // (3 << 15)
    r1 = 0x0U;
    r0 = (r2 << 10);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080158A8: BL 0x0804912C
    r1 = 0x4000000U; // (1 << 26)
    r4 = 0x0U;
    *(u16*)(r1 + 0x10) = (u16)r4;
    *(u16*)(r1 + 0x12) = (u16)r4;
    *(u16*)(r1 + 0x14) = (u16)r4;
    *(u16*)(r1 + 0x16) = (u16)r4;
    *(u16*)(r1 + 0x18) = (u16)r4;
    *(u16*)(r1 + 0x1A) = (u16)r4;
    *(u16*)(r1 + 0x1C) = (u16)r4;
    r0 = 0x04000040U /* &REG_WIN0H */; // [0x08015930]
    *(u16*)(r1 + 0x1E) = (u16)r4;
    *(u16*)(r0 + 0x10) = (u16)r4;
    r0 = 0x00001E83U; // [0x08015934]
    r2 = 0x00009640U; // [0x08015938]
    *(u16*)(r1 + 0xC) = (u16)r0;
    r0 = (r1 >> 16);
    *(u16*)(r1) = (u16)r0;
    r0 = 0x3U;
    r1 = 0x0U;
    r0 = (r0 << 25);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080158D6: BL 0x0804912C
    r0 = 0x1EU;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x14U;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0x1U;
    stack[0] = r4; // [sp + 0x0]
    stack[1] = r4; // [sp + 0x4]
    r1 = 0x0600F000U; // [0x0801593C]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x080158EC
    return r0;
    r4 = r0;
    r0 = sub_08015882(r0, r1, r2, r3); // 0x080158F8
    r0 = r4;
    r0 = sub_08014DC2(r0, r1, r2, r3); // 0x080158FE: BL 0x08014DC2
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x08015940]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0801590C: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x08015940]
    r0 = 0x05000200U; // [0x0801592C]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08015918: BL 0x08049144
    return r0;
    r0 = r0;
    *(u16*)(r1 + 0x2) = (u16)r0;
    r3 = (r5 >> 1);
    r4 = (r0 << 23);
    r0 = r0;
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    r0 = (r0 << 1);
    r0 = (r0 << 16);
    r3 = r0 - 2;
    r0 = r0;
    stack[64] = r6; // [sp + 0x100]
    r0 = r0;
    r0 = (r0 << 24);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r3 = r0;
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = *(u8*)(r3 + 0x8);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08015952: BL __call_via_r3
    return r0;
    r2 = r1;
    r1 = *(u8*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08015966(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08015966..0x08015978 (18 bytes, Thumb)
u32 sub_08015966(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2 + 0x4);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x34);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801596E: BL __call_via_r3
    r1 = 0x1U;
    r0 = r1 - r0;
    return sub_08015964(r0, r1, r2, r3);
}

// ROM Address: 0x08015978..0x08015998 (32 bytes, Thumb)
u32 sub_08015978(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r1 + 0x4);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801597E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801598E;
    r1 = 0x0804A7A0U /* &VTable_0804A7A0 */; // [0x08015998]
    *(u32*)(r0) = (u32)r1;
    r1 = 0xCU;
    *(u8*)(r0 + 0x4) = (u8)r1;
loc_0801598E:
    r1 = r0;
    r0 = r4;
    r0 = sub_0800ED80(r0, r1, r2, r3); // 0x08015992
    return r0;
}

// ROM Address: 0x08015998..0x0801599A (2 bytes, Thumb)
u32 sub_08015998(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x08015C1CU;
    return r0;
}

// ROM Address: 0x0801599A..0x080159C2 (40 bytes, Thumb)
u32 sub_0801599A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080159D8(r0, r1, r2, r3);
    r0 = *(u32*)(r1 + 0x4);
    r2 += 0xFFU;
    r4 = r0;
    r4 += 0x180U;
    r2 += 0x81U;
    r1 = *(u32*)(r2 + 0x20);
    r3 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r2 + 0x24);
    r1 = r1 - r3;
    r3 = *(u32*)(r4 + 0x24);
    r2 = r2 - r3;
    r3 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_080159C4(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x080159C4..0x080159CA (6 bytes, Thumb)
u32 sub_080159C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_080159CC(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x080159CC..0x080159DC (16 bytes, Thumb)
u32 sub_080159CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs < cmp_rhs) return sub_080159E2(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_080159DC(r0, r1, r2, r3);
    r1 = 0x3U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
}

// ROM Address: 0x080159DC..0x080159F2 (22 bytes, Thumb)
u32 sub_080159DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x2U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return sub_080159D8(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080159EC;
    r1 = 0x0U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return sub_080159D8(r0, r1, r2, r3);
loc_080159EC:
    r1 = 0x1U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return sub_080159D8(r0, r1, r2, r3);
}

// ROM Address: 0x080159F2..0x08015A00 (14 bytes, Thumb)
u32 sub_080159F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r1 = *(u32*)(r0 + 0x8);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08015A00(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08015A00..0x08015A04 (4 bytes, Thumb)
u32 sub_08015A00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08015A04..0x08015A06 (2 bytes, Thumb)
u32 sub_08015A04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x086B806CU; // [0x08015A24]
    return r0;
}

// ROM Address: 0x08015A06..0x08015A24 (30 bytes, Thumb)
u32 sub_08015A06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r1);
    r0 = *(u32*)(r0 + 0x8);
    r1 = 0x083192A8U; // [0x08015A28]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08015A2C]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08015A1E
    return r0;
}

// ROM Address: 0x08015A24..0x08015A30 (12 bytes, Thumb)
u32 sub_08015A24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r5 + 0x2) = (u16)r4;
    r3 = (r5 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    return r0;
}

// ROM Address: 0x08015A30..0x08015A94 (100 bytes, Thumb)
u32 sub_08015A30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x18);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x18) = (u32)r1;
    r2 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08015A42;
    r2 = *(u32*)(r0 + 0x14);
    r1 = r2 - r1;
loc_08015A42:
    r3 = *(u32*)(r0 + 0x20);
    r3 *= r1;
    r0 += 0x8U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sub_08007074(r0, r1, r2, r3); // 0x08015A4A
    return r0;
    r1 = r0;
    r1 = *(u32*)(r1 + 0x18);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015A5C;
    r0 = 0x0U;
loc_08015A5C:
    return r0; // BX lr
    r0 = r0;
    r4 = *(u32*)(r1 + 0x4);
    r1 = 0x03001BACU; // [0x08015A94]
    r0 = 0x1U;
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08015A72;
    r1 = 0x03002A58U; // [0x08015A98]
    *(u32*)(r1) = (u32)r0;
loc_08015A72:
    r5 = 0x086B8070U; // [0x08015A9C]
    r2 = r4;
    r1 = 0x12U;
    r0 = *(u32*)(r5);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08015A7A
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08015A86: BL 0x08046AA2
    r1 = r4;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08015A8E
    return r0;
}

// ROM Address: 0x08015A94..0x08015A96 (2 bytes, Thumb)
u32 sub_08015A94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r5 - r6;
    return r0;
}

// ROM Address: 0x08015A96..0x08015C80 (490 bytes, Thumb)
u32 sub_08015A96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r2; cmp_rhs = 88;
    r0 = (r0 << 12);
    *(u16*)(r6 + 0x2) = (u16)r0;
    r3 = (r5 >> 1);
    r0 = *(u8*)(r0 + 0x8);
    r1 = *(u32*)(r1 + 0x4);
    *(u8*)(r1 + 0x10) = (u8)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_0800797C(r0, r1, r2, r3); // 0x08015AAE
    return r0;
    r1 = *(u32*)(r0 + 0xC);
    r1 -= 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    return r0; // BX lr
    r5 = r0;
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r4 = r0;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08015ACA: BL 0x08046AA2
    r1 = *(u32*)(r5 + 0x8);
    r0 = 0xFFU;
    r0 += 0xA1U;
    r1 = (r1 << 8);
    *(u32*)(r0 + r4) = r1;
    r1 = *(u32*)(r5 + 0xC);
    r0 += 0x4U;
    r1 = (r1 << 8);
    *(u32*)(r0 + r4) = r1;
loc_08015AE0:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x40);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08015AE8: BL 0x08046AA2
    return r0;
    r0 = r0;
    r5 = r2;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08015B04;
    r0 = 0x34U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08015AFC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015B1C;
loc_08015B04:
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r1;
    r1 = 0x1U;
    r2 = 0x24U;
    *(u8*)(r2 + r0) = (u8)r1;
    r1 = 0x0804D4BCU /* &VTable_0804D4BC */; // [0x08015B64]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x28) = (u32)r4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)(r0 + 0x2C) = (u32)r2;
    *(u32*)(r0 + 0x30) = (u32)r3;
loc_08015B1C:
    return r0;
    r2 = *(u32*)(r0 + 0x28);
    r2 += 0x1A0U;
    r3 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)(r2);
    r3 = ((u32)((s32)r3 >> 8));
    r2 = ((u32)((s32)r2 >> 8));
    stack[1] = r2; // [sp + 0x4]
    r2 = r3;
    stack[0] = r3; // [sp + 0x0]
    r3 = stack[1]; // [sp + 0x4]
    stack[2] = r2; // [sp + 0x8]
    stack[3] = r3; // [sp + 0xC]
    r3 = *(u32*)(r0 + 0x2C);
    r2 = r2 + r3;
    r3 = stack[3]; // [sp + 0xC]
    r4 = *(u32*)(r0 + 0x30);
    stack[0] = r2; // [sp + 0x0]
    r3 = r3 + r4;
    stack[1] = r3; // [sp + 0x4]
    r3 = r2;
    r2 = 0x64U;
    r4 = stack[1]; // [sp + 0x4]
    *(u32*)(r0 + 0x8) = (u32)r2;
    *(u32*)(r0 + 0x14) = (u32)r3;
    *(u32*)(r0 + 0x18) = (u32)r4;
    r2 = 0x0U;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r0 = sub_08020610(r0, r1, r2, r3); // 0x08015B5A
    return r0;
    r0 = r0;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08015AE0;
    r4 = (r0 >> 32);
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08015B82;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08015B76: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08015B82;
    r0 = r4;
    return r0;
loc_08015B82:
    r0 = 0x0804D27CU /* &VTable_0804D27C */; // [0x08015BB0]
    r2 = r6;
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r0 = sub_08007858(r0, r1, r2, r3); // 0x08015B8C: BL 0x08007858
    r1 = r0;
    r0 = 0x086B8074U; // [0x08015BB4]
    r0 = *(u32*)(r0);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x08015B96
    r0 = r4;
    return r0;
    r0 = 0x086B8074U; // [0x08015BB4]
    r0 = *(u32*)(r0);
    r0 = sub_08021084(r0, r1, r2, r3); // 0x08015BA4
    r1 = 0x1U;
    r0 = r1 - r0;
    return r0;
    r0 = r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08015CAC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u16*)(r6 + 0x2) = (u16)r4;
    r3 = (r5 >> 1);
    r5 = r0;
    r0 = stack[14]; // [sp + 0x38]
    r2 = 0x086B8080U; // [0x08015E80]
    r0 = (r0 << 2);
    r6 = r0 + r2;
    r0 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 - r0;
    stack[2] = r2; // [sp + 0x8]
    r2 = *(u32*)(r1 + 0xC);
    r1 = *(u32*)(r1 + 0x4);
    r2 = r2 - r1;
    stack[1] = r2; // [sp + 0x4]
    r2 = *(u32*)(r5 + 0x28);
    r1 *= r2;
    r2 = *(u32*)(r5 + 0x24);
    r1 = r1 + r2;
    r4 = r1 + r0;
    r0 = *(u8*)(r6);
    *(u8*)(r4 + 0x1) = (u8)r0;
    r1 = *(u8*)(r6 + 0x1);
    r2 = stack[2]; // [sp + 0x8]
    r2 -= 0x3U;
    r0 = r4 + 2;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08015BEC: BL 0x08046E40
    r0 = *(u32*)(r5 + 0x28);
    r7 = 0x0U;
    r4 = r0 + r4;
    r0 = *(u8*)(r6);
    r1 = stack[1]; // [sp + 0x4]
    r1 -= 0x2U;
    stack[4] = r1; // [sp + 0x10]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08015C2C;
    r2 = stack[2]; // [sp + 0x8]
    r2 -= 0x2U;
    stack[3] = r2; // [sp + 0xC]
loc_08015C08:
    *(u8*)(r4) = (u8)r0;
    r1 = *(u8*)(r6 + 0x2);
    r2 = stack[3]; // [sp + 0xC]
    r0 = r4 + 1;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08015C10: BL 0x08046E40
    r0 = *(u8*)(r6 + 0x3);
    r1 = stack[2]; // [sp + 0x8]
    r7 += 0x1U;
    r1 = r4 + r1;
    r1 -= 0x10U;
    *(u8*)(r1 + 0xF) = (u8)r0;
    r0 = *(u32*)(r5 + 0x28);
    r4 = r0 + r4;
    r0 = *(u8*)(r6 + 0x1);
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08015C08;
loc_08015C2C:
    r1 = *(u8*)(r6 + 0x3);
    r2 = stack[2]; // [sp + 0x8]
    r2 -= 0x2U;
    r0 = r4 + 1;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08015C34: BL 0x08046E40
    r0 = 0x086B8080U; // [0x08015E80]
    r0 -= 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = 0x0803F445U; // [0x08015E84]
    *(u32*)(r5 + 0x20) = (u32)r0;
    r0 = 0x2U;
    *(u8*)(r5 + 0x3) = (u8)r0;
    r0 = 0x0U;
    *(u8*)(r5) = (u8)r0;
    r1 = stack[7]; // [sp + 0x1C]
    r0 = r5;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r5 + 0x8) = (u32)r1;
    *(u32*)(r5 + 0x4) = (u32)r2;
    r1 = stack[8]; // [sp + 0x20]
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08015C5A
    return r0;
    r5 = stack[16]; // [sp + 0x40]
    r6 = stack[17]; // [sp + 0x44]
    r7 = stack[19]; // [sp + 0x4C]
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08015C80(r0, r1, r2, r3);
    r0 = 0x40U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08015C72: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08015C80(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08015C80..0x08015CD2 (82 bytes, Thumb)
u32 sub_08015C80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x30; // sp + 0x30
    r0 = *(u32*)r2; r2 += 4;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    stack[0] = r0; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x10; // sp + 0x10
    stack[2] = r2; // [sp + 0x8]
    r1 = *(u32*)r3; r3 += 4;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = r4;
    r0 = sub_08005FBE(r0, r1, r2, r3); // 0x08015C90
    r0 = 0x080493F4U /* &VTable_080493F4 */; // [0x08015E88]
    r1 = r6;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r5;
    *(u32*)(r4 + 0x24) = (u32)r6;
    r0 = r5 + 3;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r1 += 0x8U;
    *(u32*)(r4 + 0x34) = (u32)r1;
    r0 = stack[15]; // [sp + 0x3C]
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08015E8C]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    *(u32*)(r4 + 0x1C) = (u32)r1;
    r0 = stack[18]; // [sp + 0x48]
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = 0x086B8080U; // [0x08015E80]
    *(u32*)(r4 + 0x3C) = (u32)r7;
    r0 -= 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08015CBC
    r1 = *(u32*)(r4 + 0x20);
    r0 += 0x6U;
    r0 = r1 + r0;
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    r0 += 0xAU;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = r4;
    return sub_08015C7C(r0, r1, r2, r3);
}

// ROM Address: 0x08015CD2..0x08015D30 (94 bytes, Thumb)
u32 sub_08015CD2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x4);
    r2 += 0x100U;
    r2 = *(u32*)(r2 + 0xC);
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08015CE4;
    r0 = 0x0U;
    return r0; // BX lr
loc_08015CE4:
    r2 = *(u32*)(r0 + 0x30);
    *(u32*)(r1) = (u32)r2;
    r0 = *(u32*)(r0 + 0x34);
    r0 -= 0x3U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
    r2 = *(u32*)(r0 + 0x38);
    stack[0] = r2; // [sp + 0x0]
    r4 = r1;
    r1 = r0;
    r2 = r0;
    r2 += 0x30U;
    r1 += 0x20U;
    r3 = *(u32*)(r0 + 0x1C);
    r0 = r4;
    r0 = sub_08015BB8(r0, r1, r2, r3); // 0x08015D08
    return r0;
    r5 = stack[16]; // [sp + 0x40]
    r6 = stack[15]; // [sp + 0x3C]
    r7 = stack[14]; // [sp + 0x38]
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08015D30(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08015D22: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08015D30(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08015D30..0x08015DA8 (120 bytes, Thumb)
u32 sub_08015D30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r2 = ~r2;
    r1 = r2;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r2; // [sp + 0x8]
    stack[0] = r7; // [sp + 0x0]
    r3 = 0x18; // sp + 0x18
    r1 = *(u32*)r3; r3 += 4;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = r4;
    r0 = sub_08005FBE(r0, r1, r2, r3); // 0x08015D42
    r0 = 0x08049C68U /* &VTable_08049C68 */; // [0x08015E90]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x24U;
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    *(u32*)(r4 + 0x44) = (u32)r5;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r0;
    *(u32*)(r4 + 0x34) = (u32)r0;
    *(u32*)(r4 + 0x38) = (u32)r0;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r1 = 0xFFU;
    r1 += 0x11U;
    *(u32*)(r4 + 0x40) = (u32)r0;
    *(u32*)(r1 + r4) = r0;
    r1 = 0x1U;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    stack[2] = r1; // [sp + 0x8]
    stack[1] = r5; // [sp + 0x4]
    r2 = *(u32*)(r4 + 0x28);
    stack[0] = r2; // [sp + 0x0]
    r1 = *(u32*)(r4 + 0x4);
    r3 = *(u32*)(r4 + 0x24);
    r2 = 0x4U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08015D7E: BL 0x08013E64
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x44);
    r2 = 0x0U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    stack[1] = r0; // [sp + 0x4]
    r2 = *(u32*)(r4 + 0x28);
    stack[0] = r2; // [sp + 0x0]
    r3 = *(u32*)(r4 + 0x2C);
    r2 = 0x5U;
    r3 -= 0x10U;
    r0 = 0x0U;
    r1 = *(u32*)(r4 + 0x4);
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08015D9E: BL 0x08013E64
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r4;
    return sub_08015D2C(r0, r1, r2, r3);
}

// ROM Address: 0x08015DA8..0x08015E16 (110 bytes, Thumb)
u32 sub_08015DA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x1C);
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08015DB0
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4 + 0x20);
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08015DB8
    return r0;
    r7 = 0x1U;
    r1 = 0xFFU;
    r1 += 0x11U;
    *(u32*)(r1 + r0) = r7;
    r5 = *(u32*)(r0 + 0x4C);
    r6 = r7 - 5;
    r4 = r0;
    r4 += 0x4CU;
    r2 = r6;
    r1 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08015DEE;
loc_08015DDA:
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 2);
    r3 = r3 + r4;
    r3 = *(u32*)(r3 + 0xC);
    r1 += 0x1U;
    r2 = r3 + r2;
    r2 += 0xAU;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_08015DDA;
loc_08015DEE:
    r1 = *(u32*)(r0 + 0x2C);
    r3 = *(u32*)(r0 + 0x24);
    r1 = r1 - r3;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    r1 = *(u32*)(r0 + 0x1C);
    if (cmp_lhs < cmp_rhs) return sub_08015E16(r0, r1, r2, r3);
    r2 = 0x0U;
    *(u32*)(r1 + 0x10) = (u32)r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    r1 = *(u32*)(r0 + 0x20);
    *(u32*)(r1 + 0x10) = (u32)r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    *(u32*)(r0 + 0x34) = (u32)r2;
    r1 = *(u32*)(r0 + 0x4C);
    *(u32*)(r0 + 0x38) = (u32)r1;
    r1 = *(u32*)(r0 + 0x24);
    *(u32*)(r0 + 0x48) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x08015E16..0x08015E80 (106 bytes, Thumb)
u32 sub_08015E16(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r1 + 0x10) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    r1 = *(u32*)(r0 + 0x20);
    *(u32*)(r1 + 0x10) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    r1 = *(u32*)(r0 + 0x2C);
    r2 = *(u32*)(r0 + 0x24);
    r1 = r1 - r2;
    r2 = *(u32*)(r0 + 0x34);
    r1 -= 0x28U;
    *(u32*)(r0 + 0x38) = (u32)r2;
    r7 = *(u32*)(r0 + 0x4C);
loc_08015E2E:
    r2 = *(u32*)(r0 + 0x38);
    r5 = r6;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08015E4E;
    r3 = (r2 << 1);
    r3 = r3 + r2;
    r3 = (r3 << 2);
    r3 = r3 + r4;
    r3 = *(u32*)(r3 + 0xC);
    r6 = r3 + r6;
    r6 += 0xAU;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_08015E4E;
    r2 += 0x1U;
    *(u32*)(r0 + 0x38) = (u32)r2;
    goto loc_08015E2E;
loc_08015E4E:
    r1 = r0;
    r1 += 0x24U;
    r2 = r1;
    r3 = *(u32*)(r0 + 0x24);
    r4 = *(u32*)(r0 + 0x2C);
    r2 += 0x8U;
    r1 = *(u32*)(r0 + 0x28);
    r2 = *(u32*)(r2 + 0x4);
    r3 = r3 + r4;
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 1));
    r2 = ((u32)((s32)r3 >> 1));
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[0] = r3; // [sp + 0x0]
    stack[0] = r2; // [sp + 0x0]
    r1 = r2;
    stack[2] = r2; // [sp + 0x8]
    r2 = (r5 >> 31);
    r2 = r2 + r5;
    r2 = ((u32)((s32)r2 >> 1));
    r1 = r1 - r2;
    *(u32*)(r0 + 0x48) = (u32)r1;
    return sub_08015E10(r0, r1, r2, r3);
}

// ROM Address: 0x08015E94..0x08015FF2 (350 bytes, Thumb)
u32 sub_08015E94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_08015E94:
    r1 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015F16;
    r2 = r1 - 1;
    *(u32*)(r0 + 0x3C) = (u32)r2;
    r1 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08015F16;
    *(u32*)(r0 + 0x34) = (u32)r2;
    r1 = *(u32*)(r0 + 0x1C);
    r1 = *(u32*)(r1 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015F16;
    r1 = *(u32*)(r0 + 0x2C);
    r3 = *(u32*)(r0 + 0x24);
    *(u32*)(r0 + 0x38) = (u32)r2;
    r7 = r1 - r3;
    r1 = 0x3U;
    r1 = ~r1;
    r7 -= 0x28U;
    r6 = *(u32*)(r0 + 0x4C);
    r4 = r0;
    r4 += 0x4CU;
loc_08015EC6:
    r2 = *(u32*)(r0 + 0x38);
    r5 = r1;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08015EE6;
    r3 = (r2 << 1);
    r3 = r3 + r2;
    r3 = (r3 << 2);
    r3 = r3 + r4;
    r3 = *(u32*)(r3 + 0xC);
    r1 = r3 + r1;
    r1 += 0xAU;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r7;
    if (cmp_lhs > cmp_rhs) goto loc_08015EE6;
    r2 += 0x1U;
    *(u32*)(r0 + 0x38) = (u32)r2;
    goto loc_08015EC6;
loc_08015EE6:
    r1 = r0;
    r1 += 0x24U;
    r2 = r1;
    r3 = *(u32*)(r0 + 0x24);
    r4 = *(u32*)(r0 + 0x2C);
    r2 += 0x8U;
    r1 = *(u32*)(r0 + 0x28);
    r2 = *(u32*)(r2 + 0x4);
    r3 = r3 + r4;
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 1));
    r2 = ((u32)((s32)r3 >> 1));
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[0] = r3; // [sp + 0x0]
    stack[0] = r2; // [sp + 0x0]
    r1 = r2;
    stack[2] = r2; // [sp + 0x8]
    r2 = (r5 >> 31);
    r2 = r2 + r5;
    r2 = ((u32)((s32)r2 >> 1));
    r1 = r1 - r2;
    *(u32*)(r0 + 0x48) = (u32)r1;
loc_08015F16:
    return r0; // BX lr
    r2 = *(u32*)(r0 + 0x4C);
    r1 = *(u32*)(r0 + 0x3C);
    r2 -= 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08015FA2;
    r1 += 0x1U;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    r2 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_08015FA2;
    r2 = r1 + 1;
    *(u32*)(r0 + 0x38) = (u32)r2;
    r1 = *(u32*)(r0 + 0x1C);
    r1 = *(u32*)(r1 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015FA2;
    r1 = *(u32*)(r0 + 0x2C);
    r3 = *(u32*)(r0 + 0x24);
    r4 = r0;
    r6 = r1 - r3;
    r1 = 0x3U;
    r1 = ~r1;
    r6 -= 0x28U;
    r4 += 0x4CU;
    *(u32*)(r0 + 0x34) = (u32)r2;
loc_08015F52:
    r2 = *(u32*)(r0 + 0x34);
    r5 = r1;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08015F72;
    r2 -= 0x1U;
    r3 = (r2 << 1);
    r3 = r3 + r2;
    r3 = (r3 << 2);
    r3 = r3 + r4;
    r3 = *(u32*)(r3 + 0xC);
    r1 = r3 + r1;
    r1 += 0xAU;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) goto loc_08015F72;
    *(u32*)(r0 + 0x34) = (u32)r2;
    goto loc_08015F52;
loc_08015F72:
    r1 = r0;
    r1 += 0x24U;
    r2 = r1;
    r3 = *(u32*)(r0 + 0x24);
    r4 = *(u32*)(r0 + 0x2C);
    r2 += 0x8U;
    r1 = *(u32*)(r0 + 0x28);
    r2 = *(u32*)(r2 + 0x4);
    r3 = r3 + r4;
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 1));
    r2 = ((u32)((s32)r3 >> 1));
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[0] = r3; // [sp + 0x0]
    stack[0] = r2; // [sp + 0x0]
    r1 = r2;
    stack[2] = r2; // [sp + 0x8]
    r2 = (r5 >> 31);
    r2 = r2 + r5;
    r2 = ((u32)((s32)r2 >> 1));
    r1 = r1 - r2;
    *(u32*)(r0 + 0x48) = (u32)r1;
loc_08015FA2:
    return r0; // BX lr
    r5 = *(u32*)(r0 + 0x4C);
    r2 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08015FE6;
    r4 = r0;
    r4 += 0x4CU;
    r6 = r4;
    r6 += 0xB4U;
    r7 = 0x0U;
loc_08015FBC:
    r3 = (r2 << 1);
    r3 = r3 + r2;
    r3 = (r3 << 2);
    r3 = r3 + r4;
    r3 = *(u32*)(r3 + 0x8);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08015FE0;
    *(u32*)(r0 + 0x3C) = (u32)r2;
    *(u32*)(r0 + 0x40) = (u32)r2;
    r3 = *(u32*)(r0 + 0x1C);
    r3 = *(u32*)(r3 + 0x10);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08015FE0;
    r3 = r2 - 1;
    *(u32*)(r0 + 0x34) = (u32)r3;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08015FDE;
    *(u32*)(r0 + 0x34) = (u32)r7;
loc_08015FDE:
    *(u32*)(r6 + 0x10) = (u32)r7;
loc_08015FE0:
    r2 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08015FBC;
loc_08015FE6:
    return r0; // BX lr
    r2 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08015FF2(r0, r1, r2, r3);
    goto loc_08015E94;
    return r0;
}

// ROM Address: 0x08015FF2..0x08015FFC (10 bytes, Thumb)
u32 sub_08015FF2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x20);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08015FFA;
    return sub_08015F1C(r0, r1, r2, r3);
loc_08015FFA:
    return r0; // BX lr
}

// Evidence: tools/behaviour/test_table.py::test_object_append_record1_appends_a_12_byte_record_and_clears_the_flag runs it on a crafted object: asm/Object_AppendRecord1.s:5 loads the count at +0x4C, :9-11 multiply it by 12, :12 stores count+1, :15 stores the two arguments in the record's first two words, :19-20 store the call result in its third word and :24 stores zero at +0x110; count 1 puts the record at +0x5C and the call reaches 0x0803FFE8
// ROM Address: 0x08015FFC..0x08016078 (124 bytes, Thumb)
u32 Object_AppendRecord1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 += 0x4CU;
    r3 = *(u32*)(r0);
    r4 = r3 + 1;
    r6 = r3;
    r3 = (r6 << 1);
    r3 = r3 + r6;
    r3 = (r3 << 2);
    *(u32*)(r0) = (u32)r4;
    r4 = r3 + r0;
    r4 += 0x4U;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    r0 = 0x086B8078U; // [0x08016204]
    r4 -= 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801601C
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x0U;
    r5 += 0x100U;
    *(u32*)(r5 + 0x10) = (u32)r0;
    return r0;
    r4 = r0;
    r5 = *(u32*)(r4 + 0x4C);
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08016076;
    r2 = r4;
    r2 += 0x4CU;
    r3 = (r0 << 1);
    r3 = r3 + r0;
    r3 = (r3 << 2);
    r3 = r3 + r2;
    r3 = *(u32*)(r3 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08016078(r0, r1, r2, r3);
    r1 = *(u32*)(r2);
    r1 -= 0x1U;
    *(u32*)(r2) = (u32)r1;
    r1 = r1 - r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801606E;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r5 = (r1 << 1);
    r5 = r5 + r1;
    r0 = (r0 << 2);
    r0 = r0 + r2;
    r1 = r0;
    r1 += 0x10U;
    r0 += 0x4U;
    r5 = (r5 << 2);
    r2 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0801606A: BL 0x08049138
loc_0801606E:
    r0 = 0x0U;
    r4 += 0x100U;
    *(u32*)(r4 + 0x10) = (u32)r0;
loc_08016076:
    return r0;
}

// ROM Address: 0x08016078..0x08016080 (8 bytes, Thumb)
u32 sub_08016078(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) return sub_0801603C(r0, r1, r2, r3);
    return sub_08016076(r0, r1, r2, r3);
}

// ROM Address: 0x08016080..0x08016096 (22 bytes, Thumb)
u32 sub_08016080(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x4);
    r2 += 0x100U;
    r2 = *(u32*)(r2 + 0xC);
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) return sub_08016096(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08016096..0x080160CA (52 bytes, Thumb)
u32 sub_08016096(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x48);
    *(u32*)(r1) = (u32)r2;
    r2 = *(u32*)(r0 + 0x30);
    r2 -= 0x8U;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r2 = *(u32*)(r0 + 0x34);
    r3 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_080160C6;
    r4 = r0;
    r4 += 0x4CU;
loc_080160AC:
    r3 = (r2 << 1);
    r3 = r3 + r2;
    r3 = (r3 << 2);
    r3 = r3 + r4;
    r3 = *(u32*)(r3 + 0xC);
    r5 = *(u32*)(r1);
    r2 += 0x1U;
    r3 = r3 + r5;
    r3 += 0xAU;
    *(u32*)(r1) = (u32)r3;
    r3 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_080160AC;
loc_080160C6:
    r0 = 0x1U;
    return sub_08016092(r0, r1, r2, r3);
}

// ROM Address: 0x0801611C..0x08016198 (124 bytes, Thumb)
u32 sub_0801611C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u32*)(r2 + 0x8) = (u32)r1;
    r2 = *(u32*)(r4 + 0x20);
    *(u32*)(r2 + 0x8) = (u32)r1;
    r1 = *(u32*)(r4 + 0x48);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r4 + 0x28);
    r1 += 0x3U;
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r4 + 0x30);
    r1 -= 0x3U;
    stack[6] = r1; // [sp + 0x18]
    r1 = *(u32*)(r4 + 0x30);
    r1 -= 0x5U;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r4 + 0x38);
    r5 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_08016184;
    r6 = r4;
    r6 += 0x4CU;
loc_08016146:
    r0 = (r5 << 1);
    r0 = r0 + r5;
    r0 = (r0 << 2);
    r0 = r0 + r6;
    r0 += 0x4U;
    r1 = *(u32*)(r0 + 0x8);
    r2 = stack[3]; // [sp + 0xC]
    r1 += 0x6U;
    r1 = r2 + r1;
    stack[5] = r1; // [sp + 0x14]
    r1 = r2 + 3;
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0x40);
    r2 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_08016168;
    r2 = 0x0U;
loc_08016168:
    stack[0] = r2; // [sp + 0x0]
    r3 = *(u32*)(r0);
    r0 = r7;
    r2 = 0x4; // sp + 0x4
    r1 = 0xC; // sp + 0xC
    r0 = sub_08015BB8(r0, r1, r2, r3); // 0x08016172
    r0 = stack[5]; // [sp + 0x14]
    r5 += 0x1U;
    r0 += 0x4U;
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08016146;
loc_08016184:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08016198(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08016198..0x08016202 (106 bytes, Thumb)
u32 sub_08016198(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080161AA;
    r0 = 0x0U;
    return sub_08016196(r0, r1, r2, r3);
loc_080161AA:
    r0 = 0x086B8078U; // [0x08016204]
    r5 = 0x0U;
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r1 = (r0 << 26);
    r1 = (r1 >> 31);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080161DA;
    r0 = r4;
    r0 = sub_08015E94(r0, r1, r2, r3); // 0x080161BC: BL 0x08015E94
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x100U;
    *(u32*)(r0 + 0x10) = (u32)r5;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r3 = r2 + r1;
    r2 = *(u32*)(r4 + 0x44);
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080161D4: BL __call_via_r3
    goto loc_080161FE;
loc_080161DA:
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080161FE;
    r0 = r4;
    r0 = sub_08015F1C(r0, r1, r2, r3); // 0x080161E2
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x100U;
    *(u32*)(r0 + 0x10) = (u32)r5;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r3 = r2 + r1;
    r2 = *(u32*)(r4 + 0x44);
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080161FA: BL __call_via_r3
loc_080161FE:
    r0 = 0x0U;
    return sub_08016196(r0, r1, r2, r3);
}

// ROM Address: 0x08016208..0x08016220 (24 bytes, Thumb)
u32 sub_08016208(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08016220(r0, r1, r2, r3);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08016214: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08016220(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08016220..0x08016240 (32 bytes, Thumb)
u32 sub_08016220(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049898U /* &VTable_08049898 */; // [0x080162C0]
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r5; r4 += 4;
    r4 -= 0x8U;
    r0 = 0x0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801622E: BL 0x0803D5B8
    r1 = r0;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x086B7E8CU; // [0x080162C4]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08016238
    r0 = r4;
    return sub_0801621E(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy8_stores_the_two_tables_and_frees_the_field_and_the_object
// ROM Address: 0x08016240..0x08016300 (192 bytes, Thumb)
u32 Object_Destroy8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049898U /* &VTable_08049898 */; // [0x080162C0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801624C: BL 0x0803D63C
    r0 = 0x0804929CU /* &VTable_0804929C */; // [0x080162C8]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801625E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801625A: BL 0x0803D63C
loc_0801625E:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r6 = r1;
    r0 = (r0 << 28);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080162A4;
    r0 = *(u32*)(r4 + 0x4);
    r5 = sp;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r2 = r2 + r1;
    r1 = sp;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801627A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080162A4;
    r0 = stack[0]; // [sp + 0x0]
    r2 = r5;
    r0 -= 0x10U;
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[1]; // [sp + 0x4]
    r0 -= 0x8U;
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[0]; // [sp + 0x0]
    r0 += 0x10U;
    stack[2] = r0; // [sp + 0x8]
    r0 = stack[1]; // [sp + 0x4]
    r0 += 0x10U;
    stack[3] = r0; // [sp + 0xC]
    r1 = *(u32*)(r4 + 0xC);
    r0 = r6;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x080162A0
loc_080162A4:
    return r0;
    r1 = *(u32*)(r0 + 0x8);
    r1 += 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = (r1 << 29);
    if (cmp_lhs != cmp_rhs) goto loc_080162BC;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r1 += 0x100U;
    *(u32*)(r1 + 0x10) = (u32)r0;
loc_080162BC:
    return r0; // BX lr
    r0 = r0;
    r0 = stack[152]; // [sp + 0x260]
    r4 = (r0 >> 32);
    r4 = *(u8*)(r1 + 0x1A);
    r3 = (r5 >> 1);
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    r2 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0 + 0x8);
    r3 = r0;
    r0 = 0x0U;
    r0 = sub_08016304(r0, r1, r2, r3); // 0x080162D6: BL 0x08016304
    r1 = r0;
    r0 = 0x086B8120U; // [0x08016300]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x080162E0: BL 0x0801191A
    return r0;
    r2 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0 + 0x8);
    r3 = 0x0U;
    r0 = 0x0U;
    r0 = sub_08016304(r0, r1, r2, r3); // 0x080162F0: BL 0x08016304
    r1 = r0;
    r0 = 0x086B8120U; // [0x08016300]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x080162FA: BL 0x0801191A
    return r0;
}

// ROM Address: 0x08016300..0x08016304 (4 bytes, Thumb)
u32 sub_08016300(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r4 + 0x8) = (u16)r0;
    r3 = (r5 >> 1);
    return r0;
}

// ROM Address: 0x08016304..0x08016322 (30 bytes, Thumb)
u32 sub_08016304(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08016322(r0, r1, r2, r3);
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08016314: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08016322(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08016322..0x08016384 (98 bytes, Thumb)
u32 sub_08016322(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080164B8]
    r5 = 0x086B8124U; // [0x080164BC]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x40U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r5);
    r1 = 0x40U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08016330
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08016348;
    r1 = 0x40U;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0801633C: BL 0x08011732
    r1 = 0x40U;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08016344
loc_08016348:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804A298U /* &VTable_0804A298 */; // [0x080164C0]
    r1 = 0x086B8124U; // [0x080164BC]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r6;
    *(u32*)(r4 + 0x14) = (u32)r7;
    r0 = stack[2]; // [sp + 0x8]
    r1 += 0x4U;
    r0 = (r0 << 2);
    r5 = *(u32*)(r1 + r0);
    r0 = *(u32*)(r5 + 0x4);
    r1 = ((u32)((s32)r0 >> 31));
    r1 = (r1 >> 26);
    r0 = r1 + r0;
    r0 = ((u32)((s32)r0 >> 6));
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801636A: BL 0x0803D5B8
    r1 = r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r5;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08016374
    r0 = 0x0U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = ~r0;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r4;
    return sub_0801631E(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy9_stores_the_three_tables_and_frees_the_field_and_the_object
// ROM Address: 0x08016384..0x08016424 (160 bytes, Thumb)
u32 Object_Destroy9(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804A298U /* &VTable_0804A298 */; // [0x080164C0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801639A;
    r1 = r0;
    r0 = 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r0;
loc_0801639A:
    r0 = *(u32*)(r4 + 0x24);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801639C: BL 0x0803D63C
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080164B8]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080164C4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080163B4;
    r0 = 0x086B8124U; // [0x080164BC]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080163B0
loc_080163B4:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080164C8]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080163C2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080163BE: BL 0x0803D63C
loc_080163C2:
    return r0;
    r1 = *(u32*)(r0 + 0x18);
    r1 += 0x1U;
    r2 = ((u32)((s32)r1 >> 31));
    r2 = (r2 >> 29);
    *(u32*)(r0 + 0x18) = (u32)r1;
    r1 = r2 + r1;
    r2 = *(u32*)(r0 + 0x1C);
    r1 = ((u32)((s32)r1 >> 3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_080163E4;
    r1 = r0;
    r0 = 0x086B8124U; // [0x080164BC]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080163E0
loc_080163E4:
    return r0;
    r1 = *(u32*)(r0 + 0x10);
    r4 = r0;
    r0 = *(u32*)(r1);
    r2 = *(u32*)(r0 + 0x38);
    r2 = r2 + r0;
    r0 = sp;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080163F6: BL __call_via_r3
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[0]; // [sp + 0x0]
    r2 = 0x086B8124U; // [0x080164BC]
    *(u32*)(r4 + 0x2C) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r1;
    r2 += 0x18U;
    r3 = *(u32*)(r2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) return sub_08016424(r0, r1, r2, r3);
    r3 = *(u32*)(r2 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08016424(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08016424(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08016424(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08016424..0x08016428 (4 bytes, Thumb)
u32 sub_08016424(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08016420(r0, r1, r2, r3);
}

// ROM Address: 0x08016428..0x080164B4 (140 bytes, Thumb)
u32 sub_08016428(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r1);
    r3 = 0x3U;
    r2 = r0;
    r2 += 0x8U;
    *(u32*)(r1) = (u32)r2;
    r1 = 0x2000U; // (1 << 13)
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r4 + 0x28);
    r3 = (r3 << 10);
    r2 = (r2 << 23);
    r2 = (r2 >> 7);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r4 + 0x2C);
    r1 = (r1 >> 8);
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r1 = (r1 << 8);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r4 + 0x10);
    r2 = *(u32*)(r0 + 0x4);
    r1 = *(u8*)(r1 + 0x8);
    r2 &= ~r3;
    r1 = (r1 << 26);
    r1 = (r1 >> 30);
    r1 = (r1 << 10);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r2 = *(u16*)(r4 + 0xC);
    r1 = (r1 >> 10);
    r1 = (r1 << 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = *(u32*)(r4 + 0x18);
    r1 = ((u32)((s32)r0 >> 31));
    r1 = (r1 >> 29);
    r0 = r1 + r0;
    r5 = ((u32)((s32)r0 >> 3));
    r0 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0801649C;
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x080164CC]
    r2 = (r5 << 6);
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = *(u32*)(r4 + 0x24);
    r1 = r1 + r2;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08016496: BL 0x08049138
    *(u32*)(r4 + 0x20) = (u32)r5;
loc_0801649C:
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_080164B4(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080164AC: BL 0x08046AA2
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080164B4..0x080164B8 (4 bytes, Thumb)
u32 sub_080164B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_080164B2(r0, r1, r2, r3);
}

// ROM Address: 0x080164D0..0x08016714 (580 bytes, Thumb)
u32 sub_080164D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 += 0xFFU;
    r1 += 0x35U;
    r2 = 0x284U; // (161 << 2)
    r3 = 0x0U;
    r2 = r0 + r2;
    *(u32*)(r1) = (u32)r3;
    r5 = 0x083BD2F8U; // [0x08016790]
    r4 = 0x086B8284U; // [0x0801678C]
    *(u32*)(r2) = (u32)r3;
    r0 = 0x0U;
loc_080164EA:
    r3 = *(u32*)(r4 + 0xC);
    r3 = r3 + r0;
    r3 = *(u8*)(r3 + 0x2);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801651A;
    r3 = 0x34U;
    r3 *= r0;
    r3 = r3 + r5;
    r3 = *(u8*)(r3);
    r3 = (r3 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801650E;
    r3 = *(u32*)(r2);
    r6 = r3 + 1;
    r3 = (r3 << 2);
    r3 = r3 + r2;
    *(u32*)(r2) = (u32)r6;
    *(u32*)(r3 + 0x4) = (u32)r0;
    goto loc_0801651A;
loc_0801650E:
    r3 = *(u32*)(r1);
    r6 = r3 + 1;
    r3 = (r3 << 2);
    r3 = r3 + r1;
    *(u32*)(r1) = (u32)r6;
    *(u32*)(r3 + 0x4) = (u32)r0;
loc_0801651A:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 83;
    if (cmp_lhs < cmp_rhs) goto loc_080164EA;
    return r0; // BX lr
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801653A;
    r0 = 0x3D4U; // (245 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801652E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801653A;
    r0 = r4;
    return r0;
loc_0801653A:
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x08016794]
    r1 = 0x0U;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    r4 -= 0x8U;
    r0 = r4;
    r0 += 0x100U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r2 = 0x08049D48U /* &VTable_08049D48 */; // [0x08016798]
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u32*)(r4) = (u32)r2;
    r2 = 0xFFU;
    r2 += 0x35U;
    *(u32*)(r2 + r4) = r1;
    r2 = 0x284U; // (161 << 2)
    r2 = r4 + r2;
    *(u32*)(r2) = (u32)r1;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    *(u32*)(r0 + 0x24) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r1;
    r1 = 0x2U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r0 = r4;
    r0 = sub_080164D0(r0, r1, r2, r3); // 0x0801656C: BL 0x080164D0
    r0 = r4;
    return r0;
    r7 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801679C]
    r4 = r0;
    r0 = *(u32*)(r7 + 0x68);
    r5 = *(u32*)(r7 + 0x5C);
    stack[8] = r0; // [sp + 0x20]
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x0U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08016598: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080165A0
    r6 = 0x086B8284U; // [0x0801678C]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x8);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x080165BC
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080165C4
    r1 = r5;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x080165CC
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080165EA: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080165F2
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[8]; // [sp + 0x20]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r2 = r5;
    r2 += 0x10U;
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08016610
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016618
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x6U;
    r1 = r4;
    r3 = 0x8U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08016634: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801663C
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x7U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x7U;
    r1 = r4;
    r3 = 0xD0U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08016658: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016660
    r3 = *(u32*)(r7 + 0x70);
    r2 = *(u32*)(r6 + 0x8);
    stack[0] = r3; // [sp + 0x0]
    r1 = 0x0U;
    r5 = 0x14U;
    r3 = r5;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x2U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x22U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801667E
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016686
    r3 = 0x90U;
    r3 = *(u32*)(r7 + r3);
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x2U;
    stack[0] = r3; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xCEU;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x080166A2
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080166AA
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x28U;
    r1 = 0x1U;
    r6 = 0xD4U;
    r3 = r6;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x2U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x2U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080166C8: BL 0x08013E64
    r5 = r4;
    r5 += 0x100U;
    *(u32*)(r5 + 0x28) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080166D8
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x70U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x3U;
    r3 = r6;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x3U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080166F4: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080166FE
    r0 = 0x20U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x1U;
    r1 = 0x1U;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x22U;
    r2 = 0x0U;
    stack[7] = r2; // [sp + 0x1C]
    stack[3] = r1; // [sp + 0xC]
    return r0;
}

// ROM Address: 0x08016718..0x08016748 (48 bytes, Thumb)
u32 sub_08016718(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x18U;
    stack[4] = r2; // [sp + 0x10]
    stack[0] = r1; // [sp + 0x0]
    r3 = r6;
    r1 = r4;
    r2 = 0x0U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    stack[1] = r6; // [sp + 0x4]
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x0801672A
    r1 = r0;
    *(u32*)(r5 + 0x14) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016734
    r0 = *(u32*)(r5 + 0x14);
    r2 = 0x1U;
    r1 = *(u32*)(r0 + 0x28);
    r0 = *(u32*)(r0 + 0x20);
    stack[7] = r2; // [sp + 0x1C]
    r3 = r1 - r0;
    r0 = 0x20U;
    stack[5] = r0; // [sp + 0x14]
    return r0;
}

// ROM Address: 0x0801674A..0x0801678C (66 bytes, Thumb)
u32 sub_0801674A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x23U;
    stack[3] = r1; // [sp + 0xC]
    r3 += 0x1CU;
    stack[4] = r3; // [sp + 0x10]
    r1 = r0;
    r2 = 0x0U;
    stack[1] = r2; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r3 = r6;
    r1 = r4;
    r2 = 0x1U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x08016768
    r1 = r0;
    *(u32*)(r5 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016772
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0801677A: BL 0x08016208
    r1 = r0;
    *(u32*)(r5 + 0x30) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016784
    return r0;
}

// ROM Address: 0x0801678C..0x0801678E (2 bytes, Thumb)
u32 sub_0801678C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r0 + 0x14) = (u16)r4;
    return r0;
}

// ROM Address: 0x0801678E..0x08016800 (114 bytes, Thumb)
u32 sub_0801678E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r5 >> 1);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08016784(r0, r1, r2, r3);
    r3 = (r7 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r5 = stack[72]; // [sp + 0x120]
    r4 = (r0 >> 32);
    r6 = (r0 >> 32);
    r4 = r1;
    r1 = 0x1U;
    *(u8*)(r4 + 0x2) = (u8)r1;
    r1 = 0x0803F5A5U; // [0x08016A94]
    r3 = 0x3FC; // sp + 0x3FC
    *(u32*)(r4 + 0x20) = (u32)r1;
    r1 = 0x086B8284U; // [0x08016A98]
    r5 = r0;
    r1 = *(u32*)(r1 + 0x8);
    r5 += 0xFFU;
    *(u32*)(r4 + 0xC) = (u32)r1;
    r1 = *(u32*)(r3 + 0x2C);
    r5 += 0x1U;
    r1 = *(u32*)(r1);
    r6 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08016A9C]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08016800(r0, r1, r2, r3);
    r0 = 0x1U;
    *(u8*)(r4) = (u8)r0;
    r0 = 0x78U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x58U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r1 = *(u32*)(r5 + 0x1C);
    r0 = 0x4BU;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080167E0;
    r0 = 0x4CU;
loc_080167E0:
    r0 = (r0 << 2);
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x080167E6
    r0 = *(u32*)(r5 + 0x28);
    r1 = 0x0U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r0 = *(u32*)(r5 + 0x2C);
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0;
}

// ROM Address: 0x08016800..0x08016928 (296 bytes, Thumb)
u32 sub_08016800(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5 + 0x28);
    r2 = 0x1U;
    *(u32*)(r1 + 0x10) = (u32)r2;
    r1 = *(u32*)(r5 + 0x28);
    r3 = *(u32*)(r5 + 0x24);
    r0 = r2;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08016812;
    r0 = 0x0U;
loc_08016812:
    *(u32*)(r1 + 0x8) = (u32)r0;
    r0 = *(u32*)(r5 + 0x2C);
    r3 = 0x3FC; // sp + 0x3FC
    *(u32*)(r0 + 0x10) = (u32)r2;
    r1 = *(u32*)(r3 + 0x2C);
    r0 = *(u32*)(r5 + 0x2C);
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r5 + 0x24);
    r1 -= 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_0801682C;
    r1 = 0x1U;
    goto loc_0801682E;
loc_0801682C:
    r1 = 0x0U;
loc_0801682E:
    *(u32*)(r0 + 0x8) = (u32)r1;
    r0 = *(u32*)(r5 + 0x24);
    r1 = *(u32*)(r5 + 0x20);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801683A;
    *(u32*)(r5 + 0x20) = (u32)r0;
loc_0801683A:
    r1 = *(u32*)(r5 + 0x20);
    r0 -= 0x4U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08016844;
    *(u32*)(r5 + 0x20) = (u32)r0;
loc_08016844:
    r3 = 0x70U;
    r2 = 0x37U;
    r1 = 0xDBU;
    r0 = r4;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x0801684C
    r0 = 0x0U;
    *(u8*)(r4) = (u8)r0;
    r7 = 0x0U;
loc_08016856:
    r0 = *(u32*)(r5 + 0x20);
    r3 = 0x3FC; // sp + 0x3FC
    r2 = r0 + r7;
    *(u32*)(r3 + 0x18) = (u32)r2;
    r1 = *(u32*)(r3 + 0x2C);
    r0 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_080167F8(r0, r1, r2, r3);
    r2 = *(u32*)(r3 + 0x18);
    r1 = *(u32*)(r3 + 0x2C);
    r0 = (r2 << 2);
    r0 = r0 + r1;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x34U;
    r0 *= r1;
    *(u32*)(r3 + 0x14) = (u32)r1;
    r1 = 0x083BD2F8U; // [0x08016AA0]
    r6 = r0 + r1;
    r0 = *(u32*)(r6 + 0x28);
    r1 = 0x10; // sp + 0x10
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0801687E
    r1 = *(u32*)(r6 + 0x1C);
    r2 = (r7 << 3);
    r0 = (r1 >> 31);
    r0 = r0 + r1;
    r12 = r1;
    r1 = 0x25U;
    r0 = ((u32)((s32)r0 >> 1));
    r0 = r1 - r0;
    stack[0] = r0; // [sp + 0x0]
    r0 = *(u32*)(r6 + 0x20);
    r2 = r2 + r7;
    r2 = (r2 << 1);
    r3 = 0x3FC; // sp + 0x3FC
    r1 = (r0 >> 31);
    r1 = r1 + r0;
    *(u32*)(r3 + 0x20) = (u32)r2;
    r2 += 0x34U;
    r1 = ((u32)((s32)r1 >> 1));
    r1 = r2 - r1;
    r2 = stack[0]; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    r1 += r12;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[1]; // [sp + 0x4]
    r2 = sp;
    r0 = r1 + r0;
    stack[3] = r0; // [sp + 0xC]
    r0 = r4;
    r1 = 0x10; // sp + 0x10
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x080168BE
    r0 = 0x086B8284U; // [0x08016A98]
    r3 = 0x3FC; // sp + 0x3FC
    r1 = *(u32*)(r3 + 0x14);
    r0 = *(u32*)(r0 + 0xC);
    r0 = r0 + r1;
    *(u32*)(r3 + 0x1C) = (u32)r0;
    r0 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) goto loc_080168D8;
    r0 = *(u16*)(r6 + 0x6);
    goto loc_080168DA;
loc_080168D8:
    r0 = *(u16*)(r6 + 0x4);
loc_080168DA:
    r6 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08016A9C]
    r0 = (r0 << 2);
    r1 = *(u32*)(r6 + r0);
    r0 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_080168F4;
    r3 = 0x3FC; // sp + 0x3FC
    r0 = *(u32*)(r5 + 0x24);
    r2 = *(u32*)(r3 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080168F4;
    r0 = 0x6U;
    goto loc_080168F6;
loc_080168F4:
    r0 = 0x2U;
loc_080168F6:
    *(u8*)(r4 + 0x3) = (u8)r0;
    r3 = 0x3FC; // sp + 0x3FC
    r0 = *(u32*)(r3 + 0x20);
    r2 = 0x38U;
    r0 += 0x38U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r2;
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08016906
    r3 = 0x3FC; // sp + 0x3FC
    r0 = *(u32*)(r3 + 0x1C);
    r2 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) goto loc_08016920;
    r0 = 0x274U; // (157 << 2)
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801691C
loc_08016920:
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 5;
    if (cmp_lhs < cmp_rhs) goto loc_08016856;
    return sub_080167F8(r0, r1, r2, r3);
}

// ROM Address: 0x08016928..0x0801694A (34 bytes, Thumb)
u32 sub_08016928(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r0;
    r3 += 0x134U;
    r2 = r3;
    r2 -= 0x34U;
    r4 = *(u32*)(r2 + 0x1C);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08016940;
    r3 = 0x284U; // (161 << 2)
    r3 = r0 + r3;
loc_08016940:
    r0 = *(u32*)(r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801694A(r0, r1, r2, r3);
    return r0; // BX lr
}

// ROM Address: 0x0801694A..0x08016962 (24 bytes, Thumb)
u32 sub_0801694A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x14U;
    *(u32*)(r1) = (u32)r0;
    r0 = *(u32*)(r2 + 0x24);
    r2 = *(u32*)(r2 + 0x20);
    r0 = r0 - r2;
    r3 = (r0 << 3);
    r0 = r3 + r0;
    r0 = (r0 << 1);
    r0 += 0x36U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return sub_08016946(r0, r1, r2, r3);
}

// ROM Address: 0x0801699C..0x08016A92 (246 bytes, Thumb)
u32 sub_0801699C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x284U; // (161 << 2)
    r2 = r4 + r0;
    r1 = r5;
    r0 = r4;
    r0 = sub_080167A0(r0, r1, r2, r3); // 0x080169A6
    r1 = 0x1F0; // sp + 0x1F0
    r0 = r4;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x080169AE
    r7 = 0x10; // sp + 0x10
    r0 = 0x086B8284U; // [0x08016A98]
    r1 = r7;
    r0 += 0x10U;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080169BA
    r0 = 0x086B8284U; // [0x08016A98]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 += 0x16U;
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r4 = 0x29U;
    r0 *= r4;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r6 = r0;
    r3 = 0x68U;
    r0 = 0x086B8284U; // [0x08016A98]
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 += 0x1AU;
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r0 *= r4;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r5 = r0;
    r4 = r4 - r6;
    if (cmp_lhs == cmp_rhs) goto loc_08016A2E;
    r6 = r7 + r6;
    r0 = r6;
    r0 += 0x3EU;
    r2 = r4;
    r1 = 0x1U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08016A12: BL 0x08046E40
    r0 = r6;
    r0 += 0x72U;
    r2 = r4;
    r1 = 0x1U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08016A1E: BL 0x08046E40
    r0 = r6;
    r0 += 0xA6U;
    r2 = r4;
    r1 = 0x1U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08016A2A: BL 0x08046E40
loc_08016A2E:
    r4 = 0x29U;
    r4 = r4 - r5;
    if (cmp_lhs == cmp_rhs) goto loc_08016A60;
    r5 = r7 + r5;
    r0 = r5;
    r0 += 0x10EU;
    r2 = r4;
    r1 = 0x1U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08016A40: BL 0x08046E40
    r0 = r5;
    r0 += 0x142U;
    r2 = r4;
    r1 = 0x1U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08016A4E: BL 0x08046E40
    r0 = r5;
    r0 += 0x176U;
    r2 = r4;
    r1 = 0x1U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08016A5C: BL 0x08046E40
loc_08016A60:
    r0 = 0xACU;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x88U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xE1U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x91U;
    stack[3] = r0; // [sp + 0xC]
    r1 = r7;
    r5 = 0x1F0; // sp + 0x1F0
    r0 = r5;
    r2 = sp;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x08016A78
    r1 = 0x06000040U; // [0x08016AA4]
    r0 = r5;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08016A80: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x1F0; // sp + 0x1F0
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08016A88: BL 0x0803F58C
    return r0;
}

// ROM Address: 0x08016ABC..0x08016AFE (66 bytes, Thumb)
u32 sub_08016ABC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r5 = (r2 << 1);
    r1 = (r5 << 2);
    r4 = (r7 << 2);
    r6 = (r1 << 3);
    r6 = (r1 << 3);
    r3 = (r4 << 1);
    r1 = (r1 << 2);
    r0 = 0x086B8284U; // [0x08016CCC]
    r7 = 0x0U;
    r5 = 0x000005C4U; // [0x08016CD4]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r7;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x08016CD0]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08016ADC
    r6 = r4;
    r6 += 0x134U;
    r5 = r6;
    r5 -= 0x34U;
    r0 = *(u32*)(r5 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08016AF6;
    r0 = 0x284U; // (161 << 2)
    r6 = r4 + r0;
loc_08016AF6:
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08016AFE(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08016AFE..0x08016B66 (104 bytes, Thumb)
u32 sub_08016AFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5 + 0x30);
    r0 = 0x8U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08016B0C: BL 0x08046AA2
    r0 = *(u32*)(r5 + 0x24);
    r0 = (r0 << 2);
    r0 = r0 + r6;
    r2 = *(u32*)(r0 + 0x4);
    r0 = 0xFFU;
    r0 += 0x19U;
    stack[0] = r2; // [sp + 0x0]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08016B1E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08016B40;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08016CD8]
    r2 = 0x0804ACB4U /* &VTable_0804ACB4 */; // [0x08016CDC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    *(u32*)(r1 + 0x10) = (u32)r7;
    *(u32*)(r0) = (u32)r2;
    r2 = stack[0]; // [sp + 0x0]
    *(u32*)(r1 + 0x14) = (u32)r2;
loc_08016B40:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08016B40
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08016B62;
    r0 = r4;
    r0 = sub_080164D0(r0, r1, r2, r3); // 0x08016B4A: BL 0x080164D0
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r5 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_08016B5A;
    r0 -= 0x1U;
    *(u32*)(r5 + 0x24) = (u32)r0;
loc_08016B5A:
    r0 = *(u32*)(r5 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08016B62;
    *(u32*)(r5 + 0x24) = (u32)r7;
loc_08016B62:
    r0 = 0x0U;
    return sub_08016AFC(r0, r1, r2, r3);
}

// ROM Address: 0x08016C5E..0x08016CCC (110 bytes, Thumb)
u32 sub_08016C5E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r3);
    r2 = *(u16*)(r1 + 0x4);
    r1 = (r2 << 28);
    r4 = (r1 >> 31);
    r1 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08016C84;
    r4 = 0x08319488U; // [0x08016CD0]
    r0 = *(u32*)(r3 + 0x4);
    r3 = r1;
    r1 = r4;
    r4 = 0x000005C4U; // [0x08016CD4]
    r2 = 0x40U;
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08016C7C
    r0 = 0x1U;
    return r0;
loc_08016C84:
    r2 = (r2 << 26);
    r4 = (r2 >> 31);
    r0 += 0x100U;
    r2 = 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08016CA8;
    r4 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08016CA8;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r1;
    *(u32*)(r0 + 0x24) = (u32)r1;
    r4 = *(u32*)(r0 + 0x14);
    *(u32*)(r4 + 0x38) = (u32)r2;
    r4 = *(u32*)(r0 + 0x18);
    *(u32*)(r4 + 0x38) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_08016CA8:
    r3 = *(u32*)(r3);
    r3 = *(u16*)(r3 + 0x4);
    r3 = (r3 << 27);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08016CC8;
    r3 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08016CC8;
    *(u32*)(r0 + 0x20) = (u32)r1;
    *(u32*)(r0 + 0x1C) = (u32)r2;
    *(u32*)(r0 + 0x24) = (u32)r1;
    r3 = *(u32*)(r0 + 0x14);
    *(u32*)(r3 + 0x38) = (u32)r1;
    r3 = *(u32*)(r0 + 0x18);
    *(u32*)(r3 + 0x38) = (u32)r2;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_08016CC8:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08016CCC..0x08016CCE (2 bytes, Thumb)
u32 sub_08016CCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r0 + 0x14) = (u16)r4;
    return r0;
}

// ROM Address: 0x08016CCE..0x08017036 (872 bytes, Thumb)
u32 sub_08016CCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r5 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = 0x2D0; // sp + 0x2D0
    r4 = (r0 >> 32);
    stack[88] = r7; // [sp + 0x160]
    r4 = (r0 >> 32);
    stack[136] = r5; // [sp + 0x220]
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08016FB0]
    r5 = *(u32*)(r0 + 0x5C);
    r7 = *(u32*)(r0 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x0U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08016D0A: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016D12
    r6 = 0x086B82DCU; // [0x08016FB4]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x8);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08016D2E
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016D36
    r1 = r5;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08016D3E
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08016D5C: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016D64
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = r5;
    r2 += 0x10U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08016D80
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016D88
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x6U;
    r1 = r4;
    r3 = 0x8U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08016DA4: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016DAC
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x7U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x7U;
    r1 = r4;
    r3 = 0xD0U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08016DC8: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016DD0
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08016FB0]
    r0 = 0x84U;
    r3 = *(u32*)(r1 + r0);
    r2 = *(u32*)(r6 + 0x8);
    stack[0] = r3; // [sp + 0x0]
    r1 = 0x0U;
    r5 = 0x14U;
    r3 = r5;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x2U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x22U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08016DF2
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016DFA
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08016FB0]
    r1 = 0x2U;
    r3 = *(u32*)(r0 + 0x8);
    r2 = *(u32*)(r6 + 0x8);
    stack[0] = r3; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xCEU;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08016E16
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016E1E
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x08016E26: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08016E2E
    return r0;
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0x14);
    r2 = 0x12U;
    r0 = (r0 << 4);
    r0 += 0x24U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    *(u32*)(r1) = (u32)r2;
    r0 = 0x1U;
    return r0; // BX lr
    r4 = 0x114; // sp + 0x114
    r6 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = r4;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08016E58
    r7 = 0x1U;
    r3 = r7;
    r2 = 0x24U;
    r1 = r4;
    r0 = r6;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x08016E66
    r3 = 0x56U;
    r2 = 0x21U;
    r1 = 0xA5U;
    r0 = r4;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x08016E72
    r3 = 0xE0U;
    r2 = 0x5EU;
    r1 = 0x10U;
    r0 = r4;
    r0 = sub_08005154(r0, r1, r2, r3); // 0x08016E7E
    r0 = 0x086B82DCU; // [0x08016FB4]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r5 = r0 + r1;
    r0 = r5;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x08016E96
    r0 = 0x086B82DCU; // [0x08016FB4]
    r3 = 0x100; // sp + 0x100
    r0 = *(u32*)(r0 + 0x8);
    stack[72] = r0; // [sp + 0x120]
    r0 = 0x0U;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x08016FB8]
    *(u8*)(r3 + 0x16) = (u8)r7;
    stack[77] = r0; // [sp + 0x134]
    r0 = 0xAFU;
    stack[70] = r0; // [sp + 0x118]
    r0 = 0x2DU;
    stack[71] = r0; // [sp + 0x11C]
    r0 = r5;
    r0 += 0x4CU;
    r2 = *(u16*)(r0);
    r7 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08016FB0]
    r0 = 0xDCU;
    r1 = *(u32*)(r7 + r0);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08016EC2
    r0 = 0xAFU;
    stack[70] = r0; // [sp + 0x118]
    r0 = 0x39U;
    stack[71] = r0; // [sp + 0x11C]
    r0 = r5;
    r0 += 0x4EU;
    r2 = *(u16*)(r0);
    r0 = 0xE8U;
    r1 = *(u32*)(r7 + r0);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08016EDA
    r0 = 0xAFU;
    stack[70] = r0; // [sp + 0x118]
    r0 = 0x45U;
    stack[71] = r0; // [sp + 0x11C]
    r0 = r5;
    r0 += 0x50U;
    r2 = *(u16*)(r0);
    r0 = 0xF4U;
    r1 = *(u32*)(r7 + r0);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08016EF2
    r0 = 0xAFU;
    stack[70] = r0; // [sp + 0x118]
    r0 = 0x51U;
    stack[71] = r0; // [sp + 0x11C]
    r0 = r5;
    r0 += 0x54U;
    r2 = *(u16*)(r0);
    r0 = 0xFFU;
    r0 += 0x1U;
    r1 = *(u32*)(r7 + r0);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08016F0C
    r0 = r6;
    r0 += 0xFFU;
    r4 = 0x0U;
    r0 += 0x1U;
    stack[82] = r0; // [sp + 0x148]
loc_08016F1A:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 += 0x3CU;
    r0 = *(u32*)(r0);
    r3 = 0x2CU;
    r1 = 0x086F82ECU; // [0x08016FBC]
    r0 *= r3;
    r6 = r0 + r1;
    r7 = (r4 << 4);
    r0 = r7;
    r0 += 0x28U;
    r1 = 0x22U;
    stack[70] = r1; // [sp + 0x118]
    stack[71] = r0; // [sp + 0x11C]
    r0 = *(u16*)(r6);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08016FB0]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r1 = 0x7AU;
    r0 = 0x114; // sp + 0x114
    r0 = sub_0803DCC4(r0, r1, r2, r3); // 0x08016F42
    r0 = r7;
    r0 += 0x1CU;
    stack[66] = r0; // [sp + 0x108]
    r0 = 0x20U;
    stack[67] = r0; // [sp + 0x10C]
    r0 = stack[66]; // [sp + 0x108]
    r1 = 0x10U;
    r0 = r0 + r1;
    stack[65] = r1; // [sp + 0x104]
    stack[68] = r0; // [sp + 0x110]
    r7 = 0x4; // sp + 0x4
    r1 = r7;
    r0 = *(u32*)(r6 + 0x10);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08016F60
    r2 = 0x104; // sp + 0x104
    r1 = r7;
    r0 = 0x114; // sp + 0x114
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x08016F6A
    r0 = stack[82]; // [sp + 0x148]
    r0 = *(u32*)(r0 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08016F94;
    r0 = 0x13U;
    stack[70] = r0; // [sp + 0x118]
    r0 = 0x6AU;
    stack[71] = r0; // [sp + 0x11C]
    r0 = 0xCU;
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x15) = (u8)r0;
    r0 = *(u16*)(r6 + 0x2);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08016FB0]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r1 = 0xCCU;
    r0 = 0x114; // sp + 0x114
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x08016F90
loc_08016F94:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_08016F1A;
    r1 = 0x06000040U; // [0x08016FC0]
    r0 = 0x114; // sp + 0x114
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08016F9E: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x114; // sp + 0x114
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08016FA6: BL 0x0803F58C
    return r0;
    r0 = r0;
    r6 = (r0 >> 32);
    *(u16*)(r3 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r3 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r1 = 0x086B82DCU; // [0x08017100]
    r5 = r0;
    r0 = 0x000005C4U; // [0x080170FC]
    r1 = *(u32*)(r1 + 0x4);
    r3 = 0x0U;
    r0 = r1 + r0;
    r1 = 0x08319488U; // [0x08017104]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08017036(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08017050(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 6;
    if (cmp_lhs == cmp_rhs) return sub_08017060(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) return sub_08017074(r0, r1, r2, r3);
    r4 = r3;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08016FE8
    r0 = 0xFFU;
    r0 += 0x21U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08016FF0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801702E;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08017108]
    r2 = 0xFFU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    r3 = 0x0804BF28U /* &VTable_0804BF28 */; // [0x0801710C]
    *(u32*)(r1 + 0x10) = (u32)r4;
    r2 += 0x15U;
    *(u32*)(r2 + r0) = r3;
    r2 = 0x080498F0U /* &VTable_080498F0 */; // [0x08017110]
    r3 = 0x03001914U; // [0x08017114]
    *(u32*)(r0) = (u32)r2;
    r2 += 0x38U;
    *(u32*)(r1 + 0x14) = (u32)r2;
    r2 = *(u8*)(r3);
    r1 += 0x18U;
    *(u8*)(r1) = (u8)r2;
    r2 = *(u8*)(r3 + 0x1);
    *(u8*)(r1 + 0x1) = (u8)r2;
    r2 = *(u8*)(r3 + 0x2);
    *(u8*)(r1 + 0x2) = (u8)r2;
    r2 = *(u8*)(r3 + 0x3);
    *(u8*)(r1 + 0x3) = (u8)r2;
loc_0801702E:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801702E
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08017036..0x08017078 (66 bytes, Thumb)
u32 sub_08017036(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08017038
    r5 += 0x100U;
    r1 = *(u32*)(r5 + 0x14);
    r0 = 0x0U;
    r0 = sub_0801D674(r0, r1, r2, r3); // 0x08017044
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08017048
    r0 = 0x1U;
    return sub_08017034(r0, r1, r2, r3);
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08017052
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x08017058
    r0 = 0x1U;
    return sub_08017034(r0, r1, r2, r3);
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08017062
    r0 = 0x0U;
    r0 = sub_08016524(r0, r1, r2, r3); // 0x08017068
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801706C
    r0 = 0x1U;
    return sub_08017034(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08017034(r0, r1, r2, r3);
}

// ROM Address: 0x08017078..0x080170A8 (48 bytes, Thumb)
u32 sub_08017078(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x086B82DCU; // [0x08017100]
    r4 = 0x000005C4U; // [0x080170FC]
    r1 = *(u32*)(r3);
    r5 = r3;
    r1 = *(u16*)(r1 + 0x4);
    r5 = *(u32*)(r5 + 0x4);
    r7 = 0x0U;
    r5 = r5 + r4;
    r2 = (r1 << 28);
    r2 = (r2 >> 31);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r4 = 0x083192A8U; // [0x08017118]
    if (cmp_lhs == cmp_rhs) return sub_080170A8(r0, r1, r2, r3);
    r1 = r4;
    r1 += 0x1E0U;
    r3 = r7;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080170A0
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080170A8..0x080170FA (82 bytes, Thumb)
u32 sub_080170A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x08319488U; // [0x08017104]
    r4 = r0;
    r4 += 0xFFU;
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    r4 += 0x1U;
    r6 -= 0xCU;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080170D2;
    r1 = r6;
    r3 = r7;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080170C2
    r0 = *(u32*)(r4 + 0x14);
    r0 += 0x3U;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r7;
loc_080170D2:
    r0 = 0x086B82DCU; // [0x08017100]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080170F6;
    r1 = r6;
    r3 = r7;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080170E6
    r0 = *(u32*)(r4 + 0x14);
    r0 += 0x1U;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r7;
loc_080170F6:
    r0 = 0x0U;
    return sub_080170A6(r0, r1, r2, r3);
}

// ROM Address: 0x080170FA..0x0801710C (18 bytes, Thumb)
u32 sub_080170FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = (r0 << 23);
    r0 = r0;
    *(u16*)(r3 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0801710E..0x08017350 (578 bytes, Thumb)
u32 sub_0801710E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    r4 = r2 + r4;
    r0 = (r0 << 12);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08017126: BL 0x08046AA2
    return r0;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08017136: BL 0x08046AA2
    return r0;
    r0 = *(u16*)(r0 + 0xE);
    r1 = 0x086B6BDCU; // [0x0801715C]
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 -= 0x40U;
    r0 = *(u32*)(r0 + 0x18);
    return r0; // BX lr
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08017154: BL 0x08046AA2
    return r0;
    r0 = r0;
    r4 = *(u32*)(r3 + 0x3C);
    r3 = (r5 >> 1);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08017174;
    r0 = 0xFFU;
    r0 += 0x2DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801716C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080171A6;
loc_08017174:
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x080174D0]
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    r3 = 0x0804B024U /* &VTable_0804B024 */; // [0x080174D4]
    *(u32*)(r1 + 0x10) = (u32)r2;
    *(u32*)(r0) = (u32)r3;
    *(u32*)(r1 + 0x20) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r4;
    r3 = 0x68U;
    *(u32*)(r1 + 0x1C) = (u32)r2;
    r2 = 0x086B87FCU; // [0x080174D8]
    r3 *= r4;
    r2 = *(u32*)(r2 + 0xC);
    r2 = r3 + r2;
    r3 = 0x4F8U; // (159 << 3)
    r2 = r2 + r3;
    r2 = *(u8*)(r2 + 0xC);
    *(u32*)(r1 + 0x18) = (u32)r2;
loc_080171A6:
    return r0;
    r5 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080174DC]
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080174DC]
    r5 = *(u32*)(r5 + 0x5C);
    r7 = *(u32*)(r0 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x0U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080171CC: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080171D4
    r6 = 0x086B87FCU; // [0x080174D8]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x8);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x080171F0
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080171F8
    r1 = r5;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08017200
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801721E: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08017226
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = r5;
    r2 += 0x10U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08017242
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801724A
    r5 = r4;
    r5 += 0x100U;
    r0 = *(u32*)(r5 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs <= cmp_rhs) goto loc_080172A8;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x28U;
    r1 = 0x0U;
    r7 = 0xD4U;
    r3 = r7;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x2U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x2U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08017274: BL 0x08013E64
    *(u32*)(r5 + 0x24) = (u32)r0;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x70U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x3U;
    r3 = r7;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x3U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08017292: BL 0x08013E64
    *(u32*)(r5 + 0x28) = (u32)r0;
    r1 = *(u32*)(r5 + 0x24);
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801729C
    r0 = r4;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080172A4
loc_080172A8:
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x6U;
    r1 = r4;
    r3 = 0x8U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080172C0: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080172C8
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x7U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x7U;
    r1 = r4;
    r3 = 0xD0U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080172E4: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080172EC
    r5 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080174DC]
    r1 = 0x0U;
    r3 = *(u32*)(r5 + 0x78);
    r2 = *(u32*)(r6 + 0x8);
    stack[0] = r3; // [sp + 0x0]
    r7 = 0x14U;
    r3 = r7;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x2U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x22U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801730C
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08017314
    r0 = 0x84U;
    r3 = *(u32*)(r5 + r0);
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x2U;
    stack[0] = r3; // [sp + 0x0]
    r3 = r7;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xCEU;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08017330
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08017338
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x08017340: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08017348
    return r0;
}

// ROM Address: 0x08017350..0x080173D6 (134 bytes, Thumb)
u32 sub_08017350(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x128; // sp + 0x128
    r4 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = r6;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801735E
    r5 = 0x1U;
    r3 = r5;
    r2 = 0x1CU;
    r1 = r6;
    r0 = r4;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x0801736C
    r7 = 0x086B87FCU; // [0x080174D8]
    r4 += 0x100U;
    r0 = *(u32*)(r7 + 0xC);
    r1 = *(u32*)(r4 + 0x14);
    r3 = 0x68U;
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r2 = r0 + r1;
    stack[73] = r2; // [sp + 0x124]
    r0 = *(u32*)(r4 + 0x20);
    r3 = *(u32*)(r4 + 0x1C);
    r1 = r0;
    r1 &= ~r5;
    r2 = r1;
    r1 -= 0x4U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0801739A;
    *(u32*)(r4 + 0x1C) = (u32)r1;
loc_0801739A:
    r1 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_080173A2;
    *(u32*)(r4 + 0x1C) = (u32)r2;
loc_080173A2:
    r2 = *(u32*)(r4 + 0x1C);
    r1 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080173AC;
    *(u32*)(r4 + 0x1C) = (u32)r1;
loc_080173AC:
    r1 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs <= cmp_rhs) return sub_080173FE(r0, r1, r2, r3);
    r1 = r5;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    r2 = *(u32*)(r4 + 0x24);
    if (cmp_lhs >= cmp_rhs) goto loc_080173BC;
    r1 = 0x0U;
loc_080173BC:
    *(u32*)(r2 + 0x8) = (u32)r1;
    r1 = *(u32*)(r4 + 0x20);
    r0 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r4 + 0x18);
    r1 = (r1 >> 1);
    r2 -= 0x1U;
    r2 = (r2 >> 1);
    r2 = (r2 << 1);
    r1 = (r1 << 1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_080173D6(r0, r1, r2, r3);
    r1 = 0x1U;
    return sub_080173D8(r0, r1, r2, r3);
}

// ROM Address: 0x080173D6..0x080174FE (296 bytes, Thumb)
u32 sub_080173D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = 0xDBU;
    r3 = 0x70U;
    r2 = 0x37U;
    r0 = r6;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x080173E2
    r3 = 0x58U;
    r2 = 0x50U;
    r1 = 0x28U;
    r0 = r6;
    r0 = sub_08005154(r0, r1, r2, r3); // 0x080173EE
    r3 = 0xB8U;
    r2 = 0x50U;
    r1 = 0x88U;
    r0 = r6;
    r0 = sub_08005154(r0, r1, r2, r3); // 0x080173FA
    r0 = *(u32*)(r7 + 0x8);
    r3 = 0x120; // sp + 0x120
    stack[77] = r0; // [sp + 0x134]
    r0 = 0xCU;
    *(u8*)(r3 + 0x9) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x080174E0]
    *(u8*)(r3 + 0xA) = (u8)r5;
    stack[82] = r0; // [sp + 0x148]
    *(u8*)(r3 + 0x8) = (u8)r5;
    r5 = 0x0U;
loc_08017412:
    r0 = *(u32*)(r4 + 0x1C);
    r6 = r0 + r5;
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) goto loc_080174BA;
    r0 = (r5 << 31);
    r0 = (r0 >> 31);
    r1 = (r0 << 1);
    r1 = r1 + r0;
    r0 = ((u32)((s32)r5 >> 1));
    r2 = 0x34U;
    r2 *= r0;
    r1 = (r1 << 5);
    r1 += 0x40U;
    r2 += 0x28U;
    stack[71] = r1; // [sp + 0x11C]
    r1 = r6;
    stack[72] = r2; // [sp + 0x120]
    r0 = stack[73]; // [sp + 0x124]
    r0 = sub_080135A2(r0, r1, r2, r3); // 0x08017438
    r2 = 0x11C; // sp + 0x11C
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    stack[75] = r1; // [sp + 0x12C]
    stack[76] = r2; // [sp + 0x130]
    r2 = *(u32*)(r4 + 0x20);
    r7 = r0;
    r1 = 0x6U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    r0 = 0x128; // sp + 0x128
    if (cmp_lhs == cmp_rhs) goto loc_08017452;
    r1 = 0x2U;
loc_08017452:
    r3 = 0x120; // sp + 0x120
    *(u8*)(r3 + 0xB) = (u8)r1;
    r1 = *(u16*)(r7 + 0xC);
    r2 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080174DC]
    r0 = 0x128; // sp + 0x128
    r1 = (r1 << 2);
    r2 = *(u32*)(r2 + r1);
    r1 = 0x60U;
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x08017462
    r1 = 0x12C; // sp + 0x12C
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r0 -= 0xCU;
    stack[67] = r0; // [sp + 0x10C]
    r0 += 0x18U;
    r1 -= 0x8U;
    stack[69] = r0; // [sp + 0x114]
    r0 = r1;
    r0 += 0xBU;
    stack[70] = r0; // [sp + 0x118]
    stack[68] = r1; // [sp + 0x110]
    r1 = r7;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08029138(r0, r1, r2, r3); // 0x08017480
    r2 = 0x10C; // sp + 0x10C
    r1 = 0x4; // sp + 0x4
    r0 = 0x128; // sp + 0x128
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x0801748A
    r0 = *(u8*)(r7);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_080174B4;
    r1 = stack[76]; // [sp + 0x130]
    r2 = stack[73]; // [sp + 0x124]
    r1 += 0xCU;
    stack[76] = r1; // [sp + 0x130]
    r1 = (r6 << 1);
    r1 = r1 + r2;
    r1 += 0x2EU;
    r2 = *(u8*)(r1);
    r0 = 0x128; // sp + 0x128
    r2 += 0x1U;
    r1 = 0x97U;
    r3 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080174DC]
    r1 = (r1 << 2);
    r1 = *(u32*)(r3 + r1);
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x080174B0
loc_080174B4:
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_08017412;
loc_080174BA:
    r1 = 0x06000040U; // [0x080174E4]
    r0 = 0x128; // sp + 0x128
    r0 = sub_08049150(r0, r1, r2, r3); // 0x080174BE: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x128; // sp + 0x128
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080174C6: BL 0x0803F58C
    return r0;
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    *(u16*)(r7 + 0x3E) = (u16)r4;
    r3 = (r5 >> 1);
    r6 = (r0 >> 32);
    r3 = (r0 >> 32);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r4 = r0;
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_080175C8(r0, r1, r2, r3);
    r3 = 0x080174F8U;
    r3 = *(u8*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    r3 = *(u32*)(r2 + 0x4);
    *(u32*)(r4 + 0x74) = (u32)r7;
    return r0;
}

// ROM Address: 0x08017500..0x080175A0 (160 bytes, Thumb)
u32 sub_08017500(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x086B87FCU; // [0x08017694]
    r6 = 0x0U;
    r5 = 0x000005C4U; // [0x0801769C]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r6;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x08017698]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08017510
    r0 = r4;
    r0 += 0x100U;
    r4 = *(u32*)(r0 + 0x14);
    r5 = *(u32*)(r0 + 0x20);
    r0 = 0xFFU;
    r0 += 0x25U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08017522: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08017544;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x080176A0]
    r2 = 0x0804AFF8U /* &VTable_0804AFF8 */; // [0x080176A4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    *(u32*)(r0) = (u32)r2;
    r1 += 0x14U;
    *(u32*)r1 = r4; r1 += 4;
    *(u32*)r1 = r5; r1 += 4;
loc_08017544:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08017544
    r0 = 0x0U;
    return r0;
    r0 = 0x086B87FCU; // [0x08017694]
    r4 = 0x000005C4U; // [0x0801769C]
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x08319488U; // [0x08017698]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801755A
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x08017560
    r0 = 0x1U;
    return r0;
    r0 = 0x086B87FCU; // [0x08017694]
    r4 = 0x000005C4U; // [0x0801769C]
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x08319488U; // [0x08017698]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08017576
    r0 = 0x2U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801757C
    r0 = 0x1U;
    return r0;
    r0 = 0x086B87FCU; // [0x08017694]
    r4 = 0x000005C4U; // [0x0801769C]
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x08319488U; // [0x08017698]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08017592
    r0 = 0x3U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x08017598
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080175A0..0x080175C8 (40 bytes, Thumb)
u32 sub_080175A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x086B87FCU; // [0x08017694]
    r1 = 0x08319488U; // [0x08017698]
    r5 = 0x0U;
    r6 = 0x000005C4U; // [0x0801769C]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r5;
    r2 = 0x40U;
    r1 -= 0xCU;
    r0 = r0 + r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080175B2
    r0 = r4;
    r0 += 0x100U;
    r1 = *(u32*)(r0 + 0x20);
    r1 -= 0x2U;
    *(u32*)(r0 + 0x20) = (u32)r1;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080175C6;
    *(u32*)(r0 + 0x20) = (u32)r5;
loc_080175C6:
    *(u32*)(r0 + 0x10) = (u32)r5;
    return r0;
}

// ROM Address: 0x080175C8..0x080175CA (2 bytes, Thumb)
u32 sub_080175C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080175F8(r0, r1, r2, r3);
}

// ROM Address: 0x080175CA..0x08017694 (202 bytes, Thumb)
u32 sub_080175CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x086B87FCU; // [0x08017694]
    r1 = 0x08319488U; // [0x08017698]
    r5 = 0x0U;
    r6 = 0x000005C4U; // [0x0801769C]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r5;
    r2 = 0x40U;
    r1 -= 0xCU;
    r0 = r0 + r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080175DC
    r0 = r4;
    r0 += 0x100U;
    r1 = *(u32*)(r0 + 0x20);
    r1 += 0x2U;
    *(u32*)(r0 + 0x20) = (u32)r1;
    r2 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_080175F6;
    r2 -= 0x1U;
    *(u32*)(r0 + 0x20) = (u32)r2;
loc_080175F6:
    *(u32*)(r0 + 0x10) = (u32)r5;
    r0 = 0x0U;
    return r0;
    r5 = r0;
    r0 = 0x086B87FCU; // [0x08017694]
    r2 = 0x086B87FCU; // [0x08017694]
    r0 = *(u32*)(r0);
    r4 = 0x0U;
    r1 = *(u16*)(r0 + 0x4);
    r2 = *(u32*)(r2 + 0x4);
    r0 = (r1 << 28);
    r3 = (r0 >> 31);
    r0 = 0x000005C4U; // [0x0801769C]
    r0 = r2 + r0;
    r2 = 0x083192A8U; // [0x080176A8]
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801762C;
    r1 = r2;
    r1 += 0x1E0U;
    r3 = r4;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08017624
    r0 = 0x4U;
    return r0;
loc_0801762C:
    r6 = 0x1U;
    r3 = 0x30U;
    r1 &= r3;
    if (cmp_lhs == cmp_rhs) goto loc_0801765A;
    r1 = r2;
    r1 += 0x1D4U;
    r3 = r4;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801763E
    r0 = r5;
    r0 += 0x100U;
    r2 = *(u32*)(r0 + 0x20);
    r2 ^= r6;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r1 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08017658;
    r1 -= 0x1U;
    *(u32*)(r0 + 0x20) = (u32)r1;
loc_08017658:
    *(u32*)(r0 + 0x10) = (u32)r4;
loc_0801765A:
    r0 = 0x0U;
    return r0;
    r0 += 0x100U;
    r2 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801766C;
    r0 = 0x0U;
    return r0; // BX lr
loc_0801766C:
    r2 = *(u32*)(r0 + 0x20);
    r3 = *(u32*)(r0 + 0x1C);
    r0 += 0x1CU;
    r2 = r2 - r3;
    r2 = (r2 << 31);
    r2 = (r2 >> 31);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r2 = (r2 << 5);
    r2 += 0x10U;
    *(u32*)(r1) = (u32)r2;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = 0x34U;
    r0 = r2 - r0;
    r0 = ((u32)((s32)r0 >> 1));
    r0 *= r3;
    r0 += 0x25U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08017694..0x08017696 (2 bytes, Thumb)
u32 sub_08017694(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r7 + 0x3E) = (u16)r4;
    return r0;
}

// ROM Address: 0x08017696..0x08017802 (364 bytes, Thumb)
u32 sub_08017696(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r5 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r7 = 0x3E0; // sp + 0x3E0
    r4 = (r0 >> 32);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = r0;
    r0 = 0x0804A040U /* &VTable_0804A040 */; // [0x080178C0]
    r2 = 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4 + 4;
    r2 = (r2 << 9);
    r1 = 0x5000000U; // (5 << 24)
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080176BE: BL 0x08049144
    r0 = 0x204U; // (129 << 2)
    r0 = r4 + r0;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x05000200U; // [0x080178C4]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080176CE: BL 0x08049144
    r0 = r4;
    return r0;
    r2 = 0xFFU;
    r2 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_080176EA;
    r1 = r2;
    goto loc_080176F0;
loc_080176EA:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080176F0;
    r1 = 0x0U;
loc_080176F0:
    r2 = 0x0U;
    r4 = 0x200U; // (1 << 9)
loc_080176F6:
    r5 = (r2 << 1);
    r3 = r5 + r0;
    r4 = *(u16*)(r3 + 0x4);
    r2 += 0x1U;
    r3 = (r4 << 22);
    r7 = (r3 >> 27);
    r6 = (r4 << 27);
    r3 = (r4 << 17);
    r4 = (r3 >> 27);
    r6 = (r6 >> 27);
    r7 *= r1;
    r7 = ((u32)((s32)r7 >> 8));
    r6 *= r1;
    r4 *= r1;
    r4 = ((u32)((s32)r4 >> 8));
    r6 = ((u32)((s32)r6 >> 8));
    r7 = (r7 << 5);
    r6 |= r7;
    r3 = (r4 << 10);
    r6 |= r3;
    r4 = r6;
    r3 = 0x4; // sp + 0x4
    *(u16*)(r3 + r5) = (u16)r4;
    r4 = 0x200U; // (1 << 9)
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs < cmp_rhs) goto loc_080176F6;
    r2 = r4;
    r5 = 0x4; // sp + 0x4
    r1 = r5;
    r0 = 0x5000000U; // (5 << 24)
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08017736: BL 0x08049144
    r1 = r5 + r4;
    r2 = r4;
    r0 = 0x05000200U; // [0x080178C4]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08017740: BL 0x08049144
    return r0;
    r12 = r0;
    r0 = 0xFFU;
    r0 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08017762;
    r1 = r0;
    goto loc_08017768;
loc_08017762:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08017768;
    r1 = 0x0U;
loc_08017768:
    r2 = (r1 << 5);
    r2 = r2 - r1;
    r1 = r0 - r1;
    r0 = 0x0U;
    r4 = 0x200U; // (1 << 9)
loc_08017774:
    r5 = (r0 << 1);
    r3 = r5;
    r3 += r12;
    r4 = *(u16*)(r3 + 0x4);
    r0 += 0x1U;
    r3 = (r4 << 22);
    r7 = (r3 >> 27);
    r6 = (r4 << 27);
    r3 = (r4 << 17);
    r4 = (r3 >> 27);
    r6 = (r6 >> 27);
    r6 *= r1;
    r3 = r6 + r2;
    r6 = ((u32)((s32)r3 >> 8));
    r7 *= r1;
    r3 = r7 + r2;
    r7 = ((u32)((s32)r3 >> 8));
    r4 *= r1;
    r3 = r4 + r2;
    r4 = ((u32)((s32)r3 >> 8));
    r7 = (r7 << 5);
    r6 |= r7;
    r3 = (r4 << 10);
    r6 |= r3;
    r4 = r6;
    r3 = 0x4; // sp + 0x4
    *(u16*)(r3 + r5) = (u16)r4;
    r4 = 0x200U; // (1 << 9)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs < cmp_rhs) goto loc_08017774;
    r2 = r4;
    r5 = 0x4; // sp + 0x4
    r1 = r5;
    r0 = 0x5000000U; // (5 << 24)
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080177BC: BL 0x08049144
    r1 = r5 + r4;
    r2 = r4;
    r0 = 0x05000200U; // [0x080178C4]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080177C6: BL 0x08049144
    return r0;
    r5 = r0;
    r0 = 0x400U; // (1 << 10)
    r4 = r5 + r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x1U;
    r1 = (r0 << 8);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080177E6: BL 0x08046E58
    r1 = 0xFFU;
    r1 += 0x1U;
    r1 = r1 - r0;
    r0 = r5;
    r0 = sub_080176D6(r0, r1, r2, r3); // 0x080177F2
    r1 = r4 + 4;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08017802(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08017802..0x08017806 (4 bytes, Thumb)
u32 sub_08017802(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08017800(r0, r1, r2, r3);
}

// ROM Address: 0x08017806..0x08017828 (34 bytes, Thumb)
u32 sub_08017806(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0x1U;
    r1 = (r0 << 8);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08017814: BL 0x08046E58
    r0 = sub_080070CC(r0, r1, r2, r3); // 0x08017818
    r1 = r4 + 4;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08017828(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08017828..0x0801782C (4 bytes, Thumb)
u32 sub_08017828(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801782C..0x08017858 (44 bytes, Thumb)
u32 sub_0801782C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x400U; // (1 << 10)
    r4 = r5 + r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x1U;
    r1 = (r0 << 8);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08017840: BL 0x08046E58
    r1 = r0;
    r0 = r5;
    r0 = sub_0801774C(r0, r1, r2, r3); // 0x08017848
    r1 = r4 + 4;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08017858(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08017858..0x0801785C (4 bytes, Thumb)
u32 sub_08017858(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08017856(r0, r1, r2, r3);
}

// ROM Address: 0x0801785C..0x08017884 (40 bytes, Thumb)
u32 sub_0801785C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0x1U;
    r1 = (r0 << 8);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801786A: BL 0x08046E58
    r1 = 0xFFU;
    r1 += 0x1U;
    r0 = r1 - r0;
    r0 = sub_080070DA(r0, r1, r2, r3); // 0x08017874
    r1 = r4 + 4;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08017884(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08017884..0x08017888 (4 bytes, Thumb)
u32 sub_08017884(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08017888..0x080178A4 (28 bytes, Thumb)
u32 sub_08017888(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x4);
    r4 = r0;
    r1 += 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) return sub_080178A4(r0, r1, r2, r3);
    r2 = (r0 << 1);
    r1 = r2 - r1;
    r1 = (r1 << 8);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801789E: BL 0x08046E58
    return sub_080178AA(r0, r1, r2, r3);
}

// ROM Address: 0x080178A4..0x080178BC (24 bytes, Thumb)
u32 sub_080178A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 << 8);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080178A6: BL 0x08046E58
    r0 = sub_080070DA(r0, r1, r2, r3); // 0x080178AA
    r1 = r4 + 4;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r1 = (r1 << 1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_080178BC(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080178BC..0x080178C0 (4 bytes, Thumb)
u32 sub_080178BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}
