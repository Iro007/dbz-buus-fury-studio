/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #01
 * Address Range: 0x080054BA..0x080076A6 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x080054BA..0x08005620 (358 bytes, Thumb)
u32 sub_080054BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[6]; // [sp + 0x18]
    r0 += 0x100U;
    stack[5] = r0; // [sp + 0x14]
    r1 = *(u32*)(r0 + 0x1C);
    r0 = *(u32*)(r0 + 0x28);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08005574;
    r1 = stack[5]; // [sp + 0x14]
    r4 = 0x080561DCU; // [0x080056F0]
    *(u32*)(r1 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x080054D6
    r1 = stack[6]; // [sp + 0x18]
    r6 = 0x0U;
    r1 += 0x12CU;
    stack[4] = r1; // [sp + 0x10]
loc_080054E4:
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r0 + 0x1C);
    r4 = 0x0U;
    r0 = r0 + r6;
    r0 = (r0 << 7);
    r0 = r0 + r1;
    r0 += 0xCU;
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08005562;
    r2 = 0x34U;
    r1 = stack[6]; // [sp + 0x18]
    r0 = (r6 << 5);
    r1 = r0 + r1;
    r2 *= r6;
    r2 += 0x44U;
    stack[1] = r2; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
loc_0800550C:
    r1 = (r4 << 1);
    r1 = r1 + r4;
    r0 = stack[3]; // [sp + 0xC]
    r1 = (r1 << 2);
    r7 = r1 + r0;
    r7 += 0x4U;
    r1 = *(u32*)(r7);
    r0 = 0x0U;
    r2 = 0x03001B0CU; // [0x080056F4]
    r0 = sub_0800EB60(r0, r1, r2, r3); // 0x0800551E
    r1 = stack[2]; // [sp + 0x8]
    r2 = (r4 << 2);
    r1 = r1 + r2;
    r2 = 0x280U; // (5 << 7)
    r1 = r1 + r2;
    *(u32*)(r1 + 0x38) = (u32)r0;
    r5 = r0;
    r0 = *(u32*)(r7 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08005544;
    r1 = 0x0805682CU; // [0x080056F8]
    r0 = r5;
    r0 = sub_0800EECC(r0, r1, r2, r3); // 0x0800553C: BL 0x0800EECC
    r0 = 0x1U;
    *(u8*)(r5 + 0x10) = (u8)r0;
loc_08005544:
    r1 = (r4 << 4);
    r1 += 0x12U;
    r2 = stack[1]; // [sp + 0x4]
    *(u32*)(r5 + 0x6C) = (u32)r1;
    r0 = 0x080561DCU; // [0x080056F0]
    *(u32*)(r5 + 0x70) = (u32)r2;
    r0 = *(u32*)(r0 + 0x1C);
    r1 = r5;
    r0 = List_Append(r0, r1, r2, r3); // 0x08005554: BL 0x0801191A
    r0 = stack[3]; // [sp + 0xC]
    r4 += 0x1U;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0800550C;
loc_08005562:
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_080054E4;
    r0 = stack[6]; // [sp + 0x18]
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x2C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08005570: BL 0x08046AA2
loc_08005574:
    return r0;
    r6 = r0;
    r4 = r1;
    r1 = r6;
    r1 += 0x100U;
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r1 + 0xC);
    r0 = 0x2U;
    r7 = r2;
    r5 = r3;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08005598;
    r0 = 0xFFU;
    r0 += 0x25U;
    r0 = *(u8*)(r0 + r6);
loc_08005598:
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0x080561DCU; // [0x080056F0]
    r1 = 0x10U;
    r0 = *(u32*)(r0 + 0xC);
    r2 = r7 + 1;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x0U;
    *(u8*)(r4) = (u8)r0;
    r0 = r5;
    r0 += 0x8U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080056FC]
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = *(u32*)(r0 + 0x38);
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x080055B6
    r0 = 0x080561DCU; // [0x080056F0]
    r1 = 0x64U;
    r0 = *(u32*)(r0 + 0x8);
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = r5;
    r0 += 0xEU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r6;
    r0 += 0xFFU;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = (r7 << 7);
    r0 += 0x2DU;
    r2 = *(u32*)(r0 + r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08005620(r0, r1, r2, r3);
    r6 = r1 + r0;
    r0 = *(u16*)(r6 + 0x4);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080056FC]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r1 = 0x6CU;
    r0 = r4;
    r0 = sub_0803DCC4(r0, r1, r2, r3); // 0x080055E6
    r0 = r5;
    r0 += 0x1BU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r7 = 0x64U;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 = *(u16*)(r6 + 0x6);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080056FC]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r1 = 0x6CU;
    r0 = r4;
    r0 = sub_0803DCC4(r0, r1, r2, r3); // 0x08005600
    r1 = r5;
    r1 += 0x28U;
    r0 = *(u32*)(r6 + 0x8);
    *(u32*)(r4 + 0x8) = (u32)r1;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 = sub_0805313C(r0, r1, r2, r3); // 0x0800560E: BL 0x0805313C
    r2 = r1;
    r3 = r0;
    r0 = r4;
    r1 = 0x08005700U;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0800561A
    return r0;
}

// ROM Address: 0x08005620..0x08005632 (18 bytes, Thumb)
u32 sub_08005620(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[0]; // [sp + 0x0]
    r0 = *(u32*)(r1 + 0x18);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080056FC]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0800562C
    return sub_0800561E(r0, r1, r2, r3);
}

// ROM Address: 0x08005680..0x08005732 (178 bytes, Thumb)
u32 sub_08005680(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = 0xF0U;
    r2 = 0xA0U;
    r6 = 0x4; // sp + 0x4
    r0 = r6;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0800568C
    r3 = 0x1U;
    r1 = r6;
    r0 = r5;
    r2 = *(u32*)(r4 + 0x14);
    r0 = sub_08006718(r0, r1, r2, r3); // 0x08005698
    r3 = 0x20U;
    r1 = r6;
    r0 = r5;
    r2 = *(u32*)(r4 + 0x28);
    r0 = sub_08005578(r0, r1, r2, r3); // 0x080056A4
    r2 = *(u32*)(r4 + 0x28);
    r3 = 0x54U;
    r1 = r6;
    r2 += 0x1U;
    r0 = r5;
    r0 = sub_08005578(r0, r1, r2, r3); // 0x080056B2
    r3 = 0xD0U;
    r2 = 0x50U;
    r1 = 0x14U;
    r0 = r6;
    r0 = sub_08005154(r0, r1, r2, r3); // 0x080056BE
    r3 = 0x74U;
    r2 = 0x2EU;
    r1 = 0xDBU;
    r0 = r6;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x080056CA
    r1 = 0x06000040U; // [0x08005710]
    r0 = r6;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x080056D2: BL 0x08049150
    r0 = r5;
    r0 = sub_080054BA(r0, r1, r2, r3); // 0x080056D8: BL 0x080054BA
    r1 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080056E0: BL 0x0803F58C
    return r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    stack[40] = r7; // [sp + 0xA0]
    r4 = (r0 >> 32);
    *(u32*)(r3 + 0x1C) = (u32)r4;
    r5 = (r0 >> 32);
    r4 = r1 - r4;
    r0 = (r0 << 12);
    r4 = *(u32*)(r5);
    r5 = (r0 >> 32);
    r6 = (r0 >> 32);
    r5 = r4;
    r4 = (r4 << 1);
    r2 = r7;
    r5 = r4;
    r0 = r6;
    r2 = r6;
    r4 = (r4 << 1);
    r0 = r0;
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r0 += 0x100U;
    r1 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08005732(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_0800572E;
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs >= cmp_rhs) goto loc_0800572C;
    r2 += 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r2;
loc_0800572C:
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_0800572E:
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08005732..0x08005740 (14 bytes, Thumb)
u32 sub_08005732(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800573C;
    r2 -= 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r2;
loc_0800573C:
    *(u32*)(r0 + 0x10) = (u32)r1;
    return sub_0800572E(r0, r1, r2, r3);
}

// ROM Address: 0x08005740..0x080059A0 (608 bytes, Thumb)
u32 sub_08005740(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x080561DCU; // [0x080059B0]
    r4 = r0;
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x0800574A
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x08005750
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x08005756
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080059B4]
    r2 = 0x0U;
    r7 = *(u32*)(r0 + 0x5C);
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
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08005778: BL 0x08013E64
    r1 = 0x280U; // (5 << 7)
    r5 = r4 + r1;
    *(u32*)(r5 + 0x34) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08005788
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x080057A2
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080057AA
    r1 = r7;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x080057B2
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r7 = r0;
    r1 = 0x1U;
    r7 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r7;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080057D0: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080057D8
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[4]; // [sp + 0x10]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    r2 += 0x10U;
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x080057F6
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080057FE
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1EU;
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
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0800581C: BL 0x08013E64
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x74U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x3U;
    r3 = r6;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x3U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0800583A: BL 0x08013E64
    *(u32*)(r5 + 0x30) = (u32)r0;
    r1 = *(u32*)(r5 + 0x2C);
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08005844
    r0 = r4;
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0800584C
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x08005854: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0800585C
    return r0;
    r4 = r0;
    r0 = 0x080561DCU; // [0x080059B0]
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x0800586C
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_08005880;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800587C: BL __call_via_r3
loc_08005880:
    return r0;
    r2 = 0x10U;
    r0 += 0x100U;
    *(u32*)(r1) = (u32)r2;
    r2 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x28);
    r3 = 0x34U;
    r0 = r2 - r0;
    r0 *= r3;
    r0 += 0x26U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
    r0 = sub_080067D6(r0, r1, r2, r3); // 0x0800589E
    r0 = 0x080561DCU; // [0x080059B0]
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x080058A6
    return r0;
    r4 = 0x080561DCU; // [0x080059B0]
    r5 = r0;
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x080058B4
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_08011A1E(r0, r1, r2, r3); // 0x080058BA: BL 0x08011A1E
    r0 = r5;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x080058C0
    return r0;
    r1 = *(u32*)(r0);
    r6 = r0;
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080058D0: BL 0x08046AA2
    r0 = 0x2FCU; // (191 << 2)
    r7 = r6;
    r7 += 0xFFU;
    r5 = r6 + r0;
    r0 -= 0x3CU;
    r7 += 0x1U;
    r4 = *(u32*)(r7 + 0xC);
    r0 = r6 + r0;
    r6 = *(u32*)(r0 + 0x38);
    r0 = 0xFFU;
    r0 += 0x25U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080058EC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005914;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x080059B8]
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    *(u32*)(r1 + 0x10) = (u32)r2;
    r2 = 0x080496FCU /* &VTable_080496FC */; // [0x080059BC]
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r1 += 0x18U;
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r3; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
loc_08005914:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08005914
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x080059C0]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08005920: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0800592E: BL 0x0804912C
    r0 = 0x4000000U; // (1 << 26)
    r2 = 0x0U;
    *(u16*)(r0) = (u16)r2;
    r0 = *(u32*)(r7 + 0xC);
    r1 = 0x03001910U; // [0x080059C4]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x2U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x08005942
    return r0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800597C;
    r4 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08005984;
    r2 = (r2 << 9);
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x080059C0]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0800595A: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08005968: BL 0x0804912C
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0) = (u16)r4;
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x08005974
    r0 = 0x1U;
    return r0;
loc_0800597C:
    r0 = sub_080058C6(r0, r1, r2, r3); // 0x0800597C
    r0 = 0x1U;
    return r0;
