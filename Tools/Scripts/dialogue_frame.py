#!/usr/bin/env python3
"""In-place port of the US dialogue-window line-buffer enlargement to the CN baseline.

    Tools/.venv/bin/python Tools/Scripts/dialogue_frame.py [CN.gba] [US.gba]   # report only

The dialogue window function (CN 0x0805E8E4, US 0x0805E1DC) keeps the two visible lines
in stack buffers of 0x24 bytes (17 glyphs + 0xFFFD) in CN and 0x3C bytes (29 glyphs) in
US. Lines are copied in with no bound, so English lines overflow the CN buffers into the
next line and into the frame above them. US is the same function compiled with a bigger
frame. Aligning the two instruction streams (difflib on mnemonics) shows these
differences only:

  * sp-relative offsets: < 0x4C same; 0x4C..0xAB +0x30; 0xAC..0x104 +0x34; frame
    0x108 -> 0x13C. Applied to every sp-relative instruction of the CN function.
  * line stride 0x24 -> 0x3C (immediates, and 9x*4 -> 15x*4 as lsls#3/adds -> lsls#4/subs),
    `mov rX,sp; adds rX,#imm` buffer addresses, and the copy limit of the 0x94 buffer
    (cmp #0xa -> #0xc, it grew 4 bytes). Taken from US at the CN_TAKE_US addresses.
  * BL targets, literal-pool words, jump tables, CN actor-struct arithmetic (stride
    0x154 vs US 0x158), the player-name copy limit (cmp #7 vs #9) and the "A" prompt
    draw order: kept CN.

Every byte difference between aligned instructions must fall in one of these classes or
the port refuses. Static only; see Docs/Translation/PHASE1_BUILD.md for runtime checks.
"""
import difflib
import re
import struct
import sys
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

BASE = 0x08000000
CN_FUNC, CN_LEN = 0x0805E8E4, 0xEAC
US_FUNC, US_LEN = 0x0805E1DC, 0xEC0
FRAME_CN, FRAME_US = 0x108, 0x13C

# CN instructions that take the US encoding unchanged (registers verified equal below).
CN_TAKE_US = {
    0x0805E90E: "mov r0,sp; adds r0,#0x80 -> #0xB0 (buffer address, frame map)",
    0x0805E914: "mov r1,sp; adds r1,#0x94 -> #0xC4 (buffer address, frame map)",
    0x0805E93E: "line clear loop stride adds r2,#0x24 -> #0x3C",
    0x0805EB50: "message 0x4DF copy limit cmp r5,#0xa -> #0xc (0x94 buffer +4 bytes)",
    0x0805EB74: "message 0x4DF copy limit cmp r5,#0xa -> #0xc",
    0x0805F368: "second line terminator strh [r0,#0x24] -> #0x3C",
    0x0805F656: "render loop stride adds r4,#0x24 -> #0x3C",
}
STRIDE_PATTERN = ("lsls", "adds")  # lsls rA,rB,#3 / adds r0,rA,rB  ->  lsls #4 / subs


def sp_map(off):
    if off < 0x4C:
        return off
    if off < 0xAC:
        return off + 0x30
    if off <= 0x104:
        return off + 0x34
    raise ValueError(f"sp offset {off:#x} outside the mapped frame")


def disasm(rom, addr, n):
    cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    cs.skipdata = True
    return [(i.address, bytes(i.bytes), i.mnemonic, i.op_str) for i in cs.disasm(rom[addr - BASE:addr - BASE + n], addr)]


def pool_words(rom, ins):
    """Addresses of halfwords that are literal-pool data for `ldr rX,[pc,#]` in ins."""
    data = set()
    for a, b, _, _ in ins:
        hw = struct.unpack("<H", b[:2])[0]
        if len(b) == 2 and hw & 0xF800 == 0x4800:
            lit = ((a + 4) & ~3) + (hw & 0xFF) * 4
            data |= {lit, lit + 2}
    return data


