#!/usr/bin/env python3
"""Read ss2prof output directories. See tools/perf/README.md.

    perfreport.py summary RUN [RUN ...]       category table (cycles/frame), side by side
    perfreport.py top RUN [N]                 functions by inclusive cycles
    perfreport.py self RUN [N]                functions by self cycles (shadow stack)
    perfreport.py static ROM RUN [N]          self cycles by static function ranges (robust)
    perfreport.py tree RUN FUNC [DEPTH] [MIN] call tree below FUNC (MIN = cycles/frame)
    perfreport.py tasks RUN [TASK]            per-task cycles; with TASK, its functions
    perfreport.py timeline RUN [STEP]         busy and per-task cycles over time
    perfreport.py ann ROM RUN START END       Thumb disassembly with cycles and execs per frame
    perfreport.py loops ROM RUN [N]           hottest backward-branch loops
    perfreport.py copies RUN                  CpuSet/CpuFastSet traffic per frame
    perfreport.py swis RUN                    BIOS calls per frame

All numbers are per profiled frame. Frame budget: 280,896 cycles.
"""
import bisect, collections, struct, sys
from pathlib import Path

FRAME = 280896
ROOT = Path(__file__).resolve().parents[2]

# Known addresses (CN baseline = English phase1d = modpack). See GAME_PERFORMANCE.md.
LABELS = {
    0x00000000: "<scheduler/root>", 0x00000008: "<BIOS SWI>", 0x00000018: "<VBlank IRQ>",
    0x080003F0: "task_yield", 0x08000420: "task_wake_event", 0x08001204: "frame_end",
    0x08001348: "vram_queue_add", 0x08001394: "vram_queue_run (IRQ)",
    0x08006D98: "record_lookup", 0x080069C0: "record_lookup_core",
    0x08008B18: "sprite_build", 0x0900450A: "sprite_build (via HP-bar hook)",
    0x080BC300: "hp_bars_hook", 0x09004512: "hp_bar_draw_one",
    0x0800AC18: "terrain_probe_3x3", 0x08013864: "move_actor_with_collision",
    0x0801DB74: "player_stats_tick", 0x0801DE28: "player_stats_refresh",
    0x0801B690: "rebuild_player_equipment_status", 0x0801AE64: "add_stat_block",
    0x0800CEA4: "player_task", 0x08017D40: "enemy_ai_task (resume)",
    0x080B870C: "sound_vblank", 0x080B79F8: "m4a_SoundMain", 0x080B9AA0: "VBlankIntrWait",
    0x080B9A84: "CpuFastSet", 0x080B9A88: "CpuSet", 0x080B9A8C: "Div",
    0x080BA8A4: "__divsi3", 0x080BAAF4: "__modsi3?",
}
ENEMY_HINT = "tasks with the enemy AI (0x08017D40) on their stack"


def nm(a):
    return f"{a:08x} {LABELS.get(a, '')}".rstrip()


class Run:
    def __init__(self, d):
        self.d = Path(d)
        self.frames = [l.split("\t") for l in (self.d / "frames.tsv").read_text().splitlines()[1:]]
        self.n = len(self.frames)
        self.busy = [int(f[1]) for f in self.frames]
        self.funcs = {}
        for l in self._lines("funcs.tsv"):
            a, inc, slf, calls, rets = l.split()
            self.funcs[int(a, 16)] = (int(inc), int(slf), int(calls), int(rets))
        self.edges = collections.defaultdict(dict)
        for l in self._lines("edges.tsv"):
            c, f, cyc = l.split()
            self.edges[int(c, 16)][int(f, 16)] = int(cyc)
        self.ctx = {int(l.split()[0], 16): int(l.split()[1]) for l in self._lines("ctx.tsv")}
        self.ctxf = collections.defaultdict(dict)
        for l in self._lines("ctxf.tsv"):
            c, f, inc, slf = l.split()
            self.ctxf[int(c, 16)][int(f, 16)] = (int(inc), int(slf))

    def _lines(self, name):
        return [l for l in (self.d / name).read_text().splitlines() if l]

    def inc(self, a): return self.funcs.get(a, (0, 0, 0, 0))[0] / self.n
    def slf(self, a): return self.funcs.get(a, (0, 0, 0, 0))[1] / self.n
    def calls(self, a): return self.funcs.get(a, (0, 0, 0, 0))[2] / self.n

    def enemy_tasks(self):
        return [c for c, fs in self.ctxf.items() if c and 0x08017D40 in fs]

    def player_task(self):
        return [c for c, fs in self.ctxf.items() if c and 0x0800CEA4 in fs]


