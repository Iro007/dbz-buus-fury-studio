/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #29
 * Address Range: 0x0804FA30..0x0805072C (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0804FA30..0x0804FA40 (16 bytes, Thumb)
u32 sub_0804FA30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804FA3C;
    r0 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0804FA40(r0, r1, r2, r3);
loc_0804FA3C:
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA40..0x0804FA44 (4 bytes, Thumb)
u32 sub_0804FA40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA44..0x0804FA54 (16 bytes, Thumb)
u32 sub_0804FA44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FA54(r0, r1, r2, r3);
    r0 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0804FA54(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA54..0x0804FA58 (4 bytes, Thumb)
u32 sub_0804FA54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA58..0x0804FA78 (32 bytes, Thumb)
u32 sub_0804FA58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 = *(u32*)(r1 + 0x4);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0804FA64;
    r0 = 0x0U;
loc_0804FA64:
    return r0; // BX lr
    r0 = r0;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FA78(r0, r1, r2, r3);
    r0 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0804FA78(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA78..0x0804FA7C (4 bytes, Thumb)
u32 sub_0804FA78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA7C..0x0804FA8C (16 bytes, Thumb)
u32 sub_0804FA7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FA8C(r0, r1, r2, r3);
    r0 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0804FA8C(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA8C..0x0804FA90 (4 bytes, Thumb)
u32 sub_0804FA8C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA90..0x0804FA94 (4 bytes, Thumb)
u32 sub_0804FA90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0804FA94..0x0804FAA8 (20 bytes, Thumb)
u32 sub_0804FA94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FA9C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FAA8(r0, r1, r2, r3);
    r0 = 0xDU;
    return r0;
}

// ROM Address: 0x0804FAA8..0x0804FAAC (4 bytes, Thumb)
u32 sub_0804FAA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FAA6(r0, r1, r2, r3);
}

// ROM Address: 0x0804FAAC..0x0804FAC0 (20 bytes, Thumb)
u32 sub_0804FAAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FAB4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FAC0(r0, r1, r2, r3);
    r0 = 0x7U;
    return r0;
}

// ROM Address: 0x0804FAC0..0x0804FAC4 (4 bytes, Thumb)
u32 sub_0804FAC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FABE(r0, r1, r2, r3);
}

// ROM Address: 0x0804FAC4..0x0804FAD8 (20 bytes, Thumb)
u32 sub_0804FAC4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FACC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FAD8(r0, r1, r2, r3);
    r0 = 0xBU;
    return r0;
}

// ROM Address: 0x0804FAD8..0x0804FADC (4 bytes, Thumb)
u32 sub_0804FAD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FAD6(r0, r1, r2, r3);
}

// ROM Address: 0x0804FADC..0x0804FAF0 (20 bytes, Thumb)
u32 sub_0804FADC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FAE4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FAF0(r0, r1, r2, r3);
    r0 = 0x5U;
    return r0;
}

// ROM Address: 0x0804FAF0..0x0804FAF4 (4 bytes, Thumb)
u32 sub_0804FAF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FAEE(r0, r1, r2, r3);
}

// ROM Address: 0x0804FAF4..0x0804FB08 (20 bytes, Thumb)
u32 sub_0804FAF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FAFC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FB08(r0, r1, r2, r3);
    r0 = 0x8U;
    return r0;
}

// ROM Address: 0x0804FB08..0x0804FB0C (4 bytes, Thumb)
u32 sub_0804FB08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FB06(r0, r1, r2, r3);
}

// ROM Address: 0x0804FB0C..0x0804FB20 (20 bytes, Thumb)
u32 sub_0804FB0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FB14: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FB20(r0, r1, r2, r3);
    r0 = 0x4U;
    return r0;
}

// ROM Address: 0x0804FB20..0x0804FB24 (4 bytes, Thumb)
u32 sub_0804FB20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FB1E(r0, r1, r2, r3);
}

// ROM Address: 0x0804FB24..0x0804FB38 (20 bytes, Thumb)
u32 sub_0804FB24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FB2C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FB38(r0, r1, r2, r3);
    r0 = 0xEU;
    return r0;
}

// ROM Address: 0x0804FB38..0x0804FB3C (4 bytes, Thumb)
u32 sub_0804FB38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FB36(r0, r1, r2, r3);
}

// ROM Address: 0x0804FB3C..0x0804FB50 (20 bytes, Thumb)
u32 sub_0804FB3C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FB44: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FB50(r0, r1, r2, r3);
    r0 = 0xAU;
    return r0;
}

