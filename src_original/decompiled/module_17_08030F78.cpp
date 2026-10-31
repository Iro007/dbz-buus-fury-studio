/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #17
 * Address Range: 0x08030F78..0x08034330 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// Evidence: writes BLDCNT 0x04000050: 0x08030F98 ldr r1, [pc, #0x58] (= 0x04000040) then 0x08030F9C strh r0, [r1, #0x10]; writes BLDALPHA 0x04000052: 0x08030F98 ldr r1, [pc, #0x58] (= 0x04000040) then 0x08030FA0 strb r0, [r1, #0x12]; writes BLDALPHA 0x04000053: 0x08030F98 ldr r1, [pc, #0x58] (= 0x04000040) then 0x08030FA2 strb r0, [r1, #0x13]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08030F78
// ROM Address: 0x08030F78..0x08030FB4 (60 bytes, Thumb)
u32 Blend_WriteControlAndAlpha5(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804ABD8U /* &VTable_0804ABD8 */; // [0x08030FF0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 += 0x2CU;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x08759154U; // [0x08030FEC]
    r1 = 0x0U;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08009692(r0, r1, r2, r3); // 0x08030F8C
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08030FA4;
    r0 = 0x41U;
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x08030FF4]
    r0 = (r0 << 6);
    *(u16*)(r1 + 0x10) = (u16)r0;
    r0 = 0x10U;
    *(u8*)(r1 + 0x12) = (u8)r0;
    *(u8*)(r1 + 0x13) = (u8)r0;
loc_08030FA4:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08030FF8]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08030FB2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08030FAE: BL 0x0803D63C
loc_08030FB2:
    return r0;
}

// ROM Address: 0x08030FB4..0x08030FB8 (4 bytes, Thumb)
u32 sub_08030FB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08030FB8..0x0803101A (98 bytes, Thumb)
u32 sub_08030FB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x03002A60U; // [0x08030FFC]
    r1 += 0x10U;
    r2 = *(u32*)(r2);
    r3 = 0x03000F50U; // [0x08031000]
    r2 = (r2 << 3);
    r1 = r2 + r1;
    r1 += 0x4U;
    r2 = *(u32*)(r1);
    r4 = *(u32*)(r3);
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r3 + 0x4);
    r2 = r2 + r4;
    r1 = r1 + r3;
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    return r0; // BX lr
    r0 = r0;
    r5 = (r5 >> 13);
    r3 = (r0 >> 32);
    stack[84] = r1; // [sp + 0x150]
    r5 = (r6 >> 1);
    r3 = 0x360; // sp + 0x360
    r4 = (r0 >> 32);
    r0 = (r0 << 1);
    r0 = (r0 << 16);
    return sub_080308A4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r2; cmp_rhs = 96;
    r0 = (r0 << 12);
    r0 = (r2 >> 29);
    r0 = (r0 << 12);
    r4 = r0;
    r0 = 0x03001B94U; // [0x0803124C]
    r5 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803101A(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803101A..0x080311C0 (422 bytes, Thumb)
u32 sub_0803101A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x200U; // (1 << 9)
    r2 = r5 + r0;
    r0 = *(u32*)(r2 + 0x4);
    r6 = r4 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08031090;
    r3 = 0x80U;
    r0 &= ~r3;
    r3 = (r3 << 3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08031056;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0803104E;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_08031046;
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_0803105C;
    r0 = *(u32*)(r4 + 0x4);
    r0 = r0 + r3;
    *(u32*)(r4 + 0x4) = (u32)r0;
    goto loc_0803105C;
loc_08031046:
    r0 = *(u32*)(r4 + 0x4);
    r0 = r0 - r3;
    *(u32*)(r4 + 0x4) = (u32)r0;
    goto loc_0803105C;
loc_0803104E:
    r0 = *(u32*)(r4 + 0x8);
    r0 = r0 - r3;
    *(u32*)(r4 + 0x8) = (u32)r0;
    goto loc_0803105C;
loc_08031056:
    r0 = *(u32*)(r4 + 0x8);
    r0 = r0 + r3;
    *(u32*)(r4 + 0x8) = (u32)r0;
loc_0803105C:
    r3 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = 128;
    if (cmp_lhs <= cmp_rhs) goto loc_08031068;
    r0 = 0x80U;
    *(u32*)(r6) = (u32)r0;
    goto loc_0803108C;
loc_08031068:
    r0 = 0x7FU;
    r0 = ~r0;
    r7 = r0;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08031076;
    *(u32*)(r6) = (u32)r0;
    goto loc_0803108C;
loc_08031076:
    r3 = r4;
    r7 = *(u32*)(r4 + 0x8);
    r3 += 0x8U;
    cmp_lhs = (s32)r7; cmp_rhs = 128;
    if (cmp_lhs <= cmp_rhs) goto loc_08031086;
    r0 = 0x80U;
    *(u32*)(r3) = (u32)r0;
    goto loc_0803108C;
loc_08031086:
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803108C;
    *(u32*)(r3) = (u32)r0;
loc_0803108C:
    r0 = 0x0U;
    *(u32*)(r2 + 0x4) = (u32)r0;
loc_08031090:
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08031092: BL 0x0800FDFA
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
    r1 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080310B6: BL 0x0800FDFA
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
    stack[13] = r1; // [sp + 0x34]
    r1 = r0 - r1;
    r0 = stack[8]; // [sp + 0x20]
    r2 = stack[14]; // [sp + 0x38]
    stack[1] = r1; // [sp + 0x4]
    stack[15] = r1; // [sp + 0x3C]
    r0 = r0 - r2;
    r1 = 0x03003168U; // [0x08031250]
    stack[2] = r0; // [sp + 0x8]
    stack[16] = r0; // [sp + 0x40]
    r0 = *(u32*)(r1 + 0x4);
    r7 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080310FE;
    r0 = 0x1U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x4219999AU; // [0x08031254]
    r0 = sub_08054A64(r0, r1, r2, r3); // 0x080310F8: BL 0x08054A64
    *(u32*)(r7) = (u32)r0;
loc_080310FE:
    r1 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08031112;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs >= cmp_rhs) goto loc_08031122;
    r1 = *(u32*)(r7);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
    goto loc_08031122;
loc_08031112:
    r1 = 0x7FU;
    r0 = *(u32*)(r4 + 0x4);
    r1 = ~r1;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08031122;
    r1 = *(u32*)(r7);
    r0 = r0 - r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_08031122:
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08031136;
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs >= cmp_rhs) goto loc_08031146;
    r1 = *(u32*)(r7);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x8) = (u32)r0;
    goto loc_08031146;
loc_08031136:
    r1 = 0x7FU;
    r0 = *(u32*)(r4 + 0x8);
    r1 = ~r1;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08031146;
    r1 = *(u32*)(r7);
    r0 = r0 - r1;
    *(u32*)(r4 + 0x8) = (u32)r0;
loc_08031146:
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08031150;
    r1 = r0;
    goto loc_08031152;
loc_08031150:
    r1 = (u32)(-(s32)r0);
loc_08031152:
    r2 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0803115C;
    r3 = r2;
    goto loc_0803115E;
loc_0803115C:
    r3 = (u32)(-(s32)r2);
loc_0803115E:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_08031170;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803116A;
    r0 = 0x3U;
    goto loc_0803116C;
loc_0803116A:
    r0 = 0x2U;
loc_0803116C:
    *(u8*)(r5 + 0x10) = (u8)r0;
    goto loc_08031180;
loc_08031170:
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08031178;
    r0 = 0x1U;
    goto loc_0803117A;
loc_08031178:
    r0 = 0x0U;
loc_0803117A:
    r1 = 0x1U;
    r0 = r1 - r0;
    *(u8*)(r5 + 0x10) = (u8)r0;
loc_08031180:
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803118A: BL __call_via_r3
    r4 = r5;
    r4 += 0x1A0U;
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r6);
    r2 = *(u32*)(r4 + 0x4);
    r0 = r0 + r1;
    r1 = *(u32*)(r6 + 0x4);
    stack[9] = r0; // [sp + 0x24]
    r1 = r2 + r1;
    stack[10] = r1; // [sp + 0x28]
    stack[12] = r1; // [sp + 0x30]
    stack[14] = r1; // [sp + 0x38]
    stack[11] = r0; // [sp + 0x2C]
    stack[13] = r0; // [sp + 0x34]
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x54);
    r7 = r4 + 4;
    r2 = r2 + r1;
    r1 = 0x34; // sp + 0x34
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080311B8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080311CA(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x080311C0..0x08031228 (104 bytes, Thumb)
u32 sub_080311C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r4) = (u32)r0;
    r0 = stack[14]; // [sp + 0x38]
    *(u32*)(r7) = (u32)r0;
    goto loc_08031216;
    r0 = stack[13]; // [sp + 0x34]
    r6 = 0x2C; // sp + 0x2C
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0xFFU;
    r0 += 0xA5U;
    r0 = *(u32*)(r0 + r5);
    stack[12] = r0; // [sp + 0x30]
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080311E2: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080311F4;
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r4) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r7) = (u32)r0;
    goto loc_08031216;
loc_080311F4:
    r0 = *(u32*)(r4);
    r1 = r6;
    stack[11] = r0; // [sp + 0x2C]
    r0 = stack[14]; // [sp + 0x38]
    stack[12] = r0; // [sp + 0x30]
    r2 = *(u32*)(r5);
    r0 = r5;
    r3 = *(u32*)(r2 + 0x54);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08031206: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08031216;
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r4) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r7) = (u32)r0;
loc_08031216:
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08031220: BL __call_via_r3
    r0 = 0x0U;
    return sub_08031016(r0, r1, r2, r3);
}

// ROM Address: 0x0803125C..0x080312F4 (152 bytes, Thumb)
u32 sub_0803125C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B94U; // [0x080314C0]
    r7 = 0x0U;
    r5 = *(u32*)(r0);
    r4 = r1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08031350(r0, r1, r2, r3);
    r1 = r5;
    r0 = 0x5C; // sp + 0x5C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08031270
    r1 = r4;
    r0 = 0x4C; // sp + 0x4C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08031278
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
    if (cmp_lhs >= cmp_rhs) goto loc_080312CC;
    r1 = (u32)(-(s32)r0);
loc_080312CC:
    r2 = r6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080312D4;
    r2 = (u32)(-(s32)r2);
loc_080312D4:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_08031304(r0, r1, r2, r3);
    stack[6] = r3; // [sp + 0x18]
    r1 = stack[22]; // [sp + 0x58]
    r1 += 0x3U;
    stack[8] = r1; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_080312F4(r0, r1, r2, r3);
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[17]; // [sp + 0x44]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[21]; // [sp + 0x54]
    r0 += 0x3U;
    stack[7] = r0; // [sp + 0x1C]
    return sub_08031332(r0, r1, r2, r3);
}

// ROM Address: 0x080312F4..0x08031352 (94 bytes, Thumb)
u32 sub_080312F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[19]; // [sp + 0x4C]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[17]; // [sp + 0x44]
    stack[7] = r0; // [sp + 0x1C]
    goto loc_08031332;
    r1 = r4;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08031308: BL 0x0800FDFA
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[2]; // [sp + 0x8]
    stack[7] = r0; // [sp + 0x1C]
    if (cmp_lhs <= cmp_rhs) goto loc_08031326;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[22]; // [sp + 0x58]
    r0 -= 0x6U;
    stack[8] = r0; // [sp + 0x20]
    goto loc_08031332;
loc_08031326:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[1]; // [sp + 0x4]
    stack[8] = r0; // [sp + 0x20]
loc_08031332:
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r2 = 0x10; // sp + 0x10
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x086B8098U; // [0x080314C4]
    r3 = 0x0; // sp + 0x0
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x400U; // (1 << 10)
    stack[10] = r0; // [sp + 0x28]
    *(u8*)(r3 + 0x10) = (u8)r7;
    stack[16] = r4; // [sp + 0x40]
    r0 = r5;
    return sub_08031352(r0, r1, r2, r3);
    return sub_08031384(r0, r1, r2, r3);
}

// ROM Address: 0x08031352..0x08031384 (50 bytes, Thumb)
u32 sub_08031352(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5);
    r3 = *(u32*)(r1 + 0x24);
    r3 = r3 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803135A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08031384(r0, r1, r2, r3);
    r0 = 0x08759178U; // [0x080314C8]
    r4 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08031368
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x080314CC]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x080314D0]
    r3 = r7;
    r2 = 0x40U;
    r0 = r4 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08031380
    return r0;
}

// ROM Address: 0x08031384..0x08031388 (4 bytes, Thumb)
u32 sub_08031384(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x08031388..0x08031400 (120 bytes, Thumb)
u32 sub_08031388(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r1;
    r1 = *(u32*)(r0);
    r5 = r0;
    r2 = *(u32*)(r1 + 0x10);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08031398: BL __call_via_r3
    r4 = *(u8*)(r6 + 0x10);
    r0 = 0x1U;
    r1 = (r4 >> 1);
    r0 ^= r1;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x40U;
    stack[2] = r1; // [sp + 0x8]
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080313AA
    r1 = *(u32*)(r5 + 0xC);
    r0 += 0x60U;
    r0 *= r1;
    r7 = (r0 >> 7);
    r0 = stack[1]; // [sp + 0x4]
    r5 += 0x4U;
    r2 = 0x08759178U; // [0x080314C8]
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r2 += 0x4U;
    r1 = (r4 << 2);
    r1 = *(u32*)(r2 + r1);
    r1 *= r7;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x8000U; // (1 << 15)
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080313CE
    r1 = 0x4000U; // (1 << 14)
    r0 = r0 - r1;
    r1 = stack[2]; // [sp + 0x8]
    r0 *= r7;
    r0 = ((u32)((s32)r0 >> 12));
    r1 = (r1 << 2);
    r1 = r1 + r5;
    *(u32*)(r1) = (u32)r0;
    *(u8*)(r6 + 0x10) = (u8)r4;
    return r0;
    r6 = r0;
    r0 = *(u32*)(r0 + 0x10);
    r4 = r1;
    r0 -= 0x1U;
    *(u32*)(r6 + 0x10) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08031400(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08031400..0x080314A6 (166 bytes, Thumb)
u32 sub_08031400(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03002B9CU; // [0x080314D4]
    r0 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_08031418;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803140C
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08031414
loc_08031418:
    r1 = r4;
    r5 = 0x14; // sp + 0x14
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803141E: BL 0x0800FDFA
    r0 = r4;
    r0 += 0x1A0U;
    r2 = r6 + 4;
    stack[9] = r2; // [sp + 0x24]
    stack[10] = r0; // [sp + 0x28]
    r1 = *(u32*)(r0);
    r3 = *(u32*)(r6 + 0x4);
    r7 = r2 + 4;
    r1 = r1 + r3;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r6 + 0x8);
    r6 = 0x4; // sp + 0x4
    r1 = r1 + r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = r4;
    r0 = r6;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08031446: BL 0x0800FDFA
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x1U;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08031456: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x50);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08031464: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803147E;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08031478: BL __call_via_r3
    goto loc_080314A2;
loc_0803147E:
    r0 = stack[10]; // [sp + 0x28]
    r2 = stack[9]; // [sp + 0x24]
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2);
    r1 = r1 - r2;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r7);
    r1 = r1 - r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803149E: BL __call_via_r3