def cyc(x):
    return f"{x:9.0f} ({100 * x / FRAME:4.1f}%)"


def summary(runs):
    rows = collections.OrderedDict()
    for r in runs:
        en, pl = r.enemy_tasks(), r.player_task()
        hook = r.inc(0x080BC300)
        sprite = r.inc(0x0900450A) if hook else r.inc(0x08008B18)
        c = collections.OrderedDict()
        c[f"Enemy tasks ({ENEMY_HINT})"] = sum(r.ctx.get(e, 0) for e in en) / r.n
        c["  count"] = len(en)
        c["Player task"] = sum(r.ctx.get(p, 0) for p in pl) / r.n
        c["  of which stat rebuild (0x0801DE28)"] = r.inc(0x0801DE28)
        c["Other tasks"] = sum(v for k, v in r.ctx.items() if k and k not in en + pl) / r.n
        c["Sound driver (VBlank IRQ)"] = r.inc(0x080B870C)
        c["VRAM/OAM/palette copy queue (IRQ)"] = r.inc(0x08001394)
        c["Other IRQ"] = r.inc(0x18) - r.inc(0x080B870C) - r.inc(0x08001394)
        c["Sprite build 0x08008B18"] = sprite
        c["HP bars mod (own code)"] = hook - sprite if hook else 0
        c["Frame end, rest"] = r.inc(0x08001204) - (hook if hook else sprite) - r.inc(0x080B9AA0)
        c["Scheduler + yields"] = r.ctx.get(0, 0) / r.n - r.inc(0x08001204)
        c["TOTAL busy (avg)"] = sum(r.busy) / r.n
        c["TOTAL busy (peak frame)"] = max(r.busy)
        lag = sum(1 for f in r.frames if f[6] != "1")
        c["frames without exactly 1 VBlankIntrWait"] = lag
        for k, v in c.items():
            rows.setdefault(k, []).append(v)
    print(f"{'cycles per frame (% of 280,896)':52}" + "".join(f"{str(r.d.name)[-22:]:>22}" for r in runs))
    for k, vs in rows.items():
        if k.startswith("  count") or k.startswith("frames without"):
            print(f"{k:52}" + "".join(f"{v:>22}" for v in vs))
        else:
            print(f"{k:52}" + "".join(f"{cyc(v):>22}" for v in vs))


def top(r, n, key):
    idx = 0 if key == "inc" else 1
    for a, v in sorted(r.funcs.items(), key=lambda x: -x[1][idx])[:n]:
        print(f"{nm(a):46} incl {cyc(v[0] / r.n)}  self {cyc(v[1] / r.n)}  calls/f {v[2] / r.n:6.1f}")


def tree(r, root, depth, minc):
    print(f"{nm(root)}  incl {cyc(r.inc(root))}")
    def walk(a, lvl, seen):
        for f, c in sorted(r.edges.get(a, {}).items(), key=lambda x: -x[1]):
            if c / r.n < minc or f in seen:
                continue
            print("  " * lvl + f"{nm(f):46} {cyc(c / r.n)}  self {cyc(r.slf(f))}  calls/f {r.calls(f):.1f}")
            if lvl + 1 < depth:
                walk(f, lvl + 1, seen | {f})
    walk(root, 1, {root})


