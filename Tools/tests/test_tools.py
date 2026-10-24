"""Synthetic safety and relocation tests; supplied ROMs/saves are never modified."""
from __future__ import annotations

import contextlib
import io
import json
import os
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch as mock_patch

from ss2tools.__main__ import main
from ss2tools.core import (ROM_BASE, build, decode_bl, encode_bl, identity, ips_bytes,
                           load_profile, parse_writes, publish_new, verify)
from ss2tools.porting import find_candidates, port_report


def write_definition(off, before, after):
    return {"offset": f"0x{off:X}", "address": f"0x{ROM_BASE + off:X}",
            "before_hex": before.hex(), "after_hex": after.hex()}


class BuildTests(unittest.TestCase):
    def setUp(self):
        self.directory = tempfile.TemporaryDirectory()
        self.addCleanup(self.directory.cleanup)
        self.root = Path(self.directory.name)
        self.data = bytes(range(256)) * 4
        self.rom = self.root / "source.gba"
        self.rom.write_bytes(self.data)
        self.profile_path = self.root / "profile.json"
        self.profile = {"schema_version": 1, "id": "synthetic", "identity": identity(self.data)}
        self.profile_path.write_text(json.dumps(self.profile))
        self.patch_path = self.root / "patch.json"
        self.patch = {"schema_version": 1, "id": "synthetic-change", "stage": "approved",
                      "profile_id": "synthetic", "baseline": identity(self.data),
                      "writes": [write_definition(32, self.data[32:36], b"\xfa\xfb\xfc\xfd")]}
        self.output = self.root / "output.gba"
        self.save_patch()

    def save_patch(self):
        self.patch_path.write_text(json.dumps(self.patch))

    def build(self, **options):
        self.save_patch()
        return build(self.rom, self.patch_path, self.profile_path, self.output, **options)

    def assertNoOutput(self):
        self.assertFalse(self.output.exists())
        self.assertFalse(Path(str(self.output) + ".manifest.json").exists())
        self.assertEqual(self.rom.read_bytes(), self.data)
        self.assertFalse(list(self.root.glob(".ss2-build-*")))

    def test_exact_build_manifest_and_ips(self):
        ips = self.root / "change.ips"
        result = self.build(ips=ips)
        expected = self.data[:32] + b"\xfa\xfb\xfc\xfd" + self.data[36:]
        self.assertEqual(self.output.read_bytes(), expected)
        self.assertEqual(result["output_identity"], identity(expected))
        self.assertEqual(result["input_identity"], identity(self.data))
        self.assertTrue(result["semantic_approval"])
        self.assertEqual(ips.read_bytes(), b"PATCH\0\0\x20\0\4\xfa\xfb\xfc\xfdEOF")
        self.assertEqual(json.loads(Path(str(self.output) + ".manifest.json").read_text()), result)
        self.assertEqual(self.rom.read_bytes(), self.data)

    def test_wrong_rom_hash_refused_before_output(self):
        self.rom.write_bytes(self.data[:-1] + b"\x00")
        with self.assertRaisesRegex(ValueError, "identity mismatch"):
            self.build()
        self.assertFalse(self.output.exists())

    def test_identity_requires_all_hashes(self):
        for field in ("size", "md5", "sha256", "crc32"):
            with self.subTest(field=field):
                profile = dict(self.profile, identity=dict(self.profile["identity"]))
                del profile["identity"][field]
                with self.assertRaises(ValueError):
                    verify(self.data, profile)

    def test_wrong_patch_baseline_or_profile_refused(self):
        for field in ("md5", "sha256", "crc32"):
            original = self.patch["baseline"][field]
            self.patch["baseline"][field] = "0" * len(original)
            with self.assertRaisesRegex(ValueError, "baseline"):
                self.build()
            self.patch["baseline"][field] = original
        self.patch["profile_id"] = "another-region"
        with self.assertRaisesRegex(ValueError, "profile_id"):
            self.build()
        self.assertNoOutput()

    def test_full_preimage_refused(self):
        self.patch["writes"][0]["before_hex"] = "202122ff"
        with self.assertRaisesRegex(ValueError, "preimage mismatch"):
            self.build()
        self.assertNoOutput()

    def test_overlap_refused_but_adjacency_allowed(self):
        self.patch["writes"].append(write_definition(35, self.data[35:38], b"abc"))
        with self.assertRaisesRegex(ValueError, "overlap"):
            self.build()
        self.assertNoOutput()
        self.patch["writes"][1] = write_definition(36, self.data[36:38], b"ab")
        self.build()
        self.assertEqual(self.output.read_bytes()[32:38], b"\xfa\xfb\xfc\xfdab")

    def test_out_of_range_and_address_mismatch_refused(self):
        self.patch["writes"] = [write_definition(1023, b"\xff\0", b"ab")]
        with self.assertRaisesRegex(ValueError, "outside"):
            self.build()
        self.patch["writes"] = [write_definition(32, self.data[32:36], b"abcd")]
        self.patch["writes"][0]["address"] = "0x08000022"
        with self.assertRaisesRegex(ValueError, "Address/offset"):
            self.build()
        self.assertNoOutput()

    def test_output_and_artifact_overwrites_refused(self):
        for path, options in [(self.output, {}), (self.root / "manifest.json", {"manifest": self.root / "manifest.json"}),
                              (self.root / "out.ips", {"ips": self.root / "out.ips"})]:
            with self.subTest(path=path.name):
                path.write_bytes(b"existing")
                with self.assertRaises(FileExistsError):
                    self.build(**options)
                self.assertEqual(path.read_bytes(), b"existing")
                path.unlink()
                self.assertNoOutput()

    def test_protected_input_and_artifact_aliases_refused(self):
        for options in ({"manifest": self.rom}, {"manifest": self.patch_path},
                        {"manifest": self.profile_path}, {"manifest": self.output},
                        {"ips": self.output}):
            with self.subTest(options=options):
                with self.assertRaises(ValueError):
                    self.build(**options)
                self.assertNoOutput()
        with self.assertRaises(ValueError):
            build(self.rom, self.patch_path, self.profile_path, self.rom)
        self.assertEqual(self.rom.read_bytes(), self.data)

    def test_dangling_symlink_never_followed_or_overwritten(self):
        self.output.symlink_to(self.root / "missing.gba")
        with self.assertRaises(FileExistsError):
            self.build()
        self.assertTrue(self.output.is_symlink())
        self.assertFalse((self.root / "missing.gba").exists())

    def test_candidate_requires_opt_in_and_stays_unapproved(self):
        self.patch["stage"] = "static_candidate"
        with self.assertRaisesRegex(ValueError, "allow-static-candidate"):
            self.build()
        self.assertNoOutput()
        report = self.build(allow_static_candidate=True)
        self.assertFalse(report["semantic_approval"])
        self.assertEqual(report["stage"], "static_candidate")
        self.assertEqual(json.loads(self.patch_path.read_text())["stage"], "static_candidate")

    def test_unrecognized_stage_refused(self):
        self.patch["stage"] = "released"
        with self.assertRaisesRegex(ValueError, "stage|accepts only"):
            self.build()
        self.assertNoOutput()

    def test_link_race_rolls_back_own_artifacts_preserves_competing_file(self):
        first, second = self.root / "first", self.root / "second"
        real_link = os.link
        calls = 0

        def race(source, destination):
            nonlocal calls
            calls += 1
            if calls == 2:
                Path(destination).write_bytes(b"competing-process")
            return real_link(source, destination)

        with mock_patch("ss2tools.core.os.link", side_effect=race):
            with self.assertRaises(FileExistsError):
                publish_new({first: b"new-one", second: b"new-two"})
        self.assertFalse(first.exists())
        self.assertEqual(second.read_bytes(), b"competing-process")
        self.assertFalse(list(self.root.glob(".ss2-build-*")))

    def test_ips_reserved_and_24_bit_range_refused(self):
        for off in (0x454f46, 0x1000000, 0xffffff):
            with self.subTest(off=off):
                with self.assertRaises(ValueError):
                    ips_bytes([{"offset": off, "after": b"ab"}])

    def test_cli_error_is_json_and_exit_two(self):
        output = io.StringIO()
        with contextlib.redirect_stderr(output):
            status = main(["verify", str(self.rom), "--profile", str(self.root / "missing.json")])
        self.assertEqual(status, 2)
        self.assertEqual(json.loads(output.getvalue())["status"], "error")


