/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #31
 * Address Range: 0x08050F86..0x08051FE4 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08050F86..0x0805107C (246 bytes, Thumb)
u32 sub_08050F86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x080493E4U /* &VTable_080493E4 */; // [0x08050F90]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    r1 = 0x080493E4U /* &VTable_080493E4 */; // [0x08050F9C]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08050FCC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08050FD0]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08050FBA;
    r0 = 0x0874E200U; // [0x08050FD4]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08050FB6
loc_08050FBA:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08050FD8]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08050FC8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08050FC4: BL 0x0803D63C
loc_08050FC8:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    return sub_080513D8(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    return sub_08050884(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r5 = r0;
    r0 = 0x0804ABA0U /* &VTable_0804ABA0 */; // [0x08051020]
    r6 = r1;
    *(u32*)(r5) = (u32)r0;
    r4 = *(u32*)(r5 + 0xC);
    r0 = *(u8*)(r4);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0805100E;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x08051024]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_0805100E;
    r3 = 0x2U;
    r0 = 0x080724F8U; // [0x08051028]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051004
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_0805100E:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x0805102C]
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    *(u32*)(r5) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805101C;
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051018: BL 0x0803D63C
loc_0805101C:
    return r0;
    r0 = r0;
    r3 = 0x280; // sp + 0x280
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = 0xF8U;
    r7 = (r0 >> 32);
    return sub_080508D8(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0805105C]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051060]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805104A;
    r0 = 0x0874E228U; // [0x08051064]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051046
loc_0805104A:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051068]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051058;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051054: BL 0x0803D63C
loc_08051058:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    return sub_080514B8(r0, r1, r2, r3);
    r4 = (r6 >> 1);
    return sub_08050914(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x0805107C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805107A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051076: BL 0x0803D63C
loc_0805107A:
    return r0;
}

// ROM Address: 0x0805107C..0x0805107E (2 bytes, Thumb)
u32 sub_0805107C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    return r0;
}

// ROM Address: 0x0805107E..0x0805109C (30 bytes, Thumb)
u32 sub_0805107E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051088]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x0805109C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805109A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051096: BL 0x0803D63C
loc_0805109A:
    return r0;
}

// ROM Address: 0x0805109C..0x080510A0 (4 bytes, Thumb)
u32 sub_0805109C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080510A0..0x080510C2 (34 bytes, Thumb)
u32 sub_080510A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x080510C4]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080510B2: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080510C0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080510BC: BL 0x0803D63C
loc_080510C0:
    return r0;
}

// ROM Address: 0x080510C2..0x080510C6 (4 bytes, Thumb)
u32 sub_080510C2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_08050950(r0, r1, r2, r3);
}

// ROM Address: 0x080510C8..0x080510EA (34 bytes, Thumb)
u32 sub_080510C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x080510EC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080510DA: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080510E8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080510E4: BL 0x0803D63C
loc_080510E8:
    return r0;
}

// ROM Address: 0x080510EA..0x080510EE (4 bytes, Thumb)
u32 sub_080510EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_08050978(r0, r1, r2, r3);
}

// ROM Address: 0x080510F0..0x08051118 (40 bytes, Thumb)
u32 sub_080510F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080510F8: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051106;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051102: BL 0x0803D63C
loc_08051106:
    return r0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08051118]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051116;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051112: BL 0x0803D63C
loc_08051116:
    return r0;
}

// ROM Address: 0x08051118..0x0805111A (2 bytes, Thumb)
u32 sub_08051118(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    return r0;
}

// ROM Address: 0x0805111A..0x08051138 (30 bytes, Thumb)
u32 sub_0805111A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0804929CU /* &VTable_0804929C */; // [0x08051124]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    r2 = 0x0804929CU /* &VTable_0804929C */; // [0x08051138]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051136;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051132: BL 0x0803D63C
loc_08051136:
    return r0;
}

// ROM Address: 0x08051138..0x0805113C (4 bytes, Thumb)
u32 sub_08051138(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0805113C..0x08051274 (312 bytes, Thumb)
u32 sub_0805113C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051168]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0805116C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051156;
    r0 = 0x087196D8U; // [0x08051170]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051152
loc_08051156:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051174]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051164;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051160: BL 0x0803D63C
loc_08051164:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    stack[216] = r6; // [sp + 0x360]
    r1 = (r6 >> 1);
    return sub_08050A20(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080511A4]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080511A8]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051192;
    r0 = 0x0871E200U; // [0x080511AC]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805118E
