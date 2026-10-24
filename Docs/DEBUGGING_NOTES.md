## Debugging and Failure Criteria

If unfamiliar with debugging, read `Docs/Old_Docs/DEBUG_THINKING_GUIDE.md` first. It provides layered decision-making, minimal reproduction steps, single-variable controls, symptom classification, and halt conditions. This page contains a quick checklist.

### Black Screen / Crash Minimal Reporting Checklist

First record: ROM SHA-256, mGBA version, cold-boot status, `.sav` used, whether a save state was loaded, last normal frame rendered, exact button sequence, and reproducibility. Do not stack additional patches before documenting this.

### Common Misjudgments

* **Build Succeeded:** Only indicates tools generated output files.
* **Title Screen Reached:** Only proves a portion of the startup path works.
* **`DISPCNT=0x0000` Cold State:** Does not individually prove ROM failure.
* **No Crash:** Does not prove the target feature executed.
* **Old Save State Loads:** Does not prove its ROM identity matches current output.
* **Patch Addresses Do Not Overlap:** Does not guarantee control flow, RAM, save file, or resource semantic compatibility.

### Troubleshooting Sequence

1. Cold-boot with original baseline to verify mGBA setup and local ROM integrity.
2. Verify patch input hashes and ensure output diffs fall strictly within declared bounds.
3. Cold-boot the patched ROM without loading save states.
4. If normal, use a `.sav` copy to proceed along the target execution path.
5. Load save states only after verifying they share exact ROM/BIOS identities.
6. If a black screen occurs, record the shortest button sequence before/after, and roll back to a single patch to reproduce.

For BL/branch issues, focus on Thumb state, alignment, overwrite length, return address, literal pool, and ARMv4T instruction validity. For data issues, check little-endian representation, bit width, table stride, and index bounds.

---