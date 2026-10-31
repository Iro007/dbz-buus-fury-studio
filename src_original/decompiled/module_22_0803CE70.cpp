/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #22
 * Address Range: 0x0803CE70..0x0803F55E (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0803CE70..0x0803D0D4 (612 bytes, Thumb)
u32 sub_0803CE70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803CE76: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803CE7E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803CE8C;
    r1 = 0x0804BC50U; // [0x0803CE90]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803CE8C:
    return r0;
    r0 = r0;
    r4 = (r0 >> 32);
    r2 = r1;
    r2 += 0x1A0U;
    r0 = r2;
    r0 += 0x20U;
    r3 = *(u32*)(r0 + 0x34);
    r5 = 0xFFFFD800U; // [0x0803D100]
    r4 = 0x1U;
    stack[3] = r5; // [sp + 0xC]
    r4 = (r4 << 12);
    r3 += 0x1A0U;
    stack[2] = r4; // [sp + 0x8]
    r4 = *(u32*)r3; r3 += 4;
    r5 = 0x1000U; // (1 << 12)
    r4 = r4 + r5;
    r5 = 0xFFFFD800U; // [0x0803D100]
    r3 = *(u32*)(r3);
    stack[0] = r4; // [sp + 0x0]
    r3 = r3 + r5;
    stack[1] = r3; // [sp + 0x4]
    r3 = r4;
    r4 = stack[1]; // [sp + 0x4]
    stack[4] = r3; // [sp + 0x10]
    stack[5] = r4; // [sp + 0x14]
    *(u32*)r2 = r3; r2 += 4;
    r3 = stack[5]; // [sp + 0x14]
    r4 = 0xFFFFEB00U; // [0x0803D108]
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x38);
    r3 = *(u32*)(r0 + 0x34);
    r5 = 0xFFFFF400U; // [0x0803D104]
    r3 += 0x1A0U;
    stack[3] = r4; // [sp + 0xC]
    stack[2] = r5; // [sp + 0x8]
    r5 = *(u32*)r3; r3 += 4;
    r6 = 0xFFFFF400U; // [0x0803D104]
    r3 = *(u32*)(r3);
    r5 = r5 + r6;
    r3 = r3 + r4;
    stack[1] = r3; // [sp + 0x4]
    r3 = r5;
    stack[0] = r5; // [sp + 0x0]
    r5 = stack[1]; // [sp + 0x4]
    r2 += 0x1A0U;
    stack[4] = r3; // [sp + 0x10]
    stack[5] = r5; // [sp + 0x14]
    *(u32*)r2 = r3; r2 += 4;
    r3 = stack[5]; // [sp + 0x14]
    r5 = 0xBU;
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x38);
    r5 = (r5 << 10);
    r2 += 0x1C0U;
    r2 = *(u32*)(r2 + 0x38);
    r3 = *(u32*)(r0 + 0x34);
    stack[2] = r5; // [sp + 0x8]
    r3 += 0x1A0U;
    stack[3] = r4; // [sp + 0xC]
    r5 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)(r3);
    r6 = 0xBU;
    r3 = r3 + r4;
    stack[1] = r3; // [sp + 0x4]
    r6 = (r6 << 10);
    r5 = r5 + r6;
    r4 = stack[1]; // [sp + 0x4]
    r2 += 0x1A0U;
    stack[0] = r5; // [sp + 0x0]
    stack[4] = r5; // [sp + 0x10]
    stack[5] = r4; // [sp + 0x14]
    *(u32*)r2 = r5; r2 += 4;
    r3 = stack[5]; // [sp + 0x14]
    *(u32*)(r2) = (u32)r3;
    r0 = *(u32*)(r0 + 0x34);
    r0 = *(u8*)(r0 + 0x8);
    r0 += 0xFFU;
    *(u8*)(r1 + 0x8) = (u8)r0;
    return r0; // BX lr
    r6 = r0;
    r0 = 0xFFU;
    r0 = ~r0;
    r4 = r1;
    r1 = ((u32)((s32)r0 >> 7));
    stack[1] = r0; // [sp + 0x4]
    r5 = 0x4; // sp + 0x4
    r0 = r5 + 4;
    r0 = sub_08050484(r0, r1, r2, r3); // 0x0803CF5A
    r1 = 0x0U;
    r1 = ~r1;
    r0 = r5;
    r0 += 0x8U;
    r0 = sub_08050484(r0, r1, r2, r3); // 0x0803CF66
    r1 = r4;
    r0 = r6;
    r0 = sub_0803CE94(r0, r1, r2, r3); // 0x0803CF6E
    r0 = r4;
    r0 += 0x1A4U;
    r1 = r0;
    r1 += 0x1CU;
    r2 = *(u32*)(r1 + 0x34);
    r3 = *(u32*)(r0);
    r2 = *(u8*)(r2 + 0x11);
    r2 = (r2 << 2);
    r2 = r2 + r5;
    r2 = *(u32*)(r2);
    r2 = r3 + r2;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r1 + 0x34);
    r0 = *(u32*)(r1 + 0x38);
    r2 = *(u8*)(r2 + 0x11);
    r0 += 0x1A4U;
    r2 = (r2 << 2);
    r2 = r2 + r5;
    r2 = *(u32*)(r2);
    r3 = *(u32*)(r0);
    r2 = r3 + r2;
    *(u32*)(r0) = (u32)r2;
    r0 = *(u32*)(r1 + 0x38);
    r1 = *(u32*)(r1 + 0x34);
    r0 += 0x1C0U;
    r1 = *(u8*)(r1 + 0x11);
    r0 = *(u32*)(r0 + 0x38);
    r0 += 0xFFU;
    r1 = (r1 << 2);
    r1 = r1 + r5;
    r0 += 0xA5U;
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r1 = r2 + r1;
    *(u32*)(r0) = (u32)r1;
    return r0;
    r6 = r0;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    r4 = r1;
    r1 = 0x1U;
    r0 = 0x4; // sp + 0x4
    r5 = sp;
    r0 = sub_08050484(r0, r1, r2, r3); // 0x0803CFD4
    r1 = 0x0U;
    r0 = r5;
    r0 += 0x8U;
    r0 = sub_08050484(r0, r1, r2, r3); // 0x0803CFDE
    r1 = 0x0U;
    r1 = ~r1;
    r0 = r5;
    r0 += 0xCU;
    r0 = sub_08050484(r0, r1, r2, r3); // 0x0803CFEA
    r1 = r4;
    r0 = r6;
    r0 = sub_0803CE94(r0, r1, r2, r3); // 0x0803CFF2
    r0 = r4;
    r0 += 0x1A4U;
    r1 = r0;
    r1 += 0x1CU;
    r2 = *(u32*)(r1 + 0x34);
    r3 = *(u32*)(r0);
    r2 = *(u8*)(r2 + 0x11);
    r2 = (r2 << 2);
    r2 = r2 + r5;
    r2 = *(u32*)(r2);
    r2 = r3 + r2;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r1 + 0x34);
    r0 = *(u32*)(r1 + 0x38);
    r2 = *(u8*)(r2 + 0x11);
    r0 += 0x1A4U;
    r2 = (r2 << 2);
    r2 = r2 + r5;
    r2 = *(u32*)(r2);
    r3 = *(u32*)(r0);
    r2 = r3 + r2;
    *(u32*)(r0) = (u32)r2;
    r0 = *(u32*)(r1 + 0x38);
    r1 = *(u32*)(r1 + 0x34);
    r0 += 0x1C0U;
    r1 = *(u8*)(r1 + 0x11);
    r0 = *(u32*)(r0 + 0x38);
    r0 += 0xFFU;
    r1 = (r1 << 2);
    r1 = r1 + r5;
    r0 += 0xA5U;
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r1 = r2 + r1;
    *(u32*)(r0) = (u32)r1;
    return r0;
    r6 = r0;
    r0 = 0xFU;
    r4 = r1;
    r1 = 0x2U;
    r0 = (r0 << 8);
    stack[1] = r0; // [sp + 0x4]
    r1 = ~r1;
    r5 = 0x4; // sp + 0x4
    r0 = r5 + 4;
    r0 = sub_08050484(r0, r1, r2, r3); // 0x0803D05C
    r1 = 0x4U;
    r1 = ~r1;
    r0 = r5;
    r0 += 0x8U;
    r0 = sub_08050484(r0, r1, r2, r3); // 0x0803D068
    r1 = r4;
    r0 = r6;
    r0 = sub_0803CE94(r0, r1, r2, r3); // 0x0803D070
    r0 = r4;
    r0 += 0x1A4U;
    r1 = r0;
    r1 += 0x1CU;
    r2 = *(u32*)(r1 + 0x34);
    r3 = *(u32*)(r0);
    r2 = *(u8*)(r2 + 0x11);
    r2 = (r2 << 2);
    r2 = r2 + r5;
    r2 = *(u32*)(r2);
    r2 = r3 + r2;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r1 + 0x34);
    r0 = *(u32*)(r1 + 0x38);
    r2 = *(u8*)(r2 + 0x11);
    r0 += 0x1A4U;
    r2 = (r2 << 2);
    r2 = r2 + r5;
    r2 = *(u32*)(r2);
    r3 = *(u32*)(r0);
    r2 = r3 + r2;
    *(u32*)(r0) = (u32)r2;
    r0 = *(u32*)(r1 + 0x38);
    r1 = *(u32*)(r1 + 0x34);
    r0 += 0x1C0U;
    r1 = *(u8*)(r1 + 0x11);
    r0 = *(u32*)(r0 + 0x38);
    r0 += 0xFFU;
    r1 = (r1 << 2);
    r1 = r1 + r5;
    r0 += 0xA5U;
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r1 = r2 + r1;
    *(u32*)(r0) = (u32)r1;
    return r0;
    r2 = 0xFFU;
    r2 += 0xF5U;
    r2 = *(u32*)(r2 + r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803D0D4(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803D0D4..0x0803D0EC (24 bytes, Thumb)
u32 sub_0803D0D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)(r2 + 0x58);
    r4 = *(u32*)(r3 + 0x78);
    r2 = *(u32*)(r2 + 0x50);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0803D0E4;
    r0 = sub_0803CF46(r0, r1, r2, r3); // 0x0803D0DE
    return sub_0803D0F6(r0, r1, r2, r3);
loc_0803D0E4:
    r3 += 0x4CU;
    r3 = *(u32*)(r3 + 0x54);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_0803D0F2(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803D0F2..0x0803D0FA (8 bytes, Thumb)
u32 sub_0803D0F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803CFC2(r0, r1, r2, r3); // 0x0803D0F2
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803D0FA..0x0803D0FE (4 bytes, Thumb)
u32 sub_0803D0FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030032FCU; // [0x0803D10C]
    return r0; // BX lr
}

// ROM Address: 0x0803D110..0x0803D126 (22 bytes, Thumb)
u32 sub_0803D110(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x03001C34U; // [0x0803D360]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803D126(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803D126..0x0803D34A (548 bytes, Thumb)
u32 sub_0803D126(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803D128: BL 0x0800FDFA
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
    r1 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803D14C: BL 0x0800FDFA
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
    stack[2] = r1; // [sp + 0x8]
    stack[16] = r1; // [sp + 0x40]
    r1 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[15] = r0; // [sp + 0x3C]
    if (cmp_lhs >= cmp_rhs) goto loc_0803D186;
    r0 = (u32)(-(s32)r1);
loc_0803D186:
    r1 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D18E;
    r1 = (u32)(-(s32)r1);
loc_0803D18E:
    stack[13] = r0; // [sp + 0x34]
    r6 = 0x0U;
    r2 = r0;
    r0 = r1;
    stack[14] = r1; // [sp + 0x38]
    r7 = 0x3U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    stack[14] = r6; // [sp + 0x38]
    stack[13] = r6; // [sp + 0x34]
    if (cmp_lhs <= cmp_rhs) goto loc_0803D1EE;
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D1D4;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D1B0: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D1C6;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D1C2: BL __call_via_r3
loc_0803D1C6:
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803D1CE;
    r7 = 0x2U;
loc_0803D1CE:
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = 0x1U;
    return sub_0803D122(r0, r1, r2, r3);
loc_0803D1D4:
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803D1E2;
    *(u8*)(r4 + 0x10) = (u8)r6;
    r0 = *(u32*)(r5 + 0x4);
    stack[14] = r0; // [sp + 0x38]
    goto loc_0803D25C;
loc_0803D1E2:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = (u32)(-(s32)r0);
    stack[14] = r0; // [sp + 0x38]
    goto loc_0803D25C;
loc_0803D1EE:
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D1FC;
    r0 = stack[15]; // [sp + 0x3C]
    r0 += 0xCU;
    stack[15] = r0; // [sp + 0x3C]
    goto loc_0803D202;
loc_0803D1FC:
    r0 = stack[15]; // [sp + 0x3C]
    r0 -= 0x8U;
    stack[15] = r0; // [sp + 0x3C]
loc_0803D202:
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D20A;
    r0 = (u32)(-(s32)r0);
loc_0803D20A:
    r2 = stack[16]; // [sp + 0x40]
    stack[11] = r0; // [sp + 0x2C]
    stack[12] = r1; // [sp + 0x30]
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D244;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D21E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D234;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D230: BL __call_via_r3
loc_0803D234:
    r1 = stack[16]; // [sp + 0x40]
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803D23E;
    r0 = 0x0U;
loc_0803D23E:
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = 0x1U;
    return sub_0803D122(r0, r1, r2, r3);
loc_0803D244:
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803D252;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = *(u32*)(r5 + 0x4);
    stack[13] = r0; // [sp + 0x34]
    goto loc_0803D25C;
loc_0803D252:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = (u32)(-(s32)r0);
    stack[13] = r0; // [sp + 0x34]
loc_0803D25C:
    r0 = 0x4EU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803D260: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803D27C;
    r0 = 0x11U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803D26A: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803D27C;
    r0 = 0x4CU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803D274: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_0803D29E;
loc_0803D27C:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D286;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0803D29E;
loc_0803D286:
    r0 = 0x0877C50CU; // [0x0803D364]
    r1 = 0x27U;
    r2 = 0x083192A8U; // [0x0803D368]
    r1 = (r1 << 4);
    r1 = r1 + r2;
    r5 = 0x000005C4U; // [0x0803D36C]
    r0 = *(u32*)(r0);
    r2 = 0x40U;
    r3 = r6;
    r0 = r0 + r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803D29A
loc_0803D29E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D2A8: BL __call_via_r3
    r5 = r4;
    r5 += 0x1A0U;
    r0 = *(u32*)(r5);
    r1 = stack[13]; // [sp + 0x34]
    r6 = r5 + 4;
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = stack[14]; // [sp + 0x38]
    stack[7] = r0; // [sp + 0x1C]
    r1 = r1 + r2;
    stack[8] = r1; // [sp + 0x20]
    stack[10] = r1; // [sp + 0x28]
    stack[12] = r1; // [sp + 0x30]
    stack[9] = r0; // [sp + 0x24]
    stack[11] = r0; // [sp + 0x2C]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x2C; // sp + 0x2C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D2D6: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D318;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D2E8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D2FE;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D2FA: BL __call_via_r3
loc_0803D2FE:
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r6) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D310: BL __call_via_r3
    r0 = 0x0U;
    return sub_0803D122(r0, r1, r2, r3);
loc_0803D318:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D322: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D338;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D334: BL __call_via_r3
loc_0803D338:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D342: BL __call_via_r3
    r0 = 0x1U;
    return sub_0803D122(r0, r1, r2, r3);
}

// ROM Address: 0x0803D34A..0x0803D360 (22 bytes, Thumb)
u32 sub_0803D34A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803D350: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D35E;
    r1 = 0x0804A0E0U; // [0x0803D370]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803D35E:
    return r0;
}

// ROM Address: 0x0803D360..0x0803D362 (2 bytes, Thumb)
u32 sub_0803D360(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    return r0;
}

// ROM Address: 0x0803D362..0x0803D370 (14 bytes, Thumb)
u32 sub_0803D362(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r7 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    return r0;
}