loc_08051192:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080511B0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080511A0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805119C: BL 0x0803D63C
loc_080511A0:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    return sub_080515B0(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    return sub_08050A5C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_Destroy4(r0, r1, r2, r3); // 0x080511BC: BL 0x0800D9F0
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080511CA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080511C6: BL 0x0803D63C
loc_080511CA:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080511F8]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080511FC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080511E6;
    r0 = 0x0871E228U; // [0x08051200]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080511E2
loc_080511E6:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051204]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080511F4;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080511F0: BL 0x0803D63C
loc_080511F4:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    return sub_08051654(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    return sub_08050AB0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r5 = r1;
    r1 = 0x0U;
    r4 = r0;
    r0 += 0x10U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08051212: BL 0x0803F58C
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x0805123C]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051240]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0805122A;
    r0 = 0x08757398U; // [0x08051244]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051226
loc_0805122A:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051248]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051238;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051234: BL 0x0803D63C
loc_08051238:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    *(u8*)(r3 + 0xE) = (u8)r0;
    r5 = (r6 >> 1);
    return sub_08050AF4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051254: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051262;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805125E: BL 0x0803D63C
loc_08051262:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051274]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051272;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805126E: BL 0x0803D63C
loc_08051272:
    return r0;
}

// ROM Address: 0x08051274..0x08051278 (4 bytes, Thumb)
u32 sub_08051274(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051278..0x080512B8 (64 bytes, Thumb)
u32 sub_08051278(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051280: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805128E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805128A: BL 0x0803D63C
loc_0805128E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051298: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080512A6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080512A2: BL 0x0803D63C
loc_080512A6:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x080512B8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080512B6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080512B2: BL 0x0803D63C
loc_080512B6:
    return r0;
}

// ROM Address: 0x080512B8..0x080512BC (4 bytes, Thumb)
u32 sub_080512B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080512BC..0x080512CC (16 bytes, Thumb)
u32 sub_080512BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x080512CC]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080512CA;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080512C6: BL 0x0803D63C
loc_080512CA:
    return r0;
}

// ROM Address: 0x080512CC..0x080512D0 (4 bytes, Thumb)
u32 sub_080512CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080512D0..0x080512E0 (16 bytes, Thumb)
u32 sub_080512D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x080512E0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080512DE;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080512DA: BL 0x0803D63C
loc_080512DE:
    return r0;
}

// ROM Address: 0x080512E0..0x080512E4 (4 bytes, Thumb)
u32 sub_080512E0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080512E4..0x0805136C (136 bytes, Thumb)
u32 sub_080512E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x080512EC: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080512FA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080512F6: BL 0x0803D63C
loc_080512FA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051304: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051312;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805130E: BL 0x0803D63C
loc_08051312:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x0805131C: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805132A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051326: BL 0x0803D63C
loc_0805132A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051334: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051342;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805133E: BL 0x0803D63C
loc_08051342:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x0805134C: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805135A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051356: BL 0x0803D63C
loc_0805135A:
    return r0;
    r2 = 0x0804984CU /* &VTable_0804984C */; // [0x0805136C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805136A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051366: BL 0x0803D63C
loc_0805136A:
    return r0;
}

// ROM Address: 0x0805136C..0x08051370 (4 bytes, Thumb)
u32 sub_0805136C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051370..0x08051380 (16 bytes, Thumb)
u32 sub_08051370(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x08051380]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805137E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805137A: BL 0x0803D63C
loc_0805137E:
    return r0;
}

// ROM Address: 0x08051380..0x08051384 (4 bytes, Thumb)
u32 sub_08051380(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051384..0x08051394 (16 bytes, Thumb)
u32 sub_08051384(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049AE0U /* &VTable_08049AE0 */; // [0x08051394]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051392;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805138E: BL 0x0803D63C
loc_08051392:
    return r0;
}

// ROM Address: 0x08051394..0x08051396 (2 bytes, Thumb)
u32 sub_08051394(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[224]; // [sp + 0x380]
    return r0;
}

// ROM Address: 0x08051396..0x080513B4 (30 bytes, Thumb)
u32 sub_08051396(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0804984CU /* &VTable_0804984C */; // [0x080513A0]
    *(u32*)(r0) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r0 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x080513B4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080513B2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080513AE: BL 0x0803D63C
loc_080513B2:
    return r0;
}

// ROM Address: 0x080513B4..0x080513B8 (4 bytes, Thumb)
u32 sub_080513B4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080513B8..0x080513C8 (16 bytes, Thumb)
u32 sub_080513B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049AF0U /* &VTable_08049AF0 */; // [0x080513C8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080513C6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080513C2: BL 0x0803D63C
loc_080513C6:
    return r0;
}

