/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #09
 * Address Range: 0x08019D3A..0x0801C62C (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08019D3A..0x08019D42 (8 bytes, Thumb)
u32 sub_08019D3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xC8U;
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x08019D3C
    return sub_08019D38(r0, r1, r2, r3);
}

// ROM Address: 0x08019D42..0x08019D86 (68 bytes, Thumb)
u32 sub_08019D42(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r0 += 0x2EU;
    r5 = *(u8*)(r0);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08019D52: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019D64;
    r1 = 0x0804DE7CU /* &VTable_0804DE7C */; // [0x08019FC4]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r5;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08019D64:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08019D6A
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08019D72
    return r0;
    r1 = 0x03003284U; // [0x08019FC8]
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08019D86(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019D86..0x08019DA8 (34 bytes, Thumb)
u32 sub_08019D86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0871DA98U; // [0x08019FC0]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08019D94;
    r0 = 0x0U;
    return sub_08019D84(r0, r1, r2, r3);
loc_08019D94:
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x08019FC0]
    r1 = *(u8*)(r2 + r1);
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x08019DA2
    return sub_08019D84(r0, r1, r2, r3);
}

// ROM Address: 0x08019DA8..0x08019DF0 (72 bytes, Thumb)
u32 sub_08019DA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r0 += 0x2EU;
    r5 = *(u8*)(r0);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08019DB8: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019DCC;
    r1 = 0x0804D05CU /* &VTable_0804D05C */; // [0x08019FCC]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r5;
    r1 = 0x0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_08019DCC:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08019DD2
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08019DDA
    return r0;
    r1 = 0x0871DA98U; // [0x08019FC0]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019DF0(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019DF0..0x08019DF8 (8 bytes, Thumb)
u32 sub_08019DF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xCU;
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x08019DF2
    return sub_08019DEE(r0, r1, r2, r3);
}

// ROM Address: 0x08019DF8..0x08019E3A (66 bytes, Thumb)
u32 sub_08019DF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x2U;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x08019DFE: BL 0x08013598
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08019E04: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019E16;
    r1 = 0x0804E244U /* &VTable_0804E244 */; // [0x08019FD0]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_08019E16:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08019E1C
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08019E24
    return r0;
    r1 = 0x0871DA98U; // [0x08019FC0]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019E3A(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019E3A..0x08019E52 (24 bytes, Thumb)
u32 sub_08019E3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x08019FC0]
    r1 = (r1 << 2);
    r2 += 0x18U;
    r1 = *(u32*)(r2 + r1);
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x08019E4C
    return sub_08019E38(r0, r1, r2, r3);
}

// ROM Address: 0x08019E52..0x08019EAE (92 bytes, Thumb)
u32 sub_08019E52(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x15);
    r5 = r1;
    r0 = (r0 << 1);
    r0 = r0 + r4;
    r0 += 0x2EU;
    r0 = *(u8*)(r0);
    r1 = 0x0871DA98U; // [0x08019FC0]
    r0 = (r0 << 2);
    r1 += 0x24U;
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x08019E6C: BL 0x08013598
    r0 = *(u8*)(r4 + 0x15);
    r0 = (r0 << 1);
    r0 = r0 + r4;
    r0 += 0x2EU;
    r4 = *(u8*)(r0);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08019E7C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019E8A;
    r1 = 0x0804DF18U /* &VTable_0804DF18 */; // [0x08019FD4]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08019E8A:
    r4 = r0;
    r1 = 0x3U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08019E90
    r1 = r4;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08019E98
    return r0;
    r1 = 0x0871DA98U; // [0x08019FC0]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019EAE(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019EAE..0x08019EB8 (10 bytes, Thumb)
u32 sub_08019EAE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0x2DU;
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x08019EB2
    return sub_08019EAC(r0, r1, r2, r3);
}

// ROM Address: 0x08019EB8..0x08019EFE (70 bytes, Thumb)
u32 sub_08019EB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0xFFU;
    r1 += 0x2DU;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x08019EC0: BL 0x08013598
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08019EC6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019EDA;
    r1 = 0x0804D9B0U /* &VTable_0804D9B0 */; // [0x08019FD8]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_08019EDA:
    r5 = r0;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08019EE0
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08019EE8
    return r0;
    r1 = 0x0871DA98U; // [0x08019FC0]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019EFE(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019EFE..0x08019F14 (22 bytes, Thumb)
u32 sub_08019EFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x08019FC0]
    r2 += 0x3U;
    r1 = *(u8*)(r2 + r1);
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x08019F0E
    return sub_08019EFC(r0, r1, r2, r3);
}

// ROM Address: 0x08019F14..0x08019F5A (70 bytes, Thumb)
u32 sub_08019F14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r0 += 0x2EU;
    r5 = *(u8*)(r0);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08019F24: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019F36;
    r1 = 0x0804E2D8U /* &VTable_0804E2D8 */; // [0x08019FDC]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r5;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08019F36:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08019F3C
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08019F44
    return r0;
    r1 = 0x0871DA98U; // [0x08019FC0]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019F5A(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019F5A..0x08019F72 (24 bytes, Thumb)
u32 sub_08019F5A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 += 0x1CU;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r1 + r3));
    r3 = 0x00000CCDU; // [0x08019FE0]
    r2 = 0x0000FFFFU; // [0x08019FE4]
    r1 *= r3;
    r1 = r1 + r2;
    r1 = ((u32)((s32)r1 >> 16));
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x08019F6C
    return sub_08019F58(r0, r1, r2, r3);
}

// Evidence: calls BIOS Diff16bitUnFilter (SWI 0x18) at 08019FD4; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08019F72
// ROM Address: 0x08019F72..0x08019FFC (138 bytes, Thumb)
u32 Bios_Diff16Unfilter(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    r0 += 0x1CU;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x00000CCDU; // [0x08019FE0]
    r1 = 0x0000FFFFU; // [0x08019FE4]
    r0 *= r3;
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 16));
    r0 = r4;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x08019F8A: BL 0x08013598
    r0 = *(u8*)(r4 + 0x15);
    r0 = (r0 << 1);
    r0 = r0 + r4;
    r0 += 0x2EU;
    r4 = *(u8*)(r0);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08019F9A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019FAC;
    r1 = 0x0804DC14U /* &VTable_0804DC14 */; // [0x08019FE8]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08019FAC:
    r4 = r0;
    r1 = 0x3U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08019FB2
    r1 = r4;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08019FBA
    return r0;
    if (cmp_lhs >= cmp_rhs) return sub_08019EF4(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    r4 = (r0 >> 32);
    r2 += 0x84U;
    r0 = (r0 << 12);
    if (cmp_lhs == cmp_rhs) return sub_0801A088(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return sub_0801A45C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = Bios_Diff16bitUnFilter(r0, r1); // SWI 0x18
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08019F3C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return sub_0801A590(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r5 = (r1 >> 19);
    r0 = r0;
    r0 = r0;
    if (cmp_lhs > cmp_rhs) return sub_0801A014(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x0871DA98U; // [0x0801A310]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019FFC(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019FFC..0x0801A014 (24 bytes, Thumb)
u32 sub_08019FFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x0801A310]
    r1 = (r1 << 2);
    r2 += 0x30U;
    r1 = *(u32*)(r2 + r1);
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801A00E
    return sub_08019FFA(r0, r1, r2, r3);
}

// ROM Address: 0x0801A014..0x0801A074 (96 bytes, Thumb)
u32 sub_0801A014(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x15);
    r5 = r1;
    r0 = (r0 << 1);
    r0 = r0 + r4;
    r0 += 0x2EU;
    r0 = *(u8*)(r0);
    r1 = 0x0871DA98U; // [0x0801A310]
    r0 = (r0 << 2);
    r1 += 0x3CU;
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x0801A02E: BL 0x08013598
    r0 = *(u8*)(r4 + 0x15);
    r0 = (r0 << 1);
    r0 = r0 + r4;
    r0 += 0x2EU;
    r4 = *(u8*)(r0);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801A03E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A050;
    r1 = 0x0804DC38U; // [0x0801A314]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = 0x0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_0801A050:
    r4 = r0;
    r1 = 0x13U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801A056
    r1 = r4;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801A05E
    return r0;
    r1 = 0x0871DA98U; // [0x0801A310]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801A074(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801A074..0x0801A07E (10 bytes, Thumb)
u32 sub_0801A074(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0x5FU;
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801A078
    return sub_0801A072(r0, r1, r2, r3);
}

// ROM Address: 0x0801A07E..0x0801A0BA (60 bytes, Thumb)
u32 sub_0801A07E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801A084: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A096;
    r1 = 0x0804DC5CU /* &VTable_0804DC5C */; // [0x0801A318]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_0801A096:
    r5 = r0;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801A09C
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801A0A4
    return r0;
    r1 = 0x0871DA98U; // [0x0801A310]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801A0BA(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801A0BA..0x0801A0D0 (22 bytes, Thumb)
u32 sub_0801A0BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x0801A310]
    r2 += 0x6U;
    r1 = *(u8*)(r2 + r1);
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801A0CA
    return sub_0801A0B8(r0, r1, r2, r3);
}

// ROM Address: 0x0801A0D0..0x0801A118 (72 bytes, Thumb)
u32 sub_0801A0D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r0 += 0x2EU;
    r5 = *(u8*)(r0);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801A0E0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A0F4;
    r1 = 0x0804D9D4U /* &VTable_0804D9D4 */; // [0x0801A31C]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_0801A0F4:
    r5 = r0;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801A0FA
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801A102
    return r0;
    r1 = 0x0871DA98U; // [0x0801A310]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801A118(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801A118..0x0801A12E (22 bytes, Thumb)
u32 sub_0801A118(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x0801A310]
    r2 += 0x9U;
    r1 = *(u8*)(r2 + r1);
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801A128
    return sub_0801A116(r0, r1, r2, r3);
}

// ROM Address: 0x0801A12E..0x0801A19A (108 bytes, Thumb)
u32 sub_0801A12E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r0 += 0x2EU;
    r5 = *(u8*)(r0);
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801A13E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A154;
    r1 = 0x0804E088U /* &VTable_0804E088 */; // [0x0801A320]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x14) = (u32)r5;
    r1 = 0x0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u32*)(r0 + 0x18) = (u32)r1;
loc_0801A154:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801A15A
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801A162
    return r0;
    r1 = 0x03002C04U; // [0x0801A324]
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A174;
    r0 = 0x0U;
    return r0; // BX lr
loc_0801A174:
    r1 = 0x0871DA98U; // [0x0801A310]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801A182;
    r0 = 0x0U;
    return r0; // BX lr
loc_0801A182:
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x0801A328]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801A19A(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0801A19A..0x0801A19E (4 bytes, Thumb)
u32 sub_0801A19A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0801A19E..0x0801A1CE (48 bytes, Thumb)
u32 sub_0801A19E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x0801A328]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0xC);
    r1 = 0x0877CFACU /* EventPoolRecord */; // [0x0801A32C]
    r2 = 0x6C; // sp + 0x6C
    stack[27] = r0; // [sp + 0x6C]
    r0 = sp;
    r0 = sub_08004098(r0, r1, r2, r3); // 0x0801A1B8: BL 0x08004098
    return r0;
    r1 = 0x03002C04U; // [0x0801A324]
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801A1CE(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801A1CE..0x0801A1E4 (22 bytes, Thumb)
u32 sub_0801A1CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0871DA98U; // [0x0801A310]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801A1DC;
    r0 = 0x0U;
    return sub_0801A1CC(r0, r1, r2, r3);
loc_0801A1DC:
    r1 = 0xA0U;
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801A1DE
    return sub_0801A1CC(r0, r1, r2, r3);
}

// ROM Address: 0x0801A1E4..0x0801A226 (66 bytes, Thumb)
u32 sub_0801A1E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0xA0U;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x0801A1EA: BL 0x08013598
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801A1F0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A202;
    r1 = 0x0804DC80U /* &VTable_0804DC80 */; // [0x0801A330]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_0801A202:
    r5 = r0;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801A208
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801A210
    return r0;
    r1 = 0x0871DA98U; // [0x0801A310]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801A226(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801A226..0x0801A23A (20 bytes, Thumb)
