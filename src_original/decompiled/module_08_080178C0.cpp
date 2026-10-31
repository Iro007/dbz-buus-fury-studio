/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #08
 * Address Range: 0x080178C0..0x08019D2C (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x080178C0..0x080178C8 (8 bytes, Thumb)
u32 sub_080178C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x080179C4U;
    r4 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    return r0;
}

// ROM Address: 0x080178C8..0x080178E4 (28 bytes, Thumb)
u32 sub_080178C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080178E4(r0, r1, r2, r3);
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080178D6: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080178E4(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080178E4..0x0801794C (104 bytes, Thumb)
u32 sub_080178E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080179CC]
    r6 = 0xFFU;
    r6 += 0x1U;
    r5 = 0x086F9EC4U; // [0x080179D0]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080178F4
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801790C;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08017900: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08017908
loc_0801790C:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804C974U /* &VTable_0804C974 */; // [0x080179D4]
    r5 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r5;
    r2 = 0x10U;
    r1 = 0x10U;
    *(u32*)(r4 + 0x14) = (u32)r7;
    r0 = sp;
    r6 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08017920
    r0 = 0x086B7E8CU; // [0x080179D8]
    r1 = stack[9]; // [sp + 0x24]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08017928
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x080179DC]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r0 = r6;
    r0 = sub_0803F9B8(r0, r1, r2, r3); // 0x08017936
    r0 = 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r1 = 0x0U;
    r0 = r6;
    *(u8*)(r4 + 0x8) = (u8)r5;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08017944: BL 0x0803F58C
    r0 = r4;
    return sub_080178E0(r0, r1, r2, r3);
}

// ROM Address: 0x0801794C..0x0801795C (16 bytes, Thumb)
u32 sub_0801794C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x10);
    r1 += 0x1U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = (r1 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0801795C(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801795C..0x08017964 (8 bytes, Thumb)
u32 sub_0801795C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    return r0;
}

// ROM Address: 0x0801796A..0x080179E6 (124 bytes, Thumb)
u32 sub_0801796A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    r4 = r2;
    r2 += 0x8U;
    *(u32*)(r1) = (u32)r2;
    r1 = 0x40002000U; // [0x080179E0]
    r2 = 0x3U;
    *(u32*)(r4) = (u32)r1;
    r1 = *(u32*)(r4 + 0x4);
    r2 = (r2 << 10);
    r1 &= ~r2;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r2 = *(u16*)(r0 + 0xC);
    r1 = (r1 >> 10);
    r1 = (r1 << 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r1 |= r2;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = *(u32*)(r0 + 0x14);
    r0 = *(u32*)(r1);
    r2 = *(u32*)(r0 + 0x4);
    r2 = r2 + r0;
    r0 = sp;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801799C: BL __call_via_r3
    r1 = 0x0; // sp + 0x0
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[2] = r0; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r4);
    r0 -= 0x10U;
    r2 = 0xFE00FFFFU; // [0x080179E4]
    r0 = (r0 << 23);
    r0 = (r0 >> 7);
    r1 &= r2;
    r0 |= r1;
    r1 = stack[3]; // [sp + 0xC]
    r0 = (r0 >> 8);
    r1 += 0xF4U;
    r1 = (r1 << 24);
    r0 = (r0 << 8);
    r1 = (r1 >> 24);
    r0 |= r1;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    return r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r6 = stack[196]; // [sp + 0x310]
    r7 = (r5 >> 1);
    r2 = *(u32*)r1; r1 += 4;
    r4 = *(u32*)r1; r1 += 4;
    r5 = *(u32*)r1; r1 += 4;
    r6 = *(u32*)r1; r1 += 4;
    r4 = (r0 >> 32);
    r4 = *(u8*)(r1 + 0x1A);
    r3 = (r5 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    r0 = 0x0U;
    r0 &= r0;
    return r0;
}

// ROM Address: 0x080179EA..0x08017AFC (274 bytes, Thumb)
u32 sub_080179EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080179FC;
    r0 = 0x3CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080179F0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080179FC;
    r0 = r4;
    return r0;
loc_080179FC:
    r0 = 0x080492B8U /* &VTable_080492B8 */; // [0x08017BDC]
    r2 = 0xA0U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r1 = 0xF0U;
    r0 += 0x8U;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08017A08
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r4;
    return r0;
    r2 = 0x18000U; // (3 << 15)
    r5 = r0;
    r1 = 0x0U;
    r0 = (r2 << 10);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08017A22: BL 0x0804912C
    r2 = 0x800U; // (1 << 11)
    r1 = 0x2U;
    r0 = 0x06007800U; // [0x08017BE0]
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08017A2E: BL 0x08049168
    r0 = 0x5U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x1EU;
    r4 = 0x0U;
    r6 = 0x10U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x4; // sp + 0x4
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x2U;
    stack[1] = r4; // [sp + 0x4]
    r1 = 0x06007800U; // [0x08017BE0]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08017A48
    r0 = 0x086F9EC8U; // [0x08017BE4]
    r1 = *(u32*)(r5 + 0x2C);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08017A50
    r0 = 0x28U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0xF0U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x80U;
    stack[4] = r0; // [sp + 0x10]
    r0 = r5;
    r0 += 0x8U;
    r7 = r0;
    stack[1] = r4; // [sp + 0x4]
    r2 = 0x4; // sp + 0x4
    r1 = 0x06000080U; // [0x08017BE8]
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08017A6C: BL 0x0804915C
    r2 = (r6 << 7);
    r1 = 0x00000202U; // [0x08017BEC]
    r0 = 0x0600F800U; // [0x08017BF0]
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08017A76: BL 0x08049168
    r0 = 0x5U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x4; // sp + 0x4
    stack[1] = r4; // [sp + 0x4]
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x00000202U; // [0x08017BEC]
    r1 = 0x0600F800U; // [0x08017BF0]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08017A8C
    r0 = 0x086FA398U; // [0x08017BF4]
    r1 = *(u32*)(r5 + 0x2C);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08017A94
    r0 = 0x28U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0xF0U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x80U;
    stack[4] = r0; // [sp + 0x10]
    r0 = r7;
    stack[1] = r4; // [sp + 0x4]
    r2 = 0x4; // sp + 0x4
    r1 = 0x06008080U; // [0x08017BF8]
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08017AAC: BL 0x0804915C
    r0 = 0x00000F83U; // [0x08017BFC]
    r1 = (r6 << 22);
    *(u16*)(r1 + 0xE) = (u16)r0;
    r0 = 0x00001F83U; // [0x08017C00]
    *(u16*)(r1 + 0xC) = (u16)r0;
    *(u16*)(r1 + 0x18) = (u16)r4;
    *(u16*)(r1 + 0x1A) = (u16)r4;
    *(u16*)(r1 + 0x1C) = (u16)r4;
    r0 = 0xC00U; // (3 << 10)
    *(u16*)(r1 + 0x1E) = (u16)r4;
    *(u16*)(r1) = (u16)r0;
    r0 = 0x00000844U; // [0x08017C04]
    r1 += 0x40U;
    *(u16*)(r1 + 0x10) = (u16)r0;
    r0 = 0x04000053U; // [0x08017C08]
    r1 = 0x0805652CU; // [0x08017C0C]
    *(u8*)(r0) = (u8)r6;
    r0 -= 0x1U;
    *(u8*)(r0) = (u8)r4;
    r2 = (r0 >> 17);
    r0 = 0x5000000U; // (5 << 24)
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08017ADE: BL 0x08049144
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 += 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 160;
    if (cmp_lhs > cmp_rhs) return Blend_WriteAlpha2(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// Evidence: writes BLDALPHA 0x04000052: 0x08017AFC ldr r1, [pc, #0x110] (= 0x04000050) then 0x08017B0C strb r0, [r1, #2]; writes BLDALPHA 0x04000053: 0x08017AFC ldr r1, [pc, #0x110] (= 0x04000050) then 0x08017B06 strb r0, [r1, #3]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x08017AFC
// ROM Address: 0x08017AFC..0x08017BDA (222 bytes, Thumb)
u32 Blend_WriteAlpha2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x04000050U /* &REG_BLDCNT */; // [0x08017C10]
    cmp_lhs = (s32)r0; cmp_rhs = 176;
    if (cmp_lhs > cmp_rhs) goto loc_08017B12;
    r2 = 0xB0U;
    r0 = r2 - r0;
    *(u8*)(r1 + 0x3) = (u8)r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x60U;
    *(u8*)(r1 + 0x2) = (u8)r0;
    r0 = 0x0U;
    return sub_08017AF8(r0, r1, r2, r3);
loc_08017B12:
    r2 = 0xFFU;
    r2 += 0x41U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08017B1E;
    r0 = 0x0U;
    return sub_08017AF8(r0, r1, r2, r3);
loc_08017B1E:
    r2 = r0;
    r2 -= 0x140U;
    if (cmp_lhs != cmp_rhs) goto loc_08017BA2;
    r0 = 0x086FABF4U; // [0x08017C14]
    r1 = *(u32*)(r4 + 0x2C);
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08017B2A
    r2 = 0x800U; // (1 << 11)
    r1 = 0x2U;
    r0 = 0x06007800U; // [0x08017BE0]
    r0 = sub_08049168(r0, r1, r2, r3); // 0x08017B36: BL 0x08049168
    r0 = 0x3U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xDU;
    r5 = 0x0U;
    r6 = 0x1EU;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    stack[2] = r6; // [sp + 0x8]
    r2 = 0x2U;
    stack[0] = r5; // [sp + 0x0]
    r1 = 0x06007800U; // [0x08017BE0]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08017B50
    r0 = 0x11U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x14U;
    stack[3] = r0; // [sp + 0xC]
    r2 = 0xFFU;
    r2 += 0x2FU;
    r0 = sp;
    stack[0] = r5; // [sp + 0x0]
    stack[2] = r6; // [sp + 0x8]
    r1 = 0x06007800U; // [0x08017BE0]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x08017B68
    r0 = 0x18U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x68U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r4;
    r6 = 0xF0U;
    r0 += 0x8U;
    r4 = r0;
    stack[2] = r6; // [sp + 0x8]
    stack[0] = r5; // [sp + 0x0]
    r2 = sp;
    r1 = 0x06000080U; // [0x08017BE8]
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08017B84: BL 0x0804915C
    r0 = 0x88U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xA0U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r4;
    stack[0] = r5; // [sp + 0x0]
    stack[2] = r6; // [sp + 0x8]
    r2 = sp;
    r1 = 0x06004B80U; // [0x08017C18]
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08017B9A: BL 0x0804915C
    r0 = 0x0U;
    return sub_08017AF8(r0, r1, r2, r3);
loc_08017BA2:
    r2 = 0xFFU;
    r2 += 0x51U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08017BB8;
    r0 += 0xC0U;
    *(u8*)(r1 + 0x3) = (u8)r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = r2 - r0;
    *(u8*)(r1 + 0x2) = (u8)r0;
    r0 = 0x0U;
    return sub_08017AF8(r0, r1, r2, r3);
loc_08017BB8:
    r2 = 0xFFU;
    r2 += 0xF5U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08017BC4;
    r0 = 0x0U;
    return sub_08017AF8(r0, r1, r2, r3);
loc_08017BC4:
    r2 = 0x204U; // (129 << 2)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08017BD6;
    r0 = r2 - r0;
    r0 = ((u32)((s32)r0 >> 1));
    *(u8*)(r1 + 0x3) = (u8)r0;
    r0 = 0x0U;
    return sub_08017AF8(r0, r1, r2, r3);
loc_08017BD6:
    r0 = 0x1U;
    return sub_08017AF8(r0, r1, r2, r3);
}

// ROM Address: 0x08017BF2..0x08017C3E (76 bytes, Thumb)
u32 sub_08017BF2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 24);
    r3 = 0x08017E58U;
    r7 = (r5 >> 1);
    *(u16*)(r0 + 0x4) = (u16)r0;
    r0 = (r0 << 24);
    r3 = (r0 >> 30);
    r0 = r0;
    r3 = r0 - 6;
    r0 = r0;
    r4 = (r0 >> 1);
    r0 = r0;
    r3 = (r2 << 1);
    r0 = (r0 << 16);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r0 = (r2 << 1);
    r0 = (r0 << 16);
    r3 = 0x3D0; // sp + 0x3D0
    r7 = (r5 >> 1);
    r3 = 0xDA074288U; // [0x08017E1C]
    r0 = (r0 << 24);
    r6 = 0x38; // sp + 0x38
    r7 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    if (cmp_lhs != cmp_rhs) return sub_08017C3E(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xD5U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08017C30: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08017C3E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08017C3E..0x08017C90 (82 bytes, Thumb)
u32 sub_08017C3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r5;
    r2 = r7;
    r0 = r4;
    stack[0] = r6; // [sp + 0x0]
    r1 = stack[6]; // [sp + 0x18]
    r0 = sub_080110D8(r0, r1, r2, r3); // 0x08017C48: BL 0x080110D8
    r0 = 0x0804C92CU /* &VTable_0804C92C */; // [0x08017E50]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r1 += 0xBDU;
    *(u16*)(r1 + r4) = (u16)r0;
    r1 = r4;
    r1 += 0x1C0U;
    r2 = stack[7]; // [sp + 0x1C]
    *(u32*)(r1) = (u32)r0;
    *(u32*)(r1 + 0x10) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    *(u32*)(r1 + 0x8) = (u32)r0;
    *(u32*)(r1 + 0xC) = (u32)r0;
    r0 = 0x086FC238U; // [0x08017E54]
    r1 = r4;
    r5 = *(u32*)(r0);
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08017C72: BL 0x0800FDFA
    r5 += 0x80U;
    r1 = *(u32*)(r5 + 0x28);
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08017C7E
    r2 = 0x0U;
    r0 = 0x4; // sp + 0x4
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08017C88
    r0 = r4;
    return sub_08017C3A(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy10_stores_the_table_and_frees_the_object
// ROM Address: 0x08017C90..0x08017D96 (262 bytes, Thumb)
u32 Object_Destroy10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804C92CU /* &VTable_0804C92C */; // [0x08017E50]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x1C0U;
    r0 = sub_08004102(r0, r1, r2, r3); // 0x08017CA0: BL 0x08004102
    r0 = 0xFFU;
    r0 += 0xB1U;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08017CB8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08017CB4: BL 0x08046AA2
loc_08017CB8:
    r0 = 0xFFU;
    r0 += 0x8DU;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08017CCE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08017CCA: BL __call_via_r3
loc_08017CCE:
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800EC34(r0, r1, r2, r3); // 0x08017CD2: BL 0x0800EC34
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08017CE0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08017CDC: BL 0x0803D63C
loc_08017CE0:
    return r0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_08017D9A(r0, r1, r2, r3);
    r6 = r4;
    r6 += 0x1C0U;
    r0 = *(u32*)(r6 + 0x10);
    r7 = r2;
    r5 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08017D96(r0, r1, r2, r3);
    r1 = r4;
    r0 = 0x2C; // sp + 0x2C
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08017D00: BL 0x0800FDFA
    r0 = stack[11]; // [sp + 0x2C]
    r1 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08017D96(r0, r1, r2, r3);
    r0 = *(u32*)(r5);
    r1 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08017D96(r0, r1, r2, r3);
    r0 = stack[12]; // [sp + 0x30]
    r1 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08017D96(r0, r1, r2, r3);
    r0 = *(u32*)(r5 + 0x4);
    r1 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08017D96(r0, r1, r2, r3);
    r0 = *(u32*)(r7 + 0x10);
    r2 = 0x1U;
    r1 = *(u8*)(r0 + 0x10);
    r0 += 0x1A0U;
    r1 ^= r2;
    *(u8*)(r4 + 0x10) = (u8)r1;
    r1 = r4;
    r1 += 0x180U;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r1 + 0x20);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0x24);
    r2 = r2 - r3;
    r0 = r0 - r1;
    stack[14] = r0; // [sp + 0x38]
    stack[13] = r2; // [sp + 0x34]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08017D52: BL __call_via_r3
    r2 = r4;
    r2 += 0x1BCU;
    stack[0] = r6; // [sp + 0x0]
    r5 = 0x8; // sp + 0x8
    r0 = r5;
    r1 = *(u32*)(r6 + 0x10);
    r3 = 0x34; // sp + 0x34
    r0 = sub_0801246E(r0, r1, r2, r3); // 0x08017D66
    r6 = 0x03001BACU; // [0x08017E58]
    r0 = 0x8U;
    *(u32*)(r6) = (u32)r4;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08017D70: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08017D7E;
    r1 = 0x08049D18U; // [0x08017E5C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
