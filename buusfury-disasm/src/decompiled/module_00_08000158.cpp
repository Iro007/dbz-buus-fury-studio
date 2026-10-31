/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #00
 * Address Range: 0x08000158..0x0800547E (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08000158..0x080001D0 (120 bytes, Thumb)
u32 sub_08000158(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 10;
    if (cmp_lhs < cmp_rhs) goto loc_0800016A;
    r1 = 0x086B6BDCU; // [0x080003C0]
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 -= 0x40U;
    r0 = *(u32*)(r0 + 0x18);
    return r0;
loc_0800016A:
    r4 = 0x4F8U; // (159 << 3)
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r2 = 0x086B82ECU; // [0x080003C4]
    r1 = 0x08054FBCU; // [0x080003C8]
    if (cmp_lhs != cmp_rhs) goto loc_0800019E;
    r0 = 0x03001C34U; // [0x080003CC]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000182;
    r0 = *(u32*)(r0 + 0x58);
    return r0;
loc_08000182:
    r0 = *(u32*)(r1 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r0 = r0 + r4;
    r0 = *(u8*)(r0 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r2;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x08000198
    return r0;
loc_0800019E:
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if (cmp_lhs >= cmp_rhs) goto loc_080001BE;
    r0 -= 0x1U;
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0x14);
    r0 *= r3;
    r0 = r0 + r1;
    r0 = r0 + r4;
    r0 = *(u8*)(r0 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r2;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x080001B8
    return r0;
loc_080001BE:
    r0 = 0x03001BACU; // [0x080003D0]
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x58);
    return r0;
    r4 = 0x08054FBCU; // [0x080003C8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_080001DC(r0, r1, r2, r3);
    r0 += 0x1U;
    return r0;
}

// ROM Address: 0x080001D2..0x080003C0 (494 bytes, Thumb)
u32 sub_080001D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x18);
    r1 = 0x7U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x080001D6
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080001EC;
    r1 = 0x03001C34U; // [0x080003CC]
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080001F6;
    r0 = r1;
    return r0;
loc_080001EC:
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if (cmp_lhs != cmp_rhs) goto loc_080001F6;
    r0 = 0x03001BACU; // [0x080003D0]
    r0 = *(u32*)(r0);
    return r0;
loc_080001F6:
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080001F6: BL 0x08000158
    r2 = r0;
    r0 = *(u32*)(r4 + 0x18);
    r1 = 0x5U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08000200
    return r0;
    r1 = 0x03001058U; // [0x080003D4]
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001058U; // [0x080003D4]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001058U; // [0x080003D4]
    r2 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001058U; // [0x080003D4]
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001058U; // [0x080003D4]
    r2 = *(u32*)(r1 + 0x8);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001058U; // [0x080003D4]
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001058U; // [0x080003D4]
    r2 = *(u32*)(r1 + 0xC);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001058U; // [0x080003D4]
    *(u32*)(r1 + 0xC) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001030U; // [0x080003D8]
    r1 = *(u32*)(r1);
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001030U; // [0x080003D8]
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001030U; // [0x080003D8]
    r1 = *(u32*)(r1);
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001030U; // [0x080003D8]
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001030U; // [0x080003D8]
    r1 = *(u32*)(r1);
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001030U; // [0x080003D8]
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x8);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001030U; // [0x080003D8]
    r1 = *(u32*)(r1);
    *(u32*)(r1 + 0xC) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001030U; // [0x080003D8]
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0xC);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001020U; // [0x080003DC]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001020U; // [0x080003DC]
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001020U; // [0x080003DC]
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001020U; // [0x080003DC]
    r2 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001020U; // [0x080003DC]
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001020U; // [0x080003DC]
    r2 = *(u32*)(r1 + 0x8);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03001020U; // [0x080003DC]
    *(u32*)(r1 + 0xC) = (u32)r0;
    return r0; // BX lr
    r1 = 0x03001020U; // [0x080003DC]
    r2 = *(u32*)(r1 + 0xC);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x080003C8]
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 += 0x16U;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r1 + r3));
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x080003C8]
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 += 0x18U;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r1 + r3));
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x080003C8]
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 += 0x1CU;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r1 + r3));
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x080003C8]
    r2 = 0x000004F4U; // [0x080003E0]
    r1 = *(u32*)(r1 + 0x14);
    r1 = r1 + r2;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
}

// ROM Address: 0x080003C0..0x080003C2 (2 bytes, Thumb)
u32 sub_080003C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r3 + 0x3C);
    return r0;
}

// ROM Address: 0x080003C2..0x080003FC (58 bytes, Thumb)
u32 sub_080003C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r5 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r7 = 0x43634A86U; // [0x080006BC]
    r5 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    r4 = r5 - r6;
    r0 = (r0 << 12);
    r0 = ((u32)((s32)r3 >> 1));
    r0 = (r0 << 12);
    r0 = ((u32)((s32)r6 >> 32));
    r0 = (r0 << 12);
    r0 = ((u32)((s32)r4 >> 32));
    r0 = (r0 << 12);
    r4 = (r6 << 19);
    r0 = r0;
    r1 = 0x03002BB0U; // [0x08000660]
    r2 = *(u8*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03002BB0U; // [0x08000660]
    *(u8*)(r1) = (u8)r0;
    return r0; // BX lr
}

// ROM Address: 0x080003FC..0x0800045E (98 bytes, Thumb)
u32 sub_080003FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x03001C34U; // [0x08000664]
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800041C;
    r0 = 0x08054FBCU; // [0x08000668]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    goto loc_0800043A;
loc_0800041C:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0800042C;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x7C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08000428: BL 0x08046AA2
loc_0800042C:
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08000436: BL 0x08046AA2
loc_0800043A:
    r1 = r0;
    r1 += 0x16U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08000450;
    r2 = 0x0U;
loc_08000444:
    *(u16*)(r1) = (u16)r2;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08000444;
    return sub_0800046C(r0, r1, r2, r3);
loc_08000450:
    r3 = 0x2U;
    r2 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_0800045E(r0, r1, r2, r3);
    r2 = *(u16*)(r1 + 0x2);
    *(u16*)(r1) = (u16)r2;
    return sub_0800046C(r0, r1, r2, r3);
}

// ROM Address: 0x0800045E..0x080004F8 (154 bytes, Thumb)
u32 sub_0800045E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r4 << 16);
    r2 = ((u32)((s32)r2 >> 16));
loc_08000462:
    *(u16*)(r1) = (u16)r2;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08000462;
    r1 = *(u8*)(r0 + 0x13);
    r1 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08000476;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x08000472
loc_08000476:
    return r0;
    r2 = r0;
    r0 = 0x08054FBCU; // [0x08000668]
    r0 = *(u32*)(r0 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r2 = (r2 << 16);
    r2 = ((u32)((s32)r2 >> 16));
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = r0;
    r1 += 0x16U;
    r5 = r2;
loc_08000498:
    *(u16*)(r1) = (u16)r2;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08000498;
    r2 = r5;
loc_080004A4:
    *(u16*)(r1 + 0x2) = (u16)r2;
    r3 = 0x2U;
    r4 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080004A4;
    r1 = *(u8*)(r0 + 0x13);
    r1 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080004B8;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x080004B4
loc_080004B8:
    return r0;
    r1 = 0x08054FBCU; // [0x08000668]
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x68U;
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r2 = *(u8*)(r1 + 0x14);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r3 = 0x086B82ECU; // [0x0800066C]
    r2 = (r2 << 3);
    r2 = r2 + r3;
    r3 = *(u8*)(r2);
    r4 = *(u32*)(r0);
    r2 = (r3 << 30);
    r5 = (r2 >> 31);
    r2 = r4 + 1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080004F8(r0, r1, r2, r3);
    r1 += 0x20U;
    r1 = *(u16*)(r1);
    *(u32*)(r0) = (u32)r2;
    r2 = (r4 << 2);
    r0 = r2 + r0;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x080004F8..0x0800051A (34 bytes, Thumb)
u32 sub_080004F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r3 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800050A;
    r1 += 0x1EU;
    r1 = *(u16*)(r1);
    *(u32*)(r0) = (u32)r2;
    r2 = (r4 << 2);
    r0 = r2 + r0;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return sub_080004F4(r0, r1, r2, r3);
loc_0800050A:
    r1 += 0x1AU;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r1 + r3));
    *(u32*)(r0) = (u32)r2;
    r2 = (r4 << 2);
    r0 = r2 + r0;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return sub_080004F4(r0, r1, r2, r3);
}

// ROM Address: 0x0800051A..0x08000568 (78 bytes, Thumb)
u32 sub_0800051A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08054FBCU; // [0x08000668]
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x68U;
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08000534;
    r0 = 0x0U;
loc_08000534:
    r2 = r1;
    r2 += 0x1CU;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r2 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08000542;
    r0 = (u32)(*(s16*)(r2 + r3));
loc_08000542:
    r2 = *(u8*)(r1 + 0x14);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r3 = 0x086B82ECU; // [0x0800066C]
    r2 = (r2 << 3);
    r2 = r2 + r3;
    r2 = *(u8*)(r2);
    r3 = (r2 << 30);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08000568(r0, r1, r2, r3);
    r1 += 0x20U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_0800055C:
    *(u16*)(r1) = (u16)r0;
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800055C;
    return r0; // BX lr
}

// ROM Address: 0x08000568..0x0800058E (38 bytes, Thumb)
u32 sub_08000568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r2 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800057C;
    r1 += 0x1EU;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_08000572:
    *(u16*)(r1) = (u16)r0;
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08000572;
    return sub_08000564(r0, r1, r2, r3);
loc_0800057C:
    r1 += 0x1AU;
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
loc_08000582:
    *(u16*)(r1) = (u16)r0;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08000582;
    return sub_08000564(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_ram_write_slot_pair1_writes_the_argument_at_the_slot_and_the_next_halfword runs it with 0x1234 in r0 and asserts the two halfword stores; 0x08000592 loads the slot table from the word at 0x08054FBC+0x14, 0x08000596-0x080005A6 index it by a count byte with stride 0x68 and add 0x512, and 0x080005AA / 0x080005B6 store the argument at the slot and at its +2 halfword, each one confirmed by reading it back
// ROM Address: 0x0800058E..0x08000660 (210 bytes, Thumb)
u32 Ram_WriteSlotPair1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08054FBCU; // [0x08000668]
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x68U;
    r2 = *(u8*)(r1);
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 += 0x1AU;
    r4 = r0;
loc_080005AA:
    *(u16*)(r1) = (u16)r0;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080005AA;
    r0 = r4;
loc_080005B6:
    *(u16*)(r1 + 0x2) = (u16)r0;
    r3 = 0x2U;
    r2 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080005B6;
    return r0; // BX lr
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080005CA;
    r0 = 0x0U;
loc_080005CA:
    r1 = 0x08054FBCU; // [0x08000668]
    r2 = 0x000004F4U; // [0x08000670]
    r1 = *(u32*)(r1 + 0x14);
    r1 = r1 + r2;
loc_080005D2:
    *(u32*)(r1) = (u32)r0;
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080005D2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08000668]
    r1 = *(u32*)(r1 + 0xC);
    r2 = *(u8*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08000668]
    r1 = *(u32*)(r1 + 0xC);
    r2 = *(u8*)(r1 + 0x1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08000668]
    r1 = *(u32*)(r1 + 0xC);
    r2 = *(u8*)(r1 + 0x2);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08000668]
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u8*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08000668]
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 = *(u8*)(r1 + 0x14);
    r2 = 0x086B82ECU; // [0x0800066C]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u16*)(r1 + 0x2);
    r2 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08000674]
    r1 = (r1 << 2);
    r2 = *(u32*)(r2 + r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
}

// ROM Address: 0x08000660..0x08000662 (2 bytes, Thumb)
u32 sub_08000660(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 176;
    return r0;
}

// ROM Address: 0x08000662..0x08000B1C (1210 bytes, Thumb)
u32 sub_08000662(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r4 = r6;
    r0 = (r0 << 12);
    r7 = 0x008A3901U; // [0x0800095C]
    r5 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r4 = (r6 << 19);
    r0 = r0;
    r6 = (r0 >> 32);
    r1 = 0x08054FBCU; // [0x080008D8]
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 = *(u8*)(r1 + 0x14);
    r2 = 0x086B82ECU; // [0x080008DC]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u16*)(r1 + 0x4);
    r2 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080008E0]
    r1 = (r1 << 2);
    r2 = *(u32*)(r2 + r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r3 = 0x68U;
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r4 = *(u32*)(r2 + 0x4);
    r2 = 0x08054FBCU; // [0x080008D8]
    r3 *= r4;
    r2 = *(u32*)(r2 + 0x14);
    r2 = r3 + r2;
    r3 = 0x4F8U; // (159 << 3)
    r2 = r2 + r3;
    r2 = *(u8*)(r2 + 0x14);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r3 = 0x086B82ECU; // [0x080008DC]
    r2 = (r2 << 3);
    r2 = r2 + r3;
    r2 = *(u16*)(r2 + 0x2);
    r3 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080008E0]
    r2 = (r2 << 2);
    r2 = *(u32*)(r3 + r2);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x03002A60U; // [0x080008E4]
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r4 = r0;
    r0 = 0x08054FBCU; // [0x080008D8]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x08000714
    r1 = *(u32*)(r4);
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r1 = r1 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0;
    r1 = *(u32*)(r0);
    r1 = (r1 << 2);
    r4 = r1 + r0;
    r0 = *(u32*)(r4);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08000730
    *(u32*)(r4) = (u32)r0;
    return r0;
    r1 = *(u32*)(r0);
    r3 = 0x00028F5DU; // [0x080008E8]
    r1 = (r1 << 2);
    r4 = r1 + r0;
    r0 = *(u32*)(r4);
    r0 *= r3;
    r0 = ((u32)((s32)r0 >> 8));
    r0 = sub_0803FADE(r0, r1, r2, r3); // 0x08000748
    *(u32*)(r4) = (u32)r0;
    return r0;
    r1 = *(u32*)(r0);
    r4 = 0x087B6EECU; // [0x080008EC]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r3 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = (r2 << 24);
    r2 = (r2 >> 22);
    r3 = r3 + r0;
    r3 = *(u32*)(r3 + 0x4);
    r2 = *(u32*)(r4 + r2);
    r2 *= r3;
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r2 = ((u32)((s32)r2 >> 16));
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r4 = 0x087B6EECU; // [0x080008EC]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 += 0x40U;
    r2 = (r2 << 24);
    r3 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r3 = r3 + r0;
    r2 = (r2 >> 22);
    r2 = *(u32*)(r4 + r2);
    r3 = *(u32*)(r3 + 0x4);
    r2 *= r3;
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r2 = ((u32)((s32)r2 >> 16));
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 = (r1 << 2);
    r4 = r1 + r0;
    r0 = 0x08054FBCU; // [0x080008D8]
    r1 = *(u32*)(r4);
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08004364(r0, r1, r2, r3); // 0x080007C4
    *(u32*)(r4) = (u32)r0;
    return r0;
    r1 = *(u32*)(r0);
    r1 = (r1 << 2);
    r4 = r1 + r0;
    r0 = 0x08054FBCU; // [0x080008D8]
    r1 = *(u32*)(r4);
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08004364(r0, r1, r2, r3); // 0x080007DA
    r1 = 0x1U;
    r0 = r1 - r0;
    *(u32*)(r4) = (u32)r0;
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x080008D8]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08004380(r0, r1, r2, r3); // 0x080007F8: BL 0x08004380
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x080008D8]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08004396(r0, r1, r2, r3); // 0x08000810
    return r0;
    r1 = 0x08054FBCU; // [0x080008D8]
    r4 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r2 = 0x40U;
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x083192A8U; // [0x080008F0]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x080008F4]
    r3 = 0x0U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800083A
    return r0;
    r1 = *(u32*)(r0);
    r4 = 0x000005C4U; // [0x080008F4]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x080008D8]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r3 = 0x083192A8U; // [0x080008F0]
    r1 = (r1 << 2);
    r1 = r1 + r3;
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x0U;
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800086C
    return r0;
    r1 = 0x08054FBCU; // [0x080008D8]
    r2 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x083192A8U; // [0x080008F0]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x080008F4]
    r0 = r2 + r0;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x08000892
    return r0;
    r0 = 0x08054FBCU; // [0x080008D8]
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x000005C4U; // [0x080008F4]
    r0 = r0 + r1;
    r0 = sub_0803E2EC(r0, r1, r2, r3); // 0x080008A2
    return r0;
    r1 = r0;
    r2 = *(u32*)(r1);
    r0 = 0x08054FBCU; // [0x080008D8]
    r2 -= 0x1U;
    r0 = *(u32*)(r0 + 0x8);
    *(u32*)(r1) = (u32)r2;
    r2 = (r2 << 2);
    r1 = r2 + r1;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x083BB78CU; // [0x080008F8]
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r1 = r1 + r2;
    r2 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080008D2;
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080008D6;
loc_080008D2:
    r0 = sub_0803F110(r0, r1, r2, r3); // 0x080008D2
loc_080008D6:
    return r0;
    r7 = 0x39016801U; // [0x08000BCC]
    r5 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r6 = (r0 >> 32);
    cmp_lhs = (s32)r2; cmp_rhs = 96;
    r0 = (r0 << 12);
    r5 = *(u16*)(r3 + 0x3A);
    r2 = r0;
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r3 = (r7 >> 32);
    r0 = 0x08054FBCU; // [0x08000B74]
    r1 = *(u32*)(r0 + 0x8);
    r0 = 0x0U;
    *(u8*)(r1 + 0x5) = (u8)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x24);
    r0 = sub_080096AC(r0, r1, r2, r3); // 0x08000918
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x24);
    r0 = sub_08009692(r0, r1, r2, r3); // 0x08000930
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x24);
    r0 = sub_080096C4(r0, r1, r2, r3); // 0x08000952
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x24);
    r0 = sub_08009728(r0, r1, r2, r3); // 0x08000974
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x24);
    r0 = sub_080096EA(r0, r1, r2, r3); // 0x08000996
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x08054FBCU; // [0x08000B74]
    r4 = *(u32*)(r0 + 0x24);
    r0 = sp;
    r4 += 0x80U;
    r1 = *(u32*)(r4 + 0x28);
    r2 = 0x1U;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x080009E4
    r2 = 0x1U;
    r0 = sp;
    r1 = *(u32*)(r4 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x080009EE
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x08054FBCU; // [0x08000B74]
    r4 = *(u32*)(r0 + 0x24);
    r0 = sp;
    r4 += 0x80U;
    r1 = *(u32*)(r4 + 0x28);
    r2 = 0x0U;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08000A3E
    r2 = 0x0U;
    r0 = sp;
    r1 = *(u32*)(r4 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08000A48
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x24);
    r0 += 0x80U;
    r1 = *(u32*)(r0 + 0x2C);
    r0 = 0x4; // sp + 0x4
    r2 = 0x1U;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08000A98
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x24);
    r0 += 0x80U;
    r1 = *(u32*)(r0 + 0x2C);
    r0 = 0x4; // sp + 0x4
    r2 = 0x0U;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08000AE8
    return r0;
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_080046F4(r0, r1, r2, r3); // 0x08000AF6
    return r0;
    r0 = 0x08054FBCU; // [0x08000B74]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08004764(r0, r1, r2, r3); // 0x08000B02
    return r0;
    r1 = *(u32*)(r0);
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x08054FBCU; // [0x08000B74]
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1 + 0x14);
    r1 = r1 + r2;
    r1 = *(u8*)(r1 + 0x2);
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x08000B1C..0x08000B40 (36 bytes, Thumb)
u32 sub_08000B1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r5 = 0x08054FBCU; // [0x08000B74]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r5 + 0x14);
    r2 = 0xFFU;
    r0 = r0 + r4;
    r1 = *(u8*)(r0 + 0x2);
    r2 += 0x1U;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_08000B40(r0, r1, r2, r3);
    *(u8*)(r0 + 0x2) = (u8)r1;
    return sub_08000B44(r0, r1, r2, r3);
}

// ROM Address: 0x08000B40..0x08000C80 (320 bytes, Thumb)
u32 sub_08000B40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000B46: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000B5A;
    r1 = 0x0804C83CU; // [0x08000B78]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    *(u32*)(r0 + 0xC) = (u32)r4;
loc_08000B5A:
    r1 = r0;
    r0 = 0x03001C34U; // [0x08000B7C]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000B6A;
    r2 = r0;
    r2 += 0x18CU;
loc_08000B6A:
    r0 = *(u32*)(r5 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000B6C
    return r0;
    r0 = r0;
    r7 = 0x1C211C3AU; // [0x08000E68]
    r5 = (r0 >> 32);
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r4 = *(u32*)r0; r0 += 4;
    r5 = *(u32*)r0; r0 += 4;
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x08054FBCU; // [0x08000E04]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0x14);
    r0 = r1 + r0;
    r1 = *(u8*)(r0 + 0x2);
    r1 = r1 + r2;
    r2 = 0xFFU;
    r2 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08000BAC;
    *(u8*)(r0 + 0x2) = (u8)r1;
    return r0; // BX lr
loc_08000BAC:
    r1 = 0xFFU;
    *(u8*)(r0 + 0x2) = (u8)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x08054FBCU; // [0x08000E04]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0x14);
    r0 = r1 + r0;
    r1 = *(u8*)(r0 + 0x2);
    r1 += 0xFFU;
    *(u8*)(r0 + 0x2) = (u8)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x08054FBCU; // [0x08000E04]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0x14);
    r0 = r1 + r0;
    r1 = *(u8*)(r0 + 0x2);
    r1 = r1 - r2;
    *(u8*)(r0 + 0x2) = (u8)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r3 = 0x0; // sp + 0x0
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u16*)(r3 + 0x2) = (u16)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u16*)(r3) = (u16)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08000C1C: BL 0x08000158
    r1 = r0;
    r0 = 0x0U;
    r2 = sp;
    r0 = sub_0801111C(r0, r1, r2, r3); // 0x08000C26: BL 0x0801111C
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08000E04]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x08000C30: BL 0x0801191A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08000E04]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08009108(r0, r1, r2, r3); // 0x08000C48
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r5 = 0x08054FBCU; // [0x08000E04]
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_08000C80(r0, r1, r2, r3);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08000C64: BL 0x08000158
    r2 = r0;
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x5U;
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x08000C6E
    r1 = *(u32*)(r4);
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r1 = r1 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0;
}

// ROM Address: 0x08000C80..0x08000C9A (26 bytes, Thumb)
u32 sub_08000C80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x1U;
    r2 = (u32)(-(s32)r0);
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x7U;
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x08000C88
    r1 = *(u32*)(r4);
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r1 = r1 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return sub_08000C7E(r0, r1, r2, r3);
}

// ROM Address: 0x08000C9A..0x08000D02 (104 bytes, Thumb)
u32 sub_08000C9A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08054FBCU; // [0x08000E04]
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_08019348(r0, r1, r2, r3); // 0x08000CA0
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000CB4
    r4 = 0x03001004U /* &g_SramPresentFlag */; // [0x08000E08]
    r5 = r0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08000CD6;
    r0 = 0x28U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000CC4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000CD4;
    r1 = 0x0804DEECU /* &VTable_0804DEEC */; // [0x08000E0C]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08000CD4:
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_08000CD6:
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x4U;
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r5;
    return r0;
    r5 = 0x03001004U /* &g_SramPresentFlag */; // [0x08000E08]
    r4 = 0x08054FBCU; // [0x08000E04]
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08000D02(r0, r1, r2, r3);
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08000CF4
    r1 = *(u32*)(r4 + 0x1C);
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    return r0;
}

// ROM Address: 0x08000D02..0x08000D0A (8 bytes, Thumb)
u32 sub_08000D02(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x1C);
    r0 = sub_0801934E(r0, r1, r2, r3); // 0x08000D04
    return sub_08000D00(r0, r1, r2, r3);
}

// ROM Address: 0x08000D0A..0x080010F0 (998 bytes, Thumb)
u32 sub_08000D0A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000D2E: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000D42;
    r1 = 0x0804C7D8U; // [0x08000E10]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08000D42:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000D46
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000D54;
    r7 = r0;
    r7 += 0x18CU;
loc_08000D54:
    r0 = 0x08054FBCU; // [0x08000E04]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000D5C
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r4 = (r2 << 24);
    r4 = (r4 >> 24);
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000D80: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000D92;
    *(u32*)(r0 + 0x4) = (u32)r6;
    r1 = 0x0804D818U /* &VTable_0804D818 */; // [0x08000E14]
    *(u8*)(r0 + 0x8) = (u8)r4;
    *(u32*)(r0) = (u32)r1;
loc_08000D92:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000D96
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000DA4;
    r6 = r0;
    r6 += 0x18CU;
loc_08000DA4:
    r0 = 0x08054FBCU; // [0x08000E04]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000DAC
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r4 = (r2 << 24);
    r4 = (r4 >> 24);
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000DD0: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000DE2;
    r1 = 0x0804E0E8U; // [0x08000E18]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u8*)(r0 + 0x8) = (u8)r4;
loc_08000DE2:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000DE6
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000DF4;
    r6 = r0;
    r6 += 0x18CU;
