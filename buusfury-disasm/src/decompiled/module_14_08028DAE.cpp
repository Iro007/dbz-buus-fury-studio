/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #14
 * Address Range: 0x08028DAE..0x0802B5CE (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08028DAE..0x08028EBA (268 bytes, Thumb)
u32 sub_08028DAE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08028DB8: BL __call_via_r3
    return r0;
    r1 = 0x0874EAC4U; // [0x08028E9C]
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
    r7 = 0x0874EAC4U; // [0x08028E9C]
    r5 = *(u8*)(r1 + 0x2);
    r6 = *(u8*)(r1 + 0x3);
    r7 += 0x28U;
    r7 = *(u32*)(r7 + 0x8);
    r5 = r4 + r5;
    r6 = r3 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08028E94;
    r7 = 0x0874EAC4U; // [0x08028E9C]
    r7 += 0x28U;
    r7 = *(u32*)(r7);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_08028E94;
    r5 = 0x0874EAC4U; // [0x08028E9C]
    r5 += 0x28U;
    r7 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08028E94;
    r5 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08028E94;
    r5 = *(u32*)(r2);
    r1 = *(u32*)(r1 + 0x4);
    r6 = 0xFE00FFFFU; // [0x08028EB8]
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
loc_08028E94:
    return r0; // BX lr
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r4 = (r6 >> 1);
    r2 = *(u32*)r5; r5 += 4;
    r4 = *(u32*)r5; r5 += 4;
    r6 = *(u32*)r5; r5 += 4;
    r7 = *(u32*)r5; r5 += 4;
    r4 = (r0 >> 32);
    r4 = (r6 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    r0 = r0;
    return sub_0802875C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u16*)(r1 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    return r0;
}

// ROM Address: 0x08028EBE..0x08028F56 (152 bytes, Thumb)
u32 sub_08028EBE(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r0 = sub_08028DEA(r0, r1, r2, r3); // 0x08028EEA
    r0 = *(u32*)(r4 + 0x34);
    r5 = 0x0U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08028F22;
loc_08028EF8:
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
    r0 = sub_08028DEA(r0, r1, r2, r3); // 0x08028F14
    r0 = *(u32*)(r4 + 0x34);
    r5 += 0x8U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08028EF8;
loc_08028F22:
    r0 = stack[6]; // [sp + 0x18]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08028F56(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_08028FC0(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs == cmp_rhs) return sub_08028FE8(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 38;
    if (cmp_lhs != cmp_rhs) return sub_08028FFA(r0, r1, r2, r3);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_08028FBC(r0, r1, r2, r3);
    r0 = 0x0874EAC4U; // [0x0802900C]
    r1 = r4;
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08028F4C
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08028F56..0x08028FFE (168 bytes, Thumb)
u32 sub_08028F56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08028F60;
    r0 = 0x0U;
    return sub_08028F52(r0, r1, r2, r3);
loc_08028F60:
    r0 = *(u8*)(r2 + 0x14);
    r1 = *(u32*)(r4 + 0x38);
    r3 = 0x1U;
    r1 ^= r3;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08028F70;
    r0 = 0x0U;
    return sub_08028F52(r0, r1, r2, r3);
loc_08028F70:
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r4 + 0x2C);
    r3 = *(u32*)(r4 + 0x30);
    r1 *= r0;
    r3 *= r0;
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = r3;
    stack[2] = r3; // [sp + 0x8]
    r3 = *(u32*)(r4 + 0x1C);
    r2 += 0x4U;
    r0 = r3 + r0;
    r3 = *(u32*)(r4 + 0x20);
    stack[1] = r0; // [sp + 0x4]
    r1 = r3 + r1;
    stack[2] = r1; // [sp + 0x8]
    r4 = r1;
    r3 = r0;
    r5 = *(u32*)(r2);
    r3 += 0xCU;
    r0 -= 0xCU;
    r4 += 0xCU;
    r1 -= 0xCU;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08028FB8;
    r3 = *(u32*)(r2 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08028FB8;
    r0 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_08028FB8;
    r0 = *(u32*)(r2 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08028FB8;
    r0 = 0x1U;
    return sub_08028F52(r0, r1, r2, r3);
loc_08028FB8:
    r0 = 0x0U;
    return sub_08028F52(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08028F52(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0xC);
    r5 = 0x06010000U; // [0x08029010]
    r1 = *(u32*)(r4 + 0x3C);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r2 = 0x40U;
    r1 = *(u32*)(r1 + 0x8);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08028FCE: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x3C);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 += 0x40U;
    r2 = 0x80U;
    r1 = *(u32*)(r1 + 0x14);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08028FE0: BL 0x08049138
    r0 = 0x0U;
    return sub_08028F52(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08028FF2: BL __call_via_r3
    r0 = 0x0U;
    return sub_08028F52(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08028F52(r0, r1, r2, r3);
}

// ROM Address: 0x08028FFE..0x08029006 (8 bytes, Thumb)
u32 sub_08028FFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_08029006(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08029006..0x0802900A (4 bytes, Thumb)
u32 sub_08029006(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08029014..0x08029192 (382 bytes, Thumb)
u32 sub_08029014(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080292BC]
    r5 = *(u32*)(r0 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r1 = 0x1U;
    r2 = 0x4CU;
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r3 = 0xCU;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x08029034: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0802903C
    r6 = 0x0874F04CU; // [0x080292C0]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x58U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x08029058
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08029060
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F800U; // [0x080292C4]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802906C: BL 0x0804912C
    r2 = 0x5480U; // (169 << 7)
    r1 = 0x0U;
    r0 = 0x06009640U; // [0x080292C8]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08029078: BL 0x0804912C
    r0 = 0x2U;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x1CU;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x12U;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0x00000259U; // [0x080292CC]
    r1 = 0x0600F800U; // [0x080292C4]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08029092
    r5 = r4;
    r5 += 0x100U;
    r1 = *(u32*)(r5 + 0x14);
    r3 = 0x68U;
    r0 = *(u32*)(r6 + 0x8);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0x18);
    r0 = sub_080135A2(r0, r1, r2, r3); // 0x080290AE
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_08029104;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x4DU;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x4U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x4U;
    r1 = r4;
    r3 = 0x8CU;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080290D0: BL 0x08013E64
    *(u32*)(r5 + 0x1C) = (u32)r0;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x4DU;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x5U;
    r1 = r4;
    r3 = 0xB4U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x080290EE: BL 0x08013E64
    *(u32*)(r5 + 0x20) = (u32)r0;
    r1 = *(u32*)(r5 + 0x1C);
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x080290F8
    r0 = r4;
    r1 = *(u32*)(r5 + 0x20);
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x08029100
loc_08029104:
    r1 = 0x00001F83U; // [0x080292D0]
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0 + 0x8) = (u16)r1;
    r1 = *(u16*)(r0);
    r2 = (r0 >> 18);
    r1 |= r2;
    *(u16*)(r0) = (u16)r1;
    return r0;
    r3 = 0x4000000U; // (1 << 26)
    r1 = *(u16*)(r3);
    r2 = (r3 >> 18);
    r1 &= ~r2;
    *(u16*)(r3) = (u16)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029136;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029132: BL __call_via_r3
loc_08029136:
    return r0;
    r5 = r1;
    r1 = r0;
    r4 = r0;
    r0 = 0x0874F04CU; // [0x080292C0]
    r0 += 0xCU;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08029144
    r1 = 0x0U;
    r6 = 0xFFU;
    r6 += 0x1U;
loc_0802914E:
    r0 = r1 + 3;
    r2 = r6;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_08029158;
    r2 = 0x0U;
loc_08029158:
    r0 = (r0 << 29);
    r0 = (r0 >> 26);
    r2 = r0 + r2;
    r3 = (r1 << 1);
    r3 = r3 + r1;
    r0 = 0x0U;
    r3 = (r3 << 3);
    r12 = r3;
loc_08029168:
    r3 = r0 + 3;
    r7 = ((u32)((s32)r3 >> 3));
    r3 = (r3 << 29);
    r3 = (r3 >> 29);
    r7 = (r7 << 6);
    r3 = r3 + r7;
    r7 = *(u32*)(r5 + 0x4);
    r3 = r3 + r2;
    r3 = *(u8*)(r7 + r3);
    r7 = r12;
    r7 = r7 + r0;
    r7 = r7 + r4;
    r7 += 0x30U;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    *(u8*)(r7 + 0x4) = (u8)r3;
    if (cmp_lhs < cmp_rhs) goto loc_08029168;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs < cmp_rhs) goto loc_0802914E;
    return r0;
}

// ROM Address: 0x08029192..0x08029272 (224 bytes, Thumb)
u32 sub_08029192(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x11C; // sp + 0x11C
    r2 = 0x68U;
    r1 = 0xD0U;
    r0 = r7;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0802919E
    r0 = r7;
    r0 = sub_08005096(r0, r1, r2, r3); // 0x080291A4
    r0 = 0x0874F04CU; // [0x080292C0]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0x8);
    r4 = stack[84]; // [sp + 0x150]
    r4 += 0x100U;
    r1 = *(u32*)(r4 + 0x14);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r5 = r0 + r1;
    r0 = r5;
    r1 = *(u32*)(r4 + 0x18);
    r0 = sub_080135A2(r0, r1, r2, r3); // 0x080291C4
    r6 = r0;
    r0 = 0x0874F04CU; // [0x080292C0]
    r3 = 0x100; // sp + 0x100
    r0 = *(u32*)(r0 + 0x4);
    stack[74] = r0; // [sp + 0x128]
    r0 = 0x1U;
    *(u8*)(r3 + 0x1E) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x080292D4]
    stack[79] = r0; // [sp + 0x13C]
    r0 = 0xCU;
    *(u8*)(r3 + 0x1D) = (u8)r0;
    r0 = 0xEU;
    stack[67] = r0; // [sp + 0x10C]
    r0 = 0x6U;
    stack[68] = r0; // [sp + 0x110]
    r0 = 0x26U;
    stack[69] = r0; // [sp + 0x114]
    r0 = 0x11U;
    stack[70] = r0; // [sp + 0x118]
    r0 = 0x4; // sp + 0x4
    r1 = r6;
    r0 = sub_08029138(r0, r1, r2, r3); // 0x080291F2
    r2 = 0x10C; // sp + 0x10C
    r1 = 0x4; // sp + 0x4
    r0 = r7;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x080291FC
    r0 = 0x5U;
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x1F) = (u8)r0;
    r0 = 0x28U;
    stack[72] = r0; // [sp + 0x120]
    r0 = 0xFU;
    stack[73] = r0; // [sp + 0x124]
    r0 = *(u16*)(r6 + 0xC);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080292BC]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = r7;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08029218
    r0 = 0x75U;
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x1F) = (u8)r0;
    r0 = 0xEU;
    stack[72] = r0; // [sp + 0x120]
    r0 = 0x1BU;
    stack[73] = r0; // [sp + 0x124]
    r0 = *(u16*)(r6 + 0xE);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x080292BC]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r1 = 0xB4U;
    r0 = r7;
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x08029236
    r0 = *(u8*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) return sub_0802929E(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x18);
    r0 = *(u32*)(r4 + 0x1C);
    r1 = (r1 << 1);
    r1 = r1 + r5;
    r1 += 0x2EU;
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08029254;
    r1 = 0x1U;
    goto loc_08029256;
