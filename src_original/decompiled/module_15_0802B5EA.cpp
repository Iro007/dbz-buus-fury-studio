/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #15
 * Address Range: 0x0802B5EA..0x0802DE62 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0802B5EA..0x0802B668 (126 bytes, Thumb)
u32 sub_0802B5EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u16*)(r1 + 0x12);
    r0 = r4;
    r1 += 0x1U;
    r2 = (r1 << 16);
    r2 = (r2 >> 16);
    *(u16*)(r4 + 0x12) = (u16)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 16;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0802B668(r0, r1, r2, r3);
    r0 = (r2 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0802B664;
    r5 = 0x08752E78U; // [0x0802B6EC]
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802B60E
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) goto loc_0802B664;
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
    r1 = r5 + 4;
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
    r3 = r4;
    r0 = 0x0U;
    r2 = *(u8*)(r4 + 0x10);
    r1 = 0x14; // sp + 0x14
    r0 = sub_0802A2EC(r0, r1, r2, r3); // 0x0802B658
    r1 = r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802B660: BL 0x0801191A
loc_0802B664:
    return r0;
}

// ROM Address: 0x0802B668..0x0802B684 (28 bytes, Thumb)
u32 sub_0802B668(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 64;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0802B664(r0, r1, r2, r3);
    r1 = 0x2U;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r1 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r1; cmp_rhs = 72;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0802B664(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B67E: BL __call_via_r3
    return sub_0802B664(r0, r1, r2, r3);
}

// ROM Address: 0x0802B684..0x0802B6D2 (78 bytes, Thumb)
u32 sub_0802B684(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0802B6F0]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802B6F4]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0802B6A2;
    r1 = r4;
    r1 += 0x18CU;
loc_0802B6A2:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802B6A4
    r1 = 0x14U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802B6AC
    r1 = 0x0300305CU; // [0x0802B6F8]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802B6B4
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802B6FC]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B6CE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B6CA: BL __call_via_r3
loc_0802B6CE:
    return r0;
}

// ROM Address: 0x0802B6D2..0x0802B6E4 (18 bytes, Thumb)
u32 sub_0802B6D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x0300305CU; // [0x0802B6F8]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802B6E0;
    r0 = 0x0U;
loc_0802B6E0:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802B708..0x0802B7AA (162 bytes, Thumb)
u32 sub_0802B708(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = r1;
    r4 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B71A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802B730;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B72C: BL __call_via_r3
loc_0802B730:
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0803FADE(r0, r1, r2, r3); // 0x0802B732
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B742;
    r0 = 0x4U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802B73C
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_0802B742:
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x08752EB4U; // [0x0802B7E0]
    r6 = r4;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r2 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)(r5 + 0x4);
    r0 = *(u32*)(r0);
    r2 *= r1;
    r0 *= r1;
    r0 = ((u32)((s32)r0 >> 8));
    stack[1] = r0; // [sp + 0x4]
    r1 = stack[1]; // [sp + 0x4]
    r2 = ((u32)((s32)r2 >> 8));
    r6 += 0x1A0U;
    stack[0] = r2; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[3] = r1; // [sp + 0xC]
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r6 + 0x4);
    r0 = r0 + r2;
    r2 = stack[3]; // [sp + 0xC]
    stack[0] = r0; // [sp + 0x0]
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    stack[5] = r1; // [sp + 0x14]
    stack[7] = r1; // [sp + 0x1C]
    stack[4] = r0; // [sp + 0x10]
    stack[6] = r0; // [sp + 0x18]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r5 = r6 + 4;
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B78A: BL __call_via_r3
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x18; // sp + 0x18
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B798: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802B7AA(r0, r1, r2, r3);
    r0 = stack[6]; // [sp + 0x18]
    *(u32*)(r6) = (u32)r0;
    r0 = stack[7]; // [sp + 0x1C]
    *(u32*)(r5) = (u32)r0;
    return sub_0802B7B2(r0, r1, r2, r3);
}

// ROM Address: 0x0802B7AA..0x0802B7C6 (28 bytes, Thumb)
u32 sub_0802B7AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x4U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802B7AC
    *(u8*)(r4 + 0x10) = (u8)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B7BC: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802B7C6..0x0802B7E0 (26 bytes, Thumb)
u32 sub_0802B7C6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xCU;
    r4 = *(u32*)r0; r0 += 4;
    r5 = *(u32*)r0; r0 += 4;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802B7CE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B7DE;
    r1 = 0x08049A6CU; // [0x0802B7E4]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0x8) = (u32)r4;
loc_0802B7DE:
    return r0;
}

// ROM Address: 0x0802B844..0x0802B88A (70 bytes, Thumb)
u32 sub_0802B844(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0802B8A4]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802B8A8]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0802B862;
    r1 = r4;
    r1 += 0x18CU;
loc_0802B862:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802B864
    r1 = 0x03003068U; // [0x0802B8AC]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802B86C
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802B8B0]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B886;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802B882: BL __call_via_r3
loc_0802B886:
    return r0;
}

// ROM Address: 0x0802B88A..0x0802B89C (18 bytes, Thumb)
u32 sub_0802B88A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003068U; // [0x0802B8AC]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802B898;
    r0 = 0x0U;
loc_0802B898:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802B8F0..0x0802B960 (112 bytes, Thumb)
u32 sub_0802B8F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802B902;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802B8FA: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802B95E;
loc_0802B902:
    r1 = 0x0U;
    r2 = 0x0804D4A8U /* &VTable_0804D4A8 */; // [0x0802B974]
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r2 = ~r1;
loc_0802B90E:
    r5 = 0x08752EECU; // [0x0802B978]
    r3 = (r1 << 3);
    r3 = r3 + r5;
    r5 = *(u8*)(r3);
    r6 = *(u8*)(r4);
    r7 = *(u8*)(r4 + 0x1);
    r6 = r5 - r6;
    r5 = *(u8*)(r3 + 0x1);
    r5 = r5 - r7;
    r12 = r5;
    r5 = *(u8*)(r3 + 0x2);
    r7 = *(u8*)(r4 + 0x2);
    r5 = r5 - r7;
    lr = r5;
    r5 = *(u8*)(r3 + 0x3);
    r7 = *(u8*)(r4 + 0x3);
    r5 = r5 - r7;
    stack[0] = r5; // [sp + 0x0]
    r5 = r6;
    r5 *= r6;
    r6 = r12;
    r7 = r6;
    r7 *= r6;
    r6 = r5 + r7;
    r5 = lr;
    r7 = r5;
    r7 *= r5;
    r5 = stack[0]; // [sp + 0x0]
    r6 = r6 + r7;
    r7 = r5;
    r7 *= r5;
    r5 = r6 + r7;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0802B958;
    r3 = *(u32*)(r3 + 0x4);
    r2 = r5;
    *(u32*)(r0 + 0x8) = (u32)r3;
loc_0802B958:
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 20;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_0802B90E;
loc_0802B95E:
    return r0;
}

// ROM Address: 0x0802B960..0x0802B974 (20 bytes, Thumb)
u32 sub_0802B960(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r0 = *(u32*)(r1 + 0x4);
    r1 = *(u32*)(r2 + 0x8);
    r2 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802B972;
    r0 = sub_0800EECC(r0, r1, r2, r3); // 0x0802B96E: BL 0x0800EECC
loc_0802B972:
    return r0;
}

// ROM Address: 0x0802B974..0x0802B984 (16 bytes, Thumb)
u32 sub_0802B974(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    if ((cmp_lhs - cmp_rhs) < 0) return sub_0802B8C8(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r6; cmp_rhs = 236;
    r5 = (r6 >> 1);
    r0 = *(u8*)(r0 + 0x8);
    r1 = *(u32*)(r1 + 0x4);
    *(u8*)(r1 + 0x8) = (u8)r0;
    return r0; // BX lr
}

// ROM Address: 0x0802B9A8..0x0802B9BC (20 bytes, Thumb)
u32 sub_0802B9A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802B9BC(r0, r1, r2, r3);
    r0 = 0xA0U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802B9B0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802B9BC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802B9BC..0x0802BA18 (92 bytes, Thumb)
u32 sub_0802B9BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x700U; // (7 << 8)
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802BC04]
    r5 = 0x08753008U; // [0x0802BC00]
    r1 = r6;
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r5 -= 0x7CU;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802B9CE
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802B9E6;
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0802B9DA: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802B9E2
loc_0802B9E6:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804B400U /* &VTable_0804B400 */; // [0x0802BC08]
    r1 = 0x10U;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u8*)(r4 + 0x8) = (u8)r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r1 = 0xFFU;
loc_0802B9F8:
    r2 = r4 + r0;
    r0 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    *(u8*)(r2 + 0x10) = (u8)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0802B9F8;
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802BBFC]
    r2 = 0x1U;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = 0x08753008U; // [0x0802BC00]
    r2 = (r2 << 10);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802BA10: BL 0x08049138
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802BA18..0x0802BAC2 (170 bytes, Thumb)
u32 sub_0802BA18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x08753008U; // [0x0802BC00]
    r1 -= 0x7CU;
    r1 = *(u32*)(r1 + 0x4);
    r5 = 0x08753008U; // [0x0802BC00]
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r1 + 0x4);
    r2 = ((u32)((s32)r2 >> 10));
    r3 = ((u32)((s32)r3 >> 10));
    stack[5] = r3; // [sp + 0x14]
    stack[7] = r3; // [sp + 0x1C]
    stack[4] = r2; // [sp + 0x10]
    stack[6] = r2; // [sp + 0x18]
    r4 = r1;
    r5 -= 0x74U;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r6 = 0x8; // sp + 0x8
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    *(u32*)r6 = r5; r6 += 4;
    r1 = *(u32*)(r0 + 0x1C);
    r5 = 0x0U;
    r4 += 0x44U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    r6 = 0x7FFFFFFFU /* &INT_MAX */; // [0x0802BC0C]
    if (cmp_lhs <= cmp_rhs) return sub_0802BAF4(r0, r1, r2, r3);
    r1 = r4;
    r1 += 0x8U;
    r12 = r1;
    r2 = r0;
    r2 += 0x1CU;
    r1 += 0x4U;
    r7 = r4 + 4;
    stack[8] = r7; // [sp + 0x20]
    lr = r1;
    stack[9] = r2; // [sp + 0x24]
    r2 = stack[9]; // [sp + 0x24]
    r1 = (r5 << 3);
    r1 = r1 + r2;
    r1 += 0x4U;
    r2 = *(u32*)(r1);
    r3 = stack[6]; // [sp + 0x18]
    r1 = *(u32*)(r1 + 0x4);
    r2 = r2 - r3;
    r3 = stack[7]; // [sp + 0x1C]
    stack[0] = r2; // [sp + 0x0]
    r1 = r1 - r3;
    stack[1] = r1; // [sp + 0x4]
    r3 = stack[1]; // [sp + 0x4]
    r1 = r2;
    r7 = r3;
    r7 *= r3;
    r1 *= r2;
    r1 = r1 + r7;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BA88;
    r6 = r1;
loc_0802BA88:
    r1 = *(u32*)(r4);
    r7 = r12;
    r7 = *(u32*)(r7);
    r1 *= r2;
    r7 *= r3;
    r1 = r1 + r7;
    r7 = stack[8]; // [sp + 0x20]
    r1 = ((u32)((s32)r1 >> 10));
    r7 = *(u32*)(r7);
    r2 *= r7;
    r7 = lr;
    r7 = *(u32*)(r7);
    r7 *= r3;
    r2 = r2 + r7;
    r2 = ((u32)((s32)r2 >> 10));
    r3 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BAAE;
    r3 = (u32)(-(s32)r1);
loc_0802BAAE:
    r7 = r2;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BAB6;
    r7 = (u32)(-(s32)r2);
loc_0802BAB6:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs <= cmp_rhs) return sub_0802BAD4(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0802BAC2(r0, r1, r2, r3);
    stack[5] = r1; // [sp + 0x14]
    return sub_0802BAEC(r0, r1, r2, r3);
}

// ROM Address: 0x0802BAC2..0x0802BB40 (126 bytes, Thumb)
u32 sub_0802BAC2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BACC;
    r1 = (u32)(-(s32)r1);
    stack[4] = r1; // [sp + 0x10]
    goto loc_0802BAEC;
loc_0802BACC:
    r1 = 0x0U;
    stack[5] = r1; // [sp + 0x14]
    stack[4] = r1; // [sp + 0x10]
    goto loc_0802BAEC;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802BADC;
    stack[2] = r2; // [sp + 0x8]
    goto loc_0802BAEC;
loc_0802BADC:
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BAE6;
    r1 = (u32)(-(s32)r2);
    stack[3] = r1; // [sp + 0xC]
    goto loc_0802BAEC;
loc_0802BAE6:
    r1 = 0x0U;
    stack[3] = r1; // [sp + 0xC]
    stack[2] = r1; // [sp + 0x8]
loc_0802BAEC:
    r1 = *(u32*)(r0 + 0x1C);
    r5 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) return sub_0802BA5E(r0, r1, r2, r3);
    r2 = 0xFFU;
    r2 += 0x91U;
    r1 = 0x0U;
    r4 = 0x1U;
    r5 = 0x2U;
loc_0802BAFE:
    r3 = (r1 << 2);
    r7 = 0x8; // sp + 0x8
    r3 = *(u32*)(r7 + r3);
    cmp_lhs = (s32)r3; cmp_rhs = 100;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BB10;
    r3 = 0x0U;
    r7 = r0 + r1;
    *(u8*)(r7 + 0x15) = (u8)r3;
    goto loc_0802BB1E;
