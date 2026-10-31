/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #04
 * Address Range: 0x0800C420..0x0800E9C6 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0800C420..0x0800C42C (12 bytes, Thumb)
u32 sub_0800C420(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0800C298(r0, r1, r2, r3); // 0x0800C420
    r0 = 0x0U;
    return sub_0800C41E(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0800C41E(r0, r1, r2, r3);
}

// ROM Address: 0x0800C42E..0x0800C4BE (144 bytes, Thumb)
u32 sub_0800C42E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r0 >> 32);
    r4 = 0xECU;
    r7 = (r0 >> 32);
    r5 = r4;
    r4 = (r4 << 1);
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r1 = (r0 << 24);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs > (u32)cmp_rhs) return sub_0800C538(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    *(u32*)(r0) = (u32)r0;
    *(u16*)(r0) = (u16)r0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800C46E;
    r0 = 0x34U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800C462: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800C46E;
    r0 = r4;
    return r0;
loc_0800C46E:
    r3 = 0x40U;
    r0 = r4;
    r2 = 0x08072500U; // [0x0800C59C]
    r1 = 0x03001AF8U; // [0x0800C5A0]
    r0 = sub_08011874(r0, r1, r2, r3); // 0x0800C476
    r0 = 0x08049F38U /* &VTable_08049F38 */; // [0x0800C5A4]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r3 = *(u32*)(r5 + 0x4);
    r1 -= 0x4U;
    r1 = (r1 << 8);
    r3 -= 0x4U;
    r3 = (r3 << 8);
    *(u32*)(r4 + 0x1C) = (u32)r1;
    r0 = r4;
    r0 += 0x1CU;
    *(u32*)(r4 + 0x20) = (u32)r3;
    r0 = *(u32*)(r6);
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r6 + 0x4);
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = 0x20U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    return r0;
    r1 = *(u32*)(r0 + 0x18);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x18) = (u32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800C4BE(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x08072500U; // [0x0800C59C]
    r0 -= 0x8U;
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800C4B8
    return r0;
}

// ROM Address: 0x0800C4BE..0x0800C4DA (28 bytes, Thumb)
u32 sub_0800C4BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x24);
    r1 += 0x1U;
    *(u32*)(r0 + 0x24) = (u32)r1;
    r1 = *(u32*)(r0 + 0x28);
    r1 += 0x2U;
    *(u32*)(r0 + 0x28) = (u32)r1;
    r2 = *(u32*)(r0 + 0x1C);
    r3 = *(u32*)(r0 + 0x24);
    r2 = r2 + r3;
    *(u32*)(r0 + 0x1C) = (u32)r2;
    r2 = *(u32*)(r0 + 0x20);
    r1 = r2 + r1;
    *(u32*)(r0 + 0x20) = (u32)r1;
    return sub_0800C4BC(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_clear_fields1_clears_the_three_words
// ROM Address: 0x0800C4DA..0x0800C52E (84 bytes, Thumb)
u32 Object_ClearFields1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x1C);
    r2 = 0x08072500U; // [0x0800C59C]
    r3 = ((u32)((s32)r1 >> 8));
    r1 = *(u32*)(r0 + 0x20);
    r1 = ((u32)((s32)r1 >> 8));
    *(u32*)(r0 + 0x4) = (u32)r1;
    r2 -= 0x8U;
    r2 = *(u32*)(r2 + 0x4);
    r4 = r0;
    r2 += 0x28U;
    r5 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    r3 = r3 - r5;
    r1 = r1 - r2;
    stack[1] = r1; // [sp + 0x4]
    r2 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    r4 += 0x2CU;
    *(u32*)(r4 + 0x4) = (u32)r2;
    r2 = 0x08072500U; // [0x0800C59C]
    *(u32*)(r4) = (u32)r3;
    r1 = *(u32*)(r0 + 0x2C);
    r2 += 0x40U;
    r3 = *(u32*)(r2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) return sub_0800C52E(r0, r1, r2, r3);
    r3 = *(u32*)(r2 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0800C52E(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x30);
    r1 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_0800C52E(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800C52E(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800C52E..0x0800C532 (4 bytes, Thumb)
u32 sub_0800C52E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800C528(r0, r1, r2, r3);
}

// ROM Address: 0x0800C532..0x0800C588 (86 bytes, Thumb)
u32 sub_0800C532(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    r3 = r2;
    r3 += 0x8U;
    *(u32*)(r1) = (u32)r3;
    r1 = 0x2000U; // (1 << 13)
    *(u32*)(r2) = (u32)r1;
    r3 = *(u32*)(r0 + 0x2C);
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r1 |= r3;
    *(u32*)(r2) = (u32)r1;
    r0 = *(u32*)(r0 + 0x30);
    r1 = (r1 >> 8);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r1 = (r1 << 8);
    r0 |= r1;
    *(u32*)(r2) = (u32)r0;
    r0 = *(u32*)(r2 + 0x4);
    r1 = 0xC00U; // (3 << 10)
    r0 |= r1;
    r1 = 0x03001AF8U; // [0x0800C5A0]
    r0 = (r0 >> 10);
    r1 = *(u16*)(r1 + 0x2);
    r0 = (r0 << 10);
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    r0 |= r1;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_0800C588(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800C580: BL 0x08046AA2
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800C588..0x0800C58E (6 bytes, Thumb)
u32 sub_0800C588(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080118D4(r0, r1, r2, r3); // 0x0800C588
    return sub_0800C586(r0, r1, r2, r3);
}

// ROM Address: 0x0800C58E..0x0800C596 (8 bytes, Thumb)
u32 sub_0800C58E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_0800C596(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0800C596..0x0800C59A (4 bytes, Thumb)
u32 sub_0800C596(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800C59A..0x0800C628 (142 bytes, Thumb)
u32 sub_0800C59A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r5 = 0x0U;
    r7 = (r0 >> 32);
    r0 = r7 - r3;
    r0 = (r0 << 12);
    r7 = stack[56]; // [sp + 0xE0]
    r4 = (r0 >> 32);
    r4 = r0;
    r1 = r0;
    r2 = *(u32*)(r0 + 0x2C);
    r0 = 0x08072550U; // [0x0800C830]
    r0 = *(u32*)(r0);
    r0 = sub_080119BC(r0, r1, r2, r3); // 0x0800C5B4
    r0 = 0x0U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_0800C5CC;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800C5C8: BL __call_via_r3
loc_0800C5CC:
    return r0;
    r6 = *(u32*)(r0 + 0x28);
    r4 = r0;
    r0 = 0x08072550U; // [0x0800C830]
    r5 = r4;
    r7 = *(u32*)(r0 + 0x4);
    r5 += 0x14U;
    r7 += 0x80U;
    r2 = 0x1U;
    r0 = r5;
    r1 = *(u32*)(r7 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800C5E4
    r2 = 0x1U;
    r0 = r5;
    r1 = *(u32*)(r7 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800C5EE
    r0 = 0x08072550U; // [0x0800C830]
    r2 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0);
    r1 = r4;
    r0 = sub_080119BC(r0, r1, r2, r3); // 0x0800C5FA
    r0 = 0x0U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_0800C612;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800C60E: BL __call_via_r3
loc_0800C612:
    r0 = r6;
    r0 += 0x8U;
    r1 = *(u32*)(r6 + 0x8);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800C618: BL 0x08046AA2
    return r0;
    r0 = *(u32*)(r0 + 0x10);
    r1 = 0x0807268CU; // [0x0800C834]
    r0 = (r0 << 3);
    r0 = r0 + r1;
    return r0; // BX lr
}

// ROM Address: 0x0800C628..0x0800C65E (54 bytes, Thumb)
u32 sub_0800C628(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x8);
    r2 = *(u32*)(r1 + 0x14);
    r3 = *(u32*)(r1 + 0x1C);
    r1 = *(u32*)(r1 + 0x20);
    r2 = r2 + r3;
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x03001010U; // [0x0800C838]
    r2 = ((u32)((s32)r2 >> 1));
    stack[0] = r2; // [sp + 0x0]
    r3 = stack[1]; // [sp + 0x4]
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r3; r1 += 4;
    r1 = *(u32*)(r0 + 0x8);
    r2 = 0x0807268CU; // [0x0800C834]
    r1 = *(u32*)(r1 + 0x10);
    r3 = 0x03001018U; // [0x0800C83C]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    r2 = (r2 << 8);
    r1 = (r1 << 8);
    *(u32*)(r3 + 0x4) = (u32)r1;
    *(u32*)(r3) = (u32)r2;
    r0 = *(u32*)(r0 + 0x8);
    return sub_0800C5CE(r0, r1, r2, r3);
}

// ROM Address: 0x0800C65E..0x0800C680 (34 bytes, Thumb)
u32 sub_0800C65E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFFFEFECU; // [0x0800C840]
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    sp += r3;
    if (cmp_lhs != cmp_rhs) return sub_0800C680(r0, r1, r2, r3);
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800C670: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800C680(r0, r1, r2, r3);
    r0 = r4;
    r3 = 0x00001014U; // [0x0800C844]
    sp += r3;
    return r0;
}

// ROM Address: 0x0800C680..0x0800C7B6 (310 bytes, Thumb)
u32 sub_0800C680(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804CE00U /* &VTable_0804CE00 */; // [0x0800C848]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r5;
    r0 = *(u8*)(r5 + 0x5);
    *(u8*)(r4 + 0xC) = (u8)r0;
    r0 = *(u16*)(r5 + 0x6);
    r5 = 0x00001008U; // [0x0800C84C]
    *(u16*)(r4 + 0xE) = (u16)r0;
    *(u32*)(r4 + 0x2C) = (u32)r6;
    r0 = *(u8*)(r6 + 0x8);
    r5 += sp;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u32*)(r6 + 0x4);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = *(u32*)(r6 + 0x20);
    r6 = 0x8; // sp + 0x8
    r2 = *(u32*)(r0 + 0x8);
    r3 = *(u32*)(r0);
    r1 = *(u32*)(r0 + 0xC);
    r2 = r2 - r3;
    r3 = 0x1U;
    r0 = *(u32*)(r0 + 0x4);
    r3 = (r3 << 12);
    r3 += sp;
    r0 = r1 - r0;
    *(u32*)(r3 + 0x4) = (u32)r0;
    *(u32*)(r3) = (u32)r2;
    r1 = *(u32*)(r3 + 0x4);
    *(u32*)(r3 + 0xC) = (u32)r1;
    *(u32*)(r3 + 0x8) = (u32)r2;
    r0 = *(u32*)(r4 + 0x2C);
    r2 *= r1;
    r0 = *(u16*)(r0 + 0x16);
    r1 = 0x06010000U; // [0x0800C850]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = r6;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800C6D0: BL 0x08049138
    r1 = *(u32*)(r4 + 0x2C);
    r3 = 0x1U;
    r0 = *(u32*)(r1 + 0x20);
    r12 = r1;
    r2 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r0 + 0xC);
    r3 = (r3 << 12);
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r2;
    r0 = *(u32*)(r1 + 0x20);
    r3 += sp;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r2 = 0x0U;
    *(u32*)(r4 + 0x20) = (u32)r0;
    *(u32*)(r4 + 0x1C) = (u32)r1;
    r0 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800C782;
loc_0800C6FA:
    r0 = ((u32)((s32)r2 >> 3));
    stack[1] = r0; // [sp + 0x4]
    r0 = (r2 << 29);
    r0 = (r0 >> 29);
    stack[0] = r0; // [sp + 0x0]
    r1 = r12;
    r0 = *(u32*)(r1 + 0x20);
    r0 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r5);
    r1 = r0 + r2;
    r0 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800C77A;
    r6 = r1 + 1;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    *(u32*)(r3 + 0x10) = (u32)r6;
loc_0800C71E:
    r6 = (r0 << 29);
    r6 = (r6 >> 29);
    lr = r6;
    r6 = *(u32*)(r5);
    r3 = stack[1]; // [sp + 0x4]
    r7 = ((u32)((s32)r0 >> 3));
    r6 *= r3;
    r3 = stack[0]; // [sp + 0x0]
    r3 = r6 + r3;
    r6 = (r3 << 3);
    r3 = (r7 << 6);
    r6 = r6 + r3;
    r6 += lr;
    r7 = 0x8; // sp + 0x8
    r3 = *(u8*)(r7 + r6);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800C772;
    r3 = r12;
    r3 = *(u32*)(r3 + 0x20);
    r6 = *(u32*)(r3);
    r7 = *(u32*)(r4 + 0x14);
    r6 = r6 + r0;
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) goto loc_0800C750;
    *(u32*)(r4 + 0x14) = (u32)r6;
loc_0800C750:
    r7 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0800C758;
    *(u32*)(r4 + 0x18) = (u32)r1;
loc_0800C758:
    r7 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) goto loc_0800C762;
    r6 += 0x1U;
    *(u32*)(r4 + 0x1C) = (u32)r6;
loc_0800C762:
    r6 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0800C772;
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r6 = *(u32*)(r3 + 0x10);
    *(u32*)(r4 + 0x20) = (u32)r6;
loc_0800C772:
    r6 = *(u32*)(r5);
    r0 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0800C71E;
loc_0800C77A:
    r0 = *(u32*)(r5 + 0x4);
    r2 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800C6FA;
