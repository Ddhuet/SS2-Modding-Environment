# Current EU IPS patches

Use these two files. Both target the original European ROM recorded in `profiles/ss2-eu.json`.

| IPS | What it does | Status |
| --- | --- | --- |
| [skill-refund.ips](skill-refund.ips) | Left in skill allocation refunds a spent skill point; A commits, B cancels. | Automated tests passed; owner confirmed it works. |
| [status-resistance-fix.ips](status-resistance-fix.ips) | Fixes unsigned division of a negative status-chance numerator when resistance exceeds 100. | EU code audited; controlled and combat-fixture tests passed; approved for use. |

The skill-refund, skill-refund-test and earlier-build IPS files under `artifacts/` have **identical bytes**. This folder's `skill-refund.ips` is that same patch with a short name.

The resistance candidate-001 IPS and this folder's `status-resistance-fix.ips` also have **identical bytes**. On 2026-10-04 the owner requested using the tested fix and addressing further bugs later. The definition was promoted to `approved`, and a fresh exact-profile build manifest records that decision. This is release approval, not a claim that the owner already tested resistance in gameplay.

JSON files in `patches/` are recipes for our verified builder. `.manifest.json` files record build identities/evidence. **Use `.ips` files in an IPS patcher.** `.gba` files under `artifacts/` are already-patched local ROM copies.

The resistance audit also found a separate stale status-payload issue. It remains a follow-up bug; it does not invalidate the tested division correction. Details and all test scopes stay in [the audit](../docs/status-resistance-audit.md).

## Reproduce or inspect

- Refund: [definition](../patches/skill-point-refund.json), [owner acceptance](../docs/USER_ACCEPTANCE.md), [build manifest](../artifacts/ss2-eu-skill-refund.gba.manifest.json).
- Resistance: [definition](../patches/status-resistance-signed-division.json), [current build manifest](../docs/evidence/status-resistance-release-build.json), [previous candidate definition](../docs/evidence/status-resistance-candidate-definition.json).
- Already-patched ROMs: `artifacts/ss2-eu-skill-refund.gba` and `artifacts/ss2-eu-status-resistance.gba`.

IPS SHA-256:

```text
skill-refund.ips          1731977ffefe72ac426dba0900e0e6b9152f3f12f7b048dff8e35ef7d4883b7e
status-resistance-fix.ips 0085fd7c72898b277b7410a1884c9f61b33f37988c3256e6e588e689e529f322
```

From `eu/`, use a new output filename to rebuild resistance:

```sh
python -m ss2tools build inputs/ss2-eu.gba patches/status-resistance-signed-division.json \
  artifacts/resistance-new.gba --profile profiles/ss2-eu.json \
  --ips artifacts/resistance-new.ips
```

## Experimental stacking build

The [inventory stacking BPS test](INVENTORY_STACKING_TEST.md) is available
separately. Its expanded EU build passes bag/persistence diagnostics and
five-language quantity display checks, but remains experimental pending
shop/warehouse/quick-slot gameplay and resource-consumer review.

## Experimental Warrior COUNTER build

The [Warrior COUNTER test build](WARRIOR_COUNTER_TEST.md) provides a standalone
16 MiB EU ROM and BPS/IPS patches. The state-timing rewrite and EU call were
statically audited; no gameplay tests or automated test suite were run, per
the owner's request. Ability testing and acceptance are pending with the owner.

## Experimental persistent summons build

The [Archer/Dark Wizard persistent summons test build](PERSISTENT_SUMMONS_TEST.md)
provides a standalone 16 MiB EU ROM and BPS/IPS patches. It freezes two summon
expiration counters while retaining cleanup. Static verification, patch round
trips and 329 assertions across 56 synthetic engine scenarios pass; normal
class casting, actual transitions/death/save-reload and acceptance remain pending.
