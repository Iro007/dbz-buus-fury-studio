/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #27
 * Address Range: 0x0804AAE2..0x0804F278 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0804AAE2..0x0804AAF0 (14 bytes, Thumb)
u32 sub_0804AAE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r2 -= 0x1DU;
    r0 = r0;
    *(u8*)(r4 + r3) = (u8)r5;
    r0 = r0;
    r2 = 0x00004555U; // [0x0804AD24]
    r0 = r0;
    return r0;
}

// ROM Address: 0x0804BA78..0x0804BA80 (8 bytes, Thumb)
u32 sub_0804BA78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x30) = (u32)r5;
    r0 = r0;
    r2 -= 0xC5U;
    r0 = r0;
    return r0;
}

// Evidence: tools/behaviour/test_table.py::test_gfx_begin_tile_load1_increments_the_byte_and_stores_the_tile_index runs it on a crafted object at 0x02000000 and asserts the 2 stores it makes and the 2 call targets; increments the byte at +0, stores the tile index at +2 and copies the tile through Thunk_VramCopy
// ROM Address: 0x0804E490..0x0804E4D8 (72 bytes, Thumb)
u32 Gfx_BeginTileLoad1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u8*)(r0);
    r6 = r1;
    r5 = r2;
    r1 = r0 + 1;
    *(u8*)(r4) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804E4C0;
    r0 = 0x080725E8U; // [0x0804E4C4]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0804E4A8
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r4 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x0804E4C8]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = r5;
    r1 = r6;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0804E4BC: BL 0x08049138
loc_0804E4C0:
    return r0;
    r0 = r0;
    r5 = 0xE8U;
    r7 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r0 += 0xCU;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x0804E4D2: BL 0x0804E490
    return r0;
}

// ROM Address: 0x0804E4D8..0x0804E4DA (2 bytes, Thumb)
u32 sub_0804E4D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804E50C..0x0804E51E (18 bytes, Thumb)
u32 sub_0804E50C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804E518: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0804E51E..0x0804E522 (4 bytes, Thumb)
u32 sub_0804E51E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804E528..0x0804E546 (30 bytes, Thumb)
u32 sub_0804E528(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x11U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804E534: BL __call_via_r3
    return r0;
    r0 = r0;
    r0 = r1;
    r0 = sub_0800F924(r0, r1, r2, r3); // 0x0804E540
    return r0;
}

// ROM Address: 0x0804E546..0x0804E54A (4 bytes, Thumb)
u32 sub_0804E546(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804E550..0x0804E5B4 (100 bytes, Thumb)
u32 sub_0804E550(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = 0x31U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0804E556: BL 0x08000158
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804E568;
    r0 = r4;
    r0 = sub_0800EECC(r0, r1, r2, r3); // 0x0804E564: BL 0x0800EECC
loc_0804E568:
    return r0;
    r0 = r0;
    r4 = r1;
    r0 = 0x32U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0804E572: BL 0x08000158
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804E584;
    r0 = r4;
    r0 = sub_0800EECC(r0, r1, r2, r3); // 0x0804E580: BL 0x0800EECC
loc_0804E584:
    r1 = 0xCU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E588
    r1 = 0x03001B30U; // [0x0804E598]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E590
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r0 = r1;
    r1 = *(u32*)(r1 + 0x58);
    r1 += 0x4CU;
    r1 = *(u32*)(r1 + 0x54);
    r2 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0804E5B2;
    r1 = 0x0300326CU; // [0x0804E5B4]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E5AE
loc_0804E5B2:
    return r0;
}

// ROM Address: 0x0804E5B4..0x0804E5B8 (4 bytes, Thumb)
u32 sub_0804E5B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x6CU;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0804E5B8..0x0804E604 (76 bytes, Thumb)
u32 sub_0804E5B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = 0x35U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0804E5BE: BL 0x08000158
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804E5D0;
    r0 = r4;
    r0 = sub_0800EECC(r0, r1, r2, r3); // 0x0804E5CC: BL 0x0800EECC
loc_0804E5D0:
    r1 = 0xCU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E5D4
    r1 = 0x03001B30U; // [0x0804E5E4]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E5DC
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r0 = 0x0U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r4 = r1;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E5F6
    r1 = 0x03003158U; // [0x0804E604]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E5FE
    return r0;
}

