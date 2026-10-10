#!/usr/bin/env python3
"""In-place port of US stack-frame enlargements (text line buffers) to CN baseline functions.

    eu/.venv/bin/python translation/tools/frame_port.py [CN.gba] [US.gba]   # report only

Several text functions keep lines of glyph codes in stack buffers. CN sized them for
full-width Chinese; US enlarged them for English (more, narrower glyphs). The English
patch writes English lines into the CN buffers, which overflow into the next local and
the saved registers (CN 0x080839A0, the identifier window: garbled screen, then a hard
lock). dialogue_frame.py handles the dialogue window, which also changed a line stride;
this tool handles functions whose only frame change is buffer sizes.

For each function in SPECS the CN and US instruction streams are aligned (difflib on
mnemonics). The sp map is derived from every aligned pair of sp-relative instructions
(ldr/str [sp,#], add rd,sp,#, add/sub sp,#) and must be a function: one US offset per CN
offset, with a non-decreasing delta. A CN offset not seen in the pairs takes the delta of
the nearest seen offset below it, and only if the nearest seen offset above has the same
delta; otherwise the port refuses. Every other byte difference must be a BL, a branch
displacement, literal-pool data, or listed in the spec's `keep` (CN address -> reason).
Insert/delete blocks must be listed too. Anything else refuses. Static only.
"""
import difflib
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from dialogue_frame import BASE, disasm, pool_words  # noqa: E402

# CN function -> US function, CN length (to the next push {.., lr}), and reviewed residuals.
SPECS = {
    0x080839A0: {
        "us": 0x08082FC4, "len": 0x2FC, "us_len": 0x300,
        "what": "identifier/appraiser window text: line buffers sp+0x38 and sp+0x60 grow 0x28 -> 0x40",
        "keep": {
            0x08083B0C: "ldr r7,=0xFFFD hoisted (US reloads it in the loop): register allocation",
            0x08083B22: "register allocation", 0x08083B24: "register allocation",
            0x08083B34: "register allocation", 0x08083B36: "register allocation",
            0x08083B3A: "strh r7 (=0xFFFD) vs US strh r1 (=0xFFFD): same value, CN keeps its register",
            0x08083B3C: "register allocation", 0x08083B3E: "register allocation",
            0x08083B40: "register allocation",
            0x08083BD4: "end-of-line cursor glyph: CN code 1 (CN font) vs US 0xFF (US font); kept CN",
        },
        "blocks": {
            0x08083B3A: "US-only ldr r1,=0xFFFD (CN uses r7, above)",
            0x08083B54: "US-only lsrs r0,#1 after the glyph count: handled by the centring redirect",
            0x08083BB8: "literal 0xFFFD placed one slot earlier in US", 0x08083BBC: "same literal, CN position",
            0x08083C02: "US-only lsrs r0,#1: centring redirect",
            0x08083C92: "alignment padding",
        },
    },
    0x08083C9C: {
        "us": 0x080832C4, "len": 0x724, "us_len": 0x728,
        "what": "identifier/appraiser second window: typed-line buffer sp+0xA0 grows 0x28 -> 0x3C",
        "keep": {
            0x08084032: "typewriter end test bhs (CN) vs bhi (US, one more step); kept CN",
            0x080840AE: "end-of-line cursor glyph: CN code 1 vs US 0xFF; kept CN",
        },
        "blocks": {
            0x08084016: "US-only lsrs r0,#1: centring redirect",
            0x0808408A: "alignment padding",
            0x0808417A: "US-only lsrs r0,#1: centring redirect",
            0x080841B8: "alignment padding",
        },
    },
}
SP_OPERAND = re.compile(r"\bsp, #(0x[0-9a-f]+|\d+)\]?$|\[sp\]$")


def sp_offset(ops):
    m = SP_OPERAND.search(ops)
    if not m or "sp" not in ops:
        return None
    return int(m.group(1), 0) if m.group(1) else 0