// ROM Address: 0x0804FB50..0x0804FB54 (4 bytes, Thumb)
u32 sub_0804FB50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FB4E(r0, r1, r2, r3);
}

// ROM Address: 0x0804FB54..0x0804FB68 (20 bytes, Thumb)
u32 sub_0804FB54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FB5C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FB68(r0, r1, r2, r3);
    r0 = 0x11U;
    return r0;
}

// ROM Address: 0x0804FB68..0x0804FB6C (4 bytes, Thumb)
u32 sub_0804FB68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FB66(r0, r1, r2, r3);
}

// ROM Address: 0x0804FB6C..0x0804FB80 (20 bytes, Thumb)
u32 sub_0804FB6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FB74: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0804FB80(r0, r1, r2, r3);
    r0 = 0x6U;
    return r0;
}

// ROM Address: 0x0804FB80..0x0804FB84 (4 bytes, Thumb)
u32 sub_0804FB80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return sub_0804FB7E(r0, r1, r2, r3);
}

// ROM Address: 0x0804FB98..0x0804FBAC (20 bytes, Thumb)
u32 sub_0804FB98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x1C);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FBA0: BL __call_via_r3
    return r0;
    r0 = r0;
    r0 = *(u32*)(r0 + 0x20);
    return r0; // BX lr
}

// ROM Address: 0x0804FBAC..0x0804FBB0 (4 bytes, Thumb)
u32 sub_0804FBAC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x30);
    return r0; // BX lr
}

// ROM Address: 0x0804FBB0..0x0804FBC4 (20 bytes, Thumb)
u32 sub_0804FBB0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 = *(u32*)(r1 + 0xC);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804FBBC;
    r0 = 0x0U;
loc_0804FBBC:
    return r0; // BX lr
    r0 = r0;
    r0 = *(u32*)(r0 + 0xC);
    return r0; // BX lr
}

// ROM Address: 0x0804FBC4..0x0804FBC8 (4 bytes, Thumb)
u32 sub_0804FBC4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x2C);
    return r0; // BX lr
}

// ROM Address: 0x0804FBE0..0x0804FBF0 (16 bytes, Thumb)
u32 sub_0804FBE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804FBEA: BL 0x08046AA2
    return r0;
}

// ROM Address: 0x0804FBF0..0x0804FBF4 (4 bytes, Thumb)
u32 sub_0804FBF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FBFC..0x0804FC0C (16 bytes, Thumb)
u32 sub_0804FBFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03004A6CU; // [0x0804FC04]
    r0 = *(u32*)(r0 + 0x10);
    return r0; // BX lr
    r0 = r0;
    r2 = 0x00004770U; // [0x0804FDB8]
    r0 = (r0 << 12);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FC0C..0x0804FC10 (4 bytes, Thumb)
u32 sub_0804FC0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FC2C..0x0804FC38 (12 bytes, Thumb)
u32 sub_0804FC2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x34);
    r0 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_0804FC38(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FC38..0x0804FC3C (4 bytes, Thumb)
u32 sub_0804FC38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FC3C..0x0804FC40 (4 bytes, Thumb)
u32 sub_0804FC3C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FC5C..0x0804FCB6 (90 bytes, Thumb)
u32 sub_0804FC5C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FC68: BL __call_via_r3
    return r0;
    r0 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r0 -= 0x8U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    return r0; // BX lr
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FC84: BL __call_via_r3
    return r0;
    r0 = r0;
    r4 = r1;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0804FC94
    r1 = 0x03001B30U; // [0x0804FCA4]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0804FC9C
    return r0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r4 = r1;
    r0 = sub_0800DE94(r0, r1, r2, r3); // 0x0804FCAC: BL 0x0800DE94
    r0 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    return r0;
}

// ROM Address: 0x0804FCB6..0x0804FCBA (4 bytes, Thumb)
u32 sub_0804FCB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804FCCC..0x0804FCDA (14 bytes, Thumb)
u32 sub_0804FCCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804FCD4: BL 0x08046AA2
    return r0;
}