loc_08005984:
    r0 += 0x100U;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_080059A0(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_0800599C;
    r1 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs >= cmp_rhs) goto loc_0800599A;
    r1 += 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_0800599A:
    *(u32*)(r0 + 0x10) = (u32)r4;
loc_0800599C:
    r0 = r4;
    return r0;
}

// ROM Address: 0x080059A0..0x080059AE (14 bytes, Thumb)
u32 sub_080059A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080059AA;
    r1 -= 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_080059AA:
    *(u32*)(r0 + 0x10) = (u32)r4;
    return sub_0800599C(r0, r1, r2, r3);
}

// Evidence: writes BLDCNT 0x04000050: 0x080059FE ldr r0, [pc, #0x3a8] (= 0x04000040) then 0x08005A02 strh r4, [r0, #0x10]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x080059AE
// ROM Address: 0x080059AE..0x08005ABE (272 bytes, Thumb)
u32 Blend_WriteControl2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u32*)(r3 + 0x1C) = (u32)r4;
    r5 = (r0 >> 32);
    r6 = (r0 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    stack[252] = r6; // [sp + 0x3F0]
    r4 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    r0 = r2 + r4;
    r0 = (r0 << 12);
    r6 = r0;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x08005DA4]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080059D6: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080059E4: BL 0x0804912C
    r5 = 0x4000000U; // (1 << 26)
    r4 = 0x0U;
    *(u16*)(r5) = (u16)r4;
    *(u16*)(r5 + 0x10) = (u16)r4;
    *(u16*)(r5 + 0x12) = (u16)r4;
    *(u16*)(r5 + 0x14) = (u16)r4;
    *(u16*)(r5 + 0x16) = (u16)r4;
    *(u16*)(r5 + 0x18) = (u16)r4;
    *(u16*)(r5 + 0x1A) = (u16)r4;
    *(u16*)(r5 + 0x1C) = (u16)r4;
    r0 = 0x04000040U /* &REG_WIN0H */; // [0x08005DA8]
    *(u16*)(r5 + 0x1E) = (u16)r4;
    *(u16*)(r0 + 0x10) = (u16)r4;
    r0 = r6;
    r0 = sub_08005740(r0, r1, r2, r3); // 0x08005A06: BL 0x08005740
    r0 = 0x00001E83U; // [0x08005DAC]
    r1 = 0x0U;
    *(u16*)(r5 + 0xA) = (u16)r0;
    r0 = 0x1240U; // (73 << 6)
    *(u16*)(r5) = (u16)r0;
    r0 = 0x6000000U; // (3 << 25)
    r2 = 0x00009640U; // [0x08005DB0]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08005A1C: BL 0x0804912C
    r0 = 0x1EU;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x14U;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0x1U;
    stack[0] = r4; // [sp + 0x0]
    stack[1] = r4; // [sp + 0x4]
    r1 = 0x0600F000U; // [0x08005DB4]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08005A32
    r2 = (r5 >> 17);
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x08005DB8]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08005A3E: BL 0x08049144
    r2 = (r5 >> 17);
    r1 = 0x0805652CU; // [0x08005DB8]
    r0 = 0x05000200U; // [0x08005DA4]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08005A48: BL 0x08049144
    return r0;
    r0 = sub_080058C6(r0, r1, r2, r3); // 0x08005A52
    r0 = 0x0U;
    return r0;
    r4 = r0;
    r0 = sub_08005740(r0, r1, r2, r3); // 0x08005A60: BL 0x08005740
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
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08005A7C: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08005A84
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
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08005AA0: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08005AA8
    r2 = 0x4000000U; // (1 << 26)
    r0 = *(u16*)(r2);
    r1 = 0x1040U; // (65 << 6)
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    return r0;
}

// ROM Address: 0x08005ABE..0x08005BC0 (258 bytes, Thumb)
u32 sub_08005ABE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08005AD2;
    r3 = 0x08005AD4U;
    r3 = r3 + r2;
    r3 = *(u16*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
loc_08005AD2:
    return sub_08005E36(r0, r1, r2, r3);
    r0 = r1;
    r5 = (r1 << 3);
    r3 = (r6 << 3);
    r3 = (r3 << 4);
    r1 = (r6 << 6);
    r1 = (r6 << 6);
    r3 = (r0 << 5);
    r3 = (r0 << 5);
    r6 = 0x080561DCU; // [0x08005DBC]
    r5 = 0x0U;
    r7 = 0x000005C4U; // [0x08005DC4]
    r0 = *(u32*)(r6 + 0x4);
    r3 = r5;
    r2 = 0x40U;
    r0 = r0 + r7;
    r1 = 0x08319494U; // [0x08005DC0]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08005AF4
    r0 = 0x2C0U; // (11 << 6)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005B5E;
    r7 = r4;
    r7 += 0x12CU;
    r6 = r7;
    r6 -= 0x2CU;
    r0 = *(u32*)(r6 + 0xC);
    r0 = (r0 << 7);
    r0 = *(u32*)(r7 + r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08005BFC(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005B1C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005B3A;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08005DC8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r5;
    *(u32*)(r1 + 0x8) = (u32)r5;
    *(u32*)(r1 + 0x10) = (u32)r5;
    r1 = 0x08049CECU /* &VTable_08049CEC */; // [0x08005DCC]
    *(u32*)(r0) = (u32)r1;
loc_08005B3A:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08005B3A
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_08005BFC(r0, r1, r2, r3);
    r0 = r7;
    r1 = *(u32*)(r6 + 0xC);
    r0 = sub_08004DD8(r0, r1, r2, r3); // 0x08005B46
    r0 = 0x280U; // (5 << 7)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x34);
    *(u32*)(r0 + 0x8) = (u32)r5;
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r6 + 0x1C) = (u32)r0;
    *(u32*)(r6 + 0x10) = (u32)r5;
    return sub_08005BFC(r0, r1, r2, r3);
loc_08005B5E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08005B66: BL 0x08046AA2
    r0 = *(u32*)(r6 + 0x14);
    r0 = sub_08009680(r0, r1, r2, r3); // 0x08005B6C
    r7 = r4;
    r7 += 0x100U;
    r1 = *(u32*)(r7 + 0xC);
    r0 = 0x03001910U; // [0x08005DD0]
    r4 += 0xFFU;
    *(u32*)(r0) = (u32)r1;
    r0 = (r1 << 7);
    r4 += 0x2DU;
    r0 = *(u32*)(r4 + r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u32*)(r6 + 0x10);
    if (cmp_lhs == cmp_rhs) return sub_08005C44(r0, r1, r2, r3);
    r0 = sub_080048A0(r0, r1, r2, r3); // 0x08005B8A
    r0 = *(u32*)(r7 + 0xC);
    r0 = (r0 << 7);
    r1 = r0 + r4;
    r1 = *(u32*)(r1 + 0x7C);
    r0 = *(u32*)(r6 + 0x10);
    *(u8*)(r0) = (u8)r1;
    r1 = 0x4C0U; // (19 << 6)
    r0 = r0 + r1;
    *(u32*)(r0 + 0x1C) = (u32)r5;
    r0 = *(u32*)(r6 + 0x10);
    r0 = sub_0800432C(r0, r1, r2, r3); // 0x08005BA4
    r0 = *(u32*)(r6 + 0x10);
    r0 = sub_08004A76(r0, r1, r2, r3); // 0x08005BAA
    r7 = r0;
    r0 = 0x0000040CU; // [0x08005DD4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005BB2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) return sub_08005BCE(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_080176AC(r0, r1, r2, r3); // 0x08005BBC
    return r0;
}

// ROM Address: 0x08005BC0..0x08005BFC (60 bytes, Thumb)
u32 sub_08005BC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804BBA4U /* &VTable_0804BBA4 */; // [0x08005DD8]
    r1 = 0x10U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r1 << 6);
    r0 = r4 + r0;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r5;
    r0 = r4;
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08005BD0
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005BD6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005BE2;
    r1 = 0x080494ACU /* &VTable_080494AC */; // [0x08005DDC]
    *(u32*)(r0) = (u32)r1;
loc_08005BE2:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08005BE2
    r1 = 0x45U;
    r0 = *(u32*)(r6 + 0x10);
    r1 = (r1 << 5);
    r0 = r0 + r1;
    r1 = *(u8*)(r0 + 0x2);
    r0 = *(u32*)(r6 + 0x10);
    r2 = 0x000008A4U; // [0x08005DE0]
    stack[0] = r1; // [sp + 0x0]
    r3 = r0 + r2;
    r2 = 0x1U;
    return sub_08005BFE(r0, r1, r2, r3);
}

// ROM Address: 0x08005BFE..0x08005C3E (64 bytes, Thumb)
u32 sub_08005BFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[1] = r2; // [sp + 0x4]
    r2 = *(u8*)(r7 + 0x1);
    r1 = *(u8*)(r7);
    r0 = *(u32*)(r6 + 0x18);
    r0 = sub_08008D44(r0, r1, r2, r3); // 0x08005C06
    r0 = *(u32*)(r6 + 0x10);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x08005DE4]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801711C(r0, r1, r2, r3); // 0x08005C26
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005C2C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08005C3E(r0, r1, r2, r3);
    r1 = 0x080495B4U /* &VTable_080495B4 */; // [0x08005DE8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    r1 = 0x4U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0;
}

// ROM Address: 0x08005C44..0x08005C6E (42 bytes, Thumb)
u32 sub_08005C44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080042FC(r0, r1, r2, r3); // 0x08005C44
    r0 = *(u32*)(r6 + 0x10);
    r0 = sub_0800432C(r0, r1, r2, r3); // 0x08005C4A
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005C50: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005C5C;
    r1 = 0x080494ACU /* &VTable_080494AC */; // [0x08005DDC]
    *(u32*)(r0) = (u32)r1;
loc_08005C5C:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08005C5C
    r1 = 0x0U;
    r0 = 0x0877CBF0U /* EventPoolRecord */; // [0x08005DEC]
    r0 = sub_08012588(r0, r1, r2, r3); // 0x08005C64: BL 0x08012588
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08005C6E..0x08005CBA (76 bytes, Thumb)
u32 sub_08005C6E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x4000000U; // (1 << 26)
    r0 = *(u16*)(r2);
    r1 = (r2 >> 14);
    r4 = 0x0U;
    r0 &= ~r1;
    *(u16*)(r2) = (u16)r0;
    r0 = 0x080561DCU; // [0x08005DBC]
    r1 = 0x08319494U; // [0x08005DC0]
    r5 = 0x000005C4U; // [0x08005DC4]
    r0 = *(u32*)(r0 + 0x4);
    r2 = 0x40U;
    r3 = r4;
    r1 -= 0xCU;
    r0 = r0 + r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08005C8C
    r0 = 0xFFU;
    r0 += 0x21U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005C94: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005CB2;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08005DC8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    *(u32*)(r1 + 0x10) = (u32)r4;
    r1 = 0x08049B00U /* &VTable_08049B00 */; // [0x08005DF0]
    *(u32*)(r0) = (u32)r1;
loc_08005CB2:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08005CB2
    r0 = 0x1U;
    return sub_08005C6A(r0, r1, r2, r3);
}

