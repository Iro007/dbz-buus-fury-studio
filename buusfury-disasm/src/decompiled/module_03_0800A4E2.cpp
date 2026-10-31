/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #03
 * Address Range: 0x0800A4E2..0x0800C3F8 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0800A4E2..0x0800A516 (52 bytes, Thumb)
u32 sub_0800A4E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r7 = (r7 << 31);
    r0 = r0;
    r0 = ((u32)((s32)r6 >> 27));
    r7 = (r0 >> 32);
    if ((u32)cmp_lhs > (u32)cmp_rhs) return sub_0800A580(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0 + 0x48);
    r2 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800A512;
    r1 = *(u32*)(r0 + 0x4C);
    r2 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800A512;
    r1 = *(u32*)(r0 + 0x50);
    r2 = *(u32*)(r0 + 0x40);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0800A512;
    r1 = *(u32*)(r0 + 0x54);
    r2 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800A516(r0, r1, r2, r3);
loc_0800A512:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800A516..0x0800A520 (10 bytes, Thumb)
u32 sub_0800A516(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x080716F0U; // [0x0800A78C]
    r0 += 0x38U;
    r1 = *(u32*)(r1);
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x28);
    return r0;
}

// ROM Address: 0x0800A526..0x0800A560 (58 bytes, Thumb)
u32 sub_0800A526(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x03001C34U; // [0x0800A790]
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800A560(r0, r1, r2, r3);
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800A536: BL 0x0800FDFA
    r0 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0x40);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800A560(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x38);
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800A560(r0, r1, r2, r3);
    r0 = stack[2]; // [sp + 0x8]
    r1 = *(u32*)(r4 + 0x44);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800A560(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x3C);
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800A560(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800A560..0x0800A5A8 (72 bytes, Thumb)
u32 sub_0800A560(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x080716F0U; // [0x0800A78C]
    r7 = r4;
    r5 = *(u32*)(r0);
    r7 += 0x28U;
    r5 += 0x80U;
    r2 = 0x1U;
    r0 = r7;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A570
    r2 = 0x1U;
    r0 = r7;
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A57A
    r0 = r4;
    r0 += 0x38U;
    r6 = r0;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0800A586
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A590;
    r6 = r7;
loc_0800A590:
    r2 = 0x0U;
    r0 = r6;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A596
    r2 = 0x0U;
    r0 = r6;
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A5A0
    r0 = r4;
    return sub_0800A55C(r0, r1, r2, r3);
}

// ROM Address: 0x0800A5A8..0x0800A606 (94 bytes, Thumb)
u32 sub_0800A5A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r1;
    r1 = 0x080716F0U; // [0x0800A78C]
    r4 = r0;
    r1 = *(u32*)(r1);
    r4 += 0x38U;
    r5 = r1;
    r5 += 0x80U;
    r2 = 0x1U;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A5C0
    r2 = 0x1U;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A5CA
    r1 = r6;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0800A5D2: BL 0x0800FDFA
    r2 = 0x0U;
    r0 = sp;
    r1 = *(u32*)(r5 + 0x28);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A5DC
    r2 = 0x0U;
    r0 = sp;
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x0800A5E6
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800A606(r0, r1, r2, r3);
    r0 = 0x58U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A5FA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800A606(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A606..0x0800A624 (30 bytes, Thumb)
u32 sub_0800A606(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x4);
    r0 = sub_0800A278(r0, r1, r2, r3); // 0x0800A60A: BL 0x0800A278
    r0 = 0x0804D4E4U /* &VTable_0804D4E4 */; // [0x0800A794]
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
    r0 = r4;
    return sub_0800A604(r0, r1, r2, r3);
}

// ROM Address: 0x0800A624..0x0800A648 (36 bytes, Thumb)
u32 sub_0800A624(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x48);
    r3 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_0800A644;
    r2 = *(u32*)(r0 + 0x4C);
    r3 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_0800A644;
    r2 = *(u32*)(r0 + 0x50);
    r3 = *(u32*)(r0 + 0x40);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0800A644;
    r2 = *(u32*)(r0 + 0x54);
    r3 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_0800A648(r0, r1, r2, r3);
loc_0800A644:
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800A648..0x0800A64A (2 bytes, Thumb)
u32 sub_0800A648(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0800A526(r0, r1, r2, r3);
}

// ROM Address: 0x0800A64A..0x0800A6D0 (134 bytes, Thumb)
u32 sub_0800A64A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = r1;
    r4 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r1 = r5;
    r1 += 0x28U;
    r2 = 0x1U;
    r7 = r1;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A660: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x50);
    r2 = r2 + r1;
    r1 = r5;
    r1 += 0x38U;
    r6 = r1;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A672: BL __call_via_r3
    r1 = *(u32*)(r4);
    r5 = r0;
    r2 = *(u32*)(r1 + 0x4C);
    r0 = r4;
    r3 = r2 + r1;
    r1 = r6;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A688;
    r1 = r7;
loc_0800A688:
    r2 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A68A: BL __call_via_r3
    r0 = r5;
    return r0;
    r4 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r1 = r0;
    r1 += 0x38U;
    r2 = 0x1U;
    r0 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A6A4: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A6B2: BL __call_via_r3
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800A6D0(r0, r1, r2, r3);
    r0 = 0x58U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A6C4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800A6D0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A6D0..0x0800A6EE (30 bytes, Thumb)
u32 sub_0800A6D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x4);
    r0 = sub_0800A278(r0, r1, r2, r3); // 0x0800A6D4: BL 0x0800A278
    r0 = 0x0804D0C8U /* &VTable_0804D0C8 */; // [0x0800A798]
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
    r0 = r4;
    return sub_0800A6CE(r0, r1, r2, r3);
}

// ROM Address: 0x0800A6EE..0x0800A718 (42 bytes, Thumb)
u32 sub_0800A6EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = r1;
    r1 = *(u32*)(r5 + 0x38);
    r2 = *(u32*)(r5 + 0x48);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0800A714;
    r1 = *(u32*)(r5 + 0x4C);
    r2 = *(u32*)(r5 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0800A714;
    r1 = *(u32*)(r5 + 0x50);
    r2 = *(u32*)(r5 + 0x40);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0800A714;
    r1 = *(u32*)(r5 + 0x54);
    r2 = *(u32*)(r5 + 0x44);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800A718(r0, r1, r2, r3);
loc_0800A714:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800A718..0x0800A75A (66 bytes, Thumb)
u32 sub_0800A718(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r4 = r0;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r1 = r5;
    r1 += 0x28U;
    r2 = 0x1U;
    r7 = r1;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A728: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x50);
    r2 = r2 + r1;
    r1 = r5;
    r1 += 0x38U;
    r6 = r1;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A73A: BL __call_via_r3
    r1 = *(u32*)(r4);
    r5 = r0;
    r2 = *(u32*)(r1 + 0x4C);
    r0 = r4;
    r3 = r2 + r1;
    r1 = r6;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A750;
    r1 = r7;
loc_0800A750:
    r2 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A752: BL __call_via_r3
    r0 = r5;
    return sub_0800A716(r0, r1, r2, r3);
}

// ROM Address: 0x0800A75A..0x0800A77C (34 bytes, Thumb)
u32 sub_0800A75A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A768: BL __call_via_r3
    r0 = 0x48U;
    r5 = *(u32*)(r4 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A770: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800A77C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A77C..0x0800A78C (16 bytes, Thumb)
u32 sub_0800A77C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800A278(r0, r1, r2, r3); // 0x0800A780: BL 0x0800A278
    r0 = 0x0804B974U /* &VTable_0804B974 */; // [0x0800A79C]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_0800A77A(r0, r1, r2, r3);
}

// ROM Address: 0x0800A78E..0x0800A79C (14 bytes, Thumb)
u32 sub_0800A78E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_0800A760(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    if (cmp_lhs == cmp_rhs) return sub_0800A72C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0800A7A0..0x0800A7C0 (32 bytes, Thumb)
u32 sub_0800A7A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A7AE: BL __call_via_r3
    r0 = 0x58U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A7B4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800A7C0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A7C0..0x0800A7DE (30 bytes, Thumb)
u32 sub_0800A7C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x4);
    r0 = sub_0800A278(r0, r1, r2, r3); // 0x0800A7C4: BL 0x0800A278
    r0 = 0x0804D4E4U /* &VTable_0804D4E4 */; // [0x0800A87C]
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
    r0 = r4;
    return sub_0800A7BE(r0, r1, r2, r3);
}

