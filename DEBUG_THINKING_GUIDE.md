# Thinking Method When You're Not Good at Debugging



This document does not require proficiency with GDB, Ghidra, or complex automation. The goal is to shrink a vague "it's broken" into answerable small questions and leave enough evidence for maintainers or other AIs to continue.

## 1. First, Rewrite the "Problem" into Observable Facts



Don't write:

```text
The patch has an issue.
```[cite: 1]

Should write:[cite: 1]

```text
Current output ROM cold boots normally; entering town after loading a regular save works normally;
Black screen occurs when entering the warehouse from town and pressing A to select the second item slot;
Operation can continue if not entering the warehouse; failed at this exact spot 3 times with the same key sequence.
```[cite: 1]

Each fact should contain at least: actual ROM hash, patch combination, save file copy, starting point, shortest operation sequence, last normal state, abnormal behavior, and reproduction count[cite: 1].

## 2. Ask About Only One Level at a Time[cite: 1]

Evaluate in order, without skipping levels:[cite: 1]

1. **Input Level**: Does the baseline hash match completely?[cite: 1]
2. **Generation Level**: Does the patch write only within declared ranges? Do all original bytes match?[cite: 1]
3. **Boot Level**: Can it cold boot to the title screen without using savestates?[cite: 1]
4. **Entry Level**: Can a regular save file enter an operable scene?[cite: 1]
5. **Functional Level**: Does the target path produce the expected effect?[cite: 1]
6. **Boundary Level**: Are boundary conditions like 0, 1, upper limit, empty, full, or no target correct?[cite: 1]
7. **Regression Level**: Do adjacent original functions still work?[cite: 1]
8. **Persistence Level**: Is it still correct after saving, fully closing, and rebooting?[cite: 1]
9. **Combination Level**: Does a single patch work fine, but fail when combined?[cite: 1]

If the previous level has not passed, do not discuss the next level[cite: 1]. For example, when cold boot fails, do not guess save file fields first[cite: 1].

## 3. Establish a Minimal Reproduction[cite: 1]

Reduce only one variable at a time:[cite: 1]

- Fall back from "all patches" to "a single relevant patch"[cite: 1].
- Fall back from old savestates to a regular `.sav` copy[cite: 1].
- Fall back from complex characters/equipment to the simplest reachable scene[cite: 1].
- Shorten from a dozen steps down to the shortest triggering sequence[cite: 1].
- Fall back from multiple consecutive triggers to the first location where the anomaly occurs[cite: 1].

The value of a minimal reproduction is not to make the problem disappear, but to answer: **Which single minimal condition, when added, flips the result from normal to abnormal?**[cite: 1]

## 4. Compare Only One Difference at a Time[cite: 1]

Four recommended control setups:[cite: 1]

| Control Pair | Fixed Conditions | Single Variable | Question It Can Answer |
|---|---|---|---|
| Baseline vs. Single Patch[cite: 1] | mGBA, regular save, steps[cite: 1] | ROM[cite: 1] | Was it introduced by this patch?[cite: 1] |
| Single Patch A vs. A+B[cite: 1] | Baseline, save, steps[cite: 1] | Add B[cite: 1] | Is it a combination issue?[cite: 1] |
| Normal Path vs. Boundary Path[cite: 1] | ROM, character, scene[cite: 1] | Single boundary value[cite: 1] | Is it an index or upper-bound issue?[cite: 1] |
| Before Save vs. After Full Reboot[cite: 1] | ROM, save[cite: 1] | Reload persistent state[cite: 1] | Was RAM modified without being properly persisted?[cite: 1] |

Do not change the ROM, save file, character, equipment, and operating steps all at the same time, otherwise the results cannot be attributed[cite: 1].

## 5. Select Inspection Direction Based on Symptoms[cite: 1]

### Immediate Failure on Cold Boot[cite: 1]

Prioritize checking: ROM identity, output truncation, writes near the entry point, ARM/Thumb state, out-of-bounds writes[cite: 1]. Do not suspect in-game data tables first[cite: 1].

### Black Screen Only When Entering a Specific Page or Action[cite: 1]

Prioritize checking: Hooks along that path, BL/BX targets, return addresses, register saving, stack balance, literal pools, and jump tables[cite: 1]. Record the "last normal page" and "which key was pressed before failure."[cite: 1]

### No Crash, but Incorrect Values[cite: 1]

Prioritize checking: Little-endian format, field bit-widths, signed/unsigned types, record stride, indices, and units[cite: 1]. Prove the data source first before discussing formulas[cite: 1].

### Failure Only at 0, Upper Limit, Empty Slot, or Full Capacity[cite: 1]

Prioritize checking: `<`/`<=`, `>`/`>=`, off-by-one indices, loop counts, capacity, and empty record representations[cite: 1]. Perform a three-point comparison: one value before the boundary, the boundary value, and one value after the boundary[cite: 1].

### Function Works Normally, but Lost After Save and Reboot[cite: 1]

