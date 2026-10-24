"""Exact-hash state compatibility must not weaken integrity or backend checks."""
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import Mock

from emulator import Session, sha256

ORIGINAL = "e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2"
EXPANDED = "085009a8b4867a1533da124af43f6d69b044183d998bc1e91e3c10f82b5d632b"
REVISION = "26b7884bc25a5933960f3cdcd98bac1ae14d42e2"


class StateCompatibilityTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.path = Path(self.temp.name) / "state.ss1"
        self.path.write_bytes(b"state integrity fixture")
        self.metadata = {"format": "ss2-mgba-state-v1", "backend_revision": REVISION,
                         "rom_sha256": ORIGINAL, "state_sha256": sha256(self.path)}
        self.session = Session.__new__(Session)
        self.session.run_dir = Path(self.temp.name)
        self.session.rom_sha256 = EXPANDED
        self.session._handle = object()
        self.session._lib = Mock()
        self.session._lib.ss2_state.return_value = 1
        self.session._lib.ss2_frame.return_value = 1175

    def write_metadata(self):
        Path(str(self.path) + ".json").write_text(json.dumps(self.metadata))

    def test_original_state_on_exact_expansion_and_same_rom_states(self):
        for target, state in ((EXPANDED, ORIGINAL), (ORIGINAL, ORIGINAL), (EXPANDED, EXPANDED)):
            with self.subTest(target=target, state=state):
                self.session.rom_sha256 = target
                self.metadata["rom_sha256"] = state
                self.write_metadata()
                self.assertEqual(self.session.load_state(self.path), 1175)
                self.session._lib.ss2_state.assert_called_with(
                    self.session._handle, bytes(self.path), 1)

    def test_other_roms_and_reverse_direction_rejected_before_native_load(self):
        for target, state in ((ORIGINAL, EXPANDED), ("0" * 64, ORIGINAL),
                              (EXPANDED, "0" * 64), (EXPANDED, []), (EXPANDED, {})):
            with self.subTest(target=target, state=state):
                self.session.rom_sha256 = target
                self.metadata["rom_sha256"] = state
                self.write_metadata()
                with self.assertRaisesRegex(ValueError, "ROM SHA-256 mismatch"):
                    self.session.load_state(self.path)
                self.session._lib.ss2_state.assert_not_called()

    def test_compatible_rom_still_requires_valid_backend_and_state_hash(self):
        for field, invalid, error in (("backend_revision", "wrong", "backend revision mismatch"),
                                      ("state_sha256", "0" * 64, "content SHA-256 mismatch"),
                                      ("format", "wrong", "metadata format")):
            with self.subTest(field=field):
                valid = self.metadata[field]
                self.metadata[field] = invalid
                self.write_metadata()
                with self.assertRaisesRegex(ValueError, error):
                    self.session.load_state(self.path)
                self.session._lib.ss2_state.assert_not_called()
                self.metadata[field] = valid

    def test_corrupt_or_unbound_compatible_state_rejected(self):
        self.write_metadata()
        self.path.write_bytes(b"altered state")
        with self.assertRaisesRegex(ValueError, "content SHA-256 mismatch"):
            self.session.load_state(self.path)
        Path(str(self.path) + ".json").unlink()
        with self.assertRaisesRegex(ValueError, "valid ROM-bound sidecar"):
            self.session.load_state(self.path)
        self.session._lib.ss2_state.assert_not_called()


if __name__ == "__main__":
    unittest.main()