u32 sub_0801A226(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x03002C04U; // [0x0801A324]
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A232;
    r0 = 0x0U;
    return sub_0801A224(r0, r1, r2, r3);
loc_0801A232:
    r1 = 0x28U;
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801A234
    return sub_0801A224(r0, r1, r2, r3);
}

// ROM Address: 0x0801A2AA..0x0801A2FE (84 bytes, Thumb)
u32 sub_0801A2AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x24; // sp + 0x24
    r4 = *(u32*)(r0);
    r0 = 0xC; // sp + 0xC
    r1 = r5;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0801A2B2
    r0 = stack[3]; // [sp + 0xC]
    r2 = stack[5]; // [sp + 0x14]
    r3 = stack[6]; // [sp + 0x18]
    r2 = r0 + r2;
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r2; // [sp + 0x4]
    r0 = r0 + r3;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    r2 = ((u32)((s32)r2 >> 1));
    stack[1] = r2; // [sp + 0x4]
    stack[7] = r2; // [sp + 0x1C]
    r3 = r4;
    r6 = 0x2C; // sp + 0x2C
    r2 = r6;
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x0U;
    r1 = 0x1C; // sp + 0x1C
    r0 = sub_080220D8(r0, r1, r2, r3); // 0x0801A2DC: BL 0x080220D8
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801A2E0
    r0 = stack[11]; // [sp + 0x2C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801A2FE(r0, r1, r2, r3);
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_0801BAB0(r0, r1, r2, r3); // 0x0801A2EE: BL 0x0801BAB0
    r1 = r0;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801A2F6
    return r0;
}

// ROM Address: 0x0801A2FE..0x0801A30E (16 bytes, Thumb)
u32 sub_0801A2FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801A308: BL __call_via_r3
    return sub_0801A2FA(r0, r1, r2, r3);
}

// ROM Address: 0x0801A322..0x0801A344 (34 bytes, Thumb)
u32 sub_0801A322(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r2 = *(u32*)r7; r7 += 4;
    r3 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r7 = (r6 >> 1);
    if (cmp_lhs > cmp_rhs) return sub_0801A234(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x0871DA98U; // [0x0801A59C]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801A344(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801A344..0x0801A354 (16 bytes, Thumb)
u32 sub_0801A344(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x0801A59C]
    r2 += 0xCU;
    r1 = *(u8*)(r2 + r1);
    return r0;
}

// ROM Address: 0x0801A35A..0x0801A3A0 (70 bytes, Thumb)
u32 sub_0801A35A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r0 += 0x2EU;
    r5 = *(u8*)(r0);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801A36A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A37C;
    r1 = 0x0804D9F8U /* &VTable_0804D9F8 */; // [0x0801A5A0]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r5;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_0801A37C:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801A382
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801A38A
    return r0;
    r1 = 0x0871DA98U; // [0x0801A59C]
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801A3A0(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801A3A0..0x0801A3B0 (16 bytes, Thumb)
u32 sub_0801A3A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x0801A59C]
    r2 += 0xFU;
    r1 = *(u8*)(r2 + r1);
    return r0;
}

// ROM Address: 0x0801A3B6..0x0801A3EC (54 bytes, Thumb)
u32 sub_0801A3B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r0 += 0x2EU;
    r5 = *(u8*)(r0);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801A3C6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A3D8;
    r1 = 0x0804DA1CU /* &VTable_0804DA1C */; // [0x0801A5A4]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r5;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_0801A3D8:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801A3DE
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801A3E6
    return r0;
}

// ROM Address: 0x0801A3EC..0x0801A3F2 (6 bytes, Thumb)
u32 sub_0801A3EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0871DA98U; // [0x0801A59C]
    r1 = *(u32*)(r1 + 0x14);
    return r0;
}

// ROM Address: 0x0801A3F2..0x0801A414 (34 bytes, Thumb)
u32 sub_0801A3F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801A3FC;
    r0 = 0x0U;
loc_0801A3FA:
    return r0;
loc_0801A3FC:
    r1 = *(u8*)(r0 + 0x15);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    r2 = 0x0871DA98U; // [0x0801A59C]
    r1 = (r1 << 2);
    r2 += 0x48U;
    r1 = *(u32*)(r2 + r1);
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801A40E
    goto loc_0801A3FA;
    return r0;
}

// ROM Address: 0x0801A576..0x0801A578 (2 bytes, Thumb)
u32 sub_0801A576(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x0801A578..0x0801A590 (24 bytes, Thumb)
u32 sub_0801A578(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0871DA98U; // [0x0801A59C]
    r3 = *(u32*)(r3 + 0x14);
    r3 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801A586;
    r0 = 0x0U;
    return sub_0801A576(r0, r1, r2, r3);
loc_0801A586:
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) return sub_0801A590(r0, r1, r2, r3);
    r1 = *(u8*)(r2 + 0x16);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) return sub_0801A594(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0801A590..0x0801A594 (4 bytes, Thumb)
u32 sub_0801A590(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0801A576(r0, r1, r2, r3);
}

// ROM Address: 0x0801A664..0x0801A6CC (104 bytes, Thumb)
u32 sub_0801A664(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x0U;
    r7 = r0;
    r0 = 0x38U;
    *(u16*)(r4 + 0x12) = (u16)r1;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DD4CU; // [0x0801A8E0]
    r6 = 0x4; // sp + 0x4
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r5 = r0 + r1;
    r1 = r4;
    r0 = r6;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801A688: BL 0x0804F944
    r1 = r6;
    r6 = 0xC; // sp + 0xC
    r2 = r5;
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801A694
    r2 = 0x0876BA2CU; // [0x0801A8E4]
    r3 = r4;
    r1 = r6;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r5 + 0x8);
    r0 = 0x0U;
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x0801A6A4
    r1 = r0;
    *(u32*)(r7 + 0x8) = (u32)r0;
    r0 = 0x0871DD4CU; // [0x0801A8E0]
    r0 -= 0x14U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801A6B2: BL 0x0801191A
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x0801A6C0
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801A6C6: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0801A6CC..0x0801A770 (164 bytes, Thumb)
u32 sub_0801A6CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0801A76C;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0801A724;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801A6F0: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801A770(r0, r1, r2, r3);
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801A702: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DD4CU; // [0x0801A8E0]
    r1 += 0x30U;
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x8; // sp + 0x8
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801A716
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r5 + 0x8);
    r2 = r6;
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0801A720
loc_0801A724:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801A72E: BL 0x08046AA2
    r6 = r0;
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r6);
    r3 = 0x00000496U; // [0x0801A8E8]
    r0 = *(u32*)(r5 + 0x4);
    r1 *= r3;
    r1 = (r1 >> 4);
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801A748: BL 0x08013504
    r0 = *(u32*)(r5 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013492(r0, r1, r2, r3); // 0x0801A756
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801A780(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801A768: BL __call_via_r3
loc_0801A76C:
    return r0;
}

// ROM Address: 0x0801A770..0x0801A7AE (62 bytes, Thumb)
u32 sub_0801A770(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801A77A: BL __call_via_r3
    return sub_0801A76C(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0x12);
    r2 = 0x84U;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801A792: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) return sub_0801A76C(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801A7A8: BL __call_via_r3
    return sub_0801A76C(r0, r1, r2, r3);
}

// ROM Address: 0x0801A7C0..0x0801A80E (78 bytes, Thumb)
u32 sub_0801A7C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = r1;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0801A7C8
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801A7D2: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DD4CU; // [0x0801A8E0]
    r1 += 0x50U;
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x8; // sp + 0x8
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801A7E6
    r0 = *(u32*)(r5 + 0x8);
    r1 = 0x0876ACC0U; // [0x0801A8EC]
    r0 = (r0 << 4);
    r3 = r0 + r1;
    r2 = r6;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08037480(r0, r1, r2, r3); // 0x0801A7F8: BL 0x08037480
    r1 = r0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x0871DD4CU; // [0x0801A8E0]
    r0 -= 0x14U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801A806: BL 0x0801191A
    return r0;
}

// ROM Address: 0x0801A80E..0x0801A83E (48 bytes, Thumb)
u32 sub_0801A80E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r0 = r1;
    r1 = *(u32*)(r2 + 0x4);
    r2 = *(u16*)(r0 + 0x12);
    r2 += 0x1U;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r0 + 0x12) = (u16)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801A836;
    cmp_lhs = (s32)r2; cmp_rhs = 16;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0801A834;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801A830: BL __call_via_r3
loc_0801A834:
    return r0;
loc_0801A836:
    r1 = (r2 << 28);
    r1 = (r1 >> 31);
    *(u8*)(r0 + 0x11) = (u8)r1;
    goto loc_0801A834;
    return r0;
}

// ROM Address: 0x0801A83E..0x0801A872 (52 bytes, Thumb)
u32 sub_0801A83E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r6 = r1;
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A870;
    r1 = *(u32*)(r5);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801A856: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) return sub_0801A872(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4 + 0xC);
    r0 = sub_080378A0(r0, r1, r2, r3); // 0x0801A866: BL 0x080378A0
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u16*)(r6 + 0x12) = (u16)r0;
loc_0801A870:
    return r0;
}

// ROM Address: 0x0801A872..0x0801A8B0 (62 bytes, Thumb)
u32 sub_0801A872(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x7DU;
    r0 = *(u32*)(r4 + 0xC);
    r1 = (r1 << 3);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0801A870(r0, r1, r2, r3);
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801A886: BL 0x08046AA2
    r2 = *(u32*)(r4 + 0x8);
    r3 = 0x0871DD4CU; // [0x0801A8E0]
    r2 = (r2 << 2);
    r3 += 0x70U;
    r2 = *(u32*)(r3 + r2);
    r1 = *(u32*)(r4 + 0x10);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x10) = (u32)r1;
    r2 = *(u32*)(r4 + 0xC);
    r1 = ((u32)((s32)r1 >> 8));
    r2 = r2 + r1;
    *(u32*)(r4 + 0xC) = (u32)r2;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801A8A2: BL 0x08013504
    r0 = *(u32*)(r4 + 0x10);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r4 + 0x10) = (u32)r0;
    return r0;
}

// ROM Address: 0x0801A8B0..0x0801AA3E (398 bytes, Thumb)
u32 sub_0801A8B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A8C6;
    r1 = r0;
    r0 = 0x0871DD4CU; // [0x0801A8E0]
    r0 -= 0x14U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801A8C2
loc_0801A8C6:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801A8C8: BL 0x0803D63C
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801A8DA: BL __call_via_r3
    return r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801A97C;
    r1 = (r6 >> 1);
    r6 = (r6 >> 1);
    r6 = (r2 << 18);
    r0 = r0;
    r4 = 0x300; // sp + 0x300
    r6 = (r6 >> 1);
    r4 = r1;
    r1 = 0x0U;
    r7 = r0;
    r0 = 0x38U;
    *(u16*)(r4 + 0x12) = (u16)r1;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DDC8U; // [0x0801AB70]
    r6 = 0x4; // sp + 0x4
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r5 = r0 + r1;
    r1 = r4;
    r0 = r6;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801A914: BL 0x0804F944
    r1 = r6;
    r6 = 0xC; // sp + 0xC
    r2 = r5;
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801A920
    r2 = 0x087710FCU; // [0x0801AB74]
    r3 = r4;
    r1 = r6;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r5 + 0x8);
    r0 = 0x0U;
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x0801A930
    r1 = r0;
    *(u32*)(r7 + 0x8) = (u32)r0;
    r0 = 0x0871DDC8U; // [0x0801AB70]
    r0 -= 0x90U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801A93E: BL 0x0801191A
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801A956;
    r1 = r0;
    r0 = 0x1U;
    *(u32*)(r1 + 0x28) = (u32)r0;
loc_0801A956:
    r0 = *(u32*)(r4 + 0x8);
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x0801A958
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801A95E: BL 0x0803D63C
    return r0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0801AA3A;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
