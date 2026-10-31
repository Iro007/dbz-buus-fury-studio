/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #12
 * Address Range: 0x0802333E..0x080264D4 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0802333E..0x0802336E (48 bytes, Thumb)
u32 sub_0802333E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2FCU; // (191 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08023342: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08023364;
    r5 = 0x1U;
    r3 = r5;
    r2 = 0xDU;
    r1 = 0x5EU;
    r0 = r4;
    r0 = sub_08005460(r0, r1, r2, r3); // 0x08023354
    r0 = 0x08049B2CU /* &VTable_08049B2C */; // [0x080234C0]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x38) = (u32)r5;
loc_08023364:
    r0 = r4;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08023366
    r0 = 0x1U;
    return sub_0802333C(r0, r1, r2, r3);
}

// ROM Address: 0x0802361A..0x080236D8 (190 bytes, Thumb)
u32 sub_0802361A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0872BFA8U; // [0x080237C4]
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x08023622
    r0 = r4;
    r0 = sub_080067D6(r0, r1, r2, r3); // 0x08023628
    return r0;
    r4 = 0x0872BFA8U; // [0x080237C4]
    r5 = r0;
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x08023636
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_08011A1E(r0, r1, r2, r3); // 0x0802363C: BL 0x08011A1E
    r0 = 0x03002F50U; // [0x080237C8]
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802372C(r0, r1, r2, r3);
    r1 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x0802364E
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x08023654
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x0802365A
    r4 = 0x4000000U; // (1 << 26)
    r0 = *(u16*)(r4);
    r1 = (r4 >> 18);
    r0 &= ~r1;
    *(u16*)(r4) = (u16)r0;
    r0 = 0xFFU;
    r0 += 0x1DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802366E: BL 0x0803D5B8
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x080237AC]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08023696;
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    r3 = 0xFFU;
    r3 += 0x15U;
    *(u32*)(r1 + 0x10) = (u32)r2;
    *(u8*)(r3 + r0) = (u8)r2;
    r3 = 0x0804B550U /* &VTable_0804B550 */; // [0x080237CC]
    *(u32*)(r0) = (u32)r3;
    *(u32*)(r1 + 0x18) = (u32)r2;
loc_08023696:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08023696
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_080236D8(r0, r1, r2, r3);
    r0 = *(u16*)(r4);
    r1 = 0x1100U; // (17 << 8)
    r0 |= r1;
    *(u16*)(r4) = (u16)r0;
    r0 = 0x2FCU; // (191 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080236AC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080236CE;
    r5 = 0x1U;
    r3 = r5;
    r2 = 0xDU;
    r1 = 0x5EU;
    r0 = r4;
    r0 = sub_08005460(r0, r1, r2, r3); // 0x080236BE
    r0 = 0x08049B2CU /* &VTable_08049B2C */; // [0x080237D0]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x38) = (u32)r5;
loc_080236CE:
    r0 = r4;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080236D0
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080236D8..0x0802372E (86 bytes, Thumb)
u32 sub_080236D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x00000F6CU; // [0x080237D4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080236DA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) return sub_0802375E(r0, r1, r2, r3);
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x080237AC]
    r1 = r4;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r1 += 0x100U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u32*)(r1 + 0xC) = (u32)r0;
    *(u32*)(r1 + 0x8) = (u32)r0;
    *(u32*)(r1 + 0x10) = (u32)r0;
    r1 = 0x0804CAA8U /* &VTable_0804CAA8 */; // [0x080237D8]
    *(u32*)(r4) = (u32)r1;
    r1 = 0xFFU;
    r1 += 0x95U;
    *(u32*)(r1 + r4) = r0;
    r1 = 0x00000584U; // [0x080237A4]
    r1 = r4 + r1;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x000005F4U; // [0x080237DC]
    r0 = r4 + r0;
    r0 = sub_08004838(r0, r1, r2, r3); // 0x0802370A
    r0 = 0x00000E9CU; // [0x080237E0]
    r6 = 0x08050869U; // [0x080237E4]
    r5 = r4 + r0;
    r1 = r5;
    r1 += 0x3AU;
    r0 = r5;
    r2 = 0x2U;
    r3 = r6;
    r0 += 0x2EU;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08023720: BL 0x08046FF4
    r7 = 0x08050535U; // [0x080237E8]
    r3 = r7;
    r2 = 0x4U;
    return sub_0802372E(r0, r1, r2, r3);
    return sub_08023768(r0, r1, r2, r3);
}

// ROM Address: 0x0802372E..0x08023768 (58 bytes, Thumb)
u32 sub_0802372E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r1 += 0x4CU;
    r0 = r5;
    r0 += 0x3CU;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08023736: BL 0x08046FF4
    r0 = 0x00000F04U; // [0x080237EC]
    r3 = r6;
    r5 = r4 + r0;
    r1 = r5;
    r1 += 0x3AU;
    r0 = r5;
    r2 = 0x2U;
    r0 += 0x2EU;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0802374A: BL 0x08046FF4
    r1 = r5;
    r1 += 0x4CU;
    r3 = r7;
    r2 = 0x4U;
    r0 = r5;
    r0 += 0x3CU;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0802375A: BL 0x08046FF4
    r0 = r4;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08023760
    r0 = 0x0U;
    return sub_080236D6(r0, r1, r2, r3);
}

// ROM Address: 0x08023768..0x08023770 (8 bytes, Thumb)
u32 sub_08023768(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r5;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x0802376A
    return sub_080236D6(r0, r1, r2, r3);
}

// ROM Address: 0x08023774..0x080237BC (72 bytes, Thumb)
u32 sub_08023774(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080237A0;
    r3 = 0x08023780U;
    r3 = *(u8*)(r3 + r0);
    r3 = (r3 << 1);
    pc += r3;
    r2 = (r0 << 8);
    r7 = (r1 >> 28);
    r7 = r1;
    r0 = 0x0872BFA8U; // [0x080237C4]
    r0 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08023792: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080237A0;
    r1 = 0x03002F50U; // [0x080237C8]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
loc_080237A0:
    return r0;
    r0 = r0;
    r4 = (r0 << 22);
    r0 = r0;
    r4 = (r5 >> 11);
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r7 = 0x280; // sp + 0x280
    r4 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r4 = (r1 << 16);
    r0 = r0;
    return r0;
}

// ROM Address: 0x080237C6..0x08023838 (114 bytes, Thumb)
u32 sub_080237C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r6 >> 1);
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r3 = stack[44]; // [sp + 0xB0]
    r4 = (r0 >> 32);
    r4 = (r5 >> 29);
    r0 = r0;
    r3 = *(u32*)r2; r2 += 4;
    r5 = *(u32*)r2; r2 += 4;
    r7 = *(u32*)r2; r2 += 4;
    r4 = (r0 >> 32);
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
    r4 = r0;
    r0 = 0xFFU;
    r7 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08023A70]
    r0 += 0x8DU;
    r3 = *(u32*)(r7 + r0);
    r6 = 0x0872C34CU; // [0x08023A74]
    r2 = *(u32*)(r6);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x28U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08023816
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802381E
    r0 = 0x2CU;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x0U;
    stack[7] = r2; // [sp + 0x1C]
    r0 = 0x1U;
    r1 = 0x1U;
    stack[6] = r1; // [sp + 0x18]
    r2 = 0x1CU;
    stack[4] = r2; // [sp + 0x10]
    r1 = 0x61U;
    stack[3] = r1; // [sp + 0xC]
    return r0;
}

// ROM Address: 0x0802383A..0x08023840 (6 bytes, Thumb)
u32 sub_0802383A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x2U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    return r0;
}

// ROM Address: 0x08023842..0x08023AE4 (674 bytes, Thumb)
u32 sub_08023842(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r4;
    r2 = 0x0U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x0802384A
    r5 = r4;
    r5 += 0x100U;
    *(u32*)(r5 + 0x14) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802385A
    r2 = 0x1U;
    r1 = 0x0U;
    r0 = 0x2CU;
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x78U;
    r1 = 0x62U;
    r0 = 0x0U;
    r0 = ~r0;
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r2 = 0x0U;
    r1 = 0x2U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r3 = r0;
    r1 = r4;
    r2 = 0x1U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x08023888
    r1 = r0;
    *(u32*)(r5 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08023892
    r0 = 0xFFU;
    r0 += 0x91U;
    r3 = *(u32*)(r7 + r0);
    r2 = *(u32*)(r6);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r3; // [sp + 0x0]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x52U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x080238B2
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080238BA
    r2 = 0x0U;
    r0 = 0x56U;
    stack[5] = r0; // [sp + 0x14]
    stack[7] = r2; // [sp + 0x1C]
    r1 = 0x0U;
    stack[6] = r1; // [sp + 0x18]
    r2 = 0x1CU;
    r0 = 0x4U;
    stack[4] = r2; // [sp + 0x10]
    r1 = 0x65U;
    stack[3] = r1; // [sp + 0xC]
    r2 = r0 - 5;
    r1 = 0x9U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x2U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x0U;
    r0 = 0x0U;
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x080238E6
    r1 = r0;
    *(u32*)(r5 + 0x1C) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080238F0
    r2 = 0x0U;
    r1 = 0x1U;
    stack[6] = r1; // [sp + 0x18]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x44U;
    r1 = 0x66U;
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r0 = 0x56U;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x2U;
    r1 = 0x9U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r0 = 0x6U;
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x4U;
    r1 = r4;
    r3 = 0x0U;
    r0 = 0x0U;
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x0802391C
    r1 = r0;
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08023926
    r2 = 0x0U;
    r1 = 0x0U;
    stack[6] = r1; // [sp + 0x18]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x6CU;
    r1 = 0x67U;
    r0 = 0x56U;
    stack[5] = r0; // [sp + 0x14]
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r2 = 0x4U;
    r1 = 0x9U;
    r0 = 0x0U;
    r0 = ~r0;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x6U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x0U;
    r0 = 0x0U;
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x08023954
    r1 = r0;
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802395E
    r0 = 0x88U;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x0U;
    stack[7] = r2; // [sp + 0x1C]
    r0 = 0x0U;
    r0 = ~r0;
    r2 = 0x9CU;
    stack[4] = r2; // [sp + 0x10]
    r2 = r0;
    r1 = 0x1U;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x60U;
    stack[3] = r1; // [sp + 0xC]
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x9U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x2U;
    r0 = 0x0U;
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x0802398A
    r1 = r0;
    *(u32*)(r5 + 0x38) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08023994
    r0 = *(u32*)(r7 + 0x5C);
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u32*)(r7 + 0x68);
    r1 = stack[8]; // [sp + 0x20]
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u32*)(r6);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x080239A4
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
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080239C2: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080239CA
    r2 = *(u32*)(r6);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[8]; // [sp + 0x20]
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[0] = r2; // [sp + 0x0]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x080239E6
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080239EE
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
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08023A08: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08023A10
    r2 = *(u32*)(r6);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[7]; // [sp + 0x1C]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    r2 += 0x10U;
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08023A2E
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08023A36
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x08023A3E: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08023A46
    r0 = 0x9U;
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = *(u32*)(r6 + 0x4);
    r3 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r3;
    r1 = *(u32*)(r6 + 0x4);
    r0 = 0x3U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r1 = *(u32*)(r6 + 0x4);
    r0 = 0x1U;
    *(u8*)(r1) = (u8)r0;
    r0 = 0x0U;
    r0 = sub_080503A4(r0, r1, r2, r3); // 0x08023A62: BL 0x080503A4
    r0 = sub_08040160(r0, r1, r2, r3); // 0x08023A66
    return r0;
    r0 = r0;
    r6 = (r0 >> 32);
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r6; r3 += 4;
    r2 = (r6 >> 1);
    r5 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = sp;
    r4 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08023A86
    r3 = 0x1U;
    r2 = 0x5FU;
    r1 = r4;
    r0 = r5;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x08023A92
    r1 = 0x06000040U; // [0x08023C7C]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08023A9A: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08023AA2: BL 0x0803F58C
    return r0;
    r5 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08023AE4(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08023B50(r0, r1, r2, r3);
    r0 = 0x2FCU; // (191 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08023ABA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08023ADA;
    r3 = r5;
    r2 = 0xDU;
    r1 = 0x5EU;
    r0 = r4;
    r0 = sub_08005460(r0, r1, r2, r3); // 0x08023ACA
    r0 = 0x08049B2CU /* &VTable_08049B2C */; // [0x08023C80]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x38) = (u32)r5;
loc_08023ADA:
    r0 = r4;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08023ADC
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08023AE4..0x08023B2A (70 bytes, Thumb)
u32 sub_08023AE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 += 0x100U;
    r2 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 10;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08023B50(r0, r1, r2, r3);
    r3 = 0x08023AF8U;
    r3 = *(u8*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
    r4 = (r0 << 16);
    cmp_lhs = (s32)r3; cmp_rhs = 24;
    cmp_lhs = (s32)r3; cmp_rhs = 24;
    cmp_lhs = (s32)r3; cmp_rhs = 24;
    cmp_lhs = (s32)r4; cmp_rhs = 43;
    r3 = *(u32*)(r1 + 0x14);
    r2 = 0x0U;
    *(u32*)(r3 + 0x38) = (u32)r2;
    r3 = *(u32*)(r1 + 0x18);
    *(u32*)(r3 + 0x38) = (u32)r2;
    r2 = *(u32*)(r1 + 0xC);
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0x14);
    *(u32*)(r0 + 0x38) = (u32)r5;
    r0 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08023B22;
    r5 = 0x0U;
loc_08023B22:
    r0 = 0x0872C34CU; // [0x08023C84]
    r0 = *(u32*)(r0 + 0x4);
    *(u8*)(r0) = (u8)r5;
    return sub_08023B50(r0, r1, r2, r3);
}

// ROM Address: 0x08023B50..0x08023B52 (2 bytes, Thumb)
u32 sub_08023B50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08023C1C(r0, r1, r2, r3);
}

// ROM Address: 0x08023C1C..0x08023C20 (4 bytes, Thumb)
u32 sub_08023C1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08023AE2(r0, r1, r2, r3);
}

// ROM Address: 0x08023C22..0x08023C58 (54 bytes, Thumb)
u32 sub_08023C22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08023C58(r0, r1, r2, r3);
    r4 = 0x0U;
    r0 = 0xFFU;
    r0 += 0x15U;
    *(u32*)(r1) = (u32)r4;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08023C32: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08023C50;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08023C88]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    *(u32*)(r1 + 0x10) = (u32)r4;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x08023CB4]
    *(u32*)(r0) = (u32)r1;
loc_08023C50:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08023C50
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08023C58..0x08023C5E (6 bytes, Thumb)
u32 sub_08023C58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x08023C58
    return r0;
}

// ROM Address: 0x08023C5E..0x08023C7C (30 bytes, Thumb)
u32 sub_08023C5E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08023C7A;
    r3 = 0x08023C6CU;
    r3 = *(u8*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r4 = (r0 << 16);
    r4 = (r0 << 28);
    r7 = (r0 << 28);
    r7 = (r0 << 28);
    r1 = 0x03002F50U; // [0x08023CB0]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
loc_08023C7A:
    return r0; // BX lr
}

// ROM Address: 0x08023C7C..0x08023D6E (242 bytes, Thumb)
u32 sub_08023C7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r3 = stack[44]; // [sp + 0xB0]
    r4 = (r0 >> 32);
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r6; r3 += 4;
    r2 = (r6 >> 1);
    stack[12] = r2; // [sp + 0x30]
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
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r5 = *(u32*)(r1 + 0x4);
    r4 = r0;
    r1 = r5;
    r1 += 0x1A0U;
    r0 = *(u32*)(r1);
    r3 = *(u32*)(r1 + 0x4);
    r3 = ((u32)((s32)r3 >> 8));
    stack[8] = r3; // [sp + 0x20]
    r0 = ((u32)((s32)r0 >> 8));
    stack[7] = r0; // [sp + 0x1C]
    stack[6] = r3; // [sp + 0x18]
    r3 = stack[7]; // [sp + 0x1C]
    r6 = stack[8]; // [sp + 0x20]
    stack[5] = r0; // [sp + 0x14]
    r3 = (r3 << 8);
    *(u32*)(r4 + 0x10) = (u32)r3;
    r6 = (r6 << 8);
    *(u32*)(r4 + 0x14) = (u32)r6;
    r0 = *(u32*)(r1);
    r2 = r1 + 4;
    r1 = *(u32*)(r2);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    stack[3] = r0; // [sp + 0xC]
    stack[5] = r0; // [sp + 0x14]
    r0 = *(u32*)(r4 + 0x18);
    r1 = stack[5]; // [sp + 0x14]
    r7 = r4;
    r0 = r0 - r1;
    r1 = *(u32*)(r4 + 0x1C);
    r2 = stack[6]; // [sp + 0x18]
    stack[3] = r0; // [sp + 0xC]
    r1 = r1 - r2;
    stack[4] = r1; // [sp + 0x10]
    r1 = (r1 << 8);
    r0 = (r0 << 8);
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    r0 = *(u32*)(r4 + 0x38);
    r7 += 0x8U;
    r6 = (r0 << 8);
    r0 = stack[5]; // [sp + 0x14]
    r1 = (r0 << 8);
    r0 = r6;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08023D1A: BL 0x08046E58
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[6]; // [sp + 0x18]
    r1 = (r0 << 8);
    r0 = r6;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08023D26: BL 0x08046E58
    r1 = stack[0]; // [sp + 0x0]
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
    stack[4] = r1; // [sp + 0x10]
    *(u32*)(r7) = (u32)r0;
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r7 + 0x4) = (u32)r1;
    r0 = *(u32*)(r4 + 0x8);
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08023D48;
    r0 = (u32)(-(s32)r0);
loc_08023D48:
    r1 = *(u32*)(r4 + 0xC);
    r3 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08023D52;
    r1 = (u32)(-(s32)r1);
loc_08023D52:
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08023D66;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08023D60;
    r0 = 0x3U;
    goto loc_08023D62;
loc_08023D60:
    r0 = 0x2U;
loc_08023D62:
    *(u8*)(r5 + 0x10) = (u8)r0;
    return sub_08023D76(r0, r1, r2, r3);
loc_08023D66:
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_08023D6E(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08023D70(r0, r1, r2, r3);
}

