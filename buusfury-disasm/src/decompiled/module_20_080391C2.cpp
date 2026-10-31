/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #20
 * Address Range: 0x080391C2..0x0803B368 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x080391C2..0x080391E8 (38 bytes, Thumb)
u32 sub_080391C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 << 2);
    r1 = *(u32*)(r2 + r1);
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080391C8
    return r0;
    r3 = 0x0877ADD8U; // [0x08039210]
    r2 = (r1 << 2);
    r2 = *(u32*)(r3 + r2);
    r3 = *(u32*)(r0 + 0x14);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_080391E8(r0, r1, r2, r3);
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x080391DC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080391E8(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080391E8..0x080391EC (4 bytes, Thumb)
u32 sub_080391E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_080391E6(r0, r1, r2, r3);
}

// ROM Address: 0x080391EC..0x0803925C (112 bytes, Thumb)
u32 sub_080391EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_0800EF08(r0, r1, r2, r3); // 0x080391F0
    r0 = 0x228U; // (69 << 3)
    r0 = r4 + r0;
    r0 = sub_0800AB0C(r0, r1, r2, r3); // 0x080391FA
    return r0;
    r0 = sub_080102D8(r0, r1, r2, r3); // 0x08039202: BL 0x080102D8
    return r0;
    r4 = r1 - r4;
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08039238;
    r4 = (r0 >> 32);
    r5 = 0x360; // sp + 0x360
    r7 = (r6 >> 1);
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x30);
    r2 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803922C;
loc_08039220:
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x38);
    r2 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08039220;
loc_0803922C:
    r0 = *(u32*)(r0 + 0xC);
    r1 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08039236;
    r1 = 0x0U;
loc_08039236:
    r0 = r1;
loc_08039238:
    return r0; // BX lr
    r5 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08039242: BL __call_via_r3
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803924A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803925A;
    r1 = 0x0804AAA4U; // [0x0803925C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_0803925A:
    return r0;
}

// ROM Address: 0x0803925C..0x0803925E (2 bytes, Thumb)
u32 sub_0803925C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x290; // sp + 0x290
    return r0;
}

// ROM Address: 0x0803925E..0x0803926C (14 bytes, Thumb)
u32 sub_0803925E(u32 r0, u32 r1, u32 r2, u32 r3) {
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
}

// ROM Address: 0x0803926C..0x0803930A (158 bytes, Thumb)
u32 sub_0803926C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u16*)(r1 + 0x12);
    r0 = (r1 >> 3);
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4 + 0x11) = (u8)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_0803928A;
    r0 += 0x1U;
    r0 = (r0 << 31);
    r0 = (r0 >> 31);
    r0 += 0x3U;
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_0803928A:
    cmp_lhs = (s32)r1; cmp_rhs = 40;
    if (cmp_lhs != cmp_rhs) goto loc_08039308;
    r0 = 0x0877AE58U; // [0x08039350]
    r5 = 0x20; // sp + 0x20
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r1 = 0x0877AE58U; // [0x08039350]
    r5 -= 0x10U;
    r2 = 0x20U;
    r1 -= 0x20U;
    r0 = sp;
    r6 = sp;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080392A2: BL 0x08049138
    r0 = 0xFFU;
    r0 += 0xA1U;
    r0 = *(u32*)(r0 + r4);
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xC) = (u16)r0;
    r0 = 0xFFU;
    r0 += 0xA5U;
    r0 = *(u32*)(r0 + r4);
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xE) = (u16)r0;
    r0 = *(u8*)(r4 + 0x10);
    r1 = *(u16*)(r3 + 0xC);
    r0 = (r0 << 2);
    r0 = r0 + r5;
    r2 = *(u16*)(r0);
    r1 = r1 + r2;
    *(u16*)(r3 + 0xC) = (u16)r1;
    r1 = *(u16*)(r3 + 0xE);
    r0 = *(u16*)(r0 + 0x2);
    r2 = 0x087113E0U /* &g_EnemyStatTable[13] */; // [0x08039354]
    r0 = r1 + r0;
    *(u16*)(r3 + 0xE) = (u16)r0;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x080392DC
    r5 = r0;
    r1 = r0;
    r0 = 0x0877AE58U; // [0x08039350]
    r0 -= 0x24U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x080392EA: BL 0x0801191A
    r1 = r5;
    r1 += 0x1C0U;
    *(u32*)(r1 + 0x34) = (u32)r4;
    r0 = *(u8*)(r4 + 0x10);
    r2 = r4;
    r2 += 0x1C0U;
    *(u8*)(r5 + 0x10) = (u8)r0;
    r0 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803930A(r0, r1, r2, r3);
    *(u32*)(r2 + 0x30) = (u32)r5;
loc_08039308:
    return sub_0803932C(r0, r1, r2, r3);
}

// ROM Address: 0x0803930A..0x0803934A (64 bytes, Thumb)
u32 sub_0803930A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xFFU;
    r2 += 0xF9U;
    r2 = *(u32*)(r2 + r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08039324;
loc_08039314:
    r0 += 0x1C0U;
    r0 = *(u32*)(r0 + 0x38);
    r2 = 0xFFU;
    r2 += 0xF9U;
    r2 = *(u32*)(r2 + r0);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08039314;
loc_08039324:
    r2 = 0xFFU;
    r2 += 0xF9U;
    *(u32*)(r2 + r0) = r5;
    *(u32*)(r1 + 0x3C) = (u32)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 72;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08039340;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803933C: BL __call_via_r3
loc_08039340:
    r0 = *(u16*)(r4 + 0x12);
    r0 += 0x1U;
    *(u16*)(r4 + 0x12) = (u16)r0;
    return r0;
}

// ROM Address: 0x0803934A..0x0803934E (4 bytes, Thumb)
u32 sub_0803934A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030032A4U; // [0x08039358]
    return r0; // BX lr
}

// ROM Address: 0x0803934E..0x08039360 (18 bytes, Thumb)
u32 sub_0803934E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r6 = 0x160; // sp + 0x160
    r7 = (r6 >> 1);
    r0 = ((u32)((s32)r4 >> 15));
    r1 = (r6 >> 1);
    r2 += 0xA4U;
    r0 = (r0 << 12);
    r0 = 0x030032A8U; // [0x08039360]
    return r0; // BX lr
}

// ROM Address: 0x08039360..0x08039364 (4 bytes, Thumb)
u32 sub_08039360(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xA8U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08039364..0x0803937C (24 bytes, Thumb)
u32 sub_08039364(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803937C(r0, r1, r2, r3);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039370: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0803937C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0803937C..0x080393BE (66 bytes, Thumb)
u32 sub_0803937C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804C150U /* &VTable_0804C150 */; // [0x080393C4]
    r2 = 0x1U;
    *(u32*)(r4) = (u32)r0;
    r2 = (r2 << 9);
    r2 = r5 + r2;
    r0 = 0x03001C34U; // [0x080393C8]
    r2 = *(u32*)(r2 + 0x4);
    r3 = 0x0877AE80U; // [0x080393CC]
    r1 = *(u32*)(r0);
    r0 = 0xFFU;
    r2 = (r2 << 3);
    r2 = r2 + r3;
    r0 += 0xA1U;
    r0 = *(u32*)(r0 + r1);
    r2 -= 0x40U;
    r3 = *(u32*)(r2 + 0x38);
    r0 = ((u32)((s32)r0 >> 8));
    r3 = r0 + r3;
    r0 = 0x03000F60U; // [0x080393D0]
    r1 += 0x1A4U;
    *(u32*)(r0 + 0x10) = (u32)r3;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r2 + 0x3C);
    r1 = ((u32)((s32)r1 >> 8));
    r1 = r1 + r2;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r1 = r5;
    r0 = sub_0802E104(r0, r1, r2, r3); // 0x080393B4
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r4;
    return sub_0803937A(r0, r1, r2, r3);
}

// ROM Address: 0x080393C2..0x080393EC (42 bytes, Thumb)
u32 sub_080393C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u32*)r1 = r4; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x200; // sp + 0x200
    r7 = (r6 >> 1);
    r0 = (r4 >> 29);
    r0 = (r0 << 12);
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080393EC(r0, r1, r2, r3);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080393E0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080393EC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080393EC..0x0803942A (62 bytes, Thumb)
u32 sub_080393EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804CFB8U /* &VTable_0804CFB8 */; // [0x08039430]
    r1 = 0x1U;
    *(u32*)(r4) = (u32)r0;
    r1 = (r1 << 9);
    r1 = r5 + r1;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x0877AECCU; // [0x08039434]
    r0 = 0xFFU;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r0 += 0xA1U;
    r0 = *(u32*)(r0 + r5);
    r1 -= 0x40U;
    r2 = *(u32*)(r1 + 0x38);
    r0 = ((u32)((s32)r0 >> 8));
    r2 = r0 + r2;
    r0 = 0x03000F78U; // [0x08039438]
    *(u32*)(r0 + 0x10) = (u32)r2;
    r2 = 0xFFU;
    r2 += 0xA5U;
    r2 = *(u32*)(r2 + r5);
    r1 = *(u32*)(r1 + 0x3C);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = r2 + r1;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r1 = r5;
    r0 = sub_0802E104(r0, r1, r2, r3); // 0x08039420
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r4;
    return sub_080393EA(r0, r1, r2, r3);
}

// ROM Address: 0x0803942E..0x08039440 (18 bytes, Thumb)
u32 sub_0803942E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r3 = *(u32*)r7; r7 += 4;
    r4 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r4 = (r0 >> 32);
    r6 = 0x330; // sp + 0x330
    r7 = (r6 >> 1);
    r0 = (r7 >> 29);
    r0 = (r0 << 12);
    r0 = 0x030032ACU; // [0x08039440]
    return r0; // BX lr
}

// ROM Address: 0x08039440..0x08039448 (8 bytes, Thumb)
u32 sub_08039440(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xACU;
    r0 = (r0 << 12);
    r1 += 0x1C0U;
    return r0;
}

// ROM Address: 0x08039448..0x08039472 (42 bytes, Thumb)
u32 sub_08039448(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r1 + 0x30);
    r0 = 0x8U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803944E
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803946E;
    r2 = 0x200U; // (1 << 9)
loc_0803945A:
    r0 += 0x1U;
    r3 = r4 + r2;
    r1 = (r0 << 29);
    r1 = (r1 >> 29);
    r4 += 0x1C0U;
    *(u32*)(r3 + 0x4) = (u32)r1;
    r4 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803945A;
loc_0803946E:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08039472..0x08039476 (4 bytes, Thumb)
u32 sub_08039472(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030032B0U; // [0x08039478]
    return r0; // BX lr
}

// ROM Address: 0x08039480..0x08039562 (226 bytes, Thumb)
u32 sub_08039480(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r0 = 0x0600F800U; // [0x08039564]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08039488: BL 0x0804912C
    r2 = 0xF00U; // (15 << 8)
    r1 = 0x0U;
    r0 = 0x06009640U; // [0x08039568]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08039494: BL 0x0804912C
    r0 = 0x9U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x8U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x15U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0xDU;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r2 = 0x00000259U; // [0x0803956C]
    r1 = 0x0600F800U; // [0x08039564]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x080394AE
    r1 = 0x3FU;
    r0 = 0x4000000U; // (1 << 26)
    r1 = (r1 << 7);
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
    if (cmp_lhs == cmp_rhs) goto loc_080394E6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080394E2: BL __call_via_r3
loc_080394E6:
    return r0;
    r5 = r0;
    r2 = 0x28U;
    r1 = 0x60U;
    r0 = sp;
    r4 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080394F6
    r0 = r4;
    r0 = sub_08005096(r0, r1, r2, r3); // 0x080394FC
    r0 = 0x1U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    *(u8*)(r3 + 0x2) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x08039570]
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x0877AF30U; // [0x08039574]
    r0 = *(u32*)(r0);
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x30U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x14U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x2U;
    *(u8*)(r3 + 0x3) = (u8)r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08039578]
    r1 = *(u32*)(r0 + 0x20);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08039524
    r1 = r4;
    r0 = r5;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x0803952C
    r1 = 0x06009640U; // [0x08039568]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x08039534: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0803953C: BL 0x0803F58C
    return r0;
    r1 = r0;
    r1 += 0x100U;
    r2 = r0;
    r3 = *(u32*)(r1 + 0x20);
    r0 = 0x0877AF30U; // [0x08039574]
    r1 = *(u32*)(r1 + 0x14);
    r2 += 0x118U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08004962(r0, r1, r2, r3); // 0x0803955A
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803972E..0x0803973E (16 bytes, Thumb)
u32 sub_0803972E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08039730
    r0 = 0x2U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x08039736
    r0 = 0x0U;
    return sub_0803972C(r0, r1, r2, r3);
}