class BLTests(unittest.TestCase):
    def test_round_trip_signed_edges_and_moved_call(self):
        off = 0x400000
        for delta in (-0x400000, -2, 0, 2, 0x3ffffe):
            target = ROM_BASE + off + 4 + delta
            self.assertEqual(decode_bl(encode_bl(off, target), off), target)
        original = encode_bl(0x100, ROM_BASE + 0x800)
        moved = encode_bl(0x200, ROM_BASE + 0xB00)
        self.assertNotEqual(original, moved)
        self.assertEqual(decode_bl(original, 0x100), ROM_BASE + 0x800)
        self.assertEqual(decode_bl(moved, 0x200), ROM_BASE + 0xB00)

    def test_known_hardware_encoding(self):
        self.assertEqual(decode_bl(bytes.fromhex("00f000f8"), 0), ROM_BASE + 4)
        self.assertEqual(decode_bl(bytes.fromhex("fff7feff"), 0), ROM_BASE)

    def test_invalid_encoding_alignment_and_range(self):
        for instruction, off in ((b"\0" * 4, 0), (bytes.fromhex("00f000e8"), 0),
                                 (bytes.fromhex("00f000f8"), 1), (b"\0" * 2, 0)):
            with self.assertRaises(ValueError):
                decode_bl(instruction, off)
        for off, target in ((1, ROM_BASE), (0, ROM_BASE + 1), (0, ROM_BASE + 4 + 0x400000),
                            (0, ROM_BASE + 4 - 0x400002)):
            with self.assertRaises(ValueError):
                encode_bl(off, target)


