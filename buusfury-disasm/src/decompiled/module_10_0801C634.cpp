/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #10
 * Address Range: 0x0801C634..0x0801FC9E (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0801C634..0x0801C63C (8 bytes, Thumb)
u32 sub_0801C634(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x0801C636
    return r0;
}

// ROM Address: 0x0801C63C..0x0801C664 (40 bytes, Thumb)
u32 sub_0801C63C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0; // BX lr
    r0 = *(u16*)(r1 + 0x12);
    r4 = r1;
    r0 += 0x1U;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u16*)(r1 + 0x12) = (u16)r0;
    cmp_lhs = (s32)r0; cmp_rhs = 32;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0801C664(r0, r1, r2, r3);
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C65C: BL __call_via_r3
    return r0;
}

// ROM Address: 0x0801C664..0x0801C6A4 (64 bytes, Thumb)
u32 sub_0801C664(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 >> 4);
    *(u8*)(r4 + 0x11) = (u8)r0;
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) return sub_0801C660(r0, r1, r2, r3);
    r1 = r4;
    r5 = 0x4; // sp + 0x4
    r0 = r5;
    r0 = Object_ReadPosition1(r0, r1, r2, r3); // 0x0801C674: BL 0x0804F944
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x0871E1E0U; // [0x0801C6C4]
    r0 = (r0 << 3);
    r2 = r0 + r1;
    r1 = r5;
    r5 = 0xC; // sp + 0xC
    r0 = r5;
    r0 = sub_08052FB4(r0, r1, r2, r3); // 0x0801C686
    r2 = r4;
    r1 = r5;
    r0 = 0x0U;
    r0 = sub_080383D4(r0, r1, r2, r3); // 0x0801C690: BL 0x080383D4
    r1 = r0;
    r0 = 0x0871DD38U; // [0x0801C6A0]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C69A: BL 0x0801191A
    return sub_0801C660(r0, r1, r2, r3);
    if (cmp_lhs <= cmp_rhs) return sub_0801C714(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    return r0;
}

// ROM Address: 0x0801C6C8..0x0801C700 (56 bytes, Thumb)
u32 sub_0801C6C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x0801C6CA: BL 0x0803D63C
    return r0;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801C6DC: BL __call_via_r3
    return r0;
    r0 = r0;
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801C700(r0, r1, r2, r3);
    r0 = 0x60U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801C6F4: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801C700(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801C700..0x0801C750 (80 bytes, Thumb)
u32 sub_0801C700(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0x1U;
    r2 = r7;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x0801C708
    r0 = 0x0804A2E8U /* &VTable_0804A2E8 */; // [0x0801C8E4]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)r6; r6 += 4;
    r2 = *(u32*)r6; r6 += 4;
    *(u32*)(r4 + 0x40) = (u32)r1;
    *(u32*)(r4 + 0x44) = (u32)r2;
    r2 = *(u32*)(r5);
    r3 = *(u32*)(r5 + 0x4);
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x20) = (u32)r2;
    r0 = r4;
    r3 = (r3 << 8);
    *(u32*)(r4 + 0x24) = (u32)r3;
    r0 += 0x4CU;
    r5 = 0x0U;
    r1 = 0x800U; // (1 << 11)
    *(u32*)(r4 + 0x48) = (u32)r5;
    *(u32*)(r0) = (u32)r1;
    r6 = r0 + 4;
    r0 = 0x0871E984U; // [0x0801C8E8]
    r1 = (r1 >> 2);
    *(u32*)(r6) = (u32)r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = 0x37U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = *(u32*)(r4 + 0x44);
    r0 = r0 - r1;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0801C746
    *(u8*)(r6 + 0x4) = (u8)r5;
    r0 = r4;
    return sub_0801C6FE(r0, r1, r2, r3);
}

// ROM Address: 0x0801C750..0x0801C8A8 (344 bytes, Thumb)
u32 sub_0801C750(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 += 0x28U;
    r2 = r1;
    r3 = *(u32*)(r0 + 0x28);
    r5 = *(u32*)(r0 + 0x30);
    r2 += 0x8U;
    r1 = *(u32*)(r0 + 0x2C);
    r2 = *(u32*)(r2 + 0x4);
    r1 = r1 + r2;
    r3 = r3 + r5;
    stack[1] = r1; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 1));
    r2 = ((u32)((s32)r3 >> 1));
    stack[1] = r1; // [sp + 0x4]
    stack[3] = r1; // [sp + 0xC]
    stack[0] = r3; // [sp + 0x0]
    r5 = 0x0871E200U; // [0x0801C8EC]
    stack[0] = r2; // [sp + 0x0]
    r1 = r0;
    stack[2] = r2; // [sp + 0x8]
    r0 = *(u32*)(r5 + 0x4);
    r4 = 0x8; // sp + 0x8
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801C780
    r6 = 0x0871E200U; // [0x0801C8EC]
    r6 += 0x8U;
    r2 = r6;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800C454(r0, r1, r2, r3); // 0x0801C78E
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C796: BL 0x0801191A
    r2 = r6;
    r2 += 0x8U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800C454(r0, r1, r2, r3); // 0x0801C7A2
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C7AA: BL 0x0801191A
    r2 = r6;
    r2 += 0x10U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800C454(r0, r1, r2, r3); // 0x0801C7B6
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C7BE: BL 0x0801191A
    r2 = r6;
    r2 += 0x18U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0800C454(r0, r1, r2, r3); // 0x0801C7CA
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C7D2: BL 0x0801191A
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0801C7D8
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0801C7F6;
    r2 = 0x38U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_0801952C(r0, r1, r2, r3); // 0x0801C7EA
    r1 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C7F2: BL 0x0801191A
loc_0801C7F6:
    r4 = 0x000005C4U; // [0x0801C8F4]
    r0 = *(u32*)(r5);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x083193C8U; // [0x0801C8F0]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801C802
    return r0;
    r5 = r0;
    r5 += 0x50U;
    r4 = r0;
    r0 = *(u8*)(r5 + 0x4);
    r7 = r1;
    r6 = 0xBU;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801C8A8(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801C82C;
    r0 = *(u32*)(r4 + 0x5C);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x5C) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0801C82C;
    *(u32*)(r4 + 0x5C) = (u32)r6;
loc_0801C82C:
    r0 = *(u32*)(r4 + 0x48);
    r0 += 0x1U;
    *(u32*)(r4 + 0x48) = (u32)r0;
    r0 = (r0 << 28);
    r0 = (r0 >> 30);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_0801C83C;
    r0 = 0x1U;
loc_0801C83C:
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x0871E984U; // [0x0801C8E8]
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0801C84A
    r1 = *(u8*)(r5 + 0x4);
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801C8C0(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801C8A4;
    r0 = *(u32*)(r4 + 0x58);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x58) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0801C8A4;
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801C89E;
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801C89E;
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r6 = 0x4; // sp + 0x4
    r5 = sp;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8090U; // [0x0801C8F8]
    stack[7] = r0; // [sp + 0x1C]
    r0 = (r1 << 10);
    stack[6] = r0; // [sp + 0x18]
    r0 = r4;
    r0 += 0x28U;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    *(u32*)r6 = r0; r6 += 4;
    *(u32*)r6 = r1; r6 += 4;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    r0 = 0x2U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    r0 = 0x0871E200U; // [0x0801C8EC]
    stack[12] = r4; // [sp + 0x30]
    r2 = r5;
    r1 = 0x0U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x0801C89A
loc_0801C89E:
    r0 = r4;
    r0 = sub_0801C750(r0, r1, r2, r3); // 0x0801C8A0: BL 0x0801C750
loc_0801C8A4:
    return r0;
}

// ROM Address: 0x0801C8A8..0x0801C8DC (52 bytes, Thumb)
u32 sub_0801C8A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r4 + 0x40);
    r1 = r1 + r2;
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = *(u32*)(r4 + 0x44);
    r1 = *(u32*)(r4 + 0x24);
    r0 = r1 + r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = *(u32*)(r4 + 0x44);
    r0 += 0x20U;
    *(u32*)(r4 + 0x44) = (u32)r0;
    return sub_0801C82C(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x50);
    r1 -= 0x20U;
    *(u32*)(r4 + 0x50) = (u32)r1;
    r2 = *(u32*)(r4 + 0x4C);
    r1 = r2 + r1;
    r2 = 0xFFFFF400U; // [0x0801C8FC]
    *(u32*)(r4 + 0x4C) = (u32)r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) return sub_0801C8A4(r0, r1, r2, r3);
    *(u8*)(r5 + 0x4) = (u8)r0;
    r0 = 0x1EU;
    r4 += 0x58U;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    return sub_0801C8A4(r0, r1, r2, r3);
}

// ROM Address: 0x0801C8DC..0x0801C91C (64 bytes, Thumb)
u32 sub_0801C8DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x0801C8DE
    return r0;
    r2 = 0x0801CC88U;
    r4 = (r0 >> 32);
    r1 = (r6 >> 1);
    return sub_0801CCF0(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    stack[200] = r3; // [sp + 0x320]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    *(u16*)(r2 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    r0 = sub_07C1D8FE(r0, r1, r2, r3); // 0x0801C8FC
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801C91C(r0, r1, r2, r3);
    r0 = 0x4CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801C910: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801C91C(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801C91C..0x0801C978 (92 bytes, Thumb)
u32 sub_0801C91C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0xFFU;
    r1 += 0x1U;
    r2 = r7;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x0801C924
    r0 = 0x0804A368U /* &VTable_0804A368 */; // [0x0801CB7C]
    r3 = 0x0871E234U; // [0x0801CB84]
    *(u32*)(r4) = (u32)r0;
    r1 = *(u32*)(r5);
    r2 = *(u32*)(r5 + 0x4);
    r1 = (r1 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    r0 = (r6 << 1);
    r0 = r0 + r6;
    r1 = 0x0871E630U; // [0x0801CB80]
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r2 = 0x0U;
    *(u32*)(r4 + 0x48) = (u32)r2;
    r0 = (r6 << 3);
    r1 = *(u32*)(r3 + r0);
    r0 = r0 + r3;
    *(u32*)(r4 + 0x40) = (u32)r1;
    r0 = *(u32*)(r0 + 0x4);
    r3 = r2;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r0 = 0x0871E234U; // [0x0801CB84]
    r5 = 0x000005C4U; // [0x0801CB8C]
    r0 -= 0xCU;
    r0 = *(u32*)(r0);
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x083193F8U; // [0x0801CB88]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801C96A
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0801C970
    r0 = r4;
    return sub_0801C91A(r0, r1, r2, r3);
}

// ROM Address: 0x0801C978..0x0801CAB6 (318 bytes, Thumb)
u32 sub_0801C978(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x20);
    r1 = ((u32)((s32)r1 >> 8));
    stack[4] = r1; // [sp + 0x10]
    r1 = *(u32*)(r0 + 0x24);
    r4 = 0x0871E234U; // [0x0801CB84]
    r1 = ((u32)((s32)r1 >> 8));
    stack[5] = r1; // [sp + 0x14]
    r1 = r0;
    r4 -= 0xCU;
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801C990
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0801C996
    r1 = 0x400U; // (1 << 10)
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0801C9C0;
    r2 = 0x38U;
    r0 = (r1 << 3);
    stack[0] = r0; // [sp + 0x0]
    stack[2] = r2; // [sp + 0x8]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x4U;
    r0 = 0x0U;
    r1 = 0x10; // sp + 0x10
    r2 = 0x08712FDCU; // [0x0801CB90]
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0801C9B4
    r1 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801C9BC: BL 0x0801191A
loc_0801C9C0:
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
    if (cmp_lhs != cmp_rhs) goto loc_0801CA6C;
    r0 = 0x0871E234U; // [0x0801CB84]
    r0 -= 0xCU;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0801C9E4
    cmp_lhs = (s32)r0; cmp_rhs = 64;
    if (cmp_lhs < cmp_rhs) goto loc_0801CA6C;
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
    r0 = 0x00002AAAU; // [0x0801CB94]
    r2 = 0x0871E630U; // [0x0801CB80]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x3U;
    stack[0] = r0; // [sp + 0x0]
    r2 += 0x30U;
    r0 = 0x0U;
    r1 = 0x2C; // sp + 0x2C
    r0 = sub_0802A81C(r0, r1, r2, r3); // 0x0801CA5C
    r1 = r0;
    r0 = 0x0871E234U; // [0x0801CB84]
    r0 -= 0xCU;
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801CA68: BL 0x0801191A
loc_0801CA6C:
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r6);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = *(u32*)(r4 + 0x24);
    r1 = *(u32*)(r5);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0801CA7E
    r6 = 0x0871E234U; // [0x0801CB84]
    r6 -= 0xCU;
    r0 = *(u32*)(r6 + 0x8);
    r0 += 0x18U;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CAAA;
    r1 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CAAA;
    r1 = *(u32*)(r0 + 0x4);
    r2 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CAAA;
    r1 = *(u32*)(r4 + 0x2C);
    r0 = *(u32*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs < cmp_rhs) return sub_0801CAB6(r0, r1, r2, r3);
loc_0801CAAA:
    r1 = r4;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801CAAE
    return r0;
}

// ROM Address: 0x0801CAB6..0x0801CB32 (124 bytes, Thumb)
u32 sub_0801CAB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 += 0x28U;
    r1 = *(u32*)(r6 + 0x8);
    r5 = r0;
    r1 += 0x80U;
    r1 = *(u32*)(r1 + 0x2C);
    r0 = sub_08009324(r0, r1, r2, r3); // 0x0801CAC2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801CAD2;
    r0 = r4;
    r0 = sub_0801C978(r0, r1, r2, r3); // 0x0801CACC: BL 0x0801C978
    return sub_0801CAB2(r0, r1, r2, r3);
loc_0801CAD2:
    r0 = stack[14]; // [sp + 0x38]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801CAB2(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801CAB2(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x1C);
    r3 = 0x0; // sp + 0x0
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r7 = sp;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0x086B8090U; // [0x0801CB98]
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
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0801CB08
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801CAB2(r0, r1, r2, r3);
    r6 = *(u32*)(r6);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0801CB14
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x0801CB9C]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x0801CB8C]
    r3 = r5;
    r2 = 0x40U;
    r0 = r6 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801CB2C
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801CB38..0x0801CB48 (16 bytes, Thumb)
u32 sub_0801CB38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801CB76(r0, r1, r2, r3);
    r1 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_0801CB48(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801CB48..0x0801CB7C (52 bytes, Thumb)
u32 sub_0801CB48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r2 + 4;
    r2 = *(u32*)(r2 + 0x4);
    r3 = *(u32*)(r0 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CB72;
    r2 = *(u32*)(r0 + 0x28);
    r3 = *(u32*)(r1 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CB72;
    r2 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r0 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CB72;
    r2 = *(u32*)(r0 + 0x2C);
    r1 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CB72;
    r0 = sub_0801C978(r0, r1, r2, r3); // 0x0801CB6A: BL 0x0801C978
    r0 = 0x1U;
    return sub_0801CB46(r0, r1, r2, r3);
loc_0801CB72:
    r0 = 0x0U;
    return sub_0801CB46(r0, r1, r2, r3);
    r0 = sub_08019CC4(r0, r1, r2, r3); // 0x0801CB76
    return sub_0801CB46(r0, r1, r2, r3);
}

// ROM Address: 0x0801CB86..0x0801CBB6 (48 bytes, Thumb)
u32 sub_0801CB86(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r6 >> 1);
    stack[248] = r3; // [sp + 0x3E0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 220;
    r1 = (r6 >> 1);
    cmp_lhs = (s32)r2; cmp_rhs = 170;
    r0 = r0;
    *(u16*)(r2 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r6 = r0;
    r0 = 0x03001C34U; // [0x0801CDB8]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801CBB6(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801CBB6..0x0801CDA0 (490 bytes, Thumb)
u32 sub_0801CBB6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801CBB8: BL 0x0800FDFA
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
    r5 = 0x1U;
    r1 = r4;
    r0 = 0x24; // sp + 0x24
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801CBDE: BL 0x0800FDFA
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
    if (cmp_lhs >= cmp_rhs) goto loc_0801CC18;
    r0 = (u32)(-(s32)r2);
loc_0801CC18:
    r1 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CC22;
    r0 = (u32)(-(s32)r0);
loc_0801CC22:
    r7 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    stack[13] = r1; // [sp + 0x34]
    stack[14] = r0; // [sp + 0x38]
    if (cmp_lhs <= cmp_rhs) goto loc_0801CC3A;
    r1 = stack[15]; // [sp + 0x3C]
    r0 = 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0801CC36;
    r0 = 0x3U;
loc_0801CC36:
    *(u8*)(r4 + 0x10) = (u8)r0;
    goto loc_0801CC46;
loc_0801CC3A:
    r7 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0801CC44;
    r5 = 0x0U;
loc_0801CC44:
    *(u8*)(r4 + 0x10) = (u8)r5;
loc_0801CC46:
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801CC4E;
    r0 = 0x0U;
    return sub_0801CBB2(r0, r1, r2, r3);
loc_0801CC4E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CC58: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801CC6E;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CC6A: BL __call_via_r3
loc_0801CC6E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CC78: BL __call_via_r3
    r0 = stack[15]; // [sp + 0x3C]
    r1 = stack[16]; // [sp + 0x40]
    r0 = (r0 << 8);
    r1 = (r1 << 8);
    stack[14] = r1; // [sp + 0x38]
    stack[13] = r0; // [sp + 0x34]
    r1 = *(u32*)(r6 + 0x4);
    r2 = stack[14]; // [sp + 0x38]
    r0 *= r1;
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    r5 = r4;
    r5 += 0xFFU;
    stack[4] = r1; // [sp + 0x10]
    stack[6] = r1; // [sp + 0x18]
    r1 = (r0 << 8);
    r5 += 0xA1U;
    stack[3] = r0; // [sp + 0xC]
    stack[5] = r0; // [sp + 0x14]
    r7 = (r7 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801CCA8: BL 0x08046E58
    stack[2] = r0; // [sp + 0x8]
    r0 = stack[6]; // [sp + 0x18]
    r1 = (r0 << 8);
    r0 = r7;
    r0 = Thunk_SignedDivide(r0, r1, r2, r3); // 0x0801CCB4: BL 0x08046E58
    r1 = stack[2]; // [sp + 0x8]
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[4]; // [sp + 0x10]
    stack[7] = r0; // [sp + 0x1C]
    stack[8] = r1; // [sp + 0x20]
    r0 = *(u32*)(r5);
    r1 = stack[7]; // [sp + 0x1C]
    r7 = r5 + 4;
    r0 = r0 - r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = stack[8]; // [sp + 0x20]
    stack[3] = r0; // [sp + 0xC]
    r1 = r1 - r2;
    stack[4] = r1; // [sp + 0x10]
    stack[12] = r1; // [sp + 0x30]
    stack[10] = r1; // [sp + 0x28]
    stack[11] = r0; // [sp + 0x2C]
    stack[9] = r0; // [sp + 0x24]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x2C; // sp + 0x2C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CCEA: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CCFC;
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r7) = (u32)r0;
    goto loc_0801CD7C;
loc_0801CCFC:
    r0 = r6 + 4;
    r1 = stack[15]; // [sp + 0x3C]
    stack[18] = r0; // [sp + 0x48]
    r3 = 0x24; // sp + 0x24
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CD10;
    r0 = *(u32*)(r6 + 0x4);
    r0 = (u32)(-(s32)r0);
    stack[8] = r0; // [sp + 0x20]
    r0 = 0x20; // sp + 0x20
loc_0801CD10:
    r1 = *(u32*)(r5);
    r0 = *(u32*)(r0);
    r3 = 0x24; // sp + 0x24
    r0 = r1 - r0;
    stack[9] = r0; // [sp + 0x24]
    r0 = r4;
    r0 += 0x1A4U;
    stack[17] = r0; // [sp + 0x44]
    r0 = *(u32*)(r0);
    stack[10] = r0; // [sp + 0x28]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CD30: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CD42;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r7) = (u32)r0;
    goto loc_0801CD7C;
loc_0801CD42:
    r0 = *(u32*)(r5);
    r1 = 0x44; // sp + 0x44
    stack[9] = r0; // [sp + 0x24]
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r2 = stack[16]; // [sp + 0x40]
    r3 = 0x24; // sp + 0x24
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CD5A;
    r1 = *(u32*)(r6 + 0x4);
    r1 = (u32)(-(s32)r1);
    stack[8] = r1; // [sp + 0x20]
    r1 = 0x20; // sp + 0x20
loc_0801CD5A:
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r1);
    r0 = r0 - r1;
    stack[10] = r0; // [sp + 0x28]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = r3;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CD6C: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CD8E;
    r0 = stack[9]; // [sp + 0x24]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[10]; // [sp + 0x28]
    *(u32*)(r7) = (u32)r0;
loc_0801CD7C:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CD86: BL __call_via_r3
    r0 = 0x0U;
    return sub_0801CBB2(r0, r1, r2, r3);
loc_0801CD8E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CD98: BL __call_via_r3
    r0 = 0x1U;
    return sub_0801CBB2(r0, r1, r2, r3);
}

// ROM Address: 0x0801CDA0..0x0801CDD6 (54 bytes, Thumb)
u32 sub_0801CDA0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801CDA6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CDB4;
    r1 = 0x080495E4U; // [0x0801CDBC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0801CDB4:
    return r0;
    r0 = r0;
    r4 = r6;
    r0 = (r0 << 12);
    stack[228] = r5; // [sp + 0x390]
    r4 = (r0 >> 32);
    r5 = r0;
    r0 = 0x03001C34U; // [0x0801CFF0]
    r4 = r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801CDD6(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801CDD6..0x0801CFDA (516 bytes, Thumb)
u32 sub_0801CDD6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801CDD8: BL 0x0800FDFA
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
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801CDFC: BL 0x0800FDFA
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
    if (cmp_lhs >= cmp_rhs) goto loc_0801CE36;
    r0 = (u32)(-(s32)r2);
loc_0801CE36:
    r1 = r0;
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CE40;
    r0 = (u32)(-(s32)r0);
loc_0801CE40:
    stack[13] = r1; // [sp + 0x34]
    stack[14] = r0; // [sp + 0x38]
    r0 = r1;
    r6 = 0x0U;
    r1 = stack[14]; // [sp + 0x38]
    r7 = 0x3U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    stack[14] = r6; // [sp + 0x38]
    stack[13] = r6; // [sp + 0x34]
    if (cmp_lhs <= cmp_rhs) goto loc_0801CEA0;
    cmp_lhs = (s32)r1; cmp_rhs = 3;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CE86;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CE62: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CE78;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CE74: BL __call_via_r3
loc_0801CE78:
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0801CE80;
    r7 = 0x2U;
loc_0801CE80:
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = 0x1U;
    return sub_0801CDD2(r0, r1, r2, r3);
loc_0801CE86:
    r0 = stack[16]; // [sp + 0x40]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801CE94;
    *(u8*)(r4 + 0x10) = (u8)r6;
    r0 = *(u32*)(r5 + 0x4);
    stack[14] = r0; // [sp + 0x38]
    goto loc_0801CEEC;
loc_0801CE94:
    r0 = 0x1U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = (u32)(-(s32)r0);
    stack[14] = r0; // [sp + 0x38]
    goto loc_0801CEEC;
loc_0801CEA0:
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs >= cmp_rhs) goto loc_0801CED4;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CEAE: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CEC4;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CEC0: BL __call_via_r3
loc_0801CEC4:
    r1 = stack[16]; // [sp + 0x40]
    r0 = 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801CECE;
    r0 = 0x0U;
loc_0801CECE:
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = 0x1U;
    return sub_0801CDD2(r0, r1, r2, r3);
loc_0801CED4:
    r0 = stack[15]; // [sp + 0x3C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801CEE2;
    *(u8*)(r4 + 0x10) = (u8)r7;
    r0 = *(u32*)(r5 + 0x4);
    stack[13] = r0; // [sp + 0x34]
    goto loc_0801CEEC;
loc_0801CEE2:
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
    r0 = *(u32*)(r5 + 0x4);
    r0 = (u32)(-(s32)r0);
    stack[13] = r0; // [sp + 0x34]
loc_0801CEEC:
    r0 = 0x4EU;
    r5 = *(u32*)(r4 + 0x58);
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0801CEF0: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0801CF0C;
    r0 = 0x11U;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0801CEFA: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0801CF0C;
    r0 = 0x4CU;
    r0 = sub_08000158(r0, r1, r2, r3); // 0x0801CF04: BL 0x08000158
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs != cmp_rhs) goto loc_0801CF2E;
loc_0801CF0C:
    r0 = *(u16*)(r4 + 0x12);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CF16;
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs != cmp_rhs) goto loc_0801CF2E;
loc_0801CF16:
    r0 = 0x0871E254U; // [0x0801CFF4]
    r1 = 0x27U;
    r2 = 0x083192A8U; // [0x0801CFF8]
    r1 = (r1 << 4);
    r1 = r1 + r2;
    r5 = 0x000005C4U; // [0x0801CFFC]
    r0 = *(u32*)(r0);
    r2 = 0x40U;
    r3 = r6;
    r0 = r0 + r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801CF2A
