/**
 * Dragon Ball Z: Buu's Fury — Decompiled Code Module #25
 * Address Range: 0x08047FBC..0x08048A18 (100 functions)
 */
#include "../include/buusfury_types.hpp"
#include "../include/classes_vtables.hpp"

// ROM Address: 0x08047FBC..0x08047FC4 (8 bytes, Thumb)
u32 sub_08047FBC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    *(u16*)(r3 + r2) = (u16)r0;
    r0 = (r0 << 12);
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08047FC4..0x08047FD4 (16 bytes, ARM32)
u32 sub_08047FC4(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08047FC4: ARM 0xE92D4010 */
    /* 0x08047FC8: ARM 0xEBFFFFF9 */
    /* 0x08047FCC: ARM 0xE8BD4010 */
    return r0; // 0x08047FD0: BX lr
    return r0;
}

// ROM Address: 0x08047FD4..0x08047FD8 (4 bytes, Thumb)
u32 sub_08047FD4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x08047FD8..0x08047FF4 (28 bytes, ARM32)
u32 sub_08047FD8(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x08047FD8: ARM 0xE92D4010 */
    /* 0x08047FDC: ARM 0xEB00047D */
    /* 0x08047FE0: ARM 0xE3500000 */
    /* 0x08047FE4: ARM 0x08BD4010 */
    /* 0x08047FE8: ARM 0x012FFF1E */
    /* 0x08047FEC: ARM 0xE8BD4010 */
    /* 0x08047FF0: ARM 0xEA000011 */
    return r0;
}

// Evidence: armlib/c_t__ue.l, member __raise.o, symbol __raise, 68 B matched, 20 B masked, 48 B compared
// ROM Address: 0x08047FF4..0x0804801A (38 bytes, Thumb)
u32 __raise(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r6 = 0xF7FB7FFDU; // [0x08048030]
    r5 = r1;
    r1 = r0;
    r4 = r0;
    r6 += pc;
    r0 = r6;
    r0 = sub_08048006(r0, r1, r2, r3); // 0x08048002
    r2 = r0;
    cmp_lhs = (s32)r0; cmp_rhs = (s32)r6;
    if (cmp_lhs != cmp_rhs) return sub_0804801A(r0, r1, r2, r3);
    r1 = r5;
    r0 = r4;
    r0 = __default_signal_handler(r0, r1, r2, r3); // 0x08048010: BL 0x08048054
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x0804801A..0x0804802E (20 bytes, Thumb)
u32 sub_0804801A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0xF7FB7FDDU; // [0x08048034]
    r0 += pc;
    cmp_lhs = (s32)r2; cmp_rhs = (s32)r0;
    if (cmp_lhs == cmp_rhs) goto loc_0804802A;
    r1 = r5;
    r0 = r4;
    r0 = ((u32 (*)(u32, u32, u32))r3)(r0, r1, r2); // 0x08048026: BL __call_via_r3
loc_0804802A:
    r0 = 0x0U;
    return sub_08048014(r0, r1, r2, r3);
}

// Evidence: armlib/c_t__se.l, member sys_exit.o, symbol __16_sys_exit, 28 B matched, 4 B masked, 24 B compared
// ROM Address: 0x08048038..0x0804803C (4 bytes, Thumb)
u32 __16_sys_exit(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    return ((u32 (*)(u32, u32, u32, u32))pc)(r0, r1, r2, r3); // BX pc
    r0 = r0;
    return r0;
}

// ROM/IWRAM Address: 0x0804803C..0x08048054 (24 bytes, ARM32)
u32 sub_0804803C(u32 r0, u32 r1, u32 r2, u32 r3) {
    /* 0x0804803C: ARM 0xE3A00018 */
    /* 0x08048040: ARM 0xE59F1008 */
    /* 0x08048044: ARM 0xEF123456 */
    return r0; // 0x08048048: BX lr
    /* 0x0804804C: ARM 0x00000121 */
    /* 0x08048050: ARM 0x00020026 */
    return r0;
}

// Evidence: armlib/c_t__ue.l, member defsig.o, symbol __default_signal_handler, 280 B matched, 20 B masked, 260 B compared
// ROM Address: 0x08048054..0x08048076 (34 bytes, Thumb)
u32 __default_signal_handler(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r2 = r0 - 1;
    cmp_lhs = (s32)r2; cmp_rhs = 13;
    r4 = 0x080480ECU;
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_080480AC(r0, r1, r2, r3);
    r2 = 0x17U;
    r3 = 0x0076F7D0U; // [0x080480F0]
    r2 *= r0;
    r3 += pc;
    r5 = r2 + r3;
    r5 -= 0x17U;
    cmp_lhs = (s32)r0; cmp_rhs = 2;
    if (cmp_lhs != cmp_rhs) return sub_08048098(r0, r1, r2, r3);
    r0 = (r1 << 5);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08048076(r0, r1, r2, r3);
    r4 = 0x080480F4U;
    return sub_080480AE(r0, r1, r2, r3);
}

// ROM Address: 0x08048076..0x080480AC (54 bytes, Thumb)
u32 sub_08048076(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x08000002U; // [0x08048108]
    r0 &= r1;
    if (cmp_lhs == cmp_rhs) goto loc_08048080;
    r4 = 0x0804810CU;
    return sub_080480AE(r0, r1, r2, r3);
loc_08048080:
    r0 = (r1 << 3);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08048088;
    r4 = 0x0804811CU;
    return sub_080480AE(r0, r1, r2, r3);
loc_08048088:
    r0 = (r1 << 2);
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_08048090;
    r4 = 0x08048128U;
    return sub_080480AE(r0, r1, r2, r3);
loc_08048090:
    r0 = (r1 << 1);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_080480AE(r0, r1, r2, r3);
    r4 = 0x08048134U;
    return sub_080480AE(r0, r1, r2, r3);
    cmp_lhs = (s32)r0; cmp_rhs = 8;
    if (cmp_lhs != cmp_rhs) goto loc_080480A0;
    r4 = r1;
    return sub_080480AE(r0, r1, r2, r3);
loc_080480A0:
    cmp_lhs = (s32)r0; cmp_rhs = 9;
    if (cmp_lhs != cmp_rhs) return sub_080480AE(r0, r1, r2, r3);
    cmp_lhs = (s32)r1; cmp_rhs = 1;
    if (cmp_lhs != cmp_rhs) return sub_080480AE(r0, r1, r2, r3);
    r5 = 0x08048144U;
    return sub_080480AE(r0, r1, r2, r3);
}