// ROM Address: 0x0804FCDA..0x0804FCDE (4 bytes, Thumb)
u32 sub_0804FCDA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804FCE2..0x0804FD48 (102 bytes, Thumb)
u32 sub_0804FCE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = *(u32*)(r1);
    r1 = 0x0872A6B4U; // [0x0804FCF4]
    r1 = *(u32*)(r1 + 0x10);
    r1 += 0x180U;
    *(u32*)(r1 + 0x1C) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r6 = 0x0804FFC8U;
    r2 = (r6 >> 1);
    return r0; // BX lr
    r0 = r0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FD04: BL __call_via_r3
    return r0;
    r0 = r0;
    r0 = 0x0U;
    return r0; // BX lr
    r0 = 0x0872A6B4U; // [0x0804FD20]
    r0 = *(u32*)(r0 + 0x14);
    r0 += 0x180U;
    r0 = *(u32*)(r0 + 0x10);
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r6 = 0x0804FFF4U;
    r2 = (r6 >> 1);
    return r0; // BX lr
    r0 = r0;
    r0 = 0x087B76F0U; // [0x0804FD48]
    r0 = *(u32*)(r0);
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804FD38: BL 0x08046AA2
    r2 = r0;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x0804FD42: BL 0x08049168
    return r0;
}

// ROM Address: 0x0804FD48..0x0804FD4E (6 bytes, Thumb)
u32 sub_0804FD48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r6 + 0x1B) = (u8)r0;
    r3 = (r7 >> 1);
    r0 = 0x087B76F0U; // [0x0804FD6C]
    return r0;
}

// ROM Address: 0x0804FD4E..0x0804FDA0 (82 bytes, Thumb)
u32 sub_0804FD4E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0);
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804FD5C: BL 0x08046AA2
    r2 = r0;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08049168(r0, r1, r2, r3); // 0x0804FD66: BL 0x08049168
    return r0;
    *(u8*)(r6 + 0x1B) = (u8)r0;
    r3 = (r7 >> 1);
    return r0; // BX lr
    r0 = r0;
    r4 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r5 = r2;
    *(u32*)(r4 + 0xC) = (u32)r1;
    r1 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0 + 0x8);
    *(u32*)(r4 + 0x8) = (u32)r1;
    *(u32*)(r4 + 0x4) = (u32)r2;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0804FD8A: BL 0x0803D63C
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r3 = r2 + r1;
    r2 = r5;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FD9A: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0804FDA0..0x0804FDA2 (2 bytes, Thumb)
u32 sub_0804FDA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804FDA2..0x0804FDB0 (14 bytes, Thumb)
u32 sub_0804FDA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x08070180U; // [0x0804FDB0]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    return r0; // BX lr
}

// ROM Address: 0x0804FDB0..0x0804FDB2 (2 bytes, Thumb)
u32 sub_0804FDB0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 6);
    return r0;
}

// ROM Address: 0x0804FDB2..0x0804FDB8 (6 bytes, Thumb)
u32 sub_0804FDB2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r0 >> 32);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FDB8..0x0804FDBA (2 bytes, Thumb)
u32 sub_0804FDB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0804FDBA..0x0804FDC0 (6 bytes, Thumb)
u32 sub_0804FDBA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FDC0..0x0804FDC4 (4 bytes, Thumb)
u32 sub_0804FDC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x4);
    return r0; // BX lr
}

// ROM Address: 0x0804FDE8..0x0804FE14 (44 bytes, Thumb)
u32 sub_0804FDE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = *(u8*)(r4);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0804FE12;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x0804FE14]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804FE12;
    r3 = 0x2U;
    r0 = 0x080724F8U; // [0x0804FE18]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0804FE08
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_0804FE12:
    return r0;
}

// ROM Address: 0x0804FE16..0x0804FE4C (54 bytes, Thumb)
u32 sub_0804FE16(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = 0xF8U;
    r7 = (r0 >> 32);
    return r0; // BX lr
    r0 = r0;
    r4 = r0;
    r0 = *(u8*)(r0);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0804FE4A;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x0804FE4C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804FE4A;
    r3 = 0x2U;
    r0 = 0x080725E8U; // [0x0804FE50]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0804FE40
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_0804FE4A:
    return r0;
}

// ROM Address: 0x0804FE54..0x0804FE72 (30 bytes, Thumb)
u32 sub_0804FE54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = r2 - r1;
    if (cmp_lhs == cmp_rhs) goto loc_0804FE70;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = r0;
    r1 += 0x8U;
    r2 = (r2 << 2);
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0804FE6C: BL 0x08049138
loc_0804FE70:
    return r0;
}

