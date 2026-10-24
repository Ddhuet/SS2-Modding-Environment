#!/usr/bin/env python3
"""Static conflict check: English translation patch vs the CN mod definitions (read-only).

    python3 Tools/Scripts/mod_conflicts.py [SPANS.json] [--defs DIR [DIR ...]] [--json OUT]
    python3 Tools/Scripts/mod_conflicts.py --defs Patches/Definitions/Custom Patches/Definitions/Official

SPANS defaults to Tools/profiles/translation_spans.json (tracked, byte-free ranges written by
make_english_patch.py); a full translation write list (Build/ss2-en-phase1.patch.json) also works.
--defs defaults to Patches/Definitions/Official; give several folders to check them together.
Needs only the JP ROM: the CN baseline comes from base_roms.py. Both sides are bound to the CN
baseline (SHA-256 45ac38bb...); the binding is asserted. Bundle definitions (all_17_released,
all_18_beta) are skipped in the mod-vs-mod check. Four levels, strongest first:

0. **mod vs mod**: two definitions write the same byte. They can't be stacked.

1. **byte**: a mod write overlaps a translation write, allocation block or reused dead code.
   A real incompatibility (one side's bytes are lost).
2. **function**: a mod write lands in a code function (starts = Thumb BL targets and
   `push {.., lr}` in 0x08000000..0x080C0000, function = start up to the next start) that the translation also changes.
   The mod's code may rely on the CN layout the translation changed (stack offsets, line
   buffers, glyph codes). Needs review, not automatically a conflict.
3. **text/data**: mod writes classified by region: slot-0 message pointer table and strings,
   the CN font section, a record's name slot n (Chinese text, slot 0) or data (+0x174..),
   CN-mod expansion space. Slot-0 strings and name slot 0 are Chinese text the mod adds or
   edits; they need translating into slot 1.

CN mod definitions list only changed bytes (equal bytes split a block into several writes),
so a mod's code cave can contain unchanged bytes the check does not see. That matters only
for caves in space the translation allocates; level 1 also reports any mod write within
0x100 bytes of a translation block, and the expansion ranges are compared as whole spans.
Standard library only.
"""
import argparse
import bisect
import glob
import json
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from name_tables import TABLES, SLOT, DATA  # noqa: E402
from base_roms import CN_SHA as SHA, cn_baseline, is_reservation  # noqa: E402

BASE = 0x08000000
CODE_END = 0x080C0000
SLOT0_TABLE = 0x08391260
MSG_COUNT = 1493
CN_FONT = 0x088D94C8
CN_FONT_LEN = 0x38020
NEAR = 0x100


def u32(rom, a):
    return struct.unpack_from("<I", rom, a - BASE)[0]