// ROM Address: 0x0804E604..0x0804E608 (4 bytes, Thumb)
u32 sub_0804E604(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x58U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0804E608..0x0804E954 (844 bytes, Thumb)
u32 sub_0804E608(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E610
    r1 = 0x030030ECU; // [0x0804E620]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E618
    return r0;
    r0 = r0;
    r0 += 0xECU;
    r0 = (r0 << 12);
    r3 = r0;
    r2 = 0x0U;
    *(u32*)(r3 + 0x4) = (u32)r2;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804E636: BL __call_via_r3
    return r0;
    r4 = r1;
    r1 = 0xEU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E644
    r1 = 0x03001B20U; // [0x0804E654]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E64C
    return r0;
    r0 = r0;
    r0 = r4 - r4;
    r0 = (r0 << 12);
    r4 = r1;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E660
    r1 = 0x03001B20U; // [0x0804E670]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E668
    return r0;
    r0 = r0;
    r0 = r4 - r4;
    r0 = (r0 << 12);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804E67C: BL 0x08046AA2
    return r0;
    r0 = r0;
    r4 = r1;
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E68C
    r1 = 0x030030D0U; // [0x0804E69C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E694
    return r0;
    r0 = r0;
    r0 += 0xD0U;
    r0 = (r0 << 12);
    r4 = r0;
    r5 = r1;
    r0 = sub_080342A8(r0, r1, r2, r3); // 0x0804E6A6
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804E6B4: BL 0x08046AA2
    r1 = *(u32*)(r4 + 0xC);
    r1 *= r0;
    r0 = ((u32)((s32)r1 >> 16));
    *(u32*)(r4 + 0x10) = (u32)r0;
    return r0;
    r0 = r0;
    r4 = r1;
    r1 = 0xCU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E6CC
    r1 = 0x03001B30U; // [0x0804E6DC]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E6D4
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x14);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804E6F0: BL __call_via_r3
    return r0;
    r0 = r0;
    r4 = r1;
    r1 = 0x15U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E700
    r1 = 0x03001B20U; // [0x0804E710]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E708
    return r0;
    r0 = r0;
    r0 = r4 - r4;
    r0 = (r0 << 12);
    r6 = 0x08759360U; // [0x0804E77C]
    r7 = r1;
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0804E71E
    r5 = 0x1U;
loc_0804E724:
    r5 = (r5 << 10);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_0804E776;
    r4 = (r5 << 2);
    r0 = r4;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0804E72E
    r4 = r0 + r4;
    r0 = 0xC; // sp + 0xC
    r1 = r7;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0804E738
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
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x37U;
    stack[7] = r1; // [sp + 0x1C]
    stack[8] = r0; // [sp + 0x20]
    r7 = 0x1C; // sp + 0x1C
    r1 = r7;
    stack[2] = r2; // [sp + 0x8]
    r3 = 0x4U;
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x0804E780]
    stack[0] = r4; // [sp + 0x0]
    stack[1] = r5; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0804E76A
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0804E772: BL 0x0801191A
loc_0804E776:
    return r0;
    r0 = r0;
    stack[96] = r3; // [sp + 0x180]
    r5 = (r6 >> 1);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0804E724;
    r7 = (r5 >> 1);
    r4 = r0;
    r2 = 0xCU;
    r1 = 0x0U;
    r0 += 0x4U;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x0804E78E: BL 0x08049168
    r0 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r0;
    return r0;
    r0 = r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r4 = r1;
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E7AC
    r1 = 0x03003264U; // [0x0804E7BC]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E7B4
    return r0;
    r0 = r0;
    r2 += 0x64U;
    r0 = (r0 << 12);
    r4 = r1;
    r1 = 0x15U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E7C8
    r1 = 0x03003128U; // [0x0804E7D8]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E7D0
    return r0;
    r0 = r0;
    r1 += 0x28U;
    r0 = (r0 << 12);
    r4 = r1;
    r1 += 0x160U;
    r0 = 0x0U;
    *(u16*)(r1 + 0x16) = (u16)r0;
    r1 = 0x15U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E7EC
    r1 = 0x03001B20U; // [0x0804E7FC]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E7F4
    return r0;
    r0 = r0;
    r0 = r4 - r4;
    r0 = (r0 << 12);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r4 = r1;
    r1 = 0x4U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E810
    r1 = 0x03003214U; // [0x0804E820]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E818
    return r0;
    r0 = r0;
    r2 += 0x14U;
    r0 = (r0 << 12);
    r0 += 0x4U;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r1 = *(u32*)(r1);
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r4 = r1;
    r1 = 0xEU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E83C
    r1 = 0x03003254U; // [0x0804E84C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E844
    return r0;
    r0 = r0;
    r2 += 0x54U;
    r0 = (r0 << 12);
    r0 = r1;
    r0 = sub_0800F924(r0, r1, r2, r3); // 0x0804E854
    return r0;
    r0 = r0;
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E864
    r1 = 0x030032A0U; // [0x0804E874]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E86C
    return r0;
    r0 = r0;
    r2 += 0xA0U;
    r0 = (r0 << 12);
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E880
    r1 = 0x03001B38U; // [0x0804E890]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E888
    return r0;
    r0 = r0;
    r0 = r7 - r4;
    r0 = (r0 << 12);
    r6 = 0x08759320U; // [0x0804E8FC]
    r7 = r1;
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0804E89E
    r5 = 0x1U;