// ROM Address: 0x0804FE72..0x0804FE76 (4 bytes, Thumb)
u32 sub_0804FE72(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804FE7E..0x0804FE84 (6 bytes, Thumb)
u32 sub_0804FE7E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FE84..0x0804FE88 (4 bytes, Thumb)
u32 sub_0804FE84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FE9E..0x0804FEA4 (6 bytes, Thumb)
u32 sub_0804FE9E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FEA4..0x0804FEA8 (4 bytes, Thumb)
u32 sub_0804FEA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FEAE..0x0804FEB4 (6 bytes, Thumb)
u32 sub_0804FEAE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0804FEB4..0x0804FEB8 (4 bytes, Thumb)
u32 sub_0804FEB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0804FEBE..0x0804FED6 (24 bytes, Thumb)
u32 sub_0804FEBE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = 0x1U;
    return r0; // BX lr
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03001B30U; // [0x0804FED8]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0804FED2;
    r0 = 0x0U;
loc_0804FED2:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0804FED6..0x0804FEEC (22 bytes, Thumb)
u32 sub_0804FED6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r0 = *(u32*)(r1 + 0x58);
    r0 += 0x4CU;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0804FEEC(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0804FEEE(r0, r1, r2, r3);
}

// ROM Address: 0x0804FEEC..0x0805002C (320 bytes, Thumb)
u32 sub_0804FEEC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = 0x1U;
    r0 = r1 - r0;
    return r0; // BX lr
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03001B30U; // [0x0804FF08]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0804FF02;
    r0 = 0x0U;
loc_0804FF02:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003158U; // [0x0804FF20]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0804FF1A;
    r0 = 0x0U;
loc_0804FF1A:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r1 += 0x58U;
    r0 = (r0 << 12);
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x030030ECU; // [0x0804FF38]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0804FF32;
    r0 = 0x0U;
loc_0804FF32:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r0 += 0xECU;
    r0 = (r0 << 12);
    r0 = 0x0U;
    return r0; // BX lr
    r5 = r0;
    r0 = r1;
    r4 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FF50: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0804FF66;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FF62: BL __call_via_r3
loc_0804FF66:
    r0 = 0x0U;
    return r0;
    r0 = r0;
    r0 = 0x1U;
    return r0; // BX lr
    r0 = 0x03000F90U; // [0x0804FF80]
    r1 += 0xFFU;
    r0 = *(u32*)(r0 + 0x4);
    r1 += 0xC1U;
    *(u32*)(r1 + 0x28) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
    r0 = r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x18);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0804FF8C: BL 0x08046AA2
    return r0;
    r0 = r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x0300314CU; // [0x0804FFA8]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0804FFA2;
    r0 = 0x0U;
loc_0804FFA2:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r1 += 0x4CU;
    r0 = (r0 << 12);
    r0 = 0x1U;
    return r0; // BX lr
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03001B30U; // [0x0804FFC4]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0804FFBE;
    r0 = 0x0U;
loc_0804FFBE:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r0 = 0x03000F90U; // [0x0804FFD8]
    r1 += 0xFFU;
    r0 = *(u32*)(r0 + 0x4);
    r1 += 0xC1U;
    *(u32*)(r1 + 0x2C) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
    r0 = r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    return r0; // BX lr
    r0 = r0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x18);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0804FFE8: BL __call_via_r3
    return r0;
    r0 = r0;
    r0 = 0x1U;
    return r0; // BX lr
    r0 = 0x1U;
    return r0; // BX lr
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003264U; // [0x0805000C]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08050006;
    r0 = 0x0U;
loc_08050006:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r2 += 0x64U;
    r0 = (r0 << 12);
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003128U; // [0x08050024]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0805001E;
    r0 = 0x0U;
loc_0805001E:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r1 += 0x28U;
    r0 = (r0 << 12);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0805002C..0x08050030 (4 bytes, Thumb)
u32 sub_0805002C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08050034..0x0805009E (106 bytes, Thumb)
u32 sub_08050034(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003214U; // [0x08050048]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08050042;
    r0 = 0x0U;
loc_08050042:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r2 += 0x14U;
    r0 = (r0 << 12);
    r1 = *(u32*)(r1 + 0x14);
    r2 = 0x03001B30U; // [0x0805005C]
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08050058;
    r0 = 0x0U;
loc_08050058:
    return r0; // BX lr
    r0 = r0;
    r0 = r6 - r4;
    r0 = (r0 << 12);
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x030032A0U; // [0x08050074]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0805006E;
    r0 = 0x0U;
loc_0805006E:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r2 += 0xA0U;
    r0 = (r0 << 12);
    r0 = r1;
    r0 = sub_0800EE9E(r0, r1, r2, r3); // 0x0805007C
    return r0;
    r0 = r0;
    r0 = 0x1U;
    return r0; // BX lr
    r0 = *(u32*)(r1 + 0x58);
    r0 += 0x4CU;
    r0 = *(u32*)(r0 + 0x54);
    r2 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0805009A;
    r0 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 248;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0805009E(r0, r1, r2, r3);
loc_0805009A:
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0805009E..0x080500A2 (4 bytes, Thumb)
u32 sub_0805009E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080500A2..0x080500D0 (46 bytes, Thumb)
u32 sub_080500A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r1 = *(u16*)(r1 + 0x12);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_080500AE;
    r0 = 0x0U;
loc_080500AE:
    return r0; // BX lr
    r4 = r1;
    r1 = 0x11U;
    r0 = r4;
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x080500B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080500D0(r0, r1, r2, r3);
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x080500C4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080500D0(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080500D0..0x080500D4 (4 bytes, Thumb)
u32 sub_080500D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080500D4..0x080500D8 (4 bytes, Thumb)
u32 sub_080500D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080500D8..0x080500E4 (12 bytes, Thumb)
u32 sub_080500D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x4);
    r1 += 0x1C0U;
    *(u32*)(r1 + 0x24) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080500E4..0x080500E6 (2 bytes, Thumb)
u32 sub_080500E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x080500E8..0x0805012C (68 bytes, Thumb)
u32 sub_080500E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x4);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080500F2: BL __call_via_r3
    return r0;
    r1 = *(u8*)(r1 + 0x11);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) goto loc_08050102;
    r0 = 0x0U;
