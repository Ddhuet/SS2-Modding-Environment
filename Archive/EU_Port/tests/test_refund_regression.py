"""The runtime regression must fail when a source changes after execution."""
from __future__ import annotations

import contextlib
import io
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
import test_skill_refund as regression  # noqa: E402


class InputPreservationTests(unittest.TestCase):
    def test_post_run_source_hash_mismatch_changes_pass_to_failure(self):
        # Stub the game workload, then simulate one changed input at postflight.
        # This exercises the command's exit status and persisted evidence rather
        # than touching an actual supplied ROM or save.
        fixture_hashes = [regression.BASE_SHA, regression.PATCH_SHA,
                          regression.SAVE_SHA]
        postflight_hashes = [regression.BASE_SHA, regression.PATCH_SHA, "0" * 64]
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory) / "run"
            with (
                patch.object(sys, "argv", ["regression", "--output", str(output)]),
                patch.object(regression, "sha256",
                             side_effect=fixture_hashes + postflight_hashes),
                patch.object(regression, "run_regression"),
                contextlib.redirect_stdout(io.StringIO()),
                contextlib.redirect_stderr(io.StringIO()),
            ):
                status = regression.main()
            report = json.loads((output / "report.json").read_text())
        self.assertEqual(status, 1)
        self.assertEqual(report["result"], "FAIL")
        self.assertFalse(report["source_inputs_unchanged"])
        self.assertFalse(report["checks"][-1]["passed"])
        self.assertEqual(report["passed_assertions"], 0)


if __name__ == "__main__":
    unittest.main()