loc_08029254:
    r1 = 0x0U;
loc_08029256:
    r3 = 0x1U;
    r1 = r3 - r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r4 + 0x20);
    r0 = (r0 << 1);
    r0 = r0 + r5;
    r0 += 0x2EU;
    r2 = *(u8*)(r0);
    r0 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08029272(r0, r1, r2, r3);
    r2 = 0x1U;
    return sub_08029274(r0, r1, r2, r3);
}

// ROM Address: 0x08029272..0x080292D8 (102 bytes, Thumb)
u32 sub_08029272(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r2 = r3 - r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    r0 = r3;
    r3 = 0x100; // sp + 0x100
    r1 = 0x3U;
    *(u8*)(r3 + 0x1F) = (u8)r1;
    r1 = 0xA9U;
    stack[72] = r1; // [sp + 0x120]
    r1 = 0x58U;
    stack[73] = r1; // [sp + 0x124]
    *(u8*)(r3 + 0x1C) = (u8)r0;
    r0 = *(u32*)(r4 + 0x18);
    r0 = (r0 << 1);
    r0 = r0 + r5;
    r0 += 0x2EU;
    r2 = *(u8*)(r0);
    r2 += 0x1U;
    r0 = r7;
    r1 = 0x080292D8U;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0802929A
    r1 = r7;
    r0 = stack[84]; // [sp + 0x150]
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x080292A2
    r1 = 0x06009640U; // [0x080292C8]
    r0 = r7;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x080292AA: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080292B2: BL 0x0803F58C
    return r0;
    r0 = r0;
    r6 = (r0 >> 32);
    r4 = (r6 >> 1);
    r0 = (r0 << 24);
    stack[64] = r6; // [sp + 0x100]
    r0 = (r0 << 24);
    r1 = (r3 << 9);
    r0 = r0;
    r3 = r0 - 6;
    r0 = r0;
    r3 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0802931C..0x0802936E (82 bytes, Thumb)
u32 sub_0802931C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r2;
    r4 = 0x000005C4U; // [0x08029380]
    r0 = *(u32*)(r5);
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x08319488U; // [0x0802937C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08029328
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0802932E
    r0 = 0x1U;
    return r0;
    r6 = *(u32*)(r0 + 0x14);
    r3 = 0x68U;
    r5 = *(u32*)(r5 + 0x8);
    r3 *= r6;
    r3 = r3 + r5;
    r1 = r3 + r1;
    r3 = *(u32*)(r0 + 0x18);
    r3 = (r3 << 1);
    r1 = r3 + r1;
    r1 += 0x2EU;
    r3 = *(u8*)(r1);
    r3 = r3 - r4;
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
loc_08029352:
    *(u8*)(r1) = (u8)r3;
    r4 = *(u8*)(r1);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08029352;
    *(u32*)(r0 + 0x10) = (u32)r2;
    r0 = 0x0U;
    return r0;
loc_08029360:
    *(u8*)(r1) = (u8)r3;
    r4 = *(u8*)(r1);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08029360;
    *(u32*)(r0 + 0x10) = (u32)r2;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802936E..0x08029372 (4 bytes, Thumb)
u32 sub_0802936E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080293A4..0x080293E4 (64 bytes, Thumb)
u32 sub_080293A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x400U; // (1 << 10)
    r0 = r4;
    r2 = stack[3]; // [sp + 0xC]
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x080293AC
    r0 = 0x0804BFA0U /* &VTable_0804BFA0 */; // [0x080295BC]
    r2 = 0x087501ECU; // [0x080295C0]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x50) = (u32)r7;
    r3 = *(u32*)(r5);
    r5 = *(u32*)(r5 + 0x4);
    r3 = (r3 << 8);
    *(u32*)(r4 + 0x20) = (u32)r3;
    r5 = (r5 << 8);
    *(u32*)(r4 + 0x24) = (u32)r5;
    r3 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r3;
    *(u32*)(r4 + 0x54) = (u32)r2;
    r0 = r4;
    r0 += 0x40U;
    *(u32*)(r4 + 0x4C) = (u32)r3;
    *(u32*)(r4 + 0x18) = (u32)r2;
    *(u32*)(r0) = (u32)r3;
    r1 = r0 + 4;
    *(u32*)(r1) = (u32)r3;
    *(u8*)(r4 + 0x8) = (u8)r6;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x080293DC
    r0 = r4;
    return sub_080293A0(r0, r1, r2, r3);
}

// ROM Address: 0x080293E4..0x08029472 (142 bytes, Thumb)
u32 sub_080293E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x10);
    r3 = 0x0874F08CU; // [0x080295C4]
    r4 = 0x000005C4U; // [0x080295CC]
    r1 = (r1 << 3);
    r2 = *(u32*)(r3 + r1);
    r1 = r1 + r3;
    *(u32*)(r0 + 0x40) = (u32)r2;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x40U;
    *(u32*)(r0 + 0x44) = (u32)r1;
    r0 = 0x0874F08CU; // [0x080295C4]
    r3 = 0x0U;
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r1 = 0x08319440U; // [0x080295C8]
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08029406
    return r0;
    r1 = 0x10U;
    *(u32*)(r0 + 0x4C) = (u32)r1;
    r1 = 0x08750204U; // [0x080295D0]
    *(u32*)(r0 + 0x54) = (u32)r1;
    r0 += 0x40U;
    r1 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r5 = r0;
    r5 += 0x40U;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x20);
    r1 = *(u32*)(r5);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    r1 = *(u32*)(r5 + 0x4);
    r6 = r5 + 4;
    r0 = r0 + r1;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x48);
    r0 += 0x1U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r0 = (r0 << 28);
    r1 = (r0 >> 31);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r4 + 0x54);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08029452
    r7 = 0x0874F08CU; // [0x080295C4]
    r0 = *(u32*)(r4 + 0x4C);
    r7 -= 0xCU;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08029472(r0, r1, r2, r3);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802946E;
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802946A
loc_0802946E:
    return r0;
}

// ROM Address: 0x08029472..0x08029526 (180 bytes, Thumb)
u32 sub_08029472(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x40);
    r1 = *(u32*)(r4 + 0x44);
    r0 |= r1;
    if (cmp_lhs == cmp_rhs) return sub_0802946E(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_08019B7C(r0, r1, r2, r3); // 0x0802947C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802948E;
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08029488
    return sub_0802946E(r0, r1, r2, r3);
loc_0802948E:
    r7 = 0x0874F08CU; // [0x080295C4]
    r0 = r4;
    r7 -= 0xCU;
    r1 = *(u32*)(r7 + 0x8);
    r0 += 0x28U;
    r7 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0802949E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080294B6;
    r0 = 0x10U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r0 = 0x08750204U; // [0x080295D0]
    *(u32*)(r4 + 0x54) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r5) = (u32)r0;
    *(u32*)(r6) = (u32)r0;
    return sub_0802946E(r0, r1, r2, r3);
loc_080294B6:
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802946E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802946E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B80D8U; // [0x080295D4]
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x50);
    stack[6] = r0; // [sp + 0x18]
    r0 = 0x4; // sp + 0x4
    r1 = *(u32*)r7; r7 += 4;
    r2 = *(u32*)r7; r7 += 4;
    r3 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 = *(u8*)(r4 + 0x11);
    r7 = 0x0874F08CU; // [0x080295C4]
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    r1 = 0x0U;
    r7 -= 0xCU;
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u32*)(r7 + 0x4);
    r2 = sp;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x080294EC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802946E(r0, r1, r2, r3);
    r7 = *(u32*)(r7);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080294F8
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x080295D8]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = r7;
    r7 = 0x000005C4U; // [0x080295CC]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08029512
    r0 = 0x10U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r0 = 0x08750204U; // [0x080295D0]
    r3 = 0x0U;
    *(u32*)(r4 + 0x54) = (u32)r0;
    *(u32*)(r5) = (u32)r3;
    *(u32*)(r6) = (u32)r3;
    return sub_0802946E(r0, r1, r2, r3);
}

// ROM Address: 0x08029526..0x0802953C (22 bytes, Thumb)
u32 sub_08029526(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802957E(r0, r1, r2, r3);
    r1 = *(u32*)(r0 + 0x4C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802957A(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802953C(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802953C..0x08029584 (72 bytes, Thumb)
u32 sub_0802953C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2 + 0x1C);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802957A;
    r1 = r2 + 4;
    r2 = *(u32*)(r2 + 0x4);
    r3 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802957A;
    r2 = *(u32*)(r0 + 0x28);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802957A;
    r2 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802957A;
    r2 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802957A;
    r1 = 0x10U;
    *(u32*)(r0 + 0x4C) = (u32)r1;
    r1 = 0x08750204U; // [0x080295D0]
    *(u32*)(r0 + 0x54) = (u32)r1;
    r0 += 0x40U;
    r1 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x1U;
    return sub_0802953A(r0, r1, r2, r3);
loc_0802957A:
    r0 = 0x0U;
    return sub_0802953A(r0, r1, r2, r3);
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x0802957E
    return sub_0802953A(r0, r1, r2, r3);
}

// ROM Address: 0x08029584..0x080295BC (56 bytes, Thumb)
u32 sub_08029584(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x0874F08CU; // [0x080295C4]
    r7 = r3;
    r6 = r1;
    r5 = r2;
    r4 -= 0xCU;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08029594
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_080295B6;
    r3 = r5;
    r2 = r6;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r1 = stack[1]; // [sp + 0x4]
    r0 = sub_08029384(r0, r1, r2, r3); // 0x080295AA
    r1 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x080295B2: BL 0x0801191A
loc_080295B6:
    return r0;
    r0 = r0;
    return r0;
}

// ROM Address: 0x080296B2..0x080296E8 (54 bytes, Thumb)
u32 sub_080296B2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_080296E8(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080296E0: BL __call_via_r3
    return r0;
}

// ROM Address: 0x080296E8..0x08029778 (144 bytes, Thumb)
u32 sub_080296E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 21);
    r0 = (r0 >> 24);
    *(u8*)(r4 + 0x11) = (u8)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_080296E4(r0, r1, r2, r3);
    r0 = 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029700: BL __call_via_r3
    r0 = *(u32*)(r5 + 0x4);
    r6 = r4;
    r2 = 0x0875021CU; // [0x08029848]
    r6 += 0xFFU;
    r0 = (r0 << 3);
    r0 = *(u32*)(r2 + r0);
    r6 += 0xA1U;
    r1 = *(u32*)(r6);
    r0 = (r0 << 8);
    r0 = r1 + r0;
    stack[0] = r0; // [sp + 0x0]
    r1 = *(u32*)(r5 + 0x4);
    r0 = 0xFFU;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u32*)(r1 + 0x4);
    r0 += 0xA5U;
    r0 = *(u32*)(r0 + r4);
    r1 = (r1 << 8);
    r0 = r0 + r1;
    stack[1] = r0; // [sp + 0x4]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r3 = sp;
    r2 = r2 + r1;
    r1 = r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802973A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802974C;
    r0 = stack[0]; // [sp + 0x0]
    *(u32*)(r6) = (u32)r0;
    r1 = stack[1]; // [sp + 0x4]
    *(u32*)(r6 + 0x4) = (u32)r1;
    goto loc_08029768;