// ROM Address: 0x0800A7DE..0x0800A800 (34 bytes, Thumb)
u32 sub_0800A7DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A7EC: BL __call_via_r3
    r0 = 0x48U;
    r5 = *(u32*)(r4 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A7F4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800A800(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A800..0x0800A810 (16 bytes, Thumb)
u32 sub_0800A800(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800A278(r0, r1, r2, r3); // 0x0800A804: BL 0x0800A278
    r0 = 0x0804BF80U /* &VTable_0804BF80 */; // [0x0800A880]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_0800A7FE(r0, r1, r2, r3);
}

// ROM Address: 0x0800A810..0x0800A84E (62 bytes, Thumb)
u32 sub_0800A810(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A81E: BL __call_via_r3
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800A4A4(r0, r1, r2, r3); // 0x0800A826
    return r0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A83A: BL __call_via_r3
    r0 = 0x48U;
    r5 = *(u32*)(r4 + 0x4);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A842: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800A84E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800A84E..0x0800A85E (16 bytes, Thumb)
u32 sub_0800A84E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800A278(r0, r1, r2, r3); // 0x0800A852: BL 0x0800A278
    r0 = 0x0804B318U /* &VTable_0804B318 */; // [0x0800A884]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_0800A84C(r0, r1, r2, r3);
}

// ROM Address: 0x0800A85E..0x0800A87A (28 bytes, Thumb)
u32 sub_0800A85E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A86C: BL __call_via_r3
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800A4A4(r0, r1, r2, r3); // 0x0800A874
    return r0;
}

// ROM Address: 0x0800A8D8..0x0800A938 (96 bytes, Thumb)
u32 sub_0800A8D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    *(u8*)(r1 + 0x10) = (u8)r2;
    r1 = *(u32*)(r0 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = (r1 >> 31);
    return r0; // BX lr
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A8F6: BL __call_via_r3
    r4 = *(u32*)(r4 + 0x4);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A8FE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A90C;
    r1 = 0x0804B338U; // [0x0800A938]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0800A90C:
    return r0;
    r4 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A91C: BL __call_via_r3
    r4 = *(u32*)(r4 + 0x4);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A924: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A932;
    r1 = 0x0804B338U; // [0x0800A938]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0800A932:
    return r0;
    r4 = r6;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0800A93C..0x0800A9AE (114 bytes, Thumb)
u32 sub_0800A93C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800A94E;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800A946: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A958;
loc_0800A94E:
    r1 = 0xFFU;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_0800A958:
    return r0;
    r4 = r0;
    r5 = r1;
    r6 = 0x0U;
loc_0800A962:
    r0 = *(u32*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800A984;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A970: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800A9AE(r0, r1, r2, r3);
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800A980: BL 0x08046AA2
loc_0800A984:
    r0 = *(u8*)(r4 + 0x4);
    r0 += 0x1U;
    r1 = (r0 << 24);
    r1 = ((u32)((s32)r1 >> 24));
    *(u8*)(r4 + 0x4) = (u8)r1;
    r0 = *(u32*)(r4 + 0x8);
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0800A998;
    *(u8*)(r4 + 0x4) = (u8)r6;
loc_0800A998:
    r3 = 0x4U;
    r1 = (u32)(*(s8*)(r4 + r3));
    r1 = (r1 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = r5;
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A9A6: BL __call_via_r3
    *(u32*)(r4) = (u32)r0;
    goto loc_0800A962;
    return r0;
}

// ROM Address: 0x0800A9AE..0x0800A9B0 (2 bytes, Thumb)
u32 sub_0800A9AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x0800A9B0..0x0800A9B4 (4 bytes, Thumb)
u32 sub_0800A9B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001AF4U; // [0x0800A9CC]
    return r0; // BX lr
}

// ROM Address: 0x0800A9B8..0x0800AB50 (408 bytes, Thumb)
u32 sub_0800A9B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r3 = *(u32*)(r1 + 0x74);
    r3 = r3 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800A9C4: BL __call_via_r3
    return r0;
    r0 = r0;
    r4 = r6 - r3;
    r0 = (r0 << 12);
    r5 = r0;
    r0 = *(u32*)(r0 + 0x30);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800A9F8;
    r6 = r5;
    r6 += 0x30U;
loc_0800A9E0:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800A9EC: BL 0x08046AA2
    r0 = *(u32*)(r5 + 0x30);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0800A9E0;
loc_0800A9F8:
    r0 = 0x0U;
    *(u32*)(r5 + 0x30) = (u32)r0;
    return r0;
    r5 = r0;
    r0 = sub_0800A9D0(r0, r1, r2, r3); // 0x0800AA04
    r0 = *(u32*)(r5 + 0x4);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800AA3A;
    r7 = r5 + 4;
loc_0800AA12:
    r0 = (r4 << 3);
    r6 = r0 + r7;
    r6 += 0x4U;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = *(u32*)(r5);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AA22: BL __call_via_r3
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800AA2E: BL 0x08046AA2
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0800AA12;
loc_0800AA3A:
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AA46;
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800AA42: BL 0x0803D63C
loc_0800AA46:
    return r0;
    r4 = r0;
    r0 = (r1 << 3);
    r1 = 0x0870F514U; // [0x0800AB50]
    r7 = r0 + r1;
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r4);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AA5A: BL __call_via_r3
    r1 = *(u32*)(r4 + 0x4);
    r6 = r0;
    r0 = r4 + 4;
    r1 = (r1 << 3);
    r5 = r1 + r0;
    r5 -= 0x4U;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = *(u32*)(r4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AA74: BL __call_via_r3
    r1 = *(u32*)(r4 + 0x30);
    r0 = r4;
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r0 += 0x30U;
    r3 = *(u32*)(r5);
    *(u32*)(r4 + 0x30) = (u32)r2;
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r3;
    *(u32*)r5 = r6; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = *(u32*)(r4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AA96: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs >= cmp_rhs) goto loc_0800AAD6;
    r0 = (r1 << 3);
    r1 = 0x0870F514U; // [0x0800AB50]
    r5 = r0 + r1;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r4);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AAB2: BL __call_via_r3
    r2 = *(u32*)(r4 + 0x4);
    r1 = r0;
    r3 = r2 + 1;
    r2 = (r2 << 3);
    r0 = r4 + 4;
    r0 = r2 + r0;
    r0 += 0x4U;
    *(u32*)(r4 + 0x4) = (u32)r3;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = *(u32*)(r4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AAD2: BL __call_via_r3
loc_0800AAD6:
    return r0;
    r4 = r0;
    r0 += 0x4U;
    r1 = *(u32*)(r0);
    r1 -= 0x1U;
    *(u32*)(r0) = (u32)r1;
    r1 = (r1 << 3);
    r5 = r1 + r0;
    r5 += 0x4U;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = *(u32*)(r4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AAF4: BL __call_via_r3
    r1 = *(u32*)(r4 + 0x30);
    r0 = r4;
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r0 += 0x30U;
    r3 = *(u32*)(r5);
    *(u32*)(r4 + 0x30) = (u32)r2;
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r3;
    return r0;
    r4 = r0;
    r0 = sub_0800A9D0(r0, r1, r2, r3); // 0x0800AB10
    r1 = *(u32*)(r4 + 0x4);
    r0 = r4 + 4;
    r1 = (r1 << 3);
    r0 = r1 + r0;
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = *(u32*)(r4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AB28: BL __call_via_r3
    return r0;
    r4 = r0;
    r5 = r1;
    r0 = sub_0800A9D0(r0, r1, r2, r3); // 0x0800AB34
    r1 = *(u32*)(r4 + 0x4);
    r0 = r4 + 4;
    r1 = (r1 << 3);
    r0 = r1 + r0;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r4);
    r0 = *(u32*)(r0 + 0x4);
    r2 = r5;
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0800AB4A: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0800AB54..0x0800ABE6 (146 bytes, Thumb)
u32 sub_0800AB54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r2 = 0x8U;
    r1 = 0x20U;
    r0 = sp;
    r5 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0800AB62
    r1 = 0x08071700U; // [0x0800AD7C]
    r0 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800AB72;
    r0 = *(u32*)(r1 + 0x8);
loc_0800AB72:
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u32*)(r4 + 0x18);
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x3) = (u8)r0;
    r0 = 0x1U;
    r1 = 0x0803F70DU; // [0x0800AD80]
    *(u8*)(r3 + 0x2) = (u8)r0;
    stack[8] = r1; // [sp + 0x20]
    *(u8*)(r3) = (u8)r0;
    r0 = 0x10U;
    r1 = 0x7U;
    stack[2] = r1; // [sp + 0x8]
    stack[1] = r0; // [sp + 0x4]
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = stack[9]; // [sp + 0x24]
    r2 = stack[12]; // [sp + 0x30]
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0800AB96: BL 0x08046E40
    r1 = 0x000003FFU; // [0x0800AD84]
    r0 = *(u32*)(r4 + 0x14);
    r0 = r0 + r1;
    r2 = ((u32)((s32)r0 >> 10));
    r0 = r5;
    r1 = 0x0800AD88U;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0800ABA6
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0800AD90]
    r2 = 0x08071700U; // [0x0800AD7C]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r2 += 0x10U;
    r0 = r5;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800ABB8: BL 0x0804915C
    r1 = 0x0U;
    r0 = r5;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0800ABC0: BL 0x0803F58C
    return r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r6 = stack[10]; // [sp + 0x28]
    if (cmp_lhs != cmp_rhs) return sub_0800ABE6(r0, r1, r2, r3);
    r0 = 0x28U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800ABD8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800ABE6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800ABE6..0x0800AC40 (90 bytes, Thumb)
u32 sub_0800ABE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800AD94]
    r7 = 0x08071700U; // [0x0800AD7C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x1U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r1 = r0;
    r0 = *(u32*)(r7);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800ABF6
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800AC12;
    r1 = 0xFFU;
    r1 += 0x1U;
    r0 = *(u32*)(r7);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800AC04: BL 0x08011732
    r1 = 0xFFU;
    r1 += 0x1U;
    r0 = *(u32*)(r7);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800AC0E
loc_0800AC12:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804C904U /* &VTable_0804C904 */; // [0x0800AD98]
    *(u32*)(r4) = (u32)r0;
    r1 = stack[3]; // [sp + 0xC]
    r0 = r4;
    r1 = *(u32*)(r1);
    r0 += 0x20U;
    *(u32*)(r4 + 0x14) = (u32)r1;
    r2 = stack[4]; // [sp + 0x10]
    *(u32*)(r4 + 0x18) = (u32)r2;
    *(u32*)(r4 + 0x1C) = (u32)r6;
    r2 = *(u32*)(r5);
    r3 = *(u32*)(r5 + 0x4);
    r2 -= 0x10U;
    r2 = (r2 << 3);
    *(u32*)(r4 + 0x20) = (u32)r2;
    r3 = (r3 << 3);
    *(u32*)(r0 + 0x4) = (u32)r3;
    r0 = r4;
    r0 = sub_0800AB54(r0, r1, r2, r3); // 0x0800AC38: BL 0x0800AB54
    r0 = r4;
    return sub_0800ABE2(r0, r1, r2, r3);
}

// ROM Address: 0x0800AC40..0x0800AC56 (22 bytes, Thumb)
u32 sub_0800AC40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x10);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800AC56(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x08071700U; // [0x0800AD7C]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800AC50
    return r0;
}

// ROM Address: 0x0800AC56..0x0800AC64 (14 bytes, Thumb)
u32 sub_0800AC56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x24);
    r1 -= 0x4U;
    *(u32*)(r0 + 0x24) = (u32)r1;
    r1 = ((u32)((s32)r1 >> 3));
    r1 += 0x8U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return sub_0800AC54(r0, r1, r2, r3);
}

// ROM Address: 0x0800AC64..0x0800ACB2 (78 bytes, Thumb)
u32 sub_0800AC64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x20U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 3));
    r0 = ((u32)((s32)r0 >> 3));
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    stack[2] = r0; // [sp + 0x8]
    stack[0] = r1; // [sp + 0x0]
    r1 = stack[1]; // [sp + 0x4]
    r0 += 0x20U;
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    r0 += 0x8U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x08071700U; // [0x0800AD7C]
    stack[3] = r1; // [sp + 0xC]
    r0 = *(u32*)(r0 + 0xC);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r2 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800ACB2(r0, r1, r2, r3);
    r1 = stack[2]; // [sp + 0x8]
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800ACB2(r0, r1, r2, r3);
    r1 = *(u32*)(r0 + 0x4);
    r2 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0800ACB2(r0, r1, r2, r3);
    r1 = stack[3]; // [sp + 0xC]
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0800ACB2(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800ACB2..0x0800ACB6 (4 bytes, Thumb)
u32 sub_0800ACB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800ACAE(r0, r1, r2, r3);
}

// ROM Address: 0x0800ACB6..0x0800AD10 (90 bytes, Thumb)
u32 sub_0800ACB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)(r1);
    r2 = 0x08071700U; // [0x0800AD7C]
    r4 = r3;
    r4 += 0x8U;
    r2 = *(u32*)(r2 + 0xC);
    *(u32*)(r1) = (u32)r4;
    r4 = 0x40006000U; // [0x0800AD9C]
    r2 += 0x28U;
    *(u32*)(r3) = (u32)r4;
    r1 = *(u32*)(r0 + 0x20);
    r5 = *(u32*)(r2);
    r1 = ((u32)((s32)r1 >> 3));
    r1 = r1 - r5;
    r1 = (r1 << 23);
    r1 = (r1 >> 7);
    r1 |= r4;
    *(u32*)(r3) = (u32)r1;
    r4 = *(u32*)(r0 + 0x24);
    r2 = *(u32*)(r2 + 0x4);
    r4 = ((u32)((s32)r4 >> 3));
    r2 = r4 - r2;
    r2 = (r2 << 24);
    r1 = (r1 >> 8);
    r1 = (r1 << 8);
    r2 = (r2 >> 24);
    r1 |= r2;
    *(u32*)(r3) = (u32)r1;
    r0 = *(u16*)(r0 + 0xC);
    r1 = *(u32*)(r3 + 0x4);
    r1 = (r1 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r1 = (r1 << 10);
    r0 |= r1;
    r1 = 0xC00U; // (3 << 10)
    r0 &= ~r1;
    r1 = 0x400U; // (1 << 10)
    r0 = r0 + r1;
    *(u32*)(r3 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800AD10..0x0800AD14 (4 bytes, Thumb)
u32 sub_0800AD10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800AD14..0x0800AD2C (24 bytes, Thumb)
u32 sub_0800AD14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) return sub_0800AD2C(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_0800AD3A(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800AD24: BL 0x08046AA2
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800AD2C..0x0800AD3E (18 bytes, Thumb)
u32 sub_0800AD2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r0 = 0x08071700U; // [0x0800AD7C]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800AD32
    r0 = 0x0U;
    return sub_0800AD2A(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0800AD2A(r0, r1, r2, r3);
}

// ROM Address: 0x0800AD3E..0x0800AD5E (32 bytes, Thumb)
u32 sub_0800AD3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x08071700U; // [0x0800AD7C]
    r6 = r1;
    r5 = r2;
    r7 = r3;
    r0 = *(u32*)(r4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0800AD4C
    r1 = 0xFFU;
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800AD5E(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800AD5E..0x0800AD7A (28 bytes, Thumb)
u32 sub_0800AD5E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r5;
    r2 = r6;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r1 = stack[1]; // [sp + 0x4]
    r0 = sub_0800ABC8(r0, r1, r2, r3); // 0x0800AD68
    r5 = r0;
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800AD72: BL 0x0801191A
    r0 = r5;
    return sub_0800AD5A(r0, r1, r2, r3);
}

// ROM Address: 0x0800AD82..0x0800AE60 (222 bytes, Thumb)
u32 sub_0800AD82(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r0 >> 32);
    r7 = (r7 << 15);
    r0 = r0;
    r5 = r4;
    r4 = (r4 << 1);
    r0 = r0;
    r0 = r0;
    r0 = r0;
    r1 = (r0 << 24);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r2 = *(u32*)r1; r1 += 4;
    r4 = (r0 >> 32);
    *(u32*)(r0) = (u32)r0;
    r0 &= r0;
    r4 = r0;
    r4 += 0x60U;
    r1 = *(u16*)(r4 + 0x18);
    r2 = 0x06010000U; // [0x0800B098]
    r7 = 0x0U;
    r6 = 0x40U;
    r1 = (r1 << 5);
    r1 = r1 + r2;
    r0 += 0x80U;
    r5 = r0;
    r2 = 0x4; // sp + 0x4
    stack[3] = r6; // [sp + 0xC]
    stack[4] = r6; // [sp + 0x10]
    stack[1] = r7; // [sp + 0x4]
    stack[2] = r7; // [sp + 0x8]
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800ADC2: BL 0x0804915C
    r0 = *(u16*)(r4 + 0x1A);
    r1 = 0x06010000U; // [0x0800B098]
    stack[1] = r6; // [sp + 0x4]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = 0x80U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r5;
    stack[2] = r7; // [sp + 0x8]
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800ADDC: BL 0x0804915C
    r0 = *(u16*)(r4 + 0x1C);
    r1 = 0x06010000U; // [0x0800B098]
    stack[2] = r7; // [sp + 0x8]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = 0x80U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xA0U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r5;
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800ADF8: BL 0x0804915C
    return r0;
    r3 = *(u32*)(r1);
    r4 = *(u16*)(r3);
    cmp_lhs = (s32)r4; cmp_rhs = 10;
    if (cmp_lhs != cmp_rhs) goto loc_0800AE10;
    r3 += 0x2U;
    *(u32*)(r1) = (u32)r3;
    goto loc_0800AE1C;
loc_0800AE10:
    r4 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_0800AE1C;
    r0 = 0x0U;
loc_0800AE18:
    return r0; // BX lr
loc_0800AE1C:
    r3 = *(u32*)(r1);
    r3 = *(u16*)(r3);
    cmp_lhs = (s32)r3; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0800AE3E;
    r3 = r0;
    r3 += 0x80U;
loc_0800AE28:
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AE32;
    r0 = *(u32*)(r1);
    r0 = *(u16*)(r0 + 0x2);
    *(u8*)(r3 + 0x3) = (u8)r0;
loc_0800AE32:
    r0 = *(u32*)(r1);
    r0 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs == cmp_rhs) goto loc_0800AE28;
loc_0800AE3E:
    r0 = *(u32*)(r1);
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 45;
    if (cmp_lhs != cmp_rhs) return sub_0800AE60(r0, r1, r2, r3);
    r0 += 0x2U;
    *(u32*)(r1) = (u32)r0;
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if (cmp_lhs != cmp_rhs) goto loc_0800AE5C;
loc_0800AE50:
    r0 = *(u32*)(r1);
    r0 += 0x2U;
    *(u32*)(r1) = (u32)r0;
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if (cmp_lhs == cmp_rhs) goto loc_0800AE50;
loc_0800AE5C:
    r0 = 0x1U;
    goto loc_0800AE18;
    return r0;
}

// ROM Address: 0x0800AE60..0x0800AE64 (4 bytes, Thumb)
u32 sub_0800AE60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800AE18(r0, r1, r2, r3);
}

// ROM Address: 0x0800AE64..0x0800AE70 (12 bytes, Thumb)
u32 sub_0800AE64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x50);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x50) = (u32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800AE70(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0800AE70..0x0800AE74 (4 bytes, Thumb)
u32 sub_0800AE70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800AE74..0x0800AED0 (92 bytes, Thumb)
u32 sub_0800AE74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r2 = *(u32*)(r0 + 0x20);
    r5 = r4;
    r6 = r4;
    r6 += 0x60U;
    r5 += 0x80U;
    r0 = *(u32*)(r0 + 0x18);
    r1 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800AEF6(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0800AEF6(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800AF6C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x48);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AEAA;
    r1 = r0;
    r0 = 0x08071720U; // [0x0800B09C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800AEA2
    r6 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r6;
loc_0800AEAA:
    r6 = 0x0U;
    *(u32*)(r4 + 0x30) = (u32)r6;
    r0 = *(u32*)(r4 + 0x18);
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800AED0(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x4C);
    r1 = *(u32*)(r5 + 0x24);
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0800AEBC
    *(u32*)(r4 + 0x20) = (u32)r6;
    *(u32*)(r4 + 0x1C) = (u32)r6;
    r0 = *(u32*)(r4 + 0x18);
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    return r0;
}

// ROM Address: 0x0800AED0..0x0800AF6E (158 bytes, Thumb)
u32 sub_0800AED0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AEF0;
    r0 = 0x08071720U; // [0x0800B09C]
    r1 = 0x03002A60U; // [0x0800B0A0]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800AEEC;
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r1) = (u32)r0;
    goto loc_0800AEF0;
loc_0800AEEC:
    r0 = *(u32*)(r4 + 0x34);
    *(u32*)(r1) = (u32)r0;
loc_0800AEF0:
    r0 = 0x0800AE65U /* &sub_0800AE64 */; // [0x0800B0A4]
    *(u32*)(r5 + 0x34) = (u32)r0;
    return sub_0800AECC(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800AF6C;
    r0 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800AF9C(r0, r1, r2, r3);
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r4 + 0x14);
    r1 = 0xC; // sp + 0xC
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x0U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    stack[6] = r1; // [sp + 0x18]
loc_0800AF12:
    r0 = *(u32*)(r4 + 0x4C);
    r2 = 0x0U;
    r7 = *(u32*)(r0 + 0x4);
    r1 = stack[6]; // [sp + 0x18]
    r0 = r4;
    r0 = sub_0800AE00(r0, r1, r2, r3); // 0x0800AF1C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AF32;
    r0 = *(u32*)(r4 + 0x38);
    r0 += 0x1U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800AF32;
    r7 -= 0x14U;
loc_0800AF32:
    r2 = r7;
    r0 = r5;
    r3 = 0x8; // sp + 0x8
    r1 = stack[3]; // [sp + 0xC]
    r0 = sub_0803DE6A(r0, r1, r2, r3); // 0x0800AF3A
    r0 = stack[1]; // [sp + 0x4]
    r0 += 0x1U;
    stack[1] = r0; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0x4C);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0800AF52;
    r0 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AF12;
