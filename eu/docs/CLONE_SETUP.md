# Working from a fresh clone

Git lives in the **parent `SS2_Modding` directory**, so a clone includes the
original Chinese research/tooling as well as `eu/`. Work from `eu/` and follow
`eu/AGENTS.md`; parent documentation is historical reference, not EU agent
instructions. Run the commands below from `eu/`.

## Supply and verify private inputs

ROMs, patched ROMs, saves and emulator states are deliberately absent from Git.
Ignoring them does not remove existing local files or stop the tools reading
them. Do not force-add them. All `.gba`/`.GBA` paths are ignored, even outside
the normal input/output directories.

Supply your own exact inputs. [The ROM checklist](../../ROMs/REQUIRED_ROMS.md)
records the supplied EU and JP-named files' hashes. Copy the EU ROM from
`../ROMs/Shining_Soul_II_EU.gba` to `inputs/ss2-eu.gba`; copy the matching
JP-named file to `inputs/ss2-cn-source.gba` only for port research. Create
`inputs/` first if needed. Verify every input with its profile:

```sh
python -m ss2tools verify inputs/ss2-eu.gba --profile profiles/ss2-eu.json
python -m ss2tools verify inputs/ss2-cn-source.gba --profile profiles/ss2-cn-source.json
```

Some Chinese port investigations also require `inputs/ss2-cn-baseline.gba`,
the **32 MiB modified baseline**, SHA-256
`45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`.
The existing local copy came from `../workspace/input/光明之魂2.gba`; neither
copy ships with Git. Verify it with `profiles/ss2-cn-baseline.json`. Do not
substitute the 16 MiB comparison source or an arbitrary Japanese ROM.

The default player and recorded gameplay tests also expect
`inputs/ss2-eu.sav`. The owner's Paige save is private and is not recreatable
from source; its SHA-256 is in [inputs/README.md](../inputs/README.md). You can
play with your own normal EU save via `scripts/play.py --save /path/to/save.sav`.
Exact recorded regression scenarios require the documented save/progress
fixture; a different save does not reproduce those assertions. Synthetic unit
tests and the patch builder do not require that save.

## Restore the research snapshot and dependencies

`reference/upstream/` is an ignored duplicate of selected parent source files.
Reconstruct it without downloading a separate archive:

```sh
python scripts/setup_reference.py
python -m venv .venv
.venv/bin/python -m pip install -r requirements-dev.txt
```

The snapshot script is repeatable and refuses to overwrite differing existing
files. Keep reviewed local snapshots when parent research changes. Python
packages, vendor source clones and compiled libraries are ignored and rebuilt
locally. Core patch tooling uses the Python standard library.

For emulator tests/manual play, install the build prerequisites described in
[README.md](../README.md), then run:

```sh
python scripts/build_emulator.py
python scripts/build_player.py
```

These scripts fetch and verify the pinned mGBA source. The bundled legacy
Windows emulator distribution and service binaries are excluded; they are not
needed for the EU native harness.

## Rebuild patched ROMs

`artifacts/` is entirely ignored, including generated IPS files and manifests.
The tracked patch definitions and profile checks reproduce the successful
builds. Build the confirmed skill-refund ROM at the player's default path:

```sh
python -m ss2tools build inputs/ss2-eu.gba patches/skill-point-refund.json \
  artifacts/ss2-eu-skill-refund.gba --profile profiles/ss2-eu.json \
  --ips artifacts/ss2-eu-skill-refund.ips
```

Expected output SHA-256:
`6148261c3430879cd26a3969adda853407bb98477cc8b8d0b6d4d8389c8b17c7`.
The builder creates the output directory, enforces the input identity and
original bytes, and writes a manifest. It refuses to overwrite existing output;
choose a new name when rebuilding on an existing checkout.

The resistance candidate is experimental; rebuild it only using the command
and caveats in [its audit](status-resistance-audit.md). Existing ignored builds
do not imply approval of other patches or combinations.

```sh
python -m unittest discover -s tests -v
python scripts/play.py
```

`runs/` and private states are also absent on a clone. Regenerate scenarios
using the tracked scripts, transcripts and [fixture notes](fixtures/README.md),
with the required private inputs. Historical reports/screenshots under
`docs/evidence/` remain tracked; their old local `runs/` paths are evidence
references, not files promised by the checkout.