loc_0804E8A4:
    r5 = (r5 << 10);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_0804E8F6;
    r4 = (r5 << 2);
    r0 = r4;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0804E8AE
    r4 = r0 + r4;
    r0 = 0xC; // sp + 0xC
    r1 = r7;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0804E8B8
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
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x37U;
    stack[7] = r1; // [sp + 0x1C]
    stack[8] = r0; // [sp + 0x20]
    r7 = 0x1C; // sp + 0x1C
    r1 = r7;
    stack[2] = r2; // [sp + 0x8]
    r3 = 0x4U;
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x0804E900]
    stack[0] = r4; // [sp + 0x0]
    stack[1] = r5; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0804E8EA
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0804E8F2: BL 0x0801191A
loc_0804E8F6:
    return r0;
    r0 = r0;
    stack[32] = r3; // [sp + 0x80]
    r5 = (r6 >> 1);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0804E8A4;
    r7 = (r5 >> 1);
    r4 = r1;
    r1 = 0xEU;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E90C
    r1 = 0x03003254U; // [0x0804E91C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E914
    return r0;
    r0 = r0;
    r2 += 0x54U;
    r0 = (r0 << 12);
    r3 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r3;
    r2 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    *(u32*)(r0 + 0x4) = (u32)r3;
    return r0; // BX lr
    r2 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0804E932
    return r0;
    r4 = r1;
    r0 = r1;
    r0 = sub_0800F924(r0, r1, r2, r3); // 0x0804E93E
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E946
    r1 = 0x0300325CU; // [0x0804E954]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E94E
    return r0;
}

// ROM Address: 0x0804E954..0x0804E958 (4 bytes, Thumb)
u32 sub_0804E954(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x5CU;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0804E958..0x0804E9E4 (140 bytes, Thumb)
u32 sub_0804E958(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E960
    r1 = 0x030030C8U; // [0x0804E970]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E968
    return r0;
    r0 = r0;
    r0 += 0xC8U;
    r0 = (r0 << 12);
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804E980: BL __call_via_r3
    return r0;
    r0 = r0;
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804E990
    r1 = 0x03003248U; // [0x0804E9A0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E998
    return r0;
    r0 = r0;
    r2 += 0x48U;
    r0 = (r0 << 12);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r0 = 0x208U; // (65 << 3)
    r0 = r1 + r0;
    r4 = r1;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r1 = *(u32*)(r1);
    *(u32*)(r0) = (u32)r1;
    r0 = 0x4U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0804E9C4
    r5 = r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804E9CC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804E9DA;
    r1 = 0x0804D3ECU; // [0x0804E9E4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
loc_0804E9DA:
    r1 = r0;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804E9DE
    return r0;
}

// ROM Address: 0x0804E9E4..0x0804E9E8 (4 bytes, Thumb)
u32 sub_0804E9E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0804E9C0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0804E9E8..0x0804EA08 (32 bytes, Thumb)
u32 sub_0804E9E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804E9F0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804E9FC;
    r1 = 0x0804BECCU /* &VTable_0804BECC */; // [0x0804EA08]
    *(u32*)(r0) = (u32)r1;
loc_0804E9FC:
    r1 = r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EA02
    return r0;
}