loc_0800C782:
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r4 + 0x20);
    r0 = r0 + r1;
    r0 = ((u32)((s32)r0 >> 1));
    *(u32*)(r4 + 0x18) = (u32)r0;
    r1 = r12;
    r0 = *(u32*)(r1 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800C7B2;
    r0 = 0x08072550U; // [0x0800C830]
    r5 = r4;
    r6 = *(u32*)(r0 + 0x4);
    r5 += 0x14U;
    r6 += 0x80U;
    r2 = 0x0U;
    r0 = r5;
    r1 = *(u32*)(r6 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800C7A4
    r2 = 0x0U;
    r0 = r5;
    r1 = *(u32*)(r6 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800C7AE
loc_0800C7B2:
    r0 = r4;
    return sub_0800C67A(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy2_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x0800C7B6..0x0800C878 (194 bytes, Thumb)
u32 Object_Destroy2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804CE00U /* &VTable_0804CE00 */; // [0x0800C848]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800C7D2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800C7CE: BL __call_via_r3
loc_0800C7D2:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800C854]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800C7E0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800C7DC: BL 0x0803D63C
loc_0800C7E0:
    return r0;
    r6 = 0x08072550U; // [0x0800C830]
    r5 = r0;
    r2 = *(u8*)(r0 + 0x4);
    r0 = *(u32*)(r6);
    r1 = 0x8U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0800C7EE
    r4 = r0;
    r0 = *(u32*)(r6);
    r1 = r0 + 4;
    r3 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800C810;
loc_0800C800:
    r2 = (r0 << 2);
    r2 = r2 + r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_0800C814;
    r0 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0800C800;
loc_0800C810:
    r0 = 0x0U;
    return r0;
loc_0800C814:
    r2 = r4;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800C65E(r0, r1, r2, r3); // 0x0800C81A: BL 0x0800C65E
    r5 = r0;
    r2 = r0;
    r0 = *(u32*)(r6);
    r1 = r4;
    r0 = sub_080119BC(r0, r1, r2, r3); // 0x0800C826
    r0 = r5;
    return r0;
    r0 = r0;
    r5 = 0x50U;
    r7 = (r0 >> 32);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    r0 = ((u32)((s32)r2 >> 32));
    r0 = (r0 << 12);
    r0 = ((u32)((s32)r3 >> 32));
    r0 = (r0 << 12);
    r4 = ((u32)((s32)r2 >> 32));
    r0 = r0;
    r4 = (r0 >> 32);
    r0 = ((u32)((s32)r1 >> 32));
    r0 = r0;
    r0 = r0;
    r1 = (r0 << 24);
    return sub_0800C100(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = *(u32*)(r0 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800C874;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0800C878(r0, r1, r2, r3);
    r4 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r4 + 0x20);
    r4 += 0x24U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
loc_0800C874:
    return r0;
}

// ROM Address: 0x0800C878..0x0800C8C2 (74 bytes, Thumb)
u32 sub_0800C878(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 30);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_0800C874(r0, r1, r2, r3);
    r0 = 0x5U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800C87E
    r5 = r0 - 2;
    r0 = 0x3U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800C886
    r1 = *(u32*)(r4 + 0x2C);
    r0 -= 0x1U;
    r2 = r1;
    r1 = *(u32*)(r1 + 0x20);
    r2 += 0x24U;
    r3 = *(u32*)(r1);
    r4 = *(u32*)(r1 + 0x4);
    r3 = r3 + r5;
    r4 = r4 + r0;
    stack[1] = r4; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    r1 += 0x8U;
    r6 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    r5 = r6 + r5;
    r0 = r1 + r0;
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    stack[3] = r4; // [sp + 0xC]
    r4 = r2;
    r0 = 0x8; // sp + 0x8
    stack[0] = r5; // [sp + 0x0]
    stack[4] = r5; // [sp + 0x10]
    stack[2] = r3; // [sp + 0x8]
    stack[5] = r1; // [sp + 0x14]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    return sub_0800C874(r0, r1, r2, r3);
}

// ROM Address: 0x0800C8C2..0x0800CA04 (322 bytes, Thumb)
u32 sub_0800C8C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800C8CC: BL 0x08046AA2
    return r0;
    r0 = *(u32*)(r0 + 0x2C);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x10);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800C8DC: BL __call_via_r3
    return r0;
    r0 = *(u32*)(r0 + 0x2C);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x18);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800C8EC: BL __call_via_r3
    return r0;
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800C8FC: BL 0x08046AA2
    return r0;
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800C90C: BL 0x08046AA2
    return r0;
    r4 = r0;
    r0 += 0x14U;
    r1 = r0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r0 + 0x4);
    r1 += 0x8U;
    r1 = *(u32*)(r1 + 0x4);
    r0 = r0 + r1;
    r2 = r2 + r3;
    r1 = ((u32)((s32)r2 >> 1));
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[1] = r2; // [sp + 0x4]
    r7 = 0x08072558U; // [0x0800CB08]
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r5 = 0xC; // sp + 0xC
    r2 = r7;
    r1 = r5;
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x0U;
    r0 = sub_0800C454(r0, r1, r2, r3); // 0x0800C944
    r6 = 0x08072558U; // [0x0800CB08]
    r1 = r0;
    r6 -= 0x8U;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800C950: BL 0x0801191A
    r2 = r7;
    r2 += 0x8U;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800C454(r0, r1, r2, r3); // 0x0800C95C
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800C964: BL 0x0801191A
    r2 = r7;
    r2 += 0x10U;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800C454(r0, r1, r2, r3); // 0x0800C970
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800C978: BL 0x0801191A
    r2 = r7;
    r2 += 0x18U;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800C454(r0, r1, r2, r3); // 0x0800C984
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800C98C: BL 0x0801191A
    r0 = *(u8*)(r4 + 0xC);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4 + 0xC) = (u8)r0;
    if (cmp_lhs != cmp_rhs) return sub_0800CA04(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x2C);
    *(u32*)(r1 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r6);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0800C9A2
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0800C9D6;
    r7 = (r1 << 2);
    r0 = r7;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800C9B2
    r0 = r0 + r7;
    r2 = 0x38U;
    r1 = (r7 >> 2);
    stack[1] = r1; // [sp + 0x4]
    r1 = r5;
    stack[2] = r2; // [sp + 0x8]
    stack[0] = r0; // [sp + 0x0]
    r3 = 0x4U;
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x0800CB0C]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0800C9CA
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800C9D2: BL 0x0801191A
loc_0800C9D6:
    r0 = 0xCU;
    r5 = *(u32*)(r6);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800C9DA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800C9EC;
    r1 = 0x10U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x08049BB4U /* &VTable_08049BB4 */; // [0x0800CB10]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_0800C9EC:
    r2 = r0;
    r0 = 0x610U; // (97 << 4)
    r0 = r5 + r0;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0;
}

// ROM Address: 0x0800CA04..0x0800CA0A (6 bytes, Thumb)
u32 sub_0800CA04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x17U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    return sub_0800CA00(r0, r1, r2, r3);
}

// ROM Address: 0x0800CA0A..0x0800CA5C (82 bytes, Thumb)
u32 sub_0800CA0A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r6 = 0x1U;
    r3 = r2 + 4;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x2C);
    if (cmp_lhs == cmp_rhs) return sub_0800CA5C(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0800CAB2(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    r3 = *(u32*)(r0);
    if (cmp_lhs != cmp_rhs) return sub_0800CAF6(r0, r1, r2, r3);
    r5 = *(u32*)(r3 + 0x24);
    r3 = r5 + r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800CA26: BL __call_via_r3
    r7 = r0;
    r0 = 0x08072558U; // [0x0800CB08]
    r1 = *(u32*)(r4 + 0x2C);
    r0 -= 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0x1C);
    r5 = r4;
    r5 += 0x14U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800CA40;
    r6 = 0x0U;
loc_0800CA40:
    r4 = r0;
    r4 += 0x80U;
    r2 = r6;
    r0 = r5;
    r1 = *(u32*)(r4 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800CA4A
    r2 = r6;
    r0 = r5;
    r1 = *(u32*)(r4 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800CA54
    r0 = r7;
    return r0;
}

// ROM Address: 0x0800CA5C..0x0800CAF8 (156 bytes, Thumb)
u32 sub_0800CA5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800CAAE;
    r0 = *(u32*)(r2 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800CA6A;
    return sub_0800CA5A(r0, r1, r2, r3);
loc_0800CA6A:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r3 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800CAAE;
    r0 = *(u32*)(r3);
    r1 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800CAAE;
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800CAAE;
    r0 = *(u32*)(r3 + 0x4);
    r1 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800CAAE;
    r0 = *(u8*)(r2 + 0x14);
    r1 = r6;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = *(u32*)(r2 + 0x1C);
    r2 = *(u8*)(r0);
    r0 = *(u8*)(r0 + 0x1);
    r1 <<= (r2 & 0xFF);
    r6 <<= (r0 & 0xFF);
    r1 |= r6;
    r0 = r1;
    r1 = *(u16*)(r4 + 0xE);
    r1 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800CAAE;
    r0 = r4;
    r0 = sub_0800C912(r0, r1, r2, r3); // 0x0800CAA6
    r0 = 0x1U;
    return sub_0800CA5A(r0, r1, r2, r3);
loc_0800CAAE:
    r0 = 0x0U;
    return sub_0800CA5A(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800CAF8(r0, r1, r2, r3);
    r0 = *(u8*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800CAC0;
    return sub_0800CA5A(r0, r1, r2, r3);
loc_0800CAC0:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r3 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800CAF8(r0, r1, r2, r3);
    r0 = *(u32*)(r3);
    r1 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800CAF8(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r3 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800CAF8(r0, r1, r2, r3);
    r0 = *(u32*)(r3 + 0x4);
    r1 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800CAF8(r0, r1, r2, r3);
    r0 = *(u32*)(r2 + 0x1C);
    r1 = r6;
    r2 = *(u8*)(r0);
    r0 = *(u8*)(r0 + 0x1);
    r1 <<= (r2 & 0xFF);
    r6 <<= (r0 & 0xFF);
    r1 |= r6;
    r0 = r1;
    r1 = *(u16*)(r4 + 0xE);
    r0 &= r1;
    return sub_0800CA5A(r0, r1, r2, r3);
    return sub_0800CAFC(r0, r1, r2, r3);
}

// ROM Address: 0x0800CAF8..0x0800CAFC (4 bytes, Thumb)
u32 sub_0800CAF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800CA5A(r0, r1, r2, r3);
}

// ROM Address: 0x0800CAFC..0x0800CB00 (4 bytes, Thumb)
u32 sub_0800CAFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r3 + 0x24);
    r3 = r4 + r3;
    return r0;
}

// ROM Address: 0x0800CB06..0x0800CBB8 (178 bytes, Thumb)
u32 sub_0800CB06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r5 = 0x58U;
    r7 = (r0 >> 32);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0800CAB0(r0, r1, r2, r3);
    r7 = (r5 >> 1);
    r3 = stack[180]; // [sp + 0x2D0]
    r4 = (r0 >> 32);
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800CB2E;
    r0 = 0x5CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800CB22: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800CB2E;
    r0 = r4;
    return r0;
loc_0800CB2E:
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800CEF4(r0, r1, r2, r3); // 0x0800CB34: BL 0x0800CEF4
    r0 = 0x0804E288U /* &VTable_0804E288 */; // [0x0800CDD0]
    r1 = 0x38U;
    *(u32*)(r4) = (u32)r0;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r1 = *(u32*)(r5 + 0xC);
    r0 = r4;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = *(u32*)(r4 + 0x24);
    r2 = *(u32*)(r4 + 0x2C);
    r0 += 0x54U;
    r3 = r1 + r2;
    r3 = ((u32)((s32)r3 >> 1));
    *(u32*)(r4 + 0x44) = (u32)r3;
    r3 = *(u32*)(r4 + 0x30);
    r1 = r2 - r1;
    *(u32*)(r4 + 0x34) = (u32)r1;
    *(u32*)(r4 + 0x48) = (u32)r3;
    r1 = *(u32*)(r4 + 0x28);
    r2 = r3 - r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x3C) = (u32)r1;
    *(u32*)(r4 + 0x38) = (u32)r2;
    r2 = (r2 << 7);
    *(u32*)(r4 + 0x40) = (u32)r2;
    r2 = 0xF000U; // (15 << 12)
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r4 + 0x20);
    r2 = *(u8*)(r2 + 0x16);
    cmp_lhs = (s32)r2; cmp_rhs = 40;
    if (cmp_lhs != cmp_rhs) goto loc_0800CB7C;
    r2 = 0x1B800U; // (55 << 11)
    *(u32*)(r0) = (u32)r2;
loc_0800CB7C:
    r2 = *(u32*)(r4 + 0x20);
    r2 = *(u8*)(r2 + 0x16);
    cmp_lhs = (s32)r2; cmp_rhs = 60;
    if (cmp_lhs != cmp_rhs) goto loc_0800CBA4;
    r2 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = 16;
    if (cmp_lhs <= cmp_rhs) goto loc_0800CBA2;
    r2 = *(u32*)(r4 + 0x30);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r3 = *(u32*)(r4 + 0x28);
    r2 = r2 + r3;
    r2 = ((u32)((s32)r2 >> 2));
    *(u32*)(r4 + 0x48) = (u32)r2;
    r2 = *(u32*)(r4 + 0x40);
    r3 = (r2 >> 31);
    r2 = r3 + r2;
    r2 = ((u32)((s32)r2 >> 1));
    *(u32*)(r4 + 0x40) = (u32)r2;
loc_0800CBA2:
    *(u32*)(r0) = (u32)r1;
loc_0800CBA4:
    r0 = r4;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return Math_Divide2(r0, r1, r2, r3);
    return r0;
}

// Evidence: calls BIOS Div (SWI 0x06) at 0800CC1E, 0800CC42; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0800CBB8
// ROM Address: 0x0800CBB8..0x0800CC6C (180 bytes, Thumb)
u32 Math_Divide2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08072578U; // [0x0800CDD4]
    r2 = *(u32*)(r4 + 0x44);
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x18U;
    r3 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0800CBDA;
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0800CBDA;
    r2 = *(u32*)(r4 + 0x48);
    r3 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0800CBDA;
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0800CBDE;
loc_0800CBDA:
    r0 = 0x0U;
    return sub_0800CBB4(r0, r1, r2, r3);
loc_0800CBDE:
    r2 = *(u32*)(r4 + 0x44);
    r1 = 0x14; // sp + 0x14
    r2 = (r2 << 10);
    stack[5] = r2; // [sp + 0x14]
    r2 = *(u32*)(r4 + 0x48);
    r3 = 0x4; // sp + 0x4
    r2 = (r2 << 10);
    stack[6] = r2; // [sp + 0x18]
    r2 = *(u32*)(r4 + 0x54);
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x10; // sp + 0x10
    r0 = *(u32*)(r0 + 0x4);
    stack[0] = r2; // [sp + 0x0]
    r2 = 0xC; // sp + 0xC
    r0 = sub_0802F1C6(r0, r1, r2, r3); // 0x0800CBFA
    r0 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800CC06;
    return sub_0800CBB4(r0, r1, r2, r3);
loc_0800CC06:
    r0 = stack[4]; // [sp + 0x10]
    r3 = (r0 << 2);
    r0 = r3 + r0;
    r0 = (r0 << 1);
    r0 = ((u32)((s32)r0 >> 12));
    *(u32*)(r4 + 0x58) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs >= cmp_rhs) goto loc_0800CC1A;
    r0 = 0x80U;
    *(u32*)(r4 + 0x58) = (u32)r0;
loc_0800CC1A:
    r0 = *(u32*)(r4 + 0x3C);
    r1 = *(u32*)(r4 + 0x58);
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r1 = stack[1]; // [sp + 0x4]
    r0 = r1 - r0;
    r1 = *(u32*)(r4 + 0x34);
    r0 = r0 - r1;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 240;
    if (cmp_lhs < cmp_rhs) goto loc_0800CC32;
    r0 = 0x0U;
    return sub_0800CBB4(r0, r1, r2, r3);
loc_0800CC32:
    r1 = (r1 << 1);
    r1 = (u32)(-(s32)r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800CC3E;
    r0 = 0x0U;
    return sub_0800CBB4(r0, r1, r2, r3);
loc_0800CC3E:
    r0 = *(u32*)(r4 + 0x40);
    r1 = *(u32*)(r4 + 0x58);
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r1 = stack[2]; // [sp + 0x8]
    r0 = r1 - r0;
    r1 = *(u32*)(r4 + 0x38);
    r0 = r0 - r1;
    *(u32*)(r4 + 0x50) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 160;
    if (cmp_lhs < cmp_rhs) goto loc_0800CC56;
    r0 = 0x0U;
    return sub_0800CBB4(r0, r1, r2, r3);
loc_0800CC56:
    r1 = (r1 << 1);
    r1 = (u32)(-(s32)r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800CC62;
    r0 = 0x0U;
    return sub_0800CBB4(r0, r1, r2, r3);
loc_0800CC62:
    r0 = stack[4]; // [sp + 0x10]
    r0 = (u32)(-(s32)r0);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return sub_0800CBB4(r0, r1, r2, r3);
}

// ROM Address: 0x0800CC6C..0x0800CC7A (14 bytes, Thumb)
u32 sub_0800CC6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r4; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) return sub_0800CC7A(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800CC7A..0x0800CD00 (134 bytes, Thumb)
u32 sub_0800CC7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    r6 = 0xFE00FFFFU; // [0x0800CDD8]
    r3 = r2;
    r3 += 0x8U;
    *(u32*)(r1) = (u32)r3;
    r3 = *(u32*)(r1 + 0x4);
    r7 = 0x3U;
    r5 = r3;
    r5 += 0x20U;
    *(u32*)(r1 + 0x4) = (u32)r5;
    r5 = r4 + 1;
    *(u32*)(r1 + 0x8) = (u32)r5;
    r1 = r4;
    r4 = *(u32*)(r0 + 0x20);
    r5 = 0x1U;
    r4 = *(u32*)(r4 + 0x10);
    r5 = (r5 << 9);
    r4 |= r5;
    r5 = (r5 >> 1);
    r4 |= r5;
    *(u32*)(r2) = (u32)r4;
    r5 = *(u32*)(r0 + 0x4C);
    r4 &= r6;
    r5 = (r5 << 23);
    r5 = (r5 >> 7);
    r4 |= r5;
    *(u32*)(r2) = (u32)r4;
    r5 = *(u32*)(r0 + 0x50);
    r4 = (r4 >> 8);
    r5 = (r5 << 24);
    r5 = (r5 >> 24);
    r4 = (r4 << 8);
    r4 |= r5;
    *(u32*)(r2) = (u32)r4;
    r5 = *(u8*)(r0 + 0x8);
    r6 = *(u32*)(r2 + 0x4);
    r7 = (r7 << 10);
    r5 = (r5 << 26);
    r5 = (r5 >> 30);
    r5 = (r5 << 10);
    r6 &= ~r7;
    r5 |= r6;
    *(u32*)(r2 + 0x4) = (u32)r5;
    r6 = *(u16*)(r0 + 0x16);
    r5 = (r5 >> 10);
    r5 = (r5 << 10);
    r6 = (r6 << 22);
    r6 = (r6 >> 22);
    r5 |= r6;
    r6 = 0x3E000000U; // (31 << 25)
    r4 &= ~r6;
    *(u32*)(r2 + 0x4) = (u32)r5;
    r5 = r4;
    r1 = (r1 << 27);
    r1 = (r1 >> 2);
    r1 |= r5;
    *(u32*)(r2) = (u32)r1;
    r1 = *(u32*)(r0 + 0x58);
    *(u16*)(r3 + 0x6) = (u16)r1;
    r1 = 0x0U;
    *(u16*)(r3 + 0xE) = (u16)r1;
    *(u16*)(r3 + 0x16) = (u16)r1;
    r0 = *(u32*)(r0 + 0x58);
    *(u16*)(r3 + 0x1E) = (u16)r0;
    r0 = 0x0U;
    return sub_0800CC76(r0, r1, r2, r3);
}

