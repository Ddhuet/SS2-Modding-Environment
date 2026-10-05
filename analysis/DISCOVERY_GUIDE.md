# Controlled Discovery of Unknown Mechanisms

Taking "whether the auto-resurrection of 'Soul Return' triggers only upon true fatal damage" as an example:

1. First, use `search_analysis_index.py 魂之回归` to query known entry points and hook points.
2. Verify the input ROM hash; do not inherit addresses on unknown ROMs.
3. Starting from the fatal commitment function at `0x08013594`, disassemble 32–96 bytes before and after the hook, and verify them against the current baseline original bytes.
4. Use `find_thumb_bl_references.py --target 0x08013594` to find first-level callers, ensuring the hook has not been mistaken for an independent function entry.
5. Check hook jumps, injection entry points, returns to the original death path, and injection region ownership against candidate definitions.
6. The following must be proven individually: fatal return conditions, character-to-item mapping, item consumption, HP/status restoration, and falling back to the original death flow when conditions are not met.
7. After the static chain is closed, the team lead must design four acceptance test paths: "non-fatal damage," "fatal damage with item," "fatal damage without item," and "complete reboot after saving."

Prohibited Inferences:

* Found a caller of the fatal function ⇒ Proved that all death paths pass through this caller.
* HP has been restored ⇒ Proved that items were correctly consumed and the death state was completely cleared.
* Can boot or hasn't crashed ⇒ Branch fix is correct.
* Swapping `bhi/bls/bgt/ble` without verifying signedness.

If there are more than 20 candidates, first add constraints for system, caller, field, or address range; do not feed the entire ROM to the AI.