#!/usr/bin/env python3
"""Make one BPS patch that turns the retail Japanese ROM into the English ROM (or the CN baseline).

    python3 Tools/Scripts/make_base_bps.py [--jp "ROMs/Shining_Soul_II_JP.gba"]
        [--en Build/ss2-en-phase1d.gba] [--out Build/ss2-en-from-jp.bps]
    python3 Tools/Scripts/make_base_bps.py --target cn [--cn ROMs/Shining_Soul_II_CN_Baseline.gba]
        [--out Patch_Manager/patches/cn_baseline.bps]

`--target cn` makes JP -> CN community baseline (SS2_SC_bug_fixed, Chinese text + their fixes), the
ROM Chinese players start from; Patch_Manager ships it as cn_baseline.bps.

The result is a plain diff JP -> English (CN baseline + translation), not a chain of patches;
applying it gives a ROM byte-identical to ss2-en-phase1d.gba, so every Patch_Manager mod
(made against that ROM) applies on top. BPS rather than IPS because the English ROM is 32 MiB
and standard IPS cannot address past 16 MiB; BPS also stores CRC32s of source and target, so
patchers (Flips, Rom Patcher JS) reject a wrong JP dump instead of producing a broken ROM.

Both inputs are hash-checked, and the patch is decoded with Tools/ss2tools/bps.py and compared to
the English ROM before it is written. Standard library only.
"""
import argparse
import hashlib
import sys
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools"))
from ss2tools.bps import decode_bps, encode_number  # noqa: E402

JP_SHA = "9f3e0d0653de6504c1aeaf03de3cca06ae0c15a24089f0236398ec56d382d17a"
EN_SHA = "4343a9c7fa9b6f9889a5fd9e334b807ebf98e200729810e92108b27d9bb953cb"
CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
MERGE_GAP = 8   # equal runs shorter than this are folded into the surrounding TargetRead
FILL_MIN = 16   # repeated-byte runs at least this long use TargetRead(1) + TargetCopy


def cmd(length, action):
    return encode_number(((length - 1) << 2) | action)


def rel(delta):
    return encode_number((abs(delta) << 1) | (delta < 0))


def encode(src, tgt):
    out = bytearray(b"BPS1")
    out += encode_number(len(src)) + encode_number(len(tgt)) + encode_number(0)
    n, i, trel = len(tgt), 0, 0

    def same(k):
        return k < len(src) and src[k] == tgt[k]

    while i < n:
        if same(i):                                    # SourceRead: unchanged bytes
            j = i
            while j < n and same(j):
                j += 1
            out += cmd(j - i, 0)
            i = j
            continue
        j = i                                          # changed span, absorbing short equal gaps
        while j < n:
            if same(j):
                k = j
                while k < n and same(k) and k - j < MERGE_GAP:
                    k += 1
                if k - j >= MERGE_GAP or k == n:
                    break
                j = k
            else:
                j += 1
        k = i                                          # emit span, compressing long fills
        while k < j:
            r = k + 1
            while r < j and tgt[r] == tgt[k]:
                r += 1
            if r - k >= FILL_MIN:
                out += cmd(1, 1) + tgt[k:k + 1]        # TargetRead one byte
                out += cmd(r - k - 1, 3) + rel(k - trel)  # TargetCopy overlapping it
                trel = r - 1
                k = r
            else:
                s = k                                  # literal run up to the next long fill
                while k < j:
                    r = k + 1
                    while r < j and tgt[r] == tgt[k]:
                        r += 1
                    if r - k >= FILL_MIN:
                        break
                    k = r
                out += cmd(k - s, 1) + tgt[s:k]
        i = j
    for data in (src, tgt):
        out += (zlib.crc32(data) & 0xFFFFFFFF).to_bytes(4, "little")
    out += (zlib.crc32(out) & 0xFFFFFFFF).to_bytes(4, "little")
    return bytes(out)


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--jp", default=str(ROOT / "ROMs/Shining_Soul_II_JP.gba"))
    ap.add_argument("--target", choices=("en", "cn"), default="en")
    ap.add_argument("--en", default=str(ROOT / "Build/ss2-en-phase1d.gba"))
    ap.add_argument("--cn", default=str(ROOT / "ROMs/Shining_Soul_II_CN_Baseline.gba"))
    ap.add_argument("--out")
    a = ap.parse_args()
    if a.target == "cn":
        tgt_path, tgt_name, tgt_sha = a.cn, "CN baseline", CN_SHA
        out = a.out or str(ROOT / "Patch_Manager/patches/cn_baseline.bps")
    else:
        tgt_path, tgt_name, tgt_sha = a.en, "English", EN_SHA
        out = a.out or str(ROOT / "Build/ss2-en-from-jp.bps")
    jp, en = Path(a.jp).read_bytes(), Path(tgt_path).read_bytes()
    for name, data, want in (("JP", jp, JP_SHA), (tgt_name, en, tgt_sha)):
        got = hashlib.sha256(data).hexdigest()
        if got != want:
            sys.exit(f"{name} ROM sha256 {got} != expected {want}")
    patch = encode(jp, en)
    if decode_bps(jp, patch) != en:
        sys.exit("round-trip check failed; patch not written")
    Path(out).write_bytes(patch)
    print(f"wrote {out}  {len(patch):,} bytes  sha256 {hashlib.sha256(patch).hexdigest()}")
    print(f"source CRC32 {zlib.crc32(jp) & 0xFFFFFFFF:08X}  target CRC32 {zlib.crc32(en) & 0xFFFFFFFF:08X}")


if __name__ == "__main__":
    main()
