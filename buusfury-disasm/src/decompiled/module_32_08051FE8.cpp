/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #32
 * Address Range: 0x08051FE8..0x080534A8 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08051FE8..0x08051FF8 (16 bytes, Thumb)
u32 sub_08051FE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08051FF8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051FF6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051FF2: BL 0x0803D63C
loc_08051FF6:
    return r0;
}

// ROM Address: 0x08051FF8..0x08051FFC (4 bytes, Thumb)
u32 sub_08051FF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051FFC..0x08052144 (328 bytes, Thumb)
u32 sub_08051FFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052028]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0805202C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052016;
    r0 = 0x0874F080U; // [0x08052030]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052012
loc_08052016:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052034]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052024;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052020: BL 0x0803D63C
loc_08052024:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = (r6 >> 1);
    return sub_080518E0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052064]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052068]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052052;
    r0 = 0x08725098U; // [0x0805206C]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805204E
loc_08052052:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052070]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052060;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805205C: BL 0x0803D63C
loc_08052060:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    *(u32*)(r3 + r2) = r0;
    r2 = (r6 >> 1);
    return sub_0805191C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080520A0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080520A4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805208E;
    r0 = 0x08757B64U; // [0x080520A8]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805208A
loc_0805208E:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080520AC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805209C;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052098: BL 0x0803D63C
loc_0805209C:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = *(u8*)(r4 + 0xD);
    r5 = (r6 >> 1);
    return sub_08051958(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080520DC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080520E0]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080520CA;
    r0 = 0x0874CB00U; // [0x080520E4]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080520C6
loc_080520CA:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080520E8]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080520D8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080520D4: BL 0x0803D63C
loc_080520D8:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = (r6 >> 1);
    return sub_08051994(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x0804C070U /* &VTable_0804C070 */; // [0x08052120]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r4 + 0x18);
    r0 = 0x0U;
    *(u32*)(r1 + 0x18) = (u32)r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052124]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052128]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052110;
    r0 = 0x08071C90U; // [0x0805212C]
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805210C
loc_08052110:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052130]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805211E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805211A: BL 0x0803D63C
loc_0805211E:
    return r0;
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r4 = (r0 >> 32);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r0 = r2 + 2;
    r7 = (r0 >> 32);
    return sub_080519DC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08052144]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052142;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805213E: BL 0x0803D63C
loc_08052142:
    return r0;
}

// ROM Address: 0x08052144..0x08052148 (4 bytes, Thumb)
u32 sub_08052144(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052148..0x08052182 (58 bytes, Thumb)
u32 sub_08052148(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08052150: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805215E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805215A: BL 0x0803D63C
loc_0805215E:
    return r0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x08052184]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08052172: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052180;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805217C: BL 0x0803D63C
loc_08052180:
    return r0;
}

// ROM Address: 0x08052182..0x08052186 (4 bytes, Thumb)
u32 sub_08052182(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_08051A10(r0, r1, r2, r3);
}

// ROM Address: 0x08052188..0x08052250 (200 bytes, Thumb)
u32 sub_08052188(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804C150U /* &VTable_0804C150 */; // [0x080521AC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0805219A: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080521A8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080521A4: BL 0x0803D63C
loc_080521A8:
    return r0;
    r0 = r0;
    *(u32*)r1 = r4; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080521B8: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080521C6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080521C2: BL 0x0803D63C
loc_080521C6:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080521D0: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080521DE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080521DA: BL 0x0803D63C
loc_080521DE:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080521E8: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080521F6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080521F2: BL 0x0803D63C
loc_080521F6:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052200: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805220E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805220A: BL 0x0803D63C
loc_0805220E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052218: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052226;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052222: BL 0x0803D63C
loc_08052226:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_0800D4D0(r0, r1, r2, r3); // 0x08052230: BL 0x0800D4D0
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805223E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805223A: BL 0x0803D63C
loc_0805223E:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08052250]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805224E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805224A: BL 0x0803D63C
loc_0805224E:
    return r0;
}

// ROM Address: 0x08052250..0x08052254 (4 bytes, Thumb)
u32 sub_08052250(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052254..0x08052264 (16 bytes, Thumb)
u32 sub_08052254(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08052264]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052262;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805225E: BL 0x0803D63C
loc_08052262:
    return r0;
}

// ROM Address: 0x08052264..0x08052268 (4 bytes, Thumb)
u32 sub_08052264(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052268..0x08052278 (16 bytes, Thumb)
u32 sub_08052268(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08052278]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052276;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052272: BL 0x0803D63C
loc_08052276:
    return r0;
}

// ROM Address: 0x08052278..0x0805227C (4 bytes, Thumb)
u32 sub_08052278(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0805227C..0x080524F4 (632 bytes, Thumb)
u32 sub_0805227C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08052284: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052292;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805228E: BL 0x0803D63C
loc_08052292:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x0805229C: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080522AA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080522A6: BL 0x0803D63C
loc_080522AA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080522B4: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080522C2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080522BE: BL 0x0803D63C
loc_080522C2:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080522CC: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080522DA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080522D6: BL 0x0803D63C
loc_080522DA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080522E4: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080522F2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080522EE: BL 0x0803D63C
loc_080522F2:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080522FC: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805230A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052306: BL 0x0803D63C
loc_0805230A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052314: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052322;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805231E: BL 0x0803D63C
loc_08052322:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x0805232C: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805233A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052336: BL 0x0803D63C
loc_0805233A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052344: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052352;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805234E: BL 0x0803D63C
loc_08052352:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052380]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052384]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805236E;
    r0 = 0x08071700U; // [0x08052388]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805236A
loc_0805236E:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0805238C]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805237C;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052378: BL 0x0803D63C
loc_0805237C:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r0 = ((u32)((s32)r0 >> 28));
    r7 = (r0 >> 32);
    return sub_08051C38(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080523BC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080523C0]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080523AA;
    r0 = 0x086F9EC4U; // [0x080523C4]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080523A6
loc_080523AA:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080523C8]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080523B8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080523B4: BL 0x0803D63C
loc_080523B8:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r6 = stack[196]; // [sp + 0x310]
    r7 = (r5 >> 1);
    return sub_08051C74(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r5 = r1;
    r1 = 0x0U;
    r4 = r0;
    r0 += 0x68U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080523D6: BL 0x0803F58C
    r1 = 0x0U;
    r0 = r4;
    r0 += 0x34U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x080523E0: BL 0x0803F58C
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052408]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0805240C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080523F8;
    r0 = 0x0874EA54U; // [0x08052410]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080523F4
