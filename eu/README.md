# Shining Soul II — EU modding workspace

An EU-first, AI-friendly workspace with a working **skill-point refund** port, native mGBA automation, exact-identity patch builds, and Chinese-to-EU candidate tools. Open this `eu/` directory as the project root for future work.

Git tracks the whole parent directory, including the original Chinese package. Its useful research is archived locally under `reference/upstream/`, separate from the authoritative EU docs. A fresh clone includes the normal-save and savestate test fixtures, including each state's required sidecar. ROMs, patched outputs and installed dependencies remain excluded: follow [clone setup](docs/CLONE_SETUP.md) to supply ROMs, reconstruct the archive and rebuild.

## Try the finished feature

Existing local checkouts may already have the ROM and IPS below. They are ignored generated files and are **not included in a clone**; use the [rebuild command](docs/CLONE_SETUP.md#rebuild-patched-roms) first on a new checkout:

- `artifacts/ss2-eu-skill-refund.gba`
- `artifacts/ss2-eu-skill-refund.ips`
- `artifacts/ss2-eu-skill-refund.gba.manifest.json`

From this directory:

```sh
python scripts/play.py
```

This opens the locally built native mGBA player with fresh copies of the patched ROM and the tracked EU test save. **X is GBA A, Z is GBA B, Enter is Start, and arrows are the D-pad.** The launcher prints the new save location. Quit with the window close button. To continue that play-session save later, pass `--save runs/<your-session>/game.sav`; a new isolated session is created each time.

1. Choose your language, select Single Player, and continue Paige.
2. In-game: **Enter → Left (Status) → X**. Wait for the status screen.
3. **Right → X** enters skill allocation. Select a learned skill, such as Flail.
4. **Left refunds one spent point; Right spends one. X commits; Z cancels.**
5. Save through the game's Save option if you want it retained. Closing the emulator alone does not replace the game's save operation.

This refunds skill points, not attributes. Skill levels can cost multiple points; one Left returns one invested point, not necessarily one whole skill level. There is no new button legend—the existing skill menu does the work.

## What is verified

The patch changes 14 bytes at three sites. Automated checks used your level-19 Priestess save and actual button inputs: refund, cancel, re-spend, all 18 points back, zero boundary, commit, and game save followed by a **separate-process** reload. The basic refund/commit path also passes in all five EU languages. A separately labeled synthetic test covers level 7 down to zero and back.

See [test results and limitations](docs/TEST_RESULTS.md), [instruction/data-flow audit](docs/respec-audit.md), and [EU fields](docs/SYMBOLS.json). The owner [confirmed the refund works](docs/USER_ACCEPTANCE.md). Other classes and mod combinations have not been exhaustively tested.

## Agent entry point

For the proposed development sequence and a fresh-context handoff, read [PLAN.md](PLAN.md).

Read [AGENTS.md](AGENTS.md), then [workflow](docs/WORKFLOW.md) and the relevant feature audit. Useful commands:

```sh
python -m ss2tools verify inputs/ss2-eu.gba --profile profiles/ss2-eu.json
python -m ss2tools --help
python -m unittest discover -s tests -v
python scripts/test_skill_refund.py --output runs/new-refund-test --languages
```

Build another copy into a **new** output name:

```sh
python -m ss2tools build inputs/ss2-eu.gba patches/skill-point-refund.json \
  artifacts/my-skill-refund.gba --profile profiles/ss2-eu.json \
  --ips artifacts/my-skill-refund.ips
```

The builder checks the exact ROM identity and every original byte, rejects overlaps and overwrites, and writes a manifest. IPS alone cannot enforce an input hash; prefer this builder for project work.

## Port more Chinese mods

[Porting guide](docs/PORTING.md) contains the actual command used to locate the three respec sites. `ss2tools port-candidates` supports arbitrary upstream patch definitions, verifies source/target profiles, normalizes Thumb calls, and reports candidates plus original bytes and call destinations. Reviewed ports become fixed EU definitions, so subsequent builds do not repeat the research.

This is a working porting foundation, not a claim that every Chinese mod converts automatically. Table changes, different structures, and injected code require their own audits. ROM expansion is intentionally not yet implemented in the same-size patch builder.

## Layout

| Directory | Purpose |
| --- | --- |
| `profiles/`, `patches/` | Exact ROM identities and reviewed EU modifications |
| `ss2tools/`, `tests/` | Build/discovery code and focused unit tests |
| `emulator/`, `scripts/` | Native frame/input/memory/screenshot control and reproducible scenarios |
| `docs/` | EU findings, evidence, limits, and commands |
| `reference/upstream/` | Local historical Chinese research archive |
| `inputs/` | Ignored immutable ROM copies and tracked normal-save fixture |
| `artifacts/`, `runs/` | Ignored builds and new emulator output; `runs/` also contains tracked save/state fixtures |

ROM files, vendor clones, environments, generated runtime output and research snapshot are excluded from Git. Normal saves and savestates (with required sidecars) are tracked testing fixtures and ship with the clone. [Provenance](docs/PROVENANCE.md) explains their origins. Run `python scripts/setup_reference.py` to reconstruct the snapshot from the tracked parent research; preserve an existing reviewed local snapshot when moving this workspace.

## First port milestone

The [port inventory](docs/PORT_STATUS.md) catalogs 18 source features, two combinations and five baseline-fix investigations. The [EU resistance audit](docs/status-resistance-audit.md) reproduces the signed-division overflow and tests the gate/event queue independently of CN documentation. The candidate remains experimental because a separate stale payload can dispatch after a failed gate.

The [Goblin Fort fixture](docs/fixtures/README.md) contains a button-only route and tracked, ROM-bound combat-ready states after the goblin dialogue. The resistance tests disclose every synthetic mutation; naturally equipped immunity and human acceptance remain pending. The confirmed skill-refund build is preserved and its shared-helper regression passes.

## Rebuild the environment

Existing local dependencies are ignored and must be rebuilt on a fresh clone. For another Linux machine, use Python 3.11+, Git, C/C++ compilers, CMake, libpng/zlib development files, and SDL2/OpenGL development files for the optional player. Ninja is optional. Supply and verify private inputs using [clone setup](docs/CLONE_SETUP.md).

```sh
python -m venv .venv
.venv/bin/python -m pip install -r requirements-dev.txt
python scripts/build_emulator.py
python scripts/build_player.py
```

Capstone/Pillow are analysis conveniences; the core patch tools and runtime tests use Python's standard library plus the built native adapter. [Emulator API](emulator/README.md) explains controls, verified savestates and source pinning. The Rust bindings you suggested were evaluated and have Windows build support in their source; this implementation uses the same kind of native-core access through a small C/Python adapter and currently targets Linux.
