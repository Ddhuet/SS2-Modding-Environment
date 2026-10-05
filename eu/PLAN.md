# Plan: build a reusable EU Shining Soul II modding repository

Updated: 2026-10-04. Future milestones below remain proposed. The first inventory/resistance-fixture milestone is recorded in [PORT_STATUS](docs/PORT_STATUS.md), [the resistance audit](docs/status-resistance-audit.md) and [the combat fixture](docs/fixtures/README.md). Signed division is tested for the outer chance gate/event queue; the candidate stays experimental because failed-gate payload reuse remains unresolved. Next bounded action: trace real affected-kind caller stack histories and status consumers before release approval. Do not start the rest of this roadmap automatically.

## Objective

Make this folder an environment where an agent can receive a gameplay change, find the relevant verified EU knowledge, build it, run meaningful tests, and deliver a playable result without repeatedly asking the owner to reverse engineer or test basic technical behavior.

Reuse the Chinese research aggressively, but accumulate authoritative EU findings and reusable tools. Do not start reverse engineering from scratch, translate the Chinese ROM into English, or try to map the entire game before delivering another feature. Each completed feature should leave the next task easier.

The owner wants both original EU mods and ports of Chinese mods. They authorize local dependency installation and automated testing, can help with targeted gameplay acceptance, and prefer `gpt-6.1-sol` at **high** effort for focused subagents. Follow `AGENTS.md` for input preservation and privilege authentication.

## 1. Start here with no prior context

Use **this `eu/` directory as the working directory**. The parent is the original Chinese package; its baseline restrictions are not instructions to replace EU profiles.

Read in order:

1. `AGENTS.md` and `README.md`: active rules, commands, layout, manual controls.
2. `docs/TEST_RESULTS.md` and `docs/USER_ACCEPTANCE.md`: exactly what is already established.
3. `docs/WORKFLOW.md`, `docs/PORTING.md`, and `docs/SYMBOLS.json`.
4. The audit for the selected feature. `docs/respec-audit.md` is the completed example.
5. Relevant sections of `emulator/README.md` and relevant Chinese reference files as needed.

Do not load the entire historical corpus into context. Search its indexes and documentation, then inspect selected functions. Delegate bounded file/corpus investigation when it would otherwise flood context; give subagents precise questions and separate file ownership. Verify their findings against bytes/tests before adopting them.

First-session checks:

```sh
pwd
python -m ss2tools verify inputs/ss2-eu.gba --profile profiles/ss2-eu.json
python -m unittest discover -s tests -v
```

Inspect existing evidence before rerunning emulator tests. Run the infrastructure test if the backend/environment changed or is unverified. Run relevant gameplay regressions when changes could affect them. Every new run/output path must be unused.

## 2. Current foundation: reuse it

| Component | Current state |
| --- | --- |
| EU ROM | Exact 16 MiB AU2P profile in `profiles/ss2-eu.json` |
| Chinese inputs | Separate profiles/copies for 16 MiB localization and exact 32 MiB modified baseline |
| Skill-point refund | Three edits, 14 bytes; independently audited, automated scenarios passed, owner confirmed it works |
| Build tools | Exact identities and pre-images; same-size declarative edits; new-file output; manifest and optional IPS |
| Port discovery | Read-only aligned context search with Thumb BL normalization, pre-image checks and decoded call correspondences |
| Native emulator | Pinned mGBA 0.10.5; frames, keys, memory/register inspection, stepping, screenshots, isolated normal saves, ROM-bound states |
| Runtime example | `scripts/test_skill_refund.py`: actual controls, original-versus-patched comparison, five languages, independent-process save reload |
| Diagnostic example | `scripts/test_skill_refund_boundary.py`: explicitly labeled synthetic RAM setup for maximum-level boundaries |
| Local research | `reference/upstream/`: translated docs, historical pseudocode/indexes, extracted tables, original patch definitions |

Keep original inputs immutable. The known EU save is `inputs/ss2-eu.sav` (Paige, level 19, Priestess). It is a useful fixture, not a universal scenario for combat/classes/progression.