// ROM Address: 0x08039896..0x0803989A (4 bytes, Thumb)
u32 sub_08039896(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0803989A..0x080398A4 (10 bytes, Thumb)
u32 sub_0803989A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r5 = stack[216]; // [sp + 0x360]
    r4 = (r0 >> 32);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x080398A4..0x080398C0 (28 bytes, Thumb)
u32 sub_080398A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x99U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080398A8: BL 0x08000158
    r2 = r0;
    r0 = 0x0877AF4CU; // [0x080398C8]
    r1 = 0x5U;
    r0 = *(u32*)(r0);
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x080398B4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080398C0(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080398C0..0x080398C4 (4 bytes, Thumb)
u32 sub_080398C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_080398BE(r0, r1, r2, r3);
}

// ROM Address: 0x080398CA..0x080398DC (18 bytes, Thumb)
u32 sub_080398CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r6 >> 1);
    r2 += 0xB4U;
    r0 = (r0 << 12);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
}

// ROM Address: 0x080398DC..0x0803991E (66 bytes, Thumb)
u32 sub_080398DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u16*)(r1 + 0x12);
    r3 = 0x2U;
    r0 = (r2 >> 3);
    stack[1] = r0; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    stack[0] = r3; // [sp + 0x0]
    if (cmp_lhs >= cmp_rhs) goto loc_080398F2;
    r0 = 0x4; // sp + 0x4
    goto loc_080398F4;
loc_080398F2:
    r0 = sp;
loc_080398F4:
    r0 = *(u32*)(r0);
    r3 = (r0 << 24);
    r0 = r1;
    r0 += 0xFFU;
    r3 = (r3 >> 24);
    r0 += 0x61U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    *(u8*)(r1 + 0x11) = (u8)r3;
    if (cmp_lhs == cmp_rhs) return sub_08039924(r0, r1, r2, r3);
    r3 = (r2 << 2);
    r2 = r2 - r3;
    r2 += 0x18U;
    stack[1] = r2; // [sp + 0x4]
    r2 = 0xC7U;
    r2 = ~r2;
    r3 = stack[1]; // [sp + 0x4]
    stack[0] = r2; // [sp + 0x0]
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_0803991E(r0, r1, r2, r3);
    r2 = 0x4; // sp + 0x4
    return sub_08039920(r0, r1, r2, r3);
}

// ROM Address: 0x0803991E..0x08039994 (118 bytes, Thumb)
u32 sub_0803991E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = sp;
    r2 = *(u32*)(r2);
    *(u16*)(r0 + 0x16) = (u16)r2;
    r2 = 0xFFU;
    r2 += 0xF1U;
    r3 = *(u16*)(r0 + 0x16);
    r2 = *(u32*)(r2 + r1);
    r4 = 0xFFU;
    r4 += 0x77U;
    *(u16*)(r4 + r2) = (u16)r3;
    r2 += 0x1C0U;
    r3 = *(u16*)(r0 + 0x16);
    r2 = *(u32*)(r2 + 0x38);
    *(u16*)(r4 + r2) = (u16)r3;
    r2 += 0x1C0U;
    r2 = *(u32*)(r2 + 0x38);
    r0 = *(u16*)(r0 + 0x16);
    r2 += 0x160U;
    *(u16*)(r2 + 0x16) = (u16)r0;
    r0 = *(u16*)(r1 + 0x12);
    r0 += 0x1U;
    *(u16*)(r1 + 0x12) = (u16)r0;
    return r0; // BX lr
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r6 = 0x1U;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08039976;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08039968
    r1 = 0x030032B8U; // [0x08039994]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08039970
    *(u32*)(r5 + 0x4) = (u32)r6;
loc_08039976:
    r1 = *(u16*)(r4 + 0x12);
    r0 = r6;
    cmp_lhs = (s32)r1; cmp_rhs = 128;
    if ((u32)cmp_lhs > (u32)cmp_rhs) goto loc_08039980;
    r0 = 0x0U;
loc_08039980:
    return r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039986: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08039992;
    r1 = 0x0804B138U /* &VTable_0804B138 */; // [0x08039998]
    *(u32*)(r0) = (u32)r1;
loc_08039992:
    return r0;
}

// ROM Address: 0x080399A2..0x08039A16 (116 bytes, Thumb)
u32 sub_080399A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080399EE;
    r4 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080399EE;
    r1 = 0x9U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080399B4
    r1 = 0x030032BCU; // [0x080399F4]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080399BC
    r4 += 0x1C0U;
    r4 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080399EE;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080399D4: BL __call_via_r3
    r4 += 0x1C0U;
    r0 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080399EE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080399EA: BL __call_via_r3
loc_080399EE:
    r0 = 0x0U;
    return r0;
    r0 = r0;
    r2 += 0xBCU;
    r0 = (r0 << 12);
    r2 = 0x10U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r2 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    r2 = 0x2U;
    *(u8*)(r1 + 0x11) = (u8)r2;
    r2 = 0xC7U;
    r1 += 0x160U;
    r2 = ~r2;
    *(u16*)(r1 + 0x16) = (u16)r2;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x08039A16..0x08039B04 (238 bytes, Thumb)
u32 sub_08039A16(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0877AF98U; // [0x08039BCC]
    r6 = r1;
    r7 = 0x24; // sp + 0x24
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
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r0 = r6;
    r0 += 0x160U;
    r3 = 0x16U;
    r1 = (u32)(*(s16*)(r0 + r3));
    r7 -= 0x28U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08039A42;
    r1 += 0x3U;
    *(u16*)(r0 + 0x16) = (u16)r1;
loc_08039A42:
    r3 = 0x16U;
    r1 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08039A5E;
    r1 = 0x0U;
    *(u16*)(r0 + 0x16) = (u16)r1;
    r1 = *(u16*)(r6 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08039A58;
    r1 -= 0x1U;
    *(u16*)(r6 + 0x12) = (u16)r1;
loc_08039A58:
    r1 = *(u16*)(r6 + 0x12);
    r1 = (r1 >> 3);
    *(u8*)(r6 + 0x11) = (u8)r1;
loc_08039A5E:
    r1 = 0xFFU;
    r1 += 0xF1U;
    r2 = *(u16*)(r0 + 0x16);
    r1 = *(u32*)(r1 + r6);
    r3 = 0xFFU;
    r3 += 0x77U;
    *(u16*)(r3 + r1) = (u16)r2;
    r1 += 0x1C0U;
    r2 = *(u16*)(r0 + 0x16);
    r1 = *(u32*)(r1 + 0x38);
    *(u16*)(r3 + r1) = (u16)r2;
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x38);
    r0 = *(u16*)(r0 + 0x16);
    r1 += 0x160U;
    *(u16*)(r1 + 0x16) = (u16)r0;
    r0 = *(u16*)(r6 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08039B68(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08039B04(r0, r1, r2, r3);
    r1 = 0x1EU;
    r0 = 0x46U;
    r0 = sub_0800797C(r0, r1, r2, r3); // 0x08039A94
    r0 = 0x99U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08039A9A: BL 0x08000158
    r2 = r0;
    r0 = 0x0877AF98U; // [0x08039BCC]
    r1 = 0x5U;
    r0 -= 0x24U;
    r0 = *(u32*)(r0);
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x08039AA8
    r1 = 0x5U;
    r0 = r1 - r0;
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    *(u32*)(r4 + 0x8) = (u32)r0;
    if (cmp_lhs <= cmp_rhs) return sub_08039B6C(r0, r1, r2, r3);
    r6 = 0x400U; // (1 << 10)
loc_08039ABC:
    r0 = 0x0877AF98U; // [0x08039BCC]
    r0 -= 0x24U;
    r0 = *(u32*)(r0);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08039AC2
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_08039AFA;
    r7 = 0x1000U; // (1 << 12)
    r0 = r7;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08039AD0
    r0 = r0 + r7;
    stack[0] = r0; // [sp + 0x0]
    r2 = 0x37U;
    r0 = (r5 << 3);
    r7 = 0x24; // sp + 0x24
    r1 = r0 + r7;
    stack[2] = r2; // [sp + 0x8]
    r3 = 0x4U;
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x08039BD0]
    stack[1] = r6; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08039AEA
    r1 = r0;
    r0 = 0x0877AF98U; // [0x08039BCC]
    r0 -= 0x24U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08039AF6: BL 0x0801191A
loc_08039AFA:
    r0 = *(u32*)(r4 + 0x8);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08039ABC;
    return sub_08039B6C(r0, r1, r2, r3);
}

// ROM Address: 0x08039B04..0x08039B6C (104 bytes, Thumb)
u32 sub_08039B04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_08039B6C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x8);
    r5 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08039B5A;
loc_08039B10:
    r1 = 0x0877AF98U; // [0x08039BCC]
    r2 = 0x20U;
    r7 = 0x4; // sp + 0x4
    r1 -= 0x20U;
    r0 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08039B1A: BL 0x08049138
    r0 = (r5 << 3);
    r2 = 0x24; // sp + 0x24
    r1 = *(u32*)(r2 + r0);
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x10) = (u16)r1;
    r0 = r0 + r2;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x08039BD4]
    *(u16*)(r3 + 0x12) = (u16)r0;
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r7;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x08039B42
    r1 = r0;
    r0 = 0x0877AF98U; // [0x08039BCC]
    r0 -= 0x24U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08039B4E: BL 0x0801191A
    r0 = *(u32*)(r4 + 0x8);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08039B10;
loc_08039B5A:
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08039B64: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08039B6C..0x08039BB4 (72 bytes, Thumb)
u32 sub_08039B6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    return sub_08039B68(r0, r1, r2, r3);
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r7 = 0x1U;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08039BA4;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039B84: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08039B90;
    r1 = 0x0804D3C8U /* &VTable_0804D3C8 */; // [0x08039BD8]
    *(u32*)(r0) = (u32)r1;
loc_08039B90:
    r6 = r0;
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08039B96
    r1 = r6;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08039B9E
    *(u32*)(r5 + 0x4) = (u32)r7;
loc_08039BA4:
    r0 = *(u32*)(r4 + 0x58);
    r0 += 0x4CU;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r4 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08039BB4(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08039BB6(r0, r1, r2, r3);
}

// ROM Address: 0x08039BB4..0x08039BCC (24 bytes, Thumb)
u32 sub_08039BB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = r7 - r0;
    return r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039BBE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08039BCA;
    r1 = 0x0804BD58U /* &VTable_0804BD58 */; // [0x08039BDC]
    *(u32*)(r0) = (u32)r1;
loc_08039BCA:
    return r0;
}

// ROM Address: 0x08039BCC..0x08039BCE (2 bytes, Thumb)
u32 sub_08039BCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x260; // sp + 0x260
    return r0;
}

// ROM Address: 0x08039BCE..0x08039BF8 (42 bytes, Thumb)
u32 sub_08039BCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r6 >> 1);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08039B74(r0, r1, r2, r3);
    r7 = (r5 >> 1);
    r4 = ((u32)((s32)r6 >> 9));
    r1 = (r6 >> 1);
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08039B6C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return r0;
    r4 = (r0 >> 32);
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08039BEC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08039BF8(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08039BF8..0x08039BFC (4 bytes, Thumb)
u32 sub_08039BF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08039BF6(r0, r1, r2, r3);
}

