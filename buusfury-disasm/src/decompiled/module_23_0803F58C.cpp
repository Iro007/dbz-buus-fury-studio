/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #23
 * Address Range: 0x0803F58C..0x08042604 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0803F58C..0x0803F5C0 (52 bytes, Thumb)
u32 sub_0803F58C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x24);
    r5 = r1;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803F594: BL 0x0803D63C
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F5A2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803F59E: BL 0x0803D63C
loc_0803F5A2:
    return r0;
    r6 = r2;
    r7 = 0x1U;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    r2 = *(u32*)(r0 + 0xC);
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803F5C0(r0, r1, r2, r3);
    r5 = 0x00001D9DU; // [0x0803F704]
    r0 = r7;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803F5D0(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0803F5D0(r0, r1, r2, r3);
}

// ROM Address: 0x0803F5C0..0x0803F5D0 (16 bytes, Thumb)
u32 sub_0803F5C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2);
    r3 = (r1 << 1);
    r0 = *(u16*)(r0 + r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F5CE;
    r0 = 0x1U;
    return sub_0803F5D0(r0, r1, r2, r3);
loc_0803F5CE:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803F5D0..0x0803F5EC (28 bytes, Thumb)
u32 sub_0803F5D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803F6BA(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803F5EC(r0, r1, r2, r3);
    r0 = *(u32*)(r2 + 0x8);
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x100U;
    r2 = r5;
    r2 *= r1;
    r1 = (r2 << 1);
    r0 = r0 + r1;
    stack[76] = r0; // [sp + 0x130]
    return sub_0803F5FC(r0, r1, r2, r3);
}

// ROM Address: 0x0803F5EC..0x0803F6BC (208 bytes, Thumb)
u32 sub_0803F5EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2);
    r1 = (r1 << 1);
    r1 = *(u16*)(r0 + r1);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r5 = *(u16*)(r0);
    r0 += 0x2U;
    stack[76] = r0; // [sp + 0x130]
    r0 = *(u32*)(r6 + 0x4);
    r1 = *(u32*)(r6);
    stack[73] = r0; // [sp + 0x124]
    r0 = r5 + 1;
    r0 = r1 + r0;
    stack[74] = r0; // [sp + 0x128]
    r0 = stack[73]; // [sp + 0x124]
    r2 = r4;
    r0 += 0x11U;
    stack[75] = r0; // [sp + 0x12C]
    stack[72] = r1; // [sp + 0x120]
    r1 = 0x120; // sp + 0x120
    r0 = 0x110; // sp + 0x110
    r2 += 0x10U;
    r0 = sub_08053250(r0, r1, r2, r3); // 0x0803F618
    r0 = stack[68]; // [sp + 0x110]
    r1 = stack[70]; // [sp + 0x118]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0803F6F6(r0, r1, r2, r3);
    r0 = stack[69]; // [sp + 0x114]
    r1 = stack[71]; // [sp + 0x11C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0803F6F6(r0, r1, r2, r3);
    r0 = stack[70]; // [sp + 0x118]
    r1 = stack[68]; // [sp + 0x110]
    r1 = r0 - r1;
    stack[67] = r1; // [sp + 0x10C]
    r1 = stack[69]; // [sp + 0x114]
    r0 = stack[71]; // [sp + 0x11C]
    r2 = *(u32*)(r6 + 0x4);
    r0 = r0 - r1;
    r7 <<= (r0 & 0xFF);
    r7 -= 0x1U;
    stack[65] = r7; // [sp + 0x104]
    r7 = 0x0U;
    r2 = r1 - r2;
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    stack[66] = r2; // [sp + 0x108]
    stack[1] = r7; // [sp + 0x4]
    if (cmp_lhs <= cmp_rhs) goto loc_0803F66A;
loc_0803F650:
    r2 = stack[76]; // [sp + 0x130]
    r1 = (r0 << 1);
    r1 = *(u16*)(r2 + r1);
    r2 = (r0 << 2);
    r3 = 0x84; // sp + 0x84
    *(u32*)(r3 + r2) = r1;
    r3 = 0x4; // sp + 0x4
    r2 = r2 + r3;
    r1 = (r1 << 1);
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    *(u32*)(r2 + 0x4) = (u32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803F650;
loc_0803F66A:
    r0 = (r0 << 2);
    r1 = 0x84; // sp + 0x84
    *(u32*)(r1 + r0) = r7;
    r2 = stack[68]; // [sp + 0x110]
    r0 = *(u32*)(r6);
    r3 = 0x4; // sp + 0x4
    r2 = r2 - r0;
    r2 = (r2 << 2);
    r2 = r2 + r3;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[69]; // [sp + 0x114]
    r3 = *(u32*)(r4 + 0x28);
    r0 = (r0 << 2);
    r2 *= r3;
    r3 = *(u32*)(r4 + 0x24);
    r2 = r2 + r3;
    r3 = stack[68]; // [sp + 0x110]
    r7 = r2 + r3;
    r2 = (r3 << 2);
    r1 = r2 + r1;
    r0 = r1 - r0;
    lr = r0;
    r0 = 0x0U;
    r1 = stack[67]; // [sp + 0x10C]
    r12 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0803F6F6(r0, r1, r2, r3);
    r1 = lr;
    r0 = *(u32*)r1; r1 += 4;
    r2 = stack[66]; // [sp + 0x108]
    lr = r1;
    r0 >>= (r2 & 0xFF);
    r2 = stack[65]; // [sp + 0x104]
    r0 &= r2;
    r2 = stack[0]; // [sp + 0x0]
    r1 = *(u32*)r2; r2 += 4;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[66]; // [sp + 0x108]
    r1 >>= (r2 & 0xFF);
    return sub_0803F6BC(r0, r1, r2, r3);
    return sub_0803F6FE(r0, r1, r2, r3);
}

// ROM Address: 0x0803F6BC..0x0803F6C8 (12 bytes, Thumb)
u32 sub_0803F6BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[65]; // [sp + 0x104]
    r1 &= r2;
    r2 = r7;
    r3 = r0;
    r3 |= r1;
    if (cmp_lhs == cmp_rhs) return sub_0803F6E8(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803F6C8..0x0803F6D2 (10 bytes, Thumb)
u32 sub_0803F6C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r0 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803F6D2(r0, r1, r2, r3);
    r3 = *(u8*)(r4 + 0x3);
    *(u8*)(r2) = (u8)r3;
    return sub_0803F6DA(r0, r1, r2, r3);
}

// ROM Address: 0x0803F6D2..0x0803F728 (86 bytes, Thumb)
u32 sub_0803F6D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803F6DA;
    r3 = *(u8*)(r4 + 0x2);
    *(u8*)(r2) = (u8)r3;
loc_0803F6DA:
    r3 = *(u32*)(r4 + 0x28);
    r0 = (r0 >> 1);
    r1 = (r1 >> 1);
    r2 = r3 + r2;
    r3 = r0;
    r3 |= r1;
    if (cmp_lhs != cmp_rhs) return sub_0803F6C8(r0, r1, r2, r3);
    r0 = r12;
    r0 += 0x1U;
    r1 = stack[67]; // [sp + 0x10C]
    r7 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    r12 = r0;
    if (cmp_lhs < cmp_rhs) return sub_0803F6A0(r0, r1, r2, r3);
    r0 = *(u32*)(r6);
    r0 = r0 + r5;
    r0 += 0x1U;
    *(u32*)(r6) = (u32)r0;
    return r0;
    r0 = r0;
    r5 = r3 + 6;
    r0 = r0;
    r3 = (r0 >> 32);
    r6 = r2;
    r7 = 0x1U;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    r2 = *(u32*)(r0 + 0xC);
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803F728(r0, r1, r2, r3);
    r5 = 0x00001D9DU; // [0x0803F9B4]
    r0 = r7;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803F738(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0803F738(r0, r1, r2, r3);
}

// ROM Address: 0x0803F728..0x0803F738 (16 bytes, Thumb)
u32 sub_0803F728(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2);
    r3 = (r1 << 1);
    r0 = *(u16*)(r0 + r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F736;
    r0 = 0x1U;
    return sub_0803F738(r0, r1, r2, r3);
loc_0803F736:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803F738..0x0803F754 (28 bytes, Thumb)
u32 sub_0803F738(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803F820(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0803F754(r0, r1, r2, r3);
    r0 = *(u32*)(r2 + 0x8);
    r5 = *(u32*)(r2 + 0x4);
    r1 -= 0x100U;
    r2 = r5;
    r2 *= r1;
    r1 = (r2 << 1);
    r0 = r0 + r1;
    stack[76] = r0; // [sp + 0x130]
    return sub_0803F764(r0, r1, r2, r3);
}

// ROM Address: 0x0803F754..0x0803F822 (206 bytes, Thumb)
u32 sub_0803F754(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r2);
    r1 = (r1 << 1);
    r1 = *(u16*)(r0 + r1);
    r1 = (r1 << 1);
    r0 = r1 + r0;
    r5 = *(u16*)(r0);
    r0 += 0x2U;
    stack[76] = r0; // [sp + 0x130]
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r6 + 0x4);
    r0 -= 0x1U;
    stack[72] = r0; // [sp + 0x120]
    stack[73] = r1; // [sp + 0x124]
    r1 = stack[72]; // [sp + 0x120]
    r0 = r5 + 2;
    r0 = r1 + r0;
    stack[74] = r0; // [sp + 0x128]
    r0 = stack[73]; // [sp + 0x124]
    r2 = r4;
    r0 += 0x11U;
    stack[75] = r0; // [sp + 0x12C]
    r0 = 0x110; // sp + 0x110
    r2 += 0x10U;
    r1 = 0x120; // sp + 0x120
    r0 = sub_08053250(r0, r1, r2, r3); // 0x0803F784
    r0 = stack[68]; // [sp + 0x110]
    r1 = stack[70]; // [sp + 0x118]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0803F874(r0, r1, r2, r3);
    r0 = stack[69]; // [sp + 0x114]
    r1 = stack[71]; // [sp + 0x11C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0803F874(r0, r1, r2, r3);
    r0 = stack[70]; // [sp + 0x118]
    r1 = stack[68]; // [sp + 0x110]
    r2 = r0 - r1;
    r0 = stack[71]; // [sp + 0x11C]
    r1 = stack[69]; // [sp + 0x114]
    stack[67] = r2; // [sp + 0x10C]
    r0 = r0 - r1;
    r2 = *(u32*)(r6 + 0x4);
    r7 <<= (r0 & 0xFF);
    r2 = r1 - r2;
    r1 = 0x0U;
    r7 -= 0x1U;
    stack[65] = r7; // [sp + 0x104]
    stack[66] = r2; // [sp + 0x108]
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    stack[2] = r1; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    if (cmp_lhs <= cmp_rhs) goto loc_0803F7EC;
loc_0803F7BE:
    r2 = stack[76]; // [sp + 0x130]
    r1 = (r0 << 1);
    r1 = *(u16*)(r2 + r1);
    r2 = (r0 << 2);
    r3 = 0x84; // sp + 0x84
    *(u32*)(r3 + r2) = r1;
    r7 = 0x4; // sp + 0x4
    r3 = *(u32*)(r7 + r2);
    r7 = 0x4; // sp + 0x4
    r3 |= r1;
    *(u32*)(r7 + r2) = r3;
    r3 = (r1 >> 1);
    r7 = (r1 << 1);
    r3 |= r7;
    r7 = 0x4; // sp + 0x4
    r2 = r2 + r7;
    r7 = *(u32*)(r2 + 0x4);
    *(u32*)(r2 + 0x8) = (u32)r1;
    r3 |= r7;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    *(u32*)(r2 + 0x4) = (u32)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0803F7BE;
loc_0803F7EC:
    r1 = 0x0U;
    r0 = (r0 << 2);
    r2 = 0x84; // sp + 0x84
    *(u32*)(r2 + r0) = r1;
    r0 = stack[68]; // [sp + 0x110]
    r1 = *(u32*)(r6);
    r3 = 0x4; // sp + 0x4
    r1 = r0 - r1;
    r0 = (r1 << 2);
    r3 = r0 + r3;
    lr = r0;
    lr += r2;
    r0 = stack[69]; // [sp + 0x114]
    stack[0] = r3; // [sp + 0x0]
    r2 = *(u32*)(r4 + 0x28);
    r0 *= r2;
    r2 = *(u32*)(r4 + 0x24);
    r0 = r0 + r2;
    r2 = stack[68]; // [sp + 0x110]
    r7 = r0 + r2;
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_0803F82A(r0, r1, r2, r3);
    r0 = lr;
    r0 = *(u32*)(r0);
    return sub_0803F822(r0, r1, r2, r3);
    return sub_0803F896(r0, r1, r2, r3);
}

// ROM Address: 0x0803F822..0x0803F834 (18 bytes, Thumb)
u32 sub_0803F822(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[66]; // [sp + 0x108]
    r0 >>= (r2 & 0xFF);
    r2 = stack[65]; // [sp + 0x104]
    r0 &= r2;
    r1 = 0x0U;
    r2 = stack[67]; // [sp + 0x10C]
    r12 = r1;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0803F874(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0803F834..0x0803F874 (64 bytes, Thumb)
u32 sub_0803F834(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[0]; // [sp + 0x0]
    r1 += 0x4U;
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r1);
    r2 = stack[66]; // [sp + 0x108]
    r1 >>= (r2 & 0xFF);
    r2 = stack[65]; // [sp + 0x104]
    r1 &= r2;
    r2 = r7;
    r3 = r0;
    r3 |= r1;
    if (cmp_lhs == cmp_rhs) goto loc_0803F86C;
loc_0803F84C:
    r3 = (r0 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803F856;
    r3 = *(u8*)(r4 + 0x3);
    *(u8*)(r2) = (u8)r3;
    goto loc_0803F85E;
loc_0803F856:
    r3 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803F85E;
    r3 = *(u8*)(r4 + 0x2);
    *(u8*)(r2) = (u8)r3;
loc_0803F85E:
    r3 = *(u32*)(r4 + 0x28);
    r0 = (r0 >> 1);
    r1 = ((u32)((s32)r1 >> 1));
    r2 = r3 + r2;
    r3 = r0;
    r3 |= r1;
    if (cmp_lhs != cmp_rhs) goto loc_0803F84C;
loc_0803F86C:
    r0 = lr;
    r0 += 0x4U;
    lr = r0;
    return sub_0803F876(r0, r1, r2, r3);
}

// ROM Address: 0x0803F876..0x0803FAF2 (636 bytes, Thumb)
u32 sub_0803F876(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0);
    r2 = stack[66]; // [sp + 0x108]
    r1 = r12;
    r0 >>= (r2 & 0xFF);
    r2 = stack[65]; // [sp + 0x104]
    r1 += 0x1U;
    r0 &= r2;
    r2 = stack[67]; // [sp + 0x10C]
    r7 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    r12 = r1;
    if (cmp_lhs < cmp_rhs) return sub_0803F834(r0, r1, r2, r3);
    r0 = *(u32*)(r6);
    r0 = r0 + r5;
    r0 += 0x1U;
    *(u32*)(r6) = (u32)r0;
    return r0;
    r3 = *(u32*)(r2 + 0x4);
    r4 = *(u32*)(r0 + 0x28);
    r2 = *(u32*)(r2);
    r3 *= r4;
    r4 = *(u32*)(r0 + 0x24);
    r7 = 0x0U;
    r3 = r3 + r4;
    r6 = r3 + r2;
    r2 = *(u16*)(r1 + 0x2);
    r5 = r1 + 4;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803F8DE;
loc_0803F8B4:
    r4 = *(u16*)(r1);
    r2 = r6;
    r3 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803F8D2;
loc_0803F8BE:
    r4 = *(u8*)(r5);
    r5 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F8C8;
    *(u8*)(r2) = (u8)r4;
loc_0803F8C8:
    r4 = *(u16*)(r1);
    r2 += 0x1U;
    r3 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_0803F8BE;
loc_0803F8D2:
    r2 = *(u32*)(r0 + 0x28);
    r7 += 0x1U;
    r6 = r2 + r6;
    r2 = *(u16*)(r1 + 0x2);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs > cmp_rhs) goto loc_0803F8B4;
loc_0803F8DE:
    return r0; // BX lr
    r4 = *(u32*)(r2 + 0x8);
    r6 = *(u32*)(r2);
    r5 = *(u32*)(r2 + 0xC);
    r7 = *(u32*)(r2 + 0x4);
    r4 = r4 - r6;
    r5 = r5 - r7;
    r2 = r4;
    r2 *= r5;
    if (cmp_lhs == cmp_rhs) goto loc_0803F91E;
    r2 = *(u32*)(r0 + 0x28);
    r0 = *(u32*)(r0 + 0x24);
    r7 *= r2;
    r0 = r7 + r0;
    r0 = r0 + r6;
    r2 = r2 - r4;
    r7 = r3 - r4;
loc_0803F904:
    r6 = r4;
loc_0803F906:
    r3 = *(u8*)(r1);
    r1 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F910;
    *(u8*)(r0) = (u8)r3;
loc_0803F910:
    r0 += 0x1U;
    r6 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_0803F906;
    r0 = r0 + r2;
    r1 = r1 + r7;
    r5 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_0803F904;
loc_0803F91E:
    return r0; // BX lr
    r4 = *(u32*)(r2 + 0x4);
    r3 = r1;
    r1 = *(u32*)(r0 + 0x28);
    r5 = r4;
    r0 = *(u32*)(r0 + 0x24);
    r5 *= r1;
    r0 = r5 + r0;
    r5 = *(u32*)(r2);
    r6 = *(u32*)(r2 + 0x8);
    r2 = *(u32*)(r2 + 0xC);
    r0 = r0 + r5;
    r5 = r6 - r5;
    r4 = r2 - r4;
    r6 = r1 - r5;
loc_0803F940:
    r2 = r5;
loc_0803F942:
    r1 = *(u8*)(r3);
    r3 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803F94C;
    *(u8*)(r0) = (u8)r1;
loc_0803F94C:
    r0 += 0x1U;
    r2 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_0803F942;
    r0 = r0 + r6;
    r4 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_0803F940;
    return r0; // BX lr
    r2 = *(u32*)(r0 + 0x30);
    r0 = *(u32*)(r0 + 0x24);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
loc_0803F964:
    r3 = *(u8*)(r0);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803F96C;
    *(u8*)(r0) = (u8)r1;
loc_0803F96C:
    r0 += 0x1U;
    r2 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_0803F964;
    return r0; // BX lr
    r6 = r1;
    r1 = *(u32*)(r1 + 0x8);
    r7 = r0;
    r0 = *(u32*)(r6);
    r1 = r1 - r0;
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r6 + 0x4);
    r2 = *(u32*)(r7 + 0x28);
    r4 = r1;
    r1 *= r2;
    r2 = *(u32*)(r7 + 0x24);
    r1 = r1 + r2;
    r5 = r1 + r0;
    r0 = *(u32*)(r6 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_0803F9AE;
loc_0803F998:
    r0 = r5;
    r1 = stack[4]; // [sp + 0x10]
    r2 = stack[1]; // [sp + 0x4]
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0803F99E: BL 0x08046E40
    r0 = *(u32*)(r7 + 0x28);
    r4 += 0x1U;
    r5 = r0 + r5;
    r0 = *(u32*)(r6 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0803F998;
loc_0803F9AE:
    return r0;
    r0 = r0;
    r5 = r3 + 6;
    r0 = r0;
    r2 = 0x0U;
    stack[1] = r2; // [sp + 0x4]
    stack[2] = r2; // [sp + 0x8]
    r2 = *(u32*)(r0 + 0x2C);
    r3 = *(u32*)(r0 + 0x28);
    stack[4] = r2; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    stack[3] = r3; // [sp + 0xC]
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0803F9CC: BL 0x0804915C
    return r0;
    r6 = r0;
    r0 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r1 + 0xC);
    r5 = r2 - r0;
    r2 = *(u32*)(r1 + 0x8);
    r1 = *(u32*)(r1);
    r7 = r2 - r1;
    r2 = *(u32*)(r6 + 0x28);
    r0 *= r2;
    r2 = *(u32*)(r6 + 0x24);
    r0 = r0 + r2;
    r4 = r0 + r1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803FA06;
loc_0803F9F2:
    r3 = r7;
    r1 = r4;
    r0 = r4;
    r2 = stack[2]; // [sp + 0x8]
    r0 = sub_0804918C(r0, r1, r2, r3); // 0x0803F9FA: BL 0x0804918C
    r0 = *(u32*)(r6 + 0x28);
    r4 = r0 + r4;
    r5 -= 0x1U;
    if (cmp_lhs != cmp_rhs) goto loc_0803F9F2;
loc_0803FA06:
    return r0;
    r0 = r0;
    r0 = 0x087B6EE0U; // [0x0803FA9C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803F24A(r0, r1, r2, r3); // 0x0803FA12
    r1 = 0x04000200U /* &REG_IE */; // [0x0803FAA0]
    r0 = 0x0U;
    *(u16*)(r1 + 0x8) = (u16)r0;
    r1 = 0x80U;
    r2 = (r1 << 19);
    *(u16*)(r2) = (u16)r1;
    *(u16*)(r2 + 0x10) = (u16)r0;
    *(u16*)(r2 + 0x12) = (u16)r0;
    *(u16*)(r2 + 0x14) = (u16)r0;
    *(u16*)(r2 + 0x16) = (u16)r0;
    *(u16*)(r2 + 0x18) = (u16)r0;
    r1 = 0x0400001CU /* &REG_BG3HOFS */; // [0x0803FAA4]
    *(u16*)(r2 + 0x1A) = (u16)r0;
    *(u16*)(r1) = (u16)r0;
    *(u16*)(r1 + 0x2) = (u16)r0;
    r0 = Bios_SoftReset(r0, r1); // SWI 0x00
    return r0;
    r0 = 0x04000200U /* &REG_IE */; // [0x0803FAA0]
    r1 = 0x1U;
    r0 = *(u16*)(r0);
    r1 = (r1 << 26);
    r5 = 0x087B6EE0U; // [0x0803FA9C]
    stack[0] = r0; // [sp + 0x0]
    r7 = *(u16*)(r1);
    r0 = 0x80U;
    r4 = 0x0U;
    r6 = 0x1U;
    *(u16*)(r1) = (u16)r0;
loc_0803FA50:
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0803F3F4(r0, r1, r2, r3); // 0x0803FA54
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 30;
    if (cmp_lhs < cmp_rhs) goto loc_0803FA50;
    r1 = 0x04000200U /* &REG_IE */; // [0x0803FAA0]
    r0 = 0x3000U; // (3 << 12)
    *(u16*)(r1) = (u16)r0;
    r0 = 0x0000C304U; // [0x0803FAA8]
    r4 = r1;
    r4 -= 0xE0U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = Bios_Swi_03(r0, r1); // SWI 0x03
    r0 = stack[0]; // [sp + 0x0]
    r1 = 0x04000200U /* &REG_IE */; // [0x0803FAA0]
    *(u16*)(r1) = (u16)r0;
    r0 = 0x0U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    r1 = (r1 << 17);
    r4 = 0x304U; // (193 << 2)
    *(u16*)(r1) = (u16)r7;
loc_0803FA82:
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0803F3F4(r0, r1, r2, r3); // 0x0803FA86
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0803D4A0(r0, r1, r2, r3); // 0x0803FA8C
    r0 = *(u32*)(r5 + 0x8);
    r0 = *(u16*)(r0 + 0x2);
    r0 &= r4;
    if (cmp_lhs != cmp_rhs) goto loc_0803FA82;
    return r0;
    r0 = r0;
    r0 = *(u32*)(r4 + 0x6C);
    r3 = (r7 >> 1);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r4 = r3;
    r0 = (r0 << 16);
    *(u32*)r3 = r2; r3 += 4;
    r0 = r0;
    r2 = 0x03004A5CU; // [0x0803FB70]
    r1 = 0x02CBBC71U; // [0x0803FB74]
    r0 = *(u32*)(r2);
    r1 = r0 + r1;
    r0 = *(u32*)(r2 + 0x4);
    r1 ^= r0;
    r3 = (r0 << 3);
    r0 = (r0 >> 29);
    r0 |= r3;
    r3 = 0x0632D80FU; // [0x0803FB78]
    r0 = r0 + r3;
    r0 ^= r1;
    *(u32*)(r2 + 0x4) = (u32)r0;
    *(u32*)(r2) = (u32)r1;
    r0 = r1 - r0;
    return r0; // BX lr
    r4 = r0;
    r0 = sub_0803FAAC(r0, r1, r2, r3); // 0x0803FAD0
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r0 *= r4;
    r0 = (r0 >> 16);
    return r0;
    r4 = r0;
    r0 = sub_0803FAAC(r0, r1, r2, r3); // 0x0803FAE2
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0803FAF2(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803FAF2..0x0803FAF6 (4 bytes, Thumb)
u32 sub_0803FAF2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803FAF6..0x0803FCA4 (430 bytes, Thumb)
u32 sub_0803FAF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x1U;
    r2 = 0x0U;
    r1 = 0xFU;
    r5 = 0x2U;
loc_0803FB00:
    r3 = r4;
    r3 <<= (r1 & 0xFF);
    r3 = r3 + r2;
    r3 <<= (r1 & 0xFF);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_0803FB14;
    r0 = r0 - r3;
    r3 = r5;
    r3 <<= (r1 & 0xFF);
    r2 |= r3;
loc_0803FB14:
    r1 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803FB00;
    r0 = (r2 >> 1);
    return r0; // BX lr
    r6 = r0;
    r7 = r1;
    r5 = 0x0U;
    r4 = 0x1FU;
loc_0803FB2A:
    r0 = 0x1U;
    r0 <<= (r4 & 0xFF);
    r0 = r0 + r5;
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r2 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = __16_ll_shift_l(r0, r1, r2, r3); // 0x0803FB38: BL 0x08046BFC
    r3 = r1;
    r1 = r7;
    r2 = r0;
    r0 = r6;
    r0 = __16_ll_cmpu(r0, r1, r2, r3); // 0x0803FB44: BL 0x08046B28
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0803FB64;
    r1 = 0x4; // sp + 0x4
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r2 = r4;
    r0 = __16_ll_shift_l(r0, r1, r2, r3); // 0x0803FB50: BL 0x08046BFC
    r3 = r1;
    r1 = r7;
    r6 = r6 - r0;
    r1 -= r3;
    r7 = r1;
    r0 = 0x2U;
    r0 <<= (r4 & 0xFF);
    r5 |= r0;
loc_0803FB64:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803FB2A;
    r0 = (r5 >> 1);
    return r0;
    r0 = r0;
    r2 = 0x3808C00CU; // [0x0803FCE4]
    r0 = (r0 << 12);
    r3 = (r1 << 11);
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_0803FB9A;
    r2 = (r6 << 24);
    r4 = r0;
    r0 = 0x40U;
    r0 = sub_080407A0(r0, r1, r2, r3); // 0x0803FB82: BL 0x080407A0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803FB8E;
    r0 = 0x1U;
    goto loc_0803FB90;
loc_0803FB8E:
    r0 = 0x0U;
loc_0803FB90:
    *(u32*)(r4) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803FBDC;
    r0 = 0x2000U; // (1 << 13)
loc_0803FB9A:
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803FB9A: BL 0x0803D5B8
    r5 = r0;
    r0 = 0x03004A64U; // [0x0803FCA4]
    *(u32*)(r0) = (u32)r5;
    r0 = 0x087B76ECU; // [0x0803FCA8]
    r0 = *(u32*)(r0);
    r0 = sub_0803F278(r0, r1, r2, r3); // 0x0803FBA8
    r0 = sub_080401DA(r0, r1, r2, r3); // 0x0803FBAC
    r6 = 0x04000200U /* &REG_IE */; // [0x0803FCAC]
    r0 = 0x0U;
    *(u16*)(r6 + 0x8) = (u16)r0;
    r4 = 0x0U;
    r7 = (r6 >> 13);
loc_0803FBBA:
    r0 = ((u32)((s32)r4 >> 3));
    r0 = (r0 << 16);
    r1 = r5 + r4;
    r0 = (r0 >> 16);
    r0 = sub_08040868(r0, r1, r2, r3); // 0x0803FBC2
    r4 += 0x8U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_0803FBBA;
    r0 = 0x1U;
    *(u16*)(r6 + 0x8) = (u16)r0;
    r0 = sub_080401F4(r0, r1, r2, r3); // 0x0803FBD0
    r0 = 0x087B76ECU; // [0x0803FCA8]
    r0 = *(u32*)(r0);
    r0 = sub_0803F28E(r0, r1, r2, r3); // 0x0803FBD8
loc_0803FBDC:
    return r0;
    r0 = *(u32*)(r0);
    r7 = r2;
    r6 = r1;
    r5 = r3;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803FC38;
    r0 = 0x03004A64U; // [0x0803FCA4]
    r2 = r5;
    r0 = *(u32*)(r0);
    r0 = r0 + r6;
    r1 = r7;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0803FBF6: BL 0x08049144
    r0 = 0x087B76ECU; // [0x0803FCA8]
    r0 = *(u32*)(r0);
    r0 = sub_0803F278(r0, r1, r2, r3); // 0x0803FBFE
    r0 = sub_080401DA(r0, r1, r2, r3); // 0x0803FC02
    r1 = 0x04000200U /* &REG_IE */; // [0x0803FCAC]
    r0 = 0x0U;
    *(u16*)(r1 + 0x8) = (u16)r0;
    r4 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803FC26;
loc_0803FC12:
    r1 = r7 + r4;
    r0 = r6 + r4;
    r0 = ((u32)((s32)r0 >> 3));
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r0 = sub_08040B5C(r0, r1, r2, r3); // 0x0803FC1C
    r4 += 0x8U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs < cmp_rhs) goto loc_0803FC12;
loc_0803FC26:
    r1 = 0x04000200U /* &REG_IE */; // [0x0803FCAC]
    r0 = 0x1U;
    *(u16*)(r1 + 0x8) = (u16)r0;
    r0 = sub_080401F4(r0, r1, r2, r3); // 0x0803FC2C
    r0 = 0x087B76ECU; // [0x0803FCA8]
    r0 = *(u32*)(r0);
    r0 = sub_0803F28E(r0, r1, r2, r3); // 0x0803FC34
loc_0803FC38:
    return r0;
    r0 = r1;
    r1 = r2;
    r2 = r3;
    r3 = 0x03004A64U; // [0x0803FCA4]
    r3 = *(u32*)(r3);
    r1 = r3 + r1;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0803FC48: BL 0x08049144
    return r0;
    r6 = r0;
    r0 = stack[2]; // [sp + 0x8]
    r1 = 0x000015B0U; // [0x0803FCB0]
    r5 = 0x0U;
    r4 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    stack[0] = r1; // [sp + 0x0]
    if (cmp_lhs <= cmp_rhs) goto loc_0803FC9C;
loc_0803FC62:
    r0 = stack[0]; // [sp + 0x0]
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803FC6E;
    r0 = 0x8; // sp + 0x8
    goto loc_0803FC70;
loc_0803FC6E:
    r0 = sp;
loc_0803FC70:
    r0 = *(u32*)(r0);
    r7 = r1 - r0;
    stack[2] = r7; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803FC88;
loc_0803FC7A:
    r1 = *(u8*)(r6);
    r6 += 0x1U;
    r0 -= 0x1U;
    r4 = r1 + r4;
    r5 = r5 + r4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803FC7A;
loc_0803FC88:
    r0 = r4;
    r0 = sub_08053180(r0, r1, r2, r3); // 0x0803FC8A
    r4 = r0;
    r0 = r5;
    r0 = sub_08053180(r0, r1, r2, r3); // 0x0803FC92
    r5 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803FC62;
loc_0803FC9C:
    r0 = (r5 << 16);
    r0 |= r4;
    return r0;
}

