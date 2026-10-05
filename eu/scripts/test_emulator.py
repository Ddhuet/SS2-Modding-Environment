#!/usr/bin/env python3
"""Infrastructure checks; passing does not establish any game feature behavior."""
from pathlib import Path
import argparse
import hashlib
import json
import os
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from emulator import KEYS, Session, sha256

def digest(data): return hashlib.sha256(data).hexdigest()

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--rom", required=True, type=Path)
    parser.add_argument("--save", required=True, type=Path)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    root = (args.output or Path(tempfile.mkdtemp(prefix="ss2-emulator-test-"))).resolve()
    root.mkdir(parents=True, exist_ok=True)
    sources = {str(p.resolve()): sha256(p) for p in (args.rom, args.save)}
    checks = []
    # Existing run directories are rejected before any emulator file is opened.
    for kind in ("symlink", "hardlink"):
        hostile = root / ("existing-" + kind)
        hostile.mkdir()
        for name, source in (("session.json", args.save), ("save-export.sav", args.rom)):
            dest = hostile / name
            if kind == "symlink": dest.symlink_to(source.resolve())
            else: os.link(source, dest)
        try: Session(args.rom, args.save, hostile)
        except FileExistsError: pass
        else: raise AssertionError("Preexisting run directory was accepted")
        finally:
            (hostile / "session.json").unlink(missing_ok=True)
            (hostile / "save-export.sav").unlink(missing_ok=True)
    assert all(sha256(path) == expected for path, expected in sources.items())
    checks += ["preexisting_symlink_hardlink_run_dirs_rejected"]
    for kind in ("symlink", "hardlink"):
        with Session(args.rom, args.save, root / ("live-alias-" + kind)) as isolated:
            export_alias = isolated.run_dir / "save-export.sav"
            if kind == "symlink": export_alias.symlink_to(args.save.resolve())
            else: os.link(args.save, export_alias)
            try: isolated.flush_save()
            except ValueError: pass
            else: raise AssertionError("Export overwrote a protected input alias")
            export_alias.unlink()
            manifest_alias = isolated.run_dir / "session.json"
            manifest_alias.unlink()
            if kind == "symlink": manifest_alias.symlink_to(args.save.resolve())
            else: os.link(args.save, manifest_alias)
            try: isolated._write_manifest()
            except ValueError: pass
            else: raise AssertionError("Manifest overwrote a protected input alias")
            manifest_alias.unlink()
    checks += ["live_manifest_export_source_aliases_rejected"]
    with Session(args.rom, args.save, root / "first") as s:
        assert s.frame == 0
        assert s.read_memory(0x08000000, 0xC0) == args.rom.read_bytes()[:0xC0]
        checks += ["paused_startup", "rom_bus_read"]
        s.run_frames(180)
        # KEYINPUT is active-low; deterministic held mask matches GBA wiring.
        s.run_frames(0, "A+L+START")
        assert s.read16(0x04000130) & 0x3FF == (0x3FF ^ (KEYS["A"] | KEYS["L"] | KEYS["START"]))
        s.run_frames(0)
        assert s.read16(0x04000130) & 0x3FF == 0x3FF
        checks += ["button_wiring"]
        assert s.frame == 180
        screenshot = s.screenshot("screenshots/check.png")
        assert screenshot.read_bytes().startswith(b"\x89PNG\r\n\x1a\n")
        assert screenshot.read_bytes()[16:24] == (240).to_bytes(4,"big") + (160).to_bytes(4,"big")
        checks += ["exact_frame_count", "png_240x160"]
        state = s.save_state()
        before = s.read_memory(0x02000000, 0x40000)
        before_iwram = s.read_memory(0x03000000, 0x8000)
        before_pc = s.register("pc")
        s.write32(0x0203FFFC, s.read32(0x0203FFFC) ^ 0x12345678)
        s.run_frames(5, "START")
        assert s.frame == 185
        s.load_state(state)
        assert s.frame == 180
        assert s.read_memory(0x02000000, 0x40000) == before
        assert s.read_memory(0x03000000, 0x8000) == before_iwram
        assert s.register("pc") == before_pc
        assert s.screenshot("screenshots/restored.png").read_bytes() == screenshot.read_bytes()
        checks += ["savestate_restores_frame_cpu_ram_pixels"]
        s.run_frames(20, "START")
        replay = s.read_memory(0x02000000, 0x40000)
        s.load_state(state)
        s.run_frames(20, "START")
        assert s.read_memory(0x02000000, 0x40000) == replay
        checks += ["deterministic_state_replay"]
        s.load_state(state)
        exported = s.flush_save()
        exported_sha = sha256(exported)
        for path in ("../escape.png", args.rom.resolve()):
            try: s.screenshot(path)
            except ValueError: pass
            else: raise AssertionError("Output escaped isolated run")
        try: s.write32(0x08000000, 0)
        except ValueError: pass
        else: raise AssertionError("ROM write was allowed")
        checks += ["output_and_ram_write_limits"]
        for kind in ("symlink", "hardlink"):
            alias = s.run_dir / ("source-alias-" + kind + ".png")
            if kind == "symlink": alias.symlink_to(args.save.resolve())
            else: os.link(args.save, alias)
            try: s.screenshot(alias)
            except ValueError: pass
            else: raise AssertionError("Protected input alias accepted")
            finally: alias.unlink(missing_ok=True)
        checks += ["protected_source_alias_outputs_rejected"]
        # A different ROM identity is rejected before any native state load.
        metadata_path = Path(str(state) + ".json")
        original_metadata = metadata_path.read_text()
        metadata = json.loads(original_metadata)
        metadata["rom_sha256"] = "0" * 64
        metadata_path.write_text(json.dumps(metadata))
        try: s.load_state(state)
        except ValueError: pass
        else: raise AssertionError("Mismatched-ROM state accepted")
        assert s.frame == 180 and s.read_memory(0x02000000, 0x40000) == before
        metadata_path.write_text(original_metadata)
        state_bytes = state.read_bytes()
        state.write_bytes(state_bytes[:-1] + bytes([state_bytes[-1] ^ 1]))
        try: s.load_state(state)
        except ValueError: pass
        else: raise AssertionError("Corrupt state accepted")
        assert s.frame == 180 and s.read_memory(0x02000000, 0x40000) == before
        state.write_bytes(state_bytes)
        metadata_path.unlink()
        try: s.load_state(state)
        except ValueError: pass
        else: raise AssertionError("Unbound state accepted")
        metadata_path.write_text(original_metadata)
        checks += ["mismatched_corrupt_unbound_states_rejected_without_mutation"]
        first_snapshot = {"ewram": digest(before), "iwram": digest(before_iwram),
                          "pc": before_pc, "screenshot": sha256(screenshot)}
    assert sha256(s.save_path) == exported_sha
    checks += ["close_flushes_save_copy"]
    alternate_rom = root / "different.gba"
    alternate_bytes = bytearray(args.rom.read_bytes())
    alternate_bytes[-1] ^= 1
    alternate_rom.write_bytes(alternate_bytes)
    with Session(alternate_rom, args.save, root / "different-rom") as other:
        before_other = other.read_memory(0x02000000, 0x40000)
        try: other.load_state(state)
        except ValueError: pass
        else: raise AssertionError("State from a different ROM was loaded")
        assert other.frame == 0 and other.read_memory(0x02000000, 0x40000) == before_other
    checks += ["real_cross_rom_state_rejected_without_mutation"]
    # Reload the durable isolated save in a fresh core and repeat the boot path.
    with Session(args.rom, s.save_path, root / "reload") as second:
        second.run_frames(180)
        second_shot = second.screenshot("screenshots/reload.png")
        assert digest(second.read_memory(0x02000000, 0x40000)) == first_snapshot["ewram"]
        assert digest(second.read_memory(0x03000000, 0x8000)) == first_snapshot["iwram"]
        assert second.register("pc") == first_snapshot["pc"]
        assert sha256(second_shot) == first_snapshot["screenshot"]
    checks += ["fresh_core_reload_deterministic"]
    assert all(sha256(path) == expected for path, expected in sources.items())
    checks += ["source_rom_save_hashes_unchanged"]
    report = {"status": "passed", "scope": "emulator infrastructure only", "checks": checks,
              "source_sha256": sources, "snapshot": first_snapshot, "run_dir": str(root)}
    (root / "report.json").write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps(report, indent=2))

if __name__ == "__main__": main()