// ROM Address: 0x08023D6E..0x08023E56 (232 bytes, Thumb)
u32 sub_08023D6E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = 0x1U;
    r0 = r1 - r0;
    *(u8*)(r5 + 0x10) = (u8)r0;
    r0 = r5;
    r0 += 0x100U;
    r1 = *(u32*)(r0 + 0x78);
    r0 = *(u32*)(r0 + 0x7C);
    *(u32*)(r4 + 0x24) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r6;
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x2C) = (u32)r6;
    *(u32*)(r4 + 0x30) = (u32)r6;
    r0 = *(u32*)(r4 + 0x38);
    r0 = (r0 << 2);
    *(u32*)(r4 + 0x34) = (u32)r0;
    r1 = *(u32*)(r4 + 0xC);
    r0 = r1 - r0;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x30);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = 0xEU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08023DA2: BL __call_via_r3
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08023DAE: BL 0x08046AA2
    r0 = 0x24U;
    *(u8*)(r5 + 0x8) = (u8)r0;
    return r0;
    r2 = *(u32*)(r0 + 0x34);
    r2 -= 0x8U;
    *(u32*)(r0 + 0x34) = (u32)r2;
    r3 = *(u32*)(r0 + 0x28);
    r4 = *(u32*)(r0 + 0x30);
    r3 = r3 + r4;
    *(u32*)(r0 + 0x28) = (u32)r3;
    r3 = *(u32*)(r0 + 0x2C);
    r2 = r3 + r2;
    *(u32*)(r0 + 0x2C) = (u32)r2;
    r2 = *(u32*)(r0 + 0xC);
    r2 += 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r2;
    r3 = *(u32*)(r0 + 0x10);
    r4 = *(u32*)(r0 + 0x8);
    r3 = r3 + r4;
    *(u32*)(r0 + 0x10) = (u32)r3;
    r3 = *(u32*)(r0 + 0x14);
    r2 = r3 + r2;
    *(u32*)(r0 + 0x14) = (u32)r2;
    r2 = r1;
    r2 += 0xFFU;
    r4 = *(u32*)(r0 + 0x10);
    r2 += 0xA1U;
    *(u32*)r2 = r4; r2 += 4;
    r3 = *(u32*)(r0 + 0x14);
    *(u32*)(r2) = (u32)r3;
    r3 = r2;
    r2 = *(u32*)(r0 + 0x28);
    r1 = *(u32*)(r0 + 0x2C);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r1 = *(u32*)(r0 + 0x20);
    r2 = stack[2]; // [sp + 0x8]
    r0 = *(u32*)(r0 + 0x24);
    r1 = r1 + r2;
    r2 = stack[3]; // [sp + 0xC]
    r3 -= 0x2CU;
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    r1 = stack[1]; // [sp + 0x4]
    *(u32*)r3 = r0; r3 += 4;
    *(u32*)r3 = r1; r3 += 4;
    return r0; // BX lr
    r5 = r0;
    r0 = *(u32*)(r0 + 0x3C);
    r4 = *(u32*)(r1 + 0x4);
    r0 += 0x1U;
    *(u32*)(r5 + 0x3C) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs < cmp_rhs) goto loc_08023E54;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_08023E56(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x30);
    r3 = r2 + r1;
    r2 = 0x1U;
    r1 = 0xEU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08023E48: BL __call_via_r3
    r1 = r4;
    r0 = r5;
    r0 = sub_08023DBA(r0, r1, r2, r3); // 0x08023E50
loc_08023E54:
    return r0;
}

// ROM Address: 0x08023E56..0x08023EE0 (138 bytes, Thumb)
u32 sub_08023E56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5 + 0x38);
    r2 = (r1 >> 31);
    r2 = r2 + r1;
    r2 = ((u32)((s32)r2 >> 1));
    r2 += 0x8U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08023E6E;
    r1 = r4;
    r0 = r5;
    r0 = sub_08023DBA(r0, r1, r2, r3); // 0x08023E68
    return sub_08023E54(r0, r1, r2, r3);
loc_08023E6E:
    r2 = r1;
    r2 += 0x8U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08023EA2;
    r3 = *(u32*)(r4 + 0x50);
    r2 = 0x2U;
    r3 = *(u32*)(r3);
    cmp_lhs = (s32)r3; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_08023E8A;
    r0 = r0 - r1;
    r0 += 0x8U;
    r0 = (r0 << 28);
    r2 = (r0 >> 31);
    r2 += 0x2U;
loc_08023E8A:
    r1 = *(u32*)(r4);
    r0 = r4;
    r3 = *(u32*)(r1 + 0x30);
    r3 = r3 + r1;
    r1 = 0xEU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08023E94: BL __call_via_r3
    r1 = r4;
    r0 = r5;
    r0 = sub_08023DBA(r0, r1, r2, r3); // 0x08023E9C
    return sub_08023E54(r0, r1, r2, r3);
loc_08023EA2:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08023EC4;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x30);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = 0xEU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08023EB2: BL __call_via_r3
    r5 += 0x20U;
    r4 += 0x178U;
    r0 = *(u32*)r5; r5 += 4;
    r1 = *(u32*)r5; r5 += 4;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    return sub_08023E54(r0, r1, r2, r3);
loc_08023EC4:
    r1 += 0x10U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08023E54(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x40);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08023ED2: BL 0x08046AA2
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    return r0;
}

// ROM Address: 0x08023EE6..0x08023EF4 (14 bytes, Thumb)
u32 sub_08023EE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x38U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r0 += 0x10U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_08023EF4(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08023EF4..0x08023EF8 (4 bytes, Thumb)
u32 sub_08023EF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08023EF8..0x08023F32 (58 bytes, Thumb)
u32 sub_08023EF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = r1;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u8*)(r0 + 0x11) = (u8)r2;
    r1 = 0x12U;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08023F08
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08023F32(r0, r1, r2, r3);
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08023F2A: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08023F32..0x08023F84 (82 bytes, Thumb)
u32 sub_08023F32(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08023F3C;
    r0 = 0x0U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return sub_08023F2E(r0, r1, r2, r3);
loc_08023F3C:
    r0 = (r0 << 28);
    r0 = (r0 >> 30);
    *(u8*)(r1 + 0x11) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08023F48;
    r0 = 0x2U;
    *(u8*)(r1 + 0x11) = (u8)r0;
loc_08023F48:
    r0 = r1;
    r0 += 0x1A0U;
    r2 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r2 = ((u32)((s32)r2 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r0; // [sp + 0x8]
    r0 = r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r0 = *(u8*)(r1 + 0x10);
    r2 = 0x0872C358U; // [0x0802402C]
    r0 = (r0 << 3);
    r0 = r0 + r2;
    r2 = stack[3]; // [sp + 0xC]
    r3 = *(u32*)(r0);
    r2 = r2 + r3;
    r3 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r0 + 0x4);
    stack[1] = r2; // [sp + 0x4]
    r0 = r3 + r0;
    stack[2] = r0; // [sp + 0x8]
    r0 = r2;
    r2 = stack[2]; // [sp + 0x8]
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x14; // sp + 0x14
    stack[6] = r2; // [sp + 0x18]
    return r0;
}

// ROM Address: 0x08023F8C..0x080240DA (334 bytes, Thumb)
u32 sub_08023F8C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xBDU;
    r2 = 0x083192A8U; // [0x08024030]
    r1 = (r1 << 2);
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r1 = r1 + r2;
    r4 = 0x000005C4U; // [0x08024034]
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r4;
    r0 = sub_0803E32C(r0, r1, r2, r3); // 0x08023FA2: BL 0x0803E32C
    return r0;
    r0 = 0x03001C34U; // [0x08024038]
    r5 = 0x0U;
    r0 = *(u32*)(r0);
    r4 = r1;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802403C]
    r1 = r5;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[1] = r5; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    if (cmp_lhs == cmp_rhs) goto loc_08023FC8;
    r1 = r4;
    r1 += 0x18CU;
loc_08023FC8:
    r0 = sp;
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08023FCA
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08023FD2
    r1 = 0x03002FA8U; // [0x08024040]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08023FDA
    r0 = 0x0872C358U; // [0x0802402C]
    r1 = 0xBDU;
    r2 = 0x083192A8U; // [0x08024030]
    r1 = (r1 << 2);
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r1 = r1 + r2;
    r4 = 0x000005C4U; // [0x08024034]
    r2 = 0x40U;
    r3 = r5;
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08023FF4
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08024044]
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802400E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802400A: BL __call_via_r3
loc_0802400E:
    return r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03002FA8U; // [0x08024040]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08024020;
    r0 = 0x0U;
loc_08024020:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = 0x03002FA8U; // [0x08024040]
    r0 += 0x4U;
    return r0; // BX lr
    r0 = r0;
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r6; r3 += 4;
    r2 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 168;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = sub_08024120(r0, r1, r2, r3); // 0x0802404C
    r4 += 0x110U;
    r0 = 0xFFU;
    r0 += 0x35U;
    r7 = *(u8*)(r4 + 0xC);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802405A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080240A8;
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x0802410C]
    r5 = r4;
    *(u32*)(r4) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x15U;
    *(u8*)(r0 + r4) = (u8)r7;
    r5 += 0xFFU;
    r6 = 0x0U;
    r5 += 0x1U;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    *(u32*)(r5 + 0x20) = (u32)r6;
    r1 = ~r6;
    r0 = r4;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08024082: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802408C: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08024110]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x08024114]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x03002F54U; // [0x08024118]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x08049A9CU /* &VTable_08049A9C */; // [0x0802411C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x31U;
    *(u32*)(r5 + 0x2C) = (u32)r6;
    *(u8*)(r0 + r4) = (u8)r7;
loc_080240A8:
    r0 = r4;
    r0 = sub_08040160(r0, r1, r2, r3); // 0x080240AA
    return r0;
    r0 = sub_0802426E(r0, r1, r2, r3); // 0x080240B2: BL 0x0802426E
    return r0;
    r1 = 0x03002F54U; // [0x08024118]
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080240DA(r0, r1, r2, r3);
    r1 = r0;
    r1 += 0x100U;
    r2 = *(u32*)(r1 + 0x18);
    r2 += 0x1U;
    *(u32*)(r1 + 0x18) = (u32)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 10;
    if (cmp_lhs <= cmp_rhs) return sub_080240DA(r0, r1, r2, r3);
    r0 = sub_08040182(r0, r1, r2, r3); // 0x080240D2
    r0 = 0x2U;
    return r0;
}

// ROM Address: 0x080240DA..0x080240E0 (6 bytes, Thumb)
u32 sub_080240DA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x080240DA
    return sub_080240D8(r0, r1, r2, r3);
}

// ROM Address: 0x080240E0..0x080241F6 (278 bytes, Thumb)
u32 sub_080240E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0x2C);
    *(u8*)(r1) = (u8)r0;
    r0 = 0x1U;
    return r0; // BX lr
    r1 = 0xFFU;
    r1 += 0x31U;
    r1 = *(u8*)(r1 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0802410A;
    r0 += 0x100U;
    r1 = *(u32*)(r0 + 0x2C);
    r1 += 0x1U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs <= cmp_rhs) goto loc_0802410A;
    r1 = 0x03002F54U; // [0x08024118]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
loc_0802410A:
    return r0; // BX lr
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    r2 = stack[156]; // [sp + 0x270]
    r4 = (r0 >> 32);
    r5 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080242D8]
    r7 = *(u32*)(r5 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x1U;
    r2 = 0x1CU;
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r4 = r0;
    r1 = r4;
    r2 = 0x1U;
    r3 = 0xCU;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08024140: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08024148
    r6 = 0x0872C384U; // [0x080242DC]
    r1 = 0x0U;
    r2 = *(u32*)(r6);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x28U;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08024164
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802416C
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = *(u8*)(r0 + r4);
    r3 = 0x10U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080241F6(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0802421E(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08024246(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_080241AE;
    r0 = 0xFFU;
    r0 += 0x75U;
    r5 = *(u32*)(r5 + r0);
    r2 = *(u32*)(r6);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x10U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x080241A2
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080241AA
loc_080241AE:
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F800U; // [0x080242E0]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080241B6: BL 0x0804912C
    r2 = 0x1DC0U; // (119 << 6)
    r1 = 0x0U;
    r0 = 0x06009640U; // [0x080242E4]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080241C2: BL 0x0804912C
    r0 = 0x7U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x8U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x18U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0xFU;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r2 = 0x00000259U; // [0x080242E8]
    r1 = 0x0600F800U; // [0x080242E0]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x080241DC
    r1 = 0x3FU;
    r0 = 0x4000000U; // (1 << 26)
    r1 = (r1 << 7);
    *(u16*)(r0 + 0x8) = (u16)r1;
    r1 = *(u16*)(r0);
    r2 = (r0 >> 18);
    r1 |= r2;
    *(u16*)(r0) = (u16)r1;
    return r0;
}

// ROM Address: 0x080241F6..0x0802426E (120 bytes, Thumb)
u32 sub_080241F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xFFU;
    r0 += 0x69U;
    r5 = *(u32*)(r5 + r0);
    r2 = *(u32*)(r6);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x10U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08024210
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08024218
    return sub_080241AE(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x71U;
    r5 = *(u32*)(r5 + r0);
    r2 = *(u32*)(r6);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x10U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08024238
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08024240
    return sub_080241AE(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x6DU;
    r5 = *(u32*)(r5 + r0);
    r2 = *(u32*)(r6);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x10U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08024260
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08024268
    return sub_080241AE(r0, r1, r2, r3);
}

// ROM Address: 0x0802426E..0x080242D2 (100 bytes, Thumb)
u32 sub_0802426E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x4000000U; // (1 << 26)
    r1 = *(u16*)(r3);
    r2 = (r3 >> 18);
    r1 &= ~r2;
    *(u16*)(r3) = (u16)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802428C;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08024288: BL __call_via_r3
loc_0802428C:
    return r0;
    r5 = r0;
    r2 = 0x38U;
    r1 = 0x88U;
    r0 = sp;
    r4 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0802429C
    r0 = r4;
    r0 = sub_08005096(r0, r1, r2, r3); // 0x080242A2
    r1 = r4;
    r0 = r5;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x080242AA
    r1 = 0x06009640U; // [0x080242E4]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x080242B2: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080242BA: BL 0x0803F58C
    return r0;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_080242D2(r0, r1, r2, r3);
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x080242CA
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080242D2..0x080242D6 (4 bytes, Thumb)
u32 sub_080242D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_080242D0(r0, r1, r2, r3);
}

// ROM Address: 0x080242EC..0x0802435C (112 bytes, Thumb)
u32 sub_080242EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08024120(r0, r1, r2, r3); // 0x080242F2
    r6 = r4;
    r6 += 0x100U;
    r1 = *(u32*)(r6 + 0x28);
    r0 = 0xFFU;
    r0 += 0x45U;
    r5 = 0x7U;
    r7 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802437A(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08024374(r0, r1, r2, r3);
    r1 = *(u32*)(r6 + 0x18);
    stack[2] = r1; // [sp + 0x8]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08024312: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) return sub_0802436E(r0, r1, r2, r3);
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x08024558]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r1 += 0x15U;
    *(u8*)(r1 + r4) = (u8)r5;
    r5 = r4;
    r5 += 0x100U;
    *(u32*)(r5 + 0x1C) = (u32)r7;
    *(u32*)(r5 + 0x20) = (u32)r7;
    r1 = ~r7;
    r0 = r4;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r7;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08024338: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08024342: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x0802455C]
    r1 = 0x03002FB0U; // [0x0802456C]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x08024560]
    *(u32*)(r0) = (u32)r7;
    r0 = 0x03002F54U; // [0x08024564]
    *(u32*)(r0) = (u32)r7;
    r0 = 0x08049E64U /* &VTable_08049E64 */; // [0x08024568]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r5 + 0x38) = (u32)r0;
    return r0;
}

// ROM Address: 0x0802435E..0x0802437A (28 bytes, Thumb)
u32 sub_0802435E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r1) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x41U;
    *(u32*)(r5 + 0x3C) = (u32)r7;
    *(u32*)(r0 + r4) = r7;
    *(u32*)(r1 + 0x4) = (u32)r7;
    r0 = r4;
    r0 = sub_08040160(r0, r1, r2, r3); // 0x08024370
    *(u32*)(r6 + 0x2C) = (u32)r7;
    return r0;
}

// ROM Address: 0x0802437A..0x080243E6 (108 bytes, Thumb)
u32 sub_0802437A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r6 + 0x20);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r6 + 0x24);
    stack[2] = r1; // [sp + 0x8]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08024382: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080243E4;
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x08024558]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r1 += 0x15U;
    *(u8*)(r1 + r4) = (u8)r5;
    r5 = r4;
    r5 += 0x100U;
    *(u32*)(r5 + 0x1C) = (u32)r7;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r5 + 0x20) = (u32)r7;
    r0 = r4;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r7;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080243AA: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080243B4: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x0802455C]
    r1 = 0x03002FB0U; // [0x0802456C]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x08024560]
    *(u32*)(r0) = (u32)r7;
    r0 = 0x03002F54U; // [0x08024564]
    *(u32*)(r0) = (u32)r7;
    r0 = 0x08049E64U /* &VTable_08049E64 */; // [0x08024568]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r5 + 0x38) = (u32)r7;
    *(u32*)(r1) = (u32)r0;
    r0 = stack[1]; // [sp + 0x4]
    *(u32*)(r5 + 0x30) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    *(u32*)(r5 + 0x34) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x41U;
    *(u32*)(r5 + 0x3C) = (u32)r7;
    *(u32*)(r0 + r4) = r7;
    *(u32*)(r1 + 0x4) = (u32)r7;
loc_080243E4:
    r0 = r4;
    return r0;
}