// ROM Address: 0x080513C8..0x080513CC (4 bytes, Thumb)
u32 sub_080513C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080513CC..0x08051418 (76 bytes, Thumb)
u32 sub_080513CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080513F8]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080513FC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080513E6;
    r0 = 0x08756B64U; // [0x08051400]
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080513E2
loc_080513E6:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051404]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080513F4;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080513F0: BL 0x0803D63C
loc_080513F4:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = *(u32*)(r4 + 0x34);
    r5 = (r6 >> 1);
    return sub_08050CB0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051418]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051416;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051412: BL 0x0803D63C
loc_08051416:
    return r0;
}

// ROM Address: 0x08051418..0x0805141A (2 bytes, Thumb)
u32 sub_08051418(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08050CC4(r0, r1, r2, r3);
}

// ROM Address: 0x0805141C..0x0805142C (16 bytes, Thumb)
u32 sub_0805141C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x0805142C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805142A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051426: BL 0x0803D63C
loc_0805142A:
    return r0;
}

// ROM Address: 0x0805142C..0x08051430 (4 bytes, Thumb)
u32 sub_0805142C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051430..0x08051470 (64 bytes, Thumb)
u32 sub_08051430(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051438: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051446;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051442: BL 0x0803D63C
loc_08051446:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051450: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805145E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805145A: BL 0x0803D63C
loc_0805145E:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051470]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805146E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805146A: BL 0x0803D63C
loc_0805146E:
    return r0;
}

// ROM Address: 0x08051470..0x08051474 (4 bytes, Thumb)
u32 sub_08051470(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051474..0x08051484 (16 bytes, Thumb)
u32 sub_08051474(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051484]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051482;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805147E: BL 0x0803D63C
loc_08051482:
    return r0;
}

// ROM Address: 0x08051484..0x08051488 (4 bytes, Thumb)
u32 sub_08051484(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051488..0x08051498 (16 bytes, Thumb)
u32 sub_08051488(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051498]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051496;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051492: BL 0x0803D63C
loc_08051496:
    return r0;
}

// ROM Address: 0x08051498..0x0805149C (4 bytes, Thumb)
u32 sub_08051498(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0805149C..0x080514AC (16 bytes, Thumb)
u32 sub_0805149C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x080514AC]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080514AA;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080514A6: BL 0x0803D63C
loc_080514AA:
    return r0;
}

// ROM Address: 0x080514AC..0x080514B0 (4 bytes, Thumb)
u32 sub_080514AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080514B0..0x08051508 (88 bytes, Thumb)
u32 sub_080514B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080514B8: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080514C6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080514C2: BL 0x0803D63C
loc_080514C6:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080514D0: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080514DE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080514DA: BL 0x0803D63C
loc_080514DE:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080514E8: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080514F6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080514F2: BL 0x0803D63C
loc_080514F6:
    return r0;
    r2 = 0x0804984CU /* &VTable_0804984C */; // [0x08051508]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051506;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051502: BL 0x0803D63C
loc_08051506:
    return r0;
}

// ROM Address: 0x08051508..0x0805150C (4 bytes, Thumb)
u32 sub_08051508(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0805150C..0x0805154C (64 bytes, Thumb)
u32 sub_0805150C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051514: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051522;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805151E: BL 0x0803D63C
loc_08051522:
    return r0;
    r4 = r0;
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0805154C]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051540;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0805153C: BL __call_via_r3
loc_08051540:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805154A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051546: BL 0x0803D63C
loc_0805154A:
    return r0;
}