// ROM Address: 0x0803FCA4..0x0803FCA6 (2 bytes, Thumb)
u32 sub_0803FCA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xF0066820U; // [0x0803FE38]
    return r0;
}

// ROM Address: 0x0803FCA6..0x0803FCDE (56 bytes, Thumb)
u32 sub_0803FCA6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u8*)(r5 + 0x1B) = (u8)r4;
    r3 = (r7 >> 1);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r6 >> 22));
    r0 = r0;
    r3 = 0x1U;
    r2 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r3 = (r3 << 10);
    *(u32*)(r0) = (u32)r3;
    *(u32*)(r0 + 0x8) = (u32)r2;
    *(u32*)(r0 + 0xC) = (u32)r3;
    r0 += 0x10U;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)(r0) = (u32)r2;
    return r0; // BX lr
    r2 = r1;
    r3 = 0x087B6EECU; // [0x0803FF74]
    r2 += 0x40U;
    r1 = (r1 << 24);
    r1 = (r1 >> 22);
    r2 = (r2 << 24);
    r2 = (r2 >> 22);
    r1 = *(u32*)(r3 + r1);
    r2 = *(u32*)(r3 + r2);
    r1 = ((u32)((s32)r1 >> 6));
    return r0;
}

// ROM Address: 0x0803FCE0..0x0803FD34 (84 bytes, Thumb)
u32 sub_0803FCE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r2 = ((u32)((s32)r2 >> 6));
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r2;
    r0 += 0x10U;
    r1 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r1);
    r3 = ((u32)((s32)r1 >> 10));
    r4 = r3;
    r2 = (r3 << 24);
    r3 = (r2 >> 22);
    r2 = 0x087B6EECU; // [0x0803FF74]
    r1 = (r1 << 22);
    r5 = *(u32*)(r2 + r3);
    r3 = r4 + 1;
    r3 = (r3 << 24);
    r3 = (r3 >> 22);
    r6 = *(u32*)(r2 + r3);
    r1 = (r1 >> 22);
    r3 = 0x400U; // (1 << 10)
    r3 = r3 - r1;
    r5 *= r3;
    r6 *= r1;
    r5 = r5 + r6;
    r4 += 0x40U;
    r6 = (r4 << 24);
    r6 = (r6 >> 22);
    r6 = *(u32*)(r2 + r6);
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 22);
    r2 = *(u32*)(r2 + r4);
    r3 *= r6;
    r1 *= r2;
    r1 = r3 + r1;
    r5 = ((u32)((s32)r5 >> 16));
    return r0;
}

// ROM Address: 0x0803FD36..0x0803FF08 (466 bytes, Thumb)
u32 sub_0803FD36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = ((u32)((s32)r1 >> 16));
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0xCU;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r0 += 0x10U;
    r1 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x10);
    r2 = (r2 << 10);
    r2 = r3 + r2;
    *(u32*)(r0 + 0x10) = (u32)r2;
    r1 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r0 + 0x14);
    r1 = (r1 << 10);
    r1 = r2 + r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    return r0; // BX lr
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x10);
    r2 = (r2 << 10);
    r2 = r3 - r2;
    *(u32*)(r0 + 0x10) = (u32)r2;
    r1 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r0 + 0x14);
    r1 = (r1 << 10);
    r1 = r2 - r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    return r0; // BX lr
    r5 = r1;
    r4 = r2;
    r2 = 0x8U;
    r1 = 0x24; // sp + 0x24
    r0 = 0xC; // sp + 0xC
    r3 = 0x08050761U; // [0x0803FF78]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0803FD86: BL 0x08046FF4
    r1 = *(u32*)(r5);
    r0 = *(u32*)(r4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FD8E: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r5 + 0x4);
    r7 = r5 + 4;
    r6 = r4;
    r6 += 0x8U;
    r0 = *(u32*)(r4 + 0x8);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FDA0: BL 0x08046B70
    r3 = 0x4; // sp + 0x4
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = r0 + r2;
    r1 += r3;
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0803FDAE: BL 0x08046C28
    stack[3] = r0; // [sp + 0xC]
    r1 = *(u32*)(r5);
    r0 = r4 + 4;
    stack[11] = r0; // [sp + 0x2C]
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FDBC: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r7);
    r0 = r6 + 4;
    stack[10] = r0; // [sp + 0x28]
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FDCC: BL 0x08046B70
    r2 = stack[1]; // [sp + 0x4]
    r3 = stack[2]; // [sp + 0x8]
    r0 = r0 + r2;
    r1 += r3;
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0803FDDA: BL 0x08046C28
    stack[4] = r0; // [sp + 0x10]
    r0 = r7 + 4;
    r7 = r0;
    r1 = *(u32*)(r5 + 0x8);
    r0 = *(u32*)(r4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FDE8: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    r0 = r7 + 4;
    stack[9] = r0; // [sp + 0x24]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r7 + 0x4);
    r0 = *(u32*)(r6);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FDF8: BL 0x08046B70
    r2 = stack[1]; // [sp + 0x4]
    r3 = stack[2]; // [sp + 0x8]
    r0 = r0 + r2;
    r1 += r3;
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0803FE06: BL 0x08046C28
    stack[5] = r0; // [sp + 0x14]
    r1 = *(u32*)(r7);
    r0 = stack[11]; // [sp + 0x2C]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FE12: BL 0x08046B70
    r7 = r0;
    r0 = stack[9]; // [sp + 0x24]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r0 = stack[10]; // [sp + 0x28]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FE22: BL 0x08046B70
    r3 = stack[2]; // [sp + 0x8]
    r0 = r0 + r7;
    r1 += r3;
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0803FE2E: BL 0x08046C28
    stack[6] = r0; // [sp + 0x18]
    r5 += 0x10U;
    r1 = *(u32*)(r5);
    r0 = *(u32*)(r4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FE3A: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r6);
    r7 = r5 + 4;
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FE48: BL 0x08046B70
    r2 = stack[1]; // [sp + 0x4]
    r3 = stack[2]; // [sp + 0x8]
    r0 = r0 + r2;
    r1 += r3;
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0803FE56: BL 0x08046C28
    r4 += 0x10U;
    r1 = *(u32*)(r4);
    r0 = r0 + r1;
    stack[7] = r0; // [sp + 0x1C]
    r1 = *(u32*)(r5);
    r0 = stack[11]; // [sp + 0x2C]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FE68: BL 0x08046B70
    r5 = r0;
    r6 = r1;
    r1 = *(u32*)(r7);
    r0 = stack[10]; // [sp + 0x28]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0803FE76: BL 0x08046B70
    r0 = r0 + r5;
    r1 += r6;
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0803FE80: BL 0x08046C28
    r1 = *(u32*)(r4 + 0x4);
    r0 = r0 + r1;
    stack[8] = r0; // [sp + 0x20]
    r0 = 0xC; // sp + 0xC
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r4 = stack[12]; // [sp + 0x30]
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    return r0;
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0);
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0) = (u32)r3;
    r3 = *(u32*)(r0 + 0x4);
    r3 *= r2;
    r2 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x4) = (u32)r2;
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x8);
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x8) = (u32)r3;
    r3 = *(u32*)(r0 + 0xC);
    r3 *= r2;
    r2 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0xC) = (u32)r2;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r0 + 0x10);
    r2 *= r1;
    r2 = ((u32)((s32)r2 >> 10));
    *(u32*)(r0 + 0x10) = (u32)r2;
    r2 = *(u32*)(r0 + 0x14);
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 10));
    *(u32*)(r0 + 0x14) = (u32)r1;
    return r0; // BX lr
    r4 = r1;
    r1 = 0x1C; // sp + 0x1C
    r2 = 0x8U;
    r0 = 0x4; // sp + 0x4
    r3 = 0x08050761U; // [0x0803FF78]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0803FEE0: BL 0x08046FF4
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r4 + 0xC);
    r3 = r4 + 4;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 *= r1;
    r2 *= r3;
    r2 = ((u32)((s32)r2 >> 10));
    r0 = ((u32)((s32)r0 >> 10));
    r6 = r4;
    r6 += 0x8U;
    r5 = r0 - r2;
    r1 = (r1 << 10);
    r7 = r4 + 4;
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803FF00: BL 0x08046E58
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)(r7);
    return r0;
}

// ROM Address: 0x0803FF0A..0x0803FF16 (12 bytes, Thumb)
u32 sub_0803FF0A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r0 << 10);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803FF0E: BL 0x08046E58
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u32*)(r6);
    return r0;
}

// ROM Address: 0x0803FF18..0x0803FF32 (26 bytes, Thumb)
u32 sub_0803FF18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r0 << 10);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803FF1C: BL 0x08046E58
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u32*)(r4);
    r1 = (r0 << 10);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0803FF28: BL 0x08046E58
    stack[4] = r0; // [sp + 0x10]
    r1 = *(u32*)(r4 + 0x10);
    r2 = stack[1]; // [sp + 0x4]
    return r0;
}

// ROM Address: 0x0803FF34..0x0803FF4E (26 bytes, Thumb)
u32 sub_0803FF34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 *= r2;
    r0 = r4;
    r2 = *(u32*)(r4 + 0x14);
    r4 = stack[3]; // [sp + 0xC]
    r3 = ((u32)((s32)r1 >> 10));
    r2 *= r4;
    r2 = ((u32)((s32)r2 >> 10));
    r2 = r3 - r2;
    stack[5] = r2; // [sp + 0x14]
    r0 += 0x10U;
    r1 = r0 + 4;
    r0 = *(u32*)(r0);
    r3 = stack[2]; // [sp + 0x8]
    return r0;
}

// ROM Address: 0x0803FF50..0x0803FF98 (72 bytes, Thumb)
u32 sub_0803FF50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 *= r3;
    r1 = *(u32*)(r1);
    r3 = stack[4]; // [sp + 0x10]
    r0 = ((u32)((s32)r0 >> 10));
    r1 *= r3;
    r1 = ((u32)((s32)r1 >> 10));
    r0 = r0 - r1;
    stack[6] = r0; // [sp + 0x18]
    r2 = 0x4; // sp + 0x4
    r0 = r2;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r4 = stack[7]; // [sp + 0x1C]
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r3; r4 += 4;
    return r0;
    r0 = r0;
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    r1 = (r4 << 29);
    r5 = (r0 >> 32);
    r6 = r0;
    r4 = r1;
    r1 = 0x18; // sp + 0x18
    r2 = 0x8U;
    r5 = sp;
    r0 = sp;
    r3 = 0x08050761U; // [0x0803FFE4]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x0803FF8E: BL 0x08046FF4
    r1 = *(u32*)(r4 + 0xC);
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r4 + 0x4);
    return r0;
}

// ROM Address: 0x0803FF9A..0x0803FF9E (4 bytes, Thumb)
u32 sub_0803FF9A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[1] = r1; // [sp + 0x4]
    r0 = *(u32*)(r4 + 0x8);
    return r0;
}

// ROM Address: 0x0803FFA0..0x0803FFAA (10 bytes, Thumb)
u32 sub_0803FFA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u32*)(r4);
    stack[3] = r0; // [sp + 0xC]
    r1 = *(u32*)(r4 + 0x10);
    r2 = stack[0]; // [sp + 0x0]
    return r0;
}

// ROM Address: 0x0803FFAC..0x0803FFC6 (26 bytes, Thumb)
u32 sub_0803FFAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 *= r2;
    r0 = r4;
    r2 = *(u32*)(r4 + 0x14);
    r4 = stack[2]; // [sp + 0x8]
    r3 = ((u32)((s32)r1 >> 10));
    r2 *= r4;
    r2 = ((u32)((s32)r2 >> 10));
    r2 = r3 - r2;
    r0 += 0x10U;
    r1 = r0 + 4;
    stack[4] = r2; // [sp + 0x10]
    r0 = *(u32*)(r0);
    r2 = stack[1]; // [sp + 0x4]
    return r0;
}

// ROM Address: 0x0803FFC8..0x08040292 (714 bytes, Thumb)
u32 sub_0803FFC8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 *= r2;
    r1 = *(u32*)(r1);
    r2 = stack[3]; // [sp + 0xC]
    r0 = ((u32)((s32)r0 >> 10));
    r1 *= r2;
    r1 = ((u32)((s32)r1 >> 10));
    r0 = r0 - r1;
    stack[5] = r0; // [sp + 0x14]
    r0 = *(u32*)r5; r5 += 4;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    return r0;
    r1 = (r4 << 29);
    r5 = (r0 >> 32);
    r3 = *(u16*)(r1);
    r2 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040014;
loc_0803FFF2:
    r3 = *(u16*)(r1);
    r1 += 0x2U;
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08040000;
    r3 = *(u32*)(r0 + 0x4);
    r3 += 0x1U;
    goto loc_0804000C;
loc_08040000:
    r4 = *(u32*)(r0);
    r3 = (r3 << 1);
    r3 = *(u16*)(r4 + r3);
    r3 = (r3 << 1);
    r3 = *(u16*)(r4 + r3);
    r3 += 0x1U;
loc_0804000C:
    r2 = r3 + r2;
    r3 = *(u16*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803FFF2;
loc_08040014:
    r0 = r2;
    return r0; // BX lr
    r4 = 0x0U;
    r2 -= 0x1U;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08040042;
loc_08040022:
    r3 = *(u16*)(r1);
    r1 += 0x2U;
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08040030;
    r3 = *(u32*)(r0 + 0x4);
    r3 += 0x1U;
    goto loc_0804003C;
loc_08040030:
    r5 = *(u32*)(r0);
    r3 = (r3 << 1);
    r3 = *(u16*)(r5 + r3);
    r3 = (r3 << 1);
    r3 = *(u16*)(r5 + r3);
    r3 += 0x1U;
loc_0804003C:
    r4 = r3 + r4;
    r2 -= 0x1U;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08040022;
loc_08040042:
    r0 = r4;
    return r0; // BX lr
    r5 = 0x087B76F0U; // [0x0804021C]
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040076;
    r1 = *(u32*)(r0);
    r6 = r0;
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804005E: BL 0x08046AA2
    r0 = *(u32*)(r5);
    *(u32*)(r0) = (u32)r4;
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08040070: BL __call_via_r3
    goto loc_0804007A;
loc_08040076:
    r0 = *(u32*)(r5);
    *(u32*)(r0) = (u32)r4;
loc_0804007A:
    r0 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08040084: BL 0x08046AA2
    r1 = 0x03004A6CU; // [0x08040220]
    r0 = 0x0U;
    *(u32*)(r1 + 0x14) = (u32)r0;
    r0 = *(u32*)(r1 + 0x14);
    r1 = 0x03000FF0U; // [0x08040224]
    *(u32*)(r1 + 0xC) = (u32)r0;
    return r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0804009A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080400A6;
    r1 = 0x08049618U /* &VTable_08049618 */; // [0x08040228]
    *(u32*)(r0) = (u32)r1;
loc_080400A6:
    r0 = sub_08040048(r0, r1, r2, r3); // 0x080400A6
    return r0;
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080400B0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080400BC;
    r1 = 0x0804B868U /* &VTable_0804B868 */; // [0x0804022C]
    *(u32*)(r0) = (u32)r1;
loc_080400BC:
    r0 = sub_08040048(r0, r1, r2, r3); // 0x080400BC
    return r0;
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080400C6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080400D2;
    r1 = 0x0804B254U /* &VTable_0804B254 */; // [0x08040230]
    *(u32*)(r0) = (u32)r1;
loc_080400D2:
    r0 = sub_08040048(r0, r1, r2, r3); // 0x080400D2
    return r0;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080400DC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080400E8;
    r1 = 0x08049644U /* &VTable_08049644 */; // [0x08040234]
    *(u32*)(r0) = (u32)r1;
loc_080400E8:
    r0 = sub_08040048(r0, r1, r2, r3); // 0x080400E8
    return r0;
    r6 = 0x03004A6CU; // [0x08040220]
    r5 = 0x03004A6CU; // [0x08040220]
    r7 = 0x0U;
    r1 = 0x0U;
    r2 = 0x0000FFFFU; // [0x08040238]
    r6 += 0xCU;
    r5 += 0x18U;
loc_080400FE:
    r4 = (r1 << 1);
    *(u16*)(r6 + r4) = (u16)r7;
    r0 = 0x0U;
loc_08040104:
    r3 = (r0 << 2);
    r3 = r3 + r5;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    *(u16*)(r3 + r4) = (u16)r2;
    if (cmp_lhs < cmp_rhs) goto loc_08040104;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_080400FE;
    return r0; // BX lr
    r0 = 0x03000FF0U; // [0x08040224]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = 0x03004A6CU; // [0x08040220]
    r1 += 0xCU;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804012A: BL __call_via_r3
    return r0;
    r0 = 0x03000FF0U; // [0x08040224]
    r0 = *(u32*)(r0);
    r3 = 0x03004A6CU; // [0x08040220]
    r1 = *(u32*)(r0);
    r3 += 0x18U;
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = 0x03004A6CU; // [0x08040220]
    r1 = *(u32*)(r1 + 0x10);
    r1 = (r1 << 2);
    r1 = r1 + r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08040148: BL __call_via_r3
    return r0;
    r0 = 0x03000FF0U; // [0x08040224]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804015A: BL 0x08046AA2
    return r0;
    r4 = 0x03000FF0U; // [0x08040224]
    r5 = r0;
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804016E: BL 0x08046AA2
    *(u32*)(r4) = (u32)r5;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804017C: BL 0x08046AA2
    return r0;
    r4 = 0x03000FF0U; // [0x08040224]
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804018E: BL 0x08046AA2
    r0 = 0x03004A6CU; // [0x08040220]
    r0 += 0x4U;
    *(u32*)(r4) = (u32)r0;
    return r0;
    r4 = 0x03000FF0U; // [0x08040224]
    r5 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080401A8: BL 0x08046AA2
    r0 = 0x03004A6CU; // [0x08040220]
    r0 = *(u32*)(r0 + 0x14);
    *(u32*)(r4 + 0xC) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r5;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080401BC: BL 0x08046AA2
    return r0;
    r4 = 0x03000FF0U; // [0x08040224]
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080401CE: BL 0x08046AA2
    r0 = 0x03004A6CU; // [0x08040220]
    r0 += 0x8U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    return r0;
    r4 = 0x03000FF0U; // [0x08040224]
    r0 = *(u32*)(r4 + 0x4);
    *(u32*)(r4 + 0x8) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080401E8: BL 0x08046AA2
    r0 = 0x03004A6CU; // [0x08040220]
    r0 += 0x8U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    return r0;
    r4 = 0x03000FF0U; // [0x08040224]
    r5 = r4 + 4;
    r0 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08040202: BL 0x08046AA2
    r0 = 0x03004A6CU; // [0x08040220]
    r0 = *(u32*)(r0 + 0x14);
    *(u32*)(r4 + 0xC) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r5;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08040216: BL 0x08046AA2
    return r0;
    *(u8*)(r6 + 0x1B) = (u8)r0;
    r3 = (r7 >> 1);
    r2 = 0x1292434AU; // [0x080403D4]
    r0 = (r0 << 12);
    r0 = (r6 >> 31);
    r0 = (r0 << 12);
    stack[24] = r6; // [sp + 0x60]
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    stack[68] = r6; // [sp + 0x110]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = *(u16*)(r0 + 0x2);
    r3 = r1;
    r2 = r4;
    r2 ^= r1;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    r3 &= r2;
    r4 &= r2;
    *(u16*)(r0 + 0x4) = (u16)r3;
    *(u16*)(r0 + 0x6) = (u16)r4;
    *(u16*)(r0 + 0x2) = (u16)r1;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040280;
    r1 = *(u8*)(r0);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    *(u16*)(r1 + 0x8) = (u16)r3;
    r2 = *(u8*)(r0);
    r1 = 0x03000F90U; // [0x08040358]
    r2 = (r2 << 2);
    r2 = r2 + r0;
    r1 = *(u32*)(r1 + 0x4);
    r2 += 0x80U;
    *(u32*)(r2 + 0x8) = (u32)r1;
    r1 = *(u8*)(r0);
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r0) = (u8)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 64;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08040280;
    r1 = 0x0U;
    *(u8*)(r0) = (u8)r1;