// ROM Address: 0x0803D370..0x0803D374 (4 bytes, Thumb)
u32 sub_0803D370(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0803D6F4U;
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0803D374..0x0803D388 (20 bytes, Thumb)
u32 sub_0803D374(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B94U; // [0x0803D498]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803D388(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803D388..0x0803D478 (240 bytes, Thumb)
u32 sub_0803D388(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2C; // sp + 0x2C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803D38A
    r1 = r4;
    r0 = 0x1C; // sp + 0x1C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803D392
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[9]; // [sp + 0x24]
    r2 = stack[10]; // [sp + 0x28]
    r0 = r0 + r1;
    r1 = stack[8]; // [sp + 0x20]
    stack[3] = r0; // [sp + 0xC]
    r1 = r1 + r2;
    stack[4] = r1; // [sp + 0x10]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[3] = r0; // [sp + 0xC]
    stack[5] = r0; // [sp + 0x14]
    r12 = r1;
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    r1 = stack[9]; // [sp + 0x24]
    r0 = stack[7]; // [sp + 0x1C]
    r5 = stack[10]; // [sp + 0x28]
    r2 = stack[13]; // [sp + 0x34]
    r1 += 0x3U;
    r0 -= 0x4U;
    r5 -= 0x6U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    r6 = stack[8]; // [sp + 0x20]
    if (cmp_lhs >= cmp_rhs) goto loc_0803D3DA;
    r2 = stack[11]; // [sp + 0x2C]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D3DA;
    r2 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D3DA;
    r2 = stack[12]; // [sp + 0x30]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_0803D3DE;
loc_0803D3DA:
    r0 = 0x0U;
    return sub_0803D384(r0, r1, r2, r3);
loc_0803D3DE:
    r2 = stack[11]; // [sp + 0x2C]
    r3 = stack[13]; // [sp + 0x34]
    r7 = stack[14]; // [sp + 0x38]
    r3 = r2 + r3;
    r2 = stack[12]; // [sp + 0x30]
    stack[0] = r3; // [sp + 0x0]
    r2 = r2 + r7;
    stack[1] = r2; // [sp + 0x4]
    r2 = ((u32)((s32)r2 >> 1));
    r3 = ((u32)((s32)r3 >> 1));
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r2; // [sp + 0xC]
    r2 = r3;
    stack[0] = r3; // [sp + 0x0]
    stack[2] = r3; // [sp + 0x8]
    r3 = stack[5]; // [sp + 0x14]
    r7 = stack[6]; // [sp + 0x18]
    r2 = r2 - r3;
    r3 = stack[3]; // [sp + 0xC]
    stack[0] = r2; // [sp + 0x0]
    r7 = r3 - r7;
    r3 = r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    stack[1] = r7; // [sp + 0x4]
    stack[4] = r7; // [sp + 0x10]
    if (cmp_lhs >= cmp_rhs) goto loc_0803D414;
    r3 = (u32)(-(s32)r2);
loc_0803D414:
    r7 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D41C;
    r7 = (u32)(-(s32)r7);
loc_0803D41C:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_0803D43A;
    r5 = stack[10]; // [sp + 0x28]
    r6 = r12;
    r5 += 0x3U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803D432;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[5]; // [sp + 0x14]
    goto loc_0803D458;
loc_0803D432:
    r1 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r1;
    r1 = stack[5]; // [sp + 0x14]
    goto loc_0803D458;
loc_0803D43A:
    r1 = r4;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0803D43E: BL 0x0800FDFA
    r7 = stack[4]; // [sp + 0x10]
    r0 = stack[0]; // [sp + 0x0]
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803D452;
    r2 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r2;
    goto loc_0803D458;
loc_0803D452:
    r2 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r2;
    r5 = stack[1]; // [sp + 0x4]
loc_0803D458:
    r2 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D474;
    r0 = stack[11]; // [sp + 0x2C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D474;
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D474;
    r0 = stack[12]; // [sp + 0x30]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D474;
    r0 = 0x1U;
    return sub_0803D384(r0, r1, r2, r3);
loc_0803D474:
    r0 = 0x0U;
    return sub_0803D384(r0, r1, r2, r3);
}

// ROM Address: 0x0803D478..0x0803D4D0 (88 bytes, Thumb)
u32 sub_0803D478(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803D47E: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803D486: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D494;
    r1 = 0x0804B0C0U; // [0x0803D49C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803D494:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x04000120U; // [0x0803D4CC]
    r0 = *(u16*)(r0 + 0x10);
    r1 = ~r0;
    r0 = r4;
    r0 = sub_0804023C(r0, r1, r2, r3); // 0x0803D4AC
    r1 = *(u16*)(r4 + 0x2);
    r0 = 0xFU;
    r0 &= ~r1;
    if (cmp_lhs != cmp_rhs) goto loc_0803D4C8;
    r0 = *(u8*)(r4 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D4C8;
    r0 = *(u16*)(r4 + 0x4);
    r0 = (r0 << 28);
    if (cmp_lhs == cmp_rhs) goto loc_0803D4C8;
    r0 = sub_0803FA0C(r0, r1, r2, r3); // 0x0803D4C4
loc_0803D4C8:
    return r0;
    r0 = r0;
    r0 = (r4 << 4);
    r0 = (r0 << 16);
    return r0;
}

// ROM Address: 0x0803D5B8..0x0803D63C (132 bytes, Thumb)
u32 sub_0803D5B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x03003488U /* &g_FreeListTail */; // [0x0803D734]
    r0 += 0x3U;
    r5 = *(u32*)(r1);
    r1 = 0x1U;
    r0 = ((u32)((s32)r0 >> 2));
    r4 = 0x0U;
    r3 = 0x7FFFFFFFU /* &INT_MAX */; // [0x0803D73C]
    r1 = (r1 << 25);
loc_0803D5CA:
    r2 = *(u16*)(r5 + 0x2);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0803D5E8;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D5E0;
    r0 = r5;
    r0 = sub_0803D4E8(r0, r1, r2, r3); // 0x0803D5D6
    r0 = r5;
    r0 += 0x8U;
    return r0;
loc_0803D5E0:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803D5E8;
    r4 = r5;
    r3 = r2;
loc_0803D5E8:
    r2 = *(u16*)(r5 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D5F4;
    r2 = (r2 << 2);
    r5 = r2 + r1;
    goto loc_0803D5CA;
loc_0803D5F4:
    r2 = *(u16*)(r4 + 0x2);
    r3 = r2 - r0;
    r3 -= 0x2U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803D60A;
    r0 = r4;
    r0 = sub_0803D4E8(r0, r1, r2, r3); // 0x0803D600
    r0 = r4;
    r0 += 0x8U;
    return r0;
loc_0803D60A:
    r2 = (r3 << 2);
    r2 = r2 + r4;
    r2 += 0x8U;
    r7 = 0x7FU;
    r6 = *(u16*)(r4);
    r7 = (r7 << 25);
    r5 = r2 + r7;
    r5 = ((u32)((s32)r5 >> 2));
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u16*)(r2) = (u16)r6;
    if (cmp_lhs == cmp_rhs) goto loc_0803D626;
    r6 = (r6 << 2);
    r1 = r6 + r1;
    *(u16*)(r1 + 0x4) = (u16)r5;
loc_0803D626:
    *(u16*)(r2 + 0x2) = (u16)r0;
    r0 = r4 + r7;
    r0 = ((u32)((s32)r0 >> 2));
    *(u16*)(r2 + 0x4) = (u16)r0;
    r0 = 0x1U;
    *(u8*)(r2 + 0x6) = (u8)r0;
    *(u16*)(r4) = (u16)r5;
    r0 = r2;
    r0 += 0x8U;
    *(u16*)(r4 + 0x2) = (u16)r3;
    return r0;
}

// ROM Address: 0x0803D63C..0x0803D730 (244 bytes, Thumb)
u32 sub_0803D63C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D694;
    r4 = r0;
    r4 -= 0x8U;
    r1 = 0x0U;
    *(u8*)(r4 + 0x6) = (u8)r1;
    r0 = *(u16*)(r4);
    r7 = 0x2000000U; // (1 << 25)
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D6E2;
    r0 = (r0 << 2);
    r6 = r0 + r7;
    r0 = *(u16*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D6CA;
    r0 = (r0 << 2);
    r5 = r0 + r7;
    r0 = *(u8*)(r6 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u8*)(r5 + 0x6);
    if (cmp_lhs != cmp_rhs) goto loc_0803D6A0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D696;
    r0 = r6;
    r0 = sub_0803D4E8(r0, r1, r2, r3); // 0x0803D670
    r0 = *(u16*)(r4 + 0x2);
    r1 = *(u16*)(r6 + 0x2);
    r0 = r0 + r1;
    r1 = *(u16*)(r5 + 0x2);
    r0 = r0 + r1;
    r0 += 0x4U;
    *(u16*)(r5 + 0x2) = (u16)r0;
    r0 = *(u16*)(r6);
    *(u16*)(r5) = (u16)r0;
    r0 = *(u16*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D694;
    r1 = *(u16*)(r4 + 0x4);
    r0 = (r0 << 2);
    r0 = r0 + r7;
    *(u16*)(r0 + 0x4) = (u16)r1;
loc_0803D694:
    return r0;
loc_0803D696:
    r1 = r6;
    r0 = r4;
    r0 = sub_0803D56A(r0, r1, r2, r3); // 0x0803D69A
loc_0803D69E:
    return r0;
loc_0803D6A0:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D6C2;
    r0 = *(u16*)(r5 + 0x2);
    r1 = *(u16*)(r4 + 0x2);
    r0 = r0 + r1;
    r0 += 0x2U;
    *(u16*)(r5 + 0x2) = (u16)r0;
    r0 = *(u16*)(r4);
    *(u16*)(r5) = (u16)r0;
    r0 = *(u16*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D69E;
    r1 = *(u16*)(r4 + 0x4);
    r0 = (r0 << 2);
    r0 = r0 + r7;
    *(u16*)(r0 + 0x4) = (u16)r1;
    return r0;
loc_0803D6C2:
    r0 = r4;
    r0 = sub_0803D520(r0, r1, r2, r3); // 0x0803D6C4
    return r0;
loc_0803D6CA:
    r0 = *(u8*)(r6 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D6DA;
    r1 = r6;
    r0 = r4;
    r0 = sub_0803D56A(r0, r1, r2, r3); // 0x0803D6D4
    return r0;
loc_0803D6DA:
    r0 = r4;
    r0 = sub_0803D520(r0, r1, r2, r3); // 0x0803D6DC
    return r0;
loc_0803D6E2:
    r0 = *(u16*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D708;
    r0 = (r0 << 2);
    r0 = r0 + r7;
    r2 = *(u8*)(r0 + 0x6);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D700;
    r2 = *(u16*)(r0 + 0x2);
    r3 = *(u16*)(r4 + 0x2);
    r2 = r2 + r3;
    r2 += 0x2U;
    *(u16*)(r0 + 0x2) = (u16)r2;
    *(u16*)(r0) = (u16)r1;
    return r0;
loc_0803D700:
    r0 = r4;
    r0 = sub_0803D520(r0, r1, r2, r3); // 0x0803D702
    return r0;
loc_0803D708:
    r0 = 0x03003488U /* &g_FreeListTail */; // [0x0803D734]
    *(u32*)(r0) = (u32)r4;
    *(u16*)(r4 + 0x8) = (u16)r1;
    *(u16*)(r4 + 0xA) = (u16)r1;
    return r0;
    r1 = 0x03003488U /* &g_FreeListTail */; // [0x0803D734]
    r0 = 0x0U;
    r3 = 0x1U;
    r1 = *(u32*)(r1);
    r3 = (r3 << 25);
loc_0803D71C:
    r2 = *(u16*)(r1 + 0x2);
    r1 = *(u16*)(r1 + 0x8);
    r2 = (r2 << 2);
    r0 = r2 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D72E;
    r1 = (r1 << 2);
    r1 = r1 + r3;
    goto loc_0803D71C;
loc_0803D72E:
    return r0; // BX lr
}

// ROM Address: 0x0803D740..0x0803D784 (68 bytes, Thumb)
u32 sub_0803D740(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x02000800U /* &g_HeapStart */; // [0x0803D77C]
    r0 = 0x0U;
    r2 = (r1 << 14);
loc_0803D746:
    r1 = *(u16*)(r1);
    r0 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D754;
    r1 = (r1 << 2);
    r1 = r1 + r2;
    goto loc_0803D746;
loc_0803D754:
    return r0; // BX lr
    r0 = 0x03003488U /* &g_FreeListTail */; // [0x0803D780]
    r1 = 0x0U;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D778;
    r3 = 0x2000000U; // (1 << 25)
loc_0803D764:
    r2 = *(u16*)(r0 + 0x2);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803D76C;
    r1 = r2;
loc_0803D76C:
    r0 = *(u16*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D778;
    r0 = (r0 << 2);
    r0 = r0 + r3;
    if (cmp_lhs != cmp_rhs) goto loc_0803D764;
loc_0803D778:
    r0 = (r1 << 2);
    return r0; // BX lr
    r0 = (r0 >> 32);
    r0 = (r0 << 8);
    r4 += 0x88U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0803D786..0x0803D7BE (56 bytes, Thumb)
u32 sub_0803D786(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x10);
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D79A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x18);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D796: BL 0x08046AA2
loc_0803D79A:
    r0 = 0x03000F90U; // [0x0803D930]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D7A4: BL 0x08046AA2
    return r0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return Irq_WriteEnable3(r0, r1, r2, r3);
    r0 = 0x1U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803D7B2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return Irq_WriteEnable3(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// Evidence: reads IE 0x04000200: 0x0803D7D8 ldr r2, [pc, #0x15c] (= 0x04000200) then 0x0803D7DC ldrh r1, [r2]; writes IE 0x04000200: 0x0803D7D8 ldr r2, [pc, #0x15c] (= 0x04000200) then 0x0803D7E2 strh r0, [r2]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0803D7BE
// ROM Address: 0x0803D7BE..0x0803D7FA (60 bytes, Thumb)
u32 Irq_WriteEnable3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x087B5B80U; // [0x0803D92C]
    r0 = *(u32*)(r5 + 0x8);
    r0 = Struct_ZeroFields(r0, r1, r2, r3); // 0x0803D7C2: BL 0x080402D6
    r0 = sub_0803D4D0(r0, r1, r2, r3); // 0x0803D7C6
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0803F3DA(r0, r1, r2, r3); // 0x0803D7CC
    r0 = sub_080400D8(r0, r1, r2, r3); // 0x0803D7D0
    r1 = 0x0803D785U; // [0x0803D934]
    r0 = *(u32*)(r5 + 0x4);
    r2 = 0x04000200U /* &REG_IE */; // [0x0803D938]
    *(u32*)(r0) = (u32)r1;
    r1 = *(u16*)(r2);
    r0 = 0x1U;
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_0803F1B8(r0, r1, r2, r3); // 0x0803D7E6: BL 0x0803F1B8
    r0 = *(u32*)(r5);
    r0 = sub_0803FB7C(r0, r1, r2, r3); // 0x0803D7EC
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0803D4A0(r0, r1, r2, r3); // 0x0803D7F2
    r0 = r4;
    return sub_0803D7BC(r0, r1, r2, r3);
}

// ROM Address: 0x0803D7FA..0x0803D95E (356 bytes, Thumb)
u32 sub_0803D7FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03000F90U; // [0x0803D930]
    r4 = 0x087B5B80U; // [0x0803D92C]
    r6 = 0x1U;
loc_0803D802:
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D80A: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_0803F296(r0, r1, r2, r3); // 0x0803D810
    r1 = r6;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_0803F3F4(r0, r1, r2, r3); // 0x0803D818
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0x1U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r0 = sub_0803D4A0(r0, r1, r2, r3); // 0x0803D824
    r0 = *(u32*)(r4 + 0x10);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D832: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D83E;
    r0 = sub_0804014E(r0, r1, r2, r3); // 0x0803D83A
loc_0803D83E:
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r0);
loc_0803D842:
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D846: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D802;
    return r0;
    r5 = 0x03000F90U; // [0x0803D930]
    r4 = r0;
    r1 = 0x0300348CU; // [0x0803D93C]
    r0 = *(u32*)(r5);
    *(u32*)(r5) = (u32)r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D862: BL 0x08046AA2
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D86E: BL 0x08046AA2
    *(u32*)(r5) = (u32)r4;
    return r0;
    r4 = 0x0300348CU; // [0x0803D93C]
    r5 = 0x03000F90U; // [0x0803D930]
    r4 += 0x4U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)(r5);
    r1 = r4 - 4;
    *(u32*)(r5) = (u32)r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D88C: BL 0x08046AA2
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r0 + 0x4);
    r1 = r1 + r0;
    r0 = r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D898: BL 0x08046AA2
    *(u32*)(r5) = (u32)r4;
    return r0;
    r4 = 0x03000F90U; // [0x0803D930]
    r5 = r0;
    r0 = *(u32*)(r4 + 0x8);
    r2 = *(u32*)(r4);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4 + 0x8) = (u32)r1;
    r6 = 0x0300348CU; // [0x0803D93C]
    *(u32*)(r0 + 0xC) = (u32)r2;
    *(u32*)(r4) = (u32)r6;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D8C0: BL 0x08046AA2
    *(u32*)(r4) = (u32)r5;
    r0 = sub_0803D7FA(r0, r1, r2, r3); // 0x0803D8C6: BL 0x0803D7FA
    r5 = r0;
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D8EE;
    r0 = *(u32*)(r4);
    *(u32*)(r4) = (u32)r6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D8DC: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0xC);
    *(u32*)(r4) = (u32)r0;
loc_0803D8EE:
    r0 = r5;
    return r0;
    r4 = 0x03000F90U; // [0x0803D930]
    r1 = 0x0300348CU; // [0x0803D93C]
    r0 = *(u32*)(r4);
    *(u32*)(r4) = (u32)r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D902: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D928;
loc_0803D90C:
    r0 = *(u32*)(r4 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803D91E: BL 0x08046AA2
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D90C;
loc_0803D928:
    return r0;
    r0 = r0;
    r0 = *(u16*)(r0 + r6);
    r3 = (r7 >> 1);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803D842;
    r3 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r4 += 0x8CU;
    r0 = (r0 << 12);
    r2 = r0;
    r0 = r1;
    r3 = *(u32*)(r2);
    r1 = r2;
    r1 += 0x8U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803D95E(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0803D958;
    cmp_lhs = (s32)r3; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0803D95C;
loc_0803D958:
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x0803D958: BL 0x08049120
loc_0803D95C:
    return r0;
}

// ROM Address: 0x0803D95E..0x0803D966 (8 bytes, Thumb)
u32 sub_0803D95E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r2 + 0x4);
    r0 = sub_08046D18(r0, r1, r2, r3); // 0x0803D960: BL 0x08046D18
    return sub_0803D95C(r0, r1, r2, r3);
}

// ROM Address: 0x0803D96E..0x0803D9B4 (70 bytes, Thumb)
u32 sub_0803D96E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r3);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803D98C;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D984;
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803D982;
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x0803D97E: BL 0x08049120
loc_0803D982:
    return r0;
loc_0803D984:
    r2 = *(u32*)(r3 + 0x4);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803D986: BL 0x08049138
loc_0803D98A:
    return r0;
loc_0803D98C:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803D99A;
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803D98A;
    r0 = sub_080491A8(r0, r1, r2, r3); // 0x0803D994: BL 0x080491A8
    return r0;
loc_0803D99A:
    r3 = *(u32*)(r3 + 0x4);
    r0 = sub_0804918C(r0, r1, r2, r3); // 0x0803D99C: BL 0x0804918C
    return r0;
    r0 = r0;
    r0 = 0x4000000U; // (1 << 26)
    r0 = *(u16*)(r0);
    r0 = (r0 << 27);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803D9B4(r0, r1, r2, r3);
    r0 = 0x6000000U; // (3 << 25)
    return r0; // BX lr
}

// ROM Address: 0x0803D9B4..0x0803D9B8 (4 bytes, Thumb)
u32 sub_0803D9B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0600A000U; // [0x0803DA74]
    return r0; // BX lr
}

// ROM Address: 0x0803D9B8..0x0803DA74 (188 bytes, Thumb)
u32 sub_0803D9B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x4000000U; // (1 << 26)
    r0 = *(u16*)(r0);
    r0 = (r0 << 27);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803D9C6;
    r0 = 0x0600A000U; // [0x0803DA74]
    return r0; // BX lr
loc_0803D9C6:
    r0 = 0x6000000U; // (3 << 25)
    return r0; // BX lr
    r3 = *(u32*)(r0);
    r4 = *(u32*)(r0 + 0x8);
    r5 = 0x20U;
    r4 = r4 - r3;
    r6 = r5 - r4;
    r4 = *(u32*)(r0 + 0x4);
    r5 = (r4 << 5);
    r3 = r5 + r3;
    r3 = (r3 << 1);
    r3 = r3 + r1;
    r1 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_0803DA0C;
    r5 = (r2 << 16);
    r5 = (r5 >> 16);
    r6 = (r6 << 1);
loc_0803D9EE:
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803DA02;
loc_0803D9F6:
    *(u16*)(r3) = (u16)r5;
    r2 = *(u32*)(r0 + 0x8);
    r3 += 0x2U;
    r1 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0803D9F6;
loc_0803DA02:
    r1 = *(u32*)(r0 + 0xC);
    r3 = r6 + r3;
    r4 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0803D9EE;
loc_0803DA0C:
    return r0; // BX lr
    r3 = *(u32*)(r0);
    r4 = *(u32*)(r0 + 0x8);
    r5 = 0x20U;
    r4 = r4 - r3;
    r4 = r5 - r4;
    r5 = *(u32*)(r0 + 0x4);
    r6 = (r5 << 5);
    r3 = r6 + r3;
    r3 = (r3 << 1);
    r3 = r3 + r1;
    r1 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_0803DA50;
    r6 = (r4 << 1);
loc_0803DA2E:
    r1 = *(u32*)(r0);
    r4 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803DA46;
loc_0803DA36:
    r4 = r2;
    *(u16*)(r3) = (u16)r4;
    r4 = *(u32*)(r0 + 0x8);
    r3 += 0x2U;
    r2 += 0x1U;
    r1 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0803DA36;
loc_0803DA46:
    r1 = *(u32*)(r0 + 0xC);
    r3 = r6 + r3;
    r5 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0803DA2E;
loc_0803DA50:
    return r0; // BX lr
    r2 = 0x400U; // (1 << 10)
    r1 = (r2 >> 1);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0803DA5C: BL 0x0804912C
    return r0;
    r2 = 0x1U;
    r1 = r0;
    r0 = 0x7U;
    r2 = (r2 << 10);
    r0 = (r0 << 24);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803DA6E: BL 0x08049138
    return r0;
}

// ROM Address: 0x0803DA74..0x0803DA78 (4 bytes, Thumb)
u32 sub_0803DA74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0803DA78U;
    r0 = (r0 << 24);
    return r0;
}

// ROM Address: 0x0803DA78..0x0803DAAC (52 bytes, Thumb)
u32 sub_0803DA78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803DA8C;
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803DA84: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DAAA;
loc_0803DA8C:
    r6 = r0;
    r6 += 0x10U;
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r1 = 0x0U;
    *(u32*)r6 = r3; r6 += 4;
    *(u32*)(r0 + 0xC) = (u32)r5;
    *(u8*)(r0) = (u8)r1;
    *(u8*)(r0 + 0x1) = (u8)r1;
    r4 -= 0x10U;
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r2 += 0xCU;
    *(u32*)(r0 + 0x8) = (u32)r2;
