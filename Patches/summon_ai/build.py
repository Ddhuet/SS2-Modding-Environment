#!/usr/bin/env python3
"""Build summon_ai: compile src/summon_ai.c to a Thumb blob and write Patches/Definitions/Custom/summon_ai.json
(CN-baseline-bound write list).

    python3 Patches/summon_ai/build.py            # writes the definition
    python3 Patches/summon_ai/build.py --rom OUT  # also writes a test ROM on the user's Patches/summon_ai/Starting_Info/ test ROM
                                       # (English + waitcnt_fix + walk_angles + enemy_pathing + persistent summons)

Needs clang (armv4t target), llvm-objcopy, llvm-nm, llvm-readelf. Requires enemy_pathing at runtime
(shared RAM block and field); without it every hook resumes the vanilla code.
"""
import argparse, json, struct, subprocess, sys, tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / "Patches/summon_ai/src/summon_ai.c"
CN = ROOT / "ROMs/Shining_Soul_II_CN_Baseline.gba"
TEST_BASE = ROOT / "Patches/summon_ai/Starting_Info/Shining Soul II (English)+4_patches.gba"
OUT_DEF = ROOT / "Patches/Definitions/Custom/summon_ai.json"
PATHING_DEF = ROOT / "Patches/Definitions/Custom/enemy_pathing.json"

CODE_BASE = 0x09011000          # free range 0x09002000..0x093FFFFF; owned 0x09011000..0x09012FFF
CODE_MAX = 0x2000
STUB_BASE = 0x080BB238          # free gap after enemy_pathing's stubs (0x080BB220..0x080BB237)
STUB_END = 0x080BB268
# (site, original 4 bytes, trampoline). Each replaces two instructions (or one bl) with `bl stub`.
HOOKS = [
    (0x08071B86, "2298031c", "sm_tramp0"),  # orbit step: ldr r0,[sp,#0x88]; adds r3,r0,#0
    (0x08071BE2, "02f03ffd", "sm_tramp1"),  # orbit search: bl 0x08074664
    (0x080720A8, "00229146", "sm_tramp2"),  # chase contact scan: movs r2,#0; mov sb,r2
    (0x08072376, "072800d8", "sm_tramp3"),  # chase step: cmp r0,#7; bhi 0x0807237C
    (0x0807279C, "1a9a002a", "sm_tramp4"),  # return entry: ldr r2,[sp,#0x68]; cmp r2,#0
    (0x080727AC, "20980328", "sm_tramp5"),  # return step: ldr r0,[sp,#0x80]; cmp r0,#3
]
CFLAGS = ["--target=armv4t-none-eabi", "-mthumb", "-O2", "-ffreestanding", "-fno-builtin",
          "-fno-jump-tables", "-fno-pic", "-fno-unwind-tables", "-fno-asynchronous-unwind-tables",
          "-mno-unaligned-access", "-Wall", "-Werror", "-Wno-unused-function"]  # pf_core.h has enemy-only helpers
ARM_WORDS = 72                  # bfs_arm, copied to IWRAM by both mods: must be identical


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and off % 2 == 0, (hex(src), hex(dst))
    off >>= 1
    return struct.pack("<HH", 0xF000 | ((off >> 11) & 0x7FF), 0xF800 | (off & 0x7FF))