loc_0801CF2E:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CF38: BL __call_via_r3
    r5 = r4;
    r5 += 0x1A0U;
    r0 = *(u32*)(r5);
    r1 = stack[13]; // [sp + 0x34]
    r6 = r5 + 4;
    r0 = r0 + r1;
    r1 = *(u32*)(r5 + 0x4);
    r2 = stack[14]; // [sp + 0x38]
    stack[7] = r0; // [sp + 0x1C]
    r1 = r1 + r2;
    stack[8] = r1; // [sp + 0x20]
    stack[10] = r1; // [sp + 0x28]
    stack[12] = r1; // [sp + 0x30]
    stack[9] = r0; // [sp + 0x24]
    stack[11] = r0; // [sp + 0x2C]
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x54);
    r2 = r2 + r1;
    r1 = 0x2C; // sp + 0x2C
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CF66: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CFA8;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CF78: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801CF8E;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CF8A: BL __call_via_r3
loc_0801CF8E:
    r0 = stack[11]; // [sp + 0x2C]
    *(u32*)(r5) = (u32)r0;
    r0 = stack[12]; // [sp + 0x30]
    *(u32*)(r6) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CFA0: BL __call_via_r3
    r0 = 0x0U;
    return sub_0801CDD2(r0, r1, r2, r3);
loc_0801CFA8:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x34);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CFB2: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CFC8;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CFC4: BL __call_via_r3
loc_0801CFC8:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x48);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801CFD2: BL __call_via_r3
    r0 = 0x1U;
    return sub_0801CDD2(r0, r1, r2, r3);
}

// ROM Address: 0x0801CFDA..0x0801D046 (108 bytes, Thumb)
u32 sub_0801CFDA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0 + 0xC);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801CFE0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801CFEE;
    r1 = 0x08049A2CU; // [0x0801D000]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_0801CFEE:
    return r0;
    r4 = r6;
    r0 = (r0 << 12);
    return sub_0801D4A0(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r2 = stack[44]; // [sp + 0xB0]
    r4 = (r0 >> 32);
    r0 = 0x03001C34U; // [0x0801D08C]
    r0 = *(u32*)(r0);
    r2 = 0x0U;
    r3 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0801D090]
    stack[2] = r2; // [sp + 0x8]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r3; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0801D020;
    r2 = r1;
    r2 += 0x18CU;
loc_0801D020:
    r1 = r2;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0801D024
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0801D094]
    r4 = 0x1U;
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D040;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801D03C: BL __call_via_r3
loc_0801D040:
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801D046..0x0801D04A (4 bytes, Thumb)
u32 sub_0801D046(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03002BCCU; // [0x0801D098]
    return r0; // BX lr
}

// ROM Address: 0x0801D04A..0x0801D08C (66 bytes, Thumb)
u32 sub_0801D04A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001C34U; // [0x0801D08C]
    r0 = *(u32*)(r0);
    r2 = 0x0U;
    r3 = 0x0804AE70U /* &VTable_0804AE70 */; // [0x0801D090]
    stack[2] = r2; // [sp + 0x8]
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    stack[3] = r0; // [sp + 0xC]
    stack[1] = r3; // [sp + 0x4]
    if (cmp_lhs == cmp_rhs) goto loc_0801D066;
    r2 = r1;
    r2 += 0x18CU;
loc_0801D066:
    r1 = r2;
    r0 = 0x4; // sp + 0x4
    r0 = sub_0801599C(r0, r1, r2, r3); // 0x0801D06A
    r0 = 0x08049ACCU /* &VTable_08049ACC */; // [0x0801D094]
    r4 = 0x1U;
    stack[1] = r0; // [sp + 0x4]
    r0 = stack[2]; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D086;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801D082: BL __call_via_r3
loc_0801D086:
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801D08C..0x0801D08E (2 bytes, Thumb)
u32 sub_0801D08C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6;
    return r0;
}

// ROM Address: 0x0801D08E..0x0801D0A0 (18 bytes, Thumb)
u32 sub_0801D08E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x1C0; // sp + 0x1C0
    r4 = (r0 >> 32);
    r2 = stack[204]; // [sp + 0x330]
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r3; cmp_rhs = 204;
    r0 = (r0 << 12);
    r0 = 0x03002BD0U; // [0x0801D0A4]
    return r0; // BX lr
}

// ROM Address: 0x0801D0A0..0x0801D0A4 (4 bytes, Thumb)
u32 sub_0801D0A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0801D0A8..0x0801D0C4 (28 bytes, Thumb)
u32 sub_0801D0A8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r2;
    r6 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801D0C4(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x35U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801D0B8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801D0C4(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801D0C4..0x0801D15C (152 bytes, Thumb)
u32 sub_0801D0C4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x0801D3F4]
    r5 = r4;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r5 += 0x100U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    *(u32*)(r5 + 0xC) = (u32)r0;
    *(u32*)(r5 + 0x8) = (u32)r0;
    *(u32*)(r5 + 0x10) = (u32)r0;
    r0 = 0x0804AFCCU /* &VTable_0804AFCC */; // [0x0801D3F8]
    r2 = 0x0871E9A8U; // [0x0801D3FC]
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r2 + 0xC);
    r1 = (r6 << 2);
    r0 += 0xE4U;
    r0 = r1 + r0;
    r0 += 0x4U;
    *(u32*)(r5 + 0x30) = (u32)r0;
    *(u32*)(r5 + 0x14) = (u32)r6;
    *(u32*)(r5 + 0x18) = (u32)r7;
    r0 = *(u32*)(r2 + 0xC);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r6 = r0 + r1;
    r0 = 0x2CU;
    r1 = 0x086F82ECU; // [0x0801D400]
    r0 *= r7;
    r7 = r0 + r1;
    r0 = r6;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x0801D108
    r1 = *(u8*)(r7 + 0x15);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0801D12A;
    r0 = *(u8*)(r6 + 0x14);
    r1 = 0x086B82ECU; // [0x0801D404]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 29);
    r0 = (r0 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801D12A;
    r0 = 0x1U;
    goto loc_0801D12C;
loc_0801D12A:
    r0 = 0x0U;
loc_0801D12C:
    *(u32*)(r5 + 0x20) = (u32)r0;
    r2 = 0x0871E9A8U; // [0x0801D3FC]
    r0 = *(u32*)(r5 + 0x30);
    r2 = *(u32*)(r2 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u8*)(r2);
    r1 = (r1 >> 28);
    r1 -= 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_0801D144;
    r1 = 0x1U;
    goto loc_0801D146;
loc_0801D144:
    r1 = 0x0U;
loc_0801D146:
    *(u32*)(r5 + 0x24) = (u32)r1;
    r0 = *(u32*)(r0);
    r2 = 0x1U;
    r0 = (r0 >> 28);
    if (cmp_lhs != cmp_rhs) goto loc_0801D152;
    r2 = 0x0U;
loc_0801D152:
    r0 = r1 + r2;
    *(u32*)(r5 + 0x2C) = (u32)r0;
    *(u32*)(r5 + 0x28) = (u32)r2;
    r0 = r4;
    return sub_0801D0C2(r0, r1, r2, r3);
}

// ROM Address: 0x0801D15C..0x0801D44C (752 bytes, Thumb)
u32 sub_0801D15C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801D408]
    r5 = *(u32*)(r0 + 0x5C);
    r7 = *(u32*)(r0 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x44U;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x0U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801D17E: BL 0x08013E64
    r1 = 0xFFU;
    r1 += 0x1DU;
    *(u32*)(r1 + r4) = r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D18C
    r6 = 0x0871E9A8U; // [0x0801D3FC]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x8);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x50U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801D1A8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D1B0
    r1 = r5;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801D1B8
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x44U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801D1D6: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D1DE
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = r5;
    r2 += 0x10U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x50U;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801D1FA
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D202
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0801D20A: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D212
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F800U; // [0x0801D40C]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801D21E: BL 0x0804912C
    r2 = 0x4800U; // (9 << 11)
    r1 = 0x0U;
    r0 = 0x06009640U; // [0x0801D410]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801D22A: BL 0x0804912C
    r0 = 0x3U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x5U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x1BU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x11U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r2 = 0x00000259U; // [0x0801D414]
    r1 = 0x0600F800U; // [0x0801D40C]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x0801D244
    r1 = 0x00001F83U; // [0x0801D418]
    r0 = 0x4000000U; // (1 << 26)
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
    if (cmp_lhs == cmp_rhs) goto loc_0801D27A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801D276: BL __call_via_r3
loc_0801D27A:
    return r0;
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0xC);
    r2 = 0x12U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 += 0x1FU;
    *(u32*)(r1 + 0x4) = (u32)r0;
    *(u32*)(r1) = (u32)r2;
    r0 = 0x1U;
    return r0; // BX lr
    r4 = 0x104; // sp + 0x104
    r2 = 0x60U;
    r1 = 0xC0U;
    r0 = r4;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801D2A0
    r0 = r4;
    r0 = sub_08005096(r0, r1, r2, r3); // 0x0801D2A6
    r5 = 0x0871E9A8U; // [0x0801D3FC]
    r3 = 0x100; // sp + 0x100
    r0 = *(u32*)(r5 + 0x8);
    r1 = 0x086F82ECU; // [0x0801D400]
    stack[68] = r0; // [sp + 0x110]
    r0 = 0x0U;
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r3 + 0x6) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x0801D41C]
    stack[73] = r0; // [sp + 0x124]
    r0 = 0x5U;
    *(u8*)(r3 + 0x7) = (u8)r0;
    r6 = stack[78]; // [sp + 0x138]
    r3 = 0x2CU;
    r6 += 0x100U;
    r0 = *(u32*)(r6 + 0x18);
    r0 *= r3;
    r7 = r0 + r1;
    r0 = *(u32*)(r7 + 0x10);
    r1 = 0x4; // sp + 0x4
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0801D2D6
    r2 = 0x0871E9A8U; // [0x0801D3FC]
    r1 = 0x4; // sp + 0x4
    r2 += 0x20U;
    r0 = r4;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x0801D2E2
    r0 = 0x22U;
    stack[66] = r0; // [sp + 0x108]
    r0 = 0x13U;
    stack[67] = r0; // [sp + 0x10C]
    r0 = *(u16*)(r7);
    r3 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801D408]
    r0 = (r0 << 2);
    r1 = *(u32*)(r3 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801D2F8
    r0 = *(u32*)(r6 + 0x24);
    r4 = *(u32*)(r6 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801D306;
    r4 += 0x1U;
loc_0801D306:
    r1 = *(u32*)(r6 + 0x28);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801D312;
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs < cmp_rhs) goto loc_0801D312;
    r4 += 0x1U;
loc_0801D312:
    r1 = 0x0871E9A8U; // [0x0801D3FC]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = *(u32*)(r1 + 0x1C);
    r7 = *(u32*)(r1 + 0x18);
    if (cmp_lhs == cmp_rhs) goto loc_0801D368;
    stack[66] = r7; // [sp + 0x108]
    stack[67] = r5; // [sp + 0x10C]
    r2 = *(u32*)(r6 + 0x20);
    r1 = 0x75U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r0 = 0x104; // sp + 0x104
    if (cmp_lhs == cmp_rhs) goto loc_0801D332;
    r1 = 0x6U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D332;
    r1 = 0x2U;
loc_0801D332:
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x7) = (u8)r1;
    r1 = 0x0871E9A8U; // [0x0801D3FC]
    r3 = 0x68U;
    r1 = *(u32*)(r1 + 0xC);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 = *(u8*)(r1 + 0x14);
    r2 = 0x086B82ECU; // [0x0801D404]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u16*)(r1 + 0x2);
    r3 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801D408]
    r1 = (r1 << 2);
    r2 = *(u32*)(r3 + r1);
    r1 = 0xFFU;
    r1 += 0x19U;
    r1 = *(u32*)(r3 + r1);
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801D362
    r5 += 0xCU;
loc_0801D368:
    r0 = *(u32*)(r6 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D3B8;
    r1 = 0x6U;
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    r0 = 0x104; // sp + 0x104
    stack[66] = r7; // [sp + 0x108]
    stack[67] = r5; // [sp + 0x10C]
    if (cmp_lhs == cmp_rhs) goto loc_0801D37C;
    r1 = 0x2U;
loc_0801D37C:
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x7) = (u8)r1;
    r2 = *(u32*)(r6 + 0x30);
    r3 = 0x68U;
    r2 = *(u32*)(r2);
    r1 = 0x0871E9A8U; // [0x0801D3FC]
    r2 = (r2 >> 28);
    r2 -= 0x1U;
    r1 = *(u32*)(r1 + 0xC);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 = *(u8*)(r1 + 0x14);
    r2 = 0x086B82ECU; // [0x0801D404]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u16*)(r1 + 0x2);
    r3 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801D408]
    r1 = (r1 << 2);
    r2 = *(u32*)(r3 + r1);
    r1 = 0xFFU;
    r1 += 0x1DU;
    r1 = *(u32*)(r3 + r1);
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801D3B2
    r5 += 0xCU;
loc_0801D3B8:
    r1 = 0x6U;
    cmp_lhs = (s32)r4; cmp_rhs = 2;
    r0 = 0x104; // sp + 0x104
    stack[66] = r7; // [sp + 0x108]
    stack[67] = r5; // [sp + 0x10C]
    if (cmp_lhs == cmp_rhs) goto loc_0801D3C6;
    r1 = 0x2U;
loc_0801D3C6:
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x7) = (u8)r1;
    r1 = 0xFFU;
    r1 += 0x21U;
    r3 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801D408]
    r4 = r0;
    r1 = *(u32*)(r3 + r1);
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801D3D4
    r1 = r4;
    r0 = stack[78]; // [sp + 0x138]
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x0801D3DC
    r1 = 0x06009640U; // [0x0801D410]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0801D3E4: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x104; // sp + 0x104
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801D3EC: BL 0x0803F58C
    return r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r7 = 0x330; // sp + 0x330
    r4 = (r0 >> 32);
    r1 = (r6 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r6 = (r0 >> 32);
    r0 = (r0 << 24);
    stack[64] = r6; // [sp + 0x100]
    r0 = (r0 << 24);
    r1 = (r3 << 9);
    r0 = r0;
    r3 = r0 - 6;
    r0 = r0;
    r3 = (r0 >> 32);
    r7 = 0x0871E9A8U; // [0x0801D5E4]
    r4 = r0;
    r0 = 0x000005C4U; // [0x0801D5E0]
    r1 = *(u32*)(r7 + 0x4);
    r3 = 0x0U;
    r0 = r1 + r0;
    r1 = 0x08319488U; // [0x0801D5E8]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801D44C(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0801D50A(r0, r1, r2, r3);
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801D43C
    r0 = 0x3U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801D442
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801D44C..0x0801D50C (192 bytes, Thumb)
u32 sub_0801D44C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801D44E
    r4 += 0x100U;
    r0 = *(u32*)(r4 + 0xC);
    r1 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801D460;
    r0 += 0x1U;
loc_0801D460:
    r1 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801D46C;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs < cmp_rhs) goto loc_0801D46C;
    r0 += 0x1U;
loc_0801D46C:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D4C4;
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0801D4E4;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0801D50A;
    r1 = 0x2FU;
    r0 = *(u32*)(r7 + 0x14);
    r1 = (r1 << 6);
    r5 = r0 + r1;
    r2 = 0x0U;
    r1 = 0x9U;
    r0 = *(u32*)(r5 + 0x38);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x0801D486
    r6 = r0;
    r0 = *(u32*)(r7 + 0x10);
    r0 += 0x80U;
    r0 = *(u32*)(r0 + 0x10);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801D4BC;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D4BC;
    r2 = r7;
    r7 = 0x61U;
    r0 = *(u32*)(r5 + 0x38);
    r7 = (r7 << 4);
    r1 = r0 + r7;
    r3 = 0x03001AFCU; // [0x0801D5EC]
    r1 = *(u32*)(r1);
    r3 = *(u32*)(r3);
    r1 = r1 + r3;
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_0801D4BC;
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0801D4B0
    r1 = 0xFFU;
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_0801D50C(r0, r1, r2, r3);
loc_0801D4BC:
    r0 = 0x4U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801D4BE
    return sub_0801D56E(r0, r1, r2, r3);
loc_0801D4C4:
    r0 = *(u32*)(r4 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D4E0;
    r0 = *(u32*)(r7 + 0xC);
    r4 += 0x14U;
    r1 = *(u8*)(r0);
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r0 = sub_080045C8(r0, r1, r2, r3); // 0x0801D4D2: BL 0x080045C8
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801D4D8
    r0 = 0x1U;
    return sub_0801D448(r0, r1, r2, r3);
loc_0801D4E0:
    r0 = 0x0U;
    return sub_0801D448(r0, r1, r2, r3);
loc_0801D4E4:
    r0 = *(u32*)(r4 + 0x30);
    r3 = 0x2CU;
    r0 = *(u32*)(r0);
    r2 = 0x086F82ECU; // [0x0801D5F0]
    r1 = (r0 << 4);
    r1 = (r1 >> 4);
    r1 *= r3;
    r1 = r1 + r2;
    r2 = *(u8*)(r1 + 0x14);
    r1 = (r0 >> 28);
    r1 -= 0x1U;
    r0 = *(u32*)(r7 + 0xC);
    r0 = sub_08004544(r0, r1, r2, r3); // 0x0801D4FC
    r0 = 0x3U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801D502
    r0 = 0x1U;
    return sub_0801D448(r0, r1, r2, r3);
loc_0801D50A:
    return sub_0801D572(r0, r1, r2, r3);
}

// ROM Address: 0x0801D50C..0x0801D572 (102 bytes, Thumb)
u32 sub_0801D50C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r5 + 0x38);
    r1 = r6;
    r0 = 0xC; // sp + 0xC
    r0 = Object_WriteBounds1(r0, r1, r2, r3); // 0x0801D512: BL 0x0800FDFA
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r2 = stack[6]; // [sp + 0x18]
    r1 = r0 + r1;
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r1 = ((u32)((s32)r1 >> 1));
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[2] = r0; // [sp + 0x8]
    stack[8] = r0; // [sp + 0x20]
    stack[1] = r1; // [sp + 0x4]
    stack[7] = r1; // [sp + 0x1C]
    r6 = *(u32*)(r4 + 0x18);
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801D536: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D550;
    r1 = 0x1U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = 0x08049ABCU /* &VTable_08049ABC */; // [0x0801D5F4]
    r2 = 0x1C; // sp + 0x1C
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    r0 += 0x8U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x14U;
loc_0801D550:
    r1 = r5 + r7;
    r2 = *(u32*)(r1);
    r3 = r2 + 1;
    *(u32*)(r1) = (u32)r3;
    r2 = (r2 << 2);
    r1 = r2 + r1;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0871E9A8U; // [0x0801D5E4]
    r1 = *(u32*)(r4 + 0x14);
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08004656(r0, r1, r2, r3); // 0x0801D564
    r0 = 0x2U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801D56A
    r0 = 0x1U;
    return sub_0801D448(r0, r1, r2, r3);
}

// ROM Address: 0x0801D572..0x0801D576 (4 bytes, Thumb)
u32 sub_0801D572(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0801D448(r0, r1, r2, r3);
}

