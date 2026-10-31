/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #02
 * Address Range: 0x080076D6..0x0800A4BC (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x080076D6..0x080076EA (20 bytes, Thumb)
u32 sub_080076D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009AEC(r0, r1, r2, r3); // 0x080076DA
    r0 = 0x0804B070U /* &VTable_0804B070 */; // [0x080076F0]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5 + 0x10);
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = r4;
    return sub_080076D4(r0, r1, r2, r3);
}

// ROM Address: 0x080076F4..0x0800770C (24 bytes, Thumb)
u32 sub_080076F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2);
    r0 = r2;
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08007700: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    r0 = (r0 >> 31);
    return r0;
}

// ROM Address: 0x0800770C..0x08007710 (4 bytes, Thumb)
u32 sub_0800770C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001938U; // [0x08007710]
    return r0; // BX lr
}

// ROM Address: 0x08007714..0x0800773A (38 bytes, Thumb)
u32 sub_08007714(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = r2;
    r1 = *(u32*)(r2);
    r4 = r2;
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08007724: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) return sub_0800773A(r0, r1, r2, r3);
    r0 = *(u8*)(r5 + 0x4);
    r1 = *(u8*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800773A(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800773A..0x0800773E (4 bytes, Thumb)
u32 sub_0800773A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08007738(r0, r1, r2, r3);
}

// ROM Address: 0x0800773E..0x0800774A (12 bytes, Thumb)
u32 sub_0800773E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r0 + 0x4);
    r1 = *(u8*)(r1 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800774A(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800774A..0x0800774E (4 bytes, Thumb)
u32 sub_0800774A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800774E..0x08007752 (4 bytes, Thumb)
u32 sub_0800774E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0300193CU; // [0x08007764]
    return r0; // BX lr
}

// ROM Address: 0x08007752..0x08007764 (18 bytes, Thumb)
u32 sub_08007752(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0300193CU; // [0x08007764]
    r0 += 0x8U;
    return r0; // BX lr
    r0 = 0x0300193CU; // [0x08007764]
    r0 += 0x18U;
    return r0; // BX lr
    r0 = 0x0300193CU; // [0x08007764]
    r0 += 0x10U;
    return r0; // BX lr
}

// ROM Address: 0x08007764..0x08007766 (2 bytes, Thumb)
u32 sub_08007764(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r7 + r4;
    return r0;
}

// ROM Address: 0x08007766..0x08007770 (10 bytes, Thumb)
u32 sub_08007766(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r0 = 0x1U;
    return r0; // BX lr
    r0 = 0x0300195CU; // [0x08007770]
    return r0; // BX lr
}

// ROM Address: 0x08007770..0x0800778A (26 bytes, Thumb)
u32 sub_08007770(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r3 + r5;
    r0 = (r0 << 12);
    r1 = r0;
    r0 = 0x080707E0U; // [0x080077A8]
    r0 = *(u32*)(r0);
    r0 += 0xC0U;
    r2 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r1 + 0x4);
    r0 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) return sub_0800778A(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0800778C(r0, r1, r2, r3);
}

// ROM Address: 0x0800778A..0x080077DE (84 bytes, Thumb)
u32 sub_0800778A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r1 + 0x4) = (u32)r2;
    return r0; // BX lr
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007794: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080077A4;
    r1 = 0x0804ACE0U /* &VTable_0804ACE0 */; // [0x080077AC]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_080077A4:
    return r0;
    r0 = r0;
    r0 = (r4 << 31);
    r7 = (r0 >> 32);
    r4 = 0x380; // sp + 0x380
    r4 = (r0 >> 32);
    r0 = 0x1U;
    return r0; // BX lr
    r7 = 0x080707E4U; // [0x080077E4]
    r4 = r1;
    r6 = *(u32*)(r7);
    r1 = r2;
    r2 = *(u32*)(r4);
    r6 += 0xC0U;
    r5 = *(u32*)(r6 + 0x8);
    r3 = *(u32*)(r2 + 0x4);
    r0 = r4;
    r3 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080077CA: BL __call_via_r3
    r0 = *(u32*)(r6 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_080077DC;
    r1 = r4;
    r0 = *(u32*)(r7);
    r0 = sub_0801268A(r0, r1, r2, r3); // 0x080077D8
loc_080077DC:
    return r0;
}

// ROM Address: 0x080077DE..0x080077E2 (4 bytes, Thumb)
u32 sub_080077DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001960U; // [0x080077E8]
    return r0; // BX lr
}

// ROM Address: 0x080077EC..0x08007854 (104 bytes, Thumb)
u32 sub_080077EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x14; // sp + 0x14
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080077F4: BL 0x0800FDFA
    r0 = 0x080707E8U; // [0x08007854]
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    stack[3] = r2; // [sp + 0xC]
    stack[4] = r1; // [sp + 0x10]
    r1 = stack[5]; // [sp + 0x14]
    r2 = stack[7]; // [sp + 0x1C]
    r1 = r1 + r2;
    r2 = (r1 >> 31);
    r1 = r2 + r1;
    r1 = ((u32)((s32)r1 >> 1));
    r1 -= 0x78U;
    r1 = (r1 << 10);
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[6]; // [sp + 0x18]
    r2 = stack[8]; // [sp + 0x20]
    r1 = r1 + r2;
    r2 = (r1 >> 31);
    r1 = r2 + r1;
    r1 = ((u32)((s32)r1 >> 1));
    r1 -= 0x54U;
    r1 = (r1 << 10);
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[1]; // [sp + 0x4]
    r2 = stack[3]; // [sp + 0xC]
    r1 = r1 - r2;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = ((u32)((s32)r1 >> 6));
    r1 = r1 + r2;
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[2]; // [sp + 0x8]
    r2 = stack[4]; // [sp + 0x10]
    r1 = r1 - r2;
    r3 = (r1 << 3);
    r1 = r3 + r1;
    r1 = ((u32)((s32)r1 >> 7));
    r1 = r1 + r2;
    stack[4] = r1; // [sp + 0x10]
    r0 = *(u32*)(r0);
    r1 = 0xC; // sp + 0xC
    r0 = sub_08009744(r0, r1, r2, r3); // 0x0800784C
    return r0;
}

// ROM Address: 0x08007854..0x08007858 (4 bytes, Thumb)
u32 sub_08007854(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r5 << 31);
    r7 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08007858..0x08007874 (28 bytes, Thumb)
u32 sub_08007858(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08007874(r0, r1, r2, r3);
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007866: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08007874(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08007874..0x08007916 (162 bytes, Thumb)
u32 sub_08007874(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804AB24U /* &VTable_0804AB24 */; // [0x08007974]
    r6 = r4 + 4;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r5 + 0x4);
    r0 = (r0 << 10);
    r2 = (r1 << 10);
    r1 = 0x080707ECU; // [0x08007978]
    stack[7] = r2; // [sp + 0x1C]
    stack[6] = r0; // [sp + 0x18]
    r1 = *(u32*)(r1 + 0x4);
    r7 = r6 + 4;
    r3 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r0 = r0 - r3;
    r1 = r2 - r1;
    stack[3] = r1; // [sp + 0xC]
    stack[5] = r1; // [sp + 0x14]
    stack[9] = r1; // [sp + 0x24]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    stack[8] = r0; // [sp + 0x20]
    if (cmp_lhs < cmp_rhs) goto loc_080078A8;
    r0 = stack[8]; // [sp + 0x20]
    goto loc_080078AC;
loc_080078A8:
    r0 = stack[8]; // [sp + 0x20]
    r0 = (u32)(-(s32)r0);
loc_080078AC:
    r1 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_080078B6;
    r1 = stack[9]; // [sp + 0x24]
    goto loc_080078BA;
loc_080078B6:
    r1 = stack[9]; // [sp + 0x24]
    r1 = (u32)(-(s32)r1);
loc_080078BA:
    stack[2] = r0; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r0; // [sp + 0x10]
    stack[5] = r1; // [sp + 0x14]
    stack[6] = r0; // [sp + 0x18]
    stack[7] = r1; // [sp + 0x1C]
    r3 = 0x18; // sp + 0x18
    r1 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r2 = 0x18; // sp + 0x18
    r0 = r2 + 4;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_080078D4;
    r0 = r2;
loc_080078D4:
    r1 = *(u32*)(r0);
    r0 = stack[12]; // [sp + 0x30]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080078D8: BL 0x08046E58
    r0 = ((u32)((s32)r0 >> 10));
    r0 += 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    stack[3] = r6; // [sp + 0xC]
    r0 = *(u32*)(r4 + 0xC);
    r5 = (r0 << 10);
    r0 = stack[8]; // [sp + 0x20]
    r1 = (r0 << 10);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080078EE: BL 0x08046E58
    r6 = r0;
    r0 = stack[9]; // [sp + 0x24]
    r1 = (r0 << 10);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x080078FA: BL 0x08046E58
    stack[2] = r0; // [sp + 0x8]
    r1 = stack[2]; // [sp + 0x8]
    r0 = r6;
    stack[1] = r6; // [sp + 0x4]
    stack[4] = r6; // [sp + 0x10]
    r6 = stack[3]; // [sp + 0xC]
    stack[5] = r1; // [sp + 0x14]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[5]; // [sp + 0x14]
    *(u32*)(r7) = (u32)r0;
    r0 = r4;
    return sub_08007870(r0, r1, r2, r3);
}

// ROM Address: 0x0800795C..0x080079E2 (134 bytes, Thumb)
u32 sub_0800795C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08009744(r0, r1, r2, r3); // 0x0800795C
    r0 = *(u32*)(r4 + 0xC);
    r0 -= 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800796E;
    r0 = *(u32*)(r5);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x0800796A
loc_0800796E:
    return r0;
    r0 = r0;
    r3 = 0x90; // sp + 0x90
    r4 = (r0 >> 32);
    r4 = (r5 << 31);
    r7 = (r0 >> 32);
    r6 = r0;
    r5 = r1;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007984: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007990;
    r1 = 0x0804A720U /* &VTable_0804A720 */; // [0x08007A20]
    *(u32*)(r0) = (u32)r1;
loc_08007990:
    *(u32*)(r0 + 0x8) = (u32)r6;
    *(u8*)(r0 + 0x4) = (u8)r5;
    r4 = r0;
    r0 = 0x64U;
    r0 = r0 - r5;
    r1 = ((u32)((s32)r0 >> 31));
    r1 = (r1 >> 28);
    r0 = r1 + r0;
    r1 = ((u32)((s32)r0 >> 4));
    r1 += 0x1U;
    *(u8*)(r4 + 0x5) = (u8)r1;
    r1 = 0x1U;
    r5 = 0x080707F4U; // [0x08007A24]
    *(u8*)(r4 + 0x6) = (u8)r1;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080210D6(r0, r1, r2, r3); // 0x080079AE
    r1 = r4;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x080079B6
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r5 = 0x080707F4U; // [0x08007A24]
    if (cmp_lhs != cmp_rhs) return sub_080079E2(r0, r1, r2, r3);
    stack[0] = r0; // [sp + 0x0]
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r5);
    r1 = sp;
    r0 = sub_080097A6(r0, r1, r2, r3); // 0x080079D4: BL 0x080097A6
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080210F2(r0, r1, r2, r3); // 0x080079DA
    return r0;
}

// ROM Address: 0x080079E2..0x08007A18 (54 bytes, Thumb)
u32 sub_080079E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r4 + 0x6);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4 + 0x6) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08007A12;
    r0 = *(u8*)(r4 + 0x5);
    *(u8*)(r4 + 0x6) = (u8)r0;
    r0 = sub_0803FAAC(r0, r1, r2, r3); // 0x080079F2
    r6 = 0x1U;
    r1 = *(u8*)(r4 + 0x4);
    r6 = (r6 << 15);
    r0 = r0 - r6;
    r0 *= r1;
    r0 = ((u32)((s32)r0 >> 19));
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = sub_0803FAAC(r0, r1, r2, r3); // 0x08007A04
    r1 = *(u8*)(r4 + 0x4);
    r0 = r0 - r6;
    r0 *= r1;
    r0 = ((u32)((s32)r0 >> 19));
    *(u32*)(r4 + 0x10) = (u32)r0;
loc_08007A12:
    r1 = r4;
    r1 += 0xCU;
    r0 = *(u32*)(r5);
    return r0;
}

// ROM Address: 0x08007A28..0x08007A3E (22 bytes, Thumb)
u32 sub_08007A28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r0 + 0x4);
    r1 = 0x0600E000U; // [0x08007A58]
    r2 = 0x1U;
    r0 = (r0 << 11);
    r0 = r0 + r1;
    r2 = (r2 << 11);
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08007A38: BL 0x0804912C
    return r0;
}

// ROM Address: 0x08007A3E..0x08007A40 (2 bytes, Thumb)
u32 sub_08007A3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x08007A40..0x08007A56 (22 bytes, Thumb)
u32 sub_08007A40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007A46: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007A54;
    r1 = 0x08049548U /* &VTable_08049548 */; // [0x08007A5C]
    *(u8*)(r0 + 0x4) = (u8)r4;
    *(u32*)(r0) = (u32)r1;
loc_08007A54:
    return r0;
}

// ROM Address: 0x08007A56..0x08007A60 (10 bytes, Thumb)
u32 sub_08007A56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    goto loc_08007A5C;
    r0 = (r0 << 24);
loc_08007A5C:
    stack[72] = r5; // [sp + 0x120]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08007A60..0x08007A7A (26 bytes, Thumb)
u32 sub_08007A60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r0;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08007A7A(r0, r1, r2, r3);
    r0 = 0x00001008U; // [0x08007B6C]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007A6E: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08007A7A(r0, r1, r2, r3);
    r0 = r5;
    return r0;
}

// ROM Address: 0x08007A7A..0x08007AB4 (58 bytes, Thumb)
u32 sub_08007A7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r5 + 0x4) = (u8)r4;
    r0 = 0x08049604U /* &VTable_08049604 */; // [0x08007B70]
    r4 = 0x0U;
    r7 = 0x800U; // (1 << 11)
    *(u32*)(r5) = (u32)r0;
loc_08007A86:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08007AA0;
    r0 = (r4 << 11);
    r0 = r0 + r5;
    r0 += 0x8U;
    r2 = r7;
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08007A9A: BL 0x0804912C
    goto loc_08007AAA;
loc_08007AA0:
    r1 = (r4 << 11);
    r1 = r1 + r5;
    r1 += 0x8U;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08007AA6
loc_08007AAA:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_08007A86;
    r0 = r5;
    return sub_08007A78(r0, r1, r2, r3);
}

// ROM Address: 0x08007AB4..0x08007B62 (174 bytes, Thumb)
u32 sub_08007AB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r1 << 23);
    r2 = (r0 >> 31);
    r0 = 0x1U;
    r0 ^= r2;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x1EU;
    r7 = ((u32)((s32)r1 >> 3));
    r7 &= r0;
    r0 = stack[3]; // [sp + 0xC]
    r1 = 0x0600E000U; // [0x08007B74]
    r0 = *(u8*)(r0 + 0x4);
    r4 = 0x0U;
    r0 = (r0 << 11);
    r6 = r0 + r1;
    r0 = 0x20U;
    r0 = r0 - r7;
    r1 = (r2 << 11);
    r2 = stack[3]; // [sp + 0xC]
    r0 = (r0 << 1);
    r1 = r1 + r2;
    stack[2] = r1; // [sp + 0x8]
    r5 = (r7 << 1);
    stack[1] = r0; // [sp + 0x4]
loc_08007AE6:
    r1 = stack[2]; // [sp + 0x8]
    r0 = (r4 << 6);
    r1 = r1 + r0;
    r1 = r1 + r5;
    r1 += 0x8U;
    r0 = r0 + r6;
    r0 = r0 + r5;
    r2 = stack[1]; // [sp + 0x4]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08007AF6: BL 0x08049138
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08007AE6;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007B22;
    r0 = stack[0]; // [sp + 0x0]
    r2 = stack[3]; // [sp + 0xC]
    r4 = 0x0U;
    r0 = (r0 << 11);
    r7 = r0 + r2;
loc_08007B0E:
    r0 = (r4 << 6);
    r1 = r7 + r0;
    r1 += 0x8U;
    r0 = r0 + r6;
    r2 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08007B18: BL 0x08049138
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08007B0E;
loc_08007B22:
    return r0;
    r1 = *(u32*)(r1 + 0xC);
    r1 = (r1 << 3);
    r1 = ((u32)((s32)r1 >> 10));
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u8*)(r0 + 0x4);
    r2 = 0x4000000U; // (1 << 26)
    r1 = (r1 << 2);
    r1 = r1 + r2;
    r1 += 0x10U;
    r2 = stack[1]; // [sp + 0x4]
    r3 = 0x0U;
    *(u16*)(r1) = (u16)r2;
    *(u16*)(r1 + 0x2) = (u16)r3;
    r1 = stack[1]; // [sp + 0x4]
    r0 = sub_08007AB4(r0, r1, r2, r3); // 0x08007B4C: BL 0x08007AB4
    return r0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x4);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08007B5C: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08007B62..0x08007B6A (8 bytes, Thumb)
u32 sub_08007B62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = r0;
    r0 = 0x0U;
    return sub_08007A60(r0, r1, r2, r3);
}

// ROM Address: 0x08007B78..0x08007B92 (26 bytes, Thumb)
u32 sub_08007B78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08007B92(r0, r1, r2, r3);
    r0 = 0x0000204CU; // [0x08007E64]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08007B86: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08007B92(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08007B92..0x08007C12 (128 bytes, Thumb)
u32 sub_08007B92(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049410U /* &VTable_08049410 */; // [0x08007E68]
    *(u8*)(r4 + 0x4) = (u8)r6;
    *(u32*)(r4) = (u32)r0;
    r3 = r4;
    r3 += 0x20U;
    *(u32*)(r4 + 0x8) = (u32)r5;
    r7 = 0xFFU;
    *(u8*)(r3) = (u8)r7;
    *(u8*)(r3 + 0x1) = (u8)r7;
    *(u8*)(r3 + 0x2) = (u8)r7;
    *(u8*)(r3 + 0x3) = (u8)r7;
    r3 = 0x08070808U; // [0x08007E6C]
    r0 = r4;
    *(u32*)(r4 + 0x10) = (u32)r3;
    *(u32*)(r4 + 0x14) = (u32)r3;
    *(u32*)(r4 + 0x18) = (u32)r3;
    *(u32*)(r4 + 0x1C) = (u32)r3;
    r3 = 0x16U;
    r7 = (u32)(*(s16*)(r5 + r3));
    r3 = r5 + 4;
    r0 += 0x3CU;
    *(u32*)(r4 + 0xC) = (u32)r7;
    r5 = *(u32*)(r5 + 0x4);
    r2 = r0 + 4;
    *(u32*)(r0) = (u32)r5;
    r0 = *(u32*)(r3 + 0x4);
    r1 = r2 + 4;
    *(u32*)(r2) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r6 = r1 + 4;
    r0 += 0xCU;
    r2 = *(u32*)r0; r0 += 4;
    *(u32*)(r1) = (u32)r2;
    r0 = *(u32*)(r0);
    *(u32*)(r6) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r0 += 0x14U;
    r6 = *(u8*)(r0);
    r0 = *(u8*)(r0 + 0x1);
    r6 *= r0;
    cmp_lhs = (s32)r6; cmp_rhs = 4;
    if (cmp_lhs > cmp_rhs) goto loc_08007C0E;
    r5 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08007C0E;
loc_08007BEC:
    r0 = *(u32*)(r4 + 0x8);
    r1 = (r5 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007C08;
    r1 = r4 + r5;
    r1 += 0x20U;
    *(u8*)(r1) = (u8)r5;
    r1 = (r5 << 11);
    r1 = r1 + r4;
    r1 += 0x4CU;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08007C04
loc_08007C08:
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_08007BEC;
loc_08007C0E:
    r0 = r4;
    return sub_08007B90(r0, r1, r2, r3);
}

// ROM Address: 0x08007C12..0x08007C4C (58 bytes, Thumb)
u32 sub_08007C12(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFFFF7E4U; // [0x08007E70]
    r5 = 0x08071008U; // [0x08007E74]
    sp += r3;
    r4 = r0;
    r0 = 0x00000804U; // [0x08007E78]
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r0 += sp;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x10U;
    r5 = 0x0U;
    r1 = 0x0U;
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r2 = *(u32*)(r3 + 0x20);
    r0 = *(u32*)(r2 + 0x4);
    r0 = r0 + r1;
    r12 = r0;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08007C42;
    r2 = *(u32*)(r4 + 0x8);
    r2 = *(u8*)(r2 + 0x15);
    cmp_lhs = (s32)r12; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) return sub_08007C4C(r0, r1, r2, r3);
loc_08007C42:
    r2 = (r1 << 1);
    r0 = 0x3U;
    r0 <<= (r2 & 0xFF);
    r5 |= r0;
    return sub_08007C98(r0, r1, r2, r3);
}

// ROM Address: 0x08007C4C..0x08007C52 (6 bytes, Thumb)
u32 sub_08007C4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r2 = (r1 << 1);
    lr = r2;
    return r0;
}

// ROM Address: 0x08007C52..0x08007C7C (42 bytes, Thumb)
u32 sub_08007C52(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r2 = *(u32*)(r3 + 0x20);
    r6 = lr;
    r2 = *(u32*)(r2);
    r6 = r6 + r0;
    r2 = r2 + r0;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08007C74;
    r3 = *(u32*)(r4 + 0x8);
    r7 = *(u8*)(r3 + 0x14);
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    *(u32*)(r3 + 0x18) = (u32)r7;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) return sub_08007C7C(r0, r1, r2, r3);
loc_08007C74:
    r2 = 0x1U;
    r2 <<= (r6 & 0xFF);
    r5 |= r2;
    return sub_08007C92(r0, r1, r2, r3);
}