loc_0801A97C:
    if (cmp_lhs != cmp_rhs) goto loc_0801A9F2;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801A988: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801AA3E(r0, r1, r2, r3);
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801A99A: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DDC8U; // [0x0801AB70]
    r1 += 0x30U;
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x8; // sp + 0x8
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801A9AE
    r2 = r4;
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_08038886(r0, r1, r2, r3); // 0x0801A9B8: BL 0x08038886
    r1 = r0;
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = 0x0871DDC8U; // [0x0801AB70]
    r0 -= 0x90U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801A9C6: BL 0x0801191A
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801A9D0: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DDC8U; // [0x0801AB70]
    r1 += 0x50U;
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x8; // sp + 0x8
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801A9E4
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r5 + 0x8);
    r2 = r6;
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0801A9EE
loc_0801A9F2:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801A9FC: BL 0x08046AA2
    r6 = r0;
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r6);
    r3 = 0x00000496U; // [0x0801AB78]
    r0 = *(u32*)(r5 + 0x4);
    r1 *= r3;
    r1 = (r1 >> 4);
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801AA16: BL 0x08013504
    r0 = *(u32*)(r5 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013492(r0, r1, r2, r3); // 0x0801AA24
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801AA4E(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AA36: BL __call_via_r3
loc_0801AA3A:
    return r0;
}

// ROM Address: 0x0801AA3E..0x0801AA7E (64 bytes, Thumb)
u32 sub_0801AA3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AA48: BL __call_via_r3
    return sub_0801AA3A(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0x12);
    r2 = 0x84U;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801AA62: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) return sub_0801AA3A(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AA78: BL __call_via_r3
    return sub_0801AA3A(r0, r1, r2, r3);
}

// ROM Address: 0x0801AA90..0x0801AAEA (90 bytes, Thumb)
u32 sub_0801AA90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = r1;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0801AA98
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DDC8U; // [0x0801AB70]
    r7 = 0x4; // sp + 0x4
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 += 0x70U;
    r6 = r0 + r1;
    r1 = r4;
    r0 = r7;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801AAB0: BL 0x0804F944
    r1 = r7;
    r7 = 0xC; // sp + 0xC
    r2 = r6;
    r0 = r7;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801AABC
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0871DDC8U; // [0x0801AB70]
    stack[0] = r2; // [sp + 0x0]
    r0 = *(u32*)(r5 + 0x8);
    r1 += 0xA0U;
    r0 = (r0 << 2);
    r3 = *(u32*)(r1 + r0);
    r2 = r4;
    r1 = r7;
    r0 = 0x0U;
    r0 = sub_08029384(r0, r1, r2, r3); // 0x0801AAD4
    r1 = r0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x0871DDC8U; // [0x0801AB70]
    r0 -= 0x90U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801AAE2: BL 0x0801191A
    return r0;
}

// ROM Address: 0x0801AAEA..0x0801AAEC (2 bytes, Thumb)
u32 sub_0801AAEA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0801AAEC..0x0801AB2A (62 bytes, Thumb)
u32 sub_0801AAEC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_0801AB2A(r0, r1, r2, r3);
    r1 = r4;
    r0 = sp;
    r6 = *(u32*)(r5 + 0x4);
    r0 = sub_0800FF44(r0, r1, r2, r3); // 0x0801AB08: BL 0x0800FF44
    r1 = stack[0]; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    r1 = (r1 << 8);
    r2 = (r2 << 8);
    r6 += 0x20U;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080293E4(r0, r1, r2, r3); // 0x0801AB1A: BL 0x080293E4
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x0801AB2A..0x0801AB3E (20 bytes, Thumb)
u32 sub_0801AB2A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if (cmp_lhs != cmp_rhs) return sub_0801AB26(r0, r1, r2, r3);
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AB38: BL __call_via_r3
    return sub_0801AB26(r0, r1, r2, r3);
}

// ROM Address: 0x0801AB3E..0x0801AB6E (48 bytes, Thumb)
u32 sub_0801AB3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801AB54;
    r1 = r0;
    r0 = 0x0871DDC8U; // [0x0801AB70]
    r0 -= 0x90U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801AB50
loc_0801AB54:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801AB56: BL 0x0803D63C
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AB68: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0801AB6E..0x0801AB96 (40 bytes, Thumb)
u32 sub_0801AB6E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    if (cmp_lhs <= cmp_rhs) return sub_0801AB04(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    r4 = ((u32)((s32)r7 >> 3));
    r7 = (r6 >> 1);
    r6 = (r2 << 18);
    r0 = r0;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0801AB7E
    r0 = 0x0871DD38U; // [0x0801AE04]
    r4 = 0x000005C4U; // [0x0801AE0C]
    r0 = *(u32*)(r0);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x083193C8U; // [0x0801AE08]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801AB90
    return r0;
}

// ROM Address: 0x0801AB96..0x0801ABE4 (78 bytes, Thumb)
u32 sub_0801AB96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801ABB6;
    r0 = 0x0871DD38U; // [0x0801AE04]
    r1 = 0x083193C8U; // [0x0801AE08]
    r2 = 0x000005C4U; // [0x0801AE0C]
    r0 = *(u32*)(r0);
    r1 += 0x60U;
    r0 = r0 + r2;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801ABAC
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08038DEC(r0, r1, r2, r3); // 0x0801ABB2: BL 0x08038DEC
loc_0801ABB6:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801ABB8: BL 0x0803D63C
    return r0;
    r2 = *(u32*)(r0 + 0x8);
    r5 = r0;
    r4 = r1;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r0 = *(u16*)(r1 + 0x12);
    if (cmp_lhs == cmp_rhs) return sub_0801ABF2(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0801ABE4(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801ABDC: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0801ABE4..0x0801AD96 (434 bytes, Thumb)
u32 sub_0801ABE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x2U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0801ABE0(r0, r1, r2, r3);
    r3 = 0x083193C8U; // [0x0801AE08]
    r1 = *(u32*)(r5 + 0x4);
    r3 += 0x60U;
    stack[8] = r3; // [sp + 0x20]
    r3 = 0x0871DD38U; // [0x0801AE04]
    r2 = 0x000005C4U; // [0x0801AE0C]
    r3 = *(u32*)(r3);
    r6 = r3 + r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801ACEC;
    cmp_lhs = (s32)r0; cmp_rhs = 90;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801AC80;
    r0 = 0x60U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u8*)(r4 + 0x10);
    r2 = r4;
    r2 += 0xFFU;
    r1 = (r0 << 3);
    r0 = 0x0807268CU; // [0x0801AE10]
    r2 += 0xA1U;
    r1 = *(u32*)(r0 + r1);
    r7 = r2;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r2 = *(u32*)(r2);
    r1 = (r1 << 5);
    r1 = r2 + r1;
    stack[5] = r1; // [sp + 0x14]
    r2 = *(u8*)(r4 + 0x10);
    r1 = 0xFFU;
    r1 += 0xA5U;
    r2 = (r2 << 3);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + r4);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 5);
    r0 = r1 + r0;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[6]; // [sp + 0x18]
    r0 = ((u32)((s32)r0 >> 8));
    r2 = ((u32)((s32)r1 >> 8));
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x0871DD38U; // [0x0801AE04]
    stack[2] = r2; // [sp + 0x8]
    stack[4] = r2; // [sp + 0x10]
    r0 = *(u32*)(r0 + 0xC);
    r2 = r7 - 4;
    r1 = 0xC; // sp + 0xC
    r0 = sub_080097C2(r0, r1, r2, r3); // 0x0801AC5A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801AC74;
    r0 = stack[5]; // [sp + 0x14]
    *(u32*)(r7) = (u32)r0;
    r1 = stack[6]; // [sp + 0x18]
    *(u32*)(r7 + 0x4) = (u32)r1;
    r0 = *(u32*)(r5 + 0x4);
    r1 = 0x1C; // sp + 0x1C
    r0 = sub_08038E8A(r0, r1, r2, r3); // 0x0801AC6E
    goto loc_0801AC80;
loc_0801AC74:
    r0 = 0x0U;
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u32*)(r5 + 0x4);
    r1 = 0x10; // sp + 0x10
    r0 = sub_08038E8A(r0, r1, r2, r3); // 0x0801AC7C
loc_0801AC80:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801AC8A: BL 0x08046AA2
    r7 = r0;
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r7);
    r0 = *(u32*)(r5 + 0xC);
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r1 = (r1 << 8);
    r1 = (r1 >> 4);
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = r7;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801ACA6: BL 0x08013504
    r0 = *(u32*)(r5 + 0xC);
    r2 = 0x84U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r5 + 0xC) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801ACBC: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801ACDC;
    r0 = *(u16*)(r4 + 0x12);
    r1 = 0xFFU;
    r1 += 0x2DU;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801ACDC;
    r0 = r7;
    r0 = sub_08013492(r0, r1, r2, r3); // 0x0801ACD4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801AD0A;
loc_0801ACDC:
    r0 = 0x1U;
    *(u32*)(r5 + 0x8) = (u32)r0;
    r7 = 0x0U;
    *(u16*)(r4 + 0x12) = (u16)r7;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08038E42(r0, r1, r2, r3); // 0x0801ACE6
    goto loc_0801ACEE;
loc_0801ACEC:
    goto loc_0801AD1A;
loc_0801ACEE:
    *(u32*)(r5 + 0x4) = (u32)r7;
    r1 = stack[8]; // [sp + 0x20]
    r5 = 0x083192A8U; // [0x0801AE14]
    r0 = r6;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801ACF6
    r1 = r5;
    r1 += 0x114U;
    r3 = r7;
    r2 = 0x40U;
    r0 = r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801AD06
loc_0801AD0A:
    r0 = *(u16*)(r4 + 0x12);
    r0 += 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x2U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0801ABE0(r0, r1, r2, r3);
loc_0801AD1A:
    r0 += 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801AD28: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801AD44;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AD3E: BL __call_via_r3
    return sub_0801ABE0(r0, r1, r2, r3);
loc_0801AD44:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0801AD8E;
    r1 = r4;
    r7 = 0x10; // sp + 0x10
    r0 = r7;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801AD50: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DE74U; // [0x0801AE18]
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r7;
    r7 = 0x18; // sp + 0x18
    r0 = r7;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801AD62
    r2 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    r1 = r4;
    r3 = 0x5U;
    r0 = 0x0U;
    r0 = sub_08038AD8(r0, r1, r2, r3); // 0x0801AD72: BL 0x08038AD8
    r1 = r0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x0871DD38U; // [0x0801AE04]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801AD7E: BL 0x0801191A
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r6;
    r1 = stack[8]; // [sp + 0x20]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801AD8A
loc_0801AD8E:
    r0 = *(u16*)(r4 + 0x12);
    r0 = (r0 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0801ABE0(r0, r1, r2, r3);
}

// ROM Address: 0x0801ADA8..0x0801AEDC (308 bytes, Thumb)
u32 sub_0801ADA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x0U;
    r6 = r0;
    r0 = 0x38U;
    *(u16*)(r4 + 0x12) = (u16)r1;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DE74U; // [0x0801AE18]
    r7 = 0x4; // sp + 0x4
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 += 0x20U;
    r5 = r0 + r1;
    r1 = r4;
    r0 = r7;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801ADCE: BL 0x0804F944
    r1 = r7;
    r7 = 0xC; // sp + 0xC
    r2 = r5;
    r0 = r7;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801ADDA
    r0 = *(u32*)(r6 + 0xC);
    r1 = 0x08725018U; // [0x0801AE1C]
    r0 = (r0 << 4);
    r2 = r0 + r1;
    r3 = r4;
    r1 = r7;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r5 + 0x8);
    r0 = 0x0U;
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x0801ADF0
    r1 = r0;
    *(u32*)(r6 + 0x8) = (u32)r0;
    r0 = 0x0871DD38U; // [0x0801AE04]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801ADFC: BL 0x0801191A
    return r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801AE78;
    r1 = (r6 >> 1);
    stack[200] = r3; // [sp + 0x320]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r1 = (r6 >> 1);
    *(u32*)(r3 + r0) = r0;
    r2 = (r6 >> 1);
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x0801AE26
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801AE2C: BL 0x0803D63C
    return r0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0801AED8;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0801AE88;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801AE56: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801AEDC(r0, r1, r2, r3);
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801AE68: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DEC4U; // [0x0801B230]
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x8; // sp + 0x8
loc_0801AE78:
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801AE7A
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r5 + 0x8);
    r2 = r6;
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0801AE84
loc_0801AE88:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801AE92: BL 0x08046AA2
    r6 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = 0x0871DEC4U; // [0x0801B230]
    r0 = (r0 << 2);
    r1 += 0x20U;
    r0 = *(u32*)(r1 + r0);
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r6);
    r0 *= r1;
    r1 = *(u32*)(r5 + 0x4);
    r0 = ((u32)((s32)r0 >> 4));
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801AEB4: BL 0x08013504
    r0 = *(u32*)(r5 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013492(r0, r1, r2, r3); // 0x0801AEC2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801AEEC(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AED4: BL __call_via_r3
loc_0801AED8:
    return r0;
}

