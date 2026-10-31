/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #18
 * Address Range: 0x080343C6..0x08036C4E (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x080343C6..0x08034490 (202 bytes, Thumb)
u32 sub_080343C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 36;
    if (cmp_lhs != cmp_rhs) return sub_08034490(r0, r1, r2, r3);
    r5 = 0x0U;
    r1 = 0x14U;
    r0 = r4;
    *(u8*)(r4 + 0x11) = (u8)r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080343E4
    r6 = 0x3C; // sp + 0x3C
    r1 = r6;
    r1 += 0x20U;
    r2 = 0x8U;
    r0 = r6;
    r3 = 0x08050751U /* &sub_08050750 */; // [0x08034560]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x080343F4: BL 0x08046FF4
    r0 = 0x2000U; // (1 << 13)
    r1 = (u32)(-(s32)r0);
    stack[14] = r0; // [sp + 0x38]
    stack[13] = r5; // [sp + 0x34]
    stack[13] = r5; // [sp + 0x34]
    stack[14] = r1; // [sp + 0x38]
    stack[14] = r5; // [sp + 0x38]
    stack[13] = r1; // [sp + 0x34]
    stack[13] = r0; // [sp + 0x34]
    stack[14] = r5; // [sp + 0x38]
    stack[22] = r5; // [sp + 0x58]
    stack[21] = r0; // [sp + 0x54]
    stack[16] = r0; // [sp + 0x40]
    stack[15] = r5; // [sp + 0x3C]
    stack[17] = r5; // [sp + 0x44]
    stack[20] = r5; // [sp + 0x50]
    stack[18] = r1; // [sp + 0x48]
    stack[19] = r1; // [sp + 0x4C]
    r0 = 0x03001C34U; // [0x08034564]
    r1 = *(u32*)(r7 + 0x4);
    r0 = *(u32*)(r0);
    r1 = (r1 << 3);
    r0 += 0x1A0U;
    r1 = r1 + r6;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r1; r1 += 4;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r2 = r2 + r3;
    r0 = r0 + r1;
    stack[10] = r0; // [sp + 0x28]
    r1 = stack[10]; // [sp + 0x28]
    r0 = ((u32)((s32)r2 >> 8));
    stack[12] = r1; // [sp + 0x30]
    r1 = ((u32)((s32)r1 >> 8));
    stack[9] = r2; // [sp + 0x24]
    stack[9] = r0; // [sp + 0x24]
    stack[10] = r1; // [sp + 0x28]
    stack[14] = r1; // [sp + 0x38]
    stack[13] = r0; // [sp + 0x34]
    r0 = 0xC; // sp + 0xC
    r1 = r4;
    stack[11] = r2; // [sp + 0x2C]
    r5 = 0x34; // sp + 0x34
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08034454: BL 0x0800FDFA
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[3]; // [sp + 0xC]
    r3 = stack[4]; // [sp + 0x10]
    r1 = r0 - r1;
    r0 = stack[6]; // [sp + 0x18]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 - r3;
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x087593E8U; // [0x08034568]
    stack[7] = r1; // [sp + 0x1C]
    r2 = 0x1C; // sp + 0x1C
    r3 = r2;
    r1 = *(u32*)(r0);
    r0 = 0x24; // sp + 0x24
    r2 = r5;
    r0 = sub_08009816(r0, r1, r2, r3); // 0x08034478
    r0 = r4;
    r1 = stack[9]; // [sp + 0x24]
    r0 += 0x1A0U;
    r2 = stack[10]; // [sp + 0x28]
    r1 = (r1 << 8);
    *(u32*)r0 = r1; r0 += 4;
    r2 = (r2 << 8);
    *(u32*)(r0) = (u32)r2;
    return sub_080344B4(r0, r1, r2, r3);
}

// ROM Address: 0x08034490..0x080344CA (58 bytes, Thumb)
u32 sub_08034490(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 72;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080344A6;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803449E: BL __call_via_r3
loc_080344A2:
    return r0;
loc_080344A6:
    cmp_lhs = (s32)r0; cmp_rhs = 54;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080344B4;
    r0 = 0x1U;
    r1 = 0xFFU;
    r1 += 0xCDU;
    *(u32*)(r1 + r4) = r0;
    goto loc_080344C0;
loc_080344B4:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 36;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080344C0;
    r0 = (r0 >> 2);
    *(u8*)(r4 + 0x11) = (u8)r0;
    goto loc_080344A2;
loc_080344C0:
    r0 = *(u16*)(r4 + 0x12);
    r0 -= 0x24U;
    r0 = ((u32)((s32)r0 >> 2));
    *(u8*)(r4 + 0x11) = (u8)r0;
    goto loc_080344A2;
    return r0;
}

// ROM Address: 0x08034574..0x08034592 (30 bytes, Thumb)
u32 sub_08034574(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B94U; // [0x0803461C]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803458C;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08034592(r0, r1, r2, r3);
loc_0803458C:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08034592..0x080345FC (106 bytes, Thumb)
u32 sub_08034592(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x28; // sp + 0x28
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08034594
    r1 = r4;
    r0 = 0x18; // sp + 0x18
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803459C
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[8]; // [sp + 0x20]
    r2 = stack[9]; // [sp + 0x24]
    r1 = r0 + r1;
    r0 = stack[7]; // [sp + 0x1C]
    stack[2] = r1; // [sp + 0x8]
    r0 = r0 + r2;
    stack[3] = r0; // [sp + 0xC]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
    stack[5] = r0; // [sp + 0x14]
    stack[4] = r1; // [sp + 0x10]
    r1 = stack[12]; // [sp + 0x30]
    r0 = stack[10]; // [sp + 0x28]
    r2 = stack[13]; // [sp + 0x34]
    r1 = r0 + r1;
    r0 = stack[11]; // [sp + 0x2C]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[4]; // [sp + 0x10]
    r2 = stack[5]; // [sp + 0x14]
    r1 = r0 - r1;
    r0 = stack[3]; // [sp + 0xC]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 - r2;
    r1 += 0x2FU;
    cmp_lhs = (s32)r1; cmp_rhs = 94;
    stack[1] = r0; // [sp + 0x4]
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_080345F8;
    r0 += 0x2FU;
    cmp_lhs = (s32)r0; cmp_rhs = 94;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_080345F8;
    r0 = 0x1U;
    return sub_0803458E(r0, r1, r2, r3);
loc_080345F8:
    r0 = 0x0U;
    return sub_0803458E(r0, r1, r2, r3);
}

// ROM Address: 0x080345FC..0x0803461A (30 bytes, Thumb)
u32 sub_080345FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034602: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803460A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08034618;
    r1 = 0x0804CB58U; // [0x08034620]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08034618:
    return r0;
}

// ROM Address: 0x0803461A..0x08034630 (22 bytes, Thumb)
u32 sub_0803461A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r3 = *(u32*)r3; r3 += 4;
    r4 = *(u32*)r3; r3 += 4;
    r6 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
}

// ROM Address: 0x0803467A..0x080346DA (96 bytes, Thumb)
u32 sub_0803467A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08034684
    r1 = 0x0300322CU; // [0x080349EC]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803468C
    r0 = 0x03001C34U; // [0x080349F0]
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080346D6;
    r5 = 0xC; // sp + 0xC
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803469C: BL 0x0800FDFA
    r1 = r5;
    r0 = 0x1C; // sp + 0x1C
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x080346A4
    r1 = r4;
    r5 = 0x24; // sp + 0x24
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080346AE: BL 0x0800FDFA
    r1 = r5;
    r0 = 0x34; // sp + 0x34
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x080346B6
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[13]; // [sp + 0x34]
    r2 = stack[14]; // [sp + 0x38]
    r1 = r0 - r1;
    r0 = stack[8]; // [sp + 0x20]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 - r2;
    stack[2] = r0; // [sp + 0x8]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_080346E4(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_080346DA(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_080346D6:
    return r0;
}

// ROM Address: 0x080346DA..0x080346FC (34 bytes, Thumb)
u32 sub_080346DA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_080346D6(r0, r1, r2, r3);
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_080346D6(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_080346D6(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080346F2;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_080346D6(r0, r1, r2, r3);
loc_080346F2:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_080346D6(r0, r1, r2, r3);
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_080346D6(r0, r1, r2, r3);
}

// ROM Address: 0x080346FC..0x08034712 (22 bytes, Thumb)
u32 sub_080346FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x080349F0]
    r6 = r1;
    r5 = *(u32*)(r0);
    r4 = r1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08034712(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08034712..0x08034816 (260 bytes, Thumb)
u32 sub_08034712(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08034786;
    r0 = 0x4000U; // (1 << 14)
    r0 = sub_0803FADE(r0, r1, r2, r3); // 0x0803471C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08034786;
    r1 = r5;
    r5 = 0x8; // sp + 0x8
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803472A: BL 0x0800FDFA
    r1 = r5;
    r0 = 0x18; // sp + 0x18
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x08034732
    r1 = r4;
    r5 = 0x20; // sp + 0x20
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803473C: BL 0x0800FDFA
    r1 = r5;
    r0 = 0x30; // sp + 0x30
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x08034744
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[12]; // [sp + 0x30]
    r2 = stack[13]; // [sp + 0x34]
    r1 = r0 - r1;
    r0 = stack[7]; // [sp + 0x1C]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 - r2;
    stack[1] = r0; // [sp + 0x4]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08034770;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08034766;
    r0 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    goto loc_08034786;
loc_08034766:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08034786;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    goto loc_08034786;
loc_08034770:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08034786;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803477E;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    goto loc_08034786;
loc_0803477E:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08034786;
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_08034786:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08034812;
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034796: BL __call_via_r3
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x087593F8U; // [0x080349F4]
    r5 = r4;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = (r1 << 7);
    r0 = (r0 << 7);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[7] = r0; // [sp + 0x1C]
    r0 = r1;
    stack[6] = r1; // [sp + 0x18]
    r1 = stack[7]; // [sp + 0x1C]
    r5 += 0x1A0U;
    stack[8] = r0; // [sp + 0x20]
    stack[9] = r1; // [sp + 0x24]
    r0 = *(u32*)(r5);
    r1 = stack[8]; // [sp + 0x20]
    r4 = r5 + 4;
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = stack[9]; // [sp + 0x24]
    stack[6] = r0; // [sp + 0x18]
    r1 = r1 + r2;
    stack[7] = r1; // [sp + 0x1C]
    stack[11] = r1; // [sp + 0x2C]
    stack[13] = r1; // [sp + 0x34]
    stack[10] = r0; // [sp + 0x28]
    stack[12] = r0; // [sp + 0x30]
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x30; // sp + 0x30
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080347E4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08034804;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080347FE: BL __call_via_r3
    goto loc_08034812;
loc_08034804:
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803480E: BL __call_via_r3
loc_08034812:
    r0 = 0x0U;
    return sub_0803470E(r0, r1, r2, r3);
}

// ROM Address: 0x0803481C..0x08034836 (26 bytes, Thumb)
u32 sub_0803481C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x80U;
    stack[17] = r0; // [sp + 0x44]
    r0 = 0x03001C34U; // [0x080349F0]
    r7 = r1;
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08034836(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08034836..0x080349E8 (434 bytes, Thumb)
u32 sub_08034836(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r7 + 0x12);
    r6 = stack[19]; // [sp + 0x4C]
    r6 += 0x4U;
    r5 = r6 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08034904;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08034844: BL 0x0800FDFA
    r1 = 0xC; // sp + 0xC
    r0 = 0x1C; // sp + 0x1C
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x0803484C
    r1 = r4;
    r0 = 0x24; // sp + 0x24
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08034854: BL 0x0800FDFA
    r1 = 0x24; // sp + 0x24
    r0 = 0x34; // sp + 0x34
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x0803485C
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[13]; // [sp + 0x34]
    r2 = stack[14]; // [sp + 0x38]
    r0 = r0 - r1;
    r1 = stack[8]; // [sp + 0x20]
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 - r2;
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[2] = r1; // [sp + 0x8]
    stack[16] = r1; // [sp + 0x40]
    stack[15] = r0; // [sp + 0x3C]
    if (cmp_lhs >= cmp_rhs) goto loc_0803487C;
    r0 = (u32)(-(s32)r2);
loc_0803487C:
    r1 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08034886;
    r0 = (u32)(-(s32)r0);
loc_08034886:
    stack[14] = r0; // [sp + 0x38]
    r0 = r1;
    stack[13] = r1; // [sp + 0x34]
    r1 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_080348A0;
    r2 = stack[15]; // [sp + 0x3C]
    r1 = 0x2U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803489C;
    r1 = 0x3U;
loc_0803489C:
    *(u8*)(r4 + 0x10) = (u8)r1;
    goto loc_080348AE;
loc_080348A0:
    r0 = r1;
    r2 = stack[16]; // [sp + 0x40]
    r1 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_080348AC;
    r1 = 0x0U;
loc_080348AC:
    *(u8*)(r4 + 0x10) = (u8)r1;
loc_080348AE:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080348B4;
    r0 = 0x1U;
loc_080348B4:
    r1 = stack[15]; // [sp + 0x3C]
    r2 = stack[16]; // [sp + 0x40]
    r1 = (r1 << 8);
    *(u32*)(r6) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r5) = (u32)r2;
    r1 = stack[17]; // [sp + 0x44]
    r2 = *(u32*)(r6);
    r3 = *(u32*)(r5);
    r2 *= r1;
    r3 *= r1;
    r1 = ((u32)((s32)r3 >> 8));
    r2 = ((u32)((s32)r2 >> 8));
    stack[10] = r1; // [sp + 0x28]
    r1 = r2;
    stack[9] = r2; // [sp + 0x24]
    r2 = stack[10]; // [sp + 0x28]
    r0 = (r0 << 8);
    stack[11] = r1; // [sp + 0x2C]
    r1 = (r1 << 8);
    stack[18] = r0; // [sp + 0x48]
    stack[12] = r2; // [sp + 0x30]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080348E0: BL 0x08046E58
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[12]; // [sp + 0x30]
    r1 = (r0 << 8);
    r0 = stack[18]; // [sp + 0x48]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080348EC: BL 0x08046E58
    r1 = stack[8]; // [sp + 0x20]
    stack[10] = r0; // [sp + 0x28]
    r0 = r1;
    stack[9] = r1; // [sp + 0x24]
    r1 = stack[10]; // [sp + 0x28]
    stack[13] = r0; // [sp + 0x34]
    stack[14] = r1; // [sp + 0x38]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[14]; // [sp + 0x38]
    *(u32*)(r5) = (u32)r0;
loc_08034904:
    r0 = *(u16*)(r7 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080349E4;
    r7 = r4;
    r7 += 0x1A0U;
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r6);
    r6 = r7 + 4;
    r0 = r0 - r1;
    r1 = *(u32*)(r7 + 0x4);
    r2 = *(u32*)(r5);
    stack[11] = r0; // [sp + 0x2C]
    r1 = r1 - r2;
    stack[12] = r1; // [sp + 0x30]
    stack[14] = r1; // [sp + 0x38]
    stack[16] = r1; // [sp + 0x40]
    stack[13] = r0; // [sp + 0x34]
    stack[15] = r0; // [sp + 0x3C]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034934: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x3C; // sp + 0x3C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034942: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08034954;
    r0 = stack[15]; // [sp + 0x3C]
    *(u32*)(r7) = (u32)r0;
    r0 = stack[16]; // [sp + 0x40]
    *(u32*)(r6) = (u32)r0;
    goto loc_080349D6;
loc_08034954:
    r0 = stack[19]; // [sp + 0x4C]
    r3 = 0x34; // sp + 0x34
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08034968;
    r0 = stack[17]; // [sp + 0x44]
    r0 = (u32)(-(s32)r0);
    stack[12] = r0; // [sp + 0x30]
    r0 = 0x30; // sp + 0x30
    goto loc_0803496A;
loc_08034968:
    r0 = 0x44; // sp + 0x44
loc_0803496A:
    r1 = *(u32*)(r7);
    r0 = *(u32*)(r0);
    r5 = r4;
    r5 += 0xFFU;
    r0 = r1 - r0;
    stack[13] = r0; // [sp + 0x34]
    r5 += 0xA5U;
    r0 = *(u32*)(r5);
    r3 = 0x34; // sp + 0x34
    stack[14] = r0; // [sp + 0x38]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034988: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803499A;
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r7) = (u32)r0;
    r0 = stack[14]; // [sp + 0x38]
    *(u32*)(r6) = (u32)r0;
    goto loc_080349D6;