// ROM Address: 0x080480AC..0x080480EA (62 bytes, Thumb)
u32 sub_080480AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r5 = 0x0804815CU;
    r0 = 0xAU;
    r0 = sub_08048174(r0, r1, r2, r3); // 0x080480B0: BL 0x08048174
    r0 = *(u8*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080480C8;
loc_080480BA:
    r0 = *(u8*)(r5);
    r5 += 0x1U;
    r0 = sub_08048174(r0, r1, r2, r3); // 0x080480BE: BL 0x08048174
    r0 = *(u8*)(r5);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080480BA;
loc_080480C8:
    r0 = *(u8*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs == cmp_rhs) goto loc_080480DC;
loc_080480CE:
    r0 = *(u8*)(r4);
    r4 += 0x1U;
    r0 = sub_08048174(r0, r1, r2, r3); // 0x080480D2: BL 0x08048174
    r0 = *(u8*)(r4);
    cmp_lhs = (s32)r0; cmp_rhs = 0;
    if (cmp_lhs != cmp_rhs) goto loc_080480CE;
loc_080480DC:
    r0 = 0xAU;
    r0 = sub_08048174(r0, r1, r2, r3); // 0x080480DE: BL 0x08048174
    r0 = 0x1U;
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08048174..0x08048186 (18 bytes, Thumb)
u32 sub_08048174(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r3 = 0x0; // sp + 0x0
    *(u8*)(r3) = (u8)r0;
    r0 = 0x3U;
    r1 = sp;
    r0 = Bios_Swi_AB(r0, r1); // SWI 0xAB
    return ((u32 (*)(u32, u32, u32, u32))r3)(r0, r1, r2, r3); // BX r3
}

// ROM Address: 0x08048186..0x0804818A (4 bytes, Thumb)
u32 sub_08048186(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    return r0; // BX lr
}

// ROM Address: 0x0804818A..0x08048194 (10 bytes, Thumb)
u32 sub_0804818A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r0;
    r1 = 0x03001034U; // [0x08048194]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048194..0x08048198 (4 bytes, Thumb)
u32 sub_08048194(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = ((u32)((s32)r6 >> 32));
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08048198..0x080481E4 (76 bytes, Thumb)
u32 sub_08048198(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = 0x03001068U; // [0x080481A4]
    r0 = sub_08004838(r0, r1, r2, r3); // 0x0804819C
    return r0;
    r0 = r0;
    r0 = ((u32)((s32)r5 >> 1));
    r0 = (r0 << 12);
    r2 = 0x03001918U; // [0x080481D4]
    r0 = 0x0804ACF4U /* &VTable_0804ACF4 */; // [0x080481D8]
    r1 = 0x40U;
    *(u32*)(r2) = (u32)r0;
    *(u8*)(r2 + 0x4) = (u8)r1;
    r2 += 0x8U;
    *(u32*)(r2) = (u32)r0;
    r1 = 0x80U;
    *(u8*)(r2 + 0x4) = (u8)r1;
    r1 = 0x03001918U; // [0x080481D4]
    r2 += 0x8U;
    r1 += 0x10U;
    *(u32*)(r1) = (u32)r0;
    r1 = 0x20U;
    *(u8*)(r2 + 0x4) = (u8)r1;
    r1 = 0x03001918U; // [0x080481D4]
    r1 += 0x18U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x10U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    return r0; // BX lr
    r0 = r0;
    r0 = r3 + r4;
    r0 = (r0 << 12);
    r4 = 0x3D0; // sp + 0x3D0
    r4 = (r0 >> 32);
    r1 = 0x03001938U; // [0x080481E4]
    r0 = 0x08049BE4U /* &VTable_08049BE4 */; // [0x080481E8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080481E4..0x080481E6 (2 bytes, Thumb)
u32 sub_080481E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r7 + r4;
    return r0;
}

// ROM Address: 0x080481E6..0x08048228 (66 bytes, Thumb)
u32 sub_080481E6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r3 = stack[228]; // [sp + 0x390]
    r4 = (r0 >> 32);
    r2 = 0x0300193CU; // [0x08048218]
    r0 = 0x0804C12CU /* &VTable_0804C12C */; // [0x0804821C]
    r1 = 0x1U;
    *(u32*)(r2) = (u32)r0;
    *(u8*)(r2 + 0x4) = (u8)r1;
    r2 += 0x8U;
    *(u32*)(r2) = (u32)r0;
    r1 = 0x0U;
    *(u8*)(r2 + 0x4) = (u8)r1;
    r1 = 0x0300193CU; // [0x08048218]
    r2 += 0x8U;
    r1 += 0x10U;
    *(u32*)(r1) = (u32)r0;
    r1 = 0x2U;
    *(u8*)(r2 + 0x4) = (u8)r1;
    r1 = 0x0300193CU; // [0x08048218]
    r1 += 0x18U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    return r0; // BX lr
    r0 = r0;
    r4 = r7 + r4;
    r0 = (r0 << 12);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r3; r1 += 4;
    *(u32*)r1 = r5; r1 += 4;
    r4 = (r0 >> 32);
    r1 = 0x0300195CU; // [0x08048228]
    r0 = 0x0804A0ACU /* &VTable_0804A0AC */; // [0x0804822C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048228..0x0804822A (2 bytes, Thumb)
u32 sub_08048228(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r3 + r5;
    return r0;
}

// ROM Address: 0x0804822A..0x08048238 (14 bytes, Thumb)
u32 sub_0804822A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r0 = 0x080484E0U;
    r4 = (r0 >> 32);
    r1 = 0x03001960U; // [0x08048238]
    r0 = 0x08049534U /* &VTable_08049534 */; // [0x0804823C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048238..0x0804823A (2 bytes, Thumb)
u32 sub_08048238(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r4 + r5;
    return r0;
}

// ROM Address: 0x0804823A..0x080482A0 (102 bytes, Thumb)
u32 sub_0804823A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    stack[52] = r5; // [sp + 0xD0]
    r4 = (r0 >> 32);
    r1 = 0x03001964U; // [0x08048248]
    r0 = 0x0804BE08U /* &VTable_0804BE08 */; // [0x0804824C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r4 = r4 + r5;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x03001990U; // [0x08048260]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    *(u32*)(r1 + 0x4) = (u32)r0;
    *(u32*)(r1 + 0x8) = (u32)r0;
    *(u32*)(r1 + 0xC) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r0 = r2 + r6;
    r0 = (r0 << 12);
    r4 = 0x030019A4U; // [0x0804828C]
    r2 = 0x8U;
    r0 = r4;
    r0 += 0x44U;
    r1 = r0;
    r1 += 0x18U;
    r3 = 0x08050761U; // [0x08048290]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08048274: BL 0x08046FF4
    r0 = r4;
    r0 += 0x5CU;
    r1 = r0;
    r2 = 0xCU;
    r1 += 0x30U;
    r3 = 0x08050791U; // [0x08048294]
    r0 = __vecmap1c__FPvT1iPFPv_v(r0, r1, r2, r3); // 0x08048284: BL 0x08046FF4
    return r0;
    r0 = r0;
    r4 = r4 + r6;
    r0 = (r0 << 12);
    r1 = (r4 << 29);
    r5 = (r0 >> 32);
    r1 = (r2 << 30);
    r5 = (r0 >> 32);
    r1 = 0x03001A6CU; // [0x080482A0]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080482A0..0x080482A2 (2 bytes, Thumb)
u32 sub_080482A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r5 - r1;
    return r0;
}

// ROM Address: 0x080482A2..0x080482AC (10 bytes, Thumb)
u32 sub_080482A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r1 = 0x03001AF0U; // [0x080482AC]
    r0 = 0x0804AEE8U /* &VTable_0804AEE8 */; // [0x080482B0]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080482AC..0x080482AE (2 bytes, Thumb)
u32 sub_080482AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r6 - r3;
    return r0;
}

