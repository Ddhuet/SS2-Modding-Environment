#!/usr/bin/env python3
"""Redirect CN centring calls of the glyph counter to a width-aware helper.

    eu/.venv/bin/python translation/tools/centering.py [CN.gba] [US.gba]   # report only

CN centres text with `x = C - count(str)` where count = 0x0801A1F4 (glyphs up to the
first control code) and every glyph is 2 tiles wide. US has the same counter (0x0801A1C8)
and halves its result at those sites (`lsrs r0,r0,#1`, or a signed /2), because US glyphs
are 1 tile wide. With English strings in the CN code, `C - count` is too far left and goes
negative for strings longer than C: the renderer then writes outside the tilemap
(identifier window, CN 0x08083B50: garbled screen and hard lock).

The CN code has no room for an extra `lsrs`, so each listed `bl 0x0801A1F4` becomes
`bl CENTER_HELPER` (translation/asm/center_width.s): tiles/2 for any mix of CN full-width
(2) and US half-width (1) codes. For pure English that is US's `count >> 1`.

HALVE lists every CN call site whose US partner halves; each pair was reviewed by hand
(US partner address recorded) and is re-checked here: CN `bl 0x0801A1F4`, US
`bl 0x0801A1C8` followed within 3 instructions by a halving. KEEP lists the other CN
sites with the reason. Every CN call site must be in one list or the tool refuses.
"""
import struct
import sys
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

BASE = 0x08000000
CN_COUNT, US_COUNT = 0x0801A1F4, 0x0801A1C8
CODE_END = 0x080C0000
# Dead bytes of the old CN glyph loop (0x08019FD8..0x0801A093) after the renderer hook at
# 0x08019FCE; no branch or literal points into them (checked in PHASE1_BUILD.md §5).
CENTER_HELPER = 0x08019FD8
DEAD_END = 0x0801A094

HALVE = {  # CN site -> US partner
    0x0800422E: 0x08004256, 0x0800C0EC: 0x0800C17C, 0x08024956: 0x08024872,
    0x080252F2: 0x0802520E, 0x08025B9E: 0x08025AAE, 0x080263FC: 0x08026308,
    0x080268A8: 0x080267B0, 0x08060D10: 0x08060622, 0x08063124: 0x080629C8,
    0x08066064: 0x080658A0, 0x0807B8C0: 0x0807AF08, 0x0807BA18: 0x0807B060,
    0x0807C32A: 0x0807B972, 0x080808A6: 0x0807FE6A, 0x08080978: 0x0807FF40,
    0x08081DD4: 0x080813A0, 0x08081FD0: 0x080815A4, 0x0808210E: 0x080816C2,
    0x08082218: 0x080817D0, 0x08082230: 0x080817EC, 0x080822E0: 0x0808189C,
    0x080822F8: 0x080818B8, 0x08082466: 0x08081A36, 0x08082534: 0x08081B04,
    0x0808254C: 0x08081B20, 0x08082600: 0x08081BE0, 0x080826D6: 0x08081CC2,
    0x080827BE: 0x08081DB6, 0x0808281E: 0x08081E1E, 0x0808283A: 0x08081E3C,
    0x0808291E: 0x08081F2E, 0x0808297E: 0x08081F96, 0x0808299A: 0x08081FB4,
    0x08082BC6: 0x080821E6, 0x08082C0C: 0x0808222C, 0x08082C62: 0x08082284,
    0x080834B0: 0x08082AD4, 0x080836C8: 0x08082CEC, 0x08083B50: 0x08083176,
    0x08083BFE: 0x08083226, 0x08084012: 0x0808363A, 0x08084176: 0x0808379E,
    0x08086606: 0x08085BFA, 0x08087E22: 0x0808743A, 0x08087E38: 0x08087452,
    0x08087E50: 0x0808746C, 0x08087E68: 0x08087486, 0x08087E7A: 0x0808749A,
    0x08087E90: 0x080874B2, 0x08087EB0: 0x080874D4, 0x0808B800: 0x0808ACDC,
    0x0808BAEE: 0x0808AFC2, 0x0808C5C6: 0x0808BA6E, 0x0808C7D0: 0x0808BC72,
    0x0808CA2E: 0x0808BEB6, 0x0808CC46: 0x0808C0C2, 0x0808CD22: 0x0808C1A0,
}
KEEP = {
    0x08004102: "result used as a count (US 0x0800412A same)",
    0x080041DE: "count (US 0x08004206 same)",
    0x08004696: "count (US 0x080046BA same)",
    0x0800476E: "count (US 0x08004788 same)",
    0x080047E4: "count (US 0x08004800 same)",
    0x0800485C: "pixel width count*4 (US 0x08004878 same shape)",
    0x080048CC: "pixel width count*4 (US 0x080048E8 same shape)",
    0x08004B08: "CN-only site, 0x78 - count*4 pixel centring; no US partner (candidate, open)",
    0x0800502C: "count test (US 0x080050DE same)",
    0x08065C52: "count*13/2 pixel width, identical in US 0x0806548E",
    0x0806624C: "count*4 pixel width, identical in US 0x08065A84",
    0x08083B6A: "typewriter index compare (US 0x08083192 same)",
    0x0808402C: "typewriter index compare (US 0x08083656 same)",
}


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and off % 2 == 0, (hex(src), hex(dst))
    off = (off >> 1) & 0x3FFFFF
    return struct.pack("<HH", 0xF000 | (off >> 11), 0xF800 | (off & 0x7FF))