// ROM Address: 0x0804EA0A..0x0804EAF0 (230 bytes, Thumb)
u32 sub_0804EA0A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = *(u32*)(r0 + 0x4);
    r1 += 0x1C0U;
    *(u32*)(r1 + 0x24) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    return r0; // BX lr
    r0 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804EA36: BL __call_via_r3
    return r0;
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EA44
    r1 = 0x0300322CU; // [0x0804EA54]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EA4C
    return r0;
    r0 = r0;
    r2 += 0x2CU;
    r0 = (r0 << 12);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r4 = r1;
    r1 += 0x1C0U;
    r0 = 0x0U;
    *(u32*)(r1 + 0xC) = (u32)r0;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EA70
    r1 = 0x03001B30U; // [0x0804EA80]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EA78
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EA8C
    r1 = 0x03001B30U; // [0x0804EA9C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EA94
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r4 = r1;
    r1 += 0x1C0U;
    r0 = 0x0U;
    *(u32*)(r1 + 0xC) = (u32)r0;
    r1 = 0x11U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EAB0
    r1 = 0x03001B38U; // [0x0804EAC0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EAB8
    return r0;
    r0 = r0;
    r0 = r7 - r4;
    r0 = (r0 << 12);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r3 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r3;
    r2 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    r1 += 0x1A0U;
    r0 += 0x4U;
    r2 = *(u32*)r0; r0 += 4;
    *(u32*)r1 = r2; r1 += 4;
    r0 = *(u32*)(r0);
    *(u32*)(r1) = (u32)r0;
    r0 = 0x03003038U; // [0x0804EAF0]
    *(u32*)(r0) = (u32)r3;
    return r0; // BX lr
}

// ROM Address: 0x0804EAF0..0x0804EAF4 (4 bytes, Thumb)
u32 sub_0804EAF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x38U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0804EAF4..0x0804EC02 (270 bytes, Thumb)
u32 sub_0804EAF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x15U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EAFC
    r1 = 0x03003120U; // [0x0804EB0C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EB04
    return r0;
    r0 = r0;
    r1 += 0x20U;
    r0 = (r0 << 12);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EB20
    r1 = 0x03001B38U; // [0x0804EB30]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EB28
    return r0;
    r0 = r0;
    r0 = r7 - r4;
    r0 = (r0 << 12);
    return r0; // BX lr
    r0 = r0;
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EB40
    r1 = 0x03001B30U; // [0x0804EB50]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EB48
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r2 = r0;
    r3 = 0x0U;
    r2 += 0x4U;
    *(u32*)(r2) = (u32)r3;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804EB72: BL __call_via_r3
    return r0;
    r4 = r1;
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EB80
    r1 = 0x03001B30U; // [0x0804EB90]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EB88
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0804EB96
    return r0;
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804EBA6: BL __call_via_r3
    return r0;
    r4 = r1;
    r1 = 0x15U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EBB4
    r1 = 0x03003130U; // [0x0804EBC4]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EBBC
    return r0;
    r0 = r0;
    r1 += 0x30U;
    r0 = (r0 << 12);
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804EBD0
    r1 = 0x03001B30U; // [0x0804EBE0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EBD8
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r0 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    return r0; // BX lr
    r0 = r0;
    r4 = r1;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0804EBF0
    r0 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    return r0;
    r0 = r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x0804EC02..0x0804EC06 (4 bytes, Thumb)
u32 sub_0804EC02(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804EC0C..0x0804EC18 (12 bytes, Thumb)
u32 sub_0804EC0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = 0x03003234U; // [0x0804EC18]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804EC12
    return r0;
}

// ROM Address: 0x0804EC18..0x0804EC1E (6 bytes, Thumb)
u32 sub_0804EC18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x34U;
    r0 = (r0 << 12);
    return r0; // BX lr
}

// ROM Address: 0x0804EC22..0x0804EC9A (120 bytes, Thumb)
u32 sub_0804EC22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r2 = 0x18000U; // (3 << 15)
    r4 = r0;
    r1 = 0x0U;
    r0 = (r2 << 10);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0804EC38: BL 0x0804912C
    r1 = 0x04000052U /* &REG_BLDALPHA */; // [0x0804EC54]
    r0 = 0x0U;
    *(u8*)(r1) = (u8)r0;
    *(u8*)(r1 + 0x1) = (u8)r0;
    r0 = 0x00003F5FU; // [0x0804EC58]
    r1 -= 0x12U;
    *(u16*)(r1 + 0x10) = (u16)r0;
    r0 = r4;
    r0 = sub_0802574C(r0, r1, r2, r3); // 0x0804EC4C
    return r0;
    r0 = r0;
    r2 = (r2 << 1);
    r0 = (r0 << 16);
    r7 -= 0x5FU;
    r0 = r0;
    r2 = 0x18000U; // (3 << 15)
    r4 = r0;
    r1 = 0x0U;
    r0 = (r2 << 10);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0804EC68: BL 0x0804912C
    r1 = 0x04000052U /* &REG_BLDALPHA */; // [0x0804EC84]
    r0 = 0x0U;
    *(u8*)(r1) = (u8)r0;
    *(u8*)(r1 + 0x1) = (u8)r0;
    r0 = 0x00003F5FU; // [0x0804EC88]
    r1 -= 0x12U;
    *(u16*)(r1 + 0x10) = (u16)r0;
    r0 = r4;
    r0 = sub_08026212(r0, r1, r2, r3); // 0x0804EC7C
    return r0;
    r0 = r0;
    r2 = (r2 << 1);
    r0 = (r0 << 16);
    r7 -= 0x5FU;
    r0 = r0;
    r2 = 0x238U; // (71 << 3)
    r0 = r0 + r2;
    r0 = sub_0800AA9C(r0, r1, r2, r3); // 0x0804EC94
    return r0;
}

