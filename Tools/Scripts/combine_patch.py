#!/usr/bin/env python3
"""Merge the English translation patch with CN mod definitions into one ss2tools patch.

    python3 Tools/Scripts/combine_patch.py DEF_ID [DEF_ID ...] \
        [--patch Build/ss2-en-phase1.patch.json] [--out Build/ss2-en+ID.patch.json]
    cd Tools && .venv/bin/python -m ss2tools build ../ROMs/Shining_Soul_II_CN_Baseline.gba \
        ../Build/ss2-en+ID.patch.json ../Build/ss2-en+ID.gba \
        --profile profiles/ss2-cn-baseline.json --allow-static-candidate

Both inputs are write lists against the CN baseline (SHA-256 45ac38bb...); the binding is
asserted. The mod writes are copied unchanged (same address, preimage and bytes), so the
combined ROM is "translation + mod applied as published". Any byte overlap between the
inputs is refused here (and again by ss2tools, which rejects overlapping writes). Pass
several ids only when the CN README allows combining them (it says to use the
`all_17_released` / `all_18_beta` bundles instead of stacking single definitions).
English names for records a mod renames come from Patches/Definitions/ledger.json: an entry
applies when the combined mod writes change the record's slot-0 bytes, and it replaces the
translation's slot-1 write for that record (same preimage: CN slot 1 is empty).
The output is a `static_candidate`; it is not tracked (it contains US text).
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
LEDGER = ROOT / "Patches/Definitions/ledger.json"
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from name_tables import TABLES, SLOT  # noqa: E402

GLYPH_SHIFT = 0x700
US_CODES = {**{chr(64 + i): i for i in range(1, 27)}, **{chr(96 + i): 0x20 + i for i in range(1, 27)},
            **{str(i): 0x41 + i for i in range(10)}, " ": 0x51, ".": 0x4F, ",": 0x50, "!": 0x3B,
            "?": 0x3C, "'": 0x20}


def encode_name(text):
    codes = [US_CODES[c] + GLYPH_SHIFT for c in text]
    assert len(codes) < SLOT // 2, text
    return b"".join(c.to_bytes(2, "little") for c in codes).ljust(SLOT, b"\0")


def ledger_overrides(mod_writes):
    """Yield (slot-1 address, new bytes, entry) for ledger names whose slot 0 the mods change."""
    tables = {t[0]: t for t in TABLES}
    changed = set()
    for w in mod_writes:
        a = int(w["address"], 16)
        changed.update(range(a, a + len(w["after_hex"]) // 2))
    for e in json.loads(LEDGER.read_text(encoding="utf-8"))["names"]:
        _, cb, _, st, _, _ = tables[e["table"]]
        rec = cb + e["record"] * st
        if not changed & set(range(rec, rec + SLOT)):
            continue
        yield rec + SLOT, encode_name(e["en"]), e


def spans(writes, tag):
    for w in writes:
        a = int(w["address"], 16)
        yield a, a + len(w["after_hex"]) // 2, tag


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("ids", nargs="+")
    ap.add_argument("--patch", default=str(ROOT / "Build/ss2-en-phase1.patch.json"))
    ap.add_argument("--defs", default=str(ROOT / "Patches/Definitions/Official"))
    ap.add_argument("--out")
    args = ap.parse_args()

    base_bytes = Path(args.patch).read_bytes()
    base = json.loads(base_bytes)
    assert base["baseline"]["sha256"] == SHA and base["profile_id"] == "ss2-cn-baseline"
    writes = list(base["writes"])
    mods = []
    for i in args.ids:
        p = Path(args.defs) / f"{i}.json"
        raw = p.read_bytes()
        d = json.loads(raw)
        assert d["baseline"]["sha256"] == SHA, i
        mods.append({"id": d["id"], "stage": d["stage"], "sha256": hashlib.sha256(raw).hexdigest(),
                     "writes": len(d["writes"])})
        for w in d["writes"]:
            writes.append({k: w[k] for k in ("address", "offset", "before_hex", "after_hex")}
                          | {"note": f"cn_mod:{d['id']}"})

    by_addr = {int(w["address"], 16): i for i, w in enumerate(writes)}
    mod_writes = writes[len(base["writes"]):]
    applied = []
    for addr, new, e in ledger_overrides(mod_writes):
        i = by_addr.get(addr)
        assert i is not None and len(writes[i]["after_hex"]) == 2 * SLOT, f"no slot-1 write at 0x{addr:08X}"
        before = bytes.fromhex(writes[i]["before_hex"])
        assert before == bytes(SLOT), "slot 1 not empty in the baseline"
        writes[i] = dict(writes[i], after_hex=new[:len(before)].hex(),
                         note=f"{writes[i]['note']} -> ledger: {e['en']} ({e['mod']})")
        applied.append({"address": f"0x{addr:08X}", "en": e["en"], "mod": e["mod"]})
        print(f"ledger: 0x{addr:08X} {e['table']}#{e['record']} {e['us']} -> {e['en']}")

    allspans = sorted(s for w in [base["writes"]] for s in spans(w, "translation"))
    for m in mods:
        d = json.loads((Path(args.defs) / f"{m['id']}.json").read_bytes())
        allspans += list(spans(d["writes"], m["id"]))
    allspans.sort()
    for (a, b, t), (c, e, u) in zip(allspans, allspans[1:]):
        if c < b:
            raise SystemExit(f"overlap: {t} 0x{a:08X}..0x{b:08X} and {u} 0x{c:08X}..0x{e:08X}")

    tag = "+".join(args.ids)
    out = Path(args.out or ROOT / f"Build/ss2-en+{tag}.patch.json")
    combined = {k: base[k] for k in ("schema_version", "profile_id", "baseline")}
    combined |= {
        "id": f"{base['id']}+{tag}",
        "name": f"{base['name']} + CN mods: {', '.join(args.ids)}",
        "stage": "static_candidate",
        "source_provenance": {"translation_patch": str(Path(args.patch).resolve().relative_to(ROOT)),
                              "translation_patch_sha256": hashlib.sha256(base_bytes).hexdigest(),
                              "translation_generator": base["source_provenance"],
                              "cn_definitions": mods,
                              "combiner": "Tools/Scripts/combine_patch.py",
                              "ledger_sha256": hashlib.sha256(LEDGER.read_bytes()).hexdigest(),
                              "ledger_applied": applied},
        "evidence": {"status": "experimental", "doc": "Docs/Translation/PHASE2_COMPAT.md"},
        "allocations": base["allocations"],
        "writes": writes,
    }
    out.write_text(json.dumps(combined, ensure_ascii=False, indent=1))
    print(f"{out}: {len(writes)} writes ({len(base['writes'])} translation + "
          f"{sum(m['writes'] for m in mods)} mod)")


if __name__ == "__main__":
    main()