loc_0802974C:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029756: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029764: BL __call_via_r3
loc_08029768:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029772: BL __call_via_r3
    return sub_080296E4(r0, r1, r2, r3);
}

// ROM Address: 0x080297E6..0x08029920 (314 bytes, Thumb)
u32 sub_080297E6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0U;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080297EA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080297F8;
    r1 = 0x0804A758U; // [0x08029858]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
loc_080297F8:
    r5 = r0;
    r1 = 0x12U;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08029800
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08029808
    r0 = stack[1]; // [sp + 0x4]
    stack[0] = r7; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029820;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802981C: BL __call_via_r3
loc_08029820:
    return r0;
    r2 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x1U;
    r0 = r3;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08029832;
    r0 = 0x0U;
loc_08029832:
    r0 = r3 - r0;
    return r0; // BX lr
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802983A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029846;
    r1 = 0x080497B4U /* &VTable_080497B4 */; // [0x0802985C]
    *(u32*)(r0) = (u32)r1;
loc_08029846:
    return r0;
    r4 = (r3 << 8);
    r5 = (r6 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r7 = 0x080299BCU;
    r4 = (r0 >> 32);
    stack[180] = r7; // [sp + 0x2D0]
    r4 = (r0 >> 32);
    r4 = r1;
    r3 = 0x03001C34U; // [0x08029964]
    r2 = r4;
    r3 = *(u32*)(r3);
    r2 += 0x1A0U;
    r3 += 0x1A0U;
    r5 = *(u32*)r2; r2 += 4;
    r6 = *(u32*)r3; r3 += 4;
    r2 = *(u32*)(r2);
    r3 = *(u32*)(r3);
    r2 = r2 - r3;
    stack[1] = r2; // [sp + 0x4]
    r3 = stack[1]; // [sp + 0x4]
    r5 = r5 - r6;
    r1 = r0;
    r1 += 0x8U;
    stack[0] = r5; // [sp + 0x0]
    stack[2] = r5; // [sp + 0x8]
    stack[3] = r3; // [sp + 0xC]
    *(u32*)r1 = r5; r1 += 4;
    r2 = stack[3]; // [sp + 0xC]
    *(u32*)(r1) = (u32)r2;
    r1 = r4;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x08029896
    r0 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    return r0;
    r2 = 0x03001C34U; // [0x08029964]
    r0 += 0x8U;
    r2 = *(u32*)(r2);
    r4 = *(u32*)r0; r0 += 4;
    r2 += 0x1A0U;
    r3 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)(r2);
    r0 = *(u32*)(r0);
    r0 = r2 + r0;
    stack[1] = r0; // [sp + 0x4]
    r3 = r3 + r4;
    r2 = stack[1]; // [sp + 0x4]
    r1 += 0x1A0U;
    stack[0] = r3; // [sp + 0x0]
    stack[2] = r3; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    *(u32*)(r1) = (u32)r3;
    r0 = r1 + 4;
    r1 = stack[3]; // [sp + 0xC]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r4 = r1;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080298DE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080298EE;
    r1 = 0x3U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = 0x0804C314U /* &VTable_0804C314 */; // [0x08029968]
    *(u32*)(r0) = (u32)r1;
loc_080298EE:
    r5 = r0;
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080298F4
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080298FC
    return r0;
    r0 = 0x03001B94U; // [0x0802996C]
    r5 = 0x0U;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802991A;
    r1 = 0xFFU;
    r1 += 0xCDU;
    r1 = *(u32*)(r1 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08029920(r0, r1, r2, r3);
loc_0802991A:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08029920..0x0802995E (62 bytes, Thumb)
u32 sub_08029920(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r4 = r0;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802992A: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0802993C;
    r0 = 0x1U;
    return sub_0802991C(r0, r1, r2, r3);
loc_0802993C:
    r0 = 0x03000F90U; // [0x08029970]
    r0 = *(u32*)(r0 + 0x4);
    r0 = (r0 << 26);
    if (cmp_lhs != cmp_rhs) goto loc_0802995A;
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    stack[4] = r5; // [sp + 0x10]
    r2 = *(u32*)(r4);
    r0 = r4;
    r3 = *(u32*)(r2 + 0x5C);
    r1 = sp;
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029956: BL __call_via_r3
loc_0802995A:
    r0 = 0x0U;
    return sub_0802991C(r0, r1, r2, r3);
}

// ROM Address: 0x08029962..0x080299A2 (64 bytes, Thumb)
u32 sub_08029962(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    r4 = (r0 >> 32);
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 232;
    r0 = (r0 << 12);
    r0 = 0x22CU; // (139 << 2)
    r0 = r1 + r0;
    r0 = sub_0800A95A(r0, r1, r2, r3); // 0x08029980
    r0 = 0x0U;
    return r0;
    r0 = 0x22CU; // (139 << 2)
    r0 = r1 + r0;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080299A0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0xC);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802999C: BL __call_via_r3
loc_080299A0:
    return r0;
}

// ROM Address: 0x080299A2..0x080299A6 (4 bytes, Thumb)
u32 sub_080299A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002FECU; // [0x080299A8]
    return r0; // BX lr
}

// ROM Address: 0x080299AC..0x080299BA (14 bytes, Thumb)
u32 sub_080299AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r4;
    r1 = 0x03002FF0U; // [0x080299D8]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080299B4
    r0 = r4;
    return r0;
}

// ROM Address: 0x080299BE..0x080299C0 (2 bytes, Thumb)
u32 sub_080299BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x080299C0..0x080299C4 (4 bytes, Thumb)
u32 sub_080299C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080299C4..0x080299D8 (20 bytes, Thumb)
u32 sub_080299C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002FF0U; // [0x080299D8]
    r0 += 0x4U;
    return r0; // BX lr
    r0 = r1;
    r1 = 0x03002FF0U; // [0x080299D8]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080299D0
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080299D8..0x080299DC (4 bytes, Thumb)
u32 sub_080299D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 240;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x080299DC..0x08029A36 (90 bytes, Thumb)
u32 sub_080299DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080299E4: BL __call_via_r3
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080299EC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080299FC;
    r1 = 0x0804AABCU; // [0x08029A3C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_080299FC:
    return r0;
    r6 = *(u32*)(r0 + 0xC);
    r5 = r0;
    r0 = r1;
    r4 = r1;
    r1 = *(u32*)(r1);
    r7 = r2;
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08029A12: BL 0x08046AA2
    r1 = 0x28CU; // (163 << 2)
    r1 = r4 + r1;
    r6 *= r0;
    r0 = ((u32)((s32)r6 >> 16));
    r1 = *(u32*)(r1);
    r0 = (r0 << 10);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_08029A36(r0, r1, r2, r3);
    r0 = *(u32*)(r5 + 0x10);
    r2 = r7;
    r1 = r4;
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029A30: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08029A36..0x08029A3A (4 bytes, Thumb)
u32 sub_08029A36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08029A34(r0, r1, r2, r3);
}

// ROM Address: 0x08029A40..0x08029A5C (28 bytes, Thumb)
u32 sub_08029A40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r2 + 0x8);
    r3 = *(u8*)(r0 + 0xC);
    r5 = *(u8*)(r4 + 0x1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_08029A52;
    r4 = *(u8*)(r4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) return sub_08029A5C(r0, r1, r2, r3);
loc_08029A52:
    r0 = *(u32*)(r0 + 0x10);
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029A56: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08029A5C..0x08029A60 (4 bytes, Thumb)
u32 sub_08029A5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08029A5A(r0, r1, r2, r3);
}

// ROM Address: 0x08029A60..0x08029A74 (20 bytes, Thumb)
u32 sub_08029A60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B94U; // [0x08029B50]
    r5 = r1;
    r4 = *(u32*)(r0);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08029A74(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08029A74..0x08029B30 (188 bytes, Thumb)
u32 sub_08029A74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r5 + 0x10);
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x1U;
    r1 ^= r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08029A84;
    r0 = 0x0U;
    return sub_08029A70(r0, r1, r2, r3);
loc_08029A84:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029A8E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08029A98;
    return sub_08029A70(r0, r1, r2, r3);
loc_08029A98:
    r1 = r4;
    r0 = 0x14; // sp + 0x14
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08029A9C
    r1 = r5;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08029AA4
    r0 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029AF0;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08029B04;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_08029B18;
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08029ACC;
    r0 = stack[6]; // [sp + 0x18]
    r0 -= 0x4U;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[8]; // [sp + 0x20]
    r0 += 0x4U;
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[7]; // [sp + 0x1C]
    r0 += 0xF0U;
    stack[7] = r0; // [sp + 0x1C]
loc_08029ACC:
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08029B2C;
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08029B2C;
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08029B2C;
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08029B2C;
    r0 = 0x1U;
    return sub_08029A70(r0, r1, r2, r3);
loc_08029AF0:
    r0 = stack[5]; // [sp + 0x14]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[7]; // [sp + 0x1C]
    r0 += 0x4U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[8]; // [sp + 0x20]
    r0 += 0xF0U;
    stack[8] = r0; // [sp + 0x20]
    goto loc_08029ACC;
loc_08029B04:
    r0 = stack[5]; // [sp + 0x14]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[7]; // [sp + 0x1C]
    r0 += 0x4U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[6]; // [sp + 0x18]
    r0 -= 0xF0U;
    stack[6] = r0; // [sp + 0x18]
    goto loc_08029ACC;
loc_08029B18:
    r0 = stack[6]; // [sp + 0x18]
    r0 -= 0x4U;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[8]; // [sp + 0x20]
    r0 += 0x4U;
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[5]; // [sp + 0x14]
    r0 -= 0xF0U;
    stack[5] = r0; // [sp + 0x14]
    goto loc_08029ACC;
loc_08029B2C:
    r0 = 0x0U;
    return sub_08029A70(r0, r1, r2, r3);
}

// ROM Address: 0x08029B30..0x08029B6C (60 bytes, Thumb)
u32 sub_08029B30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029B36: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08029B3E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029B4C;
    r1 = 0x0804B6B8U; // [0x08029B54]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08029B4C:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = 0x03001B94U; // [0x08029BD4]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08029B6C(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08029B6C..0x08029BB6 (74 bytes, Thumb)
u32 sub_08029B6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x03001B50U; // [0x08029BD8]
    r0 = *(u32*)(r1 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08029B78;
    r0 = 0x0U;
    return sub_08029B68(r0, r1, r2, r3);
loc_08029B78:
    r0 = 0x10; // sp + 0x10
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08029B7A
    r1 = r4;
    r0 = sp;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08029B82
    r0 = stack[0]; // [sp + 0x0]
    r1 = stack[1]; // [sp + 0x4]
    r2 = stack[2]; // [sp + 0x8]
    r3 = stack[3]; // [sp + 0xC]
    r4 = stack[6]; // [sp + 0x18]
    r0 -= 0x8U;
    r1 -= 0x8U;
    r2 += 0x8U;
    r3 += 0x8U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_08029BB2;
    r0 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08029BB2;
    r0 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08029BB2;
    r0 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08029BB2;
    r0 = 0x1U;
    return sub_08029B68(r0, r1, r2, r3);
loc_08029BB2:
    r0 = 0x0U;
    return sub_08029B68(r0, r1, r2, r3);
}