// ROM Address: 0x08005E3A..0x08005F86 (332 bytes, Thumb)
u32 sub_08005E3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x080561DCU; // [0x08005F90]
    r5 = r0;
    r1 = *(u32*)(r1);
    r5 += 0xFFU;
    r1 = *(u16*)(r1 + 0x4);
    r5 += 0x2DU;
    r4 = r5;
    r6 = 0x0U;
    r1 = (r1 << 26);
    r1 = (r1 >> 31);
    r6 = ~r6;
    r4 -= 0x2CU;
    r7 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005E72;
    r0 = *(u32*)(r4 + 0xC);
    r0 = (r0 << 7);
    r0 = r0 + r5;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005E72;
    r0 = sub_08004C8C(r0, r1, r2, r3); // 0x08005E66: BL 0x08004C8C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005E72;
    *(u32*)(r4 + 0x1C) = (u32)r6;
    *(u32*)(r4 + 0x10) = (u32)r7;
loc_08005E72:
    r0 = 0x080561DCU; // [0x08005F90]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08005E96;
    r0 = *(u32*)(r4 + 0xC);
    r0 = (r0 << 7);
    r0 = r0 + r5;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005E96;
    r0 = sub_08004CE0(r0, r1, r2, r3); // 0x08005E8A: BL 0x08004CE0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005E96;
    *(u32*)(r4 + 0x1C) = (u32)r6;
    *(u32*)(r4 + 0x10) = (u32)r7;
loc_08005E96:
    r0 = 0x0U;
    return r0;
    r2 = r0;
    r2 += 0xFFU;
    r2 += 0x2DU;
    r5 = r2;
    r5 -= 0x2CU;
    r7 = *(u32*)(r5 + 0xC);
    r1 = (r7 << 7);
    r3 = *(u32*)(r2 + r1);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005F82;
    r3 = r1 + r2;
    r1 = r3;
    r2 = *(u32*)(r3 + 0xC);
    r1 += 0xCU;
    r4 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08005F82;
    r6 = *(u32*)(r3 + 0x7C);
    r3 = (r4 << 1);
    r3 = r3 + r4;
    r3 = (r3 << 2);
    r3 = r3 + r1;
    r3 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) return sub_08005F86(r0, r1, r2, r3);
    r1 = *(u32*)(r5 + 0x28);
    r1 = r7 - r1;
    r1 = (r1 << 5);
    r0 = r1 + r0;
    r1 = (r4 << 2);
    r0 = r0 + r1;
    r1 = 0x280U; // (5 << 7)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x38);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08005EEC: BL __call_via_r3
    r0 = (r4 << 4);
    r0 += 0x12U;
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r5 + 0xC);
    r1 = *(u32*)(r5 + 0x28);
    r3 = 0x34U;
    r0 = r0 - r1;
    r0 *= r3;
    r0 += 0x2CU;
    stack[2] = r0; // [sp + 0x8]
    r6 = 0x0U;
loc_08005F06:
    r0 = (r6 << 1);
    r1 = 0x080561DCU; // [0x08005F90]
    r0 = r0 + r6;
    r0 = (r0 << 2);
    r1 += 0x20U;
    r7 = r0 + r1;
    r0 = 0x2CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005F14: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08005F72;
    r5 = *(u8*)(r7 + 0x2);
    r0 = *(u8*)(r7 + 0x3);
    r5 *= r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08005F9C]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x080561DCU; // [0x08005F90]
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08005F2E
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08005F4A;
    r0 = 0x080561DCU; // [0x08005F90]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08005F3C: BL 0x08011732
    r0 = 0x080561DCU; // [0x08005F90]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08005F46
loc_08005F4A:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804BA50U /* &VTable_0804BA50 */; // [0x08005FA0]
    r2 = 0x4; // sp + 0x4
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r7;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = 0x3AU;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r2 = *(u8*)(r7 + 0x2);
    r0 = *(u8*)(r7 + 0x3);
    r3 = 0x06010000U; // [0x08005FA4]
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r7 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08005F6E: BL 0x08049138
loc_08005F72:
    r0 = 0x080561DCU; // [0x08005F90]
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = List_Append(r0, r1, r2, r3); // 0x08005F78: BL 0x0801191A
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_08005F06;
loc_08005F82:
    return r0;
}

// ROM Address: 0x08005F86..0x08005F8E (8 bytes, Thumb)
u32 sub_08005F86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_08005EC2(r0, r1, r2, r3);
    return sub_08005F82(r0, r1, r2, r3);
}

// ROM Address: 0x08005F8E..0x08005FA0 (18 bytes, Thumb)
u32 sub_08005F8E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u32*)(r3 + 0x1C) = (u32)r4;
    r5 = (r0 >> 32);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08005FA2..0x0800601E (124 bytes, Thumb)
u32 sub_08005FA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x100U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r1 += 0x100U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0; // BX lr
    r6 = 0xC; // sp + 0xC
    r4 = *(u32*)r6; r6 += 4;
    r5 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804A238U /* &VTable_0804A238 */; // [0x08006098]
    *(u32*)(r0) = (u32)r1;
    r0 += 0x8U;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x1CU;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800608A(r0, r1, r2, r3);
    r0 = 0x08070138U; // [0x0800609C]
    r1 = 0x08070138U; // [0x0800609C]
    r0 = *(u32*)(r0);
    r5 = 0x0U;
    r2 = *(u16*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0x4);
    r0 = (r2 << 25);
    r3 = (r0 >> 31);
    r0 = 0x000005C4U; // [0x080060A0]
    r0 = r1 + r0;
    r1 = 0x0831947CU; // [0x080060A4]
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800601E(r0, r1, r2, r3);
    r3 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_0800601E(r0, r1, r2, r3);
    r3 = r5;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800600A
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4 + 0xC);
    r0 += 0x10CU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800601E..0x08006092 (116 bytes, Thumb)
u32 sub_0800601E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r2 << 24);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08006042;
    r3 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08006042;
    r3 = r5;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800602E
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4 + 0x10);
    r0 += 0x10CU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = 0x1U;
    return sub_0800601C(r0, r1, r2, r3);
loc_08006042:
    r3 = (r2 << 26);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08006066;
    r3 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08006066;
    r3 = r5;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08006052
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4 + 0x14);
    r0 += 0x10CU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = 0x1U;
    return sub_0800601C(r0, r1, r2, r3);
loc_08006066:
    r2 = (r2 << 27);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800608A;
    r2 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0800608A;
    r3 = r5;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08006076
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4 + 0x18);
    r0 += 0x10CU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = 0x1U;
    return sub_0800601C(r0, r1, r2, r3);
loc_0800608A:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x18);
    r1 = r2 + r1;
    return r0;
}

// ROM Address: 0x08006098..0x080060C6 (46 bytes, Thumb)
u32 sub_08006098(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0800617CU;
    r4 = (r0 >> 32);
    r0 = (r7 << 4);
    r7 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[124] = r4; // [sp + 0x1F0]
    r1 = (r6 >> 32);
    r5 = stack[17]; // [sp + 0x44]
    r6 = stack[18]; // [sp + 0x48]
    r7 = stack[19]; // [sp + 0x4C]
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080060C6(r0, r1, r2, r3);
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080060B8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080060C6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080060C6..0x080060F8 (50 bytes, Thumb)
u32 sub_080060C6(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r0 = sub_08005FBE(r0, r1, r2, r3); // 0x080060D6
    r0 = 0x0804B2DCU /* &VTable_0804B2DC */; // [0x0800627C]
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08006280]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r6;
    r0 = stack[15]; // [sp + 0x3C]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = stack[16]; // [sp + 0x40]
    *(u32*)(r4 + 0x20) = (u32)r0;
    *(u32*)(r4 + 0x24) = (u32)r5;
    r0 = 0x2CU;
    *(u8*)(r0 + r4) = (u8)r7;
    r0 = r4;
    return sub_080060C2(r0, r1, r2, r3);
}

// ROM Address: 0x080060F8..0x08006116 (30 bytes, Thumb)
u32 sub_080060F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = stack[17]; // [sp + 0x44]
    r6 = stack[18]; // [sp + 0x48]
    r7 = stack[19]; // [sp + 0x4C]
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08006116(r0, r1, r2, r3);
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006108: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08006116(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08006116..0x08006142 (44 bytes, Thumb)
u32 sub_08006116(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r0 = sub_08005FBE(r0, r1, r2, r3); // 0x08006126
    r0 = 0x0804B2DCU /* &VTable_0804B2DC */; // [0x0800627C]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r6;
    r0 = stack[15]; // [sp + 0x3C]
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = stack[16]; // [sp + 0x40]
    *(u32*)(r4 + 0x20) = (u32)r0;
    *(u32*)(r4 + 0x24) = (u32)r5;
    r0 = 0x2CU;
    *(u8*)(r0 + r4) = (u8)r7;
    r0 = r4;
    return sub_08006112(r0, r1, r2, r3);
}

// ROM Address: 0x08006168..0x080061AE (70 bytes, Thumb)
u32 sub_08006168(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x2U;
    *(u8*)(r0 + 0x3) = (u8)r1;
    r1 = 0x08070140U; // [0x08006288]
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r0 + 0xC) = (u32)r1;
    r3 = *(u32*)(r2 + 0x20);
    r4 = *(u32*)(r2 + 0x24);
    *(u32*)(r0 + 0x4) = (u32)r3;
    *(u32*)(r0 + 0x8) = (u32)r4;
    r1 = *(u32*)(r2 + 0x1C);
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0800617C
    return r0;
    r1 = r0;
    r0 = 0x08070140U; // [0x08006288]
    r0 = *(u32*)(r0);
    r2 = 0x9U;
    r0 = *(u16*)(r0 + 0x4);
    r0 &= r2;
    if (cmp_lhs == cmp_rhs) return sub_080061AE(r0, r1, r2, r3);
    r2 = 0xFFU;
    r0 = *(u32*)(r1 + 0x4);
    r2 += 0xDU;
    r2 = *(u32*)(r2 + r0);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) return sub_080061AE(r0, r1, r2, r3);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x20);
    r3 = r3 + r2;
    r2 = *(u32*)(r1 + 0x28);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080061A8: BL __call_via_r3
    return r0;
}

// ROM Address: 0x080061AE..0x080061B2 (4 bytes, Thumb)
u32 sub_080061AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_080061AC(r0, r1, r2, r3);
}