loc_080314A2:
    r0 = 0x0U;
    return sub_080313FC(r0, r1, r2, r3);
}

// ROM Address: 0x080314A6..0x080314C0 (26 bytes, Thumb)
u32 sub_080314A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080314AC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080314BE;
    r1 = 0x0804CFDCU /* &VTable_0804CFDC */; // [0x080314D8]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r4;
    r1 = 0x30U;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_080314BE:
    return r0;
}

// ROM Address: 0x080314C0..0x080315A4 (228 bytes, Thumb)
u32 sub_080314C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    stack[120] = r1; // [sp + 0x1E0]
    r5 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    cmp_lhs = (s32)r3; cmp_rhs = 156;
    r0 = (r0 << 12);
    r2 = *(u32*)r7; r7 += 4;
    r3 = *(u32*)r7; r7 += 4;
    r4 = *(u32*)r7; r7 += 4;
    r6 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r4 = (r0 >> 32);
    r0 = *(u32*)(r1 + 0x14);
    r4 = r1;
    r1 = 0x03001B30U; // [0x080315A8]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080314EC;
    r0 = 0x0U;
loc_080314EA:
    return r0;
loc_080314EC:
    r0 = 0xBCU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080314F0: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08031508;
    r0 = 0xBBU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080314FA: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08031502
    goto loc_08031592;
loc_08031508:
    r0 = 0xBBU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803150C: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08031524;
    r0 = 0xBCU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08031516: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0803151E
    goto loc_08031592;
loc_08031524:
    r0 = 0xE7U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08031528: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08031540;
    r0 = 0xE6U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08031532: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0803153A
    goto loc_08031592;
loc_08031540:
    r0 = 0xE6U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08031544: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803155C;
    r0 = 0xE7U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803154E: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08031556
    goto loc_08031592;
loc_0803155C:
    r0 = 0x85U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08031560: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08031578;
    r0 = 0x86U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803156A: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08031572
    goto loc_08031592;
loc_08031578:
    r0 = 0x86U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803157C: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08031592;
    r0 = 0x85U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08031586: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0803158E
loc_08031592:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803159C: BL __call_via_r3
    r0 = 0x1U;
    goto loc_080314EA;
    return r0;
}

// ROM Address: 0x080315B0..0x080315C6 (22 bytes, Thumb)
u32 sub_080315B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080315C6(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x51U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080315BA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080315C6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080315C6..0x08031620 (90 bytes, Thumb)
u32 sub_080315C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x08031834]
    r5 = r4;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r5 += 0x100U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u32*)(r5 + 0xC) = (u32)r0;
    *(u32*)(r5 + 0x8) = (u32)r0;
    r1 = 0x080499A8U /* &VTable_080499A8 */; // [0x08031838]
    *(u32*)(r5 + 0x10) = (u32)r0;
    *(u32*)(r4) = (u32)r1;
    *(u32*)(r5 + 0x14) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r5 + 0x1C) = (u32)r0;
    r0 = 0x08759198U; // [0x0803183C]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r6 = r0 + r1;
    r0 = r6;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x080315F8
    r0 = r6;
    r0 += 0x4CU;
    r0 = *(u16*)(r0);
    *(u32*)(r5 + 0x20) = (u32)r0;
    r0 = r6;
    r0 += 0x4EU;
    r0 = *(u16*)(r0);
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = r6;
    r0 += 0x50U;
    r0 = *(u16*)(r0);
    *(u32*)(r5 + 0x28) = (u32)r0;
    r0 = r6;
    r0 += 0x54U;
    r0 = *(u16*)(r0);
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = r4;
    return r0;
}

// ROM Address: 0x08031620..0x08031644 (36 bytes, Thumb)
u32 sub_08031620(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x080499A8U /* &VTable_080499A8 */; // [0x08031838]
    r5 = r1;
    r1 = 0x03003174U; // [0x08031840]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08031634: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08031642;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803163E: BL 0x0803D63C
loc_08031642:
    return r0;
}

// ROM Address: 0x08031644..0x08031832 (494 bytes, Thumb)
u32 sub_08031644(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r4 += 0x100U;
    r0 = *(u32*)(r4 + 0x20);
    r1 = 0x03003174U; // [0x08031840]
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = *(u32*)(r4 + 0x28);
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = *(u32*)(r4 + 0x2C);
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x14);
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 += 0x4U;
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080316D0;
    r1 = *(u16*)(r0 + 0x2);
    r0 = 0x2CU;
    r2 = 0x086F82ECU; // [0x08031844]
    r0 *= r1;
    r7 = r0 + r2;
    r0 = 0x08759198U; // [0x0803183C]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u8*)(r0);
    r2 *= r3;
    r0 = r2 + r0;
    r2 = 0x4F8U; // (159 << 3)
    r5 = r0 + r2;
    r0 = *(u8*)(r7 + 0x14);
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r0 += 0x3CU;
    r6 = *(u32*)(r0);
loc_08031692:
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08031692;
    r0 = r5;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0803169C
    r0 = *(u8*)(r7 + 0x14);
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r0 += 0x3CU;
loc_080316A8:
    *(u32*)(r0) = (u32)r6;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_080316A8;
    r0 = r5;
    r0 += 0x4CU;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = r5;
    r0 += 0x4EU;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = r5;
    r0 += 0x50U;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = r5;
    r0 += 0x54U;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x3C) = (u32)r0;
loc_080316D0:
    r0 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    return r0;
    r4 = r0;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x08031848]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080316E4: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080316F2: BL 0x0804912C
    r6 = 0x4000000U; // (1 << 26)
    r5 = 0x0U;
    *(u16*)(r6) = (u16)r5;
    *(u16*)(r6 + 0x10) = (u16)r5;
    *(u16*)(r6 + 0x12) = (u16)r5;
    *(u16*)(r6 + 0x14) = (u16)r5;
    *(u16*)(r6 + 0x16) = (u16)r5;
    *(u16*)(r6 + 0x18) = (u16)r5;
    *(u16*)(r6 + 0x1A) = (u16)r5;
    *(u16*)(r6 + 0x1C) = (u16)r5;
    r0 = 0x00001E83U; // [0x0803184C]
    *(u16*)(r6 + 0x1E) = (u16)r5;
    *(u16*)(r6 + 0xA) = (u16)r0;
    r1 = 0x0U;
    r0 = (r0 << 25);
    r2 = 0x00009640U; // [0x08031850]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08031718: BL 0x0804912C
    r0 = 0x1EU;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x14U;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0x1U;
    stack[0] = r5; // [sp + 0x0]
    stack[1] = r5; // [sp + 0x4]
    r1 = 0x0600F000U; // [0x08031854]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x0803172E
    r0 = 0x240U; // (9 << 6)
    *(u16*)(r6) = (u16)r0;
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xCU;
    r6 = 0xD5U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r3 = r6;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x2U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x2U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08031752: BL 0x08013E64
    r5 = r4;
    r5 += 0x140U;
    *(u32*)(r5 + 0x8) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08031762
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x31U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x3U;
    r3 = r6;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x3U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0803177E: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08031788
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x86U;
    stack[0] = r2; // [sp + 0x0]
    r1 = 0x1U;
    r0 = 0x0U;
    r6 = 0xCU;
    r3 = r6;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080317A4: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080317AC
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x1U;
    r2 = 0x86U;
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r3 = r6;
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080317C6: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080317D0
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x08031858]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080317DE: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x08031858]
    r0 = 0x05000200U; // [0x08031848]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080317EA: BL 0x08049144
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x080317F2: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080317FA
    r0 = r4;
    r0 = sub_08031644(r0, r1, r2, r3); // 0x08031800: BL 0x08031644
    return r0;
    r4 = r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    *(u16*)(r3 + 0x2) = (u16)r1;
    *(u8*)(r3 + 0x1) = (u8)r4;
    r0 = 0x03003174U; // [0x08031840]
    stack[1] = r2; // [sp + 0x4]
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 3);
    r0 = r1 + r0;
    r2 = 0x0; // sp + 0x0
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r0 += 0x4U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    return r0; // BX lr
}

// ROM Address: 0x08031E84..0x08031FB0 (300 bytes, Thumb)
u32 sub_08031E84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08031E9C;
    r0 = 0x000008FCU; // [0x080321A4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08031E8E: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08031E9C;
    r0 = r5;
loc_08031E98:
    return r0;
loc_08031E9C:
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x080321A8]
    r1 = r5;
    *(u32*)(r5) = (u32)r0;
    r0 = 0x0U;
    r1 += 0x100U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    *(u32*)(r1 + 0xC) = (u32)r0;
    *(u32*)(r1 + 0x8) = (u32)r0;
    *(u32*)(r1 + 0x10) = (u32)r0;
    r1 = 0x08049B88U /* &VTable_08049B88 */; // [0x080321AC]
    r6 = r5;
    *(u32*)(r5) = (u32)r1;
    r1 = 0x23U;
    r6 += 0x114U;
    r1 = (r1 << 6);
    r7 = r5 + r1;
    *(u32*)(r6) = (u32)r0;
    *(u32*)(r7) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r7 + 0x8) = (u32)r0;
    r0 = 0x087591B8U; // [0x080321B0]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r4 = r0 + r1;
    r0 = r4;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x08031EDC
    r0 = r4;
    r0 += 0x4CU;
    r0 = *(u16*)(r0);
    *(u32*)(r7 + 0xC) = (u32)r0;
    r0 = r4;
    r0 += 0x4EU;
    r0 = *(u16*)(r0);
    *(u32*)(r7 + 0x10) = (u32)r0;
    r0 = r4;
    r0 += 0x50U;
    r0 = *(u16*)(r0);
    *(u32*)(r7 + 0x14) = (u32)r0;
    r0 = r4;
    r0 += 0x54U;
    r0 = *(u16*)(r0);
    *(u32*)(r7 + 0x18) = (u32)r0;
    r7 = 0x087591B8U; // [0x080321B0]
    r4 = 0x0U;
loc_08031F04:
    r0 = 0x34U;
    r1 = 0x083BD2F8U; // [0x080321B4]
    r0 *= r4;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08031F4E;
    r1 = *(u32*)(r7 + 0xC);
    r3 = 0x0; // sp + 0x0
    r1 = r1 + r4;
    r1 = *(u8*)(r1 + 0x2);
    *(u8*)(r3 + 0x5) = (u8)r1;
    r1 = *(u8*)(r3 + 0x5);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08031F4E;
    r1 = 0x0U;
    *(u8*)(r3 + 0x4) = (u8)r1;
    *(u16*)(r3 + 0x6) = (u16)r4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08031F32;
    r0 = (u32)(-(s32)r0);
    stack[2] = r0; // [sp + 0x8]
    goto loc_08031F3C;
loc_08031F32:
    r1 = stack[4]; // [sp + 0x10]
    r0 *= r1;
    r0 = sub_08053034(r0, r1, r2, r3); // 0x08031F36: BL 0x08053034
    stack[2] = r1; // [sp + 0x8]
loc_08031F3C:
    r0 = *(u32*)(r6);
    r2 = 0x4; // sp + 0x4
    r1 = r0 + 1;
    r0 = (r0 << 3);
    *(u32*)(r6) = (u32)r1;
    r0 = r0 + r6;
    r0 += 0x4U;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
loc_08031F4E:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 83;
    if (cmp_lhs < cmp_rhs) goto loc_08031F04;
    r4 = 0x0U;
loc_08031F56:
    r0 = 0x2CU;
    r1 = 0x086F82ECU; // [0x080321B8]
    r0 *= r4;
    r7 = r0 + r1;
    r0 = *(u32*)(r7 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08031FA6;
    r0 = 0x087591B8U; // [0x080321B0]
    r1 = r4;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_080043EE(r0, r1, r2, r3); // 0x08031F6A
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x5) = (u8)r0;
    r0 = *(u8*)(r3 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08031FA6;
    r0 = 0x1U;
    *(u8*)(r3 + 0x4) = (u8)r0;
    *(u16*)(r3 + 0x6) = (u16)r4;
    r0 = *(u32*)(r7 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08031F8A;
    r0 = (u32)(-(s32)r0);
    stack[2] = r0; // [sp + 0x8]
    goto loc_08031F94;
loc_08031F8A:
    r1 = stack[4]; // [sp + 0x10]
    r0 *= r1;
    r0 = sub_08053034(r0, r1, r2, r3); // 0x08031F8E: BL 0x08053034
    stack[2] = r1; // [sp + 0x8]
loc_08031F94:
    r0 = *(u32*)(r6);
    r2 = 0x4; // sp + 0x4
    r1 = r0 + 1;
    r0 = (r0 << 3);
    *(u32*)(r6) = (u32)r1;
    r0 = r0 + r6;
    r0 += 0x4U;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
loc_08031FA6:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 162;
    if (cmp_lhs < cmp_rhs) goto loc_08031F56;
    r0 = r5;
    goto loc_08031E98;
    return r0;
}

// ROM Address: 0x08031FCE..0x080321A2 (468 bytes, Thumb)
u32 sub_08031FCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r0 = 0x8C0U; // (35 << 6)
    r4 = r7 + r0;
    r0 = *(u32*)(r4 + 0xC);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x10);
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x14);
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = r7;
    r1 = *(u32*)(r4);
    r0 += 0x114U;
    r1 = (r1 << 3);
    r0 = r1 + r0;
    r0 += 0x4U;
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08032066;
    r1 = *(u16*)(r0 + 0x2);
    r0 = 0x2CU;
    r2 = 0x086F82ECU; // [0x080321B8]
    r0 *= r1;
    r0 = r0 + r2;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x087591B8U; // [0x080321B0]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u8*)(r0);
    r2 *= r3;
    r0 = r2 + r0;
    r2 = 0x4F8U; // (159 << 3)
    r5 = r0 + r2;
    r0 = stack[0]; // [sp + 0x0]
    r0 = *(u8*)(r0 + 0x14);
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r0 += 0x3CU;
    r6 = *(u32*)(r0);