loc_0803499A:
    r0 = *(u32*)(r7);
    r3 = 0x34; // sp + 0x34
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[19]; // [sp + 0x4C]
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080349B2;
    r0 = stack[17]; // [sp + 0x44]
    r0 = (u32)(-(s32)r0);
    stack[12] = r0; // [sp + 0x30]
    r0 = 0x30; // sp + 0x30
    goto loc_080349B4;
loc_080349B2:
    r0 = 0x44; // sp + 0x44
loc_080349B4:
    r1 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r0 = r1 - r0;
    stack[14] = r0; // [sp + 0x38]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080349C6: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080349F8(r0, r1, r2, r3);
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r7) = (u32)r0;
    r0 = stack[14]; // [sp + 0x38]
    *(u32*)(r6) = (u32)r0;
loc_080349D6:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080349E0: BL __call_via_r3
loc_080349E4:
    r0 = 0x0U;
    return sub_08034832(r0, r1, r2, r3);
}

// ROM Address: 0x080349F8..0x08034A0A (18 bytes, Thumb)
u32 sub_080349F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034A02: BL __call_via_r3
    r0 = 0x0U;
    return sub_08034832(r0, r1, r2, r3);
}

// ROM Address: 0x08034A20..0x08034A7C (92 bytes, Thumb)
u32 sub_08034A20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x08034A28
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08034A40;
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08034A34
    r0 = 0x47U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = 0x8U;
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_08034A40:
    r0 = 0x0U;
    r4 += 0x1C0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08034A58;
    r0 -= 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
loc_08034A58:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 35;
    if (cmp_lhs != cmp_rhs) return sub_08034A7C(r0, r1, r2, r3);
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08034A62
    r0 = r4;
    r0 += 0xFFU;
    r1 = 0x208U; // (65 << 3)
    r0 += 0xA1U;
    r1 = r4 + r1;
    r2 = *(u32*)r1; r1 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r1 = *(u32*)(r1);
    *(u32*)(r0) = (u32)r1;
    return sub_08034A90(r0, r1, r2, r3);
}

// ROM Address: 0x08034A7C..0x08034AA4 (40 bytes, Thumb)
u32 sub_08034A7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08034A90;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034A8A: BL __call_via_r3
    return r0;
loc_08034A90:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 36;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08034A9C;
    r0 = (r0 >> 2);
    *(u8*)(r4 + 0x11) = (u8)r0;
    return r0;
loc_08034A9C:
    r0 -= 0x24U;
    r0 = ((u32)((s32)r0 >> 2));
    *(u8*)(r4 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x08034AA4..0x08034AA8 (4 bytes, Thumb)
u32 sub_08034AA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003238U; // [0x08034AA8]
    return r0; // BX lr
}

// ROM Address: 0x08034B46..0x08034B94 (78 bytes, Thumb)
u32 sub_08034B46(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x08034BB0]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x08034BB4]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_08034B64;
    r1 = r4;
    r1 += 0x18CU;
loc_08034B64:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08034B66
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08034B6E
    r1 = 0x0300323CU; // [0x08034BB8]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08034B76
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08034BBC]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08034B90;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034B8C: BL __call_via_r3
loc_08034B90:
    return r0;
}

// ROM Address: 0x08034B94..0x08034BA6 (18 bytes, Thumb)
u32 sub_08034B94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x0300323CU; // [0x08034BB8]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08034BA2;
    r0 = 0x0U;
loc_08034BA2:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x08034BDE..0x08034CA8 (202 bytes, Thumb)
u32 sub_08034BDE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 36;
    if (cmp_lhs != cmp_rhs) return sub_08034CA8(r0, r1, r2, r3);
    r5 = 0x0U;
    r1 = 0x14U;
    r0 = r4;
    *(u8*)(r4 + 0x11) = (u8)r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08034BFC
    r6 = 0x3C; // sp + 0x3C
    r1 = r6;
    r1 += 0x20U;
    r2 = 0x8U;
    r0 = r6;
    r3 = 0x08050751U /* &sub_08050750 */; // [0x08034CE8]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08034C0C: BL 0x08046FF4
    r0 = 0x2000U; // (1 << 13)
    r1 = (u32)(-(s32)r0);
    stack[14] = r0; // [sp + 0x38]
    stack[13] = r5; // [sp + 0x34]
    stack[13] = r5; // [sp + 0x34]
    stack[14] = r1; // [sp + 0x38]
    stack[14] = r5; // [sp + 0x38]
    stack[13] = r1; // [sp + 0x34]
    stack[13] = r0; // [sp + 0x34]
    stack[14] = r5; // [sp + 0x38]
    stack[22] = r5; // [sp + 0x58]
    stack[21] = r0; // [sp + 0x54]
    stack[16] = r0; // [sp + 0x40]
    stack[15] = r5; // [sp + 0x3C]
    stack[17] = r5; // [sp + 0x44]
    stack[20] = r5; // [sp + 0x50]
    stack[18] = r1; // [sp + 0x48]
    stack[19] = r1; // [sp + 0x4C]
    r0 = 0x03001C34U; // [0x08034CEC]
    r1 = *(u32*)(r7 + 0x4);
    r0 = *(u32*)(r0);
    r1 = (r1 << 3);
    r0 += 0x1A0U;
    r1 = r1 + r6;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r1; r1 += 4;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r2 = r2 + r3;
    r0 = r0 + r1;
    stack[10] = r0; // [sp + 0x28]
    r1 = stack[10]; // [sp + 0x28]
    r0 = ((u32)((s32)r2 >> 8));
    stack[12] = r1; // [sp + 0x30]
    r1 = ((u32)((s32)r1 >> 8));
    stack[9] = r2; // [sp + 0x24]
    stack[9] = r0; // [sp + 0x24]
    stack[10] = r1; // [sp + 0x28]
    stack[14] = r1; // [sp + 0x38]
    stack[13] = r0; // [sp + 0x34]
    r0 = 0xC; // sp + 0xC
    r1 = r4;
    stack[11] = r2; // [sp + 0x2C]
    r5 = 0x34; // sp + 0x34
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08034C6C: BL 0x0800FDFA
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[3]; // [sp + 0xC]
    r3 = stack[4]; // [sp + 0x10]
    r1 = r0 - r1;
    r0 = stack[6]; // [sp + 0x18]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 - r3;
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x0875946CU; // [0x08034CF0]
    stack[7] = r1; // [sp + 0x1C]
    r2 = 0x1C; // sp + 0x1C
    r3 = r2;
    r1 = *(u32*)(r0);
    r0 = 0x24; // sp + 0x24
    r2 = r5;
    r0 = sub_08009816(r0, r1, r2, r3); // 0x08034C90
    r0 = r4;
    r1 = stack[9]; // [sp + 0x24]
    r0 += 0x1A0U;
    r2 = stack[10]; // [sp + 0x28]
    r1 = (r1 << 8);
    *(u32*)r0 = r1; r0 += 4;
    r2 = (r2 << 8);
    *(u32*)(r0) = (u32)r2;
    return sub_08034CCC(r0, r1, r2, r3);
}

// ROM Address: 0x08034CA8..0x08034CE2 (58 bytes, Thumb)
u32 sub_08034CA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 72;
    if (cmp_lhs != cmp_rhs) goto loc_08034CBE;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034CB6: BL __call_via_r3
loc_08034CBA:
    return r0;
loc_08034CBE:
    cmp_lhs = (s32)r0; cmp_rhs = 54;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08034CCC;
    r0 = 0x1U;
    r1 = 0xFFU;
    r1 += 0xCDU;
    *(u32*)(r1 + r4) = r0;
    goto loc_08034CD8;
loc_08034CCC:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 36;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08034CD8;
    r0 = (r0 >> 2);
    *(u8*)(r4 + 0x11) = (u8)r0;
    goto loc_08034CBA;
loc_08034CD8:
    r0 = *(u16*)(r4 + 0x12);
    r0 -= 0x24U;
    r0 = ((u32)((s32)r0 >> 2));
    *(u8*)(r4 + 0x11) = (u8)r0;
    goto loc_08034CBA;
    return r0;
}

// ROM Address: 0x08034CF8..0x08034D72 (122 bytes, Thumb)
u32 sub_08034CF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r5;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    r4 = r1;
    r0 = 0x0U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    r0 = 0x03001C34U; // [0x08034EC4]
    r1 = *(u32*)(r0);
    r0 = 0x8; // sp + 0x8
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08034D10: BL 0x0800FDFA
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[4]; // [sp + 0x10]
    r2 = stack[5]; // [sp + 0x14]
    r1 = r0 + r1;
    r0 = stack[3]; // [sp + 0xC]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[0] = r1; // [sp + 0x0]
    stack[6] = r1; // [sp + 0x18]
    stack[1] = r0; // [sp + 0x4]
    stack[7] = r0; // [sp + 0x1C]
    r6 = 0x1U;
    r1 = r4;
    r0 = 0x20; // sp + 0x20
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08034D36: BL 0x0800FDFA
    r0 = stack[8]; // [sp + 0x20]
    r1 = stack[10]; // [sp + 0x28]
    r2 = stack[11]; // [sp + 0x2C]
    r1 = r0 + r1;
    r0 = stack[9]; // [sp + 0x24]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    stack[1] = r0; // [sp + 0x4]
    stack[13] = r0; // [sp + 0x34]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = stack[6]; // [sp + 0x18]
    stack[0] = r1; // [sp + 0x0]
    stack[12] = r1; // [sp + 0x30]
    r1 = r0 - r1;
    r0 = stack[7]; // [sp + 0x1C]
    r2 = stack[13]; // [sp + 0x34]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 - r2;
    stack[1] = r0; // [sp + 0x4]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_08034D78(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_08034D72(r0, r1, r2, r3);
    *(u8*)(r4 + 0x10) = (u8)r6;
    return r0;
}

// ROM Address: 0x08034D72..0x08034D86 (20 bytes, Thumb)
u32 sub_08034D72(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_08034D6E(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08034D82;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return sub_08034D6E(r0, r1, r2, r3);
loc_08034D82:
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_08034D6E(r0, r1, r2, r3);
}

// ROM Address: 0x08034ED8..0x08034EEE (22 bytes, Thumb)
u32 sub_08034ED8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r0 = 0x03001B94U; // [0x08035068]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08034EEE(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08034EEE..0x08035050 (354 bytes, Thumb)
u32 sub_08034EEE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08034EF0: BL 0x0800FDFA
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
    r6 = 0x1U;
    r1 = r4;
    r0 = 0x24; // sp + 0x24
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08034F16: BL 0x0800FDFA
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
    if (cmp_lhs >= cmp_rhs) goto loc_08034F50;
    r0 = (u32)(-(s32)r2);
loc_08034F50:
    r1 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08034F5A;
    r0 = (u32)(-(s32)r0);
loc_08034F5A:
    r5 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    stack[13] = r1; // [sp + 0x34]
    stack[14] = r0; // [sp + 0x38]
    if (cmp_lhs <= cmp_rhs) goto loc_08034F72;
    r1 = stack[15]; // [sp + 0x3C]
    r0 = 0x3U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08034F6E;
    r0 = 0x2U;
loc_08034F6E:
    *(u8*)(r4 + 0x10) = (u8)r0;
    goto loc_08034F7E;
loc_08034F72:
    r5 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08034F7C;
    r6 = 0x0U;
loc_08034F7C:
    *(u8*)(r4 + 0x10) = (u8)r6;
loc_08034F7E:
    cmp_lhs = (s32)r5; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_08034F86;
    r0 = 0x0U;
    return sub_08034EEA(r0, r1, r2, r3);
loc_08034F86:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034F90: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08034FA6;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034FA2: BL __call_via_r3
loc_08034FA6:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08034FB0: BL __call_via_r3
    r0 = stack[15]; // [sp + 0x3C]
    r1 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 8);
    r1 = (r1 << 8);
    stack[14] = r1; // [sp + 0x38]
    stack[13] = r0; // [sp + 0x34]
    r1 = *(u32*)(r7 + 0x4);
    r2 = stack[14]; // [sp + 0x38]
    r0 *= r1;
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    r6 = r4;
    r6 += 0xFFU;
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    r1 = (r0 << 8);
    r6 += 0xA1U;
    stack[3] = r0; // [sp + 0xC]
    stack[5] = r0; // [sp + 0x14]
    r5 = (r5 << 8);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08034FE0: BL 0x08046E58
    r7 = r0;
    r0 = stack[6]; // [sp + 0x18]
    r1 = (r0 << 8);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08034FEC: BL 0x08046E58
    stack[4] = r0; // [sp + 0x10]
    r1 = stack[4]; // [sp + 0x10]
    stack[3] = r7; // [sp + 0xC]
    stack[7] = r7; // [sp + 0x1C]
    stack[8] = r1; // [sp + 0x20]
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r6 + 0x4);
    r2 = stack[8]; // [sp + 0x20]
    r0 = r0 + r7;
    r1 = r1 + r2;
    stack[4] = r1; // [sp + 0x10]
    stack[3] = r0; // [sp + 0xC]
    stack[11] = r0; // [sp + 0x2C]
    stack[12] = r1; // [sp + 0x30]
    stack[10] = r1; // [sp + 0x28]
    stack[9] = r0; // [sp + 0x24]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r5 = r6 + 4;
    r2 = r2 + r1;
    r1 = 0x2C; // sp + 0x2C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803501C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803503E;
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r5) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035036: BL __call_via_r3
    r0 = 0x0U;
    return sub_08034EEA(r0, r1, r2, r3);
