#!/usr/bin/env python3
"""Cold-boot, button-driven EU skill-refund regression using the Paige save.

No RAM/register writes or cross-ROM savestates. Isolated runs, screenshots,
button traces, and JSON assertions are retained for review.
"""
from __future__ import annotations

import argparse
import json
import os
from pathlib import Path
import struct
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from emulator import sha256  # noqa: E402
from game_fixture import BootGame, LANGUAGE_BUTTONS, record_check  # noqa: E402

BASE_SHA = "e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2"
PATCH_SHA = "6148261c3430879cd26a3969adda853407bb98477cc8b8d0b6d4d8389c8b17c7"
SAVE_SHA = "c33cc290d3c44b977b2dc84fedd31539d48d7739252f2086f9c39196b63f45b7"
PLAYER_PTR = 0x030034E0
MENU_PTR = 0x03006440
SKILL_BLOCK_BYTES = 36


def fields(block: bytes) -> dict:
    """Decode the pool/header and eight (level, partial progress) pairs."""
    halfwords = struct.unpack("<18H", block)
    return {
        "pool": halfwords[0],
        "header": halfwords[1],
        "skills": [[halfwords[2 + 2 * row], halfwords[3 + 2 * row]]
                   for row in range(8)],
    }


def total(block: bytes) -> int:
    """Account for the increasing point cost of each completed skill level."""
    decoded = fields(block)
    return decoded["pool"] + sum(
        level * (level + 1) // 2 + progress
        for level, progress in decoded["skills"]
    )


class Game(BootGame):
    """Skill menu operations layered on the shared cold boot fixture."""

    def live(self) -> bytes:
        return self.session.read_memory(self.player + 0x30, SKILL_BLOCK_BYTES)

    def state(self) -> int | None:
        menu = self.session.read32(MENU_PTR)
        return self.session.read32(menu + 4) if menu else None

    def enter_status(self) -> None:
        self.press("START", 15)
        self.press("LEFT", 10)
        self.press("A", 120)
        self.check("status overview", self.state() == 0)

    def allocate(self, from_overview: bool = False) -> None:
        if not from_overview:
            self.press("RIGHT")
        self.press("A")
        self.check("skill allocation entered", self.state() == 3)

        # The menu task has adjacent snapshot/edit blocks on its allocated
        # stack. SP during BIOS wait belongs to the scheduler, so discover the
        # pair from its full live preimage and refuse ambiguous matches.
        block = self.live()
        ram = self.session.read_memory(0x02000000, 0x40000)
        pattern = block + block
        hits = []
        start = 0
        while True:
            offset = ram.find(pattern, start)
            if offset < 0:
                break
            if offset % 2 == 0:
                hits.append(0x02000000 + offset)
            start = offset + 1
        self.check(
            "unique menu snapshot/edit pair",
            len(hits) == 1,
            hits=[hex(address) for address in hits],
        )
        self.edit = hits[0] + SKILL_BLOCK_BYTES
        self.check("edit equals live on entry", self.temp() == block)

    def temp(self) -> bytes:
        return self.session.read_memory(self.edit, SKILL_BLOCK_BYTES)

    def select(self, row: int) -> None:
        menu = self.session.read32(MENU_PTR)
        current = self.session.read32(menu + 12)
        # Selection does not wrap at the ends: use the direct Up/Down distance.
        for _ in range(abs(row - current)):
            self.press("DOWN" if row > current else "UP", 20)
        self.check("selected skill", self.session.read32(menu + 12) == row,
                   row=row)

    def point(self, key: str) -> bytes:
        old = self.temp()
        # Allow the menu's input repeat/debounce cycle to settle between edits.
        self.press(key, 60)
        new = self.temp()
        self.check("point conservation", total(old) == total(new),
                   key=key, total=total(new))
        return new