loc_08032026:
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08032026;
    r0 = r5;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x08032030
    r0 = stack[0]; // [sp + 0x0]
    r0 = *(u8*)(r0 + 0x14);
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r0 += 0x3CU;
loc_0803203E:
    *(u32*)(r0) = (u32)r6;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0803203E;
    r0 = r5;
    r0 += 0x4CU;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = r5;
    r0 += 0x4EU;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r5;
    r0 += 0x50U;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r5;
    r0 += 0x54U;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x28) = (u32)r0;
loc_08032066:
    r0 = 0x0U;
    r7 += 0x100U;
    *(u32*)(r7 + 0x10) = (u32)r0;
    return r0;
    r4 = r0;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x080321BC]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0803207E: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0803208C: BL 0x0804912C
    r6 = 0x4000000U; // (1 << 26)
    r5 = 0x0U;
    *(u16*)(r6) = (u16)r5;
    *(u16*)(r6 + 0x10) = (u16)r5;
    *(u16*)(r6 + 0x12) = (u16)r5;
    *(u16*)(r6 + 0x14) = (u16)r5;
    *(u16*)(r6 + 0x16) = (u16)r5;
    *(u16*)(r6 + 0x18) = (u16)r5;
    *(u16*)(r6 + 0x1A) = (u16)r5;
    *(u16*)(r6 + 0x1C) = (u16)r5;
    r0 = 0x00001E83U; // [0x080321C0]
    *(u16*)(r6 + 0x1E) = (u16)r5;
    *(u16*)(r6 + 0xA) = (u16)r0;
    r1 = 0x0U;
    r0 = (r0 << 25);
    r2 = 0x00009640U; // [0x080321C4]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080320B2: BL 0x0804912C
    r0 = 0x1EU;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x14U;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0x1U;
    stack[0] = r5; // [sp + 0x0]
    stack[1] = r5; // [sp + 0x4]
    r1 = 0x0600F000U; // [0x080321C8]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x080320C8
    r0 = 0x240U; // (9 << 6)
    *(u16*)(r6) = (u16)r0;
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xCU;
    r6 = 0xD5U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r3 = r6;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x2U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x2U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080320EC: BL 0x08013E64
    r1 = 0x8C0U; // (35 << 6)
    r5 = r4 + r1;
    *(u32*)(r5 + 0x34) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080320FC
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x31U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x3U;
    r3 = r6;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x3U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08032118: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0x38) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08032122
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x86U;
    stack[0] = r2; // [sp + 0x0]
    r1 = 0x1U;
    r0 = 0x0U;
    r6 = 0xCU;
    r3 = r6;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0803213E: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08032146
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x1U;
    r2 = 0x86U;
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r3 = r6;
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08032160: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0803216A
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x080321CC]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08032178: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x080321CC]
    r0 = 0x05000200U; // [0x080321BC]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08032184: BL 0x08049144
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0803218C: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08032194
    r0 = r4;
    r0 = sub_08031FCE(r0, r1, r2, r3); // 0x0803219A: BL 0x08031FCE
    return r0;
}

// ROM Address: 0x080325C0..0x08032608 (72 bytes, Thumb)
u32 sub_080325C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r0 = 0x087591B8U; // [0x080327D0]
    r1 = 0x000005C4U; // [0x080327CC]
    r3 = *(u32*)(r0 + 0x4);
    r1 = r3 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = 0x8C0U; // (35 << 6)
    r4 = r7 + r1;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08032608(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080326C4(r0, r1, r2, r3);
    r1 = 0x0831947CU; // [0x080327D4]
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_080326C6(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08032602;
    r0 = 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = *(u32*)(r4);
    r3 = 0x0U;
    r0 += 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080325F8
    r0 = r7;
    r0 = sub_08031FCE(r0, r1, r2, r3); // 0x080325FE: BL 0x08031FCE
loc_08032602:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08032608..0x080326C8 (192 bytes, Thumb)
u32 sub_08032608(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r7;
    r1 += 0x114U;
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08032602(r0, r1, r2, r3);
    r2 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r4);
    r3 = *(u32*)(r4 + 0x8);
    r1 = (r1 << 3);
    r5 = r1 + r2;
    r5 += 0x4U;
    r2 = *(u32*)(r5 + 0x4);
    r1 = *(u32*)(r0 + 0xC);
    r2 *= r3;
    r3 = 0x000004F4U; // [0x080327D8]
    r1 = r1 + r3;
    r3 = *(u32*)(r1);
    r2 = r3 + r2;
loc_08032630:
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08032630;
    r1 = *(u8*)(r5);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803264C;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803266E;
    r1 = *(u32*)(r4 + 0x8);
    r6 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803266E;
    goto loc_0803265C;
loc_0803264C:
    r1 = *(u16*)(r5 + 0x2);
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r4 + 0x8);
    r0 = r0 + r1;
    r1 = *(u8*)(r0 + 0x2);
    r1 = r1 - r2;
    *(u8*)(r0 + 0x2) = (u8)r1;
    goto loc_0803266E;
loc_0803265C:
    r0 = 0x087591B8U; // [0x080327D0]
    r1 = *(u16*)(r5 + 0x2);
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08004468(r0, r1, r2, r3); // 0x08032662
    r0 = *(u32*)(r4 + 0x8);
    r6 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) goto loc_0803265C;
loc_0803266E:
    r0 = *(u8*)(r5 + 0x1);
    r1 = *(u32*)(r4 + 0x8);
    r0 = r0 - r1;
    *(u8*)(r5 + 0x1) = (u8)r0;
    r0 = 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = *(u8*)(r5 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080326B2;
    r1 = stack[1]; // [sp + 0x4]
    r0 = *(u32*)(r4);
    r2 = *(u32*)(r1);
    r2 -= 0x1U;
    *(u32*)(r1) = (u32)r2;
    r2 = r2 - r0;
    if (cmp_lhs == cmp_rhs) goto loc_0803269E;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = r0;
    r1 += 0xCU;
    r2 = (r2 << 3);
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803269A: BL 0x08049138
loc_0803269E:
    r1 = stack[1]; // [sp + 0x4]
    r0 = *(u32*)(r1);
    r1 = *(u32*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_080326B2;
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080326B2;
    r3 = 0x0U;
    *(u32*)(r4) = (u32)r3;
loc_080326B2:
    r7 += 0x100U;
    r3 = 0x0U;
    r1 = 0x0831947CU; // [0x080327D4]
    *(u32*)(r7 + 0x10) = (u32)r3;
    r1 += 0x18U;
    r2 = 0x40U;
    r0 = stack[2]; // [sp + 0x8]
    return sub_080326C8(r0, r1, r2, r3);
    return sub_080326CE(r0, r1, r2, r3);
    return sub_080326D8(r0, r1, r2, r3);
}

// ROM Address: 0x080326D8..0x080326F4 (28 bytes, Thumb)
u32 sub_080326D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = *(u32*)(r4);
    r3 = 0x0U;
    r0 -= 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080326E8
    r0 = r7;
    r0 = sub_08031FCE(r0, r1, r2, r3); // 0x080326EE: BL 0x08031FCE
    return sub_08032602(r0, r1, r2, r3);
}

// ROM Address: 0x080326F4..0x0803274C (88 bytes, Thumb)
u32 sub_080326F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = 0x087591B8U; // [0x080327D0]
    r1 = r6;
    r0 = *(u32*)(r0);
    r1 += 0xFFU;
    r0 = *(u16*)(r0 + 0x4);
    r1 += 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r1 = 0x083192A8U; // [0x080327DC]
    r0 = (r0 << 26);
    r2 = r1;
    r2 += 0x1D4U;
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x087591B8U; // [0x080327D0]
    r7 = r1;
    r1 = 0x000005C4U; // [0x080327CC]
    r2 = *(u32*)(r2 + 0x4);
    r7 += 0xFFU;
    r5 = r2 + r1;
    r1 = 0x8C0U; // (35 << 6)
    r4 = r6 + r1;
    r7 += 0xC9U;
    r0 = (r0 >> 31);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08032758(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) return sub_0803274C(r0, r1, r2, r3);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r5;
    r1 = stack[1]; // [sp + 0x4]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08032740
    r0 = stack[2]; // [sp + 0x8]
    r3 = 0x0U;
    *(u32*)(r0 + 0x10) = (u32)r3;
    return sub_08032758(r0, r1, r2, r3);
}

// ROM Address: 0x0803274C..0x080327A2 (86 bytes, Thumb)
u32 sub_0803274C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r7;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08032754
    r0 = 0x087591B8U; // [0x080327D0]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0803279C;
    r0 = r6;
    r1 = *(u32*)(r4);
    r0 += 0x114U;
    r1 = (r1 << 3);
    r1 = r1 + r0;
    r1 = *(u8*)(r1 + 0x5);
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08032790;
    r0 += 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r4 = 0x0U;
    r3 = r4;
    r2 = 0x40U;
    r0 = r5;
    r1 = stack[1]; // [sp + 0x4]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08032786
    r0 = stack[2]; // [sp + 0x8]
    *(u32*)(r0 + 0x10) = (u32)r4;
    goto loc_0803279C;
loc_08032790:
    r1 = r7;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08032798
loc_0803279C:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080327A2..0x080327CA (40 bytes, Thumb)
u32 sub_080327A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xFFU;
    r2 += 0x15U;
    r2 = *(u32*)(r2 + r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080327B0;
    r0 = 0x0U;
    return r0; // BX lr
loc_080327B0:
    r2 = 0x14U;
    *(u32*)(r1) = (u32)r2;
    r2 = 0x8C0U; // (35 << 6)
    r0 = r0 + r2;
    r2 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r0 = r2 - r0;
    r0 = (r0 << 4);
    r0 += 0x17U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080327FE..0x0803281C (30 bytes, Thumb)
u32 sub_080327FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032804: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803280C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803281A;
    r1 = 0x0804D2E8U; // [0x08032820]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803281A:
    return r0;
}

// ROM Address: 0x0803281C..0x0803282A (14 bytes, Thumb)
u32 sub_0803281C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[216] = r1; // [sp + 0x360]
    r5 = (r6 >> 1);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_080327F4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x0803282A..0x0803283C (18 bytes, Thumb)