Prioritize checking: Whether modifications only occurred in RAM, whether save functions overwrite that field, Flash write lengths/checksums, and whether reading a save rebuilds or clears it[cite: 1]. Do not use savestates to replace regular save verification[cite: 1].

### Single Patch Works, but Fails When Combined[cite: 1]

First check for direct address overlaps, then check shared functions, call order, RAM fields, injection regions, item records, and save semantics[cite: 1]. Having no address overlap does not guarantee compatibility[cite: 1].

## 6. Four Questions When Reverse-Engineering an Existing Patch[cite: 1]

When seeing a segment of `before_hex → after_hex`, ask in sequence:[cite: 1]

1. Is this data, a pointer, Thumb code, or ARM code?[cite: 1]
2. Does the write cover only one complete instruction? If only one byte was modified, what is the complete half-word or word?[cite: 1]
3. If it's a BL/BX instruction, what were the original and new targets? Are parameters and return values compatible?[cite: 1]
4. If it's injected code, are the entry point, return point, registers, stack, and region ownership fully clear?[cite: 1]

Refer to [analysis/tracing_cases/README.md](analysis/tracing_cases/README.md)[cite: 1].

## 7. Three Concrete Case Examples[cite: 1]

### Level 250: Why You Can't Just Change One Comparison Value[cite: 1]

Observing `cmp #198` does not mean you simply need to change it to 248[cite: 1]. You must also ask how many entries the EXP table has, whether all consumer functions switched tables, whether going out of bounds occurs at level 250 cap, and how the UI/save file displays it[cite: 1]. This is an example of "a single phenomenon having multiple joint constraints."[cite: 1]

### Soul Return: Restored HP Isn't Enough to Declare Success[cite: 1]

You also need to check whether the item is consumed only once, whether SP and status conditions are restored, whether it returns to the original death flow when holding no items, whether consecutive fatal damage behaves normally, and whether item quantities remain correct after saving and fully rebooting[cite: 1]. This is an example of "target effects and side effects must be verified separately."[cite: 1]

### COUNTER: No Crash Doesn't Mean It's Correct[cite: 1]

The game running after instruction reordering only proves that instructions are syntactically valid[cite: 1]. You still need to check the target state visible to called functions, whether return values are preserved, paths with vs. without skills, and other classes[cite: 1]. This is an example of "valid control flow does not equal correct functional semantics."[cite: 1]

## 8. Fixed Template for Each Debug Round[cite: 1]

```text
Question verified this round only:
Fixed conditions:
Single varied condition:
Input ROM SHA-256:
Patch ID/Combination:
Regular save copy:
Shortest reproduction steps:
Expected:
Actual:
Last normal state:
First abnormal state:
Reproduction count:
Hypotheses supported this round:
Hypotheses ruled out this round:
Evidence still missing:
Next minimal read-only check:
```[cite: 1]

"No anomaly found" only rules out conditions covered in this round; it does not mean fully passed[cite: 1].

## 9. How AI Should Help[cite: 1]

AI is suited for: organizing facts, comparing hashes and patch ranges, looking up address indices, disassembling small ranges, listing up to three hypotheses, designing a minimal check, and compiling maintainer results[cite: 1].

AI should NOT: suggest a dozen guesses at once, modify ROMs on its own, guess fields from feature names, treat historical pseudocode as current bytes, describe successful boots as functional verification, or claim to have run mGBA on behalf of the lead developer[cite: 1].

Searching code is not completing analysis[cite: 1]. After keyword, constant, or address hits occur, you must answer at least: when this logic executes, where input comes from, which conditions decide branches, who is called, what state is modified, who uses the return value, and where it goes when conditions aren't met[cite: 1]. If these cannot be answered, keep the hits as candidates rather than delivering them as conclusions[cite: 1].

If the AI supports sub-agents, use at most 2, split into complementary tasks such as "one checking static code and call relationships, one checking patches/structures/historical evidence."[cite: 1] Do not let two sub-agents perform duplicate full-repo searches; the primary AI must cross-check address and evidence consistency between both sides[cite: 1].

If information is insufficient, the AI should output "what is missing and how to obtain it minimally," rather than simply saying "unable to determine."[cite: 1]

## 10. When to Stop and Hand Over to the Lead[cite: 1]

Stop modifying further under the following conditions:[cite: 1]

- ROM identity mismatch[cite: 1];
- Unable to stably reproduce[cite: 1];
- Unclear ARM/Thumb status, function boundaries, or return points[cite: 1];
- Involves unknown Flash/save writes[cite: 1];
- Requires the lead developer to observe visuals, audio, or actual input results[cite: 1];
- Three consecutive minimal checks still point to the same unobtainable external evidence[cite: 1];
- Too many candidates to narrow down with a single condition[cite: 1].

Stopping is not failure[cite: 1]. Clearly documenting what has been ruled out and what remains is far more valuable than continuing to modify bytes without evidence[cite: 1].

```