# EU persistent Archer and Dark Wizard summons

Implemented 2026-10-06. The exact-profile candidate freezes the two counters
used by the source persistent-summons patch. It preserves ordinary cleanup and
does not add a save format or make summons survive every scene/owner condition.
The counters are consumed at qualified summon activations, not once per frame.

## Provenance and mapping

Source definition:
`reference/upstream/patches/definitions/persistent_archer_and_dark_mage_summons.json`,
SHA-256 `1b4216eae7e62d21986de8f8810a9ca5f4a49572b06aeea74f02e916df9e3c0f`.
Exact CN baseline SHA-256:
`45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`.
Exact clean EU AU2P input SHA-256:
`e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2`.

| Source lifecycle / edit | EU lifecycle / edit | Producer type |
| --- | --- | --- |
| CN `0x080705E8` / file `0x713C4` | `0x0806FF1C` / file `0x70CF0` | 17 |
| CN `0x080717B4` / file `0x72788` | `0x080710DC` / file `0x7207C` | 7 |

Historical notes call these lifecycle functions “type18” and “type20”. Those
labels are **not** their producer IDs. Both verified producer switches subtract
one from `r1`, then index their 21-entry jump table. CN table `0x08074068` maps
17 to case `0x08074344`, whose callback literal at `0x0807435C` is
`0x080705E9`; 7 maps to case `0x0807437C`, whose literal at `0x08074394` is
`0x080717B5`. EU table `0x080738FC` maps 17 to case `0x08073BCC` and callback
literal `0x08073BE4 = 0x0806FF1D`; 7 maps to case `0x08073C04` and literal
`0x08073C1C = 0x080710DD`. Odd callback addresses encode Thumb state.

The 96-byte default discovery windows have no match. Register allocation,
structure accesses and branches differ between builds. The port therefore
uses the actual producer dispatch, argument flow, entry initialization, loop
conditions and cleanup, rather than short-anchor votes or a global offset.
[Static evidence and exact byte assertions](evidence/persistent-summons-static/report.json)
include the failed default search and complete function disassembly. Literal
pools inside those dumps are data; Capstone's decoding of a literal is not a
claim that it is an executable instruction.

## Descriptor and counter flow

EU producer `0x0807386C` takes owner `r0`, effect type `r1`, target `r2`, packed
parameter `r3`, and a fifth argument on the stack. It selects one of 16 free
slots from the owner's mask at `0x030063E0 + 4*owner`. Descriptors are 24 bytes
at `[0x03006380 + 4*owner] + 24*slot`:

| Offset | Width | Demonstrated value |
| --- | --- | --- |
| `+0x00` | 4 | owner |
| `+0x04` | 4 | slot |
| `+0x08` | 4 | target |
| `+0x0C` | 4 | producer effect type |
| `+0x10` | 4 | fifth argument |
| `+0x14` | 4 | packed producer parameter |

The scheduler passes the allocated descriptor in `r0` to the selected callback.
Each affected entry loads the **low halfword** of descriptor `+0x14`, copies it
to local stack `+0x68` and uses related locals to select animation/strength.
On the tested player-owner path, type 17 adds two (`0x0807019A`), while type 7
adds four (`0x0807128E`, copied to `+0x68` at `0x08071448`). Parameters 1 and 7
therefore initialize counters 3/9 and 5/11 respectively. Descriptor `+0x14` is
an input parameter, not a counter rewritten into the descriptor on every tick.

The existing equipment-driven producer calls at `0x080120A6` and `0x080120DC`
extract the effect ID as `(descriptor_halfword_at_6 >> 4) & 31` and a packed
parameter from descriptor bytes 4–7. The feature's Archer/Dark Wizard naming
comes from the source patch; the supplied Priestess fixture does not establish
class skill acquisition, equipment selection or manual casting for either class.

## Exact edit and neighboring behavior

At both EU sites the full preimage is `0138` (`subs r0,#1`); replacement is
`0038` (`subs r0,#0`). The following `lsls #16; lsrs #16; str [sp,#0x68]`
still narrows/stores the counter. Subsequent comparisons explicitly establish
their own condition flags. No branch, call, pointer, instruction width, stack
layout or register assignment changes. The 16 MiB ROM differs at exactly two
byte offsets, `0x70CF0` and `0x7207C`.

