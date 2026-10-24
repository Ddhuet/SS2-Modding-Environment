#!/usr/bin/env python3
"""Build enemy_pathing: compile src/enemy_pathing.c to a Thumb blob and write
Patches/Definitions/Custom/enemy_pathing.json (CN-baseline-bound write list).

    python3 Patches/enemy_pathing/build.py            # writes the definition
    python3 Patches/enemy_pathing/build.py --rom OUT  # also writes English+waitcnt+mod ROM for quick tests

Needs clang (armv4t target), llvm-objcopy, llvm-nm, llvm-readelf.
"""
import argparse, json, struct, subprocess, sys, tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / "Patches/enemy_pathing/src/enemy_pathing.c"
CN = ROOT / "ROMs/Shining_Soul_II_CN_Baseline.gba"
TEST_BASE = ROOT / "Build/ss2-en+waitcnt_fix.gba"
OUT_DEF = ROOT / "Patches/Definitions/Custom/enemy_pathing.json"

CODE_BASE = 0x09010000          # free range 0x09002000..0x093FFFFF
CODE_MAX = 0x1000               # owned: 0x09010000..0x09010FFF
STUB_BASE = 0x080BB220          # free gap 0x080BB220..0x080BB400 (candidate, verified zero)
HEAP_END_LIT = 0x08001488       # 0x0203FFF0 -> 0x0203CFF0
NEW_HEAP_END = 0x0203CFF0
HOOKS = [  # (call site, original target, entry symbol)
    (0x080006B8, 0x08001404, "pf_boot"),
    (0x0801736E, 0x08016780, "pf_approach"),
    (0x080173BA, 0x08016780, "pf_approach"),
    (0x08018DD4, 0x08017924, "pf_keep"),
]
CFLAGS = ["--target=armv4t-none-eabi", "-mthumb", "-O2", "-ffreestanding", "-fno-builtin",
          "-fno-jump-tables", "-fno-pic", "-fno-unwind-tables", "-fno-asynchronous-unwind-tables", "-mno-unaligned-access", "-Wall", "-Werror"]


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and off % 2 == 0, (hex(src), hex(dst))
    off >>= 1
    return struct.pack("<HH", 0xF000 | ((off >> 11) & 0x7FF), 0xF800 | (off & 0x7FF))


def bl_target(b, src):
    h1, h2 = struct.unpack("<HH", b)
    assert h1 & 0xF800 == 0xF000 and h2 & 0xF800 == 0xF800
    hi = h1 & 0x7FF
    if hi & 0x400: hi -= 0x800
    return src + 4 + (hi << 12) + ((h2 & 0x7FF) << 1)


def compile_blob(pf_base=None):
    with tempfile.TemporaryDirectory() as td:
        obj, binf = Path(td) / "p.o", Path(td) / "p.bin"
        extra = [f"-DPF_BASE=0x{pf_base:08X}u"] if pf_base else []
        subprocess.run(["clang", *CFLAGS, f"-DCODE_BASE=0x{CODE_BASE:08X}u", *extra, "-c", str(SRC), "-o", str(obj)], check=True)
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
    assert syms.get("bfs_arm") == 0 and 0 < syms["bfs_arm_end"] <= 288, syms  # copied to IWRAM as 72 words
    return blob, syms


