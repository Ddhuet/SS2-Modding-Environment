
## 05_COUNTER_PATCH_TO_DATAFLOW.md

# Case 5: From In-Place Patch to Registers and State Dataflow[cite: 2]

`counter_fix` has no injection region and does not change total code length, but it still represents a high-risk code modification[cite: 2].

The original window executes first:[cite: 2]

```text
movs r0,#0x0A
strh r0,[r5,#0x0C]
...prepare arguments...
bl 0x0801E358

```

Modified window changes to:[cite: 2]

```text
...prepare arguments...
bl 0x0801E358
movs r3,#0x0A
strh r3,[r5,#0x0C]

```

After tracing the called function `0x0801E358`, it can be observed that COUNTER-related conditions read the target `+0x0C` state[cite: 2]. This forms the root cause hypothesis: "writing state too early before call → called function observes a different state → move write to after call"[cite: 2].

ABI review must also prove that:[cite: 2]

* `r5` still preserves the target pointer after the call[cite: 2].
* `r3` is a caller-saved register and is re-assigned after the call[cite: 2].
* `strh` does not destroy the `r0` return value[cite: 2].
* Subsequent code at `0x0801F1D0` continues to consume the correct return value[cite: 2].

For the full instruction table, see [`../../docs/code_audits/counter_fix.md`][cite: 2]. This case demonstrates that having no injection, no change in jump target, and identical length does not mean independent control flow review is unnecessary[cite: 2].