loc_0800AF52:
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x4C);
    if (cmp_lhs == cmp_rhs) return sub_0800AF6E(r0, r1, r2, r3);
    r1 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r1);
    r2 = stack[1]; // [sp + 0x4]
    r1 = r1 - r2;
    r3 = (r1 << 3);
    r1 = r3 - r1;
    r0 = r0 + r1;
    return sub_0800AF70(r0, r1, r2, r3);
loc_0800AF6C:
    return sub_0800B022(r0, r1, r2, r3);
}

// ROM Address: 0x0800AF6E..0x0800B022 (180 bytes, Thumb)
u32 sub_0800AF6E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    *(u8*)(r6 + 0x5) = (u8)r0;
    r0 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AFA2;
    r0 = *(u32*)(r4 + 0x48);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800AFA2;
    r1 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AF88;
    r1 = r4;
    r1 += 0xCU;
loc_0800AF88:
    r0 = 0x0U;
    r0 = sub_080178C8(r0, r1, r2, r3); // 0x0800AF8A: BL 0x080178C8
    r1 = r0;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r0 = 0x08071720U; // [0x0800B09C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800AF96: BL 0x0801191A
    goto loc_0800AFA2;
    r0 = *(u8*)(r6 + 0x5);
    r0 += 0xEU;
    *(u8*)(r6 + 0x5) = (u8)r0;
loc_0800AFA2:
    r0 = *(u32*)(r4 + 0x4C);
    r1 = r4;
    r1 += 0x14U;
    r2 = 0x1U;
    r7 = *(u32*)(r0 + 0x4);
    r0 = r4;
    r0 = sub_0800AE00(r0, r1, r2, r3); // 0x0800AFAE
    stack[1] = r0; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800AFC0;
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800AFC0;
    r7 -= 0x14U;
loc_0800AFC0:
    r2 = r7;
    r0 = r5;
    r3 = 0x8; // sp + 0x8
    r1 = *(u32*)(r4 + 0x14);
    r0 = sub_0803DE6A(r0, r1, r2, r3); // 0x0800AFC8
    r0 = stack[5]; // [sp + 0x14]
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = stack[3]; // [sp + 0xC]
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800B02E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x4C);
    r0 = *(u32*)(r0 + 0x8);
    r1 = stack[4]; // [sp + 0x10]
    r1 = r7 - r1;
    r1 = ((u32)((s32)r1 >> 1));
    r0 = r0 + r1;
    *(u8*)(r6 + 0x4) = (u8)r0;
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B00C;
    r1 = *(u32*)(r4 + 0x3C);
    r0 = r4;
    r2 = r1 + 1;
    r1 = (r1 << 1);
    *(u32*)(r4 + 0x3C) = (u32)r2;
    r0 += 0x64U;
    r2 = *(u8*)(r0);
    r1 = r1 + r4;
    r3 = r1;
    r3 += 0x40U;
    *(u8*)(r3) = (u8)r2;
    r2 = *(u8*)(r0 + 0x1);
    *(u8*)(r3 + 0x1) = (u8)r2;
loc_0800B00C:
    r0 = 0x0U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x1C);
    r0 += 0x1U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r1 = *(u32*)(r4 + 0x4C);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_0800B022(r0, r1, r2, r3);
    r0 = 0x1U;
    *(u32*)(r4 + 0x20) = (u32)r0;
    return r0;
}

// ROM Address: 0x0800B022..0x0800B02E (12 bytes, Thumb)
u32 sub_0800B022(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800B02C;
    return sub_0800AECC(r0, r1, r2, r3);
loc_0800B02C:
    return sub_0800B042(r0, r1, r2, r3);
}

// ROM Address: 0x0800B042..0x0800B096 (84 bytes, Thumb)
u32 sub_0800B042(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_0800B042:
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u16*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0800B05C;
    r0 = *(u16*)(r0 + 0x2);
    *(u8*)(r5 + 0x3) = (u8)r0;
    r0 = *(u32*)(r4 + 0x14);
    r0 += 0x4U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r1 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0800B042;
    return sub_0800AECC(r0, r1, r2, r3);
loc_0800B05C:
    r0 = *(u8*)(r6 + 0x4);
    r1 = *(u8*)(r6 + 0x5);
    *(u32*)(r5 + 0x4) = (u32)r0;
    *(u32*)(r5 + 0x8) = (u32)r1;
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u16*)(r0);
    r0 = r5;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0800B06A: BL 0x0803DE50
    r2 = *(u32*)(r4 + 0x14);
    r0 = *(u16*)(r2);
    r1 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0800B07E;
    r0 = *(u32*)(r1 + 0x4);
    r0 += 0x1U;
    goto loc_0800B08A;
loc_0800B07E:
    r1 = *(u32*)(r1);
    r0 = (r0 << 1);
    r0 = *(u16*)(r1 + r0);
    r0 = (r0 << 1);
    r0 = *(u16*)(r1 + r0);
    r0 += 0x1U;
loc_0800B08A:
    r1 = *(u8*)(r6 + 0x4);
    r0 = r0 + r1;
    *(u8*)(r6 + 0x4) = (u8)r0;
    r2 += 0x2U;
    *(u32*)(r4 + 0x14) = (u32)r2;
    return sub_0800AECC(r0, r1, r2, r3);
}

// ROM Address: 0x0800B0A8..0x0800B140 (152 bytes, Thumb)
u32 sub_0800B0A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08071720U; // [0x0800B310]
    r4 = r0;
    r0 = *(u32*)(r2);
    r0 = *(u16*)(r0 + 0x4);
    r1 = (r0 << 31);
    if (cmp_lhs != cmp_rhs) goto loc_0800B0BC;
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800B0C0;
loc_0800B0BC:
    r0 = 0x1U;
    goto loc_0800B0C2;
loc_0800B0C0:
    r0 = 0x0U;
loc_0800B0C2:
    *(u32*)(r4 + 0x30) = (u32)r0;
    r3 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B0F4;
    r1 = *(u32*)(r2);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800B0DE;
    r1 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B0DE;
    r1 -= 0x1U;
    *(u32*)(r4 + 0x34) = (u32)r1;
loc_0800B0DE:
    r1 = *(u32*)(r2);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 24);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800B0F4;
    r1 = *(u32*)(r4 + 0x34);
    r3 -= 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0800B0F4;
    r1 += 0x1U;
    *(u32*)(r4 + 0x34) = (u32)r1;
loc_0800B0F4:
    r1 = *(u32*)(r2);
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 22);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800B108;
    r1 = *(u32*)(r4 + 0x60);
    cmp_lhs = (s32)r1; cmp_rhs = 34;
    if (cmp_lhs <= cmp_rhs) goto loc_0800B108;
    r1 -= 0x2U;
    *(u32*)(r4 + 0x60) = (u32)r1;
loc_0800B108:
    r1 = *(u32*)(r2);
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 23);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800B11C;
    r1 = *(u32*)(r4 + 0x60);
    cmp_lhs = (s32)r1; cmp_rhs = 126;
    if (cmp_lhs >= cmp_rhs) goto loc_0800B11C;
    r1 += 0x2U;
    *(u32*)(r4 + 0x60) = (u32)r1;