// ROM Address: 0x08039BFC..0x08039C0E (18 bytes, Thumb)
u32 sub_08039BFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039C00: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08039C0C;
    r1 = 0x0804BD10U /* &VTable_0804BD10 */; // [0x08039C10]
    *(u32*)(r0) = (u32)r1;
loc_08039C0C:
    return r0;
}

// ROM Address: 0x08039C0E..0x08039C12 (4 bytes, Thumb)
u32 sub_08039C0E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0;
}

// ROM Address: 0x08039C14..0x08039D7A (358 bytes, Thumb)
u32 sub_08039C14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x24; // sp + 0x24
    r4 = r1;
    r1 = r0;
    r2 = 0x8U;
    r1 += 0x18U;
    r3 = 0x08050751U /* &sub_08050750 */; // [0x08039D80]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08039C24: BL 0x08046FF4
    r0 = 0xFFFFF000U; // [0x08039D84]
    r1 = r4;
    r1 += 0x1A0U;
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r0; // [sp + 0x18]
    r2 = *(u32*)(r1);
    r5 = *(u32*)(r1 + 0x4);
    r3 = r2 + r0;
    stack[3] = r3; // [sp + 0xC]
    stack[7] = r3; // [sp + 0x1C]
    stack[9] = r3; // [sp + 0x24]
    r5 = r5 + r0;
    r3 = 0x3000U; // (3 << 12)
    stack[5] = r3; // [sp + 0x14]
    stack[4] = r5; // [sp + 0x10]
    stack[8] = r5; // [sp + 0x20]
    stack[10] = r5; // [sp + 0x28]
    stack[6] = r0; // [sp + 0x18]
    r5 = *(u32*)(r1);
    r2 = r1 + 4;
    r3 = r5 + r3;
    r5 = *(u32*)(r2);
    stack[3] = r3; // [sp + 0xC]
    r0 = r5 + r0;
    stack[4] = r0; // [sp + 0x10]
    r0 = r3;
    r3 = stack[4]; // [sp + 0x10]
    stack[7] = r0; // [sp + 0x1C]
    stack[11] = r0; // [sp + 0x2C]
    stack[8] = r3; // [sp + 0x20]
    stack[12] = r3; // [sp + 0x30]
    r3 = 0xFFFFD800U; // [0x08039D88]
    r0 = 0x1000U; // (1 << 12)
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r3; // [sp + 0x18]
    r1 = *(u32*)(r1);
    r7 = 0x4; // sp + 0x4
    r0 = r1 + r0;
    r1 = *(u32*)(r2);
    stack[3] = r0; // [sp + 0xC]
    r1 = r1 + r3;
    stack[4] = r1; // [sp + 0x10]
    stack[8] = r1; // [sp + 0x20]
    stack[14] = r1; // [sp + 0x38]
    stack[7] = r0; // [sp + 0x1C]
    stack[13] = r0; // [sp + 0x34]
    r2 = 0x20U;
    r0 = r7;
    r1 = 0x0877AFDCU; // [0x08039D8C]
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08039C90: BL 0x08049138
    r0 = stack[9]; // [sp + 0x24]
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x10) = (u16)r0;
    r0 = stack[10]; // [sp + 0x28]
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x08039D90]
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x12) = (u16)r0;
    r0 = stack[3]; // [sp + 0xC]
    r6 = 0x0U;
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r6 = ~r6;
    r3 = r6;
    r2 = r0 + r1;
    r1 = r7;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x08039CB8
    r5 = r0;
    r1 = r0;
    r0 = 0x0877AFDCU; // [0x08039D8C]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08039CC6: BL 0x0801191A
    r1 = 0x0877AFDCU; // [0x08039D8C]
    r2 = 0x20U;
    r1 += 0x20U;
    r0 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08039CD2: BL 0x08049138
    r0 = stack[11]; // [sp + 0x2C]
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x10) = (u16)r0;
    r0 = stack[12]; // [sp + 0x30]
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x08039D90]
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x12) = (u16)r0;
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = r6;
    r1 = r7;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x08039CF6
    r6 = r0;
    r1 = r0;
    r0 = 0x0877AFDCU; // [0x08039D8C]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08039D04: BL 0x0801191A
    r1 = 0x0877AFDCU; // [0x08039D8C]
    r2 = 0x20U;
    r1 += 0x40U;
    r0 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08039D10: BL 0x08049138
    r0 = stack[13]; // [sp + 0x34]
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x10) = (u16)r0;
    r0 = stack[14]; // [sp + 0x38]
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x08039D90]
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0x12) = (u16)r0;
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r7;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x08039D36
    r7 = r0;
    r1 = r0;
    r0 = 0x0877AFDCU; // [0x08039D8C]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08039D44: BL 0x0801191A
    r1 = *(u8*)(r7 + 0x8);
    r2 = r7;
    r2 += 0xFFU;
    r1 += 0xFFU;
    *(u8*)(r7 + 0x8) = (u8)r1;
    r0 = r5;
    r0 += 0xFFU;
    r1 = r6;
    r2 += 0xC1U;
    *(u32*)(r2 + 0x34) = (u32)r4;
    r1 += 0xFFU;
    r0 += 0xC1U;
    *(u32*)(r0 + 0x34) = (u32)r4;
    r1 += 0xC1U;
    *(u32*)(r1 + 0x34) = (u32)r4;
    r4 += 0x1C0U;
    *(u32*)(r4 + 0x30) = (u32)r7;
    *(u32*)(r2 + 0x38) = (u32)r5;
    r0 += 0x38U;
    *(u32*)r0 = r6; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    *(u32*)(r1 + 0x3C) = (u32)r5;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08039D7A..0x08039D7E (4 bytes, Thumb)
u32 sub_08039D7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030032C4U; // [0x08039D94]
    return r0; // BX lr
}

// ROM Address: 0x08039D98..0x08039DB6 (30 bytes, Thumb)
u32 sub_08039D98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08039DB6(r0, r1, r2, r3);
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039DA8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08039DB6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08039DB6..0x08039EB8 (258 bytes, Thumb)
u32 sub_08039DB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804A800U /* &VTable_0804A800 */; // [0x08039F10]
    r3 = 0x4U;
    *(u32*)(r4) = (u32)r0;
    r2 = *(u16*)(r5 + 0x4);
    r0 = 0xFFU;
    r0 += 0xA1U;
    *(u16*)(r4 + 0x4) = (u16)r2;
    r2 = *(u16*)(r5 + 0x6);
    *(u16*)(r4 + 0x6) = (u16)r2;
    r1 = *(u16*)(r5 + 0x8);
    *(u16*)(r4 + 0x8) = (u16)r1;
    r0 = *(u32*)(r0 + r6);
    r1 = (u32)(*(s16*)(r5 + r3));
    r0 = ((u32)((s32)r0 >> 8));
    r3 = 0x6U;
    r0 = r1 - r0;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0xFFU;
    r0 += 0xA5U;
    r0 = *(u32*)(r0 + r6);
    r1 = (u32)(*(s16*)(r5 + r3));
    r0 = ((u32)((s32)r0 >> 8));
    r3 = 0x8U;
    r0 = r1 - r0;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0xFFU;
    r0 += 0xA9U;
    r0 = *(u32*)(r0 + r6);
    r1 = (u32)(*(s16*)(r5 + r3));
    r0 = ((u32)((s32)r0 >> 10));
    r2 = stack[4]; // [sp + 0x10]
    r0 = r1 - r0;
    stack[6] = r0; // [sp + 0x18]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08039DFE;
    r2 = (u32)(-(s32)r2);
loc_08039DFE:
    r1 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08039E06;
    r1 = (u32)(-(s32)r1);
loc_08039E06:
    r0 = stack[6]; // [sp + 0x18]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08039E0E;
    r0 = (u32)(-(s32)r0);
loc_08039E0E:
    stack[2] = r1; // [sp + 0x8]
    stack[1] = r2; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r3 = 0x4; // sp + 0x4
    r7 = 0x8; // sp + 0x8
    r2 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r1 = r3;
    r1 += 0x8U;
    r0 = r3 + 4;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs > cmp_rhs) goto loc_08039E26;
    r0 = r1;
loc_08039E26:
    r1 = stack[1]; // [sp + 0x4]
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08039E30;
    r0 = r3;
loc_08039E30:
    r0 = *(u32*)(r0);
    r1 = (r0 << 8);
    r0 = *(u16*)(r5 + 0xA);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08039E36: BL 0x08046E58
    r5 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08039E4A;
    r0 = 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    return sub_08039DB2(r0, r1, r2, r3);
loc_08039E4A:
    r0 = stack[4]; // [sp + 0x10]
    r1 = (r0 << 8);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08039E50: BL 0x08046E58
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = stack[5]; // [sp + 0x14]
    r1 = (r0 << 8);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08039E5C: BL 0x08046E58
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = stack[6]; // [sp + 0x18]
    r1 = (r0 << 10);
    r0 = r5;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08039E68: BL 0x08046E58
    r1 = r6;
    r1 += 0xFFU;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r1 += 0xADU;
    stack[0] = r1; // [sp + 0x0]
    r0 = stack[5]; // [sp + 0x14]
    r0 = sub_08054ADC(r0, r1, r2, r3); // 0x08039E78: BL 0x08054ADC
    r5 = r0;
    r0 = stack[4]; // [sp + 0x10]
    r0 = sub_08054ADC(r0, r1, r2, r3); // 0x08039E80: BL 0x08054ADC
    r0 = sub_080549B4(r0, r1, r2, r3); // 0x08039E84
    r6 = r0;
    r7 = r1;
    r0 = r5;
    r0 = sub_080549B4(r0, r1, r2, r3); // 0x08039E8E
    r3 = r7;
    r2 = r6;
    r0 = sub_080491A0(r0, r1, r2, r3); // 0x08039E96: BL 0x080491A0
    r0 = sub_080532E8(r0, r1, r2, r3); // 0x08039E9A: BL 0x080532E8
    r1 = 0x3E22F984U; // [0x08039F14]
    r0 = sub_08054B3C(r0, r1, r2, r3); // 0x08039EA0: BL 0x08054B3C
    r1 = 0x44800000U; // (137 << 23)
    r0 = sub_08054B3C(r0, r1, r2, r3); // 0x08039EA8: BL 0x08054B3C
    r0 = sub_08054A64(r0, r1, r2, r3); // 0x08039EAC: BL 0x08054A64
    r1 = stack[0]; // [sp + 0x0]
    *(u32*)(r1) = (u32)r0;
    r0 = r4;
    return sub_08039DB2(r0, r1, r2, r3);
}

// ROM Address: 0x08039EB8..0x08039EEC (52 bytes, Thumb)
u32 sub_08039EB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r3 = *(u32*)(r0 + 0x18);
    r2 += 0xFFU;
    r1 += 0xFFU;
    r3 -= 0x1U;
    r1 += 0xA1U;
    r2 += 0xA9U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    *(u32*)(r0 + 0x18) = (u32)r3;
    if (cmp_lhs != cmp_rhs) return sub_08039EEC(r0, r1, r2, r3);
    r3 = 0x4U;
    r4 = (u32)(*(s16*)(r0 + r3));
    r3 = 0x6U;
    r5 = (u32)(*(s16*)(r0 + r3));
    r4 = (r4 << 8);
    *(u32*)r1 = r4; r1 += 4;
    r3 = (r5 << 8);
    *(u32*)(r1) = (u32)r3;
    r3 = 0x8U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r0 = (r0 << 10);
    *(u32*)(r2) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08039EEC..0x08039F08 (28 bytes, Thumb)
u32 sub_08039EEC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r1);
    r5 = *(u32*)(r0 + 0xC);
    r4 = r4 + r5;
    *(u32*)(r1) = (u32)r4;
    r4 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x10);
    r3 = r4 + r3;
    *(u32*)(r1 + 0x4) = (u32)r3;
    r1 = *(u32*)(r2);
    r0 = *(u32*)(r0 + 0x14);
    r0 = r1 + r0;
    *(u32*)(r2) = (u32)r0;
    r0 = 0x0U;
    return sub_08039EE8(r0, r1, r2, r3);
}