loc_08050102:
    return r0; // BX lr
    r1 = *(u8*)(r1 + 0x11);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) goto loc_0805010E;
    r0 = 0x0U;
loc_0805010E:
    return r0; // BX lr
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03001B38U; // [0x08050124]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0805011E;
    r0 = 0x0U;
loc_0805011E:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r0 = r7 - r4;
    r0 = (r0 << 12);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0805012C..0x0805012E (2 bytes, Thumb)
u32 sub_0805012C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0805012E..0x08050174 (70 bytes, Thumb)
u32 sub_0805012E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003120U; // [0x08050144]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0805013E;
    r0 = 0x0U;
loc_0805013E:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r1 += 0x20U;
    r0 = (r0 << 12);
    r0 = 0x1U;
    return r0; // BX lr
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03001B38U; // [0x08050160]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0805015A;
    r0 = 0x0U;
loc_0805015A:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r0 = r7 - r4;
    r0 = (r0 << 12);
    r0 = 0x1U;
    r2 = (r0 << 9);
    r1 = r1 + r2;
    r1 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050172;
    r0 = 0x0U;
loc_08050172:
    return r0; // BX lr
}

// ROM Address: 0x08050174..0x08050178 (4 bytes, Thumb)
u32 sub_08050174(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08050178..0x080501D0 (88 bytes, Thumb)
u32 sub_08050178(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x4);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08050182: BL __call_via_r3
    return r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003130U; // [0x0805019C]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08050196;
    r0 = 0x0U;
loc_08050196:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = r0;
    r1 += 0x30U;
    r0 = (r0 << 12);
    r0 = r1;
    r0 += 0x1C0U;
    r1 = *(u32*)(r0 + 0x24);
    r1 += 0x1U;
    *(u32*)(r0 + 0x24) = (u32)r1;
    r0 = 0x1U;
    return r0; // BX lr
    r4 = r1;
    r1 = 0x11U;
    r0 = r4;
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x080501B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080501D0(r0, r1, r2, r3);
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x080501C4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080501D0(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080501D0..0x080501D4 (4 bytes, Thumb)
u32 sub_080501D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080501D4..0x080501DE (10 bytes, Thumb)
u32 sub_080501D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1U;
    r0 = sub_080387DC(r0, r1, r2, r3); // 0x080501D8: BL 0x080387DC
    return r0;
}

// ROM Address: 0x080501DE..0x080501E2 (4 bytes, Thumb)
u32 sub_080501DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x080501E4..0x0805020C (40 bytes, Thumb)
u32 sub_080501E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08040F02(r0, r1, r2, r3); // 0x080501E6
    r1 = 0x03004A6CU; // [0x080501F4]
    r0 = *(u32*)(r1 + 0x14);
    r0 += 0x1U;
    *(u32*)(r1 + 0x14) = (u32)r0;
    return r0;
    r2 = 0x20FFD107U; // [0x080503A8]
    r0 = (r0 << 12);
    return r0; // BX lr
    r0 = r0;
    r0 = sub_08042D84(r0, r1, r2, r3); // 0x080501FE
    r1 = 0x03004A6CU; // [0x0805020C]
    r0 = *(u32*)(r1 + 0x14);
    r0 += 0x1U;
    *(u32*)(r1 + 0x14) = (u32)r0;
    return r0;
}

// ROM Address: 0x0805020C..0x0805020E (2 bytes, Thumb)
u32 sub_0805020C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x31152004U; // [0x080503C0]
    return r0;
}