loc_0803DAAA:
    return r0;
}

// ROM Address: 0x0803DAAC..0x0803DAB6 (10 bytes, Thumb)
u32 sub_0803DAAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r0;
    r5 = r2;
    r4 = r1;
    return r0;
}

// ROM Address: 0x0803DAB6..0x0803DAC8 (18 bytes, Thumb)
u32 sub_0803DAB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u16*)(r4);
    r4 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_0803DAC8(r0, r1, r2, r3);
    r0 = *(u16*)(r4);
    r4 += 0x2U;
    r5 -= 0x1U;
    *(u8*)(r6 + 0x3) = (u8)r0;
    return sub_0803DAD2(r0, r1, r2, r3);
}

// ROM Address: 0x0803DAC8..0x0803DAE6 (30 bytes, Thumb)
u32 sub_0803DAC8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r7;
    r0 = r6;
    r3 = *(u32*)(r6 + 0x20);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803DACE: BL __call_via_r3
    r5 -= 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_0803DAB6(r0, r1, r2, r3);
    return r0;
    r7 = r1;
    r4 = r0;
    r5 = r1;
    return sub_0803DAE8(r0, r1, r2, r3);
}

// ROM Address: 0x0803DAE6..0x0803DAE8 (2 bytes, Thumb)
u32 sub_0803DAE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 += 0x2U;
    return r0;
}

// ROM Address: 0x0803DAE8..0x0803DB20 (56 bytes, Thumb)
u32 sub_0803DAE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DAF2;
    cmp_lhs = (s32)r0; cmp_rhs = 10;
    if (cmp_lhs != cmp_rhs) return sub_0803DAE6(r0, r1, r2, r3);
loc_0803DAF2:
    r0 = r5 - r7;
    r6 = ((u32)((s32)r0 >> 1));
    if (cmp_lhs == cmp_rhs) return sub_0803DB5E(r0, r1, r2, r3);
    r2 = r6;
    r1 = r7;
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_0804001A(r0, r1, r2, r3); // 0x0803DAFE
    r1 = *(u32*)(r4 + 0x8);
    r1 -= 0xCU;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u8*)(r4);
    r1 = (r1 << 30);
    r1 = (r1 >> 30);
    if (cmp_lhs == cmp_rhs) return sub_0803DB20(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0803DB32(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0803DB3C(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x4);
    r0 = r1 - r0;
    stack[1] = r0; // [sp + 0x4]
    return sub_0803DB3C(r0, r1, r2, r3);
}

// ROM Address: 0x0803DB20..0x0803DB7C (92 bytes, Thumb)
u32 sub_0803DB20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u16*)(r5);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803DB3C;
    r1 = *(u32*)(r4 + 0x4);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    goto loc_0803DB3C;
    r0 += 0x1U;
    r1 = *(u32*)(r4 + 0x4);
    r0 = ((u32)((s32)r0 >> 1));
    r0 = r1 - r0;
    stack[1] = r0; // [sp + 0x4]
loc_0803DB3C:
    r1 = *(u16*)(r7);
    r7 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0803DB4E;
    r0 = *(u16*)(r7);
    r7 += 0x2U;
    r6 -= 0x1U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    goto loc_0803DB58;
loc_0803DB4E:
    r2 = 0x4; // sp + 0x4
    r0 = r4;
    r3 = *(u32*)(r4 + 0x20);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803DB54: BL __call_via_r3
loc_0803DB58:
    r6 -= 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803DB3C;
    r0 = *(u8*)(r4);
    r0 = (r0 << 29);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_0803DB78;
    r0 = *(u16*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DB78;
    r1 = *(u8*)(r4 + 0x1);
    r0 = *(u32*)(r4 + 0x8);
    r7 = r5 + 2;
    r0 = r0 + r1;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r5 = r7;
    return sub_0803DAE8(r0, r1, r2, r3);
loc_0803DB78:
    return r0;
}

// ROM Address: 0x0803DB7C..0x0803DC02 (134 bytes, Thumb)
u32 sub_0803DB7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u16*)(r1);
    r7 = r2;
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803DC70(r0, r1, r2, r3);
    r0 = *(u16*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 37;
    if (cmp_lhs != cmp_rhs) return sub_0803DC72(r0, r1, r2, r3);
    r0 = 0x0U;
    r1 = 0x20U;
    stack[5] = r1; // [sp + 0x14]
    stack[6] = r0; // [sp + 0x18]
    r5 += 0x2U;
    r0 = *(u16*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    if (cmp_lhs != cmp_rhs) goto loc_0803DBA8;
    r1 = 0x30U;
    stack[5] = r1; // [sp + 0x14]
    r5 += 0x2U;
loc_0803DBA8:
    r0 = *(u16*)(r5);
    r0 -= 0x30U;
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_0803DBCA;
loc_0803DBB0:
    r0 = stack[6]; // [sp + 0x18]
    r1 = *(u16*)(r5);
    r3 = (r0 << 2);
    r0 = r3 + r0;
    r0 = (r0 << 1);
    r0 = r0 + r1;
    r0 -= 0x30U;
    stack[6] = r0; // [sp + 0x18]
    r5 += 0x2U;
    r0 = *(u16*)(r5);
    r0 -= 0x30U;
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0803DBB0;
loc_0803DBCA:
    r0 = *(u16*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DBEA;
    cmp_lhs = (s32)r0; cmp_rhs = 83;
    if (cmp_lhs == cmp_rhs) return sub_0803DC02(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 100;
    if (cmp_lhs == cmp_rhs) return sub_0803DC1E(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 115;
    if (cmp_lhs != cmp_rhs) return sub_0803DC80(r0, r1, r2, r3);
    r1 = *(u32*)(r7);
    r0 = *(u32*)r1; r1 += 4;
    *(u32*)(r7) = (u32)r1;
    r1 = *(u16*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803DC80(r0, r1, r2, r3);
    goto loc_0803DBF2;
loc_0803DBEA:
    r0 = 0x0U;
    *(u16*)(r4) = (u16)r0;
    return r0;
loc_0803DBF2:
    r1 = *(u16*)(r0);
    r0 += 0x2U;
    *(u16*)(r4) = (u16)r1;
    r1 = *(u16*)(r0);
    r4 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803DBF2;
    return sub_0803DC80(r0, r1, r2, r3);
}

// ROM Address: 0x0803DC02..0x0803DC74 (114 bytes, Thumb)
u32 sub_0803DC02(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r7);
    r0 = *(u32*)r1; r1 += 4;
    *(u32*)(r7) = (u32)r1;
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803DC80(r0, r1, r2, r3);
loc_0803DC0E:
    r1 = *(u8*)(r0);
    r0 += 0x1U;
    *(u16*)(r4) = (u16)r1;
    r1 = *(u8*)(r0);
    r4 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803DC0E;
    return sub_0803DC80(r0, r1, r2, r3);
    r6 = 0x0U;
    stack[0] = r6; // [sp + 0x0]
    r1 = *(u32*)(r7);
    r0 = *(u32*)r1; r1 += 4;
    *(u32*)(r7) = (u32)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803DC32;
    r0 = (u32)(-(s32)r0);
    r1 = 0x1U;
    stack[0] = r1; // [sp + 0x0]
loc_0803DC32:
    r0 = sub_0805311C(r0, r1, r2, r3); // 0x0803DC32: BL 0x0805311C
    r0 += 0x30U;
    r2 = r0;
    r0 = r6;
    r3 = 0x4; // sp + 0x4
    *(u8*)(r3 + r0) = (u8)r2;
    r6 += 0x1U;
    r0 = r1;
    if (cmp_lhs != cmp_rhs) goto loc_0803DC32;
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DC56;
    r1 = 0x2DU;
    r0 = r6;
    r2 = 0x4; // sp + 0x4
    *(u8*)(r2 + r0) = (u8)r1;
    r6 += 0x1U;
loc_0803DC56:
    r0 = stack[6]; // [sp + 0x18]
    r0 = r0 - r6;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803DC6A;
loc_0803DC5E:
    r1 = stack[5]; // [sp + 0x14]
    r0 -= 0x1U;
    *(u16*)(r4) = (u16)r1;
    r4 += 0x2U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803DC5E;
loc_0803DC6A:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803DC80(r0, r1, r2, r3);
    return sub_0803DC74(r0, r1, r2, r3);
    return sub_0803DC90(r0, r1, r2, r3);
    return sub_0803DC82(r0, r1, r2, r3);
}

// ROM Address: 0x0803DC74..0x0803DC80 (12 bytes, Thumb)
u32 sub_0803DC74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_0803DC74:
    r6 -= 0x1U;
    r0 = *(u8*)(r3 + r6);
    *(u16*)(r4) = (u16)r0;
    r4 += 0x2U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803DC74;
    return r0;
}

// ROM Address: 0x0803DC80..0x0803DC82 (2 bytes, Thumb)
u32 sub_0803DC80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0803DC86(r0, r1, r2, r3);
}

// ROM Address: 0x0803DC82..0x0803DC86 (4 bytes, Thumb)
u32 sub_0803DC82(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r4) = (u16)r0;
    r4 += 0x2U;
    return r0;
}

// ROM Address: 0x0803DC86..0x0803DC96 (16 bytes, Thumb)
u32 sub_0803DC86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 += 0x2U;
    r0 = *(u16*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DC90;
    return sub_0803DB8C(r0, r1, r2, r3);
loc_0803DC90:
    r0 = 0x0U;
    *(u16*)(r4) = (u16)r0;
    return sub_0803DBEE(r0, r1, r2, r3);
}

// ROM Address: 0x0803DC98..0x0803DCE6 (78 bytes, Thumb)
u32 sub_0803DC98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x218; // sp + 0x218
    stack[128] = r0; // [sp + 0x200]
    r0 = sp;
    r2 = 0x200; // sp + 0x200
    r4 = sp;
    r1 = stack[133]; // [sp + 0x214]
    r0 = sub_0803DB7C(r0, r1, r2, r3); // 0x0803DCAC: BL 0x0803DB7C
    r1 = r4;
    r0 = r5;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0803DCB4
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r5 = r0;
    r6 = r1;
    r4 = r2;
    r1 = r2;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0803DCD2
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) return sub_0803DCE6(r0, r1, r2, r3);
    r1 = r4;
    r0 = r5;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0803DCDE
    return r0;
}

// ROM Address: 0x0803DCE6..0x0803DD32 (76 bytes, Thumb)
u32 sub_0803DCE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r5 + 0xC);
    r1 = 0x5CU;
    r2 = *(u32*)(r2);
    r0 = 0x4; // sp + 0x4
    r1 = *(u16*)(r2 + r1);
    r1 = (r1 << 1);
    r1 = *(u16*)(r2 + r1);
    r1 += 0x1U;
    r3 = (r1 << 1);
loc_0803DCF8:
    r1 = *(u16*)(r4);
    r2 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803DD06;
    r2 = *(u32*)(r2 + 0x4);
    r2 += 0x1U;
    goto loc_0803DD12;
loc_0803DD06:
    r2 = *(u32*)(r2);
    r7 = (r1 << 1);
    r7 = *(u16*)(r2 + r7);
    r7 = (r7 << 1);
    r2 = *(u16*)(r2 + r7);
    r2 += 0x1U;
loc_0803DD12:
    r3 = r3 + r2;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) goto loc_0803DD20;
    r4 += 0x2U;
    *(u16*)(r0) = (u16)r1;
    r0 += 0x2U;
    goto loc_0803DCF8;
loc_0803DD20:
    r1 = 0x2EU;
    *(u16*)(r0) = (u16)r1;
    r0 += 0x2U;
    *(u16*)(r0) = (u16)r1;
    r1 = r0 + 2;
    r0 = 0x0U;
    *(u16*)(r1) = (u16)r0;
    r1 = 0x4; // sp + 0x4
    r0 = r5;
    return r0;
}

// ROM Address: 0x0803DD3A..0x0803DD8A (80 bytes, Thumb)
u32 sub_0803DD3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x124; // sp + 0x124
    r6 = r1;
    stack[65] = r0; // [sp + 0x104]
    r4 = 0x4; // sp + 0x4
    r0 = r4;
    r1 = stack[72]; // [sp + 0x120]
    r2 = 0x104; // sp + 0x104
    r0 = sub_0803DB7C(r0, r1, r2, r3); // 0x0803DD4E: BL 0x0803DB7C
    r2 = r4;
    r1 = r6;
    r0 = r5;
    r0 = sub_0803DCC4(r0, r1, r2, r3); // 0x0803DD58
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r6 = r2;
    r0 -= 0xCU;
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0803DE4C(r0, r1, r2, r3);
loc_0803DD7C:
    r0 = *(u16*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803DE4C(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if (cmp_lhs != cmp_rhs) return sub_0803DD8A(r0, r1, r2, r3);
    r6 += 0x2U;
    goto loc_0803DD7C;
    return r0;
}

// ROM Address: 0x0803DD8A..0x0803DE50 (198 bytes, Thumb)
u32 sub_0803DD8A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r6;
    r0 = 0x0U;
    r3 = 0x0U;
loc_0803DD90:
    r1 = *(u16*)(r5);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DDD2;
    cmp_lhs = (s32)r1; cmp_rhs = 10;
    if (cmp_lhs != cmp_rhs) goto loc_0803DD9E;
    r5 += 0x2U;
    goto loc_0803DDD2;
loc_0803DD9E:
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0803DDA6;
    r5 += 0x4U;
    goto loc_0803DD90;
loc_0803DDA6:
    cmp_lhs = (s32)r1; cmp_rhs = 32;
    if (cmp_lhs != cmp_rhs) goto loc_0803DDAC;
    r3 = r5;
loc_0803DDAC:
    r2 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803DDB8;
    r1 = *(u32*)(r2 + 0x4);
    r1 += 0x1U;
    goto loc_0803DDC4;
loc_0803DDB8:
    r2 = *(u32*)(r2);
    r1 = (r1 << 1);
    r1 = *(u16*)(r2 + r1);
    r1 = (r1 << 1);
    r1 = *(u16*)(r2 + r1);
    r1 += 0x1U;
loc_0803DDC4:
    r0 = r1 + r0;
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803DE02;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DDD2;
    r5 = r3;
loc_0803DDD2:
    r0 = r5 - r6;
    r7 = ((u32)((s32)r0 >> 1));
    if (cmp_lhs == cmp_rhs) goto loc_0803DE38;
    r0 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0x14);
    r1 -= 0x10U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803DE38;
    r2 = r7;
    r1 = r6;
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_0804001A(r0, r1, r2, r3); // 0x0803DDE8
    r1 = *(u8*)(r4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803DE06;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0803DE0C;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0803DE16;
    r1 = *(u32*)(r4 + 0x4);
    r0 = r1 - r0;
    stack[0] = r0; // [sp + 0x0]
    goto loc_0803DE16;
loc_0803DE02:
    r5 += 0x2U;
    goto loc_0803DD90;
loc_0803DE06:
    r0 = *(u32*)(r4 + 0x4);
    stack[0] = r0; // [sp + 0x0]
    goto loc_0803DE16;
loc_0803DE0C:
    r0 += 0x1U;
    r1 = *(u32*)(r4 + 0x4);
    r0 = ((u32)((s32)r0 >> 1));
    r0 = r1 - r0;
    stack[0] = r0; // [sp + 0x0]
loc_0803DE16:
    r1 = *(u16*)(r6);
    r6 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0803DE28;
    r0 = *(u16*)(r6);
    r6 += 0x2U;
    r7 -= 0x1U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    goto loc_0803DE32;
loc_0803DE28:
    r2 = sp;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x20);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803DE2E: BL __call_via_r3
loc_0803DE32:
    r7 -= 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803DE16;
loc_0803DE38:
    r1 = *(u8*)(r4 + 0x1);
    r0 = stack[1]; // [sp + 0x4]
    r0 = r0 + r1;
    stack[1] = r0; // [sp + 0x4]
    r1 = *(u8*)(r4 + 0x1);
    r0 = *(u32*)(r4 + 0x8);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r6 = r5;
    return sub_0803DD74(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803DE50..0x0803DE78 (40 bytes, Thumb)
u32 sub_0803DE50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x4);
    stack[1] = r2; // [sp + 0x4]
    r2 = *(u32*)(r0 + 0x8);
    r2 -= 0xCU;
    stack[2] = r2; // [sp + 0x8]
    r3 = *(u32*)(r0 + 0x20);
    r2 = 0x4; // sp + 0x4
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803DE62: BL __call_via_r3
    return r0;
    r4 = *(u16*)(r1);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803DE78(r0, r1, r2, r3);
    r4 = 0x1U;
    *(u32*)(r3 + 0xC) = (u32)r4;
    return sub_0803DE88(r0, r1, r2, r3);
}

// ROM Address: 0x0803DE78..0x0803DE88 (16 bytes, Thumb)
u32 sub_0803DE78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r4; cmp_rhs = 32;
    if (cmp_lhs == cmp_rhs) goto loc_0803DE84;
    cmp_lhs = (s32)r4; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) goto loc_0803DE84;
    cmp_lhs = (s32)r4; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_0803DE88(r0, r1, r2, r3);
loc_0803DE84:
    r1 += 0x2U;
    return sub_0803DE6C(r0, r1, r2, r3);
}

// ROM Address: 0x0803DE88..0x0803DEA6 (30 bytes, Thumb)
u32 sub_0803DE88(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r3) = (u32)r1;
    *(u32*)(r3 + 0x4) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r3 + 0xC) = (u32)r1;
    r6 = 0x0U;
    r7 = 0x0U;
    *(u32*)(r3 + 0x8) = (u32)r1;
    r1 = *(u32*)(r3 + 0x4);
    r4 = *(u16*)(r1);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803DEA6(r0, r1, r2, r3);
    r4 = 0x1U;
    *(u32*)(r3 + 0xC) = (u32)r4;
    return r0; // BX lr
}

// ROM Address: 0x0803DEA6..0x0803DEFA (84 bytes, Thumb)
u32 sub_0803DEA6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r4; cmp_rhs = 32;
    if (cmp_lhs != cmp_rhs) goto loc_0803DEB0;
    r6 = r1;
    r7 = *(u32*)(r3 + 0x8);
    goto loc_0803DEC8;
loc_0803DEB0:
    cmp_lhs = (s32)r4; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) return sub_0803DEA2(r0, r1, r2, r3);
    cmp_lhs = (s32)r4; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) goto loc_0803DEBE;
    r4 = 0x1U;
    *(u32*)(r3 + 0xC) = (u32)r4;
    return sub_0803DEA2(r0, r1, r2, r3);
loc_0803DEBE:
    cmp_lhs = (s32)r4; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0803DEC8;
    r1 += 0x4U;
    *(u32*)(r3 + 0x4) = (u32)r1;
    return sub_0803DE96(r0, r1, r2, r3);
loc_0803DEC8:
    r5 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r4; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803DED4;
    r4 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    goto loc_0803DEE0;
loc_0803DED4:
    r5 = *(u32*)(r5);
    r4 = (r4 << 1);
    r4 = *(u16*)(r5 + r4);
    r4 = (r4 << 1);
    r4 = *(u16*)(r5 + r4);
    r4 += 0x1U;
loc_0803DEE0:
    r5 = *(u32*)(r3 + 0x8);
    r4 = r5 + r4;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0803DEF2;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803DEA2(r0, r1, r2, r3);
    r3 += 0x4U;
    *(u32*)r3 = r6; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    return sub_0803DEA2(r0, r1, r2, r3);
