#!/usr/bin/env python3
"""The three base ROMs, all derived from the retail Japanese ROM, so a modder needs only that one.

    from base_roms import jp_rom, cn_baseline, english_rom, translation_spans
    python3 Tools/Scripts/base_roms.py      # check: build/verify all three, print their hashes

- jp_rom():       ROMs/Shining_Soul_II_JP.gba (or Patch_Manager/Input_ROM/), hash-checked.
- cn_baseline():  the CN community ROM (SS2_SC_bug_fixed, 32 MiB). Mod definitions' before_hex
                  comes from it. Read from ROMs/Shining_Soul_II_CN_Baseline.gba when present,
                  otherwise made from the JP ROM with Patch_Manager/patches/cn_baseline.bps.
- english_rom():  the English ROM (CN baseline + translation), made from the JP ROM with
                  Patch_Manager/patches/english_translation.bps.
- translation_spans(): Tools/profiles/translation_spans.json, the address ranges the translation
                  writes and reserves (no bytes). Outside them, English == CN baseline byte for byte.

Built ROMs are cached in Build/ (git-ignored) and re-hashed on every load. Standard library only.
"""
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools"))
from ss2tools.bps import decode_bps  # noqa: E402

JP_SHA = "9f3e0d0653de6504c1aeaf03de3cca06ae0c15a24089f0236398ec56d382d17a"
CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
EN_SHA = "4343a9c7fa9b6f9889a5fd9e334b807ebf98e200729810e92108b27d9bb953cb"
PATCHES = ROOT / "Patch_Manager/patches"
SPANS = ROOT / "Tools/profiles/translation_spans.json"
BASE = 0x08000000


def _sha(data):
    return hashlib.sha256(data).hexdigest()


def _first_valid(paths, sha):
    for p in paths:
        if p.is_file():
            data = p.read_bytes()
            if _sha(data) == sha:
                return data
    return None


def jp_rom():
    data = _first_valid([ROOT / "ROMs/Shining_Soul_II_JP.gba",
                         ROOT / "Patch_Manager/Input_ROM/Shining_Soul_II_JP.gba"], JP_SHA)
    if data is None:
        sys.exit(f"Japanese ROM not found: put Shining Soul II (Japan) in ROMs/Shining_Soul_II_JP.gba "
                 f"(sha256 {JP_SHA[:16]}...)")
    return data


def _derived(name, sha, sources, patch):
    data = _first_valid(sources, sha)
    if data is not None:
        return data
    data = decode_bps(jp_rom(), (PATCHES / patch).read_bytes())
    if _sha(data) != sha:
        sys.exit(f"{patch} produced a ROM with the wrong hash")
    cache = ROOT / "Build" / name
    cache.parent.mkdir(parents=True, exist_ok=True)
    cache.write_bytes(data)
    return data


def cn_baseline():
    return _derived("cn_baseline.gba", CN_SHA,
                    [ROOT / "ROMs/Shining_Soul_II_CN_Baseline.gba", ROOT / "Build/cn_baseline.gba"],
                    "cn_baseline.bps")


def english_rom():
    return _derived("en.gba", EN_SHA, [ROOT / "Build/en.gba"], "english_translation.bps")


def write_spans(patch, path=SPANS):
    """Write the byte-free span list of a translation patch (make_english_patch.py output)."""
    d = {"about": "Address ranges the English translation writes or reserves on the CN baseline / English "
                  "ROM, without the bytes. Generated from the translation write list by "
                  "Tools/Scripts/make_english_patch.py; read by mod_conflicts.py and base_roms.py.",
         "baseline": patch["baseline"], "allocations": patch["allocations"]}
    d["spans"] = sorted(
        [{"address": w["address"], "length": len(w["after_hex"]) // 2, "what": w.get("note", "")}
         for w in patch["writes"]]
        + [{"address": b["address"], "length": b["length"], "what": "alloc: " + b["what"]}
           for b in patch["allocations"]["blocks"]]
        + [{"address": b["address"], "length": b["length"], "what": "dead code: " + b["what"]}
           for b in patch["allocations"].get("reused_dead_code", [])],
        key=lambda x: int(x["address"], 16))
    lo, hi = (int(x, 16) for x in patch["allocations"]["range"].split(".."))
    d["spans"].append({"address": f"0x{lo:08X}", "length": hi + 1 - lo, "what": "translation-owned range"})
    Path(path).write_text(json.dumps(d, indent=1, ensure_ascii=False) + "\n", encoding="utf-8")


def translation_spans():
    """[(lo, hi_exclusive, note)] of every translation write, allocation and reserved range."""
    d = json.loads(SPANS.read_text(encoding="utf-8"))
    return [(int(s["address"], 16), int(s["address"], 16) + s["length"], s["what"]) for s in d["spans"]]


def is_reservation(note):
    """True for allocation / reserved-range spans, False for plain translation writes."""
    return note.startswith(("alloc: ", "dead code: ", "translation-owned"))


if __name__ == "__main__":
    for name, fn in (("JP", jp_rom), ("CN baseline", cn_baseline), ("English", english_rom)):
        data = fn()
        print(f"{name:12} {len(data):>9,} B  sha256 {_sha(data)}")
    print(f"translation spans: {len(translation_spans())}")