loc_0803503E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035048: BL __call_via_r3
    r0 = 0x1U;
    return sub_08034EEA(r0, r1, r2, r3);
}

// ROM Address: 0x08035050..0x08035066 (22 bytes, Thumb)
u32 sub_08035050(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08035056: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08035064;
    r1 = 0x0804B6A8U; // [0x0803506C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08035064:
    return r0;
}

// ROM Address: 0x0803507C..0x0803509A (30 bytes, Thumb)
u32 sub_0803507C(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0803509A(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x0803509A..0x08035138 (158 bytes, Thumb)
u32 sub_0803509A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080350A4;
    *(u8*)(r4 + 0x11) = (u8)r1;
    return sub_08035096(r0, r1, r2, r3);
loc_080350A4:
    r6 = 0x087594ACU; // [0x08035208]
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0803510A;
    r0 = 0x2U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x080350B0
    cmp_lhs = (s32)r0; cmp_rhs = 192;
    if (cmp_lhs < cmp_rhs) return sub_08035096(r0, r1, r2, r3);
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
    r3 = r4;
    r0 = 0x0U;
    r2 = *(u8*)(r4 + 0x10);
    r1 = 0x10; // sp + 0x10
    r0 = sub_080355EC(r0, r1, r2, r3); // 0x080350FA: BL 0x080355EC
    r1 = r0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x08035104: BL 0x0801191A
    return sub_08035096(r0, r1, r2, r3);
loc_0803510A:
    r0 = *(u32*)(r6);
    r3 = *(u32*)(r5 + 0x4);
    r1 = r0 + 4;
    r5 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08035128;
loc_08035118:
    r2 = (r0 << 2);
    r2 = r2 + r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) return sub_08035096(r0, r1, r2, r3);
    r0 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08035118;
loc_08035128:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035132: BL __call_via_r3
    return sub_08035096(r0, r1, r2, r3);
}

// ROM Address: 0x08035144..0x0803516E (42 bytes, Thumb)
u32 sub_08035144(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = *(u32*)(r3);
    r1 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08035166;
loc_0803514C:
    r5 = (r1 << 2);
    r5 = r5 + r3;
    r5 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_0803515E;
    r1 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0803514C;
    goto loc_08035166;
loc_0803515E:
    r1 = 0x26U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08035162
loc_08035166:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08035168: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0803516E..0x080351C0 (82 bytes, Thumb)
u32 sub_0803516E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03001C34U; // [0x0803520C]
    r4 = r1;
    r0 = *(u32*)(r5);
    r2 = 0x80U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08035180: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_080351EA(r0, r1, r2, r3);
    r1 = 0xFFU;
    r0 = *(u32*)(r5);
    r1 += 0xCDU;
    r1 = *(u32*)(r1 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080351EA(r0, r1, r2, r3);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x08035210]
    stack[1] = r1; // [sp + 0x4]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    if (cmp_lhs == cmp_rhs) goto loc_080351AE;
    r1 = r4;
    r1 += 0x18CU;
loc_080351AE:
    r0 = sp;
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x080351B0
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080351B6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080351C2(r0, r1, r2, r3);
    r1 = 0x0804CD3CU; // [0x08035214]
    return r0;
}

// ROM Address: 0x080351C0..0x080351EE (46 bytes, Thumb)
u32 sub_080351C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0) = (u32)r1;
    r5 = r0;
    r1 = 0x4U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080351C8
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080351D0
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08035218]
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080351EA;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080351E6: BL __call_via_r3
loc_080351EA:
    return r0;
}

// ROM Address: 0x080351EE..0x080351FC (14 bytes, Thumb)
u32 sub_080351EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r1 + 0x58);
    r0 = *(u32*)(r0 + 0x64);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_080351FC(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_080351FE(r0, r1, r2, r3);
}

// ROM Address: 0x080351FC..0x08035204 (8 bytes, Thumb)
u32 sub_080351FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = 0x1U;
    r0 = r1 - r0;
    return r0; // BX lr
}

// ROM Address: 0x08035204..0x08035208 (4 bytes, Thumb)
u32 sub_08035204(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003250U; // [0x0803521C]
    return r0; // BX lr
}

// ROM Address: 0x08035208..0x0803522C (36 bytes, Thumb)
u32 sub_08035208(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[172] = r4; // [sp + 0x2B0]
    r5 = (r6 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r4 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r4 = (r0 >> 32);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r2 += 0x50U;
    r0 = (r0 << 12);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
}

// ROM Address: 0x0803522C..0x0803525C (48 bytes, Thumb)
u32 sub_0803522C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u16*)(r1 + 0x12);
    r4 = 0x0U;
    *(u8*)(r1 + 0x11) = (u8)r4;
    cmp_lhs = (s32)r2; cmp_rhs = 128;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08035260(r0, r1, r2, r3);
    r0 = r2;
    r0 -= 0x80U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r3 = (r0 << 24);
    r5 = 0x087B6EECU; // [0x080355C4]
    r3 = (r3 >> 22);
    r3 = *(u32*)(r5 + r3);
    r5 = 0xFFU;
    r3 = (u32)(-(s32)r3);
    r3 = ((u32)((s32)r3 >> 13));
    r5 += 0x77U;
    *(u16*)(r5 + r1) = (u16)r3;
    cmp_lhs = (s32)r0; cmp_rhs = 64;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0803525C(r0, r1, r2, r3);
    r0 = 0x1U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return sub_08035260(r0, r1, r2, r3);
}

// ROM Address: 0x0803525C..0x0803528C (48 bytes, Thumb)
u32 sub_0803525C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    r2 += 0x8U;
    r0 = (r2 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 -= 0x100U;
    if (cmp_lhs != cmp_rhs) goto loc_08035270;
    *(u16*)(r1 + 0x12) = (u16)r4;
loc_08035270:
    return r0; // BX lr
    r0 = 0x03001C34U; // [0x080355C8]
    r4 = r1;
    r1 = *(u32*)(r0);
    r6 = 0xFFU;
    r6 += 0x81U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803528C(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803528C..0x080353D0 (324 bytes, Thumb)
u32 sub_0803528C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r4 + 0x12);
    r5 = stack[17]; // [sp + 0x44]
    r5 += 0x4U;
    r7 = r5 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08035320;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803529A: BL 0x0800FDFA
    r1 = 0xC; // sp + 0xC
    r0 = 0x1C; // sp + 0x1C
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x080352A2
    r1 = r4;
    r0 = 0x24; // sp + 0x24
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080352AA: BL 0x0800FDFA
    r1 = 0x24; // sp + 0x24
    r0 = 0x34; // sp + 0x34
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x080352B2
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[13]; // [sp + 0x34]
    r2 = stack[14]; // [sp + 0x38]
    r0 = r0 - r1;
    r1 = stack[8]; // [sp + 0x20]
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 - r2;
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[2] = r1; // [sp + 0x8]
    stack[16] = r1; // [sp + 0x40]
    stack[15] = r0; // [sp + 0x3C]
    if (cmp_lhs >= cmp_rhs) goto loc_080352D2;
    r0 = (u32)(-(s32)r2);
loc_080352D2:
    r1 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080352DC;
    r0 = (u32)(-(s32)r0);
loc_080352DC:
    stack[14] = r0; // [sp + 0x38]
    r0 = r1;
    stack[13] = r1; // [sp + 0x34]
    r1 = stack[14]; // [sp + 0x38]
    r2 = 0x0U;
    *(u32*)(r5) = (u32)r2;
    *(u32*)(r7) = (u32)r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    r3 = 0xFFFFFE80U; // [0x080355CC]
    if (cmp_lhs <= cmp_rhs) goto loc_0803532A;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_08035312;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080352FE: BL __call_via_r3
    r1 = stack[15]; // [sp + 0x3C]
    r0 = 0x3U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803530C;
    r0 = 0x2U;
loc_0803530C:
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = 0x1U;
    return sub_08035288(r0, r1, r2, r3);
loc_08035312:
    r1 = 0x40; // sp + 0x40
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r1 += 0x8U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08035322;
    *(u8*)(r4 + 0x10) = (u8)r2;
    *(u32*)(r1) = (u32)r6;
loc_08035320:
    goto loc_08035360;
loc_08035322:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    *(u32*)(r1) = (u32)r3;
    goto loc_08035360;
loc_0803532A:
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_0803534C;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035338: BL __call_via_r3
    r1 = stack[16]; // [sp + 0x40]
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08035346;
    r0 = 0x0U;
loc_08035346:
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = 0x1U;
    return sub_08035288(r0, r1, r2, r3);
loc_0803534C:
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803535A;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    *(u32*)(r5) = (u32)r6;
    goto loc_08035360;
loc_0803535A:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    *(u32*)(r5) = (u32)r3;
loc_08035360:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080353CC;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035370: BL __call_via_r3
    r6 = r4;
    r6 += 0x1A0U;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r5);
    r5 = r6 + 4;
    r0 = r0 + r1;
    r1 = *(u32*)(r6 + 0x4);
    r2 = *(u32*)(r7);
    stack[11] = r0; // [sp + 0x2C]
    r1 = r1 + r2;
    stack[12] = r1; // [sp + 0x30]
    stack[14] = r1; // [sp + 0x38]
    stack[16] = r1; // [sp + 0x40]
    stack[13] = r0; // [sp + 0x34]
    stack[15] = r0; // [sp + 0x3C]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x3C; // sp + 0x3C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803539E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080353BE;
    r0 = stack[15]; // [sp + 0x3C]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[16]; // [sp + 0x40]
    *(u32*)(r5) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080353B8: BL __call_via_r3
    goto loc_080353CC;
loc_080353BE:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080353C8: BL __call_via_r3
loc_080353CC:
    r0 = 0x0U;
    return sub_08035288(r0, r1, r2, r3);
}

// ROM Address: 0x080353D0..0x080353FC (44 bytes, Thumb)
u32 sub_080353D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080353D4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080353E0;
    r1 = 0x0804B210U /* &VTable_0804B210 */; // [0x080355D0]
    *(u32*)(r0) = (u32)r1;
loc_080353E0:
    return r0;
    r0 = 0xFFU;
    r0 += 0x81U;
    stack[16] = r0; // [sp + 0x40]
    r0 = 0x03001C34U; // [0x080355C8]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080353FC(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080353FC..0x080355E6 (490 bytes, Thumb)
u32 sub_080353FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r4 + 0x12);
    r6 = stack[17]; // [sp + 0x44]
    r6 += 0x4U;
    r7 = r6 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080354CE;
    r5 = 0x8; // sp + 0x8
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803540C: BL 0x0800FDFA
    r1 = r5;
    r0 = 0x18; // sp + 0x18
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x08035414
    r1 = r4;
    r5 = 0x20; // sp + 0x20
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803541E: BL 0x0800FDFA
    r1 = r5;
    r0 = 0x30; // sp + 0x30
    r0 = sub_0804F900(r0, r1, r2, r3); // 0x08035426
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[12]; // [sp + 0x30]
    r2 = stack[13]; // [sp + 0x34]
    r0 = r0 - r1;
    r1 = stack[7]; // [sp + 0x1C]
    stack[0] = r0; // [sp + 0x0]
    r1 = r1 - r2;
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[1] = r1; // [sp + 0x4]
    stack[15] = r1; // [sp + 0x3C]
    stack[14] = r0; // [sp + 0x38]
    if (cmp_lhs >= cmp_rhs) goto loc_08035446;
    r0 = (u32)(-(s32)r2);
loc_08035446:
    r1 = r0;
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08035450;
    r0 = (u32)(-(s32)r0);
loc_08035450:
    stack[13] = r0; // [sp + 0x34]
    r0 = r1;
    stack[12] = r1; // [sp + 0x30]
    r1 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803546A;
    r2 = stack[14]; // [sp + 0x38]
    r1 = 0x2U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08035466;
    r1 = 0x3U;
loc_08035466:
    *(u8*)(r4 + 0x10) = (u8)r1;
    goto loc_08035478;
loc_0803546A:
    r0 = r1;
    r2 = stack[15]; // [sp + 0x3C]
    r1 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08035476;
    r1 = 0x0U;
loc_08035476:
    *(u8*)(r4 + 0x10) = (u8)r1;
loc_08035478:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803547E;
    r0 = 0x1U;
loc_0803547E:
    r1 = stack[14]; // [sp + 0x38]
    r2 = stack[15]; // [sp + 0x3C]
    r1 = (r1 << 8);
    *(u32*)(r6) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r7) = (u32)r2;
    r1 = stack[16]; // [sp + 0x40]
    r2 = *(u32*)(r6);
    r3 = *(u32*)(r7);
    r2 *= r1;
    r3 *= r1;
    r1 = ((u32)((s32)r3 >> 8));
    r2 = ((u32)((s32)r2 >> 8));
    stack[9] = r1; // [sp + 0x24]
    r1 = r2;
    stack[8] = r2; // [sp + 0x20]
    r2 = stack[9]; // [sp + 0x24]
    stack[10] = r1; // [sp + 0x28]
    r1 = (r1 << 8);
    r5 = (r0 << 8);
    r0 = r5;
    stack[11] = r2; // [sp + 0x2C]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080354AA: BL 0x08046E58
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[11]; // [sp + 0x2C]
    r1 = (r0 << 8);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080354B6: BL 0x08046E58
    r1 = stack[7]; // [sp + 0x1C]
    stack[9] = r0; // [sp + 0x24]
    r0 = r1;
    stack[8] = r1; // [sp + 0x20]
    r1 = stack[9]; // [sp + 0x24]
    stack[12] = r0; // [sp + 0x30]
    stack[13] = r1; // [sp + 0x34]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r7) = (u32)r0;
loc_080354CE:
    r5 = r4;
    r5 += 0x1A0U;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r6);
    r6 = r5 + 4;
    r0 = r0 - r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = *(u32*)(r7);
    stack[10] = r0; // [sp + 0x28]
    r1 = r1 - r2;
    stack[11] = r1; // [sp + 0x2C]
    stack[13] = r1; // [sp + 0x34]
    stack[15] = r1; // [sp + 0x3C]
    stack[12] = r0; // [sp + 0x30]
    stack[14] = r0; // [sp + 0x38]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080354F8: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x38; // sp + 0x38
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035506: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08035518;
    r0 = stack[14]; // [sp + 0x38]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[15]; // [sp + 0x3C]
    *(u32*)(r6) = (u32)r0;
    goto loc_0803559E;
