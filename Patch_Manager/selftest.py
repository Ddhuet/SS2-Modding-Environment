#!/usr/bin/env python3
"""Headless self-test of patch_manager's patch logic (no GUI, no ROM needed).

    python3 Patch_Manager/selftest.py

Builds a synthetic 32 MiB ROM and IPS/IPS32/BPS patches in a temp folder, then checks parsing
(plain and RLE records, IPS32 above 16 MiB), BPS decoding (a translation applied first, a mod
BPS stacked as writes), the conflict check and build(). build_exe.sh
runs it with Windows Python before packaging; it exits non-zero on any failure.
"""
import hashlib
import sys
import tempfile
import zlib
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import patch_manager as pm  # noqa: E402


def ips(records, wide=False):
    out = bytearray(b"IPS32" if wide else b"PATCH")
    for off, data, rle in records:
        out += off.to_bytes(4 if wide else 3, "big")
        out += (b"\0\0" + rle.to_bytes(2, "big") if rle else len(data).to_bytes(2, "big")) + data
    return bytes(out + (b"EEOF" if wide else b"EOF"))


def bps(src, tgt):
    """Minimal BPS encoder: SourceRead for equal runs, TargetRead for the rest (same length only)."""
    def num(v):
        out = bytearray()
        while True:
            x = v & 0x7F
            v >>= 7
            if v == 0:
                return bytes(out + bytes([0x80 | x]))
            out.append(x)
            v -= 1
    out = bytearray(b"BPS1" + num(len(src)) + num(len(tgt)) + num(0))
    i = 0
    while i < len(tgt):
        j = i
        same = src[i] == tgt[i]
        while j < len(tgt) and (src[j] == tgt[j]) == same:
            j += 1
        out += num(((j - i - 1) << 2) | (0 if same else 1)) + (b"" if same else tgt[i:j])
        i = j
    out += zlib.crc32(src).to_bytes(4, "little") + zlib.crc32(tgt).to_bytes(4, "little")
    return bytes(out + zlib.crc32(out).to_bytes(4, "little"))


def main():
    with tempfile.TemporaryDirectory() as t:
        t = Path(t)
        for d in ("patches", "Input_ROM", "Output_ROM"):
            (t / d).mkdir()
        pm.PATCH_DIR, pm.INPUT_DIR, pm.OUTPUT_DIR = t / "patches", t / "Input_ROM", t / "Output_ROM"
        rom = bytes(0x2000000)
        (t / "Input_ROM/test.gba").write_bytes(rom)
        (t / "patches/a.ips").write_bytes(ips([(0x100, b"\x01\x02", 0), (0x200, b"\x7f", 4)]))
        (t / "patches/b.ips32").write_bytes(ips([(0x1000010, b"\xaa\xbb", 0)], wide=True))
        (t / "patches/c.ips").write_bytes(ips([(0x101, b"\x09", 0)]))  # clashes with a
        (t / "patches/ignored.txt").write_text("not a patch")

        names = [p.name for p in pm.list_patches()]
        assert names == ["a.ips", "b.ips32", "c.ips"], names
        assert [p.name for p in pm.list_roms()] == ["test.gba"]
        a, b, c = (pm.load_patch(t / "patches" / n) for n in names)
        assert a["writes"] == [(0x100, b"\x01\x02"), (0x200, b"\x7f" * 4)], a["writes"]
        assert b["writes"] == [(0x1000010, b"\xaa\xbb")], b["writes"]
        assert not pm.conflicts([a, b]) and pm.conflicts([a, c]), "conflict check"

        out, sha = pm.build(t / "Input_ROM/test.gba", [t / "patches/a.ips", t / "patches/b.ips32"])
        want = bytearray(rom)
        want[0x100:0x102] = b"\x01\x02"
        want[0x200:0x204] = b"\x7f" * 4
        want[0x1000010:0x1000012] = b"\xaa\xbb"
        assert out.read_bytes() == want and sha == hashlib.sha256(want).hexdigest(), "build output"
        assert out.parent == t / "Output_ROM" and out.with_suffix(".txt").exists()
        try:
            pm.build(t / "Input_ROM/test.gba", [t / "patches/a.ips", t / "patches/c.ips"])
            raise AssertionError("conflicting build was not refused")
        except pm.PatchError:
            pass

        # BPS: "Japanese" ROM -> english_translation.bps -> "English" ROM; mod BPS made against English.
        jp = bytes(range(256)) * 64
        en = bytearray(jp)
        en[10:14] = b"ENGL"
        en = bytes(en)
        mod = bytearray(en)
        mod[0x300:0x302] = b"\x55\x66"
        (t / "Input_ROM/test.gba").unlink()
        (t / "Input_ROM/jp.gba").write_bytes(jp)
        (t / "patches/english_translation.bps").write_bytes(bps(jp, en))
        (t / "patches/m.bps").write_bytes(bps(en, bytes(mod)))
        (t / "patches/d.ips").write_bytes(ips([(0x400, b"\x01", 0)]))
        assert pm.list_patches()[0].name == "english_translation.bps", "translation listed first"
        tr, m, d = (t / "patches" / n for n in ("english_translation.bps", "m.bps", "d.ips"))
        want = bytearray(mod)
        want[0x400] = 1
        out, _ = pm.build(t / "Input_ROM/jp.gba", [tr, m, d])
        assert out.read_bytes() == want, "JP + translation + mod BPS + IPS"
        (t / "Input_ROM/en.gba").write_bytes(en)
        for sel in ([tr, m, d], [m, d]):  # English input: translation skipped either way
            out, _ = pm.build(t / "Input_ROM/en.gba", sel)
            assert out.read_bytes() == want, "English input"
        for bad in ([m],):  # Japanese ROM without the translation is refused
            try:
                pm.build(t / "Input_ROM/jp.gba", bad)
                raise AssertionError("JP ROM without translation was not refused")
            except pm.PatchError:
                pass
        (t / "patches/e.ips").write_bytes(ips([(0x300, b"\x77", 0)]))  # clashes with m.bps
        try:
            pm.build(t / "Input_ROM/en.gba", [m, t / "patches/e.ips"])
            raise AssertionError("BPS/IPS clash was not refused")
        except pm.PatchError:
            pass
    print("selftest ok")


if __name__ == "__main__":
    main()
