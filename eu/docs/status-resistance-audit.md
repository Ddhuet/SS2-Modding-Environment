# EU status-resistance audit and fixtures

2026-10-04. **The signed-division change is justified for the outer chance calculation and runtime verified in the named diagnostic scenarios. The patch remains `static_candidate`, with no human acceptance or release approval.** The owner-confirmed refund patch, ROM, manifest and acceptance record are unchanged. No combined patch was built.

The original EU routine demonstrably treats a negative numerator as unsigned. Changing the complete division call to the EU signed helper prevents the above-100 chance overflow for positive scaling. A separate uninitialized payload byte can still dispatch a status event after a failed gate. That finding limits the claim: this candidate fixes the division; it does not establish universal status immunity.

## Exact identities and reproducible discovery

| Input | SHA-256 |
| --- | --- |
| EU AU2P, 16 MiB | `e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2` |
| CN modified baseline, 32 MiB | `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989` |
| Paige normal save | `c33cc290d3c44b977b2dc84fedd31539d48d7739252f2086f9c39196b63f45b7` |
| EU resistance candidate | `3e62e1035485b5fe3e4af1040625626686cb886d5680cfb8f2e4a2a721467d5e` |

Source definition: `reference/upstream/patches/definitions/status_resistance_overflow_fix.json`. Its CN file `0x69738` write replaces only the second BL halfword. Reconstructing the entire CN call at `0x69736` gives unsigned helper CPU `0x080BAA7C` before and signed helper `0x080BA8A4` afterward. This establishes the source operation, not EU approval.

The default 96-byte normalized search has no match. A 32-byte window with 16 bytes before the source write uniquely finds EU file `0x690DC`, the **second halfword of the call at `0x690DA`**. Its actual `47fa` pre-image differs from CN `a1f9`; copying the source replacement would call the wrong EU address. Each CN division helper's 128-byte prefix has one exact halfword-aligned EU match: unsigned file `0xB956C`, signed file `0xB9394`. Full EU instructions and executable test results below substantiate the interpretation independently of CN prose.

The EU pair is `50f047fa` → **`50f05bf9`**, re-encoded for CPU destination `0x080B9394`. The definition declares all four bytes and the builder checks the full pair. Two bytes actually differ in the resulting 16 MiB ROM. No injected code, expansion, table edit or other call is changed.

Run from `eu/`, choosing unused output names:

```sh
python scripts/verify_port_inventory.py
.venv/bin/python scripts/audit_status_resistance.py --output runs/resistance-static-new
python -m ss2tools build inputs/ss2-eu.gba patches/status-resistance-signed-division.json \
  artifacts/resistance-new.gba --profile profiles/ss2-eu.json \
  --ips artifacts/resistance-new.ips --allow-static-candidate
python scripts/test_status_resistance.py --patched artifacts/resistance-new.gba \
  --output runs/resistance-diagnostic-new
python scripts/test_status_resistance_gameplay.py --patched artifacts/resistance-new.gba \
  --output runs/resistance-gameplay-new
```

The scripts require the recorded original/save/candidate hashes, reject existing run directories, check source identities afterward, and preserve ROM-bound states, transcripts, every diagnostic mutation and bounded observation. The static script verifies profiles and pre-images, reproduces both discovery searches and prefix matches, checks the encoding, and exports EU/CN disassembly. Saved static evidence: [report](evidence/status-resistance-static/report.json), [search](evidence/status-resistance-static/short-candidates.json), [helper matches](evidence/status-resistance-static/division-prefix-matches.json), [commands](evidence/status-resistance-static/commands.json), [build manifest](evidence/status-resistance-build.json).

## Actual EU producer, gate and consumers

All addresses here are **EU CPU addresses**; subtract `0x08000000` for ROM file offsets. The actual Thumb entry is `0x08069080`, not the division instruction alone.

| Entry value | Demonstrated use |
| --- | --- |
| `r0` | Pointer to resistance block, signed halfwords |
| `r1` | Low 16 bits retained for later duration calculation |
| `r2` | Strength scalar used in `10*strength + 5` |
| original `[sp]` | Target ID; player IDs 0..3, enemy IDs start at 4 |
| original `[sp+4]` | Effect kind; this routine handles only 1 and 4 |
| `r3` | Not consumed by the outer routine |

The routine pushes 32 bytes of saved registers and reserves 8 bytes of local payload. Its local SP is entry SP minus `0x28`. It first calls EU RNG `0x080008C8` and unsigned remainder helper `0x080B95E4` with divisor 100, giving a draw in 0..99.

