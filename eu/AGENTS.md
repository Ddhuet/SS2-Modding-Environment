# EU Shining Soul II workspace

Read `README.md`, then `docs/WORKFLOW.md` and the feature's audit before editing. For work expanding the repository, read `PLAN.md` for priorities and handoff guidance. This directory is the active EU project. `reference/upstream/` is a historical Chinese research archive, not authoritative EU instructions or addresses.

Git lives in the parent directory and tracks the original reference package as well as `eu/`. Keep active agent documentation here. On a fresh clone, follow `docs/CLONE_SETUP.md`: ROMs, generated outputs, dependencies and `reference/upstream/` are ignored; normal-save fixtures and all `.ss1` states with their `.ss1.json` bindings are tracked at their existing paths. Reconstruct the reference snapshot with `scripts/setup_reference.py` and rebuild patched ROMs and the native harness; provide and verify ROM inputs separately.

## Working rules

- Keep inputs and tracked fixtures immutable. `inputs/` contains ignored ROM copies and tracked save fixtures. `runs/` contains tracked `.sav`, `.ss1` and `.ss1.json` fixtures alongside ignored generated output; start new emulator sessions in unused directories. Builds use new paths under `artifacts/`.
- Bind patch definitions to an exact ROM profile and verify every pre-image. Never remove a hash check to make a patch apply.
- Use `ss2tools` for builds and candidate discovery. Candidate matches are not approvals. Audit instructions, literals, calls, structure fields and relevant behavior before changing evidence status.
- Document mapped EU functions/fields and their evidence so the next task does not rediscover them. Keep source CN addresses explicitly labeled.
- Test actual behavior, not merely boot success. Record baseline versus patched observations, boundary cases, adjacent behavior and normal-save persistence when relevant. Never claim user acceptance without the user's confirmation.
- Prefer deterministic code for scanning/building/verification. Agents investigate unresolved questions, not replace byte and runtime assertions with confidence guesses.
- Preserve the archive as a reference. Add new EU findings under `docs/`; do not rewrite Chinese addresses into apparent EU facts.
- Use 6.1 Sol (`gpt-6.1-sol`) at high effort for focused subagents, per the user's instruction. Delegate bounded investigations or implementation with separate file ownership when useful.
- For privileged installation, prefer native graphical polkit; do not use sudo if a polkit-aware route is available. Project-local builds/dependencies are preferred when practical.

## Evidence vocabulary

`candidate`: located by a search, semantics not established.
`static_verified`: byte/instruction/data-flow checks recorded.
`runtime_verified`: named executable scenarios passed, with exact ROM/save identities.
`user_accepted`: user explicitly confirmed the described behavior.

These labels apply to specific claims/scenarios. They are not a blanket guarantee for all classes, languages or mod combinations.