// ROM Address: 0x0804EC9A..0x0804EC9E (4 bytes, Thumb)
u32 sub_0804EC9A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804ECA4..0x0804ECBE (26 bytes, Thumb)
u32 sub_0804ECA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0 + r2;
    r0 = sub_0800AA9C(r0, r1, r2, r3); // 0x0804ECA8
    return r0;
    r0 = r0;
    r2 = 0x238U; // (71 << 3)
    r0 = r0 + r2;
    r0 = sub_0800AA4A(r0, r1, r2, r3); // 0x0804ECB8
    return r0;
}

// ROM Address: 0x0804ECBE..0x0804ECC2 (4 bytes, Thumb)
u32 sub_0804ECBE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804ECC8..0x0804ECE2 (26 bytes, Thumb)
u32 sub_0804ECC8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0 + r2;
    r0 = sub_0800AA4A(r0, r1, r2, r3); // 0x0804ECCC
    return r0;
    r0 = r0;
    r1 = 0x238U; // (71 << 3)
    r0 = r0 + r1;
    r0 = sub_0800AAD8(r0, r1, r2, r3); // 0x0804ECDC
    return r0;
}

// ROM Address: 0x0804ECE2..0x0804ECE6 (4 bytes, Thumb)
u32 sub_0804ECE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804ECEC..0x0804ECF6 (10 bytes, Thumb)
u32 sub_0804ECEC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0 + r1;
    r0 = sub_0800AAD8(r0, r1, r2, r3); // 0x0804ECF0
    return r0;
}

// ROM Address: 0x0804ECF6..0x0804ECFA (4 bytes, Thumb)
u32 sub_0804ECF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804ECFC..0x0804ED10 (20 bytes, Thumb)
u32 sub_0804ECFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804ED0E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804ED0A: BL __call_via_r3
loc_0804ED0E:
    return r0;
}

// ROM Address: 0x0804ED10..0x0804ED12 (2 bytes, Thumb)
u32 sub_0804ED10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804ED12..0x0804ED2C (26 bytes, Thumb)
u32 sub_0804ED12(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x0U;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804ED20: BL 0x08046AA2
    return r0;
    r0 = r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804ED2C..0x0804ED30 (4 bytes, Thumb)
u32 sub_0804ED2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804ED5A..0x0804ED60 (6 bytes, Thumb)
u32 sub_0804ED5A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804ED60..0x0804ED64 (4 bytes, Thumb)
u32 sub_0804ED60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0804ED6C..0x0804ED90 (36 bytes, Thumb)
u32 sub_0804ED6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_0803FADE(r0, r1, r2, r3); // 0x0804ED70
    return r0;
    r0 = r0;
    r3 = 0x200U; // (1 << 9)
    r2 = 0x03000F90U; // [0x0804ED94]
    r1 = r1 + r3;
    r1 = *(u32*)(r1 + 0x10);
    r2 = *(u32*)(r2 + 0x4);
    r0 = *(u32*)(r0 + 0xC);
    r1 = r2 - r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) return sub_0804ED90(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804ED90..0x0804ED94 (4 bytes, Thumb)
u32 sub_0804ED90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804ED94..0x0804ED96 (2 bytes, Thumb)
u32 sub_0804ED94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r2 >> 30);
    return r0;
}

