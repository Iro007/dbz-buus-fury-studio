/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #06
 * Address Range: 0x0801170A..0x080140F6 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x0801170A..0x08011732 (40 bytes, Thumb)
u32 sub_0801170A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = *(u8*)(r0);
    r1 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs == cmp_rhs) goto loc_0801172E;
    r2 = 0x00000694U; // [0x08011810]
loc_08011714:
    r4 = r3;
    r3 = (r4 << 2);
    r3 = r3 + r4;
    r3 = (r3 << 1);
    r3 = r3 + r0;
    r3 = r3 + r2;
    r4 = *(u16*)(r3 + 0x4);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs <= cmp_rhs) goto loc_08011728;
    r1 = r4;
loc_08011728:
    r3 = *(u8*)(r3 + 0x8);
    cmp_lhs = (s32)r3; cmp_rhs = 255;
    if (cmp_lhs != cmp_rhs) goto loc_08011714;
loc_0801172E:
    r0 = (r1 << 6);
    return sub_08011706(r0, r1, r2, r3);
}

// ROM Address: 0x08011732..0x080117D8 (166 bytes, Thumb)
u32 sub_08011732(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    r0 = r6;
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0801173E
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08011806(r0, r1, r2, r3);
    r0 = 0x0000040CU; // [0x08011814]
    r0 = r6 + r0;
    stack[2] = r0; // [sp + 0x8]
    r7 = r6 + 4;
loc_08011750:
    r4 = *(u32*)(r6 + 0x4);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080117AA;
loc_08011756:
    r0 = (r4 << 2);
    r0 = r0 + r7;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r5 = r0;
    r2 = *(u32*)(r1 + 0x18);
    r2 = r2 + r1;
    r1 = stack[1]; // [sp + 0x4]
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08011766: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs == cmp_rhs) return sub_080117D8(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) goto loc_080117A6;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801177A: BL 0x08046AA2
    r0 = stack[2]; // [sp + 0x8]
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r5;
    r1 = r4;
    r0 = r7;
    r0 = sub_0804FE54(r0, r1, r2, r3); // 0x08011790: BL 0x0804FE54
    r0 = stack[1]; // [sp + 0x4]
    cmp_lhs = (s32)r0; cmp_rhs = 11;
    if (cmp_lhs < cmp_rhs) goto loc_080117A6;
    r0 = r6;
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x0801179C
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080117AA;
loc_080117A6:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011756;
loc_080117AA:
    r0 = stack[1]; // [sp + 0x4]
    r0 += 0x1U;
    stack[1] = r0; // [sp + 0x4]
    r0 = r6;
    r0 = sub_080116FC(r0, r1, r2, r3); // 0x080117B2
    r1 = stack[4]; // [sp + 0x10]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) goto loc_08011750;
    r0 = r6;
    r0 = sub_080115B0(r0, r1, r2, r3); // 0x080117BE
    r0 = 0x08072824U; // [0x0801180C]
    r0 = *(u32*)(r0);
    r0 = sub_0803DA62(r0, r1, r2, r3); // 0x080117C6
    r0 = 0x208U; // (65 << 3)
    r5 = r6 + r0;
    r4 = *(u32*)(r5);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) return sub_08011802(r0, r1, r2, r3);
    return sub_080117EE(r0, r1, r2, r3);
}

// ROM Address: 0x080117D8..0x080117EE (22 bytes, Thumb)
u32 sub_080117D8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080117E0: BL 0x08046AA2
    r1 = r4;
    r0 = r7;
    r0 = sub_0804FE54(r0, r1, r2, r3); // 0x080117E8: BL 0x0804FE54
    return sub_08011794(r0, r1, r2, r3);
}

// ROM Address: 0x080117EE..0x08011916 (296 bytes, Thumb)
u32 sub_080117EE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
loc_080117EE:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080117FA: BL 0x08046AA2
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080117EE;
    r0 = 0x0U;
    *(u32*)(r5) = (u32)r0;
    return r0;
    r0 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 36;
    r7 = (r0 >> 32);
    r4 = (r2 << 26);
    r0 = r0;
    r4 = (r1 << 16);
    r0 = r0;
    r5 = 0x08072824U; // [0x08011A8C]
    r1 = *(u16*)(r0 + 0xE);
    r4 = r0;
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08011822
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_0801183A;
    r1 = *(u16*)(r4 + 0xE);
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0801182E: BL 0x08011732
    r1 = *(u16*)(r4 + 0xE);
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08011836
loc_0801183A:
    *(u16*)(r4 + 0xC) = (u16)r0;
    return r0;
    *(u16*)(r0 + 0xE) = (u16)r1;
    r1 = *(u16*)(r0 + 0xC);
    r4 = r0;
    r0 = 0x0000FFFFU; // [0x08011A90]
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08011872;
    r5 = 0x08072824U; // [0x08011A8C]
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08011850
    r1 = *(u16*)(r4 + 0xE);
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08011858
    r3 = r0 + 1;
    if (cmp_lhs != cmp_rhs) goto loc_08011870;
    r1 = *(u16*)(r4 + 0xE);
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x08011864: BL 0x08011732
    r1 = *(u16*)(r4 + 0xE);
    r0 = *(u32*)(r5 + 0x8);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0801186C
loc_08011870:
    *(u16*)(r4 + 0xC) = (u16)r0;
loc_08011872:
    return r0;
    r4 = r0;
    r0 = r1;
    r1 = r2;
    r2 = r3;
    r4 += 0xCU;
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r1; r4 += 4;
    *(u32*)r4 = r2; r4 += 4;
    r3 = 0x0804ABA0U /* &VTable_0804ABA0 */; // [0x08011A94]
    r4 -= 0x18U;
    *(u32*)(r4) = (u32)r3;
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x08011888: BL 0x0804E490
    r0 = r4;
    return r0;
    r4 = *(u32*)(r0 + 0xC);
    r5 = r0;
    r0 = *(u8*)(r4);
    r7 = r3;
    r6 = r2;
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080118C2;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x08011A90]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080118C2;
    r3 = 0x2U;
    r0 = 0x08072824U; // [0x08011A8C]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x080118B8
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_080118C2:
    r0 = stack[2]; // [sp + 0x8]
    r1 = r6;
    r2 = r7;
    r5 += 0xCU;
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r6; r5 += 4;
    *(u32*)r5 = r7; r5 += 4;
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x080118CC: BL 0x0804E490
    return r0;
    cmp_lhs = (s32)r1; cmp_rhs = 10;
    if (cmp_lhs == cmp_rhs) goto loc_080118EA;
    cmp_lhs = (s32)r1; cmp_rhs = 11;
    if (cmp_lhs != cmp_rhs) return sub_08011916(r0, r1, r2, r3);
    r0 += 0xCU;
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r0 = Gfx_BeginTileLoad1(r0, r1, r2, r3); // 0x080118E2: BL 0x0804E490
    r0 = 0x0U;
    return r0;
loc_080118EA:
    r4 = *(u32*)(r0 + 0xC);
    r0 = *(u8*)(r4);
    r0 += 0xFFU;
    r0 = (r0 << 24);
    r0 = (r0 >> 24);
    *(u8*)(r4) = (u8)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08011912;
    r0 = *(u16*)(r4 + 0x2);
    r1 = 0x0000FFFFU; // [0x08011A90]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08011912;
    r3 = 0x2U;
    r0 = 0x08072824U; // [0x08011A8C]
    r1 = (u32)(*(s16*)(r4 + r3));
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_0801142A(r0, r1, r2, r3); // 0x08011908
    r0 = 0x0U;
    r0 = ~r0;
    *(u16*)(r4 + 0x2) = (u16)r0;
loc_08011912:
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x08011916..0x0801191A (4 bytes, Thumb)
u32 sub_08011916(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// Evidence: tools/behaviour/test_names.py::test_list_append_stores_the_value_after_the_last_one_and_increments_the_count and tools/behaviour/test_names.py::test_list_append_leaves_the_list_length_untouched run it from a private image copy on a crafted list: the count at +4 becomes old+1 and the second argument lands at +8+4*old, with no other store; python tools\behaviour\harness.py --function 0x0801191A --register r0=0x02000000 --register r1=0x1234 --seed 0x02000000=0000000001000000aaaaaaaa reprints both stores
// ROM Address: 0x0801191A..0x0801197E (100 bytes, Thumb)
u32 List_Append(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x4U;
    r2 = r1;
    r1 = *(u32*)(r0);
    r3 = r1 + 1;
    *(u32*)(r0) = (u32)r3;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r2;
    return r0; // BX lr
    r4 = r0;
    r0 += 0x4U;
    r5 = r0;
    r0 = sub_0804FE54(r0, r1, r2, r3); // 0x08011934: BL 0x0804FE54
    r1 = *(u32*)(r4 + 0x4);
    r1 = (r1 << 2);
    r0 = r1 + r5;
    r1 = 0x03002A4CU; // [0x08011A98]
    *(u32*)(r0 + 0x4) = (u32)r1;
    return r0;
    r4 = r1;
    r1 = 0x0U;
    r3 = *(u32*)(r0 + 0x4);
    r6 = r0 + 4;
    r5 = r0;
    r0 = ~r1;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08011966;
loc_08011956:
    r2 = (r1 << 2);
    r2 = r2 + r6;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08011968;
    r1 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_08011956;
loc_08011966:
    r1 = r0;
loc_08011968:
    r7 = 0x03002A4CU; // [0x08011A98]
    r3 = r1 + 1;
    if (cmp_lhs == cmp_rhs) return sub_0801197E(r0, r1, r2, r3);
    r0 = r6;
    r0 = sub_0804FE54(r0, r1, r2, r3); // 0x08011970: BL 0x0804FE54
    r0 = *(u32*)(r5 + 0x4);
    r0 = (r0 << 2);
    r0 = r0 + r6;
    *(u32*)(r0 + 0x4) = (u32)r7;
    return sub_080119AE(r0, r1, r2, r3);
}

// ROM Address: 0x0801197E..0x08011998 (26 bytes, Thumb)
u32 sub_0801197E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x0000040CU; // [0x08011A9C]
    r5 = r5 + r1;
    r3 = *(u32*)(r5);
    r1 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_0801199E(r0, r1, r2, r3);
    r2 = (r1 << 2);
    r2 = r2 + r5;
    r2 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) return sub_08011998(r0, r1, r2, r3);
    r0 = r1;
    return sub_0801199E(r0, r1, r2, r3);
}

// ROM Address: 0x08011998..0x080119EA (82 bytes, Thumb)
u32 sub_08011998(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) return sub_0801198A(r0, r1, r2, r3);
    r1 = r0;
    r0 = r5;
    r0 = sub_0804FE54(r0, r1, r2, r3); // 0x080119A2: BL 0x0804FE54
    r0 = *(u32*)(r5);
    r0 = (r0 << 2);
    r0 = r0 + r5;
    *(u32*)(r0 + 0x4) = (u32)r7;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080119B6: BL 0x08046AA2
    return r0;
    r6 = *(u32*)(r0 + 0x4);
    r5 = r2;
    r2 = 0x0U;
    r4 = r0 + 4;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080119DA;
loc_080119CA:
    r3 = (r2 << 2);
    r3 = r3 + r4;
    r3 = *(u32*)(r3 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_080119DE;
    r2 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_080119CA;
loc_080119DA:
    r2 = 0x0U;
    r2 = ~r2;
loc_080119DE:
    r3 = r2 + 1;
    if (cmp_lhs == cmp_rhs) return sub_080119EA(r0, r1, r2, r3);
    r0 = (r2 << 2);
    r0 = r0 + r4;
    *(u32*)(r0 + 0x4) = (u32)r5;
    return r0;
}

// ROM Address: 0x080119EA..0x08011A1E (52 bytes, Thumb)
u32 sub_080119EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0000040CU; // [0x08011A9C]
    r0 = r0 + r2;
    r6 = *(u32*)(r0);
    r2 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08011A06;
loc_080119F6:
    r3 = (r2 << 2);
    r3 = r3 + r0;
    r3 = *(u32*)(r3 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08011A0A;
    r2 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_080119F6;
loc_08011A06:
    r2 = 0x0U;
    r2 = ~r2;
loc_08011A0A:
    r1 = r2;
    r0 = sub_0804FE54(r0, r1, r2, r3); // 0x08011A0C: BL 0x0804FE54
    r0 = *(u32*)(r4);
    r1 = r0 + 1;
    r0 = (r0 << 2);
    r0 = r0 + r4;
    *(u32*)(r4) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r5;
    return sub_080119E8(r0, r1, r2, r3);
}

// ROM Address: 0x08011A1E..0x08011DA4 (902 bytes, Thumb)
u32 sub_08011A1E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r0;
    r0 = 0x610U; // (97 << 4)
    r6 = r7 + r0;
    r4 = *(u32*)(r6);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011A6E;
loc_08011A2E:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r1 = r0;
    r0 += 0x4U;
    r5 = *(u32*)(r0);
    r2 = *(u32*)(r5 + 0x4);
    r2 -= 0x1U;
    *(u32*)(r5 + 0x4) = (u32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08011A6A;
    r2 = *(u32*)(r6);
    r2 -= 0x1U;
    *(u32*)(r6) = (u32)r2;
    r2 = r2 - r4;
    if (cmp_lhs == cmp_rhs) goto loc_08011A52;
    r2 = (r2 << 2);
    r1 += 0x8U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08011A4E: BL 0x08049138
loc_08011A52:
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011A5A: BL 0x08046AA2
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011A66: BL 0x08046AA2
loc_08011A6A:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011A2E;
loc_08011A6E:
    r4 = *(u32*)(r7 + 0x4);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011A8A;
    r5 = r7 + 4;
loc_08011A76:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011A82: BL 0x08046AA2
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011A76;
loc_08011A8A:
    return r0;
    cmp_lhs = (s32)r0; cmp_rhs = 36;
    r7 = (r0 >> 32);
    r0 = r0;
    r3 = 0x280; // sp + 0x280
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r2; cmp_rhs = 76;
    r0 = (r0 << 12);
    r4 = (r1 << 16);
    r0 = r0;
    r1 = 0x610U; // (97 << 4)
    r6 = r0 + r1;
    r4 = *(u32*)(r6);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011B02;
loc_08011AAE:
    r0 = (r4 << 2);
    r7 = r0 + r6;
    stack[0] = r7; // [sp + 0x0]
    r7 += 0x4U;
    r0 = *(u32*)(r7);
    r1 = *(u32*)(r0);
    r5 = r0;
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011AC0: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08011AFE;
    r0 = *(u32*)(r5 + 0x4);
    r0 -= 0x1U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08011AFE;
    r0 = *(u32*)(r6);
    r0 -= 0x1U;
    *(u32*)(r6) = (u32)r0;
    r0 = r0 - r4;
    if (cmp_lhs == cmp_rhs) goto loc_08011AE6;
    r1 = stack[0]; // [sp + 0x0]
    r2 = (r0 << 2);
    r1 += 0x8U;
    r0 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08011AE2: BL 0x08049138
loc_08011AE6:
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011AEE: BL 0x08046AA2
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011AFA: BL 0x08046AA2
loc_08011AFE:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011AAE;
loc_08011B02:
    return r0;
    r5 = *(u32*)(r0 + 0x4);
    r1 = r0 + 4;
    r4 = r0;
    r5 -= 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    stack[2] = r1; // [sp + 0x8]
    if (cmp_lhs < cmp_rhs) goto loc_08011B2C;
loc_08011B16:
    r1 = stack[2]; // [sp + 0x8]
    r0 = (r5 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011B24: BL 0x08046AA2
    r5 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011B16;
loc_08011B2C:
    r0 = 0x0000040CU; // [0x08011DA4]
    r5 = r4 + r0;
    r6 = *(u32*)(r5);
    r6 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011B4A;
loc_08011B36:
    r0 = (r6 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011B42: BL 0x08046AA2
    r6 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011B36;
loc_08011B4A:
    r0 = 0x610U; // (97 << 4)
    r6 = r4 + r0;
    r7 = *(u32*)(r6);
    r7 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011B6A;
loc_08011B56:
    r0 = (r7 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011B62: BL 0x08046AA2
    r7 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011B56;
loc_08011B6A:
    r1 = stack[2]; // [sp + 0x8]
    r7 = 0x0U;
    r0 = r1 + 4;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x03002A4CU; // [0x08011DA8]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08011B76: BL 0x0804912C
    r0 = 0x208U; // (65 << 3)
    r0 = r4 + r0;
    stack[1] = r0; // [sp + 0x4]
    r0 += 0x4U;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x03002A4CU; // [0x08011DA8]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08011B8A: BL 0x0804912C
    r0 = r5 + 4;
    r2 = 0x200U; // (1 << 9)
    r1 = 0x03002A4CU; // [0x08011DA8]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08011B96: BL 0x0804912C
    r0 = r6 + 4;
    r2 = 0x80U;
    r1 = 0x03001C44U; // [0x08011DAC]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08011BA0: BL 0x0804912C
    *(u32*)(r4 + 0x4) = (u32)r7;
    r0 = stack[1]; // [sp + 0x4]
    r2 = 0x00000564U; // [0x08011DB0]
    *(u32*)(r0) = (u32)r7;
    r0 = r2;
    r0 += 0x130U;
    *(u32*)(r5) = (u32)r7;
    r1 = ~r7;
    r0 = r4 + r0;
    *(u32*)(r6) = (u32)r7;
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08011BBA: BL 0x0804912C
    r2 = 0x690U; // (105 << 4)
    r0 = r4 + r2;
    *(u8*)(r0 + 0x4) = (u8)r7;
    r0 = r2;
    r0 -= 0x10U;
    r0 = r4 + r0;
    r1 = 0x200U; // (1 << 9)
    *(u16*)(r0 + 0x16) = (u16)r7;
    *(u16*)(r0 + 0x18) = (u16)r1;
    r0 = 0x1U;
loc_08011BD6:
    r3 = (r0 << 2);
    r3 = r3 + r0;
    r3 = (r3 << 1);
    r3 = r3 + r4;
    r1 = r0 + 1;
    r3 = r3 + r2;
    *(u8*)(r3 + 0xA) = (u8)r1;
    r0 += 0xFFU;
    *(u8*)(r3 + 0xB) = (u8)r0;
    r0 = r1;
    cmp_lhs = (s32)r1; cmp_rhs = 138;
    if (cmp_lhs < cmp_rhs) goto loc_08011BD6;
    r1 = 0x6A0U; // (53 << 5)
    r1 = r4 + r1;
    r0 = 0xFFU;
    *(u8*)(r1 + 0x5) = (u8)r0;
    r1 = 0xBF0U; // (191 << 4)
    r1 = r4 + r1;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0U;
    *(u8*)(r4) = (u8)r0;
    r0 = 0x1U;
    *(u8*)(r4 + 0x1) = (u8)r0;
    return r0;
    r6 = r1;
    r1 = stack[2]; // [sp + 0x8]
    r7 = r2;
    r4 = *(u32*)(r1 + 0x4);
    r5 = 0x0U;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011C40;
    r1 = stack[2]; // [sp + 0x8]
    r1 += 0x4U;
    stack[1] = r1; // [sp + 0x4]
loc_08011C24:
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r4 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r7;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08011C36: BL __call_via_r3
    r5 |= r0;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011C24;
loc_08011C40:
    r0 = 0x0000040CU; // [0x08011DA4]
    r1 = stack[2]; // [sp + 0x8]
    r1 = r1 + r0;
    stack[0] = r1; // [sp + 0x0]
    r4 = *(u32*)(r1);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011C6A;
loc_08011C4E:
    r1 = stack[0]; // [sp + 0x0]
    r0 = (r4 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r7;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08011C60: BL __call_via_r3
    r5 |= r0;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011C4E;
loc_08011C6A:
    r0 = r5;
    return r0;
    r4 = *(u32*)(r0 + 0x4);
    r7 = r0;
    r6 = r2;
    r5 = r1;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011CA0;
    r1 = r7 + 4;
    stack[0] = r1; // [sp + 0x0]
loc_08011C82:
    r1 = stack[0]; // [sp + 0x0]
    r0 = (r4 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r6;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08011C94: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08011CC8;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011C82;
loc_08011CA0:
    r0 = 0x0000040CU; // [0x08011DA4]
    r7 = r7 + r0;
    r4 = *(u32*)(r7);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011CC6;
loc_08011CAA:
    r0 = (r4 << 2);
    r0 = r0 + r7;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r6;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08011CBA: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08011CC8;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011CAA;
loc_08011CC6:
    r0 = 0x0U;
loc_08011CC8:
    return r0;
    r6 = r1;
    r1 = stack[2]; // [sp + 0x8]
    r7 = r2;
    r4 = *(u32*)(r1 + 0x4);
    r5 = 0x0U;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011D02;
    r1 = stack[2]; // [sp + 0x8]
    r1 += 0x4U;
    stack[1] = r1; // [sp + 0x4]
loc_08011CE2:
    r1 = stack[1]; // [sp + 0x4]
    r0 = (r4 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r7;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08011CF4: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08011CFE;
    r5 += 0x1U;
loc_08011CFE:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011CE2;
loc_08011D02:
    r0 = 0x0000040CU; // [0x08011DA4]
    r1 = stack[2]; // [sp + 0x8]
    r1 = r1 + r0;
    stack[0] = r1; // [sp + 0x0]
    r4 = *(u32*)(r1);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011D30;
loc_08011D10:
    r1 = stack[0]; // [sp + 0x0]
    r0 = (r4 << 2);
    r0 = r0 + r1;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x24);
    r3 = r2 + r1;
    r2 = r7;
    r1 = r6;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08011D22: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08011D2C;
    r5 += 0x1U;
loc_08011D2C:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011D10;
loc_08011D30:
    r0 = r5;
    return r0;
    r5 = r0;
    r0 = 0x0U;
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x4; // sp + 0x4
    r7 = sp;
    r2 = 0x80U;
    r1 = 0x03001C44U; // [0x08011DAC]
    r0 = sub_0804912C(r0, r1, r2, r3); // 0x08011D48: BL 0x0804912C
    r0 = 0x610U; // (97 << 4)
    r5 = r5 + r0;
    r0 = *(u32*)(r5);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08011D96;
loc_08011D5A:
    r0 = (r4 << 2);
    r6 = r0 + r5;
    r6 += 0x4U;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011D68: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08011D7E;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011D78: BL 0x08046AA2
    goto loc_08011D8E;
loc_08011D7E:
    r1 = *(u32*)(r6);
    r0 = stack[0]; // [sp + 0x0]
    r2 = stack[0]; // [sp + 0x0]
    r0 += 0x1U;
    stack[0] = r0; // [sp + 0x0]
    r0 = (r2 << 2);
    r0 = r0 + r7;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08011D8E:
    r0 = *(u32*)(r5);
    r4 += 0x1U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs > cmp_rhs) goto loc_08011D5A;
loc_08011D96:
    r2 = 0x84U;
    r1 = r7;
    r0 = r5;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x08011D9C: BL 0x08046DD0
    return r0;
}

// ROM Address: 0x08011DA4..0x08011DA6 (2 bytes, Thumb)
u32 sub_08011DA4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r1 << 16);
    return r0;
}

// ROM Address: 0x08011DA6..0x08011F7A (468 bytes, Thumb)
u32 sub_08011DA6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    cmp_lhs = (s32)r2; cmp_rhs = 76;
    r0 = (r0 << 12);
    r4 = r0 + 1;
    r0 = (r0 << 12);
    r4 = (r4 << 21);
    r0 = r0;
    r4 = r0;
    r2 = 0x0U;
    r1 = 0xAU;
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08011DBC
    r0 = r4;
    r0 = sub_08011D36(r0, r1, r2, r3); // 0x08011DC2
    r0 = 0x08072824U; // [0x08011F14]
    r1 = 0x000005C4U; // [0x08011F18]
    r0 = *(u32*)(r0 + 0x4);
    r0 = r0 + r1;
    r0 = sub_0803E44C(r0, r1, r2, r3); // 0x08011DCE: BL 0x0803E44C
    r1 = 0xBC0U; // (47 << 6)
    r6 = r4 + r1;
    r7 = 0xE00U; // (7 << 9)
    *(u32*)(r6 + 0x3C) = (u32)r0;
    r0 = r7;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08011DE0: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_08011DF2;
    r2 = r7;
    r1 = r4;
    r0 = r5;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x08011DEE: BL 0x08046DD0
loc_08011DF2:
    r0 = 0x610U; // (97 << 4)
    r1 = r4 + r0;
    r0 = 0x0U;
    *(u32*)(r6 + 0x38) = (u32)r5;
    *(u32*)(r1) = (u32)r0;
    r1 = 0x0000040CU; // [0x08011F1C]
    *(u32*)(r4 + 0x4) = (u32)r0;
    r1 = r4 + r1;
    *(u32*)(r1) = (u32)r0;
    r0 = r4;
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x08011E08
    return r0;
    r7 = 0x61U;
    r4 = r0;
    r7 = (r7 << 4);
    r2 = r4 + r7;
    r3 = 0xBC0U; // (47 << 6)
    r1 = *(u32*)(r2);
    r5 = r4 + r3;
    r0 = 0x0U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08011E48;
loc_08011E26:
    r7 = 0x61U;
    r3 = (r0 << 2);
    r1 = *(u32*)(r5 + 0x38);
    r3 = r3 + r2;
    r7 = (r7 << 4);
    r1 = r1 + r7;
    r6 = *(u32*)(r3 + 0x4);
    r3 = *(u32*)(r1);
    r0 += 0x1U;
    r7 = r3 + 1;
    *(u32*)(r1) = (u32)r7;
    r3 = (r3 << 2);
    r1 = r3 + r1;
    *(u32*)(r1 + 0x4) = (u32)r6;
    r1 = *(u32*)(r2);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs > cmp_rhs) goto loc_08011E26;
loc_08011E48:
    r0 = 0x0U;
    *(u32*)(r2) = (u32)r0;
    r0 = r4;
    r0 = sub_08011B04(r0, r1, r2, r3); // 0x08011E4E
    r6 = *(u32*)(r5 + 0x38);
    r2 = 0xE00U; // (7 << 9)
    r1 = r6;
    r0 = r4;
    r0 = sub_08046DD0(r0, r1, r2, r3); // 0x08011E5C: BL 0x08046DD0
    r0 = r6;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08011E62: BL 0x0803D63C
    r0 = 0x08072824U; // [0x08011F14]
    r2 = 0x000005C4U; // [0x08011F18]
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r5 + 0x3C);
    r0 = r0 + r2;
    r0 = sub_0803E4A0(r0, r1, r2, r3); // 0x08011E70: BL 0x0803E4A0
    r2 = 0x0U;
    r1 = 0xBU;
    r0 = r4;
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08011E7A
    return r0;
    r1 = (r0 >> 30);
    r0 = (r0 >> 12);
    r2 = 0xCU;
    r0 &= r2;
    r0 |= r1;
    r1 = 0x08072824U; // [0x08011F14]
    r0 = (r0 << 3);
    r1 += 0xCU;
    r0 = r0 + r1;
    return r0; // BX lr
    r1 = 0x0000040CU; // [0x08011F1C]
    r5 = r0 + r1;
    r4 = *(u32*)(r5);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08011EC2;
    r6 = r0 + 4;