// ROM Address: 0x080482AE..0x080482BC (14 bytes, Thumb)
u32 sub_080482AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x3A0; // sp + 0x3A0
    r4 = (r0 >> 32);
    r1 = 0x03001AF4U; // [0x080482BC]
    r0 = 0x08049A1CU /* &VTable_08049A1C */; // [0x080482C0]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080482BC..0x080482BE (2 bytes, Thumb)
u32 sub_080482BC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r6 - r3;
    return r0;
}

// ROM Address: 0x080482BE..0x08048400 (322 bytes, Thumb)
u32 sub_080482BE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = stack[28]; // [sp + 0x70]
    r4 = (r0 >> 32);
    r0 = 0x0804985CU /* &VTable_0804985C */; // [0x08048348]
    r1 = 0x03001B00U; // [0x0804834C]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x03001B00U; // [0x0804834C]
    r2 = 0x0804D784U /* &VTable_0804D784 */; // [0x08048354]
    r0 += 0x10U;
    *(u32*)(r0) = (u32)r2;
    r0 = 0x3U;
    r1 += 0x10U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r2;
    r2 = 0x4U;
    *(u8*)(r1 + 0x4) = (u8)r2;
    r3 = 0x03001B00U; // [0x0804834C]
    r1 = 0x0804C720U /* &VTable_0804C720 */; // [0x08048358]
    r3 += 0x20U;
    *(u32*)(r3) = (u32)r1;
    *(u8*)(r3 + 0x4) = (u8)r0;
    r3 += 0x8U;
    *(u32*)(r3) = (u32)r1;
    *(u8*)(r3 + 0x4) = (u8)r2;
    r1 = 0x03001B00U; // [0x0804834C]
    r2 = 0x0804E0ACU /* &VTable_0804E0AC */; // [0x0804835C]
    r1 += 0x30U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    *(u32*)(r1) = (u32)r2;
    r1 = 0x2U;
    r3 += 0x10U;
    *(u8*)(r3 + 0x4) = (u8)r1;
    *(u32*)(r3) = (u32)r2;
    r2 = 0x03001B00U; // [0x0804834C]
    r4 = 0x0804A188U /* &VTable_0804A188 */; // [0x08048350]
    r2 += 0x4U;
    *(u32*)(r2) = (u32)r4;
    r2 = 0x5U;
    r3 += 0x8U;
    *(u8*)(r3 + 0x4) = (u8)r2;
    r2 = 0x0804A730U /* &VTable_0804A730 */; // [0x08048360]
    *(u32*)(r3) = (u32)r2;
    r2 = 0x03001B00U; // [0x0804834C]
    r3 += 0x8U;
    r2 += 0x48U;
    *(u8*)(r2 + 0x4) = (u8)r0;
    r2 = 0x08049E40U /* &VTable_08049E40 */; // [0x08048364]
    *(u32*)(r3) = (u32)r2;
    r2 = 0x03001B00U; // [0x0804834C]
    r2 += 0x50U;
    *(u8*)(r2 + 0x4) = (u8)r1;
    r1 = 0x0804C35CU /* &VTable_0804C35C */; // [0x08048368]
    *(u32*)(r2) = (u32)r1;
    r1 = 0x0804A1ACU /* &VTable_0804A1AC */; // [0x0804836C]
    r2 -= 0x48U;
    *(u32*)(r2) = (u32)r1;
    r1 = 0x0804A77CU /* &VTable_0804A77C */; // [0x08048370]
    r2 += 0x4U;
    *(u32*)(r2) = (u32)r1;
    r1 = 0x03001B00U; // [0x0804834C]
    r1 += 0x58U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804A1D0U /* &VTable_0804A1D0 */; // [0x08048374]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r0 = stack[92]; // [sp + 0x170]
    r4 = (r0 >> 32);
    r0 = r0 - r4;
    r0 = (r0 << 12);
    r1 = 0x08048574U;
    r4 = (r0 >> 32);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_08048260(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u32*)r7 = r5; r7 += 4;
    r4 = (r0 >> 32);
    return sub_080484B8(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r7 = 0x08048424U;
    r4 = (r0 >> 32);
    r6 = stack[64]; // [sp + 0x100]
    r4 = (r0 >> 32);
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r4; r3 += 4;
    *(u32*)r3 = r6; r3 += 4;
    r4 = (r0 >> 32);
    r1 = 0x08048620U;
    r4 = (r0 >> 32);
    r7 = 0x08048564U;
    r4 = (r0 >> 32);
    r1 = 0x080486B8U;
    r4 = (r0 >> 32);
    r0 = 0x0804C464U /* &VTable_0804C464 */; // [0x080483C4]
    r1 = 0x03001B60U; // [0x080483C8]
    r3 = 0x0804DA50U /* &VTable_0804DA50 */; // [0x080483D8]
    *(u32*)(r1) = (u32)r0;
    r1 += 0x4U;
    r0 = 0x0804DA40U /* &VTable_0804DA40 */; // [0x080483CC]
    r2 = r1 + 4;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804E110U /* &VTable_0804E110 */; // [0x080483D4]
    r1 = 0x0804DF3CU /* &VTable_0804DF3C */; // [0x080483D0]
    *(u32*)(r2) = (u32)r0;
    r0 = 0x0804E194U /* &VTable_0804E194 */; // [0x080483DC]
    r2 += 0x4U;
    *(u32*)(r2) = (u32)r0;
    r0 = 0x0804C474U /* &VTable_0804C474 */; // [0x080483E0]
    r2 += 0x4U;
    *(u32*)(r2) = (u32)r0;
    r0 = 0x0804CD8CU /* &VTable_0804CD8C */; // [0x080483E4]
    r2 += 0x4U;
    *(u32*)(r2) = (u32)r0;
    r0 = 0x0804D868U /* &VTable_0804D868 */; // [0x080483E8]
    r2 += 0x4U;
    *(u32*)(r2) = (u32)r0;
    r0 = r2 + 4;
    *(u32*)(r0) = (u32)r1;
    r0 += 0x4U;
    *(u32*)(r0) = (u32)r3;
    r1 = 0x03001B60U; // [0x080483C8]
    r0 = 0x0804E054U /* &VTable_0804E054 */; // [0x080483EC]
    r1 += 0x24U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804E40CU /* &VTable_0804E40C */; // [0x080483F0]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804E374U /* &VTable_0804E374 */; // [0x080483F4]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r5; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    r4 = (r0 >> 32);
    r0 = r4 - r5;
    r0 = (r0 << 12);
    if (cmp_lhs >= cmp_rhs) return sub_08048450(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 = Bios_Swi_3C(r0, r1); // SWI 0x3C
    r4 = (r0 >> 32);
    return sub_080485F8(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    if (cmp_lhs >= cmp_rhs) return sub_0804847C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return sub_08048708(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    *(u32*)r4 = r2; r4 += 4;
    *(u32*)r4 = r4; r4 += 4;
    *(u32*)r4 = r5; r4 += 4;
    *(u32*)r4 = r6; r4 += 4;
    r4 = (r0 >> 32);
    r2 = *(u32*)r5; r5 += 4;
    r3 = *(u32*)r5; r5 += 4;
    r7 = *(u32*)r5; r5 += 4;
    r4 = (r0 >> 32);
    if ((u32)cmp_lhs > (u32)cmp_rhs) return sub_080484BC(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return sub_08048498(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return sub_08047C0C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return sub_08048AE0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x03001B90U; // [0x08048400]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048400..0x08048402 (2 bytes, Thumb)
u32 sub_08048400(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r2 - r6;
    return r0;
}

// ROM Address: 0x08048402..0x0804840C (10 bytes, Thumb)
u32 sub_08048402(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r1 = 0x03001BA4U; // [0x0804840C]
    r0 = 0x0804A214U /* &VTable_0804A214 */; // [0x08048410]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804840C..0x0804840E (2 bytes, Thumb)
u32 sub_0804840C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = r4 - r6;
    return r0;
}

// ROM Address: 0x0804840E..0x0804841C (14 bytes, Thumb)
u32 sub_0804840E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = 0x08048464U;
    r4 = (r0 >> 32);
    r1 = 0x03001BB0U; // [0x0804841C]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804841C..0x0804841E (2 bytes, Thumb)
u32 sub_0804841C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = r6 - r6;
    return r0;
}

// ROM Address: 0x0804841E..0x08048430 (18 bytes, Thumb)
u32 sub_0804841E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r0 = 0x0804B2F8U; // [0x08048430]
    r1 = 0x03001C3CU; // [0x08048434]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AB6CU /* &VTable_0804AB6C */; // [0x08048438]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    return r0;
}

// ROM Address: 0x08048432..0x08048490 (94 bytes, Thumb)
u32 sub_08048432(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r4 = r7;
    r0 = (r0 << 12);
    r3 = 0x1B0; // sp + 0x1B0
    r4 = (r0 >> 32);
    r1 = 0x03001C4CU; // [0x08048474]
    r2 = 0x208U; // (65 << 3)
    r0 = 0x0U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r2 = r1 + r2;
    *(u32*)(r2) = (u32)r0;
    r2 = 0x0000040CU; // [0x08048478]
    r2 = r1 + r2;
    *(u32*)(r2) = (u32)r0;
    r2 = 0x610U; // (97 << 4)
    r2 = r1 + r2;
    *(u32*)(r2) = (u32)r0;
    r2 = 0xBC0U; // (47 << 6)
    r1 = r1 + r2;
    *(u32*)(r1 + 0x38) = (u32)r0;
    r1 = 0x08049274U; // [0x08048480]
    r2 = 0x03002A4CU; // [0x0804847C]
    *(u32*)(r2) = (u32)r1;
    r1 = 0x03001C4CU; // [0x08048474]
    r1 -= 0x8U;
    *(u32*)(r1 + 0x4) = (u32)r0;
    r0 = 0x08049670U /* &VTable_08049670 */; // [0x08048484]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r4 = r1 + 1;
    r0 = (r0 << 12);
    r4 = (r1 << 16);
    r0 = r0;
    cmp_lhs = (s32)r2; cmp_rhs = 76;
    r0 = (r0 << 12);
    stack[116] = r2; // [sp + 0x1D0]
    r4 = (r0 >> 32);
    stack[112] = r6; // [sp + 0x1C0]
    r4 = (r0 >> 32);
    r1 = 0x03002A64U; // [0x08048490]
    r0 = 0x0U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048490..0x08048492 (2 bytes, Thumb)
u32 sub_08048490(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r2; cmp_rhs = 100;
    return r0;
}

// ROM Address: 0x08048492..0x080484E4 (82 bytes, Thumb)
u32 sub_08048492(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r0 = 0x0804C384U /* &VTable_0804C384 */; // [0x080484C0]
    r1 = 0x03002B38U; // [0x080484C4]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x3U;
    r1 += 0x4U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804BEF0U /* &VTable_0804BEF0 */; // [0x080484C8]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804C790U /* &VTable_0804C790 */; // [0x080484CC]
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    r0 = 0x3U;
    r1 += 0x8U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804C3A8U /* &VTable_0804C3A8 */; // [0x080484D0]
    *(u32*)(r1) = (u32)r0;
    r1 += 0x8U;
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804E00CU /* &VTable_0804E00C */; // [0x080484D4]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    *(u32*)r3 = r2; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r3; cmp_rhs = 56;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    *(u32*)r7 = r4; r7 += 4;
    *(u32*)r7 = r7; r7 += 4;
    r4 = (r0 >> 32);
    *(u32*)r3 = r3; r3 += 4;
    *(u32*)r3 = r5; r3 += 4;
    *(u32*)r3 = r7; r3 += 4;
    r4 = (r0 >> 32);
    return sub_080484F0(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    return r0; // BX lr
    r0 = r0;
    r1 = 0x03002B98U; // [0x080484E4]
    r0 = 0x080497A4U; // [0x080484E8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080484E4..0x080484E6 (2 bytes, Thumb)
u32 sub_080484E4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 152;
    return r0;
}

// ROM Address: 0x080484E6..0x080484F8 (18 bytes, Thumb)
u32 sub_080484E6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    stack[164] = r7; // [sp + 0x290]
    r4 = (r0 >> 32);
    r1 = 0x03002B9CU; // [0x080484F8]
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804AE14U /* &VTable_0804AE14 */; // [0x080484FC]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080484F8..0x080484FA (2 bytes, Thumb)
u32 sub_080484F8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 156;
    return r0;
}

// ROM Address: 0x080484FA..0x08048508 (14 bytes, Thumb)
u32 sub_080484FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x50; // sp + 0x50
    r4 = (r0 >> 32);
    r1 = 0x03002BA4U; // [0x08048508]
    r0 = 0x08049A4CU /* &VTable_08049A4C */; // [0x0804850C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048508..0x0804850A (2 bytes, Thumb)
u32 sub_08048508(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 164;
    return r0;
}

// ROM Address: 0x0804850A..0x08048518 (14 bytes, Thumb)
u32 sub_0804850A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = stack[76]; // [sp + 0x130]
    r4 = (r0 >> 32);
    r1 = 0x03002BA8U; // [0x08048518]
    r0 = 0x080497E4U /* &VTable_080497E4 */; // [0x0804851C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048518..0x0804851A (2 bytes, Thumb)
u32 sub_08048518(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 168;
    return r0;
}

// ROM Address: 0x0804851A..0x0804854C (50 bytes, Thumb)
u32 sub_0804851A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    stack[228] = r7; // [sp + 0x390]
    r4 = (r0 >> 32);
    r1 = 0x03002BB4U; // [0x08048538]
    r0 = 0x4U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804CC58U /* &VTable_0804CC58 */; // [0x0804853C]
    *(u32*)(r1) = (u32)r0;
    r1 += 0x8U;
    r0 = 0x4U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804DCA4U /* &VTable_0804DCA4 */; // [0x08048540]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    cmp_lhs = (s32)r3; cmp_rhs = 180;
    r0 = (r0 << 12);
    r3 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    r6 = *(u32*)r4; r4 += 4;
    r4 = (r0 >> 32);
    if (cmp_lhs > cmp_rhs) return sub_0804848C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x03002BCCU; // [0x0804854C]
    r0 = 0x0804AD78U /* &VTable_0804AD78 */; // [0x08048550]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804854C..0x0804854E (2 bytes, Thumb)
u32 sub_0804854C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 204;
    return r0;
}

// ROM Address: 0x0804854E..0x0804855C (14 bytes, Thumb)
u32 sub_0804854E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r5 = 0x1E0; // sp + 0x1E0
    r4 = (r0 >> 32);
    r1 = 0x03002BD0U; // [0x0804855C]
    r0 = 0x080495F4U /* &VTable_080495F4 */; // [0x08048560]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804855C..0x0804855E (2 bytes, Thumb)
u32 sub_0804855C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 208;
    return r0;
}

// ROM Address: 0x0804855E..0x0804856C (14 bytes, Thumb)
u32 sub_0804855E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    stack[244] = r5; // [sp + 0x3D0]
    r4 = (r0 >> 32);
    r1 = 0x03002BD4U; // [0x0804856C]
    r0 = 0x08049E9CU /* &VTable_08049E9C */; // [0x08048570]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804856C..0x0804856E (2 bytes, Thumb)
u32 sub_0804856C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r3; cmp_rhs = 212;
    return r0;
}

// ROM Address: 0x0804856E..0x0804859C (46 bytes, Thumb)
u32 sub_0804856E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = stack[156]; // [sp + 0x270]
    r4 = (r0 >> 32);
    r0 = 0x03002BD8U; // [0x08048584]
    r1 = 0x0U;
    *(u32*)(r0) = (u32)r1;
    *(u32*)(r0 + 0xC) = (u32)r1;
    r1 = 0x03001964U; // [0x08048588]
    *(u32*)(r0 + 0x8) = (u32)r1;
    return r0; // BX lr
    r0 = r0;
    cmp_lhs = (s32)r3; cmp_rhs = 216;
    r0 = (r0 << 12);
    r4 = r4 + r5;
    r0 = (r0 << 12);
    r0 = 0x080492B4U; // [0x0804859C]
    r1 = 0x03002D98U; // [0x080485A0]
    *(u32*)(r1 + 0x8) = (u32)r0;
    r1 += 0xFFU;
    r0 = 0x0804931CU; // [0x080485A4]
    r1 += 0x95U;
    *(u32*)(r1 + 0x8) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804859C..0x0804859E (2 bytes, Thumb)
u32 sub_0804859C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    stack[180] = r2; // [sp + 0x2D0]
    return r0;
}

// ROM Address: 0x0804859E..0x080485B0 (18 bytes, Thumb)
u32 sub_0804859E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r5; cmp_rhs = 152;
    r0 = (r0 << 12);
    stack[28] = r3; // [sp + 0x70]
    r4 = (r0 >> 32);
    r1 = 0x03002F4CU; // [0x080485B0]
    r0 = 0x0804AA08U /* &VTable_0804AA08 */; // [0x080485B4]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080485B0..0x080485B2 (2 bytes, Thumb)
u32 sub_080485B0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 76;
    return r0;
}