// ROM Address: 0x08029BB6..0x08029BD4 (30 bytes, Thumb)
u32 sub_08029BB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029BBC: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08029BC4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029BD2;
    r1 = 0x0804B120U; // [0x08029BDC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08029BD2:
    return r0;
}

// ROM Address: 0x08029BE0..0x08029DCE (494 bytes, Thumb)
u32 sub_08029BE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x03001B94U; // [0x08029C88]
    r6 = r1;
    r1 = *(u32*)(r0);
    r4 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029C5E;
    r0 = 0x8; // sp + 0x8
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08029BF4: BL 0x0800FDFA
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
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08029C18: BL 0x0800FDFA
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
    stack[15] = r0; // [sp + 0x3C]
    r0 = r1;
    r0 *= r1;
    stack[14] = r1; // [sp + 0x38]
    r1 = stack[15]; // [sp + 0x3C]
    r2 = r1;
    r1 *= r2;
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_08029C5E;
    r4 = 0x1U;
loc_08029C5E:
    r0 = r4;
    return r0;
    r5 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029C6C: BL __call_via_r3
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08029C74: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029C84;
    r1 = 0x08049C28U; // [0x08029C8C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08029C84:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r4 = stack[40]; // [sp + 0xA0]
    r4 = (r0 >> 32);
    r5 = r0;
    r0 = 0x03001B94U; // [0x08029D38]
    r6 = r1;
    r1 = *(u32*)(r0);
    r4 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029D0E;
    r0 = 0x8; // sp + 0x8
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08029CA4: BL 0x0800FDFA
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
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08029CC8: BL 0x0800FDFA
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
    stack[15] = r0; // [sp + 0x3C]
    r0 = r1;
    r0 *= r1;
    stack[14] = r1; // [sp + 0x38]
    r1 = stack[15]; // [sp + 0x3C]
    r2 = r1;
    r1 *= r2;
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_08029D0E;
    r4 = 0x1U;
loc_08029D0E:
    r0 = r4;
    return r0;
    r5 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029D1C: BL __call_via_r3
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08029D24: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029D34;
    r1 = 0x08049C40U; // [0x08029D3C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08029D34:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r4 = stack[64]; // [sp + 0x100]
    r4 = (r0 >> 32);
    r0 = 0x290U; // (41 << 4)
    r0 = r1 + r0;
    r4 = *(u8*)(r0);
    r0 = 0x1U;
    r5 = r1;
    r4 ^= r0;
    r6 = ((u32)((s32)r4 >> 1));
    r1 = r6;
    r1 ^= r0;
    stack[1] = r1; // [sp + 0x4]
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08029D5C
    r1 = stack[3]; // [sp + 0xC]
    r0 += 0x60U;
    r1 = *(u32*)(r1 + 0xC);
    r2 = 0x0875026CU; // [0x08029E74]
    r0 *= r1;
    r7 = (r0 >> 7);
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[1]; // [sp + 0x4]
    r0 += 0x4U;
    stack[2] = r0; // [sp + 0x8]
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = (r4 << 2);
    r1 = *(u32*)(r2 + r1);
    r1 *= r7;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x8000U; // (1 << 15)
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08029D84
    r1 = 0x4000U; // (1 << 14)
    r0 = r0 - r1;
    r0 *= r7;
    r1 = ((u32)((s32)r0 >> 12));
    r0 = stack[2]; // [sp + 0x8]
    r2 = (r6 << 2);
    r0 = r2 + r0;
    *(u32*)(r0) = (u32)r1;
    *(u8*)(r5 + 0x10) = (u8)r4;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029DA6: BL __call_via_r3
    return r0;
    r6 = r0;
    r0 = r1;
    r4 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029DC0: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08029DCE(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08029DCE..0x08029E5C (142 bytes, Thumb)
u32 sub_08029DCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r4;
    r5 = 0x14; // sp + 0x14
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08029DD4: BL 0x0800FDFA
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
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08029DFC: BL 0x0800FDFA
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x1U;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029E0C: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x50);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029E1A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029E34;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029E2E: BL __call_via_r3
    goto loc_08029E58;
loc_08029E34:
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
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029E54: BL __call_via_r3
loc_08029E58:
    r0 = 0x0U;
    return sub_08029DCA(r0, r1, r2, r3);
}

// ROM Address: 0x08029E5C..0x08029EB6 (90 bytes, Thumb)
u32 sub_08029E5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08029E62: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029E70;
    r1 = 0x0804C640U /* &VTable_0804C640 */; // [0x08029E78]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r4;
loc_08029E70:
    return r0;
    r0 = r0;
    r4 = (r5 << 9);
    r5 = (r6 >> 1);
    *(u32*)r6 = r6; r6 += 4;
    r4 = (r0 >> 32);
    r5 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029E84: BL __call_via_r3
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08029E8C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029E9C;
    r1 = 0x0804CBB0U; // [0x08029EBC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_08029E9C:
    return r0;
    r3 = 0xFFU;
    r3 += 0xE5U;
    r3 = *(u32*)(r3 + r1);
    r4 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) return sub_08029EB6(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x10);
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029EB0: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08029EB6..0x08029EBA (4 bytes, Thumb)
u32 sub_08029EB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08029EBA..0x08029ED4 (26 bytes, Thumb)
u32 sub_08029EBA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = *(u32*)r3; r3 += 4;
    r5 = *(u32*)r3; r3 += 4;
    r7 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r0 = 0x03002FF8U; // [0x08029ED4]
    return r0; // BX lr
    r0 = r1;
    r0 += 0x1C0U;
    r1 = *(u32*)(r0 + 0x24);
    r1 += 0x1U;
    *(u32*)(r0 + 0x24) = (u32)r1;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08029ED4..0x08029ED8 (4 bytes, Thumb)
u32 sub_08029ED4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 248;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08029ED8..0x08029EF6 (30 bytes, Thumb)
u32 sub_08029ED8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B94U; // [0x0802A004]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08029EF0;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08029EF6(r0, r1, r2, r3);
loc_08029EF0:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08029EF6..0x08029FE6 (240 bytes, Thumb)
u32 sub_08029EF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2C; // sp + 0x2C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08029EF8
    r1 = r4;
    r0 = 0x1C; // sp + 0x1C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x08029F00
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
    if (cmp_lhs >= cmp_rhs) goto loc_08029F48;
    r2 = stack[11]; // [sp + 0x2C]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08029F48;
    r2 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08029F48;
    r2 = stack[12]; // [sp + 0x30]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08029F4C;
loc_08029F48:
    r0 = 0x0U;
    return sub_08029EF2(r0, r1, r2, r3);
loc_08029F4C:
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
    if (cmp_lhs >= cmp_rhs) goto loc_08029F82;
    r3 = (u32)(-(s32)r2);
loc_08029F82:
    r7 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08029F8A;
    r7 = (u32)(-(s32)r7);
loc_08029F8A:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_08029FA8;
    r5 = stack[10]; // [sp + 0x28]
    r6 = r12;
    r5 += 0x3U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08029FA0;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[5]; // [sp + 0x14]
    goto loc_08029FC6;
loc_08029FA0:
    r1 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r1;
    r1 = stack[5]; // [sp + 0x14]
    goto loc_08029FC6;
loc_08029FA8:
    r1 = r4;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08029FAC: BL 0x0800FDFA
    r7 = stack[4]; // [sp + 0x10]
    r0 = stack[0]; // [sp + 0x0]
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08029FC0;
    r2 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r2;
    goto loc_08029FC6;
loc_08029FC0:
    r2 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r2;
    r5 = stack[1]; // [sp + 0x4]
loc_08029FC6:
    r2 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08029FE2;
    r0 = stack[11]; // [sp + 0x2C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08029FE2;
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08029FE2;
    r0 = stack[12]; // [sp + 0x30]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_08029FE2;
    r0 = 0x1U;
    return sub_08029EF2(r0, r1, r2, r3);
loc_08029FE2:
    r0 = 0x0U;
    return sub_08029EF2(r0, r1, r2, r3);
}

// ROM Address: 0x08029FE6..0x0802A004 (30 bytes, Thumb)
u32 sub_08029FE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08029FEC: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08029FF4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A002;
    r1 = 0x08049DF0U; // [0x0802A008]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0802A002:
    return r0;
}

// ROM Address: 0x0802A004..0x0802A00E (10 bytes, Thumb)
u32 sub_0802A004(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r5 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    r2 = 0x03001C34U; // [0x0802A0BC]
    return r0;
}

// ROM Address: 0x0802A00E..0x0802A03A (44 bytes, Thumb)
u32 sub_0802A00E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)(r2);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A026;
    r3 += 0x1A0U;
    r4 = *(u32*)r3; r3 += 4;
    *(u32*)(r0 + 0x1C) = (u32)r4;
    r3 = *(u32*)(r3);
    *(u32*)(r0 + 0x20) = (u32)r3;
    r0 = sub_0803BB00(r0, r1, r2, r3); // 0x0802A022
loc_0802A026:
    return r0;
    r2 = 0x03001C34U; // [0x0802A0BC]
    r2 = *(u32*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802A03A(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802A03A..0x0802A098 (94 bytes, Thumb)
u32 sub_0802A03A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x1A0U;
    r4 = *(u32*)r2; r2 += 4;
    r3 = r0;
    *(u32*)(r0 + 0x1C) = (u32)r4;
    r2 = *(u32*)(r2);
    r3 += 0x1CU;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r2 = r1;
    r2 += 0x1A0U;
    r4 = r3 + 4;
    r3 = *(u32*)(r0 + 0x1C);
    r5 = *(u32*)r2; r2 += 4;
    r4 = *(u32*)(r4);
    r2 = *(u32*)(r2);
    r3 = r3 - r5;
    r2 = r4 - r2;
    stack[2] = r2; // [sp + 0x8]
    r2 = r3;
    stack[1] = r3; // [sp + 0x4]
    r3 = stack[2]; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    stack[4] = r3; // [sp + 0x10]
    stack[6] = r3; // [sp + 0x18]
    r3 = r2;
    stack[5] = r2; // [sp + 0x14]
    r2 *= r3;
    r3 = ((u32)((s32)r2 >> 8));
    r2 = stack[6]; // [sp + 0x18]
    r4 = r2;
    r2 *= r4;
    r2 = ((u32)((s32)r2 >> 8));
    r3 = r3 + r2;
    r2 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) return sub_0802A098(r0, r1, r2, r3);
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802A090: BL __call_via_r3
    r0 = 0x0U;
    return sub_0802A036(r0, r1, r2, r3);
}

// ROM Address: 0x0802A09E..0x0802A0BC (30 bytes, Thumb)
u32 sub_0802A09E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802A0A4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A0BA;
    r1 = 0x32U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r1 = 0x0U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r1 = 0x08049DA8U /* &VTable_08049DA8 */; // [0x0802A0C0]
    *(u32*)(r0) = (u32)r1;
loc_0802A0BA:
    return r0;
}