loc_08035518:
    r1 = stack[17]; // [sp + 0x44]
    r3 = 0x30; // sp + 0x30
    r0 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803552C;
    r0 = stack[16]; // [sp + 0x40]
    r0 = (u32)(-(s32)r0);
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x2C; // sp + 0x2C
    goto loc_0803552E;
loc_0803552C:
    r0 = 0x40; // sp + 0x40
loc_0803552E:
    r1 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r3 = 0x30; // sp + 0x30
    r0 = r1 - r0;
    stack[12] = r0; // [sp + 0x30]
    r0 = r4;
    r0 += 0x1A4U;
    r7 = r0;
    r0 = *(u32*)(r0);
    stack[13] = r0; // [sp + 0x34]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803554E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08035560;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r6) = (u32)r0;
    goto loc_0803559E;
loc_08035560:
    r0 = *(u32*)(r5);
    r1 = stack[17]; // [sp + 0x44]
    stack[12] = r0; // [sp + 0x30]
    r1 = *(u32*)(r1 + 0x8);
    r0 = r7;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r3 = 0x30; // sp + 0x30
    if (cmp_lhs >= cmp_rhs) goto loc_0803557A;
    r1 = stack[16]; // [sp + 0x40]
    r1 = (u32)(-(s32)r1);
    stack[11] = r1; // [sp + 0x2C]
    r1 = 0x2C; // sp + 0x2C
    goto loc_0803557C;
loc_0803557A:
    r1 = 0x40; // sp + 0x40
loc_0803557C:
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r0 = r0 - r1;
    stack[13] = r0; // [sp + 0x34]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803558E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080355B0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r6) = (u32)r0;
loc_0803559E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080355A8: BL __call_via_r3
    r0 = 0x0U;
    return sub_080353F8(r0, r1, r2, r3);
loc_080355B0:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080355BA: BL __call_via_r3
    r0 = 0x0U;
    return sub_080353F8(r0, r1, r2, r3);
    r0 = r0;
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080355D8: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080355E4;
    r1 = 0x0804B730U /* &VTable_0804B730 */; // [0x080355E8]
    *(u32*)(r0) = (u32)r1;
loc_080355E4:
    return r0;
}

// ROM Address: 0x080355EC..0x0803560A (30 bytes, Thumb)
u32 sub_080355EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803560A(r0, r1, r2, r3);
    r0 = 0x44U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080355FC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0803560A(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0803560A..0x080356B2 (168 bytes, Thumb)
u32 sub_0803560A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08035880]
    r7 = 0x087594E8U; // [0x08035884]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x80U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r7);
    r1 = 0x80U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08035618
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08035630;
    r1 = 0x80U;
    r0 = *(u32*)(r7);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08035624: BL 0x08011732
    r1 = 0x80U;
    r0 = *(u32*)(r7);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0803562C
loc_08035630:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804C098U /* &VTable_0804C098 */; // [0x08035888]
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
    r0 += 0x1CU;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r4 + 0x4) = (u32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08035654;
    r1 = *(u32*)(r5 + 0x4);
    r1 += 0x2CU;
    *(u32*)(r4 + 0x4) = (u32)r1;
loc_08035654:
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r4 + 0x40) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r1;
    *(u8*)(r4 + 0x10) = (u8)r1;
    r1 = 0x8U;
    *(u32*)(r4 + 0x34) = (u32)r1;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r4 + 0x18) = (u32)r1;
    *(u32*)(r4 + 0x38) = (u32)r6;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = *(u32*)(r4 + 0x38);
    r2 = 0x08759620U; // [0x0803588C]
    r1 = (r0 << 1);
    r1 = r1 + r0;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = 0x087594E8U; // [0x08035884]
    r0 = (r0 << 3);
    r2 += 0x8U;
    r0 = r0 + r2;
    *(u32*)(r4 + 0x3C) = (u32)r1;
    r2 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r5 = 0x06010000U; // [0x08035890]
    *(u32*)(r4 + 0x30) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r2;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08035698: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x3C);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 += 0x40U;
    r2 = 0x40U;
    r1 = *(u32*)(r1 + 0x14);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080356AA: BL 0x08049138
    r0 = r4;
    return sub_08035606(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy20_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x080356B2..0x08035704 (82 bytes, Thumb)
u32 Object_Destroy20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08035880]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08035894]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080356CC;
    r0 = 0x087594E8U; // [0x08035884]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080356C8
loc_080356CC:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08035898]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080356DA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080356D6: BL 0x0803D63C
loc_080356DA:
    return r0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x10);
    r6 = 0x087594E8U; // [0x08035884]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08035704(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08035700;
    r0 = *(u32*)(r4 + 0x34);
    r0 -= 0x4U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08035700;
    r1 = r4;
    r0 = *(u32*)(r6);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080356FC
loc_08035700:
    return r0;
}

// ROM Address: 0x08035704..0x08035796 (146 bytes, Thumb)
u32 sub_08035704(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08035700(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r4 + 0x2C);
    r2 = *(u32*)(r4 + 0x30);
    r1 *= r0;
    r2 *= r0;
    r0 = r1;
    stack[12] = r1; // [sp + 0x30]
    r1 = r2;
    stack[13] = r2; // [sp + 0x34]
    r2 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    r0 = r2 + r0;
    r2 = *(u32*)(r4 + 0x20);
    stack[12] = r0; // [sp + 0x30]
    r1 = r2 + r1;
    stack[13] = r1; // [sp + 0x34]
    r2 = stack[13]; // [sp + 0x34]
    r1 = r0;
    r0 = *(u32*)(r4 + 0x40);
    r5 = 0x4; // sp + 0x4
    stack[9] = r0; // [sp + 0x24]
    r0 = *(u32*)(r4 + 0x38);
    *(u8*)(r3 + 0x18) = (u8)r0;
    r0 = 0x086B8088U; // [0x0803589C]
    r3 = 0x0U;
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x400U; // (1 << 10)
    stack[7] = r0; // [sp + 0x1C]
    r0 = r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = r5 + 4;
    r5 = r2;
    r3 = r1;
    r3 -= 0x8U;
    r1 += 0x8U;
    r5 -= 0x8U;
    r2 += 0x8U;
    stack[13] = r4; // [sp + 0x34]
    stack[5] = r2; // [sp + 0x14]
    stack[3] = r5; // [sp + 0xC]
    stack[4] = r1; // [sp + 0x10]
    stack[2] = r3; // [sp + 0x8]
    r1 = *(u32*)(r6 + 0x4);
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08035766
    r5 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08035792;
    r2 = 0x4; // sp + 0x4
    r1 = 0x0U;
    r0 = *(u32*)(r6);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08035776
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08035782;
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_08035700(r0, r1, r2, r3);
loc_08035782:
    r0 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r0; cmp_rhs = 52;
    if (cmp_lhs >= cmp_rhs) goto loc_0803578E;
    r0 += 0x4U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    return sub_08035700(r0, r1, r2, r3);
loc_0803578E:
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_08035700(r0, r1, r2, r3);
loc_08035792:
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_08035700(r0, r1, r2, r3);
}

// ROM Address: 0x08035796..0x080358A2 (268 bytes, Thumb)
u32 sub_08035796(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080357A0: BL __call_via_r3
    return r0;
    r1 = 0x087594E8U; // [0x08035884]
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
    r4 = *(u32*)(r0 + 0x3C);
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
    r7 = 0x087594E8U; // [0x08035884]
    r5 = *(u8*)(r1 + 0x2);
    r6 = *(u8*)(r1 + 0x3);
    r7 += 0x28U;
    r7 = *(u32*)(r7 + 0x8);
    r5 = r4 + r5;
    r6 = r3 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_0803587C;
    r7 = 0x087594E8U; // [0x08035884]
    r7 += 0x28U;
    r7 = *(u32*)(r7);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_0803587C;
    r5 = 0x087594E8U; // [0x08035884]
    r5 += 0x28U;
    r7 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_0803587C;
    r5 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_0803587C;
    r5 = *(u32*)(r2);
    r1 = *(u32*)(r1 + 0x4);
    r6 = 0xFE00FFFFU; // [0x080358A0]
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
loc_0803587C:
    return r0; // BX lr
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    stack[232] = r4; // [sp + 0x3A0]
    r5 = (r6 >> 1);
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r4 = (r0 >> 32);
    stack[32] = r6; // [sp + 0x80]
    r5 = (r6 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    r0 = r0;
    return sub_08035144(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u16*)(r1 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    return r0;
}

// ROM Address: 0x080358A6..0x0803593C (150 bytes, Thumb)
u32 sub_080358A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r1);
    stack[6] = r0; // [sp + 0x18]
    r6 = r1;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r4 + 0x34);
    r2 = *(u32*)(r4 + 0x30);
    r1 *= r0;
    r2 *= r0;
    stack[3] = r2; // [sp + 0xC]
    stack[5] = r2; // [sp + 0x14]
    r2 = 0x10; // sp + 0x10
    r0 = r1;
    stack[0] = r2; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r7 = 0x18; // sp + 0x18
    r2 = r7;
    r1 = 0x1U;
    stack[4] = r0; // [sp + 0x10]
    r3 = 0x2U;
    r0 = r4;
    r0 = sub_080357D2(r0, r1, r2, r3); // 0x080358D2
    r0 = *(u32*)(r4 + 0x34);
    r5 = 0x0U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803590A;
loc_080358E0:
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r4 + 0x30);
    r0 *= r5;
    r1 *= r5;
    stack[0] = r0; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x0U;
    r2 = r7;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x0U;
    r0 = r4;
    r0 = sub_080357D2(r0, r1, r2, r3); // 0x080358FC
    r0 = *(u32*)(r4 + 0x34);
    r5 += 0x8U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_080358E0;
loc_0803590A:
    r0 = stack[6]; // [sp + 0x18]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803593C(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_080359AA(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs == cmp_rhs) return sub_080359AE(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 38;
    if (cmp_lhs != cmp_rhs) return sub_080359BE(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_080359A6(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x087594E8U; // [0x080359D0]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08035932
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803593C..0x080359C2 (134 bytes, Thumb)
u32 sub_0803593C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2 + 0x30);
    r5 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08035948;
    r0 = 0x0U;
    return sub_08035938(r0, r1, r2, r3);
loc_08035948:
    r1 = *(u8*)(r5 + 0x14);
    r2 = *(u32*)(r0 + 0x38);
    r3 = 0x1U;
    r2 ^= r3;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08035958;
    r0 = 0x0U;
    return sub_08035938(r0, r1, r2, r3);
loc_08035958:
    r1 = *(u32*)(r0 + 0x34);
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
    if (cmp_lhs >= cmp_rhs) goto loc_080359A2;
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_080359A2;
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_080359A2;
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_080359A2;
    r0 = 0x1U;
    return sub_08035938(r0, r1, r2, r3);
loc_080359A2:
    r0 = 0x0U;
    return sub_08035938(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08035938(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08035938(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080359B6: BL __call_via_r3
    r0 = 0x0U;
    return sub_08035938(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08035938(r0, r1, r2, r3);
}

// ROM Address: 0x080359C2..0x080359CA (8 bytes, Thumb)
u32 sub_080359C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_080359CA(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080359CA..0x080359CE (4 bytes, Thumb)
u32 sub_080359CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080359CE..0x080359D4 (6 bytes, Thumb)
u32 sub_080359CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    stack[232] = r4; // [sp + 0x3A0]
    r5 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x080359D4..0x080359F0 (28 bytes, Thumb)
u32 sub_080359D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080359F0(r0, r1, r2, r3);
    r0 = 0x48U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080359E4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080359F0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080359F0..0x08035A34 (68 bytes, Thumb)
u32 sub_080359F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x800U; // (1 << 11)
    r2 = r7;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x080359F8
    r0 = 0x0804B9B4U /* &VTable_0804B9B4 */; // [0x08035B80]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = (r6 << 1);
    r0 = r0 + r6;
    r1 = 0x0875A6A8U; // [0x08035B84]
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r2 = 0x08759688U; // [0x08035B88]
    r0 = (r6 << 3);
    r1 = *(u32*)(r2 + r0);
    r0 = r0 + r2;
    *(u32*)(r4 + 0x40) = (u32)r1;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08035A2C
    r0 = r4;
    return sub_080359EE(r0, r1, r2, r3);
}

// ROM Address: 0x08035A34..0x08035AD4 (160 bytes, Thumb)
u32 sub_08035A34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x20);
    r1 = ((u32)((s32)r1 >> 8));
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0 + 0x24);
    r4 = 0x08759688U; // [0x08035B88]
    r1 = ((u32)((s32)r1 >> 8));
    stack[5] = r1; // [sp + 0x14]
    r1 = r0;
    r4 -= 0x8U;
    r0 = *(u32*)(r4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08035A4C
    r0 = *(u32*)(r4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08035A52
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08035A7C;
    r2 = 0x38U;
    r0 = (r1 << 3);
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x4U;
    r0 = 0x0U;
    r1 = 0x10; // sp + 0x10
    r2 = 0x08712FDCU; // [0x08035B8C]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08035A70
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08035A78: BL 0x0801191A
loc_08035A7C:
    return r0;
    r4 = r0;
    r0 += 0x40U;
    r7 = r1;
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)r0; r0 += 4;
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r1 = *(u32*)(r4 + 0x24);
    r0 = *(u32*)(r0);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08035A9C
    r6 = 0x08759688U; // [0x08035B88]
    r6 -= 0x8U;
    r0 = *(u32*)(r6 + 0x4);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08035AC8;
    r1 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08035AC8;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08035AC8;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_08035AD4(r0, r1, r2, r3);
loc_08035AC8:
    r1 = r4;
    r0 = *(u32*)(r6);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08035ACC
    return r0;
}

// ROM Address: 0x08035AD4..0x08035B34 (96 bytes, Thumb)
u32 sub_08035AD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 += 0x28U;
    r1 = *(u32*)(r6 + 0x4);
    r5 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08035AE0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08035AF0;
    r0 = r4;
    r0 = sub_08035A34(r0, r1, r2, r3); // 0x08035AEA: BL 0x08035A34
    return sub_08035AD0(r0, r1, r2, r3);
loc_08035AF0:
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08035AD0(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08035AD0(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r7 = sp;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8090U; // [0x08035B90]
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
    r2 = r7;
    r1 = 0x0U;
    r0 = *(u32*)(r6);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08035B24
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08035AD0(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_08035A34(r0, r1, r2, r3); // 0x08035B2E: BL 0x08035A34
    return sub_08035AD0(r0, r1, r2, r3);
}

// ROM Address: 0x08035B34..0x08035B44 (16 bytes, Thumb)
u32 sub_08035B34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08035B7A(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08035B44(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08035B44..0x08035B80 (60 bytes, Thumb)
u32 sub_08035B44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2 + 0x1C);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08035B76;
    r1 = r2 + 4;
    r2 = *(u32*)(r2 + 0x4);
    r3 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08035B76;
    r2 = *(u32*)(r0 + 0x28);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08035B76;
    r2 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08035B76;
    r2 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08035B76;
    r0 = sub_08035A34(r0, r1, r2, r3); // 0x08035B6E: BL 0x08035A34
    r0 = 0x1U;
    return sub_08035B42(r0, r1, r2, r3);
loc_08035B76:
    r0 = 0x0U;
    return sub_08035B42(r0, r1, r2, r3);
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x08035B7A
    return sub_08035B42(r0, r1, r2, r3);
}

// ROM Address: 0x08035BBE..0x08035BD4 (22 bytes, Thumb)
u32 sub_08035BBE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x214U; // (133 << 2)
    r1 = r5 + r1;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08012588(r0, r1, r2, r3); // 0x08035BC6: BL 0x08012588
    return r0;
    r6 = 0x08035F30U;
    r5 = (r6 >> 1);
    r0 = 0x03003258U; // [0x08035BD4]
    return r0; // BX lr
}

// ROM Address: 0x08035BD4..0x08035BD6 (2 bytes, Thumb)
u32 sub_08035BD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x58U;
    return r0;
}

// ROM Address: 0x08035BD6..0x08035BE4 (14 bytes, Thumb)
u32 sub_08035BD6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
}

// ROM Address: 0x08035BE4..0x08035D7C (408 bytes, Thumb)
u32 sub_08035BE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r1 + 0x12);
    r5 = 0x0U;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    *(u16*)(r1 + 0x12) = (u16)r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08035BFE;
    r5 = (r0 >> 2);
    return sub_08035D92(r0, r1, r2, r3);