def ranges_of(writes):
    out = []
    for w in writes:
        a = int(w["address"], 16)
        out.append((a, a + len(w["after_hex"]) // 2, w.get("note", "")))
    return sorted(out)


def func_starts(rom):
    t = set()
    for o in range(0, CODE_END - BASE - 2, 2):
        h1, h2 = struct.unpack_from("<HH", rom, o)
        if h1 & 0xF800 == 0xF000 and h2 & 0xF800 == 0xF800:
            off = ((h1 & 0x7FF) << 12) | ((h2 & 0x7FF) << 1)
            if off & 0x400000:
                off -= 0x800000
            d = BASE + o + 4 + off
            if BASE <= d < CODE_END:
                t.add(d)
        if h1 & 0xFF00 == 0xB500:  # push {.., lr}: functions reached only through pointers
            t.add(BASE + o)
    return sorted(t)


def message_span(rom):
    ptrs = [u32(rom, SLOT0_TABLE + 4 * i) for i in range(MSG_COUNT)]
    return min(ptrs), max(ptrs), ptrs


def region(a, funcs, msg_lo, msg_hi):
    if a < CODE_END:
        i = bisect.bisect_right(funcs, a) - 1
        return ("code", funcs[i] if i >= 0 else BASE)
    if SLOT0_TABLE <= a < SLOT0_TABLE + 4 * MSG_COUNT:
        return ("slot0_table", None)
    if msg_lo <= a < msg_hi + 0x200:
        return ("slot0_strings", None)
    if CN_FONT <= a < CN_FONT + CN_FONT_LEN:
        return ("cn_font", None)
    for name, cb, _, st, first, count in TABLES:
        if cb + first * st <= a < cb + (first + count) * st:
            rec, off = divmod(a - cb, st)
            if off < DATA:
                return (f"name_slot{off // SLOT}", f"{name}#{rec}")
            return ("record_data", f"{name}#{rec}")
    if a >= 0x09000000:
        return ("expansion", None)
    return ("other", None)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("patch", nargs="?", default=str(ROOT / "Tools/profiles/translation_spans.json"))
    ap.add_argument("--defs", nargs="+", default=[str(ROOT / "Patches/Definitions/Official")])
    ap.add_argument("--json")
    args = ap.parse_args()

    rom = cn_baseline()
    patch = json.load(open(args.patch))
    assert patch["baseline"]["sha256"] == SHA

    if "spans" in patch:
        spans = [(int(x["address"], 16), int(x["address"], 16) + x["length"], x["what"]) for x in patch["spans"]]
        tr = sorted(x for x in spans if not is_reservation(x[2]))
        blocks = [x for x in spans if is_reservation(x[2])]
    else:
        tr = ranges_of(patch["writes"])
        blocks = [(int(b["address"], 16), int(b["address"], 16) + b["length"], "alloc: " + b["what"])
                  for b in patch["allocations"]["blocks"]]
        blocks += [(int(b["address"], 16), int(b["address"], 16) + b["length"], "dead code: " + b["what"])
                   for b in patch["allocations"].get("reused_dead_code", [])]
        # the whole translation-owned expansion range counts as reserved
        lo, hi = (int(x, 16) for x in patch["allocations"]["range"].split(".."))
        blocks.append((lo, hi + 1, "translation-owned range"))
    tr_all = sorted(tr + blocks)

    funcs = func_starts(rom)
    msg_lo, msg_hi, _ = message_span(rom)
    tr_funcs = {}
    for a, b, note in tr:
        if a < CODE_END:
            tr_funcs.setdefault(region(a, funcs, msg_lo, msg_hi)[1], []).append((a, note))

    report = {}
    owners = []  # (lo, hi, mod id) of every single (non-bundle) definition, for the mod-vs-mod check
    files = sorted(f for folder in args.defs for f in glob.glob(f"{folder}/*.json"))
    for f in files:
        d = json.load(open(f))
        if "writes" not in d:
            continue
        assert d["baseline"]["sha256"] == SHA, f
        mr = ranges_of(d["writes"])
        if not d["id"].startswith("all_"):
            owners += [(a, b, d["id"]) for a, b, _ in mr]
        byte, near, func, cls = [], [], {}, {}
        for a, b, _ in mr:
            for ta, tb, tn in tr_all:
                if a < tb and ta < b:
                    byte.append((a, b, ta, tb, tn))
                elif a < tb + NEAR and ta - NEAR < b and tn.startswith(("alloc", "dead")):
                    near.append((a, b, ta, tb, tn))
            kind, key = region(a, funcs, msg_lo, msg_hi)
            if kind == "code" and key in tr_funcs:
                func.setdefault(key, []).append(a)
            c = cls.setdefault(kind, {"writes": 0, "bytes": 0, "keys": set()})
            c["writes"] += 1
            c["bytes"] += b - a
            if key is not None:
                c["keys"].add(key if isinstance(key, str) else f"0x{key:08X}")
        report[d["id"]] = {
            "byte_overlaps": [{"mod": f"0x{a:08X}..0x{b:08X}", "translation": f"0x{ta:08X}..0x{tb:08X}", "what": tn}
                              for a, b, ta, tb, tn in byte],
            "near_blocks": [{"mod": f"0x{a:08X}..0x{b:08X}", "translation": f"0x{ta:08X}..0x{tb:08X}", "what": tn}
                            for a, b, ta, tb, tn in near],
            "shared_functions": {f"0x{k:08X}": {"mod_writes": [f"0x{x:08X}" for x in v],
                                                "translation": sorted({n for _, n in tr_funcs[k]})}
                                 for k, v in func.items()},
            "regions": {k: {"writes": v["writes"], "bytes": v["bytes"], "keys": sorted(v["keys"])[:40],
                            "key_count": len(v["keys"])} for k, v in cls.items()},
        }

    for mid, r in report.items():
        flag = "BYTE" if r["byte_overlaps"] else ("FUNC" if r["shared_functions"] else "ok")
        regs = ", ".join(f"{k}:{v['writes']}" for k, v in sorted(r["regions"].items()))
        print(f"{mid:42s} {flag:4s}  {regs}")
        for o in r["byte_overlaps"][:10]:
            print(f"    byte  {o['mod']} x {o['translation']}  {o['what']}")
        if len(r["byte_overlaps"]) > 10:
            print(f"    ... {len(r['byte_overlaps'])} byte overlaps")
        for o in r["near_blocks"][:5]:
            print(f"    near  {o['mod']} ~ {o['translation']}  {o['what']}")
        for k, v in r["shared_functions"].items():
            print(f"    func  {k}: mod {', '.join(v['mod_writes'][:6])}{' ...' if len(v['mod_writes']) > 6 else ''}"
                  f" | translation: {'; '.join(v['translation'])[:120]}")
    owners.sort()
    clashes = set()
    for i, (a, b, m) in enumerate(owners):
        for a2, b2, m2 in owners[i + 1:]:
            if a2 >= b:
                break
            if m2 != m:
                clashes.add((min(m, m2), max(m, m2), max(a, a2)))
    pairs = {}
    for m, m2, at in sorted(clashes):
        pairs.setdefault((m, m2), at)
    for (m, m2), at in pairs.items():
        print(f"MOD CLASH  {m} x {m2}  first shared byte 0x{at:08X}")
    if not pairs:
        print(f"mod vs mod: no shared bytes among {len({o[2] for o in owners})} definitions")
    if args.json:
        Path(args.json).write_text(json.dumps(report, indent=1, ensure_ascii=False))


if __name__ == "__main__":
    main()