// ROM Address: 0x0805154C..0x08051550 (4 bytes, Thumb)
u32 sub_0805154C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051550..0x080515A8 (88 bytes, Thumb)
u32 sub_08051550(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r0 = 0x0804ABA0U /* &VTable_0804ABA0 */; // [0x08051588]
    *(u32*)(r5) = (u32)r0;
    r4 = *(u32*)(r5 + 0xC);
    r0 = *(u8*)(r4);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08051580;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x0805158C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08051580;
    r3 = 0x2U;
    r0 = 0x080724F8U; // [0x08051590]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051576
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_08051580:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051594]
    *(u32*)(r5) = (u32)r0;
    return r0;
    r0 = r0;
    r3 = 0x280; // sp + 0x280
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = 0xF8U;
    r7 = (r0 >> 32);
    return sub_08050E40(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x080515A8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080515A6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080515A2: BL 0x0803D63C
loc_080515A6:
    return r0;
}

// ROM Address: 0x080515A8..0x080515AC (4 bytes, Thumb)
u32 sub_080515A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080515AC..0x080516A0 (244 bytes, Thumb)
u32 sub_080515AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080515D8]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080515DC]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080515C6;
    r0 = 0x0875738CU; // [0x080515E0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080515C2
loc_080515C6:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080515E4]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080515D4;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080515D0: BL 0x0803D63C
loc_080515D4:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    *(u8*)(r1 + 0xE) = (u8)r4;
    r5 = (r6 >> 1);
    return sub_08050E90(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x080515F0: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080515FE;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080515FA: BL 0x0803D63C
loc_080515FE:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051608: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051616;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051612: BL 0x0803D63C
loc_08051616:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051620: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805162E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805162A: BL 0x0803D63C
loc_0805162E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051638: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051646;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051642: BL 0x0803D63C
loc_08051646:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051650: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805165E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805165A: BL 0x0803D63C
loc_0805165E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051668: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051676;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051672: BL 0x0803D63C
loc_08051676:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051680: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805168E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805168A: BL 0x0803D63C
loc_0805168E:
    return r0;
    r2 = 0x080496A8U /* &VTable_080496A8 */; // [0x080516A0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805169E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805169A: BL 0x0803D63C
loc_0805169E:
    return r0;
}

// ROM Address: 0x080516A0..0x080516A4 (4 bytes, Thumb)
u32 sub_080516A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[168] = r6; // [sp + 0x2A0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080516A4..0x080516CC (40 bytes, Thumb)
u32 sub_080516A4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x080516AC: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080516BA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080516B6: BL 0x0803D63C
loc_080516BA:
    return r0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x080516CC]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080516CA;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080516C6: BL 0x0803D63C
loc_080516CA:
    return r0;
}

// ROM Address: 0x080516CC..0x080516D0 (4 bytes, Thumb)
u32 sub_080516CC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080516D0..0x080517B8 (232 bytes, Thumb)
u32 sub_080516D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080516FC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051700]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080516EA;
    r0 = 0x0875A7A4U; // [0x08051704]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080516E6
loc_080516EA:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051708]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080516F8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080516F4: BL 0x0803D63C
loc_080516F8:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r7 = 0x08051998U;
    r5 = (r6 >> 1);
    return sub_08050FB4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051738]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0805173C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051726;
    r0 = 0x087581E4U; // [0x08051740]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051722
loc_08051726:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051744]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051734;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051730: BL 0x0803D63C
loc_08051734:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    *(u16*)(r4 + 0xE) = (u16)r4;
    r5 = (r6 >> 1);
    return sub_08050FF0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051750: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805175E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805175A: BL 0x0803D63C
loc_0805175E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051768: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051776;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051772: BL 0x0803D63C
loc_08051776:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051780: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805178E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805178A: BL 0x0803D63C
loc_0805178E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051798: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080517A6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080517A2: BL 0x0803D63C
loc_080517A6:
    return r0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x080517B8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080517B6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080517B2: BL 0x0803D63C
loc_080517B6:
    return r0;
}

// ROM Address: 0x080517B8..0x080517BC (4 bytes, Thumb)
u32 sub_080517B8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080517BC..0x080517DE (34 bytes, Thumb)
u32 sub_080517BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804E444U /* &VTable_0804E444 */; // [0x080517E0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080517CE: BL 0x08046AA2
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080517DC;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080517D8: BL 0x0803D63C
loc_080517DC:
    return r0;
}

// ROM Address: 0x080517DE..0x080517E2 (4 bytes, Thumb)
u32 sub_080517DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_0805106C(r0, r1, r2, r3);
}