loc_08011EA2:
    r1 = *(u32*)(r6);
    r0 = (r4 << 2);
    r2 = r1 + 1;
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    r1 = (r1 << 2);
    r1 = r1 + r6;
    *(u32*)(r6) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011EBA: BL 0x08046AA2
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08011EA2;
loc_08011EC2:
    r0 = 0x0U;
    *(u32*)(r5) = (u32)r0;
    return r0;
    r4 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r7 = r0 + 4;
    r6 = 0x0U;
    r5 = r0;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08011EE8;
loc_08011ED8:
    r0 = (r6 << 2);
    r0 = r0 + r7;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_08011EEC;
    r6 += 0x1U;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) goto loc_08011ED8;
loc_08011EE8:
    r6 = 0x0U;
    r6 = ~r6;
loc_08011EEC:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x1C);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08011EF4: BL 0x08046AA2
    r1 = r6;
    r0 = r7;
    r0 = sub_0804FE54(r0, r1, r2, r3); // 0x08011EFC: BL 0x0804FE54
    r0 = 0x0000040CU; // [0x08011F1C]
    r0 = r5 + r0;
    r1 = *(u32*)(r0);
    r2 = r1 + 1;
    *(u32*)(r0) = (u32)r2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    *(u32*)(r0 + 0x4) = (u32)r4;
    return r0;
    r0 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 36;
    r7 = (r0 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = (r1 << 16);
    r0 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08011F28;
    cmp_lhs = (s32)r0; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) goto loc_08011F2C;
loc_08011F28:
    r0 = 0x0U;
    return r0; // BX lr
loc_08011F2C:
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_08011F52;
    r1 = 0x08072890U; // [0x0801218C]
    r3 = 0x68U;
    r1 = *(u32*)(r1);
    r2 = *(u8*)(r1);
    r2 *= r3;
    r1 = r2 + r1;
    r2 = 0x4F8U; // (159 << 3)
    r1 = r1 + r2;
    r1 = *(u8*)(r1 + 0x14);
    r2 = 0x086B82ECU; // [0x08012190]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r0 = r1 + r0;
    r0 = *(u8*)(r0 + 0xF);
loc_08011F52:
    r1 = 0x086F393CU; // [0x08012194]
    r0 = (r0 << 2);
    r0 = *(u32*)(r1 + r0);
    return r0; // BX lr
    r7 = r1;
    r6 = r2;
    r5 = r0;
    r4 = r3;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08011F7A(r0, r1, r2, r3);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08011F6C: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08011F7A(r0, r1, r2, r3);
    r0 = r5;
    return r0;
}

// ROM Address: 0x08011F7A..0x08011FC6 (76 bytes, Thumb)
u32 sub_08011F7A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049E84U; // [0x08012198]
    *(u32*)r5 = r0; r5 += 4;
    *(u32*)r5 = r6; r5 += 4;
    r0 = 0x0U;
    r2 = *(u32*)(r4 + 0x14);
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r5 -= 0x8U;
    r1 = r7;
    r0 = sp;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08011F8C
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) goto loc_08011F9C;
    r0 = stack[1]; // [sp + 0x4]
    r1 = *(u32*)(r5 + 0x4);
    *(u16*)(r1) = (u16)r0;
loc_08011F9C:
    r0 = stack[22]; // [sp + 0x58]
    r1 = *(u32*)(r4 + 0x14);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs == cmp_rhs) goto loc_08011FC2;
    r0 = stack[22]; // [sp + 0x58]
    r0 = *(u32*)(r0);
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = stack[22]; // [sp + 0x58]
    r0 = *(u32*)(r0 + 0x4);
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = stack[22]; // [sp + 0x58]
    r0 = *(u32*)(r0 + 0x8);
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = stack[22]; // [sp + 0x58]
    r0 = *(u32*)(r0 + 0xC);
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = r4;
    r0 += 0x18U;
    *(u32*)(r4 + 0x14) = (u32)r0;
loc_08011FC2:
    r0 = r5;
    return sub_08011F76(r0, r1, r2, r3);
}

// ROM Address: 0x08011FC6..0x08011FF2 (44 bytes, Thumb)
u32 sub_08011FC6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x4U;
    r0 += 0x8U;
    r4 = r0;
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x08011FCE: BL 0x08049120
    r0 = r4;
    return r0;
    r7 = r2;
    r6 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08011FF2(r0, r1, r2, r3);
    r0 = 0x00000808U; // [0x0801219C]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08011FE6: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08011FF2(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08011FF2..0x08012012 (32 bytes, Thumb)
u32 sub_08011FF2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 += 0x8U;
    r1 = r5 + 4;
    r5 = r0;
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x08011FFA: BL 0x08049120
    r3 = r6;
    r2 = r7;
    r1 = r5;
    r0 = r4;
    r0 = sub_08011F5A(r0, r1, r2, r3); // 0x08012006
    r0 = 0x0804CD74U /* &VTable_0804CD74 */; // [0x080121A0]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_08011FF0(r0, r1, r2, r3);
}

// ROM Address: 0x08012012..0x08012032 (32 bytes, Thumb)
u32 sub_08012012(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r3;
    r6 = r2;
    r5 = r0;
    r4 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08012032(r0, r1, r2, r3);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08012024: BL 0x0803D5B8
    r5 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08012032(r0, r1, r2, r3);
    r0 = r5;
    return r0;
}

// ROM Address: 0x08012032..0x08012166 (308 bytes, Thumb)
u32 sub_08012032(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08049E90U /* &VTable_08049E90 */; // [0x080121A4]
    r1 = 0x1U;
    *(u32*)(r5) = (u32)r0;
    r0 = 0x08072890U; // [0x0801218C]
    r1 = (r1 << 12);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0801203E: BL 0x08011732
    r0 = 0x08072890U; // [0x0801218C]
    r1 = 0x1000U; // (1 << 12)
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0801204A
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x14) = (u16)r0;
    r0 = 0x08072890U; // [0x0801218C]
    r1 = 0x1000U; // (1 << 12)
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0801205A: BL 0x08011732
    r0 = 0x08072890U; // [0x0801218C]
    r1 = 0x1000U; // (1 << 12)
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x08012066
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x16) = (u16)r0;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012092;
    cmp_lhs = (s32)r6; cmp_rhs = 7;
    if (cmp_lhs == cmp_rhs) goto loc_08012092;
    r0 = 0x08072890U; // [0x0801218C]
    r1 = 0x1000U; // (1 << 12)
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0801207E: BL 0x08011732
    r0 = 0x08072890U; // [0x0801218C]
    r1 = 0x1000U; // (1 << 12)
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x0801208A
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x1A) = (u16)r0;
loc_08012092:
    r0 = 0x08072890U; // [0x0801218C]
    r1 = 0x800U; // (1 << 11)
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011732(r0, r1, r2, r3); // 0x0801209A: BL 0x08011732
    r0 = 0x08072890U; // [0x0801218C]
    r1 = 0x800U; // (1 << 11)
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0801124C(r0, r1, r2, r3); // 0x080120A6
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x18) = (u16)r0;
    r0 = 0x08072890U; // [0x0801218C]
    r2 = 0x0U;
    r1 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r0 + 0xC);
    stack[3] = r1; // [sp + 0xC]
    stack[4] = r0; // [sp + 0x10]
    r0 = 0x78U;
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080120D2;
    cmp_lhs = (s32)r6; cmp_rhs = 1;
    r1 = *(u32*)(r7 + 0x4);
    if (cmp_lhs != cmp_rhs) goto loc_080120D6;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs < cmp_rhs) goto loc_080120CC;
    stack[4] = r0; // [sp + 0x10]
loc_080120CC:
    r1 = *(u32*)(r7);
    r2 = (r1 >> 31);
    goto loc_080120E2;
loc_080120D2:
    stack[4] = r0; // [sp + 0x10]
    goto loc_080120E2;
loc_080120D6:
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_080120DC;
    stack[4] = r0; // [sp + 0x10]
loc_080120DC:
    r1 = *(u32*)(r7);
    r2 = ((u32)((s32)r1 >> 31));
    r2 += 0x1U;
loc_080120E2:
    r1 = *(u16*)(r4);
    cmp_lhs = (s32)r1; cmp_rhs = 33;
    if (cmp_lhs != cmp_rhs) goto loc_080120EE;
    r1 = 0x28U;
    stack[4] = r1; // [sp + 0x10]
    r4 += 0x2U;
loc_080120EE:
    r1 = *(u16*)(r4);
    cmp_lhs = (s32)r1; cmp_rhs = 64;
    if (cmp_lhs != cmp_rhs) goto loc_080120FA;
    r1 = 0x50U;
    stack[4] = r1; // [sp + 0x10]
    r4 += 0x2U;
loc_080120FA:
    r1 = *(u16*)(r4);
    cmp_lhs = (s32)r1; cmp_rhs = 35;
    if (cmp_lhs != cmp_rhs) goto loc_08012104;
    stack[4] = r0; // [sp + 0x10]
    r4 += 0x2U;
loc_08012104:
    r0 = 0x0U;
    cmp_lhs = (s32)r6; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) goto loc_0801210C;
    r0 = 0x1U;
loc_0801210C:
    cmp_lhs = (s32)r6; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012114;
    cmp_lhs = (s32)r6; cmp_rhs = 7;
    if (cmp_lhs != cmp_rhs) goto loc_08012118;
loc_08012114:
    r1 = 0x0U;
    goto loc_08012144;
loc_08012118:
    cmp_lhs = (s32)r6; cmp_rhs = 8;
    if (cmp_lhs >= cmp_rhs) goto loc_0801213E;
    r1 = 0x08072890U; // [0x0801218C]
    r3 = 0x68U;
    r1 = *(u32*)(r1);
    r7 = *(u8*)(r1);
    r3 *= r7;
    r1 = r3 + r1;
    r3 = 0x4F8U; // (159 << 3)
    r1 = r1 + r3;
    r1 = *(u8*)(r1 + 0x14);
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r3 = 0x086B82ECU; // [0x08012190]
    r1 = (r1 << 3);
    r1 = r1 + r3;
    r1 = r1 + r6;
    r6 = *(u8*)(r1 + 0xF);
loc_0801213E:
    r3 = 0x086F393CU; // [0x08012194]
    r1 = (r6 << 2);
    r1 = *(u32*)(r3 + r1);
loc_08012144:
    stack[2] = r2; // [sp + 0x8]
    r2 = r4;
    stack[0] = r0; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    r1 = 0x14; // sp + 0x14
    r0 = 0x0U;
    r3 = 0xC; // sp + 0xC
    r0 = sub_0800B188(r0, r1, r2, r3); // 0x08012152
    r1 = r0;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r0 = 0x08072890U; // [0x0801218C]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801215E: BL 0x0801191A
    r0 = r5;
    return sub_0801202E(r0, r1, r2, r3);
}

// ROM Address: 0x08012166..0x08012188 (34 bytes, Thumb)
u32 sub_08012166(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0800B32C(r0, r1, r2, r3); // 0x0801216C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08012188(r0, r1, r2, r3);
    r1 = *(u32*)(r4 + 0x4);
    r4 = 0x08072890U; // [0x0801218C]
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x0801217A
    r0 = *(u32*)(r4 + 0x4);
    r0 = sub_08011E94(r0, r1, r2, r3); // 0x08012180
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08012188..0x0801218C (4 bytes, Thumb)
u32 sub_08012188(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x0801218C..0x0801218E (2 bytes, Thumb)
u32 sub_0801218C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r0; cmp_rhs = 144;
    return r0;
}

// ROM Address: 0x0801218E..0x080121F6 (104 bytes, Thumb)
u32 sub_0801218E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = (r0 >> 32);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r1 -= 0x3CU;
    r7 = (r5 >> 1);
    r6 = stack[132]; // [sp + 0x210]
    r4 = (r0 >> 32);
    r0 = (r1 >> 32);
    r0 = r0;
    r2 = *(u32*)r5; r5 += 4;
    r4 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    r6 = *(u32*)r5; r5 += 4;
    r4 = (r0 >> 32);
    r6 = stack[144]; // [sp + 0x240]
    r4 = (r0 >> 32);
    r5 = r0;
    r4 = r1;
    r1 += 0x8U;
    r0 = 0x0U;
    stack[1] = r0; // [sp + 0x4]
    stack[18] = r0; // [sp + 0x48]
    r0 = 0x4; // sp + 0x4
    r6 = 0x4; // sp + 0x4
    r0 = sub_08004038(r0, r1, r2, r3); // 0x080121BC
    r0 = r6 + 4;
    stack[0] = r0; // [sp + 0x0]
    r0 = r5;
    r0 += 0x8U;
    r1 = *(u32*)(r4 + 0x4);
    r4 = r0;
    r2 = sp;
    r0 = sub_0803DB7C(r0, r1, r2, r3); // 0x080121CE: BL 0x0803DB7C
    r0 = r4;
    return r0;
    r7 = r3;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_080121F6(r0, r1, r2, r3);
    r0 = 0x00001008U; // [0x080123C4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080121E8: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_080121F6(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x080121F6..0x08012230 (58 bytes, Thumb)
u32 sub_080121F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x0U;
    r1 = r5;
    r1 += 0x8U;
    r2 = r7;
    stack[2] = r6; // [sp + 0x8]
    stack[19] = r6; // [sp + 0x4C]
    r0 = 0x8; // sp + 0x8
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08012204
    r0 = 0xC; // sp + 0xC
    stack[1] = r0; // [sp + 0x4]
    r0 = r4;
    r0 += 0x8U;
    r7 = r0;
    r1 = *(u32*)(r5 + 0x4);
    r2 = 0x4; // sp + 0x4
    r0 = sub_0803DB7C(r0, r1, r2, r3); // 0x08012216: BL 0x0803DB7C
    stack[1] = r6; // [sp + 0x4]
    r2 = *(u8*)(r5 + 0x3);
    r1 = r7;
    r0 = r4;
    r3 = stack[31]; // [sp + 0x7C]
    r0 = sub_08012012(r0, r1, r2, r3); // 0x08012224: BL 0x08012012
    r0 = 0x0804D0BCU /* &VTable_0804D0BC */; // [0x080123C8]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_080121F2(r0, r1, r2, r3);
}