// ROM Address: 0x080485B2..0x080485DC (42 bytes, Thumb)
u32 sub_080485B2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = 0x20; // sp + 0x20
    r4 = (r0 >> 32);
    r0 = 0x0804C6FCU /* &VTable_0804C6FC */; // [0x080485C8]
    r1 = 0x03002FA8U; // [0x080485CC]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AD58U /* &VTable_0804AD58 */; // [0x080485D0]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    *(u32*)r6 = r2; r6 += 4;
    *(u32*)r6 = r3; r6 += 4;
    *(u32*)r6 = r4; r6 += 4;
    *(u32*)r6 = r5; r6 += 4;
    *(u32*)r6 = r6; r6 += 4;
    *(u32*)r6 = r7; r6 += 4;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 168;
    r0 = (r0 << 12);
    r5 = 0x160; // sp + 0x160
    r4 = (r0 >> 32);
    r1 = 0x03002FC0U; // [0x080485DC]
    r0 = 0x080499FCU /* &VTable_080499FC */; // [0x080485E0]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080485DC..0x080485DE (2 bytes, Thumb)
u32 sub_080485DC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 192;
    return r0;
}

// ROM Address: 0x080485DE..0x08048618 (58 bytes, Thumb)
u32 sub_080485DE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r1 = stack[252]; // [sp + 0x3F0]
    r4 = (r0 >> 32);
    r0 = 0x0804ADF0U /* &VTable_0804ADF0 */; // [0x080485F4]
    r1 = 0x03002FC4U; // [0x080485F8]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x08049C18U /* &VTable_08049C18 */; // [0x080485FC]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r5 = 0x3C0; // sp + 0x3C0
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 196;
    r0 = (r0 << 12);
    r4 = stack[24]; // [sp + 0x60]
    r4 = (r0 >> 32);
    r0 = 0x0804CC10U /* &VTable_0804CC10 */; // [0x08048610]
    r1 = 0x03002FCCU; // [0x08048614]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804B110U /* &VTable_0804B110 */; // [0x08048618]
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r4 = *(u32*)r4; r4 += 4;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 204;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x0804861A..0x0804862A (16 bytes, Thumb)
u32 sub_0804861A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = 0x0804BEA8U; // [0x0804862C]
    r1 = 0x03002FD8U; // [0x08048630]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A6A0U /* &VTable_0804A6A0 */; // [0x08048634]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804862E..0x08048640 (18 bytes, Thumb)