// ROM Address: 0x080517E4..0x08051854 (112 bytes, Thumb)
u32 sub_080517E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x080517EC: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080517FA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080517F6: BL 0x0803D63C
loc_080517FA:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051804: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051812;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805180E: BL 0x0803D63C
loc_08051812:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x0805181C: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805182A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051826: BL 0x0803D63C
loc_0805182A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051834: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051842;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805183E: BL 0x0803D63C
loc_08051842:
    return r0;
    r2 = 0x08049238U /* &VTable_08049238 */; // [0x08051854]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051852;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805184E: BL 0x0803D63C
loc_08051852:
    return r0;
}

// ROM Address: 0x08051854..0x08051858 (4 bytes, Thumb)
u32 sub_08051854(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[56] = r2; // [sp + 0xE0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051858..0x08051868 (16 bytes, Thumb)
u32 sub_08051858(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08051868]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051866;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051862: BL 0x0803D63C
loc_08051866:
    return r0;
}

// ROM Address: 0x08051868..0x0805186C (4 bytes, Thumb)
u32 sub_08051868(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0805186C..0x080518C4 (88 bytes, Thumb)
u32 sub_0805186C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051874: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051882;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805187E: BL 0x0803D63C
loc_08051882:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x0805188C: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805189A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051896: BL 0x0803D63C
loc_0805189A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x080518A4: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080518B2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080518AE: BL 0x0803D63C
loc_080518B2:
    return r0;
    r2 = 0x0804929CU /* &VTable_0804929C */; // [0x080518C4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080518C2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080518BE: BL 0x0803D63C
loc_080518C2:
    return r0;
}

// ROM Address: 0x080518C4..0x080518C8 (4 bytes, Thumb)
u32 sub_080518C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080518C8..0x080518D8 (16 bytes, Thumb)
u32 sub_080518C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x080518D8]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080518D6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080518D2: BL 0x0803D63C
loc_080518D6:
    return r0;
}

// ROM Address: 0x080518D8..0x080518DC (4 bytes, Thumb)
u32 sub_080518D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080518DC..0x080518EC (16 bytes, Thumb)
u32 sub_080518DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x080518EC]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080518EA;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080518E6: BL 0x0803D63C
loc_080518EA:
    return r0;
}

// ROM Address: 0x080518EC..0x080518F0 (4 bytes, Thumb)
u32 sub_080518EC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x080518F0..0x08051900 (16 bytes, Thumb)
u32 sub_080518F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08051900]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080518FE;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080518FA: BL 0x0803D63C
loc_080518FE:
    return r0;
}

// ROM Address: 0x08051900..0x08051904 (4 bytes, Thumb)
u32 sub_08051900(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051904..0x08051B24 (544 bytes, Thumb)
u32 sub_08051904(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_Destroy4(r0, r1, r2, r3); // 0x0805190C: BL 0x0800D9F0
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0805191A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051916: BL 0x0803D63C
loc_0805191A:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051948]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x0805194C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051936;
    r0 = 0x08753A18U; // [0x08051950]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051932
loc_08051936:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051954]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051944;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051940: BL 0x0803D63C
loc_08051944:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r2 -= 0x18U;
    r5 = (r6 >> 1);
    return sub_08051200(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051984]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051988]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051972;
    r0 = 0x08752F8CU; // [0x0805198C]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x0805196E
loc_08051972:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051990]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051980;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0805197C: BL 0x0803D63C
loc_08051980:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 140;
    r5 = (r6 >> 1);
    return sub_0805123C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080519C0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x080519C4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080519AE;
    r0 = 0x08719C34U; // [0x080519C8]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080519AA
loc_080519AE:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x080519CC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080519BC;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080519B8: BL 0x0803D63C
loc_080519BC:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = stack[52]; // [sp + 0xD0]
    r1 = (r6 >> 1);
    return sub_08051278(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x080519FC]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051A00]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080519EA;
    r0 = 0x0872033CU; // [0x08051A04]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080519E6
loc_080519EA:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051A08]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_080519F8;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080519F4: BL 0x0803D63C
loc_080519F8:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = (r7 << 12);
    r2 = (r6 >> 1);
    return sub_080512B4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051A38]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051A3C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051A26;
    r0 = 0x0876BA78U; // [0x08051A40]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051A22