There is **no global CN-to-EU ROM offset or structure-field shift**. Even the working refund port has a different local offset shift from its enclosing function, different global pointers, and a different skill-block field offset.

The C-like historical files are decompiler output, not a source tree that recompiles the game. Some contain wrong-mode decoding. The current native backend is Linux-specific at the adapter/loader level; Windows support is future work, not a prerequisite for this roadmap.

Do not rebuild the working harness merely to adopt Rust, a different frontend, or a larger framework. The `mgba-rs` assessment is in `emulator/README.md`; revisit it only for a concrete missing capability or portability requirement.

## 3. First milestone: make the next port repeatable

### A. Create a small port inventory

Add `docs/PORT_STATUS.md` and, if scripts will consume it, a matching JSON catalog. Start from the individual definitions under `reference/upstream/patches/definitions/`; treat combination definitions separately.

For each feature record:

- User-visible behavior and source definition/profile.
- Code edits versus data edits versus injected code/ROM expansion.
- Source pre-image status and known dependencies on baseline fixes.
- EU discovery/audit/runtime/user-acceptance status as separate fields.
- Required fixture and observations for a decisive test.
- Links to evidence, unresolved questions, and the next concrete action.

Do not turn upstream `released` into EU `approved`. Do not count a combination patch as a separate successful feature. Treat the five built-in Chinese baseline fixes as their own investigation backlog: establish whether EU has the same bug and needs the same change before porting them.

### B. Extract only useful shared test helpers

The existing skill test knows how to cold-boot, choose a language, load the supplied character, navigate Status, and inspect skills. Extract reusable pieces into a small game-specific module only as the second test needs them. Preserve the current regression behavior.

Add fixture metadata: source save hash, language, character/class/level, location, expected prerequisites, supported ROM profile, and how the fixture was reached. Keep ROMs/saves private and ignored. Record transcripts and state sidecars with generated fixtures.

Completion: an agent can discover the next feature, reuse boot/input routines, and identify the right fixture without reading an old chat. Do not build a generic game-agent framework first.

## 4. Recommended feature order

Order is based on existing evidence and useful capabilities unlocked, not on the number of bytes changed. Change it if fixture availability makes a different feature a better second delivery.

| Priority | Work | Starting evidence | What must be established |
| --- | --- | --- | --- |
| 1 | Status-resistance fix | EU candidate division call at file `0x690DA`; exact 128-byte CN routine-prefix matches at EU `0xB956C` and `0xB9394` | Trace the calculation and consumers; audit signed behavior; distinguish intended fix from merely changing division; exercise resistance below/at/above 100 |
| 2 | One understandable item/data-table change | Temple-fusion search previously found all 135 pre-images/context matches at shift `-0xDB7C` | Confirm table identity, record fields, IDs, pointers and EU consumers; pick a fixture where the gameplay result can be observed |
| 3 | COUNTER fix | EU candidate rewrite at file `0x1F3E4`, existing call at `0x1F3F0` to CPU `0x0801E5B0` | Verify callee conditions and EU fields, moved-call encoding, return value and target state; obtain a Warrior fixture with controlled attacks |
| 4 | Persistent summons | Earlier short-anchor searches produced conflicting lifecycle matches | Identify the correct functions through callers/runtime observations; distinguish time expiration, damage/destruction, transitions and re-summoning |
| Later | Stat caps, UI, other balance/features | Existing Chinese definitions and research | Choose one bounded behavior; map relevant fields and add targeted regressions |
| After foundations | Level 250, shared warehouses and other injected features | Source definitions contain writes beyond 16 MiB | Add expansion/allocation/assembly/relocation and save-schema infrastructure first |

The addresses above are **leads**, not newly approved patches. Reproduce the relevant evidence from `reference/upstream/EU_MODDING_ASSESSMENT.md` and actual ROM bytes. A patch with easy code may still need a difficult fixture; report that honestly and pursue independent static work meanwhile.

### Suggested next assignment: resistance audit and test fixture

