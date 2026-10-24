#!/usr/bin/env python3
"""Emit the phase-1 English patch for the CN baseline, as a declarative ss2tools patch.

    Tools/.venv/bin/python Tools/Scripts/make_english_patch.py [--out Build/ss2-en-phase1.patch.json]
    cd Tools && .venv/bin/python -m ss2tools build ../ROMs/Shining_Soul_II_CN_Baseline.gba \
        ../Build/ss2-en-phase1.patch.json ../Build/ss2-en-phase1.gba \
        --profile profiles/ss2-cn-baseline.json --allow-static-candidate

Reads the CN baseline and the US ROM (both hash-checked against their profiles) and
writes nothing else. Needs `llvm-mc` and `llvm-objcopy` to assemble
Tools/Scripts/asm/render_glyphs.s. The output holds US text and font bytes, so it lives
in the git-ignored Build/.

What the patch does (see Docs/Translation/PHASE1_SURVEY.md and PHASE1_BUILD.md):
  1. language word init 0x08001BA4: movs r0,#0 -> movs r0,#1
  2. slot-1 message table: 1493 US slot-1 messages, re-encoded, in expansion space;
     pool word 0x08006B8C repointed to it
  3. record name slot 1 for every name_tables.TABLES record (re-encoded US slot 1)
  4. type-4 font section relocated: 9 banks (CN 0-6 in place, US 0-1 copied as 7-8);
     section header word 0x085286B8 repointed
  5. renderer glyph loop hook at 0x08019FCE -> half-width cell for codes >= 0x701
  6. dialogue window line buffers 0x24 -> 0x3C bytes, in place (dialogue_frame.py)
  7. other text line buffers enlarged as in US, in place (frame_port.py); CN-only stack
     layouts grown by reviewed spec (frame_grow.py: item detail description lines)
  8. centring: 57 calls of the glyph counter -> width-aware helper in the dead old glyph
     loop (centering.py, Tools/Scripts/asm/center_width.s)
  9. equipment name bar (0x080606CC): enchant after the name, as US, rewritten in place
     (Tools/Scripts/asm/name_suffix.s)

Re-encoding (survey §3): glyph code c -> c + 0x700; 0xFFxx controls unchanged; the two
parameter halfwords after 0xFFFE and the two header halfwords unchanged.
"""
import argparse
import hashlib
import json
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from base_roms import write_spans  # noqa: E402
from name_tables import TABLES, SLOT, records  # noqa: E402
import dialogue_frame  # noqa: E402
import frame_port  # noqa: E402
import frame_grow  # noqa: E402
import centering  # noqa: E402
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB  # noqa: E402

BASE = 0x08000000
CN_ROM = ROOT / "ROMs/Shining_Soul_II_CN_Baseline.gba"
US_ROM = ROOT / "ROMs/Shining_Soul_II_USA.gba"
CN_PROFILE = ROOT / "Tools/profiles/ss2-cn-baseline.json"
US_PROFILE = ROOT / "Tools/profiles/ss2-us.json"
ASM = ROOT / "Tools/Scripts/asm/render_glyphs.s"
ASM_CENTER = ROOT / "Tools/Scripts/asm/center_width.s"
ASM_SUFFIX = ROOT / "Tools/Scripts/asm/name_suffix.s"

GLYPH_SHIFT = 0x700
MSG_COUNT = 1493

# CN baseline sites (static_verified in PHASE1_SURVEY.md)
# equipment name bar 0x080606CC: enchant-then-name copy (PHASE1_BUILD.md §5c)
NAME_SUFFIX = 0x08060A20
NAME_SUFFIX_BEFORE = ("189b002b1ed00024324801684801401a410058180088002813d00a1c601940006b4619186000"
                      "8018189b181800880880601c0006040e60008018181800880028ecd12d1900243088002811d0"
                      "601940006a4611186000801900880880601c0006040e600080190088002801d00f2cedd9")
LANG_INIT = 0x08001BA4          # movs r0,#0 before str to 0x03003510
SLOT1_POOL = 0x08006B8C         # type-0x14 case 1 literal (0x083931AC)
SSDT_ROOT = 0x085286A0
FONT_HDR = SSDT_ROOT + 8 + 4 * 4  # 0x085286B8, type-4 section offset
CN_FONT = 0x088D94C8
RENDER_HOOK = 0x08019FCE        # start of the glyph loop in 0x08019F30
RENDER_HOOK_BEFORE = "4a46118801390904080e"  # mov r2,sb; ldrh r1,[r2]; subs r1,#1; lsls r1,#16; lsrs r0,r1,#24
# US sources
US_SLOT1 = 0x083D8D18
US_FONT = 0x08928E90            # section: count 2, offsets 0xC, 0x800C

