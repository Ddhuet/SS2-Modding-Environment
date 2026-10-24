#!/usr/bin/env python3
"""Build counter_fix_slash: counter_fix + a red diagonal slash OBJ over the countered enemy for 6 frames.

    python3 slash/build.py      # writes patches/custom/counter_fix_slash.json

Needs llvm-mc and llvm-objcopy. See docs/mods/counter_fix_slash.md.
"""
import json, struct, subprocess, tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SRC = ROOT / "slash/src/counter_slash.s"
CN = ROOT / "eu/inputs/ss2-cn-baseline.gba"
COUNTER_DEF = ROOT / "patches/definitions/counter_fix.json"
OUT_DEF = ROOT / "patches/custom/counter_fix_slash.json"

STUB_BASE, STUB_END = 0x080BB268, 0x080BB400   # free gap after summon_ai's stubs
TILES = 0x09013000                              # 512 B, owned 0x09013000..0x090131FF
COUNTER_SITE, COUNTER_ORIG = 0x0801E654, "27203bf019fa"   # movs r0,#0x27; bl 0x08059A8C
FRAME_SITE, FRAME_ORIG = 0x08008B2E, "10bc01bc"           # pop {r4}; pop {r0}


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and off % 2 == 0, (hex(src), hex(dst))
    off >>= 1
    return struct.pack("<HH", 0xF000 | ((off >> 11) & 0x7FF), 0xF800 | (off & 0x7FF))


def assemble():
    with tempfile.TemporaryDirectory() as td:
        obj, binf = Path(td) / "s.o", Path(td) / "s.bin"
        subprocess.run(["llvm-mc", "-triple=thumbv4t-none-eabi", "-mcpu=arm7tdmi", "-filetype=obj",
                        f"--defsym=TILES=0x{TILES:08X}", str(SRC), "-o", str(obj)], check=True)
        relocs = subprocess.run(["llvm-readelf", "-r", str(obj)], capture_output=True, text=True).stdout
        assert ".rel" not in relocs, relocs
        subprocess.run(["llvm-objcopy", "-O", "binary", "-j", ".text", str(obj), str(binf)], check=True)
        syms = {}
        for line in subprocess.run(["llvm-nm", str(obj)], capture_output=True, text=True).stdout.splitlines():
            p = line.split()
            if len(p) == 3 and p[1] in "Tt":
                syms[p[2]] = int(p[0], 16) & ~1
        return binf.read_bytes(), syms


def slash_tiles():
    """32x32 4bpp, 1D tile order: a ~4 px red line from top-right to bottom-left (colour 1)."""
    px = [[0] * 32 for _ in range(32)]
    for y in range(32):
        for x in range(32):
            if 2 <= y <= 29 and abs((x + y) - 31) <= 2:
                px[y][x] = 1
    out = bytearray()
    for ty in range(4):
        for tx in range(4):
            for r in range(8):
                row = px[ty * 8 + r][tx * 8:tx * 8 + 8]
                out += bytes(row[i] | row[i + 1] << 4 for i in range(0, 8, 2))
    return bytes(out)


def main():
    code, syms = assemble()
    assert STUB_BASE + len(code) <= STUB_END, len(code)
    cn = CN.read_bytes()
    writes = json.loads(COUNTER_DEF.read_text())["writes"]
    for w in writes:
        w["note"] = "counter_fix (official, unchanged): " + w["note"]

    def add(addr, after, note):
        off = addr - 0x08000000
        writes.append({"address": f"0x{addr:08X}", "offset": f"0x{off:08X}",
                       "before_hex": cn[off:off + len(after)].hex(), "after_hex": after.hex(),
                       "mode": "thumb", "note": note})

    for site, orig in ((COUNTER_SITE, COUNTER_ORIG), (FRAME_SITE, FRAME_ORIG)):
        assert cn[site - 0x08000000:][:len(orig) // 2].hex() == orig, hex(site)
    assert not any(cn[STUB_BASE - 0x08000000:STUB_END - 0x08000000])
    tiles = slash_tiles()
    assert not any(cn[TILES - 0x08000000:][:len(tiles)])

    add(COUNTER_SITE, bl(COUNTER_SITE, STUB_BASE + syms["counter_hook"]) + bytes.fromhex("c046"),
        "Damage routine counter branch: `movs r0,#0x27; bl 0x08059A8C` (counter sound) -> "
        "`bl counter_hook; nop`. counter_hook records the target's world position and arms a 6-frame "
        "timer at IWRAM 0x03007920, then plays the sound.")
    add(FRAME_SITE, bl(FRAME_SITE, STUB_BASE + syms["frame_hook"]),
        "Field sprite builder 0x08008B18 epilogue: `pop {r4}; pop {r0}` -> `bl frame_hook` "
        "(frame_hook draws the slash while the timer runs, then does the pops and returns).")
    add(STUB_BASE, code, f"Allocation 0x{STUB_BASE:08X}..0x{STUB_BASE + len(code) - 1:08X} ({len(code)} B, "
        f"was zero; owner counter_fix_slash): Thumb code from slash/src/counter_slash.s.")
    add(TILES, tiles, f"Allocation 0x{TILES:08X}..0x{TILES + len(tiles) - 1:08X} ({len(tiles)} B, was zero; "
        "owner counter_fix_slash): 32x32 4bpp slash tiles (colour 1 of OBJ palette 15).")

    d = {
        "schema_version": 1,
        "id": "counter_fix_slash",
        "name": "COUNTER fix + red slash on counter (test variant of counter_fix)",
        "stage": "static_candidate",
        "profile_id": "ss2-cn-baseline",
        "baseline": json.loads(COUNTER_DEF.read_text())["baseline"],
        "conflicts": ["counter_fix"],
        "source_provenance": {"kind": "new", "source": "slash/src/counter_slash.s, slash/build.py",
                              "notes": "docs/mods/counter_fix_slash.md"},
        "allocations": [
            {"range": f"0x{STUB_BASE:08X}..0x{STUB_BASE + len(code) - 1:08X}", "fill": "zero", "what": "code"},
            {"range": f"0x{TILES:08X}..0x{TILES + len(tiles) - 1:08X}", "fill": "zero", "what": "tiles"},
            {"range": "IWRAM 0x03007920..0x03007927", "fill": "unused", "what": "timer + world x/y"},
        ],
        "writes": writes,
    }
    OUT_DEF.write_text(json.dumps(d, indent=2) + "\n")
    print(f"code {len(code)} B, syms {', '.join(f'{k}=0x{STUB_BASE + v:08X}' for k, v in syms.items())}")
    print("wrote", OUT_DEF.relative_to(ROOT))


if __name__ == "__main__":
    main()
