#!/usr/bin/env python3
"""
Dragon Ball Z: Buu's Fury — Map, Character/Sprite/Enemy & Event Editor Backend
Reads and patches `buusfury-disasm/baserom.gba` and extracted payload stores.
"""
from __future__ import annotations

import base64
import json
import os
import struct
import sys
import traceback
import urllib.parse
import zlib
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer

HERE = os.path.dirname(os.path.abspath(__file__))
WORKSPACE = os.path.dirname(HERE)
DISASM_ROOT = os.path.join(WORKSPACE, "buusfury-disasm")

sys.path.insert(0, os.path.join(DISASM_ROOT, "tools"))
sys.path.insert(0, os.path.join(DISASM_ROOT, "tools", "webfoot"))
sys.path.insert(0, os.path.join(DISASM_ROOT, "tools", "mapcontainer"))
sys.path.insert(0, os.path.join(DISASM_ROOT, "tools", "spritecontainer"))
sys.path.insert(0, os.path.join(DISASM_ROOT, "tools", "build"))

import payload_store
import webfoot_lz
import opcode_stream

ROM_BASE = 0x08000000
ME_TABLE = 0x08E2E0
ME_COUNT = 452
ME_SIZE = 0x38

TILE_BANK_TABLE = 0x179764
TILE_BANK_COUNT = 187
BG_PAL_OFFSET = 0x05632C
OBJ_PAL_OFFSET = 0x05652C

SPRITE_TABLE = 0x6B6BDC
SPRITE_COUNT = 297

ENEMY_BASE = 0x711274
ENEMY_STRIDE = 0x1C
ENEMY_COUNT = 150

EVENT_BASE = 0x77C5A4
EVENT_END = 0x79B704
EVENT_INDEX_BASE = 0x79B704
EVENT_COUNT = 522

STRINGS_START = 0x05792C
STRINGS_END = 0x06D4E0

PLACEMENT_FACTORY = 0x0800FD55
NPC_FACTORY = 0x08017DA3
OBJECT_FACTORY = 0x080111A9
DOMINANT_LAYER = 0x08008087
SCREENBLOCK_HANDLERS = {0x08007B63: 0x04, 0x0800897B: 0x1C}
TERRAIN_LAYER = 0x080088BD

MODDED_ROM_PATH = os.path.join(WORKSPACE, "Dragon Ball Z - Buu's Fury (Modded).gba")
BASE_ROM_PATH = os.path.join(DISASM_ROOT, "baserom.gba")
PROJECT_JSON_PATH = os.path.join(HERE, "project_edits.json")


def make_png_rgba(width: int, height: int, rgba_bytes: bytes) -> bytes:
    """Encode raw RGBA bytes into a standard PNG image using pure Python."""
    def chunk(tag: bytes, data: bytes) -> bytes:
        crc = zlib.crc32(tag + data) & 0xFFFFFFFF
        return struct.pack(">I", len(data)) + tag + data + struct.pack(">I", crc)

    ihdr = struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0)
    stride = width * 4
    raw = bytearray()
    for y in range(height):
        raw.append(0)
        row_start = y * stride
        raw.extend(rgba_bytes[row_start : row_start + stride])
    idat = zlib.compress(bytes(raw), level=6)
    return b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", ihdr) + chunk(b"IDAT", idat) + chunk(b"IEND", b"")