loc_080523F8:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052414]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052406;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052402: BL 0x0803D63C
loc_08052406:
    return r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = (r6 >> 1);
    return sub_08051CC0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052444]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052448]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052432;
    r0 = 0x0871DD38U; // [0x0805244C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805242E
loc_08052432:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052450]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052440;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805243C: BL 0x0803D63C
loc_08052440:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    if (cmp_lhs <= cmp_rhs) goto loc_080524C0;
    r1 = (r6 >> 1);
    return sub_08051CFC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x0805245C: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805246A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052466: BL 0x0803D63C
loc_0805246A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08052474: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052482;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805247E: BL 0x0803D63C
loc_08052482:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x0805248C: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805249A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052496: BL 0x0803D63C
loc_0805249A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080524A4: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080524B2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080524AE: BL 0x0803D63C
loc_080524B2:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080524BC: BL 0x08034294
loc_080524C0:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080524CA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080524C6: BL 0x0803D63C
loc_080524CA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080524D4: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080524E2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080524DE: BL 0x0803D63C
loc_080524E2:
    return r0;
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x080524F4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080524F2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080524EE: BL 0x0803D63C
loc_080524F2:
    return r0;
}

// ROM Address: 0x080524F4..0x080524F8 (4 bytes, Thumb)
u32 sub_080524F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080524F8..0x08052508 (16 bytes, Thumb)
u32 sub_080524F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x08052508]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052506;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052502: BL 0x0803D63C
loc_08052506:
    return r0;
}

// ROM Address: 0x08052508..0x0805250C (4 bytes, Thumb)
u32 sub_08052508(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0805250C..0x08052534 (40 bytes, Thumb)
u32 sub_0805250C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052524;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08052520: BL __call_via_r3
loc_08052524:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052534]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052532;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805252E: BL 0x0803D63C
loc_08052532:
    return r0;
}

// ROM Address: 0x08052538..0x08052670 (312 bytes, Thumb)
u32 sub_08052538(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052564]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052568]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052552;
    r0 = 0x087196E0U; // [0x0805256C]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805254E
loc_08052552:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052570]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052560;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805255C: BL 0x0803D63C
loc_08052560:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    stack[224] = r6; // [sp + 0x380]
    r1 = (r6 >> 1);
    return sub_08051E1C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080525A0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080525A4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805258E;
    r0 = 0x087593CCU; // [0x080525A8]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805258A
loc_0805258E:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080525AC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805259C;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052598: BL 0x0803D63C
loc_0805259C:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    stack[204] = r3; // [sp + 0x330]
    r5 = (r6 >> 1);
    return sub_08051E58(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_0800EC34(r0, r1, r2, r3); // 0x080525B8: BL 0x0800EC34
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080525C6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080525C2: BL 0x0803D63C
loc_080525C6:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_0800EC34(r0, r1, r2, r3); // 0x080525D0: BL 0x0800EC34
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080525DE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080525DA: BL 0x0803D63C
loc_080525DE:
    return r0;
    r4 = r0;
    r0 += 0x1B0U;
    r0 = *(u32*)(r0);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080525FA;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080525F6: BL 0x08046AA2
loc_080525FA:
    r0 = 0xFFU;
    r0 += 0x8DU;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052610;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0805260C: BL __call_via_r3
loc_08052610:
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800EC34(r0, r1, r2, r3); // 0x08052614: BL 0x0800EC34
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052622;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805261E: BL 0x0803D63C
loc_08052622:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052650]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052654]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805263E;
    r0 = 0x087504CCU; // [0x08052658]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805263A
loc_0805263E:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0805265C]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805264C;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052648: BL 0x0803D63C
loc_0805264C:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = (r1 << 19);
    r5 = (r6 >> 1);
    return sub_08051F08(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08052670]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805266E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805266A: BL 0x0803D63C
loc_0805266E:
    return r0;
}

// ROM Address: 0x08052670..0x08052674 (4 bytes, Thumb)
u32 sub_08052670(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052674..0x080526C4 (80 bytes, Thumb)
u32 sub_08052674(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804CFB8U /* &VTable_0804CFB8 */; // [0x08052698]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08052686: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052694;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052690: BL 0x0803D63C
loc_08052694:
    return r0;
    r0 = r0;
    r3 = *(u32*)r7; r7 += 4;
    r4 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080526A4: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080526B2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080526AE: BL 0x0803D63C
loc_080526B2:
    return r0;
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x080526C4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080526C2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080526BE: BL 0x0803D63C
loc_080526C2:
    return r0;
}

// ROM Address: 0x080526C4..0x080526C8 (4 bytes, Thumb)
u32 sub_080526C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080526C8..0x080526D8 (16 bytes, Thumb)
u32 sub_080526C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x080526D8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080526D6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080526D2: BL 0x0803D63C
loc_080526D6:
    return r0;
}

// ROM Address: 0x080526D8..0x080526DC (4 bytes, Thumb)
u32 sub_080526D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080526DC..0x08052794 (184 bytes, Thumb)
u32 sub_080526DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 += 0x18CU;
    r0 = *(u32*)(r0);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080526F8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080526F4: BL __call_via_r3
loc_080526F8:
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800EC34(r0, r1, r2, r3); // 0x080526FC: BL 0x0800EC34
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805270A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052706: BL 0x0803D63C
loc_0805270A:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052738]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0805273C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052726;
    r0 = 0x087581ECU; // [0x08052740]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052722
loc_08052726:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052744]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052734;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052730: BL 0x0803D63C
loc_08052734:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    *(u16*)(r5 + 0xE) = (u16)r4;
    r5 = (r6 >> 1);
    return sub_08051FF0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052774]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052778]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052762;
    r0 = 0x0874EA48U; // [0x0805277C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805275E
loc_08052762:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052780]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052770;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805276C: BL 0x0803D63C
loc_08052770:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = (r6 >> 1);
    return sub_0805202C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08052794]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052792;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805278E: BL 0x0803D63C
loc_08052792:
    return r0;
}

// ROM Address: 0x08052794..0x08052798 (4 bytes, Thumb)
u32 sub_08052794(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052798..0x080527A8 (16 bytes, Thumb)
u32 sub_08052798(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x080527A8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080527A6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080527A2: BL 0x0803D63C
loc_080527A6:
    return r0;
}

// ROM Address: 0x080527A8..0x080527AC (4 bytes, Thumb)
u32 sub_080527A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080527AC..0x080527D4 (40 bytes, Thumb)
u32 sub_080527AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080527B4: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080527C2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080527BE: BL 0x0803D63C
loc_080527C2:
    return r0;
    r2 = 0x0804984CU /* &VTable_0804984C */; // [0x080527D4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080527D2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080527CE: BL 0x0803D63C
loc_080527D2:
    return r0;
}

