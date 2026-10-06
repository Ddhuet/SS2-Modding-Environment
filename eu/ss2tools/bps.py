"""Small standard-library BPS encoder and decoder for bounded GBA ROM builds."""
from __future__ import annotations

import zlib

BPS_MAGIC = b"BPS1"
BPS_FOOTER_SIZE = 12
MAX_BPS_SIZE = 0x2000000  # This workspace builds GBA images of at most 32 MiB.
MAX_UINT64 = (1 << 64) - 1


def _crc32(data: bytes) -> int:
    return zlib.crc32(data) & 0xFFFFFFFF


def encode_number(value: int) -> bytes:
    """Encode one nonnegative BPS variable-length integer."""
    if type(value) is not int or not 0 <= value <= MAX_UINT64:
        raise ValueError("BPS numbers must be unsigned 64-bit integers")
    encoded = bytearray()
    while True:
        byte = value & 0x7F
        value >>= 7
        if value == 0:
            encoded.append(byte | 0x80)
            return bytes(encoded)
        encoded.append(byte)
        value -= 1


def _decode_number(data: bytes, offset: int, limit: int) -> tuple[int, int]:
    value = 0
    shift = 1
    for _ in range(10):
        if offset >= limit:
            raise ValueError("Truncated BPS variable integer")
        byte = data[offset]
        offset += 1
        value += (byte & 0x7F) * shift
        if value > MAX_UINT64:
            raise ValueError("BPS variable integer exceeds 64 bits")
        if byte & 0x80:
            return value, offset
        shift <<= 7
        value += shift
        if value > MAX_UINT64:
            raise ValueError("BPS variable integer exceeds 64 bits")
    raise ValueError("BPS variable integer is too long")


def _command_header(length: int, action: int) -> bytes:
    if type(length) is not int or length <= 0 or action not in (0, 1, 2, 3):
        raise ValueError("BPS commands require a positive length and valid action")
    return encode_number(((length - 1) << 2) | action)


def _signed_relative(delta: int) -> bytes:
    magnitude = abs(delta)
    if magnitude > MAX_UINT64 >> 1:
        raise ValueError("BPS relative offset is too large")
    return encode_number((magnitude << 1) | (1 if delta < 0 else 0))


def encode_bps(source: bytes, target: bytes, writes: list[dict], *,
               fill_byte: int | None = None) -> bytes:
    """Encode a target from sorted declarative writes and unchanged source ranges.

    Appended expansion gaps are represented by one TargetRead byte followed by
    an overlapping TargetCopy. A write payload found intact anywhere in source
    is emitted with SourceCopy, which keeps relocated ROM resources out of the
    patch data itself.
    """
    if not isinstance(source, bytes) or not isinstance(target, bytes):
        raise TypeError("BPS source and target must be bytes")
    if len(source) > MAX_BPS_SIZE or len(target) > MAX_BPS_SIZE:
        raise ValueError("BPS source and target may not exceed 32 MiB")
    if len(target) < len(source):
        raise ValueError("BPS builder does not support shrinking the source")
    if len(target) > len(source):
        if type(fill_byte) is not int or not 0 <= fill_byte <= 0xFF:
            raise ValueError("Expansion BPS encoding requires a one-byte fill value")
    elif fill_byte is not None and (type(fill_byte) is not int or not 0 <= fill_byte <= 0xFF):
        raise ValueError("BPS fill value must be a byte")

    ordered = sorted(writes, key=lambda write: write["offset"])
    previous_end = 0
    for write in ordered:
        offset = write.get("offset")
        after = write.get("after")
        if type(offset) is not int or offset < previous_end or not isinstance(after, bytes) or not after:
            raise ValueError("BPS writes must be nonoverlapping offsets with nonempty byte payloads")
        if offset + len(after) > len(target) or target[offset:offset + len(after)] != after:
            raise ValueError(f"BPS target does not match declared write at 0x{offset:08X}")
        previous_end = offset + len(after)

    patch = bytearray(BPS_MAGIC)
    patch.extend(encode_number(len(source)))
    patch.extend(encode_number(len(target)))
    patch.extend(encode_number(0))  # Empty metadata.

    output_offset = 0
    source_relative = 0
    target_relative = 0

    def source_read_until(end: int) -> None:
        nonlocal output_offset
        if end <= output_offset:
            return
        if end > len(source) or target[output_offset:end] != source[output_offset:end]:
            raise ValueError("Undeclared target changes cannot be encoded as SourceRead")
        patch.extend(_command_header(end - output_offset, 0))
        output_offset = end

    def fill_until(end: int) -> None:
        nonlocal output_offset, target_relative
        if end <= output_offset:
            return
        if fill_byte is None or target[output_offset:end] != bytes([fill_byte]) * (end - output_offset):
            raise ValueError("Undeclared expansion bytes do not match the declared fill value")
        run = end - output_offset
        patch.extend(_command_header(1, 1))
        patch.append(fill_byte)
        output_offset += 1
        if run > 1:
            patch.extend(_command_header(run - 1, 3))
            target_relative_start = output_offset - 1
            patch.extend(_signed_relative(target_relative_start - target_relative))
            target_relative = target_relative_start + run - 1
            output_offset += run - 1

    for write in ordered:
        offset, after = write["offset"], write["after"]
        if offset > output_offset:
            unchanged_end = min(offset, len(source))
            source_read_until(unchanged_end)
            fill_until(offset)

        declared_source_offset = write.get("source_offset")
        if declared_source_offset is not None:
            if (type(declared_source_offset) is not int or declared_source_offset < 0 or
                    source[declared_source_offset:declared_source_offset + len(after)] != after):
                raise ValueError(f"BPS source copy does not match source at 0x{declared_source_offset:08X}")
            source_match = declared_source_offset
        else:
            source_match = source.find(after)
        if source_match >= 0:
            patch.extend(_command_header(len(after), 2))
            patch.extend(_signed_relative(source_match - source_relative))
            source_relative = source_match + len(after)
        else:
            patch.extend(_command_header(len(after), 1))
            patch.extend(after)
        output_offset += len(after)

    if output_offset < len(source):
        source_read_until(len(source))
    if output_offset < len(target):
        fill_until(len(target))
    if output_offset != len(target):
        raise ValueError("BPS writes do not produce the complete declared target")

    patch.extend(_crc32(source).to_bytes(4, "little"))
    patch.extend(_crc32(target).to_bytes(4, "little"))
    patch.extend(_crc32(patch).to_bytes(4, "little"))
    return bytes(patch)


