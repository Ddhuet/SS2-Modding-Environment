"""Identity checks, declarative writes, atomic publication, ARMv4T Thumb BL."""
from __future__ import annotations

import hashlib
import json
import os
import re
import tempfile
import zlib
from datetime import datetime, timezone
from pathlib import Path

from .bps import decode_bps, encode_bps

ROM_BASE = 0x08000000
IDENTITY_KEYS = ("size", "md5", "sha256", "crc32")
MAX_EXPANDED_SIZE = 32 * 1024 * 1024


def identity(data: bytes) -> dict:
    return {"size": len(data), "md5": hashlib.md5(data).hexdigest(),
            "sha256": hashlib.sha256(data).hexdigest(),
            "crc32": f"{zlib.crc32(data) & 0xffffffff:08X}"}


def identify(data: bytes) -> dict:
    result = identity(data)
    if len(data) >= 0xC0:
        result["gba_header"] = {
            "title": data[0xA0:0xAC].rstrip(b"\0").decode("ascii", errors="replace"),
            "game_code": data[0xAC:0xB0].decode("ascii", errors="replace"),
            "maker_code": data[0xB0:0xB2].decode("ascii", errors="replace"),
            "revision": data[0xBC],
            "checksum_valid": ((-sum(data[0xA0:0xBD]) - 0x19) & 255) == data[0xBD],
        }
    return result


def load_json(path: Path) -> dict:
    value = json.loads(path.read_text(encoding="utf-8-sig"))
    if not isinstance(value, dict):
        raise ValueError("JSON root must be an object")
    return value


def validate_identity(expected: dict) -> dict:
    if not isinstance(expected, dict) or type(expected.get("size")) is not int or expected["size"] <= 0:
        raise ValueError("Identity must contain a positive integer size")
    for key, length in (("md5", 32), ("sha256", 64), ("crc32", 8)):
        value = expected.get(key)
        if not isinstance(value, str) or not re.fullmatch(rf"[0-9a-fA-F]{{{length}}}", value):
            raise ValueError(f"Identity requires complete {key}")
    return {key: expected[key].upper() if key == "crc32" else expected[key].lower()
            if isinstance(expected[key], str) else expected[key] for key in IDENTITY_KEYS}


def load_profile(path: Path) -> dict:
    profile = load_json(path)
    if type(profile.get("schema_version")) is not int or profile["schema_version"] != 1 or not isinstance(profile.get("id"), str) or not profile["id"]:
        raise ValueError("Profile requires schema_version 1 and id")
    profile["identity"] = validate_identity(profile.get("identity"))
    return profile


def verify(data: bytes, profile: dict) -> dict:
    actual = identity(data)
    if actual != validate_identity(profile.get("identity")):
        raise ValueError(f"ROM identity mismatch for profile {profile.get('id')}: {actual}")
    return actual


def hex_int(value: object, field: str) -> int:
    if not isinstance(value, str) or not re.fullmatch(r"0x[0-9a-fA-F]+", value):
        raise ValueError(f"{field} must be a nonnegative 0x hexadecimal string")
    return int(value, 16)


def hex_bytes(value: object, field: str) -> bytes:
    if not isinstance(value, str) or not value.strip():
        raise ValueError(f"{field} requires nonempty hexadecimal bytes")
    try:
        result = bytes.fromhex(value)
    except ValueError as exc:
        raise ValueError(f"Invalid {field}") from exc
    if not result:
        raise ValueError(f"Empty {field}")
    return result


def parse_writes(patch: dict, size: int | None = None) -> list[dict]:
    if type(patch.get("schema_version")) is not int or patch["schema_version"] != 1 or not isinstance(patch.get("writes"), list) or not patch["writes"]:
        raise ValueError("Patch requires schema_version 1 and nonempty writes")
    writes = []
    for index, raw in enumerate(patch["writes"]):
        if not isinstance(raw, dict):
            raise ValueError(f"writes[{index}] must be an object")
        off = hex_int(raw.get("offset"), "offset")
        address = hex_int(raw.get("address"), "address")
        before = hex_bytes(raw.get("before_hex"), "before_hex")
        after = hex_bytes(raw.get("after_hex"), "after_hex")
        if address != ROM_BASE + off:
            raise ValueError("Address/offset mismatch")
        if len(before) != len(after) or before == after:
            raise ValueError("Writes require equal-length, changed full preimages")
        if size is not None and off + len(before) > size:
            raise ValueError("Write extends outside ROM")
        writes.append({"index": index, "offset": off, "before": before, "after": after})
    writes.sort(key=lambda w: w["offset"])
    for left, right in zip(writes, writes[1:]):
        if left["offset"] + len(left["before"]) > right["offset"]:
            raise ValueError("Patch writes overlap")
    return writes


