# tools/perf: cycle-exact profiler for SS2

`ss2prof` runs the game on the project's mGBA 0.10.5 core (`eu/emulator`) one instruction at a
time. It charges each instruction its exact cost in bus cycles, wait states included, to its PC
and to every function on a shadow call stack. `perfreport.py` turns the output into tables.
Findings from it are in [`GAME_PERFORMANCE.md`](../../GAME_PERFORMANCE.md).

It only reads its inputs. The ROM, state and save files are never written: saves are loaded
as mGBA temporary saves. All output goes to the directory you name.

## Build

Needs the emulator library that `eu/scripts/build_emulator.py` builds
(`eu/emulator/build/mgba/libmgba.so`) and a C compiler.

```sh
tools/perf/build.sh            # -> tools/perf/build/ss2prof
```

## Run

```sh
# From a desktop mGBA state, 300 frames with no input:
tools/perf/build/ss2prof --state translation/build/5_mobs.ss0 ROM.gba tools/perf/runs/5mobs

# Cold boot from a save with scripted input (N[:KEYS] tokens; KEYS like A, B+LEFT):
tools/perf/build/ss2prof --save workspace/input/光明之魂2.sav --skip 0 --shot-every 300 \
    --seq "540 1:START 120 1:A 120 1:A 180 1:A 240 1:A 120 1:A 600" ROM.gba tools/perf/runs/boot

# What-ifs, which are diagnostic writes into the running emulator, never the ROM:
#   --waitcnt 0x4017            ROM wait states + prefetch
#   --poke 0x03006545=0         one RAM byte (here: m4a reverb off)
```

| Option | Meaning |
|---|---|
| `--state FILE` | load an mGBA savestate (desktop `.ss0` works) |
| `--save FILE` | cartridge save for a cold boot (read only) |
| `--frames N` | frames to run without input (default 300) |
| `--seq "…"` | input schedule instead of `--frames` |
| `--skip N` | unprofiled lead-in frames (default 2) |
| `--waitcnt V` | write WAITCNT once after loading |
| `--poke A=V` | write one RAM byte after loading; repeatable |
| `--watch PC` | count executions of PC per frame. The default is `0x080B9AA2`, the game's per-frame `VBlankIntrWait`, so a frame whose count is not 1 is a lag frame. |
| `--shot-every N` | PNG every N frames in `OUT/shots/` |

The run takes about 1 s per 300 frames. It prints the busy, halt and event percentages.

## Read

```sh
P=tools/perf/perfreport.py
python3 $P summary RUN [RUN ...]        # category table side by side (cycles/frame, % of frame)
python3 $P tasks RUN [TASK]             # per task; with TASK its functions
python3 $P timeline RUN 30              # busy + per-enemy cycles over time
python3 $P top RUN 60                   # by inclusive cycles     (self: by self cycles)
python3 $P tree RUN 0800cea4 3 500      # call tree, edges >= 500 cycles/frame
python3 $P static ROM RUN               # self time by code ranges (doesn't rely on call detection)
python3 $P loops ROM RUN                # hottest loops
eu/.venv/bin/python $P ann ROM RUN 0800ac18 0800ae40   # annotated disassembly (needs capstone)
python3 $P copies RUN                   # CpuSet/CpuFastSet traffic (VRAM/OAM/palette uploads)
python3 $P swis RUN                     # BIOS calls
```

The frame budget is 280,896 cycles. `summary` identifies enemy tasks as tasks with the enemy AI
(`0x08017D40`) on their stack, and the player task as the one running `0x0800CEA4`.

## Output files (OUT/)

| File | Contents |
|---|---|
| `frames.tsv` | per frame: busy, halt and event cycles, instructions, IRQ cycles, watch hits, keys |
| `ctxframes.tsv` | per frame: cycles per task (`task:cycles`) |
| `pcs.tsv` | per PC: cycles, executions |
| `funcs.tsv` | per function: inclusive, self, calls, matched returns |
| `edges.tsv` | caller → callee inclusive cycles |
| `ctx.tsv`, `ctxf.tsv` | per task totals; per task × function |
| `swis.tsv`, `irqs.tsv`, `copies.tsv` | BIOS calls, IRQ sources, CpuSet/CpuFastSet copies |
| `summary.tsv` | totals, the final WAITCNT, cycles by memory region |
| `iwram.bin`, `end.png` | final IWRAM snapshot, final screen |

## How it works and its limits

* **Timing.** Instruction cost is the change in `mTimingCurrentTime` across `ARMRun`. IRQ
  entry, DMA and HALT are processed separately (`processEvents`). HALT time is idle; DMA time
  is charged to the stack.
* **Calls.** A call is a branch that sets `lr` to its own return address (BL, `mov lr`/`bx`).
  `_call_via_rN` veneers are retargeted to the real callee.
  * The compiler uses `bl` as a long jump inside huge functions. Those frames never return; a
    repeated push with the same return address and `sp` collapses onto the old frame. Such
    jump targets therefore appear as "functions" (e.g. `0x08018D1E` inside the enemy AI).
  * Returns pop to the frame whose return address matches; `sp` unwinding drops frames that
    have been left.
* **Tasks.** The game is a cooperative multitasker: each task (player, every enemy, effects…)
  has its own stack, switched at `0x08000308` (resume) and `0x08000414`/`0x08000360` (yield,
  exit). The profiler keeps one shadow stack per task record (`[0x030012D4]`).
* **Partial stacks.** Stacks start empty when profiling starts, so a task's outermost callers
  are unknown. The task totals are exact; inclusive times of functions that began before the
  first profiled frame are not. Use `static` for robust self time.
* **BIOS.** It is mGBA's HLE BIOS. `Div`, `Sqrt` and `ArcTan2` are computed in C with mGBA's
  cycle estimates; CpuSet, CpuFastSet and IntrWait run as real BIOS-region code.
* **ROM family.** The addresses are for the CN baseline family: CN baseline, English phase1d and
  mods built on them. Other ROMs (US, EU) need new constants at the top of `ss2prof.c`.
