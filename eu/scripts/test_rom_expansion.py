#!/usr/bin/env python3
"""Append 16 MiB of FF to clean EU, then compare normal-save and old-state play.

Uses existing identity/publication tools and native mGBA. Original states load
through Session's exact-hash compatibility exception for this tested append-only
derivative. No sidecar, RAM/register or original-ROM edits.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from emulator import Session, sha256
from game_fixture import BootGame, PLAYER_PTR, record_check
from ss2tools.core import identity, load_profile, publish_new, verify

REVISION = "26b7884bc25a5933960f3cdcd98bac1ae14d42e2"
SAVE_SHA = "c33cc290d3c44b977b2dc84fedd31539d48d7739252f2086f9c39196b63f45b7"
MIB16 = 0x1000000
# Button-only route measured from the normal save's inn bedroom to the street.
EXIT_INN = [(90, "LEFT"), (30, 0), (160, "DOWN"), (30, 0),
            (175, "RIGHT"), (30, 0), (100, "UP"), (30, 0),
            (20, "LEFT"), (30, 0), (60, "UP"), (180, 0),
            (30, "LEFT"), (180, 0), (50, "UP"), (180, 0),
            (90, "RIGHT"), (180, 0)]


def dump(path, data):
    path.write_text(json.dumps(data, indent=2) + "\n")


def snapshot(game, name):
    s = game.session
    shot = game.shot(name)
    return {"frame": s.frame, "screenshot": shot, "png_sha256": sha256(shot),
            "ewram_sha256": hashlib.sha256(s.read_memory(0x02000000, 0x40000)).hexdigest(),
            "iwram_sha256": hashlib.sha256(s.read_memory(0x03000000, 0x8000)).hexdigest(),
            "pc": s.register("pc"), "player": s.read32(PLAYER_PTR),
            "actor_x_observation": s.read32(0x03003D6C)}


def walk(game):
    observations = {"inn": snapshot(game, "inn")}
    for count, keys in EXIT_INN:
        game.frames(count, keys)
    observations["town"] = snapshot(game, "town")
    # Observe right/left independently, away from the inn doorway.
    observations["before_left"] = snapshot(game, "before-left")
    game.frames(16, "LEFT")
    game.frames(1)
    observations["after_left"] = snapshot(game, "after-left")
    game.frames(16, "RIGHT")
    game.frames(1)
    observations["after_right"] = snapshot(game, "after-right")
    game.check("right and left change actor position",
               observations["after_left"]["actor_x_observation"] <
               observations["before_left"]["actor_x_observation"] and
               observations["after_right"]["actor_x_observation"] >
               observations["after_left"]["actor_x_observation"])
    for lap in range(3):
        for keys in ("UP", "RIGHT", "DOWN", "LEFT"):
            game.frames(24, keys)
            game.frames(12)
        observations[f"lap_{lap + 1}"] = snapshot(game, f"town-lap-{lap + 1}")
    game.press("START", 20)
    observations["menu"] = snapshot(game, "town-menu")
    game.press("B", 60)
    game.frames(3600)
    observations["after_minute"] = snapshot(game, "town-after-minute")
    return observations


def compare(checks, name, original, expanded):
    for key, a in original.items():
        b = expanded[key]
        # PNG encoding is deterministic in this native backend; paths differ.
        record_check(checks, name, f"baseline and expanded match at {key}",
                     {k: v for k, v in a.items() if k != "screenshot"} ==
                     {k: v for k, v in b.items() if k != "screenshot"})


def reload_worker(args):
    if sha256(args.rom) != args.expected_rom_sha:
        raise ValueError("Reload ROM hash mismatch")
    game = BootGame(args.rom, args.save, args.output, [])
    try:
        game.boot()
        actual = game.session.read_memory(game.player + 0x30, 36).hex()
        game.check("normal save retains character skill block", actual == args.expected_skills)
        game.shot("normal-save-reloaded")
        dump(game.folder / "reload-report.json", {
            "result": "PASS", "process_id": os.getpid(), "parent_process_id": os.getppid(),
            "rom_sha256": sha256(args.rom), "save_sha256": sha256(args.save),
            "savestates_used": False, "checks": game.checks})
    finally:
        game.close()


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--rom", type=Path, default=ROOT.parent / "ROMs/Shining_Soul_II_EU.gba")
    p.add_argument("--save", type=Path, default=ROOT.parent / "ROMs/saves/Shining_Soul_II.sav")
    p.add_argument("--state", type=Path,
                   default=ROOT / "runs/resistance-call-explore-001/states/boot.ss1")
    p.add_argument("--artifact", type=Path, default=ROOT / "artifacts/ss2-eu-expanded-32m-ff.gba")
    p.add_argument("--output", required=True, type=Path)
    p.add_argument("--reuse-artifact", action="store_true",
                   help="Read-only reuse after exact bytes and manifest verification")
    p.add_argument("--reload-worker", action="store_true")
    p.add_argument("--expected-rom-sha")
    p.add_argument("--expected-skills")
    args = p.parse_args()
    if args.reload_worker:
        reload_worker(args)
        return
    args.output.mkdir(parents=True, exist_ok=False)
    profile = load_profile(ROOT / "profiles/ss2-eu.json")
    source = args.rom.read_bytes()
    baseline_identity = verify(source, profile)
    if len(source) != MIB16 or sha256(args.save) != SAVE_SHA:
        raise ValueError("Unexpected normal-save fixture or original size")
    sidecar = Path(str(args.state) + ".json")
    binding = json.loads(sidecar.read_text())
    if (binding.get("format") != "ss2-mgba-state-v1" or
            binding.get("rom_sha256") != baseline_identity["sha256"] or
            binding.get("state_sha256") != sha256(args.state) or
            binding.get("backend_revision") != REVISION):
        raise ValueError("Original savestate binding failed verification")
    protected = [args.rom, args.save, args.state, sidecar]
    original_hashes = {str(x.resolve()): sha256(x) for x in protected}
    expanded = source + b"\xFF" * MIB16
    manifest = {"kind": "append_only_rom_expansion", "evidence": "static_verified",
                "source": str(args.rom.resolve()), "input_identity": baseline_identity,
                "output_identity": identity(expanded), "fill_byte": "0xFF",
                "append_offset": "0x01000000", "append_size": MIB16,
                "appended_cpu_range": ["0x09000000", "0x0A000000"],
                "ownership": "All appended bytes reserved for this empty-space test; no injections",
                "original_16m_unchanged": True, "code_or_pointer_changes": False}
    manifest_path = Path(str(args.artifact) + ".manifest.json")
    if args.reuse_artifact:
        if args.artifact.read_bytes() != expanded or json.loads(manifest_path.read_text()) != manifest:
            raise ValueError("Existing artifact or manifest does not match exact append-only build")
    else:
        publish_new({args.artifact: expanded, manifest_path:
                     (json.dumps(manifest, indent=2) + "\n").encode()}, protected=tuple(protected))
    assert args.artifact.read_bytes() == expanded
    report = {"schema_version": 1, "result": "RUNNING", "checks": [],
              "build": manifest, "source_sha256": original_hashes,
              "backend": "mGBA 0.10.5", "backend_revision": REVISION,
              "process_id": os.getpid(), "ram_or_register_writes": False,
              "observations": {}, "old_state_binding": binding}
    games = []
    try:
        # Normal save is the primary acceptance path; each ROM cold boots.
        for name, rom in (("baseline", args.rom), ("expanded", args.artifact)):
            g = BootGame(rom, args.save, args.output / name, report["checks"])
            games.append(g)
            g.boot()
            report["observations"][name] = walk(g)
            if name == "expanded":
                for address in (0x09000000, 0x09000100, 0x09FFFFFC):
                    g.check("appended ROM bus bytes read FF", g.session.read32(address) == 0xFFFFFFFF,
                            address=hex(address))
                skills = g.session.read_memory(g.player + 0x30, 36).hex()
                state = g.session.save_state("states/expanded-town.ss1")
                before = snapshot(g, "roundtrip-before")
                g.frames(60, "LEFT")
                g.session.load_state(state)
                after = snapshot(g, "roundtrip-after")
                compare(report["checks"], "expanded state roundtrip", {"town": before}, {"town": after})
                # Ordinary Save menu; polling exported save only observes writes.
                g.press("START", 15)
                g.press("DOWN", 10)
                g.press("A", 180)
                saved = False
                for i in range(30):
                    g.press("A", 120)
                    export = g.session.flush_save()
                    if sha256(export) != SAVE_SHA:
                        saved = True
                        g.frames(360)
                        g.shot("after-game-save")
                        break
                g.check("ordinary game Save writes updated data", saved, dialogue_presses=i + 1)
                g.close()
                result = subprocess.run([
                    sys.executable, str(Path(__file__).resolve()), "--reload-worker",
                    "--rom", str(rom.resolve()), "--save", str(g.session.save_path),
                    "--output", str((args.output / "normal-save-reload").resolve()),
                    "--expected-rom-sha", identity(expanded)["sha256"],
                    "--expected-skills", skills], capture_output=True, text=True, timeout=60)
                report["reload_process"] = {"exit_code": result.returncode,
                                             "stdout": result.stdout, "stderr": result.stderr}
                record_check(report["checks"], "reload", "separate process normal-save reload", result.returncode == 0)
            g.close()
        compare(report["checks"], "normal save A/B", report["observations"]["baseline"], report["observations"]["expanded"])
        # Preserve old state/metadata and use the public guarded loader for both.
        for name, rom in (("old_state_baseline", args.rom), ("old_state_expanded", args.artifact)):
            g = BootGame(rom, args.save, args.output / name, report["checks"])
            games.append(g)
            s = g.session
            loaded_frame = s.load_state(args.state.resolve())
            if name == "old_state_expanded":
                report["harness_old_state_load"] = True
                g.check("public harness accepts unchanged original state on exact padded ROM",
                        loaded_frame == binding["frame"])
            g.player = s.read32(PLAYER_PTR)
            g.check("old state restores original frame", s.frame == binding["frame"])
            report["observations"][name] = walk(g)
            g.close()
        compare(report["checks"], "old state A/B", report["observations"]["old_state_baseline"], report["observations"]["old_state_expanded"])
        report["result"] = "PASS"
        report["evidence"] = "runtime_verified for the recorded normal-save/town/state scenarios"
    except BaseException as exc:
        report.update(result="FAIL", error=str(exc))
        raise
    finally:
        for g in games:
            g.close()
        unchanged = all(sha256(Path(path)) == digest for path, digest in original_hashes.items())
        report["source_inputs_unchanged"] = unchanged
        if not unchanged:
            report.update(result="FAIL", source_error="Source input changed")
        dump(args.output / "report.json", report)
        print(json.dumps({"result": report["result"], "checks": len(report["checks"]),
                          "artifact": str(args.artifact), "report": str(args.output / "report.json")}, indent=2))
        if not unchanged:
            raise AssertionError("Source input changed")


if __name__ == "__main__":
    main()