loc_0803DEF2:
    r1 += 0x2U;
    *(u32*)(r3 + 0x4) = (u32)r1;
    *(u32*)(r3 + 0x8) = (u32)r4;
    return sub_0803DE96(r0, r1, r2, r3);
}

// ROM Address: 0x0803DEFC..0x0803DF12 (22 bytes, Thumb)
u32 sub_0803DEFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x10; // sp + 0x10
    stack[0] = r1; // [sp + 0x0]
    r1 = stack[3]; // [sp + 0xC]
    r2 = sp;
    r0 = sub_0803DB7C(r0, r1, r2, r3); // 0x0803DF06: BL 0x0803DB7C
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// Evidence: writes IME 0x04000208: 0x0803DF1A ldr r0, [pc, #0xf8] (= 0x04000200) then 0x0803DF20 strh r6, [r0, #8]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0803DF14
// ROM Address: 0x0803DF14..0x0803DFDE (202 bytes, Thumb)
u32 Irq_WriteMaster1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r0 = 0x04000200U /* &REG_IE */; // [0x0803E014]
    r6 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r6;
    r0 = 0x087B5B94U; // [0x0803E018]
    r0 = *(u32*)(r0);
    r0 = sub_0803F26A(r0, r1, r2, r3); // 0x0803DF26
    r0 = sub_0803D4D0(r0, r1, r2, r3); // 0x0803DF2A
    r0 = 0x00000404U; // [0x0803E01C]
    r2 = 0xA0U;
    r1 = (r0 << 24);
    *(u16*)(r1) = (u16)r0;
    r0 = (r1 >> 18);
    *(u16*)(r1 + 0x20) = (u16)r0;
    *(u16*)(r1 + 0x22) = (u16)r6;
    *(u16*)(r1 + 0x24) = (u16)r6;
    *(u16*)(r1 + 0x26) = (u16)r0;
    r0 = 0x0U;
    *(u32*)(r1 + 0x28) = (u32)r0;
    *(u32*)(r1 + 0x2C) = (u32)r0;
    r1 = 0xF0U;
    r4 = 0x200; // sp + 0x200
    r0 = r4;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0803DF4C
    r1 = 0x0U;
    r0 = stack[137]; // [sp + 0x224]
    r2 = stack[140]; // [sp + 0x230]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0803DF56: BL 0x08046E40
    r0 = 0x087B5B94U; // [0x0803E018]
    r3 = 0x200; // sp + 0x200
    r0 += 0x10U;
    stack[131] = r0; // [sp + 0x20C]
    r0 = 0x1U;
    r1 = 0x0803F5A5U; // [0x0803E020]
    *(u8*)(r3 + 0x2) = (u8)r0;
    stack[136] = r1; // [sp + 0x220]
    r1 = 0xAU;
    *(u8*)(r3 + 0x1) = (u8)r1;
    stack[130] = r1; // [sp + 0x208]
    r2 = 0x78U;
    stack[129] = r2; // [sp + 0x204]
    *(u8*)(r3) = (u8)r0;
    r0 = 0x4U;
    *(u8*)(r3 + 0x3) = (u8)r0;
    r0 = r4;
    r1 = 0x0803E024U;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0803DF7E
    r2 = r5;
    r1 = 0x0803E04CU;
    r7 = sp;
    r0 = sp;
    r0 = sub_0803DEFA(r0, r1, r2, r3); // 0x0803DF8A
    r5 = 0x3U;
    r0 = 0x1EU;
    stack[130] = r0; // [sp + 0x208]
    stack[129] = r5; // [sp + 0x204]
    r3 = 0x200; // sp + 0x200
    *(u8*)(r3) = (u8)r6;
    *(u8*)(r3 + 0x3) = (u8)r5;
    r0 = r4;
    r1 = 0x0803E054U;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0803DFA0
    r6 = 0x2U;
    r3 = 0x200; // sp + 0x200
    r2 = r7;
    r1 = 0xDCU;
    r0 = r4;
    *(u8*)(r3 + 0x3) = (u8)r6;
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x0803DFB0
    r3 = 0x200; // sp + 0x200
    *(u8*)(r3 + 0x3) = (u8)r5;
    stack[129] = r5; // [sp + 0x204]
    r1 = 0x0803E064U;
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0803DFBE
    r3 = 0x200; // sp + 0x200
    *(u8*)(r3 + 0x3) = (u8)r6;
    r2 = stack[143]; // [sp + 0x23C]
    r1 = 0x0803E074U;
    r0 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0803DFCC
    r3 = 0x200; // sp + 0x200
    *(u8*)(r3 + 0x3) = (u8)r5;
    r0 = stack[144]; // [sp + 0x240]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803DFDE(r0, r1, r2, r3);
    r1 = 0x0803E084U;
    return sub_0803DFE0(r0, r1, r2, r3);
}

// ROM Address: 0x0803DFDE..0x0803DFE0 (2 bytes, Thumb)
u32 sub_0803DFDE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0803E0A0U;
    return r0;
}

// ROM Address: 0x0803DFE0..0x0803E014 (52 bytes, Thumb)
u32 sub_0803DFE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x200; // sp + 0x200
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0803DFE4
    r3 = 0x200; // sp + 0x200
    *(u8*)(r3 + 0x3) = (u8)r6;
    r1 = 0xDCU;
    r0 = r4;
    r2 = stack[141]; // [sp + 0x234]
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x0803DFF2
    r0 = 0x5U;
    r1 = 0x087B5B94U; // [0x0803E018]
    r0 = (r0 << 24);
    r2 = 0x20U;
    r1 += 0x4U;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0803E000: BL 0x08049144
    r2 = 0x9600U; // (75 << 9)
    r0 = 0x6000000U; // (3 << 25)
    r1 = stack[137]; // [sp + 0x224]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803E00E: BL 0x08049138
loc_0803E012:
    goto loc_0803E012;
    return r0;
}

// ROM Address: 0x0803E0B6..0x0803E0F2 (60 bytes, Thumb)
u32 sub_0803E0B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x10);
    r2 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E14E(r0, r1, r2, r3);
    r2 = (r1 << 27);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E0F6(r0, r1, r2, r3);
    r2 = 0x34U;
    r2 = *(u8*)(r2 + r0);
    r3 = *(u8*)(r0 + 0x12);
    r2 *= r3;
    r3 = 0x13U;
    r4 = (u32)(*(s8*)(r0 + r3));
    r3 = 0x40U;
    r3 = r3 - r4;
    r4 += 0x40U;
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    r3 = (r3 << 16);
    r4 *= r2;
    r2 = ((u32)((s32)r4 >> 10));
    r3 = (r3 >> 16);
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r0 + 0xC) = (u16)r3;
    *(u16*)(r0 + 0xE) = (u16)r2;
    r2 |= r3;
    if (cmp_lhs != cmp_rhs) return sub_0803E0F2(r0, r1, r2, r3);
    r2 = 0x0803E0B5U; // [0x0803E368]
    *(u32*)(r0 + 0x18) = (u32)r2;
    return sub_0803E0F6(r0, r1, r2, r3);
}

// ROM Address: 0x0803E0F2..0x0803E0F6 (4 bytes, Thumb)
u32 sub_0803E0F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x03000868U; // [0x0803E36C]
    *(u32*)(r0 + 0x18) = (u32)r2;
    return r0;
}

// ROM Address: 0x0803E0F6..0x0803E142 (76 bytes, Thumb)
u32 sub_0803E0F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r1 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803E114;
    r2 = *(u32*)(r0 + 0x28);
    r3 = *(u32*)(r2);
    *(u32*)(r0 + 0x8) = (u32)r3;
    r3 = *(u16*)(r2 + 0x6);
    r3 = (r3 << 14);
    *(u32*)(r0 + 0x20) = (u32)r3;
    r3 = *(u16*)(r2 + 0x8);
    r3 = (r3 << 14);
    *(u32*)(r0 + 0x24) = (u32)r3;
    r3 = *(u16*)(r2 + 0xA);
    *(u16*)(r0 + 0x14) = (u16)r3;
    r2 = *(u8*)(r2 + 0x4);
    *(u8*)(r0 + 0x11) = (u8)r2;
loc_0803E114:
    r2 = (r1 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803E124;
    r2 = 0x0U;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u8*)(r0 + 0x11);
    r3 = 0x4U;
    r2 &= ~r3;
    *(u8*)(r0 + 0x11) = (u8)r2;
loc_0803E124:
    r1 = (r1 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E14A(r0, r1, r2, r3);
    r2 = *(u16*)(r0 + 0x14);
    r1 = *(u32*)(r0 + 0x30);
    r3 = 0x00001063U; // [0x0803E370]
    r1 *= r2;
    r1 = (r1 >> 14);
    r2 = 0x000007FFU; // [0x0803E374]
    r1 *= r3;
    r1 = r1 + r2;
    r1 = (r1 >> 12);
    *(u32*)(r0 + 0x1C) = (u32)r1;
    r2 = *(u8*)(r0 + 0x11);
    r2 = (r2 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E148(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803E144..0x0803E18E (74 bytes, Thumb)
u32 sub_0803E144(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x4) = (u32)r1;
    goto loc_0803E14A;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_0803E14A:
    r1 = 0x1U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u8*)(r0 + 0x10);
    r6 = r1;
    r5 = r2;
    r0 = (r0 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803E18C;
    r0 = *(u8*)(r4 + 0x11);
    r1 = (r0 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E230(r0, r1, r2, r3);
    r0 = (r0 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E232(r0, r1, r2, r3);
    r0 = *(u32*)r4; r4 += 4;
    r1 = *(u32*)r4; r4 += 4;
    r4 -= 0x8U;
    r1 *= r5;
    r7 = r0 + r1;
    r1 = *(u8*)(r4 + 0x11);
    r1 = (r1 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E1D0(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r7;
    if (cmp_lhs > cmp_rhs) return Math_Divide6(r0, r1, r2, r3);
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x18);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803E186: BL __call_via_r3
    *(u32*)(r4) = (u32)r7;
loc_0803E18C:
    return r0;
}

// Evidence: calls BIOS Div (SWI 0x06) at 0803E198, 0803E1F0, 0803E25A; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0803E18E
// ROM Address: 0x0803E18E..0x0803E28C (254 bytes, Thumb)
u32 Math_Divide6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r4 + 0x1C);
    r0 = r0 + r2;
    r0 -= 0x1U;
    r0 = r0 - r1;
    r1 = r2;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r7 = r0;
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r4);
    r0 = (r0 << 1);
    r1 = r0 - r1;
    r0 = *(u32*)(r4 + 0x1C);
    r2 = r7;
    r0 *= r7;
    r0 = r1 + r0;
    stack[0] = r0; // [sp + 0x0]
    r1 = r6;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x18);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803E1B4: BL __call_via_r3
    r0 = (r7 << 2);
    r6 = r0 + r6;
    r0 = stack[0]; // [sp + 0x0]
    r5 = r5 - r7;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u8*)(r4 + 0x11);
    r1 = 0x4U;
    r0 &= ~r1;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u32*)(r4 + 0x1C);
    *(u32*)(r4 + 0x4) = (u32)r0;
    goto loc_0803E22A;
    r1 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_0803E1E6;
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x18);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803E1DE: BL __call_via_r3
    *(u32*)(r4) = (u32)r7;
    return sub_0803E18C(r0, r1, r2, r3);
loc_0803E1E6:
    r2 = r1;
    r1 = *(u32*)(r4 + 0x1C);
    r2 = r2 + r1;
    r2 -= 0x1U;
    r0 = r2 - r0;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r7 = r0;
    r0 = *(u32*)(r4 + 0x24);
    r1 = *(u32*)(r4);
    r0 = (r0 << 1);
    r1 = r0 - r1;
    r0 = *(u32*)(r4 + 0x1C);
    r2 = r7;
    r0 *= r7;
    r0 = r1 - r0;
    r0 -= 0x1U;
    stack[0] = r0; // [sp + 0x0]
    r1 = r6;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x18);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803E20E: BL __call_via_r3
    r0 = (r7 << 2);
    r6 = r0 + r6;
    r0 = stack[0]; // [sp + 0x0]
    r1 = 0x4U;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u8*)(r4 + 0x11);
    r5 = r5 - r7;
    r0 |= r1;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u32*)(r4 + 0x1C);
    r0 = (u32)(-(s32)r0);
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_0803E22A:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_0803E16A(r0, r1, r2, r3);
    return sub_0803E18C(r0, r1, r2, r3);
    return sub_0803E28C(r0, r1, r2, r3);
    goto loc_0803E234;
loc_0803E234:
    r0 = *(u32*)(r4 + 0x4);
    r2 = *(u32*)(r4);
    r0 *= r5;
    r7 = r2 + r0;
    r0 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_0803E252;
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x18);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803E24A: BL __call_via_r3
    *(u32*)(r4) = (u32)r7;
    return sub_0803E18C(r0, r1, r2, r3);
loc_0803E252:
    r1 = *(u32*)(r4 + 0x1C);
    r0 = r0 + r1;
    r0 -= 0x1U;
    r0 = r0 - r2;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r7 = r0;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r4);
    r0 *= r7;
    r0 = r1 + r0;
    r1 = *(u32*)(r4 + 0x24);
    r2 = *(u32*)(r4 + 0x20);
    r1 = r1 - r2;
    r0 = r0 - r1;
    stack[0] = r0; // [sp + 0x0]
    r1 = r6;
    r2 = r7;
    r0 = r4;
    r3 = *(u32*)(r4 + 0x18);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803E278: BL __call_via_r3
    r0 = (r7 << 2);
    r6 = r0 + r6;
    r0 = stack[0]; // [sp + 0x0]
    r5 = r5 - r7;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0803E234;
    return sub_0803E18C(r0, r1, r2, r3);
}

// ROM Address: 0x0803E2D6..0x0803E326 (80 bytes, Thumb)
u32 sub_0803E2D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x4000U; // (1 << 14)
    *(u32*)(r0 + 0x28) = (u32)r1;
    *(u32*)(r0 + 0x30) = (u32)r4;
    *(u8*)(r0 + 0x12) = (u8)r2;
    *(u8*)(r0 + 0x13) = (u8)r3;
    r1 = 0x1FU;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r1 = 0x0U;
loc_0803E2EE:
    r2 = (r1 << 6);
    r2 = r2 + r0;
    r3 = *(u8*)(r2 + 0x10);
    r1 += 0x1U;
    r3 = (r3 >> 1);
    r3 = (r3 << 1);
    *(u8*)(r2 + 0x10) = (u8)r3;
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803E2EE;
    return r0; // BX lr
    r2 = 0xFU;
    r3 = (r2 << 6);
    r3 = r3 + r0;
    r4 = *(u8*)(r3 + 0x10);
    r4 = (r4 << 31);
    if (cmp_lhs == cmp_rhs) return sub_0803E326(r0, r1, r2, r3);
    r3 = *(u32*)(r3 + 0x28);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0803E326(r0, r1, r2, r3);
    r1 = (r2 << 6);
    r0 = r1 + r0;
    r1 = *(u8*)(r0 + 0x10);
    r1 = (r1 >> 1);
    r1 = (r1 << 1);
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
}

// ROM Address: 0x0803E326..0x0803E32C (6 bytes, Thumb)
u32 sub_0803E326(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E306(r0, r1, r2, r3);
    return sub_0803E322(r0, r1, r2, r3);
}

// ROM Address: 0x0803E32C..0x0803E362 (54 bytes, Thumb)
u32 sub_0803E32C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r3;
    r4 = 0xFU;
    r3 = (r4 << 6);
    r3 = r3 + r0;
    r6 = *(u8*)(r3 + 0x10);
    r6 = (r6 << 31);
    if (cmp_lhs == cmp_rhs) return sub_0803E362(r0, r1, r2, r3);
    r6 = *(u32*)(r3 + 0x28);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0803E362(r0, r1, r2, r3);
    r6 = *(u8*)(r3 + 0x12);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_0803E362(r0, r1, r2, r3);
    r6 = r3;
    r3 = 0x13U;
    r6 = (u32)(*(s8*)(r6 + r3));
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) return sub_0803E362(r0, r1, r2, r3);
    r1 = (r4 << 6);
    r0 = r1 + r0;
    r1 = *(u8*)(r0 + 0x10);
    r1 = (r1 >> 1);
    r1 = (r1 << 1);
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
}

// ROM Address: 0x0803E362..0x0803E368 (6 bytes, Thumb)
u32 sub_0803E362(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E332(r0, r1, r2, r3);
    return sub_0803E35E(r0, r1, r2, r3);
}

// ROM Address: 0x0803E36A..0x0803E39E (52 bytes, Thumb)
u32 sub_0803E36A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r0 >> 32);
    r0 = (r5 >> 1);
    r0 = (r0 << 12);
    r3 = ((u32)((s32)r4 >> 1));
    r0 = r0;
    r7 = (r7 << 31);
    r0 = r0;
    r4 = 0x0U;
    r5 = (r4 << 6);
    r5 = r5 + r0;
    r5 = *(u8*)(r5 + 0x10);
    r5 = (r5 << 31);
    if (cmp_lhs != cmp_rhs) return sub_0803E39E(r0, r1, r2, r3);
    r4 = (r4 << 6);
    r0 = r4 + r0;
    r4 = 0x4000U; // (1 << 14)
    *(u32*)(r0 + 0x28) = (u32)r1;
    *(u32*)(r0 + 0x30) = (u32)r4;
    *(u8*)(r0 + 0x12) = (u8)r2;
    *(u8*)(r0 + 0x13) = (u8)r3;
    r1 = 0x1FU;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
}

// ROM Address: 0x0803E39E..0x0803E3A8 (10 bytes, Thumb)
u32 sub_0803E39E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) return sub_0803E37C(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0803E39A(r0, r1, r2, r3);
}

// ROM Address: 0x0803E3A8..0x0803E3C2 (26 bytes, Thumb)
u32 sub_0803E3A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r3 = (r2 << 6);
    r3 = r3 + r0;
    r3 = *(u8*)(r3 + 0x10);
    r3 = (r3 << 31);
    if (cmp_lhs != cmp_rhs) return sub_0803E3C2(r0, r1, r2, r3);
    r2 = (r2 << 6);
    r0 = r2 + r0;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803E3BC: BL 0x08049138
    return r0;
}

// ROM Address: 0x0803E3C2..0x0803E3CA (8 bytes, Thumb)
u32 sub_0803E3C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) return sub_0803E3AC(r0, r1, r2, r3);
    return sub_0803E3C0(r0, r1, r2, r3);
}

// ROM Address: 0x0803E3CA..0x0803E44C (130 bytes, Thumb)
u32 sub_0803E3CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r0;
    r0 = 0x0U;
    r1 = 0x0U;
loc_0803E3D0:
    r2 = (r1 << 6);
    r2 = r2 + r3;
    r2 = *(u8*)(r2 + 0x10);
    r2 = (r2 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0803E3DC;
    r0 += 0x1U;
loc_0803E3DC:
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803E3D0;
    return r0; // BX lr
    r1 = 0x0U;
    r2 = 0x0U;
loc_0803E3E8:
    r3 = (r1 << 6);
    r3 = r3 + r0;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    *(u8*)(r3 + 0x10) = (u8)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0803E3E8;
    return r0; // BX lr
    r5 = r0;
    r4 = 0x0U;
loc_0803E3FC:
    r0 = (r4 << 6);
    r0 = r0 + r5;
    r0 = sub_0803E0B6(r0, r1, r2, r3); // 0x0803E400: BL 0x0803E0B6
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803E3FC;
    return r0;
    r6 = r1;
    r5 = r0;
    r7 = r2;
    r4 = 0x0U;
loc_0803E416:
    r0 = (r4 << 6);
    r0 = r0 + r5;
    r2 = r7;
    r1 = r6;
    r0 = sub_0803E152(r0, r1, r2, r3); // 0x0803E41E
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803E416;
    return r0;
    r4 = 0x10U;
    r2 = 0x0U;
    r3 = (r1 << 24);
    r3 = (r3 >> 24);
loc_0803E434:
    r1 = (r2 << 6);
    r1 = r1 + r0;
    r5 = 0x34U;
    *(u8*)(r5 + r1) = (u8)r3;
    r5 = *(u8*)(r1 + 0x10);
    r2 += 0x1U;
    r5 |= r4;
    *(u8*)(r1 + 0x10) = (u8)r5;
    cmp_lhs = (s32)r2; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803E434;
    return r0; // BX lr
}

