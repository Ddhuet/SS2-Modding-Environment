# Evidence Boundary



Every conclusion must explicitly use one of the following tags:

| Tag | Meaning |
| --- | --- |
| `confirmed/static` | Confirmed by baseline bytes, disassembly, cross-references, table structures, or raw byte assertions; no runtime effects are claimed.

 |
| `dynamically verified` | Expected results actually observed on explicit ROM hashes, emulators, save files, and operation paths.

 |
| `user accepted` | Manually accepted by the project lead, but not retested during the current cleanup/execution session; scope must be specified.

 |
| `inferred` | Deductions supported by multiple pieces of evidence; alternative explanations are still possible.

 |
| `hypothesis` | Hypothesis to be verified or candidate positioning.

 |
| `untested` | Test not executed in the current version.

 |

"Able to build," "able to boot," and "did not crash" do not equate to completed functional verification. Seeing the title screen only proves the boot path; a single success cannot substitute for boundary, regression, and save file verification.

Dynamic results on older ROMs or older savestates cannot be automatically inherited by other ROMs. Dynamic logs must state at least: Input/Output SHA-256, mGBA version, regular save or savestate identity, starting point, button input steps, expected result, actual result, failures, and unexecuted items.

When migrating static conclusions to a new baseline, relevant bytes must also be rechecked for consistency. Custom parameter build artifacts, combined ROMs, and single-feature ROMs are distinct objects; dynamic results for one object cannot endorse another object.

Recommended record format:

```text
Feature ID:
ROM SHA-256:
Evidence Tag: confirmed/static | dynamically verified | user accepted | inferred | hypothesis | untested
Starting Point & Save File:
Operation Path:
Expected:
Actual:
Failures:
Unexecuted:
Evidence Files:

```