loc_0800B11C:
    r1 = *(u32*)(r2 + 0x8);
    r5 = 0x1U;
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs >= cmp_rhs) return sub_0800B140(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800B142(r0, r1, r2, r3);
    r0 = 0x5U;
    r0 = r0 - r1;
    r1 = *(u32*)(r4 + 0x58);
    r1 += 0x1U;
    *(u32*)(r4 + 0x58) = (u32)r1;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0800B134: BL 0x08046E58
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800B142(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800B140..0x0800B156 (22 bytes, Thumb)
u32 sub_0800B140(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1 - 3;
loc_0800B142:
    r0 = r4;
    r0 = sub_0800AE74(r0, r1, r2, r3); // 0x0800B144: BL 0x0800AE74
    r5 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_0800B142;
    r0 = r4;
    r0 = sub_0800ADA0(r0, r1, r2, r3); // 0x0800B14E
    r0 = 0x0U;
    return sub_0800B13E(r0, r1, r2, r3);
}

// ROM Address: 0x0800B156..0x0800B1A6 (80 bytes, Thumb)
u32 sub_0800B156(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x50);
    r1 += 0x1U;
    *(u32*)(r0 + 0x50) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs < cmp_rhs) goto loc_0800B184;
    r1 = *(u32*)(r0 + 0x24);
    r2 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800B16A;
    *(u32*)(r0 + 0x28) = (u32)r2;
loc_0800B16A:
    r1 = *(u32*)(r0 + 0x14);
    r3 = *(u16*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = 94;
    if (cmp_lhs != cmp_rhs) goto loc_0800B178;
    r1 += 0x2U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    *(u32*)(r0 + 0x28) = (u32)r2;
loc_0800B178:
    r1 = *(u32*)(r0 + 0x14);
    *(u32*)(r0 + 0x18) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = 0x0800B0A9U /* &sub_0800B0A8 */; // [0x0800B314]
    r0 += 0x80U;
    *(u32*)(r0 + 0x34) = (u32)r1;
loc_0800B184:
    r0 = 0x0U;
    return r0; // BX lr
    r6 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r7 = stack[15]; // [sp + 0x3C]
    if (cmp_lhs != cmp_rhs) return sub_0800B1A6(r0, r1, r2, r3);
    r0 = 0xB8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800B198: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800B1A6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800B1A6..0x0800B2BE (280 bytes, Thumb)
u32 sub_0800B1A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800B318]
    r1 = 0x080496B4U; // [0x0800B31C]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0xC) = (u32)r1;
    r0 = 0x08049F60U /* &VTable_08049F60 */; // [0x0800B320]
    r1 = 0xA0U;
    *(u32*)(r4) = (u32)r0;
    r0 += 0x30U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = r4;
    r0 += 0x80U;
    r2 = 0x40U;
    r5 = r0;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0800B1C0
    *(u32*)(r4 + 0x14) = (u32)r6;
    r6 = 0x0U;
    *(u32*)(r4 + 0x28) = (u32)r6;
    *(u32*)(r4 + 0x1C) = (u32)r6;
    r1 = stack[8]; // [sp + 0x20]
    r0 = 0x1U;
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r4 + 0x2C) = (u32)r0;
    *(u32*)(r4 + 0x60) = (u32)r1;
    *(u32*)(r4 + 0x5C) = (u32)r2;
    *(u32*)(r4 + 0x20) = (u32)r6;
    *(u32*)(r4 + 0x34) = (u32)r6;
    *(u32*)(r4 + 0x38) = (u32)r6;
    *(u32*)(r4 + 0x48) = (u32)r6;
    *(u8*)(r4 + 0x8) = (u8)r6;
    *(u32*)(r4 + 0x4) = (u32)r6;
    r1 = 0x08071720U; // [0x0800B310]
    *(u32*)(r4 + 0x58) = (u32)r6;
    r1 = *(u32*)(r1 + 0xC);
    r2 = 0x8U;
    *(u32*)(r5 + 0xC) = (u32)r1;
    r1 = 0xFU;
    *(u8*)(r5 + 0x1) = (u8)r1;
    r1 = stack[6]; // [sp + 0x18]
    r0 = r5 - r2;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0800B1F8: BL 0x08049144
    *(u32*)(r4 + 0x24) = (u32)r6;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B27C;
    r0 = 0x1U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = 0xE0U;
    *(u32*)(r4 + 0x54) = (u32)r0;
    r6 = 0x40U;
    *(u32*)(r5 + 0x28) = (u32)r6;
    r0 = (r6 << 6);
    *(u32*)(r5 + 0x30) = (u32)r0;
    *(u32*)(r5 + 0x2C) = (u32)r6;
    *(u32*)(r5 + 0x18) = (u32)r6;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    r1 = *(u32*)(r5 + 0x24);
    r0 = r7;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0800B21C
    r0 = 0x7EU;
    r0 = *(u16*)(r0 + r4);
    r1 = 0x06010000U; // [0x0800B324]
    stack[3] = r6; // [sp + 0xC]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    r0 = r5;
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800B238: BL 0x0804915C
    r0 = 0xA0U;
    *(u32*)(r5 + 0x28) = (u32)r0;
    *(u32*)(r5 + 0x2C) = (u32)r6;
    r0 = (r0 << 6);
    *(u32*)(r5 + 0x30) = (u32)r0;
    r0 = *(u32*)(r5 + 0x28);
    *(u32*)(r5 + 0x18) = (u32)r0;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x5C);
    if (cmp_lhs == cmp_rhs) goto loc_0800B268;
    r0 -= 0x70U;
    r1 = r0 + r6;
    *(u32*)(r4 + 0x74) = (u32)r0;
    *(u32*)(r4 + 0x68) = (u32)r1;
    r1 = r0;
    r1 += 0x80U;
    r0 += 0xC0U;
    *(u32*)(r4 + 0x70) = (u32)r0;
    *(u32*)(r4 + 0x6C) = (u32)r1;
    goto loc_0800B290;
loc_0800B268:
    r0 -= 0x70U;
    r1 = r0;
    r1 += 0x40U;
    *(u32*)(r4 + 0x68) = (u32)r0;
    *(u32*)(r4 + 0x6C) = (u32)r1;
    r1 += 0x40U;
    r0 += 0xA0U;
    *(u32*)(r4 + 0x74) = (u32)r0;
    *(u32*)(r4 + 0x70) = (u32)r1;
    goto loc_0800B290;
loc_0800B27C:
    r0 = 0xA0U;
    *(u32*)(r4 + 0x54) = (u32)r0;
    r0 = *(u32*)(r4 + 0x5C);
    r0 -= 0x50U;
    r1 = r0;
    r1 += 0x40U;
    *(u32*)(r4 + 0x68) = (u32)r0;
    *(u32*)(r4 + 0x6C) = (u32)r1;
    r0 += 0x80U;
    *(u32*)(r4 + 0x70) = (u32)r0;
loc_0800B290:
    r0 = stack[14]; // [sp + 0x38]
    r1 = 0x08071720U; // [0x0800B310]
    r3 = (r0 << 2);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r1 += 0x10U;
    r0 = r0 + r1;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r1 = *(u32*)(r5 + 0x24);
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0800B2A4
    r0 = 0x2U;
    *(u8*)(r5 + 0x3) = (u8)r0;
    r0 = r4;
    r0 = sub_0800ADA0(r0, r1, r2, r3); // 0x0800B2AE
    r0 = 0x1U;
    *(u32*)(r4 + 0x50) = (u32)r0;
    r0 = 0x0800B157U /* &sub_0800B156 */; // [0x0800B328]
    *(u32*)(r5 + 0x34) = (u32)r0;
    r0 = r4;
    return sub_0800B1A2(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy1_stores_the_three_tables_and_frees_the_object
// ROM Address: 0x0800B2BE..0x0800B328 (106 bytes, Thumb)
u32 Object_Destroy1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x08049F60U /* &VTable_08049F60 */; // [0x0800B320]
    r7 = r1;
    *(u32*)(r5) = (u32)r0;
    r0 += 0x30U;
    *(u32*)(r5 + 0xC) = (u32)r0;
    r4 = *(u32*)(r5 + 0x24);
    r6 = 0x08071720U; // [0x0800B310]
    r4 += 0x2U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_0800B2E6;
loc_0800B2D4:
    r0 = (r4 << 1);
    r0 = r0 + r5;
    r0 += 0x60U;
    r1 = *(u16*)(r0 + 0x18);
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800B2DE
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0800B2D4;
loc_0800B2E6:
    r0 = *(u32*)(r5 + 0x48);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B2F4;
    r1 = r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800B2F0
loc_0800B2F4:
    r1 = 0x0U;
    r0 = r5;
    r0 += 0x80U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0800B2FA: BL 0x0803F58C
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800B318]
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    *(u32*)(r5) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B30C;
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800B308: BL 0x0803D63C
loc_0800B30C:
    return r0;
    r0 = r0;
    r0 = ((u32)((s32)r4 >> 28));
    r7 = (r0 >> 32);
    r0 = (r0 >> 32);
    return sub_0800ABC4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    stack[180] = r6; // [sp + 0x2D0]
    r4 = (r0 >> 32);
    r7 = stack[96]; // [sp + 0x180]
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    return r0;
}

// ROM Address: 0x0800B32A..0x0800B386 (92 bytes, Thumb)
u32 sub_0800B32A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 32);
    r1 = 0x08071720U; // [0x0800B51C]
    r1 = *(u32*)(r1);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 30);
    r2 = (r1 >> 31);
    r1 = r0;
    r1 += 0x80U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B34C;
    r2 = 0x0U;
    r3 = 0x03002A60U; // [0x0800B520]
    r2 = ~r2;
    *(u32*)(r3) = (u32)r2;
    r2 = 0x0800AE65U /* &sub_0800AE64 */; // [0x0800B524]
    *(u32*)(r1 + 0x34) = (u32)r2;