u32 sub_0804862E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 216;
    r0 = (r0 << 12);
    r6 = 0x080488B8U;
    r4 = (r0 >> 32);
    r1 = 0x03002FE0U; // [0x08048640]
    r0 = 0x08049E30U /* &VTable_08049E30 */; // [0x08048644]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048640..0x08048642 (2 bytes, Thumb)
u32 sub_08048640(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 224;
    return r0;
}

// ROM Address: 0x08048642..0x08048650 (14 bytes, Thumb)
u32 sub_08048642(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = stack[48]; // [sp + 0xC0]
    r4 = (r0 >> 32);
    r1 = 0x03002FE8U; // [0x08048650]
    r0 = 0x0804AA94U /* &VTable_0804AA94 */; // [0x08048654]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048650..0x08048652 (2 bytes, Thumb)
u32 sub_08048650(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 232;
    return r0;
}

// ROM Address: 0x08048652..0x08048660 (14 bytes, Thumb)
u32 sub_08048652(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = 0x250; // sp + 0x250
    r4 = (r0 >> 32);
    r1 = 0x03002FECU; // [0x08048660]
    r0 = 0x0804A6B0U /* &VTable_0804A6B0 */; // [0x08048664]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048660..0x08048662 (2 bytes, Thumb)
u32 sub_08048660(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 236;
    return r0;
}

// ROM Address: 0x08048662..0x0804868C (42 bytes, Thumb)
u32 sub_08048662(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x08048928U;
    r4 = (r0 >> 32);
    r0 = 0x0804985CU /* &VTable_0804985C */; // [0x08048678]
    r1 = 0x03002FF0U; // [0x0804867C]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804BD00U /* &VTable_0804BD00 */; // [0x08048680]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r0 = stack[92]; // [sp + 0x170]
    r4 = (r0 >> 32);
    cmp_lhs = (s32)r7; cmp_rhs = 240;
    r0 = (r0 << 12);
    return r0;
    r4 = (r0 >> 32);
    r1 = 0x03002FF8U; // [0x0804868C]
    r0 = 0x0804D6BCU /* &VTable_0804D6BC */; // [0x08048690]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804868C..0x0804868E (2 bytes, Thumb)
u32 sub_0804868C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    cmp_lhs = (s32)r7; cmp_rhs = 248;
    return r0;
}

// ROM Address: 0x0804868E..0x08048716 (136 bytes, Thumb)
u32 sub_0804868E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_0804860C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x03002FFCU; // [0x080486A4]
    r0 = 0x0804A700U /* &VTable_0804A700 */; // [0x080486A8]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AAE4U /* &VTable_0804AAE4 */; // [0x080486AC]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
loc_080486A4:
    cmp_lhs = (s32)r7; cmp_rhs = 252;
    r0 = (r0 << 12);
    r7 = 0x080486ACU;
    r4 = (r0 >> 32);
    r2 = 0x390; // sp + 0x390
    r4 = (r0 >> 32);
    r0 = 0x0804D6F0U /* &VTable_0804D6F0 */; // [0x080486C0]
    r1 = 0x03003004U; // [0x080486C4]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804C164U; // [0x080486C8]
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if ((cmp_lhs - cmp_rhs) >= 0) goto loc_080486A4;
    r4 = (r0 >> 32);
    r0 += 0x4U;
    r0 = (r0 << 12);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r5; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
    r4 = (r0 >> 32);
    r1 = 0x03003014U; // [0x080486E0]
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804B740U /* &VTable_0804B740 */; // [0x080486E4]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A0D0U /* &VTable_0804A0D0 */; // [0x080486E8]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r0 += 0x14U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = 0x08048A2CU;
    r4 = (r0 >> 32);
    r0 = 0x0804C23CU /* &VTable_0804C23C */; // [0x080486FC]
    r1 = 0x0300301CU; // [0x08048700]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AA1CU /* &VTable_0804AA1C */; // [0x08048704]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    *(u32*)r2 = r2; r2 += 4;
    *(u32*)r2 = r3; r2 += 4;
    *(u32*)r2 = r4; r2 += 4;
    *(u32*)r2 = r5; r2 += 4;
    r4 = (r0 >> 32);
    r0 += 0x1CU;
    r0 = (r0 << 12);
    r2 = 0x70; // sp + 0x70
    r4 = (r0 >> 32);
    r0 = 0x0804BE18U /* &VTable_0804BE18 */; // [0x08048718]
    r1 = 0x03003024U; // [0x0804871C]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A638U /* &VTable_0804A638 */; // [0x08048720]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804871A..0x08048732 (24 bytes, Thumb)
u32 sub_0804871A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 += 0x24U;
    r0 = (r0 << 12);
    r6 = 0x08048804U;
    r4 = (r0 >> 32);
    r0 = 0x0804BE3CU /* &VTable_0804BE3C */; // [0x08048734]
    r1 = 0x03003030U; // [0x08048738]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A648U /* &VTable_0804A648 */; // [0x0804873C]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048736..0x0804879C (102 bytes, Thumb)
u32 sub_08048736(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 += 0x30U;
    r0 = (r0 << 12);
    r6 = 0x08048860U;
    r4 = (r0 >> 32);
    r0 = 0x0804C260U /* &VTable_0804C260 */; // [0x08048750]
    r1 = 0x0300303CU; // [0x08048754]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AA2CU /* &VTable_0804AA2C */; // [0x08048758]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    *(u32*)r2 = r5; r2 += 4;
    *(u32*)r2 = r6; r2 += 4;
    r4 = (r0 >> 32);
    r0 += 0x3CU;
    r0 = (r0 << 12);
    r2 = 0xB0; // sp + 0xB0
    r4 = (r0 >> 32);
    r0 = 0x0804C2A8U /* &VTable_0804C2A8 */; // [0x0804876C]
    r1 = 0x0300304CU; // [0x08048770]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AA4CU /* &VTable_0804AA4C */; // [0x08048774]
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    *(u32*)r2 = r3; r2 += 4;
    *(u32*)r2 = r5; r2 += 4;
    *(u32*)r2 = r7; r2 += 4;
    r4 = (r0 >> 32);
    r0 += 0x4CU;
    r0 = (r0 << 12);
    r2 = 0x130; // sp + 0x130
    r4 = (r0 >> 32);
    r0 = 0x0804D37CU /* &VTable_0804D37C */; // [0x08048788]
    r1 = 0x0300305CU; // [0x0804878C]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804BCF0U /* &VTable_0804BCF0 */; // [0x08048790]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08048884(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 += 0x5CU;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x03003064U; // [0x0804879C]
    r0 = 0x0804C1A4U /* &VTable_0804C1A4 */; // [0x080487A0]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804879C..0x0804879E (2 bytes, Thumb)
u32 sub_0804879C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x64U;
    return r0;
}

// ROM Address: 0x0804879E..0x080487C8 (42 bytes, Thumb)
u32 sub_0804879E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r5; r1 += 4;
    *(u32*)r1 = r7; r1 += 4;
    r4 = (r0 >> 32);
    r0 = 0x0804D358U /* &VTable_0804D358 */; // [0x080487B4]
    r1 = 0x03003068U; // [0x080487B8]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804BCE0U /* &VTable_0804BCE0 */; // [0x080487BC]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08048868(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 += 0x68U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x03003070U; // [0x080487C8]
    r0 = 0x0804C1C4U /* &VTable_0804C1C4 */; // [0x080487CC]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080487C8..0x080487CA (2 bytes, Thumb)
u32 sub_080487C8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0x70U;
    return r0;
}

// ROM Address: 0x080487CA..0x080487E8 (30 bytes, Thumb)
u32 sub_080487CA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
    *(u32*)r1 = r7; r1 += 4;
    r4 = (r0 >> 32);
    r0 = 0x0804CD18U; // [0x080487E0]
    r1 = 0x03003074U; // [0x080487E4]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804B200U /* &VTable_0804B200 */; // [0x080487E8]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r3 = *(u32*)r5; r5 += 4;
    r4 = *(u32*)r5; r5 += 4;
    r4 = (r0 >> 32);
    r0 += 0x74U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x080487EA..0x080487F4 (10 bytes, Thumb)
u32 sub_080487EA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0300307CU; // [0x080487F4]
    r0 = 0x0804B168U /* &VTable_0804B168 */; // [0x080487F8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080487FA..0x08048804 (10 bytes, Thumb)
u32 sub_080487FA(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x03003080U; // [0x08048804]
    r0 = 0x0804B178U /* &VTable_0804B178 */; // [0x08048808]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804880A..0x08048828 (30 bytes, Thumb)
u32 sub_0804880A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x0300308CU; // [0x08048820]
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804CCCCU /* &VTable_0804CCCC */; // [0x08048824]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804B1D0U /* &VTable_0804B1D0 */; // [0x08048828]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r0 += 0x8CU;
    r0 = (r0 << 12);
    r2 = *(u32*)r4; r4 += 4;
    r3 = *(u32*)r4; r4 += 4;
    r6 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r4 = (r0 >> 32);
    return r0;
}

// ROM Address: 0x0804882A..0x08048844 (26 bytes, Thumb)
u32 sub_0804882A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 = 0x030030A0U; // [0x08048834]
    r0 = 0x0804BD88U /* &VTable_0804BD88 */; // [0x08048838]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 += 0xA0U;
    r0 = (r0 << 12);
    return r0;
    r4 = (r0 >> 32);
    r1 = 0x030030A4U; // [0x08048844]
    r0 = 0x0804B158U /* &VTable_0804B158 */; // [0x08048848]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804884A..0x08048864 (26 bytes, Thumb)
u32 sub_0804884A(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = 0x0804CCF4U /* &VTable_0804CCF4 */; // [0x0804885C]
    r1 = 0x030030A8U; // [0x08048860]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804B1F0U /* &VTable_0804B1F0 */; // [0x08048864]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r2 = *(u32*)r4; r4 += 4;
    r4 = *(u32*)r4; r4 += 4;
    r5 = *(u32*)r4; r4 += 4;
    r6 = *(u32*)r4; r4 += 4;
    r7 = *(u32*)r4; r4 += 4;
    r4 = (r0 >> 32);
    r0 += 0xA8U;
    r0 = (r0 << 12);
    return r0;
}

// ROM Address: 0x08048866..0x0804888C (38 bytes, Thumb)
u32 sub_08048866(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r0 = 0x0804D7ACU /* &VTable_0804D7AC */; // [0x08048878]
    r1 = 0x030030B0U; // [0x0804887C]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804C1FCU /* &VTable_0804C1FC */; // [0x08048880]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if ((cmp_lhs - cmp_rhs) >= 0) return sub_080487D4(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 += 0xB0U;
    r0 = (r0 << 12);
    *(u32*)r1 = r2; r1 += 4;
    *(u32*)r1 = r3; r1 += 4;
    *(u32*)r1 = r4; r1 += 4;
    *(u32*)r1 = r5; r1 += 4;
    *(u32*)r1 = r6; r1 += 4;
    *(u32*)r1 = r7; r1 += 4;
    r4 = (r0 >> 32);
    r1 = 0x030030B8U; // [0x0804888C]
    r0 = 0x0804C650U /* &VTable_0804C650 */; // [0x08048890]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804888C..0x0804888E (2 bytes, Thumb)
u32 sub_0804888C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xB8U;
    return r0;
}

// ROM Address: 0x0804888E..0x0804889C (14 bytes, Thumb)
u32 sub_0804888E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    *(u32*)r6 = r4; r6 += 4;
    *(u32*)r6 = r6; r6 += 4;
    r4 = (r0 >> 32);
    r1 = 0x030030C0U; // [0x0804889C]
    r0 = 0x0804B0D8U /* &VTable_0804B0D8 */; // [0x080488A0]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804889C..0x0804889E (2 bytes, Thumb)
u32 sub_0804889C(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xC0U;
    return r0;
}

// ROM Address: 0x0804889E..0x080488AC (14 bytes, Thumb)
u32 sub_0804889E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x030030C4U; // [0x080488AC]
    r0 = 0x0804A690U /* &VTable_0804A690 */; // [0x080488B0]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080488AC..0x080488AE (2 bytes, Thumb)
u32 sub_080488AC(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xC4U;
    return r0;
}

// ROM Address: 0x080488AE..0x080488F4 (70 bytes, Thumb)
u32 sub_080488AE(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r6 = 0x08048AF4U;
    r4 = (r0 >> 32);
    r0 = 0x0804D334U; // [0x080488C4]
    r1 = 0x030030C8U; // [0x080488C8]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804BCD0U /* &VTable_0804BCD0 */; // [0x080488CC]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if ((u32)cmp_lhs < (u32)cmp_rhs) return sub_08048930(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 += 0xC8U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = 0x0804C2F0U /* &VTable_0804C2F0 */; // [0x080488E0]
    r1 = 0x030030D0U; // [0x080488E4]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804AA74U /* &VTable_0804AA74 */; // [0x080488E8]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    *(u32*)r2 = r4; r2 += 4;
    *(u32*)r2 = r5; r2 += 4;
    *(u32*)r2 = r6; r2 += 4;
    *(u32*)r2 = r7; r2 += 4;
    r4 = (r0 >> 32);
    r0 += 0xD0U;
    r0 = (r0 << 12);
    r2 = 0x1D0; // sp + 0x1D0
    r4 = (r0 >> 32);
    r1 = 0x030030D8U; // [0x080488F4]
    r0 = 0x0804D2C8U /* &VTable_0804D2C8 */; // [0x080488F8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080488F4..0x080488F6 (2 bytes, Thumb)
u32 sub_080488F4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xD8U;
    return r0;
}

// ROM Address: 0x080488F6..0x08048904 (14 bytes, Thumb)
u32 sub_080488F6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    if ((u32)cmp_lhs >= (u32)cmp_rhs) return sub_0804888C(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 = 0x030030DCU; // [0x08048904]
    r0 = 0x0804CB38U; // [0x08048908]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048904..0x08048906 (2 bytes, Thumb)
u32 sub_08048904(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xDCU;
    return r0;
}

// ROM Address: 0x08048906..0x08048950 (74 bytes, Thumb)
u32 sub_08048906(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r3 = *(u32*)r3; r3 += 4;
    r4 = *(u32*)r3; r3 += 4;
    r5 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r0 = 0x0804DBF0U /* &VTable_0804DBF0 */; // [0x0804891C]
    r1 = 0x030030E0U; // [0x08048920]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804CBA0U /* &VTable_0804CBA0 */; // [0x08048924]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if (cmp_lhs < cmp_rhs) return sub_08048900(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r0 += 0xE0U;
    r0 = (r0 << 12);
    r5 = *(u32*)r3; r3 += 4;
    r7 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r1 = 0x030030ECU; // [0x0804893C]
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804B7D0U; // [0x08048940]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A148U /* &VTable_0804A148 */; // [0x08048944]
    r1 -= 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r0 += 0xECU;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x08048A68U;
    r4 = (r0 >> 32);
    r1 = 0x030030F8U; // [0x08048950]
    r0 = 0x0804BCC0U /* &VTable_0804BCC0 */; // [0x08048954]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048950..0x08048952 (2 bytes, Thumb)
u32 sub_08048950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xF8U;
    return r0;
}

// ROM Address: 0x08048952..0x08048960 (14 bytes, Thumb)
u32 sub_08048952(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r1 = 0x030030FCU; // [0x08048960]
    r0 = 0x08049A5CU /* &VTable_08049A5C */; // [0x08048964]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048960..0x08048962 (2 bytes, Thumb)
u32 sub_08048960(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 += 0xFCU;
    return r0;
}

// ROM Address: 0x08048962..0x08048974 (18 bytes, Thumb)
u32 sub_08048962(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = stack[92]; // [sp + 0x170]
    r4 = (r0 >> 32);
    r1 = 0x03003100U; // [0x08048974]
    r0 = 0x3U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804CC80U /* &VTable_0804CC80 */; // [0x08048978]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048974..0x08048976 (2 bytes, Thumb)
u32 sub_08048974(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x0U;
    return r0;
}

// ROM Address: 0x08048976..0x0804898A (20 bytes, Thumb)
u32 sub_08048976(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r7 = *(u32*)r4; r4 += 4;
    r4 = (r0 >> 32);
    r0 = 0x0804BE84U /* &VTable_0804BE84 */; // [0x0804898C]
    r1 = 0x03003108U; // [0x08048990]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804A680U /* &VTable_0804A680 */; // [0x08048994]
    r1 += 0x8U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x0804898E..0x080489A0 (18 bytes, Thumb)
u32 sub_0804898E(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 += 0x8U;
    r0 = (r0 << 12);
    r6 = 0x08048B98U;
    r4 = (r0 >> 32);
    r1 = 0x03003114U; // [0x080489A0]
    r0 = 0x0804AA84U /* &VTable_0804AA84 */; // [0x080489A4]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x080489A0..0x080489A2 (2 bytes, Thumb)
u32 sub_080489A0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x14U;
    return r0;
}

// ROM Address: 0x080489A2..0x08048A02 (96 bytes, Thumb)
u32 sub_080489A2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r0 = (r0 << 12);
    r2 = 0x210; // sp + 0x210
    r4 = (r0 >> 32);
    r1 = 0x03003118U; // [0x080489B4]
    r0 = 0x2U;
    *(u8*)(r1 + 0x4) = (u8)r0;
    r0 = 0x0804B840U /* &VTable_0804B840 */; // [0x080489B8]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r1 += 0x18U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = 0x0804D944U /* &VTable_0804D944 */; // [0x080489CC]
    r1 = 0x03003120U; // [0x080489D0]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804C620U /* &VTable_0804C620 */; // [0x080489D4]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    if ((u32)cmp_lhs <= (u32)cmp_rhs) return sub_08048A58(r0, r1, r2, r3);
    r4 = (r0 >> 32);
    r1 += 0x20U;
    r0 = (r0 << 12);
    *(u32*)r6 = r5; r6 += 4;
    r4 = (r0 >> 32);
    r0 = 0x0804CBECU /* &VTable_0804CBEC */; // [0x080489E8]
    r1 = 0x03003128U; // [0x080489EC]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804B0A0U /* &VTable_0804B0A0 */; // [0x080489F0]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
    r0 = r0;
    r2 = *(u32*)r3; r3 += 4;
    r3 = *(u32*)r3; r3 += 4;
    r5 = *(u32*)r3; r3 += 4;
    r6 = *(u32*)r3; r3 += 4;
    r7 = *(u32*)r3; r3 += 4;
    r4 = (r0 >> 32);
    r1 += 0x28U;
    r0 = (r0 << 12);
    r4 = (r0 >> 32);
    r0 = 0x0804DE34U /* &VTable_0804DE34 */; // [0x08048A04]
    r1 = 0x03003130U; // [0x08048A08]
    *(u32*)(r1) = (u32)r0;
    r0 = 0x0804CFCCU /* &VTable_0804CFCC */; // [0x08048A0C]
    r1 += 0x4U;
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048A06..0x08048A18 (18 bytes, Thumb)
u32 sub_08048A06(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r4 = (r0 >> 32);
    r1 += 0x30U;
    r0 = (r0 << 12);
    r2 = *(u32*)r7; r7 += 4;
    r3 = *(u32*)r7; r7 += 4;
    r6 = *(u32*)r7; r7 += 4;
    r7 = *(u32*)r7; r7 += 4;
    r4 = (r0 >> 32);
    r1 = 0x03003138U; // [0x08048A18]
    r0 = 0x0804A658U /* &VTable_0804A658 */; // [0x08048A1C]
    *(u32*)(r1) = (u32)r0;
    return r0; // BX lr
}

// ROM Address: 0x08048A18..0x08048A1A (2 bytes, Thumb)
u32 sub_08048A18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, lr = 0;
    u32 stack[128] = {0};
    s32 cmp_lhs = 0, cmp_rhs = 0;
    r1 += 0x38U;
    return r0;
}