// ROM Address: 0x08007C7C..0x08007C92 (22 bytes, Thumb)
u32 sub_08007C7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r3 = *(u32*)(r3 + 0x18);
    r7 = r12;
    r7 *= r3;
    r2 = r7 + r2;
    r3 = (r6 << 2);
    r6 = 0x00000804U; // [0x08007E78]
    r6 += sp;
    *(u32*)(r6 + r3) = r2;
    return r0;
}

// ROM Address: 0x08007C92..0x08007CCC (58 bytes, Thumb)
u32 sub_08007C92(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) return sub_08007C52(r0, r1, r2, r3);
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) return sub_08007C2A(r0, r1, r2, r3);
    r6 = 0x0U;
    r0 = 0x0U;
    r1 = 0x00000804U; // [0x08007E78]
    r2 = (r0 << 2);
    r1 += sp;
    r1 = *(u32*)(r1 + r2);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) return sub_08007CF8(r0, r1, r2, r3);
    r12 = r1;
    r3 = r12;
    r1 = *(u32*)(r4 + 0x8);
    r3 = (r3 << 2);
    r1 = r1 + r3;
    r1 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08007CCC(r0, r1, r2, r3);
    r1 = 0x08070808U; // [0x08007E6C]
    r2 = r2 + r4;
    *(u32*)(r2 + 0x10) = (u32)r1;
    r1 = 0x1U;
    r1 <<= (r0 & 0xFF);
    r5 |= r1;
    return sub_08007CFE(r0, r1, r2, r3);
}

// ROM Address: 0x08007CCC..0x08007D5C (144 bytes, Thumb)
u32 sub_08007CCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
loc_08007CCE:
    r3 = r4 + r1;
    r3 += 0x20U;
    r7 = *(u8*)(r3);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r12;
    if (cmp_lhs != cmp_rhs) goto loc_08007CF0;
    r7 = 0x1U;
    r7 <<= (r1 & 0xFF);
    r6 |= r7;
    r7 = 0x1U;
    r1 = (r1 << 11);
    r1 = r1 + r4;
    r7 <<= (r0 & 0xFF);
    r5 |= r7;
    r1 += 0x4CU;
    r2 = r2 + r4;
    *(u32*)(r2 + 0x10) = (u32)r1;
    goto loc_08007CFE;
loc_08007CF0:
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_08007CCE;
    goto loc_08007CFE;
    r1 = 0x08070808U; // [0x08007E6C]
    r2 = r2 + r4;
    *(u32*)(r2 + 0x10) = (u32)r1;
loc_08007CFE:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_08007CA2(r0, r1, r2, r3);
    r7 = 0x0U;
    r2 = 0x1U;
    r0 = r2;
    r0 <<= (r7 & 0xFF);
    r0 &= r5;
    if (cmp_lhs != cmp_rhs) return sub_08007D68(r0, r1, r2, r3);
    r1 = 0x0U;
    r0 = r2;
    r0 <<= (r1 & 0xFF);
    r0 &= r6;
    if (cmp_lhs != cmp_rhs) return sub_08007D62(r0, r1, r2, r3);
    r3 = 0x00000804U; // [0x08007E78]
    r2 <<= (r1 & 0xFF);
    r6 |= r2;
    r0 = (r7 << 2);
    r12 = r0;
    r2 = r4 + r1;
    r3 += sp;
    r0 = *(u32*)(r3 + r0);
    r2 += 0x20U;
    *(u8*)(r2) = (u8)r0;
    r3 = 0x1U;
    r1 = (r1 << 11);
    r1 = r1 + r4;
    r3 = (r3 << 11);
    r3 += sp;
    r1 += 0x4CU;
    r2 = r12;
    r2 = r2 + r4;
    *(u32*)(r3 + 0x14) = (u32)r1;
    *(u32*)(r2 + 0x10) = (u32)r1;
    r1 = *(u32*)(r4 + 0x8);
    r0 = (r0 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x18);
    r1 = 0x4; // sp + 0x4
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08007D4C
    r2 = 0x800U; // (1 << 11)
    r3 = r2;
    r3 += sp;
    r0 = *(u32*)(r3 + 0x14);
    r1 = 0x4; // sp + 0x4
    return r0;
}

// ROM Address: 0x08007D62..0x08008042 (736 bytes, Thumb)
u32 sub_08007D62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_08007D12(r0, r1, r2, r3);
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_08007D06(r0, r1, r2, r3);
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r2 = *(u32*)(r3 + 0x20);
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    *(u32*)(r4 + 0x24) = (u32)r1;
    *(u32*)(r4 + 0x28) = (u32)r2;
    r2 = *(u32*)(r3 + 0x20);
    r3 -= 0x80U;
    r1 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r3 + 0x7C) = (u32)r1;
    r3 += 0x80U;
    r2 = (r2 << 8);
    *(u32*)(r3) = (u32)r2;
    r4 += 0x2CU;
    r3 = 0x00000824U; // [0x08007E7C]
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    sp += r3;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r1);
    r0 = (r0 << 24);
    r0 = (r0 >> 27);
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u32*)(r1 + 0x4);
    r1 = 0x0600E000U; // [0x08007E80]
    r0 = (r0 << 24);
    r6 = (r0 >> 27);
    r0 = *(u8*)(r5 + 0x4);
    r4 = r6;
    r0 = (r0 << 11);
    r7 = r0 + r1;
    r1 = stack[2]; // [sp + 0x8]
    r0 = 0x20U;
    r0 = r0 - r1;
    stack[1] = r0; // [sp + 0x4]
    cmp_lhs = (s32)r6; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08007DE8;
    r0 = stack[1]; // [sp + 0x4]
    r0 = (r0 << 1);
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[2]; // [sp + 0x8]
    r2 = (r0 << 1);
    stack[7] = r2; // [sp + 0x1C]
loc_08007DCE:
    r1 = *(u32*)(r5 + 0x10);
    r0 = (r4 << 6);
    r1 = r1 + r0;
    r2 = stack[7]; // [sp + 0x1C]
    r0 = r0 + r7;
    r1 = r1 + r2;
    r0 = r0 + r2;
    r2 = stack[8]; // [sp + 0x20]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08007DDE: BL 0x08049144
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08007DCE;
loc_08007DE8:
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007E0E;
    r4 = r6;
    cmp_lhs = (s32)r6; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08007E0E;
    r0 = stack[2]; // [sp + 0x8]
    r0 = (r0 << 1);
    stack[6] = r0; // [sp + 0x18]
loc_08007DFA:
    r1 = *(u32*)(r5 + 0x14);
    r0 = (r4 << 6);
    r1 = r1 + r0;
    r0 = r0 + r7;
    r2 = stack[6]; // [sp + 0x18]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08007E04: BL 0x08049144
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08007DFA;
loc_08007E0E:
    r4 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08007E3A;
    r0 = stack[1]; // [sp + 0x4]
    r0 = (r0 << 1);
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[2]; // [sp + 0x8]
    r2 = (r0 << 1);
    stack[4] = r2; // [sp + 0x10]
loc_08007E20:
    r1 = *(u32*)(r5 + 0x18);
    r0 = (r4 << 6);
    r1 = r1 + r0;
    r2 = stack[4]; // [sp + 0x10]
    r0 = r0 + r7;
    r1 = r1 + r2;
    r0 = r0 + r2;
    r2 = stack[5]; // [sp + 0x14]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08007E30: BL 0x08049144
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_08007E20;
loc_08007E3A:
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08007E60;
    r4 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08007E60;
    r0 = stack[2]; // [sp + 0x8]
    r0 = (r0 << 1);
    stack[3] = r0; // [sp + 0xC]
loc_08007E4C:
    r1 = *(u32*)(r5 + 0x1C);
    r0 = (r4 << 6);
    r1 = r1 + r0;
    r0 = r0 + r7;
    r2 = stack[3]; // [sp + 0xC]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08007E56: BL 0x08049144
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_08007E4C;
loc_08007E60:
    return r0;
    r0 = 0x4CU;
    r0 = r0;
    stack[16] = r4; // [sp + 0x40]
    r4 = (r0 >> 32);
    r0 = (r1 >> 32);
    r7 = (r0 >> 32);
    r0 = sub_07FECE72(r0, r1, r2, r3); // 0x08007E70
    r0 = ((u32)((s32)r1 >> 32));
    r7 = (r0 >> 32);
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = (r4 >> 32);
    r0 = r0;
    goto loc_08007E84;
    r0 = (r0 << 24);
loc_08007E84:
    r4 = r0;
    r0 = *(u32*)(r1 + 0x18);
    r5 = r1;
    r1 = *(u32*)(r4 + 0x3C);
    r1 *= r0;
    r0 = *(u32*)(r4 + 0x44);
    r2 = 0x08070800U; // [0x08008094]
    r0 = r1 + r0;
    r1 = *(u32*)(r5 + 0x30);
    r0 = r0 + r1;
    stack[9] = r0; // [sp + 0x24]
    r0 = *(u32*)(r5 + 0x1C);
    r1 = *(u32*)(r4 + 0x40);
    r1 *= r0;
    r0 = *(u32*)(r4 + 0x48);
    r0 = r1 + r0;
    r1 = *(u32*)(r5 + 0x34);
    r0 = r0 + r1;
    stack[10] = r0; // [sp + 0x28]
    r0 = stack[9]; // [sp + 0x24]
    r1 = ((u32)((s32)r0 >> 10));
    r0 = stack[10]; // [sp + 0x28]
    stack[5] = r1; // [sp + 0x14]
    r0 = ((u32)((s32)r0 >> 10));
    stack[6] = r0; // [sp + 0x18]
    stack[8] = r0; // [sp + 0x20]
    r0 = r1;
    stack[7] = r1; // [sp + 0x1C]
    r1 = *(u32*)(r2);
    r0 = r0 - r1;
    r1 = stack[8]; // [sp + 0x20]
    r2 = *(u32*)(r2 + 0x4);
    stack[3] = r0; // [sp + 0xC]
    r1 = r1 - r2;
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    r1 = ((u32)((s32)r0 >> 8));
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[6]; // [sp + 0x18]
    stack[1] = r1; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0xC; // sp + 0xC
    r0 = r4;
    r0 = sub_08007C12(r0, r1, r2, r3); // 0x08007EE4: BL 0x08007C12
    r1 = 0x14; // sp + 0x14
    r0 = r4;
    r0 = sub_08007D98(r0, r1, r2, r3); // 0x08007EEC
    r0 = *(u8*)(r4 + 0x4);
    r1 = 0x4000000U; // (1 << 26)
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r2 = 0x1C; // sp + 0x1C
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r0 += 0x10U;
    *(u16*)(r0) = (u16)r1;
    *(u16*)(r0 + 0x2) = (u16)r2;
    r2 = stack[7]; // [sp + 0x1C]
    r3 = *(u32*)(r5 + 0x18);
    r0 = r4;
    r2 = r2 - r3;
    r3 = stack[8]; // [sp + 0x20]
    r1 = *(u32*)(r5 + 0x1C);
    stack[3] = r2; // [sp + 0xC]
    r1 = r3 - r1;
    stack[4] = r1; // [sp + 0x10]
    r1 = r2;
    r2 = stack[4]; // [sp + 0x10]
    r3 = *(u32*)(r4 + 0x2C);
    r0 += 0x34U;
    r1 = r1 - r3;
    r3 = *(u32*)(r4 + 0x30);
    stack[3] = r1; // [sp + 0xC]
    r2 = r2 - r3;
    stack[4] = r2; // [sp + 0x10]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r1 + 0x18);
    r5 = r1;
    r1 = *(u32*)(r4 + 0x3C);
    r1 *= r0;
    r0 = *(u32*)(r4 + 0x44);
    r2 = 0x08070800U; // [0x08008094]
    r0 = r1 + r0;
    r1 = *(u32*)(r5 + 0x30);
    r0 = r0 + r1;
    stack[9] = r0; // [sp + 0x24]
    r0 = *(u32*)(r5 + 0x1C);
    r1 = *(u32*)(r4 + 0x40);
    r1 *= r0;
    r0 = *(u32*)(r4 + 0x48);
    r0 = r1 + r0;
    r1 = *(u32*)(r5 + 0x34);
    r0 = r0 + r1;
    stack[10] = r0; // [sp + 0x28]
    r0 = stack[9]; // [sp + 0x24]
    r1 = ((u32)((s32)r0 >> 10));
    r0 = stack[10]; // [sp + 0x28]
    stack[5] = r1; // [sp + 0x14]
    r0 = ((u32)((s32)r0 >> 10));
    stack[6] = r0; // [sp + 0x18]
    stack[8] = r0; // [sp + 0x20]
    r0 = r1;
    stack[7] = r1; // [sp + 0x1C]
    r1 = *(u32*)(r2);
    r0 = r0 - r1;
    r1 = stack[8]; // [sp + 0x20]
    r2 = *(u32*)(r2 + 0x4);
    stack[3] = r0; // [sp + 0xC]
    r1 = r1 - r2;
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    r1 = ((u32)((s32)r0 >> 8));
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[6]; // [sp + 0x18]
    stack[1] = r1; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08007F9A;
    r0 = stack[4]; // [sp + 0x10]
    r1 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08007FA2;
loc_08007F9A:
    r1 = 0xC; // sp + 0xC
    r0 = r4;
    r0 = sub_08007C12(r0, r1, r2, r3); // 0x08007F9E: BL 0x08007C12
loc_08007FA2:
    r1 = 0x14; // sp + 0x14
    r0 = r4;
    r0 = sub_08007D98(r0, r1, r2, r3); // 0x08007FA6
    r0 = *(u8*)(r4 + 0x4);
    r1 = 0x4000000U; // (1 << 26)
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r2 = 0x1C; // sp + 0x1C
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r0 += 0x10U;
    *(u16*)(r0) = (u16)r1;
    *(u16*)(r0 + 0x2) = (u16)r2;
    r2 = stack[7]; // [sp + 0x1C]
    r3 = *(u32*)(r5 + 0x18);
    r0 = r4;
    r2 = r2 - r3;
    r3 = stack[8]; // [sp + 0x20]
    r1 = *(u32*)(r5 + 0x1C);
    stack[1] = r2; // [sp + 0x4]
    r1 = r3 - r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = r2;
    r2 = stack[2]; // [sp + 0x8]
    r3 = *(u32*)(r4 + 0x2C);
    r0 += 0x34U;
    r1 = r1 - r3;
    r3 = *(u32*)(r4 + 0x30);
    stack[1] = r1; // [sp + 0x4]
    r2 = r2 - r3;
    stack[2] = r2; // [sp + 0x8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    return r0;
    r3 = *(u32*)(r0 + 0x8);
    r3 += 0xCU;
    r4 = *(u32*)r3; r3 += 4;
    *(u32*)(r0 + 0x44) = (u32)r4;
    r3 = *(u32*)(r3);
    *(u32*)(r0 + 0x48) = (u32)r3;
    r2 = *(u32*)(r1);
    r2 = (r2 << 10);
    r2 = r4 + r2;
    *(u32*)(r0 + 0x44) = (u32)r2;
    r1 = *(u32*)(r1 + 0x4);
    r1 = (r1 << 10);
    r1 = r3 + r1;
    *(u32*)(r0 + 0x48) = (u32)r1;
    return r0; // BX lr
    r3 = *(u32*)(r1);
    r4 = *(u32*)(r0 + 0x34);
    r3 = r3 + r4;
    r4 = *(u32*)(r1 + 0x4);
    r5 = *(u32*)(r0 + 0x38);
    stack[0] = r3; // [sp + 0x0]
    r4 = r4 + r5;
    stack[1] = r4; // [sp + 0x4]
    r4 = r3;
    r3 = stack[1]; // [sp + 0x4]
    r4 = ((u32)((s32)r4 >> 8));
    r3 = ((u32)((s32)r3 >> 8));
    stack[1] = r3; // [sp + 0x4]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[0] = r4; // [sp + 0x0]
    if (cmp_lhs < cmp_rhs) goto loc_0800803A;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0800803A;
    cmp_lhs = (s32)r4; cmp_rhs = 2;
    if (cmp_lhs >= cmp_rhs) goto loc_0800803A;
    cmp_lhs = (s32)r3; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) return sub_08008042(r0, r1, r2, r3);
loc_0800803A:
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08008042..0x08008086 (68 bytes, Thumb)
u32 sub_08008042(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r1);
    r6 = *(u32*)(r0 + 0x34);
    r1 = *(u32*)(r1 + 0x4);
    r5 = r5 + r6;
    r6 = *(u32*)(r0 + 0x38);
    stack[0] = r5; // [sp + 0x0]
    r1 = r1 + r6;
    stack[1] = r1; // [sp + 0x4]
    r1 = r5;
    r6 = r3;
    r3 = (r6 << 1);
    r5 = stack[1]; // [sp + 0x4]
    r3 = r3 + r4;
    r1 = ((u32)((s32)r1 >> 3));
    r5 = ((u32)((s32)r5 >> 3));
    stack[0] = r1; // [sp + 0x0]
    r3 = (r3 << 2);
    r3 = r3 + r0;
    stack[1] = r5; // [sp + 0x4]
    r3 = *(u32*)(r3 + 0x10);
    r4 = (r5 << 27);
    r4 = (r4 >> 21);
    r1 = (r1 << 27);
    r1 = (r1 >> 26);
    r3 = r4 + r3;
    r1 = *(u16*)(r3 + r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800807E;
    r0 = 0x0U;
    return sub_0800803C(r0, r1, r2, r3);
loc_0800807E:
    r0 = *(u32*)(r0 + 0xC);
    *(u32*)(r2) = (u32)r0;
    r0 = 0x1U;
    return sub_0800803C(r0, r1, r2, r3);
}

// ROM Address: 0x08008086..0x08008094 (14 bytes, Thumb)
u32 sub_08008086(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = r0;
    r0 = 0x0U;
    r0 = sub_08007B78(r0, r1, r2, r3); // 0x0800808E: BL 0x08007B78
    return r0;
}

// ROM Address: 0x08008094..0x08008096 (2 bytes, Thumb)
u32 sub_08008094(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08008096..0x080080D8 (66 bytes, Thumb)
u32 sub_08008096(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r0 >> 32);
    r0 = 0x4000000U; // (1 << 26)
    r0 = *(u8*)(r0 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 55;
    if (cmp_lhs < cmp_rhs) goto loc_080080BC;
    cmp_lhs = (s32)r0; cmp_rhs = 160;
    if (cmp_lhs >= cmp_rhs) goto loc_080080BC;
    r1 = 0x08071018U; // [0x08008488]
    r0 += 0x1U;
    r1 = *(u32*)(r1 + 0x4);
    r0 = (r0 << 4);
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x28);
    r4 = 0x04000020U; // [0x0800848C]
    r0 = r1 + r0;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
loc_080080BC:
    return r0; // BX lr
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return Irq_WriteEnable1(r0, r1, r2, r3);
    r0 = 0x000027A0U; // [0x08008490]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080080CA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return Irq_WriteEnable1(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// Evidence: reads IE 0x04000200: 0x08008158 ldr r2, [pc, #0x344] (= 0x04000200) then 0x0800815C ldrh r0, [r2]; writes IE 0x04000200: 0x08008158 ldr r2, [pc, #0x344] (= 0x04000200) then 0x08008166 strh r0, [r2]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x080080D8
// ROM Address: 0x080080D8..0x08008174 (156 bytes, Thumb)
u32 Irq_WriteEnable1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049C84U /* &VTable_08049C84 */; // [0x08008494]
    r2 = 0x4U;
    *(u32*)(r4) = (u32)r0;
    r0 = (r2 << 7);
    r7 = 0x08050525U; // [0x08008498]
    r1 = r4 + r0;
    r5 = r4;
    r5 += 0x5CU;
    r6 = r1;
    r3 = r7;
    r0 = r5 + 4;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x080080EE: BL 0x08046FF4
    r3 = r7;
    r7 = 0x3A0U; // (29 << 5)
    r1 = r4 + r7;
    r2 = 0x4U;
    r0 = r6;
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x080080FE: BL 0x08046FF4
    r0 = stack[2]; // [sp + 0x8]
    r3 = 0x08071018U; // [0x08008488]
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x0U;
    r3 += 0x8U;
    r2 = 0xFFU;
    *(u32*)(r5) = (u32)r0;
loc_08008110:
    r1 = (r0 << 2);
    r1 = r1 + r4;
    *(u32*)(r1 + 0x2C) = (u32)r2;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    *(u32*)(r1 + 0x8) = (u32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_08008110;
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x4U;
    r6 = *(u8*)(r0);
    r0 = *(u8*)(r0 + 0x1);
    r6 *= r0;
    cmp_lhs = (s32)r6; cmp_rhs = 9;
    if (cmp_lhs > cmp_rhs) goto loc_08008152;
    r5 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08008152;
loc_08008132:
    r0 = *(u32*)(r4 + 0x4);
    r1 = (r5 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800814C;
    r1 = r1 + r4;
    *(u32*)(r1 + 0x2C) = (u32)r5;
    r1 = (r5 << 10);
    r1 = r1 + r4;
    r1 = r1 + r7;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08008148
loc_0800814C:
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_08008132;
loc_08008152:
    r0 = 0x08071018U; // [0x08008488]
    r1 = 0x08008099U; // [0x0800849C]
    r0 = *(u32*)(r0);
    r2 = 0x04000200U /* &REG_IE */; // [0x080084A0]
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = *(u16*)(r2);
    r1 = 0x2U;
    r0 |= r1;
    r1 = r2;
    r1 -= 0xFFU;
    *(u16*)(r2) = (u16)r0;
    r0 = 0x0U;
    r1 -= 0xE1U;
    *(u16*)(r1 + 0x2) = (u16)r0;
    *(u16*)(r1 + 0x6) = (u16)r0;
    r0 = r4;
    return sub_080080D4(r0, r1, r2, r3);
}

// Evidence: reads IE 0x04000200: 0x08008178 ldr r4, [pc, #0x324] (= 0x04000200) then 0x0800817C ldrh r2, [r4]; writes IE 0x04000200: 0x08008178 ldr r4, [pc, #0x324] (= 0x04000200) then 0x08008182 strh r2, [r4]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08008174
// ROM Address: 0x08008174..0x080081E2 (110 bytes, Thumb)
u32 Irq_WriteEnable2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049C84U /* &VTable_08049C84 */; // [0x08008494]
    r4 = 0x04000200U /* &REG_IE */; // [0x080084A0]
    *(u32*)(r0) = (u32)r2;
    r2 = *(u16*)(r4);
    r3 = 0x2U;
    r2 &= ~r3;
    *(u16*)(r4) = (u16)r2;
    r2 = 0x0804E47CU; // [0x080084A4]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    *(u32*)(r0) = (u32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08008190;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800818C: BL 0x0803D63C
loc_08008190:
    return r0;
    r2 = *(u32*)(r1);
    r2 = ((u32)((s32)r2 >> 10));
    r3 = (r2 >> 8);
    r2 = *(u32*)(r1 + 0x4);
    r4 = *(u32*)(r1 + 0x18);
    r3 = (r3 << 8);
    r4 = r4 - r3;
    r4 = ((u32)((s32)r4 >> 4));
    stack[6] = r4; // [sp + 0x18]
    r2 = ((u32)((s32)r2 >> 10));
    r2 = (r2 >> 8);
    r4 = *(u32*)(r1 + 0x1C);
    r2 = (r2 << 8);
    r4 = r4 - r2;
    r4 = ((u32)((s32)r4 >> 3));
    stack[7] = r4; // [sp + 0x1C]
    r4 = *(u32*)(r1 + 0x20);
    r4 = r4 - r3;
    r4 += 0xFU;
    r4 = ((u32)((s32)r4 >> 4));
    stack[8] = r4; // [sp + 0x20]
    r1 = *(u32*)(r1 + 0x24);
    r1 = r1 - r2;
    r1 += 0x7U;
    r1 = ((u32)((s32)r1 >> 3));
    stack[9] = r1; // [sp + 0x24]
    r1 = (r3 << 23);
    r4 = (r1 >> 31);
    r1 = (r2 << 23);
    r5 = (r1 >> 31);
    r1 = 0x0U;
    stack[4] = r1; // [sp + 0x10]
    r1 = stack[6]; // [sp + 0x18]
    r2 = 0x18; // sp + 0x18
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_080081E2(r0, r1, r2, r3);
    r1 = r2;
    return Dma_Start3First(r0, r1, r2, r3);
}

// ROM Address: 0x080081E2..0x080081E4 (2 bytes, Thumb)
u32 sub_080081E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x10; // sp + 0x10
    return r0;
}