// ROM Address: 0x080243EC..0x08024406 (26 bytes, Thumb)
u32 sub_080243EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0802426E(r0, r1, r2, r3); // 0x080243EE: BL 0x0802426E
    return r0;
    r1 = 0x03002F50U; // [0x08024560]
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08024406(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08024406..0x0802442C (38 bytes, Thumb)
u32 sub_08024406(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x03002FB0U; // [0x0802456C]
    r1 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024426;
    r1 = r0;
    r1 += 0x100U;
    r2 = *(u32*)(r1 + 0x1C);
    r2 += 0x1U;
    *(u32*)(r1 + 0x1C) = (u32)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 30;
    if (cmp_lhs <= cmp_rhs) goto loc_08024426;
    r0 = sub_08040182(r0, r1, r2, r3); // 0x0802441E
    r0 = 0x2U;
    return sub_08024404(r0, r1, r2, r3);
loc_08024426:
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x08024426
    return sub_08024404(r0, r1, r2, r3);
}

// ROM Address: 0x0802442C..0x080244DA (174 bytes, Thumb)
u32 sub_0802442C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r5 += 0x100U;
    r4 = r1;
    r1 = *(u32*)(r5 + 0x38);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08024484;
    r0 += 0x140U;
    r1 = *(u32*)(r0);
    r6 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024462;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08024462;
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_08024478;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08024484;
    *(u8*)(r4) = (u8)r0;
    *(u8*)(r4 + 0x1) = (u8)r0;
    r0 = *(u32*)(r5 + 0x3C);
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0x4U;
    return r0;
loc_08024462:
    r2 = 0x20U;
    r0 = r4 + 4;
    r1 = *(u32*)(r5 + 0x30);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08024468: BL 0x08049138
    *(u8*)(r4) = (u8)r6;
    *(u8*)(r4 + 0x1) = (u8)r6;
    r0 = *(u32*)(r5 + 0x3C);
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0x24U;
    return r0;
loc_08024478:
    *(u8*)(r4) = (u8)r0;
    *(u8*)(r4 + 0x1) = (u8)r6;
    r0 = *(u32*)(r5 + 0x3C);
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0x4U;
    return r0;
loc_08024484:
    r0 = *(u32*)(r5 + 0x2C);
    *(u8*)(r4) = (u8)r0;
    r0 = *(u32*)(r5 + 0x3C);
    *(u8*)(r4 + 0x1) = (u8)r0;
    r0 = 0x2U;
    return r0;
    r4 = r1;
    r1 = r2 - 3;
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080244BC;
    r3 = 0x080244A4U;
    r3 = *(u8*)(r3 + r1);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r5 = (r1 >> 20);
    r5 = (r1 << 12);
    r3 = r3;
    r2 = 0xFFU;
    r2 += 0x3DU;
    r1 = 0x0U;
    *(u32*)(r2 + r0) = r1;
    r0 += 0x140U;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x03002FB0U; // [0x0802456C]
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_080244BC:
    return r0;
    r0 = 0x0872C388U; // [0x08024570]
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080244CA: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080244BC;
    r1 = 0x03002F50U; // [0x08024560]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
    return r0;
}

// ROM Address: 0x080244DA..0x080244EC (18 bytes, Thumb)
u32 sub_080244DA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r5 += 0x100U;
    r1 = *(u32*)(r5 + 0x38);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080244EC(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_080244D8(r0, r1, r2, r3);
    return sub_08024512(r0, r1, r2, r3);
}

// ROM Address: 0x080244EC..0x08024528 (60 bytes, Thumb)
u32 sub_080244EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r6 += 0x140U;
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08024528(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08024532(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08024548(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08024512;
    r1 = *(u8*)(r4 + 0x1);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802450E;
    r0 = 0x0U;
loc_0802450E:
    r1 = 0x03002FB0U; // [0x0802456C]
    *(u32*)(r1 + 0x4) = (u32)r0;
loc_08024512:
    r0 = *(u8*)(r4);
    r1 = 0x03002FB0U; // [0x0802456C]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r5 + 0x3C) = (u32)r0;
    r2 = *(u8*)(r4 + 0x1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08024524;
    r0 = 0x0U;
loc_08024524:
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0;
}

// ROM Address: 0x08024528..0x08024556 (46 bytes, Thumb)
u32 sub_08024528(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x20U;
    r1 = r4 + 4;
    r0 = *(u32*)(r5 + 0x34);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802452E: BL 0x08049138
    r1 = 0x03002FB0U; // [0x0802456C]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r5 + 0x3C) = (u32)r0;
    r1 = *(u8*)(r4 + 0x3);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024544;
    r0 = 0x2U;
loc_08024544:
    *(u32*)(r6) = (u32)r0;
    return sub_08024512(r0, r1, r2, r3);
    r1 = *(u8*)(r4);
    r0 = 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024552;
    r0 = 0x3U;
loc_08024552:
    *(u32*)(r6) = (u32)r0;
    return sub_08024512(r0, r1, r2, r3);
}

// ROM Address: 0x0802455E..0x080245FA (156 bytes, Thumb)
u32 sub_0802455E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    r6 = stack[100]; // [sp + 0x190]
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 176;
    r0 = (r0 << 12);
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r2 = (r6 >> 1);
    r0 = sub_08024120(r0, r1, r2, r3); // 0x08024576
    r0 = 0xFFU;
    r0 += 0x2DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802457E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080245C8;
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x0802469C]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x5U;
    r1 += 0x15U;
    *(u8*)(r1 + r4) = (u8)r0;
    r5 = r4;
    r5 += 0x100U;
    r6 = 0x0U;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    r1 = r0 - 6;
    r0 = r4;
    *(u32*)(r5 + 0x20) = (u32)r6;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080245A8: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080245B2: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x080246A0]
    r1 = 0x03002F54U; // [0x080246A8]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x080246A4]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x0804A1F4U /* &VTable_0804A1F4 */; // [0x080246AC]
    *(u32*)(r1) = (u32)r6;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r1) = (u32)r6;
loc_080245C8:
    r0 = r4;
    r0 = sub_08040160(r0, r1, r2, r3); // 0x080245CA
    return r0;
    r0 = sub_0802426E(r0, r1, r2, r3); // 0x080245D2: BL 0x0802426E
    return r0;
    r1 = 0x03002F54U; // [0x080246A8]
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080245FA(r0, r1, r2, r3);
    r1 = r0;
    r1 += 0x100U;
    r2 = *(u32*)(r1 + 0x18);
    r2 += 0x1U;
    *(u32*)(r1 + 0x18) = (u32)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 10;
    if (cmp_lhs <= cmp_rhs) return sub_080245FA(r0, r1, r2, r3);
    r0 = sub_08040182(r0, r1, r2, r3); // 0x080245F2
    r0 = 0x2U;
    return r0;
}

// ROM Address: 0x080245FA..0x08024600 (6 bytes, Thumb)
u32 sub_080245FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x080245FA
    return sub_080245F8(r0, r1, r2, r3);
}

// ROM Address: 0x08024600..0x08024626 (38 bytes, Thumb)
u32 sub_08024600(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0872C38CU; // [0x080246B0]
    r4 = r1;
    r0 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024610: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08024626(r0, r1, r2, r3);
    r2 = 0x10U;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x4);
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0802461E: BL 0x08049144
    r0 = 0x10U;
    return r0;
}

// ROM Address: 0x08024626..0x08024630 (10 bytes, Thumb)
u32 sub_08024626(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002F54U; // [0x080246A8]
    r0 = *(u32*)(r0);
    *(u8*)(r4) = (u8)r0;
    r0 = 0x1U;
    return sub_08024624(r0, r1, r2, r3);
}

// ROM Address: 0x08024630..0x08024666 (54 bytes, Thumb)
u32 sub_08024630(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r2 - 3;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08024664;
    r3 = 0x08024644U;
    r3 = *(u8*)(r3 + r0);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r0 = ((u32)((s32)r2 >> 32));
    r1 = (r2 << 12);
    r3 = r0;
    r0 = 0x0872C38CU; // [0x080246B0]
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024656: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08024664;
    r1 = 0x03002F54U; // [0x080246A8]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
loc_08024664:
    return r0;
}

// ROM Address: 0x08024666..0x0802469C (54 bytes, Thumb)
u32 sub_08024666(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0872C38CU; // [0x080246B0]
    r0 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024672: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802468A;
    r1 = *(u8*)(r4);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08024684;
    r0 = 0x0U;
loc_08024684:
    r1 = 0x03002F54U; // [0x080246A8]
    *(u32*)(r1) = (u32)r0;
    return sub_08024664(r0, r1, r2, r3);
loc_0802468A:
    r2 = 0x10U;
    r1 = r4;
    r0 = *(u32*)(r5 + 0x4);
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08024690: BL 0x08049144
    r1 = 0x03002F54U; // [0x080246A8]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
    return sub_08024664(r0, r1, r2, r3);
}

// ROM Address: 0x080246A2..0x080246CE (44 bytes, Thumb)
u32 sub_080246A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    r1 = 0x08024A80U;
    r4 = (r0 >> 32);
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r2 = (r6 >> 1);
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080246CE(r0, r1, r2, r3);
    r0 = 0x58U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080246C2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080246CE(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080246CE..0x08024768 (154 bytes, Thumb)
u32 sub_080246CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r6;
    r1 = 0x40U;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x080246D4
    r0 = 0x0804BFCCU /* &VTable_0804BFCC */; // [0x08024940]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 = Handle_Release1(r0, r1, r2, r3); // 0x080246DE: BL 0x08011568
    r7 = 0x03002FB8U; // [0x08024944]
    r0 = *(u8*)(r7);
    r1 = r0 + 1;
    *(u8*)(r7) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08024710;
    r0 = 0x0872C394U; // [0x08024948]
    r1 = 0x1300U; // (19 << 8)
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080246F6
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r7 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x0802494C]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = 0x1300U; // (19 << 8)
    r1 = 0x0872C3B8U; // [0x08024950]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802470C: BL 0x08049138
loc_08024710:
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r6 = *(u8*)(r6 + 0x10);
    r0 = 0x0U;
    *(u32*)(r4 + 0x50) = (u32)r0;
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r1 = 0x44U;
    *(u8*)(r1 + r4) = (u8)r0;
    *(u32*)(r4 + 0x40) = (u32)r0;
    r0 = (r6 << 4);
    r0 = r0 - r6;
    r1 = 0x0872D6B8U; // [0x08024954]
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x54) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0xC0U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08024738
    r5 = (r6 << 3);
    r6 = 0x0872C394U; // [0x08024948]
    r6 += 0x4U;
    r1 = *(u32*)(r6 + r5);
    r0 = r0 + r1;
    r0 -= 0x60U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r0 = 0xC0U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802474C
    r1 = r5 + r6;
    r1 = *(u32*)(r1 + 0x4);
    r0 = r0 + r1;
    r0 -= 0x60U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08024760
    r0 = r4;
    return sub_080246CC(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy14_stores_the_three_tables_and_frees_the_object
// ROM Address: 0x08024768..0x080247FA (146 bytes, Thumb)
u32 Object_Destroy14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804BFCCU /* &VTable_0804BFCC */; // [0x08024940]
    r5 = 0x03002FB8U; // [0x08024944]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u8*)(r5);
    r7 = 0x0872C394U; // [0x08024948]
    r6 = 0x0000FFFFU; // [0x08024958]
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r5) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802479A;
    r0 = *(u16*)(r5 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) goto loc_0802479A;
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r5 + r3));
    r0 = *(u32*)(r7);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08024790
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r5 + 0x2) = (u16)r0;
loc_0802479A:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802495C]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) goto loc_080247AA;
    r0 = *(u32*)(r7);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080247A6
loc_080247AA:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08024960]
    *(u32*)(r4) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080247BA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080247B6: BL 0x0803D63C
loc_080247BA:
    return r0;
    r4 = r0;
    r0 += 0x48U;
    r5 = r1;
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)r0; r0 += 4;
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r1 = *(u32*)(r4 + 0x24);
    r0 = *(u32*)(r0);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x50);
    r0 += 0x1U;
    *(u32*)(r4 + 0x50) = (u32)r0;
    r0 = ((u32)((s32)r0 >> 2));
    r1 = (r0 << 24);
    r1 = (r1 >> 24);
    r0 = 0x44U;
    *(u8*)(r0 + r4) = (u8)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_080247FA(r0, r1, r2, r3);
    r0 = 0x0872C394U; // [0x08024948]
    r1 = r4;
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080247F2
    return r0;
}

// ROM Address: 0x080247FA..0x080248DC (226 bytes, Thumb)
u32 sub_080247FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r4 + 0x54);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08024808
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x40);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = 0x03001C34U; // [0x08024964]
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r4 + 0x24);
    r0 = ((u32)((s32)r0 >> 8));
    r0 -= 0x8U;
    stack[6] = r0; // [sp + 0x18]
    r1 = ((u32)((s32)r1 >> 8));
    r1 -= 0x8U;
    r0 += 0x10U;
    stack[8] = r0; // [sp + 0x20]
    r0 = r1;
    r0 += 0x10U;
    stack[9] = r0; // [sp + 0x24]
    stack[7] = r1; // [sp + 0x1C]
    r1 = r5;
    r0 = 0x4; // sp + 0x4
    r6 = 0x28; // sp + 0x28
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0802484E
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x20; // sp + 0x20
    stack[13] = r0; // [sp + 0x34]
    r0 = *(u8*)(r4 + 0x10);
    *(u8*)(r3 + 0x8) = (u8)r0;
    r0 = 0x086B80A8U; // [0x08024968]
    stack[12] = r0; // [sp + 0x30]
    r0 = 0x424CCCCDU; // [0x0802496C]
    r0 = sub_08054A64(r0, r1, r2, r3); // 0x08024882: BL 0x08054A64
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u8*)(r4 + 0x11);
    r3 = 0x0; // sp + 0x0
    r1 = 0x03002FB8U; // [0x08024944]
    *(u8*)(r3 + 0x14) = (u8)r0;
    stack[17] = r4; // [sp + 0x44]
    r0 = 0x1U;
    *(u32*)(r4 + 0x40) = (u32)r0;
    r0 = 0x03000F90U; // [0x08024970]
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r0 - r2;
    cmp_lhs = (s32)r2; cmp_rhs = 128;
    if (cmp_lhs <= cmp_rhs) goto loc_080248A4;
    *(u32*)(r1 + 0x4) = (u32)r0;
loc_080248A4:
    r1 = r6;
    r0 = r5;
    r0 = Battle_ComputeDamage(r0, r1, r2, r3); // 0x080248A8: BL 0x0800E9D8
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x5C);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080248B6: BL __call_via_r3
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x17U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080248C4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080247F6(r0, r1, r2, r3);
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080248D6: BL __call_via_r3
    return sub_080247F6(r0, r1, r2, r3);
}

// ROM Address: 0x080248DC..0x08024976 (154 bytes, Thumb)
u32 sub_080248DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r4 = 0xFE00FFFFU; // [0x08024974]
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x18);
    r2 = *(u32*)(r2 + 0x4);
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x38);
    r2 &= r4;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x3C);
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x18);
    r2 = 0x03002FB8U; // [0x08024944]
    r4 = 0x0872C3B8U; // [0x08024950]
    r3 = *(u32*)(r3 + 0x8);
    r2 = *(u16*)(r2 + 0x2);
    r3 = r3 - r4;
    r3 = ((u32)((s32)r3 >> 5));
    r2 = r2 + r3;
    r3 = *(u32*)(r1 + 0x4);
    r2 = (r2 << 22);
    r3 = (r3 >> 10);
    r3 = (r3 << 10);
    r2 = (r2 >> 22);
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
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 184;
    r0 = (r0 << 12);
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r2 = (r6 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r5; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r2 = (r6 >> 1);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_080248C8(r0, r1, r2, r3);
    r2 = (r6 >> 1);
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    return sub_0802420C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r0 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r6 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r4 = (u32)(-(s32)r1);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0802497A..0x080249B4 (58 bytes, Thumb)
u32 sub_0802497A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x03002FB8U; // [0x08024A1C]
    r5 = 0x0872C394U; // [0x08024A18]
    cmp_lhs = (s32)r1; cmp_rhs = 10;
    r3 = *(u8*)(r4);
    if (cmp_lhs == cmp_rhs) return sub_080249B4(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_080249DA(r0, r1, r2, r3);
    r0 = r3 + 1;
    *(u8*)(r4) = (u8)r0;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080249B0;
    r1 = 0x1300U; // (19 << 8)
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08024996
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r4 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x08024A20]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = 0x1300U; // (19 << 8)
    r1 = 0x0872C3B8U; // [0x08024A24]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080249AC: BL 0x08049138
loc_080249B0:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080249B4..0x080249E0 (44 bytes, Thumb)
u32 sub_080249B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 += 0xFFU;
    r0 = (r3 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080249D6;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x08024A28]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080249D6;
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r5);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080249CC
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_080249D6:
    r0 = 0x0U;
    return sub_080249B2(r0, r1, r2, r3);
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x080249DA
    return sub_080249B2(r0, r1, r2, r3);
}

