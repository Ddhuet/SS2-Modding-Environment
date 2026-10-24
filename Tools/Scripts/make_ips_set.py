#!/usr/bin/env python3
"""Fill Patch_Manager/ with the English ROM and one IPS patch per CN mod definition.

    python3 Tools/Scripts/make_ips_set.py [--rom Build/ss2-en-phase1d.gba] [--out Patch_Manager]

Writes:
- OUT/Input_ROM/<rom name>: a copy of the English build (hash-checked against its ss2tools manifest).
- OUT/patches/<id>.ips (`<id>_beta` for beta definitions): for every single definition in Patches/Definitions/Official/ (bundles skipped),
  the bytes that change from the English ROM to English ROM + mod, plus the English name from
  Patches/Definitions/ledger.json when the mod renames a record (same rule as combine_patch.py).
  Definitions that write above 16 MiB (offset >= 0x01000000) cannot be expressed in standard
  IPS (24-bit offsets); they are written as `<id>.ips32` (header "IPS32", 32-bit offsets,
  footer "EEOF"), which Patch_Manager/patch_manager.py reads.
- OUT/patches/base_rom.sha256: the English ROM's SHA-256, which the manager compares against.

Every definition's preimage is asserted on the English ROM. The 18 definitions are pairwise
disjoint and their union equals the CN bundles (checked 2026-10-11), so any subset can be
applied in any order. With `--defs DIR` (e.g. Patches/Definitions/Custom for new mods) only DIR's
definitions are written; the other files in OUT/patches stay. Self-check (official folder only): applying every patch except the beta one must give exactly
Build/ss2-en+all_17_released.gba when that build exists.
Standard library only.
"""
import argparse
import glob
import hashlib
import json
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
sys.path.insert(0, str(ROOT / "Patch_Manager"))
from combine_patch import ledger_overrides  # noqa: E402

BASE = 0x08000000
IPS_LIMIT = 0x01000000
BETA = {"shared_character_warehouses"}


def records(old, new):
    """Changed byte runs as (offset, bytes), runs of at most 0xFFFF bytes."""
    i, n = 0, len(new)
    while i < n:
        if i < len(old) and old[i] == new[i]:
            i += 1
            continue
        j = i
        while j < n and j - i < 0xFFFF and not (j < len(old) and old[j] == new[j]):
            j += 1
        yield i, new[i:j]
        i = j


def write_ips(path, recs, wide):
    out = bytearray(b"IPS32" if wide else b"PATCH")
    for off, data in recs:
        if not wide and off == 0x454F46:  # would read as "EOF": start one byte earlier
            raise SystemExit("record at the IPS EOF offset; extend the writer")
        out += off.to_bytes(4 if wide else 3, "big") + len(data).to_bytes(2, "big") + data
    out += b"EEOF" if wide else b"EOF"
    path.write_bytes(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rom", default=str(ROOT / "Build/ss2-en-phase1d.gba"))
    ap.add_argument("--out", default=str(ROOT / "Patch_Manager"))
    ap.add_argument("--defs", default=str(ROOT / "Patches/Definitions/Official"))
    args = ap.parse_args()

    rom_path, out = Path(args.rom), Path(args.out)
    rom = rom_path.read_bytes()
    sha = hashlib.sha256(rom).hexdigest()
    manifest = Path(str(rom_path) + ".manifest.json")
    if manifest.exists():
        assert json.loads(manifest.read_text())["output_identity"]["sha256"] == sha, "ROM differs from its manifest"
    (out / "patches").mkdir(parents=True, exist_ok=True)
    (out / "Input_ROM").mkdir(exist_ok=True)
    (out / "Output_ROM").mkdir(exist_ok=True)
    shutil.copyfile(rom_path, out / "Input_ROM" / rom_path.name)
    (out / "patches/base_rom.sha256").write_text(f"{sha}  {rom_path.name}\n")

    made = []
    for f in sorted(glob.glob(f"{args.defs}/*.json")):
        d = json.loads(Path(f).read_text(encoding="utf-8"))
        if d["id"].startswith("all_"):
            continue
        new = bytearray(rom)
        for w in d["writes"]:
            o = int(w["address"], 16) - BASE
            before, after = bytes.fromhex(w["before_hex"]), bytes.fromhex(w["after_hex"])
            assert new[o:o + len(before)] == before, (d["id"], w["address"])
            new[o:o + len(after)] = after
        for addr, name, e in ledger_overrides(d["writes"]):
            o = addr - BASE
            new[o:o + len(name)] = name
            print(f"  {d['id']}: ledger name {e['en']!r} at 0x{addr:08X}")
        recs = list(records(rom, new))
        wide = any(off + len(data) > IPS_LIMIT for off, data in recs)
        name = d["id"] + ("_beta" if d["id"] in BETA else "") + (".ips32" if wide else ".ips")
        for stale in (out / "patches").glob(d["id"] + ".ips*"):
            stale.unlink()
        write_ips(out / "patches" / name, recs, wide)
        made.append((d["id"], name, recs))
        print(f"{name:48s} {len(recs):4d} records {sum(len(x) for _, x in recs):6d} bytes")

    ref = ROOT / "Build/ss2-en+all_17_released.gba"
    official = Path(args.defs).resolve() == (ROOT / "Patches/Definitions/Official").resolve()
    if official and ref.exists():
        from patch_manager import load_patch, apply_patches, conflicts
        patches = [load_patch(out / "patches" / n) for i, n, _ in made if i not in BETA]
        everything = [load_patch(out / "patches" / n) for _, n, _ in made]
        assert not conflicts(everything), "patches overlap"
        got = hashlib.sha256(apply_patches(rom, patches)).hexdigest()
        want = hashlib.sha256(ref.read_bytes()).hexdigest()
        assert got == want, f"17 patches give {got}, combined build is {want}"
        print(f"self-check: 17 released patches == {ref.name} ({want[:16]}...)")


if __name__ == "__main__":
    main()