loc_08000DF4:
    r0 = 0x08054FBCU; // [0x08000E04]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000DFC
    return r0;
    r0 = r0;
    r7 = 0x0804DCF4U /* &VTable_0804DCF4 */; // [0x080010F8]
    r5 = (r0 >> 32);
    r4 = ((u32)((s32)r0 >> 32));
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    *(u32*)r7 = r3; r7 += 4;
    *(u32*)r7 = r4; r7 += 4;
    *(u32*)r7 = r6; r7 += 4;
    *(u32*)r7 = r7; r7 += 4;
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08000E48;
    r4 = (r0 >> 32);
    goto loc_08000FEC;
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000E40: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
loc_08000E48:
    if (cmp_lhs == cmp_rhs) goto loc_08000E54;
    r1 = 0x0804C414U; // [0x080010E8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08000E54:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000E58
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000E66;
    r7 = r0;
    r7 += 0x18CU;
loc_08000E66:
    r0 = 0x08054FBCU; // [0x080010EC]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000E6E
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000E84: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000EA0;
    r1 = 0x0804B2B4U; // [0x080010F0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r1 = 0x08054FBCU; // [0x080010EC]
    r0 -= 0x8U;
    r1 += 0x2CU;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r2;
loc_08000EA0:
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000EA4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000EB2;
    r6 = r0;
    r6 += 0x18CU;
loc_08000EB2:
    r0 = 0x08054FBCU; // [0x080010EC]
    r2 = r6;
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000EBA
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000EE4: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000EF8;
    r1 = 0x0804B2B4U; // [0x080010F0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08000EF8:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000EFC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000F0A;
    r7 = r0;
    r7 += 0x18CU;
loc_08000F0A:
    r0 = 0x08054FBCU; // [0x080010EC]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000F12
    return r0;
    r2 = *(u32*)(r0);
    r1 = r0;
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r0 = (r2 << 2);
    r0 = r0 + r1;
    r4 = *(u32*)(r0 + 0x4);
    r2 -= 0x1U;
    r0 = (r2 << 2);
    *(u32*)(r1) = (u32)r2;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r1) = (u32)r2;
    r2 = (r2 << 2);
    r1 = r2 + r1;
    r6 = *(u32*)(r1 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000F3C
    r5 = r0;
    r0 = 0x20U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000F44: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000F58;
    r1 = 0x0804DCE0U; // [0x080010F4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x14) = (u32)r4;
    *(u32*)(r0 + 0x1C) = (u32)r5;
loc_08000F58:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000F5C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000F6A;
    r7 = r0;
    r7 += 0x18CU;
loc_08000F6A:
    r0 = 0x08054FBCU; // [0x080010EC]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000F72
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r7 = *(u32*)(r0 + 0x4);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000FA6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000FBC;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804DCF4U /* &VTable_0804DCF4 */; // [0x080010F8]
    *(u32*)(r0 + 0x14) = (u32)r4;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x1C) = (u32)r5;
    *(u32*)(r0 + 0x20) = (u32)r6;
loc_08000FBC:
    r4 = r0;
    r0 = r7;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08000FC0
    r1 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000FD0;
    r1 = r0;
    r1 += 0x18CU;
loc_08000FD0:
    r0 = 0x08054FBCU; // [0x080010EC]
    r2 = r1;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08000FD8
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
loc_08000FEC:
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08000FEE: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08000FFE;
    r1 = 0x0804B918U; // [0x080010FC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
loc_08000FFE:
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001002
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001010;
    r6 = r0;
    r6 += 0x18CU;
loc_08001010:
    r0 = 0x08054FBCU; // [0x080010EC]
    r2 = r6;
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001018
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r3 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0xFU;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r1 = 0x4; // sp + 0x4
    r0 = sub_0805082C(r0, r1, r2, r3); // 0x0800105A: BL 0x0805082C
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001062
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001072;
    r2 = r0;
    r2 += 0x18CU;
loc_08001072:
    r0 = 0x08054FBCU; // [0x080010EC]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001078
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r7 = *(u32*)(r0 + 0x4);
    r0 = 0x40U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080010AE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080010C6;
    r1 = 0x0804AE5CU; // [0x08001100]
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x18) = (u32)r5;
    *(u32*)(r0 + 0x1C) = (u32)r6;
    *(u32*)(r0 + 0x3C) = (u32)r2;
    *(u32*)(r0 + 0x38) = (u32)r4;
loc_080010C6:
    r4 = r0;
    r0 = r7;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080010CA
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080010DA;
    r2 = r0;
    r2 += 0x18CU;
loc_080010DA:
    r0 = 0x08054FBCU; // [0x080010EC]
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080010E0
    return r0;
    r0 = r0;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r4; r4 += 4;
    r4 = (r0 >> 32);
    r7 = 0x36FF1C06U; // [0x080013E0]
    r5 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080010F2..0x080010FC (10 bytes, Thumb)
u32 sub_080010F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    if (cmp_lhs > cmp_rhs) return sub_080010B8(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    if (cmp_lhs > cmp_rhs) return sub_080010E4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08001104..0x080017D8 (1748 bytes, Thumb)
u32 sub_08001104(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001128: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800113C;
    r1 = 0x0804C428U; // [0x08001394]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_0800113C:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001140
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800114E;
    r7 = r0;
    r7 += 0x18CU;
loc_0800114E:
    r0 = 0x08054FBCU; // [0x08001398]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001156
    return r0;
    r2 = *(u32*)(r0);
    r1 = r0;
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r0 = (r2 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r1) = (u32)r2;
    r2 = (r2 << 2);
    r1 = r2 + r1;
    r5 = *(u32*)(r1 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001176
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800117E: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001190;
    r1 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0800139C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08001190:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001194
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080011A2;
    r6 = r0;
    r6 += 0x18CU;
loc_080011A2:
    r0 = 0x08054FBCU; // [0x08001398]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080011AA
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080011D4: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080011E8;
    r1 = 0x0804C43CU; // [0x080013A0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_080011E8:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080011EC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080011FA;
    r7 = r0;
    r7 += 0x18CU;
loc_080011FA:
    r0 = 0x08054FBCU; // [0x08001398]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001202
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r7 = *(u32*)(r0 + 0x4);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001236: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800124C;
    r1 = 0x0804AE84U; // [0x080013A4]
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0xCU;
    *(u32*)(r0 + 0x14) = (u32)r5;
    *(u32*)(r0 + 0x18) = (u32)r6;
    *(u32*)(r0 + 0x20) = (u32)r2;
loc_0800124C:
    r4 = r0;
    r0 = r7;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001250
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001260;
    r2 = r0;
    r2 += 0x18CU;
loc_08001260:
    r0 = 0x08054FBCU; // [0x08001398]
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001266
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001286: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001298;
    r1 = 0x0804AB58U; // [0x080013A8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08001298:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x0800129C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080012AA;
    r6 = r0;
    r6 += 0x18CU;
loc_080012AA:
    r0 = 0x08054FBCU; // [0x08001398]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080012B2
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080012D2: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080012E4;
    r1 = 0x0804C450U; // [0x080013AC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_080012E4:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080012E8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080012F6;
    r6 = r0;
    r6 += 0x18CU;
loc_080012F6:
    r0 = 0x08054FBCU; // [0x08001398]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080012FE
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    stack[2] = r2; // [sp + 0x8]
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    stack[1] = r2; // [sp + 0x4]
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r7 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = 2;
    if (cmp_lhs >= cmp_rhs) goto loc_08001346;
    r5 = 0x2U;
loc_08001346:
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001348: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08001374;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x0804C800U /* &VTable_0804C800 */; // [0x080013B0]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x8) = (u32)r6;
    r0 = stack[1]; // [sp + 0x4]
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = ((u32)((s32)r5 >> 1));
    *(u32*)(r4 + 0x14) = (u32)r5;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r5;
    r1 += 0x1U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0800136E: BL 0x08046E58
    *(u32*)(r4 + 0x20) = (u32)r0;
loc_08001374:
    r0 = r7;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001376
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001386;
    r2 = r0;
    r2 += 0x18CU;
loc_08001386:
    r0 = 0x08054FBCU; // [0x08001398]
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x0800138C
    return r0;
    *(u32*)r4 = r3; r4 += 4;
    *(u32*)r4 = r5; r4 += 4;
    r4 = (r0 >> 32);
    r7 = 0x60011812U; // [0x0800168C]
    r5 = (r0 >> 32);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r5; r4 += 4;
    r4 = (r0 >> 32);
    r6 = 0x210; // sp + 0x210
    r4 = (r0 >> 32);
    r3 = 0x160; // sp + 0x160
    r4 = (r0 >> 32);
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080013C4: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080013D4;
    r1 = 0x0804AE9CU; // [0x08001654]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
loc_080013D4:
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080013D8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080013E6;
    r6 = r0;
    r6 += 0x18CU;
loc_080013E6:
    r0 = 0x08054FBCU; // [0x08001658]
    r2 = r6;
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080013EE
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800140E: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001420;
    r1 = 0x0804B2C8U; // [0x0800165C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08001420:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001424
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001432;
    r6 = r0;
    r6 += 0x18CU;
loc_08001432:
    r0 = 0x08054FBCU; // [0x08001658]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x0800143A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800145A: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800146C;
    r1 = 0x0804DEA0U; // [0x08001660]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_0800146C:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001470
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800147E;
    r6 = r0;
    r6 += 0x18CU;
loc_0800147E:
    r0 = 0x08054FBCU; // [0x08001658]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001486
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r3 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x2U;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r1 = 0x4; // sp + 0x4
    r0 = sub_0805082C(r0, r1, r2, r3); // 0x080014C8: BL 0x0805082C
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080014D0
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080014E0;
    r2 = r0;
    r2 += 0x18CU;
loc_080014E0:
    r0 = 0x08054FBCU; // [0x08001658]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080014E6
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r5 = (r2 << 24);
    r5 = (r5 >> 24);
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001516: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800152A;
    r1 = 0x0804DD1CU; // [0x08001664]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u8*)(r0 + 0x8) = (u8)r5;
    *(u32*)(r0 + 0xC) = (u32)r4;
loc_0800152A:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x0800152E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800153C;
    r7 = r0;
    r7 += 0x18CU;
loc_0800153C:
    r0 = 0x08054FBCU; // [0x08001658]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001544
    return r0;
    r1 = *(u32*)(r0);
    r3 = 0x0; // sp + 0x0
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u8*)(r3 + 0x3) = (u8)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u8*)(r3 + 0x2) = (u8)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u8*)(r3 + 0x1) = (u8)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u8*)(r3) = (u8)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r1 = sp;
    r0 = sub_0802B8F0(r0, r1, r2, r3); // 0x08001596: BL 0x0802B8F0
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x0800159E
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080015AE;
    r2 = r0;
    r2 += 0x18CU;
loc_080015AE:
    r0 = 0x08054FBCU; // [0x08001658]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080015B4
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080015D4: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080015E6;
    r1 = 0x0804DEC8U; // [0x08001668]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u8*)(r0 + 0x8) = (u8)r4;
loc_080015E6:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080015EA
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080015F8;
    r6 = r0;
    r6 += 0x18CU;
loc_080015F8:
    r0 = 0x08054FBCU; // [0x08001658]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001600
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001620: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001632;
    r1 = 0x0804C814U; // [0x0800166C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08001632:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001636
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001644;
    r6 = r0;
    r6 += 0x18CU;
loc_08001644:
    r0 = 0x08054FBCU; // [0x08001658]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x0800164C
    return r0;
    r0 = r0;
    r6 = 0x270; // sp + 0x270
    r4 = (r0 >> 32);
    r7 = 0x39016854U; // [0x0800194C]
    r5 = (r0 >> 32);
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    if (cmp_lhs <= cmp_rhs) goto loc_080016A0;
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r2 = *(u32*)r0; r0 += 4;
    r4 = *(u32*)r0; r0 += 4;
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    stack[0] = r2; // [sp + 0x0]
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
loc_080016A0:
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r7 = *(u32*)(r0 + 0x4);
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080016AA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080016C4;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804BF14U /* &VTable_0804BF14 */; // [0x08001920]
    *(u32*)(r0) = (u32)r1;
    r1 = stack[0]; // [sp + 0x0]
    r0 += 0xCU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x18U;
    *(u32*)(r0 + 0x8) = (u32)r6;
loc_080016C4:
    r4 = r0;
    r0 = r7;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080016C8
    r1 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080016D8;
    r1 = r0;
    r1 += 0x18CU;
loc_080016D8:
    r0 = 0x08054FBCU; // [0x08001924]
    r2 = r1;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080016E0
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001700: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001712;
    r1 = 0x0804DD30U; // [0x08001928]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u8*)(r0 + 0x8) = (u8)r4;
loc_08001712:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001716
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001724;
    r6 = r0;
    r6 += 0x18CU;
loc_08001724:
    r0 = 0x08054FBCU; // [0x08001924]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x0800172C
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001756: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800176A;
    r1 = 0x0804C828U; // [0x0800192C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r4;
    *(u32*)(r0 + 0x8) = (u32)r5;
loc_0800176A:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x0800176E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800177C;
    r7 = r0;
    r7 += 0x18CU;
loc_0800177C:
    r0 = 0x08054FBCU; // [0x08001924]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001784
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080017A4: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080017B8;
    r1 = 0x0804C83CU; // [0x08001930]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r4;
    *(u32*)(r0 + 0x8) = (u32)r6;
loc_080017B8:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080017BC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080017CA;
    r6 = r0;
    r6 += 0x18CU;
loc_080017CA:
    r0 = 0x08054FBCU; // [0x08001924]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080017D2
    return r0;
}

// ROM Address: 0x080017D8..0x08001808 (48 bytes, Thumb)
u32 sub_080017D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    stack[2] = r2; // [sp + 0x8]
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    stack[1] = r2; // [sp + 0x4]
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08001808(r0, r1, r2, r3);
    r2 = 0x1U;
    return sub_0800180A(r0, r1, r2, r3);
}

// ROM Address: 0x08001808..0x08001B6C (868 bytes, Thumb)
u32 sub_08001808(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r6 = (r2 << 24);
    r6 = (r6 >> 24);
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r7 = *(u32*)(r0 + 0x4);
    r0 = 0x20U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800183A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001860;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804E268U /* &VTable_0804E268 */; // [0x08001934]
    r2 = 0x1U;
    *(u32*)(r0) = (u32)r1;
    *(u8*)(r0 + 0x8) = (u8)r6;
    *(u32*)(r0 + 0x10) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
    r1 = stack[0]; // [sp + 0x0]
    r1 = r2 - r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r1 = stack[1]; // [sp + 0x4]
    *(u32*)(r0 + 0x18) = (u32)r1;
    r1 = stack[2]; // [sp + 0x8]
    *(u32*)(r0 + 0x1C) = (u32)r1;
loc_08001860:
    r4 = r0;
    r0 = r7;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001864
    r1 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001874;
    r1 = r0;
    r1 += 0x18CU;
loc_08001874:
    r0 = 0x08054FBCU; // [0x08001924]
    r2 = r1;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x0800187C
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800189E: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080018B2;
    r1 = 0x0804C850U; // [0x08001938]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r6;
loc_080018B2:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080018B6
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080018C4;
    r6 = r0;
    r6 += 0x18CU;
loc_080018C4:
    r0 = 0x08054FBCU; // [0x08001924]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080018CC
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080018EC: BL 0x0803D5B8
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080018FE;
    r1 = 0x0804DD44U; // [0x0800193C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_080018FE:
    r4 = r0;
    r0 = r5;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001902
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001910;
    r6 = r0;
    r6 += 0x18CU;
loc_08001910:
    r0 = 0x08054FBCU; // [0x08001924]
    r2 = r6;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001918
    return r0;
    r0 = r0;
    r4 = (r0 >> 32);
    r7 = 0x0804DEB4U; // [0x08001C18]
    r5 = (r0 >> 32);
    if (cmp_lhs <= cmp_rhs) goto loc_0800198C;
    r4 = (r0 >> 32);
    r3 = *(u32*)r0; r0 += 4;
    r5 = *(u32*)r0; r0 += 4;
    r4 = (r0 >> 32);
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r4 = *(u32*)r0; r0 += 4;
    r5 = *(u32*)r0; r0 += 4;
    r4 = (r0 >> 32);
    return sub_08001E08(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = *(u32*)r0; r0 += 4;
    r6 = *(u32*)r0; r0 += 4;
    r4 = (r0 >> 32);
    if (cmp_lhs <= cmp_rhs) goto loc_080019C8;
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001964: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001978;
    r1 = 0x0804DD58U; // [0x08001C04]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08001978:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x0800197C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800198A;
    r7 = r0;
    r7 += 0x18CU;
loc_0800198A:
    r0 = 0x08054FBCU; // [0x08001C08]
loc_0800198C:
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001992
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080019BC: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080019D0;
    r1 = 0x0804B940U; // [0x08001C0C]
loc_080019C8:
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_080019D0:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080019D4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080019E2;
    r7 = r0;
    r7 += 0x18CU;
loc_080019E2:
    r0 = 0x08054FBCU; // [0x08001C08]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080019EA
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001A14: BL 0x0803D5B8
    r7 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001A28;
    r1 = 0x0804C864U; // [0x08001C10]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08001A28:
    r4 = r0;
    r0 = r6;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001A2C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001A3A;
    r7 = r0;
    r7 += 0x18CU;
loc_08001A3A:
    r0 = 0x08054FBCU; // [0x08001C08]
    r2 = r7;
    r1 = r4;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001A42
    return r0;
    r1 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r1) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u32*)(r1);
    r0 -= 0x1U;
    *(u32*)(r1) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    stack[1] = r0; // [sp + 0x4]
    r2 = *(u32*)(r1);
    r2 -= 0x1U;
    r0 = (r2 << 2);
    *(u32*)(r1) = (u32)r2;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r1) = (u32)r2;
    r2 = (r2 << 2);
    r1 = r2 + r1;
    r4 = *(u32*)(r1 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001A80
    r1 = r0;
    r0 = 0x0U;
    r2 = 0x4; // sp + 0x4
    r0 = sub_08015AF0(r0, r1, r2, r3); // 0x08001A8A
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001A92
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001AA2;
    r2 = r0;
    r2 += 0x18CU;
loc_08001AA2:
    r0 = 0x08054FBCU; // [0x08001C08]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001AA8
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = 0x64U;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r2 = 0x1U;
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r1 = 0x4; // sp + 0x4
    r0 = sub_0805082C(r0, r1, r2, r3); // 0x08001AE4: BL 0x0805082C
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001AEC
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001AFC;
    r2 = r0;
    r2 += 0x18CU;
loc_08001AFC:
    r0 = 0x08054FBCU; // [0x08001C08]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001B02
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r3 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r1 = 0x4; // sp + 0x4
    r0 = sub_0805082C(r0, r1, r2, r3); // 0x08001B46: BL 0x0805082C
    r5 = r0;
    r0 = r4;
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001B4E
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001B5E;
    r2 = r0;
    r2 += 0x18CU;
loc_08001B5E:
    r0 = 0x08054FBCU; // [0x08001C08]
    r1 = r5;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001B64
    return r0;
}

// ROM Address: 0x08001B6C..0x08001B82 (22 bytes, Thumb)
u32 sub_08001B6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08001B82(r0, r1, r2, r3);
    r5 = 0x1U;
    return sub_08001B84(r0, r1, r2, r3);
}

// ROM Address: 0x08001B82..0x08001EBC (826 bytes, Thumb)
u32 sub_08001B82(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0U;
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = 0x08054FBCU; // [0x08001C08]
    r2 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r6 + 0x18);
    r1 = 0x8U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001B94
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001B9C: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001BB0;
    r1 = 0x0804E0FCU; // [0x08001C14]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x10) = (u32)r5;
    *(u32*)(r0 + 0xC) = (u32)r2;
loc_08001BB0:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001BBA;
    r2 = r4;
    r2 += 0xCU;
loc_08001BBA:
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001BBC
    return r0;
    r1 = *(u32*)(r0);
    r5 = 0x08054FBCU; // [0x08001C08]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x8U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001BD6
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001BDE: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001BF0;
    r1 = 0x0804DEB4U; // [0x08001C18]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r2;
loc_08001BF0:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001BFA;
    r2 = r4;
    r2 += 0xCU;
loc_08001BFA:
    r0 = *(u32*)(r5 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001BFC
    return r0;
    r0 = r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08001CB8;
    r4 = (r0 >> 32);
    r7 = 0xBD10FA36U; // [0x08001EFC]
    r5 = (r0 >> 32);
    r4 = (r0 >> 32);
    r2 = *(u32*)r0; r0 += 4;
    r5 = *(u32*)r0; r0 += 4;
    r6 = *(u32*)r0; r0 += 4;
    r4 = (r0 >> 32);
    goto loc_08001E10;
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0);
    r5 = 0x08054FBCU; // [0x08001EB0]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x8U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001C30
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001C38: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001C4C;
    r1 = 0x0804DEB4U; // [0x08001EB4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    r1 = 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08001C4C:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001C56;
    r2 = r4;
    r2 += 0xCU;
loc_08001C56:
    r0 = *(u32*)(r5 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001C58
    return r0;
    r1 = *(u32*)(r0);
    r7 = 0x08054FBCU; // [0x08001EB0]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r7 + 0x18);
    r1 = 0x8U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001C86
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001C8E: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001C9E;
    r1 = 0x0804C43CU; // [0x08001EB8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x10U;
loc_08001C9E:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001CA8;
    r2 = r4;
    r2 += 0xCU;
loc_08001CA8:
    r0 = *(u32*)(r7 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001CAA
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
loc_08001CB8:
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r7 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08001EB0]
    r1 = 0x8U;
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001CE2
    r4 = r0;
    r0 = 0x34U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001CEA: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001CFE;
    r1 = 0x0804B92CU; // [0x08001EBC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x10U;
    *(u32*)(r0 + 0x10) = (u32)r5;
    *(u32*)(r0 + 0x30) = (u32)r2;
loc_08001CFE:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001D08;
    r2 = r4;
    r2 += 0xCU;
loc_08001D08:
    r0 = 0x08054FBCU; // [0x08001EB0]
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001D0C
    return r0;
    r1 = *(u32*)(r0);
    r7 = 0x08054FBCU; // [0x08001EB0]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r7 + 0x18);
    r1 = 0x8U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001D3A
    r4 = r0;
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001D42: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001D54;
    r1 = 0x0804DD08U; // [0x08001EC0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x10U;
    *(u32*)(r0 + 0x2C) = (u32)r2;
loc_08001D54:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001D5E;
    r2 = r4;
    r2 += 0xCU;
loc_08001D5E:
    r0 = *(u32*)(r7 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001D60
    return r0;
    r1 = *(u32*)(r0);
    r6 = 0x08054FBCU; // [0x08001EB0]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r6 + 0x18);
    r1 = 0x8U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001D84
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001D8C: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001D9C;
    r1 = 0x0804AB58U; // [0x08001EC4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0xCU;
loc_08001D9C:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001DA6;
    r2 = r4;
    r2 += 0xCU;
loc_08001DA6:
    r0 = *(u32*)(r6 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001DA8
    return r0;
    r1 = *(u32*)(r0);
    r7 = 0x08054FBCU; // [0x08001EB0]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r7 + 0x18);
    r1 = 0x8U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001DD6
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001DDE: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001DEE;
    r1 = 0x0804CD60U; // [0x08001EC8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x10U;
loc_08001DEE:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001DF8;
    r2 = r4;
    r2 += 0xCU;
loc_08001DF8:
    r0 = *(u32*)(r7 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001DFA
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
loc_08001E10:
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08001EB0]
    r1 = 0x8U;
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08001E1E
    *(u32*)(r0 + 0x18) = (u32)r4;
    r1 = *(u32*)(r0 + 0x30);
    r1 = r1 + r4;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08001E44
    r5 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001E4C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001E60;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804DCCCU /* &VTable_0804DCCC */; // [0x08001ECC]
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08001E60:
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08001EB0]
    r0 += 0x1CU;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001E68
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x4; // sp + 0x4
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x0U;
    r0 = sub_08021174(r0, r1, r2, r3); // 0x08001E9C: BL 0x08021174
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08001EB0]
    r0 += 0x1CU;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001EA8
    return r0;
    r7 = 0x68019103U; // [0x080021A4]
    r5 = (r0 >> 32);
    r4 = (r0 >> 32);
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r5; r4 += 4;
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08001EBE..0x080020BE (512 bytes, Thumb)
u32 sub_08001EBE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    if (cmp_lhs <= cmp_rhs) goto loc_08001ED4;
    r4 = (r0 >> 32);
    r3 = 0x160; // sp + 0x160
    r4 = (r0 >> 32);
    r5 = *(u32*)r5; r5 += 4;
    r6 = *(u32*)r5; r5 += 4;
    r4 = (r0 >> 32);
    if (cmp_lhs > cmp_rhs) return sub_08001E68(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0);
loc_08001ED4:
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001EE0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001EF2;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804B2A0U /* &VTable_0804B2A0 */; // [0x08002160]
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0) = (u32)r1;
loc_08001EF2:
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002164]
    r0 += 0x1CU;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001EFA
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001F10: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001F22;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804C7ECU /* &VTable_0804C7EC */; // [0x08002168]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08001F22:
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002164]
    r0 += 0x1CU;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001F2A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001F40: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001F52;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804E0D4U /* &VTable_0804E0D4 */; // [0x0800216C]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08001F52:
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002164]
    r0 += 0x1CU;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001F5A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001F7A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001F8E;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804D480U /* &VTable_0804D480 */; // [0x08002170]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08001F8E:
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002164]
    r0 += 0x1CU;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001F96
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08001FC0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08001FD6;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x0804D494U /* &VTable_0804D494 */; // [0x08002174]
    *(u32*)(r0) = (u32)r1;
    r0 += 0x8U;
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x14U;
loc_08001FD6:
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002164]
    r0 += 0x1CU;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x08001FDE
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x4; // sp + 0x4
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x0U;
    r0 = sub_08015B68(r0, r1, r2, r3); // 0x08002012
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002016
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08002038
    r1 = r0;
    r0 = 0x8; // sp + 0x8
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08002040: BL 0x0800FDFA
    r0 = stack[2]; // [sp + 0x8]
    r2 = stack[4]; // [sp + 0x10]
    r3 = stack[5]; // [sp + 0x14]
    r2 = r0 + r2;
    r0 = stack[3]; // [sp + 0xC]
    stack[0] = r2; // [sp + 0x0]
    r0 = r0 + r3;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    r2 = ((u32)((s32)r2 >> 1));
    stack[1] = r0; // [sp + 0x4]
    stack[7] = r0; // [sp + 0x1C]
    r0 = r2;
    r0 -= 0x78U;
    stack[6] = r2; // [sp + 0x18]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[7]; // [sp + 0x1C]
    stack[0] = r2; // [sp + 0x0]
    r0 -= 0x50U;
    stack[7] = r0; // [sp + 0x1C]
    r2 = r4;
    r0 = 0x0U;
    r1 = 0x18; // sp + 0x18
    r0 = sub_08015B68(r0, r1, r2, r3); // 0x08002072
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002076
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x0800208C
    r5 = 0x08054FBCU; // [0x08002164]
    r4 = r0;
    r0 = *(u32*)(r5 + 0x24);
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080020BE(r0, r1, r2, r3);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080020A0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080020B4;
    r1 = 0x0804E324U; // [0x08002178]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_080020B4:
    r1 = r0;
    r0 = *(u32*)(r5 + 0x20);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x080020B8
    return r0;
}