# Allocations in the translation-owned range (survey §9: 0x09400000.., zero fill)
ALLOC_CODE = 0x09400000         # renderer loop, <= 0x100
ALLOC_FONT = 0x09400100         # 9-bank font section header + US banks 7-8
ALLOC_MSG = 0x09420000          # slot-1 pointer table + strings
ALLOC_END = 0x09500000          # nothing of ours beyond this

# US slot-1 glyph codes outside the US font (US has banks 0-1, codes 0x01-0x200).
# Message 240 has one 0x201 just before a page break; it would read a nonexistent
# bank. Dropped, recorded in PHASE1_BUILD.md.
DROP_CODES = {0x201}


def u16(rom, a):
    return struct.unpack_from("<H", rom, a - BASE)[0]


def u32(rom, a):
    return struct.unpack_from("<I", rom, a - BASE)[0]


def load(path, profile_path):
    data = path.read_bytes()
    want = json.loads(profile_path.read_text())["identity"]["sha256"]
    got = hashlib.sha256(data).hexdigest()
    if got != want:
        sys.exit(f"{path}: SHA-256 {got} does not match {profile_path.name} ({want})")
    return data


def glyph(c, where):
    if not 0 < c <= 0x200:
        raise ValueError(f"{where}: glyph code {c:#x} outside US banks 0-1")
    return c + GLYPH_SHIFT


def reencode_message(us, ptr, mid):
    """Return (re-encoded halfwords, dropped count) for the US message at ptr."""
    o = ptr
    out = [u16(us, o), u16(us, o + 2)]
    o += 4
    dropped = 0
    while True:
        v = u16(us, o)
        o += 2
        if v >= 0xFF00:
            out.append(v)
            if v == 0xFFFD:
                return out, dropped
            if v == 0xFFFE:
                out += [u16(us, o), u16(us, o + 2)]
                o += 4
        elif v in DROP_CODES:
            dropped += 1
        else:
            out.append(glyph(v, f"message {mid}"))