// ROM Address: 0x08039F18..0x08039F62 (74 bytes, Thumb)
u32 sub_08039F18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08039F2A;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08039F22: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08039F4C;
loc_08039F2A:
    r1 = 0x0804ABC8U /* &VTable_0804ABC8 */; // [0x0803A084]
    r3 = 0x4U;
    *(u32*)(r0) = (u32)r1;
    r1 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x6U;
    r2 = (u32)(*(s16*)(r4 + r3));
    *(u32*)(r0 + 0x4) = (u32)r1;
    r3 = 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    r1 = (u32)(*(s16*)(r4 + r3));
    r2 = r1;
    r2 += 0x180U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = r2;
    r1 *= r2;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_08039F4C:
    return r0;
    r6 = r0;
    r0 = 0x03001C34U; // [0x0803A088]
    r7 = r1;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08039F62(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08039F62..0x0803A052 (240 bytes, Thumb)
u32 sub_08039F62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0xA9U;
    r2 = r1;
    r2 = *(u32*)(r2 + r0);
    r0 += 0x1A0U;
    *(u32*)(r1 + r7) = r2;
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
    r1 = *(u32*)(r6 + 0x4);
    r0 = r0 - r1;
    r1 = stack[3]; // [sp + 0xC]
    r2 = *(u32*)(r6 + 0x8);
    stack[0] = r0; // [sp + 0x0]
    r1 = r1 - r2;
    stack[1] = r1; // [sp + 0x4]
    r5 = r1;
    r1 = r0;
    r4 = r0;
    r0 *= r1;
    r1 = r5;
    r1 *= r5;
    r0 = r0 + r1;
    r0 = sub_0803FAF6(r0, r1, r2, r3); // 0x08039FA0: BL 0x0803FAF6
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u32*)(r6 + 0xC);
    r1 = r4;
    r1 *= r0;
    r2 = r5;
    r2 *= r0;
    stack[4] = r2; // [sp + 0x10]
    stack[2] = r2; // [sp + 0x8]
    r0 = stack[3]; // [sp + 0xC]
    stack[1] = r1; // [sp + 0x4]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08039FB8: BL 0x08046E58
    stack[0] = r0; // [sp + 0x0]
    r1 = 0xC; // sp + 0xC
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08039FC2: BL 0x08046E58
    r1 = stack[0]; // [sp + 0x0]
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    r2 = *(u32*)(r6 + 0x4);
    r0 = r2 + r0;
    r2 = *(u32*)(r6 + 0x8);
    stack[1] = r0; // [sp + 0x4]
    r1 = r2 + r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = r0;
    r0 = r7;
    r0 += 0xFFU;
    r2 = stack[2]; // [sp + 0x8]
    r0 += 0xA1U;
    r1 = (r1 << 8);
    *(u32*)r0 = r1; r0 += 4;
    r2 = (r2 << 8);
    r1 = r4;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    *(u32*)(r0) = (u32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08039FF6;
    r1 = (u32)(-(s32)r1);
loc_08039FF6:
    r0 = r5;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08039FFE;
    r0 = (u32)(-(s32)r0);
loc_08039FFE:
    r2 = r7;
    r2 += 0x180U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A02C;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A01C;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A016;
    r0 = 0x50U;
    *(u32*)(r2 + 0x2C) = (u32)r0;
    goto loc_0803A04E;
loc_0803A016:
    r0 = 0x30U;
    *(u32*)(r2 + 0x2C) = (u32)r0;
    goto loc_0803A04E;
loc_0803A01C:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A026;
    r0 = 0xB0U;
    *(u32*)(r2 + 0x2C) = (u32)r0;
    goto loc_0803A04E;
loc_0803A026:
    r0 = 0xD0U;
    *(u32*)(r2 + 0x2C) = (u32)r0;
    goto loc_0803A04E;
loc_0803A02C:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A040;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A03A;
    r0 = 0x70U;
    *(u32*)(r2 + 0x2C) = (u32)r0;
    goto loc_0803A04E;
loc_0803A03A:
    r0 = 0x90U;
    *(u32*)(r2 + 0x2C) = (u32)r0;
    goto loc_0803A04E;
loc_0803A040:
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A04A;
    r0 = 0x10U;
    *(u32*)(r2 + 0x2C) = (u32)r0;
    goto loc_0803A04E;
loc_0803A04A:
    r0 = 0xF0U;
    *(u32*)(r2 + 0x2C) = (u32)r0;
loc_0803A04E:
    r0 = 0x0U;
    return sub_08039F5E(r0, r1, r2, r3);
}

// ROM Address: 0x0803A052..0x0803A084 (50 bytes, Thumb)
u32 sub_0803A052(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A058: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A082;
    r1 = 0x0804ABC8U /* &VTable_0804ABC8 */; // [0x0803A084]
    r3 = 0x4U;
    *(u32*)(r0) = (u32)r1;
    r1 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x6U;
    r2 = (u32)(*(s16*)(r4 + r3));
    *(u32*)(r0 + 0x4) = (u32)r1;
    r3 = 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    r1 = (u32)(*(s16*)(r4 + r3));
    r2 = r1;
    r2 += 0x180U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = r2;
    r1 *= r2;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_0803A082:
    return r0;
}

// ROM Address: 0x0803A084..0x0803A086 (2 bytes, Thumb)
u32 sub_0803A084(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x320; // sp + 0x320
    return r0;
}

// ROM Address: 0x0803A086..0x0803A266 (480 bytes, Thumb)
u32 sub_0803A086(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r3 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    *(u8*)(r1 + 0x11) = (u8)r2;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    r1 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803A116;
    r0 -= 0x10U;
    cmp_lhs = (s32)r0; cmp_rhs = 40;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0803A116;
    r6 = sp;
    r1 = r4;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803A0BE
    stack[8] = r4; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x0; // sp + 0x0
    r7 = 0x0U;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8098U; // [0x0803A370]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    *(u8*)(r3) = (u8)r7;
    r0 = 0x03001C34U; // [0x0803A374]
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r6;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A0E8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A116;
    r0 = 0x0877B048U; // [0x0803A378]
    r6 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803A0F6
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0803A37C]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x0803A380]
    r3 = r7;
    r2 = 0x40U;
    r0 = r6 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0803A10E
    r0 = 0x1U;
    *(u32*)(r5 + 0x4) = (u32)r0;
loc_0803A116:
    r0 = *(u16*)(r4 + 0x12);
    r0 = (r0 << 21);
    r0 = (r0 >> 24);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4 + 0x50);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803A134;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A130: BL __call_via_r3
loc_0803A134:
    return r0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r3 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    *(u8*)(r1 + 0x11) = (u8)r2;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A166;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A158: BL __call_via_r3
    r0 = 0x0877B048U; // [0x0803A378]
    r1 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803A162
loc_0803A166:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803A168: BL 0x0803D63C
    return r0;
    r0 = 0x03001C34U; // [0x0803A374]
    r0 = *(u32*)(r0);
    r1 = 0x400U; // (1 << 10)
    r2 = 0x0U;
    r0 += 0x1A0U;
    stack[5] = r2; // [sp + 0x14]
    stack[4] = r1; // [sp + 0x10]
    r2 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = r2 + r1;
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[3]; // [sp + 0xC]
    stack[6] = r0; // [sp + 0x18]
    stack[7] = r1; // [sp + 0x1C]
    stack[9] = r1; // [sp + 0x24]
    r1 = 0x0877B048U; // [0x0803A378]
    stack[8] = r0; // [sp + 0x20]
    r2 = 0x20U;
    r1 += 0x8U;
    r0 = sp;
    r4 = sp;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803A1A4: BL 0x08049138
    r0 = stack[8]; // [sp + 0x20]
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xC) = (u16)r0;
    r0 = stack[9]; // [sp + 0x24]
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x0803A384]
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xE) = (u16)r0;
    r0 = stack[2]; // [sp + 0x8]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0803A1CA
    r4 = r0;
    r1 = r0;
    r0 = 0x0877B048U; // [0x0803A378]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803A1D6: BL 0x0801191A
    r0 = r4;
    return r0;
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0803A222;
    r0 = r5;
    r0 = sub_0803A16E(r0, r1, r2, r3); // 0x0803A1F6
    r1 = 0x2U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    *(u8*)(r0 + 0x10) = (u8)r1;
    r6 = *(u32*)(r5 + 0x4);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A204: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A210;
    r1 = 0x0804C338U /* &VTable_0804C338 */; // [0x0803A388]
    *(u32*)(r0) = (u32)r1;
loc_0803A210:
    r7 = r0;
    r1 = 0x13U;
    r0 = r6;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803A216
    r1 = r7;
    r0 = r6;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803A21E
loc_0803A222:
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A246;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A230: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A246;
    r0 = 0x0877B048U; // [0x0803A378]
    r1 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803A23E
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
loc_0803A246:
    r0 = *(u16*)(r4 + 0x12);
    r0 = (r0 << 21);
    r0 = (r0 >> 24);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4 + 0x50);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803A264;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A260: BL __call_via_r3
loc_0803A264:
    return r0;
}

// ROM Address: 0x0803A266..0x0803A2AE (72 bytes, Thumb)
u32 sub_0803A266(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x30);
    r6 = 0x1U;
    r1 += 0x1C0U;
    r4 = *(u32*)(r1 + 0x38);
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803A29E;
    *(u32*)(r0 + 0x4) = (u32)r6;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A280: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A28C;
    r1 = 0x0804D738U /* &VTable_0804D738 */; // [0x0803A38C]
    *(u32*)(r0) = (u32)r1;
loc_0803A28C:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803A292
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803A29A
loc_0803A29E:
    r0 = *(u32*)(r4 + 0x58);
    r0 += 0x48U;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r4 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0803A2AE(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0803A2B0(r0, r1, r2, r3);
}

// ROM Address: 0x0803A2AE..0x0803A2B4 (6 bytes, Thumb)
u32 sub_0803A2AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = r6 - r0;
    return r0;
}

// ROM Address: 0x0803A2B4..0x0803A2B6 (2 bytes, Thumb)
u32 sub_0803A2B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803A2B6..0x0803A41E (360 bytes, Thumb)
u32 sub_0803A2B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A2BA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A2C6;
    r1 = 0x0804C194U /* &VTable_0804C194 */; // [0x0803A390]
    *(u32*)(r0) = (u32)r1;
loc_0803A2C6:
    return r0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r3 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r3;
    *(u8*)(r1 + 0x11) = (u8)r2;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A2F6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A2E8: BL __call_via_r3
    r0 = 0x0877B048U; // [0x0803A378]
    r1 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803A2F2
loc_0803A2F6:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0803A2F8: BL 0x0803D63C
    return r0;
    r0 = 0x03001C34U; // [0x0803A374]
    r0 = *(u32*)(r0);
    r1 = 0xFFFFEC00U; // [0x0803A394]
    r2 = 0x0U;
    r0 += 0x1A0U;
    stack[5] = r2; // [sp + 0x14]
    stack[4] = r1; // [sp + 0x10]
    r2 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = r2 + r1;
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[3]; // [sp + 0xC]
    stack[6] = r0; // [sp + 0x18]
    stack[7] = r1; // [sp + 0x1C]
    stack[9] = r1; // [sp + 0x24]
    r1 = 0x0877B048U; // [0x0803A378]
    stack[8] = r0; // [sp + 0x20]
    r2 = 0x20U;
    r1 += 0x8U;
    r0 = sp;
    r4 = sp;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803A332: BL 0x08049138
    r0 = stack[8]; // [sp + 0x20]
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xC) = (u16)r0;
    r0 = stack[9]; // [sp + 0x24]
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x0803A384]
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xE) = (u16)r0;
    r0 = stack[2]; // [sp + 0x8]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0803A358
    r4 = r0;
    r1 = r0;
    r0 = 0x0877B048U; // [0x0803A378]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803A364: BL 0x0801191A
    r0 = r4;
    return r0;
    r0 = r0;
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r7 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = ((u32)((s32)r6 >> 9));
    r1 = (r6 >> 1);
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r5; r3 += 4;
    r4 = (r0 >> 32);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803A400;
    r4 = (r0 >> 32);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r4; r1 += 4;
    *(u32*)r1 = r7; r1 += 4;
    r4 = (r0 >> 32);
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0803A3DA;
    r0 = r5;
    r0 = sub_0803A2FE(r0, r1, r2, r3); // 0x0803A3AE
    r1 = 0x3U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    *(u8*)(r0 + 0x10) = (u8)r1;
    r6 = *(u32*)(r5 + 0x4);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A3BC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A3C8;
    r1 = 0x0804C338U /* &VTable_0804C338 */; // [0x0803A488]
    *(u32*)(r0) = (u32)r1;