// ROM Address: 0x0803E44C..0x0803E4A0 (84 bytes, Thumb)
u32 sub_0803E44C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x400U; // (1 << 10)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803E452: BL 0x0803D5B8
    r6 = r0;
    r0 = 0x0U;
    r1 = 0x0U;
loc_0803E45C:
    r2 = (r0 << 6);
    r2 = r2 + r6;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    *(u8*)(r2 + 0x10) = (u8)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803E45C;
    r4 = r6;
    r5 = 0x0U;
    r7 = 0x1U;
loc_0803E46E:
    r1 = stack[0]; // [sp + 0x0]
    r0 = (r5 << 6);
    r1 = r0 + r1;
    r2 = *(u16*)(r1 + 0x10);
    r0 = 0xFFU;
    r0 += 0x2U;
    r0 &= ~r2;
    if (cmp_lhs != cmp_rhs) goto loc_0803E496;
    r0 = *(u8*)(r1 + 0x10);
    r2 = 0x40U;
    r0 = (r0 >> 1);
    r0 = (r0 << 1);
    *(u8*)(r1 + 0x10) = (u8)r0;
    r0 = r4;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803E48A: BL 0x08049138
    r0 = *(u8*)(r4 + 0x10);
    r0 |= r7;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r4 += 0x40U;
loc_0803E496:
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803E46E;
    r0 = r6;
    return r0;
}

// ROM Address: 0x0803E4A0..0x0803E4E4 (68 bytes, Thumb)
u32 sub_0803E4A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0xFFU;
    r6 = r1;
    r5 = r0;
    r4 = 0x0U;
    r7 += 0x2U;
loc_0803E4AC:
    r0 = (r4 << 6);
    r1 = r0 + r6;
    r2 = *(u16*)(r1 + 0x10);
    r0 = r7;
    r0 &= ~r2;
    if (cmp_lhs != cmp_rhs) goto loc_0803E4D6;
    r0 = 0x0U;
loc_0803E4BA:
    r2 = (r0 << 6);
    r2 = r2 + r5;
    r2 = *(u8*)(r2 + 0x10);
    r2 = (r2 << 31);
    if (cmp_lhs != cmp_rhs) goto loc_0803E4D0;
    r0 = (r0 << 6);
    r0 = r0 + r5;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803E4CA: BL 0x08049138
    goto loc_0803E4D6;
loc_0803E4D0:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803E4BA;
loc_0803E4D6:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803E4AC;
    r0 = r6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803E4DE: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x0803E4E4..0x0803E514 (48 bytes, Thumb)
u32 sub_0803E4E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r2 += 0x50U;
    r3 = *(u8*)(r2 + 0x8);
    r1 = 0x11U;
    r4 = r3;
    r4 &= r1;
    r1 = r0;
    r1 += 0x40U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803E55C(r0, r1, r2, r3);
    r4 = *(u8*)(r2 + 0xA);
    r6 = 0x4U;
    cmp_lhs = (s32)r4; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) return sub_0803E514(r0, r1, r2, r3);
    r2 = *(u8*)(r1 + 0xA);
    r2 &= ~r6;
    *(u8*)(r1 + 0xA) = (u8)r2;
    r1 = *(u8*)(r0 + 0x10);
    r1 = (r1 >> 1);
    r1 = (r1 << 1);
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
}

// ROM Address: 0x0803E514..0x0803E574 (96 bytes, Thumb)
u32 sub_0803E514(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u8*)(r2 + 0xC);
    r4 = (r4 << 2);
    r3 = (r3 << 26);
    *(u8*)(r1 + 0x8) = (u8)r5;
    r5 = 0x087B6724U; // [0x0803E7A8]
    r4 = *(u32*)(r5 + r4);
    *(u32*)(r0 + 0x40) = (u32)r4;
    *(u8*)(r1 + 0xA) = (u8)r6;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803E536;
    r1 = *(u8*)(r1 + 0x8);
    *(u32*)(r0 + 0x30) = (u32)r4;
    r2 = 0x17U;
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = *(u8*)(r0 + 0x10);
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return sub_0803E510(r0, r1, r2, r3);
loc_0803E536:
    r3 = 0x087B6724U; // [0x0803E7A8]
    r2 = *(u8*)(r2 + 0xB);
    r3 -= 0x4U;
    r3 = *(u32*)(r3);
    r1 = *(u8*)(r1 + 0x8);
    r3 = *(u32*)(r3 + 0xC);
    r5 = *(u32*)(r3 + 0x8);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r2 = (r2 << 2);
    r2 = r5 + r2;
    *(u32*)(r0 + 0x28) = (u32)r2;
    *(u32*)(r0 + 0x30) = (u32)r4;
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = *(u8*)(r0 + 0x10);
    r2 = 0x1FU;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return sub_0803E510(r0, r1, r2, r3);
    r4 = 0x44U;
    r3 &= r4;
    if (cmp_lhs == cmp_rhs) return sub_0803E510(r0, r1, r2, r3);
    r3 = *(u8*)(r2 + 0xC);
    *(u8*)(r1 + 0x8) = (u8)r3;
    r1 = *(u8*)(r2 + 0xC);
    r2 = 0x10U;
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = *(u8*)(r0 + 0x10);
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return sub_0803E510(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_ram_copy_byte1_copies_the_actors_byte_into_the_word_the_literal_names seeds 0x2A at the argument's +0x5E and asserts that byte at 0x030038A7; 0x0803E578 calls 0x0803E4E4, 0x0803E57E loads the pointer literal whose -4 word (0x0803E582-0x0803E584) is the destination, and 0x0803E580-0x0803E586 copy the byte at argument+0x50+0xE into that word's low byte, at +3
// ROM Address: 0x0803E574..0x0803E848 (724 bytes, Thumb)
u32 Ram_CopyByte1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803E578: BL 0x0803E4E4
    r4 += 0x50U;
    r1 = 0x087B6724U; // [0x0803E7A8]
    r0 = *(u8*)(r4 + 0xE);
    r1 -= 0x4U;
    r1 = *(u32*)(r1);
    *(u8*)(r1 + 0x3) = (u8)r0;
    return r0;
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803E58E: BL 0x0803E4E4
    r0 = 0x087B6724U; // [0x0803E7A8]
    r4 += 0x50U;
    r0 -= 0x4U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r0);
    r1 = *(u8*)(r1 + 0x2);
    r1 += 0xFFU;
    *(u8*)(r2 + 0x1) = (u8)r1;
    r1 = *(u8*)(r4 + 0xE);
    r0 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    return r0;
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0x8);
    r3 = *(u8*)(r1 + 0xB);
    r2 = r2 - r3;
    r2 = (r2 << 24);
    r2 = ((u32)((s32)r2 >> 24));
    *(u8*)(r1 + 0x8) = (u8)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803E5CC;
    r2 = 0x0U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    r2 = *(u8*)(r1 + 0xA);
    r2 = (r2 >> 2);
    r2 = (r2 << 2);
    *(u8*)(r1 + 0xA) = (u8)r2;
loc_0803E5CC:
    r1 = *(u8*)(r1 + 0x8);
    r2 = 0x10U;
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = *(u8*)(r0 + 0x10);
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0x8);
    r3 = *(u8*)(r1 + 0xB);
    r2 = r2 + r3;
    r2 = (r2 << 24);
    r2 = ((u32)((s32)r2 >> 24));
    *(u8*)(r1 + 0x8) = (u8)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 64;
    if (cmp_lhs < cmp_rhs) goto loc_0803E5FA;
    r2 = 0x40U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    r2 = *(u8*)(r1 + 0xA);
    r2 = (r2 >> 2);
    r2 = (r2 << 2);
    *(u8*)(r1 + 0xA) = (u8)r2;
loc_0803E5FA:
    r1 = *(u8*)(r1 + 0x8);
    r2 = 0x10U;
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = *(u8*)(r0 + 0x10);
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803E60C: BL 0x0803E4E4
    r0 = 0x5EU;
    r1 = *(u8*)(r0 + r4);
    r0 = r4;
    r0 += 0x40U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803E61E;
    *(u8*)(r0 + 0xC) = (u8)r1;
loc_0803E61E:
    r1 = *(u8*)(r0 + 0xC);
    r3 = 0x1U;
    r2 = (r1 << 28);
    r2 = (r2 >> 28);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803E646;
    r1 = (r1 >> 4);
    *(u8*)(r0 + 0xB) = (u8)r1;
    r1 = 0x0803E5DBU; // [0x0803E7AC]
    *(u32*)(r4 + 0x54) = (u32)r1;
    r1 = *(u8*)(r0 + 0xA);
    r1 |= r3;
    *(u8*)(r0 + 0xA) = (u8)r1;
    r0 = *(u8*)(r0 + 0xB);
    cmp_lhs = (s32)r0; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) goto loc_0803E644;
    r0 = r4;
    r0 = sub_0803E5DA(r0, r1, r2, r3); // 0x0803E640
loc_0803E644:
    return r0;
loc_0803E646:
    r2 = (r1 << 24);
    r5 = (r2 >> 28);
    if (cmp_lhs != cmp_rhs) goto loc_0803E668;
    r1 = *(u8*)(r0 + 0xC);
    *(u8*)(r0 + 0xB) = (u8)r1;
    r1 = 0x0803E5ADU; // [0x0803E7B0]
    *(u32*)(r4 + 0x54) = (u32)r1;
    r1 = *(u8*)(r0 + 0xA);
    r1 |= r3;
    *(u8*)(r0 + 0xA) = (u8)r1;
    r0 = *(u8*)(r0 + 0xB);
    cmp_lhs = (s32)r0; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) goto loc_0803E644;
    r0 = r4;
    r0 = sub_0803E5AC(r0, r1, r2, r3); // 0x0803E662
    return r0;
loc_0803E668:
    r3 = 0xFU;
    r3 &= ~r1;
    if (cmp_lhs != cmp_rhs) goto loc_0803E67A;
    r1 = (r1 >> 4);
    *(u8*)(r0 + 0xB) = (u8)r1;
    r0 = r4;
    r0 = sub_0803E5DA(r0, r1, r2, r3); // 0x0803E674
loc_0803E678:
    return r0;
loc_0803E67A:
    r2 = (r2 >> 28);
    cmp_lhs = (s32)r2; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) goto loc_0803E678;
    r1 &= r2;
    *(u8*)(r0 + 0xB) = (u8)r1;
    r0 = r4;
    r0 = sub_0803E5AC(r0, r1, r2, r3); // 0x0803E686
    return r0;
    r1 = 0x4DU;
    r1 = *(u8*)(r1 + r0);
    r3 = 0x087B6C84U; // [0x0803E7B4]
    r2 = *(u32*)(r0 + 0x40);
    r1 = (r1 << 1);
    r1 = *(u16*)(r3 + r1);
    r2 *= r1;
    r1 = (r2 >> 16);
    *(u32*)(r0 + 0x40) = (u32)r1;
    *(u32*)(r0 + 0x30) = (u32)r1;
    r1 = *(u8*)(r0 + 0x10);
    r2 = 0x2U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803E6AE: BL 0x0803E4E4
    r0 = 0x5EU;
    r1 = *(u8*)(r0 + r4);
    r0 = r4;
    r0 += 0x40U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803E6C0;
    *(u8*)(r0 + 0xD) = (u8)r1;
loc_0803E6C0:
    r3 = *(u8*)(r0 + 0xA);
    r1 = (r3 << 29);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0803E6EC;
    r1 = *(u8*)(r0 + 0xD);
    r5 = 0x2U;
    r2 = (r1 << 24);
    r2 = (r2 >> 28);
    cmp_lhs = (s32)r2; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) goto loc_0803E6EE;
    r0 = (r1 << 28);
    r2 = 0x087B6C84U; // [0x0803E7B4]
    r0 = (r0 >> 27);
    r0 = *(u16*)(r2 + r0);
    r1 = *(u32*)(r4 + 0x40);
    r1 *= r0;
    r0 = (r1 >> 16);
    *(u32*)(r4 + 0x40) = (u32)r0;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    r0 |= r5;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_0803E6EC:
    return r0;
loc_0803E6EE:
    cmp_lhs = (s32)r2; cmp_rhs = 14;
    if (cmp_lhs != cmp_rhs) goto loc_0803E70E;
    r2 = 0x087B6C84U; // [0x0803E7B4]
    r0 = (r1 << 28);
    r0 = (r0 >> 27);
    r2 -= 0x80U;
    r0 = *(u16*)(r2 + r0);
    r1 = *(u32*)(r4 + 0x40);
    r1 *= r0;
    r0 = (r1 >> 16);
    *(u32*)(r4 + 0x40) = (u32)r0;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    r0 |= r5;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return r0;
loc_0803E70E:
    r1 = 0x0803E68DU; // [0x0803E7B8]
    *(u32*)(r4 + 0x54) = (u32)r1;
    r1 = 0x1U;
    r1 |= r3;
    *(u8*)(r0 + 0xA) = (u8)r1;
    return r0;
    r1 = 0x4DU;
    r1 = *(u8*)(r1 + r0);
    r3 = 0x087B6A04U; // [0x0803E7BC]
    r2 = *(u32*)(r0 + 0x40);
    r1 = (r1 << 1);
    r1 = *(u16*)(r3 + r1);
    r2 *= r1;
    r1 = (r2 >> 14);
    *(u32*)(r0 + 0x40) = (u32)r1;
    *(u32*)(r0 + 0x30) = (u32)r1;
    r1 = *(u8*)(r0 + 0x10);
    r2 = 0x2U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803E73C: BL 0x0803E4E4
    r0 = 0x5EU;
    r1 = *(u8*)(r0 + r4);
    r0 = r4;
    r0 += 0x40U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803E74E;
    *(u8*)(r0 + 0xD) = (u8)r1;
loc_0803E74E:
    r3 = *(u8*)(r0 + 0xA);
    r1 = (r3 << 29);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0803E77A;
    r1 = *(u8*)(r0 + 0xD);
    r5 = 0x2U;
    r2 = (r1 << 24);
    r2 = (r2 >> 28);
    cmp_lhs = (s32)r2; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) goto loc_0803E77C;
    r0 = (r1 << 28);
    r2 = 0x087B6A04U; // [0x0803E7BC]
    r0 = (r0 >> 27);
    r0 = *(u16*)(r2 + r0);
    r1 = *(u32*)(r4 + 0x40);
    r1 *= r0;
    r0 = (r1 >> 14);
    *(u32*)(r4 + 0x40) = (u32)r0;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    r0 |= r5;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_0803E77A:
    return r0;
loc_0803E77C:
    cmp_lhs = (s32)r2; cmp_rhs = 14;
    if (cmp_lhs != cmp_rhs) goto loc_0803E79C;
    r2 = 0x087B6A04U; // [0x0803E7BC]
    r0 = (r1 << 28);
    r0 = (r0 >> 27);
    r2 -= 0x80U;
    r0 = *(u16*)(r2 + r0);
    r1 = *(u32*)(r4 + 0x40);
    r1 *= r0;
    r0 = (r1 >> 15);
    *(u32*)(r4 + 0x40) = (u32)r0;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    r0 |= r5;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return r0;
loc_0803E79C:
    r1 = 0x0803E71BU; // [0x0803E7C0]
    *(u32*)(r4 + 0x54) = (u32)r1;
    r1 = 0x1U;
    r1 |= r3;
    *(u8*)(r0 + 0xA) = (u8)r1;
    return r0;
    *(u32*)(r4 + 0x70) = (u32)r4;
    r3 = (r7 >> 1);
    return sub_0803E366(r0, r1, r2, r3);
    r3 = (r0 >> 32);
    return sub_0803E30E(r0, r1, r2, r3);
    r3 = (r0 >> 32);
    r4 = *(u32*)(r0 + 0x48);
    r3 = (r7 >> 1);
    return sub_0803E4D6(r0, r1, r2, r3);
    r3 = (r0 >> 32);
    r4 = *(u32*)(r0 + 0x20);
    r3 = (r7 >> 1);
    goto loc_0803E5FA;
    r3 = (r0 >> 32);
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0xD);
    r4 = 0x087B6C84U; // [0x0803EA48]
    r3 = *(u32*)(r0 + 0x40);
    r2 = (r2 << 1);
    r2 = *(u16*)(r4 + r2);
    r5 = 0x2U;
    r3 *= r2;
    r4 = (r3 >> 16);
    *(u32*)(r0 + 0x40) = (u32)r4;
    *(u32*)(r0 + 0x30) = (u32)r4;
    r2 = *(u8*)(r0 + 0x10);
    r2 |= r5;
    r3 = r2;
    *(u8*)(r0 + 0x10) = (u8)r3;
    r2 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0803E802;
    *(u32*)(r0 + 0x40) = (u32)r2;
    *(u32*)(r0 + 0x30) = (u32)r2;
    r3 |= r5;
    r2 = r3;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r0 = *(u8*)(r1 + 0xA);
    r2 = 0x8U;
    r0 &= ~r2;
    r0 = (r0 >> 2);
    r0 = (r0 << 2);
    *(u8*)(r1 + 0xA) = (u8)r0;
loc_0803E802:
    return r0; // BX lr
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0xD);
    r4 = 0x087B6A04U; // [0x0803EA4C]
    r3 = *(u32*)(r0 + 0x40);
    r2 = (r2 << 1);
    r2 = *(u16*)(r4 + r2);
    r5 = 0x2U;
    r3 *= r2;
    r4 = (r3 >> 14);
    *(u32*)(r0 + 0x40) = (u32)r4;
    *(u32*)(r0 + 0x30) = (u32)r4;
    r2 = *(u8*)(r0 + 0x10);
    r2 |= r5;
    r3 = r2;
    *(u8*)(r0 + 0x10) = (u8)r3;
    r2 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0803E844;
    *(u32*)(r0 + 0x40) = (u32)r2;
    *(u32*)(r0 + 0x30) = (u32)r2;
    r3 |= r5;
    r2 = r3;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r0 = *(u8*)(r1 + 0xA);
    r2 = 0x8U;
    r0 &= ~r2;
    r0 = (r0 >> 2);
    r0 = (r0 << 2);
    *(u8*)(r1 + 0xA) = (u8)r0;
loc_0803E844:
    return r0; // BX lr
}

