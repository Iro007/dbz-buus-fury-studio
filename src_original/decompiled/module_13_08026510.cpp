/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #13
 * Address Range: 0x08026510..0x08028D1C (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08026510..0x08026582 (114 bytes, Thumb)
u32 sub_08026510(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 2);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_0802650C(r0, r1, r2, r3);
    r5 = 0x0874CA38U; // [0x080265F0]
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802651E
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) return sub_0802650C(r0, r1, r2, r3);
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
    r1 = 0x0874CA38U; // [0x080265F0]
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
    r0 = sub_080274B4(r0, r1, r2, r3); // 0x0802656A
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08026572: BL 0x0801191A
    r4 = 0x000005C4U; // [0x080265F8]
    r0 = *(u32*)(r5);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x083193F8U; // [0x080265F4]
    return r0;
}

// ROM Address: 0x08026588..0x08026660 (216 bytes, Thumb)
u32 sub_08026588(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x080265FC]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x08026600]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_080265A6;
    r1 = r4;
    r1 += 0x18CU;
loc_080265A6:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x080265A8
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x080265B0
    r1 = 0x03002FC4U; // [0x08026604]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x080265B8
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08026608]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080265D2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080265CE: BL __call_via_r3
loc_080265D2:
    return r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03002FC4U; // [0x08026604]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_080265E4;
    r0 = 0x0U;
loc_080265E4:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = 0x03002FC4U; // [0x08026604]
    r0 += 0x4U;
    return r0; // BX lr
    r0 = r0;
    r3 = *(u32*)r2; r2 += 4;
    r4 = *(u32*)r2; r2 += 4;
    r5 = *(u32*)r2; r2 += 4;
    r4 = (r6 >> 1);
    stack[248] = r3; // [sp + 0x3E0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 196;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
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
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    r6 = 0x03002FCCU; // [0x08026740]
    r5 = 0x0874CA6CU; // [0x08026744]
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08026660(r0, r1, r2, r3);
    r0 = *(u32*)(r5);
    r3 = *(u32*)(r6 + 0x4);
    r1 = r0 + 4;
    r5 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0802664E;
loc_0802663E:
    r2 = (r0 << 2);
    r2 = r2 + r1;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_0802665C;
    r0 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0802663E;
loc_0802664E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08026658: BL __call_via_r3
loc_0802665C:
    return r0;
}

// ROM Address: 0x08026660..0x080266D2 (114 bytes, Thumb)
u32 sub_08026660(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 21);
    r0 = (r0 >> 24);
    *(u8*)(r4 + 0x11) = (u8)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08026674;
    r0 += 0x1U;
    r0 = (r0 << 31);
    r0 = (r0 >> 31);
    r0 += 0x1U;
    *(u8*)(r4 + 0x11) = (u8)r0;
loc_08026674:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_0802665C(r0, r1, r2, r3);
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802667C
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) return sub_0802665C(r0, r1, r2, r3);
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
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0874CA6CU; // [0x08026744]
    r1 += 0x4U;
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
    r0 = sub_0802A2EC(r0, r1, r2, r3); // 0x080266C8
    r1 = r0;
    *(u32*)(r6 + 0x4) = (u32)r0;
    r0 = *(u32*)(r5);
    return r0;
}

// ROM Address: 0x080266D8..0x08026790 (184 bytes, Thumb)
u32 sub_080266D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x08026748]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0802674C]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_080266F6;
    r1 = r4;
    r1 += 0x18CU;
loc_080266F6:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x080266F8
    r1 = 0x13U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08026700
    r1 = 0x03002FCCU; // [0x08026740]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08026708
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08026750]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026722;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802671E: BL __call_via_r3
loc_08026722:
    return r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03002FCCU; // [0x08026740]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08026734;
    r0 = 0x0U;
loc_08026734:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = 0x03002FCCU; // [0x08026740]
    r0 += 0x8U;
    return r0; // BX lr
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 204;
    r0 = (r0 << 12);
    r2 = *(u32*)r2; r2 += 4;
    r3 = *(u32*)r2; r2 += 4;
    r5 = *(u32*)r2; r2 += 4;
    r6 = *(u32*)r2; r2 += 4;
    r4 = (r6 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = r1;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u8*)(r0 + 0x11) = (u8)r2;
    r1 = 0x12U;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08026764
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08026790(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08026788: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08026790..0x08026802 (114 bytes, Thumb)
u32 sub_08026790(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_0802678C(r0, r1, r2, r3);
    r5 = 0x0874CA9CU; // [0x08026870]
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802679E
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs < cmp_rhs) return sub_0802678C(r0, r1, r2, r3);
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
    r1 = 0x0874CA9CU; // [0x08026870]
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
    r0 = sub_080276A8(r0, r1, r2, r3); // 0x080267EA: BL 0x080276A8
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x080267F2: BL 0x0801191A
    r4 = 0x000005C4U; // [0x08026878]
    r0 = *(u32*)(r5);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x083193F8U; // [0x08026874]
    return r0;
}

// ROM Address: 0x08026808..0x080268AA (162 bytes, Thumb)
u32 sub_08026808(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0802687C]
    r4 = r1;
    r0 = *(u32*)(r0);
    r1 = 0x0U;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x08026880]
    stack[2] = r1; // [sp + 0x8]
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r2; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_08026826;
    r1 = r4;
    r1 += 0x18CU;
loc_08026826:
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08026828
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08026830
    r1 = 0x03002FD8U; // [0x08026884]
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08026838
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08026888]
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026852;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0802684E: BL __call_via_r3
loc_08026852:
    return r0;
    r2 = 0x1U;
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x03002FD8U; // [0x08026884]
    r0 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_08026864;
    r0 = 0x0U;
loc_08026864:
    r0 = r2 - r0;
    return r0; // BX lr
    r0 = 0x03002FD8U; // [0x08026884]
    r0 += 0x4U;
    return r0; // BX lr
    r0 = r0;
    r2 = *(u32*)r2; r2 += 4;
    r3 = *(u32*)r2; r2 += 4;
    r4 = *(u32*)r2; r2 += 4;
    r7 = *(u32*)r2; r2 += 4;
    r4 = (r6 >> 1);
    stack[248] = r3; // [sp + 0x3E0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 216;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r0 = 0x03001B94U; // [0x0802694C]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080268A4;
    r0 = 0xFFU;
    r0 += 0xCDU;
    r0 = *(u32*)(r0 + r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080268AA(r0, r1, r2, r3);
loc_080268A4:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080268AA..0x0802692C (130 bytes, Thumb)
u32 sub_080268AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x8; // sp + 0x8
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080268AC: BL 0x0800FDFA
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
    r1 = r4;
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x080268D0: BL 0x0800FDFA
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
    if (cmp_lhs >= cmp_rhs) goto loc_0802690A;
    r0 = (u32)(-(s32)r2);
loc_0802690A:
    r1 = r0;
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08026914;
    r0 = (u32)(-(s32)r0);
loc_08026914:
    stack[13] = r0; // [sp + 0x34]
    r0 = r1;
    stack[12] = r1; // [sp + 0x30]
    r1 = stack[13]; // [sp + 0x34]
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_08026924;
    cmp_lhs = (s32)r1; cmp_rhs = 16;
    if (cmp_lhs >= cmp_rhs) goto loc_08026928;
loc_08026924:
    r0 = 0x1U;
    return sub_080268A6(r0, r1, r2, r3);
loc_08026928:
    r0 = 0x0U;
    return sub_080268A6(r0, r1, r2, r3);
}

// ROM Address: 0x0802692C..0x080269BC (144 bytes, Thumb)
u32 sub_0802692C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0xC);
    r2 = *(u32*)(r0);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08026932: BL __call_via_r3
    r4 = r0;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802693A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026948;
    r1 = 0x0804A120U; // [0x08026950]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_08026948:
    return r0;
    r0 = r0;
    r4 = r2 - r6;
    r0 = (r0 << 12);
    r1 = 0x080269D4U;
    r4 = (r0 >> 32);
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08026966;
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802695E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802697C;
loc_08026966:
    r1 = 0x0804B230U /* &VTable_0804B230 */; // [0x08026B30]
    r3 = 0x0000071DU; // [0x08026B34]
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r4);
    r1 *= r3;
    r1 = ((u32)((s32)r1 >> 8));
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = *(u32*)(r4 + 0x4);
    r1 *= r3;
    r1 = ((u32)((s32)r1 >> 8));
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_0802697C:
    return r0;
    r2 = 0x0U;
    *(u16*)(r1 + 0x12) = (u16)r2;
    r0 = r1;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    *(u8*)(r0 + 0x11) = (u8)r2;
    r1 = 0x12U;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0802698E
    return r0;
    r6 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 24;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_080269BC(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080269B4: BL __call_via_r3
    return r0;
}

// ROM Address: 0x080269BC..0x080269D4 (24 bytes, Thumb)
u32 sub_080269BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 3);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_080269B8(r0, r1, r2, r3);
    r5 = 0x0874CAD0U; // [0x08026B38]
    r0 = *(u32*)(r5);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x080269CA
    r1 = 0xFFU;
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    return r0;
}

// ROM Address: 0x08026A26..0x08026B2C (262 bytes, Thumb)
u32 sub_08026A26(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x08026B3C]
    r5 = 0x0U;
    r0 = *(u32*)(r0);
    r4 = r1;
    r2 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x08026B44]
    r1 = r5;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    stack[10] = r5; // [sp + 0x28]
    r6 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08026B40]
    stack[11] = r0; // [sp + 0x2C]
    stack[9] = r2; // [sp + 0x24]
    if (cmp_lhs == cmp_rhs) goto loc_08026A48;
    r1 = r4;
    r1 += 0x18CU;
loc_08026A48:
    r0 = 0x24; // sp + 0x24
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x08026A4A
    r0 = 0x03001C34U; // [0x08026B3C]
    r0 = *(u32*)(r0);
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    r0 = r4;
    r0 += 0x1A0U;
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[2]; // [sp + 0x8]
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    r1 = stack[5]; // [sp + 0x14]
    r0 = stack[3]; // [sp + 0xC]
    r2 = stack[6]; // [sp + 0x18]
    r1 = r0 - r1;
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 - r2;
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    stack[7] = r1; // [sp + 0x1C]
    r1 = *(u8*)(r4 + 0x10);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08026AA2;
    r0 = 0x0U;
loc_08026AA2:
    r0 = (r0 << 2);
    r1 = 0x1C; // sp + 0x1C
    r0 = r0 + r1;
    *(u32*)(r0) = (u32)r5;
    r0 = 0x7FU;
    r1 = stack[7]; // [sp + 0x1C]
    r0 = ~r0;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08026AB6;
    stack[7] = r0; // [sp + 0x1C]
loc_08026AB6:
    r2 = stack[7]; // [sp + 0x1C]
    r1 = 0x80U;
    cmp_lhs = (s32)r2; cmp_rhs = 128;
    if (cmp_lhs <= cmp_rhs) goto loc_08026AC0;
    stack[7] = r1; // [sp + 0x1C]
loc_08026AC0:
    r2 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08026AC8;
    stack[8] = r0; // [sp + 0x20]
loc_08026AC8:
    r0 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = 128;
    if (cmp_lhs <= cmp_rhs) goto loc_08026AD0;
    stack[8] = r1; // [sp + 0x20]
loc_08026AD0:
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08026AD2: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026AF0;
    r1 = 0x0804B230U /* &VTable_0804B230 */; // [0x08026B30]
    r3 = 0x0000071DU; // [0x08026B34]
    *(u32*)(r0) = (u32)r1;
    r1 = stack[7]; // [sp + 0x1C]
    r1 *= r3;
    r1 = ((u32)((s32)r1 >> 8));
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = stack[8]; // [sp + 0x20]
    r1 *= r3;
    r1 = ((u32)((s32)r1 >> 8));
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_08026AF0:
    r5 = r0;
    r1 = 0x12U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08026AF6
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08026AFE
    r0 = stack[10]; // [sp + 0x28]
    stack[9] = r6; // [sp + 0x24]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026B16;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08026B12: BL __call_via_r3
loc_08026B16:
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08026B26: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08026B2C..0x08026B30 (4 bytes, Thumb)
u32 sub_08026B2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002FE0U; // [0x08026B48]
    return r0; // BX lr
}