u32 sub_0803282A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = *(u8*)(r1 + 0x10);
    r5 = r2;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_0803283C(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803283C..0x0803287E (66 bytes, Thumb)
u32 sub_0803283C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r6 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08032846;
    r0 = 0x0U;
    return r0;
loc_08032846:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032850: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08032866;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032862: BL __call_via_r3
loc_08032866:
    r0 = 0x3CU;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x1U;
    r0 ^= r1;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803287A;
    *(u8*)(r4 + 0x10) = (u8)r5;
    r0 = 0x1U;
    return r0;
loc_0803287A:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803287E..0x080328B6 (56 bytes, Thumb)
u32 sub_0803287E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = sub_0803282A(r0, r1, r2, r3); // 0x08032884: BL 0x0803282A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08032944(r0, r1, r2, r3);
    r5 = r4;
    r5 += 0x1A0U;
    r0 = *(u32*)(r5 + 0x4);
    r1 = *(u32*)(r5);
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r0 = *(u8*)(r4 + 0x10);
    r6 = sp;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080328C6(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080328BE(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_080328B6(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_080328CC(r0, r1, r2, r3);
    r0 = stack[0]; // [sp + 0x0]
    r0 += 0x40U;
    stack[0] = r0; // [sp + 0x0]
    return sub_080328CC(r0, r1, r2, r3);
}

// ROM Address: 0x080328B6..0x08032948 (146 bytes, Thumb)
u32 sub_080328B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[0]; // [sp + 0x0]
    r0 -= 0x40U;
    stack[0] = r0; // [sp + 0x0]
    goto loc_080328CC;
    r0 = stack[1]; // [sp + 0x4]
    r0 -= 0x40U;
    stack[1] = r0; // [sp + 0x4]
    goto loc_080328CC;
    r0 = stack[1]; // [sp + 0x4]
    r0 += 0x40U;
    stack[1] = r0; // [sp + 0x4]
loc_080328CC:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080328D6: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080328E4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08032916;
    r0 = stack[0]; // [sp + 0x0]
    *(u32*)(r5) = (u32)r0;
    r1 = stack[1]; // [sp + 0x4]
    r0 = r4;
    *(u32*)(r5 + 0x4) = (u32)r1;
    r1 = *(u32*)(r4);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080328FE: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08032936;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032910: BL __call_via_r3
    goto loc_08032936;
loc_08032916:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032920: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08032936;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032932: BL __call_via_r3
loc_08032936:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032940: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08032948..0x08032A84 (316 bytes, Thumb)
u32 sub_08032948(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = *(u8*)(r1 + 0x10);
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r5 = r2;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803295C: BL __call_via_r3
    r0 = 0x03001C34U; // [0x08032B90]
    *(u8*)(r4 + 0x10) = (u8)r5;
    r1 = *(u32*)(r0);
    r0 = 0x0U;
    stack[3] = r0; // [sp + 0xC]
    stack[4] = r0; // [sp + 0x10]
    r0 = r4;
    r0 += 0xFFU;
    r3 = 0x800U; // (1 << 11)
    r0 += 0xA1U;
    r2 = r5;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080329E4;
    r6 = (u32)(-(s32)r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080329C6;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_080329A8;
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08032A04;
    r1 += 0x1A0U;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r0);
    r1 = r1 - r2;
    stack[2] = r1; // [sp + 0x8]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803299A;
    r1 = (u32)(-(s32)r1);
loc_0803299A:
    r1 = ((u32)((s32)r1 >> 8));
    r2 = ((u32)((s32)r1 >> 31));
    r2 = (r2 >> 29);
    r1 = r2 + r1;
    r5 = ((u32)((s32)r1 >> 3));
    stack[3] = r3; // [sp + 0xC]
    goto loc_08032A04;
loc_080329A8:
    r1 += 0x1A0U;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r0);
    r1 = r1 - r2;
    stack[2] = r1; // [sp + 0x8]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080329B8;
    r1 = (u32)(-(s32)r1);
loc_080329B8:
    r1 = ((u32)((s32)r1 >> 8));
    r2 = ((u32)((s32)r1 >> 31));
    r2 = (r2 >> 29);
    r1 = r2 + r1;
    r5 = ((u32)((s32)r1 >> 3));
    stack[3] = r6; // [sp + 0xC]
    goto loc_08032A04;
loc_080329C6:
    r1 += 0x1A0U;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r0);
    r1 = r1 - r2;
    stack[2] = r1; // [sp + 0x8]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080329D6;
    r1 = (u32)(-(s32)r1);
loc_080329D6:
    r1 = ((u32)((s32)r1 >> 8));
    r2 = ((u32)((s32)r1 >> 31));
    r2 = (r2 >> 29);
    r1 = r2 + r1;
    r5 = ((u32)((s32)r1 >> 3));
    stack[4] = r6; // [sp + 0x10]
    goto loc_08032A04;
loc_080329E4:
    r1 += 0x1A4U;
    r2 = 0xFFU;
    r2 += 0xA5U;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r2 + r4);
    r1 = r1 - r2;
    stack[2] = r1; // [sp + 0x8]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080329F8;
    r1 = (u32)(-(s32)r1);
loc_080329F8:
    r1 = ((u32)((s32)r1 >> 8));
    r2 = ((u32)((s32)r1 >> 31));
    r2 = (r2 >> 29);
    r1 = r2 + r1;
    r5 = ((u32)((s32)r1 >> 3));
    stack[4] = r3; // [sp + 0x10]
loc_08032A04:
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r6 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    if (cmp_lhs <= cmp_rhs) goto loc_08032A50;
loc_08032A12:
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[3]; // [sp + 0xC]
    r0 = r0 + r1;
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[4]; // [sp + 0x10]
    r0 = r0 + r1;
    stack[2] = r0; // [sp + 0x8]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x4; // sp + 0x4
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032A2C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08032A4A;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032A40: BL __call_via_r3
    r0 = 0x0U;
loc_08032A46:
    return r0;
loc_08032A4A:
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08032A12;
loc_08032A50:
    *(u8*)(r4 + 0x10) = (u8)r7;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032A5C: BL __call_via_r3
    r0 = 0x1U;
    goto loc_08032A46;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08032A76;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_08032A76:
    r0 = 0x03001C34U; // [0x08032B90]
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08032A84(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08032A84..0x08032B7C (248 bytes, Thumb)
u32 sub_08032A84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x8; // sp + 0x8
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08032A86: BL 0x0800FDFA
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
    r0 = 0x20; // sp + 0x20
    r1 = r6;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08032AAA: BL 0x0800FDFA
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
    r0 = r0 - r1;
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[13]; // [sp + 0x34]
    stack[0] = r0; // [sp + 0x0]
    r1 = r1 - r2;
    r2 = 0x0U;
    stack[14] = r2; // [sp + 0x38]
    r2 = r0 + 1;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    stack[1] = r1; // [sp + 0x4]
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08032AE8;
    r2 = r1 + 1;
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08032AEC;
loc_08032AE8:
    r2 = 0x1U;
    stack[14] = r2; // [sp + 0x38]
loc_08032AEC:
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08032AF4;
    r2 = (u32)(-(s32)r0);
loc_08032AF4:
    r3 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08032AFC;
    r3 = (u32)(-(s32)r1);
loc_08032AFC:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08032B16;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08032B08;
    r7 = 0x3U;
    goto loc_08032B0A;
loc_08032B08:
    r7 = 0x2U;
loc_08032B0A:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08032B12;
    r5 = 0x0U;
    goto loc_08032B2A;
loc_08032B12:
    r5 = 0x1U;
    goto loc_08032B2A;
loc_08032B16:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08032B1E;
    r7 = 0x0U;
    goto loc_08032B20;
loc_08032B1E:
    r7 = 0x1U;
loc_08032B20:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08032B28;
    r5 = 0x3U;
    goto loc_08032B2A;
loc_08032B28:
    r5 = 0x2U;
loc_08032B2A:
    r2 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08032B68;
    r2 = r7;
    r1 = r6;
    r0 = r4;
    r0 = sub_08032948(r0, r1, r2, r3); // 0x08032B36: BL 0x08032948
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08032B4A;
    r2 = r7;
    r1 = r6;
    r0 = r4;
    r0 = sub_0803287E(r0, r1, r2, r3); // 0x08032B44: BL 0x0803287E
    goto loc_08032B68;
loc_08032B4A:
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_08032948(r0, r1, r2, r3); // 0x08032B50: BL 0x08032948
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08032B64;
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_0803287E(r0, r1, r2, r3); // 0x08032B5E: BL 0x0803287E
    goto loc_08032B68;
loc_08032B64:
    r2 = 0x1U;
    stack[14] = r2; // [sp + 0x38]
loc_08032B68:
    r2 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08032B78;
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_0803282A(r0, r1, r2, r3); // 0x08032B74: BL 0x0803282A
loc_08032B78:
    r0 = 0x0U;
    return sub_08032A80(r0, r1, r2, r3);
}

// ROM Address: 0x08032B98..0x08032C4A (178 bytes, Thumb)
u32 sub_08032B98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032BA8: BL __call_via_r3
    r7 = r5;
    r7 += 0x1A0U;
    r4 = 0x0U;
    r6 = r7 + 4;
    r0 = 0x2C; // sp + 0x2C
loc_08032BB8:
    r0 = 0xC0U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08032BBA
    r0 -= 0x60U;
    stack[9] = r0; // [sp + 0x24]
    r0 = 0xC0U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08032BC4
    r0 -= 0x60U;
    stack[10] = r0; // [sp + 0x28]
    r0 = *(u32*)(r7);
    r1 = stack[9]; // [sp + 0x24]
    r0 = r0 + r1;
    r1 = *(u32*)(r6);
    r2 = stack[10]; // [sp + 0x28]
    stack[5] = r0; // [sp + 0x14]
    r1 = r1 + r2;
    stack[6] = r1; // [sp + 0x18]
    stack[14] = r1; // [sp + 0x38]
    stack[8] = r1; // [sp + 0x20]
    stack[13] = r0; // [sp + 0x34]
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u32*)(r7);
    r1 = stack[9]; // [sp + 0x24]
    r0 = r0 - r1;
    r1 = *(u32*)(r6);
    r2 = stack[10]; // [sp + 0x28]
    stack[5] = r0; // [sp + 0x14]
    r1 = r1 - r2;
    stack[7] = r0; // [sp + 0x1C]
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x2FU;
    stack[6] = r1; // [sp + 0x18]
    stack[8] = r1; // [sp + 0x20]
    stack[12] = r1; // [sp + 0x30]
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08032BFE: BL 0x08000158
    r2 = r0;
    r0 = 0x087591E8U; // [0x08032D30]
    r2 += 0x8U;
    r1 = 0x34; // sp + 0x34
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08009904(r0, r1, r2, r3); // 0x08032C0C: BL 0x08009904
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08032C2C;
    r0 = 0x2FU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08032C16: BL 0x08000158
    r2 = r0;
    r0 = 0x087591E8U; // [0x08032D30]
    r2 += 0x8U;
    r1 = 0x2C; // sp + 0x2C
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08009904(r0, r1, r2, r3); // 0x08032C24: BL 0x08009904
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08032C32;
loc_08032C2C:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_08032BB8;
loc_08032C32:
    cmp_lhs = (s32)r4; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_08032C4A(r0, r1, r2, r3);
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032C40: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08032C4A..0x08032D28 (222 bytes, Thumb)
u32 sub_08032C4A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x087591E8U; // [0x08032D30]
    r0 = *(u32*)(r0);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08032C4E
    r4 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs < cmp_rhs) goto loc_08032CAA;
    r0 = (r4 << 2);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08032C5C
    r1 = (r4 << 2);
    r0 = r0 + r1;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x14; // sp + 0x14
    r1 = r5;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08032C6A
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    r1 = r0 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = stack[6]; // [sp + 0x18]
    stack[2] = r1; // [sp + 0x8]
    r0 = r0 + r2;
    stack[3] = r0; // [sp + 0xC]
    r0 = ((u32)((s32)r0 >> 1));
    stack[10] = r0; // [sp + 0x28]
    stack[3] = r0; // [sp + 0xC]
    r0 = stack[4]; // [sp + 0x10]
    r2 = 0x37U;
    stack[9] = r1; // [sp + 0x24]
    stack[2] = r2; // [sp + 0x8]
    r3 = 0x4U;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x08032D34]
    stack[1] = r4; // [sp + 0x4]
    r1 = 0x24; // sp + 0x24
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08032C9C
    r1 = r0;
    r0 = 0x087591E8U; // [0x08032D30]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08032CA6: BL 0x0801191A
loc_08032CAA:
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r7) = (u32)r0;
    r0 = stack[14]; // [sp + 0x38]
    *(u32*)(r6) = (u32)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032CBC: BL __call_via_r3
    r0 = 0x28CU; // (163 << 2)
    r6 = r5 + r0;
    r0 = *(u32*)(r6);
    r1 = 0x087591E8U; // [0x08032D30]
    r0 = r0 + r4;
    r0 = ((u32)((s32)r0 >> 1));
    *(u32*)(r6) = (u32)r0;
    r4 = 0xC; // sp + 0xC
    r2 = 0x20U;
    r1 += 0x8U;
    r0 = r4;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08032CD8: BL 0x08049138
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x78);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08032CE4: BL 0x08046AA2
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[11]; // [sp + 0x2C]
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x18) = (u16)r0;
    r0 = stack[12]; // [sp + 0x30]
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x08032D3C]
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x1A) = (u16)r0;
    r0 = 0x000006ACU; // [0x08032D38]
    r3 = 0x0U;
    r2 = r0 + r1;
    r1 = r4;
    r3 = ~r3;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x08032D06
    r4 = r0;
    r1 = r0;
    r0 = 0x087591E8U; // [0x08032D30]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08032D12: BL 0x0801191A
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08032D24;
    r0 = 0x28CU; // (163 << 2)
    r1 = *(u32*)(r6);
    r0 = r4 + r0;
    *(u32*)(r0) = (u32)r1;
loc_08032D24:
    r0 = 0x1U;
    return sub_08032C46(r0, r1, r2, r3);
}

// ROM Address: 0x08032D44..0x08032DB2 (110 bytes, Thumb)
u32 sub_08032D44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r6 = r2;
    r0 = 0x2FU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08032D4E: BL 0x08000158
    r2 = r0;
    r5 = 0x0875921CU; // [0x08032DC4]
    r1 = 0x5U;
    r0 = *(u32*)(r5);
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x08032D5A
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) return sub_08032DB2(r0, r1, r2, r3);
    r1 = r4;
    r0 = 0x10; // sp + 0x10
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08032D66
    r1 = r4;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08032D6E
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08032D74
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08032DAE;
    r0 = stack[4]; // [sp + 0x10]
    r2 = stack[6]; // [sp + 0x18]
    r3 = stack[7]; // [sp + 0x1C]
    r2 = r0 + r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = ((u32)((s32)r2 >> 1));
    r0 = stack[5]; // [sp + 0x14]
    stack[0] = r2; // [sp + 0x0]
    r0 = r0 + r3;
    stack[1] = r0; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r2; // [sp + 0x8]
    r2 = 0x38U;
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x0U;
    r1 = 0x8; // sp + 0x8
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x08032DA2
    r1 = r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x08032DAA: BL 0x0801191A
loc_08032DAE:
    return r0;
}

// ROM Address: 0x08032DB2..0x08032DC4 (18 bytes, Thumb)
u32 sub_08032DB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x74);
    r3 = r2 + r1;
    r2 = r6;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032DBE: BL __call_via_r3
    return sub_08032DAE(r0, r1, r2, r3);
}

// ROM Address: 0x08032DC8..0x08032F6C (420 bytes, Thumb)
u32 sub_08032DC8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    stack[14] = r0; // [sp + 0x38]
    r4 = r1;
    r0 = 0x2FU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08032DD4: BL 0x08000158
    stack[13] = r0; // [sp + 0x34]
    r0 = 0x0875922CU; // [0x08032F70]
    r2 = 0x34; // sp + 0x34
    r1 = 0x6U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08032DE2
    r5 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08032DEE;
    r5 = stack[16]; // [sp + 0x40]
