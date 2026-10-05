

## 03_SUMMON_PATCH_TO_LIFECYCLE.md

# Case 3: From Two Single-Byte Patches to Summoned Entity Lifecycles[cite: 4]

## Patch Definition[cite: 4]

`persistent_archer_and_dark_mage_summons.json` has only two writes:[cite: 4]

| ROM Address | Offset | before | after |
| --- | --- | --- | --- |
| `0x080713C4`[cite: 4] | `0x000713C4`[cite: 4] | `01`[cite: 4] | `00`[cite: 4] |
| `0x08072788`[cite: 4] | `0x00072788`[cite: 4] | `01`[cite: 4] | `00`[cite: 4] |

Looking at a single byte in isolation cannot explain the semantics; the full Thumb halfword containing it must be read[cite: 4].

## Recovering Complete Instructions[cite: 4]

Historical disassembly confirmed that both locations belong to immediate byte values of `subs r0,#1`[cite: 4]. After modification, they become `subs r0,#0`[cite: 4]. Corresponding functions:[cite: 4]

* `0x080705E8`: Type 18 summoned entity lifecycle[cite: 4].
* `0x080717B4`: Type 20 summoned entity lifecycle[cite: 4].

The producer side `0x08073FD4` writes the lifespan parameter into the effect descriptor `+0x14`; the lifecycle function reads it every tick and decrements it naturally[cite: 4].

## Why It Cannot Be Simply Described as "Permanent"[cite: 4]

This patch only freezes the confirmed natural lifespan decay[cite: 4]. Other reclamation conditions, scene transitions, character states, object destructions, and resource cleanup still retain their original logic[cite: 4]. Therefore, an accurate description is "canceling natural lifespan decay for two entity types" rather than "permanently existing under all circumstances"[cite: 4].

## Audit Steps[cite: 4]

1. Read at least 4 bytes before and after the modified address from the current baseline[cite: 4].
2. Disassemble full halfwords in Thumb mode to confirm that only the immediate value was changed[cite: 4].
3. Check function entry points, descriptor `+0x14`, and all exit branches[cite: 4].
4. Perform manual acceptance testing for natural waiting, room transition, returning to town, character death, and reloading save files[cite: 4].

The released status and static pre-images have been confirmed; the current sharing session did not re-execute the above dynamic paths on behalf of the maintainer[cite: 4].

---