loc_08035BFE:
    r1 = r4;
    r1 += 0x160U;
    cmp_lhs = (s32)r0; cmp_rhs = 56;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08035C18;
    r0 += 0x8U;
    r0 = (r0 << 28);
    r5 = (r0 >> 30);
    r0 = *(u16*)(r1 + 0x16);
    r5 += 0x2U;
    r0 -= 0x8U;
    *(u16*)(r1 + 0x16) = (u16)r0;
    return sub_08035D92(r0, r1, r2, r3);
loc_08035C18:
    cmp_lhs = (s32)r0; cmp_rhs = 200;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08035CB6;
    r1 = r4;
    r0 = 0x14; // sp + 0x14
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08035C20: BL 0x0800FDFA
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    r1 = r0 + r1;
    r0 = stack[6]; // [sp + 0x18]
    stack[3] = r1; // [sp + 0xC]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = r0 + r2;
    stack[4] = r0; // [sp + 0x10]
    r0 = ((u32)((s32)r0 >> 1));
    stack[4] = r0; // [sp + 0x10]
    stack[10] = r0; // [sp + 0x28]
    r0 = 0x03001C34U; // [0x08035DD0]
    stack[3] = r1; // [sp + 0xC]
    stack[9] = r1; // [sp + 0x24]
    r1 = *(u32*)(r0);
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08035C46: BL 0x0800FDFA
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r2 = stack[6]; // [sp + 0x18]
    r1 = r0 + r1;
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    r1 = ((u32)((s32)r1 >> 1));
    stack[1] = r1; // [sp + 0x4]
    r0 = r4;
    r0 += 0xFFU;
    r2 = stack[9]; // [sp + 0x24]
    r0 += 0xA1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    stack[7] = r1; // [sp + 0x1C]
    if (cmp_lhs <= cmp_rhs) goto loc_08035C7C;
    r1 = *(u32*)(r0);
    r1 += 0x100U;
    *(u32*)(r0) = (u32)r1;
    goto loc_08035C8C;
loc_08035C7C:
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08035C8C;
    r1 = *(u32*)(r0);
    r1 -= 0x100U;
    *(u32*)(r0) = (u32)r1;
loc_08035C8C:
    r0 = r4;
    r0 += 0xFFU;
    r1 = stack[8]; // [sp + 0x20]
    r2 = stack[10]; // [sp + 0x28]
    r0 += 0xA5U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08035CA4;
    r1 = *(u32*)(r0);
    r1 += 0x100U;
    *(u32*)(r0) = (u32)r1;
    return sub_08035D92(r0, r1, r2, r3);
loc_08035CA4:
    r1 = stack[8]; // [sp + 0x20]
    r2 = stack[10]; // [sp + 0x28]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_08035D92(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r1 -= 0x100U;
    *(u32*)(r0) = (u32)r1;
    return sub_08035D92(r0, r1, r2, r3);
loc_08035CB6:
    cmp_lhs = (s32)r0; cmp_rhs = 248;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08035CC8;
    r0 = (r0 << 28);
    r5 = (r0 >> 30);
    r0 = *(u16*)(r1 + 0x16);
    r5 += 0x2U;
    r0 += 0x8U;
    *(u16*)(r1 + 0x16) = (u16)r0;
    return sub_08035D92(r0, r1, r2, r3);
loc_08035CC8:
    r1 = r4;
    r0 = 0x14; // sp + 0x14
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08035CCC: BL 0x0800FDFA
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    r1 = r0 + r1;
    r0 = stack[6]; // [sp + 0x18]
    stack[3] = r1; // [sp + 0xC]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = r0 + r2;
    stack[4] = r0; // [sp + 0x10]
    r0 = ((u32)((s32)r0 >> 1));
    stack[4] = r0; // [sp + 0x10]
    stack[10] = r0; // [sp + 0x28]
    r0 = 0x0875A6E8U; // [0x08035DD4]
    stack[3] = r1; // [sp + 0xC]
    stack[9] = r1; // [sp + 0x24]
    r0 = *(u32*)(r0);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08035CF0
    r7 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08035D34;
    r6 = (r7 << 2);
    r0 = r6;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08035D00
    r2 = stack[9]; // [sp + 0x24]
    r1 = stack[10]; // [sp + 0x28]
    r2 += 0xFU;
    r0 = r0 + r6;
    r1 += 0x5U;
    stack[5] = r2; // [sp + 0x14]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x37U;
    stack[8] = r1; // [sp + 0x20]
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[6] = r1; // [sp + 0x18]
    r3 = 0x4U;
    r0 = 0x0U;
    r1 = 0x1C; // sp + 0x1C
    r2 = 0x086FD9D0U; // [0x08035DD8]
    stack[1] = r7; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08035D26
    r1 = r0;
    r0 = 0x0875A6E8U; // [0x08035DD4]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08035D30: BL 0x0801191A
loc_08035D34:
    r6 = 0x0875A6E8U; // [0x08035DD4]
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08035D38
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08035D7A;
    r0 = 0x1000U; // (1 << 12)
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08035D44
    r2 = stack[9]; // [sp + 0x24]
    r1 = 0x1U;
    r2 -= 0xCU;
    r1 = (r1 << 12);
    r0 = r0 + r1;
    r1 = stack[10]; // [sp + 0x28]
    stack[5] = r2; // [sp + 0x14]
    r1 += 0xAU;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x37U;
    stack[8] = r1; // [sp + 0x20]
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[6] = r1; // [sp + 0x18]
    r3 = 0x4U;
    r0 = 0x0U;
    r1 = 0x1C; // sp + 0x1C
    r2 = 0x086FD9D0U; // [0x08035DD8]
    stack[1] = r7; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08035D6E
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x08035D76: BL 0x0801191A
loc_08035D7A:
    r6 = 0x0875A6E8U; // [0x08035DD4]
    return r0;
}

// ROM Address: 0x08035D7C..0x08035D94 (24 bytes, Thumb)
u32 sub_08035D7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08035D7E
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08035D92;
    r6 = 0x1000U; // (1 << 12)
    r0 = r6;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08035D8C
    return sub_08035D94(r0, r1, r2, r3);
loc_08035D92:
    return sub_08035DC4(r0, r1, r2, r3);
}

// ROM Address: 0x08035D94..0x08035DCA (54 bytes, Thumb)
u32 sub_08035D94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[9]; // [sp + 0x24]
    r1 = stack[10]; // [sp + 0x28]
    r2 -= 0x3U;
    r0 = r0 + r6;
    r1 -= 0xFU;
    stack[5] = r2; // [sp + 0x14]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x37U;
    stack[8] = r1; // [sp + 0x20]
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[6] = r1; // [sp + 0x18]
    r3 = 0x4U;
    r0 = 0x0U;
    r1 = 0x1C; // sp + 0x1C
    r2 = 0x086FD9D0U; // [0x08035DD8]
    stack[1] = r7; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08035DB6
    r6 = 0x0875A6E8U; // [0x08035DD4]
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x08035DC0: BL 0x0801191A
    *(u8*)(r4 + 0x11) = (u8)r5;
    return r0;
}

// ROM Address: 0x08035DCA..0x08035DCE (4 bytes, Thumb)
u32 sub_08035DCA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003260U; // [0x08035DDC]
    return r0; // BX lr
}

// ROM Address: 0x08035DCE..0x08035E30 (98 bytes, Thumb)
u32 sub_08035DCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x08036178U;
    r5 = (r6 >> 1);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08035D7C(r0, r1, r2, r3);
    r7 = (r5 >> 1);
    r2 += 0x60U;
    r0 = (r0 << 12);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r0 = r1;
    r1 = *(u16*)(r1 + 0x12);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r0 + 0x12) = (u16)r1;
    r2 = *(u32*)(r0 + 0x50);
    r1 = (r1 >> 3);
    r2 = *(u32*)(r2);
    r3 = r2 - 1;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08035E0C;
    r2 -= 0x2U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08035E22;
loc_08035E0C:
    r2 = *(u8*)(r0 + 0x11);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08035E22;
    r2 = r0;
    r2 += 0x1A4U;
    r4 = *(u32*)(r2);
    r3 = 0x800U; // (1 << 11)
    r3 = r4 + r3;
    *(u32*)(r2) = (u32)r3;
loc_08035E22:
    r2 = *(u32*)(r0 + 0x50);
    r2 = *(u32*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_08035E30(r0, r1, r2, r3);
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x08035E2A: BL 0x0800EE78
    return r0;
}

// ROM Address: 0x08035E30..0x08035E34 (4 bytes, Thumb)
u32 sub_08035E30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r0 + 0x11) = (u8)r1;
    return r0;
}

// ROM Address: 0x08035E34..0x08035E38 (4 bytes, Thumb)
u32 sub_08035E34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003268U; // [0x08035E38]
    return r0; // BX lr
}

// ROM Address: 0x08035E38..0x08035E7E (70 bytes, Thumb)
u32 sub_08035E38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x68U;
    r0 = (r0 << 12);
    r0 = *(u32*)(r1 + 0x58);
    r0 += 0x4CU;
    r0 = *(u32*)(r0 + 0x54);
    r2 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08035E54;
    r0 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    r0 = 0x6U;
    *(u8*)(r1 + 0x11) = (u8)r0;
loc_08035E54:
    return r0; // BX lr
    r0 = r1;
    r1 = *(u16*)(r1 + 0x12);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r0 + 0x12) = (u16)r1;
    r2 = *(u32*)(r0 + 0x50);
    r1 = (r1 >> 2);
    r2 = *(u32*)(r2);
    r1 += 0x6U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_08035E7E(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035E78: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08035E7E..0x08035E82 (4 bytes, Thumb)
u32 sub_08035E7E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r0 + 0x11) = (u8)r1;
    return sub_08035E7C(r0, r1, r2, r3);
}

// ROM Address: 0x08035E8C..0x08035EAE (34 bytes, Thumb)
u32 sub_08035E8C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x4; // sp + 0x4
    r4 = r1;
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08035E96: BL 0x0800FDFA
    r0 = 0x0875A710U; // [0x08035F00]
    r2 = r5;
    r1 = 0x21U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08035EA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08035EAE(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08035EAE..0x08035EE2 (52 bytes, Thumb)
u32 sub_08035EAE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035EB8: BL __call_via_r3
    r0 = r4;
    r1 = stack[1]; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    r0 += 0x1A0U;
    r1 = (r1 << 8);
    r2 += 0x10U;
    r2 = (r2 << 8);
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)(r0) = (u32)r2;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035EDA: BL __call_via_r3
    r0 = 0x1U;
    return sub_08035EAA(r0, r1, r2, r3);
}

// ROM Address: 0x08035EE2..0x08035F00 (30 bytes, Thumb)
u32 sub_08035EE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035EE8: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08035EF0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08035EFE;
    r1 = 0x0804B650U; // [0x08035F04]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08035EFE:
    return r0;
}

// ROM Address: 0x08035F08..0x08035F80 (120 bytes, Thumb)
u32 sub_08035F08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x0875A714U; // [0x08035F84]
    r0 = *(u32*)(r4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08035F10
    r5 = 0x1000U; // (1 << 12)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08035F34;
    r0 = 0xC8U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x88U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08036A44(r0, r1, r2, r3); // 0x08035F28
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08035F30: BL 0x0801191A
loc_08035F34:
    r0 = *(u32*)(r4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08035F36
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08035F58;
    r0 = 0x70U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xFFU;
    r0 += 0x11U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08036A44(r0, r1, r2, r3); // 0x08035F4C
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08035F54: BL 0x0801191A
loc_08035F58:
    r0 = *(u32*)(r4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08035F5A
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08035F7C;
    r0 = 0xFFU;
    r0 += 0x29U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xF0U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08036A44(r0, r1, r2, r3); // 0x08035F70
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08035F78: BL 0x0801191A
loc_08035F7C:
    return r0;
}

// ROM Address: 0x08035F80..0x08035F84 (4 bytes, Thumb)
u32 sub_08035F80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003274U; // [0x08035F88]
    return r0; // BX lr
}

// ROM Address: 0x08035F86..0x08035F9E (24 bytes, Thumb)
u32 sub_08035F86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r6 >> 1);
    r2 += 0x74U;
    r0 = (r0 << 12);
    r0 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r2 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    *(u8*)(r1 + 0x11) = (u8)r0;
    r1 += 0x1C0U;
    *(u32*)(r1 + 0xC) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08035F9E..0x08035FD2 (52 bytes, Thumb)
u32 sub_08035F9E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u16*)(r1 + 0x12);
    r0 = 0x1U;
    r2 = r2 + r0;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08035FB4;
    r0 = (r2 >> 2);
    goto loc_08035FBC;