loc_0800B34C:
    r1 = *(u32*)(r1 + 0x34);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800B34E: BL 0x08046AA2
    return r0;
    r2 = *(u32*)(r1 + 0x34);
    r3 = *(u32*)(r1 + 0x68);
    r2 = (r2 << 1);
    r2 = r2 + r1;
    r2 += 0x40U;
    r4 = *(u8*)(r2);
    r2 = *(u8*)(r2 + 0x1);
    r1 = *(u32*)(r1 + 0x60);
    r3 = r3 + r4;
    r1 = r1 + r2;
    r1 -= 0x20U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r3;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x50);
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800B386(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0800B386..0x0800B51C (406 bytes, Thumb)
u32 sub_0800B386(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r6 + 0x4);
    r5 = *(u32*)(r6);
    r7 = r0;
    r0 += 0x20U;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = *(u32*)(r6 + 0x8);
    r1 = 0x1U;
    r2 = r0;
    r0 += 0x1U;
    *(u32*)(r6 + 0x8) = (u32)r0;
    stack[1] = r2; // [sp + 0x4]
    r3 = *(u32*)(r4 + 0x50);
    r1 = (r1 << 11);
    r0 = r3;
    stack[8] = r3; // [sp + 0x20]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0800B3A4: BL 0x08046E58
    stack[0] = r0; // [sp + 0x0]
    r3 = stack[8]; // [sp + 0x20]
    r1 = *(u32*)(r4 + 0x5C);
    r3 -= 0x8U;
    r12 = r3;
    r1 *= r3;
    r3 = 0xC0002100U; // [0x0800B528]
    r2 = *(u32*)(r4 + 0x60);
    *(u32*)(r5) = (u32)r3;
    r0 = *(u32*)(r4 + 0x68);
    r3 = *(u32*)(r4 + 0x50);
    r2 += 0xE0U;
    r0 *= r3;
    r3 = r12;
    r3 = (r3 << 5);
    r0 = r0 + r3;
    r0 = r0 - r1;
    stack[7] = r3; // [sp + 0x1C]
    stack[6] = r3; // [sp + 0x18]
    r3 = ((u32)((s32)r0 >> 31));
    r3 = (r3 >> 29);
    r0 = r3 + r0;
    r0 = ((u32)((s32)r0 >> 3));
    r0 = (r0 << 23);
    r3 = 0xC0002100U; // [0x0800B528]
    r0 = (r0 >> 7);
    r0 |= r3;
    r3 = (r2 << 24);
    r3 = (r3 >> 24);
    r0 = (r0 >> 8);
    r0 = (r0 << 8);
    r0 |= r3;
    stack[5] = r3; // [sp + 0x14]
    stack[4] = r3; // [sp + 0x10]
    *(u32*)(r5) = (u32)r0;
    r3 = r0;
    r0 = r4;
    r0 += 0x60U;
    lr = r0;
    r0 = *(u16*)(r0 + 0x18);
    r2 = *(u32*)(r5 + 0x4);
    r2 = (r2 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r2 = (r2 << 10);
    r0 |= r2;
    r2 = 0x3E000000U; // (31 << 25)
    r3 &= ~r2;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r2 = stack[1]; // [sp + 0x4]
    r0 = r3;
    r2 = (r2 << 27);
    r2 = (r2 >> 2);
    stack[3] = r2; // [sp + 0xC]
    stack[2] = r2; // [sp + 0x8]
    r0 |= r2;
    r2 = 0xC0002100U; // [0x0800B528]
    *(u32*)(r5) = (u32)r0;
    *(u32*)(r5 + 0x8) = (u32)r2;
    r2 = *(u32*)(r4 + 0x6C);
    r3 = *(u32*)(r4 + 0x50);
    r0 = r5;
    r2 *= r3;
    r3 = stack[6]; // [sp + 0x18]
    r0 += 0x8U;
    r2 = r2 + r3;
    r2 = r2 - r1;
    r3 = ((u32)((s32)r2 >> 31));
    r3 = (r3 >> 29);
    r2 = r3 + r2;
    r2 = ((u32)((s32)r2 >> 3));
    r2 = (r2 << 23);
    r3 = 0xC0002100U; // [0x0800B528]
    r2 = (r2 >> 7);
    r2 |= r3;
    r2 = (r2 >> 8);
    r3 = stack[4]; // [sp + 0x10]
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r0) = (u32)r2;
    r5 = r2;
    r2 = lr;
    r2 = *(u16*)(r2 + 0x1A);
    r3 = *(u32*)(r0 + 0x4);
    r3 = (r3 >> 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r3 = (r3 << 10);
    r2 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r2 = r5;
    r5 = 0x3E000000U; // (31 << 25)
    r2 &= ~r5;
    r3 = r2;
    r2 = stack[2]; // [sp + 0x8]
    r5 = 0xC000A100U; // [0x0800B52C]
    r2 |= r3;
    *(u32*)(r0) = (u32)r2;
    r0 += 0x8U;
    *(u32*)(r0) = (u32)r5;
    r2 = *(u32*)(r4 + 0x70);
    r3 = *(u32*)(r4 + 0x50);
    r2 *= r3;
    r3 = r12;
    r3 = (r3 << 4);
    r2 = r2 + r3;
    r2 = r2 - r1;
    r3 = ((u32)((s32)r2 >> 31));
    r3 = (r3 >> 29);
    r2 = r3 + r2;
    r2 = ((u32)((s32)r2 >> 3));
    r2 = (r2 << 23);
    r2 = (r2 >> 7);
    r2 |= r5;
    r2 = (r2 >> 8);
    r3 = stack[4]; // [sp + 0x10]
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r0) = (u32)r2;
    r5 = r2;
    r2 = lr;
    r2 = *(u16*)(r2 + 0x1C);
    r3 = *(u32*)(r0 + 0x4);
    r3 = (r3 >> 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r3 = (r3 << 10);
    r2 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r2 = r5;
    r5 = 0x3E000000U; // (31 << 25)
    r3 = stack[2]; // [sp + 0x8]
    r2 &= ~r5;
    r2 |= r3;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r4 + 0x24);
    r0 += 0x8U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B50A;
    r3 = 0xC0002100U; // [0x0800B528]
    *(u32*)(r0) = (u32)r3;
    r2 = *(u32*)(r4 + 0x74);
    r4 = *(u32*)(r4 + 0x50);
    r2 *= r4;
    r4 = stack[7]; // [sp + 0x1C]
    r2 = r2 + r4;
    r1 = r2 - r1;
    r2 = ((u32)((s32)r1 >> 31));
    r2 = (r2 >> 29);
    r1 = r2 + r1;
    r1 = ((u32)((s32)r1 >> 3));
    r1 = (r1 << 23);
    r1 = (r1 >> 7);
    r1 |= r3;
    r1 = (r1 >> 8);
    r3 = stack[5]; // [sp + 0x14]
    r1 = (r1 << 8);
    r1 |= r3;
    *(u32*)(r0) = (u32)r1;
    r2 = lr;
    r2 = *(u16*)(r2 + 0x1E);
    r3 = *(u32*)(r0 + 0x4);
    r3 = (r3 >> 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r3 = (r3 << 10);
    r2 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r2 = r5;
    r1 &= ~r2;
    r2 = stack[3]; // [sp + 0xC]
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r0 += 0x8U;
loc_0800B50A:
    r1 = stack[0]; // [sp + 0x0]
    r2 = 0x0U;
    *(u16*)(r7 + 0x6) = (u16)r1;
    *(u16*)(r7 + 0xE) = (u16)r2;
    *(u16*)(r7 + 0x16) = (u16)r2;
    *(u16*)(r7 + 0x1E) = (u16)r1;
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return sub_0800B382(r0, r1, r2, r3);
}

// ROM Address: 0x0800B532..0x0800B558 (38 bytes, Thumb)
u32 sub_0800B532(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r2 + 0xC);
    r3 = 0x68U;
    r1 = *(u8*)(r4);
    r1 *= r3;
    r3 = 0x4F8U; // (159 << 3)
    r1 = r1 + r4;
    r1 = r1 + r3;
    r1 += 0x2CU;
    r1 = *(u16*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800B558(r0, r1, r2, r3);
    r1 = r0;
    r0 = *(u32*)(r2 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800B550
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800B558..0x0800B55C (4 bytes, Thumb)
u32 sub_0800B558(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800B55C..0x0800B5CA (110 bytes, Thumb)
u32 sub_0800B55C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r5 = r1;
    r0 += 0x1U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = (r0 << 27);
    r1 = (r0 >> 30);
    r0 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0800B58A;
    *(u32*)(r4 + 0x10) = (u32)r1;
    r0 = *(u16*)(r4 + 0xC);
    r2 = 0x06010000U; // [0x0800B7FC]
    r1 = (r1 << 8);
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r2 = 0x087144D8U; // [0x0800B800]
    r1 = r1 + r2;
    r2 = 0xFFU;
    r2 += 0x1U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800B586: BL 0x08049138
loc_0800B58A:
    r0 = *(u32*)(r5);
    r1 = r0;
    r1 += 0x8U;
    *(u32*)(r5) = (u32)r1;
    r1 = 0x405C2000U; // [0x0800B804]
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r4 + 0x18);
    r2 = *(u32*)(r2 + 0x28);
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u16*)(r4 + 0xC);
    r2 = *(u32*)(r0 + 0x4);
    r2 = (r2 >> 10);
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    r2 = (r2 << 10);
    r1 |= r2;
    r2 = 0xC00U; // (3 << 10)
    r1 &= ~r2;
    r2 = 0x400U; // (1 << 10)
    r1 = r1 + r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_0800B5CA(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0800B5CA..0x0800B5CE (4 bytes, Thumb)
u32 sub_0800B5CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800B5CE..0x0800B5EC (30 bytes, Thumb)
u32 sub_0800B5CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08011818(r0, r1, r2, r3); // 0x0800B5D2
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_0800B5EC(r0, r1, r2, r3);
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800B5EC..0x0800B5F0 (4 bytes, Thumb)
u32 sub_0800B5EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800B5F0..0x0800B608 (24 bytes, Thumb)
u32 sub_0800B5F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800B608(r0, r1, r2, r3);
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800B5FC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800B608(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800B608..0x0800B664 (92 bytes, Thumb)
u32 sub_0800B608(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800B808]
    r6 = 0x200U; // (1 << 9)
    r5 = 0x08071C90U; // [0x0800B7F8]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5 + 0x8);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800B618
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800B630;
    r1 = r6;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800B624: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800B62C
loc_0800B630:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804B4D8U /* &VTable_0804B4D8 */; // [0x0800B80C]
    r2 = 0x10U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x18U;
    r1 = 0x20U;
    r6 = r0;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0800B640
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r7;
    r0 = *(u32*)(r5 + 0x14);
    r1 = 0x1U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x1B) = (u8)r0;
    *(u8*)(r6 + 0x2) = (u8)r1;
    r1 = 0x0803F70DU; // [0x0800B810]
    r0 = 0x0U;
    *(u32*)(r6 + 0x20) = (u32)r1;
    *(u8*)(r4 + 0x18) = (u8)r0;
    r0 = r4;
    return sub_0800B606(r0, r1, r2, r3);
}

// ROM Address: 0x0800B666..0x0800B69E (56 bytes, Thumb)
u32 sub_0800B666(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r2 + 0xC);
    r3 = 0x68U;
    r1 = *(u8*)(r4);
    r1 *= r3;
    r3 = 0x4F8U; // (159 << 3)
    r1 = r1 + r4;
    r1 = r1 + r3;
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0800B692;
    r1 = *(u8*)(r1 + 0x14);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r3 = 0x086B82ECU; // [0x0800B814]
    r1 = (r1 << 3);
    r1 = r1 + r3;
    r1 = *(u8*)(r1);
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    if (cmp_lhs != cmp_rhs) return sub_0800B69E(r0, r1, r2, r3);
loc_0800B692:
    r1 = r0;
    r0 = *(u32*)(r2 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800B696
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800B69E..0x0800B6A2 (4 bytes, Thumb)
u32 sub_0800B69E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800B6A2..0x0800B7B0 (270 bytes, Thumb)
u32 sub_0800B6A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x08071C90U; // [0x0800B7F8]
    r4 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r6 = r1;
    r1 = *(u8*)(r0);
    r3 = 0x68U;
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x8);
    r3 = 0x00000445U; // [0x0800B818]
    r1 = *(u32*)(r4 + 0x10);
    r0 *= r3;
    r0 = ((u32)((s32)r0 >> 16));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B7AE;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = sub_080530F4(r0, r1, r2, r3); // 0x0800B6CC
    r1 += 0x30U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x4) = (u16)r1;
    r0 = sub_08053010(r0, r1, r2, r3); // 0x0800B6D6
    r1 += 0x30U;
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x6) = (u16)r1;
    r0 += 0x30U;
    *(u16*)(r3 + 0x8) = (u16)r0;
    r0 = *(u32*)(r4 + 0x3C);
    r2 = *(u32*)(r4 + 0x48);
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0800B6EA: BL 0x08046E40
    r3 = 0x0; // sp + 0x0
    r1 = *(u16*)(r3 + 0x4);
    r7 = r5;
    r0 = *(u32*)(r5 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0800B700;
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0x1U;
    goto loc_0800B70C;
loc_0800B700:
    r0 = *(u32*)(r0);
    r1 = (r1 << 1);
    r1 = *(u16*)(r0 + r1);
    r1 = (r1 << 1);
    r0 = *(u16*)(r0 + r1);
    r0 += 0x1U;
loc_0800B70C:
    r1 = 0x8U;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0xFU;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r4;
    r0 += 0x18U;
    r3 = 0x0; // sp + 0x0
    r1 = *(u16*)(r3 + 0x4);
    r5 = r0;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0800B720: BL 0x0803DE50
    r0 = 0x08071C90U; // [0x0800B7F8]
    r7 = 0xFU;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u32*)(r0);
    r0 = 0x74U;
    r0 = *(u16*)(r1 + r0);
    r0 = (r0 << 1);
    r0 = *(u16*)(r1 + r0);
    r1 = 0xAU;
    r0 += 0x1U;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r1 = 0x3AU;
    r0 = r5;
    *(u32*)(r4 + 0x20) = (u32)r7;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0800B742: BL 0x0803DE50
    r0 = 0x08071C90U; // [0x0800B7F8]
    r3 = 0x0; // sp + 0x0
    r0 = *(u32*)(r0 + 0x10);
    r1 = *(u16*)(r3 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0800B758;
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0x1U;
    goto loc_0800B764;
loc_0800B758:
    r0 = *(u32*)(r0);
    r1 = (r1 << 1);
    r1 = *(u16*)(r0 + r1);
    r1 = (r1 << 1);
    r0 = *(u16*)(r0 + r1);
    r0 += 0x1U;
loc_0800B764:
    r1 = 0x12U;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r7;
    r3 = 0x0; // sp + 0x0
    r1 = *(u16*)(r3 + 0x6);
    r0 = r5;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0800B772: BL 0x0803DE50
    r0 = 0x08071C90U; // [0x0800B7F8]
    r3 = 0x0; // sp + 0x0
    r0 = *(u32*)(r0 + 0x10);
    r1 = *(u16*)(r3 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0800B788;
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0x1U;
    goto loc_0800B794;
loc_0800B788:
    r0 = *(u32*)(r0);
    r1 = (r1 << 1);
    r1 = *(u16*)(r0 + r1);
    r1 = (r1 << 1);
    r0 = *(u16*)(r0 + r1);
    r0 += 0x1U;
loc_0800B794:
    r1 = 0x18U;
    r0 = r1 - r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r7;
    r3 = 0x0; // sp + 0x0
    r1 = *(u16*)(r3 + 0x8);
    r0 = r5;
    r0 = sub_0803DE50(r0, r1, r2, r3); // 0x0800B7A2: BL 0x0803DE50
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0800B7FC]
    r0 = (r0 << 5);
    return sub_0800B7B0(r0, r1, r2, r3);
loc_0800B7AE:
    return sub_0800B7B8(r0, r1, r2, r3);
}

// ROM Address: 0x0800B7B0..0x0800B828 (120 bytes, Thumb)
u32 sub_0800B7B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0 + r1;
    r0 = r5;
    r0 = sub_0803F9B8(r0, r1, r2, r3); // 0x0800B7B4
    r0 = *(u32*)(r6);
    r3 = 0x88U;
    r1 = r0;
    r1 += 0x8U;
    *(u32*)(r6) = (u32)r1;
    r1 = 0x80086000U; // [0x0800B81C]
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r4 + 0x14);
    r2 = *(u32*)(r2 + 0x28);
    r2 = r3 - r2;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u16*)(r4 + 0xC);
    r2 = *(u32*)(r0 + 0x4);
    r2 = (r2 >> 10);
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    r2 = (r2 << 10);
    r1 |= r2;
    r2 = 0xC00U; // (3 << 10)
    r1 &= ~r2;
    r2 = 0x400U; // (1 << 10)
    r1 = r1 + r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = 0x0U;
    return r0;
    r0 = r0;
    r0 = r2 + 2;
    r7 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r8 += r11;
    r1 = (r6 >> 1);
    r0 = 0x0U;
    r4 ^= r3;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r3 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r5 = (r0 << 17);
    r0 = r0;
    *(u32*)(r0) = (u32)r0;
    *(u16*)(r1) = (u16)r0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_0800B828(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0800B828..0x0800B82C (4 bytes, Thumb)
u32 sub_0800B828(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800B82C..0x0800B84A (30 bytes, Thumb)
u32 sub_0800B82C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08011818(r0, r1, r2, r3); // 0x0800B830
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_0800B84A(r0, r1, r2, r3);
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800B84A..0x0800B84E (4 bytes, Thumb)
u32 sub_0800B84A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800B84E..0x0800B91A (204 bytes, Thumb)
u32 sub_0800B84E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    *(u8*)(r0 + 0x1C) = (u8)r1;
    return r0; // BX lr
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800B868;
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800B85C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800B868;
    r0 = r4;
    return r0;
loc_0800B868:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800BC48]
    r6 = 0x500U; // (5 << 8)
    r5 = 0x08071C90U; // [0x0800BC4C]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5 + 0x8);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800B878
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800B890;
    r1 = r6;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800B884: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800B88C
loc_0800B890:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x08049FECU /* &VTable_08049FEC */; // [0x0800BC50]
    r1 = 0x8U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x10U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r1;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0xFFU;
    *(u8*)(r4 + 0x1C) = (u8)r0;
    r0 = r4;
    return r0;
    r4 = r0;
    r0 = 0x08049FECU /* &VTable_08049FEC */; // [0x0800BC50]
    r6 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    r5 = 0x08071C90U; // [0x0800BC4C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B8CC;
    r1 = r0;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800B8C8
loc_0800B8CC:
    r0 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B8DA;
    r1 = r0;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800B8D6
loc_0800B8DA:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800BC48]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0800BC54]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B8EC;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0800B8E8
loc_0800B8EC:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0800BC58]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B8FA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0800B8F6: BL 0x0803D63C
loc_0800B8FA:
    return r0;
    r1 = *(u32*)(r0 + 0x28);
    r2 = *(u32*)(r0 + 0x14);
    r1 = r1 + r2;
    r2 = 0xFU;
    r2 = ~r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    *(u32*)(r0 + 0x28) = (u32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0800B91A(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x08071C90U; // [0x0800BC4C]
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800B914
    return r0;
}

// ROM Address: 0x0800B91A..0x0800B928 (14 bytes, Thumb)
u32 sub_0800B91A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs <= cmp_rhs) return sub_0800B918(r0, r1, r2, r3);
    r1 = 0x8U;
    *(u32*)(r0 + 0x28) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    return sub_0800B918(r0, r1, r2, r3);
}

