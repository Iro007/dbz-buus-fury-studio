/**
 * Dragon Ball Z: Buu's Fury — Map Script Bytecode Virtual Machine & Event Dispatcher
 * Reconstructed original C++ code from ARM7TDMI/Thumb assembly:
 *   - ScriptVM_ExecuteStream (0x08004038, tools/build/opcode_stream.py)
 *   - Opcode Dispatch Table  (0x080554C0, 31 opcodes 0x00..0x1E, 0x11 = END)
 *   - Opcode Handlers        (0x08003C74..0x0800402A)
 */

#include "../include/buusfury_types.hpp"

struct ScriptVMContext {
    const u8* pc;           // +0x00: Current bytecode stream pointer
    s32       accumulator;  // +0x04: Primary VM evaluation register
    s32       stack[16];    // +0x08: Evaluation / loop stack
    int       sp;           // +0x48: Stack pointer
    u8        flags[256];   // +0x4C: Local/story script variables
};

typedef void (*ScriptOpcodeHandlerFn)(ScriptVMContext* vm);

/* ============================================================================
 * Helper: Decode 7-bit continuation varint (used by opcodes 0x01 and 0x1D)
 * Matches thumb loop at 0x08003C8A..0x08003CA2:
 *   ldrb r3, [r4]; adds r4, #1; lsls/orrs; bmi loop
 * ============================================================================ */
static u32 ScriptVM_ReadVarint(ScriptVMContext* vm) {
    u32 value = 0;
    while (true) {
        u8 byte = *vm->pc++;
        value = (value << 7) | (byte & 0x7F);
        if ((byte & 0x80) == 0) {
            break;
        }
    }
    return value;
}

/* ============================================================================
 * Opcode Handlers (0x08003C74..0x0800402A)
 * ============================================================================ */
static void Op_00_LoadByteImm(ScriptVMContext* vm) {       // 0x08003C74 (kind: byte)
    vm->accumulator = *vm->pc++;
}

static void Op_01_LoadVarintImm(ScriptVMContext* vm) {     // 0x08003C8A (kind: varint)
    vm->accumulator = (s32)ScriptVM_ReadVarint(vm);
}

static void Op_02_ReadFlagByte(ScriptVMContext* vm) {      // 0x08003CBE (kind: byte)
    u8 idx = *vm->pc++;
    vm->accumulator = vm->flags[idx];
}

static void Op_03_WriteFlagByte(ScriptVMContext* vm) {     // 0x08003CD4 (kind: byte)
    u8 idx = *vm->pc++;
    vm->flags[idx] = (u8)vm->accumulator;
}

static void Op_04_PushAcc(ScriptVMContext* vm) {           // 0x08003CF6 (kind: none)
    if (vm->sp < 15) vm->stack[vm->sp++] = vm->accumulator;
}

static void Op_05_PopAdd(ScriptVMContext* vm) {            // 0x08003D16 (kind: none)
    if (vm->sp > 0) vm->accumulator = vm->stack[--vm->sp] + vm->accumulator;
}

static void Op_06_PopSub(ScriptVMContext* vm) {            // 0x08003D30 (kind: none)
    if (vm->sp > 0) vm->accumulator = vm->stack[--vm->sp] - vm->accumulator;
}

static void Op_07_PopMul(ScriptVMContext* vm) {            // 0x08003D3E (kind: none)
    if (vm->sp > 0) vm->accumulator = vm->stack[--vm->sp] * vm->accumulator;
}

static void Op_08_PopDiv(ScriptVMContext* vm) {            // 0x08003D52 (kind: none)
    if (vm->sp > 0 && vm->accumulator != 0) {
        vm->accumulator = vm->stack[--vm->sp] / vm->accumulator;
    }
}

static void Op_09_PopBitAnd(ScriptVMContext* vm) {         // 0x08003D66 (kind: none)
    if (vm->sp > 0) vm->accumulator = vm->stack[--vm->sp] & vm->accumulator;
}