// ROM Address: 0x080249E0..0x08024A44 (100 bytes, Thumb)
u32 sub_080249E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = 0x0872C394U; // [0x08024A18]
    r6 = r1;
    r0 = *(u32*)(r4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x080249EA
    r1 = 0x1400U; // (5 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08024A14;
    r0 = *(u32*)(r4);
    r1 = 0x80U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = r1 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_08024A14;
    r2 = r6;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_080246B4(r0, r1, r2, r3); // 0x08024A08
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08024A10: BL 0x0801191A
loc_08024A14:
    return r0;
    r0 = r0;
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r2 = (r6 >> 1);
    cmp_lhs = (s32)r7; cmp_rhs = 184;
    r0 = (r0 << 12);
    r0 = r0;
    r1 = (r0 << 24);
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r5; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r2 = (r6 >> 1);
    r0 = r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08024A44(r0, r1, r2, r3);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08024A38: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08024A44(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08024A44..0x08024A54 (16 bytes, Thumb)
u32 sub_08024A44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x08024A48
    r0 = 0x080499D4U /* &VTable_080499D4 */; // [0x08024A78]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_08024A42(r0, r1, r2, r3);
}

// ROM Address: 0x08024A54..0x08024A66 (18 bytes, Thumb)
u32 sub_08024A54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08024A5A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08024A66(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08024A66..0x08024A76 (16 bytes, Thumb)
u32 sub_08024A66(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x08024A6A
    r0 = 0x080499D4U /* &VTable_080499D4 */; // [0x08024A78]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_08024A64(r0, r1, r2, r3);
}

// ROM Address: 0x08024A7C..0x08024C22 (422 bytes, Thumb)
u32 sub_08024A7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08024A8C;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08024A84: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024A9A;
loc_08024A8C:
    r1 = 0x08049370U /* &VTable_08049370 */; // [0x08024D44]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u8*)(r0 + 0x5) = (u8)r1;
    *(u8*)(r0 + 0x6) = (u8)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u8*)(r0 + 0x4) = (u8)r1;
loc_08024A9A:
    return r0;
    r5 = r0;
    r0 = 0x087315D8U; // [0x08024D48]
    r4 = r1;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x08024AA8
    r2 = 0x40U;
    r1 = 0x0U;
    r0 = 0x6000000U; // (3 << 25)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08024AB4: BL 0x0804912C
    r2 = 0x40U;
    r1 = 0x0873198CU; // [0x08024D4C]
    r0 = 0x0600DDC0U; // [0x08024D50]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08024ABE: BL 0x08049138
    r1 = 0x03770377U; // [0x08024D54]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08024ACA;
    r1 = 0x0U;
loc_08024ACA:
    r7 = 0x800U; // (1 << 11)
    r2 = r7;
    r0 = 0x0600F800U; // [0x08024D58]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08024AD2: BL 0x0804912C
    r0 = 0x1U;
    *(u8*)(r5 + 0x4) = (u8)r0;
    r0 = (r0 << 12);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08024ADC: BL 0x0803D5B8
    r6 = 0x087315D8U; // [0x08024D48]
    r4 = r0;
    r1 = r0;
    r6 += 0x10U;
    r0 = r6;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08024AEA
    r1 = r4;
    r0 = 0x0600DE00U; // [0x08024D5C]
    r2 = *(u32*)(r6 + 0x4);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08024AF4: BL 0x08049138
    r1 = r4;
    r0 = 0x087317C8U; // [0x08024D60]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08024AFC
    r3 = (r7 >> 1);
    r6 = r3;
    r0 = r4;
    r1 = 0x0U;
    r6 -= 0x88U;
loc_08024B0A:
    r2 = *(u16*)(r0);
    r1 += 0x1U;
    r2 = r2 + r6;
    *(u16*)(r0) = (u16)r2;
    r0 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_08024B0A;
    r2 = r7;
    r7 = 0x0600E800U; // [0x08024D64]
    r1 = r4;
    r0 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08024B20: BL 0x08049138
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x2C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024B2C: BL 0x08046AA2
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024B60;
    r0 = 0x0873198CU; // [0x08024D4C]
    r1 = r4;
    r0 -= 0xD8U;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08024B3C
    r2 = 0xFFU;
    r2 += 0x1U;
    r1 = r4;
    r0 = 0x0600DCC0U; // [0x08024D68]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08024B48: BL 0x08049138
    r0 = 0x2U;
    stack[3] = r0; // [sp + 0xC]
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r1 = r7;
    stack[1] = r6; // [sp + 0x4]
    stack[2] = r6; // [sp + 0x8]
    r2 = 0x00000373U; // [0x08024D6C]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08024B5C
loc_08024B60:
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x30);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024B68: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024B9E;
    r0 = 0x0873198CU; // [0x08024D4C]
    r1 = r4;
    r0 -= 0x78U;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08024B76
    r2 = 0xFFU;
    r2 += 0x1U;
    r1 = r4;
    r0 = 0x0600DBC0U; // [0x08024D70]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08024B82: BL 0x08049138
    r0 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x2U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r1 = r7;
    stack[2] = r6; // [sp + 0x8]
    r2 = 0x0000036FU; // [0x08024D74]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08024B9A
loc_08024B9E:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08024BA0: BL 0x0803D63C
    r0 = 0x1D80U; // (59 << 7)
    r1 = 0x4000000U; // (1 << 26)
    *(u16*)(r1 + 0x8) = (u16)r0;
    r0 = 0x00001F83U; // [0x08024D78]
    r4 = 0x087315D8U; // [0x08024D48]
    *(u16*)(r1 + 0xE) = (u16)r0;
    *(u16*)(r1 + 0x10) = (u16)r6;
    *(u16*)(r1 + 0x12) = (u16)r6;
    *(u16*)(r1 + 0x1C) = (u16)r6;
    *(u16*)(r1 + 0x1E) = (u16)r6;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x08024BBE
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x08024BC4
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x08024D7C]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08024BD2: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x08024D7C]
    r0 = 0x05000200U; // [0x08024D80]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08024BDE: BL 0x08049144
    return r0;
    r1 = 0x00003E5EU; // [0x08024D84]
    r2 = 0x04000040U /* &REG_WIN0H */; // [0x08024D88]
    *(u16*)(r2 + 0x10) = (u16)r1;
    r1 = 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0; // BX lr
    r1 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024C02;
    r1 = 0x00003F5FU; // [0x08024D8C]
    r2 = 0x04000040U /* &REG_WIN0H */; // [0x08024D88]
    *(u16*)(r2 + 0x10) = (u16)r1;
    r1 = 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08024C02:
    return r0; // BX lr
    r1 = *(u8*)(r0 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08024C22(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_08024C34(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x38);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024C16: BL 0x08046AA2
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08024C1A
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08024C22..0x08024C38 (22 bytes, Thumb)
u32 sub_08024C22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x34);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024C28: BL 0x08046AA2
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x08024C2C
    r0 = 0x0U;
    return sub_08024C20(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08024C20(r0, r1, r2, r3);
}

// ROM Address: 0x08024C38..0x08024C98 (96 bytes, Thumb)
u32 sub_08024C38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024C40: BL 0x08046AA2
    r4 = 0x087315D8U; // [0x08024D48]
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011A1E(r0, r1, r2, r3); // 0x08024C48: BL 0x08011A1E
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x08024C4E
    return r0;
    r7 = 0x087315D8U; // [0x08024D48]
    r4 = r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x08024C60
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x40);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024C6C: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return Blend_WriteControlAndAlpha3(r0, r1, r2, r3);
    r0 = *(u8*)(r4 + 0x5);
    r1 = 0x04000050U /* &REG_BLDCNT */; // [0x08024D90]
    r0 += 0xFFU;
    *(u8*)(r4 + 0x5) = (u8)r0;
    *(u8*)(r1 + 0x2) = (u8)r0;
    r0 = *(u8*)(r4 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08024D40(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024C8E: BL 0x08046AA2
    return r0;
}

// Evidence: writes BLDCNT 0x04000050: 0x08024CBA ldr r0, [pc, #0xcc] (= 0x04000040) then 0x08024CBE strh r5, [r0, #0x10]; 0x08024CF8 ldr r0, [pc, #0x8c] (= 0x04000040) then 0x08024CFA strh r5, [r0, #0x10]; writes BLDALPHA 0x04000052: 0x08024D3A ldr r1, [pc, #0x54] (= 0x04000050) then 0x08024D3E strb r0, [r1, #2]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08024C98
// ROM Address: 0x08024C98..0x08024D44 (172 bytes, Thumb)
u32 Blend_WriteControlAndAlpha3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x087315D8U; // [0x08024D48]
    r6 = 0x1U;
    r0 = *(u32*)(r7);
    r5 = 0x00003E5EU; // [0x08024D84]
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 22);
    r0 = (r0 >> 31);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024CD8;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x2C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024CB2: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024CD8;
    r0 = 0x04000040U /* &REG_WIN0H */; // [0x08024D88]
    *(u8*)(r4 + 0x6) = (u8)r6;
    *(u16*)(r0 + 0x10) = (u16)r5;
    r0 = 0x0873198CU; // [0x08024D4C]
    r7 = 0x4; // sp + 0x4
    r1 = r7;
    r0 -= 0xD8U;
    *(u32*)(r4 + 0x8) = (u32)r6;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08024CCA
    r2 = (r6 << 8);
    r1 = r7 + r2;
    r0 = 0x0600DCC0U; // [0x08024D68]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08024CD4: BL 0x08049138
loc_08024CD8:
    r7 = 0x087315D8U; // [0x08024D48]
    r0 = *(u32*)(r7);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 23);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08024D16;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x30);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024CEC: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024D16;
    r0 = 0x2U;
    *(u8*)(r4 + 0x6) = (u8)r0;
    r0 = 0x04000040U /* &REG_WIN0H */; // [0x08024D88]
    *(u16*)(r0 + 0x10) = (u16)r5;
    r0 = 0x0873198CU; // [0x08024D4C]
    r5 = 0x4; // sp + 0x4
    r1 = r5;
    r0 -= 0x78U;
    *(u32*)(r4 + 0x8) = (u32)r6;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08024D06
    r2 = 0xFFU;
    r2 += 0x1U;
    r1 = r5 + r2;
    r0 = 0x0600DBC0U; // [0x08024D70]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08024D12: BL 0x08049138
loc_08024D16:
    r0 = *(u32*)(r7);
    r0 = *(u16*)(r0 + 0x4);
    r1 = (r0 << 30);
    r1 = (r1 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_08024D26;
    r0 = (r0 << 29);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08024D32;
loc_08024D26:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08024D2E: BL 0x08046AA2
loc_08024D32:
    r0 = *(u8*)(r4 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08024D40;
    r0 += 0x1U;
    r1 = 0x04000050U /* &REG_BLDCNT */; // [0x08024D90]
    *(u8*)(r4 + 0x5) = (u8)r0;
    *(u8*)(r1 + 0x2) = (u8)r0;
loc_08024D40:
    r0 = 0x0U;
    return sub_08024C92(r0, r1, r2, r3);
}

// ROM Address: 0x08024D94..0x08024E40 (172 bytes, Thumb)
u32 sub_08024D94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x087315D8U; // [0x08024F1C]
    r0 = *(u32*)(r0 + 0xC);
    r7 = 0x2U;
    *(u32*)(r1 + 0xC) = (u32)r0;
    *(u8*)(r1 + 0x3) = (u8)r7;
    r4 = r1;
    r1 = 0x1U;
    r0 = 0x0803F5A5U; // [0x08024F20]
    *(u8*)(r4 + 0x2) = (u8)r1;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = 0x38U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x90U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x8U;
    *(u8*)(r4 + 0x1) = (u8)r0;
    *(u8*)(r4) = (u8)r1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    r6 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08024F24]
    if (cmp_lhs == cmp_rhs) goto loc_08024DCE;
    r0 = *(u16*)(r5);
    r0 = (r0 << 2);
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08024DCA
loc_08024DCE:
    r7 = 0x2U;
    *(u8*)(r4 + 0x3) = (u8)r7;
    r0 = 0x0U;
    *(u8*)(r4) = (u8)r0;
    r0 = 0x16U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x5FU;
    r7 = 0x70U;
    r6 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08024F24]
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 = (r0 << 3);
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08024DE8
    r0 = 0x20U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x2FCU; // (191 << 2)
    *(u32*)(r4 + 0x4) = (u32)r7;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08024DFA
    r0 = 0x2AU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x300U; // (3 << 8)
    *(u32*)(r4 + 0x4) = (u32)r7;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08024E0C
    r0 = 0x34U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x304U; // (193 << 2)
    *(u32*)(r4 + 0x4) = (u32)r7;
    r1 = *(u32*)(r6 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08024E1E
    r7 = 0x2U;
    *(u8*)(r4) = (u8)r7;
    *(u8*)(r4 + 0x3) = (u8)r7;
    r6 = r7 - 3;
    r7 = r6;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    stack[1] = r6; // [sp + 0x4]
    r2 = stack[4]; // [sp + 0x10]
    if (cmp_lhs == cmp_rhs) return sub_08024E88(r0, r1, r2, r3);
    r0 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) return sub_08024E88(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08024E70(r0, r1, r2, r3);
    r0 += 0x2U;
    return r0;
}

// ROM Address: 0x08024E42..0x08024E70 (46 bytes, Thumb)
u32 sub_08024E42(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x68U;
    r0 = 0x087315D8U; // [0x08024F1C]
    r1 *= r3;
    r0 = *(u32*)(r0 + 0x8);
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_08024E5E;
    r1 = r0;
    r1 += 0x16U;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r1 + r3));
loc_08024E5E:
    r1 = r0;
    r1 += 0x4CU;
    r6 = *(u16*)(r1);
    stack[1] = r6; // [sp + 0x4]
    r1 += 0x2U;
    r6 = *(u16*)(r1);
    r0 += 0x50U;
    r7 = *(u16*)(r0);
    return sub_08024E88(r0, r1, r2, r3);
}

// ROM Address: 0x08024E70..0x08024E88 (24 bytes, Thumb)
u32 sub_08024E70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x08024F28]
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r3 = r2 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08024E80;
    r2 = *(u32*)(r0 + 0x4);
loc_08024E80:
    r6 = *(u8*)(r0 + 0xD);
    stack[1] = r6; // [sp + 0x4]
    r6 = *(u8*)(r0 + 0xE);
    r7 = *(u8*)(r0 + 0xF);
    return r0;
}

// ROM Address: 0x08024E88..0x08024E98 (16 bytes, Thumb)
u32 sub_08024E88(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xA0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x16U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r3 = r2 + 1;
    if (cmp_lhs != cmp_rhs) return sub_08024E98(r0, r1, r2, r3);
    r1 = 0x08024F2CU;
    return sub_08024E9A(r0, r1, r2, r3);
}

// ROM Address: 0x08024E98..0x08024EE6 (78 bytes, Thumb)
u32 sub_08024E98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08024F34U;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08024E9C
    r0 = 0xA0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x20U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = stack[1]; // [sp + 0x4]
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08024EB2;
    r1 = 0x08024F2CU;
    goto loc_08024EB4;
loc_08024EB2:
    r1 = 0x08024F34U;
loc_08024EB4:
    r0 = r4;
    r2 = stack[1]; // [sp + 0x4]
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08024EB8
    r0 = 0xA0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x2AU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r3 = r6 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08024ECC;
    r1 = 0x08024F2CU;
    goto loc_08024ECE;
loc_08024ECC:
    r1 = 0x08024F34U;
loc_08024ECE:
    r2 = r6;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08024ED2
    r0 = 0xA0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x34U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r3 = r7 + 1;
    if (cmp_lhs != cmp_rhs) return sub_08024EE6(r0, r1, r2, r3);
    r1 = 0x08024F2CU;
    return sub_08024EE8(r0, r1, r2, r3);
}

// ROM Address: 0x08024EE6..0x08024F52 (108 bytes, Thumb)
u32 sub_08024EE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08024F34U;
    r2 = r7;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x08024EEC
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024EFA;
    r0 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08024F16;
loc_08024EFA:
    r0 = 0xC8U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x22U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r1 = 0x1U;
    *(u8*)(r4) = (u8)r1;
    r0 = 0x61U;
    r6 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08024F24]
    r0 = (r0 << 3);
    r2 = *(u32*)(r6 + r0);
    r1 = 0x38U;
    r0 = r4;
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x08024F12
loc_08024F16:
    return r0;
    r0 = r0;
    r0 = ((u32)((s32)r3 >> 23));
    r3 = (r6 >> 1);
    r3 = (r0 >> 32);
    r6 = (r0 >> 32);
    r4 = ((u32)((s32)r6 >> 9));
    r1 = (r6 >> 1);
    r7 = r7;
    r7 = r7;
    r0 = r0;
    r0 = r0;
    r5 = r4;
    r4 = (r4 << 1);
    r0 = r0;
    r0 = r0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08024F52(r0, r1, r2, r3);
    r0 = 0xB20U; // (89 << 5)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08024F46: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08024F52(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08024F52..0x08025004 (178 bytes, Thumb)
u32 sub_08024F52(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 = sub_08024A7C(r0, r1, r2, r3); // 0x08024F54: BL 0x08024A7C
    r0 = 0x0804A950U /* &VTable_0804A950 */; // [0x08025308]
    r1 = r4;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r2 = 0x3B4U; // (237 << 2)
    r1 += 0x10U;
    r2 = r4 + r2;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r6 = 0x087319CCU; // [0x0802530C]
    *(u32*)(r2) = (u32)r0;
loc_08024F6E:
    r3 = *(u32*)(r6 + 0x8);
    r5 = ((u32)((s32)r0 >> 3));
    r3 = r5 + r3;
    r3 += 0xC0U;
    r7 = (r0 << 29);
    r7 = (r7 >> 29);
    r3 = *(u8*)(r3 + 0x5);
    r5 = 0x1U;
    r5 <<= (r7 & 0xFF);
    r3 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_08024F90;
    r3 = *(u32*)(r1);
    r5 = r3 + 1;
    r3 = (r3 << 2);
    r3 = r3 + r1;
    *(u32*)(r1) = (u32)r5;
    *(u32*)(r3 + 0x4) = (u32)r0;
loc_08024F90:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 232;
    if (cmp_lhs < cmp_rhs) goto loc_08024F6E;
    r5 = *(u32*)(r4 + 0x10);
    r3 = 0x0U;
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08024FD6;
    r7 = 0x0874D380U; // [0x08025310]
loc_08024FA2:
    r5 = (r0 << 2);
    r5 = r5 + r1;
    r5 = *(u32*)(r5 + 0x4);
    r5 = (r5 << 4);
    r5 = r5 + r7;
    r5 = *(u16*)(r5);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_08024FC6;
    r3 = r5;
    r5 = *(u32*)(r2);
    r6 = r5 + 1;
    r5 = (r5 << 3);
    r5 = r5 + r2;
    r5 += 0x4U;
    *(u32*)(r2) = (u32)r6;
    *(u32*)(r5) = (u32)r0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    goto loc_08024FCE;
loc_08024FC6:
    r5 = *(u32*)(r2);
    r5 = (r5 << 3);
    r5 = r5 + r2;
    *(u32*)(r5) = (u32)r0;
loc_08024FCE:
    r5 = *(u32*)(r4 + 0x10);
    r0 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08024FA2;
loc_08024FD6:
    r0 = 0xAC0U; // (43 << 6)
    r0 = r4 + r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x38) = (u32)r1;
    r0 = 0xB00U; // (11 << 8)
    r0 = r4 + r0;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u8*)(r4 + 0xE) = (u8)r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u8*)(r4 + 0xD) = (u8)r1;
    r1 = *(u32*)(r2);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08024FFA;
    r1 = *(u32*)(r2 + 0x4);
    *(u32*)(r0 + 0x14) = (u32)r1;
    goto loc_08025000;
loc_08024FFA:
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
loc_08025000:
    r0 = r4;
    return sub_08024F50(r0, r1, r2, r3);
}