// ROM Address: 0x080020BE..0x080020D8 (26 bytes, Thumb)
u32 sub_080020BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080020C0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080020CE;
    r1 = 0x0804D300U; // [0x0800217C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_080020CE:
    r1 = r0;
    r0 = *(u32*)(r5 + 0x20);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x080020D2
    return sub_080020BC(r0, r1, r2, r3);
}

// ROM Address: 0x080020DA..0x080025E0 (1286 bytes, Thumb)
u32 sub_080020DA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x20);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x080020DE
    return r0;
    r1 = 0x03001004U /* &g_SramPresentFlag */; // [0x08002180]
    r0 = 0x1U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r7 = 0x08054FBCU; // [0x08002164]
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x03001004U /* &g_SramPresentFlag */; // [0x08002180]
    r6 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08002142;
    r0 = *(u32*)(r7 + 0xC);
    r0 = sub_08009196(r0, r1, r2, r3); // 0x08002138
    r1 = 0x03001004U /* &g_SramPresentFlag */; // [0x08002180]
    r0 = 0x0U;
    *(u32*)(r1 + 0x8) = (u32)r0;
loc_08002142:
    r2 = 0x0U;
    stack[2] = r2; // [sp + 0x8]
    r1 = 0x1U;
    stack[1] = r1; // [sp + 0x4]
    r0 = 0xC; // sp + 0xC
    stack[0] = r0; // [sp + 0x0]
    r2 = r5;
    r3 = r4;
    r1 = r6;
    r0 = *(u32*)(r7 + 0xC);
    r0 = sub_08009030(r0, r1, r2, r3); // 0x08002156
    return r0;
    r0 = r0;
    r4 = (r0 >> 32);
    r7 = 0xF03B6041U; // [0x08002458]
    r5 = (r0 >> 32);
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    *(u32*)r7 = r5; r7 += 4;
    *(u32*)r7 = r6; r7 += 4;
    *(u32*)r7 = r7; r7 += 4;
    r4 = (r0 >> 32);
    goto loc_08002318;
    r4 = (r0 >> 32);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_08002074(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_080020A0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return sub_080027C4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08002180;
    r4 = (r0 >> 32);
loc_08002180:
    r4 = ((u32)((s32)r0 >> 32));
    r0 = (r0 << 12);
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r7 = 0x0U;
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x03001004U /* &g_SramPresentFlag */; // [0x08002420]
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080021DA;
    r0 = 0x08054FBCU; // [0x08002424]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08009196(r0, r1, r2, r3); // 0x080021D2
    r0 = 0x03001004U /* &g_SramPresentFlag */; // [0x08002420]
    *(u32*)(r0 + 0x8) = (u32)r7;
loc_080021DA:
    r1 = 0x40U;
    r0 = 0x0U;
    r0 = sub_08050714(r0, r1, r2, r3); // 0x080021DE: BL 0x08050714
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080021E2
    r2 = 0x1U;
    r0 = 0xC; // sp + 0xC
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    r1 = 0x1U;
    stack[1] = r1; // [sp + 0x4]
    r0 = 0x08054FBCU; // [0x08002424]
    r2 = r5;
    r3 = r4;
    r1 = r6;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08009030(r0, r1, r2, r3); // 0x080021FC
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08002202: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08002214;
    r1 = 0x0804C588U /* &VTable_0804C588 */; // [0x08002428]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x10U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r7;
loc_08002214:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002214
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r1 = 0x40U;
    r0 = 0x0U;
    r0 = sub_08050714(r0, r1, r2, r3); // 0x08002260: BL 0x08050714
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002264
    r0 = 0x03001004U /* &g_SramPresentFlag */; // [0x08002420]
    r7 = 0x0U;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800227E;
    r0 = 0x08054FBCU; // [0x08002424]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08009196(r0, r1, r2, r3); // 0x08002276
    r0 = 0x03001004U /* &g_SramPresentFlag */; // [0x08002420]
    *(u32*)(r0 + 0x8) = (u32)r7;
loc_0800227E:
    r2 = 0x1U;
    r0 = 0xC; // sp + 0xC
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    r1 = 0x0U;
    stack[1] = r1; // [sp + 0x4]
    r0 = 0x08054FBCU; // [0x08002424]
    r2 = r5;
    r3 = r4;
    r1 = r6;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08009030(r0, r1, r2, r3); // 0x08002294
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800229A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080022AC;
    r1 = 0x0804C588U /* &VTable_0804C588 */; // [0x08002428]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x10U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r7;
loc_080022AC:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080022AC
    return r0;
    r1 = 0x10U;
    r0 = 0x0U;
    r0 = sub_08050714(r0, r1, r2, r3); // 0x080022BA: BL 0x08050714
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080022BE
    r0 = 0x08054FBCU; // [0x08002424]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_080091B8(r0, r1, r2, r3); // 0x080022C6
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080022CC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080022E0;
    r1 = 0x0804C588U /* &VTable_0804C588 */; // [0x08002428]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x10U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_080022E0:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080022E0
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0xE) = (u16)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u16*)(r3 + 0xC) = (u16)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
loc_08002318:
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r1 = 0x03002A58U; // [0x0800242C]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x03001C34U; // [0x08002430]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08002342;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800233E: BL __call_via_r3
loc_08002342:
    r1 = 0x40U;
    r0 = 0x0U;
    r0 = sub_08050714(r0, r1, r2, r3); // 0x08002346: BL 0x08050714
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800234A
    r2 = 0x1U;
    stack[1] = r2; // [sp + 0x4]
    r0 = 0x08054FBCU; // [0x08002424]
    r2 = r5;
    stack[0] = r4; // [sp + 0x0]
    r0 = *(u32*)(r0 + 0xC);
    r1 = r6;
    r3 = 0xC; // sp + 0xC
    r0 = sub_08008D44(r0, r1, r2, r3); // 0x0800235E
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08002366: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800237A;
    r1 = 0x080495B4U /* &VTable_080495B4 */; // [0x08002434]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x4U;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_0800237A:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800237A
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08002388: BL __call_via_r3
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0xE) = (u16)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u16*)(r3 + 0xC) = (u16)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = 0x03001C34U; // [0x08002430]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080023E6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080023E2: BL __call_via_r3
loc_080023E6:
    r1 = 0x03002A58U; // [0x0800242C]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
    r2 = 0x0U;
    stack[1] = r2; // [sp + 0x4]
    r0 = 0x08054FBCU; // [0x08002424]
    r2 = r5;
    stack[0] = r4; // [sp + 0x0]
    r0 = *(u32*)(r0 + 0xC);
    r1 = r6;
    r3 = 0xC; // sp + 0xC
    r0 = sub_08008D44(r0, r1, r2, r3); // 0x080023FC
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r0 = sub_08050714(r0, r1, r2, r3); // 0x08002414: BL 0x08050714
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002418
    return r0;
    r0 = r0;
    r4 = ((u32)((s32)r0 >> 32));
    r0 = (r0 << 12);
    r7 = 0xF00668C0U; // [0x08002718]
    r5 = (r0 >> 32);
    *(u32*)r5 = r3; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r2; cmp_rhs = 88;
    r0 = (r0 << 12);
    r4 = r6;
    r0 = (r0 << 12);
    stack[180] = r5; // [sp + 0x2D0]
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08002448: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800245A;
    r1 = 0x0804C588U /* &VTable_0804C588 */; // [0x080026AC]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_0800245A:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800245A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0x0000040CU; // [0x080026B0]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08002470: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800248E;
    r0 = r4;
    r0 = sub_080176AC(r0, r1, r2, r3); // 0x0800247A
    r0 = 0x0804BBD4U /* &VTable_0804BBD4 */; // [0x080026B4]
    r1 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x400U; // (1 << 10)
    r0 = r4 + r0;
    r0 += 0x4U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
loc_0800248E:
    r0 = r4;
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002490
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080024A6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080024B8;
    r1 = 0x0804C5B8U /* &VTable_0804C5B8 */; // [0x080026B8]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_080024B8:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080024B8
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r4; cmp_rhs = 2;
    if (cmp_lhs >= cmp_rhs) goto loc_080024D2;
    r4 = 0x2U;
loc_080024D2:
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080024D4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080024E6;
    r1 = 0x0804A9D8U /* &VTable_0804A9D8 */; // [0x080026BC]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_080024E6:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080024E6
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080024FC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800250E;
    r1 = 0x0804A5B4U /* &VTable_0804A5B4 */; // [0x080026C0]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_0800250E:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800250E
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08002524: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08002536;
    r1 = 0x0804A070U /* &VTable_0804A070 */; // [0x080026C4]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_08002536:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002536
    return r0;
    r1 = *(u32*)(r0);
    r2 = 0x03001018U; // [0x080026C8]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x03001018U; // [0x080026C8]
    r0 -= 0x8U;
    r0 = sub_08018346(r0, r1, r2, r3); // 0x08002550: BL 0x08018346
    return r0;
    r1 = *(u32*)(r0);
    r5 = 0x08054FBCU; // [0x080026CC]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r5 + 0x18);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08002568
    r1 = 0x1000U; // (1 << 12)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_080025A2;
    r0 = *(u32*)(r5 + 0x28);
    r1 = 0x30U;
    r0 = *(u32*)(r0);
    r0 = r1 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_080025A2;
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x80U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = r1 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_080025A2;
    r2 = 0x03001018U; // [0x080026C8]
    r3 = 0x03001018U; // [0x080026C8]
    r2 -= 0x8U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800D30E(r0, r1, r2, r3); // 0x08002596
    r1 = r0;
    r0 = *(u32*)(r5 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800259E: BL 0x0801191A
loc_080025A2:
    return r0;
    r1 = *(u32*)(r0);
    r5 = 0x08054FBCU; // [0x080026CC]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r5 + 0x18);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x080025B6
    r1 = 0x1000U; // (1 << 12)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_080025F0(r0, r1, r2, r3);
    r0 = *(u32*)(r5 + 0x28);
    r1 = 0x30U;
    r0 = *(u32*)(r0);
    r0 = r1 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_080025F0(r0, r1, r2, r3);
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x80U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = r1 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_080025F0(r0, r1, r2, r3);
    r2 = 0x03001018U; // [0x080026C8]
    r3 = 0x03001018U; // [0x080026C8]
    r2 -= 0x8U;
    return r0;
}

// ROM Address: 0x080025E2..0x080026B4 (210 bytes, Thumb)
u32 sub_080025E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = sub_0800D30E(r0, r1, r2, r3); // 0x080025E4
    r1 = r0;
    r0 = *(u32*)(r5 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x080025EC: BL 0x0801191A
    return r0;
    r2 = *(u32*)(r0);
    r2 -= 0x1U;
    r1 = (r2 << 2);
    *(u32*)(r0) = (u32)r2;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    stack[2] = r2; // [sp + 0x8]
    r2 = *(u32*)(r0);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r2 = 0x08054FBCU; // [0x080026CC]
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x4; // sp + 0x4
    r2 += 0x34U;
    r0 = sub_08018346(r0, r1, r2, r3); // 0x08002622: BL 0x08018346
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = 0x08054FBCU; // [0x080026CC]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r2 = 0x4; // sp + 0x4
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x080026CC]
    r3 += 0x3CU;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_080090E6(r0, r1, r2, r3); // 0x08002660
    return r0;
    r1 = *(u32*)(r0);
    r2 = 0x03001018U; // [0x080026C8]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x080026CC]
    r2 -= 0x8U;
    r3 = 0x03001018U; // [0x080026C8]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_080090E6(r0, r1, r2, r3); // 0x08002680
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08002696: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080026A4;
    r1 = 0x08049978U /* &VTable_08049978 */; // [0x080026D0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_080026A4:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080026A4
    return r0;
    r0 = r0;
    *(u32*)r5 = r3; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r4 = (r0 >> 32);
    r4 = (r1 << 16);
    r0 = r0;
    return r0;
}

// ROM Address: 0x080026B6..0x08002720 (106 bytes, Thumb)
u32 sub_080026B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    *(u32*)r5 = r3; r5 += 4;
    *(u32*)r5 = r4; r5 += 4;
    *(u32*)r5 = r5; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r4 = (r0 >> 32);
    r1 = 0x360; // sp + 0x360
    r4 = (r0 >> 32);
    r5 = 0x08002994U;
    r4 = (r0 >> 32);
    r0 = 0x08002888U;
    r4 = (r0 >> 32);
    r0 = ((u32)((s32)r3 >> 32));
    r0 = (r0 << 12);
    r7 = 0x6801B508U; // [0x080029C0]
    r5 = (r0 >> 32);
    r1 = stack[120]; // [sp + 0x1E0]
    r4 = (r0 >> 32);
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080026D8: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080026E4;
    r1 = 0x0804CF64U /* &VTable_0804CF64 */; // [0x08002950]
    *(u32*)(r0) = (u32)r1;
loc_080026E4:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080026E4
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08002954]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08009172(r0, r1, r2, r3); // 0x080026FC
    return r0;
    r0 = 0x08054FBCU; // [0x08002954]
    r1 = *(u32*)(r0 + 0x28);
    r1 += 0xC0U;
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08002716;
    r2 = 0x03002A58U; // [0x08002958]
    r1 = 0x1U;
    *(u32*)(r2) = (u32)r1;
loc_08002716:
    r1 = 0x0U;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08008AA0(r0, r1, r2, r3); // 0x0800271A: BL 0x08008AA0
    return r0;
}

// ROM Address: 0x08002720..0x0800273A (26 bytes, Thumb)
u32 sub_08002720(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r5) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800273A(r0, r1, r2, r3);
    r6 = 0x1U;
    return sub_0800273C(r0, r1, r2, r3);
}

// ROM Address: 0x0800273A..0x08002990 (598 bytes, Thumb)
u32 sub_0800273A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0U;
    r0 = 0x03001C34U; // [0x0800295C]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080027DA;
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x0U;
    stack[4] = r1; // [sp + 0x10]
    r0 = sub_0805058C(r0, r1, r2, r3); // 0x0800275E
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002762
    r7 = 0x08054FBCU; // [0x08002954]
    r0 = *(u32*)(r7 + 0x18);
    r0 = sub_08011DB4(r0, r1, r2, r3); // 0x0800276A
    r0 = 0x304U; // (193 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08002772: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080027AE;
    r3 = 0x0U;
    r2 = 0xDU;
    r1 = 0x7U;
    r0 = r4;
    r0 = sub_08005460(r0, r1, r2, r3); // 0x08002782
    r0 = 0x08049504U /* &VTable_08049504 */; // [0x08002960]
    r2 = 0xC; // sp + 0xC
    *(u32*)(r4) = (u32)r0;
    r0 = 0x280U; // (5 << 7)
    r0 = r4 + r0;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    *(u32*)(r0 + 0x7C) = (u32)r1;
    r3 = r0;
    r3 += 0x80U;
    r0 = 0x03001910U; // [0x08002964]
    *(u32*)(r3) = (u32)r2;
    r0 = *(u32*)(r0);
    r1 = 0xFFU;
    r1 += 0xDU;
    *(u32*)(r1 + r4) = r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x38) = (u32)r6;
loc_080027AE:
    r0 = r4;
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080027B0
    r1 = r0 - 1;
    r0 = *(u32*)(r5);
    r2 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r5;
    *(u32*)(r5) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = *(u32*)(r7 + 0x18);
    r0 = sub_08011E0E(r0, r1, r2, r3); // 0x080027C4
    r1 = 0x1U;
    r0 = *(u32*)(r7 + 0x24);
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x080027CC
    r0 = 0x0U;
    r0 = sub_08050568(r0, r1, r2, r3); // 0x080027D2: BL 0x08050568
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080027D6
loc_080027DA:
    return r0;
    r0 = 0x03001C34U; // [0x0800295C]
    r4 = *(u32*)(r0);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08002860;
    r0 = 0x0U;
    r0 = sub_0805058C(r0, r1, r2, r3); // 0x080027EA
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080027EE
    r5 = 0x08054FBCU; // [0x08002954]
    r0 = *(u32*)(r5 + 0x18);
    r0 = sub_08011DB4(r0, r1, r2, r3); // 0x080027F6
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0802E83C(r0, r1, r2, r3); // 0x080027FE: BL 0x0802E83C
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002802
    r6 = r0;
    r0 = *(u32*)(r5 + 0x18);
    r0 = sub_08011E0E(r0, r1, r2, r3); // 0x0800280A
    cmp_lhs = (s32)r6; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0800284E;
    r0 = *(u32*)(r5 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x08002968]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x0800282E
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08002836
    r0 = r4;
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x0800283C
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800284A: BL __call_via_r3
loc_0800284E:
    r1 = 0x1U;
    r0 = *(u32*)(r5 + 0x24);
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x08002852
    r0 = 0x0U;
    r0 = sub_08050568(r0, r1, r2, r3); // 0x08002858: BL 0x08050568
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800285C
loc_08002860:
    return r0;
    r1 = 0x03002A58U; // [0x08002958]
    r4 = 0x08054FBCU; // [0x08002954]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x0800286E
    r0 = *(u32*)(r4 + 0x28);
    r0 = sub_08012628(r0, r1, r2, r3); // 0x08002874
    r1 = 0x000005C4U; // [0x0800296C]
    r0 = *(u32*)(r4 + 0x4);
    r0 = r0 + r1;
    r0 = sub_0803E2EC(r0, r1, r2, r3); // 0x0800287E
    r0 = sub_0803D8F2(r0, r1, r2, r3); // 0x08002882
    r0 = 0xFFU;
    r0 += 0x1DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800288A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080028AA;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x08002970]
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    *(u32*)(r1 + 0x10) = (u32)r2;
    r1 = 0x0804A404U /* &VTable_0804A404 */; // [0x08002974]
    *(u32*)(r0) = (u32)r1;
loc_080028AA:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x080028AA
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080028BE
    r1 = r0;
    r3 = 0x64U;
    r2 = 0x0U;
    r0 = 0x0U;
    r0 = sub_080195A8(r0, r1, r2, r3); // 0x080028CA: BL 0x080195A8
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002954]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x080028D4: BL 0x0801191A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080028FC
    r1 = r0;
    r3 = r5;
    r2 = r4;
    r0 = 0x0U;
    r0 = sub_080195A8(r0, r1, r2, r3); // 0x08002908: BL 0x080195A8
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002954]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x08002912: BL 0x0801191A
    return r0;
    r0 = 0x08054FBCU; // [0x08002954]
    r2 = 0x0U;
    r1 = 0x13U;
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08002922
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08002954]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_0800441E(r0, r1, r2, r3); // 0x0800293C
    r1 = *(u32*)(r4);
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r1 = r1 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0;
    r0 = r0;
    r2 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r6 = *(u32*)r7; r7 += 4;
    r4 = (r0 >> 32);
    r7 = 0x07CA7809U; // [0x08002C48]
    r5 = (r0 >> 32);
    cmp_lhs = (s32)r2; cmp_rhs = 88;
    r0 = (r0 << 12);
    r4 = r6;
    r0 = (r0 << 12);
    stack[4] = r5; // [sp + 0x10]
    r4 = (r0 >> 32);
    r0 = r2 + r4;
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r4 = (r0 << 23);
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = 0x08002988U;
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0);
    r5 = 0x08054FBCU; // [0x08002BF0]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r5 + 0x14);
    r1 = r4;
    r0 = sub_08004448(r0, r1, r2, r3); // 0x0800298C
    return r0;
}

// ROM Address: 0x08002992..0x080029C0 (46 bytes, Thumb)
u32 sub_08002992(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08002994: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080029A8;
    r1 = 0x0804C83CU; // [0x08002BF4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    *(u32*)(r0 + 0xC) = (u32)r4;
loc_080029A8:
    r1 = r0;
    r0 = 0x03001C34U; // [0x08002BF8]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080029B8;
    r2 = r0;
    r2 += 0x18CU;
loc_080029B8:
    r0 = *(u32*)(r5 + 0x1C);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x080029BA
    return r0;
}

// ROM Address: 0x080029C0..0x080029C2 (2 bytes, Thumb)
u32 sub_080029C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x080029C2..0x080029D8 (22 bytes, Thumb)
u32 sub_080029C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08002BF0]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08004468(r0, r1, r2, r3); // 0x080029D2
    return r0;
}

// ROM Address: 0x080029D8..0x08002A12 (58 bytes, Thumb)
u32 sub_080029D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08054FBCU; // [0x08002BF0]
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x68U;
    r2 = *(u8*)(r1);
    r5 = 0x086F82ECU; // [0x08002BFC]
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r4 = r1 + r2;
    r2 = *(u32*)(r0);
    r3 = 0x2CU;
    r2 -= 0x1U;
    r1 = (r2 << 2);
    r1 = r1 + r0;
    *(u32*)(r0) = (u32)r2;
    r1 = *(u32*)(r1 + 0x4);
    r3 *= r1;
    r3 = r3 + r5;
    r3 = *(u8*)(r3 + 0x14);
    r3 = (r3 << 2);
    r3 = r3 + r4;
    r3 += 0x3CU;
    r3 = *(u32*)(r3);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08002A12(r0, r1, r2, r3);
    r1 = 0x1U;
    return sub_08002A14(r0, r1, r2, r3);
}

// ROM Address: 0x08002A12..0x08002C2A (536 bytes, Thumb)
u32 sub_08002A12(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r3 = r2 + 1;
    *(u32*)(r0) = (u32)r3;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08002BF0]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08004544(r0, r1, r2, r3); // 0x08002A3E
    return r0;
    r1 = *(u32*)(r0);
    r4 = 0x08054FBCU; // [0x08002BF0]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r4 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r5 = 0x4F8U; // (159 << 3)
    r1 *= r3;
    r0 = r1 + r0;
    r0 = r0 + r5;
    r0 = *(u8*)(r0 + 0x14);
    r7 = 0x086B82ECU; // [0x08002C00]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r7;
    r0 = sub_0801712C(r0, r1, r2, r3); // 0x08002A70
    r0 = *(u32*)(r4 + 0x14);
    r2 = 0x4C0U; // (19 << 6)
    *(u8*)(r0) = (u8)r6;
    r0 = r0 + r2;
    r1 = 0x0U;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    r0 = 0x03001C34U; // [0x08002BF8]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08002A9A;
    r1 = *(u32*)(r4 + 0x14);
    r3 = 0x68U;
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r1 = r1 + r5;
    r0 = sub_08010692(r0, r1, r2, r3); // 0x08002A96