// ROM Address: 0x0801D576..0x0801D68C (278 bytes, Thumb)
u32 sub_0801D576(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0871E9A8U; // [0x0801D5E4]
    r3 = 0x0871E9A8U; // [0x0801D5E4]
    r1 = *(u32*)(r1);
    r5 = 0x08319488U; // [0x0801D5E8]
    r1 = *(u16*)(r1 + 0x4);
    r3 = *(u32*)(r3 + 0x4);
    r4 = r0;
    r2 = 0x000005C4U; // [0x0801D5E0]
    r4 += 0xFFU;
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    r4 += 0x1U;
    r7 = 0x0U;
    r5 -= 0xCU;
    r6 = r3 + r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D5B4;
    r1 = r5;
    r3 = r7;
    r2 = 0x40U;
    r0 = r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801D5A2
    r0 = *(u32*)(r4 + 0xC);
    r0 -= 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0801D5B2;
    r0 = *(u32*)(r4 + 0x2C);
    *(u32*)(r4 + 0xC) = (u32)r0;
loc_0801D5B2:
    *(u32*)(r4 + 0x10) = (u32)r7;
loc_0801D5B4:
    r0 = 0x0871E9A8U; // [0x0801D5E4]
    r0 = *(u32*)(r0);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801D5DC;
    r1 = r5;
    r3 = r7;
    r2 = 0x40U;
    r0 = r6;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801D5C8
    r0 = *(u32*)(r4 + 0xC);
    r0 += 0x1U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r1 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0801D5DA;
    *(u32*)(r4 + 0xC) = (u32)r7;
loc_0801D5DA:
    *(u32*)(r4 + 0x10) = (u32)r7;
loc_0801D5DC:
    r0 = 0x0U;
    return r0;
    r4 = (r0 << 23);
    r0 = r0;
    r1 = (r6 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r4 = r7 - r3;
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    r2 = stack[188]; // [sp + 0x2F0]
    r4 = (r0 >> 32);
    r1 = 0x0871E9D8U; // [0x0801D958]
    r1 = *(u32*)(r1 + 0xC);
    r3 = 0x68U;
    r2 = *(u8*)(r1);
    r5 = r0;
    r5 += 0xFFU;
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r4 = r1 + r2;
    r5 += 0x1U;
    r1 = *(u32*)(r5 + 0x14);
    r1 = (r1 << 2);
    r2 = r1 + r4;
    r2 += 0x3CU;
    r6 = *(u32*)(r2);
    r1 = r5;
    r1 += 0x50U;
    r0 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801D63C;
    r0 = r2;
    r2 = *(u32*)(r5 + 0x3C);
    r2 = (r2 << 3);
    r1 = r2 + r1;
    r1 = *(u32*)(r1 + 0x4);
    r1 = (r1 << 4);
    r1 = (r1 >> 4);
loc_0801D634:
    *(u32*)(r0) = (u32)r1;
    r2 = *(u32*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0801D634;
loc_0801D63C:
    r0 = r4;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0801D63E
    r0 = *(u32*)(r5 + 0x14);
    r0 = (r0 << 2);
    r0 = r0 + r4;
    r0 += 0x3CU;
loc_0801D64A:
    *(u32*)(r0) = (u32)r6;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0801D64A;
    r0 = r4;
    r0 += 0x4CU;
    r0 = *(u16*)(r0);
    *(u32*)(r5 + 0x28) = (u32)r0;
    r0 = r4;
    r0 += 0x4EU;
    r0 = *(u16*)(r0);
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r0 = r4;
    r0 += 0x50U;
    r0 = *(u16*)(r0);
    *(u32*)(r5 + 0x30) = (u32)r0;
    r0 = r4;
    r0 += 0x54U;
    r0 = *(u16*)(r0);
    *(u32*)(r5 + 0x34) = (u32)r0;
    return r0;
    r6 = r1;
    r5 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801D68C(r0, r1, r2, r3);
    r0 = 0x00000924U; // [0x0801D95C]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801D680: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801D68C(r0, r1, r2, r3);
    r0 = r5;
    return r0;
}

// ROM Address: 0x0801D68C..0x0801D762 (214 bytes, Thumb)
u32 sub_0801D68C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x0801D960]
    r1 = 0x0U;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    r5 -= 0x8U;
    r4 = r5;
    r4 += 0x100U;
    r0 = 0x0U;
    *(u32*)(r4 + 0xC) = (u32)r0;
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r0;
    r0 = 0x0804A8F4U /* &VTable_0804A8F4 */; // [0x0801D964]
    r7 = r4;
    *(u32*)(r5) = (u32)r0;
    r0 = 0x0U;
    r7 += 0x50U;
    *(u32*)(r7) = (u32)r0;
    r0 = 0x0871E9D8U; // [0x0801D958]
    *(u32*)(r4 + 0x14) = (u32)r6;
    r0 = *(u32*)(r0 + 0xC);
    r3 = 0x68U;
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r6 = r0 + r1;
    r0 = r6;
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0801D6C4
    r0 = r6;
    r0 += 0x4CU;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x28) = (u32)r0;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r6;
    r0 += 0x4EU;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x2C) = (u32)r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = r6;
    r0 += 0x50U;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x30) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r6;
    r0 += 0x54U;
    r0 = *(u16*)(r0);
    *(u32*)(r4 + 0x34) = (u32)r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = 0x0U;
    r1 = 0x0871E9D8U; // [0x0801D958]
    *(u32*)(r4 + 0x3C) = (u32)r0;
    r1 = *(u32*)(r1 + 0xC);
    r1 += 0xE4U;
    r2 = *(u32*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801D74C;
loc_0801D700:
    r2 = (r0 << 2);
    r2 = r2 + r1;
    r2 += 0x4U;
    r3 = *(u32*)(r2);
    r6 = (r3 << 4);
    r12 = r3;
    r3 = 0x2CU;
    r6 = (r6 >> 4);
    r3 *= r6;
    r6 = 0x086F82ECU; // [0x0801D968]
    r3 = r3 + r6;
    r3 = *(u8*)(r3 + 0x14);
    r6 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0801D744;
    r6 = 0x0871E9D8U; // [0x0801D958]
    r3 = r12;
    r6 = *(u32*)(r6 + 0xC);
    r3 = (r3 >> 28);
    r6 = *(u8*)(r6);
    r3 -= 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0801D732;
    r3 = *(u32*)(r7);
    *(u32*)(r4 + 0x3C) = (u32)r3;
loc_0801D732:
    r3 = *(u32*)(r7);
    r6 = r3 + 1;
    r3 = (r3 << 3);
    r3 = r3 + r7;
    *(u32*)(r7) = (u32)r6;
    r2 = *(u32*)(r2);
    r3 += 0x4U;
    *(u32*)(r3 + 0x4) = (u32)r0;
    *(u32*)(r3) = (u32)r2;
loc_0801D744:
    r2 = *(u32*)(r1);
    r0 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801D700;
loc_0801D74C:
    r0 = *(u32*)(r4 + 0x3C);
    r0 -= 0x2U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0801D758;
    r0 = 0x0U;
    *(u32*)(r4 + 0x38) = (u32)r0;
loc_0801D758:
    r0 = r5;
    r0 = sub_0801D5F8(r0, r1, r2, r3); // 0x0801D75A
    r0 = r5;
    return sub_0801D68A(r0, r1, r2, r3);
}

// ROM Address: 0x0801D790..0x0801D94C (444 bytes, Thumb)
u32 sub_0801D790(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0; // BX lr
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801D96C]
    r6 = *(u32*)(r0 + 0x5C);
    r0 = *(u32*)(r0 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801D7BC: BL 0x08013E64
    r5 = r4;
    r5 += 0x140U;
    *(u32*)(r5) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D7CC
    r7 = 0x0871E9D8U; // [0x0801D958]
    r1 = 0x0U;
    r2 = *(u32*)(r7 + 0x8);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r6; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801D7E8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D7F0
    r1 = r6;
    r0 = *(u32*)(r7 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801D7F8
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r6 = r0;
    r1 = 0x1U;
    r6 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r6;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801D816: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D81E
    r2 = *(u32*)(r7 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[4]; // [sp + 0x10]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r2 = r6;
    r2 += 0x10U;
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801D83C
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D844
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x6U;
    r1 = r4;
    r3 = 0x8U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801D860: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D868
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x8U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x7U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x7U;
    r1 = r4;
    r3 = 0xD0U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801D884: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D88C
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801D96C]
    r0 = 0x84U;
    r3 = *(u32*)(r1 + r0);
    r2 = *(u32*)(r7 + 0x8);
    stack[0] = r3; // [sp + 0x0]
    r1 = 0x0U;
    r6 = 0x14U;
    r3 = r6;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x2U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x22U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801D8AE
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D8B6
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801D96C]
    r1 = 0x2U;
    r3 = *(u32*)(r0 + 0x8);
    r2 = *(u32*)(r7 + 0x8);
    stack[0] = r3; // [sp + 0x0]
    r3 = r6;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r2; // [sp + 0xC]
    r2 = 0xCEU;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801D8D2
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D8DA
    r0 = 0xFFU;
    r0 += 0x51U;
    r0 = *(u32*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801D94C(r0, r1, r2, r3);
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1EU;
    r1 = 0x1U;
    r6 = 0x9EU;
    r3 = r6;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x2U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x2U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801D902: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D90C
    r2 = 0x1U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x4BU;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x3U;
    r3 = r6;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x3U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801D928: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0x8) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D932
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0801D93A: BL 0x08016208
    r1 = r0;
    *(u32*)(r5 + 0xC) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801D944
    return r0;
}

// ROM Address: 0x0801D94C..0x0801D958 (12 bytes, Thumb)
u32 sub_0801D94C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    *(u32*)(r5 + 0x8) = (u32)r0;
    r1 = *(u32*)(r5);
    *(u32*)(r1 + 0x8) = (u32)r0;
    return sub_0801D948(r0, r1, r2, r3);
}

// ROM Address: 0x0801D95A..0x0801D988 (46 bytes, Thumb)
u32 sub_0801D95A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r6 >> 1);
    r4 = (r4 >> 4);
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r0 = 0x3D0; // sp + 0x3D0
    r4 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    r6 = (r0 >> 32);
    r0 += 0x138U;
    r0 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = r2 - r0;
    r0 = (r0 << 4);
    r0 += 0x24U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r2 = 0x12U;
    *(u32*)(r1) = (u32)r2;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0801D988..0x0801DC20 (664 bytes, Thumb)
u32 sub_0801D988(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801D992
    r3 = 0x0U;
    r2 = 0x24U;
    r1 = 0x11C; // sp + 0x11C
    r0 = stack[86]; // [sp + 0x158]
    r0 = sub_08006718(r0, r1, r2, r3); // 0x0801D99E
    r2 = stack[86]; // [sp + 0x158]
    r5 = 0x1U;
    r2 += 0x150U;
    stack[85] = r2; // [sp + 0x154]
    r0 = *(u32*)(r2);
    r7 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801DC68]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801DA8A;
    r2 = stack[86]; // [sp + 0x158]
    r0 = r5;
    r2 += 0x140U;
    r1 = *(u32*)(r2 + 0x4);
    r4 = stack[86]; // [sp + 0x158]
    r4 += 0x100U;
    r3 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0801D9CC;
    r0 = 0x0U;
loc_0801D9CC:
    *(u32*)(r1 + 0x8) = (u32)r0;
    r0 = *(u32*)(r2 + 0x8);
    r2 = stack[85]; // [sp + 0x154]
    r1 = *(u32*)(r2);
    r2 = *(u32*)(r4 + 0x3C);
    r1 -= 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0801D9E0;
    r1 = 0x1U;
    goto loc_0801D9E2;
loc_0801D9E0:
    r1 = 0x0U;
loc_0801D9E2:
    *(u32*)(r0 + 0x8) = (u32)r1;
    r1 = 0xA5U;
    r3 = 0x4BU;
    r2 = 0x2DU;
    r6 = 0x11C; // sp + 0x11C
    r0 = r6;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x0801D9EE
    r3 = 0xE0U;
    r2 = 0x5EU;
    r1 = 0x10U;
    r0 = r6;
    r0 = sub_08005154(r0, r1, r2, r3); // 0x0801D9FA
    r6 = 0x0871E9D8U; // [0x0801DC6C]
    r3 = 0x68U;
    r0 = *(u32*)(r6 + 0xC);
    r1 = *(u8*)(r0);
    r1 *= r3;
    r0 = r1 + r0;
    r1 = 0x4F8U; // (159 << 3)
    r0 = r0 + r1;
    stack[70] = r0; // [sp + 0x118]
    r0 = sub_08013C66(r0, r1, r2, r3); // 0x0801DA12
    r0 = *(u32*)(r6 + 0x8);
    r3 = 0x100; // sp + 0x100
    stack[74] = r0; // [sp + 0x128]
    r0 = 0x0U;
    *(u8*)(r3 + 0x1C) = (u8)r0;
    *(u8*)(r3 + 0x1E) = (u8)r5;
    r0 = 0x0803F5A5U; // [0x0801DC70]
    r6 = 0xAFU;
    stack[79] = r0; // [sp + 0x13C]
    r0 = 0x28U;
    stack[73] = r0; // [sp + 0x124]
    stack[72] = r6; // [sp + 0x120]
    r0 = *(u32*)(r4 + 0x18);
    r2 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801DA3A;
    r0 = 0x37U;
    goto loc_0801DA44;
loc_0801DA3A:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801DA42;
    r0 = 0x38U;
    goto loc_0801DA44;
loc_0801DA42:
    r0 = 0x39U;
loc_0801DA44:
    r0 = (r0 << 2);
    r1 = *(u32*)(r7 + r0);
    r5 = r7;
    r7 = 0x11C; // sp + 0x11C
    r0 = r7;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801DA4E
    r0 = 0x34U;
    stack[73] = r0; // [sp + 0x124]
    stack[72] = r6; // [sp + 0x120]
    r0 = *(u32*)(r4 + 0x1C);
    r2 = *(u32*)(r4 + 0x2C);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801DA64;
    r0 = 0x3AU;
    goto loc_0801DA6E;
loc_0801DA64:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801DA6C;
    r0 = 0x3BU;
    goto loc_0801DA6E;
loc_0801DA6C:
    r0 = 0x3CU;
loc_0801DA6E:
    r0 = (r0 << 2);
    r1 = *(u32*)(r5 + r0);
    r0 = r7;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801DA74
    r0 = 0x40U;
    stack[73] = r0; // [sp + 0x124]
    stack[72] = r6; // [sp + 0x120]
    r0 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r4 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801DA8C;
    r0 = 0x3DU;
    goto loc_0801DA96;
loc_0801DA8A:
    return sub_0801DC20(r0, r1, r2, r3);
loc_0801DA8C:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801DA94;
    r0 = 0x3EU;
    goto loc_0801DA96;
loc_0801DA94:
    r0 = 0x3FU;
loc_0801DA96:
    r0 = (r0 << 2);
    r1 = *(u32*)(r5 + r0);
    r0 = r7;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801DA9C
    r0 = 0xAFU;
    stack[72] = r0; // [sp + 0x120]
    r0 = 0x4CU;
    stack[73] = r0; // [sp + 0x124]
    r0 = *(u32*)(r4 + 0x24);
    r2 = *(u32*)(r4 + 0x34);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801DAB4;
    r0 = 0x40U;
    goto loc_0801DABE;
loc_0801DAB4:
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801DABC;
    r0 = 0x41U;
    goto loc_0801DABE;
loc_0801DABC:
    r0 = 0x42U;
loc_0801DABE:
    r0 = (r0 << 2);
    r1 = *(u32*)(r5 + r0);
    r0 = r7;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801DAC4
    r2 = stack[85]; // [sp + 0x154]
    r0 = *(u32*)(r4 + 0x3C);
    r3 = 0x2CU;
    r0 = (r0 << 3);
    r0 = r0 + r2;
    r0 = *(u32*)(r0 + 0x4);
    r2 = 0x086F82ECU; // [0x0801DC74]
    r0 = (r0 << 4);
    r0 = (r0 >> 4);
    r0 *= r3;
    r6 = r0 + r2;
    r0 = 0xAFU;
    stack[72] = r0; // [sp + 0x120]
    r0 = 0x58U;
    stack[73] = r0; // [sp + 0x124]
    r0 = stack[70]; // [sp + 0x118]
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x0801DAE8
    r2 = *(u8*)(r6 + 0x15);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_0801DAF6;
    r0 = 0x43U;
    goto loc_0801DAF8;
loc_0801DAF6:
    r0 = 0x44U;
loc_0801DAF8:
    r0 = (r0 << 2);
    r1 = *(u32*)(r5 + r0);
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801DAFE
    r0 = *(u32*)(r4 + 0x3C);
    r2 = *(u32*)(r4 + 0x38);
    r1 = r0 - 3;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0801DB0E;
    *(u32*)(r4 + 0x38) = (u32)r1;
loc_0801DB0E:
    r1 = *(u32*)(r4 + 0x38);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0801DB16;
    *(u32*)(r4 + 0x38) = (u32)r0;
loc_0801DB16:
    r6 = 0x0U;
loc_0801DB18:
    r0 = *(u32*)(r4 + 0x38);
    r2 = stack[85]; // [sp + 0x154]
    r0 = r0 + r6;
    r1 = *(u32*)(r2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801DC06;
    r2 = stack[85]; // [sp + 0x154]
    r1 = (r0 << 3);
    r7 = r1 + r2;
    r7 += 0x4U;
    r1 = *(u32*)(r7);
    r3 = 0x2CU;
    r1 = (r1 << 4);
    r1 = (r1 >> 4);
    r2 = 0x086F82ECU; // [0x0801DC74]
    r1 *= r3;
    r5 = r1 + r2;
    r1 = *(u32*)(r4 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801DB7A;
    r0 = 0x2U;
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x1F) = (u8)r0;
    r0 = 0x13U;
    stack[72] = r0; // [sp + 0x120]
    r0 = 0x6AU;
    stack[73] = r0; // [sp + 0x124]
    r0 = 0xCU;
    *(u8*)(r3 + 0x1D) = (u8)r0;
    r0 = *(u16*)(r5 + 0x2);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801DC68]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r1 = 0xCCU;
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x0801DB5E
    r0 = stack[70]; // [sp + 0x118]
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x0801DB64
    r1 = *(u8*)(r5 + 0x15);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0801DB72;
    r0 = 0x6U;
    goto loc_0801DB74;
loc_0801DB72:
    r0 = 0x75U;
loc_0801DB74:
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x1F) = (u8)r0;
    goto loc_0801DB90;
loc_0801DB7A:
    r0 = stack[70]; // [sp + 0x118]
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x0801DB7C
    r1 = *(u8*)(r5 + 0x15);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_0801DB8A;
    r0 = 0x2U;
    goto loc_0801DB8C;
loc_0801DB8A:
    r0 = 0x75U;
loc_0801DB8C:
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x1F) = (u8)r0;
loc_0801DB90:
    r0 = (r6 << 4);
    stack[84] = r0; // [sp + 0x150]
    r0 += 0x1CU;
    stack[67] = r0; // [sp + 0x10C]
    r0 = 0x20U;
    stack[68] = r0; // [sp + 0x110]
    r0 = stack[67]; // [sp + 0x10C]
    r1 = 0x10U;
    r0 = r0 + r1;
    stack[66] = r1; // [sp + 0x108]
    stack[69] = r0; // [sp + 0x114]
    r0 = *(u32*)(r5 + 0x10);
    r1 = 0x8; // sp + 0x8
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0801DBAA
    r2 = 0x108; // sp + 0x108
    r1 = 0x8; // sp + 0x8
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x0801DBB4
    r0 = stack[84]; // [sp + 0x150]
    r1 = 0x22U;
    r0 += 0x28U;
    stack[73] = r0; // [sp + 0x124]
    stack[72] = r1; // [sp + 0x120]
    r0 = *(u32*)(r7);
    r0 = (r0 >> 28);
    r0 = *(u16*)(r5);
    if (cmp_lhs == cmp_rhs) goto loc_0801DC08;
    r5 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801DC68]
    r0 = (r0 << 2);
    r0 = *(u32*)(r5 + r0);
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xFFU;
    r0 += 0x15U;
    r1 = *(u32*)(r5 + r0);
    r0 = stack[74]; // [sp + 0x128]
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801DBDA
    r1 = 0x7AU;
    r1 = r1 - r0;
    r0 = 0x11C; // sp + 0x11C
    r2 = stack[1]; // [sp + 0x4]
    r0 = sub_0803DCC4(r0, r1, r2, r3); // 0x0801DBE6
    r0 = *(u32*)(r7);
    r1 = 0x086B7590U; // [0x0801DC78]
    r0 = (r0 >> 28);
    r0 -= 0x1U;
    r0 = *(u8*)(r1 + r0);
    r3 = 0x100; // sp + 0x100
    *(u8*)(r3 + 0x1F) = (u8)r0;
    r0 = 0xFFU;
    r0 += 0x15U;
    r1 = *(u32*)(r5 + r0);
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801DC00
    goto loc_0801DC16;
loc_0801DC06:
    return sub_0801DC48(r0, r1, r2, r3);
loc_0801DC08:
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801DC68]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r1 = 0x7AU;
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803DCC4(r0, r1, r2, r3); // 0x0801DC12
loc_0801DC16:
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 4;
    if (cmp_lhs >= cmp_rhs) goto loc_0801DC1E;
    goto loc_0801DB18;
loc_0801DC1E:
    return sub_0801DC48(r0, r1, r2, r3);
}