// ROM Address: 0x0801AEDC..0x0801AF1C (64 bytes, Thumb)
u32 sub_0801AEDC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AEE6: BL __call_via_r3
    return sub_0801AED8(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0x12);
    r2 = 0x84U;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801AF00: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) return sub_0801AED8(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AF16: BL __call_via_r3
    return sub_0801AED8(r0, r1, r2, r3);
}

// ROM Address: 0x0801AF2E..0x0801AFB4 (134 bytes, Thumb)
u32 sub_0801AF2E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0801AF32
    r0 = 0x0U;
    *(u8*)(r4 + 0x4) = (u8)r0;
    return r0;
    r7 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 40;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0801AFC4(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801AF5C: BL 0x08046AA2
    r5 = r0;
    r0 += 0x1CU;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x00000CCDU; // [0x0801B234]
    r1 = 0x0000FFFFU; // [0x0801B238]
    r0 *= r3;
    r0 = r0 + r1;
    r6 = ((u32)((s32)r0 >> 16));
    r0 = *(u8*)(r7 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801AFB4(r0, r1, r2, r3);
    r1 = r6;
    r0 = r5;
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801AF7C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801AFB4(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u8*)(r7 + 0x4) = (u8)r0;
    r1 = r6;
    r0 = r5;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x0801AF8C: BL 0x08013598
    r0 = *(u8*)(r4 + 0x11);
    r1 = 0x3U;
    r5 = 0x4; // sp + 0x4
    r0 = r1 - r0;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = 0x10U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r1 = r4;
    r0 = r5;
    r0 = sub_0800FF44(r0, r1, r2, r3); // 0x0801AFA2: BL 0x0800FF44
    r2 = 0x1U;
    r1 = r4;
    r0 = r5;
    r0 = sub_08019858(r0, r1, r2, r3); // 0x0801AFAC
    return r0;
}

// ROM Address: 0x0801AFB4..0x0801AFE2 (46 bytes, Thumb)
u32 sub_0801AFB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801AFBE: BL __call_via_r3
    return sub_0801AFB0(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_0801AFB0(r0, r1, r2, r3);
    r0 = 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = r4;
    r5 = 0x4; // sp + 0x4
    r0 = r5;
    r0 = sub_0800FF44(r0, r1, r2, r3); // 0x0801AFD2: BL 0x0800FF44
    r2 = 0x1U;
    r1 = r4;
    r0 = r5;
    r0 = sub_08019858(r0, r1, r2, r3); // 0x0801AFDC
    return sub_0801AFB0(r0, r1, r2, r3);
}

// ROM Address: 0x0801AFE2..0x0801B002 (32 bytes, Thumb)
u32 sub_0801AFE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801AFF0: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801B000;
    r0 = 0x1U;
    *(u8*)(r4 + 0x4) = (u8)r0;
loc_0801B000:
    return r0;
}

// ROM Address: 0x0801B002..0x0801B00A (8 bytes, Thumb)
u32 sub_0801B002(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801B004: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0801B00A..0x0801B076 (108 bytes, Thumb)
u32 sub_0801B00A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = r1;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0801B012
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B01C: BL 0x0804F944
    r2 = r6;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08037C1C(r0, r1, r2, r3); // 0x0801B026: BL 0x08037C1C
    r4 = 0x0871DD38U; // [0x0801B23C]
    r1 = r0;
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801B032: BL 0x0801191A
    r0 = *(u32*)(r4);
    r4 = 0x000005C4U; // [0x0801B244]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x083192CCU; // [0x0801B240]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801B042
    return r0;
    r1 = *(u32*)(r0 + 0xC);
    r4 = r0;
    r0 = 0x0871DD38U; // [0x0801B23C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801B054
    r2 = 0x0871DD38U; // [0x0801B23C]
    r1 = *(u8*)(r4 + 0x4);
    r2 = *(u32*)(r2);
    r0 = 0x000005C4U; // [0x0801B244]
    r0 = r2 + r0;
    r2 = 0x083192CCU; // [0x0801B240]
    r2 -= 0x24U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801B076(r0, r1, r2, r3);
    r1 = r2;
    r1 += 0x180U;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801B070
    return sub_0801B07E(r0, r1, r2, r3);
}

// ROM Address: 0x0801B076..0x0801B086 (16 bytes, Thumb)
u32 sub_0801B076(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r2;
    r1 += 0x24U;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801B07A
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801B080: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0801B086..0x0801B088 (2 bytes, Thumb)
u32 sub_0801B086(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0801B088..0x0801B0B6 (46 bytes, Thumb)
u32 sub_0801B088(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u8*)(r0 + 0x4);
    r7 = r1;
    r6 = 0x1U;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801B180(r0, r1, r2, r3);
    r0 = *(u32*)(r5 + 0x8);
    r0 += 0x1U;
    *(u32*)(r5 + 0x8) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 180;
    if (cmp_lhs < cmp_rhs) return sub_0801B0B6(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801B0AE: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0801B0B6..0x0801B180 (202 bytes, Thumb)
u32 sub_0801B0B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B0C0: BL 0x08046AA2
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r0 + 0x2);
    r1 = (r0 << 24);
    r1 = (r1 >> 28);
    if (cmp_lhs == cmp_rhs) return sub_0801B198(r0, r1, r2, r3);
    r2 = 0x238U; // (71 << 3)
    r6 = r7 + r2;
    r7 += 0xFFU;
    r1 = (r0 << 26);
    r1 = (r1 >> 31);
    r7 += 0xA1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801B102;
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r6);
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801B0EC: BL 0x08046E58
    r1 = stack[0]; // [sp + 0x0]
    r2 = 0x2U;
    r0 = r1 - r0;
    stack[0] = r0; // [sp + 0x0]
    r0 = r4;
    r1 = sp;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x0801B0FC
    goto loc_0801B128;
loc_0801B102:
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801B128;
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r6);
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801B114: BL 0x08046E58
    r1 = stack[0]; // [sp + 0x0]
    r2 = 0x2U;
    r0 = r1 + r0;
    stack[0] = r0; // [sp + 0x0]
    r0 = r4;
    r1 = sp;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x0801B124
loc_0801B128:
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u16*)(r0 + 0x2);
    r1 = (r0 << 25);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801B156;
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r6);
    r0 = 0x2U;
    r7 = sp;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801B140: BL 0x08046E58
    r1 = stack[1]; // [sp + 0x4]
    r2 = 0x1U;
    r0 = r1 - r0;
    stack[1] = r0; // [sp + 0x4]
    r1 = r7;
    r0 = r4;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x0801B150
    return sub_0801B182(r0, r1, r2, r3);
loc_0801B156:
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801B182(r0, r1, r2, r3);
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r6);
    r0 = 0x2U;
    r7 = sp;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801B16A: BL 0x08046E58
    r1 = stack[1]; // [sp + 0x4]
    r2 = 0x1U;
    r0 = r1 + r0;
    stack[1] = r0; // [sp + 0x4]
    r1 = r7;
    r0 = r4;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x0801B17A
    return sub_0801B182(r0, r1, r2, r3);
}

// ROM Address: 0x0801B180..0x0801B22E (174 bytes, Thumb)
u32 sub_0801B180(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    goto loc_0801B1B4;
    r1 = r4;
    r0 = sp;
    r6 = *(u32*)(r5 + 0xC);
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B188: BL 0x0804F944
    r1 = stack[0]; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    r1 = (r1 << 8);
    r2 = (r2 << 8);
    r6 += 0x20U;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    r0 = *(u32*)(r5 + 0x8);
    r1 = r0 + 1;
    *(u32*)(r5 + 0x8) = (u32)r1;
    r0 = sub_080530A4(r0, r1, r2, r3); // 0x0801B19E: BL 0x080530A4
    r0 = (r1 << 29);
    r0 = (r0 >> 29);
    r0 += 0x2U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = r4;
    r0 = sub_08037C72(r0, r1, r2, r3); // 0x0801B1AE
    return sub_0801B0B2(r0, r1, r2, r3);
loc_0801B1B4:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B1BE: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801B20C;
    r0 = *(u32*)(r5 + 0xC);
    r0 = *(u32*)(r0 + 0x40);
    cmp_lhs = (s32)r0; cmp_rhs = 80;
    if (cmp_lhs < cmp_rhs) goto loc_0801B1FC;
    *(u8*)(r5 + 0x4) = (u8)r6;
    r5 = 0x083192CCU; // [0x0801B240]
    r0 = 0x0871DD38U; // [0x0801B23C]
    r2 = 0x000005C4U; // [0x0801B244]
    r5 -= 0x24U;
    r0 = *(u32*)(r0);
    r1 = r5;
    r1 += 0x24U;
    r0 = r0 + r2;
    r4 = r0;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801B1E6
    r1 = r5;
    r1 += 0x180U;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801B1F6
    return sub_0801B0B2(r0, r1, r2, r3);
loc_0801B1FC:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801B206: BL __call_via_r3
    return sub_0801B0B2(r0, r1, r2, r3);
loc_0801B20C:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B216: BL 0x08046AA2
    r1 = 0x4U;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x0801B21C: BL 0x08013598
    r0 = *(u16*)(r4 + 0x12);
    r0 += 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = (r0 << 29);
    r0 = (r0 >> 31);
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0801B0B2(r0, r1, r2, r3);
}

// ROM Address: 0x0801B27A..0x0801B2B4 (58 bytes, Thumb)
u32 sub_0801B27A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801B28E;
    r1 = r0;
    r0 = 0x0871DD38U; // [0x0801B4D0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801B28A
loc_0801B28E:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801B290: BL 0x0803D63C
    return r0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0801B2B4(r0, r1, r2, r3);
    r0 = (r0 >> 2);
    *(u8*)(r4 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x0801B2B4..0x0801B470 (444 bytes, Thumb)
u32 sub_0801B2B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 60;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801B2CE;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B2C2: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801B2DE;
loc_0801B2CE:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801B2D8: BL __call_via_r3
    return sub_0801B2B0(r0, r1, r2, r3);
loc_0801B2DE:
    r0 = *(u16*)(r4 + 0x12);
    r0 = (r0 << 29);
    r0 = (r0 >> 31);
    r0 += 0x2U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0801B33C;
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) goto loc_0801B33C;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x08762270U; // [0x0801B4DC]
    r6 = 0x4C; // sp + 0x4C
    r3 = (r0 << 3);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r5 + 0x8) = (u32)r0;
    r1 = r4;
    r0 = r6;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B308: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DF70U; // [0x0801B4E0]
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x54; // sp + 0x54
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B31A
    r2 = 0x37U;
    stack[0] = r2; // [sp + 0x0]
    r3 = 0x200U; // (1 << 9)
    r2 = r6;
    r0 = 0x0U;
    r1 = *(u32*)(r5 + 0x8);
    r0 = sub_080507A0(r0, r1, r2, r3); // 0x0801B32C
    r1 = r0;
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = 0x0871DD38U; // [0x0801B4D0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801B338: BL 0x0801191A
loc_0801B33C:
    r0 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801B35E;
    r2 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r2; cmp_rhs = 52;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0801B35E;
    r1 = (r2 << 30);
    if (cmp_lhs != cmp_rhs) goto loc_0801B35E;
    r2 -= 0x34U;
    r2 = ((u32)((s32)r2 >> 2));
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r1 = *(u32*)(r5 + 0x8);
    r2 = (r2 << 2);
    r1 = r1 + r2;
    r0 = sub_08021740(r0, r1, r2, r3); // 0x0801B35A: BL 0x08021740