// ROM Address: 0x08026B32..0x08026B66 (52 bytes, Thumb)
u32 sub_08026B32(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r5 = (r3 << 28);
    r0 = r0;
    r4 = *(u32*)r2; r2 += 4;
    r6 = *(u32*)r2; r2 += 4;
    r7 = *(u32*)r2; r2 += 4;
    r4 = (r6 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 224;
    r0 = (r0 << 12);
    r7 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08026B66(r0, r1, r2, r3);
    r0 = 0x1CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08026B5A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08026B66(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08026B66..0x08026BBC (86 bytes, Thumb)
u32 sub_08026B66(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08026C8C]
    r6 = 0x0874CB00U; // [0x08026C90]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x80U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r6);
    r1 = 0x80U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08026B74
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08026B8C;
    r1 = 0x80U;
    r0 = *(u32*)(r6);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08026B80: BL 0x08011732
    r1 = 0x80U;
    r0 = *(u32*)(r6);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08026B88
loc_08026B8C:
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r4 + 0xC) = (u16)r0;
    r1 = 0x0804C048U /* &VTable_0804C048 */; // [0x08026C94]
    r2 = 0x0874CB00U; // [0x08026C90]
    *(u32*)(r4) = (u32)r1;
    *(u32*)(r4 + 0x18) = (u32)r7;
    r1 = 0x0U;
    *(u8*)(r4 + 0x11) = (u8)r1;
    *(u8*)(r4 + 0x12) = (u8)r1;
    r1 = (r5 << 3);
    r2 += 0x4U;
    r1 = r1 + r2;
    r2 = 0x06010000U; // [0x08026C98]
    *(u8*)(r4 + 0x10) = (u8)r5;
    r0 = (r0 << 5);
    r0 = r0 + r2;
    *(u32*)(r4 + 0x14) = (u32)r1;
    r1 = *(u32*)(r1 + 0x4);
    r2 = 0x80U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08026BB4: BL 0x08049138
    r0 = r4;
    return sub_08026B64(r0, r1, r2, r3);
}

// ROM Address: 0x08026C3C..0x08026D10 (212 bytes, Thumb)
u32 sub_08026C3C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x3U;
    r0 = 0x10U;
    *(u8*)(r1 + 0x12) = (u8)r0;
    r0 = *(u8*)(r1 + 0x11);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08026C60;
    *(u8*)(r1 + 0x11) = (u8)r2;
    r0 = *(u16*)(r1 + 0xC);
    r1 = *(u32*)(r1 + 0x14);
    r3 = 0x06010000U; // [0x08026C98]
    r1 = *(u32*)(r1 + 0x4);
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r2 = (r2 << 7);
    r1 = r1 + r2;
    r2 = 0x80U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08026C5C: BL 0x08049138
loc_08026C60:
    return r0;
    r2 = *(u32*)(r1);
    r3 = r2;
    r3 += 0x8U;
    *(u32*)(r1) = (u32)r3;
    r1 = *(u32*)(r0 + 0x14);
    r1 = *(u32*)(r1);
    *(u32*)(r2) = (u32)r1;
    r0 = *(u16*)(r0 + 0xC);
    r1 = *(u32*)(r2 + 0x4);
    r1 = (r1 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r1 = (r1 << 10);
    r0 |= r1;
    r1 = 0xC00U; // (3 << 10)
    r0 &= ~r1;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r4 = (r6 >> 1);
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r7 = r1;
    r6 = r3;
    r4 = r2;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = stack[6]; // [sp + 0x18]
    if (cmp_lhs != cmp_rhs) goto loc_08026CB4;
    r0 = 0x20U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08026CAC: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026CD8;
loc_08026CB4:
    r1 = 0x0804DA60U; // [0x08026DCC]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x1C) = (u32)r4;
    *(u32*)(r0 + 0x10) = (u32)r7;
    *(u16*)(r0 + 0xC) = (u16)r6;
    r1 = *(u16*)(r4 + 0x14);
    r1 = r1 + r5;
    *(u16*)(r0 + 0x14) = (u16)r1;
    r2 = *(u8*)(r4 + 0x16);
    r1 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08026CCE;
    r1 = 0x0U;
loc_08026CCE:
    *(u32*)(r0 + 0x18) = (u32)r1;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    r1 = *(u32*)(r4 + 0xC);
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08026CD8:
    return r0;
    r1 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08026CE4;
    r0 = 0x0U;
    return r0; // BX lr
loc_08026CE4:
    r1 = *(u32*)(r0 + 0x1C);
    r0 = *(u32*)(r0 + 0x10);
    r2 = 0x0000802CU; // [0x08026DD0]
    r0 = r0 + r2;
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08026D10(r0, r1, r2, r3);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08026D10(r0, r1, r2, r3);
    r2 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08026D10(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08026D10(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08026D10..0x08026D14 (4 bytes, Thumb)
u32 sub_08026D10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08026D14..0x08026D92 (126 bytes, Thumb)
u32 sub_08026D14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r2 = *(u32*)(r0 + 0x10);
    r4 = 0x0000802CU; // [0x08026DD0]
    r3 = *(u32*)(r0 + 0x1C);
    r2 = r2 + r4;
    r4 = *(u32*)(r3);
    r5 = *(u32*)(r2);
    r3 = *(u32*)(r3 + 0x4);
    r2 = *(u32*)(r2 + 0x4);
    r4 = r4 - r5;
    r2 = r3 - r2;
    stack[1] = r2; // [sp + 0x4]
    r3 = stack[1]; // [sp + 0x4]
    stack[0] = r4; // [sp + 0x0]
    stack[3] = r3; // [sp + 0xC]
    stack[2] = r4; // [sp + 0x8]
    r2 = *(u32*)(r0 + 0x1C);
    r3 = r4;
    r4 = 0xFE00FFFFU; // [0x08026DD4]
    r2 = *(u32*)(r2 + 0x10);
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 &= r4;
    r3 |= r2;
    r2 = stack[3]; // [sp + 0xC]
    r3 = (r3 >> 8);
    r2 = (r2 << 24);
    r2 = (r2 >> 24);
    r3 = (r3 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r0 = *(u16*)(r0 + 0x14);
    r2 = *(u32*)(r1 + 0x4);
    r2 = (r2 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r2 = (r2 << 10);
    r0 |= r2;
    r2 = 0xC00U; // (3 << 10)
    r0 |= r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_08026D96(r0, r1, r2, r3);
    r3 = *(u16*)(r0 + 0xC);
    r1 = ((u32)((s32)r2 >> 1));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) return sub_08026D92(r0, r1, r2, r3);
    r1 = (r2 << 31);
    r1 = (r1 >> 31);
    *(u32*)(r0 + 0x18) = (u32)r1;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08026D92..0x08026D96 (4 bytes, Thumb)
u32 sub_08026D92(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08026D96..0x08026DA4 (14 bytes, Thumb)
u32 sub_08026D96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) return sub_08026DA4(r0, r1, r2, r3);
    r1 = *(u16*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) return sub_08026D94(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08026DA4..0x08026DA8 (4 bytes, Thumb)
u32 sub_08026DA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy16_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x08026DA8..0x08026DFE (86 bytes, Thumb)
u32 Object_Destroy16(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804E148U /* &VTable_0804E148 */; // [0x08026DD8]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0874CF24U; // [0x08026DDC]
    r1 = *(u16*)(r4 + 0x14);
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08026DB8
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08026DE0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08026DCA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08026DC6: BL 0x0803D63C
loc_08026DCA:
    return r0;
    if (cmp_lhs >= cmp_rhs) return sub_08026E90(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u16*)(r5) = (u16)r4;
    r0 = r0;
    return sub_0802706C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r4 = (r6 >> 1);
    return sub_0802668C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r7 = r1;
    r6 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08026DFE(r0, r1, r2, r3);
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08026DF2: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08026DFE(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08026DFE..0x08026E6A (108 bytes, Thumb)
u32 sub_08026DFE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08026F78]
    r5 = 0x0874CF28U; // [0x08026F7C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x40U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r5);
    r1 = 0x40U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08026E0C
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08026E24;
    r1 = 0x40U;
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08026E18: BL 0x08011732
    r1 = 0x40U;
    r0 = *(u32*)(r5);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08026E20
loc_08026E24:
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    r1 = 0x0804D634U /* &VTable_0804D634 */; // [0x08026F80]
    *(u16*)(r4 + 0xC) = (u16)r0;
    *(u32*)(r4) = (u32)r1;
    r1 = *(u32*)(r7 + 0x4);
    r2 = *(u32*)(r7);
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x1C) = (u32)r2;
    *(u32*)(r4 + 0x10) = (u32)r6;
    r2 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r2;
    *(u32*)(r4 + 0x18) = (u32)r2;
    r2 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r2;
    *(u32*)(r4 + 0x4) = (u32)r1;
    r1 = 0x0874CF28U; // [0x08026F7C]
    r2 = 0x06010000U; // [0x08026F84]
    r1 += 0x4U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026E5A;
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08026E54: BL 0x08049138
    goto loc_08026E66;
loc_08026E5A:
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r2 = 0x40U;
    r1 += 0x80U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08026E62: BL 0x08049138
loc_08026E66:
    r0 = r4;
    return sub_08026DFC(r0, r1, r2, r3);
}

// ROM Address: 0x08026E6A..0x08026F04 (154 bytes, Thumb)
u32 sub_08026E6A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08026EA2;
    r1 = *(u32*)(r0 + 0x14);
    r1 += 0x1U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r1 = (r1 << 26);
    r1 = (r1 >> 29);
    cmp_lhs = (s32)r1; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_08026E84;
    r2 = 0x7U;
    r1 = r2 - r1;
loc_08026E84:
    r2 = *(u32*)(r0 + 0x18);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08026EA2;
    *(u32*)(r0 + 0x18) = (u32)r1;
    r0 = *(u16*)(r0 + 0xC);
    r2 = 0x06010000U; // [0x08026F84]
    r1 = (r1 << 6);
    r0 = (r0 << 5);
    r0 = r0 + r2;
    r2 = 0x0874CF28U; // [0x08026F7C]
    r2 += 0x4U;
    r1 = r1 + r2;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08026E9E: BL 0x08049138
loc_08026EA2:
    return r0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r2 = 0x2000U; // (1 << 13)
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x1C);
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r0 + 0x20);
    r2 = (r2 >> 8);
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r0 = *(u16*)(r0 + 0xC);
    r2 = *(u32*)(r1 + 0x4);
    r2 = (r2 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r2 = (r2 << 10);
    r0 |= r2;
    r2 = 0xC00U; // (3 << 10)
    r0 |= r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    r6 = r1;
    r5 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08026F04(r0, r1, r2, r3);
    r0 = 0x30U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08026EF6: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08026F04(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08026F04..0x08026F2A (38 bytes, Thumb)
u32 sub_08026F04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x1U;
    r0 = r4;
    r1 = sp;
    r0 = sub_08026DE4(r0, r1, r2, r3); // 0x08026F10
    r0 = 0x0804D594U /* &VTable_0804D594 */; // [0x08026F88]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r6;
    r0 = *(u32*)(r5);
    r1 = *(u32*)(r5 + 0x4);
    r0 -= 0x4U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r1 -= 0x4U;
    *(u32*)(r4 + 0x28) = (u32)r1;
    r0 = r4;
    return sub_08026F00(r0, r1, r2, r3);
}

// ROM Address: 0x08026F2A..0x08026F74 (74 bytes, Thumb)
u32 sub_08026F2A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x2C);
    r3 = 0x0000802CU; // [0x08026F8C]
    r1 = r1 + r3;
    r4 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x24);
    r2 = r0;
    r3 = r3 - r4;
    r4 = *(u32*)(r0 + 0x28);
    r1 = *(u32*)(r1 + 0x4);
    stack[0] = r3; // [sp + 0x0]
    r1 = r4 - r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = r3;
    r3 = stack[1]; // [sp + 0x4]
    r2 += 0x1CU;
    *(u32*)r2 = r1; r2 += 4;
    *(u32*)r2 = r3; r2 += 4;
    r2 = 0x0874D02CU; // [0x08026F90]
    r1 = *(u32*)(r0 + 0x1C);
    r3 = *(u32*)(r2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs < cmp_rhs) return sub_08026F74(r0, r1, r2, r3);
    r3 = *(u32*)(r2 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_08026F74(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x20);
    r1 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08026F74(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08026F74(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08026F74..0x08026F78 (4 bytes, Thumb)
u32 sub_08026F74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08026F6E(r0, r1, r2, r3);
}

// ROM Address: 0x08026F78..0x08026FA8 (48 bytes, Thumb)
u32 sub_08026F78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r3 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r4 = (r6 >> 1);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08026FEC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08026EB4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u16*)(r5) = (u16)r4;
    r0 = r0;
    if (cmp_lhs == cmp_rhs) return sub_08026FEC(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08026FA8(r0, r1, r2, r3);
    r0 = 0x00000C28U; // [0x080271AC]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08026F9C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08026FA8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08026FA8..0x08027020 (120 bytes, Thumb)
u32 sub_08026FA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080271B0]
    r6 = 0x400U; // (1 << 10)
    r5 = 0x0874D03CU; // [0x080271B4]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r6;
    r0 = *(u32*)(r5 + 0x4);
    r1 = r6;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08026FB8
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08026FD0;
    r1 = r6;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08026FC4: BL 0x08011732
    r1 = r6;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08026FCC
loc_08026FD0:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804D5E4U /* &VTable_0804D5E4 */; // [0x080271B8]
    r5 = 0xFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0xC10U; // (193 << 4)
    r2 = r4 + r0;
    r7 = 0x5000U; // (5 << 12)
    r5 = (r5 << 11);
    *(u32*)r2 = r5; r2 += 4;
    *(u32*)r2 = r7; r2 += 4;
    r0 += 0x8U;
    r1 = r4 + r0;
    r5 = 0x0U;
    *(u32*)(r1) = (u32)r5;
    r7 = r4;
    r7 += 0x10U;
    *(u32*)(r1 + 0x4) = (u32)r5;
    r0 = 0x0874D03CU; // [0x080271B4]
    r1 = r7;
    r0 += 0x8U;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x08026FFA
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x080271BC]
    r2 = r6;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802700A: BL 0x08049138
    r0 = 0x10U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = 0xC00U; // (3 << 10)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x24) = (u32)r5;
    *(u32*)(r0 + 0x20) = (u32)r5;
    r0 = r4;
    return sub_08026FA6(r0, r1, r2, r3);
}

// ROM Address: 0x0802706C..0x08027078 (12 bytes, Thumb)
u32 sub_0802706C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r3 + r0;
    r1 = r1 + r5;
    r1 += 0x10U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08027072: BL 0x08049138
    return sub_08027096(r0, r1, r2, r3);
}

// ROM Address: 0x08027078..0x080271AC (308 bytes, Thumb)
u32 sub_08027078(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08027096;
    r1 -= 0x1U;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r3 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08027096;
    r3 = *(u16*)(r5 + 0xC);
    r1 = ((u32)((s32)r1 >> 1));
    r1 = (r1 << 10);
    r3 = (r3 << 5);
    r0 = r3 + r0;
    r1 = r1 + r5;
    r1 += 0x10U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08027092: BL 0x08049138
loc_08027096:
    r0 = *(u32*)(r7);
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 26);
    r1 = (r0 >> 31);
    r0 = 0x00000C18U; // [0x080271C0]
    r0 = r5 + r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080270AC;
    r1 = *(u32*)(r0);
    r1 -= 0x80U;
    *(u32*)(r0) = (u32)r1;
loc_080270AC:
    r1 = *(u32*)(r7);
    r3 = r7;
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 27);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080270BE;
    r1 = *(u32*)(r0);
    r1 += 0x80U;
    *(u32*)(r0) = (u32)r1;
loc_080270BE:
    r1 = *(u32*)(r3);
    r2 = 0x00000C1CU; // [0x080271C4]
    r1 = *(u16*)(r1 + 0x2);
    r2 = r5 + r2;
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080270D4;
    r1 = *(u32*)(r2);
    r1 -= 0x80U;
    *(u32*)(r2) = (u32)r1;
loc_080270D4:
    r1 = *(u32*)(r3);
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 24);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080270E4;
    r1 = *(u32*)(r2);
    r1 += 0x80U;
    *(u32*)(r2) = (u32)r1;
loc_080270E4:
    r1 = 0xC10U; // (193 << 4)
    r1 = r5 + r1;
    r3 = *(u32*)(r1);
    r7 = *(u32*)(r0);
    r3 = r3 + r7;
    *(u32*)(r1) = (u32)r3;
    r7 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x4);
    r3 = r7 + r3;
    *(u32*)(r1 + 0x4) = (u32)r3;
    r7 = *(u32*)(r4 + 0x18);
    r3 = (r7 << 1);
    r3 = r3 + r7;
    r7 = ((u32)((s32)r3 >> 31));
    r7 = (r7 >> 30);
    r3 = r7 + r3;
    r3 = ((u32)((s32)r3 >> 2));
    *(u32*)(r4 + 0x18) = (u32)r3;
    r7 = *(u32*)(r4 + 0x1C);
    r3 = (r7 << 1);
    r3 = r3 + r7;
    r7 = ((u32)((s32)r3 >> 31));
    r7 = (r7 >> 30);
    r3 = r7 + r3;
    r3 = ((u32)((s32)r3 >> 2));
    *(u32*)(r4 + 0x1C) = (u32)r3;
    r3 = 0x1U;
    r4 = *(u32*)(r1);
    r3 = (r3 << 12);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08027128;
    *(u32*)(r1) = (u32)r3;
    *(u32*)(r0) = (u32)r6;