// Evidence: writes DMA3SAD 0x040000D4: 0x08008266 ldr r7, [pc, #0x244] (= 0x040000D4) then 0x08008270 str r6, [r7]; 0x080082D2 ldr r7, [pc, #0x1d8] (= 0x040000D4) then 0x080082DC str r6, [r7]; writes DMA3DAD 0x040000D8: 0x08008266 ldr r7, [pc, #0x244] (= 0x040000D4) then 0x08008274 str r6, [r7, #4]; 0x080082D2 ldr r7, [pc, #0x1d8] (= 0x040000D4) then 0x080082E0 str r6, [r7, #4]; writes DMA3CNT_L 0x040000DC: 0x08008266 ldr r7, [pc, #0x244] (= 0x040000D4) then 0x08008278 strh r6, [r7, #8]; 0x080082D2 ldr r7, [pc, #0x1d8] (= 0x040000D4) then 0x080082E4 strh r6, [r7, #8]; writes DMA3CNT_H 0x040000DE: 0x08008266 ldr r7, [pc, #0x244] (= 0x040000D4) then 0x0800827E strh r6, [r7, #0xa]; 0x080082D2 ldr r7, [pc, #0x1d8] (= 0x040000D4) then 0x080082EA strh r6, [r7, #0xa]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x080081E4
// ROM Address: 0x080081E4..0x08008306 (290 bytes, Thumb)
u32 Dma_Start3First(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = *(u32*)(r1);
    r3 = 0x0U;
    stack[4] = r3; // [sp + 0x10]
    r3 = stack[7]; // [sp + 0x1C]
    r1 = r2 + 4;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    stack[5] = r6; // [sp + 0x14]
    if (cmp_lhs > cmp_rhs) goto loc_080081F6;
    r1 = 0x10; // sp + 0x10
loc_080081F6:
    r1 = *(u32*)(r1);
    r6 = 0x10U;
    stack[3] = r6; // [sp + 0xC]
    r6 = stack[8]; // [sp + 0x20]
    r3 = r2;
    r3 += 0x8U;
    cmp_lhs = (s32)r6; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_08008208;
    r3 = 0xC; // sp + 0xC
loc_08008208:
    r3 = *(u32*)(r3);
    r2 += 0xCU;
    stack[4] = r3; // [sp + 0x10]
    r3 = 0x20U;
    stack[3] = r3; // [sp + 0xC]
    r3 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r3; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_0800821A;
    r2 = 0xC; // sp + 0xC
loc_0800821A:
    r3 = *(u32*)(r2);
    r2 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return Dma_Start3Second(r0, r1, r2, r3);
    r2 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08008292;
    r6 = 0x1U;
    r2 = r5;
    r2 ^= r6;
    r6 ^= r4;
    r6 = (r6 << 5);
    r2 = (r2 << 11);
    r2 = r2 + r6;
    r12 = r2;
    r2 = stack[6]; // [sp + 0x18]
    r6 = 0x0600F000U; // [0x080084A8]
    r2 = (r2 << 28);
    r7 = (r2 >> 27);
    r2 = 0x20U;
    r12 += r6;
    r6 = r2 - r7;
    r2 = stack[7]; // [sp + 0x1C]
    stack[3] = r6; // [sp + 0xC]
    r2 = (r2 << 27);
    r2 = (r2 >> 27);
    r6 = (r2 << 6);
    r6 += r12;
    r12 = r6;
    r12 += r7;
    r6 = *(u32*)(r0 + 0x8);
    lr = r7;
    r7 = (r2 << 5);
    r6 = r6 + r7;
    lr += r6;
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08008292;
    r6 = stack[3]; // [sp + 0xC]
    r7 = 0x040000D4U /* &REG_DMA3SAD */; // [0x080084AC]
    r6 = (r6 << 15);
    r6 = (r6 >> 16);
    stack[19] = r6; // [sp + 0x4C]
loc_0800826E:
    r6 = lr;
    *(u32*)(r7) = (u32)r6;
    r6 = r12;
    *(u32*)(r7 + 0x4) = (u32)r6;
    r6 = stack[19]; // [sp + 0x4C]
    *(u16*)(r7 + 0x8) = (u16)r6;
    r6 = 0x8000U; // (1 << 15)
    *(u16*)(r7 + 0xA) = (u16)r6;
    r6 = lr;
    r6 += 0x20U;
    lr = r6;
    r6 = r12;
    r6 += 0x40U;
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    r12 = r6;
    if (cmp_lhs < cmp_rhs) goto loc_0800826E;
loc_08008292:
    r6 = 0x1U;
    r2 = r5;
    r2 ^= r6;
    r2 = (r2 << 11);
    stack[18] = r2; // [sp + 0x48]
    r6 = (r4 << 5);
    r2 = r2 + r6;
    r12 = r2;
    r6 = 0x0600F000U; // [0x080084A8]
    r2 = stack[4]; // [sp + 0x10]
    r12 += r6;
    r6 = stack[5]; // [sp + 0x14]
    r7 = (r6 << 1);
    r2 = r2 - r6;
    r6 = (r2 << 1);
    stack[3] = r6; // [sp + 0xC]
    lr = r7;
    if (cmp_lhs == cmp_rhs) goto loc_080082FE;
    r2 = stack[7]; // [sp + 0x1C]
    r2 = (r2 << 27);
    r2 = (r2 >> 27);
    r6 = (r2 << 6);
    r6 += r12;
    r12 = r6;
    r6 = *(u32*)(r0 + 0xC);
    r7 = (r2 << 5);
    r6 = r6 + r7;
    r12 += lr;
    lr += r6;
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_080082FE;
    r6 = stack[3]; // [sp + 0xC]
    r7 = 0x040000D4U /* &REG_DMA3SAD */; // [0x080084AC]
    r6 = (r6 << 15);
    r6 = (r6 >> 16);
    stack[17] = r6; // [sp + 0x44]
loc_080082DA:
    r6 = lr;
    *(u32*)(r7) = (u32)r6;
    r6 = r12;
    *(u32*)(r7 + 0x4) = (u32)r6;
    r6 = stack[17]; // [sp + 0x44]
    *(u16*)(r7 + 0x8) = (u16)r6;
    r6 = 0x8000U; // (1 << 15)
    *(u16*)(r7 + 0xA) = (u16)r6;
    r6 = lr;
    r6 += 0x20U;
    lr = r6;
    r6 = r12;
    r6 += 0x40U;
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    r12 = r6;
    if (cmp_lhs < cmp_rhs) goto loc_080082DA;
loc_080082FE:
    r2 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r2; cmp_rhs = 16;
    if (cmp_lhs <= cmp_rhs) return Dma_Start3Second(r0, r1, r2, r3);
    return sub_08008308(r0, r1, r2, r3);
}

// Evidence: writes DMA3SAD 0x040000D4: 0x08008338 ldr r7, [pc, #0x170] (= 0x040000D4) then 0x08008342 str r6, [r7]; 0x0800839E ldr r7, [pc, #0x10c] (= 0x040000D4) then 0x080083A8 str r6, [r7]; writes DMA3DAD 0x040000D8: 0x08008338 ldr r7, [pc, #0x170] (= 0x040000D4) then 0x08008346 str r6, [r7, #4]; 0x0800839E ldr r7, [pc, #0x10c] (= 0x040000D4) then 0x080083AC str r6, [r7, #4]; writes DMA3CNT_L 0x040000DC: 0x08008338 ldr r7, [pc, #0x170] (= 0x040000D4) then 0x0800834A strh r6, [r7, #8]; 0x0800839E ldr r7, [pc, #0x10c] (= 0x040000D4) then 0x080083B0 strh r6, [r7, #8]; writes DMA3CNT_H 0x040000DE: 0x08008338 ldr r7, [pc, #0x170] (= 0x040000D4) then 0x08008350 strh r6, [r7, #0xa]; 0x0800839E ldr r7, [pc, #0x10c] (= 0x040000D4) then 0x080083B6 strh r6, [r7, #0xa]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08008306
// ROM Address: 0x08008306..0x08008486 (384 bytes, Thumb)
u32 Dma_Start3Second(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    goto loc_08008364;
    r6 = 0x1U;
    r6 ^= r4;
    r2 = stack[18]; // [sp + 0x48]
    r6 = (r6 << 5);
    r2 = r2 + r6;
    r6 = 0x0600F000U; // [0x080084A8]
    r7 = r2 + r6;
    r2 = stack[8]; // [sp + 0x20]
    r6 = (r2 << 1);
    r2 = stack[7]; // [sp + 0x1C]
    r6 -= 0x20U;
    r2 = (r2 << 27);
    r2 = (r2 >> 27);
    stack[3] = r6; // [sp + 0xC]
    r6 = (r2 << 6);
    r12 = r6;
    r12 += r7;
    r6 = *(u32*)(r0 + 0x10);
    r7 = (r2 << 5);
    lr = r6;
    lr += r7;
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    if (cmp_lhs >= cmp_rhs) goto loc_08008364;
    r6 = stack[3]; // [sp + 0xC]
    r7 = 0x040000D4U /* &REG_DMA3SAD */; // [0x080084AC]
    r6 = (r6 << 15);
    r6 = (r6 >> 16);
    stack[16] = r6; // [sp + 0x40]
loc_08008340:
    r6 = lr;
    *(u32*)(r7) = (u32)r6;
    r6 = r12;
    *(u32*)(r7 + 0x4) = (u32)r6;
    r6 = stack[16]; // [sp + 0x40]
    *(u16*)(r7 + 0x8) = (u16)r6;
    r6 = 0x8000U; // (1 << 15)
    *(u16*)(r7 + 0xA) = (u16)r6;
    r6 = lr;
    r6 += 0x20U;
    lr = r6;
    r6 = r12;
    r6 += 0x40U;
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    r12 = r6;
    if (cmp_lhs < cmp_rhs) goto loc_08008340;
loc_08008364:
    r2 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080083CA;
    r6 = 0x1U;
    r6 ^= r4;
    r6 = (r6 << 5);
    r2 = (r5 << 11);
    r2 = r2 + r6;
    r6 = 0x0600F000U; // [0x080084A8]
    r7 = r2 + r6;
    r2 = stack[6]; // [sp + 0x18]
    r6 = 0x20U;
    r2 = (r2 << 28);
    r2 = (r2 >> 27);
    r6 = r6 - r2;
    stack[3] = r6; // [sp + 0xC]
    r6 = (r1 << 6);
    r6 = r6 + r7;
    r12 = r6;
    r6 = *(u32*)(r0 + 0x14);
    r7 = (r1 << 5);
    r6 = r6 + r7;
    lr = r6;
    lr += r2;
    r12 += r2;
    r2 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_080083CA;
    r6 = stack[3]; // [sp + 0xC]
    r7 = 0x040000D4U /* &REG_DMA3SAD */; // [0x080084AC]
    r6 = (r6 << 15);
    r6 = (r6 >> 16);
    stack[15] = r6; // [sp + 0x3C]
loc_080083A6:
    r6 = lr;
    *(u32*)(r7) = (u32)r6;
    r6 = r12;
    *(u32*)(r7 + 0x4) = (u32)r6;
    r6 = stack[15]; // [sp + 0x3C]
    *(u16*)(r7 + 0x8) = (u16)r6;
    r6 = 0x8000U; // (1 << 15)
    *(u16*)(r7 + 0xA) = (u16)r6;
    r6 = lr;
    r6 += 0x20U;
    lr = r6;
    r6 = r12;
    r6 += 0x40U;
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    r12 = r6;
    if (cmp_lhs < cmp_rhs) goto loc_080083A6;
loc_080083CA:
    r2 = (r5 << 11);
    r6 = (r4 << 5);
    r12 = r2;
    r2 = r2 + r6;
    lr = r6;
    r6 = 0x0600F000U; // [0x080084A8]
    r7 = r2 + r6;
    r6 = stack[5]; // [sp + 0x14]
    stack[3] = r7; // [sp + 0xC]
    r7 = (r6 << 1);
    r2 = stack[4]; // [sp + 0x10]
    stack[14] = r7; // [sp + 0x38]
    r2 = r2 - r6;
    r6 = (r2 << 1);
    stack[13] = r6; // [sp + 0x34]
    stack[2] = r7; // [sp + 0x8]
    if (cmp_lhs == cmp_rhs) goto loc_08008436;
    r7 = stack[3]; // [sp + 0xC]
    r2 = (r1 << 6);
    r2 = r2 + r7;
    r7 = stack[2]; // [sp + 0x8]
    r2 = r2 + r7;
    stack[1] = r2; // [sp + 0x4]
    r2 = *(u32*)(r0 + 0x18);
    r7 = (r1 << 5);
    r2 = r2 + r7;
    r7 = stack[2]; // [sp + 0x8]
    r2 = r2 + r7;
    stack[0] = r2; // [sp + 0x0]
    r2 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08008436;
    r6 = (r6 << 15);
    r6 = (r6 >> 16);
    r7 = 0x040000D4U /* &REG_DMA3SAD */; // [0x080084AC]
    stack[12] = r6; // [sp + 0x30]
loc_08008412:
    r6 = stack[0]; // [sp + 0x0]
    *(u32*)(r7) = (u32)r6;
    r6 = stack[1]; // [sp + 0x4]
    *(u32*)(r7 + 0x4) = (u32)r6;
    r6 = stack[12]; // [sp + 0x30]
    *(u16*)(r7 + 0x8) = (u16)r6;
    r6 = 0x8000U; // (1 << 15)
    *(u16*)(r7 + 0xA) = (u16)r6;
    r6 = stack[0]; // [sp + 0x0]
    r2 += 0x1U;
    r6 += 0x20U;
    stack[0] = r6; // [sp + 0x0]
    r6 = stack[1]; // [sp + 0x4]
    r6 += 0x40U;
    stack[1] = r6; // [sp + 0x4]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_08008412;
loc_08008436:
    r2 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r2; cmp_rhs = 16;
    if (cmp_lhs <= cmp_rhs) return sub_080084B2(r0, r1, r2, r3);
    r6 = 0x1U;
    r6 ^= r4;
    r2 = r12;
    r6 = (r6 << 5);
    r2 = r2 + r6;
    r6 = 0x0600F000U; // [0x080084A8]
    r7 = (r1 << 6);
    r2 = r2 + r6;
    r6 = stack[8]; // [sp + 0x20]
    r12 = r7;
    r12 += r2;
    r2 = *(u32*)(r0 + 0x1C);
    r7 = (r1 << 5);
    r6 = (r6 << 1);
    r6 -= 0x20U;
    r2 = r2 + r7;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_080084B2(r0, r1, r2, r3);
    r6 = (r6 << 15);
    r6 = (r6 >> 16);
    r7 = 0x040000D4U /* &REG_DMA3SAD */; // [0x080084AC]
    stack[11] = r6; // [sp + 0x2C]
    *(u32*)(r7) = (u32)r2;
    r6 = r12;
    *(u32*)(r7 + 0x4) = (u32)r6;
    r6 = stack[11]; // [sp + 0x2C]
    *(u16*)(r7 + 0x8) = (u16)r6;
    r6 = 0x8000U; // (1 << 15)
    *(u16*)(r7 + 0xA) = (u16)r6;
    r6 = r12;
    r6 += 0x40U;
    r2 += 0x20U;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    r12 = r6;
    return sub_080084B0(r0, r1, r2, r3);
}

// ROM Address: 0x08008598..0x080085BC (36 bytes, Thumb)
u32 sub_08008598(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x3FC; // sp + 0x3FC
    r4 = r0;
    r7 += 0x8U;
    r6 = 0x0U;
    r6 = ~r6;
    r3 = 0x3FC; // sp + 0x3FC
    r0 = *(u32*)(r3 + 0x34);
    r0 = *(u32*)(r0 + 0x4);
    r2 = r0 + r6;
    r0 = *(u32*)(r4 + 0x4);
    r0 = *(u8*)(r0 + 0x5);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_080085BC(r0, r1, r2, r3);
    r2 = r2 + r0;
    return sub_080085C2(r0, r1, r2, r3);
}

// ROM Address: 0x080085BC..0x080085C2 (6 bytes, Thumb)
u32 sub_080085BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_080085C2(r0, r1, r2, r3);
    r2 = r2 - r0;
    return r0;
}

// ROM Address: 0x080085C2..0x080085D8 (22 bytes, Thumb)
u32 sub_080085C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r1 = ~r1;
    r3 = 0x3FC; // sp + 0x3FC
    r0 = *(u32*)(r3 + 0x34);
    r0 = *(u32*)(r0);
    r3 = *(u32*)(r4 + 0x4);
    r0 = r0 + r1;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_080085D8(r0, r1, r2, r3);
    r3 = *(u8*)(r3 + 0x4);
    r0 = r0 + r3;
    return sub_080085E0(r0, r1, r2, r3);
}

// ROM Address: 0x080085D8..0x080086B2 (218 bytes, Thumb)
u32 sub_080085D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u8*)(r3 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_080085E0;
    r0 = r0 - r5;
loc_080085E0:
    r3 = *(u32*)(r4 + 0x4);
    r5 = r2;
    r3 = *(u8*)(r3 + 0x4);
    r1 += 0x1U;
    r5 *= r3;
    r0 = r5 + r0;
    *(u32*)r7 = r0; r7 += 4;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) return sub_080085C6(r0, r1, r2, r3);
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) return sub_080085AA(r0, r1, r2, r3);
    r6 = 0x0U;
    r5 = 0x0U;
    r1 = 0x0U;
loc_080085FE:
    r0 = (r1 << 2);
    r2 = 0x3FC; // sp + 0x3FC
    r2 += 0x8U;
    r2 = *(u32*)(r2 + r0);
    r12 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r3 = (r2 << 2);
    r0 = r0 + r3;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08008624;
    r0 = 0x08071020U; // [0x08008838]
    r2 = r12;
    r2 = r2 + r4;
    *(u32*)(r2 + 0x8) = (u32)r0;
    r0 = 0x1U;
    r0 <<= (r1 & 0xFF);
    r6 |= r0;
    goto loc_08008656;
loc_08008624:
    r0 = 0x0U;
loc_08008626:
    r7 = (r0 << 2);
    r3 = r7 + r4;
    r7 = *(u32*)(r3 + 0x2C);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08008650;
    r7 = 0x1U;
    r2 = r7;
    r2 <<= (r0 & 0xFF);
    r5 |= r2;
    r7 <<= (r1 & 0xFF);
    r2 = r7;
    r6 |= r2;
    r2 = 0x1DU;
    r0 = (r0 << 10);
    r0 = r0 + r4;
    r2 = (r2 << 5);
    r0 = r0 + r2;
    r2 = r12;
    r2 = r2 + r4;
    *(u32*)(r2 + 0x8) = (u32)r0;
    goto loc_08008656;
