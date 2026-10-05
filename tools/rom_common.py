"""Shared, standard-library-only helpers for the ROM tools."""

from __future__ import annotations

import hashlib
import os
import zlib
from pathlib import Path
from typing import Union

EXPECTED_FILENAME = "SS2_SC_bug_fixed.GBA"
EXPECTED_SIZE = 33_554_432
EXPECTED_MD5 = "35eb6567d94f855480c5d7ba2dff4389"
EXPECTED_SHA256 = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
EXPECTED_CRC32 = "AFCFC96D"
ROM_BASE_ADDRESS = 0x08000000


def normalized_path(value: Union[str, os.PathLike], *, must_exist: bool = False) -> Path:
    path = Path(value).expanduser().resolve(strict=must_exist)
    return path


def file_identity(path: Path) -> dict[str, object]:
    md5 = hashlib.md5()
    sha256 = hashlib.sha256()
    crc32 = 0
    size = 0
    with path.open("rb") as stream:
        while chunk := stream.read(1024 * 1024):
            size += len(chunk)
            md5.update(chunk)
            sha256.update(chunk)
            crc32 = zlib.crc32(chunk, crc32)
    return {
        "path": str(path),
        "size": size,
        "md5": md5.hexdigest(),
        "sha256": sha256.hexdigest(),
        "crc32": f"{crc32 & 0xFFFFFFFF:08X}",
    }


def identity_matches_baseline(identity: dict[str, object]) -> bool:
    return (
        identity["size"] == EXPECTED_SIZE
        and identity["md5"] == EXPECTED_MD5
        and identity["sha256"] == EXPECTED_SHA256
        and identity["crc32"] == EXPECTED_CRC32
    )


def assert_baseline(path: Path) -> dict[str, object]:
    identity = file_identity(path)
    if not identity_matches_baseline(identity):
        raise ValueError(
            "ROM identity mismatch. Size, MD5, SHA-256 and CRC32 must all match; "
            "compatibility application is forbidden."
        )
    return identity


def same_path(left: Path, right: Path) -> bool:
    return os.path.normcase(str(left)) == os.path.normcase(str(right))