loc_0802BB10:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BB1A;
    r3 = r0 + r1;
    *(u8*)(r3 + 0x15) = (u8)r4;
    goto loc_0802BB1E;
loc_0802BB1A:
    r3 = r0 + r1;
    *(u8*)(r3 + 0x15) = (u8)r5;
loc_0802BB1E:
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_0802BAFE;
    r1 = 0x00000271U; // [0x0802BC10]
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BB32;
    r3 = 0x0U;
    *(u8*)(r0 + 0x19) = (u8)r3;
loc_0802BB2E:
    return r0;
loc_0802BB32:
    r1 = 0x0000F424U; // [0x0802BC14]
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802BB3C;
    *(u8*)(r0 + 0x19) = (u8)r4;
    goto loc_0802BB2E;
loc_0802BB3C:
    *(u8*)(r0 + 0x19) = (u8)r5;
    goto loc_0802BB2E;
    return r0;
}

// ROM Address: 0x0802BB4C..0x0802BC1A (206 bytes, Thumb)
u32 sub_0802BB4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_0802BB4C:
    r0 = (r6 << 2);
    r1 = 0x08753008U; // [0x0802BC00]
    r0 = r0 + r6;
    r0 = (r0 << 2);
    r1 -= 0x64U;
    r5 = r0 + r1;
    r0 = r7 + r6;
    r1 = *(u8*)(r0 + 0x15);
    r2 = *(u8*)(r0 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_0802BB7C;
    *(u8*)(r0 + 0x10) = (u8)r1;
    r0 = *(u16*)(r7 + 0xC);
    r2 = 0x06010000U; // [0x0802BBFC]
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r2 = *(u32*)(r5);
    r0 = r0 + r2;
    r2 = *(u32*)(r5 + 0x8);
    r3 = *(u32*)(r5 + 0x4);
    r1 *= r2;
    r1 = r1 + r3;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802BB78: BL 0x08049138
loc_0802BB7C:
    r0 = *(u32*)(r5 + 0x10);
    r2 = 0xFE00FFFFU; // [0x0802BC18]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u8*)(r5 + 0xC);
    r0 &= r2;
    r6 += 0x1U;
    r1 += 0x8U;
    r1 = (r1 << 16);
    r0 |= r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u8*)(r5 + 0xD);
    r0 = (r0 >> 8);
    r0 = (r0 << 8);
    r1 += 0x8U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    r0 |= r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = 0xC00U; // (3 << 10)
    r0 &= ~r1;
    r1 = 0x400U; // (1 << 10)
    r0 = r0 + r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r1 = *(u16*)(r7 + 0xC);
    r2 = *(u32*)(r5);
    r0 = (r0 >> 10);
    r2 = ((u32)((s32)r2 >> 5));
    r1 = r1 + r2;
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    r0 = (r0 << 10);
    r0 |= r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r4 += 0x8U;
    cmp_lhs = (s32)r6; cmp_rhs = 5;
    if (cmp_lhs < cmp_rhs) goto loc_0802BB4C;
    r0 = 0x80082008U; // [0x0802BC1C]
    r1 = 0x3U;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = (r1 << 10);
    r0 &= ~r1;
    r1 = 0x400U; // (1 << 10)
    r0 = r0 + r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r1 = *(u16*)(r7 + 0xC);
    r0 = (r0 >> 10);
    r0 = (r0 << 10);
    r1 = (r1 << 22);
    r1 = (r1 >> 22);
    r0 |= r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r4;
    r1 = stack[2]; // [sp + 0x8]
    r0 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0U;
    return r0;
    r0 = r0;
    r0 = r0;
    r1 = (r0 << 24);
    r0 += 0x8U;
    r5 = (r6 >> 1);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r7 = *(u8*)(r7 + 0x1F);
    r1 = (r6 << 9);
    r0 = r0;
    r0 = r0;
    return r0;
}

// ROM Address: 0x0802BC1E..0x0802BC40 (34 bytes, Thumb)
u32 sub_0802BC1E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r1) = (u16)r0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_0802BC40(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 27;
    if (cmp_lhs != cmp_rhs) return sub_0802BC64(r0, r1, r2, r3);
    r0 += 0x1CU;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 3);
    r0 = r1 + r0;
    r0 += 0x4U;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802BC40..0x0802BC68 (40 bytes, Thumb)
u32 sub_0802BC40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r2 = 0xFFU;
loc_0802BC44:
    r3 = r0 + r1;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    *(u8*)(r3 + 0x10) = (u8)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0802BC44;
    r0 = *(u16*)(r0 + 0xC);
    r1 = 0x06010000U; // [0x0802BC68]
    r2 = 0x1U;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = 0x08753008U; // [0x0802BC6C]
    r2 = (r2 << 10);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802BC5C: BL 0x08049138
    r0 = 0x0U;
    return sub_0802BC3E(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0802BC3E(r0, r1, r2, r3);
}

// ROM Address: 0x0802BCCE..0x0802BD04 (54 bytes, Thumb)
u32 sub_0802BCCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0802BD48]
    r0 *= r3;
    r5 = r0 + r1;
    r5 += 0xCU;
    r1 = r4;
    r0 = 0xC; // sp + 0xC
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0802BCDC
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r2 = 0x4; // sp + 0x4
    r0 = r0 + r1;
    r0 = ((u32)((s32)r0 >> 1));
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[4]; // [sp + 0x10]
    r1 = r5;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_0802BD4C(r0, r1, r2, r3); // 0x0802BCF4
    r1 = r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802BCFC: BL 0x0801191A
    return r0;
}

// ROM Address: 0x0802BD04..0x0802BD20 (28 bytes, Thumb)
u32 sub_0802BD04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x8);
    r2 += 0x1U;
    *(u32*)(r0 + 0x8) = (u32)r2;
    cmp_lhs = (s32)r2; cmp_rhs = 60;
    if (cmp_lhs < cmp_rhs) return sub_0802BD32(r0, r1, r2, r3);
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802BD20(r0, r1, r2, r3);
    r0 = r1;
    r0 = sub_0800F558(r0, r1, r2, r3); // 0x0802BD1A
    return sub_0802BD2E(r0, r1, r2, r3);
}

// ROM Address: 0x0802BD20..0x0802BD32 (18 bytes, Thumb)
u32 sub_0802BD20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802BD2A: BL __call_via_r3
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802BD32..0x0802BD36 (4 bytes, Thumb)
u32 sub_0802BD32(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0802BD30(r0, r1, r2, r3);
}

// ROM Address: 0x0802BD36..0x0802BD6A (52 bytes, Thumb)
u32 sub_0802BD36(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r2 -= 0x8U;
    r5 = (r6 >> 1);
loc_0802BD3C:
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0802BD3C;
    r3 = (r7 >> 32);
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802BD6A(r0, r1, r2, r3);
    r0 = 0x34U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802BD5C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802BD6A(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802BD6A..0x0802BD90 (38 bytes, Thumb)
u32 sub_0802BD6A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r6;
    r6 = sp;
    r1 = r5;
    r0 = sp;
    r0 = sub_0800DA26(r0, r1, r2, r3); // 0x0802BD72
    r2 = r6;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800D960(r0, r1, r2, r3); // 0x0802BD7C
    r0 = 0x0804B358U /* &VTable_0804B358 */; // [0x0802BDC4]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = 0x28U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    return sub_0802BD66(r0, r1, r2, r3);
}

// ROM Address: 0x0802BD90..0x0802BDAA (26 bytes, Thumb)
u32 sub_0802BD90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x30);
    r1 += 0x1U;
    *(u32*)(r0 + 0x30) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 60;
    if (cmp_lhs <= cmp_rhs) return sub_0802BDAA(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x08753A10U; // [0x0802BDC8]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802BDA2
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802BDAA..0x0802BDBC (18 bytes, Thumb)
u32 sub_0802BDAA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xFU;
    r2 &= ~r1;
    if (cmp_lhs != cmp_rhs) return sub_0802BDBC(r0, r1, r2, r3);
    r1 = *(u32*)(r0 + 0x1C);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    r1 = *(u32*)(r0 + 0x24);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x24) = (u32)r1;
    return r0;
}

// ROM Address: 0x0802BDC6..0x0802BEEA (292 bytes, Thumb)
u32 sub_0802BDC6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 -= 0x10U;
    r5 = (r6 >> 1);
    r2 = 0x08753A14U; // [0x0802BDF0]
    r1 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r2);
    r2 += 0x80U;
    r2 = *(u32*)(r2 + 0x10);
    r0 = *(u32*)(r0 + 0x8);
    r0 = (r0 << 10);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802BDE6;
    r1 += 0x1ACU;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
loc_0802BDE6:
    r1 += 0x180U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r2 -= 0x14U;
    r5 = (r6 >> 1);
    r2 = *(u32*)(r1 + 0x4);
    r2 += 0x24U;
    r4 = *(u32*)(r2 + 0x8);
    r5 = *(u32*)(r2);
    r1 = *(u32*)(r2 + 0xC);
    r4 = r4 - r5;
    r5 = *(u32*)(r2 + 0x4);
    stack[0] = r4; // [sp + 0x0]
    r1 = r1 - r5;
    stack[1] = r1; // [sp + 0x4]
    r1 = r4;
    r3 = r0;
    r3 += 0x10U;
    r4 = stack[1]; // [sp + 0x4]
    *(u32*)r3 = r1; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    r1 = *(u32*)(r0 + 0x8);
    r3 = *(u32*)(r2);
    r1 = r1 - r3;
    r3 = *(u32*)(r0 + 0xC);
    r4 = *(u32*)(r2 + 0x4);
    stack[0] = r1; // [sp + 0x0]
    r3 = r3 - r4;
    stack[1] = r3; // [sp + 0x4]
    r4 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    r5 = r1;
    r2 = (r2 << 8);
    *(u32*)(r0 + 0x24) = (u32)r2;
    r4 = (r4 << 8);
    *(u32*)(r0 + 0x20) = (u32)r4;
    r2 = 0x2CU;
    *(u32*)(r0 + 0x28) = (u32)r2;
    r2 = 0x000005D3U; // [0x0802BEC4]
    r1 = r3;
    r3 = 0x000005D3U; // [0x0802BEC4]
    r2 *= r5;
    r2 = ((u32)((s32)r2 >> 8));
    *(u32*)(r0 + 0x18) = (u32)r2;
    r2 = 0xFFFF45A0U; // [0x0802BEC8]
    r1 *= r3;
    r1 = r1 + r2;
    r2 = 0x200U; // (1 << 9)
    r1 = ((u32)((s32)r1 >> 8));
    r1 = r1 - r2;
    *(u32*)(r0 + 0x1C) = (u32)r1;
    return r0; // BX lr
    r2 = *(u32*)(r0 + 0x1C);
    r2 += 0x20U;
    *(u32*)(r0 + 0x1C) = (u32)r2;
    r3 = *(u32*)(r0 + 0x20);
    r4 = *(u32*)(r0 + 0x18);
    r3 = r3 + r4;
    *(u32*)(r0 + 0x20) = (u32)r3;
    r3 = *(u32*)(r0 + 0x24);
    r2 = r3 + r2;
    *(u32*)(r0 + 0x24) = (u32)r2;
    r2 = *(u32*)(r0 + 0x28);
    r2 -= 0x1U;
    *(u32*)(r0 + 0x28) = (u32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0802BE8A;
    r3 = *(u32*)(r0 + 0x8);
    r4 = *(u32*)(r0 + 0xC);
    r3 = (r3 << 8);
    r4 = (r4 << 8);
    r2 = 0x1U;
    *(u32*)(r0 + 0x2C) = (u32)r2;
    *(u32*)(r0 + 0x20) = (u32)r3;
    *(u32*)(r0 + 0x24) = (u32)r4;
loc_0802BE8A:
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x20);
    r4 = *(u32*)(r0 + 0x24);
    r3 = ((u32)((s32)r3 >> 8));
    *(u32*)(r1 + 0x24) = (u32)r3;
    r4 = ((u32)((s32)r4 >> 8));
    *(u32*)(r1 + 0x28) = (u32)r4;
    r2 = r1;
    r2 += 0x24U;
    r3 = r2;
    r2 = *(u32*)(r2 + 0x4);
    r4 = *(u32*)(r1 + 0x24);
    r5 = *(u32*)(r0 + 0x10);
    r0 = *(u32*)(r0 + 0x14);
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
    r3 = (r2 << 23);
    r0 = r0;
    cmp_lhs = (s32)r8; cmp_rhs = (s32)r4;
    r7 = r3;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802BEEA(r0, r1, r2, r3);
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802BEDC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802BEEA(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802BEEA..0x0802BFBC (210 bytes, Thumb)
u32 sub_0802BEEA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802C058]
    r5 = (r6 << 5);
    *(u32*)(r4) = (u32)r0;
    r0 = 0x08753A18U; // [0x0802C05C]
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r0);
    r1 = r5;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802BEF8
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802BF14;
    r0 = 0x08753A18U; // [0x0802C05C]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0802BF06: BL 0x08011732
    r0 = 0x08753A18U; // [0x0802C05C]
    r1 = r5;
    r0 = *(u32*)(r0);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802BF10
