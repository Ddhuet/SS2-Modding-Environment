# Working on an EU feature

1. Read the relevant EU audit and symbol records first. If absent, search the Chinese archive for mechanics, constants, function relationships and table formats. Never inherit an address by implication.
2. Verify the source ROM with its profile. Use the candidate finder for source-to-EU code matches, then inspect the actual EU instructions. Re-encode moved calls and branches rather than copying relative instruction bytes.
3. Write a declarative EU patch with original bytes, replacements, provenance and evidence. Build against the immutable EU input into a new artifact path; retain the manifest and IPS.
4. Use isolated native emulator sessions and copies of the normal save. Compare baseline and patched behavior from equivalent starting conditions. Use visible UI input for acceptance paths; if RAM/register writes are useful for diagnostic tests, label those separately.
5. Record precise assertions and limitations. Include original input hashes, build identity, emulator version, button sequence, memory fields, screenshots where helpful, and normal-save/restart results.
6. Update the EU audit/symbol map. Future agents should need the resulting facts and commands, not the whole exploration history.

## Porting Chinese mods

The Chinese patch library is retained under `reference/upstream/patches/definitions/`. The 16 MiB source and 32 MiB modified baseline have different profiles. Always choose the one whose bytes and provenance support the task.

Search tools can locate candidate windows with Thumb calls masked. This is intentionally conservative: zero hits or multiple hits require investigation. A unique match still needs call-target, literal, field and surrounding control-flow verification. Data-table patches need table/record interpretation; sparse identical values do not establish a table mapping.

Once approved, express the result as an EU patch and store EU symbols. Do not rerun heuristic relocation silently every time the patch is built. Builds should be deterministic against the reviewed profile.

Injected code needs a documented allocation, ARM7TDMI instruction compatibility, correct ARM/Thumb state, preserved ABI and explicit relocations. Expansion beyond 16 MiB must be deliberate, with fill bytes and ownership recorded; a large Chinese patch cannot simply be pasted into an expanded EU file.

## Reference library

The local `reference/upstream/` snapshot contains the original translated docs, historical Ghidra pseudocode/indexes, extracted reference tables, and patch definitions. It is outside the active instruction path and ignored by Git. The parent originals are tracked in the whole-folder repository; run `python scripts/setup_reference.py` from `eu/` to reconstruct the snapshot on a fresh clone. Preserve differing reviewed local copies rather than overwriting them. See [clone setup](CLONE_SETUP.md) for private inputs and ignored builds.

The historical C-like files are decompiler output, not recompilable game source. Some use wrong instruction modes or old layouts. Machine code from the selected profile is the authority.