loc_0803A3C8:
    r7 = r0;
    r1 = 0x12U;
    r0 = r6;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803A3CE
    r1 = r7;
    r0 = r6;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803A3D6
loc_0803A3DA:
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A3FE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A3E8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A3FE;
    r0 = 0x0877B048U; // [0x0803A48C]
    r1 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803A3F6
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
loc_0803A3FE:
    r0 = *(u16*)(r4 + 0x12);
loc_0803A400:
    r0 = (r0 << 21);
    r0 = (r0 >> 24);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r1 = *(u32*)(r4 + 0x50);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0803A41C;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A418: BL __call_via_r3
loc_0803A41C:
    return r0;
}

// ROM Address: 0x0803A41E..0x0803A46C (78 bytes, Thumb)
u32 sub_0803A41E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x30);
    r6 = 0x1U;
    r1 += 0x1C0U;
    r1 = *(u32*)(r1 + 0x38);
    r1 += 0x1C0U;
    r4 = *(u32*)(r1 + 0x38);
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803A45C;
    *(u32*)(r0 + 0x4) = (u32)r6;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A43E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A44A;
    r1 = 0x0804D98CU /* &VTable_0804D98C */; // [0x0803A490]
    *(u32*)(r0) = (u32)r1;
loc_0803A44A:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803A450
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803A458
loc_0803A45C:
    r0 = *(u32*)(r4 + 0x58);
    r0 += 0x48U;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r4 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0803A46C(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0803A46E(r0, r1, r2, r3);
}

// ROM Address: 0x0803A46C..0x0803A472 (6 bytes, Thumb)
u32 sub_0803A46C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = r6 - r0;
    return r0;
}

// ROM Address: 0x0803A472..0x0803A474 (2 bytes, Thumb)
u32 sub_0803A472(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x0803A474..0x0803A4C6 (82 bytes, Thumb)
u32 sub_0803A474(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A478: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A484;
    r1 = 0x0804C630U /* &VTable_0804C630 */; // [0x0803A494]
    *(u32*)(r0) = (u32)r1;
loc_0803A484:
    return r0;
    r0 = r0;
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r5; r3 += 4;
    r4 = (r0 >> 32);
    r7 = (r6 >> 1);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0803A3AC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u32*)r6 = r4; r6 += 4;
    *(u32*)r6 = r5; r6 += 4;
    r4 = (r0 >> 32);
    r0 = *(u32*)(r1 + 0x50);
    r2 = *(u32*)(r0);
    r2 = (r2 << 3);
    r2 -= 0x1U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r2 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r2;
    r0 = *(u32*)(r0);
    r0 += 0xFFU;
    *(u8*)(r1 + 0x11) = (u8)r0;
    return r0; // BX lr
    r0 = r1;
    r1 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803A4C6(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A4C0: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0803A4C6..0x0803A4D0 (10 bytes, Thumb)
u32 sub_0803A4C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 -= 0x1U;
    *(u16*)(r0 + 0x12) = (u16)r1;
    r1 = (r1 >> 3);
    *(u8*)(r0 + 0x11) = (u8)r1;
    return sub_0803A4C4(r0, r1, r2, r3);
}

// ROM Address: 0x0803A50A..0x0803A552 (72 bytes, Thumb)
u32 sub_0803A50A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = r5 - r0;
    return r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A514: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A520;
    r1 = 0x0804AB14U /* &VTable_0804AB14 */; // [0x0803A528]
    *(u32*)(r0) = (u32)r1;
loc_0803A520:
    return r0;
    r0 = r0;
    r2 += 0xC8U;
    r0 = (r0 << 12);
    r3 = 0x50; // sp + 0x50
    r4 = (r0 >> 32);
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
    r1 = (r1 >> 3);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_0803A552(r0, r1, r2, r3);
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803A54C: BL 0x0800EE78
    return r0;
}

// ROM Address: 0x0803A552..0x0803A556 (4 bytes, Thumb)
u32 sub_0803A552(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r0 + 0x11) = (u8)r1;
    return sub_0803A550(r0, r1, r2, r3);
}

// ROM Address: 0x0803A556..0x0803A5D6 (128 bytes, Thumb)
u32 sub_0803A556(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r5 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r6 = 0x030032CCU; // [0x0803A598]
    if (cmp_lhs != cmp_rhs) goto loc_0803A576;
    r1 = 0x13U;
    *(u32*)(r0 + 0x4) = (u32)r5;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803A56A
    r1 = r6;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803A572
loc_0803A576:
    r1 = *(u32*)(r4 + 0x14);
    r0 = r5;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) goto loc_0803A580;
    r0 = 0x0U;
loc_0803A580:
    r0 = r5 - r0;
    return r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A588: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A594;
    r1 = 0x0804C22CU /* &VTable_0804C22C */; // [0x0803A59C]
    *(u32*)(r0) = (u32)r1;
loc_0803A594:
    return r0;
    r0 = r0;
    r2 += 0xCCU;
    r0 = (r0 << 12);
    *(u32*)r2 = r2; r2 += 4;
    *(u32*)r2 = r3; r2 += 4;
    *(u32*)r2 = r5; r2 += 4;
    r4 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    r1 = *(u32*)(r1 + 0x50);
    r0 = (r0 >> 3);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0803A5D6(r0, r1, r2, r3);
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803A5C8
    r1 = 0x03001B20U; // [0x0803A62C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803A5D0
    return r0;
}

// ROM Address: 0x0803A5D6..0x0803A5DA (4 bytes, Thumb)
u32 sub_0803A5D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x0803A5DA..0x0803A614 (58 bytes, Thumb)
u32 sub_0803A5DA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r5 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803A5F8;
    r1 = 0x12U;
    *(u32*)(r0 + 0x4) = (u32)r5;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0803A5EC
    r1 = 0x030032D0U; // [0x0803A630]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803A5F4
loc_0803A5F8:
    r0 = r4;
    r0 += 0x1A4U;
    r1 = *(u32*)(r0);
    r1 -= 0x80U;
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r4 + 0x58);
    r0 += 0x48U;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r4 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0803A614(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0803A616(r0, r1, r2, r3);
}

// ROM Address: 0x0803A614..0x0803A62C (24 bytes, Thumb)
u32 sub_0803A614(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r0 = r5 - r0;
    return r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A61E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A62A;
    r1 = 0x0804A168U /* &VTable_0804A168 */; // [0x0803A634]
    *(u32*)(r0) = (u32)r1;
loc_0803A62A:
    return r0;
}

// ROM Address: 0x0803A62C..0x0803A638 (12 bytes, Thumb)
u32 sub_0803A62C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4 - r4;
    r0 = (r0 << 12);
    r2 += 0xD0U;
    r0 = (r0 << 12);
    r1 = 0x0803A7D8U;
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0803A638..0x0803A68E (86 bytes, Thumb)
u32 sub_0803A638(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x0877B0D0U; // [0x0803A694]
    r6 = 0x0877B0D0U; // [0x0803A694]
    r4 = 0x0U;
    r7 -= 0x20U;
    r5 = 0x4; // sp + 0x4
loc_0803A646:
    r2 = 0x20U;
    r1 = r7;
    r0 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803A64C: BL 0x08049138
    r0 = (r4 << 3);
    r1 = *(u32*)(r6 + r0);
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x10) = (u16)r1;
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x0803A698]
    *(u16*)(r3 + 0x12) = (u16)r0;
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 2);
    r2 = r0 + r1;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0803A672
    r1 = r0;
    r0 = 0x0877B0D0U; // [0x0803A694]
    r0 -= 0x24U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803A67E: BL 0x0801191A
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 5;
    if (cmp_lhs < cmp_rhs) goto loc_0803A646;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803A68E..0x0803A692 (4 bytes, Thumb)
u32 sub_0803A68E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030032D4U; // [0x0803A69C]
    return r0; // BX lr
}

// ROM Address: 0x0803A692..0x0803A6D8 (70 bytes, Thumb)
u32 sub_0803A692(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r7 = (r6 >> 1);
    r4 = ((u32)((s32)r6 >> 9));
    r1 = (r6 >> 1);
    r2 += 0xD4U;
    r0 = (r0 << 12);
    r6 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r1 = (r0 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r1;
    r2 = *(u32*)(r4 + 0x50);
    r0 = (r1 >> 3);
    r2 = *(u32*)(r2);
    r3 = (r2 << 3);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_0803A71E(r0, r1, r2, r3);
    r5 = 0x0877B104U; // [0x0803A790]
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0803A6C2
    r1 = 0x600U; // (3 << 9)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0803A6D8(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803A6D0: BL 0x0800EE78
    return r0;
}

// ROM Address: 0x0803A6D8..0x0803A736 (94 bytes, Thumb)
u32 sub_0803A6D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r0;
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
    r1 = r0;
    r0 = stack[3]; // [sp + 0xC]
    r1 += 0x20U;
    r0 -= 0x10U;
    stack[1] = r0; // [sp + 0x4]
    stack[5] = r0; // [sp + 0x14]
    r2 = r4;
    stack[0] = r1; // [sp + 0x0]
    stack[4] = r1; // [sp + 0x10]
    r3 = 0x2U;
    r0 = 0x0U;
    r1 = 0x10; // sp + 0x10
    r0 = sub_08036FA2(r0, r1, r2, r3); // 0x0803A70E
    r1 = r0;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803A718: BL 0x0801191A
    return sub_0803A6D4(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A726;
    *(u8*)(r4 + 0x11) = (u8)r0;
    return sub_0803A6D4(r0, r1, r2, r3);
loc_0803A726:
    r0 = 0xFFU;
    r0 += 0x2DU;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0803A6D4(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0803A730: BL 0x0800EE78
    return sub_0803A6D4(r0, r1, r2, r3);
}

// ROM Address: 0x0803A736..0x0803A790 (90 bytes, Thumb)
u32 sub_0803A736(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r1 + 0x58);
    r5 = r1;
    r0 += 0x4CU;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0803A74C;
    r0 = 0x1U;
    return r0;
loc_0803A74C:
    r0 = *(u32*)(r4 + 0x4);
    r6 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803A76E;
    r0 = 0x8U;
    *(u32*)(r4 + 0x4) = (u32)r6;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A758: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A764;
    r1 = 0x0804D438U /* &VTable_0804D438 */; // [0x0803A794]
    *(u32*)(r0) = (u32)r1;
loc_0803A764:
    r1 = r0;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803A76A
loc_0803A76E:
    r0 = *(u32*)(r4 + 0x8);
    r2 = *(u32*)(r5 + 0x14);
    r1 = r6;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A77A;
    r1 = 0x0U;
loc_0803A77A:
    r0 = r6 - r1;
    return r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A782: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A78E;
    r1 = 0x0804BDF8U /* &VTable_0804BDF8 */; // [0x0803A798]
    *(u32*)(r0) = (u32)r1;
loc_0803A78E:
    return r0;
}

// ROM Address: 0x0803A792..0x0803A7AC (26 bytes, Thumb)
u32 sub_0803A792(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r6 >> 1);
    if ((cmp_lhs - cmp_rhs) < 0) return sub_0803A808(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return r0;
    r4 = (r0 >> 32);
    r3 = r0;
    r0 = r1;
    r1 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803A7AC(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803A7AC..0x0803A7CA (30 bytes, Thumb)
u32 sub_0803A7AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r2;
    r1 += 0x18U;
    r2 = *(u32*)(r3 + 0xC);
    r1 = *(u32*)(r1);
    r1 *= r2;
    r1 = ((u32)((s32)r1 >> 16));
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x60);
    r2 = r2 + r1;
    r1 = sp;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A7C2: BL __call_via_r3
    r0 = 0x1U;
    return sub_0803A7AA(r0, r1, r2, r3);
}

// ROM Address: 0x0803A7CC..0x0803A7EA (30 bytes, Thumb)
u32 sub_0803A7CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xFFU;
    r0 += 0x2EU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0803A7D2: BL 0x08000158
    r2 = r0;
    r0 = 0x0877B114U; // [0x0803A7F4]
    r1 = 0x5U;
    r0 = *(u32*)(r0);
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x0803A7DE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803A7EA(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803A7EA..0x0803A7EE (4 bytes, Thumb)
u32 sub_0803A7EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0803A7E8(r0, r1, r2, r3);
}

// ROM Address: 0x0803A7F6..0x0803A86C (118 bytes, Thumb)
u32 sub_0803A7F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r6 >> 1);
    r2 += 0xD8U;
    r0 = (r0 << 12);
    *(u8*)(r0 + 0xB) = (u8)r1;
    r1 = 0xFFU;
    *(u8*)(r0 + 0x8) = (u8)r1;
    r1 = 0x8; // sp + 0x8
    r2 = 0x0U;
    r3 = 0x0U;
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r3; r1 += 4;
    r1 = *(u8*)(r0 + 0xB);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u8*)(r0 + 0xB);
    stack[3] = r1; // [sp + 0xC]
    r2 = *(u32*)(r0 + 0x10);
    r3 = stack[2]; // [sp + 0x8]
    r1 = r0;
    r2 = r2 - r3;
    r3 = *(u32*)(r0 + 0x14);
    r4 = stack[3]; // [sp + 0xC]
    stack[0] = r2; // [sp + 0x0]
    r3 = r3 - r4;
    stack[1] = r3; // [sp + 0x4]
    *(u32*)(r0 + 0x18) = (u32)r2;
    *(u32*)(r0 + 0x1C) = (u32)r3;
    r2 = *(u32*)(r0 + 0x10);
    r3 = stack[2]; // [sp + 0x8]
    r0 = *(u32*)(r0 + 0x14);
    r2 = r2 + r3;
    r3 = stack[3]; // [sp + 0xC]
    r1 += 0x20U;
    r0 = r0 + r3;
    stack[1] = r0; // [sp + 0x4]
    r0 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    *(u32*)r1 = r0; r1 += 4;
    *(u32*)r1 = r2; r1 += 4;
    return r0; // BX lr
    r6 = 0x28; // sp + 0x28
    r7 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    if (cmp_lhs != cmp_rhs) return sub_0803A86C(r0, r1, r2, r3);
    r0 = 0x830U; // (131 << 4)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803A85E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0803A86C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0803A86C..0x0803A898 (44 bytes, Thumb)