loc_08035FB4:
    cmp_lhs = (s32)r2; cmp_rhs = 140;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08035FBC;
    r2 -= 0x84U;
    r0 = ((u32)((s32)r2 >> 2));
loc_08035FBC:
    r2 = *(u8*)(r1 + 0x11);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) return sub_08035FDA(r0, r1, r2, r3);
    r2 = r1;
    r2 += 0x1C0U;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08035FD2(r0, r1, r2, r3);
    r3 = 0x1U;
    *(u32*)(r2 + 0xC) = (u32)r3;
    return sub_08035FDA(r0, r1, r2, r3);
}

// ROM Address: 0x08035FD2..0x08035FF2 (32 bytes, Thumb)
u32 sub_08035FD2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08035FDA;
    r3 = 0x0U;
    *(u32*)(r2 + 0xC) = (u32)r3;
loc_08035FDA:
    r2 = *(u32*)(r1 + 0x50);
    r2 = *(u32*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) return sub_08035FF2(r0, r1, r2, r3);
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08035FEC: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08035FF2..0x08035FF6 (4 bytes, Thumb)
u32 sub_08035FF2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return sub_08035FF0(r0, r1, r2, r3);
}

// ROM Address: 0x08035FF6..0x0803605A (100 bytes, Thumb)
u32 sub_08035FF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x08036198]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0803619C]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_08036014;
    r1 = r4;
    r1 += 0x18CU;
loc_08036014:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08036016
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803601E
    r1 = 0x03003278U; // [0x080361A0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08036026
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x080361A4]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036040;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803603C: BL __call_via_r3
loc_08036040:
    return r0;
    r0 = *(u32*)(r1 + 0x14);
    r4 = r1;
    r1 = 0x03003278U; // [0x080361A0]
    r6 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_0803605A(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803605A..0x08036192 (312 bytes, Thumb)
u32 sub_0803605A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 140;
    if (cmp_lhs != cmp_rhs) goto loc_08036132;
    r0 = 0x03001C34U; // [0x08036198]
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036072;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08036076;
loc_08036072:
    r0 = 0x0U;
    return sub_08036056(r0, r1, r2, r3);
loc_08036076:
    r1 = r5;
    r0 = 0x5C; // sp + 0x5C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803607A
    r1 = r4;
    r0 = 0x4C; // sp + 0x4C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08036082
    r0 = stack[19]; // [sp + 0x4C]
    r1 = stack[21]; // [sp + 0x54]
    r2 = stack[22]; // [sp + 0x58]
    r0 = r0 + r1;
    r1 = stack[20]; // [sp + 0x50]
    stack[15] = r0; // [sp + 0x3C]
    r1 = r1 + r2;
    r0 = ((u32)((s32)r0 >> 1));
    r3 = ((u32)((s32)r1 >> 1));
    stack[17] = r0; // [sp + 0x44]
    stack[15] = r0; // [sp + 0x3C]
    stack[16] = r1; // [sp + 0x40]
    r1 = stack[25]; // [sp + 0x64]
    r0 = stack[23]; // [sp + 0x5C]
    stack[16] = r3; // [sp + 0x40]
    r1 = r0 + r1;
    r0 = stack[24]; // [sp + 0x60]
    stack[18] = r3; // [sp + 0x48]
    r2 = stack[26]; // [sp + 0x68]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[17]; // [sp + 0x44]
    r2 = stack[18]; // [sp + 0x48]
    r0 = r0 - r1;
    r1 = stack[3]; // [sp + 0xC]
    stack[0] = r0; // [sp + 0x0]
    r6 = r1 - r2;
    r1 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[1] = r6; // [sp + 0x4]
    if (cmp_lhs >= cmp_rhs) goto loc_080360D6;
    r1 = (u32)(-(s32)r0);
loc_080360D6:
    r2 = r6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080360DE;
    r2 = (u32)(-(s32)r2);
loc_080360DE:
    r7 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08036110;
    stack[6] = r3; // [sp + 0x18]
    r1 = stack[22]; // [sp + 0x58]
    r1 += 0x3U;
    stack[8] = r1; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08036100;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[17]; // [sp + 0x44]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[21]; // [sp + 0x54]
    r0 += 0x3U;
    stack[7] = r0; // [sp + 0x1C]
    goto loc_08036140;
loc_08036100:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[19]; // [sp + 0x4C]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[17]; // [sp + 0x44]
    stack[7] = r0; // [sp + 0x1C]
    goto loc_08036140;
loc_08036110:
    r1 = r4;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08036114: BL 0x0800FDFA
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[2]; // [sp + 0x8]
    stack[7] = r0; // [sp + 0x1C]
    if (cmp_lhs <= cmp_rhs) goto loc_08036134;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[22]; // [sp + 0x58]
    r0 -= 0x6U;
    stack[8] = r0; // [sp + 0x20]
    goto loc_08036140;
loc_08036132:
    goto loc_0803618E;
loc_08036134:
    r6 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r6;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[1]; // [sp + 0x4]
    stack[8] = r0; // [sp + 0x20]
loc_08036140:
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r2 = 0x10; // sp + 0x10
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x086B8098U; // [0x080361A8]
    r3 = 0x0; // sp + 0x0
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x600U; // (3 << 9)
    stack[10] = r0; // [sp + 0x28]
    *(u8*)(r3 + 0x10) = (u8)r7;
    stack[16] = r4; // [sp + 0x40]
    r1 = *(u32*)(r5);
    r0 = r5;
    r3 = *(u32*)(r1 + 0x24);
    r3 = r3 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036164: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803618E;
    r0 = 0x0875A724U; // [0x080361AC]
    r4 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08036172
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x080361B0]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x080361B4]
    r3 = r7;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803618A
loc_0803618E:
    r0 = 0x0U;
    return sub_08036056(r0, r1, r2, r3);
}

// ROM Address: 0x08036192..0x08036198 (6 bytes, Thumb)
u32 sub_08036192(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003278U; // [0x080361A0]
    r0 += 0x4U;
    return r0; // BX lr
}

// ROM Address: 0x08036198..0x0803619A (2 bytes, Thumb)
u32 sub_08036198(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    return r0;
}

// ROM Address: 0x0803619A..0x080361CE (52 bytes, Thumb)
u32 sub_0803619A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r2 += 0x78U;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r7 = 0x08036240U;
    r5 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r7 = r0;
    r0 = 0x03001C34U; // [0x08036374]
    r4 = r1;
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080361CE(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080361CE..0x0803626A (156 bytes, Thumb)
u32 sub_080361CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = 0x64; // sp + 0x64
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x080361D2
    r1 = r4;
    r0 = 0x54; // sp + 0x54
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x080361DA
    r0 = stack[21]; // [sp + 0x54]
    r1 = stack[23]; // [sp + 0x5C]
    r2 = stack[24]; // [sp + 0x60]
    r0 = r0 + r1;
    r1 = stack[22]; // [sp + 0x58]
    stack[17] = r0; // [sp + 0x44]
    r1 = r1 + r2;
    r3 = ((u32)((s32)r1 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[18] = r1; // [sp + 0x48]
    stack[18] = r3; // [sp + 0x48]
    stack[17] = r0; // [sp + 0x44]
    stack[19] = r0; // [sp + 0x4C]
    stack[20] = r3; // [sp + 0x50]
    r0 = *(u8*)(r4 + 0x10);
    r1 = stack[27]; // [sp + 0x6C]
    r2 = stack[28]; // [sp + 0x70]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[25]; // [sp + 0x64]
    r1 = r0 + r1;
    r0 = stack[26]; // [sp + 0x68]
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
    r1 = stack[19]; // [sp + 0x4C]
    r2 = stack[20]; // [sp + 0x50]
    r0 = r0 - r1;
    r1 = stack[4]; // [sp + 0x10]
    stack[1] = r0; // [sp + 0x4]
    r6 = r1 - r2;
    r1 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[2] = r6; // [sp + 0x8]
    if (cmp_lhs >= cmp_rhs) goto loc_08036232;
    r1 = (u32)(-(s32)r0);
loc_08036232:
    r2 = r6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803623A;
    r2 = (u32)(-(s32)r2);
loc_0803623A:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_0803626A(r0, r1, r2, r3);
    stack[8] = r3; // [sp + 0x20]
    r1 = stack[24]; // [sp + 0x60]
    r1 += 0x3U;
    stack[10] = r1; // [sp + 0x28]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803625A;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[19]; // [sp + 0x4C]
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[23]; // [sp + 0x5C]
    r0 += 0x3U;
    stack[9] = r0; // [sp + 0x24]
    return sub_0803629A(r0, r1, r2, r3);
loc_0803625A:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[21]; // [sp + 0x54]
    r0 -= 0x4U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[19]; // [sp + 0x4C]
    stack[9] = r0; // [sp + 0x24]
    return sub_0803629A(r0, r1, r2, r3);
}

// ROM Address: 0x0803626A..0x0803629A (48 bytes, Thumb)
u32 sub_0803626A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r4;
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803626E: BL 0x0800FDFA
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[3]; // [sp + 0xC]
    stack[9] = r0; // [sp + 0x24]
    if (cmp_lhs <= cmp_rhs) goto loc_0803628E;
    r6 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r6;
    r0 = stack[22]; // [sp + 0x58]
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[24]; // [sp + 0x60]
    r0 -= 0x6U;
    stack[10] = r0; // [sp + 0x28]
    return sub_0803629A(r0, r1, r2, r3);
loc_0803628E:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[22]; // [sp + 0x58]
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[2]; // [sp + 0x8]
    stack[10] = r0; // [sp + 0x28]
    return r0;
}

// ROM Address: 0x0803629A..0x08036302 (104 bytes, Thumb)
u32 sub_0803629A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[14] = r4; // [sp + 0x38]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r6 = 0x0U;
    *(u8*)(r3 + 0xC) = (u8)r0;
    r0 = 0x086B8098U; // [0x08036378]
    r3 = 0x0; // sp + 0x0
    stack[13] = r0; // [sp + 0x34]
    r0 = 0x400U; // (1 << 10)
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u32*)(r7 + 0xC);
    r2 = 0x18; // sp + 0x18
    r0 = (r0 << 10);
    stack[12] = r0; // [sp + 0x30]
    *(u8*)(r3 + 0x18) = (u8)r6;
    stack[18] = r4; // [sp + 0x48]
    r0 = *(u32*)(r7 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080362C6;
    r0 = stack[5]; // [sp + 0x14]
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_080362C6:
    r1 = *(u32*)(r5);
    r0 = r5;
    r3 = *(u32*)(r1 + 0x24);
    r3 = r3 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080362D0: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080362FE;
    r0 = 0x0875A734U; // [0x0803637C]
    r4 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080362DE
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08036380]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08036384]
    r3 = r6;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080362F6
    r0 = 0x1U;
    return sub_080361CA(r0, r1, r2, r3);
loc_080362FE:
    r0 = 0x0U;
    return sub_080361CA(r0, r1, r2, r3);
}