// ROM Address: 0x08012230..0x08012350 (288 bytes, Thumb)
u32 sub_08012230(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = r0;
    r0 = 0x1U;
    r5 = r1;
    r0 = (r0 << 16);
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801223A: BL 0x0803D5B8
    r4 = r0;
    r0 = *(u32*)(r5 + 0x4);
    r1 = 0x087B5B64U; // [0x080123CC]
    r0 = (r0 << 26);
    r0 = (r0 >> 24);
    r0 = *(u32*)(r1 + r0);
    r1 = r4;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x0801224C
    r0 = *(u32*)(r5 + 0x4);
    r1 = (r0 >> 21);
    r0 = (r0 << 11);
    r0 = (r0 >> 17);
    r0 = (r0 << 1);
    r2 = (r1 << 1);
    r1 = r0 + r4;
    r0 = r6;
    r0 += 0x8U;
    r7 = r0;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x08012264: BL 0x08049144
    r1 = *(u32*)(r5 + 0x4);
    r0 = 0x0U;
    r1 = (r1 >> 21);
    r1 = (r1 << 1);
    r1 = r1 + r6;
    *(u16*)(r1 + 0x8) = (u16)r0;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08012276: BL 0x0803D63C
    r0 = r7;
    return r0;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08012298;
    r0 = 0x00001008U; // [0x080123C4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801228C: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) goto loc_08012298;
    r0 = r4;
    return r0;
loc_08012298:
    r1 = r5;
    r0 = r4;
    r0 = sub_08012230(r0, r1, r2, r3); // 0x0801229C: BL 0x08012230
    r1 = r0;
    r3 = r6;
    r0 = r4;
    r2 = *(u8*)(r5 + 0x3);
    r0 = sub_08012012(r0, r1, r2, r3); // 0x080122A8: BL 0x08012012
    r0 = 0x0804CD80U /* &VTable_0804CD80 */; // [0x080123D0]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return r0;
    r3 = 0xFFFFEF80U; // [0x080123D4]
    r0 = 0x1U;
    r4 = r1;
    r0 = (r0 << 16);
    sp += r3;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080122C0: BL 0x0803D5B8
    r5 = r0;
    r0 = *(u32*)(r4 + 0x4);
    r1 = 0x087B5B64U; // [0x080123CC]
    r0 = (r0 << 26);
    r0 = (r0 >> 24);
    r0 = *(u32*)(r1 + r0);
    r1 = r5;
    r0 = sub_0803D940(r0, r1, r2, r3); // 0x080122D2
    r0 = *(u32*)(r4 + 0x4);
    r6 = 0x80; // sp + 0x80
    r1 = (r0 >> 21);
    r0 = (r0 << 11);
    r0 = (r0 >> 17);
    r0 = (r0 << 1);
    r2 = (r1 << 1);
    r1 = r0 + r5;
    r0 = r6;
    r0 = Thunk_PaletteCopy(r0, r1, r2, r3); // 0x080122E8: BL 0x08049144
    r0 = *(u32*)(r4 + 0x4);
    r7 = 0x0U;
    r0 = (r0 >> 21);
    r0 = (r0 << 1);
    *(u16*)(r6 + r0) = (u16)r7;
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080122F8: BL 0x0803D63C
    r1 = r4;
    r1 += 0x8U;
    r3 = 0x1080U; // (33 << 7)
    r3 += sp;
    stack[5] = r7; // [sp + 0x14]
    stack[22] = r7; // [sp + 0x58]
    r2 = *(u32*)(r3 + 0x8);
    r4 = 0x14; // sp + 0x14
    r0 = 0x14; // sp + 0x14
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08012310
    r3 = 0x1080U; // (33 << 7)
    r0 = r4 + 4;
    stack[4] = r0; // [sp + 0x10]
    r3 += sp;
    r0 = *(u32*)(r3);
    r1 = r6;
    r0 += 0x8U;
    r4 = r0;
    r2 = 0x10; // sp + 0x10
    r0 = sub_0803DB7C(r0, r1, r2, r3); // 0x08012328: BL 0x0803DB7C
    r3 = 0x0000108CU; // [0x080123D8]
    r0 = r4;
    sp += r3;
    return r0;
    r7 = r3;
    r6 = r2;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08012350(r0, r1, r2, r3);
    r0 = 0x00001008U; // [0x080123C4]
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08012344: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08012350(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08012350..0x0801236E (30 bytes, Thumb)
u32 sub_08012350(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r7;
    r1 = r5;
    r0 = r4;
    r0 = sub_080122B4(r0, r1, r2, r3); // 0x08012356
    r1 = r0;
    r3 = r6;
    r0 = r4;
    r2 = *(u8*)(r5 + 0x3);
    r0 = sub_08012012(r0, r1, r2, r3); // 0x08012362: BL 0x08012012
    r0 = 0x0804E27CU /* &VTable_0804E27C */; // [0x080123DC]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    return sub_0801234E(r0, r1, r2, r3);
}

// ROM Address: 0x0801236E..0x08012386 (24 bytes, Thumb)
u32 sub_0801236E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r1;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08012386(r0, r1, r2, r3);
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x0801237A: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08012386(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08012386..0x080123A2 (28 bytes, Thumb)
u32 sub_08012386(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0804A7C4U /* &VTable_0804A7C4 */; // [0x080123E0]
    r1 = r5 + 4;
    *(u32*)(r4) = (u32)r0;
    r0 = 0x0U;
    r0 = sub_08030C16(r0, r1, r2, r3); // 0x0801238E
    r1 = r0;
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x08072890U; // [0x080123E4]
    r0 = *(u32*)(r0 + 0x4);
    r0 = List_Append(r0, r1, r2, r3); // 0x0801239A: BL 0x0801191A
    r0 = r4;
    return sub_08012384(r0, r1, r2, r3);
}

// ROM Address: 0x080123A2..0x080123C0 (30 bytes, Thumb)
u32 sub_080123A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x4);
    r1 = *(u32*)(r0 + 0x60);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080123AA: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_080123C0(r0, r1, r2, r3);
    r0 = 0x08072890U; // [0x080123E4]
    r1 = *(u32*)(r4 + 0x4);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x080123B8
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x080123C0..0x080123C4 (4 bytes, Thumb)
u32 sub_080123C0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080123E8..0x0801248E (166 bytes, Thumb)
u32 sub_080123E8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0;
    r2 += 0x8U;
    r3 = r0;
    r1 += 0x3U;
    r0 = 0x0U;
    r0 = sub_08011F5A(r0, r1, r2, r3); // 0x080123F4
    return r0;
    r3 = r0;
    r2 = r0;
    r2 += 0x8U;
    r0 = 0x0U;
    r0 = sub_08011FD6(r0, r1, r2, r3); // 0x08012404
    return r0;
    r3 = r0;
    r3 += 0xCU;
    r2 = *(u8*)(r1 + 0x3);
    r1 += 0x4U;
    r0 = 0x0U;
    r0 = sub_08012012(r0, r1, r2, r3); // 0x08012416: BL 0x08012012
    return r0;
    r2 = r0;
    r2 += 0xCU;
    r3 = *(u32*)(r0 + 0x14);
    r0 = 0x0U;
    r0 = sub_080121D8(r0, r1, r2, r3); // 0x08012426
    return r0;
    r2 = r0;
    r2 += 0xCU;
    r0 = 0x0U;
    r0 = sub_0801227E(r0, r1, r2, r3); // 0x08012434
    return r0;
    r2 = r0;
    r2 += 0xCU;
    r3 = *(u32*)(r0 + 0x14);
    r0 = 0x0U;
    r0 = sub_08012334(r0, r1, r2, r3); // 0x08012444
    return r0;
    r1 = *(u32*)(r1 + 0x4);
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u16*)(r0 + 0x8) = (u16)r1;
    r0 = 0x4U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08012456: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012462;
    r1 = 0x0804AEB0U /* &VTable_0804AEB0 */; // [0x080125D0]
    *(u32*)(r0) = (u32)r1;
loc_08012462:
    return r0;
    r0 = 0x0U;
    r0 = sub_0801236E(r0, r1, r2, r3); // 0x08012468: BL 0x0801236E
    return r0;
    r7 = r3;
    r6 = r2;
    r4 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    r5 = stack[10]; // [sp + 0x28]
    if (cmp_lhs != cmp_rhs) return sub_0801248E(r0, r1, r2, r3);
    r0 = 0x2CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08012480: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_0801248E(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x0801248E..0x080124D2 (68 bytes, Thumb)
u32 sub_0801248E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[2]; // [sp + 0x8]
    *(u32*)r4 = r0; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    r4 -= 0x8U;
    r0 = *(u32*)r7; r7 += 4;
    r1 = *(u32*)r7; r7 += 4;
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r4 + 0x10) = (u32)r1;
    *(u32*)(r4 + 0x28) = (u32)r0;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080124A6;
    r5 = r4;
    r5 += 0x18U;
loc_080124A6:
    r2 = 0x03002A58U; // [0x080125D4]
    *(u32*)(r4 + 0x14) = (u32)r5;
    r1 = *(u32*)(r2 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080124B2;
    *(u32*)(r2) = (u32)r0;
loc_080124B2:
    r1 += 0x1U;
    *(u32*)(r2 + 0x4) = (u32)r1;
    r1 = *(u16*)(r6);
    r2 = 0x0U;
    *(u16*)(r4 + 0x8) = (u16)r1;
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    *(u32*)(r4 + 0x20) = (u32)r0;
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = 0x080728A0U; // [0x080125D8]
    r1 = 0xFU;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080124CA
    r0 = r4;
    return sub_0801248A(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_ram_decrement_count1_decrements_the_word_after_its_base runs it with a zero second argument and asserts the one store; 0x080124D6 loads 0x03002A58, 0x080124DA-0x080124E0 subtract one from its +4 word and store it back, 0x080124E2-0x080124E8 call 0x08011C0C with the word at 0x080728A0 and 0x10, and 0x080124F2 frees r0 through 0x0803D63C only when the second argument is non-zero
// ROM Address: 0x080124D2..0x08012552 (128 bytes, Thumb)
u32 Ram_DecrementCount1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = 0x03002A58U; // [0x080125D4]
    r5 = r0;
    r0 = *(u32*)(r1 + 0x4);
    r2 = 0x0U;
    r0 -= 0x1U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x080728A0U; // [0x080125D8]
    r1 = 0x10U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080124E8
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080124F6;
    r0 = r5;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x080124F2: BL 0x0803D63C
loc_080124F6:
    return r0;
    r5 = 0x080728A0U; // [0x080125D8]
    r4 = r0;
    r5 += 0xCU;
    r6 = 0x0U;
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012530;
    r0 = *(u32*)(r4 + 0x28);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012510: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801252C;
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801252A;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012526: BL __call_via_r3
loc_0801252A:
    *(u32*)(r4 + 0x28) = (u32)r6;
loc_0801252C:
    r0 = 0x0U;
    return r0;
loc_08012530:
    r1 = *(u16*)(r4 + 0x8);
    r0 = *(u32*)(r4);
    r1 = (r1 << 2);
    r1 = *(u32*)(r0 + r1);
    r0 = (r1 >> 16);
    if (cmp_lhs != cmp_rhs) return sub_08012552(r0, r1, r2, r3);
    r0 = (r1 << 16);
    r0 = (r0 >> 16);
    r1 = 0x03002A58U; // [0x080125D4]
    *(u16*)(r4 + 0x8) = (u16)r0;
    r1 = *(u32*)(r1);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_0801254E;
    r1 = *(u32*)(r4 + 0x4);
    *(u16*)(r1) = (u16)r0;
loc_0801254E:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08012552..0x08012588 (54 bytes, Thumb)
u32 sub_08012552(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u16*)(r1);
    *(u16*)(r4 + 0x8) = (u16)r0;
    r0 = *(u8*)(r1 + 0x2);
    r0 = (r0 << 2);
    r2 = *(u32*)(r5 + r0);
    r0 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801255E: BL __call_via_r3
    *(u32*)(r4 + 0x28) = (u32)r0;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801256A: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08012502(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x28);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012584;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012580: BL __call_via_r3
loc_08012584:
    *(u32*)(r4 + 0x28) = (u32)r6;
    return sub_08012530(r0, r1, r2, r3);
}

// ROM Address: 0x08012588..0x080125D0 (72 bytes, Thumb)
u32 sub_08012588(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0; // sp + 0x0
    r2 = 0x0U;
    *(u16*)(r3 + 0x34) = (u16)r2;
    r3 = 0x080728A0U; // [0x080125D8]
    stack[0] = r1; // [sp + 0x0]
    r1 = r0;
    r4 = 0x8; // sp + 0x8
    r3 += 0x4U;
    r0 = r4;
    r2 = 0x34; // sp + 0x34
    r0 = sub_0801246E(r0, r1, r2, r3); // 0x080125A0
    r0 = 0x8U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080125A6: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080125B4;
    r1 = 0x08049D18U; // [0x080125DC]
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r4; r0 += 4;
    r0 -= 0x8U;
loc_080125B4:
    r0 = sub_0803D8A0(r0, r1, r2, r3); // 0x080125B4
    r1 = 0x03002A58U; // [0x080125D4]
    r2 = 0x0U;
    r0 = *(u32*)(r1 + 0x4);
    r0 -= 0x1U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x080728A0U; // [0x080125D8]
    r1 = 0x10U;
    r0 = *(u32*)(r0);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x080125C8
    return r0;
}

// ROM Address: 0x080125D0..0x080125D2 (2 bytes, Thumb)
u32 sub_080125D0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0x2C0; // sp + 0x2C0
    return r0;
}

// ROM Address: 0x080125D2..0x080127BE (492 bytes, Thumb)
u32 sub_080125D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r2; cmp_rhs = 88;
    r0 = (r0 << 12);
    cmp_lhs = (s32)r0; cmp_rhs = 160;
    r7 = (r0 >> 32);
    r5 = stack[24]; // [sp + 0x60]
    r4 = (r0 >> 32);
    r0 = 0xFFU;
    r0 += 0xC5U;
    return r0; // BX lr
    r0 = r0;
    r0 = r1;
    r1 = r2;
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x4);
    r3 = r3 + r2;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080125F4: BL __call_via_r3
    return r0;
    r4 = r0;
    r0 = 0x10U;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08012600: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012618;
    r1 = 0x0804CF94U /* &VTable_0804CF94 */; // [0x080128F4]
    *(u32*)(r0) = (u32)r1;
    r1 = *(u32*)(r4 + 0xC);
    *(u32*)(r0 + 0x4) = (u32)r1;
    r1 = *(u32*)(r4 + 0x8);
    r2 = *(u32*)(r4 + 0x4);
    *(u32*)(r0 + 0xC) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r2;
loc_08012618:
    *(u32*)(r4 + 0xC) = (u32)r0;
    r0 = 0xFFFF8000U; // [0x080128F8]
    *(u16*)(r4 + 0x4) = (u16)r0;
    *(u16*)(r4 + 0x6) = (u16)r0;
    r0 = ~r0;
    *(u16*)(r4 + 0x8) = (u16)r0;
    *(u16*)(r4 + 0xA) = (u16)r0;
    return r0;
    r4 = *(u32*)(r0);
    r5 = r0;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_0801264C;
loc_08012632:
    r0 = (r4 << 2);
    r0 = r0 + r5;
    r0 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012648;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012644: BL __call_via_r3
loc_08012648:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08012632;
loc_0801264C:
    r1 = 0x0U;
    r2 = r5;
    r2 += 0xC0U;
    *(u32*)(r5) = (u32)r1;
    r0 = 0x1U;
    *(u32*)(r2 + 0x10) = (u32)r0;
    *(u32*)(r2 + 0x4) = (u32)r0;
    *(u32*)(r2 + 0xC) = (u32)r1;
    r0 = *(u32*)(r2 + 0x8);
    r0 += 0x1U;
    *(u32*)(r2 + 0x8) = (u32)r0;
    return r0;
    r6 = r2;
    r5 = r0;
    r4 = r1 - 1;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08012688;
loc_0801266E:
    r0 = (r4 << 2);
    r0 = *(u32*)(r6 + r0);
    r1 = *(u32*)(r0);
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012674: BL 0x08046AA2
    r1 = *(u32*)(r5);
    r2 = r1 + 1;
    r1 = (r1 << 2);
    r1 = r1 + r5;
    *(u32*)(r5) = (u32)r2;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0801266E;
loc_08012688:
    return r0;
    r2 = *(u32*)(r0);
    r4 = r1;
    r1 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080126A6;
loc_08012696:
    r3 = (r1 << 2);
    r3 = r3 + r0;
    r3 = *(u32*)(r3 + 0x4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if (cmp_lhs == cmp_rhs) goto loc_080126AA;
    r1 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs > cmp_rhs) goto loc_08012696;
loc_080126A6:
    r1 = 0x0U;
    r1 = ~r1;
loc_080126AA:
    r2 -= 0x1U;
    *(u32*)(r0) = (u32)r2;
    r2 = r2 - r1;
    if (cmp_lhs == cmp_rhs) goto loc_080126C2;
    r1 = (r1 << 2);
    r0 = r1 + r0;
    r1 = r0;
    r1 += 0x8U;
    r2 = (r2 << 2);
    r0 += 0x4U;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x080126BE: BL 0x08049138
loc_080126C2:
    r0 = r4;
    if (cmp_lhs == cmp_rhs) goto loc_080126D2;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080126CE: BL __call_via_r3
loc_080126D2:
    return r0;
    r7 = r0;
    r7 += 0xC0U;
    r6 = r0;
    r0 = *(u32*)(r7 + 0x10);
    r5 = r1;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080127AA;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080127AA;
    r1 = *(u32*)(r5);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080126F4: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080127AA;
    r0 = r5;
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
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x4) = (u16)r1;
    *(u16*)(r3 + 0x6) = (u16)r0;
    r0 = *(u32*)(r7 + 0x4);
    r0 += 0x1U;
    *(u32*)(r7 + 0x4) = (u32)r0;
    r0 = 0x1U;
    *(u32*)(r7 + 0xC) = (u32)r0;
    r4 = *(u32*)(r6);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_080127A6;
loc_08012736:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r0 = *(u32*)(r0 + 0x4);
    r3 = 0x0; // sp + 0x0
    stack[4] = r0; // [sp + 0x10]
    r1 = 0x4U;
    r1 = (u32)(*(s16*)(r3 + r1));
    r3 = 0x0U;
    r0 += 0x4U;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_080127A2;
    r3 = 0x0; // sp + 0x0
    r1 = 0x4U;
    r1 = (u32)(*(s16*)(r3 + r1));
    r3 = 0x4U;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs >= cmp_rhs) goto loc_080127A2;
    r3 = 0x0; // sp + 0x0
    r1 = 0x6U;
    r1 = (u32)(*(s16*)(r3 + r1));
    r3 = 0x2U;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_080127A2;
    r3 = 0x0; // sp + 0x0
    r1 = 0x6U;
    r1 = (u32)(*(s16*)(r3 + r1));
    r3 = 0x6U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_080127A2;
    r1 = stack[4]; // [sp + 0x10]
    r0 = *(u32*)(r1 + 0xC);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x8);
    r3 = r3 + r2;
    r2 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012784: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080127A2;
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r1 = *(u32*)(r0 + 0x4);
    r0 = *(u32*)(r1 + 0xC);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x4);
    r3 = r3 + r2;
    r2 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801279C: BL __call_via_r3
    goto loc_080127A6;