// ROM Address: 0x0802A0BC..0x0802A23C (384 bytes, Thumb)
u32 sub_0802A0BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    r0 = (r0 << 12);
    r5 = stack[168]; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    r0 = 0x03001B94U; // [0x0802A2D0]
    r7 = 0x0U;
    r5 = *(u32*)(r0);
    r4 = r1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A1B8;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A1B8;
    r1 = r5;
    r0 = 0x5C; // sp + 0x5C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0802A0E2
    r1 = r4;
    r0 = 0x4C; // sp + 0x4C
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0802A0EA
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
    if (cmp_lhs >= cmp_rhs) goto loc_0802A13E;
    r1 = (u32)(-(s32)r0);
loc_0802A13E:
    r2 = r6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A146;
    r2 = (u32)(-(s32)r2);
loc_0802A146:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0802A176;
    stack[6] = r3; // [sp + 0x18]
    r1 = stack[22]; // [sp + 0x58]
    r1 += 0x3U;
    stack[8] = r1; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802A166;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[17]; // [sp + 0x44]
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[21]; // [sp + 0x54]
    r0 += 0x3U;
    stack[7] = r0; // [sp + 0x1C]
    goto loc_0802A1A4;
loc_0802A166:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[19]; // [sp + 0x4C]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[17]; // [sp + 0x44]
    stack[7] = r0; // [sp + 0x1C]
    goto loc_0802A1A4;
loc_0802A176:
    r1 = r4;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0802A17A: BL 0x0800FDFA
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[2]; // [sp + 0x8]
    stack[7] = r0; // [sp + 0x1C]
    if (cmp_lhs <= cmp_rhs) goto loc_0802A198;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[22]; // [sp + 0x58]
    r0 -= 0x6U;
    stack[8] = r0; // [sp + 0x20]
    goto loc_0802A1A4;
loc_0802A198:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = stack[20]; // [sp + 0x50]
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[1]; // [sp + 0x4]
    stack[8] = r0; // [sp + 0x20]
loc_0802A1A4:
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r2 = 0x10; // sp + 0x10
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x086B8098U; // [0x0802A2D4]
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x400U; // (1 << 10)
    goto loc_0802A1BA;
loc_0802A1B8:
    return sub_0802A272(r0, r1, r2, r3);
loc_0802A1BA:
    stack[10] = r0; // [sp + 0x28]
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x10) = (u8)r7;
    stack[16] = r4; // [sp + 0x40]
    r1 = *(u32*)(r5);
    r0 = r5;
    r3 = *(u32*)(r1 + 0x24);
    r3 = r3 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802A1CC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802A258(r0, r1, r2, r3);
    r0 = 0x60U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802A1D8: BL 0x08000158
    r2 = 0x08750288U; // [0x0802A2DC]
    r1 = 0x000005C4U; // [0x0802A2D8]
    r2 = *(u32*)(r2);
    r6 = r2 + r1;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0802A1FC;
    r0 = 0xE5U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802A1EA: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0802A1FC;
    r0 = 0xDCU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802A1F4: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_0802A20A;
loc_0802A1FC:
    r3 = r7;
    r2 = 0x40U;
    r0 = r6;
    r1 = 0x08319410U; // [0x0802A2E0]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802A204
    return sub_0802A258(r0, r1, r2, r3);
loc_0802A20A:
    r0 = 0xEEU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802A20C: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0802A228;
    r0 = 0xF4U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802A216: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0802A228;
    r0 = 0xEDU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802A220: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) return sub_0802A23C(r0, r1, r2, r3);
loc_0802A228:
    r0 = 0x5DU;
    r1 = 0x083192A8U; // [0x0802A2E4]
    r0 = (r0 << 3);
    r1 = r0 + r1;
    r3 = r7;
    r2 = 0x40U;
    r0 = r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802A236
    return sub_0802A258(r0, r1, r2, r3);
}

// ROM Address: 0x0802A23C..0x0802A30A (206 bytes, Thumb)
u32 sub_0802A23C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802A23E
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0802A2E4]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r3 = r7;
    r2 = 0x40U;
    r0 = r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802A254
    r0 = stack[27]; // [sp + 0x6C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802A25C
    r0 += 0x4U;
    r1 = (r0 << 24);
    r0 = *(u32*)(r4);
    r1 = (r1 >> 24);
    r2 = *(u32*)(r0 + 0x28);
    r2 = r2 + r0;
    r0 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802A26E: BL __call_via_r3
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802A282: BL __call_via_r3
    return r0;
    r0 = *(u32*)(r1 + 0x58);
    r4 = 0x3U;
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 6;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0802A29A;
    r2 = *(u32*)(r0 + 0x6C);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802A29C;
loc_0802A29A:
    r4 = 0x2U;
loc_0802A29C:
    cmp_lhs = (s32)r4; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_0802A2AC;
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0802A2AA;
    r2 = *(u32*)(r0 + 0x68);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802A2AC;
loc_0802A2AA:
    r4 = 0x1U;
loc_0802A2AC:
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs < cmp_rhs) goto loc_0802A2BC;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0802A2BA;
    r0 = *(u32*)(r0 + 0x64);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802A2BC;
loc_0802A2BA:
    r4 = 0x0U;
loc_0802A2BC:
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802A2BE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A2CC;
    r1 = 0x080497C4U; // [0x0802A2E8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0802A2CC:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r4 = (r0 << 23);
    r0 = r0;
    r0 = (r1 << 10);
    r5 = (r6 >> 1);
    stack[16] = r4; // [sp + 0x40]
    r1 = (r6 >> 32);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    stack[196] = r7; // [sp + 0x310]
    r4 = (r0 >> 32);
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802A30A(r0, r1, r2, r3);
    r0 = 0x50U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802A2FC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802A30A(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802A30A..0x0802A3A8 (158 bytes, Thumb)
u32 sub_0802A30A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802A580]
    r7 = 0x08750298U; // [0x0802A584]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x80U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r7 + 0x4);
    r1 = 0x80U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802A318
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802A330;
    r1 = 0x80U;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0802A324: BL 0x08011732
    r1 = 0x80U;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802A32C
loc_0802A330:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x08049C98U /* &VTable_08049C98 */; // [0x0802A588]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x28) = (u32)r1;
    *(u32*)(r4 + 0x2C) = (u32)r2;
    r2 = 0x0U;
    *(u32*)(r4 + 0x1C) = (u32)r2;
    r1 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r5 -= 0x8U;
    r1 = *(u32*)(r5 + 0x4);
    r0 = r4;
    r0 += 0x28U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r4 + 0x4) = (u32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0802A358;
    r1 = *(u32*)(r5 + 0x4);
    r1 += 0x2CU;
    *(u32*)(r4 + 0x4) = (u32)r1;
loc_0802A358:
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r4 + 0x4C) = (u32)r1;
    *(u32*)(r4 + 0x14) = (u32)r2;
    *(u8*)(r4 + 0x10) = (u8)r2;
    r1 = 0x8U;
    *(u32*)(r4 + 0x40) = (u32)r1;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r4 + 0x18) = (u32)r1;
    *(u32*)(r4 + 0x44) = (u32)r6;
    r1 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    r5 -= 0x8U;
    r1 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x24) = (u32)r3;
    r0 = *(u32*)(r4 + 0x44);
    r3 = 0x0875043CU; // [0x0802A58C]
    r1 = (r0 << 3);
    r1 = r1 + r0;
    r1 = (r1 << 2);
    r1 = r1 + r3;
    *(u32*)(r4 + 0x48) = (u32)r1;
    r1 = 0x0807268CU; // [0x0802A590]
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r3 = r2;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    *(u32*)(r4 + 0x38) = (u32)r1;
    r0 = *(u32*)(r7);
    r5 = 0x000005C4U; // [0x0802A598]
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x0831944CU; // [0x0802A594]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802A3A0
    r0 = r4;
    return sub_0802A306(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy19_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x0802A3A8..0x0802A412 (106 bytes, Thumb)
u32 Object_Destroy19(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802A580]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0802A59C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A3C2;
    r0 = 0x08750298U; // [0x0802A584]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0802A3BE
loc_0802A3C2:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0802A5A0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A3D0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0802A3CC: BL 0x0803D63C
loc_0802A3D0:
    return r0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802A412(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0802A4C8(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x38);
    r1 = *(u32*)(r4 + 0x3C);
    r0 = (r0 << 2);
    r1 = (r1 << 2);
    stack[18] = r1; // [sp + 0x48]
    stack[17] = r0; // [sp + 0x44]
    r2 = *(u32*)(r4 + 0x20);
    r0 = r2 + r0;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x40);
    r0 -= 0x4U;
    *(u32*)(r4 + 0x40) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_0802A4C8(r0, r1, r2, r3);
    r6 = 0x08750298U; // [0x0802A584]
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802A40A
    return r0;
}

// ROM Address: 0x0802A412..0x0802A4CA (184 bytes, Thumb)
u32 sub_0802A412(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802A4C8;
    r0 = *(u32*)(r4 + 0x40);
    r1 = *(u32*)(r4 + 0x38);
    r2 = *(u32*)(r4 + 0x3C);
    r1 *= r0;
    r2 *= r0;
    r0 = r1;
    stack[15] = r1; // [sp + 0x3C]
    r1 = r2;
    stack[16] = r2; // [sp + 0x40]
    r2 = *(u32*)(r4 + 0x20);
    r3 = 0x20; // sp + 0x20
    r0 = r2 + r0;
    r2 = *(u32*)(r4 + 0x24);
    stack[15] = r0; // [sp + 0x3C]
    r1 = r2 + r1;
    stack[16] = r1; // [sp + 0x40]
    stack[18] = r1; // [sp + 0x48]
    stack[17] = r0; // [sp + 0x44]
    r0 = *(u32*)(r4 + 0x4C);
    r5 = 0x1U;
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u32*)(r4 + 0x44);
    r2 = 0x44; // sp + 0x44
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x086B8090U; // [0x0802A5A4]
    r3 = 0x0; // sp + 0x0
    stack[11] = r0; // [sp + 0x2C]
    r0 = (r5 << 10);
    stack[10] = r0; // [sp + 0x28]
    r0 = 0x0U;
    *(u8*)(r3 + 0x10) = (u8)r0;
    stack[16] = r4; // [sp + 0x40]
    r0 = stack[17]; // [sp + 0x44]
    r1 = *(u32*)(r4 + 0x20);
    r3 = r4;
    r3 += 0x20U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A466;
    r0 = r2;
    goto loc_0802A468;
loc_0802A466:
    r0 = r3;
loc_0802A468:
    r0 = *(u32*)(r0);
    r6 = stack[18]; // [sp + 0x48]
    r0 -= 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = r4;
    r7 = *(u32*)(r4 + 0x24);
    r0 += 0x24U;
    r1 = r2 + 4;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A480;
    r6 = r1;
    goto loc_0802A482;
loc_0802A480:
    r6 = r0;
loc_0802A482:
    r6 = *(u32*)(r6);
    r6 -= 0x4U;
    stack[6] = r6; // [sp + 0x18]
    r6 = stack[17]; // [sp + 0x44]
    r7 = *(u32*)(r3);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) goto loc_0802A492;
    r3 = r2;
loc_0802A492:
    r3 = *(u32*)(r3);
    r2 = stack[18]; // [sp + 0x48]
    r3 += 0x4U;
    stack[7] = r3; // [sp + 0x1C]
    r3 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_0802A4A2;
    r0 = r1;