loc_08040280:
    return r0; // BX lr
    r4 = *(u16*)(r0 + 0x4);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08040292(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08040292..0x080402D6 (68 bytes, Thumb)
u32 sub_08040292(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x03000F90U; // [0x08040358]
    r5 = 0x0U;
    r4 = *(u32*)(r4 + 0x4);
    r6 = r4 - r3;
    r3 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080402D2;
loc_080402A0:
    r4 = r5;
    r5 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 64;
    if (cmp_lhs < cmp_rhs) goto loc_080402AC;
    r0 = 0x0U;
    return sub_0804028E(r0, r1, r2, r3);
loc_080402AC:
    r3 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080402B2;
    r3 = 0x3FU;
loc_080402B2:
    r4 = (r3 << 1);
    r4 = r4 + r0;
    r4 = *(u16*)(r4 + 0x8);
    r4 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_080402CE;
    r4 = (r3 << 2);
    r4 = r4 + r0;
    r4 += 0x80U;
    r4 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_080402CC;
    r0 = 0x0U;
    return sub_0804028E(r0, r1, r2, r3);
loc_080402CC:
    r2 -= 0x1U;
loc_080402CE:
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080402A0;
loc_080402D2:
    r0 = 0x1U;
    return sub_0804028E(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_names.py::test_struct_zero_fields_writes_four_zero_stores_over_the_first_eight_bytes runs it on a crafted object: four zero stores, byte at +0 and halfwords at +2, +4 and +6, and r0 returns unchanged
// ROM Address: 0x080402D6..0x080402F0 (26 bytes, Thumb)
u32 Struct_ZeroFields(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u8*)(r0) = (u8)r1;
    *(u16*)(r0 + 0x2) = (u16)r1;
    *(u16*)(r0 + 0x4) = (u16)r1;
    *(u16*)(r0 + 0x6) = (u16)r1;
    return r0; // BX lr
    r3 = *(u16*)(r0 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080402F0(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080402F0..0x08040314 (36 bytes, Thumb)
u32 sub_080402F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u8*)(r0);
loc_080402F2:
    r3 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080402F8;
    r3 = 0x3FU;
loc_080402F8:
    r1 -= 0x1U;
    r4 = (r1 << 1);
    r5 = (r3 << 1);
    r5 = r5 + r0;
    r4 = *(u16*)(r2 + r4);
    r5 = *(u16*)(r5 + 0x8);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0804030C;
    r0 = 0x0U;
    return sub_080402EC(r0, r1, r2, r3);
loc_0804030C:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080402F2;
    r0 = 0x1U;
    return sub_080402EC(r0, r1, r2, r3);
}

// ROM Address: 0x08040314..0x08040794 (1152 bytes, Thumb)
u32 sub_08040314(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0);
    r1 += 0x3FU;
    r1 = (r1 << 26);
    r1 = (r1 >> 25);
    r0 = r1 + r0;
    r0 = *(u16*)(r0 + 0x8);
    return r0; // BX lr
    r1 = *(u8*)(r0);
    r1 += 0x3FU;
    r1 = (r1 << 26);
    r1 = (r1 >> 25);
    r0 = r1 + r0;
    r2 = *(u16*)(r0 + 0x8);
    r0 = 0x0U;
    r3 = 0x1U;
loc_08040332:
    r1 = r3;
    r1 <<= (r0 & 0xFF);
    r1 &= r2;
    if (cmp_lhs != cmp_rhs) goto loc_08040344;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 10;
    if (cmp_lhs < cmp_rhs) goto loc_08040332;
    r0 = 0x0U;
    r0 = ~r0;
loc_08040344:
    return r0; // BX lr
    r1 = *(u8*)(r0);
    r1 += 0x3FU;
    r1 = (r1 << 26);
    r1 = (r1 >> 24);
    r0 = r1 + r0;
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0x8);
    return r0; // BX lr
    r0 = r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r3 = 0x1U;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r3 = (r3 << 10);
    *(u32*)(r0) = (u32)r3;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r3;
    *(u32*)(r0 + 0x14) = (u32)r1;
    *(u32*)(r0 + 0x18) = (u32)r1;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r3;
    r0 += 0x24U;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0; // BX lr
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0);
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0) = (u32)r3;
    r3 = *(u32*)(r0 + 0x4);
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x4) = (u32)r3;
    r3 = *(u32*)(r0 + 0x8);
    r3 *= r2;
    r2 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x8) = (u32)r2;
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0xC);
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0xC) = (u32)r3;
    r3 = *(u32*)(r0 + 0x10);
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x10) = (u32)r3;
    r3 = *(u32*)(r0 + 0x14);
    r3 *= r2;
    r2 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x14) = (u32)r2;
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x18);
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x18) = (u32)r3;
    r3 = *(u32*)(r0 + 0x1C);
    r3 *= r2;
    r3 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x1C) = (u32)r3;
    r3 = *(u32*)(r0 + 0x20);
    r3 *= r2;
    r2 = ((u32)((s32)r3 >> 10));
    *(u32*)(r0 + 0x20) = (u32)r2;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r0 + 0x24);
    r2 *= r1;
    r2 = ((u32)((s32)r2 >> 10));
    *(u32*)(r0 + 0x24) = (u32)r2;
    r2 = *(u32*)(r0 + 0x28);
    r2 *= r1;
    r2 = ((u32)((s32)r2 >> 10));
    *(u32*)(r0 + 0x28) = (u32)r2;
    r2 = *(u32*)(r0 + 0x2C);
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 10));
    *(u32*)(r0 + 0x2C) = (u32)r1;
    return r0; // BX lr
    r4 = r1;
    r1 = sp;
    r2 = 0xCU;
    r1 = r1 + r2;
    r1 += 0x30U;
    r0 = sp;
    r0 = r0 + r2;
    stack[20] = r1; // [sp + 0x50]
    r3 = 0x08050791U; // [0x08040790]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08040402: BL 0x08046FF4
    r0 = r4;
    r0 += 0xCU;
    r5 = r0;
    r0 += 0x4U;
    stack[19] = r0; // [sp + 0x4C]
    r1 = *(u32*)(r0);
    r0 += 0x8U;
    r6 = r0;
    r0 += 0x8U;
    stack[18] = r0; // [sp + 0x48]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804041C: BL 0x08046B70
    r7 = r0;
    r0 = r5;
    r0 += 0x8U;
    stack[17] = r0; // [sp + 0x44]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r5 + 0x8);
    r0 = r6 + 4;
    stack[16] = r0; // [sp + 0x40]
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040432: BL 0x08046B70
    r2 = r7;
    r3 = stack[2]; // [sp + 0x8]
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x0804043A: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040442
    r0 = ((u32)((s32)r0 >> 10));
    stack[3] = r0; // [sp + 0xC]
    r0 = stack[17]; // [sp + 0x44]
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r6);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040450: BL 0x08046B70
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r5);
    r7 = r0;
    r0 = stack[18]; // [sp + 0x48]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804045E: BL 0x08046B70
    r2 = r7;
    r3 = stack[2]; // [sp + 0x8]
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x08040466: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x0804046E
    r0 = ((u32)((s32)r0 >> 10));
    stack[6] = r0; // [sp + 0x18]
    r1 = *(u32*)(r5);
    r0 = stack[16]; // [sp + 0x40]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804047C: BL 0x08046B70
    r7 = r0;
    r0 = stack[19]; // [sp + 0x4C]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r6);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804048A: BL 0x08046B70
    r2 = r7;
    r3 = stack[2]; // [sp + 0x8]
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x08040492: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x0804049A
    r0 = ((u32)((s32)r0 >> 10));
    stack[9] = r0; // [sp + 0x24]
    r0 = stack[16]; // [sp + 0x40]
    r1 = *(u32*)(r0);
    r0 = r5 - 4;
    stack[15] = r0; // [sp + 0x3C]
    r0 = *(u32*)(r4 + 0x8);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080404AC: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r0 = stack[18]; // [sp + 0x48]
    r7 = r4 + 4;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080404BC: BL 0x08046B70
    r3 = 0x4; // sp + 0x4
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x080404C4: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x080404CC
    r0 = ((u32)((s32)r0 >> 10));
    stack[4] = r0; // [sp + 0x10]
    r0 = stack[18]; // [sp + 0x48]
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080404DA: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r6);
    r0 = stack[15]; // [sp + 0x3C]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080404E8: BL 0x08046B70
    r3 = 0x4; // sp + 0x4
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x080404F0: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x080404F8
    r0 = ((u32)((s32)r0 >> 10));
    stack[7] = r0; // [sp + 0x1C]
    r1 = *(u32*)(r6);
    r0 = *(u32*)(r7);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040504: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[16]; // [sp + 0x40]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r4);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040512: BL 0x08046B70
    r3 = 0x4; // sp + 0x4
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x0804051A: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040522
    r0 = ((u32)((s32)r0 >> 10));
    stack[10] = r0; // [sp + 0x28]
    r1 = *(u32*)(r7);
    r0 = stack[17]; // [sp + 0x44]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040530: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[15]; // [sp + 0x3C]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r0 = stack[19]; // [sp + 0x4C]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040540: BL 0x08046B70
    r3 = 0x4; // sp + 0x4
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x08040548: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040550
    r0 = ((u32)((s32)r0 >> 10));
    stack[5] = r0; // [sp + 0x14]
    r0 = stack[15]; // [sp + 0x3C]
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r5);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804055E: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r4);
    r0 = stack[17]; // [sp + 0x44]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804056C: BL 0x08046B70
    r3 = 0x4; // sp + 0x4
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x08040574: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x0804057C
    r0 = ((u32)((s32)r0 >> 10));
    stack[8] = r0; // [sp + 0x20]
    r1 = *(u32*)(r4);
    r0 = stack[19]; // [sp + 0x4C]
    r0 = *(u32*)(r0);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804058A: BL 0x08046B70
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r7);
    r0 = *(u32*)(r5);
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040596: BL 0x08046B70
    r3 = 0x4; // sp + 0x4
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = __16_ll_rsb(r0, r1, r2, r3); // 0x0804059E: BL 0x08046B94
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x080405A6
    r0 = ((u32)((s32)r0 >> 10));
    stack[11] = r0; // [sp + 0x2C]
    r1 = *(u32*)(r4);
    r0 = stack[3]; // [sp + 0xC]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080405B2: BL 0x08046B70
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r5);
    r7 = r0;
    r0 = stack[4]; // [sp + 0x10]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080405BE: BL 0x08046B70
    r3 = stack[2]; // [sp + 0x8]
    r5 = r0 + r7;
    r1 += r3;
    r7 = r1;
    r1 = *(u32*)(r6);
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080405CE: BL 0x08046B70
    r2 = r0 + r5;
    r1 += r7;
    r3 = r1;
    r1 = 0x08040794U;
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r0 = sub_08046BA4(r0, r1, r2, r3); // 0x080405DC: BL 0x08046BA4
    r5 = r0;
    r6 = r1;
    r2 = stack[3]; // [sp + 0xC]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x080405E6: BL 0x08046B58
    r7 = 0x20000000U; // (1 << 29)
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x080405F0
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x080405F6: BL 0x08046C28
    stack[3] = r0; // [sp + 0xC]
    r1 = r6;
    r0 = r5;
    r2 = stack[4]; // [sp + 0x10]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x08040602: BL 0x08046B58
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040608
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0804060E: BL 0x08046C28
    stack[4] = r0; // [sp + 0x10]
    r1 = r6;
    r0 = r5;
    r2 = stack[5]; // [sp + 0x14]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x0804061A: BL 0x08046B58
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040620
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x08040626: BL 0x08046C28
    stack[5] = r0; // [sp + 0x14]
    r1 = r6;
    r0 = r5;
    r2 = stack[6]; // [sp + 0x18]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x08040632: BL 0x08046B58
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040638
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0804063E: BL 0x08046C28
    stack[6] = r0; // [sp + 0x18]
    r1 = r6;
    r0 = r5;
    r2 = stack[7]; // [sp + 0x1C]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x0804064A: BL 0x08046B58
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040650
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x08040656: BL 0x08046C28
    stack[7] = r0; // [sp + 0x1C]
    r1 = r6;
    r0 = r5;
    r2 = stack[8]; // [sp + 0x20]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x08040662: BL 0x08046B58
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040668
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0804066E: BL 0x08046C28
    stack[8] = r0; // [sp + 0x20]
    r1 = r6;
    r0 = r5;
    r2 = stack[9]; // [sp + 0x24]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x0804067A: BL 0x08046B58
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040680
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x08040686: BL 0x08046C28
    stack[9] = r0; // [sp + 0x24]
    r1 = r6;
    r0 = r5;
    r2 = stack[10]; // [sp + 0x28]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x08040692: BL 0x08046B58
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040698
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0804069E: BL 0x08046C28
    stack[10] = r0; // [sp + 0x28]
    r1 = r6;
    r0 = r5;
    r2 = stack[11]; // [sp + 0x2C]
    r0 = sub_08046B58(r0, r1, r2, r3); // 0x080406AA: BL 0x08046B58
    r2 = r7;
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x080406B0
    r2 = 0x1EU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x080406B6: BL 0x08046C28
    stack[11] = r0; // [sp + 0x2C]
    r4 += 0x24U;
    r1 = *(u32*)(r4);
    r0 = stack[3]; // [sp + 0xC]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080406C2: BL 0x08046B70
    r7 = r1;
    r6 = r0;
    r1 = *(u32*)(r4 + 0x4);
    r0 = stack[6]; // [sp + 0x18]
    r5 = r4 + 4;
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080406D0: BL 0x08046B70
    r0 = r0 + r6;
    r1 += r7;
    stack[2] = r1; // [sp + 0x8]
    r7 = r0;
    r1 = *(u32*)(r4 + 0x8);
    r0 = stack[9]; // [sp + 0x24]
    r6 = r5 + 4;
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x080406E2: BL 0x08046B70
    r3 = stack[2]; // [sp + 0x8]
    r0 = r0 + r7;
    r1 += r3;
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x080406F0
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x080406F6: BL 0x08046C28
    r0 = __16_ll_neg(r0, r1, r2, r3); // 0x080406FA: BL 0x08046B84
    stack[12] = r0; // [sp + 0x30]
    r1 = *(u32*)(r4);
    r0 = stack[4]; // [sp + 0x10]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040704: BL 0x08046B70
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r5);
    r7 = r0;
    r0 = stack[7]; // [sp + 0x1C]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040710: BL 0x08046B70
    r3 = stack[1]; // [sp + 0x4]
    r7 = r0 + r7;
    r1 += r3;
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r6);
    r0 = stack[10]; // [sp + 0x28]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040720: BL 0x08046B70
    r3 = stack[2]; // [sp + 0x8]
    r0 = r0 + r7;
    r1 += r3;
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x0804072E
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x08040734: BL 0x08046C28
    r0 = __16_ll_neg(r0, r1, r2, r3); // 0x08040738: BL 0x08046B84
    stack[13] = r0; // [sp + 0x34]
    r1 = *(u32*)(r4);
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x08040742: BL 0x08046B70
    r4 = r0;
    r7 = r1;
    r1 = *(u32*)(r5);
    r0 = stack[8]; // [sp + 0x20]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804074E: BL 0x08046B70
    r4 = r0 + r4;
    r1 += r7;
    r5 = r1;
    r1 = *(u32*)(r6);
    r0 = stack[11]; // [sp + 0x2C]
    r0 = sub_08046B70(r0, r1, r2, r3); // 0x0804075C: BL 0x08046B70
    r0 = r0 + r4;
    r1 += r5;
    r2 = 0x200U; // (1 << 9)
    r0 = sub_08046B18(r0, r1, r2, r3); // 0x08040768
    r2 = 0xAU;
    r0 = __16_ll_sshift_r(r0, r1, r2, r3); // 0x0804076E: BL 0x08046C28
    r0 = __16_ll_neg(r0, r1, r2, r3); // 0x08040772: BL 0x08046B84
    r2 = 0x08050771U; // [0x0804079C]
    stack[14] = r0; // [sp + 0x38]
    r3 = 0xCU;
    r1 = sp;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[20]; // [sp + 0x50]
    r1 = r1 + r3;
    r0 = stack[21]; // [sp + 0x54]
    r0 = sub_08047018(r0, r1, r2, r3); // 0x08040786
    return r0;
    r0 = r0;
    r1 = (r2 << 30);
    r5 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080407A0..0x080407BC (28 bytes, Thumb)
u32 sub_080407A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_080407BC(r0, r1, r2, r3);
    r1 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x080407B4]
    r0 = 0x087B7970U; // [0x080407B8]
    *(u32*)(r1) = (u32)r0;
    return sub_080407D8(r0, r1, r2, r3);
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
    r0 = *(u8*)(r6 + 0x5);
    r3 = (r7 >> 1);
    return r0;
}

// ROM Address: 0x080407BC..0x080407C8 (12 bytes, Thumb)
u32 sub_080407BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 64;
    if (cmp_lhs != cmp_rhs) return sub_080407D0(r0, r1, r2, r3);
    r1 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x080407C8]
    r0 = 0x087B797CU; // [0x080407CC]
    *(u32*)(r1) = (u32)r0;
    return sub_080407D8(r0, r1, r2, r3);
}

// ROM Address: 0x080407C8..0x08040880 (184 bytes, Thumb)
u32 sub_080407C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
    r4 = *(u8*)(r7 + 0x5);
    r3 = (r7 >> 1);
    r1 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x080407E0]
    r0 = 0x087B7970U; // [0x080407E4]
    *(u32*)(r1) = (u32)r0;
    r2 = 0x1U;
    r0 = r2;
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
    r0 = r0;
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
    r0 = *(u8*)(r6 + 0x5);
    r3 = (r7 >> 1);
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    r4 = 0x04000208U /* &REG_IME */; // [0x08040848]
    r3 = *(u16*)(r4);
    r6 = r3;
    r3 = 0x0U;
    *(u16*)(r4) = (u16)r3;
    r5 = 0x04000204U /* &REG_WAITCNT */; // [0x0804084C]
    r4 = *(u16*)(r5);
    r3 = 0x0000F8FFU; // [0x08040850]
    r4 &= r3;
    r3 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040854]
    r3 = *(u32*)(r3);
    r3 = *(u16*)(r3 + 0x6);
    r4 |= r3;
    *(u16*)(r5) = (u16)r4;
    r3 = 0x040000D4U /* &REG_DMA3SAD */; // [0x08040858]
    *(u32*)(r3) = (u32)r0;
    r0 = 0x040000D8U /* &REG_DMA3DAD */; // [0x0804085C]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x040000DCU /* &REG_DMA3CNT_L */; // [0x08040860]
    r0 = 0x80000000U; // (128 << 24)
    r2 |= r0;
    *(u32*)(r1) = (u32)r2;
    r1 += 0x2U;
    r2 = 0x8000U; // (128 << 8)
    r0 = r2;
    r1 = *(u16*)(r1);
    r0 &= r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804083C;
    r2 = 0x040000DEU /* &REG_DMA3CNT_H */; // [0x08040864]
    r0 = 0x8000U; // (128 << 8)
    r1 = r0;
loc_08040834:
    r0 = *(u16*)(r2);
    r0 &= r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08040834;
loc_0804083C:
    r0 = 0x04000208U /* &REG_IME */; // [0x08040848]
    *(u16*)(r0) = (u16)r6;
    return ((u32 (*)(u32, u32, u32, u32))r0)(r0, r1, r2, r3); // BX r0
    r0 = r0;
    r0 = (r1 << 8);
    r0 = (r0 << 16);
    r4 = (r0 << 8);
    r0 = (r0 << 16);
    r0 = r0;
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
    r4 = (r2 << 3);
    r0 = (r0 << 16);
    r0 = (r3 << 3);
    r0 = (r0 << 16);
    r4 = (r3 << 3);
    r0 = (r0 << 16);
    r6 = (r3 << 3);
    r0 = (r0 << 16);
    r5 = r1;
    r0 = (r0 << 16);
    r3 = (r0 >> 16);
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040880]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08040888(r0, r1, r2, r3);
    r0 = 0x000080FFU; // [0x08040884]
    return sub_0804090A(r0, r1, r2, r3);
}

// ROM Address: 0x08040882..0x08040950 (206 bytes, Thumb)
u32 sub_08040882(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u16*)(r7 + 0x6) = (u16)r7;
    r0 = r0;
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040914]
    r6 = r0;
    r0 = *(u32*)(r0);
    r1 = *(u8*)(r0 + 0x8);
    r0 = (r1 << 1);
    r4 = sp;
    r2 = r0 + r4;
    r2 += 0x2U;
    r4 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080408B2;
loc_0804089E:
    *(u16*)(r2) = (u16)r3;
    r2 -= 0x2U;
    r3 = (r3 >> 1);
    r0 = r4 + 1;
    r0 = (r0 << 24);
    r4 = (r0 >> 24);
    r0 = *(u32*)(r6);
    r0 = *(u8*)(r0 + 0x8);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804089E;
loc_080408B2:
    r0 = 0x1U;
    *(u16*)(r2) = (u16)r0;
    r2 -= 0x2U;
    *(u16*)(r2) = (u16)r0;
    r4 = 0xD000000U; // (208 << 20)
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040914]
    r0 = *(u32*)(r0);
    r2 = *(u8*)(r0 + 0x8);
    r2 += 0x3U;
    r0 = sp;
    r1 = r4;
    r0 = sub_080407E8(r0, r1, r2, r3); // 0x080408CA
    r0 = r4;
    r1 = sp;
    r2 = 0x44U;
    r0 = sub_080407E8(r0, r1, r2, r3); // 0x080408D4
    r2 = 0x8; // sp + 0x8
    r5 += 0x6U;
    r4 = 0x0U;
    r6 = 0x1U;
loc_080408E0:
    r1 = 0x0U;
    r3 = 0x0U;
loc_080408E4:
    r1 = (r1 << 17);
    r0 = *(u16*)(r2);
    r0 &= r6;
    r1 = (r1 >> 16);
    r1 |= r0;
    r2 += 0x2U;
    r0 = r3 + 1;
    r0 = (r0 << 24);
    r3 = (r0 >> 24);
    cmp_lhs = (s32)r3; cmp_rhs = 15;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080408E4;
    *(u16*)(r5) = (u16)r1;
    r5 -= 0x2U;
    r0 = r4 + 1;
    r0 = (r0 << 24);
    r4 = (r0 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 3;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080408E0;
    r0 = 0x0U;
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
    r0 = r0;
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r2 = 0x1U;
    r0 = sub_0804092C(r0, r1, r2, r3); // 0x08040920
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
    r5 = r1;
    r0 = (r0 << 16);
    r1 = (r0 >> 16);
    r2 = (r2 << 24);
    r7 = (r2 >> 24);
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040948]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08040950(r0, r1, r2, r3);
    r0 = 0x000080FFU; // [0x0804094C]
    return sub_08040A84(r0, r1, r2, r3);
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
    *(u16*)(r7 + 0x6) = (u16)r7;
    r0 = r0;
    return r0;
}

// ROM Address: 0x08040950..0x08040A14 (196 bytes, Thumb)
u32 sub_08040950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040990]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0 + 0x8);
    r0 = (r0 << 1);
    r2 = sp;
    r3 = r0 + r2;
    r3 += 0x84U;
    r0 = 0x0U;
    *(u16*)(r3) = (u16)r0;
    r3 -= 0x2U;
    r4 = 0x0U;
loc_08040966:
    r2 = *(u16*)(r5);
    r5 += 0x2U;
    r0 = 0x0U;
loc_0804096C:
    *(u16*)(r3) = (u16)r2;
    r3 -= 0x2U;
    r2 = (r2 >> 1);
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 15;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0804096C;
    r0 = r4 + 1;
    r0 = (r0 << 24);
    r4 = (r0 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 3;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08040966;
    r4 = 0x0U;
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040990]
    r2 = r0;
    r0 = *(u32*)(r0);
    goto loc_080409A2;
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
loc_08040994:
    *(u16*)(r3) = (u16)r1;
    r3 -= 0x2U;
    r1 = (r1 >> 1);
    r0 = r4 + 1;
    r0 = (r0 << 24);
    r4 = (r0 >> 24);
    r0 = *(u32*)(r2);