u32 sub_0803A86C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[2]; // [sp + 0x8]
    r1 = 0x0U;
    *(u8*)(r4 + 0x4) = (u8)r0;
    r0 = 0x080493B4U /* &VTable_080493B4 */; // [0x0803AC4C]
    *(u32*)(r4) = (u32)r0;
    *(u8*)(r4 + 0xA) = (u8)r5;
    *(u8*)(r4 + 0x9) = (u8)r6;
    *(u8*)(r4 + 0xC) = (u8)r1;
    *(u8*)(r4 + 0xD) = (u8)r1;
    r2 = stack[3]; // [sp + 0xC]
    r3 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    *(u32*)(r4 + 0x14) = (u32)r2;
    *(u32*)(r4 + 0x10) = (u32)r3;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r1 = (r7 << 24);
    r1 = (r1 >> 24);
    r0 = r4;
    r0 = sub_0803A7FC(r0, r1, r2, r3); // 0x0803A890
    r0 = r4;
    return sub_0803A868(r0, r1, r2, r3);
}

// ROM Address: 0x0803A898..0x0803A908 (112 bytes, Thumb)
u32 sub_0803A898(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    *(u8*)(r0 + 0xC) = (u8)r2;
    *(u8*)(r0 + 0xD) = (u8)r2;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x8);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803A8A6: BL __call_via_r3
    return r0;
    r3 = 0xFFFFF7CCU; // [0x0803AC50]
    r1 += 0x18U;
    sp += r3;
    r6 = *(u32*)(r1);
    r4 = r0;
    r0 = *(u32*)(r0 + 0x20);
    r5 = 0x800U; // (1 << 11)
    r7 = r1;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    r12 = r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803A8E8;
    r0 = *(u32*)(r4 + 0x18);
    r3 = r5;
    r2 = *(u32*)(r1 + 0x8);
    r3 += sp;
    *(u32*)(r3 + 0x30) = (u32)r2;
    lr = r0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0803A8E8;
    r0 = *(u32*)(r1 + 0x4);
    *(u32*)(r3 + 0x2C) = (u32)r0;
    r2 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0803A8E8;
    r0 = *(u32*)(r4 + 0x1C);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_0803A908(r0, r1, r2, r3);
loc_0803A8E8:
    r0 = *(u8*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803A902;
    r0 = 0x0U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u8*)(r4 + 0x4);
    r1 = 0x0600E000U; // [0x0803AC54]
    r0 = (r0 << 11);
    r0 = r0 + r1;
    r2 = r5;
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0803A8FE: BL 0x0804912C
loc_0803A902:
    r3 = 0x00000834U; // [0x0803AC58]
    sp += r3;
    return r0;
}

// ROM Address: 0x0803A908..0x0803AA58 (336 bytes, Thumb)
u32 sub_0803A908(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)lr;
    if (cmp_lhs > cmp_rhs) goto loc_0803A940;
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r6 = *(u32*)(r3 + 0x2C);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0803A940;
    r0 = *(u32*)(r3 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r12;
    if (cmp_lhs < cmp_rhs) goto loc_0803A940;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0803A940;
    r0 = *(u8*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0803A902(r0, r1, r2, r3);
    r0 = 0x2U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u8*)(r4 + 0x4);
    r1 = 0x0600E000U; // [0x0803AC54]
    r2 = r5;
    r0 = (r0 << 11);
    r0 = r0 + r1;
    r1 = r4;
    r1 += 0x30U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803A93A: BL 0x08049138
    return sub_0803A902(r0, r1, r2, r3);
loc_0803A940:
    r0 = 0x1U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r6 = r4;
    r6 += 0x18U;
    r0 = r7;
    r7 = 0x000007FCU; // [0x0803AC5C]
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    r7 += sp;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    *(u32*)r7 = r6; r7 += 4;
    r3 = 0x780U; // (15 << 7)
    r3 += sp;
    r2 = *(u32*)(r3 + 0x7C);
    r1 = *(u32*)(r0);
    r7 -= 0x10U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0803A964;
    *(u32*)(r3 + 0x7C) = (u32)r1;
loc_0803A964:
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r2 = *(u32*)(r3);
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0803A974;
    *(u32*)(r3) = (u32)r1;
loc_0803A974:
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r2 = *(u32*)(r3 + 0x4);
    r1 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A984;
    *(u32*)(r3 + 0x4) = (u32)r1;
loc_0803A984:
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r1 = *(u32*)(r3 + 0x8);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803A994;
    *(u32*)(r3 + 0x8) = (u32)r0;
loc_0803A994:
    r0 = 0x0000080CU; // [0x0803AC60]
    r1 = *(u32*)r7; r7 += 4;
    r2 = *(u32*)r7; r7 += 4;
    r3 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r0 += sp;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r3 = 0x800U; // (1 << 11)
    r3 += sp;
    r0 = *(u32*)(r3 + 0xC);
    r1 = *(u32*)(r4 + 0x10);
    r2 = *(u32*)(r4 + 0x14);
    r0 = r0 - r1;
    r1 = *(u32*)(r3 + 0x10);
    r3 -= 0x80U;
    r1 = r1 - r2;
    r3 += 0x74U;
    *(u32*)r3 = r0; r3 += 4;
    *(u32*)r3 = r1; r3 += 4;
    r3 += 0x4U;
    r6 = r1;
    r2 = r0;
    r0 = *(u32*)(r3 + 0x14);
    r1 = *(u32*)(r4 + 0x10);
    r0 = r0 - r1;
    r1 = *(u32*)(r3 + 0x18);
    r3 = *(u32*)(r4 + 0x14);
    r1 = r1 - r3;
    r3 = 0x780U; // (15 << 7)
    r3 += sp;
    r3 += 0x74U;
    *(u32*)r3 = r0; r3 += 4;
    *(u32*)r3 = r1; r3 += 4;
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)(r3 + 0x4) = (u32)r0;
    *(u32*)(r3 + 0x8) = (u32)r1;
    *(u32*)(r3) = (u32)r6;
    r0 = r3 - 4;
    r6 = r0;
    r6 += 0x20U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x1C; // sp + 0x1C
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0803A9E8: BL 0x0804912C
    r3 = r6;
    r3 -= 0x2CU;
    r0 = *(u32*)(r3 + 0x1C);
    r1 = ((u32)((s32)r0 >> 3));
    r0 = *(u32*)(r3 + 0x20);
    stack[1] = r1; // [sp + 0x4]
    r0 = ((u32)((s32)r0 >> 3));
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    stack[3] = r1; // [sp + 0xC]
    r0 = *(u32*)(r3 + 0x24);
    r0 += 0x7U;
    r0 = ((u32)((s32)r0 >> 3));
    stack[5] = r0; // [sp + 0x14]
    r0 = *(u32*)(r3 + 0x28);
    r2 = stack[4]; // [sp + 0x10]
    r0 += 0x7U;
    r0 = ((u32)((s32)r0 >> 3));
    stack[6] = r0; // [sp + 0x18]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0803AA44;
loc_0803AA16:
    r1 = (r2 << 27);
    r0 = stack[3]; // [sp + 0xC]
    r5 = stack[5]; // [sp + 0x14]
    r1 = (r1 >> 27);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803AA3C;
    r5 = 0x1C; // sp + 0x1C
    r1 = (r1 << 6);
    r6 = r1 + r5;
    r5 = r1 + r4;
loc_0803AA2A:
    r1 = (r0 << 27);
    r1 = (r1 >> 26);
    r3 = r5 + r1;
    r7 = *(u16*)(r3 + 0x30);
    r0 += 0x1U;
    *(u16*)(r6 + r1) = (u16)r7;
    r1 = stack[5]; // [sp + 0x14]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0803AA2A;
loc_0803AA3C:
    r0 = stack[6]; // [sp + 0x18]
    r2 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0803AA16;
loc_0803AA44:
    r0 = *(u8*)(r4 + 0x4);
    r1 = 0x0600E000U; // [0x0803AC54]
    r2 = 0x1U;
    r0 = (r0 << 11);
    r0 = r0 + r1;
    r1 = 0x1C; // sp + 0x1C
    r2 = (r2 << 11);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0803AA52: BL 0x08049138
    return sub_0803A902(r0, r1, r2, r3);
}

// ROM Address: 0x0803ACCC..0x0803AE60 (404 bytes, Thumb)
u32 sub_0803ACCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r3 + 0x58);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs >= cmp_rhs) goto loc_0803ACF8;
loc_0803ACD2:
    r3 = 0x600U; // (3 << 9)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x58);
    r2 = 0x20U;
    r0 = (r0 << 6);
    r0 = r0 + r5;
    r0 += 0x30U;
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0803ACE4: BL 0x0804912C
    r3 = 0x600U; // (3 << 9)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x58);
    r0 += 0x1U;
    *(u32*)(r3 + 0x58) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803ACD2;
loc_0803ACF8:
    r7 = 0x400U; // (1 << 10)
    r4 = 0x0U;
    r0 = 0x1FU;
loc_0803AD00:
    r1 = 0x10U;
    r2 = (r4 << 6);
    r2 = r2 + r5;
loc_0803AD06:
    r3 = r0 - r1;
    r3 = (r3 << 1);
    r3 = r2 + r3;
    r3 = *(u16*)(r3 + 0x30);
    r3 |= r7;
    r6 = r3;
    r3 = (r1 << 1);
    r3 = r2 + r3;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 32;
    *(u16*)(r3 + 0x30) = (u16)r6;
    if (cmp_lhs < cmp_rhs) goto loc_0803AD06;
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_0803AD00;
    r2 = 0x10U;