// ROM Address: 0x080527D4..0x080527D8 (4 bytes, Thumb)
u32 sub_080527D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080527D8..0x08052830 (88 bytes, Thumb)
u32 sub_080527D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080527E0: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080527EE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080527EA: BL 0x0803D63C
loc_080527EE:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080527F8: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052806;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052802: BL 0x0803D63C
loc_08052806:
    return r0;
    r4 = r0;
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08052830]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052824;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08052820: BL __call_via_r3
loc_08052824:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805282E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805282A: BL 0x0803D63C
loc_0805282E:
    return r0;
}

// ROM Address: 0x08052830..0x08052834 (4 bytes, Thumb)
u32 sub_08052830(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052834..0x0805285C (40 bytes, Thumb)
u32 sub_08052834(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0805285C]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052850;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0805284C: BL __call_via_r3
loc_08052850:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805285A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052856: BL 0x0803D63C
loc_0805285A:
    return r0;
}

// ROM Address: 0x0805285C..0x08052860 (4 bytes, Thumb)
u32 sub_0805285C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052860..0x08052870 (16 bytes, Thumb)
u32 sub_08052860(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08052870]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805286E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805286A: BL 0x0803D63C
loc_0805286E:
    return r0;
}

// ROM Address: 0x08052870..0x08052874 (4 bytes, Thumb)
u32 sub_08052870(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052874..0x08052884 (16 bytes, Thumb)
u32 sub_08052874(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08052884]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052882;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805287E: BL 0x0803D63C
loc_08052882:
    return r0;
}

// ROM Address: 0x08052884..0x08052888 (4 bytes, Thumb)
u32 sub_08052884(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052888..0x08052A0C (388 bytes, Thumb)
u32 sub_08052888(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080528B4]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080528B8]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080528A2;
    r0 = 0x0874CF28U; // [0x080528BC]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805289E
loc_080528A2:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080528C0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080528B0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080528AC: BL 0x0803D63C
loc_080528B0:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r3 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r4 = (r6 >> 1);
    return sub_0805216C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080528F0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080528F4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080528DE;
    r0 = 0x08757B54U; // [0x080528F8]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080528DA
loc_080528DE:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080528FC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080528EC;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080528E8: BL 0x0803D63C
loc_080528EC:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = *(u8*)(r2 + 0xD);
    r5 = (r6 >> 1);
    return sub_080521A8(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0805292C]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052930]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805291A;
    r0 = 0x0874D03CU; // [0x08052934]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052916
loc_0805291A:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052938]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052928;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052924: BL 0x0803D63C
loc_08052928:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080529B0;
    r4 = (r6 >> 1);
    return sub_080521E4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052968]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0805296C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052956;
    r0 = 0x0874D248U; // [0x08052970]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052952
loc_08052956:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052974]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052964;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052960: BL 0x0803D63C
loc_08052964:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08052A04;
    r4 = (r6 >> 1);
    return sub_08052220(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080529A4]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080529A8]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052992;
    r0 = 0x0874CF28U; // [0x080529AC]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805298E
loc_08052992:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080529B0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080529A0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805299C: BL 0x0803D63C
loc_080529A0:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r3 = *(u32*)r7; r7 += 4;
    r5 = *(u32*)r7; r7 += 4;
    r4 = (r6 >> 1);
loc_080529B0:
    return sub_0805225C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080529BC: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080529CA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080529C6: BL 0x0803D63C
loc_080529CA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080529D4: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080529E2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080529DE: BL 0x0803D63C
loc_080529E2:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080529EC: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080529FA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080529F6: BL 0x0803D63C
loc_080529FA:
    return r0;
    r2 = 0x0804929CU /* &VTable_0804929C */; // [0x08052A0C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
loc_08052A04:
    if (cmp_lhs == cmp_rhs) goto loc_08052A0A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052A06: BL 0x0803D63C
loc_08052A0A:
    return r0;
}

// ROM Address: 0x08052A0C..0x08052A10 (4 bytes, Thumb)
u32 sub_08052A0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052A10..0x08052A20 (16 bytes, Thumb)
u32 sub_08052A10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08052A20]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052A1E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052A1A: BL 0x0803D63C
loc_08052A1E:
    return r0;
}

// ROM Address: 0x08052A20..0x08052A24 (4 bytes, Thumb)
u32 sub_08052A20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052A24..0x08052AF0 (204 bytes, Thumb)
u32 sub_08052A24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052A50]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052A54]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052A3E;
    r0 = 0x080724ECU; // [0x08052A58]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052A3A
loc_08052A3E:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052A5C]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052A4C;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052A48: BL 0x0803D63C
loc_08052A4C:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = 0xECU;
    r7 = (r0 >> 32);
    return sub_08052308(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052A8C]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052A90]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052A7A;
    r0 = 0x0874E9F8U; // [0x08052A94]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052A76
loc_08052A7A:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052A98]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052A88;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052A84: BL 0x0803D63C
loc_08052A88:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = (r6 >> 1);
    return sub_08052344(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r5 = r1;
    r1 = 0x0U;
    r4 = r0;
    r0 += 0x1CU;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08052AA6: BL 0x0803F58C
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052AD0]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052AD4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052ABE;
    r0 = 0x080724D4U; // [0x08052AD8]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052ABA
loc_08052ABE:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052ADC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052ACC;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052AC8: BL 0x0803D63C
loc_08052ACC:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = 0xD4U;
    r7 = (r0 >> 32);
    return sub_08052388(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08052AF0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052AEE;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052AEA: BL 0x0803D63C
loc_08052AEE:
    return r0;
}

// ROM Address: 0x08052AF0..0x08052AF4 (4 bytes, Thumb)
u32 sub_08052AF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052AF4..0x08052B1C (40 bytes, Thumb)
u32 sub_08052AF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08052AFC: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052B0A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052B06: BL 0x0803D63C
loc_08052B0A:
    return r0;
    r2 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052B1C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052B1A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052B16: BL 0x0803D63C
loc_08052B1A:
    return r0;
}

// ROM Address: 0x08052B1C..0x08052B1E (2 bytes, Thumb)
u32 sub_08052B1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080523C8(r0, r1, r2, r3);
}

// ROM Address: 0x08052B20..0x08052B58 (56 bytes, Thumb)
u32 sub_08052B20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804C9F0U /* &VTable_0804C9F0 */; // [0x08052B58]
    r5 = r1;
    r1 = 0x03001C34U; // [0x08052B5C]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x200U; // (1 << 9)
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r2 = r2 + r1;
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08052B40: BL __call_via_r3
    r1 = 0x0U;
    r0 = r4;
    r0 = Object_Destroy5(r0, r1, r2, r3); // 0x08052B48: BL 0x0800E6F8
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052B56;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052B52: BL 0x0803D63C
loc_08052B56:
    return r0;
}