loc_0801B35E:
    stack[18] = r4; // [sp + 0x48]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r2 = 0x0871DF70U; // [0x0801B4E0]
    *(u8*)(r3 + 0x1C) = (u8)r0;
    r0 = 0x086B80D0U; // [0x0801B4E4]
    r2 += 0x20U;
    stack[17] = r0; // [sp + 0x44]
    r0 = *(u32*)(r5 + 0x4);
    r1 = 0x28; // sp + 0x28
    r0 = (r0 << 2);
    r0 = *(u32*)(r2 + r0);
    stack[22] = r4; // [sp + 0x58]
    stack[16] = r0; // [sp + 0x40]
    r0 = 0x1U;
    *(u8*)(r3 + 0x8) = (u8)r0;
    r0 = *(u32*)(r5 + 0xC);
    r7 = r1 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u8*)(r4 + 0x10);
    if (cmp_lhs == cmp_rhs) goto loc_0801B392;
    r1 = 0x0871DF70U; // [0x0801B4E0]
    r0 = (r0 << 4);
    r1 -= 0x40U;
    r1 = r0 + r1;
    goto loc_0801B39A;
loc_0801B392:
    r1 = 0x0871DF70U; // [0x0801B4E0]
    r0 = (r0 << 4);
    r1 -= 0x80U;
    r1 = r0 + r1;
loc_0801B39A:
    r6 = r1;
    r1 = r4;
    r0 = 0x20; // sp + 0x20
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B3A0: BL 0x0804F944
    r2 = 0x20; // sp + 0x20
    r1 = r6;
    r0 = sp;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B3AA
    r1 = r6;
    r1 += 0x8U;
    r2 = 0x20; // sp + 0x20
    r0 = 0x8; // sp + 0x8
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B3B6
    r1 = 0x0; // sp + 0x0
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[4] = r0; // [sp + 0x10]
    r2 = 0x8; // sp + 0x8
    stack[5] = r1; // [sp + 0x14]
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    stack[6] = r1; // [sp + 0x18]
    r0 = 0x10; // sp + 0x10
    stack[7] = r2; // [sp + 0x1C]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r0 = 0x0871DD38U; // [0x0801B4D0]
    r2 = 0x28; // sp + 0x28
    r1 = 0x0U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0801B3D8
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0801B3E4;
loc_0801B3E2:
    return sub_0801B2B0(r0, r1, r2, r3);
loc_0801B3E4:
    r6 = r4;
    r6 += 0x1A0U;
    r0 = *(u32*)(r6);
    r7 = r6 + 4;
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u32*)(r6 + 0x4);
    stack[9] = r0; // [sp + 0x24]
    r1 = *(u8*)(r4 + 0x10);
    r2 = (r1 << 3);
    r1 = 0x0807268CU; // [0x0801B4E8]
    r2 = *(u32*)(r1 + r2);
    r0 = stack[8]; // [sp + 0x20]
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r2 = (r2 << 5);
    r0 = r0 + r2;
    stack[8] = r0; // [sp + 0x20]
    r2 = *(u8*)(r4 + 0x10);
    r0 = stack[9]; // [sp + 0x24]
    r2 = (r2 << 3);
    r1 = r2 + r1;
    r1 = *(u32*)(r1 + 0x4);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 5);
    r0 = r0 + r1;
    stack[9] = r0; // [sp + 0x24]
    r0 = stack[8]; // [sp + 0x20]
    r1 = stack[9]; // [sp + 0x24]
    r0 = ((u32)((s32)r0 >> 8));
    r2 = ((u32)((s32)r1 >> 8));
    stack[4] = r0; // [sp + 0x10]
    stack[6] = r0; // [sp + 0x18]
    r0 = 0x0871DD38U; // [0x0801B4D0]
    stack[5] = r2; // [sp + 0x14]
    stack[7] = r2; // [sp + 0x1C]
    r0 = *(u32*)(r0 + 0xC);
    r2 = r6 - 4;
    r1 = 0x18; // sp + 0x18
    r0 = sub_080097C2(r0, r1, r2, r3); // 0x0801B434
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801B3E2;
    r0 = stack[8]; // [sp + 0x20]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)(r7) = (u32)r0;
    r0 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801B3E2;
    r1 = r4;
    r6 = 0x10; // sp + 0x10
    r0 = r6;
    r5 = *(u32*)(r5 + 0xC);
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B452: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DF70U; // [0x0801B4E0]
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r0 = 0x18; // sp + 0x18
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B462
    r2 = 0x18; // sp + 0x18
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r5 += 0x2CU;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    return sub_0801B2B0(r0, r1, r2, r3);
}

// ROM Address: 0x0801B4A4..0x0801B4B8 (20 bytes, Thumb)
u32 sub_0801B4A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x4);
    r4 = r0;
    r0 = 0x0871DD38U; // [0x0801B4D0]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801B4B8(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801B4B2
    return sub_0801B4C6(r0, r1, r2, r3);
}

// ROM Address: 0x0801B4B8..0x0801B4CE (22 bytes, Thumb)
u32 sub_0801B4B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x083192A8U; // [0x0801B4D4]
    r0 = *(u32*)(r0);
    r2 = 0x000005C4U; // [0x0801B4D8]
    r1 += 0x24U;
    r0 = r0 + r2;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801B4C2
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801B4C8: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0801B4CE..0x0801B4EC (30 bytes, Thumb)
u32 sub_0801B4CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    if (cmp_lhs <= cmp_rhs) return sub_0801B544(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r2 = 0x70U;
    r6 = (r6 >> 1);
    r0 = Bios_Swi_70(r0, r1); // SWI 0x70
    r1 = (r6 >> 1);
    *(u16*)(r2 + 0x6) = (u16)r0;
    r3 = (r5 >> 1);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0801B4EC..0x0801B52A (62 bytes, Thumb)
u32 sub_0801B4EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0801B53E(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B50C: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) return sub_0801B52A(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801B522: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0801B52A..0x0801B626 (252 bytes, Thumb)
u32 sub_0801B52A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 20;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801B538;
    r0 = (r0 << 29);
    r0 = (r0 >> 31);
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0801B526(r0, r1, r2, r3);
loc_0801B538:
    r0 = 0x2U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0801B526(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0801B598;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B54C: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801B5FC;
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B55E: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DF9CU; // [0x0801B800]
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x8; // sp + 0x8
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B570
    r2 = r4;
    r1 = r6;
    r0 = 0x0U;
    r3 = *(u32*)(r5 + 0xC);
    r0 = sub_08036FA2(r0, r1, r2, r3); // 0x0801B57C
    r6 = 0x0871DD38U; // [0x0801B804]
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = *(u32*)(r6);
    r2 = 0x000005C4U; // [0x0801B80C]
    r1 = 0x083192CCU; // [0x0801B808]
    r0 = r0 + r2;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801B58C
    r1 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r6 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801B594: BL 0x0801191A
loc_0801B598:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B5A2: BL 0x08046AA2
    r6 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = 0x0871DF9CU; // [0x0801B800]
    r0 = (r0 << 2);
    r1 += 0x20U;
    r0 = *(u32*)(r1 + r0);
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r6);
    r0 *= r1;
    r1 = *(u32*)(r5 + 0x8);
    r0 = ((u32)((s32)r0 >> 4));
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u32*)(r5 + 0x8) = (u32)r0;
    r0 = r6;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801B5C4: BL 0x08013504
    r0 = *(u32*)(r5 + 0x8);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r5 + 0x8) = (u32)r0;
    r0 = r6;
    r0 = sub_08013492(r0, r1, r2, r3); // 0x0801B5D2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801B60C;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B5E4: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801B60C;
    r0 = *(u16*)(r4 + 0x12);
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x3U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0801B526(r0, r1, r2, r3);
loc_0801B5FC:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801B606: BL __call_via_r3
    return sub_0801B526(r0, r1, r2, r3);
loc_0801B60C:
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08037106(r0, r1, r2, r3); // 0x0801B60E
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801B620: BL __call_via_r3
    return sub_0801B526(r0, r1, r2, r3);
}

// ROM Address: 0x0801B638..0x0801B6E8 (176 bytes, Thumb)
u32 sub_0801B638(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0U;
    r4 = r0;
    r0 = 0x38U;
    *(u16*)(r1 + 0x12) = (u16)r6;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r6;
    r0 = *(u8*)(r1 + 0x10);
    r2 = 0x0871DF9CU; // [0x0801B800]
    r7 = 0x4; // sp + 0x4
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r2 += 0x2CU;
    r5 = r0 + r2;
    r0 = *(u32*)(r4 + 0x14);
    r2 = r0 + 3;
    *(u32*)(r4 + 0x4) = (u32)r2;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r2 = 0x08756A04U; // [0x0801B810]
    r0 = (r0 << 2);
    r0 = r0 + r2;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r7;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B66C: BL 0x0804F944
    r1 = r7;
    r7 = 0xC; // sp + 0xC
    r2 = r5;
    r0 = r7;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B678
    r2 = *(u32*)(r5 + 0x8);
    r3 = 0xFFU;
    stack[0] = r2; // [sp + 0x0]
    r0 = *(u32*)(r4 + 0x8);
    r3 += 0x1U;
    r2 = r7;
    r1 = *(u32*)(r0);
    r0 = 0x0U;
    r0 = sub_080507A0(r0, r1, r2, r3); // 0x0801B68C
    *(u32*)(r4 + 0xC) = (u32)r0;
    r4 = 0x0871DD38U; // [0x0801B804]
    r1 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801B698: BL 0x0801191A
    r0 = *(u32*)(r4);
    r4 = 0x000005C4U; // [0x0801B80C]
    r3 = r6;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x083192CCU; // [0x0801B808]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801B6A8
    return r0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0801B6E8(r0, r1, r2, r3);
    r1 = (r0 >> 3);
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs <= cmp_rhs) goto loc_0801B6D2;
    r1 = (r1 << 31);
    r1 = (r1 >> 31);
    r1 += 0x2U;
loc_0801B6D2:
    r0 = *(u32*)(r5 + 0x8);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r0);
    r1 = (r1 << 2);
    r1 = r0 + r1;
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_08021740(r0, r1, r2, r3); // 0x0801B6E0: BL 0x08021740
    return r0;
}

// ROM Address: 0x0801B6E8..0x0801B7FE (278 bytes, Thumb)
u32 sub_0801B6E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0801B786;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B6F6: BL 0x08046AA2
    r6 = r0;
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801B714;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801B70E: BL __call_via_r3
    return sub_0801B6E4(r0, r1, r2, r3);
loc_0801B714:
    r0 = 0x0871DD38U; // [0x0801B804]
    r1 = *(u32*)(r5 + 0xC);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801B71A
    r3 = 0x0U;
    r0 = 0x0871DD38U; // [0x0801B804]
    *(u32*)(r5 + 0xC) = (u32)r3;
    r0 = *(u32*)(r0);
    r2 = 0x000005C4U; // [0x0801B80C]
    r1 = 0x083192CCU; // [0x0801B808]
    r0 = r0 + r2;
    r7 = r0;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801B72E
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r1 = 0x08319428U; // [0x0801B814]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801B73A
    r1 = r4;
    r7 = 0xC; // sp + 0xC
    r0 = r7;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B744: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871DF9CU; // [0x0801B800]
    r1 += 0x5CU;
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r7;
    r7 = 0x14; // sp + 0x14
    r0 = r7;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B758
    r2 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r5 + 0x8);
    r2 -= 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r2 = r4;
    r3 = r7;
    r1 = r6;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_0802DB6C(r0, r1, r2, r3); // 0x0801B774: BL 0x0802DB6C
    r1 = r0;
    *(u32*)(r5 + 0x10) = (u32)r0;
    r0 = 0x0871DD38U; // [0x0801B804]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801B780: BL 0x0801191A
    return sub_0801B6E4(r0, r1, r2, r3);