class PortTests(unittest.TestCase):
    def setUp(self):
        self.source = bytearray(b"\0" * 512)
        self.target = bytearray(b"\xff" * 768)
        self.source[64:128] = bytes(range(32, 96))
        self.source[88:92] = encode_bl(88, ROM_BASE + 400)
        self.target[224:288] = self.source[64:128]
        self.target[248:252] = encode_bl(248, ROM_BASE + 600)
        self.writes = parse_writes({"schema_version": 1, "writes": [
            write_definition(80, bytes(self.source[80:82]), b"\xfa\xfb")]})

    def find(self, **options):
        return find_candidates(bytes(self.source), bytes(self.target), self.writes,
                               window=64, before=16, **options)[0]

    def test_moved_bl_normalized_unique_candidate_never_approved(self):
        row = self.find()
        self.assertEqual(row["status"], "unique_static_candidate")
        self.assertEqual(row["approval"], "not_approved")
        hit = row["candidates"][0]
        self.assertEqual(hit["offset"], "0x000000F0")
        self.assertTrue(hit["target_preimage_matches"])
        self.assertEqual(hit["bl_correspondences"][0]["source_target"], "0x08000190")
        self.assertEqual(hit["bl_correspondences"][0]["target_target"], "0x08000258")
        self.assertEqual(hit["bl_correspondences"][0]["callee_equivalence"], "not_established")
        self.assertEqual(self.find(mode="exact")["status"], "no_candidate")

    def test_mask_does_not_accept_non_bl_or_odd_alignment(self):
        self.target[248:252] = b"abcd"
        self.assertEqual(self.find()["status"], "no_candidate")
        self.target[225:289] = self.source[64:128]
        self.target[249:253] = encode_bl(248, ROM_BASE + 600)
        self.assertEqual(self.find()["status"], "no_candidate")

    def test_ambiguity_and_truncation_not_unique(self):
        self.target[400:464] = self.target[224:288]
        row = self.find()
        self.assertEqual(row["status"], "multiple_candidates")
        self.assertEqual(len(row["candidates"]), 2)
        limited = self.find(limit=1)
        self.assertTrue(limited["truncated"])
        self.assertEqual(limited["status"], "multiple_candidates")

    def test_source_preimage_mismatch_and_extension_write_refused(self):
        self.source[80] = 0
        self.assertEqual(self.find()["status"], "source_preimage_mismatch")
        self.writes[0]["offset"] = 512
        self.assertEqual(self.find()["status"], "source_write_out_of_range")

    def test_changed_bl_preimage_is_exposed_not_retargeted(self):
        self.writes = parse_writes({"schema_version": 1, "writes": [
            write_definition(88, bytes(self.source[88:92]), b"\xc0\x46\xc0\x46")]})
        row = find_candidates(bytes(self.source), bytes(self.target), self.writes,
                              window=64, before=24)[0]
        self.assertEqual(row["status"], "unique_static_candidate")
        self.assertFalse(row["candidates"][0]["target_preimage_matches"])

    def test_low_information_window_and_bad_search_parameters(self):
        source = b"\0" * 128
        writes = [{"index": 0, "offset": 16, "before": b"\0", "after": b"\1"}]
        self.assertEqual(find_candidates(source, source, writes, window=32, before=16)[0]["status"], "low_information_window")
        with self.assertRaises(ValueError):
            find_candidates(source, source, writes, window=31, before=16)

    def test_verified_profile_source_baseline_mismatch_is_explicit_read_only(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            src, dst, definition = root / "source", root / "target", root / "patch.json"
            src.write_bytes(self.source)
            dst.write_bytes(self.target)
            profiles = []
            for name, data in (("source", self.source), ("target", self.target)):
                path = root / (name + ".json")
                path.write_text(json.dumps({"schema_version": 1, "id": name, "identity": identity(data)}))
                profiles.append(path)
            patch = {"schema_version": 1, "id": "ported", "baseline": identity(bytes(self.source) + b"extension"),
                     "writes": [write_definition(80, bytes(self.source[80:82]), b"\xfa\xfb")]}
            definition.write_text(json.dumps(patch))
            report = port_report(src, dst, definition, *profiles, window=64, before=16)
            self.assertFalse(report["source_patch_baseline_matches"])
            self.assertEqual(report["approval"], "not_approved")
            self.assertEqual(src.read_bytes(), self.source)
            self.assertEqual(dst.read_bytes(), self.target)
            self.assertEqual(len(list(root.iterdir())), 5)
            src.write_bytes(bytes(self.source[:-1]))
            with self.assertRaisesRegex(ValueError, "identity mismatch"):
                port_report(src, dst, definition, *profiles)


if __name__ == "__main__":
    unittest.main()