At `0x080690B4`, kind 1 reads signed halfword block `+0`; at `0x080690C8`, kind 4 reads block `+6`. Numerator is `(100 - resistance) * (10*strength + 5)`. Denominator is 25 for kind 1, 50 for kind 4. Original BL `0x080690DA` performs **unsigned** division despite the signed subtraction. The signed candidate truncates toward zero. Results remain 32-bit until the signed comparison; there is no halfword narrowing of chance.

For a current player target, or a player target in the alternate mode checked by `0x0800CF80`, the result is multiplied by the **signed byte** at `0x03003CE0 + targetID*0x14C + 0x73` and signed-divided by 100 at `0x08069110`. The actual Paige combat fixture has scaling byte 100. Enemy target ID 4 bypasses this scaling. Negative synthetic scaling can reverse the sign, and multiplying a huge original quotient can wrap at 32 bits; this is covered diagnostically, not treated as a normal-equipment claim.

At `0x08069116`, `cmp r4,r5` followed by signed `ble` accepts **chance > draw**. Passing writes effect kind into local payload byte `SP+1`. At resistance 100 chance is zero and cannot exceed any normal draw. Above 100, the original unsigned quotient is large and positive; for example resistance 101/strength 4/kind 1 has numerator -45, original quotient 171798690, signed quotient -1. Below 100 the division results agree. Resistance 99 may truncate to zero for low strength, which is legitimate; do not assert it must land.

If payload byte 1 is kind 1 or 4, it computes a duration from the original `r1` and a second RNG draw: kind 1 factor 450..549, kind 4 factor 700..799, then signed divide by 1000 and narrow to u16. Player payload byte 0 comes from the indexed global record; enemy byte 0 comes from entity `+2`. It queues the eight-byte payload through `0x08067D28`, producing event kind `0x8B` in the array `[0x03006300]`, record stride `0x88`, payload at record `+8`, and count at `0x03006338`. Count >=50 rejects dispatch. Queue acceptance is not proof that the eventual consumer applied a visible status.

The local player path separately calls `0x08069224(kind,duration,[0x030034E0]+0x24)` and stores kind at the indexed player record `+0xE0`. **The literal used here is EU `0x08069220` = `0x030034E0`; `0x030056F4` is the enemy-array pointer from a different literal.** Do not confuse them or assume both pointer values name Paige.

The inner routine reads a resistance halfword selected by effect kind 1..6, draws again, computes `max(0, trunc((6*duration - resistance + 50)/(resistance+1)) - 2)` and compares its draw. Accepted kinds 1..5 increment the selected base resistance, with a clamp/early return near 100; applicable paths notify `0x08022200`. Kind 6 has its own related path; kind 7 is also dispatched. This inner function is unchanged by the patch. Its second draw, base-resistance growth and later event consumption are outside the outer-gate test's acceptance scope; denominator zero at synthetic base resistance -1 is also not tested here.

Reviewed code evidence is split around inline literal pools. A linear Capstone listing can stop at a literal before the end of this function; use all three blocks: [gate](evidence/status-resistance-static/eu-outer.txt), [duration](evidence/status-resistance-static/eu-outer-duration.txt), [dispatch](evidence/status-resistance-static/eu-outer-dispatch.txt), and [literal values](evidence/status-resistance-static/eu-literals.json). Also see [inner application](evidence/status-resistance-static/eu-inner.txt) and [queue](evidence/status-resistance-static/eu-queue.txt). Literal bytes that decode as instructions are not code claims.

## Reachable gameplay path and EU fields

[Player damage caller](evidence/status-resistance-static/eu-player-caller.txt) `0x08029A7C` computes the indexed player record `0x03003CE0 + currentID*0x14C`, resistance block `+0x4C`, and calls the outer routine at `0x08029B82`. Its prerequisite gates and `0x08021D00` damage/resistance adjustment happen before the outer status chance. Those prerequisites are not bypassed by the candidate.

[Enemy combat caller](evidence/status-resistance-static/eu-enemy-caller.txt) calls at `0x0801F738` with resistance block entity `+0x218`, target ID entity's halfword `+0` plus 4, strength zero, and effect kind from the attack record. [Another enemy caller](evidence/status-resistance-static/eu-second-enemy-caller.txt) at `0x08064B88` derives the same resistance block but supplies a calculated strength.