Before each edit, target state 11 bypasses decrement. Type 17 also requires
`r5 != 0`, and type 7 requires `r6 != 0`, which come from their animation/action
paths. Idle frames must not be counted as decrements. Original observations
confirm scheduled consumption; no universal wall-clock duration is asserted.

The independent zero gates (`0x08070D0A` and `0x08072090`) still branch to
cleanup when the local counter is zero. Both cleanup routines clear the live
latch (`0x03006430+owner` / `0x03006410+owner`) and the owner's allocated slot
bit, then restore the original saved registers/stack. Incoming same-type
summons still find the existing latch and reclaim their new slot rather than
duplicating the active summon. The owner-state and shared cleanup flag gates,
NPC-owner handling, target search, animation, hit application and all other
counter decrements retain their exact original bytes.

## Executable verification

[Final runtime report](evidence/persistent-summons-runtime.json) records the
exact ROM/save hashes, mGBA-bound states, all stops and every synthetic write.
Each ROM independently cold-boots the same normal save and replays the
[button-only Goblin Fort route](fixtures/goblin-fort-buttons.json). The producer
is then called synthetically from a running Thumb task with owner 0, target 0,
type 17 or 7, parameter 1 or 7, fifth argument zero, an isolated stack and
IRQ/FIQ-masked CPSR. The original CPU context is restored at its actual
instruction address; the real scheduler initializes and executes the summon.
These are engine diagnostics on Paige, not naturally earned class gameplay.

The decisive checks cover:

- Independent baseline/patched RAM and frame equality before the first edited
  instruction, exact descriptor arguments and the correct scheduled callback.
- One or two actual qualified activations: original counters decrease; patched
  counters stay at 3/9 or 5/11. Neighboring stack fields are preserved.
- A disclosed local-counter **and already-loaded r0** override to 1: original
  expiration executes real cleanup; patched counter 1 remains allocated/live
  for another 600 frames. Value 65535 verifies narrowing without wrap/change
  in the patched decrement.
- Explicit zero at the independent zero gate still reclaims the slot in both
  ROMs. This redirects to the existing gate and is a separate synthetic case.
- Setting shared flag bit 4 at `[0x03005CF4]+4`, or owner state 11 at indexed
  player record `+0x20`, still reaches real cleanup and clears the slot/latch.
  These exercise gates; they do not claim a button-driven death or transition.
- Same-type re-summoning removes the duplicate slot and retains the original.
- Source ROMs and the supplied normal save remain unchanged.

Early test-driver runs assumed every counter would expire while standing near
the fixture's goblin. Activations stop when that encounter no longer supplies
them, especially at parameter 7. Final tests observe qualified activations and
use the explicitly disclosed count-1 diagnostic for decisive expiration. An
earlier boundary override changed the stack without updating the already-loaded
`r0`; this driver error was corrected. ROM patch bytes did not change.

Static verification checks both source preimages, producer mappings, full EU
instructions, an exact two-byte diff and BPS/IPS round trips. All 42 existing
tooling tests pass. The final build manifest is
[persistent-summons-build.json](evidence/persistent-summons-build.json).

## Scope and follow-up

The definition remains `static_candidate` with runtime evidence scoped to the
named engine diagnostics. No owner acceptance is recorded. Actual Archer and
Dark Wizard casting, natural damage/destruction, room/town transitions, death,
multiplayer, other languages and combinations remain unverified. Normal-save
reload of active summons was not tested; no save-format changes were made and
cross-reload summon persistence is not an intended claim of this patch.

The ready [test build and manual steps](../releases/PERSISTENT_SUMMONS_TEST.md)
allow the owner to verify both classes on their own saves. The next action is
normal-character casting and combat acceptance, followed by actual transitions
and save/reload cleanup as needed.

Reproduce from `eu/` with new output paths:

```sh
python -m ss2tools build inputs/ss2-eu.gba patches/persistent-archer-and-dark-wizard-summons.json \
  artifacts/my-persistent-summons.gba --profile profiles/ss2-eu.json \
  --allow-static-candidate --bps artifacts/my-persistent-summons.bps --ips artifacts/my-persistent-summons.ips
.venv/bin/python scripts/audit_persistent_summons.py --output docs/evidence/new-summons-static
.venv/bin/python scripts/test_persistent_summons.py --output runs/new-summons-regression
```

The audit/test scripts intentionally bind their default ROM to the delivered
hash/name; alternate outputs must have identical bytes, and the runtime script
accepts `--patched` for that path.