def decode_bps(source: bytes, patch: bytes) -> bytes:
    """Apply a BPS patch and verify header, action bounds, and all three CRCs."""
    if not isinstance(source, bytes) or not isinstance(patch, bytes):
        raise TypeError("BPS source and patch must be bytes")
    if len(patch) < 19 or patch[:4] != BPS_MAGIC:
        raise ValueError("Invalid or truncated BPS header")
    footer = len(patch) - BPS_FOOTER_SIZE
    expected_patch_crc = int.from_bytes(patch[-4:], "little")
    if _crc32(patch[:-4]) != expected_patch_crc:
        raise ValueError("BPS patch CRC mismatch")
    if len(source) > MAX_BPS_SIZE:
        raise ValueError("BPS source may not exceed 32 MiB")

    expected_source_crc = int.from_bytes(patch[footer:footer + 4], "little")
    expected_target_crc = int.from_bytes(patch[footer + 4:footer + 8], "little")
    if _crc32(source) != expected_source_crc:
        raise ValueError("BPS source CRC mismatch")

    offset = 4
    source_size, offset = _decode_number(patch, offset, footer)
    target_size, offset = _decode_number(patch, offset, footer)
    metadata_size, offset = _decode_number(patch, offset, footer)
    if source_size != len(source):
        raise ValueError("BPS source size mismatch")
    if target_size > MAX_BPS_SIZE:
        raise ValueError("BPS target may not exceed 32 MiB")
    if metadata_size > footer - offset:
        raise ValueError("Truncated BPS metadata")
    offset += metadata_size

    target = bytearray()
    source_relative = 0
    target_relative = 0
    while offset < footer:
        command, offset = _decode_number(patch, offset, footer)
        action = command & 3
        length = (command >> 2) + 1
        if length > target_size - len(target):
            raise ValueError("BPS action exceeds declared target size")

        if action == 0:  # SourceRead: same source and target offset.
            end = len(target) + length
            if end > len(source):
                raise ValueError("BPS SourceRead exceeds source bounds")
            target.extend(source[len(target):end])
        elif action == 1:  # TargetRead: literal bytes follow the command.
            if length > footer - offset:
                raise ValueError("Truncated BPS TargetRead data")
            target.extend(patch[offset:offset + length])
            offset += length
        elif action == 2:  # SourceCopy: relative source cursor.
            relative, offset = _decode_number(patch, offset, footer)
            delta = -(relative >> 1) if relative & 1 else relative >> 1
            source_relative += delta
            end = source_relative + length
            if source_relative < 0 or end > len(source):
                raise ValueError("BPS SourceCopy exceeds source bounds")
            target.extend(source[source_relative:end])
            source_relative = end
        else:  # TargetCopy: overlapping copies from already emitted output.
            relative, offset = _decode_number(patch, offset, footer)
            delta = -(relative >> 1) if relative & 1 else relative >> 1
            target_relative += delta
            if target_relative < 0 or target_relative >= len(target):
                raise ValueError("BPS TargetCopy points outside written target")
            for _ in range(length):
                if target_relative >= len(target):
                    raise ValueError("BPS TargetCopy reads unwritten target bytes")
                target.append(target[target_relative])
                target_relative += 1

    if len(target) != target_size:
        raise ValueError("BPS commands did not produce the declared target size")
    if _crc32(target) != expected_target_crc:
        raise ValueError("BPS target CRC mismatch")
    return bytes(target)