loc_08017D7E:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08017D7E
    r0 = 0x0U;
    *(u32*)(r6) = (u32)r0;
    r4 = 0x1U;
    r1 = 0x0U;
    r0 = r5;
    r0 = Ram_DecrementCount1(r0, r1, r2, r3); // 0x08017D8C: BL 0x080124D2
    r0 = r4;
    return r0;
}

// ROM Address: 0x08017D96..0x08017DA2 (12 bytes, Thumb)
u32 sub_08017D96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08017D92(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_080102D8(r0, r1, r2, r3); // 0x08017D9C: BL 0x080102D8
    return sub_08017D92(r0, r1, r2, r3);
}

// ROM Address: 0x08017DA2..0x08017E80 (222 bytes, Thumb)
u32 sub_08017DA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x10);
    r5 = r1;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08017DAC: BL 0x08000158
    r1 = r4;
    r1 += 0x8U;
    stack[0] = r1; // [sp + 0x0]
    r3 = r4;
    r3 += 0x14U;
    r1 = r0;
    stack[1] = r5; // [sp + 0x4]
    r2 = *(u32*)(r4 + 0xC);
    r0 = 0x0U;
    r0 = sub_08017C1C(r0, r1, r2, r3); // 0x08017DC2
    return r0;
    r1 = 0x086FC238U; // [0x08017E54]
    r4 = *(u32*)(r1);
    r1 = r0;
    r0 = sp;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08017DD6: BL 0x0800FDFA
    r4 += 0x80U;
    r1 = *(u32*)(r4 + 0x28);
    r2 = 0x1U;
    r0 = sp;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08017DE2
    r2 = 0x1U;
    r0 = sp;
    r1 = *(u32*)(r4 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08017DEC
    return r0;
    r4 = 0x14; // sp + 0x14
    r1 = r0;
    r0 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08017DFE: BL 0x0800FDFA
    r0 = 0x03001C34U; // [0x08017E60]
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08017E30;
    r0 = 0x4; // sp + 0x4
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08017E0C: BL 0x0800FDFA
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08017E30;
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08017E30;
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08017E30;
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08017E4A;
loc_08017E30:
    r0 = 0x086FC238U; // [0x08017E54]
    r2 = 0x0U;
    r5 = *(u32*)(r0);
    r5 += 0x80U;
    r1 = *(u32*)(r5 + 0x28);
    r0 = r4;
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08017E3C
    r2 = 0x0U;
    r0 = r4;
    r1 = *(u32*)(r5 + 0x30);
    r0 = sub_08009930(r0, r1, r2, r3); // 0x08017E46
loc_08017E4A:
    return r0;
    r0 = r0;
    r2 = *(u32*)r1; r1 += 4;
    r3 = *(u32*)r1; r1 += 4;
    r5 = *(u32*)r1; r1 += 4;
    r4 = (r0 >> 32);
    *(u32*)r2 = r3; r2 += 4;
    *(u32*)r2 = r4; r2 += 4;
    *(u32*)r2 = r5; r2 += 4;
    r7 = (r5 >> 1);
    r4 = r5 - r6;
    r0 = (r0 << 12);
    r5 = stack[24]; // [sp + 0x60]
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08017E80(r0, r1, r2, r3);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08017E72: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08017E80(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08017E80..0x08017EC2 (66 bytes, Thumb)
u32 sub_08017E80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5 + 0x14);
    r2 = *(u32*)(r5 + 0x18);
    r3 = *(u32*)(r5 + 0x1C);
    r6 = *(u32*)(r5 + 0x20);
    r1 -= 0x4U;
    r2 -= 0x4U;
    r3 += 0x4U;
    r6 += 0x4U;
    stack[3] = r6; // [sp + 0xC]
    stack[2] = r3; // [sp + 0x8]
    stack[1] = r2; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r0 = sub_0800776C(r0, r1, r2, r3); // 0x08017E98
    r6 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x08018260]
    r3 = 0x8; // sp + 0x8
    *(u32*)(r4) = (u32)r0;
    r0 = stack[0]; // [sp + 0x0]
    r1 = stack[1]; // [sp + 0x4]
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 -= 0xFU;
    *(u16*)(r4 + 0x4) = (u16)r0;
    r1 -= 0x7U;
    *(u16*)(r4 + 0x6) = (u16)r1;
    *(u16*)(r4 + 0x8) = (u16)r2;
    r0 = 0x0804A0C0U /* &VTable_0804A0C0 */; // [0x08018264]
    *(u16*)(r4 + 0xA) = (u16)r3;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r5;
    *(u32*)(r4 + 0xC) = (u32)r6;
    r0 = r4;
    return sub_08017E7C(r0, r1, r2, r3);
}

// ROM Address: 0x08017EC2..0x08017F7A (184 bytes, Thumb)
u32 sub_08017EC2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x086FC23CU; // [0x08018268]
    r4 = r0;
    r1 = *(u32*)(r4 + 0x60);
    r0 = *(u32*)(r5 + 0x8);
    r2 = 0x000004F4U; // [0x0801826C]
    r1 = *(u32*)(r1 + 0xC);
    r0 = r0 + r2;
    r2 = *(u32*)(r0);
    r1 = r2 + r1;
loc_08017ED6:
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08017ED6;
    r1 = 0x21U;
    r2 = 0x083192A8U; // [0x08018270]
    r1 = (r1 << 4);
    r1 = r1 + r2;
    r6 = 0x000005C4U; // [0x08018274]
    r0 = *(u32*)(r5);
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08017EF0
    r1 = r4;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08017EF8
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_08017EC2(r0, r1, r2, r3); // 0x08017F04: BL 0x08017EC2
    r0 = 0x086FC23CU; // [0x08018268]
    r1 = r4;
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_0801268A(r0, r1, r2, r3); // 0x08017F0E
    return r0;
    r3 = *(u32*)r1; r1 += 4;
    r4 = *(u32*)r1; r1 += 4;
    *(u32*)(r0 + 0x48) = (u32)r3;
    *(u32*)(r0 + 0x4C) = (u32)r4;
    r2 = *(u32*)(r0 + 0x60);
    r1 -= 0x8U;
    r4 = *(u8*)(r2);
    r3 = *(u32*)(r1);
    r4 = (r4 >> 1);
    r3 = r3 - r4;
    *(u32*)(r0 + 0x38) = (u32)r3;
    r2 = *(u8*)(r2);
    r2 = r3 + r2;
    *(u32*)(r0 + 0x40) = (u32)r2;
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r4 = *(u32*)(r2);
    r5 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r2 + 0x4);
    r3 = *(u32*)(r1 + 0x8);
    r4 = r4 + r5;
    r2 = r2 + r3;
    stack[1] = r2; // [sp + 0x4]
    stack[0] = r4; // [sp + 0x0]
    r1 = *(u8*)(r1);
    r1 = (r1 >> 1);
    r1 = r4 - r1;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    return r0; // BX lr
    r7 = r3;
    r6 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08017F7A(r0, r1, r2, r3);
    r0 = 0x6CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08017F6C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08017F7A(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08017F7A..0x08018078 (254 bytes, Thumb)
u32 sub_08017F7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r6 + 0x4);
    r3 = r6 + 2;
    r1 = r1 + r2;
    r2 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r6 + 0x8);
    stack[1] = r1; // [sp + 0x4]
    r0 = r2 + r0;
    stack[2] = r0; // [sp + 0x8]
    r2 = *(u8*)(r6);
    r0 = r1;
    r1 = stack[2]; // [sp + 0x8]
    r2 = (r2 >> 1);
    r0 = r0 - r2;
    stack[3] = r0; // [sp + 0xC]
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r6 + 0x10);
    r0 = r4;
    r2 = 0xC; // sp + 0xC
    r0 = sub_08018550(r0, r1, r2, r3); // 0x08017FA0: BL 0x08018550
    r0 = 0x08049CC4U /* &VTable_08049CC4 */; // [0x08018278]
    r1 = r4;
    r1 += 0x30U;
    *(u32*)(r4) = (u32)r0;
    r0 = r1 + 4;
    stack[7] = r0; // [sp + 0x1C]
    r0 += 0x1CU;
    stack[6] = r0; // [sp + 0x18]
    r0 += 0x4U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x0U;
    r0 = ~r0;
    stack[8] = r1; // [sp + 0x20]
    *(u32*)(r4 + 0x64) = (u32)r0;
    *(u32*)(r4 + 0x60) = (u32)r6;
    r0 = 0x0U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = sub_0803FAAC(r0, r1, r2, r3); // 0x08017FC8
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = stack[6]; // [sp + 0x18]
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r0) = (u32)r1;
    r0 = stack[5]; // [sp + 0x14]
    r2 = (r2 << 8);
    *(u32*)(r0) = (u32)r2;
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08017FE2
    r1 = *(u32*)(r7 + 0x4);
    r0 -= 0x80U;
    r0 *= r1;
    r1 = *(u32*)(r7);
    r0 = ((u32)((s32)r0 >> 8));
    r0 = r0 + r1;
    *(u32*)(r4 + 0x58) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08017FF8
    r1 = *(u32*)(r7);
    r0 -= 0x80U;
    r0 *= r1;
    r1 = *(u32*)(r7 + 0x4);
    r0 = ((u32)((s32)r0 >> 8));
    r0 = r0 + r1;
    *(u32*)(r4 + 0x5C) = (u32)r0;
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0801800C
    r1 = *(u32*)(r4 + 0x58);
    r0 += 0xE0U;
    r0 *= r1;
    r0 = ((u32)((s32)r0 >> 8));
    *(u32*)(r4 + 0x58) = (u32)r0;
    r0 = 0x40U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0801801C
    r1 = *(u32*)(r4 + 0x5C);
    r0 += 0xE0U;
    r0 *= r1;
    r0 = ((u32)((s32)r0 >> 8));
    *(u32*)(r4 + 0x5C) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r1 = stack[8]; // [sp + 0x20]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r1 = stack[7]; // [sp + 0x1C]
    r0 = 0x80U;
    *(u32*)(r1) = (u32)r0;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08017E64(r0, r1, r2, r3); // 0x0801803E
    r2 = r0;
    *(u32*)(r4 + 0x68) = (u32)r0;
    r0 = 0x086FC23CU; // [0x08018268]
    r0 = *(u32*)(r0 + 0x10);
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x48) = (u32)r1;
    *(u32*)(r4 + 0x4C) = (u32)r2;
    r0 = *(u32*)(r4 + 0x60);
    r5 -= 0x8U;
    r2 = *(u8*)(r0);
    r1 = *(u32*)(r5);
    r2 = (r2 >> 1);
    r1 = r1 - r2;
    *(u32*)(r4 + 0x38) = (u32)r1;
    r0 = *(u8*)(r0);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x40) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r4;
    return sub_08017F76(r0, r1, r2, r3);
}