loc_08032DEE:
    r0 = 0xA3U;
    r1 = 0x28CU; // (163 << 2)
    r0 = (r0 << 2);
    r0 = r4 + r0;
    r1 = r5 + r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r0);
    r6 = r4;
    r1 = r2 + r1;
    *(u32*)(r0) = (u32)r1;
    r0 = r5;
    r0 += 0x1A0U;
    r6 += 0x1A0U;
    r1 = *(u32*)(r6);
    r2 = *(u32*)r0; r0 += 4;
    r7 = r6 + 4;
    r1 = r1 + r2;
    r2 = *(u32*)(r6 + 0x4);
    r0 = *(u32*)(r0);
    stack[5] = r1; // [sp + 0x14]
    r0 = r2 + r0;
    stack[6] = r0; // [sp + 0x18]
    r0 = r1;
    r1 = stack[6]; // [sp + 0x18]
    stack[7] = r0; // [sp + 0x1C]
    stack[8] = r1; // [sp + 0x20]
    r1 = (r0 << 8);
    r0 = 0x200U; // (1 << 9)
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08032E2E: BL 0x08046E58
    stack[4] = r0; // [sp + 0x10]
    r0 = stack[8]; // [sp + 0x20]
    r1 = (r0 << 8);
    r0 = 0x200U; // (1 << 9)
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08032E3C: BL 0x08046E58
    r1 = stack[4]; // [sp + 0x10]
    stack[6] = r0; // [sp + 0x18]
    r0 = r1;
    stack[5] = r1; // [sp + 0x14]
    r1 = stack[6]; // [sp + 0x18]
    stack[9] = r0; // [sp + 0x24]
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x2FU;
    stack[10] = r1; // [sp + 0x28]
    stack[12] = r1; // [sp + 0x30]
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08032E54: BL 0x08000158
    r2 = r0;
    r0 = 0x0875922CU; // [0x08032F70]
    r2 += 0x8U;
    r1 = 0x2C; // sp + 0x2C
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08009904(r0, r1, r2, r3); // 0x08032E62: BL 0x08009904
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08032E72;
    r0 = *(u32*)(r6);
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u32*)(r7);
    stack[12] = r0; // [sp + 0x30]
loc_08032E72:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032E7C: BL __call_via_r3
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r7) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032E92: BL __call_via_r3
    r6 = 0x0875922CU; // [0x08032F70]
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08032E9A
    r7 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08032EF4;
    r0 = (r7 << 2);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08032EA8
    r1 = (r7 << 2);
    r0 = r0 + r1;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x14; // sp + 0x14
    r1 = r4;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08032EB6
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    r1 = r0 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = stack[6]; // [sp + 0x18]
    stack[2] = r1; // [sp + 0x8]
    r0 = r0 + r2;
    stack[3] = r0; // [sp + 0xC]
    r0 = ((u32)((s32)r0 >> 1));
    stack[10] = r0; // [sp + 0x28]
    stack[3] = r0; // [sp + 0xC]
    r0 = stack[4]; // [sp + 0x10]
    r2 = 0x37U;
    stack[9] = r1; // [sp + 0x24]
    stack[2] = r2; // [sp + 0x8]
    r3 = 0x4U;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x08032F74]
    stack[1] = r7; // [sp + 0x4]
    r1 = 0x24; // sp + 0x24
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08032EE8
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x08032EF0: BL 0x0801191A
loc_08032EF4:
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08032EF6
    r7 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08032F54;
    r7 = (r7 << 2);
    r0 = r7;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08032F06
    r7 = r0 + r7;
    r0 = 0x14; // sp + 0x14
    r1 = r5;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08032F10
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    r1 = r0 + r1;
    r0 = stack[6]; // [sp + 0x18]
    stack[3] = r1; // [sp + 0xC]
    r0 = r0 + r2;
    stack[4] = r0; // [sp + 0x10]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[3] = r1; // [sp + 0xC]
    stack[9] = r1; // [sp + 0x24]
    r1 = 0x1U;
    stack[10] = r0; // [sp + 0x28]
    r1 = (r1 << 10);
    r2 = 0x37U;
    stack[1] = r1; // [sp + 0x4]
    stack[4] = r0; // [sp + 0x10]
    stack[0] = r7; // [sp + 0x0]
    r3 = 0x24; // sp + 0x24
    r1 = r3;
    r7 = 0x4U;
    r0 = 0x0U;
    stack[2] = r2; // [sp + 0x8]
    r2 = 0x086FD9D0U; // [0x08032F74]
    r3 = r7;
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08032F48
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x08032F50: BL 0x0801191A
loc_08032F54:
    r1 = r5;
    r0 = *(u32*)(r6);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08032F58
    r2 = r4;
    r1 = 0x20U;
    r0 = *(u32*)(r6);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08032F62
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08032F6C..0x08032F70 (4 bytes, Thumb)
u32 sub_08032F6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030031FCU; // [0x08032F78]
    return r0; // BX lr
}

// ROM Address: 0x08032F84..0x08032F98 (20 bytes, Thumb)
u32 sub_08032F84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u32*)(r2 + 0x4);
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08032F98(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08032F98..0x08032FE0 (72 bytes, Thumb)
u32 sub_08032F98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = sp;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r0 -= 0x1CU;
    *(u32*)r5 = r3; r5 += 4;
    r1 = *(u8*)(r0);
    r2 = 0x290U; // (41 << 4)
    r2 = r4 + r2;
    *(u8*)(r2) = (u8)r1;
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u8*)(r0);
    r5 -= 0x1CU;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08032FC6;
    r0 = 0x4U;
    r1 = stack[6]; // [sp + 0x18]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08032FC0: BL 0x08046E58
    stack[6] = r0; // [sp + 0x18]
loc_08032FC6:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x58);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08032FD0: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08032FDC;
    r0 = 0x2U;
    return sub_08032F94(r0, r1, r2, r3);
loc_08032FDC:
    r0 = 0x1U;
    return sub_08032F94(r0, r1, r2, r3);
}

// ROM Address: 0x08032FE0..0x080330BC (220 bytes, Thumb)
u32 sub_08032FE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08032FF2;
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08032FEA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033000;
loc_08032FF2:
    r1 = 0x0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r2 = 0x0804C690U /* &VTable_0804C690 */; // [0x080331D0]
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x14) = (u32)r4;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_08033000:
    return r0;
    r4 = r1;
    r1 = 0x0U;
    r6 = r0;
    r0 = 0x38U;
    *(u16*)(r4 + 0x12) = (u16)r1;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0875925CU; // [0x080331D4]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r5 = r0 + r1;
    r7 = r1 - 4;
    r0 = *(u32*)(r7);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08033024
    r1 = 0x300U; // (3 << 8)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803307A;
    r0 = r4;
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
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r5);
    r0 = r0 + r1;
    r1 = stack[4]; // [sp + 0x10]
    r2 = *(u32*)(r5 + 0x4);
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 + r2;
    r2 = 0x0871DA68U; // [0x080331D8]
    stack[2] = r1; // [sp + 0x8]
    stack[6] = r1; // [sp + 0x18]
    stack[5] = r0; // [sp + 0x14]
    r3 = r4;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r5 + 0x8);
    r0 = 0x0U;
    r1 = 0x14; // sp + 0x14
    r0 = sub_080206B8(r0, r1, r2, r3); // 0x08033068
    *(u32*)(r6 + 0x10) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033080;
    r1 = r0;
    r0 = *(u32*)(r7);
    r0 = List_Append(r0, r1, r2, r3); // 0x08033076: BL 0x0801191A
loc_0803307A:
    r0 = *(u32*)(r6 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803308E;
loc_08033080:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803308A: BL __call_via_r3
loc_0803308E:
    return r0;
    r0 = r1;
    r1 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 90;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080330A8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080330A4: BL __call_via_r3
loc_080330A8:
    return r0;
    r4 = r1;
    r1 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_080330BC(r0, r1, r2, r3);
    r1 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r1;
    return sub_080330C6(r0, r1, r2, r3);
}

// ROM Address: 0x080330BC..0x0803311C (96 bytes, Thumb)
u32 sub_080330BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x8U;
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    r1 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r1 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_08033112;
    r1 = r4;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x0875925CU; // [0x080331D4]
    r2 += 0x30U;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = stack[2]; // [sp + 0x8]
    r3 = *(u32*)(r1);
    r2 = r2 + r3;
    r3 = stack[3]; // [sp + 0xC]
    r1 = *(u32*)(r1 + 0x4);
    stack[0] = r2; // [sp + 0x0]
    r1 = r3 + r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    r2 = stack[1]; // [sp + 0x4]
    stack[4] = r1; // [sp + 0x10]
    stack[5] = r2; // [sp + 0x14]
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r0 + 0x10);
    r2 = 0x10; // sp + 0x10
    r0 = sub_080207D2(r0, r1, r2, r3); // 0x0803310E
loc_08033112:
    r0 = *(u16*)(r4 + 0x12);
    r0 += 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    return r0;
}

// ROM Address: 0x0803311C..0x080331A0 (132 bytes, Thumb)
u32 sub_0803311C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803312A;
    r0 = sub_0802082A(r0, r1, r2, r3); // 0x08033126
loc_0803312A:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803312C: BL 0x0803D63C
    return r0;
    r5 = r0;
    r0 = 0x03001C34U; // [0x080331DC]
    r7 = 0x0U;
    r0 = *(u32*)(r0);
    r4 = r1;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x080331E0]
    r1 = r7;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[1] = r7; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    if (cmp_lhs == cmp_rhs) goto loc_08033154;
    r1 = r4;
    r1 += 0x18CU;
loc_08033154:
    r0 = sp;
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08033156
    r0 = 0x18U;
    r6 = *(u32*)(r5 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803315E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033172;
    r1 = 0x0804C690U /* &VTable_0804C690 */; // [0x080331D0]
    *(u32*)(r0 + 0xC) = (u32)r7;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x14) = (u32)r6;
    *(u32*)(r0 + 0x10) = (u32)r7;
loc_08033172:
    *(u32*)(r5 + 0x8) = (u32)r0;
    r5 = r0;
    r1 = 0x3U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803317A
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08033182
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x080331E4]
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803319C;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033198: BL __call_via_r3
loc_0803319C:
    return r0;
}

// ROM Address: 0x080331A0..0x080331B4 (20 bytes, Thumb)
u32 sub_080331A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080331AC;
    r1 = *(u32*)(r1 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080331B0;
loc_080331AC:
    r0 = 0x1U;
    return r0; // BX lr
loc_080331B0:
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080331B4..0x080331C0 (12 bytes, Thumb)
u32 sub_080331B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080331BA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x080331C0..0x08033208 (72 bytes, Thumb)
u32 sub_080331C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080331CC;
    r1 = 0x0804A6C0U /* &VTable_0804A6C0 */; // [0x080331E8]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
loc_080331CC:
    return r0;
    r0 = r0;
    *(u32*)r6 = r4; r6 += 4;
    *(u32*)r6 = r7; r6 += 4;
    r4 = (r0 >> 32);
    stack[92] = r2; // [sp + 0x170]
    r5 = (r6 >> 1);
    if (cmp_lhs >= cmp_rhs) return sub_080332AC(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r6 = 0x080334ECU;
    r4 = (r0 >> 32);
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080331FC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08033208(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08033208..0x080332B8 (176 bytes, Thumb)
u32 sub_08033208(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x08033300]
    r1 = *(u32*)(r0);
    r0 = 0x8; // sp + 0x8
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803320E: BL 0x0800FDFA
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
    r0 = 0x20; // sp + 0x20
    r1 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08033232: BL 0x0800FDFA
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
    r0 = r0 - r1;
    stack[12] = r1; // [sp + 0x30]
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[13]; // [sp + 0x34]
    stack[0] = r0; // [sp + 0x0]
    r1 = r1 - r2;
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[1] = r1; // [sp + 0x4]
    stack[15] = r1; // [sp + 0x3C]
    stack[14] = r0; // [sp + 0x38]
    if (cmp_lhs >= cmp_rhs) goto loc_0803326C;
    r0 = (u32)(-(s32)r2);
loc_0803326C:
    r1 = r0;
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08033276;
    r0 = (u32)(-(s32)r0);
loc_08033276:
    stack[12] = r1; // [sp + 0x30]
    stack[13] = r0; // [sp + 0x34]
    r3 = *(u8*)(r4 + 0x10);
    r0 = r1;
    r1 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080332CA(r0, r1, r2, r3);
    r2 = 0xFU;
    r2 = ~r2;
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080332B8(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_080332A6;
    cmp_lhs = (s32)r3; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_080332DC(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs >= cmp_rhs) goto loc_080332A2;
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs <= cmp_rhs) goto loc_080332A2;
    r0 = 0x1U;
    return sub_08033204(r0, r1, r2, r3);
loc_080332A2:
    r0 = 0x0U;
    return sub_08033204(r0, r1, r2, r3);
loc_080332A6:
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs >= cmp_rhs) goto loc_080332B4;
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080332B4;
    r0 = 0x1U;
    return sub_08033204(r0, r1, r2, r3);
loc_080332B4:
    r0 = 0x0U;
    return sub_08033204(r0, r1, r2, r3);
}

// ROM Address: 0x080332B8..0x080332E0 (40 bytes, Thumb)
u32 sub_080332B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs >= cmp_rhs) goto loc_080332C6;
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080332C6;
    r0 = 0x1U;
    return sub_08033204(r0, r1, r2, r3);
loc_080332C6:
    r0 = 0x0U;
    return sub_08033204(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs >= cmp_rhs) goto loc_080332D8;
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs <= cmp_rhs) goto loc_080332D8;
    r0 = 0x1U;
    return sub_08033204(r0, r1, r2, r3);
loc_080332D8:
    r0 = 0x0U;
    return sub_08033204(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08033204(r0, r1, r2, r3);
}