// ROM Address: 0x0805020E..0x08050228 (26 bytes, Thumb)
u32 sub_0805020E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r1 = 0x03004A6CU; // [0x08050220]
    r0 = 0x1U;
    r1 = *(u8*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0805021C;
    r0 = 0x0U;
loc_0805021C:
    return r0; // BX lr
    r0 = r0;
    r2 = 0x2280622EU; // [0x080503D4]
    r0 = (r0 << 12);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08050228..0x0805022C (4 bytes, Thumb)
u32 sub_08050228(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0805023C..0x080502F8 (188 bytes, Thumb)
u32 sub_0805023C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r2 = 0x56U;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x08050244: BL 0x08046DD0
    r1 = 0x56U;
    r1 = *(u8*)(r1 + r5);
    r0 = 0x56U;
    r3 = r5;
    *(u8*)(r0 + r4) = (u8)r1;
    r1 = 0x57U;
    r1 = *(u8*)(r1 + r5);
    r0 = 0x57U;
    r3 += 0x40U;
    *(u8*)(r0 + r4) = (u8)r1;
    r1 = 0x58U;
    r1 = *(u16*)(r1 + r5);
    r0 = 0x58U;
    *(u16*)(r0 + r4) = (u16)r1;
    r1 = 0x5AU;
    r1 = *(u16*)(r1 + r5);
    r0 = 0x5AU;
    *(u16*)(r0 + r4) = (u16)r1;
    r1 = 0x5CU;
    r1 = *(u16*)(r1 + r5);
    r0 = 0x5CU;
    *(u16*)(r0 + r4) = (u16)r1;
    r1 = 0x5EU;
    r1 = *(u16*)(r1 + r5);
    r0 = 0x5EU;
    *(u16*)(r0 + r4) = (u16)r1;
    r1 = 0x60U;
    r1 = *(u16*)(r1 + r5);
    r0 = 0x60U;
    *(u16*)(r0 + r4) = (u16)r1;
    r1 = 0x62U;
    r1 = *(u16*)(r1 + r5);
    r0 = 0x62U;
    *(u16*)(r0 + r4) = (u16)r1;
    r1 = 0x64U;
    r1 = *(u16*)(r1 + r5);
    r0 = 0x64U;
    *(u16*)(r0 + r4) = (u16)r1;
    r0 = *(u16*)(r3 + 0x26);
    r3 = r4;
    r3 += 0x40U;
    *(u16*)(r3 + 0x26) = (u16)r0;
    r0 = r4;
    return r0;
    r2 = *(u32*)r1; r1 += 4;
    *(u32*)(r0) = (u32)r2;
    r1 = *(u32*)(r1);
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r2 = *(u32*)(r1);
    *(u32*)(r0) = (u32)r2;
    r3 = *(u32*)(r1 + 0x4);
    *(u32*)(r0 + 0x4) = (u32)r3;
    r1 = *(u32*)(r1 + 0x8);
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r6 = 0x4F8U; // (159 << 3)
    r5 = r0;
    r4 = r1;
    r2 = r6;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x080502CA: BL 0x08046DD0
    r2 = 0x0805023DU /* &sub_0805023C */; // [0x080502F8]
    r0 = 0x8A0U; // (69 << 5)
    stack[0] = r2; // [sp + 0x0]
    r2 = r4 + r0;
    r3 = 0x68U;
    r1 = r4 + r6;
    r0 = r5 + r6;
    r0 = sub_08047018(r0, r1, r2, r3); // 0x080502DE
    r1 = 0x880U; // (17 << 7)
    r0 = r5 + r1;
    r1 = r4 + r1;
    r2 = *(u32*)(r1 + 0x20);
    r1 = *(u32*)(r1 + 0x24);
    *(u32*)(r0 + 0x24) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r0 = r5;
    return r0;
}

// ROM Address: 0x080502F8..0x080502FC (4 bytes, Thumb)
u32 sub_080502F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r7 << 8);
    r5 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080502FC..0x0805039C (160 bytes, Thumb)
u32 sub_080502FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050316;
    r0 = 0xFFU;
    r0 += 0x2DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805030A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08050316;
    r0 = r4;
    return r0;
loc_08050316:
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x08050354]
    r6 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x15U;
    *(u8*)(r0 + r4) = (u8)r5;
    r5 = r4;
    r5 += 0x100U;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    *(u32*)(r5 + 0x20) = (u32)r6;
    r0 = r4;
    r1 = ~r6;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08050336: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08050340: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08050358]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x0805035C]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x03002F54U; // [0x08050360]
    *(u32*)(r0) = (u32)r6;
    r0 = r4;
    return r0;
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08050378;
    r0 = 0x68U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805036C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08050378;
    r0 = r4;
    return r0;