loc_08027128:
    r4 = 0x7U;
    r7 = *(u32*)(r1);
    r4 = (r4 << 13);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r4;
    if (cmp_lhs <= cmp_rhs) goto loc_08027136;
    *(u32*)(r1) = (u32)r4;
    *(u32*)(r0) = (u32)r6;
loc_08027136:
    r0 = 0x00000C14U; // [0x080271C8]
    r0 = r5 + r0;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08027144;
    *(u32*)(r0) = (u32)r3;
    *(u32*)(r2) = (u32)r6;
loc_08027144:
    r1 = 0x9U;
    r3 = *(u32*)(r0);
    r1 = (r1 << 12);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08027152;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r2) = (u32)r6;
loc_08027152:
    return r0;
    r2 = r1;
    r1 = *(u32*)(r1);
    r3 = r1;
    r3 += 0x8U;
    *(u32*)(r2) = (u32)r3;
    r3 = 0xC1U;
    r2 = 0x80002000U; // [0x080271CC]
    r3 = (r3 << 4);
    r3 = r0 + r3;
    *(u32*)(r1) = (u32)r2;
    r3 = *(u32*)(r3);
    r3 = ((u32)((s32)r3 >> 8));
    r3 -= 0x10U;
    r3 = (r3 << 23);
    r3 = (r3 >> 7);
    r2 |= r3;
    r3 = 0x00000C14U; // [0x080271C8]
    *(u32*)(r1) = (u32)r2;
    r3 = r0 + r3;
    r3 = *(u32*)(r3);
    r2 = (r2 >> 8);
    r3 = ((u32)((s32)r3 >> 8));
    r3 += 0xF0U;
    r3 = (r3 << 24);
    r3 = (r3 >> 24);
    r2 = (r2 << 8);
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r0 = *(u16*)(r0 + 0xC);
    r2 = *(u32*)(r1 + 0x4);
    r2 = (r2 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r2 = (r2 << 10);
    r0 |= r2;
    r2 = 0xC00U; // (3 << 10)
    r0 &= ~r2;
    r2 = 0x400U; // (1 << 10)
    r0 = r0 + r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080271AC..0x080271AE (2 bytes, Thumb)
u32 sub_080271AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r5 >> 16);
    return r0;
}

// ROM Address: 0x080271AE..0x08027234 (134 bytes, Thumb)
u32 sub_080271AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    if (cmp_lhs == cmp_rhs) goto loc_08027230;
    r4 = (r6 >> 1);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08027184(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r0 = (r3 >> 16);
    r0 = r0;
    r4 = (r3 >> 16);
    r0 = r0;
    r4 = (r2 >> 16);
    r0 = r0;
    r0 = 0x0U;
    *(u16*)(r0) = (u16)r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080271E8;
    r0 = 0x24U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080271DC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_080271E8;
    r0 = r4;
    return r0;
loc_080271E8:
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802729C]
    r6 = 0x0874D248U; // [0x080272A0]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x40U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r6);
    r1 = 0x40U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080271F6
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0802720E;
    r1 = 0x40U;
    r0 = *(u32*)(r6);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08027202: BL 0x08011732
    r1 = 0x40U;
    r0 = *(u32*)(r6);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802720A
loc_0802720E:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804D60CU /* &VTable_0804D60C */; // [0x080272A4]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    *(u8*)(r4 + 0x1C) = (u8)r5;
    r0 = 0x1U;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = 0x0874D248U; // [0x080272A0]
    r0 += 0x94U;
    cmp_lhs = (s32)r5; cmp_rhs = 2;
    if (cmp_lhs >= cmp_rhs) goto loc_08027228;
    r0 -= 0x80U;
loc_08027228:
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x0U;
    r0 = ~r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_08027230:
    r0 = r4;
    return r0;
}

// ROM Address: 0x08027234..0x0802724A (22 bytes, Thumb)
u32 sub_08027234(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r0 = *(u32*)(r0 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802724A(r0, r1, r2, r3);
    r0 = *(u32*)(r1 + 0x14);
    r0 += 0x1U;
    *(u32*)(r1 + 0x14) = (u32)r0;
    r0 = (r0 << 27);
    r2 = (r0 >> 31);
    return sub_0802724E(r0, r1, r2, r3);
}

// ROM Address: 0x0802724A..0x080272E6 (156 bytes, Thumb)
u32 sub_0802724A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    *(u32*)(r1 + 0x14) = (u32)r2;
    r0 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_0802726A;
    *(u32*)(r1 + 0x18) = (u32)r2;
    r0 = *(u16*)(r1 + 0xC);
    r3 = 0x06010000U; // [0x080272A8]
    r1 = *(u32*)(r1 + 0x10);
    r0 = (r0 << 5);
    r0 = r0 + r3;
    r2 = (r2 << 6);
    r1 = r1 + r2;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08027266: BL 0x08049138
loc_0802726A:
    return r0;
    r2 = *(u32*)(r1);
    r3 = r2;
    r3 += 0x8U;
    *(u32*)(r1) = (u32)r3;
    r1 = *(u8*)(r0 + 0x1C);
    r3 = 0x0874D248U; // [0x080272A0]
    r3 += 0x4U;
    r1 = (r1 << 2);
    r1 = *(u32*)(r3 + r1);
    *(u32*)(r2) = (u32)r1;
    r0 = *(u16*)(r0 + 0xC);
    r1 = *(u32*)(r2 + 0x4);
    r1 = (r1 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r1 = (r1 << 10);
    r0 |= r1;
    r1 = 0xC00U; // (3 << 10)
    r0 &= ~r1;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r0 = 0x0U;
    return r0; // BX lr
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08027334(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080272C0;
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = (r0 << 24);
    r2 = *(u8*)(r0 + 0x11);
    r1 = *(u32*)(r0 + 0x50);
    r3 = 0x4U;
    r2 = (r2 << 4);
    r1 = r1 + r2;
    r2 = *(u8*)(r0 + 0x10);
    r4 = 0x38U;
    r2 = (r2 << 2);
    r1 = r1 + r2;
loc_080272C0:
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r0 + 0x54) = (u32)r1;
    r2 = *(u8*)(r1 + 0x6);
    r5 = (u32)(*(s8*)(r1 + r3));
    r2 = (r2 >> 1);
    r2 = r4 - r2;
    r2 = r2 - r5;
    *(u32*)(r0 + 0x6C) = (u32)r2;
    r2 = *(u8*)(r1 + 0x7);
    cmp_lhs = (s32)r2; cmp_rhs = 32;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_080272E6(r0, r1, r2, r3);
    r3 = 0x5U;
    r1 = (u32)(*(s8*)(r1 + r3));
    r2 = (r2 >> 1);
    r2 = r4 - r2;
    r1 = r2 - r1;
    *(u32*)(r0 + 0x70) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x080272E6..0x080272EC (6 bytes, Thumb)
u32 sub_080272E6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x40U;
    *(u32*)(r0 + 0x70) = (u32)r1;
    return sub_080272E2(r0, r1, r2, r3);
}

// ROM Address: 0x080272EC..0x08027306 (26 bytes, Thumb)
u32 sub_080272EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08027306(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x99U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080272FA: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08027306(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08027306..0x0802732C (38 bytes, Thumb)
u32 sub_08027306(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08027308: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r2 = 0x03001B0CU; // [0x08027380]
    r0 = sub_0800EB60(r0, r1, r2, r3); // 0x08027312
    r0 = 0x0804CE7CU /* &VTable_0804CE7C */; // [0x08027384]
    r1 = 0xFFU;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r1 += 0x95U;
    *(u32*)(r1 + r4) = r0;
    r0 = r4;
    r0 = sub_080272AC(r0, r1, r2, r3); // 0x08027324
    r0 = r4;
    return sub_08027304(r0, r1, r2, r3);
}

// ROM Address: 0x0802732C..0x0802736A (62 bytes, Thumb)
u32 sub_0802732C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0800EF38(r0, r1, r2, r3); // 0x0802732E
    r0 = 0x1U;
    return r0;
    r4 = r0;
    r0 = sub_0800EF08(r0, r1, r2, r3); // 0x0802733A
    r0 = r4;
    r0 += 0x180U;
    r1 = *(u32*)(r0 + 0x14);
    r1 += 0x1U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    r0 = (r1 << 23);
    r1 = 0x0874D35CU; // [0x08027388]
    r0 = (r0 >> 30);
    r0 = *(u8*)(r1 + r0);
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = r4;
    r0 = sub_080272AC(r0, r1, r2, r3); // 0x08027356
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802736A(r0, r1, r2, r3);
    r1 = 0x03001B0CU; // [0x08027380]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08027364
    return r0;
}

// ROM Address: 0x0802736A..0x0802737A (16 bytes, Thumb)
u32 sub_0802736A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x58);
    r2 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08027368(r0, r1, r2, r3);
    r1 = *(u32*)(r1 + 0x58);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08027368(r0, r1, r2, r3);
    r1 = 0x03001B58U; // [0x0802738C]
    return r0;
}

// ROM Address: 0x08027380..0x080273AA (42 bytes, Thumb)
u32 sub_08027380(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1 - r4;
    r0 = (r0 << 12);
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r4 = *(u32*)r6; r6 += 4;
    r5 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08027444(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    r0 = r3 - r5;
    r0 = (r0 << 12);
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080273AA(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x91U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802739E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080273AA(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080273AA..0x08027424 (122 bytes, Thumb)
u32 sub_080273AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5);
    r1 = 0x0874D380U; // [0x08027474]
    r0 = (r0 << 4);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080273B4: BL 0x08000158
    r1 = r0;
    r0 = r4;
    r2 = 0x03001B0CU; // [0x08027478]
    r0 = sub_0800EB60(r0, r1, r2, r3); // 0x080273BE
    r0 = 0x0804CEB8U /* &VTable_0804CEB8 */; // [0x0802747C]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x180U;
    *(u32*)(r0 + 0xC) = (u32)r5;
    r1 = *(u32*)(r5 + 0x8);
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r4 + 0x10) = (u8)r1;
    r3 = *(u8*)(r4 + 0x11);
    r2 = *(u32*)(r4 + 0x50);
    r1 = (r1 << 2);
    r3 = (r3 << 4);
    r2 = r2 + r3;
    r1 = r2 + r1;
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r4 + 0x54) = (u32)r1;
    r2 = *(u32*)(r5 + 0xC);
    r3 = *(u32*)(r5 + 0x10);
    *(u32*)(r4 + 0x6C) = (u32)r2;
    *(u32*)(r4 + 0x70) = (u32)r3;
    r3 = 0x4U;
    r7 = (u32)(*(s8*)(r1 + r3));
    r3 = 0x5U;
    r1 = (u32)(*(s8*)(r1 + r3));
    r6 = *(u32*)(r5 + 0xC);
    r2 = r5;
    r5 = *(u32*)(r5 + 0x10);
    r2 += 0x14U;
    r1 = r5 + r1;
    *(u32*)(r2 + 0x4) = (u32)r1;
    r6 = r6 + r7;
    *(u32*)(r2) = (u32)r6;
    r1 = *(u32*)(r0 + 0xC);
    r3 = *(u32*)(r4 + 0x54);
    r1 += 0x14U;
    r2 = *(u8*)(r3 + 0x6);
    r5 = *(u32*)(r1);
    r3 = *(u8*)(r3 + 0x7);
    r2 = r5 + r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r3;
    *(u32*)(r1 + 0xC) = (u32)r2;
    r0 = *(u32*)(r0 + 0xC);
    *(u32*)(r0 + 0x24) = (u32)r4;
    r0 = r4;
    return sub_080273A8(r0, r1, r2, r3);
}