// ROM Address: 0x08036302..0x08036430 (302 bytes, Thumb)
u32 sub_08036302(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036308: BL __call_via_r3
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08036310: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036326;
    r1 = 0x0804B6E0U; // [0x08036388]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_08036326:
    return r0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803632E: BL __call_via_r3
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08036336: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803634C;
    r1 = 0x2U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r1 = 0x0U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = 0x0804DF84U /* &VTable_0804DF84 */; // [0x0803638C]
    *(u32*)(r0) = (u32)r1;
loc_0803634C:
    return r0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036354: BL __call_via_r3
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803635C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036370;
    r1 = 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = 0x0804AD98U /* &VTable_0804AD98 */; // [0x08036390]
    *(u32*)(r0) = (u32)r1;
loc_08036370:
    return r0;
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r7 = 0x08036450U;
    r5 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = (r0 >> 32);
    r0 = Bios_Swi_84(r0, r1); // SWI 0x84
    r4 = (r0 >> 32);
    r5 = 0x260; // sp + 0x260
    r4 = (r0 >> 32);
    r6 = r2;
    r5 = r1;
    r4 = r3;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080363AA;
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080363A2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080363C2;
loc_080363AA:
    r1 = 0x0804A6D0U; // [0x08036430]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x18) = (u32)r4;
    *(u32*)(r0 + 0x14) = (u32)r6;
    r1 = 0x0U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = 0x03000F90U; // [0x08036434]
    r1 = *(u32*)(r1 + 0x4);
    r1 = r1 - r4;
    r1 -= 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_080363C2:
    return r0;
    r1 = 0x0875A738U; // [0x08036438]
    r2 = 0xF3U;
    r1 = *(u32*)(r1);
    r1 = *(u16*)(r1 + 0x4);
    r1 &= r2;
    r2 = 0x03000F90U; // [0x08036434]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r2 = *(u32*)(r2 + 0x4);
    if (cmp_lhs == cmp_rhs) goto loc_080363E8;
    *(u32*)(r0 + 0xC) = (u32)r2;
    r1 = *(u32*)(r0 + 0x10);
    r1 += 0x1U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r0 = *(u32*)(r0 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_080363F6;
    r0 = 0x1U;
    return r0; // BX lr
loc_080363E8:
    r1 = *(u32*)(r0 + 0xC);
    r1 = r2 - r1;
    r2 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_080363F6;
    r1 = 0x0U;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_080363F6:
    r0 = 0x0U;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036402: BL __call_via_r3
    r5 = r0;
    r6 = *(u32*)(r4 + 0xC);
    r4 = *(u32*)(r4 + 0x10);
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803640E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803642E;
    r1 = 0x0804A6D0U; // [0x08036430]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x18) = (u32)r4;
    *(u32*)(r0 + 0x14) = (u32)r6;
    r1 = 0x0U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = 0x03000F90U; // [0x08036434]
    r1 = *(u32*)(r1 + 0x4);
    r1 = r1 - r4;
    r1 -= 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_0803642E:
    return r0;
}

// ROM Address: 0x08036430..0x0803643C (12 bytes, Thumb)
u32 sub_08036430(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x08036774U;
    r4 = (r0 >> 32);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r7 = 0x0803651CU;
    r5 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x0803643C..0x08036454 (24 bytes, Thumb)
u32 sub_0803643C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08036454(r0, r1, r2, r3);
    r0 = 0x9CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08036448: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08036454(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08036454..0x080364C6 (114 bytes, Thumb)
u32 sub_08036454(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08036708]
    r6 = 0xF40U; // (61 << 6)
    r5 = 0x0875A73CU; // [0x0803670C]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5 + 0x4);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08036464
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803647C;
    r1 = r6;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08036470: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08036478
loc_0803647C:
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r1 = 0x0804BAF4U /* &VTable_0804BAF4 */; // [0x08036710]
    *(u16*)(r4 + 0xC) = (u16)r0;
    *(u32*)(r4) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r1;
    r1 = 0x11U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r1 = *(u32*)(r5 + 0x8);
    r0 = (r0 << 5);
    r2 = *(u32*)(r1);
    r2 = r2 - r7;
    r2 -= 0x1U;
    r2 = (r2 << 2);
    r1 = r2 + r1;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x40U;
    *(u32*)(r4 + 0x10) = (u32)r1;
    r1 = 0x06010000U; // [0x08036714]
    r0 = r0 + r1;
    r1 = 0x0875A73CU; // [0x0803670C]
    r1 += 0x14U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080364AA: BL 0x08049138
    r0 = 0x0U;
    r1 = ~r0;
loc_080364B2:
    r2 = (r0 << 2);
    r2 = r2 + r4;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    *(u32*)(r2 + 0x18) = (u32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_080364B2;
    r0 = 0x98U;
    *(u32*)(r0 + r4) = r1;
    r0 = r4;
    return sub_08036452(r0, r1, r2, r3);
}

// ROM Address: 0x080364C6..0x08036654 (398 bytes, Thumb)
u32 sub_080364C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = sp;
    r2 = 0x10U;
    r7 = r7 + r2;
    r5 = r0;
    r1 = 0xF0U;
    r0 = r7;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080364D6
    r0 = 0x0807248CU; // [0x08036718]
    r1 = stack[13]; // [sp + 0x34]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080364DE
    r0 = 0x0875A73CU; // [0x0803670C]
    r3 = 0x0; // sp + 0x0
    r0 = *(u32*)(r0 + 0x10);
    r1 = 0x0803F5A5U; // [0x0803671C]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x78U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0xBU;
    stack[6] = r0; // [sp + 0x18]
    r0 = 0x2U;
    *(u8*)(r3 + 0x13) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r3 + 0x12) = (u8)r0;
    stack[12] = r1; // [sp + 0x30]
    *(u8*)(r3 + 0x10) = (u8)r0;
    r0 = 0x98U;
    r0 = *(u32*)(r0 + r5);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08036720]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = r7;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0803650C
    r0 = 0x0875A73CU; // [0x0803670C]
    r6 = sp;
    r0 += 0x54U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r6 -= 0x10U;
    r4 = 0x0U;
loc_0803651E:
    r0 = *(u16*)(r5 + 0xC);
    r1 = 0x06010000U; // [0x08036714]
    r2 = r6;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r4 << 9);
    r1 = r0 + r1;
    r1 += 0x40U;
    r0 = r7;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08036530: BL 0x0804915C
    r0 = stack[0]; // [sp + 0x0]
    r4 += 0x1U;
    r0 += 0x20U;
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[2]; // [sp + 0x8]
    r0 += 0x20U;
    stack[2] = r0; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 7;
    if (cmp_lhs < cmp_rhs) goto loc_0803651E;
    r0 = 0xF0U;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r5 + 0xC);
    r1 = 0x06010000U; // [0x08036714]
    r2 = r6;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = 0xE40U; // (57 << 6)
    r1 = r0 + r1;
    r0 = r7;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0803655C: BL 0x0804915C
    r1 = 0x0U;
    r0 = r7;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08036564: BL 0x0803F58C
    return r0;
    r4 = r1;
    r1 = *(u32*)(r0 + 0x10);
    stack[12] = r1; // [sp + 0x30]
    r1 = *(u32*)(r0 + 0x10);
    r3 = 0x4U;
    r2 = (u32)(*(s16*)(r1 + r3));
    r3 = 0x6U;
    r5 = (u32)(*(s16*)(r1 + r3));
    r3 = 0x8U;
    r6 = (u32)(*(s16*)(r1 + r3));
    r3 = 0xAU;
    r1 = (u32)(*(s16*)(r1 + r3));
    r6 += 0xFU;
    stack[4] = r6; // [sp + 0x10]
    stack[3] = r5; // [sp + 0xC]
    r1 += 0x7U;
    stack[5] = r1; // [sp + 0x14]
    r5 = 0x8; // sp + 0x8
    stack[2] = r2; // [sp + 0x8]
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r6 = 0x18; // sp + 0x18
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    *(u32*)r6 = r5; r6 += 4;
    r1 = stack[6]; // [sp + 0x18]
    r2 = stack[8]; // [sp + 0x20]
    r3 = stack[9]; // [sp + 0x24]
    r2 = r1 + r2;
    r1 = stack[7]; // [sp + 0x1C]
    stack[4] = r2; // [sp + 0x10]
    r1 = r1 + r3;
    stack[5] = r1; // [sp + 0x14]
    r1 = ((u32)((s32)r1 >> 1));
    r2 = ((u32)((s32)r2 >> 1));
    stack[5] = r1; // [sp + 0x14]
    stack[11] = r1; // [sp + 0x2C]
    r1 = (r4 << 3);
    stack[4] = r2; // [sp + 0x10]
    stack[10] = r2; // [sp + 0x28]
    r2 = 0x0807268CU; // [0x08036724]
    r12 = r1;
    r12 += r2;
    r1 = 0x7FFFFFFFU /* &INT_MAX */; // [0x08036728]
    r2 = 0x0875A73CU; // [0x0803670C]
    lr = r1;
    r1 = *(u32*)(r2 + 0x8);
    r3 = r0;
    r3 += 0x80U;
    r1 = *(u32*)(r1);
    r5 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    stack[14] = r3; // [sp + 0x38]
    if (cmp_lhs <= cmp_rhs) return sub_0803668E(r0, r1, r2, r3);
    r1 = 0x0875A73CU; // [0x0803670C]
    r2 = (r5 << 2);
    r1 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r4 = *(u32*)(r1 + 0x4);
    r1 = stack[12]; // [sp + 0x30]
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_08036682(r0, r1, r2, r3);
    r3 = 0x4U;
    r1 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x6U;
    r2 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x8U;
    r6 = (u32)(*(s16*)(r4 + r3));
    r3 = 0xAU;
    r7 = (u32)(*(s16*)(r4 + r3));
    r6 += 0xFU;
    stack[2] = r6; // [sp + 0x8]
    r3 = r7 + 7;
    stack[3] = r3; // [sp + 0xC]
    r6 = sp;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    r7 = 0x10; // sp + 0x10
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    *(u32*)r7 = r6; r7 += 4;
    r1 = stack[4]; // [sp + 0x10]
    r2 = stack[6]; // [sp + 0x18]
    r3 = stack[7]; // [sp + 0x1C]
    r2 = r1 + r2;
    r1 = stack[5]; // [sp + 0x14]
    stack[2] = r2; // [sp + 0x8]
    r1 = r1 + r3;
    stack[3] = r1; // [sp + 0xC]
    r1 = ((u32)((s32)r1 >> 1));
    r2 = ((u32)((s32)r2 >> 1));
    stack[3] = r1; // [sp + 0xC]
    stack[9] = r1; // [sp + 0x24]
    r1 = r2;
    stack[2] = r2; // [sp + 0x8]
    stack[8] = r2; // [sp + 0x20]
    r2 = stack[10]; // [sp + 0x28]
    r3 = stack[11]; // [sp + 0x2C]
    r1 = r1 - r2;
    r2 = stack[9]; // [sp + 0x24]
    stack[6] = r1; // [sp + 0x18]
    r2 = r2 - r3;
    stack[7] = r2; // [sp + 0x1C]
    r3 = r12;
    r3 = *(u32*)(r3);
    r6 = r1;
    r6 *= r3;
    stack[13] = r3; // [sp + 0x34]
    r3 = r12;
    r3 = *(u32*)(r3 + 0x4);
    r7 = r2;
    r7 *= r3;
    r1 *= r3;
    r3 = stack[13]; // [sp + 0x34]
    r6 = r6 + r7;
    r2 *= r3;
    r1 = r1 + r2;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08036656(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08036656..0x08036964 (782 bytes, Thumb)
u32 sub_08036656(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08036682;
    r2 = r6;
    r2 *= r6;
    r6 = r1;
    r6 *= r1;
    r1 = (r6 << 3);
    r1 = r1 + r6;
    r1 = r2 + r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)lr;
    if (cmp_lhs >= cmp_rhs) goto loc_08036682;
    lr = r1;
    r1 = 0x0875A73CU; // [0x0803670C]
    *(u32*)(r0 + 0x10) = (u32)r4;
    r1 = *(u32*)(r1 + 0x8);
    r1 = *(u32*)(r1);
    r1 = r1 - r5;
    r1 = (r1 << 2);
    r1 = r1 + r0;
    r1 = *(u32*)(r1 + 0x14);
    r2 = stack[14]; // [sp + 0x38]
    *(u32*)(r2 + 0x18) = (u32)r1;
loc_08036682:
    r1 = 0x0875A73CU; // [0x0803670C]
    r5 += 0x1U;
    r1 = *(u32*)(r1 + 0x8);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) return sub_080365D6(r0, r1, r2, r3);
    r2 = stack[14]; // [sp + 0x38]
    r1 = *(u32*)(r2 + 0x18);
    r3 = r1 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_0803669A;
    r0 = sub_080364C6(r0, r1, r2, r3); // 0x08036696: BL 0x080364C6
loc_0803669A:
    return r0;
    r5 = 0x0875A73CU; // [0x0803670C]
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 26);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080366B6;
    r1 = 0x2U;
    r0 = r4;
    r0 = sub_0803656C(r0, r1, r2, r3); // 0x080366B2
loc_080366B6:
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080366C8;
    r1 = 0x3U;
    r0 = r4;
    r0 = sub_0803656C(r0, r1, r2, r3); // 0x080366C4
loc_080366C8:
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 25);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080366DA;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_0803656C(r0, r1, r2, r3); // 0x080366D6
loc_080366DA:
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080366EC;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0803656C(r0, r1, r2, r3); // 0x080366E8
loc_080366EC:
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08036704;
    r0 = *(u32*)(r4 + 0x10);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = 0x03001C34U; // [0x0803672C]
    r1 = *(u32*)(r1);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036700: BL __call_via_r3
loc_08036704:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r7 = 0x08036800U;
    r5 = (r6 >> 1);
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r4 = 0x8CU;
    r7 = (r0 >> 32);
    r3 = (r0 >> 32);
    r6 = (r0 >> 32);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    r7 = *(u8*)(r7 + 0x1F);
    r4 = r6;
    r0 = (r0 << 12);
    r1 = *(u32*)(r0 + 0x10);
    r3 = 0x4U;
    r2 = (u32)(*(s16*)(r1 + r3));
    r3 = 0x6U;
    r4 = (u32)(*(s16*)(r1 + r3));
    r3 = 0x8U;
    r5 = (u32)(*(s16*)(r1 + r3));
    r3 = 0xAU;
    r1 = (u32)(*(s16*)(r1 + r3));
    r5 += 0xFU;
    stack[2] = r5; // [sp + 0x8]
    stack[1] = r4; // [sp + 0x4]
    r1 += 0x7U;
    stack[3] = r1; // [sp + 0xC]
    r4 = sp;
    stack[0] = r2; // [sp + 0x0]
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    r5 = 0x10; // sp + 0x10
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    *(u32*)r5 = r4; r5 += 4;
    r1 = stack[4]; // [sp + 0x10]
    r2 = stack[6]; // [sp + 0x18]
    r3 = stack[7]; // [sp + 0x1C]
    r2 = r1 + r2;
    r1 = stack[5]; // [sp + 0x14]
    stack[2] = r2; // [sp + 0x8]
    r2 = ((u32)((s32)r2 >> 1));
    r1 = r1 + r3;
    stack[3] = r1; // [sp + 0xC]
    r1 = ((u32)((s32)r1 >> 1));
    stack[3] = r1; // [sp + 0xC]
    stack[9] = r1; // [sp + 0x24]
    stack[2] = r2; // [sp + 0x8]
    stack[8] = r2; // [sp + 0x20]
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x1U;
    return r0; // BX lr
    r5 = r3;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r2 + r3));
    r3 = 0x2U;
    r6 = (u32)(*(s16*)(r2 + r3));
    r2 = 0x0875A73CU; // [0x08036968]
    r2 = *(u32*)(r2 + 0xC);
    r3 = r2;
    r2 = *(u32*)(r2 + 0x28);
    r3 += 0x28U;
    r3 = *(u32*)(r3 + 0x4);
    r2 = r4 - r2;
    r4 = 0x7U;
    r4 = ~r4;
    r3 = r6 - r3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs < cmp_rhs) goto loc_08036800;
    cmp_lhs = (s32)r2; cmp_rhs = 240;
    if (cmp_lhs >= cmp_rhs) goto loc_08036800;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs < cmp_rhs) goto loc_08036800;
    cmp_lhs = (s32)r3; cmp_rhs = 160;
    if (cmp_lhs >= cmp_rhs) goto loc_08036800;
    r4 = *(u32*)(r1);
    r6 = 0xFE00FFFFU; // [0x0803696C]
    *(u32*)(r4) = (u32)r5;
    r4 = *(u32*)(r1);
    r2 = (r2 << 23);
    r5 = *(u32*)(r4);
    r2 = (r2 >> 7);
    r5 &= r6;
    r2 |= r5;
    *(u32*)(r4) = (u32)r2;
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r4 = *(u32*)(r1);
    r2 |= r3;
    *(u32*)(r4) = (u32)r2;
    r2 = *(u8*)(r0 + 0x8);
    r5 = 0xC00U; // (3 << 10)
    r3 = (r2 << 26);
    r2 = *(u32*)(r1);
    r3 = (r3 >> 30);
    r2 += 0x4U;
    r4 = *(u32*)(r2);
    r3 = (r3 << 10);
    r4 &= ~r5;
    r3 |= r4;
    *(u32*)(r2) = (u32)r3;
    r0 = *(u16*)(r0 + 0xC);
    r3 = (r3 >> 10);
    r3 = (r3 << 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r2 = *(u32*)(r1);
    r0 |= r3;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r0 = *(u32*)(r1);
    r0 += 0x8U;
    *(u32*)(r1) = (u32)r0;
loc_08036800:
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r1);
    stack[6] = r0; // [sp + 0x18]
    r0 = *(u32*)(r4 + 0x14);
    r6 = r1;
    r0 += 0x1U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = (r0 << 27);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08036892;
    r0 = *(u32*)(r4 + 0x10);
    r3 = 0x4U;
    r1 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x6U;
    r2 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x8U;
    r5 = (u32)(*(s16*)(r0 + r3));
    r3 = 0xAU;
    r0 = (u32)(*(s16*)(r0 + r3));
    r5 += 0xFU;
    stack[2] = r5; // [sp + 0x8]
    r0 += 0x7U;
    stack[3] = r0; // [sp + 0xC]
    r5 = r2;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    r1 = stack[3]; // [sp + 0xC]
    r0 = stack[0]; // [sp + 0x0]
    stack[4] = r2; // [sp + 0x10]
    stack[5] = r1; // [sp + 0x14]
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0xC) = (u16)r0;
    *(u16*)(r3 + 0xE) = (u16)r5;
    r3 = 0x1U;
    r7 = 0x18; // sp + 0x18
    r1 = r7;
    r3 = (r3 << 13);
    r0 = r4;
    r2 = 0xC; // sp + 0xC
    r0 = sub_08036780(r0, r1, r2, r3); // 0x08036856
    r0 = stack[5]; // [sp + 0x14]
    r3 = 0x0; // sp + 0x0
    r0 -= 0x8U;
    *(u16*)(r3 + 0xE) = (u16)r0;
    r1 = r7;
    r0 = r4;
    r3 = 0x20002000U; // [0x08036970]
    r2 = 0xC; // sp + 0xC
    r0 = sub_08036780(r0, r1, r2, r3); // 0x0803686A
    r0 = stack[4]; // [sp + 0x10]
    r3 = 0x0; // sp + 0x0
    r0 -= 0x8U;
    *(u16*)(r3 + 0xC) = (u16)r0;
    r1 = r7;
    r0 = r4;
    r3 = 0x30002000U; // [0x08036974]
    r2 = 0xC; // sp + 0xC
    r0 = sub_08036780(r0, r1, r2, r3); // 0x0803687E
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0xE) = (u16)r5;
    r1 = r7;
    r0 = r4;
    r3 = 0x10002000U; // [0x08036978]
    r2 = 0xC; // sp + 0xC
    r0 = sub_08036780(r0, r1, r2, r3); // 0x0803688E
