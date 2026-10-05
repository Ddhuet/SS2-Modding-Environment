# Native headless mGBA adapter

The Python `Session` owns a synchronous native mGBA 0.10.5 core. It starts at
frame zero and runs only when asked. Software rendering, fixed RTC, and exact
frame input make sessions reproducible. No desktop display, audio device,
Wine, server, or socket is needed.

Build from the repository root:

```sh
python scripts/build_emulator.py
python scripts/test_emulator.py --rom inputs/ss2-eu.gba --save inputs/ss2-eu.sav
```

The build needs Git, C/C++ compilers, CMake, and optionally Ninja. libpng/zlib
development files enable screenshots; mGBA can fall back to its bundled
copies. Source fetching is the only network step. `--offline` prevents it.
The helper checks the exact pinned source revision and refuses local upstream
changes. CMake 4 compatibility is selected by the build helper without changing
upstream source. All libraries/build files remain local under `build/`.

```python
from emulator import Session

with Session("inputs/ss2-eu.gba", save="inputs/ss2-eu.sav",
             run_dir="runs/manual-001") as s:
    s.run_frames(180)
    s.press("START", frames=2, release_frames=60)
    s.screenshot("screenshots/title.png")
    state = s.save_state("states/title.ss1")
    memory = s.read_memory(0x02000000, 0x40000)
    s.load_state(state)
    print(s.frame, s.register("pc"), s.save_path)
```

Choose a new run directory; even an existing empty directory is rejected.
Inputs are copied exclusively to `game.gba` and `game.sav`.
Emulator writes reach only these copies. `close()` exports save data before
destroying the core and atomically replaces its save copy afterward;
`flush_save()` returns a separate `save-export.sav` while the core remains
open. Reboot from `s.save_path` after close or the explicit export path while
open. A savestate includes CPU/RAM, screenshot, cartridge save, and RTC; it
does not replace a game-level save operation.
Each state also has a `.ss1.json` sidecar binding it to the exact ROM SHA-256,
state SHA-256, and backend revision. Loading requires that sidecar and verifies
all three before touching the core. External, cross-ROM, altered, or old states
without metadata are rejected. Keep the sidecar with the state file.

`run_frames(n, keys=0)` holds the given keys for exactly n frames; the next
call defaults to releasing them. `press(keys, frames=1, release_frames=1)`
presses and then releases. Names are A, B, SELECT, START, RIGHT, LEFT, UP,
DOWN, R, L; strings accept `+`, commas, or spaces, and lists or masks work.
`run_frames(0, keys)` changes the held keys without advancing time.

Memory helpers are `read8/read16/read32`, `read_memory`, and
`write8/write16/write32`. Writes permit aligned EWRAM/IWRAM addresses only.
`register(name)`, `write_register(name, value)`, and `step(n)` support controlled
instruction experiments. These change the live isolated core; ROM patching
must use the separate verified patch tools. Memory reads use the emulator bus;
IO reads can have hardware side effects. Use RAM snapshots for comparisons.

Artifacts use paths relative to the run directory or absolute paths inside it.
Output paths cannot escape it or overwrite ROM/save files. The manifest
and all native artifacts publish atomically from exclusive temporary files;
protected input symlinks and hardlink aliases are rejected. `session.json`
records original source hashes, backend revision, paths, and final frame.
`scripts/emulate.py` executes JSON command lists and records every result:

```json
[
  {"op": "frames", "count": 180},
  {"op": "press", "keys": "START", "frames": 2, "release_frames": 60},
  {"op": "read", "address": "0x02000000", "width": 4},
  {"op": "screenshot", "path": "screenshots/check.png"},
  {"op": "save_state", "path": "states/check.ss1"}
]
```

The infrastructure check verifies deterministic replay and fresh-core reload,
input wiring, frame counts, RAM/CPU/pixel restoration, save flushing, output
boundaries, and original input hash invariance. These checks establish the
harness, not skill refund or any other game feature. Run separate gameplay
tests for those claims.

## Binding evaluation and portability

The user-suggested [mgba-rs](https://github.com/tangobattle/mgba-rs) was inspected
at revision `2edba1ed2cfb3f54ab3b941d944ea1f82cc1f4b6`. It wraps a submodule of
the Tango mGBA fork, builds C through CMake, and generates bindings with
bindgen. Its [build script](https://github.com/tangobattle/mgba-rs/blob/2edba1ed2cfb3f54ab3b941d944ea1f82cc1f4b6/mgba-sys/build.rs)
explicitly handles Windows library links (`shlwapi`, `ole32`, `uuid`), Visual
Studio configuration directories and defines, and MSVC C11 flags. This is
evidence of intended Windows support, but this task has not compiled or run
those bindings on Windows. Rust/Cargo and libclang would be additional build
requirements here; existing C/Python tools were sufficient for this harness.

The delivered adapter is currently Linux-focused: its Python loader expects
`libss2_mgba.so`. A Windows port would need a DLL loader/export configuration
and its own native verification. Existing Windows tools elsewhere in the
workspace remain separate. Core source is unmodified and pinned in
[upstream.json](upstream.json), with the full MPL license in
[MGBA_LICENSE.txt](MGBA_LICENSE.txt).

## Bounded instruction observation

`Session.run_until(cpu_address, instructions=10_000_000, frames=120, keys=0)`
executes the native core until it is paused **before** that instruction or a
budget expires. It reports `hit`, `stop` (`hit`, `instruction_budget`, or
`frame_budget`), executed instructions, elapsed frames and r0..r12/SP/LR/PC/CPSR.
The supplied keys remain held afterward; explicitly release or replace them.
Limits are 10 million instructions and 10,000 frames per call, including zero.
An immediate hit is checked before budgets. No RAM/register edits are needed
for observation; the resistance scripts record any diagnostic writes separately.

The public mGBA register PC is one prefetched instruction ahead at a step
boundary; the bridge subtracts two bytes in Thumb mode or four in ARM mode.
Use CPU instruction addresses, not that raw PC. The resistance diagnostic
verifies the pause by executing the real scheduler's `movs r0,#1` next.
Direct synthetic calls must start from a running task rather than a halted
BIOS IntrWait state, and disclose CPSR/IRQ and stack changes.

Use the [Goblin Fort fixture](../docs/fixtures/README.md) for immediate combat
research and [the resistance audit](../docs/status-resistance-audit.md) for
reproducible examples. A bounded miss is useful evidence; do not replace it
with unlimited Python instruction polling.
