/**
 * Dragon Ball Z: Buu's Fury — GBA Hardware Drivers (DMA, Blend, BG Scroll, Mosaic, IRQ, Math)
 * Reconstructed original C++ code from ARM7TDMI/Thumb assembly:
 *   - Blend_WriteControl1..5, Blend_WriteAlpha2..4
 *   - Bg_WriteScroll2And3, Bg_WriteScroll3, Bg_WriteScroll0AndBlendAlpha
 *   - Mosaic_WriteSize1..2, Bg_WriteControl0AndMosaic2
 *   - Dma_Start3First, Dma_Start3Second
 *   - Irq_WriteEnable1..3, Irq_WriteMaster1..3, Irq_WriteEnableAndTimer3
 *   - Math_ScaleByTable1
 */

#include "../include/buusfury_types.hpp"

/* ============================================================================
 * 1. Color Blending & Alpha Hardware Functions (REG_BLDCNT / REG_BLDALPHA)
 * ============================================================================ */
void Blend_WriteControl1(u16 bldcnt_val) { // 0x0800536A
    REG_BLDCNT = bldcnt_val;
}

void Blend_WriteControl2(u16 bldcnt_val) { // 0x080059AE
    REG_BLDCNT = bldcnt_val;
}

void Blend_WriteControl3(u16 bldcnt_val) { // 0x08015886
    REG_BLDCNT = bldcnt_val;
}

void Blend_WriteControl4(u16 bldcnt_val) { // 0x080253EA
    REG_BLDCNT = bldcnt_val;
}

void Blend_WriteControl5(u16 bldcnt_val) { // 0x08025404
    REG_BLDCNT = bldcnt_val;
}

void Blend_WriteAlpha2(u8 eva_evb) { // 0x08017AFC
    REG_BLDALPHA_EVB = eva_evb;
    REG_BLDALPHA_EVA = eva_evb;
}

void Blend_WriteAlpha4(u8 eva) { // 0x080337EC
    REG_BLDALPHA_EVA = eva;
}

void Blend_WriteControlAndAlpha5(u16 bldcnt, u8 eva, u8 evb) { // 0x08030F78
    REG_BLDCNT       = bldcnt;
    REG_BLDALPHA_EVA = eva;
    REG_BLDALPHA_EVB = evb;
}

/* ============================================================================
 * 2. Background Scroll & Mosaic Hardware Functions
 * ============================================================================ */
void Bg_WriteScroll2And3(u16 bg3_vofs, u16 hofs, u16 bg2_vofs) { // 0x08025D2E
    REG_BG2HOFS = hofs;
    REG_BG2VOFS = bg2_vofs;
    REG_BG3HOFS = hofs;
    REG_BG3VOFS = bg3_vofs;
}

void Bg_WriteScroll3(u16 scroll_val) { // 0x0802E97A
    REG_BG3HOFS = scroll_val;
    REG_BG3VOFS = scroll_val;
}

void Bg_WriteScroll0AndBlendAlpha(u16 hofs, u16 vofs, u8 eva, u8 evb) { // 0x08030C2E
    REG_BG0HOFS      = hofs;
    REG_BG0VOFS      = vofs;
    REG_BLDALPHA_EVA = eva;
    REG_BLDALPHA_EVB = evb;
}

void Mosaic_WriteSize1(u8 mosaic_val) { // 0x0802C976
    REG_MOSAIC_L = mosaic_val;
    REG_MOSAIC_H = mosaic_val;
}

void Mosaic_WriteSize2(u8 mosaic_val) { // 0x0802CA2E
    REG_MOSAIC_L = mosaic_val;
    REG_MOSAIC_H = mosaic_val;
}

void Bg_WriteControl0AndMosaic2(u8 mosaic_val, u16 bg0cnt_val) { // 0x0802CA42
    REG_MOSAIC_L = mosaic_val;
    REG_MOSAIC_H = mosaic_val;
    REG_BG0CNT   = bg0cnt_val;
}

/* ============================================================================
 * 3. DMA3 Transfer Drivers (0x080081E4 & 0x08008306)
 * ============================================================================ */
void Dma_Start3First(const void* src, void* dst, u16 word_count, u16 dma_ctrl) { // 0x080081E4
    REG_DMA3SAD   = (u32)src;
    REG_DMA3DAD   = (u32)dst;
    REG_DMA3CNT_L = word_count;
    REG_DMA3CNT_H = dma_ctrl;
}

void Dma_Start3Second(const void* src, void* dst, u16 word_count, u16 dma_ctrl) { // 0x08008306
    REG_DMA3SAD   = (u32)src;
    REG_DMA3DAD   = (u32)dst;
    REG_DMA3CNT_L = word_count;
    REG_DMA3CNT_H = dma_ctrl;
}

/* ============================================================================
 * 4. Interrupt & Timer Drivers (REG_IE / REG_IF / REG_IME / REG_TM2 / REG_TM3)
 * ============================================================================ */
void Irq_WriteEnable1(u16 mask) { // 0x080080D8
    u16 ie = REG_IE;
    REG_IE = ie | mask;
}

void Irq_WriteEnable2(u16 mask) { // 0x08008174
    u16 ie = REG_IE;
    REG_IE = ie & ~mask;
}

void Irq_WriteMaster1(u16 ime_val) { // 0x0803DF14
    REG_IME = ime_val;
}

void Irq_WriteEnableAndTimer3(u16 ie_bits, u32 tm3_ctrl) { // 0x08040DDA
    u16 prev_ime = REG_IME;
    REG_IME      = 0;
    REG_IE      |= ie_bits;
    REG_IME      = prev_ime;
    REG_TM3CNT_L = (u16)(tm3_ctrl & 0xFFFF);
    REG_TM3CNT_H = (u16)(tm3_ctrl >> 16);
    REG_IF       = ie_bits;
}

void Timer_Write2Reload1(u16 reload_val) { // 0x080417AC
    REG_TM2CNT_L = reload_val;
}