def bl_target(rom, a):
    h1, h2 = struct.unpack_from("<HH", rom, a - BASE)
    if h1 & 0xF800 != 0xF000 or h2 & 0xF800 != 0xF800:
        return None
    off = ((h1 & 0x7FF) << 12) | ((h2 & 0x7FF) << 1)
    if off & 0x400000:
        off -= 0x800000
    return a + 4 + off


def halves(rom, a):
    cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    for ins in list(cs.disasm(rom[a + 4 - BASE:a + 16 - BASE], a + 4))[:3]:
        if ins.mnemonic in ("lsrs", "asrs") and ins.op_str.endswith(", #1"):
            return True
        if ins.mnemonic == "lsls" and ins.op_str.endswith("#0xf"):  # lsls #15; asrs #16
            return True
    return False


def redirect(cn, us):
    """Return [(addr, before, after, note)] for every HALVE site. Refuses on any mismatch."""
    sites = [a for a in range(BASE, CODE_END, 2) if bl_target(cn, a) == CN_COUNT]
    unlisted = [hex(a) for a in sites if a not in HALVE and a not in KEEP]
    stale = [hex(a) for a in list(HALVE) + list(KEEP) if a not in sites]
    if unlisted or stale:
        raise ValueError(f"centring sites unlisted {unlisted} / listed but absent {stale}")
    writes = []
    for a, u in sorted(HALVE.items()):
        if bl_target(us, u) != US_COUNT or not halves(us, u):
            raise ValueError(f"US partner {u:#x} of {a:#x} is not a halved glyph count")
        if halves(cn, a):
            raise ValueError(f"CN site {a:#x} already halves")
        writes.append((a, cn[a - BASE:a - BASE + 4], bl(a, CENTER_HELPER),
                       f"centring: bl 0x0801A1F4 -> bl {CENTER_HELPER:#010x} (US {u:#010x} halves)"))
    return writes


def main():
    cn = Path(sys.argv[1] if len(sys.argv) > 1 else "eu/inputs/ss2-cn-baseline.gba").read_bytes()
    us = Path(sys.argv[2] if len(sys.argv) > 2 else "ROMs/Shining Soul II (USA).gba").read_bytes()
    writes = redirect(cn, us)
    for a, b, n, note in writes:
        print(f"{a:08X}  {b.hex()} -> {n.hex()}  {note}")
    print(f"{len(writes)} redirected, {len(KEEP)} kept")


if __name__ == "__main__":
    main()