1. Read the source definition `status_resistance_overflow_fix.json` and relevant code research.
2. Reproduce candidate locations and decode the EU call/callees.
3. Trace the full calculation, including how negative results and thresholds are consumed.
4. Identify resistance/status fields and a controllable application event. Establish equivalent original/patched inputs.
5. If natural gameplay setup is expensive, use a clearly labeled synthetic RAM fixture to test the calculation first. Also establish at least one reachable gameplay path; do not label a direct function call as full gameplay acceptance.
6. Only implement the patch once its intended behavior is justified. Re-encode the complete BL pair for EU rather than transplanting the Chinese changed halfword.
7. Deliver the audit, symbol updates, patch if justified, test script/report, and a small manual check if it adds evidence. If the source fix is wrong or EU differs, document that finding instead of forcing a port.

A strong outcome can be a well-supported decision that a particular Chinese patch should **not** be ported unchanged.

## 5. Repeatable research-to-feature cycle

### Specify the behavior before editing

Write the trigger, expected result, unchanged neighboring behavior, and evidence needed. Separate a gameplay intent (e.g. a counter can trigger under its normal conditions) from one implementation hypothesis (move a state write).

### Locate and verify

Start with the matching source baseline and a definition/function name. Run read-only discovery, then inspect actual EU instructions:

```sh
python -m ss2tools port-candidates \
  inputs/ss2-cn-baseline.gba inputs/ss2-eu.gba \
  reference/upstream/patches/definitions/status_resistance_overflow_fix.json \
  --source-profile profiles/ss2-cn-baseline.json \
  --target-profile profiles/ss2-eu.json

.venv/bin/python scripts/disassemble.py inputs/ss2-eu.gba \
  --offset 0x690BA --length 0x100
```

Zero/multiple hits are research outcomes, not errors to bypass. Long windows can fail on harmless compilation differences; short windows can match the wrong sibling function. Use literals, constants, callers/callees, basic-block structure, table consumers and runtime observations to resolve ambiguity.

Verify ARM/Thumb mode, instruction boundaries, PC-relative loads, branch targets, stack/register assumptions and structure fields. Call normalization locates candidates while deliberately discarding call displacement evidence; validate the callees afterward.

### Record reusable knowledge

Extend the EU symbol inventory with stable names and:

- Profile/hash, CPU address versus file offset, code mode or data type/size.
- Field base/offset/width and demonstrated meaning.
- Corresponding CN symbol/source when known, with its separate profile.
- Evidence links and status; unresolved assumptions explicitly listed.

Add a concise feature audit under `docs/`. Keep raw disassembly, traces and screenshots in linked evidence, not a giant always-read document. If the JSON schema grows, version it and update consumers. Promote facts individually; one verified skill field does not verify the entire player structure.

For larger control-flow work, create a profile-specific Ghidra project and export useful function summaries. Configure ARM7TDMI, base address and Thumb entries from verified evidence. Do not blindly import every historical function boundary or trust decompiled types without checking instructions.

### Implement deterministically

Create a fixed EU definition with exact before/after bytes and provenance. Use experimental candidate opt-in while testing; promote build status only when the supporting audit and appropriate scenarios are recorded. Approval for building and human acceptance are separate.

Build from the immutable EU baseline into new files. Retain a definition snapshot/hash and manifest. Do not alter a released definition and pretend an older manifest binds its new contents. Append subsequent acceptance in a separate record, as done for skill refund.

### Test and preserve

Use the template below, then update the catalog, symbols and documentation. Future agents should use the verified result directly rather than replay the discovery process.

## 6. Testing that minimizes owner involvement

Every feature should have explicit expected values/events, not just screenshots or a lack of crashes.

| Layer | Purpose |
| --- | --- |
| Static/build | Exact profile/pre-images, intended diff only, valid encodings/targets, output identity; patch round-trip when applicable |
| Controlled diagnostic | Exercise isolated boundaries or internal routines with disclosed synthetic setup; record every RAM/register mutation |
| Gameplay regression | Drive actual inputs from a documented normal save; compare original and patched behavior from equivalent initial conditions |
| Persistence | Save through the game, close the emulator, launch a separate process, reload normal save, check relevant fields |
| Human acceptance | Ask for a short concrete check only where it adds evidence, such as intended feel or a scenario unavailable to automation |