loc_0802BF14:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804B3D8U /* &VTable_0804B3D8 */; // [0x0802C060]
    r1 = r6;
    *(u32*)(r4) = (u32)r0;
    r2 = 0x20U;
    r5 = 0x10; // sp + 0x10
    r0 = r5;
    *(u32*)(r4 + 0x10) = (u32)r6;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0802BF24
    r0 = 0x08753A18U; // [0x0802C05C]
    r3 = 0x0; // sp + 0x0
    r0 = *(u32*)(r0 + 0x4);
    r1 = 0x2U;
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x1U;
    *(u8*)(r3 + 0x10) = (u8)r0;
    *(u8*)(r3 + 0x13) = (u8)r1;
    *(u8*)(r3 + 0x12) = (u8)r0;
    r0 = 0x0803F70DU; // [0x0802C064]
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u32*)(r4 + 0x10);
    r2 = stack[16]; // [sp + 0x40]
    r1 = (r0 >> 31);
    r0 = r1 + r0;
    r0 = ((u32)((s32)r0 >> 1));
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x16U;
    stack[6] = r0; // [sp + 0x18]
    r0 = stack[13]; // [sp + 0x34]
    r1 = 0x0U;
    r0 = sub_08046E40(r0, r1, r2, r3); // 0x0802BF52: BL 0x08046E40
    r0 = r5;
    r1 = stack[19]; // [sp + 0x4C]
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0802BF5A
    r0 = *(u32*)(r4 + 0x10);
    r1 = (r0 >> 31);
    r0 = r1 + r0;
    r1 = *(u32*)(r7);
    r0 = ((u32)((s32)r0 >> 1));
    r0 = r1 - r0;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 -= 0x10U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x20U;
    stack[3] = r0; // [sp + 0xC]
    r1 = *(u32*)(r4 + 0x10);
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802BFAA;
    r6 = sp;
    r7 = 0x10; // sp + 0x10
loc_0802BF86:
    r5 = r0;
    r5 += 0x20U;
    stack[2] = r5; // [sp + 0x8]
    stack[0] = r0; // [sp + 0x0]
    r1 = *(u16*)(r4 + 0xC);
    r2 = 0x06010000U; // [0x0802C068]
    r0 = (r0 << 5);
    r1 = (r1 << 5);
    r1 = r1 + r2;
    r1 = r1 + r0;
    r2 = r6;
    r0 = r7;
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x0802BF9E: BL 0x0804915C
    r1 = *(u32*)(r4 + 0x10);
    r0 = r5;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_0802BF86;
loc_0802BFAA:
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = 0x10; // sp + 0x10
    r1 = 0x0U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0802BFB4: BL 0x0803F58C
    r0 = r4;
    return sub_0802BEE6(r0, r1, r2, r3);
}

// ROM Address: 0x0802BFBC..0x0802C054 (152 bytes, Thumb)
u32 sub_0802BFBC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0802C06C]
    r0 = (r0 << 2);
    r4 = *(u32*)(r1 + r0);
    r6 = 0x08753A18U; // [0x0802C05C]
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0802BFCC
    r0 += 0x21U;
    r5 = (r0 >> 5);
    r5 = (r5 << 5);
    r1 = (r5 << 5);
    r0 = *(u32*)(r6);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0802BFDA: BL 0x08011732
    r3 = r7;
    r2 = r4;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_0802BECC(r0, r1, r2, r3); // 0x0802BFE6
    return r0;
    r2 = *(u32*)(r1);
    r4 = *(u32*)(r0 + 0x10);
    r3 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802C038;
    r6 = 0x3U;
    r7 = 0x80002000U; // [0x0802C070]
    r6 = (r6 << 10);
loc_0802BFFE:
    *(u32*)(r2) = (u32)r7;
    r4 = *(u32*)(r0 + 0x14);
    r4 = r4 + r3;
    r4 = (r4 << 23);
    r4 = (r4 >> 7);
    r4 |= r7;
    *(u32*)(r2) = (u32)r4;
    r5 = *(u32*)(r0 + 0x18);
    r4 = (r4 >> 8);
    r5 = (r5 << 24);
    r5 = (r5 >> 24);
    r4 = (r4 << 8);
    r4 |= r5;
    *(u32*)(r2) = (u32)r4;
    r4 = *(u16*)(r0 + 0xC);
    r5 = *(u32*)(r2 + 0x4);
    r4 = r4 + r3;
    r4 = (r4 << 22);
    r5 = (r5 >> 10);
    r5 = (r5 << 10);
    r4 = (r4 >> 22);
    r4 |= r5;
    r4 &= ~r6;
    *(u32*)(r2 + 0x4) = (u32)r4;
    r4 = *(u32*)(r0 + 0x10);
    r2 += 0x8U;
    r3 += 0x20U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_0802BFFE;
loc_0802C038:
    *(u32*)(r1) = (u32)r2;
    r0 = 0x0U;
    return r0; // BX lr
    cmp_lhs = (s32)r1; cmp_rhs = 39;
    if (cmp_lhs != cmp_rhs) return sub_0802C054(r0, r1, r2, r3);
    r1 = r0;
    r0 = 0x08753A18U; // [0x0802C05C]
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802C04C
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802C054..0x0802C058 (4 bytes, Thumb)
u32 sub_0802C054(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0802C052(r0, r1, r2, r3);
}

// ROM Address: 0x0802C066..0x0802C0B0 (74 bytes, Thumb)
u32 sub_0802C066(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r6 = (r0 >> 32);
    r0 = 0x0U;
    *(u16*)(r0) = (u16)r0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = r1;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u8*)(r0 + 0x11) = (u8)r2;
    r1 = 0x13U;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802C084
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0802C0B0(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C0A8: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0802C0B0..0x0802C12E (126 bytes, Thumb)
u32 sub_0802C0B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_0802C0AC(r0, r1, r2, r3);
    r5 = 0x087548E8U; // [0x0802C194]
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802C0BE
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) return sub_0802C0AC(r0, r1, r2, r3);
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
    r1 = 0x087548E8U; // [0x0802C194]
    r1 += 0x8U;
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
    r3 = r4;
    r0 = 0x0U;
    r2 = *(u8*)(r4 + 0x10);
    r1 = 0x14; // sp + 0x14
    r0 = sub_0802C790(r0, r1, r2, r3); // 0x0802C10A
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802C112: BL 0x0801191A
    r1 = 0xB7U;
    r2 = 0x083192A8U; // [0x0802C198]
    r1 = (r1 << 2);
    r1 = r1 + r2;
    r4 = 0x000005C4U; // [0x0802C19C]
    r0 = *(u32*)(r5);
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r4;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802C128
    return sub_0802C0AC(r0, r1, r2, r3);
}

// ROM Address: 0x0802C12E..0x0802C1D0 (162 bytes, Thumb)
u32 sub_0802C12E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0802C1A0]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802C1A4]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0802C14C;
    r1 = r4;
    r1 += 0x18CU;
loc_0802C14C:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802C14E
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802C156
    r1 = 0x03003074U; // [0x0802C1A8]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802C15E
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802C1AC]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802C178;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C174: BL __call_via_r3
loc_0802C178:
    return r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03003074U; // [0x0802C1A8]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802C18A;
    r0 = 0x0U;
loc_0802C18A:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = 0x03003074U; // [0x0802C1A8]
    r0 += 0x4U;
    return r0; // BX lr
    r0 = 0x60019904U; // [0x0802C538]
    r5 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r0 += 0x74U;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802C1B8
    r0 = *(u32*)(r4 + 0x50);
    r0 = *(u32*)(r0);
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802C1C0
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = r4;
    r1 = 0x03001B00U; // [0x0802C1D4]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802C1CA
    return r0;
}

// ROM Address: 0x0802C1D0..0x0802C1D4 (4 bytes, Thumb)
u32 sub_0802C1D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0300307CU; // [0x0802C1D8]
    return r0; // BX lr
}

// ROM Address: 0x0802C2EC..0x0802C320 (52 bytes, Thumb)
u32 sub_0802C2EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[3] = r1; // [sp + 0xC]
    r0 = r0 + r2;
    stack[4] = r0; // [sp + 0x10]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[9] = r1; // [sp + 0x24]
    stack[10] = r0; // [sp + 0x28]
    r2 = 0x37U;
    stack[1] = r5; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r0; // [sp + 0x10]
    r3 = 0x24; // sp + 0x24
    r1 = r3;
    r0 = 0x0U;
    r5 = 0x4U;
    stack[2] = r2; // [sp + 0x8]
    r2 = 0x086FD9D0U; // [0x0802C348]
    r3 = r5;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0802C312
    r1 = r0;
    r0 = *(u32*)(r6);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802C31A: BL 0x0801191A
    return sub_0802C328(r0, r1, r2, r3);
}

// ROM Address: 0x0802C328..0x0802C33C (20 bytes, Thumb)
u32 sub_0802C328(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C332: BL __call_via_r3
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802C33C..0x0802C340 (4 bytes, Thumb)
u32 sub_0802C33C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03003080U; // [0x0802C34C]
    return r0; // BX lr
}

// ROM Address: 0x0802C3E6..0x0802C446 (96 bytes, Thumb)
u32 sub_0802C3E6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x08754938U; // [0x0802C458]
    r0 = *(u32*)(r7);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802C3EA
    r6 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_0802C442;
    r5 = (r6 << 2);
    r0 = r5;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802C3FA
    r5 = r0 + r5;
    r0 = 0xC; // sp + 0xC
    r1 = r4;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0802C404
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
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x37U;
    stack[7] = r1; // [sp + 0x1C]
    stack[8] = r0; // [sp + 0x20]
    r4 = 0x1C; // sp + 0x1C
    r1 = r4;
    stack[2] = r2; // [sp + 0x8]
    r3 = 0x4U;
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x0802C45C]
    stack[0] = r5; // [sp + 0x0]
    stack[1] = r6; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0802C436
    r1 = r0;
    r0 = *(u32*)(r7);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802C43E: BL 0x0801191A
loc_0802C442:
    r0 = 0x1U;
    return sub_0802C3E2(r0, r1, r2, r3);
}

// ROM Address: 0x0802C446..0x0802C4B8 (114 bytes, Thumb)
u32 sub_0802C446(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802C44A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802C456;
    r1 = 0x0804BD98U /* &VTable_0804BD98 */; // [0x0802C460]
    *(u32*)(r0) = (u32)r1;
loc_0802C456:
    return r0;
    r1 = 0x7A016830U; // [0x0802C53C]
    r5 = (r6 >> 1);
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0802C400(r0, r1, r2, r3);
    r7 = (r5 >> 1);
    return r0;
    r4 = (r0 >> 32);
    r0 = 0x03001C34U; // [0x0802C4B8]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802C4BC]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0802C482;
    r1 = r4;
    r1 += 0x18CU;
loc_0802C482:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802C484
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802C48C
    r1 = 0x0300308CU; // [0x0802C4C0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802C494
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802C4C4]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802C4AE;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C4AA: BL __call_via_r3
loc_0802C4AE:
    return r0;
    r0 = 0x0300308CU; // [0x0802C4C0]
    r0 -= 0x4U;
    return r0; // BX lr
}

// ROM Address: 0x0802C4B8..0x0802C4BA (2 bytes, Thumb)
u32 sub_0802C4B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    return r0;
}

// ROM Address: 0x0802C4BA..0x0802C5BA (256 bytes, Thumb)
u32 sub_0802C4BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r0 += 0x8CU;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r6 = 0x03001C34U; // [0x0802C684]
    r4 = r0;
    r1 = *(u32*)(r6);
    r0 += 0xCU;
    r1 += 0x1A0U;
    r2 = *(u32*)r1; r1 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r1 = *(u32*)(r1);
    r5 = 0x03003094U; // [0x0802C688]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x03003094U; // [0x0802C688]
    r5 += 0x8U;
    r0 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802C4FA;
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
    r0 = (r0 << 11);
    r1 = r5 - 4;
    *(u32*)(r1) = (u32)r0;
    r0 = 0xFFFFF000U; // [0x0802C68C]
    *(u32*)(r5) = (u32)r0;
loc_0802C4FA:
    r1 = 0x14U;
    r0 = *(u32*)(r6);
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802C4FE
    r0 = *(u32*)(r6);
    r7 = 0x0U;
    *(u8*)(r0 + 0x11) = (u8)r7;
    r1 = 0x03001B00U; // [0x0802C690]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802C50A
    r0 = *(u32*)(r6);
    r1 = stack[6]; // [sp + 0x18]
    r3 = 0x03003094U; // [0x0802C688]
    r1 += 0x1A0U;
    r3 += 0x4U;
    r3 = *(u32*)(r3);
    r2 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = r2 + r3;
    r3 = *(u32*)(r5);
    stack[1] = r2; // [sp + 0x4]
    r1 = r1 + r3;
    stack[2] = r1; // [sp + 0x8]
    r1 = r2;
    r2 = stack[2]; // [sp + 0x8]
    r0 += 0x1A0U;
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    *(u32*)r0 = r1; r0 += 4;
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r6);
    r1 = *(u8*)(r0 + 0x8);
    r1 += 0xFFU;
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u32*)(r4 + 0x8) = (u32)r7;
    *(u8*)(r4 + 0x15) = (u8)r7;
    r0 = 0xFFU;
    r0 += 0x30U;
    *(u8*)(r4 + 0x14) = (u8)r7;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802C54E: BL 0x08000158
    r2 = r0;
    r0 = 0x08754954U; // [0x0802C694]
    r1 = 0x5U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802C55A
    *(u32*)(r4 + 0x4) = (u32)r0;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r7 = r1;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C574: BL __call_via_r3
    r6 = r4;
    r6 += 0xCU;
    r5 = r6 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802C5BA(r0, r1, r2, r3);
    r1 = 0x03001C34U; // [0x0802C684]
    r2 = *(u32*)(r6);
    r0 = *(u32*)(r1);
    r0 += 0x1A0U;
    *(u32*)r0 = r2; r0 += 4;
    r2 = *(u32*)(r5);
    *(u32*)(r0) = (u32)r2;
    r0 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C59C: BL __call_via_r3
    r1 = *(u32*)(r7);
    r0 = r7;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C5AA: BL __call_via_r3
    r0 = 0x1U;
    *(u8*)(r4 + 0x14) = (u8)r0;
    r0 = 0x3CU;
    *(u8*)(r4 + 0x15) = (u8)r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802C5BA..0x0802C630 (118 bytes, Thumb)
