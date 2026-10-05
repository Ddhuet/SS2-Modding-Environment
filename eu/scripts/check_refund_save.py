#!/usr/bin/env python3
"""Verify a refunded normal save using a cold boot in an independent process.

The regression driver launches this helper with the expected 36-byte skill
block. This process creates its own isolated mGBA session and loads only the
normal game save; no state snapshot or memory mutation is used.
"""
from __future__ import annotations

import argparse
import json
import os
from pathlib import Path

from test_skill_refund import (
    Game, PATCH_SHA, SKILL_BLOCK_BYTES, fields, record_check,
)
from emulator import sha256


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--rom", type=Path, required=True)
    parser.add_argument("--save", type=Path, required=True)
    parser.add_argument("--expected-block-hex", required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    expected = bytes.fromhex(args.expected_block_hex)
    if len(expected) != SKILL_BLOCK_BYTES:
        raise ValueError("Expected skill block must contain exactly 36 bytes")
    if sha256(args.rom) != PATCH_SHA:
        raise ValueError("Reload ROM does not match the tested EU refund build")

    checks = []
    report = {
        "kind": "independent_process_normal_save_reload",
        "process_id": os.getpid(),
        "parent_process_id": os.getppid(),
        "rom_sha256": sha256(args.rom),
        "source_save_sha256": sha256(args.save),
        "ram_or_register_writes": False,
        "savestates_used": False,
        "checks": checks,
    }
    game = Game(args.rom, args.save, args.output.resolve(), checks)
    failure = None
    try:
        game.boot()
        game.check("normal save reload retains refund", game.live() == expected,
                   actual=fields(game.live()), expected=fields(expected))
        game.enter_status()
        game.allocate()
        game.shot("persisted-refund")
        report["result"] = "PASS"
    except BaseException as exc:
        report["result"] = "FAIL"
        report["error"] = str(exc)
        failure = exc
    finally:
        try:
            game.close()
            record_check(
                checks, game.folder.name,
                "reload leaves source ROM and save unchanged",
                sha256(args.rom) == report["rom_sha256"]
                and sha256(args.save) == report["source_save_sha256"],
            )
        except BaseException as exc:
            report["result"] = "FAIL"
            report["cleanup_error"] = str(exc)
            failure = failure or exc
        (game.folder / "reload-report.json").write_text(
            json.dumps(report, indent=2) + "\n"
        )
    print(json.dumps({"result": report["result"],
                      "process_id": report["process_id"],
                      "checks": len(checks)}, indent=2))
    if failure is not None:
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