// ROM Address: 0x08052B58..0x08052B60 (8 bytes, Thumb)
u32 sub_08052B58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)r1; r1 += 4;
    r5 = *(u32*)r1; r1 += 4;
    r6 = *(u32*)r1; r1 += 4;
    r7 = *(u32*)r1; r1 += 4;
    r4 = (r0 >> 32);
    r4 = r6;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08052B60..0x08052CE4 (388 bytes, Thumb)
u32 sub_08052B60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08010B80(r0, r1, r2, r3); // 0x08052B68
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052B76;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052B72: BL 0x0803D63C
loc_08052B76:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052B80: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052B8E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052B8A: BL 0x0803D63C
loc_08052B8E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052B98: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052BA6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052BA2: BL 0x0803D63C
loc_08052BA6:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052BB0: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052BBE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052BBA: BL 0x0803D63C
loc_08052BBE:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052BC8: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052BD6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052BD2: BL 0x0803D63C
loc_08052BD6:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052BE0: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052BEE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052BEA: BL 0x0803D63C
loc_08052BEE:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052BF8: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052C06;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052C02: BL 0x0803D63C
loc_08052C06:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052C10: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052C1E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052C1A: BL 0x0803D63C
loc_08052C1E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052C28: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052C36;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052C32: BL 0x0803D63C
loc_08052C36:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052C64]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052C68]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052C52;
    r0 = 0x0876E0DCU; // [0x08052C6C]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052C4E
loc_08052C52:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052C70]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052C60;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052C5C: BL 0x0803D63C
loc_08052C60:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    return sub_08052E28(r0, r1, r2, r3);
    r6 = (r6 >> 1);
    return sub_0805251C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08010B80(r0, r1, r2, r3); // 0x08052C7C
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052C8A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052C86: BL 0x0803D63C
loc_08052C8A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052C94: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052CA2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052C9E: BL 0x0803D63C
loc_08052CA2:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052CAC: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052CBA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052CB6: BL 0x0803D63C
loc_08052CBA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052CC4: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052CD2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052CCE: BL 0x0803D63C
loc_08052CD2:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08052CE4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052CE2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052CDE: BL 0x0803D63C
loc_08052CE2:
    return r0;
}

// ROM Address: 0x08052CE4..0x08052CE8 (4 bytes, Thumb)
u32 sub_08052CE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052CE8..0x08052D10 (40 bytes, Thumb)
u32 sub_08052CE8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052D00;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08052CFC: BL __call_via_r3
loc_08052D00:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052D10]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052D0E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052D0A: BL 0x0803D63C
loc_08052D0E:
    return r0;
}

// ROM Address: 0x08052D10..0x08052D12 (2 bytes, Thumb)
u32 sub_08052D10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080525BC(r0, r1, r2, r3);
}

// ROM Address: 0x08052D14..0x08052DF0 (220 bytes, Thumb)
u32 sub_08052D14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08052D1C: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052D2A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052D26: BL 0x0803D63C
loc_08052D2A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052D34: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052D42;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052D3E: BL 0x0803D63C
loc_08052D42:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052D4C: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052D5A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052D56: BL 0x0803D63C
loc_08052D5A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052D64: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052D72;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052D6E: BL 0x0803D63C
loc_08052D72:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052DA0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052DA4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052D8E;
    r0 = 0x0872BF94U; // [0x08052DA8]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052D8A
loc_08052D8E:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052DAC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052D9C;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052D98: BL 0x0803D63C
loc_08052D9C:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r2 = (r6 >> 1);
    return sub_08052658(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08010B80(r0, r1, r2, r3); // 0x08052DB8
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052DC6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052DC2: BL 0x0803D63C
loc_08052DC6:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08052DD0: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052DDE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052DDA: BL 0x0803D63C
loc_08052DDE:
    return r0;
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x08052DF0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052DEE;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052DEA: BL 0x0803D63C
loc_08052DEE:
    return r0;
}

// ROM Address: 0x08052DF0..0x08052DF4 (4 bytes, Thumb)
u32 sub_08052DF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052DF4..0x08052E1C (40 bytes, Thumb)
u32 sub_08052DF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052E0C;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08052E08: BL __call_via_r3
loc_08052E0C:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052E1C]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052E1A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052E16: BL 0x0803D63C
loc_08052E1A:
    return r0;
}

// ROM Address: 0x08052E1C..0x08052E1E (2 bytes, Thumb)
u32 sub_08052E1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_080526C8(r0, r1, r2, r3);
}

// ROM Address: 0x08052E20..0x08052E30 (16 bytes, Thumb)
u32 sub_08052E20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0804984CU /* &VTable_0804984C */; // [0x08052E30]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052E2E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052E2A: BL 0x0803D63C
loc_08052E2E:
    return r0;
}

// ROM Address: 0x08052E30..0x08052E34 (4 bytes, Thumb)
u32 sub_08052E30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052E34..0x08052E44 (16 bytes, Thumb)
u32 sub_08052E34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0804929CU /* &VTable_0804929C */; // [0x08052E44]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052E42;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052E3E: BL 0x0803D63C
loc_08052E42:
    return r0;
}

// ROM Address: 0x08052E44..0x08052E48 (4 bytes, Thumb)
u32 sub_08052E44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052E48..0x08052E70 (40 bytes, Thumb)
u32 sub_08052E48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_0802573C(r0, r1, r2, r3); // 0x08052E50
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052E5E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052E5A: BL 0x0803D63C
loc_08052E5E:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08052E70]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08052E6E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052E6A: BL 0x0803D63C
loc_08052E6E:
    return r0;
}

// ROM Address: 0x08052E70..0x08052E74 (4 bytes, Thumb)
u32 sub_08052E70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08052E74..0x08052EC4 (80 bytes, Thumb)
u32 sub_08052E74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08052EA0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08052EA4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052E8E;
    r0 = 0x0872BF94U; // [0x08052EA8]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08052E8A
loc_08052E8E:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052EAC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08052E9C;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08052E98: BL 0x0803D63C
loc_08052E9C:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r2 = (r6 >> 1);
    return sub_08052758(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x0804E444U /* &VTable_0804E444 */; // [0x08052EC4]
    *(u32*)(r0) = (u32)r1;
    r0 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08052EBE: BL 0x08046AA2
    return r0;
}

// ROM Address: 0x08052EC4..0x08052EC6 (2 bytes, Thumb)
u32 sub_08052EC4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08052750(r0, r1, r2, r3);
}