loc_08002A9A:
    r0 = *(u32*)(r4 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r0 = r0 + r5;
    r0 = *(u8*)(r0 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r7;
    r0 = sub_0801711C(r0, r1, r2, r3); // 0x08002AB0
    return r0;
    r2 = *(u32*)(r0);
    r3 = 0x68U;
    r2 -= 0x1U;
    r1 = (r2 << 2);
    *(u32*)(r0) = (u32)r2;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08002BF0]
    r2 *= r3;
    r0 = *(u32*)(r0 + 0x14);
    r0 = r2 + r0;
    r2 = 0x4F8U; // (159 << 3)
    r0 = r0 + r2;
    r0 = List_AppendByte1(r0, r1, r2, r3); // 0x08002ADE: BL 0x08013A90
    return r0;
    r2 = *(u32*)(r0);
    r3 = 0x68U;
    r2 -= 0x1U;
    r1 = (r2 << 2);
    *(u32*)(r0) = (u32)r2;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08002BF0]
    r2 *= r3;
    r0 = *(u32*)(r0 + 0x14);
    r0 = r2 + r0;
    r2 = 0x4F8U; // (159 << 3)
    r0 = r0 + r2;
    r0 = sub_08013ABA(r0, r1, r2, r3); // 0x08002B0C
    return r0;
    r3 = *(u32*)(r0);
    r3 -= 0x1U;
    r1 = (r3 << 2);
    *(u32*)(r0) = (u32)r3;
    r1 = r1 + r0;
    r2 = *(u32*)(r1 + 0x4);
    r3 -= 0x1U;
    r1 = (r3 << 2);
    *(u32*)(r0) = (u32)r3;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 -= 0x1U;
    *(u32*)(r0) = (u32)r3;
    r3 = (r3 << 2);
    r0 = r3 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r3 = 0x68U;
    r0 = 0x08054FBCU; // [0x08002BF0]
    r3 *= r4;
    r0 = *(u32*)(r0 + 0x14);
    r0 = r3 + r0;
    r3 = 0x4F8U; // (159 << 3)
    r0 = r0 + r3;
    r0 = sub_08013B12(r0, r1, r2, r3); // 0x08002B44
    return r0;
    r1 = *(u32*)(r0);
    r3 = 0x68U;
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r4 = *(u32*)(r2 + 0x4);
    r2 = 0x08054FBCU; // [0x08002BF0]
    r3 *= r4;
    r2 = *(u32*)(r2 + 0x14);
    r2 = r3 + r2;
    r3 = 0x4F8U; // (159 << 3)
    r2 = r2 + r3;
    r2 = *(u8*)(r2);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r2 = (r2 << 31);
    r2 = (r2 >> 31);
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08002BF0]
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1 + 0x14);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x68U;
    r0 *= r3;
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u8*)(r0);
    r2 = 0x1U;
    r1 |= r2;
    *(u8*)(r0) = (u8)r1;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08002BF0]
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1 + 0x14);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x68U;
    r0 *= r3;
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u8*)(r0);
    r1 = (r1 >> 1);
    r1 = (r1 << 1);
    *(u8*)(r0) = (u8)r1;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08002BF0]
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1 + 0x14);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x68U;
    r0 *= r3;
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u8*)(r0);
    r2 = 0x2U;
    r1 |= r2;
    *(u8*)(r0) = (u8)r1;
    return r0; // BX lr
    r0 = r0;
    r7 = 0x39016801U; // [0x08002EE4]
    r5 = (r0 >> 32);
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r4 = *(u32*)r0; r0 += 4;
    r5 = *(u32*)r0; r0 += 4;
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r1 = 0x08054FBCU; // [0x08002EAC]
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1 + 0x14);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x68U;
    r0 *= r3;
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u8*)(r0);
    r2 = 0x2U;
    r1 &= ~r2;
    *(u8*)(r0) = (u8)r1;
    return r0; // BX lr
}

// ROM Address: 0x08002C2A..0x08002C58 (46 bytes, Thumb)
u32 sub_08002C2A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08054FBCU; // [0x08002EAC]
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r2 = r2 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r1 = r2 + r1;
    r1 = *(u8*)(r1 + 0x14);
    r2 = 0x086B82ECU; // [0x08002EB0]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u8*)(r1);
    r2 = (r1 << 31);
    if (cmp_lhs != cmp_rhs) goto loc_08002C54;
    r1 = (r1 << 30);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08002C58(r0, r1, r2, r3);
loc_08002C54:
    r2 = 0x1U;
    return sub_08002C5A(r0, r1, r2, r3);
}

// ROM Address: 0x08002C58..0x08003310 (1720 bytes, Thumb)
u32 sub_08002C58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r3 = 0x68U;
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r4 = *(u32*)(r2 + 0x4);
    r2 = 0x08054FBCU; // [0x08002EAC]
    r3 *= r4;
    r2 = *(u32*)(r2 + 0x14);
    r2 = r3 + r2;
    r3 = 0x4F8U; // (159 << 3)
    r2 = r2 + r3;
    r2 = *(u8*)(r2 + 0x14);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r3 = 0x086B82ECU; // [0x08002EB0]
    r2 = (r2 << 3);
    r2 = r2 + r3;
    r3 = r1 + 1;
    r2 = *(u16*)(r2 + 0xE);
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r7 = 0x08054FBCU; // [0x08002EAC]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r5 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r7 + 0x14);
    r4 = 0x0U;
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_08002CE8;
    r3 = 0x68U;
    r1 = *(u32*)(r7 + 0x14);
    r0 *= r3;
    r0 = r0 + r1;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x08002EB0]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801712C(r0, r1, r2, r3); // 0x08002CE0
    r0 = 0x03001C34U; // [0x08002EB4]
    r4 = *(u32*)(r0);
loc_08002CE8:
    r1 = 0x68U;
    r1 *= r5;
    r0 = *(u32*)(r7 + 0x14);
    r5 = 0x4F8U; // (159 << 3)
    r0 = r1 + r0;
    r0 = r0 + r5;
    r1 = r6;
    r0 = sub_08013DD6(r0, r1, r2, r3); // 0x08002CF8
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08002D3C;
    r0 = r6;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08002D02: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08002D0A
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08002D18: BL __call_via_r3
    r0 = sub_08010DAA(r0, r1, r2, r3); // 0x08002D1C
    r0 = *(u32*)(r7 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r0 = r0 + r5;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x08002EB0]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801711C(r0, r1, r2, r3); // 0x08002D38
loc_08002D3C:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08002D50
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
    r1 = r0;
    r0 = *(u32*)(r4);
    r2 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08002D90
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
    r0 = *(u32*)(r4);
    r2 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08002DCC
    r2 = *(u8*)(r0 + 0x10);
    r0 = *(u32*)(r4);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r2 = 0x4; // sp + 0x4
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x08054FBCU; // [0x08002EAC]
    stack[1] = r0; // [sp + 0x4]
    r1 += 0x44U;
    r0 = 0x0U;
    r0 = sub_08050690(r0, r1, r2, r3); // 0x08002E0A: BL 0x08050690
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002EAC]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x08002E14: BL 0x0801191A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r2 = 0x4; // sp + 0x4
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x08054FBCU; // [0x08002EAC]
    stack[1] = r0; // [sp + 0x4]
    r1 += 0x50U;
    r0 = 0x0U;
    r0 = sub_08050690(r0, r1, r2, r3); // 0x08002E46: BL 0x08050690
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002EAC]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x08002E50: BL 0x0801191A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x4; // sp + 0x4
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x0U;
    r0 = sub_080279E0(r0, r1, r2, r3); // 0x08002E98: BL 0x080279E0
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08002EAC]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x08002EA2: BL 0x0801191A
    return r0;
    r0 = r0;
    r7 = 0x68401808U; // [0x080031A0]
    r5 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r4 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r0 = sub_08027DB0(r0, r1, r2, r3); // 0x08002ECA
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08002ECE
    r1 = r0 - 1;
    r0 = *(u32*)(r4);
    r2 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r1 -= 0x1U;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r3 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r3 = r3 + r0;
    r6 = *(u32*)(r3 + 0x4);
    r1 -= 0x1U;
    r3 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r3 = r3 + r0;
    r5 = *(u32*)(r3 + 0x4);
    r1 -= 0x1U;
    r3 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r3 = r3 + r0;
    r7 = *(u32*)(r3 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r3 = r2 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_08002F22;
    r3 = (r2 << 4);
    r2 = r3 - r2;
    r2 = (r2 << 2);
loc_08002F22:
    r3 = 0x68U;
    r0 = 0x08054FBCU; // [0x080031B4]
    r1 *= r3;
    r4 = *(u32*)(r0 + 0x14);
    r3 = r1 + r4;
    r1 = 0x4F8U; // (159 << 3)
    r4 = r3 + r1;
    r3 = 0x68U;
    *(u32*)(r4 + 0x8) = (u32)r2;
    r2 = *(u32*)(r0 + 0x14);
    r3 *= r5;
    r2 = r3 + r2;
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0x14);
    r3 *= r6;
    r0 = r3 + r0;
    r2 = r2 + r1;
    r1 = r0 + r1;
    r6 = r1;
    r5 = r2;
    r3 = r7;
    r0 = r4;
    r0 = sub_0801375E(r0, r1, r2, r3); // 0x08002F50
    r0 = *(u8*)(r4);
    r1 = 0x1U;
    r0 |= r1;
    r1 = 0x2U;
    r0 |= r1;
    *(u8*)(r4) = (u8)r0;
    r0 = *(u8*)(r6);
    r0 = (r0 >> 1);
    r0 = (r0 << 1);
    *(u8*)(r6) = (u8)r0;
    r0 = *(u8*)(r5);
    r0 = (r0 >> 1);
    r0 = (r0 << 1);
    *(u8*)(r5) = (u8)r0;
    return r0;
    r3 = 0x8000000U; // (1 << 27)
    r1 = 0x0U;
    r0 = 0x0U;
loc_08002F7C:
    r2 = r0 + r3;
    r2 = *(u8*)(r2);
    r0 += 0x1U;
    r1 = r2 + r1;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 160;
    if (cmp_lhs < cmp_rhs) goto loc_08002F7C;
    cmp_lhs = (s32)r1; cmp_rhs = 51;
    if (cmp_lhs == cmp_rhs) goto loc_08002F96;
    r1 = 0x03001004U /* &g_SramPresentFlag */; // [0x080031B8]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
loc_08002F96:
    r0 = 0x0U;
    r0 = sub_0802B9A8(r0, r1, r2, r3); // 0x08002F98: BL 0x0802B9A8
    r1 = r0;
    r0 = 0x08054FBCU; // [0x080031B4]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x08002FA2: BL 0x0801191A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x4; // sp + 0x4
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x1BU;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x08054FBCU; // [0x080031B4]
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08002FD0
    return r0;
    r0 = 0x08054FBCU; // [0x080031B4]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08008AFE(r0, r1, r2, r3); // 0x08002FDE
    return r0;
    r1 = 0x08054FBCU; // [0x080031B4]
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1 + 0x14);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r2 = *(u8*)(r1 + 0x1);
    r3 = 0x4U;
    r0 = *(u32*)(r0 + 0x4);
    r2 |= r3;
    *(u8*)(r1 + 0x1) = (u8)r2;
    r3 = (r0 << 4);
    r0 = r3 - r0;
    r2 = 0x4C0U; // (19 << 6)
    r0 = (r0 << 2);
    r1 = r1 + r2;
    *(u32*)(r1 + 0x14) = (u32)r0;
    return r0; // BX lr
    r0 = 0x08054FBCU; // [0x080031B4]
    r2 = 0x4U;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u8*)(r0 + 0x1);
    r1 &= ~r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    return r0; // BX lr
    r1 = 0x0U;
    r0 = 0x0U;
    r0 = sub_0802FCA0(r0, r1, r2, r3); // 0x08003020: BL 0x0802FCA0
    r1 = r0;
    r0 = 0x08054FBCU; // [0x080031B4]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800302A: BL 0x0801191A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x4; // sp + 0x4
    r0 = sub_0802BFBC(r0, r1, r2, r3); // 0x0800305E: BL 0x0802BFBC
    r1 = r0;
    r0 = 0x08054FBCU; // [0x080031B4]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x08003068: BL 0x0801191A
    return r0;
    r0 = 0x08054FBCU; // [0x080031B4]
    r2 = 0x0U;
    r1 = 0x27U;
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0800307A
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08003080: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08003090;
    r1 = 0x08049978U /* &VTable_08049978 */; // [0x080031BC]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08003090:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08003090
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x08054FBCU; // [0x080031B4]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0x10);
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = 0x4; // sp + 0x4
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080030D2: BL __call_via_r3
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0879B704U; // [0x080031C0]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = 0x03001030U; // [0x080031C4]
    r1 = *(u32*)(r1);
    r0 = sub_08012588(r0, r1, r2, r3); // 0x080030F2: BL 0x08012588
    return r0;
    r1 = *(u32*)(r0);
    r2 = 0x03001030U; // [0x080031C4]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0879B704U; // [0x080031C0]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = *(u32*)(r2);
    r0 = sub_08012588(r0, r1, r2, r3); // 0x08003120: BL 0x08012588
    return r0;
    r1 = *(u32*)(r0);
    r2 = 0x03001030U; // [0x080031C4]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3 + 0x4) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0879B704U; // [0x080031C0]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = *(u32*)(r2);
    r0 = sub_08012588(r0, r1, r2, r3); // 0x0800315E: BL 0x08012588
    return r0;
    r1 = *(u32*)(r0);
    r2 = 0x03001030U; // [0x080031C4]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3 + 0x8) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3 + 0x4) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0879B704U; // [0x080031C0]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = *(u32*)(r2);
    r0 = sub_08012588(r0, r1, r2, r3); // 0x080031AC: BL 0x08012588
    return r0;
    r0 = r0;
    r7 = 0xD50107C9U; // [0x080034A8]
    r5 = (r0 >> 32);
    r4 = ((u32)((s32)r0 >> 32));
    r0 = (r0 << 12);
    r1 = stack[120]; // [sp + 0x1E0]
    r4 = (r0 >> 32);
    r1 = (r7 >> 1);
    r0 = ((u32)((s32)r6 >> 32));
    r0 = (r0 << 12);
    r1 = *(u32*)(r0);
    r2 = 0x03001030U; // [0x08003440]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3 + 0xC) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3 + 0x8) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3 + 0x4) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0879B704U; // [0x08003444]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = *(u32*)(r2);
    r0 = sub_08012588(r0, r1, r2, r3); // 0x08003220: BL 0x08012588
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0879B704U; // [0x08003444]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = 0x03001030U; // [0x08003440]
    r2 = *(u32*)(r0);
    r0 = sp;
    r0 = sub_08004098(r0, r1, r2, r3); // 0x08003242: BL 0x08004098
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r2 = 0x03001030U; // [0x08003440]
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0879B704U; // [0x08003444]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r2 = *(u32*)(r2);
    r0 = sp;
    r0 = sub_08004098(r0, r1, r2, r3); // 0x08003276: BL 0x08004098
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r2 = 0x03001030U; // [0x08003440]
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3 + 0x4) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2);
    *(u32*)(r3) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0879B704U; // [0x08003444]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r2 = *(u32*)(r2);
    r0 = sp;
    r0 = sub_08004098(r0, r1, r2, r3); // 0x080032BA: BL 0x08004098
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0);
    r6 = 0x0U;
    r0 -= 0x1U;
    r1 = (r0 << 2);
    *(u32*)(r5) = (u32)r0;
    r1 = r1 + r5;
    r7 = *(u32*)(r1 + 0x4);
    r0 -= 0x1U;
    *(u32*)(r5) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    stack[0] = r0; // [sp + 0x0]
    if (cmp_lhs <= cmp_rhs) goto loc_08003302;
loc_080032E6:
    r0 = stack[0]; // [sp + 0x0]
    r1 = r0 + r4;
    r0 = 0x08054FBCU; // [0x08003448]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_08004364(r0, r1, r2, r3); // 0x080032EE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080032FC;
    r0 = 0x1U;
    r0 <<= (r4 & 0xFF);
    r6 |= r0;
loc_080032FC:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_080032E6;
loc_08003302:
    r0 = *(u32*)(r5);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r5;
    *(u32*)(r5) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r6;
    return r0;
}

// ROM Address: 0x08003310..0x08003348 (56 bytes, Thumb)
u32 sub_08003310(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r7 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08003338;
    r4 = 0x0U;
loc_08003338:
    r0 = 0x1U;
    r0 <<= (r6 & 0xFF);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08003342;
    r4 = r0 - 1;
loc_08003342:
    r5 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08003364(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08003348..0x08003352 (10 bytes, Thumb)
u32 sub_08003348(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08054FBCU; // [0x08003448]
    r1 = r7 + r5;
    r2 = (r4 << 31);
    r0 = *(u32*)(r0 + 0x14);
    if (cmp_lhs == cmp_rhs) return sub_08003358(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08003358..0x08003718 (960 bytes, Thumb)
u32 sub_08003358(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08004396(r0, r1, r2, r3); // 0x08003358
    r4 = ((u32)((s32)r4 >> 1));
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) return sub_08003348(r0, r1, r2, r3);
    return r0;
    r1 = 0x1U;
    r0 = 0x0U;
    r0 = sub_0802FCA0(r0, r1, r2, r3); // 0x0800336C: BL 0x0802FCA0
    r1 = r0;
    r0 = 0x08054FBCU; // [0x08003448]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x08003376: BL 0x0801191A
    return r0;
    r0 = 0x08054FBCU; // [0x08003448]
    r2 = 0x0U;
    r1 = 0x1CU;
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08003386
    return r0;
    r0 = 0x08054FBCU; // [0x08003448]
    r2 = 0x13U;
    r1 = *(u32*)(r0 + 0x14);
    r0 = 0x0U;
    r2 = (r2 << 6);
    r1 = r1 + r2;
    *(u32*)(r1 + 0x18) = (u32)r0;
    return r0; // BX lr
    r0 = 0x08054FBCU; // [0x08003448]
    r2 = 0x10U;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u8*)(r0 + 0x1);
    r1 |= r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    return r0; // BX lr
    r0 = 0x08054FBCU; // [0x08003448]
    r2 = 0x10U;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u8*)(r0 + 0x1);
    r1 &= ~r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    return r0; // BX lr
    r1 = 0x08054FBCU; // [0x08003448]
    r2 = 0x13U;
    r1 = *(u32*)(r1 + 0x14);
    r2 = (r2 << 6);
    r1 = r1 + r2;
    r2 = *(u32*)(r1 + 0x18);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08003448]
    r0 = *(u32*)(r0 + 0x14);
    r0 = sub_080043D8(r0, r1, r2, r3); // 0x080033E4
    return r0;
    r1 = 0x08054FBCU; // [0x08003448]
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 += 0x24U;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r0 = 0x08054FBCU; // [0x08003448]
    r2 = 0x20U;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u8*)(r0 + 0x1);
    r1 |= r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    return r0; // BX lr
    r0 = 0x08054FBCU; // [0x08003448]
    r2 = 0x20U;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u8*)(r0 + 0x1);
    r1 &= ~r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    return r0; // BX lr
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800342E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800343A;
    r1 = 0x0804B5D8U /* &VTable_0804B5D8 */; // [0x0800344C]
    *(u32*)(r0) = (u32)r1;
loc_0800343A:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800343A
    return r0;
    r0 = ((u32)((s32)r6 >> 32));
    r0 = (r0 << 12);
    r1 = (r7 >> 1);
    r7 = 0x0FD26801U; // [0x0800373C]
    r5 = (r0 >> 32);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r0 = sub_08030384(r0, r1, r2, r3); // 0x08003462
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08003466
    r1 = r0 - 1;
    r0 = *(u32*)(r4);
    r2 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0;
    r0 = 0x08054FBCU; // [0x08003718]
    r2 = 0x0U;
    r1 = 0x1FU;
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08003484
    return r0;
    r5 = 0x9FU;
    r6 = 0x08054FBCU; // [0x08003718]
    r4 = 0x0U;
    r5 = (r5 << 3);
loc_08003494:
    r1 = 0x68U;
    r0 = *(u32*)(r6 + 0x14);
    r1 *= r4;
    r0 = r1 + r0;
    r0 = r0 + r5;
    r2 = *(u16*)(r0 + 0x18);
    *(u16*)(r0 + 0x16) = (u16)r2;
    r2 = *(u16*)(r0 + 0x1C);
    *(u16*)(r0 + 0x1A) = (u16)r2;
    r1 = *(u8*)(r0 + 0x13);
    r1 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080034B0;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x080034AC