u32 sub_0802C5BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x11U;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_0800EEB0(r0, r1, r2, r3); // 0x0802C5BE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802C62C;
    r0 = 0x08754954U; // [0x0802C694]
    r2 = 0xF0U;
    r1 = *(u32*)(r0);
    r1 = *(u16*)(r1 + 0x4);
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_0802C5DE;
    r1 = 0x03001C34U; // [0x0802C684]
    r3 = 0x1U;
    r1 = *(u32*)(r1);
    r2 = *(u8*)(r1 + 0x11);
    r2 ^= r3;
    *(u8*)(r1 + 0x11) = (u8)r2;
loc_0802C5DE:
    r3 = 0x5AU;
    r2 = 0x14U;
    r1 = 0xF0U;
    r0 = *(u32*)(r0);
    r0 = sub_08040284(r0, r1, r2, r3); // 0x0802C5E6
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802C62C;
    r0 = *(u32*)(r4 + 0x8);
    r0 += 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) goto loc_0802C62C;
    r1 = 0x03001C34U; // [0x0802C684]
    r2 = *(u32*)(r6);
    r0 = *(u32*)(r1);
    r0 += 0x1A0U;
    *(u32*)r0 = r2; r0 += 4;
    r2 = *(u32*)(r5);
    *(u32*)(r0) = (u32)r2;
    r0 = *(u32*)(r1);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C612: BL __call_via_r3
    r1 = *(u32*)(r7);
    r0 = r7;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x9U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C620: BL __call_via_r3
    r3 = 0x1U;
    *(u8*)(r4 + 0x14) = (u8)r3;
    r0 = 0x3CU;
    *(u8*)(r4 + 0x15) = (u8)r0;
loc_0802C62C:
    r0 = 0x0U;
    return sub_0802C5B8(r0, r1, r2, r3);
}

// ROM Address: 0x0802C630..0x0802C640 (16 bytes, Thumb)
u32 sub_0802C630(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x15);
    r2 = r1;
    r2 += 0xFFU;
    *(u8*)(r0 + 0x15) = (u8)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802C640(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0802C640..0x0802C644 (4 bytes, Thumb)
u32 sub_0802C640(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0802C644..0x0802C668 (36 bytes, Thumb)
u32 sub_0802C644(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802C64E;
    r0 = 0x1U;
    return r0; // BX lr
loc_0802C64E:
    r2 = *(u8*)(r0 + 0x14);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802C668(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0802C66E(r0, r1, r2, r3);
    r1 = *(u8*)(r0 + 0x15);
    r2 = r1;
    r2 += 0xFFU;
    *(u8*)(r0 + 0x15) = (u8)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802C66A(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0802C668..0x0802C672 (10 bytes, Thumb)
u32 sub_0802C668(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_0802C564(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0802C672..0x0802C684 (18 bytes, Thumb)
u32 sub_0802C672(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x18U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802C676: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802C682;
    r1 = 0x0804B1E0U /* &VTable_0804B1E0 */; // [0x0802C698]
    *(u32*)(r0) = (u32)r1;
loc_0802C682:
    return r0;
}

// ROM Address: 0x0802C686..0x0802C698 (18 bytes, Thumb)
u32 sub_0802C686(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r0 += 0x94U;
    r0 = (r0 << 12);
    r0 = sub_0802D68E(r0, r1, r2, r3); // 0x0802C68C
    r0 = r0 - r4;
    r0 = (r0 << 12);
    r1 = 0xB5F0E7DFU; // [0x0802C7E8]
    r5 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x0802C69C..0x0802C6B0 (20 bytes, Thumb)
u32 sub_0802C69C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802C6B0(r0, r1, r2, r3);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802C6A4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802C6B0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802C6B0..0x0802C6EC (60 bytes, Thumb)
u32 sub_0802C6B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804B640U /* &VTable_0804B640 */; // [0x0802C780]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x3U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802C6B6
    r5 = r0 + 1;
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802C6C0
    r1 = r0;
    r1 += 0x40U;
    r1 = (r1 << 24);
    r2 = 0x087B6EECU; // [0x0802C784]
    r1 = (r1 >> 22);
    r1 = *(u32*)(r2 + r1);
    r0 = (r0 << 24);
    r1 *= r5;
    r1 = ((u32)((s32)r1 >> 10));
    *(u32*)(r4 + 0x4) = (u32)r1;
    r0 = (r0 >> 22);
    r0 = *(u32*)(r2 + r0);
    r0 *= r5;
    r0 = ((u32)((s32)r0 >> 10));
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = r4;
    return sub_0802C6AE(r0, r1, r2, r3);
}

// ROM Address: 0x0802C6EC..0x0802C6FE (18 bytes, Thumb)
u32 sub_0802C6EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802C6FE(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802C6FE..0x0802C77A (124 bytes, Thumb)
u32 sub_0802C6FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0802C788]
    r5 = *(u32*)(r0);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802C70A;
    r0 = 0x1U;
    return sub_0802C6FA(r0, r1, r2, r3);
loc_0802C70A:
    r0 = r1;
    r0 += 0xFFU;
    r3 = r4 + 4;
    r6 = *(u32*)(r4 + 0x10);
    r2 = r3 + 4;
    r0 += 0xA1U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802C730;
    r6 -= 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r6;
    r1 = *(u32*)(r0);
    r3 = *(u32*)(r3);
    r1 = r1 - r3;
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r2);
    r1 = r1 - r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    goto loc_0802C776;
loc_0802C730:
    r6 = *(u32*)(r0);
    r3 = *(u32*)(r3);
    r7 = 0x10U;
    r3 = r6 + r3;
    *(u32*)(r0) = (u32)r3;
    r3 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r2);
    r6 = sp;
    r2 = r3 + r2;
    *(u32*)(r0 + 0x4) = (u32)r2;
    stack[8] = r1; // [sp + 0x20]
    r0 = *(u8*)(r1 + 0x10);
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8098U; // [0x0802C78C]
    stack[12] = r1; // [sp + 0x30]
    stack[7] = r0; // [sp + 0x1C]
    r0 = (r7 << 6);
    stack[6] = r0; // [sp + 0x18]
    r0 = 0x0U;
    *(u8*)(r3) = (u8)r0;
    r0 = r6 + 4;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0802C75C
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r6;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802C76C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802C776;
    *(u32*)(r4 + 0x10) = (u32)r7;
loc_0802C776:
    r0 = 0x0U;
    return sub_0802C6FA(r0, r1, r2, r3);
}

// ROM Address: 0x0802C782..0x0802C7AC (42 bytes, Thumb)
u32 sub_0802C782(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = *(u32*)(r5 + 0x6C);
    r3 = (r7 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802C7AC(r0, r1, r2, r3);
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802C7A0: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802C7AC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802C7AC..0x0802C7EA (62 bytes, Thumb)
u32 sub_0802C7AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r7;
    r1 = 0x40U;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x0802C7B2
    r0 = 0x0804BAA0U /* &VTable_0804BAA0 */; // [0x0802C8FC]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r0 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = 0x08754A1CU; // [0x0802C900]
    r2 = 0x0875497CU; // [0x0802C904]
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = (r6 << 3);
    r1 = *(u32*)(r2 + r0);
    r0 = r0 + r2;
    *(u32*)(r4 + 0x40) = (u32)r1;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802C7E2
    r0 = r4;
    return sub_0802C7AA(r0, r1, r2, r3);
}

// ROM Address: 0x0802C7EA..0x0802C868 (126 bytes, Thumb)
u32 sub_0802C7EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 += 0x40U;
    r7 = r1;
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)r0; r0 += 4;
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r1 = *(u32*)(r4 + 0x24);
    r0 = *(u32*)(r0);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x48);
    r1 = 0x08754A1CU; // [0x0802C900]
    r0 += 0x1U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r0 = (r0 << 28);
    r0 = (r0 >> 31);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802C81C
    r5 = 0x0875497CU; // [0x0802C904]
    r5 -= 0x8U;
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802C85C;
    r1 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802C85C;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802C85C;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802C85C;
    r0 = r4;
    r0 += 0x28U;
    r1 = *(u32*)(r5 + 0x4);
    r6 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0802C854
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802C868(r0, r1, r2, r3);
loc_0802C85C:
    r1 = r4;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802C860
    return r0;
}

// ROM Address: 0x0802C868..0x0802C8AE (70 bytes, Thumb)
u32 sub_0802C868(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802C864(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802C864(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r7 = sp;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8090U; // [0x0802C908]
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
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    stack[12] = r4; // [sp + 0x30]
    r2 = r7;
    r1 = 0x0U;
    r0 = *(u32*)(r5);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802C89C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802C864(r0, r1, r2, r3);
    r1 = r4;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802C8A8
    return sub_0802C864(r0, r1, r2, r3);
}

// ROM Address: 0x0802C8AE..0x0802C8BE (16 bytes, Thumb)
u32 sub_0802C8AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802C8F4(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802C8BE(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802C8BE..0x0802C8FA (60 bytes, Thumb)
u32 sub_0802C8BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r2 + 4;
    r2 = *(u32*)(r2 + 0x4);
    r3 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802C8F0;
    r2 = *(u32*)(r0 + 0x28);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802C8F0;
    r2 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802C8F0;
    r2 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802C8F0;
    r1 = r0;
    r0 = 0x0875497CU; // [0x0802C904]
    r0 -= 0x8U;
    r0 = *(u32*)(r0);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802C8E8
    r0 = 0x1U;
    return sub_0802C8BC(r0, r1, r2, r3);
loc_0802C8F0:
    r0 = 0x0U;
    return sub_0802C8BC(r0, r1, r2, r3);
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x0802C8F4
    return sub_0802C8BC(r0, r1, r2, r3);
}

// ROM Address: 0x0802C8FE..0x0802C976 (120 bytes, Thumb)
u32 sub_0802C8FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 = 0x0109BD08U; // [0x0802C974]
    r5 = (r6 >> 1);
    r1 = 0x824A2200U; // [0x0802CAF8]
    r5 = (r6 >> 1);
    *(u16*)(r2 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r3 = (r0 << 4);
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x0802CAA4]
    r0 = r3 + r0;
    *(u8*)(r1 + 0xC) = (u8)r0;
    *(u8*)(r1 + 0xD) = (u8)r0;
    return r0; // BX lr
    r0 = 0x04000008U /* &REG_BG0CNT */; // [0x0802CAA8]
    r2 = 0x04000008U /* &REG_BG0CNT */; // [0x0802CAA8]
    r1 = *(u16*)(r0);
    r0 = 0x40U;
    r1 |= r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r1 |= r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r1 |= r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    return r0; // BX lr
    r0 = 0x04000008U /* &REG_BG0CNT */; // [0x0802CAA8]
    r2 = 0x04000008U /* &REG_BG0CNT */; // [0x0802CAA8]
    r1 = *(u16*)(r0);
    r0 = 0x40U;
    r1 &= ~r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r1 &= ~r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r1 &= ~r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r1 &= ~r0;
    *(u16*)(r2) = (u16)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return Mosaic_WriteSize1(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// Evidence: writes MOSAIC 0x0400004C: 0x0802C982 ldr r1, [pc, #0x120] (= 0x04000040) then 0x0802C986 strb r0, [r1, #0xc]; writes MOSAIC 0x0400004D: 0x0802C982 ldr r1, [pc, #0x120] (= 0x04000040) then 0x0802C988 strb r0, [r1, #0xd]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0802C976
// ROM Address: 0x0802C976..0x0802C98E (24 bytes, Thumb)
u32 Mosaic_WriteSize1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 << 4);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802C978: BL 0x08046E58
    r1 = 0xFU;
    r0 = r1 - r0;
    r3 = (r0 << 4);
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x0802CAA4]
    r0 = r3 + r0;
    *(u8*)(r1 + 0xC) = (u8)r0;
    *(u8*)(r1 + 0xD) = (u8)r0;
    r0 = 0x0U;
    return sub_0802C974(r0, r1, r2, r3);
}

// ROM Address: 0x0802C990..0x0802CA2E (158 bytes, Thumb)
u32 sub_0802C990(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xFFU;
    *(u8*)(r1 + 0xC) = (u8)r0;
    *(u8*)(r1 + 0xD) = (u8)r0;
    r0 = 0x37U;
    r0 = ~r0;
    r0 = *(u16*)(r0 + r1);
    r1 = 0x40U;
    r0 |= r1;
    r1 = 0x04000008U /* &REG_BG0CNT */; // [0x0802CAA8]
    *(u16*)(r1) = (u16)r0;
    r0 = *(u16*)(r1 + 0x2);
    r2 = r1 + 2;
    r1 = 0x40U;
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    r2 += 0x2U;
    r0 = *(u16*)(r2);
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    r2 += 0x2U;
    r0 = *(u16*)(r2);
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    r2 = (r1 << 3);
    r0 = 0x5000000U; // (5 << 24)
    r1 = 0x0805632CU; // [0x0802CAAC]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0802C9C8: BL 0x08049144
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0805652CU; // [0x0802CAB0]
    r0 = 0x05000200U; // [0x0802CAB4]
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x0802C9D4: BL 0x08049144
    return r0;
    r2 = 0x04000040U /* &REG_WIN0H */; // [0x0802CAA4]
    r1 = 0x0U;
    *(u8*)(r2 + 0xC) = (u8)r1;
    *(u8*)(r2 + 0xD) = (u8)r1;
    r1 = 0x37U;
    r1 = ~r1;
    r2 = *(u16*)(r1 + r2);
    r1 = 0x40U;
    r3 = 0x04000008U /* &REG_BG0CNT */; // [0x0802CAA8]
    r2 &= ~r1;
    *(u16*)(r3) = (u16)r2;
    r3 += 0x2U;
    r2 = *(u16*)(r3);
    r2 &= ~r1;
    *(u16*)(r3) = (u16)r2;
    r3 += 0x2U;
    r2 = *(u16*)(r3);
    r2 &= ~r1;
    *(u16*)(r3) = (u16)r2;
    r3 += 0x2U;
    r2 = *(u16*)(r3);
    r2 &= ~r1;
    *(u16*)(r3) = (u16)r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802CA1A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802CA16: BL __call_via_r3
loc_0802CA1A:
    return r0;
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return Mosaic_WriteSize2(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// Evidence: writes MOSAIC 0x0400004C: 0x0802CA36 ldr r1, [pc, #0x6c] (= 0x04000040) then 0x0802CA3A strb r0, [r1, #0xc]; writes MOSAIC 0x0400004D: 0x0802CA36 ldr r1, [pc, #0x6c] (= 0x04000040) then 0x0802CA3C strb r0, [r1, #0xd]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0802CA2E
// ROM Address: 0x0802CA2E..0x0802CA42 (20 bytes, Thumb)
u32 Mosaic_WriteSize2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 << 4);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802CA30: BL 0x08046E58
    r3 = (r0 << 4);
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x0802CAA4]
    r0 = r3 + r0;
    *(u8*)(r1 + 0xC) = (u8)r0;
    *(u8*)(r1 + 0xD) = (u8)r0;
    r0 = 0x0U;
    return sub_0802CA2C(r0, r1, r2, r3);
}

// Evidence: writes BG0CNT 0x04000008: 0x0802CA52 ldr r2, [pc, #0x54] (= 0x04000008) then 0x0802CA56 strh r1, [r2]; writes MOSAIC 0x0400004C: 0x0802CA42 ldr r1, [pc, #0x60] (= 0x04000040) then 0x0802CA46 strb r0, [r1, #0xc]; writes MOSAIC 0x0400004D: 0x0802CA42 ldr r1, [pc, #0x60] (= 0x04000040) then 0x0802CA48 strb r0, [r1, #0xd]; no other hardware address; tools/research/name_evidence.py --mode function --function 0x0802CA42
// ROM Address: 0x0802CA42..0x0802CAF8 (182 bytes, Thumb)
u32 Bg_WriteControl0AndMosaic2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x04000040U /* &REG_WIN0H */; // [0x0802CAA4]
    r0 = 0x0U;
    *(u8*)(r1 + 0xC) = (u8)r0;
    *(u8*)(r1 + 0xD) = (u8)r0;
    r0 = 0x37U;
    r0 = ~r0;
    r1 = *(u16*)(r0 + r1);
    r0 = 0x40U;
    r2 = 0x04000008U /* &REG_BG0CNT */; // [0x0802CAA8]
    r1 |= r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r1 |= r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r1 |= r0;
    *(u16*)(r2) = (u16)r1;
    r2 += 0x2U;
    r1 = *(u16*)(r2);
    r0 |= r1;
    *(u16*)(r2) = (u16)r0;
    return r0; // BX lr
    r4 = r0;
    r2 = 0x200U; // (1 << 9)
    r0 = 0x5U;
    r1 = 0x0U;
    r0 = (r0 << 24);
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802CA80: BL 0x0804912C
    r2 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r0 = 0x05000200U; // [0x0802CAB4]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0802CA8C: BL 0x0804912C
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_0802CAA0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802CA9C: BL __call_via_r3
loc_0802CAA0:
    return r0;
    r0 = r0;
    r0 = (r0 << 1);
    r0 = (r0 << 16);
    r0 = r1;
    r0 = (r0 << 16);
    *(u32*)(r5 + 0x30) = (u32)r4;
    r5 = (r0 >> 32);
    *(u32*)(r5 + 0x50) = (u32)r4;
    r5 = (r0 >> 32);
    r0 = (r0 << 8);
    r0 = (r0 << 20);
    r1 = *(u32*)(r1 + 0x4);
    r4 = *(u32*)(r0 + 0x8);
    r5 = *(u32*)(r1 + 0x24);
    r4 = r4 - r5;
    r5 = *(u32*)(r0 + 0xC);
    r3 = *(u32*)(r1 + 0x28);
    stack[0] = r4; // [sp + 0x0]
    r3 = r5 - r3;
    stack[1] = r3; // [sp + 0x4]
    r3 = r4;
    r2 = r1;
    r2 += 0x2CU;
    r4 = stack[1]; // [sp + 0x4]
    r5 = *(u32*)(r2);
    r3 = r5 + r3;
    *(u32*)(r2) = (u32)r3;
    r3 = *(u32*)(r2 + 0x4);
    r3 = r3 + r4;
    *(u32*)(r2 + 0x4) = (u32)r3;
    r2 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r0 + 0xC);
    *(u32*)(r1 + 0x28) = (u32)r0;
    *(u32*)(r1 + 0x24) = (u32)r2;
    r0 = *(u32*)(r1 + 0x30);
    r2 = *(u32*)(r1 + 0x18);
    r0 = r0 + r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0802CAF8..0x0802CAFA (2 bytes, Thumb)
u32 sub_0802CAF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    return r0;
}

