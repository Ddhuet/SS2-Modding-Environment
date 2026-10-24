#!/usr/bin/env python3
"""Make Chinese (CN baseline) versions of the shipped English patches, where they can work.

    python3 Tools/Scripts/make_cn_set.py [--patches Patch_Manager/patches] [NAME ...]

For every mod patch in PATCHES (.ips, .ips32, .bps; not the two base patches), decode it against the
English ROM into the bytes it changes, then decide whether the same bytes work on the CN community
ROM (SS2_SC_bug_fixed). The English ROM equals the CN baseline outside the translation's spans
(Tools/profiles/translation_spans.json), so a mod that stays out of them is byte-for-byte the same
mod on both. A patch is **English-only** when it:

- writes bytes the translation owns (other than English item names, see below);
- contains a pointer (aligned word) or a Thumb BL into translation-only code or data: the
  0x094xxxxx translation range, or the centring helper 0x08019FD8..0x0801A093;
- is listed in Patches/Definitions/cn_overrides.json as English-only (e.g. it draws English glyph
  codes 0x701+, which the CN font doesn't have).

Writes into English name slots (slot 1, "name slot 1" spans; the ledger's English names) are
dropped: the Chinese game never shows them. Everything else is kept as is.

Output: PATCHES/cn/<name>.bps (CN baseline -> CN baseline + mod, round-trip checked) for every
compatible patch, stale cn/*.bps of incompatible ones removed, and PATCHES/cn/compat.json with the
verdict, reason and the English file's SHA-256 for each patch. The web patcher and Patch_Manager
grey out English-only ones, and treat a CN version as missing when the English file has changed
since (rerun this script after replacing a patch).
Needs only the JP ROM (base_roms.py). Standard library only.
"""
import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
sys.path.insert(0, str(ROOT / "Tools"))
sys.path.insert(0, str(ROOT / "Patch_Manager"))
from base_roms import cn_baseline, english_rom, translation_spans, is_reservation  # noqa: E402
from make_base_bps import encode  # noqa: E402
from ss2tools.bps import decode_bps  # noqa: E402
import patch_manager as pm  # noqa: E402

BASE = 0x08000000
BASES = {"english_translation", "cn_baseline"}
OVERRIDES = ROOT / "Patches/Definitions/cn_overrides.json"
# translation-only code/data a CN ROM doesn't have (CPU addresses, end exclusive)
TR_ONLY = [(0x09400000, 0x09500000, "translation range 0x094xxxxx"),
           (0x08019FD8, 0x0801A094, "centring helper 0x08019FD8")]


def tr_only(addr):
    a = addr & ~1
    return next((n for lo, hi, n in TR_ONLY if lo <= a < hi), None)


def bl_target(rom, o):
    h1, h2 = struct.unpack_from("<HH", rom, o)
    if h1 & 0xF800 != 0xF000 or h2 & 0xF800 != 0xF800:
        return None
    off = ((h1 & 0x7FF) << 12) | ((h2 & 0x7FF) << 1)
    if off & 0x400000:
        off -= 0x800000
    return BASE + o + 4 + off


def classify(en, target, spans, override):
    """(verdict, reason, kept byte offsets) for one patch's target ROM."""
    changed = [o for o in range(min(len(en), len(target))) if en[o] != target[o]]
    changed += range(len(en), len(target))
    if override:
        return "en_only", override, []
    keep, dropped = [], 0
    for o in changed:
        a = BASE + o
        hit = next((s for s in spans if s[0] <= a < s[1]), None)
        if hit is None:
            keep.append(o)
        elif "name slot 1" in hit[2]:
            dropped += 1
        else:
            what = "reserved" if is_reservation(hit[2]) else "written"
            return "en_only", f"changes translation-{what} bytes at 0x{a:08X} ({hit[2][:80]})", []
    kept = set(keep)
    for o in sorted({k & ~3 for k in keep}):
        if o + 4 <= len(target) and (n := tr_only(struct.unpack_from("<I", target, o)[0])):
            return "en_only", f"word at 0x{BASE + o:08X} points into the {n}", []
    for o in sorted({k & ~1 for k in keep} | {(k & ~1) - 2 for k in keep}):
        if 0 <= o and o + 4 <= len(target) and (o in kept or o + 1 in kept or o + 2 in kept or o + 3 in kept):
            t = bl_target(target, o)
            if t is not None and (n := tr_only(t)):
                return "en_only", f"bl at 0x{BASE + o:08X} calls the {n}", []
    note = f"{len(keep)} bytes" + (f"; {dropped} English-name bytes dropped" if dropped else "")
    return "cn_ok", note, keep


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("names", nargs="*", help="patch stems (default: every mod patch)")
    ap.add_argument("--patches", default=str(ROOT / "Patch_Manager/patches"))
    a = ap.parse_args()
    folder, out = Path(a.patches), Path(a.patches) / "cn"
    out.mkdir(exist_ok=True)
    en, cn = english_rom(), cn_baseline()
    spans = translation_spans()
    overrides = json.loads(OVERRIDES.read_text(encoding="utf-8")) if OVERRIDES.exists() else {}
    report_path = out / "compat.json"
    report = json.loads(report_path.read_text()) if report_path.exists() and a.names else {}
    files = sorted(p for p in folder.iterdir() if p.suffix.lower() in pm.EXTS and p.stem not in BASES)
    if a.names:
        files = [p for p in files if p.stem in a.names]
    en_crc = __import__("zlib").crc32(en)
    for path in files:
        p = pm.load_patch(path)
        writes = pm.bps_writes(en, p["bps"], en_crc) if "bps" in p else p["writes"]
        target = pm.apply_patches(en, [{"writes": writes, "truncate": p.get("truncate")}])
        ov = overrides.get(path.stem, {}).get("en_only")
        verdict, reason, keep = classify(en, target, spans, ov)
        cn_path = out / f"{path.stem}.bps"
        entry = {"file": path.name, "en_sha256": hashlib.sha256(path.read_bytes()).hexdigest(),
                 "cn": verdict == "cn_ok", "reason": reason}
        if verdict == "cn_ok":
            new = bytearray(cn)
            if len(target) > len(new):
                new.extend(bytes(len(target) - len(new)))
            for o in keep:
                new[o] = target[o]
            new = bytes(new)
            patch = encode(cn, new)
            if decode_bps(cn, patch) != new:
                sys.exit(f"{path.name}: round-trip check failed")
            cn_path.write_bytes(patch)
            entry["cn_file"] = f"cn/{cn_path.name}"
            entry["cn_sha256"] = hashlib.sha256(patch).hexdigest()
        else:
            cn_path.unlink(missing_ok=True)
        report[path.stem] = entry
        print(f"{'CN ok  ' if entry['cn'] else 'EN only'}  {path.name:45} {reason}")
    report_path.write_text(json.dumps(dict(sorted(report.items())), indent=1, ensure_ascii=False) + "\n")
    print(f"wrote {report_path}")


if __name__ == "__main__":
    main()