Useful assertions include conservation of points/items/money, exact state transitions, unchanged neighboring fields, known branch execution, and a calculated result rather than a screenshot guess. For probabilistic combat, control/record RNG state or use a designed statistical comparison; a few lucky/unlucky attacks are not proof.

For deterministic A/B tests, start independently from the same normal save and recorded input sequence. Native states must remain bound to their ROM and backend. Use intentional diagnostics to control internal state when needed, but keep that evidence separate from an unmodified-save gameplay run.

The current backend exposes bounded instruction stepping and the resistance tests added native `Session.run_until(address, instructions=..., frames=..., keys=...)` observation, with hit/miss, stop budget, registers and frames. Reuse it; see `emulator/README.md`. There is no general watchpoint or full tracing workflow. Add further event observation only if the next test needs it. It should have frame/instruction budgets, a hit/miss result and useful captured registers/memory; avoid huge unbounded traces or Python polling per instruction.

Use assertions/predicates with bounded waits where observable. Existing menus require time for rendering and level-up animation; do not interpret a dropped too-fast keypress as a game bug. Preserve known working timing until a better observation replaces it.

Before asking the owner, finish all independent analysis/build work. Supply a ready ROM, isolated save/launcher, exact steps, expected result, and one focused question. Do not delegate routine field inspection or scripted button presses to them.

## 7. Grow the tools in response to real ports

### Data editing

After one table is verified, add a reader/editor for its actual EU record format, symbolic IDs and field ranges. Assert unchanged fields and total record boundaries. Generate a reviewed patch from structured edits; stop making future agents hand-edit individual bytes for understood data.

### Patch combinations

The current builder handles one definition, not a reviewed dependency-aware mod stack. Before distributing combinations, add explicit dependencies/conflicts, overlap handling, allocation ownership and a manifest listing every definition hash. Validate against the pristine input consistently; never silently pick the last overlapping write. Test the combination's interacting behavior as well as each feature alone.

### Injection and expansion

When the first feature requires it, add a project-local ARM assembler/linker workflow with explicit ARM7TDMI settings, relocation records, ABI rules and allocation manifests. Expand only through declared size/fill operations with verified destination regions. Branch reach, literal pools, ARM/Thumb transitions and save changes need explicit handling.

Classic IPS has 24-bit offsets, so it cannot encode writes in the added region at/above 16 MiB. Choose and implement an appropriate distribution format (for example BPS or IPS32) with identity/round-trip validation rather than silently dropping those writes. Keep internal declarative builds independently reproducible.

### Saves

Do not introduce shared storage or other persistent layouts until the EU save records, checksums, copy/selection behavior and write paths are understood. Add readers/validators and fixture round-trips before mutations. Define migrations and versioning if a mod changes the format; do not assume CN/US saves or savestates transfer to EU.

## 8. Completion criteria and handoff

For each delivered feature, leave:

- A clear behavior statement and source provenance.
- Verified EU symbols/fields and an audit with remaining uncertainties.
- A reproducible, hash-bound patch/build and traceable output.
- Automated scenarios with expected/actual results and original input preservation.
- Documented save behavior, relevant boundaries, and limits of class/language/combination coverage.
- A minimal manual check only if needed, plus any actual owner acceptance.
- Updated port status and a single next action for unfinished work.

For an unfinished investigation, leave a concise research note with exact candidates, rejected hypotheses, files/commands, current fixture state, and the next experiment. Do not promote guesses to the authoritative symbol map just to make the handoff look complete.

The repository has reached the desired ecosystem when commonly modified systems have verified schemas/symbols, changes build through deterministic tools, tests reuse shared fixtures and helpers, and an agent can complete ordinary tasks from the repo alone. This does **not** require a full decompilation or porting every upstream mod.