// ROM Address: 0x0802CAFA..0x0802CB4E (84 bytes, Thumb)
u32 sub_0802CAFA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = 0x38U;
    *(u8*)(r1 + 0x8) = (u8)r0;
    *(u8*)(r1 + 0x11) = (u8)r2;
    return r0; // BX lr
    r4 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r5 = r1;
    r0 += 0x1U;
    r1 = (r0 << 16);
    r1 = (r1 >> 16);
    *(u16*)(r5 + 0x12) = (u16)r1;
    r0 = *(u32*)(r4 + 0x8);
    r6 = r0;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802CB18: BL 0x08046E58
    r1 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) return sub_0802CB4E(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802CB42;
    r0 -= 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802CB42;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802CB3A;
    r1 = r0;
    r0 = 0x1U;
    *(u32*)(r1 + 0x14) = (u32)r0;
loc_0802CB3A:
    r0 = r5;
    r0 = sub_0800EE78(r0, r1, r2, r3); // 0x0802CB3C: BL 0x0800EE78
    return r0;
loc_0802CB42:
    r0 = *(u32*)(r4 + 0x10);
    r0 *= r6;
    *(u16*)(r5 + 0x12) = (u16)r0;
    r0 = *(u32*)(r4 + 0x10);
    *(u8*)(r5 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x0802CB4E..0x0802CB52 (4 bytes, Thumb)
u32 sub_0802CB4E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r5 + 0x11) = (u8)r0;
    return r0;
}

// ROM Address: 0x0802CB52..0x0802CBAA (88 bytes, Thumb)
u32 sub_0802CB52(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r1 + 0x4);
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r1 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802CB64;
    r1 = r4;
loc_0802CB64:
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r4 + 0xC);
    r0 = 0x18U;
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0x10);
    stack[2] = r1; // [sp + 0x8]
    r6 = *(u32*)(r4 + 0x18);
    r7 = *(u32*)(r4 + 0x1C);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802CB74: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802CB90;
    r1 = 0x0804DE58U /* &VTable_0804DE58 */; // [0x0802CBAC]
    *(u32*)(r0) = (u32)r1;
    r1 = stack[0]; // [sp + 0x0]
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = stack[1]; // [sp + 0x4]
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = stack[2]; // [sp + 0x8]
    r0 += 0xCU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x18U;
loc_0802CB90:
    r6 = r0;
    r0 = *(u8*)(r4 + 0x8);
    r1 = 0x08072670U; // [0x0802CBB0]
    r1 = *(u8*)(r1 + r0);
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802CB9A
    r1 = r6;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802CBA2
    return r0;
}

// ROM Address: 0x0802CBB4..0x0802CD10 (348 bytes, Thumb)
u32 sub_0802CBB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r1 + 0x4);
    r1 = r0;
    r1 += 0x8U;
    r5 = r0;
    r0 = r4;
    r0 = sub_0800ECB0(r0, r1, r2, r3); // 0x0802CBC0
    r5 += 0x10U;
    r4 += 0x178U;
    r0 = *(u32*)r5; r5 += 4;
    r1 = *(u32*)r5; r5 += 4;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    return r0;
    r0 = r0;
    r4 = r1;
    r1 = 0x08756A2CU; // [0x0802CD10]
    r2 = 0x20U;
    r6 = sp;
    r0 = sp;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802CBE2: BL 0x08049138
    r0 = 0xFFU;
    r0 += 0xA1U;
    r0 = *(u32*)(r0 + r4);
    r3 = 0x0; // sp + 0x0
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xC) = (u16)r0;
    r0 = 0xFFU;
    r0 += 0xA5U;
    r0 = *(u32*)(r0 + r4);
    r1 = 0x0U;
    r0 = ((u32)((s32)r0 >> 8));
    *(u16*)(r3 + 0xE) = (u16)r0;
    r0 = r4;
    r0 += 0x1C0U;
    stack[8] = r0; // [sp + 0x20]
    *(u32*)(r0 + 0x34) = (u32)r1;
    r0 = *(u16*)(r3 + 0xE);
    r1 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x0802CD18]
    r7 = r4;
    r0 -= 0xCU;
    *(u16*)(r3 + 0xE) = (u16)r0;
    r0 = 0x00000FA4U; // [0x0802CD14]
    r3 = 0x0U;
    r4 = r0 + r1;
    r2 = r4;
    r1 = r6;
    r3 = ~r3;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0802CC20
    r5 = r0;
    r1 = r0;
    r0 = 0x08756A2CU; // [0x0802CD10]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802CC2E: BL 0x0801191A
    r0 = stack[8]; // [sp + 0x20]
    r3 = 0x0; // sp + 0x0
    *(u32*)(r0 + 0x30) = (u32)r5;
    r0 = 0xFFU;
    r0 += 0xF5U;
    *(u32*)(r0 + r5) = r7;
    r0 = *(u16*)(r3 + 0xE);
    r2 = r4;
    r0 -= 0xCU;
    *(u16*)(r3 + 0xE) = (u16)r0;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0802CC4E
    r7 = r0;
    r1 = r0;
    r0 = 0x08756A2CU; // [0x0802CD10]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802CC5C: BL 0x0801191A
    r0 = 0xFFU;
    r0 += 0xF1U;
    *(u32*)(r0 + r5) = r7;
    r1 = r0 + 4;
    *(u32*)(r1 + r7) = r5;
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0xE);
    r2 = r4;
    r0 -= 0xCU;
    *(u16*)(r3 + 0xE) = (u16)r0;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0802CC7C
    r5 = r0;
    r1 = r0;
    r0 = 0x08756A2CU; // [0x0802CD10]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802CC8A: BL 0x0801191A
    r0 = 0xFFU;
    r0 += 0xF1U;
    *(u32*)(r0 + r7) = r5;
    r1 = r0 + 4;
    *(u32*)(r1 + r5) = r7;
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0xE);
    r2 = r4;
    r0 -= 0xCU;
    *(u16*)(r3 + 0xE) = (u16)r0;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0802CCAA
    r7 = r0;
    r1 = r0;
    r0 = 0x08756A2CU; // [0x0802CD10]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802CCB8: BL 0x0801191A
    r0 = 0xFFU;
    r0 += 0xF1U;
    *(u32*)(r0 + r5) = r7;
    r1 = r0 + 4;
    *(u32*)(r1 + r7) = r5;
    r3 = 0x0; // sp + 0x0
    r0 = *(u16*)(r3 + 0xE);
    r2 = r4;
    r0 -= 0xCU;
    *(u16*)(r3 + 0xE) = (u16)r0;
    r3 = 0x0U;
    r3 = ~r3;
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_0800F68C(r0, r1, r2, r3); // 0x0802CCD8
    r4 = r0;
    r1 = r0;
    r0 = 0x08756A2CU; // [0x0802CD10]
    r0 -= 0x4U;
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802CCE6: BL 0x0801191A
    r1 = 0xFFU;
    r1 += 0xF1U;
    *(u32*)(r1 + r7) = r4;
    r4 += 0x1C0U;
    r0 = 0x0U;
    r4 += 0x30U;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r7; r4 += 4;
    return r0;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802CD02: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802CD0E;
    r1 = 0x0804C21CU /* &VTable_0804C21C */; // [0x0802CD1C]
    *(u32*)(r0) = (u32)r1;
loc_0802CD0E:
    return r0;
}

// ROM Address: 0x0802CD10..0x0802CD12 (2 bytes, Thumb)
u32 sub_0802CD10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r5 + 0x20);
    return r0;
}

// ROM Address: 0x0802CD12..0x0802CD42 (48 bytes, Thumb)
u32 sub_0802CD12(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = (r6 >> 1);
    r4 = (r4 >> 30);
    r0 = r0;
    r4 = ((u32)((s32)r6 >> 9));
    r1 = (r6 >> 1);
    *(u32*)r2 = r2; r2 += 4;
    *(u32*)r2 = r3; r2 += 4;
    *(u32*)r2 = r4; r2 += 4;
    r4 = (r0 >> 32);
    r4 = r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802CD40;
    r0 = 0xB0U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CD2A: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802CD42(r0, r1, r2, r3);
    r0 = 0xAFU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CD34: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802CD3C
loc_0802CD40:
    return r0;
}