// ROM Address: 0x080061B2..0x080061CA (24 bytes, Thumb)
u32 sub_080061B2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r5 = r1;
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_080061CA(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080061CA..0x0800620C (66 bytes, Thumb)
u32 sub_080061CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2CU;
    r1 = *(u8*)(r0 + r4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080061F4;
    r0 = 0x08070140U; // [0x08006288]
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080061FA;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_080061EA;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x080061E0
    r1 = *(u32*)(r4 + 0x20);
    r0 = r1 - r0;
    *(u32*)(r5) = (u32)r0;
loc_080061EA:
    r0 = *(u32*)(r4 + 0x24);
    r0 -= 0x4U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return sub_080061C8(r0, r1, r2, r3);
loc_080061F4:
    r0 = *(u32*)(r4 + 0x20);
    *(u32*)(r5) = (u32)r0;
    goto loc_080061EA;
loc_080061FA:
    r1 = *(u32*)(r4 + 0x1C);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x080061FE
    r1 = *(u32*)(r4 + 0x20);
    r0 = ((u32)((s32)r0 >> 1));
    r0 = r1 - r0;
    *(u32*)(r5) = (u32)r0;
    goto loc_080061EA;
    return r0;
}

// ROM Address: 0x0800622E..0x08006260 (50 bytes, Thumb)
u32 sub_0800622E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x2U;
    *(u8*)(r0 + 0x3) = (u8)r1;
    r1 = 0x08070140U; // [0x08006288]
    r1 = *(u32*)(r1 + 0x8);
    *(u32*)(r0 + 0xC) = (u32)r1;
    r3 = *(u32*)(r2 + 0x20);
    r4 = *(u32*)(r2 + 0x24);
    *(u32*)(r0 + 0x4) = (u32)r3;
    *(u32*)(r0 + 0x8) = (u32)r4;
    r1 = *(u32*)(r2 + 0x1C);
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08006242
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r5 = r1;
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_08006260(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08006260..0x0800627C (28 bytes, Thumb)
u32 sub_08006260(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08070140U; // [0x08006288]
    r1 = *(u32*)(r4 + 0x1C);
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08006266
    r1 = *(u32*)(r4 + 0x20);
    r0 = ((u32)((s32)r0 >> 1));
    r0 = r1 - r0;
    *(u32*)(r5) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    r0 -= 0x3U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return sub_0800625E(r0, r1, r2, r3);
}

// ROM Address: 0x08006290..0x0800649E (526 bytes, Thumb)
u32 sub_08006290(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    if (cmp_lhs > cmp_rhs) goto loc_080062AA;
    r0 = 0x0U;
loc_080062AA:
    *(u32*)(r1 + 0x8) = (u32)r0;
    r1 = 0xF0U;
    r2 = 0xA0U;
    r5 = 0x4; // sp + 0x4
    r0 = r5;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080062B4
    r3 = r6;
    r2 = 0x2U;
    r1 = r5;
    r0 = r4;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x080062C0
    r1 = 0x06000040U; // [0x08006594]
    r0 = r5;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x080062C8: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080062D0: BL 0x0803F58C
    return r0;
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08006598]
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
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080062FA: BL 0x08013E64
    r1 = 0xFFU;
    r1 += 0x1DU;
    *(u32*)(r1 + r4) = r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08006308
    r6 = 0x0807014CU; // [0x0800659C]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08006324
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0800632C
    r1 = r5;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x08006334
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
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08006352: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0800635A
    r2 = *(u32*)(r6 + 0x4);
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
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08006376
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0800637E
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
    if (cmp_lhs == cmp_rhs) goto loc_080063A2;
    r3 = r0;
loc_080063A2:
    r5 = r3;
    r1 = r4;
    r2 = 0x0U;
    r0 = 0x0U;
    r0 = Object_Construct2(r0, r1, r2, r3); // 0x080063AA: BL 0x08006880
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080063B2
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
    r0 = Object_Construct2(r0, r1, r2, r3); // 0x080063CC: BL 0x08006880
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080063D4
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
    r0 = Object_Construct2(r0, r1, r2, r3); // 0x080063EE: BL 0x08006880
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080063F6
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
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x08006424
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0800642C
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
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x0800645A
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08006462
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
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x08006490
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08006498
    r2 = 0x1U;
    return r0;
}

// ROM Address: 0x080064A0..0x0800658E (238 bytes, Thumb)
u32 sub_080064A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x70U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x0U;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x78U;
    r0 = ~r0;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x14U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x0U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x3U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x2U;
    r0 = 0x0U;
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x080064C6
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080064CE
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x080064D6: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080064DE
    return r0;
    r4 = r0;
    r0 += 0x118U;
    r1 = 0x03001914U; // [0x080065A0]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08006500;
    r0 = 0x0807014CU; // [0x0800659C]
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08006B5E(r0, r1, r2, r3); // 0x080064FC
loc_08006500:
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_08006510;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800650C: BL __call_via_r3
loc_08006510:
    return r0;
    r1 = 0x0807014CU; // [0x0800659C]
    r1 = *(u32*)(r1);
    r0 = 0x000005C4U; // [0x080065A4]
    r3 = 0x0U;
    r0 = r1 + r0;
    r1 = 0x08319488U; // [0x080065A8]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800655A;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0800658E(r0, r1, r2, r3);
    r4 = r3;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800652C
    r0 = 0xFFU;
    r0 += 0x1DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006534: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006552;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x080065AC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    *(u32*)(r1 + 0x10) = (u32)r4;
    r1 = 0x080494D8U /* &VTable_080494D8 */; // [0x080065B0]
    *(u32*)(r0) = (u32)r1;
loc_08006552:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08006552
    r0 = 0x1U;
    return r0;
loc_0800655A:
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800655C
    r1 = 0x0U;
    r0 = 0x0U;
    r0 = sub_080335BC(r0, r1, r2, r3); // 0x08006564: BL 0x080335BC
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08006568
    r0 = Blend_WriteControl1(r0, r1, r2, r3); // 0x0800656C: BL 0x0800536A
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x080065B4]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0800657A: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x080065B4]
    r0 = 0x05000200U; // [0x080065B8]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08006586: BL 0x08049144
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800658E..0x08006592 (4 bytes, Thumb)
u32 sub_0800658E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08006592..0x080065E0 (78 bytes, Thumb)
u32 sub_08006592(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r6 = (r0 >> 32);
    r4 = (r1 << 5);
    r7 = (r0 >> 32);
    r4 = r2 + r4;
    r0 = (r0 << 12);
    r4 = (r0 << 23);
    r0 = r0;
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    stack[216] = r4; // [sp + 0x360]
    r4 = (r0 >> 32);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    r0 = 0x0U;
    return r0; // BX lr
    r0 = 0x0807014CU; // [0x08006614]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080065D4;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080065DA;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_080065E0(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r0);
    return r0; // BX lr
loc_080065D4:
    r0 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r0 + 0x1);
    return r0; // BX lr
loc_080065DA:
    r0 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r0 + 0x2);
    return r0; // BX lr
}

// ROM Address: 0x080065E0..0x080065E4 (4 bytes, Thumb)
u32 sub_080065E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080065E4..0x080065FE (26 bytes, Thumb)
u32 sub_080065E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r1;
    r1 = r2;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    r0 = 0x0807014CU; // [0x08006614]
    if (cmp_lhs == cmp_rhs) return sub_080065FE(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08006606(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_080065FC;
    r0 = *(u32*)(r0 + 0x8);
    *(u8*)(r0) = (u8)r1;
loc_080065FC:
    return r0;
}

// ROM Address: 0x080065FE..0x0800660E (16 bytes, Thumb)
u32 sub_080065FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08006AB8(r0, r1, r2, r3); // 0x08006600
    return sub_080065FC(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08006ACA(r0, r1, r2, r3); // 0x08006608
    return sub_080065FC(r0, r1, r2, r3);
}

// ROM Address: 0x08006618..0x080067CA (434 bytes, Thumb)
u32 sub_08006618(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x0800686C]
    r4 = 0x0U;
    *(u32*)(r5) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08006648;
    r6 = r5 + 4;
loc_0800662A:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006640;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800663C: BL __call_via_r3
loc_08006640:
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0800662A;
loc_08006648:
    r0 = 0x080491F0U /* &VTable_080491F0 */; // [0x08006870]
    *(u32*)(r5) = (u32)r0;
    return r0;
    r0 += 0x4U;
    r2 = *(u32*)(r0);
    r3 = r2 + 1;
    *(u32*)(r0) = (u32)r3;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006666: BL __call_via_r3
    return r0;
    r4 = r1;
    if (cmp_lhs == cmp_rhs) goto loc_080066B8;
    r1 = r0 + 4;
    r3 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800668C;
loc_0800667C:
    r2 = (r0 << 2);
    r2 = r2 + r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08006690;
    r0 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0800667C;
loc_0800668C:
    r0 = 0x0U;
    r0 = ~r0;
loc_08006690:
    r3 -= 0x1U;
    *(u32*)(r1) = (u32)r3;
    r2 = r3 - r0;
    if (cmp_lhs == cmp_rhs) goto loc_080066A8;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r1 = r0;
    r1 += 0x8U;
    r2 = (r2 << 2);
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080066A4: BL 0x08049138
loc_080066A8:
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_080066B8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080066B4: BL __call_via_r3
loc_080066B8:
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080066E6;
    r6 = r5 + 4;
loc_080066C8:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080066DE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080066DA: BL __call_via_r3
loc_080066DE:
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_080066C8;
loc_080066E6:
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r7 = r1;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08006716;
    r6 = r5 + 4;
loc_080066FC:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r7;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800670A: BL __call_via_r3
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_080066FC;
loc_08006716:
    return r0;
    r5 = r2;
    r2 = *(u32*)(r1 + 0x2C);
    stack[0] = r2; // [sp + 0x0]
    r7 = r3;
    r3 = *(u32*)(r1 + 0x28);
    r4 = r1;
    r1 = 0x0U;
    r2 = 0x0U;
    r6 = r0;
    r0 = r4;
    r0 = sub_08004F1C(r0, r1, r2, r3); // 0x08006730
    r0 = 0x8U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x18U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0xE8U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x98U;
    stack[4] = r0; // [sp + 0x10]
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08004F50(r0, r1, r2, r3); // 0x08006748
    r1 = 0x1U;
    *(u8*)(r4) = (u8)r1;
    r0 = 0x78U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x10U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x08070158U; // [0x08006874]
    r0 = *(u32*)(r0);
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x5U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    *(u8*)(r4 + 0x2) = (u8)r1;
    r0 = 0x0803F5A5U; // [0x08006878]
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0800687C]
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = (r5 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08006770
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800679C;
    r0 = *(u32*)(r6 + 0x4);
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800679C;
    r7 = r6 + 4;
loc_08006782:
    r0 = (r5 << 2);
    r0 = r0 + r7;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006790: BL __call_via_r3
    r0 = *(u32*)(r6 + 0x4);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08006782;
loc_0800679C:
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r7 = r1;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_080067D2(r0, r1, r2, r3);
    r6 = r5 + 4;
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r7;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080067BE: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080067CA(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080067CA..0x080067D6 (12 bytes, Thumb)
u32 sub_080067CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_080067B0(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_080067C8(r0, r1, r2, r3);
}

// ROM Address: 0x080067DC..0x0800686C (144 bytes, Thumb)
u32 sub_080067DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1 + 0x10);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080067F2;
    r2 = 0x1U;
    *(u32*)(r1 + 0x10) = (u32)r2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080067EE: BL 0x08046AA2
loc_080067F2:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r6 = r4 + 4;
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800681A;
loc_08006802:
    r0 = (r5 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800680E: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0x4);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08006802;
loc_0800681A:
    r0 = 0xFFU;
    r0 += 0x9U;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006836;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800682A: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800685E;
    r0 = 0x0U;
    return r0;
loc_08006836:
    r0 = *(u32*)(r4 + 0x4);
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800685E;
loc_0800683E:
    r0 = (r5 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800684A: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006856;
    r0 = 0x0U;
    return r0;
loc_08006856:
    r0 = *(u32*)(r4 + 0x4);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0800683E;
loc_0800685E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08006866: BL 0x08046AA2
    return r0;
}

// Evidence: tools/behaviour/test_table.py::test_object_construct2_stores_the_table_word_and_the_stack_arguments runs it on a crafted object at 0x02000000 and asserts the 8 stores it makes; stores the handler-table word 0x0804BF3C at +0 and the stack arguments at +4 and +8
// ROM Address: 0x08006880..0x08006938 (184 bytes, Thumb)
u32 Object_Construct2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x2C; // sp + 0x2C
    r4 = *(u32*)r7; r7 += 4;
    r6 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r5 = stack[10]; // [sp + 0x28]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08006898;
    r0 = 0x20U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006890: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080068B4;
loc_08006898:
    r1 = stack[2]; // [sp + 0x8]
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804BF3CU /* &VTable_0804BF3C */; // [0x08006AA8]
    *(u32*)(r0) = (u32)r1;
    r1 = stack[3]; // [sp + 0xC]
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = stack[4]; // [sp + 0x10]
    r0 += 0xCU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x18U;
    r1 = r7 - r4;
    r1 -= 0x2U;
    *(u32*)(r0 + 0x1C) = (u32)r5;
    *(u32*)(r0 + 0x18) = (u32)r1;
loc_080068B4:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r6 = r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080068CA: BL __call_via_r3
    r1 = *(u32*)(r4 + 0x18);
    r0 *= r1;
    r5 = r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080068DE: BL __call_via_r3
    r1 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080068E4: BL 0x08046E58
    r7 = r0;
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r6 + 0x28);
    r0 *= r1;
    r1 = *(u32*)(r6 + 0x24);
    r0 = r0 + r1;
    r1 = *(u32*)(r4 + 0x10);
    r2 = *(u32*)(r4 + 0x18);
    r5 = r0 + r1;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08006938(r0, r1, r2, r3);
    r1 = 0x1U;
    r0 = r5 + r1;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08006902: BL 0x08046E40
    r0 = *(u32*)(r6 + 0x28);
    r5 = r0 + r5;
