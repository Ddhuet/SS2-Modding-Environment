"""Expansion and BPS safety tests using synthetic bytes only."""
from __future__ import annotations

import contextlib
import hashlib
import io
import json
import tempfile
import unittest
import zlib
from pathlib import Path

from ss2tools.__main__ import main
from ss2tools.bps import _decode_number, decode_bps, encode_bps, encode_number
from ss2tools.core import ROM_BASE, build, identity


def write_definition(data: bytes, offset: int, after: bytes) -> dict:
    before = data[offset:offset + len(after)]
    return {"offset": f"0x{offset:X}", "address": f"0x{ROM_BASE + offset:X}",
            "before_hex": before.hex(), "after_hex": after.hex()}


def bps_with_actions(source: bytes, target_size: int, actions: bytes,
                     target_crc: int = 0) -> bytes:
    body = (b"BPS1" + encode_number(len(source)) + encode_number(target_size) +
            encode_number(0) + actions + (zlib.crc32(source) & 0xFFFFFFFF).to_bytes(4, "little") +
            target_crc.to_bytes(4, "little"))
    return body + (zlib.crc32(body) & 0xFFFFFFFF).to_bytes(4, "little")


class ExpansionBuildTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        self.data = bytes(range(64))
        self.rom = self.root / "input.gba"
        self.rom.write_bytes(self.data)
        self.profile_path = self.root / "profile.json"
        self.profile_path.write_text(json.dumps({"schema_version": 1, "id": "tiny",
                                                 "identity": identity(self.data)}))
        self.patch_path = self.root / "expansion.json"
        self.output = self.root / "expanded.gba"
        self.bps_path = self.root / "expanded.bps"
        self.resource = self.data[32:48]
        self.expanded_size = 128
        self.fill = b"\xff"
        self.patch = {"schema_version": 1, "id": "expansion-test", "stage": "approved",
                      "profile_id": "tiny", "baseline": identity(self.data),
                      "expansion": {"size": self.expanded_size, "fill_byte": "0xFF",
                                    "owner": "test-allocation"},
                      "writes": [write_definition(self.data, 4, b"\xf1\xfa")],
                      "copies": [{"source_offset": "0x20", "offset": "0x50", "length": len(self.resource),
                                  "source_sha256": hashlib.sha256(self.resource).hexdigest(),
                                  "destination_sha256": hashlib.sha256(self.fill * len(self.resource)).hexdigest(),
                                  "owner": "test-resource"}]}
        self.save_patch()

    def save_patch(self):
        self.patch_path.write_text(json.dumps(self.patch))

    def build(self, **options):
        self.save_patch()
        return build(self.rom, self.patch_path, self.profile_path, self.output, **options)

    def assert_no_artifacts(self):
        self.assertFalse(self.output.exists())
        self.assertFalse(Path(str(self.output) + ".manifest.json").exists())
        self.assertFalse(self.bps_path.exists())
        self.assertEqual(self.rom.read_bytes(), self.data)
        self.assertFalse(list(self.root.glob(".ss2-build-*")))

    def expected_output(self):
        expected = bytearray(self.data + self.fill * (self.expanded_size - len(self.data)))
        expected[4:6] = b"\xf1\xfa"
        expected[0x50:0x50 + len(self.resource)] = self.resource
        return bytes(expected)

    def test_expanded_build_and_bps_round_trip_uses_source_copy(self):
        result = self.build(bps=self.bps_path)
        expected = self.expected_output()
        encoded = self.bps_path.read_bytes()
        self.assertEqual(self.output.read_bytes(), expected)
        self.assertEqual(decode_bps(self.data, encoded), expected)
        self.assertNotIn(self.resource, encoded)
        self.assertEqual(result["output_identity"], identity(expected))
        self.assertEqual(result["expansion"], {"size": 128, "fill_byte": "0xFF", "owner": "test-allocation"})
        self.assertEqual(result["copies"][0]["source_sha256"], hashlib.sha256(self.resource).hexdigest())
        self.assertEqual(result["copies"][0]["destination_sha256"],
                         hashlib.sha256(self.fill * len(self.resource)).hexdigest())
        self.assertNotIn("after_hex", result["copies"][0])
        self.assertEqual(result["bps"]["target_size"], self.expanded_size)
        self.assertEqual(json.loads(Path(str(self.output) + ".manifest.json").read_text()), result)

    def test_cli_bps_option_builds_expanded_patch(self):
        status = main(["build", str(self.rom), str(self.patch_path), str(self.output),
                       "--profile", str(self.profile_path), "--bps", str(self.bps_path)])
        self.assertEqual(status, 0)
        self.assertEqual(decode_bps(self.data, self.bps_path.read_bytes()), self.expected_output())

    def test_ips_is_rejected_for_expansion(self):
        with self.assertRaisesRegex(ValueError, "IPS cannot represent"):
            self.build(ips=self.root / "expanded.ips")
        self.assert_no_artifacts()

    def test_expansion_requires_larger_bounded_size_fill_byte_and_owner(self):
        invalid = [
            {"size": len(self.data), "fill_byte": "0xFF", "owner": "x"},
            {"size": 0x2000001, "fill_byte": "0xFF", "owner": "x"},
            {"size": self.expanded_size, "fill_byte": "FF", "owner": "x"},
            {"size": self.expanded_size, "fill_byte": "0x100", "owner": "x"},
            {"size": self.expanded_size, "fill_byte": "0xFF", "owner": " "},
        ]
        for expansion in invalid:
            with self.subTest(expansion=expansion):
                self.patch["expansion"] = expansion
                with self.assertRaises(ValueError):
                    self.build()
                self.assert_no_artifacts()

    def test_wrong_expanded_write_preimage_and_wrong_fill_hash_are_refused(self):
        self.patch["writes"].append({"offset": "0x42", "address": f"0x{ROM_BASE + 0x42:X}",
                                     "before_hex": "00", "after_hex": "01"})
        with self.assertRaisesRegex(ValueError, "preimage mismatch"):
            self.build()
        self.assert_no_artifacts()
        self.patch["writes"].pop()
        self.patch["expansion"]["fill_byte"] = "0x00"
        with self.assertRaisesRegex(ValueError, "destination preimage SHA-256"):
            self.build()
        self.assert_no_artifacts()

    def test_exact_input_profile_and_patch_hash_are_required(self):
        self.patch["baseline"]["sha256"] = "0" * 64
        with self.assertRaisesRegex(ValueError, "baseline"):
            self.build()
        self.assert_no_artifacts()
        self.patch["baseline"] = identity(self.data)
        self.rom.write_bytes(self.data[:-1] + b"\xff")
        with self.assertRaisesRegex(ValueError, "identity mismatch"):
            self.build()
        self.assertFalse(self.output.exists())

    def test_copy_hash_bounds_owner_and_preimage_are_verified(self):
        cases = [
            ("source_sha256", "0" * 64, "Copy source SHA-256 mismatch"),
            ("destination_sha256", "0" * 64, "Copy destination preimage SHA-256 mismatch"),
            ("source_offset", "0x3F", "Copy source extends outside"),
            ("offset", "0x79", "Copy destination must be in expanded space"),
            ("owner", "", "owner must be a nonempty string"),
        ]
        for field, value, error in cases:
            with self.subTest(field=field):
                original = self.patch["copies"][0][field]
                self.patch["copies"][0][field] = value
                with self.assertRaisesRegex(ValueError, error):
                    self.build()
                self.assert_no_artifacts()
                self.patch["copies"][0][field] = original
    def test_copy_destinations_cannot_overlap_writes_or_each_other(self):
        copy_to_write = dict(self.patch["copies"][0], offset="0x42", length=2,
                             source_sha256=hashlib.sha256(self.data[32:34]).hexdigest(),
                             destination_sha256=hashlib.sha256(self.fill * 2).hexdigest())
        self.patch["copies"] = [copy_to_write]
        self.patch["writes"].append({"offset": "0x43", "address": f"0x{ROM_BASE + 0x43:X}",
                                     "before_hex": "ff", "after_hex": "aa"})
        with self.assertRaisesRegex(ValueError, "ranges overlap"):
            self.build()
        self.assert_no_artifacts()
        self.patch["copies"] = [dict(self.patch["copies"][0], offset="0x60"),
                                 dict(self.patch["copies"][0], offset="0x61")]
        with self.assertRaisesRegex(ValueError, "ranges overlap"):
            self.build()
        self.assert_no_artifacts()