loc_080034B0:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_08003494;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u32*)(r4);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u32*)(r4);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x080034E6
    r1 = r0;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080034EE: BL 0x0800FDFA
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r2 = stack[6]; // [sp + 0x18]
    r1 = r0 + r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    stack[7] = r1; // [sp + 0x1C]
    r1 = stack[11]; // [sp + 0x2C]
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08003512: BL 0x08046E58
    r5 = r0;
    r0 = 0x2U;
    r1 = stack[12]; // [sp + 0x30]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0800351C: BL 0x08046E58
    stack[2] = r0; // [sp + 0x8]
    r2 = stack[7]; // [sp + 0x1C]
    r1 = stack[2]; // [sp + 0x8]
    r0 = r2 - r5;
    r2 = stack[8]; // [sp + 0x20]
    stack[1] = r5; // [sp + 0x4]
    stack[1] = r0; // [sp + 0x4]
    r1 = r2 - r1;
    stack[9] = r0; // [sp + 0x24]
    r0 = 0x08054FBCU; // [0x08003718]
    stack[2] = r1; // [sp + 0x8]
    stack[10] = r1; // [sp + 0x28]
    r1 = *(u32*)(r0 + 0x24);
    r0 = 0x14; // sp + 0x14
    r2 = 0x24; // sp + 0x24
    r3 = 0x2C; // sp + 0x2C
    r0 = sub_08009816(r0, r1, r2, r3); // 0x08003540
    r2 = stack[5]; // [sp + 0x14]
    r0 = *(u32*)(r4);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u32*)(r4);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u32*)(r4);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08003584
    r1 = r0;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800358C: BL 0x0800FDFA
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r2 = stack[6]; // [sp + 0x18]
    r1 = r0 + r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    stack[7] = r1; // [sp + 0x1C]
    r1 = stack[11]; // [sp + 0x2C]
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080035B0: BL 0x08046E58
    r5 = r0;
    r0 = 0x2U;
    r1 = stack[12]; // [sp + 0x30]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080035BA: BL 0x08046E58
    stack[2] = r0; // [sp + 0x8]
    r2 = stack[7]; // [sp + 0x1C]
    r1 = stack[2]; // [sp + 0x8]
    r0 = r2 - r5;
    r2 = stack[8]; // [sp + 0x20]
    stack[1] = r5; // [sp + 0x4]
    stack[1] = r0; // [sp + 0x4]
    r1 = r2 - r1;
    stack[9] = r0; // [sp + 0x24]
    r0 = 0x08054FBCU; // [0x08003718]
    stack[2] = r1; // [sp + 0x8]
    stack[10] = r1; // [sp + 0x28]
    r1 = *(u32*)(r0 + 0x24);
    r0 = 0x14; // sp + 0x14
    r2 = 0x24; // sp + 0x24
    r3 = 0x2C; // sp + 0x2C
    r0 = sub_08009816(r0, r1, r2, r3); // 0x080035DE
    r2 = stack[6]; // [sp + 0x18]
    r0 = *(u32*)(r4);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0;
    r4 = *(u32*)(r0);
    r4 -= 0x1U;
    r1 = (r4 << 2);
    *(u32*)(r0) = (u32)r4;
    r1 = r1 + r0;
    r3 = *(u32*)(r1 + 0x4);
    r4 -= 0x1U;
    r1 = (r4 << 2);
    *(u32*)(r0) = (u32)r4;
    r1 = r1 + r0;
    r2 = *(u32*)(r1 + 0x4);
    r4 -= 0x1U;
    r1 = (r4 << 2);
    *(u32*)(r0) = (u32)r4;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r4 -= 0x1U;
    *(u32*)(r0) = (u32)r4;
    r4 = (r4 << 2);
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08031808(r0, r1, r2, r3); // 0x08003620
    return r0;
    r0 = 0x0U;
    r0 = sub_0805058C(r0, r1, r2, r3); // 0x0800362A
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800362E
    r4 = 0x08054FBCU; // [0x08003718]
    r0 = *(u32*)(r4 + 0x18);
    r0 = sub_08011DB4(r0, r1, r2, r3); // 0x08003636
    r0 = 0x0U;
    r0 = sub_080315B0(r0, r1, r2, r3); // 0x0800363C: BL 0x080315B0
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08003640
    r0 = *(u32*)(r4 + 0x18);
    r0 = sub_08011E0E(r0, r1, r2, r3); // 0x08003646
    r1 = 0x1U;
    r0 = *(u32*)(r4 + 0x24);
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x0800364E
    r0 = 0x0U;
    r0 = sub_08050568(r0, r1, r2, r3); // 0x08003654: BL 0x08050568
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08003658
    return r0;
    r4 = r0;
    r0 = 0x0U;
    r0 = sub_0805058C(r0, r1, r2, r3); // 0x08003664
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08003668
    r5 = 0x08054FBCU; // [0x08003718]
    r0 = *(u32*)(r5 + 0x18);
    r0 = sub_08011DB4(r0, r1, r2, r3); // 0x08003670
    r0 = *(u32*)(r4);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r0 = sub_08031E84(r0, r1, r2, r3); // 0x08003682: BL 0x08031E84
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08003686
    r0 = *(u32*)(r5 + 0x18);
    r0 = sub_08011E0E(r0, r1, r2, r3); // 0x0800368C
    r1 = 0x1U;
    r0 = *(u32*)(r5 + 0x24);
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x08003694
    r0 = 0x0U;
    r0 = sub_08050568(r0, r1, r2, r3); // 0x0800369A: BL 0x08050568
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800369E
    return r0;
    r1 = *(u32*)(r0);
    r4 = 0x08054FBCU; // [0x08003718]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r6 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r4 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r5 = 0x4F8U; // (159 << 3)
    r1 *= r3;
    r0 = r1 + r0;
    r0 = r0 + r5;
    r0 = *(u8*)(r0 + 0x14);
    r7 = 0x086B82ECU; // [0x0800371C]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r7;
    r0 = sub_0801712C(r0, r1, r2, r3); // 0x080036D0
    r0 = *(u32*)(r4 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x500U; // (5 << 8)
    r0 = r0 + r1;
    *(u8*)(r0 + 0xC) = (u8)r6;
    r0 = 0x03001C34U; // [0x08003720]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080036FC;
    r1 = *(u32*)(r4 + 0x14);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r1 = r1 + r5;
    r0 = sub_08010692(r0, r1, r2, r3); // 0x080036F8
loc_080036FC:
    r0 = *(u32*)(r4 + 0x14);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r0 = r0 + r5;
    r0 = *(u8*)(r0 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r7;
    r0 = sub_0801711C(r0, r1, r2, r3); // 0x08003712
    return r0;
}

// ROM Address: 0x08003718..0x08003724 (12 bytes, Thumb)
u32 sub_08003718(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x60421808U; // [0x08003A0C]
    r5 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08003724..0x08003986 (610 bytes, Thumb)
u32 sub_08003724(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1U;
    r0 = 0x0U;
    r0 = sub_080335BC(r0, r1, r2, r3); // 0x0800372A: BL 0x080335BC
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0800372E
    return r0;
    r1 = 0x08054FBCU; // [0x080039D4]
    r1 = *(u32*)(r1);
    r1 = *(u16*)(r1 + 0x4);
    r2 = (r1 << 31);
    r1 = *(u32*)(r0);
    r2 = (r2 >> 31);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r0 = sub_0803FA38(r0, r1, r2, r3); // 0x0800374E
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x08054FBCU; // [0x080039D4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r1 = *(u32*)(r1 + 0xC);
    if (cmp_lhs == cmp_rhs) goto loc_0800376E;
    r0 = 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r0;
    return r0; // BX lr
loc_0800376E:
    r0 = 0x0U;
    *(u32*)(r1 + 0xC) = (u32)r0;
    return r0; // BX lr
    r5 = 0x9FU;
    r6 = 0x08054FBCU; // [0x080039D4]
    r2 = 0x0U;
    r1 = 0x0U;
    r5 = (r5 << 3);
loc_08003780:
    r3 = 0x68U;
    r4 = *(u32*)(r6 + 0x14);
    r3 *= r1;
    r3 = r3 + r4;
    r3 = r3 + r5;
    r3 += 0x24U;
    r3 = *(u32*)(r3);
    r2 = r3 + r2;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    if (cmp_lhs < cmp_rhs) goto loc_08003780;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r3 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080039D8]
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    r2 = (r2 << 2);
    r2 = *(u32*)(r3 + r2);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r3 = 0x00000445U; // [0x080039E0]
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r1 = 0x03002B5CU; // [0x080039DC]
    r2 *= r3;
    r0 = *(u16*)(r1 + 0x10);
    r2 = ((u32)((s32)r2 >> 8));
    r0 = r0 + r2;
    *(u16*)(r1 + 0x10) = (u16)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r3 = 0xA4U;
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r1 = 0x03002B5CU; // [0x080039DC]
    r2 *= r3;
    r0 = *(u16*)(r1 + 0x8);
    r2 = ((u32)((s32)r2 >> 6));
    r0 = r0 + r2;
    *(u16*)(r1 + 0x8) = (u16)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x03002B5CU; // [0x080039DC]
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r1 + 0x20);
    r2 = r2 + r0;
    *(u32*)(r1 + 0x20) = (u32)r2;
    r2 = *(u32*)(r1 + 0x1C);
    r0 = r2 + r0;
    *(u32*)(r1 + 0x1C) = (u32)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x03002B5CU; // [0x080039DC]
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r1 + 0x18);
    r0 = r0 + r2;
    *(u32*)(r1 + 0x18) = (u32)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x03002B5CU; // [0x080039DC]
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r1 + 0x24);
    r0 = r0 + r2;
    *(u32*)(r1 + 0x24) = (u32)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x03002B5CU; // [0x080039DC]
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r1 + 0x14);
    r0 = r0 + r2;
    *(u32*)(r1 + 0x14) = (u32)r0;
    return r0; // BX lr
    r4 = 0x03002B5CU; // [0x080039DC]
    r4 += 0xCU;
    r1 = *(u16*)(r4);
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08003864: BL 0x08046E58
    *(u16*)(r4) = (u16)r0;
    return r0;
    r4 = 0x03002B5CU; // [0x080039DC]
    r4 += 0x1U;
    r1 = *(u8*)(r4);
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08003876: BL 0x08046E58
    *(u8*)(r4) = (u8)r0;
    return r0;
    r4 = 0x03002B5CU; // [0x080039DC]
    r4 += 0x2U;
    r1 = *(u8*)(r4);
    r0 = 0x2U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08003888: BL 0x08046E58
    *(u8*)(r4) = (u8)r0;
    return r0;
    r0 = 0x03002B5CU; // [0x080039DC]
    r1 = *(u16*)(r0 + 0xE);
    r3 = (r1 << 3);
    r1 = r3 - r1;
    r1 = (r1 >> 3);
    *(u16*)(r0 + 0xE) = (u16)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = 0x03002B5CU; // [0x080039DC]
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u8*)(r1);
    r0 = r0 + r2;
    *(u8*)(r1) = (u8)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    r0 = sub_0803643C(r0, r1, r2, r3); // 0x080038C4: BL 0x0803643C
    r1 = r0;
    r0 = 0x08054FBCU; // [0x080039D4]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x080038CE: BL 0x0801191A
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x4; // sp + 0x4
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x23U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x08054FBCU; // [0x080039D4]
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080038FC
    return r0;
    r3 = *(u32*)(r0);
    r3 -= 0x1U;
    r1 = (r3 << 2);
    *(u32*)(r0) = (u32)r3;
    r1 = r1 + r0;
    r2 = *(u32*)(r1 + 0x4);
    r3 -= 0x1U;
    r1 = (r3 << 2);
    *(u32*)(r0) = (u32)r3;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 -= 0x1U;
    *(u32*)(r0) = (u32)r3;
    r3 = (r3 << 2);
    r0 = r3 + r0;
    r4 = *(u32*)(r0 + 0x4);
    r3 = 0x68U;
    r0 = 0x08054FBCU; // [0x080039D4]
    r3 *= r4;
    r0 = *(u32*)(r0 + 0x14);
    r0 = r3 + r0;
    r3 = 0x4F8U; // (159 << 3)
    r0 = r0 + r3;
    r0 = sub_08013B54(r0, r1, r2, r3); // 0x08003936
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0);
    r3 = 0x68U;
    r0 -= 0x1U;
    r1 = (r0 << 2);
    *(u32*)(r4) = (u32)r0;
    r1 = r1 + r4;
    r1 = *(u32*)(r1 + 0x4);
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r2 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x080039D4]
    r2 *= r3;
    r0 = *(u32*)(r0 + 0x14);
    r0 = r2 + r0;
    r2 = 0x4F8U; // (159 << 3)
    r0 = r0 + r2;
    r0 = sub_08013BCC(r0, r1, r2, r3); // 0x08003966
    r1 = *(u32*)(r4);
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r1 = r1 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0;
    r0 = 0x08054FBCU; // [0x080039D4]
    r2 = 0x40U;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u8*)(r0 + 0x1);
    r1 |= r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    return r0; // BX lr
}

// ROM Address: 0x08003986..0x0800399E (24 bytes, Thumb)
u32 sub_08003986(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800399E(r0, r1, r2, r3);
    r2 = 0x1U;
    return sub_080039A0(r0, r1, r2, r3);
}

// ROM Address: 0x0800399E..0x080039D4 (54 bytes, Thumb)
u32 sub_0800399E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r1 -= 0x4U;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x4; // sp + 0x4
    r0 -= 0x4U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x0U;
    r0 = sub_08026DE4(r0, r1, r2, r3); // 0x080039C2
    r1 = r0;
    r0 = 0x08054FBCU; // [0x080039D4]
    r0 = *(u32*)(r0 + 0x18);
    r0 = List_Append(r0, r1, r2, r3); // 0x080039CC: BL 0x0801191A
    return r0;
}

// ROM Address: 0x080039D4..0x080039D6 (2 bytes, Thumb)
u32 sub_080039D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x4A9D0091U; // [0x08003CC8]
    return r0;
}

// ROM Address: 0x080039D6..0x08003A74 (158 bytes, Thumb)
u32 sub_080039D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r0 >> 32);
    r6 = (r0 >> 32);
    cmp_lhs = (s32)r3; cmp_rhs = 92;
    r0 = (r0 << 12);
    r5 = (r0 << 17);
    r0 = r0;
    r1 = *(u32*)(r0);
    r3 = 0x68U;
    r1 -= 0x1U;
    r2 = (r1 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    r4 = *(u32*)(r2 + 0x4);
    r2 = 0x08054FBCU; // [0x08003C44]
    r3 *= r4;
    r2 = *(u32*)(r2 + 0x14);
    r2 = r3 + r2;
    r3 = 0x4F8U; // (159 << 3)
    r2 = r2 + r3;
    r2 += 0x2CU;
    r2 = *(u16*)(r2);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r2 = *(u32*)(r0);
    r3 = 0x68U;
    r2 -= 0x1U;
    r1 = (r2 << 2);
    *(u32*)(r0) = (u32)r2;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08003C44]
    r2 *= r3;
    r0 = *(u32*)(r0 + 0x14);
    r0 = r2 + r0;
    r2 = 0x4F8U; // (159 << 3)
    r0 = r0 + r2;
    r0 += 0x2CU;
    r2 = *(u16*)(r0);
    r1 = r2 + r1;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_08003A44:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08003A44;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080001C6(r0, r1, r2, r3); // 0x08003A66
    r0 += 0x1A8U;
    r1 = (r4 << 10);
    *(u32*)(r0) = (u32)r1;
    return r0;
}

// ROM Address: 0x08003A74..0x08003B12 (158 bytes, Thumb)
u32 sub_08003A74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)(r0);
    r3 -= 0x1U;
    r1 = (r3 << 2);
    *(u32*)(r0) = (u32)r3;
    r3 -= 0x1U;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 = (r3 << 2);
    *(u32*)(r0) = (u32)r3;
    r3 -= 0x1U;
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    r4 = (r3 << 2);
    *(u32*)(r0) = (u32)r3;
    r3 -= 0x1U;
    r4 = r4 + r0;
    r4 = *(u32*)(r4 + 0x4);
    r5 = (r3 << 2);
    *(u32*)(r0) = (u32)r3;
    r5 = r5 + r0;
    r5 = *(u32*)(r5 + 0x4);
    r3 -= 0x1U;
    *(u32*)(r0) = (u32)r3;
    r3 = (r3 << 2);
    r0 = r3 + r0;
    r3 = *(u32*)(r0 + 0x4);
    r0 = 0x08054FBCU; // [0x08003C44]
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x14);
    if (cmp_lhs != cmp_rhs) return sub_08003B12(r0, r1, r2, r3);
    r6 = *(u8*)(r0);
    r3 = 0x68U;
    r3 *= r6;
    r0 = r3 + r0;
    r3 = 0x4F8U; // (159 << 3)
    r3 = r0 + r3;
    r0 = r3;
    r0 += 0x28U;
    r6 = *(u8*)(r0);
    r5 = r6 + r5;
    r5 = (r5 << 24);
    r5 = (r5 >> 24);
loc_08003ACC:
    *(u8*)(r0) = (u8)r5;
    r6 = *(u8*)(r0);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_08003ACC;
    r0 = r3;
    r0 += 0x29U;
    r5 = *(u8*)(r0);
    r4 = r5 + r4;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
loc_08003AE0:
    *(u8*)(r0) = (u8)r4;
    r5 = *(u8*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08003AE0;
    r0 = r3;
    r0 += 0x2AU;
    r4 = *(u8*)(r0);
    r2 = r4 + r2;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
loc_08003AF4:
    *(u8*)(r0) = (u8)r2;
    r4 = *(u8*)(r0);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08003AF4;
    r0 = r3;
    r0 += 0x2BU;
    r2 = *(u8*)(r0);
    r1 = r2 + r1;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
loc_08003B08:
    *(u8*)(r0) = (u8)r1;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08003B08;
    return sub_08003B3A(r0, r1, r2, r3);
}

// ROM Address: 0x08003B12..0x08003C44 (306 bytes, Thumb)
u32 sub_08003B12(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r3;
    r3 = (r6 << 4);
    r6 = r3 - r6;
    r3 = 0x4C0U; // (19 << 6)
    r3 = r0 + r3;
    *(u32*)(r3 + 0x2C) = (u32)r1;
    *(u32*)(r3 + 0x28) = (u32)r2;
    r1 = 0x4FU;
    r6 = (r6 << 2);
    r1 = (r1 << 4);
    *(u32*)(r3 + 0x24) = (u32)r4;
    *(u32*)(r3 + 0x20) = (u32)r5;
    r0 = r0 + r1;
    r1 = 0x0U;
    *(u32*)(r3 + 0x1C) = (u32)r6;
loc_08003B32:
    *(u8*)(r0) = (u8)r1;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08003B32;
    r0 = 0x03001C34U; // [0x08003C48]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08003B46;
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x08003B42
loc_08003B46:
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r2 = r2 + r0;
    r4 = *(u32*)(r2 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r4; cmp_rhs = 200;
    if (cmp_lhs <= cmp_rhs) goto loc_08003B66;
    r4 = 0xC8U;
loc_08003B66:
    r3 = 0x68U;
    r0 = 0x08054FBCU; // [0x08003C44]
    r1 *= r3;
    r0 = *(u32*)(r0 + 0x14);
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r5 = r0 + r1;
    r0 = r5;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x08003B78
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_08003B92;
    r2 = r4;
    r1 = r0;
    r0 = r5;
    r0 = sub_08013678(r0, r1, r2, r3); // 0x08003B86
    r1 = r4;
    r0 = r5;
    r0 = sub_080135BC(r0, r1, r2, r3); // 0x08003B8E
loc_08003B92:
    return r0;
    r2 = *(u32*)(r0);
    r2 -= 0x1U;
    r1 = (r2 << 2);
    *(u32*)(r0) = (u32)r2;
    r2 -= 0x1U;
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r3 = (r2 << 2);
    *(u32*)(r0) = (u32)r2;
    r3 = r3 + r0;
    r3 = *(u32*)(r3 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x4);
    stack[3] = r2; // [sp + 0xC]
    r2 = *(u32*)(r0);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r2 = 0x1U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x08054FBCU; // [0x08003C44]
    r4 = *(u32*)(r0 + 0x10);
    stack[0] = r1; // [sp + 0x0]
    r1 = 0x0U;
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x8; // sp + 0x8
    r0 = 0x0U;
    r0 = sub_0803A84A(r0, r1, r2, r3); // 0x08003BD8
    r2 = r0;
    r1 = *(u8*)(r0 + 0x4);
    r0 = r4;
    r0 = sub_0800927E(r0, r1, r2, r3); // 0x08003BE2
    return r0;
    r1 = 0x03001004U /* &g_SramPresentFlag */; // [0x08003C4C]
    r3 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r3;
    return r0; // BX lr
    r2 = *(u32*)(r0);
    r1 = 0x08054FBCU; // [0x08003C44]
    r2 -= 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r2 = (r0 << 4);
    r2 = r2 - r0;
    r0 = 0x4C0U; // (19 << 6)
    r0 = r1 + r0;
    r2 = (r2 << 2);
    *(u32*)(r0 + 0x1C) = (u32)r2;
    r2 = 0x0U;
    *(u32*)(r0 + 0x20) = (u32)r2;
    *(u32*)(r0 + 0x24) = (u32)r2;
    *(u32*)(r0 + 0x28) = (u32)r2;
    *(u32*)(r0 + 0x2C) = (u32)r2;
    r0 = 0x4F0U; // (79 << 4)
    r0 = r1 + r0;
    r1 = 0x1U;
loc_08003C2E:
    *(u8*)(r0) = (u8)r1;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08003C2E;
    r0 = 0x03001C34U; // [0x08003C48]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08003C42;
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x08003C3E
loc_08003C42:
    return r0;
}

// ROM Address: 0x08003C44..0x08003C46 (2 bytes, Thumb)
u32 sub_08003C44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0xF0423801U; // [0x08003F38]
    return r0;
}

// ROM Address: 0x08003C46..0x08003C6C (38 bytes, Thumb)
u32 sub_08003C46(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    r4 = ((u32)((s32)r0 >> 32));
    r0 = (r0 << 12);
    r1 = 0x0U;
loc_08003C52:
    r3 = *(u32*)(r0);
    r1 = (r1 << 7);
    r2 = *(u8*)(r3);
    r3 += 0x1U;
    *(u32*)(r0) = (u32)r3;
    r3 = (r2 << 25);
    r3 = (r3 >> 25);
    r1 = r1 + r3;
    r2 = (r2 << 24);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08003C52;
    r0 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08003C70(r0, r1, r2, r3);
    r0 = ((u32)((s32)r1 >> 1));
    return r0;
}

// ROM Address: 0x08003C6E..0x08003C70 (2 bytes, Thumb)
u32 sub_08003C6E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x08003C70..0x08003C74 (4 bytes, Thumb)
u32 sub_08003C70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = ((u32)((s32)r1 >> 1));
    return r0; // BX lr
}

// ROM Address: 0x08003C74..0x08003C8A (22 bytes, Thumb)
u32 sub_08003C74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    r3 = r2 + 1;
    *(u32*)(r1) = (u32)r3;
    r1 = *(u32*)(r0);
    r3 = *(u8*)(r2);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r3;
    return r0; // BX lr
}

// ROM Address: 0x08003C8A..0x08003CAC (34 bytes, Thumb)
u32 sub_08003C8A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
loc_08003C8E:
    r4 = *(u32*)(r1);
    r2 = (r2 << 7);
    r3 = *(u8*)(r4);
    r4 += 0x1U;
    *(u32*)(r1) = (u32)r4;
    r4 = (r3 << 25);
    r4 = (r4 >> 25);
    r2 = r2 + r4;
    r3 = (r3 << 24);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08003C8E;
    r1 = (r2 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08003CAC(r0, r1, r2, r3);
    r1 = ((u32)((s32)r2 >> 1));
    r2 = (u32)(-(s32)r1);
    return sub_08003CAE(r0, r1, r2, r3);
}

// ROM Address: 0x08003CAC..0x08003CF6 (74 bytes, Thumb)
u32 sub_08003CAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = ((u32)((s32)r2 >> 1));
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r3 = *(u32*)(r1);
    r2 = *(u8*)(r3);
    r3 += 0x1U;
    *(u32*)(r1) = (u32)r3;
    r1 = (r2 << 2);
    r2 = 0x08055098U; // [0x08003F40]
    r1 = *(u32*)(r2 + r1);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003CCE: BL 0x08046AA2
    return r0;
    r3 = *(u32*)(r1);
    r2 = *(u8*)(r3);
    r3 += 0x1U;
    *(u32*)(r1) = (u32)r3;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = (r2 << 2);
    r2 = 0x08055478U; // [0x08003F44]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r2 + r1);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003CF0: BL 0x08046AA2
    return r0;
}

// ROM Address: 0x08003CF6..0x08003D10 (26 bytes, Thumb)
u32 sub_08003CF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08003D10(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08003D10(r0, r1, r2, r3);
    r1 = 0x1U;
    return sub_08003D12(r0, r1, r2, r3);
}

// ROM Address: 0x08003D10..0x08003D38 (40 bytes, Thumb)
u32 sub_08003D10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0);
    r1 = 0x1U;
    r2 |= r3;
    if (cmp_lhs != cmp_rhs) goto loc_08003D2C;
    r1 = 0x0U;
loc_08003D2C:
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0);
    return r0;
}

// ROM Address: 0x08003D3A..0x08003F40 (518 bytes, Thumb)
u32 sub_08003D3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    r1 = r2 + r1;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    r1 = r2 - r1;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    r2 *= r1;
    *(u32*)(r0) = (u32)r2;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r4 = r1 + r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08003D8A: BL 0x08046E58
    *(u32*)(r4) = (u32)r0;
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r4 = r1 + r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08003DA2: BL 0x08046E58
    *(u32*)(r4) = (u32)r1;
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0);
    r1 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08003DC0;
    r1 = 0x0U;
loc_08003DC0:
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0);
    r1 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08003DDA;
    r1 = 0x0U;
loc_08003DDA:
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0);
    r1 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08003DF4;
    r1 = 0x0U;
loc_08003DF4:
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0);
    r1 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08003E0E;
    r1 = 0x0U;
loc_08003E0E:
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0);
    r1 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_08003E28;
    r1 = 0x0U;
loc_08003E28:
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0);
    r1 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08003E42;
    r1 = 0x0U;
loc_08003E42:
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = *(u32*)(r1);
    r2 = *(u8*)(r0);
    r3 = *(u8*)(r0 + 0x1);
    r2 = (r2 << 8);
    r2 |= r3;
    r0 = r0 + r2;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r2 = *(u32*)(r0);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u32*)(r1);
    if (cmp_lhs != cmp_rhs) goto loc_08003E76;
    r2 = *(u8*)(r0);
    r3 = *(u8*)(r0 + 0x1);
    r2 = (r2 << 8);
    r2 |= r3;
    r0 = r0 + r2;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
loc_08003E76:
    r0 += 0x2U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r2 = *(u32*)(r1);
    r4 = r0;
    r0 = *(u8*)(r2);
    r2 += 0x1U;
    *(u32*)(r1) = (u32)r2;
    r5 = (r0 << 2);
    r0 = 0x08055098U; // [0x08003F40]
    r1 = *(u32*)(r0 + r5);
    r0 = r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003E98: BL 0x08046AA2
    r0 = *(u32*)(r4);
    r1 = 0x08055478U; // [0x08003F44]
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + r5);
    r0 += 0x1U;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003EAE: BL 0x08046AA2
    return r0;
    r2 = *(u32*)(r1);
    r4 = r0;
    r0 = *(u8*)(r2);
    r2 += 0x1U;
    *(u32*)(r1) = (u32)r2;
    r5 = (r0 << 2);
    r0 = 0x08055098U; // [0x08003F40]
    r1 = *(u32*)(r0 + r5);
    r0 = r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003EC8: BL 0x08046AA2
    r0 = *(u32*)(r4);
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r1 = *(u32*)(r0);
    r1 += 0x1U;
    *(u32*)(r0) = (u32)r1;
    r0 = r1;
    r1 = 0x08055478U; // [0x08003F44]
    r1 = *(u32*)(r1 + r5);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003EDE: BL 0x08046AA2
    return r0;
    r2 = *(u32*)(r1);
    r4 = r0;
    r0 = *(u8*)(r2);
    r2 += 0x1U;
    *(u32*)(r1) = (u32)r2;
    r5 = (r0 << 2);
    r0 = 0x08055098U; // [0x08003F40]
    r1 = *(u32*)(r0 + r5);
    r0 = r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003EF8: BL 0x08046AA2
    r0 = *(u32*)(r4);
    r1 = 0x08055478U; // [0x08003F44]
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1 + r5);
    r0 += 0x1U;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003F0A: BL 0x08046AA2
    return r0;
    r2 = *(u32*)(r1);
    r4 = r0;
    r0 = *(u8*)(r2);
    r2 += 0x1U;
    *(u32*)(r1) = (u32)r2;
    r5 = (r0 << 2);
    r0 = 0x08055098U; // [0x08003F40]
    r1 = *(u32*)(r0 + r5);
    r0 = r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003F24: BL 0x08046AA2
    r0 = *(u32*)(r4);
    r1 = 0x08055478U; // [0x08003F44]
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + r5);
    r0 -= 0x1U;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003F3A: BL 0x08046AA2
    return r0;
}

// ROM Address: 0x08003F40..0x08003F48 (8 bytes, Thumb)
u32 sub_08003F40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r3 + r2) = r0;
    r5 = (r0 >> 32);
    *(u8*)(r7 + r1) = (u8)r0;
    r5 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08003F48..0x08003FEE (166 bytes, Thumb)
u32 sub_08003F48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    r4 = r0;
    r0 = *(u8*)(r2);
    r2 += 0x1U;
    *(u32*)(r1) = (u32)r2;
    r5 = (r0 << 2);
    r0 = 0x08055098U; // [0x08004030]
    r1 = *(u32*)(r0 + r5);
    r0 = r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003F5C: BL 0x08046AA2
    r0 = *(u32*)(r4);
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r0 = r1;
    r1 = 0x08055478U; // [0x08004034]
    r1 = *(u32*)(r1 + r5);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003F72: BL 0x08046AA2
    return r0;
    r2 = *(u32*)(r1);
    r4 = r0;
    r0 = *(u8*)(r2);
    r2 += 0x1U;
    *(u32*)(r1) = (u32)r2;
    r5 = (r0 << 2);
    r0 = 0x08055098U; // [0x08004030]
    r1 = *(u32*)(r0 + r5);
    r0 = r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003F8C: BL 0x08046AA2
    r0 = *(u32*)(r4);
    r1 = 0x08055478U; // [0x08004034]
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1 + r5);
    r0 -= 0x1U;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08003F9E: BL 0x08046AA2
    return r0;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r2 = *(u32*)(r1 + 0x4);
    r0 += 0x44U;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r3 = r0;
    r0 = *(u32*)(r0 + 0x44);
    r3 += 0x44U;
    r0 = (r0 << 2);
    r0 = r0 + r3;
    r2 = *(u32*)(r0);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r0 = *(u32*)(r1);
    if (cmp_lhs != cmp_rhs) goto loc_08003FE0;
    r0 += 0x2U;
    *(u32*)(r1) = (u32)r0;
    r0 = *(u32*)(r3);
    r0 -= 0x1U;
    *(u32*)(r3) = (u32)r0;
    return r0; // BX lr