loc_0800690A:
    r0 = 0x73U;
    *(u8*)(r5) = (u8)r0;
    r1 = 0x70U;
    r0 = r5 + 1;
    r2 = *(u32*)(r4 + 0x18);
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08006914: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x18);
    r1 = 0x1U;
    r0 = r0 + r5;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = *(u32*)(r6 + 0x28);
    r7 = r7 + r1;
    r5 = r0 + r5;
    cmp_lhs = (s32)r7; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_0800690A;
    r1 = 0x73U;
    r0 = r5 + 1;
    r2 = *(u32*)(r4 + 0x18);
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08006930: BL 0x08046E40
    return r0;
}

// ROM Address: 0x08006938..0x080069E6 (174 bytes, Thumb)
u32 sub_08006938(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r2 - r7;
    stack[1] = r0; // [sp + 0x4]
    if (cmp_lhs != cmp_rhs) goto loc_08006976;
    r1 = 0xAU;
    r0 = r5 + 1;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08006942: BL 0x08046E40
    r0 = *(u32*)(r6 + 0x28);
    r5 = r0 + r5;
    r7 = 0x0U;
loc_0800694C:
    r0 = 0xAU;
    *(u8*)(r5) = (u8)r0;
    r1 = 0x3U;
    r0 = r5 + 1;
    r2 = *(u32*)(r4 + 0x18);
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08006956: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x18);
    r1 = 0x68U;
    r0 = r0 + r5;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = *(u32*)(r6 + 0x28);
    r7 += 0x1U;
    r5 = r0 + r5;
    cmp_lhs = (s32)r7; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_0800694C;
    r0 = r5 + 1;
    r2 = *(u32*)(r4 + 0x18);
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08006970: BL 0x08046E40
    return sub_08006934(r0, r1, r2, r3);
loc_08006976:
    r2 = r7;
    r1 = 0xAU;
    r0 = r5 + 1;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0800697C: BL 0x08046E40
    r0 = r5 + r7;
    r0 += 0x1U;
    r1 = 0x1U;
    r2 = stack[1]; // [sp + 0x4]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08006988: BL 0x08046E40
    r0 = *(u32*)(r6 + 0x28);
    r2 = stack[1]; // [sp + 0x4]
    r5 = r0 + r5;
    r0 = 0x0U;
    r2 -= 0x1U;
    stack[2] = r2; // [sp + 0x8]
    stack[0] = r0; // [sp + 0x0]
loc_0800699A:
    r0 = 0xAU;
    *(u8*)(r5) = (u8)r0;
    r2 = r7;
    r1 = 0x3U;
    r0 = r5 + 1;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x080069A4: BL 0x08046E40
    r1 = 0x68U;
    r0 = r5 + r7;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 += 0x2U;
    r1 = 0x70U;
    r2 = stack[2]; // [sp + 0x8]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x080069B4: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x18);
    r1 = 0x1U;
    r0 = r0 + r5;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = *(u32*)(r6 + 0x28);
    r5 = r0 + r5;
    r0 = stack[0]; // [sp + 0x0]
    r0 = r0 + r1;
    stack[0] = r0; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_0800699A;
    r2 = r7;
    r1 = 0x68U;
    r0 = r5 + 1;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x080069D4: BL 0x08046E40
    r0 = r5 + r7;
    r0 += 0x1U;
    r1 = 0x73U;
    r2 = stack[1]; // [sp + 0x4]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x080069E0: BL 0x08046E40
    return sub_08006934(r0, r1, r2, r3);
}

// ROM Address: 0x080069E6..0x08006A5C (118 bytes, Thumb)
u32 sub_080069E6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08006AA4(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006A02: BL __call_via_r3
    r5 = r0;
    r0 = 0x0807015CU; // [0x08006AAC]
    r2 = 0x0807015CU; // [0x08006AAC]
    r0 = *(u32*)(r0);
    r1 = 0x000005C4U; // [0x08006AB0]
    r0 = *(u16*)(r0 + 0x4);
    r2 = *(u32*)(r2 + 0x4);
    r6 = 0x0831947CU; // [0x08006AB4]
    r0 = (r0 << 26);
    r0 = (r0 >> 31);
    r7 = r2 + r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08006A5C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r2 = r2 + r1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006A2A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) return sub_08006A5C(r0, r1, r2, r3);
    r1 = r6;
    r6 = 0x0U;
    r3 = r6;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08006A3C
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r3 = r2 + r1;
    r2 = r5 - 1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006A4C: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x100U;
    *(u32*)(r0 + 0x10) = (u32)r6;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08006A5C..0x08006AA8 (76 bytes, Thumb)
u32 sub_08006A5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0807015CU; // [0x08006AAC]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08006AA4;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006A72: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_08006AA4;
    r1 = r6;
    r6 = 0x0U;
    r3 = r6;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08006A84
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r3 = r2 + r1;
    r2 = r5 + 1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006A94: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x100U;
    *(u32*)(r0 + 0x10) = (u32)r6;
    r0 = 0x1U;
    return sub_08006A5A(r0, r1, r2, r3);
loc_08006AA4:
    r0 = 0x0U;
    return sub_08006A5A(r0, r1, r2, r3);
}

// ROM Address: 0x08006AAA..0x08006B94 (234 bytes, Thumb)
u32 sub_08006AAA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = (r3 << 5);
    r7 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[124] = r4; // [sp + 0x1F0]
    r1 = (r6 >> 32);
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = 0x08070164U; // [0x08006B94]
    r2 = 0x000005C4U; // [0x08006B98]
    r0 = *(u32*)(r0 + 0x4);
    r0 = r0 + r2;
    r0 = sub_0803E42A(r0, r1, r2, r3); // 0x08006AC4
    return r0;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r0 = 0x08070164U; // [0x08006B94]
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0xCU;
    r0 = sub_0803F18C(r0, r1, r2, r3); // 0x08006AD4
    return r0;
    r1 = 0x4U;
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x08006ADE
    r1 = 0x12345678U; // [0x08006B9C]
    r0 = r0 + r1;
    return r0;
    r5 = 0x08070164U; // [0x08006B94]
    r4 = r0;
    r3 = 0x8U;
    r2 = 0x0U;
    r1 = 0x4; // sp + 0x4
    r0 = *(u32*)(r5);
    r0 = sub_0803FC3A(r0, r1, r2, r3); // 0x08006AF8
    r1 = 0x4U;
    r0 = sp;
    r0 = r0 + r1;
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x08006B02
    r1 = 0x12345678U; // [0x08006B9C]
    r0 = r0 + r1;
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08006B36;
    r3 = 0x0; // sp + 0x0
    r0 = *(u8*)(r3 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs > cmp_rhs) goto loc_08006B36;
    r0 = *(u8*)(r3 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs > cmp_rhs) goto loc_08006B36;
    r0 = *(u8*)(r3 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs > cmp_rhs) goto loc_08006B36;
    r0 = *(u8*)(r3 + 0x4);
    *(u8*)(r4) = (u8)r0;
    r0 = *(u8*)(r3 + 0x5);
    *(u8*)(r4 + 0x1) = (u8)r0;
    r0 = *(u8*)(r3 + 0x6);
    *(u8*)(r4 + 0x2) = (u8)r0;
    r0 = *(u8*)(r3 + 0x7);
    *(u8*)(r4 + 0x3) = (u8)r0;
    goto loc_08006B44;
loc_08006B36:
    r0 = 0x4U;
    *(u8*)(r4) = (u8)r0;
    *(u8*)(r4 + 0x2) = (u8)r0;
    r0 = 0x6U;
    *(u8*)(r4 + 0x1) = (u8)r0;
    r0 = 0x0U;
    *(u8*)(r4 + 0x3) = (u8)r0;
loc_08006B44:
    r1 = *(u8*)(r4 + 0x2);
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0xCU;
    r0 = sub_0803F18C(r0, r1, r2, r3); // 0x08006B4A
    r1 = *(u8*)(r4 + 0x1);
    r0 = *(u32*)(r5 + 0x4);
    r2 = 0x000005C4U; // [0x08006B98]
    r0 = r0 + r2;
    r0 = sub_0803E42A(r0, r1, r2, r3); // 0x08006B56
    return r0;
    r1 = *(u8*)(r0);
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r1;
    r1 = *(u8*)(r0 + 0x1);
    r4 = sp;
    *(u8*)(r3 + 0x1) = (u8)r1;
    r1 = *(u8*)(r0 + 0x2);
    *(u8*)(r3 + 0x2) = (u8)r1;
    r1 = *(u8*)(r0 + 0x3);
    *(u8*)(r3 + 0x3) = (u8)r1;
    r1 = 0x4U;
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x08006B78
    r1 = 0x12345678U; // [0x08006B9C]
    r3 = 0x8U;
    r0 = r0 + r1;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x08070164U; // [0x08006B94]
    r2 = r4;
    r1 = 0x0U;
    r0 = *(u32*)(r0);
    r0 = sub_0803FBDE(r0, r1, r2, r3); // 0x08006B8C
    return r0;
}

// ROM Address: 0x08006B94..0x08006BA0 (12 bytes, Thumb)
u32 sub_08006B94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r4 << 5);
    r7 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r0 = (u32)(*(s8*)(r7 + r1));
    r4 = ((u32)((s32)r6 >> 8));
    return r0;
}

// ROM Address: 0x08006BA0..0x08006BCC (44 bytes, Thumb)
u32 sub_08006BA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x0807016CU; // [0x08006BCC]
    r5 = r0;
    r0 = *(u32*)(r4);
    r0 = sub_08011AA0(r0, r1, r2, r3); // 0x08006BA8
    r0 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08006BBE;
    r2 = 0x0U;
    r1 = 0xCU;
    r0 = *(u32*)(r4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08006BBA
loc_08006BBE:
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x2C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08006BC6: BL 0x08046AA2
    return r0;
}

// ROM Address: 0x08006BCC..0x08006BD0 (4 bytes, Thumb)
u32 sub_08006BCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r5 << 5);
    r7 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08006BD0..0x08006C3A (106 bytes, Thumb)
