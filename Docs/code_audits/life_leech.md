# `life_leech` Static Code Audit[cite: 3]

Conclusion: The current definition consists of rewiring two Thumb call sites to a wrapper routine, in-place NOPing an old path, and an exclusive injection code block[cite: 3]. Range and pre-images have been verified against the current baseline[cite: 3]; functional behavior still requires owner acceptance[cite: 3].

## Writes and Context[cite: 3]

| ROM Address | File Offset | State | Original Semantics | Modified Semantics |
| --- | --- | --- | --- | --- |
| `0x080180CE-0x080180D2` | `0x000180CE` | Thumb | `bl 0x08019824` | `bl 0x080BB120`[cite: 3] |
| `0x0801932A-0x0801932E` | `0x0001932A` | Thumb | `bl 0x08019824` | `bl 0x080BB120`[cite: 3] |
| `0x0801F3B4-0x0801F3B6` | `0x0001F3B4` | Thumb | `strh r1,[r7]`, old physical life leech write | `nop` (`C0 46`)[cite: 3] |
| `0x080BB120-0x080BB190` | `0x000BB120` | Thumb Injection | Zero-filled in current baseline | Life leech/mana leech wrapper routine[cite: 3] |

`0x08019824` is a general object damage function with many callers in the static disassembly[cite: 3]; this patch only rewires the two explicit call sites listed above, so it cannot be claimed to cover all its call paths[cite: 3].

## Wrapper Routine Contract[cite: 3]

Existing analysis describes the wrapper routine as follows: reading attacker-related states, calculating recovery amount using `INT * percentage / 100` (rounded-up approximation), updating HP/resource while maintaining upper bound constraints, and then continuing the original damage call chain[cite: 3]. Located fields involved include current player/object context, percentage fields, HP, and max HP fields[cite: 3]. Field semantics stem from static analysis and cannot substitute for dynamic verification across every class and attack type[cite: 3].

During review, it must be confirmed that: targets of both BL instructions are in Thumb state[cite: 3]; the injection routine preserves registers required by calling conventions[cite: 3]; original damage logic is executed and returns to the original caller[cite: 3]; NOPing at `0x0801F3B4` does not affect non-target paths[cite: 3].

## Ownership and Conflicts[cite: 3]

`[0x080BB120,0x080BB190)` is exclusively owned by `life_leech`[cite: 3]. Historical random map experiments used space near `0x080BB140`, so it cannot be combined with that legacy implementation or reuse this region[cite: 3].

## Evidence Boundaries and Pending Acceptance[cite: 3]

* `confirmed/static`: Current baseline pre-images, two original BL targets, original instruction of the NOP, write range, and injection area ownership[cite: 3].
* `inferred/static`: Field roles and calculation intent of the wrapper routine[cite: 3].
* `untested in this package`: Life leech, mana leech, max-cap handling, different attack types, map transitions, and save/load regression[cite: 3].

The owner must record at least: input/output SHA-256, character and equipment, triggered skills, HP/resource values before and after hit, whether non-target attacks function normally, and save file reload results[cite: 3]. Mark as `user accepted` upon passing, and do not frame it as AI dynamic verification[cite: 3].

Source: Source project `rom/法术吸血修改分析.md`, `rom/ghidra_out/annotation_index.md`, Thumb disassembly, and current patch definition[cite: 3]. Legacy hashes serve as historical background only[cite: 3].

---