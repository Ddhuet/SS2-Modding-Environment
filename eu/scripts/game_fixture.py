"""Small EU save fixture helpers; no game state mutation beyond recorded keys."""
from __future__ import annotations
import json
from pathlib import Path
from emulator import Session

PLAYER_PTR = 0x030034E0
LANGUAGE_BUTTONS = {
    "English": [], "German": ["RIGHT"], "French": ["RIGHT", "RIGHT"],
    "Italian": ["DOWN"], "Spanish": ["DOWN", "RIGHT"],
}

def record_check(checks: list[dict], scenario: str, name: str,
                 condition: bool, **details) -> None:
    row = {
        "scenario": scenario,
        "check": name,
        "passed": bool(condition),
        **details,
    }
    checks.append(row)
    if not condition:
        raise AssertionError(json.dumps(row))


class BootGame:
    """Shared cold boot and recorded button input from the exact Paige save."""

    def __init__(self, rom: Path, save: Path, folder: Path,
                 checks: list[dict], language: str = "English"):
        self.session = Session(rom, save=save, run_dir=folder)
        self.folder = folder
        self.checks = checks
        self.commands = []
        self.language = language
        self.edit = None
        self.player = None
        self.closed = False

    def check(self, name: str, condition: bool, **details) -> None:
        try:
            record_check(self.checks, self.folder.name, name, condition, **details)
        except AssertionError:
            self.shot("failure")
            raise

    def frames(self, count: int, keys=0) -> None:
        self.commands.append({"frames": count, "keys": keys})
        self.session.run_frames(count, keys)

    def press(self, key: str, wait: int = 20) -> None:
        self.frames(1, key)
        self.frames(wait)

    def shot(self, name: str) -> str:
        return str(self.session.screenshot(f"screenshots/{name}.png"))

    def boot(self) -> None:
        self.frames(540)
        for key in LANGUAGE_BUTTONS[self.language]:
            self.press(key, 5)
        self.shot("language")
        self.press("A", 180)
        self.press("START", 90)
        for wait in (90, 90, 180):
            self.press("A", wait)
        self.player = self.session.read32(PLAYER_PTR)
        self.check(
            "loaded player pointer",
            0x02000000 <= self.player <= 0x0203FF00,
            player=hex(self.player),
        )
        self.shot("loaded")

    def close(self) -> None:
        if self.closed:
            return
        try:
            self.session.close()
        finally:
            self.closed = True
            (self.folder / "buttons.json").write_text(
                json.dumps(self.commands, indent=2) + "\n"
            )