loc_0802A4A2:
    r0 = *(u32*)(r0);
    r6 = 0x08750298U; // [0x0802A584]
    r0 += 0x4U;
    stack[8] = r0; // [sp + 0x20]
    r1 = *(u32*)(r6 + 0x8);
    r7 = 0x10; // sp + 0x10
    r0 = r7 + 4;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0802A4B4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802A53A(r0, r1, r2, r3);
    r2 = r7;
    r1 = 0x0U;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0802A4C2
    return sub_0802A4CA(r0, r1, r2, r3);
loc_0802A4C8:
    return sub_0802A53C(r0, r1, r2, r3);
}

// ROM Address: 0x0802A53C..0x0802A580 (68 bytes, Thumb)
u32 sub_0802A53C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x14);
    r0 += 0x1U;
    r2 = ((u32)((s32)r0 >> 2));
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0802A54C;
    return sub_0802A40E(r0, r1, r2, r3);
loc_0802A54C:
    *(u32*)(r4 + 0x18) = (u32)r2;
    r0 = *(u16*)(r4 + 0xC);
    r2 = (r2 << 31);
    r2 = (r2 >> 31);
    r3 = (r2 << 1);
    r5 = 0x06010000U; // [0x0802A5AC]
    r2 = r3 + r2;
    r1 = *(u32*)(r4 + 0x48);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r2 = (r2 << 2);
    r1 = r1 + r2;
    r1 = *(u32*)(r1 + 0x8);
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802A568: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x48);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 += 0x40U;
    r2 = 0x40U;
    r1 = *(u32*)(r1 + 0x20);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802A57A: BL 0x08049138
    return sub_0802A40E(r0, r1, r2, r3);
}

// ROM Address: 0x0802A5A2..0x0802A72A (392 bytes, Thumb)
u32 sub_0802A5A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    *(u16*)(r2 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0802A54C(r0, r1, r2, r3);
    r7 = (r5 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802A5BA: BL __call_via_r3
    return r0;
    r1 = 0x08750298U; // [0x0802A7AC]
    r3 = *(u32*)(r0 + 0x20);
    r1 = *(u32*)(r1 + 0x8);
    r2 = r0;
    r1 += 0x18U;
    r4 = *(u32*)(r1);
    r0 = *(u32*)(r0 + 0x24);
    r1 = *(u32*)(r1 + 0x4);
    r3 = r3 - r4;
    r2 += 0x30U;
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
    r4 = *(u32*)(r0 + 0x48);
    r1 = (r1 << 2);
    r1 = r4 + r1;
    r3 = 0x0U;
    r6 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r0 + 0x30);
    r3 = r4 + r6;
    r4 = *(u32*)(r5);
    r6 = *(u32*)(r0 + 0x34);
    r4 = r3 + r4;
    r3 = 0x1U;
    r7 = (u32)(*(s8*)(r1 + r3));
    r5 = *(u32*)(r5 + 0x4);
    r3 = r6 + r7;
    r3 = r3 + r5;
    r7 = 0x08750298U; // [0x0802A7AC]
    r5 = *(u8*)(r1 + 0x2);
    r6 = *(u8*)(r1 + 0x3);
    r7 += 0x14U;
    r7 = *(u32*)(r7 + 0x8);
    r5 = r4 + r5;
    r6 = r3 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A696;
    r7 = 0x08750298U; // [0x0802A7AC]
    r7 += 0x14U;
    r7 = *(u32*)(r7);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A696;
    r5 = 0x08750298U; // [0x0802A7AC]
    r5 += 0x14U;
    r7 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A696;
    r5 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A696;
    r5 = *(u32*)(r2);
    r1 = *(u32*)(r1 + 0x4);
    r6 = 0xFE00FFFFU; // [0x0802A7B0]
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
loc_0802A696:
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r1);
    stack[4] = r0; // [sp + 0x10]
    r0 = *(u32*)(r4 + 0x40);
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    r7 = 0x10; // sp + 0x10
    if (cmp_lhs >= cmp_rhs) goto loc_0802A6C6;
    r0 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802A6C6;
    r2 = 0x08750298U; // [0x0802A7AC]
    r3 = 0x0U;
    r2 += 0xCU;
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0802A5EC(r0, r1, r2, r3); // 0x0802A6C2
loc_0802A6C6:
    r0 = *(u32*)(r4 + 0x40);
    r5 = 0x0U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802A6FA;
loc_0802A6D0:
    r0 = *(u32*)(r4 + 0x38);
    r1 = *(u32*)(r4 + 0x3C);
    r0 *= r5;
    r1 *= r5;
    stack[0] = r0; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    stack[0] = r2; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x2U;
    r2 = r7;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x2U;
    r0 = r4;
    r0 = sub_0802A5EC(r0, r1, r2, r3); // 0x0802A6EC
    r0 = *(u32*)(r4 + 0x40);
    r5 += 0x8U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0802A6D0;
loc_0802A6FA:
    r0 = stack[4]; // [sp + 0x10]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    r3 = r1;
    r1 = r2;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802A72A(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0802A792(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_0802A79C(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802A720: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802A72A..0x0802A7A0 (118 bytes, Thumb)
u32 sub_0802A72A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802A734;
    r0 = 0x0U;
    return sub_0802A726(r0, r1, r2, r3);
loc_0802A734:
    r2 = *(u8*)(r1 + 0x14);
    r3 = *(u32*)(r0 + 0x44);
    r7 = 0x1U;
    r3 ^= r7;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802A744;
    r0 = 0x0U;
    return sub_0802A726(r0, r1, r2, r3);
loc_0802A744:
    r2 = *(u32*)(r0 + 0x40);
    r3 = *(u32*)(r0 + 0x38);
    r4 = *(u32*)(r0 + 0x3C);
    r3 *= r2;
    r4 *= r2;
    r2 = r3;
    stack[1] = r3; // [sp + 0x4]
    r3 = r4;
    stack[2] = r4; // [sp + 0x8]
    r4 = *(u32*)(r0 + 0x20);
    r1 += 0x4U;
    r2 = r4 + r2;
    r4 = *(u32*)(r0 + 0x24);
    stack[1] = r2; // [sp + 0x4]
    r3 = r4 + r3;
    stack[2] = r3; // [sp + 0x8]
    r5 = r3;
    r4 = r2;
    r6 = *(u32*)(r1);
    r4 += 0xCU;
    r2 -= 0xCU;
    r5 += 0xCU;
    r3 -= 0xCU;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A78E;
    r4 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A78E;
    r2 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A78E;
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802A78E;
    *(u8*)(r0 + 0x10) = (u8)r7;
    r0 = 0x1U;
    return sub_0802A726(r0, r1, r2, r3);
loc_0802A78E:
    r0 = 0x0U;
    return sub_0802A726(r0, r1, r2, r3);
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x18) = (u32)r1;
    r0 = 0x0U;
    return sub_0802A726(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0802A726(r0, r1, r2, r3);
}

// ROM Address: 0x0802A7A0..0x0802A7A8 (8 bytes, Thumb)
u32 sub_0802A7A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_0802A7A8(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0802A7A8..0x0802A7AC (4 bytes, Thumb)
u32 sub_0802A7A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0802A7B6..0x0802A83A (132 bytes, Thumb)
u32 sub_0802A7B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r1 = *(u32*)(r4 + 0x40);
    r0 = *(u32*)(r0 + 0x38);
    r1 = r0 + r1;
    *(u32*)(r4 + 0x38) = (u32)r1;
    r0 = (r1 >> 16);
    if (cmp_lhs == cmp_rhs) goto loc_0802A7EA;
    r1 = ((u32)((s32)r1 >> 16));
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r4 + 0x34);
    r1 = (r1 << 2);
    r1 = r0 + r1;
    *(u32*)(r4 + 0x34) = (u32)r1;
    r0 = *(u32*)(r4 + 0x44);
    r2 = *(u32*)(r4 + 0x3C);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r2 = (r2 << 2);
    r2 = r0 + r2;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_0802A7E4;
    *(u32*)(r4 + 0x34) = (u32)r0;
loc_0802A7E4:
    r0 = r4;
    r0 = sub_0802A7F4(r0, r1, r2, r3); // 0x0802A7E6
loc_0802A7EA:
    r0 = *(u32*)(r4 + 0x38);
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u32*)(r4 + 0x38) = (u32)r0;
    return r0;
    r1 = *(u32*)(r0 + 0x34);
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
    r5 = stack[11]; // [sp + 0x2C]
    r6 = stack[12]; // [sp + 0x30]
    r7 = stack[10]; // [sp + 0x28]
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802A83A(r0, r1, r2, r3);
    r0 = 0x44U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802A82C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802A83A(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802A83A..0x0802A8AA (112 bytes, Thumb)
u32 sub_0802A83A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802A9F8]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x087504CCU; // [0x0802A9FC]
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802A846
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802A862;
    r0 = 0x087504CCU; // [0x0802A9FC]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0802A854: BL 0x08011732
    r0 = 0x087504CCU; // [0x0802A9FC]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802A85E
loc_0802A862:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804CF3CU /* &VTable_0804CF3C */; // [0x0802AA00]
    r3 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r1 = stack[2]; // [sp + 0x8]
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r4 + 0x14) = (u32)r1;
    *(u32*)(r4 + 0x10) = (u32)r2;
    r0 = stack[3]; // [sp + 0xC]
    *(u32*)(r4 + 0x34) = (u32)r0;
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r4 + 0x3C) = (u32)r1;
    *(u32*)(r4 + 0x40) = (u32)r7;
    r1 = 0x0U;
    *(u32*)(r4 + 0x38) = (u32)r1;
    *(u32*)(r4 + 0x30) = (u32)r1;
    *(u8*)(r4 + 0x8) = (u8)r6;
    r2 = *(u32*)(r4 + 0x14);
    *(u32*)(r4 + 0x4) = (u32)r2;
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
    return sub_0802A836(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_clear_fields5_clears_the_word_twice
// ROM Address: 0x0802A8AA..0x0802A94C (162 bytes, Thumb)
u32 Object_ClearFields5(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x38);
    r2 = *(u32*)(r0 + 0x40);
    r2 = r1 + r2;
    *(u32*)(r0 + 0x38) = (u32)r2;
    r1 = (r2 >> 16);
    if (cmp_lhs == cmp_rhs) goto loc_0802A8FC;
    r4 = ((u32)((s32)r2 >> 16));
    r3 = (r4 << 1);
    r3 = r3 + r4;
    r1 = *(u32*)(r0 + 0x34);
    r3 = (r3 << 2);
    r1 = r1 + r3;
    *(u32*)(r0 + 0x34) = (u32)r1;
    r3 = *(u32*)(r0 + 0x3C);
    r3 = r3 - r4;
    *(u32*)(r0 + 0x3C) = (u32)r3;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0802A8DC;
    r1 = r0;
    r0 = 0x087504CCU; // [0x0802A9FC]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802A8D6
    return r0;
loc_0802A8DC:
    r3 = 0x0U;
    r5 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r0 + 0x10);
    r3 = 0x1U;
    r4 = r4 - r5;
    *(u32*)(r0 + 0x20) = (u32)r4;
    r6 = (u32)(*(s8*)(r1 + r3));
    r5 = *(u32*)(r0 + 0x14);
    r5 = r5 - r6;
    *(u32*)(r0 + 0x24) = (u32)r5;
    r3 = *(u8*)(r1 + 0x2);
    r1 = *(u8*)(r1 + 0x3);
    r3 = r4 + r3;
    r1 = r5 + r1;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    *(u32*)(r0 + 0x28) = (u32)r3;