u32 sub_08006BD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x08070174U; // [0x08006D58]
    r2 = 0x0U;
    r1 = 0xDU;
    r0 = *(u32*)(r4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08006BDA
    r1 = 0xDU;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x08006BE2: BL 0x080193AE
    return r0;
    r4 = 0x08070174U; // [0x08006D58]
    r5 = r0;
    r0 = *(u32*)(r4);
    r0 = sub_08011E94(r0, r1, r2, r3); // 0x08006BF0
    r2 = 0x0U;
    r1 = 0xEU;
    r0 = *(u32*)(r4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08006BFA
    r1 = 0xEU;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x08006C02: BL 0x080193AE
    r0 = r5;
    if (cmp_lhs == cmp_rhs) goto loc_08006C16;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006C12: BL __call_via_r3
loc_08006C16:
    return r0;
    r5 = 0x08070174U; // [0x08006D58]
    r2 = 0x0U;
    r1 = 0xCU;
    r0 = *(u32*)(r5);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08006C22
    r4 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r1 = 0xCU;
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x08006C2C: BL 0x080193AE
    r1 = r0 - 1;
    r4 |= r1;
    if (cmp_lhs != cmp_rhs) return sub_08006C3A(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08006C3A..0x08006C3E (4 bytes, Thumb)
u32 sub_08006C3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08006C38(r0, r1, r2, r3);
}

// ROM Address: 0x08006C3E..0x08006C74 (54 bytes, Thumb)
u32 sub_08006C3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08006C68;
    r6 = r5 + 4;
loc_08006C4C:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = 0xDU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006C5C: BL __call_via_r3
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08006C4C;
loc_08006C68:
    r0 = 0x08070174U; // [0x08006D58]
    r1 = 0xDU;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x08006C6E: BL 0x080193AE
    return r0;
}

// ROM Address: 0x08006C74..0x08006C8A (22 bytes, Thumb)
u32 sub_08006C74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08006CC4(r0, r1, r2, r3);
    r0 = 0x08070174U; // [0x08006D58]
    r7 = *(u32*)(r0);
    r7 += 0x4U;
    stack[0] = r7; // [sp + 0x0]
    r6 = r5 + 4;
    return r0;
}

// ROM Address: 0x08006C8A..0x08006CAC (34 bytes, Thumb)
u32 sub_08006C8A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r1 = *(u32*)(r0 + 0x4);
    r7 = stack[0]; // [sp + 0x0]
    r0 = 0x0U;
    r3 = *(u32*)(r7);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08006CBC(r0, r1, r2, r3);
loc_08006C9A:
    r2 = (r0 << 2);
    r2 = r2 + r7;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_08006CAC(r0, r1, r2, r3);
    r0 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08006C9A;
    return sub_08006CBC(r0, r1, r2, r3);
}

// ROM Address: 0x08006CAC..0x08006CE0 (52 bytes, Thumb)
u32 sub_08006CAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = 0xEU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006CB8: BL __call_via_r3
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_08006C8A(r0, r1, r2, r3);
    r0 = 0x08070174U; // [0x08006D58]
    r1 = 0xEU;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x08006CCA: BL 0x080193AE
    r0 = r5;
    if (cmp_lhs == cmp_rhs) goto loc_08006CDE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006CDA: BL __call_via_r3
loc_08006CDE:
    return r0;
}

// ROM Address: 0x08006CE0..0x08006CFC (28 bytes, Thumb)
u32 sub_08006CE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r5 = 0x0U;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08006D3A(r0, r1, r2, r3);
    r0 = 0x08070174U; // [0x08006D58]
    r7 = *(u32*)(r0);
    r7 += 0x4U;
    r1 = r6 + 4;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r7; // [sp + 0x8]
    return r0;
}

// ROM Address: 0x08006CFC..0x08006D20 (36 bytes, Thumb)
u32 sub_08006CFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r4 << 2);
    r0 = r0 + r1;
    r1 = *(u32*)(r0 + 0x4);
    r7 = stack[2]; // [sp + 0x8]
    r0 = 0x0U;
    r3 = *(u32*)(r7);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08006D32(r0, r1, r2, r3);
loc_08006D0E:
    r2 = (r0 << 2);
    r2 = r2 + r7;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_08006D20(r0, r1, r2, r3);
    r0 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08006D0E;
    return sub_08006D32(r0, r1, r2, r3);
}

// ROM Address: 0x08006D20..0x08006D74 (84 bytes, Thumb)
u32 sub_08006D20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = 0xCU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08006D2C: BL __call_via_r3
    r5 |= r0;
    r0 = *(u32*)(r6 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_08006CFC(r0, r1, r2, r3);
    r0 = 0x08070174U; // [0x08006D58]
    r1 = 0xCU;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x08006D40: BL 0x080193AE
    r0 -= 0x1U;
    r0 |= r5;
    r1 = r0;
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006D52;
    r0 = 0x0U;
loc_08006D52:
    return r0;
    r0 = r0;
    r4 = (r6 << 5);
    r7 = (r0 >> 32);
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08006D74(r0, r1, r2, r3);
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006D68: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08006D74(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08006D74..0x08006D80 (12 bytes, Thumb)
u32 sub_08006D74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r5;
    *(u32*)(r4) = (u32)r5;
    r0 = Table_ClearSlot1(r0, r1, r2, r3); // 0x08006D78: BL 0x08010D7C
    r0 = r4;
    return sub_08006D72(r0, r1, r2, r3);
}

// ROM Address: 0x08006D80..0x08006DB0 (48 bytes, Thumb)
u32 sub_08006D80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r5 = r1;
    r0 = sub_08010D9A(r0, r1, r2, r3); // 0x08006D88
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006D96;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08006D92: BL 0x0803D63C
loc_08006D96:
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08006DB0(r0, r1, r2, r3);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006DA4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08006DB0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08006DB0..0x08006DCE (30 bytes, Thumb)
u32 sub_08006DB0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x080496CCU /* &VTable_080496CC */; // [0x08006E14]
    *(u32*)(r4) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x8U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0xC) = (u32)r5;
    r0 = r5;
    r0 = Table_ClearSlot1(r0, r1, r2, r3); // 0x08006DC2: BL 0x08010D7C
    r0 = 0x0804BB74U /* &VTable_0804BB74 */; // [0x08006E18]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_08006DAE(r0, r1, r2, r3);
}

// ROM Address: 0x08006DCE..0x08006DEE (32 bytes, Thumb)
u32 sub_08006DCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08007064(r0, r1, r2, r3); // 0x08006DD0
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08006DEE(r0, r1, r2, r3);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006DE2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08006DEE(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08006DEE..0x08006E0A (28 bytes, Thumb)
u32 sub_08006DEE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x080495B4U /* &VTable_080495B4 */; // [0x08006E1C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x8U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0xC) = (u32)r5;
    r0 = r5;
    r0 = Table_ClearSlot1(r0, r1, r2, r3); // 0x08006DFE: BL 0x08010D7C
    r0 = 0x0804B57CU /* &VTable_0804B57C */; // [0x08006E20]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_08006DEC(r0, r1, r2, r3);
}

// ROM Address: 0x08006E0A..0x08006E18 (14 bytes, Thumb)
u32 sub_08006E0A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08007064(r0, r1, r2, r3); // 0x08006E0C
    return r0;
    r0 = r0;
    stack[204] = r6; // [sp + 0x330]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08006E20..0x08006E38 (24 bytes, Thumb)
u32 sub_08006E20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x0807017CU; // [0x08006E38]
    r0 = *(u32*)(r0);
    r0 = sub_08011AA0(r0, r1, r2, r3); // 0x08006E2C
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080124F8(r0, r1, r2, r3); // 0x08006E32
    return r0;
}

// ROM Address: 0x08006E38..0x08006E3C (4 bytes, Thumb)
u32 sub_08006E38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r7 << 5);
    r7 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08006E3C..0x08006EE8 (172 bytes, Thumb)
u32 sub_08006E3C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08070180U; // [0x08006FE0]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08011A1E(r0, r1, r2, r3); // 0x08006E42: BL 0x08011A1E
    r0 = 0x03001C34U; // [0x08006FE4]
    r1 = *(u32*)(r0);
    r0 = 0x08070180U; // [0x08006FE0]
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_080126D4(r0, r1, r2, r3); // 0x08006E4E
    r0 = 0x08070180U; // [0x08006FE0]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_0800425C(r0, r1, r2, r3); // 0x08006E56
    r0 = 0x08070180U; // [0x08006FE0]
    r1 = 0x08070180U; // [0x08006FE0]
    r0 = *(u32*)(r0 + 0x8);
    r5 = 0x10U;
    r0 += 0x80U;
    r2 = *(u32*)(r0 + 0x10);
    r0 = 0x000005C4U; // [0x08006FE8]
    r1 = *(u32*)(r1 + 0x4);
    r0 = r1 + r0;
    r1 = 0x08319488U; // [0x08006FEC]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08006EE8(r0, r1, r2, r3);
    r6 = 0x08070180U; // [0x08006FE0]
    r2 = *(u32*)(r6);
    r2 = *(u16*)(r2 + 0x4);
    r2 = (r2 << 29);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08006EE8(r0, r1, r2, r3);
    r7 = 0x0U;
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08006E84
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006E8A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006E9C;
    r1 = (r5 << 4);
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804A920U /* &VTable_0804A920 */; // [0x08006FF0]
    *(u32*)(r0 + 0x8) = (u32)r5;
    *(u32*)(r0) = (u32)r1;
loc_08006E9C:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08006E9C
    r0 = *(u32*)(r6 + 0x14);
    r0 = sub_08011DB4(r0, r1, r2, r3); // 0x08006EA2
    r0 = 0x00008044U; // [0x08006FF4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006EA8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08006EBA;
    r0 = r4;
    r0 = sub_080256F0(r0, r1, r2, r3); // 0x08006EB2
    r0 = 0x0804E384U /* &VTable_0804E384 */; // [0x08006FF8]
    *(u32*)(r4) = (u32)r0;
loc_08006EBA:
    r0 = r4;
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08006EBC
    r0 = *(u32*)(r6 + 0x14);
    r0 = sub_08011E0E(r0, r1, r2, r3); // 0x08006EC2
    r1 = 0x1U;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x08006ECA
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006ED0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006EE0;
    r1 = 0x0804A4B8U /* &VTable_0804A4B8 */; // [0x08006FFC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r5;
loc_08006EE0:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08006EE0
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08006EE8..0x08006FE4 (252 bytes, Thumb)
u32 sub_08006EE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x08070180U; // [0x08006FE0]
    r2 = *(u32*)(r4);
    r2 = *(u16*)(r2 + 0x4);
    r2 = (r2 << 28);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08006FDA;
    r2 = *(u32*)(r4 + 0xC);
    r3 = 0x68U;
    r6 = *(u8*)(r2);
    r3 *= r6;
    r2 = r3 + r2;
    r3 = 0x4F8U; // (159 << 3)
    r2 = r2 + r3;
    r2 += 0x16U;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r2 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006FDA;
    r6 = 0x0U;
    r3 = r6;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08006F14
    r0 = *(u32*)(r4 + 0xC);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_08006F56;
    r1 = 0x08070180U; // [0x08006FE0]
    r1 += 0x18U;
    r0 = 0x27U;
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x08006F26: BL 0x0802BFBC
    r5 = r0;
    r1 = r0;
    r0 = *(u32*)(r4 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08006F30: BL 0x0801191A
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006F36: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006F42;
    r1 = 0x0804A014U /* &VTable_0804A014 */; // [0x08007000]
    *(u32*)(r0) = (u32)r1;
loc_08006F42:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08006F42
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_08011E94(r0, r1, r2, r3); // 0x08006F48
    r1 = r5;
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08006F50
    goto loc_08006FDA;
loc_08006F56:
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006F58: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006F6C;
    r1 = 0xFFU;
    r1 += 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804A920U /* &VTable_0804A920 */; // [0x08006FF0]
    *(u32*)(r0 + 0x8) = (u32)r5;
    *(u32*)(r0) = (u32)r1;
loc_08006F6C:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08006F6C
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_08011DB4(r0, r1, r2, r3); // 0x08006F72
    r0 = 0xFFU;
    r0 += 0x59U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006F7A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006FA6;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08007004]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    *(u32*)(r1 + 0x14) = (u32)r6;
    *(u32*)(r1 + 0x18) = (u32)r6;
    *(u32*)(r1 + 0x20) = (u32)r6;
    *(u32*)(r1 + 0x24) = (u32)r6;
    r1 = 0xFFU;
    r1 += 0x55U;
    *(u32*)(r1 + r0) = r6;
    r1 = 0x0804AC88U /* &VTable_0804AC88 */; // [0x08007008]
    *(u32*)(r0) = (u32)r1;