// ROM Address: 0x08018078..0x0801809E (38 bytes, Thumb)
u32 sub_08018078(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x24);
    r1 = 0x4BU;
    r0 += 0x1U;
    r1 = (r1 << 3);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    *(u32*)(r4 + 0x24) = (u32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801809C;
    r5 = 0x086FC23CU; // [0x08018268]
    r1 = *(u32*)(r4 + 0x68);
    r0 = *(u32*)(r5 + 0x10);
    r0 = sub_0801268A(r0, r1, r2, r3); // 0x08018090
    r1 = r4;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08018098
loc_0801809C:
    return r0;
}

// ROM Address: 0x0801809E..0x080181D4 (310 bytes, Thumb)
u32 sub_0801809E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r6 = r4;
    r5 = r4;
    r0 = *(u32*)(r0 + 0x2C);
    r5 += 0x14U;
    r6 += 0x30U;
    r1 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 60;
    if (cmp_lhs >= cmp_rhs) goto loc_08018198;
    r0 += 0x1U;
    r2 = r4;
    r2 += 0x50U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    stack[16] = r2; // [sp + 0x40]
    r1 = *(u32*)(r4 + 0x50);
    r3 = *(u32*)(r4 + 0x58);
    r2 += 0x4U;
    stack[15] = r2; // [sp + 0x3C]
    r2 = *(u32*)(r2);
    r0 = *(u32*)(r4 + 0x5C);
    r1 = r1 + r3;
    r0 = r2 + r0;
    stack[10] = r0; // [sp + 0x28]
    r0 = r1;
    stack[9] = r1; // [sp + 0x24]
    r1 = stack[10]; // [sp + 0x28]
    stack[11] = r0; // [sp + 0x2C]
    stack[12] = r1; // [sp + 0x30]
    stack[14] = r1; // [sp + 0x38]
    r1 = ((u32)((s32)r0 >> 8));
    stack[13] = r0; // [sp + 0x34]
    r0 = stack[14]; // [sp + 0x38]
    stack[9] = r1; // [sp + 0x24]
    r0 = ((u32)((s32)r0 >> 8));
    stack[10] = r0; // [sp + 0x28]
    stack[12] = r0; // [sp + 0x30]
    r0 = r1;
    stack[11] = r1; // [sp + 0x2C]
    r1 = *(u32*)(r4 + 0x48);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080180FC;
    r0 = stack[12]; // [sp + 0x30]
    r1 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080181BA;
loc_080180FC:
    r0 = stack[11]; // [sp + 0x2C]
    r1 = *(u32*)(r4 + 0x48);
    r0 = r0 - r1;
    r1 = stack[12]; // [sp + 0x30]
    r2 = *(u32*)(r4 + 0x4C);
    stack[5] = r0; // [sp + 0x14]
    r1 = r1 - r2;
    stack[6] = r1; // [sp + 0x18]
    r2 = stack[6]; // [sp + 0x18]
    r1 = r0;
    r0 = *(u32*)(r5);
    r3 = *(u32*)(r5 + 0x4);
    r0 = r0 + r1;
    r3 = r3 + r2;
    stack[2] = r3; // [sp + 0x8]
    stack[1] = r0; // [sp + 0x4]
    r7 = r0;
    r0 = stack[2]; // [sp + 0x8]
    r3 = *(u32*)(r5 + 0x8);
    r12 = r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = r3 + r1;
    r0 = r0 + r2;
    r2 = r0;
    stack[2] = r0; // [sp + 0x8]
    r0 = r12;
    stack[4] = r0; // [sp + 0x10]
    stack[3] = r7; // [sp + 0xC]
    r0 = 0xC; // sp + 0xC
    stack[6] = r2; // [sp + 0x18]
    stack[1] = r1; // [sp + 0x4]
    stack[5] = r1; // [sp + 0x14]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r7 = 0x1C; // sp + 0x1C
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r0 = 0x086FC23CU; // [0x08018268]
    r7 -= 0x10U;
    r0 = *(u32*)(r0 + 0xC);
    r0 += 0x80U;
    r1 = *(u32*)(r0 + 0x28);
    r0 = 0x1C; // sp + 0x1C
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0801814E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080181BA;
    r0 = stack[13]; // [sp + 0x34]
    r2 = stack[16]; // [sp + 0x40]
    *(u32*)(r2) = (u32)r0;
    r2 = 0x38; // sp + 0x38
    r0 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    *(u32*)(r2) = (u32)r0;
    r2 = 0x2C; // sp + 0x2C
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    *(u32*)(r4 + 0x48) = (u32)r1;
    *(u32*)(r4 + 0x4C) = (u32)r2;
    r1 = stack[11]; // [sp + 0x2C]
    r0 = *(u32*)(r4 + 0x60);
    r2 = *(u8*)(r0);
    r2 = (r2 >> 1);
    r1 = r1 - r2;
    *(u32*)(r4 + 0x38) = (u32)r1;
    r0 = *(u8*)(r0);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x40) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)r7; r7 += 4;
    r1 = *(u32*)r7; r7 += 4;
    r2 = *(u32*)r7; r7 += 4;
    r3 = *(u32*)r7; r7 += 4;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r0 = *(u32*)(r4 + 0x68);
    r2 = *(u32*)(r4 + 0x14);
    r3 = *(u32*)(r4 + 0x18);
    r7 = *(u32*)(r4 + 0x1C);
    r5 -= 0x10U;
    r2 -= 0x4U;
    r3 -= 0x4U;
    r7 += 0x4U;
    r12 = r7;
    goto loc_0801819A;
loc_08018198:
    return sub_080181D4(r0, r1, r2, r3);
loc_0801819A:
    r7 = *(u32*)(r4 + 0x20);
    r1 = r2;
    r7 += 0x4U;
    stack[6] = r7; // [sp + 0x18]
    r7 = r12;
    r1 -= 0xFU;
    stack[3] = r2; // [sp + 0xC]
    stack[5] = r7; // [sp + 0x14]
    stack[4] = r3; // [sp + 0x10]
    r7 = stack[6]; // [sp + 0x18]
    r2 = r3 - 7;
    *(u16*)(r0 + 0x4) = (u16)r1;
    *(u16*)(r0 + 0x6) = (u16)r2;
    r3 = r12;
    *(u16*)(r0 + 0x8) = (u16)r3;
    *(u16*)(r0 + 0xA) = (u16)r7;
loc_080181BA:
    r0 = *(u32*)(r4 + 0x34);
    r0 -= 0x4U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r1 = *(u32*)(r4 + 0x30);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x30) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_080181D6(r0, r1, r2, r3);
    r0 = (u32)(-(s32)r0);
    *(u32*)(r6) = (u32)r0;
    r0 = 0x80U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    return sub_080181D6(r0, r1, r2, r3);
}

// ROM Address: 0x080181D4..0x08018236 (98 bytes, Thumb)
u32 sub_080181D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r6) = (u32)r1;
    r0 = *(u32*)(r4 + 0x30);
    r1 = *(u32*)(r4 + 0x4C);
    r0 = ((u32)((s32)r0 >> 8));
    r0 = r1 - r0;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r1 = *(u32*)(r4 + 0x60);
    r1 = *(u8*)(r1 + 0x1);
    r0 = r0 - r1;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r0 = 0x1C; // sp + 0x1C
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r2 = stack[7]; // [sp + 0x1C]
    r1 = *(u32*)(r4 + 0x38);
    r0 -= 0x10U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_080181FA;
    stack[7] = r1; // [sp + 0x1C]
loc_080181FA:
    r2 = stack[8]; // [sp + 0x20]
    r1 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08018204;
    stack[8] = r1; // [sp + 0x20]
loc_08018204:
    r2 = stack[9]; // [sp + 0x24]
    r1 = *(u32*)(r4 + 0x40);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0801820E;
    stack[9] = r1; // [sp + 0x24]
loc_0801820E:
    r2 = stack[10]; // [sp + 0x28]
    r1 = *(u32*)(r4 + 0x44);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08018218;
    stack[10] = r1; // [sp + 0x28]
loc_08018218:
    r5 = 0x2C; // sp + 0x2C
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    r1 = 0xFFU;
    r0 = *(u32*)(r4 + 0x24);
    r1 += 0xE1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) return sub_08018236(r0, r1, r2, r3);
    r0 = 0x03000F90U; // [0x0801827C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = (r0 << 29);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08018236(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08018236..0x08018260 (42 bytes, Thumb)
u32 sub_08018236(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x086FC23CU; // [0x08018268]
    r0 = *(u32*)(r0 + 0xC);
    r1 = stack[11]; // [sp + 0x2C]
    r0 += 0x18U;
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_08018280(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_08018280(r0, r1, r2, r3);
    r1 = stack[12]; // [sp + 0x30]
    r2 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_08018280(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x4);
    r1 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08018280(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08018232(r0, r1, r2, r3);
}

// ROM Address: 0x08018280..0x08018284 (4 bytes, Thumb)
u32 sub_08018280(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08018232(r0, r1, r2, r3);
}

// ROM Address: 0x08018284..0x08018340 (188 bytes, Thumb)
u32 sub_08018284(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x28);
    r0 += 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
    r0 = (r0 << 24);
    r5 = r1;
    r1 = (r0 >> 27);
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs <= cmp_rhs) goto loc_0801829C;
    r1 = 0x0U;
loc_0801829C:
    r0 = *(u32*)(r4 + 0x64);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080182BC;
    *(u32*)(r4 + 0x64) = (u32)r1;
    r0 = *(u16*)(r4 + 0xC);
    r2 = 0x06010000U; // [0x08018388]
    r3 = *(u32*)(r4 + 0x60);
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r2 = *(u32*)(r3 + 0x10);
    r6 = r2;
    r6 *= r1;
    r1 = r3 + r6;
    r1 += 0x18U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080182B8: BL 0x08049138
loc_080182BC:
    r0 = 0x086FC23CU; // [0x0801838C]
    r1 = *(u32*)(r4 + 0x38);
    r0 = *(u32*)(r0 + 0xC);
    r3 = 0xFE00FFFFU; // [0x08018390]
    r0 += 0x28U;
    r2 = *(u32*)(r0);
    r1 = r1 - r2;
    r2 = *(u32*)(r4 + 0x3C);
    r0 = *(u32*)(r0 + 0x4);
    stack[0] = r1; // [sp + 0x0]
    r0 = r2 - r0;
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    r1 = stack[1]; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r0 = *(u32*)(r5);
    r1 = r0;
    r1 += 0x8U;
    *(u32*)(r5) = (u32)r1;
    r1 = *(u32*)(r4 + 0x60);
    r1 = *(u32*)(r1 + 0x14);
    r2 = stack[2]; // [sp + 0x8]
    r1 &= r3;
    r2 = (r2 << 23);
    r2 = (r2 >> 7);
    r2 |= r1;
    r1 = stack[3]; // [sp + 0xC]
    r2 = (r2 >> 8);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r2 = (r2 << 8);
    r1 |= r2;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u8*)(r4 + 0x8);
    r2 = *(u32*)(r0 + 0x4);
    r3 = 0x3U;
    r1 = (r1 << 26);
    r1 = (r1 >> 30);
    r3 = (r3 << 10);
    r2 &= ~r3;
    r1 = (r1 << 10);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r2 = *(u16*)(r4 + 0xC);
    r1 = (r1 >> 10);
    r1 = (r1 << 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r1 |= r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = r5;
    r0 = r4;
    r0 = sub_08018614(r0, r1, r2, r3); // 0x08018326
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_08018340(r0, r1, r2, r3);
    r3 = 0x0U;
    r3 = ~r3;
    *(u32*)(r0 + 0x64) = (u32)r3;
    r0 = sub_0801870E(r0, r1, r2, r3); // 0x0801833A
    return r0;
}

// ROM Address: 0x08018340..0x08018346 (6 bytes, Thumb)
u32 sub_08018340(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0801870E(r0, r1, r2, r3); // 0x08018340
    return sub_0801833E(r0, r1, r2, r3);
}

// ROM Address: 0x08018346..0x08018392 (76 bytes, Thumb)
u32 sub_08018346(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r0 = (r1 << 2);
    r1 = 0x086FC23CU; // [0x0801838C]
    r6 = r2;
    r1 += 0x14U;
    r5 = 0x086FC23CU; // [0x0801838C]
    r4 = *(u32*)(r1 + r0);
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08018358
    r1 = 0x3000U; // (3 << 12)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08018384;
    r0 = *(u32*)(r5 + 0x10);
    r1 = 0x30U;
    r0 = *(u32*)(r0);
    r0 = r1 - r0;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs <= cmp_rhs) goto loc_08018384;
    r3 = r6;
    r2 = r7;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08017F5A(r0, r1, r2, r3); // 0x08018378
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08018380: BL 0x0801191A
loc_08018384:
    return r0;
    r0 = r0;
    r0 = r0;
    r1 = (r0 << 24);
    *(u32*)r2 = r2; r2 += 4;
    *(u32*)r2 = r3; r2 += 4;
    *(u32*)r2 = r4; r2 += 4;
    *(u32*)r2 = r5; r2 += 4;
    r7 = (r5 >> 1);
    return r0;
}

// ROM Address: 0x08018396..0x08018546 (432 bytes, Thumb)
u32 sub_08018396(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r1 + 0x4);
    r6 = r1;
    r1 = 0x03001BACU; // [0x080184B4]
    r7 = r0;
    r0 = 0x1U;
    r1 = *(u32*)(r1);
    r5 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080183AC;
    r5 = 0x0U;
loc_080183AC:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080183B4;
    r1 = 0x03002A58U; // [0x080184B8]
    *(u32*)(r1) = (u32)r0;
