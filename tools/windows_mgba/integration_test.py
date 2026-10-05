"""End-to-end Windows test for isolated Lua and GDB mGBA modes."""

from __future__ import annotations

import argparse
import hashlib
import json
import shutil
import socket
import subprocess
import sys
import tempfile
import time
from pathlib import Path

from mgba_client import send_commands


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(block)
    return h.hexdigest()


def run(command: list[str]) -> None:
    subprocess.run(command, check=True, stdout=subprocess.DEVNULL)


def remove_test_tree(path: Path) -> None:
    """Remove a test runtime, allowing Windows a moment to release handles."""
    for attempt in range(20):
        try:
            shutil.rmtree(path)
            return
        except FileNotFoundError:
            return
        except PermissionError:
            if attempt == 19:
                raise
            time.sleep(0.05)


def gdb_packet(payload: bytes) -> bytes:
    return b"$" + payload + b"#" + f"{sum(payload) & 0xFF:02x}".encode("ascii")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--rom", type=Path, required=True)
    parser.add_argument("--save", type=Path, required=True)
    args = parser.parse_args()
    rom = args.rom.resolve(strict=True)
    save = args.save.resolve(strict=True)
    before = {"rom": digest(rom), "save": digest(save)}
    here = Path(__file__).resolve().parent
    manager = here / "windows_mgba_service.py"
    python = sys.executable
    # The source ROM/SAV paths exercise Chinese names. The isolated launch path
    # intentionally stays ASCII because the MinGW headless argv layer is not
    # Unicode-safe; spaces are still exercised here.
    test_base = Path(tempfile.mkdtemp(prefix="mGBA Windows Test "))
    runtime = test_base / "path with spaces" / "runtime"
    runtime.mkdir(parents=True)
    # tempfile may return an 8.3 short path when TEMP/TMP uses one.  Resolve
    # only after creating the directory so Lua and Python receive one canonical
    # spelling for DUMPBLOCK's strict analysis-directory boundary check.
    test_base = test_base.resolve(strict=True)
    runtime = runtime.resolve(strict=True)
    common = [python, str(manager), "--runtime-root", str(runtime)]
    started: list[str] = []
    checks: dict[str, object] = {"runtime": str(runtime)}
    try:
        run(common + ["start", "--instance", "lua", "--rom", str(rom), "--save", str(save), "--paused"])
        started.append("lua")
        session_path = runtime / "lua" / "session.json"
        session = json.loads(session_path.read_text(encoding="utf-8"))
        # session.json is the manager's authoritative, resolved instance path.
        # Derive every Lua output from it rather than reconstructing a possibly
        # short-path spelling from TEMP/TMP.
        lua_instance = Path(session["rom_copy"]).resolve(strict=True).parent.parent
        shot = lua_instance / "screenshots" / "smoke.png"
        state = lua_instance / "savestates" / "smoke.ss1"
        dump = lua_instance / "analysis" / "header.bin"
        results = send_commands(
            session_path,
            [
                "PING", "FRAMES", "READ16 0x0807FF84", "READ32 0x0203FFF0",
                "READBLOCK 0x08000000 16",
                f"DUMPBLOCK 0x08000000 16 {str(dump).replace(chr(92), '/')}",
            ],
            5.0,
        )
        if results[0] != "PONG" or results[1] != "OK 0" or not results[5].startswith("OK "):
            raise RuntimeError(f"paused Lua/read-block check failed: {results}")
        if not dump.is_file() or dump.stat().st_size != 16:
            raise RuntimeError(f"DUMPBLOCK output missing or invalid: response={results[5]!r}, path={dump}")
        run(common + ["frame", "--instance", "lua", "1"])
        after_frame = send_commands(session_path, ["FRAMES", f"SHOT {shot}", f"SAVESTATE {state}"], 10.0)
        if after_frame[0] != "OK 1" or not shot.read_bytes().startswith(b"\x89PNG\r\n\x1a\n"):
            raise RuntimeError(f"single-frame or screenshot failed: {after_frame}")
        if state.stat().st_size == 0:
            raise RuntimeError("savestate is empty")
        original = results[3].split()[-1]
        echoed = send_commands(session_path, [f"WRITE32 0x0203FFF0 0x{original}", "READ32 0x0203FFF0"], 3.0)
        if echoed[-1].split()[-1] != original:
            raise RuntimeError("same-value RAM write/read check failed")
        with socket.create_connection((session["host"], int(session["lua_port"])), 2.0) as sock:
            sock.sendall(b"PING\n")
            if sock.recv(256).decode("ascii", errors="replace").strip() != "ERR AUTH":
                raise RuntimeError("unauthenticated Lua connection was not rejected")
        trace_start = send_commands(session_path, ["TRACE_PC_START 0x080001F8,0x08000248 10"], 3.0)[0]
        run(common + ["resume", "--instance", "lua"])
        time.sleep(0.25)
        run(common + ["pause", "--instance", "lua"])
        trace_end = send_commands(session_path, ["TRACE_PC_RESULT", "TRACE_PC_STOP"], 3.0)
        if not trace_start.startswith("OK path=") or not (lua_instance / "analysis" / "pc-trace.jsonl").exists():
            raise RuntimeError(f"PC trace check failed: {trace_start}, {trace_end}")
        checks["lua"] = {
            "paused_responses": results,
            "single_frame_responses": after_frame,
            "trace": [trace_start, *trace_end],
            "screenshot_bytes": shot.stat().st_size,
            "state_bytes": state.stat().st_size,
        }

        run(common + ["start", "--instance", "gdb", "--rom", str(rom), "--save", str(save), "--mode", "gdb"])
        started.append("gdb")
        gdb_session = json.loads((runtime / "gdb" / "session.json").read_text(encoding="utf-8"))
        with socket.create_connection((gdb_session["host"], int(gdb_session["gdb_port"])), 3.0) as sock:
            sock.settimeout(3.0)
            sock.sendall(gdb_packet(b"?"))
            response = bytearray()
            while b"#" not in response:
                response.extend(sock.recv(4096))
        if b"$S02#" not in response:
            raise RuntimeError(f"invalid GDB stop reply: {bytes(response)!r}")
        checks["gdb"] = bytes(response).decode("ascii", errors="replace")
    finally:
        for instance in reversed(started):
            subprocess.run(common + ["stop", "--instance", instance], stdout=subprocess.DEVNULL)
        remove_test_tree(test_base)
    after = {"rom": digest(rom), "save": digest(save)}
    if after != before:
        raise RuntimeError(f"source ROM/SAV changed: before={before}, after={after}")
    checks["source_hashes_unchanged"] = after
    print(json.dumps(checks, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