// ROM Address: 0x08027424..0x080274D0 (172 bytes, Thumb)
u32 sub_08027424(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802742A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802743A;
    r1 = 0x0804AE38U /* &VTable_0804AE38 */; // [0x08027480]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u8*)(r0 + 0x4) = (u8)r1;
loc_0802743A:
    r1 = r0;
    r0 = r4;
    r0 = sub_0800ED80(r0, r1, r2, r3); // 0x0802743E
    r0 = 0x28U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    return r0;
    r1 = 0x38U;
    *(u8*)(r0 + 0x8) = (u8)r1;
    r0 = sub_0800EDA6(r0, r1, r2, r3); // 0x0802744E
    return r0;
    r0 += 0x180U;
    r0 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0);
    return r0; // BX lr
    r0 += 0x180U;
    r0 = *(u32*)(r0 + 0xC);
    r0 = *(u32*)(r0 + 0x4);
    return r0; // BX lr
    r1 = 0x03001B0CU; // [0x08027478]
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802746C
    return r0;
    r0 = r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08027378(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    r4 = r1 - r4;
    r0 = (r0 << 12);
    r3 = *(u32*)r6; r6 += 4;
    r4 = *(u32*)r6; r6 += 4;
    r5 = *(u32*)r6; r6 += 4;
    r7 = *(u32*)r6; r6 += 4;
    r4 = (r0 >> 32);
    r6 = 0xE0; // sp + 0xE0
    r4 = (r0 >> 32);
    r2 = r0;
    r0 = r1;
    r1 = *(u8*)(r2 + 0x4);
    r1 += 0x1U;
    *(u8*)(r2 + 0x4) = (u8)r1;
    r1 = (r1 << 27);
    r1 = (r1 >> 29);
    r2 = 0x0874D360U; // [0x080274B0]
    r1 = (r1 << 2);
    r1 = *(u32*)(r2 + r1);
    r2 = *(u32*)(r0 + 0x38);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080274A4;
    r0 = sub_0800EECC(r0, r1, r2, r3); // 0x080274A0: BL 0x0800EECC
loc_080274A4:
    return r0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080274A8: BL 0x0803D63C
    return r0;
    r0 = r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08027574(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080274D0(r0, r1, r2, r3);
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080274C4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080274D0(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080274D0..0x08027516 (70 bytes, Thumb)
u32 sub_080274D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r7;
    r1 = 0x80U;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x080274D6
    r0 = 0x08049F0CU /* &VTable_08049F0C */; // [0x08027694]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r0 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = (r6 << 1);
    r0 = r0 + r6;
    r1 = 0x0874E968U; // [0x08027698]
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r2 = 0x0874E208U; // [0x0802769C]
    r0 = (r6 << 3);
    r1 = *(u32*)(r2 + r0);
    r0 = r0 + r2;
    *(u32*)(r4 + 0x40) = (u32)r1;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802750E
    r0 = r4;
    return sub_080274CE(r0, r1, r2, r3);
}

// ROM Address: 0x08027516..0x080275D6 (192 bytes, Thumb)
u32 sub_08027516(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x20);
    r1 = ((u32)((s32)r1 >> 8));
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0 + 0x24);
    r4 = 0x0874E208U; // [0x0802769C]
    r1 = ((u32)((s32)r1 >> 8));
    stack[5] = r1; // [sp + 0x14]
    r1 = r0;
    r4 -= 0x8U;
    r0 = *(u32*)(r4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0802752E
    r0 = *(u32*)(r4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08027534
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0802755E;
    r2 = 0x38U;
    r0 = (r1 << 3);
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x4U;
    r0 = 0x0U;
    r1 = 0x10; // sp + 0x10
    r2 = 0x08712FDCU; // [0x080276A0]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08027552
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0802755A: BL 0x0801191A
loc_0802755E:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x48);
    r7 = r1;
    r0 += 0x1U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r1 = (r0 << 30);
    if (cmp_lhs != cmp_rhs) goto loc_0802758C;
    r0 = (r0 << 28);
    r0 = (r0 >> 30);
    if (cmp_lhs == cmp_rhs) return sub_080275D6(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080275DE(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_080275E6(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_0802758C;
    r0 = *(u32*)(r4 + 0x18);
    r0 -= 0x30U;
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_0802758C:
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r4 + 0x40);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = *(u32*)(r4 + 0x44);
    r1 = *(u32*)(r4 + 0x24);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0802759E
    r6 = 0x0874E208U; // [0x0802769C]
    r6 -= 0x8U;
    r0 = *(u32*)(r6 + 0x4);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080275CA;
    r1 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080275CA;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080275CA;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_080275EE(r0, r1, r2, r3);
loc_080275CA:
    r1 = r4;
    r0 = *(u32*)(r6);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080275CE
    return r0;
}

// ROM Address: 0x080275D6..0x0802764E (120 bytes, Thumb)
u32 sub_080275D6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x18);
    r0 -= 0x30U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    return sub_0802758C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x18);
    r0 += 0x30U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    return sub_0802758C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x18);
    r0 += 0x30U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    return sub_0802758C(r0, r1, r2, r3);
    r0 = r4;
    r0 += 0x28U;
    r1 = *(u32*)(r6 + 0x4);
    r5 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x080275FA
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802760A;
    r0 = r4;
    r0 = sub_08027516(r0, r1, r2, r3); // 0x08027604: BL 0x08027516
    return sub_080275D2(r0, r1, r2, r3);
loc_0802760A:
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080275D2(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080275D2(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r7 = sp;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8090U; // [0x080276A4]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r0 = 0x4; // sp + 0x4
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    stack[12] = r4; // [sp + 0x30]
    r2 = r7;
    r1 = 0x0U;
    r0 = *(u32*)(r6);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0802763E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080275D2(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_08027516(r0, r1, r2, r3); // 0x08027648: BL 0x08027516
    return sub_080275D2(r0, r1, r2, r3);
}

// ROM Address: 0x0802764E..0x0802765E (16 bytes, Thumb)
u32 sub_0802764E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802768C(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0802765E(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0802765E..0x08027692 (52 bytes, Thumb)
u32 sub_0802765E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r2 + 4;
    r2 = *(u32*)(r2 + 0x4);
    r3 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08027688;
    r2 = *(u32*)(r0 + 0x28);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08027688;
    r2 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08027688;
    r2 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08027688;
    r0 = sub_08027516(r0, r1, r2, r3); // 0x08027680: BL 0x08027516
    r0 = 0x1U;
    return sub_0802765C(r0, r1, r2, r3);
loc_08027688:
    r0 = 0x0U;
    return sub_0802765C(r0, r1, r2, r3);
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x0802768C
    return sub_0802765C(r0, r1, r2, r3);
}

// ROM Address: 0x080276A8..0x080276C4 (28 bytes, Thumb)
u32 sub_080276A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080276C4(r0, r1, r2, r3);
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080276B8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080276C4(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080276C4..0x0802770C (72 bytes, Thumb)
u32 sub_080276C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0x1U;
    r2 = r7;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x080276CC
    r0 = 0x08049FC0U /* &VTable_08049FC0 */; // [0x08027928]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r0 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = (r6 << 1);
    r0 = r0 + r6;
    r1 = 0x0874E614U; // [0x0802792C]
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r2 = 0x0874E234U; // [0x08027930]
    r0 = (r6 << 3);
    r1 = *(u32*)(r2 + r0);
    r0 = r0 + r2;
    *(u32*)(r4 + 0x40) = (u32)r1;
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08027704
    r0 = r4;
    return sub_080276C2(r0, r1, r2, r3);
}

// ROM Address: 0x0802770C..0x08027860 (340 bytes, Thumb)
u32 sub_0802770C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x20);
    r1 = ((u32)((s32)r1 >> 8));
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r0 + 0x24);
    r4 = 0x0874E234U; // [0x08027930]
    r1 = ((u32)((s32)r1 >> 8));
    stack[4] = r1; // [sp + 0x10]
    r1 = r0;
    r4 -= 0xCU;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08027724
    r1 = 0x45U;
    r2 = 0x083192A8U; // [0x08027934]
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r5 = 0x000005C4U; // [0x08027938]
    r0 = *(u32*)(r4);
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0802773A
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x08027740
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0802776A;
    r2 = 0x38U;
    r0 = (r1 << 3);
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x4U;
    r0 = 0x0U;
    r1 = 0xC; // sp + 0xC
    r2 = 0x08712FDCU; // [0x0802793C]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0802775E
    r1 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08027766: BL 0x0801191A
loc_0802776A:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x48);
    r0 += 0x1U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r6 = r4;
    r6 += 0x40U;
    r0 = (r0 << 30);
    r0 = (r0 >> 30);
    r5 = r6 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08027816;
    r0 = 0x0874E234U; // [0x08027930]
    r0 -= 0xCU;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0802778E
    cmp_lhs = (s32)r0; cmp_rhs = 64;
    if (cmp_lhs < cmp_rhs) goto loc_08027816;
    r1 = *(u32*)(r6);
    r2 = *(u32*)(r5);
    r1 = (r1 << 11);
    r2 = (r2 << 11);
    r2 = ((u32)((s32)r2 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    r0 = r4;
    r0 += 0x20U;
    stack[5] = r1; // [sp + 0x14]
    stack[7] = r1; // [sp + 0x1C]
    stack[6] = r2; // [sp + 0x18]
    stack[8] = r2; // [sp + 0x20]
    r1 = *(u32*)(r0);
    r2 = stack[7]; // [sp + 0x1C]
    r3 = *(u32*)(r0 + 0x4);
    r2 = r1 - r2;
    r7 = stack[8]; // [sp + 0x20]
    stack[5] = r2; // [sp + 0x14]
    stack[9] = r2; // [sp + 0x24]
    r3 = r3 - r7;
    r2 = ((u32)((s32)r2 >> 8));
    stack[11] = r2; // [sp + 0x2C]
    stack[6] = r3; // [sp + 0x18]
    stack[10] = r3; // [sp + 0x28]
    r2 = *(u32*)(r6);
    r7 = *(u32*)(r5);
    r2 = (r2 << 11);
    r3 = (r7 << 11);
    r3 = ((u32)((s32)r3 >> 8));
    r2 = ((u32)((s32)r2 >> 8));
    stack[5] = r2; // [sp + 0x14]
    stack[7] = r2; // [sp + 0x1C]
    stack[6] = r3; // [sp + 0x18]
    stack[8] = r3; // [sp + 0x20]
    r1 = r0 + 4;
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r0 = r0 - r2;
    r1 = r1 - r3;
    stack[5] = r0; // [sp + 0x14]
    stack[9] = r0; // [sp + 0x24]
    r0 = ((u32)((s32)r1 >> 8));
    stack[10] = r1; // [sp + 0x28]
    r2 = 0x38U;
    stack[2] = r2; // [sp + 0x8]
    stack[12] = r0; // [sp + 0x30]
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x40U;
    r0 = 0x00002AAAU; // [0x08027940]
    r2 = 0x0874E614U; // [0x0802792C]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x3U;
    stack[0] = r0; // [sp + 0x0]
    r2 += 0x30U;
    r0 = 0x0U;
    r1 = 0x2C; // sp + 0x2C
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x08027806
    r1 = r0;
    r0 = 0x0874E234U; // [0x08027930]
    r0 -= 0xCU;
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08027812: BL 0x0801191A
loc_08027816:
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r6);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    r1 = *(u32*)(r5);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08027828
    r6 = 0x0874E234U; // [0x08027930]
    r6 -= 0xCU;
    r0 = *(u32*)(r6 + 0x8);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08027854;
    r1 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08027854;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_08027854;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_08027860(r0, r1, r2, r3);
loc_08027854:
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08027858
    return r0;
}

// ROM Address: 0x08027860..0x080278DC (124 bytes, Thumb)
u32 sub_08027860(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 += 0x28U;
    r1 = *(u32*)(r6 + 0x8);
    r5 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0802786C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0802787C;
    r0 = r4;
    r0 = sub_0802770C(r0, r1, r2, r3); // 0x08027876: BL 0x0802770C
    return sub_0802785C(r0, r1, r2, r3);
loc_0802787C:
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802785C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802785C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r7 = sp;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8090U; // [0x08027944]
    stack[7] = r0; // [sp + 0x1C]
    r0 = 0x400U; // (1 << 10)
    stack[6] = r0; // [sp + 0x18]
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r0 = 0x4; // sp + 0x4
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r5 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r5;
    stack[12] = r4; // [sp + 0x30]
    r2 = r7;
    r1 = 0x0U;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x080278B2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0802785C(r0, r1, r2, r3);
    r6 = *(u32*)(r6);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080278BE
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08027934]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08027938]
    r3 = r5;
    r2 = 0x40U;
    r0 = r6 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x080278D6
    r0 = r4;
    return r0;
}

// ROM Address: 0x080278E2..0x080278F2 (16 bytes, Thumb)
u32 sub_080278E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08027920(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_080278F2(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080278F2..0x08027926 (52 bytes, Thumb)
u32 sub_080278F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r2 + 4;
    r2 = *(u32*)(r2 + 0x4);
    r3 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802791C;
    r2 = *(u32*)(r0 + 0x28);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802791C;
    r2 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0802791C;
    r2 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0802791C;
    r0 = sub_0802770C(r0, r1, r2, r3); // 0x08027914: BL 0x0802770C
    r0 = 0x1U;
    return sub_080278F0(r0, r1, r2, r3);
loc_0802791C:
    r0 = 0x0U;
    return sub_080278F0(r0, r1, r2, r3);
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x08027920
    return sub_080278F0(r0, r1, r2, r3);
}

// ROM Address: 0x08027932..0x0802798E (92 bytes, Thumb)
u32 sub_08027932(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 220;
    r1 = (r6 >> 1);
    cmp_lhs = (s32)r2; cmp_rhs = 170;
    r0 = r0;
    *(u16*)(r2 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r7 = r0;
    r5 = r1;
    r0 = 0x95U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x08027950: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_08027960;
    r0 = 0x92U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802795A: BL 0x08000158
    r7 = r0;
loc_08027960:
    r4 = 0x0U;
    r1 = 0x0874D380U; // [0x080279D8]
    r0 = (r4 << 4);
    r6 = r0 + r1;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802796A: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) return sub_08027996(r0, r1, r2, r3);
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    r0 = *(u32*)(r6 + 0xC);
    if (cmp_lhs == cmp_rhs) return sub_0802798E(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) return sub_08027996(r0, r1, r2, r3);
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r6 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x080279DC]
    r0 = (r0 << 2);
    r0 = r0 + r6;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) return sub_08027996(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802798E..0x080279D6 (72 bytes, Thumb)
u32 sub_0802798E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08027996;
    r0 = r4;
    return sub_0802798C(r0, r1, r2, r3);
loc_08027996:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 232;
    if (cmp_lhs < cmp_rhs) return sub_08027962(r0, r1, r2, r3);
    r6 = 0x08711274U /* &g_EnemyStatTable[0] */; // [0x080279DC]
    r4 = 0x0U;
loc_080279A0:
    r1 = 0x0874D380U; // [0x080279D8]
    r0 = (r4 << 4);
    r0 = r0 + r1;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080279BC;
    r1 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_080279CA;
    r3 = (r1 << 3);
    r1 = r3 - r1;
    r1 = (r1 << 2);
    r1 = r1 + r6;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_080279CA;
loc_080279BC:
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x080279BE: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_080279CA;
    r0 = r4;
    return sub_0802798C(r0, r1, r2, r3);
loc_080279CA:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 232;
    if (cmp_lhs < cmp_rhs) goto loc_080279A0;
    r0 = 0x0U;
    r0 = ~r0;
    return sub_0802798C(r0, r1, r2, r3);
}

// ROM Address: 0x080279E0..0x080279F8 (24 bytes, Thumb)
u32 sub_080279E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080279F8(r0, r1, r2, r3);
    r0 = 0x20U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080279EC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080279F8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080279F8..0x08027A74 (124 bytes, Thumb)
u32 sub_080279F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08027B38]
    r6 = 0x0874E9F8U; // [0x08027B3C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x40U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r6);
    r1 = 0x40U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08027A06
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08027A1E;
    r1 = 0x40U;
    r0 = *(u32*)(r6);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08027A12: BL 0x08011732
    r1 = 0x40U;
    r0 = *(u32*)(r6);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08027A1A
loc_08027A1E:
    r7 = (r0 << 16);
    r7 = (r7 >> 16);
    r0 = 0x0804D8A0U /* &VTable_0804D8A0 */; // [0x08027B40]
    *(u16*)(r4 + 0xC) = (u16)r7;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5);
    r0 -= 0x8U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 -= 0x8U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u32*)(r6 + 0x4);
    r1 = *(u32*)(r5);
    r6 = r0;
    r0 = *(u32*)(r5 + 0x8);
    r6 += 0x94U;
    r0 = r0 - r1;
    r1 = (r0 << 22);
    r0 = *(u32*)(r6);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08027A44: BL 0x08046E58
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = *(u32*)(r5 + 0xC);
    r1 = *(u32*)(r5 + 0x4);
    r0 = r0 - r1;
    r1 = (r0 << 22);
    r0 = *(u32*)(r6 + 0x4);
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08027A54: BL 0x08046E58
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r1 = 0x06010000U; // [0x08027B44]
    r0 = (r7 << 5);
    r0 = r0 + r1;
    r1 = 0x0874E9F8U; // [0x08027B3C]
    r2 = 0x40U;
    r1 += 0x8U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08027A6C: BL 0x08049138
    r0 = r4;
    return sub_080279F6(r0, r1, r2, r3);
}