loc_080183B4:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080183BC: BL 0x08046AA2
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
    r1 = 0x0U;
    stack[2] = r0; // [sp + 0x8]
    r7 = *(u32*)(r7 + 0x8);
    r0 = *(u32*)(r6);
    *(u32*)(r6) = (u32)r1;
    r6 = r0;
    r1 = r4;
    r4 = 0x086FCCC0U; // [0x080184BC]
    r0 = *(u32*)(r4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080183EE
    r1 = stack[3]; // [sp + 0xC]
    r3 = 0x0; // sp + 0x0
    r0 = stack[4]; // [sp + 0x10]
    *(u16*)(r3 + 0x4) = (u16)r1;
    *(u16*)(r3 + 0x6) = (u16)r0;
    r0 = r7;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080183FE: BL 0x08000158
    r1 = r0;
    r0 = 0x0U;
    r2 = 0x4; // sp + 0x4
    r0 = sub_0801111C(r0, r1, r2, r3); // 0x08018408: BL 0x0801111C
    r7 = r0;
    r0 = stack[2]; // [sp + 0x8]
    r1 = r7;
    *(u8*)(r7 + 0x10) = (u8)r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08018416: BL 0x0801191A
    r1 = r7;
    r1 += 0x18CU;
    r0 = r6;
    r0 = sub_080192BA(r0, r1, r2, r3); // 0x08018422
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801842E;
    r1 = 0x03001BACU; // [0x080184B4]
    *(u32*)(r1) = (u32)r7;
loc_0801842E:
    return r0;
    r4 = *(u32*)(r1 + 0x4);
    r5 = r1;
    r1 = 0x03001BACU; // [0x080184B4]
    r0 = 0x1U;
    r1 = *(u32*)(r1);
    r6 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08018448;
    r6 = 0x0U;
loc_08018448:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018450;
    r1 = 0x03002A58U; // [0x080184B8]
    *(u32*)(r1) = (u32)r0;
loc_08018450:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x3C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08018458: BL 0x08046AA2
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
    r7 = *(u8*)(r4 + 0x10);
    r0 = *(u32*)(r5);
    r1 = 0x0U;
    *(u32*)(r5) = (u32)r1;
    r5 = r0;
    r1 = r4;
    r4 = 0x086FCCC0U; // [0x080184BC]
    r0 = *(u32*)(r4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08018486
    r0 = stack[5]; // [sp + 0x14]
    r3 = r7;
    r1 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r4 + 0x4);
    r2 = 0xC; // sp + 0xC
    r0 = sub_08009124(r0, r1, r2, r3); // 0x08018494
    r1 = r0;
    r1 += 0x18CU;
    r4 = r0;
    r0 = r5;
    r0 = sub_080192BA(r0, r1, r2, r3); // 0x080184A2
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080184AE;
    r1 = 0x03001BACU; // [0x080184B4]
    *(u32*)(r1) = (u32)r4;
loc_080184AE:
    return r0;
    r0 = r0;
    r4 = r5 - r6;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r2; cmp_rhs = 88;
    r0 = (r0 << 12);
    r6 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r7 = (r5 >> 1);
    r4 = r0;
    r0 = *(u32*)(r0 + 0x10);
    r7 = r2;
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080184F6;
    r5 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r5);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r5) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080184F6;
    r0 = *(u16*)(r5 + 0x2);
    r1 = 0x0000FFFFU; // [0x08018788]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080184F6;
    r3 = 0x2U;
    r0 = 0x086FCCC8U; // [0x0801878C]
    r1 = (u32)(*(s16*)(r5 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080184EC
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r5 + 0x2) = (u16)r0;
loc_080184F6:
    r1 = r7;
    r0 = r6;
    r0 = sub_08013E38(r0, r1, r2, r3); // 0x080184FA
    *(u32*)(r4 + 0x10) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08018546(r0, r1, r2, r3);
    r5 = *(u32*)(r0 + 0x8);
    r6 = *(u16*)(r0 + 0x2);
    r7 = *(u32*)(r0 + 0x4);
    r0 = *(u8*)(r5);
    r1 = r0 + 1;
    *(u8*)(r5) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08018532;
    r0 = 0x086FCCC8U; // [0x0801878C]
    r1 = r6;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0801851A
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r5 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x08018790]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = r6;
    r1 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0801852E: BL 0x08049138
loc_08018532:
    r1 = *(u32*)(r4 + 0x10);
    r2 = *(u32*)(r4 + 0x14);
    r0 = *(u8*)(r1);
    r1 = *(u8*)(r1 + 0x1);
    r0 = r2 + r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x20) = (u32)r0;
    return r0;
}

// ROM Address: 0x08018546..0x08018550 (10 bytes, Thumb)
u32 sub_08018546(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x14);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    *(u32*)(r4 + 0x20) = (u32)r0;
    return sub_08018544(r0, r1, r2, r3);
}

// ROM Address: 0x08018550..0x0801856C (28 bytes, Thumb)
u32 sub_08018550(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801856C(r0, r1, r2, r3);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08018560: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801856C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801856C..0x080185B8 (76 bytes, Thumb)
u32 sub_0801856C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08018794]
    r1 = r5;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x086FCCC8U; // [0x0801878C]
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08018578
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08018594;
    r0 = 0x086FCCC8U; // [0x0801878C]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08018586: BL 0x08011732
    r0 = 0x086FCCC8U; // [0x0801878C]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08018590
loc_08018594:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804C534U /* &VTable_0804C534 */; // [0x08018798]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    *(u32*)(r4 + 0x14) = (u32)r1;
    *(u32*)(r4 + 0x18) = (u32)r2;
    r2 = *(u8*)(r7 + 0x1);
    r6 -= 0x8U;
    r0 = r4;
    r1 = *(u8*)(r7);
    r0 = sub_080184C0(r0, r1, r2, r3); // 0x080185AC
    r0 = *(u32*)(r6 + 0x4);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r4;
    return sub_0801856A(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy11_stores_the_three_tables_and_frees_the_object
// ROM Address: 0x080185B8..0x08018626 (110 bytes, Thumb)
u32 Object_Destroy11(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804C534U /* &VTable_0804C534 */; // [0x08018798]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x10);
    r7 = 0x086FCCC8U; // [0x0801878C]
    r6 = 0x0000FFFFU; // [0x08018788]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080185F0;
    r5 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r5);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r5) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080185F0;
    r0 = *(u16*)(r5 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) goto loc_080185F0;
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r5 + r3));
    r0 = *(u32*)(r7);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080185E6
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r5 + 0x2) = (u16)r0;
loc_080185F0:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08018794]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs == cmp_rhs) goto loc_08018600;
    r0 = *(u32*)(r7);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080185FC
loc_08018600:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0801879C]
    *(u32*)(r4) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018610;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801860C: BL 0x0803D63C
loc_08018610:
    return r0;
    r2 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08018626(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08018626..0x08018696 (112 bytes, Thumb)
u32 sub_08018626(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x086FCCC8U; // [0x0801878C]
    r3 = *(u32*)(r0 + 0x14);
    r2 = *(u32*)(r2 + 0x4);
    r2 += 0x28U;
    r4 = *(u32*)(r2);
    r3 = r3 - r4;
    r4 = *(u32*)(r0 + 0x18);
    r2 = *(u32*)(r2 + 0x4);
    stack[0] = r3; // [sp + 0x0]
    r2 = r4 - r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = r3;
    r3 = stack[1]; // [sp + 0x4]
    stack[2] = r2; // [sp + 0x8]
    stack[3] = r3; // [sp + 0xC]
    r2 = *(u32*)(r1);
    r4 = 0xFE00FFFFU; // [0x080187A0]
    r3 = r2;
    r3 += 0x8U;
    *(u32*)(r1) = (u32)r3;
    r1 = r2;
    r2 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r2 + 0xC);
    r3 = stack[2]; // [sp + 0x8]
    r2 &= r4;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r3 |= r2;
    r2 = stack[3]; // [sp + 0xC]
    r3 = (r3 >> 8);
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r3 = (r3 << 8);
    r3 |= r2;
    *(u32*)(r1) = (u32)r3;
    r2 = *(u8*)(r0 + 0x8);
    r4 = 0xC00U; // (3 << 10)
    r3 = (r2 << 26);
    r2 = *(u32*)(r1 + 0x4);
    r3 = (r3 >> 30);
    r3 = (r3 << 10);
    r2 &= ~r4;
    r3 |= r2;
    *(u32*)(r1 + 0x4) = (u32)r3;
    r0 = *(u32*)(r0 + 0x10);
    r2 = (r3 >> 10);
    r0 = *(u32*)(r0 + 0x8);
    r2 = (r2 << 10);
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r0 |= r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return sub_08018620(r0, r1, r2, r3);
}

// ROM Address: 0x08018696..0x08018752 (188 bytes, Thumb)
u32 sub_08018696(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = sub_08011818(r0, r1, r2, r3); // 0x0801869A
    r0 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080186D2;
    r4 = *(u32*)(r0 + 0x8);
    r5 = *(u16*)(r0 + 0x2);
    r6 = *(u32*)(r0 + 0x4);
    r0 = *(u8*)(r4);
    r1 = r0 + 1;
    *(u8*)(r4) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080186D2;
    r0 = 0x086FCCC8U; // [0x0801878C]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080186BA
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r4 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x08018790]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = r5;
    r1 = r6;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080186CE: BL 0x08049138
loc_080186D2:
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018706;
    r4 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r4);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08018706;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x08018788]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08018706;
    r3 = 0x2U;
    r0 = 0x086FCCC8U; // [0x0801878C]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080186FC
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_08018706:
    r0 = r5;
    r0 = Handle_Release1(r0, r1, r2, r3); // 0x08018708: BL 0x08011568
    return r0;
    r6 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 10;
    r2 = 0x086FCCC8U; // [0x0801878C]
    if (cmp_lhs == cmp_rhs) return sub_08018752(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_08018782(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801874E;
    r4 = *(u32*)(r0 + 0x8);
    r5 = *(u16*)(r0 + 0x2);
    r7 = *(u32*)(r0 + 0x4);
    r0 = *(u8*)(r4);
    r1 = r0 + 1;
    *(u8*)(r4) = (u8)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801874E;
    r1 = r5;
    r0 = *(u32*)(r2);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08018736
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    *(u16*)(r4 + 0x2) = (u16)r0;
    r1 = 0x06010000U; // [0x08018790]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r2 = r5;
    r1 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0801874A: BL 0x08049138
loc_0801874E:
    r0 = r6;
    return r0;
}

// ROM Address: 0x08018752..0x08018786 (52 bytes, Thumb)
u32 sub_08018752(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801877E;
    r4 = *(u32*)(r0 + 0x8);
    r0 = *(u8*)(r4);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801877E;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x08018788]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0801877E;
    r3 = 0x2U;
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r2);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08018774
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_0801877E:
    r0 = r6;
    return sub_08018750(r0, r1, r2, r3);
    r0 = r6;
    return sub_08018750(r0, r1, r2, r3);
}

// ROM Address: 0x080187A8..0x080187B4 (12 bytes, Thumb)
u32 sub_080187A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080187B4(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080187B4..0x080187D4 (32 bytes, Thumb)
u32 sub_080187B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r1);
    r3 = 0x290U; // (41 << 4)
    r3 = r0 + r3;
    *(u8*)(r3) = (u8)r2;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x58);
    r3 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080187C4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080187D0;
    r0 = 0x2U;
    return sub_080187B2(r0, r1, r2, r3);
loc_080187D0:
    r0 = 0x1U;
    return sub_080187B2(r0, r1, r2, r3);
}

// ROM Address: 0x080187D4..0x08018836 (98 bytes, Thumb)
u32 sub_080187D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x7U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080187E2: BL __call_via_r3
    r0 = 0x1U;
    r4 += 0x1C0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    return r0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x7U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080187FE: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801881C;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x7U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018810: BL __call_via_r3
    r0 = 0x1U;
    r4 += 0x1C0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
loc_0801881C:
    r0 = 0x1U;
    return r0;
    r2 = 0xFFU;
    r2 += 0xC9U;
    r0 = 0x0U;
    *(u32*)(r2 + r1) = r0;
    r0 = 0x03000F90U; // [0x08018858]
    r2 = 0x200U; // (1 << 9)
    r0 = *(u32*)(r0 + 0x4);
    r1 = r1 + r2;
    *(u32*)(r1 + 0x10) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08018836..0x0801883A (4 bytes, Thumb)
u32 sub_08018836(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002B98U; // [0x0801885C]
    return r0; // BX lr
}

// ROM Address: 0x0801883A..0x080188EA (176 bytes, Thumb)
u32 sub_0801883A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x7U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018848: BL __call_via_r3
    r0 = 0x1U;
    r4 += 0x1C0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    return r0;
    r0 = r0;
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    cmp_lhs = (s32)r3; cmp_rhs = 152;
    r0 = (r0 << 12);
    r3 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x6C);
    r2 = r2 + r1;
    r1 = *(u32*)(r3 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801886E: BL __call_via_r3
    r0 = 0x0U;
    return r0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801887C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801888A;
    r1 = 0x0804B0B0U; // [0x080188A4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0801888A:
    return r0;
    r3 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x6C);
    r2 = r2 + r1;
    r1 = *(u32*)(r3 + 0xC);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801889A: BL __call_via_r3
    r0 = 0x1U;
    return r0;
    r0 = r0;
    r4 = (r0 >> 32);
    r5 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080188B0: BL __call_via_r3
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080188B8: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080188C8;
    r1 = 0x080499E4U; // [0x080188F0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_080188C8:
    return r0;
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_0803FADE(r0, r1, r2, r3); // 0x080188D4
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080188EA(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x10);
    r2 = r6;
    r1 = r5;
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080188E4: BL __call_via_r3
    return r0;
}