// ROM Address: 0x0802CD42..0x0802CD76 (52 bytes, Thumb)
u32 sub_0802CD42(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xFFU;
    r0 += 0x2U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CD48: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802CD60;
    r0 = 0xB2U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CD52: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802CD5A
    return sub_0802CD40(r0, r1, r2, r3);
loc_0802CD60:
    r0 = 0x56U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CD64: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802CD40(r0, r1, r2, r3);
    r0 = 0xACU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CD6E: BL 0x08000158
    r1 = r0;
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802CD7C..0x0802CD80 (4 bytes, Thumb)
u32 sub_0802CD7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030030A0U; // [0x0802CD80]
    return r0; // BX lr
}

// ROM Address: 0x0802CD80..0x0802CD84 (4 bytes, Thumb)
u32 sub_0802CD80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xA0U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0802CD84..0x0802CDA6 (34 bytes, Thumb)
u32 sub_0802CD84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802CDA4;
    r0 = 0xAFU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CD8E: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802CDA6(r0, r1, r2, r3);
    r0 = 0xB0U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CD98: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802CDA0
loc_0802CDA4:
    return r0;
}

// ROM Address: 0x0802CDA6..0x0802CDE0 (58 bytes, Thumb)
u32 sub_0802CDA6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xB2U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CDAA: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802CDC4;
    r0 = 0xFFU;
    r0 += 0x2U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CDB6: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802CDBE
    return sub_0802CDA4(r0, r1, r2, r3);
loc_0802CDC4:
    r0 = 0xACU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CDC8: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802CDA4(r0, r1, r2, r3);
    r0 = 0x56U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802CDD2: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802CDDA
    return sub_0802CDA4(r0, r1, r2, r3);
}

// ROM Address: 0x0802CDE8..0x0802CE00 (24 bytes, Thumb)
u32 sub_0802CDE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u8*)(r1 + 0x11);
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0802CDFA;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_0802CE00(r0, r1, r2, r3);
loc_0802CDFA:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802CE00..0x0802D08C (652 bytes, Thumb)
u32 sub_0802CE00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001B94U; // [0x0802D08C]
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802CE0C;
    r0 = 0x0U;
    return sub_0802CDFC(r0, r1, r2, r3);
loc_0802CE0C:
    r0 = 0x8; // sp + 0x8
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0802CE0E: BL 0x0800FDFA
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
    r5 = 0x1U;
    r1 = r6;
    r0 = 0x20; // sp + 0x20
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0802CE34: BL 0x0800FDFA
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
    if (cmp_lhs >= cmp_rhs) goto loc_0802CE6E;
    r0 = (u32)(-(s32)r2);
loc_0802CE6E:
    r1 = r0;
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802CE78;
    r0 = (u32)(-(s32)r0);
loc_0802CE78:
    r7 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    stack[12] = r1; // [sp + 0x30]
    stack[13] = r0; // [sp + 0x34]
    if (cmp_lhs <= cmp_rhs) goto loc_0802CE90;
    r1 = stack[14]; // [sp + 0x38]
    r0 = 0x3U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0802CE8C;
    r0 = 0x2U;
loc_0802CE8C:
    *(u8*)(r6 + 0x10) = (u8)r0;
    goto loc_0802CE9C;
loc_0802CE90:
    r7 = r0;
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802CE9A;
    r5 = 0x0U;
loc_0802CE9A:
    *(u8*)(r6 + 0x10) = (u8)r5;
loc_0802CE9C:
    cmp_lhs = (s32)r7; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_0802CEA4;
    r0 = 0x0U;
    return sub_0802CDFC(r0, r1, r2, r3);
loc_0802CEA4:
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802CEAE: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802CEC4;
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802CEC0: BL __call_via_r3
loc_0802CEC4:
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802CECE: BL __call_via_r3
    r0 = stack[14]; // [sp + 0x38]
    r1 = stack[15]; // [sp + 0x3C]
    r0 = (r0 << 8);
    r1 = (r1 << 8);
    stack[13] = r1; // [sp + 0x34]
    stack[12] = r0; // [sp + 0x30]
    r1 = *(u32*)(r4 + 0x4);
    r2 = stack[13]; // [sp + 0x34]
    r0 *= r1;
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    r5 = r6;
    r5 += 0xFFU;
    stack[3] = r1; // [sp + 0xC]
    stack[5] = r1; // [sp + 0x14]
    r1 = (r0 << 8);
    r5 += 0xA1U;
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r7 = (r7 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802CEFE: BL 0x08046E58
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[5]; // [sp + 0x14]
    r1 = (r0 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0802CF0A: BL 0x08046E58
    r1 = stack[1]; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[3]; // [sp + 0xC]
    stack[6] = r0; // [sp + 0x18]
    stack[7] = r1; // [sp + 0x1C]
    r0 = *(u32*)(r5);
    r1 = stack[6]; // [sp + 0x18]
    r7 = r5 + 4;
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = stack[7]; // [sp + 0x1C]
    stack[2] = r0; // [sp + 0x8]
    r1 = r1 + r2;
    stack[10] = r0; // [sp + 0x28]
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x0U;
    stack[3] = r1; // [sp + 0xC]
    stack[9] = r1; // [sp + 0x24]
    stack[9] = r0; // [sp + 0x24]
    stack[11] = r1; // [sp + 0x2C]
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802CFE0;
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x28; // sp + 0x28
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802CF4A: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802CF60;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r7) = (u32)r0;
    r0 = 0x1U;
    stack[9] = r0; // [sp + 0x24]
    goto loc_0802CFE0;
loc_0802CF60:
    r0 = stack[10]; // [sp + 0x28]
    stack[7] = r0; // [sp + 0x1C]
    r0 = r6;
    r0 += 0x1A4U;
    stack[16] = r0; // [sp + 0x40]
    r0 = *(u32*)(r0);
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[10]; // [sp + 0x28]
    r1 = *(u32*)(r5);
    r0 = r0 - r1;
    stack[6] = r0; // [sp + 0x18]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0802CF7C;
    r0 = (u32)(-(s32)r0);
loc_0802CF7C:
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0802CFA4;
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x1C; // sp + 0x1C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802CF8E: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802CFA4;
    r0 = stack[7]; // [sp + 0x1C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[8]; // [sp + 0x20]
    *(u32*)(r7) = (u32)r0;
    r0 = 0x1U;
    stack[9] = r0; // [sp + 0x24]
    goto loc_0802CFE0;
loc_0802CFA4:
    r0 = *(u32*)(r5);
    r2 = stack[11]; // [sp + 0x2C]
    stack[7] = r0; // [sp + 0x1C]
    r0 = stack[11]; // [sp + 0x2C]
    r1 = 0x1C; // sp + 0x1C
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[16]; // [sp + 0x40]
    r0 = *(u32*)(r0);
    r0 = r2 - r0;
    stack[6] = r0; // [sp + 0x18]
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0802CFBC;
    r0 = (u32)(-(s32)r0);
loc_0802CFBC:
    r2 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0802CFE0;
    r2 = *(u32*)(r6);
    r0 = r6;
    r3 = *(u32*)(r2 + 0x54);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802CFCC: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802CFE0;
    r0 = stack[7]; // [sp + 0x1C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[8]; // [sp + 0x20]
    *(u32*)(r7) = (u32)r0;
    r0 = 0x1U;
    stack[9] = r0; // [sp + 0x24]
loc_0802CFE0:
    r0 = stack[9]; // [sp + 0x24]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D074;
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802CFF6;
    r0 = 0x20U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802CFEE
    r0 -= 0x10U;
    *(u32*)(r4 + 0x8) = (u32)r0;
loc_0802CFF6:
    r0 = *(u32*)(r5 + 0x4);
    r1 = *(u32*)(r5);
    stack[8] = r0; // [sp + 0x20]
    r0 = stack[14]; // [sp + 0x38]
    stack[7] = r1; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802D006;
    r0 = (u32)(-(s32)r0);
loc_0802D006:
    r2 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802D00E;
    r2 = (u32)(-(s32)r2);
loc_0802D00E:
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    r0 = *(u32*)(r4 + 0x8);
    r1 = 0x1C; // sp + 0x1C
    if (cmp_lhs >= cmp_rhs) goto loc_0802D03A;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802D02A;
    r0 = stack[7]; // [sp + 0x1C]
    r2 = *(u32*)(r4 + 0x4);
    r0 = r0 - r2;
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x8);
    r0 += 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    goto loc_0802D05C;
loc_0802D02A:
    r0 = stack[7]; // [sp + 0x1C]
    r2 = *(u32*)(r4 + 0x4);
    r0 = r0 + r2;
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    goto loc_0802D05C;
loc_0802D03A:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0802D04E;
    r0 = stack[8]; // [sp + 0x20]
    r2 = *(u32*)(r4 + 0x4);
    r0 = r0 - r2;
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u32*)(r4 + 0x8);
    r0 += 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    goto loc_0802D05C;
loc_0802D04E:
    r0 = stack[8]; // [sp + 0x20]
    r2 = *(u32*)(r4 + 0x4);
    r0 = r0 + r2;
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u32*)(r4 + 0x8);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x8) = (u32)r0;
loc_0802D05C:
    r2 = *(u32*)(r6);
    r0 = r6;
    r3 = *(u32*)(r2 + 0x54);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D064: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D076;
    r0 = stack[7]; // [sp + 0x1C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[8]; // [sp + 0x20]
    *(u32*)(r7) = (u32)r0;
loc_0802D074:
    goto loc_0802D07A;
loc_0802D076:
    r0 = 0x0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
loc_0802D07A:
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D084: BL __call_via_r3
    r0 = 0x0U;
    return sub_0802CDFC(r0, r1, r2, r3);
}

// ROM Address: 0x0802D090..0x0802D102 (114 bytes, Thumb)
u32 sub_0802D090(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802D096: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D0A8;
    r1 = 0x0804C670U; // [0x0802D0AC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_0802D0A8:
    return r0;
    r0 = r0;
    *(u32*)r6 = r4; r6 += 4;
    *(u32*)r6 = r5; r6 += 4;
    *(u32*)r6 = r6; r6 += 4;
    r4 = (r0 >> 32);
    r4 = r1;
    r1 = 0x0U;
    *(u16*)(r4 + 0x12) = (u16)r1;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x11) = (u8)r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802D0C2
    r0 = 0x08756A70U; // [0x0802D1D4]
    r2 = 0x0U;
    r1 = 0x24U;
    r0 = *(u32*)(r0);
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x0802D0CE
    cmp_lhs = (s32)r0; cmp_rhs = 12;
    if (cmp_lhs < cmp_rhs) goto loc_0802D0DA;
    r0 = 0x18U;
    *(u16*)(r4 + 0x12) = (u16)r0;
loc_0802D0DA:
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_0802D102(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D0FA: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0802D102..0x0802D166 (100 bytes, Thumb)
u32 sub_0802D102(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_0802D0FE(r0, r1, r2, r3);
    r5 = 0x08756A70U; // [0x0802D1D4]
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802D110
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) return sub_0802D0FE(r0, r1, r2, r3);
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
    r1 = r5 + 4;
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
    r2 = 0x0U;
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    stack[0] = r2; // [sp + 0x0]
    r3 = r4;
    r0 = 0x0U;
    r2 = *(u8*)(r4 + 0x10);
    r1 = 0x14; // sp + 0x14
    r0 = sub_0802D79C(r0, r1, r2, r3); // 0x0802D15E
    r1 = r0;
    r0 = *(u32*)(r5);
    return r0;
}

// ROM Address: 0x0802D16C..0x0802D1BA (78 bytes, Thumb)
u32 sub_0802D16C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0802D1D8]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802D1DC]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0802D18A;
    r1 = r4;
    r1 += 0x18CU;
loc_0802D18A:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0802D18C
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802D194
    r1 = 0x030030A8U; // [0x0802D1E0]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802D19C
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0802D1E4]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D1B6;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D1B2: BL __call_via_r3
loc_0802D1B6:
    return r0;
}

// ROM Address: 0x0802D1BA..0x0802D1C0 (6 bytes, Thumb)
u32 sub_0802D1BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x030030A8U; // [0x0802D1E0]
    return r0;
}

// ROM Address: 0x0802D1C0..0x0802D1CC (12 bytes, Thumb)
u32 sub_0802D1C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802D1C8;
    r0 = 0x0U;
loc_0802D1C8:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802D1CC..0x0802D1D2 (6 bytes, Thumb)
u32 sub_0802D1CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x030030A8U; // [0x0802D1E0]
    r0 += 0x4U;
    return r0; // BX lr
}

// ROM Address: 0x0802D2F0..0x0802D306 (22 bytes, Thumb)
u32 sub_0802D2F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802D2F8
    r1 = 0x030030B0U; // [0x0802D324]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802D300
    return r0;
}

// ROM Address: 0x0802D306..0x0802D318 (18 bytes, Thumb)
u32 sub_0802D306(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x030030B0U; // [0x0802D324]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802D314;
    r0 = 0x0U;
loc_0802D314:
    r0 = r2 - r0;
    return r0; // BX lr
}

// ROM Address: 0x0802D328..0x0802D360 (56 bytes, Thumb)
u32 sub_0802D328(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r2 += 0x1C0U;
    r0 = *(u32*)(r2 + 0x34);
    r4 = r1;
    r3 = 0x200U; // (1 << 9)
    r1 = 0x0U;
    r5 = 0xFU;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802D360(r0, r1, r2, r3);
    r0 = *(u8*)(r4 + 0x10);
    r2 = 0x1U;
    r0 ^= r2;
    *(u8*)(r4 + 0x10) = (u8)r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D3B6(r0, r1, r2, r3);
loc_0802D34C:
    r0 = r4;
    r0 += 0x1C0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r2 = r4 + r3;
    *(u32*)(r2 + 0x4) = (u32)r5;
    r4 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D34C;
    return sub_0802D3B6(r0, r1, r2, r3);
}