loc_0801B786:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B790: BL 0x08046AA2
    r6 = r0;
    r0 = *(u32*)(r5 + 0x14);
    r1 = 0x0871DF9CU; // [0x0801B800]
    r0 = (r0 << 2);
    r1 += 0x7CU;
    r0 = *(u32*)(r1 + r0);
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r6);
    r0 *= r1;
    r1 = *(u32*)(r5 + 0x18);
    r0 = ((u32)((s32)r0 >> 4));
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u32*)(r5 + 0x18) = (u32)r0;
    r0 = r6;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801B7B2: BL 0x08013504
    r0 = *(u32*)(r5 + 0x18);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r5 + 0x18) = (u32)r0;
    r0 = r6;
    r0 = sub_08013492(r0, r1, r2, r3); // 0x0801B7C0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801B7DE;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B7D2: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801B7EE;
loc_0801B7DE:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801B7E8: BL __call_via_r3
    return sub_0801B6E4(r0, r1, r2, r3);
loc_0801B7EE:
    r0 = *(u16*)(r4 + 0x12);
    r0 += 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0801B6E4(r0, r1, r2, r3);
}

// ROM Address: 0x0801B880..0x0801B914 (148 bytes, Thumb)
u32 sub_0801B880(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    stack[11] = r1; // [sp + 0x2C]
    r0 = *(u32*)(r0 + 0x4);
    r6 = r5;
    r6 += 0x8U;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801B8B4;
loc_0801B894:
    r0 = (r4 << 2);
    r7 = r0 + r6;
    r7 += 0x4U;
    r0 = *(u32*)(r7);
    r1 = stack[11]; // [sp + 0x2C]
    r0 = sub_0800EB44(r0, r1, r2, r3); // 0x0801B89E
    r1 = 0xFFU;
    r1 += 0x1CU;
    r0 = *(u32*)(r7);
    r0 = sub_080391AC(r0, r1, r2, r3); // 0x0801B8A8
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0801B894;
loc_0801B8B4:
    r0 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_0801B90A;
    r2 = 0x1C; // sp + 0x1C
    stack[12] = r2; // [sp + 0x30]
loc_0801B8BE:
    r0 = (r4 << 2);
    r7 = r0 + r6;
    r7 += 0x4U;
    r1 = *(u32*)(r7);
    r0 = 0x14; // sp + 0x14
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0801B8C8
    r1 = 0x14; // sp + 0x14
    r0 = 0xC; // sp + 0xC
    r2 = stack[12]; // [sp + 0x30]
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B8D2
    r0 = stack[3]; // [sp + 0xC]
    r1 = ((u32)((s32)r0 >> 1));
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[10] = r0; // [sp + 0x28]
    stack[9] = r1; // [sp + 0x24]
    r1 = *(u32*)(r7);
    r7 = 0x0871DD38U; // [0x0801BA84]
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801B8EC
    r2 = 0x38U;
    r0 = 0x0U;
    r1 = 0x24; // sp + 0x24
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x0801B8F6
    r1 = r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801B8FE: BL 0x0801191A
    r0 = *(u32*)(r5 + 0x8);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0801B8BE;
loc_0801B90A:
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801B90C: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0801B914..0x0801B916 (2 bytes, Thumb)
u32 sub_0801B914(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0801B916..0x0801B9FE (232 bytes, Thumb)
u32 sub_0801B916(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r4 = r1;
    r1 = r6;
    r1 += 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[8] = r1; // [sp + 0x20]
    if (cmp_lhs <= cmp_rhs) goto loc_0801B994;
loc_0801B92C:
    r1 = stack[8]; // [sp + 0x20]
    r0 = (r5 << 2);
    r0 = r0 + r1;
    r0 += 0x4U;
    stack[7] = r0; // [sp + 0x1C]
    r7 = *(u32*)(r0);
    r0 = 0x4; // sp + 0x4
    r7 += 0x1A0U;
    r1 = r4;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801B940: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871E024U; // [0x0801BA8C]
    r2 = 0x4; // sp + 0x4
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = (r5 << 3);
    r1 = r0 + r1;
    r0 = 0xC; // sp + 0xC
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801B958
    r0 = *(u32*)(r7);
    r1 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 5);
    r0 = r3 - r0;
    r1 = (r1 << 8);
    r0 = r0 + r1;
    r0 = ((u32)((s32)r0 >> 5));
    stack[5] = r0; // [sp + 0x14]
    r0 = *(u32*)(r7 + 0x4);
    r1 = stack[4]; // [sp + 0x10]
    r3 = (r0 << 5);
    r0 = r3 - r0;
    r1 = (r1 << 8);
    r0 = r0 + r1;
    r0 = ((u32)((s32)r0 >> 5));
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[7]; // [sp + 0x1C]
    r5 += 0x1U;
    r0 = *(u32*)(r0);
    r1 = stack[5]; // [sp + 0x14]
    r0 += 0x1A0U;
    *(u32*)r0 = r1; r0 += 4;
    r1 = stack[6]; // [sp + 0x18]
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r6 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0801B92C;
loc_0801B994:
    r0 = *(u16*)(r4 + 0x12);
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 40;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0801BA0E(r0, r1, r2, r3);
    r0 = *(u32*)(r6 + 0x8);
    r1 = *(u32*)(r6 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0801B9AC;
    *(u32*)(r6 + 0x4) = (u32)r0;
loc_0801B9AC:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B9B6: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801B9FE(r0, r1, r2, r3);
    r5 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r5;
    r0 = *(u32*)(r6 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs >= cmp_rhs) goto loc_0801B9FA;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B9D6: BL 0x08046AA2
    r1 = 0xA0U;
    r0 = sub_080134B8(r0, r1, r2, r3); // 0x0801B9DC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801B9FA;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801B9EE: BL 0x08046AA2
    r1 = 0xA0U;
    r0 = sub_08013598(r0, r1, r2, r3); // 0x0801B9F4: BL 0x08013598
    *(u16*)(r4 + 0x12) = (u16)r5;
loc_0801B9FA:
    return r0;
}

// ROM Address: 0x0801B9FE..0x0801BA7E (128 bytes, Thumb)
u32 sub_0801B9FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801BA08: BL __call_via_r3
    return sub_0801B9FA(r0, r1, r2, r3);
    r1 = (r0 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_0801B9FA(r0, r1, r2, r3);
    r0 = 0x93U;
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x0801BA90]
    r0 = (r0 << 4);
    r6 = r0 + r1;
    r0 = 0x9DU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0801BA20: BL 0x08000158
    r5 = r0;
    r1 = r4;
    r7 = 0xC; // sp + 0xC
    r0 = r7;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801BA2C: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871E024U; // [0x0801BA8C]
    r1 += 0x60U;
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r7;
    r7 = 0x14; // sp + 0x14
    r0 = r7;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801BA40
    r3 = r7;
    r2 = r6;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_08039134(r0, r1, r2, r3); // 0x0801BA4C
    r5 = r0;
    r1 = 0x12U;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801BA54
    r1 = 0x03001B10U; // [0x0801BA94]
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0801BA5C
    r0 = *(u8*)(r4 + 0x10);
    *(u8*)(r5 + 0x10) = (u8)r0;
    r1 = stack[8]; // [sp + 0x20]
    r0 = *(u32*)(r1);
    r2 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r1) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r5;
    r0 = 0x0871DD38U; // [0x0801BA84]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801BA78: BL 0x0801191A
    return sub_0801B9FA(r0, r1, r2, r3);
}

// ROM Address: 0x0801BAB0..0x0801BAE6 (54 bytes, Thumb)
u32 sub_0801BAB0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801BAC8;
    r0 = 0x48U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801BABC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801BAC8;
    r0 = r4;
loc_0801BAC6:
    return r0;
loc_0801BAC8:
    r0 = 0x0804E334U /* &VTable_0804E334 */; // [0x0801BDB8]
    r2 = 0x34U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x8U;
    r1 = r5;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x0801BAD4: BL 0x08046DD0
    r0 = 0x17U;
    r0 = ~r0;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x0U;
    *(u8*)(r4 + 0x5) = (u8)r0;
    r0 = r4;
    goto loc_0801BAC6;
    return r0;
}

// ROM Address: 0x0801BB1A..0x0801BB90 (118 bytes, Thumb)
u32 sub_0801BB1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r0 += 0x1C0U;
    stack[26] = r0; // [sp + 0x68]
    r6 = 0x0U;
    *(u32*)(r0 + 0xC) = (u32)r6;
    r5 = r1;
    r1 = *(u32*)(r4 + 0x44);
    r0 = 0x0871DD38U; // [0x0801BDBC]
    r1 += 0x1U;
    *(u32*)(r4 + 0x44) = (u32)r1;
    r2 = *(u32*)(r0 + 0x10);
    r3 = *(u32*)(r0);
    r7 = r2;
    r2 = 0x000005C4U; // [0x0801BDC0]
    r7 += 0xC0U;
    r2 = r3 + r2;
    stack[25] = r2; // [sp + 0x64]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_0801BB90(r0, r1, r2, r3);
    r1 += 0x17U;
    if (cmp_lhs != cmp_rhs) goto loc_0801BB7A;
    r1 = *(u8*)(r4 + 0x5);
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0801BB6E;
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801BB5E: BL 0x08046AA2
    r1 = *(u8*)(r4 + 0x5);
    r2 = 0x0871E0A4U; // [0x0801BDC4]
    r1 = (r1 << 2);
    r1 = *(u32*)(r2 + r1);
    r0 = sub_08013598(r0, r1, r2, r3); // 0x0801BB6A: BL 0x08013598
loc_0801BB6E:
    r3 = r6;
    r2 = 0x40U;
    r1 = 0x0831941CU; // [0x0801BDC8]
    r0 = stack[25]; // [sp + 0x64]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801BB76
loc_0801BB7A:
    r1 = 0x13U;
    r0 = r5;
    *(u32*)(r7 + 0x10) = (u32)r6;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801BB80
    r0 = *(u32*)(r4 + 0x44);
    r0 = (u32)(-(s32)r0);
    r0 = ((u32)((s32)r0 >> 3));
    *(u8*)(r5 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x0801BB90..0x0801BDB6 (550 bytes, Thumb)
u32 sub_0801BB90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r4;
    r2 += 0x8U;
    r12 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801BC82;
    r1 = *(u32*)(r4 + 0x8);
    r0 = 0x0871DD38U; // [0x0801BDBC]
    stack[24] = r1; // [sp + 0x60]
    r7 = *(u32*)(r0 + 0x4);
    r7 += 0x4U;
    lr = r7;
loc_0801BBA6:
    r2 = *(u8*)(r4 + 0x5);
    r0 = stack[24]; // [sp + 0x60]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0801BBC6;
    r0 = r5;
    r1 = *(u32*)(r4 + 0x3C);
    r0 += 0x1A0U;
    r2 = *(u32*)(r4 + 0x40);
    r1 = (r1 << 8);
    *(u32*)r0 = r1; r0 += 4;
    r2 = (r2 << 8);
    *(u32*)(r0) = (u32)r2;
    r0 = *(u8*)(r4 + 0x4);
    *(u8*)(r5 + 0x10) = (u8)r0;
    return sub_0801BB8C(r0, r1, r2, r3);
loc_0801BBC6:
    r0 = (r2 << 3);
    r0 += r12;
    r0 += 0x4U;
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801BC5C;
    r1 = 0x0871DD38U; // [0x0801BDBC]
    r0 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r1 + 0x10);
    r1 = 0x0U;
    r7 = *(u32*)(r3);
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801BC56;
loc_0801BBE0:
    r6 = (r1 << 2);
    r6 = r6 + r3;
    r6 = *(u32*)(r6 + 0x4);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801BC50;
    r3 = 0x4U;
    r1 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x6U;
    r2 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x8U;
    r6 = (u32)(*(s16*)(r0 + r3));
    r3 = 0xAU;
    r0 = (u32)(*(s16*)(r0 + r3));
    r6 += 0xFU;
    stack[16] = r6; // [sp + 0x40]
    r0 += 0x7U;
    stack[17] = r0; // [sp + 0x44]
    r0 = 0x38; // sp + 0x38
    stack[14] = r1; // [sp + 0x38]
    stack[15] = r2; // [sp + 0x3C]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r6 = 0x48; // sp + 0x48
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r6 -= 0x10U;
    r2 = r6;
    r4 = 0x1U;
    r2 += 0x8U;
    r1 = 0x48; // sp + 0x48
    r0 = 0x40; // sp + 0x40
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801BC1A
    r0 = stack[16]; // [sp + 0x40]
    r1 = ((u32)((s32)r0 >> 1));
    r0 = stack[17]; // [sp + 0x44]
    stack[14] = r1; // [sp + 0x38]
    r0 = ((u32)((s32)r0 >> 1));
    stack[15] = r0; // [sp + 0x3C]
    stack[23] = r0; // [sp + 0x5C]
    r0 = r1;
    r0 -= 0x8U;
    stack[22] = r1; // [sp + 0x58]
    stack[22] = r0; // [sp + 0x58]
    r0 = stack[23]; // [sp + 0x5C]
    r1 = stack[22]; // [sp + 0x58]
    r0 += 0x4U;
    stack[23] = r0; // [sp + 0x5C]
    r0 = r5;
    r0 += 0x1A0U;
    r2 = stack[23]; // [sp + 0x5C]
    r1 = (r1 << 8);
    *(u32*)r0 = r1; r0 += 4;
    r2 = (r2 << 8);
    *(u32*)(r0) = (u32)r2;
    *(u8*)(r5 + 0x10) = (u8)r4;
    return sub_0801BB8C(r0, r1, r2, r3);