def check_save_in_subprocess(patched: Path, saved_path: Path, expected: bytes,
                             output: Path, checks: list[dict]) -> dict:
    """Reload only a normal .sav in a separate process with a fresh mGBA core."""
    command = [
        sys.executable,
        str(ROOT / "scripts" / "check_refund_save.py"),
        "--rom", str(patched.resolve()),
        "--save", str(saved_path.resolve()),
        "--expected-block-hex", expected.hex(),
        "--output", str(output / "new-process-reload"),
    ]
    completed = subprocess.run(command, capture_output=True, text=True,
                               timeout=120, check=False)
    (output / "reload-subprocess.stdout.txt").write_text(completed.stdout)
    (output / "reload-subprocess.stderr.txt").write_text(completed.stderr)
    record_check(
        checks, "new-process-reload", "normal save reload subprocess succeeded",
        completed.returncode == 0, returncode=completed.returncode,
    )
    child_report = json.loads(
        (output / "new-process-reload" / "reload-report.json").read_text()
    )
    checks.extend(child_report["checks"])
    record_check(
        checks, "new-process-reload", "reload used a separate Python process",
        child_report["process_id"] != os.getpid(),
        parent_process_id=os.getpid(), child_process_id=child_report["process_id"],
    )
    return child_report


def run_regression(args, checks: list[dict], games: list[Game], report: dict) -> None:
    def game(name: str, rom: Path = args.patched, save: Path = args.save,
             language: str = "English") -> Game:
        instance = Game(rom, save, args.output / name, checks, language)
        games.append(instance)
        instance.boot()
        return instance

    baseline = game("baseline", rom=args.baseline)
    initial = baseline.live()
    report["initial_skills"] = fields(initial)
    baseline.enter_status()
    baseline.allocate()
    baseline.select(1)
    baseline.shot("before-left")
    before = baseline.temp()
    baseline.point("LEFT")
    baseline.check("original cannot refund earlier Flail investment",
                   baseline.temp() == before)
    baseline.press("A")
    baseline.check("baseline live unchanged", baseline.live() == initial)
    baseline.close()

    patched = game("refund")
    patched.check("equivalent independent cold boot", patched.live() == initial)
    patched.enter_status()
    patched.allocate()
    patched.select(1)
    patched.shot("before-refund")
    changed = patched.point("LEFT")
    decoded = fields(changed)
    patched.shot("after-refund")
    patched.check(
        "refund one previously invested point",
        decoded["pool"] == 1 and decoded["skills"][1] == [1, 1],
        actual=decoded,
    )
    patched.check("uncommitted live block unchanged", patched.live() == initial)
    patched.point("RIGHT")
    patched.check("reallocation exactly restores editable block",
                  patched.temp() == initial)
    patched.point("LEFT")
    patched.press("B")
    patched.check("B cancels live changes", patched.live() == initial)
    patched.check("B returns to overview", patched.state() == 1)

    patched.allocate(from_overview=True)
    patched.select(1)
    for _ in range(3):
        patched.point("LEFT")
    zero = patched.temp()
    decoded = fields(zero)
    patched.check("refund skill to zero",
                  decoded["pool"] == 3 and decoded["skills"][1] == [0, 0],
                  actual=decoded)
    patched.point("LEFT")
    patched.check("zero skill refund is no-op", patched.temp() == zero)
    for _ in range(3):
        patched.point("RIGHT")
    patched.check("three re-spends restore original", patched.temp() == initial)

    # Exercise all eight skill rows, including empty rows and level boundaries.
    for row in range(8):
        patched.select(row)
        for _ in range(29):
            if fields(patched.temp())["skills"][row] == [0, 0]:
                break
            patched.point("LEFT")
        patched.check("row fully refunded",
                      fields(patched.temp())["skills"][row] == [0, 0], row=row)
        before = patched.temp()
        patched.point("LEFT")
        patched.check("empty row no-op", patched.temp() == before, row=row)
    decoded = fields(patched.temp())
    patched.shot("all-refunded")
    patched.check(
        "all invested points refundable",
        decoded["pool"] == total(initial)
        and all(skill == [0, 0] for skill in decoded["skills"]),
        actual=decoded,
    )

    for row, (level, progress) in enumerate(fields(initial)["skills"]):
        patched.select(row)
        for _ in range(level * (level + 1) // 2 + progress):
            patched.point("RIGHT")
    patched.check("full reallocation restores original", patched.temp() == initial)
    patched.select(1)
    changed = patched.point("LEFT")
    patched.press("A")
    patched.check("A commits exact edited block", patched.live() == changed)
    patched.allocate(from_overview=True)
    patched.check("committed data survives reopening", patched.temp() == changed)
    patched.press("B")
    patched.press("B", 120)
    report["committed_skills"] = fields(changed)

    # Save through the ordinary game menu, then close the core before launching
    # the independent reload process. No emulator savestate is involved.
    patched.press("START", 15)
    patched.press("DOWN", 10)
    patched.press("A", 180)
    original_save = args.save.read_bytes()
    saved = False
    for dialogue_index in range(30):
        patched.press("A", 120)
        exported = patched.session.flush_save()
        if exported.read_bytes() != original_save:
            patched.frames(360)
            patched.shot("after-game-save")
            saved = True
            break
    patched.check("game wrote changed normal save", saved,
                  dialogue_presses=dialogue_index + 1)
    saved_path = patched.session.save_path
    patched.close()
    report["reload_subprocess"] = check_save_in_subprocess(
        args.patched, saved_path, changed, args.output, checks
    )

    if args.languages:
        for language in ("German", "French", "Italian", "Spanish"):
            localized = game(language.lower(), language=language)
            localized.check("language uses same saved skills",
                            localized.live() == initial)
            localized.enter_status()
            localized.allocate()
            localized.select(1)
            localized.point("LEFT")
            localized.shot("refund")
            localized.check("language refund equivalent",
                            localized.temp() == changed, language=language)
            localized.press("A")
            localized.check("language commit", localized.live() == changed)
            localized.close()


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--baseline", type=Path,
                        default=ROOT / "inputs" / "ss2-eu.gba")
    parser.add_argument("--patched", type=Path,
                        default=ROOT / "artifacts" / "ss2-eu-skill-refund.gba")
    parser.add_argument("--save", type=Path,
                        default=ROOT / "inputs" / "ss2-eu.sav")
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--languages", action="store_true")
    args = parser.parse_args()
    args.output = args.output.resolve()
    args.output.mkdir(parents=True, exist_ok=False)
    fixtures = ((args.baseline, BASE_SHA), (args.patched, PATCH_SHA),
                (args.save, SAVE_SHA))
    checks = []
    games = []
    report = {
        "fixture_sha256": SAVE_SHA,
        "baseline_sha256": BASE_SHA,
        "patched_sha256": PATCH_SHA,
        "evidence": "button-driven runtime observations",
        "ram_or_register_writes": False,
        "cross_rom_savestates": False,
        "process_id": os.getpid(),
        "checks": checks,
    }
    failure = None
    try:
        for path, expected in fixtures:
            if sha256(path) != expected:
                raise ValueError(f"Unexpected fixture identity: {path}")
        run_regression(args, checks, games, report)
        report["result"] = "PASS"
    except BaseException as exc:
        report["result"] = "FAIL"
        report["error"] = str(exc)
        failure = exc
    finally:
        for instance in games:
            try:
                instance.close()
            except BaseException as exc:
                report["result"] = "FAIL"
                report.setdefault("cleanup_errors", []).append(str(exc))
                failure = failure or exc
        try:
            actual_hashes = {str(path): sha256(path) for path, _ in fixtures}
            unchanged = all(actual_hashes[str(path)] == expected
                            for path, expected in fixtures)
            report["source_inputs_unchanged"] = unchanged
            record_check(checks, "input-preservation",
                         "source ROMs and save hashes remain unchanged", unchanged,
                         actual_sha256=actual_hashes)
        except BaseException as exc:
            report["source_inputs_unchanged"] = False
            report["result"] = "FAIL"
            report["input_preservation_error"] = str(exc)
            failure = failure or exc
        report["assertion_count"] = len(checks)
        report["passed_assertions"] = sum(check["passed"] for check in checks)
        (args.output / "report.json").write_text(
            json.dumps(report, indent=2) + "\n"
        )
    print(json.dumps({
        "result": report["result"],
        "checks": len(checks),
        "report": str(args.output / "report.json"),
    }, indent=2))
    if failure is not None:
        print(str(failure), file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