loc_08051A26:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051A44]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051A34;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051A30: BL 0x0803D63C
loc_08051A34:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r6 = (r6 >> 1);
    return sub_080512F0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x0804B4D8U /* &VTable_0804B4D8 */; // [0x08051A88]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r4 + 0x14);
    r0 = 0x0U;
    *(u32*)(r1 + 0x2C) = (u32)r0;
    r0 = r4;
    r1 = 0x0U;
    r0 += 0x18U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08051A5E: BL 0x0803F58C
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051A8C]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051A90]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051A76;
    r0 = 0x08071C90U; // [0x08051A94]
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051A72
loc_08051A76:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051A98]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051A84;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051A80: BL 0x0803D63C
loc_08051A84:
    return r0;
    r0 = r0;
    r4 = (r0 >> 32);
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r0 = r2 + 2;
    r7 = (r0 >> 32);
    return sub_08051344(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_0800B8B2(r0, r1, r2, r3); // 0x08051AA4
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051AB2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051AAE: BL 0x0803D63C
loc_08051AB2:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051AE0]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051AE4]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051ACE;
    r0 = 0x08072480U; // [0x08051AE8]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051ACA
loc_08051ACE:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051AEC]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051ADC;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051AD8: BL 0x0803D63C
loc_08051ADC:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = 0x80U;
    r7 = (r0 >> 32);
    return sub_08051398(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051AF8: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051B06;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051B02: BL 0x0803D63C
loc_08051B06:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r5 = r1;
    r0 = sub_08010D9A(r0, r1, r2, r3); // 0x08051B10
    r0 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051B24]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051B22;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051B1E: BL 0x0803D63C
loc_08051B22:
    return r0;
}

// ROM Address: 0x08051B24..0x08051B28 (4 bytes, Thumb)
u32 sub_08051B24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051B28..0x08051B50 (40 bytes, Thumb)
u32 sub_08051B28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051B30: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051B3E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051B3A: BL 0x0803D63C
loc_08051B3E:
    return r0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051B50]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051B4E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051B4A: BL 0x0803D63C
loc_08051B4E:
    return r0;
}

// ROM Address: 0x08051B50..0x08051B54 (4 bytes, Thumb)
u32 sub_08051B50(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051B54..0x08051BDC (136 bytes, Thumb)
u32 sub_08051B54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051B5C: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051B6A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051B66: BL 0x0803D63C
loc_08051B6A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051B74: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051B82;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051B7E: BL 0x0803D63C
loc_08051B82:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051B8C: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051B9A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051B96: BL 0x0803D63C
loc_08051B9A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051BA4: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051BB2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051BAE: BL 0x0803D63C
loc_08051BB2:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051BBC: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051BCA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051BC6: BL 0x0803D63C
loc_08051BCA:
    return r0;
    r2 = 0x08049238U /* &VTable_08049238 */; // [0x08051BDC]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051BDA;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051BD6: BL 0x0803D63C
loc_08051BDA:
    return r0;
}

// ROM Address: 0x08051BDC..0x08051BE0 (4 bytes, Thumb)
u32 sub_08051BDC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[56] = r2; // [sp + 0xE0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051BE0..0x08051C0C (44 bytes, Thumb)
u32 sub_08051BE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0804984CU /* &VTable_0804984C */; // [0x08051C0C]
    r5 = r1;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x08051C10]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051C00;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08051BFC: BL __call_via_r3
loc_08051C00:
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051C0A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051C06: BL 0x0803D63C
loc_08051C0A:
    return r0;
}

// ROM Address: 0x08051C0C..0x08051C14 (8 bytes, Thumb)
u32 sub_08051C0C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051C14..0x08051C6C (88 bytes, Thumb)
u32 sub_08051C14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051C1C: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051C2A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051C26: BL 0x0803D63C
loc_08051C2A:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051C34: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051C42;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051C3E: BL 0x0803D63C
loc_08051C42:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051C4C: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051C5A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051C56: BL 0x0803D63C
loc_08051C5A:
    return r0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08051C6C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051C6A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051C66: BL 0x0803D63C
loc_08051C6A:
    return r0;
}

// ROM Address: 0x08051C6C..0x08051C70 (4 bytes, Thumb)
u32 sub_08051C6C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051C70..0x08051C80 (16 bytes, Thumb)
u32 sub_08051C70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08051C80]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051C7E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051C7A: BL 0x0803D63C
loc_08051C7E:
    return r0;
}