def assert_preimages(data: bytes, writes: list[dict]) -> None:
    for write in writes:
        off, before = write["offset"], write["before"]
        if data[off:off + len(before)] != before:
            raise ValueError(f"Full preimage mismatch at offset 0x{off:08X}")


def parse_expansion(patch: dict, input_size: int) -> dict | None:
    """Validate the optional expansion allocation against the exact input size."""
    if "expansion" not in patch:
        return None
    raw = patch["expansion"]
    if not isinstance(raw, dict):
        raise ValueError("expansion must be an object")
    size = raw.get("size")
    if type(size) is not int or size <= input_size or size > MAX_EXPANDED_SIZE:
        raise ValueError("expansion.size must be larger than input and at most 32 MiB")
    fill = hex_int(raw.get("fill_byte"), "expansion.fill_byte")
    if fill > 0xFF:
        raise ValueError("expansion.fill_byte must fit in one byte")
    owner = raw.get("owner")
    if not isinstance(owner, str) or not owner.strip():
        raise ValueError("expansion.owner must be a nonempty string")
    return {"size": size, "fill_byte": fill, "owner": owner.strip()}


def parse_copies(patch: dict, source: bytes, expansion: dict | None) -> list[dict]:
    """Validate hash-bound copies from pristine source into expanded fill space."""
    raw_copies = patch.get("copies", [])
    if not isinstance(raw_copies, list):
        raise ValueError("copies must be a list")
    if raw_copies and expansion is None:
        raise ValueError("copies require a declared expansion")
    copies = []
    expanded_size = expansion["size"] if expansion is not None else len(source)
    fill_byte = expansion["fill_byte"] if expansion is not None else None
    for index, raw in enumerate(raw_copies):
        if not isinstance(raw, dict):
            raise ValueError(f"copies[{index}] must be an object")
        source_offset = hex_int(raw.get("source_offset"), "source_offset")
        offset = hex_int(raw.get("offset"), "offset")
        length = raw.get("length")
        if type(length) is not int or length <= 0:
            raise ValueError(f"copies[{index}].length must be a positive integer")
        if source_offset + length > len(source):
            raise ValueError(f"Copy source extends outside pristine input at 0x{source_offset:08X}")
        if offset < len(source) or offset + length > expanded_size:
            raise ValueError(f"Copy destination must be in expanded space at 0x{offset:08X}")
        owner = raw.get("owner")
        if not isinstance(owner, str) or not owner.strip():
            raise ValueError(f"copies[{index}].owner must be a nonempty string")
        source_sha = raw.get("source_sha256")
        destination_sha = raw.get("destination_sha256")
        for field, value in (("source_sha256", source_sha), ("destination_sha256", destination_sha)):
            if not isinstance(value, str) or not re.fullmatch(r"[0-9a-fA-F]{64}", value):
                raise ValueError(f"copies[{index}].{field} must be a complete SHA-256")
        payload = source[source_offset:source_offset + length]
        source_actual_sha = hashlib.sha256(payload).hexdigest()
        destination_preimage_sha = hashlib.sha256(bytes([fill_byte]) * length).hexdigest()
        if source_actual_sha != source_sha.lower():
            raise ValueError(f"Copy source SHA-256 mismatch at 0x{source_offset:08X}")
        if destination_preimage_sha != destination_sha.lower():
            raise ValueError(f"Copy destination preimage SHA-256 mismatch at 0x{offset:08X}")
        copies.append({"index": index, "source_offset": source_offset, "offset": offset,
                       "length": length, "source_sha256": source_actual_sha,
                       "destination_sha256": destination_preimage_sha, "owner": owner.strip(),
                       "after": payload})
    copies.sort(key=lambda copy: copy["offset"])
    return copies


def assert_disjoint_writes_copies(writes: list[dict], copies: list[dict]) -> None:
    intervals = [(w["offset"], w["offset"] + len(w["before"]), "write") for w in writes]
    intervals.extend((c["offset"], c["offset"] + c["length"], "copy") for c in copies)
    intervals.sort()
    for left, right in zip(intervals, intervals[1:]):
        if left[1] > right[0]:
            raise ValueError(f"Patch {left[2]}/copy destination ranges overlap at offset 0x{right[0]:08X}")


def assert_copy_preimages(expanded_baseline: bytes, copies: list[dict], fill_byte: int) -> None:
    fill = bytes([fill_byte])
    for copy in copies:
        off, length = copy["offset"], copy["length"]
        actual = expanded_baseline[off:off + length]
        if (actual != fill * length or
                hashlib.sha256(actual).hexdigest() != copy["destination_sha256"]):
            raise ValueError(f"Full copy destination preimage mismatch at offset 0x{off:08X}")