// ROM Address: 0x0802D360..0x0802D3BA (90 bytes, Thumb)
u32 sub_0802D360(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
loc_0802D362:
    r0 += 0x1C0U;
    r0 = *(u32*)(r0 + 0x34);
    r6 = 0xFFU;
    r6 += 0xF5U;
    r6 = *(u32*)(r6 + r0);
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D362;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D386;
    r3 = r4 + r3;
loc_0802D378:
    r0 += 0x1C0U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r3 + 0x4) = (u32)r5;
    r0 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D378;
loc_0802D386:
    r0 = *(u32*)(r2 + 0x34);
    r0 += 0x1C0U;
    *(u32*)(r0 + 0x30) = (u32)r1;
    r0 = 0xFFU;
    r0 += 0x29U;
    *(u32*)(r2 + 0x34) = (u32)r1;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D394: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802D39C
    r1 = 0x8EU;
    r0 = r4;
    r0 = Object_WriteTablePointer1(r0, r1, r2, r3); // 0x0802D3A4: BL 0x0800FA16
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D3B2: BL __call_via_r3
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0802D3BA..0x0802D49E (228 bytes, Thumb)
u32 sub_0802D3BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r4 = r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802D49A;
    r0 = 0xB0U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D3C8: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D3DC;
    r0 = 0xAFU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D3D4: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D3EC;
loc_0802D3DC:
    r0 = 0xB1U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D3DE: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802D3E6
    goto loc_0802D43E;
loc_0802D3EC:
    r0 = 0xFFU;
    r0 += 0x2U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D3F2: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D406;
    r0 = 0xB2U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D3FE: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D418;
loc_0802D406:
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D40A: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802D412
    goto loc_0802D43E;
loc_0802D418:
    r0 = 0x56U;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D41C: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D430;
    r0 = 0xACU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D428: BL 0x08000158
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D43E;
loc_0802D430:
    r0 = 0x55U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D432: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802D43A
loc_0802D43E:
    r7 = 0x08756AFCU; // [0x0802D4A4]
    r0 = *(u32*)(r7);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802D442
    r6 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs < cmp_rhs) goto loc_0802D49A;
    r5 = (r6 << 2);
    r0 = r5;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802D452
    r5 = r0 + r5;
    r0 = 0xC; // sp + 0xC
    r1 = r4;
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0802D45C
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
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x37U;
    stack[7] = r1; // [sp + 0x1C]
    stack[8] = r0; // [sp + 0x20]
    r4 = 0x1C; // sp + 0x1C
    r1 = r4;
    stack[2] = r2; // [sp + 0x8]
    r3 = 0x4U;
    r0 = 0x0U;
    r2 = 0x086FD9D0U; // [0x0802D4A8]
    stack[0] = r5; // [sp + 0x0]
    stack[1] = r6; // [sp + 0x4]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0802D48E
    r1 = r0;
    r0 = *(u32*)(r7);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802D496: BL 0x0801191A
loc_0802D49A:
    return r0;
}

// ROM Address: 0x0802D650..0x0802D670 (32 bytes, Thumb)
u32 sub_0802D650(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = r1;
    r0 = 0x200U; // (1 << 9)
    r1 = r1 + r0;
    r6 = r4;
    r6 += 0xFFU;
    r0 = *(u32*)(r1 + 0x4);
    r6 += 0xC1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D670(r0, r1, r2, r3);
    r0 -= 0x1U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    return sub_0802D674(r0, r1, r2, r3);
}

// ROM Address: 0x0802D670..0x0802D76C (252 bytes, Thumb)
u32 sub_0802D670(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    *(u32*)(r6 + 0xC) = (u32)r0;
    r0 = *(u32*)(r6 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D698;
    r0 = 0xFFU;
    r0 += 0x2BU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802D67E: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x0802D686
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D694: BL __call_via_r3
loc_0802D698:
    r0 = *(u32*)(r6 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D6A2;
loc_0802D69E:
    return r0;
loc_0802D6A2:
    r1 = *(u32*)(r5 + 0x10);
    r7 = 0x0U;
    r1 = r1 + r5;
    r1 = *(u8*)(r1 + 0x4);
    *(u8*)(r4 + 0x10) = (u8)r1;
    r1 = 0x80U;
    r0 &= ~r1;
    r1 = *(u32*)(r5 + 0x10);
    r1 = r1 + r5;
    *(u8*)(r1 + 0x4) = (u8)r0;
    *(u32*)(r6 + 0x24) = (u32)r7;
    r0 = *(u32*)(r5 + 0x10);
    r0 += 0x1U;
    *(u32*)(r5 + 0x10) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) goto loc_0802D6C4;
    *(u32*)(r5 + 0x10) = (u32)r7;
loc_0802D6C4:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D6CE: BL __call_via_r3
    r0 = *(u8*)(r4 + 0x10);
    r2 = 0x08756B38U; // [0x0802D78C]
    r1 = r4;
    r0 = (r0 << 3);
    r0 = r0 + r2;
    r1 += 0x1A0U;
    r12 = r1;
    r2 = *(u32*)r1; r1 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r2 = r2 + r3;
    r3 = *(u32*)(r1);
    r0 = *(u32*)(r0);
    stack[9] = r2; // [sp + 0x24]
    r0 = r3 + r0;
    stack[10] = r0; // [sp + 0x28]
    r0 = r2;
    r2 = stack[10]; // [sp + 0x28]
    stack[11] = r0; // [sp + 0x2C]
    stack[12] = r2; // [sp + 0x30]
    r2 = r12;
    *(u32*)(r2) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r1) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D70C: BL __call_via_r3
    r0 = *(u32*)(r6 + 0x30);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D722;
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x80U;
    r0 += 0xFFU;
    r1 |= r2;
    r0 += 0xC1U;
    *(u32*)(r0 + 0x24) = (u32)r1;
loc_0802D722:
    r0 = *(u32*)(r5 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D764;
    r0 = 0x03001C34U; // [0x0802D790]
    r3 = 0x0; // sp + 0x0
    r6 = *(u32*)(r0);
    stack[8] = r4; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8098U; // [0x0802D794]
    stack[12] = r4; // [sp + 0x30]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    *(u8*)(r3) = (u8)r7;
    r0 = 0x4; // sp + 0x4
    r1 = r4;
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0802D746
    r1 = *(u32*)(r6);
    r0 = r6;
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = sp;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D756: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D768;
    r0 = 0x14U;
    *(u32*)(r5 + 0x14) = (u32)r0;
    goto loc_0802D768;
loc_0802D764:
    r0 -= 0x1U;
    *(u32*)(r5 + 0x14) = (u32)r0;
loc_0802D768:
    r0 = 0x0U;
    goto loc_0802D69E;
    return r0;
}

// ROM Address: 0x0802D826..0x0802D92E (264 bytes, Thumb)
u32 sub_0802D826(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x03001C34U; // [0x0802DAF8]
    r4 = 0x1U;
    r3 = *(u32*)(r1);
    r4 = (r4 << 10);
    r3 += 0x1A0U;
    r3 = *(u32*)(r3);
    r3 = r3 + r4;
    *(u32*)(r0 + 0x20) = (u32)r3;
    r5 = 0x030030BCU; // [0x0802DAFC]
    r4 = *(u32*)(r1);
    r7 = 0x08756B74U; // [0x0802DAF4]
    r5 = *(u32*)(r5);
    r4 += 0xFFU;
    r7 += 0x40U;
    r6 = (r5 << 2);
    r6 = *(u32*)(r7 + r6);
    r4 += 0xA5U;
    r4 = *(u32*)(r4);
    r2 = r0;
    r2 += 0x20U;
    r6 = (r6 << 8);
    r4 = r4 - r6;
    r3 = r2 + 4;
    *(u32*)(r3) = (u32)r4;
    r5 += 0x1U;
    r3 = (r5 << 29);
    r5 = 0x030030BCU; // [0x0802DAFC]
    r3 = (r3 >> 29);
    *(u32*)(r5) = (u32)r3;
    r3 = 0x087571F4U; // [0x0802DAF0]
    r3 += 0x24U;
    *(u32*)(r0 + 0x4C) = (u32)r3;
    r3 = 0x1U;
    *(u32*)(r0 + 0x50) = (u32)r3;
    r1 = *(u32*)(r1);
    r4 = *(u32*)r2; r2 += 4;
    r1 += 0x1A0U;
    r3 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r2);
    r3 = r3 - r4;
    r0 += 0x58U;
    r1 = r1 - r2;
    stack[1] = r1; // [sp + 0x4]
    r2 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    stack[2] = r3; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    *(u32*)r0 = r3; r0 += 4;
    r1 = stack[3]; // [sp + 0xC]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x20);
    r1 = ((u32)((s32)r1 >> 8));
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0 + 0x24);
    r4 = 0x08756B74U; // [0x0802DAF4]
    r1 = ((u32)((s32)r1 >> 8));
    stack[5] = r1; // [sp + 0x14]
    r1 = r0;
    r4 -= 0x10U;
    r0 = *(u32*)(r4 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802D8B2
    r0 = *(u32*)(r4 + 0x8);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802D8B8
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0802D8E2;
    r2 = 0x38U;
    r0 = (r1 << 3);
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x4U;
    r0 = 0x0U;
    r1 = 0x10; // sp + 0x10
    r2 = 0x08712FDCU; // [0x0802DB00]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0802D8D6
    r1 = r0;
    r0 = *(u32*)(r4 + 0x8);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802D8DE: BL 0x0801191A
loc_0802D8E2:
    return r0;
    r0 = 0x03001C34U; // [0x0802DAF8]
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D93A(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D93A(r0, r1, r2, r3);
    r2 = 0x200U; // (1 << 9)
    r4 = r1 + r2;
    r0 = *(u32*)(r4 + 0x2C);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2);
    r2 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802D908: BL __call_via_r3
    r0 = 0x08756B74U; // [0x0802DAF4]
    r2 = 0x0U;
    r1 = 0x25U;
    r0 -= 0x10U;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x0802D916
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = *(u32*)(r4 + 0x38);
    r0 = (r0 << 4);
    r2 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_0802D92E(r0, r1, r2, r3);
    r1 = r1 - r0;
    *(u32*)(r4 + 0x38) = (u32)r1;
    return sub_0802D930(r0, r1, r2, r3);
}

// ROM Address: 0x0802D92E..0x0802D93C (14 bytes, Thumb)
u32 sub_0802D92E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x38) = (u32)r2;
    r1 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_0802D93C(r0, r1, r2, r3);
    r0 = r1 - r0;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    return r0;
}

// ROM Address: 0x0802D93C..0x0802D940 (4 bytes, Thumb)
u32 sub_0802D93C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x3C) = (u32)r2;
    return r0;
}

// ROM Address: 0x0802D940..0x0802D9B0 (112 bytes, Thumb)
u32 sub_0802D940(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r7 = r1;
    r0 = sub_0802D8E6(r0, r1, r2, r3); // 0x0802D948
    r0 = *(u32*)(r4 + 0x48);
    r1 = *(u32*)(r4 + 0x4C);
    r2 = ((u32)((s32)r0 >> 3));
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r2 = (r2 << 2);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x18) = (u32)r1;
    r5 = 0x08756B74U; // [0x0802DAF4]
    r1 = *(u32*)(r4 + 0x50);
    r5 -= 0x10U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D9B0(r0, r1, r2, r3);
    r1 = 0x03001C34U; // [0x0802DAF8]
    r6 = *(u32*)(r4 + 0x58);
    r1 = *(u32*)(r1);
    r0 = r4;
    r1 += 0x1A0U;
    r3 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r4 + 0x5C);
    r3 = r3 - r6;
    r0 += 0x20U;
    r1 = r1 - r2;
    stack[14] = r1; // [sp + 0x38]
    r2 = stack[14]; // [sp + 0x38]
    stack[13] = r3; // [sp + 0x34]
    stack[16] = r2; // [sp + 0x40]
    stack[15] = r3; // [sp + 0x3C]
    *(u32*)r0 = r3; r0 += 4;
    r1 = stack[16]; // [sp + 0x40]
    r3 = 0x3CU;
    *(u32*)(r0) = (u32)r1;
    r2 = 0x8U;
    r1 = 0xF0U;
    r0 = *(u32*)(r5);
    r0 = sub_08040284(r0, r1, r2, r3); // 0x0802D996
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D9CC(r0, r1, r2, r3);
    r1 = r4;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802D9A2
    r0 = r4;
    r0 = sub_0802D8E6(r0, r1, r2, r3); // 0x0802D9A8
    return r0;
}

// ROM Address: 0x0802D9B0..0x0802DAEA (314 bytes, Thumb)
u32 sub_0802D9B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r4 + 0x20);
    r3 = *(u32*)(r4 + 0x40);
    r0 += 0x1U;
    r2 = r2 + r3;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r1 = *(u32*)(r4 + 0x44);
    r2 = *(u32*)(r4 + 0x24);
    *(u32*)(r4 + 0x48) = (u32)r0;
    r1 = r2 + r1;
    *(u32*)(r4 + 0x24) = (u32)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if (cmp_lhs != cmp_rhs) goto loc_0802D9CC;
    r6 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r6;
loc_0802D9CC:
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802D9CE
    r0 = *(u32*)(r4 + 0x54);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802D9E4;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x54) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802D9E4;
    r0 = r4;
    r0 = sub_0802D826(r0, r1, r2, r3); // 0x0802D9E0: BL 0x0802D826