// ROM Address: 0x0803E848..0x0803E89A (82 bytes, Thumb)
u32 sub_0803E848(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r2 += 0x50U;
    r3 = *(u8*)(r2 + 0xE);
    r1 = r0;
    r1 += 0x40U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803E85A;
    *(u8*)(r1 + 0xD) = (u8)r3;
loc_0803E85A:
    r3 = *(u8*)(r1 + 0xA);
    r4 = (r3 << 29);
    r4 = (r4 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0803E8B8(r0, r1, r2, r3);
    r5 = *(u8*)(r2 + 0x8);
    r4 = 0x11U;
    r4 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803E880;
    r4 = *(u8*)(r2 + 0xA);
    cmp_lhs = (s32)r4; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) return sub_0803E8A4(r0, r1, r2, r3);
    r6 = 0x087B6724U; // [0x0803EA50]
    r4 = (r4 << 2);
    r4 = *(u32*)(r6 + r4);
    *(u32*)(r0 + 0x44) = (u32)r4;
    r4 = 0x8U;
    r3 |= r4;
    *(u8*)(r1 + 0xA) = (u8)r3;
    goto loc_0803E884;
loc_0803E880:
    r3 = (r3 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803E8A4(r0, r1, r2, r3);
loc_0803E884:
    r3 = *(u32*)(r0 + 0x44);
    r6 = *(u32*)(r0 + 0x40);
    r4 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0803E89A(r0, r1, r2, r3);
    r3 = 0x0803E807U; // [0x0803EA54]
    *(u32*)(r0 + 0x54) = (u32)r3;
    r3 = *(u8*)(r1 + 0xA);
    r3 |= r4;
    *(u8*)(r1 + 0xA) = (u8)r3;
    return sub_0803E8A4(r0, r1, r2, r3);
}

// ROM Address: 0x0803E89A..0x0803E950 (182 bytes, Thumb)
u32 sub_0803E89A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0803E7C5U; // [0x0803EA58]
    *(u32*)(r0 + 0x54) = (u32)r3;
    r3 = *(u8*)(r1 + 0xA);
    r3 |= r4;
    *(u8*)(r1 + 0xA) = (u8)r3;
    r3 = 0x44U;
    r5 &= r3;
    if (cmp_lhs == cmp_rhs) goto loc_0803E8B8;
    r2 = *(u8*)(r2 + 0xC);
    *(u8*)(r1 + 0x8) = (u8)r2;
    *(u8*)(r0 + 0x12) = (u8)r2;
    r1 = *(u8*)(r0 + 0x10);
    r2 = 0x10U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
loc_0803E8B8:
    return r0; // BX lr
    r1 = r0;
    r1 += 0x50U;
    r3 = 0x4FU;
    r3 = *(u8*)(r3 + r0);
    r2 = *(u8*)(r1 + 0x1);
    r2 = r2 + r3;
    r2 = (r2 << 26);
    r2 = (r2 >> 26);
    *(u8*)(r1 + 0x1) = (u8)r2;
    r3 = 0x087B6E84U; // [0x0803EA5C]
    r1 = *(u8*)(r1);
    r2 = (u32)(*(s8*)(r3 + r2));
    r1 *= r2;
    r1 = ((u32)((s32)r1 >> 6));
    r2 = *(u32*)(r0 + 0x40);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803E8EC;
    r3 = 0x087B6C84U; // [0x0803EA48]
    r1 = (r1 << 1);
    r3 -= 0x80U;
    r1 = r3 - r1;
    r1 = *(u16*)(r1);
    r2 *= r1;
    r1 = (r2 >> 16);
    goto loc_0803E8F8;
loc_0803E8EC:
    r3 = 0x087B6A04U; // [0x0803EA4C]
    r1 = (r1 << 1);
    r3 -= 0x80U;
    r1 = *(u16*)(r3 + r1);
    r2 *= r1;
    r1 = (r2 >> 15);
loc_0803E8F8:
    *(u32*)(r0 + 0x30) = (u32)r1;
    r1 = *(u8*)(r0 + 0x10);
    r2 = 0x2U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803E908: BL 0x0803E4E4
    r2 = r4;
    r2 += 0x40U;
    r3 = *(u8*)(r2 + 0xA);
    r0 = (r3 << 29);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0803E94E;
    r0 = r4;
    r0 += 0x50U;
    r1 = *(u8*)(r0 + 0x8);
    r5 = 0x11U;
    r1 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803E928;
    r1 = 0x0U;
    *(u8*)(r0 + 0x1) = (u8)r1;
loc_0803E928:
    r1 = *(u8*)(r0 + 0xE);
    r5 = (r1 << 28);
    if (cmp_lhs == cmp_rhs) goto loc_0803E934;
    r5 = (r1 << 28);
    r5 = (r5 >> 26);
    *(u8*)(r0) = (u8)r5;
loc_0803E934:
    r0 = (r1 << 24);
    r0 = (r0 >> 28);
    if (cmp_lhs == cmp_rhs) goto loc_0803E93E;
    r0 = (r1 >> 4);
    *(u8*)(r2 + 0xF) = (u8)r0;
loc_0803E93E:
    r0 = 0x0803E8BDU; // [0x0803EA60]
    *(u32*)(r4 + 0x54) = (u32)r0;
    r0 = 0x1U;
    r0 |= r3;
    *(u8*)(r2 + 0xA) = (u8)r0;
    r0 = r4;
    r0 = sub_0803E8BC(r0, r1, r2, r3); // 0x0803E94A
loc_0803E94E:
    return r0;
}

// ROM Address: 0x0803E950..0x0803E952 (2 bytes, Thumb)
u32 sub_0803E950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803E954..0x0803E9A8 (84 bytes, Thumb)
u32 sub_0803E954(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0x8);
    r3 = *(u8*)(r1 + 0xB);
    r2 = r2 - r3;
    r2 = (r2 << 24);
    r2 = ((u32)((s32)r2 >> 24));
    *(u8*)(r1 + 0x8) = (u8)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803E970;
    r2 = 0x0U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    r2 = 0x0803E8BDU; // [0x0803EA60]
    *(u32*)(r0 + 0x54) = (u32)r2;
loc_0803E970:
    r1 = *(u8*)(r1 + 0x8);
    r2 = 0x10U;
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = *(u8*)(r0 + 0x10);
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return sub_0803E8BC(r0, r1, r2, r3);
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0x8);
    r3 = *(u8*)(r1 + 0xB);
    r2 = r2 + r3;
    r2 = (r2 << 24);
    r2 = ((u32)((s32)r2 >> 24));
    *(u8*)(r1 + 0x8) = (u8)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 64;
    if (cmp_lhs < cmp_rhs) goto loc_0803E99A;
    r2 = 0x40U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    r2 = 0x0803E8BDU; // [0x0803EA60]
    *(u32*)(r0 + 0x54) = (u32)r2;
loc_0803E99A:
    r1 = *(u8*)(r1 + 0x8);
    r2 = 0x10U;
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = *(u8*)(r0 + 0x10);
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return sub_0803E8BC(r0, r1, r2, r3);
}

// ROM Address: 0x0803E9A8..0x0803EA24 (124 bytes, Thumb)
u32 sub_0803E9A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803E9AC: BL 0x0803E4E4
    r0 = r5;
    r0 += 0x50U;
    r1 = *(u8*)(r0 + 0xE);
    r4 = r5;
    r4 += 0x40U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803E9C0;
    *(u8*)(r4 + 0xC) = (u8)r1;
loc_0803E9C0:
    r1 = *(u8*)(r4 + 0xA);
    r1 = (r1 << 29);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0803EA44(r0, r1, r2, r3);
    r1 = *(u8*)(r0 + 0x8);
    r2 = 0x11U;
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_0803E9D4;
    r1 = 0x0U;
    *(u8*)(r0 + 0x1) = (u8)r1;
loc_0803E9D4:
    r0 = *(u8*)(r4 + 0xC);
    r1 = (r0 << 28);
    if (cmp_lhs != cmp_rhs) goto loc_0803E9F0;
    r0 = (r0 >> 4);
    *(u8*)(r4 + 0xB) = (u8)r0;
    r0 = 0x0803E97FU; // [0x0803EA64]
    *(u32*)(r5 + 0x54) = (u32)r0;
    r0 = *(u8*)(r4 + 0xB);
    cmp_lhs = (s32)r0; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) return sub_0803EA36(r0, r1, r2, r3);
    r0 = r5;
    r0 = sub_0803E5DA(r0, r1, r2, r3); // 0x0803E9EA
    return sub_0803EA36(r0, r1, r2, r3);
loc_0803E9F0:
    r1 = (r0 << 24);
    r2 = (r1 >> 28);
    if (cmp_lhs != cmp_rhs) goto loc_0803EA0C;
    r0 = *(u8*)(r4 + 0xC);
    *(u8*)(r4 + 0xB) = (u8)r0;
    r0 = 0x0803E955U /* &sub_0803E954 */; // [0x0803EA68]
    *(u32*)(r5 + 0x54) = (u32)r0;
    r0 = *(u8*)(r4 + 0xB);
    cmp_lhs = (s32)r0; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) return sub_0803EA36(r0, r1, r2, r3);
    r0 = r5;
    r0 = sub_0803E5AC(r0, r1, r2, r3); // 0x0803EA06
    return sub_0803EA36(r0, r1, r2, r3);
loc_0803EA0C:
    r2 = 0xFU;
    r2 &= ~r0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r6 = 0x0803E8BDU; // [0x0803EA60]
    if (cmp_lhs != cmp_rhs) return sub_0803EA24(r0, r1, r2, r3);
    r0 = (r0 >> 4);
    *(u8*)(r4 + 0xB) = (u8)r0;
    r0 = r5;
    r0 = sub_0803E5DA(r0, r1, r2, r3); // 0x0803EA1C
    *(u32*)(r5 + 0x54) = (u32)r6;
    return sub_0803EA36(r0, r1, r2, r3);
}

// ROM Address: 0x0803EA24..0x0803EA46 (34 bytes, Thumb)
u32 sub_0803EA24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 >> 28);
    cmp_lhs = (s32)r1; cmp_rhs = 15;
    if (cmp_lhs != cmp_rhs) goto loc_0803EA36;
    r0 &= r1;
    *(u8*)(r4 + 0xB) = (u8)r0;
    r0 = r5;
    r0 = sub_0803E5AC(r0, r1, r2, r3); // 0x0803EA30
    *(u32*)(r5 + 0x54) = (u32)r6;
loc_0803EA36:
    r0 = *(u8*)(r4 + 0xA);
    r1 = 0x1U;
    r0 |= r1;
    *(u8*)(r4 + 0xA) = (u8)r0;
    r0 = r5;
    r0 = sub_0803E8BC(r0, r1, r2, r3); // 0x0803EA40
    return r0;
}

// ROM Address: 0x0803EB1A..0x0803EB4C (50 bytes, Thumb)
u32 sub_0803EB1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r4 + 0xA);
    r2 = (r1 << 28);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_0803EB34;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803EB34;
    cmp_lhs = (s32)r6; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0803EB4C(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0803EB34;
    r2 = 0x0803E5ADU; // [0x0803ED94]
    r1 |= r0;
    *(u32*)(r5 + 0x54) = (u32)r2;
    *(u8*)(r4 + 0xA) = (u8)r1;
loc_0803EB34:
    r1 = *(u32*)(r5 + 0x44);
    r2 = *(u32*)(r5 + 0x40);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0803EB56(r0, r1, r2, r3);
    r2 = 0x087B6EC4U; // [0x0803ED98]
    r1 = (r6 << 2);
    r1 = *(u32*)(r2 + r1);
    *(u32*)(r5 + 0x54) = (u32)r1;
    r1 = *(u8*)(r4 + 0xA);
    r0 |= r1;
    *(u8*)(r4 + 0xA) = (u8)r0;
    return r0;
}

// ROM Address: 0x0803EB4C..0x0803EB56 (10 bytes, Thumb)
u32 sub_0803EB4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0803E5DBU; // [0x0803ED9C]
    r1 |= r0;
    *(u32*)(r5 + 0x54) = (u32)r2;
    *(u8*)(r4 + 0xA) = (u8)r1;
    return sub_0803EB34(r0, r1, r2, r3);
}

// ROM Address: 0x0803EB56..0x0803EB68 (18 bytes, Thumb)
u32 sub_0803EB56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x087B6EC4U; // [0x0803ED98]
    r1 = (r6 << 2);
    r2 += 0xCU;
    r1 = *(u32*)(r2 + r1);
    *(u32*)(r5 + 0x54) = (u32)r1;
    r1 = *(u8*)(r4 + 0xA);
    r0 |= r1;
    *(u8*)(r4 + 0xA) = (u8)r0;
    return r0;
}

// ROM Address: 0x0803EB68..0x0803EB6A (2 bytes, Thumb)
u32 sub_0803EB68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803EB6C..0x0803EB96 (42 bytes, Thumb)
u32 sub_0803EB6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803EB70: BL 0x0803E4E4
    r0 = r4;
    r0 += 0x50U;
    r1 = *(u8*)(r0 + 0x8);
    r2 = 0x11U;
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_0803EB94;
    r0 = *(u8*)(r0 + 0xE);
    r1 = 0x4U;
    r0 = (r0 << 22);
    *(u32*)(r4) = (u32)r0;
    r0 = *(u8*)(r4 + 0x10);
    r0 &= ~r1;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u8*)(r4 + 0x11);
    r0 &= ~r1;
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_0803EB94:
    return r0;
}

// ROM Address: 0x0803EB96..0x0803EB98 (2 bytes, Thumb)
u32 sub_0803EB96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803EB98..0x0803EBF4 (92 bytes, Thumb)
u32 sub_0803EB98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 += 0x50U;
    r2 = *(u8*)(r1 + 0x2);
    r2 += 0xFFU;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    *(u8*)(r1 + 0x2) = (u8)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0803EBC2;
    r2 = *(u8*)(r0 + 0x10);
    r3 = 0x5U;
    r2 |= r3;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r0 += 0x40U;
    r2 = *(u8*)(r0 + 0xE);
    r2 = (r2 << 28);
    r2 = (r2 >> 28);
    *(u8*)(r1 + 0x2) = (u8)r2;
    r1 = *(u8*)(r0 + 0xA);
    r2 = 0x4U;
    r1 |= r2;
    *(u8*)(r0 + 0xA) = (u8)r1;
loc_0803EBC2:
    return r0; // BX lr
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803EBC8: BL 0x0803E4E4
    r2 = r4;
    r2 += 0x50U;
    r1 = *(u8*)(r2 + 0xE);
    r0 = r4;
    r0 += 0x40U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803EBDC;
    *(u8*)(r0 + 0xE) = (u8)r1;
loc_0803EBDC:
    r1 = 0x0803EB99U /* &sub_0803EB98 */; // [0x0803EDA0]
    *(u32*)(r4 + 0x54) = (u32)r1;
    r1 = *(u8*)(r0 + 0xE);
    r1 = (r1 << 28);
    r1 = (r1 >> 28);
    *(u8*)(r2 + 0x2) = (u8)r1;
    r1 = *(u8*)(r0 + 0xA);
    r1 = (r1 >> 2);
    r1 = (r1 << 2);
    r1 += 0x2U;
    *(u8*)(r0 + 0xA) = (u8)r1;
    return r0;
}

// ROM Address: 0x0803EBF4..0x0803EBF6 (2 bytes, Thumb)
u32 sub_0803EBF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803EBFC..0x0803ECA2 (166 bytes, Thumb)
u32 sub_0803EBFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r1 + 0x2);
    r2 += 0xFFU;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    *(u8*)(r1 + 0x2) = (u8)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0803EC0E;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803EC0A: BL 0x0803E4E4
loc_0803EC0E:
    return r0;
    r1 = r0;
    r1 += 0x50U;
    r2 = *(u8*)(r1 + 0xE);
    *(u8*)(r1 + 0x2) = (u8)r2;
    r1 = 0x0803EBF9U; // [0x0803EDA4]
    *(u32*)(r0 + 0x54) = (u32)r1;
    r0 += 0x40U;
    r1 = *(u8*)(r0 + 0xA);
    r1 = (r1 >> 2);
    r1 = (r1 << 2);
    r1 += 0x2U;
    *(u8*)(r0 + 0xA) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    *(u8*)(r4 + 0x4) = (u8)r1;
    r0 = r1;
    r1 = 0x00009C40U; // [0x0803EDA8]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803EC34: BL 0x08046E58
    *(u16*)(r4 + 0x6) = (u16)r0;
    return r0;
    r5 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803EC40: BL 0x0803E4E4
    r0 = 0x087B6724U; // [0x0803ED90]
    r1 = 0x00009C40U; // [0x0803EDA8]
    r0 -= 0x4U;
    r4 = *(u32*)(r0);
    r5 += 0x50U;
    r0 = *(u8*)(r5 + 0xE);
    *(u8*)(r4 + 0x4) = (u8)r0;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803EC52: BL 0x08046E58
    *(u16*)(r4 + 0x6) = (u16)r0;
    return r0;
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803EC5E: BL 0x0803E4E4
    r0 = r4;
    r0 += 0x50U;
    r1 = *(u8*)(r0 + 0x8);
    r2 = 0x11U;
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_0803EC72;
    r1 = 0x0U;
    *(u8*)(r0 + 0x1) = (u8)r1;
loc_0803EC72:
    r1 = *(u8*)(r0 + 0xE);
    r2 = (r1 << 28);
    if (cmp_lhs == cmp_rhs) goto loc_0803EC7E;
    r2 = (r1 << 28);
    r2 = (r2 >> 28);
    *(u8*)(r0) = (u8)r2;
loc_0803EC7E:
    r0 = (r1 << 24);
    r2 = (r0 >> 28);
    r0 = r4;
    r0 += 0x40U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803EC8E;
    r1 = (r1 >> 4);
    *(u8*)(r0 + 0xF) = (u8)r1;
loc_0803EC8E:
    r1 = 0x0803E8BDU; // [0x0803EDAC]
    r2 = 0x1U;
    *(u32*)(r4 + 0x54) = (u32)r1;
    r1 = *(u8*)(r0 + 0xA);
    r1 |= r2;
    *(u8*)(r0 + 0xA) = (u8)r1;
    r0 = r4;
    r0 = sub_0803E8BC(r0, r1, r2, r3); // 0x0803EC9C
    return r0;
}

// ROM Address: 0x0803ECA2..0x0803ECA4 (2 bytes, Thumb)
u32 sub_0803ECA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803ECA6..0x0803ECC2 (28 bytes, Thumb)
u32 sub_0803ECA6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_0803E4E4(r0, r1, r2, r3); // 0x0803ECAA: BL 0x0803E4E4
    r0 = 0x5EU;
    r0 = *(u8*)(r0 + r4);
    r1 = 0x49U;
    *(u8*)(r1 + r4) = (u8)r0;
    *(u8*)(r4 + 0x13) = (u8)r0;
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x10U;
    r0 |= r1;
    *(u8*)(r4 + 0x10) = (u8)r0;
    return r0;
}

// ROM Address: 0x0803ECC2..0x0803ECC4 (2 bytes, Thumb)
u32 sub_0803ECC2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803ECCA..0x0803EF66 (668 bytes, Thumb)
u32 sub_0803ECCA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r1 + 0xD);
    r4 = 0x087B6A04U; // [0x0803EDB0]
    r3 = *(u32*)(r0 + 0x40);
    r2 = (r2 << 1);
    r2 = *(u16*)(r4 + r2);
    r5 = 0x2U;
    r3 *= r2;
    r4 = (r3 >> 14);
    *(u32*)(r0 + 0x40) = (u32)r4;
    *(u32*)(r0 + 0x30) = (u32)r4;
    r2 = *(u8*)(r0 + 0x10);
    r2 |= r5;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r3 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0803ED06;
    *(u32*)(r0 + 0x40) = (u32)r3;
    *(u32*)(r0 + 0x30) = (u32)r3;
    r2 |= r5;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r2 = *(u8*)(r1 + 0xA);
    r3 = 0x8U;
    r2 &= ~r3;
    *(u8*)(r1 + 0xA) = (u8)r2;
    r1 = 0x0803E5DBU; // [0x0803ED9C]
    *(u32*)(r0 + 0x54) = (u32)r1;
    r0 = sub_0803E5DA(r0, r1, r2, r3); // 0x0803ED00
    return r0;
