# Injection Area Ownership[cite: 5]

Below are the exclusive write boundaries defined by the current catalog for the four patches in this directory[cite: 5]. Intervals use half-open interval notation `[start, end)`[cite: 5]. Any new patch must check both machine-defined actual writes and catalog ranges before writing[cite: 5]; "blank/padding value areas" do not imply unowned space[cite: 5].

| ROM Range | File Offset | Type/State | Current Owner | Constraints |
| --- | --- | --- | --- | --- |
| `[0x080BB120,0x080BB190)` | `[0x000BB120,0x000BB190)` | Thumb Injection Code | `life_leech` | Reuse prohibited; legacy random map scheme used nearby `0x080BB140`, conflicting with this area[cite: 5] |
| `[0x09000100,0x090004E8)` | `[0x01000100,0x010004E8)` | 250×`u32` Data Table, not code | `level_250` | Prohibited from being treated as a code cave or general data area[cite: 5] |
| `[0x08F00060,0x08F00170)` | `[0x00F00060,0x00F00170)` | Thumb Injection Code/Embedded Constants | `soul_ring` | Entry points and internal constant boundaries not fully annotated; additional writes strictly prohibited[cite: 5] |
| None | None | In-place Thumb Instruction Reordering | `counter_fix` | Occupies no injection area, but exclusively holds `[0x0801F1C0,0x0801F1D0)`[cite: 5] |

Key Requirements:

* File offset is calculated by subtracting `0x08000000` from the ROM address[cite: 5].
* Thumb function pointers often indicate state via odd addresses; actual code location requires clearing the lowest bit[cite: 5]. An odd entry point cannot be directly used as a file offset[cite: 5].
* Before writing, current baseline size and all required hashes must be matched, and `before_hex` must match chunk by chunk[cite: 5].
* Input ROM must never be overwritten; always create a new output[cite: 5].
* Stop modification if any of BL, BX, literal pool, return address, register save conventions, or injection ownership is unclear[cite: 5].

---