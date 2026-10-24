# EU Warrior COUNTER state timing port

2026-10-06: implemented and built as an experimental `static_candidate`.
The owner explicitly requested implementation without agent testing and will
test the ability themselves. No emulator, diagnostic gameplay, unit tests,
save tests or human acceptance are claimed for this port.

## Exact inputs and discovery

- EU profile: `ss2-eu`, 16 MiB AU2P; SHA-256
  `e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2`.
- CN reference profile: `ss2-cn-baseline`; SHA-256
  `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`.
- Source definition: [counter_fix.json](../reference/upstream/patches/definitions/counter_fix.json),
  SHA-256 `2777a738167da3e51bec9a37bfbe1e58b13beacd09ad167015a2351e4587152e`.

The default 96-byte context searches fail. The 32-byte/8-byte-before searches
uniquely map the two source writes at CN file `0x1F1C0`/`0x1F1C6` to EU
`0x1F3E4`/`0x1F3EA`. The latter pre-image differs because its BL displacement
differs. These are discovery evidence only; the actual caller/callee and EU
fields were inspected separately. CN addresses remain reference addresses.

[Static report](evidence/counter-static/report.json),
[candidate report](evidence/counter-static/short-candidates.json),
[default search](evidence/counter-static/default-candidates.json).

## EU instructions and data flow

EU caller `0x0801F374` corresponds to CN `0x0801F150`. At EU entry,
`r8 = r0` (source actor), `r5 = r1` (target), `r9 = r2` (attack data).
The selected path has incoming flags bit 0 clear. The bit-0-set path at
`0x0801F39E` calls the same callee with `r3 = 1` and is outside the rewrite.

| EU address | Original | Replacement |
| --- | --- | --- |
| `0x0801F3E4` | `movs r0,#10` | `mov r0,r8` |
| `0x0801F3E6` | `strh r0,[r5,#12]` | `adds r1,r5,#0` |
| `0x0801F3E8` | `mov r0,r8` | `mov r2,r9` |
| `0x0801F3EA` | `adds r1,r5,#0` | `movs r3,#0` |
| `0x0801F3EC` | `mov r2,r9` | `bl 0x0801E5B0` (4 bytes) |
| `0x0801F3EE` | `movs r3,#0` | second half of BL |
| `0x0801F3F0` | `bl 0x0801E5B0` (4 bytes) | `movs r3,#10` |
| `0x0801F3F2` | second half of BL | `strh r3,[r5,#12]` |

The complete moved BL is `fff7e0f8`; copying CN `fff7c6f8` would call the
wrong EU destination. [Replacement disassembly](evidence/counter-static/eu-replacement.txt).

EU damage calculation `0x0801E5B0` corresponds to CN `0x0801E358`.
At EU `0x0801E5BE`, it preserves the target argument in its own `r8`.
Its COUNTER-related block at `0x0801E85C` has these existing gates:

1. `0x0801DE60` returns class code zero. This helper reads the current player
   via `*(0x030034E0)`, then player `+0x0A`; class 8 aliases to 6.
   The class-zero/slot-six association with Warrior COUNTER comes from the
   matching CN feature research; the actual EU field accesses are verified.
2. The current player's halfword at `+0x4C` is nonzero. With the EU skill
   rows at `+0x34` and stride 4, this is skill row 6's learned level.
3. The attack target's halfword state at `+0x0C` equals **2**, read at
   `0x0801E876`, compared at `0x0801E878`, with failure branch at `0x0801E87A`.

If eligible, it reads skill 6 through `0x0801E0AC` using player `+0x30`.
That helper reads the level at base `+4 + 4*index` and maps level 7 to 8.
The block scales the computed damage by `(110 + 2*effectiveLevel)/100`
using signed division `0x080B9394`, retains the low 16 bits, and calls
`0x0805865C` with argument `0x27`. This port edits none of these conditions,
arithmetic, skill data, randomness or the adjacent class-specific blocks.

The baseline state write sets precisely the same target field to **10**
before that callee can check for **2**, suppressing this block on the rewritten
path. Moving the write allows the callee to observe the prior state, then
leaves the caller's state field at 10 afterward. This supports the source
fix's timing rationale; actual ability behavior awaits the owner's test.
It does not establish a universal incoming-hit trigger or an unconditional
retaliation mechanism. The gate uses the current player and the attack target;
their natural combat relationship should not be invented from the skill name.

The callee saves/restores `r5`, so the caller retains its target pointer.
At `0x0801E976` the callee returns the computed damage in `r0` and restores
its saved registers before returning through `r1`. The replacement assigns
caller-saved `r3` **after** the call and uses `strh r3`; both preserve `r0`.
Unchanged EU code at `0x0801F3F4`/`0x0801F3F6` takes its low 16 bits and
merges them into the caller's result record. Function size, stack layout,
arguments, callee and subsequent instruction addresses are preserved.

## Definition, build and handoff

[Definition](../patches/warrior-counter-fix.json) binds the complete 16-byte
window, including the unchanged halfword, to the exact EU profile. It is a
fixed reviewed location; builds do not rerun heuristic discovery.
[Build manifest](evidence/counter-build.json) records the experimental opt-in,
definition hash and output identities. Input ROMs and fixtures remain unchanged.

```sh
.venv/bin/python scripts/audit_counter.py --output docs/evidence/counter-static-new
.venv/bin/python -m ss2tools build inputs/ss2-eu.gba patches/warrior-counter-fix.json \
  artifacts/ss2-eu-warrior-counter-new.gba --profile profiles/ss2-eu.json \
  --allow-static-candidate --bps artifacts/warrior-counter-new.bps \
  --ips artifacts/warrior-counter-new.ips
```

Use unused output paths. The audit records bytes, disassembly and encoding;
it executes no game code. The builder verifies input identity and pre-images.

Delivered ROM: `artifacts/ss2-eu-warrior-counter-test.gba`, SHA-256
`e7f713a2185e6c161d9cbc8952e82b16ca94d6712c0cf723ec2d7da535c0e9c8`.
It contains only this fix against clean EU. [User handoff](../releases/WARRIOR_COUNTER_TEST.md)
includes BPS/IPS files and launch instructions. Runtime and acceptance remain
pending; append the owner's later observations without rewriting this build's
historical definition or manifest.