loc_080409A2:
    r0 = *(u8*)(r0 + 0x8);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08040994;
    r0 = 0x0U;
    *(u16*)(r3) = (u16)r0;
    r3 -= 0x2U;
    r6 = 0x1U;
    *(u16*)(r3) = (u16)r6;
    r4 = 0xD000000U; // (208 << 20)
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040A14]
    r0 = *(u32*)(r0);
    r2 = *(u8*)(r0 + 0x8);
    r2 += 0x43U;
    r0 = sp;
    r1 = r4;
    r0 = sub_080407E8(r0, r1, r2, r3); // 0x080409C2
    r5 = 0x0U;
    r2 = 0xA4; // sp + 0xA4
    *(u16*)(r2) = (u16)r5;
    r1 = sp;
    r1 += 0xA6U;
    r0 = 0x04000006U /* &REG_VCOUNT */; // [0x08040A18]
    r0 = *(u16*)(r0);
    *(u16*)(r1) = (u16)r0;
    r0 = 0xAC; // sp + 0xAC
    *(u32*)(r0) = (u32)r5;
    r0 = *(u16*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080409E8;
    r0 = *(u16*)(r4);
    r0 &= r6;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08040A78(r0, r1, r2, r3);
loc_080409E8:
    r3 = 0xA8; // sp + 0xA8
    r0 = 0x04000006U /* &REG_VCOUNT */; // [0x08040A18]
    r0 = *(u16*)(r0);
    *(u16*)(r3) = (u16)r0;
    r4 = sp;
    r4 += 0xA6U;
    r1 = *(u16*)(r3);
    r0 = *(u16*)(r4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) return sub_08040A62(r0, r1, r2, r3);
    r1 = *(u16*)(r3);
    r0 = *(u16*)(r4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08040A1C(r0, r1, r2, r3);
    r2 = 0xAC; // sp + 0xAC
    r1 = *(u16*)(r3);
    r0 = *(u16*)(r4);
    r1 = r1 - r0;
    r0 = *(u32*)(r2);
    r1 = r1 + r0;
    *(u32*)(r2) = (u32)r1;
    return sub_08040A32(r0, r1, r2, r3);
}

// ROM Address: 0x08040A54..0x08040AB0 (92 bytes, Thumb)
u32 sub_08040A54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)r0 = r0; r0 += 4;
    r0 = r0;
    r0 = sp;
    r0 += 0xA6U;
    r1 = 0xA8; // sp + 0xA8
    r1 = *(u16*)(r1);
    *(u16*)(r0) = (u16)r1;
    r2 = 0xA4; // sp + 0xA4
    r0 = *(u16*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080409E8(r0, r1, r2, r3);
    r0 = 0xD000000U; // (208 << 20)
    r1 = 0x1U;
    r0 = *(u16*)(r0);
    r1 &= r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080409E8(r0, r1, r2, r3);
    r0 = *(u16*)(r2);
    r0 += 0x1U;
    *(u16*)(r2) = (u16)r0;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080409E8(r0, r1, r2, r3);
    r0 = r5;
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
    r4 = r1;
    r0 = (r0 << 16);
    r1 = (r0 >> 16);
    r5 = 0x0U;
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040AA8]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08040AB0(r0, r1, r2, r3);
    r0 = 0x000080FFU; // [0x08040AAC]
    return sub_08040ADA(r0, r1, r2, r3);
    r0 = r0;
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
    *(u16*)(r7 + 0x6) = (u16)r7;
    r0 = r0;
    return r0;
}

// ROM Address: 0x08040AB0..0x08040ABE (14 bytes, Thumb)
u32 sub_08040AB0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = sp;
    r0 = sub_08040868(r0, r1, r2, r3); // 0x08040AB4
    r2 = sp;
    r3 = 0x0U;
    return sub_08040AC8(r0, r1, r2, r3);
}

// ROM Address: 0x08040ABE..0x08040AE2 (36 bytes, Thumb)
u32 sub_08040ABE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_08040ABE:
    r0 = r3 + 1;
    r0 = (r0 << 24);
    r3 = (r0 >> 24);
    cmp_lhs = (s32)r3; cmp_rhs = 3;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08040AD8;
    r1 = *(u16*)(r4);
    r0 = *(u16*)(r2);
    r2 += 0x2U;
    r4 += 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08040ABE;
    r5 = 0x8000U; // (128 << 8)
loc_08040AD8:
    r0 = r5;
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
}

// ROM Address: 0x08040AF0..0x08040B22 (50 bytes, Thumb)
u32 sub_08040AF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_08040AF0:
    r0 = r6 + 1;
    r0 = (r0 << 24);
    r6 = (r0 >> 24);
    cmp_lhs = (s32)r6; cmp_rhs = 2;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08040B1A;
    r0 = r4;
    r1 = r5;
    r0 = sub_08040918(r0, r1, r2, r3); // 0x08040AFE
    r0 = (r0 << 16);
    r2 = (r0 >> 16);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08040AF0;
    r0 = r4;
    r1 = r5;
    r0 = sub_08040A8C(r0, r1, r2, r3); // 0x08040B0E
    r0 = (r0 << 16);
    r2 = (r0 >> 16);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08040AF0;
loc_08040B1A:
    r0 = r2;
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
}

// ROM Address: 0x08040B24..0x08040B9A (118 bytes, Thumb)
u32 sub_08040B24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r1;
    r0 = (r0 << 16);
    r2 = (r0 >> 16);
    r0 = 0x030052F8U /* &g_EepromDescriptorPointer */; // [0x08040B4C]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r0 = 0x200U; // (128 << 2)
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08040B50;
    r0 = r2;
    r1 = r3;
    r2 = 0x0U;
    r0 = sub_0804092C(r0, r1, r2, r3); // 0x08040B40
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    goto loc_08040B52;
    r0 = r0;
    *(u16*)(r7 + r3) = (u16)r0;
    r0 = (r0 << 12);
loc_08040B50:
    r0 = 0x00008080U; // [0x08040B58]
loc_08040B52:
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
    r0 = r0;
    *(u16*)(r0 + 0x4) = (u16)r0;
    r0 = r0;
    r5 = r1;
    r0 = (r0 << 16);
    r4 = (r0 >> 16);
    r6 = 0x0U;
    goto loc_08040B6E;
loc_08040B68:
    r0 = r6 + 1;
    r0 = (r0 << 24);
    r6 = (r0 >> 24);
loc_08040B6E:
    cmp_lhs = (s32)r6; cmp_rhs = 2;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08040B92;
    r0 = r4;
    r1 = r5;
    r0 = sub_08040B24(r0, r1, r2, r3); // 0x08040B76: BL 0x08040B24
    r0 = (r0 << 16);
    r2 = (r0 >> 16);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08040B68;
    r0 = r4;
    r1 = r5;
    r0 = sub_08040A8C(r0, r1, r2, r3); // 0x08040B86
    r0 = (r0 << 16);
    r2 = (r0 >> 16);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08040B68;
loc_08040B92:
    r0 = r2;
    return ((u32 (*)(u32, u32, u32, u32))r1)(r0, r1, r2, r3); // BX r1
}

// ROM Address: 0x08040B9A..0x08040B9C (2 bytes, Thumb)
u32 sub_08040B9A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0;
}

// ROM Address: 0x08040B9C..0x08040DDA (574 bytes, Thumb)
u32 sub_08040B9C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x04000120U; // [0x08040E8C]
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    stack[1] = r1; // [sp + 0x4]
    stack[0] = r2; // [sp + 0x0]
    r1 = *(u16*)(r0 + 0x8);
    r2 = 0x03004A9CU; // [0x08040E90]
    r3 = 0x0; // sp + 0x0
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    *(u8*)(r2 + 0x7) = (u8)r1;
    r1 = *(u16*)(r3);
    r2 = 0x0000FEFEU; // [0x08040E94]
    r6 = 0x80U;
    r5 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08040BF8;
    r1 = 0x03004A9CU; // [0x08040E90]
    r2 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs <= cmp_rhs) goto loc_08040BF8;
    r2 = ~r5;
    *(u32*)(r1 + 0x18) = (u32)r2;
    r2 = *(u32*)(r1 + 0x28);
    r3 = *(u32*)(r1 + 0x24);
    *(u32*)(r1 + 0x24) = (u32)r2;
    *(u32*)(r1 + 0x28) = (u32)r3;
    r2 = *(u8*)(r1 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040BE8;
    r2 = *(u32*)(r1 + 0x20);
    r3 = *(u32*)(r1 + 0x1C);
    *(u32*)(r1 + 0x1C) = (u32)r2;
    *(u32*)(r1 + 0x20) = (u32)r3;
    *(u8*)(r1 + 0x4) = (u8)r5;
    *(u32*)(r1 + 0x14) = (u32)r5;
loc_08040BE8:
    r2 = 0x04000200U /* &REG_IE */; // [0x08040E98]
    *(u16*)(r2 + 0x8) = (u16)r5;
    r3 = 0x03007FF8U; // [0x08040E9C]
    r1 = *(u16*)(r3);
    r1 |= r6;
    *(u16*)(r3) = (u16)r1;
    r1 = 0x1U;
    *(u16*)(r2 + 0x8) = (u16)r1;
loc_08040BF8:
    r4 = 0x03004A9CU; // [0x08040E90]
    r1 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs > cmp_rhs) goto loc_08040C08;
    r2 = *(u32*)(r4 + 0x20);
    r3 = (r1 << 1);
    r2 = *(u16*)(r2 + r3);
    *(u16*)(r0 + 0xA) = (u16)r2;
loc_08040C08:
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    if (cmp_lhs >= cmp_rhs) goto loc_08040C10;
    r1 += 0x1U;
    *(u32*)(r4 + 0x14) = (u32)r1;
loc_08040C10:
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08040C44;
    r0 = 0x0U;
    r7 = sp;
loc_08040C1A:
    r3 = (r0 << 1);
    r3 = r3 + r0;
    r3 = (r3 << 2);
    r3 = (r3 >> 1);
    r2 = *(u32*)(r4 + 0x24);
    r3 = (r3 << 1);
    r2 = r2 + r3;
    r3 = *(u32*)(r4 + 0x18);
    r1 = (r0 << 1);
    r1 = *(u16*)(r7 + r1);
    r3 = (r3 << 1);
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    *(u16*)(r2 + r3) = (u16)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08040C1A;
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_08040C44;
    r1 = 0x1U;
    *(u8*)(r4 + 0x5) = (u8)r1;
    goto loc_08040C4A;
loc_08040C44:
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs >= cmp_rhs) goto loc_08040C50;
loc_08040C4A:
    r0 = *(u32*)(r4 + 0x18);
    r0 += 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_08040C50:
    r0 = *(u8*)(r4);
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08040EA0]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040C5A;
    *(u16*)(r1 + 0xE) = (u16)r5;
loc_08040C5A:
    r2 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = 5;
    if (cmp_lhs >= cmp_rhs) goto loc_08040C70;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040C70;
    r2 = 0x04000128U; // [0x08040EA4]
    r0 = *(u16*)(r2);
    r0 |= r6;
    *(u16*)(r2) = (u16)r0;
    r0 = 0xC0U;
    *(u16*)(r1 + 0xE) = (u16)r0;
loc_08040C70:
    *(u8*)(r4 + 0x9) = (u8)r5;
    return r0; // BX lr
    r5 = 0x04000200U /* &REG_IE */; // [0x08040E98]
    r0 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r0;
    r0 = *(u16*)(r5);
    r1 = 0x80U;
    r0 &= ~r1;
    r1 = 0x40U;
    r0 &= ~r1;
    *(u16*)(r5) = (u16)r0;
    r0 = 0x1U;
    *(u16*)(r5 + 0x8) = (u16)r0;
    r0 = 0x087B76F4U; // [0x08040EA8]
    r1 = 0x08040B9DU /* &sub_08040B9C */; // [0x08040EAC]
    r0 = *(u32*)(r0);
    r2 = 0x1U;
    *(u32*)(r0 + 0x18) = (u32)r1;
    r0 = 0x087B76F4U; // [0x08040EA8]
    r0 = *(u32*)(r0);
    *(u32*)(r0 + 0x1C) = (u32)r1;
    r0 = 0x087B76F4U; // [0x08040EA8]
    r0 = *(u32*)(r0);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x087B76F4U; // [0x08040EA8]
    r0 = *(u32*)(r0);
    r0 += 0x1CU;
    r1 = *(u32*)(r0);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x04000120U; // [0x08040E8C]
    r1 = 0x0U;
    *(u16*)(r0 + 0x14) = (u16)r1;
    r1 = (r0 >> 13);
    *(u16*)(r0 + 0x8) = (u16)r1;
    r2 = 0x04000128U; // [0x08040EA4]
    r0 = *(u16*)(r2);
    r1 = 0x00004003U; // [0x08040EB0]
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    r4 = 0x03004A9CU; // [0x08040E90]
    r2 = 0x05000024U; // [0x08040EB4]
    r0 = sp;
    r1 = r4;
    r0 = Bios_CpuSet(r0, r1); // SWI 0x0B
    r0 = 0x6U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 += 0x30U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = r4;
    r0 += 0x3CU;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r4;
    r0 += 0x48U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r4;
    r0 += 0x60U;
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = r4;
    r0 += 0x78U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = 0x0U;
    *(u16*)(r5 + 0x8) = (u16)r0;
    r0 = *(u16*)(r5);
    r1 = 0x80U;
    r0 |= r1;
    *(u16*)(r5) = (u16)r0;
    r0 = 0x1U;
    *(u16*)(r5 + 0x8) = (u16)r0;
    return r0;
    r1 = 0x03004A9CU; // [0x08040E90]
    r0 = *(u8*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040D1C;
    r0 = 0x1U;
    *(u8*)(r1 + 0x6) = (u8)r0;
loc_08040D1C:
    return r0; // BX lr
    r0 = 0x04000200U /* &REG_IE */; // [0x08040E98]
    r1 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r3 = *(u16*)(r0);
    r4 = 0x80U;
    r2 = 0x1U;
    r3 &= ~r4;
    r4 = 0x40U;
    r3 &= ~r4;
    *(u16*)(r0) = (u16)r3;
    *(u16*)(r0 + 0x8) = (u16)r2;
    r2 = 0x00002003U; // [0x08040EB8]
    r3 = 0x04000120U; // [0x08040E8C]
    *(u16*)(r3 + 0x8) = (u16)r2;
    r2 = 0x000063F7U; // [0x08040EBC]
    r3 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08040EA0]
    *(u32*)(r3 + 0xC) = (u32)r2;
    r2 = 0xC0U;
    *(u16*)(r0 + 0x2) = (u16)r2;
    r0 = 0x03004A9CU; // [0x08040E90]
    *(u8*)(r0 + 0x6) = (u8)r1;
    return r0; // BX lr
    r7 = r0;
    r0 = sub_080491C0(r0, r1, r2, r3); // 0x08040D52: BL 0x080491C0
    r1 = (r0 << 24);
    r0 = 0x0U;
    r6 = 0x03004A9CU; // [0x08040E90]
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    *(u8*)(r6 + 0x3) = (u8)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08040DB2;
    r4 = 0x0U;
loc_08040D66:
    r1 = (r4 << 1);
    r1 = r1 + r4;
    r1 = (r1 << 2);
    r1 = (r1 >> 1);
    r0 = *(u32*)(r6 + 0x2C);
    r1 = (r1 << 1);
    r5 = r0 + r1;
    r1 = 0x0U;
    r0 = 0x0U;