// ROM Address: 0x0801DC20..0x0801DCD4 (180 bytes, Thumb)
u32 sub_0801DC20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0871E9D8U; // [0x0801DC6C]
    r3 = 0x100; // sp + 0x100
    r0 = *(u32*)(r6 + 0x8);
    stack[74] = r0; // [sp + 0x128]
    r0 = 0x78U;
    *(u8*)(r3 + 0x1C) = (u8)r5;
    stack[72] = r0; // [sp + 0x120]
    r0 = 0x58U;
    stack[73] = r0; // [sp + 0x124]
    r0 = 0x0803F5A5U; // [0x0801DC70]
    *(u8*)(r3 + 0x1E) = (u8)r5;
    stack[79] = r0; // [sp + 0x13C]
    r0 = 0x2U;
    *(u8*)(r3 + 0x1F) = (u8)r0;
    r0 = 0xFFU;
    r0 += 0x25U;
    r1 = *(u32*)(r7 + r0);
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801DC44
    r6 = 0x11C; // sp + 0x11C
    r1 = r6;
    r0 = stack[86]; // [sp + 0x158]
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x0801DC4E
    r1 = 0x06000040U; // [0x0801DC7C]
    r0 = r6;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0801DC56: BL 0x08049150
    r1 = 0x0U;
    r0 = 0x11C; // sp + 0x11C
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801DC5E: BL 0x0803F58C
    return r0;
    r0 = r0;
    r6 = (r0 >> 32);
    r1 = (r6 >> 1);
    r3 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    *(u8*)(r2 + 0x16) = (u8)r0;
    r3 = (r5 >> 1);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r4 = r0;
    r4 += 0x150U;
    r1 = 0x0U;
    r2 = 0x0871E9D8U; // [0x0801DF84]
    *(u32*)(r4) = (u32)r1;
    r2 = *(u32*)(r2 + 0xC);
    r2 += 0xE4U;
    r3 = *(u32*)(r2);
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801DCD0;
    r5 = r4;
    r6 = 0x086F82ECU; // [0x0801DF88]
    r5 -= 0x50U;
loc_0801DC9E:
    r0 = (r1 << 2);
    r0 = r0 + r2;
    r0 += 0x4U;
    r3 = *(u32*)(r0);
    r7 = (r3 << 4);
    r7 = (r7 >> 4);
    r3 = 0x2CU;
    r3 *= r7;
    r3 = r3 + r6;
    r3 = *(u8*)(r3 + 0x14);
    r7 = *(u32*)(r5 + 0x14);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_0801DCC8;
    r3 = *(u32*)(r4);
    r7 = r3 + 1;
    r3 = (r3 << 3);
    *(u32*)(r4) = (u32)r7;
    r0 = *(u32*)(r0);
    r3 = r3 + r4;
    r3 += 0x4U;
    *(u32*)r3 = r0; r3 += 4;
    *(u32*)r3 = r1; r3 += 4;
loc_0801DCC8:
    r0 = *(u32*)(r2);
    r1 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_0801DC9E;
loc_0801DCD0:
    return r0; // BX lr
}

// ROM Address: 0x0801DCD4..0x0801DD72 (158 bytes, Thumb)
u32 sub_0801DCD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    cmp_lhs = (s32)r2; cmp_rhs = 8;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801DCE6;
    r3 = 0x0801DCE8U;
    r3 = r3 + r2;
    r3 = *(u16*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
loc_0801DCE6:
    return sub_0801DDEC(r0, r1, r2, r3);
    r0 = r1;
    r4 = (r6 << 2);
    r6 = (r2 << 4);
    r7 = (r5 << 4);
    r3 = (r1 << 5);
    r3 = (r1 << 5);
    r7 = (r2 << 3);
    r7 = (r4 << 3);
    r7 = r4;
    r7 += 0x150U;
    r0 = *(u32*)(r7);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801DDEC(r0, r1, r2, r3);
    r2 = 0x0871E9D8U; // [0x0801DF84]
    r5 = 0x000005C4U; // [0x0801DF90]
    r0 = *(u32*)(r2 + 0x4);
    r2 = 0x40U;
    r3 = 0x0U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x0801DF8C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801DD12
    r5 = r7;
    r5 -= 0x50U;
    r0 = *(u32*)(r5 + 0x3C);
    r0 = (r0 << 3);
    r6 = r0 + r7;
    r6 += 0x4U;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r6 + 0x4);
    r2 = (r0 << 4);
    r2 = (r2 >> 4);
    r0 = 0x0U;
    r0 = sub_0801D0A8(r0, r1, r2, r3); // 0x0801DD2C: BL 0x0801D0A8
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801DD30
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0801DD72(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0801DDA2(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 3;
    if (cmp_lhs == cmp_rhs) return sub_0801DE06(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs != cmp_rhs) return sub_0801DDEC(r0, r1, r2, r3);
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801DD48: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801DD68;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801DF94]
    r3 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r3;
    *(u32*)(r1 + 0x8) = (u32)r3;
    *(u32*)(r1 + 0x10) = (u32)r3;
    r1 = 0x0804A8C8U /* &VTable_0804A8C8 */; // [0x0801DF98]
    *(u32*)(r0) = (u32)r1;
loc_0801DD68:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801DD68
    r3 = 0x0U;
    *(u32*)(r5 + 0x10) = (u32)r3;
    return sub_0801DDEC(r0, r1, r2, r3);
}

// ROM Address: 0x0801DD72..0x0801DDA2 (48 bytes, Thumb)
u32 sub_0801DD72(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xFFU;
    r0 += 0x19U;
    r4 = *(u32*)(r5 + 0x14);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801DD78: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801DD9A;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801DF94]
    r3 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r3;
    *(u32*)(r1 + 0x8) = (u32)r3;
    r2 = 0x08049588U /* &VTable_08049588 */; // [0x0801DF9C]
    *(u32*)(r1 + 0x10) = (u32)r3;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r4;
loc_0801DD9A:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801DD9A
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801DDA2..0x0801DF82 (480 bytes, Thumb)
u32 sub_0801DDA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r7);
    r0 = *(u32*)(r5 + 0x3C);
    r1 -= 0x1U;
    *(u32*)(r7) = (u32)r1;
    r1 = r1 - r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801DDBE;
    r0 = (r0 << 3);
    r0 = r0 + r7;
    r2 = (r1 << 3);
    r1 = r0;
    r1 += 0xCU;
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0801DDBA: BL 0x08049138
loc_0801DDBE:
    r0 = r4;
    r0 = sub_0801DC80(r0, r1, r2, r3); // 0x0801DDC0
    r1 = *(u32*)(r7);
    r0 = *(u32*)(r5 + 0x3C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801DDD0;
    r0 -= 0x1U;
    *(u32*)(r5 + 0x3C) = (u32)r0;
loc_0801DDD0:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801DDFE;
    r5 = r4;
    r5 += 0x140U;
    r1 = *(u32*)(r5 + 0x4);
    r0 = r4;
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x0801DDDE
    r0 = r4;
    r1 = *(u32*)(r5 + 0x8);
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x0801DDE6
    goto loc_0801DDEE;
    goto loc_0801DF7E;
loc_0801DDEE:
    r0 = r4;
    r1 = *(u32*)(r5 + 0xC);
    r0 = sub_0800666C(r0, r1, r2, r3); // 0x0801DDF2
    r0 = *(u32*)(r5);
    r3 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r3;
    goto loc_0801DF7E;
loc_0801DDFE:
    r0 = r4;
    r0 = sub_0801D5F8(r0, r1, r2, r3); // 0x0801DE00
    goto loc_0801DF7E;
    r2 = 0x0871E9D8U; // [0x0801DF84]
    r0 = *(u32*)(r6);
    r2 = *(u32*)(r2 + 0xC);
    r1 = (r0 >> 28);
    r2 = *(u8*)(r2);
    r1 -= 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0801DE44;
    r0 = 0xFFU;
    r0 += 0x19U;
    r4 = *(u32*)(r5 + 0x14);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801DE1C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801DE3E;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801DF94]
    r3 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r3;
    *(u32*)(r1 + 0x8) = (u32)r3;
    r2 = 0x08049588U /* &VTable_08049588 */; // [0x0801DF9C]
    *(u32*)(r1 + 0x10) = (u32)r3;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r4;
loc_0801DE3E:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801DE3E
    goto loc_0801DF7E;
loc_0801DE44:
    r0 = (r0 << 4);
    r0 = (r0 >> 4);
    *(u32*)(r6) = (u32)r0;
    r3 = 0x0U;
    *(u32*)(r5 + 0x10) = (u32)r3;
    goto loc_0801DF7E;
    r0 = 0x0871E9D8U; // [0x0801DF84]
    r5 = 0x0U;
    r6 = 0x000005C4U; // [0x0801DF90]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r5;
    r2 = 0x40U;
    r0 = r0 + r6;
    r1 = 0x08319488U; // [0x0801DF8C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801DE60
    r4 += 0x100U;
    r0 = 0xFFU;
    r0 += 0x19U;
    r4 = *(u32*)(r4 + 0x14);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801DE6E: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801DE8E;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801DF94]
    r2 = 0x08049588U /* &VTable_08049588 */; // [0x0801DF9C]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r5;
    *(u32*)(r1 + 0x8) = (u32)r5;
    *(u32*)(r1 + 0x10) = (u32)r5;
    *(u32*)(r0) = (u32)r2;
    *(u32*)(r1 + 0x14) = (u32)r4;
loc_0801DE8E:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801DE8E
    r0 = 0x1U;
    return sub_0801DDA0(r0, r1, r2, r3);
    r0 = 0x0871E9D8U; // [0x0801DF84]
    r4 = 0x000005C4U; // [0x0801DF90]
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x08319488U; // [0x0801DF8C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801DEA4
    r0 = 0x0U;
    r0 = sub_08016524(r0, r1, r2, r3); // 0x0801DEAA
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801DEAE
    r0 = 0x1U;
    return sub_0801DDA0(r0, r1, r2, r3);
    r0 = 0x0871E9D8U; // [0x0801DF84]
    r4 = 0x0U;
    r5 = 0x000005C4U; // [0x0801DF90]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r4;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x0801DF8C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801DEC6
    r0 = 0xFFU;
    r0 += 0x21U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801DECE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801DF0C;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801DF94]
    r2 = 0xFFU;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    r3 = 0x0804BF28U /* &VTable_0804BF28 */; // [0x0801DFA0]
    *(u32*)(r1 + 0x10) = (u32)r4;
    r2 += 0x15U;
    *(u32*)(r2 + r0) = r3;
    r2 = 0x080498F0U /* &VTable_080498F0 */; // [0x0801DFA4]
    r3 = 0x03001914U; // [0x0801DFA8]
    *(u32*)(r0) = (u32)r2;
    r2 += 0x38U;
    *(u32*)(r1 + 0x14) = (u32)r2;
    r2 = *(u8*)(r3);
    r1 += 0x18U;
    *(u8*)(r1) = (u8)r2;
    r2 = *(u8*)(r3 + 0x1);
    *(u8*)(r1 + 0x1) = (u8)r2;
    r2 = *(u8*)(r3 + 0x2);
    *(u8*)(r1 + 0x2) = (u8)r2;
    r2 = *(u8*)(r3 + 0x3);
    *(u8*)(r1 + 0x3) = (u8)r2;
loc_0801DF0C:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801DF0C
    r0 = 0x1U;
    return sub_0801DDA0(r0, r1, r2, r3);
    r5 = r4;
    r5 += 0x100U;
    r0 = *(u32*)(r5 + 0x3C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801DF7E;
    r0 = 0x0871E9D8U; // [0x0801DF84]
    r1 = 0x08319488U; // [0x0801DF8C]
    r6 = 0x0U;
    r7 = 0x000005C4U; // [0x0801DF90]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r6;
    r2 = 0x40U;
    r1 -= 0xCU;
    r0 = r0 + r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801DF32
    r0 = *(u32*)(r5 + 0x3C);
    r0 -= 0x1U;
    *(u32*)(r5 + 0x3C) = (u32)r0;
    r0 = r4;
    r0 = sub_0801D5F8(r0, r1, r2, r3); // 0x0801DF3E
    *(u32*)(r5 + 0x10) = (u32)r6;
    goto loc_0801DF7E;
    r0 = 0xFFU;
    r5 = r4;
    r5 += 0xFFU;
    r0 += 0x51U;
    r0 = *(u32*)(r0 + r4);
    r5 += 0x1U;
    r1 = *(u32*)(r5 + 0x3C);
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_0801DF7E;
    r0 = 0x0871E9D8U; // [0x0801DF84]
    r1 = 0x08319488U; // [0x0801DF8C]
    r6 = 0x0U;
    r7 = 0x000005C4U; // [0x0801DF90]
    r0 = *(u32*)(r0 + 0x4);
    r3 = r6;
    r2 = 0x40U;
    r1 -= 0xCU;
    r0 = r0 + r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801DF6C
    r0 = *(u32*)(r5 + 0x3C);
    r0 += 0x1U;
    *(u32*)(r5 + 0x3C) = (u32)r0;
    r0 = r4;
    r0 = sub_0801D5F8(r0, r1, r2, r3); // 0x0801DF78
    *(u32*)(r5 + 0x10) = (u32)r6;
loc_0801DF7E:
    r0 = 0x0U;
    return sub_0801DDA0(r0, r1, r2, r3);
}

// ROM Address: 0x0801DFA2..0x0801DFCE (44 bytes, Thumb)
u32 sub_0801DFA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = stack[240]; // [sp + 0x3C0]
    r4 = (r0 >> 32);
    r4 = r2 + r4;
    r0 = (r0 << 12);
    r0 = 0x0871E9D8U; // [0x0801DFD4]
    r1 = *(u32*)(r0);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 28);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_0801DFCE(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x000005C4U; // [0x0801DFDC]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r0 + r4;
    r1 = 0x08319488U; // [0x0801DFD8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801DFC6
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801DFCE..0x0801DFFC (46 bytes, Thumb)
u32 sub_0801DFCE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
    r0 = r0;
    r1 = (r6 >> 1);
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801DFFC(r0, r1, r2, r3);
    r0 = 0x48U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801DFEE: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801DFFC(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801DFFC..0x0801E080 (132 bytes, Thumb)
u32 sub_0801DFFC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x400U; // (1 << 10)
    r2 = r5;
    r0 = r4;
    r0 = sub_08019B04(r0, r1, r2, r3); // 0x0801E004
    r0 = 0x0804B480U /* &VTable_0804B480 */; // [0x0801E144]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x40) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r4 + 0x44) = (u32)r0;
    r0 = 0x38U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    r1 = *(u32*)(r4 + 0x1C);
    r0 = 0xC; // sp + 0xC
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0801E01C
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[5]; // [sp + 0x14]
    r2 = stack[6]; // [sp + 0x18]
    r1 = r0 + r1;
    r0 = stack[4]; // [sp + 0x10]
    stack[1] = r1; // [sp + 0x4]
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    stack[8] = r0; // [sp + 0x20]
    r1 = ((u32)((s32)r1 >> 1));
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x087202E8U; // [0x0801E148]
    stack[1] = r1; // [sp + 0x4]
    stack[7] = r1; // [sp + 0x1C]
    r2 = stack[8]; // [sp + 0x20]
    *(u32*)(r4 + 0x18) = (u32)r0;
    r1 = (r1 << 8);
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x20) = (u32)r1;
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0801E04C
    r0 = *(u32*)(r4 + 0x1C);
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    stack[3] = r1; // [sp + 0xC]
    r1 = stack[4]; // [sp + 0x10]
    stack[5] = r0; // [sp + 0x14]
    r0 = r1;
    stack[6] = r1; // [sp + 0x18]
    r1 = *(u32*)(r4 + 0x1C);
    r1 += 0x190U;
    r1 = *(u8*)(r1 + 0xD);
    r1 = (r1 >> 1);
    r0 = r0 + r1;
    r0 += 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r4;
    return sub_0801DFF8(r0, r1, r2, r3);
}

// ROM Address: 0x0801E0A6..0x0801E12E (136 bytes, Thumb)
u32 sub_0801E0A6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801E0AE;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x40) = (u32)r0;
loc_0801E0AE:
    r0 = 0x8; // sp + 0x8
    r1 = *(u32*)(r4 + 0x1C);
    r0 = sub_0800FE34(r0, r1, r2, r3); // 0x0801E0B2
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
    stack[7] = r0; // [sp + 0x1C]
    r2 = stack[7]; // [sp + 0x1C]
    stack[0] = r1; // [sp + 0x0]
    stack[6] = r1; // [sp + 0x18]
    r1 = (r1 << 8);
    stack[1] = r0; // [sp + 0x4]
    *(u32*)(r4 + 0x20) = (u32)r1;
    r2 = (r2 << 8);
    *(u32*)(r4 + 0x24) = (u32)r2;
    r0 = *(u32*)(r4 + 0x40);
    r1 = 0x087202E8U; // [0x0801E148]
    r0 = ((u32)((s32)r0 >> 3));
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r4;
    r0 = sub_08019B4E(r0, r1, r2, r3); // 0x0801E0EE
    r0 = *(u32*)(r4 + 0x1C);
    r0 += 0x1A0U;
    r1 = *(u32*)r0; r0 += 4;
    r0 = *(u32*)(r0);
    r1 = ((u32)((s32)r1 >> 8));
    r0 = ((u32)((s32)r0 >> 8));
    stack[3] = r0; // [sp + 0xC]
    r0 = r1;
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[3]; // [sp + 0xC]
    stack[4] = r0; // [sp + 0x10]
    r0 = r1;
    stack[5] = r1; // [sp + 0x14]
    r1 = *(u32*)(r4 + 0x1C);
    r1 += 0x190U;
    r1 = *(u8*)(r1 + 0xD);
    r1 = (r1 >> 1);
    r0 = r0 + r1;
    r0 += 0x1U;
    *(u32*)(r4 + 0x4) = (u32)r0;
    return r0;
    r1 = *(u32*)(r0 + 0x40);
    r2 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0801E12E(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801E12E..0x0801E13C (14 bytes, Thumb)
u32 sub_0801E12E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801E13C(r0, r1, r2, r3);
    r1 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801E13C(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0801E12C(r0, r1, r2, r3);
}

// ROM Address: 0x0801E14C..0x0801E18A (62 bytes, Thumb)
u32 sub_0801E14C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x30);
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0801E15C
    return r0;
    r5 = r1;
    r1 = *(u8*)(r0);
    r6 = 0x0U;
    r4 = r2;
    r1 = (r1 << 30);
    r1 = (r1 >> 31);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801E18A(r0, r1, r2, r3);
    r1 = *(u32*)(r0 + 0x30);
    stack[1] = r6; // [sp + 0x4]
    stack[18] = r6; // [sp + 0x48]
    r0 = 0x4; // sp + 0x4
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x0801E182
    return r0;
}

// ROM Address: 0x0801E18A..0x0801E1E0 (86 bytes, Thumb)
u32 sub_0801E18A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x14U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E18C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E19E;
    r1 = 0x0804C83CU; // [0x0801E1E0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    *(u32*)(r0 + 0xC) = (u32)r5;
    *(u32*)(r0 + 0x8) = (u32)r6;
loc_0801E19E:
    r1 = r0;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E1AA;
    r6 = r4;
    r6 += 0x18CU;
loc_0801E1AA:
    r2 = r6;
    r6 = 0x087207E4U; // [0x0801E1E4]
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0801936A(r0, r1, r2, r3); // 0x0801E1B0
    r1 = *(u32*)(r4);
    r2 = 0x88U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801E1BE: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801E186(r0, r1, r2, r3);
    r0 = *(u32*)(r6);
    r2 = 0xFFU;
    r0 = r0 + r5;
    r1 = *(u8*)(r0 + 0x2);
    r2 += 0x1U;
    r1 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0801E1DA;
    *(u8*)(r0 + 0x2) = (u8)r1;
    return sub_0801E186(r0, r1, r2, r3);
loc_0801E1DA:
    r1 = 0xFFU;
    *(u8*)(r0 + 0x2) = (u8)r1;
    return sub_0801E186(r0, r1, r2, r3);
}

// ROM Address: 0x0801E1E8..0x0801E5D4 (1004 bytes, Thumb)
u32 sub_0801E1E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801E474]
    r1 = 0xFFU;
    r1 += 0x35U;
    r5 = *(u32*)(r0 + r1);
    r7 = *(u32*)(r0 + 0x68);
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = *(u32*)(r0 + r4);
    r3 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0801E478]
    r0 *= r3;
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x30);
    r6 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801E210;
    r6 = 0x0U;
loc_0801E210:
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x4CU;
    stack[0] = r2; // [sp + 0x0]
    r1 = 0x1U;
    r0 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801E226: BL 0x08013E64
    r1 = r0;
    *(u32*)(r0 + 0x8) = (u32)r6;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E230
    r6 = 0x087207ECU; // [0x0801E47C]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x8);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x58U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801E24C
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E254
    r1 = r5;
    r0 = *(u32*)(r6 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801E25C
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x4CU;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801E27A: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E282
    r2 = *(u32*)(r6 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = r5;
    r2 += 0x10U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x58U;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801E29E
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E2A6
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F800U; // [0x0801E480]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801E2B2: BL 0x0804912C
    r2 = 0x5480U; // (169 << 7)
    r1 = 0x0U;
    r0 = 0x06009640U; // [0x0801E484]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801E2BE: BL 0x0804912C
    r0 = 0x2U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x5U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x1CU;
    stack[3] = r0; // [sp + 0xC]
    r0 = 0x12U;
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x4; // sp + 0x4
    r2 = 0x00000259U; // [0x0801E488]
    r1 = 0x0600F800U; // [0x0801E480]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x0801E2D8
    r1 = 0x00001F83U; // [0x0801E48C]
    r0 = 0x4000000U; // (1 << 26)
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
    if (cmp_lhs == cmp_rhs) goto loc_0801E30E;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801E30A: BL __call_via_r3
loc_0801E30E:
    return r0;
    r0 = sub_080067A0(r0, r1, r2, r3); // 0x0801E312
    return r0;
    r6 = 0x3FC; // sp + 0x3FC
    r6 += 0x14U;
    r7 = r0;
    r2 = 0x68U;
    r1 = 0xD0U;
    r0 = r6;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801E32C
    r0 = r6;
    r0 = sub_08005096(r0, r1, r2, r3); // 0x0801E332
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = *(u32*)(r0 + r7);
    r3 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0801E478]
    r0 *= r3;
    r5 = r0 + r1;
    r4 = r5;
    r4 += 0xCU;
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x10; // sp + 0x10
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0801E34C
    r0 = 0x10U;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r0 = *(u32*)r4; r4 += 4;
    r1 = *(u32*)r4; r4 += 4;
    r0 += 0x10U;
    r1 += 0x6U;
    stack[3] = r1; // [sp + 0xC]
    stack[2] = r0; // [sp + 0x8]
    r4 -= 0x8U;
    r0 = r6;
    r1 = 0x10; // sp + 0x10
    r2 = sp;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x0801E36A
    r0 = 0x1U;
    r3 = 0x3FC; // sp + 0x3FC
    *(u8*)(r3 + 0x16) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x0801E490]
    *(u32*)(r3 + 0x34) = (u32)r0;
    r0 = 0x0U;
    *(u8*)(r3 + 0x14) = (u8)r0;
    r0 = 0xCU;
    *(u8*)(r3 + 0x15) = (u8)r0;
    r0 = 0x087207ECU; // [0x0801E47C]
    r0 = *(u32*)(r0 + 0x8);
    *(u32*)(r3 + 0x20) = (u32)r0;
    r0 = 0x5U;
    *(u8*)(r3 + 0x17) = (u8)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r4);
    r2 = (r0 >> 31);
    r0 = r2 + r0;
    r0 = ((u32)((s32)r0 >> 1));
    r0 += 0xCU;
    *(u32*)(r3 + 0x1C) = (u32)r0;
    r1 += 0x12U;
    *(u32*)(r3 + 0x18) = (u32)r1;
    r0 = *(u16*)(r5 + 0x4);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801E474]
    r0 = (r0 << 2);
    r1 = *(u32*)(r1 + r0);
    r0 = r6;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801E3A6
    r0 = 0x75U;
    r3 = 0x3FC; // sp + 0x3FC
    *(u8*)(r3 + 0x17) = (u8)r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = 0x12U;
    r0 += 0x12U;
    *(u32*)(r3 + 0x1C) = (u32)r0;
    *(u32*)(r3 + 0x18) = (u32)r1;
    r0 = *(u16*)(r5 + 0x8);
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801E474]
    r0 = (r0 << 2);
    r2 = *(u32*)(r1 + r0);
    r1 = 0xB0U;
    r0 = r6;
    r0 = sub_0803DD66(r0, r1, r2, r3); // 0x0801E3C6
    r1 = r6;
    r0 = r7;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x0801E3CE
    r1 = 0x06009640U; // [0x0801E484]
    r0 = r6;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0801E3D6: BL 0x08049150
    r1 = 0x0U;
    r0 = r6;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801E3DE: BL 0x0803F58C
    return r0;
    r1 = 0x087207ECU; // [0x0801E47C]
    r4 = r0;
    r0 = 0x000005C4U; // [0x0801E494]
    r1 = *(u32*)(r1 + 0x4);
    r3 = 0x0U;
    r0 = r1 + r0;
    r1 = 0x083192A8U; // [0x0801E498]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E416;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801E438;
    r1 += 0x1E0U;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E408
    r0 = 0x2U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801E40E
    r0 = 0x1U;
    return r0;