// ROM Address: 0x0800CD00..0x0800CD94 (148 bytes, Thumb)
u32 sub_0800CD00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x5C);
    r0 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800CD0A: BL 0x0803D5B8
    r5 = r0;
    r0 = *(u32*)(r4 + 0x5C);
    r1 = r5;
    r0 = *(u32*)(r0 + 0x2C);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0800CD16
    r0 = *(u16*)(r4 + 0x16);
    r1 = 0x06010000U; // [0x0800CDDC]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = *(u32*)(r4 + 0x5C);
    r1 = *(u32*)(r1 + 0x2C);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800CD2A: BL 0x08049138
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800CD30: BL 0x0803D63C
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x5C);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072578U; // [0x0800CDD4]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800CD44
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800CD00(r0, r1, r2, r3); // 0x0800CD4C: BL 0x0800CD00
    return r0;
    r4 = r0;
    r0 = *(u16*)(r0 + 0x16);
    r1 = 0x0000FFFFU; // [0x0800CDE0]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800CD74;
    r0 = *(u32*)(r4 + 0x5C);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072578U; // [0x0800CDD4]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800CD68
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800CD00(r0, r1, r2, r3); // 0x0800CD70: BL 0x0800CD00
loc_0800CD74:
    r0 = *(u16*)(r4 + 0x16);
    return r0;
    r7 = r3;
    r6 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800CD94(r0, r1, r2, r3);
    r0 = 0x60U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800CD88: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800CD94(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800CD94..0x0800CDD0 (60 bytes, Thumb)
u32 sub_0800CD94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r7;
    r1 = r6;
    r0 = r4;
    r0 = sub_0800CB14(r0, r1, r2, r3); // 0x0800CD9A
    r0 = 0x0804DF4CU /* &VTable_0804DF4C */; // [0x0800CDE4]
    r1 = 0x0000FFFFU; // [0x0800CDE0]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x5C) = (u32)r5;
    r0 = *(u16*)(r5 + 0x16);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800CDC2;
    r0 = *(u32*)(r5 + 0x5C);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072578U; // [0x0800CDD4]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800CDB6
    *(u16*)(r5 + 0x16) = (u16)r0;
    r0 = r5;
    r0 = sub_0800CD00(r0, r1, r2, r3); // 0x0800CDBE: BL 0x0800CD00
loc_0800CDC2:
    r1 = *(u32*)(r4 + 0x20);
    r0 = *(u16*)(r5 + 0x16);
    r1 = *(u16*)(r1 + 0x14);
    r0 = r0 + r1;
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    return sub_0800CD92(r0, r1, r2, r3);
}

// ROM Address: 0x0800CDE2..0x0800CE32 (80 bytes, Thumb)
u32 sub_0800CDE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = Bios_Swi_4C(r0, r1); // SWI 0x4C
    r4 = (r0 >> 32);
    return r0; // BX lr
    r4 = *(u32*)(r0 + 0x5C);
    r5 = r0;
    r0 = *(u16*)(r4 + 0x16);
    r1 = 0x0000FFFFU; // [0x0800CEE4]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800CE0E;
    r0 = *(u32*)(r4 + 0x5C);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072578U; // [0x0800CEE8]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800CE02
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800CD00(r0, r1, r2, r3); // 0x0800CE0A: BL 0x0800CD00
loc_0800CE0E:
    r1 = *(u32*)(r5 + 0x20);
    r0 = *(u16*)(r4 + 0x16);
    r1 = *(u16*)(r1 + 0x14);
    r0 = r0 + r1;
    *(u16*)(r5 + 0x16) = (u16)r0;
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800CE32(r0, r1, r2, r3);
    r0 = 0x60U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800CE26: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800CE32(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800CE32..0x0800CE5A (40 bytes, Thumb)
u32 sub_0800CE32(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_0800CB14(r0, r1, r2, r3); // 0x0800CE38
    r0 = 0x0804E2FCU /* &VTable_0804E2FC */; // [0x0800CEEC]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x5C) = (u32)r5;
    r0 = *(u32*)(r5 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072578U; // [0x0800CEE8]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800CE4A
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800CD00(r0, r1, r2, r3); // 0x0800CE52: BL 0x0800CD00
    r0 = r4;
    return sub_0800CE30(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy3_stores_the_two_tables_relinks_and_frees_the_object
// ROM Address: 0x0800CE5A..0x0800CEDE (132 bytes, Thumb)
u32 Object_Destroy3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804E2FCU /* &VTable_0804E2FC */; // [0x0800CEEC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0x16);
    r0 = 0x0000FFFFU; // [0x0800CEE4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800CE74;
    r0 = 0x08072578U; // [0x0800CEE8]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800CE70
loc_0800CE74:
    r0 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800CE86;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800CE82: BL __call_via_r3
loc_0800CE86:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800CEF0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800CE94;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800CE90: BL 0x0803D63C
loc_0800CE94:
    return r0;
    r1 = *(u16*)(r0 + 0x16);
    r4 = r0;
    r0 = 0x08072578U; // [0x0800CEE8]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800CEA0
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x16) = (u16)r0;
    return r0;
    r4 = r0;
    r0 = *(u16*)(r0 + 0x16);
    r1 = 0x0000FFFFU; // [0x0800CEE4]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800CECE;
    r0 = *(u32*)(r4 + 0x5C);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072578U; // [0x0800CEE8]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800CEC2
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800CD00(r0, r1, r2, r3); // 0x0800CECA: BL 0x0800CD00
loc_0800CECE:
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_0800CEDE(r0, r1, r2, r3);
    r0 = sub_0800CD00(r0, r1, r2, r3); // 0x0800CED6: BL 0x0800CD00
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800CEDE..0x0800CEE4 (6 bytes, Thumb)
u32 sub_0800CEDE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0800CFE0(r0, r1, r2, r3); // 0x0800CEDE
    return sub_0800CEDC(r0, r1, r2, r3);
}

// ROM Address: 0x0800CEF4..0x0800CF76 (130 bytes, Thumb)
u32 sub_0800CEF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r2;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800CF08;
    r0 = 0x34U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800CF00: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800CF40;
loc_0800CF08:
    r1 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800D19C]
    r6 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0804CDACU /* &VTable_0804CDAC */; // [0x0800D1A0]
    *(u32*)(r0 + 0xC) = (u32)r6;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r4;
    *(u32*)(r0 + 0x10) = (u32)r0;
    r7 = r0;
    r7 += 0x24U;
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 -= 0x10U;
    *(u32*)r7 = r3; r7 += 4;
    r1 = *(u32*)(r0 + 0x20);
    r2 = *(u8*)(r1 + 0x16);
    *(u8*)(r0 + 0x8) = (u8)r2;
    r2 = *(u32*)(r4 + 0xC);
    *(u32*)(r0 + 0x4) = (u32)r2;
    r1 = *(u8*)(r1 + 0x17);
    r2 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800CF3A;
    r2 = 0x0U;
loc_0800CF3A:
    *(u32*)(r0 + 0x1C) = (u32)r2;
    *(u16*)(r0 + 0x14) = (u16)r5;
    *(u32*)(r0 + 0x18) = (u32)r6;
loc_0800CF40:
    return r0;
    r1 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800CF4C;
    r0 = 0x0U;
    return r0; // BX lr
loc_0800CF4C:
    r1 = 0x08072580U; // [0x0800D1A4]
    r2 = *(u32*)(r0 + 0x24);
    r1 = *(u32*)(r1 + 0x4);
    r1 += 0x18U;
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0800CF76(r0, r1, r2, r3);
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x2C);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0800CF76(r0, r1, r2, r3);
    r2 = *(u32*)(r0 + 0x28);
    r3 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0800CF76(r0, r1, r2, r3);
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0800CF76(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800CF76..0x0800CF7A (4 bytes, Thumb)
u32 sub_0800CF76(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800CF7A..0x0800D00C (146 bytes, Thumb)
u32 sub_0800CF7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r1;
    r1 = 0x08072580U; // [0x0800D1A4]
    r1 = *(u32*)(r1 + 0x4);
    r2 = r1;
    r1 = *(u32*)(r3);
    r2 += 0x28U;
    r4 = r1;
    r4 += 0x8U;
    *(u32*)(r3) = (u32)r4;
    r3 = *(u32*)(r0 + 0x20);
    r3 = *(u32*)(r3 + 0x10);
    *(u32*)(r1) = (u32)r3;
    r4 = *(u32*)(r0 + 0x24);
    r5 = *(u32*)(r2);
    r4 = r4 - r5;
    r5 = 0xFE00FFFFU; // [0x0800D1A8]
    r4 = (r4 << 23);
    r4 = (r4 >> 7);
    r3 &= r5;
    r3 |= r4;
    *(u32*)(r1) = (u32)r3;
    r4 = *(u32*)(r0 + 0x28);
    r2 = *(u32*)(r2 + 0x4);
    r3 = (r3 >> 8);
    r2 = r4 - r2;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r3 = (r3 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r2 = *(u8*)(r0 + 0x8);
    r3 = *(u32*)(r1 + 0x4);
    r4 = 0x3U;
    r2 = (r2 << 26);
    r2 = (r2 >> 30);
    r4 = (r4 << 10);
    r3 &= ~r4;
    r2 = (r2 << 10);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r0 = *(u16*)(r0 + 0x16);
    r2 = (r2 >> 10);
    r2 = (r2 << 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r0 |= r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    r6 = r1;
    r5 = r2;
    r4 = r0;
    r0 += 0xCU;
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x0800CFEA: BL 0x080193AE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800CFF6;
    r0 -= 0x1U;
    return r0;
loc_0800CFF6:
    cmp_lhs = (s32)r6; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_0800D010(r0, r1, r2, r3);
    r1 = *(u16*)(r4 + 0x14);
    r0 = ((u32)((s32)r5 >> 1));
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800D00C(r0, r1, r2, r3);
    r0 = (r5 << 31);
    r0 = (r0 >> 31);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800D00C..0x0800D010 (4 bytes, Thumb)
u32 sub_0800D00C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800D010..0x0800D01E (14 bytes, Thumb)
u32 sub_0800D010(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r6; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_0800D022(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) return sub_0800D01E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800D01E..0x0800D026 (8 bytes, Thumb)
u32 sub_0800D01E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800D026..0x0800D0BC (150 bytes, Thumb)
u32 sub_0800D026(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x34);
    r0 = *(u32*)(r0 + 0x2C);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800D030: BL 0x0803D5B8
    r5 = r0;
    r0 = *(u32*)(r4 + 0x34);
    r1 = r5;
    r0 = *(u32*)(r0 + 0x2C);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0800D03C
    r0 = *(u16*)(r4 + 0x16);
    r1 = 0x06010000U; // [0x0800D1AC]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r1 + 0x2C);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800D050: BL 0x08049138
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800D056: BL 0x0803D63C
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x34);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072580U; // [0x0800D1A4]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D06A
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800D026(r0, r1, r2, r3); // 0x0800D072: BL 0x0800D026
    return r0;
    r4 = r0;
    r0 = *(u16*)(r0 + 0x16);
    r1 = 0x0000FFFFU; // [0x0800D1B0]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800D09A;
    r0 = *(u32*)(r4 + 0x34);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072580U; // [0x0800D1A4]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D08E
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800D026(r0, r1, r2, r3); // 0x0800D096: BL 0x0800D026
loc_0800D09A:
    r0 = *(u16*)(r4 + 0x16);
    return r0;
    r6 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800D0BC(r0, r1, r2, r3);
    r0 = 0x38U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800D0AE: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800D0BC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800D0BC..0x0800D128 (108 bytes, Thumb)
u32 sub_0800D0BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800D19C]
    r1 = 0x0804CDACU /* &VTable_0804CDAC */; // [0x0800D1A0]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    *(u32*)(r4) = (u32)r1;
    *(u32*)(r4 + 0x20) = (u32)r5;
    *(u32*)(r4 + 0x10) = (u32)r4;
    r7 = r4;
    r7 += 0x24U;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 -= 0x10U;
    *(u32*)r7 = r3; r7 += 4;
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u8*)(r1 + 0x16);
    *(u8*)(r4 + 0x8) = (u8)r2;
    r2 = *(u32*)(r5 + 0xC);
    *(u32*)(r4 + 0x4) = (u32)r2;
    r1 = *(u8*)(r1 + 0x17);
    r2 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D0EE;
    r2 = 0x0U;
loc_0800D0EE:
    *(u32*)(r4 + 0x1C) = (u32)r2;
    *(u16*)(r4 + 0x14) = (u16)r6;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x0804BA78U /* &VTable_0804BA78 */; // [0x0800D1B4]
    r1 = 0x0000FFFFU; // [0x0800D1B0]
    *(u32*)(r4) = (u32)r0;
    r5 = stack[3]; // [sp + 0xC]
    *(u32*)(r4 + 0x34) = (u32)r5;
    r0 = *(u16*)(r5 + 0x16);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800D11A;
    r0 = *(u32*)(r5 + 0x34);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072580U; // [0x0800D1A4]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D10E
    *(u16*)(r5 + 0x16) = (u16)r0;
    r0 = r5;
    r0 = sub_0800D026(r0, r1, r2, r3); // 0x0800D116: BL 0x0800D026
loc_0800D11A:
    r1 = *(u32*)(r4 + 0x20);
    r0 = *(u16*)(r5 + 0x16);
    r1 = *(u16*)(r1 + 0x14);
    r0 = r0 + r1;
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    return sub_0800D0B8(r0, r1, r2, r3);
}

// ROM Address: 0x0800D12A..0x0800D172 (72 bytes, Thumb)
u32 sub_0800D12A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0x34);
    r5 = r0;
    r0 = *(u16*)(r4 + 0x16);
    r1 = 0x0000FFFFU; // [0x0800D1B0]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800D14E;
    r0 = *(u32*)(r4 + 0x34);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072580U; // [0x0800D1A4]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D142
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800D026(r0, r1, r2, r3); // 0x0800D14A: BL 0x0800D026
loc_0800D14E:
    r1 = *(u32*)(r5 + 0x20);
    r0 = *(u16*)(r4 + 0x16);
    r1 = *(u16*)(r1 + 0x14);
    r0 = r0 + r1;
    *(u16*)(r5 + 0x16) = (u16)r0;
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800D172(r0, r1, r2, r3);
    r0 = 0x38U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800D166: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800D172(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800D172..0x0800D19A (40 bytes, Thumb)
u32 sub_0800D172(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_0800CEF4(r0, r1, r2, r3); // 0x0800D178: BL 0x0800CEF4
    r0 = 0x0804D1E4U /* &VTable_0804D1E4 */; // [0x0800D1B8]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x34) = (u32)r5;
    r0 = *(u32*)(r5 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072580U; // [0x0800D1A4]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D18A
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800D026(r0, r1, r2, r3); // 0x0800D192: BL 0x0800D026
    r0 = r4;
    return sub_0800D170(r0, r1, r2, r3);
}

// ROM Address: 0x0800D1BC..0x0800D300 (324 bytes, Thumb)
u32 sub_0800D1BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804D1E4U /* &VTable_0804D1E4 */; // [0x0800D280]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0x16);
    r0 = 0x0000FFFFU; // [0x0800D284]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D1D6;
    r0 = 0x08072580U; // [0x0800D288]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800D1D2
loc_0800D1D6:
    r0 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D1E8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800D1E4: BL __call_via_r3
loc_0800D1E8:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800D28C]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D1F6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800D1F2: BL 0x0803D63C
loc_0800D1F6:
    return r0;
    r1 = *(u16*)(r0 + 0x16);
    r4 = r0;
    r0 = 0x08072580U; // [0x0800D288]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800D202
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x16) = (u16)r0;
    return r0;
    r4 = r0;
    r0 = *(u16*)(r0 + 0x16);
    r1 = 0x0000FFFFU; // [0x0800D284]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800D230;
    r0 = *(u32*)(r4 + 0x34);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0 + 0x4);
    r0 = 0x08072580U; // [0x0800D288]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D224
    *(u16*)(r4 + 0x16) = (u16)r0;
    r0 = r4;
    r0 = sub_0800D026(r0, r1, r2, r3); // 0x0800D22C: BL 0x0800D026
