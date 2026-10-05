# `soul_ring` Partial Static Audit[cite: 2]

Conclusion: Currently, the write range, several original branch contexts, and injection area ownership can be independently verified[cite: 2]; however, existing authoritative materials do not provide descriptions, entry tables, or ABI proofs for the injection routine at the same level as the other three items[cite: 2]. Therefore, semantic safety review cannot be completed relying solely on this sharing package[cite: 2].

## Confirmed Range[cite: 2]

| ROM Range | File Offset | Static Context |
| --- | --- | --- |
| `0x0801B81A-0x0801B85E` | `0x0001B81A` | Located in the main player equipment/stat reconstruction function; original code contains conditional checks such as item type `7`, modified to branch to injection logic with NOPs[cite: 2] |
| `0x0801BB12-0x0801BB1C` | `0x0001BB12` | Field/local state handling in the latter part of the same main function, modified to an injection jump path[cite: 2] |
| `0x0807D26C-0x0807D274` | `0x0007D26C` | Original code contains `cmp r0,r5`, conditional branch, and `bl 0x0807FEFC`; modified to a jump bridge[cite: 2] |
| `0x0807E1A2-0x0807E1AA` | `0x0007E1A2` | Original `cmp r0,#22` and conditional call `0x08080330`, modified to four Thumb NOPs[cite: 2] |
| `0x0807E1D2-0x0807E1DA` | `0x0007E1D2` | Similar type `0x16` check/call, modified to NOPs[cite: 2] |
| `0x0807E402-0x0807E40A` | `0x0007E402` | Similar type `0x16` check/call, modified to NOPs[cite: 2] |
| `0x0807E43A-0x0807E442` | `0x0007E43A` | Similar type `0x16` check/call, modified to NOPs[cite: 2] |
| `0x080F0060-0x08F00170` | `0x00F00060` | Exclusive Thumb injection code and embedded constants; baseline area consists mainly of padding values[cite: 2] |

All actual fragment writes and `before_hex/after_hex` can be found in [`../../patches/definitions/soul_ring.json`][cite: 2]. Do not treat unfilled gaps as available space based on the table above[cite: 2].

## Unclosed Audit Questions[cite: 2]

* An exact inventory of Thumb entry points, return points, and reachable branch tables for each jump bridge has not yet been established[cite: 2].
* Internal function boundaries, embedded constants, register saving, and stack balance within the injection area have not yet been proven per entry point[cite: 2].
* The global impact of removing type `0x16` checks in four places has not been fully enumerated; safety cannot be inferred solely from the feature name[cite: 2].
* Semantic conflicts with equipment stat reconstruction, item dispatch, and other ring modifications have not undergone an independent audit[cite: 2].

Therefore, evidence should be documented as: range/pre-image/writes as `confirmed/static`[cite: 2]; "implementing soul slot ring equipping" as functional intent supported by existing release notes[cite: 2]; full control-flow safety as `insufficient evidence`[cite: 2]; no dynamic re-testing in current sharing package[cite: 2]. Owners may perform functional acceptance, but acceptance cannot substitute for an ABI review[cite: 2].

Next minimum task: Decode injection area entry points one by one and create a "call site → entry point → return point → read/write fields → saved registers" table[cite: 2]; stop whenever any item cannot be confirmed, and add no new bytes[cite: 2].

Source: Official source project build definition, current catalog, Thumb disassembly, and current patch definition[cite: 2]. No independent `soul_ring` semantic analysis report was found[cite: 2].

---