loc_0801E416:
    r1 += 0x1ECU;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E41C
    r4 += 0x100U;
    r0 = *(u32*)(r4 + 0x14);
    r3 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0801E478]
    r0 *= r3;
    r0 = r0 + r1;
    r0 = sub_0801E14C(r0, r1, r2, r3); // 0x0801E42E: BL 0x0801E14C
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801E434
loc_0801E438:
    r0 = 0x0U;
    return r0;
    r5 = r0;
    r0 = 0x087207ECU; // [0x0801E47C]
    r6 = 0x1U;
    r1 = *(u32*)(r0);
    r2 = 0xC0U;
    r1 = *(u16*)(r1 + 0x4);
    r1 &= r2;
    if (cmp_lhs == cmp_rhs) goto loc_0801E46E;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    r7 = 0x000005C4U; // [0x0801E494]
    r3 = r4;
    r2 = 0x40U;
    r0 = r0 + r7;
    r1 = 0x0831947CU; // [0x0801E49C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E45C
    r0 = r5;
    r0 += 0x100U;
    r1 = *(u32*)(r0 + 0xC);
    r1 ^= r6;
    r0 += 0xCU;
loc_0801E46C:
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
loc_0801E46E:
    r0 = 0x0U;
    return r0;
    r0 = r0;
    r6 = (r0 >> 32);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801E46C;
    r3 = (r7 >> 32);
    r4 = (r5 << 31);
    r2 = (r6 >> 1);
    r0 = (r0 << 24);
    stack[64] = r6; // [sp + 0x100]
    r0 = (r0 << 24);
    r1 = (r3 << 9);
    r0 = r0;
    r3 = r0 - 6;
    r0 = r0;
    r3 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    stack[124] = r4; // [sp + 0x1F0]
    r1 = (r6 >> 32);
    r5 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = sp;
    r4 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801E4AE
    r0 = 0x083BE3D4U; // [0x0801E744]
    r1 = stack[9]; // [sp + 0x24]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0801E4B6
    r2 = 0x08056A2CU; // [0x0801E748]
    r1 = 0x0872080CU; // [0x0801E74C]
    r0 = r4;
    r0 = sub_0803F9D4(r0, r1, r2, r3); // 0x0801E4C0
    r1 = r4;
    r0 = r5;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x0801E4C8
    r1 = 0x06000040U; // [0x0801E750]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0801E4D0: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801E4D8: BL 0x0803F58C
    return r0;
    r1 = 0x0U;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x3U;
    r2 = 0x1U;
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x78U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r1 - 4;
    r7 = r1 - 4;
    stack[3] = r1; // [sp + 0xC]
    r4 = r0;
    r1 = 0x1U;
    r6 = 0x1U;
    r3 = r6;
    stack[0] = r1; // [sp + 0x0]
    r0 = 0x78U;
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x0U;
    stack[5] = r0; // [sp + 0x14]
    r1 = r4;
    r0 = 0x0U;
    stack[2] = r7; // [sp + 0x8]
    r0 = sub_08050878(r0, r1, r2, r3); // 0x0801E510
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E518
    r0 = 0x34U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E51E: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E556;
    r2 = 0x1U;
    r1 = 0x1U;
    stack[6] = r1; // [sp + 0x18]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x78U;
    r1 = 0x4U;
    stack[4] = r2; // [sp + 0x10]
    r2 = r1 - 5;
    stack[3] = r1; // [sp + 0xC]
    r1 = 0x0U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r0 = 0x86U;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x1U;
    r1 = r4;
    r3 = 0x0U;
    r0 = r5;
    stack[2] = r7; // [sp + 0x8]
    r0 = sub_080060A8(r0, r1, r2, r3); // 0x0801E54C
    r0 = 0x0804E358U /* &VTable_0804E358 */; // [0x0801E754]
    *(u32*)(r5) = (u32)r0;
    *(u32*)(r5 + 0x30) = (u32)r6;
loc_0801E556:
    r0 = 0xFFU;
    r0 += 0x15U;
    *(u32*)(r0 + r4) = r5;
    r1 = r5;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E560
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0801E568: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E570
    return r0;
    r1 = 0x0872080CU; // [0x0801E74C]
    r0 = 0x000005C4U; // [0x0801E758]
    r1 -= 0x14U;
    r1 = *(u32*)(r1 + 0x4);
    r6 = 0x0U;
    r5 = r1 + r0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r4 = 0x08319488U; // [0x0801E75C]
    if (cmp_lhs == cmp_rhs) return sub_0801E5D4(r0, r1, r2, r3);
    r7 = 0xFFU;
    r7 += 0x15U;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0801E612(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0801E64A(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_0801E680(r0, r1, r2, r3);
    r0 = sub_080400C2(r0, r1, r2, r3); // 0x0801E59C
    r1 = r4;
    r3 = r6;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E5A8
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E5AE: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E5CC;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801E760]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x0801E764]
    *(u32*)(r0) = (u32)r1;
loc_0801E5CC:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801E5CC
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801E5D4..0x0801E682 (174 bytes, Thumb)
u32 sub_0801E5D4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = sub_080400D8(r0, r1, r2, r3); // 0x0801E5D4
    r1 = r4;
    r3 = r6;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E5E0
    r0 = 0x2FCU; // (191 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E5E8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E608;
    r3 = 0x1U;
    r2 = 0xAU;
    r1 = 0x9U;
    r0 = r4;
    r0 = sub_08005460(r0, r1, r2, r3); // 0x0801E5F8
    r0 = 0x0804947CU /* &VTable_0804947C */; // [0x0801E768]
    *(u32*)(r4) = (u32)r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r4 + r0;
    *(u32*)(r0 + 0x38) = (u32)r6;
loc_0801E608:
    r0 = r4;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801E60A
    r0 = 0x1U;
    return sub_0801E5D2(r0, r1, r2, r3);
    r0 = sub_08040096(r0, r1, r2, r3); // 0x0801E612
    r1 = r4;
    r3 = r6;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E61E
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E624: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E642;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801E760]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x0801E764]
    *(u32*)(r0) = (u32)r1;
loc_0801E642:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801E642
    r0 = 0x1U;
    return sub_0801E5D2(r0, r1, r2, r3);
    r0 = sub_080400AC(r0, r1, r2, r3); // 0x0801E64A
    r1 = r4;
    r3 = r6;
    r2 = 0x40U;
    r0 = r5;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E656
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E65C: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E67A;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801E760]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r6;
    *(u32*)(r1 + 0x8) = (u32)r6;
    *(u32*)(r1 + 0x10) = (u32)r6;
    r1 = 0x0804B5ACU /* &VTable_0804B5AC */; // [0x0801E764]
    *(u32*)(r0) = (u32)r1;
loc_0801E67A:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801E67A
    return sub_0801E682(r0, r1, r2, r3);
    return sub_0801E686(r0, r1, r2, r3);
}

// ROM Address: 0x0801E682..0x0801E686 (4 bytes, Thumb)
u32 sub_0801E682(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return sub_0801E5D2(r0, r1, r2, r3);
}

// ROM Address: 0x0801E686..0x0801E68A (4 bytes, Thumb)
u32 sub_0801E686(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return sub_0801E5D2(r0, r1, r2, r3);
}

// ROM Address: 0x0801E68A..0x0801E6FC (114 bytes, Thumb)
u32 sub_0801E68A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = 0x0872080CU; // [0x0801E74C]
    r4 -= 0x14U;
    r0 = *(u32*)(r4);
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801E6D6;
    r0 = sub_080400D8(r0, r1, r2, r3); // 0x0801E69A
    r0 = *(u32*)(r4 + 0x4);
    r4 = 0x0U;
    r5 = 0x000005C4U; // [0x0801E758]
    r3 = r4;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x0801E75C]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E6AC
    r0 = 0xFFU;
    r0 += 0x1DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E6B4: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E6D2;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801E760]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    *(u32*)(r1 + 0x10) = (u32)r4;
    r1 = 0x080494D8U /* &VTable_080494D8 */; // [0x0801E76C]
    *(u32*)(r0) = (u32)r1;
loc_0801E6D2:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801E6D2
loc_0801E6D6:
    r0 = 0x0U;
    return r0;
    r1 = r0;
    r1 += 0x100U;
    r2 = *(u32*)(r1 + 0x14);
    r2 = *(u32*)(r2 + 0x30);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801E6F6;
    r2 = *(u32*)(r1 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801E6F6;
    r2 = 0x0U;
    *(u32*)(r1 + 0xC) = (u32)r2;
    *(u32*)(r1 + 0x10) = (u32)r2;
loc_0801E6F6:
    r0 = sub_080067D6(r0, r1, r2, r3); // 0x0801E6F6
    return r0;
}

// ROM Address: 0x0801E6FC..0x0801E71E (34 bytes, Thumb)
u32 sub_0801E6FC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r0 = r1;
    r1 = 0x1U;
    *(u8*)(r0) = (u8)r1;
    *(u8*)(r0 + 0x2) = (u8)r1;
    r1 = 0x0803F70DU; // [0x0801E770]
    *(u32*)(r0 + 0x20) = (u32)r1;
    r1 = *(u32*)(r2 + 0x4);
    r1 += 0x100U;
    r1 = *(u32*)(r1 + 0xC);
    r3 = *(u32*)(r2 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) return sub_0801E71E(r0, r1, r2, r3);
    r1 = 0x6U;
    return sub_0801E728(r0, r1, r2, r3);
}

// ROM Address: 0x0801E71E..0x0801E8DA (444 bytes, Thumb)
u32 sub_0801E71E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u32*)(r2 + 0x30);
    r1 = 0x2U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801E728;
    r1 = 0x75U;
loc_0801E728:
    *(u8*)(r0 + 0x3) = (u8)r1;
    r1 = 0x0872080CU; // [0x0801E74C]
    r1 -= 0x14U;
    r1 = *(u32*)(r1 + 0x8);
    *(u32*)(r0 + 0xC) = (u32)r1;
    r3 = *(u32*)(r2 + 0x20);
    r4 = *(u32*)(r2 + 0x24);
    *(u32*)(r0 + 0x4) = (u32)r3;
    *(u32*)(r0 + 0x8) = (u32)r4;
    r1 = *(u32*)(r2 + 0x1C);
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801E73C
    return r0;
    r0 = r0;
    return sub_0801EEF0(r0, r1, r2, r3);
    r3 = (r7 >> 32);
    r4 = *(u32*)(r5 + 0x20);
    r5 = (r0 >> 32);
    r4 = (r1 >> 32);
    r2 = (r6 >> 1);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    return sub_0801EE08(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    stack[124] = r4; // [sp + 0x1F0]
    r4 = (r0 >> 32);
    stack[216] = r4; // [sp + 0x360]
    r4 = (r0 >> 32);
    r3 = (r0 >> 32);
    r5 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = sp;
    r4 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801E782
    r0 = 0x083BE3D4U; // [0x0801E9E0]
    r1 = stack[9]; // [sp + 0x24]
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0801E78A
    r2 = 0x08056A2CU; // [0x0801E9E4]
    r1 = 0x0872081CU; // [0x0801E9E8]
    r0 = r4;
    r0 = sub_0803F9D4(r0, r1, r2, r3); // 0x0801E794
    r1 = r4;
    r0 = r5;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x0801E79C
    r1 = 0x06000040U; // [0x0801E9EC]
    r0 = r4;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0801E7A4: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801E7AC: BL 0x0803F58C
    return r0;
    r4 = r0;
    r0 = 0x78U;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x1U;
    stack[7] = r2; // [sp + 0x1C]
    r0 = 0x0U;
    r1 = 0x0U;
    stack[6] = r1; // [sp + 0x18]
    r0 = ~r0;
    r2 = 0x78U;
    stack[4] = r2; // [sp + 0x10]
    r1 = 0x5FU;
    stack[3] = r1; // [sp + 0xC]
    r2 = r0;
    r1 = 0x1U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x0U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08050878(r0, r1, r2, r3); // 0x0801E7E4
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E7EC
    r0 = 0x86U;
    stack[5] = r0; // [sp + 0x14]
    r2 = 0x1U;
    stack[7] = r2; // [sp + 0x1C]
    r0 = 0x0U;
    r1 = 0x1U;
    stack[6] = r1; // [sp + 0x18]
    r0 = ~r0;
    r2 = 0x78U;
    stack[4] = r2; // [sp + 0x10]
    r1 = 0x4FU;
    stack[3] = r1; // [sp + 0xC]
    r2 = r0;
    r1 = 0x0U;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r2 = 0x1U;
    r1 = r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = 0x0U;
    r0 = 0x0U;
    r0 = sub_08050878(r0, r1, r2, r3); // 0x0801E81A
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E822
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0801E82A: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801E832
    r0 = sub_080401C2(r0, r1, r2, r3); // 0x0801E836
    r1 = 0x0U;
    r0 = 0x0U;
    r0 = sub_080502FC(r0, r1, r2, r3); // 0x0801E83E: BL 0x080502FC
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801E842
    return r0;
    r3 = 0x0872081CU; // [0x0801E9E8]
    r0 = 0x000005C4U; // [0x0801E9F4]
    r3 -= 0x24U;
    r1 = *(u32*)(r3 + 0x4);
    r5 = 0xFFU;
    r0 = r1 + r0;
    r5 += 0x21U;
    r4 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    r1 = 0x08319488U; // [0x0801E9F8]
    r6 = 0x0804920CU /* &VTable_0804920C */; // [0x0801E9F0]
    if (cmp_lhs == cmp_rhs) return sub_0801E8DA(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0801E94C(r0, r1, r2, r3);
    r7 = 0x0U;
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E86E
    r0 = r5;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E874: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E89A;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)r0 = r6; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    *(u32*)(r1 + 0xC) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    r0 -= 0x8U;
    r2 = r1;
    r2 += 0x10U;
    *(u32*)(r1 + 0x10) = (u32)r7;
    r3 = 0x0804AEBCU /* &VTable_0804AEBC */; // [0x0801E9FC]
    *(u8*)(r2 + 0x4) = (u8)r7;
    *(u32*)(r0) = (u32)r3;
    *(u32*)(r1 + 0x18) = (u32)r7;
    *(u8*)(r2 + 0xC) = (u8)r4;
loc_0801E89A:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801E89A
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0801E960(r0, r1, r2, r3);
    r3 = 0x0872081CU; // [0x0801E9E8]
    r3 -= 0x24U;
    r0 = *(u32*)(r3 + 0xC);
    r0 = sub_0804019A(r0, r1, r2, r3); // 0x0801E8A8
    r0 = 0x2FCU; // (191 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E8B0: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E8D0;
    r3 = r4;
    r2 = 0xDU;
    r1 = 0x5EU;
    r0 = r5;
    r0 = sub_08005460(r0, r1, r2, r3); // 0x0801E8C0
    r0 = 0x08049B2CU /* &VTable_08049B2C */; // [0x0801EA00]
    *(u32*)(r5) = (u32)r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r5 + r0;
    *(u32*)(r0 + 0x38) = (u32)r7;
loc_0801E8D0:
    r0 = r5;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801E8D2
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801E8DA..0x0801E94E (116 bytes, Thumb)
u32 sub_0801E8DA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = 0x0U;
    r3 = r7;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E8E0
    r0 = r5;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E8E6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E90E;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)r0 = r6; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    *(u32*)(r1 + 0xC) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    r0 -= 0x8U;
    r2 = r1;
    r2 += 0x10U;
    *(u32*)(r1 + 0x10) = (u32)r7;
    r3 = 0x0804AEBCU /* &VTable_0804AEBC */; // [0x0801E9FC]
    *(u8*)(r2 + 0x4) = (u8)r7;
    *(u32*)(r0) = (u32)r3;
    *(u32*)(r1 + 0x18) = (u32)r7;
    r1 = 0x2U;
    *(u8*)(r2 + 0xC) = (u8)r1;
loc_0801E90E:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801E90E
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0801E952(r0, r1, r2, r3);
    r3 = 0x0872081CU; // [0x0801E9E8]
    r3 -= 0x24U;
    r0 = *(u32*)(r3 + 0xC);
    r0 = sub_0804019A(r0, r1, r2, r3); // 0x0801E91C
    r0 = 0x2FCU; // (191 << 2)
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E924: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E944;
    r3 = r4;
    r2 = 0xDU;
    r1 = 0x5EU;
    r0 = r5;
    r0 = sub_08005460(r0, r1, r2, r3); // 0x0801E934
    r0 = 0x08049B2CU /* &VTable_08049B2C */; // [0x0801EA00]
    *(u32*)(r5) = (u32)r0;
    r0 = 0x2C0U; // (11 << 6)
    r0 = r5 + r0;
    *(u32*)(r0 + 0x38) = (u32)r4;
loc_0801E944:
    r0 = r5;
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801E946
    return sub_0801E94E(r0, r1, r2, r3);
    return sub_0801E96C(r0, r1, r2, r3);
}

// ROM Address: 0x0801E94E..0x0801E960 (18 bytes, Thumb)
u32 sub_0801E94E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x1U;
    return sub_0801E8D8(r0, r1, r2, r3);
    r1 = 0x0U;
    r0 = 0x0U;
    r0 = sub_080502FC(r0, r1, r2, r3); // 0x0801E956: BL 0x080502FC
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801E95A
    return sub_0801E96C(r0, r1, r2, r3);
}

// ROM Address: 0x0801E960..0x0801E970 (16 bytes, Thumb)
u32 sub_0801E960(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0U;
    r0 = 0x0U;
    r0 = sub_080502FC(r0, r1, r2, r3); // 0x0801E964: BL 0x080502FC
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801E968
    r0 = 0x0U;
    return sub_0801E8D8(r0, r1, r2, r3);
}

// ROM Address: 0x0801E972..0x0801E9DE (108 bytes, Thumb)
u32 sub_0801E972(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 -= 0x24U;
    r1 = *(u32*)(r0);
    r1 = *(u16*)(r1 + 0x4);
    r1 = (r1 << 30);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801E9BC;
    r0 = *(u32*)(r0 + 0x4);
    r4 = 0x0U;
    r5 = 0x000005C4U; // [0x0801E9F4]
    r3 = r4;
    r2 = 0x40U;
    r0 = r0 + r5;
    r1 = 0x08319488U; // [0x0801E9F8]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801E98E
    r0 = sub_080401C2(r0, r1, r2, r3); // 0x0801E992
    r0 = 0xFFU;
    r0 += 0x21U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801E99A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801E9B8;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801E9F0]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r4;
    *(u32*)(r1 + 0x8) = (u32)r4;
    *(u32*)(r1 + 0x10) = (u32)r4;
    r1 = 0x08049B00U /* &VTable_08049B00 */; // [0x0801EA04]
    *(u32*)(r0) = (u32)r1;
loc_0801E9B8:
    r0 = sub_0803D850(r0, r1, r2, r3); // 0x0801E9B8
loc_0801E9BC:
    r0 = 0x0U;
    return r0;
    r0 = sub_080401C2(r0, r1, r2, r3); // 0x0801E9C2
    r0 = sub_080400D8(r0, r1, r2, r3); // 0x0801E9C6
    r0 = 0x0872081CU; // [0x0801E9E8]
    r0 -= 0x24U;
    r0 = *(u32*)(r0 + 0x10);
    r0 = sub_08009680(r0, r1, r2, r3); // 0x0801E9D0
    r1 = 0x0U;
    r0 = 0x0877C5FCU /* EventPoolRecord */; // [0x0801EA08]
    r0 = sub_08012588(r0, r1, r2, r3); // 0x0801E9D8: BL 0x08012588
    return r0;
}

// ROM Address: 0x0801E9DE..0x0801E9E2 (4 bytes, Thumb)
u32 sub_0801E9DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return sub_0801F18C(r0, r1, r2, r3);
}

