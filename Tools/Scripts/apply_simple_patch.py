"""Safely apply a small declarative byte patch to the unique baseline ROM."""

from __future__ import annotations

import argparse
import json
import os
import shutil
import sys
from pathlib import Path
from typing import Optional

from rom_common import (
    EXPECTED_MD5,
    EXPECTED_SHA256,
    EXPECTED_SIZE,
    ROM_BASE_ADDRESS,
    assert_baseline,
    file_identity,
    normalized_path,
    same_path,
)


def parse_hex_integer(value: object, field: str) -> int:
    if not isinstance(value, str) or not value.startswith("0x"):
        raise ValueError(f"{field} must use 0x hexadecimal form")
    try:
        return int(value, 16)
    except ValueError as exc:
        raise ValueError(f"Invalid {field}: {value!r}") from exc


def parse_hex_bytes(value: object, field: str) -> bytes:
    if not isinstance(value, str):
        raise ValueError(f"{field} must be a hexadecimal string")
    clean = "".join(value.split())
    if not clean or len(clean) % 2:
        raise ValueError(f"{field} must contain a non-empty even number of hex digits")
    try:
        return bytes.fromhex(clean)
    except ValueError as exc:
        raise ValueError(f"Invalid {field}") from exc


def load_and_validate_definition(path: Path) -> tuple[dict[str, object], list[dict[str, object]]]:
    with path.open("r", encoding="utf-8-sig") as stream:
        definition = json.load(stream)
    if definition.get("schema_version") != 1:
        raise ValueError("Unsupported schema_version")
    baseline = definition.get("baseline")
    if not isinstance(baseline, dict) or (
        baseline.get("size") != EXPECTED_SIZE
        or str(baseline.get("md5", "")).lower() != EXPECTED_MD5
        or str(baseline.get("sha256", "")).lower() != EXPECTED_SHA256
    ):
        raise ValueError("Patch definition baseline does not exactly match this package")
    raw_writes = definition.get("writes")
    if not isinstance(raw_writes, list) or not raw_writes:
        raise ValueError("Patch contains no writes")

    writes: list[dict[str, object]] = []
    for index, raw in enumerate(raw_writes):
        if not isinstance(raw, dict):
            raise ValueError(f"writes[{index}] is not an object")
        address = parse_hex_integer(raw.get("address"), f"writes[{index}].address")
        offset = parse_hex_integer(raw.get("offset"), f"writes[{index}].offset")
        before = parse_hex_bytes(raw.get("before_hex"), f"writes[{index}].before_hex")
        after = parse_hex_bytes(raw.get("after_hex"), f"writes[{index}].after_hex")
        if address < ROM_BASE_ADDRESS or address - ROM_BASE_ADDRESS != offset:
            raise ValueError(f"Address/offset mismatch in writes[{index}]")
        if len(before) != len(after):
            raise ValueError(f"Byte lengths differ in writes[{index}]")
        if before == after:
            raise ValueError(f"No-effect write is not allowed in writes[{index}]")
        if offset < 0 or offset + len(before) > EXPECTED_SIZE:
            raise ValueError(f"Write is outside ROM in writes[{index}]")
        writes.append(
            {"address": address, "offset": offset, "before": before, "after": after, "end": offset + len(before)}
        )

    writes.sort(key=lambda item: int(item["offset"]))
    for previous, current in zip(writes, writes[1:]):
        if int(current["offset"]) < int(previous["end"]):
            raise ValueError("Patch writes overlap")
    return definition, writes


def assert_original_bytes(input_path: Path, writes: list[dict[str, object]]) -> None:
    with input_path.open("rb") as stream:
        for write in writes:
            offset = int(write["offset"])
            expected = bytes(write["before"])
            stream.seek(offset)
            actual = stream.read(len(expected))
            if actual != expected:
                raise ValueError(f"Original bytes mismatch at file offset 0x{offset:08X}")


def apply_patch(input_path: Path, output_path: Path, writes: list[dict[str, object]]) -> None:
    output_path.parent.mkdir(parents=True, exist_ok=True)
    # Exclusive creation is the overwrite barrier. A pre-existing output is never opened for writing.
    descriptor = os.open(output_path, os.O_WRONLY | os.O_CREAT | os.O_EXCL, 0o666)
    completed = False
    try:
        with os.fdopen(descriptor, "wb") as output, input_path.open("rb") as source:
            shutil.copyfileobj(source, output, length=1024 * 1024)
            output.flush()
            os.fsync(output.fileno())
        with output_path.open("r+b") as output:
            for write in writes:
                output.seek(int(write["offset"]))
                output.write(bytes(write["after"]))
            output.flush()
            os.fsync(output.fileno())
        completed = True
    finally:
        if not completed:
            output_path.unlink(missing_ok=True)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("input_rom")
    parser.add_argument("patch_definition")
    parser.add_argument("output_rom")
    args = parser.parse_args()
    output_path: Optional[Path] = None
    try:
        input_path = normalized_path(args.input_rom, must_exist=True)
        definition_path = normalized_path(args.patch_definition, must_exist=True)
        output_path = normalized_path(args.output_rom)
        if not input_path.is_file() or not definition_path.is_file():
            raise ValueError("Input ROM and patch definition must be files")
        if same_path(input_path, output_path):
            raise ValueError("Input and output paths are identical; the input ROM is never overwritten")
        if output_path.exists():
            raise FileExistsError(f"Output already exists: {output_path}")
        assert_baseline(input_path)
        definition, writes = load_and_validate_definition(definition_path)
        assert_original_bytes(input_path, writes)
        apply_patch(input_path, output_path, writes)
        result = file_identity(output_path)
        result.update({"patch_id": str(definition.get("id", "")), "writes": len(writes)})
        print(json.dumps(result, ensure_ascii=True, indent=2))
        return 0
    except (OSError, ValueError, json.JSONDecodeError) as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