// ROM Address: 0x08027A74..0x08027A88 (20 bytes, Thumb)
u32 sub_08027A74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0874E9F8U; // [0x08027B3C]
    r5 = *(u32*)(r2 + 0x4);
    r2 = 0x03001C34U; // [0x08027B48]
    r4 = *(u32*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08027A88(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08027A88..0x08027B18 (144 bytes, Thumb)
u32 sub_08027A88(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r1);
    r3 = r2;
    r3 += 0x8U;
    *(u32*)(r1) = (u32)r3;
    r3 = *(u32*)(r1 + 0x4);
    r6 = r3;
    r6 += 0x20U;
    *(u32*)(r1 + 0x4) = (u32)r6;
    r6 = *(u32*)(r1 + 0x8);
    r7 = r6 + 1;
    *(u32*)(r1 + 0x8) = (u32)r7;
    r1 = 0x2300U; // (35 << 8)
    *(u32*)(r2) = (u32)r1;
    r1 = 0xFFU;
    r1 += 0xA1U;
    r1 = *(u32*)(r1 + r4);
    r7 = *(u32*)(r0 + 0x18);
    r1 = ((u32)((s32)r1 >> 8));
    r1 *= r7;
    r7 = *(u32*)(r0 + 0x10);
    r1 = ((u32)((s32)r1 >> 22));
    r7 = r1 + r7;
    r1 = 0x23U;
    r7 = (r7 << 23);
    r7 = (r7 >> 7);
    r1 = (r1 << 8);
    r1 |= r7;
    *(u32*)(r2) = (u32)r1;
    r4 += 0x1A4U;
    r4 = *(u32*)(r4);
    r7 = *(u32*)(r0 + 0x1C);
    r4 = ((u32)((s32)r4 >> 8));
    r4 *= r7;
    r7 = *(u32*)(r0 + 0x14);
    r4 = ((u32)((s32)r4 >> 22));
    r4 = r4 + r7;
    r4 = (r4 << 24);
    r1 = (r1 >> 8);
    r1 = (r1 << 8);
    r4 = (r4 >> 24);
    r1 |= r4;
    r4 = 0x3E000000U; // (31 << 25)
    r1 &= ~r4;
    r4 = (r6 << 27);
    r4 = (r4 >> 2);
    r1 |= r4;
    *(u32*)(r2) = (u32)r1;
    r0 = *(u16*)(r0 + 0xC);
    r1 = *(u32*)(r2 + 0x4);
    r1 = (r1 >> 10);
    r0 = (r0 << 22);
    r0 = (r0 >> 22);
    r1 = (r1 << 10);
    r0 |= r1;
    *(u32*)(r2 + 0x4) = (u32)r0;
    r1 = *(u32*)(r5 + 0x44);
    r1 = ((u32)((s32)r1 >> 2));
    *(u16*)(r3 + 0x6) = (u16)r1;
    r1 = *(u32*)(r5 + 0x48);
    r1 = ((u32)((s32)r1 >> 2));
    *(u16*)(r3 + 0x16) = (u16)r1;
    r1 = *(u32*)(r5 + 0x4C);
    r1 = ((u32)((s32)r1 >> 2));
    *(u16*)(r3 + 0xE) = (u16)r1;
    r0 = *(u32*)(r5 + 0x50);
    r0 = ((u32)((s32)r0 >> 2));
    *(u16*)(r3 + 0x1E) = (u16)r0;
    r0 = 0x0U;
    return sub_08027A84(r0, r1, r2, r3);
}

// ROM Address: 0x08027B18..0x08027B34 (28 bytes, Thumb)
u32 sub_08027B18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_08027B34(r0, r1, r2, r3);
    r0 = *(u16*)(r0 + 0xC);
    r1 = 0x06010000U; // [0x08027B44]
    r2 = 0x40U;
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = 0x0874E9F8U; // [0x08027B3C]
    r1 += 0x8U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08027B2C: BL 0x08049138
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08027B34..0x08027B38 (4 bytes, Thumb)
u32 sub_08027B34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08027B32(r0, r1, r2, r3);
}

// ROM Address: 0x08027B4C..0x08027B8C (64 bytes, Thumb)
u32 sub_08027B4C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r1 + 0x4);
    r7 = 0x8; // sp + 0x8
    r4 = r0;
    r1 = r5;
    r0 = r7;
    r0 = sub_0800FF44(r0, r1, r2, r3); // 0x08027B5A: BL 0x0800FF44
    r2 = *(u32*)(r4 + 0x14);
    r3 = r4;
    stack[0] = r2; // [sp + 0x0]
    r2 = r4;
    r3 += 0x8U;
    r6 = r3;
    r2 += 0x10U;
    r0 = r7;
    r1 = stack[6]; // [sp + 0x18]
    r0 = sub_080192CE(r0, r1, r2, r3); // 0x08027B70
    r1 = 0x3U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08027B78
    r1 = 0x03001B10U; // [0x08027C28]
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08027B80
    r0 = *(u32*)(r4 + 0x8);
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08027B8E(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08027B8E..0x08027B96 (8 bytes, Thumb)
u32 sub_08027B8E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4 + 0xC);
    r3 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08027B98(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08027B98..0x08027BCC (52 bytes, Thumb)
u32 sub_08027B98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08027BA8;
    r3 = 0x3U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08027BA4;
    r3 = 0x2U;
loc_08027BA4:
    r0 = r3;
    goto loc_08027BB0;
loc_08027BA8:
    r0 = 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08027BB0;
    r0 = 0x0U;
loc_08027BB0:
    r3 = r0;
    r2 = r6;
    r1 = r7;
    r0 = 0x0U;
    r0 = sub_08027CBC(r0, r1, r2, r3); // 0x08027BB8
    r1 = r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x0874EA40U; // [0x08027C2C]
    r0 = *(u32*)(r0);
    r0 = List_Append(r0, r1, r2, r3); // 0x08027BC4: BL 0x0801191A
    return r0;
}

// ROM Address: 0x08027BCC..0x08027BCE (2 bytes, Thumb)
u32 sub_08027BCC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x08027BCE..0x08027BE2 (20 bytes, Thumb)
u32 sub_08027BCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x10);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08027BE2(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_08027D3E(r0, r1, r2, r3); // 0x08027BDA: BL 0x08027D3E
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08027BE2..0x08027BE6 (4 bytes, Thumb)
u32 sub_08027BE2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_08027BE0(r0, r1, r2, r3);
}

// ROM Address: 0x08027BE6..0x08027C20 (58 bytes, Thumb)
u32 sub_08027BE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = *(u32*)(r0 + 0x1C);
    r0 = 0xC; // sp + 0xC
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08027BF2
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r3 = stack[6]; // [sp + 0x18]
    r1 = r0 + r1;
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r3;
    stack[2] = r0; // [sp + 0x8]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = ((u32)((s32)r0 >> 1));
    stack[1] = r1; // [sp + 0x4]
    stack[7] = r1; // [sp + 0x1C]
    r1 = r5;
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    r0 = r4;
    r2 = 0x1C; // sp + 0x1C
    r0 = sub_08027B4C(r0, r1, r2, r3); // 0x08027C18: BL 0x08027B4C
    return r0;
}

// ROM Address: 0x08027C20..0x08027C26 (6 bytes, Thumb)
u32 sub_08027C20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r2 += 0x1CU;
    return sub_08027B4C(r0, r1, r2, r3);
}

// ROM Address: 0x08027C30..0x08027CD8 (168 bytes, Thumb)
u32 sub_08027C30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x1C; // sp + 0x1C
    r1 = *(u32*)(r1 + 0x4);
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x08027C3A
    r5 = 0x0874EA44U; // [0x08027CB8]
    r1 = 0x400U; // (1 << 10)
    r0 = *(u32*)(r5);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08027C46: BL 0x08011732
    r0 = stack[7]; // [sp + 0x1C]
    r1 = stack[9]; // [sp + 0x24]
    r2 = stack[10]; // [sp + 0x28]
    r1 = r0 + r1;
    r0 = stack[8]; // [sp + 0x20]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    r1 = ((u32)((s32)r1 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    r1 = *(u32*)(r4 + 0x8);
    r0 = r0 + r1;
    r1 = stack[4]; // [sp + 0x10]
    r2 = *(u32*)(r4 + 0xC);
    stack[1] = r0; // [sp + 0x4]
    r1 = r1 + r2;
    stack[2] = r1; // [sp + 0x8]
    stack[6] = r1; // [sp + 0x18]
    r2 = 0x37U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x0U;
    r1 = 0x14; // sp + 0x14
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x08027C80
    r1 = r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x08027C88: BL 0x0801191A
    return r0;
    r5 = r0;
    r4 = 0x0874EA44U; // [0x08027CB8]
    r1 = 0x400U; // (1 << 10)
    r0 = *(u32*)(r4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08027C9C: BL 0x08011732
    r1 = r5;
    r1 += 0x8U;
    r2 = 0x37U;
    r0 = 0x0U;
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x08027CA8
    r1 = r0;
    r0 = *(u32*)(r4);
    r0 = List_Append(r0, r1, r2, r3); // 0x08027CB0: BL 0x0801191A
    return r0;
    r0 = r0;
    r4 = (r6 >> 1);
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08027CD8(r0, r1, r2, r3);
    r0 = 0x54U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08027CCC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08027CD8(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08027CD8..0x08027D3E (102 bytes, Thumb)
u32 sub_08027CD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0x1U;
    r2 = 0x0U;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x08027CE0
    r0 = 0x0804D234U /* &VTable_0804D234 */; // [0x08027D98]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    *(u32*)(r4 + 0x40) = (u32)r1;
    *(u32*)(r4 + 0x44) = (u32)r2;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = (r7 << 1);
    r0 = r0 + r7;
    r1 = 0x0871370CU; // [0x08027D9C]
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = (r0 << 4);
    r5 = 0x0U;
    *(u32*)(r4 + 0x50) = (u32)r5;
    r0 = r0 + r1;
    *(u32*)(r4 + 0x48) = (u32)r0;
    *(u32*)(r4 + 0x4C) = (u32)r5;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x08027D14
    r0 = 0x0874EA48U; // [0x08027DA0]
    r6 = *(u32*)(r0);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08027D1E
    r0 += 0x14U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08027DA4]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08027DA8]
    r3 = r5;
    r2 = 0x40U;
    r0 = r6 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08027D36
    r0 = r4;
    return sub_08027CD6(r0, r1, r2, r3);
}

// ROM Address: 0x08027D3E..0x08027D62 (36 bytes, Thumb)
u32 sub_08027D3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x10U;
    *(u32*)(r0 + 0x4C) = (u32)r1;
    r1 = 0x087137CCU; // [0x08027DAC]
    *(u32*)(r0 + 0x18) = (u32)r1;
    return r0; // BX lr
    r1 = *(u32*)(r0 + 0x4C);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08027D62(r0, r1, r2, r3);
    r1 -= 0x1U;
    *(u32*)(r0 + 0x4C) = (u32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08027D60;
    r1 = r0;
    r0 = 0x0874EA48U; // [0x08027DA0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08027D5C
loc_08027D60:
    return r0;
}

// ROM Address: 0x08027D62..0x08027D90 (46 bytes, Thumb)
u32 sub_08027D62(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x20);
    r3 = *(u32*)(r0 + 0x40);
    r2 = r2 + r3;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r1 = *(u32*)(r0 + 0x44);
    r2 = *(u32*)(r0 + 0x24);
    r1 = r2 + r1;
    *(u32*)(r0 + 0x24) = (u32)r1;
    r1 = *(u32*)(r0 + 0x50);
    r1 += 0x1U;
    r2 = ((u32)((s32)r1 >> 3));
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    *(u32*)(r0 + 0x50) = (u32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08027D84;
    r2 = (r2 << 31);
    r2 = (r2 >> 31);
    r2 += 0x2U;
loc_08027D84:
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r1 = *(u32*)(r0 + 0x48);
    r2 = (r2 << 2);
    r1 = r1 + r2;
    *(u32*)(r0 + 0x18) = (u32)r1;
    return r0;
}

// ROM Address: 0x08027D96..0x08027DEE (88 bytes, Thumb)
u32 sub_08027D96(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08027E04(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r7 += 0xCU;
    r1 = (r6 >> 1);
    r4 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r7 += 0xCCU;
    r1 = (r6 >> 1);
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08027DC8;
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08027DBC: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08027DC8;
    r0 = r4;
    return r0;
loc_08027DC8:
    r0 = 0x0804A3E8U /* &VTable_0804A3E8 */; // [0x08027E40]
    r5 = 0x0874EA50U; // [0x08027E44]
    r1 = 0x5U;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r5);
    r1 = (r1 << 11);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08027DD4: BL 0x08011732
    r1 = r6;
    r0 = 0x0U;
    r0 = sub_08028144(r0, r1, r2, r3); // 0x08027DDC
    r1 = r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = *(u32*)(r5);
    r0 = List_Append(r0, r1, r2, r3); // 0x08027DE6: BL 0x0801191A
    r0 = r4;
    return r0;
}

// ROM Address: 0x08027DEE..0x08027DF0 (2 bytes, Thumb)
u32 sub_08027DEE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
}

// ROM Address: 0x08027DF0..0x08027E40 (80 bytes, Thumb)
u32 sub_08027DF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0874EA50U; // [0x08027E44]
    r1 = *(u32*)(r0 + 0x4);
    r4 = r0;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08027DFA
    r0 = *(u32*)(r5);
    r0 = sub_08011E94(r0, r1, r2, r3); // 0x08027E00
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_08027E14;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08027E10: BL __call_via_r3
loc_08027E14:
    return r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08027E20: BL 0x08046AA2
    r0 = 0x0874EA50U; // [0x08027E44]
    r0 = *(u32*)(r0);
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x08027E28
    return r0;
    r4 = r0;
    r0 = 0x0874EA50U; // [0x08027E44]
    r0 = *(u32*)(r0);
    r0 = sub_0801157E(r0, r1, r2, r3); // 0x08027E36
    r0 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r0 + 0x10);
    return r0;
}