loc_0803ED06:
    r3 = *(u8*)(r1 + 0x8);
    r4 = *(u8*)(r1 + 0xB);
    r3 = r3 + r4;
    r3 = (r3 << 24);
    r3 = ((u32)((s32)r3 >> 24));
    *(u8*)(r1 + 0x8) = (u8)r3;
    cmp_lhs = (s32)r3; cmp_rhs = 64;
    if (cmp_lhs < cmp_rhs) goto loc_0803ED1E;
    r3 = 0x40U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    r3 = 0x0803E7C5U; // [0x0803EDB4]
    *(u32*)(r0 + 0x54) = (u32)r3;
loc_0803ED1E:
    r1 = *(u8*)(r1 + 0x8);
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = 0x10U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0;
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0xD);
    r4 = 0x087B6C84U; // [0x0803EDB8]
    r3 = *(u32*)(r0 + 0x40);
    r2 = (r2 << 1);
    r2 = *(u16*)(r4 + r2);
    r5 = 0x2U;
    r3 *= r2;
    r4 = (r3 >> 16);
    *(u32*)(r0 + 0x40) = (u32)r4;
loc_0803ED42:
    *(u32*)(r0 + 0x30) = (u32)r4;
    r2 = *(u8*)(r0 + 0x10);
    r2 |= r5;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r3 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0803ED6A;
    *(u32*)(r0 + 0x40) = (u32)r3;
    *(u32*)(r0 + 0x30) = (u32)r3;
    r2 |= r5;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r2 = *(u8*)(r1 + 0xA);
    r3 = 0x8U;
    r2 &= ~r3;
    *(u8*)(r1 + 0xA) = (u8)r2;
    r1 = 0x0803E5DBU; // [0x0803ED9C]
    *(u32*)(r0 + 0x54) = (u32)r1;
    r0 = sub_0803E5DA(r0, r1, r2, r3); // 0x0803ED64
    return r0;
loc_0803ED6A:
    r3 = *(u8*)(r1 + 0x8);
    r4 = *(u8*)(r1 + 0xB);
    r3 = r3 + r4;
    r3 = (r3 << 24);
    r3 = ((u32)((s32)r3 >> 24));
    *(u8*)(r1 + 0x8) = (u8)r3;
    cmp_lhs = (s32)r3; cmp_rhs = 64;
    if (cmp_lhs < cmp_rhs) goto loc_0803ED82;
    r3 = 0x40U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    r3 = 0x0803E7C5U; // [0x0803EDB4]
    *(u32*)(r0 + 0x54) = (u32)r3;
loc_0803ED82:
    r1 = *(u8*)(r1 + 0x8);
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = 0x10U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0;
    r0 = r0;
    *(u32*)(r4 + 0x70) = (u32)r4;
    r3 = (r7 >> 1);
    return sub_0803E8F2(r0, r1, r2, r3);
    r3 = (r0 >> 32);
    r4 = *(u32*)(r0 + 0x6C);
    r3 = (r7 >> 1);
    return sub_0803E956(r0, r1, r2, r3);
    r3 = (r0 >> 32);
    r3 = (r0 >> 32);
    r3 = (r0 >> 32);
    r4 = stack[64]; // [sp + 0x100]
    r0 = r0;
    r3 = (r0 >> 32);
    r4 = *(u32*)(r0 + 0x20);
    r3 = (r7 >> 1);
    goto loc_0803ED42;
    r3 = (r0 >> 32);
    r4 = *(u32*)(r0 + 0x48);
    r3 = (r7 >> 1);
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0xD);
    r4 = 0x087B6A04U; // [0x0803F044]
    r3 = *(u32*)(r0 + 0x40);
    r2 = (r2 << 1);
    r2 = *(u16*)(r4 + r2);
    r5 = 0x2U;
    r3 *= r2;
    r4 = (r3 >> 14);
    *(u32*)(r0 + 0x40) = (u32)r4;
    *(u32*)(r0 + 0x30) = (u32)r4;
    r2 = *(u8*)(r0 + 0x10);
    r2 |= r5;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r3 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0803EDFC;
    *(u32*)(r0 + 0x40) = (u32)r3;
    *(u32*)(r0 + 0x30) = (u32)r3;
    r2 |= r5;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r2 = *(u8*)(r1 + 0xA);
    r3 = 0x8U;
    r2 &= ~r3;
    *(u8*)(r1 + 0xA) = (u8)r2;
    r1 = 0x0803E5ADU; // [0x0803F048]
    *(u32*)(r0 + 0x54) = (u32)r1;
    r0 = sub_0803E5AC(r0, r1, r2, r3); // 0x0803EDF6
    return r0;
loc_0803EDFC:
    r3 = *(u8*)(r1 + 0x8);
    r4 = *(u8*)(r1 + 0xB);
    r3 = r3 - r4;
    r3 = (r3 << 24);
    r3 = ((u32)((s32)r3 >> 24));
    *(u8*)(r1 + 0x8) = (u8)r3;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803EE14;
    r3 = 0x0U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    r3 = 0x0803E7C5U; // [0x0803F04C]
    *(u32*)(r0 + 0x54) = (u32)r3;
loc_0803EE14:
    r1 = *(u8*)(r1 + 0x8);
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = 0x10U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0;
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0xD);
    r4 = 0x087B6C84U; // [0x0803F050]
    r3 = *(u32*)(r0 + 0x40);
    r2 = (r2 << 1);
    r2 = *(u16*)(r4 + r2);
    r5 = 0x2U;
    r3 *= r2;
    r4 = (r3 >> 16);
    *(u32*)(r0 + 0x40) = (u32)r4;
    *(u32*)(r0 + 0x30) = (u32)r4;
    r2 = *(u8*)(r0 + 0x10);
    r2 |= r5;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r3 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0803EE60;
    *(u32*)(r0 + 0x40) = (u32)r3;
    *(u32*)(r0 + 0x30) = (u32)r3;
    r2 |= r5;
    *(u8*)(r0 + 0x10) = (u8)r2;
    r2 = *(u8*)(r1 + 0xA);
    r3 = 0x8U;
    r2 &= ~r3;
    *(u8*)(r1 + 0xA) = (u8)r2;
    r1 = 0x0803E5ADU; // [0x0803F048]
    *(u32*)(r0 + 0x54) = (u32)r1;
    r0 = sub_0803E5AC(r0, r1, r2, r3); // 0x0803EE5A
    return r0;
loc_0803EE60:
    r3 = *(u8*)(r1 + 0x8);
    r4 = *(u8*)(r1 + 0xB);
    r3 = r3 - r4;
    r3 = (r3 << 24);
    r3 = ((u32)((s32)r3 >> 24));
    *(u8*)(r1 + 0x8) = (u8)r3;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803EE78;
    r3 = 0x0U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    r3 = 0x0803E7C5U; // [0x0803F04C]
    *(u32*)(r0 + 0x54) = (u32)r3;
loc_0803EE78:
    r1 = *(u8*)(r1 + 0x8);
    *(u8*)(r0 + 0x12) = (u8)r1;
    r1 = 0x10U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
    return r0;
    r1 = r0;
    r1 += 0x40U;
    r2 = *(u8*)(r1 + 0xA);
    r2 = (r2 >> 2);
    r2 = (r2 << 2);
    *(u8*)(r1 + 0xA) = (u8)r2;
    r1 = (r2 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803EEA8;
    r1 = *(u32*)(r0 + 0x40);
    r2 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0803EEA8;
    *(u32*)(r0 + 0x30) = (u32)r1;
    r1 = *(u8*)(r0 + 0x10);
    r2 = 0x2U;
    r1 |= r2;
    *(u8*)(r0 + 0x10) = (u8)r1;
loc_0803EEA8:
    r1 = r0;
    r1 += 0x50U;
    r2 = *(u8*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803EEC6;
    r3 = 0x88U;
    r2 &= r3;
    r1 = *(u8*)(r1 + 0xD);
    if (cmp_lhs != cmp_rhs) goto loc_0803EEBC;
    r1 = 0x0U;
loc_0803EEBC:
    r2 = 0x087B6904U; // [0x0803F054]
    r1 = (r1 << 2);
    r1 = *(u32*)(r2 + r1);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803EEC2: BL 0x08046AA2
loc_0803EEC6:
    return r0;
    r1 = 0x4AU;
    r2 = *(u8*)(r1 + r0);
    r1 = (r2 << 30);
    r1 = (r1 >> 30);
    if (cmp_lhs == cmp_rhs) goto loc_0803EEE2;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803EEDC;
    r1 = (r2 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803EEE2;
loc_0803EEDC:
    r1 = *(u32*)(r0 + 0x54);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803EEDE: BL 0x08046AA2
loc_0803EEE2:
    return r0;
    r1 = *(u8*)(r0 + 0x1);
    r2 = 0x0U;
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r0 + 0x1) = (u8)r1;
    r3 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803EF20;
    r3 = *(u32*)(r0 + 0x10);
    r3 += 0x1U;
    *(u32*)(r0 + 0x10) = (u32)r3;
    r1 = *(u32*)(r0 + 0xC);
    r4 = *(u32*)(r1 + 0x4);
    r3 = *(u8*)(r4 + r3);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_0803EF0A;
    *(u32*)(r0 + 0x10) = (u32)r2;
loc_0803EF0A:
    r3 = *(u32*)(r1 + 0x4);
    r4 = *(u32*)(r0 + 0x10);
    r1 = *(u32*)(r1);
    r3 = *(u8*)(r3 + r4);
    r3 = (r3 << 2);
    r1 = *(u32*)(r1 + r3);
    *(u8*)(r0 + 0x1) = (u8)r2;
    r3 = r1 + 1;
    *(u32*)(r0 + 0x14) = (u32)r3;
    r1 = *(u8*)(r1);
    *(u8*)(r0 + 0x2) = (u8)r1;
loc_0803EF20:
    r1 = 0x0U;
loc_0803EF22:
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 5);
    r3 = r3 + r0;
    r3 += 0x70U;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 15;
    *(u8*)(r3) = (u8)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0803EF22;
    r1 = *(u32*)(r0 + 0x14);
    r2 = r1 + 1;
    *(u32*)(r0 + 0x14) = (u32)r2;
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803EFCC(r0, r1, r2, r3);
    r3 = (r1 << 28);
    r3 = (r3 >> 28);
    r4 = r3 - 1;
    r3 = (r4 << 1);
    r3 = r3 + r4;
    r3 = (r3 << 5);
    r3 = r3 + r0;
    r3 += 0x18U;
    r1 = (r1 >> 4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803EF66(r0, r1, r2, r3);
    r1 = r2 + 1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r2 = *(u8*)(r2);
    r1 = r3;
    r1 += 0x50U;
    *(u8*)(r1 + 0x9) = (u8)r2;
    *(u8*)(r1 + 0x8) = (u8)r2;
    return sub_0803EF82(r0, r1, r2, r3);
}

// ROM Address: 0x0803EF66..0x0803EF82 (28 bytes, Thumb)
u32 sub_0803EF66(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803EF74;
    r1 = r3;
    r1 += 0x50U;
    r2 = *(u8*)(r1 + 0x9);
    *(u8*)(r1 + 0x8) = (u8)r2;
    return sub_0803EF82(r0, r1, r2, r3);
loc_0803EF74:
    r2 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r2 + 0xC);
    r1 = r2 + r1;
    r1 -= 0x10U;
    r1 = *(u8*)(r1 + 0xE);
    r2 = 0x58U;
    *(u8*)(r2 + r3) = (u8)r1;
    return r0;
}

// ROM Address: 0x0803EF82..0x0803EFCC (74 bytes, Thumb)
u32 sub_0803EF82(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r3;
    r1 += 0x50U;
    r2 = *(u8*)(r1 + 0x8);
    r3 = (r2 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803EF96;
    r3 = *(u32*)(r0 + 0x14);
    r4 = r3 + 1;
    *(u32*)(r0 + 0x14) = (u32)r4;
    r3 = *(u8*)(r3);
    *(u8*)(r1 + 0xA) = (u8)r3;
loc_0803EF96:
    r3 = (r2 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803EFA4;
    r3 = *(u32*)(r0 + 0x14);
    r4 = r3 + 1;
    *(u32*)(r0 + 0x14) = (u32)r4;
    r3 = *(u8*)(r3);
    *(u8*)(r1 + 0xB) = (u8)r3;
loc_0803EFA4:
    r3 = (r2 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803EFB2;
    r3 = *(u32*)(r0 + 0x14);
    r4 = r3 + 1;
    *(u32*)(r0 + 0x14) = (u32)r4;
    r3 = *(u8*)(r3);
    *(u8*)(r1 + 0xC) = (u8)r3;
loc_0803EFB2:
    r2 = (r2 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803EF34(r0, r1, r2, r3);
    r2 = *(u32*)(r0 + 0x14);
    r3 = r2 + 1;
    *(u32*)(r0 + 0x14) = (u32)r3;
    r2 = *(u8*)(r2);
    *(u8*)(r1 + 0xD) = (u8)r2;
    r2 = *(u32*)(r0 + 0x14);
    r3 = r2 + 1;
    *(u32*)(r0 + 0x14) = (u32)r3;
    r2 = *(u8*)(r2);
    *(u8*)(r1 + 0xE) = (u8)r2;
    return sub_0803EF34(r0, r1, r2, r3);
}

// ROM Address: 0x0803EFCC..0x0803EFD0 (4 bytes, Thumb)
u32 sub_0803EFCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803EFD0..0x0803F0B2 (226 bytes, Thumb)
u32 sub_0803EFD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u8*)(r0);
    r0 += 0xFFU;
    r0 = (r0 << 24);
loc_0803EFDA:
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803F002;
    r0 = r4;
    r0 = sub_0803EEE4(r0, r1, r2, r3); // 0x0803EFE2
    r5 = 0x0U;
loc_0803EFE8:
    r0 = (r5 << 1);
    r0 = r0 + r5;
    r0 = (r0 << 5);
    r0 = r0 + r4;
    r0 += 0x18U;
    r0 = sub_0803EE84(r0, r1, r2, r3); // 0x0803EFF2
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 15;
    if (cmp_lhs < cmp_rhs) goto loc_0803EFE8;
    r0 = *(u8*)(r4 + 0x3);
    *(u8*)(r4) = (u8)r0;
    goto loc_0803F02C;
loc_0803F002:
    r5 = 0x0U;
loc_0803F004:
    r0 = (r5 << 1);
    r0 = r0 + r5;
    r0 = (r0 << 5);
    r0 = r0 + r4;
    r0 += 0x18U;
    r1 = 0x4AU;
    r2 = *(u8*)(r1 + r0);
    r1 = (r2 << 30);
    r1 = (r1 >> 30);
    if (cmp_lhs == cmp_rhs) goto loc_0803F026;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803F020;
    r1 = (r2 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803F026;
loc_0803F020:
    r1 = *(u32*)(r0 + 0x54);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0803F022: BL 0x08046AA2
loc_0803F026:
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 15;
    if (cmp_lhs < cmp_rhs) goto loc_0803F004;
loc_0803F02C:
    r5 = 0x0U;
loc_0803F02E:
    r0 = (r5 << 1);
    r0 = r0 + r5;
    r0 = (r0 << 5);
    r0 = r0 + r4;
    r0 += 0x18U;
    r0 = sub_0803E0B6(r0, r1, r2, r3); // 0x0803F038: BL 0x0803E0B6
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 15;
    if (cmp_lhs < cmp_rhs) goto loc_0803F02E;
    return r0;
    r4 = *(u32*)(r0 + 0x20);
    r3 = (r7 >> 1);
    return sub_0803EBA6(r0, r1, r2, r3);
    r3 = (r0 >> 32);
    goto loc_0803EFDA;
    r3 = (r0 >> 32);
    r4 = *(u32*)(r0 + 0x48);
    r3 = (r7 >> 1);
    r4 = *(u32*)(r0 + 0x10);
    r3 = (r7 >> 1);
    r6 = r1;
    r5 = r0;
    r7 = r2;
    r4 = 0x0U;
loc_0803F062:
    r0 = (r4 << 1);
    r0 = r0 + r4;
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 += 0x18U;
    r2 = r7;
    r1 = r6;
    r0 = sub_0803E152(r0, r1, r2, r3); // 0x0803F070
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 15;
    if (cmp_lhs < cmp_rhs) goto loc_0803F062;
    return r0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x5);
    r7 = r2;
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803F0B0;
    r0 = *(u16*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) return sub_0803F0B2(r0, r1, r2, r3);
    r5 = 0x0U;
loc_0803F092:
    r0 = (r5 << 1);
    r0 = r0 + r5;
    r0 = (r0 << 5);
    r0 = r0 + r4;
    r0 += 0x18U;
    r2 = r7;
    r1 = r6;
    r0 = sub_0803E152(r0, r1, r2, r3); // 0x0803F0A0
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 15;
    if (cmp_lhs < cmp_rhs) goto loc_0803F092;
    r0 = *(u16*)(r4 + 0x8);
    r0 = r0 - r7;
    *(u16*)(r4 + 0x8) = (u16)r0;
loc_0803F0B0:
    return r0;
}

// ROM Address: 0x0803F0B2..0x0803F0E6 (52 bytes, Thumb)
u32 sub_0803F0B2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F0DA;
    stack[0] = r0; // [sp + 0x0]
    r5 = 0x0U;
loc_0803F0BA:
    r0 = (r5 << 1);
    r0 = r0 + r5;
    r0 = (r0 << 5);
    r0 = r0 + r4;
    r0 += 0x18U;
    r1 = r6;
    r2 = stack[0]; // [sp + 0x0]
    r0 = sub_0803E152(r0, r1, r2, r3); // 0x0803F0C8
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 15;
    if (cmp_lhs < cmp_rhs) goto loc_0803F0BA;
    r0 = *(u16*)(r4 + 0x8);
    r1 = (r0 << 2);
    r6 = r1 + r6;
    r7 = r7 - r0;
loc_0803F0DA:
    r0 = r4;
    r0 = sub_0803EFD0(r0, r1, r2, r3); // 0x0803F0DC: BL 0x0803EFD0
    r0 = *(u16*)(r4 + 0x6);
    *(u16*)(r4 + 0x8) = (u16)r0;
    return sub_0803F08A(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_init_stride_links1_clears_the_fields_and_points_each_record_at_its_own_block_of_fifteen_records
// ROM Address: 0x0803F0E6..0x0803F1B4 (206 bytes, Thumb)
u32 Object_InitStrideLinks1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r2 = 0x0U;
loc_0803F0EC:
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 5);
    r3 = r3 + r0;
    r3 += 0x18U;
    r4 = 0x4AU;
    *(u8*)(r4 + r3) = (u8)r2;
    r4 = r3;
    r4 += 0x50U;
    *(u8*)(r4 + 0xF) = (u8)r2;
    *(u8*)(r4 + 0x8) = (u8)r2;
    *(u8*)(r3 + 0x10) = (u8)r2;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 15;
    *(u32*)(r3 + 0x2C) = (u32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0803F0EC;
    return r0; // BX lr
    r5 = 0x1U;
    *(u8*)(r0 + 0x2) = (u8)r5;
    *(u8*)(r0) = (u8)r5;
    r2 = 0x0U;
    *(u8*)(r0 + 0x1) = (u8)r2;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r4 = r0;
    r0 = *(u8*)(r1 + 0x11);
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = ~r2;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x0U;
loc_0803F12A:
    r3 = (r0 << 1);
    r3 = r3 + r0;
    r3 = (r3 << 5);
    r3 = r3 + r4;
    r3 += 0x18U;
    r6 = 0x4AU;
    *(u8*)(r6 + r3) = (u8)r2;
    r6 = r3;
    r6 += 0x50U;
    *(u8*)(r6 + 0xF) = (u8)r2;
    *(u8*)(r6 + 0x8) = (u8)r2;
    *(u8*)(r3 + 0x10) = (u8)r2;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 15;
    *(u32*)(r3 + 0x2C) = (u32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0803F12A;
    r0 = *(u8*)(r1 + 0x10);
    r1 = 0x00009C40U; // [0x0803F1B4]
    *(u8*)(r4 + 0x4) = (u8)r0;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803F150: BL 0x08046E58
    *(u16*)(r4 + 0x6) = (u16)r0;
    *(u8*)(r4 + 0x5) = (u8)r5;
    return r0;
    r1 = 0x0U;
    r2 = 0x0U;
loc_0803F160:
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r3 = (r3 << 5);
    r3 = r3 + r0;
    r3 += 0x18U;
    r4 = 0x4AU;
    *(u8*)(r4 + r3) = (u8)r2;
    r4 = r3;
    r4 += 0x50U;
    *(u8*)(r4 + 0xF) = (u8)r2;
    *(u8*)(r4 + 0x8) = (u8)r2;
    *(u8*)(r3 + 0x10) = (u8)r2;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 15;
    *(u32*)(r3 + 0x2C) = (u32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0803F160;
    r1 = *(u8*)(r0 + 0x2);
    *(u8*)(r0 + 0x1) = (u8)r1;
    r1 = 0x1U;
    *(u8*)(r0) = (u8)r1;
    return r0; // BX lr
    r4 = 0x10U;
    r2 = 0x0U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
loc_0803F196:
    r3 = (r2 << 1);
    r3 = r3 + r2;
    r3 = (r3 << 5);
    r3 = r3 + r0;
    r3 += 0x18U;
    r5 = 0x34U;
    *(u8*)(r5 + r3) = (u8)r1;
    r5 = *(u8*)(r3 + 0x10);
    r2 += 0x1U;
    r5 |= r4;
    *(u8*)(r3 + 0x10) = (u8)r5;
    cmp_lhs = (s32)r2; cmp_rhs = 15;
    if (cmp_lhs < cmp_rhs) goto loc_0803F196;
    return r0; // BX lr
}

// ROM Address: 0x0803F1B4..0x0803F1B8 (4 bytes, Thumb)
u32 sub_0803F1B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = stack[64]; // [sp + 0x100]
    r0 = r0;
    return r0;
}

// ROM Address: 0x0803F1B8..0x0803F322 (362 bytes, Thumb)
u32 sub_0803F1B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r5;
    *(u32*)(r4 + 0x8) = (u32)r5;
    *(u32*)(r4) = (u32)r5;
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = (r2 << 14);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0803F1CC: BL 0x0804912C
    r0 = 0x000005C4U; // [0x0803F398]
    r0 = r4 + r0;
    r6 = r0;
    r0 = sub_0803E3E4(r0, r1, r2, r3); // 0x0803F1D6
    r4 += 0xCU;
    r0 = r4;
    r0 = Object_InitStrideLinks1(r0, r1, r2, r3); // 0x0803F1DE: BL 0x0803F0E6
    r0 = 0x04000080U; // [0x0803F39C]
    r1 = 0x80U;
    *(u16*)(r0 + 0x4) = (u16)r1;
    r1 = 0x00009A0EU; // [0x0803F3A0]
    *(u16*)(r0 + 0x2) = (u16)r1;
    r1 = (r0 << 18);
    *(u32*)(r0 + 0x3C) = (u32)r1;
    r1 = 0x040000A0U; // [0x0803F3A4]
    r2 = r1;
    r2 += 0x20U;
    *(u32*)(r2) = (u32)r1;
    r3 = 0x4U;
    r1 = r2;
    *(u16*)(r1 + 0x4) = (u16)r3;
    r1 = 0x0000B660U; // [0x0803F3A8]
    *(u16*)(r2 + 0x6) = (u16)r1;
    r1 = 0x02000600U; // [0x0803F3AC]
    *(u32*)(r2 + 0x8) = (u32)r1;
    r1 = 0x040000A4U; // [0x0803F3B0]
    r2 = r1;
    r2 += 0x1CU;
    *(u32*)(r2 + 0xC) = (u32)r1;
    r1 = r2;
    *(u16*)(r1 + 0x10) = (u16)r3;
    r1 = 0x0000F660U; // [0x0803F3B4]
    *(u16*)(r2 + 0x12) = (u16)r1;
    *(u16*)(r0) = (u16)r5;
    r0 = 0x087B6EDCU; // [0x0803F3B8]
    r1 = 0x03000AE0U; // [0x0803F3BC]
    r0 = *(u32*)(r0);
    r2 = 0x04000200U /* &REG_IE */; // [0x0803F3C0]
    *(u32*)(r0 + 0x28) = (u32)r1;
    r0 = *(u16*)(r2);
    r1 = (r2 >> 16);
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    r1 = r2;
    r1 -= 0xFFU;
    r0 = 0xFFFFFBE6U; // [0x0803F3C4]
    r1 -= 0x1U;
    *(u16*)(r1) = (u16)r0;
    r0 = 0x80U;
    *(u16*)(r1 + 0x2) = (u16)r0;
    r1 = 0x4U;
    r0 = r4;
    r0 = sub_0803F18C(r0, r1, r2, r3); // 0x0803F23C
    r1 = 0x8U;
    r0 = r6;
    r0 = sub_0803E42A(r0, r1, r2, r3); // 0x0803F244
    return r0;
    r0 = 0x087B6EDCU; // [0x0803F3B8]
    r1 = 0x400U; // (1 << 10)
    r0 = *(u32*)(r0);
    r0 = sub_0803F3F4(r0, r1, r2, r3); // 0x0803F254
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x0803F3C8]
    r0 = 0x0U;
    *(u16*)(r1 + 0x2) = (u16)r0;
    r1 -= 0x40U;
    *(u16*)(r1 + 0x6) = (u16)r0;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r1 = 0x04000080U; // [0x0803F39C]
    *(u16*)(r1 + 0x4) = (u16)r0;
    return r0;
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x0803F3C8]
    r0 = 0x0U;
    *(u16*)(r1 + 0x2) = (u16)r0;
    r1 -= 0x40U;
    *(u16*)(r1 + 0x6) = (u16)r0;
    *(u16*)(r1 + 0x12) = (u16)r0;
    return r0; // BX lr
    r0 = 0x087B6EDCU; // [0x0803F3B8]
    r1 = 0x400U; // (1 << 10)
    r0 = *(u32*)(r0);
    r0 = sub_0803F3F4(r0, r1, r2, r3); // 0x0803F282
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x0803F3C8]
    r0 = 0x0U;
    *(u16*)(r1 + 0x2) = (u16)r0;
    return r0;
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x0803F3C8]
    r0 = 0x80U;
    *(u16*)(r1 + 0x2) = (u16)r0;
    return r0; // BX lr
    r7 = r0;
    r0 = 0x1U;
    *(u32*)(r7) = (u32)r0;
    r0 = *(u32*)(r7 + 0x4);
    r4 = *(u32*)(r7 + 0x8);
    r1 = r0 - r4;
    r5 = (r1 << 22);
    r5 = (r5 >> 22);
    stack[3] = r5; // [sp + 0xC]
    cmp_lhs = (s32)r5; cmp_rhs = 64;
    if (cmp_lhs < cmp_rhs) return sub_0803F390(r0, r1, r2, r3);
    *(u32*)(r7 + 0x8) = (u32)r0;
    r0 = 0x000005C4U; // [0x0803F398]
    r0 = r7 + r0;
    stack[6] = r0; // [sp + 0x18]
    r0 = sub_0803E3F6(r0, r1, r2, r3); // 0x0803F2B8
    r0 = r7;
    r0 += 0xCU;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x000009C4U; // [0x0803F3CC]
    r6 = r7 + r0;
    r1 = 0x1U;
    r5 = stack[3]; // [sp + 0xC]
    r1 = (r1 << 9);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803F2D2;
    r5 = r1;