The supplied normal save can reach the first enemy caller with **only buttons**: leave the inn, exit Klantol Castle, select Goblin Fort, clear the goblin conversation and attack. The complete [input transcript](fixtures/goblin-fort-buttons.json) includes measured timings and bounded stops. It is deliberately longer than an optimized route; changes to it need fresh validation.

The independently reproduced natural event is kind **5**, target **4**, caller return `0x0801F73C`, resistance block `0x02006E78` (entity `0x02006C60 +0x218`) and entry SP `0x03003994`. It is a real combat call but uses an unaffected kind. We do **not** infer names such as poison/ice from Chinese labels; localized type labels remain unmapped.

For the affected-kind tests at this reachable call, only two RAM values change: the existing caller's effect-kind word at entry `SP+4`, and the corresponding enemy resistance halfword. Registers, PC, RNG and existing stack payload remain untouched. Original/patched cores independently cold-boot, replay the same inputs, and have identical EWRAM/IWRAM at the natural call. At resistance 101 and 125 both affected kinds dispatch in original and do not dispatch in signed; 0/99/100 agree. This is a **synthetic boundary variant at a demonstrated normal combat call**, not a naturally equipped resistance-over-100 fight.

## Measured tests and important limitation

- [Controlled report](evidence/status-resistance-diagnostic.json): **3,645 assertions passed**, 258 cases per ROM plus seven unsupported kinds per ROM. Six-halfword fixture block and separate stack, strengths 0/4/7, resistances -32768/-1/0/50/99/100/101/125/200/32767, draw overrides 0/1/50/99, player scaling 0/50/100/-100, and stale-payload kinds 1/4. Every CPU/RAM mutation is recorded. Actual RNG draws and post-RNG state agree A/B. Ninety-six case pairs differ at the gate. This test calls the actual routine directly and is explicitly synthetic.
- [Combat report](evidence/status-resistance-gameplay.json): **186 assertions passed**. Independent normal-save button routes, real combat call, equivalent RAM, unaffected original kind-5 return, movement after dialogue with opposite directional coordinate responses, ten two-write boundary variants per ROM, and input preservation. Actual RNG is left intact in these variants.
- Bounded native observation is checked for zero-step hits/misses, frame-budget refusal, hitting a running Thumb task, and pausing **before** its first `movs r0,#1` instruction. Earlier exploratory attempts redirecting a halted BIOS CPU were discarded; direct calls now begin from a running task with IRQ/FIQ explicitly masked and disclosed.
- Native infrastructure: 16 checks passed after the observer extension. Shared boot-helper extraction preserved the refund suite: 174 assertions including five languages and separate-process save reload. The 26 unit tests also pass. Current reports are linked from [fixture metadata](fixtures/goblin-fort.json).

**Separate payload defect:** the outer routine reserves eight local bytes but never initializes the effect byte. A failed comparison does not clear it; `0x0806912A` reads it anyway. Explicitly preloading that byte with kind 1 or 4 at resistance 100 dispatches an event on **both** ROMs although the chance gate fails. This is not a theoretical concern: the executable test observes actual queue output. The natural combat fixture's pre-entry local bytes are `01000000c0510002`, whose effect byte is zero, so its tested immunity variants avoid this leak. No frequency in ordinary play, affected caller stack histories or safe repair has been established. Do not add an unrelated initialization patch without tracing those histories/ABI constraints.

Private native states and sidecars are retained under `runs/` and are regenerable; do not put ROMs/saves/states into Git. Tracked reports, scripts and metadata retain the evidence without chat history. Combat-ready state details: [Goblin Fort fixture](fixtures/goblin-fort.json). It has no goblin textbox, settles the original attack for 90 released frames before saving, and its preceding normal event proves attack execution. Restoring that state and pressing Right/Left for 16 frames gives opposite changes in indexed player record `+0x8C`, recorded in the report; the full position format remains unaudited. No RAM/register mutations were used to create it. These states are ROM-specific and must not be exchanged between original, resistance candidate or refund ROMs.

## Next bounded action

Use the combat-ready fixture to trace the outer local payload byte across repeated real attacks and status dispatch consumption. Identify a natural kind-1 or kind-4 attack and trace the player path as well. Establish whether stale byte reuse can occur in those callers, and only then decide on a safe EU fix and a naturally equipped over-100 resistance acceptance scenario. The signed candidate is ready for reproducible research, but asking the owner to judge universal immunity now would overstate the evidence. No gameplay check is requested yet.