// ROM Address: 0x080188EA..0x080188EE (4 bytes, Thumb)
u32 sub_080188EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080188EE..0x080188F4 (6 bytes, Thumb)
u32 sub_080188EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r1 = stack[228]; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080188F4..0x08018AD6 (482 bytes, Thumb)
u32 sub_080188F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x68);
    r2 = r2 + r1;
    r1 = *(u32*)(r3 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018902: BL __call_via_r3
    r0 = 0x1U;
    return r0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08018910: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801891E;
    r1 = 0x0804BC98U; // [0x0801894C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0801891E:
    return r0;
    r3 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x68);
    r2 = r2 + r1;
    r1 = *(u32*)(r3 + 0xC);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801892E: BL __call_via_r3
    r0 = 0x1U;
    return r0;
    r3 = r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x68);
    r2 = r2 + r1;
    r1 = *(u32*)(r3 + 0xC);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018944: BL __call_via_r3
    return r0;
    r0 = r0;
    r4 = (r0 >> 32);
    r7 = r2;
    r6 = r0;
    r4 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080189C8;
loc_0801895E:
    r0 = 0xFFU;
    r0 += 0xF1U;
    r5 = *(u32*)(r0 + r4);
    r0 = 0x14; // sp + 0x14
    r1 = r4;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08018968
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x74);
    r3 = r2 + r1;
    r2 = r7;
    r1 = *(u32*)(r6 + 0xC);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018978: BL __call_via_r3
    r1 = r4;
    r4 = 0x086FDA18U; // [0x08018A00]
    r0 = *(u32*)(r4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08018982
    r0 = *(u32*)(r4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08018988
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_080189C4;
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[7]; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    r1 = r0 + r1;
    r0 = stack[6]; // [sp + 0x18]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r3 = 0xC; // sp + 0xC
    r1 = r3;
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r2 = 0x38U;
    r0 = 0x0U;
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x080189B8
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x080189C0: BL 0x0801191A
loc_080189C4:
    r4 = r5;
    if (cmp_lhs != cmp_rhs) goto loc_0801895E;
loc_080189C8:
    return r0;
    r4 = *(u8*)(r1 + 0x10);
    r3 = 0x1U;
    r4 ^= r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r4;
    r0 = *(u32*)(r0 + 0x4);
    r2 = 0x4; // sp + 0x4
    r0 = sub_08018950(r0, r1, r2, r3); // 0x080189DE
    r0 = 0x0U;
    return r0;
    r4 = r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080189EE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080189FC;
    r1 = 0x08049C08U; // [0x08018A04]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_080189FC:
    return r0;
    r0 = r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08018A34;
    r7 = (r5 >> 1);
    r4 = stack[8]; // [sp + 0x20]
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x10U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x280U; // (5 << 7)
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x14);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018A26;
    r0 = *(u32*)(r4 + 0xC);
    r0 = (r0 << 2);
    *(u32*)(r4 + 0xC) = (u32)r0;
loc_08018A26:
    r1 = 0x290U; // (41 << 4)
    r0 = r5 + r1;
    r6 = *(u8*)(r0);
    r0 = 0x1U;
    r6 ^= r0;
    r1 = ((u32)((s32)r6 >> 1));
loc_08018A34:
    r0 ^= r1;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x40U;
    stack[2] = r1; // [sp + 0x8]
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08018A3C
    r1 = *(u32*)(r4 + 0xC);
    r0 += 0x60U;
    r0 *= r1;
    r7 = (r0 >> 7);
    r0 = stack[1]; // [sp + 0x4]
    r2 = 0x086FDA20U; // [0x08018BE0]
    r1 = (r6 << 2);
    r1 = *(u32*)(r2 + r1);
    r4 += 0x4U;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r1 *= r7;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x8000U; // (1 << 15)
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08018A5E
    r1 = 0x4000U; // (1 << 14)
    r0 = r0 - r1;
    r1 = stack[2]; // [sp + 0x8]
    r0 *= r7;
    r1 = (r1 << 2);
    r1 = r1 + r4;
    r0 = ((u32)((s32)r0 >> 12));
    *(u32*)(r1) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0xC9U;
    *(u8*)(r5 + 0x10) = (u8)r6;
    r0 = *(u32*)(r0 + r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08018A8E;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018A8A: BL __call_via_r3
loc_08018A8E:
    return r0;
    r5 = r0;
    r0 = r1;
    r0 += 0x1C0U;
    stack[24] = r0; // [sp + 0x60]
    r4 = r1;
    r1 = *(u32*)(r1);
    r0 = *(u32*)(r0 + 0x8);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08018AD6(r0, r1, r2, r3);
    r0 = r4;
    r1 = 0x7U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018AB2: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08018AC8;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x7U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018AC4: BL __call_via_r3
loc_08018AC8:
    r0 = *(u32*)(r5 + 0x10);
    r0 -= 0x1U;
    *(u32*)(r5 + 0x10) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08018AE6(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08018AD6..0x08018BCA (244 bytes, Thumb)
u32 sub_08018AD6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018ADA: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08018AE6;
    r0 = 0x1U;
    return sub_08018AD2(r0, r1, r2, r3);
loc_08018AE6:
    r1 = r4;
    r6 = 0x48; // sp + 0x48
    r0 = r6;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08018AEC: BL 0x0800FDFA
    r0 = r4;
    r0 += 0x1A0U;
    r2 = r5 + 4;
    stack[22] = r2; // [sp + 0x58]
    stack[23] = r0; // [sp + 0x5C]
    r1 = *(u32*)(r0);
    r3 = *(u32*)(r5 + 0x4);
    r7 = r2 + 4;
    r1 = r1 + r3;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r5 + 0x8);
    r5 = 0x38; // sp + 0x38
    r1 = r1 + r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = r4;
    r0 = r5;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08018B14: BL 0x0800FDFA
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x1U;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018B24: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x50);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018B32: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018B4C;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4C);
    r3 = r2 + r1;
    r2 = 0x0U;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018B46: BL __call_via_r3
    goto loc_08018BC6;
loc_08018B4C:
    r0 = stack[23]; // [sp + 0x5C]
    r1 = stack[22]; // [sp + 0x58]
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r1 = r2 - r1;
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
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018B6C: BL __call_via_r3
    r0 = 0x280U; // (5 << 7)
    r0 = r4 + r0;
    r1 = *(u32*)(r0 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08018B82;
    r0 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018BC6;
loc_08018B82:
    r6 = 0x4; // sp + 0x4
    r0 = r6 + 4;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r1 = 0x290U; // (41 << 4)
    r0 = r4 + r1;
    stack[9] = r4; // [sp + 0x24]
    r0 = *(u8*)(r0);
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x18) = (u8)r0;
    r0 = 0x086B80A0U; // [0x08018BE4]
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x43CCCCCDU; // [0x08018BE8]
    r0 = sub_08054A64(r0, r1, r2, r3); // 0x08018B9E: BL 0x08054A64
    stack[7] = r0; // [sp + 0x1C]
    r5 = 0x1U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r5;
    stack[13] = r4; // [sp + 0x34]
    r4 = stack[24]; // [sp + 0x60]
    r0 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x086FDA20U; // [0x08018BE0]
    r2 = r6;
    r1 = 0x0U;
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08018BBC
    r0 = 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r5;
    return sub_08018AD2(r0, r1, r2, r3);
loc_08018BC6:
    r0 = 0x0U;
    return sub_08018AD2(r0, r1, r2, r3);
}

// ROM Address: 0x08018BCA..0x08018BE0 (22 bytes, Thumb)
u32 sub_08018BCA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08018BD0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018BDE;
    r1 = 0x0804A138U /* &VTable_0804A138 */; // [0x08018BEC]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r4;
loc_08018BDE:
    return r0;
}

// ROM Address: 0x08018BE0..0x08018BE2 (2 bytes, Thumb)
u32 sub_08018BE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08018C24(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08018BE2..0x08018C04 (34 bytes, Thumb)
u32 sub_08018BE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r5 >> 1);
    *(u16*)(r4 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r0 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r6 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r4 = ~r1;
    r1 = 0x08018CD0U;
    r4 = (r0 >> 32);
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08018BFA;
    r0 = 0x1U;
    return r0; // BX lr
loc_08018BFA:
    r1 -= 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08018C04(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08018C04..0x08018C08 (4 bytes, Thumb)
u32 sub_08018C04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08018C08..0x08018C50 (72 bytes, Thumb)
u32 sub_08018C08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08018C0E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018C1C;
    r1 = 0x080497D4U; // [0x08018C20]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08018C1C:
    return r0;
    r0 = r0;
    stack[212] = r7; // [sp + 0x350]
    r4 = (r0 >> 32);
    r0 = *(u16*)(r1 + 0x12);
    r0 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08018C32;
    r0 = *(u32*)(r1 + 0x50);
    r0 = *(u32*)(r0);
    r0 = (r0 << 3);
    r0 -= 0x1U;
loc_08018C32:
    *(u16*)(r1 + 0x12) = (u16)r0;
    r0 = ((u32)((s32)r0 >> 3));
    *(u8*)(r1 + 0x11) = (u8)r0;
    return r0; // BX lr
    r6 = r0;
    r0 = 0x03001B94U; // [0x08018E40]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08018C50(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08018C50..0x08018CD0 (128 bytes, Thumb)
u32 sub_08018C50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08018C52: BL 0x0800FDFA
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
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x08018C76: BL 0x0800FDFA
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
    if (cmp_lhs >= cmp_rhs) goto loc_08018CB0;
    r0 = (u32)(-(s32)r2);
loc_08018CB0:
    r1 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08018CBA;
    r0 = (u32)(-(s32)r0);
loc_08018CBA:
    r7 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    stack[13] = r1; // [sp + 0x34]
    stack[14] = r0; // [sp + 0x38]
    if (cmp_lhs <= cmp_rhs) return sub_08018CD2(r0, r1, r2, r3);
    r1 = stack[15]; // [sp + 0x3C]
    r0 = 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_08018CCE;
    r0 = 0x3U;
loc_08018CCE:
    *(u8*)(r4 + 0x10) = (u8)r0;
    return r0;
}

// ROM Address: 0x08018E28..0x08018E5E (54 bytes, Thumb)
u32 sub_08018E28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08018E2E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018E3C;
    r1 = 0x08049C58U; // [0x08018E48]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08018E3C:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r3; cmp_rhs = 156;
    r0 = (r0 << 12);
    r4 = stack[88]; // [sp + 0x160]
    r4 = (r0 >> 32);
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x70);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08018E56: BL 0x08046AA2
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08018E5E..0x08018E62 (4 bytes, Thumb)
u32 sub_08018E5E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002BA4U; // [0x08018E84]
    return r0; // BX lr
}

// ROM Address: 0x08018E62..0x08019032 (464 bytes, Thumb)
u32 sub_08018E62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x70);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08018E6C: BL 0x08046AA2
    r0 = 0x2U;
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x70);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08018E7E: BL 0x08046AA2
    return r0;
    cmp_lhs = (s32)r3; cmp_rhs = 164;
    r0 = (r0 << 12);
    r5 = r0;
    r0 = 0x0804AAF4U /* &VTable_0804AAF4 */; // [0x0801906C]
    r6 = r1;
    *(u32*)(r5) = (u32)r0;
    r0 = *(u32*)(r5 + 0x8);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08018EB2;
loc_08018E9A:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08018EA6: BL 0x08046AA2
    r0 = *(u32*)(r5 + 0x8);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08018E9A;
loc_08018EB2:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018EBC;
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08018EB8: BL 0x0803D63C
loc_08018EBC:
    return r0;
    r5 = r0;
    r0 = 0x0804AAF4U /* &VTable_0804AAF4 */; // [0x0801906C]
    r7 = r1;
    *(u32*)(r5) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = *(u32*)(r1 + 0xC);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    *(u32*)(r5 + 0x8) = (u32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08018EF0;
loc_08018ED6:
    r6 = (r4 << 2);
    r0 = r6 + r7;
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r1 = stack[2]; // [sp + 0x8]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018EE0: BL __call_via_r3
    r1 = r6 + r5;
    *(u32*)(r1 + 0xC) = (u32)r0;
    r0 = *(u32*)(r5 + 0x8);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08018ED6;
loc_08018EF0:
    r0 = r5;
    return r0;
    r2 = *(u32*)(r0 + 0x4);
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018F06: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r5 = r1;
    r1 = *(u32*)(r4 + 0x8);
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08018F22;
    r0 = 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r6;
    return r0;
loc_08018F22:
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018F30: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08018F70;
    r0 = *(u32*)(r4 + 0x4);
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018F48: BL __call_via_r3
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08018F5E;
    r0 = 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r6;
    return r0;
loc_08018F5E:
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018F6C: BL __call_via_r3
loc_08018F70:
    r0 = 0x0U;
    return r0;
    r3 = r0 + 4;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08018F8E;
    r2 = (r2 << 2);
    r0 = r2 + r0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x8);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018F8A: BL __call_via_r3
loc_08018F8E:
    return r0;
    r6 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r0 = (r0 << 2);
    r0 += 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08018F9C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08018FD4;
    r0 = 0x0804930CU /* &VTable_0804930C */; // [0x08019070]
    r5 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0804AAF4U /* &VTable_0804AAF4 */; // [0x0801906C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)(r6 + 0xC);
    *(u32*)(r4 + 0x8) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_08018FD4;
loc_08018FBA:
    r7 = (r5 << 2);
    r0 = r7 + r6;
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r1 = stack[2]; // [sp + 0x8]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018FC4: BL __call_via_r3
    r1 = r7 + r4;
    *(u32*)(r1 + 0xC) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r5 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08018FBA;