loc_080127A2:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08012736;
loc_080127A6:
    r0 = 0x0U;
    *(u32*)(r7 + 0xC) = (u32)r0;
loc_080127AA:
    return r0;
    r6 = r0;
    r5 = r1;
    if (cmp_lhs != cmp_rhs) return sub_080127BE(r0, r1, r2, r3);
    r0 = 0x0U;
    return r0;
}

// ROM Address: 0x080127BE..0x08012846 (136 bytes, Thumb)
u32 sub_080127BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r5;
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
    r1 = r0;
    r0 = stack[4]; // [sp + 0x10]
    r3 = 0x0; // sp + 0x0
    *(u16*)(r3 + 0x8) = (u16)r1;
    *(u16*)(r3 + 0xA) = (u16)r0;
    r4 = *(u32*)(r6);
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_08012842;
loc_080127E8:
    r0 = (r4 << 2);
    r0 = r0 + r6;
    r3 = 0x0; // sp + 0x0
    r2 = 0x8U;
    r2 = (u32)(*(s16*)(r3 + r2));
    r1 = *(u32*)(r0 + 0x4);
    r3 = 0x4U;
    r7 = (u32)(*(s16*)(r1 + r3));
    r0 = r1 + 4;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_0801283E;
    r3 = 0x0; // sp + 0x0
    r2 = 0x8U;
    r2 = (u32)(*(s16*)(r3 + r2));
    r3 = 0x4U;
    r7 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_0801283E;
    r3 = 0x0; // sp + 0x0
    r2 = 0xAU;
    r2 = (u32)(*(s16*)(r3 + r2));
    r3 = 0x2U;
    r7 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_0801283E;
    r3 = 0x0; // sp + 0x0
    r2 = 0xAU;
    r2 = (u32)(*(s16*)(r3 + r2));
    r3 = 0x6U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs >= cmp_rhs) goto loc_0801283E;
    r0 = *(u32*)(r1 + 0xC);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r2 = r2 + r1;
    r1 = r5;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012832: BL __call_via_r3
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801283E;
    r0 = 0x1U;
    return sub_080127BA(r0, r1, r2, r3);
loc_0801283E:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080127E8;
loc_08012842:
    r0 = 0x0U;
    return sub_080127BA(r0, r1, r2, r3);
}

// ROM Address: 0x08012846..0x080128F4 (174 bytes, Thumb)
u32 sub_08012846(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x082B9BACU; // [0x080128FC]
    r0 = *(u32*)(r0);
    r1 = stack[9]; // [sp + 0x24]
    r5 = r0;
    r0 = *(u32*)(r1);
    r5 += 0x18U;
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_080128F0;
loc_0801285C:
    r1 = stack[9]; // [sp + 0x24]
    r0 = (r6 << 2);
    r0 = r0 + r1;
    r4 = *(u32*)(r0 + 0x4);
    r3 = 0x4U;
    r0 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x6U;
    r1 = (u32)(*(s16*)(r4 + r3));
    r3 = 0x8U;
    r2 = (u32)(*(s16*)(r4 + r3));
    r3 = 0xAU;
    r7 = (u32)(*(s16*)(r4 + r3));
    r0 += 0xFU;
    stack[1] = r0; // [sp + 0x4]
    r1 += 0x7U;
    stack[4] = r7; // [sp + 0x10]
    stack[2] = r1; // [sp + 0x8]
    r0 = 0x4; // sp + 0x4
    stack[3] = r2; // [sp + 0xC]
    r0 = *(u32*)r0; r0 += 4;
    r1 = *(u32*)r0; r0 += 4;
    r2 = *(u32*)r0; r0 += 4;
    r3 = *(u32*)r0; r0 += 4;
    r7 = 0x14; // sp + 0x14
    *(u32*)r7 = r0; r7 += 4;
    *(u32*)r7 = r1; r7 += 4;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r3; r7 += 4;
    r0 = stack[5]; // [sp + 0x14]
    r1 = *(u32*)(r5 + 0x8);
    r7 -= 0x10U;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080128E6;
    r0 = *(u32*)(r5);
    r1 = stack[7]; // [sp + 0x1C]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080128E6;
    r0 = stack[6]; // [sp + 0x18]
    r1 = *(u32*)(r5 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080128E6;
    r0 = *(u32*)(r5 + 0x4);
    r1 = stack[8]; // [sp + 0x20]
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_080128E6;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x8);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080128B2: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080128E6;
    r2 = stack[10]; // [sp + 0x28]
    r0 = *(u32*)(r2);
    r1 = r0 + 1;
    *(u32*)(r2) = (u32)r1;
    r3 = (r0 << 3);
    r0 = r3 - r0;
    r2 = stack[10]; // [sp + 0x28]
    r0 = (r0 << 2);
    r0 = r0 + r2;
    r0 += 0x4U;
    r1 = 0x0U;
    *(u32*)(r0 + 0x10) = (u32)r1;
    r1 = *(u32*)r7; r7 += 4;
    r2 = *(u32*)r7; r7 += 4;
    r3 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r7; r0 += 4;
    r0 -= 0x10U;
    r1 = 0x1U;
    *(u8*)(r0 + 0x14) = (u8)r1;
    *(u32*)(r0 + 0x18) = (u32)r4;
    r2 = stack[10]; // [sp + 0x28]
    r0 = *(u32*)(r2);
    cmp_lhs = (s32)r0; cmp_rhs = 16;
    if (cmp_lhs == cmp_rhs) goto loc_080128F0;
loc_080128E6:
    r1 = stack[9]; // [sp + 0x24]
    r6 += 0x1U;
    r0 = *(u32*)(r1);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs > cmp_rhs) goto loc_0801285C;
loc_080128F0:
    return r0;
}

// ROM Address: 0x08012900..0x0801299E (158 bytes, Thumb)
u32 sub_08012900(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = *(u32*)(r0);
    r5 = r0;
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) < 0) goto loc_0801294C;
loc_0801290A:
    r0 = (r4 << 2);
    r6 = r0 + r5;
    r0 = *(u32*)(r6 + 0x4);
    r7 = r6 + 4;
    stack[0] = r0; // [sp + 0x0]
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0xC);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801291A: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08012948;
    r0 = *(u32*)(r5);
    r0 -= 0x1U;
    *(u32*)(r5) = (u32)r0;
    r0 = r0 - r4;
    if (cmp_lhs == cmp_rhs) goto loc_08012936;
    r2 = (r0 << 2);
    r1 = r7 + 4;
    r0 = r7;
    r0 = Thunk_VramCopy(r0, r1, r2, r3); // 0x08012932: BL 0x08049138
loc_08012936:
    r0 = stack[0]; // [sp + 0x0]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012948;
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012944: BL __call_via_r3
loc_08012948:
    r4 -= 0x1U;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_0801290A;
loc_0801294C:
    r1 = r5;
    r1 += 0xC0U;
    r0 = 0x1U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x0U;
    *(u32*)(r1 + 0xC) = (u32)r0;
    r0 = *(u32*)(r1 + 0x8);
    r0 += 0x1U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0;
    r5 = r0;
    r4 = r1;
    r0 = *(u32*)r1; r1 += 4;
    stack[5] = r1; // [sp + 0x14]
    r1 = *(u32*)(r1);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[3] = r0; // [sp + 0xC]
    r2 = r5;
    r2 += 0xFFU;
    r0 = 0x083C33F8U; // [0x08012D10]
    stack[4] = r1; // [sp + 0x10]
    r2 += 0x9DU;
    r7 = r2;
    r0 = *(u32*)(r0 + 0x8);
    r1 = 0xC; // sp + 0xC
    r0 = sub_080097C2(r0, r1, r2, r3); // 0x08012984
    r6 = r7 + 4;
    r5 = r6 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801299E(r0, r1, r2, r3);
    r0 = *(u32*)(r4);
    *(u32*)(r6) = (u32)r0;
    r1 = stack[5]; // [sp + 0x14]
    r0 = *(u32*)(r1);
    *(u32*)(r5) = (u32)r0;
    return r0;
}

// ROM Address: 0x0801299E..0x08012A24 (134 bytes, Thumb)
u32 sub_0801299E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[3]; // [sp + 0xC]
    r1 = *(u32*)(r4);
    r0 = (r0 << 29);
    stack[2] = r1; // [sp + 0x8]
    r1 = stack[8]; // [sp + 0x20]
    r0 = (r0 >> 29);
    r1 = (r1 << 31);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080129E6;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_080129B6;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs <= cmp_rhs) goto loc_080129E6;
loc_080129B6:
    r0 = stack[3]; // [sp + 0xC]
    r1 = stack[4]; // [sp + 0x10]
    r0 += 0x4U;
    r0 = (r0 >> 3);
    r0 = (r0 << 3);
    stack[0] = r0; // [sp + 0x0]
    r0 = 0x083C33F8U; // [0x08012D10]
    stack[1] = r1; // [sp + 0x4]
    r0 = *(u32*)(r0 + 0x8);
    r1 = sp;
    r2 = r7;
    r0 = sub_080097C2(r0, r1, r2, r3); // 0x080129CC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080129E6;
    r0 = stack[0]; // [sp + 0x0]
    r1 = *(u32*)(r4 + 0x4);
    r0 = (r0 << 8);
    *(u32*)(r6) = (u32)r0;
    *(u32*)(r5) = (u32)r1;
    r0 = stack[0]; // [sp + 0x0]
    r1 = (r0 << 8);
    stack[2] = r1; // [sp + 0x8]
    stack[3] = r0; // [sp + 0xC]
loc_080129E6:
    r0 = stack[4]; // [sp + 0x10]
    r1 = stack[8]; // [sp + 0x20]
    r0 = (r0 << 29);
    r0 = (r0 >> 29);
    r1 = (r1 << 30);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0801299A(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs < cmp_rhs) goto loc_080129FA;
    cmp_lhs = (s32)r0; cmp_rhs = 5;
    if (cmp_lhs <= cmp_rhs) return sub_0801299A(r0, r1, r2, r3);
loc_080129FA:
    r1 = 0xC; // sp + 0xC
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    stack[0] = r0; // [sp + 0x0]
    r1 += 0x4U;
    r1 = (r1 >> 3);
    r1 = (r1 << 3);
    stack[1] = r1; // [sp + 0x4]
    r0 = 0x083C33F8U; // [0x08012D10]
    r1 = sp;
    r2 = r7;
    r0 = *(u32*)(r0 + 0x8);
    r0 = sub_080097C2(r0, r1, r2, r3); // 0x08012A10
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_0801299A(r0, r1, r2, r3);
    r1 = 0x4; // sp + 0x4
    r0 = *(u32*)r1; r1 += 4;
    r1 = *(u32*)r1; r1 += 4;
    r0 = (r0 << 8);
    *(u32*)(r6) = (u32)r1;
    *(u32*)(r5) = (u32)r0;
    return sub_0801299A(r0, r1, r2, r3);
}

// ROM Address: 0x08012A24..0x08012AB4 (144 bytes, Thumb)
u32 sub_08012A24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = 0x083C33F8U; // [0x08012D10]
    r6 = r4;
    r0 = *(u32*)(r5 + 0xC);
    r6 += 0x1A0U;
    r0 = *(u32*)(r0 + 0xC);
    r7 = r6 + 4;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08012B20(r0, r1, r2, r3);
    stack[18] = r4; // [sp + 0x48]
    r0 = *(u8*)(r4 + 0x10);
    r3 = 0x20; // sp + 0x20
    r2 = 0x20; // sp + 0x20
    *(u8*)(r3 + 0x1C) = (u8)r0;
    r0 = 0x086B8098U; // [0x08012D14]
    stack[22] = r4; // [sp + 0x58]
    stack[17] = r0; // [sp + 0x44]
    r0 = 0x400U; // (1 << 10)
    stack[16] = r0; // [sp + 0x40]
    r0 = 0x1U;
    *(u8*)(r3 + 0x8) = (u8)r0;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r7);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[7] = r1; // [sp + 0x1C]
    stack[9] = r1; // [sp + 0x24]
    stack[6] = r0; // [sp + 0x18]
    stack[8] = r0; // [sp + 0x20]
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x083C33F8U; // [0x08012D10]
    r1 += 0x54U;
    r0 = (r0 << 4);
    r1 = r0 + r1;
    r0 = 0x2C; // sp + 0x2C
    r0 = sub_08052FD4(r0, r1, r2, r3); // 0x08012A72
    r2 = 0x28; // sp + 0x28
    r1 = 0x0U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011C0C(r0, r1, r2, r3); // 0x08012A7C
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08012AB4(r0, r1, r2, r3);
    r5 = *(u32*)(r5);
    r0 = 0x2U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08012A88
    r0 += 0x30U;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r1 = 0x083192A8U; // [0x08012D18]
    r0 = (r0 << 2);
    r1 = r0 + r1;
    r0 = 0x000005C4U; // [0x08012D1C]
    r3 = 0x0U;
    r2 = 0x40U;
    r0 = r5 + r0;
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08012AA0
    r0 = stack[19]; // [sp + 0x4C]
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08012AF4(r0, r1, r2, r3);
    r1 = 0x4BU;
    r0 = 0xFU;
    r0 = sub_0800797C(r0, r1, r2, r3); // 0x08012AAE
    return sub_08012AF4(r0, r1, r2, r3);
}

// ROM Address: 0x08012AB4..0x08012AF4 (64 bytes, Thumb)
u32 sub_08012AB4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r7);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[2] = r1; // [sp + 0x8]
    stack[4] = r1; // [sp + 0x10]
    stack[1] = r0; // [sp + 0x4]
    stack[3] = r0; // [sp + 0xC]
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x083C33F8U; // [0x08012D10]
    r6 = 0x14; // sp + 0x14
    r1 += 0x14U;
    r0 = (r0 << 4);
    r1 = r0 + r1;
    r0 = r6;
    r2 = 0xC; // sp + 0xC
    r0 = sub_08052FD4(r0, r1, r2, r3); // 0x08012AD4
    stack[9] = r4; // [sp + 0x24]
    r2 = r6;
    r1 = 0x3U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08012AE0
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08012B28(r0, r1, r2, r3);
    r1 = r4;
    r0 = *(u32*)(r5 + 0x10);
    r0 = sub_080127AE(r0, r1, r2, r3); // 0x08012AEC
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08012B28(r0, r1, r2, r3);
    return r0;
}

// ROM Address: 0x08012AF4..0x08012B20 (44 bytes, Thumb)
u32 sub_08012AF4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012AFE: BL 0x08046AA2
    r0 += 0x16U;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08012B28(r0, r1, r2, r3);
    r0 = 0x3U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x08012B0E
    r0 += 0x4U;
    r1 = (r0 << 24);
    r0 = *(u32*)(r4);
    r1 = (r1 >> 24);
    r2 = *(u32*)(r0 + 0x28);
    r2 = r2 + r0;
    return sub_08012B22(r0, r1, r2, r3);
}

// ROM Address: 0x08012B20..0x08012B22 (2 bytes, Thumb)
u32 sub_08012B20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return sub_08012B2C(r0, r1, r2, r3);
}

// ROM Address: 0x08012B22..0x08012B2C (10 bytes, Thumb)
u32 sub_08012B22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012B24: BL __call_via_r3
    return r0;
}

// ROM Address: 0x08012B2C..0x08012B5E (50 bytes, Thumb)
u32 sub_08012B2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r6);
    r1 = *(u32*)(r7);
    r0 = ((u32)((s32)r0 >> 8));
    r1 = ((u32)((s32)r1 >> 8));
    stack[15] = r1; // [sp + 0x3C]
    stack[17] = r1; // [sp + 0x44]
    stack[14] = r0; // [sp + 0x38]
    stack[16] = r0; // [sp + 0x40]
    r0 = *(u8*)(r4 + 0x10);
    r1 = 0x083C33F8U; // [0x08012D10]
    r6 = 0x48; // sp + 0x48
    r1 += 0x14U;
    r0 = (r0 << 4);
    r1 = r0 + r1;
    r0 = r6;
    r2 = 0x40; // sp + 0x40
    r0 = sub_08052FD4(r0, r1, r2, r3); // 0x08012B4C
    stack[22] = r4; // [sp + 0x58]
    r2 = r6;
    r1 = 0x3U;
    r0 = *(u32*)(r5 + 0x4);
    r0 = sub_08011C70(r0, r1, r2, r3); // 0x08012B58
    return sub_08012B28(r0, r1, r2, r3);
}

// ROM Address: 0x08012B5E..0x08012BC6 (104 bytes, Thumb)
u32 sub_08012B5E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r6 = r0;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012B6A: BL 0x08046AA2
    r4 = r0;
    r1 = *(u8*)(r0 + 0x15);
    r0 = sub_080135A2(r0, r1, r2, r3); // 0x08012B72
    r5 = r0;
    r1 = *(u32*)(r0 + 0x10);
    r0 = r4;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012B7C: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012B8E;
    r1 = r6;
    r0 = r4;
    r2 = *(u32*)(r5 + 0x14);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012B8A: BL __call_via_r3
loc_08012B8E:
    return r0;
    r4 = r1;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x08012B94
    r0 = 0x1U;
    r4 += 0x1C0U;
    *(u32*)(r4 + 0x8) = (u32)r0;
    return r0;
    r4 = r0;
    r1 += 0x1C0U;
    r0 = 0x0U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08012BBE;
    r1 = r0;
    r0 = 0x083C33F8U; // [0x08012D10]
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08012BBA
loc_08012BBE:
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08012BC0: BL 0x0803D63C
    return r0;
}

// ROM Address: 0x08012BC6..0x08012C4A (132 bytes, Thumb)
u32 sub_08012BC6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x8);
    r2 = *(u32*)(r1);
    r5 = r1;
    r1 = r2;
    r1 += 0x80U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08012CA0(r0, r1, r2, r3);
    r1 = *(u32*)(r1);
    r0 = r5;
    r1 = r1 + r2;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012BDE: BL 0x08046AA2
    r6 = r0;
    r1 = 0x57U;
    r1 = *(u8*)(r1 + r6);
    r3 = 0x00003277U; // [0x08012D20]
    r0 = *(u32*)(r4 + 0x4);
    r1 *= r3;
    r1 = (r1 >> 4);
    r0 = r0 + r1;
    r1 = ((u32)((s32)r0 >> 16));
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r6;
    r0 = sub_08013504(r0, r1, r2, r3); // 0x08012BF8: BL 0x08013504
    r0 = *(u32*)(r4 + 0x4);
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = r6;
    r0 += 0x1AU;
    r3 = 0x0U;
    r0 = (u32)(*(s16*)(r0 + r3));
    r6 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08012C18;
    r0 = *(u32*)(r4 + 0x8);
    *(u32*)(r0 + 0x44) = (u32)r6;
    return sub_08012C4E(r0, r1, r2, r3);
loc_08012C18:
    r1 = *(u32*)(r5);
    r7 = *(u32*)(r4 + 0x8);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012C24: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08012C4A(r0, r1, r2, r3);
    r1 = *(u32*)(r5);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012C3A: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 23);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08012C4A(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08012C4C(r0, r1, r2, r3);
}

// ROM Address: 0x08012C4A..0x08012C80 (54 bytes, Thumb)
u32 sub_08012C4A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    *(u32*)(r7 + 0x44) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    r1 = *(u32*)(r0 + 0x40);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08012C90(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_08012C90(r0, r1, r2, r3);
    r1 = *(u32*)(r5);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012C66: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 23);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08012C80(r0, r1, r2, r3);
    r0 = 0x083C33F8U; // [0x08012D10]
    r1 = *(u32*)(r4 + 0x8);
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_08011944(r0, r1, r2, r3); // 0x08012C78
    *(u32*)(r4 + 0x8) = (u32)r6;
    return r0;
}

// ROM Address: 0x08012C80..0x08012CA0 (32 bytes, Thumb)
u32 sub_08012C80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5);
    r0 = r5;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012C8A: BL __call_via_r3
    return sub_08012C7E(r0, r1, r2, r3);
    r0 = r5;
    r0 += 0x1B0U;
    cmp_lhs = (s32)r1; cmp_rhs = 24;
    if (cmp_lhs < cmp_rhs) return sub_08012CA2(r0, r1, r2, r3);
    *(u8*)(r0 + 0x9) = (u8)r6;
    *(u8*)(r0 + 0x8) = (u8)r6;
    return sub_08012C7E(r0, r1, r2, r3);
}