loc_08003FE0:
    r2 = *(u8*)(r0);
    r3 = *(u8*)(r0 + 0x1);
    r2 = (r2 << 8);
    r2 |= r3;
    r0 = r0 - r2;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08003FEE..0x08003FF8 (10 bytes, Thumb)
u32 sub_08003FEE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    r5 = *(u8*)(r2);
    r2 += 0x1U;
    *(u32*)(r1) = (u32)r2;
    return r0;
}

// ROM Address: 0x08003FF8..0x08004018 (32 bytes, Thumb)
u32 sub_08003FF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
loc_08003FFA:
    r4 = *(u32*)(r1);
    r2 = (r2 << 7);
    r3 = *(u8*)(r4);
    r4 += 0x1U;
    *(u32*)(r1) = (u32)r4;
    r4 = (r3 << 25);
    r4 = (r4 >> 25);
    r2 = r2 + r4;
    r3 = (r3 << 24);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08003FFA;
    r3 = (r2 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08004018(r0, r1, r2, r3);
    r2 = ((u32)((s32)r2 >> 1));
    r3 = (u32)(-(s32)r2);
    return sub_0800401A(r0, r1, r2, r3);
}

// ROM Address: 0x08004018..0x0800408E (118 bytes, Thumb)
u32 sub_08004018(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = ((u32)((s32)r2 >> 1));
    r2 = *(u32*)(r0);
    r4 = r2 + 1;
    r2 = (r2 << 2);
    r2 = r2 + r0;
    *(u32*)(r0) = (u32)r4;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r5 -= 0x1U;
    if (cmp_lhs != cmp_rhs) return sub_08003FF8(r0, r1, r2, r3);
    return r0; // BX lr
    r0 = r0;
    *(u32*)(r3 + r2) = r0;
    r5 = (r0 >> 32);
    *(u8*)(r7 + r1) = (u8)r0;
    r5 = (r0 >> 32);
    r3 = 0x03001034U; // [0x08004158]
    r4 = r0;
    r0 = *(u32*)(r3);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r3;
    *(u32*)(r3) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08004052;
    r2 = r4;
    r2 += 0x5CU;
loc_08004052:
    r5 = 0x03001034U; // [0x08004158]
    *(u32*)(r4 + 0x58) = (u32)r2;
    r5 -= 0x4U;
    *(u32*)(r5) = (u32)r2;
    r0 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r7 = 0x080554C0U; // [0x0800415C]
    *(u32*)(r4 + 0x44) = (u32)r0;
    r6 = 0x4; // sp + 0x4
    r1 = stack[1]; // [sp + 0x4]
    r0 = *(u8*)(r1);
    r1 += 0x1U;
    stack[1] = r1; // [sp + 0x4]
    r0 = (r0 << 2);
    r2 = *(u32*)(r7 + r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800408E(r0, r1, r2, r3);
    r0 = 0x03001034U; // [0x08004158]
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    r2 = (r1 << 2);
    *(u32*)(r0) = (u32)r1;
    r0 = r2 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800408A;
    r0 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x58);
    *(u32*)(r5) = (u32)r0;
loc_0800408A:
    return r0;
}

// ROM Address: 0x0800408E..0x08004092 (4 bytes, Thumb)
u32 sub_0800408E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r6;
    r0 = r4;
    return r0;
}

// ROM Address: 0x08004098..0x080040B2 (26 bytes, Thumb)
u32 sub_08004098(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080040B2(r0, r1, r2, r3);
    r0 = 0x6CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080040A6: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080040B2(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080040B2..0x08004102 (80 bytes, Thumb)
u32 sub_080040B2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0U;
    *(u32*)(r4) = (u32)r3;
    *(u32*)(r4 + 0x44) = (u32)r3;
    r0 = *(u32*)(r6);
    r1 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080040E8;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_080040F4;
    r0 = (r1 << 9);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080040C6: BL 0x0803D5B8
    r5 = r0;
    r0 = *(u32*)(r6);
    r1 = r0 + 4;
    r0 = r5;
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x080040D2: BL 0x08049120
    r2 = r7;
    r1 = r5;
    r0 = r4;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080040DC
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080040E2: BL 0x0803D63C
    goto loc_080040FE;
loc_080040E8:
    r2 = r7;
    r1 = r0 + 3;
    r0 = r4;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080040EE
    goto loc_080040FE;
loc_080040F4:
    r2 = 0x3CU;
    r1 = 0x08004160U;
    r0 = 0x0805553CU; // [0x08004198]
    r0 = Irq_WriteMaster1(r0, r1, r2, r3); // 0x080040FA: BL 0x0803DF14
loc_080040FE:
    r0 = r4;
    return sub_080040B0(r0, r1, r2, r3);
}

// ROM Address: 0x08004102..0x08004156 (84 bytes, Thumb)
u32 sub_08004102(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03001034U; // [0x08004158]
    r1 = *(u32*)(r5);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08004152;
    r3 = 0x0U;
    r2 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08004142;
loc_08004114:
    r1 = (r2 << 2);
    r1 = r1 + r5;
    r1 = *(u32*)(r1 + 0x4);
    r4 = *(u32*)(r1 + 0x58);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800413A;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08004138;
    r3 = *(u32*)(r0);
    *(u32*)(r1 + 0x5C) = (u32)r3;
    r3 = *(u32*)(r0 + 0x4);
    *(u32*)(r1 + 0x60) = (u32)r3;
    r3 = *(u32*)(r0 + 0x8);
    *(u32*)(r1 + 0x64) = (u32)r3;
    r3 = *(u32*)(r0 + 0xC);
    *(u32*)(r1 + 0x68) = (u32)r3;
    r3 = r1;
    r3 += 0x5CU;
loc_08004138:
    *(u32*)(r1 + 0x58) = (u32)r3;
loc_0800413A:
    r1 = *(u32*)(r5);
    r2 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08004114;
loc_08004142:
    r0 = *(u32*)(r5);
    r1 = 0x03001034U; // [0x08004158]
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0);
    r1 -= 0x4U;
    r0 = *(u32*)(r0 + 0x58);
    *(u32*)(r1) = (u32)r0;
loc_08004152:
    return r0; // BX lr
}

// ROM Address: 0x08004212..0x0800437C (362 bytes, Thumb)
u32 sub_08004212(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r7 >> 32);
    r4 = 0x08004228U;
    r4 = (r0 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0800422E
    return r0;
    r1 = r0 + 4;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08004246
    return r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x0U;
    r0 = sub_08012588(r0, r1, r2, r3); // 0x08004254: BL 0x08012588
    return r0;
    r0 = r0;
    r1 = *(u8*)(r0 + 0x1);
    r4 = r0;
    r2 = 0x4C0U; // (19 << 6)
    r0 = (r1 << 29);
    r0 = (r0 >> 31);
    r5 = r4 + r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08004288;
    r0 = *(u32*)(r5 + 0x14);
    r0 -= 0x1U;
    *(u32*)(r5 + 0x14) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08004288;
    r0 = 0x4U;
    r1 &= ~r0;
    *(u8*)(r4 + 0x1) = (u8)r1;
    r1 = 0x0U;
    r0 = 0x0877CD58U /* EventPoolRecord */; // [0x08004518]
    r0 = sub_08012588(r0, r1, r2, r3); // 0x08004284: BL 0x08012588
loc_08004288:
    r1 = *(u8*)(r4 + 0x1);
    r0 = (r1 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080042AA;
    r0 = *(u32*)(r5 + 0x18);
    r2 = 0x00008CA0U; // [0x0800451C]
    r0 += 0x1U;
    *(u32*)(r5 + 0x18) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080042AA;
    r0 = 0x10U;
    r1 &= ~r0;
    *(u8*)(r4 + 0x1) = (u8)r1;
    r1 = 0x0U;
    r0 = 0x0877CD88U /* EventPoolRecord */; // [0x08004520]
    r0 = sub_08012588(r0, r1, r2, r3); // 0x080042A6: BL 0x08012588
loc_080042AA:
    r0 = *(u32*)(r5 + 0x1C);
    r6 = 0x03001C34U; // [0x08004524]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080042C2;
    r0 -= 0x1U;
    *(u32*)(r5 + 0x1C) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080042C2;
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080042C2;
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x080042BE
loc_080042C2:
    r0 = *(u8*)(r4 + 0x1);
    r0 = (r0 << 26);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080042F8;
    r1 = *(u32*)(r6);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080042F8;
    r0 = 0x080555A4U; // [0x08004528]
    r5 = *(u32*)(r0 + 0xC);
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080042D6: BL 0x0800FDFA
    r5 += 0x80U;
    r1 = *(u32*)(r5 + 0x2C);
    r0 = sp;
    r0 = sub_08009324(r0, r1, r2, r3); // 0x080042E0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080042F8;
    r0 = *(u8*)(r4 + 0x1);
    r1 = 0x20U;
    r0 &= ~r1;
    *(u8*)(r4 + 0x1) = (u8)r0;
    r0 = 0x0877CCDCU /* EventPoolRecord */; // [0x0800452C]
    r1 = 0x0U;
    r0 = sub_08012588(r0, r1, r2, r3); // 0x080042F4: BL 0x08012588
loc_080042F8:
    return r0;
    r5 = r0;
    r1 = 0x0U;
    r2 = 0x000008A8U; // [0x08004530]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08004304: BL 0x0804912C
    r4 = 0x0U;
    r6 = 0x9FU;
    r7 = 0x086FDA4CU; // [0x08004534]
    r6 = (r6 << 3);
loc_08004310:
    r0 = (r4 << 3);
    r0 = r0 + r4;
    r0 = (r0 << 1);
    r1 = r0 + r7;
    r0 = 0x68U;
    r0 *= r4;
    r0 = r0 + r5;
    r0 = r0 + r6;
    r0 = sub_0801339C(r0, r1, r2, r3); // 0x08004320
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_08004310;
    return r0;
    r2 = 0x4C0U; // (19 << 6)
    r1 = 0x03000F90U; // [0x08004538]
    r0 = r0 + r2;
    r2 = *(u32*)(r0 + 0x10);
    r1 = *(u32*)(r1 + 0x4);
    r1 = r2 - r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
    return r0; // BX lr
    r2 = r0;
    r0 = 0x0U;
    r4 = 0x9FU;
    r1 = 0x0U;
    r4 = (r4 << 3);
loc_0800434A:
    r3 = 0x68U;
    r3 *= r1;
    r3 = r3 + r2;
    r3 = r3 + r4;
    r3 = *(u8*)(r3);
    r1 += 0x1U;
    r3 = (r3 << 31);
    r3 = (r3 >> 31);
    r0 = r3 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs < cmp_rhs) goto loc_0800434A;
    return r0; // BX lr
    r2 = ((u32)((s32)r1 >> 3));
    r0 = r2 + r0;
    r2 = (r1 << 29);
    r0 += 0x50U;
    r0 = *(u8*)(r0 + 0x5);
    r2 = (r2 >> 29);
    r1 = 0x1U;
    r1 <<= (r2 & 0xFF);
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) return sub_0800437C(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800437C..0x08004380 (4 bytes, Thumb)
u32 sub_0800437C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08004380..0x080045B0 (560 bytes, Thumb)
u32 sub_08004380(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = ((u32)((s32)r1 >> 3));
    r0 = r2 + r0;
    r3 = (r1 << 29);
    r0 += 0x50U;
    r2 = *(u8*)(r0 + 0x5);
    r3 = (r3 >> 29);
    r1 = 0x1U;
    r1 <<= (r3 & 0xFF);
    r1 |= r2;
    *(u8*)(r0 + 0x5) = (u8)r1;
    return r0; // BX lr
    r2 = ((u32)((s32)r1 >> 3));
    r0 = r2 + r0;
    r3 = (r1 << 29);
    r0 += 0x50U;
    r2 = *(u8*)(r0 + 0x5);
    r3 = (r3 >> 29);
    r1 = 0x1U;
    r1 <<= (r3 & 0xFF);
    r2 &= ~r1;
    *(u8*)(r0 + 0x5) = (u8)r2;
    return r0; // BX lr
    r2 = ((u32)((s32)r1 >> 3));
    r0 = r2 + r0;
    r3 = (r1 << 29);
    r0 += 0x50U;
    r2 = *(u8*)(r0 + 0x5);
    r3 = (r3 >> 29);
    r1 = 0x1U;
    r1 <<= (r3 & 0xFF);
    r2 ^= r1;
    *(u8*)(r0 + 0x5) = (u8)r2;
    return r0; // BX lr
    r1 = *(u8*)(r0);
    r3 = 0x68U;
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = sub_08013B34(r0, r1, r2, r3); // 0x080043D2: BL 0x08013B34
    return r0;
    r2 = *(u8*)(r0);
    r3 = 0x68U;
    r2 *= r3;
    r0 = r2 + r0;
    r2 = 0x4F8U; // (159 << 3)
    r0 = r0 + r2;
    r0 = Stats_AwardXpIfAlive(r0, r1, r2, r3); // 0x080043E8: BL 0x08013914
    return r0;
    r3 = r0;
    r5 = r3;
    r5 += 0xE4U;
    r6 = *(u32*)(r5);
    r0 = 0x0U;
    r2 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800441A;
loc_08004400:
    r3 = (r2 << 2);
    r3 = r3 + r5;
    r3 = *(u32*)(r3 + 0x4);
    r4 = (r3 << 4);
    r4 = (r4 >> 4);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08004414;
    r3 = (r3 >> 28);
    if (cmp_lhs != cmp_rhs) goto loc_08004414;
    r0 += 0x1U;
loc_08004414:
    r2 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08004400;
loc_0800441A:
    return r0; // BX lr
    r3 = r0;
    r3 += 0xE4U;
    r5 = *(u32*)(r3);
    r0 = 0x0U;
    r2 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08004444;
loc_0800442E:
    r4 = (r2 << 2);
    r4 = r4 + r3;
    r4 = *(u32*)(r4 + 0x4);
    r4 = (r4 << 4);
    r4 = (r4 >> 4);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800443E;
    r0 += 0x1U;
loc_0800443E:
    r2 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800442E;
loc_08004444:
    return r0; // BX lr
    r0 += 0xE4U;
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 250;
    if (cmp_lhs == cmp_rhs) goto loc_08004466;
    r2 += 0x1U;
    r3 = *(u32*)(r0);
    *(u32*)(r0) = (u32)r2;
    r2 = (r3 << 2);
    r0 = r2 + r0;
    r2 = 0x0U;
    r1 |= r2;
    r1 = (r1 << 4);
    r0 += 0x4U;
    r1 = (r1 >> 4);
    *(u32*)(r0) = (u32)r1;
loc_08004466:
    return r0; // BX lr
    r2 = r0;
    r2 += 0xE4U;
    r4 = *(u32*)(r2);
    r3 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080044AA;
loc_08004476:
    r5 = (r3 << 2);
    r5 = r5 + r2;
    r5 = *(u32*)(r5 + 0x4);
    r6 = (r5 << 4);
    r6 = (r6 >> 4);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080044A4;
    r5 = (r5 >> 28);
    if (cmp_lhs != cmp_rhs) goto loc_080044A4;
    r4 -= 0x1U;
    *(u32*)(r2) = (u32)r4;
    r0 = r4 - r3;
    if (cmp_lhs == cmp_rhs) goto loc_080044A2;
    r4 = (r0 << 2);
    r0 = (r3 << 2);
    r0 = r0 + r2;
    r1 = r0;
    r1 += 0x8U;
    r0 += 0x4U;
    r2 = r4;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800449E: BL 0x08049138
loc_080044A2:
    return r0;
loc_080044A4:
    r3 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_08004476;
loc_080044AA:
    r5 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080044A2;
loc_080044B0:
    r3 = (r5 << 2);
    r3 = r3 + r2;
    r3 += 0x4U;
    r6 = *(u32*)(r3);
    r6 = (r6 << 4);
    r6 = (r6 >> 4);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800450E;
    r4 = *(u32*)(r3);
    r3 = 0x2CU;
    r1 = (r4 << 4);
    r1 = (r1 >> 4);
    r1 *= r3;
    r3 = 0x086F82ECU; // [0x0800453C]
    r4 = (r4 >> 28);
    r1 = r1 + r3;
    r3 = 0x68U;
    r4 -= 0x1U;
    r1 = *(u8*)(r1 + 0x14);
    r3 *= r4;
    r0 = r3 + r0;
    r3 = 0x00000534U; // [0x08004540]
    r1 = (r1 << 2);
    r0 = r0 + r1;
    r0 = r0 + r3;
    r3 = 0x080555A4U; // [0x08004528]
    r3 += 0x14U;
    r1 = *(u32*)(r3 + r1);
loc_080044E8:
    *(u32*)(r0) = (u32)r1;
    r3 = *(u32*)(r0);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080044E8;
    r1 = *(u32*)(r2);
    r0 = r2;
    r1 -= 0x1U;
    *(u32*)(r2) = (u32)r1;
    r1 = r1 - r5;
    if (cmp_lhs == cmp_rhs) goto loc_080044A2;
    r2 = (r1 << 2);
    r1 = (r5 << 2);
    r0 = r1 + r0;
    r1 = r0;
    r1 += 0x8U;
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08004508: BL 0x08049138
    return r0;
loc_0800450E:
    r5 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_080044B0;
    return r0;
    r0 = r0;
    r3 = *(u32*)r5; r5 += 4;
    r4 = *(u32*)r5; r5 += 4;
    r6 = *(u32*)r5; r5 += 4;
    r7 = (r6 >> 1);
    r0 = *(u16*)(r4 + 0x24);
    r0 = r0;
    r3 = *(u32*)r5; r5 += 4;
    r7 = *(u32*)r5; r5 += 4;
    r7 = (r6 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    *(u8*)(r4 + r6) = (u8)r4;
    r5 = (r0 >> 32);
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    r6 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r7 = (r6 >> 1);
    r0 = (r5 >> 2);
    r0 = r0;
    if (cmp_lhs >= cmp_rhs) return sub_080045D0(r0, r1, r2, r3);
    r7 = (r5 >> 1);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    r4 = (r6 << 20);
    r0 = r0;
    r3 = 0x68U;
    r3 *= r1;
    r4 = 0x4F8U; // (159 << 3)
    r3 = r3 + r0;
    r3 = r3 + r4;
    r4 = (r2 << 2);
    r3 = r4 + r3;
    r3 += 0x3CU;
    lr = r3;
    r3 = *(u32*)(r3);
    r12 = r4;
    r5 = 0x080555B8U; // [0x08004810]
    r4 = r12;
    r4 = *(u32*)(r5 + r4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_080045AE;
    r5 = r0;
    r5 += 0xE4U;
    r6 = *(u32*)(r5);
    r4 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_080045B6(r0, r1, r2, r3);
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 += 0x4U;
    r3 = *(u32*)(r0);
    r7 = (r3 >> 28);
    r7 -= 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_080045B0(r0, r1, r2, r3);
    r7 = (r3 << 4);
    r7 = (r7 >> 4);
    r3 = 0x2CU;
    r3 *= r7;
    r7 = 0x086F82ECU; // [0x08004814]
    r3 = r3 + r7;
    r3 = *(u8*)(r3 + 0x14);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_080045B0(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r5 = 0x080555B8U; // [0x08004810]
    r1 = (r1 << 4);
    r1 = (r1 >> 4);
    *(u32*)(r0) = (u32)r1;
    r4 = r12;
    r0 = *(u32*)(r5 + r4);
    r3 = lr;
loc_080045A6:
    *(u32*)(r3) = (u32)r0;
    r1 = *(u32*)(r3);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080045A6;
loc_080045AE:
    return r0;
}

// ROM Address: 0x080045B0..0x080045C2 (18 bytes, Thumb)
u32 sub_080045B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_08004574(r0, r1, r2, r3);
    r2 = 0xFFU;
    r0 = 0x080555B8U; // [0x08004810]
    r2 += 0x8U;
    r3 = 0x0U;
    r0 += 0x10U;
    r1 = 0x08004818U;
    return r0;
}

// ROM Address: 0x080045C8..0x08004792 (458 bytes, Thumb)
u32 sub_080045C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = stack[4]; // [sp + 0x10]
    r4 = r3;
    r3 = 0x68U;
    r0 *= r3;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r5;
    r1 = r0 + r1;
    r0 = 0x2CU;
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x086F82ECU; // [0x08004814]
    r0 *= r4;
    r6 = r0 + r1;
    r1 = r5;
    r7 = r2;
    r0 = (r7 << 2);
    r1 += 0xE4U;
    r0 = r0 + r1;
    r0 += 0x4U;
    stack[2] = r0; // [sp + 0x8]
    r3 = r7 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_0800460E;
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u32*)(r0);
    r1 = (r0 >> 28);
    if (cmp_lhs == cmp_rhs) goto loc_0800460E;
    r1 = (r0 >> 28);
    r1 -= 0x1U;
    r0 = r5;
    r2 = *(u8*)(r6 + 0x14);
    r0 = sub_08004544(r0, r1, r2, r3); // 0x0800460A
loc_0800460E:
    r2 = *(u8*)(r6 + 0x14);
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r2 << 2);
    r1 = r0 + r1;
    r1 += 0x3CU;
    r1 = *(u32*)(r1);
    r3 = 0x080555B8U; // [0x08004810]
    r0 = *(u32*)(r3 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800462A;
    r0 = r5;
    r1 = stack[4]; // [sp + 0x10]
    r0 = sub_08004544(r0, r1, r2, r3); // 0x08004626
loc_0800462A:
    r0 = *(u8*)(r6 + 0x14);
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 += 0x3CU;
loc_08004634:
    *(u32*)(r0) = (u32)r4;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08004634;
    r3 = r7 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_08004652;
    r0 = stack[2]; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r2 = stack[4]; // [sp + 0x10]
    r1 = (r1 << 4);
    r1 = (r1 >> 4);
    r2 += 0x1U;
    r2 = (r2 << 28);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
loc_08004652:
    return r0;
    r5 = r0;
    r2 = r0;
    r0 = (r1 << 2);
    r5 += 0xE4U;
    r0 = r0 + r5;
    r7 = r0;
    r0 += 0x4U;
    r4 = *(u32*)(r0);
    r3 = (r4 >> 28);
    if (cmp_lhs == cmp_rhs) goto loc_08004698;
    r6 = (r4 << 4);
    r6 = (r6 >> 4);
    r3 = 0x2CU;
    r3 *= r6;
    r6 = 0x086F82ECU; // [0x08004814]
    r4 = (r4 >> 28);
    r6 = r3 + r6;
    r3 = 0x68U;
    r4 -= 0x1U;
    r3 *= r4;
    r2 = r3 + r2;
    r3 = *(u8*)(r6 + 0x14);
    r4 = 0x00000534U; // [0x08004830]
    r3 = (r3 << 2);
    r2 = r2 + r3;
    r2 = r2 + r4;
    r4 = 0x080555B8U; // [0x08004810]
    r3 = *(u32*)(r4 + r3);
loc_08004690:
    *(u32*)(r2) = (u32)r3;
    r4 = *(u32*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08004690;
loc_08004698:
    r2 = *(u32*)(r5);
    r2 -= 0x1U;
    *(u32*)(r5) = (u32)r2;
    r1 = r2 - r1;
    if (cmp_lhs == cmp_rhs) goto loc_080046AC;
    r2 = (r1 << 2);
    r1 = r7;
    r1 += 0x8U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080046A8: BL 0x08049138
loc_080046AC:
    return r0;
    r2 = 0x4C0U; // (19 << 6)
    r2 = r0 + r2;
    r3 = *(u32*)(r2 + 0x1C);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080046F0;
    r3 = *(u32*)(r1 + 0x14);
    r4 = *(u32*)(r2 + 0x20);
    r3 = r3 + r4;
    *(u32*)(r1 + 0x14) = (u32)r3;
    r3 = *(u32*)(r1 + 0x18);
    r4 = *(u32*)(r2 + 0x24);
    r3 = r3 + r4;
    *(u32*)(r1 + 0x18) = (u32)r3;
    r3 = *(u32*)(r1 + 0x1C);
    r4 = *(u32*)(r2 + 0x28);
    r3 = r3 + r4;
    *(u32*)(r1 + 0x1C) = (u32)r3;
    r3 = *(u32*)(r1 + 0x20);
    r4 = *(u32*)(r2 + 0x28);
    r3 = r3 + r4;
    *(u32*)(r1 + 0x20) = (u32)r3;
    r3 = *(u32*)(r1 + 0x24);
    r2 = *(u32*)(r2 + 0x2C);
    r2 = r3 + r2;
    *(u32*)(r1 + 0x24) = (u32)r2;
    r2 = 0x4F0U; // (79 << 4)
    r1 += 0x28U;
    r0 = r0 + r2;
    r0 = *(u8*)(r0);
    *(u8*)(r1) = (u8)r0;
loc_080046F0:
    return r0; // BX lr
    r1 = *(u8*)(r0 + 0x1);
    r2 = (r1 << 30);
    r2 = (r2 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_08004720;
    r2 = 0x2U;
    r1 |= r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = 0x0U;
    r0 = sub_0800B854(r0, r1, r2, r3); // 0x08004706
    r1 = r0;
    r0 = 0xFU;
    r0 = ~r0;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r1 + 0x14) = (u32)r0;
    r0 = 0x080555B8U; // [0x08004810]
    r0 -= 0x14U;
    r0 = *(u32*)(r0 + 0x10);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800471C: BL 0x0801191A
loc_08004720:
    return r0;
    r5 = r1;
    r1 = *(u8*)(r0 + 0x1);
    r6 = r2;
    r2 = 0x2U;
    r1 |= r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = 0x38U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08004732: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800473E;
    r1 = r4;
    goto loc_0800474E;
loc_0800473E:
    r0 = r4;
    r0 = sub_0800B854(r0, r1, r2, r3); // 0x08004740
    r0 = 0x0804B500U /* &VTable_0804B500 */; // [0x08004834]
    r1 = r4;
    *(u32*)(r4) = (u32)r0;
    r4 += 0x30U;
    *(u32*)r4 = r5; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
loc_0800474E:
    r0 = 0xFU;
    r0 = ~r0;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r1 + 0x14) = (u32)r0;
    r0 = 0x080555B8U; // [0x08004810]
    r0 -= 0x14U;
    r0 = *(u32*)(r0 + 0x10);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800475E: BL 0x0801191A
    return r0;
    r1 = *(u8*)(r0 + 0x1);
    r2 = (r1 << 30);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08004782;
    r2 = 0x2U;
    r1 &= ~r2;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r0 = 0x080555B8U; // [0x08004810]
    r1 = 0x15U;
    r2 = 0x0U;
    r0 -= 0x14U;
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0800477E
loc_08004782:
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08004792(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08004792..0x08004810 (126 bytes, Thumb)
u32 sub_08004792(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r0 >> 16);
    if (cmp_lhs == cmp_rhs) goto loc_080047CC;
    r3 = (r0 << 16);
    r3 = (r3 >> 16);
    r5 = (r3 << 29);
    r4 = 0x1U;
    r2 = r4;
    r5 = (r5 >> 29);
    r2 <<= (r5 & 0xFF);
    r5 = 0x080555B8U; // [0x08004810]
    r3 = (r3 >> 3);
    r5 -= 0x14U;
    r5 = *(u32*)(r5 + 0x4);
    r3 = r3 + r5;
    r3 += 0x50U;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080047D0;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_080047DE;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_080047F2;
    r0 = *(u8*)(r3 + 0x5);
    r1 = r0;
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_080047EE;
    r0 &= ~r2;
    *(u8*)(r3 + 0x5) = (u8)r0;
    r0 = 0x1U;
    return sub_0800478E(r0, r1, r2, r3);
loc_080047CC:
    r0 = 0x0U;
    return sub_0800478E(r0, r1, r2, r3);
loc_080047D0:
    r0 = *(u8*)(r3 + 0x5);
    r0 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_080047DA;
    r0 = 0x1U;
    return sub_0800478E(r0, r1, r2, r3);
loc_080047DA:
    r0 = 0x0U;
    return sub_0800478E(r0, r1, r2, r3);
loc_080047DE:
    r0 = *(u8*)(r3 + 0x5);
    r0 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_080047E8;
    r0 = 0x1U;
    goto loc_080047EA;
loc_080047E8:
    r0 = 0x0U;
loc_080047EA:
    r0 = r4 - r0;
    return sub_0800478E(r0, r1, r2, r3);
loc_080047EE:
    r0 = 0x0U;
    return sub_0800478E(r0, r1, r2, r3);
loc_080047F2:
    r1 = 0x0U;
    stack[0] = r1; // [sp + 0x0]
    stack[17] = r1; // [sp + 0x44]
    r2 = 0x0U;
    r1 = r0;
    r0 = sp;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080047FE
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800480C;
    r0 = 0x1U;
    return sub_0800478E(r0, r1, r2, r3);
loc_0800480C:
    r0 = 0x0U;
    return sub_0800478E(r0, r1, r2, r3);
}

// ROM Address: 0x08004812..0x08004850 (62 bytes, Thumb)
u32 sub_08004812(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    r2 -= 0x54U;
    *(u16*)(r3 + r5) = (u16)r4;
    *(u8*)(r5 + 0x15) = (u8)r7;
    *(u32*)(r6 + 0x34) = (u32)r2;
    r5 = *(u8*)(r4 + r1);
    *(u32*)(r0 + 0x14) = (u32)r7;
    *(u32*)(r5 + 0x54) = (u32)r5;
    *(u32*)(r0 + 0x14) = (u32)r4;
    *(u32*)(r6 + 0x14) = (u32)r4;
    *(u32*)(r5 + 0x30) = (u32)r6;
    *(u8*)(r6 + 0x1) = (u8)r0;
    r0 = r0;
    r4 = (r6 << 20);
    r0 = r0;
    r4 = (r0 >> 32);
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = 0x000008A8U; // [0x08004AE4]
    if (cmp_lhs != cmp_rhs) return sub_08004850(r0, r1, r2, r3);
    r0 = r5;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08004844: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08004850(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08004850..0x08004896 (70 bytes, Thumb)
u32 sub_08004850(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xE4U;
    r0 = 0x0U;
    *(u32*)(r1 + r4) = r0;
    r0 = 0x8A0U; // (69 << 5)
    r6 = 0x4F8U; // (159 << 3)
    r1 = r4 + r0;
    r2 = 0x68U;
    r0 = r4 + r6;
    r3 = 0x08050365U; // [0x08004AE8]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08004866: BL 0x08046FF4
    r2 = r5;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08004870: BL 0x0804912C
    r7 = 0x086FDA4CU; // [0x08004AEC]
    r5 = 0x0U;
loc_08004878:
    r0 = (r5 << 3);
    r0 = r0 + r5;
    r0 = (r0 << 1);
    r1 = r0 + r7;
    r0 = 0x68U;
    r0 *= r5;
    r0 = r0 + r4;
    r0 = r0 + r6;
    r0 = sub_0801339C(r0, r1, r2, r3); // 0x08004888
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_08004878;
    r0 = r4;
    return sub_0800484E(r0, r1, r2, r3);
}

// ROM Address: 0x08004896..0x080048EC (86 bytes, Thumb)
u32 sub_08004896(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x000008A8U; // [0x08004AE4]
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x0800489A
    return r0;
    r3 = 0xFFFFF74CU; // [0x08004AF0]
    r5 = r0;
    sp += r3;
    r4 = sp;
    r0 = sp;
    r6 = r1;
    r0 = sub_08004838(r0, r1, r2, r3); // 0x080048AE
    r2 = 0x8B0U; // (139 << 4)
    r2 *= r6;
    r3 = 0x8BU;
    r0 = 0x080555A4U; // [0x08004AF4]
    r3 = (r3 << 4);
    r2 += 0x10U;
    r1 = r4;
    r0 = *(u32*)(r0);
    r0 = sub_0803FC3A(r0, r1, r2, r3); // 0x080048C4
    r6 = 0x000008A8U; // [0x08004AE4]
    r0 = sp;
    r1 = r6;
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x080048CE
    r1 = 0x880U; // (17 << 7)
    r1 = r4 + r1;
    r1 = *(u32*)(r1 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_080048EC(r0, r1, r2, r3);
    r1 = r4;
    r0 = r5;
    r0 = sub_080502BC(r0, r1, r2, r3); // 0x080048E2
    r3 = 0x000008B4U; // [0x08004AF8]
    sp += r3;
    return r0;
}

// ROM Address: 0x080048EC..0x0800491A (46 bytes, Thumb)
u32 sub_080048EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r6;
    r1 = 0x0U;
    r0 = r5;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080048F2: BL 0x0804912C
    r4 = 0x0U;
    r6 = 0x9FU;
    r7 = 0x086FDA4CU; // [0x08004AEC]
    r6 = (r6 << 3);
loc_080048FE:
    r0 = (r4 << 3);
    r0 = r0 + r4;
    r0 = (r0 << 1);
    r1 = r0 + r7;
    r0 = 0x68U;
    r0 *= r4;
    r0 = r0 + r5;
    r0 = r0 + r6;
    r0 = sub_0801339C(r0, r1, r2, r3); // 0x0800490E
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_080048FE;
    return sub_080048E6(r0, r1, r2, r3);
}

// ROM Address: 0x0800491A..0x08004AD6 (444 bytes, Thumb)
u32 sub_0800491A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFFFF740U; // [0x08004AFC]
    r6 = r0;
    sp += r3;
    r4 = 0xC; // sp + 0xC
    r5 = r1;
    r0 = r4;
    r0 = sub_08004838(r0, r1, r2, r3); // 0x08004928
    r1 = r6;
    r0 = r4;
    r0 = sub_080502BC(r0, r1, r2, r3); // 0x08004930
    r1 = 0x000008A8U; // [0x08004AE4]
    r0 = 0xC; // sp + 0xC
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x08004938
    r1 = 0x880U; // (17 << 7)
    r1 = r4 + r1;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r1 = 0x8B0U; // (139 << 4)
    r1 *= r5;
    r0 = 0x080555A4U; // [0x08004AF4]
    r3 = 0x8B0U; // (139 << 4)
    r1 += 0x10U;
    r2 = r4;
    r0 = *(u32*)(r0);
    r0 = sub_0803FBDE(r0, r1, r2, r3); // 0x08004956
    r3 = 0x8C0U; // (35 << 6)
    sp += r3;
    return r0;
    r4 = 0xFFFFF74CU; // [0x08004AF0]
    r6 = 0x080555A4U; // [0x08004AF4]
    sp += r4;
    r4 = r0;
    r0 = *(u32*)(r6 + 0x8);
    r7 = r1;
    r1 = *(u8*)(r0);
    r0 = 0x8A0U; // (69 << 5)
    r0 = r4 + r0;
    *(u8*)(r0) = (u8)r1;
    r1 = *(u32*)(r6 + 0x8);
    r5 = r3;
    r1 = *(u8*)(r1 + 0x1);
    *(u8*)(r0 + 0x1) = (u8)r1;
    r1 = *(u32*)(r6 + 0x8);
    r1 = *(u8*)(r1 + 0x2);
    *(u8*)(r0 + 0x2) = (u8)r1;
    r1 = *(u32*)(r2);
    *(u16*)(r0 + 0x4) = (u16)r1;
    r1 = *(u32*)(r2 + 0x4);
    *(u16*)(r0 + 0x6) = (u16)r1;
    r0 = *(u8*)(r4 + 0x1);
    r1 = 0x1U;
    r0 |= r1;
    r1 = 0x8U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u8*)(r4 + 0x1) = (u8)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080049A4;
    r0 |= r1;
    *(u8*)(r4 + 0x1) = (u8)r0;
    goto loc_080049A8;
loc_080049A4:
    r0 &= ~r1;
    *(u8*)(r4 + 0x1) = (u8)r0;
loc_080049A8:
    r5 = sp;
    r0 = sp;
    r0 = sub_08004838(r0, r1, r2, r3); // 0x080049AC
    r1 = r4;
    r0 = r5;
    r0 = sub_080502BC(r0, r1, r2, r3); // 0x080049B4
    r0 = 0x03000F90U; // [0x08004B00]
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x4C0U; // (19 << 6)
    r0 = r5 + r0;
    r2 = *(u32*)(r0 + 0x10);
    r1 = r1 + r2;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = 0x000008A8U; // [0x08004AE4]
    r0 = sp;
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x080049CC
    r1 = 0x880U; // (17 << 7)
    r1 = r5 + r1;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r1 = 0x8B0U; // (139 << 4)
    r1 *= r7;
    r3 = 0x8B0U; // (139 << 4)
    r1 += 0x10U;
    r2 = r5;
    r0 = *(u32*)(r6);
    r0 = sub_0803FBDE(r0, r1, r2, r3); // 0x080049E8
    r4 = 0x000008B4U; // [0x08004AF8]
    sp += r4;
    return r0;
    r3 = 0xFFFFF740U; // [0x08004AFC]
    r6 = r0;
    sp += r3;
    r4 = 0xC; // sp + 0xC
    r5 = r1;
    r0 = r4;
    r0 = sub_08004838(r0, r1, r2, r3); // 0x08004A00
    r1 = r6;
    r0 = r4;
    r0 = sub_080502BC(r0, r1, r2, r3); // 0x08004A08
    r1 = 0x000008A8U; // [0x08004AE4]
    r0 = 0xC; // sp + 0xC
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x08004A10
    r1 = 0x880U; // (17 << 7)
    r1 = r4 + r1;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r1 = 0x8B0U; // (139 << 4)
    r1 *= r5;
    r0 = 0x080555A4U; // [0x08004AF4]
    r3 = 0x8B0U; // (139 << 4)
    r1 += 0x10U;
    r2 = r4;
    r0 = *(u32*)(r0);
    r0 = sub_0803FBDE(r0, r1, r2, r3); // 0x08004A2E
    r3 = 0x8C0U; // (35 << 6)
    sp += r3;
    return r0;
    r3 = 0xFFFFF74CU; // [0x08004AF0]
    r5 = r0;
    sp += r3;
    r4 = sp;
    r0 = sp;
    r0 = sub_08004838(r0, r1, r2, r3); // 0x08004A46
    r1 = 0x000008A8U; // [0x08004AE4]
    r0 = sp;
    r0 = sub_0803FC4E(r0, r1, r2, r3); // 0x08004A4E
    r1 = 0x880U; // (17 << 7)
    r1 = r4 + r1;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r1 = 0x8B0U; // (139 << 4)
    r1 *= r5;
    r0 = 0x080555A4U; // [0x08004AF4]
    r3 = 0x8B0U; // (139 << 4)
    r1 += 0x10U;
    r2 = r4;
    r0 = *(u32*)(r0);
    r0 = sub_0803FBDE(r0, r1, r2, r3); // 0x08004A6C
    r3 = 0x000008B4U; // [0x08004AF8]
    sp += r3;
    return r0;
    r1 = 0x8A0U; // (69 << 5)
    r0 = r0 + r1;
    r1 = *(u8*)(r0 + 0x1);
    r0 = *(u8*)(r0);
    r0 = sub_080089FC(r0, r1, r2, r3); // 0x08004A82: BL 0x080089FC
    return r0;
    r0 = 0x0874CA24U; // [0x08004B04]
    r4 = 0x0U;
    r3 = *(u32*)(r0);
    r12 = r3;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08004AD2;
    r0 = *(u32*)(r0 + 0x4);
    lr = r0;
    r0 = lr;
    r3 = (r4 << 2);
    r5 = *(u32*)(r0 + r3);
    r0 = 0x0U;
    r7 = *(u32*)(r5 + 0x14);
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08004ADC(r0, r1, r2, r3);
    r3 = (r0 << 2);
    r3 = r3 + r5;
    r3 = *(u32*)(r3 + 0x18);
    r6 = *(u8*)(r3);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08004AD6(r0, r1, r2, r3);
    r6 = *(u8*)(r3 + 0x1);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_08004AD6(r0, r1, r2, r3);
    r0 = *(u16*)(r3 + 0x2);
    r2 = stack[0]; // [sp + 0x0]
    r1 = (r0 >> 3);
    r1 = r1 + r2;
    r3 = (r0 << 29);
    r1 += 0x80U;
    r2 = *(u8*)(r1 + 0xD);
    r3 = (r3 >> 29);
    r0 = 0x1U;
    r0 <<= (r3 & 0xFF);
    r0 |= r2;
    *(u8*)(r1 + 0xD) = (u8)r0;
loc_08004AD2:
    return r0;
}

// ROM Address: 0x08004AD6..0x08004AE4 (14 bytes, Thumb)
u32 sub_08004AD6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) return sub_08004AA8(r0, r1, r2, r3);
    r4 += 0x1U;
    cmp_lhs = (s32)r12; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_08004A9A(r0, r1, r2, r3);
    return sub_08004AD2(r0, r1, r2, r3);
}