loc_08008650:
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_08008626;
loc_08008656:
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) goto loc_080085FE;
    r7 = 0x0U;
    r2 = 0x1U;
    r0 = r2;
    r0 <<= (r7 & 0xFF);
    r0 &= r6;
    if (cmp_lhs != cmp_rhs) return sub_080086BE(r0, r1, r2, r3);
    r1 = 0x0U;
    r0 = r2;
    r0 <<= (r1 & 0xFF);
    r0 &= r5;
    if (cmp_lhs != cmp_rhs) return sub_080086B8(r0, r1, r2, r3);
    r2 <<= (r1 & 0xFF);
    r5 |= r2;
    r2 = (r1 << 2);
    r0 = (r7 << 2);
    r3 = 0x3FC; // sp + 0x3FC
    r3 += 0x8U;
    r12 = r0;
    r0 = *(u32*)(r3 + r0);
    r2 = r2 + r4;
    *(u32*)(r2 + 0x2C) = (u32)r0;
    r2 = 0x1DU;
    r1 = (r1 << 10);
    r1 = r1 + r4;
    r2 = (r2 << 5);
    r1 = r1 + r2;
    r2 = r12;
    r3 = 0x3FC; // sp + 0x3FC
    *(u32*)(r3 + 0x2C) = (u32)r1;
    r2 = r2 + r4;
    *(u32*)(r2 + 0x8) = (u32)r1;
    r1 = *(u32*)(r4 + 0x4);
    r0 = (r0 << 2);
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x8);
    r1 = 0x4; // sp + 0x4
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080086A4
    r2 = 0x1U;
    r3 = 0x3FC; // sp + 0x3FC
    r0 = *(u32*)(r3 + 0x2C);
    r2 = (r2 << 10);
    r1 = 0x4; // sp + 0x4
    return r0;
}

// ROM Address: 0x080086B8..0x080089AE (758 bytes, Thumb)
u32 sub_080086B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) return sub_0800866A(r0, r1, r2, r3);
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) return sub_0800865E(r0, r1, r2, r3);
    r3 = 0x3FC; // sp + 0x3FC
    r1 = *(u32*)(r3 + 0x34);
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r4 + 0x54) = (u32)r1;
    *(u32*)(r4 + 0x50) = (u32)r2;
    return r0;
    r4 = r1;
    r4 += 0x10U;
    stack[7] = r4; // [sp + 0x1C]
    r3 = *(u32*)(r0 + 0x58);
    r6 = r1;
    r6 += 0x8U;
    r2 = *(u32*)(r1 + 0x10);
    r12 = r6;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080086FA;
    r6 = r12;
    r3 = *(u32*)(r0 + 0x5C);
    r4 = *(u32*)(r6);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08008794;
loc_080086FA:
    r6 = r12;
    *(u32*)(r0 + 0x58) = (u32)r2;
    r3 = *(u32*)(r6);
    r2 = 0x38U;
    *(u32*)(r0 + 0x5C) = (u32)r3;
loc_08008704:
    r3 = (r2 << 1);
    r4 = 0x08071420U; // [0x0800883C]
    stack[6] = r3; // [sp + 0x18]
    r3 = (u32)(*(s16*)(r4 + r3));
    r4 = stack[7]; // [sp + 0x1C]
    r4 = *(u32*)(r4);
    r3 = r4 + r3;
    r6 = ((u32)((s32)r3 >> 10));
    r4 = (r6 << 24);
    r5 = (r4 >> 22);
    r7 = r6;
    r6 += 0x1U;
    r4 = 0x087B72ECU; // [0x08008840]
    stack[1] = r3; // [sp + 0x4]
    r6 = (r6 << 24);
    r6 = (r6 >> 22);
    r5 = *(u32*)(r4 + r5);
    r4 = *(u32*)(r4 + r6);
    r3 = (r3 << 22);
    lr = r4;
    r4 = 0x400U; // (1 << 10)
    r3 = (r3 >> 22);
    r4 = r4 - r3;
    r6 = r4;
    r6 *= r5;
    r5 = lr;
    r5 *= r3;
    r5 = r6 + r5;
    stack[0] = r6; // [sp + 0x0]
    r6 = r12;
    r6 = *(u32*)(r6);
    r5 = ((u32)((s32)r5 >> 16));
    r6 *= r5;
    r5 = ((u32)((s32)r6 >> 10));
    r6 = r7;
    r6 += 0x40U;
    lr = r6;
    r6 = (r6 << 24);
    r7 = 0x087B6EECU; // [0x08008844]
    r6 = (r6 >> 22);
    r7 = *(u32*)(r7 + r6);
    r6 = lr;
    r6 += 0x1U;
    stack[0] = r7; // [sp + 0x0]
    r7 = 0x087B6EECU; // [0x08008844]
    r6 = (r6 << 24);
    r6 = (r6 >> 22);
    r6 = *(u32*)(r7 + r6);
    r7 = stack[0]; // [sp + 0x0]
    r3 *= r6;
    r4 *= r7;
    r3 = r4 + r3;
    r3 = ((u32)((s32)r3 >> 16));
    r4 = (r2 << 2);
    r6 = r4 + r0;
    r4 = 0x7FU;
    r3 *= r5;
    r3 = ((u32)((s32)r3 >> 10));
    r4 = ~r4;
    *(u32*)(r4 + r6) = r3;
    r3 = stack[6]; // [sp + 0x18]
    r4 = 0x08071560U; // [0x08008848]
    r2 += 0x1U;
    r3 = *(u16*)(r4 + r3);
    r4 = 0xFFU;
    r4 += 0x21U;
    r3 *= r5;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r4 + r6) = r3;
    cmp_lhs = (s32)r2; cmp_rhs = 160;
    if (cmp_lhs < cmp_rhs) goto loc_08008704;
loc_08008794:
    r3 = r1;
    r3 += 0x44U;
    r12 = r3;
    r3 += 0x8U;
    stack[2] = r3; // [sp + 0x8]
    r3 += 0x4U;
    stack[5] = r3; // [sp + 0x14]
    r3 = 0x08071020U; // [0x08008838]
    r5 = r12;
    r5 += 0x4U;
    stack[4] = r5; // [sp + 0x10]
    r3 -= 0x8U;
    r3 = *(u32*)(r3 + 0x4);
    r2 = 0x38U;
    r3 += 0x80U;
    stack[3] = r3; // [sp + 0xC]
loc_080087B4:
    r3 = (r2 << 2);
    r4 = 0x7FU;
    r4 = ~r4;
    r3 = r3 + r0;
    r4 = *(u32*)(r4 + r3);
    r5 = stack[4]; // [sp + 0x10]
    r3 += 0xFFU;
    r5 = *(u32*)(r5);
    r6 = *(u32*)(r1);
    r5 *= r4;
    r5 = ((u32)((s32)r5 >> 10));
    r5 = r6 - r5;
    r7 = ((u32)((s32)r5 >> 2));
    r5 = stack[5]; // [sp + 0x14]
    r3 += 0x21U;
    r5 = *(u32*)(r5);
    r5 *= r4;
    r4 = ((u32)((s32)r5 >> 10));
    r5 = *(u32*)(r1 + 0x4);
    r4 = r5 - r4;
    r5 = ((u32)((s32)r4 >> 2));
    r4 = *(u32*)(r3);
    r3 = r12;
    r3 = *(u32*)(r3);
    lr = r5;
    r3 *= r4;
    r5 = r3;
    r3 = (r5 << 2);
    r3 = r3 + r5;
    r3 = (r3 << 1);
    r5 = ((u32)((s32)r3 >> 23));
    r3 = stack[2]; // [sp + 0x8]
    r3 = *(u32*)(r3);
    r3 *= r4;
    r6 = r3;
    r3 = (r6 << 2);
    r3 = r3 + r6;
    r3 = (r3 << 1);
    r6 = ((u32)((s32)r3 >> 23));
    r3 = stack[3]; // [sp + 0xC]
    r4 = (r2 << 4);
    r3 = *(u32*)(r3 + 0x28);
    r2 += 0x1U;
    r4 = r3 + r4;
    r3 = (r5 << 4);
    r3 = r3 - r5;
    r3 = (r3 << 3);
    r3 = r7 - r3;
    *(u32*)(r4 + 0x8) = (u32)r3;
    *(u32*)r4 = r5; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    r3 = (r6 << 4);
    r3 = r3 - r6;
    r3 = (r3 << 3);
    r5 = lr;
    r3 = r5 - r3;
    r4 -= 0x8U;
    *(u32*)(r4 + 0xC) = (u32)r3;
    cmp_lhs = (s32)r2; cmp_rhs = 160;
    if (cmp_lhs < cmp_rhs) goto loc_080087B4;
    return r0;
    r0 = r0;
    r0 = (r0 << 24);
    r4 = (r2 << 3);
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r4 >> 32));
    r7 = (r0 >> 32);
    r0 = ((u32)((s32)r4 >> 16));
    r7 = (r0 >> 32);
    *(u8*)(r5 + 0xB) = (u8)r4;
    r3 = (r7 >> 1);
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    r0 = ((u32)((s32)r4 >> 21));
    r7 = (r0 >> 32);
    r5 = r0;
    r0 = *(u32*)(r1);
    r0 = ((u32)((s32)r0 >> 18));
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r1 + 0x4);
    r4 = r1;
    r0 = ((u32)((s32)r0 >> 18));
    stack[2] = r0; // [sp + 0x8]
    r0 = r5;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08008598(r0, r1, r2, r3); // 0x08008864: BL 0x08008598
    r1 = r4;
    r0 = r5;
    r0 = sub_08008192(r0, r1, r2, r3); // 0x0800886C
    r1 = r4;
    r0 = r5;
    r0 = sub_080086D8(r0, r1, r2, r3); // 0x08008874
    return r0;
    r4 = r0;
    r0 = *(u32*)(r1);
    r0 = ((u32)((s32)r0 >> 18));
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r1 + 0x4);
    r5 = r1;
    r0 = ((u32)((s32)r0 >> 18));
    stack[2] = r0; // [sp + 0x8]
    r0 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080088A0;
    r0 = stack[2]; // [sp + 0x8]
    r1 = *(u32*)(r4 + 0x54);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080088A8;
loc_080088A0:
    r1 = 0x4; // sp + 0x4
    r0 = r4;
    r0 = sub_08008598(r0, r1, r2, r3); // 0x080088A4: BL 0x08008598
loc_080088A8:
    r1 = r5;
    r0 = r4;
    r0 = sub_08008192(r0, r1, r2, r3); // 0x080088AC
    r1 = r5;
    r0 = r4;
    r0 = sub_080086D8(r0, r1, r2, r3); // 0x080088B4
    return r0;
    r0 = 0x0U;
    r0 = sub_080080C0(r0, r1, r2, r3); // 0x080088C0
    return r0;
    r0 = r0;
    r5 = r2;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080088DC;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080088D4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080088E4;
loc_080088DC:
    r1 = 0x080498B0U /* &VTable_080498B0 */; // [0x08008994]
    *(u8*)(r0 + 0x4) = (u8)r4;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r5;
loc_080088E4:
    return r0;
    r3 = 0xFFFFF800U; // [0x08008998]
    r4 = r0;
    sp += r3;
    r0 = *(u32*)(r0 + 0x8);
    r6 = r1;
    r1 = sp;
    r5 = sp;
    r0 = *(u32*)(r0 + 0x1C);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080088F8
    r0 = *(u8*)(r4 + 0x4);
    r1 = 0x0600E000U; // [0x0800899C]
    r2 = 0x1U;
    r0 = (r0 << 11);
    r0 = r0 + r1;
    r2 = (r2 << 11);
    r1 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800890A: BL 0x08049138
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08008918: BL __call_via_r3
    r3 = 0x800U; // (1 << 11)
    sp += r3;
    return r0;
    r2 = *(u32*)(r0 + 0x8);
    r4 = *(u32*)(r1 + 0x18);
    r3 = *(u32*)(r2 + 0x4);
    r3 *= r4;
    r4 = *(u32*)(r2 + 0xC);
    r3 = r3 + r4;
    r4 = *(u32*)(r1 + 0x30);
    r3 = r3 + r4;
    r4 = *(u32*)(r1 + 0x40);
    r2 = *(u32*)(r2 + 0x14);
    r2 *= r4;
    r2 = r3 + r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = *(u32*)(r0 + 0x8);
    r4 = *(u32*)(r1 + 0x1C);
    r3 = *(u32*)(r2 + 0x4);
    r3 *= r4;
    r4 = *(u32*)(r2 + 0x10);
    r3 = r3 + r4;
    r4 = *(u32*)(r1 + 0x34);
    r1 = *(u32*)(r1 + 0x40);
    r2 = *(u32*)(r2 + 0x18);
    r3 = r3 + r4;
    r2 *= r1;
    r1 = r3 + r2;
    stack[1] = r1; // [sp + 0x4]
    r0 = *(u8*)(r0 + 0x4);
    r1 = 0x4000000U; // (1 << 26)
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r1 = stack[0]; // [sp + 0x0]
    r0 += 0x10U;
    r2 = stack[1]; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 10));
    *(u16*)(r0) = (u16)r1;
    r2 = ((u32)((s32)r2 >> 10));
    *(u16*)(r0 + 0x2) = (u16)r2;
    return r0; // BX lr
    r4 = r0;
    r5 = r1;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08008982: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008992;
    r1 = 0x080498B0U /* &VTable_080498B0 */; // [0x08008994]
    *(u8*)(r0 + 0x4) = (u8)r4;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r5;
loc_08008992:
    return r0;
    r0 = stack[176]; // [sp + 0x2C0]
    r4 = (r0 >> 32);
    goto loc_080089A0;
    r0 = (r0 << 24);
loc_080089A0:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080089AE(r0, r1, r2, r3);
    r0 = r1;
    return r0;
}

// ROM Address: 0x080089AE..0x080089CC (30 bytes, Thumb)
u32 sub_080089AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x28);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080089B8;
    r0 = 0x1U;
    return sub_080089AA(r0, r1, r2, r3);
loc_080089B8:
    r1 = *(u32*)(r0 + 0x28);
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080089C4
    r0 = stack[1]; // [sp + 0x4]
    return sub_080089AA(r0, r1, r2, r3);
}

// ROM Address: 0x080089CC..0x080089E8 (28 bytes, Thumb)
u32 sub_080089CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x2C);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    r0 -= 0x40U;
    r0 = *(u32*)(r0 + 0x3C);
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x24);
    r2 = (r1 >> 16);
    if (cmp_lhs != cmp_rhs) return sub_080089E8(r0, r1, r2, r3);
    r0 = r1;
    return r0;
}

// ROM Address: 0x080089E8..0x080089FC (20 bytes, Thumb)
u32 sub_080089E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x24);
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080089F4
    r0 = stack[1]; // [sp + 0x4]
    return sub_080089E4(r0, r1, r2, r3);
}

// ROM Address: 0x080089FC..0x08008A1E (34 bytes, Thumb)
u32 sub_080089FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = sub_080125E0(r0, r1, r2, r3); // 0x08008A02
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r1 = 0x0808E2E0U /* &g_MapEntryTable[0] */; // [0x08008A58]
    if (cmp_lhs <= cmp_rhs) return sub_08008A26(r0, r1, r2, r3);
    r3 = *(u8*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) return sub_08008A1E(r0, r1, r2, r3);
    r3 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) return sub_08008A1E(r0, r1, r2, r3);
    r0 = r1;
    return r0;
}

// ROM Address: 0x08008A1E..0x08008A36 (24 bytes, Thumb)
u32 sub_08008A1E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x38U;
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_08008A0E(r0, r1, r2, r3);
    r3 = 0x0U;
    r2 = 0x3AU;
    r1 = 0x08008A5CU;
    r0 = 0x08008A74U;
    r0 = Irq_WriteMaster1(r0, r1, r2, r3); // 0x08008A2E: BL 0x0803DF14
    r0 = 0x0U;
    return sub_08008A1C(r0, r1, r2, r3);
}

// ROM Address: 0x08008A36..0x08008A58 (34 bytes, Thumb)
u32 sub_08008A36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = (r0 >> 16);
    if (cmp_lhs == cmp_rhs) goto loc_08008A54;
    r0 = 0x0U;
    r1 = *(u32*)(r1 + 0xC);
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08008A4E
    r0 = stack[1]; // [sp + 0x4]
loc_08008A54:
    return r0;
}

// ROM Address: 0x08008AA0..0x08008DE6 (838 bytes, Thumb)
u32 sub_08008AA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r5 = 0x080716A0U; // [0x08008D08]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x10);
    if (cmp_lhs == cmp_rhs) goto loc_08008AB2;
    r0 = sub_08012628(r0, r1, r2, r3); // 0x08008AAC
    goto loc_08008AB6;
loc_08008AB2:
    r0 = sub_08012900(r0, r1, r2, r3); // 0x08008AB2: BL 0x08012900
loc_08008AB6:
    r1 = *(u8*)(r7 + 0x2);
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_080089CC(r0, r1, r2, r3); // 0x08008ABA: BL 0x080089CC
    r1 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_08009670(r0, r1, r2, r3); // 0x08008AC2
    r0 = *(u32*)(r7 + 0x4);
    r4 = *(u8*)(r0 + 0x3);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08008AFC;
loc_08008ACE:
    r0 = *(u32*)(r7 + 0x4);
    r1 = (r4 << 3);
    r0 = *(u32*)(r0 + 0x10);
    r6 = r0 + r1;
    r0 = *(u32*)(r6);
    r0 = sub_08004784(r0, r1, r2, r3); // 0x08008AD8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008AF8;
    r5 = 0x080716A0U; // [0x08008D08]
    r0 = *(u32*)(r6 + 0x4);
    r5 = *(u32*)(r5 + 0x10);
    r1 = *(u32*)(r0);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08008AE8: BL 0x08046AA2
    r1 = *(u32*)(r5);
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r1 = r1 + r5;
    *(u32*)(r5) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
loc_08008AF8:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08008ACE;
loc_08008AFC:
    return r0;
    r6 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08008B2E;
loc_08008B0C:
    r0 = *(u32*)(r6 + 0x4);
    r1 = (r4 << 2);
    r0 = *(u32*)(r0 + 0x18);
    r5 = *(u32*)(r0 + r1);
    r0 = *(u32*)(r5);
    r0 = sub_08004784(r0, r1, r2, r3); // 0x08008B16
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008B24;
    r0 = r5;
    r0 = sub_0800C7E2(r0, r1, r2, r3); // 0x08008B20
loc_08008B24:
    r0 = *(u32*)(r6 + 0x4);
    r4 += 0x1U;
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08008B0C;
loc_08008B2E:
    return r0;
    r6 = 0x7U;
    r4 = r0;
    r6 = (r6 << 25);
    r0 = *(u8*)(r6);
    r5 = stack[64]; // [sp + 0x100]
    lr = r3;
    r12 = r1;
    r3 = 0xC0; // sp + 0xC0
    *(u8*)(r3 + 0x18) = (u8)r0;
    r0 = *(u8*)(r6 + 0x1);
    *(u8*)(r3 + 0x19) = (u8)r0;
    r1 = 0x0U;
    r7 = 0x9CU;
    r0 = 0x1U;
