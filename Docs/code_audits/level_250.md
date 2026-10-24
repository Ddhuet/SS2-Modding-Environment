## level_250.md

# `level_250` Static Code Audit[cite: 4]

Conclusion: This patch consists of one Thumb compare-immediate instruction, two experience table pointer literals, and an expanded experience table[cite: 4]. The so-called "large injection area" is data, not executable code[cite: 4].

| ROM Address | File Offset | Type | Original | Modified |
| --- | --- | --- | --- | --- |
| `0x0801C8A6` | `0x0001C8A6` | One byte of Thumb halfword | `cmp r3,#198` (Full original instruction `C6 2B`) | `cmp r3,#248` (`F8 2B`)[cite: 4] |
| `0x0801C8EC-0x0801C8F0` | `0x0001C8EC` | Little-endian pointer | `0x08495544` | `0x09000100`[cite: 4] |
| `0x0801E2D8-0x0801E2DC` | `0x0001E2D8` | Little-endian pointer | `0x08495544` | `0x09000100`[cite: 4] |
| `0x09000100-0x090004E8` | `0x01000100` | 250×`u32` Data | Pre-image in expanded region | Level 250 experience table[cite: 4] |

`0x0801C8A6` is located inside level-up processing function `0x0801C880`, where nearby `0x0801C8B0` reads the experience table via a literal pool[cite: 4]. The second literal is located near the help path related to "EXP to next level"[cite: 4]. Table entry point `0x09000100` is documented as `EXP_TABLE_250` in the annotation index[cite: 4].

The current generation logic scales according to the original curve: `g(n)=round(original_curve(198*n/249))`, yielding 250 strictly increasing `u32` entries[cite: 4]; known endpoints are `g(0)=9` and `g(249)=23,413,400`[cite: 4]. Machine ground truth is subject to JSON writes[cite: 4].

## Risks and Evidence[cite: 4]

* `confirmed/static`: Comparison instruction, pre/post-images of two pointers, table range, little-endian conversion, and exclusive ownership[cite: 4].
* `confirmed/build`: Definition can be matched section by section against current baseline and rebuilt[cite: 4].
* `untested in this package`: 198→199, 249→250, level 250 capping, EXP UI, save/load, and combined performance with 4-digit UI[cite: 4].

The owner should focus on verifying boundary levels rather than merely checking if the "game boots"[cite: 4]. No new feature may treat `[0x09000100,0x090004E8)` as free space[cite: 4].

Source: Source project `rom/突破等级/突破等级修改说明.md`, annotation index, Thumb disassembly, and current patch definition[cite: 4].

---