// ROM Address: 0x0804ED96..0x0804EDAE (24 bytes, Thumb)
u32 sub_0804ED96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = 0x03000F90U; // [0x0804EDB4]
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x28);
    r2 = *(u32*)(r2 + 0x4);
    r0 = *(u32*)(r0 + 0xC);
    r1 = r2 - r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) return sub_0804EDAE(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804EDAE..0x0804EDB2 (4 bytes, Thumb)
u32 sub_0804EDAE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804EDB2..0x0804EDCE (28 bytes, Thumb)
u32 sub_0804EDB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r2 = 0x03000F90U; // [0x0804EDD4]
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x2C);
    r2 = *(u32*)(r2 + 0x4);
    r0 = *(u32*)(r0 + 0xC);
    r1 = r2 - r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) return sub_0804EDCE(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804EDCE..0x0804EDD2 (4 bytes, Thumb)
u32 sub_0804EDCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804EDD2..0x0804EDEC (26 bytes, Thumb)
u32 sub_0804EDD2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r2 = 0x28CU; // (163 << 2)
    r1 = r1 + r2;
    r0 = *(u32*)(r0 + 0x10);
    r1 = *(u32*)(r1);
    r0 = (r0 << 10);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0804EDEC(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804EDEC..0x0804EDF0 (4 bytes, Thumb)
u32 sub_0804EDEC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804EDF0..0x0804EE20 (48 bytes, Thumb)
u32 sub_0804EDF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x03002FE4U; // [0x0804EE00]
    r0 = 0x1U;
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0804EDFC;
    r0 = 0x0U;
loc_0804EDFC:
    return r0; // BX lr
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 228;
    r0 = (r0 << 12);
    r0 = 0x087593C8U; // [0x0804EE20]
    r4 = *(u32*)(r0);
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0804EE0E: BL 0x0800FDFA
    r4 += 0x80U;
    r1 = *(u32*)(r4 + 0x30);
    r0 = sp;
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0804EE18
    return r0;
}

// ROM Address: 0x0804EE20..0x0804EE22 (2 bytes, Thumb)
u32 sub_0804EE20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[200] = r3; // [sp + 0x320]
    return r0;
}

// ROM Address: 0x0804EE22..0x0804EE54 (50 bytes, Thumb)
u32 sub_0804EE22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r6 >> 1);
    r0 = 0x0300302CU; // [0x0804EE30]
    r1 = 0x1U;
    r0 = *(u32*)(r0);
    r0 = r1 - r0;
    return r0; // BX lr
    r0 = r0;
    r0 += 0x2CU;
    r0 = (r0 << 12);
    r0 = 0x0300302CU; // [0x0804EE3C]
    r0 = *(u32*)(r0);
    return r0; // BX lr
    r0 = r0;
    r0 += 0x2CU;
    r0 = (r0 << 12);
    r0 = 0x03001C34U; // [0x0804EE58]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0 + 0x58);
    r1 += 0x54U;
    r1 = *(u32*)(r1 + 0x54);
    r0 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0804EE54(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804EE54..0x0804EE58 (4 bytes, Thumb)
u32 sub_0804EE54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804EE58..0x0804EE5A (2 bytes, Thumb)
u32 sub_0804EE58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    return r0;
}

// ROM Address: 0x0804EE5A..0x0804EE6C (18 bytes, Thumb)
u32 sub_0804EE5A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x24);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0804EE6C(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804EE6C..0x0804EE70 (4 bytes, Thumb)
u32 sub_0804EE6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804EE70..0x0804EE84 (20 bytes, Thumb)
u32 sub_0804EE70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0804EE8C]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0 + 0x58);
    r1 += 0x54U;
    r1 = *(u32*)(r1 + 0x54);
    r0 = *(u32*)(r0 + 0x50);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0804EE84(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0804EE86(r0, r1, r2, r3);
}

// ROM Address: 0x0804EE84..0x0804EEA8 (36 bytes, Thumb)
u32 sub_0804EE84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = 0x1U;
    r0 = r1 - r0;
    return r0; // BX lr
    r4 = r6;
    r0 = (r0 << 12);
    r1 = 0x030032E4U; // [0x0804EEA0]
    r0 = 0x1U;
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0804EE9C;
    r0 = 0x0U;
loc_0804EE9C:
    return r0; // BX lr
    r0 = r0;
    r2 += 0xE4U;
    r0 = (r0 << 12);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804EEA8..0x0804EEAC (4 bytes, Thumb)
