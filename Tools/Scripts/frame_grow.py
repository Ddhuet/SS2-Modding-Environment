#!/usr/bin/env python3
"""Grow a stack area inside a CN baseline function whose layout has no US partner (reviewed spec).

    Tools/.venv/bin/python Tools/Scripts/frame_grow.py [CN.gba]   # report only

frame_port.py copies a US frame layout. Some CN functions have a layout US does not have: the
item detail view (CN 0x08081EC8) keeps its two description lines on the stack (CN-only;
US 0x08081498 uses a static IWRAM buffer, 0x03000200, that CN removed). Those lines are 0x28
bytes apart, sized for full-width Chinese; English lines run into the next line and then into
the saved item pointer above them.

A spec gives:
  - `map`: list of (lo, hi, delta). Every sp-relative immediate (ldr/str [sp,#], add rd,sp,#)
    whose offset lies in [lo, hi) is moved by delta. An sp offset outside every range refuses.
  - `frame`: literal addresses of the frame size (`ldr rX,=-N; add sp,rX`) with old and new
    values. An epilogue that builds N with movs/lsls goes in `edits`.
  - `edits`: other reviewed rewrites, CN address -> (preimage hex, new hex, reason).
  - `tables`: jump tables inside the function (address -> word count), skipped as data.
Every `add rd,sp,#a` followed (within 12 instructions, before rd is redefined) by a
`[rd,#k]` access whose a+k lands in a different range than a is refused unless that access is
in `edits`. Static only; runtime checks are in PHASE1_BUILD.md.
"""
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from dialogue_frame import BASE, disasm, pool_words  # noqa: E402

SPECS = {
    0x08081EC8: {
        "len": 0xD2C,
        "what": "item detail view: description lines sp+0x20C/0x234 (stride 0x28) -> sp+0x20C/0x24C (stride 0x40, as US)",
        # old layout: 0x000..0x20C locals | 0x20C line 1 | 0x234 line 2 | 0x25C..0x278 locals
        # new layout: 0x000..0x20C locals | 0x20C line 1 | 0x24C line 2 | 0x28C..0x2A8 locals
        "map": [(0x000, 0x20C, 0), (0x20C, 0x234, 0), (0x234, 0x25C, 0x18), (0x25C, 0x278, 0x30)],
        "frame": {0x08081F0C: (0xFFFFFD88, 0xFFFFFD58)},  # prologue `ldr r4,=-0x278; add sp,r4`
        "edits": {
            # init: both lines start empty. CN `add r0,sp,#0x20c; add r3,sp,#0x270; ldrh r3,[r3];
            # strh r3,[r0]; add r1,sp,#0x270; ldrh r1,[r1]; strh r1,[r0,#0x28]`. strh cannot reach
            # #0x40, so: same value (local sp+0x270, now 0x2A0) stored at line 1 and line 2.
            # r0/r1/r3 are dead afterwards (r1, r3 reloaded at 0x08081F82/84; r0 at 0x08081F8C).
            0x08081F6C: ("83a89cab1b8803809ca909880185",
                         "83a8a8ab1b88038040300380c046", "line init for stride 0x40 (US 0x08081544: adds r0,#0x40)"),
            0x08082BDA: ("9e23", "aa23", "epilogue movs r3,#0x9e; lsls r3,#2; add sp,r3: 0x278 -> 0x2A8"),
            0x08081FF4: ("2836", "4036", "line loop stride adds r6,#0x28 -> #0x40 (US 0x080815CA)"),
            0x080821DE: ("2832", "4032", "line split stride (US 0x08081794)"),
            0x080822A6: ("2832", "4032", "line split stride (US 0x08081862)"),
            0x080824F8: ("2832", "4032", "line split stride (US 0x08081AC8)"),
            # terminator index r8*0x28: `lsls r0,r2,#2; add r0,r8; lsls r0,r0,#3` -> `lsls r0,r2,#6`
            0x08082208: ("90004044c000", "9001c046c046", "line index r8*0x28 -> r8*0x40 (US 0x080817C4 lsls #6)"),
            0x080822D0: ("90004044c000", "9001c046c046", "line index r8*0x40 (US 0x08081890)"),
            0x08082524: ("90004044c000", "9001c046c046", "line index r8*0x40 (US 0x08081AF8)"),
        },
        "tables": {},
    },
}
SP_IMM = re.compile(r"sp, #(0x[0-9a-f]+|\d+)\]?$")


