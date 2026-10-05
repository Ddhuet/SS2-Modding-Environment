# Porting Chinese mods to EU

The first completed example is `skill-point-refund.json`, derived from Chinese `respec.json`. The original definitions and exact baseline remain available locally. The candidate command generalizes to other definitions:

```sh
python -m ss2tools port-candidates \
  inputs/ss2-cn-baseline.gba inputs/ss2-eu.gba \
  reference/upstream/patches/definitions/respec.json \
  --source-profile profiles/ss2-cn-baseline.json \
  --target-profile profiles/ss2-eu.json
```

It verifies both ROM identities and every source pre-image, scans aligned context windows while normalizing Thumb BL instructions, and lists candidate offsets, destination pre-images and decoded call correspondences. It does not emit a guessed patch. For this respec definition all three windows uniquely identify the sites used by the tested EU port.

An audit then establishes what the instructions do and whether the new location preserves that behavior. For respec this required identifying the EU skill table, menu states, temporary records, commit/cancel paths and the sound call. The result is recorded in `respec-audit.md`, and the reviewed patch contains fixed EU offsets. Future builds reuse those facts; they do not rematch the code.

## Other types of mods

- Small in-place code edits: this matcher is a useful first step. `--window` and `--before` adjust context for investigation; shortening a window can increase ambiguity and is not approval.
- Data tables: use record layout, IDs and neighboring entries. Repeated item values are weak anchors. The first assessment found promising temple-fusion correspondence, but this workspace has not approved or gameplay-tested that port.
- Injected code/expanded ROMs: current builder deliberately accepts same-size writes only. Add explicit allocation and relocation support with checks when implementing the first such mod. Do not bypass bounds or pretend the Chinese injected blob is position-independent.
- Different structures: define EU fields based on EU code. Even this first feature uses different globals and a different player skill-block offset from CN.

Read-only ARM/Thumb inspection:

```sh
.venv/bin/python scripts/disassemble.py inputs/ss2-eu.gba --offset 0x7AE56 --length 0x80
python -m ss2tools bl decode --offset 0x7AE72 --hex 'ddf7f3fb'
```

Use `python -m ss2tools --help` for the full command surface. `bl encode` uses an even CPU destination address without the Thumb-state bit. No instruction encoder can establish that its destination is semantically correct; that belongs in the audit.
