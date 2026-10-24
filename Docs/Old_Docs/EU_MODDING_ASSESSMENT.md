# EU modding assessment — 2026-10-04

## Conclusion

An EU-first Shining Soul II modding environment is viable. This package is a useful research corpus and a starting point for tools, not an EU-ready SDK or a buildable game decompilation. Adopt the EU ROM as an explicit separate baseline; retain the Chinese baseline and historical documentation as references. Do not transplant the USA offsets or disable the existing patcher's identity checks.

No ROM or save was modified during this assessment. All EU findings below are static candidates, not gameplay acceptance. No USA ROM was available to independently reproduce that guide's USA-specific claims. No emulator was run.

## Inputs actually verified

| Input | Size | Header | SHA-256 |
| --- | --- | --- | --- |
| `ROMs/Shining_Soul_II_EU.gba` | 16 MiB | AU2P | `e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2` |
| `ROMs/Shining_Soul_II_JP.GBA` | 16 MiB | AU2J | `8a7ebaa88682995fd7bf1bf8dc8e77a3f4fc4a9893a7639af953c553821d9ab9` |
| `workspace/input/光明之魂2.gba` | 32 MiB | AU2J | `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989` |

The file named JP exactly matches the Chinese ROM hash in the USA handoff. Its name/header do not establish that it is an unmodified Japanese retail dump. The 32 MiB input passes the package's full identity verifier. EU CRC32 is `55E503C1`. Header/size/hash identification here does not independently certify a clean retail dump against an external database.

## What the conversion guide gets right

Its essential method is sound: verify source bytes; identify corresponding code independently; verify destination bytes; decode instructions; regenerate relocated calls; write only to copies. A Thumb BL is a two-halfword instruction, so copying just the changed halfword can fail across builds. In-place instruction reordering must also re-encode the moved call and preserve calling conventions and return values.

Its conclusions remain limited to its inputs. A unique masked window identifies a candidate, not semantic equivalence. Masking every call discards evidence about which functions execute. Destination call targets, PC-relative literal loads, branch paths, data fields, and callers must be checked separately. Short windows may match related but different routines; long windows may fail because of harmless compilation differences. A failed match does not prove the feature cannot be ported.

The USA player-field shift of +4 is a local observation, not a universal structure conversion rule, and is not evidence of an EU field shift. USA table offsets and behavioral test claims cannot be inherited by EU.

## Measured EU evidence

All addresses in this table are **file offsets**. Add `0x08000000` for ROM CPU addresses.

| Feature/site | CN offset | EU candidate | Evidence |
| --- | --- | --- | --- |
| Respec stack-address instruction | `0x7B662` | `0x7AE5E` | Unique 96-byte window, masking Thumb BL pairs |
| Respec halfword load | `0x7B66E` | `0x7AE6A` | Same method; expected edit byte matches |
| Respec 12-byte removal | `0x7B68A` | `0x7AE86` | Same method; all 12 expected bytes match |
| COUNTER rewrite start | `0x1F1C0` | `0x1F3E4` | Unique 32/48-byte masked windows; 96-byte window fails |
| Resistance division call | `0x69736` | `0x690DA` | Nearby exact anchors and decoded BL target; long window fails |
| RNG entry | `0x8C8` | `0x8C8` | Unique short window; not full function validation |
| Flash erase entry | `0x1B14` | `0x1B14` | Unique short windows |
| General damage entry | `0x19824` | `0x19CE8` | Unique short windows |
| Forging entry | `0x845DC` | `0x8441C` | Unique short windows |

The measured shifts include zero, positive and negative values. There is no global regional offset.

The EU resistance BL at `0x690DA` calls `0x080B956C`. The CN unsigned-division routine at file offset `0xBAA7C` has a unique exact 128-byte prefix match there. The CN signed-division routine at `0xBA8A4` has a unique exact 128-byte prefix match at EU `0xB9394`. These support a port investigation; they do not prove the surrounding status-probability calculation behaves correctly at resistance 99, 100 or above 100.

The EU COUNTER call at `0x1F3F0` targets `0x0801E5B0`. The rewrite-window bytes are `0a20a8814046291c4a460023fff7def8`. The callee's counter conditions and data fields still need EU-specific auditing before a functional claim.

Temple soul fusion is a strong data candidate: all 135 edit pre-images match after a shift of `-0xDB7C`, and each edit has a unique exact 48-byte surrounding-context match at that shift. Table meaning and behavior still need validation. Ring matching found no unique 48-byte anchors with this method. Weapon/equipment searches yielded sparse or competing shifts, not a demonstrated whole-table mapping. Do not reuse the USA guide's `+0x472B4`.