loc_08018FD4:
    r0 = r4;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r7 = r2;
    r6 = r1;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08019006;
loc_08018FEA:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x10);
    r2 = r7;
    r1 = r6;
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08018FF6: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08019008;
    r0 = *(u32*)(r5 + 0xC);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08018FEA;
loc_08019006:
    r0 = 0x0U;
loc_08019008:
    return r0;
    r6 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r7 = r2;
    r5 = 0x1U;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0801903C(r0, r1, r2, r3);
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x10);
    r2 = r7;
    r3 = *(u32*)(r0 + 0x4);
    r1 = stack[1]; // [sp + 0x4]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019026: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_08019032(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08019032..0x08019042 (16 bytes, Thumb)
u32 sub_08019032(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 &= r0;
    r0 = *(u32*)(r6 + 0xC);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_0801901A(r0, r1, r2, r3);
    r0 = (r5 << 24);
    r0 = (r0 >> 24);
    return sub_0801902E(r0, r1, r2, r3);
}

// ROM Address: 0x08019042..0x0801906C (42 bytes, Thumb)
u32 sub_08019042(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r7 = r2;
    r6 = r1;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801906A;
loc_08019052:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x10);
    r2 = r7;
    r1 = r6;
    r3 = *(u32*)(r0 + 0x8);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801905E: BL __call_via_r3
    r0 = *(u32*)(r5 + 0xC);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08019052;
loc_0801906A:
    return r0;
}

// ROM Address: 0x0801906C..0x08019074 (8 bytes, Thumb)
u32 sub_0801906C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x3D0; // sp + 0x3D0
    r4 = (r0 >> 32);
    stack[12] = r3; // [sp + 0x30]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08019074..0x08019268 (500 bytes, Thumb)
u32 sub_08019074(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x0804BDA8U /* &VTable_0804BDA8 */; // [0x08019234]
    r6 = r1;
    *(u32*)(r5) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801909E;
loc_08019086:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08019092: BL 0x08046AA2
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08019086;
loc_0801909E:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080190A8;
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080190A4: BL 0x0803D63C
loc_080190A8:
    return r0;
    r5 = r0;
    r0 = 0x0804BDA8U /* &VTable_0804BDA8 */; // [0x08019234]
    r7 = r1;
    *(u32*)(r5) = (u32)r0;
    r0 = *(u32*)(r1 + 0xC);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_080190D8;
loc_080190BE:
    r6 = (r4 << 2);
    r0 = r6 + r7;
    r0 = *(u32*)(r0 + 0x10);
    r2 = *(u32*)(r0);
    r1 = stack[2]; // [sp + 0x8]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080190C8: BL __call_via_r3
    r1 = r6 + r5;
    *(u32*)(r1 + 0x8) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_080190BE;
loc_080190D8:
    r0 = r5;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r6 = r1;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08019106;
loc_080190EC:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080190FA: BL __call_via_r3
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_080190EC;
loc_08019106:
    return r0;
    r6 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r7 = r1;
    r5 = 0x1U;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08019134;
loc_08019118:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r7;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019126: BL __call_via_r3
    r5 &= r0;
    r0 = *(u32*)(r6 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08019118;
loc_08019134:
    r0 = r5;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r6 = r1;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08019160;
loc_08019146:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019154: BL __call_via_r3
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08019146;
loc_08019160:
    return r0;
    r6 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r7 = r1;
    r5 = 0x0U;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801918E;
loc_08019172:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r7;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019180: BL __call_via_r3
    r5 |= r0;
    r0 = *(u32*)(r6 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08019172;
loc_0801918E:
    r0 = r5;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r6 = r1;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080191C2;
loc_080191A0:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x8);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080191AE: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080191BA;
    r0 = 0x1U;
    return r0;
loc_080191BA:
    r0 = *(u32*)(r5 + 0x4);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_080191A0;
loc_080191C2:
    r0 = 0x0U;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r6 = r1;
    r0 = (r0 << 2);
    r0 += 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080191D2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080191E4;
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_080190AA(r0, r1, r2, r3); // 0x080191E0
loc_080191E4:
    r0 = r4;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r6 = r1;
    r0 = (r0 << 2);
    r0 += 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080191F4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801920A;
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_080190AA(r0, r1, r2, r3); // 0x08019202
    r0 = 0x0804B6D0U /* &VTable_0804B6D0 */; // [0x08019238]
    *(u32*)(r4) = (u32)r0;
loc_0801920A:
    r0 = r4;
    return r0;
    r5 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r6 = r1;
    r0 = (r0 << 2);
    r0 += 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801921A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08019230;
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_080190AA(r0, r1, r2, r3); // 0x08019228
    r0 = 0x0804A710U /* &VTable_0804A710 */; // [0x0801923C]
    *(u32*)(r4) = (u32)r0;
loc_08019230:
    r0 = r4;
    return r0;
    return r0;
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r7 = 0x08019280U;
    r4 = (r0 >> 32);
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801924E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08019264;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019260: BL __call_via_r3
loc_08019264:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08019268..0x0801926C (4 bytes, Thumb)
u32 sub_08019268(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002BA8U; // [0x08019280]
    return r0; // BX lr
}

// ROM Address: 0x0801926C..0x080192AC (64 bytes, Thumb)
u32 sub_0801926C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019278: BL __call_via_r3
    r0 = 0x1U;
    return r0;
    cmp_lhs = (s32)r3; cmp_rhs = 168;
    r0 = (r0 << 12);
    r0 = *(u32*)(r0 + 0xC);
    r2 = 0x0870F514U; // [0x080192AC]
    r0 = (r0 << 3);
    r0 = r0 + r2;
    r0 = *(u32*)(r0);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019292: BL __call_via_r3
    return r0;
    r0 = *(u32*)(r0 + 0xC);
    r3 = 0x0870F514U; // [0x080192AC]
    r0 = (r0 << 3);
    r0 = r0 + r3;
    r0 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r0 + 0x4);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080192A6: BL __call_via_r3
    return r0;
}

// ROM Address: 0x080192AE..0x08019382 (212 bytes, Thumb)
u32 sub_080192AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r6 >> 1);
    r2 = *(u32*)(r0 + 0x4);
    *(u32*)(r1) = (u32)r2;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0; // BX lr
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080192CA;
loc_080192C0:
    r1 = *(u32*)(r1);
    r1 += 0x4U;
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080192C0;
loc_080192CA:
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r5 = r2;
    r2 = 0x1U;
    r6 = stack[8]; // [sp + 0x20]
    *(u32*)(r5) = (u32)r2;
    r2 = 0x0U;
    r4 = r3;
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)(r3) = (u32)r2;
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0);
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0x4);
    r2 = r2 - r3;
    r0 = r1 - r0;
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    stack[0] = r2; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    r2 |= r1;
    stack[3] = r1; // [sp + 0xC]
    if (cmp_lhs == cmp_rhs) goto loc_08019344;
    r0 = stack[2]; // [sp + 0x8]
    r1 = stack[3]; // [sp + 0xC]
    r0 = (r0 << 8);
    stack[0] = r0; // [sp + 0x0]
    r0 = stack[2]; // [sp + 0x8]
    r1 = (r1 << 8);
    stack[1] = r1; // [sp + 0x4]
    r1 = r0;
    r0 *= r1;
    r1 = stack[3]; // [sp + 0xC]
    r2 = r1;
    r1 *= r2;
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 31));
    r2 = 0x10U;
    r0 = __16_ll_shift_l(r0, r1, r2, r3); // 0x0801931A: BL 0x08046BFC
    r0 = sub_0803FB1E(r0, r1, r2, r3); // 0x0801931E
    r1 = 0x64U;
    r1 *= r0;
    r0 = r6;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08019328: BL 0x08046E58
    r0 = ((u32)((s32)r0 >> 8));
    r0 += 0x1U;
    *(u32*)(r5) = (u32)r0;
    r1 = stack[0]; // [sp + 0x0]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08019334: BL 0x08046E58
    *(u32*)(r4) = (u32)r0;
    r1 = stack[1]; // [sp + 0x4]
    r0 = *(u32*)(r5);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801933E: BL 0x08046E58
    *(u32*)(r4 + 0x4) = (u32)r0;
loc_08019344:
    return r0;
    r1 = 0x1U;
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r4 = r0;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08019354: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019360;
    r1 = 0x0804C0C4U /* &VTable_0804C0C4 */; // [0x0801946C]
    *(u32*)(r0) = (u32)r1;
loc_08019360:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x08019360
    r0 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    return r0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019382(r0, r1, r2, r3);
    r0 = r1;
    if (cmp_lhs == cmp_rhs) goto loc_08019380;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801937C: BL __call_via_r3
loc_08019380:
    return r0;
}

// ROM Address: 0x08019382..0x080193AE (44 bytes, Thumb)
u32 sub_08019382(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)(r2);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019392;
loc_08019388:
    r2 = *(u32*)(r2);
    r2 += 0x4U;
    r3 = *(u32*)(r2);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08019388;
loc_08019392:
    *(u32*)(r2) = (u32)r1;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019380(r0, r1, r2, r3);
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801939C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080193A8;
    r1 = 0x0804C0C4U /* &VTable_0804C0C4 */; // [0x0801946C]
    *(u32*)(r0) = (u32)r1;
loc_080193A8:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080193A8
    return sub_08019380(r0, r1, r2, r3);
}