def reencode_name(raw, where):
    v = list(struct.unpack(f"<{SLOT // 2}H", raw))
    n = v.index(0)
    return struct.pack(f"<{SLOT // 2}H", *([glyph(c, where) for c in v[:n]] + [0] * (SLOT // 2 - n)))


def assemble(path=ASM, base=None, code_end=None):
    """code_end: byte length of the instructions when the code has no `bx` (in-place patch)."""
    base = ALLOC_CODE if base is None else base
    with tempfile.TemporaryDirectory() as tmp:
        obj, binf = Path(tmp) / "r.o", Path(tmp) / "r.bin"
        subprocess.run(["llvm-mc", "-triple=thumbv4t-none-eabi", "-mcpu=arm7tdmi",
                        "-filetype=obj", str(path), "-o", str(obj)], check=True)
        subprocess.run(["llvm-objcopy", "-O", "binary", "-j", ".text", str(obj), str(binf)], check=True)
        code = binf.read_bytes()
    # Defence in depth (llvm-mc already enforces v4t): only 16-bit Thumb encodings and BL.
    cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    lits = code_end - 2 if code_end else max(i for i in range(0, len(code), 2)  # last `bx rN`; pool follows
                                             if struct.unpack_from("<H", code, i)[0] & 0xFF87 == 0x4700)
    for ins in cs.disasm(code[:lits + 2], base):
        if ins.size != 2 and ins.mnemonic != "bl":
            raise ValueError(f"non-ARMv4T instruction {ins.mnemonic} at {ins.address:#x}")
    return code


def write(writes, cn, addr, after, note, expansion=False):
    off = addr - BASE
    before = cn[off:off + len(after)]
    if before == after:
        return
    if expansion and any(before):
        raise ValueError(f"allocation {addr:#x} is not zero-filled in the CN baseline")
    writes.append({"address": f"0x{addr:08X}", "offset": f"0x{off:08X}",
                   "before_hex": before.hex(), "after_hex": after.hex(), "note": note})


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--out", type=Path, default=ROOT / "Build/ss2-en-phase1.patch.json")
    args = ap.parse_args()
    cn = load(CN_ROM, CN_PROFILE)
    us = load(US_ROM, US_PROFILE)
    writes, allocations, stats = [], [], {}

    # 1. language word
    assert cn[LANG_INIT - BASE:LANG_INIT - BASE + 2] == b"\x00\x20"
    assert us[LANG_INIT - BASE:LANG_INIT - BASE + 2] == b"\x01\x20"
    write(writes, cn, LANG_INIT, b"\x01\x20", "language word init: movs r0,#1 (US instruction, same address)")

    # 5. renderer
    code = assemble()
    if len(code) > ALLOC_FONT - ALLOC_CODE:
        raise ValueError("renderer code overflows its allocation")
    write(writes, cn, ALLOC_CODE, code, "renderer glyph loop with half-width cell (Tools/Scripts/asm/render_glyphs.s)", True)
    allocations.append({"address": f"0x{ALLOC_CODE:08X}", "length": len(code), "fill": "00",
                        "what": "renderer glyph loop (Thumb)"})
    hook = bytes.fromhex("014b1847c046") + struct.pack("<I", ALLOC_CODE | 1)
    assert cn[RENDER_HOOK - BASE:RENDER_HOOK - BASE + 10].hex() == RENDER_HOOK_BEFORE
    write(writes, cn, RENDER_HOOK, hook, "renderer hook: ldr r3,=0x09400001; bx r3; nop; literal (old loop body becomes dead)")

    # 6. dialogue window frame (needs Capstone: run with Tools/.venv/bin/python)
    dwrites, dreport = dialogue_frame.port(cn, us)
    for a, before, after, note in dwrites:
        write(writes, cn, a, after, "dialogue frame: " + note)
    stats["dialogue_frame_writes"] = len(dwrites)
    stats["dialogue_frame_sp_sites_equal_to_us"] = dreport["sp_sites_checked_against_us"]

    # 7. other text line buffers (identifier windows)
    fwrites, freport = frame_port.port(cn, us)
    for a, before, after, note in fwrites:
        write(writes, cn, a, after, "frame port: " + note)
    stats["frame_port"] = freport
    gwrites, greport = frame_grow.grow(cn)
    for a, before, after, note in gwrites:
        write(writes, cn, a, after, "frame grow: " + note)
    stats["frame_grow"] = greport

    # 8. centring helper in the dead old glyph loop, and the redirected call sites
    helper = assemble(ASM_CENTER, centering.CENTER_HELPER)
    if centering.CENTER_HELPER + len(helper) > centering.DEAD_END:
        raise ValueError("centring helper overflows the dead glyph-loop bytes")
    write(writes, cn, centering.CENTER_HELPER, helper,
          "centring helper (Tools/Scripts/asm/center_width.s) over dead old glyph loop bytes")
    cwrites = centering.redirect(cn, us)
    for a, before, after, note in cwrites:
        write(writes, cn, a, after, note)
    stats["centering_redirects"] = len(cwrites)

    # 9. equipment name bar: name, space, enchant (US order) in place of enchant + name
    suffix = assemble(ASM_SUFFIX, NAME_SUFFIX, code_end=0x4C)
    if cn[NAME_SUFFIX - BASE:NAME_SUFFIX - BASE + len(suffix)].hex() != NAME_SUFFIX_BEFORE:
        raise ValueError("name bar enchant/name copy is not the reviewed CN code")
    write(writes, cn, NAME_SUFFIX, suffix,
          "equipment name bar: name + space + enchant, US order (Tools/Scripts/asm/name_suffix.s)")

    # 4. font section: count 9, offsets relative to the new section
    assert u32(cn, FONT_HDR) == CN_FONT - SSDT_ROOT and u32(cn, CN_FONT) == 7
    assert u32(us, US_FONT) == 2 and u32(us, US_FONT + 4) == 0xC and u32(us, US_FONT + 8) == 0x800C
    hdr_len = 0x40  # 4 + 9*4 = 0x28, padded so banks are 64-byte aligned
    offs = [(CN_FONT + u32(cn, CN_FONT + 4 + 4 * i) - ALLOC_FONT) & 0xFFFFFFFF for i in range(7)]
    offs += [hdr_len, hdr_len + 0x8000]
    us_banks = us[US_FONT + 0xC - BASE:US_FONT + 0xC + 0x10000 - BASE]
    section = struct.pack("<10I", 9, *offs).ljust(hdr_len, b"\0") + us_banks
    write(writes, cn, ALLOC_FONT, section, "type-4 font section: 9 banks; 0-6 wrap back to CN 0x088D94E8.., 7-8 = US banks 0-1", True)
    allocations.append({"address": f"0x{ALLOC_FONT:08X}", "length": len(section), "fill": "00",
                        "what": "font section (header 0x40 + US banks 0-1 as banks 7-8)"})
    write(writes, cn, FONT_HDR, struct.pack("<I", ALLOC_FONT - SSDT_ROOT), "SSDT type-4 section offset -> 0x09400100")

    # 2. messages
    ptrs = [u32(us, US_SLOT1 + 4 * i) for i in range(MSG_COUNT)]
    if len(set(ptrs)) != MSG_COUNT:
        raise ValueError("US slot-1 pointers are not unique; dedup handling needed")
    blob = bytearray(4 * MSG_COUNT)
    dropped = 0
    for i, p in enumerate(ptrs):
        hw, d = reencode_message(us, p, i)
        dropped += d
        struct.pack_into("<I", blob, 4 * i, ALLOC_MSG + len(blob))
        blob += struct.pack(f"<{len(hw)}H", *hw)
        blob += b"\0" * (-len(blob) % 4)
    if ALLOC_MSG + len(blob) > ALLOC_END:
        raise ValueError("message blob overflows the translation range")
    write(writes, cn, ALLOC_MSG, bytes(blob), "slot-1 message pointer table (1493) + re-encoded US slot-1 strings", True)
    allocations.append({"address": f"0x{ALLOC_MSG:08X}", "length": len(blob), "fill": "00",
                        "what": "slot-1 message table + strings"})
    assert u32(cn, SLOT1_POOL) == 0x083931AC
    write(writes, cn, SLOT1_POOL, struct.pack("<I", ALLOC_MSG), "type-0x14 slot-1 table pointer -> 0x09420000")
    stats["messages"] = MSG_COUNT
    stats["dropped_codes"] = dropped

    # 3. record names
    named = 0
    for t in TABLES:
        for i, c, u in records(t):
            raw = us[u - BASE + SLOT:u - BASE + 2 * SLOT]
            if not any(raw):
                continue
            new = reencode_name(raw, f"{t[0]} record {i}")
            n0 = len(writes)
            write(writes, cn, c + SLOT, new, f"{t[0]} record {i} name slot 1")
            named += len(writes) - n0
    stats["names"] = named

    patch = {
        "schema_version": 1,
        "id": "ss2_en_phase1",
        "name": "English text on the CN baseline, phase 1",
        "stage": "static_candidate",
        "profile_id": "ss2-cn-baseline",
        "baseline": json.loads(CN_PROFILE.read_text())["identity"],
        "source_provenance": {
            "generator": "Tools/Scripts/make_english_patch.py",
            "us_profile_id": "ss2-us",
            "us_sha256": hashlib.sha256(us).hexdigest(),
            "renderer_asm_sha256": hashlib.sha256(ASM.read_bytes()).hexdigest(),
            "renderer_code_sha256": hashlib.sha256(code).hexdigest(),
            "center_asm_sha256": hashlib.sha256(ASM_CENTER.read_bytes()).hexdigest(),
            "center_code_sha256": hashlib.sha256(helper).hexdigest(),
            "name_suffix_asm_sha256": hashlib.sha256(ASM_SUFFIX.read_bytes()).hexdigest(),
        },
        "evidence": {"status": "experimental", "doc": "Docs/Translation/PHASE1_BUILD.md",
                     "user_acceptance": "not_run"},
        "allocations": {"range": "0x09400000..0x094FFFFF", "owner": "ss2_en_phase1",
                        "baseline_fill": "00", "blocks": allocations,
                        "reused_dead_code": [{"address": f"0x{centering.CENTER_HELPER:08X}", "length": len(helper),
                                              "region": f"0x{centering.CENTER_HELPER:08X}..0x{centering.DEAD_END - 1:08X}",
                                              "what": "centring helper over the old CN glyph loop, dead after the renderer hook"}]},
        "stats": stats,
        "writes": writes,
    }
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(patch, indent=1) + "\n")
    write_spans(patch)  # byte-free, tracked copy for mod_conflicts.py / base_roms.py
    print(json.dumps({"out": str(args.out), "writes": len(writes), "allocations": allocations, **stats}, indent=1))


if __name__ == "__main__":
    main()