// Evidence: calls BIOS Div (SWI 0x06) at 0800BA7A, 0800BA92, 0800BAAC, 0800BAC2; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0800B928
// ROM Address: 0x0800B928..0x0800BAFC (468 bytes, Thumb)
u32 Math_Divide1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x08071C90U; // [0x0800BC4C]
    r4 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800B970;
    r1 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0800B970;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x0800BC5C]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800B970;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800B5F0(r0, r1, r2, r3); // 0x0800B962: BL 0x0800B5F0
    r1 = r0;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r5 + 0x8);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800B96C: BL 0x0801191A
loc_0800B970:
    r0 = *(u32*)(r5);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 22);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800B994;
    r0 = *(u32*)(r5 + 0xC);
    r0 = sub_080043C2(r0, r1, r2, r3); // 0x0800B97C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800B994;
    r0 = *(u32*)(r5 + 0x4);
    r5 = 0x000005C4U; // [0x0800BC64]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x0800BC60]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800B990
loc_0800B994:
    r0 = r4;
    r0 = sub_0800B8FC(r0, r1, r2, r3); // 0x0800B996
    return r0;
    r5 = r2;
    r4 = r0;
    r0 = *(u32*)(r1);
    r2 = 0x80086000U; // [0x0800BC68]
    *(u32*)(r0) = (u32)r2;
    r6 = *(u32*)(r4 + 0x28);
    r3 = (r6 << 24);
    r3 = (r3 >> 24);
    r2 |= r3;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u16*)(r4 + 0xC);
    r3 = *(u32*)(r0 + 0x4);
    r6 = (r3 >> 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r6 = (r6 << 10);
    r6 |= r2;
    r3 = r6;
    r2 = 0xC00U; // (3 << 10)
    r6 = 0x400U; // (1 << 10)
    r3 &= ~r2;
    r7 = r3 + r6;
    *(u32*)(r0 + 0x4) = (u32)r7;
    r7 = 0x40282000U; // [0x0800BC6C]
    r0 += 0x8U;
    *(u32*)(r0) = (u32)r7;
    r3 = *(u32*)(r4 + 0x28);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r7 |= r3;
    *(u32*)(r0) = (u32)r7;
    r7 = *(u16*)(r4 + 0xC);
    r3 = *(u32*)(r0 + 0x4);
    r7 += 0x10U;
    r12 = r7;
    r7 = (r3 >> 10);
    r3 = r12;
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r7 = (r7 << 10);
    r7 |= r3;
    r7 &= ~r2;
    r7 = r7 + r6;
    *(u32*)(r0 + 0x4) = (u32)r7;
    r7 = 0x80386000U; // [0x0800BC70]
    r0 += 0x8U;
    *(u32*)(r0) = (u32)r7;
    r3 = *(u32*)(r4 + 0x28);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r7 |= r3;
    *(u32*)(r0) = (u32)r7;
    r7 = *(u16*)(r4 + 0xC);
    r3 = *(u32*)(r0 + 0x4);
    r7 += 0x18U;
    r12 = r7;
    r7 = (r3 >> 10);
    r3 = r12;
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r7 = (r7 << 10);
    r7 |= r3;
    r7 &= ~r2;
    r2 = r7 + r6;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r0 += 0x8U;
    r6 = r5;
    r6 += 0x16U;
    r3 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r0 = (u32)(*(s16*)(r6 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800BA6E;
    r0 = (u32)(*(s16*)(r6 + r3));
    r3 = (r0 << 2);
    r0 = r3 + r0;
    r1 = r6 + 2;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r1 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0800BA6E;
    r0 = 0x03000F90U; // [0x0800BC74]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r4 + 0x10);
    r1 = r0 - r1;
    cmp_lhs = (s32)r1; cmp_rhs = 60;
    if (cmp_lhs <= cmp_rhs) goto loc_0800BA6E;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x08071C90U; // [0x0800BC4C]
    r1 = 0x08319488U; // [0x0800BC60]
    r3 = 0x000005C4U; // [0x0800BC64]
    r0 = *(u32*)(r0 + 0x4);
    r7 = 0x0U;
    r2 = 0x20U;
    r1 += 0xCU;
    r0 = r0 + r3;
    r3 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800BA6A
loc_0800BA6E:
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r6 + r3));
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r6 + r3));
    r6 = 0x29U;
    r0 *= r6;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    *(u8*)(r3) = (u8)r0;
    r0 = r5;
    r0 += 0x1AU;
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r0 *= r6;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    r6 = r5;
    r6 += 0x1CU;
    *(u8*)(r3 + 0x1) = (u8)r0;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r6 + r3));
    r0 = r6 + 2;
    r0 = *(u16*)(r0);
    r3 = 0x29U;
    r0 *= r3;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    *(u8*)(r3 + 0x2) = (u8)r0;
    r3 = 0x0U;
    r1 = (u32)(*(s16*)(r6 + r3));
    r0 = r6 + 4;
    r0 = *(u16*)(r0);
    r3 = 0x29U;
    r0 *= r3;
    r0 = Bios_Div(r0, r1); // SWI 0x06
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    *(u8*)(r3 + 0x3) = (u8)r0;
    r1 = 0x48U;
    r0 = r5;
    r0 = sub_0801363E(r0, r1, r2, r3); // 0x0800BAD0
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = ((u32)((s32)r0 >> 15));
    *(u8*)(r3 + 0x5) = (u8)r0;
    r1 = *(u8*)(r5 + 0x15);
    r0 = r5;
    r0 = sub_080135A2(r0, r1, r2, r3); // 0x0800BAE6
    r6 = r0;
    r1 = *(u32*)(r0 + 0x10);
    r0 = r5;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800BAF0: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800BAFC(r0, r1, r2, r3);
    r0 = *(u32*)(r6 + 0x4);
    return sub_0800BAFE(r0, r1, r2, r3);
}

// ROM Address: 0x0800BAFC..0x0800BAFE (2 bytes, Thumb)
u32 sub_0800BAFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r6 + 0x8);
    return r0;
}

// ROM Address: 0x0800BAFE..0x0800BC20 (290 bytes, Thumb)
u32 sub_0800BAFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    *(u32*)(r3 + 0x8) = (u32)r0;
    r0 = *(u8*)(r3 + 0x2);
    r1 = *(u8*)(r3 + 0x3);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0800BB12;
    r0 = *(u8*)(r3 + 0x3);
    *(u8*)(r3 + 0x2) = (u8)r0;