loc_0801BC50:
    r1 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0801BBE0;
loc_0801BC56:
    r0 = r2 + 1;
    *(u8*)(r4 + 0x5) = (u8)r0;
    goto loc_0801BBA6;
loc_0801BC5C:
    r7 = lr;
    r1 = *(u32*)(r0 + 0x4);
    r6 = *(u32*)(r7);
    r0 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801BCA8;
loc_0801BC68:
    r3 = (r0 << 2);
    r3 = r3 + r7;
    r3 = *(u32*)(r3 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0801BCA2;
    r4 = 0x1U;
    r0 = 0x50; // sp + 0x50
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801BC76: BL 0x0800FDFA
    r0 = r5;
    r0 += 0x1A0U;
    goto loc_0801BC84;
loc_0801BC82:
    goto loc_0801BCAE;
loc_0801BC84:
    r1 = stack[20]; // [sp + 0x50]
    r2 = stack[22]; // [sp + 0x58]
    r1 = r1 + r2;
    r2 = (r1 >> 31);
    r1 = r2 + r1;
    r1 = ((u32)((s32)r1 >> 1));
    r1 -= 0x8U;
    r2 = stack[23]; // [sp + 0x5C]
    r1 = (r1 << 8);
    r2 += 0x8U;
    r2 = (r2 << 8);
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)(r0) = (u32)r2;
    *(u8*)(r5 + 0x10) = (u8)r4;
    return sub_0801BB8C(r0, r1, r2, r3);
loc_0801BCA2:
    r0 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801BC68;
loc_0801BCA8:
    r0 = r2 + 1;
    *(u8*)(r4 + 0x5) = (u8)r0;
    goto loc_0801BBA6;
loc_0801BCAE:
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if (cmp_lhs >= cmp_rhs) goto loc_0801BCBC;
    r0 = 0x18U;
    r0 = r0 - r1;
    r0 = ((u32)((s32)r0 >> 3));
    *(u8*)(r5 + 0x11) = (u8)r0;
loc_0801BCBA:
    return sub_0801BB8C(r0, r1, r2, r3);
loc_0801BCBC:
    r1 = 0x1U;
    *(u32*)(r7 + 0x10) = (u32)r1;
    r0 = *(u8*)(r4 + 0x5);
    r2 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801BCD8;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801BCD2: BL __call_via_r3
    return sub_0801BB8C(r0, r1, r2, r3);
loc_0801BCD8:
    r0 = (r0 << 3);
    r0 += r12;
    r0 += 0x4U;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801BCF8;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080125FA(r0, r1, r2, r3); // 0x0801BCE6
    r0 = *(u8*)(r4 + 0x5);
    r0 += 0x1U;
    *(u8*)(r4 + 0x5) = (u8)r0;
    r0 = 0x17U;
    r0 = ~r0;
    *(u32*)(r4 + 0x44) = (u32)r0;
    return sub_0801BB8C(r0, r1, r2, r3);
loc_0801BCF8:
    r0 = *(u32*)(r4 + 0x44);
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0801BD8A;
    stack[19] = r5; // [sp + 0x4C]
    r0 = *(u8*)(r5 + 0x10);
    r3 = 0x40; // sp + 0x40
    r7 = 0x30; // sp + 0x30
    *(u8*)(r3) = (u8)r0;
    r0 = 0x086B8098U; // [0x0801BDCC]
    stack[23] = r5; // [sp + 0x5C]
    stack[18] = r0; // [sp + 0x48]
    r0 = 0x600U; // (3 << 9)
    stack[17] = r0; // [sp + 0x44]
    r3 = 0x20; // sp + 0x20
    *(u8*)(r3 + 0xC) = (u8)r1;
    stack[8] = r7; // [sp + 0x20]
    r0 = *(u8*)(r5 + 0x10);
    r1 = 0x0871E0A4U; // [0x0801BDC4]
    r1 += 0x14U;
    r0 = (r0 << 4);
    r7 = r0 + r1;
    r1 = r5;
    r0 = 0x24; // sp + 0x24
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801BD28: BL 0x0804F944
    r2 = 0x24; // sp + 0x24
    r1 = r7;
    r0 = sp;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801BD32
    r1 = r7;
    r1 += 0x8U;
    r2 = 0x24; // sp + 0x24
    r0 = 0x8; // sp + 0x8
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801BD3E
    r1 = 0x0; // sp + 0x0
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[4] = r0; // [sp + 0x10]
    r2 = 0x8; // sp + 0x8
    stack[5] = r1; // [sp + 0x14]
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    stack[6] = r1; // [sp + 0x18]
    r0 = 0x10; // sp + 0x10
    stack[7] = r2; // [sp + 0x1C]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r7 = stack[8]; // [sp + 0x20]
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r0 = 0x0871DD38U; // [0x0801BDBC]
    r2 = 0x2C; // sp + 0x2C
    r1 = 0x0U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0801BD62
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801BD86;
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0801BD6C
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0801BDD0]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r3 = r6;
    r2 = 0x40U;
    r0 = stack[25]; // [sp + 0x64]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801BD82
loc_0801BD86:
    r0 = stack[26]; // [sp + 0x68]
    *(u32*)(r0 + 0xC) = (u32)r6;
loc_0801BD8A:
    r0 = *(u32*)(r4 + 0x44);
    r0 -= 0x18U;
    r0 = ((u32)((s32)r0 >> 2));
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r5 + 0x11) = (u8)r0;
    r1 = *(u32*)(r5 + 0x50);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801BCBA;
    r1 = 0x13U;
    r0 = r5;
    *(u8*)(r5 + 0x11) = (u8)r6;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801BDA4
    r0 = *(u8*)(r4 + 0x5);
    r0 += 0x1U;
    *(u8*)(r4 + 0x5) = (u8)r0;
    r0 = 0x17U;
    r0 = ~r0;
    *(u32*)(r4 + 0x44) = (u32)r0;
    return sub_0801BB8C(r0, r1, r2, r3);
}

// ROM Address: 0x0801BDD4..0x0801BEEC (280 bytes, Thumb)
u32 sub_0801BDD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x0U;
    r6 = r0;
    r0 = 0x38U;
    *(u16*)(r4 + 0x12) = (u16)r1;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871E0F8U; // [0x0801C098]
    r7 = 0x4; // sp + 0x4
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r5 = r0 + r1;
    r1 = r4;
    r0 = r7;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801BDF8: BL 0x0804F944
    r1 = r7;
    r7 = 0xC; // sp + 0xC
    r2 = r5;
    r0 = r7;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801BE04
    r0 = *(u32*)(r6 + 0xC);
    r1 = 0x0871DA68U; // [0x0801C09C]
    r0 = (r0 << 4);
    r2 = r0 + r1;
    r3 = r4;
    r1 = r7;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r5 + 0x8);
    r0 = 0x0U;
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x0801BE1A
    r1 = r0;
    *(u32*)(r6 + 0x8) = (u32)r0;
    r0 = 0x0871DD38U; // [0x0801C0A0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801BE26: BL 0x0801191A
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x0801BE34
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801BE3A: BL 0x0803D63C
    return r0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0801BEE8;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0801BE98;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801BE64: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801BEEC(r0, r1, r2, r3);
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801BE76: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871E0F8U; // [0x0801C098]
    r1 += 0x30U;
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x8; // sp + 0x8
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801BE8A
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r5 + 0x8);
    r2 = r6;
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0801BE94
loc_0801BE98:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801BEA2: BL 0x08046AA2
    r6 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = 0x0871E0F8U; // [0x0801C098]
    r0 = (r0 << 2);
    r1 += 0x50U;
    r0 = *(u32*)(r1 + r0);
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r6);
    r0 *= r1;
    r1 = *(u32*)(r5 + 0x4);
    r0 = ((u32)((s32)r0 >> 4));
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801BEC4: BL 0x08013504
    r0 = *(u32*)(r5 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013492(r0, r1, r2, r3); // 0x0801BED2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801BEFC(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801BEE4: BL __call_via_r3
loc_0801BEE8:
    return r0;
}

// ROM Address: 0x0801BEEC..0x0801BF2C (64 bytes, Thumb)
u32 sub_0801BEEC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801BEF6: BL __call_via_r3
    return sub_0801BEE8(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0x12);
    r2 = 0x84U;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801BF10: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) return sub_0801BEE8(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801BF26: BL __call_via_r3
    return sub_0801BEE8(r0, r1, r2, r3);
}

// ROM Address: 0x0801BF3E..0x0801C058 (282 bytes, Thumb)
u32 sub_0801BF3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x0U;
    r6 = r0;
    r0 = 0x38U;
    *(u16*)(r4 + 0x12) = (u16)r1;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871E0F8U; // [0x0801C098]
    r7 = 0x4; // sp + 0x4
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 += 0x5CU;
    r5 = r0 + r1;
    r1 = r4;
    r0 = r7;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801BF64: BL 0x0804F944
    r1 = r7;
    r7 = 0xC; // sp + 0xC
    r2 = r5;
    r0 = r7;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801BF70
    r0 = *(u32*)(r6 + 0xC);
    r1 = 0x087315A8U; // [0x0801C0A4]
    r0 = (r0 << 4);
    r2 = r0 + r1;
    r3 = r4;
    r1 = r7;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r5 + 0x8);
    r0 = 0x0U;
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x0801BF86
    r1 = r0;
    *(u32*)(r6 + 0x8) = (u32)r0;
    r0 = 0x0871DD38U; // [0x0801C0A0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801BF92: BL 0x0801191A
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x0801BFA0
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801BFA6: BL 0x0803D63C
    return r0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0801C054;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0801C004;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801BFD0: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801C058(r0, r1, r2, r3);
    r1 = r4;
    r6 = sp;
    r0 = sp;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801BFE2: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871E0F8U; // [0x0801C098]
    r1 += 0x8CU;
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r6;
    r6 = 0x8; // sp + 0x8
    r0 = r6;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801BFF6
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r5 + 0x8);
    r2 = r6;
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0801C000
loc_0801C004:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801C00E: BL 0x08046AA2
    r6 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = 0x0871E0F8U; // [0x0801C098]
    r0 = (r0 << 2);
    r1 += 0xACU;
    r0 = *(u32*)(r1 + r0);
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r6);
    r0 *= r1;
    r1 = *(u32*)(r5 + 0x4);
    r0 = ((u32)((s32)r0 >> 4));
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x0801C030: BL 0x08013504
    r0 = *(u32*)(r5 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013492(r0, r1, r2, r3); // 0x0801C03E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801C068(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C050: BL __call_via_r3
loc_0801C054:
    return r0;
}