loc_08008B50:
    r2 = (r1 << 5);
    r2 = r2 - r1;
    r2 = (r2 << 1);
    r2 ^= r7;
    r3 = 0xC0; // sp + 0xC0
    *(u8*)(r3 + 0x14) = (u8)r2;
    r2 = 0xE3U;
    r2 *= r1;
    r2 += 0x25U;
    *(u8*)(r3 + 0x15) = (u8)r2;
    r2 = *(u8*)(r3 + 0x14);
    *(u8*)(r6) = (u8)r2;
    r2 = *(u8*)(r3 + 0x15);
    *(u8*)(r6 + 0x1) = (u8)r2;
    r2 = *(u8*)(r6);
    r3 = *(u8*)(r3 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08008B88;
    r2 = *(u8*)(r6 + 0x1);
    r3 = 0xC0; // sp + 0xC0
    r3 = *(u8*)(r3 + 0x15);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08008B88;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_08008B50;
    r1 = 0x03001004U /* &g_SramPresentFlag */; // [0x08008D0C]
    *(u8*)(r1) = (u8)r0;
loc_08008B88:
    r3 = 0xC0; // sp + 0xC0
    r1 = *(u8*)(r3 + 0x18);
    *(u8*)(r6) = (u8)r1;
    r1 = *(u8*)(r3 + 0x19);
    *(u8*)(r6 + 0x1) = (u8)r1;
    r1 = *(u32*)(r4 + 0x4);
    r7 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008B9C;
    r7 = *(u32*)(r1 + 0x34);
loc_08008B9C:
    r1 = r12;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r2 = *(u8*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08008BA8;
    r0 = 0x0U;
loc_08008BA8:
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = r1;
    r1 = lr;
    r0 = sub_080089A0(r0, r1, r2, r3); // 0x08008BAE
    *(u8*)(r4 + 0x2) = (u8)r0;
    r6 = 0x080716A0U; // [0x08008D08]
    r2 = *(u8*)(r4 + 0x1);
    r1 = *(u8*)(r4);
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_08004A88(r0, r1, r2, r3); // 0x08008BBC
    r1 = *(u8*)(r4 + 0x2);
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080089CC(r0, r1, r2, r3); // 0x08008BC4: BL 0x080089CC
    r1 = r0;
    r2 = stack[57]; // [sp + 0xE4]
    r0 = *(u32*)(r6 + 0xC);
    r3 = r5;
    r0 = sub_0800953E(r0, r1, r2, r3); // 0x08008BD0: BL 0x0800953E
    r0 = *(u32*)(r4 + 0x4);
    r5 = 0x0U;
    r0 = *(u8*)(r0 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08008BFE;
loc_08008BDE:
    r0 = *(u32*)(r4 + 0x4);
    r1 = (r5 << 3);
    r0 = *(u32*)(r0 + 0x20);
    r1 = r0 + r1;
    r0 = 0x0U;
    r0 = sub_0800C300(r0, r1, r2, r3); // 0x08008BE8
    r1 = r0;
    r0 = *(u32*)(r6 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008BF0: BL 0x0801191A
    r0 = *(u32*)(r4 + 0x4);
    r5 += 0x1U;
    r0 = *(u8*)(r0 + 0x7);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08008BDE;
loc_08008BFE:
    r0 = *(u32*)(r4 + 0x4);
    r5 = 0x0U;
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08008C2A;
loc_08008C08:
    r0 = *(u32*)(r4 + 0x4);
    r1 = (r5 << 2);
    r0 = *(u32*)(r0 + 0x18);
    r6 = *(u32*)(r0 + r1);
    r0 = *(u32*)(r6);
    r0 = sub_08004784(r0, r1, r2, r3); // 0x08008C12
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008C20;
    r0 = r6;
    r0 = sub_0800C7E2(r0, r1, r2, r3); // 0x08008C1C
loc_08008C20:
    r0 = *(u32*)(r4 + 0x4);
    r5 += 0x1U;
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08008C08;
loc_08008C2A:
    r0 = *(u32*)(r4 + 0x4);
    r5 = 0x0U;
    r0 = *(u8*)(r0 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08008C62;
loc_08008C34:
    r0 = *(u32*)(r4 + 0x4);
    r1 = (r5 << 2);
    r0 = *(u32*)(r0 + 0x1C);
    r6 = *(u32*)(r0 + r1);
    r0 = *(u32*)(r6);
    r0 = sub_08004784(r0, r1, r2, r3); // 0x08008C3E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008C58;
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_0800DD2C(r0, r1, r2, r3); // 0x08008C4A
    r1 = r0;
    r0 = 0x080716A0U; // [0x08008D08]
    r0 = *(u32*)(r0 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008C54: BL 0x0801191A
loc_08008C58:
    r0 = *(u32*)(r4 + 0x4);
    r5 += 0x1U;
    r0 = *(u8*)(r0 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08008C34;
loc_08008C62:
    r1 = 0x1U;
    r0 = r4;
    r0 = sub_08008AA0(r0, r1, r2, r3); // 0x08008C66: BL 0x08008AA0
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080089D8(r0, r1, r2, r3); // 0x08008C6C
    r1 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_08008C80;
    r6 = 0x080716A0U; // [0x08008D08]
    r1 = 0x0U;
    r0 = *(u32*)(r6);
    *(u8*)(r0 + 0x5) = (u8)r1;
    goto loc_08008C9E;
loc_08008C80:
    r6 = 0x080716A0U; // [0x08008D08]
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r2 = 0x083BB78CU; // [0x08008D10]
    r1 = (r1 << 2);
    r0 = *(u32*)(r6);
    r1 = r1 + r2;
    r2 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08008C9A;
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08008C9E;
loc_08008C9A:
    r0 = sub_0803F110(r0, r1, r2, r3); // 0x08008C9A
loc_08008C9E:
    r0 = *(u32*)(r4 + 0x4);
    r5 = 0x0U;
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08008CD8;
loc_08008CA8:
    r0 = *(u32*)(r4 + 0x4);
    r1 = (r5 << 2);
    r0 = *(u32*)(r0 + 0x14);
    r6 = *(u32*)(r0 + r1);
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08004784(r0, r1, r2, r3); // 0x08008CB2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008CCE;
    r1 = r5;
    r0 = r6;
    r2 = *(u32*)(r6);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08008CC0: BL __call_via_r3
    r1 = r0;
    r0 = 0x080716A0U; // [0x08008D08]
    r0 = *(u32*)(r0 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008CCA: BL 0x0801191A
loc_08008CCE:
    r0 = *(u32*)(r4 + 0x4);
    r5 += 0x1U;
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08008CA8;
loc_08008CD8:
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008CEC;
    r1 = 0x0U;
    stack[1] = r1; // [sp + 0x4]
    stack[18] = r1; // [sp + 0x48]
    r2 = 0x0U;
    r1 = r7;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08008CE8
loc_08008CEC:
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008D02;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    stack[18] = r0; // [sp + 0x48]
    r0 = 0x4; // sp + 0x4
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08008CFE
loc_08008D02:
    return r0;
    r0 = r0;
    r0 = ((u32)((s32)r4 >> 26));
    r7 = (r0 >> 32);
    r4 = ((u32)((s32)r0 >> 32));
    r0 = (r0 << 12);
    r3 = (r7 >> 32);
    r4 = r0;
    r0 = (r1 << 24);
    r0 = (r0 >> 24);
    r1 = (r2 << 24);
    r7 = r3;
    r5 = stack[7]; // [sp + 0x1C]
    r6 = stack[6]; // [sp + 0x18]
    *(u8*)(r4) = (u8)r0;
    r1 = (r1 >> 24);
    *(u8*)(r4 + 0x1) = (u8)r1;
    r0 = sub_080089FC(r0, r1, r2, r3); // 0x08008D2A: BL 0x080089FC
    r1 = r0;
    r3 = r6;
    r2 = r7;
    r0 = r4;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08008B30(r0, r1, r2, r3); // 0x08008D38
    r0 = *(u32*)(r4 + 0x10);
    r0 += 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    return r0;
    r5 = r3;
    r3 = 0x0U;
    r4 = r0;
    r0 = (u32)(*(s16*)(r5 + r3));
    r7 = stack[10]; // [sp + 0x28]
    r0 -= 0x70U;
    stack[2] = r0; // [sp + 0x8]
    r6 = stack[11]; // [sp + 0x2C]
    r3 = 0x2U;
    r0 = (u32)(*(s16*)(r5 + r3));
    r0 -= 0x4CU;
    stack[3] = r0; // [sp + 0xC]
    r0 = (r1 << 24);
    r0 = (r0 >> 24);
    r1 = (r2 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r4) = (u8)r0;
    *(u8*)(r4 + 0x1) = (u8)r1;
    r0 = sub_080089FC(r0, r1, r2, r3); // 0x08008D6C: BL 0x080089FC
    r1 = r0;
    r3 = r7;
    r0 = r4;
    stack[0] = r6; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    r0 = sub_08008B30(r0, r1, r2, r3); // 0x08008D7A
    r0 = *(u32*)(r4 + 0x10);
    r7 = 0x080716A0U; // [0x08009018]
    r0 += 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = *(u32*)(r7 + 0x8);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x0800901C]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x08008DA2
    r1 = *(u32*)(r7 + 0xC);
    r1 += 0x80U;
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r1 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08008DE6(r0, r1, r2, r3);
    r2 = r5;
    r1 = r0;
    r0 = 0x0U;
    r0 = sub_080104F2(r0, r1, r2, r3); // 0x08008DB8: BL 0x080104F2
    r5 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08008DC0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008DD4;
    r1 = 0x0804E324U; // [0x08009020]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08008DD4:
    r1 = r0;
    r0 = *(u32*)(r7 + 0x20);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x08008DD8
    r1 = r5;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008DE0: BL 0x0801191A
    return sub_08008E2C(r0, r1, r2, r3);
}

// ROM Address: 0x08008DE6..0x08008E2C (70 bytes, Thumb)
u32 sub_08008DE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r5;
    r1 = r0;
    r3 = 0x1U;
    r0 = 0x0U;
    r0 = sub_080109AA(r0, r1, r2, r3); // 0x08008DEE
    r5 = r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08008DF6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008E04;
    r1 = 0x0804D300U; // [0x08009024]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
loc_08008E04:
    r1 = r0;
    r0 = *(u32*)(r7 + 0x20);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x08008E08
    r1 = r5;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008E10: BL 0x0801191A
    r0 = *(u32*)(r7 + 0x8);
    r0 = *(u8*)(r0 + 0x1);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08008E2C(r0, r1, r2, r3);
    r0 = 0x0U;
    r0 = sub_0800B854(r0, r1, r2, r3); // 0x08008E20
    r1 = r0;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008E28: BL 0x0801191A
    return r0;
}

// ROM Address: 0x08008E2C..0x08008EF4 (200 bytes, Thumb)
u32 sub_08008E2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08008A36(r0, r1, r2, r3); // 0x08008E2E: BL 0x08008A36
    r1 = stack[4]; // [sp + 0x10]
    r6 = r0;
    r0 = *(u32*)(r1 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008E4E;
    r0 = 0x0U;
    r0 = Object_Construct5(r0, r1, r2, r3); // 0x08008E3E: BL 0x0800C0C8
    r1 = r0;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008E46: BL 0x0801191A
    *(u16*)(r4 + 0x8) = (u16)r6;
    goto loc_08008E6A;
loc_08008E4E:
    r0 = *(u16*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) goto loc_08008E6A;
    *(u16*)(r4 + 0x8) = (u16)r6;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008E6A;
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_0800BF34(r0, r1, r2, r3); // 0x08008E5E
    r1 = r0;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008E66: BL 0x0801191A
loc_08008E6A:
    r0 = r5;
    return r0;
    r3 = 0x0U;
    r4 = r0;
    r0 = (u32)(*(s16*)(r1 + r3));
    r7 = stack[15]; // [sp + 0x3C]
    r0 -= 0x70U;
    stack[1] = r0; // [sp + 0x4]
    r3 = 0x2U;
    r0 = (u32)(*(s16*)(r1 + r3));
    r6 = 0x0U;
    r5 = r1;
    r0 -= 0x4CU;
    stack[2] = r0; // [sp + 0x8]
    r1 = 0x5AU;
    *(u8*)(r4) = (u8)r6;
    *(u8*)(r4 + 0x1) = (u8)r1;
    r0 = r6;
    r0 = sub_080089FC(r0, r1, r2, r3); // 0x08008E94: BL 0x080089FC
    r2 = 0x1U;
    stack[0] = r2; // [sp + 0x0]
    r1 = r0;
    r3 = r6;
    r0 = r4;
    r2 = 0x4; // sp + 0x4
    r0 = sub_08008B30(r0, r1, r2, r3); // 0x08008EA4
    r0 = *(u32*)(r4 + 0x10);
    r3 = 0x0; // sp + 0x0
    r0 += 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x31U;
    r0 = ~r0;
    *(u16*)(r3) = (u16)r0;
    *(u16*)(r3 + 0x2) = (u16)r6;
    r0 = *(u16*)(r5);
    r0 -= 0x32U;
    *(u16*)(r3) = (u16)r0;
    r0 = *(u16*)(r5 + 0x2);
    *(u16*)(r3 + 0x2) = (u16)r0;
    r0 = 0x080716A0U; // [0x08009018]
    r0 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08008ECE: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08008EF4(r0, r1, r2, r3);
    r0 = 0x2A8U; // (85 << 3)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08008EDA: BL 0x0803D5B8
    r6 = r0;
    if (cmp_lhs == cmp_rhs) return sub_08008F10(r0, r1, r2, r3);
    r2 = sp;
    r0 = r6;
    r1 = stack[5]; // [sp + 0x14]
    r3 = stack[14]; // [sp + 0x38]
    r0 = sub_08010A3A(r0, r1, r2, r3); // 0x08008EEA: BL 0x08010A3A
    r0 = 0x0804DB18U /* &VTable_0804DB18 */; // [0x08009028]
    *(u32*)(r6) = (u32)r0;
    return sub_08008F10(r0, r1, r2, r3);
}

// ROM Address: 0x08008EF4..0x08008F10 (28 bytes, Thumb)
u32 sub_08008EF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2A8U; // (85 << 3)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08008EF8: BL 0x0803D5B8
    r6 = r0;
    if (cmp_lhs == cmp_rhs) return sub_08008F10(r0, r1, r2, r3);
    r3 = r7;
    r0 = r6;
    r2 = sp;
    r1 = stack[6]; // [sp + 0x18]
    r0 = sub_08010A3A(r0, r1, r2, r3); // 0x08008F08: BL 0x08010A3A
    r0 = 0x0804DD94U /* &VTable_0804DD94 */; // [0x0800902C]
    *(u32*)(r6) = (u32)r0;
    return r0;
}

// ROM Address: 0x08008F10..0x08008F56 (70 bytes, Thumb)
u32 sub_08008F10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x32U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3) = (u16)r0;
    r0 = 0x0U;
    *(u16*)(r3 + 0x2) = (u16)r0;
    r0 = *(u16*)(r5);
    r0 += 0x32U;
    *(u16*)(r3) = (u16)r0;
    r0 = *(u16*)(r5 + 0x2);
    *(u16*)(r3 + 0x2) = (u16)r0;
    r0 = 0x080716A0U; // [0x08009018]
    r0 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08008F30: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08008F56(r0, r1, r2, r3);
    r0 = 0x2A8U; // (85 << 3)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08008F3C: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) return sub_08008F72(r0, r1, r2, r3);
    r3 = r7;
    r0 = r5;
    r2 = sp;
    r1 = stack[6]; // [sp + 0x18]
    r0 = sub_08010A3A(r0, r1, r2, r3); // 0x08008F4C: BL 0x08010A3A
    r0 = 0x0804DD94U /* &VTable_0804DD94 */; // [0x0800902C]
    *(u32*)(r5) = (u32)r0;
    return sub_08008F72(r0, r1, r2, r3);
}

// ROM Address: 0x08008F56..0x08008F8A (52 bytes, Thumb)
u32 sub_08008F56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2A8U; // (85 << 3)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08008F5A: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08008F72;
    r2 = sp;
    r0 = r5;
    r1 = stack[5]; // [sp + 0x14]
    r3 = stack[14]; // [sp + 0x38]
    r0 = sub_08010A3A(r0, r1, r2, r3); // 0x08008F6A: BL 0x08010A3A
    r0 = 0x0804DB18U /* &VTable_0804DB18 */; // [0x08009028]
    *(u32*)(r5) = (u32)r0;
loc_08008F72:
    r7 = 0x080716A0U; // [0x08009018]
    r0 = *(u32*)(r7 + 0x4);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08008F7E: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08008F8A(r0, r1, r2, r3);
    r7 = r6;
    return sub_08008F8C(r0, r1, r2, r3);
}

// ROM Address: 0x08008F8A..0x0800900E (132 bytes, Thumb)
u32 sub_08008F8A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r5;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08008F8E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008F9C;
    r1 = 0x0804D300U; // [0x08009024]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
loc_08008F9C:
    r7 = 0x080716A0U; // [0x08009018]
    r1 = r0;
    r0 = *(u32*)(r7 + 0x20);
    r0 = sub_08021094(r0, r1, r2, r3); // 0x08008FA2
    r1 = r6;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008FAA: BL 0x0801191A
    r1 = r5;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008FB2: BL 0x0801191A
    r0 = *(u32*)(r7 + 0x8);
    r0 = *(u8*)(r0 + 0x1);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08008FCE;
    r0 = 0x0U;
    r0 = sub_0800B854(r0, r1, r2, r3); // 0x08008FC2
    r1 = r0;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008FCA: BL 0x0801191A
loc_08008FCE:
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08008A36(r0, r1, r2, r3); // 0x08008FD0: BL 0x08008A36
    r1 = *(u16*)(r4 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08008FF0;
    *(u16*)(r4 + 0x8) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08008FF0;
    r1 = r0;
    r0 = 0x0U;
    r0 = sub_0800BF34(r0, r1, r2, r3); // 0x08008FE4
    r1 = r0;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08008FEC: BL 0x0801191A
loc_08008FF0:
    r0 = *(u32*)(r7 + 0x4);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08008FFA: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800900E(r0, r1, r2, r3);
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r0) = (u32)r6;
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r0) = (u32)r5;
    return r0;
}

// ROM Address: 0x0800900E..0x08009018 (10 bytes, Thumb)
u32 sub_0800900E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r0) = (u32)r5;
    r0 = stack[13]; // [sp + 0x34]
    *(u32*)(r0) = (u32)r6;
    return sub_0800900A(r0, r1, r2, r3);
}