// ROM Address: 0x08027E48..0x08027F6C (292 bytes, Thumb)
u32 sub_08027E48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u16*)(r0 + 0xC);
    r1 = 0x06010000U; // [0x0802810C]
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r7 = 0x0U;
    r6 = 0x40U;
    r0 = r4;
    r0 += 0x34U;
    r5 = r0;
    stack[3] = r6; // [sp + 0xC]
    stack[4] = r6; // [sp + 0x10]
    stack[1] = r7; // [sp + 0x4]
    stack[2] = r7; // [sp + 0x8]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08027E6A: BL 0x0804915C
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802810C]
    stack[1] = r6; // [sp + 0x4]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r6 << 6);
    r1 = r0 + r1;
    r0 = 0x80U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r5;
    stack[2] = r7; // [sp + 0x8]
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08027E88: BL 0x0804915C
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802810C]
    stack[2] = r7; // [sp + 0x8]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r6 << 7);
    r1 = r0 + r1;
    r0 = 0x80U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xA0U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r5;
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08027EA8: BL 0x0804915C
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x14) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08027ED2;
    r0 = r4;
    r0 += 0x29U;
    r2 = 0x5U;
    r5 = r0;
    r1 = 0x0874EA60U; // [0x08028110]
    r0 = sub_08046C54(r0, r1, r2, r3); // 0x08027EC6: BL 0x08046C54
    r6 = 0x2U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08027ED4;
    *(u32*)(r4 + 0x10) = (u32)r6;
loc_08027ED2:
    return r0;
loc_08027ED4:
    r1 = r4;
    r1 += 0x24U;
    r2 = 0x5U;
    r0 = r5;
    r0 = sub_08046C54(r0, r1, r2, r3); // 0x08027EDC: BL 0x08046C54
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08027EE8;
    *(u32*)(r4 + 0x10) = (u32)r6;
    return r0;
loc_08027EE8:
    r0 = 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x18);
    r0 += 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if (cmp_lhs < cmp_rhs) goto loc_08027F02;
    r1 = 0x08027EB1U; // [0x08028114]
    *(u32*)(r4 + 0x30) = (u32)r1;
loc_08027F02:
    r1 = (r0 << 29);
    if (cmp_lhs != cmp_rhs) goto loc_08027F68;
    r0 = (r0 << 28);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08027F6C(r0, r1, r2, r3);
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802810C]
    r7 = 0x0U;
    r0 = (r0 << 5);
    r1 = r0 + r1;
    r6 = 0x40U;
    r0 = r4;
    r0 += 0x68U;
    r5 = r0;
    stack[3] = r6; // [sp + 0xC]
    stack[4] = r6; // [sp + 0x10]
    stack[1] = r7; // [sp + 0x4]
    stack[2] = r7; // [sp + 0x8]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08027F26: BL 0x0804915C
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802810C]
    stack[1] = r6; // [sp + 0x4]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r6 << 6);
    r1 = r0 + r1;
    r0 = 0x80U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r5;
    stack[2] = r7; // [sp + 0x8]
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08027F44: BL 0x0804915C
    r0 = *(u16*)(r4 + 0xC);
    r1 = 0x06010000U; // [0x0802810C]
    stack[2] = r7; // [sp + 0x8]
    r0 = (r0 << 5);
    r0 = r0 + r1;
    r1 = (r6 << 7);
    r1 = r0 + r1;
    r0 = 0x80U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xA0U;
    stack[3] = r0; // [sp + 0xC]
    r0 = r5;
    stack[4] = r6; // [sp + 0x10]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0804915C(r0, r1, r2, r3); // 0x08027F64: BL 0x0804915C
loc_08027F68:
    return r0;
}

// ROM Address: 0x08027F6C..0x08027F74 (8 bytes, Thumb)
u32 sub_08027F6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 = sub_08027E48(r0, r1, r2, r3); // 0x08027F6E: BL 0x08027E48
    return sub_08027F68(r0, r1, r2, r3);
}

// ROM Address: 0x08027F74..0x08028082 (270 bytes, Thumb)
u32 sub_08027F74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x18);
    r0 += 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs < cmp_rhs) goto loc_08027FB6;
    r1 = 0x8CU;
    r2 = 0x08071758U; // [0x08028118]
    r1 = *(u32*)(r1 + r4);
    r0 = *(u32*)(r4 + 0x58);
    r2 = *(u32*)(r2 + 0x4);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08027F8C: BL 0x08049138
    r0 = 0x50U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = 0x1CU;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = 0x4BU;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0802811C]
    r0 = (r0 << 3);
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 += 0x34U;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08027FA4
    r0 = r4;
    r0 = sub_08027E48(r0, r1, r2, r3); // 0x08027FAA: BL 0x08027E48
    r0 = 0x08027EEFU; // [0x08028120]
    *(u32*)(r4 + 0x30) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x18) = (u32)r0;
loc_08027FB6:
    return r0;
    r4 = r0;
    r0 = 0x0874EA60U; // [0x08028110]
    r2 = 0xF3U;
    r0 -= 0xCU;
    r1 = *(u32*)(r0);
    r1 = *(u16*)(r1 + 0x4);
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_08028030;
    r1 = *(u32*)(r4 + 0x18);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 += 0x14U;
    stack[0] = r1; // [sp + 0x0]
    r1 = 0x2CU;
    stack[1] = r1; // [sp + 0x4]
    r1 = stack[0]; // [sp + 0x0]
    r1 += 0x10U;
    stack[2] = r1; // [sp + 0x8]
    r1 = 0x3CU;
    stack[3] = r1; // [sp + 0xC]
    r0 = *(u32*)(r0);
    r0 = sub_08040322(r0, r1, r2, r3); // 0x08027FE8
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_08027FF2;
    r0 -= 0x2U;
loc_08027FF2:
    r1 = *(u32*)(r4 + 0x18);
    r6 = 0x0U;
    r2 = r1 + 1;
    r1 = r1 + r4;
    r1 += 0x20U;
    *(u32*)(r4 + 0x18) = (u32)r2;
    *(u8*)(r1 + 0x9) = (u8)r0;
    r1 = 0x0874EA60U; // [0x08028110]
    r0 = (r0 << 2);
    r1 += 0x8U;
    r0 = *(u32*)(r1 + r0);
    r5 = 0x10; // sp + 0x10
    r1 = *(u32*)(r0 + 0x4);
    r0 = r5;
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x0802800E: BL 0x08049120
    r1 = r5;
    r0 = r4;
    r0 += 0x34U;
    r2 = sp;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x0802801A
    r0 = r4;
    r0 = sub_08027E48(r0, r1, r2, r3); // 0x08028020: BL 0x08027E48
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) goto loc_08028030;
    r0 = 0x08027F75U /* &sub_08027F74 */; // [0x08028124]
    *(u32*)(r4 + 0x30) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r6;
loc_08028030:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x1C);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0802807E;
    r5 = r4;
    r0 = *(u32*)(r4 + 0x18);
    r5 += 0x34U;
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 10;
    if (cmp_lhs < cmp_rhs) return sub_08028082(r0, r1, r2, r3);
    r1 = 0x8CU;
    r2 = 0x08071758U; // [0x08028118]
    r1 = *(u32*)(r1 + r4);
    r0 = *(u32*)(r4 + 0x58);
    r2 = *(u32*)(r2 + 0x4);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08028058: BL 0x08049138
    r0 = 0x50U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = 0x1CU;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = 0x95U;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0802811C]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = r5;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0802806E
    r0 = r4;
    r0 = sub_08027E48(r0, r1, r2, r3); // 0x08028074: BL 0x08027E48
    r0 = 0x08027FB9U; // [0x08028128]
    *(u32*)(r4 + 0x30) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r6;
loc_0802807E:
    return r0;
}

// ROM Address: 0x08028082..0x0802815C (218 bytes, Thumb)
u32 sub_08028082(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x2CU;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    r0 = *(u32*)(r4 + 0x18);
    if (cmp_lhs < cmp_rhs) goto loc_080280C0;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 -= 0x64U;
    stack[65] = r0; // [sp + 0x104]
    r0 += 0x10U;
    stack[67] = r0; // [sp + 0x10C]
    r0 = 0x3CU;
    stack[68] = r0; // [sp + 0x110]
    r0 = r4;
    r0 += 0x68U;
    stack[66] = r6; // [sp + 0x108]
    r1 = *(u32*)(r0 + 0x28);
    r0 = *(u32*)(r0 + 0x24);
    r1 *= r6;
    r0 = r1 + r0;
    r1 = stack[65]; // [sp + 0x104]
    r3 = 0xA0U;
    r1 = r0 + r1;
    r0 = r5;
    r2 = 0x104; // sp + 0x104
    r0 = sub_0803F8E2(r0, r1, r2, r3); // 0x080280B4
    r0 = r4;
    r0 = sub_08027E48(r0, r1, r2, r3); // 0x080280BA: BL 0x08027E48
    goto loc_080280FE;
loc_080280C0:
    r0 = r0 + r4;
    r0 += 0x20U;
    r0 = *(u8*)(r0 + 0x4);
    r1 = 0x0874EA60U; // [0x08028110]
    r7 = 0x14; // sp + 0x14
    r1 += 0x8U;
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    r1 = *(u32*)(r0 + 0x4);
    r0 = r7;
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x080280D4: BL 0x08049120
    r0 = *(u32*)(r4 + 0x18);
    r1 = r7;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 += 0x14U;
    stack[1] = r0; // [sp + 0x4]
    r0 += 0x10U;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x3CU;
    stack[4] = r0; // [sp + 0x10]
    r0 = r5;
    stack[2] = r6; // [sp + 0x8]
    r2 = 0x4; // sp + 0x4
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x080280F4
    r0 = r4;
    r0 = sub_08027E48(r0, r1, r2, r3); // 0x080280FA: BL 0x08027E48
loc_080280FE:
    r0 = *(u32*)(r4 + 0x18);
    r0 += 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = *(u32*)(r4 + 0x20);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    return sub_0802807E(r0, r1, r2, r3);
    r0 = r0;
    r0 = r0;
    r1 = (r0 << 24);
    r4 = (r6 >> 1);
    r1 = *(u8*)(r6 + 0x1A);
    r2 = (r0 >> 32);
    r0 = ((u32)((s32)r3 >> 29));
    r7 = (r0 >> 32);
    r6 = (r0 >> 32);
    r7 = *(u8*)(r5 + 0x1B);
    r2 = (r0 >> 32);
    r5 = *(u8*)(r6 + 0x1D);
    r2 = (r0 >> 32);
    r1 = *(u8*)(r7 + 0x1E);
    r2 = (r0 >> 32);
    r1 = *(u32*)(r0 + 0x14);
    r1 += 0x1U;
    *(u32*)(r0 + 0x14) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs < cmp_rhs) goto loc_08028142;
    r1 = 0x08028035U; // [0x08028368]
    *(u32*)(r0 + 0x30) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x18) = (u32)r1;
    r1 = 0x1U;
    *(u32*)(r0 + 0x1C) = (u32)r1;
loc_08028142:
    return r0; // BX lr
    r7 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802815C(r0, r1, r2, r3);
    r0 = 0x9CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08028150: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0802815C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0802815C..0x0802821A (190 bytes, Thumb)
u32 sub_0802815C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0802836C]
    r5 = 0x2800U; // (5 << 11)
    r6 = 0x0874EA54U; // [0x08028370]
    *(u32*)(r4) = (u32)r0;
    *(u16*)(r4 + 0xE) = (u16)r5;
    r0 = *(u32*)(r6 + 0x4);
    r1 = r5;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0802816C
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08028184;
    r1 = r5;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08028178: BL 0x08011732
    r1 = r5;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08028180
loc_08028184:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804C9C8U /* &VTable_0804C9C8 */; // [0x08028374]
    r2 = 0x40U;
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x34U;
    r1 = 0xA0U;
    r5 = r0;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x08028194
    r2 = 0x40U;
    r1 = 0xA0U;
    r0 = r4;
    r0 += 0x68U;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x080281A0
    r1 = 0x8U;
    r1 = r1 - r7;
    r0 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r3 = (r1 << 1);
    r1 = r3 + r1;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = 0x0802812DU; // [0x08028378]
    r7 = r4;
    *(u32*)(r4 + 0x30) = (u32)r0;
    r7 += 0x80U;
    r1 = *(u32*)(r7 + 0xC);
    r0 = 0x08071758U; // [0x0802837C]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080281C4
    r2 = 0x08071758U; // [0x0802837C]
    r0 = *(u32*)(r4 + 0x58);
    r1 = *(u32*)(r7 + 0xC);
    r2 = *(u32*)(r2 + 0x4);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080281D0: BL 0x08049138
    r0 = r4;
    r0 = sub_08027E48(r0, r1, r2, r3); // 0x080281D6: BL 0x08027E48
    r7 = 0x0U;
loc_080281DC:
    r0 = 0x6U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080281DE
    r1 = r4 + r7;
    r1 += 0x20U;
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 5;
    *(u8*)(r1 + 0x4) = (u8)r0;
    if (cmp_lhs < cmp_rhs) goto loc_080281DC;
    r0 = 0x2U;
    *(u8*)(r5 + 0x3) = (u8)r0;
    r0 = 0x0803F70DU; // [0x08028380]
    r1 = 0x1U;
    *(u8*)(r5 + 0x2) = (u8)r1;
    *(u32*)(r5 + 0x20) = (u32)r0;
    *(u8*)(r5) = (u8)r1;
    r0 = *(u32*)(r6 + 0x8);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x08028384]
    *(u32*)(r4 + 0x40) = (u32)r0;
    r0 = 0x50U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = 0x1CU;
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r0 = 0x250U; // (37 << 4)
    r1 = *(u32*)(r1 + r0);
    r0 = r5;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x08028212
    r0 = r4;
    return sub_0802815A(r0, r1, r2, r3);
}

