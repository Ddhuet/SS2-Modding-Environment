# Skill refund: measured results

Status: **runtime verified for the scenarios below; owner subsequently confirmed the refund works**. See [the acceptance record](USER_ACCEPTANCE.md) for the scope of that confirmation.

The final ROM SHA-256 is `6148261c3430879cd26a3969adda853407bb98477cc8b8d0b6d4d8389c8b17c7`. Both the experimental and final builds have these same bytes. Only patch metadata changed after the runtime run; the final build manifest binds the current definition.

Input EU SHA-256: `e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2`.
Input normal save SHA-256: `c33cc290d3c44b977b2dc84fedd31539d48d7739252f2086f9c39196b63f45b7`.
Emulator: pinned mGBA 0.10.5, commit `26b7884bc25a5933960f3cdcd98bac1ae14d42e2`, native core with HLE BIOS, fixed RTC, software renderer.

## Actual-save button-driven regression

[Machine-readable report](evidence/refund-regression.json): 174 assertions passed. These are individual assertions within scenarios, not 174 independent gameplay features.

The fixture is Paige, level 19, Priestess, with 18 invested skill points and no unused points. Original and patched ROMs were cold-booted independently with copies of the same normal save. No RAM/register writes or emulator savestates were used in this acceptance run.

- Original EU ROM: Left cannot refund Flail investment from before the current menu session.
- Patched EU ROM: Left on Flail level 2/progress 0 gives level 1/progress 1 and pool +1; the live record stays unchanged until A.
- Right re-spends the point and restores the exact original editable skill block.
- B restores the original live block and returns to overview.
- Three refunds take Flail to level 0/progress 0; another Left does nothing.
- Every skill row is visited; every previously invested point is refunded. All eight rows become level 0/progress 0 and the pool becomes 18.
- Re-spending all 18 points restores the exact original skill block.
- A commits one refund; reopening the allocation screen preserves it.
- The game saves through its actual Save menu/dialogue. A separate Python process starts a fresh emulator core, loads only the resulting normal `.sav`, and observes the exact committed block. See [reload evidence](evidence/save-reload.json).
- German, French, Italian and Spanish independently cold-boot and exercise the same refund and commit path. Screenshots confirm the selected languages; their relevant point values agree with English.
- The point invariant `pool + sum(level*(level+1)/2 + progress)` holds across every refund/spend action.
- Source ROM/save hashes remain unchanged.

Screenshots: [before](evidence/before.png), [one point refunded](evidence/after.png), [all 18 refunded](evidence/all-refunded.png).

## Synthetic max-level boundary

[Separate report](evidence/max-level-boundary.json): 74 assertions passed. This uses **three explicit RAM writes in an isolated core** to construct pool 1 and Flail level 7/progress 0. It is not claimed to be a naturally earned level-7 skill on the user's save.

Right at maximum level is a no-op. Left crosses to level 6/progress 6 and returns one point. Re-spending restores level 7. Refunding 28 points reaches zero; another Left remains a no-op. Re-spending all 28 restores the exact entry block. Cancel preserves the entry fixture.

## Tooling and emulator checks

26 Python unit tests pass, covering profile/pre-image refusal, overlap and output alias protection, no overwrites, IPS bytes, Thumb BL signed ranges/relocation, candidate ambiguity and invalid matches, and failure on changed source hashes.

[Emulator infrastructure report](evidence/emulator-infrastructure.json): 16 checks pass, covering paused startup, exact input/frame behavior, ROM reads, screenshots, deterministic state replay, CPU/RAM/pixel restoration, save export, fresh-core reload, output confinement, alias protection, cross-ROM/altered/unbound state rejection, and source preservation. Native states require a ROM/hash-bound metadata sidecar.

The SDL player was built from the same source, verified with `--version`, and remained running in a dummy-video/audio smoke test until a controlled shutdown. Human desktop gameplay is still for the user to try.

## Limits and reproducibility

This is one supplied character/class and one ROM revision. Other classes, corrupt saves, multiplayer, and combinations with other mods are not covered. Other languages passed the basic refund/commit scenario, not every dialogue or layout in the game. No general save-format compatibility with CN/US is claimed.

`approved` in the patch means approved for deterministic building on the recorded evidence; it is distinct from the subsequent owner acceptance and does not mean every game scenario is covered.

Two early automation runs exposed test-driver timing assumptions: spending a point can animate a level-up, so point actions now wait 60 frames; row navigation clamps rather than wrapping, so selection explicitly moves Up or Down. The ROM patch did not change to fix those test-driver issues. The final run and separate-process reload passed.

From the EU project root, choose unused output directories:

```sh
python -m unittest discover -s tests -v
python scripts/test_emulator.py --rom inputs/ss2-eu.gba --save inputs/ss2-eu.sav --output runs/harness-new
python scripts/test_skill_refund.py --output runs/refund-new --languages
python scripts/test_skill_refund_boundary.py --output runs/boundary-new
```

Runs preserve button transcripts, screenshots, session identities and normal save copies. Reusing an existing run directory is deliberately rejected. The tests require the exact recorded inputs and patched ROM hash; they are not generic acceptance for arbitrary future patches.