// ROM Address: 0x08012CA2..0x08012CAA (8 bytes, Thumb)
u32 sub_08012CA2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = 0x80U;
    *(u8*)(r0 + 0x9) = (u8)r1;
    *(u8*)(r0 + 0x8) = (u8)r1;
    return sub_08012C7E(r0, r1, r2, r3);
}

// ROM Address: 0x08012D10..0x08012DD0 (192 bytes, Thumb)
u32 sub_08012D10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 += 0xF8U;
    r4 = (r7 >> 32);
    *(u16*)(r3 + 0x4) = (u16)r0;
    r3 = (r5 >> 1);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r2 += 0x77U;
    r0 = r0;
    r4 = r1;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x08012D28
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012D36: BL 0x08046AA2
    r4 = r0;
    r0 = *(u8*)(r0 + 0x14);
    r5 = 0x086B82ECU; // [0x08012FAC]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r5;
    r1 = *(u8*)(r0);
    r1 = (r1 << 25);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08012D62;
    r0 = sub_0801712C(r0, r1, r2, r3); // 0x08012D50
    r0 = *(u8*)(r4 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r5;
    r0 = *(u8*)(r0 + 0x17);
    *(u8*)(r4 + 0x14) = (u8)r0;
loc_08012D62:
    return r0;
    r4 = r1;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x08012D68
    r0 = 0x0U;
    r4 += 0x1B0U;
    *(u8*)(r4 + 0x9) = (u8)r0;
    *(u8*)(r4 + 0x8) = (u8)r0;
    return r0;
    r2 = 0x80U;
    r1 += 0x1B0U;
    *(u8*)(r1 + 0x9) = (u8)r2;
    *(u8*)(r1 + 0x8) = (u8)r2;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08012D84: BL 0x0803D63C
    return r0;
    r5 = r1;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012D9A: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 24);
    r0 = (r0 >> 28);
    if (cmp_lhs == cmp_rhs) goto loc_08012DB4;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012DB0: BL __call_via_r3
loc_08012DB4:
    r1 = *(u32*)(r5);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012DBE: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) return sub_08012DD0(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_08012A24(r0, r1, r2, r3); // 0x08012DCA: BL 0x08012A24
    return r0;
}

// ROM Address: 0x08012DD0..0x08012DEE (30 bytes, Thumb)
u32 sub_08012DD0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r5);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r5;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012DDA: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08012DCE(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_08012B5E(r0, r1, r2, r3); // 0x08012DE8: BL 0x08012B5E
    return sub_08012DCE(r0, r1, r2, r3);
}

// ROM Address: 0x08012F60..0x08012F8C (44 bytes, Thumb)
u32 sub_08012F60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08012F6A: BL __call_via_r3
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012F78: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) return sub_08012F8C(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_08012A24(r0, r1, r2, r3); // 0x08012F84: BL 0x08012A24
    return r0;
}

// ROM Address: 0x08012F8C..0x08012FA4 (24 bytes, Thumb)
u32 sub_08012F8C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012F96: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08012F88(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08012FAA..0x08012FE6 (60 bytes, Thumb)
u32 sub_08012FAA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r6 = 0x8CU;
    r7 = (r0 >> 32);
    r3 += 0xF8U;
    r4 = (r7 >> 32);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08013074(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    stack[168] = r2; // [sp + 0x2A0]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    r4 = r1;
    r0 = sub_0800DEB0(r0, r1, r2, r3); // 0x08012FC8
    r0 = *(u16*)(r4 + 0x12);
    r0 = (r0 << 28);
    if (cmp_lhs != cmp_rhs) goto loc_08012FE4;
    r0 = 0x083C33F8U; // [0x0801332C]
    r4 = 0x000005C4U; // [0x08013334]
    r0 = *(u32*)(r0);
    r3 = 0x0U;
    r2 = 0x20U;
    r0 = r0 + r4;
    r1 = 0x083193D4U; // [0x08013330]
    r0 = sub_0803E378(r0, r1, r2, r3); // 0x08012FE0
loc_08012FE4:
    return r0;
}

// ROM Address: 0x08012FE6..0x0801300E (40 bytes, Thumb)
u32 sub_08012FE6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = r0;
    r4 = r1;
    r0 = sub_0800DFBE(r0, r1, r2, r3); // 0x08012FEC
    r0 = 0x0U;
    *(u32*)(r5 + 0x4) = (u32)r0;
    r1 = *(u32*)(r4);
    r2 = 0x80U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08012FFE: BL 0x08046AA2
    r0 += 0x67U;
    r0 = *(u8*)(r0);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return sub_0801300E(r0, r1, r2, r3);
    r0 = 0x1U;
    return sub_08013010(r0, r1, r2, r3);
}

// ROM Address: 0x0801300E..0x08013072 (100 bytes, Thumb)
u32 sub_0801300E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    r1 = 0xFFU;
    r1 += 0xCDU;
    *(u32*)(r1 + r4) = r0;
    r4 += 0xFFU;
    r0 = 0x80U;
    r4 += 0xB1U;
    *(u8*)(r4 + 0x8) = (u8)r0;
    *(u8*)(r4 + 0x9) = (u8)r0;
    return r0;
    r5 = r0;
    r0 = r1;
    r7 = r1;
    r4 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08013034: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r6 = 0x0U;
    r0 = (r0 << 23);
    r0 = (r0 >> 31);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08013078(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x58);
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 7;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08013078(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x70);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08013078(r0, r1, r2, r3);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08013054: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013064;
    r1 = 0x0804C744U /* &VTable_0804C744 */; // [0x08013338]
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0x8) = (u32)r6;
    *(u32*)(r0 + 0x4) = (u32)r6;
loc_08013064:
    r4 = r0;
    r1 = 0x7U;
    r0 = r7;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x0801306A
    r1 = r4;
    r0 = r7;
    return r0;
}

// ROM Address: 0x08013076..0x08013078 (2 bytes, Thumb)
u32 sub_08013076(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return r0;
}

// ROM Address: 0x08013078..0x080131B4 (316 bytes, Thumb)
u32 sub_08013078(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r5 + 0x4);
    r1 = 0x1U;
    r0 += 0x1U;
    r1 = (r1 << 10);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    *(u32*)(r5 + 0x4) = (u32)r0;
    if (cmp_lhs <= cmp_rhs) goto loc_080130A6;
    r0 = *(u32*)(r4 + 0x58);
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 8;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_080130A4;
    r0 = *(u32*)(r0 + 0x74);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080130A4;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x8U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801309E: BL __call_via_r3
    goto loc_080130A6;
loc_080130A4:
    *(u32*)(r5 + 0x4) = (u32)r6;
loc_080130A6:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080130B0: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r1 = 0xF0U;
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_080130F6;
    r1 = 0x03000F90U; // [0x0801333C]
    r2 = 0x200U; // (1 << 9)
    r2 = r4 + r2;
    r1 = *(u32*)(r1 + 0x4);
    r3 = *(u32*)(r2 + 0x34);
    r5 = r1 - r3;
    r3 = 0x220U; // (17 << 5)
    r3 = r7 + r3;
    cmp_lhs = (s32)r5; cmp_rhs = 20;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080130F2;
    r5 = (u32)(-(s32)r0);
    r7 = r0;
    r7 &= ~r5;
    if (cmp_lhs != cmp_rhs) goto loc_080130F2;
    r5 = *(u16*)(r3 + 0x10);
    r5 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_080130F2;
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x2U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080130EC: BL __call_via_r3
loc_080130F0:
    return sub_08013076(r0, r1, r2, r3);
loc_080130F2:
    *(u16*)(r3 + 0x10) = (u16)r0;
    *(u32*)(r2 + 0x34) = (u32)r1;
loc_080130F6:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08013100: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r5 = 0x1U;
    r0 = (r0 << 24);
    r0 = (r0 >> 28);
    if (cmp_lhs == cmp_rhs) goto loc_08013180;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08013118: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 26);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08013128;
    r0 = 0x2U;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_08013128:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08013132: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08013142;
    r0 = 0x3U;
    *(u8*)(r4 + 0x10) = (u8)r0;
loc_08013142:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801314C: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 25);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801315A;
    *(u8*)(r4 + 0x10) = (u8)r5;
loc_0801315A:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08013164: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_08013172;
    *(u8*)(r4 + 0x10) = (u8)r6;
loc_08013172:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x1U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x0801317C: BL __call_via_r3
loc_08013180:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801318A: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801319C;
    r0 = r4;
    r0 = sub_08012A24(r0, r1, r2, r3); // 0x08013196: BL 0x08012A24
    return sub_08013076(r0, r1, r2, r3);
loc_0801319C:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080131A6: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080130F0;
    r0 = r4;
    return r0;
}

// ROM Address: 0x080131BA..0x08013210 (86 bytes, Thumb)
u32 sub_080131BA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r7 = r1;
    r4 = r1;
    r0 = r1;
    r1 = *(u32*)(r1);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080131CC: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 23);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_08013210(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x58);
    r1 = *(u8*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = 7;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08013210(r0, r1, r2, r3);
    r0 = *(u32*)(r0 + 0x70);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08013210(r0, r1, r2, r3);
    r0 = 0xCU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x080131E8: BL 0x0803D5B8
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080131FA;
    r1 = 0x0804C744U /* &VTable_0804C744 */; // [0x08013338]
    *(u32*)(r0) = (u32)r1;
    r1 = 0x0U;
    *(u32*)(r0 + 0x8) = (u32)r1;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_080131FA:
    r4 = r0;
    r1 = 0x7U;
    r0 = r7;
    r0 = sub_0800ECDA(r0, r1, r2, r3); // 0x08013200
    r1 = r4;
    r0 = r7;
    r0 = sub_0800ED18(r0, r1, r2, r3); // 0x08013208
    return r0;
}

// ROM Address: 0x08013210..0x0801332A (282 bytes, Thumb)
u32 sub_08013210(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x0801321A: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x2);
    r0 = (r0 << 24);
    r0 = (r0 >> 28);
    if (cmp_lhs == cmp_rhs) goto loc_080132E2;
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r5 = 0x0U;
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08013232: BL 0x08046AA2
    stack[2] = r0; // [sp + 0x8]
    r0 = *(u16*)(r0 + 0x2);
    r2 = 0x238U; // (71 << 3)
    r6 = r7 + r2;
    r7 += 0xFFU;
    r1 = (r0 << 26);
    r1 = (r1 >> 31);
    r7 += 0xA1U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_0801326A;
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
    r0 = sub_08012960(r0, r1, r2, r3); // 0x08013262
    r5 = 0x1U;
    goto loc_0801328C;
loc_0801326A:
    r0 = (r0 << 27);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801328C;
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
    r0 = sub_08012960(r0, r1, r2, r3); // 0x08013286
    r5 = 0x2U;
loc_0801328C:
    r0 = stack[2]; // [sp + 0x8]
    r0 = *(u16*)(r0 + 0x2);
    r1 = (r0 << 25);
    r1 = (r1 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080132B2;
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
    r0 = sub_08012960(r0, r1, r2, r3); // 0x080132AA
    r5 += 0x3U;
    goto loc_080132D2;
loc_080132B2:
    r0 = (r0 << 24);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080132D2;
    r0 = *(u32*)(r7 + 0x4);
    r1 = *(u32*)(r7);
    stack[1] = r0; // [sp + 0x4]
    stack[0] = r1; // [sp + 0x0]
    r2 = *(u32*)(r6);
    r1 = sp;
    r0 = r0 + r2;
    stack[1] = r0; // [sp + 0x4]
    r2 = 0x1U;
    r0 = r4;
    r0 = sub_08012960(r0, r1, r2, r3); // 0x080132CC
    r5 += 0x6U;
loc_080132D2:
    r1 = 0x083C33F8U; // [0x0801332C]
    r0 = (r5 << 2);
    r1 += 0x94U;
    r0 = r0 + r1;
    r1 = *(u8*)(r4 + 0x10);
    r0 = *(u8*)(r0 + r1);
    *(u8*)(r4 + 0x10) = (u8)r0;
    goto loc_080132F0;
loc_080132E2:
    r1 = *(u32*)(r4);
    r0 = r4;
    r2 = *(u32*)(r1 + 0x28);
    r2 = r2 + r1;
    r1 = 0x0U;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x080132EC: BL __call_via_r3
loc_080132F0:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080132FA: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801330C;
    r0 = r4;
    r0 = sub_08012A24(r0, r1, r2, r3); // 0x08013306: BL 0x08012A24
loc_0801330A:
    return sub_0801320C(r0, r1, r2, r3);
loc_0801330C:
    r1 = *(u32*)(r4);
    r2 = 0x84U;
    r2 = *(u32*)(r2 + r1);
    r0 = r4;
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08013316: BL 0x08046AA2
    r0 = *(u16*)(r0 + 0x4);
    r0 = (r0 << 30);
    r0 = (r0 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_0801330A;
    r0 = r4;
    r0 = sub_08012B5E(r0, r1, r2, r3); // 0x08013324: BL 0x08012B5E
    return sub_0801320C(r0, r1, r2, r3);
}

// ROM Address: 0x0801332A..0x0801341C (242 bytes, Thumb)
u32 sub_0801332A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r3 += 0xF8U;
    r4 = (r7 >> 32);
    stack[212] = r3; // [sp + 0x350]
    r1 = (r6 >> 32);
    r4 = (r0 << 23);
    r0 = r0;
    *(u32*)r7 = r2; r7 += 4;
    *(u32*)r7 = r6; r7 += 4;
    r4 = (r0 >> 32);
    r0 = (r2 >> 30);
    r0 = (r0 << 12);
    r4 = r1;
    r0 = sub_0800DE60(r0, r1, r2, r3); // 0x08013344
    r0 = 0x0U;
    r1 = 0xFFU;
    r1 += 0xCDU;
    *(u32*)(r1 + r4) = r0;
    return r0;
    r0 = r1;
    r1 = *(u8*)(r1 + 0x10);
    r2 = 0x083C34B0U; // [0x08013374]
    r0 += 0xFFU;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r0 += 0x81U;
    r2 = *(u32*)(r0 + 0x20);
    r3 = *(u32*)(r1);
    r2 = r2 + r3;
    *(u32*)(r0 + 0x20) = (u32)r2;
    r2 = *(u32*)(r0 + 0x24);
    r1 = *(u32*)(r1 + 0x4);
    r1 = r2 + r1;
    *(u32*)(r0 + 0x24) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    r4 += 0xB0U;
    r4 = (r7 >> 32);
    cmp_lhs = (s32)r0; cmp_rhs = 50;
    if (cmp_lhs >= cmp_rhs) goto loc_08013380;
    r0 = 0x0U;
    return r0; // BX lr
loc_08013380:
    r1 = 0x086B7084U; // [0x08013610]
    cmp_lhs = (s32)r0; cmp_rhs = 200;
    if (cmp_lhs <= cmp_rhs) goto loc_08013390;
    r0 = 0x240U; // (9 << 6)
    r0 = r1 + r0;
    r0 = *(u32*)(r0 + 0x18);
    return r0; // BX lr
loc_08013390:
    r0 = (r0 << 2);
    r0 = r0 + r1;
    r0 -= 0x100U;
    r0 = *(u32*)(r0 + 0x38);
    return r0; // BX lr
    r2 = *(u16*)(r1 + 0x2);
    r2 = (r2 << 16);
    r2 = ((u32)((s32)r2 >> 16));
    r5 = r2;
loc_080133A6:
    *(u16*)(r0 + 0x16) = (u16)r2;
    r3 = 0x16U;
    r4 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080133A6;
    r2 = r5;
loc_080133B2:
    *(u16*)(r0 + 0x18) = (u16)r2;
    r3 = 0x18U;
    r4 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080133B2;
    r2 = *(u16*)(r1 + 0x4);
    r2 = (r2 << 16);
    r2 = ((u32)((s32)r2 >> 16));
    r5 = r2;
loc_080133C4:
    *(u16*)(r0 + 0x1A) = (u16)r2;
    r3 = 0x1AU;
    r4 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080133C4;
    r2 = r5;
loc_080133D0:
    *(u16*)(r0 + 0x1C) = (u16)r2;
    r3 = 0x1CU;
    r4 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_080133D0;
    r3 = *(u8*)(r1 + 0x6);
    r2 = r0;
    r2 += 0x28U;
loc_080133E0:
    *(u8*)(r2) = (u8)r3;
    r4 = *(u8*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_080133E0;
    r3 = *(u8*)(r1 + 0x7);
    r2 = r0;
    r2 += 0x29U;
loc_080133EE:
    *(u8*)(r2) = (u8)r3;
    r4 = *(u8*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_080133EE;
    r3 = *(u8*)(r1 + 0x8);
    r2 = r0;
    r2 += 0x2AU;
loc_080133FC:
    *(u8*)(r2) = (u8)r3;
    r4 = *(u8*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_080133FC;
    r3 = *(u8*)(r1 + 0x9);
    r2 = r0;
    r2 += 0x2BU;
loc_0801340A:
    *(u8*)(r2) = (u8)r3;
    r4 = *(u8*)(r2);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_0801340A;
    r2 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = 50;
    if (cmp_lhs >= cmp_rhs) return sub_0801341C(r0, r1, r2, r3);
    r2 = 0x0U;
    return sub_08013436(r0, r1, r2, r3);
}

// ROM Address: 0x0801341C..0x0801342C (16 bytes, Thumb)
u32 sub_0801341C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x086B7084U; // [0x08013610]
    cmp_lhs = (s32)r2; cmp_rhs = 200;
    if (cmp_lhs <= cmp_rhs) return sub_0801342C(r0, r1, r2, r3);
    r2 = 0x240U; // (9 << 6)
    r2 = r3 + r2;
    r2 = *(u32*)(r2 + 0x18);
    return sub_08013436(r0, r1, r2, r3);
}

// ROM Address: 0x0801342C..0x080134DE (178 bytes, Thumb)
u32 sub_0801342C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r2 << 2);
    r2 = r2 + r3;
    r2 -= 0x100U;
    r2 = *(u32*)(r2 + 0x38);
loc_08013436:
    *(u32*)(r0 + 0x24) = (u32)r2;
    r3 = *(u32*)(r0 + 0x24);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08013436;
    r2 = 0x2U;
    *(u8*)(r0) = (u8)r2;
    r2 = *(u8*)(r1 + 0xA);
    *(u8*)(r0 + 0x14) = (u8)r2;
    r2 = 0x0U;
    r2 = ~r2;
    *(u32*)(r0 + 0x8) = (u32)r2;
    r2 = 0x0U;
loc_0801344E:
    *(u32*)(r0 + 0x3C) = (u32)r2;
    r3 = *(u32*)(r0 + 0x3C);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0801344E;
    r2 = 0x2CU;
loc_08013458:
    *(u32*)(r0 + 0x40) = (u32)r2;
    r3 = *(u32*)(r0 + 0x40);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08013458;
    r2 = 0x4DU;
loc_08013462:
    *(u32*)(r0 + 0x44) = (u32)r2;
    r3 = *(u32*)(r0 + 0x44);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08013462;
    r2 = 0x70U;
loc_0801346C:
    *(u32*)(r0 + 0x48) = (u32)r2;
    r3 = *(u32*)(r0 + 0x48);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_0801346C;
    r3 = *(u8*)(r1 + 0xB);
    r2 = 0x0U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    *(u8*)(r0 + 0xC) = (u8)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_0801348E;
loc_0801347E:
    r3 = r1 + r2;
    r3 = *(u8*)(r3 + 0xC);
    r4 = r0 + r2;
    r2 += 0x1U;
    *(u8*)(r4 + 0xD) = (u8)r3;
    r3 = *(u8*)(r0 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_0801347E;
loc_0801348E:
    return r0; // BX lr
    r1 = *(u8*)(r0 + 0x14);
    r2 = 0x086B82ECU; // [0x08013614]
    r3 = (r1 << 1);
    r1 = r3 + r1;
    r1 = (r1 << 3);
    r1 = r1 + r2;
    r1 = *(u8*)(r1);
    r2 = (r1 << 30);
    r2 = (r2 >> 31);
    if (cmp_lhs == cmp_rhs) goto loc_080134AA;
    r0 = *(u16*)(r0 + 0x20);
    return r0; // BX lr
loc_080134AA:
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_080134B2;
    r0 = *(u16*)(r0 + 0x1E);
    return r0; // BX lr
loc_080134B2:
    r3 = 0x1AU;
    r0 = (u32)(*(s16*)(r0 + r3));
    return r0; // BX lr
    r2 = 0x56U;
    r2 = *(u8*)(r2 + r0);
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 4));
    r2 = *(u8*)(r0 + 0x14);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r3 = 0x086B82ECU; // [0x08013614]
    r2 = (r2 << 3);
    r2 = r2 + r3;
    r2 = *(u8*)(r2);
    r3 = (r2 << 30);
    r3 = (r3 >> 31);
    if (cmp_lhs == cmp_rhs) return sub_080134E2(r0, r1, r2, r3);
    r0 = *(u16*)(r0 + 0x20);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_080134DE(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080134DE..0x080134E2 (4 bytes, Thumb)
u32 sub_080134DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080134E2..0x080134F0 (14 bytes, Thumb)
u32 sub_080134E2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = (r2 << 31);
    if (cmp_lhs == cmp_rhs) return sub_080134F4(r0, r1, r2, r3);
    r0 = *(u16*)(r0 + 0x1E);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_080134F0(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080134F0..0x080134F4 (4 bytes, Thumb)
u32 sub_080134F0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x080134F4..0x08013500 (12 bytes, Thumb)
u32 sub_080134F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x1AU;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if (cmp_lhs < cmp_rhs) return sub_08013500(r0, r1, r2, r3);
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x08013500..0x08013504 (4 bytes, Thumb)
u32 sub_08013500(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x0U;
    return r0; // BX lr
}

// ROM Address: 0x08013504..0x08013536 (50 bytes, Thumb)
u32 sub_08013504(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r0 + 0x14);
    r3 = (r2 << 1);
    r2 = r3 + r2;
    r3 = 0x086B82ECU; // [0x08013614]
    r2 = (r2 << 3);
    r2 = r2 + r3;
    r4 = *(u8*)(r2);
    r3 = (r1 << 16);
    r3 = (r3 >> 16);
    r2 = (r4 << 30);
    r5 = (r2 >> 31);
    r2 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08013548(r0, r1, r2, r3);
    r4 = *(u16*)(r0 + 0x20);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) return sub_08013536(r0, r1, r2, r3);
    r1 = r2;
loc_0801352A:
    *(u16*)(r0 + 0x20) = (u16)r1;
    r2 = *(u16*)(r0 + 0x20);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0801352A;
    return r0; // BX lr
}

