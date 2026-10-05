#!/usr/bin/env python3
"""Reconstruct the ignored Chinese research snapshot from the repository root."""
from pathlib import Path
import hashlib
import shutil

ROOT = Path(__file__).resolve().parents[1]
SOURCES = (
    "analysis", "docs", "reference_data", "patches",
    "Chinese_and_US_ROM_differences.md", "EU_MODDING_ASSESSMENT.md",
)


def digest(path):
    return hashlib.sha256(path.read_bytes()).digest()


def main():
    parent = ROOT.parent
    destination = ROOT / "reference/upstream"
    copies = []
    for name in SOURCES:
        source = parent / name
        if not source.exists():
            raise SystemExit(f"Missing reference source: {source}; clone the whole repository.")
        files = sorted(source.rglob("*")) if source.is_dir() else [source]
        for path in files:
            if not path.is_file():
                continue
            relative = path.relative_to(parent)
            target = destination / relative
            if path.is_symlink() or target.is_symlink():
                raise SystemExit(f"Refusing symlink: {relative}")
            if target.exists():
                if not target.is_file() or digest(path) != digest(target):
                    raise SystemExit(f"Existing snapshot differs: {target}; preserve and review it first.")
            else:
                copies.append((path, target))
    for source, target in copies:
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, target)
    print(f"Reference snapshot ready: {destination} ({len(copies)} files copied)")


if __name__ == "__main__":
    main()
