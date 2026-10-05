"""Read-only context matches: candidates never establish semantic compatibility."""
from __future__ import annotations

import re
from pathlib import Path

from .core import (ROM_BASE, decode_bl, identity, load_json, load_profile,
                   parse_writes, validate_identity, verify)


def context_pattern(window: bytes, mode: str) -> tuple[re.Pattern, list[int], bytes]:
    parts, bl_slots, fixed = [], [], bytearray()
    pos = 0
    while pos < len(window):
        if mode == "thumb-bl" and pos + 4 <= len(window):
            try:
                decode_bl(window[pos:pos + 4], pos)
            except ValueError:
                pass
            else:
                # Relocation may change displacement; target must retain BL encoding.
                parts.append(b"[\\x00-\\xff][\\xf0-\\xf7][\\x00-\\xff][\\xf8-\\xff]")
                bl_slots.append(pos)
                pos += 4
                continue
        chunk = window[pos:pos + 2]
        fixed.extend(chunk)
        parts.append(re.escape(chunk))
        pos += len(chunk)
    # Lookahead includes overlapping matches. Whole target starts must be aligned.
    return re.compile(b"(?=(" + b"".join(parts) + b"))", re.DOTALL), bl_slots, bytes(fixed)


def find_candidates(source: bytes, target: bytes, writes: list[dict], *,
                    window: int = 96, before: int = 32, mode: str = "thumb-bl",
                    limit: int = 128) -> list[dict]:
    if window < 16 or window > 4096 or window % 2 or before < 0 or before % 2 or before >= window:
        raise ValueError("Window must be even 16..4096; before must be even, nonnegative, less than window")
    if mode not in ("exact", "thumb-bl") or not 1 <= limit <= 1000:
        raise ValueError("Unsupported matching mode or candidate limit")
    rows = []
    for write in writes:
        off, preimage = write["offset"], write["before"]
        start = max(0, (off - before) & ~1)
        row = {"write_index": write["index"], "source_offset": f"0x{off:08X}",
               "source_preimage_hex": preimage.hex(), "status": "no_candidate",
               "approval": "not_approved", "window_start": f"0x{start:08X}",
               "window_bytes": window, "matching_mode": mode, "candidates": []}
        rows.append(row)
        if off + len(preimage) > len(source):
            row["status"] = "source_write_out_of_range"
            continue
        if source[off:off + len(preimage)] != preimage:
            row["status"] = "source_preimage_mismatch"
            continue
        if start + window > len(source) or off + len(preimage) > start + window:
            row["status"] = "source_window_unavailable"
            continue
        context = source[start:start + window]
        pattern, slots, fixed = context_pattern(context, mode)
        row["normalized_bl_pairs"] = len(slots)
        row["fixed_bytes"] = len(fixed)
        if len(fixed) < 16 or len(set(fixed)) < 4:
            row["status"] = "low_information_window"
            continue
        truncated = False
        for match in pattern.finditer(target):
            target_start = match.start()
            candidate = target_start + off - start
            if target_start % 2 or candidate + len(preimage) > len(target):
                continue
            if len(row["candidates"]) == limit:
                truncated = True
                break
            target_preimage = target[candidate:candidate + len(preimage)]
            row["candidates"].append({
                "offset": f"0x{candidate:08X}", "address": f"0x{ROM_BASE + candidate:08X}",
                "delta": candidate - off, "approval": "not_approved",
                "target_preimage_hex": target_preimage.hex(),
                "target_preimage_matches": target_preimage == preimage,
                "bl_correspondences": [
                    {"source_call_offset": f"0x{start + slot:08X}",
                     "target_call_offset": f"0x{target_start + slot:08X}",
                     "source_target": f"0x{decode_bl(context[slot:slot + 4], start + slot):08X}",
                     "target_target": f"0x{decode_bl(target[target_start + slot:target_start + slot + 4], target_start + slot):08X}",
                     "callee_equivalence": "not_established"} for slot in slots]})
        row["truncated"] = truncated
        count = len(row["candidates"])
        if count:
            row["status"] = "multiple_candidates" if count > 1 or truncated else "unique_static_candidate"
    return rows


def port_report(source_path: Path, target_path: Path, patch_path: Path,
                source_profile_path: Path, target_profile_path: Path, **options) -> dict:
    source, target = source_path.read_bytes(), target_path.read_bytes()
    source_profile, target_profile = load_profile(source_profile_path), load_profile(target_profile_path)
    verify(source, source_profile)
    verify(target, target_profile)
    patch = load_json(patch_path)
    baseline = validate_identity(patch.get("baseline"))
    writes = parse_writes(patch)
    return {"schema_version": 1, "kind": "read_only_port_candidates",
            "approval": "not_approved", "patch_id": patch.get("id"),
            "source_profile_id": source_profile["id"], "target_profile_id": target_profile["id"],
            "source_identity": identity(source), "target_identity": identity(target),
            "source_patch_baseline_matches": baseline == identity(source),
            "source_relationship": "Exact source profile verified; every write preimage checked separately. A baseline mismatch does not establish whole-ROM equivalence.",
            "limitations": ["Context similarity is a location hypothesis, not feature equivalence or a port approval.",
                            "Thumb BL masking is an instruction hypothesis; data can resemble instructions.",
                            "Changed BL destinations require independent callee and calling-convention audit.",
                            "No address, pointer, literal, relocation, save-layout, or runtime semantics are inferred.",
                            "No patch is emitted and no ROM is modified."],
            "writes": find_candidates(source, target, writes, **options)}