// ROM Address: 0x0802821A..0x08028236 (28 bytes, Thumb)
u32 sub_0802821A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x30);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802821E: BL 0x08046AA2
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x14);
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08028236(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08028236..0x08028366 (304 bytes, Thumb)
u32 sub_08028236(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r0 = *(u32*)(r4 + 0x14);
    r1 = (r1 << 11);
    stack[4] = r0; // [sp + 0x10]
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x08028252: BL 0x08046E58
    r12 = r0;
    r0 = stack[4]; // [sp + 0x10]
    r2 = 0xC0002100U; // [0x08028388]
    r0 -= 0x8U;
    lr = r0;
    r3 = (r0 << 4);
    *(u32*)(r5) = (u32)r2;
    r1 = *(u32*)(r4 + 0x14);
    r0 = r3 - r0;
    r3 = (r1 << 2);
    r1 = r3 + r1;
    r3 = lr;
    r2 = (r3 << 5);
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r0 = (r0 << 3);
    r1 = r1 - r0;
    stack[3] = r2; // [sp + 0xC]
    r2 = ((u32)((s32)r1 >> 31));
    r2 = (r2 >> 29);
    r1 = r2 + r1;
    r1 = ((u32)((s32)r1 >> 3));
    r1 = (r1 << 23);
    r2 = 0xC0002100U; // [0x08028388]
    r1 = (r1 >> 7);
    r1 |= r2;
    r1 = (r1 >> 8);
    r1 = (r1 << 8);
    r1 += 0x30U;
    *(u32*)(r5) = (u32)r1;
    r2 = *(u16*)(r4 + 0xC);
    r3 = r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = (r2 << 22);
    r1 = (r1 >> 10);
    r1 = (r1 << 10);
    r2 = (r2 >> 22);
    r1 |= r2;
    r2 = 0x3E000000U; // (31 << 25)
    r3 &= ~r2;
    *(u32*)(r5 + 0x4) = (u32)r1;
    r2 = stack[1]; // [sp + 0x4]
    r1 = r3;
    r2 = (r2 << 27);
    r2 = (r2 >> 2);
    stack[2] = r2; // [sp + 0x8]
    r1 |= r2;
    r2 = 0xC0002100U; // [0x08028388]
    *(u32*)(r5) = (u32)r1;
    *(u32*)(r5 + 0x8) = (u32)r2;
    r2 = *(u32*)(r4 + 0x14);
    r3 = 0x68U;
    r2 *= r3;
    r3 = stack[3]; // [sp + 0xC]
    r1 = r5;
    r2 = r2 + r3;
    r2 = r2 - r0;
    r3 = ((u32)((s32)r2 >> 31));
    r3 = (r3 >> 29);
    r2 = r3 + r2;
    r2 = ((u32)((s32)r2 >> 3));
    r2 = (r2 << 23);
    r3 = 0xC0002100U; // [0x08028388]
    r2 = (r2 >> 7);
    r2 |= r3;
    r2 = (r2 >> 8);
    r2 = (r2 << 8);
    r2 += 0x30U;
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r2;
    r5 = r2;
    r2 = *(u16*)(r4 + 0xC);
    r3 = *(u32*)(r1 + 0x4);
    r2 += 0x80U;
    r2 = (r2 << 22);
    r3 = (r3 >> 10);
    r3 = (r3 << 10);
    r2 = (r2 >> 22);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r2 = r5;
    r5 = 0x3E000000U; // (31 << 25)
    r2 &= ~r5;
    r3 = r2;
    r2 = stack[2]; // [sp + 0x8]
    r5 = 0xC000A100U; // [0x0802838C]
    r2 |= r3;
    *(u32*)(r1) = (u32)r2;
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r5;
    r2 = *(u32*)(r4 + 0x14);
    r3 = 0xA8U;
    r2 *= r3;
    r3 = lr;
    r3 = (r3 << 4);
    r2 = r2 + r3;
    r0 = r2 - r0;
    r2 = ((u32)((s32)r0 >> 31));
    r2 = (r2 >> 29);
    r0 = r2 + r0;
    r0 = ((u32)((s32)r0 >> 3));
    r0 = (r0 << 23);
    r0 = (r0 >> 7);
    r0 |= r5;
    r0 = (r0 >> 8);
    r0 = (r0 << 8);
    r0 += 0x30U;
    *(u32*)(r1) = (u32)r0;
    r2 = *(u16*)(r4 + 0xC);
    r3 = *(u32*)(r1 + 0x4);
    r2 += 0x100U;
    r2 = (r2 << 22);
    r3 = (r3 >> 10);
    r3 = (r3 << 10);
    r2 = (r2 >> 22);
    r2 |= r3;
    *(u32*)(r1 + 0x4) = (u32)r2;
    r2 = 0x3E000000U; // (31 << 25)
    r0 &= ~r2;
    r2 = stack[2]; // [sp + 0x8]
    r0 |= r2;
    *(u32*)(r1) = (u32)r0;
    r0 = r12;
    *(u16*)(r7 + 0x6) = (u16)r0;
    r2 = 0x0U;
    *(u16*)(r7 + 0xE) = (u16)r2;
    *(u16*)(r7 + 0x16) = (u16)r2;
    *(u16*)(r7 + 0x1E) = (u16)r0;
    r1 += 0x8U;
    *(u32*)(r6) = (u32)r1;
    r0 = 0x0U;
    return sub_08028232(r0, r1, r2, r3);
}

// ROM Address: 0x08028390..0x080284B6 (294 bytes, Thumb)
u32 sub_08028390(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x03002FE4U; // [0x080286B8]
    r4 = r1;
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080283D6;
    r0 = 0x0874EA80U; // [0x080286BC]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x080286C0]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x080283BA
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x080283C2
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080283D0: BL __call_via_r3
loc_080283D4:
    return r0;
loc_080283D6:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080283E0: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r1 = 0xF0U;
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08028400;
    r1 = 0x03000F90U; // [0x080286C4]
    r2 = 0x220U; // (17 << 5)
    r2 = r4 + r2;
    r1 = *(u32*)(r1 + 0x4);
    *(u16*)(r2 + 0x10) = (u16)r0;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x34) = (u32)r1;
loc_08028400:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802840A: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r5 = 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 28);
    if (cmp_lhs == cmp_rhs) goto loc_0802849E;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08028422: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 26);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08028432;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_08028432:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802843C: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0802844C;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_0802844C:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08028456: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 25);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08028464;
    *(u8*)(r4 + 0x10) = (u8)r5;
loc_08028464:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0802846E: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0802847E;
    r0 = 0x0U;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_0802847E:
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08028480: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802848C;
    r1 = 0x0804B7ACU /* &VTable_0804B7AC */; // [0x080286C8]
    *(u32*)(r0) = (u32)r1;
loc_0802848C:
    r5 = r0;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08028492
    r1 = r5;
    r0 = r4;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x0802849A
loc_0802849E:
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080283D4;
    r0 -= 0x1U;
    *(u32*)(r6) = (u32)r0;
    return r0;
    r0 = *(u16*)(r1 + 0x12);
    r2 = 0x087B6EECU; // [0x080286CC]
    r1 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 22);
    r0 = *(u32*)(r2 + r0);
    return r0;
}

// ROM Address: 0x080284B8..0x0802851E (102 bytes, Thumb)
u32 sub_080284B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = ((u32)((s32)r0 >> 13));
    r1 += 0x61U;
    *(u16*)(r1 + 0x16) = (u16)r0;
    return r0; // BX lr
    r5 = r0;
    r0 = *(u16*)(r1 + 0x12);
    r7 = r1;
    r2 = 0x238U; // (71 << 3)
    r7 += 0x1A0U;
    r6 = r1 + r2;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080285B6(r0, r1, r2, r3);
    r0 = 0x03002FE4U; // [0x080286B8]
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0802851E(r0, r1, r2, r3);
    r0 = 0x0874EA80U; // [0x080286BC]
    r3 = 0x68U;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x080286C0]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = sub_0801713C(r0, r1, r2, r3); // 0x08028500
    r1 = r0;
    r0 = r4;
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08028508
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08028516: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0802851E..0x080285B8 (154 bytes, Thumb)
u32 sub_0802851E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08028528: BL 0x08046AA2
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 24);
    r0 = (r0 >> 28);
    if (cmp_lhs == cmp_rhs) return sub_080285DE(r0, r1, r2, r3);
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u16*)(r0 + 0x2);
    r1 = (r0 << 26);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08028566;
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r6);
    r2 = 0x2U;
    r0 = r0 - r1;
    stack[0] = r0; // [sp + 0x0]
    r0 = r4;
    r1 = sp;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x0802855A
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0x1U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    goto loc_0802858C;
loc_08028566:
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0802858C;
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[1] = r0; // [sp + 0x4]
    r0 = r1;
    stack[0] = r1; // [sp + 0x0]
    r1 = *(u32*)(r6);
    r2 = 0x2U;
    r0 = r0 + r1;
    stack[0] = r0; // [sp + 0x0]
    r0 = r4;
    r1 = sp;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x08028582
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0x2U;
    *(u32*)(r5 + 0x4) = (u32)r0;
loc_0802858C:
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u16*)(r0 + 0x2);
    r1 = (r0 << 25);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_080285B8(r0, r1, r2, r3);
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r2 = *(u32*)(r6);
    r1 = sp;
    r0 = r0 - r2;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x1U;
    r0 = r4;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x080285AA
    r0 = *(u32*)(r5 + 0x4);
    r0 += 0x3U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    return sub_0802869C(r0, r1, r2, r3);
    return sub_08028600(r0, r1, r2, r3);
}

// ROM Address: 0x08028600..0x080286B6 (182 bytes, Thumb)
u32 sub_08028600(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0802860E;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs == cmp_rhs) goto loc_0802860E;
    cmp_lhs = (s32)r0; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) goto loc_08028628;
loc_0802860E:
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r6);
    r2 = 0x2U;
    r0 = r0 - r1;
    stack[1] = r0; // [sp + 0x4]
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08012960(r0, r1, r2, r3); // 0x08028624
loc_08028628:
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) goto loc_08028636;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs == cmp_rhs) goto loc_08028636;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_08028650;
loc_08028636:
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[2] = r0; // [sp + 0x8]
    r0 = r1;
    stack[1] = r1; // [sp + 0x4]
    r1 = *(u32*)(r6);
    r2 = 0x2U;
    r0 = r0 + r1;
    stack[1] = r0; // [sp + 0x4]
    r0 = r4;
    r1 = 0x4; // sp + 0x4
    r0 = sub_08012960(r0, r1, r2, r3); // 0x0802864C
loc_08028650:
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) goto loc_0802865E;
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs == cmp_rhs) goto loc_0802865E;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) goto loc_08028676;
loc_0802865E:
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[2] = r0; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r2 = *(u32*)(r6);
    r1 = 0x4; // sp + 0x4
    r0 = r0 - r2;
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x1U;
    r0 = r4;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x08028672
loc_08028676:
    r0 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 6;
    if (cmp_lhs == cmp_rhs) goto loc_08028684;
    cmp_lhs = (s32)r0; cmp_rhs = 7;
    if (cmp_lhs == cmp_rhs) goto loc_08028684;
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_0802869C;
loc_08028684:
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[2] = r0; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r2 = *(u32*)(r6);
    r1 = 0x4; // sp + 0x4
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r2 = 0x1U;
    r0 = r4;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x08028698
loc_0802869C:
    r0 = *(u16*)(r4 + 0x12);
    r1 = 0x03002FE4U; // [0x080286B8]
    r0 += 0x8U;
    r0 = (r0 << 25);
    r0 = (r0 >> 25);
    *(u16*)(r4 + 0x12) = (u16)r0;
    r0 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_080286B0;
    return sub_0802851A(r0, r1, r2, r3);
loc_080286B0:
    r0 -= 0x1U;
    *(u32*)(r1) = (u32)r0;
    return sub_0802851A(r0, r1, r2, r3);
}

// ROM Address: 0x080286D4..0x080286F2 (30 bytes, Thumb)
u32 sub_080286D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080286F2(r0, r1, r2, r3);
    r0 = 0x50U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080286E4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080286F2(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080286F2..0x08028782 (144 bytes, Thumb)
u32 sub_080286F2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080289BC]
    r7 = 0x0874EA80U; // [0x080289C0]
    *(u32*)(r4) = (u32)r0;
    r0 = 0xC0U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r7);
    r1 = 0xC0U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08028700
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08028718;
    r1 = 0xC0U;
    r0 = *(u32*)(r7);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0802870C: BL 0x08011732
    r1 = 0xC0U;
    r0 = *(u32*)(r7);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08028714
loc_08028718:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804B3ACU /* &VTable_0804B3AC */; // [0x080289C4]
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
    if (cmp_lhs != cmp_rhs) goto loc_08028740;
    r1 = *(u32*)(r5 + 0x4);
    r1 += 0x2CU;
    *(u32*)(r4 + 0x4) = (u32)r1;
