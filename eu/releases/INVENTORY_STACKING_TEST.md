# Experimental EU inventory stacking test

[inventory-stacking-test.bps](inventory-stacking-test.bps) targets the exact
clean 16 MiB European AU2P ROM in `profiles/ss2-eu.json`. Use a BPS patcher;
the output is 32 MiB. Locally, the already-patched test ROM is
`artifacts/ss2-eu-inventory-stacking-test.gba`.

Eligible consumables stack to 100. Existing zero quantities count as one.
Soul Return is excluded. In the inventory, A opens a quantity selector;
Up/Down change quantity by one, A confirms, and B cancels. Move onto a
matching item to merge, or an empty slot to place the selected quantity.
The selector currently retains the original gold-style `G` display.

320 core checks and 125 five-language display checks passed. Real bag
merge/split/cancel and ordinary-save/fresh-process reload are covered.
Shop transactions, warehouses, quick-slot combat use and mod combinations
remain unverified. The resource descriptor reader needs further audit.
This is an experimental build, separate from the approved refund/resistance
patches. It contains stacking only.

On 2026-10-05 the owner reported that it generally works very well, with one
niche bug still awaiting reproduction. See the [feedback record](../docs/USER_ACCEPTANCE.md#inventory--consumable-stacking--2026-10-05).

To try it with fresh isolated copies, from `eu/`:

```sh
python scripts/play.py --rom artifacts/ss2-eu-inventory-stacking-test.gba
```

Enter → X opens Item. Arrows move the cursor; X is A and Z is B.
The launcher uses a new save copy each time. The launcher also prints
its existing skill-refund instructions; use the stacking steps above.

[Audit and results](../docs/stacking-audit.md),
[exact build manifest](../docs/evidence/stacking-build.json).

BPS SHA-256: `5f77b79560db7b05883a595047deb74566787da510ceb62e60107f5faa1fc1d2`.
Output ROM SHA-256: `8057383d6184597412ec33abe7d7c1c3645555e8d56bc89ee790656aef3e4cb9`.