loc_08050378:
    r1 = r4;
    r1 += 0x3AU;
    r2 = 0x2U;
    r0 = r4;
    r0 += 0x2EU;
    r3 = 0x08050869U; // [0x0805039C]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08050384: BL 0x08046FF4
    r1 = r4;
    r1 += 0x4CU;
    r2 = 0x4U;
    r0 = r4;
    r0 += 0x3CU;
    r3 = 0x08050535U; // [0x080503A0]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08050394: BL 0x08046FF4
    r0 = r4;
    return r0;
}

// ROM Address: 0x0805039C..0x080503A4 (8 bytes, Thumb)
u32 sub_0805039C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r5 >> 1);
    r5 = (r0 >> 32);
    r5 = (r6 << 20);
    r5 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080503A4..0x08050564 (448 bytes, Thumb)
u32 sub_080503A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080503BA;
    r0 = 0xFFU;
    r0 += 0x2DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080503AE: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080503BA;
    r0 = r4;
    return r0;
loc_080503BA:
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x08050400]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x4U;
    r1 += 0x15U;
    *(u8*)(r1 + r4) = (u8)r0;
    r5 = r4;
    r5 += 0x100U;
    r6 = 0x0U;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    r1 = r0 - 5;
    r0 = r4;
    *(u32*)(r5 + 0x20) = (u32)r6;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080503DC: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080503E6: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08050404]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x08050408]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x03002F54U; // [0x0805040C]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x080497F4U /* &VTable_080497F4 */; // [0x08050410]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return r0;
    r0 = r0;
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    stack[244] = r7; // [sp + 0x3D0]
    r4 = (r0 >> 32);
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0805042A;
    r0 = 0xFFU;
    r0 += 0x31U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805041E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0805042A;
    r0 = r4;
    return r0;
loc_0805042A:
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x08050470]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x3U;
    r1 += 0x15U;
    *(u8*)(r1 + r4) = (u8)r0;
    r5 = r4;
    r5 += 0x100U;
    r6 = 0x0U;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    r1 = r0 - 4;
    r0 = r4;
    *(u32*)(r5 + 0x20) = (u32)r6;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0805044C: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08050456: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08050474]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x08050478]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x03002F54U; // [0x0805047C]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x08049814U /* &VTable_08049814 */; // [0x08050480]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r5 + 0x2C) = (u32)r6;
    r0 = r4;
    return r0;
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    r0 = stack[20]; // [sp + 0x50]
    r4 = (r0 >> 32);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050496;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805048E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805049A;
loc_08050496:
    r1 = (r4 << 8);
    *(u32*)(r0) = (u32)r1;
loc_0805049A:
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080504AC;
    r0 = 0x80U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080504A4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080504B0;
loc_080504AC:
    r1 = 0x0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_080504B0:
    return r0;
    r0 = r0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080504CA;
    r0 = 0xFFU;
    r0 += 0x31U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080504BE: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080504CA;
    r0 = r4;
    return r0;
loc_080504CA:
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x08050510]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x3U;
    r1 += 0x15U;
    *(u8*)(r1 + r4) = (u8)r0;
    r5 = r4;
    r5 += 0x100U;
    r6 = 0x0U;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    r1 = r0 - 4;
    r0 = r4;
    *(u32*)(r5 + 0x20) = (u32)r6;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080504EC: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080504F6: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08050514]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x08050518]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x03002F54U; // [0x0805051C]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x08049A7CU /* &VTable_08049A7C */; // [0x08050520]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r5 + 0x2C) = (u32)r6;
    r0 = r4;
    return r0;
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    r2 = stack[124]; // [sp + 0x1F0]
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050530;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805052C: BL 0x0803D5B8
loc_08050530:
    return r0;
    r0 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050540;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805053C: BL 0x0803D5B8
loc_08050540:
    return r0;
    r0 = r0;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050556;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805054E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050562;
loc_08050556:
    r1 = 0x08049EFCU; // [0x08050564]
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    *(u32*)(r0 + 0xC) = (u32)r2;
loc_08050562:
    return r0;
}