// ROM Address: 0x08052EC6..0x08052ECE (8 bytes, Thumb)
u32 sub_08052EC6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0804E454U /* &VTable_0804E454 */; // [0x08052ED0]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x08052ED2..0x08052EDA (8 bytes, Thumb)
u32 sub_08052ED2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0804E47CU; // [0x08052EDC]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
}

// ROM Address: 0x08052EDA..0x08052EDE (4 bytes, Thumb)
u32 sub_08052EDA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_080527D8(r0, r1, r2, r3);
}

// ROM Address: 0x08052EDE..0x08052EF8 (26 bytes, Thumb)
u32 sub_08052EDE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r1);
    r0 = *(u8*)(r2 + 0x8);
    r1 = *(u8*)(r3 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08052EFC(r0, r1, r2, r3);
    r0 = *(u32*)(r2 + 0x4);
    r1 = *(u32*)(r3 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08052EF8(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08052EF8..0x08052EFC (4 bytes, Thumb)
u32 sub_08052EF8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08052EFC..0x08052F04 (8 bytes, Thumb)
u32 sub_08052EFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08052F04(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08052F04..0x08052F08 (4 bytes, Thumb)
u32 sub_08052F04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08052F08..0x08053014 (268 bytes, Thumb)
u32 sub_08052F08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r1);
    r6 = *(u32*)(r2);
    r12 = r5;
    r5 *= r6;
    lr = r6;
    r6 = *(u32*)(r1 + 0x4);
    stack[3] = r6; // [sp + 0xC]
    r3 = *(u32*)(r2 + 0x4);
    r7 = lr;
    stack[2] = r3; // [sp + 0x8]
    r6 *= r3;
    r3 = *(u32*)(r1 + 0x8);
    r5 = r5 - r6;
    r4 = *(u32*)(r2 + 0x8);
    r6 = r3;
    r6 *= r4;
    r1 = *(u32*)(r1 + 0xC);
    r2 = *(u32*)(r2 + 0xC);
    r5 = r5 - r6;
    r6 = r1;
    r6 *= r2;
    r5 = r5 - r6;
    r6 = 0x4000U; // (1 << 14)
    r5 = r5 + r6;
    r5 = ((u32)((s32)r5 >> 15));
    stack[0] = r5; // [sp + 0x0]
    r6 = stack[2]; // [sp + 0x8]
    r5 = r12;
    r5 *= r6;
    r6 = stack[3]; // [sp + 0xC]
    r6 *= r7;
    r5 = r5 + r6;
    r6 = r3;
    r6 *= r2;
    r5 = r5 + r6;
    r6 = r1;
    r6 *= r4;
    r5 = r5 - r6;
    r6 = 0x4000U; // (1 << 14)
    r5 = r5 + r6;
    r5 = ((u32)((s32)r5 >> 15));
    stack[1] = r5; // [sp + 0x4]
    r6 = lr;
    r7 = r3;
    r5 = r12;
    r7 *= r6;
    r5 *= r4;
    r5 = r5 + r7;
    r6 = stack[2]; // [sp + 0x8]
    r7 = r1;
    r7 *= r6;
    r5 = r5 + r7;
    r6 = stack[3]; // [sp + 0xC]
    r7 = lr;
    r6 *= r2;
    r5 = r5 - r6;
    r6 = 0x4000U; // (1 << 14)
    r5 = r5 + r6;
    r6 = r12;
    r6 *= r2;
    r1 *= r7;
    r1 = r6 + r1;
    r6 = stack[3]; // [sp + 0xC]
    r2 = stack[0]; // [sp + 0x0]
    r6 *= r4;
    r1 = r1 + r6;
    r6 = stack[2]; // [sp + 0x8]
    *(u32*)(r0) = (u32)r2;
    r3 *= r6;
    r1 = r1 - r3;
    r6 = 0x4000U; // (1 << 14)
    r1 = r1 + r6;
    r1 = ((u32)((s32)r1 >> 15));
    r3 = stack[1]; // [sp + 0x4]
    *(u32*)(r0 + 0xC) = (u32)r1;
    r5 = ((u32)((s32)r5 >> 15));
    r0 += 0x4U;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    return r0;
    r3 = *(u32*)(r1);
    r1 = *(u32*)(r1 + 0x4);
    r4 = *(u32*)(r2);
    r2 = *(u32*)(r2 + 0x4);
    r3 = r3 + r4;
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    r2 = stack[1]; // [sp + 0x4]
    stack[0] = r3; // [sp + 0x0]
    *(u32*)(r0 + 0x4) = (u32)r2;
    *(u32*)(r0) = (u32)r3;
    return r0; // BX lr
    r3 = *(u32*)(r1);
    r4 = *(u32*)(r2);
    r3 = r3 + r4;
    r4 = *(u32*)(r1 + 0x4);
    r5 = *(u32*)(r2 + 0x4);
    stack[0] = r3; // [sp + 0x0]
    r4 = r4 + r5;
    stack[1] = r4; // [sp + 0x4]
    r1 += 0x8U;
    r5 = *(u32*)(r1);
    r6 = *(u32*)(r2);
    r1 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r2 + 0x4);
    r5 = r5 + r6;
    r1 = r1 + r2;
    stack[1] = r1; // [sp + 0x4]
    r2 = stack[1]; // [sp + 0x4]
    stack[3] = r4; // [sp + 0xC]
    r4 = 0x8; // sp + 0x8
    stack[0] = r5; // [sp + 0x0]
    stack[4] = r5; // [sp + 0x10]
    stack[2] = r3; // [sp + 0x8]
    stack[5] = r2; // [sp + 0x14]
    r1 = *(u32*)r4; r4 += 4;
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    return r0; // BX lr
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08053014..0x08053034 (32 bytes, ARM32)
u32 sub_08053014(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08053014: ARM 0xE59F3014 */
    /* 0x08053018: ARM 0xE1A02FC0 */
    /* 0x0805301C: ARM 0xE0C1C093 */
    /* 0x08053020: ARM 0xE3E03009 */
    /* 0x08053024: ARM 0xE0621141 */
    /* 0x08053028: ARM 0xE0200193 */
    return r0; // 0x0805302C: BX lr
    /* 0x08053030: ARM 0x66666667 */
    return r0;
}

// ROM Address: 0x08053034..0x08053038 (4 bytes, Thumb)
u32 sub_08053034(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08053038..0x08053058 (32 bytes, ARM32)
u32 sub_08053038(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08053038: ARM 0xE59F3014 */
    /* 0x0805303C: ARM 0xE1A02FC0 */
    /* 0x08053040: ARM 0xE0C1C093 */
    /* 0x08053044: ARM 0xE3E03063 */
    /* 0x08053048: ARM 0xE06212C1 */
    /* 0x0805304C: ARM 0xE0200193 */
    return r0; // 0x08053050: BX lr
    /* 0x08053054: ARM 0x51EB851F */
    return r0;
}

// ROM Address: 0x08053058..0x0805305C (4 bytes, Thumb)
u32 sub_08053058(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x0805305C..0x08053080 (36 bytes, ARM32)
u32 sub_0805305C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x0805305C: ARM 0xE59F3014 */
    /* 0x08053060: ARM 0xE1A02FC0 */
    /* 0x08053064: ARM 0xE0C1C093 */
    /* 0x08053068: ARM 0xE59F300C */
    /* 0x0805306C: ARM 0xE0621341 */
    /* 0x08053070: ARM 0xE0200193 */
    return r0; // 0x08053074: BX lr
    /* 0x08053078: ARM 0x10624DD3 */
    /* 0x0805307C: ARM 0xFFFFFC18 */
    return r0;
}

// ROM Address: 0x08053080..0x08053084 (4 bytes, Thumb)
u32 sub_08053080(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08053084..0x080530A4 (32 bytes, ARM32)
u32 sub_08053084(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08053084: ARM 0xE59F3014 */
    /* 0x08053088: ARM 0xE1A02FC0 */
    /* 0x0805308C: ARM 0xE0C1C093 */
    /* 0x08053090: ARM 0xE3E0300B */
    /* 0x08053094: ARM 0xE06210C1 */
    /* 0x08053098: ARM 0xE0200193 */
    return r0; // 0x0805309C: BX lr
    /* 0x080530A0: ARM 0x2AAAAAAB */
    return r0;
}

// ROM Address: 0x080530A4..0x080530A8 (4 bytes, Thumb)
u32 sub_080530A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x080530A8..0x080530C8 (32 bytes, ARM32)
u32 sub_080530A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x080530A8: ARM 0xE59F3014 */
    /* 0x080530AC: ARM 0xE1A02FC0 */
    /* 0x080530B0: ARM 0xE0C1C093 */
    /* 0x080530B4: ARM 0xE3E03002 */
    /* 0x080530B8: ARM 0xE0621001 */
    /* 0x080530BC: ARM 0xE0200193 */
    return r0; // 0x080530C0: BX lr
    /* 0x080530C4: ARM 0x55555556 */
    return r0;
}

// ROM Address: 0x080530C8..0x080530CC (4 bytes, Thumb)
u32 sub_080530C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x080530CC..0x080530EC (32 bytes, ARM32)
u32 sub_080530CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x080530CC: ARM 0xE59F3018 */
    /* 0x080530D0: ARM 0xE1A02FC0 */
    /* 0x080530D4: ARM 0xE0C1C093 */
    /* 0x080530D8: ARM 0xE59F3010 */
    /* 0x080530DC: ARM 0xE0811000 */
    /* 0x080530E0: ARM 0xE06215C1 */
    /* 0x080530E4: ARM 0xE0200193 */
    return r0; // 0x080530E8: BX lr
    return r0;
}

// ROM Address: 0x080530EE..0x080530F8 (10 bytes, Thumb)
u32 sub_080530EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[162] = r1; // [sp + 0x288]
    r0 = sub_082440F2(r0, r1, r2, r3); // 0x080530F0
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x080530F8..0x0805311C (36 bytes, ARM32)
u32 sub_080530F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x080530F8: ARM 0xE59F3018 */
    /* 0x080530FC: ARM 0xE1A02FC0 */
    /* 0x08053100: ARM 0xE0C1C093 */
    /* 0x08053104: ARM 0xE3E0303B */
    /* 0x08053108: ARM 0xE0811000 */
    /* 0x0805310C: ARM 0xE06212C1 */
    /* 0x08053110: ARM 0xE0200193 */
    return r0; // 0x08053114: BX lr
    /* 0x08053118: ARM 0x88888889 */
    return r0;
}

// ROM Address: 0x0805311C..0x08053120 (4 bytes, Thumb)
u32 sub_0805311C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08053120..0x0805313C (28 bytes, ARM32)
u32 sub_08053120(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08053120: ARM 0xE59F3010 */
    /* 0x08053124: ARM 0xE0821093 */
    /* 0x08053128: ARM 0xE3E03009 */
    /* 0x0805312C: ARM 0xE1A011A2 */
    /* 0x08053130: ARM 0xE0200193 */
    return r0; // 0x08053134: BX lr
    /* 0x08053138: ARM 0xCCCCCCCD */
    return r0;
}

// ROM Address: 0x0805313C..0x08053140 (4 bytes, Thumb)
u32 sub_0805313C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08053140..0x0805315C (28 bytes, ARM32)
u32 sub_08053140(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08053140: ARM 0xE59F3010 */
    /* 0x08053144: ARM 0xE0821093 */
    /* 0x08053148: ARM 0xE3E0303B */
    /* 0x0805314C: ARM 0xE1A012A2 */
    /* 0x08053150: ARM 0xE0200193 */
    return r0; // 0x08053154: BX lr
    /* 0x08053158: ARM 0x88888889 */
    return r0;
}

// ROM Address: 0x0805315C..0x08053160 (4 bytes, Thumb)
u32 sub_0805315C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08053160..0x08053178 (24 bytes, ARM32)
u32 sub_08053160(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08053160: ARM 0xE59F3010 */
    /* 0x08053164: ARM 0xE0821093 */
    /* 0x08053168: ARM 0xE59F300C */
    /* 0x0805316C: ARM 0xE1A013A2 */
    /* 0x08053170: ARM 0xE0200193 */
    return r0; // 0x08053174: BX lr
    return r0;
}

// ROM/IWRAM Address: 0x08053184..0x080531A4 (32 bytes, ARM32)
u32 sub_08053184(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08053184: ARM 0xE59F3010 */
    /* 0x08053188: ARM 0xE0821093 */
    /* 0x0805318C: ARM 0xE59F300C */
    /* 0x08053190: ARM 0xE1A017A2 */
    /* 0x08053194: ARM 0xE0200193 */
    return r0; // 0x08053198: BX lr
    /* 0x0805319C: ARM 0x80078071 */
    /* 0x080531A0: ARM 0xFFFF000F */
    return r0;
}

// ROM Address: 0x080531A4..0x08053238 (148 bytes, Thumb)
u32 sub_080531A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r7 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080531FC;
    r0 = r7 - r5;
    r0 = ((u32)((s32)r0 >> 3));
    r0 = (r0 << 2);
    r4 = r0 + r5;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_080531E8;
    r1 = r5;
    r0 = r4;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x080531BE
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080531CE;
    r1 = *(u32*)(r4);
    r0 = *(u32*)(r5);
    *(u32*)(r5) = (u32)r1;
    *(u32*)(r4) = (u32)r0;
loc_080531CE:
    r1 = r7;
    r0 = r5;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x080531D2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080531E2;
    r1 = *(u32*)(r7);
    r0 = *(u32*)(r5);
    *(u32*)(r5) = (u32)r1;
    *(u32*)(r7) = (u32)r0;
loc_080531E2:
    r6 = r5;
    r4 = r7;
    goto loc_080531FE;
loc_080531E8:
    r1 = r7;
    r0 = r5;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x080531EC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080531FC;
    r1 = *(u32*)(r7);
    r0 = *(u32*)(r5);
    *(u32*)(r5) = (u32)r1;
    *(u32*)(r7) = (u32)r0;
loc_080531FC:
    return r0;
loc_080531FE:
    r1 = r5;
    r0 = r4;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x08053202
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08053218;
loc_0805320A:
    r4 -= 0x4U;
    r1 = r5;
    r0 = r4;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x08053210
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0805320A;
loc_08053218:
    r6 += 0x4U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_08053238(r0, r1, r2, r3);
    r1 = r6;
    r0 = r5;
    r0 = sub_08052EE0(r0, r1, r2, r3); // 0x08053222
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08053218;
    r0 = r4;
    r2 = *(u32*)(r0);
    r1 = *(u32*)(r6);
    *(u32*)(r6) = (u32)r2;
    *(u32*)(r0) = (u32)r1;
    r4 -= 0x4U;
    goto loc_080531FE;
    return r0;
}