loc_0800D230:
    return r0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) goto loc_0800D248;
    r0 = r4;
    r0 = sub_0800D026(r0, r1, r2, r3); // 0x0800D240: BL 0x0800D026
    r0 = 0x0U;
    return r0;
loc_0800D248:
    r1 = r5;
    r0 = r4;
loc_0800D24C:
    r0 += 0xCU;
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x0800D24E: BL 0x080193AE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D25A;
    r0 -= 0x1U;
loc_0800D258:
    return r0;
loc_0800D25A:
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_0800D272;
    r2 = *(u16*)(r4 + 0x14);
    r1 = ((u32)((s32)r6 >> 1));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0800D258;
    r0 = (r6 << 31);
    r0 = (r0 >> 31);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x1U;
loc_0800D270:
    return r0;
loc_0800D272:
    cmp_lhs = (s32)r5; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0800D270;
    r1 = *(u16*)(r4 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0800D270;
    r0 = r4;
    return r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D24C;
    r4 = (r0 >> 32);
    r0 = r0;
    r5 = 0x80U;
    r7 = (r0 >> 32);
    return sub_0800CB38(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r6 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D2AA;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800D29E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D2AA;
    r0 = r4;
    return r0;
loc_0800D2AA:
    r0 = sub_0800776C(r0, r1, r2, r3); // 0x0800D2AA
    r3 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x0800D518]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r5 + 0x4);
    r5 += 0x8U;
    r2 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r0 -= 0xFU;
    *(u16*)(r4 + 0x4) = (u16)r0;
    r1 -= 0x7U;
    *(u16*)(r4 + 0x6) = (u16)r1;
    *(u16*)(r4 + 0x8) = (u16)r2;
    r0 = 0x08049D98U /* &VTable_08049D98 */; // [0x0800D51C]
    *(u16*)(r4 + 0xA) = (u16)r5;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0xC) = (u32)r3;
    *(u32*)(r4 + 0x10) = (u32)r6;
    r0 = r4;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x28);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800D2E0: BL __call_via_r3
    r0 = 0x08072588U; // [0x0800D520]
    r1 = r4;
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_0801268A(r0, r1, r2, r3); // 0x0800D2EA
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_0800D300(r0, r1, r2, r3);
    r3 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0800D524]
    r0 *= r3;
    r0 = r0 + r1;
    r0 += 0xCU;
    return r0; // BX lr
}

// ROM Address: 0x0800D300..0x0800D302 (2 bytes, Thumb)
u32 sub_0800D300(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (u32)(-(s32)r0);
    return r0;
}

// ROM Address: 0x0800D302..0x0800D32E (44 bytes, Thumb)
u32 sub_0800D302(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x2CU;
    r1 = 0x086F82ECU; // [0x0800D528]
    r0 *= r3;
    r0 = r0 + r1;
    r0 += 0x4U;
    return r0; // BX lr
    r7 = r2;
    r6 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800D32E(r0, r1, r2, r3);
    r0 = 0x80U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800D320: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800D32E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800D32E..0x0800D4D0 (418 bytes, Thumb)
u32 sub_0800D32E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0800D524]
    r0 *= r5;
    r0 = r0 + r1;
    r1 = (u32)(-(s32)r5);
    r3 = 0x2CU;
    r2 = 0x086F82ECU; // [0x0800D528]
    r1 *= r3;
    r1 = r1 + r2;
    stack[12] = r0; // [sp + 0x30]
    r0 += 0xCU;
    r1 += 0x4U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0800D34E;
    r2 = r0;
    goto loc_0800D350;
loc_0800D34E:
    r2 = r1;
loc_0800D350:
    stack[7] = r2; // [sp + 0x1C]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0800D358;
    r0 = r1;
loc_0800D358:
    r1 = r0;
    r0 = 0x20; // sp + 0x20
    r2 = r7;
    r0 = sub_0800DA26(r0, r1, r2, r3); // 0x0800D35E
    r2 = 0x20; // sp + 0x20
    r0 = r4;
    r1 = stack[7]; // [sp + 0x1C]
    r0 = sub_0800D960(r0, r1, r2, r3); // 0x0800D368
    r0 = 0x0804B428U /* &VTable_0804B428 */; // [0x0800D52C]
    r1 = r4;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x30U;
    stack[11] = r0; // [sp + 0x2C]
    r0 += 0x4U;
    stack[10] = r0; // [sp + 0x28]
    *(u32*)(r4 + 0x48) = (u32)r5;
    r2 = *(u32*)(r4 + 0x18);
    r3 = *(u32*)(r4 + 0x1C);
    r2 = (r2 << 8);
    r3 = (r3 << 8);
    *(u32*)(r4 + 0x60) = (u32)r2;
    r0 = 0xFFU;
    r1 += 0x60U;
    r0 += 0x1U;
    *(u32*)(r4 + 0x64) = (u32)r3;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800D390
    r1 = *(u32*)(r6 + 0x4);
    r0 -= 0x80U;
    r0 *= r1;
    r1 = *(u32*)(r6);
    r0 = ((u32)((s32)r0 >> 8));
    r0 = r0 + r1;
    *(u32*)(r4 + 0x68) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800D3A6
    r1 = *(u32*)(r6);
    r0 -= 0x80U;
    r0 *= r1;
    r1 = *(u32*)(r6 + 0x4);
    r0 = ((u32)((s32)r0 >> 8));
    r0 = r0 + r1;
    *(u32*)(r4 + 0x6C) = (u32)r0;
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800D3BA
    r1 = *(u32*)(r4 + 0x68);
    r0 += 0xE0U;
    r0 *= r1;
    r0 = ((u32)((s32)r0 >> 8));
    *(u32*)(r4 + 0x68) = (u32)r0;
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800D3CA
    r1 = *(u32*)(r4 + 0x6C);
    r0 += 0xE0U;
    r0 *= r1;
    r0 = ((u32)((s32)r0 >> 8));
    *(u32*)(r4 + 0x6C) = (u32)r0;
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r7 + 0x4);
    r0 -= 0x8U;
    *(u32*)(r4 + 0x50) = (u32)r0;
    r1 -= 0x6U;
    *(u32*)(r4 + 0x54) = (u32)r1;
    r1 = 0x1U;
    r0 = stack[11]; // [sp + 0x2C]
    r1 = (r1 << 13);
    *(u32*)(r0) = (u32)r1;
    r0 = stack[10]; // [sp + 0x28]
    r1 = (r1 >> 2);
    *(u32*)(r0) = (u32)r1;
    r7 = 0x0U;
    *(u32*)(r4 + 0x38) = (u32)r7;
    r1 = 0x4U;
    r0 = 0xAU;
    *(u32*)(r4 + 0x40) = (u32)r7;
    r0 = sub_08013E38(r0, r1, r2, r3); // 0x0800D3FC
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r5 = r0 + 4;
    r1 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    stack[9] = r1; // [sp + 0x24]
    r6 = *(u16*)(r0 + 0x2);
    r0 = *(u8*)(r5);
    r1 = r0 + 1;
    *(u8*)(r5) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D432;
    r0 = 0x08072588U; // [0x0800D520]
    r1 = r6;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D41A
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r5 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x0800D530]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = stack[9]; // [sp + 0x24]
    r2 = r6;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800D42E: BL 0x08049138
loc_0800D432:
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u32*)(r4 + 0x48);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0800D448;
    r0 = stack[12]; // [sp + 0x30]
    r0 = *(u8*)(r0);
    r0 = (r0 << 29);
    r0 = (r0 >> 31);
    *(u32*)(r4 + 0x44) = (u32)r0;
    goto loc_0800D44A;
loc_0800D448:
    *(u32*)(r4 + 0x44) = (u32)r7;
loc_0800D44A:
    r1 = r4;
    r0 = 0x18; // sp + 0x18
    *(u32*)(r4 + 0x3C) = (u32)r7;
    r0 = sub_0800DB64(r0, r1, r2, r3); // 0x0800D450: BL 0x0800DB64
    r1 = stack[6]; // [sp + 0x18]
    r2 = *(u32*)(r4 + 0x18);
    r0 = r4;
    r1 = r1 - r2;
    r2 = stack[7]; // [sp + 0x1C]
    r3 = *(u32*)(r4 + 0x1C);
    stack[0] = r1; // [sp + 0x0]
    r2 = r2 - r3;
    r3 = r1;
    r1 = stack[8]; // [sp + 0x20]
    stack[1] = r2; // [sp + 0x4]
    r5 = r2;
    r2 = *(u32*)(r4 + 0x18);
    r0 += 0x70U;
    r1 = r1 - r2;
    r2 = stack[9]; // [sp + 0x24]
    r6 = *(u32*)(r4 + 0x1C);
    stack[3] = r5; // [sp + 0xC]
    r2 = r2 - r6;
    stack[1] = r2; // [sp + 0x4]
    stack[5] = r2; // [sp + 0x14]
    r5 = 0x8; // sp + 0x8
    stack[0] = r1; // [sp + 0x0]
    stack[2] = r3; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = *(u32*)(r4 + 0x44);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D4CC;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800D492: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D4BA;
    r0 = sub_0800776C(r0, r1, r2, r3); // 0x0800D49A
    r1 = stack[6]; // [sp + 0x18]
    r2 = stack[7]; // [sp + 0x1C]
    r6 = 0x20; // sp + 0x20
    r1 -= 0xFU;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    *(u16*)(r5 + 0x4) = (u16)r1;
    r2 -= 0x7U;
    *(u16*)(r5 + 0x6) = (u16)r2;
    *(u16*)(r5 + 0x8) = (u16)r3;
    *(u16*)(r5 + 0xA) = (u16)r6;
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = 0x08049D98U /* &VTable_08049D98 */; // [0x0800D51C]
    *(u32*)(r5) = (u32)r0;
    *(u32*)(r5 + 0x10) = (u32)r4;
loc_0800D4BA:
    r0 = 0x08072588U; // [0x0800D520]
    *(u32*)(r4 + 0x3C) = (u32)r5;
    r0 = *(u32*)(r0 + 0x10);
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r5;
loc_0800D4CC:
    r0 = r4;
    return sub_0800D32A(r0, r1, r2, r3);
}

// ROM Address: 0x0800D4D0..0x0800D518 (72 bytes, Thumb)
u32 sub_0800D4D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x0804B428U /* &VTable_0804B428 */; // [0x0800D52C]
    r6 = r1;
    *(u32*)(r5) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4C);
    r4 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r4);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D504;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x0800D534]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0800D504;
    r3 = 0x2U;
    r0 = 0x08072588U; // [0x0800D520]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800D4FA
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_0800D504:
    r1 = 0x0U;
    r0 = r5;
    r0 = Object_Destroy4(r0, r1, r2, r3); // 0x0800D508: BL 0x0800D9F0
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D516;
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800D512: BL 0x0803D63C
loc_0800D516:
    return r0;
}

// ROM Address: 0x0800D518..0x0800D51A (2 bytes, Thumb)
u32 sub_0800D518(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0800CDA4(r0, r1, r2, r3);
}

// ROM Address: 0x0800D578..0x0800D62C (180 bytes, Thumb)
u32 sub_0800D578(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x4);
    r3 = stack[8]; // [sp + 0x20]
    stack[1] = r1; // [sp + 0x4]
    r2 = r2 + r3;
    stack[2] = r2; // [sp + 0x8]
    r0 += 0x8U;
    r3 = *(u32*)(r0);
    r7 = stack[7]; // [sp + 0x1C]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r3 + r7;
    r7 = stack[8]; // [sp + 0x20]
    stack[1] = r3; // [sp + 0x4]
    r0 = r0 + r7;
    stack[2] = r0; // [sp + 0x8]
    r0 = r3;
    r3 = stack[2]; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r1 = 0xC; // sp + 0xC
    stack[5] = r0; // [sp + 0x14]
    r0 = r1;
    stack[4] = r2; // [sp + 0x10]
    stack[6] = r3; // [sp + 0x18]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r7 = 0x24; // sp + 0x24
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r0 = 0x08072588U; // [0x0800D878]
    r5 = r4;
    r5 += 0x60U;
    r0 = *(u32*)(r0 + 0xC);
    r6 = r5 + 4;
    r0 += 0x80U;
    r1 = *(u32*)(r0 + 0x28);
    r0 = 0x24; // sp + 0x24
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0800D5BA
    r7 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800D634(r0, r1, r2, r3);
    r0 = stack[13]; // [sp + 0x34]
    r2 = 0x1C; // sp + 0x1C
    *(u32*)(r5) = (u32)r0;
    r0 = stack[14]; // [sp + 0x38]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[13]; // [sp + 0x34]
    r1 = ((u32)((s32)r0 >> 8));
    r0 = stack[14]; // [sp + 0x38]
    stack[5] = r1; // [sp + 0x14]
    r0 = ((u32)((s32)r0 >> 8));
    stack[7] = r1; // [sp + 0x1C]
    r1 = r2;
    stack[6] = r0; // [sp + 0x18]
    stack[8] = r0; // [sp + 0x20]
    r0 = r4;
    r0 = sub_0800DAE6(r0, r1, r2, r3); // 0x0800D5E2
    r0 = r4;
    r0 += 0x18U;
    r1 = r0;
    r2 = *(u32*)(r4 + 0x18);
    r3 = *(u32*)(r4 + 0x20);
    r1 += 0x8U;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r1 + 0x4);
    r2 = r2 + r3;
    r0 = r0 + r1;
    stack[4] = r0; // [sp + 0x10]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r2 >> 1));
    stack[4] = r0; // [sp + 0x10]
    stack[6] = r0; // [sp + 0x18]
    r0 = r1;
    stack[3] = r2; // [sp + 0xC]
    stack[3] = r1; // [sp + 0xC]
    stack[5] = r1; // [sp + 0x14]
    r1 = *(u32*)(r4 + 0x24);
    r0 -= 0x8U;
    *(u32*)(r4 + 0x50) = (u32)r0;
    r1 -= 0x6U;
    *(u32*)(r4 + 0x54) = (u32)r1;
    r0 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800D634(r0, r1, r2, r3);
    r1 = stack[9]; // [sp + 0x24]
    r2 = stack[10]; // [sp + 0x28]
    r5 = 0x2C; // sp + 0x2C
    r1 -= 0xFU;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    *(u16*)(r0 + 0x4) = (u16)r1;
    r2 -= 0x7U;
    return sub_0800D62E(r0, r1, r2, r3);
}