def sp_encode(hw, new_off):
    """Re-encode a 16-bit sp-relative instruction with a new byte offset."""
    if 0x9000 <= hw < 0xA000 or 0xA800 <= hw < 0xB000:   # ldr/str rd,[sp,#imm8*4]; add rd,sp,#imm8*4
        assert new_off % 4 == 0 and new_off < 0x400, hex(new_off)
        return (hw & 0xFF00) | (new_off // 4)
    if hw & 0xFF00 == 0xB000:                              # add/sub sp,#imm7*4
        assert new_off % 4 == 0 and new_off < 0x200, hex(new_off)
        return (hw & 0xFF80) | (new_off // 4)
    return None


def is_sp_insn(hw):
    return 0x9000 <= hw < 0xA000 or 0xA800 <= hw < 0xB000 or hw & 0xFF00 == 0xB000


def port_one(cn, us, cn_func, spec):
    A = disasm(cn, cn_func, spec["len"])
    U = disasm(us, spec["us"], spec["us_len"])
    pa, pu = pool_words(cn, A), pool_words(us, U)
    sm = difflib.SequenceMatcher(None, [x[2] for x in A], [x[2] for x in U], autojunk=False)
    pairs, blocks = [], []
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == "equal" or (tag == "replace" and i2 - i1 == j2 - j1):
            pairs += zip(A[i1:i2], U[j1:j2])
        else:
            blocks.append(A[i1][0] if i1 < len(A) else cn_func + spec["len"])
    # 1. sp map from aligned pairs
    seen = {}
    for a, u in pairs:
        if len(a[1]) != 2 or a[0] in pa or u[0] in pu:
            continue
        ha, hu = struct.unpack("<H", a[1])[0], struct.unpack("<H", u[1])[0]
        if not (is_sp_insn(ha) and is_sp_insn(hu)) or (ha & 0xFF00 == 0xB000) != (hu & 0xFF00 == 0xB000):
            continue
        oa, ou = sp_offset(a[3]), sp_offset(u[3])
        if oa is None or ou is None:
            continue
        if seen.setdefault(oa, ou) != ou:
            raise ValueError(f"{cn_func:#x}: CN sp+{oa:#x} maps to both {seen[oa]:#x} and {ou:#x}")
    keys = sorted(seen)
    deltas = [seen[k] - k for k in keys]
    if deltas != sorted(deltas):
        raise ValueError(f"{cn_func:#x}: sp map delta decreases: {[(hex(k), hex(seen[k])) for k in keys]}")

    def mapped(off):
        if off in seen:
            return seen[off]
        lo = [k for k in keys if k < off]
        hi = [k for k in keys if k > off]
        dl = seen[lo[-1]] - lo[-1] if lo else 0
        if hi and seen[hi[0]] - hi[0] != dl:
            raise ValueError(f"{cn_func:#x}: CN sp+{off:#x} lies between offsets with different deltas")
        return off + dl

    # 2. rewrite every sp-relative instruction of the CN function
    after, notes = {}, {}
    for a, b, m, ops in A:
        if len(b) != 2 or a in pa or m == ".byte":
            continue
        hw = struct.unpack("<H", b)[0]
        off = sp_offset(ops) if is_sp_insn(hw) else None
        if off is None:
            continue
        new = sp_encode(hw, mapped(off))
        if new != hw:
            after[a] = struct.pack("<H", new)
            notes[a] = f"sp offset {off:#x} -> {mapped(off):#x}: {m} {ops}"
    # 3. every other difference must be reviewed
    unexplained = []
    for (a, b, m, ops), (ua, ub, um, uops) in pairs:
        if b == ub or a in after or a in pa or ua in pu or m in ("bl", ".byte") or um == ".byte":
            continue
        if m == um and re.fullmatch(r"b(eq|ne|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)?", m):
            continue  # branch displacement only
        if m == um and ops.startswith("r") and "[pc" in ops and re.sub(r"#\w+", "#", ops) == re.sub(r"#\w+", "#", uops):
            continue  # ldr rX,[pc,#] whose pool moved
        if is_sp_insn(struct.unpack("<H", b[:2])[0]) and sp_offset(ops) is not None:
            continue  # sp instruction already equal after mapping, register allocation aside
        if a in spec["keep"]:
            continue
        unexplained.append(f"{a:08X} {m} {ops} | US {um} {uops}")
    unexplained += [f"block at {x:08X}" for x in blocks if x not in spec["blocks"]]
    if unexplained:
        raise ValueError(f"{cn_func:#x}: unreviewed differences:\n  " + "\n  ".join(unexplained))
    frame = [seen[k] for k in keys][-1] if keys else None
    writes = []
    for a in sorted(after):
        before = cn[a - BASE:a - BASE + 2]
        writes.append((a, before, after[a], notes[a]))
    return writes, {"sp_map": {hex(k): hex(seen[k]) for k in keys}, "frame_us": hex(frame) if frame else None}


def port(cn, us):
    writes, report = [], {}
    for f, spec in SPECS.items():
        w, r = port_one(cn, us, f, spec)
        writes += [(a, b, n, f"{spec['what']}: {note}") for a, b, n, note in w]
        report[f"{f:08X}"] = {**r, "writes": len(w)}
    return writes, report


def main():
    cn = Path(sys.argv[1] if len(sys.argv) > 1 else "eu/inputs/ss2-cn-baseline.gba").read_bytes()
    us = Path(sys.argv[2] if len(sys.argv) > 2 else "ROMs/Shining Soul II (USA).gba").read_bytes()
    writes, report = port(cn, us)
    for a, b, n, note in writes:
        print(f"{a:08X}  {b.hex()} -> {n.hex()}  {note}")
    for f, r in report.items():
        print(f, r)


if __name__ == "__main__":
    main()