// ROM Address: 0x080193AE..0x08019440 (146 bytes, Thumb)
u32 sub_080193AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs == cmp_rhs) goto loc_080193D8;
    cmp_lhs = (s32)r1; cmp_rhs = 13;
    if (cmp_lhs == cmp_rhs) goto loc_0801942A;
    cmp_lhs = (s32)r1; cmp_rhs = 14;
    if (cmp_lhs != cmp_rhs) return sub_08019440(r0, r1, r2, r3);
    r0 = *(u32*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080193D0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080193CC: BL __call_via_r3
loc_080193D0:
    r0 = 0x0U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x1U;
    return r0;
loc_080193D8:
    r0 = *(u32*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080193E2;
    r0 = 0x1U;
    return r0;
loc_080193E2:
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080193EA: BL __call_via_r3
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080193F8: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019426;
    r0 = *(u32*)(r4);
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801941A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x10);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801940E: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801941A;
    r0 = 0x1U;
    return r0;
loc_0801941A:
    r0 = 0x086FDA48U; // [0x08019470]
    r1 = *(u32*)(r4);
    r0 = *(u32*)(r0);
    r2 = r4;
    r0 = sub_08019444(r0, r1, r2, r3); // 0x08019422: BL 0x08019444
loc_08019426:
    r0 = 0x2U;
    return r0;
loc_0801942A:
    r0 = *(u32*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801943C;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019438: BL __call_via_r3
loc_0801943C:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08019440..0x08019444 (4 bytes, Thumb)
u32 sub_08019440(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019444..0x0801954A (262 bytes, Thumb)
u32 sub_08019444(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r1 + 0x4);
    r4 = r2;
    *(u32*)(r2) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = r1;
    if (cmp_lhs == cmp_rhs) goto loc_08019460;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801945C: BL __call_via_r3
loc_08019460:
    r1 = 0xDU;
    r0 = r4;
    r0 = sub_080193AE(r0, r1, r2, r3); // 0x08019464: BL 0x080193AE
    return r0;
    r0 = r0;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r4 = (r0 >> 32);
    if (cmp_lhs >= cmp_rhs) goto loc_08019504;
    r7 = (r5 >> 1);
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0x8);
    *(u32*)(r1 + 0x1C) = (u32)r0;
    return r0; // BX lr
    r1 = *(u32*)(r1 + 0x4);
    r1 += 0x24U;
    r4 = *(u32*)(r1 + 0x8);
    r5 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0xC);
    r4 = r4 - r5;
    r5 = *(u32*)(r1 + 0x4);
    stack[1] = r4; // [sp + 0x4]
    r2 = r2 - r5;
    stack[2] = r2; // [sp + 0x8]
    r2 = r4;
    r3 = r0;
    r3 += 0x14U;
    r4 = stack[2]; // [sp + 0x8]
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    r4 = r1;
    r1 = *(u32*)(r1);
    r3 = (r1 << 8);
    r1 = *(u32*)(r4 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r0 + 0x28) = (u32)r1;
    *(u32*)(r0 + 0x24) = (u32)r3;
    r2 = *(u32*)(r0 + 0x10);
    r3 = r0;
    stack[0] = r2; // [sp + 0x0]
    r2 = r0;
    r1 = r0;
    r1 += 0x8U;
    r2 += 0x2CU;
    r3 += 0x1CU;
    r0 = r4;
    r0 = sub_080192CE(r0, r1, r2, r3); // 0x080194BE
    return r0;
    r3 = *(u32*)(r0 + 0x24);
    r4 = *(u32*)(r0 + 0x1C);
    r3 = r3 + r4;
    *(u32*)(r0 + 0x24) = (u32)r3;
    r2 = *(u32*)(r0 + 0x20);
    r3 = *(u32*)(r0 + 0x28);
    r2 = r3 + r2;
    *(u32*)(r0 + 0x28) = (u32)r2;
    r2 = *(u32*)(r0 + 0x2C);
    r2 -= 0x1U;
    *(u32*)(r0 + 0x2C) = (u32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080194F2;
    r3 = *(u32*)(r0 + 0x8);
    r4 = *(u32*)(r0 + 0xC);
    r3 = (r3 << 8);
    r4 = (r4 << 8);
    r2 = 0x1U;
    *(u32*)(r0 + 0x30) = (u32)r2;
    *(u32*)(r0 + 0x24) = (u32)r3;
    *(u32*)(r0 + 0x28) = (u32)r4;
loc_080194F2:
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x24);
    r4 = *(u32*)(r0 + 0x28);
    r3 = ((u32)((s32)r3 >> 8));
    *(u32*)(r1 + 0x24) = (u32)r3;
    r4 = ((u32)((s32)r4 >> 8));
    *(u32*)(r1 + 0x28) = (u32)r4;
    r2 = r1;
    r2 += 0x24U;
loc_08019504:
    r3 = r2;
    r2 = *(u32*)(r2 + 0x4);
    r4 = *(u32*)(r1 + 0x24);
    r5 = *(u32*)(r0 + 0x14);
    r0 = *(u32*)(r0 + 0x18);
    r4 = r4 + r5;
    r0 = r2 + r0;
    stack[1] = r0; // [sp + 0x4]
    r2 = stack[1]; // [sp + 0x4]
    stack[0] = r4; // [sp + 0x0]
    r3 += 0x8U;
    *(u32*)(r3 + 0x4) = (u32)r2;
    *(u32*)(r3) = (u32)r4;
    r0 = *(u32*)(r1 + 0x30);
    r2 = *(u32*)(r1 + 0x18);
    r0 = r0 + r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0; // BX lr
    r7 = r2;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801954A(r0, r1, r2, r3);
    r0 = 0x44U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801953C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801954A(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801954A..0x08019572 (40 bytes, Thumb)
u32 sub_0801954A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x1000U; // (1 << 12)
    r0 = r5;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08019550
    r1 = (r5 >> 2);
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r5;
    stack[0] = r0; // [sp + 0x0]
    r1 = r6;
    r3 = 0x4U;
    r0 = r4;
    stack[2] = r7; // [sp + 0x8]
    r2 = 0x08712FDCU; // [0x08019574]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08019566
    r0 = 0x0804A2C0U /* &VTable_0804A2C0 */; // [0x08019578]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_08019546(r0, r1, r2, r3);
}

// ROM Address: 0x08019572..0x08019590 (30 bytes, Thumb)
u32 sub_08019572(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 220;
    r1 = (r6 >> 1);
    r2 = 0x0801987CU;
    r4 = (r0 >> 32);
    r0 = 0x087196DCU; // [0x080195A4]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r1 = (r0 << 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801958C;
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08019590(r0, r1, r2, r3);
loc_0801958C:
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08019590..0x08019594 (4 bytes, Thumb)
u32 sub_08019590(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08019594..0x080195A0 (12 bytes, Thumb)
u32 sub_08019594(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x4);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    if (cmp_lhs != cmp_rhs) return sub_080195A0(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080195A0..0x080195A4 (4 bytes, Thumb)
u32 sub_080195A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080195A4..0x080195A8 (4 bytes, Thumb)
u32 sub_080195A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[220] = r6; // [sp + 0x370]
    r1 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x080195A8..0x080195C4 (28 bytes, Thumb)
u32 sub_080195A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080195C4(r0, r1, r2, r3);
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080195B6: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080195C4(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080195C4..0x08019628 (100 bytes, Thumb)
u32 sub_080195C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08019798]
    r6 = 0x200U; // (1 << 9)
    r5 = 0x087196E0U; // [0x0801979C]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080195D4
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_080195EC;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x080195E0: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080195E8
loc_080195EC:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804CE28U /* &VTable_0804CE28 */; // [0x080197A0]
    r3 = 0x35U;
    *(u32*)(r4) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0xFFU;
    *(u8*)(r4 + 0x14) = (u8)r0;
    r0 = 0x10U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0xF8U;
    *(u8*)(r4 + 0x18) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r4 + 0x17) = (u8)r0;
    r0 = stack[3]; // [sp + 0xC]
    r0 *= r3;
    r0 = sub_08053034(r0, r1, r2, r3); // 0x08019610: BL 0x08053034
    r5 = r1;
    r0 = 0x35U;
    r0 *= r7;
    *(u8*)(r4 + 0x15) = (u8)r1;
    r0 = sub_08053034(r0, r1, r2, r3); // 0x0801961C: BL 0x08053034
    r0 = r1 - r5;
    *(u8*)(r4 + 0x16) = (u8)r0;
    r0 = r4;
    return sub_080195C0(r0, r1, r2, r3);
}

// ROM Address: 0x08019628..0x0801964A (34 bytes, Thumb)
u32 sub_08019628(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x18);
    r2 = *(u8*)(r0 + 0x17);
    r1 = r1 + r2;
    r1 = (r1 << 24);
    r1 = ((u32)((s32)r1 >> 24));
    r2 = 0x7U;
    r2 = ~r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    *(u8*)(r0 + 0x18) = (u8)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0801964A(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x087196E0U; // [0x0801979C]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08019644
    return r0;
}

// ROM Address: 0x0801964A..0x08019658 (14 bytes, Thumb)
u32 sub_0801964A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs <= cmp_rhs) return sub_08019648(r0, r1, r2, r3);
    r1 = 0x8U;
    *(u8*)(r0 + 0x18) = (u8)r1;
    r1 = 0x0U;
    *(u8*)(r0 + 0x17) = (u8)r1;
    return sub_08019648(r0, r1, r2, r3);
}

// ROM Address: 0x08019658..0x08019742 (234 bytes, Thumb)
u32 sub_08019658(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r1);
    r2 = 0x40A06000U; // [0x080197A4]
    *(u32*)(r0) = (u32)r2;
    r3 = *(u8*)(r4 + 0x18);
    r5 = 0xC00U; // (3 << 10)
    r2 |= r3;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r0 + 0x4);
    r6 = 0x400U; // (1 << 10)
    r2 &= ~r5;
    r2 = r2 + r6;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r3 = *(u16*)(r4 + 0xC);
    r2 = (r2 >> 10);
    r2 = (r2 << 10);
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r2 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r2 = 0x40C06000U; // [0x080197A8]
    r0 += 0x8U;
    *(u32*)(r0) = (u32)r2;
    r3 = *(u8*)(r4 + 0x18);
    r2 |= r3;
    *(u32*)(r0) = (u32)r2;
    r2 = *(u32*)(r0 + 0x4);
    r2 &= ~r5;
    r2 = r2 + r6;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r3 = *(u16*)(r4 + 0xC);
    r2 = (r2 >> 10);
    r2 = (r2 << 10);
    r3 += 0x8U;
    r3 = (r3 << 22);
    r3 = (r3 >> 22);
    r2 |= r3;
    *(u32*)(r0 + 0x4) = (u32)r2;
    r0 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    r7 = *(u8*)(r4 + 0x15);
    r0 = *(u32*)(r4 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080196C8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x64);
    r2 = r2 + r1;
    r1 = *(u8*)(r4 + 0x16);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080196C2: BL __call_via_r3
    r7 = r0 + r7;
loc_080196C8:
    r0 = *(u8*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs == cmp_rhs) goto loc_08019716;
    r6 = 0x1U;
    r1 = 0x087196E0U; // [0x0801979C]
    r6 = (r6 << 9);
    r2 = r6;
    r5 = 0x4; // sp + 0x4
    r1 += 0x4U;
    r0 = r5;
    *(u8*)(r4 + 0x14) = (u8)r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080196DE: BL 0x08049138
    r0 = r7;
    cmp_lhs = (s32)r7; cmp_rhs = 53;
    if (cmp_lhs >= cmp_rhs) goto loc_08019706;
    r7 = 0x087198E4U; // [0x080197AC]
    r1 = 0x1U;
loc_080196EC:
    r2 = (r0 << 4);
    r3 = *(u32*)(r7 + r2);
    r2 = r2 + r7;
    *(u8*)(r5 + r3) = (u8)r1;
    r3 = *(u32*)(r2 + 0x4);
    r0 += 0x1U;
    *(u8*)(r5 + r3) = (u8)r1;
    r3 = *(u32*)(r2 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 53;
    *(u8*)(r5 + r3) = (u8)r1;
    r2 = *(u32*)(r2 + 0xC);
    *(u8*)(r5 + r2) = (u8)r1;
    if (cmp_lhs < cmp_rhs) goto loc_080196EC;
loc_08019706:
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x080197B0]
    r2 = r6;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = r5;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08019712: BL 0x08049138
loc_08019716:
    r0 = 0x0U;
    return r0;
    r3 = r1;
    r1 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 18;
    if (cmp_lhs == cmp_rhs) return sub_08019766(r0, r1, r2, r3);
    if (cmp_lhs > cmp_rhs) return sub_08019742(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0801975E(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 12;
    if (cmp_lhs == cmp_rhs) return sub_08019750(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 17;
    if (cmp_lhs != cmp_rhs) return sub_08019788(r0, r1, r2, r3);
    r3 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0801973E;
    *(u32*)(r0 + 0x10) = (u32)r1;
loc_0801973E:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019742..0x0801977A (56 bytes, Thumb)
u32 sub_08019742(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 19;
    if (cmp_lhs == cmp_rhs) return sub_0801977A(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 32;
    if (cmp_lhs != cmp_rhs) return sub_08019788(r0, r1, r2, r3);
    *(u32*)(r0 + 0x10) = (u32)r2;
    r0 = 0x1U;
    return sub_08019740(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08019756: BL 0x08046AA2
    r0 = 0x0U;
    return sub_08019740(r0, r1, r2, r3);
    r1 = 0xFFU;
    *(u8*)(r0 + 0x14) = (u8)r1;
    r0 = 0x0U;
    return sub_08019740(r0, r1, r2, r3);
    r1 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08019776;
    r1 = r0;
    r0 = 0x087196E0U; // [0x0801979C]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08019772
loc_08019776:
    r0 = 0x0U;
    return sub_08019740(r0, r1, r2, r3);
}

// ROM Address: 0x08019788..0x0801978C (4 bytes, Thumb)
u32 sub_08019788(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    return sub_08019740(r0, r1, r2, r3);
}

// ROM Address: 0x0801978C..0x08019794 (8 bytes, Thumb)
u32 sub_0801978C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_08019794(r0, r1, r2, r3);
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x08019794..0x08019798 (4 bytes, Thumb)
u32 sub_08019794(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08019798..0x080197D0 (56 bytes, Thumb)
u32 sub_08019798(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    stack[224] = r6; // [sp + 0x380]
    r1 = (r6 >> 1);
    r3 = *(u32*)r6; r6 += 4;
    r5 = *(u32*)r6; r6 += 4;
    r4 = (r0 >> 32);
    *(u32*)(r0) = (u32)r0;
    r0 <<= (r4 & 0xFF);
    *(u32*)(r0) = (u32)r0;
    r0 >>= (r0 & 0xFF);
    r0 = stack[228]; // [sp + 0x390]
    r1 = (r6 >> 1);
    r0 = r0;
    r1 = (r0 << 24);
    r7 = r2;
    r6 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080197D0(r0, r1, r2, r3);
    r0 = 0x64U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080197C4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080197D0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080197D0..0x0801984E (126 bytes, Thumb)
u32 sub_080197D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0x1U;
    r2 = r7;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x080197D8
    r0 = 0x0804B454U /* &VTable_0804B454 */; // [0x08019AE4]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r5 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r5;
    *(u32*)(r4 + 0x4C) = (u32)r5;
    r0 = *(u8*)(r4 + 0x10);
    r2 = 0x0871370CU; // [0x08019AE8]
    r1 = (r0 << 1);
    r1 = r1 + r0;
    r1 = (r1 << 4);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x50) = (u32)r1;
    r2 = 0x08719C40U; // [0x08019AEC]
    *(u32*)(r4 + 0x18) = (u32)r1;
    r0 = (r0 << 3);
    r1 = *(u32*)(r2 + r0);
    r0 = r0 + r2;
    r1 *= r6;
    *(u32*)(r4 + 0x40) = (u32)r1;
    r0 = *(u32*)(r0 + 0x4);
    r0 *= r6;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u32*)(r4 + 0x54) = (u32)r5;
    *(u32*)(r4 + 0x58) = (u32)r5;
    *(u32*)(r4 + 0x5C) = (u32)r5;
    *(u32*)(r4 + 0x60) = (u32)r5;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08019822
    r0 = 0x08719C40U; // [0x08019AEC]
    r0 -= 0xCU;
    r6 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0801982E
    r0 += 0x14U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08019AF0]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08019AF4]
    r3 = r5;
    r2 = 0x40U;
    r0 = r6 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08019846
    r0 = r4;
    return sub_080197CE(r0, r1, r2, r3);
}

// ROM Address: 0x0801984E..0x0801987A (44 bytes, Thumb)
u32 sub_0801984E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x10U;
    *(u32*)(r0 + 0x4C) = (u32)r1;
    r1 = 0x087137CCU; // [0x08019AF8]
    *(u32*)(r0 + 0x18) = (u32)r1;
    return r0; // BX lr
    r4 = 0x08719C40U; // [0x08019AEC]
    r7 = r1;
    r6 = r0;
    r5 = r2;
    r4 -= 0xCU;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08019866
    r1 = 0xFFU;
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08019886(r0, r1, r2, r3);
    r3 = r5;
    r2 = r7;
    r1 = r6;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801987E..0x080198E4 (102 bytes, Thumb)
u32 sub_0801987E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08019882: BL 0x0801191A
    return r0;
    r6 = 0x08719C40U; // [0x08019AEC]
    r4 = r0;
    r0 = *(u32*)(r0 + 0x54);
    r5 = 0x0U;
    r6 -= 0xCU;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r7 = 0x087137CCU; // [0x08019AF8]
    if (cmp_lhs == cmp_rhs) return sub_080198EC(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x58);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080198E4(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x60);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080198D8;
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r4 + 0x24);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[12] = r1; // [sp + 0x30]
    stack[11] = r0; // [sp + 0x2C]
    r5 = *(u32*)(r4 + 0x60);
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x080198B8
    r1 = 0xFFU;
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_080198D8;
    r3 = 0x2U;
    r2 = r5;
    r0 = 0x0U;
    r1 = 0x2C; // sp + 0x2C
    r0 = sub_080197B4(r0, r1, r2, r3); // 0x080198CC
    r1 = r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x080198D4: BL 0x0801191A
loc_080198D8:
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080198DC
    return r0;
}