u32 sub_0804EEA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804EEAC..0x0804EEF8 (76 bytes, Thumb)
u32 sub_0804EEAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EEB2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EEC8;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r2 = 0x08049EECU /* &VTable_08049EEC */; // [0x0804EECC]
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_0804EEC8:
    return r0;
    r0 = r0;
    r6 = stack[236]; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r1 = r0;
    r0 = 0x0U;
    r0 = sub_08050544(r0, r1, r2, r3); // 0x0804EED6
    return r0;
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EEE2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EEF6;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = 0x0804A810U /* &VTable_0804A810 */; // [0x0804EEF8]
    *(u32*)(r0) = (u32)r1;
loc_0804EEF6:
    return r0;
}

// ROM Address: 0x0804EEF8..0x0804EEFC (4 bytes, Thumb)
u32 sub_0804EEF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x40; // sp + 0x40
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0804EEFC..0x0804EF1C (32 bytes, Thumb)
u32 sub_0804EEFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EF02: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EF1A;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r2 = 0x0804B348U /* &VTable_0804B348 */; // [0x0804EF1C]
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x14) = (u32)r1;
loc_0804EF1A:
    return r0;
}

// ROM Address: 0x0804EF20..0x0804EF44 (36 bytes, Thumb)
u32 sub_0804EF20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EF26: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EF40;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = 0x0804B994U /* &VTable_0804B994 */; // [0x0804EF44]
    *(u32*)(r0) = (u32)r1;
    r1 = 0xFFU;
    r1 += 0x2DU;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_0804EF40:
    return r0;
    r0 = r0;
    return r0;
}

// ROM Address: 0x0804EF48..0x0804EF68 (32 bytes, Thumb)
u32 sub_0804EF48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EF4E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EF66;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r2 = 0x0804B9A4U /* &VTable_0804B9A4 */; // [0x0804EF68]
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x14) = (u32)r1;
loc_0804EF66:
    return r0;
}

// ROM Address: 0x0804EF6C..0x0804F00A (158 bytes, Thumb)
u32 sub_0804EF6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EF72: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EF88;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r2 = 0x0804C878U /* &VTable_0804C878 */; // [0x0804EF8C]
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_0804EF88:
    return r0;
    r0 = r0;
    r3 = *(u32*)r0; r0 += 4;
    r4 = *(u32*)r0; r0 += 4;
    r5 = *(u32*)r0; r0 += 4;
    r6 = *(u32*)r0; r0 += 4;
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EF96: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EFAC;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r2 = 0x0804CD9CU /* &VTable_0804CD9C */; // [0x0804EFB0]
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_0804EFAC:
    return r0;
    r0 = r0;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r4 = *(u32*)r5; r5 += 4;
    r7 = *(u32*)r5; r5 += 4;
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EFBA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EFD4;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r2 = 0x0804D0E8U /* &VTable_0804D0E8 */; // [0x0804EFD8]
    *(u32*)(r0 + 0x14) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x18) = (u32)r1;
loc_0804EFD4:
    return r0;
    r0 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EFAC;
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804EFE2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804EFFC;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r2 = 0x0804D504U /* &VTable_0804D504 */; // [0x0804F000]
    *(u32*)(r0 + 0x14) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x18) = (u32)r1;
loc_0804EFFC:
    return r0;
    r0 = r0;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0804F00C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r5 = r0;
    r0 = 0x10U;
    return r0;
}