def sp_rewrite(hw):
    """Return the CN halfword with its sp offset remapped, or None if not sp-relative."""
    if 0x9000 <= hw < 0xA000 or 0xA800 <= hw < 0xB000:  # ldr/str rd,[sp,#]; add rd,sp,#
        return (hw & 0xFF00) | (sp_map((hw & 0xFF) * 4) // 4)
    if hw & 0xFF00 == 0xB000:  # add/sub sp,#imm7*4
        imm = (hw & 0x7F) * 4
        if imm != FRAME_CN:
            raise ValueError(f"unexpected sp adjust {imm:#x}")
        return (hw & 0xFF80) | (FRAME_US // 4)
    return None


def port(cn, us):
    """Return (writes, report). writes: list of (addr, before, after, note)."""
    A = disasm(cn, CN_FUNC, CN_LEN)
    U = disasm(us, US_FUNC, US_LEN)
    pools = pool_words(cn, A)
    code = [x for x in A if x[0] not in pools and x[2] != ".byte"]
    after = {}
    notes = {}
    # 1. every sp-relative instruction of the CN function
    for a, b, m, ops in code:
        if len(b) != 2:
            continue
        new = sp_rewrite(struct.unpack("<H", b)[0])
        if new is not None:
            after[a] = struct.pack("<H", new)
            notes[a] = f"sp offset: {m} {ops}"
    # 2. align with US and classify every remaining byte difference
    sm = difflib.SequenceMatcher(None, [x[2] for x in A], [x[2] for x in U], autojunk=False)
    pairs, kept, checked_sp = [], [], 0
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == "equal" or (tag == "replace" and i2 - i1 == j2 - j1):
            pairs += zip(A[i1:i2], U[j1:j2])
        else:
            kept.append((tag, f"{A[i1][0]:08X}" if i1 < len(A) else "end", i2 - i1, j2 - j1))
    cn_next = {A[k][0]: A[k + 1] for k in range(len(A) - 1)}
    us_of = {a[0]: u for a, u in pairs}
    for (a, b, m, ops), (ua, ub, um, uops) in pairs:
        if a in after and a not in CN_TAKE_US:
            if after[a] != ub and after[a][0] != ub[0]:
                raise ValueError(f"{a:#x}: sp map gives {after[a].hex()} but US has {ub.hex()}")
            checked_sp += 1  # equal immediate; a differing register allocation stays CN
            continue
        if b == ub:
            continue
        if a in pools or m == ".byte" or um == ".byte" or (m == "bl" and um == "bl"):
            kept.append(("data/bl", f"{a:08X}", m, ops))
            continue
        regs = re.sub(r"#\w+", "#", ops) == re.sub(r"#\w+", "#", uops)
        if a in CN_TAKE_US:
            if m != um or not regs:
                raise ValueError(f"{a:#x}: operands differ beyond the immediate ({ops} vs {uops})")
            after[a], notes[a] = ub, CN_TAKE_US[a]
            continue
        nxt = cn_next.get(a)
        unxt = us_of.get(nxt[0]) if nxt else None
        if (m == um == "lsls" and regs and ops.endswith("#3") and uops.endswith("#4")
                and unxt and nxt[2] == "adds" and unxt[2] == "subs" and nxt[3] == unxt[3]):
            after[a], notes[a] = ub, "line stride: lsls #3 -> #4 (9x -> 15x with the next adds/subs)"
            continue
        if m == "adds" and um == "subs" and ops == uops and len(b) == 2:
            after[a], notes[a] = ub, "line stride: adds -> subs (base is line<<4 in US)"
            continue
        kept.append(("kept CN", f"{a:08X}", f"{m} {ops}", f"{um} {uops}"))
    if set(CN_TAKE_US) - set(after):
        raise ValueError(f"CN_TAKE_US sites not matched: {[hex(a) for a in set(CN_TAKE_US) - set(after)]}")
    writes = []
    for a in sorted(after):
        before = cn[a - BASE:a - BASE + 2]
        if after[a] != before:
            writes.append((a, before, after[a], notes[a]))
    return writes, {"sp_sites_checked_against_us": checked_sp, "kept": kept}


def main():
    cn = Path(sys.argv[1] if len(sys.argv) > 1 else "ROMs/Shining_Soul_II_CN_Baseline.gba").read_bytes()
    us = Path(sys.argv[2] if len(sys.argv) > 2 else "ROMs/Shining_Soul_II_USA.gba").read_bytes()
    writes, report = port(cn, us)
    for a, b, n, note in writes:
        print(f"{a:08X}  {b.hex()} -> {n.hex()}  {note}")
    print(f"{len(writes)} writes; {report['sp_sites_checked_against_us']} sp sites equal to US")
    for k in report["kept"]:
        if k[0] != "data/bl":
            print("kept:", k)
    print(f"data/bl differences kept CN: {sum(k[0] == 'data/bl' for k in report['kept'])}")


if __name__ == "__main__":
    main()
