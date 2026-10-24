# User acceptance records

## Skill-point refund — 2026-10-04

The owner reported: **“Woooo! It works, thanks!”** after receiving the EU skill-refund build and native play instructions.

Record this as user confirmation that the delivered refund feature works. The message does not specify which class, language, edge cases or persistence steps they personally tested; do not infer those details. Automated coverage remains described separately in [TEST_RESULTS.md](TEST_RESULTS.md).

Delivered ROM SHA-256: `6148261c3430879cd26a3969adda853407bb98477cc8b8d0b6d4d8389c8b17c7`.

This is an appended acceptance record. The patch definition, build manifest and original machine-generated test reports remain unchanged so their recorded hashes and historical status stay valid. Their `not_run`/pending human-acceptance wording describes the earlier build/test moment; this record supplies the subsequent owner confirmation.

## Inventory / consumable stacking — 2026-10-05

The owner reports that the delivered stacking build works very well except for one bug in a niche situation. They are continuing testing to identify its cause. Record this as scoped user acceptance with an unresolved reported bug; its trigger, reproduction steps and affected operation are not yet known. Do not infer which languages, item types, shop/warehouse/quick-slot paths or persistence cases the owner tested.

Delivered ROM SHA-256: `8057383d6184597412ec33abe7d7c1c3645555e8d56bc89ee790656aef3e4cb9`.

Automated coverage and remaining audit work are described in [stacking-audit.md](stacking-audit.md). The build remains experimental. Its patch definition, build manifest and original test reports retain their historical status and hashes; this record supplies subsequent owner feedback.

## Guaranteed fusing recipe tables — 2026-10-07

The owner reported: **“Yessssssssssssss! God I've wanted this patch since I was a kid. It woooooorks!”** They also agreed with the handling of the niche cases: grade-0 Bone/Scale recipe matches always give their set, and no-recipe combinations stay random.

Record this as user confirmation that the delivered build works. The message does not say which recipes, grades or persistence steps they personally tested; do not infer those details. Automated coverage is in [fusing-audit.md](fusing-audit.md).

Delivered ROM SHA-256: `279dfab77d5cf973083632e3aba5d5aa9bad958e5baec4591a80d0347dc8b2d2`.

The patch definition and build manifest keep their `static_candidate`/`not_run` wording from the build moment; this record supplies the owner's confirmation that followed.