// ROM Address: 0x08025004..0x080251D4 (464 bytes, Thumb)
u32 sub_08025004(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xB00U; // (11 << 8)
    r4 = r5 + r0;
    r0 = *(u32*)(r4 + 0x18);
    r2 = 0x4; // sp + 0x4
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x68U;
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u32*)(r4 + 0x18);
    r1 = 0x06009800U; // [0x08025314]
    r0 += 0x38U;
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08025028: BL 0x0804915C
    r0 = 0xAC0U; // (43 << 6)
    r0 = r5 + r0;
    r1 = *(u32*)(r0 + 0x3C);
    r2 = *(u32*)(r4 + 0x18);
    r0 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0802503E;
    r0 = 0x0U;
loc_0802503E:
    *(u32*)(r1 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4);
    r4 += 0x18U;
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802504E;
    r1 = 0x1U;
    goto loc_08025050;
loc_0802504E:
    r1 = 0x0U;
loc_08025050:
    *(u32*)(r0 + 0x20) = (u32)r1;
    return r0;
    r3 = 0xFFFFEF80U; // [0x08025318]
    r0 = 0xBU;
    sp += r3;
    r3 = 0x1080U; // (33 << 7)
    r3 += sp;
    r1 = *(u32*)(r3);
    r0 = (r0 << 8);
    r4 = r1 + r0;
    r0 = *(u32*)(r4 + 0x14);
    r1 += 0x10U;
    r3 -= 0x80U;
    *(u32*)(r3 + 0x7C) = (u32)r1;
    r7 = 0x0U;
    r3 = r0 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_0802508C;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x7C);
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0874D380U; // [0x08025310]
    r0 = (r0 << 4);
    r7 = r0 + r1;
loc_0802508C:
    r0 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802509C;
    r1 = 0x1U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08025094: BL 0x0803F58C
    r1 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r1;
loc_0802509C:
    r5 = 0x00001044U; // [0x0802531C]
    r2 = 0xA0U;
    r1 = 0xF0U;
    r5 += sp;
    r0 = r5;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080250A6
    r3 = 0x1000U; // (1 << 12)
    r0 = 0x087319CCU; // [0x0802530C]
    r3 += sp;
    r1 = *(u32*)(r3 + 0x68);
    r0 += 0x14U;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080250B6
    r2 = 0x0U;
    r2 = ~r2;
    r1 = r5;
    r0 = r7;
    r0 = sub_08024D94(r0, r1, r2, r3); // 0x080250C2: BL 0x08024D94
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080250F4;
    r0 = *(u32*)(r7 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080250F4;
    r0 = *(u32*)(r7 + 0x8);
    r0 = sub_08011F20(r0, r1, r2, r3); // 0x080250D2
    r5 = 0x44; // sp + 0x44
    r1 = r5;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080250DA
    r0 = 0x08732350U; // [0x08025320]
    r6 = 0x34; // sp + 0x34
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r6 -= 0x10U;
    r0 = 0x00001044U; // [0x0802531C]
    r2 = r6;
    r1 = r5;
    r0 += sp;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x080250F0
loc_080250F4:
    r0 = 0x00001044U; // [0x0802531C]
    r1 = 0x06000040U; // [0x08025324]
    r0 += sp;
    r0 = sub_0803F9B8(r0, r1, r2, r3); // 0x080250FA
    r3 = 0x1080U; // (33 << 7)
    r3 += sp;
    r2 = *(u32*)(r3);
    r1 = 0xAC0U; // (43 << 6)
    r1 = r2 + r1;
    r3 -= 0x80U;
    r0 = *(u8*)(r2 + 0xE);
    *(u32*)(r3 + 0x78) = (u32)r1;
    r1 = 0x3B4U; // (237 << 2)
    r6 = r2 + r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08025202(r0, r1, r2, r3);
    r0 = 0x68U;
    *(u32*)(r3 + 0x6C) = (u32)r0;
    r0 = 0x38U;
    *(u32*)(r3 + 0x70) = (u32)r0;
    r0 = 0x16C0U; // (91 << 6)
    *(u32*)(r3 + 0x74) = (u32)r0;
    r0 = *(u32*)(r3 + 0x6C);
    r1 = *(u32*)(r3 + 0x70);
    *(u32*)(r3 + 0x5C) = (u32)r0;
    *(u32*)(r3 + 0x60) = (u32)r1;
    r2 = 0x16C0U; // (91 << 6)
    r1 = 0x0U;
    r0 = *(u32*)(r3 + 0x68);
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0802513A: BL 0x08046E40
    r3 = 0x1040U; // (65 << 6)
    r3 += sp;
    r1 = 0x1U;
    *(u8*)(r3 + 0x4) = (u8)r1;
    r0 = *(u32*)(r6);
    r1 = 0x34U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080251D4(r0, r1, r2, r3);
    r2 = *(u32*)(r4 + 0x10);
    r3 -= 0x40U;
    r5 = r2 - 3;
    r2 += 0x4U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    *(u32*)(r3 + 0x40) = (u32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08025162;
    r0 -= 0x7U;
    *(u32*)(r3 + 0x40) = (u32)r0;
loc_08025162:
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x40);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08025172;
    r0 = 0x0U;
    *(u32*)(r3 + 0x40) = (u32)r0;
loc_08025172:
    r5 = 0x0U;
loc_08025174:
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x40);
    r1 = *(u32*)(r6);
    r0 = r5 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) return sub_08025204(r0, r1, r2, r3);
    r1 = (r0 << 3);
    r1 = r1 + r6;
    r1 += 0x4U;
    r12 = r1;
    r2 = *(u32*)(r4 + 0x10);
    r1 = 0x2U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08025196;
    r1 = 0x75U;
loc_08025196:
    r3 = 0x1040U; // (65 << 6)
    r3 += sp;
    *(u8*)(r3 + 0x7) = (u8)r1;
    r0 = (r5 << 3);
    r0 += 0x7U;
    r3 -= 0x40U;
    *(u32*)(r3 + 0x4C) = (u32)r0;
    r1 = 0x34U;
    *(u32*)(r3 + 0x48) = (u32)r1;
    r1 = r12;
    r1 = *(u32*)(r1);
    r0 = *(u32*)(r3 + 0x7C);
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0874D380U; // [0x08025310]
    r0 = (r0 << 4);
    r0 = r0 + r1;
    r0 = *(u16*)(r0);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08025328]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = r3;
    r0 += 0x44U;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x080251C8
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 7;
    if (cmp_lhs < cmp_rhs) goto loc_08025174;
    return sub_08025204(r0, r1, r2, r3);
}

// ROM Address: 0x080251D4..0x08025204 (48 bytes, Thumb)
u32 sub_080251D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x1040U; // (65 << 6)
    r3 += sp;
    r0 = 0x3U;
    *(u8*)(r3 + 0x7) = (u8)r0;
    r0 = 0x20U;
    r3 -= 0x40U;
    *(u32*)(r3 + 0x4C) = (u32)r0;
    *(u32*)(r3 + 0x48) = (u32)r1;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08025328]
    r0 = 0x30CU; // (195 << 2)
    r1 = *(u32*)(r1 + r0);
    r0 = r3;
    r0 += 0x44U;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x080251F2
    r0 = *(u32*)(r4 + 0x4);
    r1 = 0x0U;
    *(u32*)(r0 + 0x20) = (u32)r1;
    r0 = *(u32*)(r4 + 0x8);
    *(u32*)(r0 + 0x20) = (u32)r1;
    return sub_08025204(r0, r1, r2, r3);
    return sub_08025238(r0, r1, r2, r3);
}

// ROM Address: 0x08025204..0x0802522A (38 bytes, Thumb)
u32 sub_08025204(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x78);
    r0 = *(u32*)(r1 + 0x3C);
    r2 = *(u32*)(r4 + 0x10);
    r1 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs > cmp_rhs) goto loc_08025218;
    r1 = 0x0U;
loc_08025218:
    *(u32*)(r0 + 0x20) = (u32)r1;
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r6);
    r2 = *(u32*)(r4 + 0x10);
    r1 -= 0x4U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_0802522A(r0, r1, r2, r3);
    r1 = 0x1U;
    return sub_0802522C(r0, r1, r2, r3);
}

// ROM Address: 0x0802522A..0x08025288 (94 bytes, Thumb)
u32 sub_0802522A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x20) = (u32)r1;
    r0 = 0x00001044U; // [0x0802531C]
    r1 = 0x06009800U; // [0x08025314]
    r0 += sp;
    r0 = sub_0803F9B8(r0, r1, r2, r3); // 0x08025234
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x78);
    r5 = 0x087319CCU; // [0x0802530C]
    r0 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025250;
    r1 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802524C
loc_08025250:
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802528E(r0, r1, r2, r3);
    r1 = r7;
    r0 = 0x0U;
    r0 = sub_080272EC(r0, r1, r2, r3); // 0x08025258: BL 0x080272EC
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x78);
    r3 += 0x80U;
    *(u32*)(r1 + 0x38) = (u32)r0;
    r2 = *(u32*)(r3);
    r1 = *(u8*)(r2 + 0xE);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802527C;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x2U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08025278: BL __call_via_r3
loc_0802527C:
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x78);
    r1 = *(u32*)(r0 + 0x38);
    r0 = *(u32*)(r5 + 0xC);
    return r0;
}

// ROM Address: 0x0802528E..0x08025330 (162 bytes, Thumb)
u32 sub_0802528E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x78);
    *(u32*)(r0 + 0x38) = (u32)r1;
    r0 = 0x00001044U; // [0x0802531C]
    r1 = 0x0U;
    r0 += sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080252A0: BL 0x0803F58C
    r3 = 0x1080U; // (33 << 7)
    r3 += sp;
    r2 = *(u32*)(r3);
    r0 = *(u8*)(r2 + 0xE);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08025330(r0, r1, r2, r3);
    r2 = *(u32*)(r4 + 0x1C);
    r1 = 0x68U;
    r2 += 0x38U;
    r0 = 0x0U;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080252BA
    *(u32*)(r4 + 0xC) = (u32)r0;
    r1 = *(u32*)(r5 + 0x10);
    *(u32*)(r0 + 0xC) = (u32)r1;
    r0 = *(u32*)(r4 + 0xC);
    r1 = 0x2U;
    *(u8*)(r0 + 0x3) = (u8)r1;
    r0 = *(u32*)(r4 + 0xC);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0xEU;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = *(u32*)(r4 + 0xC);
    r0 = 0x10U;
    *(u8*)(r1 + 0x1) = (u8)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = 0x0U;
    r2 = *(u32*)(r0 + 0x30);
    r0 = *(u32*)(r0 + 0x24);
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x080252E2: BL 0x08046E40
    r0 = *(u16*)(r7 + 0x2);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08025328]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r0 = *(u32*)(r4 + 0xC);
    r1 = 0x68U;
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x080252F2
    r3 = 0x1080U; // (33 << 7)
    r3 += sp;
    r0 = *(u32*)(r3);
    r0 = sub_08025004(r0, r1, r2, r3); // 0x080252FE: BL 0x08025004
    r3 = 0x00001084U; // [0x0802532C]
    sp += r3;
    return r0;
    r1 = 0x140; // sp + 0x140
    r4 = (r0 >> 32);
    r4 = r1 + r7;
    r3 = (r6 >> 1);
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08025214(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    r0 = stack[0]; // [sp + 0x0]
    r0 = (r0 << 24);
    r4 = ((u32)((s32)r0 >> 1));
    r0 = r0;
    r3 = 0x50U;
    r3 = (r6 >> 1);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r6 = (r0 >> 32);
    r4 = ((u32)((s32)r0 >> 2));
    r0 = r0;
    return r0;
}

// ROM Address: 0x08025330..0x08025354 (36 bytes, Thumb)
u32 sub_08025330(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r6);
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802534A;
    r1 = *(u32*)(r4 + 0x10);
    r1 = (r1 << 3);
    r1 = r1 + r6;
    r1 += 0x4U;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802534A;
    r0 = 0x1U;
loc_0802534A:
    r1 = *(u32*)(r4 + 0x4);
    *(u32*)(r1 + 0x20) = (u32)r0;
    r1 = *(u32*)(r4 + 0x8);
    *(u32*)(r1 + 0x20) = (u32)r0;
    return sub_08025302(r0, r1, r2, r3);
}

// ROM Address: 0x0802536E..0x080253E2 (116 bytes, Thumb)
u32 sub_0802536E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xB00U; // (11 << 8)
    r6 = r4 + r1;
    r1 = *(u32*)(r6 + 0x14);
    r0 = r4;
    r0 += 0x10U;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0874D380U; // [0x080256B8]
    r0 = (r0 << 4);
    r5 = r0 + r1;
    r0 = 0x68U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x38U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x087319CCU; // [0x080256BC]
    stack[0] = r7; // [sp + 0x0]
    stack[1] = r7; // [sp + 0x4]
    r1 = *(u32*)(r0 + 0x10);
    r0 = 0x10; // sp + 0x10
    r2 = sp;
    r0 = sub_0803DA78(r0, r1, r2, r3); // 0x0802539A: BL 0x0803DA78
    r0 = *(u16*)(r5 + 0x2);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080256C0]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r5 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
loc_080253AA:
    r3 = sp;
    r2 = 0x68U;
    r0 = 0x10; // sp + 0x10
    r1 = stack[1]; // [sp + 0x4]
    r0 = sub_0803DE6A(r0, r1, r2, r3); // 0x080253B2
    r0 = stack[3]; // [sp + 0xC]
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080253AA;
    r0 = (r5 << 4);
    r0 -= 0x38U;
    *(u32*)(r6 + 0x1C) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080253C8;
    *(u32*)(r6 + 0x1C) = (u32)r7;
loc_080253C8:
    *(u32*)(r6 + 0x18) = (u32)r7;
    *(u8*)(r4 + 0xC) = (u8)r7;
    r0 = 0x1U;
    *(u8*)(r4 + 0xE) = (u8)r0;
    r0 = r4;
    r0 = sub_08025056(r0, r1, r2, r3); // 0x080253D2
    *(u8*)(r4 + 0x5) = (u8)r7;
    *(u8*)(r4 + 0x6) = (u8)r7;
    *(u32*)(r4 + 0x8) = (u32)r7;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080253E2..0x080253EA (8 bytes, Thumb)
u32 sub_080253E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 = sub_08024C04(r0, r1, r2, r3); // 0x080253E4
    return sub_080253DE(r0, r1, r2, r3);
}

// Evidence: writes BLDCNT 0x04000050: 0x080253F8 ldr r1, [pc, #0x2cc] (= 0x04000040) then 0x080253FA strh r0, [r1, #0x10]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x080253EA
// ROM Address: 0x080253EA..0x080253FE (20 bytes, Thumb)
u32 Blend_WriteControl4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0xE);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_080253FE(r0, r1, r2, r3);
    r0 = sub_08024BE6(r0, r1, r2, r3); // 0x080253F2
    r0 = 0x00003E41U; // [0x080256C4]
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x080256C8]
    *(u16*)(r1 + 0x10) = (u16)r0;
    return r0;
}

// ROM Address: 0x080253FE..0x08025404 (6 bytes, Thumb)
u32 sub_080253FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08024BF2(r0, r1, r2, r3); // 0x080253FE
    return sub_080253FC(r0, r1, r2, r3);
}

// Evidence: writes BLDCNT 0x04000050: 0x0802549E ldr r1, [pc, #0x228] (= 0x04000040) then 0x080254A0 strh r0, [r1, #0x10]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08025404
// ROM Address: 0x08025404..0x08025510 (268 bytes, Thumb)
u32 Blend_WriteControl5(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x087319CCU; // [0x080256BC]
    r2 = 0x087319CCU; // [0x080256BC]
    r0 = *(u32*)(r0);
    r1 = 0x000005C4U; // [0x080256CC]
    r0 = *(u16*)(r0 + 0x4);
    r2 = *(u32*)(r2 + 0x4);
    r7 = 0x0831947CU; // [0x080256D0]
    r1 = r2 + r1;
    stack[0] = r1; // [sp + 0x0]
    r1 = 0xBU;
    r2 = 0x3B4U; // (237 << 2)
    r1 = (r1 << 8);
    r0 = (r0 << 25);
    r0 = (r0 >> 31);
    r4 = r5 + r1;
    r6 = r5 + r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025452;
    r0 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025452;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = r5;
    r0 = sub_08025056(r0, r1, r2, r3); // 0x08025442
    r1 = r7;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = stack[0]; // [sp + 0x0]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802544E
loc_08025452:
    r0 = 0x087319CCU; // [0x080256BC]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08025486;
    r1 = *(u32*)(r6);
    r0 = *(u32*)(r4 + 0x10);
    r1 -= 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08025486;
    r0 += 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = r5;
    r0 = sub_08025056(r0, r1, r2, r3); // 0x08025476
    r1 = r7;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = stack[0]; // [sp + 0x0]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08025482
loc_08025486:
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080254A6;
    r0 = 0x087319CCU; // [0x080256BC]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_080254A6;
    r0 = r5;
    r0 = sub_08024BE6(r0, r1, r2, r3); // 0x08025498
    r0 = 0x00003E41U; // [0x080256C4]
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x080256C8]
    *(u16*)(r1 + 0x10) = (u16)r0;
    r0 = 0x1U;
    *(u8*)(r5 + 0xD) = (u8)r0;
loc_080254A6:
    return r0;
    r6 = 0x087319CCU; // [0x080256BC]
    r4 = r0;
    r1 = *(u32*)(r6);
    r2 = 0xBU;
    r1 = *(u16*)(r1 + 0x2);
    r2 = (r2 << 8);
    r5 = r4 + r2;
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080254D4;
    r1 = *(u32*)(r5 + 0x18);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080254D4;
    r1 -= 0x1U;
    *(u32*)(r5 + 0x18) = (u32)r1;
    r0 = r4;
    r0 = sub_08025004(r0, r1, r2, r3); // 0x080254CE: BL 0x08025004
    r0 = 0x1U;
