#!/usr/bin/env python3
"""Fetch the pinned mGBA source and build the project-local native adapter."""
from pathlib import Path
import argparse
import json
import os
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]
REVISION = "26b7884bc25a5933960f3cdcd98bac1ae14d42e2"
URL = "https://github.com/mgba-emu/mgba.git"

def run(*args):
    subprocess.run(args, check=True)

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--jobs", type=int, default=min(4, os.cpu_count() or 1))
    parser.add_argument("--offline", action="store_true", help="Never fetch source")
    args = parser.parse_args()
    if args.jobs < 1: parser.error("jobs must be positive")
    for tool in ("git", "cmake", "cc"):
        if not shutil.which(tool): raise SystemExit(f"Missing build tool: {tool}")
    source = ROOT / "emulator/vendor/mgba"
    if not (source / "CMakeLists.txt").exists():
        if args.offline: raise SystemExit("Pinned source absent in offline mode")
        source.parent.mkdir(parents=True, exist_ok=True)
        run("git", "clone", "--depth", "1", "--branch", "0.10.5", URL, str(source))
    actual = subprocess.check_output(["git", "-C", str(source), "rev-parse", "HEAD"], text=True).strip()
    if actual != REVISION: raise SystemExit(f"Refusing unpinned mGBA revision: {actual}")
    dirty = subprocess.check_output(["git", "-C", str(source), "status", "--porcelain"], text=True)
    if dirty.strip(): raise SystemExit("Refusing modified mGBA source; restore or use a fresh vendor directory")
    build = ROOT / "emulator/build"
    command = ["cmake", "-S", str(ROOT / "emulator"), "-B", str(build),
               "-DCMAKE_BUILD_TYPE=Release", "-DCMAKE_POLICY_VERSION_MINIMUM=3.5"]
    if shutil.which("ninja") and not (build / "CMakeCache.txt").exists():
        command += ["-G", "Ninja"]
    run(*command)
    run("cmake", "--build", str(build), "-j", str(args.jobs))
    provenance = {"source_url": URL, "revision": REVISION, "release": "0.10.5",
                  "configure": command, "compiler": subprocess.check_output(["cc", "--version"], text=True).splitlines()[0]}
    (build / "provenance.json").write_text(json.dumps(provenance, indent=2) + "\n")
    print(f"Built native harness in {build}")

if __name__ == "__main__": main()