class BPSFormatTests(unittest.TestCase):
    def test_spec_variable_integer_examples(self):
        known = {0: "80", 1: "81", 127: "ff", 128: "0080", 129: "0180",
                 255: "7f80", 256: "0081"}
        for value, encoded_hex in known.items():
            with self.subTest(value=value):
                encoded = bytes.fromhex(encoded_hex)
                self.assertEqual(encode_number(value), encoded)
                self.assertEqual(_decode_number(encoded, 0, len(encoded)), (value, len(encoded)))
        with self.assertRaisesRegex(ValueError, "Truncated"):
            _decode_number(b"\x00", 0, 1)

    def test_bps_round_trip_same_size_and_checks_three_crcs(self):
        source = b"AA-original-resource-BB"
        target = b"AA-changed-resource!-BB"
        writes = [{"offset": 3, "after": b"changed-resource!"}]
        patch = encode_bps(source, target, writes)
        self.assertEqual(decode_bps(source, patch), target)
        with self.assertRaisesRegex(ValueError, "source CRC"):
            decode_bps(source[:-1] + b"?", patch)
        corrupted_patch = bytearray(patch)
        corrupted_patch[8] ^= 1
        with self.assertRaisesRegex(ValueError, "patch CRC"):
            decode_bps(source, bytes(corrupted_patch))
        corrupted_target_crc = bytearray(patch)
        corrupted_target_crc[-8] ^= 1
        corrupted_target_crc[-4:] = (zlib.crc32(corrupted_target_crc[:-4]) & 0xFFFFFFFF).to_bytes(4, "little")
        with self.assertRaisesRegex(ValueError, "target CRC"):
            decode_bps(source, bytes(corrupted_target_crc))

    def test_decoder_rejects_truncated_commands_and_copy_bounds(self):
        source = b"source"
        target_crc = zlib.crc32(b"") & 0xFFFFFFFF
        truncated_target_read = bps_with_actions(source, 2, encode_number(((2 - 1) << 2) | 1), target_crc)
        with self.assertRaisesRegex(ValueError, "Truncated BPS TargetRead"):
            decode_bps(source, truncated_target_read)

        source_copy_oob = bps_with_actions(source, 1,
                                           encode_number(2) + encode_number(100 << 1), target_crc)
        with self.assertRaisesRegex(ValueError, "SourceCopy exceeds"):
            decode_bps(source, source_copy_oob)

        target_copy_oob = bps_with_actions(source, 1,
                                           encode_number(3) + encode_number(0), target_crc)
        with self.assertRaisesRegex(ValueError, "TargetCopy points"):
            decode_bps(source, target_copy_oob)

    def test_decoder_rejects_action_overrun_and_size_mismatch(self):
        source = b"source"
        target_crc = zlib.crc32(b"") & 0xFFFFFFFF
        too_long = bps_with_actions(source, 1, encode_number(((2 - 1) << 2) | 0), target_crc)
        with self.assertRaisesRegex(ValueError, "exceeds declared target"):
            decode_bps(source, too_long)

        valid = encode_bps(source, source, [])
        wrong_header_size = bytearray(valid)
        # BPS1 followed by the one-byte source size; update the patch CRC.
        wrong_header_size[4] = encode_number(len(source) - 1)[0]
        wrong_header_size[-4:] = (zlib.crc32(wrong_header_size[:-4]) & 0xFFFFFFFF).to_bytes(4, "little")
        with self.assertRaisesRegex(ValueError, "source size mismatch"):
            decode_bps(source, bytes(wrong_header_size))


if __name__ == "__main__":
    unittest.main()