// ROM Address: 0x080332E0..0x08033334 (84 bytes, Thumb)
u32 sub_080332E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080332E6: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080332EE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080332FC;
    r1 = 0x0804BDB8U; // [0x08033304]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_080332FC:
    return r0;
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    return r0;
    r4 = (r0 >> 32);
    r2 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x214U; // (133 << 2)
    r2 = r2 + r0;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0803331E
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08033338(r0, r1, r2, r3);
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08033334(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08033334..0x0803333C (8 bytes, Thumb)
u32 sub_08033334(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08033330(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08033330(r0, r1, r2, r3);
}

// ROM Address: 0x0803333C..0x08033380 (68 bytes, Thumb)
u32 sub_0803333C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r4 += 0xCU;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08033344: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033352;
    r1 = 0x08049DC8U; // [0x080333A4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08033352:
    return r0;
    r2 = r1;
    r1 = r0;
    r0 = 0x214U; // (133 << 2)
    r1 += 0xCU;
    r2 = r2 + r0;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0803336C
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_08033380(r0, r1, r2, r3);
    r0 = stack[1]; // [sp + 0x4]
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    return r0;
}

// ROM Address: 0x08033380..0x08033384 (4 bytes, Thumb)
u32 sub_08033380(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0803337C(r0, r1, r2, r3);
}

// ROM Address: 0x08033384..0x080333A4 (32 bytes, Thumb)
u32 sub_08033384(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = r0;
    r0 = 0x214U; // (133 << 2)
    r1 += 0xCU;
    r2 = r2 + r0;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0803339C
    return r0;
}

// ROM Address: 0x080333A4..0x080333A6 (2 bytes, Thumb)
u32 sub_080333A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = stack[200]; // [sp + 0x320]
    return r0;
}

// ROM Address: 0x080333A6..0x080335B4 (526 bytes, Thumb)
u32 sub_080333A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r3 = 0x087592DCU; // [0x080335B4]
    r2 = (r2 << 2);
    r3 = r2 + r3;
    r0 = (r0 << 2);
    r3 = *(u32*)(r3 + r0);
    *(u32*)(r1 + 0x8) = (u32)r3;
    r3 = 0x087592DCU; // [0x080335B4]
    r3 += 0x18U;
    r2 = r2 + r3;
    r0 = *(u32*)(r2 + r0);
    *(u32*)(r1 + 0x10) = (u32)r0;
    return r0; // BX lr
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = 0x28; // sp + 0x28
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x080333D0
    r0 = 0xFFU;
    r0 += 0xA1U;
    r0 = *(u32*)(r0 + r5);
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x24) = (u16)r0;
    r0 = 0xFFU;
    r0 += 0xA5U;
    r0 = *(u32*)(r0 + r5);
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x26) = (u16)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x74);
    r3 = r2 + r1;
    r2 = r6;
    r1 = *(u32*)(r4 + 0x10);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080333F6: BL __call_via_r3
    r6 = 0x087592DCU; // [0x080335B4]
    r1 = r5;
    r6 -= 0x24U;
    r0 = *(u32*)(r6);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08033402
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08033408
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08033442;
    r0 = stack[10]; // [sp + 0x28]
    r2 = stack[12]; // [sp + 0x30]
    r3 = stack[13]; // [sp + 0x34]
    r2 = r0 + r2;
    stack[5] = r2; // [sp + 0x14]
    r2 = ((u32)((s32)r2 >> 1));
    r0 = stack[11]; // [sp + 0x2C]
    stack[5] = r2; // [sp + 0x14]
    r0 = r0 + r3;
    stack[6] = r0; // [sp + 0x18]
    r0 = ((u32)((s32)r0 >> 1));
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x38U;
    stack[6] = r0; // [sp + 0x18]
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x0U;
    r1 = 0x1C; // sp + 0x1C
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x08033436
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803343E: BL 0x0801191A
loc_08033442:
    r1 = 0x087592DCU; // [0x080335B4]
    r2 = 0x20U;
    r5 = 0x4; // sp + 0x4
    r1 -= 0x20U;
    r0 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803344C: BL 0x08049138
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0x24);
    *(u16*)(r3 + 0x10) = (u16)r0;
    r0 = *(u16*)(r3 + 0x26);
    *(u16*)(r3 + 0x12) = (u16)r0;
    r7 = *(u32*)(r4 + 0xC);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803345E
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x087592DCU; // [0x080335B4]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r2 = (r7 << 2);
    r1 = *(u32*)(r1 + r2);
    r7 = 0x0U;
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x087592DCU; // [0x080335B4]
    r7 = ~r7;
    r1 += 0x18U;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + r2);
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x080335B8]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = r7;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x08033492
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803349A: BL 0x0801191A
    r1 = 0x087592DCU; // [0x080335B4]
    r2 = 0x20U;
    r1 -= 0x20U;
    r0 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080334A6: BL 0x08049138
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0x24);
    r0 += 0x18U;
    *(u16*)(r3 + 0x10) = (u16)r0;
    r0 = *(u16*)(r3 + 0x26);
    *(u16*)(r3 + 0x12) = (u16)r0;
    r2 = *(u32*)(r4 + 0xC);
    r0 = 0x2U;
    stack[0] = r2; // [sp + 0x0]
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080334BC
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x087592DCU; // [0x080335B4]
    r2 = stack[0]; // [sp + 0x0]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r2 = (r2 << 2);
    r1 = *(u32*)(r1 + r2);
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x087592DCU; // [0x080335B4]
    r1 += 0x18U;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + r2);
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x080335B8]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = r7;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x080334EE
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x080334F6: BL 0x0801191A
    r1 = 0x087592DCU; // [0x080335B4]
    r2 = 0x20U;
    r1 -= 0x20U;
    r0 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08033502: BL 0x08049138
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0x24);
    r0 += 0x18U;
    *(u16*)(r3 + 0x10) = (u16)r0;
    r0 = *(u16*)(r3 + 0x26);
    r0 += 0x18U;
    stack[14] = r0; // [sp + 0x38]
    *(u16*)(r3 + 0x12) = (u16)r0;
    r2 = *(u32*)(r4 + 0xC);
    r0 = 0x2U;
    stack[0] = r2; // [sp + 0x0]
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803351C
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x087592DCU; // [0x080335B4]
    r2 = stack[0]; // [sp + 0x0]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r2 = (r2 << 2);
    r1 = *(u32*)(r1 + r2);
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x087592DCU; // [0x080335B4]
    r1 += 0x18U;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + r2);
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x080335B8]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = r7;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0803354E
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x08033556: BL 0x0801191A
    r1 = 0x087592DCU; // [0x080335B4]
    r2 = 0x20U;
    r1 -= 0x20U;
    r0 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08033562: BL 0x08049138
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0x24);
    *(u16*)(r3 + 0x10) = (u16)r0;
    r0 = stack[14]; // [sp + 0x38]
    *(u16*)(r3 + 0x12) = (u16)r0;
    r4 = *(u32*)(r4 + 0xC);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08033574
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x087592DCU; // [0x080335B4]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r2 = (r4 << 2);
    r1 = *(u32*)(r1 + r2);
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x087592DCU; // [0x080335B4]
    r1 += 0x18U;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + r2);
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x080335B8]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = r7;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x080335A4
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x080335AC: BL 0x0801191A
    return r0;
}

// ROM Address: 0x080335B4..0x080335BC (8 bytes, Thumb)
u32 sub_080335B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[220] = r2; // [sp + 0x370]
    r5 = (r6 >> 1);
    r4 = ((u32)((s32)r6 >> 9));
    r1 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x080335BC..0x0803377A (446 bytes, Thumb)
u32 sub_080335BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080335D4;
    r0 = 0x48U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080335C8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080335D4;
    r0 = r4;
    return r0;
loc_080335D4:
    r0 = 0x08049338U /* &VTable_08049338 */; // [0x0803383C]
    r2 = 0x40U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x14U;
    r1 = 0xF0U;
    r5 = r0;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080335E2
    r0 = 0x0000054BU; // [0x08033840]
    r2 = 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x90U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0xC) = (u32)r6;
    r0 = 0x2U;
    *(u8*)(r4 + 0x17) = (u8)r0;
    r1 = 0x0803F5A5U; // [0x08033844]
    *(u8*)(r5 + 0x2) = (u8)r2;
    *(u32*)(r5 + 0x20) = (u32)r1;
    *(u8*)(r4 + 0x14) = (u8)r2;
    r0 = r4;
    return r0;
    r4 = r0;
    r0 = 0x08049338U /* &VTable_08049338 */; // [0x0803383C]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r1 = 0x0U;
    r0 += 0x14U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08033616: BL 0x0803F58C
    r0 = 0x080491F0U /* &VTable_080491F0 */; // [0x08033848]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08033628;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08033624: BL 0x0803D63C
loc_08033628:
    return r0;
    r4 = r0;
    r5 = r1;
    r2 = *(u32*)(r0 + 0x44);
    r0 = *(u32*)(r0 + 0x38);
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08033636: BL 0x08046E40
    r0 = 0x0875930CU; // [0x0803384C]
    r0 = *(u32*)(r0 + 0xC);
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = 0x78U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x10U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x8U;
    *(u8*)(r4 + 0x15) = (u8)r0;
    r4 += 0x14U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803365A;
    r1 = r5;
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08033656
loc_0803365A:
    r1 = 0x06003C40U; // [0x08033850]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0803365E: BL 0x08049150
    return r0;
    r4 = r0;
    r5 = r1;
    r2 = *(u32*)(r0 + 0x44);
    r0 = *(u32*)(r0 + 0x38);
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x08033670: BL 0x08046E40
    r0 = 0x0875930CU; // [0x0803384C]
    r0 = *(u32*)(r0 + 0x8);
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = 0x78U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x18U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x10U;
    *(u8*)(r4 + 0x15) = (u8)r0;
    r4 += 0x14U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033694;
    r1 = r5;
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08033690
loc_08033694:
    r1 = 0x06000040U; // [0x08033854]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08033698: BL 0x08049150
    return r0;
    r4 = r0;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x08033858]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080336AC: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080336BA: BL 0x0804912C
    r2 = 0x18000U; // (3 << 15)
    r1 = 0x0U;
    r0 = (r2 << 10);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080336C6: BL 0x0804912C
    r2 = 0x40U;
    r1 = 0x0U;
    r0 = 0x6000000U; // (3 << 25)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080336D2: BL 0x0804912C
    r2 = 0x1000U; // (1 << 12)
    r1 = 0x0U;
    r0 = 0x0600F000U; // [0x0803385C]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080336DE: BL 0x0804912C
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xEU;
    r5 = 0x0U;
    r6 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    stack[2] = r6; // [sp + 0x8]
    r2 = 0x1U;
    stack[0] = r5; // [sp + 0x0]
    r1 = 0x0600F800U; // [0x08033860]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x080336F8
    r0 = 0xAU;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x12U;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0xF1U;
    stack[0] = r5; // [sp + 0x0]
    stack[2] = r6; // [sp + 0x8]
    r1 = 0x0600F000U; // [0x0803385C]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x0803370E
    r0 = 0x00001E83U; // [0x08033864]
    r1 = 0x4000000U; // (1 << 26)
    *(u16*)(r1 + 0x8) = (u16)r0;
    r0 += 0x100U;
    *(u16*)(r1 + 0xA) = (u16)r0;
    r0 = 0x52U;
    *(u8*)(r0 + r1) = (u8)r5;
    r0 = 0x53U;
    *(u8*)(r0 + r1) = (u8)r5;
    *(u16*)(r1 + 0x10) = (u16)r5;
    *(u16*)(r1 + 0x12) = (u16)r5;
    r0 = 0x04000014U /* &REG_BG1HOFS */; // [0x08033868]
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x08033870]
    *(u16*)(r0) = (u16)r5;
    *(u16*)(r0 + 0x2) = (u16)r5;
    r0 = 0x00002043U; // [0x0803386C]
    r5 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08033874]
    *(u16*)(r1 + 0x10) = (u16)r0;
    r0 = 0x300U; // (3 << 8)
    r1 -= 0x40U;
    *(u16*)(r1) = (u16)r0;
    r0 = *(u32*)(r4 + 0x10);
    r0 = (r0 << 2);
    r1 = *(u32*)(r5 + r0);
    r0 = r4;
    r0 = sub_08033664(r0, r1, r2, r3); // 0x0803374A
    r0 = *(u32*)(r4 + 0x10);
    r0 += 0x1U;
    r0 = (r0 << 2);
    r1 = *(u32*)(r5 + r0);
    r0 = r4;
    r0 = sub_0803362A(r0, r1, r2, r3); // 0x08033758
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805652CU; // [0x08033878]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08033766: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x08033878]
    r0 = 0x05000200U; // [0x08033858]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08033772: BL 0x08049144
    return r0;
}

// ROM Address: 0x0803377A..0x0803377C (2 bytes, Thumb)
u32 sub_0803377A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// Evidence: writes BLDALPHA 0x04000052: 0x080337EC ldr r1, [pc, #0x98] (= 0x04000050) then 0x080337F6 strb r0, [r1, #2]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x080337EC
// ROM Address: 0x080337EC..0x08033808 (28 bytes, Thumb)
u32 Blend_WriteAlpha4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x04000050U /* &REG_BLDCNT */; // [0x08033888]
    cmp_lhs = (s32)r0; cmp_rhs = 144;
    if (cmp_lhs > cmp_rhs) return sub_08033826(r0, r1, r2, r3);
    r2 = 0x90U;
    r0 = r2 - r0;
    *(u8*)(r1 + 0x2) = (u8)r0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 144;
    if (cmp_lhs != cmp_rhs) return sub_08033836(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08033808(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08033808..0x0803383A (50 bytes, Thumb)
u32 sub_08033808(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x10);
    r5 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08033874]
    r0 = (r0 << 2);
    r1 = *(u32*)(r5 + r0);
    r0 = r4;
    r0 = sub_08033664(r0, r1, r2, r3); // 0x08033812
    r0 = *(u32*)(r4 + 0x10);
    r0 += 0x1U;
    r0 = (r0 << 2);
    r1 = *(u32*)(r5 + r0);
    r0 = r4;
    r0 = sub_0803362A(r0, r1, r2, r3); // 0x08033820
    goto loc_08033836;
    cmp_lhs = (s32)r0; cmp_rhs = 160;
    if (cmp_lhs > cmp_rhs) goto loc_08033836;
    r0 += 0x70U;
    *(u8*)(r1 + 0x2) = (u8)r0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 160;
    if (cmp_lhs != cmp_rhs) goto loc_08033836;
    *(u32*)(r4 + 0x4) = (u32)r6;
loc_08033836:
    r0 = 0x0U;
    return sub_08033806(r0, r1, r2, r3);
}