def tasks(r, want):
    en, pl = set(r.enemy_tasks()), set(r.player_task())
    for c, t in sorted(r.ctx.items(), key=lambda x: -x[1]):
        if want is not None and c != want:
            continue
        kind = "enemy" if c in en else "player" if c in pl else "scheduler" if c == 0 else ""
        print(f"task {c:08x} {kind:9} {cyc(t / r.n)}")
        if want is None:
            continue
        for f, (inc, slf) in sorted(r.ctxf[c].items(), key=lambda x: -x[1][0])[:40]:
            print(f"   {nm(f):46} incl {cyc(inc / r.n)}  self {cyc(slf / r.n)}")


def timeline(r, step):
    en = r.enemy_tasks()
    rows = [dict((int(k, 16), int(v)) for k, v in (x.split(":") for x in l.split("\t")[1:]))
            for l in (r.d / "ctxframes.tsv").read_text().splitlines() if l]
    print("frames       busy avg   busy max  " + " ".join(f"{e:08x}" for e in en))
    for b in range(0, r.n, step):
        seg, rs = r.busy[b:b + step], rows[b:b + step]
        print(f"{b:5}-{b + len(seg) - 1:<5} {sum(seg) / len(seg):9.0f} {max(seg):9.0f}  "
              + " ".join(f"{sum(x.get(e, 0) for x in rs) / len(rs):8.0f}" for e in en))


def load_pcs(r):
    pcs = {}
    for l in (r.d / "pcs.tsv").read_text().splitlines():
        a, c, n = l.split()
        pcs[int(a, 16)] = (int(c), int(n))
    return pcs


def ann(rom, r, lo, hi):
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB
    pcs = load_pcs(r)
    cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB); cs.skipdata = True
    print("address   cyc/f  exec/f  insn")
    for i in cs.disasm(rom[lo - 0x08000000:hi - 0x08000000], lo):
        c, n = pcs.get(i.address, (0, 0))
        print(f"{i.address:08x} {c / r.n:7.0f} {n / r.n:7.1f}  {i.mnemonic} {i.op_str}")


def static_self(rom, r, n):
    """Self time per function using code ranges, independent of call detection."""
    def h16(a):
        o = a - 0x08000000
        return struct.unpack_from("<H", rom, o)[0] if 0 <= o < len(rom) - 1 else None
    starts = set()
    for a, (inc, slf, calls, rets) in r.funcs.items():
        op = h16(a)
        if a < 0x08000000 or (op is not None and ((op & 0xFF00) in (0xB500, 0xB400) or rets > 0)):
            starts.add(a)
    hist = ROOT / "analysis/historical_decompilation/functions.txt"
    if hist.exists():
        for l in hist.read_text().splitlines():
            a = int(l.split("\t")[0], 16)
            if h16(a) is not None and (h16(a) & 0xFF00) == 0xB500:
                starts.add(a)
    starts = sorted(starts)
    selfc = collections.Counter(); hot = collections.defaultdict(collections.Counter)
    for a, (c, _) in load_pcs(r).items():
        i = bisect.bisect_right(starts, a) - 1
        f = starts[i] if i >= 0 and a - starts[i] < 0x4000 else a & ~0xFF
        selfc[f] += c; hot[f][a & ~0x3F] += c
    for f, c in selfc.most_common(n):
        h = ", ".join(f"{b:08x}:{v / r.n:.0f}" for b, v in hot[f].most_common(3))
        print(f"{nm(f):46} self {cyc(c / r.n)}   hottest 64B blocks {h}")


