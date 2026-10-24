#!/usr/bin/env python3
"""Function-level comparison of the code regions of two ROMs (read-only).

    Tools/.venv/bin/python Tools/Scripts/func_diff.py A.gba B.gba ALIGN.json \
        [--code-end 0x080C0000] [--tsv OUT]

Function starts are the Thumb BL targets inside the code region of each ROM. Each A
function is mapped to B through the align.py runs and must land on a B BL target.
Both bodies (up to the next function start) are decoded with Capstone and reduced to
mnemonic tokens; aligned words that look like ROM/RAM/IO pointers (literal pools, jump
tables) become a single PTR token. Operands are ignored, so RAM-literal shifts, struct
offset shifts, register allocation and relocations count as equal; only changes to the
instruction sequence lower the similarity. A second pass pairs
each still-unmatched A function with the most similar unclaimed B function starting
within 0x400 bytes of its mapped address ("near"). Remaining unmatched A functions and
new B functions are listed too.
"""
import argparse
import bisect
import difflib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

BASE = 0x08000000


def bl_targets(data, end):
    out = set()
    for o in range(0, end - BASE - 4, 2):
        hi, lo = struct.unpack_from("<HH", data, o)
        if hi & 0xF800 == 0xF000 and lo & 0xF800 == 0xF800:
            imm = ((hi & 0x7FF) << 12) | ((lo & 0x7FF) << 1)
            if imm & 0x400000:
                imm -= 0x800000
            t = BASE + o + 4 + imm
            if BASE <= t < end:
                out.add(t)
    return sorted(out)


def shapes(cs, data, start, end):
    """Mnemonic tokens; 4-aligned words that look like pointers become one PTR token."""
    out, o = [], start
    while o < end:
        if o % 4 == 0 and o + 4 <= end and data[o - BASE + 3] in (2, 3, 4, 5, 6, 7, 8, 9):
            out.append("PTR")
            o += 4
            continue
        ins = next(cs.disasm(data[o - BASE:min(o + 4, end) - BASE], o, 1), None)
        if ins is None:
            out.append(".hw")
            o += 2
            continue
        out.append(ins.mnemonic)
        o += ins.size
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("a", type=Path)
    ap.add_argument("b", type=Path)
    ap.add_argument("align", type=Path)
    ap.add_argument("--code-end", type=lambda s: int(s, 0), default=0x080C0000)
    ap.add_argument("--tsv", type=Path)
    x = ap.parse_args()
    a, b = x.a.read_bytes(), x.b.read_bytes()
    runs = sorted(json.loads(x.align.read_text())["runs"])
    starts = [r[0] for r in runs]
    fa, fb = bl_targets(a, x.code_end), bl_targets(b, x.code_end)
    fbset = set(fb)
    cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    rows, matched_b = [], set()
    for i, f in enumerate(fa):
        end = fa[i + 1] if i + 1 < len(fa) else x.code_end
        k = bisect.bisect_right(starts, f - BASE) - 1
        g = f + runs[k][2] if k >= 0 else None
        exact = k >= 0 and runs[k][0] <= f - BASE < runs[k][1]
        if g not in fbset:
            rows.append(("unmatched", f, end - f, None, None, 0.0))
            continue
        j = bisect.bisect_right(fb, g)
        gend = fb[j] if j < len(fb) else x.code_end
        matched_b.add(g)
        sa, sb = shapes(cs, a, f, end), shapes(cs, b, g, gend)
        if a[f - BASE:end - BASE] == b[g - BASE:gend - BASE]:
            r = 1.0
        else:
            r = difflib.SequenceMatcher(None, sa, sb, autojunk=False).ratio()
        rows.append(("matched" if exact or r > 0.5 else "weak", f, end - f, g, gend - g, r))
    # Second pass: pair each unmatched A function with the nearest unclaimed B function
    # whose start lies within 0x400 bytes of the mapped address, if the shapes agree.
    for n, (k, f, la, _, _, _) in enumerate(rows):
        if k != "unmatched":
            continue
        kk = bisect.bisect_right(starts, f - BASE) - 1
        guess = f + runs[kk][2] if kk >= 0 else f
        cands = [g for g in fb[max(0, bisect.bisect_left(fb, guess - 0x400)):bisect.bisect_right(fb, guess + 0x400)]
                 if g not in matched_b]
        best = None
        for g in sorted(cands, key=lambda g: abs(g - guess)):
            j = bisect.bisect_right(fb, g)
            gend = fb[j] if j < len(fb) else x.code_end
            r = difflib.SequenceMatcher(None, shapes(cs, a, f, f + la), shapes(cs, b, g, gend),
                                        autojunk=False).ratio()
            if r > 0.5 and (best is None or r > best[2]):
                best = (g, gend - g, r)
        if best:
            matched_b.add(best[0])
            rows[n] = ("near", f, la, best[0], best[1], best[2])
    for i, g in enumerate(fb):
        if g not in matched_b:
            gend = fb[i + 1] if i + 1 < len(fb) else x.code_end
            rows.append(("b_only", None, None, g, gend - g, 0.0))
    lines = ["kind\ta_func\ta_len\tb_func\tb_len\tshape_ratio"]
    for k, f, la, g, lb, r in rows:
        lines.append(f"{k}\t{f and f'{f:08X}' or '-'}\t{la or '-'}\t{g and f'{g:08X}' or '-'}\t{lb or '-'}\t{r:.3f}")
    if x.tsv:
        x.tsv.write_text("\n".join(lines) + "\n")
    m = [r for r in rows if r[0] in ("matched", "weak", "near")]
    print(f"A functions {len(fa)}, B functions {len(fb)}; matched {len(m)}, "
          f"identical-shape {sum(r[5] == 1.0 for r in m)}, ratio<0.95 {sum(r[5] < 0.95 for r in m)}, "
          f"unmatched A {sum(r[0] == 'unmatched' for r in rows)}, B-only {sum(r[0] == 'b_only' for r in rows)}")


if __name__ == "__main__":
    main()