// ROM Address: 0x08009022..0x080091FC (474 bytes, Thumb)
u32 sub_08009022(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08009028;
    r4 = (r0 >> 32);
loc_08009028:
    if (cmp_lhs < cmp_rhs) goto loc_0800905C;
    r4 = (r0 >> 32);
    if (cmp_lhs <= cmp_rhs) return sub_08008F58(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r7 = 0x104; // sp + 0x104
    r6 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009044;
    r5 = *(u32*)(r0 + 0x34);
loc_08009044:
    r0 = *(u32*)(r4 + 0x10);
    r0 += 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = (r1 << 24);
    r0 = (r0 >> 24);
    r1 = (r2 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r4) = (u8)r0;
    *(u8*)(r4 + 0x1) = (u8)r1;
    r0 = sub_080089FC(r0, r1, r2, r3); // 0x08009056: BL 0x080089FC
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_0800905C:
    r1 = stack[58]; // [sp + 0xE8]
    r0 = sub_080089A0(r0, r1, r2, r3); // 0x0800905E
    r1 = (r0 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r4 + 0x2) = (u8)r1;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080089CC(r0, r1, r2, r3); // 0x0800906A: BL 0x080089CC
    r1 = r0;
    r3 = r7;
    r7 = 0x080716A0U; // [0x080091FC]
    r2 = stack[64]; // [sp + 0x100]
    r0 = *(u32*)(r7 + 0xC);
    r0 = sub_0800953E(r0, r1, r2, r3); // 0x08009078: BL 0x0800953E
    r7 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009090;
    r2 = 0x0U;
    r1 = r5;
    stack[1] = r7; // [sp + 0x4]
    stack[18] = r7; // [sp + 0x48]
    r0 = 0x4; // sp + 0x4
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0800908C
loc_08009090:
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080090A4;
    stack[1] = r7; // [sp + 0x4]
    stack[18] = r7; // [sp + 0x48]
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080090A0
loc_080090A4:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080090E2;
    r0 = *(u32*)(r4 + 0x4);
    r5 = 0x0U;
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080090E2;
    r7 = 0x080716A0U; // [0x080091FC]
loc_080090B4:
    r0 = *(u32*)(r4 + 0x4);
    r1 = (r5 << 2);
    r0 = *(u32*)(r0 + 0x14);
    r6 = *(u32*)(r0 + r1);
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08004784(r0, r1, r2, r3); // 0x080090BE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080090D8;
    r1 = r5;
    r0 = r6;
    r2 = *(u32*)(r6);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080090CC: BL __call_via_r3
    r1 = r0;
    r0 = *(u32*)(r7 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x080090D4: BL 0x0801191A
loc_080090D8:
    r0 = *(u32*)(r4 + 0x4);
    r5 += 0x1U;
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_080090B4;
loc_080090E2:
    return r0;
    r0 = *(u32*)(r0 + 0x4);
    r4 = *(u8*)(r0 + 0x6);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08009106;
    r0 = *(u32*)(r0 + 0x1C);
    r1 = (r1 << 2);
    r1 = *(u32*)(r0 + r1);
    r0 = 0x0U;
    r0 = sub_0800DCDC(r0, r1, r2, r3); // 0x080090F8
    r1 = r0;
    r0 = 0x080716A0U; // [0x080091FC]
    r0 = *(u32*)(r0 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x08009102: BL 0x0801191A
loc_08009106:
    return r0;
    r0 = *(u32*)(r0 + 0x4);
    r2 = (r1 << 2);
    r0 = *(u32*)(r0 + 0x14);
    r0 = *(u32*)(r0 + r2);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009114: BL __call_via_r3
    r1 = r0;
    r0 = 0x080716A0U; // [0x080091FC]
    r0 = *(u32*)(r0 + 0x14);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800911E: BL 0x0801191A
    return r0;
    r0 = *(u32*)(r0 + 0x4);
    r5 = r2;
    r6 = r3;
    r0 = *(u32*)(r0 + 0x14);
    r2 = (r1 << 2);
    r0 = *(u32*)(r0 + r2);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009134: BL __call_via_r3
    r1 = *(u32*)(r0);
    r4 = r0;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08009140: BL 0x08046AA2
    r1 = *(u32*)(r5);
    r0 = 0xFFU;
    r0 += 0xA1U;
    r1 = (r1 << 8);
    *(u32*)(r0 + r4) = r1;
    r1 = *(u32*)(r5 + 0x4);
    r0 += 0x4U;
    r1 = (r1 << 8);
    *(u32*)(r0 + r4) = r1;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x40);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800915E: BL 0x08046AA2
    r0 = 0x080716A0U; // [0x080091FC]
    *(u8*)(r4 + 0x10) = (u8)r6;
    r0 = *(u32*)(r0 + 0x14);
    r1 = r4;
    r0 = List_Append(r0, r1, r2, r3); // 0x0800916A: BL 0x0801191A
    r0 = r4;
    return r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 3);
    r0 = *(u32*)(r0 + 0x10);
    r0 = r0 + r1;
    r1 = 0x080716A0U; // [0x080091FC]
    r0 = *(u32*)(r0 + 0x4);
    r4 = *(u32*)(r1 + 0x10);
    r1 = *(u32*)(r0);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08009184: BL 0x08046AA2
    r1 = *(u32*)(r4);
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r1 = r1 + r4;
    *(u32*)(r4) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0;
    r4 = 0x03001968U; // [0x08009200]
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    r4 = 0x080716A0U; // [0x080091FC]
    r0 = *(u32*)(r4 + 0x20);
    r0 = sub_080210D6(r0, r1, r2, r3); // 0x080091A6
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_080099B6(r0, r1, r2, r3); // 0x080091AC
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_08011DB4(r0, r1, r2, r3); // 0x080091B2
    return r0;
    r1 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080091C6;
    r4 = *(u32*)(r1 + 0x34);
loc_080091C6:
    r5 = 0x03001968U; // [0x08009200]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    if (cmp_lhs == cmp_rhs) goto loc_080091E4;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    stack[18] = r0; // [sp + 0x48]
    r2 = 0x0U;
    r1 = r4;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080091E0
loc_080091E4:
    r4 = 0x080716A0U; // [0x080091FC]
    r0 = *(u32*)(r4 + 0xC);
    r0 = sub_08009A2A(r0, r1, r2, r3); // 0x080091E8
    r0 = *(u32*)(r4 + 0x14);
    r0 = sub_08011E0E(r0, r1, r2, r3); // 0x080091EE
    r0 = *(u32*)(r4 + 0x20);
    r0 = sub_080210F2(r0, r1, r2, r3); // 0x080091F4
    return r0;
}

// ROM Address: 0x080091FC..0x08009204 (8 bytes, Thumb)
u32 sub_080091FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = ((u32)((s32)r4 >> 26));
    r7 = (r0 >> 32);
    r0 = r5 + r5;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08009204..0x08009478 (628 bytes, Thumb)
u32 sub_08009204(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08009214;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800920C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800921E;
loc_08009214:
    r1 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_0800921E:
    return r0;
    r5 = r0;
    r4 = 0x0U;
loc_08009226:
    r6 = (r4 << 2);
    r0 = *(u32*)(r5 + r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800923A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009236: BL __call_via_r3
loc_0800923A:
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08007A40(r0, r1, r2, r3); // 0x0800923E: BL 0x08007A40
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    *(u32*)(r5 + r6) = r0;
    if (cmp_lhs < cmp_rhs) goto loc_08009226;
    return r0;
    r6 = r0;
    r7 = r1;
    r4 = 0x0U;
loc_08009254:
    r5 = (r4 << 2);
    r0 = *(u32*)(r6 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009268;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009264: BL __call_via_r3
loc_08009268:
    r0 = r5 + r7;
    r1 = *(u32*)(r0 + 0x14);
    r0 = r4;
    r2 = *(u32*)(r1);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009270: BL __call_via_r3
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    *(u32*)(r6 + r5) = r0;
    if (cmp_lhs < cmp_rhs) goto loc_08009254;
    return r0;
    r5 = (r1 << 2);
    r4 = r0;
    r0 = *(u32*)(r0 + r5);
    r6 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009298;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009294: BL __call_via_r3
loc_08009298:
    *(u32*)(r4 + r5) = r6;
    return r0;
    r5 = r0;
    r6 = r1;
    r4 = 0x0U;
loc_080092A4:
    r0 = (r4 << 2);
    r0 = *(u32*)(r5 + r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080092B0: BL __call_via_r3
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_080092A4;
    return r0;
    r6 = r0;
    r5 = r1;
    r4 = 0x0U;
loc_080092C4:
    r0 = (r4 << 2);
    r0 = *(u32*)(r6 + r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080092D0: BL __call_via_r3
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_080092C4;
    r0 = *(u32*)(r5 + 0x18);
    r1 = *(u32*)(r5 + 0x1C);
    *(u32*)(r5 + 0x38) = (u32)r0;
    *(u32*)(r5 + 0x3C) = (u32)r1;
    r0 = *(u32*)(r5 + 0x40);
    r0 += 0x1U;
    *(u32*)(r5 + 0x40) = (u32)r0;
    return r0;
    r7 = r1;
    r5 = r2;
    r0 = 0x0U;
    r6 = r3;
    stack[0] = r0; // [sp + 0x0]
    r4 = 0x0U;
loc_080092FA:
    r0 = (r4 << 2);
    r1 = *(u32*)(r6 + r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08009318;
    r1 = stack[1]; // [sp + 0x4]
    r0 = *(u32*)(r1 + r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r3 = r2 + r1;
    r2 = sp;
    r1 = r7;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009310: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800931E;
loc_08009318:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_080092FA;
loc_0800931E:
    r0 = stack[0]; // [sp + 0x0]
    return r0;
    r3 = *(u32*)(r0);
    lr = r1;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08009344;
    r2 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08009344;
    r4 = 0x1U;
    r1 = *(u32*)(r0 + 0x8);
    r4 = (r4 << 11);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08009344;
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_08009348;
loc_08009344:
    r0 = 0x0U;
    return r0;
loc_08009348:
    r3 = ((u32)((s32)r3 >> 3));
    r1 += 0x7U;
    r0 += 0x7U;
    r6 = ((u32)((s32)r0 >> 3));
    r4 = ((u32)((s32)r1 >> 3));
    r2 = ((u32)((s32)r2 >> 3));
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    r12 = r3;
    if (cmp_lhs <= cmp_rhs) goto loc_08009388;
loc_0800935A:
    r0 = (r2 << 5);
    r5 = r0;
    r5 += lr;
    r0 = r12;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r12;
    if (cmp_lhs <= cmp_rhs) goto loc_08009382;
loc_08009366:
    r1 = ((u32)((s32)r0 >> 5));
    r1 = (r1 << 2);
    r3 = *(u32*)(r5 + r1);
    r7 = (r0 << 27);
    r7 = (r7 >> 27);
    r1 = 0x1U;
    r1 <<= (r7 & 0xFF);
    r3 &= r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800937C;
    r0 = 0x0U;
    return r0;
loc_0800937C:
    r0 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08009366;
loc_08009382:
    r2 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800935A;
loc_08009388:
    r0 = 0x1U;
    return r0;
    r5 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080093AE;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x5000000U; // (5 << 24)
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0800939E: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x08009648]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080093AA: BL 0x0804912C
loc_080093AE:
    r6 = r5;
    r6 += 0x80U;
    r4 = *(u32*)(r6 + 0xC);
    r7 = 0x080716C4U; // [0x0800964C]
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08009B80(r0, r1, r2, r3); // 0x080093BA: BL 0x08009B80
    r1 = r4;
    r0 = *(u32*)(r7);
    r0 = sub_0800924C(r0, r1, r2, r3); // 0x080093C2
    r1 = r4;
    r0 = *(u32*)(r7 + 0x4);
    r0 = sub_08009BD4(r0, r1, r2, r3); // 0x080093CA
    r1 = r5;
    r0 = *(u32*)(r7);
    r0 = sub_0800929C(r0, r1, r2, r3); // 0x080093D2
    r0 = *(u32*)(r4 + 0x3C);
    r1 = 0x080716C4U; // [0x0800964C]
    r0 = (r0 << 3);
    r1 += 0x14U;
    r0 = r0 + r1;
    r1 = *(u16*)(r0);
    r2 = *(u32*)(r6 + 0x34);
    r2 = r1 + r2;
    r1 = 0x4000000U; // (1 << 26)
    *(u16*)(r1 + 0x8) = (u16)r2;
    r2 = *(u16*)(r0 + 0x2);
    r3 = *(u32*)(r6 + 0x38);
    r2 = r2 + r3;
    *(u16*)(r1 + 0xA) = (u16)r2;
    r2 = *(u16*)(r0 + 0x4);
    r3 = *(u32*)(r6 + 0x3C);
    r2 = r2 + r3;
    *(u16*)(r1 + 0xC) = (u16)r2;
    r0 = *(u16*)(r0 + 0x6);
    r2 = 0xC0U;
    r2 = *(u32*)(r2 + r5);
    r3 = 0x04000040U /* &REG_WIN0H */; // [0x08009650]
    r0 = r0 + r2;
    *(u16*)(r1 + 0xE) = (u16)r0;
    r0 = r5;
    r0 += 0xA0U;
    r2 = *(u16*)(r0 + 0x4);
    *(u16*)(r3 + 0x10) = (u16)r2;
    r3 = *(u8*)(r0 + 0x1);
    r2 = 0x04000050U /* &REG_BLDCNT */; // [0x08009654]
    *(u8*)(r2 + 0x2) = (u8)r3;
    r3 = *(u8*)(r0);
    *(u8*)(r2 + 0x3) = (u8)r3;
    r0 = *(u16*)(r0 + 0x2);
    *(u16*)(r1) = (u16)r0;
    return r0;
    r7 = 0x080716C4U; // [0x0800964C]
    r4 = r1;
    r0 = *(u32*)(r7 + 0xC);
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x08009428
    r0 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009476;
    r0 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08009478(r0, r1, r2, r3);
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800CE1A(r0, r1, r2, r3); // 0x0800943C
    r6 = r0;
    r1 = r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08009446: BL 0x0801191A
    r0 = *(u32*)(r4 + 0x24);
    r5 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) goto loc_08009476;
loc_08009452:
    r1 = (r5 << 1);
    r1 = r1 + r5;
    r0 = *(u32*)(r4 + 0x28);
    r1 = (r1 << 3);
    r1 = r0 + r1;
    r3 = r5;
    r2 = r6;
    r0 = 0x0U;
    r0 = sub_0800CD78(r0, r1, r2, r3); // 0x08009462
    r1 = r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800946A: BL 0x0801191A
    r0 = *(u32*)(r4 + 0x24);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08009452;
loc_08009476:
    return r0;
}

// ROM Address: 0x08009478..0x080094B8 (64 bytes, Thumb)
u32 sub_08009478(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800D15A(r0, r1, r2, r3); // 0x0800947C
    r5 = r0;
    r1 = r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x08009486: BL 0x0801191A
    r0 = *(u32*)(r4 + 0x24);
    r6 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) return sub_08009476(r0, r1, r2, r3);
loc_08009492:
    r1 = (r6 << 1);
    r1 = r1 + r6;
    r0 = *(u32*)(r4 + 0x28);
    r1 = (r1 << 3);
    r1 = r0 + r1;
    r3 = r6;
    r2 = r5;
    r0 = 0x0U;
    r0 = sub_0800D09E(r0, r1, r2, r3); // 0x080094A2
    r1 = r0;
    r0 = *(u32*)(r7 + 0xC);
    r0 = List_Append(r0, r1, r2, r3); // 0x080094AA: BL 0x0801191A
    r0 = *(u32*)(r4 + 0x24);
    r6 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) goto loc_08009492;
    return sub_08009476(r0, r1, r2, r3);
}

// ROM Address: 0x080094B8..0x0800953A (130 bytes, Thumb)
u32 sub_080094B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    *(u32*)(r0) = (u32)r2;
    r4 = *(u32*)(r1 + 0x4);
    r2 = r1 + 4;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r2);
    r1 = ((u32)((s32)r1 >> 10));
    *(u32*)(r0 + 0x18) = (u32)r1;
    r2 = ((u32)((s32)r2 >> 10));
    *(u32*)(r0 + 0x1C) = (u32)r2;
    r1 += 0xF0U;
    *(u32*)(r0 + 0x20) = (u32)r1;
    r2 += 0xA0U;
    *(u32*)(r0 + 0x24) = (u32)r2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r0 + 0x30);
    r1 = r1 + r2;
    r1 = ((u32)((s32)r1 >> 10));
    *(u32*)(r0 + 0x28) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0 + 0x34);
    r1 = r1 + r2;
    r1 = ((u32)((s32)r1 >> 10));
    *(u32*)(r0 + 0x2C) = (u32)r1;
    return r0; // BX lr
    r6 = r1;
    r4 = *(u32*)r1; r1 += 4;
    r5 = *(u32*)r1; r1 += 4;
    r1 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08009500;
    r4 = r1;
loc_08009500:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08009506;
    r5 = r1;
loc_08009506:
    r2 = r0;
    r2 += 0x80U;
    r1 = *(u16*)(r2 + 0x1C);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08009512;
    r4 = r1;
loc_08009512:
    r1 = *(u16*)(r2 + 0x1E);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0800951A;
    r5 = r1;
loc_0800951A:
    r2 = (r4 << 10);
    stack[0] = r2; // [sp + 0x0]
    r2 = (r5 << 10);
    stack[1] = r2; // [sp + 0x4]
    r1 = sp;
    r0 = sub_080094B8(r0, r1, r2, r3); // 0x08009524: BL 0x080094B8
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0800953A(r0, r1, r2, r3);
    r0 = *(u32*)(r6 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0800953A(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800953A..0x0800953E (4 bytes, Thumb)
u32 sub_0800953A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08009536(r0, r1, r2, r3);
}

// ROM Address: 0x0800953E..0x08009648 (266 bytes, Thumb)
u32 sub_0800953E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r4 = r0;
    *(u32*)(r0 + 0x40) = (u32)r1;
    r4 += 0x80U;
    r6 = r0;
    r0 += 0x30U;
    *(u32*)(r4 + 0xC) = (u32)r5;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r5 + 0x3C);
    r7 = 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = *(u32*)(r4 + 0x28);
    r7 = (r7 << 13);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800956E;
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08009568: BL 0x0803D5B8
    *(u32*)(r4 + 0x28) = (u32)r0;
loc_0800956E:
    r0 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800957C;
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08009576: BL 0x0803D5B8
    *(u32*)(r4 + 0x2C) = (u32)r0;
loc_0800957C:
    r0 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800958A;
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08009584: BL 0x0803D5B8
    *(u32*)(r4 + 0x30) = (u32)r0;
loc_0800958A:
    r0 = *(u16*)(r5 + 0x8);
    r1 = r5;
    r0 -= 0x1U;
    *(u16*)(r4 + 0x1C) = (u16)r0;
    r0 = *(u16*)(r5 + 0xA);
    r0 -= 0x1U;
    *(u16*)(r4 + 0x1E) = (u16)r0;
    r0 = *(u16*)(r5 + 0x8);
    r0 += 0xEFU;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u16*)(r5 + 0xA);
    r0 += 0x9FU;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r6;
    r0 = sub_08009420(r0, r1, r2, r3); // 0x080095A6
    r1 = *(u32*)(r4 + 0x28);
    r0 = *(u32*)(r5 + 0x34);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080095AE
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r5 + 0x38);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080095B6
    r0 = *(u32*)(r4 + 0x30);
    r1 = *(u32*)(r4 + 0x28);
    r2 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080095C0: BL 0x08049138
    r0 = 0x080716C4U; // [0x0800964C]
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_080210B6(r0, r1, r2, r3); // 0x080095C8
    r7 = r6;
    r0 = *(u32*)(r5 + 0x3C);
    r7 += 0xA0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009608;
    r1 = stack[5]; // [sp + 0x14]
    r0 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    r0 += 0x70U;
    r0 = (r0 << 10);
    stack[1] = r0; // [sp + 0x4]
    r1 += 0x4CU;
    r1 = (r1 << 10);
    r0 = 0x7C00U; // (31 << 10)
    stack[2] = r1; // [sp + 0x8]
    *(u32*)(r6 + 0x10) = (u32)r0;
    r0 = 0xF000U; // (15 << 12)
    *(u32*)(r6 + 0x8) = (u32)r0;
    r0 = stack[1]; // [sp + 0x4]
    *(u32*)(r6) = (u32)r0;
    r1 = stack[2]; // [sp + 0x8]
    r0 = r6;
    *(u32*)(r6 + 0x4) = (u32)r1;
    r0 = sub_0802ED98(r0, r1, r2, r3); // 0x080095FE: BL 0x0802ED98
    r0 = 0x00001741U; // [0x08009658]
    *(u16*)(r7 + 0x2) = (u16)r0;
    goto loc_0800961E;
loc_08009608:
    r0 = r6;
    r1 = stack[5]; // [sp + 0x14]
    r0 = sub_080094F0(r0, r1, r2, r3); // 0x0800960C
    r0 = *(u32*)(r6 + 0x18);
    r1 = *(u32*)(r6 + 0x1C);
    *(u32*)(r6 + 0x38) = (u32)r0;
    r0 = 0x1F40U; // (125 << 6)
    *(u32*)(r6 + 0x3C) = (u32)r1;
    *(u16*)(r7 + 0x2) = (u16)r0;
loc_0800961E:
    r0 = *(u8*)(r5 + 0x4);
    r1 = 0xC0U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = *(u8*)(r5 + 0x5);
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = *(u8*)(r5 + 0x6);
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = *(u8*)(r5 + 0x7);
    *(u32*)(r1 + r6) = r0;
    r0 = *(u16*)(r5);
    *(u16*)(r7 + 0x4) = (u16)r0;
    r0 = *(u8*)(r5 + 0x2);
    *(u8*)(r7 + 0x1) = (u8)r0;
    r0 = *(u8*)(r5 + 0x3);
    *(u8*)(r7) = (u8)r0;
    r1 = stack[6]; // [sp + 0x18]
    r0 = r6;
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x08009640
    return r0;
}

// ROM Address: 0x08009648..0x0800964A (2 bytes, Thumb)
u32 sub_08009648(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 8);
    return r0;
}

// ROM Address: 0x0800964A..0x08009700 (182 bytes, Thumb)
u32 sub_0800964A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 20);
    r4 = ((u32)((s32)r0 >> 27));
    r7 = (r0 >> 32);
    r0 = (r0 << 1);
    r0 = (r0 << 16);
    r0 = (r2 << 1);
    r0 = (r0 << 16);
    r1 = ((u32)((s32)r0 >> 29));
    r0 = r0;
    r4 = 0x080716C4U; // [0x080098F8]
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = sub_080092BC(r0, r1, r2, r3); // 0x08009664
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08009CC2(r0, r1, r2, r3); // 0x0800966A
    return r0;
    r1 += 0x40U;
    r0 = 0x080716C4U; // [0x080098F8]
    r1 = *(u32*)r1; r1 += 4;
    r2 = *(u32*)r1; r1 += 4;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08012664(r0, r1, r2, r3); // 0x0800967A
    return r0;
    r1 = 0x0U;
    r0 += 0x80U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r0 = 0x080716C4U; // [0x080098F8]
    r0 = *(u32*)(r0);
    r0 = sub_08009220(r0, r1, r2, r3); // 0x0800968C
    return r0;
    r2 = r0;
    r2 += 0xA0U;
    r3 = r1;
    r1 = 0xFFU;
    r1 += 0x1U;
    r0 = *(u16*)(r2 + 0x2);
    r1 <<= (r3 & 0xFF);
    r0 &= ~r1;
    r1 = 0x4000000U; // (1 << 26)
    *(u16*)(r2 + 0x2) = (u16)r0;
    *(u16*)(r1) = (u16)r0;
    return r0; // BX lr
    r0 += 0xA0U;
    r3 = 0xFFU;
    r3 += 0x1U;
    r2 = *(u16*)(r0 + 0x2);
    r3 <<= (r1 & 0xFF);
    r2 |= r3;
    r1 = r2;
    *(u16*)(r0 + 0x2) = (u16)r1;
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0) = (u16)r1;
    return r0; // BX lr
    r3 = (r1 << 2);
    r3 = r3 + r0;
    r3 += 0x80U;
    *(u32*)(r3 + 0x34) = (u32)r2;
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0xC);
    r3 = 0x080716C4U; // [0x080098F8]
    r0 = *(u32*)(r0 + 0x3C);
    r3 += 0x14U;
    r0 = (r0 << 3);
    r0 = r0 + r3;
    r1 = (r1 << 1);
    r0 = *(u16*)(r0 + r1);
    r0 = r0 + r2;
    r2 = 0x4000000U; // (1 << 26)
    r1 = r1 + r2;
    *(u16*)(r1 + 0x8) = (u16)r0;
    return r0; // BX lr
    r3 = 0x1U;
    r0 += 0xA0U;
    r3 <<= (r1 & 0xFF);
    r4 = (r2 << 31);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    r5 = *(u16*)(r0 + 0x4);
    if (cmp_lhs >= cmp_rhs) return sub_08009700(r0, r1, r2, r3);
    r3 |= r5;
    *(u16*)(r0 + 0x4) = (u16)r3;
    return sub_08009704(r0, r1, r2, r3);
}

// ROM Address: 0x08009700..0x08009704 (4 bytes, Thumb)
u32 sub_08009700(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 &= ~r3;
    *(u16*)(r0 + 0x4) = (u16)r5;
    return r0;
}

// ROM Address: 0x08009704..0x080097A2 (158 bytes, Thumb)
u32 sub_08009704(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r1;
    r1 = 0xFFU;
    r1 += 0x1U;
    r1 <<= (r3 & 0xFF);
    r2 = (r2 << 30);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r2 = *(u16*)(r0 + 0x4);
    if (cmp_lhs >= cmp_rhs) goto loc_0800971A;
    r1 |= r2;
    *(u16*)(r0 + 0x4) = (u16)r1;
    goto loc_0800971E;
loc_0800971A:
    r2 &= ~r1;
    *(u16*)(r0 + 0x4) = (u16)r2;
loc_0800971E:
    r0 = *(u16*)(r0 + 0x4);
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x080098FC]
    *(u16*)(r1 + 0x10) = (u16)r0;
    return r0; // BX lr
    r3 = 0x290U; // (41 << 4)
    r1 *= r3;
    r1 = ((u32)((s32)r1 >> 12));
    r0 += 0xA0U;
    r2 *= r3;
    r2 = ((u32)((s32)r2 >> 12));
    *(u8*)(r0 + 0x1) = (u8)r1;
    *(u8*)(r0) = (u8)r2;
    r2 = 0x04000050U /* &REG_BLDCNT */; // [0x08009900]
    *(u8*)(r2 + 0x2) = (u8)r1;
    r0 = *(u8*)(r0);
    *(u8*)(r2 + 0x3) = (u8)r0;
    return r0; // BX lr
    r2 = *(u32*)(r1);
    r4 = r1;
    r1 = *(u32*)(r1 + 0x4);
    stack[1] = r1; // [sp + 0x4]
    r1 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0800975C;
    stack[0] = r2; // [sp + 0x0]
loc_0800975C:
    r1 = stack[1]; // [sp + 0x4]
    r5 = sp;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08009766;
    stack[1] = r2; // [sp + 0x4]
loc_08009766:
    r1 = stack[0]; // [sp + 0x0]
    r2 = r0;
    r2 += 0x80U;
    r3 = ((u32)((s32)r1 >> 10));
    r1 = *(u16*)(r2 + 0x1C);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08009778;
    r1 = (r1 << 10);
    stack[0] = r1; // [sp + 0x0]
loc_08009778:
    r1 = stack[1]; // [sp + 0x4]
    r2 = *(u16*)(r2 + 0x1E);
    r1 = ((u32)((s32)r1 >> 10));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08009786;
    r1 = (r2 << 10);
    stack[1] = r1; // [sp + 0x4]