loc_080254D4:
    r1 = *(u32*)(r6);
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 24);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080254F2;
    r1 = *(u32*)(r5 + 0x18);
    r2 = *(u32*)(r5 + 0x1C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080254F2;
    r1 += 0x1U;
    *(u32*)(r5 + 0x18) = (u32)r1;
    r0 = r4;
    r0 = sub_08025004(r0, r1, r2, r3); // 0x080254EC: BL 0x08025004
    r0 = 0x1U;
loc_080254F2:
    r1 = *(u8*)(r4 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080254FA;
    *(u8*)(r4 + 0xC) = (u8)r0;
loc_080254FA:
    r0 = *(u32*)(r6);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0802550E;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802550A: BL 0x08046AA2
loc_0802550E:
    return r0;
}

// ROM Address: 0x08025510..0x080255AE (158 bytes, Thumb)
u32 sub_08025510(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x3B4U; // (237 << 2)
    r0 = r5 + r0;
    r7 = 0x087319CCU; // [0x080256BC]
    stack[0] = r0; // [sp + 0x0]
    r1 = *(u32*)(r7);
    r0 = *(u32*)(r0);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 26);
    r2 = (r1 >> 31);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080255AE(r0, r1, r2, r3);
    r0 = 0xB00U; // (11 << 8)
    r4 = r5 + r0;
    r1 = stack[0]; // [sp + 0x0]
    r0 = *(u32*)(r4 + 0x10);
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 += 0x4U;
    r3 = *(u32*)(r0);
    r6 = *(u32*)(r0 + 0x4);
    r1 = r3;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) return sub_080255AE(r0, r1, r2, r3);
    r6 = r7;
    r6 = *(u32*)(r6 + 0x4);
    r3 = 0x000005C4U; // [0x080256CC]
    r7 = r6 + r3;
    r6 = 0x0831947CU; // [0x080256D0]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025574;
    r2 = *(u32*)(r4 + 0x14);
    r2 -= 0x1U;
    *(u32*)(r4 + 0x14) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08025562;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x14) = (u32)r0;
loc_08025562:
    r0 = r5;
    r0 = sub_08025056(r0, r1, r2, r3); // 0x08025564
    r1 = r6;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08025570
loc_08025574:
    r0 = 0x087319CCU; // [0x080256BC]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_080255AE(r0, r1, r2, r3);
    r0 = stack[0]; // [sp + 0x0]
    r1 = *(u32*)(r4 + 0x10);
    r1 = (r1 << 3);
    r1 = r1 + r0;
    r0 = *(u32*)(r4 + 0x14);
    r1 += 0x4U;
    r2 = *(u32*)(r1 + 0x4);
    r0 += 0x1U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802559A;
    r0 = *(u32*)(r1);
    *(u32*)(r4 + 0x14) = (u32)r0;
loc_0802559A:
    r0 = r5;
    r0 = sub_08025056(r0, r1, r2, r3); // 0x0802559C
    r1 = r6;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080255A8
    return sub_080255AE(r0, r1, r2, r3);
}

// ROM Address: 0x080255AE..0x080255BC (14 bytes, Thumb)
u32 sub_080255AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r5 + 0xE);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080255BC(r0, r1, r2, r3);
    r0 = r5;
    r0 = sub_080254A8(r0, r1, r2, r3); // 0x080255B6
    return r0;
}

// ROM Address: 0x080255BC..0x080255C4 (8 bytes, Thumb)
u32 sub_080255BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r5;
    r0 = Blend_WriteControl5(r0, r1, r2, r3); // 0x080255BE: BL 0x08025404
    return sub_080255BA(r0, r1, r2, r3);
}

// Evidence: writes BLDCNT 0x04000050: 0x0802568E ldr r2, [pc, #0x38] (= 0x04000040) then 0x08025694 strh r1, [r2, #0x10]; writes BLDALPHA 0x04000053: 0x08025690 strb r4, [r1]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x080255C4
// ROM Address: 0x080255C4..0x080257DA (534 bytes, Thumb)
u32 Blend_WriteControlAndAlpha4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x3U;
    r2 = 0x40U;
    r1 = 0x0U;
    r0 = (r0 << 25);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080255D2: BL 0x0804912C
    r0 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x14U;
    r4 = 0x0U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    stack[1] = r4; // [sp + 0x4]
    stack[2] = r4; // [sp + 0x8]
    r2 = 0x1U;
    r1 = 0x0600F800U; // [0x080256D4]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x080255EA
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F000U; // [0x080256D8]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080255F6: BL 0x0804912C
    r0 = 0xFU;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xBU;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x1CU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x12U;
    stack[4] = r0; // [sp + 0x10]
    r2 = 0x260U; // (19 << 5)
    r0 = 0x4; // sp + 0x4
    r1 = 0x0600F000U; // [0x080256D8]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08025612
    r1 = 0x0U;
    r0 = 0x0U;
    r0 = sub_080271D0(r0, r1, r2, r3); // 0x0802561A
    r1 = 0xB00U; // (11 << 8)
    r6 = r5 + r1;
    r7 = 0x087319CCU; // [0x080256BC]
    *(u32*)(r6) = (u32)r0;
    r1 = r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802562C: BL 0x0801191A
    r1 = 0x1U;
    r0 = 0x0U;
    r0 = sub_080271D0(r0, r1, r2, r3); // 0x08025634
    r1 = 0xAC0U; // (43 << 6)
    r1 = r5 + r1;
    *(u32*)(r1 + 0x3C) = (u32)r0;
    r1 = r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025644: BL 0x0801191A
    r1 = 0x2U;
    r0 = 0x0U;
    r0 = sub_080271D0(r0, r1, r2, r3); // 0x0802564C
    r1 = r0;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025656: BL 0x0801191A
    r1 = 0x3U;
    r0 = 0x0U;
    r0 = sub_080271D0(r0, r1, r2, r3); // 0x0802565E
    r1 = r0;
    *(u32*)(r6 + 0x8) = (u32)r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025668: BL 0x0801191A
    r0 = r5;
    r0 = sub_08025056(r0, r1, r2, r3); // 0x0802566E
    r1 = 0x00001E83U; // [0x080256DC]
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0 + 0xC) = (u16)r1;
    r1 += 0x100U;
    *(u16*)(r0 + 0xE) = (u16)r1;
    *(u16*)(r0 + 0x18) = (u16)r4;
    *(u16*)(r0 + 0x1A) = (u16)r4;
    *(u16*)(r0 + 0x1C) = (u16)r4;
    *(u16*)(r0 + 0x1E) = (u16)r4;
    r1 = 0x52U;
    *(u8*)(r1 + r0) = (u8)r4;
    r1 = 0x04000053U; // [0x080256E0]
    r2 = 0x04000040U /* &REG_WIN0H */; // [0x080256C8]
    *(u8*)(r1) = (u8)r4;
    r1 = 0x00003F5FU; // [0x080256E4]
    *(u16*)(r2 + 0x10) = (u16)r1;
    r1 = 0x1C40U; // (113 << 6)
    *(u16*)(r0) = (u16)r1;
    r2 = (r0 >> 17);
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x080256E8]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080256A4: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x080256E8]
    r0 = 0x05000200U; // [0x080256EC]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080256B0: BL 0x08049144
    return r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_080255BC(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    r4 = r1 + r7;
    r3 = (r6 >> 1);
    r6 = (r0 >> 32);
    r6 -= 0x41U;
    r0 = r0;
    r0 = (r0 << 1);
    r0 = (r0 << 16);
    r4 = (r0 << 23);
    r0 = r0;
    stack[124] = r4; // [sp + 0x1F0]
    r1 = (r6 >> 32);
    r0 = (r0 << 24);
    r0 = (r0 << 24);
    r3 = r0 - 2;
    r0 = r0;
    r3 = (r2 << 1);
    r0 = (r0 << 16);
    r7 -= 0x5FU;
    r0 = r0;
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08025704;
    r0 = 0x00008044U; // [0x08025AD4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080256F8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08025704;
    r0 = r4;
    return r0;
loc_08025704:
    r0 = r4;
    r0 = sub_08024A7C(r0, r1, r2, r3); // 0x08025706: BL 0x08024A7C
    r0 = 0x0804A4E8U; // [0x08025AD8]
    r1 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x8000U; // (1 << 15)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    r0 = 0x0000802CU; // [0x08025ADC]
    r0 = r4 + r0;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 += 0xF0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0xA0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r0 = 0x08732360U; // [0x08025AE0]
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08004B08(r0, r1, r2, r3); // 0x0802572E
    r1 = 0x00008040U; // [0x08025AE4]
    r1 = r4 + r1;
    *(u32*)(r1) = (u32)r0;
    r0 = r4;
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08025AE8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802574A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08025746: BL 0x0803D63C
loc_0802574A:
    return r0;
    r4 = r0;
    r1 = 0x0U;
    r0 = sub_08024A9C(r0, r1, r2, r3); // 0x08025754
    r0 = r4;
    r0 += 0xCU;
    r2 = 0x8000U; // (1 << 15)
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08025762: BL 0x0804912C
    r0 = 0x0000801CU; // [0x08025AEC]
    r3 = 0x0U;
    r7 = r4 + r0;
    *(u32*)(r7) = (u32)r3;
    *(u32*)(r7 + 0x4) = (u32)r3;
    *(u32*)(r7 + 0x8) = (u32)r3;
    r0 -= 0x10U;
    r0 = r4 + r0;
    *(u32*)(r7 + 0xC) = (u32)r3;
    *(u32*)(r0) = (u32)r3;
    *(u32*)(r0 + 0x4) = (u32)r3;
    *(u32*)(r0 + 0x8) = (u32)r3;
    *(u32*)(r0 + 0xC) = (u32)r3;
    r0 = 0x00008040U; // [0x08025AE4]
    r1 = 0x0U;
    r0 = r4 + r0;
    stack[58] = r0; // [sp + 0xE8]
    stack[56] = r1; // [sp + 0xE0]
    r0 = *(u32*)(r0);
    lr = r7;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08025876(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x14);
    r12 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08025878(r0, r1, r2, r3);
    r0 = stack[58]; // [sp + 0xE8]
    r1 = r12;
    r0 = *(u32*)(r0);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    r5 = *(u32*)(r0 + 0x18);
    r3 = 0x08732360U; // [0x08025AE0]
    r0 = *(u16*)(r5 + 0x2);
    r1 = *(u32*)(r3 + 0x8);
    r2 = (r0 >> 3);
    r1 = r2 + r1;
    r2 = (r0 << 29);
    r1 += 0x80U;
    r1 = *(u8*)(r1 + 0xD);
    r2 = (r2 >> 29);
    r0 = 0x1U;
    r0 <<= (r2 & 0xFF);
    r1 &= r0;
    if (cmp_lhs == cmp_rhs) return sub_080257DA(r0, r1, r2, r3);
    r2 = *(u32*)(r5 + 0xC);
    r3 = *(u32*)(r5 + 0x4);
    r1 = *(u32*)(r5 + 0x8);
    r2 = r2 - r3;
    r3 = *(u32*)(r5 + 0x10);
    r0 = r5;
    r1 = r3 - r1;
    r2 *= r1;
    r1 = (r2 << 1);
    r6 = r1 + r5;
    r0 += 0x14U;
    r6 += 0x24U;
    return sub_080257EC(r0, r1, r2, r3);
}

// ROM Address: 0x080257DA..0x080257EC (18 bytes, Thumb)
u32 sub_080257DA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x08732360U; // [0x08025AE0]
    r0 = *(u32*)(r3 + 0x8);
    r0 = *(u8*)(r0 + 0x1);
    r0 = (r0 << 25);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08025892(r0, r1, r2, r3);
    r0 = r5 + 4;
    r6 = r5;
    r6 += 0x24U;
    return r0;
}

// ROM Address: 0x080257EC..0x0802581C (48 bytes, Thumb)
u32 sub_080257EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r0 + 0x8);
    r7 = lr;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080257FE;
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) return sub_08025842(r0, r1, r2, r3);
loc_080257FE:
    r2 = *(u32*)(r7);
    stack[57] = r2; // [sp + 0xE4]
    r3 = *(u32*)(r7 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) return sub_0802581C(r0, r1, r2, r3);
    r2 = *(u32*)(r7 + 0x4);
    r3 = *(u32*)(r7 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) return sub_0802581C(r0, r1, r2, r3);
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r0 -= 0x10U;
    *(u32*)r7 = r3; r7 += 4;
    return sub_08025842(r0, r1, r2, r3);
}

// ROM Address: 0x0802581C..0x0802587A (94 bytes, Thumb)
u32 sub_0802581C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[57]; // [sp + 0xE4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08025824;
    *(u32*)(r7) = (u32)r1;
loc_08025824:
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r7 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802582E;
    *(u32*)(r7 + 0x4) = (u32)r1;
loc_0802582E:
    r1 = *(u32*)(r0 + 0x8);
    r2 = *(u32*)(r7 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08025838;
    *(u32*)(r7 + 0x8) = (u32)r1;
loc_08025838:
    r1 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r7 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08025842;
    *(u32*)(r7 + 0xC) = (u32)r1;
loc_08025842:
    r3 = 0x08732360U; // [0x08025AE0]
    r1 = *(u32*)(r3 + 0x10);
    r1 = *(u8*)(r1);
    r2 = *(u8*)(r5);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0802585A;
    r1 = *(u32*)(r3 + 0x10);
    r1 = *(u8*)(r1 + 0x1);
    r2 = *(u8*)(r5 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0802585A;
    stack[56] = r5; // [sp + 0xE0]
loc_0802585A:
    r1 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_08025892(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) return sub_0802588A(r0, r1, r2, r3);
    r3 = (r2 << 8);
    r5 = r3 + r4;
    r3 = *(u16*)(r6);
    r6 += 0x2U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    return sub_0802587A(r0, r1, r2, r3);
    return sub_08025A9A(r0, r1, r2, r3);
    return sub_080258A4(r0, r1, r2, r3);
}

// ROM Address: 0x080258A4..0x08025AD4 (560 bytes, Thumb)
u32 sub_080258A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = lr;
    r0 = *(u32*)(r7);
    r0 = (r0 << 3);
    *(u32*)(r7) = (u32)r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = (r0 << 3);
    *(u32*)(r7 + 0x4) = (u32)r0;
    r0 = 0x00008024U; // [0x08025AF0]
    r0 = r4 + r0;
    r1 = *(u32*)(r0);
    r1 = (r1 << 3);
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 3);
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x8000U; // (1 << 15)
    r5 = r4 + r0;
    r0 = *(u32*)(r5 + 0x1C);
    r1 = r0;
    r1 -= 0xDFU;
    *(u32*)(r5 + 0xC) = (u32)r1;
    r1 = *(u32*)(r5 + 0x20);
    r0 -= 0x10U;
    r2 = r1;
    r2 -= 0x8FU;
    *(u32*)(r5 + 0x10) = (u32)r2;
    r2 = *(u32*)(r5 + 0x24);
    r1 -= 0x10U;
    r3 = r2;
    r3 -= 0x11U;
    *(u32*)(r5 + 0x14) = (u32)r3;
    r3 = *(u32*)(r5 + 0x28);
    r5 += 0x1CU;
    r6 = r3;
    r3 -= 0x90U;
    r2 -= 0xE0U;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r5 -= 0x2CU;
    r0 = 0x08732360U; // [0x08025AE0]
    r6 -= 0x11U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = *(u32*)(r0 + 0xC);
    r1 = 0x2FU;
    r6 = r0;
    r0 = 0x08732360U; // [0x08025AE0]
    r6 += 0x94U;
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 6);
    r0 = r0 + r1;
    r2 = 0x0U;
    r1 = 0x9U;
    r0 = *(u32*)(r0 + 0x38);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802590E
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[53] = r0; // [sp + 0xD4]
    r0 = r1;
    stack[52] = r1; // [sp + 0xD0]
    r1 = stack[53]; // [sp + 0xD4]
    r7 = stack[56]; // [sp + 0xE0]
    stack[54] = r0; // [sp + 0xD8]
    stack[55] = r1; // [sp + 0xDC]
    r7 += 0x4U;
    r0 = *(u32*)(r7 + 0x8);
    r1 = *(u32*)(r7);
    r0 = r0 - r1;
    r1 = (r0 << 3);
    r0 = stack[54]; // [sp + 0xD8]
    r1 *= r0;
    r0 = *(u32*)(r6);
    r2 = ((u32)((s32)r0 >> 1));
    r1 = r1 + r2;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08025940: BL 0x08046E58
    r1 = stack[56]; // [sp + 0xE0]
    r1 = *(u32*)(r1 + 0x4);
    r1 = (r1 << 3);
    r0 = r0 + r1;
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r7 + 0xC);
    r1 = *(u32*)(r7 + 0x4);
    r0 = r0 - r1;
    r1 = (r0 << 3);
    r0 = stack[55]; // [sp + 0xDC]
    r1 *= r0;
    r0 = *(u32*)(r6 + 0x4);
    r2 = ((u32)((s32)r0 >> 1));
    r1 = r1 + r2;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08025960: BL 0x08046E58
    r1 = stack[56]; // [sp + 0xE0]
    r1 = *(u32*)(r1 + 0x8);
    r1 = (r1 << 3);
    r0 = r0 + r1;
    *(u32*)(r5 + 0x30) = (u32)r0;
    r0 = 0x0000802CU; // [0x08025ADC]
    r2 = r4 + r0;
    r6 = r2;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08026EE6(r0, r1, r2, r3); // 0x08025978
    r1 = r0;
    r0 = 0x08732360U; // [0x08025AE0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025982: BL 0x0801191A
    r0 = *(u32*)(r5 + 0x2C);
    r0 -= 0x78U;
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r5 + 0x30);
    r0 -= 0x50U;
    *(u32*)(r5 + 0x30) = (u32)r0;
    r0 = *(u32*)(r6);
    r0 += 0xF0U;
    *(u32*)(r6 + 0x8) = (u32)r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 += 0xA0U;
    *(u32*)(r6 + 0xC) = (u32)r0;
    r0 = stack[58]; // [sp + 0xE8]
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080259A6: BL 0x0803D5B8
    r5 = r0;
    r0 = stack[58]; // [sp + 0xE8]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080259B4
    r0 = stack[58]; // [sp + 0xE8]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0);
    r2 = *(u32*)(r0 + 0x4);
    r0 = 0x6000000U; // (3 << 25)
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080259C6: BL 0x08049138
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080259CC: BL 0x0803D63C
    r0 = stack[58]; // [sp + 0xE8]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025A82;
    r0 = *(u32*)(r0 + 0x10);
    r7 = 0x08732360U; // [0x08025AE0]
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080259E2
    r6 = r0;
    r0 = stack[58]; // [sp + 0xE8]
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x10);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080259F0: BL 0x0803D5B8
    r5 = r0;
    r0 = stack[58]; // [sp + 0xE8]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080259FE
    r1 = 0x06010000U; // [0x08025AF4]
    r0 = (r6 << 5);
    r0 = r0 + r1;
    r1 = stack[58]; // [sp + 0xE8]
    r1 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x10);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08025A12: BL 0x08049138
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08025A18: BL 0x0803D63C
    r0 = stack[58]; // [sp + 0xE8]
    r0 = *(u32*)(r0);
    r7 = *(u32*)(r0 + 0xC);
    r0 = 0x20U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08025A24: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08025A3E;
    r3 = 0x0U;
    r2 = r7;
    r1 = r4;
    r0 = r5;
    stack[0] = r6; // [sp + 0x0]
    r0 = sub_08026C9C(r0, r1, r2, r3); // 0x08025A36
    r0 = 0x0804E148U /* &VTable_0804E148 */; // [0x08025AF8]
    *(u32*)(r5) = (u32)r0;
