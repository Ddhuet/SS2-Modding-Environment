"""Visible input only: stand still; when an enemy enters its attack state (2), face it and press A.
Screenshots every frame while the slash timer runs. usage: counter_bot.py ROM STATE FRAMES"""
import sys; sys.path.insert(0, "/home/david/Documents/SS2_Modding/pathing")
from common import *
s, f = open_state("cbot", rom=Path(sys.argv[1]).resolve(), state=ROOT / sys.argv[2])
import os
if os.environ.get("SKILL"):   # DIAGNOSTIC RAM write: give the player COUNTER level N
    s.run_frames(1); s.write16(s.read32(0x03003580) + 0x54, int(os.environ["SKILL"])); print("DIAG: counter level set to", os.environ["SKILL"])
base = s.read32(0x030057B4); shots = 0; prevhp = {}
cool = 0
for i in range(int(sys.argv[3])):
    keys = ""
    if cool: cool -= 1
    else:
        cx = s.read16(0x0300328C) + 120; cy = s.read16(0x0300328E) + 90
        best = None
        for p in pool(s):
            if p["used"] and p["hp"] and s.read16(p["addr"] + 0xC) == 2:
                d = abs(p["x"] - cx) + abs(p["y"] - cy)
                if best is None or d < best[0]: best = (d, p)
        if best and best[0] < 60:
            p = best[1]; dx, dy = p["x"] - cx, p["y"] - cy
            keys = ("RIGHT" if dx > 0 else "LEFT") if abs(dx) > abs(dy) else ("DOWN" if dy > 0 else "UP")
            s.run_frames(1, keymask(keys)); keys = "A"; cool = 20
        elif os.environ.get("CHASE") and i % 60 < 40:
            near = [q for q in pool(s) if q["used"] and q["hp"]]
            if near:
                q = min(near, key=lambda q: abs(q["x"] - cx) + abs(q["y"] - cy)); dx, dy = q["x"] - cx, q["y"] - cy
                if abs(dx) + abs(dy) > 24:
                    keys = ("RIGHT" if dx > 0 else "LEFT") if abs(dx) > abs(dy) else ("DOWN" if dy > 0 else "UP")
    f0 = s.frame
    while s.frame == f0:
        r = s.run_until(int(sys.argv[4],0), frames=1, keys=keymask(keys))
        if not r["hit"]:
            if r["stop"] == "instruction_budget": continue
            break
        R = r["registers"]; tgt = R["r8"]
        print(i, "DMG check: attacker", hex(R["r7"]), "target", hex(tgt), "target state", s.read16(tgt + 0xC), "counter lvl", s.read16(s.read32(0x03003580) + 0x54))
        s.step(1)
    for p in pool(s):
        if prevhp.get(p["slot"], p["hp"]) != p["hp"]: print(i, "hit slot", p["slot"], prevhp[p["slot"]], "->", p["hp"])
        prevhp[p["slot"]] = p["hp"]
    st = s.read32(0x03007920)
    if st >> 16 == 0x534C and st & 0xFFFF:
        print(i, "SLASH", hex(st), "world", s.read16(0x03007924), s.read16(0x03007926), "oam0", s.read_memory(0x030013D0, 6).hex())
        if shots < 20: s.screenshot(f"s_{i:05d}.png"); shots += 1
s.screenshot("end.png"); print(f)
s.__exit__(None,None,None)
