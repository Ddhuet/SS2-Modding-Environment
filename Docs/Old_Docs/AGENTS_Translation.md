# SS2 Modding Environment: translation branch

**Mission on this branch: an English translation of the Chinese mod baseline ROM of Shining
Soul II (GBA), so that Chinese mods apply with (near) binary compatibility.** Everything else
is supporting material.

**Start with [translation/PLAN.md](translation/PLAN.md),** then
[translation/docs/TEXT_ARCHITECTURE.md](translation/docs/TEXT_ARCHITECTURE.md) ONLY IF WORKING ON TEXT TRANSLATION. Follow the
user's current task; the plan is a guide, not an automatic work queue.

## How this repo got here

This repo began as a translated copy of Chinese modding notes for the JP-cartridge Chinese ROM.
It then became a CN→EU porting and EU modding environment (`eu/`). On 2026-10-10 the direction
changed to translating the CN baseline instead. Folder names, READMEs and older docs still
reflect the EU era; read them as history, except the tooling listed below.

| Path | What it is now |
|---|---|
| `translation/` | **Active work.** Plan, findings, tools. New docs and tools go here. |
| `eu/` | EU-era workspace. **Reuse its tooling** (below). Its docs and addresses are EU-ROM-only. |
| `docs/`, `analysis/`, `reference_data/`, `patches/definitions/`, root `*.md` | Original Chinese research, translated. Addresses are for the **CN ROM, which is now our target**, so they are useful leads again. Still verify them; some docs have errors (see `translation/docs/HUGEAPPLEPACK_FINDINGS.md` §8). |
| `patches/definitions/` | CN mod patch definitions, all built against the CN baseline. These are the compatibility targets. |
| `HugeApplePack/` | Local-only, **untracked** USA port pack from a Chinese modder. Read-only reference; never edit or commit it. Its knowledge is in `translation/docs/HUGEAPPLEPACK_FINDINGS.md`. |
| `workspace/`, `tools/`, `mGBA-*-win64/` | Original Windows-oriented Chinese tooling. Rarely needed. |

## ROM inputs (filenames mislead)

ROMs are never tracked. The checklist is in [ROMs/REQUIRED_ROMS.md](ROMs/REQUIRED_ROMS.md).

| File | What it really is |
|---|---|
| `eu/inputs/ss2-cn-baseline.gba` (= `workspace/input/光明之魂2.gba`) | **Translation base.** `SS2_SC_bug_fixed`, 32 MiB, AU2J, SHA-256 `45ac38bb…`, profile `eu/profiles/ss2-cn-baseline.json`. |
| `ROMs/Shining_Soul_II_JP.GBA` (= `eu/inputs/ss2-cn-source.gba`) | 16 MiB **Chinese** localization, not pristine Japanese. Same layout as the baseline. |
| `ROMs/Shining Soul II (USA).gba` | US AU2E rev0, SHA-256 `b31c19d2…`. **Source of English text, names and font.** No profile yet; add one under `translation/` before building from it. |
| `ROMs/Shining_Soul_II_EU.gba` (= `eu/inputs/ss2-eu.gba`) | EU, 5 languages. Possible later source for FR/DE/IT/ES only. |

No pristine Japanese ROM exists in the repo, and none is needed.

Save fixtures (tracked, immutable; always work on copies):
- `workspace/input/光明之魂2.sav`: CN baseline save.
- `ROMs/saves/Shining_Soul_II.sav` and `eu/inputs/ss2-eu.sav`: EU saves.

## Tooling to reuse (run from `eu/` with `eu/.venv/bin/python`)

- **`python -m ss2tools`:** standard-library ROM CLI.
  - `identify` / `verify --profile` for exact ROM identity; `inspect` for read-only hex, halfwords and Thumb BL targets; `bl` for BL encoding.
  - `build` applies a declarative JSON patch to an exact profile, checks every preimage, writes a new ROM plus manifest, and does IPS/BPS. Patch format examples are in `eu/patches/*.json`.
  - `port-candidates` gives masked-BL window matching between ROMs.
- **Native headless mGBA:** `eu/emulator/`, Python `Session`. See `eu/emulator/README.md`.
  - Gives frame-exact input, memory reads, screenshots, and savestates bound to the exact ROM.
  - Build it with `python scripts/build_emulator.py`.
  - Each session needs a new `run_dir`. Verified booting the CN baseline with its save.
  - Example scenario helpers: `eu/scripts/game_fixture.py` and `eu/scripts/test_*.py`. These are EU-specific (player pointer, language menu), so adapt copies under `translation/` rather than editing them.
- **Disassembly:** `eu/scripts/disassemble.py` (Capstone, Thumb/ARM, file offsets). Capstone is installed in `eu/.venv`; Unicorn is not.
- **ROM expansion:** `eu/docs/rom-expansion-test.md` covers EU's 0xFF-fill 32 MiB policy. The CN baseline's upper 16 MiB is **zero-filled**, so record fill and ownership for every allocation.
- **Text-architecture checks:** `translation/tools/text_survey.py` (standard library only).
- **Fresh clone setup:** see `eu/docs/CLONE_SETUP.md`.

## Working rules

- Keep ROM inputs and tracked fixtures immutable. Write builds to new paths and run each emulator session in a new directory.
- Bind every patch to an exact profile and verify every preimage. Never remove a hash check to make a patch apply.
- Prefer deterministic scripts for scanning, building and verification. Investigate open questions; don't replace byte or runtime assertions with confident guesses.
- **Tag every fact with its ROM** (CN baseline, US, EU). Never carry an address between ROMs without proof; RAM and code shifts vary per site.
- Injected code must be ARMv4T Thumb/ARM (no Thumb-2; NOP `0x46C0`), keep the ABI (registers, flags, SP alignment), and have documented allocations.
- Test real behavior through visible game input, baseline vs patched, including normal-save persistence where relevant. Label diagnostic RAM writes separately. Never claim user acceptance without the user's confirmation.
- Record findings and commands in `translation/docs/` so the next session does not rediscover them.
- **Subagents:** delegate bulk skimming of many files to Haiku (x-high effort) subagents with scoped folders, then spot-check their key claims yourself.
- Don't push, publish, or share ROMs, saves or the HugeApplePack without the user's explicit request.

## Evidence vocabulary

- `candidate`: found by search; semantics not established.
- `static_verified`: byte, instruction or data-flow checks recorded.
- `runtime_verified`: named emulator scenarios passed, with exact ROM and save identities.
- `user_accepted`: the user explicitly confirmed the behavior.

Labels apply to specific claims, not blanket guarantees.
