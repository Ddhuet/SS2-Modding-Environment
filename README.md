# Shining Soul II Modding Environment

Tools, research and source for gameplay mods to **Shining Soul II** (Game Boy Advance), played in
English.

The game's Chinese modding community built a bug-fixed mod baseline on the Japanese ROM, along with
a set of gameplay mods. This project translated that baseline into English and keeps building new
mods on it, as well as porting fixes from the US version.

**No ROMs are included.** You need your own copy of the game.

## Just want to play?

Use the browser patcher: **[gentlebox.org/ss2-patcher](https://gentlebox.org/ss2-patcher/)**
(source: [Ddhuet/SS2-Patcher](https://github.com/Ddhuet/SS2-Patcher)). Start from the Japanese
ROM, apply the English translation, tick the mods you want, and download the patched ROM.
Everything runs locally in your browser.

Chinese players can do the same with the Chinese community ROM (or make it from the Japanese ROM on
the same page): every mod that doesn't need English text is also available in a Chinese version.

Japanese ROM: SHA-256 `9f3e0d0653de6504c1aeaf03de3cca06ae0c15a24089f0236398ec56d382d17a`,
CRC32 `7B39A7B2`.

## What's here

- **The English translation** of the CN mod baseline (finished), shipped as one `.bps`.
- **The official Chinese community mods:** level cap 250, respec, stackable consumables, shared
  warehouses, balance reworks and more. They are re-checked against the translation, and all of
  them stack.
- **Chinese versions of every mod** that doesn't need English text, so our mods also run on the
  Chinese community ROM.
- **Our own mods**, each with source, a build script and a write-up:

  | Mod | What it does |
  |---|---|
  | `enemy_pathing` | Enemies path around walls with a flow field instead of getting stuck. |
  | `summon_ai` | The Archer's summoned pet hunts enemies smartly (needs `enemy_pathing`). |
  | `enemy_hp_bars` | HP bars over enemies (a Chinese modder's code, with our fixes). |
  | `walk_angles` | True 45° diagonal movement (ported from a US patch by Nell). |
  | `waitcnt_fix` | Runs the cartridge at the intended wait states, which cuts lag. |
  | `town_return_heal` | Returning to town refills HP and SP. |
  | `normal_attack_charge_accuracy` | Tap attacks get the charge attack's accuracy. |
  | `guaranteed_fusing` | A matching forge recipe always succeeds. |
  | `counter_fix_slash` | The Warrior counter fix, plus a visible slash effect. |

- **Research:** function and RAM maps, structure fields, worked traces of how existing mods hook
  the game, US↔CN porting notes, and a cycle profiler for performance work.
- **Tooling:** a headless, frame-exact mGBA harness for scripted tests, a ROM/patch toolkit
  (`ss2tools`), disassembly and ROM-alignment scripts, and a patch manager that stacks
  `.ips`/`.ips32`/`.bps` patches and checks them for conflicts.

## For modders (and their AI agents)

- [`AGENTS.md`](AGENTS.md): the full workflow, from definition and conflict checks to building and
  testing, plus the space-ownership table and porting rules. AI agents should read it first, and
  humans will find it useful too.
- [`REPO_INDEX.md`](REPO_INDEX.md): the folder map and where new files go.
- [`Docs/INDEX.md`](Docs/INDEX.md): the knowledge base.
- [`Tools/Scripts/SCRIPTS_INDEX.md`](Tools/Scripts/SCRIPTS_INDEX.md): one line per script.

The short version: a mod is a JSON list of byte writes bound to the CN baseline ROM
(`Patches/Definitions/Custom/<id>.json`, every original byte asserted). `Tools/Scripts/make_bps.py`
builds it into a `.bps` that applies on top of the English ROM, in `Patch_Manager/patches/`.

### Setup

- **Python 3.11+.** Most scripts use only the standard library.
- **Capstone and the emulator** run from a venv:
  `python3 -m venv Tools/.venv && Tools/.venv/bin/pip install -r Tools/requirements-dev.txt`.
  Then build the headless emulator with
  `Tools/.venv/bin/python Tools/Scripts/build_emulator.py` (needs git, CMake and a C compiler).
- **LLVM** (`clang`, `llvm-mc`, `llvm-objcopy`) to assemble or compile injected code.
- **Your own Japanese ROM** as `ROMs/Shining_Soul_II_JP.gba`. That's the only ROM mod work needs:
  the English ROM and the Chinese community ROM are both made from it by the patches in
  `Patch_Manager/patches/`. The US ROM is only needed for porting US mods. Hashes are in
  `REPO_INDEX.md`.

## Credits

- **shiyi1133** and the Chinese Shining Soul II modding community, for the bug-fixed baseline, the
  official mods and the original research this builds on.
- The Chinese modder behind the US port pack used for porting research.
- **Nell**, for US-ROM mods and research (walk angles, Archer summon AI, and more).
- [mGBA](https://mgba.io/) (MPL 2.0) is the emulator core for the test harness.

Shining Soul II and its characters belong to SEGA. This is a fan project, not affiliated with or
endorsed by SEGA.