// ROM Address: 0x08051C80..0x08051C84 (4 bytes, Thumb)
u32 sub_08051C80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051C84..0x08051C94 (16 bytes, Thumb)
u32 sub_08051C84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08051C94]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051C92;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051C8E: BL 0x0803D63C
loc_08051C92:
    return r0;
}

// ROM Address: 0x08051C94..0x08051C98 (4 bytes, Thumb)
u32 sub_08051C94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051C98..0x08051DA4 (268 bytes, Thumb)
u32 sub_08051C98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051CC4]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051CC8]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051CB2;
    r0 = 0x08759680U; // [0x08051CCC]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051CAE
loc_08051CB2:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051CD0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051CC0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051CBC: BL 0x0803D63C
loc_08051CC0:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r5 = (r6 >> 1);
    return sub_0805157C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051D00]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051D04]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051CEE;
    r0 = 0x0871DD38U; // [0x08051D08]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051CEA
loc_08051CEE:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051D0C]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051CFC;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051CF8: BL 0x0803D63C
loc_08051CFC:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    if (cmp_lhs <= cmp_rhs) goto loc_08051D7C;
    r1 = (r6 >> 1);
    return sub_080515B8(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 += 0x18CU;
    r0 = *(u32*)(r0);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051D2C;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08051D28: BL __call_via_r3
loc_08051D2C:
    r1 = 0x0U;
    r0 = r4;
    r0 = sub_0800EC34(r0, r1, r2, r3); // 0x08051D30: BL 0x0800EC34
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051D3E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051D3A: BL 0x0803D63C
loc_08051D3E:
    return r0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051D6C]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051D70]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051D5A;
    r0 = 0x08054FBCU; // [0x08051D74]
    r0 = *(u32*)(r0 + 0x18);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051D56
loc_08051D5A:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051D78]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051D68;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051D64: BL 0x0803D63C
loc_08051D68:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r7 = 0x0000FFFFU; // [0x08052068]
    r5 = (r0 >> 32);
    return sub_08051624(r0, r1, r2, r3);
    r4 = (r0 >> 32);
loc_08051D7C:
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051D94;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08051D90: BL __call_via_r3
loc_08051D94:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051DA4]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051DA2;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051D9E: BL 0x0803D63C
loc_08051DA2:
    return r0;
}

// ROM Address: 0x08051DA4..0x08051DA6 (2 bytes, Thumb)
u32 sub_08051DA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08051650(r0, r1, r2, r3);
}

// ROM Address: 0x08051DA8..0x08051EC8 (288 bytes, Thumb)
u32 sub_08051DA8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051DD4]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051DD8]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051DC2;
    r0 = 0x08754974U; // [0x08051DDC]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051DBE
loc_08051DC2:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051DE0]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051DD0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051DCC: BL 0x0803D63C
loc_08051DD0:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r1 = 0x29006002U; // [0x08051FB0]
    r5 = (r6 >> 1);
    return sub_0805168C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r5 = r1;
    r1 = 0x0U;
    r4 = r0;
    r0 += 0x18U;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x08051DEE: BL 0x0803F58C
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051E18]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051E1C]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051E06;
    r0 = 0x08757AE4U; // [0x08051E20]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051E02
loc_08051E06:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051E24]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051E14;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051E10: BL 0x0803D63C
loc_08051E14:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = *(u8*)(r4 + 0xB);
    r5 = (r6 >> 1);
    return sub_080516D0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051E54]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051E58]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051E42;
    r0 = 0x0875A73CU; // [0x08051E5C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051E3E
loc_08051E42:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051E60]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051E50;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051E4C: BL 0x0803D63C
loc_08051E50:
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r7 = 0x08051F50U;
    r5 = (r6 >> 1);
    return sub_0805170C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x08049680U /* &VTable_08049680 */; // [0x08051E84]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u16*)(r4 + 0xC);
    r0 = 0x0000FFFFU; // [0x08051E88]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051E7C;
    r0 = 0x08719C60U; // [0x08051E8C]
    r0 = *(u32*)(r0);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08051E78
loc_08051E7C:
    r0 = 0x0804E454U /* &VTable_0804E454 */; // [0x08051E90]
    *(u32*)(r4) = (u32)r0;
    return r0;
    r0 = r0;
    stack[128] = r6; // [sp + 0x200]
    r4 = (r0 >> 32);
    r0 = r0;
    r4 = stack[96]; // [sp + 0x180]
    r1 = (r6 >> 1);
    return sub_0805173C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051E9C: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051EAA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051EA6: BL 0x0803D63C