loc_08025A3E:
    r7 = 0x08732360U; // [0x08025AE0]
    r1 = r5;
    r0 = *(u32*)(r7 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025A44: BL 0x0801191A
    r0 = stack[58]; // [sp + 0xE8]
    r5 = 0x1U;
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) goto loc_08025A82;
loc_08025A54:
    r0 = stack[58]; // [sp + 0xE8]
    stack[0] = r6; // [sp + 0x0]
    r0 = *(u32*)(r0);
    r1 = (r5 << 1);
    r1 = r1 + r5;
    r0 = *(u32*)(r0 + 0xC);
    r1 = (r1 << 3);
    r2 = r0 + r1;
    r3 = r5;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08026C9C(r0, r1, r2, r3); // 0x08025A6A
    r1 = r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025A72: BL 0x0801191A
    r0 = stack[58]; // [sp + 0xE8]
    r5 += 0x1U;
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08025A54;
loc_08025A82:
    r0 = stack[58]; // [sp + 0xE8]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025A9A;
    r3 = 0x0U;
    stack[0] = r3; // [sp + 0x0]
    stack[17] = r3; // [sp + 0x44]
    r2 = 0x0U;
    r0 = sp;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08025A96
loc_08025A9A:
    r2 = 0x0U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08026B4C(r0, r1, r2, r3); // 0x08025AA0
    r5 = 0x08732360U; // [0x08025AE0]
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025AAA: BL 0x0801191A
    r2 = 0x1U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08026B4C(r0, r1, r2, r3); // 0x08025AB4
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025ABC: BL 0x0801191A
    r2 = 0x2U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08026B4C(r0, r1, r2, r3); // 0x08025AC6
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025ACE: BL 0x0801191A
    return sub_08025AFC(r0, r1, r2, r3);
}

// ROM Address: 0x08025AFA..0x08025B34 (58 bytes, Thumb)
u32 sub_08025AFA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 = 0x3U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08026B4C(r0, r1, r2, r3); // 0x08025B02
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08025B0A: BL 0x0801191A
    r1 = 0x00001E83U; // [0x08025DF0]
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0 + 0xC) = (u16)r1;
    r1 -= 0x143U;
    *(u16*)(r0) = (u16)r1;
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025B32;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08025B2E: BL __call_via_r3
loc_08025B32:
    return r0;
}

// ROM Address: 0x08025B34..0x08025C14 (224 bytes, Thumb)
u32 sub_08025B34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[16]; // [sp + 0x40]
    r0 = 0x8000U; // (1 << 15)
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x30);
    r1 -= 0x8U;
    r2 = (r1 << 24);
    r6 = (r2 >> 27);
    r0 -= 0x30U;
    r2 = (r0 << 24);
    r0 = ((u32)((s32)r0 >> 8));
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x20U;
    r0 = r0 - r6;
    stack[2] = r0; // [sp + 0x8]
    r0 = stack[3]; // [sp + 0xC]
    r1 = ((u32)((s32)r1 >> 8));
    r5 = (r2 >> 27);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[4] = r1; // [sp + 0x10]
    r4 = 0x0600F000U; // [0x08025DF4]
    if (cmp_lhs >= cmp_rhs) goto loc_08025B80;
    r7 = r5;
    cmp_lhs = (s32)r5; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08025C12;
loc_08025B6C:
    r0 = (r7 << 6);
    r0 = r0 + r4;
    r2 = 0x40U;
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08025B74: BL 0x0804912C
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08025B6C;
    goto loc_08025C12;
loc_08025B80:
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08025BAE;
    r7 = r5;
    cmp_lhs = (s32)r5; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08025BEC;
    r0 = stack[2]; // [sp + 0x8]
    r2 = (r0 << 1);
    r1 = (r6 << 1);
    stack[14] = r1; // [sp + 0x38]
    stack[15] = r2; // [sp + 0x3C]
loc_08025B96:
    r0 = (r7 << 6);
    r1 = stack[14]; // [sp + 0x38]
    r0 = r0 + r4;
    r0 = r0 + r1;
    r1 = 0x0U;
    r2 = stack[15]; // [sp + 0x3C]
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08025BA2: BL 0x08049168
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08025B96;
    goto loc_08025BEC;
loc_08025BAE:
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 13);
    r0 = r0 + r1;
    r1 = stack[4]; // [sp + 0x10]
    r7 = r5;
    r1 = (r1 << 6);
    r1 = r0 + r1;
    r1 += 0xCU;
    stack[1] = r1; // [sp + 0x4]
    cmp_lhs = (s32)r5; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08025BEC;
    r0 = stack[2]; // [sp + 0x8]
    r0 = (r0 << 1);
    r2 = (r6 << 1);
    stack[12] = r2; // [sp + 0x30]
    stack[13] = r0; // [sp + 0x34]
loc_08025BD0:
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r7 << 8);
    r2 = stack[12]; // [sp + 0x30]
    r0 = r0 + r1;
    r1 = r0 + r2;
    r0 = (r7 << 6);
    r0 = r0 + r4;
    r0 = r0 + r2;
    r2 = stack[13]; // [sp + 0x34]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08025BE2: BL 0x08049144
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08025BD0;
loc_08025BEC:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025C12;
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_08025C14(r0, r1, r2, r3);
    r7 = r5;
    cmp_lhs = (s32)r5; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08025C12;
    r2 = (r6 << 1);
    stack[11] = r2; // [sp + 0x2C]
loc_08025C00:
    r0 = (r7 << 6);
    r0 = r0 + r4;
    r1 = 0x0U;
    r2 = stack[11]; // [sp + 0x2C]
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08025C08: BL 0x08049168
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08025C00;
loc_08025C12:
    return sub_08025C46(r0, r1, r2, r3);
}

// ROM Address: 0x08025C14..0x08025C66 (82 bytes, Thumb)
u32 sub_08025C14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 13);
    r0 = r0 + r1;
    r1 = stack[4]; // [sp + 0x10]
    r7 = r5;
    r1 = (r1 << 6);
    r1 = r0 + r1;
    r1 += 0x4CU;
    stack[1] = r1; // [sp + 0x4]
    cmp_lhs = (s32)r5; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08025C46;
    r0 = (r6 << 1);
    stack[10] = r0; // [sp + 0x28]
loc_08025C30:
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r7 << 8);
    r1 = r0 + r1;
    r0 = (r7 << 6);
    r0 = r0 + r4;
    r2 = stack[10]; // [sp + 0x28]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08025C3C: BL 0x08049144
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08025C30;
loc_08025C46:
    r0 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_08025C66(r0, r1, r2, r3);
    cmp_lhs = (s32)r5; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08025C62;
loc_08025C50:
    r0 = (r5 << 6);
    r0 = r0 + r4;
    r2 = 0x40U;
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08025C58: BL 0x0804912C
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08025C50;
loc_08025C62:
    return r0;
}

// ROM Address: 0x08025C66..0x08025D2E (200 bytes, Thumb)
u32 sub_08025C66(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08025C94;
    r7 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08025CD4;
    r0 = stack[2]; // [sp + 0x8]
    r2 = (r0 << 1);
    r1 = (r6 << 1);
    stack[8] = r1; // [sp + 0x20]
    stack[9] = r2; // [sp + 0x24]
loc_08025C7C:
    r0 = (r7 << 6);
    r1 = stack[8]; // [sp + 0x20]
    r0 = r0 + r4;
    r0 = r0 + r1;
    r1 = 0x0U;
    r2 = stack[9]; // [sp + 0x24]
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08025C88: BL 0x08049168
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08025C7C;
    goto loc_08025CD4;
loc_08025C94:
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 13);
    r0 = r0 + r1;
    r1 = stack[4]; // [sp + 0x10]
    r7 = 0x0U;
    r1 = (r1 << 6);
    r0 = r0 + r1;
    r1 = 0x0000200CU; // [0x08025DF8]
    r1 = r0 + r1;
    stack[1] = r1; // [sp + 0x4]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08025CD4;
    r0 = stack[2]; // [sp + 0x8]
    r0 = (r0 << 1);
    r2 = (r6 << 1);
    stack[6] = r2; // [sp + 0x18]
    stack[7] = r0; // [sp + 0x1C]
loc_08025CB8:
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r7 << 8);
    r2 = stack[6]; // [sp + 0x18]
    r0 = r0 + r1;
    r1 = r0 + r2;
    r0 = (r7 << 6);
    r0 = r0 + r4;
    r0 = r0 + r2;
    r2 = stack[7]; // [sp + 0x1C]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08025CCA: BL 0x08049144
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08025CB8;
loc_08025CD4:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08025C62(r0, r1, r2, r3);
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_08025CFA;
    r7 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08025C62(r0, r1, r2, r3);
    r6 = (r6 << 1);
loc_08025CE6:
    r0 = (r7 << 6);
    r0 = r0 + r4;
    r2 = r6;
    r1 = 0x0U;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08025CEE: BL 0x08049168
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08025CE6;
    return sub_08025C62(r0, r1, r2, r3);
loc_08025CFA:
    r7 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08025C62(r0, r1, r2, r3);
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 13);
    r0 = r0 + r1;
    r1 = stack[4]; // [sp + 0x10]
    r1 = (r1 << 6);
    r1 = r0 + r1;
    r0 = 0x0000204CU; // [0x08025DFC]
    r1 = r1 + r0;
    stack[5] = r1; // [sp + 0x14]
    r6 = (r6 << 1);
loc_08025D16:
    r1 = stack[5]; // [sp + 0x14]
    r0 = (r7 << 8);
    r1 = r0 + r1;
    r0 = (r7 << 6);
    r0 = r0 + r4;
    r2 = r6;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08025D22: BL 0x08049144
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08025D16;
    return sub_08025C62(r0, r1, r2, r3);
}

// Evidence: writes BG2HOFS 0x04000018: 0x08025D36 ldr r3, [pc, #0xc8] (= 0x04000018) then 0x08025D3A strh r1, [r3]; writes BG2VOFS 0x0400001A: 0x08025D3C strh r2, [r3, #2]; writes BG3HOFS 0x0400001C: 0x08025D42 strh r1, [r3, #4]; writes BG3VOFS 0x0400001E: 0x08025D44 strh r0, [r3, #6]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08025D2E
// ROM Address: 0x08025D2E..0x08025DF0 (194 bytes, Thumb)
u32 Bg_WriteScroll2And3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x8000U; // (1 << 15)
    r0 = r0 + r1;
    r1 = *(u32*)(r0 + 0x2C);
    r3 = 0x04000018U /* &REG_BG2HOFS */; // [0x08025E00]
    r2 = *(u32*)(r0 + 0x30);
    *(u16*)(r3) = (u16)r1;
    *(u16*)(r3 + 0x2) = (u16)r2;
    r1 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x30);
    *(u16*)(r3 + 0x4) = (u16)r1;
    *(u16*)(r3 + 0x6) = (u16)r0;
    return r0; // BX lr
    r3 = 0x08732360U; // [0x08025E04]
    r1 = *(u32*)(r3);
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 26);
    r2 = (r1 >> 31);
    r1 = 0x8000U; // (1 << 15)
    r1 = r0 + r1;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025D6A;
    r2 = *(u32*)(r1 + 0x2C);
    r4 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_08025D6A;
    r2 -= 0x1U;
    *(u32*)(r1 + 0x2C) = (u32)r2;
loc_08025D6A:
    r2 = *(u32*)(r3);
    r2 = *(u16*)(r2 + 0x2);
    r2 = (r2 << 27);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08025D80;
    r2 = *(u32*)(r1 + 0x2C);
    r4 = *(u32*)(r1 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_08025D80;
    r2 += 0x1U;
    *(u32*)(r1 + 0x2C) = (u32)r2;
loc_08025D80:
    r2 = *(u32*)(r3);
    r2 = *(u16*)(r2 + 0x2);
    r2 = (r2 << 25);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08025D96;
    r2 = *(u32*)(r1 + 0x30);
    r4 = *(u32*)(r1 + 0x10);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_08025D96;
    r2 -= 0x1U;
    *(u32*)(r1 + 0x30) = (u32)r2;
loc_08025D96:
    r2 = *(u32*)(r3);
    r4 = r3;
    r2 = *(u16*)(r2 + 0x2);
    r2 = (r2 << 24);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08025DAE;
    r2 = *(u32*)(r1 + 0x30);
    r3 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08025DAE;
    r2 += 0x1U;
    *(u32*)(r1 + 0x30) = (u32)r2;
loc_08025DAE:
    r2 = 0x0000802CU; // [0x08025E08]
    r5 = 0x1U;
    r2 = r0 + r2;
    r3 = *(u32*)(r2);
    r3 += 0xF0U;
    *(u32*)(r2 + 0x8) = (u32)r3;
    r3 = *(u32*)(r2 + 0x4);
    r3 += 0xA0U;
    *(u32*)(r2 + 0xC) = (u32)r3;
    r3 = *(u32*)(r4);
    r2 = r5;
    r3 = *(u16*)(r3 + 0x2);
    r3 = (r3 << 24);
    r6 = (r3 >> 28);
    if (cmp_lhs != cmp_rhs) goto loc_08025DCE;
    r2 = 0x0U;
loc_08025DCE:
    r6 = *(u32*)(r1 + 0x3C);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) goto loc_08025DDC;
    r2 = (r3 >> 28);
    if (cmp_lhs != cmp_rhs) goto loc_08025DDA;
    r5 = 0x0U;
loc_08025DDA:
    *(u32*)(r1 + 0x3C) = (u32)r5;
loc_08025DDC:
    r1 = *(u32*)(r4);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08025DEE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08025DEA: BL 0x08046AA2
loc_08025DEE:
    return r0;
}

// ROM Address: 0x08025E50..0x08025E6E (30 bytes, Thumb)
u32 sub_08025E50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08025E6E(r0, r1, r2, r3);
    r0 = 0x2CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08025E60: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08025E6E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08025E6E..0x08025EF0 (130 bytes, Thumb)
u32 sub_08025E6E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 = sub_08024A7C(r0, r1, r2, r3); // 0x08025E70: BL 0x08024A7C
    r0 = 0x0804A52CU /* &VTable_0804A52C */; // [0x08026184]
    r2 = ((u32)((s32)r5 >> 3));
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r6;
    r0 = 0x08732374U; // [0x08026188]
    r6 = (r5 << 29);
    r1 = *(u32*)(r0 + 0x8);
    r6 = (r6 >> 29);
    r1 = r2 + r1;
    r1 += 0xC0U;
    r3 = 0x1U;
    r2 = *(u8*)(r1 + 0x5);
    r3 <<= (r6 & 0xFF);
    r2 |= r3;
    *(u8*)(r1 + 0x5) = (u8)r2;
    r1 = (r5 << 4);
    r2 = 0x0874D380U; // [0x0802618C]
    r5 = 0x0U;
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r1;
    *(u32*)(r4 + 0x1C) = (u32)r1;
    *(u8*)(r4 + 0xC) = (u8)r1;
    *(u8*)(r4 + 0xD) = (u8)r1;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x68U;
    stack[2] = r1; // [sp + 0x8]
    r1 = 0x38U;
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0 + 0xC);
    r6 = 0x10; // sp + 0x10
    r0 = r6;
    r2 = sp;
    r0 = sub_0803DA78(r0, r1, r2, r3); // 0x08025EBA: BL 0x0803DA78
    r0 = *(u32*)(r4 + 0x20);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08026190]
    r0 = *(u16*)(r0 + 0x2);
    r7 = sp;
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    stack[1] = r0; // [sp + 0x4]
loc_08025ECC:
    r3 = r7;
    r2 = 0x68U;
    r0 = r6;
    r1 = stack[1]; // [sp + 0x4]
    r0 = sub_0803DE6A(r0, r1, r2, r3); // 0x08025ED4
    r0 = stack[3]; // [sp + 0xC]
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025ECC;
    r0 = (r5 << 4);
    r0 -= 0x38U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08025EEC;
    r1 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r1;
loc_08025EEC:
    r0 = r4;
    return sub_08025E6A(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy15_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x08025EF0..0x08025F64 (116 bytes, Thumb)
u32 Object_Destroy15(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804A52CU /* &VTable_0804A52C */; // [0x08026184]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025F06;
    r1 = 0x1U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08025F02: BL 0x0803F58C
loc_08025F06:
    r0 = 0x080491F0U /* &VTable_080491F0 */; // [0x08026194]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08025F14;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08025F10: BL 0x0803D63C
loc_08025F14:
    return r0;
    r2 = *(u32*)(r0 + 0x14);
    r4 = r0;
    r2 += 0x38U;
    r1 = 0x68U;
    r0 = 0x0U;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08025F22
    r1 = 0x08732374U; // [0x08026188]
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r1 = *(u32*)(r1 + 0xC);
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = 0x2U;
    *(u8*)(r1 + 0x3) = (u8)r0;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0xEU;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = 0x10U;
    *(u8*)(r1 + 0x1) = (u8)r0;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = 0x0U;
    r2 = *(u32*)(r0 + 0x30);
    r0 = *(u32*)(r0 + 0x24);
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08025F4C: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x20);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08026190]
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r0 = *(u32*)(r4 + 0x1C);
    r1 = 0x68U;
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x08025F5E
    return r0;
}