// ROM Address: 0x08050564..0x08050568 (4 bytes, Thumb)
u32 sub_08050564(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = stack[252]; // [sp + 0x3F0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050568..0x080505AC (68 bytes, Thumb)
u32 sub_08050568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08050578;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08050570: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08050584;
loc_08050578:
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x10U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = 0x0804A4B8U /* &VTable_0804A4B8 */; // [0x08050588]
    *(u32*)(r0) = (u32)r1;
loc_08050584:
    return r0;
    r0 = r0;
    r4 = 0x0805086CU;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0805059C;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08050594: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080505AA;
loc_0805059C:
    r1 = 0xFFU;
    r1 += 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x10U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = 0x0804A920U /* &VTable_0804A920 */; // [0x080505AC]
    *(u32*)(r0) = (u32)r1;
loc_080505AA:
    return r0;
}

// ROM Address: 0x080505AC..0x080505B0 (4 bytes, Thumb)
u32 sub_080505AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x80; // sp + 0x80
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080505B0..0x0805068C (220 bytes, Thumb)
u32 sub_080505B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080505C6;
    r0 = 0xFFU;
    r0 += 0x31U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080505BA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080505C6;
    r0 = r4;
    return r0;
loc_080505C6:
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x0805060C]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x5U;
    r1 += 0x15U;
    *(u8*)(r1 + r4) = (u8)r0;
    r5 = r4;
    r5 += 0x100U;
    r6 = 0x0U;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    r1 = r0 - 6;
    r0 = r4;
    *(u32*)(r5 + 0x20) = (u32)r6;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080505E8: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x080505F2: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08050610]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x08050614]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x03002F54U; // [0x08050618]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x0804B050U /* &VTable_0804B050 */; // [0x0805061C]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r5 + 0x2C) = (u32)r6;
    r0 = r4;
    return r0;
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08050636;
    r0 = 0xFFU;
    r0 += 0x2DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805062A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08050636;
    r0 = r4;
    return r0;
loc_08050636:
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x0805067C]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x6U;
    r1 += 0x15U;
    *(u8*)(r1 + r4) = (u8)r0;
    r5 = r4;
    r5 += 0x100U;
    r6 = 0x0U;
    *(u32*)(r5 + 0x1C) = (u32)r6;
    r1 = r0 - 7;
    r0 = r4;
    *(u32*)(r5 + 0x20) = (u32)r6;
    r2 = 0x80U;
    r0 += 0x84U;
    *(u32*)(r5 + 0x18) = (u32)r6;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08050658: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08050662: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x08050680]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x08050684]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x03002F54U; // [0x08050688]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x0804B280U /* &VTable_0804B280 */; // [0x0805068C]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return r0;
    r0 = r0;
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08050690..0x080506AC (28 bytes, Thumb)
u32 sub_08050690(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080506AC(r0, r1, r2, r3);
    r0 = 0x2CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0805069E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080506AC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080506AC..0x0805070C (96 bytes, Thumb)
u32 sub_080506AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u8*)(r6 + 0x2);
    r0 = *(u8*)(r6 + 0x3);
    r7 = 0x08054FBCU; // [0x08050708]
    r5 *= r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08050704]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r7 + 0x18);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080506BE
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_080506D6;
    r1 = r5;
    r0 = *(u32*)(r7 + 0x18);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x080506CA: BL 0x08011732
    r1 = r5;
    r0 = *(u32*)(r7 + 0x18);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080506D2
loc_080506D6:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804BA50U /* &VTable_0804BA50 */; // [0x0805070C]
    r3 = 0x06010000U; // [0x08050710]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x28) = (u32)r6;
    r1 = stack[3]; // [sp + 0xC]
    r2 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r4 + 0x24) = (u32)r1;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r0 = stack[4]; // [sp + 0x10]
    *(u8*)(r4 + 0x8) = (u8)r0;
    r2 = *(u8*)(r6 + 0x2);
    r0 = *(u8*)(r6 + 0x3);
    r2 *= r0;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r6 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080506FC: BL 0x08049138
    r0 = r4;
    return sub_080506A8(r0, r1, r2, r3);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r7 = 0xB5084A03U; // [0x080509FC]
    r5 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08050714..0x0805072C (24 bytes, Thumb)
u32 sub_08050714(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0805072C(r0, r1, r2, r3);
    r0 = 0x0000040CU; // [0x08050748]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08050720: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0805072C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0805072C..0x08050746 (26 bytes, Thumb)
u32 sub_0805072C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 = sub_080176AC(r0, r1, r2, r3); // 0x0805072E
    r0 = 0x0804BBA4U /* &VTable_0804BBA4 */; // [0x0805074C]
    r1 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x400U; // (1 << 10)
    r0 = r4 + r0;
    r0 += 0x4U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = r4;
    return sub_0805072A(r0, r1, r2, r3);
}
