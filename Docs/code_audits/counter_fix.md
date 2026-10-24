# `counter_fix` Static Code Audit[cite: 6]

Conclusion: This is an in-place Thumb instruction reordering inside function `0x0801F150` without using any injection area[cite: 6]. It moves the target state write to after the damage call, rather than "unconditionally triggering a counter-attack"[cite: 6].

## Complete Rewrite Window[cite: 6]

```text
Address    Original                          Modified
0801F1C0   movs r0,#0x0A                     mov r0,r8
0801F1C2   strh r0,[r5,#0x0C]                mov r1,r5
0801F1C4   mov r0,r8                          mov r2,r9
0801F1C6   mov r1,r5                          movs r3,#0
0801F1C8   mov r2,r9                          bl 0x0801E358
0801F1CA   movs r3,#0                         movs r3,#0x0A
0801F1CC   bl 0x0801E358                     strh r3,[r5,#0x0C]
0801F1D0   Next instruction unmodified: lsls r0,r0,#16

```

The file offset is `0x0001F1C0-0x0001F1D0`[cite: 6]. The called function is `0x0801E358`[cite: 6]. Subsequent counter conditions around `0x0801E610-0x0801E65A` further check Warrior class, related skill levels, and target `+0x0C == 2` conditions[cite: 6]; thus, this fix only adjusts the timing of state writing[cite: 6].

## ABI / Control Flow Checks[cite: 6]

* `r5` holds the target pointer in this context and belongs to callee-saved registers[cite: 6].
* `r3` is a caller-saved register, so reassigning `0x0A` after the call is necessary[cite: 6].
* `strh` does not overwrite `r0`, preserving the return value of `0x0801E358` for subsequent use after `0x0801F1D0`[cite: 6].
* The rewrite window does not alter the function entry, stack frame, BL target, or code length[cite: 6].

## Evidence Boundaries[cite: 6]

* `confirmed/static`: Current baseline bytes, full instruction sequence, call target, register/return value data flow[cite: 6].
* `inferred`: Root cause of the bug was premature target state writing causing subsequent paths to miss the expected state[cite: 6].
* `untested in this package`: With/without COUNTER skill, different classes, hit/miss, kill, consecutive attacks, and save/load combat regression[cite: 6].

Record as `user accepted` after owner acceptance[cite: 6]. Source: Source project `rom/ghidra_out/counter_fix_analysis.md`, Thumb disassembly, and current patch definition[cite: 6]; legacy baseline hashes in old reports are not treated as current dynamic evidence[cite: 6].