def dump_layout():
    """Write Patches/enemy_pathing/pf_layout.json {field: offset} for the test harness."""
    out = subprocess.run(["clang", *CFLAGS[:2], f"-DCODE_BASE=0x{CODE_BASE:08X}u", "-Xclang", "-fdump-record-layouts",
                          "-fsyntax-only", str(SRC)], capture_output=True, text=True, check=True).stdout
    lay = {}
    for line in out.split("struct pf")[1].splitlines()[1:]:
        parts = line.split("|")
        if len(parts) == 2 and parts[0].strip().isdigit():
            lay[parts[1].split()[-1]] = int(parts[0])
    (ROOT / "Patches/enemy_pathing/pf_layout.json").write_text(json.dumps(lay, indent=1) + "\n")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rom", help="also write a test ROM built on English+waitcnt")
    ap.add_argument("--test-ram", type=lambda v: int(v, 0), help="test ROM only: mod RAM base (for savestates made "
                    "with the old heap layout; pick a free heap block). The definition always uses 0x0203D000.")
    a = ap.parse_args()
    blob, syms = compile_blob()
    dump_layout()
    cn = CN.read_bytes()
    writes = []

    def add(addr, after, note, mode="thumb"):
        off = addr - 0x08000000
        writes.append({"address": f"0x{addr:08X}", "offset": f"0x{off:08X}",
                       "before_hex": cn[off:off + len(after)].hex(), "after_hex": after.hex(),
                       "mode": mode, "note": note})

    # stubs: ldr r3,[pc,#0]; bx r3; .word entry|1  (r3 is free: no hooked callee takes 4 args)
    stubs = {}
    names = []
    for _, _, sym in HOOKS:
        if sym not in names: names.append(sym)
    stub_bytes = b""
    for n, sym in enumerate(names):
        stubs[sym] = STUB_BASE + n * 8
        stub_bytes += struct.pack("<HHI", 0x4B00, 0x4718, CODE_BASE + syms[sym] + 1)
    add(STUB_BASE, stub_bytes, f"Allocation 0x{STUB_BASE:08X}..0x{STUB_BASE + len(stub_bytes) - 1:08X} "
        f"({len(stub_bytes)} B, was zero; owner enemy_pathing): far stubs `ldr r3,=entry|1; bx r3` for "
        + ", ".join(f"{s} @0x{stubs[s]:08X}" for s in names) + ".")
    for site, orig, sym in HOOKS:
        off = site - 0x08000000
        assert bl_target(cn[off:off + 4], site) == orig, hex(site)
        add(site, bl(site, stubs[sym]), f"`bl 0x{orig:08X}` -> `bl 0x{stubs[sym]:08X}` ({sym}; it calls the original first).")
    lit = struct.pack("<I", NEW_HEAP_END)
    assert cn[HEAP_END_LIT - 0x08000000:HEAP_END_LIT - 0x08000000 + 4] == struct.pack("<I", 0x0203FFF0)
    add(HEAP_END_LIT, lit, "Heap init 0x08001404 end-sentinel literal 0x0203FFF0 -> 0x0203CFF0: reserves EWRAM "
        "0x0203D000..0x0203FFFF for enemy_pathing (uses 0x0203D000..0x0203F0FF: control block, 6 KB u8 field, "
        "1024-entry u16 queue).", mode="data")
    pad = blob + b"\x00" * ((-len(blob)) % 4)
    add(CODE_BASE, pad, f"Allocation 0x{CODE_BASE:08X}..0x{CODE_BASE + len(pad) - 1:08X} ({len(pad)} B, was zero; "
        f"owner enemy_pathing): Thumb code from Patches/enemy_pathing/src/enemy_pathing.c. Entries: "
        + ", ".join(f"{k}=0x{CODE_BASE + v:08X}" for k, v in sorted(syms.items(), key=lambda kv: kv[1]) if k.startswith("pf_")) + ".")
    for w in writes:
        off = int(w["offset"], 16)
        if w["address"].startswith("0x09") or w["address"] == f"0x{STUB_BASE:08X}":
            assert set(bytes.fromhex(w["before_hex"])) <= {0}, w["address"]

    d = {
        "schema_version": 1,
        "id": "enemy_pathing",
        "name": "Enemy pathfinding (flow field around walls; no attacks without line of sight)",
        "stage": "static_candidate",
        "profile_id": "ss2-cn-baseline",
        "baseline": json.loads((ROOT / "Patches/Definitions/Custom/town_return_heal.json").read_text())["baseline"],
        "source_provenance": {"kind": "new", "source": "Patches/enemy_pathing/src/enemy_pathing.c, Patches/enemy_pathing/build.py",
                              "notes": "Docs/mods/enemy_pathing.md"},
        "evidence": {
            "status": "runtime_verified",
            "user_acceptance": "not_run",
            "semantics": "Enemies in the chase state without line of sight (8x8 px collision cells) to their player target "
                         "steer by a BFS distance field seeded at the player, aiming at the farthest visible cell up to 6 "
                         "steps down the field; with line of sight the game's own chase/attack runs untouched, so they "
                         "no longer attack through walls. Path-following enemies get a longer cull leash.",
            "static_audit": "Docs/mods/enemy_pathing.md",
            "runtime": "runtime_verified (mGBA 0.10.5 headless; English+waitcnt+mod vs English+waitcnt; user states, "
                       "no diagnostic writes): Warrior_Pathing.ss0 - three casters stuck behind the hall lip walk round "
                       "by the stairs and reach the player (vanilla: never in 1500 frames); 16 user states x 900 frames "
                       "scripted walk: no crash, heap chain intact, mod dormant in towns; cold boot from the save: "
                       "boot/menus pixel-identical to vanilla, heap ends 0x0203CFF0. Cost: 1-4.8k cycles/frame average, "
                       "~28k on field-build frames. See Docs/mods/enemy_pathing.md.",
        },
        "writes": writes,
    }
    OUT_DEF.parent.mkdir(exist_ok=True)
    OUT_DEF.write_text(json.dumps(d, indent=1) + "\n")
    print(f"{OUT_DEF}: code {len(blob)} B, entries", {k: hex(CODE_BASE + v) for k, v in syms.items() if k.startswith("pf_")})

    if a.rom:
        if a.test_ram:
            tblob, tsyms = compile_blob(a.test_ram)
            assert tsyms == syms and len(tblob) == len(blob)
            for w in writes:
                if w["address"] == f"0x{CODE_BASE:08X}":
                    w = dict(w); w["after_hex"] = (tblob + b"\x00" * ((-len(tblob)) % 4)).hex()
                    writes = [x if x["address"] != w["address"] else w for x in writes]
            print(f"test ROM uses mod RAM base 0x{a.test_ram:08X}")
        rom = bytearray(TEST_BASE.read_bytes())
        for w in writes:
            off = int(w["offset"], 16); before = bytes.fromhex(w["before_hex"]); after = bytes.fromhex(w["after_hex"])
            assert rom[off:off + len(before)] == before, w["address"]
            rom[off:off + len(after)] = after
        Path(a.rom).write_bytes(rom)
        print("test ROM", a.rom)


if __name__ == "__main__":
    main()