loc_0803AD26:
    r1 = 0x1FU;
    r1 = r1 - r2;
    r1 = (r1 << 6);
    r4 = r1 + r5;
    r1 = (r2 << 6);
    r0 = 0x0U;
    r6 = r1 + r5;
loc_0803AD34:
    r1 = (r0 << 1);
    r3 = r4 + r1;
    r3 = *(u16*)(r3 + 0x30);
    r7 = 0x800U; // (1 << 11)
    r7 |= r3;
    r1 = r6 + r1;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    *(u16*)(r1 + 0x30) = (u16)r7;
    if (cmp_lhs < cmp_rhs) goto loc_0803AD34;
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_0803AD26;
    r3 = 0x600U; // (3 << 9)
    r3 += sp;
    r0 = *(u32*)(r3 + 0x68);
    r2 = *(u32*)(r5 + 0x10);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r1 = r1 - r2;
    r2 = *(u32*)(r5 + 0x14);
    r0 = r0 - r2;
    *(u32*)(r3 + 0x50) = (u32)r0;
    *(u32*)(r3 + 0x4C) = (u32)r1;
    r0 = r1;
    r1 = *(u32*)(r3 + 0x50);
    r3 += 0x54U;
    *(u32*)r3 = r0; r3 += 4;
    *(u32*)r3 = r1; r3 += 4;
    r3 -= 0x5CU;
    r1 = ((u32)((s32)r0 >> 3));
    r0 = *(u32*)(r3 + 0x58);
    r0 = ((u32)((s32)r0 >> 3));
    *(u32*)(r3 + 0x50) = (u32)r0;
    *(u32*)(r3 + 0x4C) = (u32)r1;
    r2 = *(u32*)(r5 + 0x28);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0803AD8A;
    r2 = *(u32*)(r5 + 0x2C);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0803AD9C;
loc_0803AD8A:
    r3 = 0x600U; // (3 << 9)
    *(u32*)(r5 + 0x2C) = (u32)r0;
    *(u32*)(r5 + 0x28) = (u32)r1;
    r3 += sp;
    r1 = *(u32*)(r3 + 0x68);
    r0 = r5;
    r0 = sub_0803A8AC(r0, r1, r2, r3); // 0x0803AD98
loc_0803AD9C:
    r0 = *(u8*)(r5 + 0x4);
    r1 = 0x4000000U; // (1 << 26)
    r3 = 0x3U;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r3 = (r3 << 9);
    r3 += sp;
    r0 += 0x10U;
    r3 += 0x54U;
    r1 = *(u32*)r3; r3 += 4;
    r2 = *(u32*)r3; r3 += 4;
    *(u16*)(r0) = (u16)r1;
    *(u16*)(r0 + 0x2) = (u16)r2;
    return r0;
    r3 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r0 + 0x14) = (u32)r1;
    *(u32*)(r0 + 0x10) = (u32)r3;
    r3 = 0x0U;
    r1 = 0x8; // sp + 0x8
    r2 = 0x0U;
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r3; r1 += 4;
    r1 = *(u8*)(r0 + 0xB);
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u8*)(r0 + 0xB);
    stack[3] = r1; // [sp + 0xC]
    r2 = *(u32*)(r0 + 0x10);
    r3 = stack[2]; // [sp + 0x8]
    r1 = r0;
    r2 = r2 - r3;
    r3 = *(u32*)(r0 + 0x14);
    r4 = stack[3]; // [sp + 0xC]
    stack[0] = r2; // [sp + 0x0]
    r3 = r3 - r4;
    stack[1] = r3; // [sp + 0x4]
    *(u32*)(r0 + 0x18) = (u32)r2;
    *(u32*)(r0 + 0x1C) = (u32)r3;
    r2 = *(u32*)(r0 + 0x10);
    r3 = stack[2]; // [sp + 0x8]
    r0 = *(u32*)(r0 + 0x14);
    r2 = r2 + r3;
    r3 = stack[3]; // [sp + 0xC]
    r1 += 0x20U;
    r0 = r0 + r3;
    stack[1] = r0; // [sp + 0x4]
    r0 = r2;
    stack[0] = r2; // [sp + 0x0]
    r2 = stack[1]; // [sp + 0x4]
    *(u32*)r1 = r0; r1 += 4;
    *(u32*)r1 = r2; r1 += 4;
    return r0; // BX lr
    r2 = (r1 << 1);
    r3 = 0x3U;
    r4 = r3 - r2;
    r3 = 0x0U;
    r2 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803AE46;
loc_0803AE20:
    r6 = (r2 << 2);
    r6 = r6 + r0;
    r5 = (r3 << 2);
    r6 -= 0x40U;
    *(u32*)(r0 + r5) = r2;
    *(u32*)(r6 + 0x3C) = (u32)r3;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803AE36;
    r4 = r5 + r4;
    r4 += 0x6U;
    goto loc_0803AE40;
loc_0803AE36:
    r5 = r3 - r2;
    r5 = (r5 << 2);
    r4 = r5 + r4;
    r4 += 0xAU;
    r2 -= 0x1U;
loc_0803AE40:
    r3 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0803AE20;
loc_0803AE46:
    r2 = 0x80U;
    r2 = r2 - r1;
    if (cmp_lhs == cmp_rhs) goto loc_0803AE58;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r2 = (r2 << 2);
    r1 = 0x0U;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0803AE54: BL 0x0804912C
loc_0803AE58:
    return r0;
    r0 = r0;
    r0 = 0x030032E0U; // [0x0803AE60]
    return r0; // BX lr
}

// ROM Address: 0x0803AE60..0x0803AE64 (4 bytes, Thumb)
u32 sub_0803AE60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0xE0U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0803AE64..0x0803AEA0 (60 bytes, Thumb)
u32 sub_0803AE64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803AE6A: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803AE72: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803AE80;
    r1 = 0x0804CB20U; // [0x0803AEA0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803AE80:
    return r0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803AE88: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803AE90: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803AE9E;
    r1 = 0x0804D674U; // [0x0803AEA4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803AE9E:
    return r0;
}

// ROM Address: 0x0803AEA0..0x0803AEA8 (8 bytes, Thumb)
u32 sub_0803AEA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0803AF90(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0803AEA8..0x0803AEC6 (30 bytes, Thumb)
u32 sub_0803AEA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803AEC6(r0, r1, r2, r3);
    r0 = 0x20U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803AEB8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0803AEC6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0803AEC6..0x0803AF58 (146 bytes, Thumb)
u32 sub_0803AEC6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804A884U /* &VTable_0804A884 */; // [0x0803B1C0]
    r6 = r4;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r4 += 0x14U;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    r2 = 0x0U;
    r1 = 0x2U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r4 -= 0x20U;
    r5 -= 0x8U;
    r6 += 0x10U;
    r2 = r5;
    r1 = 0x0U;
    r3 = 0x1U;
    r0 = 0x0U;
    r0 = sub_0803A84A(r0, r1, r2, r3); // 0x0803AEE8
    r2 = r0;
    r5 = 0x0877B134U; // [0x0803B1C4]
    *(u32*)(r4 + 0xC) = (u32)r0;
    r1 = *(u8*)(r2 + 0x4);
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0800927E(r0, r1, r2, r3); // 0x0803AEF6
    r2 = 0x1U;
    r1 = 0x0U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080096C4(r0, r1, r2, r3); // 0x0803AF00
    r2 = 0x1U;
    r1 = 0x0U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080096EA(r0, r1, r2, r3); // 0x0803AF0A
    r2 = 0x2U;
    r1 = 0x1U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080096EA(r0, r1, r2, r3); // 0x0803AF14
    r2 = 0x2U;
    r1 = 0x2U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080096EA(r0, r1, r2, r3); // 0x0803AF1E
    r2 = 0x2U;
    r1 = 0x3U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080096EA(r0, r1, r2, r3); // 0x0803AF28
    r2 = 0x2U;
    r1 = 0x4U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080096EA(r0, r1, r2, r3); // 0x0803AF32
    r2 = 0x32U;
    r1 = 0x32U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08009728(r0, r1, r2, r3); // 0x0803AF3C
    r1 = 0x0U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080096AC(r0, r1, r2, r3); // 0x0803AF44
    r0 = 0xFFU;
    r0 += 0x1U;
    *(u32*)(r6) = (u32)r0;
    r1 = 0x030032E4U; // [0x0803B1C8]
    r0 = 0x0U;
    *(u8*)(r1) = (u8)r0;
    r0 = r4;
    return sub_0803AEC2(r0, r1, r2, r3);
}

// ROM Address: 0x0803AF58..0x0803AFA2 (74 bytes, Thumb)
u32 sub_0803AF58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x14);
    r3 = *(u32*)(r0 + 0x18);
    r4 = *(u32*)(r1);
    r5 = r2;
    r6 = r3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_0803AF6A;
    r2 = r4;
loc_0803AF6A:
    r4 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_0803AF72;
    r2 = r4;
loc_0803AF72:
    r4 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_0803AF7A;
    r3 = r4;
loc_0803AF7A:
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0803AF82;
    r3 = r1;
loc_0803AF82:
    r1 = r5 - r2;
    r2 = r1;
    r1 *= r2;
    r2 = r6 - r3;
    r3 = r2;
    r2 *= r3;
    r0 = *(u32*)(r0 + 0x10);
    r1 = r1 + r2;
    r2 = r0;
    r2 *= r0;
    r0 = ((u32)((s32)r2 >> 16));
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) return sub_0803AFA2(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0803AFA2..0x0803AFA6 (4 bytes, Thumb)
u32 sub_0803AFA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0803AF9E(r0, r1, r2, r3);
}

// ROM Address: 0x0803AFB6..0x0803B09E (232 bytes, Thumb)
u32 sub_0803AFB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0877B134U; // [0x0803B1C4]
    if (cmp_lhs >= cmp_rhs) return sub_0803B09E(r0, r1, r2, r3);
    r1 = 0x030032E4U; // [0x0803B1C8]
    r0 = 0x1U;
    *(u8*)(r1) = (u8)r0;
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0803AFC2
    r1 = 0x400U; // (1 << 10)
    r7 = (r1 << 2);
    r6 = 0x4U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803B006;
    r0 = r7;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803AFD4
    r1 = *(u32*)(r4 + 0x14);
    r2 = *(u32*)(r4 + 0x18);
    stack[11] = r1; // [sp + 0x2C]
    r2 += 0x32U;
    stack[13] = r1; // [sp + 0x34]
    r1 = (r6 << 8);
    stack[12] = r2; // [sp + 0x30]
    stack[14] = r2; // [sp + 0x38]
    r2 = 0x37U;
    r0 = r0 + r7;
    stack[0] = r0; // [sp + 0x0]
    r3 = r6;
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x34; // sp + 0x34
    r2 = 0x086FD9D0U; // [0x0803B1CC]
    r0 = 0x0U;
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0803AFFA
    r1 = r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803B002: BL 0x0801191A
loc_0803B006:
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0803B008
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803B04A;
    r0 = r7;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803B016
    r1 = *(u32*)(r4 + 0x14);
    r2 = *(u32*)(r4 + 0x18);
    stack[11] = r1; // [sp + 0x2C]
    r2 -= 0x32U;
    stack[13] = r1; // [sp + 0x34]
    r1 = 0x400U; // (1 << 10)
    stack[12] = r2; // [sp + 0x30]
    stack[14] = r2; // [sp + 0x38]
    r2 = 0x37U;
    r0 = r0 + r7;
    stack[0] = r0; // [sp + 0x0]
    r3 = r6;
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x34; // sp + 0x34
    r2 = 0x086FD9D0U; // [0x0803B1CC]
    r0 = 0x0U;
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0803B03E
    r1 = r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803B046: BL 0x0801191A