// ROM Address: 0x0801E9E2..0x0801EAC2 (224 bytes, Thumb)
u32 sub_0801E9E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r7 >> 32);
    r4 = *(u32*)(r5 + 0x20);
    r5 = (r0 >> 32);
    r4 = (r3 >> 32);
    r2 = (r6 >> 1);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    r6 = 0x2F0; // sp + 0x2F0
    r4 = (r0 >> 32);
    r3 = stack[44]; // [sp + 0xB0]
    r4 = (r0 >> 32);
    r3 = stack[0]; // [sp + 0x0]
    r4 = (r0 >> 32);
    *(u32*)r5 = r2; r5 += 4;
    *(u32*)r5 = r3; r5 += 4;
    *(u32*)r5 = r4; r5 += 4;
    *(u32*)r5 = r5; r5 += 4;
    *(u32*)r5 = r6; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r7 = (r6 >> 1);
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801ECBC]
    r5 = *(u32*)(r0 + 0x5C);
    r7 = *(u32*)(r0 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x0U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801EA2E: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EA36
    r6 = 0x0872082CU; // [0x0801ECC0]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801EA52
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EA5A
    r1 = r5;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801EA62
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801EA80: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EA88
    r2 = *(u32*)(r6 + 0x4);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = r5;
    r2 += 0x10U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801EAA4
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EAAC
    r0 = 0x78U;
    stack[5] = r0; // [sp + 0x14]
    r0 = 0x1U;
    r1 = 0x1U;
    stack[6] = r1; // [sp + 0x18]
    r1 = 0x55U;
    r2 = 0x0U;
    stack[7] = r2; // [sp + 0x1C]
    stack[3] = r1; // [sp + 0xC]
    return r0;
}

// ROM Address: 0x0801EAC6..0x0801ECBC (502 bytes, Thumb)
u32 sub_0801EAC6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x40U;
    stack[4] = r2; // [sp + 0x10]
    stack[0] = r1; // [sp + 0x0]
    r3 = r5;
    r1 = r4;
    r2 = 0x0U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    stack[1] = r5; // [sp + 0x4]
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x0801EAD8
    r6 = r4;
    r6 += 0x100U;
    *(u32*)(r6 + 0x18) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EAE8
    r2 = 0x1U;
    r1 = 0x0U;
    r0 = 0x78U;
    stack[5] = r0; // [sp + 0x14]
    stack[6] = r1; // [sp + 0x18]
    stack[7] = r2; // [sp + 0x1C]
    r2 = 0x82U;
    r1 = 0x56U;
    r0 = r5;
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r2; // [sp + 0x10]
    r2 = 0x0U;
    r1 = r0;
    stack[0] = r1; // [sp + 0x0]
    stack[1] = r2; // [sp + 0x4]
    r3 = r5;
    r1 = r4;
    r2 = 0x1U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x0U;
    r0 = sub_08015C62(r0, r1, r2, r3); // 0x0801EB14
    r1 = r0;
    *(u32*)(r6 + 0x1C) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EB1E
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0801EB26: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EB2E
    r0 = 0x0U;
    r0 = sub_080505B0(r0, r1, r2, r3); // 0x0801EB34: BL 0x080505B0
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801EB38
    return r0;
    r4 = r1;
    r1 = 0x75U;
    r6 = r0;
    r3 = 0x6EU;
    r2 = 0x1EU;
    r0 = r4;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x0801EB4E
    r0 = 0x2U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r4 + 0x2) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x0801ECC4]
    r7 = 0x16U;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = 0x0U;
    *(u8*)(r4) = (u8)r0;
    r0 = 0xEU;
    *(u8*)(r4 + 0x1) = (u8)r0;
    r0 = 0x0872082CU; // [0x0801ECC0]
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801ECBC]
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0xC) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 = 0x28U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = (r0 << 3);
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801EB7C
    r5 = 0x0U;
    r6 += 0x100U;
loc_0801EB86:
    r1 = 0x5DU;
    r0 = *(u32*)(r6 + 0x14);
    r1 = (r1 << 5);
    r0 = r0 + r1;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_0801EBB6;
    r0 = (r5 << 3);
    r0 = r0 - r5;
    r0 = (r0 << 1);
    r0 += 0x36U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 = *(u32*)(r6 + 0x14);
    r0 = r0 + r1;
    r1 = (r5 << 3);
    r0 = r1 + r0;
    r0 += 0x4U;
    r1 = r4;
    r0 = sub_0801F810(r0, r1, r2, r3); // 0x0801EBAC: BL 0x0801F810
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 6;
    if (cmp_lhs < cmp_rhs) goto loc_0801EB86;
loc_0801EBB6:
    r0 = 0x28U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0xFFU;
    r7 = 0x8CU;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801ECBC]
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 += 0x45U;
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801EBC8
    r5 = 0x0U;
loc_0801EBCE:
    r1 = 0x00000BCCU; // [0x0801ECC8]
    r0 = *(u32*)(r6 + 0x14);
    r0 = r0 + r1;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_0801EBFC;
    r0 = (r5 << 3);
    r0 = r0 - r5;
    r0 = (r0 << 1);
    r0 += 0x36U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 = *(u32*)(r6 + 0x14);
    r0 = r0 + r1;
    r1 = (r5 << 3);
    r0 = r1 + r0;
    r0 += 0x4U;
    r1 = r4;
    r0 = sub_0801F810(r0, r1, r2, r3); // 0x0801EBF2: BL 0x0801F810
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 6;
    if (cmp_lhs < cmp_rhs) goto loc_0801EBCE;
loc_0801EBFC:
    return r0;
    r4 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = sp;
    r5 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801EC0C
    r3 = 0x1U;
    r2 = 0x4FU;
    r1 = r5;
    r0 = r4;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x0801EC18
    r1 = r5;
    r0 = r4;
    r0 = sub_0801EB40(r0, r1, r2, r3); // 0x0801EC20
    r1 = 0x06000040U; // [0x0801ECCC]
    r0 = r5;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0801EC28: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801EC30: BL 0x0803F58C
    return r0;
    r1 = 0x0872082CU; // [0x0801ECC0]
    r6 = r0;
    r0 = 0x000005C4U; // [0x0801ECD0]
    r1 = *(u32*)(r1);
    r3 = 0x0U;
    r0 = r1 + r0;
    r1 = 0x08319488U; // [0x0801ECD4]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801EC60;
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801ECB8;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801EC52
    r0 = 0x1U;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801EC58
    r0 = 0x1U;
    return r0;
loc_0801EC60:
    r5 = r3;
    r2 = 0x40U;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801EC64
    r6 += 0x100U;
    r0 = *(u32*)(r6 + 0xC);
    r4 = 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801EC76;
    r4 = 0x2U;
loc_0801EC76:
    r0 = 0xFFU;
    r0 += 0x1DU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801EC7A: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801EC9E;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801ECD8]
    r2 = 0x0804C0F0U /* &VTable_0804C0F0 */; // [0x0801ECDC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r5;
    *(u32*)(r1 + 0x8) = (u32)r5;
    *(u32*)(r1 + 0x10) = (u32)r5;
    r1 += 0x10U;
    *(u8*)(r1 + 0x4) = (u8)r5;
    *(u32*)(r0) = (u32)r2;
    *(u8*)(r1 + 0x8) = (u8)r4;
loc_0801EC9E:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801EC9E
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs <= cmp_rhs) goto loc_0801ECAE;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801ECA6
    r0 = 0x1U;
    return r0;
loc_0801ECAE:
    r0 = 0x0U;
    r0 = sub_080505B0(r0, r1, r2, r3); // 0x0801ECB0: BL 0x080505B0
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801ECB4
loc_0801ECB8:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801ECBE..0x0801ED02 (68 bytes, Thumb)
u32 sub_0801ECBE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = (r0 >> 32);
    r4 = (r5 >> 32);
    r2 = (r6 >> 1);
    r3 = (r0 >> 32);
    r4 = (r1 >> 15);
    r0 = r0;
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r4 = (r0 << 23);
    r0 = r0;
    stack[136] = r4; // [sp + 0x220]
    r1 = (r6 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    *(u32*)r0 = r4; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)r0 = r6; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r4 = (r0 >> 32);
    r4 = r0;
    r0 = 0x03000FF0U; // [0x0801ED30]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801ECEE: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801ECFA;
    r0 = 0x1U;
    return r0;
loc_0801ECFA:
    r0 = r4;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x0801ECFC
    return r0;
}

// ROM Address: 0x0801ED02..0x0801ED06 (4 bytes, Thumb)
u32 sub_0801ED02(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0801ED06..0x0801EECA (452 bytes, Thumb)
u32 sub_0801ED06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r2 - 3;
    cmp_lhs = (s32)r1; cmp_rhs = 5;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801ED22;
    r3 = 0x0801ED14U;
    r3 = *(u8*)(r3 + r1);
    r3 = (r3 << 1);
    pc += r3;
    r2 = (r0 << 24);
    r6 = (r0 << 24);
    r7 = r0;
    r1 = 0x1U;
    r0 += 0x100U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
loc_0801ED22:
    return r0; // BX lr
    r1 = 0x1U;
    r0 += 0x100U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r0 = (r6 >> 31);
    r0 = (r0 << 12);
    r4 = r0;
    r0 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801F060]
    r1 = *(u32*)(r0 + 0x68);
    r5 = *(u32*)(r0 + 0x5C);
    stack[4] = r1; // [sp + 0x10]
    r1 = 0xFFU;
    r1 += 0x4DU;
    r7 = *(u32*)(r0 + r1);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x36U;
    stack[0] = r2; // [sp + 0x0]
    r1 = 0x1U;
    r0 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801ED5E: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801ED66
    r6 = 0x08720834U; // [0x0801F064]
    r1 = 0x0U;
    r2 = *(u32*)(r6 + 0x4);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x42U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801ED82
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801ED8A
    r1 = r5;
    r0 = *(u32*)(r6 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801ED92
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x36U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801EDB0: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EDB8
    r2 = *(u32*)(r6 + 0x4);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[4]; // [sp + 0x10]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r2 = r5;
    r2 += 0x10U;
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x42U;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801EDD6
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EDDE
    r2 = *(u32*)(r6 + 0x4);
    r1 = 0x0U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x10U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x1CU;
    r0 = 0x0U;
    stack[0] = r7; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801EDF8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EE00
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x24U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x4U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x4U;
    r1 = r4;
    r3 = 0x24U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801EE1C: BL 0x08013E64
    r5 = r4;
    r5 += 0x100U;
    *(u32*)(r5 + 0x30) = (u32)r0;
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EE2C
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x24U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x5U;
    r1 = r4;
    r3 = 0x56U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801EE48: BL 0x08013E64
    r1 = r0;
    *(u32*)(r5 + 0x34) = (u32)r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801EE52
    r2 = 0x800U; // (1 << 11)
    r1 = 0x0U;
    r0 = 0x0600F800U; // [0x0801F068]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801EE5E: BL 0x0804912C
    r2 = 0x2A80U; // (85 << 7)
    r1 = 0x0U;
    r0 = 0x06009640U; // [0x0801F06C]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801EE6A: BL 0x0804912C
    r0 = 0x7U;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x6U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x18U;
    stack[2] = r0; // [sp + 0x8]
    r0 = 0x10U;
    stack[3] = r0; // [sp + 0xC]
    r0 = sp;
    r2 = 0x00000259U; // [0x0801F070]
    r1 = 0x0600F800U; // [0x0801F068]
    r0 = sub_0803DA10(r0, r1, r2, r3); // 0x0801EE84
    r1 = 0x00001F83U; // [0x0801F074]
    r0 = 0x4000000U; // (1 << 26)
    *(u16*)(r0 + 0x8) = (u16)r1;
    r1 = *(u16*)(r0);
    r2 = (r0 >> 18);
    r1 |= r2;
    *(u16*)(r0) = (u16)r1;
    r0 = 0x0U;
    *(u32*)(r5 + 0x28) = (u32)r0;
    r1 = 0x1U;
    *(u32*)(r5 + 0x1C) = (u32)r1;
    *(u32*)(r5 + 0x2C) = (u32)r0;
    r5 += 0x20U;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r1; r5 += 4;
    return r0;
    r3 = 0x4000000U; // (1 << 26)
    r1 = *(u16*)(r3);
    r2 = (r3 >> 18);
    r1 &= ~r2;
    *(u16*)(r3) = (u16)r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801EEC8;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801EEC4: BL __call_via_r3
loc_0801EEC8:
    return r0;
}

// ROM Address: 0x0801EECA..0x0801EEF0 (38 bytes, Thumb)
u32 sub_0801EECA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r2 = 0x50U;
    r1 = 0x88U;
    r0 = sp;
    r6 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801EED8
    r0 = r6;
    r0 = sub_08005096(r0, r1, r2, r3); // 0x0801EEDE
    r4 = r5;
    r4 += 0x100U;
    r1 = *(u32*)(r4 + 0x30);
    r2 = *(u32*)(r4 + 0x1C);
    r7 = 0x1U;
    r0 = r7;
    return r0;
}

// ROM Address: 0x0801EEF0..0x0801EF0E (30 bytes, Thumb)
u32 sub_0801EEF0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs > cmp_rhs) goto loc_0801EEF6;
    r0 = 0x0U;
loc_0801EEF6:
    *(u32*)(r1 + 0x8) = (u32)r0;
    r1 = *(u32*)(r4 + 0x14);
    r0 = 0x0000C350U; // [0x0801F078]
    r2 = *(u32*)(r4 + 0x34);
    r3 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801EF06;
    r0 = r1;
loc_0801EF06:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r0;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0801EF0E(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_0801EF10(r0, r1, r2, r3);
}

// ROM Address: 0x0801EF0E..0x0801EF74 (102 bytes, Thumb)
u32 sub_0801EF0E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = r6;
    *(u32*)(r2 + 0x8) = (u32)r0;
    r0 = r5;
    r0 = sub_080066EC(r0, r1, r2, r3); // 0x0801EF16
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    r0 = 0x10U;
    stack[1] = r0; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    r0 = r5;
    r0 += 0xFFU;
    r1 = r6;
    r0 += 0x15U;
    r0 = sub_0801F810(r0, r1, r2, r3); // 0x0801EF2E: BL 0x0801F810
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r7;
    r0 = 0x44U;
    stack[1] = r0; // [sp + 0x4]
    r0 = 0x2FU;
    stack[2] = r0; // [sp + 0x8]
    r2 = *(u32*)(r4 + 0x1C);
    r0 = r6;
    r1 = 0x0801F07CU;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801EF44
    r1 = 0x06009640U; // [0x0801F06C]
    r0 = r6;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0801EF4C: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801EF54: BL 0x0803F58C
    return r0;
    r1 = 0x0U;
    r1 = ~r1;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801EF74(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0801EF8A(r0, r1, r2, r3);
    r0 = r1;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801EF6C
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x0801EF74..0x0801EF8E (26 bytes, Thumb)
u32 sub_0801EF74(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x100U;
    r0 = *(u32*)(r0 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801EF80;
    r1 = r0;
loc_0801EF80:
    r0 = r1;
    r0 = sub_0803D876(r0, r1, r2, r3); // 0x0801EF82
    r0 = 0x1U;
    return sub_0801EF72(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_0801EF72(r0, r1, r2, r3);
}

// ROM Address: 0x0801F038..0x0801F052 (26 bytes, Thumb)
u32 sub_0801F038(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801F044;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
loc_0801F044:
    r0 = *(u32*)(r4 + 0x28);
    *(u32*)(r4 + 0x2C) = (u32)r0;
    *(u32*)(r4 + 0x10) = (u32)r6;
    r0 = r5;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x0801F04C
    return r0;
}

// ROM Address: 0x0801F052..0x0801F05E (12 bytes, Thumb)
u32 sub_0801F052(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x2C) = (u32)r0;
    r0 = r5;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x0801F058
    return sub_0801F050(r0, r1, r2, r3);
}

// ROM Address: 0x0801F06A..0x0801F184 (282 bytes, Thumb)
u32 sub_0801F06A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 24);
    stack[64] = r6; // [sp + 0x100]
    r0 = (r0 << 24);
    r1 = (r3 << 9);
    r0 = r0;
    r3 = r0 - 6;
    r0 = r0;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r6; r3 += 4;
    r0 = r0;
    r0 = r4;
    r5 = r4;
    r4 = (r4 << 1);
    r0 = r0;
    r4 = r0;
    r0 = sub_08024120(r0, r1, r2, r3); // 0x0801F08A
    r0 = 0xFFU;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x9) = (u8)r0;
    r4 += 0x100U;
    r0 = 0xFFU;
    r0 += 0x35U;
    r7 = *(u32*)(r4 + 0x18);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801F09E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801F0EC;
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x0801F254]
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
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801F0C8: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801F0D2: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x0801F258]
    r1 = 0x03002F54U; // [0x0801F260]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x0801F25C]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x0804C5E8U /* &VTable_0804C5E8 */; // [0x0801F264]
    *(u32*)(r1) = (u32)r6;
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r5 + 0x2C) = (u32)r6;
    *(u32*)(r1) = (u32)r6;
    *(u32*)(r5 + 0x30) = (u32)r7;
loc_0801F0EC:
    r0 = r4;
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801F0EE
    return r0;
    r0 = sub_0802426E(r0, r1, r2, r3); // 0x0801F0F8: BL 0x0802426E
    return r0;
    r4 = r0;
    r0 = 0x03000FF0U; // [0x0801F268]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801F10C: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801F118;
    r0 = 0x2U;
    return r0;
loc_0801F118:
    r0 = r4;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x0801F11A
    return r0;
    r3 = r0;
    r3 += 0xFFU;
    r3 += 0x1U;
    r0 = *(u32*)(r3 + 0x30);
    r5 = 0xBA0U; // (93 << 5)
    r0 = r0 + r5;
    r0 = *(u32*)(r0);
    *(u8*)(r1) = (u8)r0;
    r0 = 0x03002F54U; // [0x0801F260]
    r2 = *(u32*)(r0);
    r0 = 0x2U;
    *(u8*)(r1 + 0x1) = (u8)r2;
    r4 = *(u8*)(r1);
    r2 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801F180;
loc_0801F144:
    r4 = *(u32*)(r3 + 0x30);
    r6 = r4 + r5;
    r4 = (r2 << 3);
    r6 = r4 + r6;
    r7 = *(u32*)(r6 + 0x4);
    r6 = r0 + 1;
    *(u8*)(r1 + r0) = (u8)r7;
    r0 = *(u32*)(r3 + 0x30);
    r2 += 0x1U;
    r0 = r0 + r5;
    r0 = r4 + r0;
    r0 = *(u32*)(r0 + 0x4);
    r7 = (r0 >> 8);
    *(u8*)(r1 + r6) = (u8)r7;
    r0 = r6 + 1;
    r6 = *(u32*)(r3 + 0x30);
    r6 = r6 + r5;
    r6 = r4 + r6;
    r7 = *(u8*)(r6 + 0x8);
    r6 = r0 + 1;
    *(u8*)(r1 + r0) = (u8)r7;
    r0 = *(u32*)(r3 + 0x30);
    r0 = r0 + r5;
    r0 = r4 + r0;
    r4 = *(u8*)(r0 + 0x9);
    r0 = r6 + 1;
    *(u8*)(r1 + r6) = (u8)r4;
    r4 = *(u8*)(r1);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0801F144;
loc_0801F180:
    return r0; // BX lr
}

// ROM Address: 0x0801F184..0x0801F1AC (40 bytes, Thumb)
u32 sub_0801F184(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 -= 0x3U;
    cmp_lhs = (s32)r2; cmp_rhs = 5;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0801F21A(r0, r1, r2, r3);
    r3 = 0x0801F198U;
    r3 = *(u8*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r1 = (r0 << 13);
    r4 += r8;
    r4 = (r0 << 1);
    r4 = *(u8*)(r1);
    r3 = *(u8*)(r1 + 0x1);
    r2 = 0x2U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801F1AC(r0, r1, r2, r3);
    r3 = 0x1U;
    return sub_0801F1AE(r0, r1, r2, r3);
}

// ROM Address: 0x0801F1AC..0x0801F220 (116 bytes, Thumb)
u32 sub_0801F1AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0U;
    r5 = r0;
    r5 += 0x100U;
    r0 = 0x03002F54U; // [0x0801F260]
    *(u32*)(r5 + 0x2C) = (u32)r3;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801F21A;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801F214;
loc_0801F1C2:
    r3 = r2;
    r6 = *(u8*)(r1 + r3);
    r2 += 0x1U;
    r3 = r2 + 1;
    r2 = *(u8*)(r1 + r2);
    r7 = 0xFF00U; // (255 << 8)
    r2 = (r2 << 8);
    r2 &= r7;
    r2 |= r6;
    stack[0] = r2; // [sp + 0x0]
    r6 = *(u8*)(r1 + r3);
    r2 = r3 + 1;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r6;
    r3 = r2;
    r6 = *(u8*)(r1 + r3);
    r3 = 0x0; // sp + 0x0
    r2 += 0x1U;
    *(u8*)(r3 + 0x5) = (u8)r6;
    r3 = *(u32*)(r5 + 0x30);
    r6 = 0x00000BCCU; // [0x0801F26C]
    r0 += 0x1U;
    r3 = r3 + r6;
    r6 = *(u32*)(r3);
    r7 = r6 + 1;
    r6 = (r6 << 3);
    r6 = r6 + r3;
    *(u32*)(r3) = (u32)r7;
    r3 = 0x0; // sp + 0x0
    r3 = *(u16*)(r3);
    r6 += 0x4U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    *(u16*)(r6) = (u16)r3;
    r3 = 0x0; // sp + 0x0
    r3 = *(u16*)(r3 + 0x2);
    *(u16*)(r6 + 0x2) = (u16)r3;
    r3 = 0x0; // sp + 0x0
    r3 = *(u16*)(r3 + 0x4);
    *(u16*)(r6 + 0x4) = (u16)r3;
    if (cmp_lhs < cmp_rhs) goto loc_0801F1C2;
loc_0801F214:
    r1 = 0x03002F54U; // [0x0801F260]
    r0 = 0x1U;
    *(u32*)(r1) = (u32)r0;
loc_0801F21A:
    return r0; // BX lr
}

// ROM Address: 0x0801F220..0x0801F22A (10 bytes, Thumb)
u32 sub_0801F220(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x1U;
    r0 += 0x100U;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    return sub_0801F21A(r0, r1, r2, r3);
}