loc_08036892:
    r0 = 0x98U;
    r0 = *(u32*)(r0 + r4);
    r3 = r0 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_0803690A;
    r1 = 0x0U;
    r5 = 0x3U;
    r7 = 0x80006000U; // [0x0803697C]
    r5 = (r5 << 10);
loc_080368A2:
    r2 = (r1 << 28);
    r2 = (r2 >> 7);
    r2 |= r7;
    r2 = (r2 >> 8);
    r2 = (r2 << 8);
    r0 = stack[6]; // [sp + 0x18]
    r2 += 0x88U;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u16*)(r4 + 0xC);
    r3 = (r1 << 4);
    r1 += 0x1U;
    r2 = r2 + r3;
    r3 = *(u32*)(r0 + 0x4);
    r2 += 0x2U;
    r2 = (r2 << 22);
    r3 = (r3 >> 10);
    r3 = (r3 << 10);
    r2 = (r2 >> 22);
    r2 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r3 = *(u8*)(r4 + 0x8);
    r2 &= ~r5;
    r3 = (r3 << 26);
    r3 = (r3 >> 30);
    r3 = (r3 << 10);
    r2 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r0 += 0x8U;
    stack[6] = r0; // [sp + 0x18]
    cmp_lhs = (s32)r1; cmp_rhs = 7;
    if (cmp_lhs < cmp_rhs) goto loc_080368A2;
    r1 = 0x40E02088U; // [0x08036980]
    r0 = stack[6]; // [sp + 0x18]
    *(u32*)(r0) = (u32)r1;
    r1 = *(u16*)(r4 + 0xC);
    r2 = *(u32*)(r0 + 0x4);
    r1 += 0x72U;
    r1 = (r1 << 22);
    r2 = (r2 >> 10);
    r2 = (r2 << 10);
    r1 = (r1 >> 22);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r2 = *(u8*)(r4 + 0x8);
    r1 &= ~r5;
    r2 = (r2 << 26);
    r2 = (r2 >> 30);
    r2 = (r2 << 10);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 += 0x8U;
    stack[6] = r0; // [sp + 0x18]
loc_0803690A:
    r0 = stack[6]; // [sp + 0x18]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) goto loc_0803694E;
    cmp_lhs = (s32)r1; cmp_rhs = 35;
    if (cmp_lhs != cmp_rhs) return sub_08036964(r0, r1, r2, r3);
    r3 = *(u32*)(r2);
    r1 = *(u32*)(r2 + 0x4);
    r3 = (r3 << 2);
    r3 = r3 + r0;
    *(u32*)(r3 + 0x18) = (u32)r1;
    r3 = 0x0875A73CU; // [0x08036968]
    r4 = *(u32*)(r2);
    r1 = *(u32*)(r3 + 0x8);
    r3 = *(u32*)(r1);
    r3 = r3 - r4;
    r3 -= 0x1U;
    r3 = (r3 << 2);
    r1 = r3 + r1;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_0803694A;
    r1 = *(u32*)(r2 + 0x4);
    r2 = 0x98U;
    *(u32*)(r2 + r0) = r1;
    r0 = sub_080364C6(r0, r1, r2, r3); // 0x08036946: BL 0x080364C6
loc_0803694A:
    r0 = 0x1U;
    return r0;
loc_0803694E:
    r0 = *(u16*)(r0 + 0xC);
    r1 = 0x06010000U; // [0x08036984]
    r2 = 0x40U;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = 0x0875A73CU; // [0x08036968]
    r1 += 0x14U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803695C: BL 0x08049138
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08036964..0x08036968 (4 bytes, Thumb)
u32 sub_08036964(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08036972..0x08036A10 (158 bytes, Thumb)
u32 sub_08036972(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = 0x0U;
    r0 += 0x0U;
    r0 = 0x0U;
    r0 = ((u32)((s32)r0 >> 32));
    *(u32*)(r0) = (u32)r0;
    *(u16*)(r0) = (u16)r0;
    r0 = 0x88U;
    r0 >>= (r4 & 0xFF);
    r0 = r0;
    r1 = (r0 << 24);
    r5 = r0;
    r4 = 0x0875A7A0U; // [0x08036A10]
    r6 = r1;
    r2 = 0x1U;
    r1 = 0x22U;
    r0 = *(u32*)(r4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08036996
    r1 = r6;
    r0 = r5;
    r0 = sub_0802A028(r0, r1, r2, r3); // 0x0803699E
    r5 = r0;
    r2 = 0x0U;
    r1 = 0x22U;
    r0 = *(u32*)(r4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x080369AA
    r0 = r5;
    return r0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080369B8: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080369CE;
    r1 = 0x32U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r1 = 0x0U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r1 = 0x0804B080U /* &VTable_0804B080 */; // [0x08036A14]
    *(u32*)(r0) = (u32)r1;
loc_080369CE:
    return r0;
    r5 = r0;
    r4 = 0x0875A7A0U; // [0x08036A10]
    r6 = r1;
    r2 = 0x1U;
    r1 = 0x22U;
    r0 = *(u32*)(r4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x080369DE
    r1 = r6;
    r0 = r5;
    r0 = sub_08018C3A(r0, r1, r2, r3); // 0x080369E6
    r5 = r0;
    r2 = 0x0U;
    r1 = 0x22U;
    r0 = *(u32*)(r4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x080369F2
    r0 = r5;
    return r0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08036A00: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036A0E;
    r1 = 0x0804AD38U; // [0x08036A18]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08036A0E:
    return r0;
}

// ROM Address: 0x08036A10..0x08036A12 (2 bytes, Thumb)
u32 sub_08036A10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x08036C94U;
    return r0;
}

// ROM Address: 0x08036A12..0x08036A5C (74 bytes, Thumb)
u32 sub_08036A12(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r6 >> 1);
    r4 = (r0 >> 32);
    r5 = 0xE0; // sp + 0xE0
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0 + 0x38);
    r3 = 0x0U;
    r4 = (u32)(*(s8*)(r1 + r3));
    r2 = *(u32*)(r0 + 0x10);
    r3 = 0x1U;
    r2 = r2 - r4;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r5 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r0 + 0x14);
    r4 = r4 - r5;
    *(u32*)(r0 + 0x24) = (u32)r4;
    r3 = *(u8*)(r1 + 0x2);
    r1 = *(u8*)(r1 + 0x3);
    r2 = r2 + r3;
    r1 = r4 + r1;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    *(u32*)(r0 + 0x28) = (u32)r2;
    return r0; // BX lr
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08036A5C(r0, r1, r2, r3);
    r0 = 0x3CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08036A50: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08036A5C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08036A5C..0x08036AC2 (102 bytes, Thumb)
u32 sub_08036A5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08036D68]
    r6 = 0x1000U; // (1 << 12)
    r5 = 0x0875A7A4U; // [0x08036D6C]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08036A6C
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08036A84;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08036A78: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08036A80
loc_08036A84:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804AF50U /* &VTable_0804AF50 */; // [0x08036D70]
    r3 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0875F7ACU; // [0x08036D74]
    r1 = *(u32*)r7; r7 += 4;
    r2 = *(u32*)r7; r7 += 4;
    *(u32*)(r4 + 0x38) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r1;
    *(u32*)(r4 + 0x14) = (u32)r2;
    r1 = 0x3CU;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x30) = (u32)r1;
    *(u32*)(r4 + 0x4) = (u32)r2;
    *(u32*)(r4 + 0x34) = (u32)r1;
    r5 = (u32)(*(s8*)(r0 + r3));
    r1 = *(u32*)(r4 + 0x10);
    r3 = 0x1U;
    r1 = r1 - r5;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r5 = (u32)(*(s8*)(r0 + r3));
    r3 = r2 - r5;
    *(u32*)(r4 + 0x24) = (u32)r3;
    r2 = *(u8*)(r0 + 0x2);
    r0 = *(u8*)(r0 + 0x3);
    r1 = r1 + r2;
    r0 = r3 + r0;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r1;
    r0 = r4;
    return sub_08036A5A(r0, r1, r2, r3);
}

// ROM Address: 0x08036B1A..0x08036BB2 (152 bytes, Thumb)
u32 sub_08036B1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x5AU;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = 0x03001C34U; // [0x08036D7C]
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036B98;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08036B98;
    r0 = *(u32*)(r4 + 0x38);
    r0 = r0 - r6;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs < cmp_rhs) goto loc_08036B98;
    cmp_lhs = (s32)r0; cmp_rhs = 60;
    if (cmp_lhs >= cmp_rhs) goto loc_08036B98;
    r0 = *(u32*)(r4 + 0x10);
    r1 = *(u32*)(r4 + 0x14);
    r0 += 0x10U;
    stack[3] = r0; // [sp + 0xC]
    stack[6] = r0; // [sp + 0x18]
    r1 += 0x10U;
    r0 += 0x20U;
    stack[8] = r0; // [sp + 0x20]
    r0 = r1;
    r0 += 0x20U;
    stack[9] = r0; // [sp + 0x24]
    stack[4] = r1; // [sp + 0x10]
    stack[7] = r1; // [sp + 0x1C]
    r1 = r5;
    r0 = 0x4; // sp + 0x4
    r6 = 0x28; // sp + 0x28
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08036B5C: BL 0x0800FDFA
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08036B98;
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08036B98;
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08036B98;
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08036B98;
    r0 = 0x400U; // (1 << 10)
    stack[16] = r0; // [sp + 0x40]
    r0 = 0x0U;
    stack[14] = r0; // [sp + 0x38]
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x5C);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08036B94: BL __call_via_r3
loc_08036B98:
    return r0;
    r2 = 0x0875F7ACU; // [0x08036D74]
    r1 = *(u32*)(r0 + 0x38);
    r2 += 0x18U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_08036BB2(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08036BB2..0x08036BF6 (68 bytes, Thumb)
u32 sub_08036BB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0875A7A4U; // [0x08036D6C]
    r3 = *(u32*)(r0 + 0x20);
    r1 = *(u32*)(r1 + 0x4);
    r2 = r0;
    r1 += 0x18U;
    r4 = *(u32*)(r1);
    r2 += 0x18U;
    r3 = r3 - r4;
    r4 = *(u32*)(r0 + 0x24);
    r5 = *(u32*)(r1 + 0x4);
    stack[0] = r3; // [sp + 0x0]
    r4 = r4 - r5;
    stack[1] = r4; // [sp + 0x4]
    *(u32*)r2 = r3; r2 += 4;
    *(u32*)r2 = r4; r2 += 4;
    r2 = *(u32*)(r0 + 0x20);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08036BF2;
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x28);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08036BF2;
    r2 = *(u32*)(r0 + 0x24);
    r3 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08036BF2;
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0x2C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08036BF2;
    r0 = 0x1U;
    return sub_08036BAC(r0, r1, r2, r3);
loc_08036BF2:
    r0 = 0x0U;
    return sub_08036BAC(r0, r1, r2, r3);
}

// ROM Address: 0x08036BF6..0x08036C4A (84 bytes, Thumb)
u32 sub_08036BF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r4 = 0xFE00FFFFU; // [0x08036D80]
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x38);
    r2 = *(u32*)(r2 + 0x4);
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x18);
    r2 &= r4;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x1C);
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r2 = *(u32*)(r1 + 0x4);
    r3 = 0xC00U; // (3 << 10)
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r3 = *(u16*)(r0 + 0xC);
    r2 = (r2 >> 10);
    r2 = (r2 << 10);
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r1 = *(u32*)(r0 + 0x38);
    r0 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) return sub_08036C4A(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08036C4A..0x08036C4E (4 bytes, Thumb)
u32 sub_08036C4A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08036C46(r0, r1, r2, r3);
}

// ROM Address: 0x08036C4E..0x08036CB6 (104 bytes, Thumb)
u32 sub_08036C4E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r2 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_08036CB6(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 12;
    if (cmp_lhs == cmp_rhs) return sub_08036CD2(r0, r1, r2, r3);
    r4 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 33;
    r1 = 0x0875F7ACU; // [0x08036D74]
    if (cmp_lhs == cmp_rhs) return sub_08036CE0(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 34;
    if (cmp_lhs != cmp_rhs) return sub_08036D3E(r0, r1, r2, r3);
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
    r0 = *(u32*)(r0 + 0x38);
    r6 = 0xC; // sp + 0xC
    r0 = r0 - r1;
    r0 = sub_08053080(r0, r1, r2, r3); // 0x08036C8A: BL 0x08053080
    r0 = 0x0875A7A4U; // [0x08036D6C]
    r5 = *(u32*)(r0 + 0x4);
    r5 += 0x80U;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_08036C9C;
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) return sub_08036D44(r0, r1, r2, r3);
loc_08036C9C:
    r2 = 0x1U;
    r0 = r6;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08036CA2
    r2 = 0x1U;
    r0 = 0xC; // sp + 0xC
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08036CAC
    r0 = 0x0U;
    return r0;
}