// ROM Address: 0x0801C058..0x0801C098 (64 bytes, Thumb)
u32 sub_0801C058(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C062: BL __call_via_r3
    return sub_0801C054(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0x12);
    r2 = 0x84U;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801C07C: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) return sub_0801C054(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C092: BL __call_via_r3
    return sub_0801C054(r0, r1, r2, r3);
}

// ROM Address: 0x0801C0BA..0x0801C168 (174 bytes, Thumb)
u32 sub_0801C0BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x0U;
    r5 = r0;
    r0 = 0x38U;
    *(u16*)(r1 + 0x12) = (u16)r7;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r7;
    r0 = *(u8*)(r1 + 0x10);
    r4 = r1;
    r1 = 0x0871E1B0U; // [0x0801C3D8]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r6 = r0 + r1;
    r1 = r4;
    r0 = 0x1C; // sp + 0x1C
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801C0DC: BL 0x0804F944
    r2 = r6;
    r1 = 0x1C; // sp + 0x1C
    r0 = 0x24; // sp + 0x24
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801C0E6
    r0 = *(u32*)(r5 + 0x10);
    r1 = 0x0872A690U; // [0x0801C3DC]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    stack[0] = r2; // [sp + 0x0]
    r3 = r4;
    r0 = 0x0U;
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x24; // sp + 0x24
    r0 = sub_08021280(r0, r1, r2, r3); // 0x0801C100: BL 0x08021280
    *(u32*)(r5 + 0x8) = (u32)r0;
    r1 = *(u32*)(r5 + 0x10);
    r0 = r7;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0801C11C;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801C118: BL 0x08046AA2
loc_0801C11C:
    r7 = r0;
    r1 = r4;
    r6 = 0x14; // sp + 0x14
    r0 = r6;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801C124: BL 0x0800FDFA
    r2 = r6;
    r2 += 0x8U;
    r1 = 0x14; // sp + 0x14
    r0 = 0xC; // sp + 0xC
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801C130
    r0 = stack[3]; // [sp + 0xC]
    r1 = ((u32)((s32)r0 >> 1));
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[10] = r0; // [sp + 0x28]
    stack[9] = r1; // [sp + 0x24]
    r3 = r7;
    r0 = 0x0U;
    r2 = *(u8*)(r4 + 0x10);
    r1 = 0x24; // sp + 0x24
    r0 = sub_08021594(r0, r1, r2, r3); // 0x0801C14C
    *(u32*)(r5 + 0xC) = (u32)r0;
    r4 = 0x0871DD38U; // [0x0801C3E0]
    r1 = *(u32*)(r5 + 0x8);
    r0 = *(u32*)(r4 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C158: BL 0x0801191A
    r1 = *(u32*)(r5 + 0xC);
    r0 = *(u32*)(r4 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C160: BL 0x0801191A
    return r0;
}

// ROM Address: 0x0801C168..0x0801C16A (2 bytes, Thumb)
u32 sub_0801C168(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0801C16A..0x0801C194 (42 bytes, Thumb)
u32 sub_0801C16A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = r1;
    r4 = r1;
    r1 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801C194(r0, r1, r2, r3);
    r1 += 0x1U;
    r0 = (r1 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0801C192;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C18E: BL __call_via_r3
loc_0801C192:
    return r0;
}

// ROM Address: 0x0801C194..0x0801C1CC (56 bytes, Thumb)
u32 sub_0801C194(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801C19C: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x6);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801C192(r0, r1, r2, r3);
    r0 = 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = *(u8*)(r4 + 0x10);
    r2 = *(u32*)(r0 + 0x34);
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08021452(r0, r1, r2, r3); // 0x0801C1B6: BL 0x08021452
    r4 = 0x0U;
    *(u32*)(r5 + 0x8) = (u32)r4;
    r0 = 0x0871DD38U; // [0x0801C3E0]
    r1 = *(u32*)(r5 + 0xC);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801C1C4
    *(u32*)(r5 + 0xC) = (u32)r4;
    return sub_0801C192(r0, r1, r2, r3);
}

// ROM Address: 0x0801C2AE..0x0801C30A (92 bytes, Thumb)
u32 sub_0801C2AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801C2BC: BL 0x08046AA2
    r5 = r0;
    r0 = *(u8*)(r0 + 0x14);
    r6 = 0x086B82ECU; // [0x0801C3E4]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r0 = sub_0801712C(r0, r1, r2, r3); // 0x0801C2CE
    r0 = 0xAU;
    *(u8*)(r5 + 0x14) = (u8)r0;
    r0 = r6;
    r0 += 0xF0U;
    r0 = sub_0801711C(r0, r1, r2, r3); // 0x0801C2DA
    r0 = *(u8*)(r5 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x0801C2E8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0801C2F0
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C2FE: BL __call_via_r3
    r0 = r4;
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x0801C304
    return r0;
}

// ROM Address: 0x0801C30A..0x0801C312 (8 bytes, Thumb)
u32 sub_0801C30A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801C30C: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0801C3F2..0x0801C486 (148 bytes, Thumb)
u32 sub_0801C3F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r6 = r1;
    *(u32*)(r0 + 0x8) = (u32)r3;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0801C3F8
    r5 = 0x0871DD38U; // [0x0801C6A0]
    r1 = 0x51U;
    r2 = 0x083192A8U; // [0x0801C6A4]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r7 = 0x000005C4U; // [0x0801C6A8]
    r0 = *(u32*)(r5);
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801C410
    r3 = 0x0U;
    r0 = 0x03002BB0U; // [0x0801C6AC]
    *(u32*)(r4 + 0xC) = (u32)r3;
    r0 = *(u8*)(r0);
    r7 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801C486(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801C482;
    r1 = r6;
    r4 = 0x1C; // sp + 0x1C
    r0 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801C42E: BL 0x0800FDFA
    r2 = r4;
    r2 += 0x8U;
    r6 = 0x2C; // sp + 0x2C
    r1 = 0x1C; // sp + 0x1C
    r0 = 0xC; // sp + 0xC
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801C43C
    r0 = stack[3]; // [sp + 0xC]
    r4 = 0x34; // sp + 0x34
    r1 = ((u32)((s32)r0 >> 1));
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[12] = r0; // [sp + 0x30]
    r0 = 0x0U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x2U;
    stack[11] = r1; // [sp + 0x2C]
    r1 = r6;
    stack[6] = r0; // [sp + 0x18]
    r0 = r4;
    r2 = 0x14; // sp + 0x14
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801C460
    r2 = 0x38U;
    r0 = 0x00000C88U; // [0x0801C6B0]
    stack[2] = r2; // [sp + 0x8]
    r3 = 0x7U;
    r1 = r4;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x0U;
    r2 = 0x087520D4U; // [0x0801C6B4]
    stack[1] = r7; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0801C476
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C47E: BL 0x0801191A
loc_0801C482:
    return r0;
}

// ROM Address: 0x0801C486..0x0801C4F4 (110 bytes, Thumb)
u32 sub_0801C486(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r6;
    r6 = 0x1C; // sp + 0x1C
    r0 = r6;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801C48C: BL 0x0800FDFA
    r2 = r6;
    r2 += 0x8U;
    r1 = 0x1C; // sp + 0x1C
    r0 = 0xC; // sp + 0xC
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801C498
    r0 = stack[3]; // [sp + 0xC]
    r2 = 0x1U;
    r1 = ((u32)((s32)r0 >> 1));
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[12] = r0; // [sp + 0x30]
    r0 = 0x0U;
    stack[5] = r0; // [sp + 0x14]
    stack[11] = r1; // [sp + 0x2C]
    stack[6] = r2; // [sp + 0x18]
    r2 = 0x14; // sp + 0x14
    r1 = 0x2C; // sp + 0x2C
    r0 = 0x34; // sp + 0x34
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801C4BA
    r0 = 0x48U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801C4C0: BL 0x0803D5B8
    r6 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801C4E8;
    stack[1] = r7; // [sp + 0x4]
    r7 = 0x08752D28U; // [0x0801C6B8]
    r2 = 0x38U;
    r0 = 0x4000U; // (1 << 14)
    stack[2] = r2; // [sp + 0x8]
    r2 = r7;
    stack[0] = r0; // [sp + 0x0]
    r3 = 0x3U;
    r0 = r6;
    r1 = 0x34; // sp + 0x34
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0801C4DE
    r0 = 0x0804B9E0U /* &VTable_0804B9E0 */; // [0x0801C6BC]
    *(u32*)(r6) = (u32)r0;
    *(u32*)(r6 + 0x44) = (u32)r7;
loc_0801C4E8:
    *(u32*)(r4 + 0xC) = (u32)r6;
    r0 = *(u32*)(r5 + 0x4);
    r1 = r6;
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C4EE: BL 0x0801191A
    return sub_0801C482(r0, r1, r2, r3);
}

// Evidence: calls BIOS Div (SWI 0x06) at 0x0801C51A; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0801C4F4
// ROM Address: 0x0801C4F4..0x0801C540 (76 bytes, Thumb)
u32 Math_Divide5(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801C502: BL 0x08046AA2
    r4 = r0;
    r0 = *(u32*)(r5 + 0x50);
    r0 = *(u32*)(r0);
    r1 = (r0 << 4);
    r0 = r4;
    r0 += 0x1CU;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r2 = *(u16*)(r5 + 0x12);
    r0 *= r2;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r1 = *(u8*)(r4 + 0x14);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r2 = 0x086B82ECU; // [0x0801C6C0]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u8*)(r1);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) return sub_0801C540(r0, r1, r2, r3);
    r1 = r4;
    r1 += 0x20U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_0801C536:
    *(u16*)(r1) = (u16)r0;
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801C536;
    return r0;
}

// ROM Address: 0x0801C540..0x0801C552 (18 bytes, Thumb)
u32 sub_0801C540(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r4;
    r1 += 0x1EU;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_0801C548:
    *(u16*)(r1) = (u16)r0;
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801C548;
    return sub_0801C53E(r0, r1, r2, r3);
}

// ROM Address: 0x0801C552..0x0801C62C (218 bytes, Thumb)
u32 sub_0801C552(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801C598;
    r1 = *(u32*)(r0);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801C566: BL 0x08046AA2
    r1 = *(u8*)(r0 + 0x14);
    r2 = 0x086B82ECU; // [0x0801C6C0]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u8*)(r1);
    r2 = (r1 << 31);
    r2 = (r2 >> 31);
    r1 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801C58E;
    r0 += 0x20U;
loc_0801C584:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0801C584;
    goto loc_0801C598;
loc_0801C58E:
    r0 += 0x1EU;
loc_0801C590:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0801C590;
loc_0801C598:
    r0 = *(u32*)(r4 + 0xC);
    r4 = 0x0871DD38U; // [0x0801C6A0]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801C5A8;
    r1 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801C5A4
loc_0801C5A8:
    r1 = 0x51U;
    r2 = 0x083192A8U; // [0x0801C6A4]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = 0x000005C4U; // [0x0801C6A8]
    r0 = *(u32*)(r4);
    r0 = r0 + r2;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0801C5B6
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C5C8: BL __call_via_r3
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801C5DC: BL 0x08046AA2
    r5 = r0;
    r0 = *(u8*)(r0 + 0x14);
    r6 = 0x086B82ECU; // [0x0801C6C0]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r0 = sub_0801712C(r0, r1, r2, r3); // 0x0801C5EE
    r0 = 0xEU;
    *(u8*)(r5 + 0x14) = (u8)r0;
    r0 = r6;
    r0 += 0x150U;
    r0 = sub_0801711C(r0, r1, r2, r3); // 0x0801C5FC
    r0 = *(u8*)(r5 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x0801C60A
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0801C612
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C620: BL __call_via_r3
    r0 = r4;
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x0801C626
    return r0;
}

// ROM Address: 0x0801C62C..0x0801C634 (8 bytes, Thumb)
u32 sub_0801C62C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801C62E: BL 0x0803D63C
    return r0;
}