class BuusFuryData:
    def __init__(self) -> None:
        print("[Editor] Loading baserom.gba and payload stores...")
        with open(BASE_ROM_PATH, "rb") as f:
            self.base_rom = f.read()
        if os.path.exists(MODDED_ROM_PATH):
            with open(MODDED_ROM_PATH, "rb") as f:
                self.rom = bytearray(f.read())
            print(f"[Editor] Loaded existing modded ROM: {MODDED_ROM_PATH}")
        else:
            self.rom = bytearray(self.base_rom)

        self.tilebank_store = payload_store.read(
            os.path.join(DISASM_ROOT, "assets", "tilebank", "payloads.store")
        )
        self.map_store = payload_store.read(
            os.path.join(DISASM_ROOT, "assets", "mapcontainer", "payloads.store")
        )
        self.sprite_store = payload_store.read(
            os.path.join(DISASM_ROOT, "assets", "spritecontainer", "payloads.store")
        )

        self.bg_pal = self._read_palette(BG_PAL_OFFSET)
        self.obj_pal = self._read_palette(OBJ_PAL_OFFSET)
        self.tile_banks = self._load_tile_banks()
        self.strings_list = self._scan_strings()
        self.enemy_usage = self._scan_enemy_and_sprite_usage()

        # Custom allocator cursor at the end of ROM padding or expansion region
        # We find the largest free 0x00/0xFF run near the end of ROM or allow safe in-place + tail allocation
        self.alloc_cursor = self._find_alloc_start()
        print(
            f"[Editor] Ready! Tilebanks={len(self.tile_banks)}, "
            f"MapPayloads={len(self.map_store)}, SpritePayloads={len(self.sprite_store)}, "
            f"Strings={len(self.strings_list)}, AllocCursor=0x{self.alloc_cursor:06X}"
        )

    def _find_alloc_start(self) -> int:
        # Check trailing zero padding after 0x7FB7C0 or expand within 8MB
        pos = len(self.rom)
        while pos > 0x7B79A4 and self.rom[pos - 1] in (0x00, 0xFF):
            pos -= 1
        aligned = (pos + 15) & ~15
        if aligned >= len(self.rom) - 0x4000:
            # Look for the unused zero block after enemy stats or end of ROM
            aligned = 0x7FC000
        return aligned

    def alloc_bytes(self, data: bytes) -> int:
        """Allocate aligned bytes in the ROM custom region (or expand ROM to 16MB if needed)."""
        size = (len(data) + 3) & ~3
        if self.alloc_cursor + size > len(self.rom):
            # GBA ROMs can address up to 32MB (0x08000000..0x09FFFFFF); expand by 1MB
            self.rom.extend(b"\x00" * 0x100000)
        off = self.alloc_cursor
        self.rom[off : off + len(data)] = data
        self.alloc_cursor += size
        return off

    def u8(self, off: int) -> int:
        return self.rom[off]

    def u16(self, off: int) -> int:
        return struct.unpack_from("<H", self.rom, off)[0]

    def u32(self, off: int) -> int:
        return struct.unpack_from("<I", self.rom, off)[0]

    def in_rom(self, ptr: int) -> bool:
        return ROM_BASE <= ptr < ROM_BASE + len(self.rom)

    def _read_palette(self, offset: int) -> list[tuple[int, int, int, int]]:
        pal = []
        for i in range(256):
            val = self.u16(offset + i * 2)
            r = ((val >> 0) & 0x1F) * 255 // 31
            g = ((val >> 5) & 0x1F) * 255 // 31
            b = ((val >> 10) & 0x1F) * 255 // 31
            a = 0 if i == 0 else 255
            pal.append((r, g, b, a))
        return pal

    def _load_tile_banks(self) -> list[bytes]:
        banks = []
        for i in range(TILE_BANK_COUNT):
            ptr = self.u32(TILE_BANK_TABLE + i * 4)
            off = ptr - ROM_BASE
            payload = self.tilebank_store.get(off)
            if payload is None:
                payload = webfoot_lz.unpack(self.rom, off, maximum_output=0x4000).data
            banks.append(payload)
        return banks

    def get_container_data(self, rom_offset: int, max_out: int = 0x10000) -> bytes:
        if rom_offset in self.map_store:
            return self.map_store[rom_offset]
        if rom_offset in self.sprite_store:
            return self.sprite_store[rom_offset]
        if rom_offset in self.tilebank_store:
            return self.tilebank_store[rom_offset]
        return webfoot_lz.unpack(self.rom, rom_offset, maximum_output=max_out).data

    def _scan_strings(self) -> list[dict]:
        """Scan UTF-16LE strings in 0x05792C..0x06D4E0."""
        out = []
        off = STRINGS_START
        idx = 0
        while off + 2 <= STRINGS_END:
            # Skip zero padding between strings
            if self.u16(off) == 0:
                off += 2
                continue
            start = off
            chars = []
            while off + 2 <= STRINGS_END:
                ch = self.u16(off)
                off += 2
                if ch == 0:
                    break
                chars.append(chr(ch))
            text = "".join(chars)
            if text:
                out.append(
                    {
                        "index": idx,
                        "offset": start,
                        "pointer": f"0x{ROM_BASE + start:08X}",
                        "max_chars": len(chars),
                        "text": text,
                    }
                )
                idx += 1
        return out

    def _scan_enemy_and_sprite_usage(self) -> dict:
        """Scan all 452 maps to see which enemy stats and sprites are used where."""
        enemy_maps: dict[int, list[int]] = {i: [] for i in range(ENEMY_COUNT)}
        enemy_sprites: dict[int, set[int]] = {i: set() for i in range(ENEMY_COUNT)}
        sprite_maps: dict[int, list[int]] = {i: [] for i in range(SPRITE_COUNT)}

        for map_id in range(ME_COUNT):
            me_off = ME_TABLE + map_id * ME_SIZE
            fields = struct.unpack_from("<12B11I", self.rom, me_off)
            trig_count = fields[4]
            scripts_ptr = fields[14]
            if not self.in_rom(scripts_ptr) or trig_count == 0:
                continue
            arr_off = scripts_ptr - ROM_BASE
            for slot in range(trig_count):
                if arr_off + slot * 4 + 4 > len(self.rom):
                    break
                rec_ptr = self.u32(arr_off + slot * 4)
                if not self.in_rom(rec_ptr):
                    continue
                rec_off = rec_ptr - ROM_BASE
                if rec_off + 28 > len(self.rom):
                    continue
                lead = self.u32(rec_off)
                if lead == PLACEMENT_FACTORY:
                    estat = self.u32(rec_off + 8)
                    spr = self.u32(rec_off + 16)
                    if 0 <= estat < ENEMY_COUNT:
                        if map_id not in enemy_maps[estat]:
                            enemy_maps[estat].append(map_id)
                        if 0 <= spr < SPRITE_COUNT:
                            enemy_sprites[estat].add(spr)
                    if 0 <= spr < SPRITE_COUNT and map_id not in sprite_maps[spr]:
                        sprite_maps[spr].append(map_id)
                elif lead == NPC_FACTORY:
                    spr = self.u32(rec_off + 16)
                    if 0 <= spr < SPRITE_COUNT and map_id not in sprite_maps[spr]:
                        sprite_maps[spr].append(map_id)
                elif lead == OBJECT_FACTORY:
                    spr = self.u32(rec_off + 12)
                    if 0 <= spr < SPRITE_COUNT and map_id not in sprite_maps[spr]:
                        sprite_maps[spr].append(map_id)

        return {
            "enemy_maps": enemy_maps,
            "enemy_sprites": {k: sorted(v) for k, v in enemy_sprites.items()},
            "sprite_maps": sprite_maps,
        }

    # -------------------------------------------------------------------------
    # MAP PARSING & RENDERING
    # -------------------------------------------------------------------------
    def get_map_entry_summary(self, map_id: int) -> dict:
        me_off = ME_TABLE + map_id * ME_SIZE
        f = struct.unpack_from("<12B11I", self.rom, me_off)
        group_id = f[1]
        section_slot = f[2]
        zone_count = f[3]
        placement_count = f[4]
        var_ptr = f[20]

        roots = []
        if self.in_rom(var_ptr):
            base = var_ptr - ROM_BASE
            for i in range(16):
                if base + i * 4 + 4 > len(self.rom):
                    break
                rptr = self.u32(base + i * 4)
                if (
                    self.in_rom(rptr)
                    and (rptr - ROM_BASE) + 0x50 <= len(self.rom)
                    and self.u32((rptr - ROM_BASE) + 0x4C) == ROM_BASE + TILE_BANK_TABLE
                ):
                    roots.append(rptr - ROM_BASE)
                else:
                    break

        active_root = roots[0] if roots else None
        if section_slot >= 1 and section_slot - 1 < len(roots):
            active_root = roots[section_slot - 1]

        width_px, height_px, active_layers = 240, 160, 0
        warp_count = 0
        if active_root is not None:
            warp_count = self.u32(active_root + 0x24)
            for lslot in range(4):
                lptr = self.u32(active_root + 0x14 + lslot * 4)
                if self.in_rom(lptr):
                    lsite = lptr - ROM_BASE
                    if self.u32(lsite) == DOMINANT_LAYER:
                        active_layers += 1
                        cols = self.rom[lsite + 0x14]
                        rows = self.rom[lsite + 0x15]
                        width_px = max(width_px, cols * 256)
                        height_px = max(height_px, rows * 256)

        return {
            "id": map_id,
            "offset": f"0x{me_off:06X}",
            "group_id": group_id,
            "section_slot": section_slot,
            "zone_count": zone_count,
            "placement_count": placement_count,
            "warp_count": warp_count,
            "roots": [f"0x{r:06X}" for r in roots],
            "active_root": f"0x{active_root:06X}" if active_root is not None else None,
            "width_px": width_px,
            "height_px": height_px,
            "active_layers": active_layers,
        }

    def build_vram_tiles(self, root_off: int) -> tuple[list[bytes], list[dict]]:
        """
        Execute the exact loc_08009BD4 delta-decoding algorithm to build the 1024-tile
        8bpp VRAM buffer for a map root.
        """
        vram_tiles = [bytes(64) for _ in range(1024)]
        tile_mapping = []
        w48 = self.u32(root_off + 0x48)
        if not self.in_rom(w48):
            return vram_tiles, tile_mapping

        raw = self.get_container_data(w48 - ROM_BASE)
        count = len(raw) // 2
        if count == 0:
            return vram_tiles, tile_mapping

        arr = list(struct.unpack_from(f"<{count}H", raw, 0))
        for i in range(1, count):
            arr[i] = (arr[i] + arr[i - 1] + 1) & 0xFFFF

        limit = min(count, 1024)
        for i in range(limit):
            val = arr[i]
            bank_idx = (val >> 8) & 0xFF
            tile_idx = val & 0xFF
            tile_mapping.append({"vram_slot": i, "bank": bank_idx, "tile": tile_idx})
            if bank_idx < len(self.tile_banks):
                bank_bytes = self.tile_banks[bank_idx]
                t_off = tile_idx * 64
                if t_off + 64 <= len(bank_bytes):
                    vram_tiles[i] = bank_bytes[t_off : t_off + 64]

        return vram_tiles, tile_mapping

    def render_vram_tileset_png(self, vram_tiles: list[bytes], num_tiles: int) -> str:
        """Render the loaded VRAM tiles as a 16-columns-wide PNG sheet (base64 data URL)."""
        cols = 16
        rows = max(1, (min(max(num_tiles, 64), 1024) + cols - 1) // cols)
        w = cols * 8
        h = rows * 8
        rgba = bytearray(w * h * 4)
        pal = self.bg_pal

        for idx in range( min(len(vram_tiles), cols * rows) ):
            tile = vram_tiles[idx]
            tx = (idx % cols) * 8
            ty = (idx // cols) * 8
            for py in range(8):
                row_base = ((ty + py) * w + tx) * 4
                t_row = py * 8
                for px in range(8):
                    cidx = tile[t_row + px]
                    r, g, b, a = pal[cidx]
                    # For tileset viewer, show color 0 as dark checkerboard so empty tiles are visible
                    if cidx == 0:
                        r, g, b, a = (18, 22, 32, 255)
                    p_off = row_base + px * 4
                    rgba[p_off] = r
                    rgba[p_off + 1] = g
                    rgba[p_off + 2] = b
                    rgba[p_off + 3] = a

        png = make_png_rgba(w, h, bytes(rgba))
        return "data:image/png;base64," + base64.b64encode(png).decode("ascii")

    def render_layer_png(
        self, vram_tiles: list[bytes], cols: int, rows: int, chunks_u16: list[list[int]], is_base_layer: bool
    ) -> str:
        """Render a full map layer (cols*256 x rows*256) to a PNG data URL."""
        w = cols * 256
        h = rows * 256
        rgba = bytearray(w * h * 4)
        pal = self.bg_pal
        bg_c0 = (pal[0][0], pal[0][1], pal[0][2], 255) if is_base_layer else (0, 0, 0, 0)

        # Pre-convert used tiles into 64*4 RGBA bytes for ultra-fast blitting
        tile_rgba_cache: dict[tuple[int, int, int], bytes] = {}

        def get_tile_rgba(tid: int, hf: int, vf: int) -> bytes:
            key = (tid, hf, vf)
            cached = tile_rgba_cache.get(key)
            if cached is not None:
                return cached
            tbytes = vram_tiles[tid] if tid < len(vram_tiles) else bytes(64)
            buf = bytearray(256)
            for py in range(8):
                sy = (7 - py) if vf else py
                for px in range(8):
                    sx = (7 - px) if hf else px
                    cidx = tbytes[sy * 8 + sx]
                    r, g, b, a = bg_c0 if cidx == 0 else pal[cidx]
                    poff = (py * 8 + px) * 4
                    buf[poff] = r
                    buf[poff + 1] = g
                    buf[poff + 2] = b
                    buf[poff + 3] = a
            res = bytes(buf)
            tile_rgba_cache[key] = res
            return res

        for cy in range(rows):
            for cx in range(cols):
                chunk_idx = cy * cols + cx
                entries = chunks_u16[chunk_idx]
                base_x = cx * 256
                base_y = cy * 256
                for ty in range(32):
                    for tx in range(32):
                        entry = entries[ty * 32 + tx]
                        tid = entry & 0x3FF
                        if tid == 0 and not is_base_layer:
                            continue
                        hf = (entry >> 10) & 1
                        vf = (entry >> 11) & 1
                        t_rgba = get_tile_rgba(tid, hf, vf)
                        px_x = base_x + tx * 8
                        px_y = base_y + ty * 8
                        for py in range(8):
                            dst = ((px_y + py) * w + px_x) * 4
                            rgba[dst : dst + 32] = t_rgba[py * 32 : (py + 1) * 32]

        png = make_png_rgba(w, h, bytes(rgba))
        return "data:image/png;base64," + base64.b64encode(png).decode("ascii")

    def get_map_detail(self, map_id: int, root_override: int | None = None) -> dict:
        summary = self.get_map_entry_summary(map_id)
        me_off = ME_TABLE + map_id * ME_SIZE
        f = struct.unpack_from("<12B11I", self.rom, me_off)

        roots_hex = summary["roots"]
        if root_override is not None:
            root_off = root_override
        elif summary["active_root"]:
            root_off = int(summary["active_root"], 16)
        else:
            root_off = int(roots_hex[0], 16)

        vram_tiles, tile_mapping = self.build_vram_tiles(root_off)
        tileset_png = self.render_vram_tileset_png(vram_tiles, len(tile_mapping))

        # Parse 4 BG layers
        layers = []
        first_valid_layer = True
        for lslot in range(4):
            lptr = self.u32(root_off + 0x14 + lslot * 4)
            if not self.in_rom(lptr):
                layers.append({"slot": lslot, "active": False})
                continue
            lsite = lptr - ROM_BASE
            handler = self.u32(lsite)
            if handler == DOMINANT_LAYER:
                cols = self.rom[lsite + 0x14]
                rows = self.rom[lsite + 0x15]
                chunks_u16 = []
                chunk_offsets = []
                for j in range(cols * rows):
                    cptr = self.u32(lsite + 0x18 + j * 4)
                    if self.in_rom(cptr):
                        coff = cptr - ROM_BASE
                        chunk_offsets.append(f"0x{coff:06X}")
                        cdata = self.get_container_data(coff, max_out=0x1000)
                        if len(cdata) >= 2048:
                            chunks_u16.append(list(struct.unpack_from("<1024H", cdata, 0)))
                        else:
                            chunks_u16.append([0] * 1024)
                    else:
                        chunk_offsets.append(None)
                        chunks_u16.append([0] * 1024)

                png_url = self.render_layer_png(vram_tiles, cols, rows, chunks_u16, first_valid_layer)
                first_valid_layer = False
                layers.append(
                    {
                        "slot": lslot,
                        "active": True,
                        "kind": "dominant",
                        "record_offset": f"0x{lsite:06X}",
                        "cols": cols,
                        "rows": rows,
                        "width_px": cols * 256,
                        "height_px": rows * 256,
                        "chunk_offsets": chunk_offsets,
                        "chunks": chunks_u16,
                        "png": png_url,
                    }
                )
            elif handler in SCREENBLOCK_HANDLERS:
                sub_off = SCREENBLOCK_HANDLERS[handler]
                cptr = self.u32(lsite + sub_off)
                chunks_u16 = [[0] * 1024]
                if self.in_rom(cptr):
                    cdata = self.get_container_data(cptr - ROM_BASE, max_out=0x1000)
                    if len(cdata) >= 2048:
                        chunks_u16 = [list(struct.unpack_from("<1024H", cdata, 0))]
                png_url = self.render_layer_png(vram_tiles, 1, 1, chunks_u16, first_valid_layer)
                first_valid_layer = False
                layers.append(
                    {
                        "slot": lslot,
                        "active": True,
                        "kind": "screenblock",
                        "record_offset": f"0x{lsite:06X}",
                        "cols": 1,
                        "rows": 1,
                        "width_px": 256,
                        "height_px": 256,
                        "chunks": chunks_u16,
                        "png": png_url,
                    }
                )
            else:
                layers.append(
                    {
                        "slot": lslot,
                        "active": False,
                        "kind": f"0x{handler:08X}",
                        "record_offset": f"0x{lsite:06X}",
                    }
                )

        # Parse Warps / Exits (root_table_record at root + 0x24 / +0x28)
        warps = []
        warp_count = self.u32(root_off + 0x24)
        warp_base_ptr = self.u32(root_off + 0x28)
        if self.in_rom(warp_base_ptr) and 0 < warp_count <= 128:
            wbase = warp_base_ptr - ROM_BASE
            for i in range(warp_count):
                woff = wbase + i * 24
                if woff + 24 > len(self.rom):
                    break
                x1, y1, x2, y2, w4, w5 = struct.unpack_from("<6I", self.rom, woff)
                dest_x = w4 & 0xFFFF
                dest_y = (w4 >> 16) & 0xFFFF
                dest_map = w5 & 0xFFFF
                dest_dir = (w5 >> 16) & 0xFFFF
                warps.append(
                    {
                        "index": i,
                        "offset": f"0x{woff:06X}",
                        "x1": x1,
                        "y1": y1,
                        "x2": x2,
                        "y2": y2,
                        "dest_x": dest_x,
                        "dest_y": dest_y,
                        "dest_map": dest_map,
                        "dest_dir": dest_dir,
                        "raw_w4": f"0x{w4:08X}",
                        "raw_w5": f"0x{w5:08X}",
                    }
                )

        # Parse Map Trigger Zones (fields[3] count at fields[13] = ptrs[1])
        trigger_zones = []
        tz_count = f[3]
        tz_ptr = f[13]
        if self.in_rom(tz_ptr) and 0 < tz_count <= 128:
            tz_base = tz_ptr - ROM_BASE
            for i in range(tz_count):
                toff = tz_base + i * 28
                if toff + 28 > len(self.rom):
                    break
                w0, w1, c1, c2, script_ptr, w5, w6 = struct.unpack_from("<7I", self.rom, toff)
                trigger_zones.append(
                    {
                        "index": i,
                        "offset": f"0x{toff:06X}",
                        "x1": c1 & 0xFFFF,
                        "y1": (c1 >> 16) & 0xFFFF,
                        "x2": c2 & 0xFFFF,
                        "y2": (c2 >> 16) & 0xFFFF,
                        "fn0": f"0x{w0:08X}",
                        "fn1": f"0x{w1:08X}",
                        "script_ptr": f"0x{script_ptr:08X}",
                        "w5": f"0x{w5:08X}",
                        "w6": f"0x{w6:08X}",
                    }
                )

        # Parse Placements (Enemies, Characters, NPCs, Objects)
        placements = []
        p_count = f[4]
        p_ptr = f[14]
        if self.in_rom(p_ptr) and 0 < p_count <= 256:
            p_base = p_ptr - ROM_BASE
            for i in range(p_count):
                if p_base + i * 4 + 4 > len(self.rom):
                    break
                rec_ptr = self.u32(p_base + i * 4)
                if not self.in_rom(rec_ptr):
                    continue
                roff = rec_ptr - ROM_BASE
                if roff + 28 > len(self.rom):
                    continue
                lead = self.u32(roff)
                if lead == PLACEMENT_FACTORY:
                    w0, w1, estat, coords, spr, desc_ptr, ccount = struct.unpack_from("<7I", self.rom, roff)
                    px = coords & 0xFFFF
                    py = (coords >> 16) & 0xFFFF
                    waypoints = []
                    if 0 < ccount <= 8 and roff + 28 + ccount * 4 <= len(self.rom):
                        for ci in range(ccount):
                            cptr = self.u32(roff + 28 + ci * 4)
                            if self.in_rom(cptr) and (cptr - ROM_BASE) + 12 <= len(self.rom):
                                coff = cptr - ROM_BASE
                                cfn, wx, wy, h08, spd = struct.unpack_from("<I4H", self.rom, coff)
                                waypoints.append(
                                    {
                                        "index": ci,
                                        "offset": f"0x{coff:06X}",
                                        "x": wx,
                                        "y": wy,
                                        "wait": h08,
                                        "radius": spd,
                                    }
                                )
                    placements.append(
                        {
                            "slot": i,
                            "offset": f"0x{roff:06X}",
                            "type": "enemy",
                            "factory": f"0x{lead:08X}",
                            "spawn_id": w1,
                            "enemy_stat_id": estat,
                            "x": px,
                            "y": py,
                            "sprite_id": spr,
                            "descriptor_ptr": f"0x{desc_ptr:08X}",
                            "waypoints": waypoints,
                        }
                    )
                elif lead in (NPC_FACTORY, OBJECT_FACTORY):
                    words = struct.unpack_from("<7I", self.rom, roff)
                    px = words[2] & 0xFFFF
                    py = (words[2] >> 16) & 0xFFFF
                    is_npc = lead == NPC_FACTORY
                    spr = words[4] if is_npc else words[3]
                    ev_ptr = words[3] if is_npc else words[5]
                    ev_id = self._resolve_event_index(ev_ptr)
                    placements.append(
                        {
                            "slot": i,
                            "offset": f"0x{roff:06X}",
                            "type": "npc" if is_npc else "object",
                            "factory": f"0x{lead:08X}",
                            "spawn_id": words[1],
                            "x": px,
                            "y": py,
                            "sprite_id": spr if spr < SPRITE_COUNT else 0,
                            "event_ptr": f"0x{ev_ptr:08X}",
                            "event_id": ev_id,
                            "raw_words": [f"0x{w:08X}" for w in words],
                        }
                    )
                else:
                    words = struct.unpack_from("<7I", self.rom, roff)
                    px = words[2] & 0xFFFF if words[2] else (words[3] & 0xFFFF)
                    py = (words[2] >> 16) & 0xFFFF if words[2] else ((words[3] >> 16) & 0xFFFF)
                    placements.append(
                        {
                            "slot": i,
                            "offset": f"0x{roff:06X}",
                            "type": "custom",
                            "factory": f"0x{lead:08X}",
                            "x": px,
                            "y": py,
                            "sprite_id": 0,
                            "raw_words": [f"0x{w:08X}" for w in words],
                        }
                    )

        return {
            "summary": summary,
            "active_root": f"0x{root_off:06X}",
            "tile_count": len(tile_mapping),
            "tile_mapping": tile_mapping[:256],
            "tileset_png": tileset_png,
            "layers": layers,
            "warps": warps,
            "trigger_zones": trigger_zones,
            "placements": placements,
        }

    def _resolve_event_index(self, ptr: int) -> int | None:
        if not (ROM_BASE + EVENT_BASE <= ptr < ROM_BASE + EVENT_END):
            return None
        for idx in range(EVENT_COUNT):
            ep = self.u32(EVENT_INDEX_BASE + idx * 4)
            if ep == ptr:
                return idx
        return None

    # -------------------------------------------------------------------------
    # SPRITE RENDERING (297 Sprite Definitions)
    # -------------------------------------------------------------------------
    def get_sprite_info(self, sprite_id: int, anim_slot: int = 0, direction: int = 0) -> dict:
        if not (0 <= sprite_id < SPRITE_COUNT):
            raise ValueError(f"Invalid sprite_id {sprite_id}")
        def_ptr = self.u32(SPRITE_TABLE + sprite_id * 4)
        def_off = def_ptr - ROM_BASE
        slot_count = self.rom[def_off]

        valid_slots = []
        for s in range(slot_count):
            aptr = self.u32(def_off + 0x54 + s * 4)
            if self.in_rom(aptr):
                fcount = self.u32(aptr - ROM_BASE)
                valid_slots.append({"slot": s, "offset": f"0x{aptr - ROM_BASE:06X}", "frames": fcount})

        if not valid_slots:
            return {"sprite_id": sprite_id, "slot_count": slot_count, "slots": [], "frames": []}

        chosen_slot = anim_slot if any(s["slot"] == anim_slot for s in valid_slots) else valid_slots[0]["slot"]
        anim_off = self.u32(def_off + 0x54 + chosen_slot * 4) - ROM_BASE
        frame_count = self.u32(anim_off)
        direction = max(0, min(3, direction))

        rendered_frames = []
        for fidx in range(min(frame_count, 32)):
            fptr = self.u32(anim_off + 4 + (fidx * 4 + direction) * 4)
            if not self.in_rom(fptr):
                continue
            foff = fptr - ROM_BASE
            png_url, w, h, pieces_meta = self.render_sprite_frame_png(foff)
            rendered_frames.append(
                {
                    "frame_index": fidx,
                    "offset": f"0x{foff:06X}",
                    "width": w,
                    "height": h,
                    "pieces": pieces_meta,
                    "png": png_url,
                }
            )

        return {
            "sprite_id": sprite_id,
            "offset": f"0x{def_off:06X}",
            "slot_count": slot_count,
            "active_slot": chosen_slot,
            "direction": direction,
            "slots": valid_slots,
            "frames": rendered_frames,
            "maps": self.enemy_usage["sprite_maps"].get(sprite_id, []),
        }

    def render_sprite_frame_png(self, frame_off: int) -> tuple[str, int, int, list[dict]]:
        piece_count, _word04 = struct.unpack_from("<II", self.rom, frame_off)
        piece_count = min(piece_count, 16)
        pieces = []
        min_x, min_y, max_x, max_y = 0, 0, 16, 16

        for p in range(piece_count):
            attr, flags, cont_ptr = struct.unpack_from("<III", self.rom, frame_off + 8 + p * 12)
            dx, dy, pw, ph = struct.unpack("<bbBB", struct.pack("<I", attr))
            pw = max(8, min(64, pw))
            ph = max(8, min(64, ph))
            hflip = (flags >> 28) & 1
            vflip = (flags >> 29) & 1
            cont_off = cont_ptr - ROM_BASE if self.in_rom(cont_ptr) else 0
            pieces.append((dx, dy, pw, ph, hflip, vflip, cont_off, flags))
            if p == 0:
                min_x, min_y, max_x, max_y = dx, dy, dx + pw, dy + ph
            else:
                min_x = min(min_x, dx)
                min_y = min(min_y, dy)
                max_x = max(max_x, dx + pw)
                max_y = max(max_y, dy + ph)

        canvas_w = max(16, max_x - min_x)
        canvas_h = max(16, max_y - min_y)
        rgba = bytearray(canvas_w * canvas_h * 4)
        pal = self.obj_pal
        pieces_meta = []

        for dx, dy, pw, ph, hflip, vflip, cont_off, flags in reversed(pieces):
            pieces_meta.append(
                {
                    "dx": dx,
                    "dy": dy,
                    "w": pw,
                    "h": ph,
                    "hflip": bool(hflip),
                    "vflip": bool(vflip),
                    "container": f"0x{cont_off:06X}",
                    "flags": f"0x{flags:08X}",
                }
            )
            if not cont_off:
                continue
            try:
                tile_bytes = self.get_container_data(cont_off, max_out=0x2000)
            except Exception:
                continue

            tiles_x = pw // 8
            tiles_y = ph // 8
            ox = dx - min_x
            oy = dy - min_y

            for py in range(ph):
                sy = (ph - 1 - py) if vflip else py
                ty = sy // 8
                iy = sy % 8
                for px in range(pw):
                    sx = (pw - 1 - px) if hflip else px
                    tx = sx // 8
                    ix = sx % 8
                    t_idx = ty * tiles_x + tx
                    byte_off = t_idx * 64 + iy * 8 + ix
                    if byte_off >= len(tile_bytes):
                        continue
                    cidx = tile_bytes[byte_off]
                    if cidx == 0:
                        continue
                    r, g, b, a = pal[cidx]
                    dst_x = ox + px
                    dst_y = oy + py
                    if 0 <= dst_x < canvas_w and 0 <= dst_y < canvas_h:
                        doff = (dst_y * canvas_w + dst_x) * 4
                        rgba[doff] = r
                        rgba[doff + 1] = g
                        rgba[doff + 2] = b
                        rgba[doff + 3] = a

        png = make_png_rgba(canvas_w, canvas_h, bytes(rgba))
        return "data:image/png;base64," + base64.b64encode(png).decode("ascii"), canvas_w, canvas_h, pieces_meta

    # -------------------------------------------------------------------------
    # ENEMY STATS (150 Records at 0x711274)
    # -------------------------------------------------------------------------
    def get_enemies(self) -> list[dict]:
        out = []
        for idx in range(ENEMY_COUNT):
            off = ENEMY_BASE + idx * ENEMY_STRIDE
            w0, hp, atk, def_exp, w10, ai_ptr, w18 = struct.unpack_from("<7I", self.rom, off)
            out.append(
                {
                    "id": idx,
                    "offset": f"0x{off:06X}",
                    "word_00": w0,
                    "hp": hp,
                    "attack": atk,
                    "defense_exp": def_exp,
                    "word_10": w10,
                    "ai_node": f"0x{ai_ptr:08X}",
                    "word_18": w18,
                    "maps": self.enemy_usage["enemy_maps"].get(idx, []),
                    "sprites": self.enemy_usage["enemy_sprites"].get(idx, []),
                }
            )
        return out

    def update_enemy(self, enemy_id: int, payload: dict) -> dict:
        if not (0 <= enemy_id < ENEMY_COUNT):
            raise ValueError("Invalid enemy ID")
        off = ENEMY_BASE + enemy_id * ENEMY_STRIDE
        w0, hp, atk, def_exp, w10, ai_ptr, w18 = struct.unpack_from("<7I", self.rom, off)
        w0 = int(payload.get("word_00", w0))
        hp = int(payload.get("hp", hp))
        atk = int(payload.get("attack", atk))
        def_exp = int(payload.get("defense_exp", def_exp))
        w10 = int(payload.get("word_10", w10))
        if "ai_node" in payload:
            ai_ptr = int(str(payload["ai_node"]), 0)
        w18 = int(payload.get("word_18", w18))
        struct.pack_into("<7I", self.rom, off, w0, hp, atk, def_exp, w10, ai_ptr, w18)
        return self.get_enemies()[enemy_id]

    # -------------------------------------------------------------------------
    # EVENTS, STRINGS & OPCODE STREAMS
    # -------------------------------------------------------------------------
    def get_events_list(self) -> list[dict]:
        starts = [self.u32(EVENT_INDEX_BASE + i * 4) - ROM_BASE for i in range(EVENT_COUNT)]
        lengths = [b - a for a, b in zip(starts, starts[1:])] + [EVENT_END - starts[-1]]
        out = []
        for idx, (off, sz) in enumerate(zip(starts, lengths)):
            dialog_ptr = self.u32(off)
            dtype = self.rom[dialog_ptr - ROM_BASE + 2] if self.in_rom(dialog_ptr) else 0
            words = struct.unpack_from(f"<{min(sz // 4, 8)}I", self.rom, off)
            out.append(
                {
                    "id": idx,
                    "offset": f"0x{off:06X}",
                    "pointer": f"0x{ROM_BASE + off:08X}",
                    "size": sz,
                    "dialog_ptr": f"0x{dialog_ptr:08X}",
                    "dialog_type": dtype,
                    "preview_words": [f"0x{w:08X}" for w in words],
                }
            )
        return out

    def get_event_detail(self, event_id: int) -> dict:
        if not (0 <= event_id < EVENT_COUNT):
            raise ValueError("Invalid event ID")
        starts = [self.u32(EVENT_INDEX_BASE + i * 4) - ROM_BASE for i in range(EVENT_COUNT)]
        lengths = [b - a for a, b in zip(starts, starts[1:])] + [EVENT_END - starts[-1]]
        off, sz = starts[event_id], lengths[event_id]
        words = list(struct.unpack_from(f"<{sz // 4}I", self.rom, off))
        dialog_ptr = words[0]
        dtype = self.rom[dialog_ptr - ROM_BASE + 2] if self.in_rom(dialog_ptr) else 0

        sub_targets = []
        for wi, w in enumerate(words):
            if self.in_rom(w):
                toff = w - ROM_BASE
                sub_targets.append(
                    {
                        "word_index": wi,
                        "pointer": f"0x{w:08X}",
                        "target_hex": self.rom[toff : min(toff + 32, len(self.rom))].hex(),
                    }
                )

        return {
            "id": event_id,
            "offset": f"0x{off:06X}",
            "pointer": f"0x{ROM_BASE + off:08X}",
            "size": sz,
            "dialog_ptr": f"0x{dialog_ptr:08X}",
            "dialog_type": dtype,
            "words": [f"0x{w:08X}" for w in words],
            "sub_targets": sub_targets,
        }

    def update_event(self, event_id: int, payload: dict) -> dict:
        if not (0 <= event_id < EVENT_COUNT):
            raise ValueError("Invalid event ID")
        starts = [self.u32(EVENT_INDEX_BASE + i * 4) - ROM_BASE for i in range(EVENT_COUNT)]
        lengths = [b - a for a, b in zip(starts, starts[1:])] + [EVENT_END - starts[-1]]
        off, sz = starts[event_id], lengths[event_id]
        words_hex = payload.get("words", [])
        max_words = sz // 4
        for i, w_str in enumerate(words_hex[:max_words]):
            val = int(str(w_str), 0) & 0xFFFFFFFF
            struct.pack_into("<I", self.rom, off + i * 4, val)
        return self.get_event_detail(event_id)

    def create_custom_event(self, payload: dict) -> dict:
        """
        Create a brand-new custom Event/Script in the ROM expansion area and return its
        0x08XXXXXX pointer so it can be assigned directly to any NPC, object, or map trigger!
        """
        template_id = int(payload.get("template_event_id", 0))
        starts = [self.u32(EVENT_INDEX_BASE + i * 4) - ROM_BASE for i in range(EVENT_COUNT)]
        lengths = [b - a for a, b in zip(starts, starts[1:])] + [EVENT_END - starts[-1]]
        t_off, t_sz = starts[template_id], lengths[template_id]
        raw_copy = bytearray(self.rom[t_off : t_off + t_sz])

        if "words" in payload and isinstance(payload["words"], list):
            raw_copy = bytearray(len(payload["words"]) * 4)
            for i, w_str in enumerate(payload["words"]):
                struct.pack_into("<I", raw_copy, i * 4, int(str(w_str), 0) & 0xFFFFFFFF)

        new_off = self.alloc_bytes(bytes(raw_copy))
        return {
            "offset": f"0x{new_off:06X}",
            "pointer": f"0x{ROM_BASE + new_off:08X}",
            "size": len(raw_copy),
            "words": [f"0x{w:08X}" for w in struct.unpack_from(f"<{len(raw_copy)//4}I", raw_copy, 0)],
        }

    def get_opcode_streams(self) -> list[dict]:
        """Disassemble the 34 map script bytecode streams using opcode_stream.py."""
        out = []
        try:
            table = opcode_stream.census(self.base_rom)
            for idx, r in enumerate(table):
                start = r["start"]
                end = r["end"]
                inst_map = r["decoded"]["instructions"]
                disasm = []
                for addr in sorted(inst_map)[:60]:
                    op, sz, operands = inst_map[addr]
                    kind = "END" if op == opcode_stream.END else opcode_stream.HANDLERS.get(op, (0, "op"))[1]
                    disasm.append(
                        {
                            "offset": f"0x{addr:06X}",
                            "opcode": f"0x{op:02X}",
                            "mnemonic": f"OP_{op:02X}_{kind.upper()}",
                            "args": [hex(x) if x > 255 else str(x) for x in operands],
                        }
                    )
                out.append(
                    {
                        "name": f"Stream #{idx:02d}",
                        "start": f"0x{start:06X}",
                        "end": f"0x{end:06X}",
                        "bytes": end - start,
                        "instructions": disasm,
                    }
                )
        except Exception as e:
            out.append({"name": "Error", "start": "0x0", "end": "0x0", "bytes": 0, "instructions": []})
        return out

    def update_string(self, string_index: int, new_text: str) -> dict:
        if not (0 <= string_index < len(self.strings_list)):
            raise ValueError("Invalid string index")
        entry = self.strings_list[string_index]
        off = entry["offset"]
        max_chars = entry["max_chars"]
        clipped = new_text[:max_chars]
        encoded = clipped.encode("utf-16le") + b"\x00\x00"
        padded = encoded.ljust((max_chars + 1) * 2, b"\x00")
        self.rom[off : off + len(padded)] = padded
        entry["text"] = clipped
        return entry

    # -------------------------------------------------------------------------
    # MAP EDITING (Placements, New Characters/NPCs/Enemies, Warps, Tiles)
    # -------------------------------------------------------------------------
    def save_map_edits(self, map_id: int, payload: dict) -> dict:
        me_off = ME_TABLE + map_id * ME_SIZE
        f = list(struct.unpack_from("<12B11I", self.rom, me_off))

        # 1. Update existing placements or add new placements
        if "placements" in payload:
            new_placements = payload["placements"]
            old_count = f[4]
            old_ptr = f[14]
            old_var_ptr = f[20]

            ptr_list = []
            for p in new_placements:
                ptype = p.get("type", "enemy")
                px = int(p.get("x", 120)) & 0xFFFF
                py = int(p.get("y", 80)) & 0xFFFF
                coords = (py << 16) | px
                spr = int(p.get("sprite_id", 0))
                spawn_id = int(p.get("spawn_id", 0))

                # Check if modifying an existing record in-place or allocating a new one
                existing_off = int(p["offset"], 16) if p.get("offset") else None

                if ptype == "enemy":
                    estat = int(p.get("enemy_stat_id", 0))
                    desc_ptr = int(str(p.get("descriptor_ptr", "0x0876EA04")), 0)
                    waypoints = p.get("waypoints", [])
                    if not waypoints:
                        waypoints = [{"x": px, "y": py, "wait": 60, "radius": 32}]

                    child_ptrs = []
                    for wp in waypoints:
                        wx = int(wp.get("x", px)) & 0xFFFF
                        wy = int(wp.get("y", py)) & 0xFFFF
                        wait = int(wp.get("wait", 60)) & 0xFFFF
                        rad = int(wp.get("radius", 32)) & 0xFFFF
                        if wp.get("offset"):
                            coff = int(wp["offset"], 16)
                            cfn = self.u32(coff)
                            struct.pack_into("<I4H", self.rom, coff, cfn, wx, wy, wait, rad)
                            child_ptrs.append(ROM_BASE + coff)
                        else:
                            cbytes = struct.pack("<I4H", 0x0800FF4D, wx, wy, wait, rad)
                            coff = self.alloc_bytes(cbytes)
                            child_ptrs.append(ROM_BASE + coff)

                    rec_bytes = struct.pack(
                        f"<7I{len(child_ptrs)}I",
                        PLACEMENT_FACTORY,
                        spawn_id,
                        estat,
                        coords,
                        spr,
                        desc_ptr,
                        len(child_ptrs),
                        *child_ptrs,
                    )
                    if existing_off and self.u32(existing_off) == PLACEMENT_FACTORY:
                        old_cc = self.u32(existing_off + 24)
                        if len(child_ptrs) <= old_cc:
                            self.rom[existing_off : existing_off + len(rec_bytes)] = rec_bytes
                            ptr_list.append(ROM_BASE + existing_off)
                            continue
                    new_roff = self.alloc_bytes(rec_bytes)
                    ptr_list.append(ROM_BASE + new_roff)

                elif ptype in ("npc", "object"):
                    is_npc = ptype == "npc"
                    factory = NPC_FACTORY if is_npc else OBJECT_FACTORY
                    ev_ptr = int(str(p.get("event_ptr", "0x0877C5A4")), 0)
                    if existing_off and self.u32(existing_off) in (NPC_FACTORY, OBJECT_FACTORY):
                        words = list(struct.unpack_from("<7I", self.rom, existing_off))
                        words[0] = factory
                        words[1] = spawn_id
                        words[2] = coords
                        if is_npc:
                            words[3] = ev_ptr
                            words[4] = spr
                        else:
                            words[3] = spr
                            words[5] = ev_ptr
                        struct.pack_into("<7I", self.rom, existing_off, *words)
                        ptr_list.append(ROM_BASE + existing_off)
                    else:
                        words = [
                            factory,
                            spawn_id,
                            coords,
                            ev_ptr if is_npc else spr,
                            spr if is_npc else 0,
                            0 if is_npc else ev_ptr,
                            0,
                        ]
                        rec_bytes = struct.pack("<7I", *words)
                        new_roff = self.alloc_bytes(rec_bytes)
                        ptr_list.append(ROM_BASE + new_roff)
                else:
                    if existing_off:
                        struct.pack_into("<I", self.rom, existing_off + 8, coords)
                        ptr_list.append(ROM_BASE + existing_off)

            # Write pointer table
            if len(ptr_list) <= old_count and self.in_rom(old_ptr):
                p_base = old_ptr - ROM_BASE
                for i, ptr in enumerate(ptr_list):
                    struct.pack_into("<I", self.rom, p_base + i * 4, ptr)
                f[4] = len(ptr_list)
            else:
                arr_bytes = struct.pack(f"<{len(ptr_list)}I", *ptr_list)
                new_p_off = self.alloc_bytes(arr_bytes)
                f[4] = len(ptr_list)
                f[14] = ROM_BASE + new_p_off

                # Also ensure variation array at +0x2C has enough words after its roots
                if self.in_rom(old_var_ptr):
                    vbase = old_var_ptr - ROM_BASE
                    roots_bytes = bytearray()
                    for i in range(16):
                        rptr = self.u32(vbase + i * 4)
                        if (
                            self.in_rom(rptr)
                            and (rptr - ROM_BASE) + 0x50 <= len(self.rom)
                            and self.u32((rptr - ROM_BASE) + 0x4C) == ROM_BASE + TILE_BANK_TABLE
                        ):
                            roots_bytes += struct.pack("<I", rptr)
                        else:
                            break
                    var_tail = b"\x00\x00\x00\x00" * len(ptr_list)
                    new_v_off = self.alloc_bytes(bytes(roots_bytes) + var_tail)
                    f[20] = ROM_BASE + new_v_off

            struct.pack_into("<12B11I", self.rom, me_off, *f)

        # 2. Update Warps / Exits
        if "warps" in payload:
            for w in payload["warps"]:
                if not w.get("offset"):
                    continue
                woff = int(w["offset"], 16)
                x1 = int(w["x1"]) & 0xFFFFFFFF
                y1 = int(w["y1"]) & 0xFFFFFFFF
                x2 = int(w["x2"]) & 0xFFFFFFFF
                y2 = int(w["y2"]) & 0xFFFFFFFF
                dest_x = int(w["dest_x"]) & 0xFFFF
                dest_y = int(w["dest_y"]) & 0xFFFF
                dest_map = int(w["dest_map"]) & 0xFFFF
                dest_dir = int(w["dest_dir"]) & 0xFFFF
                w4 = (dest_y << 16) | dest_x
                w5 = (dest_dir << 16) | dest_map
                struct.pack_into("<6I", self.rom, woff, x1, y1, x2, y2, w4, w5)

        # 3. Update Trigger Zones
        if "trigger_zones" in payload:
            for tz in payload["trigger_zones"]:
                if not tz.get("offset"):
                    continue
                toff = int(tz["offset"], 16)
                w0, w1, c1, c2, sptr, w5, w6 = struct.unpack_from("<7I", self.rom, toff)
                c1 = ((int(tz["y1"]) & 0xFFFF) << 16) | (int(tz["x1"]) & 0xFFFF)
                c2 = ((int(tz["y2"]) & 0xFFFF) << 16) | (int(tz["x2"]) & 0xFFFF)
                if "script_ptr" in tz:
                    sptr = int(str(tz["script_ptr"]), 0)
                struct.pack_into("<7I", self.rom, toff, w0, w1, c1, c2, sptr, w5, w6)

        # 4. Update Painted Map Layer Chunks
        if "painted_chunks" in payload:
            # painted_chunks: list of {"record_offset": "0x...", "chunk_index": j, "entries": [1024 u16]}
            for pc in payload["painted_chunks"]:
                rec_off = int(pc["record_offset"], 16)
                cidx = int(pc["chunk_index"])
                entries = pc["entries"]
                if len(entries) != 1024:
                    continue
                raw_chunk = struct.pack("<1024H", *entries)
                old_cptr = self.u32(rec_off + 0x18 + cidx * 4)
                old_coff = old_cptr - ROM_BASE if self.in_rom(old_cptr) else None
                # Pack with webfoot_lz (kind=2) and update map_store + ROM pointer
                packed_blob = webfoot_lz.pack(raw_chunk, kind=2)
                new_coff = self.alloc_bytes(packed_blob)
                self.map_store[new_coff] = raw_chunk
                if old_coff is not None:
                    self.map_store[old_coff] = raw_chunk
                struct.pack_into("<I", self.rom, rec_off + 0x18 + cidx * 4, ROM_BASE + new_coff)

        self.enemy_usage = self._scan_enemy_and_sprite_usage()
        return self.get_map_detail(map_id)

    def write_modded_rom(self) -> dict:
        with open(MODDED_ROM_PATH, "wb") as f:
            f.write(self.rom)
        return {
            "ok": True,
            "path": MODDED_ROM_PATH,
            "size_bytes": len(self.rom),
            "alloc_cursor": f"0x{self.alloc_cursor:06X}",
        }


DATA: BuusFuryData | None = None


class EditorHTTPHandler(BaseHTTPRequestHandler):
    def log_message(self, fmt: str, *args) -> None:
        pass

    def _send_json(self, obj: object, status: int = 200) -> None:
        body = json.dumps(obj).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        self.wfile.write(body)

    def _send_html(self, path: str) -> None:
        with open(path, "rb") as f:
            body = f.read()
        self.send_response(200)
        self.send_header("Content-Type", "text/html; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        self.wfile.write(body)

    def do_GET(self) -> None:
        global DATA
        parsed = urllib.parse.urlparse(self.path)
        path = parsed.path
        qs = urllib.parse.parse_qs(parsed.query)

        try:
            if path in ("/", "/index.html"):
                self._send_html(os.path.join(HERE, "index.html"))
                return

            if path == "/api/overview":
                maps = [DATA.get_map_entry_summary(i) for i in range(ME_COUNT)]
                enemies = DATA.get_enemies()
                self._send_json(
                    {
                        "rom_name": "Dragon Ball Z - Buu's Fury (USA).gba",
                        "modded_rom_path": MODDED_ROM_PATH,
                        "counts": {
                            "maps": ME_COUNT,
                            "tilebanks": len(DATA.tile_banks),
                            "sprites": SPRITE_COUNT,
                            "enemies": ENEMY_COUNT,
                            "events": EVENT_COUNT,
                            "strings": len(DATA.strings_list),
                        },
                        "maps": maps,
                        "enemies": enemies,
                    }
                )
                return

            if path.startswith("/api/map/"):
                map_id = int(path.split("/")[3])
                root_override = int(qs["root"][0], 16) if "root" in qs else None
                self._send_json(DATA.get_map_detail(map_id, root_override=root_override))
                return

            if path.startswith("/api/sprite/"):
                sprite_id = int(path.split("/")[3])
                slot = int(qs.get("slot", ["0"])[0])
                direction = int(qs.get("dir", ["0"])[0])
                self._send_json(DATA.get_sprite_info(sprite_id, anim_slot=slot, direction=direction))
                return

            if path == "/api/sprites_batch":
                start = int(qs.get("start", ["0"])[0])
                count = min(60, int(qs.get("count", ["30"])[0]))
                items = []
                for sid in range(start, min(SPRITE_COUNT, start + count)):
                    info = DATA.get_sprite_info(sid, 0, 0)
                    thumb = info["frames"][0]["png"] if info["frames"] else None
                    items.append(
                        {
                            "sprite_id": sid,
                            "slot_count": info["slot_count"],
                            "maps": info.get("maps", []),
                            "thumb": thumb,
                        }
                    )
                self._send_json({"start": start, "total": SPRITE_COUNT, "items": items})
                return

            if path == "/api/enemies":
                self._send_json({"enemies": DATA.get_enemies()})
                return

            if path == "/api/events":
                self._send_json(
                    {
                        "events": DATA.get_events_list(),
                        "opcode_streams": DATA.get_opcode_streams(),
                    }
                )
                return

            if path.startswith("/api/event/"):
                ev_id = int(path.split("/")[3])
                self._send_json(DATA.get_event_detail(ev_id))
                return

            if path == "/api/strings":
                q = qs.get("q", [""])[0].lower()
                offset = int(qs.get("offset", ["0"])[0])
                limit = int(qs.get("limit", ["100"])[0])
                filtered = [
                    s for s in DATA.strings_list if not q or q in s["text"].lower() or q in s["pointer"].lower()
                ]
                self._send_json(
                    {
                        "total": len(filtered),
                        "items": filtered[offset : offset + limit],
                    }
                )
                return

            self._send_json({"error": f"Not found: {path}"}, status=404)
        except Exception as e:
            traceback.print_exc()
            self._send_json({"error": str(e)}, status=500)

    def do_POST(self) -> None:
        global DATA
        parsed = urllib.parse.urlparse(self.path)
        path = parsed.path
        length = int(self.headers.get("Content-Length", "0"))
        body = json.loads(self.rfile.read(length).decode("utf-8")) if length > 0 else {}

        try:
            if path.startswith("/api/map/") and path.endswith("/save"):
                map_id = int(path.split("/")[3])
                res = DATA.save_map_edits(map_id, body)
                DATA.write_modded_rom()
                self._send_json(res)
                return

            if path.startswith("/api/enemy/"):
                enemy_id = int(path.split("/")[3])
                res = DATA.update_enemy(enemy_id, body)
                DATA.write_modded_rom()
                self._send_json(res)
                return

            if path.startswith("/api/event/") and path != "/api/event/create":
                ev_id = int(path.split("/")[3])
                res = DATA.update_event(ev_id, body)
                DATA.write_modded_rom()
                self._send_json(res)
                return

            if path == "/api/event/create":
                res = DATA.create_custom_event(body)
                DATA.write_modded_rom()
                self._send_json(res)
                return

            if path.startswith("/api/string/"):
                sidx = int(path.split("/")[3])
                res = DATA.update_string(sidx, body.get("text", ""))
                DATA.write_modded_rom()
                self._send_json(res)
                return

            if path == "/api/export_rom":
                res = DATA.write_modded_rom()
                self._send_json(res)
                return

            self._send_json({"error": f"Unknown POST endpoint: {path}"}, status=404)
        except Exception as e:
            traceback.print_exc()
            self._send_json({"error": str(e)}, status=500)


def main() -> None:
    global DATA
    port = int(sys.argv[1]) if len(sys.argv) > 1 else 8765
    DATA = BuusFuryData()
    server = ThreadingHTTPServer(("127.0.0.1", port), EditorHTTPHandler)
    print(f"\n============================================================")
    print(f" Dragon Ball Z: Buu's Fury Studio Editor running at:")
    print(f"   http://127.0.0.1:{port}")
    print(f"============================================================\n")
    server.serve_forever()


if __name__ == "__main__":
    main()