loc_08009786:
    r1 = r5;
    r0 = sub_080094B8(r0, r1, r2, r3); // 0x08009788: BL 0x080094B8
    r0 = stack[0]; // [sp + 0x0]
    r1 = *(u32*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_080097A2(r0, r1, r2, r3);
    r1 = stack[1]; // [sp + 0x4]
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_080097A2(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080097A2..0x080097A6 (4 bytes, Thumb)
u32 sub_080097A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800979E(r0, r1, r2, r3);
}

// ROM Address: 0x080097A6..0x08009856 (176 bytes, Thumb)
u32 sub_080097A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)r1; r1 += 4;
    *(u32*)(r0 + 0x30) = (u32)r3;
    r1 = *(u32*)(r1);
    *(u32*)(r0 + 0x34) = (u32)r1;
    r1 = *(u32*)(r0);
    r1 = r1 + r3;
    r1 = ((u32)((s32)r1 >> 10));
    *(u32*)(r0 + 0x28) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0 + 0x34);
    r1 = r1 + r2;
    r1 = ((u32)((s32)r1 >> 10));
    *(u32*)(r0 + 0x2C) = (u32)r1;
    return r0; // BX lr
    r3 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    stack[0] = r3; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u8*)(r2);
    r2 = *(u8*)(r2 + 0x1);
    r1 = r3 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[1]; // [sp + 0x4]
    r1 = r1 + r2;
    stack[3] = r1; // [sp + 0xC]
    r0 += 0x80U;
    r1 = *(u32*)(r0 + 0x28);
    r0 = sp;
    r0 = sub_08009324(r0, r1, r2, r3); // 0x080097E2
    return r0;
    r3 = *(u32*)r1; r1 += 4;
    r3 = ((u32)((s32)r3 >> 8));
    stack[0] = r3; // [sp + 0x0]
    r1 = *(u32*)(r1);
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u8*)(r2);
    r2 = *(u8*)(r2 + 0x1);
    r1 = r3 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[1]; // [sp + 0x4]
    r1 = r1 + r2;
    stack[3] = r1; // [sp + 0xC]
    r0 += 0x80U;
    r1 = *(u32*)(r0 + 0x28);
    r0 = sp;
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0800980E
    return r0;
    r6 = r2;
    r2 = *(u32*)(r2);
    r0 = *(u32*)(r6 + 0x4);
    stack[6] = r0; // [sp + 0x18]
    r0 = r2;
    stack[5] = r2; // [sp + 0x14]
    r2 = *(u32*)(r3);
    r5 = r3;
    r0 = r0 + r2;
    r2 = stack[6]; // [sp + 0x18]
    r3 = *(u32*)(r5 + 0x4);
    stack[3] = r0; // [sp + 0xC]
    r2 = r2 + r3;
    stack[7] = r0; // [sp + 0x1C]
    r7 = r1;
    r7 += 0x80U;
    stack[4] = r2; // [sp + 0x10]
    stack[8] = r2; // [sp + 0x20]
    r1 = *(u32*)(r7 + 0x28);
    r0 = 0x14; // sp + 0x14
    r4 = 0x14; // sp + 0x14
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08009844
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08009856(r0, r1, r2, r3);
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    return r0;
}

// ROM Address: 0x08009856..0x080098F8 (162 bytes, Thumb)
u32 sub_08009856(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r6);
    r2 = (r0 >> 3);
    r2 = (r2 << 3);
    stack[3] = r2; // [sp + 0xC]
    r0 = *(u32*)(r6 + 0x4);
    r0 = (r0 >> 3);
    r0 = (r0 << 3);
    stack[4] = r0; // [sp + 0x10]
    r6 = 0x0U;
loc_08009868:
    r4 = r6;
    r6 += 0x1U;
    r0 = r4;
    r0 = sub_0803FAF6(r0, r1, r2, r3); // 0x0800986E: BL 0x0803FAF6
    r1 = (r0 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08009898;
    r3 = r0;
    r3 *= r0;
    r1 = r3 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs < cmp_rhs) goto loc_0800988C;
    r0 += 0x1U;
    r1 = ((u32)((s32)r0 >> 1));
    r0 = r4 - r3;
    r2 = r0 - r1;
    r2 += 0x1U;
    goto loc_080098B8;
loc_0800988C:
    r1 = r0 + 1;
    r2 = ((u32)((s32)r1 >> 1));
    r1 = r2 - r4;
    r1 = r1 + r3;
    r1 = r1 + r0;
    goto loc_080098B8;
loc_08009898:
    r3 = r0;
    r3 *= r0;
    r1 = r3 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs < cmp_rhs) goto loc_080098AE;
    r1 = (u32)(-(s32)r0);
    r1 = ((u32)((s32)r1 >> 1));
    r2 = r1 - r4;
    r2 = r2 + r3;
    r2 = r2 + r0;
    goto loc_080098B8;
loc_080098AE:
    r1 = (u32)(-(s32)r0);
    r2 = ((u32)((s32)r1 >> 1));
    r1 = r4 - r3;
    r0 = r1 - r0;
    r1 = r0 + r2;
loc_080098B8:
    r0 = (r1 << 3);
    r1 = (r2 << 3);
    r2 = stack[3]; // [sp + 0xC]
    stack[1] = r0; // [sp + 0x4]
    r2 = r2 + r0;
    r0 = stack[4]; // [sp + 0x10]
    stack[2] = r1; // [sp + 0x8]
    r0 = r0 + r1;
    stack[2] = r0; // [sp + 0x8]
    stack[6] = r0; // [sp + 0x18]
    stack[1] = r2; // [sp + 0x4]
    stack[5] = r2; // [sp + 0x14]
    r1 = *(u32*)(r5);
    r0 = r2 + r1;
    r1 = stack[6]; // [sp + 0x18]
    r2 = *(u32*)(r5 + 0x4);
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 + r2;
    stack[7] = r0; // [sp + 0x1C]
    stack[2] = r1; // [sp + 0x8]
    stack[8] = r1; // [sp + 0x20]
    r1 = *(u32*)(r7 + 0x28);
    r0 = 0x14; // sp + 0x14
    r0 = sub_08009324(r0, r1, r2, r3); // 0x080098E6
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009868;
    r4 = 0x14; // sp + 0x14
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    return sub_08009852(r0, r1, r2, r3);
}

// ROM Address: 0x08009904..0x08009AD8 (468 bytes, Thumb)
u32 sub_08009904(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)r1; r1 += 4;
    r3 = ((u32)((s32)r3 >> 8));
    stack[0] = r3; // [sp + 0x0]
    r1 = *(u32*)(r1);
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u8*)(r2);
    r2 = *(u8*)(r2 + 0x1);
    r1 = r3 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[1]; // [sp + 0x4]
    r1 = r1 + r2;
    stack[3] = r1; // [sp + 0xC]
    r0 += 0x80U;
    r1 = *(u32*)(r0 + 0x30);
    r0 = sp;
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08009928
    return r0;
    r3 = *(u32*)(r0);
    r4 = 0x0U;
    r1 = r4;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0800993E;
    r1 = ((u32)((s32)r3 >> 3));
loc_0800993E:
    lr = r1;
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08009948;
    r4 = ((u32)((s32)r1 >> 3));
loc_08009948:
    r1 = 0xFFU;
    r1 += 0x1U;
    r5 = *(u32*)(r0 + 0x8);
    r6 = r1;
    r3 = (r1 << 3);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0800995A;
    r5 += 0x7U;
    r6 = ((u32)((s32)r5 >> 3));
loc_0800995A:
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08009964;
    r0 += 0x7U;
    r1 = ((u32)((s32)r0 >> 3));
loc_08009964:
    r12 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_080099A0;
loc_0800996A:
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r4 << 5);
    r7 = r0 + r1;
    r0 = lr;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)lr;
    if (cmp_lhs <= cmp_rhs) goto loc_0800999A;
loc_08009976:
    r5 = (r0 << 27);
    r5 = (r5 >> 27);
    r1 = ((u32)((s32)r0 >> 5));
    r3 = 0x1U;
    r1 = (r1 << 2);
    r1 = r1 + r7;
    r3 <<= (r5 & 0xFF);
    r5 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009990;
    r3 |= r5;
    *(u32*)(r1) = (u32)r3;
    goto loc_08009994;
loc_08009990:
    r5 &= ~r3;
    *(u32*)(r1) = (u32)r5;
loc_08009994:
    r0 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08009976;
loc_0800999A:
    r4 += 0x1U;
    cmp_lhs = (s32)r12; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0800996A;
loc_080099A0:
    return r0;
    r3 = r0;
    r0 = 0x080716C4U; // [0x08009AD8]
    r2 = ((u32)((s32)r2 >> 4));
    r3 += 0xB4U;
    r0 = *(u32*)(r0);
    r0 = sub_080092EA(r0, r1, r2, r3); // 0x080099B0
    return r0;
    r6 = r0;
    r0 = 0xC4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080099BE: BL 0x0803D5B8
    r5 = r6;
    r5 += 0x80U;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08009A00;
    r2 = 0x5CU;
    r1 = r6;
    r0 = r4;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x080099D2: BL 0x08046DD0
    r2 = 0x08050771U; // [0x08009ADC]
    r1 = r6;
    r1 += 0x5CU;
    r0 = r4;
    stack[0] = r2; // [sp + 0x0]
    r2 = r1;
    r0 += 0x5CU;
    r3 = 0xCU;
    r2 += 0x30U;
    r0 = sub_08047018(r0, r1, r2, r3); // 0x080099E8
    r0 = *(u32*)(r5 + 0xC);
    r1 = 0x8CU;
    *(u32*)(r1 + r4) = r0;
    r1 = r6;
    r1 += 0x90U;
    r0 = r4;
    r2 = 0x34U;
    r0 += 0x90U;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x080099FC: BL 0x08046DD0
loc_08009A00:
    r0 = 0x030019A0U; // [0x08009AE0]
    *(u32*)(r0) = (u32)r4;
    r0 = 0x2000U; // (1 << 13)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08009A08: BL 0x0803D5B8
    *(u32*)(r5 + 0x28) = (u32)r0;
    r0 = 0x2000U; // (1 << 13)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08009A12: BL 0x0803D5B8
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = 0x2000U; // (1 << 13)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08009A1C: BL 0x0803D5B8
    *(u32*)(r5 + 0x30) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r5 + 0x10) = (u32)r0;
    return r0;
    r6 = r0;
    r4 = r0;
    r6 += 0x80U;
    r0 = *(u32*)(r6 + 0x28);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08009A34: BL 0x0803D63C
    r0 = *(u32*)(r6 + 0x2C);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08009A3A: BL 0x0803D63C
    r0 = *(u32*)(r6 + 0x30);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08009A40: BL 0x0803D63C
    r0 = 0x030019A0U; // [0x08009AE0]
    r7 = r4;
    r5 = *(u32*)(r0);
    r7 += 0x18U;
    r0 = *(u32*)(r5);
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5 + 0x4);
    r0 = r5;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = *(u32*)(r5 + 0x8);
    r0 += 0x18U;
    *(u32*)(r4 + 0x8) = (u32)r1;
    r1 = *(u32*)(r5 + 0xC);
    *(u32*)(r4 + 0xC) = (u32)r1;
    r1 = *(u32*)(r5 + 0x10);
    *(u32*)(r4 + 0x10) = (u32)r1;
    r1 = *(u32*)(r5 + 0x14);
    *(u32*)(r4 + 0x14) = (u32)r1;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r2 = *(u32*)(r5 + 0x30);
    r0 = r4;
    *(u32*)(r4 + 0x30) = (u32)r2;
    r1 = *(u32*)(r5 + 0x34);
    r0 += 0x38U;
    *(u32*)(r4 + 0x34) = (u32)r1;
    r1 = r5;
    r1 += 0x38U;
    r1 = *(u32*)r1; r1 += 4;
    r2 = *(u32*)r1; r1 += 4;
    r3 = *(u32*)r1; r1 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    r2 = 0x080502A1U; // [0x08009AE4]
    r1 = r5;
    r1 += 0x44U;
    stack[0] = r2; // [sp + 0x0]
    r2 = r1;
    r3 = 0x8U;
    r2 += 0x18U;
    r0 = sub_08047018(r0, r1, r2, r3); // 0x08009A92
    r2 = 0x080502ADU; // [0x08009AE8]
    r1 = r5;
    r1 += 0x5CU;
    r0 = r4;
    stack[0] = r2; // [sp + 0x0]
    r2 = r1;
    r0 += 0x5CU;
    r3 = 0xCU;
    r2 += 0x30U;
    r0 = sub_08047018(r0, r1, r2, r3); // 0x08009AA8
    r0 = 0x8CU;
    r0 = *(u32*)(r0 + r5);
    r1 = r5;
    *(u32*)(r6 + 0xC) = (u32)r0;
    r0 = r4;
    r1 += 0x90U;
    r2 = 0x34U;
    r0 += 0x90U;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x08009ABC: BL 0x08046DD0
    r0 = 0x030019A0U; // [0x08009AE0]
    r0 = *(u32*)(r0);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08009AC4: BL 0x0803D63C
    r1 = 0x030019A0U; // [0x08009AE0]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800938C(r0, r1, r2, r3); // 0x08009AD2
    return r0;
}

// ROM Address: 0x08009AD8..0x08009ADA (2 bytes, Thumb)
u32 sub_08009AD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = ((u32)((s32)r0 >> 27));
    return r0;
}

// ROM Address: 0x08009ADA..0x08009B4C (114 bytes, Thumb)
u32 sub_08009ADA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r0 >> 32);
    r1 = (r6 << 29);
    r5 = (r0 >> 32);
    r0 = r4 + r6;
    r0 = (r0 << 12);
    r1 = (r4 << 10);
    r5 = (r0 >> 32);
    r5 = (r5 << 10);
    r5 = (r0 >> 32);
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x08009D18]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r1 + 0xC);
    r2 = *(u32*)(r1 + 0x8);
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r2;
    r0 = *(u32*)(r1 + 0x4);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08009AFE: BL 0x08046AA0
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = r4;
    return r0;
    r3 = 0x0U;
    *(u16*)(r0) = (u16)r3;
    *(u16*)(r0 + 0x2) = (u16)r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r3 = 0xFFFFEFFCU; // [0x08009D1C]
    r4 = r0;
    sp += r3;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0 + 0x4);
    r5 = 0x4; // sp + 0x4
    r1 = (r1 << 2);
    r0 = r0 + r1;
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x4U;
    r0 = r5;
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x08009B2C: BL 0x08049120
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u8*)(r0 + 0x1);
    r0 = *(u16*)(r0 + 0x2);
    r2 = (r1 << 6);
    r1 = 0x6000000U; // (3 << 25)
    r0 = (r0 << 6);
    r0 = r0 + r1;
    r1 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08009B42: BL 0x08049138
    r3 = 0x00001004U; // [0x08009D20]
    sp += r3;
    return r0;
}

// ROM Address: 0x08009B4C..0x08009B80 (52 bytes, Thumb)
u32 sub_08009B4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u16*)(r0 + 0x2);
    r1 -= 0x1U;
    r1 = (r1 << 16);
    r1 = ((u32)((s32)r1 >> 16));
    *(u16*)(r0 + 0x2) = (u16)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08009B7E;
    r1 = *(u16*)(r0);
    r1 += 0x1U;
    r2 = (r1 << 16);
    r2 = ((u32)((s32)r2 >> 16));
    *(u16*)(r0) = (u16)r2;
    r1 = *(u32*)(r0 + 0x4);
    r3 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_08009B6E;
    r2 = 0x0U;
    *(u16*)(r0) = (u16)r2;
loc_08009B6E:
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r0 + r3));
    r2 = (r2 << 2);
    r1 = r1 + r2;
    r1 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r1);
    *(u16*)(r0 + 0x2) = (u16)r1;
    return sub_08009B12(r0, r1, r2, r3);
loc_08009B7E:
    return r0; // BX lr
}

// ROM Address: 0x08009B80..0x08009D6C (492 bytes, Thumb)
u32 sub_08009B80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1 + 0x48);
    r6 = 0x0U;
    r2 = *(u32*)(r2 + 0x4);
    r4 = 0x0U;
    r3 = (r2 >> 31);
    r2 = r3 + r2;
    r2 = ((u32)((s32)r2 >> 1));
    *(u16*)(r0) = (u16)r2;
    *(u32*)(r0 + 0x4) = (u32)r6;
    r2 = *(u32*)(r1 + 0xC);
    r3 = 0x380U; // (7 << 7)
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08009BCA;
    r7 = r0 + 4;
loc_08009BA0:
    r2 = *(u32*)(r7);
    r6 = (r4 << 2);
    r5 = r2 + 1;
    *(u32*)(r7) = (u32)r5;
    r5 = *(u32*)(r1 + 0x10);
    r2 = (r2 << 3);
    r2 = r2 + r7;
    r5 = *(u32*)(r5 + r6);
    r6 = 0x0U;
    r2 += 0x4U;
    *(u16*)(r2) = (u16)r6;
    r4 += 0x1U;
    *(u16*)(r2 + 0x2) = (u16)r4;
    *(u32*)(r2 + 0x4) = (u32)r5;
    r2 = *(u16*)(r5 + 0x2);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08009BC4;
    r3 = r2;
loc_08009BC4:
    r2 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08009BA0;
loc_08009BCA:
    r1 = *(u16*)(r0);
    r1 = r3 - r1;
    *(u16*)(r0 + 0x2) = (u16)r1;
    return r0; // BX lr
    r3 = 0x700U; // (7 << 8)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x8);
    r0 = *(u32*)(r1 + 0x48);
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r0 >> 31);
    r0 = r1 + r0;
    r1 = *(u32*)(r3 + 0x8);
    r7 = ((u32)((s32)r0 >> 1));
    r0 = *(u32*)(r1 + 0x48);
    r1 = 0x4; // sp + 0x4
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08009BF6
    r0 = 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) goto loc_08009C18;
    r4 = 0x4; // sp + 0x4
loc_08009C02:
    r1 = (r0 << 1);
    r3 = r1 + r4;
    r3 -= 0x20U;
    r3 = *(u16*)(r3 + 0x1E);
    r2 = *(u16*)(r4 + r1);
    r0 += 0x1U;
    r2 = r2 + r3;
    r2 += 0x1U;
    *(u16*)(r4 + r1) = (u16)r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08009C02;
loc_08009C18:
    r0 = 0x4000U; // (1 << 14)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08009C1C: BL 0x0803D5B8
    r6 = 0x6000000U; // (3 << 25)
    r4 = 0x0U;
    r5 = 0x0U;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    stack[0] = r0; // [sp + 0x0]
    if (cmp_lhs <= cmp_rhs) goto loc_08009C84;
loc_08009C2E:
    r0 = (r4 << 1);
    r1 = 0x4; // sp + 0x4
    r0 = *(u16*)(r1 + r0);
    r0 = (r0 >> 8);
    goto loc_08009C3A;
loc_08009C38:
    r5 += 0x1U;
loc_08009C3A:
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08009C4A;
    r1 = (r5 << 1);
    r2 = 0x4; // sp + 0x4
    r1 = *(u16*)(r2 + r1);
    r1 = (r1 >> 8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08009C38;
loc_08009C4A:
    r3 = 0x700U; // (7 << 8)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x8);
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + 0x4C);
    r0 = *(u32*)(r1 + r0);
    r1 = stack[0]; // [sp + 0x0]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08009C5A
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_08009C80;
loc_08009C62:
    r0 = (r4 << 1);
    r1 = 0x4; // sp + 0x4
    r0 = *(u16*)(r1 + r0);
    r1 = stack[0]; // [sp + 0x0]
    r2 = 0x40U;
    r0 = (r0 << 24);
    r0 = (r0 >> 18);
    r1 = r0 + r1;
    r0 = r6;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08009C74: BL 0x08049138
    r6 += 0x40U;
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_08009C62;
loc_08009C80:
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_08009C2E;
loc_08009C84:
    r0 = stack[0]; // [sp + 0x0]
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08009C86: BL 0x0803D63C
    r3 = 0x700U; // (7 << 8)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x4);
    r4 = 0x0U;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08009CB8;
    r5 = *(u32*)(r3 + 0x4);
    r5 += 0x4U;
loc_08009C9E:
    r0 = (r4 << 3);
    r0 = r0 + r5;
    r0 += 0x4U;
    r0 = sub_08009B12(r0, r1, r2, r3); // 0x08009CA4
    r3 = 0x700U; // (7 << 8)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x4);
    r4 += 0x1U;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08009C9E;
loc_08009CB8:
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08009D14;
    r6 = r5 + 4;
    r7 = 0x0U;
loc_08009CD2:
    r0 = (r4 << 3);
    r0 = r0 + r6;
    r0 += 0x4U;
    r1 = *(u16*)(r0 + 0x2);
    r1 -= 0x1U;
    r1 = (r1 << 16);
    r1 = ((u32)((s32)r1 >> 16));
    *(u16*)(r0 + 0x2) = (u16)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08009D0C;
    r1 = *(u16*)(r0);
    r1 += 0x1U;
    r1 = (r1 << 16);
    r1 = ((u32)((s32)r1 >> 16));
    *(u16*)(r0) = (u16)r1;
    r2 = *(u32*)(r0 + 0x4);
    r2 = *(u8*)(r2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_08009CF8;
    *(u16*)(r0) = (u16)r7;
loc_08009CF8:
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r0 + r3));
    r1 = *(u32*)(r0 + 0x4);
    r2 = (r2 << 2);
    r1 = r1 + r2;
    r1 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r1);
    *(u16*)(r0 + 0x2) = (u16)r1;
    r0 = sub_08009B12(r0, r1, r2, r3); // 0x08009D08
loc_08009D0C:
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08009CD2;
loc_08009D14:
    return r0;
    r0 = r0;
    return sub_080095A4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = ((u32)((s32)r0 >> 32));
    r0 = r0;
    r4 = r0;
    r0 = 0x08049EBCU /* &VTable_08049EBC */; // [0x0800A010]
    r12 = r1;
    r1 += 0x4U;
    *(u32*)(r4) = (u32)r0;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r1 + r3));
    r3 = 0x2U;
    lr = r1;
    r1 = (u32)(*(s16*)(r1 + r3));
    r7 = r2;
    r2 = r7;
    r2 += 0xFFU;
    r0 = (r0 << 8);
    r1 = (r1 << 8);
    stack[6] = r1; // [sp + 0x18]
    stack[5] = r0; // [sp + 0x14]
    r2 += 0xA1U;
    r3 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)(r2);
    r0 = r0 - r3;
    r1 = r1 - r2;
    r5 = r4 + 4;
    r6 = r5 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    stack[8] = r1; // [sp + 0x20]
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    stack[7] = r0; // [sp + 0x1C]
    if (cmp_lhs < cmp_rhs) return sub_08009D6C(r0, r1, r2, r3);
    r0 = stack[7]; // [sp + 0x1C]
    return sub_08009D70(r0, r1, r2, r3);
}

// ROM Address: 0x08009D6C..0x08009D70 (4 bytes, Thumb)
u32 sub_08009D6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[7]; // [sp + 0x1C]
    r0 = (u32)(-(s32)r0);
    return r0;
}