Summon searches illustrate ambiguity: nearby 12-byte anchors give conflicting locations, including between similar lifecycle routines. Anchor vote counts overlap and are not independent confidence scores. No summon mapping is approved.

For the supplied 16 MiB CN ROM, every in-range pre-image in the 18 individual patch definitions matched. Level-250 has 224 writes beyond 16 MiB and shared storage has 483; neither can be applied directly to that file. Matching small pre-images does not make the 16 MiB ROM equivalent to the modified baseline or transfer its built-in fixes.

## A maintainable EU environment

1. **Explicit ROM profiles.** Give CN-modified and EU separate immutable hashes, symbols, structure layouts, text encodings, and patch compatibility lists. Keep identity/pre-image checks, exclusive output creation, overlap detection and input preservation. Add EU support deliberately instead of changing the existing CN constants to make old definitions pass.
2. **An EU symbol and structure database.** Map functions, tables and RAM fields as needed, recording source evidence, EU evidence and unresolved assumptions. Historical pseudocode is navigational help; actual EU machine code is the authority. Avoid mapping all thousands of functions before doing useful work.
3. **Deterministic matching and relocation tools.** Automate exact and instruction-normalized candidates, call-graph checks, table structure checks, branch assembly and pre-image assertions. Require unresolved/ambiguous results to stop. Keep discovery separate from patch application; runtime patching should use a reviewed, hash-bound map.
4. **EU-native patches.** Describe behavior using symbols and region-specific fields. Assemble injected Thumb/ARM code with explicit ARM7TDMI settings and audited allocation ranges. A 16 MiB input does not intrinsically prevent expansion, but expansion alone does not port injected code, pointers, layouts, assets or save changes.
5. **Native emulator validation.** Build repeatable scenarios with isolated ROM/save copies and observed memory/control-flow outcomes. Add respec, resistance and COUNTER first as tractable vertical slices. Exercise save/reload and the EU languages, including layout and text handling. Treat CN saves and emulator savestates as region-specific until compatibility is established.

A lightweight AI can produce patch definitions and run these tools after the contracts and mappings exist. It should not be the authority deciding that a vaguely similar byte sequence is safe. Much of routine porting can become automated; this assessment does not establish a success percentage for the entire corpus.

Replacing Chinese text with English would introduce a separate localization project: encodings/fonts, text storage/pointers, space, layout and language selection. Given the multilingual EU goal and the measured shared code, there is no evidence here that this would be easier than an EU baseline.

## Linux tooling

The package's Python safety self-test passes on this machine. Core patch/query tooling is largely portable. Capstone is declared optional and was not installed; the probes used standard Python and a small Thumb BL decoder. Native mGBA, ARM objdump, gdb-multiarch and Wine were not found on PATH at assessment time. No packages were installed.

Prefer native Linux mGBA for the emulator foundation. Upstream supports Linux, Lua scripting, and GDB debugging: https://github.com/mgba-emu/mgba and https://mgba.io/docs/scripting.html . Pin and test the chosen build's actual scripting/debug capabilities.

The existing Windows automation is not a drop-in native launcher. `windows_mgba_service.py` selects custom EXEs and uses `ctypes.windll.kernel32` for process checks/termination. `BUILD_NOTES.md` documents custom frame control and dynamic GDB-port handling; corresponding C/C++ source changes and a reproducible build tree are absent from this package. The Python socket client and portions of the Lua server are reusable, but startup/control protocol compatibility must be tested or adapted. Wine is a possible comparison route, not a demonstrated working setup; wrapping the EXE alone does not port the Windows Python manager.

Initial dependencies for implementation: native mGBA with Lua/debugger support, a project-local Python environment with Capstone, and ARM binutils for assembly/disassembly. Ghidra is useful for a separate EU analysis project and deeper function/data mapping. Select emulator build dependencies after choosing the upstream build or obtaining the original custom source.

## Reproduction and changes made

Run from repository root:

```sh
python workspace/records/eu_assessment/probe.py > workspace/records/eu_assessment/results.json
python tools/verify_rom.py workspace/input/光明之魂2.gba
python tools/test_share_package.py
```

The probe only reads ROMs and prints JSON. It includes conservative long-window matches, short-window candidates, weak anchor votes, division prefixes, decoded calls, patch pre-image inventory, and table candidates. It is an assessment script, not a patch porter or general disassembler; pattern masking can interpret data as instructions. Results are recorded in `workspace/records/eu_assessment/results.json`.

Removed 36 Google Search Markdown link targets from 11 documentation files, retaining the bracket labels as requested. No such targets remained in the verification search. Existing `[cite: ...]` artifacts were not part of that cleanup. The USA guide was not edited. ROMs, saves and the original patcher were unchanged.