loc_0803F2D2:
    r2 = r5;
    r1 = r6;
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_0803F07C(r0, r1, r2, r3); // 0x0803F2D8
    r2 = r5;
    r1 = r6;
    r0 = stack[6]; // [sp + 0x18]
    r0 = sub_0803E40C(r0, r1, r2, r3); // 0x0803F2E2
    r0 = r4 + r5;
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    stack[4] = r0; // [sp + 0x10]
    if (cmp_lhs <= cmp_rhs) return sub_0803F322(r0, r1, r2, r3);
    r3 = r1 - r4;
    stack[2] = r3; // [sp + 0x8]
    r3 = r0 - r1;
    r0 = 0x02000200U; // [0x0803F3D0]
    stack[1] = r3; // [sp + 0x4]
    r1 = r4 + r0;
    r0 = (r0 << 16);
    r2 = r6;
    r0 = r4 + r0;
    r3 = stack[2]; // [sp + 0x8]
    r0 = sub_080491B4(r0, r1, r2, r3); // 0x0803F306: BL 0x080491B4
    r3 = stack[2]; // [sp + 0x8]
    r1 = 0x000009C4U; // [0x0803F3CC]
    r0 = (r3 << 2);
    r0 = r0 + r7;
    r2 = r0 + r1;
    r0 = 0x2000000U; // (1 << 25)
    r1 = 0x02000600U; // [0x0803F3AC]
    r3 = stack[1]; // [sp + 0x4]
    r0 = sub_080491B4(r0, r1, r2, r3); // 0x0803F31C: BL 0x080491B4
    return sub_0803F382(r0, r1, r2, r3);
}

// ROM Address: 0x0803F322..0x0803F36C (74 bytes, Thumb)
u32 sub_0803F322(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x200U; // (1 << 9)
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0803F372(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803F35E;
    r3 = r1 - r4;
    stack[2] = r3; // [sp + 0x8]
    r3 = r0 - r1;
    r0 = 0x02000600U; // [0x0803F3AC]
    stack[1] = r3; // [sp + 0x4]
    r1 = r4 + r0;
    r0 = 0x2000000U; // (1 << 25)
    r2 = r6;
    r0 = r4 + r0;
    r3 = stack[2]; // [sp + 0x8]
    r0 = sub_080491B4(r0, r1, r2, r3); // 0x0803F344: BL 0x080491B4
    r3 = stack[2]; // [sp + 0x8]
    r1 = 0x000009C4U; // [0x0803F3CC]
    r0 = (r3 << 2);
    r0 = r0 + r7;
    r2 = r0 + r1;
    r1 = 0x02000400U; // [0x0803F3D4]
    r0 = 0x02000200U; // [0x0803F3D0]
    r3 = stack[1]; // [sp + 0x4]
    r0 = sub_080491B4(r0, r1, r2, r3); // 0x0803F358: BL 0x080491B4
    return sub_0803F382(r0, r1, r2, r3);
loc_0803F35E:
    r0 = 0x02000600U; // [0x0803F3AC]
    r3 = r5;
    r1 = r4 + r0;
    r0 = 0x2000000U; // (1 << 25)
    r2 = r6;
    r0 = r4 + r0;
    return r0;
}

// ROM Address: 0x0803F372..0x0803F45E (236 bytes, Thumb)
u32 sub_0803F372(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x02000200U; // [0x0803F3D0]
    r3 = r5;
    r1 = r4 + r0;
    r0 = (r0 << 16);
    r2 = r6;
    r0 = r4 + r0;
    r0 = sub_080491B4(r0, r1, r2, r3); // 0x0803F37E: BL 0x080491B4
    r0 = stack[4]; // [sp + 0x10]
    r4 = (r0 << 22);
    r0 = stack[3]; // [sp + 0xC]
    r4 = (r4 >> 22);
    r0 = r0 - r5;
    stack[3] = r0; // [sp + 0xC]
    if (cmp_lhs != cmp_rhs) return sub_0803F2C6(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u32*)(r7) = (u32)r0;
    return r0;
    r4 = (r0 << 23);
    r0 = r0;
    r0 = (r0 << 2);
    r0 = (r0 << 16);
    r2 = stack[14]; // [sp + 0x38]
    r0 = r0;
    r0 = (r4 << 2);
    r0 = (r0 << 16);
    r0 = r0;
    r0 = (r0 << 24);
    r0 = (r0 << 8);
    r4 = (r4 << 2);
    r0 = (r0 << 16);
    r0 = r0;
    r4 = *(u32*)(r3 + 0x6C);
    r3 = (r7 >> 1);
    r0 = (r4 >> 11);
    r0 = (r0 << 12);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r0 = (r0 << 4);
    r0 = (r0 << 16);
    r4 = (r0 >> 7);
    r0 = r0;
    r0 = (r0 << 8);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r0 = (r0 << 8);
    return r0; // BX lr
    r0 = 0x03000B6CU; // [0x0803F434]
    r1 = 0x03007FC0U; // [0x0803F438]
    *(u32*)(r1 + 0x3C) = (u32)r0;
    r1 = 0x1U;
    r0 = 0x04000200U /* &REG_IE */; // [0x0803F43C]
    r1 = (r1 << 13);
    *(u16*)(r0) = (u16)r1;
    r1 = 0x1U;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r0 = 0x18U;
    r1 = (r1 << 26);
    *(u16*)(r1 + 0x4) = (u16)r0;
    return r0; // BX lr
    r4 = r0;
    r5 = r1;
    r0 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803F41E;
    r0 = *(u16*)(r4 + 0x38);
    r0 = (r0 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803F40A;
    r0 = 0x64U;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    goto loc_0803F41E;
loc_0803F40A:
    r0 = 0x4000000U; // (1 << 26)
    r0 = *(u8*)(r0 + 0x6);
    r0 -= 0xA0U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803F416;
    r0 += 0xE3U;
loc_0803F416:
    r3 = 0x000070E4U; // [0x0803F440]
    r0 *= r3;
    r0 = ((u32)((s32)r0 >> 16));
    *(u32*)(r4 + 0x3C) = (u32)r0;
loc_0803F41E:
    r0 = 0x0U;
    *(u16*)(r4 + 0x38) = (u16)r0;
loc_0803F422:
    r0 = Bios_Halt(r0, r1); // SWI 0x02
    r3 = 0x38U;
    r0 = (u32)(*(s16*)(r4 + r3));
    r0 &= r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803F422;
    r0 = *(u16*)(r4 + 0x38);
    r0 &= ~r5;
    *(u16*)(r4 + 0x38) = (u16)r0;
    return r0;
    r4 = (r5 >> 13);
    r0 = (r0 << 12);
    r0 = *(u8*)(r0 + 0x1F);
    r0 = (r0 << 12);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    *(u8*)(r4 + 0x3) = (u8)r4;
    r0 = r0;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    r2 = *(u32*)(r0 + 0xC);
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803F45E(r0, r1, r2, r3);
    r6 = 0x00001D9DU; // [0x0803F704]
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803F46E(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0803F46E(r0, r1, r2, r3);
}

// ROM Address: 0x0803F45E..0x0803F46E (16 bytes, Thumb)
u32 sub_0803F45E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2);
    r3 = (r1 << 1);
    r0 = *(u16*)(r0 + r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F46C;
    r0 = 0x1U;
    return sub_0803F46E(r0, r1, r2, r3);
loc_0803F46C:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803F46E..0x0803F55E (240 bytes, Thumb)
u32 sub_0803F46E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F53C;
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803F488;
    r0 = *(u32*)(r2 + 0x8);
    r6 = *(u32*)(r2 + 0x4);
    r1 -= 0x100U;
    r2 = r6;
    r2 *= r1;
    r1 = (r2 << 1);
    r7 = r0 + r1;
    goto loc_0803F496;
loc_0803F488:
    r0 = *(u32*)(r2);
    r1 = (r1 << 1);
    r1 = *(u16*)(r0 + r1);
    r1 = (r1 << 1);
    r7 = r1 + r0;
    r6 = *(u16*)(r7);
    r7 += 0x2U;
loc_0803F496:
    r0 = *(u32*)(r5 + 0x4);
    r1 = *(u32*)(r5);
    stack[8] = r0; // [sp + 0x20]
    r0 = r1 + r6;
    stack[9] = r0; // [sp + 0x24]
    r0 = stack[8]; // [sp + 0x20]
    r2 = r4;
    r0 += 0x10U;
    stack[10] = r0; // [sp + 0x28]
    stack[7] = r1; // [sp + 0x1C]
    r1 = 0x1C; // sp + 0x1C
    r0 = 0xC; // sp + 0xC
    r2 += 0x10U;
    r0 = sub_08053250(r0, r1, r2, r3); // 0x0803F4B0
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0803F534;
    r0 = stack[4]; // [sp + 0x10]
    r1 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0803F534;
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[3]; // [sp + 0xC]
    r2 = stack[4]; // [sp + 0x10]
    r0 = r0 - r1;
    r1 = stack[6]; // [sp + 0x18]
    r3 = *(u32*)(r5 + 0x4);
    r1 = r1 - r2;
    r2 = r2 - r3;
    stack[2] = r2; // [sp + 0x8]
    r2 = 0x1U;
    r2 <<= (r1 & 0xFF);
    r2 -= 0x1U;
    stack[1] = r2; // [sp + 0x4]
    r1 = stack[3]; // [sp + 0xC]
    r2 = *(u32*)(r5);
    r1 = r1 - r2;
    r1 = (r1 << 1);
    lr = r1;
    r1 = stack[4]; // [sp + 0x10]
    r2 = *(u32*)(r4 + 0x28);
    lr += r7;
    r1 *= r2;
    r2 = *(u32*)(r4 + 0x24);
    r1 = r1 + r2;
    r2 = stack[3]; // [sp + 0xC]
    r7 = r1 + r2;
    r1 = 0x0U;
    r12 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803F534;
loc_0803F500:
    r2 = lr;
    r1 = *(u16*)(r2);
    r2 += 0x2U;
    lr = r2;
    r2 = stack[2]; // [sp + 0x8]
    r1 >>= (r2 & 0xFF);
    r2 = stack[1]; // [sp + 0x4]
    r1 &= r2;
    r2 = r7;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F528;
loc_0803F516:
    r3 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803F51E;
    r3 = *(u8*)(r4 + 0x3);
    *(u8*)(r2) = (u8)r3;
loc_0803F51E:
    r3 = *(u32*)(r4 + 0x28);
    r1 = ((u32)((s32)r1 >> 1));
    r2 = r3 + r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803F516;
loc_0803F528:
    r1 = r12;
    r1 += 0x1U;
    r7 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    r12 = r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803F500;
loc_0803F534:
    r0 = *(u32*)(r5);
    r0 = r0 + r6;
    r0 += 0x1U;
    *(u32*)(r5) = (u32)r0;
loc_0803F53C:
    return r0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803F55E(r0, r1, r2, r3);
    r0 = 0x34U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803F550: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0803F55E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0803F55E..0x0803F58C (46 bytes, Thumb)
u32 sub_0803F55E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x0U;
    r1 = 0x0U;
    r0 = r4;
    stack[1] = r7; // [sp + 0x4]
    stack[2] = r7; // [sp + 0x8]
    stack[3] = r5; // [sp + 0xC]
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0803DA78(r0, r1, r2, r3); // 0x0803F56E: BL 0x0803DA78
    *(u32*)(r4 + 0x28) = (u32)r5;
    r5 *= r6;
    r0 = r5;
    *(u32*)(r4 + 0x2C) = (u32)r6;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803F57C: BL 0x0803D5B8
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = 0x0803F445U; // [0x0803F708]
    *(u32*)(r4 + 0x20) = (u32)r0;
    *(u8*)(r4 + 0x3) = (u8)r7;
    r0 = r4;
    return sub_0803F55A(r0, r1, r2, r3);
}