// ROM Address: 0x0800D62E..0x0800D646 (24 bytes, Thumb)
u32 sub_0800D62E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r0 + 0x6) = (u16)r2;
    *(u16*)(r0 + 0x8) = (u16)r3;
    *(u16*)(r0 + 0xA) = (u16)r5;
    r0 = *(u32*)(r4 + 0x34);
    r2 = 0x0U;
    r0 -= 0x80U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r1 = *(u32*)(r4 + 0x30);
    r1 = r1 + r0;
    *(u32*)(r4 + 0x30) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_0800D666(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0800D648..0x0800D650 (8 bytes, Thumb)
u32 sub_0800D648(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = ((u32)((s32)r1 >> 1));
    *(u32*)(r4 + 0x30) = (u32)r1;
    r5 = *(u32*)(r4 + 0x34);
    r1 = 0x1U;
    return r0;
}

// ROM Address: 0x0800D652..0x0800D6CE (124 bytes, Thumb)
u32 sub_0800D652(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = ((u32)((s32)r5 >> 1));
    r0 = r4;
    r0 += 0x30U;
    r1 = (r1 << 9);
    r3 = r7;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r1;
    *(u32*)(r4 + 0x34) = (u32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_0800D666;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r4 + 0x40) = (u32)r3;
loc_0800D666:
    r5 = 0x08072588U; // [0x0800D878]
    r2 = *(u32*)(r4 + 0x50);
    r0 = *(u32*)(r5 + 0xC);
    r1 = r4;
    r0 += 0x28U;
    r3 = *(u32*)(r0);
    r1 += 0x28U;
    r2 = r2 - r3;
    r3 = *(u32*)(r4 + 0x54);
    r6 = *(u32*)(r0 + 0x4);
    stack[13] = r2; // [sp + 0x34]
    r3 = r3 - r6;
    stack[14] = r3; // [sp + 0x38]
    *(u32*)(r4 + 0x58) = (u32)r2;
    *(u32*)(r4 + 0x5C) = (u32)r3;
    r2 = *(u32*)(r4 + 0x18);
    r3 = *(u32*)(r0);
    r2 = r2 - r3;
    r3 = *(u32*)(r4 + 0x1C);
    r0 = *(u32*)(r0 + 0x4);
    stack[13] = r2; // [sp + 0x34]
    r0 = r3 - r0;
    stack[14] = r0; // [sp + 0x38]
    r0 = r2;
    r2 = stack[14]; // [sp + 0x38]
    *(u32*)r1 = r0; r1 += 4;
    *(u32*)r1 = r2; r1 += 4;
    r0 = *(u32*)(r4 + 0x30);
    r1 = *(u32*)(r4 + 0x2C);
    r0 = ((u32)((s32)r0 >> 10));
    r0 = r1 - r0;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = *(u32*)(r4 + 0x18);
    r0 += 0x18U;
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800D6CE(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800D6CE(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x1C);
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800D6CE(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800D6CE(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800D6CE..0x0800D6D2 (4 bytes, Thumb)
u32 sub_0800D6CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800D6CA(r0, r1, r2, r3);
}

// ROM Address: 0x0800D6D2..0x0800D754 (130 bytes, Thumb)
u32 sub_0800D6D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800DA92(r0, r1, r2, r3); // 0x0800D6D8: BL 0x0800DA92
    r1 = *(u32*)(r5);
    r2 = r1;
    r2 += 0x8U;
    *(u32*)(r5) = (u32)r2;
    r2 = *(u32*)(r4 + 0x4C);
    r5 = 0xFE00FFFFU; // [0x0800D87C]
    r2 = *(u32*)(r2 + 0xC);
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r4 + 0x58);
    r2 &= r5;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r4 + 0x5C);
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r2 = *(u8*)(r4 + 0x8);
    r3 = *(u32*)(r1 + 0x4);
    r5 = 0x3U;
    r2 = (r2 << 26);
    r2 = (r2 >> 30);
    r5 = (r5 << 10);
    r3 &= ~r5;
    r2 = (r2 << 10);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r3 = *(u32*)(r4 + 0x4C);
    r2 = (r2 >> 10);
    r3 = *(u32*)(r3 + 0x8);
    r2 = (r2 << 10);
    r3 = *(u16*)(r3 + 0x2);
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    return r0;
    r6 = r1;
    r5 = 0x08072588U; // [0x0800D878]
    r1 = r0;
    r4 = *(u32*)(r0 + 0x48);
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800D73A
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_0800D754(r0, r1, r2, r3);
    r0 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0800D880]
    r0 *= r4;
    r0 = r0 + r1;
    r2 = r6;
    r1 = r4;
    r0 = sub_0801E164(r0, r1, r2, r3); // 0x0800D74E
    return r0;
}

// ROM Address: 0x0800D754..0x0800D756 (2 bytes, Thumb)
u32 sub_0800D754(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (u32)(-(s32)r4);
    return r0;
}

// ROM Address: 0x0800D756..0x0800D7B4 (94 bytes, Thumb)
u32 sub_0800D756(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08004448(r0, r1, r2, r3); // 0x0800D758
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800D75E: BL 0x0803D5B8
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D772;
    r1 = 0x0804C83CU; // [0x0800D884]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    *(u32*)(r0 + 0xC) = (u32)r4;
loc_0800D772:
    r1 = r0;
    r0 = 0x03001C34U; // [0x0800D888]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D782;
    r2 = r0;
    r2 += 0x18CU;
loc_0800D782:
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x0800D784
    return r0;
    r6 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) return sub_0800D82E(r0, r1, r2, r3);
    r0 = 0x08072588U; // [0x0800D878]
    cmp_lhs = (s32)r6; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) return sub_0800D7F6(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0800D7B4(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) return sub_0800D86A(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x48);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0800D7B0;
    r0 = 0x0U;
loc_0800D7B0:
    return r0;
}

// ROM Address: 0x0800D7B4..0x0800D876 (194 bytes, Thumb)
u32 sub_0800D7B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D7EA;
    r7 = r1 + 4;
    r2 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    stack[1] = r2; // [sp + 0x4]
    r1 = *(u16*)(r1 + 0x2);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u8*)(r7);
    r2 = r1 + 1;
    *(u8*)(r7) = (u8)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D7EA;
    r1 = stack[2]; // [sp + 0x8]
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D7D2
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r7 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x0800D88C]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = 0x4; // sp + 0x4
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800D7E6: BL 0x08049138
loc_0800D7EA:
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_0800DB52(r0, r1, r2, r3); // 0x0800D7F0
    return sub_0800D7B0(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D822;
    r7 = *(u32*)(r1 + 0x8);
    r1 = *(u8*)(r7);
    r1 += 0xFFU;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r7) = (u8)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800D822;
    r1 = *(u16*)(r7 + 0x2);
    r2 = 0x0000FFFFU; // [0x0800D890]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_0800D822;
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r7 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800D818
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r7 + 0x2) = (u16)r0;
loc_0800D822:
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_0800DB52(r0, r1, r2, r3); // 0x0800D828
    return sub_0800D7B0(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x44);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D866;
    r0 = *(u32*)(r4 + 0x18);
    r1 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800D866;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800D866;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800D866;
    r0 = *(u32*)(r5 + 0x4);
    r1 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800D866;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = *(u32*)(r5 + 0x10);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800D85E: BL __call_via_r3
    r0 = 0x1U;
    return sub_0800D7B0(r0, r1, r2, r3);
loc_0800D866:
    r0 = 0x0U;
    return sub_0800D7B0(r0, r1, r2, r3);
    r2 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_0800DB52(r0, r1, r2, r3); // 0x0800D870
    return sub_0800D7B0(r0, r1, r2, r3);
}

// ROM Address: 0x0800D894..0x0800D97C (232 bytes, Thumb)
u32 sub_0800D894(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_0800DB42(r0, r1, r2, r3); // 0x0800D898: BL 0x0800DB42
    r0 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D8D0;
    r4 = *(u32*)(r0 + 0x8);
    r5 = *(u16*)(r0 + 0x2);
    r6 = *(u32*)(r0 + 0x4);
    r0 = *(u8*)(r4);
    r1 = r0 + 1;
    *(u8*)(r4) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D8D0;
    r0 = 0x08072588U; // [0x0800D90C]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D8B8
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r4 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x0800D910]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = r5;
    r1 = r6;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800D8CC: BL 0x08049138
loc_0800D8D0:
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800D904;
    r4 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r4);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800D904;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x0800D914]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0800D904;
    r3 = 0x2U;
    r0 = 0x08072588U; // [0x0800D90C]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800D8FA
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_0800D904:
    r0 = r5;
    r0 = Handle_Release1(r0, r1, r2, r3); // 0x0800D906: BL 0x08011568
    return r0;
    r5 = 0x88U;
    r7 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r0 = r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = sp;
    r5 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0800D926
    r1 = stack[9]; // [sp + 0x24]
    r0 = *(u32*)(r4 + 0x14);
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0800D930
    r0 = 0x0U;
    stack[13] = r0; // [sp + 0x34]
    stack[14] = r0; // [sp + 0x38]
    r0 = *(u32*)(r4 + 0x14);
    r2 = 0x34; // sp + 0x34
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    stack[15] = r1; // [sp + 0x3C]
    stack[16] = r0; // [sp + 0x40]
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0800DCB4]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = r5;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800D950: BL 0x0804915C
    r1 = 0x0U;
    r0 = r5;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0800D958: BL 0x0803F58C
    return r0;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800D97C(r0, r1, r2, r3);
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800D96E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800D97C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800D97C..0x0800D9F0 (116 bytes, Thumb)
u32 sub_0800D97C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r6 + 0x4);
    r5 = *(u32*)(r6);
    r7 = 0x0807259CU; // [0x0800DCBC]
    r5 *= r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800DCB8]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r7);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D98E
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800D9A6;
    r1 = r5;
    r0 = *(u32*)(r7);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800D99A: BL 0x08011732
    r1 = r5;
    r0 = *(u32*)(r7);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800D9A2
loc_0800D9A6:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804A85CU /* &VTable_0804A85C */; // [0x0800DCC0]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r6;
    r0 = *(u32*)(r6 + 0x8);
    *(u32*)(r4 + 0x10) = (u32)r0;
    r1 = stack[4]; // [sp + 0x10]
    r0 = r4;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    r0 += 0x18U;
    *(u32*)(r4 + 0x1C) = (u32)r1;
    *(u32*)(r4 + 0x18) = (u32)r2;
    r2 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r4 + 0x18);
    r5 = *(u32*)(r6);
    r1 = *(u32*)(r6 + 0x4);
    r3 = r3 + r5;
    r0 = r0 + r1;
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    r2 += 0x8U;
    *(u32*)(r2 + 0x4) = (u32)r1;
    *(u32*)(r2) = (u32)r3;
    r0 = *(u32*)(r4 + 0x24);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r4;
    r0 = sub_0800D918(r0, r1, r2, r3); // 0x0800D9E0
    r1 = 0x03001AFCU; // [0x0800DCC4]
    r0 = *(u32*)(r1);
    r0 += 0x1U;
    *(u32*)(r1) = (u32)r0;
    r0 = r4;
    return sub_0800D978(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy4_stores_the_three_tables_and_frees_the_object
// ROM Address: 0x0800D9F0..0x0800DA8E (158 bytes, Thumb)
u32 Object_Destroy4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804A85CU /* &VTable_0804A85C */; // [0x0800DCC0]
    r5 = r1;
    r1 = 0x03001AFCU; // [0x0800DCC4]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r1);
    r0 -= 0x1U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800DCB8]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0800DCC8]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800DA16;
    r0 = 0x0807259CU; // [0x0800DCBC]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800DA12
loc_0800DA16:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800DCCC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800DA24;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800DA20: BL 0x0803D63C
loc_0800DA24:
    return r0;
    r4 = *(u32*)(r1);
    r3 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    r1 = *(u32*)(r1 + 0x4);
    r4 = ((u32)((s32)r4 >> 1));
    r3 = r3 - r4;
    r1 = r2 - r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r3;
    return r0; // BX lr
    r5 = 0x0807259CU; // [0x0800DCBC]
    r3 = *(u32*)(r0 + 0x18);
    r1 = *(u32*)(r5 + 0x4);
    r1 += 0x28U;
    r4 = *(u32*)(r1);
    r2 = r0;
    r3 = r3 - r4;
    r4 = *(u32*)(r0 + 0x1C);
    r1 = *(u32*)(r1 + 0x4);
    stack[0] = r3; // [sp + 0x0]
    r1 = r4 - r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = r3;
    r3 = stack[1]; // [sp + 0x4]
    r2 += 0x28U;
    *(u32*)r2 = r1; r2 += 4;
    *(u32*)r2 = r3; r2 += 4;
    r1 = *(u32*)(r5 + 0x4);
    r2 = *(u32*)(r0 + 0x18);
    r1 += 0x18U;
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0800DA8E(r0, r1, r2, r3);
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x20);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0800DA8E(r0, r1, r2, r3);
    r2 = *(u32*)(r0 + 0x1C);
    r3 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0800DA8E(r0, r1, r2, r3);
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0x24);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0800DA8E(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800DA8E..0x0800DA92 (4 bytes, Thumb)
u32 sub_0800DA8E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800DA88(r0, r1, r2, r3);
}

// ROM Address: 0x0800DA92..0x0800DB3E (172 bytes, Thumb)
u32 sub_0800DA92(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r4 = 0xFE00FFFFU; // [0x0800DCD0]
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x10);
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x28);
    r2 &= r4;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x2C);
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r2 = *(u8*)(r0 + 0x8);
    r3 = *(u32*)(r1 + 0x4);
    r4 = 0x3U;
    r2 = (r2 << 26);
    r2 = (r2 >> 30);
    r4 = (r4 << 10);
    r3 &= ~r4;
    r2 = (r2 << 10);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r0 = *(u16*)(r0 + 0xC);
    r2 = (r2 >> 10);
    r2 = (r2 << 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r0 |= r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    r3 = r1;
    r4 = *(u32*)(r3);
    r3 = *(u32*)(r3 + 0x4);
    *(u32*)(r0 + 0x1C) = (u32)r3;
    *(u32*)(r0 + 0x18) = (u32)r4;
    r1 = r0;
    r1 += 0x18U;
    r2 = *(u32*)(r0 + 0x14);
    r3 = r1;
    r1 = *(u32*)(r0 + 0x1C);
    r5 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    r3 += 0x8U;
    r4 = r4 + r5;
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    r2 = stack[1]; // [sp + 0x4]
    stack[0] = r4; // [sp + 0x0]
    *(u32*)(r3 + 0x4) = (u32)r2;
    *(u32*)(r3) = (u32)r4;
    r1 = *(u32*)(r0 + 0x24);
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r4 = r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800DB26: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800DB36;
    cmp_lhs = (s32)r4; cmp_rhs = 8;
    if (cmp_lhs < cmp_rhs) goto loc_0800DB36;
    r0 = 0x2U;
    return r0;
loc_0800DB36:
    cmp_lhs = (s32)r4; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) return sub_0800DB3E(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0;
}

// ROM Address: 0x0800DB3E..0x0800DB42 (4 bytes, Thumb)
u32 sub_0800DB3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800DB42..0x0800DB60 (30 bytes, Thumb)
u32 sub_0800DB42(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08011818(r0, r1, r2, r3); // 0x0800DB46
    r0 = r4;
    r0 = sub_0800D918(r0, r1, r2, r3); // 0x0800DB4C
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_0800DB60(r0, r1, r2, r3);
    r0 = sub_0800D918(r0, r1, r2, r3); // 0x0800DB58
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800DB60..0x0800DB64 (4 bytes, Thumb)
u32 sub_0800DB60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800DB5E(r0, r1, r2, r3);
}