// ROM Address: 0x08004AE6..0x08004BA2 (188 bytes, Thumb)
u32 sub_08004AE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r5 = (r4 << 13);
    r5 = (r0 >> 32);
    if (cmp_lhs >= cmp_rhs) goto loc_08004B88;
    r7 = (r5 >> 1);
    r0 = sub_07F51AF2(r0, r1, r2, r3); // 0x08004AF0
    *(u8*)(r4 + r6) = (u8)r4;
    r5 = (r0 >> 32);
    r4 = (r6 >> 2);
    r0 = r0;
    r0 = sub_07F45AFE(r0, r1, r2, r3); // 0x08004AFC
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r2 = *(u32*)r2; r2 += 4;
    r5 = *(u32*)r2; r2 += 4;
    r4 = (r6 >> 1);
    r0 = 0x080555A4U; // [0x08004BB8]
    r1 = *(u32*)(r0 + 0x8);
    r0 = 0x0874CA24U; // [0x08004BBC]
    r6 = *(u8*)(r1);
    r7 = *(u8*)(r1 + 0x1);
    r1 = *(u32*)(r0);
    r3 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r12 = r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08004B4E;
    r0 = *(u32*)(r0 + 0x4);
    lr = r0;
loc_08004B22:
    r0 = lr;
    r1 = (r3 << 2);
    r0 = *(u32*)(r0 + r1);
    r1 = 0x0U;
    r5 = *(u32*)(r0 + 0x14);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08004B48;
loc_08004B30:
    r2 = (r1 << 2);
    r2 = r2 + r0;
    r2 = *(u32*)(r2 + 0x18);
    r4 = *(u8*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_08004B42;
    r2 = *(u8*)(r2 + 0x1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs == cmp_rhs) goto loc_08004B50;
loc_08004B42:
    r1 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_08004B30;
loc_08004B48:
    r3 += 0x1U;
    cmp_lhs = (s32)r12; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_08004B22;
loc_08004B4E:
    r0 = 0x0U;
loc_08004B50:
    return r0;
    r0 = 0x0874CA24U; // [0x08004BBC]
    r4 = 0x0U;
    r3 = *(u32*)(r0);
    r12 = r3;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08004BB2(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x4);
    lr = r0;
    r0 = lr;
    r3 = (r4 << 2);
    r5 = *(u32*)(r0 + r3);
    r0 = 0x0U;
    r7 = *(u32*)(r5 + 0x14);
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08004BAC(r0, r1, r2, r3);
    r3 = (r0 << 2);
    r3 = r3 + r5;
    r3 = *(u32*)(r3 + 0x18);
    r6 = *(u8*)(r3);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08004BA6(r0, r1, r2, r3);
    r6 = *(u8*)(r3 + 0x1);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_08004BA6(r0, r1, r2, r3);
    r0 = *(u16*)(r3 + 0x2);
    r2 = stack[0]; // [sp + 0x0]
loc_08004B88:
    r1 = (r0 >> 3);
    r1 = r1 + r2;
    r2 = (r0 << 29);
    r1 += 0x80U;
    r1 = *(u8*)(r1 + 0xD);
    r2 = (r2 >> 29);
    r0 = 0x1U;
    r0 <<= (r2 & 0xFF);
    r1 &= r0;
    if (cmp_lhs == cmp_rhs) return sub_08004BA2(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08004BA2..0x08004BB6 (20 bytes, Thumb)
u32 sub_08004BA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08004B9E(r0, r1, r2, r3);
    r0 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) return sub_08004B72(r0, r1, r2, r3);
    r4 += 0x1U;
    cmp_lhs = (s32)r12; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_08004B64(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08004B9E(r0, r1, r2, r3);
}

// ROM Address: 0x08004BC0..0x08004C84 (196 bytes, Thumb)
u32 sub_08004BC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x08055618U; // [0x08004DEC]
    r5 = r0;
    r0 = *(u32*)(r6);
    r0 = sub_080048A0(r0, r1, r2, r3); // 0x08004BCA
    r0 = *(u32*)(r6);
    r1 = 0x0U;
    r0 = *(u8*)(r0 + 0x1);
    r0 = (r0 << 31);
    r0 = (r0 >> 31);
    *(u32*)(r5) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08004C84(r0, r1, r2, r3);
    r0 = *(u32*)(r6);
    r0 = sub_08004A76(r0, r1, r2, r3); // 0x08004BE0
    r0 = sub_08008A36(r0, r1, r2, r3); // 0x08004BE4: BL 0x08008A36
    *(u16*)(r5 + 0x6) = (u16)r0;
    r0 = *(u32*)(r6);
    r1 = 0x4C0U; // (19 << 6)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_080530C8(r0, r1, r2, r3); // 0x08004BF4: BL 0x080530C8
    *(u32*)(r5 + 0x8) = (u32)r1;
    r1 = 0x0877CCA4U /* EventPoolRecord */; // [0x08004DF0]
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08004098(r0, r1, r2, r3); // 0x08004C00: BL 0x08004098
    r0 = stack[2]; // [sp + 0x8]
    r4 = 0x0U;
    *(u16*)(r5 + 0x4) = (u16)r0;
    r0 = *(u32*)(r6);
    r0 = *(u8*)(r0);
    *(u32*)(r5 + 0x7C) = (u32)r0;
    r0 = r5;
    r0 += 0xCU;
    stack[28] = r0; // [sp + 0x70]
loc_08004C16:
    r1 = 0x08055618U; // [0x08004DEC]
    r0 = *(u32*)(r1);
    r1 = 0x68U;
    r1 *= r4;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r7 = r0 + r1;
    r0 = *(u32*)(r5 + 0x7C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08004C32;
    r0 = *(u8*)(r7);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08004C7A;
loc_08004C32:
    r0 = stack[28]; // [sp + 0x70]
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r6 = r1 + r0;
    r6 += 0x4U;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r6 + 0x8) = (u32)r4;
    r0 = *(u8*)(r7 + 0x14);
    r1 = 0x086B82ECU; // [0x08004DF4]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x08004C52
    *(u32*)(r6) = (u32)r0;
    r1 = *(u32*)(r5 + 0x7C);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08004C62;
    r0 = 0x0U;
loc_08004C62:
    r1 = 0x08055618U; // [0x08004DEC]
    *(u32*)(r6 + 0x4) = (u32)r0;
    r1 = *(u32*)(r1);
    r1 = *(u8*)(r1 + 0x1);
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08004C7A;
    r1 = *(u8*)(r7);
    r1 = (r1 << 30);
    r1 = (r1 >> 31);
    r0 |= r1;
    *(u32*)(r6 + 0x4) = (u32)r0;
loc_08004C7A:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_08004C16;
    return r0;
}

// ROM Address: 0x08004C84..0x08004C8C (8 bytes, Thumb)
u32 sub_08004C84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r5 + 0x8) = (u32)r1;
    *(u16*)(r5 + 0x4) = (u16)r1;
    *(u16*)(r5 + 0x6) = (u16)r1;
    return sub_08004C80(r0, r1, r2, r3);
}

// ROM Address: 0x08004C8C..0x08004CCE (66 bytes, Thumb)
u32 sub_08004C8C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r1 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08004CDC(r0, r1, r2, r3);
    r2 = r0;
    r5 = *(u32*)(r0 + 0x7C);
    r2 += 0xCU;
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 2);
    r3 = r3 + r2;
    r3 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) return sub_08004CD6(r0, r1, r2, r3);
    r1 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) return sub_08004CD2(r0, r1, r2, r3);
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 2);
    r3 = r3 + r2;
    r3 = *(u32*)(r3 + 0x8);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08004CCE(r0, r1, r2, r3);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r1 = r1 + r2;
    r1 = *(u32*)(r1 + 0xC);
    *(u32*)(r0 + 0x7C) = (u32)r1;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08004CCE..0x08004CE0 (18 bytes, Thumb)
u32 sub_08004CCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08004CAE(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08004CCA(r0, r1, r2, r3);
    r1 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_08004C9C(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08004CCA(r0, r1, r2, r3);
}

// ROM Address: 0x08004CE0..0x08004D24 (68 bytes, Thumb)
u32 sub_08004CE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r1 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08004D34(r0, r1, r2, r3);
    r2 = r0;
    r5 = *(u32*)(r0 + 0x7C);
    r2 += 0xCU;
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 2);
    r3 = r3 + r2;
    r3 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) return sub_08004D2E(r0, r1, r2, r3);
    r1 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) return sub_08004D2A(r0, r1, r2, r3);
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 2);
    r3 = r3 + r2;
    r3 = *(u32*)(r3 + 0x8);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08004D24(r0, r1, r2, r3);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 2);
    r1 = r1 + r2;
    r1 = *(u32*)(r1 + 0xC);
    *(u32*)(r0 + 0x7C) = (u32)r1;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08004D24..0x08004D38 (20 bytes, Thumb)
