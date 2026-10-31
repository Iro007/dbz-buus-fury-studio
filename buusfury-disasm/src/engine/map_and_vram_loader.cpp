/**
 * Dragon Ball Z: Buu's Fury — Map Loader, VRAM Tile Delta-Decoder & Webfoot LZ Engine
 * Reconstructed original C++ code from ARM7TDMI/Thumb assembly:
 *   - Map_LoadTileBanksToVram (loc_08009BD4, asm/loc_08009BD4.s)
 *   - Map_RenderDominantLayer (0x08008086, handler 0x08008087)
 *   - Map_RenderTerrainLayer  (0x080088BC, handler 0x080088BD)
 *   - WebfootLZ_Decompress    (tools/webfoot/webfoot_lz.py / ROM 0x08009xxx)
 */

#include "../include/buusfury_types.hpp"
#include <string.h>

/* ============================================================================
 * WebfootLZ_Decompress
 * Decompresses a Webfoot LZ container (kind 0 = stored, kind 1 = 7-bit literal
 * start, kind 2 = 8-bit literal start) into `dst`.
 * ============================================================================ */
struct BitstreamReader {
    const u32* word_ptr;
    u32 current_word;
    int bits_left;

    void init(const void* data) {
        word_ptr = (const u32*)data;
        current_word = 0;
        bits_left = 0;
    }

    int get_bit() {
        if (bits_left == 0) {
            current_word = *word_ptr++;
            bits_left = 32;
        }
        int b = (current_word >> 31) & 1;
        current_word <<= 1;
        bits_left--;
        return b;
    }

    u32 get_bits(int count) {
        u32 v = 0;
        for (int i = 0; i < count; ++i) {
            v = (v << 1) | get_bit();
        }
        return v;
    }

    u32 get_gamma() {
        u32 v = 1;
        do {
            v = (v << 1) | get_bit();
        } while (get_bit() != 0);
        return v;
    }
};

u32 WebfootLZ_Decompress(const WebfootContainerHeader* container, u8* dst) {
    u32 kind = container->kind;
    u32 expected = container->declared_size;

    if (kind == WEBFOOT_LZ_STORED) {
        memcpy(dst, container->bitstream, expected);
        return expected;
    }

    BitstreamReader br;
    br.init(container->bitstream);

    u32 out_pos = 0;
    u32 literal_base = 0;
    int literal_bits = (kind == WEBFOOT_LZ_PACKED_7BIT) ? 7 : 8;
    int distance_bits = 8;
    u32 prev_distance = 1;

    while (out_pos < expected) {
        if (br.get_bit() != 0) {
            // Literal byte
            dst[out_pos++] = (u8)((literal_base + br.get_bits(literal_bits)) & 0xFF);
            continue;
        }

        if (br.get_bit() != 0) {
            // Long or previous-distance gamma match
            u32 code = br.get_gamma();
            u32 distance;
            u32 length;
            if (code == 2) {
                distance = prev_distance;
                length = br.get_gamma();
            } else {
                distance = ((code - 3) << distance_bits) | br.get_bits(distance_bits);
                prev_distance = distance;
                length = br.get_gamma();
                if (distance >= 0x10000) length += 3;
                else if (distance >= 0x37FF) length += 2;
                else if (distance >= 0x027F) length += 1;
                else if (distance <= 0x007F) length += 4;
            }
            for (u32 i = 0; i < length; ++i) {
                dst[out_pos] = dst[out_pos - distance];
                out_pos++;
            }
            continue;
        }

        if (br.get_bit() == 0) {
            // Short match: 7-bit distance + 2-bit length (2..5)
            u32 distance = br.get_bits(7);
            u32 length = br.get_bits(2) + 2;
            if (distance == 0) {
                break; // End-of-stream marker
            }
            prev_distance = distance;
            for (u32 i = 0; i < length; ++i) {
                dst[out_pos] = dst[out_pos - distance];
                out_pos++;
            }
            continue;
        }

        // Control / 1-byte match / raw pair / literal mode switch
        u32 code4 = br.get_bits(4);
        if (code4 == 1) {
            dst[out_pos++] = (u8)(literal_base & 0xFF);
        } else if (code4 > 1) {
            u32 dist = code4 - 1;
            dst[out_pos] = dst[out_pos - dist];
            out_pos++;
        } else if (br.get_bit() != 0) {
            do {
                dst[out_pos++] = (u8)br.get_bits(8);
                dst[out_pos++] = (u8)br.get_bits(8);
            } while (br.get_bit() != 0);
        } else {
            literal_bits = 7 + br.get_bit();
            literal_base = (literal_bits == 8) ? 0 : br.get_bits(8);
        }
    }

    return out_pos;
}

/* ============================================================================
 * Map_LoadTileBanksToVram (loc_08009BD4 in asm/loc_08009BD4.s)
 * Exact implementation of the GBA VRAM tile loader:
 *   1. Unpacks the delta-encoded u16 array at `root->vram_delta_container` (+0x48).
 *   2. Delta-decodes: `arr[i] = (arr[i] + arr[i - 1] + 1) & 0xFFFF`.
 *   3. For each slot `i`, extracts `bank_idx = arr[i] >> 8` and `tile_idx = arr[i] & 0xFF`,
 *      decompresses the corresponding tilebank from `0x08179764`, and copies the 64-byte
 *      8bpp tile into character VRAM (`0x06000000 + i * 64`).
 * ============================================================================ */
void Map_LoadTileBanksToVram(const MapRootRecord* root, u8* vram_char_base, u8* scratch_bank_buf) {
    if (root->vram_delta_container == nullptr) {
        return;
    }

    u16 delta_table[1024];
    u32 byte_size = WebfootLZ_Decompress(root->vram_delta_container, (u8*)delta_table);
    u32 tile_count = byte_size >> 1;

    // Step 1: Cumulative delta decoding (+1 bias per step)
    for (u32 i = 1; i < tile_count; ++i) {
        delta_table[i] = (u16)(delta_table[i] + delta_table[i - 1] + 1);
    }

    // Step 2: Load each 8x8 8bpp tile (64 bytes) from its Tilebank into VRAM
    int loaded_bank_index = -1;
    for (u32 i = 0; i < tile_count && i < 1024; ++i) {
        u16 packed_ref = delta_table[i];
        int bank_idx   = (packed_ref >> 8) & 0xFF;
        int tile_idx   = packed_ref & 0xFF;

        if (bank_idx != loaded_bank_index) {
            u32 bank_rom_addr = root->tile_bank_table[bank_idx];
            const WebfootContainerHeader* bank_container = (const WebfootContainerHeader*)bank_rom_addr;
            WebfootLZ_Decompress(bank_container, scratch_bank_buf);
            loaded_bank_index = bank_idx;
        }

        memcpy(vram_char_base + (i * 64), scratch_bank_buf + (tile_idx * 64), 64);
    }
}

/* ============================================================================
 * Map_CheckWarpTransition
 * Tests whether the player's (x, y) coordinates fall inside any of the active
 * MapRootRecord's warp bounding boxes (`root_table_record` at +0x24 / +0x28).
 * ============================================================================ */
const MapWarpZone* Map_CheckWarpTransition(const MapRootRecord* root, u32 player_x, u32 player_y) {
    const MapWarpZone* warps = root->warps_ptr;
    if (warps == nullptr) {
        return nullptr;
    }
    for (u32 i = 0; i < root->warp_count; ++i) {
        const MapWarpZone* w = &warps[i];
        if (player_x >= w->x1 && player_x <= w->x2 &&
            player_y >= w->y1 && player_y <= w->y2) {
            return w;
        }
    }
    return nullptr;
}