loc_0802D9E4:
    r0 = *(u32*)(r4 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802D9AC(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x54);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) return sub_0802D9AC(r0, r1, r2, r3);
    r0 = *(u32*)(r5 + 0xC);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802DA14;
    r1 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802DA14;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0802DA14;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) goto loc_0802DA1E;
loc_0802DA14:
    r1 = r4;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802DA18
    return sub_0802D9AC(r0, r1, r2, r3);
loc_0802DA1E:
    r0 = r4;
    r0 += 0x28U;
    r1 = *(u32*)(r5 + 0xC);
    r6 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0802DA2A
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802DA3C;
    r1 = r4;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802DA36
    return sub_0802D9AC(r0, r1, r2, r3);
loc_0802DA3C:
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D9AC(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D9AC(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x20; // sp + 0x20
    stack[12] = r0; // [sp + 0x30]
    r0 = *(u8*)(r4 + 0x10);
    r7 = 0x10; // sp + 0x10
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x086B8090U; // [0x0802DB04]
    stack[11] = r0; // [sp + 0x2C]
    r0 = 0x400U; // (1 << 10)
    stack[10] = r0; // [sp + 0x28]
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    r0 = r7 + 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r6 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x10) = (u8)r6;
    stack[16] = r4; // [sp + 0x40]
    r2 = r7;
    r1 = 0x0U;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802DA70
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802D9AC(r0, r1, r2, r3);
    r2 = 0x0U;
    r1 = 0x25U;
    r7 = r5;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011CCA(r0, r1, r2, r3); // 0x0802DA80
    r1 = 0x03001C34U; // [0x0802DAF8]
    r5 = r0;
    r0 = sp;
    r1 = *(u32*)(r1);
    r0 = sub_0800FE78(r0, r1, r2, r3); // 0x0802DA8C
    r0 = stack[5]; // [sp + 0x14]
    r1 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802DAE2;
    r0 = stack[0]; // [sp + 0x0]
    r1 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802DAE2;
    r0 = stack[6]; // [sp + 0x18]
    r1 = stack[3]; // [sp + 0xC]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802DAE2;
    r0 = stack[1]; // [sp + 0x4]
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802DAE2;
    r7 = *(u32*)(r7 + 0x4);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802DAB4
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0802DB08]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x0802DB0C]
    r3 = r6;
    r2 = 0x40U;
    r0 = r7 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802DACC
    cmp_lhs = (s32)r5; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_0802DADA;
    r0 = 0x4U;
    *(u32*)(r4 + 0x54) = (u32)r0;
    return sub_0802D9AC(r0, r1, r2, r3);
loc_0802DADA:
    r0 = r4;
    r0 = sub_0802D89A(r0, r1, r2, r3); // 0x0802DADC
    return sub_0802D9AC(r0, r1, r2, r3);
loc_0802DAE2:
    r0 = r4;
    r0 = sub_0802D89A(r0, r1, r2, r3); // 0x0802DAE4
    return sub_0802D9AC(r0, r1, r2, r3);
}

// ROM Address: 0x0802DB6C..0x0802DCCA (350 bytes, Thumb)
u32 sub_0802DB6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = stack[11]; // [sp + 0x2C]
    r6 = stack[13]; // [sp + 0x34]
    if (cmp_lhs != cmp_rhs) goto loc_0802DB8C;
    r0 = 0x64U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802DB7E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802DB8C;
    r0 = r4;
loc_0802DB88:
    return r0;
loc_0802DB8C:
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802DB96;
    r1 = (r1 >> 2);
loc_0802DB96:
    r0 = r4;
    r2 = stack[3]; // [sp + 0xC]
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x0802DB9A
    r0 = 0x0804C99CU /* &VTable_0804C99C */; // [0x0802DE08]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x40) = (u32)r0;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r1 = stack[2]; // [sp + 0x8]
    *(u32*)(r4 + 0x54) = (u32)r1;
    *(u32*)(r4 + 0x60) = (u32)r5;
    r2 = stack[10]; // [sp + 0x28]
    r3 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    *(u32*)(r4 + 0x5C) = (u32)r2;
    *(u32*)(r4 + 0x58) = (u32)r3;
    r2 = *(u32*)(r7);
    r3 = *(u32*)(r7 + 0x4);
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x20) = (u32)r2;
    r3 = (r3 << 8);
    *(u32*)(r4 + 0x24) = (u32)r3;
    r1 = stack[12]; // [sp + 0x30]
    *(u32*)(r4 + 0x44) = (u32)r1;
    *(u32*)(r4 + 0x48) = (u32)r6;
    r1 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r1 = *(u32*)(r5 + 0x4);
    *(u32*)(r4 + 0x50) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r1;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802DBD6
    r0 = r4;
    goto loc_0802DB88;
    r4 = r0;
    r0 = 0x0804C99CU /* &VTable_0804C99C */; // [0x0802DE08]
    r6 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x50);
    r5 = 0x08757284U; // [0x0802DE0C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802DBF8;
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802DBF4
loc_0802DBF8:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802DE10]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0802DE14]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802DC0A;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0802DC06
loc_0802DC0A:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0802DE18]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802DC18;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0802DC14: BL 0x0803D63C
loc_0802DC18:
    return r0;
    r7 = r1;
    r1 = *(u32*)(r0 + 0x40);
    r4 = r0;
    r1 += 0x1U;
    *(u32*)(r0 + 0x40) = (u32)r1;
    r0 = ((u32)((s32)r1 >> 2));
    *(u32*)(r4 + 0x4C) = (u32)r0;
    r2 = *(u32*)(r4 + 0x48);
    r5 = r4;
    r5 += 0x20U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r6 = 0x08757284U; // [0x0802DE0C]
    if (cmp_lhs == cmp_rhs) return sub_0802DCCA(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0802DCB6;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r5 + 0x4);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[6] = r1; // [sp + 0x18]
    stack[8] = r1; // [sp + 0x20]
    stack[5] = r0; // [sp + 0x14]
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x08757284U; // [0x0802DE0C]
    r1 = stack[7]; // [sp + 0x1C]
    r3 += 0x8U;
    r0 = (r0 << 3);
    r0 = r0 + r3;
    r2 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = stack[8]; // [sp + 0x20]
    r0 = *(u32*)(r0 + 0x4);
    stack[5] = r1; // [sp + 0x14]
    r0 = r2 + r0;
    stack[6] = r0; // [sp + 0x18]
    r0 = r1;
    r1 = stack[6]; // [sp + 0x18]
    stack[9] = r0; // [sp + 0x24]
    stack[10] = r1; // [sp + 0x28]
    r0 = *(u8*)(r4 + 0x10);
    r1 = *(u32*)(r4 + 0x58);
    r0 = (r0 << 3);
    r0 = r0 + r3;
    r2 = *(u32*)(r0);
    r3 = 0x24; // sp + 0x24
    r1 = r1 + r2;
    r2 = *(u32*)(r4 + 0x5C);
    r0 = *(u32*)(r0 + 0x4);
    stack[5] = r1; // [sp + 0x14]
    r0 = r2 + r0;
    stack[6] = r0; // [sp + 0x18]
    r0 = r1;
    r1 = stack[6]; // [sp + 0x18]
    stack[11] = r0; // [sp + 0x2C]
    stack[12] = r1; // [sp + 0x30]
    r2 = *(u32*)(r4 + 0x48);
    r1 = *(u32*)(r4 + 0x44);
    r0 = *(u32*)(r4 + 0x60);
    r2 -= 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r1 += 0x1U;
    r2 = 0x2C; // sp + 0x2C
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r2; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r1 = *(u32*)(r4 + 0x54);
    r2 = *(u32*)(r4 + 0x1C);
    r0 = 0x0U;
    r0 = sub_0802DB6C(r0, r1, r2, r3); // 0x0802DCA8: BL 0x0802DB6C
    r1 = r0;
    *(u32*)(r4 + 0x50) = (u32)r0;
    r0 = *(u32*)(r6 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802DCB2: BL 0x0801191A
loc_0802DCB6:
    r0 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_0802DCDE(r0, r1, r2, r3);
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    *(u32*)(r4 + 0x4C) = (u32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802DCDE(r0, r1, r2, r3);
    r0 = 0x2U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    return sub_0802DCDE(r0, r1, r2, r3);
}

// ROM Address: 0x0802DCCA..0x0802DE08 (318 bytes, Thumb)
u32 sub_0802DCCA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 7;
    if (cmp_lhs < cmp_rhs) goto loc_0802DCDE;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    r0 += 0x4U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) goto loc_0802DCDE;
    r0 = 0x5U;
    *(u32*)(r4 + 0x4C) = (u32)r0;
loc_0802DCDE:
    r1 = *(u8*)(r4 + 0x10);
    r2 = 0x54U;
    r0 = *(u32*)(r4 + 0x60);
    r2 *= r1;
    r0 = *(u32*)(r0 + 0x4);
    r0 = r0 + r2;
    r2 = *(u32*)(r4 + 0x4C);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r2 = (r2 << 2);
    r0 = r0 + r2;
    *(u32*)(r4 + 0x18) = (u32)r0;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802DDE0;
    r2 = *(u32*)(r4 + 0x44);
    r2 += 0x1U;
    r0 = r2;
    r0 *= r2;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    r1 = *(u32*)(r4 + 0x54);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0802DD54;
    r1 = *(u16*)(r1 + 0x2);
    r2 = (r1 << 26);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0802DD30;
    r1 = (r0 << 8);
    r2 = *(u32*)(r4 + 0x20);
    r1 = ((u32)((s32)r1 >> 1));
    r1 = r2 - r1;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = *(u32*)(r4 + 0x58);
    r1 = (u32)(-(s32)r1);
    r3 = (r2 << 8);
    r1 = r1 + r3;
    r1 = ((u32)((s32)r1 >> 8));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802DDA4;
    r0 = r2 - r0;
    r0 = (r0 << 8);
    *(u32*)(r5) = (u32)r0;
    goto loc_0802DDA4;
loc_0802DD30:
    r1 = (r1 << 27);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0802DDA4;
    r1 = (r0 << 8);
    r2 = *(u32*)(r4 + 0x20);
    r1 = ((u32)((s32)r1 >> 1));
    r2 = r2 + r1;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r1 = *(u32*)(r4 + 0x58);
    r3 = (r1 << 8);
    r2 = r2 - r3;
    r2 = ((u32)((s32)r2 >> 8));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802DDA4;
    r0 = r1 + r0;
    r0 = (r0 << 8);
    *(u32*)(r5) = (u32)r0;
    goto loc_0802DDA4;
loc_0802DD54:
    r2 = *(u16*)(r1 + 0x2);
    r1 = (r2 << 25);
    r3 = (r1 >> 31);
    r1 = r4;
    r1 += 0x24U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802DD82;
    r2 = (r0 << 8);
    r3 = *(u32*)(r4 + 0x24);
    r2 = ((u32)((s32)r2 >> 1));
    r2 = r3 - r2;
    *(u32*)(r4 + 0x24) = (u32)r2;
    r3 = *(u32*)(r4 + 0x5C);
    r2 = (u32)(-(s32)r2);
    r5 = (r3 << 8);
    r2 = r2 + r5;
    r2 = ((u32)((s32)r2 >> 8));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802DDA4;
    r0 = r3 - r0;
    r0 = (r0 << 8);
    *(u32*)(r1) = (u32)r0;
    goto loc_0802DDA4;
loc_0802DD82:
    r2 = (r2 << 24);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0802DDA4;
    r2 = (r0 << 8);
    r3 = *(u32*)(r4 + 0x24);
    r2 = ((u32)((s32)r2 >> 1));
    r3 = r3 + r2;
    *(u32*)(r4 + 0x24) = (u32)r3;
    r2 = *(u32*)(r4 + 0x5C);
    r5 = (r2 << 8);
    r3 = r3 - r5;
    r3 = ((u32)((s32)r3 >> 8));
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802DDA4;
    r0 = r2 + r0;
    r0 = (r0 << 8);
    *(u32*)(r1) = (u32)r0;
loc_0802DDA4:
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r5 = sp;
    r7 = r5 + 4;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B80E8U; // [0x0802DE1C]
    stack[7] = r0; // [sp + 0x1C]
    r0 = *(u32*)(r4 + 0x60);
    r0 = *(u32*)(r0 + 0x8);
    stack[6] = r0; // [sp + 0x18]
    r0 = r4;
    r0 += 0x28U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r0 = 0x1U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    stack[12] = r4; // [sp + 0x30]
    r2 = r5;
    r1 = 0x0U;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802DDD2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802DDE0;
    r0 = 0x2U;
    r5 = *(u32*)(r6);
    goto loc_0802DDE2;
loc_0802DDE0:
    goto loc_0802DDFE;
loc_0802DDE2:
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802DDE2
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0802DE20]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x0802DE24]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r5 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802DDFA
loc_0802DDFE:
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802DE00
    return r0;
}

// ROM Address: 0x0802DE28..0x0802DE62 (58 bytes, Thumb)
u32 sub_0802DE28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r1 + 0x58);
    r4 = r1;
    r0 += 0x48U;
    r0 = *(u32*)(r0 + 0x54);
    r1 = *(u32*)(r1 + 0x50);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0802DE48;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802DE3C
    r1 = 0x03001B20U; // [0x0802DE6C]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802DE44
loc_0802DE48:
    r1 = r4;
    r1 += 0x160U;
    r3 = 0x16U;
    r0 = (u32)(*(s16*)(r1 + r3));
    r2 = 0x13U;
    r2 = ~r2;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_0802DE62(r0, r1, r2, r3);
    r0 -= 0x1U;
    *(u16*)(r1 + 0x16) = (u16)r0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802DE62..0x0802DE66 (4 bytes, Thumb)
u32 sub_0802DE62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return r0;
}
