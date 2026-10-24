# Code Patch Audit Index



This directory provides the disassembly context, cross-references, instruction set states, and injection area ownership required for code-level modifications. The materials were originally organized based on an old clean baseline; the SHA-256 for the current SS2_SC baseline is `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`. Addresses can serve as positioning entry points, but code bytes, pre-images, and injection area usage must be re-read and verified against the current baseline.

| Feature | Audit Completeness | Entry |
| --- | --- | --- |
| `life_leech` | Hook, called functions, and injection ownership can be reviewed; functional acceptance by owner still required

 | [life_leech.md] |
| `level_250` | Comparison instructions, literals, and experience table ownership can be reviewed; level-up regression by owner still required

 | [level_250.md] |
| `counter_fix` | Full rewrite window, call order, and register constraints can be reviewed; combat acceptance by owner still required

 | [counter_fix.md] |
| `soul_ring` | **Partial Audit**: Range and original instructions located, but full ABI/semantics of the injection routine are not yet closed

 | [soul_ring.md] |

Machine-executable byte-by-byte ground truth remains subject to [`../../Patches/Definitions/Official/`]. This directory explains "what code these bytes reside in, why they are dangerous, and what evidence is still missing," and cannot replace raw byte verification or owner acceptance.

Evidence tags follow [`../../Docs/EVIDENCE_BOUNDARY.md`]. Legacy ROM hashes from historical reports are not inherited as dynamic evidence for the current baseline; they are used as current static context only when their disassembly matches the current definition's `before_hex`.

See also [INJECTION_OWNERSHIP.md].

---