loc_08040D78:
    r2 = (r0 << 1);
    r2 = *(u16*)(r5 + r2);
    r0 += 0x1U;
    r1 = r2 + r1;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08040D78;
    r0 = (r1 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    r3 = r0 + 7;
    if (cmp_lhs != cmp_rhs) goto loc_08040DA0;
    r0 = (r4 << 2);
    r1 = r0 + r7;
    r0 = r5 + 4;
    r2 = 0x04000001U; // [0x08040EC0]
    r0 = Bios_CpuSet(r0, r1); // SWI 0x0B
    r0 = *(u8*)(r6 + 0x3);
    r1 = 0x1U;
    r1 <<= (r4 & 0xFF);
    r0 |= r1;
    *(u8*)(r6 + 0x3) = (u8)r0;
loc_08040DA0:
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    r2 = 0x05000001U; // [0x08040EC4]
    r1 = r5 + 4;
    r0 = sp;
    r0 = Bios_CpuSet(r0, r1); // SWI 0x0B
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_08040D66;
loc_08040DB2:
    r1 = *(u8*)(r6 + 0x2);
    r0 = *(u8*)(r6 + 0x3);
    r1 |= r0;
    *(u8*)(r6 + 0x2) = (u8)r1;
    return r0;
    r1 = 0x04000128U; // [0x08040EA4]
    r2 = *(u32*)(r1);
    r4 = 0x03004A9CU; // [0x08040E90]
    stack[1] = r2; // [sp + 0x4]
    r2 = *(u8*)(r4 + 0x1);
    r5 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return Irq_WriteEnableAndTimer3(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08040E28(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_08040E42(r0, r1, r2, r3);
    return sub_08040E3E(r0, r1, r2, r3);
}

// Evidence: writes TM3CNT_L 0x0400010C: 0x08040E18 ldr r3, [pc, #0x84] (= 0x04000100) then 0x08040E1C str r1, [r3, #0xc]; reads IE 0x04000200: 0x08040DFC ldr r2, [pc, #0x98] (= 0x04000200) then 0x08040E02 ldrh r3, [r2]; writes IE 0x04000200: 0x08040DFC ldr r2, [pc, #0x98] (= 0x04000200) then 0x08040E0C strh r3, [r2]; writes IF 0x04000202: 0x08040DFC ldr r2, [pc, #0x98] (= 0x04000200) then 0x08040E20 strh r1, [r2, #2]; writes IME 0x04000208: 0x08040DFC ldr r2, [pc, #0x98] (= 0x04000200) then 0x08040E00 strh r3, [r2, #8]; 0x08040DFC ldr r2, [pc, #0x98] (= 0x04000200) then 0x08040E0E strh r5, [r2, #8]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08040DDA
// ROM Address: 0x08040DDA..0x08040E3A (96 bytes, Thumb)
u32 Irq_WriteEnableAndTimer3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0; // sp + 0x0
    r2 = *(u16*)(r3 + 0x4);
    r2 = (r2 << 26);
    r2 = (r2 >> 30);
    if (cmp_lhs != cmp_rhs) goto loc_08040E26;
    r2 = *(u16*)(r3 + 0x4);
    r2 = (r2 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08040E42(r0, r1, r2, r3);
    r2 = *(u16*)(r3 + 0x4);
    r2 = (r2 << 24);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_08040E42(r0, r1, r2, r3);
    r2 = *(u16*)(r3 + 0x4);
    r2 = (r2 << 29);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08040E26;
    r2 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = 6;
    if (cmp_lhs != cmp_rhs) goto loc_08040E26;
    r2 = 0x04000200U /* &REG_IE */; // [0x08040E98]
    r3 = 0x0U;
    *(u16*)(r2 + 0x8) = (u16)r3;
    r3 = *(u16*)(r2);
    r6 = 0x80U;
    r3 &= ~r6;
    r6 = 0x40U;
    r3 |= r6;
    *(u16*)(r2) = (u16)r3;
    *(u16*)(r2 + 0x8) = (u16)r5;
    r3 = *(u16*)(r1);
    r6 = (r2 >> 12);
    r3 &= ~r6;
    *(u16*)(r1) = (u16)r3;
    r3 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08040EA0]
    r1 = 0x000063F7U; // [0x08040EBC]
    *(u32*)(r3 + 0xC) = (u32)r1;
    r1 = 0xC0U;
    *(u16*)(r2 + 0x2) = (u16)r1;
    r1 = 0x8U;
    *(u8*)(r4) = (u8)r1;
loc_08040E26:
    *(u8*)(r4 + 0x1) = (u8)r5;
    r1 = *(u8*)(r4 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08040E3E(r0, r1, r2, r3);
    r1 = *(u8*)(r4 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08040E3A(r0, r1, r2, r3);
    r1 += 0x1U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    return sub_08040E3E(r0, r1, r2, r3);
}

// ROM Address: 0x08040E3A..0x08040F5E (292 bytes, Thumb)
u32 sub_08040E3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x2U;
    *(u8*)(r4 + 0x1) = (u8)r1;
    r0 = sub_08040D4E(r0, r1, r2, r3); // 0x08040E3E
    r0 = *(u8*)(r4 + 0xB);
    r1 = r5;
    r0 += 0x1U;
    *(u8*)(r4 + 0xB) = (u8)r0;
    r0 = *(u8*)(r4 + 0x3);
    r2 = *(u8*)(r4);
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    if (cmp_lhs == cmp_rhs) goto loc_08040E54;
    r1 = 0x0U;
loc_08040E54:
    r1 = (r1 << 7);
    r0 |= r1;
    r1 = *(u8*)(r4 + 0x2);
    r2 = *(u8*)(r4 + 0x7);
    r1 = (r1 << 8);
    r0 |= r1;
    r1 = r5;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08040E68;
    r1 = 0x0U;
loc_08040E68:
    r1 = (r1 << 12);
    r0 |= r1;
    r3 = 0x0; // sp + 0x0
    r1 = *(u16*)(r3 + 0x4);
    r1 = (r1 << 26);
    r1 = (r1 >> 30);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08040E7A;
    r5 = 0x0U;
loc_08040E7A:
    r1 = (r5 << 13);
    r0 |= r1;
    r1 = *(u8*)(r4 + 0x8);
    r1 = (r1 >> 3);
    r1 = (r1 << 15);
    r0 |= r1;
    return r0;
    r0 = r0;
    r0 = (r4 << 4);
    r0 = (r0 << 16);
    r2 = 0xE7B6D100U; // [0x08041104]
    r0 = (r0 << 12);
    r0 = r0;
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r0 = *(u8*)(r7 + 0x1F);
    r0 = (r0 << 12);
    r0 = (r0 << 4);
    r0 = (r0 << 16);
    r0 = (r5 << 4);
    r0 = (r0 << 16);
    *(u8*)(r6 + 0x1B) = (u8)r4;
    r3 = (r7 >> 1);
    r5 = (r3 >> 14);
    r4 = (r0 >> 32);
    r3 &= r0;
    r0 = r0;
    r4 = r4;
    r0 = (r0 << 20);
    r0 = 0x3U;
    r0 = r0;
    *(u32*)(r6 + 0x3C) = (u32)r7;
    r0 = r0;
    r1 = r0;
    r0 = (r0 << 16);
    r1 = r0;
    r0 = (r0 << 20);
    r5 = 0x03004A9CU; // [0x08040F7C]
    r4 = 0x0U;
    r2 = *(u8*)(r5 + 0xB);
    r1 = *(u32*)(r5 + 0x1C);
    *(u8*)(r1) = (u8)r2;
    r2 = *(u8*)(r5 + 0x2);
    r3 = *(u8*)(r5 + 0x3);
    r2 ^= r3;
    *(u8*)(r1 + 0x1) = (u8)r2;
    r2 = 0x0U;
    *(u16*)(r1 + 0x2) = (u16)r2;
    r2 = 0x04000001U; // [0x08040F80]
    r1 += 0x4U;
    r0 = Bios_CpuSet(r0, r1); // SWI 0x0B
    r1 = *(u32*)(r5 + 0x1C);
    r0 = 0x0U;
loc_08040EEA:
    r2 = (r0 << 1);
    r2 = *(u16*)(r1 + r2);
    r0 += 0x1U;
    r4 = r2 + r4;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08040EEA;
    r0 = ~r4;
    r0 -= 0x6U;
    *(u16*)(r1 + 0x2) = (u16)r0;
    r0 = 0x1U;
    *(u8*)(r5 + 0x4) = (u8)r0;
    return r0;
    r1 = 0x03004A9CU; // [0x08040F7C]
    r0 = *(u8*)(r1);
    r4 = 0x0U;
    r3 = 0x80U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return Irq_WriteMaster3(r0, r1, r2, r3);
    r0 = *(u8*)(r1 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040F5A;
    r0 = r1;
    r1 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040F5A;
    r1 = *(u8*)(r0 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08040F5A;
    r1 = ~r4;
    *(u32*)(r0 + 0x18) = (u32)r1;
    r1 = *(u32*)(r0 + 0x28);
    r2 = *(u32*)(r0 + 0x24);
    *(u32*)(r0 + 0x24) = (u32)r1;
    *(u32*)(r0 + 0x28) = (u32)r2;
    r1 = *(u32*)(r0 + 0x20);
    r2 = *(u32*)(r0 + 0x1C);
    *(u32*)(r0 + 0x1C) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r2;
    *(u8*)(r0 + 0x4) = (u8)r4;
    r2 = 0x04000120U; // [0x08040F84]
    *(u32*)(r0 + 0x14) = (u32)r4;
    r1 = *(u16*)(r2 + 0x8);
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    *(u8*)(r0 + 0x7) = (u8)r1;
    r0 = 0x0000FEFEU; // [0x08040F88]
    r1 = r2;
    r1 += 0x8U;
    *(u16*)(r2 + 0xA) = (u16)r0;
    r0 = *(u16*)(r1);
    r0 |= r3;
    *(u16*)(r1) = (u16)r0;
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08040F8C]
    r0 = 0xC0U;
    *(u16*)(r1 + 0xE) = (u16)r0;
loc_08040F5A:
    return r0; // BX lr
}

// Evidence: writes IME 0x04000208: 0x08040F6A ldr r1, [pc, #0x24] (= 0x04000200) then 0x08040F6C strh r4, [r1, #8]; 0x08040F6A ldr r1, [pc, #0x24] (= 0x04000200) then 0x08040F78 strh r0, [r1, #8]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08040F5E
// ROM Address: 0x08040F5E..0x08040F7C (30 bytes, Thumb)
u32 Irq_WriteMaster3(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r1 + 0x9);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08040F6A;
    r0 += 0x1U;
    *(u8*)(r1 + 0x9) = (u8)r0;
    return sub_08040F5A(r0, r1, r2, r3);
loc_08040F6A:
    r1 = 0x04000200U /* &REG_IE */; // [0x08040F90]
    *(u16*)(r1 + 0x8) = (u16)r4;
    r2 = 0x03007FF8U; // [0x08040F94]
    r0 = *(u16*)(r2);
    r0 |= r3;
    *(u16*)(r2) = (u16)r0;
    r0 = 0x1U;
    *(u16*)(r1 + 0x8) = (u16)r0;
    return sub_08040F5A(r0, r1, r2, r3);
}

// ROM Address: 0x08040F7E..0x08040FD6 (88 bytes, Thumb)
u32 sub_08040F7E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r1 = r0;
    r0 = (r0 << 16);
    r0 = (r4 << 4);
    r0 = (r0 << 16);
    r0 = r0;
    r0 = (r0 << 4);
    r0 = (r0 << 16);
    r0 = (r0 << 8);
    r0 = (r0 << 16);
    r0 = *(u8*)(r7 + 0x1F);
    r0 = (r0 << 12);
    r2 = 0x03004A98U; // [0x0804110C]
    r1 = 0x1U;
    *(u32*)(r2) = (u32)r1;
    r2 = 0x03004A94U; // [0x08041110]
    r1 = 0x0U;
    *(u8*)(r2) = (u8)r1;
    r2 = 0x03004A6CU; // [0x08041114]
    r1 = 0xFFU;
    *(u8*)(r2) = (u8)r1;
    r1 = 0xAU;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = sub_080400EE(r0, r1, r2, r3); // 0x08040FB0
    r0 = sub_08040C78(r0, r1, r2, r3); // 0x08040FB4
    return r0;
    r1 = 0x03004A98U; // [0x0804110C]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r0 = sub_08040D1E(r0, r1, r2, r3); // 0x08040FC2
    r0 = sub_080400EE(r0, r1, r2, r3); // 0x08040FC6
    return r0;
    r0 = 0x04000120U; // [0x08041118]
    r0 = *(u16*)(r0 + 0x8);
    r0 = (r0 << 26);
    r0 = (r0 >> 30);
    return r0; // BX lr
}

// ROM Address: 0x08040FD6..0x08041022 (76 bytes, Thumb)
u32 sub_08040FD6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r2 = 0x03004A7CU; // [0x0804111C]
    r0 = 0x03004A90U; // [0x08041120]
    r6 = 0x0U;
    *(u32*)(r2) = (u32)r6;
    r0 = *(u32*)(r0);
    r5 = 0x0U;
    r1 = (r0 << 24);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08040FEE;
    r1 = 0x1U;
    *(u32*)(r2) = (u32)r1;
loc_08040FEE:
    r0 = (r0 << 23);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08041026(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08040FFA: BL 0x08046AA2
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    r1 = 0x03004A6CU; // [0x08041114]
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0804100E;
    r2 = *(u8*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08041016;
loc_0804100E:
    *(u8*)(r1) = (u8)r0;
    r0 = 0xAU;
    *(u32*)(r4 + 0x4) = (u32)r0;
    return sub_08041026(r0, r1, r2, r3);
loc_08041016:
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08041022(r0, r1, r2, r3);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    return sub_08041026(r0, r1, r2, r3);
}

// ROM Address: 0x08041022..0x08041064 (66 bytes, Thumb)
u32 sub_08041022(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r6;
    r0 = r5;
    return r0;
    r1 = 0x03004A80U; // [0x08041124]
    r0 = *(u32*)(r1);
    r2 = 0x03000FFCU; // [0x08041128]
    r3 = *(u32*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0804103A;
    r0 = *(u32*)(r1);
    *(u32*)(r2) = (u32)r0;
loc_0804103A:
    r0 = 0x03004A90U; // [0x08041120]
    r0 = *(u32*)(r0);
    r3 = (r0 << 19);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08041056;
    r3 = (r0 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08041052;
    r3 = (r0 << 20);
    r3 = (r3 >> 28);
    r0 = (r0 << 28);
    r0 = (r0 >> 28);
    r3 ^= r0;
    if (cmp_lhs != cmp_rhs) goto loc_08041056;
loc_08041052:
    r0 = *(u32*)(r1);
    *(u32*)(r2) = (u32)r0;
loc_08041056:
    r0 = *(u32*)(r1);
    r1 = *(u32*)(r2);
    r0 = r0 - r1;
    cmp_lhs = (s32)r0; cmp_rhs = 180;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08041064(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08041064..0x08041068 (4 bytes, Thumb)
u32 sub_08041064(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08041068..0x08041078 (16 bytes, Thumb)
u32 sub_08041068(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x03004A98U; // [0x0804110C]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08041078(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08041078..0x0804110C (148 bytes, Thumb)
u32 sub_08041078(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041086;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return sub_08041076(r0, r1, r2, r3);
loc_08041086:
    r0 = 0x03004A84U; // [0x0804112C]
    r0 = sub_08040DBC(r0, r1, r2, r3); // 0x08041088
    r5 = 0x03004A90U; // [0x08041120]
    *(u32*)(r5) = (u32)r0;
    r0 = sub_08040D10(r0, r1, r2, r3); // 0x08041090
    r6 = 0x03004A94U; // [0x08041110]
    r0 = *(u8*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080410C6;
    r0 = *(u32*)(r5);
    r1 = (r0 << 19);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080410F0;
    r1 = (r0 << 18);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080410F0;
    r1 = (r0 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080410B6;
    r1 = (r0 << 20);
    r1 = (r1 >> 28);
    r0 = (r0 << 28);
    r0 = (r0 >> 28);
    r1 ^= r0;
    if (cmp_lhs != cmp_rhs) goto loc_080410F0;
loc_080410B6:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080410BE: BL 0x08046AA2
    *(u8*)(r6) = (u8)r0;
    goto loc_080410F0;
loc_080410C6:
    r0 = 0x03004A7CU; // [0x0804111C]
    r7 = 0x1U;
    r1 = *(u32*)(r0);
    r0 = r7;
    r0 <<= (r1 & 0xFF);
    r1 = *(u32*)(r5);
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_080410DA;
    r0 = sub_08040130(r0, r1, r2, r3); // 0x080410D6
loc_080410DA:
    r0 = *(u32*)(r5);
    r1 = (r0 << 28);
    r1 = (r1 >> 29);
    if (cmp_lhs == cmp_rhs) goto loc_080410F0;
    r1 = 0x03004A6CU; // [0x08041114]
    r1 = *(u8*)(r1);
    r7 <<= (r1 & 0xFF);
    r7 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_080410F0;
    r0 = sub_0804011A(r0, r1, r2, r3); // 0x080410EC
loc_080410F0:
    r0 = 0x03004A78U; // [0x08041130]
    r0 = sub_08040EC8(r0, r1, r2, r3); // 0x080410F2
    r0 = *(u8*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041108;
    r0 = r4;
    r0 = sub_0804102A(r0, r1, r2, r3); // 0x080410FE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08041108;
    return sub_08041076(r0, r1, r2, r3);
loc_08041108:
    r0 = 0x1U;
    return sub_08041076(r0, r1, r2, r3);
}

// ROM Address: 0x08041118..0x0804113C (36 bytes, Thumb)
u32 sub_08041118(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r4 << 4);
    r0 = (r0 << 16);
    r2 = 0xB538BD08U; // [0x08041310]
    r0 = (r0 << 12);
    r2 = 0xD01F2BF0U; // [0x08041364]
    r0 = (r0 << 12);
    r2 = 0xD0332B31U; // [0x08041328]
    r0 = (r0 << 12);
    r4 = (r7 >> 31);
    r0 = (r0 << 12);
    r2 = 0xBD387002U; // [0x08041340]
    r0 = (r0 << 12);
    r2 = 0x22321C03U; // [0x08041314]
    r0 = (r0 << 12);
    r1 = 0x03004B2CU; // [0x080413D8]
    r0 = 0x0U;
    *(u8*)(r1 + 0x5) = (u8)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804113C..0x0804114A (14 bytes, Thumb)
u32 sub_0804113C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080433F4(r0, r1, r2, r3); // 0x0804113E
    r1 = 0x03004B2CU; // [0x080413D8]
    r0 = 0x0U;
    *(u8*)(r1 + 0x5) = (u8)r0;
    return r0;
}

// ROM Address: 0x08041152..0x080411CC (122 bytes, Thumb)
u32 sub_08041152(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = 0x0U;
    r0 = sub_080430FE(r0, r1, r2, r3); // 0x08041158
    r4 = 0x03004B2CU; // [0x080413D8]
    r5 = 0x03004B2CU; // [0x080413D8]
    r4 += 0xA4U;
    r1 = r4;
    r5 += 0x40U;
    r0 = r5;
    r0 = sub_080434CC(r0, r1, r2, r3); // 0x08041168
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041188;
    r0 = 0x03000FF0U; // [0x080413DC]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4 + 4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804117C: BL __call_via_r3
    r1 = r4;
    r0 = r6;
    r0 = sub_08043528(r0, r1, r2, r3); // 0x08041184
loc_08041188:
    r1 = 0x03004B2CU; // [0x080413D8]
    r4 = 0x03005218U; // [0x080413E0]
    r0 = *(u8*)(r1 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 136;
    if (cmp_lhs != cmp_rhs) goto loc_080411B2;
    r0 = *(u8*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080411B2;
    r0 = 0x8FU;
    *(u8*)(r1 + 0x6) = (u8)r0;
    r1 = *(u8*)(r1);
    r0 = 0x1U;
    r0 <<= (r1 & 0xFF);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r0 = sub_080444EE(r0, r1, r2, r3); // 0x080411A6
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x080411AA
    r0 = 0x32U;
    *(u8*)(r4) = (u8)r0;
loc_080411B2:
    r0 = *(u8*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 14;
    if (cmp_lhs == cmp_rhs) return sub_080411DE(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_080411CC(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080411DE(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_080411DE(r0, r1, r2, r3);
    r0 = sub_08042B34(r0, r1, r2, r3); // 0x080411C2
    r0 = 0xCU;
    *(u8*)(r4) = (u8)r0;
    return sub_080411DE(r0, r1, r2, r3);
}

// ROM Address: 0x080411CC..0x080411E2 (22 bytes, Thumb)
u32 sub_080411CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 50;
    if (cmp_lhs == cmp_rhs) return sub_080411E2(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 52;
    if (cmp_lhs == cmp_rhs) return sub_080411EA(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 63;
    if (cmp_lhs != cmp_rhs) goto loc_080411DE;
    r0 = 0x03005219U; // [0x080413E4]
    r0 = *(u8*)(r0);
    *(u8*)(r4) = (u8)r0;
loc_080411DE:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080411E2..0x080411EE (12 bytes, Thumb)
u32 sub_080411E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08043558(r0, r1, r2, r3); // 0x080411E2
    r0 = 0x0U;
    return r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080411EE..0x080412F8 (266 bytes, Thumb)
u32 sub_080411EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x03004B2CU; // [0x080413D8]
    r4 = 0x0U;
    r1 = *(u8*)(r6 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 143;
    if (cmp_lhs != cmp_rhs) goto loc_080411FE;
    r0 = 0x0U;
loc_080411FC:
    return r0;
loc_080411FE:
    r0 = *(u8*)(r6);
    r2 = 0x03005278U; // [0x080413E8]
    r0 = (r0 << 2);
    r0 = *(u32*)(r2 + r0);
    r0 = *(u8*)(r0 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080412F0;
    r5 = 0x03004B2CU; // [0x080413D8]
    r4 = 0x1U;
    r5 += 0x28U;
    r3 = 0x88U;
    r2 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    r0 = *(u8*)(r5 + 0x1);
    if (cmp_lhs == cmp_rhs) goto loc_08041258;
    if (cmp_lhs > cmp_rhs) goto loc_08041234;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041226;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08041272;
loc_08041226:
    cmp_lhs = (s32)r0; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) goto loc_08041246;
    *(u8*)(r6 + 0x6) = (u8)r3;
    r4 = 0x0U;
    r0 = sub_08042E3E(r0, r1, r2, r3); // 0x0804122E
    goto loc_08041272;
loc_08041234:
    cmp_lhs = (s32)r1; cmp_rhs = 6;
    if (cmp_lhs == cmp_rhs) goto loc_08041260;
    cmp_lhs = (s32)r1; cmp_rhs = 131;
    if (cmp_lhs != cmp_rhs) goto loc_08041272;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_08041272;
    r0 = 0x5U;
    *(u8*)(r6 + 0x6) = (u8)r0;
    goto loc_08041272;
loc_08041246:
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_08041250;
    r0 = 0x83U;
    *(u8*)(r6 + 0x6) = (u8)r0;
    goto loc_08041272;
loc_08041250:
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08041272;
    *(u8*)(r6 + 0x6) = (u8)r2;
    goto loc_08041272;
loc_08041258:
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) goto loc_08041272;
    *(u8*)(r6 + 0x6) = (u8)r2;
    goto loc_08041272;
loc_08041260:
    r0 = *(u8*)(r5 + 0x2);
    r1 = *(u8*)(r6 + 0x7);
    r2 <<= (r1 & 0xFF);
    r0 &= r2;
    if (cmp_lhs != cmp_rhs) goto loc_08041272;
    *(u8*)(r6 + 0x6) = (u8)r3;
    r4 = 0x0U;
    r0 = sub_08042E3E(r0, r1, r2, r3); // 0x0804126E
loc_08041272:
    r0 = *(u8*)(r6);
    r0 = sub_08044BCE(r0, r1, r2, r3); // 0x08041274
    r7 = 0x03004B2CU; // [0x080413D8]
    r7 += 0xAU;
    r1 = *(u8*)(r7);
    r2 = *(u8*)(r5);
    r0 = r1 + 1;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_080412AA;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0804129A;
    r3 = 0x03004B2CU; // [0x080413D8]
    r3 += 0x12U;
    r1 = *(u8*)(r3);
    r1 += 0x1U;
    *(u8*)(r3) = (u8)r1;
    goto loc_080412AA;
loc_0804129A:
    r1 = *(u8*)(r5 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = 7;
    if (cmp_lhs == cmp_rhs) goto loc_080412BE;
    r3 = 0x03004B2CU; // [0x080413D8]
    r3 += 0xEU;
    r1 = *(u8*)(r3);
    r1 += 0x1U;
    *(u8*)(r3) = (u8)r1;
loc_080412AA:
    r1 = *(u8*)(r5 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080412BE;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080412BE;
    r0 = 0x03004B2CU; // [0x080413D8]
    r1 = r5;
    r0 += 0x40U;
    r0 = sub_08043490(r0, r1, r2, r3); // 0x080412BA
loc_080412BE:
    r0 = *(u8*)(r5);
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    *(u8*)(r7) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080412F0;
    r5 = 0x03004B2CU; // [0x080413D8]
    r7 = 0x03004A78U; // [0x080413EC]
    r5 += 0x20U;
    r0 = *(u8*)(r5);
    r0 += 0x1U;
    *(u8*)(r5) = (u8)r0;
    r0 = *(u8*)(r6 + 0x6);
    *(u8*)(r5 + 0x1) = (u8)r0;
    r0 = 0x03000FF0U; // [0x080413DC]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r7;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080412E2: BL __call_via_r3
    r0 = *(u32*)(r7);
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = *(u8*)(r6 + 0x9);
    r0 += 0x1U;
    goto loc_080412F2;
loc_080412F0:
    goto loc_080412F4;
loc_080412F2:
    *(u8*)(r6 + 0x9) = (u8)r0;
loc_080412F4:
    r0 = r4;
    goto loc_080411FC;
    return r0;
}

// ROM Address: 0x08041312..0x080413A4 (146 bytes, Thumb)
u32 sub_08041312(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r0;
    r2 = 0x32U;
    cmp_lhs = (s32)r3; cmp_rhs = 64;
    r0 = 0x03005218U; // [0x080413E0]
    r4 = 0x03004B2CU; // [0x080413D8]
    if (cmp_lhs == cmp_rhs) goto loc_08041342;
    if (cmp_lhs > cmp_rhs) goto loc_08041344;
    cmp_lhs = (s32)r3; cmp_rhs = 36;
    if (cmp_lhs == cmp_rhs) goto loc_08041342;
    if (cmp_lhs <= cmp_rhs) goto loc_08041342;
    cmp_lhs = (s32)r3; cmp_rhs = 49;
    if (cmp_lhs == cmp_rhs) goto loc_08041394;
    if (cmp_lhs > cmp_rhs) goto loc_08041338;
    cmp_lhs = (s32)r3; cmp_rhs = 37;
    if (cmp_lhs == cmp_rhs) goto loc_08041342;
    cmp_lhs = (s32)r3; cmp_rhs = 48;
    if (cmp_lhs != cmp_rhs) goto loc_08041342;
    goto loc_08041340;
loc_08041338:
    cmp_lhs = (s32)r3; cmp_rhs = 50;
    if (cmp_lhs == cmp_rhs) goto loc_0804139E;
    cmp_lhs = (s32)r3; cmp_rhs = 51;
    if (cmp_lhs != cmp_rhs) goto loc_08041342;
loc_08041340:
    *(u8*)(r0) = (u8)r2;
loc_08041342:
    return r0;
loc_08041344:
    r1 = 0x34U;
    cmp_lhs = (s32)r3; cmp_rhs = 80;
    if (cmp_lhs == cmp_rhs) goto loc_0804137E;
    if (cmp_lhs > cmp_rhs) goto loc_08041364;
    r2 = r3;
    r2 -= 0x41U;
    cmp_lhs = (s32)r2; cmp_rhs = 5;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08041342;
    r3 = 0x0804135CU;
    r3 = *(u8*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
    r3 = 0x2U;
    r2 = (r0 << 8);
    r2 = r0;
    goto loc_08041342;
loc_08041364:
    cmp_lhs = (s32)r3; cmp_rhs = 240;
    if (cmp_lhs == cmp_rhs) return sub_080413A8(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 241;
    if (cmp_lhs == cmp_rhs) return sub_080413CE(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 242;
    if (cmp_lhs == cmp_rhs) return sub_080413D2(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_08041342;
    r2 = 0x3FU;
    *(u8*)(r0) = (u8)r2;
    r0 = 0x03005219U; // [0x080413E4]
    *(u8*)(r0) = (u8)r1;
    goto loc_08041342;
loc_0804137E:
    r0 = sub_080411EE(r0, r1, r2, r3); // 0x0804137E: BL 0x080411EE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804138C;
    r0 = *(u8*)(r4);
    r0 = sub_08044BB2(r0, r1, r2, r3); // 0x08041388
loc_0804138C:
    r0 = 0x1U;
    r0 = sub_080422B0(r0, r1, r2, r3); // 0x0804138E
    goto loc_08041342;
loc_08041394:
    r1 = *(u8*)(r0);
    *(u8*)(r4 + 0x2) = (u8)r1;
    r1 = 0xEU;
    *(u8*)(r0) = (u8)r1;
    goto loc_08041342;
loc_0804139E:
    r1 = *(u8*)(r4 + 0x2);
    *(u8*)(r0) = (u8)r1;
    goto loc_08041342;
    return r0;
}

// ROM Address: 0x080413A8..0x080413D6 (46 bytes, Thumb)
u32 sub_080413A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03004CC8U; // [0x080413F0]
    r3 = *(u16*)(r5 + 0x14);
    r1 = r5;
    r1 = *(u16*)(r1 + 0x16);
    cmp_lhs = (s32)r3; cmp_rhs = 48;
    if (cmp_lhs != cmp_rhs) goto loc_080413C6;
    r3 = *(u8*)(r4 + 0x6);
    cmp_lhs = (s32)r3; cmp_rhs = 143;
    if (cmp_lhs != cmp_rhs) goto loc_080413C6;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_080413C6;
    r1 = 0x0U;
    *(u16*)(r5 + 0x16) = (u16)r1;
    *(u8*)(r0) = (u8)r2;
    return sub_08041342(r0, r1, r2, r3);
loc_080413C6:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08041342(r0, r1, r2, r3);
    *(u8*)(r0) = (u8)r2;
    return sub_08041342(r0, r1, r2, r3);
    *(u8*)(r0) = (u8)r2;
    return sub_08041342(r0, r1, r2, r3);
    *(u8*)(r0) = (u8)r2;
    return sub_08041342(r0, r1, r2, r3);
}

// ROM Address: 0x080413FC..0x0804164C (592 bytes, Thumb)
u32 sub_080413FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x03004B2CU; // [0x0804165C]
    r7 = 0x0U;
    r0 = 0x0300525CU; // [0x08041660]
    *(u8*)(r6 + 0x7) = (u8)r7;
    r0 = *(u32*)(r0);
    r4 = 0x0300521AU; // [0x08041664]
    r0 += 0x80U;
    r2 = *(u16*)(r0 + 0x14);
loc_0804140E:
    r0 = *(u8*)(r6 + 0x7);
    r1 = (r0 << 1);
    r1 = r1 + r4;
    r1 = *(u16*)(r1 + 0x36);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08041426;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r6 + 0x7) = (u8)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804140E;
loc_08041426:
    r0 = 0x03004B2CU; // [0x0804165C]
    r2 = 0x8U;
    r1 = 0x0U;
    r0 += 0x20U;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x0804142E: BL 0x08049168
    r5 = 0x03004B2CU; // [0x0804165C]
    r2 = 0x18U;
    r1 = 0x0U;
    r5 += 0x28U;
    r0 = r5;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x0804143C: BL 0x08049168
    r0 = 0x03004B2CU; // [0x0804165C]
    r0 += 0x40U;
    r0 = sub_0804347E(r0, r1, r2, r3); // 0x08041444
    *(u8*)(r6 + 0x8) = (u8)r7;
    *(u8*)(r6 + 0x9) = (u8)r7;
    r3 = r6;
    r6 = 0x03004B2CU; // [0x0804165C]
    r1 = r7;
    r6 += 0xEU;
    r7 = r6 + 4;
    r0 = 0x0U;
    r2 = r6 - 4;
loc_0804145A:
    *(u8*)(r2 + r0) = (u8)r1;
    *(u8*)(r7 + r0) = (u8)r1;
    *(u8*)(r6 + r0) = (u8)r1;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804145A;
    *(u8*)(r3 + 0x6) = (u8)r1;
    r0 = *(u8*)(r4 + 0x2);
    r2 = 0x03004D10U; // [0x08041668]
    r4 = 0x03004B2CU; // [0x0804165C]
    r6 = r3;
    *(u8*)(r2) = (u8)r0;
    r4 += 0x20U;
    *(u8*)(r4) = (u8)r1;
    r0 = 0x080413F5U; // [0x0804166C]
    r0 = sub_08043260(r0, r1, r2, r3); // 0x0804147C
    r0 = 0x08041313U /* &sub_08041312 */; // [0x08041670]
    r0 = sub_0804326E(r0, r1, r2, r3); // 0x08041482
    r3 = 0x18U;
    r2 = r5;
    r0 = 0x10U;
    r1 = *(u8*)(r6);
    r0 = sub_080447E0(r0, r1, r2, r3); // 0x0804148E
    r1 = *(u8*)(r6);
    r0 = 0x1U;
    r2 = 0x8U;
    r0 <<= (r1 & 0xFF);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r1 = r4;
    r0 = sub_080449B8(r0, r1, r2, r3); // 0x080414A0
    r1 = 0x03005218U; // [0x08041674]
    r0 = 0x31U;
    *(u8*)(r1) = (u8)r0;
    return r0;
    r5 = 0x03004B2CU; // [0x0804165C]
    r0 = 0x0U;
    r2 = 0x0300525CU; // [0x08041660]
    *(u8*)(r5 + 0x4) = (u8)r0;
    r3 = *(u32*)(r2);
    r2 = *(u8*)(r3 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08041500;
    r4 = 0x03004B2CU; // [0x0804165C]
    r6 = 0x1U;
    r4 += 0x16U;
loc_080414C4:
    r2 = r6;
    r2 <<= (r0 & 0xFF);
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_080414DE;
    r2 = (r0 << 5);
    r2 = r2 + r3;
    r2 = *(u8*)(r2 + 0x16);
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080414DE;
    r2 = *(u8*)(r5 + 0x4);
    *(u8*)(r4 + r2) = (u8)r0;
    r2 += 0x1U;
    *(u8*)(r5 + 0x4) = (u8)r2;
loc_080414DE:
    r0 += 0x1U;
    r2 = *(u8*)(r3 + 0x8);
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_080414C4;
    r1 = *(u8*)(r5 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041500;
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08041500;
loc_080414F6:
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080414F6;
loc_08041500:
    return r0; // BX lr
    r6 = r0;
    r5 = 0x03004B2CU; // [0x0804165C]
    r0 = 0x0U;
    *(u8*)(r5 + 0x1) = (u8)r0;
    r0 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08041678]
    r3 = 0x8U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r0 = *(u16*)(r0);
    r0 = sub_080430FE(r0, r1, r2, r3); // 0x08041516
    r4 = 0x03005218U; // [0x08041674]
    r0 = *(u8*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 6;
    if (cmp_lhs != cmp_rhs) goto loc_0804152C;
    r0 = *(u8*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804152C;
    r0 = 0x7U;
    *(u8*)(r4) = (u8)r0;
loc_0804152C:
    r0 = *(u8*)(r4);
    r7 = 0x5U;
    r1 = 0x0300525CU; // [0x08041660]
    cmp_lhs = (s32)r0; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) goto loc_08041606;
    if (cmp_lhs > cmp_rhs) goto loc_08041550;
    cmp_lhs = (s32)r0; cmp_rhs = 11;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080415B6;
    r3 = 0x08041544U;
    r3 = *(u8*)(r3 + r0);
    r3 = (r3 << 1);
    pc += r3;
    r7 = 0x38U;
    r0 -= 0x38U;
    cmp_lhs = (s32)r5; cmp_rhs = 56;
    r6 -= 0x39U;
    r0 = *(u8*)(r7 + 0x4);
    r0 = r7;
loc_08041550:
    r6 = 0x03005219U; // [0x0804167C]
    cmp_lhs = (s32)r0; cmp_rhs = 37;
    if (cmp_lhs == cmp_rhs) goto loc_080415E4;
    if (cmp_lhs > cmp_rhs) goto loc_08041582;
    cmp_lhs = (s32)r0; cmp_rhs = 12;
    if (cmp_lhs == cmp_rhs) goto loc_080415B6;
    cmp_lhs = (s32)r0; cmp_rhs = 13;
    if (cmp_lhs == cmp_rhs) goto loc_080415B6;
    cmp_lhs = (s32)r0; cmp_rhs = 14;
    if (cmp_lhs == cmp_rhs) goto loc_080415B6;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_080415B6;
    r0 = 0x03004CC8U; // [0x08041680]
    r0 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080415B6;
    r0 = *(u32*)(r1);
    r1 = *(u8*)(r0 + 0x2);
    r0 = *(u8*)(r0 + 0x3);
    r0 |= r1;
    r0 = sub_080444EE(r0, r1, r2, r3); // 0x08041578
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x0804157C
    goto loc_080415B6;
loc_08041582:
    cmp_lhs = (s32)r0; cmp_rhs = 51;
    if (cmp_lhs == cmp_rhs) goto loc_08041620;
    cmp_lhs = (s32)r0; cmp_rhs = 52;
    if (cmp_lhs == cmp_rhs) return sub_0804164C(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 63;
    if (cmp_lhs != cmp_rhs) goto loc_080415B6;
    r0 = *(u8*)(r6);
    *(u8*)(r4) = (u8)r0;
    goto loc_080415B6;
    r0 = r6 + 4;
    r0 = sub_08042B0A(r0, r1, r2, r3); // 0x08041596
    r0 = 0x2U;
    *(u8*)(r4) = (u8)r0;
    goto loc_080415B6;
    r2 = 0x78U;
    r1 = 0x0U;
    r0 = 0x0U;
    r3 = 0x087B76F8U; // [0x08041684]
    r0 = sub_08042B3C(r0, r1, r2, r3); // 0x080415A8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080415B6;
    *(u8*)(r5 + 0x1) = (u8)r0;
    r0 = 0x6U;
    *(u8*)(r4) = (u8)r0;
loc_080415B6:
    goto loc_08041648;
    r1 = *(u8*)(r5 + 0x1);
    r0 = r6;
    r0 = sub_080414AC(r0, r1, r2, r3); // 0x080415BC
    goto loc_08041648;
    r0 = 0x03004B2CU; // [0x0804165C]
    r1 = *(u32*)(r1);
    r0 += 0x16U;
    r0 = *(u8*)(r0);
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r0 = *(u16*)(r0 + 0x14);
    r1 = 0x78U;
    r0 = sub_08042BF8(r0, r1, r2, r3); // 0x080415D2: BL 0x08042BF8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080415E0;
    r0 = 0x8U;
    *(u8*)(r4) = (u8)r0;
    goto loc_08041648;
loc_080415E0:
    *(u8*)(r4) = (u8)r7;
    goto loc_08041648;
loc_080415E4:
    r1 = *(u8*)(r5);
    r2 = 0x03005268U; // [0x08041688]
    r0 = (r1 << 2);
    r0 = *(u32*)(r2 + r0);
    r0 = *(u16*)(r0 + 0x34);
    cmp_lhs = (s32)r0; cmp_rhs = 70;
    if (cmp_lhs != cmp_rhs) goto loc_08041608;
    r0 = 0x8U;
    r0 = sub_080446A8(r0, r1, r2, r3); // 0x080415F4
    r0 = 0x0300521AU; // [0x08041664]
    r0 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041648;
    r0 = 0x2U;
    *(u8*)(r5 + 0x5) = (u8)r0;
    goto loc_08041648;
loc_08041606:
    goto loc_08041640;
loc_08041608:
    cmp_lhs = (s32)r0; cmp_rhs = 71;
    if (cmp_lhs == cmp_rhs) goto loc_08041610;
    cmp_lhs = (s32)r0; cmp_rhs = 72;
    if (cmp_lhs != cmp_rhs) goto loc_08041648;
loc_08041610:
    r0 = 0x8U;
    r0 = sub_080446A8(r0, r1, r2, r3); // 0x08041612
    r0 = 0x33U;
    *(u8*)(r6) = (u8)r0;
    r0 = 0x3FU;
    *(u8*)(r4) = (u8)r0;
    goto loc_08041648;
loc_08041620:
    r0 = *(u32*)(r1);
    r1 = *(u8*)(r0 + 0x2);
    r0 = *(u8*)(r0 + 0x3);
    r0 |= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08041634;
    r0 = 0x10U;
    *(u8*)(r4) = (u8)r0;
    r0 = sub_08042E3E(r0, r1, r2, r3); // 0x0804162E
    goto loc_08041648;
loc_08041634:
    *(u8*)(r4) = (u8)r7;
    goto loc_08041648;
    r0 = 0x0U;
    r0 = sub_08042CE6(r0, r1, r2, r3); // 0x0804163A
    goto loc_08041648;
loc_08041640:
    r0 = sub_08042B34(r0, r1, r2, r3); // 0x08041640
    r0 = 0xCU;
    *(u8*)(r4) = (u8)r0;
loc_08041648:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0804164C..0x0804165C (16 bytes, Thumb)
u32 sub_0804164C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08043558(r0, r1, r2, r3); // 0x0804164C
    r0 = 0x0U;
    return sub_0804164A(r0, r1, r2, r3);
    r0 = sub_080454EA(r0, r1, r2, r3); // 0x08041656
    return r0;
}

// ROM Address: 0x0804165C..0x0804168C (48 bytes, Thumb)
u32 sub_0804165C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x2AF1D032U; // [0x08041710]
    r0 = (r0 << 12);
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    *(u16*)(r3 + r0) = (u16)r2;
    r0 = (r0 << 12);
    r5 = 0x2A210E36U; // [0x080416AC]
    r0 = (r0 << 12);
    r5 = ((u32)((s32)r6 >> 15));
    r4 = (r0 >> 32);
    r3 = ((u32)((s32)r2 >> 12));
    r4 = (r0 >> 32);
    *(u16*)(r3 + r0) = (u16)r0;
    r0 = (r0 << 12);
    r0 = (r0 << 4);
    r0 = (r0 << 16);
    *(u16*)(r3 + r0) = (u16)r1;
    r0 = (r0 << 12);
    r4 = 0x75203001U; // [0x080419A4]
    r0 = (r0 << 12);
    *(u8*)(r7 + 0x1B) = (u8)r0;
    r3 = (r7 >> 1);
    *(u16*)(r5 + r1) = (u16)r0;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0804168C..0x08041778 (236 bytes, Thumb)
u32 sub_0804168C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r0 = 0x5U;
    r3 = 0x3FU;
    cmp_lhs = (s32)r2; cmp_rhs = 64;
    r5 = 0x03005219U; // [0x08041828]
    r4 = 0x03005218U; // [0x0804182C]
    if (cmp_lhs == cmp_rhs) goto loc_08041764;
    if (cmp_lhs > cmp_rhs) goto loc_080416EC;
    r1 = 0x03004B2CU; // [0x08041830]
    cmp_lhs = (s32)r2; cmp_rhs = 36;
    if (cmp_lhs == cmp_rhs) goto loc_08041748;
    if (cmp_lhs > cmp_rhs) goto loc_080416CE;
    r6 = 0x03004CC8U; // [0x08041834]
    r6 = *(u16*)(r6 + 0x14);
    r6 = (r6 << 24);
    r6 = (r6 >> 24);
    cmp_lhs = (s32)r2; cmp_rhs = 33;
    if (cmp_lhs == cmp_rhs) goto loc_08041730;
    if (cmp_lhs > cmp_rhs) goto loc_080416C0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804172C;
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    if (cmp_lhs != cmp_rhs) goto loc_080416BE;
    *(u8*)(r1 + 0x1) = (u8)r6;
loc_080416BE:
    return r0;
loc_080416C0:
    cmp_lhs = (s32)r2; cmp_rhs = 34;
    if (cmp_lhs == cmp_rhs) goto loc_08041734;
    cmp_lhs = (s32)r2; cmp_rhs = 35;
    if (cmp_lhs != cmp_rhs) goto loc_080416BE;
    *(u8*)(r5) = (u8)r0;
    *(u8*)(r4) = (u8)r3;
loc_080416CC:
    return r0;
loc_080416CE:
    cmp_lhs = (s32)r2; cmp_rhs = 49;
    if (cmp_lhs == cmp_rhs) goto loc_08041754;
    if (cmp_lhs > cmp_rhs) goto loc_080416DE;
    cmp_lhs = (s32)r2; cmp_rhs = 37;
    if (cmp_lhs == cmp_rhs) goto loc_0804174E;
    cmp_lhs = (s32)r2; cmp_rhs = 48;
    if (cmp_lhs != cmp_rhs) goto loc_080416CC;
    goto loc_080416E6;
loc_080416DE:
    cmp_lhs = (s32)r2; cmp_rhs = 50;
    if (cmp_lhs == cmp_rhs) goto loc_0804175E;
    cmp_lhs = (s32)r2; cmp_rhs = 51;
    if (cmp_lhs != cmp_rhs) goto loc_080416CC;
loc_080416E6:
    *(u8*)(r4) = (u8)r3;
    *(u8*)(r5) = (u8)r0;
loc_080416EA:
    return r0;
loc_080416EC:
    r1 = 0x34U;
    cmp_lhs = (s32)r2; cmp_rhs = 80;
    if (cmp_lhs == cmp_rhs) goto loc_08041724;
    if (cmp_lhs > cmp_rhs) goto loc_0804170C;
    r2 -= 0x41U;
    cmp_lhs = (s32)r2; cmp_rhs = 5;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080416EA;
    r3 = 0x08041704U;
    r3 = *(u8*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r3 += 0x3U;
    r7 += 0x35U;
    r3 = r0;
loc_0804170A:
    return r0;
loc_0804170C:
    r0 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 240;
    if (cmp_lhs == cmp_rhs) return sub_08041778(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 241;
    if (cmp_lhs == cmp_rhs) return sub_0804177E(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 242;
    if (cmp_lhs == cmp_rhs) return sub_08041782(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_0804170A;
    *(u8*)(r4) = (u8)r3;
    *(u8*)(r5) = (u8)r1;
    return r0;
loc_08041724:
    r0 = 0x1U;
    r0 = sub_080422B0(r0, r1, r2, r3); // 0x08041726
    return r0;
loc_0804172C:
    *(u8*)(r4) = (u8)r0;
    return r0;
loc_08041730:
    *(u8*)(r4) = (u8)r0;
    return r0;
loc_08041734:
    *(u8*)(r1) = (u8)r6;
    r1 = r6;
    r3 = 0x40U;
    r0 = 0x20U;
    r2 = 0x0300521AU; // [0x08041838]
    r0 = sub_080447E0(r0, r1, r2, r3); // 0x0804173E
    r0 = 0xDU;
    *(u8*)(r4) = (u8)r0;
    return r0;
loc_08041748:
    r0 = 0x25U;
    *(u8*)(r4) = (u8)r0;
    return r0;
loc_0804174E:
    *(u8*)(r4) = (u8)r3;
    *(u8*)(r5) = (u8)r0;
    return r0;
loc_08041754:
    r0 = *(u8*)(r4);
    *(u8*)(r1 + 0x2) = (u8)r0;
    r0 = 0xEU;
    *(u8*)(r4) = (u8)r0;
    return r0;
loc_0804175E:
    r0 = *(u8*)(r1 + 0x2);
    *(u8*)(r4) = (u8)r0;
    return r0;
loc_08041764:
    goto loc_08041766;
loc_08041766:
    *(u8*)(r4) = (u8)r0;
    return r0;
    *(u8*)(r4) = (u8)r1;
    return r0;
    *(u8*)(r4) = (u8)r0;
    return r0;
    r0 = 0xBU;
    *(u8*)(r4) = (u8)r0;
    return r0;
}

// ROM Address: 0x08041778..0x08041786 (14 bytes, Thumb)
u32 sub_08041778(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r4) = (u8)r3;
    *(u8*)(r5) = (u8)r0;
    return r0;
    *(u8*)(r4) = (u8)r0;
    return r0;
    *(u8*)(r4) = (u8)r0;
    return r0;
}

// ROM Address: 0x08041786..0x080417AC (38 bytes, Thumb)
u32 sub_08041786(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x4U;
    *(u8*)(r0 + 0x4) = (u8)r2;
    r1 = 0x20U;
    *(u8*)(r0 + 0x5) = (u8)r1;
    *(u16*)(r0 + 0x6) = (u16)r2;
    r1 = 0x0U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    r1 = 0x00007FF9U; // [0x0804183C]
    *(u16*)(r0 + 0xA) = (u16)r1;
    r1 = 0x087B76FCU; // [0x08041840]
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = 0x08041844U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = 0x1U;
    *(u8*)(r0 + 0x15) = (u8)r1;
    r1 = 0xF0U;
    *(u16*)(r0 + 0x16) = (u16)r1;
    *(u16*)(r0 + 0x18) = (u16)r1;
    return r0; // BX lr
}

// Evidence: writes TM2CNT_L 0x04000108: 0x080417E0 ldr r1, [pc, #0x74] (= 0x04000100) then 0x080417E4 strh r0, [r1, #8]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x080417AC
// ROM Address: 0x080417AC..0x0804180C (96 bytes, Thumb)
u32 Timer_Write2Reload1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x03004B2CU; // [0x08041830]
    r1 = 0x0U;
    *(u8*)(r4) = (u8)r1;
    r2 = 0x4U;
    *(u8*)(r0 + 0x4) = (u8)r2;
    r2 = 0x20U;
    *(u8*)(r0 + 0x5) = (u8)r2;
    r2 = 0x00007FF9U; // [0x0804183C]
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u16*)(r0 + 0xA) = (u16)r2;
    r2 = 0x087B76FCU; // [0x08041840]
    r5 = 0x1U;
    *(u32*)(r0 + 0xC) = (u32)r2;
    r2 = 0x08041844U;
    *(u32*)(r0 + 0x10) = (u32)r2;
    *(u8*)(r0 + 0x15) = (u8)r5;
    r2 = 0xF0U;
    *(u16*)(r0 + 0x16) = (u16)r2;
    *(u16*)(r0 + 0x18) = (u16)r2;
    *(u16*)(r0 + 0x6) = (u16)r1;
    r1 = 0x08041655U; // [0x08041850]
    r0 = 0x0804168DU /* &sub_0804168C */; // [0x08041854]
    r0 = sub_08042AAA(r0, r1, r2, r3); // 0x080417DA
    r0 = 0x83U;
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08041858]
    r0 = (r0 << 8);
    *(u16*)(r1 + 0x8) = (u16)r0;
    r0 = 0x03005218U; // [0x0804182C]
    *(u8*)(r0) = (u8)r5;
    r0 = 0x5U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    return r0;
    r4 = 0x03004B2CU; // [0x08041830]
    r1 = *(u8*)(r4 + 0x5);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804180C(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08041816(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0804181C(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_08041824(r0, r1, r2, r3);
    r0 = sub_08041152(r0, r1, r2, r3); // 0x08041806: BL 0x08041152
    return r0;
}

// ROM Address: 0x0804180C..0x08041828 (28 bytes, Thumb)
u32 sub_0804180C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = Timer_Write2Reload1(r0, r1, r2, r3); // 0x0804180C: BL 0x080417AC
    r0 = 0x1U;
    *(u8*)(r4 + 0x5) = (u8)r0;
    goto loc_08041824;
    r0 = sub_08041504(r0, r1, r2, r3); // 0x08041816
    return r0;
    r0 = sub_080413FC(r0, r1, r2, r3); // 0x0804181C: BL 0x080413FC
    r0 = 0x3U;
    *(u8*)(r4 + 0x5) = (u8)r0;
loc_08041824:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0804187A..0x080418EE (116 bytes, Thumb)
u32 sub_0804187A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x03004BE8U; // [0x08041AF0]
    r0 = *(u8*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 143;
    if (cmp_lhs == cmp_rhs) return sub_0804196A(r0, r1, r2, r3);
    r7 = 0x0300521AU; // [0x08041AF4]
    r0 = *(u8*)(r7 + 0x2);
    r1 = *(u8*)(r4 + 0xB);
    r0 &= ~r1;
    if (cmp_lhs != cmp_rhs) return sub_0804196A(r0, r1, r2, r3);
    r5 = 0x03004BE8U; // [0x08041AF0]
    r5 += 0x2CU;
    r0 = *(u8*)(r5 + 0x1);
    stack[1] = r0; // [sp + 0x4]
    r1 = *(u8*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    stack[2] = r1; // [sp + 0x8]
    if (cmp_lhs != cmp_rhs) goto loc_080418AA;
    r0 = 0x03004BE8U; // [0x08041AF0]
    r1 = r5;
    r0 += 0x64U;
    r0 = sub_08043490(r0, r1, r2, r3); // 0x080418A6
loc_080418AA:
    r6 = 0x0U;
    r2 = 0x18U;
    r1 = 0x0U;
    r0 = r5;
    *(u8*)(r4 + 0x11) = (u8)r6;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x080418B4: BL 0x08049168
    r7 = 0x0300521AU; // [0x08041AF4]
    r1 = 0x0U;
    r0 = *(u8*)(r7 + 0x2);
    r2 = 0x2U;
    r2 <<= (r1 & 0xFF);
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r3 = r0;
    r3 &= r2;
    if (cmp_lhs == cmp_rhs) return sub_080418FC(r0, r1, r2, r3);
    r7 = 0x03004BE8U; // [0x08041AF0]
    r3 = (r1 << 3);
    r7 += 0x44U;
    r7 = r3 + r7;
    r3 = *(u8*)(r7 + 0x1);
    cmp_lhs = (s32)r3; cmp_rhs = 6;
    if (cmp_lhs == cmp_rhs) return sub_080418EE(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_080418FC(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080418E4;
    cmp_lhs = (s32)r3; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) return sub_080418FC(r0, r1, r2, r3);
loc_080418E4:
    r3 = (r1 << 2);
    r2 = *(u32*)(r7 + 0x4);
    r3 = r3 + r5;
    *(u32*)(r3 + 0x8) = (u32)r2;
    return sub_080418FC(r0, r1, r2, r3);
}

// ROM Address: 0x080418EE..0x0804196C (126 bytes, Thumb)
u32 sub_080418EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)(r7 + 0x4);
    r7 = (r1 << 2);
    r7 = r7 + r5;
    *(u32*)(r7 + 0x8) = (u32)r3;
    r3 = *(u8*)(r4 + 0xE);
    r2 |= r3;
    *(u8*)(r4 + 0xE) = (u8)r2;
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_080418BE(r0, r1, r2, r3);
    r1 = *(u8*)(r4 + 0x7);
    r7 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080419AA(r0, r1, r2, r3);
    r0 = *(u8*)(r4 + 0xF);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041932;
loc_08041914:
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041914;
    r0 = (r0 >> 1);
    r0 = sub_080444EE(r0, r1, r2, r3); // 0x08041920
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x08041924
    r0 = *(u8*)(r4 + 0xE);
    r1 = *(u8*)(r4 + 0xF);
    r0 ^= r1;
    *(u8*)(r4 + 0xE) = (u8)r0;
    *(u8*)(r4 + 0xF) = (u8)r6;
loc_08041932:
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08041946;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08041978(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs == cmp_rhs) return sub_0804197E(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) goto loc_08041968;
    *(u8*)(r4 + 0x8) = (u8)r7;
loc_08041946:
    r0 = *(u8*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041952;
    r2 = 0x2U;
    *(u8*)(r4 + 0x8) = (u8)r2;
    *(u8*)(r4 + 0x12) = (u8)r6;
loc_08041952:
    r0 = 0x03000FF0U; // [0x08041AF8]
    r6 = 0x03004A78U; // [0x08041AFC]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08041960: BL __call_via_r3
    r0 = *(u32*)(r6);
    *(u32*)(r5 + 0x4) = (u32)r0;
loc_08041968:
    return sub_0804196C(r0, r1, r2, r3);
    return sub_080419D2(r0, r1, r2, r3);
}

// ROM Address: 0x0804196C..0x080419D2 (102 bytes, Thumb)
u32 sub_0804196C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 131;
    if (cmp_lhs != cmp_rhs) goto loc_08041982;
loc_08041972:
    r0 = 0x4U;
    *(u8*)(r5 + 0x1) = (u8)r0;
    goto loc_08041986;
    r0 = 0x83U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    goto loc_08041972;
    r0 = 0x5U;
    *(u8*)(r4 + 0x8) = (u8)r0;
loc_08041982:
    r0 = *(u8*)(r4 + 0x8);
    *(u8*)(r5 + 0x1) = (u8)r0;
loc_08041986:
    r0 = 0x0300521AU; // [0x08041AF4]
    r0 = *(u8*)(r0 + 0x2);
    *(u8*)(r5 + 0x2) = (u8)r0;
    r1 = *(u8*)(r4 + 0xE);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041998;
    r0 &= ~r1;
    *(u8*)(r5 + 0x2) = (u8)r0;
    *(u8*)(r4 + 0xF) = (u8)r1;
loc_08041998:
    r0 = stack[2]; // [sp + 0x8]
    r0 += 0x1U;
    *(u8*)(r5) = (u8)r0;
    *(u8*)(r4 + 0xB) = (u8)r7;
    *(u8*)(r4 + 0xA) = (u8)r7;
    r0 = *(u8*)(r4 + 0x14);
    r0 += 0x1U;
    *(u8*)(r4 + 0x14) = (u8)r0;
    goto loc_080419C2;
    r1 = *(u8*)(r4 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = 7;
    if (cmp_lhs == cmp_rhs) goto loc_080419BE;
    r1 = 0x7U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    *(u8*)(r4 + 0x9) = (u8)r6;
    *(u8*)(r5 + 0x1) = (u8)r1;
    *(u8*)(r5 + 0x2) = (u8)r0;
    *(u8*)(r4 + 0xB) = (u8)r7;
    goto loc_080419C2;
loc_080419BE:
    r0 = 0x88U;
    *(u8*)(r4 + 0x8) = (u8)r0;
loc_080419C2:
    r0 = 0x0300521AU; // [0x08041AF4]
    r0 = *(u8*)(r0 + 0x3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_080419D2(r0, r1, r2, r3);
    r0 = *(u8*)(r4 + 0x8);
    r0 = (r0 << 24);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_080419D2(r0, r1, r2, r3);
    *(u8*)(r4 + 0x11) = (u8)r7;
    return r0;
}

// ROM Address: 0x080419D2..0x08041AFC (298 bytes, Thumb)
u32 sub_080419D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
    r1 = 0x03001000U; // [0x08041B00]
    r4 = r0;
    r0 = *(u32*)(r1);
    r0 -= 0x1U;
    *(u32*)(r1) = (u32)r0;
    r3 = r0 + 1;
    if (cmp_lhs == cmp_rhs) goto loc_080419EC;
    r5 = 0x03004BE8U; // [0x08041AF0]
    r0 = *(u8*)(r5);
    goto loc_080419F6;
loc_080419EC:
    r0 = 0x1C20U; // (225 << 5)
    *(u32*)(r1) = (u32)r0;
    r0 = 0x1U;
loc_080419F4:
    return r0;
loc_080419F6:
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_080419F6;
    r0 = 0x0U;
    r0 = sub_080430FE(r0, r1, r2, r3); // 0x080419FC
    r0 = *(u8*)(r5 + 0x10);
    r7 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041A18;
    r0 = *(u8*)(r5 + 0xD);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041A18;
    r0 = 0x0U;
    *(u8*)(r5 + 0xD) = (u8)r0;
    *(u8*)(r5 + 0xB) = (u8)r7;
    *(u8*)(r5 + 0xA) = (u8)r7;
    *(u8*)(r5 + 0x10) = (u8)r0;
loc_08041A18:
    r0 = r4;
    r0 = sub_0804187A(r0, r1, r2, r3); // 0x08041A1A: BL 0x0804187A
    r0 = 0x0300525CU; // [0x08041B04]
    r6 = 0x03005218U; // [0x08041B08]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0 + 0x3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08041A56;
    r0 = *(u8*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    if (cmp_lhs != cmp_rhs) goto loc_08041A56;
    r0 = *(u8*)(r5 + 0x11);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041A56;
    *(u8*)(r5) = (u8)r7;
    r0 = *(u8*)(r5 + 0xD);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08041A52;
    r1 = 0x03004BE8U; // [0x08041AF0]
    r2 = 0x18U;
    r1 += 0x2CU;
    r0 = *(u8*)(r5 + 0x3);
    r0 = sub_08044B46(r0, r1, r2, r3); // 0x08041A46
    r0 = 0x1U;
    r0 = sub_080422B0(r0, r1, r2, r3); // 0x08041A4C
    goto loc_08041A56;
loc_08041A52:
    r0 = sub_080437EE(r0, r1, r2, r3); // 0x08041A52
loc_08041A56:
    r7 = 0x03004BE8U; // [0x08041AF0]
    r0 = 0x03004BE8U; // [0x08041AF0]
    r7 += 0xC8U;
    r1 = r7;
    r0 += 0x64U;
    r0 = sub_080434CC(r0, r1, r2, r3); // 0x08041A60
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041A82;
    r0 = 0x03000FF0U; // [0x08041AF8]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r7;
    r1 += 0x8U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08041A76: BL __call_via_r3
    r1 = r7;
    r0 = r4;
    r0 = sub_08043528(r0, r1, r2, r3); // 0x08041A7E
loc_08041A82:
    r0 = *(u8*)(r5 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 136;
    if (cmp_lhs != cmp_rhs) goto loc_08041AB8;
    r0 = 0x03004BE8U; // [0x08041AF0]
    r0 += 0x64U;
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08041AB8;
    r0 = 0x8FU;
    *(u8*)(r5 + 0x8) = (u8)r0;
    r0 = 0x0300521AU; // [0x08041AF4]
    r4 = 0x32U;
    r0 = *(u8*)(r0 + 0x3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08041AA4;
    *(u8*)(r6) = (u8)r4;
    goto loc_08041AB8;
loc_08041AA4:
    r0 = 0x0300525CU; // [0x08041B04]
    r0 = *(u32*)(r0);
    r1 = *(u8*)(r0 + 0x2);
    r0 = *(u8*)(r0 + 0x3);
    r0 |= r1;
    r0 = sub_080444EE(r0, r1, r2, r3); // 0x08041AAE
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x08041AB2
    *(u8*)(r6) = (u8)r4;
loc_08041AB8:
    r0 = *(u8*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 50;
    if (cmp_lhs == cmp_rhs) goto loc_08041AE4;
    if (cmp_lhs > cmp_rhs) goto loc_08041AD2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041AE0;
    cmp_lhs = (s32)r0; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) goto loc_08041AE0;
    r0 = sub_08042B34(r0, r1, r2, r3); // 0x08041AC8
    r0 = 0xCU;
    *(u8*)(r6) = (u8)r0;
    goto loc_08041AE0;
loc_08041AD2:
    cmp_lhs = (s32)r0; cmp_rhs = 52;
    if (cmp_lhs == cmp_rhs) goto loc_08041AEC;
    cmp_lhs = (s32)r0; cmp_rhs = 63;
    if (cmp_lhs != cmp_rhs) goto loc_08041AE0;
    r0 = 0x03005219U; // [0x08041B0C]
    r0 = *(u8*)(r0);
    *(u8*)(r6) = (u8)r0;
loc_08041AE0:
    r0 = 0x1U;
    goto loc_080419F4;
loc_08041AE4:
    r0 = sub_08043558(r0, r1, r2, r3); // 0x08041AE4
    r0 = 0x0U;
    goto loc_080419F4;
loc_08041AEC:
    r0 = 0x0U;
    goto loc_080419F4;
    r3 = 0x06407908U; // [0x08041E94]
    r0 = (r0 << 12);
    *(u16*)(r3 + r0) = (u16)r2;
    r0 = (r0 << 12);
    r0 = (r6 >> 31);
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08041B1A..0x08041C38 (286 bytes, Thumb)
u32 sub_08041B1A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r2 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 143;
    if (cmp_lhs == cmp_rhs) goto loc_08041BDA;
    r6 = 0x03004BE8U; // [0x08041DE0]
    r7 = 0x03004BE8U; // [0x08041DE0]
    r4 = 0x0U;
    r5 = 0x0U;
    r6 += 0x44U;
    r7 += 0x1CU;
loc_08041B2E:
    r0 = 0x2U;
    r1 = 0x0300521AU; // [0x08041DE4]
    r0 <<= (r4 & 0xFF);
    r1 = *(u8*)(r1 + 0x2);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    r1 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_08041BA4;
    r2 = 0x03005278U; // [0x08041DE8]
    r1 = (r4 << 2);
    r1 = *(u32*)(r2 + r1);
    r1 = *(u8*)(r1 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041BA4;
    r2 = 0x03004BE8U; // [0x08041DE0]
    r1 = *(u8*)(r2 + 0xA);
    r0 |= r1;
    *(u8*)(r2 + 0xA) = (u8)r0;
    r0 = r4;
    r0 = sub_08044BCE(r0, r1, r2, r3); // 0x08041B54
    r1 = *(u8*)(r7 + r4);
    r0 = r1 + 1;
    r3 = (r0 << 24);
    r0 = (r4 << 3);
    r2 = *(u8*)(r6 + r0);
    r3 = (r3 >> 24);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08041BA0;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08041B7C;
    r2 = 0x03004BE8U; // [0x08041DE0]
    r2 += 0x24U;
    r1 = *(u8*)(r2 + r4);
    r1 += 0x1U;
    *(u8*)(r2 + r4) = (u8)r1;
    r1 = r0 + r6;
    *(u32*)(r1 + 0x4) = (u32)r5;
    goto loc_08041BA0;
loc_08041B7C:
    r1 += 0xFFU;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08041B96;
    r2 = 0x03004BE8U; // [0x08041DE0]
    r2 += 0x28U;
    r1 = *(u8*)(r2 + r4);
    r1 += 0x1U;
    *(u8*)(r2 + r4) = (u8)r1;
    r1 = r0 + r6;
    *(u32*)(r1 + 0x4) = (u32)r5;
    goto loc_08041BA0;
loc_08041B96:
    r2 = 0x03004BE8U; // [0x08041DE0]
    r2 += 0x20U;
    r1 = *(u8*)(r2 + r4);
    r1 += 0x1U;
    *(u8*)(r2 + r4) = (u8)r1;
loc_08041BA0:
    r0 = *(u8*)(r6 + r0);
    *(u8*)(r7 + r4) = (u8)r0;
loc_08041BA4:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041B2E;
    r0 = 0x0300521AU; // [0x08041DE4]
    r2 = 0x03004BE8U; // [0x08041DE0]
    r0 = *(u8*)(r0 + 0x2);
    r3 = *(u8*)(r2 + 0xA);
    r1 = r0;
    r1 &= ~r3;
    if (cmp_lhs != cmp_rhs) goto loc_08041BCA;
    r3 = *(u8*)(r2 + 0xB);
    r4 = r0;
    r4 &= ~r3;
    if (cmp_lhs == cmp_rhs) goto loc_08041BCA;
    r3 = *(u8*)(r2 + 0x15);
    r3 += 0x1U;
    *(u8*)(r2 + 0x15) = (u8)r3;
loc_08041BCA:
    r3 = *(u8*)(r2 + 0xB);
    r0 &= ~r3;
    if (cmp_lhs != cmp_rhs) goto loc_08041BDA;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041BDA;
    r0 = *(u8*)(r2 + 0x16);
    r0 += 0x1U;
    *(u8*)(r2 + 0x16) = (u8)r0;
loc_08041BDA:
    return r0;
    r0 = 0x03004CC8U; // [0x08041DEC]
    r0 = *(u8*)(r0 + 0x3);
    r1 = (r0 << 1);
    r0 = 0x03004BE8U; // [0x08041DE0]
    r2 = *(u8*)(r0 + 0xB);
    r1 |= r2;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r2 = 0x0300521AU; // [0x08041DE4]
    *(u8*)(r0 + 0xB) = (u8)r1;
    r2 = *(u8*)(r2 + 0x2);
    r2 &= ~r1;
    if (cmp_lhs != cmp_rhs) goto loc_08041BFE;
    r1 = 0x0U;
    *(u8*)(r0 + 0xD) = (u8)r1;
    *(u8*)(r0 + 0x11) = (u8)r1;
    return r0; // BX lr
loc_08041BFE:
    r1 = 0x1U;
    *(u8*)(r0 + 0xD) = (u8)r1;
    r1 = *(u32*)(r0 + 0x18);
    r1 += 0x1U;
    *(u32*)(r0 + 0x18) = (u32)r1;
    return r0; // BX lr
    r3 = 0x03004CC8U; // [0x08041DEC]
    r5 = 0x1U;
    r2 = 0xBU;
    cmp_lhs = (s32)r0; cmp_rhs = 51;
    r4 = 0x03004BE8U; // [0x08041DE0]
    r1 = 0x03005218U; // [0x08041DF0]
    r3 = *(u16*)(r3 + 0x14);
    if (cmp_lhs == cmp_rhs) return sub_08041C9A(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_08041C38(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 19;
    if (cmp_lhs == cmp_rhs) return sub_08041C54(r0, r1, r2, r3);
    if (cmp_lhs <= cmp_rhs) return sub_08041C54(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 20;
    if (cmp_lhs == cmp_rhs) return sub_08041C54(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    if (cmp_lhs == cmp_rhs) return sub_08041C9A(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 49;
    if (cmp_lhs == cmp_rhs) return sub_08041C80(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 50;
    if (cmp_lhs != cmp_rhs) return sub_08041C54(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08041C8E(r0, r1, r2, r3);
}

// ROM Address: 0x08041C38..0x08041C56 (30 bytes, Thumb)
u32 sub_08041C38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x34U;
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 80;
    if (cmp_lhs == cmp_rhs) return sub_08041C74(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_08041C56(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 64;
    if (cmp_lhs == cmp_rhs) return sub_08041CAC(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 66;
    if (cmp_lhs == cmp_rhs) return sub_08041CB0(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 67;
    if (cmp_lhs == cmp_rhs) goto loc_08041C54;
    cmp_lhs = (s32)r0; cmp_rhs = 68;
    if (cmp_lhs != cmp_rhs) goto loc_08041C54;
    *(u8*)(r1) = (u8)r2;
loc_08041C54:
    return r0;
}

// ROM Address: 0x08041C56..0x08041C80 (42 bytes, Thumb)
u32 sub_08041C56(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x32U;
    cmp_lhs = (s32)r0; cmp_rhs = 240;
    if (cmp_lhs == cmp_rhs) return sub_08041CB4(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 241;
    if (cmp_lhs == cmp_rhs) return sub_08041CD8(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 242;
    if (cmp_lhs == cmp_rhs) return sub_08041CDE(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) return sub_08041C54(r0, r1, r2, r3);
    r0 = 0x3FU;
    *(u8*)(r1) = (u8)r0;
    r0 = 0x03005219U; // [0x08041DF4]
    *(u8*)(r0) = (u8)r6;
    *(u8*)(r4) = (u8)r5;
    return r0;
    r0 = sub_08041BDC(r0, r1, r2, r3); // 0x08041C74
    r0 = sub_08041B18(r0, r1, r2, r3); // 0x08041C78
    *(u8*)(r4) = (u8)r5;
    return r0;
}

// ROM Address: 0x08041C80..0x08041CAC (44 bytes, Thumb)
u32 sub_08041C80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
loc_08041C82:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041C82;
    return r0;
loc_08041C8E:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041C8E;
    return r0;
    r0 = 0x0U;
loc_08041C9C:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041C9C;
    *(u8*)(r4 + 0x10) = (u8)r5;
    *(u8*)(r1) = (u8)r2;
    return r0;
}

// ROM Address: 0x08041CAC..0x08041CB0 (4 bytes, Thumb)
u32 sub_08041CAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r1) = (u8)r2;
    return r0;
}

// ROM Address: 0x08041CE4..0x08041DE8 (260 bytes, Thumb)
u32 sub_08041CE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x03004BE8U; // [0x08041DE0]
    r7 = 0x03004BE8U; // [0x08041DE0]
    r6 = 0x0U;
    r2 = 0x18U;
    r1 = 0x0U;
    r4 += 0x2CU;
    r0 = r4;
    *(u8*)(r7 + 0xC) = (u8)r6;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08041CF6: BL 0x08049168
    r5 = 0x03004BE8U; // [0x08041DE0]
    r2 = 0x20U;
    r1 = 0x0U;
    r5 += 0x44U;
    r0 = r5;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08041D04: BL 0x08049168
    r0 = 0x03004BE8U; // [0x08041DE0]
    r0 += 0x64U;
    r0 = sub_0804347E(r0, r1, r2, r3); // 0x08041D0C
    *(u8*)(r7 + 0xE) = (u8)r6;
    *(u8*)(r7 + 0xF) = (u8)r6;
    *(u8*)(r7 + 0x10) = (u8)r6;
    *(u8*)(r7 + 0xD) = (u8)r6;
    *(u32*)(r7 + 0x18) = (u32)r6;
    *(u8*)(r7 + 0x7) = (u8)r6;
    *(u8*)(r7 + 0x13) = (u8)r6;
    *(u8*)(r7 + 0x14) = (u8)r6;
    r2 = 0x03004BE8U; // [0x08041DE0]
    *(u8*)(r7 + 0x15) = (u8)r6;
    *(u8*)(r7 + 0x16) = (u8)r6;
    r2 += 0x20U;
    r3 = r2 + 4;
    *(u8*)(r7 + 0x12) = (u8)r6;
    r0 = 0x0U;
    r1 = r4 - 4;
    r7 += 0x1CU;
loc_08041D32:
    *(u8*)(r7 + r0) = (u8)r6;
    *(u8*)(r3 + r0) = (u8)r6;
    *(u8*)(r2 + r0) = (u8)r6;
    *(u8*)(r1 + r0) = (u8)r6;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041D32;
    r2 = 0x03004BE8U; // [0x08041DE0]
    r0 = 0x1U;
    *(u8*)(r2 + 0xA) = (u8)r0;
    *(u8*)(r2 + 0xB) = (u8)r0;
    r7 = 0x0300521AU; // [0x08041DE4]
    *(u8*)(r2 + 0x8) = (u8)r0;
    r1 = *(u8*)(r7 + 0x2);
    r3 = 0x03004D10U; // [0x08041DF8]
    r4 = 0x03004BE8U; // [0x08041DE0]
    *(u8*)(r3) = (u8)r1;
    r1 = 0x0300525CU; // [0x08041DFC]
    r1 = *(u32*)(r1);
    r1 = *(u8*)(r1 + 0x2);
    r1 = (r1 << 1);
    r1 |= r0;
    *(u8*)(r7 + 0x2) = (u8)r1;
    r4 += 0x2CU;
    *(u8*)(r4 + 0x2) = (u8)r1;
    *(u8*)(r4) = (u8)r0;
    *(u8*)(r4 + 0x1) = (u8)r0;
    *(u8*)(r2 + 0x11) = (u8)r0;
    r0 = 0x08041C0BU; // [0x08041E00]
    r0 = sub_0804326E(r0, r1, r2, r3); // 0x08041D70
    r0 = 0x08041B11U; // [0x08041E04]
    r0 = sub_08043260(r0, r1, r2, r3); // 0x08041D76
    r4 = 0x0U;
    r5 = 0x2U;
loc_08041D7E:
    r0 = *(u8*)(r7 + 0x2);
    r1 = r5;
    r1 <<= (r4 & 0xFF);
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08041D9A;
    r1 = 0x03004BE8U; // [0x08041DE0]
    r0 = (r4 << 3);
    r1 += 0x44U;
    r2 = r0 + r1;
    r1 = r4;
    r3 = 0x8U;
    r0 = 0x10U;
    r0 = sub_080447E0(r0, r1, r2, r3); // 0x08041D96
loc_08041D9A:
    r4 += 0x1U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
    cmp_lhs = (s32)r4; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041D7E;
    r0 = *(u8*)(r7 + 0x2);
    r1 = 0x03004BE8U; // [0x08041DE0]
    r2 = 0x18U;
    r0 = (r0 >> 1);
    r1 += 0x2CU;
    r0 = sub_080449B8(r0, r1, r2, r3); // 0x08041DAE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08041DD8;
    r2 = 0x03004BE8U; // [0x08041DE0]
    *(u8*)(r2 + 0x3) = (u8)r6;
    r1 = *(u8*)(r7 + 0x2);
loc_08041DBC:
    r0 = *(u8*)(r2 + 0x3);
    r3 = r5;
    r3 <<= (r0 & 0xFF);
    r3 &= r1;
    if (cmp_lhs != cmp_rhs) goto loc_08041DD2;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r2 + 0x3) = (u8)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041DBC;
loc_08041DD2:
    r0 = *(u8*)(r2 + 0x3);
    r0 = sub_08044BB2(r0, r1, r2, r3); // 0x08041DD4
loc_08041DD8:
    r1 = 0x03005218U; // [0x08041DF0]
    r0 = 0x30U;
    *(u8*)(r1) = (u8)r0;
    return r0;
    r3 = 0xE7AE7013U; // [0x08042184]
    r0 = (r0 << 12);
    *(u16*)(r3 + r0) = (u16)r2;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08041E08..0x08041EA0 (152 bytes, Thumb)
u32 sub_08041E08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03004BE8U; // [0x0804208C]
    r4 = 0x0U;
    r0 = *(u8*)(r5 + 0x4);
    r0 = (r0 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08041E80;
    r2 = *(u8*)(r5 + 0x3);
    r0 = 0x03005268U; // [0x08042090]
    r3 = 0x0U;
    r1 = (r2 << 2);
    r0 = *(u32*)(r0 + r1);
    r1 = 0x2CU;
    r1 = *(u8*)(r1 + r0);
loc_08041E22:
    r3 += 0x1U;
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    cmp_lhs = (s32)r3; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041E22;
    r3 = *(u16*)(r0);
    cmp_lhs = (s32)r3; cmp_rhs = 38;
    if (cmp_lhs != cmp_rhs) goto loc_08041E54;
    r0 = *(u8*)(r0 + 0x1A);
    r1 ^= r0;
    r4 = r1;
    r1 = r2;
    r0 = 0x4U;
    r0 = sub_080446A8(r0, r1, r2, r3); // 0x08041E3C
    r0 = *(u8*)(r5 + 0x4);
    r1 = 0x2U;
    r0 &= ~r1;
    *(u8*)(r5 + 0x4) = (u8)r0;
    r1 = (r0 << 25);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08041E76;
    r1 = 0x80U;
    r0 |= r1;
    *(u8*)(r5 + 0x4) = (u8)r0;
    goto loc_08041E76;
loc_08041E54:
    cmp_lhs = (s32)r3; cmp_rhs = 39;
    if (cmp_lhs != cmp_rhs) goto loc_08041E76;
    r0 = *(u8*)(r0 + 0x1A);
    r1 ^= r0;
    r4 = r1;
    r1 = r2;
    r0 = 0x4U;
    r0 = sub_080446A8(r0, r1, r2, r3); // 0x08041E62
    r0 = 0x0U;
    r1 = 0x03005218U; // [0x08042094]
    *(u8*)(r5 + 0x4) = (u8)r0;
    r0 = *(u8*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = 34;
    if (cmp_lhs != cmp_rhs) goto loc_08041E76;
    r0 = 0x3U;
    *(u8*)(r1) = (u8)r0;
loc_08041E76:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041E80;
    r0 = *(u8*)(r5 + 0x5);
    r0 |= r4;
    *(u8*)(r5 + 0x5) = (u8)r0;
loc_08041E80:
    return r0;
    r4 = 0x0300521AU; // [0x08042098]
    r2 = 0x40U;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08041E8C: BL 0x08049168
    r1 = 0x03004BE8U; // [0x0804208C]
    r5 = 0x1U;
    r0 = *(u8*)(r1 + 0x4);
    r0 = (r0 << 25);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08041EA0(r0, r1, r2, r3);
    *(u8*)(r4 + 0x1) = (u8)r5;
    return sub_08041EA4(r0, r1, r2, r3);
}

// ROM Address: 0x08041EA0..0x08041EF6 (86 bytes, Thumb)
u32 sub_08041EA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u8*)(r4 + 0x1) = (u8)r0;
    *(u8*)(r4 + 0x3) = (u8)r5;
    r1 = *(u8*)(r1 + 0x1);
    r0 = 0x0U;
    r6 = r4;
loc_08041EAC:
    r2 = r5;
    r2 <<= (r0 & 0xFF);
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08041EBA;
    r2 = *(u8*)(r6 + 0x3);
    r2 += 0x1U;
    *(u8*)(r6 + 0x3) = (u8)r2;
loc_08041EBA:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041EAC;
    r0 = (r1 << 1);
    r0 |= r5;
    *(u8*)(r6 + 0x2) = (u8)r0;
    r0 = 0x0300525CU; // [0x0804209C]
    r4 = *(u32*)(r0);
    r0 = 0x94U;
    r0 = *(u16*)(r0 + r4);
    *(u16*)(r6 + 0x36) = (u16)r0;
    r0 = 0x0U;
loc_08041ED6:
    r2 = r5;
    r2 <<= (r0 & 0xFF);
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08041EEA;
    r2 = (r0 << 5);
    r2 = r2 + r4;
    r2 = *(u16*)(r2 + 0x14);
    r3 = (r0 << 1);
    r3 = r3 + r6;
    *(u16*)(r3 + 0x38) = (u16)r2;
loc_08041EEA:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041ED6;
    return r0;
}

// ROM Address: 0x08041EF6..0x08042082 (396 bytes, Thumb)
u32 sub_08041EF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x03004BE8U; // [0x0804208C]
    r4 = 0x0U;
    r1 = *(u8*)(r5 + 0x4);
    r2 = (r1 << 30);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08041F10;
    r2 = 0x0300525CU; // [0x0804209C]
    r3 = *(u32*)(r2);
    r2 = *(u8*)(r3 + 0x3);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08041F10;
    r2 = (r1 << 24);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08041F14;
loc_08041F10:
    r0 = 0x0U;
loc_08041F12:
    return r0;
loc_08041F14:
    r2 = 0x03005218U; // [0x08042094]
    r2 = *(u8*)(r2);
    cmp_lhs = (s32)r2; cmp_rhs = 34;
    if (cmp_lhs != cmp_rhs) goto loc_08041F26;
    r2 = (r1 << 25);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08041F26;
    r2 = 0x45U;
    r1 |= r2;
    *(u8*)(r5 + 0x4) = (u8)r1;
loc_08041F26:
    r2 = *(u8*)(r5 + 0x2);
    r1 = *(u8*)(r5 + 0x1);
    r6 = 0x4U;
    r7 = 0x1U;
    r2 ^= r1;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041F44;
    r2 = *(u8*)(r5 + 0x4);
    r2 |= r6;
    *(u8*)(r5 + 0x4) = (u8)r2;
    r3 = *(u8*)(r3 + 0x2);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041F44;
    r2 |= r7;
    *(u8*)(r5 + 0x4) = (u8)r2;
loc_08041F44:
    *(u8*)(r5 + 0x2) = (u8)r1;
    r1 = *(u8*)(r5 + 0x4);
    r1 = (r1 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08041F58;
    r0 = sub_08041E82(r0, r1, r2, r3); // 0x08041F4C
    r0 = *(u8*)(r5 + 0x4);
    r0 &= ~r6;
    *(u8*)(r5 + 0x4) = (u8)r0;
    r4 = 0x1U;
loc_08041F58:
    r0 = *(u8*)(r5 + 0x4);
    r0 = (r0 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08041F94;
    r3 = 0x40U;
    r1 = 0x43U;
    r2 = 0x0300521AU; // [0x08042098]
    r0 = *(u8*)(r5 + 0x1);
    r0 = sub_080449A2(r0, r1, r2, r3); // 0x08041F66
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08041F94;
    r1 = 0x0300525CU; // [0x0804209C]
    r1 = *(u32*)(r1);
    r1 = *(u8*)(r1 + 0x2);
loc_08041F74:
    r2 = r7;
    r2 <<= (r0 & 0xFF);
    r2 &= r1;
    if (cmp_lhs != cmp_rhs) goto loc_08041F86;
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08041F74;
loc_08041F86:
    *(u8*)(r5 + 0x3) = (u8)r0;
    r0 = *(u8*)(r5 + 0x4);
    r1 = 0x2U;
    r0 = (r0 >> 1);
    r0 = (r0 << 1);
    r0 |= r1;
    *(u8*)(r5 + 0x4) = (u8)r0;
loc_08041F94:
    r0 = r4;
    goto loc_08041F12;
    r6 = 0x03004BE8U; // [0x0804208C]
    r4 = r0;
    r0 = *(u8*)(r6);
loc_08041FA0:
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_08041FA0;
    r0 = 0x04000100U /* &REG_TM0CNT_L */; // [0x080420A0]
    r3 = 0x8U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r0 = *(u16*)(r0);
    r0 = sub_080430FE(r0, r1, r2, r3); // 0x08041FAC
    r0 = *(u8*)(r6 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041FC2;
    r0 = sub_080444EE(r0, r1, r2, r3); // 0x08041FB6
    r0 = sub_0804389E(r0, r1, r2, r3); // 0x08041FBA
    r0 = 0x0U;
    *(u8*)(r6 + 0x5) = (u8)r0;
loc_08041FC2:
    r7 = 0x0300525CU; // [0x0804209C]
    r0 = *(u32*)(r7);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08041FD2;
    *(u8*)(r6) = (u8)r0;
    r0 = sub_080422B0(r0, r1, r2, r3); // 0x08041FCE
loc_08041FD2:
    r0 = r4;
    r0 = sub_08041EF6(r0, r1, r2, r3); // 0x08041FD4: BL 0x08041EF6
    r0 = r4;
    r0 = sub_08041E08(r0, r1, r2, r3); // 0x08041FDA: BL 0x08041E08
    r5 = 0x03005218U; // [0x08042094]
    r0 = *(u8*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) goto loc_08041FF8;
    r0 = *(u8*)(r6 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08041FF8;
    r1 = *(u32*)(r7);
    r1 = *(u8*)(r1 + 0x2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08041FF8;
    r0 = 0x9U;
    *(u8*)(r5) = (u8)r0;
loc_08041FF8:
    r0 = *(u8*)(r5);
    r7 = 0x2U;
    cmp_lhs = (s32)r0; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) goto loc_0804207E;
    if (cmp_lhs > cmp_rhs) goto loc_0804201A;
    cmp_lhs = (s32)r0; cmp_rhs = 10;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0804207E;
    r3 = 0x08042010U;
    r3 = *(u8*)(r3 + r0);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r7 = ((u32)((s32)r6 >> 28));
    r7 = r6;
    r7 += 0x6EU;
    r7 = 0x37U;
loc_0804201A:
    cmp_lhs = (s32)r0; cmp_rhs = 34;
    if (cmp_lhs == cmp_rhs) goto loc_0804206A;
    if (cmp_lhs > cmp_rhs) goto loc_0804202E;
    cmp_lhs = (s32)r0; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) goto loc_0804207E;
    r0 = sub_08042B34(r0, r1, r2, r3); // 0x08042024
    r0 = 0xCU;
    *(u8*)(r5) = (u8)r0;
    goto loc_0804207E;
loc_0804202E:
    cmp_lhs = (s32)r0; cmp_rhs = 52;
    if (cmp_lhs == cmp_rhs) return sub_08042082(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 63;
    if (cmp_lhs != cmp_rhs) goto loc_0804207E;
    r0 = 0x03005219U; // [0x080420A4]
    r0 = *(u8*)(r0);
    *(u8*)(r5) = (u8)r0;
    goto loc_0804207E;
    r0 = r4 + 4;
    r0 = sub_08042B0A(r0, r1, r2, r3); // 0x08042040
    *(u8*)(r5) = (u8)r7;
    goto loc_0804207E;
    r2 = 0x78U;
    r1 = 0x0U;
    r0 = 0x1U;
    r3 = 0x087B7704U; // [0x080420A8]
    r0 = sub_08042B3C(r0, r1, r2, r3); // 0x08042050
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804207E;
    r0 = 0x4U;
    *(u8*)(r5) = (u8)r0;
    goto loc_0804207E;
    r0 = 0x0U;
    r0 = sub_08042CE6(r0, r1, r2, r3); // 0x08042060
    r0 = 0xAU;
    *(u8*)(r5) = (u8)r0;
    goto loc_0804207E;
loc_0804206A:
    r0 = *(u8*)(r6 + 0x4);
    r0 = (r0 << 24);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0804207E;
    r1 = 0x03004A80U; // [0x080420AC]
    r0 = *(u32*)(r1);
    r0 += 0x8U;
loc_08042076:
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08042076;
    *(u8*)(r6 + 0x6) = (u8)r7;
loc_0804207E:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08042082..0x0804208A (8 bytes, Thumb)
u32 sub_08042082(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08043558(r0, r1, r2, r3); // 0x08042082
    r0 = 0x0U;
    return sub_08042080(r0, r1, r2, r3);
}

// ROM Address: 0x080420B0..0x08042118 (104 bytes, Thumb)
u32 sub_080420B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080454EA(r0, r1, r2, r3); // 0x080420B2
    return r0;
    r1 = 0x03004CC8U; // [0x08042240]
    r2 = 0x03004BE8U; // [0x08042244]
    r7 = *(u16*)(r1 + 0x14);
    r6 = *(u8*)(r2 + 0x1);
    r5 = 0x3U;
    r1 = 0x03005218U; // [0x08042248]
    r3 = r6;
    r3 &= ~r7;
    cmp_lhs = (s32)r0; cmp_rhs = 64;
    if (cmp_lhs == cmp_rhs) return sub_08042164(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) goto loc_0804210C;
    r4 = 0x0300525CU; // [0x0804224C]
    cmp_lhs = (s32)r0; cmp_rhs = 20;
    r4 = *(u32*)(r4);
    if (cmp_lhs == cmp_rhs) return sub_08042154(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) goto loc_080420EA;
    cmp_lhs = (s32)r0; cmp_rhs = 17;
    if (cmp_lhs == cmp_rhs) return sub_0804214C(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) goto loc_080420E6;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080420E6;
    *(u8*)(r1) = (u8)r5;
loc_080420E6:
    return r0; // BX lr
loc_080420EA:
    cmp_lhs = (s32)r0; cmp_rhs = 48;
    if (cmp_lhs == cmp_rhs) goto loc_080420FA;
    cmp_lhs = (s32)r0; cmp_rhs = 49;
    if (cmp_lhs == cmp_rhs) goto loc_080420E6;
    cmp_lhs = (s32)r0; cmp_rhs = 50;
    if (cmp_lhs == cmp_rhs) goto loc_080420E6;
    cmp_lhs = (s32)r0; cmp_rhs = 51;
    if (cmp_lhs != cmp_rhs) goto loc_080420E6;
loc_080420FA:
    *(u8*)(r2 + 0x1) = (u8)r3;
    r0 = *(u8*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs == cmp_rhs) goto loc_080420E6;
    r0 = *(u8*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_080420E6;
    *(u8*)(r1) = (u8)r5;
    goto loc_080420E6;
loc_0804210C:
    r4 = 0x34U;
    r3 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 80;
    if (cmp_lhs == cmp_rhs) return sub_08042148(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_0804212C(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 65;
    return r0;
}

// ROM Address: 0x08042188..0x08042220 (152 bytes, Thumb)
u32 sub_08042188(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x4U;
    *(u8*)(r0 + 0x4) = (u8)r1;
    r1 = 0x20U;
    *(u8*)(r0 + 0x5) = (u8)r1;
    r2 = 0x1U;
    *(u16*)(r0 + 0x6) = (u16)r2;
    r1 = 0x0U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    r1 = 0x00007FF9U; // [0x08042254]
    *(u16*)(r0 + 0xA) = (u16)r1;
    r1 = 0x087B7708U; // [0x08042258]
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = 0x0804225CU;
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u8*)(r0 + 0x15) = (u8)r2;
    r1 = 0xF0U;
    *(u16*)(r0 + 0x16) = (u16)r1;
    *(u16*)(r0 + 0x18) = (u16)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = 0x03004BE8U; // [0x08042244]
    r5 = 0x0U;
    *(u8*)(r0 + 0x1) = (u8)r5;
    *(u8*)(r0 + 0x2) = (u8)r5;
    *(u8*)(r0 + 0x3) = (u8)r5;
    *(u8*)(r0 + 0x4) = (u8)r5;
    *(u8*)(r0 + 0x5) = (u8)r5;
    *(u8*)(r0) = (u8)r5;
    r2 = 0x40U;
    r1 = 0x0U;
    r0 = 0x0300521AU; // [0x08042268]
    r0 = sub_08049168(r0, r1, r2, r3); // 0x080421C8: BL 0x08049168
    r0 = 0x4U;
    *(u8*)(r4 + 0x4) = (u8)r0;
    r0 = 0x20U;
    *(u8*)(r4 + 0x5) = (u8)r0;
    r6 = 0x1U;
    *(u16*)(r4 + 0x6) = (u16)r6;
    r0 = 0x00007FF9U; // [0x08042254]
    *(u8*)(r4 + 0x8) = (u8)r5;
    *(u16*)(r4 + 0xA) = (u16)r0;
    r0 = 0x087B7708U; // [0x08042258]
    r1 = 0x080420B1U /* &sub_080420B0 */; // [0x0804226C]
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x0804225CU;
    *(u32*)(r4 + 0x10) = (u32)r0;
    *(u8*)(r4 + 0x15) = (u8)r6;
    r0 = 0xF0U;
    *(u16*)(r4 + 0x16) = (u16)r0;
    *(u16*)(r4 + 0x18) = (u16)r0;
    r0 = 0x080420B9U; // [0x08042270]
    r0 = sub_08042AAA(r0, r1, r2, r3); // 0x080421F2
    r0 = 0x83U;
    r1 = 0x04000100U /* &REG_TM0CNT_L */; // [0x08042274]
    r0 = (r0 << 8);
    *(u16*)(r1 + 0x8) = (u16)r0;
    r0 = 0x03005218U; // [0x08042248]
    *(u8*)(r0) = (u8)r6;
    return r0;
    r4 = 0x03004BE8U; // [0x08042244]
    r1 = *(u8*)(r4 + 0x6);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08042220(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0804222A(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08042230(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_08042238(r0, r1, r2, r3);
    r0 = sub_080419D6(r0, r1, r2, r3); // 0x0804221A
    return r0;
}

// ROM Address: 0x08042220..0x0804222A (10 bytes, Thumb)
u32 sub_08042220(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080421AE(r0, r1, r2, r3); // 0x08042220
    r0 = 0x1U;
    *(u8*)(r4 + 0x6) = (u8)r0;
    return sub_08042238(r0, r1, r2, r3);
}

// ROM Address: 0x08042230..0x0804223C (12 bytes, Thumb)
u32 sub_08042230(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08041CE4(r0, r1, r2, r3); // 0x08042230: BL 0x08041CE4
    r0 = 0x3U;
    *(u8*)(r4 + 0x6) = (u8)r0;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0804223C..0x0804223E (2 bytes, Thumb)
u32 sub_0804223C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804223E..0x0804225E (32 bytes, Thumb)
u32 sub_0804223E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = 0x20422100U; // [0x08042564]
    r0 = (r0 << 12);
    r3 = 0x21002200U; // [0x080425E8]
    r0 = (r0 << 12);
    *(u16*)(r3 + r0) = (u16)r0;
    r0 = (r0 << 12);
    *(u16*)(r3 + r1) = (u16)r4;
    r0 = (r0 << 12);
    *(u16*)(r3 + r0) = (u16)r1;
    r0 = (r0 << 12);
    r1 = *(u8*)(r7 + 0x1F);
    r0 = r0;
    *(u8*)(r1 + 0x1C) = (u8)r0;
    r3 = (r7 >> 1);
    *(u32*)(r2 + r1) = r3;
    return r0;
}

// ROM Address: 0x08042260..0x080422C6 (102 bytes, Thumb)
u32 sub_08042260(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r9;
    *(u8*)(r2 + r1) = (u8)r4;
    r1 = (r1 << 1);
    r0 = r0;
    *(u16*)(r3 + r0) = (u16)r2;
    r0 = (r0 << 12);
    r0 = 0xB1U;
    r4 = (r0 >> 32);
    r0 = 0xB9U;
    r4 = (r0 >> 32);
    r0 = (r0 << 4);
    r0 = (r0 << 16);
    r0 = sub_080439EE(r0, r1, r2, r3); // 0x0804227A
    r2 = 0x00008001U; // [0x0804265C]
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    r1 = 0x03004CC8U; // [0x08042660]
    if (cmp_lhs != cmp_rhs) goto loc_0804228C;
    r0 = 0x1U;
    *(u8*)(r1 + 0x8) = (u8)r0;
loc_0804228C:
    r0 = *(u8*)(r1 + 0x4);
    r2 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 23;
    if (cmp_lhs == cmp_rhs) goto loc_0804229C;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0804229C;
    *(u8*)(r1 + 0x5) = (u8)r2;
    *(u8*)(r1 + 0x4) = (u8)r2;
loc_0804229C:
    *(u8*)(r1 + 0x7) = (u8)r2;
    *(u8*)(r1 + 0xD) = (u8)r2;
    *(u8*)(r1 + 0x1) = (u8)r2;
    *(u8*)(r1) = (u8)r2;
    r0 = 0xFFU;
    *(u8*)(r1 + 0x6) = (u8)r0;
    r0 = sub_08043368(r0, r1, r2, r3); // 0x080422A8
    r0 = r4;
    return r0;
    r1 = 0x0300525CU; // [0x08042664]
    r1 = *(u32*)(r1);
    r2 = 0x03004CC8U; // [0x08042660]
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080422CA(r0, r1, r2, r3);
    r0 = *(u8*)(r2 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_080422C6(r0, r1, r2, r3);
    return sub_080422CE(r0, r1, r2, r3);
}

// ROM Address: 0x080422C6..0x080422CA (4 bytes, Thumb)
u32 sub_080422C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_080422CE(r0, r1, r2, r3);
}

// ROM Address: 0x080422CA..0x080423D4 (266 bytes, Thumb)
u32 sub_080422CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    *(u8*)(r2 + 0x3) = (u8)r1;
    r0 = sub_08044EB0(r0, r1, r2, r3); // 0x080422CE
    return r0;
    r6 = 0x0300525CU; // [0x08042664]
    r4 = r0;
    r0 = *(u32*)(r6);
    r7 = 0x03005268U; // [0x08042668]
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804230E;
    r5 = 0x0U;
loc_080422E6:
    r0 = (r5 << 2);
    r0 = *(u32*)(r7 + r0);
    r1 = *(u16*)(r0);
    r1 = (r1 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08042304;
    r0 = *(u8*)(r0 + 0x1A);
    r1 = r0;
    r1 &= r4;
    if (cmp_lhs == cmp_rhs) goto loc_08042304;
    r0 &= ~r4;
    r2 = r0;
    r1 = r5;
    r0 = 0x20U;
    r0 = sub_08044A0C(r0, r1, r2, r3); // 0x08042300
loc_08042304:
    r5 += 0x1U;
    r5 = (r5 << 24);
    r5 = (r5 >> 24);
    cmp_lhs = (s32)r5; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080422E6;
loc_0804230E:
    r0 = *(u32*)(r6);
    r0 = *(u8*)(r0 + 0x5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804233A;
    r5 = 0x0U;
loc_08042318:
    r0 = (r5 << 2);
    r0 = *(u32*)(r7 + r0);
    r1 = *(u16*)(r0 + 0x34);
    r1 = (r1 << 16);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08042330;
    r0 += 0x40U;
    r0 = *(u8*)(r0 + 0xE);
    r0 &= r4;
    if (cmp_lhs == cmp_rhs) goto loc_08042330;
    r0 = r5;
    r0 = sub_08044AF4(r0, r1, r2, r3); // 0x0804232C
loc_08042330:
    r5 += 0x1U;
    r5 = (r5 << 24);
    r5 = (r5 >> 24);
    cmp_lhs = (s32)r5; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042318;
loc_0804233A:
    r1 = *(u32*)(r6);
    r0 = *(u8*)(r1 + 0x6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042370;
    r0 &= ~r4;
    *(u8*)(r1 + 0x6) = (u8)r0;
    r3 = 0x00008001U; // [0x0804265C]
    r0 = 0x0U;
    r5 = 0x03005278U; // [0x0804266C]
    r3 += 0x23U;
loc_0804234E:
    r1 = (r0 << 2);
    r1 = *(u32*)(r5 + r1);
    r2 = *(u16*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08042366;
    r2 = *(u8*)(r1 + 0x3);
    r2 &= r4;
    if (cmp_lhs == cmp_rhs) goto loc_08042366;
    r1 += 0x3U;
    r2 = *(u8*)(r1);
    r2 &= ~r4;
    *(u8*)(r1) = (u8)r2;
loc_08042366:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0804234E;
loc_08042370:
    return r0;
    r3 = sp;
    r2 = 0x4; // sp + 0x4
    r1 = 0x8; // sp + 0x8
    r5 = 0x0U;
    r0 = sub_0804418E(r0, r1, r2, r3); // 0x0804237C
    r3 = 0x0; // sp + 0x0
    r6 = 0x03004CC8U; // [0x08042660]
    r0 = *(u8*)(r3 + 0x8);
    r4 = r6;
    r4 += 0x30U;
    r7 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080423FE(r0, r1, r2, r3);
    r0 = *(u8*)(r3 + 0x8);
    *(u16*)(r6 + 0x14) = (u16)r0;
    r0 = *(u8*)(r3 + 0x4);
    *(u16*)(r6 + 0x16) = (u16)r0;
    r0 = *(u8*)(r6 + 0x9);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080423E8(r0, r1, r2, r3);
    *(u8*)(r6 + 0xA) = (u8)r7;
    r0 = *(u8*)(r6 + 0x6);
    r1 = *(u8*)(r3 + 0x4);
    r0 |= r1;
    if (cmp_lhs == cmp_rhs) return sub_080423D4(r0, r1, r2, r3);
    r0 = 0x0U;
loc_080423AA:
    r3 = 0x0; // sp + 0x0
    r2 = *(u8*)(r3 + 0x8);
    r1 = r7;
    r1 <<= (r0 & 0xFF);
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_080423C4;
    r2 = *(u8*)(r4);
    r1 |= r2;
    *(u8*)(r4) = (u8)r1;
    r1 = *(u16*)(r6 + 0x32);
    r2 = (r0 << 1);
    r2 = r2 + r6;
    *(u16*)(r2 + 0x34) = (u16)r1;
loc_080423C4:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_080423AA;
    r1 = 0x1U;
    r0 = 0x31U;
    return sub_080423F6(r0, r1, r2, r3);
}

// ROM Address: 0x080423D4..0x080423E8 (20 bytes, Thumb)
u32 sub_080423D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    *(u8*)(r6 + 0xA) = (u8)r2;
    r3 = 0x0; // sp + 0x0
    r0 = *(u8*)(r3 + 0x8);
    r0 = sub_0804337C(r0, r1, r2, r3); // 0x080423DC
    r5 = 0x1U;
    r1 = 0x1U;
    r0 = 0x33U;
    return sub_080423F6(r0, r1, r2, r3);
}

// ROM Address: 0x080423E8..0x080424FE (278 bytes, Thumb)
u32 sub_080423E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0; // sp + 0x0
    r0 = *(u8*)(r3 + 0x8);
    r0 = sub_0804337C(r0, r1, r2, r3); // 0x080423EC
    r5 = 0x1U;
    r1 = 0x2U;
    r0 = 0x30U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x080423F6
    r0 = sub_08043368(r0, r1, r2, r3); // 0x080423FA
    r0 = 0x0300525CU; // [0x08042664]
    r0 = *(u32*)(r0);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_080424AE;
    r3 = 0x0; // sp + 0x0
    r0 = *(u8*)(r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804244C;
    r0 = 0x0U;
    r2 = 0x0U;
loc_08042414:
    r3 = *(u8*)(r4);
    r1 = r7;
    r1 <<= (r0 & 0xFF);
    r3 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804242C;
    r3 = 0x0; // sp + 0x0
    r3 = *(u8*)(r3);
    r1 &= r3;
    if (cmp_lhs == cmp_rhs) goto loc_0804242C;
    r1 = (r0 << 1);
    r1 = r1 + r6;
    *(u16*)(r1 + 0x34) = (u16)r2;
loc_0804242C:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042414;
    r3 = 0x0; // sp + 0x0
    r1 = *(u8*)(r3);
    r0 = *(u8*)(r4);
    r0 &= ~r1;
    *(u8*)(r4) = (u8)r0;
    r0 = *(u8*)(r3);
    r1 = 0x1U;
    *(u16*)(r6 + 0x14) = (u16)r0;
    r0 = 0x32U;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x08042448
loc_0804244C:
    r0 = *(u8*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080424A2;
    r6 = 0x0U;
    r7 = 0x03004CC8U; // [0x08042660]
    r0 = 0x0U;
loc_08042458:
    r2 = *(u8*)(r4);
    r1 = 0x1U;
    r1 <<= (r0 & 0xFF);
    r2 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08042482;
    r2 = (r0 << 1);
    r3 = r2 + r7;
    r2 = *(u16*)(r3 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08042482;
    r2 -= 0x1U;
    r2 = (r2 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r3 + 0x34) = (u16)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08042482;
    r2 = *(u8*)(r4);
    r2 &= ~r1;
    r1 |= r6;
    r6 = (r1 << 24);
    r6 = (r6 >> 24);
    *(u8*)(r4) = (u8)r2;
loc_08042482:
    r0 += 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08042458;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080424A2;
    r0 = r6;
    r0 = sub_0804337C(r0, r1, r2, r3); // 0x08042492
    r5 = 0x1U;
    r1 = 0x1U;
    r0 = 0x33U;
    *(u16*)(r7 + 0x14) = (u16)r6;
    r0 = sub_0804333C(r0, r1, r2, r3); // 0x0804249E
loc_080424A2:
    r0 = *(u8*)(r4);
    r6 = 0x03004CC8U; // [0x08042660]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080424AE;
    r2 = 0x0U;
    *(u8*)(r6 + 0xA) = (u8)r2;
loc_080424AE:
    r0 = r5;
    return r0;
    r5 = 0x03004CC8U; // [0x08042660]
    r4 = r1;
    r1 = 0x03004CC8U; // [0x08042660]
    r6 = r0;
    r0 = *(u8*)(r5 + 0xE);
    r1 += 0x30U;
    stack[8] = r1; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08042592(r0, r1, r2, r3);
    r7 = 0x0U;
    *(u8*)(r5 + 0xE) = (u8)r7;
    r0 = r5;
    r1 = 0x0300525CU; // [0x08042664]
    r0 = *(u8*)(r0 + 0x5);
    r7 = *(u32*)(r1);
    cmp_lhs = (s32)r6; cmp_rhs = 31;
    r12 = r7;
    if (cmp_lhs == cmp_rhs) return sub_080425B2(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_0804251E(r0, r1, r2, r3);
    r1 = r5;
    r2 = *(u16*)(r1 + 0x1A);
    r7 = r6;
    r7 -= 0x10U;
    r3 = r2 - 1;
    r3 = (r3 << 16);
    r3 = (r3 >> 16);
    stack[7] = r3; // [sp + 0x1C]
    r1 = *(u8*)(r1 + 0x7);
    cmp_lhs = (s32)r7; cmp_rhs = 15;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080424FC;
    r3 = 0x08042500U;
    r3 = r3 + r7;
    r3 = *(u16*)(r3 + r7);
    r3 = (r3 << 1);
    pc += r3;
loc_080424FC:
    return sub_080425B0(r0, r1, r2, r3);
}

// ROM Address: 0x080424FE..0x0804251E (32 bytes, Thumb)
u32 sub_080424FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r7 = r6;
    r6 = (r7 << 6);
    r6 = (r7 << 6);
    r6 = (r7 << 6);
    r6 = (r7 << 6);
    r6 = (r7 << 6);
    r2 = (r0 << 1);
    r4 = r7;
    r6 = (r7 << 6);
    r3 = (r1 << 1);
    r7 = (r1 << 1);
    r3 = (r3 << 1);
    r4 = (r4 << 1);
    r7 = (r5 << 1);
    r4 = (r2 << 3);
    return r0;
}

// ROM Address: 0x0804251E..0x0804256C (78 bytes, Thumb)
u32 sub_0804251E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x13U;
    cmp_lhs = (s32)r6; cmp_rhs = 50;
    if (cmp_lhs == cmp_rhs) return sub_080425F0(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) goto loc_08042550;
    r1 = 0x03004CC8U; // [0x08042660]
    r1 += 0x10U;
    cmp_lhs = (s32)r6; cmp_rhs = 32;
    if (cmp_lhs == cmp_rhs) return sub_08042604(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 33;
    if (cmp_lhs == cmp_rhs) return sub_08042606(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 39;
    if (cmp_lhs != cmp_rhs) return sub_080425B0(r0, r1, r2, r3);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080425B0(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 22;
    if (cmp_lhs != cmp_rhs) return sub_08042608(r0, r1, r2, r3);
    r0 = *(u8*)(r5 + 0x11);
    r7 = 0x1U;
    *(u8*)(r5 + 0x4) = (u8)r0;
    r0 = *(u8*)(r5 + 0x12);
    *(u8*)(r5 + 0x5) = (u8)r0;
    *(u8*)(r5 + 0x2) = (u8)r7;
    r1 = 0x0U;
    r0 = 0x41U;
    return sub_08042876(r0, r1, r2, r3);
loc_08042550:
    cmp_lhs = (s32)r6; cmp_rhs = 51;
    if (cmp_lhs == cmp_rhs) return sub_08042638(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 52;
    if (cmp_lhs == cmp_rhs) return sub_0804263A(r0, r1, r2, r3);
    cmp_lhs = (s32)r6; cmp_rhs = 61;
    if (cmp_lhs != cmp_rhs) return sub_080425B0(r0, r1, r2, r3);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080425B0(r0, r1, r2, r3);
    r7 = 0x0U;
    *(u8*)(r5 + 0x5) = (u8)r7;
    r1 = 0x0U;
    r0 = 0x42U;
    *(u8*)(r5 + 0x4) = (u8)r7;
    return sub_08042876(r0, r1, r2, r3);
}

// ROM Address: 0x08042592..0x08042594 (2 bytes, Thumb)
u32 sub_08042592(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return Bios_CpuSet1(r0, r1, r2, r3);
}

// ROM Address: 0x080425B0..0x080425B2 (2 bytes, Thumb)
u32 sub_080425B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0804269C(r0, r1, r2, r3);
}

// ROM Address: 0x080425B2..0x080425B4 (2 bytes, Thumb)
u32 sub_080425B2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080426C4(r0, r1, r2, r3);
}

// ROM Address: 0x080425F0..0x080425F2 (2 bytes, Thumb)
u32 sub_080425F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08042750(r0, r1, r2, r3);
}

// ROM Address: 0x08042604..0x0804260A (6 bytes, Thumb)
u32 sub_08042604(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080426D0(r0, r1, r2, r3);
    return sub_080426FC(r0, r1, r2, r3);
    return sub_08042812(r0, r1, r2, r3);
}