loc_0800BB12:
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    r0 = *(u8*)(r3 + 0x1);
    r1 = *(u8*)(r3 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0800BB24;
    r0 = *(u8*)(r3 + 0x2);
    *(u8*)(r3 + 0x1) = (u8)r0;
loc_0800BB24:
    r5 = r4;
    r6 = 0x500U; // (5 << 8)
    r5 += 0x1CU;
    r1 = r5;
    r6 += sp;
    r2 = 0xCU;
    r0 = r6;
    r0 = sub_08046C54(r0, r1, r2, r3); // 0x0800BB34: BL 0x08046C54
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0800BC20(r0, r1, r2, r3);
    r0 = *(u32*)r6; r6 += 4;
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    r3 = 0x500U; // (5 << 8)
    r6 = 0x200U; // (1 << 9)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x8);
    r2 = r6;
    r5 = sp;
    r0 = sp;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800BB52: BL 0x08049138
    r2 = 0x300U; // (3 << 8)
    r0 = r5 + r6;
    r1 = 0x087137D8U; // [0x0800BC78]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800BB5E: BL 0x08049138
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    r0 = *(u8*)(r3);
    cmp_lhs = (s32)r0; cmp_rhs = 41;
    if (cmp_lhs >= cmp_rhs) goto loc_0800BB8A;
    r2 = 0x08071C90U; // [0x0800BC4C]
    r2 += 0x20U;
    r6 = 0x1U;
loc_0800BB74:
    r1 = (r0 << 4);
    r3 = *(u32*)(r2 + r1);
    r1 = r1 + r2;
    *(u8*)(r5 + r3) = (u8)r6;
    r3 = *(u32*)(r1 + 0x4);
    r0 += 0x1U;
    *(u8*)(r5 + r3) = (u8)r6;
    r1 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 41;
    *(u8*)(r5 + r1) = (u8)r6;
    if (cmp_lhs < cmp_rhs) goto loc_0800BB74;
loc_0800BB8A:
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    r1 = *(u8*)(r3 + 0x3);
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800BBC0;
loc_0800BB98:
    r3 = 0x08071F40U; // [0x0800BC7C]
    r2 = (r0 << 4);
    r7 = *(u32*)(r3 + r2);
    r1 = 0x08713FD8U; // [0x0800BC80]
    r2 = r2 + r3;
    r6 = *(u8*)(r1 + r7);
    r3 = 0x500U; // (5 << 8)
    *(u8*)(r5 + r7) = (u8)r6;
    r6 = *(u32*)(r2 + 0x4);
    r3 += sp;
    r7 = *(u8*)(r1 + r6);
    r0 += 0x1U;
    *(u8*)(r5 + r6) = (u8)r7;
    r2 = *(u32*)(r2 + 0x8);
    r1 = *(u8*)(r1 + r2);
    *(u8*)(r5 + r2) = (u8)r1;
    r1 = *(u8*)(r3 + 0x3);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0800BB98;
loc_0800BBC0:
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    r1 = *(u8*)(r3 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800BBF4;
loc_0800BBCC:
    r3 = 0x08071F40U; // [0x0800BC7C]
    r2 = (r0 << 4);
    r7 = *(u32*)(r3 + r2);
    r1 = 0x08713AD8U; // [0x0800BC84]
    r2 = r2 + r3;
    r6 = *(u8*)(r1 + r7);
    r3 = 0x500U; // (5 << 8)
    *(u8*)(r5 + r7) = (u8)r6;
    r6 = *(u32*)(r2 + 0x4);
    r3 += sp;
    r7 = *(u8*)(r1 + r6);
    r0 += 0x1U;
    *(u8*)(r5 + r6) = (u8)r7;
    r2 = *(u32*)(r2 + 0x8);
    r1 = *(u8*)(r1 + r2);
    *(u8*)(r5 + r2) = (u8)r1;
    r1 = *(u8*)(r3 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0800BBCC;
loc_0800BBF4:
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    r1 = *(u8*)(r3 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0800BC02;
    r0 = *(u8*)(r3 + 0x1);
loc_0800BC02:
    cmp_lhs = (s32)r0; cmp_rhs = 41;
    if (cmp_lhs >= cmp_rhs) return sub_0800BC24(r0, r1, r2, r3);
    r2 = 0x08071F40U; // [0x0800BC7C]
    r6 = 0x1U;
    r1 = (r0 << 4);
    r3 = *(u32*)(r2 + r1);
    r1 = r1 + r2;
    *(u8*)(r5 + r3) = (u8)r6;
    r3 = *(u32*)(r1 + 0x4);
    r0 += 0x1U;
    *(u8*)(r5 + r3) = (u8)r6;
    r1 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 41;
    *(u8*)(r5 + r1) = (u8)r6;
    return sub_0800BC22(r0, r1, r2, r3);
}

// ROM Address: 0x0800BC20..0x0800BC46 (38 bytes, Thumb)
u32 sub_0800BC20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0800BCC0(r0, r1, r2, r3);
    if (cmp_lhs < cmp_rhs) return sub_0800BC0A(r0, r1, r2, r3);
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    r0 = *(u8*)(r3 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 72;
    if (cmp_lhs >= cmp_rhs) return sub_0800BC8E(r0, r1, r2, r3);
    r2 = 0x080721D0U; // [0x0800BC88]
    r6 = 0x1U;
    r1 = (r0 << 3);
    r3 = *(u32*)(r2 + r1);
    r1 = r1 + r2;
    *(u8*)(r5 + r3) = (u8)r6;
    r1 = *(u32*)(r1 + 0x4);
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 72;
    *(u8*)(r5 + r1) = (u8)r6;
    return sub_0800BC8C(r0, r1, r2, r3);
}

// ROM Address: 0x0800BC5A..0x0800BD72 (280 bytes, Thumb)
u32 sub_0800BC5A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    *(u32*)(r0) = (u32)r0;
    *(u16*)(r1) = (u16)r0;
    r0 = 0x0U;
    r0 &= r5;
    *(u32*)(r0) = (u32)r0;
    *(u16*)(r7) = (u16)r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r7 += 0xD8U;
    r1 = (r6 >> 1);
    r0 = r0 - 5;
    r7 = (r0 >> 32);
    r7 -= 0xD8U;
    r1 = (r6 >> 1);
    r2 -= 0xD8U;
    r1 = (r6 >> 1);
    r1 = 0xD0U;
    r7 = (r0 >> 32);
    if (cmp_lhs < cmp_rhs) return sub_0800BC34(r0, r1, r2, r3);
    r3 = 0x500U; // (5 << 8)
    r3 += sp;
    r0 = *(u8*)(r3 + 0x5);
    r1 = 0x08071CA8U; // [0x0800BE70]
    r0 = (u32)(*(s8*)(r1 + r0));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800BCAE;
    r1 = 0x08072410U; // [0x0800BE74]
    r2 = 0x1U;
loc_0800BCA2:
    r0 -= 0x1U;
    r3 = (r0 << 2);
    r3 = *(u32*)(r1 + r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    *(u8*)(r5 + r3) = (u8)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0800BCA2;
loc_0800BCAE:
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0800BE78]
    r2 = 0x5U;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = (r2 << 8);
    r1 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0800BCBC: BL 0x08049138
    return r0;
    r6 = 0x08071CA8U; // [0x0800BE70]
    r5 = r0;
    r6 -= 0x18U;
    r0 = *(u32*)(r6 + 0xC);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0x18);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800BD3C;
    r0 += 0x2CU;
    r0 = *(u16*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800BD3C;
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800BCF2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0800BD32;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800BE7C]
    r7 = 0xFFU;
    r7 += 0x1U;
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r7;
    r0 = *(u32*)(r6 + 0x8);
    r1 = r7;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800BD08
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800BD20;
    r1 = r7;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800BD14: BL 0x08011732
    r1 = r7;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800BD1C
loc_0800BD20:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804C070U /* &VTable_0804C070 */; // [0x0800BE80]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r5;
loc_0800BD32:
    *(u32*)(r5 + 0x18) = (u32)r4;
    r0 = *(u32*)(r6 + 0x8);
    r1 = r4;
    r0 = List_Append(r0, r1, r2, r3); // 0x0800BD38: BL 0x0801191A
loc_0800BD3C:
    r0 = *(u32*)(r6 + 0xC);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r2 = r0 + r1;
    r1 = stack[2]; // [sp + 0x8]
    r0 = r5;
    r0 = sub_0800B99C(r0, r1, r2, r3); // 0x0800BD50
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0800BD7A(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs == cmp_rhs) return sub_0800BD72(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 21;
    if (cmp_lhs != cmp_rhs) return sub_0800BD82(r0, r1, r2, r3);
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800BD72..0x0800BD86 (20 bytes, Thumb)
u32 sub_0800BD72(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0800B8FC(r0, r1, r2, r3); // 0x0800BD72
    r0 = 0x0U;
    return sub_0800BD70(r0, r1, r2, r3);
    r1 = 0xFFU;
    *(u8*)(r0 + 0x1C) = (u8)r1;
    r0 = 0x0U;
    return sub_0800BD70(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0800BD70(r0, r1, r2, r3);
}

// ROM Address: 0x0800BD86..0x0800BD8E (8 bytes, Thumb)
u32 sub_0800BD86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_0800BD8E(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0800BD8E..0x0800BD92 (4 bytes, Thumb)
u32 sub_0800BD8E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800BD92..0x0800BE70 (222 bytes, Thumb)
u32 sub_0800BD92(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08011818(r0, r1, r2, r3); // 0x0800BD96
    r0 = 0xFFU;
    *(u8*)(r4 + 0x1C) = (u8)r0;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x30);
    r2 = 0x80U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800BDAE: BL 0x08046AA2
    r5 = r0;
    r6 = 0x08071CA8U; // [0x0800BE70]
    r0 = *(u32*)(r4 + 0x2C);
    r6 -= 0x18U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800BDEA;
    r0 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0800BDEA;
    r0 = *(u8*)(r5 + 0x14);
    r1 = 0x086B82ECU; // [0x0800BE84]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800BDEA;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800B5F0(r0, r1, r2, r3); // 0x0800BDDC: BL 0x0800B5F0
    r1 = r0;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = *(u32*)(r6 + 0x8);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800BDE6: BL 0x0801191A
loc_0800BDEA:
    r0 = *(u32*)(r4 + 0x30);
    r2 = 0x84U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800BDF4: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 22);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800BE1A;
    r0 = r5;
    r0 = sub_08013B34(r0, r1, r2, r3); // 0x0800BE02: BL 0x08013B34
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800BE1A;
    r5 = 0x000005C4U; // [0x0800BE8C]
    r0 = *(u32*)(r6 + 0x4);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x0800BE88]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0800BE16
loc_0800BE1A:
    r0 = *(u32*)(r4 + 0x34);
    r2 = 0x80U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800BE24: BL 0x08046AA2
    r5 = r0;
    r0 = *(u32*)(r4 + 0x34);
    r2 = 0x84U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800BE34: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 22);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0800BE46;
    r0 = r5;
    r0 = sub_08013B34(r0, r1, r2, r3); // 0x0800BE42: BL 0x08013B34
loc_0800BE46:
    r0 = r4;
    r0 = sub_0800B8FC(r0, r1, r2, r3); // 0x0800BE48
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x30);
    r5 = r1;
    r1 = *(u32*)(r0);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800BE5E: BL 0x08046AA2
    r2 = r0;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800B99C(r0, r1, r2, r3); // 0x0800BE68
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800BE70..0x0800BE72 (2 bytes, Thumb)
u32 sub_0800BE70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r5 + 2;
    return r0;
}

// ROM Address: 0x0800BE72..0x0800BF4C (218 bytes, Thumb)
u32 sub_0800BE72(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r0 >> 32);
    r4 = 0x10U;
    r7 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r4 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r7 = sp;
    r2 = 0x10U;
    r7 = r7 + r2;
    r5 = r0;
    r1 = 0xF0U;
    r0 = r7;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0800BEA0
    r0 = 0x0807248CU; // [0x0800C0A8]
    r1 = stack[13]; // [sp + 0x34]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0800BEA8
    r0 = 0x0807248CU; // [0x0800C0A8]
    r3 = 0x0; // sp + 0x0
    r0 -= 0xCU;
    r0 = *(u32*)(r0 + 0x8);
    r1 = 0x0803F5A5U; // [0x0800C0AC]
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
    r0 = *(u32*)(r5 + 0x14);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0800C0B0]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = r7;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0800BED6
    r0 = 0x0807248CU; // [0x0800C0A8]
    r6 = sp;
    r0 += 0x38U;
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
loc_0800BEE8:
    r0 = *(u16*)(r5 + 0xC);
    r1 = 0x06010000U; // [0x0800C0B4]
    r2 = r6;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r4 << 9);
    r1 = r0 + r1;
    r0 = r7;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800BEF8: BL 0x0804915C
    r0 = stack[0]; // [sp + 0x0]
    r4 += 0x1U;
    r0 += 0x20U;
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[2]; // [sp + 0x8]
    r0 += 0x20U;
    stack[2] = r0; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 7;
    if (cmp_lhs < cmp_rhs) goto loc_0800BEE8;
    r0 = 0xF0U;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r5 + 0xC);
    r1 = 0x06010000U; // [0x0800C0B4]
    r2 = r6;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = 0xE00U; // (7 << 9)
    r1 = r0 + r1;
    r0 = r7;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800BF24: BL 0x0804915C
    r1 = 0x0U;
    r0 = r7;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0800BF2C: BL 0x0803F58C
    return r0;
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800BF4C(r0, r1, r2, r3);
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800BF40: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800BF4C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800BF4C..0x0800BF94 (72 bytes, Thumb)
u32 sub_0800BF4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0xF00U; // (15 << 8)
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800C0B8]
    r5 = 0x0807248CU; // [0x0800C0A8]
    r1 = r6;
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r5 -= 0xCU;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800BF5E
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800BF76;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800BF6A: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800BF72
loc_0800BF76:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804B528U /* &VTable_0804B528 */; // [0x0800C0BC]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r7;
    r0 = 0x10U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0xF0U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = r4;
    r0 = sub_0800BE90(r0, r1, r2, r3); // 0x0800BF8C
    r0 = r4;
    return sub_0800BF4A(r0, r1, r2, r3);
}

// ROM Address: 0x0800BF94..0x0800BFCA (54 bytes, Thumb)
u32 sub_0800BF94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x10);
    r1 += 0xFFU;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r0 + 0x10) = (u8)r1;
    if (cmp_lhs != cmp_rhs) return sub_0800BFCA(r0, r1, r2, r3);
    r4 = 0x0807248CU; // [0x0800C0A8]
    r1 = r0;
    r4 -= 0xCU;
    r0 = *(u32*)(r4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800BFAA
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800BFC6;
    r0 = 0x0U;
    r0 = Object_Construct5(r0, r1, r2, r3); // 0x0800BFBA: BL 0x0800C0C8
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800BFC2: BL 0x0801191A
loc_0800BFC6:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800BFCA..0x0800BFCE (4 bytes, Thumb)
u32 sub_0800BFCA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800BFCE..0x0800C052 (132 bytes, Thumb)
u32 sub_0800BFCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)r1; r1 += 4;
    r3 = *(u32*)r1; r1 += 4;
    r1 -= 0x8U;
    r4 = r3;
    r3 += 0x20U;
    *(u32*)(r1 + 0x4) = (u32)r3;
    r3 = *(u32*)(r1 + 0x8);
    r5 = r3;
    r3 += 0x1U;
    *(u32*)(r1 + 0x8) = (u32)r3;
    r3 = 0x0U;
    r5 = (r5 << 27);
    r6 = (r5 >> 2);
    r12 = r6;
loc_0800BFEA:
    r6 = 0x80006180U; // [0x0800C0C0]
    r5 = (r3 << 21);
    r5 = r5 + r6;
    *(u32*)(r2) = (u32)r5;
    r6 = *(u16*)(r0 + 0xC);
    r7 = (r3 << 4);
    r3 += 0x1U;
    r6 = r6 + r7;
    r7 = *(u32*)(r2 + 0x4);
    r6 = (r6 << 22);
    r7 = (r7 >> 10);
    r7 = (r7 << 10);
    r6 = (r6 >> 22);
    r6 |= r7;
    *(u32*)(r2 + 0x4) = (u32)r6;
    r6 = 0x3E000000U; // (31 << 25)
    r5 &= ~r6;
    r6 = r12;
    r5 |= r6;
    *(u32*)(r2) = (u32)r5;
    r2 += 0x8U;
    cmp_lhs = (s32)r3; cmp_rhs = 7;
    if (cmp_lhs < cmp_rhs) goto loc_0800BFEA;
    r3 = 0x40E02180U; // [0x0800C0C4]
    r6 = r12;
    *(u32*)(r2) = (u32)r3;
    r3 = *(u16*)(r0 + 0xC);
    r5 = *(u32*)(r2 + 0x4);
    r3 += 0x70U;
    r3 = (r3 << 22);
    r5 = (r5 >> 10);
    r5 = (r5 << 10);
    r3 = (r3 >> 22);
    r3 |= r5;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r3 = 0x40E02180U; // [0x0800C0C4]
    r3 |= r6;
    *(u32*)(r2) = (u32)r3;
    r2 += 0x8U;
    *(u32*)(r1) = (u32)r2;
    r2 = 0xFFU;
    r2 += 0x1U;
    *(u16*)(r4 + 0x6) = (u16)r2;
    r1 = 0x0U;
    *(u16*)(r4 + 0xE) = (u16)r1;
    *(u16*)(r4 + 0x16) = (u16)r1;
    r0 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0800C052(r0, r1, r2, r3);
    *(u16*)(r4 + 0x1E) = (u16)r2;
    return sub_0800C05C(r0, r1, r2, r3);
}