def loops(rom, r, n):
    pcs = load_pcs(r); out = []
    for a, (c, k) in pcs.items():
        if not 0x08000000 <= a < 0x0A000000:
            continue
        op = struct.unpack_from("<H", rom, a - 0x08000000)[0]
        tgt = None
        if op >> 12 == 0xD and (op >> 8) & 0xF < 0xE:
            off = op & 0xFF; tgt = a + 4 + 2 * (off - 256 if off > 127 else off)
        elif op >> 11 == 0x1C:
            off = op & 0x7FF; tgt = a + 4 + 2 * (off - 2048 if off > 1023 else off)
        if tgt is not None and tgt <= a:
            body = sum(pcs.get(x, (0, 0))[0] for x in range(tgt, a + 2, 2))
            out.append((body / r.n, tgt, a, k / r.n))
    for body, t, a, k in sorted(out, reverse=True)[:n]:
        print(f"loop {t:08x}..{a:08x}  body {cyc(body)}  back-edges/f {k:7.1f}")


def copies(r):
    agg = collections.Counter(); cnt = collections.Counter()
    regions = {2: "EWRAM", 3: "IWRAM", 4: "IO", 5: "PAL", 6: "VRAM", 7: "OAM", 8: "ROM", 9: "ROM"}
    for l in (r.d / "copies.tsv").read_text().splitlines():
        swi, src, dst, ctrl, calls = l.split()
        ctrl, dst, calls = int(ctrl, 16), int(dst, 16), int(calls)
        unit = 4 if swi == "0c" or ctrl & (1 << 26) else 2
        size = (ctrl & 0x1FFFFF) * unit
        d = regions.get(dst >> 24, "?")
        if d == "VRAM":
            d += " OBJ" if dst & 0xFFFFFF >= 0x10000 else " BG"
        key = ("CpuFastSet" if swi == "0c" else "CpuSet", regions.get(int(src, 16), "?"), d,
               "fill" if ctrl & (1 << 24) else "copy")
        agg[key] += size * calls; cnt[key] += calls
    for k, v in sorted(agg.items(), key=lambda x: -x[1]):
        print(f"{k[0]:10} {k[1]:6} -> {k[2]:9} {k[3]}  {v / r.n:7.0f} bytes/frame  {cnt[k] / r.n:5.1f} calls/frame")


def swis(r):
    names = {1: "RegisterRamReset", 5: "VBlankIntrWait", 6: "Div", 8: "Sqrt", 0xA: "ArcTan2",
             0xB: "CpuSet", 0xC: "CpuFastSet"}
    for l in (r.d / "swis.tsv").read_text().splitlines():
        n, calls, c = l.split()
        print(f"swi {n} {names.get(int(n, 16), ''):18} calls/f {int(calls) / r.n:6.1f}  "
              f"cycles/f {int(c) / r.n:8.0f}  (VBlankIntrWait includes the IRQ handler)")


def main(a):
    if not a or a[0] in ("-h", "--help"):
        print(__doc__); return
    cmd = a[0]
    if cmd == "summary":
        summary([Run(d) for d in a[1:]])
    elif cmd in ("top", "self"):
        top(Run(a[1]), int(a[2]) if len(a) > 2 else 50, "inc" if cmd == "top" else "self")
    elif cmd == "tree":
        tree(Run(a[1]), int(a[2], 16), int(a[3]) if len(a) > 3 else 3, float(a[4]) if len(a) > 4 else 500)
    elif cmd == "tasks":
        tasks(Run(a[1]), int(a[2], 16) if len(a) > 2 else None)
    elif cmd == "timeline":
        timeline(Run(a[1]), int(a[2]) if len(a) > 2 else 20)
    elif cmd == "ann":
        ann(Path(a[1]).read_bytes(), Run(a[2]), int(a[3], 16), int(a[4], 16))
    elif cmd == "static":
        static_self(Path(a[1]).read_bytes(), Run(a[2]), int(a[3]) if len(a) > 3 else 40)
    elif cmd == "loops":
        loops(Path(a[1]).read_bytes(), Run(a[2]), int(a[3]) if len(a) > 3 else 30)
    elif cmd == "copies":
        copies(Run(a[1]))
    elif cmd == "swis":
        swis(Run(a[1]))
    else:
        print(__doc__)


if __name__ == "__main__":
    main(sys.argv[1:])