// ROM Address: 0x08053238..0x0805324E (22 bytes, Thumb)
u32 sub_08053238(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = *(u32*)(r5);
    *(u32*)(r5) = (u32)r1;
    *(u32*)(r4) = (u32)r0;
    r1 = r4 - 4;
    r0 = r5;
    r0 = sub_080531A4(r0, r1, r2, r3); // 0x08053244: BL 0x080531A4
    r1 = r7;
    r0 = r4 + 4;
    return sub_080531A6(r0, r1, r2, r3);
}

// ROM Address: 0x0805324E..0x080532E4 (150 bytes, Thumb)
u32 sub_0805324E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r5 = r2;
    r4 = r1;
    r6 = sp;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    *(u32*)r6 = r5; r6 += 4;
    r2 = stack[0]; // [sp + 0x0]
    r1 = *(u32*)(r4);
    r6 -= 0x10U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0805326A;
    stack[0] = r1; // [sp + 0x0]
loc_0805326A:
    r2 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08053274;
    stack[1] = r1; // [sp + 0x4]
loc_08053274:
    r2 = stack[2]; // [sp + 0x8]
    r1 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0805327E;
    stack[2] = r1; // [sp + 0x8]
loc_0805327E:
    r1 = stack[3]; // [sp + 0xC]
    r2 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_08053288;
    stack[3] = r2; // [sp + 0xC]