// ROM Address: 0x08013536..0x08013598 (98 bytes, Thumb)
u32 sub_08013536(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u16*)(r0 + 0x20);
    r1 = r1 - r3;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_0801353E:
    *(u16*)(r0 + 0x20) = (u16)r1;
    r2 = *(u16*)(r0 + 0x20);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0801353E;
    return sub_08013532(r0, r1, r2, r3);
    r4 = (r4 << 31);
    if (cmp_lhs == cmp_rhs) goto loc_08013570;
    r4 = *(u16*)(r0 + 0x1E);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_0801355E;
    r1 = r2;
loc_08013554:
    *(u16*)(r0 + 0x1E) = (u16)r1;
    r2 = *(u16*)(r0 + 0x1E);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013554;
    return sub_08013532(r0, r1, r2, r3);
loc_0801355E:
    r1 = *(u16*)(r0 + 0x1E);
    r1 = r1 - r3;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_08013566:
    *(u16*)(r0 + 0x1E) = (u16)r1;
    r2 = *(u16*)(r0 + 0x1E);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013566;
    return sub_08013532(r0, r1, r2, r3);
loc_08013570:
    r3 = 0x1AU;
    r4 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs >= cmp_rhs) goto loc_08013584;
loc_08013578:
    *(u16*)(r0 + 0x1A) = (u16)r2;
    r3 = 0x1AU;
    r1 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08013578;
    return sub_08013532(r0, r1, r2, r3);
loc_08013584:
    r2 = *(u16*)(r0 + 0x1A);
    r1 = r2 - r1;
    r1 = (r1 << 16);
    r1 = ((u32)((s32)r1 >> 16));
loc_0801358C:
    *(u16*)(r0 + 0x1A) = (u16)r1;
    r3 = 0x1AU;
    r2 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_0801358C;
    return sub_08013532(r0, r1, r2, r3);
}

// ROM Address: 0x08013598..0x0801360A (114 bytes, Thumb)
u32 sub_08013598(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x56U;
    r2 = *(u8*)(r2 + r0);
    r2 *= r1;
    r1 = ((u32)((s32)r2 >> 4));
    return sub_08013504(r0, r1, r2, r3);
    r3 = *(u8*)(r0 + 0xC);
    r2 = 0x0871DAF8U; // [0x08013618]
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080135AE;
    r0 = r2;
    return r0; // BX lr
loc_080135AE:
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0xD);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r2;
    return r0; // BX lr
    r2 = 0x086B7084U; // [0x08013610]
    r1 = (r1 << 2);
    r1 = r1 + r2;
    r1 -= 0x100U;
    r1 = *(u32*)(r1 + 0x38);
loc_080135C8:
    *(u32*)(r0 + 0x24) = (u32)r1;
    r2 = *(u32*)(r0 + 0x24);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080135C8;
    return r0; // BX lr
    r3 = *(u32*)(r0 + 0x24);
    r1 = 0x0U;
    r2 = 0x96U;
    r5 = 0x086B7084U; // [0x08013610]
loc_080135DC:
    r0 = r1 + r2;
    r0 = ((u32)((s32)r0 >> 1));
    r4 = (r0 << 2);
    r4 = *(u32*)(r5 + r4);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_080135EC;
    r2 = r0 - 1;
    goto loc_080135F2;
loc_080135EC:
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r4;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_0801360A(r0, r1, r2, r3);
    r1 = r0 + 1;
loc_080135F2:
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs < cmp_rhs) goto loc_080135DC;
    r2 = (r1 << 2);
    r2 = *(u32*)(r5 + r2);
    r0 = 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) goto loc_08013602;
    r0 = 0x0U;
loc_08013602:
    r0 = r0 + r1;
    r0 += 0x31U;
    return r0; // BX lr
}

// ROM Address: 0x0801360A..0x0801360E (4 bytes, Thumb)
u32 sub_0801360A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x32U;
    return sub_08013606(r0, r1, r2, r3);
}

// ROM Address: 0x0801360E..0x08013908 (762 bytes, Thumb)
u32 sub_0801360E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u8*)(r0 + 0x2) = (u8)r4;
    r3 = (r5 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    if (cmp_lhs >= cmp_rhs) return sub_0801360C(r0, r1, r2, r3);
    r1 = (r6 >> 1);
    r4 = r0;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x08013620
    cmp_lhs = (s32)r0; cmp_rhs = 200;
    if (cmp_lhs < cmp_rhs) goto loc_0801362C;
    r0 = 0x0U;
    return r0;
loc_0801362C:
    r1 = *(u32*)(r4 + 0x24);
    r2 = 0x086B7084U; // [0x08013908]
    r0 = (r0 << 2);
    r0 = r0 + r2;
    r0 -= 0x100U;
    r0 = *(u32*)(r0 + 0x3C);
    r0 = r0 - r1;
    return r0;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x24);
    r5 = r1;
    r6 = 0x086B7084U; // [0x08013908]
    r1 = 0x240U; // (9 << 6)
    r1 = r6 + r1;
    r1 = *(u32*)(r1 + 0x18);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08013658;
    r0 = r5;
    return r0;
loc_08013658:
    r0 = r4;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x0801365A
    r1 = *(u32*)(r4 + 0x24);
    r0 = (r0 << 2);
    r2 = r0 + r6;
    r2 -= 0x100U;
    r0 = *(u32*)(r2 + 0x38);
    r2 = *(u32*)(r2 + 0x3C);
    r1 = r1 - r0;
    r0 = r2 - r0;
    r1 *= r5;
    r0 = sub_08046F30(r0, r1, r2, r3); // 0x08013672: BL 0x08046F30
    return r0;
    r4 = r0;
    r0 = *(u8*)(r0 + 0x14);
    r1 = 0x086B82ECU; // [0x0801390C]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0xC);
    r1 = 0x086B72E0U; // [0x08013910]
    r6 = stack[5]; // [sp + 0x14]
    r0 = (r0 << 5);
    r5 = r0 + r1;
    r7 = r2;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if (cmp_lhs >= cmp_rhs) goto loc_08013742;
loc_0801369A:
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x0801369E
    stack[3] = r0; // [sp + 0xC]
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080136A8
    stack[2] = r0; // [sp + 0x8]
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080136B2
    stack[1] = r0; // [sp + 0x4]
    r0 = 0xFFU;
    r0 += 0x1U;
    r0 = sub_0803FACC(r0, r1, r2, r3); // 0x080136BC
    r3 = 0x18U;
    r1 = (u32)(*(s16*)(r4 + r3));
    r2 = *(u32*)(r5);
    r3 = stack[3]; // [sp + 0xC]
    r2 *= r3;
    r3 = *(u32*)(r5 + 0x4);
    r2 = (r2 >> 8);
    r2 = r2 + r3;
    r2 = (r2 >> 16);
    r1 = r2 + r1;
    r2 = *(u32*)(r5 + 0x8);
    r3 = stack[2]; // [sp + 0x8]
    r2 *= r3;
    r3 = *(u32*)(r5 + 0xC);
    r2 = (r2 >> 8);
    r2 = r2 + r3;
    r2 *= r1;
    r2 = (r2 >> 16);
    r1 = r2 + r1;
    r1 = (r1 << 16);
    r1 = ((u32)((s32)r1 >> 16));
loc_080136EA:
    *(u16*)(r4 + 0x16) = (u16)r1;
    r3 = 0x16U;
    r2 = (u32)(*(s16*)(r4 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080136EA;
loc_080136F4:
    *(u16*)(r4 + 0x18) = (u16)r1;
    r3 = 0x18U;
    r2 = (u32)(*(s16*)(r4 + r3));
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_080136F4;
    r3 = 0x1CU;
    r1 = (u32)(*(s16*)(r4 + r3));
    r2 = *(u32*)(r5 + 0x10);
    r3 = stack[1]; // [sp + 0x4]
    r2 *= r3;
    r3 = *(u32*)(r5 + 0x14);
    r2 = r2 + r3;
    r2 = (r2 >> 16);
    r1 = r2 + r1;
    r2 = *(u32*)(r5 + 0x18);
    r2 *= r0;
    r0 = (r2 >> 8);
    r2 = *(u32*)(r5 + 0x1C);
    r0 = r0 + r2;
    r0 *= r1;
    r0 = (r0 >> 16);
    r0 = r0 + r1;
    r0 = (r0 << 16);
    r0 = ((u32)((s32)r0 >> 16));
    r2 = r0;
loc_08013726:
    *(u16*)(r4 + 0x1A) = (u16)r0;
    r3 = 0x1AU;
    r1 = (u32)(*(s16*)(r4 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08013726;
    r0 = r2;
loc_08013732:
    *(u16*)(r4 + 0x1C) = (u16)r0;
    r3 = 0x1CU;
    r1 = (u32)(*(s16*)(r4 + r3));
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08013732;
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if (cmp_lhs < cmp_rhs) goto loc_0801369A;
loc_08013742:
    r6 = stack[5]; // [sp + 0x14]
    r1 = *(u16*)(r4 + 0x2C);
    r0 = r7 - r6;
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = r1 + r0;
    r0 = (r0 << 16);
    r0 = (r0 >> 16);
loc_08013752:
    *(u16*)(r4 + 0x2C) = (u16)r0;
    r1 = *(u16*)(r4 + 0x2C);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08013752;
    return r0;
    r4 = *(u8*)(r1 + 0x14);
    r6 = r3;
    r7 = *(u8*)(r2 + 0x14);
    r3 = (r4 << 1);
    r3 = r3 + r4;
    r4 = 0x086B82ECU; // [0x0801390C]
    r3 = (r3 << 3);
    r3 = r3 + r4;
    r5 = *(u8*)(r3 + 0xC);
    r3 = (r7 << 1);
    r3 = r3 + r7;
    r3 = (r3 << 3);
    r3 = r3 + r4;
    r3 = *(u8*)(r3 + 0xC);
    r3 = (r3 << 4);
    r3 = r5 + r3;
    r5 = (r6 << 8);
    r3 = r3 + r5;
    *(u16*)(r0 + 0x2) = (u16)r3;
    r3 = 0x086B7084U; // [0x08013908]
    r6 = *(u8*)(r0 + 0x14);
    r3 -= 0x4U;
    r5 = *(u32*)(r3);
    r3 = (r6 << 1);
    r3 = r3 + r6;
    r3 = (r3 << 3);
    r3 = r3 + r4;
    r4 = *(u8*)(r3 + 0xC);
    r3 = 0x68U;
    r3 *= r4;
    r4 = 0x4F8U; // (159 << 3)
    r3 = r3 + r5;
    r3 = r3 + r4;
    r4 = *(u8*)(r3);
    r5 = 0x1U;
    r4 |= r5;
    *(u8*)(r3) = (u8)r4;
    r4 = r1;
    r4 += 0x18U;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r4 + r3));
    r5 = r2;
    r5 += 0x18U;
    r5 = (u32)(*(s16*)(r5 + r3));
    r4 = r4 + r5;
    r3 = 0x9AU;
    r3 *= r4;
    r3 = ((u32)((s32)r3 >> 8));
    r4 = (r3 << 16);
    r4 = ((u32)((s32)r4 >> 16));
loc_080137C6:
    *(u16*)(r0 + 0x18) = (u16)r4;
    r3 = 0x18U;
    r5 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_080137C6;
    r4 = r1;
    r4 += 0x16U;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r4 + r3));
    r5 = r2;
    r5 += 0x16U;
    r5 = (u32)(*(s16*)(r5 + r3));
    r4 = r4 + r5;
    r3 = 0x9AU;
    r3 *= r4;
    r3 = ((u32)((s32)r3 >> 8));
    r4 = (r3 << 16);
    r4 = ((u32)((s32)r4 >> 16));
loc_080137EA:
    *(u16*)(r0 + 0x16) = (u16)r4;
    r3 = 0x16U;
    r5 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_080137EA;
    r4 = r1;
    r4 += 0x1CU;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r4 + r3));
    r5 = r2;
    r5 += 0x1CU;
    r5 = (u32)(*(s16*)(r5 + r3));
    r4 = r4 + r5;
    r3 = 0x9AU;
    r3 *= r4;
    r3 = ((u32)((s32)r3 >> 8));
    r4 = (r3 << 16);
    r4 = ((u32)((s32)r4 >> 16));
loc_0801380E:
    *(u16*)(r0 + 0x1C) = (u16)r4;
    r3 = 0x1CU;
    r5 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_0801380E;
    r4 = r1;
    r4 += 0x1AU;
    r3 = 0x0U;
    r4 = (u32)(*(s16*)(r4 + r3));
    r5 = r2;
    r5 += 0x1AU;
    r5 = (u32)(*(s16*)(r5 + r3));
    r4 = r4 + r5;
    r3 = 0x9AU;
    r3 *= r4;
    r3 = ((u32)((s32)r3 >> 8));
    r4 = (r3 << 16);
    r4 = ((u32)((s32)r4 >> 16));
loc_08013832:
    *(u16*)(r0 + 0x1A) = (u16)r4;
    r3 = 0x1AU;
    r5 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08013832;
    r3 = r1;
    r3 += 0x24U;
    r3 = *(u32*)(r3);
    r4 = r2;
    r4 += 0x24U;
    r4 = *(u32*)(r4);
    r3 = r3 + r4;
    r3 = (r3 >> 1);
loc_0801384C:
    *(u32*)(r0 + 0x24) = (u32)r3;
    r4 = *(u32*)(r0 + 0x24);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_0801384C;
    r3 = r0;
    r3 += 0x28U;
    r4 = r1;
    r4 += 0x28U;
    r4 = *(u8*)(r4);
    r5 = r2;
    r5 += 0x28U;
    r5 = *(u8*)(r5);
    r4 = r4 + r5;
    r4 = (r4 >> 1);
    r4 += 0xAU;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
loc_0801386E:
    *(u8*)(r3) = (u8)r4;
    r5 = *(u8*)(r3);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_0801386E;
    r3 = r0;
    r3 += 0x29U;
    r4 = r1;
    r4 += 0x29U;
    r4 = *(u8*)(r4);
    r5 = r2;
    r5 += 0x29U;
    r5 = *(u8*)(r5);
    r4 = r4 + r5;
    r4 = (r4 >> 1);
    r4 += 0xAU;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
loc_08013890:
    *(u8*)(r3) = (u8)r4;
    r5 = *(u8*)(r3);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_08013890;
    r3 = r0;
    r3 += 0x2AU;
    r4 = r1;
    r4 += 0x2AU;
    r4 = *(u8*)(r4);
    r5 = r2;
    r5 += 0x2AU;
    r5 = *(u8*)(r5);
    r4 = r4 + r5;
    r4 = (r4 >> 1);
    r4 += 0xAU;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
loc_080138B2:
    *(u8*)(r3) = (u8)r4;
    r5 = *(u8*)(r3);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_080138B2;
    r3 = r0;
    r3 += 0x2BU;
    r4 = r1;
    r4 += 0x2BU;
    r4 = *(u8*)(r4);
    r5 = r2;
    r5 += 0x2BU;
    r5 = *(u8*)(r5);
    r4 = r4 + r5;
    r4 = (r4 >> 1);
    r4 += 0x10U;
    r4 = (r4 << 24);
    r4 = (r4 >> 24);
loc_080138D4:
    *(u8*)(r3) = (u8)r4;
    r5 = *(u8*)(r3);
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r4;
    if (cmp_lhs != cmp_rhs) goto loc_080138D4;
    r3 = 0x0U;
loc_080138DE:
    r5 = (r3 << 2);
    r4 = r5 + r0;
    r4 += 0x3CU;
    stack[0] = r4; // [sp + 0x0]
    r4 = r5 + r1;
    r4 += 0x3CU;
    r6 = *(u32*)(r4);
    r5 = r5 + r2;
    r5 += 0x3CU;
    r7 = *(u32*)(r5);
    cmp_lhs = (s32)r6; cmp_rhs = (s32)r7;
    if (cmp_lhs > cmp_rhs) goto loc_080138F8;
    r4 = r5;
loc_080138F8:
    r4 = *(u32*)(r4);
    r5 = stack[0]; // [sp + 0x0]
    *(u32*)(r5) = (u32)r4;
    r3 += 0x1U;
    cmp_lhs = (s32)r3; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_080138DE;
    return r0; // BX lr
}

// ROM Address: 0x08013908..0x08013914 (12 bytes, Thumb)
u32 sub_08013908(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r0 + 0x2) = (u8)r4;
    r3 = (r5 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    *(u8*)(r4 + 0xB) = (u8)r0;
    r3 = (r5 >> 1);
    return r0;
}

// Evidence: 0x080043E8 calls it from the award-to-active wrapper; when the HP halfword at +0x16 is not zero its 16 bytes branch to Stats_AwardXp at the next start
// ROM Address: 0x08013914..0x08013924 (16 bytes, Thumb)
u32 Stats_AwardXpIfAlive(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r5 = r1;
    r3 = 0x16U;
    r0 = (u32)(*(s16*)(r0 + r3));
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) return Stats_AwardXp(r0, r1, r2, r3);
    return r0;
}

// Evidence: 0x080139F4 stores the awarded XP at +0x24
// ROM Address: 0x08013924..0x08013A90 (364 bytes, Thumb)
u32 Stats_AwardXp(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u8*)(r4 + 0x14);
    r1 = 0x086B82ECU; // [0x08013B9C]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0);
    r2 = (r0 << 27);
    r2 = (r2 >> 31);
    if (cmp_lhs != cmp_rhs) goto loc_0801393C;
    r0 = 0x0U;
    return sub_08013922(r0, r1, r2, r3);