// ROM Address: 0x08025F64..0x08025F66 (2 bytes, Thumb)
u32 sub_08025F64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x08025F66..0x08026042 (220 bytes, Thumb)
u32 sub_08025F66(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    r0 = *(u32*)(r4 + 0x10);
    r2 = sp;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x68U;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u32*)(r4 + 0x10);
    r1 = 0x06009800U; // [0x08026198]
    r0 += 0x38U;
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08025F84: BL 0x0804915C
    r1 = *(u32*)(r4 + 0x24);
    r2 = *(u32*)(r4 + 0x10);
    r0 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08025F94;
    r0 = 0x0U;
loc_08025F94:
    *(u32*)(r1 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x28);
    r4 += 0x10U;
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08025FA4;
    r1 = 0x1U;
    goto loc_08025FA6;
loc_08025FA4:
    r1 = 0x0U;
loc_08025FA6:
    *(u32*)(r0 + 0x20) = (u32)r1;
    return r0;
    r5 = 0x08732374U; // [0x08026188]
    r4 = r0;
    r1 = *(u32*)(r5);
    r0 = 0x0U;
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08025FD0;
    r1 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08025FD0;
    r1 -= 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r1;
    r0 = r4;
    r0 = sub_08025F66(r0, r1, r2, r3); // 0x08025FCA: BL 0x08025F66
    r0 = 0x1U;
loc_08025FD0:
    r1 = *(u32*)(r5);
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 24);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08025FEE;
    r1 = *(u32*)(r4 + 0x10);
    r2 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08025FEE;
    r1 += 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r1;
    r0 = r4;
    r0 = sub_08025F66(r0, r1, r2, r3); // 0x08025FE8: BL 0x08025F66
    r0 = 0x1U;
loc_08025FEE:
    r1 = *(u8*)(r4 + 0xD);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08025FF6;
    *(u8*)(r4 + 0xD) = (u8)r0;
loc_08025FF6:
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08026004;
    r0 = 0x1U;
    *(u8*)(r4 + 0xC) = (u8)r0;
loc_08026004:
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08026018;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08026014: BL 0x08046AA2
loc_08026018:
    return r0;
    r1 = *(u8*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08026042(r0, r1, r2, r3);
    r0 = 0x520U; // (41 << 5)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08026026: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08026038;
    r0 = r4;
    r0 = sub_080261D4(r0, r1, r2, r3); // 0x08026030
    r0 = 0x0804E3C8U /* &VTable_0804E3C8 */; // [0x0802619C]
    *(u32*)(r4) = (u32)r0;
loc_08026038:
    r0 = r4;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0802603A
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08026042..0x08026048 (6 bytes, Thumb)
u32 sub_08026042(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08024C04(r0, r1, r2, r3); // 0x08026042
    return r0;
}

// ROM Address: 0x08026048..0x080263B8 (880 bytes, Thumb)
u32 sub_08026048(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFFFEFBCU; // [0x080261A0]
    r6 = 0x08732374U; // [0x08026188]
    r4 = r0;
    sp += r3;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x08026054
    r0 = *(u32*)(r4 + 0x20);
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08011F20(r0, r1, r2, r3); // 0x0802605C
    r6 = 0x00001010U; // [0x080261A4]
    r5 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r6 += sp;
    r0 = r6;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0802606C
    r3 = 0x1000U; // (1 << 12)
    r0 = 0x08732374U; // [0x08026188]
    r3 += sp;
    r1 = *(u32*)(r3 + 0x34);
    r0 += 0x10U;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0802607C
    r0 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r4 + 0x18);
    r1 = r6;
    r0 = sub_08024D94(r0, r1, r2, r3); // 0x08026086: BL 0x08024D94
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080260AC;
    r7 = 0x10; // sp + 0x10
loc_08026090:
    r1 = r7;
    r0 = r5;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08026094
    r0 = 0x087325E8U; // [0x080261A8]
    r5 = sp;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r5 -= 0x10U;
    r1 = r7;
    r0 = r6;
    r2 = sp;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x080260A8
loc_080260AC:
    r1 = 0x06000040U; // [0x080261AC]
    r0 = r6;
    r0 = sub_0803F9B8(r0, r1, r2, r3); // 0x080260B0
    r0 = 0x00001010U; // [0x080261A4]
    r1 = 0x0U;
    r0 += sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080260BA: BL 0x0803F58C
    r0 = 0x0U;
    r1 = *(u32*)(r4 + 0x20);
    r0 = sub_080272EC(r0, r1, r2, r3); // 0x080260C2: BL 0x080272EC
    r5 = r0;
    r6 = 0x08732374U; // [0x08026188]
    r1 = r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x080260CE: BL 0x0801191A
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x2U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080260DC: BL __call_via_r3
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r5 = 0x0U;
    *(u32*)(r3 + 0x34) = (u32)r5;
    r0 = 0x1EU;
    *(u32*)(r3 + 0x3C) = (u32)r0;
    *(u32*)(r3 + 0x38) = (u32)r5;
    r0 = 0x14U;
    *(u32*)(r3 + 0x40) = (u32)r0;
    r0 = r3;
    r2 = 0x1U;
    r0 += 0x34U;
    r1 = 0x0600F800U; // [0x080261B0]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x080260FC
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F000U; // [0x080261B4]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08026108: BL 0x0804912C
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = 0xFU;
    *(u32*)(r3 + 0x34) = (u32)r0;
    r0 = 0xBU;
    *(u32*)(r3 + 0x38) = (u32)r0;
    r0 = 0x1CU;
    *(u32*)(r3 + 0x3C) = (u32)r0;
    r0 = 0x12U;
    *(u32*)(r3 + 0x40) = (u32)r0;
    r2 = 0x260U; // (19 << 5)
    r0 = r3;
    r0 += 0x34U;
    r1 = 0x0600F000U; // [0x080261B4]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x0802612C
    r1 = 0x00001E83U; // [0x080261B8]
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0 + 0xC) = (u16)r1;
    r1 += 0x100U;
    *(u16*)(r0 + 0xE) = (u16)r1;
    *(u16*)(r0 + 0x18) = (u16)r5;
    *(u16*)(r0 + 0x1A) = (u16)r5;
    *(u16*)(r0 + 0x1C) = (u16)r5;
    r1 = 0x1C40U; // (113 << 6)
    *(u16*)(r0 + 0x1E) = (u16)r5;
    *(u16*)(r0) = (u16)r1;
    r1 = 0x1U;
    r0 = 0x0U;
    r0 = sub_080271D0(r0, r1, r2, r3); // 0x08026150
    r1 = 0x0U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = 0x0U;
    r0 = sub_080271D0(r0, r1, r2, r3); // 0x0802615A
    *(u32*)(r4 + 0x28) = (u32)r0;
    r1 = *(u32*)(r4 + 0x24);
    r0 = *(u32*)(r6 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08026164: BL 0x0801191A
    r1 = *(u32*)(r4 + 0x28);
    r0 = *(u32*)(r6 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802616C: BL 0x0801191A
    r0 = r4;
    r0 = sub_08025F16(r0, r1, r2, r3); // 0x08026172
    r0 = r4;
    r0 = sub_08025F66(r0, r1, r2, r3); // 0x08026178: BL 0x08025F66
    r3 = 0x00001044U; // [0x080261BC]
    sp += r3;
    return r0;
    r0 = r0;
    r5 = 0x08026238U;
    r4 = (r0 >> 32);
    r3 = 0x74U;
    r3 = (r6 >> 1);
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08026090;
    r4 = (r6 >> 1);
    r6 = (r0 >> 32);
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    r0 = stack[0]; // [sp + 0x0]
    r0 = (r0 << 24);
    return sub_08026930(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = ((u32)((s32)r2 >> 32));
    r0 = r0;
    r5 = 0xE8U;
    r3 = (r6 >> 1);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r0 = (r0 << 24);
    r0 = (r0 << 24);
    r3 = r0 - 2;
    r0 = r0;
    r4 = ((u32)((s32)r0 >> 1));
    r0 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080261D2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080261CE: BL __call_via_r3
loc_080261D2:
    return r0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080261EA;
    r0 = 0x520U; // (41 << 5)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080261DE: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080261EA;
    r0 = r4;
    return r0;
loc_080261EA:
    r0 = r4;
    r0 = sub_08024A7C(r0, r1, r2, r3); // 0x080261EC: BL 0x08024A7C
    r0 = 0x0804A570U /* &VTable_0804A570 */; // [0x08026408]
    r2 = r4;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x087325F8U; // [0x0802640C]
    r1 = 0x2FU;
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 6);
    r2 += 0xCU;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x38);
    r1 = 0x16U;
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0802620A
    r0 = r4;
    return r0;
    r5 = r0;
    r1 = 0x1U;
    r0 = sub_08024A9C(r0, r1, r2, r3); // 0x08026218
    r1 = 0x500U; // (5 << 8)
    r7 = r5 + r1;
    r0 = 0x0U;
    *(u32*)(r7 + 0x18) = (u32)r0;
    *(u32*)(r7 + 0x10) = (u32)r0;
    r0 = *(u32*)(r5 + 0xC);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08026256;
    r6 = r5;
    r6 += 0xCU;
loc_08026234:
    r0 = (r4 << 2);
    r0 = r0 + r4;
    r0 = (r0 << 3);
    r1 = r0 + r6;
    r1 += 0x4U;
    r0 = 0x0U;
    r0 = sub_08027390(r0, r1, r2, r3); // 0x08026240
    r1 = r0;
    r0 = 0x087325F8U; // [0x0802640C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802624A: BL 0x0801191A
    r0 = *(u32*)(r5 + 0xC);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08026234;
loc_08026256:
    r0 = 0x0U;
    r0 = sub_08026F94(r0, r1, r2, r3); // 0x08026258
    r1 = r0;
    *(u32*)(r7 + 0x1C) = (u32)r0;
    r0 = 0x087325F8U; // [0x0802640C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08026264: BL 0x0801191A
    r0 = 0x1940U; // (101 << 6)
    r1 = 0x4000000U; // (1 << 26)
    *(u16*)(r1) = (u16)r0;
    return r0;
    r0 = 0x0U;
    r0 = sub_080256F0(r0, r1, r2, r3); // 0x08026278
    return r0;
    r3 = *(u32*)(r0 + 0xC);
    r5 = 0x7FFFFFFFU /* &INT_MAX */; // [0x08026410]
    r4 = 0x0U;
    r2 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    lr = r5;
    if (cmp_lhs <= cmp_rhs) goto loc_0802630A;
    r5 = r0;
    r5 += 0xCU;
    r12 = r5;
loc_08026296:
    r3 = (r2 << 2);
    r3 = r3 + r2;
    r3 = (r3 << 3);
    r3 += r12;
    r3 += 0x4U;
    stack[4] = r3; // [sp + 0x10]
    r5 = *(u32*)(r1);
    r3 += 0x14U;
    r7 = *(u32*)(r3);
    r6 = r3;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08026302;
    r7 = *(u32*)(r3 + 0x8);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08026302;
    r5 = *(u32*)(r1 + 0x4);
    r7 = *(u32*)(r3 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08026302;
    r3 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08026302;
    r3 = r6;
    r5 = *(u32*)(r6);
    r7 = *(u32*)(r6 + 0x8);
    r6 = *(u32*)(r6 + 0x4);
    r3 += 0x8U;
    r3 = *(u32*)(r3 + 0x4);
    r5 = r5 + r7;
    r3 = r6 + r3;
    stack[1] = r3; // [sp + 0x4]
    stack[0] = r5; // [sp + 0x0]
    r5 = ((u32)((s32)r5 >> 1));
    r3 = ((u32)((s32)r3 >> 1));
    stack[1] = r3; // [sp + 0x4]
    stack[3] = r3; // [sp + 0xC]
    stack[0] = r5; // [sp + 0x0]
    stack[2] = r5; // [sp + 0x8]
    r3 = *(u32*)(r1);
    r3 = r3 - r5;
    r5 = *(u32*)(r1 + 0x4);
    r6 = stack[3]; // [sp + 0xC]
    stack[0] = r3; // [sp + 0x0]
    r5 = r5 - r6;
    r6 = r3;
    r3 *= r6;
    r6 = r5;
    r6 *= r5;
    r3 = r3 + r6;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)lr;
    stack[1] = r5; // [sp + 0x4]
    if (cmp_lhs >= cmp_rhs) goto loc_08026302;
    r3 = stack[4]; // [sp + 0x10]
    r4 = *(u32*)(r3 + 0x24);
loc_08026302:
    r3 = *(u32*)(r0 + 0xC);
    r2 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08026296;
loc_0802630A:
    r1 = 0x500U; // (5 << 8)
    r5 = r0 + r1;
    r0 = *(u32*)(r5 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_0802632A;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802631E;
    r0 = sub_08027448(r0, r1, r2, r3); // 0x0802631A
loc_0802631E:
    *(u32*)(r5 + 0x18) = (u32)r4;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802632A;
    r0 = r4;
    r0 = sub_08027424(r0, r1, r2, r3); // 0x08026326: BL 0x08027424
loc_0802632A:
    return r0;
    r1 = 0x500U; // (5 << 8)
    r1 = r0 + r1;
    r1 = *(u32*)(r1 + 0x1C);
    r2 = 0xC10U; // (193 << 4)
    r1 = r1 + r2;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[2] = r1; // [sp + 0x8]
    r1 = r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r3 = 0xC; // sp + 0xC
    r1 = r3;
    stack[4] = r2; // [sp + 0x10]
    r0 = sub_0802627E(r0, r1, r2, r3); // 0x08026358
    return r0;
    r1 = 0x087325F8U; // [0x0802640C]
    r1 = *(u32*)(r1);
    r1 = *(u16*)(r1 + 0x6);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08026388;
    r1 = 0x500U; // (5 << 8)
    r1 = r0 + r1;
    r2 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026388;
    *(u32*)(r1 + 0x14) = (u32)r2;
    r2 = 0x1U;
    *(u32*)(r1 + 0x10) = (u32)r2;
    r0 = sub_08024BE6(r0, r1, r2, r3); // 0x0802637E
    r0 = 0x00003F5FU; // [0x08026414]
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x08026418]
    *(u16*)(r1 + 0x10) = (u16)r0;
loc_08026388:
    return r0;
    r1 = 0x500U; // (5 << 8)
    r4 = r0 + r1;
    r1 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080263B8(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_0802745E(r0, r1, r2, r3); // 0x0802639A
    r5 = r0;
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_08027454(r0, r1, r2, r3); // 0x080263A2
    r1 = r0;
    r2 = r5;
    r0 = 0x0U;
    r0 = sub_08025E50(r0, r1, r2, r3); // 0x080263AC: BL 0x08025E50
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080263B0
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080263B8..0x080263BE (6 bytes, Thumb)
u32 sub_080263B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08024C04(r0, r1, r2, r3); // 0x080263B8
    return sub_080263B6(r0, r1, r2, r3);
}

// ROM Address: 0x080263BE..0x080264D0 (274 bytes, Thumb)
u32 sub_080263BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x500U; // (5 << 8)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x1C);
    r1 = 0xC10U; // (193 << 4)
    r0 = r0 + r1;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r0 = ((u32)((s32)r1 >> 2));
    return r0; // BX lr
    r1 = 0x500U; // (5 << 8)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x1C);
    r1 = 0xC10U; // (193 << 4)
    r0 = r0 + r1;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    stack[0] = r1; // [sp + 0x0]
    r0 = ((u32)((s32)r0 >> 2));
    return r0; // BX lr
    r0 = r0;
    r5 = 0x080265CCU;
    r4 = (r0 >> 32);
    r5 = 0xF8U;
    r3 = (r6 >> 1);
    r7 = *(u8*)(r7 + 0x1F);
    r7 -= 0x5FU;
    r0 = r0;
    r0 = (r0 << 1);
    r0 = (r0 << 16);
    r1 = 0x1U;
    r0 = sub_08024A9C(r0, r1, r2, r3); // 0x08026422
    r5 = 0x08732604U; // [0x080264B4]
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802642A: BL 0x0803D5B8
    r4 = r0;
    r1 = r0;
    r0 = r5;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08026434
    r1 = r4;
    r0 = 0x06000040U; // [0x080264B8]
    r2 = *(u32*)(r5 + 0x4);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802643E: BL 0x08049138
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08026444: BL 0x0803D63C
loc_08026448:
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F000U; // [0x080264BC]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08026450: BL 0x0804912C
    r0 = 0x1EU;
    stack[25] = r0; // [sp + 0x64]
    r0 = 0x14U;
    r4 = 0x0U;
    stack[26] = r0; // [sp + 0x68]
    r0 = 0x5C; // sp + 0x5C
    stack[23] = r4; // [sp + 0x5C]
    stack[24] = r4; // [sp + 0x60]
    r2 = 0x1U;
    r1 = 0x0600F000U; // [0x080264BC]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08026468
    r1 = 0x00001E83U; // [0x080264C0]
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0 + 0xC) = (u16)r1;
    r1 -= 0x143U;
    *(u16*)(r0) = (u16)r1;
    r1 = 0x0877D0C0U /* EventPoolRecord */; // [0x080264C4]
    r0 = sp;
    r2 = 0x0U;
    r0 = sub_08004098(r0, r1, r2, r3); // 0x08026480: BL 0x08004098
    r0 = 0x04000018U /* &REG_BG2HOFS */; // [0x080264C8]
    *(u16*)(r0) = (u16)r4;
    *(u16*)(r0 + 0x2) = (u16)r4;
    return r0;
    r0 = 0x0U;
    r0 = sub_080256F0(r0, r1, r2, r3); // 0x08026492
    return r0;
    r1 = 0x08732604U; // [0x080264B4]
    r1 -= 0x4U;
    r1 = *(u32*)(r1);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_080264B0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080264AC: BL 0x08046AA2
loc_080264B0:
    return r0;
    r0 = r0;
    r6 = 0x4U;
    r3 = (r6 >> 1);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r0 = (r0 << 24);
    r3 = r0 - 2;
    r0 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08026448;
    r7 = (r6 >> 1);
    r0 = r3;
    r0 = (r0 << 16);
    r0 = 0x03002FC0U; // [0x080264D0]
    return r0; // BX lr
}

// ROM Address: 0x080264D0..0x080264D4 (4 bytes, Thumb)
u32 sub_080264D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 192;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x080264D4..0x08026510 (60 bytes, Thumb)
u32 sub_080264D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = r1;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u8*)(r0 + 0x11) = (u8)r2;
    r1 = 0x12U;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080264E4
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08026510(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08026508: BL __call_via_r3
    return r0;
}