loc_08053288:
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    r3 = *(u32*)r6; r6 += 4;
    r6 = *(u32*)r6; r6 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    return r0; // BX lr
    r0 = r0;
    r3 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0805329E;
    *(u32*)(r0) = (u32)r2;
loc_0805329E:
    r3 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_080532A8;
    *(u32*)(r0 + 0x4) = (u32)r2;
loc_080532A8:
    r3 = *(u32*)(r0 + 0x8);
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080532B2;
    *(u32*)(r0 + 0x8) = (u32)r2;
loc_080532B2:
    r2 = *(u32*)(r0 + 0xC);
    r1 = *(u32*)(r1 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080532BC;
    *(u32*)(r0 + 0xC) = (u32)r1;
loc_080532BC:
    return r0; // BX lr
    r0 = r0;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_080532E4(r0, r1, r2, r3);
    r2 = *(u32*)(r1);
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_080532E4(r0, r1, r2, r3);
    r2 = *(u32*)(r0 + 0x4);
    r3 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) return sub_080532E4(r0, r1, r2, r3);
    r1 = *(u32*)(r1 + 0x4);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) return sub_080532E4(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080532E4..0x080532E8 (4 bytes, Thumb)
u32 sub_080532E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080532E8..0x080532EC (4 bytes, Thumb)
u32 sub_080532E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x080532EC..0x08053334 (72 bytes, ARM32)
u32 sub_080532EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x080532EC: ARM 0xE2013480 */
    /* 0x080532F0: ARM 0xE3C11480 */
    /* 0x080532F4: ARM 0xE0212081 */
    /* 0x080532F8: ARM 0xE312047F */
    /* 0x080532FC: ARM 0x031208E0 */
    /* 0x08053300: ARM 0x0A00002F */
    /* 0x08053304: ARM 0xE3A0C4C0 */
    /* 0x08053308: ARM 0xE1B02200 */
    /* 0x0805330C: ARM 0x8A000005 */
    /* 0x08053310: ARM 0x2A000001 */
    /* 0x08053314: ARM 0x03A0C000 */
    /* 0x08053318: ARM 0xEA000005 */
    /* 0x0805331C: ARM 0xE2002580 */
    /* 0x08053320: ARM 0xE09CC102 */
    /* 0x08053324: ARM 0x4A000002 */
    /* 0x08053328: ARM 0xE3A0C440 */
    /* 0x0805332C: ARM 0xE2900580 */
    /* 0x08053330: ARM 0xE2A11000 */
    return r0;
}

// ROM Address: 0x08053334..0x08053336 (2 bytes, Thumb)
u32 sub_08053334(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = ((u32)((s32)r4 >> 23));
    return r0;
}