loc_0801393C:
    r0 = (r0 << 29);
    r0 = (r0 >> 31);
    r7 = 0x086B7080U; // [0x08013BA0]
    if (cmp_lhs == cmp_rhs) goto loc_080139EC;
    r0 = r7;
    r0 = *(u32*)(r0);
    r1 = *(u16*)(r4 + 0x2);
    r3 = 0x68U;
    r7 = 0x9FU;
    r1 = (r1 << 28);
    r1 = (r1 >> 28);
    r1 *= r3;
    r0 = r1 + r0;
    r7 = (r7 << 3);
    r0 = r0 + r7;
    r6 = 0x0U;
    r1 = r5;
    r0 = Stats_AwardXpIfAlive(r0, r1, r2, r3); // 0x0801395E: BL 0x08013914
    r6 |= r0;
    r0 = 0x086B7080U; // [0x08013BA0]
    r3 = 0x68U;
    r0 = *(u32*)(r0);
    r1 = *(u16*)(r4 + 0x2);
    r1 = (r1 << 24);
    r1 = (r1 >> 28);
    r1 *= r3;
    r0 = r1 + r0;
    r0 = r0 + r7;
    r1 = r5;
    r0 = Stats_AwardXpIfAlive(r0, r1, r2, r3); // 0x08013978: BL 0x08013914
    r0 |= r6;
    r5 = r0;
    if (cmp_lhs == cmp_rhs) goto loc_080139E8;
    r0 = *(u16*)(r4 + 0x2);
    r3 = 0x68U;
    r7 = 0x086B7080U; // [0x08013BA0]
    r2 = (r0 << 24);
    r2 = (r2 >> 28);
    r6 = (r0 >> 8);
    r0 = (r0 << 28);
    r0 = (r0 >> 28);
    r1 = *(u32*)(r7);
    r2 *= r3;
    r2 = r2 + r1;
    r1 = 0x9FU;
    r7 = *(u32*)(r7);
    r0 *= r3;
    r1 = (r1 << 3);
    r2 = r2 + r1;
    r0 = r0 + r7;
    r1 = r0 + r1;
    r3 = r6;
    r0 = r4;
    r0 = sub_0801375E(r0, r1, r2, r3); // 0x080139AA
    r1 = *(u16*)(r4 + 0x18);
    r6 = 0x03001C34U; // [0x08013BA4]
    *(u16*)(r4 + 0x16) = (u16)r1;
    r1 = *(u16*)(r4 + 0x1C);
    *(u16*)(r4 + 0x1A) = (u16)r1;
    r0 = *(u32*)(r6);
    r4 = 0x0U;
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080139E8;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x080139C8: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080139D8;
    r4 = 0x1U;
    r0 = *(u32*)(r6);
    r0 = sub_0800F53C(r0, r1, r2, r3); // 0x080139D4
loc_080139D8:
    r0 = *(u32*)(r6);
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x080139DA
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080139E8;
    r0 = *(u32*)(r6);
    r0 = sub_0800F558(r0, r1, r2, r3); // 0x080139E4
loc_080139E8:
    r0 = r5;
    return sub_08013922(r0, r1, r2, r3);
loc_080139EC:
    r0 = r4;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x080139EE
    r6 = r0;
    r0 = *(u32*)(r4 + 0x24);
    r0 = r0 + r5;
loc_080139F8:
    *(u32*)(r4 + 0x24) = (u32)r0;
    r1 = *(u32*)(r4 + 0x24);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_080139F8;
    cmp_lhs = (s32)r6; cmp_rhs = 200;
    if (cmp_lhs < cmp_rhs) goto loc_08013A08;
    r0 = 0x0U;
    return sub_08013922(r0, r1, r2, r3);
loc_08013A08:
    r0 = *(u32*)(r4 + 0x24);
    r2 = 0x086B7080U; // [0x08013BA0]
    r1 = (r6 << 2);
    r2 += 0x4U;
    r1 = r1 + r2;
    r1 -= 0x100U;
    r1 = *(u32*)(r1 + 0x3C);
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r1;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) goto loc_08013A20;
    r0 = 0x0U;
    return sub_08013922(r0, r1, r2, r3);
loc_08013A20:
    r0 = r4;
    r0 = sub_080135D2(r0, r1, r2, r3); // 0x08013A22
    r2 = r0;
    r1 = r6;
    r0 = r4;
    r0 = sub_08013678(r0, r1, r2, r3); // 0x08013A2C
    r6 = 0x03001C34U; // [0x08013BA4]
    r5 = 0x0U;
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013A52;
    r0 = *(u32*)(r0 + 0x14);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x14);
    r1 = r2 + r1;
    r0 = sub_08046AA0(r0, r1, r2, r3); // 0x08013A42: BL 0x08046AA2
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013A52;
    r5 = 0x1U;
    r0 = *(u32*)(r6);
    r0 = sub_0800F53C(r0, r1, r2, r3); // 0x08013A4E
loc_08013A52:
    r0 = *(u32*)(r7);
    r1 = 0x086B82ECU; // [0x08013B9C]
    r0 = *(u8*)(r0);
    stack[0] = r0; // [sp + 0x0]
    r0 = *(u8*)(r4 + 0x14);
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 3);
    r0 = r0 + r1;
    r0 = *(u8*)(r0 + 0xC);
    r1 = *(u32*)(r7);
    *(u8*)(r1) = (u8)r0;
    r1 = 0x0U;
    r0 = 0x0877C9E8U /* EventPoolRecord */; // [0x08013BA8]
    r0 = sub_08012588(r0, r1, r2, r3); // 0x08013A6E: BL 0x08012588
    r0 = stack[0]; // [sp + 0x0]
    r1 = *(u32*)(r7);
    *(u8*)(r1) = (u8)r0;
    r0 = *(u32*)(r6);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013A8C;
    r0 = sub_0801064C(r0, r1, r2, r3); // 0x08013A7E
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013A8C;
    r0 = *(u32*)(r6);
    r0 = sub_0800F558(r0, r1, r2, r3); // 0x08013A88
loc_08013A8C:
    r0 = 0x1U;
    return sub_08013922(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_list_append_byte1_writes_the_byte_after_the_count_and_clears_the_tail_slots runs it on a crafted object at 0x02000000 and asserts the 4 stores it makes; writes the byte argument after the count at +0xC and clears the two tail slots at +0x2E
// ROM Address: 0x08013A90..0x08013B2C (156 bytes, Thumb)
u32 List_AppendByte1(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r0 + 0xC);
    r2 = r2 + r0;
    *(u8*)(r2 + 0xD) = (u8)r1;
    r1 = *(u8*)(r0 + 0xC);
    r1 = (r1 << 1);
    r1 = r1 + r0;
    r1 += 0x2EU;
    r2 = 0x0U;
loc_08013AA0:
    *(u8*)(r1) = (u8)r2;
    r3 = *(u8*)(r1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08013AA0;
    r2 = 0x0U;
loc_08013AAA:
    *(u8*)(r1 + 0x1) = (u8)r2;
    r3 = *(u8*)(r1 + 0x1);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) goto loc_08013AAA;
    r1 = *(u8*)(r0 + 0xC);
    r1 += 0x1U;
    *(u8*)(r0 + 0xC) = (u8)r1;
    return r0; // BX lr
    r2 = *(u8*)(r0 + 0xC);
    r5 = 0x0U;
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08013B0E;
    r6 = 0x0U;
loc_08013AC6:
    r2 = r0 + r5;
    r2 = *(u8*)(r2 + 0xD);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013B06;
    r2 = *(u8*)(r0 + 0xC);
    r2 += 0xFFU;
    r3 = (r2 << 24);
    r3 = (r3 >> 24);
    r2 = r5;
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r5;
    *(u8*)(r0 + 0xC) = (u8)r3;
    if (cmp_lhs <= cmp_rhs) goto loc_08013AFC;
loc_08013ADE:
    r3 = r0 + r2;
    r4 = *(u8*)(r3 + 0xE);
    *(u8*)(r3 + 0xD) = (u8)r4;
    r3 = (r2 << 1);
    r4 = r3 + r0;
    r3 = r4;
    r3 += 0x20U;
    r7 = *(u8*)(r3 + 0x10);
    r2 += 0x1U;
    *(u8*)(r3 + 0xE) = (u8)r7;
    r7 = *(u8*)(r3 + 0x11);
    *(u8*)(r3 + 0xF) = (u8)r7;
    r3 = *(u8*)(r0 + 0xC);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08013ADE;
loc_08013AFC:
    r2 = *(u8*)(r0 + 0x15);
    r3 = *(u8*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08013B06;
    *(u8*)(r0 + 0x15) = (u8)r6;
loc_08013B06:
    r2 = *(u8*)(r0 + 0xC);
    r5 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r5;
    if (cmp_lhs > cmp_rhs) goto loc_08013AC6;
loc_08013B0E:
    return r0; // BX lr
    r5 = *(u8*)(r0 + 0xC);
    r3 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08013B28;
    r4 = r0 + r3;
    r4 = *(u8*)(r4 + 0xD);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08013B2C(r0, r1, r2, r3);
    r0 = r0 + r3;
    *(u8*)(r0 + 0xD) = (u8)r2;
loc_08013B28:
    return r0; // BX lr
}

// ROM Address: 0x08013B2C..0x08013B34 (8 bytes, Thumb)
u32 sub_08013B2C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) return sub_08013B1C(r0, r1, r2, r3);
    return sub_08013B28(r0, r1, r2, r3);
}

// ROM Address: 0x08013B34..0x08013B84 (80 bytes, Thumb)
u32 sub_08013B34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u8*)(r0 + 0xC);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08013B3E;
    r0 = 0x0U;
    return r0; // BX lr
loc_08013B3E:
    r1 = *(u8*)(r0 + 0x15);
    r1 += 0x1U;
    r1 = (r1 << 24);
    r1 = (r1 >> 24);
    *(u8*)(r0 + 0x15) = (u8)r1;
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if ((u32)cmp_lhs < (u32)cmp_rhs) goto loc_08013B50;
    r1 = 0x0U;
    *(u8*)(r0 + 0x15) = (u8)r1;
loc_08013B50:
    r0 = 0x1U;
    return r0; // BX lr
    r5 = *(u8*)(r0 + 0xC);
    r3 = 0x0U;
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) return sub_08013B8A(r0, r1, r2, r3);
    r4 = r0 + r3;
    r4 = *(u8*)(r4 + 0xD);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08013B84(r0, r1, r2, r3);
    r1 = (r3 << 1);
    r0 = r1 + r0;
    r1 = (r2 << 24);
    r1 = (r1 >> 24);
    r0 += 0x2EU;
    r3 = r1;
loc_08013B72:
    *(u8*)(r0) = (u8)r1;
    r2 = *(u8*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013B72;
loc_08013B7A:
    *(u8*)(r0 + 0x1) = (u8)r3;
    r1 = *(u8*)(r0 + 0x1);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r3;
    if (cmp_lhs != cmp_rhs) goto loc_08013B7A;
    return r0;
}

// ROM Address: 0x08013B84..0x08013B94 (16 bytes, Thumb)
u32 sub_08013B84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = (s32)r3;
    if (cmp_lhs > cmp_rhs) return sub_08013B5E(r0, r1, r2, r3);
    r3 = 0x0U;
    r2 = 0xFFU;
    r2 += 0x81U;
    r1 = 0x08013BACU;
    r0 = 0x086B7400U; // [0x08013BC8]
    return r0;
}

// ROM Address: 0x08013B9A..0x08013D02 (360 bytes, Thumb)
u32 sub_08013B9A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    *(u8*)(r0 + 0x2) = (u8)r0;
    r3 = (r5 >> 1);
    r4 = r6;
    r0 = (r0 << 12);
    r3 = *(u32*)r1; r1 += 4;
    r5 = *(u32*)r1; r1 += 4;
    r6 = *(u32*)r1; r1 += 4;
    r7 = *(u32*)r1; r1 += 4;
    r7 = (r6 >> 1);
    r2 -= 0x54U;
    *(u16*)(r3 + r5) = (u16)r4;
    *(u8*)(r5 + 0x15) = (u8)r7;
    *(u32*)(r6 + 0x34) = (u32)r2;
    r5 = *(u8*)(r4 + r1);
    r3 = *(u32*)(r0 + 0x4);
    *(u8*)(r4 + 0x9) = (u8)r1;
    *(u32*)(r4 + 0x34) = (u32)r1;
    *(u32*)(r6 + 0x54) = (u32)r4;
    r2 += lr;
    *(u8*)(r4 + 0x11) = (u8)r1;
    cmp_lhs = (s32)r6; cmp_rhs = 97;
    *(u8*)(r4 + 0x1) = (u8)r3;
    r0 = (r6 << 1);
    *(u8*)(r0 + 0x10) = (u8)r0;
    r3 = (r5 >> 1);
    r4 = *(u8*)(r0 + 0xC);
    r2 = 0x0U;
    cmp_lhs = (s32)r4; cmp_rhs = 0;
    if (cmp_lhs <= cmp_rhs) goto loc_08013BEE;
loc_08013BD6:
    r3 = r0 + r2;
    r3 = *(u8*)(r3 + 0xD);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013BE8;
    r1 = (r2 << 1);
    r0 = r1 + r0;
    r0 += 0x2FU;
    r0 = *(u8*)(r0);
    return r0;
loc_08013BE8:
    r2 += 0x1U;
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r2;
    if (cmp_lhs > cmp_rhs) goto loc_08013BD6;
loc_08013BEE:
    r2 = 0xFFU;
    r2 += 0x8EU;
    r3 = 0x0U;
    r1 = 0x08013BF8U;
    r1 -= 0x4CU;
    r0 = 0x086B748CU; // [0x08013E20]
    r0 = Irq_WriteMaster1(r0, r1, r2, r3); // 0x08013BFA: BL 0x0803DF14
    r0 = 0x0U;
    return r0;
    r2 = 0x03002B5CU; // [0x08013E24]
    r3 = 0x16U;
    r5 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r2 + 0x14);
    r3 = r4 + r5;
    *(u32*)(r2 + 0x14) = (u32)r3;
    r3 = 0x17U;
    r5 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r2 + 0x18);
    r3 = r4 + r5;
    *(u32*)(r2 + 0x18) = (u32)r3;
    r3 = 0x18U;
    r5 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r2 + 0x1C);
    r3 = r4 + r5;
    *(u32*)(r2 + 0x1C) = (u32)r3;
    r3 = 0x19U;
    r5 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r2 + 0x20);
    r3 = r4 + r5;
    *(u32*)(r2 + 0x20) = (u32)r3;
    r3 = 0x1AU;
    r5 = (u32)(*(s8*)(r1 + r3));
    r4 = *(u32*)(r2 + 0x24);
    r3 = r4 + r5;
    *(u32*)(r2 + 0x24) = (u32)r3;
    r3 = *(u16*)(r2 + 0x4);
    r4 = *(u32*)(r1 + 0x1C);
    r3 = r3 + r4;
    *(u16*)(r2 + 0x4) = (u16)r3;
    r2 = *(u32*)(r1 + 0x28);
    cmp_lhs = (s32)r2; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013C62;
    r3 = 0x24U;
    r3 = *(u8*)(r3 + r1);
    r2 = *(u8*)(r0 + 0x13);
    r2 |= r3;
    *(u8*)(r0 + 0x13) = (u8)r2;
    r0 = 0x0U;
    r1 = *(u32*)(r1 + 0x28);
    stack[0] = r0; // [sp + 0x0]
    stack[17] = r0; // [sp + 0x44]
    r0 = sp;
    r2 = 0x0U;
    r0 = sub_08004038(r0, r1, r2, r3); // 0x08013C5E
loc_08013C62:
    return r0;
    r5 = r0;
    r0 += 0x28U;
    r0 = *(u8*)(r0);
    r4 = 0x03002B5CU; // [0x08013E24]
    *(u32*)(r4 + 0x14) = (u32)r0;
    r0 = r5;
    r0 += 0x29U;
    r0 = *(u8*)(r0);
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = r5;
    r0 += 0x2AU;
    r1 = *(u8*)(r0);
    *(u32*)(r4 + 0x1C) = (u32)r1;
    r0 = *(u8*)(r0);
    *(u32*)(r4 + 0x20) = (u32)r0;
    r0 = r5;
    r0 += 0x2BU;
    r0 = *(u8*)(r0);
    *(u32*)(r4 + 0x24) = (u32)r0;
    r0 = 0xFFU;
    r0 += 0x1U;
    *(u16*)(r4 + 0x4) = (u16)r0;
    *(u16*)(r4 + 0x6) = (u16)r0;
    r0 = 0x0U;
    *(u16*)(r4 + 0x8) = (u16)r0;
    r0 = 0xFFU;
    r0 += 0x1U;
    *(u16*)(r4 + 0xA) = (u16)r0;
    r0 = (r0 << 4);
    *(u16*)(r4 + 0xC) = (u16)r0;
    r0 = 0x10U;
    *(u8*)(r4 + 0x1) = (u8)r0;
    *(u8*)(r4 + 0x2) = (u8)r0;
    r0 = (r0 << 10);
    *(u16*)(r4 + 0xE) = (u16)r0;
    r0 = 0x0U;
    *(u16*)(r4 + 0x10) = (u16)r0;
    r1 = r4;
    r1 += 0x28U;
    *(u8*)(r4) = (u8)r0;
    stack[0] = r1; // [sp + 0x0]
loc_08013CBA:
    *(u8*)(r1) = (u8)r0;
    r2 = *(u8*)(r1);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08013CBA;
    r7 = r0;
    r6 = 0x0U;
    *(u8*)(r5 + 0x13) = (u8)r0;
loc_08013CC8:
    r0 = (r6 << 2);
    r0 = r0 + r5;
    r0 += 0x3CU;
    r0 = *(u32*)(r0);
    r3 = 0x2CU;
    r1 = 0x086F82ECU; // [0x08013E28]
    r0 *= r3;
    r1 = r0 + r1;
    r0 = r5;
    r0 = sub_08013C02(r0, r1, r2, r3); // 0x08013CDA
    r6 += 0x1U;
    cmp_lhs = (s32)r6; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) goto loc_08013CC8;
    r0 = 0x086B7080U; // [0x08013E2C]
    r1 = r4;
    r0 = *(u32*)(r0);
    r0 = sub_080046AE(r0, r1, r2, r3); // 0x08013CEA
    r0 = r5;
    r1 = *(u32*)(r4 + 0x14);
    r0 += 0x4CU;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08013D02(r0, r1, r2, r3);
loc_08013CF8:
    *(u16*)(r0) = (u16)r7;
    r1 = *(u16*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_08013CF8;
    return sub_08013D0E(r0, r1, r2, r3);
}

// ROM Address: 0x08013D02..0x08013D0E (12 bytes, Thumb)
u32 sub_08013D02(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_08013D06:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013D06;
    return r0;
}

// ROM Address: 0x08013D0E..0x08013D22 (20 bytes, Thumb)
u32 sub_08013D0E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r5;
    r1 = *(u32*)(r4 + 0x18);
    r0 += 0x4EU;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08013D22(r0, r1, r2, r3);
loc_08013D18:
    *(u16*)(r0) = (u16)r7;
    r1 = *(u16*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_08013D18;
    return sub_08013D2E(r0, r1, r2, r3);
}

// ROM Address: 0x08013D22..0x08013D84 (98 bytes, Thumb)
u32 sub_08013D22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_08013D26:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013D26;
    r0 = r5;
    r1 = *(u32*)(r4 + 0x1C);
    r0 += 0x50U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08013D42;
loc_08013D38:
    *(u16*)(r0) = (u16)r7;
    r1 = *(u16*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_08013D38;
    goto loc_08013D4E;
loc_08013D42:
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_08013D46:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013D46;
loc_08013D4E:
    r0 = r5;
    r1 = *(u32*)(r4 + 0x20);
    r0 += 0x52U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) goto loc_08013D62;
loc_08013D58:
    *(u16*)(r0) = (u16)r7;
    r1 = *(u16*)(r0);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r7;
    if (cmp_lhs != cmp_rhs) goto loc_08013D58;
    goto loc_08013D6E;
loc_08013D62:
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_08013D66:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013D66;
loc_08013D6E:
    r0 = r5;
    r1 = *(u32*)(r4 + 0x24);
    r0 += 0x54U;
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs >= cmp_rhs) return sub_08013D84(r0, r1, r2, r3);
    r1 = r7;
loc_08013D7A:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013D7A;
    return sub_08013D90(r0, r1, r2, r3);
}