static void Op_0A_PopBitOr(ScriptVMContext* vm) {          // 0x08003D7A (kind: none)
    if (vm->sp > 0) vm->accumulator = vm->stack[--vm->sp] | vm->accumulator;
}

static void Op_0B_CmpEq(ScriptVMContext* vm) {             // 0x08003DAA (kind: none)
    if (vm->sp > 0) vm->accumulator = (vm->stack[--vm->sp] == vm->accumulator) ? 1 : 0;
}

static void Op_0C_CmpNe(ScriptVMContext* vm) {             // 0x08003DC4 (kind: none)
    if (vm->sp > 0) vm->accumulator = (vm->stack[--vm->sp] != vm->accumulator) ? 1 : 0;
}

static void Op_0D_CmpLt(ScriptVMContext* vm) {             // 0x08003DDE (kind: none)
    if (vm->sp > 0) vm->accumulator = (vm->stack[--vm->sp] < vm->accumulator) ? 1 : 0;
}

static void Op_0E_CmpLe(ScriptVMContext* vm) {             // 0x08003DF8 (kind: none)
    if (vm->sp > 0) vm->accumulator = (vm->stack[--vm->sp] <= vm->accumulator) ? 1 : 0;
}

static void Op_0F_CmpGt(ScriptVMContext* vm) {             // 0x08003E12 (kind: none)
    if (vm->sp > 0) vm->accumulator = (vm->stack[--vm->sp] > vm->accumulator) ? 1 : 0;
}

static void Op_10_CmpGe(ScriptVMContext* vm) {             // 0x08003E2C (kind: none)
    if (vm->sp > 0) vm->accumulator = (vm->stack[--vm->sp] >= vm->accumulator) ? 1 : 0;
}

static void Op_12_JumpForward(ScriptVMContext* vm) {       // 0x08003E46 (kind: jump)
    const u8* base = vm->pc;
    u16 offset = (u16)((base[0] << 8) | base[1]);
    vm->pc = base + offset;
}

static void Op_13_BranchIfZero(ScriptVMContext* vm) {      // 0x08003E56 (kind: branch)
    const u8* base = vm->pc;
    u16 offset = (u16)((base[0] << 8) | base[1]);
    if (vm->accumulator == 0) {
        vm->pc = base + offset;
    } else {
        vm->pc = base + 2;
    }
}

static void Op_14_Negate(ScriptVMContext* vm) {            // 0x08003E7C (kind: none)
    vm->accumulator = !vm->accumulator;
}

static void Op_15_CommandByteA(ScriptVMContext* vm) {      // 0x08003E84 (kind: byte)
    u8 arg = *vm->pc++;
    vm->accumulator = arg;
}

static void Op_16_CommandByteB(ScriptVMContext* vm) {      // 0x08003EB4 (kind: byte)
    u8 arg = *vm->pc++;
    vm->accumulator = arg;
}

static void Op_17_CommandByteC(ScriptVMContext* vm) {      // 0x08003EE4 (kind: byte)
    u8 arg = *vm->pc++;
    vm->accumulator = arg;
}

static void Op_18_CommandByteD(ScriptVMContext* vm) {      // 0x08003F10 (kind: byte)
    u8 arg = *vm->pc++;
    vm->accumulator = arg;
}

static void Op_19_CommandByteE(ScriptVMContext* vm) {      // 0x08003F48 (kind: byte)
    u8 arg = *vm->pc++;
    vm->accumulator = arg;
}

static void Op_1A_CommandByteF(ScriptVMContext* vm) {      // 0x08003F78 (kind: byte)
    u8 arg = *vm->pc++;
    vm->accumulator = arg;
}

static void Op_1B_NopSync(ScriptVMContext* vm) {           // 0x08003FA4 (kind: none)
    (void)vm;
}

static void Op_1C_LoopBackward(ScriptVMContext* vm) {      // 0x08003FC0 (kind: loop)
    const u8* base = vm->pc;
    u16 offset = (u16)((base[0] << 8) | base[1]);
    if (vm->accumulator != 0) {
        vm->pc = base - offset;
    } else {
        vm->pc = base + 2;
    }
}

