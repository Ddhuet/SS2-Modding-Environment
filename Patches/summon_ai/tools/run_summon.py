"""Replay a user state on a ROM and log the summon every frame.

    run_summon.py STATE FRAMES [--rom ROM] [--keys "f0:KEYS f1:KEYS ..."] [--tag T] [--every N] [--png]

--keys: from frame f the given keys are held (KEYS '' or '-' releases), e.g. "0:A 40:- 300:RIGHT 340:-".
Logs (one line per change of phase or every N frames): phase, pet px, pet cell open?, owner px,
target id, hits, owner HP, enemy HPs, mod state (hurt, stuck). Writes log.json (+ track.png) in the run dir.
No RAM writes.
"""
import sys, json, argparse
sys.path.insert(0, "/home/david/Documents/SS2_Modding/summon/tools")
from scommon import *

PH = {0x08071F32: "orbit", 0x08072592: "chase", 0x080726B4: "hit", 0x08072A02: "home", 0x0807189C: "init"}
PF_BASE = 0x0203D000


def grid_open(s, x, y):
    W, H = s.read16(0x03003288), s.read16(0x0300328A)
    cx, cy = x >> 11, (y + 0x200) >> 11
    if not (0 <= cx < W and 0 <= cy < H): return False
    v = s.read16(s.read32(0x03003278) + 2 * (cy * W + cx))
    return ((v & 0xF00) == 0 and (v & 0xFF) != 1) or bool(v & 0x1000)


def sample(s):
    st = summon_tasks(s)
    p = 0x03003D80
    rec = {"f": s.frame, "own": (s32(s.read32(p + 0x94)) >> 8, s32(s.read32(p + 0x98)) >> 8), "hp": s.read16(p + 0xCC)}
    rec["en"] = [(e["slot"], round(e["x"]), round(e["y"]), e["hp"]) for e in pool(s) if e["used"]]
    rec["pf"] = s.read8(PF_BASE + 48)
    if not st:
        rec["ph"] = "none"; return rec
    t, _, lr, sp = st[0]
    F = sp + 0x30
    x, y = s32(s.read32(F + 0x70)), s32(s.read32(sp + 8))
    rec.update(ph=PH.get((lr & ~1) - 4, hex(lr)), pet=(x >> 8, y >> 8), open=grid_open(s, x, y),
               tgt=s.read32(F + 0x60), hits=s.read32(F + 0x68), cnt=s.read32(F + 0x88))
    if s.read32(PF_BASE + 0xC0) == 0x31414D53:
        m = PF_BASE + 0xC0
        rec["sm"] = dict(hurt=s.read8(m + 42), stuck=s.read16(m + 26), hstuck=s.read16(m + 30), ghost=s.read8(m + 43), sees=s.read8(m + 45), why=s.read8(m + 46), plen=s.read16(m + 48), best=s.read16(m + 24), aim=(s.read16(m+32), s.read16(m+34)), aok=s.read8(m+44),
                         skip=s.read16(m + 0x14))
    rec["pf"] = s.read8(PF_BASE + 48)
    return rec


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("state"); ap.add_argument("frames", type=int)
    ap.add_argument("--rom", default=str(ROM)); ap.add_argument("--keys", default="")
    ap.add_argument("--tag", default="run"); ap.add_argument("--every", type=int, default=30)
    ap.add_argument("--png", action="store_true"); ap.add_argument("--shots", default="")
    a = ap.parse_args()
    sched = {}
    for tok in a.keys.split():
        f, k = tok.split(":"); sched[int(f)] = 0 if k in ("", "-") else keymask(k)
    shots = {int(v) for v in a.shots.split(",") if v}
    s, folder = open_state(a.tag, a.state, rom=a.rom)
    log, held, last = [], 0, None
    for i in range(a.frames):
        if i in sched: held = sched[i]
        s.run_frames(1, held)
        r = sample(s); r["i"] = i; log.append(r)
        if i in shots: s.screenshot(f"shot_{i:04d}.png")
        key = (r.get("ph"), r.get("tgt"))
        if key != last or i % a.every == 0:
            print(i, r.get("ph"), "pet", r.get("pet"), "open" if r.get("open") else "WALL", "own", r["own"], "tgt", hex(r.get("tgt", 0)),
                  "hits", r.get("hits"), "hp", r["hp"], "en", r["en"], r.get("sm", ""), "pf", r["pf"])
            last = key
    (folder / "log.json").write_text(json.dumps(log))
    walls = sum(1 for r in log if r.get("pet") and not r.get("open"))
    hits = sum(1 for a_, b in zip(log, log[1:]) if a_.get("ph") != "hit" and b.get("ph") == "hit")
    dmg = {}
    for r0, r1 in zip(log, log[1:]):
        h0 = {e[0]: e[3] for e in r0["en"]}
        for e in r1["en"]:
            if e[0] in h0 and e[3] < h0[e[0]]: dmg[e[0]] = dmg.get(e[0], 0) + h0[e[0]] - e[3]
    dists = [((r["pet"][0] - r["own"][0]) ** 2 + (r["pet"][1] - r["own"][1]) ** 2) ** 0.5 for r in log if r.get("pet")]
    far = sum(1 for d_ in dists if d_ > 120)
    print(f"SUMMARY far>120px {far} maxdist {max(dists) if dists else 0:.0f} frames {len(log)} attacks {hits} pet-in-wall frames {walls} enemy damage {dmg} "
          f"owner hp {log[0]['hp']}->{log[-1]['hp']} phases", {p: sum(1 for r in log if r.get('ph') == p) for p in set(r.get('ph') for r in log)})
    print("run dir", folder)
    if a.png:
        render(s, log, folder / "track.png")


def render(s, log, out):
    from PIL import Image, ImageDraw
    W, H = s.read16(0x03003288), s.read16(0x0300328A); g = s.read32(0x03003278)
    sc = 4
    im = Image.new("RGB", (W * 8 // 2 * sc // 2 * 1, H * 8 // 2 * sc // 2 * 1), (0, 0, 0))
    k = sc / 2 / 2 * 1  # px -> image
    k = 1.0
    im = Image.new("RGB", (W * 8, H * 8), (0, 0, 0)); d = ImageDraw.Draw(im)
    for cy in range(H):
        for cx in range(W):
            v = s.read16(g + 2 * (cy * W + cx))
            op = ((v & 0xF00) == 0 and (v & 0xFF) != 1) or bool(v & 0x1000)
            d.rectangle([cx * 8, cy * 8 - 2, cx * 8 + 7, cy * 8 + 5], fill=(40, 40, 40) if op else (120, 60, 60))
    col = {"orbit": (80, 160, 255), "chase": (255, 220, 0), "hit": (255, 0, 0), "home": (0, 255, 120)}
    for r in log:
        if r.get("pet"): d.point(r["pet"], fill=col.get(r["ph"], (255, 255, 255)))
        d.point(r["own"], fill=(255, 255, 255))
        for e in r["en"]: d.point((e[1], e[2]), fill=(255, 0, 255))
    im = im.resize((im.width * 2, im.height * 2), Image.NEAREST)
    im.save(out)
    print("track", out)


if __name__ == "__main__":
    main()