loc_0803B04A:
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0803B04C
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0803B092;
    r0 = r7;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803B05A
    r2 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r4 + 0x18);
    r2 += 0x32U;
    stack[12] = r1; // [sp + 0x30]
    r1 = r2;
    stack[11] = r2; // [sp + 0x2C]
    r2 = stack[12]; // [sp + 0x30]
    stack[13] = r1; // [sp + 0x34]
    r1 = 0x400U; // (1 << 10)
    stack[14] = r2; // [sp + 0x38]
    r2 = 0x37U;
    r0 = r0 + r7;
    stack[0] = r0; // [sp + 0x0]
    r3 = r6;
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x34; // sp + 0x34
    r2 = 0x086FD9D0U; // [0x0803B1CC]
    r0 = 0x0U;
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0803B086
    r1 = r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803B08E: BL 0x0801191A
loc_0803B092:
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0803B094
    r1 = 0x400U; // (1 << 10)
    return sub_0803B0A0(r0, r1, r2, r3);
}

// ROM Address: 0x0803B09E..0x0803B0A0 (2 bytes, Thumb)
u32 sub_0803B09E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0803B0E0(r0, r1, r2, r3);
}

// ROM Address: 0x0803B0A0..0x0803B0E0 (64 bytes, Thumb)
u32 sub_0803B0A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_0803B0FC(r0, r1, r2, r3);
    r0 = r7;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0803B0A6
    r2 = *(u32*)(r4 + 0x14);
    r1 = *(u32*)(r4 + 0x18);
    r2 -= 0x32U;
    stack[12] = r1; // [sp + 0x30]
    r1 = r2;
    stack[11] = r2; // [sp + 0x2C]
    r2 = stack[12]; // [sp + 0x30]
    stack[13] = r1; // [sp + 0x34]
    r1 = 0x400U; // (1 << 10)
    stack[14] = r2; // [sp + 0x38]
    r2 = 0x37U;
    r0 = r0 + r7;
    stack[0] = r0; // [sp + 0x0]
    r3 = r6;
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x34; // sp + 0x34
    r2 = 0x086FD9D0U; // [0x0803B1CC]
    r0 = 0x0U;
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0803B0D2
    r1 = r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803B0DA: BL 0x0801191A
    return sub_0803B0FC(r0, r1, r2, r3);
}

// ROM Address: 0x0803B0E0..0x0803B0FC (28 bytes, Thumb)
u32 sub_0803B0E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x4000U; // (1 << 14)
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803B0F4;
    r0 = 0x424CCCCDU; // [0x0803B1D0]
    r0 = sub_08054A64(r0, r1, r2, r3); // 0x0803B0EA: BL 0x08054A64
    r0 = r6 + r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    return sub_0803B0FC(r0, r1, r2, r3);
loc_0803B0F4:
    r0 = 0x030032E4U; // [0x0803B1C8]
    r6 += 0x80U;
    *(u8*)(r0) = (u8)r1;
    *(u32*)(r4 + 0x10) = (u32)r6;
    return r0;
}

// ROM Address: 0x0803B0FC..0x0803B16A (110 bytes, Thumb)
u32 sub_0803B0FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x030032E4U; // [0x0803B1C8]
    r0 = *(u8*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0803B1B2(r0, r1, r2, r3);
    r0 = 0x03001C34U; // [0x0803B1D4]
    r0 = *(u32*)(r0);
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
    r1 = *(u32*)(r4 + 0x14);
    r0 = r0 - r1;
    r1 = stack[4]; // [sp + 0x10]
    r2 = *(u32*)(r4 + 0x18);
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 - r2;
    stack[2] = r1; // [sp + 0x8]
    r2 = r1;
    r1 = r0;
    r0 = *(u32*)(r4 + 0x18);
    r3 = *(u32*)(r4 + 0x14);
    stack[6] = r0; // [sp + 0x18]
    stack[5] = r3; // [sp + 0x14]
    r0 = *(u32*)(r4 + 0x10);
    r0 = ((u32)((s32)r0 >> 8));
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x1C);
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x400U; // (1 << 10)
    stack[9] = r0; // [sp + 0x24]
    r0 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803B152;
    r0 = (u32)(-(s32)r0);
loc_0803B152:
    r3 = r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0803B15A;
    r3 = (u32)(-(s32)r2);
loc_0803B15A:
    r7 = 0x3U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r3;
    if (cmp_lhs <= cmp_rhs) return sub_0803B16A(r0, r1, r2, r3);
    r0 = r7;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_0803B172(r0, r1, r2, r3);
    r0 = 0x2U;
    return sub_0803B172(r0, r1, r2, r3);
}

// ROM Address: 0x0803B16A..0x0803B1C4 (90 bytes, Thumb)
u32 sub_0803B16A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803B172;
    r0 = 0x0U;
loc_0803B172:
    r3 = 0x20; // sp + 0x20
    *(u8*)(r3) = (u8)r0;
    r0 = 0x086B8098U; // [0x0803B1D8]
    r2 = 0x14; // sp + 0x14
    stack[10] = r0; // [sp + 0x28]
    r0 = *(u32*)(r5);
    r1 = 0x28U;
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0803B180
    r0 = *(u8*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0803B1A8;
    r0 = *(u32*)(r4 + 0x10);
    r1 = 0x80U;
    r0 = ((u32)((s32)r0 >> 8));
    r0 = r1 - r0;
    r3 = 0x32U;
    r0 *= r3;
    r1 = ((u32)((s32)r0 >> 6));
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0803B1A0;
    r1 = 0x0U;
    *(u8*)(r6) = (u8)r7;
loc_0803B1A0:
    r2 = 0x64U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08009728(r0, r1, r2, r3); // 0x0803B1A4
loc_0803B1A8:
    r0 = *(u8*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) goto loc_0803B1B2;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0803B1BA;
loc_0803B1B2:
    r1 = r4;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0803B1B6
loc_0803B1BA:
    return r0;
    r0 = r0;
    r0 = 0x210; // sp + 0x210
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0803B1C6..0x0803B1D2 (12 bytes, Thumb)
u32 sub_0803B1C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r6 >> 1);
    r2 += 0xE4U;
    r0 = (r0 << 12);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0803B170(r0, r1, r2, r3);
    r7 = (r5 >> 1);
    r0 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r6 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    return r0;
}

// ROM Address: 0x0803B1DC..0x0803B238 (92 bytes, Thumb)
u32 sub_0803B1DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x10);
    r0 = *(u32*)(r0 + 0xC);
    r1 = ((u32)((s32)r1 >> 8));
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r0 = sub_0803A7FC(r0, r1, r2, r3); // 0x0803B1E8
    r0 = 0x0U;
    return r0;
    r6 = 0x0U;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B23C(r0, r1, r2, r3);
    r0 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_0803B204;
    r0 = 0x0U;
    return r0;
loc_0803B204:
    r0 = *(u32*)(r2 + 0x1C);
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0803B238(r0, r1, r2, r3);
    r1 = r2 + 4;
    r0 = r4;
    r0 = sub_0803AF58(r0, r1, r2, r3); // 0x0803B210: BL 0x0803AF58
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0803B238(r0, r1, r2, r3);
    r0 = 0x030032E4U; // [0x0803B2D8]
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B238(r0, r1, r2, r3);
    r5 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0803B234;
    r0 = 0x42CCCCCDU; // [0x0803B2DC]
    r0 = sub_08054A64(r0, r1, r2, r3); // 0x0803B228: BL 0x08054A64
    r0 = r5 - r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0803B234;
    *(u32*)(r4 + 0x10) = (u32)r6;
loc_0803B234:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0803B238..0x0803B240 (8 bytes, Thumb)
u32 sub_0803B238(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
    r0 = r6;
    return r0;
}

// Evidence: tools/behaviour/test_table.py::test_list_append_bounds1_clears_the_flag_and_appends_the_record runs it on a crafted object and asserts the cleared byte and the three calls; 0x0803B244 loads 0x030032E4 and 0x0803B24A clears it, 0x0803B250 fills 0x28 bytes of stack through 0x0800FE78, 0x0803B258-0x0803B278 halve and offset the box into a second one, 0x0803B282 calls 0x0803AEA8 and 0x0803B28C appends the result through 0x0801191A
// ROM Address: 0x0803B240..0x0803B2A4 (100 bytes, Thumb)
u32 List_AppendBounds1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x030032E4U; // [0x0803B2D8]
    r0 = 0x0U;
    *(u8*)(r1) = (u8)r0;
    r1 = r4;
    r0 = 0x8; // sp + 0x8
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0803B250
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[4]; // [sp + 0x10]
    r2 = stack[5]; // [sp + 0x14]
    r1 = r0 + r1;
    r0 = stack[3]; // [sp + 0xC]
    stack[0] = r1; // [sp + 0x0]
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[0] = r1; // [sp + 0x0]
    stack[6] = r1; // [sp + 0x18]
    r1 += 0x2U;
    stack[1] = r0; // [sp + 0x4]
    stack[7] = r0; // [sp + 0x1C]
    r0 -= 0x11U;
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    stack[8] = r1; // [sp + 0x20]
    stack[9] = r0; // [sp + 0x24]
    r2 = r4;
    r0 = 0x0U;
    r1 = 0x20; // sp + 0x20
    r0 = sub_0803AEA8(r0, r1, r2, r3); // 0x0803B282: BL 0x0803AEA8
    r1 = r0;
    r0 = 0x0877B134U; // [0x0803B2E0]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0803B28C: BL 0x0801191A
    return r0;
    r0 = 0x030032E4U; // [0x0803B2D8]
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) goto loc_0803B2A0;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0803B2A4(r0, r1, r2, r3);
loc_0803B2A0:
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0803B2A4..0x0803B2A8 (4 bytes, Thumb)
u32 sub_0803B2A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0803B2A8..0x0803B304 (92 bytes, Thumb)
u32 sub_0803B2A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803B2AC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B2B8;
    r1 = 0x0804B698U /* &VTable_0804B698 */; // [0x0803B2E4]
    *(u32*)(r0) = (u32)r1;
loc_0803B2B8:
    return r0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B2C0: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803B2C8: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B2D6;
    r1 = 0x0804D91CU; // [0x0803B2E8]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0803B2D6:
    return r0;
    r2 += 0xE4U;
    r0 = (r0 << 12);
    r0 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r6 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    cmp_lhs = (s32)r4; cmp_rhs = -(s32)r1;
    r7 = (r6 >> 1);
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0803B324(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = r1;
    r1 = *(u16*)(r1 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0803B304(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0803B2FE: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0803B304..0x0803B30E (10 bytes, Thumb)
u32 sub_0803B304(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 -= 0x1U;
    *(u16*)(r0 + 0x12) = (u16)r1;
    r1 = (r1 >> 3);
    *(u8*)(r0 + 0x11) = (u8)r1;
    return sub_0803B302(r0, r1, r2, r3);
}

// ROM Address: 0x0803B30E..0x0803B368 (90 bytes, Thumb)
u32 sub_0803B30E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r1 + 0x58);
    r5 = r1;
    r0 += 0x48U;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0803B324;
    r0 = 0x1U;
    return r0;
loc_0803B324:
    r0 = *(u32*)(r4 + 0x4);
    r6 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0803B346;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803B32E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B33A;
    r1 = 0x0804DBA8U /* &VTable_0804DBA8 */; // [0x0803B368]
    *(u32*)(r0) = (u32)r1;
loc_0803B33A:
    r1 = r0;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0803B340
    *(u32*)(r4 + 0x4) = (u32)r6;
loc_0803B346:
    r0 = *(u32*)(r4 + 0x8);
    r2 = *(u32*)(r5 + 0x14);
    r1 = r6;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B352;
    r1 = 0x0U;
loc_0803B352:
    r0 = r6 - r1;
    return r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0803B35A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0803B366;
    r1 = 0x0804CB48U /* &VTable_0804CB48 */; // [0x0803B36C]
    *(u32*)(r0) = (u32)r1;
loc_0803B366:
    return r0;
}

// ROM Address: 0x0803B368..0x0803B36A (2 bytes, Thumb)
u32 sub_0803B368(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_0803B2BC(r0, r1, r2, r3);
    return r0;
}