static void Op_1D_CountedVarints(ScriptVMContext* vm) {    // 0x08003FEE (kind: counted)
    u8 count = *vm->pc++;
    for (u8 i = 0; i < count; ++i) {
        u32 v = ScriptVM_ReadVarint(vm);
        vm->accumulator = (s32)v;
    }
}

static void Op_1E_BitXor(ScriptVMContext* vm) {            // 0x08003D92 (kind: none)
    if (vm->sp > 0) vm->accumulator = vm->stack[--vm->sp] ^ vm->accumulator;
}

/* ============================================================================
 * Master Opcode Dispatch Table at 0x080554C0
 * Note: Slot 0x11 is nullptr, which terminates the interpreter loop at 0x08004070!
 * ============================================================================ */
const ScriptOpcodeHandlerFn g_ScriptOpcodeTable[31] = {
    Op_00_LoadByteImm,      // 0x00 -> 0x08003C75
    Op_01_LoadVarintImm,    // 0x01 -> 0x08003C8B
    Op_02_ReadFlagByte,     // 0x02 -> 0x08003CBF
    Op_03_WriteFlagByte,    // 0x03 -> 0x08003CD5
    Op_04_PushAcc,          // 0x04 -> 0x08003CF7
    Op_05_PopAdd,           // 0x05 -> 0x08003D17
    Op_06_PopSub,           // 0x06 -> 0x08003D31
    Op_07_PopMul,           // 0x07 -> 0x08003D3F
    Op_08_PopDiv,           // 0x08 -> 0x08003D53
    Op_09_PopBitAnd,        // 0x09 -> 0x08003D67
    Op_0A_PopBitOr,         // 0x0A -> 0x08003D7B
    Op_0B_CmpEq,            // 0x0B -> 0x08003DAB
    Op_0C_CmpNe,            // 0x0C -> 0x08003DC5
    Op_0D_CmpLt,            // 0x0D -> 0x08003DDF
    Op_0E_CmpLe,            // 0x0E -> 0x08003DF9
    Op_0F_CmpGt,            // 0x0F -> 0x08003E13
    Op_10_CmpGe,            // 0x10 -> 0x08003E2D
    nullptr,                // 0x11 -> 0x00000000 (END opcode!)
    Op_12_JumpForward,      // 0x12 -> 0x08003E47
    Op_13_BranchIfZero,     // 0x13 -> 0x08003E57
    Op_14_Negate,           // 0x14 -> 0x08003E7D
    Op_15_CommandByteA,     // 0x15 -> 0x08003E85
    Op_16_CommandByteB,     // 0x16 -> 0x08003EB5
    Op_17_CommandByteC,     // 0x17 -> 0x08003EE5
    Op_18_CommandByteD,     // 0x18 -> 0x08003F11
    Op_19_CommandByteE,     // 0x19 -> 0x08003F49
    Op_1A_CommandByteF,     // 0x1A -> 0x08003F79
    Op_1B_NopSync,          // 0x1B -> 0x08003FA5
    Op_1C_LoopBackward,     // 0x1C -> 0x08003FC1
    Op_1D_CountedVarints,   // 0x1D -> 0x08003FEF
    Op_1E_BitXor,           // 0x1E -> 0x08003D93
};

/* ============================================================================
 * ScriptVM_ExecuteStream (0x08004038)
 * Fetches opcodes one byte at a time, indexes g_ScriptOpcodeTable (0x080554C0),
 * and executes handlers until hitting a null table entry (opcode 0x11 = END).
 * ============================================================================ */
void ScriptVM_ExecuteStream(ScriptVMContext* vm, const u8* stream_start) {
    vm->pc = stream_start;
    while (true) {
        u8 opcode = *vm->pc++;
        if (opcode >= 31) {
            break;
        }
        ScriptOpcodeHandlerFn handler = g_ScriptOpcodeTable[opcode];
        if (handler == nullptr) {
            // Opcode 0x11 (END) holds 0x00000000 in table 0x080554C0
            break;
        }
        handler(vm);
    }
}
