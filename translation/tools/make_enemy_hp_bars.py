#!/usr/bin/env python3
"""Rebuild patches/custom/enemy_hp_bars.json from the CN modder's payload plus our fixes.

    python3 translation/tools/make_enemy_hp_bars.py

Source bytes: SS2_GBA_HACK optional-menu-builder payload for field_living_character_hp_display
(standalone, requires=[]) and the ui.boss_label.white_black image. See docs/mods/enemy_hp_bars.md.

Fix 1 (boss bar on normal enemies): the payload picks the Boss layout from entity +0x7A bit1
alone, which ordinary enemies also carry (tutorial slime 0x46, jungle enemies 0x2). Require
+0x39A == 3 as well, which the modder's own later rewrite (large_numeric_integration) also does.

Fix 2 (some enemies get no bar): +0x1DC was read as u16 and compared to 2; read it as u8.

Fix 3 (bars over the town after an Angel Wing): skip drawing while the current area id is 0.
"""
import base64, json, subprocess, tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
HACK = ROOT / "SS2_GBA_HACK/rom/tools"
OUT = ROOT / "patches/custom/enemy_hp_bars.json"
BASE = 0x09004400


def assemble(src, org):
    with tempfile.TemporaryDirectory() as t:
        s, o, b = Path(t, "a.s"), Path(t, "a.o"), Path(t, "a.bin")
        s.write_text(".syntax unified\n.thumb\n" + src)
        subprocess.run(["llvm-mc", "-triple=thumbv4t-none-eabi", "-filetype=obj", str(s), "-o", str(o)], check=True)
        subprocess.run(["llvm-objcopy", "-O", "binary", "--only-section=.text", str(o), str(b)], check=True)
        return b.read_bytes()


def bl(src, dst):
    off = (dst - (src + 4)) >> 1
    return (0xF000 | ((off >> 11) & 0x7FF)).to_bytes(2, "little") + (0xF800 | (off & 0x7FF)).to_bytes(2, "little")


def put(code, addr, old, new):
    o = addr - BASE
    assert code[o:o + len(old)] == old, f"preimage mismatch at {addr:#x}"
    assert len(new) == len(old)
    code[o:o + len(new)] = new


payload = json.loads((HACK / "current_optional_menu_builder_payloads.json").read_text())
feat = next(f for f in payload["features"] if f["id"] == "field_living_character_hp_display")
img = json.loads((HACK / "current_image_resource_payload.json").read_text())["runs"][0]
assert img["resource_id"] == "ui.boss_label.white_black"
code = bytearray.fromhex(feat["writes"][2]["after_hex"])
assert len(code) == 0x800

# --- Fix 1: boss = (+0x39A == 3) && (+0x7A bit1) ---------------------------------------
CLASSIFY, HELPER = 0x09004484, 0x09004B00
helper = assemble("""
    ldr  r4, =0x39A
    ldrb r4, [r6, r4]
    cmp  r4, #3
    bne  1f
    movs r4, #0x7A
    ldrh r4, [r6, r4]
    lsrs r4, r4, #2       @ C = +0x7A bit1
    movs r4, #3           @ MOV imm leaves C alone
    bcs  2f
1:  movs r4, #0
2:  bx   lr
    .ltorg
""", HELPER)
assert all(b == 0 for b in code[HELPER - BASE:HELPER - BASE + len(helper)])
code[HELPER - BASE:HELPER - BASE + len(helper)] = helper
# 6 halfwords -> bl helper; cmp r4,#3; bne 0x0900449A (ordinary path, old bcc target); nop; nop
put(code, CLASSIFY, bytes.fromhex("7a24345ba408002405d30324"),
    bl(CLASSIFY, HELPER) + bytes.fromhex("032c 06d1 c046 c046".replace(" ", "")))

# --- Fix 2: hostile class +0x1DC is a byte; the high byte holds flags (e.g. 0x4202) ------
# `ldrh r0,[r6,r0]` -> `ldrb r0,[r6,r0]`, as in the modder's later rewrite (adapt.py).
put(code, 0x0900444C, bytes.fromhex("305a"), bytes.fromhex("305c"))

# --- Fix 3: no bars in town (area 0) -------------------------------------------------------
# After an Angel Wing the battle pool keeps the dungeon's hostiles (positions included), so their
# bars were drawn over the castle courtyard. The first gate `ldr r0,=0x03002960; ldr r0,[r0];
# cmp r0,#0; beq exit` becomes `bl helper; beq exit`; the helper also returns Z=1 when the
# current area id (u16 at [[0x03005DB4]]+0) is 0. Re-entering the dungeon makes the area nonzero,
# so the bars come back without any warp hook. Clobbers r0 only (reloaded right after).
GATE, TOWN = 0x0900440A, 0x09004B20
town = assemble("""
    ldr  r0, =0x03002960
    ldr  r0, [r0]
    cmp  r0, #0
    beq  9f               @ original gate: Z=1 -> exit
    ldr  r0, =0x03005DB4
    ldr  r0, [r0]
    cmp  r0, #0
    beq  8f               @ no world yet: keep original behaviour
    ldrh r0, [r0]
    cmp  r0, #0
    beq  9f               @ town: Z=1 -> exit
8:  movs r0, #1           @ Z=0 -> draw
9:  bx   lr
    .ltorg
""", TOWN)
assert all(b == 0 for b in code[TOWN - BASE:TOWN - BASE + len(town)])
code[TOWN - BASE:TOWN - BASE + len(town)] = town
put(code, GATE, bytes.fromhex("ab48 0068 0028 4ad0".replace(" ", "")),
    bl(GATE, TOWN) + bytes.fromhex("4bd0 c046".replace(" ", "")))  # beq 0x090044A8; nop
d = json.loads(OUT.read_text())
w = d["writes"]
assert [x["address"] for x in w] == ["0x08001208", "0x080BC300", "0x09004400", "0x09A00000"]
assert w[2]["before_hex"] == "00" * 0x800
assert w[3]["after_hex"] == base64.b64decode(img["data_b64"]).hex()
w[2]["after_hex"] = code.hex()
w[2]["note"] = (
    "Modder's Thumb code + literals (0x09004400..0x09004BFF) with our fixes. Scans the 5 battle records "
    "(pool 0x030057B4, stride 0x454), hostile +0x1DC==2, HP +0x5C/+0x1D6; draws OBJ bars via the native OAM "
    "shadow/DMA queue. Grows the native queue heap block 4800->6144 B once. Probes the modder's optional menu "
    "entry at 0x09009BF0 (zero here, so bars always on). Fix 1: 0x09004484 `bl 0x09004B00` + `cmp r4,#3; bne`; "
    "helper at 0x09004B00 returns r4=3 (Boss layout) only if +0x39A==3 and +0x7A bit1, else 0. Fix 2: 0x0900444C ldrh->ldrb for the +0x1DC class byte. "
    "Fix 3: 0x0900440A `bl 0x09004B20; beq exit; nop`; helper keeps the original [0x03002960]!=0 gate and also "
    "exits while the area id u16 [[0x03005DB4]]+0 is 0 (town), so dungeon hostiles kept after an Angel Wing get no bars there. "
    "Generated by translation/tools/make_enemy_hp_bars.py.")
OUT.write_text(json.dumps(d, indent=2) + "\n")
print("wrote", OUT, "helper", len(helper), "B at", hex(HELPER))
