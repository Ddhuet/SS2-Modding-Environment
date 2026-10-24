#!/usr/bin/env python3
"""Run a reproducible native mGBA command sequence, retaining its artifacts."""
from pathlib import Path
import argparse
import json
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from emulator import Session

def number(value): return int(value, 0) if isinstance(value, str) else value

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--rom", required=True, type=Path)
    parser.add_argument("--save", type=Path)
    parser.add_argument("--run-dir", type=Path)
    parser.add_argument("--commands", type=Path, help="JSON list of command objects")
    parser.add_argument("--frames", type=int, default=120, help="Frames for default boot command")
    args = parser.parse_args()
    commands = json.loads(args.commands.read_text()) if args.commands else [
        {"op": "frames", "count": args.frames}, {"op": "screenshot", "path": "screenshots/boot.png"}]
    outputs = []
    with Session(args.rom, save=args.save, run_dir=args.run_dir) as s:
        for command in commands:
            op = command["op"]
            if op == "frames": result = s.run_frames(command["count"], command.get("keys", 0))
            elif op == "press": result = s.press(command["keys"], command.get("frames", 1), command.get("release_frames", 1))
            elif op == "read": result = s.read(number(command["address"]), command.get("width", 1))
            elif op == "read_memory": result = s.read_memory(number(command["address"]), number(command["size"])).hex()
            elif op == "write":
                result = s.write(number(command["address"]), number(command["value"]), command.get("width", 1))
            elif op == "register": result = s.register(command["name"])
            elif op == "write_register": result = s.write_register(command["name"], number(command["value"]))
            elif op == "step": result = s.step(command.get("count", 1))
            elif op == "screenshot": result = str(s.screenshot(command["path"]))
            elif op == "save_state": result = str(s.save_state(command["path"]))
            elif op == "load_state": result = s.load_state(command["path"])
            elif op == "export_save": result = str(s.flush_save())
            else: raise ValueError(f"Unknown command: {op}")
            outputs.append({"command": command, "result": result, "frame": s.frame})
        result = {"run_dir": str(s.run_dir), "save_path": str(s.save_path), "results": outputs}
        s._write_json("commands.json", result)
    print(json.dumps(result, indent=2))

if __name__ == "__main__": main()
