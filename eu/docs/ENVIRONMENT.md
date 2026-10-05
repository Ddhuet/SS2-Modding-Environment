# Environment design

This is an EU-first workspace with a local historical reference library. Open the `eu/` directory as the project root for subsequent AI tasks. Original Chinese tooling is preserved in the parent directory but is not required for ordinary EU builds.

The Git repository root is the parent directory. A clone includes both trees,
while ROMs/saves, build outputs and dependencies remain local. Follow
[clone setup](CLONE_SETUP.md) to restore the ignored research snapshot and
rebuild missing artifacts. Active project instructions remain under `eu/`.

## Components

- `profiles/`: exact identities for supported source ROMs.
- `patches/`: declarative region-specific modifications with before/after bytes and evidence.
- `ss2tools/`: deterministic verification, build, inspection and Chinese-to-EU candidate tooling.
- `emulator/`: native mGBA core and project-owned Python control interface.
- `tests/`: focused tool safety and correctness checks.
- `scripts/`: reproducible emulator scenarios and setup commands.
- `docs/`: authoritative EU findings, controls, symbol map and test limits.
- `reference/upstream/`: archived Chinese docs/pseudocode/patches for research, not active EU rules.
- `inputs/`: ignored immutable game inputs.
- `artifacts/`: ignored build outputs and manifests.
- `runs/`: ignored isolated emulator runs, screenshots, normal saves and states.

## Division of responsibilities

The emulator harness handles frames, keys, memory, registers and screenshots. Game-specific scripts turn those primitives into observed skill-menu behavior. The patch builder is independent of the emulator and never guesses addresses. The candidate finder proposes locations but never modifies a ROM.

This separation lets agents reuse tested machinery. Adding an item-table editor should not require learning emulator lifecycle code; adding a gameplay scenario should not require implementing IPS output.

## Determinism and scope

Pin emulator source and Python dependencies. Preserve the original input identities, build manifests and scenario inputs. A known save is a fixture for a particular character/progress state, not proof that every possible save behaves identically.

Do not use a savestate from one ROM with a different ROM as a primary acceptance test. Boot baseline and patched copies independently with the same normal save. Diagnostic state manipulation is useful but must be distinguished from tests exercised through actual game controls.