loc_08028740:
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
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r5 -= 0x8U;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = *(u32*)(r4 + 0x44);
    r2 = 0x0874ED7CU; // [0x080289C8]
    r1 = (r0 << 4);
    r1 = r1 - r0;
    r1 = (r1 << 2);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x48) = (u32)r1;
    r1 = 0x0874EA80U; // [0x080289C0]
    r0 = (r0 << 3);
    r1 += 0x14U;
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x3C) = (u32)r0;
    *(u32*)(r4 + 0x38) = (u32)r1;
    r0 = r4;
    return sub_080286EE(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy17_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x08028782..0x080287EE (108 bytes, Thumb)
u32 Object_Destroy17(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080289BC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080289CC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0802879C;
    r0 = 0x0874EA80U; // [0x080289C0]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08028798
loc_0802879C:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080289D0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080287AA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080287A6: BL 0x0803D63C
loc_080287AA:
    return r0;
    r4 = r0;
    r2 = *(u8*)(r4 + 0x10);
    r0 = r1;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080287EE(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_080288A4(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x38);
    r1 = *(u32*)(r4 + 0x3C);
    r0 = (r0 << 2);
    r1 = (r1 << 2);
    stack[14] = r1; // [sp + 0x38]
    stack[13] = r0; // [sp + 0x34]
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
    if (cmp_lhs > cmp_rhs) return sub_080288A4(r0, r1, r2, r3);
    r5 = 0x0874EA80U; // [0x080289C0]
    r1 = r4;
    r0 = *(u32*)(r5);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080287E6
    return r0;
}

// ROM Address: 0x080287EE..0x080288A6 (184 bytes, Thumb)
u32 sub_080287EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0874EA80U; // [0x080289C0]
    r6 = 0x1U;
    r1 = *(u32*)(r1 + 0x8);
    r1 += 0x80U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080288C4(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x4C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080288C4(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x40);
    r2 = *(u32*)(r4 + 0x38);
    r3 = *(u32*)(r4 + 0x3C);
    r2 *= r0;
    r3 *= r0;
    r0 = r2;
    stack[13] = r2; // [sp + 0x34]
    r2 = r3;
    stack[14] = r3; // [sp + 0x38]
    r3 = *(u32*)(r4 + 0x20);
    r7 = 0x8; // sp + 0x8
    r0 = r3 + r0;
    r3 = *(u32*)(r4 + 0x24);
    stack[13] = r0; // [sp + 0x34]
    r2 = r3 + r2;
    stack[14] = r2; // [sp + 0x38]
    r5 = stack[14]; // [sp + 0x38]
    r2 = r0;
    r0 = *(u32*)(r4 + 0x4C);
    r3 = 0x0; // sp + 0x0
    stack[10] = r0; // [sp + 0x28]
    r0 = *(u32*)(r4 + 0x44);
    *(u8*)(r3 + 0x1C) = (u8)r0;
    r0 = 0x086B8090U; // [0x080289D4]
    stack[9] = r0; // [sp + 0x24]
    r0 = 0x0U;
    stack[8] = r0; // [sp + 0x20]
    *(u8*)(r3 + 0x8) = (u8)r0;
    r3 = r2;
    r0 = r7 + 4;
    r7 = r5;
    r7 -= 0x8U;
    r3 -= 0x8U;
    r2 += 0x8U;
    r5 += 0x8U;
    stack[14] = r4; // [sp + 0x38]
    stack[6] = r5; // [sp + 0x18]
    stack[5] = r2; // [sp + 0x14]
    stack[3] = r3; // [sp + 0xC]
    stack[4] = r7; // [sp + 0x10]
    r1 = *(u32*)(r1 + 0x2C);
    r5 = 0x0874EA80U; // [0x080289C0]
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08028854
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080288EC(r0, r1, r2, r3);
    r2 = 0x8; // sp + 0x8
    r1 = 0x0U;
    r0 = *(u32*)(r5);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08028862
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080288B8(r0, r1, r2, r3);
    r0 = 0x36U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0802886C: BL 0x08000158
    r5 = 0x03001C34U; // [0x080289D8]
    r1 = r0;
    r0 = *(u32*)(r5);
    r0 = sub_0800EDF8(r0, r1, r2, r3); // 0x08028876
    r5 = *(u32*)(r5);
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0802887E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0802888A;
    r1 = 0x0804BE60U /* &VTable_0804BE60 */; // [0x080289DC]
    *(u32*)(r0) = (u32)r1;
loc_0802888A:
    r7 = r0;
    r1 = 0x0U;
    r0 = r5;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08028890
    r1 = r7;
    r0 = r5;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08028898
    r0 = 0x3U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0802889E
    return sub_080288A6(r0, r1, r2, r3);
    return sub_08028962(r0, r1, r2, r3);
}

// ROM Address: 0x08028962..0x080289BA (88 bytes, Thumb)
u32 sub_08028962(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x14);
    r0 += 0x1U;
    r2 = ((u32)((s32)r0 >> 2));
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = *(u32*)(r4 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08028972;
    return sub_080287EA(r0, r1, r2, r3);
loc_08028972:
    *(u32*)(r4 + 0x18) = (u32)r2;
    r0 = *(u16*)(r4 + 0xC);
    r2 = (r2 << 31);
    r2 = (r2 >> 31);
    r6 = (r2 << 1);
    r5 = 0x06010000U; // [0x080289E4]
    r6 = r6 + r2;
    r1 = *(u32*)(r4 + 0x48);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r6 = (r6 << 2);
    r1 = r1 + r6;
    r1 = *(u32*)(r1 + 0x8);
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0802898E: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x48);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 += 0x40U;
    r2 = 0x40U;
    r1 = *(u32*)(r1 + 0x20);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080289A0: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x48);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 += 0x80U;
    r1 = r1 + r6;
    r1 = *(u32*)(r1 + 0x2C);
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080289B4: BL 0x08049138
    return sub_080287EA(r0, r1, r2, r3);
}

// ROM Address: 0x080289E8..0x08028B7C (404 bytes, Thumb)
u32 sub_080289E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080289F2: BL __call_via_r3
    return r0;
    r1 = 0x0874EA80U; // [0x08028BFC]
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
    r7 = 0x0874EA80U; // [0x08028BFC]
    r5 = *(u8*)(r1 + 0x2);
    r6 = *(u8*)(r1 + 0x3);
    r7 += 0x34U;
    r7 = *(u32*)(r7 + 0x8);
    r5 = r4 + r5;
    r6 = r3 + r6;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08028ACE;
    r7 = 0x0874EA80U; // [0x08028BFC]
    r7 += 0x34U;
    r7 = *(u32*)(r7);
    cmp_lhs = (s32)r7; cmp_rhs = (s32)r5;
    if (cmp_lhs >= cmp_rhs) goto loc_08028ACE;
    r5 = 0x0874EA80U; // [0x08028BFC]
    r5 += 0x34U;
    r7 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08028ACE;
    r5 = *(u32*)(r5 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r6;
    if (cmp_lhs >= cmp_rhs) goto loc_08028ACE;
    r5 = *(u32*)(r2);
    r1 = *(u32*)(r1 + 0x4);
    r6 = 0xFE00FFFFU; // [0x08028C00]
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
loc_08028ACE:
    return r0; // BX lr
    r4 = r0;
    r0 = *(u32*)(r1);
    stack[6] = r0; // [sp + 0x18]
    r0 = *(u32*)(r4 + 0x40);
    r6 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 64;
    r7 = 0x18; // sp + 0x18
    if (cmp_lhs >= cmp_rhs) goto loc_08028AF8;
    r2 = 0x0874EA80U; // [0x08028BFC]
    r3 = 0x0U;
    r2 += 0xCU;
    stack[0] = r2; // [sp + 0x0]
    r2 = r7;
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_08028A24(r0, r1, r2, r3); // 0x08028AF4
loc_08028AF8:
    r0 = *(u32*)(r4 + 0x40);
    r1 = *(u32*)(r4 + 0x38);
    r2 = *(u32*)(r4 + 0x3C);
    r1 *= r0;
    r2 *= r0;
    stack[3] = r2; // [sp + 0xC]
    stack[5] = r2; // [sp + 0x14]
    r2 = 0x10; // sp + 0x10
    r0 = r1;
    stack[0] = r2; // [sp + 0x0]
    stack[2] = r1; // [sp + 0x8]
    r1 = 0x3U;
    r2 = r7;
    stack[4] = r0; // [sp + 0x10]
    r3 = 0x4U;
    r0 = r4;
    r0 = sub_08028A24(r0, r1, r2, r3); // 0x08028B18
    r0 = *(u32*)(r4 + 0x40);
    r5 = 0x0U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08028B50;
loc_08028B26:
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
    r0 = sub_08028A24(r0, r1, r2, r3); // 0x08028B42
    r0 = *(u32*)(r4 + 0x40);
    r5 += 0x8U;
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08028B26;
loc_08028B50:
    r0 = stack[6]; // [sp + 0x18]
    *(u32*)(r6) = (u32)r0;
    r0 = 0x0U;
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08028B7C(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs == cmp_rhs) return sub_08028BE6(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 12;
    if (cmp_lhs != cmp_rhs) return sub_08028BEA(r0, r1, r2, r3);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08028B72: BL __call_via_r3
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08028B7C..0x08028BEE (114 bytes, Thumb)
u32 sub_08028B7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r2 + 0x30);
    r5 = r2;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08028B88;
    r0 = 0x0U;
    return sub_08028B78(r0, r1, r2, r3);
loc_08028B88:
    r1 = *(u8*)(r5 + 0x14);
    r2 = *(u32*)(r0 + 0x44);
    r3 = 0x1U;
    r2 ^= r3;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08028B98;
    r0 = 0x0U;
    return sub_08028B78(r0, r1, r2, r3);
loc_08028B98:
    r1 = *(u32*)(r0 + 0x40);
    r2 = *(u32*)(r0 + 0x38);
    r3 = *(u32*)(r0 + 0x3C);
    r2 *= r1;
    r3 *= r1;
    r1 = r2;
    stack[1] = r2; // [sp + 0x4]
    r2 = r3;
    stack[2] = r3; // [sp + 0x8]
    r3 = *(u32*)(r0 + 0x20);
    r0 = *(u32*)(r0 + 0x24);
    r1 = r3 + r1;
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r2 = r0;
    r4 = r0;
    r0 = r5 + 4;
    stack[1] = r1; // [sp + 0x4]
    r3 = r1;
    r5 = *(u32*)(r5 + 0x4);
    r3 += 0xCU;
    r1 -= 0xCU;
    r4 += 0xCU;
    r2 -= 0xCU;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08028BE2;
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_08028BE2;
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r4;
    if (cmp_lhs >= cmp_rhs) goto loc_08028BE2;
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_08028BE2;
    r0 = 0x1U;
    return sub_08028B78(r0, r1, r2, r3);
loc_08028BE2:
    r0 = 0x0U;
    return sub_08028B78(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08028B78(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08028B78(r0, r1, r2, r3);
}

// ROM Address: 0x08028BEE..0x08028BF6 (8 bytes, Thumb)
u32 sub_08028BEE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) return sub_08028BF6(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08028BF6..0x08028BFA (4 bytes, Thumb)
u32 sub_08028BF6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08028C04..0x08028C06 (2 bytes, Thumb)
u32 sub_08028C04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x08028C06..0x08028C22 (28 bytes, Thumb)
u32 sub_08028C06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08028C22(r0, r1, r2, r3);
    r0 = 0x44U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08028C14: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08028C22(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08028C22..0x08028CCA (168 bytes, Thumb)
u32 sub_08028C22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08028E98]
    r7 = 0x0874EAC4U; // [0x08028E9C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0xC0U;
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = *(u32*)(r7);
    r1 = 0xC0U;
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08028C30
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08028C48;
    r1 = 0xC0U;
    r0 = *(u32*)(r7);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08028C3C: BL 0x08011732
    r1 = 0xC0U;
    r0 = *(u32*)(r7);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08028C44
loc_08028C48:
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x0804CDD4U /* &VTable_0804CDD4 */; // [0x08028EA0]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)(r4 + 0x1C) = (u32)r1;
    *(u32*)(r4 + 0x20) = (u32)r2;
    r1 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r1;
    r5 -= 0x8U;
    r1 = *(u32*)(r5 + 0x4);
    r0 = r4;
    r0 += 0x1CU;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r4 + 0x4) = (u32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08028C6C;
    r1 = *(u32*)(r5 + 0x4);
    r1 += 0x2CU;
    *(u32*)(r4 + 0x4) = (u32)r1;
loc_08028C6C:
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r4 + 0x40) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r4 + 0x14) = (u32)r1;
    *(u8*)(r4 + 0x10) = (u8)r1;
    r1 = 0x8U;
    *(u32*)(r4 + 0x34) = (u32)r1;
    r1 = 0x0U;
    r1 = ~r1;
    *(u32*)(r4 + 0x18) = (u32)r1;
    *(u32*)(r4 + 0x38) = (u32)r6;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 = *(u32*)(r4 + 0x38);
    r2 = 0x0874EFECU; // [0x08028EA4]
    r1 = (r0 << 1);
    r1 = r1 + r0;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r2 = 0x0874EAC4U; // [0x08028E9C]
    r0 = (r0 << 3);
    r2 += 0x8U;
    r0 = r0 + r2;
    *(u32*)(r4 + 0x3C) = (u32)r1;
    r2 = *(u32*)(r0);
    r0 = *(u32*)(r0 + 0x4);
    r5 = 0x06010000U; // [0x08028EA8]
    *(u32*)(r4 + 0x30) = (u32)r0;
    *(u32*)(r4 + 0x2C) = (u32)r2;
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r1 + 0x8);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r2 = 0x40U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08028CB0: BL 0x08049138
    r0 = *(u16*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x3C);
    r0 = (r0 << 5);
    r0 = r0 + r5;
    r0 += 0x40U;
    r2 = 0x80U;
    r1 = *(u32*)(r1 + 0x14);
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08028CC2: BL 0x08049138
    r0 = r4;
    return sub_08028C1E(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy18_stores_the_two_tables_and_frees_the_object
// ROM Address: 0x08028CCA..0x08028D1C (82 bytes, Thumb)
u32 Object_Destroy18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08028E98]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08028EAC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08028CE4;
    r0 = 0x0874EAC4U; // [0x08028E9C]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08028CE0
loc_08028CE4:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08028EB0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08028CF2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08028CEE: BL 0x0803D63C
loc_08028CF2:
    return r0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x10);
    r6 = 0x0874EAC4U; // [0x08028E9C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08028D1C(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08028D18;
    r0 = *(u32*)(r4 + 0x34);
    r0 -= 0x4U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_08028D18;
    r1 = r4;
    r0 = *(u32*)(r6);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08028D14
loc_08028D18:
    return r0;
}

// ROM Address: 0x08028D1C..0x08028DAE (146 bytes, Thumb)
u32 sub_08028D1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08028D18(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x34);
    r1 = *(u32*)(r4 + 0x2C);
    r2 = *(u32*)(r4 + 0x30);
    r1 *= r0;
    r2 *= r0;
    r0 = r1;
    stack[12] = r1; // [sp + 0x30]
    r1 = r2;
    stack[13] = r2; // [sp + 0x34]
    r2 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    r0 = r2 + r0;
    r2 = *(u32*)(r4 + 0x20);
    stack[12] = r0; // [sp + 0x30]
    r1 = r2 + r1;
    stack[13] = r1; // [sp + 0x34]
    r2 = stack[13]; // [sp + 0x34]
    r1 = r0;
    r0 = *(u32*)(r4 + 0x40);
    r5 = 0x4; // sp + 0x4
    stack[9] = r0; // [sp + 0x24]
    r0 = *(u32*)(r4 + 0x38);
    *(u8*)(r3 + 0x18) = (u8)r0;
    r0 = 0x086B8088U; // [0x08028EB4]
    r3 = 0x0U;
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x400U; // (1 << 10)
    stack[7] = r0; // [sp + 0x1C]
    r0 = r3;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = r5 + 4;
    r5 = r2;
    r3 = r1;
    r3 -= 0x8U;
    r1 += 0x8U;
    r5 -= 0x8U;
    r2 += 0x8U;
    stack[13] = r4; // [sp + 0x34]
    stack[5] = r2; // [sp + 0x14]
    stack[3] = r5; // [sp + 0xC]
    stack[4] = r1; // [sp + 0x10]
    stack[2] = r3; // [sp + 0x8]
    r1 = *(u32*)(r6 + 0x4);
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x08028D7E
    r5 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08028DAA;
    r2 = 0x4; // sp + 0x4
    r1 = 0x0U;
    r0 = *(u32*)(r6);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08028D8E
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08028D9A;
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_08028D18(r0, r1, r2, r3);
loc_08028D9A:
    r0 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r0; cmp_rhs = 80;
    if (cmp_lhs >= cmp_rhs) goto loc_08028DA6;
    r0 += 0x4U;
    *(u32*)(r4 + 0x34) = (u32)r0;
    return sub_08028D18(r0, r1, r2, r3);
loc_08028DA6:
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_08028D18(r0, r1, r2, r3);
loc_08028DAA:
    *(u8*)(r4 + 0x10) = (u8)r5;
    return sub_08028D18(r0, r1, r2, r3);
}