def compile_blob():
    with tempfile.TemporaryDirectory() as td:
        obj, binf = Path(td) / "s.o", Path(td) / "s.bin"
        subprocess.run(["clang", *CFLAGS, f"-DCODE_BASE=0x{CODE_BASE:08X}u", "-c", str(SRC), "-o", str(obj)], check=True)
        relocs = subprocess.run(["llvm-readelf", "-r", str(obj)], capture_output=True, text=True).stdout
        if ".rel.text" in relocs or ".rela.text" in relocs:
            sys.exit("relocations present:\n" + relocs)
        secs = subprocess.run(["llvm-readelf", "-S", str(obj)], capture_output=True, text=True).stdout
        for bad in (".rodata", ".data", ".bss"):
            if bad in secs:
                sys.exit(f"unexpected section {bad}:\n{secs}")
        subprocess.run(["llvm-objcopy", "-O", "binary", "--only-section=.text", str(obj), str(binf)], check=True)
        syms = {}
        for line in subprocess.run(["llvm-nm", str(obj)], capture_output=True, text=True).stdout.splitlines():
            parts = line.split()
            if len(parts) == 3 and parts[1] in "Tt":
                syms[parts[2]] = int(parts[0], 16)
        blob = binf.read_bytes()
    assert len(blob) <= CODE_MAX, len(blob)
    assert syms.get("bfs_arm") == 0, syms
    pathing = json.loads(PATHING_DEF.read_text())
    pcode = bytes.fromhex(next(w["after_hex"] for w in pathing["writes"] if w["address"] == "0x09010000"))
    assert blob[:ARM_WORDS * 4] == pcode[:ARM_WORDS * 4], "bfs_arm differs from enemy_pathing's IWRAM copy"
    return blob, syms


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rom", help="also write a test ROM built on the Patches/summon_ai/Starting_Info/ test ROM")
    a = ap.parse_args()
    blob, syms = compile_blob()
    cn = CN.read_bytes()
    writes = []

    def add(addr, after, note, mode="thumb"):
        off = addr - 0x08000000
        writes.append({"address": f"0x{addr:08X}", "offset": f"0x{off:08X}",
                       "before_hex": cn[off:off + len(after)].hex(), "after_hex": after.hex(),
                       "mode": mode, "note": note})

    stubs, stub_bytes = {}, b""
    for n, (_, _, sym) in enumerate(HOOKS):
        stubs[sym] = STUB_BASE + n * 8
        stub_bytes += struct.pack("<HHI", 0x4B00, 0x4718, CODE_BASE + syms[sym] + 1)
    assert STUB_BASE + len(stub_bytes) <= STUB_END
    add(STUB_BASE, stub_bytes, f"Allocation 0x{STUB_BASE:08X}..0x{STUB_BASE + len(stub_bytes) - 1:08X} "
        f"({len(stub_bytes)} B, was zero; owner summon_ai): far stubs `ldr r3,=sm_trampN|1; bx r3` for hooks 0..5.")
    for n, (site, orig, sym) in enumerate(HOOKS):
        off = site - 0x08000000
        assert cn[off:off + 4].hex() == orig, hex(site)
        add(site, bl(site, stubs[sym]), f"Summon coroutine 0x080717B4: `{orig}` -> `bl 0x{stubs[sym]:08X}` "
            f"(hook {n}, sm_hook decides where to resume; vanilla code path when inactive).")
    pad = blob + b"\x00" * ((-len(blob)) % 4)
    add(CODE_BASE, pad, f"Allocation 0x{CODE_BASE:08X}..0x{CODE_BASE + len(pad) - 1:08X} ({len(pad)} B, was zero; "
        f"owner summon_ai, owns to 0x{CODE_BASE + CODE_MAX - 1:08X}): Thumb code from Patches/summon_ai/src/summon_ai.c "
        f"(includes Patches/enemy_pathing/src/pf_core.h). Trampolines: "
        + ", ".join(f"{k}=0x{CODE_BASE + v:08X}" for k, v in sorted(syms.items(), key=lambda kv: kv[1]) if k.startswith("sm_tramp")) + ".")
    for w in writes:
        if w["address"].startswith("0x09") or w["address"] == f"0x{STUB_BASE:08X}":
            assert set(bytes.fromhex(w["before_hex"])) <= {0}, w["address"]

    d = {
        "schema_version": 1,
        "id": "summon_ai",
        "name": "Summon AI (Archer pet paths to enemies, keeps attacking, paths back; needs enemy_pathing)",
        "stage": "static_candidate",
        "profile_id": "ss2-cn-baseline",
        "baseline": json.loads(PATHING_DEF.read_text())["baseline"],
        "requires": ["enemy_pathing"],
        "source_provenance": {"kind": "new", "source": "Patches/summon_ai/src/summon_ai.c, Patches/summon_ai/build.py",
                              "notes": "Docs/mods/summon_ai.md"},
        "evidence": {
            "status": "runtime_verified",
            "user_acceptance": "not_run",
            "semantics": "The Archer's summon (coroutine 0x080717B4) picks the on-screen enemy closest to its owner by "
                         "path, follows that enemy's path in the enemy_pathing field backwards to reach it, attacks it once "
                         "per second until it dies, leaves the screen or is unreachable (or the owner is hurt while another "
                         "enemy is closer), then walks back to the owner by the field instead of through walls. "
                         "Single-player only; the vanilla code runs otherwise and when enemy_pathing is absent.",
            "static_audit": "Docs/mods/summon_ai.md",
            "runtime": "runtime_verified (mGBA 0.10.5 headless; user's Patches/summon_ai/Starting_Info/ ROM (English+waitcnt_fix+walk_angles+"
                       "enemy_pathing+persistent summons) vs that + summon_ai; 8 user states x 900 frames idle and scripted "
                       "walking, no RAM writes): pet never stands in a closed cell (vanilla up to 454 frames), 1.3-7x vanilla's "
                       "damage, returns on kill/rescue as designed, ignores enemies behind a closed door (Ready_To_Cast); "
                       "2.7-4.8k cycles/frame, no lag frames. See Docs/mods/summon_ai.md.",
        },
        "writes": writes,
    }
    OUT_DEF.write_text(json.dumps(d, indent=1) + "\n")
    print(f"{OUT_DEF}: code {len(blob)} B, sm_hook at 0x{CODE_BASE + syms.get('sm_hook', 0):08X}")

    if a.rom:
        rom = bytearray(TEST_BASE.read_bytes())
        for w in writes:
            off = int(w["offset"], 16); before = bytes.fromhex(w["before_hex"]); after = bytes.fromhex(w["after_hex"])
            assert rom[off:off + len(before)] == before, w["address"]
            rom[off:off + len(after)] = after
        Path(a.rom).write_bytes(rom)
        print("test ROM", a.rom)


if __name__ == "__main__":
    main()