// ROM Address: 0x0801F22A..0x0801F320 (246 bytes, Thumb)
u32 sub_0801F22A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = r0;
    r1 += 0x100U;
    r0 = *(u32*)(r1 + 0x30);
    r3 = 0x00000BCCU; // [0x0801F26C]
    r0 = r0 + r3;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801F250;
loc_0801F23C:
    r0 = *(u32*)(r1 + 0x30);
    r0 = r0 + r3;
    r2 = *(u32*)(r0);
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r0 = *(u32*)(r1 + 0x30);
    r0 = r0 + r3;
    r0 = *(u32*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801F23C;
loc_0801F250:
    return r0; // BX lr
    r0 = r0;
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    *(u32*)r5 = r3; r5 += 4;
    *(u32*)r5 = r5; r5 += 4;
    *(u32*)r5 = r6; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r4 = (r0 >> 32);
    r0 = (r6 >> 31);
    r0 = (r0 << 12);
    r4 = (r1 >> 15);
    r0 = r0;
    r4 = r0;
    r0 = sub_08024120(r0, r1, r2, r3); // 0x0801F274
    r4 += 0x110U;
    r0 = 0xFFU;
    r0 += 0x31U;
    r7 = *(u8*)(r4 + 0x8);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801F282: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_0801F2D6;
    r0 = 0x080492ECU /* &VTable_080492EC */; // [0x0801F38C]
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
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801F2AC: BL 0x0804912C
    r2 = 0x10U;
    r1 = 0x0U;
    r0 = r5 + 4;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x0801F2B6: BL 0x0804912C
    r0 = 0x0000FFFFU; // [0x0801F390]
    *(u32*)(r5 + 0x24) = (u32)r0;
    r0 = 0x03002F50U; // [0x0801F394]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x03002F54U; // [0x0801F398]
    *(u32*)(r0) = (u32)r6;
    r0 = 0x0804BC30U /* &VTable_0804BC30 */; // [0x0801F39C]
    *(u32*)(r4) = (u32)r0;
    r0 = r5;
    r0 += 0x20U;
    *(u8*)(r0 + 0xE) = (u8)r6;
    *(u8*)(r0 + 0xF) = (u8)r6;
    *(u8*)(r0 + 0xD) = (u8)r6;
    *(u8*)(r0 + 0xC) = (u8)r7;
loc_0801F2D6:
    r0 = r4;
    r0 = sub_08040160(r0, r1, r2, r3); // 0x0801F2D8
    return r0;
    r0 = sub_0802426E(r0, r1, r2, r3); // 0x0801F2E0: BL 0x0802426E
    return r0;
    r4 = r0;
    r0 = 0x03000FF0U; // [0x0801F3A0]
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801F2F4: BL 0x08046AA2
    r1 = (r0 << 24);
    r1 = (r1 >> 24);
    if (cmp_lhs == cmp_rhs) goto loc_0801F308;
    r0 = 0x2U;
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) goto loc_0801F306;
    r0 = 0x3U;
loc_0801F306:
    return r0;
loc_0801F308:
    r0 = r4;
    r0 = sub_080067F4(r0, r1, r2, r3); // 0x0801F30A
    return r0;
    r0 += 0x120U;
    r2 = *(u8*)(r0 + 0xC);
    *(u8*)(r1) = (u8)r2;
    r0 = *(u8*)(r0 + 0xD);
    *(u8*)(r1 + 0x1) = (u8)r0;
    r0 = 0x2U;
    return r0; // BX lr
}

// ROM Address: 0x0801F320..0x0801F384 (100 bytes, Thumb)
u32 sub_0801F320(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 -= 0x3U;
    cmp_lhs = (s32)r2; cmp_rhs = 5;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801F364;
    r3 = 0x0801F330U;
    r3 = *(u8*)(r3 + r2);
    r3 = (r3 << 1);
    pc += r3;
    r0 = r0;
    r3 = (r0 << 12);
    r2 = (r3 >> 12);
    r3 = r2;
    r1 = r0;
    r1 += 0xFFU;
    r2 = 0x2U;
    r1 += 0x21U;
    *(u8*)(r1 + 0xD) = (u8)r2;
    r2 = *(u8*)(r1 + 0xC);
    *(u8*)(r1 + 0xE) = (u8)r2;
    goto loc_0801F364;
    r3 = *(u8*)(r1);
    r2 = r0;
    r2 += 0x120U;
    *(u8*)(r2 + 0xD) = (u8)r3;
    r1 = *(u8*)(r1 + 0x1);
    *(u8*)(r2 + 0xE) = (u8)r1;
    goto loc_0801F364;
    r1 = r0;
    r1 += 0xFFU;
    r2 = 0x1U;
    r1 += 0x21U;
    *(u8*)(r1 + 0xD) = (u8)r2;
    r2 = *(u8*)(r1 + 0xC);
    *(u8*)(r1 + 0xE) = (u8)r2;
loc_0801F364:
    r0 += 0x120U;
    r2 = *(u8*)(r0 + 0xD);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801F388(r0, r1, r2, r3);
    r1 = *(u8*)(r0 + 0xC);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801F388(r0, r1, r2, r3);
    r3 = *(u8*)(r0 + 0xE);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) return sub_0801F388(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0801F384(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0801F384(r0, r1, r2, r3);
    return sub_0801F386(r0, r1, r2, r3);
}

// ROM Address: 0x0801F384..0x0801F3B6 (50 bytes, Thumb)
u32 sub_0801F384(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x2U;
    *(u8*)(r0 + 0xF) = (u8)r1;
    return r0; // BX lr
    r0 = r0;
    stack[236] = r2; // [sp + 0x3B0]
    r4 = (r0 >> 32);
    r0 = r0;
    cmp_lhs = (s32)r7; cmp_rhs = 80;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r7; cmp_rhs = 84;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = (r6 >> 31);
    r0 = (r0 << 12);
    r6 = *(u8*)(r2 + 0x4);
    r7 = 0x0U;
    r7 = ~r7;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801F3B6(r0, r1, r2, r3);
    r0 = r7;
    return r0; // BX lr
}

// ROM Address: 0x0801F3B6..0x0801F3DC (38 bytes, Thumb)
u32 sub_0801F3B6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801F3D8;
loc_0801F3BE:
    r3 = (r0 << 3);
    r3 = r3 + r1;
    r3 += 0x4U;
    r4 = *(u8*)(r3 + 0x4);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0801F3D2;
    r3 = *(u8*)(r3 + 0x5);
    r4 = *(u8*)(r2 + 0x5);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) return sub_0801F3B2(r0, r1, r2, r3);
loc_0801F3D2:
    r0 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801F3BE;
loc_0801F3D8:
    r0 = r7;
    return sub_0801F3B2(r0, r1, r2, r3);
}

// ROM Address: 0x0801F3DC..0x0801F3E8 (12 bytes, Thumb)
u32 sub_0801F3DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801F3E8(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0801F3E8..0x0801F44E (102 bytes, Thumb)
u32 sub_0801F3E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = *(u8*)(r2 + 0x4);
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801F3F2;
    r0 = ~r7;
    goto loc_0801F418;
loc_0801F3F2:
    r6 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801F414;
loc_0801F3FA:
    r4 = (r0 << 3);
    r4 = r4 + r1;
    r4 += 0x4U;
    r5 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_0801F40E;
    r4 = *(u8*)(r4 + 0x5);
    r5 = *(u8*)(r2 + 0x5);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0801F418;
loc_0801F40E:
    r0 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801F3FA;
loc_0801F414:
    r0 = 0x0U;
    r0 = ~r0;
loc_0801F418:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0801F42C;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 += 0x4U;
    r1 = *(u32*)(r0);
    r1 = r1 + r3;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x1U;
    return sub_0801F3E4(r0, r1, r2, r3);
loc_0801F42C:
    r0 = *(u32*)(r1);
    r4 = r0;
    r4 -= 0x14EU;
    if (cmp_lhs != cmp_rhs) goto loc_0801F43A;
    r0 = 0x0U;
    return sub_0801F3E4(r0, r1, r2, r3);
loc_0801F43A:
    r4 = r0 + 1;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    *(u32*)(r1) = (u32)r4;
    r1 = *(u32*)(r2 + 0x4);
    r0 += 0x4U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r3;
    r0 = 0x1U;
    return sub_0801F3E4(r0, r1, r2, r3);
}

// ROM Address: 0x0801F44E..0x0801F58C (318 bytes, Thumb)
u32 sub_0801F44E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r6 += 0xFFU;
    r5 = r0;
    r0 = 0x0872083CU; // [0x0801F7B8]
    r6 += 0x11U;
    r1 = 0x2U;
    *(u8*)(r6 + 0x4) = (u8)r1;
    r1 = *(u32*)(r0 + 0xC);
    r7 = r5;
    r1 += 0xE4U;
    stack[3] = r1; // [sp + 0xC]
    r0 = *(u32*)(r1);
    r7 += 0x12CU;
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801F49E;
loc_0801F474:
    r0 = 0x0U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r0;
    r1 = stack[3]; // [sp + 0xC]
    r0 = (r4 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = r7;
    *(u8*)(r3 + 0x5) = (u8)r0;
    r3 = 0x1U;
    r0 = r5;
    r2 = sp;
    r0 = sub_0801F3DC(r0, r1, r2, r3); // 0x0801F48C: BL 0x0801F3DC
    r0 = 0x0U;
    *(u8*)(r6 + 0x4) = (u8)r0;
    r1 = stack[3]; // [sp + 0xC]
    r4 += 0x1U;
    r0 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_0801F474;
loc_0801F49E:
    r4 = 0x0U;
loc_0801F4A0:
    r0 = 0x34U;
    r1 = 0x083BD2F8U; // [0x0801F7BC]
    r0 *= r4;
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r0 = (r0 << 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801F4D6;
    r0 = 0x1U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r0;
    r0 = 0x0872083CU; // [0x0801F7B8]
    *(u8*)(r3 + 0x5) = (u8)r4;
    r0 = *(u32*)(r0 + 0xC);
    r1 = r7;
    r0 = r0 + r4;
    stack[2] = r0; // [sp + 0x8]
    r3 = *(u8*)(r0 + 0x2);
    r0 = r5;
    r2 = sp;
    r0 = sub_0801F3DC(r0, r1, r2, r3); // 0x0801F4C6: BL 0x0801F3DC
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u8*)(r0 + 0x2);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801F4D6;
    r0 = 0x0U;
    *(u8*)(r6 + 0x4) = (u8)r0;
loc_0801F4D6:
    r4 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = 83;
    if (cmp_lhs < cmp_rhs) goto loc_0801F4A0;
    r0 = 0x0872083CU; // [0x0801F7B8]
    r1 = 0x000004F4U; // [0x0801F7C0]
    r0 = *(u32*)(r0 + 0xC);
    r0 = r0 + r1;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801F502;
    r1 = 0x2U;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3 + 0x4) = (u8)r1;
    r4 = 0x0U;
    *(u8*)(r3 + 0x5) = (u8)r4;
    r3 = *(u32*)(r0);
    r1 = r7;
    r0 = r5;
    r2 = sp;
    r0 = sub_0801F3DC(r0, r1, r2, r3); // 0x0801F4FC: BL 0x0801F3DC
    *(u8*)(r6 + 0x4) = (u8)r4;
loc_0801F502:
    return r0;
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801F51A;
    r0 = 0x00000BF8U; // [0x0801F7C4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801F50E: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801F51A;
    r0 = r4;
    return r0;
loc_0801F51A:
    r0 = 0x0804920CU /* &VTable_0804920C */; // [0x0801F7C8]
    r1 = 0x0U;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    r4 -= 0x8U;
    r0 = r4;
    r0 += 0x100U;
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r2 = 0x0804A60CU /* &VTable_0804A60C */; // [0x0801F7CC]
    *(u32*)(r0 + 0x10) = (u32)r1;
    *(u32*)(r4) = (u32)r2;
    r2 = 0xFFU;
    r2 += 0x2DU;
    *(u32*)(r2 + r4) = r1;
    r2 = 0xBA0U; // (93 << 5)
    r2 = r4 + r2;
    *(u32*)(r2) = (u32)r1;
    r2 = 0x00000BCCU; // [0x0801F7D0]
    r2 = r4 + r2;
    *(u32*)(r2) = (u32)r1;
    *(u32*)(r0 + 0x20) = (u32)r1;
    *(u32*)(r0 + 0x24) = (u32)r1;
    *(u32*)(r0 + 0x28) = (u32)r1;
    r0 = r4;
    r0 = sub_0801F44E(r0, r1, r2, r3); // 0x0801F54E: BL 0x0801F44E
    r0 = r4;
    return r0;
    r5 = r0;
    r0 = 0xBA0U; // (93 << 5)
    r7 = r5 + r0;
    r2 = 0x0872083CU; // [0x0801F7B8]
    r0 = *(u32*)(r7);
    r2 = *(u32*)(r2 + 0xC);
    r1 = 0x000004F4U; // [0x0801F7C0]
    r4 = 0x0U;
    r6 = r2 + r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0801F5BA(r0, r1, r2, r3);
    r0 = (r4 << 3);
    r0 = r0 + r7;
    r0 += 0x4U;
    r1 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801F58C(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0801F598(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0801F5B2(r0, r1, r2, r3);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r6);
    r0 = r1 - r0;
    return sub_0801F5AA(r0, r1, r2, r3);
}

// ROM Address: 0x0801F58C..0x0801F5AA (30 bytes, Thumb)
u32 sub_0801F58C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x5);
    r0 = 0x0872083CU; // [0x0801F7B8]
    r0 = *(u32*)(r0 + 0xC);
    r0 = sub_08004468(r0, r1, r2, r3); // 0x0801F592
    return sub_0801F5B2(r0, r1, r2, r3);
    r1 = 0x0872083CU; // [0x0801F7B8]
    r2 = *(u8*)(r0 + 0x5);
    r1 = *(u32*)(r1 + 0xC);
    r0 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = *(u8*)(r1 + 0x2);
    r0 = r2 - r0;
    *(u8*)(r1 + 0x2) = (u8)r0;
    return sub_0801F5B2(r0, r1, r2, r3);
}

// ROM Address: 0x0801F5AA..0x0801F5E4 (58 bytes, Thumb)
u32 sub_0801F5AA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_0801F5AA:
    *(u32*)(r6) = (u32)r0;
    r1 = *(u32*)(r6);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801F5AA;
    r0 = *(u32*)(r7);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_0801F570(r0, r1, r2, r3);
    r0 = 0x00000BCCU; // [0x0801F7D0]
    r4 = 0x0U;
    r5 = r5 + r0;
    r0 = *(u32*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0801F61C(r0, r1, r2, r3);
    r7 = 0x0872083CU; // [0x0801F7B8]
    r0 = (r4 << 3);
    r0 = r0 + r5;
    r0 += 0x4U;
    r1 = *(u8*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801F5E4(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0801F5EE(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_0801F614(r0, r1, r2, r3);
    r0 = *(u32*)(r0);
    r1 = *(u32*)(r6);
    r0 = r1 + r0;
    return sub_0801F60C(r0, r1, r2, r3);
}

// ROM Address: 0x0801F5E4..0x0801F60C (40 bytes, Thumb)
u32 sub_0801F5E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u8*)(r0 + 0x5);
    r0 = *(u32*)(r7 + 0xC);
    r0 = sub_08004448(r0, r1, r2, r3); // 0x0801F5E8
    return sub_0801F614(r0, r1, r2, r3);
    r2 = *(u8*)(r0 + 0x5);
    r1 = *(u32*)(r7 + 0xC);
    r0 = *(u32*)(r0);
    r1 = r1 + r2;
    r2 = *(u8*)(r1 + 0x2);
    r0 = r2 + r0;
    r2 = 0xFFU;
    r2 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_0801F606;
    *(u8*)(r1 + 0x2) = (u8)r0;
    return sub_0801F614(r0, r1, r2, r3);
loc_0801F606:
    r0 = 0xFFU;
    *(u8*)(r1 + 0x2) = (u8)r0;
    return sub_0801F614(r0, r1, r2, r3);
}

// ROM Address: 0x0801F60C..0x0801F61E (18 bytes, Thumb)
u32 sub_0801F60C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_0801F60C:
    *(u32*)(r6) = (u32)r0;
    r1 = *(u32*)(r6);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801F60C;
    r0 = *(u32*)(r5);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) return sub_0801F5C8(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x0801F61E..0x0801F796 (376 bytes, Thumb)
u32 sub_0801F61E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801F7D4]
    r5 = *(u32*)(r1 + 0x5C);
    r6 = *(u32*)(r1 + 0x68);
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x84U;
    r4 = r0;
    r0 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    r2 = 0x0U;
    r3 = 0xCU;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801F640: BL 0x08013E64
    stack[6] = r0; // [sp + 0x18]
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F64A
    r7 = 0x0872083CU; // [0x0801F7B8]
    r1 = 0x0U;
    r2 = *(u32*)(r7 + 0x8);
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x1CU;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r5; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801F666
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F66E
    r1 = r5;
    r0 = *(u32*)(r7 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801F676
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r0;
    r1 = 0x1U;
    r5 += 0x1EU;
    r2 = 0x84U;
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    stack[1] = r1; // [sp + 0x4]
    stack[2] = r1; // [sp + 0x8]
    r1 = r4;
    r2 = 0x1U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801F694: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F69C
    r2 = *(u32*)(r7 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = r5;
    r2 += 0x10U;
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    stack[0] = r6; // [sp + 0x0]
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801F6B8
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F6C0
    r0 = 0xFFU;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801F7D4]
    r0 += 0x51U;
    r0 = *(u32*)(r1 + r0);
    r1 = r6;
    stack[5] = r0; // [sp + 0x14]
    r0 = *(u32*)(r7 + 0x8);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801F6D2
    r3 = r0 + r5;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r5 = r3;
    r5 += 0x14U;
    r2 = 0x84U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r3 = r5;
    r0 = 0x7U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r2 = 0x7U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801F6F4: BL 0x08013E64
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F6FC
    r2 = *(u32*)(r7 + 0x8);
    r1 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = stack[5]; // [sp + 0x14]
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r2 = r5;
    r2 += 0x1AU;
    r0 = 0x5U;
    stack[1] = r0; // [sp + 0x4]
    r1 = r4;
    r3 = 0x90U;
    r0 = 0x0U;
    r0 = sub_08014124(r0, r1, r2, r3); // 0x0801F71A
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F722
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x28U;
    r1 = 0x1U;
    r6 = 0x6EU;
    r3 = r6;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x2U;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x2U;
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801F740: BL 0x08013E64
    r5 = r4;
    r5 += 0x100U;
    *(u32*)(r5 + 0x18) = (u32)r0;
    r2 = 0x0U;
    stack[3] = r2; // [sp + 0xC]
    r2 = 0x70U;
    r1 = 0x1U;
    stack[2] = r1; // [sp + 0x8]
    stack[0] = r2; // [sp + 0x0]
    r0 = 0x3U;
    r3 = r6;
    r1 = r4;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x3U;
    r0 = 0x0U;
    r0 = sub_08013E64(r0, r1, r2, r3); // 0x0801F764: BL 0x08013E64
    *(u32*)(r5 + 0x1C) = (u32)r0;
    r1 = *(u32*)(r5 + 0x18);
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F76E
    r0 = r4;
    r1 = *(u32*)(r5 + 0x1C);
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F776
    r0 = 0xFFU;
    r0 += 0x15U;
    r0 = *(u8*)(r0 + r4);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0801F796(r0, r1, r2, r3);
    r1 = r4;
    r0 = 0x0U;
    r0 = sub_08016208(r0, r1, r2, r3); // 0x0801F788: BL 0x08016208
    r1 = r0;
    r0 = r4;
    r0 = sub_0800664E(r0, r1, r2, r3); // 0x0801F790
    return sub_0801F7A8(r0, r1, r2, r3);
}

// ROM Address: 0x0801F796..0x0801F7AE (24 bytes, Thumb)
u32 sub_0801F796(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = stack[6]; // [sp + 0x18]
    r0 = 0x0U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x24);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801F7A4: BL 0x08046AA2
    r0 = 0x0U;
    r0 = sub_08050414(r0, r1, r2, r3); // 0x0801F7AA
    return r0;
}

// ROM Address: 0x0801F7B2..0x0801F7FE (76 bytes, Thumb)
u32 sub_0801F7B2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
    r0 = r0;
    r4 = (r7 >> 32);
    r2 = (r6 >> 1);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0801F7B0(r0, r1, r2, r3);
    r3 = (r7 >> 32);
    r4 = (r6 << 19);
    r0 = r0;
    r0 = (r7 >> 15);
    r0 = r0;
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r6 = 0x0801F800U;
    r4 = (r0 >> 32);
    r4 = (r1 >> 15);
    r0 = r0;
    r6 = (r0 >> 32);
    r2 = 0xFFU;
    r2 += 0x15U;
    r2 = *(u8*)(r2 + r0);
    r0 += 0x100U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801F7FE(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801F7FA;
    r0 = *(u32*)(r0 + 0x28);
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 1);
    r0 += 0x3CU;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r2 = 0x88U;
    *(u32*)(r1) = (u32)r2;
loc_0801F7FA:
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x0801F7FE..0x0801F810 (18 bytes, Thumb)
u32 sub_0801F7FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r0 + 0x24);
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r0 = (r0 << 1);
    r0 += 0x2EU;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r2 = 0x12U;
    *(u32*)(r1) = (u32)r2;
    return sub_0801F7FA(r0, r1, r2, r3);
}