loc_0802A8FC:
    r1 = (r2 << 16);
    r1 = (r1 >> 16);
    *(u32*)(r0 + 0x38) = (u32)r1;
    return r0;
    r1 = 0x087504CCU; // [0x0802A9FC]
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x20);
    r1 += 0x18U;
    r4 = *(u32*)(r1);
    r3 = r3 - r4;
    r4 = *(u32*)(r0 + 0x24);
    r5 = *(u32*)(r1 + 0x4);
    r2 = r0;
    r4 = r4 - r5;
    stack[1] = r4; // [sp + 0x4]
    r2 += 0x18U;
    stack[0] = r3; // [sp + 0x0]
    *(u32*)r2 = r3; r2 += 4;
    *(u32*)r2 = r4; r2 += 4;
    r2 = *(u32*)(r0 + 0x20);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0802A94C(r0, r1, r2, r3);
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x28);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0802A94C(r0, r1, r2, r3);
    r2 = *(u32*)(r0 + 0x24);
    r3 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0802A94C(r0, r1, r2, r3);
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0x2C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0802A94C(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0802A94C..0x0802A950 (4 bytes, Thumb)
u32 sub_0802A94C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0802A946(r0, r1, r2, r3);
}

// ROM Address: 0x0802A950..0x0802A9A4 (84 bytes, Thumb)
u32 sub_0802A950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r4 = 0xFE00FFFFU; // [0x0802AA04]
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x34);
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
    r0 += 0x30U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) return sub_0802A9A4(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0802A9A4..0x0802A9A8 (4 bytes, Thumb)
u32 sub_0802A9A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0802A9A0(r0, r1, r2, r3);
}

// ROM Address: 0x0802A9A8..0x0802A9E2 (58 bytes, Thumb)
u32 sub_0802A9A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x34);
    *(u32*)(r0 + 0x30) = (u32)r1;
    r3 = *(u8*)(r1 + 0x2);
    r4 = *(u8*)(r1 + 0x3);
    r0 = *(u16*)(r0 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r3 *= r4;
    r2 = r3;
    r3 = 0x06010000U; // [0x0802AA08]
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802A9C0: BL 0x08049138
    return r0;
    r2 = r1;
    r1 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0802A9E2(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_0802A9E8(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802A9DA: BL 0x08046AA2
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802A9E2..0x0802A9EC (10 bytes, Thumb)
u32 sub_0802A9E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x30) = (u32)r1;
    r0 = 0x0U;
    return sub_0802A9E0(r0, r1, r2, r3);
    r0 = r1;
    return sub_0802A9E0(r0, r1, r2, r3);
}

// ROM Address: 0x0802A9EC..0x0802A9F4 (8 bytes, Thumb)
u32 sub_0802A9EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) return sub_0802A9F4(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0802A9F4..0x0802A9F8 (4 bytes, Thumb)
u32 sub_0802A9F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0802AA0A..0x0802AA1A (16 bytes, Thumb)
u32 sub_0802AA0A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r0 << 24);
    r0 = 0x03000F90U; // [0x0802AA34]
    r1 += 0xFFU;
    r0 = *(u32*)(r0 + 0x4);
    r1 += 0xC1U;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0802AA1A..0x0802AA1E (4 bytes, Thumb)
u32 sub_0802AA1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002FFCU; // [0x0802AA38]
    return r0; // BX lr
}

// ROM Address: 0x0802AA1E..0x0802AA7C (94 bytes, Thumb)
u32 sub_0802AA1E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03000F90U; // [0x0802AA34]
    r1 += 0xFFU;
    r0 = *(u32*)(r0 + 0x4);
    r1 += 0xC1U;
    *(u32*)(r1 + 0x2C) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    r0 = 0x03002FFCU; // [0x0802AA38]
    r0 += 0x4U;
    return r0; // BX lr
    r0 = r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 252;
    r0 = (r0 << 12);
    r5 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802AA44: BL __call_via_r3
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802AA4C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802AA5C;
    r1 = 0x0804A668U; // [0x0802AAC4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_0802AA5C:
    return r0;
    r4 = 0xFFU;
    r3 = 0x03000F90U; // [0x0802AAC8]
    r4 += 0xE9U;
    r4 = *(u32*)(r4 + r1);
    r3 = *(u32*)(r3 + 0x4);
    r3 = r3 - r4;
    r4 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) return sub_0802AA7C(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x10);
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802AA76: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0802AA7C..0x0802AA80 (4 bytes, Thumb)
u32 sub_0802AA7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802AA80..0x0802AAC0 (64 bytes, Thumb)
u32 sub_0802AA80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802AA88: BL __call_via_r3
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802AA90: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802AAA0;
    r1 = 0x0804AA5CU; // [0x0802AACC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_0802AAA0:
    return r0;
    r4 = 0xFFU;
    r3 = 0x03000F90U; // [0x0802AAC8]
    r4 += 0xEDU;
    r4 = *(u32*)(r4 + r1);
    r3 = *(u32*)(r3 + 0x4);
    r3 = r3 - r4;
    r4 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) return sub_0802AAC0(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x10);
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802AABA: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0802AAC0..0x0802AAC4 (4 bytes, Thumb)
u32 sub_0802AAC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802AAC4..0x0802AAD0 (12 bytes, Thumb)
u32 sub_0802AAC4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0802AC68U;
    r4 = (r0 >> 32);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r2 = 0x170; // sp + 0x170
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0802AAD0..0x0802AB02 (50 bytes, Thumb)
u32 sub_0802AAD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802AAD6: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802AADE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802AAEC;
    r1 = 0x0804B188U; // [0x0802AB08]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0802AAEC:
    return r0;
    r3 = 0x03002FE4U; // [0x0802AB0C]
    r3 = *(u32*)(r3);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0802AB02(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0xC);
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802AAFC: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0802AB02..0x0802AB08 (6 bytes, Thumb)
u32 sub_0802AB02(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0802AB00(r0, r1, r2, r3);
    r0 = r0;
    return r0;
}

// ROM Address: 0x0802AB0A..0x0802AB3A (48 bytes, Thumb)
u32 sub_0802AB0A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 228;
    r0 = (r0 << 12);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r0 = *(u16*)(r1 + 0x12);
    r6 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    *(u16*)(r1 + 0x12) = (u16)r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0802AB3A(r0, r1, r2, r3);
    r3 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r3;
    return r0;
}

// ROM Address: 0x0802AB3A..0x0802AB4C (18 bytes, Thumb)
u32 sub_0802AB3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 56;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0802AB4A;
    r0 += 0x8U;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r0 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0802AB36(r0, r1, r2, r3);
loc_0802AB4A:
    cmp_lhs = (s32)r0; cmp_rhs = 72;
    return r0;
}

// ROM Address: 0x0802AB4C..0x0802AC80 (308 bytes, Thumb)
u32 sub_0802AB4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0802AC32;
    r0 -= 0x38U;
    r0 = ((u32)((s32)r0 >> 3));
    r0 += 0x3U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 64;
    if (cmp_lhs != cmp_rhs) return sub_0802AB36(r0, r1, r2, r3);
    r0 = 0x2BU;
    r5 = *(u32*)(r6 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802AB60: BL 0x08000158
    r3 = 0x08752D64U; // [0x0802AD40]
    r2 = 0x000005C4U; // [0x0802AD3C]
    r7 = r6;
    r3 = *(u32*)(r3);
    r7 += 0x1A0U;
    r1 = r5;
    r2 = r3 + r2;
    r6 = r7 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    stack[6] = r2; // [sp + 0x18]
    r5 = 0x08319308U; // [0x0802AD44]
    if (cmp_lhs != cmp_rhs) goto loc_0802ABE4;
    r0 = 0x08752D64U; // [0x0802AD40]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802AB82
    cmp_lhs = (s32)r0; cmp_rhs = 192;
    if (cmp_lhs < cmp_rhs) return sub_0802AB36(r0, r1, r2, r3);
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r6);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x08752D64U; // [0x0802AD40]
    r1 += 0x8U;
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
    r0 = sub_08028C04(r0, r1, r2, r3); // 0x0802ABC4: BL 0x08028C04
    r1 = 0x03003004U; // [0x0802AD48]
    *(u32*)(r1 + 0x4) = (u32)r0;
    r1 = r0;
    r0 = 0x08752D64U; // [0x0802AD40]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802ABD2: BL 0x0801191A
    r1 = r5;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = stack[6]; // [sp + 0x18]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802ABDE
loc_0802ABE2:
    return sub_0802AB36(r0, r1, r2, r3);
loc_0802ABE4:
    r0 = 0x08752D64U; // [0x0802AD40]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802ABE8
    cmp_lhs = (s32)r0; cmp_rhs = 192;
    if (cmp_lhs < cmp_rhs) return sub_0802AB36(r0, r1, r2, r3);
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r6);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x08752D64U; // [0x0802AD40]
    r1 += 0x28U;
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
    r0 = sub_08028C04(r0, r1, r2, r3); // 0x0802AC2A: BL 0x08028C04
    r1 = 0x03003004U; // [0x0802AD48]
    goto loc_0802AC34;
loc_0802AC32:
    goto loc_0802AC4E;
loc_0802AC34:
    *(u32*)(r1 + 0x4) = (u32)r0;
    r1 = r0;
    r0 = 0x08752D64U; // [0x0802AD40]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802AC3C: BL 0x0801191A
    r1 = r5;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = stack[6]; // [sp + 0x18]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802AC48
    return sub_0802AB36(r0, r1, r2, r3);
loc_0802AC4E:
    r0 = 0x08752D64U; // [0x0802AD40]
    r1 = 0x03003004U; // [0x0802AD48]
    r0 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r1 + 0x4);
    r1 = r0 + 4;
    r5 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802AC70;
loc_0802AC60:
    r2 = (r0 << 2);
    r2 = r2 + r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802ABE2;
    r0 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0802AC60;
loc_0802AC70:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802AC7A: BL __call_via_r3
    return sub_0802AB36(r0, r1, r2, r3);
}

// ROM Address: 0x0802ACB2..0x0802AD22 (112 bytes, Thumb)
u32 sub_0802ACB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03001C34U; // [0x0802AD4C]
    r4 = r1;
    r0 = *(u32*)(r5);
    r2 = 0x80U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802ACC4: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802AD1E;
    r1 = 0xFFU;
    r0 = *(u32*)(r5);
    r1 += 0xCDU;
    r1 = *(u32*)(r1 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802AD1E;
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802AD50]
    stack[1] = r1; // [sp + 0x4]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    if (cmp_lhs == cmp_rhs) goto loc_0802ACF2;
    r1 = r4;
    r1 += 0x18CU;