// ROM Address: 0x080198E4..0x080199F6 (274 bytes, Thumb)
u32 sub_080198E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x10U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    *(u32*)(r4 + 0x54) = (u32)r5;
    *(u32*)(r4 + 0x18) = (u32)r7;
    r0 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019902;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_080198E0(r0, r1, r2, r3);
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080198FC
loc_08019900:
    return sub_080198E0(r0, r1, r2, r3);
loc_08019902:
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r4 + 0x40);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = *(u32*)(r4 + 0x44);
    r1 = *(u32*)(r4 + 0x24);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x48);
    r0 += 0x1U;
    r1 = ((u32)((s32)r0 >> 3));
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    *(u32*)(r4 + 0x48) = (u32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08019924;
    r1 = (r1 << 31);
    r1 = (r1 >> 31);
    r1 += 0x2U;
loc_08019924:
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r0 = *(u32*)(r4 + 0x50);
    r1 = (r1 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08019932
    r0 = r4;
    r0 = sub_08019B7C(r0, r1, r2, r3); // 0x08019938
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801994A;
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08019944
    return sub_080198E0(r0, r1, r2, r3);
loc_0801994A:
    r6 = 0x08719C40U; // [0x08019AEC]
    r0 = r4;
    r6 -= 0xCU;
    r1 = *(u32*)(r6 + 0x8);
    r0 += 0x28U;
    r6 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0801995A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801996A;
    r0 = 0x10U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r7;
    return sub_080198E0(r0, r1, r2, r3);
loc_0801996A:
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080198E0(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080198E0(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r7 = sp;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B80A8U; // [0x08019AFC]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    r0 = 0x4; // sp + 0x4
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 = *(u8*)(r4 + 0x11);
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    stack[12] = r4; // [sp + 0x30]
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080199AC;
    r0 = *(u32*)(r4 + 0x60);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080199AC;
    r0 += 0x1C0U;
    *(u32*)(r0 + 0xC) = (u32)r5;
loc_080199AC:
    r6 = 0x08719C40U; // [0x08019AEC]
    r2 = r7;
    r1 = 0x0U;
    r6 -= 0xCU;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x080199B6
    r7 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080199E2;
    r6 = *(u32*)(r6);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080199C4
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08019AF0]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08019AF4]
    r3 = r5;
    r2 = 0x40U;
    r0 = r6 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080199DC
    *(u32*)(r4 + 0x54) = (u32)r7;
loc_080199E2:
    r0 = *(u32*)(r4 + 0x5C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019900;
    r0 = *(u32*)(r4 + 0x60);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019900;
    r0 += 0x1C0U;
    *(u32*)(r0 + 0xC) = (u32)r7;
    return sub_080198E0(r0, r1, r2, r3);
}

// ROM Address: 0x080199F6..0x08019A12 (28 bytes, Thumb)
u32 sub_080199F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08019A12(r0, r1, r2, r3);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 29;
    if (cmp_lhs == cmp_rhs) return sub_08019ACE(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 30;
    if (cmp_lhs != cmp_rhs) return sub_08019AD8(r0, r1, r2, r3);
    r4 += 0x5CU;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    return r0;
}

// ROM Address: 0x08019A12..0x08019AE2 (208 bytes, Thumb)
u32 sub_08019A12(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08019ACA;
    r0 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08019A22;
    r0 = 0x0U;
    return sub_08019A0E(r0, r1, r2, r3);
loc_08019A22:
    r1 = *(u32*)(r2 + 0x1C);
    r5 = r2 + 4;
    r3 = *(u8*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08019A64;
    r2 = *(u32*)(r5);
    r6 = *(u32*)(r4 + 0x30);
    r0 = r5;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08019A64;
    r2 = *(u32*)(r4 + 0x28);
    r6 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08019A64;
    r2 = *(u32*)(r0 + 0x4);
    r6 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08019A64;
    r2 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08019A64;
    r0 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r0; cmp_rhs = 13;
    if (cmp_lhs != cmp_rhs) goto loc_08019A58;
    r0 = 0x0U;
    return sub_08019A0E(r0, r1, r2, r3);
loc_08019A58:
    r0 = 0x10U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r0 = 0x087137CCU; // [0x08019AF8]
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x1U;
    return sub_08019A0E(r0, r1, r2, r3);
loc_08019A64:
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08019ACA;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08019ACA;
    r0 = *(u32*)(r4 + 0x28);
    r1 = *(u32*)(r5 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08019ACA;
    r0 = *(u32*)(r5 + 0x4);
    r1 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08019ACA;
    r0 = *(u32*)(r4 + 0x2C);
    r1 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08019ACA;
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r4 + 0x24);
    r0 = ((u32)((s32)r0 >> 8));
    stack[0] = r0; // [sp + 0x0]
    r1 = ((u32)((s32)r1 >> 8));
    r0 = 0x03001C34U; // [0x08019B00]
    r5 = 0x08719C40U; // [0x08019AEC]
    stack[1] = r1; // [sp + 0x4]
    r6 = *(u32*)(r0);
    r5 -= 0xCU;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08019A9E
    r1 = 0xFFU;
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08019ABE;
    r3 = 0x2U;
    r2 = r6;
    r0 = 0x0U;
    r1 = sp;
    r0 = sub_080197B4(r0, r1, r2, r3); // 0x08019AB2
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08019ABA: BL 0x0801191A
loc_08019ABE:
    r1 = r4;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08019AC2
    r0 = 0x1U;
    return sub_08019A0E(r0, r1, r2, r3);
loc_08019ACA:
    r0 = 0x0U;
    return sub_08019A0E(r0, r1, r2, r3);
    goto loc_08019AD0;
loc_08019AD0:
    *(u32*)(r4 + 0x58) = (u32)r0;
    *(u32*)(r4 + 0x60) = (u32)r2;
    r0 = 0x1U;
    return sub_08019A0E(r0, r1, r2, r3);
    goto loc_08019ADA;
loc_08019ADA:
    r0 = r4;
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x08019ADC
    return sub_08019A0E(r0, r1, r2, r3);
}

// ROM Address: 0x08019AE2..0x08019BB8 (214 bytes, Thumb)
u32 sub_08019AE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = (r0 >> 32);
    r7 += 0xCU;
    r1 = (r6 >> 1);
    r4 = stack[64]; // [sp + 0x100]
    r1 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r7 += 0xCCU;
    r1 = (r6 >> 1);
    *(u16*)(r5 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08019D0C]
    r6 = 0x08719C60U; // [0x08019D10]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r1;
    r5 = r1;
    r7 = r2;
    r0 = *(u32*)(r6);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08019B16
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08019B2E;
    r1 = r5;
    r0 = *(u32*)(r6);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08019B22: BL 0x08011732
    r1 = r5;
    r0 = *(u32*)(r6);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08019B2A
loc_08019B2E:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804BB1CU /* &VTable_0804BB1C */; // [0x08019D14]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u32*)(r4 + 0x1C) = (u32)r7;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019B4A;
    r0 = *(u8*)(r7 + 0x10);
    r7 += 0x1C0U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u32*)(r7 + 0x10);
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_08019B4A:
    r0 = r4;
    return r0;
    r1 = *(u32*)(r0 + 0x20);
    r3 = 0x0U;
    r2 = ((u32)((s32)r1 >> 8));
    r1 = *(u32*)(r0 + 0x18);
    r4 = (u32)(*(s8*)(r1 + r3));
    r3 = 0x1U;
    r4 = r2 - r4;
    *(u32*)(r0 + 0x28) = (u32)r4;
    r2 = *(u32*)(r0 + 0x24);
    r5 = (u32)(*(s8*)(r1 + r3));
    r2 = ((u32)((s32)r2 >> 8));
    r5 = r2 - r5;
    *(u32*)(r0 + 0x2C) = (u32)r5;
    r3 = *(u8*)(r1 + 0x2);
    r1 = *(u8*)(r1 + 0x3);
    r3 = r4 + r3;
    r1 = r5 + r1;
    *(u32*)(r0 + 0x34) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r2;
    *(u32*)(r0 + 0x30) = (u32)r3;
    return r0; // BX lr
    r1 = 0x08719C60U; // [0x08019D10]
    r2 = 0x03002C04U; // [0x08019D18]
    r1 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r2);
    r1 += 0x18U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019B8E;
    r0 = 0x1U;
    return r0; // BX lr
loc_08019B8E:
    r2 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08019BAC;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_08019BBC(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_08019BCC(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_08019BE0(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x28);
    r1 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08019BDC(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
loc_08019BAC:
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08019BB8(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08019BB8..0x08019BBC (4 bytes, Thumb)
u32 sub_08019BB8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08019BBC..0x08019BC8 (12 bytes, Thumb)
u32 sub_08019BBC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x34);
    r1 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) return sub_08019BC8(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08019BC8..0x08019BCC (4 bytes, Thumb)
u32 sub_08019BC8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08019BCC..0x08019BD8 (12 bytes, Thumb)
u32 sub_08019BCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x30);
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) return sub_08019BD8(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08019BD8..0x08019BE4 (12 bytes, Thumb)
u32 sub_08019BD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
    r0 = 0x0U;
    return r0; // BX lr
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08019BE4..0x08019C40 (92 bytes, Thumb)
u32 sub_08019BE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019BEE: BL __call_via_r3
    return r0;
    r1 = 0x08719C60U; // [0x08019D10]
    r1 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r0 + 0x28);
    r1 += 0x18U;
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08019C40(r0, r1, r2, r3);
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08019C40(r0, r1, r2, r3);
    r2 = *(u32*)(r0 + 0x2C);
    r3 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08019C40(r0, r1, r2, r3);
    r2 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08019C40(r0, r1, r2, r3);
    r2 = r0;
    r3 = *(u32*)(r0 + 0x28);
    r4 = *(u32*)(r1);
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r1 + 0x4);
    r3 = r3 - r4;
    r2 += 0x38U;
    r0 = r0 - r1;
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    *(u32*)(r2 + 0x4) = (u32)r1;
    *(u32*)(r2) = (u32)r3;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08019C40..0x08019C44 (4 bytes, Thumb)
u32 sub_08019C40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08019C3A(r0, r1, r2, r3);
}

// ROM Address: 0x08019C44..0x08019CA2 (94 bytes, Thumb)
u32 sub_08019C44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r4 = 0xFE00FFFFU; // [0x08019D1C]
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x18);
    r2 = *(u32*)(r2 + 0x4);
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x38);
    r2 &= r4;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x3C);
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r2 = *(u16*)(r0 + 0xC);
    r3 = *(u32*)(r1 + 0x4);
    r4 = 0x3U;
    r3 = (r3 >> 10);
    r2 = (r2 << 22);
    r2 = (r2 >> 22);
    r3 = (r3 << 10);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r3 = *(u8*)(r0 + 0x8);
    r4 = (r4 << 10);
    r2 &= ~r4;
    r3 = (r3 << 26);
    r3 = (r3 >> 30);
    r3 = (r3 << 10);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r0 += 0x14U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) return sub_08019CA2(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08019CA2..0x08019CA6 (4 bytes, Thumb)
u32 sub_08019CA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08019C9E(r0, r1, r2, r3);
}

// ROM Address: 0x08019CA6..0x08019CE6 (64 bytes, Thumb)
u32 sub_08019CA6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x18);
    *(u32*)(r0 + 0x14) = (u32)r1;
    r3 = *(u8*)(r1 + 0x2);
    r4 = *(u8*)(r1 + 0x3);
    r0 = *(u16*)(r0 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r3 *= r4;
    r2 = r3;
    r3 = 0x06010000U; // [0x08019D20]
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08019CBE: BL 0x08049138
    return r0;
    r3 = r1;
    r1 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_08019CE6(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 12;
    if (cmp_lhs == cmp_rhs) return sub_08019CEC(r0, r1, r2, r3);
    cmp_lhs = (s32)r3; cmp_rhs = 17;
    if (cmp_lhs == cmp_rhs) goto loc_08019CDA;
    cmp_lhs = (s32)r3; cmp_rhs = 18;
    if (cmp_lhs != cmp_rhs) return sub_08019CFC(r0, r1, r2, r3);
loc_08019CDA:
    r3 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08019CE2;
    *(u32*)(r0 + 0x1C) = (u32)r1;
loc_08019CE2:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08019CE6..0x08019D00 (26 bytes, Thumb)
u32 sub_08019CE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r0 = 0x0U;
    return sub_08019CE4(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08019CF4: BL __call_via_r3
    r0 = 0x0U;
    return sub_08019CE4(r0, r1, r2, r3);
    r0 = r1;
    return sub_08019CE4(r0, r1, r2, r3);
}

// ROM Address: 0x08019D00..0x08019D08 (8 bytes, Thumb)
u32 sub_08019D00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_08019D08(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08019D08..0x08019D0C (4 bytes, Thumb)
u32 sub_08019D08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08019D22..0x08019D28 (6 bytes, Thumb)
u32 sub_08019D22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r0 << 24);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08019D28..0x08019D2A (2 bytes, Thumb)
u32 sub_08019D28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x08019D2C..0x08019D3A (14 bytes, Thumb)
u32 sub_08019D2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r1 + 0x14);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08019D3A(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}