// ROM Address: 0x08033862..0x080338FC (154 bytes, Thumb)
u32 sub_08033862(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 24);
    r3 = r0 - 2;
    r0 = r0;
    r4 = r2;
    r0 = (r0 << 16);
    r0 = 0x43U;
    r0 = r0;
    r0 = (r0 << 1);
    r0 = (r0 << 16);
    r6 = (r0 >> 32);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    stack[112] = r4; // [sp + 0x1C0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r1 = (r5 << 22);
    r0 = r0;
    r0 = (r2 << 1);
    r0 = (r0 << 16);
    r6 = r1;
    r1 = 0x0875931CU; // [0x080338FC]
    r4 = *(u32*)(r1);
    r5 = *(u32*)(r0 + 0x4);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08033898: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080338AC;
    r1 = 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x08049264U /* &VTable_08049264 */; // [0x08033900]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r5;
    *(u32*)(r0 + 0xC) = (u32)r6;
loc_080338AC:
    r2 = r0;
    r0 = 0x610U; // (97 << 4)
    r0 = r4 + r0;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r0 = 0x1U;
    return r0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080338CA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080338D8;
    r1 = 0x08049A0CU; // [0x08033904]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_080338D8:
    return r0;
    r2 = 0x214U; // (133 << 2)
    r0 = *(u32*)(r0 + 0xC);
    r1 = r1 + r2;
    r0 = sub_08012588(r0, r1, r2, r3); // 0x080338E4: BL 0x08012588
    r0 = 0x1U;
    return r0;
    r2 = 0x214U; // (133 << 2)
    r0 = *(u32*)(r0 + 0xC);
    r1 = r1 + r2;
    r0 = sub_08012588(r0, r1, r2, r3); // 0x080338F6: BL 0x08012588
    return r0;
}

// ROM Address: 0x080338FC..0x08033948 (76 bytes, Thumb)
u32 sub_080338FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[28] = r3; // [sp + 0x70]
    r5 = (r6 >> 1);
    stack[100] = r2; // [sp + 0x190]
    r4 = (r0 >> 32);
    r2 = stack[12]; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = r1;
    r0 = 0xFFU;
    r0 += 0x15U;
    r5 = *(u32*)(r1 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08033912: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803392C;
    r0 = 0xFFU;
    r0 += 0x13U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803391E: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08033926
    return sub_08033966(r0, r1, r2, r3);
loc_0803392C:
    r0 = 0xCBU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08033930: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08033948(r0, r1, r2, r3);
    r0 = 0xCAU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803393A: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08033942
    return sub_08033966(r0, r1, r2, r3);
}

// ROM Address: 0x08033948..0x0803396E (38 bytes, Thumb)
u32 sub_08033948(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xFFU;
    r0 += 0x22U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803394E: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08033966;
    r0 = 0xFFU;
    r0 += 0x21U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803395A: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08033962
loc_08033966:
    r0 = r4;
    r0 = sub_0800F954(r0, r1, r2, r3); // 0x08033968
    return r0;
}

// ROM Address: 0x0803396E..0x08033972 (4 bytes, Thumb)
u32 sub_0803396E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003204U; // [0x08033974]
    return r0; // BX lr
}

// ROM Address: 0x08033972..0x08033A40 (206 bytes, Thumb)
u32 sub_08033972(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r2 += 0x4U;
    r0 = (r0 << 12);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r0 = *(u16*)(r1 + 0x12);
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08033996;
    r0 = 0x10U;
    *(u16*)(r1 + 0x12) = (u16)r0;
loc_08033996:
    r0 = *(u16*)(r1 + 0x12);
    r0 = (r0 >> 3);
    *(u8*)(r1 + 0x11) = (u8)r0;
    return r0; // BX lr
    r6 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r6;
    r0 = 0x03001C34U; // [0x08033B34]
    r5 = r1;
    r4 = *(u32*)(r0);
    r1 = 0x9U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080339B0
    *(u8*)(r4 + 0x11) = (u8)r6;
    r0 = *(u8*)(r5 + 0x10);
    r1 = 0x1U;
    r0 ^= r1;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = r4;
    r1 = 0x03001B00U; // [0x08033B38]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080339C2
    r0 = 0x08759334U; // [0x08033B3C]
    r6 = 0x10; // sp + 0x10
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r1 = r4;
    r2 = *(u8*)(r5 + 0x10);
    r1 += 0x1A0U;
    r6 -= 0x20U;
    r2 = (r2 << 3);
    r2 = r2 + r6;
    r3 = *(u32*)r1; r1 += 4;
    r4 = *(u32*)r2; r2 += 4;
    r1 = *(u32*)(r1);
    r0 = r5;
    r0 += 0xFFU;
    r2 = *(u32*)(r2);
    r3 = r3 - r4;
    r0 += 0xA1U;
    r1 = r1 - r2;
    stack[1] = r1; // [sp + 0x4]
    r2 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    stack[2] = r3; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    *(u32*)r0 = r3; r0 += 4;
    r1 = stack[3]; // [sp + 0xC]
    *(u32*)(r0) = (u32)r1;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08033A08: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033A14;
    r1 = 0x0804C3CCU /* &VTable_0804C3CC */; // [0x08033B40]
    *(u32*)(r0) = (u32)r1;
loc_08033A14:
    r4 = r0;
    r1 = 0x12U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08033A1A
    r1 = r4;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08033A22
    return r0;
    r7 = 0x03001C34U; // [0x08033B34]
    r6 = r1;
    r4 = *(u32*)(r7);
    r5 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08033A40(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08033A40..0x08033AF6 (182 bytes, Thumb)
u32 sub_08033A40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08033A4A: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08033A5C;
    r0 = 0x1U;
    return sub_08033A3C(r0, r1, r2, r3);
loc_08033A5C:
    r1 = 0x03001B00U; // [0x08033B38]
    r0 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08033A68;
    r0 = 0x1U;
    return sub_08033A3C(r0, r1, r2, r3);
loc_08033A68:
    r0 = 0x08759334U; // [0x08033B3C]
    r2 = 0x03000F90U; // [0x08033B44]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r1 = *(u16*)(r0 + 0x4);
    r0 = 0xF3U;
    r1 &= r0;
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r1 = *(u32*)(r2 + 0x4);
    if (cmp_lhs == cmp_rhs) goto loc_08033A9C;
    *(u32*)(r5 + 0x4) = (u32)r1;
    r1 = *(u32*)(r5 + 0x8);
    r1 += 0x1U;
    *(u32*)(r5 + 0x8) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs <= cmp_rhs) goto loc_08033AA6;
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033A94: BL __call_via_r3
    r0 = 0x1U;
    return sub_08033A3C(r0, r1, r2, r3);
loc_08033A9C:
    r3 = *(u32*)(r5 + 0x4);
    r1 = r1 - r3;
    cmp_lhs = (s32)r1; cmp_rhs = 10;
    if (cmp_lhs <= cmp_rhs) goto loc_08033AA6;
    *(u32*)(r5 + 0x8) = (u32)r0;
loc_08033AA6:
    r1 = *(u32*)(r2 + 0x4);
    r1 = (r1 << 28);
    if (cmp_lhs != cmp_rhs) goto loc_08033AD6;
    r2 = 0xFFU;
    r2 += 0xB3U;
    r2 = *(u16*)(r2 + r6);
    stack[4] = r0; // [sp + 0x10]
    r0 = r4;
    r2 = (r2 << 10);
    stack[6] = r2; // [sp + 0x18]
    r2 = *(u32*)(r4);
    r1 = sp;
    r3 = *(u32*)(r2 + 0x5C);
    r5 = 0x18; // sp + 0x18
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033AC4: BL __call_via_r3
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x60);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033AD2: BL __call_via_r3
loc_08033AD6:
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08033AE0: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08033AF2;
    r0 = 0x1U;
    return sub_08033A3C(r0, r1, r2, r3);
loc_08033AF2:
    r0 = 0x0U;
    return sub_08033A3C(r0, r1, r2, r3);
}

// ROM Address: 0x08033B00..0x08033B32 (50 bytes, Thumb)
u32 sub_08033B00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r2 + 0x14) = (u32)r1;
    r1 = *(u8*)(r0 + 0x10);
    r2 = 0x1U;
    r1 ^= r2;
    r2 = 0x290U; // (41 << 4)
    r2 = r0 + r2;
    *(u8*)(r2) = (u8)r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033B1A: BL __call_via_r3
    return r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08033B24: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033B30;
    r1 = 0x0804AB04U /* &VTable_0804AB04 */; // [0x08033B48]
    *(u32*)(r0) = (u32)r1;
loc_08033B30:
    return r0;
}

// ROM Address: 0x08033B32..0x08033B8C (90 bytes, Thumb)
u32 sub_08033B32(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    r0 = r0 - r4;
    r0 = (r0 << 12);
    stack[52] = r3; // [sp + 0xD0]
    r5 = (r6 >> 1);
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r6; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r4 = (r0 >> 32);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r3 = 0x10; // sp + 0x10
    r4 = (r0 >> 32);
    r4 = r1;
    r0 = 0xFFU;
    r0 += 0x13U;
    r5 = *(u32*)(r1 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08033B56: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08033B70;
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08033B62: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08033B6A
    return sub_08033BAA(r0, r1, r2, r3);
loc_08033B70:
    r0 = 0xCAU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08033B74: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08033B8C(r0, r1, r2, r3);
    r0 = 0xCBU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08033B7E: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08033B86
    return sub_08033BAA(r0, r1, r2, r3);
}

// ROM Address: 0x08033B8C..0x08033BB2 (38 bytes, Thumb)
u32 sub_08033B8C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xFFU;
    r0 += 0x21U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08033B92: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08033BAA;
    r0 = 0xFFU;
    r0 += 0x22U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08033B9E: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08033BA6
loc_08033BAA:
    r0 = r4;
    r0 = sub_0800F924(r0, r1, r2, r3); // 0x08033BAC
    return r0;
}

// ROM Address: 0x08033BB2..0x08033BB6 (4 bytes, Thumb)
u32 sub_08033BB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003208U; // [0x08033BB8]
    return r0; // BX lr
}

// ROM Address: 0x08033BB6..0x08033C3A (132 bytes, Thumb)
u32 sub_08033BB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r2 += 0x8U;
    r0 = (r0 << 12);
    r0 = 0x0300320CU; // [0x08033BC0]
    return r0; // BX lr
    r2 += 0xCU;
    r0 = (r0 << 12);
    r0 = 0x03001C34U; // [0x08033D64]
    r4 = r1;
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08033CB8(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08033CB8(r0, r1, r2, r3);
    r1 = r5;
    r0 = 0x5C; // sp + 0x5C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08033BE0
    r1 = r4;
    r0 = 0x4C; // sp + 0x4C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08033BE8
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
    if (cmp_lhs >= cmp_rhs) return sub_08033C3C(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08033C3C..0x08033C42 (6 bytes, Thumb)
u32 sub_08033C3C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08033C44(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08033C44..0x08033C66 (34 bytes, Thumb)
u32 sub_08033C44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_08033C76(r0, r1, r2, r3);
    stack[6] = r3; // [sp + 0x18]
    r1 = stack[22]; // [sp + 0x58]
    r1 += 0x3U;
    stack[8] = r1; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08033C66(r0, r1, r2, r3);
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[17]; // [sp + 0x44]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[21]; // [sp + 0x54]
    r0 += 0x3U;
    stack[7] = r0; // [sp + 0x1C]
    return sub_08033CA4(r0, r1, r2, r3);
}

// ROM Address: 0x08033C66..0x08033CA4 (62 bytes, Thumb)
u32 sub_08033C66(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[19]; // [sp + 0x4C]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[17]; // [sp + 0x44]
    stack[7] = r0; // [sp + 0x1C]
    return sub_08033CA4(r0, r1, r2, r3);
    r1 = r4;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08033C7A: BL 0x0800FDFA
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[2]; // [sp + 0x8]
    stack[7] = r0; // [sp + 0x1C]
    if (cmp_lhs <= cmp_rhs) goto loc_08033C98;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[22]; // [sp + 0x58]
    r0 -= 0x6U;
    stack[8] = r0; // [sp + 0x20]
    return sub_08033CA4(r0, r1, r2, r3);
loc_08033C98:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[1]; // [sp + 0x4]
    stack[8] = r0; // [sp + 0x20]
    return r0;
}

// ROM Address: 0x08033CA4..0x08033CB8 (20 bytes, Thumb)
u32 sub_08033CA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r2 = 0x10; // sp + 0x10
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x086B8098U; // [0x08033D68]
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x400U; // (1 << 10)
    return sub_08033CBA(r0, r1, r2, r3);
}

// ROM Address: 0x08033CB8..0x08033CBA (2 bytes, Thumb)
u32 sub_08033CB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08033CEC(r0, r1, r2, r3);
}

// ROM Address: 0x08033CBA..0x08033CF0 (54 bytes, Thumb)
u32 sub_08033CBA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[10] = r0; // [sp + 0x28]
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x10) = (u8)r7;
    stack[16] = r4; // [sp + 0x40]
    r1 = *(u32*)(r5);
    r0 = r5;
    r3 = *(u32*)(r1 + 0x24);
    r3 = r3 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033CCC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033CEC;
    r0 = 0x0875937CU; // [0x08033D6C]
    r1 = 0x5DU;
    r2 = 0x083192A8U; // [0x08033D70]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r4 = 0x000005C4U; // [0x08033D74]
    r0 = *(u32*)(r0);
    r2 = 0x40U;
    r3 = r7;
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08033CE8
loc_08033CEC:
    return r0;
}

// ROM Address: 0x08033CF0..0x08033D2C (60 bytes, Thumb)
u32 sub_08033CF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u16*)(r1 + 0x12);
    r1 += 0x1U;
    r3 = (r1 << 16);
    r3 = (r3 >> 16);
    r1 = r4;
    r1 += 0x1C0U;
    *(u16*)(r4 + 0x12) = (u16)r3;
    r2 = *(u32*)(r4 + 0x50);
    cmp_lhs = (s32)r3; cmp_rhs = 32;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08033D12;
    r5 = 0x0U;
    r3 = 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r3;
    return sub_08033D38(r0, r1, r2, r3);