// ROM Address: 0x0800C052..0x0800C068 (22 bytes, Thumb)
u32 sub_0800C052(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1000U; // (1 << 12)
    r0 = sub_08046F30(r0, r1, r2, r3); // 0x0800C056: BL 0x08046F30
    *(u16*)(r4 + 0x1E) = (u16)r0;
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) return sub_0800C068(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0800C068..0x0800C06C (4 bytes, Thumb)
u32 sub_0800C068(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800C06C..0x0800C0A2 (54 bytes, Thumb)
u32 sub_0800C06C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x0807248CU; // [0x0800C0A8]
    r1 = r0;
    r4 -= 0xCU;
    r0 = *(u32*)(r4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800C076
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800C092;
    r0 = 0x0U;
    r0 = Object_Construct5(r0, r1, r2, r3); // 0x0800C086: BL 0x0800C0C8
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0800C08E: BL 0x0801191A
loc_0800C092:
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_0800C0A2(r0, r1, r2, r3);
    r0 = sub_0800BE90(r0, r1, r2, r3); // 0x0800C09A
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0800C0A2..0x0800C0C8 (38 bytes, Thumb)
u32 sub_0800C0A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0800C0A0(r0, r1, r2, r3);
    r0 = r0;
    r4 = 0x8CU;
    r7 = (r0 >> 32);
    r3 = (r0 >> 32);
    r6 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    *(u32*)(r0 + 0x18) = (u32)r0;
    *(u16*)(r0) = (u16)r0;
    r1 = 0x80U;
    r0 >>= (r4 & 0xFF);
    return r0;
}

// Evidence: tools/behaviour/test_table.py::test_object_construct5_stores_the_two_tables_and_initialises_the_fields
// ROM Address: 0x0800C0C8..0x0800C1BC (244 bytes, Thumb)
u32 Object_Construct5(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800C0DC;
    r0 = 0x50U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800C0D0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0800C0DC;
    r0 = r4;
    return r0;
loc_0800C0DC:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800C274]
    r6 = 0xF00U; // (15 << 8)
    r5 = 0x080724D4U; // [0x0800C278]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800C0EC
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800C104;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800C0F8: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800C100
loc_0800C104:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804D8C8U /* &VTable_0804D8C8 */; // [0x0800C27C]
    r2 = 0x10U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x1CU;
    r1 = 0xF0U;
    r6 = r0;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0800C114
    r0 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x11U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    r2 = 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = 0x78U;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = 0xBU;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = 0x2U;
    *(u8*)(r4 + 0x1F) = (u8)r0;
    r1 = 0x0803F5A5U; // [0x0800C280]
    *(u8*)(r6 + 0x2) = (u8)r2;
    *(u32*)(r6 + 0x20) = (u32)r1;
    *(u8*)(r4 + 0x1C) = (u8)r2;
    r0 = r4;
    return r0;
    r1 = *(u32*)(r0 + 0x40);
    r5 = r0;
    r0 = 0x0807248CU; // [0x0800C284]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0800C14E
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0800C288]
    r0 = (r0 << 16);
    r0 = (r0 >> 14);
    r1 = *(u32*)(r1 + r0);
    r0 = r5;
    r0 += 0x1CU;
    r6 = r0;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0800C162
    r0 = *(u32*)(r5 + 0x18);
    r7 = 0x4; // sp + 0x4
    *(u32*)(r5 + 0x14) = (u32)r0;
    r0 = 0x080724D4U; // [0x0800C278]
    r0 += 0x8U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r7 -= 0x10U;
    r4 = 0x0U;
loc_0800C178:
    r0 = *(u16*)(r5 + 0xC);
    r1 = 0x06010000U; // [0x0800C28C]
    r2 = r7;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r4 << 9);
    r1 = r0 + r1;
    r0 = r6;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800C188: BL 0x0804915C
    r0 = stack[1]; // [sp + 0x4]
    r4 += 0x1U;
    r0 += 0x20U;
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[3]; // [sp + 0xC]
    r0 += 0x20U;
    stack[3] = r0; // [sp + 0xC]
    cmp_lhs = (s32)r4; cmp_rhs = 7;
    if (cmp_lhs < cmp_rhs) goto loc_0800C178;
    r0 = 0xF0U;
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u16*)(r5 + 0xC);
    r1 = 0x06010000U; // [0x0800C28C]
    r2 = r7;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = 0xE00U; // (7 << 9)
    r1 = r0 + r1;
    r0 = r6;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0800C1B4: BL 0x0804915C
    return r0;
}

// ROM Address: 0x0800C1BC..0x0800C1D2 (22 bytes, Thumb)
u32 sub_0800C1BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0800C1D0;
    r1 += 0xFFU;
    *(u8*)(r0 + 0x10) = (u8)r1;
    r1 = *(u32*)(r0 + 0x18);
    r2 = *(u32*)(r0 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_0800C1D0;
    return sub_0800C144(r0, r1, r2, r3);
loc_0800C1D0:
    return r0; // BX lr
}

// ROM Address: 0x0800C1D2..0x0800C268 (150 bytes, Thumb)
u32 sub_0800C1D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 = *(u8*)(r1 + 0x10);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0800C1DE;
    r0 = 0x0U;
loc_0800C1DE:
    return r0; // BX lr
    r6 = 0x3U;
    r2 = *(u32*)(r1);
    r7 = 0x80006000U; // [0x0800C290]
    r3 = 0x0U;
    r6 = (r6 << 10);
loc_0800C1EC:
    r4 = (r3 << 28);
    r4 = (r4 >> 7);
    r4 |= r7;
    r4 = (r4 >> 8);
    r4 = (r4 << 8);
    r4 += 0x88U;
    *(u32*)(r2) = (u32)r4;
    r4 = *(u16*)(r0 + 0xC);
    r5 = (r3 << 4);
    r3 += 0x1U;
    r4 = r4 + r5;
    r5 = *(u32*)(r2 + 0x4);
    r4 = (r4 << 22);
    r5 = (r5 >> 10);
    r5 = (r5 << 10);
    r4 = (r4 >> 22);
    r4 |= r5;
    *(u32*)(r2 + 0x4) = (u32)r4;
    r5 = *(u8*)(r0 + 0x8);
    r4 &= ~r6;
    r5 = (r5 << 26);
    r5 = (r5 >> 30);
    r5 = (r5 << 10);
    r4 |= r5;
    *(u32*)(r2 + 0x4) = (u32)r4;
    r2 += 0x8U;
    cmp_lhs = (s32)r3; cmp_rhs = 7;
    if (cmp_lhs < cmp_rhs) goto loc_0800C1EC;
    r3 = 0x40E02088U; // [0x0800C294]
    *(u32*)(r2) = (u32)r3;
    r3 = *(u16*)(r0 + 0xC);
    r4 = *(u32*)(r2 + 0x4);
    r3 += 0x70U;
    r3 = (r3 << 22);
    r4 = (r4 >> 10);
    r4 = (r4 << 10);
    r3 = (r3 >> 22);
    r3 |= r4;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r0 = *(u8*)(r0 + 0x8);
    r3 &= ~r6;
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    r0 = (r0 << 10);
    r0 |= r3;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r0 = r2;
    r0 += 0x10U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0800C268(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 23;
    if (cmp_lhs != cmp_rhs) return sub_0800C270(r0, r1, r2, r3);
    r1 = 0x2U;
    *(u8*)(r0 + 0x10) = (u8)r1;
    *(u32*)(r0 + 0x18) = (u32)r2;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0800C268..0x0800C274 (12 bytes, Thumb)
u32 sub_0800C268(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0800C144(r0, r1, r2, r3); // 0x0800C268
    r0 = 0x0U;
    return sub_0800C266(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0800C266(r0, r1, r2, r3);
}

// ROM Address: 0x0800C276..0x0800C318 (162 bytes, Thumb)
u32 sub_0800C276(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = 0xD4U;
    r7 = (r0 >> 32);
    if ((u32)cmp_lhs > (u32)cmp_rhs) return sub_0800C210(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r3 = (r0 >> 32);
    r4 = 0x8CU;
    r7 = (r0 >> 32);
    r6 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    *(u32*)(r0) = (u32)r0;
    *(u16*)(r0) = (u16)r0;
    r0 = 0x88U;
    r0 >>= (r4 & 0xFF);
    r4 = r0;
    r2 = 0x10U;
    r1 = 0x20U;
    r0 = sp;
    r5 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0800C2A6
    r0 = *(u32*)(r4 + 0x14);
    r3 = 0x0; // sp + 0x0
    r0 = *(u8*)(r0 + 0x5);
    r1 = 0x0803F5A5U; // [0x0800C42C]
    *(u8*)(r3 + 0x3) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r3 + 0x2) = (u8)r0;
    stack[8] = r1; // [sp + 0x20]
    r1 = 0x080724ECU; // [0x0800C430]
    r1 = *(u32*)(r1 + 0x8);
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x10U;
    stack[1] = r1; // [sp + 0x4]
    r1 = 0xCU;
    stack[2] = r1; // [sp + 0x8]
    *(u8*)(r3) = (u8)r0;
    r0 = stack[9]; // [sp + 0x24]
    r2 = stack[12]; // [sp + 0x30]
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0800C2D0: BL 0x08046E40
    r0 = *(u32*)(r4 + 0x14);
    r1 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_0800C2E6;
    r2 = *(u8*)(r0 + 0x6);
    r0 = r5;
    r1 = 0x0800C434U;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0800C2E2
loc_0800C2E6:
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0800C43C]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = r5;
    r0 = sub_0803F9B8(r0, r1, r2, r3); // 0x0800C2F0
    r1 = 0x0U;
    r0 = r5;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0800C2F8: BL 0x0803F58C
    return r0;
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0800C318(r0, r1, r2, r3);
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0800C30C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0800C318(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0800C318..0x0800C368 (80 bytes, Thumb)
u32 sub_0800C318(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0800C440]
    r6 = 0x200U; // (1 << 9)
    r5 = 0x080724ECU; // [0x0800C430]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800C328
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0800C340;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0800C334: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0800C33C
loc_0800C340:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804D878U /* &VTable_0804D878 */; // [0x0800C444]
    r1 = 0x8U;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r7;
    r2 = *(u8*)(r7 + 0x4);
    r0 = *(u32*)(r5);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0800C34E
    *(u32*)(r4 + 0x10) = (u32)r0;
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r0 = *(u8*)(r0 + 0x8);
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_0800C298(r0, r1, r2, r3); // 0x0800C360
    r0 = r4;
    return sub_0800C316(r0, r1, r2, r3);
}

// ROM Address: 0x0800C368..0x0800C3F4 (140 bytes, Thumb)
u32 sub_0800C368(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x10);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0800C372: BL 0x08046AA2
    return r0;
    r2 = 0x03000F90U; // [0x0800C448]
    r2 = *(u32*)(r2 + 0x4);
    r3 = 0x087B6EECU; // [0x0800C44C]
    r2 = (r2 << 24);
    r2 = (r2 >> 22);
    r2 = *(u32*)(r3 + r2);
    r3 = *(u32*)(r1);
    r4 = ((u32)((s32)r2 >> 14));
    r2 = 0x080724ECU; // [0x0800C430]
    r5 = r3;
    r5 += 0x8U;
    r2 = *(u32*)(r2 + 0x4);
    *(u32*)(r1) = (u32)r5;
    r1 = 0x80006000U; // [0x0800C450]
    r2 += 0x28U;
    *(u32*)(r3) = (u32)r1;
    r5 = *(u32*)(r0 + 0x14);
    r6 = *(u32*)(r2);
    r5 = *(u16*)(r5);
    r5 = r5 - r6;
    r5 -= 0x10U;
    r5 = (r5 << 23);
    r5 = (r5 >> 7);
    r1 |= r5;
    *(u32*)(r3) = (u32)r1;
    r5 = *(u32*)(r0 + 0x14);
    r2 = *(u32*)(r2 + 0x4);
    r5 = *(u16*)(r5 + 0x2);
    r1 = (r1 >> 8);
    r1 = (r1 << 8);
    r4 = r5 + r4;
    r2 = r4 - r2;
    r2 += 0xF8U;
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r1 |= r2;
    *(u32*)(r3) = (u32)r1;
    r1 = *(u8*)(r0 + 0x8);
    r2 = *(u32*)(r3 + 0x4);
    r4 = 0x3U;
    r1 = (r1 << 26);
    r1 = (r1 >> 30);
    r4 = (r4 << 10);
    r2 &= ~r4;
    r1 = (r1 << 10);
    r1 |= r2;
    *(u32*)(r3 + 0x4) = (u32)r1;
    r0 = *(u16*)(r0 + 0xC);
    r1 = (r1 >> 10);
    r1 = (r1 << 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r0 |= r1;
    *(u32*)(r3 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_0800C3F4(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0800C3F4..0x0800C3F8 (4 bytes, Thumb)
u32 sub_0800C3F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0800C3F8..0x0800C420 (40 bytes, Thumb)
u32 sub_0800C3F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08011818(r0, r1, r2, r3); // 0x0800C3FC
    r0 = r4;
    r0 = sub_0800C298(r0, r1, r2, r3); // 0x0800C402
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0800C420(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 31;
    if (cmp_lhs != cmp_rhs) return sub_0800C428(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x080724ECU; // [0x0800C430]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0800C418
    r0 = 0x0U;
    return r0;
}