u32 sub_08004D24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_08004D04(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08004D20(r0, r1, r2, r3);
    r1 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_08004CF0(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08004D20(r0, r1, r2, r3);
}

// ROM Address: 0x08004D38..0x08004D56 (30 bytes, Thumb)
u32 sub_08004D38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFFFF754U; // [0x08004DF8]
    r4 = r0;
    sp += r3;
    if (cmp_lhs != cmp_rhs) return sub_08004D56(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x81U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08004D46: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08004D56(r0, r1, r2, r3);
    r0 = r4;
    r3 = 0x000008ACU; // [0x08004DFC]
    sp += r3;
    return r0;
}

// ROM Address: 0x08004D56..0x08004DC0 (106 bytes, Thumb)
u32 sub_08004D56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r4;
    r1 += 0x180U;
    r2 = 0x80U;
    r0 = r4;
    r3 = 0x0805049DU; // [0x08004E00]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08004D62: BL 0x08046FF4
    r7 = 0x08055618U; // [0x08004DEC]
    r6 = 0x4; // sp + 0x4
    r0 = r6;
    r2 = 0x000008A8U; // [0x08004E04]
    r1 = *(u32*)(r7);
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x08004D70: BL 0x08046DD0
    r5 = 0x0U;
loc_08004D76:
    r0 = (r5 << 7);
    r0 = r0 + r4;
    r1 = r5;
    r0 = sub_08004BC0(r0, r1, r2, r3); // 0x08004D7C: BL 0x08004BC0
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_08004D76;
    r2 = 0x9FU;
    r5 = *(u32*)(r7);
    r2 = (r2 << 3);
    r1 = r6;
    r0 = r5;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x08004D90: BL 0x08046DD0
    r2 = 0x0805023DU /* &sub_0805023C */; // [0x08004E08]
    r0 = 0x8A0U; // (69 << 5)
    stack[0] = r2; // [sp + 0x0]
    r2 = r6 + r0;
    r0 = 0x4F8U; // (159 << 3)
    r1 = r6 + r0;
    r3 = 0x68U;
    r0 = r5 + r0;
    r0 = sub_08047018(r0, r1, r2, r3); // 0x08004DA8
    r1 = 0x880U; // (17 << 7)
    r0 = r5 + r1;
    r1 = r6 + r1;
    r2 = *(u32*)(r1 + 0x20);
    r1 = *(u32*)(r1 + 0x24);
    *(u32*)(r0 + 0x24) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r0 = r4;
    return sub_08004D50(r0, r1, r2, r3);
}

// ROM Address: 0x08004DC0..0x08004DEC (44 bytes, Thumb)
u32 sub_08004DC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
loc_08004DC2:
    r2 = (r1 << 7);
    r2 = *(u32*)(r0 + r2);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08004DCE;
    r0 = 0x1U;
    return r0; // BX lr
loc_08004DCE:
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_08004DC2;
    r0 = 0x0U;
    return r0; // BX lr
    r3 = 0x0U;
    r2 = (r1 << 7);
    *(u32*)(r0 + r2) = r3;
    r0 = r2 + r0;
    *(u32*)(r0 + 0xC) = (u32)r3;
    r0 = r1;
    r0 = sub_08004A3A(r0, r1, r2, r3); // 0x08004DE6
    return r0;
}

// ROM Address: 0x08004DEC..0x08004DEE (2 bytes, Thumb)
u32 sub_08004DEC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (u32)(*(s8*)(r3 + r0));
    return r0;
}

// ROM Address: 0x08004DEE..0x08004ED6 (232 bytes, Thumb)
u32 sub_08004DEE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r0 >> 32);
    r2 = *(u32*)r4; r4 += 4;
    r5 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r7 = (r6 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r0 = sub_07F59DFA(r0, r1, r2, r3); // 0x08004DF8
    r4 = (r5 >> 2);
    r0 = r0;
    r5 = (r3 << 18);
    r5 = (r0 >> 32);
    r0 = (r5 >> 2);
    r0 = r0;
    r5 = (r7 << 8);
    r5 = (r0 >> 32);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08004E1C;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08004E14: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08004E24;
loc_08004E1C:
    r1 = 0x08049354U /* &VTable_08049354 */; // [0x08004EF8]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08004E24:
    return r0;
    r2 = 0x18000U; // (3 << 15)
    r1 = 0x0U;
    r0 = (r2 << 10);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08004E32: BL 0x0804912C
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = 0x14; // sp + 0x14
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08004E3C
    r0 = 0x08055620U; // [0x08004EFC]
    r1 = stack[14]; // [sp + 0x38]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08004E44
    r1 = 0x06000040U; // [0x08004F00]
    r0 = 0x14; // sp + 0x14
    r0 = sub_0803F9B8(r0, r1, r2, r3); // 0x08004E4C
    r0 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x14U;
    r4 = 0x0U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    stack[1] = r4; // [sp + 0x4]
    stack[2] = r4; // [sp + 0x8]
    r2 = 0x1U;
    r1 = 0x0600F800U; // [0x08004F04]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08004E64
    r0 = 0x00001F83U; // [0x08004F08]
    r1 = 0x4000000U; // (1 << 26)
    *(u16*)(r1 + 0xE) = (u16)r0;
    *(u16*)(r1 + 0x1C) = (u16)r4;
    *(u16*)(r1 + 0x1E) = (u16)r4;
    r0 = (r1 >> 15);
    *(u16*)(r1) = (u16)r0;
    r0 = 0x00002048U; // [0x08004F0C]
    r1 += 0x40U;
    *(u16*)(r1 + 0x10) = (u16)r0;
    r0 = 0x04000053U; // [0x08004F10]
    r1 = 0x0805652CU; // [0x08004F14]
    *(u8*)(r0) = (u8)r4;
    r0 -= 0x1U;
    *(u8*)(r0) = (u8)r4;
    r2 = (r0 >> 17);
    r0 = 0x5000000U; // (5 << 24)
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08004E8E: BL 0x08049144
    r0 = 0x08055620U; // [0x08004EFC]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    *(u8*)(r0 + 0x1) = (u8)r4;
    r0 = 0x14; // sp + 0x14
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08004E9E: BL 0x0803F58C
    return r0;
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x04000050U /* &REG_BLDCNT */; // [0x08004F18]
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs > cmp_rhs) goto loc_08004EB8;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r0 = 0x0U;
    return r0; // BX lr
loc_08004EB8:
    cmp_lhs = (s32)r1; cmp_rhs = 150;
    if (cmp_lhs > cmp_rhs) goto loc_08004EC0;
    r0 = 0x0U;
    return r0; // BX lr
loc_08004EC0:
    cmp_lhs = (s32)r1; cmp_rhs = 166;
    if (cmp_lhs > cmp_rhs) goto loc_08004ECE;
    r2 = 0xA6U;
    r1 = r2 - r1;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r0 = 0x0U;
    return r0; // BX lr
loc_08004ECE:
    cmp_lhs = (s32)r1; cmp_rhs = 180;
    if (cmp_lhs >= cmp_rhs) return sub_08004ED6(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08004ED6..0x08004EDA (4 bytes, Thumb)
u32 sub_08004ED6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08004EDA..0x08004EDC (2 bytes, Thumb)
u32 sub_08004EDA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08055620U; // [0x08004EFC]
    return r0;
}

// ROM Address: 0x08004EDC..0x0800524E (882 bytes, Thumb)
u32 sub_08004EDC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 -= 0x4U;
    r2 = *(u32*)(r1);
    r1 = 0x1U;
    *(u8*)(r2 + 0x1) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08004EF6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08004EF2: BL __call_via_r3
loc_08004EF6:
    return r0;
    stack[84] = r3; // [sp + 0x150]
    r4 = (r0 >> 32);
    r0 = (u32)(*(s8*)(r4 + r0));
    r5 = (r0 >> 32);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r0 = (r0 << 24);
    r3 = r0 - 6;
    r0 = r0;
    r0 = 0x48U;
    r0 = r0;
    r3 = (r2 << 1);
    r0 = (r0 << 16);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r0 = (r2 << 1);
    r0 = (r0 << 16);
    r4 = stack[10]; // [sp + 0x28]
    r3 = *(u32*)(r0 + 0x24);
    r7 = r0;
    r0 = *(u32*)(r0 + 0x28);
    r6 = 0x01010101U; // [0x0800519C]
    r0 *= r2;
    r0 = r3 + r0;
    r5 = r0 + r1;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08004F4C;
loc_08004F34:
    r1 = r6;
    r0 = r5;
    r2 = stack[4]; // [sp + 0x10]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08004F3A: BL 0x0804912C
    r0 = *(u32*)(r7 + 0x28);
    r4 -= 0x1U;
    r5 = r0 + r5;
    r0 = 0x31313131U; // [0x080051A0]
    r6 ^= r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08004F34;
loc_08004F4C:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x8);
    r5 = r2 - r0;
    r2 = *(u32*)(r1 + 0xC);
    r1 = *(u32*)(r1 + 0x4);
    r7 = 0x3F6E1D01U; // [0x080051A4]
    r3 = r2 - r1;
    stack[1] = r3; // [sp + 0x4]
    r2 = *(u32*)(r4 + 0x28);
    r1 *= r2;
    r2 = *(u32*)(r4 + 0x24);
    r1 = r1 + r2;
    r6 = r1 + r0;
    r1 = r6;
    r0 = r6 + r5;
    r0 -= 0x5U;
    r2 = 0x0U;
loc_08004F78:
    r3 = 0x013F6E1DU; // [0x080051A8]
    r2 += 0x1U;
    *(u32*)(r1) = (u32)r3;
    r3 = 0x00003001U; // [0x080051AC]
    *(u16*)(r1 + 0x4) = (u16)r3;
    r3 = 0x30U;
    *(u8*)(r0) = (u8)r3;
    r3 = 0x1U;
    *(u32*)(r3 + r0) = r7;
    r3 = *(u32*)(r4 + 0x28);
    r1 = r3 + r1;
    r0 = r3 + r0;
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_08004F78;
    r3 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08004FC4;
loc_08004F9A:
    r3 = 0x013F6E1DU; // [0x080051A8]
    r7 = 0x3F6E1D01U; // [0x080051A4]
    *(u32*)(r1) = (u32)r3;
    r3 = 0x00003001U; // [0x080051AC]
    r2 += 0x1U;
    *(u16*)(r1 + 0x4) = (u16)r3;
    r3 = 0x30U;
    *(u8*)(r0) = (u8)r3;
    r3 = r0 + 1;
    *(u32*)(r3) = (u32)r7;
    r7 = 0xFFU;
    r7 += 0x2U;
    *(u16*)(r3 + 0x4) = (u16)r7;
    r3 = 0x1U;
    *(u8*)(r0 + 0x7) = (u8)r3;
    r3 = *(u32*)(r4 + 0x28);
    r1 = r3 + r1;
    r0 = r3 + r0;
    r3 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_08004F9A;
loc_08004FC4:
    r2 = r5;
    r1 = 0x1DU;
    r0 = r6;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08004FCA: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r5 - 2;
    r1 = 0x6EU;
    r6 = r0 + r6;
    r0 = r6 + 1;
    stack[4] = r2; // [sp + 0x10]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08004FDA: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r5 - 4;
    r1 = 0x3FU;
    r6 = r0 + r6;
    r0 = r6 + 2;
    stack[3] = r2; // [sp + 0xC]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08004FEA: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r5 - 6;
    r7 = r0 + r6;
    r6 = r2;
    r1 = 0x1U;
    r0 = r7 + 3;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08004FFA: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r6;
    r1 = 0x1U;
    r7 = r0 + r7;
    r0 = r7 + 3;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005008: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r6 - 4;
    r1 = 0x30U;
    r7 = r0 + r7;
    r0 = r7 + 5;
    stack[2] = r2; // [sp + 0x8]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005018: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r1 = stack[1]; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    r1 -= 0xAU;
    r0 *= r1;
    r7 = r0 + r7;
    r1 = 0x30U;
    r0 = r7 + 5;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0800502C: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r6;
    r1 = 0x1U;
    r7 = r0 + r7;
    r0 = r7 + 3;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0800503A: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r1 = 0x1DU;
    r6 = r0 + r7;
    r0 = r6 + 2;
    r2 = stack[3]; // [sp + 0xC]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005048: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r1 = 0x6EU;
    r6 = r0 + r6;
    r0 = r6 + 1;
    r2 = stack[4]; // [sp + 0x10]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005056: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r5;
    r1 = 0x3FU;
    r6 = r0 + r6;
    r0 = r6;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005064: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r5;
    r1 = 0x1U;
    r6 = r0 + r6;
    r0 = r6 + 3;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005072: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r5;
    r1 = 0x1U;
    r6 = r0 + r6;
    r0 = r6 + 3;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005080: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x28);
    r2 = r5;
    r1 = 0x1U;
    r0 = r0 + r6;
    r0 += 0x3U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0800508E: BL 0x08046E40
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x2C);
    r2 = 0x0U;
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x8U;
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r0 -= 0x8U;
    stack[4] = r0; // [sp + 0x10]
    r2 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r1 = 0x4; // sp + 0x4
    r0 = r4;
    r0 = sub_0803F974(r0, r1, r2, r3); // 0x080050B4
    r0 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r4 + 0x2C);
    r1 = r0;
    r1 -= 0x8U;
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x0U;
    r2 -= 0x8U;
    stack[4] = r2; // [sp + 0x10]
    r2 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_0803F974(r0, r1, r2, r3); // 0x080050D2
    r0 = *(u32*)(r4 + 0x2C);
    r2 = *(u32*)(r4 + 0x28);
    r1 = r0;
    r1 -= 0x8U;
    r3 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    stack[1] = r3; // [sp + 0x4]
    r0 = sub_0803F974(r0, r1, r2, r3); // 0x080050EE
    r0 = *(u32*)(r4 + 0x28);
    r1 = *(u32*)(r4 + 0x2C);
    r2 = 0xCU;
    r0 -= 0xCU;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    r1 -= 0xCU;
    r2 = 0x4U;
    r0 -= 0xCU;
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    r0 = *(u32*)(r4 + 0x24);
    r5 = r1 - 4;
    r1 = *(u32*)(r4 + 0x28);
    r7 = 0x01010101U; // [0x0800519C]
    r1 = (r1 << 2);
    r6 = r0 + r1;
    r6 += 0xCU;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08005134;
loc_0800511C:
    r1 = r7;
    r0 = r6;
    r2 = stack[0]; // [sp + 0x0]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08005122: BL 0x0804912C
    r0 = *(u32*)(r4 + 0x28);
    r5 -= 0x1U;
    r6 = r0 + r6;
    r0 = 0x31313131U; // [0x080051A0]
    r7 ^= r0;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800511C;
loc_08005134:
    r0 = *(u32*)(r4 + 0x28);
    r1 = *(u32*)(r4 + 0x2C);
    r2 = 0x8U;
    stack[1] = r2; // [sp + 0x4]
    r1 -= 0x8U;
    r2 = 0x0U;
    r0 -= 0x8U;
    stack[3] = r0; // [sp + 0xC]
    stack[4] = r1; // [sp + 0x10]
    r1 = 0x4; // sp + 0x4
    r0 = r4;
    stack[2] = r2; // [sp + 0x8]
    r0 = sub_08004F50(r0, r1, r2, r3); // 0x0800514C
    return r0;
    r6 = r3 - r1;
    r3 = *(u32*)(r0 + 0x24);
    r5 = r0;
    r0 = *(u32*)(r0 + 0x28);
    r0 *= r2;
    r0 = r3 + r0;
    r4 = r0 + r1;
    r0 = 0x2FU;
    r2 = r6 - 2;
    r7 = r2;
    *(u8*)(r4) = (u8)r0;
    r1 = 0x30U;
    r0 = r4 + 1;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005170: BL 0x08046E40
    r1 = r4 + r6;
    r1 -= 0x10U;
    r0 = 0x31U;
    *(u8*)(r1 + 0xF) = (u8)r0;
    r0 = *(u32*)(r5 + 0x28);
    r0 = r4 - r0;
    r0 += 0x1U;
    r2 = r7;
    r1 = 0x2FU;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005186: BL 0x08046E40
    r0 = *(u32*)(r5 + 0x28);
    r0 = r0 + r4;
    r0 += 0x1U;
    r2 = r7;
    r1 = 0x31U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08005194: BL 0x08046E40
    return r0;
    r0 = r0;
    r1 = (r0 << 4);
    r1 = (r0 << 4);
    r1 += 0x62U;
    r1 = r0 + 4;
    r7 -= 0x6EU;
    r5 = *(u32*)(r3 + 0x60);
    r7 = (r7 << 4);
    r0 += 0x1U;
    r0 = r0;
    r4 = *(u32*)(r0 + 0x28);
    r5 = *(u32*)(r0 + 0x24);
    r3 = r3 - r2;
    r4 *= r2;
    r2 = r5 + r4;
    r1 = r2 + r1;
    r5 = 0x2FU;
    *(u8*)(r1) = (u8)r5;
    r2 = *(u32*)(r0 + 0x28);
    r4 = 0x31U;
    r1 = r2 + r1;
    r1 -= 0x1U;
    r3 -= 0x2U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080051E0;
    r6 = 0x30U;
loc_080051D2:
    *(u8*)(r1) = (u8)r5;
    *(u8*)(r1 + 0x1) = (u8)r6;
    *(u8*)(r1 + 0x2) = (u8)r4;
    r2 = *(u32*)(r0 + 0x28);
    r1 = r2 + r1;
    r3 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_080051D2;
loc_080051E0:
    *(u8*)(r1 + 0x1) = (u8)r4;
    return r0; // BX lr
    r0 = r0;
    r5 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = sp;
    r4 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080051F6
    r0 = 0x083BE3D4U; // [0x08005414]
    r1 = stack[9]; // [sp + 0x24]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080051FE
    r2 = 0x08056A2CU; // [0x08005418]
    r1 = 0x080561CCU; // [0x0800541C]
    r0 = r4;
    r0 = sub_0803F9D4(r0, r1, r2, r3); // 0x08005208
    r1 = r4;
    r0 = r5;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x08005210
    r1 = 0x06000040U; // [0x08005420]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08005218: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08005220: BL 0x0803F58C
    return r0;
    r4 = r0;
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005230: BL 0x0803D5B8
    r7 = 0x0U;
    r7 = ~r7;
    r5 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r6 = 0x0804D82CU /* &VTable_0804D82C */; // [0x08005424]
    if (cmp_lhs == cmp_rhs) return sub_0800526A(r0, r1, r2, r3);
    r1 = 0x0U;
    stack[6] = r1; // [sp + 0x18]
    r2 = 0x1U;
    stack[7] = r2; // [sp + 0x1C]
    r1 = 0x1U;
    r2 = 0x78U;
    stack[4] = r2; // [sp + 0x10]
    return r0;
}

// ROM Address: 0x08005250..0x08005332 (226 bytes, Thumb)
u32 sub_08005250(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[0] = r1; // [sp + 0x0]
    r0 = 0x78U;
    stack[5] = r0; // [sp + 0x14]
    r1 = r4;
    r2 = 0x0U;
    r3 = 0x1U;
    r0 = r5;
    stack[2] = r7; // [sp + 0x8]
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x08005264
    *(u32*)(r5) = (u32)r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0800526E
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005274: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080052A8;
    r2 = 0x1U;
    r1 = 0x1U;
    stack[6] = r1; // [sp + 0x18]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x78U;
    r1 = 0x2U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r1 - 3;
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x0U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r0 = 0x86U;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x1U;
    r1 = r4;
    r3 = 0x0U;
    r0 = r5;
    stack[2] = r7; // [sp + 0x8]
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x080052A2
    *(u32*)(r5) = (u32)r6;
loc_080052A8:
    r1 = r5;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080052AC
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x080052B4: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080052BC
    return r0;
    r1 = 0x080561CCU; // [0x0800541C]
    r0 = 0x000005C4U; // [0x08005428]
    r1 -= 0x8U;
    r1 = *(u32*)(r1);
    r6 = 0x0U;
    r5 = r1 + r0;
    r0 = 0xFFU;
    r0 += 0x21U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r7 = 0x0804920CU /* &VTable_0804920C */; // [0x08005430]
    r4 = 0x08319488U; // [0x0800542C]
    if (cmp_lhs == cmp_rhs) return sub_08005332(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08005362(r0, r1, r2, r3);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080052E2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800531E;
    r1 = r0;
    r1 += 0xFFU;
    *(u32*)(r0 + 0x4) = (u32)r6;
    *(u32*)(r0) = (u32)r7;
    r1 += 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    r2 = 0xFFU;
    r3 = 0x0804BF28U /* &VTable_0804BF28 */; // [0x08005434]
    r2 += 0x15U;
    *(u32*)(r1 + 0x10) = (u32)r6;
    *(u32*)(r2 + r0) = r3;
    r2 = 0x0804A430U /* &VTable_0804A430 */; // [0x08005438]
    r3 = 0x03001914U; // [0x0800543C]
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
loc_0800531E:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0800531E
    r1 = r4;
    r3 = r6;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800532A
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08005332..0x08005362 (48 bytes, Thumb)
u32 sub_08005332(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005332: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800534E;
    r1 = r0;
    r1 += 0xFFU;
    *(u32*)(r0 + 0x4) = (u32)r6;
    *(u32*)(r0) = (u32)r7;
    r1 += 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x08049B00U /* &VTable_08049B00 */; // [0x08005440]
    *(u32*)(r0) = (u32)r1;
loc_0800534E:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0800534E
    r1 = r4;
    r3 = r6;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800535A
    r0 = 0x1U;
    return sub_08005330(r0, r1, r2, r3);
}

// Evidence: writes BLDCNT 0x04000050: 0x0800539C ldr r0, [pc, #0xa8] (= 0x04000040) then 0x080053A0 strh r4, [r0, #0x10]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0800536A
// ROM Address: 0x0800536A..0x0800547E (276 bytes, Thumb)
u32 Blend_WriteControl1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x200U; // (1 << 9)
    r2 = r6;
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x08005444]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08005378: BL 0x0804912C
    r2 = r6;
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08005384: BL 0x0804912C
    r4 = 0x0U;
    r5 = (r6 << 17);
    *(u16*)(r5) = (u16)r4;
    *(u16*)(r5 + 0x10) = (u16)r4;
    *(u16*)(r5 + 0x12) = (u16)r4;
    *(u16*)(r5 + 0x14) = (u16)r4;
    *(u16*)(r5 + 0x16) = (u16)r4;
    *(u16*)(r5 + 0x18) = (u16)r4;
    *(u16*)(r5 + 0x1A) = (u16)r4;
    *(u16*)(r5 + 0x1C) = (u16)r4;
    r0 = 0x04000040U /* &REG_WIN0H */; // [0x08005448]
    *(u16*)(r5 + 0x1E) = (u16)r4;
    *(u16*)(r0 + 0x10) = (u16)r4;
    r0 = 0x00001E83U; // [0x0800544C]
    r1 = 0x0U;
    *(u16*)(r5 + 0xA) = (u16)r0;
    r0 = (r0 << 25);
    r2 = 0x00009640U; // [0x08005450]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080053AC: BL 0x0804912C
    r0 = 0x1EU;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x14U;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0x1U;
    stack[0] = r4; // [sp + 0x0]
    stack[1] = r4; // [sp + 0x4]
    r1 = 0x0600F000U; // [0x08005454]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x080053C2
    *(u16*)(r5) = (u16)r6;
    return r0;
    r4 = r0;
    r0 = Blend_WriteControl1(r0, r1, r2, r3); // 0x080053D0: BL 0x0800536A
    r0 = r4;
    r0 = sub_08005228(r0, r1, r2, r3); // 0x080053D6
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x08005458]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080053E4: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x08005458]
    r0 = 0x05000200U; // [0x08005444]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080053F0: BL 0x08049144
    r0 = 0x080561CCU; // [0x0800541C]
    r1 = 0xE1U;
    r2 = 0x083BB78CU; // [0x0800545C]
    r0 -= 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 2);
    r1 = r1 + r2;
    r2 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800540E;
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08005412;
loc_0800540E:
    r0 = sub_0803F110(r0, r1, r2, r3); // 0x0800540E
loc_08005412:
    return r0;
    return sub_08005BC0(r0, r1, r2, r3);
    r3 = (r7 >> 32);
    r4 = *(u32*)(r5 + 0x20);
    r5 = (r0 >> 32);
    *(u32*)(r1 + 0x1C) = (u32)r4;
    r5 = (r0 >> 32);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    if ((u32)cmp_lhs > (u32)cmp_rhs) return sub_08005480(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r4 = 0x080054FCU;
    r4 = (r0 >> 32);
    r4 = r2 + r4;
    r0 = (r0 << 12);
    r3 = stack[0]; // [sp + 0x0]
    r4 = (r0 >> 32);
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
    r3 = (r7 >> 32);
    r7 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800547E(r0, r1, r2, r3);
    r0 = 0x2F8U; // (95 << 3)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08005470: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800547E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800547E..0x080054BA (60 bytes, Thumb)
u32 sub_0800547E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r4;
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x080056E8]
    r6 = 0x0U;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    r5 += 0x100U;
    *(u32*)(r5 + 0xC) = (u32)r6;
    *(u32*)(r5 + 0x8) = (u32)r6;
    r0 = 0x08049728U /* &VTable_08049728 */; // [0x080056EC]
    *(u32*)(r5 + 0x10) = (u32)r6;
    r4 -= 0x8U;
    *(u32*)(r4) = (u32)r0;
    r0 = r5;
    r0 += 0x2CU;
    r0 = sub_08004D38(r0, r1, r2, r3); // 0x0800549A: BL 0x08004D38
    r0 = stack[2]; // [sp + 0x8]
    r1 = 0xFFU;
    *(u32*)(r5 + 0x14) = (u32)r0;
    r0 = stack[3]; // [sp + 0xC]
    r1 += 0x25U;
    *(u32*)(r5 + 0x18) = (u32)r0;
    *(u32*)(r5 + 0x28) = (u32)r6;
    *(u32*)(r5 + 0x20) = (u32)r7;
    r0 = ~r6;
    *(u32*)(r5 + 0x1C) = (u32)r0;
    r0 = 0x6U;
    *(u8*)(r1 + r4) = (u8)r0;
    r0 = r4;
    return sub_0800547A(r0, r1, r2, r3);
}