// ROM Address: 0x08013D84..0x08013E20 (156 bytes, Thumb)
u32 sub_08013D84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = (r1 << 16);
    r1 = (r1 >> 16);
loc_08013D88:
    *(u16*)(r0) = (u16)r1;
    r2 = *(u16*)(r0);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013D88;
    r1 = *(u16*)(r4 + 0x4);
    r0 = 0x58U;
    *(u16*)(r0 + r5) = (u16)r1;
    r1 = *(u16*)(r4 + 0x6);
    r0 = 0x5AU;
    *(u16*)(r0 + r5) = (u16)r1;
    r1 = *(u16*)(r4 + 0x8);
    r0 = 0x5CU;
    *(u16*)(r0 + r5) = (u16)r1;
    r1 = *(u16*)(r4 + 0xA);
    r0 = 0x5EU;
    *(u16*)(r0 + r5) = (u16)r1;
    r1 = *(u16*)(r4 + 0xC);
    r0 = r5;
    r0 += 0x60U;
    *(u16*)(r0) = (u16)r1;
    r2 = *(u8*)(r4 + 0x1);
    r1 = 0x56U;
    *(u8*)(r1 + r5) = (u8)r2;
    r2 = *(u8*)(r4 + 0x2);
    r1 = 0x57U;
    *(u8*)(r1 + r5) = (u8)r2;
    r2 = *(u16*)(r4 + 0xE);
    r1 = 0x62U;
    *(u16*)(r1 + r5) = (u16)r2;
    r2 = *(u16*)(r4 + 0x10);
    r1 = 0x64U;
    *(u16*)(r1 + r5) = (u16)r2;
    r1 = *(u8*)(r4);
    *(u8*)(r0 + 0x6) = (u8)r1;
    r1 = stack[0]; // [sp + 0x0]
    r0 = 0x67U;
    r1 = *(u8*)(r1);
    *(u8*)(r0 + r5) = (u8)r1;
    return r0;
    r4 = 0x086B82ECU; // [0x08013E30]
    r2 = 0x0U;
loc_08013DDC:
    r3 = (r2 << 1);
    r3 = r3 + r2;
    r3 = (r3 << 3);
    r3 = r3 + r4;
    r3 = *(u16*)(r3 + 0xE);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) goto loc_08013DEE;
    *(u8*)(r0 + 0x14) = (u8)r2;
    return r0;
loc_08013DEE:
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 54;
    if (cmp_lhs < cmp_rhs) goto loc_08013DDC;
    r2 = 0xFFU;
    r0 = 0x086B748CU; // [0x08013E20]
    r2 += 0xC7U;
    r3 = 0x0U;
    r0 += 0x98U;
    r1 = 0x08013BACU; // [0x08013E34]
    r0 = Irq_WriteMaster1(r0, r1, r2, r3); // 0x08013E00: BL 0x0803DF14
    return r0;
    r1 = *(u32*)(r0 + 0x4);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013E1E;
    r2 = 0x62U;
    r2 = *(u16*)(r2 + r0);
    r2 = (r2 << 8);
    r2 = (r2 >> 14);
    r1 = r1 - r2;
    *(u32*)(r0 + 0x4) = (u32)r1;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08013E1E;
    r1 = 0x0U;
    *(u32*)(r0 + 0x4) = (u32)r1;
loc_08013E1E:
    return r0; // BX lr
}

// ROM Address: 0x08013E20..0x08013E22 (2 bytes, Thumb)
u32 sub_08013E20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u8*)(r1 + 0x12) = (u8)r4;
    return r0;
}

// ROM Address: 0x08013E22..0x08013E54 (50 bytes, Thumb)
u32 sub_08013E22(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = (r5 >> 1);
    cmp_lhs = (s32)r3; cmp_rhs = 92;
    r0 = (r0 << 12);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r7 = (r5 >> 1);
    *(u8*)(r0 + 0x2) = (u8)r0;
    r3 = (r5 >> 1);
    *(u16*)(r5 + 0x16) = (u16)r4;
    r3 = (r5 >> 1);
    r3 -= 0xACU;
    r1 = (r0 >> 32);
    r5 = 0x086B759CU; // [0x08013E60]
    r2 = 0x0U;
    r3 = (r2 << 4);
    r3 = r3 + r5;
    r4 = *(u8*)(r3);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r0;
    if (cmp_lhs != cmp_rhs) return sub_08013E54(r0, r1, r2, r3);
    r4 = *(u8*)(r3 + 0x1);
    cmp_lhs = (s32)r4; cmp_rhs = (s32)r1;
    if (cmp_lhs != cmp_rhs) return sub_08013E54(r0, r1, r2, r3);
    r0 = r3;
    return r0; // BX lr
}

// ROM Address: 0x08013E54..0x08013E5E (10 bytes, Thumb)
u32 sub_08013E54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 += 0x1U;
    cmp_lhs = (s32)r2; cmp_rhs = 4;
    if (cmp_lhs < cmp_rhs) return sub_08013E3E(r0, r1, r2, r3);
    r0 = 0x0U;
    return sub_08013E50(r0, r1, r2, r3);
}

// ROM Address: 0x08013E64..0x08013E82 (30 bytes, Thumb)
u32 sub_08013E64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = stack[11]; // [sp + 0x2C]
    r6 = stack[12]; // [sp + 0x30]
    r7 = stack[13]; // [sp + 0x34]
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08013E82(r0, r1, r2, r3);
    r0 = 0x3CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08013E74: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08013E82(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08013E82..0x08013EEC (106 bytes, Thumb)
u32 sub_08013E82(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = stack[2]; // [sp + 0x8]
    r1 = 0x086B77A4U; // [0x08014114]
    *(u32*)(r4 + 0x4) = (u32)r0;
    r0 = 0x08049880U /* &VTable_08049880 */; // [0x08014110]
    *(u32*)(r4) = (u32)r0;
    *(u32*)(r4 + 0x8) = (u32)r6;
    *(u32*)(r4 + 0xC) = (u32)r7;
    r0 = 0x1U;
    *(u32*)(r4 + 0x10) = (u32)r0;
    *(u32*)(r4 + 0x14) = (u32)r5;
    r0 = stack[3]; // [sp + 0xC]
    r3 = (r0 << 1);
    r0 = r3 + r0;
    r0 = (r0 << 2);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x20) = (u32)r0;
    r1 = stack[4]; // [sp + 0x10]
    *(u32*)(r4 + 0x24) = (u32)r1;
    r2 = stack[10]; // [sp + 0x28]
    *(u32*)(r4 + 0x28) = (u32)r2;
    r3 = *(u8*)(r0 + 0x4);
    r5 = *(u8*)(r0 + 0x5);
    r0 += 0x4U;
    r1 = r1 + r3;
    *(u32*)(r4 + 0x2C) = (u32)r1;
    r1 = r2 + r5;
    *(u32*)(r4 + 0x30) = (u32)r1;
    r1 = *(u8*)(r0);
    r0 = *(u8*)(r0 + 0x1);
    r1 *= r0;
    r0 = (r1 << 1);
    r0 = r0 + r1;
    *(u32*)(r4 + 0x34) = (u32)r1;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08013EC4: BL 0x0803D5B8
    r5 = 0x0U;
    *(u32*)(r4 + 0x38) = (u32)r0;
loc_08013ECC:
    r0 = *(u32*)(r4 + 0x20);
    r2 = *(u32*)(r4 + 0x38);
    r1 = *(u32*)(r0 + 0x8);
    r0 = *(u32*)(r4 + 0x34);
    r0 *= r5;
    r0 = r2 + r0;
    r2 = (r5 << 2);
    r1 = r2 + r1;
    r1 = *(u32*)(r1 + 0x4);
    r0 = Thunk_Jcalg1(r0, r1, r2, r3); // 0x08013EDE: BL 0x08049120
    r5 += 0x1U;
    cmp_lhs = (s32)r5; cmp_rhs = 3;
    if (cmp_lhs < cmp_rhs) goto loc_08013ECC;
    r0 = r4;
    return sub_08013E7E(r0, r1, r2, r3);
}

// Evidence: tools/behaviour/test_table.py::test_object_destroy7_stores_the_two_tables_and_frees_the_field_and_the_object
// ROM Address: 0x08013EEC..0x08013F7C (144 bytes, Thumb)
u32 Object_Destroy7(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r0;
    r0 = 0x08049880U /* &VTable_08049880 */; // [0x08014110]
    r5 = r1;
    *(u32*)(r4) = (u32)r0;
    r0 = *(u32*)(r4 + 0x38);
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08013EF8: BL 0x0803D63C
    r0 = 0x0804929CU /* &VTable_0804929C */; // [0x08014118]
    cmp_lhs = (s32)r5; cmp_rhs = 0;
    *(u32*)(r4) = (u32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_08013F0A;
    r0 = r4;
    r0 = sub_0803D63C(r0, r1, r2, r3); // 0x08013F06: BL 0x0803D63C
loc_08013F0A:
    return r0;
    *(u32*)(r0 + 0x24) = (u32)r1;
    *(u32*)(r0 + 0x28) = (u32)r2;
    r4 = *(u32*)(r0 + 0x20);
    r3 = *(u8*)(r4 + 0x4);
    r4 = *(u8*)(r4 + 0x5);
    r1 = r1 + r3;
    *(u32*)(r0 + 0x2C) = (u32)r1;
    r1 = r2 + r4;
    *(u32*)(r0 + 0x30) = (u32)r1;
    return r0; // BX lr
    r2 = r0;
    r0 = r1;
    r1 = *(u32*)(r2 + 0x10);
    cmp_lhs = (s32)r1; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013F56;
    r3 = *(u32*)(r2 + 0x8);
    r1 = 0x2U;
    cmp_lhs = (s32)r3; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013F48;
    r3 = *(u32*)(r2 + 0x4);
    r1 = 0x1U;
    r3 += 0x100U;
    r3 = *(u32*)(r3 + 0x8);
    cmp_lhs = (s32)r3; cmp_rhs = (s32)r2;
    if (cmp_lhs == cmp_rhs) goto loc_08013F48;
    r1 = 0x0U;
loc_08013F48:
    r3 = *(u32*)(r2 + 0x34);
    r4 = *(u32*)(r2 + 0x38);
    r3 *= r1;
    r1 = r4 + r3;
    r2 += 0x24U;
    r0 = sub_0803F922(r0, r1, r2, r3); // 0x08013F52
loc_08013F56:
    return r0;
    r1 = r0;
    r0 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013F7A;
    r2 = *(u32*)(r1 + 0x4);
    r0 = 0x0U;
    r2 += 0x100U;
    *(u32*)(r2 + 0x10) = (u32)r0;
    r0 = *(u32*)(r1 + 0x4);
    r2 = *(u32*)(r0);
    r3 = *(u32*)(r2 + 0x20);
    r3 = r3 + r2;
    r2 = *(u32*)(r1 + 0x14);
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08013F76: BL __call_via_r3
loc_08013F7A:
    return r0;
}

// ROM Address: 0x08013F7C..0x08013FC4 (72 bytes, Thumb)
u32 sub_08013F7C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r0 + 0x4);
    r3 = 0x086B77A4U; // [0x08014114]
    r1 += 0x100U;
    r4 = r0;
    r0 = *(u32*)(r0 + 0x20);
    r2 = *(u32*)(r1 + 0x8);
    r5 = 0x0U;
    r3 -= 0x8U;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r4;
    r0 = *(u16*)(r0 + 0x2);
    if (cmp_lhs != cmp_rhs) return sub_08014000(r0, r1, r2, r3);
    r2 = *(u32*)(r3);
    r2 = *(u16*)(r2 + 0x6);
    r2 &= r0;
    if (cmp_lhs == cmp_rhs) return sub_08013FC4(r0, r1, r2, r3);
    r0 = r4;
    r0 = sub_08005FB2(r0, r1, r2, r3); // 0x08013FA0
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) return sub_08013FFC(r0, r1, r2, r3);
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x100U;
    *(u32*)(r0 + 0x10) = (u32)r5;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r3 = r2 + r1;
    r2 = *(u32*)(r4 + 0x14);
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08013FBE: BL __call_via_r3
    return sub_08013FFC(r0, r1, r2, r3);
}

// ROM Address: 0x08013FC4..0x08014000 (60 bytes, Thumb)
u32 sub_08013FC4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = *(u32*)(r4 + 0xC);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013FFC;
    r0 = *(u32*)(r4 + 0x18);
    r0 -= 0x1U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    if (cmp_lhs != cmp_rhs) goto loc_08013FFC;
    r0 = *(u32*)(r4 + 0x1C);
    cmp_lhs = (s32)r0; cmp_rhs = 4;
    if (cmp_lhs <= cmp_rhs) goto loc_08013FE0;
    r2 = (r0 >> 31);
    r0 = r2 + r0;
    r0 = ((u32)((s32)r0 >> 1));
    *(u32*)(r4 + 0x1C) = (u32)r0;
loc_08013FE0:
    r0 = *(u32*)(r4 + 0x1C);
    *(u32*)(r4 + 0x18) = (u32)r0;
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_08013FFC;
    *(u32*)(r1 + 0x10) = (u32)r5;
    r0 = *(u32*)(r4 + 0x4);
    r1 = *(u32*)(r0);
    r2 = *(u32*)(r1 + 0x20);
    r3 = r2 + r1;
    r2 = *(u32*)(r4 + 0x14);
    r1 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08013FF8: BL __call_via_r3
loc_08013FFC:
    r0 = 0x1U;
    return r0;
}

// ROM Address: 0x08014000..0x08014028 (40 bytes, Thumb)
u32 sub_08014000(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 = *(u32*)(r3);
    r1 = *(u16*)(r1 + 0x4);
    r1 &= r0;
    if (cmp_lhs == cmp_rhs) goto loc_08014024;
    r0 = *(u32*)(r4 + 0x8);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_08014010;
    return sub_08013FFE(r0, r1, r2, r3);
loc_08014010:
    r0 = 0x10U;
    *(u32*)(r4 + 0x18) = (u32)r0;
    *(u32*)(r4 + 0x1C) = (u32)r0;
    r0 = r4;
    r0 = sub_08005FA8(r0, r1, r2, r3); // 0x08014018
    r0 = *(u32*)(r4 + 0x4);
    r0 += 0x100U;
    *(u32*)(r0 + 0x10) = (u32)r5;
loc_08014024:
    r0 = 0x0U;
    return sub_08013FFE(r0, r1, r2, r3);
}

// ROM Address: 0x08014028..0x08014046 (30 bytes, Thumb)
u32 sub_08014028(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = stack[15]; // [sp + 0x3C]
    r6 = stack[16]; // [sp + 0x40]
    r7 = stack[17]; // [sp + 0x44]
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08014046(r0, r1, r2, r3);
    r0 = 0x3CU;
    r0 = sub_0803D5B8(r0, r1, r2, r3); // 0x08014038: BL 0x0803D5B8
    r4 = r0;
    if (cmp_lhs != cmp_rhs) return sub_08014046(r0, r1, r2, r3);
    r0 = r4;
    return r0;
}

// ROM Address: 0x08014046..0x080140B2 (108 bytes, Thumb)
u32 sub_08014046(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x30; // sp + 0x30
    r0 = *(u32*)r2; r2 += 4;
    r1 = *(u32*)r2; r2 += 4;
    r2 = *(u32*)r2; r2 += 4;
    stack[0] = r0; // [sp + 0x0]
    stack[1] = r1; // [sp + 0x4]
    r3 = 0x10; // sp + 0x10
    stack[2] = r2; // [sp + 0x8]
    r1 = *(u32*)r3; r3 += 4;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r0 = r4;
    r0 = sub_08005FBE(r0, r1, r2, r3); // 0x08014056
    r0 = 0x0804BF54U /* &VTable_0804BF54 */; // [0x0801411C]
    *(u32*)(r4) = (u32)r0;
    r0 = r4;
    r0 += 0x24U;
    r1 = *(u32*)r5; r5 += 4;
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r5 = *(u32*)r5; r5 += 4;
    *(u32*)r0 = r1; r0 += 4;
    *(u32*)r0 = r2; r0 += 4;
    *(u32*)r0 = r3; r0 += 4;
    *(u32*)r0 = r5; r0 += 4;
    *(u32*)(r4 + 0x20) = (u32)r6;
    *(u32*)(r4 + 0x1C) = (u32)r7;
    r0 -= 0x10U;
    r2 = r0;
    r3 = *(u32*)(r4 + 0x24);
    r5 = *(u32*)(r4 + 0x2C);
    r2 += 0x8U;
    r0 = *(u32*)(r4 + 0x28);
    r2 = *(u32*)(r2 + 0x4);
    r3 = r3 + r5;
    r0 = r0 + r2;
    stack[2] = r0; // [sp + 0x8]
    r0 = ((u32)((s32)r0 >> 1));
    r2 = ((u32)((s32)r3 >> 1));
    stack[1] = r3; // [sp + 0x4]
    r1 = r4;
    r1 += 0x34U;
    stack[1] = r2; // [sp + 0x4]
    stack[2] = r0; // [sp + 0x8]
    *(u32*)(r1 + 0x4) = (u32)r0;
    *(u32*)(r1) = (u32)r2;
    r0 = *(u32*)(r4 + 0x38);
    r0 += 0x3U;
    *(u32*)(r4 + 0x38) = (u32)r0;
    r0 = 0x086B77A4U; // [0x08014114]
    r1 = *(u32*)(r4 + 0x20);
    r0 -= 0x8U;
    r0 = *(u32*)(r0 + 0x4);
    r0 = sub_0803FFE8(r0, r1, r2, r3); // 0x0801409E
    r1 = (r0 >> 31);
    r0 = r1 + r0;
    r1 = *(u32*)(r4 + 0x34);
    r0 = ((u32)((s32)r0 >> 1));
    r0 = r1 - r0;
    *(u32*)(r4 + 0x34) = (u32)r0;
    r0 = r4;
    return sub_08014042(r0, r1, r2, r3);
}

// ROM Address: 0x080140B2..0x080140D2 (32 bytes, Thumb)
u32 sub_080140B2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = *(u32*)(r0 + 0x4);
    r2 += 0x100U;
    r2 = *(u32*)(r2 + 0xC);
    r3 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r3;
    if (cmp_lhs == cmp_rhs) goto loc_080140C4;
    r0 = 0x0U;
    return r0; // BX lr
loc_080140C4:
    r2 = *(u32*)(r0 + 0x34);
    *(u32*)(r1) = (u32)r2;
    r0 = *(u32*)(r0 + 0x38);
    r0 -= 0x3U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x1U;
    return r0; // BX lr
}

// ROM Address: 0x080140D2..0x080140F6 (36 bytes, Thumb)
u32 sub_080140D2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r1;
    r1 = *(u32*)(r0 + 0x4);
    r1 += 0x100U;
    r1 = *(u32*)(r1 + 0xC);
    r2 = *(u32*)(r0 + 0x8);
    cmp_lhs = (s32)r1; cmp_rhs = (s32)r2;
    if (cmp_lhs != cmp_rhs) return sub_080140F6(r0, r1, r2, r3);
    r1 = 0x086B77A4U; // [0x08014114]
    r1 -= 0x8U;
    r1 = *(u32*)(r1);
    r1 = *(u16*)(r1 + 0x2);
    r1 = (r1 << 31);
    if (cmp_lhs == cmp_rhs) return sub_080140F6(r0, r1, r2, r3);
    r2 = 0x1U;
    return sub_080140F8(r0, r1, r2, r3);
}

// ROM Address: 0x080140F6..0x0801411C (38 bytes, Thumb)
u32 sub_080140F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = 0x0U;
    stack[0] = r2; // [sp + 0x0]
    r2 = r0;
    r1 = r0;
    r1 += 0x24U;
    r2 += 0x34U;
    r3 = *(u32*)(r0 + 0x20);
    r0 = r4;
    r0 = sub_08015BB8(r0, r1, r2, r3); // 0x08014106
    return r0;
    r0 = r0;
    r0 = stack[128]; // [sp + 0x200]
    r4 = (r0 >> 32);
    *(u8*)(r4 + 0x1E) = (u8)r4;
    r3 = (r5 >> 1);
    stack[156] = r2; // [sp + 0x270]
    r4 = (r0 >> 32);
    return r0;
}