loc_08006FA6:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08006FA6
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_08011E0E(r0, r1, r2, r3); // 0x08006FAC
    r1 = 0x1U;
    r0 = *(u32*)(r4 + 0x8);
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x08006FB4
    r2 = 0x0U;
    r1 = 0x1AU;
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08006FBE
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08006FC4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08006FD4;
    r1 = 0x0804A4B8U /* &VTable_0804A4B8 */; // [0x08006FFC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r5;
loc_08006FD4:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08006FD4
    goto loc_08006FDC;
loc_08006FDA:
    goto loc_08006FDC;
loc_08006FDC:
    r0 = 0x0U;
    return sub_08006EE6(r0, r1, r2, r3);
    r0 = (r0 << 6);
    r7 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08006FFA..0x08007052 (88 bytes, Thumb)
u32 sub_08006FFA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = 0x080072E0U;
    r4 = (r0 >> 32);
    r0 = 0x08007054U;
    r4 = (r0 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = 0x220; // sp + 0x220
    r4 = (r0 >> 32);
    r5 = 0x080701A0U; // [0x08007070]
    r4 = r0;
    r0 = *(u32*)(r5 + 0x8);
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800701C: BL 0x08046AA2
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08007028: BL 0x08046AA2
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x0800702E
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x20);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800703A: BL 0x08046AA2
    return r0;
    r1 = *(u32*)(r0);
    r4 = r0;
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800704A: BL 0x08046AA2
    r0 = 0x080701A0U; // [0x08007070]
    r0 = *(u32*)(r0);
    return r0;
}

// ROM Address: 0x08007056..0x08007164 (270 bytes, Thumb)
u32 sub_08007056(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800705E: BL 0x08046AA2
    return r0;
    r0 = 0x080701A0U; // [0x08007070]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x0800706A
    return r0;
    r0 = (r4 << 6);
    r7 = (r0 >> 32);
loc_08007074:
    r5 = 0xFFU;
    r5 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    r4 = 0x080701B0U; // [0x08007164]
    if (cmp_lhs <= cmp_rhs) goto loc_08007084;
    r3 = r5;
    goto loc_0800708A;
loc_08007084:
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0800708A;
    r3 = 0x0U;
loc_0800708A:
    r2 *= r3;
    r7 = r2;
    r0 *= r3;
    r1 *= r3;
    lr = r1;
    r12 = r0;
    r2 = 0x5000000U; // (5 << 24)
    r0 = 0x1U;
    r1 = r5 - r3;
    r0 = (r0 << 9);
loc_080070A0:
    r5 = *(u8*)(r4 + 0x1);
    r3 = *(u8*)(r4);
    r6 = *(u8*)(r4 + 0x2);
    r5 *= r1;
    r5 += lr;
    r3 *= r1;
    r3 += r12;
    r5 = ((u32)((s32)r5 >> 11));
    r6 *= r1;
    r6 = r6 + r7;
    r5 = (r5 << 5);
    r3 = ((u32)((s32)r3 >> 11));
    r3 |= r5;
    r6 = ((u32)((s32)r6 >> 11));
    r5 = (r6 << 10);
    r3 |= r5;
    *(u16*)(r2) = (u16)r3;
    r2 += 0x2U;
    r4 += 0x3U;
    r0 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_080070A0;
    return r0;
    r1 = 0xFFU;
    r1 += 0x1U;
    r3 = r1 - r0;
    r1 = 0x0U;
    r2 = 0x0U;
    r0 = 0x0U;
    goto loc_08007074;
    r3 = r0;
    r2 = 0xFFU;
    r1 = 0xFFU;
    r0 = 0xFFU;
    goto loc_08007074;
    r1 = *(u32*)(r0);
    r4 = r0;
    r2 = *(u32*)(r1 + 0x2C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080070EE: BL 0x08046AA2
    r1 = r4 + 4;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r5 = 0xFFU;
    r0 = r0 + r1;
    r5 += 0x1U;
    r3 = r5 - r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r1 = 0x0U;
    r2 = 0x0U;
    r0 = 0x0U;
    r0 = sub_08007074(r0, r1, r2, r3); // 0x08007106
    r1 = *(u32*)(r4 + 0x4);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_08007114;
    r0 = 0x0U;
loc_08007114:
    return r0;
    r0 = 0x080701B0U; // [0x08007164]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = sub_08011A1E(r0, r1, r2, r3); // 0x0800711E: BL 0x08011A1E
    return r0;
    r0 = 0x080701B0U; // [0x08007164]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = sub_08011A1E(r0, r1, r2, r3); // 0x0800712C: BL 0x08011A1E
    return r0;
    r1 = *(u32*)(r0);
    r4 = r0;
    r2 = *(u32*)(r1 + 0x2C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800713C: BL 0x08046AA2
    r1 = r4 + 4;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r2 = 0x0U;
    r0 = r0 - r1;
    r1 = 0xFFU;
    r1 += 0x1U;
    r3 = r1 - r0;
    r1 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x0U;
    r0 = sub_08007074(r0, r1, r2, r3); // 0x08007154
    r1 = *(u32*)(r4 + 0x4);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08007162;
    r0 = 0x0U;
loc_08007162:
    return r0;
}

// ROM Address: 0x08007164..0x08007166 (2 bytes, Thumb)
u32 sub_08007164(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r6 << 6);
    return r0;
}

// ROM Address: 0x08007166..0x08007178 (18 bytes, Thumb)
u32 sub_08007166(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r0 >> 32);
    r1 = 0x080707B0U; // [0x080071BC]
    r1 = *(u32*)(r1);
    r1 = *(u16*)(r1 + 0x2);
    r0 = *(u8*)(r0 + 0x4);
    r1 &= r0;
    if (cmp_lhs == cmp_rhs) return sub_08007178(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08007178..0x0800717C (4 bytes, Thumb)
u32 sub_08007178(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800717C..0x080071A6 (42 bytes, Thumb)
u32 sub_0800717C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x080707B0U; // [0x080071BC]
    r4 = r1;
    r6 = *(u32*)(r7 + 0x4);
    r1 = r2;
    r2 = *(u32*)(r4);
    r6 += 0xC0U;
    r5 = *(u32*)(r6 + 0x8);
    r3 = *(u32*)(r2 + 0x4);
    r0 = r4;
    r3 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08007192: BL __call_via_r3
    r0 = *(u32*)(r6 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_080071A4;
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801268A(r0, r1, r2, r3); // 0x080071A0
loc_080071A4:
    return r0;
}

// ROM Address: 0x080071A6..0x080071AA (4 bytes, Thumb)
u32 sub_080071A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001918U; // [0x080071C0]
    return r0; // BX lr
}

// ROM Address: 0x080071AA..0x080071BC (18 bytes, Thumb)
u32 sub_080071AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001918U; // [0x080071C0]
    r0 += 0x8U;
    return r0; // BX lr
    r0 = 0x03001918U; // [0x080071C0]
    r0 += 0x10U;
    return r0; // BX lr
    r0 = 0x03001918U; // [0x080071C0]
    r0 += 0x18U;
    return r0; // BX lr
}

// ROM Address: 0x080071BC..0x080071C4 (8 bytes, Thumb)
u32 sub_080071BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r6 << 30);
    r7 = (r0 >> 32);
    r0 = r3 + r4;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x080071C4..0x080071DC (24 bytes, Thumb)
u32 sub_080071C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080071DC(r0, r1, r2, r3);
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080071D0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080071DC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080071DC..0x080071F8 (28 bytes, Thumb)
u32 sub_080071DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x080071E0
    r0 = 0x08049BC4U /* &VTable_08049BC4 */; // [0x080072FC]
    r1 = 0x080707BCU; // [0x08007300]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r5;
    r0 = *(u8*)(r5 + 0x10);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u8*)(r1 + r0);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = r4;
    return sub_080071DA(r0, r1, r2, r3);
}

// ROM Address: 0x080071F8..0x080072DE (230 bytes, Thumb)
u32 sub_080071F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = r1;
    r5 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800720A: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r1 = *(u8*)(r6 + 0x11);
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_080072C8;
    r0 = r5;
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r4 = *(u32*)(r6 + 0x14);
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[4]; // [sp + 0x10]
    stack[5] = r0; // [sp + 0x14]
    r3 = 0x14U;
    stack[6] = r1; // [sp + 0x18]
    r0 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x8U;
    r1 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x16U;
    r0 = r0 - r1;
    r1 = stack[5]; // [sp + 0x14]
    r0 = r0 + r1;
    stack[5] = r0; // [sp + 0x14]
    r0 = (u32)(*(s16*)(r4 + r3));
    r3 = 0xAU;
    r1 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x0; // sp + 0x0
    r0 = r0 - r1;
    r1 = stack[6]; // [sp + 0x18]
    r0 = r0 + r1;
    r1 = stack[5]; // [sp + 0x14]
    stack[6] = r0; // [sp + 0x18]
    *(u16*)(r3 + 0x10) = (u16)r1;
    *(u16*)(r3 + 0x12) = (u16)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x2U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08007264: BL __call_via_r3
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x220U; // (17 << 5)
    r0 = r5 + r0;
    r7 = *(u16*)(r0 + 0x10);
    r0 = *(u8*)(r6 + 0x10);
    r1 = r5;
    *(u8*)(r5 + 0x10) = (u8)r0;
    r0 = 0x0U;
    r0 = sub_08006D98(r0, r1, r2, r3); // 0x0800727A
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800727E
    r1 = *(u8*)(r4 + 0x13);
    r2 = 0x1U;
    stack[1] = r2; // [sp + 0x4]
    r0 = 0x080707BCU; // [0x08007300]
    stack[0] = r1; // [sp + 0x0]
    r2 = *(u8*)(r4 + 0x12);
    r1 = *(u8*)(r4 + 0x11);
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r3 = 0x10; // sp + 0x10
    r0 = sub_08008D44(r0, r1, r2, r3); // 0x08007296
    r5 = r0;
    r0 = *(u8*)(r4 + 0x10);
    r1 = r5;
    *(u8*)(r5 + 0x10) = (u8)r0;
    r0 = 0x0U;
    r0 = sub_08006DD6(r0, r1, r2, r3); // 0x080072A4
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080072A8
    r0 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080072C8;
    r0 = 0x220U; // (17 << 5)
    r0 = r5 + r0;
    *(u16*)(r0 + 0x10) = (u16)r7;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x2U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080072C4: BL __call_via_r3