def ips_bytes(writes: list[dict]) -> bytes:
    result = bytearray(b"PATCH")
    for write in writes:
        off, after = write["offset"], write["after"]
        for start in range(0, len(after), 65535):
            chunk = after[start:start + 65535]
            pos = off + start
            # EOF is also a reserved offset. Refuse rather than emit ambiguous IPS.
            if pos > 0xffffff or pos + len(chunk) > 0x1000000 or pos == 0x454f46:
                raise ValueError("Write cannot be represented safely by classic IPS")
            result.extend(pos.to_bytes(3, "big") + len(chunk).to_bytes(2, "big") + chunk)
    return bytes(result + b"EOF")


def publish_new(artifacts: dict[Path, bytes], protected: tuple[Path, ...] = ()) -> None:
    """Stage complete siblings, then publish by exclusive hard link; never replace.

    Each file appears atomically. Multiple files are not a filesystem transaction:
    process termination can leave a subset. The manifest is published last.
    Ordinary failures roll back only links created by this invocation.
    """
    outputs = [path.absolute() for path in artifacts]
    resolved = [path.resolve() for path in outputs]
    if len(set(resolved)) != len(resolved):
        raise ValueError("Artifact paths alias each other")
    if any(path in {p.resolve() for p in protected} for path in resolved):
        raise ValueError("Artifact path aliases a protected input")
    for path in outputs:
        if os.path.lexists(path):
            raise FileExistsError(f"Output already exists: {path}")
    staged, published = [], []
    try:
        for path, payload in zip(outputs, artifacts.values()):
            path.parent.mkdir(parents=True, exist_ok=True)
            fd, name = tempfile.mkstemp(prefix=".ss2-build-", dir=path.parent)
            temp = Path(name)
            staged.append(temp)
            with os.fdopen(fd, "wb") as stream:
                stream.write(payload)
                stream.flush()
                os.fsync(stream.fileno())
        for temp, path in zip(staged, outputs):
            os.link(temp, path)  # Fails even for existing dangling symlinks.
            published.append((path, temp.stat().st_ino, temp.stat().st_dev))
        for directory in {p.parent for p in outputs}:
            if hasattr(os, "O_DIRECTORY"):
                fd = os.open(directory, os.O_RDONLY | os.O_DIRECTORY)
                try:
                    os.fsync(fd)
                finally:
                    os.close(fd)
    except BaseException:
        for path, ino, dev in reversed(published):
            try:
                stat = path.lstat()
                if stat.st_ino == ino and stat.st_dev == dev:
                    path.unlink()
            except FileNotFoundError:
                pass
        raise
    finally:
        for temp in staged:
            temp.unlink(missing_ok=True)