loc_0802ACF2:
    r0 = sp;
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802ACF4
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802ACFC
    r1 = 0x03003004U; // [0x0802AD48]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802AD04
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802AD54]
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802AD1E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802AD1A: BL __call_via_r3
loc_0802AD1E:
    return r0;
}

// ROM Address: 0x0802AD22..0x0802AD34 (18 bytes, Thumb)
u32 sub_0802AD22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003004U; // [0x0802AD48]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802AD30;
    r0 = 0x0U;
loc_0802AD30:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802AD88..0x0802ADBC (52 bytes, Thumb)
u32 sub_0802AD88(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802AD90
    r1 = 0x03003014U; // [0x0802ADB4]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802AD98
    r0 = 0x0U;
    r1 = 0x0300302CU; // [0x0802ADB8]
    r4 += 0x1C0U;
    *(u32*)(r1) = (u32)r0;
    *(u32*)(r4 + 0xC) = (u32)r0;
    return r0;
    r0 = 0x0U;
    return r0; // BX lr
    r0 = 0x03003014U; // [0x0802ADB4]
    r0 -= 0x4U;
    return r0; // BX lr
    r0 += 0x14U;
    r0 = (r0 << 12);
    r0 += 0x2CU;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0802ADC8..0x0802ADE8 (32 bytes, Thumb)
u32 sub_0802ADC8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u16*)(r1 + 0x12);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r0 + 0x12) = (u16)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 96;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0802ADE8(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802ADE2: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0802ADE8..0x0802ADF0 (8 bytes, Thumb)
u32 sub_0802ADE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 << 27);
    r1 = (r1 >> 30);
    *(u8*)(r0 + 0x11) = (u8)r1;
    return sub_0802ADE6(r0, r1, r2, r3);
}

// ROM Address: 0x0802ADF0..0x0802AE06 (22 bytes, Thumb)
u32 sub_0802ADF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x15U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802ADF8
    r1 = 0x0300301CU; // [0x0802AE20]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802AE00
    return r0;
}

// ROM Address: 0x0802AE06..0x0802AE18 (18 bytes, Thumb)
u32 sub_0802AE06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x0300301CU; // [0x0802AE20]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802AE14;
    r0 = 0x0U;
loc_0802AE14:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802AE76..0x0802AE98 (34 bytes, Thumb)
u32 sub_0802AE76(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r1 + 0x58);
    r4 = r1;
    r0 += 0x4CU;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0802AE96;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802AE8A
    r1 = 0x03003024U; // [0x0802AEB0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802AE92
loc_0802AE96:
    return r0;
}

// ROM Address: 0x0802AE98..0x0802AEAA (18 bytes, Thumb)
u32 sub_0802AE98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003024U; // [0x0802AEB0]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802AEA6;
    r0 = 0x0U;
loc_0802AEA6:
    r0 = r2 - r0;
    return r0; // BX lr
}

// Evidence: tools/behaviour/test_table.py::test_ram_set_one1_stores_one_after_the_two_table_calls runs it on the retail image and asserts the one store; 0x0802AEE2 calls 0x0800ECDA with index 0x14, 0x0802AEEA calls 0x0800ED18 with 0x03003030, and 0x0802AEF2-0x0802AEF4 store 1 at 0x0300302C
// ROM Address: 0x0802AEDA..0x0802AEF8 (30 bytes, Thumb)
u32 Ram_SetOne1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802AEE2
    r1 = 0x03003030U; // [0x0802AF00]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802AEEA
    r1 = 0x03003030U; // [0x0802AF00]
    r0 = 0x1U;
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0;
}

// ROM Address: 0x0802AEF8..0x0802AEFE (6 bytes, Thumb)
u32 sub_0802AEF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003030U; // [0x0802AF00]
    r0 += 0x4U;
    return r0; // BX lr
}

// ROM Address: 0x0802B19C..0x0802B1EA (78 bytes, Thumb)
u32 sub_0802B19C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0802B204]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802B208]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0802B1BA;
    r1 = r4;
    r1 += 0x18CU;
loc_0802B1BA:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802B1BC
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802B1C4
    r1 = 0x0300303CU; // [0x0802B20C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802B1CC
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802B210]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B1E6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B1E2: BL __call_via_r3
loc_0802B1E6:
    return r0;
}

// ROM Address: 0x0802B1EA..0x0802B1FC (18 bytes, Thumb)
u32 sub_0802B1EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x0300303CU; // [0x0802B20C]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802B1F8;
    r0 = 0x0U;
loc_0802B1F8:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802B332..0x0802B3A2 (112 bytes, Thumb)
u32 sub_0802B332(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03001C34U; // [0x0802B3C4]
    r4 = r1;
    r0 = *(u32*)(r5);
    r2 = 0x80U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802B344: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802B39E;
    r1 = 0xFFU;
    r0 = *(u32*)(r5);
    r1 += 0xCDU;
    r1 = *(u32*)(r1 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B39E;
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802B3C8]
    stack[1] = r1; // [sp + 0x4]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    if (cmp_lhs == cmp_rhs) goto loc_0802B372;
    r1 = r4;
    r1 += 0x18CU;
loc_0802B372:
    r0 = sp;
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802B374
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802B37C
    r1 = 0x0300304CU; // [0x0802B3C0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802B384
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802B3CC]
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B39E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B39A: BL __call_via_r3
loc_0802B39E:
    return r0;
}

// ROM Address: 0x0802B3A2..0x0802B3B4 (18 bytes, Thumb)
u32 sub_0802B3A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x0300304CU; // [0x0802B3C0]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802B3B0;
    r0 = 0x0U;
loc_0802B3B0:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802B3D0..0x0802B3FC (44 bytes, Thumb)
u32 sub_0802B3D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x2BU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802B3D6: BL 0x08000158
    r2 = r0;
    r0 = 0x08752E74U; // [0x0802B5A8]
    r1 = 0x5U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802B3E2
    *(u32*)(r4 + 0x8) = (u32)r0;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802B3FC(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0802B3FC..0x0802B590 (404 bytes, Thumb)
u32 sub_0802B3FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xC; // sp + 0xC
    r1 = *(u32*)(r5 + 0x8);
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0802B400: BL 0x0800FDFA
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
    r7 = 0x1U;
    r1 = r4;
    r0 = 0x24; // sp + 0x24
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0802B426: BL 0x0800FDFA
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
    if (cmp_lhs >= cmp_rhs) goto loc_0802B460;
    r0 = (u32)(-(s32)r2);
loc_0802B460:
    r1 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802B46A;
    r0 = (u32)(-(s32)r0);
loc_0802B46A:
    r6 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    stack[13] = r1; // [sp + 0x34]
    stack[14] = r0; // [sp + 0x38]
    if (cmp_lhs <= cmp_rhs) goto loc_0802B482;
    r1 = stack[15]; // [sp + 0x3C]
    r0 = 0x3U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0802B47E;
    r0 = 0x2U;
loc_0802B47E:
    *(u8*)(r4 + 0x10) = (u8)r0;
    goto loc_0802B48E;
loc_0802B482:
    r6 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802B48C;
    r7 = 0x0U;
loc_0802B48C:
    *(u8*)(r4 + 0x10) = (u8)r7;
loc_0802B48E:
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) goto loc_0802B498;
    r0 = 0x0U;
    return sub_0802B3F8(r0, r1, r2, r3);
loc_0802B498:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B4A2: BL __call_via_r3
    r0 = stack[15]; // [sp + 0x3C]
    r1 = stack[16]; // [sp + 0x40]
    r5 = r4;
    r0 = (r0 << 8);
    r1 = (r1 << 8);
    stack[14] = r1; // [sp + 0x38]
    r5 += 0x1A0U;
    r1 = (r0 << 8);
    stack[13] = r0; // [sp + 0x34]
    r6 = (r6 << 8);
    r0 = r6;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802B4BE: BL 0x08046E58
    r7 = r0;
    r0 = stack[14]; // [sp + 0x38]
    r1 = (r0 << 8);
    r0 = r6;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802B4CA: BL 0x08046E58
    stack[6] = r0; // [sp + 0x18]
    r1 = stack[6]; // [sp + 0x18]
    stack[5] = r7; // [sp + 0x14]
    stack[7] = r7; // [sp + 0x1C]
    stack[8] = r1; // [sp + 0x20]
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r5 + 0x4);
    r2 = stack[8]; // [sp + 0x20]
    r0 = r0 + r7;
    r1 = r1 + r2;
    stack[6] = r1; // [sp + 0x18]
    stack[10] = r1; // [sp + 0x28]
    stack[12] = r1; // [sp + 0x30]
    stack[5] = r0; // [sp + 0x14]
    stack[9] = r0; // [sp + 0x24]
    stack[11] = r0; // [sp + 0x2C]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r6 = r5 + 4;
    r2 = r2 + r1;
    r1 = 0x2C; // sp + 0x2C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B4FA: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B50C;
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r6) = (u32)r0;
    goto loc_0802B57E;
loc_0802B50C:
    r0 = stack[11]; // [sp + 0x2C]
    r7 = r4;
    r7 += 0x1A4U;
    stack[9] = r0; // [sp + 0x24]
    r0 = *(u32*)(r7);
    stack[10] = r0; // [sp + 0x28]
    r0 = stack[11]; // [sp + 0x2C]
    r1 = *(u32*)(r5);
    r0 = r0 - r1;
    stack[8] = r0; // [sp + 0x20]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0802B526;
    r0 = (u32)(-(s32)r0);
loc_0802B526:
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0802B54A;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x24; // sp + 0x24
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B538: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B54A;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r6) = (u32)r0;
    goto loc_0802B57E;
loc_0802B54A:
    r0 = *(u32*)(r5);
    r1 = 0x24; // sp + 0x24
    stack[9] = r0; // [sp + 0x24]
    r0 = stack[12]; // [sp + 0x30]
    stack[10] = r0; // [sp + 0x28]
    r2 = *(u32*)(r7);
    r0 = r0 - r2;
    stack[8] = r0; // [sp + 0x20]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0802B55E;
    r0 = (u32)(-(s32)r0);
loc_0802B55E:
    r2 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0802B57E;
    r2 = *(u32*)(r4);
    r0 = r4;
    r3 = *(u32*)(r2 + 0x54);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B56E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B57E;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r6) = (u32)r0;
loc_0802B57E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B588: BL __call_via_r3
    r0 = 0x0U;
    return sub_0802B3F8(r0, r1, r2, r3);
}

// ROM Address: 0x0802B590..0x0802B5CE (62 bytes, Thumb)
u32 sub_0802B590(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802B596: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B5A4;
    r1 = 0x0804BC68U; // [0x0802B5AC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0802B5A4:
    return r0;
    r0 = r0;
    cmp_lhs = (s32)r6; cmp_rhs = 116;
    r5 = (r6 >> 1);
    r4 = (r0 >> 32);
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B5B6: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802B5BE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B5CC;
    r1 = 0x0804C608U; // [0x0802B5D0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0802B5CC:
    return r0;
}

// ROM Address: 0x0802B5CE..0x0802B5EA (28 bytes, Thumb)
u32 sub_0802B5CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u32*)r6 = r3; r6 += 4;
    r4 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = r1;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u8*)(r0 + 0x11) = (u8)r2;
    r1 = 0x14U;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802B5E4
    return r0;
}