def sp_kind(hw):
    if 0x9000 <= hw < 0xA000 or 0xA800 <= hw < 0xB000:
        return "imm8"
    return None


def grow_one(cn, f, spec):
    ins = disasm(cn, f, spec["len"])
    data = pool_words(cn, ins)
    for t, n in spec["tables"].items():
        data |= set(range(t, t + 4 * n, 2))
    edits = spec["edits"]
    edited = set()
    for a, (pre, new, _) in edits.items():
        pb, nb = bytes.fromhex(pre), bytes.fromhex(new)
        if cn[a - BASE:a - BASE + len(pb)] != pb or len(pb) != len(nb):
            raise ValueError(f"{f:#x}: edit {a:#x} preimage mismatch")
        edited |= set(range(a, a + len(pb), 2))

    def rng(off):
        for lo, hi, d in spec["map"]:
            if lo <= off < hi:
                return lo, d
        raise ValueError(f"{f:#x}: sp offset {off:#x} outside the reviewed map")

    writes = []
    for idx, (a, b, m, ops) in enumerate(ins):
        if a in data or len(b) != 2 or m == ".byte":
            continue
        hw = struct.unpack("<H", b)[0]
        if hw & 0xFF00 == 0xB000:
            raise ValueError(f"{f:#x}: unexpected add/sub sp,#imm at {a:#x} (frame is set through a literal)")
        if not sp_kind(hw):
            continue
        off = (hw & 0xFF) * 4
        lo, d = rng(off)
        # pointer arithmetic check for add rd,sp,#off
        if 0xA800 <= hw < 0xB000:
            rd = f"r{(hw >> 8) & 7}"
            for a2, b2, m2, ops2 in ins[idx + 1:idx + 13]:
                if a2 in data:
                    break
                mm = re.search(rf"\[{rd}, #(0x[0-9a-f]+|\d+)\]", ops2)
                if mm and a2 not in edited and rng(off + int(mm.group(1), 0))[0] != lo:
                    raise ValueError(f"{f:#x}: {a2:#x} reaches sp+{off + int(mm.group(1), 0):#x} through {rd} from {a:#x}")
                if ops2.split(",")[0].strip() == rd and not m2.startswith(("str", "cmp", "tst")):
                    break
        if a in edited or d == 0:
            continue
        new = off + d
        assert new % 4 == 0 and new < 0x400, hex(new)
        writes.append((a, b, struct.pack("<H", (hw & 0xFF00) | (new // 4)), f"sp offset {off:#x} -> {new:#x}: {m} {ops}"))
    for a, (old, new) in spec["frame"].items():
        if struct.unpack_from("<I", cn, a - BASE)[0] != old:
            raise ValueError(f"{f:#x}: frame literal {a:#x} is not {old:#x}")
        writes.append((a, struct.pack("<I", old), struct.pack("<I", new), f"frame size literal {old:#x} -> {new:#x}"))
    for a, (pre, new, why) in edits.items():
        writes.append((a, bytes.fromhex(pre), bytes.fromhex(new), why))
    return sorted(writes)


def grow(cn):
    writes, report = [], {}
    for f, spec in SPECS.items():
        w = grow_one(cn, f, spec)
        writes += [(a, b, n, f"{spec['what']}: {note}") for a, b, n, note in w]
        report[f"{f:08X}"] = {"writes": len(w)}
    return writes, report


def main():
    cn = Path(sys.argv[1] if len(sys.argv) > 1 else "ROMs/Shining_Soul_II_CN_Baseline.gba").read_bytes()
    writes, report = grow(cn)
    for a, b, n, note in writes:
        print(f"{a:08X}  {b.hex()} -> {n.hex()}  {note}")
    print(report)


if __name__ == "__main__":
    main()
