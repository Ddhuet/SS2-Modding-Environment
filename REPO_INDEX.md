# Repo index

The repo's skeleton: what lives where, and where new things go. Rules and workflow are in
`AGENTS.md`; this file is the map.

```
README.md            public overview
AGENTS.md            agent instructions (read first)
LOCAL.md             this checkout's private instructions (git-ignored; may not exist)
REPO_INDEX.md        this map
GAME_PERFORMANCE.md  frame budget / profiling findings
push.sh              commit + push helper (local, git-ignored)
ROMs/                ROM inputs (git-ignored)
Patch_Manager/       patcher GUI/CLI; patches/ holds every finished .bps
Patches/             mod sources: Definitions/ + one working folder per mod
Savestates/          save fixture + desktop mGBA states for tests
Tools/               scripts, ss2tools, headless emulator, profiler, venv
Docs/                knowledge base (Docs/INDEX.md)
Build/               generated scratch: English ROM, patch JSONs, emulator runs (git-ignored)
Other_Modders/       other people's material, read-only (some private, never tracked)
Archive/             finished phases: EU port, Windows tooling
```

## ROMs (`ROMs/`, never tracked)

| File | SHA-256 | What it is |
|---|---|---|
| `Shining_Soul_II_JP.gba` | `9f3e0d06…d17a` | Japanese retail ROM, 16 MiB. **The starting file and the only one mod work needs** (same as `Patch_Manager/Input_ROM/`). |
| `Shining_Soul_II_CN_Baseline.gba` (optional) | `45ac38bb…c989` | CN community mod baseline (`SS2_SC_bug_fixed`), 32 MiB. Definitions' `before_hex` comes from it. Made from JP by `Patch_Manager/patches/cn_baseline.bps` when absent. Profile `Tools/profiles/ss2-cn-baseline.json`. |
| `Shining_Soul_II_USA.gba` (optional) | `b31c19d2…` | US AU2E rev0. For US→CN ports and regenerating the translation. Profile `Tools/profiles/ss2-us.json`. |
| `Shining_Soul_II_CN.gba` (optional) | `8a7ebaa8…` | 16 MiB Chinese localization: most likely the plain fan translation the CN baseline was built from (differs from the baseline's first 16 MiB in 43 of 4,096 4 KB blocks). Profile `Tools/profiles/ss2-cn-source.json`. Rarely needed. |
| `Shining_Soul_II_EU.gba` | `e5c64a17…` | EU retail. Only for the archived EU port. |

The English ROM (`ss2-en-phase1d.gba`, `4343a9c7…53cb`) is not kept: it is made from the JP ROM +
`Patch_Manager/patches/english_translation.bps` (`Tools/Scripts/base_roms.py` caches it as
`Build/en.gba`; `make_bps.py --english-out PATH` saves a copy). The CN baseline likewise comes from
JP + `cn_baseline.bps`.

## Where things go

| You are making… | Put it in |
|---|---|
| A new mod's definition | `Patches/Definitions/Custom/<id>.json` (copy `Patches/Definitions/patch-template.json`) |
| Its sources, build script, probes, scratch ROMs, runs | `Patches/<id>/` |
| The finished patch | `Patch_Manager/patches/<id>.bps` (via `Tools/Scripts/make_bps.py`) + its Chinese version `cn/<id>.bps` (via `make_cn_set.py`) |
| The mod's write-up | `Docs/mods/<id>.md` (+ screenshots/logs in `Docs/mods/evidence/`) |
| A reusable script (not tied to one mod) | `Tools/Scripts/` + a line in `Tools/Scripts/SCRIPTS_INDEX.md` |
| General RE knowledge (functions, fields, systems) | `Docs/` (or `Docs/Analysis/`), linked from `Docs/INDEX.md` |
| A savestate used by several mods | `Savestates/`; one used by a single mod: `Patches/<id>/` |
| Temporary ROMs, emulator runs, regenerated JSON | `Build/` (git-ignored, disposable) |
| Someone else's patch or handoff | `Other_Modders/<name>/` |

## Folder details

**`Patch_Manager/`**: `patch_manager.py` (GUI + headless `build(rom, [patches])`), `selftest.py`,
`build_exe.sh` (Windows exe into `Windows/`). `Input_ROM/` holds the pure JP ROM: **never change
it**. `patches/` holds the two base patches (`english_translation.bps`, `cn_baseline.bps`), every
finished mod patch, `cn/` (Chinese versions + `compat.json`) and `base_rom.sha256`.
`Output_ROM/` is where builds land.

**`Patches/`**: see `Patches/README.md` (layout and definition schema).

**`Tools/`**:
- `Scripts/`: all reusable scripts; see `Tools/Scripts/SCRIPTS_INDEX.md`. `Scripts/asm/` holds the
  translation's injected Thumb sources.
- `ss2tools/`: `python -m ss2tools` CLI (identify, verify, inspect, bl, build, port-candidates) +
  BPS codec. Run as `cd Tools && .venv/bin/python -m ss2tools …`.
- `emulator/`: headless mGBA 0.10.5 `Session` (frame-exact input, memory, screenshots, states). Build
  with `Tools/.venv/bin/python Tools/Scripts/build_emulator.py`. Scripts import it after
  `sys.path.insert(0, ROOT/"Tools")`.
- `.venv/`: Python with Capstone (`Tools/.venv/bin/python`). Recreate with
  `python3 -m venv Tools/.venv && Tools/.venv/bin/pip install -r Tools/requirements-dev.txt`.
- `profiles/`: ROM identity profiles. `tests/`: unit tests. `perf/`: cycle profiler (`ss2prof`).
  A desktop mGBA may sit in `Tools/` locally (untracked).

**`Docs/`**: start at `Docs/INDEX.md`. Mods in `Docs/mods/`, official-mod audits in
`Docs/code_audits/`, RE package in `Docs/Analysis/`, text/translation in `Docs/Translation/`,
US porting in `Docs/Porting/`, lookup data in `Docs/Reference_Data/`, history in `Docs/Old_Docs/`.

**`Savestates/`**: see `Savestates/README.md`.

**`Other_Modders/`**: see `Other_Modders/README.md`. Some folders are private and git-ignored, so
they exist only in some checkouts.

**`Archive/`**: see `Archive/README.md`.

**Outside this repo**: `../SS2_Web_Patcher/` is the public web patcher. Don't write to it unless asked.
