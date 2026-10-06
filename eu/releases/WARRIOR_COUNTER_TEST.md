# Experimental EU Warrior COUNTER fix

Implemented 2026-10-06. Gameplay testing is left to the owner as requested.
This is a port of the CN state-timing fix: damage calculation sees the target's
existing state before the caller changes it to 10. The existing COUNTER gates
and damage calculation remain in place.

Already-patched ROM: `artifacts/ss2-eu-warrior-counter-test.gba`.
It contains this fix only, against the clean 16 MiB EU AU2P ROM.

Distribution patches for that exact clean ROM:

- [warrior-counter-test.bps](warrior-counter-test.bps)
- [warrior-counter-test.ips](warrior-counter-test.ips)

BPS includes source/target CRCs; IPS does not enforce input identity.
Both produce the same 16 MiB output. No expanded ROM or CN assets are needed.

From `eu/`, launch with your Warrior normal save:

```sh
python scripts/play.py --rom artifacts/ss2-eu-warrior-counter-test.gba --save /absolute/path/to/your-warrior.sav
```

The launcher creates fresh ROM/save copies and prints the session save path.
X is A, Z is B, Enter is Start, and arrows are the D-pad. Its printed refund
instructions concern the launcher's default mod; this ROM contains COUNTER only.
The default supplied save is a Priestess, so use your Warrior save here.

Only static instruction/encoding and exact-profile build checks were performed.
No gameplay or automated test suite was run. The build remains experimental
pending your ability test. [Audit](../docs/counter-audit.md),
[manifest](../docs/evidence/counter-build.json).

ROM SHA-256: `e7f713a2185e6c161d9cbc8952e82b16ca94d6712c0cf723ec2d7da535c0e9c8`.
BPS SHA-256: `00475b24c3325bb196c557fc3f536247cded38ec838576888a521d08eba43b08`.
IPS SHA-256: `a8af0b073b9b70af8322afd5fc94a0e58d8a73c8a1005d719c2d1aa05dfdb2d0`.