// ROM Address: 0x08009D70..0x08009D7A (10 bytes, Thumb)
u32 sub_08009D70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_08009D7A(r0, r1, r2, r3);
    r1 = stack[8]; // [sp + 0x20]
    return sub_08009D7E(r0, r1, r2, r3);
}

// ROM Address: 0x08009D7A..0x08009E08 (142 bytes, Thumb)
u32 sub_08009D7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[8]; // [sp + 0x20]
    r1 = (u32)(-(s32)r1);
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    r1 = lr;
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    stack[5] = r0; // [sp + 0x14]
    r0 = *(u32*)(r1);
    r1 = 0x14; // sp + 0x14
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08009DAC;
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08009DA6;
    r0 = 0x3U;
    *(u8*)(r4 + 0x12) = (u8)r0;
    goto loc_08009DBE;
loc_08009DA6:
    r0 = 0x2U;
    *(u8*)(r4 + 0x12) = (u8)r0;
    goto loc_08009DBE;
loc_08009DAC:
    r0 = stack[8]; // [sp + 0x20]
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r1 = stack[6]; // [sp + 0x18]
    if (cmp_lhs < cmp_rhs) goto loc_08009DBA;
    *(u8*)(r4 + 0x12) = (u8)r2;
    goto loc_08009DBE;
loc_08009DBA:
    r0 = 0x1U;
    *(u8*)(r4 + 0x12) = (u8)r0;
loc_08009DBE:
    r0 = r12;
    r0 = *(u16*)(r0 + 0x8);
    r1 = (r1 << 8);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08009DC4: BL 0x08046E58
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r4 + 0x10) = (u16)r0;
    r0 = *(u8*)(r4 + 0x12);
    *(u8*)(r7 + 0x10) = (u8)r0;
    r0 = *(u16*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08009E08(r0, r1, r2, r3);
    stack[2] = r5; // [sp + 0x8]
    r0 = *(u16*)(r4 + 0x10);
    r7 = (r0 << 8);
    r0 = stack[7]; // [sp + 0x1C]
    r1 = (r0 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08009DE2: BL 0x08046E58
    r5 = r0;
    r0 = stack[8]; // [sp + 0x20]
    r1 = (r0 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08009DEE: BL 0x08046E58
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    r0 = r5;
    stack[0] = r5; // [sp + 0x0]
    stack[3] = r5; // [sp + 0xC]
    r5 = stack[2]; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[4]; // [sp + 0x10]
    *(u32*)(r6) = (u32)r0;
    return sub_08009E12(r0, r1, r2, r3);
}

// ROM Address: 0x08009E08..0x08009E50 (72 bytes, Thumb)
u32 sub_08009E08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r5) = (u32)r0;
    *(u32*)(r6) = (u32)r0;
    r0 = 0x1U;
    *(u16*)(r4 + 0x10) = (u16)r0;
    r0 = r4;
    return r0;
    r1 += 0x1A0U;
    r3 = *(u32*)(r1);
    r4 = *(u32*)(r0 + 0x4);
    r3 = r3 + r4;
    *(u32*)(r1) = (u32)r3;
    r3 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r0 + 0x8);
    r2 = r3 + r2;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r2 = *(u16*)(r0 + 0x10);
    r2 -= 0x1U;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r0 + 0x10) = (u16)r2;
    if (cmp_lhs != cmp_rhs) return sub_08009E50(r0, r1, r2, r3);
    r3 = 0xCU;
    r2 = (u32)(*(s16*)(r0 + r3));
    r3 = 0xEU;
    r0 = (u32)(*(s16*)(r0 + r3));
    r2 = (r2 << 8);
    *(u32*)r1 = r2; r1 += 4;
    r0 = (r0 << 8);
    *(u32*)(r1) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08009E50..0x08009E54 (4 bytes, Thumb)
u32 sub_08009E50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08009E4C(r0, r1, r2, r3);
}

// ROM Address: 0x08009E54..0x08009F06 (178 bytes, Thumb)
u32 sub_08009E54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x28; // sp + 0x28
    r5 = r0;
    r4 = r1;
    r0 = r7;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08009E60: BL 0x0800FDFA
    r1 = r4;
    r1 += 0x1A0U;
    r2 = r5 + 4;
    stack[15] = r2; // [sp + 0x3C]
    stack[16] = r1; // [sp + 0x40]
    r0 = *(u32*)(r1);
    r3 = *(u32*)(r5 + 0x4);
    r2 += 0x4U;
    r0 = r0 + r3;
    *(u32*)(r1) = (u32)r0;
    stack[14] = r2; // [sp + 0x38]
    r0 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r2);
    r6 = 0x18; // sp + 0x18
    r0 = r0 + r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r1 = r4;
    r0 = r6;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08009E8A: BL 0x0800FDFA
    r0 = 0x03001C34U; // [0x0800A014]
    stack[5] = r6; // [sp + 0x14]
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08009F06(r0, r1, r2, r3);
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08009E9A: BL 0x0800FDFA
    r2 = stack[3]; // [sp + 0xC]
    r3 = stack[4]; // [sp + 0x10]
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    r2 += 0x7U;
    r3 += 0x7U;
    r3 = (r3 >> 3);
    r2 = (r2 >> 3);
    r6 = stack[12]; // [sp + 0x30]
    r0 = (r0 >> 3);
    r1 = (r1 >> 3);
    r1 = (r1 << 3);
    r0 = (r0 << 3);
    r2 = (r2 << 3);
    r3 = (r3 << 3);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08009ED2;
    r6 = stack[10]; // [sp + 0x28]
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08009ED2;
    r6 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08009ED2;
    r6 = stack[11]; // [sp + 0x2C]
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_08009EEA;
loc_08009ED2:
    r6 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) return sub_08009F06(r0, r1, r2, r3);
    r0 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_08009F06(r0, r1, r2, r3);
    r0 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_08009F06(r0, r1, r2, r3);
    r0 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08009F06(r0, r1, r2, r3);
loc_08009EEA:
    r1 = stack[16]; // [sp + 0x40]
    r2 = stack[15]; // [sp + 0x3C]
    r0 = *(u32*)(r1);
    r2 = *(u32*)(r2);
    r0 = r0 - r2;
    *(u32*)(r1) = (u32)r0;
    r2 = stack[14]; // [sp + 0x38]
    r0 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r2);
    r0 = r0 - r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08009F06..0x0800A00E (264 bytes, Thumb)
u32 sub_08009F06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x080716E8U; // [0x0800A018]
    r2 = 0x1U;
    r6 = *(u32*)(r0);
    r6 += 0x80U;
    r1 = *(u32*)(r6 + 0x28);
    r0 = r7;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009F12
    r2 = 0x1U;
    r0 = r7;
    r1 = *(u32*)(r6 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009F1C
    r1 = *(u32*)(r6 + 0x28);
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08009F24
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08009F7A;
    r2 = 0x0U;
    r0 = r7;
    r1 = *(u32*)(r6 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009F32
    r2 = 0x0U;
    r0 = r7;
    r1 = *(u32*)(r6 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009F3C
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009F4A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08009F60;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009F5C: BL __call_via_r3
loc_08009F60:
    r1 = stack[16]; // [sp + 0x40]
    r2 = stack[15]; // [sp + 0x3C]
    r0 = *(u32*)(r1);
    r2 = *(u32*)(r2);
    r0 = r0 - r2;
    *(u32*)(r1) = (u32)r0;
    r2 = stack[14]; // [sp + 0x38]
    r0 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r2);
    r0 = r0 - r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return sub_08009F02(r0, r1, r2, r3);
loc_08009F7A:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009F84: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08009F9A;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08009F96: BL __call_via_r3
loc_08009F9A:
    r0 = *(u8*)(r5 + 0x12);
    r2 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r1 = *(u32*)(r6 + 0x28);
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009FA4
    r1 = *(u32*)(r6 + 0x30);
    r0 = stack[5]; // [sp + 0x14]
    r2 = 0x0U;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009FAE
    r0 = *(u16*)(r5 + 0x10);
    r0 -= 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r5 + 0x10) = (u16)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A00A;
    r1 = r4;
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08009FC2: BL 0x0800FDFA
    r2 = 0x1U;
    r0 = 0x4; // sp + 0x4
    r1 = *(u32*)(r6 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009FCC
    r2 = 0x1U;
    r0 = 0x4; // sp + 0x4
    r1 = *(u32*)(r6 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009FD6
    r3 = 0xCU;
    r0 = (u32)(*(s16*)(r5 + r3));
    r3 = 0xEU;
    r2 = (u32)(*(s16*)(r5 + r3));
    r1 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 8);
    r2 = (r2 << 8);
    *(u32*)r1 = r0; r1 += 4;
    *(u32*)r1 = r2; r1 += 4;
    r1 = r4;
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08009FEE: BL 0x0800FDFA
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r1 = *(u32*)(r6 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08009FF8
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r1 = *(u32*)(r6 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A002
    r0 = 0x1U;
    return sub_08009F02(r0, r1, r2, r3);
loc_0800A00A:
    r0 = 0x0U;
    return sub_08009F02(r0, r1, r2, r3);
}

// ROM Address: 0x0800A00E..0x0800A0C2 (180 bytes, Thumb)
u32 sub_0800A00E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r6 = stack[188]; // [sp + 0x2F0]
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    r0 = ((u32)((s32)r5 >> 27));
    r7 = (r0 >> 32);
    r6 = 0x14; // sp + 0x14
    r5 = r0;
    r4 = r1;
    r0 = r6;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800A028: BL 0x0800FDFA
    stack[4] = r6; // [sp + 0x10]
    r6 = r4;
    r1 = r5 + 4;
    stack[10] = r1; // [sp + 0x28]
    r6 += 0x1A0U;
    r0 = *(u32*)(r6);
    r2 = *(u32*)(r5 + 0x4);
    r1 += 0x4U;
    r0 = r0 + r2;
    *(u32*)(r6) = (u32)r0;
    stack[9] = r1; // [sp + 0x24]
    r0 = *(u32*)(r6 + 0x4);
    r1 = *(u32*)(r1);
    r7 = sp;
    r0 = r0 + r1;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = sp;
    r1 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800A052: BL 0x0800FDFA
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x1U;
    r1 = stack[4]; // [sp + 0x10]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A062: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x50);
    r2 = r2 + r1;
    r1 = r7;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A070: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800A0C2(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = stack[4]; // [sp + 0x10]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A084: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A092: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A0A8;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A0A4: BL __call_via_r3
loc_0800A0A8:
    r1 = stack[10]; // [sp + 0x28]
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r1);
    r0 = r0 - r1;
    *(u32*)(r6) = (u32)r0;
    r1 = stack[9]; // [sp + 0x24]
    r0 = *(u32*)(r6 + 0x4);
    r1 = *(u32*)(r1);
    r0 = r0 - r1;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800A0C2..0x0800A134 (114 bytes, Thumb)
u32 sub_0800A0C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A0CC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A0E2;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A0DE: BL __call_via_r3
loc_0800A0E2:
    r0 = *(u8*)(r5 + 0x12);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = r7;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A0F2: BL __call_via_r3
    r0 = *(u16*)(r5 + 0x10);
    r0 -= 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r5 + 0x10) = (u16)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A130;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A10C: BL __call_via_r3
    r3 = 0xCU;
    r0 = (u32)(*(s16*)(r5 + r3));
    r3 = 0xEU;
    r1 = (u32)(*(s16*)(r5 + r3));
    r0 = (r0 << 8);
    r1 = (r1 << 8);
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r1; r6 += 4;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A128: BL __call_via_r3
    r0 = 0x1U;
    return sub_0800A0BE(r0, r1, r2, r3);
loc_0800A130:
    r0 = 0x0U;
    return sub_0800A0BE(r0, r1, r2, r3);
}

// ROM Address: 0x0800A134..0x0800A208 (212 bytes, Thumb)
u32 sub_0800A134(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r5 = r1;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A13C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A148;
    r0 = r4;
    return r0;
loc_0800A148:
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_08009D24(r0, r1, r2, r3); // 0x0800A14E
    r0 = 0x0804BF70U /* &VTable_0804BF70 */; // [0x0800A208]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A160: BL __call_via_r3
    r0 = r4;
    return r0;
    r6 = r0;
    r5 = r1;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A170: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A17C;
    r0 = r4;
    return r0;
loc_0800A17C:
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_08009D24(r0, r1, r2, r3); // 0x0800A182
    r0 = 0x0804BF70U /* &VTable_0804BF70 */; // [0x0800A208]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A194: BL __call_via_r3
    r0 = 0x0804B954U /* &VTable_0804B954 */; // [0x0800A20C]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0xFU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A1A6: BL __call_via_r3
    r0 = r4;
    return r0;
    r5 = r0;
    r6 = r1;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A1B6: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A1C2;
    r0 = r4;
    return r0;
loc_0800A1C2:
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_08009D24(r0, r1, r2, r3); // 0x0800A1C8
    r0 = 0x0804B964U /* &VTable_0804B964 */; // [0x0800A210]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return r0;
    r6 = r0;
    r5 = r1;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A1DC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A1E8;
    r0 = r4;
    return r0;
loc_0800A1E8:
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_08009D24(r0, r1, r2, r3); // 0x0800A1EE
    r0 = 0x0804B308U /* &VTable_0804B308 */; // [0x0800A214]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A200: BL __call_via_r3
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A216..0x0800A26A (84 bytes, Thumb)
u32 sub_0800A216(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = (r1 >> 31);
    return r0; // BX lr
    r5 = r0;
    r0 = r1;
    r4 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A232: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A248;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A244: BL __call_via_r3
loc_0800A248:
    r0 = *(u8*)(r5 + 0x6);
    r3 = 0x4U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r4 = (u32)(*(s16*)(r5 + r3));
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A252: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A260;
    r1 = 0x0804D4D4U; // [0x0800A264]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0800A260:
    return r0;
    r0 = r0;
    if ((cmp_lhs - cmp_rhs) < 0) return sub_0800A210(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return r0; // BX lr
}

// ROM Address: 0x0800A26A..0x0800A26E (4 bytes, Thumb)
u32 sub_0800A26A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800A278..0x0800A2A8 (48 bytes, Thumb)
u32 sub_0800A278(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049ECCU /* &VTable_08049ECC */; // [0x0800A4E0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = (r1 << 5);
    r1 = 0x000007FFU; // [0x0800A4E4]
    r0 = r0 + r1;
    r0 &= ~r1;
    r1 = ((u32)((s32)r0 >> 8));
    *(u8*)(r4 + 0x5) = (u8)r1;
    r1 = r0 + r5;
    r1 -= 0x1U;
    r0 = r5;
    *(u32*)(r4 + 0x14) = (u32)r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0800A296: BL 0x08046E58
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = (r5 << 4);
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A2A8..0x0800A41E (374 bytes, Thumb)
u32 sub_0800A2A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 += 0x1A0U;
    r0 = *(u32*)(r0 + 0x8);
    stack[8] = r1; // [sp + 0x20]
    r1 += 0x4U;
    r6 = r4;
    r6 += 0x18U;
    stack[10] = r1; // [sp + 0x28]
    r1 = r6 + 4;
    stack[9] = r1; // [sp + 0x24]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A3AC;
    r0 = *(u32*)(r4 + 0x10);
    r0 = sub_0803FADE(r0, r1, r2, r3); // 0x0800A2CA
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A3AE;
    r1 = r5;
    r0 = r4;
    r0 += 0x28U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800A2DA: BL 0x0800FDFA
    r0 = 0x5U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800A2E0
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs >= cmp_rhs) goto loc_0800A2EA;
    *(u8*)(r5 + 0x10) = (u8)r0;
loc_0800A2EA:
    r1 = stack[8]; // [sp + 0x20]
    r1 = *(u32*)(r1);
    r2 = stack[10]; // [sp + 0x28]
    r1 = ((u32)((s32)r1 >> 8));
    r2 = *(u32*)(r2);
    stack[5] = r1; // [sp + 0x14]
    r2 = ((u32)((s32)r2 >> 8));
    stack[6] = r2; // [sp + 0x18]
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x24) = (u32)r2;
    r3 = *(u8*)(r5 + 0x10);
    r2 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A320;
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0800A32E;
    cmp_lhs = (s32)r3; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_0800A340;
    cmp_lhs = (s32)r3; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_0800A350;
    r0 = *(u32*)(r4 + 0x14);
    *(u32*)(r6) = (u32)r0;
    r1 = stack[9]; // [sp + 0x24]
    *(u32*)(r1) = (u32)r2;
    r0 = *(u8*)(r4 + 0x5);
    r1 = r2;
    goto loc_0800A350;
loc_0800A320:
    r0 = *(u32*)(r4 + 0x14);
    *(u32*)(r6) = (u32)r2;
    r1 = stack[9]; // [sp + 0x24]
    *(u32*)(r1) = (u32)r0;
    r1 = *(u8*)(r4 + 0x5);
    r0 = r2;
    goto loc_0800A350;
loc_0800A32E:
    r0 = *(u32*)(r4 + 0x14);
    *(u32*)(r6) = (u32)r2;
    r1 = stack[9]; // [sp + 0x24]
    r0 = (u32)(-(s32)r0);
    *(u32*)(r1) = (u32)r0;
    r0 = *(u8*)(r4 + 0x5);
    r1 = (u32)(-(s32)r0);
    r0 = r2;
    goto loc_0800A350;
loc_0800A340:
    r0 = *(u32*)(r4 + 0x14);
    r0 = (u32)(-(s32)r0);
    *(u32*)(r6) = (u32)r0;
    r1 = stack[9]; // [sp + 0x24]
    *(u32*)(r1) = (u32)r2;
    r0 = *(u8*)(r4 + 0x5);
    r0 = (u32)(-(s32)r0);
    r1 = r2;
loc_0800A350:
    r2 = *(u32*)(r4 + 0x20);
    r7 = r4;
    r2 = r2 + r0;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r2 = *(u32*)(r4 + 0x24);
    r7 += 0x38U;
    r2 = r2 + r1;
    *(u32*)(r4 + 0x24) = (u32)r2;
    r2 = stack[7]; // [sp + 0x1C]
    stack[6] = r2; // [sp + 0x18]
    r2 = *(u32*)(r2);
    r3 = stack[6]; // [sp + 0x18]
    r2 = r2 + r0;
    r3 = *(u32*)(r3 + 0x4);
    stack[0] = r2; // [sp + 0x0]
    r3 = r3 + r1;
    stack[1] = r3; // [sp + 0x4]
    r12 = r2;
    r2 = stack[1]; // [sp + 0x4]
    lr = r2;
    r2 = stack[6]; // [sp + 0x18]
    r2 += 0x8U;
    r3 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    r0 = r3 + r0;
    r1 = r2 + r1;
    r2 = lr;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8; // sp + 0x8
    stack[0] = r0; // [sp + 0x0]
    stack[4] = r0; // [sp + 0x10]
    r3 = r12;
    stack[2] = r3; // [sp + 0x8]
    r0 = r2;
    stack[1] = r1; // [sp + 0x4]
    stack[5] = r1; // [sp + 0x14]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x10);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A3A6: BL __call_via_r3
    goto loc_0800A3B0;
loc_0800A3AC:
    goto loc_0800A3D0;
loc_0800A3AE:
    goto loc_0800A3CA;
loc_0800A3B0:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A3CA;
    r0 = *(u32*)(r4 + 0xC);
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = *(u8*)(r5 + 0x10);
    *(u8*)(r4 + 0x4) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x18);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A3C6: BL __call_via_r3
loc_0800A3CA:
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800A42C(r0, r1, r2, r3);
loc_0800A3D0:
    r1 = stack[8]; // [sp + 0x20]
    r2 = *(u32*)(r6);
    r0 = *(u32*)(r1);
    r0 = r0 + r2;
    *(u32*)(r1) = (u32)r0;
    r0 = stack[9]; // [sp + 0x24]
    r2 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0);
    r0 = r2 + r0;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = *(u8*)(r4 + 0x4);
    *(u8*)(r5 + 0x10) = (u8)r0;
    r0 = *(u32*)(r4 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0800A41E(r0, r1, r2, r3);
    r2 = stack[8]; // [sp + 0x20]
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r4 + 0x24);
    r0 = (r0 << 8);
    *(u32*)(r2) = (u32)r0;
    r2 = stack[10]; // [sp + 0x28]
    r1 = (r1 << 8);
    *(u32*)(r2) = (u32)r1;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x14);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A40A: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x1C);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A418: BL __call_via_r3
    return sub_0800A42C(r0, r1, r2, r3);
}

// ROM Address: 0x0800A41E..0x0800A4BC (158 bytes, Thumb)
u32 sub_0800A41E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x18);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A428: BL __call_via_r3
    r0 = 0x0U;
    return r0;
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A444;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x14);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A440: BL __call_via_r3
loc_0800A444:
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A454: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A46A;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A466: BL __call_via_r3
loc_0800A46A:
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A47A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A490;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A48C: BL __call_via_r3
loc_0800A490:
    return r0;
    r1 = 0x080716F0U; // [0x0800A4E8]
    r1 = *(u32*)(r1);
    r0 += 0x38U;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x28);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0800A49E
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800A4BC(r0, r1, r2, r3);
    r0 = 0x58U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A4B0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800A4BC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A4BC..0x0800A4E0 (36 bytes, Thumb)
u32 sub_0800A4BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x4);
    r0 = sub_0800A278(r0, r1, r2, r3); // 0x0800A4C0: BL 0x0800A278
    r0 = 0x0804D848U /* &VTable_0804D848 */; // [0x0800A4EC]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u16*)(r5 + 0x8);
    r1 = *(u16*)(r5 + 0xA);
    r2 = *(u16*)(r5 + 0xC);
    r3 = *(u16*)(r5 + 0xE);
    r4 += 0x48U;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    r4 -= 0x58U;
    r0 = *(u32*)(r4 + 0x10);
    r0 = (r0 << 3);
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = r4;
    return sub_0800A4BA(r0, r1, r2, r3);
}