loc_080072C8:
    return r0;
    r5 = r0;
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080072D2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080072DE(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080072DE..0x080072FA (28 bytes, Thumb)
u32 sub_080072DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x080072E2
    r0 = 0x08049BC4U /* &VTable_08049BC4 */; // [0x080072FC]
    r1 = 0x080707BCU; // [0x08007300]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r5;
    r0 = *(u8*)(r5 + 0x10);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u8*)(r1 + r0);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = r4;
    return sub_080072DC(r0, r1, r2, r3);
}

// ROM Address: 0x08007304..0x0800731C (24 bytes, Thumb)
u32 sub_08007304(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800731C(r0, r1, r2, r3);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007310: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800731C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800731C..0x0800733A (30 bytes, Thumb)
u32 sub_0800731C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x08007320
    r0 = 0x08049784U /* &VTable_08049784 */; // [0x080073B8]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5 + 0x10);
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r4;
    return sub_0800731A(r0, r1, r2, r3);
}

// ROM Address: 0x0800733A..0x08007398 (94 bytes, Thumb)
u32 sub_0800733A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049784U /* &VTable_08049784 */; // [0x080073B8]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x14U;
    r0 = sub_08004102(r0, r1, r2, r3); // 0x08007348: BL 0x08004102
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x080073BC]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08007358: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007366;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08007362: BL 0x0803D63C
loc_08007366:
    return r0;
    r1 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007382;
    r2 = r0;
    r2 += 0x14U;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    stack[18] = r0; // [sp + 0x48]
    r0 = 0x4; // sp + 0x4
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0800737E
loc_08007382:
    return r0;
    r5 = r0;
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800738C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08007398(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08007398..0x080073B6 (30 bytes, Thumb)
u32 sub_08007398(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x0800739C
    r0 = 0x08049784U /* &VTable_08049784 */; // [0x080073B8]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5 + 0x10);
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r4;
    return sub_08007396(r0, r1, r2, r3);
}

// ROM Address: 0x080073C0..0x080073D8 (24 bytes, Thumb)
u32 sub_080073C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080073D8(r0, r1, r2, r3);
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080073CC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080073D8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080073D8..0x080073F0 (24 bytes, Thumb)
u32 sub_080073D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x080073DC
    r0 = 0x08049BD4U /* &VTable_08049BD4 */; // [0x08007458]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5 + 0x10);
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = 0x0U;
    *(u16*)(r4 + 0x10) = (u16)r0;
    r0 = r4;
    return sub_080073D6(r0, r1, r2, r3);
}

// ROM Address: 0x080073F0..0x0800743E (78 bytes, Thumb)
u32 sub_080073F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x214U; // (133 << 2)
    r2 = r1 + r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = r0;
    r2 += 0x10U;
    r1 = *(u32*)(r0 + 0x14);
    r4 = 0x4; // sp + 0x4
    r0 = r4;
    r3 = 0x080707C0U; // [0x0800745C]
    r0 = sub_0801246E(r0, r1, r2, r3); // 0x08007408
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800740E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800741C;
    r1 = 0x08049D18U; // [0x08007460]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0800741C:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800741C
    r1 = 0x0U;
    r0 = r4;
    r0 = Ram_DecrementCount1(r0, r1, r2, r3); // 0x08007424: BL 0x080124D2
    return r0;
    r5 = r0;
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007432: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800743E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800743E..0x08007456 (24 bytes, Thumb)
u32 sub_0800743E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x08007442
    r0 = 0x08049BD4U /* &VTable_08049BD4 */; // [0x08007458]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5 + 0x10);
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = 0x0U;
    *(u16*)(r4 + 0x10) = (u16)r0;
    r0 = r4;
    return sub_0800743C(r0, r1, r2, r3);
}

// ROM Address: 0x08007456..0x0800747C (38 bytes, Thumb)
u32 sub_08007456(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r3 = stack[212]; // [sp + 0x350]
    r4 = (r0 >> 32);
    r0 = (r0 << 31);
    r7 = (r0 >> 32);
    r5 = stack[24]; // [sp + 0x60]
    r4 = (r0 >> 32);
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800747C(r0, r1, r2, r3);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007470: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800747C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800747C..0x0800748C (16 bytes, Thumb)
u32 sub_0800747C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x08007480
    r0 = 0x08049794U /* &VTable_08049794 */; // [0x080074BC]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_0800747A(r0, r1, r2, r3);
}

// ROM Address: 0x0800748C..0x080074AA (30 bytes, Thumb)
u32 sub_0800748C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r0 = 0x0877CE00U /* EventPoolRecord */; // [0x080074C0]
    r0 = sub_08012588(r0, r1, r2, r3); // 0x08007492: BL 0x08012588
    return r0;
    r5 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800749E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080074AA(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080074AA..0x080074BA (16 bytes, Thumb)
u32 sub_080074AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x080074AE
    r0 = 0x08049794U /* &VTable_08049794 */; // [0x080074BC]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_080074A8(r0, r1, r2, r3);
}

// ROM Address: 0x080074C4..0x080074DC (24 bytes, Thumb)
u32 sub_080074C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080074DC(r0, r1, r2, r3);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080074D0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080074DC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080074DC..0x080074EC (16 bytes, Thumb)
u32 sub_080074DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x080074E0
    r0 = 0x0804C11CU /* &VTable_0804C11C */; // [0x08007564]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_080074DA(r0, r1, r2, r3);
}

// ROM Address: 0x080074EC..0x08007554 (104 bytes, Thumb)
u32 sub_080074EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080074F0: BL 0x0803D5B8
    r5 = 0x10U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007504;
    r1 = 0x080496CCU /* &VTable_080496CC */; // [0x08007568]
    *(u32*)(r0) = (u32)r1;
    r1 = (r5 << 4);
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r5;
loc_08007504:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08007504
    r4 = 0x080707C8U; // [0x0800756C]
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011DB4(r0, r1, r2, r3); // 0x0800750C
    r0 = 0x0U;
    r0 = sub_08024F3C(r0, r1, r2, r3); // 0x08007512
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08007516
    r1 = 0x1U;
    r0 = *(u32*)(r4);
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x0800751E
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011E0E(r0, r1, r2, r3); // 0x08007524
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800752A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800753C;
    r1 = 0x080495B4U /* &VTable_080495B4 */; // [0x08007570]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r5;
loc_0800753C:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800753C
    return r0;
    r5 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007548: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08007554(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08007554..0x08007564 (16 bytes, Thumb)
u32 sub_08007554(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x08007558
    r0 = 0x0804C11CU /* &VTable_0804C11C */; // [0x08007564]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_08007552(r0, r1, r2, r3);
}

// ROM Address: 0x08007564..0x0800758C (40 bytes, Thumb)
u32 sub_08007564(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r3; r1 += 4;
    *(u32*)r1 = r4; r1 += 4;
    r4 = (r0 >> 32);
    stack[204] = r6; // [sp + 0x330]
    r4 = (r0 >> 32);
    r0 = (r1 << 31);
    r7 = (r0 >> 32);
    stack[180] = r5; // [sp + 0x2D0]
    r4 = (r0 >> 32);
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800758C(r0, r1, r2, r3);
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007580: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800758C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800758C..0x080075AC (32 bytes, Thumb)
u32 sub_0800758C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x08007590
    r0 = 0x0804A09CU /* &VTable_0804A09C */; // [0x080076A8]
    r1 = 0x080707D8U; // [0x080076AC]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r5;
    r0 = *(u8*)(r5 + 0x10);
    r0 = (r0 << 28);
    r0 = (r0 >> 28);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u8*)(r1 + r0);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = r4;
    return sub_0800758A(r0, r1, r2, r3);
}

// ROM Address: 0x080075AC..0x08007638 (140 bytes, Thumb)
u32 sub_080075AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = r1;
    r5 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080075BE: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r1 = *(u8*)(r6 + 0x11);
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08007634;
    r1 = *(u32*)(r5);
    r4 = *(u32*)(r6 + 0x14);
    r2 = *(u32*)(r1 + 0x34);
    r0 = r5;
    r2 = r2 + r1;
    r1 = 0x2U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080075D6: BL __call_via_r3
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x220U; // (17 << 5)
    r0 = r5 + r0;
    r7 = *(u16*)(r0 + 0x10);
    r0 = *(u8*)(r6 + 0x10);
    r1 = r5;
    *(u8*)(r5 + 0x10) = (u8)r0;
    r0 = 0x0U;
    r0 = sub_08006D98(r0, r1, r2, r3); // 0x080075EC
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080075F0
    r1 = *(u8*)(r4 + 0x13);
    r2 = 0x1U;
    stack[1] = r2; // [sp + 0x4]
    r3 = r4;
    r6 = 0x080707D8U; // [0x080076AC]
    stack[0] = r1; // [sp + 0x0]
    r3 += 0x14U;
    r6 -= 0x8U;
    r2 = *(u8*)(r4 + 0x12);
    r1 = *(u8*)(r4 + 0x11);
    r0 = *(u32*)(r6);
    r0 = sub_08008D44(r0, r1, r2, r3); // 0x0800760A
    r5 = r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08007638(r0, r1, r2, r3);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800761C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007630;
    r1 = 0x080495B4U /* &VTable_080495B4 */; // [0x080076B0]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x4U;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08007630:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08007630
loc_08007634:
    return r0;
}

// ROM Address: 0x08007638..0x08007674 (60 bytes, Thumb)
u32 sub_08007638(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r4 + 0x10);
    r1 = (r0 >> 4);
    r1 = (r1 << 28);
    if (cmp_lhs == cmp_rhs) goto loc_08007648;
    r0 = (r0 >> 4);
    r0 += 0xFFU;
    *(u8*)(r5 + 0x10) = (u8)r0;
    goto loc_0800764A;
loc_08007648:
    *(u8*)(r5 + 0x10) = (u8)r0;
loc_0800764A:
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_08006DD6(r0, r1, r2, r3); // 0x0800764E
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08007652
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08007634(r0, r1, r2, r3);
    r0 = 0x220U; // (17 << 5)
    r0 = r5 + r0;
    *(u16*)(r0 + 0x10) = (u16)r7;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x2U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800766E: BL __call_via_r3
    return sub_08007634(r0, r1, r2, r3);
}

// ROM Address: 0x08007674..0x08007686 (18 bytes, Thumb)
u32 sub_08007674(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800767A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08007686(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08007686..0x080076A6 (32 bytes, Thumb)
u32 sub_08007686(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x0800768A
    r0 = 0x0804A09CU /* &VTable_0804A09C */; // [0x080076A8]
    r1 = 0x080707D8U; // [0x080076AC]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r5;
    r0 = *(u8*)(r5 + 0x10);
    r0 = (r0 << 28);
    r0 = (r0 >> 28);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u8*)(r1 + r0);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = r4;
    return sub_08007684(r0, r1, r2, r3);
}

// ROM Address: 0x080076A6..0x080076D6 (48 bytes, Thumb)
u32 sub_080076A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x0800791CU;
    r4 = (r0 >> 32);
    r0 = (r3 << 31);
    r7 = (r0 >> 32);
    stack[180] = r5; // [sp + 0x2D0]
    r4 = (r0 >> 32);
    r2 = *(u32*)(r0 + 0x10);
    r0 = 0x080707DCU; // [0x080076EC]
    r1 = 0x17U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080076BE
    return r0;
    r5 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080076CA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080076D6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}