loc_08033D12:
    r6 = *(u32*)(r2);
    r7 = *(u8*)(r0 + 0x4);
    r5 = r6 - 2;
    r5 <<= (r7 & 0xFF);
    r5 += 0x20U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) return sub_08033D2C(r0, r1, r2, r3);
    r3 -= 0x20U;
    r3 = (u32)((s32)r3 >> (r7 & 0xFF));
    r5 = r3 + 1;
    r3 = 0x0U;
    *(u32*)(r1 + 0xC) = (u32)r3;
    return sub_08033D38(r0, r1, r2, r3);
}

// ROM Address: 0x08033D2C..0x08033D4C (32 bytes, Thumb)
u32 sub_08033D2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r3 - r5;
    r3 = ((u32)((s32)r3 >> 5));
    r5 = r6 + r3;
    r5 -= 0x1U;
    r3 = 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r3;
    r1 = *(u32*)(r2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) return sub_08033D4C(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033D46: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08033D4C..0x08033D60 (20 bytes, Thumb)
u32 sub_08033D4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r5; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08033D5C;
    r1 = *(u8*)(r4 + 0x11);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08033D5C;
    r1 = r4;
    r0 = sub_08033BC4(r0, r1, r2, r3); // 0x08033D58
loc_08033D5C:
    *(u8*)(r4 + 0x11) = (u8)r5;
    return sub_08033D4A(r0, r1, r2, r3);
}

// ROM Address: 0x08033D66..0x08033D80 (26 bytes, Thumb)
u32 sub_08033D66(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    stack[124] = r3; // [sp + 0x1F0]
    r5 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r2 += 0x10U;
    r0 = (r0 << 12);
    r0 = 0x0300321CU; // [0x08033D80]
    return r0; // BX lr
}

// ROM Address: 0x08033D80..0x08033D84 (4 bytes, Thumb)
u32 sub_08033D80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x1CU;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08033D84..0x08033DC0 (60 bytes, Thumb)
u32 sub_08033D84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = r1;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u8*)(r0 + 0x11) = (u8)r2;
    r1 = 0x13U;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08033D94
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08033DC0(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033DB8: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08033DC0..0x08033E72 (178 bytes, Thumb)
u32 sub_08033DC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_08033DBC(r0, r1, r2, r3);
    r0 = 0x03001C34U; // [0x08033EEC]
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08033DBC(r0, r1, r2, r3);
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08033DD4
    r6 = r0;
    r6 -= 0x20U;
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08033DDE
    r7 = r0;
    r0 = 0x08759398U; // [0x08033EF0]
    r7 -= 0x20U;
    r0 = *(u32*)(r0);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08033DEA
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) return sub_08033DBC(r0, r1, r2, r3);
    r0 = r4;
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
    stack[4] = r1; // [sp + 0x10]
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x08759398U; // [0x08033EF0]
    r1 += 0x4U;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = stack[3]; // [sp + 0xC]
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r0 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r0 = r2 + r0;
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    r1 = stack[2]; // [sp + 0x8]
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    r1 = r5;
    r0 = 0x1C; // sp + 0x1C
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08033E32: BL 0x0800FDFA
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[9]; // [sp + 0x24]
    r2 = stack[10]; // [sp + 0x28]
    r1 = r0 + r1;
    r0 = stack[8]; // [sp + 0x20]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[12] = r0; // [sp + 0x30]
    r0 = r1 + r6;
    stack[1] = r1; // [sp + 0x4]
    stack[11] = r1; // [sp + 0x2C]
    r1 = stack[12]; // [sp + 0x30]
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 + r7;
    stack[2] = r1; // [sp + 0x8]
    stack[14] = r1; // [sp + 0x38]
    r3 = r4;
    stack[13] = r0; // [sp + 0x34]
    r0 = 0x0U;
    r1 = 0x14; // sp + 0x14
    r2 = 0x34; // sp + 0x34
    r0 = sub_08033F28(r0, r1, r2, r3); // 0x08033E68: BL 0x08033F28
    r1 = r0;
    r0 = 0x08759398U; // [0x08033EF0]
    r0 = *(u32*)(r0);
    return r0;
}

// ROM Address: 0x08033E78..0x08033EE8 (112 bytes, Thumb)
u32 sub_08033E78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x08033EEC]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x08033EF4]
    stack[1] = r1; // [sp + 0x4]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    if (cmp_lhs == cmp_rhs) goto loc_08033E96;
    r1 = r4;
    r1 += 0x18CU;
loc_08033E96:
    r0 = sp;
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08033E98
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08033E9E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033EAA;
    r1 = 0x0804E030U /* &VTable_0804E030 */; // [0x08033EF8]
    *(u32*)(r0) = (u32)r1;
loc_08033EAA:
    r5 = r0;
    r1 = 0x4U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08033EB0
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08033EB8
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08033EFC]
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033ED2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033ECE: BL __call_via_r3
loc_08033ED2:
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033EE2: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08033EE8..0x08033EEC (4 bytes, Thumb)
u32 sub_08033EE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003220U; // [0x08033F00]
    return r0; // BX lr
}

// ROM Address: 0x08033F04..0x08033F22 (30 bytes, Thumb)
u32 sub_08033F04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08033F0A: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08033F12: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08033F20;
    r1 = 0x0804B6F8U; // [0x08033F24]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08033F20:
    return r0;
}

// ROM Address: 0x08033F28..0x08033F48 (32 bytes, Thumb)
u32 sub_08033F28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08033F48(r0, r1, r2, r3);
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08033F3A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08033F48(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08033F48..0x08033FA4 (92 bytes, Thumb)
u32 sub_08033F48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r7;
    r1 = 0x40U;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x08033F4E
    r0 = 0x0804CE50U /* &VTable_0804CE50 */; // [0x080340E8]
    r3 = 0x000005D3U; // [0x080340EC]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r0 = 0x16U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r5);
    r0 = r0 - r1;
    r1 = *(u32*)(r6 + 0x4);
    r2 = *(u32*)(r5 + 0x4);
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 - r2;
    stack[2] = r1; // [sp + 0x8]
    r1 = r0;
    r0 = stack[2]; // [sp + 0x8]
    r1 *= r3;
    r1 = ((u32)((s32)r1 >> 8));
    *(u32*)(r4 + 0x40) = (u32)r1;
    r1 = 0xFFFF45A0U; // [0x080340F0]
    r0 *= r3;
    r0 = r0 + r1;
    r1 = 0x200U; // (1 << 9)
    r0 = ((u32)((s32)r0 >> 8));
    r0 = r0 - r1;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x087593D8U; // [0x080340F4]
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08033F9C
    r0 = r4;
    return sub_08033F44(r0, r1, r2, r3);
}

// ROM Address: 0x080340A8..0x080340C6 (30 bytes, Thumb)
u32 sub_080340A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r5);
    r1 = ((u32)((s32)r1 >> 8));
    r2 = ((u32)((s32)r2 >> 8));
    stack[16] = r2; // [sp + 0x40]
    stack[14] = r2; // [sp + 0x38]
    r2 = 0x38U;
    stack[13] = r1; // [sp + 0x34]
    stack[15] = r1; // [sp + 0x3C]
    r1 = 0x400U; // (1 << 10)
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r2; // [sp + 0x8]
    stack[0] = r0; // [sp + 0x0]
    r5 = 0x3C; // sp + 0x3C
    return sub_080340C8(r0, r1, r2, r3);
}

// ROM Address: 0x080340C8..0x08034120 (88 bytes, Thumb)
u32 sub_080340C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x4U;
    r1 = r5;
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x08034104]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x080340D0
    r1 = r0;
    r0 = *(u32*)(r7);
    r0 = List_Append(r0, r1, r2, r3); // 0x080340D8: BL 0x0801191A
    r1 = r4;
    r0 = *(u32*)(r7);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080340E0
    return r0;
    r4 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    r4 = (r0 >> 32);
    r3 = (r2 << 23);
    r0 = r0;
    cmp_lhs = (s32)r8; cmp_rhs = (s32)r4;
    stack[216] = r3; // [sp + 0x360]
    r5 = (r6 >> 1);
    *(u16*)(r2 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r0 += 0x84U;
    r0 = (r7 >> 1);
    stack[100] = r2; // [sp + 0x190]
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_080340A8(r0, r1, r2, r3);
    r7 = (r5 >> 1);
    r3 = *(u8*)(r1 + 0x10);
    r4 = *(u8*)(r2);
    r5 = 0x1U;
    r4 ^= r5;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) return sub_08034120(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0xC);
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803411A: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08034120..0x08034124 (4 bytes, Thumb)
u32 sub_08034120(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0803411E(r0, r1, r2, r3);
}

// ROM Address: 0x080341C0..0x08034280 (192 bytes, Thumb)
u32 sub_080341C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r3 << 24);
    r3 = (r3 >> 22);
    r3 = *(u32*)(r0 + r3);
    r6 = (r6 >> 22);
    r6 = *(u32*)(r0 + r6);
    r1 *= r3;
    r2 *= r6;
    r1 = r2 + r1;
    r2 = *(u32*)(r4 + 0x4);
    r3 = 0xFFU;
    r3 += 0xADU;
    r6 = *(u32*)(r3 + r2);
    r1 = ((u32)((s32)r1 >> 16));
    r3 = ((u32)((s32)r6 >> 10));
    r7 = (r3 << 24);
    r3 += 0x1U;
    r3 = (r3 << 24);
    r7 = (r7 >> 22);
    r7 = *(u32*)(r0 + r7);
    r3 = (r3 >> 22);
    r0 = *(u32*)(r0 + r3);
    r3 = (r6 << 22);
    r6 = 0x400U; // (1 << 10)
    r3 = (r3 >> 22);
    r6 = r6 - r3;
    r6 *= r7;
    r3 *= r0;
    r0 = r6 + r3;
    r0 = ((u32)((s32)r0 >> 16));
    r0 *= r1;
    r2 += 0x180U;
    r3 = (r0 << 4);
    r0 = r3 - r0;
    r2 = *(u32*)(r2 + 0x20);
    r0 = (r0 << 1);
    r0 = ((u32)((s32)r0 >> 10));
    r2 = (r2 << 2);
    r0 = r2 - r0;
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r4 + 0x4);
    r2 = 0xFFU;
    r2 += 0xADU;
    r6 = *(u32*)(r2 + r0);
    r7 = 0x087B6EECU; // [0x08034290]
    r2 = ((u32)((s32)r6 >> 10));
    r2 += 0x40U;
    r3 = (r2 << 24);
    r2 += 0x1U;
    r2 = (r2 << 24);
    r2 = (r2 >> 22);
    r3 = (r3 >> 22);
    r3 = *(u32*)(r7 + r3);
    r2 = *(u32*)(r7 + r2);
    r7 = 0x1U;
    r6 = (r6 << 22);
    r6 = (r6 >> 22);
    r7 = (r7 << 10);
    r7 = r7 - r6;
    r7 *= r3;
    r6 *= r2;
    r2 = r7 + r6;
    r2 = ((u32)((s32)r2 >> 16));
    r2 *= r1;
    r1 = (r2 << 4);
    r0 += 0x180U;
    r1 = r1 - r2;
    r0 = *(u32*)(r0 + 0x24);
    r1 = (r1 << 1);
    r1 = ((u32)((s32)r1 >> 10));
    r0 = (r0 << 2);
    r0 = r1 + r0;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u32*)(r4 + 0x4);
    r6 = r12;
    r0 += 0x180U;
    r1 = (r6 << 4);
    r1 = r1 - r6;
    r0 = *(u32*)(r0 + 0x28);
    r1 = (r1 << 1);
    r0 = r0 + r1;
    r2 = 0x087593E4U; // [0x08034280]
    *(u32*)(r5 + 0x8) = (u32)r0;
    r0 = *(u32*)(r2);
    r1 = stack[1]; // [sp + 0x4]
    *(u32*)r0 = r1; r0 += 4;
    r1 = stack[2]; // [sp + 0x8]
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r2);
    r0 = sub_0802ED98(r0, r1, r2, r3); // 0x08034278: BL 0x0802ED98
    return r0;
}

// ROM Address: 0x08034280..0x08034294 (20 bytes, Thumb)
u32 sub_08034280(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r5 = (r6 >> 1);
    r7 = (r6 >> 22);
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r3 += 0x33U;
    r7 = (r1 << 4);
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    return r0;
}

// ROM Address: 0x08034294..0x080342AE (26 bytes, Thumb)
u32 sub_08034294(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0804BCA8U /* &VTable_0804BCA8 */; // [0x08034330]
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080342A2: BL 0x08046AA2
    return r0;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x080342AE..0x080342EC (62 bytes, Thumb)
u32 sub_080342AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r1 = *(u32*)(r0);
    r4 = r0;
    r2 = *(u32*)(r1 + 0x14);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080342BC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x8);
    if (cmp_lhs == cmp_rhs) return sub_080342EC(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080342DC;
    r0 = 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080342D8: BL __call_via_r3
loc_080342DC:
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080342E6: BL __call_via_r3
    return r0;
}

// ROM Address: 0x080342EC..0x08034306 (26 bytes, Thumb)
u32 sub_080342EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08034302;
    r0 = 0x0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080342FE: BL __call_via_r3
loc_08034302:
    r0 = 0x0U;
    return sub_080342EA(r0, r1, r2, r3);
}

// ROM Address: 0x0803431C..0x08034330 (20 bytes, Thumb)
u32 sub_0803431C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803432E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803432A: BL __call_via_r3
loc_0803432E:
    return r0;
}

// ROM Address: 0x08034330..0x08034354 (36 bytes, Thumb)
u32 sub_08034330(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = r2;
    r1 += 0x1A8U;
    r2 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1);
    r2 = (r2 << 10);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08034350;
    r0 = *(u32*)(r0 + 0x8);
    r0 = (r0 << 10);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08034350;
    r0 = 0x1U;
    return r0; // BX lr
loc_08034350:
    r0 = 0x0U;
    return r0; // BX lr
}