def build(input_path: Path, patch_path: Path, profile_path: Path, output: Path,
          manifest: Path | None = None, ips: Path | None = None,
          allow_static_candidate: bool = False, bps: Path | None = None) -> dict:
    data = input_path.read_bytes()
    profile = load_profile(profile_path)
    actual = verify(data, profile)
    patch_data = patch_path.read_bytes()
    patch = json.loads(patch_data.decode("utf-8-sig"))
    if not isinstance(patch, dict):
        raise ValueError("Patch must be an object")
    if not isinstance(patch.get("id"), str) or not patch["id"]:
        raise ValueError("Patch requires a nonempty id")
    if validate_identity(patch.get("baseline")) != actual:
        raise ValueError("Patch baseline does not exactly match input/profile")
    if patch.get("profile_id") != profile["id"]:
        raise ValueError("Patch profile_id does not match selected profile")
    stage = patch.get("stage")
    if stage == "static_candidate":
        if not allow_static_candidate:
            raise ValueError("Static candidate is pending semantics audit; experimental build requires --allow-static-candidate")
    elif stage != "approved":
        raise ValueError("Build accepts only approved or explicitly enabled static_candidate patches")
    expansion = parse_expansion(patch, len(data))
    if expansion is not None and ips is not None:
        raise ValueError("IPS cannot represent an expanded ROM's target size or fill bytes")
    writes = parse_writes(patch, expansion["size"] if expansion else len(data))
    copies = parse_copies(patch, data, expansion)
    assert_disjoint_writes_copies(writes, copies)
    if expansion is not None:
        expanded_baseline = data + bytes([expansion["fill_byte"]]) * (expansion["size"] - len(data))
        assert_preimages(expanded_baseline, writes)
        assert_copy_preimages(expanded_baseline, copies, expansion["fill_byte"])
    else:
        expanded_baseline = data
        assert_preimages(expanded_baseline, writes)
    modified = bytearray(expanded_baseline)
    for write in writes:
        off = write["offset"]
        modified[off:off + len(write["after"])] = write["after"]
    for copy in copies:
        off = copy["offset"]
        modified[off:off + copy["length"]] = copy["after"]
    output_data = bytes(modified)
    report = {"schema_version": 1, "kind": "ss2_build_manifest",
              "created_utc": datetime.now(timezone.utc).isoformat(),
              "profile_id": profile["id"], "patch_id": patch.get("id"),
              "patch_sha256": hashlib.sha256(patch_data).hexdigest(),
              "stage": stage, "semantic_approval": stage == "approved",
              "static_candidate_opt_in": allow_static_candidate,
              "input_identity": actual, "output_identity": identity(output_data),
              "output_filename": output.name,
              "writes": [{"offset": f"0x{w['offset']:08X}",
                          "before_hex": w["before"].hex(), "after_hex": w["after"].hex()} for w in writes]}
    if expansion is not None:
        report["expansion"] = {"size": expansion["size"],
                                "fill_byte": f"0x{expansion['fill_byte']:02X}",
                                "owner": expansion["owner"]}
    if copies:
        report["copies"] = [{"source_offset": f"0x{copy['source_offset']:08X}",
                             "offset": f"0x{copy['offset']:08X}",
                             "length": copy["length"],
                             "source_sha256": copy["source_sha256"],
                             "destination_sha256": copy["destination_sha256"],
                             "owner": copy["owner"]} for copy in copies]
    # Lists preserve two different lexical paths until alias checking is complete.
    artifact_pairs = [(output, output_data)]
    if ips is not None:
        encoded = ips_bytes(writes)
        report["ips"] = {"filename": ips.name, "identity": identity(encoded),
                         "warning": "IPS alone has no identity or preimage enforcement"}
        artifact_pairs.append((ips, encoded))
    if bps is not None:
        bps_writes = list(writes)
        copy_fill = bytes([expansion["fill_byte"]]) if expansion else b""
        bps_writes.extend({"offset": copy["offset"], "before": copy_fill * copy["length"],
                           "after": copy["after"],
                           "source_offset": copy["source_offset"]} for copy in copies)
        encoded_bps = encode_bps(data, output_data, bps_writes,
                                 fill_byte=expansion["fill_byte"] if expansion else None)
        round_trip = decode_bps(data, encoded_bps)
        if round_trip != output_data:
            raise ValueError("BPS round-trip did not reproduce the exact built ROM")
        report["bps"] = {"filename": bps.name, "identity": identity(encoded_bps),
                         "source_size": len(data), "target_size": len(output_data),
                         "warning": "BPS CRCs detect corruption but do not replace the manifest's cryptographic ROM identity"}
        artifact_pairs.append((bps, encoded_bps))
    manifest = manifest or Path(str(output) + ".manifest.json")
    artifact_pairs.append((manifest, (json.dumps(report, indent=2) + "\n").encode()))
    if len({p.resolve() for p, _ in artifact_pairs}) != len(artifact_pairs):
        raise ValueError("Artifact paths alias each other")
    publish_new(dict(artifact_pairs), (input_path, patch_path, profile_path))
    return report


def decode_bl(instruction: bytes, offset: int) -> int:
    if offset < 0 or offset % 2 or len(instruction) != 4:
        raise ValueError("Thumb BL requires four bytes at an aligned nonnegative offset")
    high = int.from_bytes(instruction[:2], "little")
    low = int.from_bytes(instruction[2:], "little")
    if high & 0xf800 != 0xf000 or low & 0xf800 != 0xf800:
        raise ValueError("Bytes are not an ARMv4T Thumb BL pair")
    delta = ((high & 0x7ff) << 12) | ((low & 0x7ff) << 1)
    if delta & 0x400000:
        delta -= 0x800000
    return ROM_BASE + offset + 4 + delta


def encode_bl(offset: int, target: int) -> bytes:
    if offset < 0 or offset % 2 or target % 2:
        raise ValueError("Thumb BL source/target must be halfword-aligned; use target without Thumb bit")
    delta = target - (ROM_BASE + offset + 4)
    if not -0x400000 <= delta <= 0x3ffffe:
        raise ValueError("Thumb BL target is outside signed 23-bit range")
    bits = delta & 0x7fffff
    return (0xf000 | (bits >> 12)).to_bytes(2, "little") + (0xf800 | ((bits >> 1) & 0x7ff)).to_bytes(2, "little")