loc_08051EAA:
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0xC);
    r5 = r1;
    r0 = sub_08010D9A(r0, r1, r2, r3); // 0x08051EB4
    r0 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051EC8]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08051EC6;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051EC2: BL 0x0803D63C
loc_08051EC6:
    return r0;
}

// ROM Address: 0x08051EC8..0x08051ECC (4 bytes, Thumb)
u32 sub_08051EC8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051ECC..0x08051EDC (16 bytes, Thumb)
u32 sub_08051ECC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051EDC]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051EDA;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051ED6: BL 0x0803D63C
loc_08051EDA:
    return r0;
}

// ROM Address: 0x08051EDC..0x08051EE0 (4 bytes, Thumb)
u32 sub_08051EDC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051EE0..0x08051EF0 (16 bytes, Thumb)
u32 sub_08051EE0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080491F0U /* &VTable_080491F0 */; // [0x08051EF0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051EEE;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051EEA: BL 0x0803D63C
loc_08051EEE:
    return r0;
}

// ROM Address: 0x08051EF0..0x08051EF4 (4 bytes, Thumb)
u32 sub_08051EF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[240] = r1; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051EF4..0x08051F1C (40 bytes, Thumb)
u32 sub_08051EF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08006618(r0, r1, r2, r3); // 0x08051EFC: BL 0x08006618
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051F0A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051F06: BL 0x0803D63C
loc_08051F0A:
    return r0;
    r2 = 0x08049320U /* &VTable_08049320 */; // [0x08051F1C]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051F1A;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051F16: BL 0x0803D63C
loc_08051F1A:
    return r0;
}

// ROM Address: 0x08051F1C..0x08051F20 (4 bytes, Thumb)
u32 sub_08051F1C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[32] = r3; // [sp + 0x80]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051F20..0x08051F90 (112 bytes, Thumb)
u32 sub_08051F20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051F28: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051F36;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051F32: BL 0x0803D63C
loc_08051F36:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051F40: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051F4E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051F4A: BL 0x0803D63C
loc_08051F4E:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051F58: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051F66;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051F62: BL 0x0803D63C
loc_08051F66:
    return r0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = sub_08034294(r0, r1, r2, r3); // 0x08051F70: BL 0x08034294
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051F7E;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051F7A: BL 0x0803D63C
loc_08051F7E:
    return r0;
    r2 = 0x0804984CU /* &VTable_0804984C */; // [0x08051F90]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051F8E;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051F8A: BL 0x0803D63C
loc_08051F8E:
    return r0;
}

// ROM Address: 0x08051F90..0x08051F94 (4 bytes, Thumb)
u32 sub_08051F90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051F94..0x08051FBC (40 bytes, Thumb)
u32 sub_08051F94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r1 = 0x0U;
    r0 = Object_InstallHandlerTable1(r0, r1, r2, r3); // 0x08051F9C: BL 0x08050D30
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051FAA;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051FA6: BL 0x0803D63C
loc_08051FAA:
    return r0;
    r2 = 0x0804929CU /* &VTable_0804929C */; // [0x08051FBC]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051FBA;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051FB6: BL 0x0803D63C
loc_08051FBA:
    return r0;
}

// ROM Address: 0x08051FBC..0x08051FC0 (4 bytes, Thumb)
u32 sub_08051FBC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051FC0..0x08051FD0 (16 bytes, Thumb)
u32 sub_08051FC0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0804929CU /* &VTable_0804929C */; // [0x08051FD0]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051FCE;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051FCA: BL 0x0803D63C
loc_08051FCE:
    return r0;
}

// ROM Address: 0x08051FD0..0x08051FD4 (4 bytes, Thumb)
u32 sub_08051FD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x08051FD4..0x08051FE4 (16 bytes, Thumb)
u32 sub_08051FD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x080493E4U /* &VTable_080493E4 */; // [0x08051FE4]
    *(u32*)(r0) = (u32)r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08051FE2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08051FDE: BL 0x0803D63C
loc_08051FE2:
    return r0;
}

// ROM Address: 0x08051FE4..0x08051FE8 (4 bytes, Thumb)
u32 sub_08051FE4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[228] = r3; // [sp + 0x390]
    r4 = (r0 >> 32);
    return r0;
}