// ROM Address: 0x0800DB64..0x0800DCF8 (404 bytes, Thumb)
u32 sub_0800DB64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0xFFFFEFD4U; // [0x0800DCD4]
    r4 = r1;
    sp += r3;
    r3 = 0x1000U; // (1 << 12)
    r0 = *(u32*)(r4 + 0x24);
    r3 += sp;
    r1 = *(u32*)(r1 + 0x20);
    *(u32*)(r3 + 0x18) = (u32)r0;
    *(u32*)(r3 + 0x14) = (u32)r1;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r4 + 0x18);
    *(u32*)(r3 + 0x20) = (u32)r0;
    *(u32*)(r3 + 0x1C) = (u32)r1;
    r2 = *(u32*)(r4 + 0x20);
    r3 = *(u32*)(r4 + 0x18);
    r0 = *(u32*)(r4 + 0x1C);
    r2 = r2 - r3;
    r3 = 0x1U;
    r1 = *(u32*)(r4 + 0x24);
    r3 = (r3 << 12);
    r3 += sp;
    r0 = r1 - r0;
    *(u32*)(r3 + 0x8) = (u32)r0;
    *(u32*)(r3 + 0x4) = (u32)r2;
    r1 = *(u32*)(r3 + 0x8);
    *(u32*)(r3 + 0x10) = (u32)r1;
    *(u32*)(r3 + 0xC) = (u32)r2;
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0800DCB4]
    r3 = *(u32*)(r3 + 0x10);
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = 0xC; // sp + 0xC
    r2 *= r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800DBAC: BL 0x08049138
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x10);
    r1 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800DC92;
    r6 = r3;
    r6 += 0x18U;
    *(u32*)(r3 + 0x28) = (u32)r6;
    r6 += 0x4U;
    r0 = r6 + 4;
    lr = r0;
    *(u32*)(r3 + 0x24) = (u32)r6;
loc_0800DBCC:
    r0 = (r1 << 29);
    r0 = (r0 >> 29);
    r12 = r0;
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x1000U; // (1 << 12)
    r0 = r0 + r1;
    stack[2] = r0; // [sp + 0x8]
    r3 += sp;
    r2 = *(u32*)(r3 + 0xC);
    r0 = 0x0U;
    r7 = ((u32)((s32)r1 >> 3));
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800DC84;
loc_0800DBE8:
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r6 = *(u32*)(r3 + 0x10);
    r2 = ((u32)((s32)r0 >> 3));
    r6 *= r7;
    r3 = r6;
    r3 += r12;
    r6 = (r3 << 3);
    r2 = (r2 << 6);
    r5 = (r0 << 29);
    r5 = (r5 >> 29);
    r2 = r6 + r2;
    r2 = r2 + r5;
    r5 = 0xC; // sp + 0xC
    r2 = *(u8*)(r5 + r2);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800DC76;
    r2 = *(u32*)(r4 + 0x18);
    r3 = 0x1000U; // (1 << 12)
    r2 = r2 + r0;
    stack[1] = r2; // [sp + 0x4]
    r3 += sp;
    r5 = *(u32*)(r3 + 0x14);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0800DC22;
    r3 += 0x14U;
    goto loc_0800DC24;
loc_0800DC22:
    r3 = 0x4; // sp + 0x4
loc_0800DC24:
    r5 = *(u32*)(r3);
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    *(u32*)(r3 + 0x14) = (u32)r5;
    r5 = *(u32*)(r3 + 0x18);
    r6 = *(u32*)(r3 + 0x28);
    r3 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0800DC3A;
    r6 = 0x8; // sp + 0x8
loc_0800DC3A:
    r3 = 0x1000U; // (1 << 12)
    r5 = *(u32*)(r6);
    r3 += sp;
    *(u32*)(r3 + 0x18) = (u32)r5;
    r6 = *(u32*)(r3 + 0x24);
    r2 += 0x1U;
    stack[0] = r2; // [sp + 0x0]
    r5 = *(u32*)(r3 + 0x1C);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800DC52;
    r6 = sp;
loc_0800DC52:
    r3 = 0x1000U; // (1 << 12)
    r2 = *(u32*)(r6);
    r3 += sp;
    *(u32*)(r3 + 0x1C) = (u32)r2;
    r2 = stack[2]; // [sp + 0x8]
    r6 = lr;
    r2 += 0x1U;
    stack[0] = r2; // [sp + 0x0]
    r5 = *(u32*)(r3 + 0x20);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800DC6C;
    r6 = sp;
loc_0800DC6C:
    r3 = 0x1000U; // (1 << 12)
    r2 = *(u32*)(r6);
    r3 += sp;
    *(u32*)(r3 + 0x20) = (u32)r2;
loc_0800DC76:
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r2 = *(u32*)(r3 + 0xC);
    r0 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0800DBE8;
loc_0800DC84:
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x10);
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0800DBCC;
loc_0800DC92:
    r3 = 0x1000U; // (1 << 12)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x18);
    r1 = *(u32*)(r3 + 0x20);
    r0 = r0 + r1;
    r0 = ((u32)((s32)r0 >> 1));
    *(u32*)(r3 + 0x18) = (u32)r0;
    r0 = r3;
    r0 += 0x14U;
    r4 = *(u32*)(r3 + 0x2C);
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    r3 = 0x00001034U; // [0x0800DCD8]
    sp += r3;
    return r0;
    r0 = r0;
    r0 = r0;
    r1 = (r0 << 24);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r5 = 0x9CU;
    r7 = (r0 >> 32);
    r0 = 0x170; // sp + 0x170
    r4 = (r0 >> 32);
    r4 = r7 - r3;
    r0 = (r0 << 12);
    r0 = r0;
    return sub_0800D578(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = ((u32)((s32)r6 >> 32));
    r0 = r0;
    r7 = r2;
    r6 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800DCF8(r0, r1, r2, r3);
    r0 = 0x84U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800DCEC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800DCF8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800DCF8..0x0800DD10 (24 bytes, Thumb)
u32 sub_0800DCF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r6;
    r2 = r7;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x4);
    r0 = sub_0800D30E(r0, r1, r2, r3); // 0x0800DD00
    r0 = 0x0804C508U /* &VTable_0804C508 */; // [0x0800DD28]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x80U;
    *(u32*)(r0 + r4) = r5;
    r0 = r4;
    return sub_0800DCF6(r0, r1, r2, r3);
}

// ROM Address: 0x0800DD10..0x0800DE0E (254 bytes, Thumb)
u32 sub_0800DD10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x80U;
    r4 = *(u32*)(r2 + r0);
    r0 = sub_0800D72E(r0, r1, r2, r3); // 0x0800DD16
    r0 = r4;
    r0 += 0x10U;
    r1 = *(u32*)(r4 + 0x10);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800DD20: BL 0x08046AA2
    return r0;
    r0 = r0;
    *(u32*)r5 = r3; r5 += 4;
    r4 = (r0 >> 32);
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800DD44;
    r0 = 0x44U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800DD38: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800DD44;
    r0 = r4;
    return r0;
loc_0800DD44:
    r0 = *(u32*)(r5 + 0x4);
    r3 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0800DE1C]
    r0 *= r3;
    r1 = r0 + r1;
    r2 = r5;
    r2 += 0x8U;
    r1 += 0xCU;
    r0 = r4;
    r0 = sub_0800D960(r0, r1, r2, r3); // 0x0800DD56
    r0 = 0x0804A314U /* &VTable_0804A314 */; // [0x0800DE20]
    r1 = r4;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x30) = (u32)r5;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 += 0x34U;
    r5 = r0;
    r0 = sub_0800DB64(r0, r1, r2, r3); // 0x0800DD6C: BL 0x0800DB64
    r0 = 0x080725A4U; // [0x0800DE24]
    r2 = 0x0U;
    r0 = *(u32*)(r0 + 0x4);
    r6 = r0;
    r6 += 0x80U;
    r1 = *(u32*)(r6 + 0x28);
    r0 = r5;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800DD7E
    r2 = 0x0U;
    r0 = r5;
    r1 = *(u32*)(r6 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800DD88
    r0 = r4;
    return r0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_0800DE12(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r2 + 0x8);
    r6 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800DE0E(r0, r1, r2, r3);
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800DE0E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x38);
    r1 = *(u32*)(r6 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800DE0E(r0, r1, r2, r3);
    r0 = *(u32*)(r6 + 0x4);
    r1 = *(u32*)(r4 + 0x40);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800DE0E(r0, r1, r2, r3);
    r7 = *(u32*)(r4 + 0x30);
    r3 = 0x34U;
    r0 = *(u32*)(r7 + 0x4);
    r1 = 0x083BD2F8U; // [0x0800DE1C]
    r0 *= r3;
    r0 = r0 + r1;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x080725A4U; // [0x0800DE24]
    r5 = r4 + r3;
    r0 = *(u32*)(r0 + 0x4);
    r2 = 0x1U;
    r0 += 0x80U;
    stack[2] = r0; // [sp + 0x8]
    r1 = *(u32*)(r0 + 0x28);
    r0 = r5;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800DDDA
    r0 = stack[2]; // [sp + 0x8]
    r2 = 0x1U;
    r1 = *(u32*)(r0 + 0x30);
    r0 = r5;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800DDE6
    r0 = 0x080725A4U; // [0x0800DE24]
    r1 = r4;
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800DDF0
    r2 = *(u32*)(r6 + 0x10);
    r1 = *(u32*)(r7 + 0x4);
    r0 = stack[1]; // [sp + 0x4]
    r0 = sub_0801E164(r0, r1, r2, r3); // 0x0800DDFA
    r0 = r7;
    r0 += 0x10U;
    r1 = *(u32*)(r7 + 0x10);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800DE04: BL 0x08046AA2
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800DE0E..0x0800DE14 (6 bytes, Thumb)
u32 sub_0800DE0E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800DE0A(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800DE1A..0x0800DE40 (38 bytes, Thumb)
u32 sub_0800DE1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0800DE10(r0, r1, r2, r3);
    r3 = (r7 >> 32);
    r3 = 0x0800DE74U;
    r4 = (r0 >> 32);
    r5 = 0xA4U;
    r7 = (r0 >> 32);
    r2 = r0;
    r0 = r1;
    r1 = *(u8*)(r2 + 0x4);
    r1 += 0xFFU;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r2 + 0x4) = (u8)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800DE40(r0, r1, r2, r3);
    r0 = sub_0800EDA6(r0, r1, r2, r3); // 0x0800DE3A
    return r0;
}

// ROM Address: 0x0800DE40..0x0800DE54 (20 bytes, Thumb)
u32 sub_0800DE40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 >> 2);
    r2 = 0x080725ACU; // [0x0800DE5C]
    r1 = (r1 << 2);
    r1 = *(u32*)(r2 + r1);
    r2 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) return sub_0800DE3E(r0, r1, r2, r3);
    r0 = sub_0800EECC(r0, r1, r2, r3); // 0x0800DE4E: BL 0x0800EECC
    return sub_0800DE3E(r0, r1, r2, r3);
}

// ROM Address: 0x0800DE54..0x0800DE90 (60 bytes, Thumb)
u32 sub_0800DE54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800DE56: BL 0x0803D63C
    return r0;
    r5 = 0xACU;
    r7 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r2 = *(u16*)(r1 + 0x12);
    r2 += 0x1U;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r2;
    r3 = *(u8*)(r0 + 0x4);
    r2 >>= (r3 & 0xFF);
    r3 = *(u32*)(r1 + 0x50);
    r3 = *(u32*)(r3);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) return sub_0800DE90(r0, r1, r2, r3);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x24);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800DE8A: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0800DE90..0x0800DE94 (4 bytes, Thumb)
u32 sub_0800DE90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return sub_0800DE8E(r0, r1, r2, r3);
}

// ROM Address: 0x0800DE94..0x0800DFA8 (276 bytes, Thumb)
u32 sub_0800DE94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800DEA0: BL __call_via_r3
    return r0;
    r0 = r1;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0800DEAA: BL 0x0800EE78
    return r0;
    r2 = *(u16*)(r1 + 0x12);
    r2 += 0x1U;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = *(u8*)(r0 + 0x4);
    r2 >>= (r0 & 0xFF);
    r0 = *(u32*)(r1 + 0x50);
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800DECC;
    r0 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r2 = 0x0U;
loc_0800DECC:
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r0 = r1;
    r1 = 0x03001B00U; // [0x0800E064]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0800DED6
    return r0;
    r0 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    *(u8*)(r1 + 0x11) = (u8)r0;
    r0 = 0x24U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    return r0; // BX lr
    r4 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r4;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r4;
    r0 = 0x080725B8U; // [0x0800E068]
    r1 = 0x083192A8U; // [0x0800E06C]
    r5 = *(u32*)(r0);
    r0 = 0x258U; // (75 << 3)
    r6 = r0 + r1;
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800DF02
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 = r6 + r0;
    r0 = 0x000005C4U; // [0x0800E070]
    r3 = r4;
    r2 = 0x40U;
    r0 = r5 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800DF16
    return r0;
    r4 = r1;
    r0 = *(u8*)(r1 + 0x10);
    r1 = 0x080725B8U; // [0x0800E068]
    r5 = r4;
    r5 += 0xFFU;
    r1 += 0x8U;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r5 += 0xA1U;
    r1 = *(u32*)(r5 + 0x4);
    r2 = *(u32*)(r5);
    stack[4] = r1; // [sp + 0x10]
    r1 = r2;
    stack[3] = r2; // [sp + 0xC]
    r2 = *(u32*)(r0);
    r1 = r1 - r2;
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r0 + 0x4);
    r0 = r1 - r0;
    stack[4] = r0; // [sp + 0x10]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800DF52: BL 0x08046AA2
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[4]; // [sp + 0x10]
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x080725B8U; // [0x0800E068]
    stack[2] = r1; // [sp + 0x8]
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x4; // sp + 0x4
    r2 = r5 - 4;
    r0 = sub_080097C2(r0, r1, r2, r3); // 0x0800DF6A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800DF7A;
    r0 = stack[3]; // [sp + 0xC]
    *(u32*)(r5) = (u32)r0;
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r5 + 0x4) = (u32)r1;
loc_0800DF7A:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x40);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800DF82: BL 0x08046AA2
    return r0;
    r0 = *(u32*)(r1 + 0x50);
    r2 = *(u32*)(r0);
    r0 = *(u16*)(r1 + 0x12);
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = (r0 >> 5);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) return sub_0800DFA8(r0, r1, r2, r3);
    r0 = 0x40U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = 0x2U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return r0; // BX lr
}

// ROM Address: 0x0800DFA8..0x0800DFAC (4 bytes, Thumb)
u32 sub_0800DFA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return r0; // BX lr
}

// ROM Address: 0x0800DFAC..0x0800DFD4 (40 bytes, Thumb)
u32 sub_0800DFAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800DFB8: BL __call_via_r3
    return r0;
    r4 = r1;
    r0 = 0xFFU;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0800DFC4
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x0800DFD4..0x0800DFF2 (30 bytes, Thumb)
u32 sub_0800DFD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u16*)(r1 + 0x12);
    r0 = *(u32*)(r1 + 0x50);
    r2 += 0x1U;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    r0 = *(u32*)(r0);
    *(u16*)(r1 + 0x12) = (u16)r2;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0800DFF8(r0, r1, r2, r3);
    r0 = (r2 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 240;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0800DFF2(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0800DFF4(r0, r1, r2, r3);
}

// ROM Address: 0x0800DFF2..0x0800E02A (56 bytes, Thumb)
u32 sub_0800DFF2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u8*)(r1 + 0x11) = (u8)r0;
loc_0800DFF6:
    return r0; // BX lr
    r2 = (r2 << 21);
    r2 = (r2 >> 24);
    *(u8*)(r1 + 0x11) = (u8)r2;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) goto loc_0800DFF6;
    r0 = 0x0U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    *(u16*)(r1 + 0x12) = (u16)r0;
    return r0; // BX lr
    r2 = *(u16*)(r1 + 0x12);
    r2 += 0x1U;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 160;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0800E030(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 176;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0800E02A(r0, r1, r2, r3);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x24);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E024: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0800E02A..0x0800E044 (26 bytes, Thumb)
u32 sub_0800E02A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x4U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return sub_0800E028(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0800E03A;
    r0 = (r2 >> 4);
    *(u8*)(r1 + 0x11) = (u8)r0;
    return sub_0800E028(r0, r1, r2, r3);
loc_0800E03A:
    r0 = (r2 << 27);
    r0 = (r0 >> 31);
    r0 += 0x2U;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return sub_0800E028(r0, r1, r2, r3);
}

