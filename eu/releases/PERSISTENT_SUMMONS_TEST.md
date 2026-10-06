# Experimental EU persistent Archer and Dark Wizard summons

Implemented 2026-10-06. Freezes the two existing summon expiration counters;
normal cleanup conditions remain. This is the standalone 16 MiB EU build.

- Ready ROM: `artifacts/ss2-eu-persistent-summons-test.gba`
- [BPS patch](persistent-summons-test.bps)
- [IPS patch](persistent-summons-test.ips)
- [Audit and test scope](../docs/persistent-summons-audit.md)
- [Build manifest](../docs/evidence/persistent-summons-build.json)

Apply the patch to the exact clean EU AU2P ROM, SHA-256
`e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2`.
BPS includes source/target CRCs. IPS has no source identity enforcement.
Patched ROM SHA-256:
`6f790b89b6f9131577e9a7424adfd2f178171d8a0c20f9f385e61471d1832a6a`.

From `eu/`, use your Archer or Dark Wizard normal save:

```sh
python scripts/play.py --rom artifacts/ss2-eu-persistent-summons-test.gba --save /absolute/path/to/your-character.sav
```

The launcher makes fresh ROM/save copies and prints their location. X is GBA A,
Z is B, Enter is Start, and arrows are the D-pad. Its default refund guidance
describes the launcher's default ROM; use your usual summon controls here.
The supplied Paige save is a Priestess and does not provide either class.

Summon normally, then fight long enough for it to perform several activations.
Expected result: the summon stays active beyond its usual activation limit.
Re-summoning should retain the game's usual single-summon behavior. Check a
room/town transition and death using your usual gameplay; those cleanup paths
retain their original instructions. Save/reload is not intended to retain an
active summon across a new session.

Automated baseline/patched diagnostics exercised both real scheduled summon
lifecycles at parameter levels 1 and 7, boundary expiration, zero/shared-flag/
owner-state cleanup and duplicate re-summoning. Every artificial setup is
recorded. Actual class casting and the owner's gameplay acceptance remain
pending, so this build is experimental.