// ROM Address: 0x080534A0..0x080534A8 (8 bytes, Thumb)
u32 sub_080534A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r1 << 2);
    r0 = (r0 << 16);
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x080534A8..0x08053694 (492 bytes, ARM32)
u32 sub_080534A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x080534A8: ARM 0xE92D4010 */
    /* 0x080534AC: ARM 0xE59FC48C */
    /* 0x080534B0: ARM 0xE1DC4081 */
    /* 0x080534B4: ARM 0x11DC4083 */
    /* 0x080534B8: ARM 0x0A000059 */
    /* 0x080534BC: ARM 0xE1310003 */
    /* 0x080534C0: ARM 0x42233480 */
    /* 0x080534C4: ARM 0x4A00008D */
    /* 0x080534C8: ARM 0xE0504002 */
    /* 0x080534CC: ARM 0xE0D1E003 */
    /* 0x080534D0: ARM 0x2A000003 */
    /* 0x080534D4: ARM 0xE0922004 */
    /* 0x080534D8: ARM 0xE0A3300E */
    /* 0x080534DC: ARM 0xE0500004 */
    /* 0x080534E0: ARM 0xE0C1100E */
    /* 0x080534E4: ARM 0xE1A04A21 */
    /* 0x080534E8: ARM 0xE044EA23 */
    /* 0x080534EC: ARM 0xE11C0083 */
    /* 0x080534F0: ARM 0x0A000038 */
    /* 0x080534F4: ARM 0xE1C11A04 */
    /* 0x080534F8: ARM 0xE1C3300C */
    /* 0x080534FC: ARM 0xE3833940 */
    /* 0x08053500: ARM 0xE27EC020 */
    /* 0x08053504: ARM 0x3A000015 */
    /* 0x08053508: ARM 0xE0900E32 */
    /* 0x0805350C: ARM 0xE0A11E33 */
    /* 0x08053510: ARM 0xE0900C13 */
    /* 0x08053514: ARM 0xE2B11000 */
    /* 0x08053518: ARM 0xE3510940 */
    /* 0x0805351C: ARM 0x2A000019 */
    /* 0x08053520: ARM 0xE0811A04 */
    /* 0x08053524: ARM 0xE8BD4010 */
    /* 0x08053528: ARM 0xE1B02C12 */
    /* 0x0805352C: ARM 0x512FFF1E */
    /* 0x08053530: ARM 0xE2900001 */
    /* 0x08053534: ARM 0x31B02082 */
    /* 0x08053538: ARM 0x112FFF1E */
    /* 0x0805353C: ARM 0xE3500000 */
    /* 0x08053540: ARM 0x13C00001 */
    /* 0x08053544: ARM 0x02A11000 */
    /* 0x08053548: ARM 0xE1A03081 */
    /* 0x0805354C: ARM 0xE3730980 */
    /* 0x08053550: ARM 0x312FFF1E */
    /* 0x08053554: ARM 0xE59FC3E8 */
    /* 0x08053558: ARM 0x22411460 */
    /* 0x0805355C: ARM 0xEA0004BB */
    /* 0x08053560: ARM 0xE3520001 */
    /* 0x08053564: ARM 0xE0A32003 */
    /* 0x08053568: ARM 0xE24EE020 */
    /* 0x0805356C: ARM 0xE27EC01F */
    /* 0x08053570: ARM 0x33A0C000 */
    /* 0x08053574: ARM 0x20900E33 */
    /* 0x08053578: ARM 0xE0A11A04 */
    /* 0x0805357C: ARM 0xE1540A21 */
    /* 0x08053580: ARM 0x0AFFFFE7 */
    /* 0x08053584: ARM 0xE0411A04 */
    /* 0x08053588: ARM 0xE2811940 */
    /* 0x0805358C: ARM 0xE1B010A1 */
    /* 0x08053590: ARM 0xE0811A04 */
    /* 0x08053594: ARM 0xE8BD4010 */
    /* 0x08053598: ARM 0xE1B00060 */
    /* 0x0805359C: ARM 0x3A000007 */
    /* 0x080535A0: ARM 0xE2B00000 */
    /* 0x080535A4: ARM 0x31B0CC12 */
    /* 0x080535A8: ARM 0x1A000004 */
    /* 0x080535AC: ARM 0xEAFFFFE2 */
    /* 0x080535B0: ARM 0xE2900001 */
    /* 0x080535B4: ARM 0x31B02082 */
    /* 0x080535B8: ARM 0x1AFFFFE2 */
    /* 0x080535BC: ARM 0xEAFFFFDE */
    /* 0x080535C0: ARM 0xE1A03081 */
    /* 0x080535C4: ARM 0xE3730980 */
    /* 0x080535C8: ARM 0x312FFF1E */
    /* 0x080535CC: ARM 0xE59FC370 */
    /* 0x080535D0: ARM 0xE2411460 */
    /* 0x080535D4: ARM 0xEA00049D */
    /* 0x080535D8: ARM 0xE192C083 */
    /* 0x080535DC: ARM 0x0A000009 */
    /* 0x080535E0: ARM 0xE1B0CA84 */
    /* 0x080535E4: ARM 0xE1C11A04 */
    /* 0x080535E8: ARM 0x13C33480 */
    /* 0x080535EC: ARM 0x124EE001 */
    /* 0x080535F0: ARM 0x1AFFFFC2 */
    /* 0x080535F4: ARM 0xE8BD4010 */
    /* 0x080535F8: ARM 0xE0900002 */
    /* 0x080535FC: ARM 0xE0A11003 */
    /* 0x08053600: ARM 0xE3A0C011 */
    /* 0x08053604: ARM 0xEA0000AB */
    /* 0x08053608: ARM 0xE1B0CA84 */
    /* 0x0805360C: ARM 0xE8BD4010 */
    /* 0x08053610: ARM 0x112FFF1E */
    /* 0x08053614: ARM 0xE190C081 */
    /* 0x08053618: ARM 0x012FFF1E */
    /* 0x0805361C: ARM 0xE3A0C011 */
    /* 0x08053620: ARM 0xEA0000A4 */
    /* 0x08053624: ARM 0xE3500001 */
    /* 0x08053628: ARM 0xE0A14001 */
    /* 0x0805362C: ARM 0xE3520001 */
    /* 0x08053630: ARM 0xE0A3E003 */
    /* 0x08053634: ARM 0xE154000C */
    /* 0x08053638: ARM 0x915E000C */
    /* 0x0805363C: ARM 0xE59FC304 */
    /* 0x08053640: ARM 0xE8BD4010 */
    /* 0x08053644: ARM 0x8A0000C2 */
    /* 0x08053648: ARM 0xEAFFFFFF */
    /* 0x0805364C: ARM 0xE3500001 */
    /* 0x08053650: ARM 0xE0A10001 */
    /* 0x08053654: ARM 0xE3520001 */
    /* 0x08053658: ARM 0xE0A32003 */
    /* 0x0805365C: ARM 0xE1500002 */
    /* 0x08053660: ARM 0x0A000005 */
    /* 0x08053664: ARM 0xE3700980 */
    /* 0x08053668: ARM 0x03A00000 */
    /* 0x0805366C: ARM 0x012FFF1E */
    /* 0x08053670: ARM 0xE1A01003 */
    /* 0x08053674: ARM 0xE3A00000 */
    return r0; // 0x08053678: BX lr
    /* 0x0805367C: ARM 0xE3A00000 */
    /* 0x08053680: ARM 0xE1310003 */
    /* 0x08053684: ARM 0x512FFF1E */
    /* 0x08053688: ARM 0xE3A02000 */
    /* 0x0805368C: ARM 0xE59FC2B4 */
    /* 0x08053690: ARM 0xEA00046E */
    return r0;
}