// ROM Address: 0x0800E044..0x0800E0F0 (172 bytes, Thumb)
u32 sub_0800E044(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = 0x03001B00U; // [0x0800E064]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0800E04A
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E05C: BL __call_via_r3
    return r0;
    r0 = r0;
    r0 = r0 - r4;
    r0 = (r0 << 12);
    r5 = 0xB8U;
    r7 = (r0 >> 32);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r2 = r1;
    r2 += 0x4CU;
    r3 = *(u16*)(r2);
    r2 = r0;
    r2 += 0x1A0U;
    *(u16*)(r2 + 0x10) = (u16)r3;
    r3 = r1;
    r3 += 0x4EU;
    r3 = *(u16*)(r3);
    *(u16*)(r2 + 0x12) = (u16)r3;
    r3 = r1;
    r3 += 0x50U;
    r3 = *(u16*)(r3);
    *(u16*)(r2 + 0x14) = (u16)r3;
    r3 = r1;
    r3 += 0x52U;
    r3 = *(u16*)(r3);
    *(u16*)(r2 + 0x16) = (u16)r3;
    r3 = 0x80U;
    r2 += 0x10U;
    *(u8*)(r2 + 0x8) = (u8)r3;
    r4 = r1;
    r4 += 0x60U;
    *(u8*)(r2 + 0x9) = (u8)r3;
    r3 = *(u16*)(r4);
    r2 += 0x10U;
    r5 = 0x5CU;
    *(u32*)(r2) = (u32)r3;
    r5 = (u32)(*(s16*)(r5 + r1));
    r3 = r4 + 7;
    *(u32*)(r2 + 0x4) = (u32)r5;
    r3 = *(u8*)(r3);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E0C0;
    r3 = 0x1U;
    goto loc_0800E0C2;
loc_0800E0C0:
    r3 = 0x0U;
loc_0800E0C2:
    r1 += 0x54U;
    *(u32*)(r2 + 0xC) = (u32)r3;
    r1 = *(u16*)(r1);
    r3 = (r1 << 2);
    r2 = 0x200U; // (1 << 9)
    r1 = r3 + r1;
    r2 = r0 + r2;
    r1 += 0x66U;
    *(u32*)(r2 + 0x38) = (u32)r1;
    r1 += 0x140U;
    *(u32*)(r2 + 0x3C) = (u32)r1;
    r3 = 0x6U;
    r1 = (u32)(*(s8*)(r4 + r3));
    r3 = 0x290U; // (41 << 4)
    r1 *= r3;
    r0 += 0x180U;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x0800E0F0..0x0800E0F4 (4 bytes, Thumb)
u32 sub_0800E0F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002B44U; // [0x0800E398]
    return r0; // BX lr
}

// ROM Address: 0x0800E0F4..0x0800E24A (342 bytes, Thumb)
u32 sub_0800E0F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E102: BL 0x08046AA2
    r1 = r0;
    r1 += 0x16U;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E15A;
    r3 = 0x64U;
    r3 = *(u16*)(r3 + r0);
    r2 = *(u32*)(r4 + 0x8);
    r2 = r2 + r3;
    *(u32*)(r4 + 0x8) = (u32)r2;
    r3 = (r2 >> 8);
    if (cmp_lhs == cmp_rhs) goto loc_0800E15A;
    r2 = ((u32)((s32)r2 >> 8));
    r3 = 0x0U;
    r5 = (u32)(*(s16*)(r1 + r3));
    r5 = r5 + r2;
    r3 = 0x2U;
    r6 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) goto loc_0800E136;
    r2 = *(u16*)(r1 + 0x2);
    *(u16*)(r1) = (u16)r2;
    goto loc_0800E148;
loc_0800E136:
    r3 = *(u16*)(r1);
    r2 = r3 + r2;
    r2 = (r2 << 16);
    r2 = ((u32)((s32)r2 >> 16));
loc_0800E13E:
    *(u16*)(r1) = (u16)r2;
    r3 = 0x0U;
    r5 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0800E13E;
loc_0800E148:
    r1 = *(u32*)(r4 + 0x8);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u32*)(r4 + 0x8) = (u32)r1;
    r1 = *(u8*)(r0 + 0x13);
    r1 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0800E15A;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0800E156
loc_0800E15A:
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E16C: BL 0x08046AA2
    r1 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800E17A;
    r1 -= 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_0800E17A:
    r1 = r0;
    r1 += 0x16U;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E1AA;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E1AA;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E196: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r2 = 0x70; // sp + 0x70
    r1 = 0x0877D028U /* EventPoolRecord */; // [0x0800E39C]
    r0 = (r0 >> 8);
    stack[28] = r0; // [sp + 0x70]
    r0 = 0x4; // sp + 0x4
    r0 = sub_08004098(r0, r1, r2, r3); // 0x0800E1A6: BL 0x08004098
loc_0800E1AA:
    return r0;
    r5 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E1BC: BL 0x08046AA2
    r4 = r0;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0800E1C2
    r1 = r4;
    r0 = r5;
    r0 = sub_0800E074(r0, r1, r2, r3); // 0x0800E1CA
    return r0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E0F4(r0, r1, r2, r3); // 0x0800E1D6: BL 0x0800E0F4
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E1E4: BL 0x08046AA2
    r5 = r0;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x0800E3A0]
    r6 = 0x9FU;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r6 = (r6 << 3);
    r7 = 0x080725E0U; // [0x0800E3A4]
    r1 = (r0 << 31);
    r1 = (r1 >> 31);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E21C;
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0800E21C;
    r0 = *(u32*)(r7 + 0x4);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r0 = r0 + r6;
    r0 = sub_08013E06(r0, r1, r2, r3); // 0x0800E218
loc_0800E21C:
    r0 = *(u32*)(r4 + 0xC);
    r0 += 0x6EU;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = (r0 >> 16);
    if (cmp_lhs == cmp_rhs) return sub_0800E2F0(r0, r1, r2, r3);
    r0 = r5;
    r0 += 0x1AU;
    r1 = r0 + 2;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r1 + r3));
    r3 = 0x000007AEU; // [0x0800E3A8]
    r1 *= r3;
    r1 = ((u32)((s32)r1 >> 16));
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r0 + r3));
    r2 = r2 + r1;
    r3 = 0x2U;
    r5 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) return sub_0800E24A(r0, r1, r2, r3);
    r1 = *(u16*)(r0 + 0x2);
    *(u16*)(r0) = (u16)r1;
    return sub_0800E25C(r0, r1, r2, r3);
}

// ROM Address: 0x0800E24A..0x0800E25C (18 bytes, Thumb)
u32 sub_0800E24A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u16*)(r0);
    r1 = r2 + r1;
    r1 = (r1 << 16);
    r1 = ((u32)((s32)r1 >> 16));
loc_0800E252:
    *(u16*)(r0) = (u16)r1;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800E252;
    return r0;
}

// ROM Address: 0x0800E25C..0x0800E29A (62 bytes, Thumb)
u32 sub_0800E25C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r7 = 0x080725E0U; // [0x0800E3A4]
    r1 = *(u32*)(r7 + 0x4);
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) return sub_0800E2E2(r0, r1, r2, r3);
    r2 = 0x68U;
    r1 = *(u32*)(r7 + 0x4);
    r2 *= r0;
    r6 = 0x4F8U; // (159 << 3)
    r1 = r2 + r1;
    r2 = r1 + r6;
    r1 = r2;
    r1 += 0x1AU;
    r5 = r1 + 2;
    r3 = 0x0U;
    r5 = (u32)(*(s16*)(r5 + r3));
    r3 = 0x00000CCDU; // [0x0800E3AC]
    r3 *= r5;
    r5 = ((u32)((s32)r3 >> 16));
    r3 = 0x0U;
    r6 = (u32)(*(s16*)(r1 + r3));
    r6 = r6 + r5;
    r3 = 0x2U;
    r7 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) return sub_0800E29A(r0, r1, r2, r3);
    r3 = *(u16*)(r1 + 0x2);
    *(u16*)(r1) = (u16)r3;
    return sub_0800E2AC(r0, r1, r2, r3);
}

// ROM Address: 0x0800E29A..0x0800E2D0 (54 bytes, Thumb)
u32 sub_0800E29A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u16*)(r1);
    r3 = r3 + r5;
    r5 = (r3 << 16);
    r5 = ((u32)((s32)r5 >> 16));
loc_0800E2A2:
    *(u16*)(r1) = (u16)r5;
    r3 = 0x0U;
    r6 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_0800E2A2;
    r1 = r2;
    r1 += 0x16U;
    r2 += 0x18U;
    r3 = 0x0U;
    r2 = (u32)(*(s16*)(r2 + r3));
    r3 = 0x00000CCDU; // [0x0800E3AC]
    r2 *= r3;
    r2 = ((u32)((s32)r2 >> 16));
    r3 = 0x0U;
    r5 = (u32)(*(s16*)(r1 + r3));
    r5 = r5 + r2;
    r3 = 0x2U;
    r6 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs <= cmp_rhs) return sub_0800E2D0(r0, r1, r2, r3);
    r2 = *(u16*)(r1 + 0x2);
    *(u16*)(r1) = (u16)r2;
    return sub_0800E2E2(r0, r1, r2, r3);
}

// ROM Address: 0x0800E2D0..0x0800E4C2 (498 bytes, Thumb)
u32 sub_0800E2D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u16*)(r1);
    r2 = r3 + r2;
    r2 = (r2 << 16);
    r2 = ((u32)((s32)r2 >> 16));
loc_0800E2D8:
    *(u16*)(r1) = (u16)r2;
    r3 = 0x0U;
    r5 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0800E2D8;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if (cmp_lhs < cmp_rhs) return sub_0800E25E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0xC);
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u32*)(r4 + 0xC) = (u32)r0;
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E300: BL 0x08046AA2
    r5 = r0;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0800E306
    r1 = r5;
    r0 = r4;
    r0 = sub_0800E074(r0, r1, r2, r3); // 0x0800E30E
    r0 = r4;
    r0 += 0x1A0U;
    r1 = *(u16*)(r0 + 0x10);
    r1 += 0x5U;
    *(u16*)(r0 + 0x10) = (u16)r1;
    r1 = *(u16*)(r0 + 0x12);
    r1 += 0x5U;
    *(u16*)(r0 + 0x12) = (u16)r1;
    r1 = *(u16*)(r0 + 0x14);
    r1 += 0x5U;
    *(u16*)(r0 + 0x14) = (u16)r1;
    r1 = *(u16*)(r0 + 0x16);
    r1 += 0x5U;
    *(u16*)(r0 + 0x16) = (u16)r1;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r1 = *(u32*)(r0 + 0x38);
    r1 += 0x80U;
    *(u32*)(r0 + 0x38) = (u32)r1;
    r1 = *(u32*)(r0 + 0x3C);
    r1 += 0x80U;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E352: BL 0x08046AA2
    r5 = r0;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0800E358
    r1 = r5;
    r0 = r4;
    r0 = sub_0800E074(r0, r1, r2, r3); // 0x0800E360
    r0 = r4;
    r0 += 0x1A0U;
    r1 = *(u16*)(r0 + 0x10);
    r1 += 0x5U;
    *(u16*)(r0 + 0x10) = (u16)r1;
    r1 = *(u16*)(r0 + 0x12);
    r1 += 0x5U;
    *(u16*)(r0 + 0x12) = (u16)r1;
    r1 = *(u16*)(r0 + 0x14);
    r1 += 0x5U;
    *(u16*)(r0 + 0x14) = (u16)r1;
    r1 = *(u16*)(r0 + 0x16);
    r1 += 0x5U;
    *(u16*)(r0 + 0x16) = (u16)r1;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r1 = *(u32*)(r0 + 0x38);
    r1 += 0x80U;
    *(u32*)(r0 + 0x38) = (u32)r1;
    r1 = *(u32*)(r0 + 0x3C);
    r1 += 0x80U;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    return r0;
    r0 = r0;
    cmp_lhs = (s32)r3; cmp_rhs = 68;
    r0 = (r0 << 12);
    if (cmp_lhs == cmp_rhs) goto loc_0800E3F0;
    r7 = (r6 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r5 = 0xE0U;
    r7 = (r0 >> 32);
    r6 = (r5 << 30);
    r0 = r0;
    r5 = (r1 >> 19);
    r0 = r0;
    return sub_0800E1D0(r0, r1, r2, r3);
    r0 = 0x080725E0U; // [0x0800E624]
    r1 = 0x51U;
    r2 = 0x083192A8U; // [0x0800E628]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r4 = 0x000005C4U; // [0x0800E62C]
    r0 = *(u32*)(r0);
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800E3C8
    return r0;
    r1 = 0x51U;
    r2 = 0x083192A8U; // [0x0800E628]
    r1 = (r1 << 3);
    r0 = 0x080725E0U; // [0x0800E624]
    r1 = r1 + r2;
    r0 = *(u32*)(r0);
    r2 = 0x000005C4U; // [0x0800E62C]
    r0 = r0 + r2;
    r0 = sub_0803E302(r0, r1, r2, r3); // 0x0800E3E0
    return r0;
    r5 = r0;
    r4 = r1;
    r0 = sub_0800E1D0(r0, r1, r2, r3); // 0x0800E3EC
loc_0800E3F0:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x18);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E3F8: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E46E;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0xAU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E40A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E46E;
    r1 = 0x00000CCDU; // [0x0800E630]
    r0 = *(u32*)(r5 + 0x14);
    r0 = r0 + r1;
    *(u32*)(r5 + 0x14) = (u32)r0;
    r0 = (r0 >> 16);
    if (cmp_lhs == cmp_rhs) goto loc_0800E46E;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E428: BL 0x08046AA2
    r1 = r0;
    r1 += 0x1EU;
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E44E;
    r0 = r1;
    r1 = *(u16*)(r1);
    r1 = *(u16*)(r0);
    r2 = 0x1U;
    r1 = r1 - r2;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_0800E444:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800E444;
    goto loc_0800E466;
loc_0800E44E:
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E466;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x18U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E462: BL __call_via_r3
loc_0800E466:
    r0 = *(u32*)(r5 + 0x14);
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u32*)(r5 + 0x14) = (u32)r0;
loc_0800E46E:
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E47E: BL 0x08046AA2
    r5 = r0;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0800E484
    r1 = r5;
    r0 = r4;
    r0 = sub_0800E074(r0, r1, r2, r3); // 0x0800E48C
    r0 = r4;
    r0 += 0x1A0U;
    r1 = *(u16*)(r0 + 0x10);
    r1 += 0xFU;
    *(u16*)(r0 + 0x10) = (u16)r1;
    r1 = *(u16*)(r0 + 0x12);
    r1 += 0xFU;
    *(u16*)(r0 + 0x12) = (u16)r1;
    r1 = *(u16*)(r0 + 0x14);
    r1 += 0xFU;
    *(u16*)(r0 + 0x14) = (u16)r1;
    r1 = *(u16*)(r0 + 0x16);
    r1 += 0xFU;
    *(u16*)(r0 + 0x16) = (u16)r1;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r1 = *(u32*)(r0 + 0x38);
    r1 += 0xC0U;
    *(u32*)(r0 + 0x38) = (u32)r1;
    r1 = *(u32*)(r0 + 0x3C);
    r1 += 0xC0U;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    return r0;
}

// ROM Address: 0x0800E4C2..0x0800E4C4 (2 bytes, Thumb)
u32 sub_0800E4C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0800E1D0(r0, r1, r2, r3);
}