// ROM Address: 0x0801F810..0x0801F836 (38 bytes, Thumb)
u32 sub_0801F810(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = r0;
    r2 = *(u8*)(r3 + 0x4);
    r0 = r1;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801FB38]
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801F836(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_0801F84E(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_0801F834;
    r2 = 0xFFU;
    r2 += 0x49U;
    r2 = *(u32*)(r1 + r2);
    r3 = *(u32*)(r3);
    r1 = 0x0801FB3CU;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801F830
loc_0801F834:
    return r0;
}

// ROM Address: 0x0801F836..0x0801F882 (76 bytes, Thumb)
u32 sub_0801F836(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r3 + 0x5);
    r3 = 0x2CU;
    r2 *= r3;
    r3 = 0x086F82ECU; // [0x0801FB4C]
    r2 = r2 + r3;
    r2 = *(u16*)(r2);
    r2 = (r2 << 2);
    r2 = *(u32*)(r1 + r2);
    r1 = 0x54U;
    r0 = sub_0803DCC4(r0, r1, r2, r3); // 0x0801F848
    return sub_0801F834(r0, r1, r2, r3);
    r4 = *(u32*)(r3);
    r2 = 0x083BD2F8U; // [0x0801FB50]
    cmp_lhs = (s32)r4; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801F86A;
    r4 = *(u8*)(r3 + 0x5);
    r3 = 0x34U;
    r3 *= r4;
    r2 = r3 + r2;
    r2 = *(u16*)(r2 + 0x2);
    r2 = (r2 << 2);
    r1 = *(u32*)(r1 + r2);
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801F864
    return sub_0801F834(r0, r1, r2, r3);
loc_0801F86A:
    r5 = *(u8*)(r3 + 0x5);
    r3 = 0x34U;
    r3 *= r5;
    r2 = r3 + r2;
    r2 = *(u16*)(r2 + 0x2);
    r2 = (r2 << 2);
    r2 = *(u32*)(r1 + r2);
    r1 = 0x0801FB3CU;
    r3 = r4;
    r0 = sub_0803DC96(r0, r1, r2, r3); // 0x0801F87C
    return sub_0801F834(r0, r1, r2, r3);
}

// ROM Address: 0x0801F882..0x0801F8CE (76 bytes, Thumb)
u32 sub_0801F882(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r5 += 0x100U;
    r4 = r1;
    r1 = *(u32*)(r5 + 0x18);
    r7 = 0x1U;
    *(u32*)(r1 + 0x10) = (u32)r7;
    r1 = *(u32*)(r5 + 0x1C);
    r2 = r5;
    *(u32*)(r1 + 0x10) = (u32)r7;
    r1 = 0xFFU;
    r1 += 0x15U;
    r1 = *(u8*)(r1 + r0);
    r2 += 0x2CU;
    stack[0] = r2; // [sp + 0x0]
    r2 = 0xBA0U; // (93 << 5)
    r6 = r0 + r2;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801F8CE(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_0801F902(r0, r1, r2, r3);
    r1 = *(u32*)(r5 + 0x18);
    r2 = *(u32*)(r5 + 0x28);
    r0 = r7;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801F8BC;
    r0 = 0x0U;
loc_0801F8BC:
    *(u32*)(r1 + 0x8) = (u32)r0;
    r0 = *(u32*)(r5 + 0x1C);
    r1 = *(u32*)(r6);
    r2 = *(u32*)(r5 + 0x28);
    r1 -= 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) return sub_0801F8FC(r0, r1, r2, r3);
    r1 = 0x1U;
    return sub_0801F8FE(r0, r1, r2, r3);
}

// ROM Address: 0x0801F8CE..0x0801F8FE (48 bytes, Thumb)
u32 sub_0801F8CE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x18);
    r1 = *(u32*)(r5 + 0x20);
    r2 = *(u32*)(r5 + 0x24);
    r1 = r1 + r2;
    if (cmp_lhs == cmp_rhs) goto loc_0801F8DC;
    r1 = 0x1U;
    goto loc_0801F8DE;
loc_0801F8DC:
    r1 = 0x0U;
loc_0801F8DE:
    *(u32*)(r0 + 0x8) = (u32)r1;
    r0 = *(u32*)(r5 + 0x1C);
    r1 = stack[0]; // [sp + 0x0]
    r2 = *(u32*)(r5 + 0x20);
    r1 = *(u32*)(r1);
    r3 = *(u32*)(r5 + 0x24);
    r1 -= 0x1U;
    r2 = r2 + r3;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0801F8F6;
    r1 = 0x1U;
    goto loc_0801F8F8;
loc_0801F8F6:
    r1 = 0x0U;
loc_0801F8F8:
    *(u32*)(r0 + 0x8) = (u32)r1;
    return sub_0801F90C(r0, r1, r2, r3);
    r1 = 0x0U;
    return r0;
}

// ROM Address: 0x0801F8FE..0x0801FA88 (394 bytes, Thumb)
u32 sub_0801F8FE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u32*)(r0 + 0x8) = (u32)r1;
    goto loc_0801F90C;
    r0 = *(u32*)(r5 + 0x18);
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    r0 = *(u32*)(r5 + 0x1C);
    *(u32*)(r0 + 0x8) = (u32)r1;
loc_0801F90C:
    r3 = 0x70U;
    r2 = 0x37U;
    r1 = 0x75U;
    r0 = r4;
    r0 = sub_080051B0(r0, r1, r2, r3); // 0x0801F914
    r0 = 0x2U;
    *(u8*)(r4 + 0x3) = (u8)r0;
    r0 = 0x0803F5A5U; // [0x0801FB54]
    *(u8*)(r4 + 0x2) = (u8)r7;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r1 = 0x0U;
    *(u8*)(r4) = (u8)r1;
    r0 = 0xEU;
    *(u8*)(r4 + 0x1) = (u8)r0;
    r0 = 0x0872083CU; // [0x0801FB58]
    r7 = 0x0U;
    r0 = *(u32*)(r0 + 0x8);
    *(u32*)(r4 + 0xC) = (u32)r0;
loc_0801F932:
    r0 = *(u32*)(r5 + 0x20);
    r1 = stack[0]; // [sp + 0x0]
    r0 = r0 + r7;
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801F960;
    r1 = (r7 << 3);
    r1 = r1 - r7;
    r1 = (r1 << 1);
    r1 += 0x31U;
    *(u32*)(r4 + 0x8) = (u32)r1;
    r2 = 0x16U;
    *(u32*)(r4 + 0x4) = (u32)r2;
    r1 = stack[0]; // [sp + 0x0]
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 += 0x4U;
    r1 = r4;
    r0 = sub_0801F810(r0, r1, r2, r3); // 0x0801F956: BL 0x0801F810
    r7 += 0x1U;
    cmp_lhs = (s32)r7; cmp_rhs = 6;
    if (cmp_lhs < cmp_rhs) goto loc_0801F932;
loc_0801F960:
    r0 = 0x31U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = 0xFFU;
    r7 = 0x8CU;
    r1 = 0x0806BCE8U /* L"礬ࠅ礮ࠅ示ࠅ祊ࠅ祦ࠅ祾ࠅ禜ࠅ禼ࠅ秐ࠅ秤ࠅ秼ࠅ税ࠅ稦ࠅ穈ࠅ穞ࠅ穮ࠅ窀ࠅ窠ࠅ窺ࠅ竐ࠅ竜ࠅ" */; // [0x0801FB38]
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 += 0x41U;
    r1 = *(u32*)(r1 + r0);
    r0 = r4;
    r0 = sub_0803DADA(r0, r1, r2, r3); // 0x0801F972
    r5 = 0x0U;
loc_0801F978:
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r5;
    if (cmp_lhs <= cmp_rhs) goto loc_0801F99C;
    r0 = (r5 << 3);
    r0 = r0 - r5;
    r0 = (r0 << 1);
    r0 += 0x3FU;
    *(u32*)(r4 + 0x8) = (u32)r0;
    r0 = (r5 << 3);
    r0 = r0 + r6;
    r0 += 0x4U;
    r1 = r4;
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 = sub_0801F810(r0, r1, r2, r3); // 0x0801F992: BL 0x0801F810
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 6;
    if (cmp_lhs < cmp_rhs) goto loc_0801F978;
loc_0801F99C:
    return r0;
    r4 = r0;
    r2 = 0xA0U;
    r1 = 0xF0U;
    r0 = sp;
    r5 = sp;
    r0 = sub_0803F540(r0, r1, r2, r3); // 0x0801F9AC
    r3 = 0x1U;
    r2 = 0x4FU;
    r1 = r5;
    r0 = r4;
    r0 = sub_08006718(r0, r1, r2, r3); // 0x0801F9B8
    r1 = r5;
    r0 = r4;
    r0 = sub_0801F882(r0, r1, r2, r3); // 0x0801F9C0: BL 0x0801F882
    r1 = 0x06000040U; // [0x0801FB5C]
    r0 = r5;
    r0 = sub_08049150(r0, r1, r2, r3); // 0x0801F9C8: BL 0x08049150
    r1 = 0x0U;
    r0 = sp;
    r0 = sub_0803F58C(r0, r1, r2, r3); // 0x0801F9D0: BL 0x0803F58C
    return r0;
    r0 = (r2 << 3);
    r4 = r0 + r1;
    r5 = *(u32*)(r4 + 0x4);
    r0 = r4 + 4;
    r3 = r5 - r3;
    *(u32*)(r4 + 0x4) = (u32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_0801F9FC;
    r3 = *(u32*)(r1);
    r3 -= 0x1U;
    *(u32*)(r1) = (u32)r3;
    r1 = r3 - r2;
    if (cmp_lhs == cmp_rhs) goto loc_0801F9FC;
    r2 = (r1 << 3);
    r1 = r4;
    r1 += 0xCU;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0801F9F8: BL 0x08049138
loc_0801F9FC:
    r0 = 0x1U;
    return r0;
    r5 = r2;
    r2 = (r3 << 3);
    r4 = r2 + r5;
    r6 = stack[6]; // [sp + 0x18]
    stack[0] = r4; // [sp + 0x0]
    r7 = r3;
    r3 = r6;
    r4 += 0x4U;
    r2 = r4;
    r0 = sub_0801F3DC(r0, r1, r2, r3); // 0x0801FA14: BL 0x0801F3DC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FA3A;
    r0 = *(u32*)(r4);
    r0 = r0 - r6;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801FA3A;
    r0 = *(u32*)(r5);
    r0 -= 0x1U;
    *(u32*)(r5) = (u32)r0;
    r0 = r0 - r7;
    if (cmp_lhs == cmp_rhs) goto loc_0801FA3A;
    r1 = stack[0]; // [sp + 0x0]
    r2 = (r0 << 3);
    r1 += 0xCU;
    r0 = r4;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0801FA36: BL 0x08049138
loc_0801FA3A:
    return r0;
    r5 = r0;
    r1 = 0x0872083CU; // [0x0801FB58]
    r0 = 0x000005C4U; // [0x0801FB60]
    r1 = *(u32*)(r1 + 0x4);
    r4 = r5;
    r7 = r1 + r0;
    r0 = 0xBA0U; // (93 << 5)
    r4 += 0x100U;
    r6 = r5 + r0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801FA88(r0, r1, r2, r3);
    r1 = 0x0831947CU; // [0x0801FB64]
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0801FB1C(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) goto loc_0801FA82;
    r0 = *(u32*)(r6);
    r2 = *(u32*)(r4 + 0x28);
    r0 -= 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r2;
    if (cmp_lhs <= cmp_rhs) goto loc_0801FA7E;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801FA74
    r0 = *(u32*)(r4 + 0x28);
    r0 += 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
loc_0801FA7E:
    r2 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r2;
loc_0801FA82:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801FA88..0x0801FB38 (176 bytes, Thumb)
u32 sub_0801FA88(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x28);
    r0 = (r0 << 3);
    r0 = r0 + r6;
    r0 += 0x4U;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801FA9A;
    r0 = 0x1U;
    goto loc_0801FAD8;
loc_0801FA9A:
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xFFU;
    r0 += 0x39U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801FAA0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FAD4;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801FB68]
    r2 = 0x0U;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r2;
    *(u32*)(r1 + 0x8) = (u32)r2;
    *(u32*)(r1 + 0x10) = (u32)r2;
    r1 = 0x0804BC04U /* &VTable_0804BC04 */; // [0x0801FB6C]
    *(u32*)(r0) = (u32)r1;
    r3 = stack[1]; // [sp + 0x4]
    r1 = r0;
    r2 = *(u16*)(r3);
    r1 += 0x114U;
    *(u16*)(r1) = (u16)r2;
    r2 = *(u16*)(r3 + 0x2);
    *(u16*)(r1 + 0x2) = (u16)r2;
    r2 = *(u16*)(r3 + 0x4);
    *(u16*)(r1 + 0x4) = (u16)r2;
loc_0801FAD4:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801FAD4
loc_0801FAD8:
    stack[2] = r0; // [sp + 0x8]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0801FA82(r0, r1, r2, r3);
    r1 = 0x0831947CU; // [0x0801FB64]
    r3 = 0x0U;
    r2 = 0x40U;
    r1 += 0xCU;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801FAE8
    r2 = stack[2]; // [sp + 0x8]
    r1 = r5;
    stack[0] = r2; // [sp + 0x0]
    r1 += 0x12CU;
    r2 = r6;
    r0 = r5;
    r3 = *(u32*)(r4 + 0x28);
    r0 = sub_0801FA00(r0, r1, r2, r3); // 0x0801FAFC
    r1 = *(u32*)(r6);
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) return sub_0801FA82(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FB12;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
    return sub_0801FA82(r0, r1, r2, r3);
loc_0801FB12:
    r3 = 0x0U;
    r5 += 0x110U;
    *(u8*)(r5 + 0x4) = (u8)r3;
    return sub_0801FA82(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FB32;
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r7;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x0801FB28
    r0 = *(u32*)(r4 + 0x28);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x28) = (u32)r0;
loc_0801FB32:
    r2 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r2;
    return sub_0801FA82(r0, r1, r2, r3);
}

// ROM Address: 0x0801FB3A..0x0801FBAA (112 bytes, Thumb)
u32 sub_0801FB3A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = (r0 >> 32);
    r5 = r4;
    r3 = (r6 << 1);
    r0 = r4;
    r0 = r5;
loc_0801FB44:
    r5 = r4;
    r4 = (r4 << 1);
    r1 = r5;
    r0 = r0;
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_0801FB44;
    r3 = (r7 >> 32);
    r3 = (r0 >> 32);
    r4 = (r7 >> 32);
    r2 = (r6 >> 1);
    r0 = (r0 << 1);
    r0 = (r0 << 24);
    r4 = (r0 << 23);
    r0 = r0;
    stack[124] = r4; // [sp + 0x1F0]
    r1 = (r6 >> 32);
    stack[12] = r2; // [sp + 0x30]
    r4 = (r0 >> 32);
    r4 = (r0 >> 32);
    r0 = (r2 << 3);
    r4 = r0 + r1;
    r5 = *(u32*)(r4 + 0x4);
    r0 = r4 + 4;
    r3 = r5 - r3;
    *(u32*)(r4 + 0x4) = (u32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_0801FB94;
    r3 = *(u32*)(r1);
    r3 -= 0x1U;
    *(u32*)(r1) = (u32)r3;
    r1 = r3 - r2;
    if (cmp_lhs == cmp_rhs) goto loc_0801FB94;
    r2 = (r1 << 3);
    r1 = r4;
    r1 += 0xCU;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0801FB90: BL 0x08049138
loc_0801FB94:
    r0 = 0x1U;
    return r0;
    r6 = *(u8*)(r2 + 0x4);
    r7 = 0x0U;
    r7 = ~r7;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801FBAA(r0, r1, r2, r3);
    r0 = r7;
    return r0; // BX lr
}

// ROM Address: 0x0801FBAA..0x0801FBD0 (38 bytes, Thumb)
u32 sub_0801FBAA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801FBCC;
loc_0801FBB2:
    r3 = (r0 << 3);
    r3 = r3 + r1;
    r3 += 0x4U;
    r4 = *(u8*)(r3 + 0x4);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) goto loc_0801FBC6;
    r3 = *(u8*)(r3 + 0x5);
    r4 = *(u8*)(r2 + 0x5);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) return sub_0801FBA6(r0, r1, r2, r3);
loc_0801FBC6:
    r0 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801FBB2;
loc_0801FBCC:
    r0 = r7;
    return sub_0801FBA6(r0, r1, r2, r3);
}

// ROM Address: 0x0801FBD0..0x0801FBDC (12 bytes, Thumb)
u32 sub_0801FBD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801FBDC(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x0801FBDC..0x0801FC3E (98 bytes, Thumb)
u32 sub_0801FBDC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = *(u8*)(r2 + 0x4);
    cmp_lhs = (s32)r7; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801FBE6;
    r0 = ~r7;
    goto loc_0801FC0C;
loc_0801FBE6:
    r6 = *(u32*)(r1);
    r0 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801FC08;
loc_0801FBEE:
    r4 = (r0 << 3);
    r4 = r4 + r1;
    r4 += 0x4U;
    r5 = *(u8*)(r4 + 0x4);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_0801FC02;
    r4 = *(u8*)(r4 + 0x5);
    r5 = *(u8*)(r2 + 0x5);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r5;
    if (cmp_lhs == cmp_rhs) goto loc_0801FC0C;
loc_0801FC02:
    r0 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_0801FBEE;
loc_0801FC08:
    r0 = 0x0U;
    r0 = ~r0;
loc_0801FC0C:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_0801FC20;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 += 0x4U;
    r1 = *(u32*)(r0);
    r1 = r1 + r3;
    *(u32*)(r0) = (u32)r1;
    r0 = 0x1U;
    return sub_0801FBD8(r0, r1, r2, r3);
loc_0801FC20:
    r0 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs != cmp_rhs) goto loc_0801FC2A;
    r0 = 0x0U;
    return sub_0801FBD8(r0, r1, r2, r3);
loc_0801FC2A:
    r4 = r0 + 1;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    *(u32*)(r1) = (u32)r4;
    r1 = *(u32*)(r2 + 0x4);
    r0 += 0x4U;
    *(u32*)(r0 + 0x4) = (u32)r1;
    *(u32*)(r0) = (u32)r3;
    r0 = 0x1U;
    return sub_0801FBD8(r0, r1, r2, r3);
}

// ROM Address: 0x0801FC3E..0x0801FC9E (96 bytes, Thumb)
u32 sub_0801FC3E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r2;
    r2 = (r3 << 3);
    r4 = r2 + r5;
    r6 = stack[6]; // [sp + 0x18]
    stack[0] = r4; // [sp + 0x0]
    r7 = r3;
    r3 = r6;
    r4 += 0x4U;
    r2 = r4;
    r0 = sub_0801FBD0(r0, r1, r2, r3); // 0x0801FC52: BL 0x0801FBD0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FC78;
    r0 = *(u32*)(r4);
    r0 = r0 - r6;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_0801FC78;
    r0 = *(u32*)(r5);
    r0 -= 0x1U;
    *(u32*)(r5) = (u32)r0;
    r0 = r0 - r7;
    if (cmp_lhs == cmp_rhs) goto loc_0801FC78;
    r1 = stack[0]; // [sp + 0x0]
    r2 = (r0 << 3);
    r1 += 0xCU;
    r0 = r4;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x0801FC74: BL 0x08049138
loc_0801FC78:
    return r0;
    r4 = r0;
    r4 += 0x100U;
    r7 = 0x0U;
    r5 = r0;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801FC9E(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 2;
    if (cmp_lhs == cmp_rhs) return sub_0801FD3E(r0, r1, r2, r3);
    cmp_lhs = (s32)r2; cmp_rhs = 3;
    if (cmp_lhs != cmp_rhs) return sub_0801FD3C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs >= cmp_rhs) return sub_0801FD54(r0, r1, r2, r3);
    r0 += 0x1U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    return sub_0801FD5A(r0, r1, r2, r3);
}

// ROM Address: 0x0801FC9E..0x0801FD54 (182 bytes, Thumb)
u32 sub_0801FC9E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r4 + 0x24);
    r6 = r5;
    r6 += 0xFFU;
    r0 = r0 + r1;
    r0 = (r0 << 3);
    r6 += 0x2DU;
    r0 = r0 + r6;
    r0 += 0x4U;
    r1 = *(u32*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801FCBA;
    r0 = 0x1U;
    goto loc_0801FCF6;
loc_0801FCBA:
    stack[0] = r0; // [sp + 0x0]
    r0 = 0xFFU;
    r0 += 0x39U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801FCC0: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FCF2;
    r1 = 0x0804920CU /* &VTable_0804920C */; // [0x0801FF40]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x8U;
    r1 = r0;
    r1 += 0x100U;
    *(u32*)(r1 + 0xC) = (u32)r7;
    *(u32*)(r1 + 0x8) = (u32)r7;
    *(u32*)(r1 + 0x10) = (u32)r7;
    r1 = 0x0804BC04U /* &VTable_0804BC04 */; // [0x0801FF44]
    *(u32*)(r0) = (u32)r1;
    r3 = stack[0]; // [sp + 0x0]
    r1 = r0;
    r2 = *(u16*)(r3);
    r1 += 0x114U;
    *(u16*)(r1) = (u16)r2;
    r2 = *(u16*)(r3 + 0x2);
    *(u16*)(r1 + 0x2) = (u16)r2;
    r2 = *(u16*)(r3 + 0x4);
    *(u16*)(r1 + 0x4) = (u16)r2;
loc_0801FCF2:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x0801FCF2
loc_0801FCF6:
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_0801FD3A;
    stack[0] = r2; // [sp + 0x0]
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r4 + 0x24);
    r2 = r6;
    r3 = r0 + r1;
    r0 = 0xBA0U; // (93 << 5)
    r1 = r5 + r0;
    r0 = r5;
    r0 = sub_0801FC3E(r0, r1, r2, r3); // 0x0801FD0E: BL 0x0801FC3E
    r2 = *(u32*)(r6);
    r0 = *(u32*)(r4 + 0x20);
    r1 = *(u32*)(r4 + 0x24);
    r3 = r0 + r1;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) goto loc_0801FD3A;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FD28;
    r1 -= 0x1U;
    *(u32*)(r4 + 0x24) = (u32)r1;
    goto loc_0801FD3A;
loc_0801FD28:
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FD32;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x20) = (u32)r0;
    goto loc_0801FD3A;
loc_0801FD32:
    r0 = 0x1U;
    r5 += 0x110U;
    *(u8*)(r5 + 0x4) = (u8)r0;
loc_0801FD3A:
    *(u32*)(r4 + 0x10) = (u32)r7;
    return sub_0801FD5C(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801FD4A;
    r0 -= 0x1U;
    *(u32*)(r4 + 0x24) = (u32)r0;
    goto loc_0801FD50;
loc_0801FD4A:
    r0 = *(u32*)(r4 + 0x20);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x20) = (u32)r0;
loc_0801FD50:
    *(u32*)(r4 + 0x10) = (u32)r7;
    return sub_0801FD5C(r0, r1, r2, r3);
}