// ROM Address: 0x0804F00E..0x0804F016 (8 bytes, Thumb)
u32 sub_0804F00E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0804F016(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0804F016..0x0804F02E (24 bytes, Thumb)
u32 sub_0804F016(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x0804DEDCU /* &VTable_0804DEDC */; // [0x0804F030]
    *(u32*)(r4 + 0x4) = (u32)r5;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x78U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0804F022
    r0 += 0xF0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = r4;
    return sub_0804F014(r0, r1, r2, r3);
}

// ROM Address: 0x0804F034..0x0804F046 (18 bytes, Thumb)
u32 sub_0804F034(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804F03A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0804F046(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0804F046..0x0804F05E (24 bytes, Thumb)
u32 sub_0804F046(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x0804E1A4U /* &VTable_0804E1A4 */; // [0x0804F060]
    *(u32*)(r4 + 0x4) = (u32)r5;
    *(u32*)(r4) = (u32)r0;
    r0 = 0xB4U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0804F052
    r0 += 0x78U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = r4;
    return sub_0804F044(r0, r1, r2, r3);
}

// ROM Address: 0x0804F066..0x0804F06C (6 bytes, Thumb)
u32 sub_0804F066(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804F06C..0x0804F070 (4 bytes, Thumb)
u32 sub_0804F06C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804F07C..0x0804F090 (20 bytes, Thumb)
u32 sub_0804F07C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804F08E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804F08A: BL __call_via_r3
loc_0804F08E:
    return r0;
}

// ROM Address: 0x0804F090..0x0804F092 (2 bytes, Thumb)
u32 sub_0804F090(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F094..0x0804F09C (8 bytes, Thumb)
u32 sub_0804F094(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F096: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F09C..0x0804F09E (2 bytes, Thumb)
u32 sub_0804F09C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F0A8..0x0804F0C0 (24 bytes, Thumb)
u32 sub_0804F0A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F0AA: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F0B2: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F0BA: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F0C0..0x0804F0C2 (2 bytes, Thumb)
u32 sub_0804F0C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F0C8..0x0804F0D0 (8 bytes, Thumb)
u32 sub_0804F0C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F0CA: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F0D0..0x0804F0D2 (2 bytes, Thumb)
u32 sub_0804F0D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F0D4..0x0804F0DC (8 bytes, Thumb)
u32 sub_0804F0D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F0D6: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F0DC..0x0804F0DE (2 bytes, Thumb)
u32 sub_0804F0DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F0E4..0x0804F114 (48 bytes, Thumb)
u32 sub_0804F0E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F0E6: BL 0x0803D63C
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804F0FE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804F0FA: BL __call_via_r3
loc_0804F0FE:
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804F112;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804F10E: BL __call_via_r3
loc_0804F112:
    return r0;
}

// ROM Address: 0x0804F114..0x0804F116 (2 bytes, Thumb)
u32 sub_0804F114(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F11C..0x0804F124 (8 bytes, Thumb)
u32 sub_0804F11C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F11E: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F124..0x0804F126 (2 bytes, Thumb)
u32 sub_0804F124(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F128..0x0804F148 (32 bytes, Thumb)
u32 sub_0804F128(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F12A: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F132: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F13A: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F142: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F148..0x0804F14A (2 bytes, Thumb)
u32 sub_0804F148(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F14C..0x0804F15C (16 bytes, Thumb)
u32 sub_0804F14C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F14E: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F156: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F15C..0x0804F15E (2 bytes, Thumb)
u32 sub_0804F15C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F168..0x0804F170 (8 bytes, Thumb)
u32 sub_0804F168(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F16A: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F170..0x0804F172 (2 bytes, Thumb)
u32 sub_0804F170(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F17C..0x0804F184 (8 bytes, Thumb)
u32 sub_0804F17C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F17E: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F184..0x0804F186 (2 bytes, Thumb)
u32 sub_0804F184(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F18C..0x0804F19C (16 bytes, Thumb)
u32 sub_0804F18C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F18E: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F196: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F19C..0x0804F19E (2 bytes, Thumb)
u32 sub_0804F19C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F1B8..0x0804F1C0 (8 bytes, Thumb)
u32 sub_0804F1B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F1BA: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F1C0..0x0804F1C2 (2 bytes, Thumb)
u32 sub_0804F1C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F1C4..0x0804F1E4 (32 bytes, Thumb)
u32 sub_0804F1C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0877B134U; // [0x0804F1E4]
    r1 = 0x0U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08009692(r0, r1, r2, r3); // 0x0804F1CE
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_0804F1E2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804F1DE: BL __call_via_r3
loc_0804F1E2:
    return r0;
}

// ROM Address: 0x0804F210..0x0804F260 (80 bytes, Thumb)
u32 sub_0804F210(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0804F240;
    r0 = 0x0804AAF4U /* &VTable_0804AAF4 */; // [0x0804F244]
    r5 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0804F23A;
loc_0804F222:
    r0 = (r5 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804F22E: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0x8);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0804F222;
loc_0804F23A:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F23C: BL 0x0803D63C
loc_0804F240:
    return r0;
    r0 = r0;
    r2 = 0x3D0; // sp + 0x3D0
    r4 = (r0 >> 32);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F24A: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F252: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F25A: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F260..0x0804F262 (2 bytes, Thumb)
u32 sub_0804F260(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F264..0x0804F274 (16 bytes, Thumb)
u32 sub_0804F264(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F266: BL 0x0803D63C
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F26E: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0804F274..0x0804F276 (2 bytes, Thumb)
u32 sub_0804F274(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804F278..0x0804F280 (8 bytes, Thumb)
u32 sub_0804F278(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804F27A: BL 0x0803D63C
    return r0;
}