// ROM Address: 0x0800E4C4..0x0800E66E (426 bytes, Thumb)
u32 sub_0800E4C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E1D0(r0, r1, r2, r3); // 0x0800E4CA
    r0 = *(u32*)(r5 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x18);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E4D6: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E54E;
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E4E8: BL 0x08046AA2
    r1 = r0;
    r1 += 0x1CU;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r1 + r3));
    r3 = 0x16U;
    r2 = *(u32*)(r4 + 0x14);
    r1 *= r3;
    r1 = r1 + r2;
    r2 = 0x00003333U; // [0x0800E634]
    r1 = r1 + r2;
    *(u32*)(r4 + 0x14) = (u32)r1;
    r2 = (r1 >> 16);
    if (cmp_lhs == cmp_rhs) goto loc_0800E54E;
    r2 = ((u32)((s32)r1 >> 16));
    r1 = r0;
    r1 += 0x20U;
    r3 = *(u16*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0800E524;
    r0 = *(u16*)(r1);
    r0 = r0 - r2;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_0800E51A:
    *(u16*)(r1) = (u16)r0;
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E51A;
    goto loc_0800E546;
loc_0800E524:
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E546;
    r0 = 0x0U;
loc_0800E530:
    *(u16*)(r1) = (u16)r0;
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E530;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x18U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E542: BL __call_via_r3
loc_0800E546:
    r0 = *(u32*)(r4 + 0x14);
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u32*)(r4 + 0x14) = (u32)r0;
loc_0800E54E:
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E55E: BL 0x08046AA2
    r5 = r0;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0800E564
    r1 = r5;
    r0 = r4;
    r0 = sub_0800E074(r0, r1, r2, r3); // 0x0800E56C
    r0 = 0x238U; // (71 << 3)
    r5 = r4 + r0;
    r1 = *(u32*)(r5);
    r0 = 0x4U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0800E57A: BL 0x08046E58
    *(u32*)(r5) = (u32)r0;
    r0 = 0x23CU; // (143 << 2)
    r4 = r4 + r0;
    r1 = *(u32*)(r4);
    r0 = 0x4U;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0800E58A: BL 0x08046E58
    *(u32*)(r4) = (u32)r0;
    return r0;
    r4 = r1;
    r1 = *(u32*)(r0 + 0xC);
    r1 -= 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0800E5BE;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x17U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E5A8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E5BE;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x17U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E5BA: BL __call_via_r3
loc_0800E5BE:
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E5CE: BL 0x08046AA2
    r5 = r0;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0800E5D4
    r1 = r5;
    r0 = r4;
    r0 = sub_0800E074(r0, r1, r2, r3); // 0x0800E5DC
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r1 = *(u32*)(r0 + 0x38);
    r1 += 0x40U;
    *(u32*)(r0 + 0x38) = (u32)r1;
    r1 = *(u32*)(r0 + 0x3C);
    r1 += 0x40U;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    return r0;
    r4 = r1;
    r1 = *(u32*)(r0 + 0xC);
    r1 -= 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0800E620;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x18U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E60A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E620;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x18U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E61C: BL __call_via_r3
loc_0800E620:
    return r0;
    r0 = r0;
    r5 = 0xE0U;
    r7 = (r0 >> 32);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r5 = (r1 >> 19);
    r0 = r0;
    r3 += 0x33U;
    r0 = r0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E1D0(r0, r1, r2, r3); // 0x0800E640
    r0 = *(u32*)(r4 + 0x10);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0800E66A;
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800E656: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r2 = 0x6C; // sp + 0x6C
    r1 = 0x0877D028U /* EventPoolRecord */; // [0x0800E6B0]
    r0 = (r0 >> 8);
    stack[27] = r0; // [sp + 0x6C]
    r0 = sp;
    r0 = sub_08004098(r0, r1, r2, r3); // 0x0800E666: BL 0x08004098
loc_0800E66A:
    return r0;
}

// ROM Address: 0x0800E66E..0x0800E672 (4 bytes, Thumb)
u32 sub_0800E66E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B0CU; // [0x0800E6B4]
    return r0; // BX lr
}

// ROM Address: 0x0800E672..0x0800E6D6 (100 bytes, Thumb)
u32 sub_0800E672(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E1D0(r0, r1, r2, r3); // 0x0800E678
    r1 = r5;
    r0 = r4;
    r0 = sub_0800E15C(r0, r1, r2, r3); // 0x0800E680
    return r0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E3E6(r0, r1, r2, r3); // 0x0800E68C
    r1 = r5;
    r0 = r4;
    r0 = sub_0800E15C(r0, r1, r2, r3); // 0x0800E694
    return r0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800E4C4(r0, r1, r2, r3); // 0x0800E6A0: BL 0x0800E4C4
    r1 = r5;
    r0 = r4;
    r0 = sub_0800E15C(r0, r1, r2, r3); // 0x0800E6A8
    return r0;
    r0 = r0;
    if (cmp_lhs == cmp_rhs) return sub_0800E704(r0, r1, r2, r3);
    r7 = (r6 >> 1);
    r4 = r1 - r4;
    r0 = (r0 << 12);
    r7 = r2;
    r6 = r1;
    r5 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800E6D6(r0, r1, r2, r3);
    r0 = 0x224U; // (137 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800E6CA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800E6D6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800E6D6..0x0800E6F8 (34 bytes, Thumb)
u32 sub_0800E6D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r5;
    r2 = r7;
    r1 = r6;
    r0 = r4;
    r0 = sub_0800E7F6(r0, r1, r2, r3); // 0x0800E6DE: BL 0x0800E7F6
    r0 = 0x0804D0F8U /* &VTable_0804D0F8 */; // [0x0800E74C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x03001B90U; // [0x0800E750]
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r4;
    r0 = r4;
    return sub_0800E6D4(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy5_stores_the_table_and_frees_through_the_other_destructor
// ROM Address: 0x0800E6F8..0x0800E74C (84 bytes, Thumb)
u32 Object_Destroy5(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804D0F8U /* &VTable_0804D0F8 */; // [0x0800E74C]
    r3 = 0x03001B90U; // [0x0800E750]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r3);
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800E71C;
loc_0800E70C:
    r2 = (r0 << 2);
    r2 = r2 + r3;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_0800E720;
    r0 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0800E70C;
loc_0800E71C:
    r0 = 0x0U;
    r0 = ~r0;
loc_0800E720:
    r1 -= 0x1U;
    *(u32*)(r3) = (u32)r1;
    r1 = r1 - r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E738;
    r0 = (r0 << 2);
    r0 = r0 + r3;
    r2 = (r1 << 2);
    r1 = r0;
    r1 += 0x8U;
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800E734: BL 0x08049138
loc_0800E738:
    r1 = 0x0U;
    r0 = r4;
    r0 = Object_Destroy6(r0, r1, r2, r3); // 0x0800E73C: BL 0x0800E85E
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E74A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800E746: BL 0x0803D63C
loc_0800E74A:
    return r0;
}

// ROM Address: 0x0800E74C..0x0800E754 (8 bytes, Thumb)
u32 sub_0800E74C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800E740(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = r2 - r6;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0800E754..0x0800E776 (34 bytes, Thumb)
u32 sub_0800E754(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x28; // sp + 0x28
    r5 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r6 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    if (cmp_lhs != cmp_rhs) return sub_0800E776(r0, r1, r2, r3);
    r0 = 0x224U; // (137 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800E768: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800E776(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800E776..0x0800E7F6 (128 bytes, Thumb)
u32 sub_0800E776(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[0] = r7; // [sp + 0x0]
    r2 = 0x8; // sp + 0x8
    r3 = r6;
    r0 = r4;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r0 = sub_0800FD74(r0, r1, r2, r3); // 0x0800E780
    r0 = 0x0804C888U /* &VTable_0804C888 */; // [0x0800EB34]
    r1 = r4;
    r1 += 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r1 += 0xC1U;
    r2 = 0x0U;
    *(u32*)(r1 + 0x10) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r2;
    *(u32*)(r1 + 0x18) = (u32)r2;
    *(u32*)(r1 + 0x1C) = (u32)r2;
    *(u32*)(r1 + 0x20) = (u32)r2;
    r0 = 0x1U;
    *(u32*)(r1 + 0xC) = (u32)r0;
    *(u32*)(r1 + 0x8) = (u32)r2;
    r6 = *(u8*)(r5 + 0xD);
    r0 = r1;
    r0 -= 0x20U;
    *(u16*)(r0 + 0x10) = (u16)r6;
    r6 = *(u8*)(r5 + 0xE);
    r3 = r1 + 4;
    *(u16*)(r0 + 0x12) = (u16)r6;
    r6 = *(u8*)(r5 + 0xF);
    *(u16*)(r0 + 0x14) = (u16)r6;
    r6 = *(u8*)(r5 + 0xF);
    *(u16*)(r0 + 0x16) = (u16)r6;
    r6 = *(u8*)(r5 + 0x10);
    r0 += 0x10U;
    *(u8*)(r0 + 0x8) = (u8)r6;
    r5 = *(u8*)(r5 + 0x11);
    *(u8*)(r0 + 0x9) = (u8)r5;
    r0 = 0xFFU;
    r0 += 0xBDU;
    *(u32*)(r0 + r4) = r2;
    r0 = 0x1000U; // (1 << 12)
    *(u32*)(r1) = (u32)r0;
    *(u32*)(r3) = (u32)r2;
    r0 = 0x03000F90U; // [0x0800EB38]
    *(u32*)(r1 + 0x24) = (u32)r2;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r1 + 0x28) = (u32)r0;
    *(u32*)(r1 + 0x2C) = (u32)r0;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    *(u32*)(r1 + 0x34) = (u32)r2;
    *(u32*)(r1 + 0x30) = (u32)r2;
    *(u32*)(r1 + 0x38) = (u32)r2;
    *(u32*)(r1 + 0x3C) = (u32)r2;
    *(u32*)(r0 + 0x10) = (u32)r2;
    *(u32*)(r0 + 0x14) = (u32)r2;
    *(u32*)(r0 + 0x18) = (u32)r2;
    *(u32*)(r0 + 0x1C) = (u32)r2;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r0 = r4;
    return sub_0800E772(r0, r1, r2, r3);
}

// ROM Address: 0x0800E7F6..0x0800E814 (30 bytes, Thumb)
u32 sub_0800E7F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r6 = r1;
    r5 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800E814(r0, r1, r2, r3);
    r0 = 0x224U; // (137 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800E808: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800E814(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800E814..0x0800E85E (74 bytes, Thumb)
u32 sub_0800E814(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    r2 = ~r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    r3 = r5;
    r1 = r6;
    r0 = r4;
    r0 = sub_0800FD74(r0, r1, r2, r3); // 0x0800E822
    r0 = 0x0804C888U /* &VTable_0804C888 */; // [0x0800EB34]
    r1 = 0x1U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x1C0U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    *(u32*)(r0 + 0x18) = (u32)r1;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    r2 = 0x200U; // (1 << 9)
    *(u32*)(r0 + 0x20) = (u32)r1;
    *(u32*)(r0 + 0x24) = (u32)r1;
    r2 = r4 + r2;
    *(u32*)(r2 + 0x14) = (u32)r1;
    *(u32*)(r2 + 0x18) = (u32)r1;
    *(u32*)(r2 + 0x1C) = (u32)r1;
    *(u32*)(r2 + 0x20) = (u32)r1;
    *(u32*)(r0 + 0x34) = (u32)r1;
    *(u32*)(r0 + 0x30) = (u32)r1;
    *(u32*)(r0 + 0x38) = (u32)r1;
    *(u32*)(r0 + 0x3C) = (u32)r1;
    r0 = r4;
    return sub_0800E812(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy6_stores_the_table_and_frees_the_object
// ROM Address: 0x0800E85E..0x0800E94C (238 bytes, Thumb)
u32 Object_Destroy6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804C888U /* &VTable_0804C888 */; // [0x0800EB34]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x214U; // (133 << 2)
    r0 = r4 + r0;
    r0 = sub_08004102(r0, r1, r2, r3); // 0x0800E86E: BL 0x08004102
    r0 = r4;
    r0 += 0x1C0U;
    r1 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E88C;
    r1 += 0x1C0U;
    r2 = *(u32*)(r1 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_0800E88C;
    r2 = *(u32*)(r0 + 0x38);
    *(u32*)(r1 + 0x30) = (u32)r2;
loc_0800E88C:
    r1 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E89A;
    r1 += 0xFFU;
    r2 = *(u32*)(r0 + 0x38);
    r1 += 0xC1U;
    *(u32*)(r1 + 0x38) = (u32)r2;
loc_0800E89A:
    r1 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E8A8;
    r1 += 0xFFU;
    r2 = *(u32*)(r0 + 0x3C);
    r1 += 0xC1U;
    *(u32*)(r1 + 0x3C) = (u32)r2;
loc_0800E8A8:
    r0 = *(u32*)(r0 + 0x30);
    r1 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E8BC;
loc_0800E8B0:
    r0 += 0x1C0U;
    *(u32*)(r0 + 0x34) = (u32)r1;
    r0 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800E8B0;
loc_0800E8BC:
    r0 = 0xFFU;
    r0 += 0x8DU;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E8D2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E8CE: BL __call_via_r3
loc_0800E8D2:
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800EC34(r0, r1, r2, r3); // 0x0800E8D6: BL 0x0800EC34
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E8E4;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800E8E0: BL 0x0803D63C
loc_0800E8E4:
    return r0;
    r6 = r1;
    r5 = r1;
    r4 = r0;
    r6 += 0x10U;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800E8F4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800E904;
    r1 = 0x0804A7A0U /* &VTable_0804A7A0 */; // [0x0800EB3C]
    *(u32*)(r0) = (u32)r1;
    r1 = 0xCU;
    *(u8*)(r0 + 0x4) = (u8)r1;
loc_0800E904:
    r1 = r0;
    r0 = r4;
    r0 = sub_0800ED80(r0, r1, r2, r3); // 0x0800E908
    r1 = r4;
    r0 = 0x8; // sp + 0x8
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0800E910
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[4]; // [sp + 0x10]
    r4 += 0xFFU;
    r0 = r0 + r1;
    r0 = ((u32)((s32)r0 >> 1));
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[3]; // [sp + 0xC]
    r4 += 0xC1U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x03000F90U; // [0x0800EB38]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r4 + 0x14);
    r2 = r0 - r1;
    r1 = r5;
    r1 += 0x18U;
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) return sub_0800E94C(r0, r1, r2, r3);
    r2 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800E94C(r0, r1, r2, r3);
    r0 = r2;
    r2 = *(u32*)(r2 + 0x14);
    r1 = *(u32*)(r1);
    r1 = r2 + r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r0 = sub_0800AB54(r0, r1, r2, r3); // 0x0800E946: BL 0x0800AB54
    return sub_0800E96A(r0, r1, r2, r3);
}

// ROM Address: 0x0800E94C..0x0800E960 (20 bytes, Thumb)
u32 sub_0800E94C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r2 = *(u32*)(r6);
    r0 = sp;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800E960(r0, r1, r2, r3);
    r3 = 0x1U;
    r2 = 0x4U;
    r0 = sub_0800AD3E(r0, r1, r2, r3); // 0x0800E95A: BL 0x0800AD3E
    return sub_0800E968(r0, r1, r2, r3);
}

// ROM Address: 0x0800E960..0x0800E9C6 (102 bytes, Thumb)
u32 sub_0800E960(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0U;
    r2 = 0x3U;
    r0 = sub_0800AD3E(r0, r1, r2, r3); // 0x0800E964: BL 0x0800AD3E
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x0U;
    return r0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x58);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800E978: BL __call_via_r3
    return r0;
    r5 = r1;
    r4 = r0;
    r1 = r0;
    r0 = 0xC; // sp + 0xC
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0800E98A
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r4 += 0xFFU;
    r0 = r0 + r1;
    r0 = ((u32)((s32)r0 >> 1));
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[4]; // [sp + 0x10]
    r4 += 0xC1U;
    r0 -= 0x2U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x03000F90U; // [0x0800EB38]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r4 + 0x1C);
    r1 = r0 - r1;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) return sub_0800E9C6(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800E9C6(r0, r1, r2, r3);
    r0 = r1;
    r1 = *(u32*)(r1 + 0x14);
    r2 = *(u32*)(r5);
    r2 = r1 + r2;
    *(u32*)(r0 + 0x14) = (u32)r2;
    r0 = sub_0800AB54(r0, r1, r2, r3); // 0x0800E9BE: BL 0x0800AB54
    return r0;
}

// ROM Address: 0x0800E9C6..0x0800E9D8 (18 bytes, Thumb)
u32 sub_0800E9C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0U;
    r2 = 0x6U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x4; // sp + 0x4
    r1 = r5;
    r0 = sub_0800AD3E(r0, r1, r2, r3); // 0x0800E9D0: BL 0x0800AD3E
    *(u32*)(r4 + 0x20) = (u32)r0;
    return sub_0800E9C2(r0, r1, r2, r3);
}
