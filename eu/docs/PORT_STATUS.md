# EU port inventory

Updated 2026-10-05. The source has **18 individual definitions** (17 `released`, one `beta`), **two combinations**, and **five built-in baseline-fix investigations**. Only the skill-point refund has EU runtime evidence and owner confirmation. Source release labels are provenance, never EU approval.

The machine catalog is [PORT_STATUS.json](PORT_STATUS.json). It records source definition hashes, exact counts/extents, profile identities, evidence states, fixtures and next actions. This file is a human-readable view of the same catalog. Preserve the local ignored [reference archive](../reference/README.md), or reconstruct it from the tracked parent sources with `python scripts/setup_reference.py` on a fresh clone.

## Verified source bytes and interpretation limits

Every source definition was read and checked against the exact **32 MiB `ss2-cn-baseline` profile**: all four identity values, declared definition baseline, write address/offset relation, equal changed lengths, bounds, overlap and every pre-image passed. All in-range pre-images also match the separately verified **16 MiB `ss2-cn-source` profile**; it is still a different input identity. Both source profiles and the EU profile were verified read-only. No ROM/save or archive was modified. See the full identities/results in the JSON catalog.

- `ss2-cn-baseline` SHA-256: `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`.
- `ss2-cn-source` SHA-256: `8a7ebaa88682995fd7bf1bf8dc8e77a3f4fc4a9893a7639af953c553821d9ab9`.
- `ss2-eu` SHA-256: `e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2`.

Classification below follows source code audits/catalogs; the upstream writes uniformly use `mode: unknown`. Their byte pre-images are verified, but this inventory does not claim a fresh instruction/field audit for every source write. Blank source injection space does not establish available EU allocation. Writes are often sparse changed chunks rather than complete routines or tables.

No individual definition declares a machine-readable feature dependency. All are bound to the baseline containing the five fixes. A precise baseline-fix dependency has not been established merely because small pre-images match the 16 MiB comparison ROM; domain-specific reviews below remain required. There is no global CN-to-EU offset or field shift.

## Source edit inventory

| Source individual definition | Source stage | Edit nature | Writes / bytes | Beyond 16 MiB |
| --- | --- | --- | --- | --- |
| [counter_fix](../reference/upstream/patches/definitions/counter_fix.json) | released | in place code | 2 / 15 | 0 |
| [equipment_set_balance_rework](../reference/upstream/patches/definitions/equipment_set_balance_rework.json) | released | data table | 288 / 308 | 0 |
| [four_digit_ui_display](../reference/upstream/patches/definitions/four_digit_ui_display.json) | released | in place code, ui resource data | 645 / 3633 | 0 |
| [level_250](../reference/upstream/patches/definitions/level_250.json) | released | in place code, expanded rom data | 227 / 764 | 224 |
| [life_leech](../reference/upstream/patches/definitions/life_leech.json) | released | in place code, injected code | 16 / 109 | 0 |
| [money_drop_control](../reference/upstream/patches/definitions/money_drop_control.json) | released | in place code, injected code | 8 / 50 | 0 |
| [per_character_attribute_caps](../reference/upstream/patches/definitions/per_character_attribute_caps.json) | released | in place code, embedded parameter data | 11 / 204 | 0 |
| [persistent_archer_and_dark_mage_summons](../reference/upstream/patches/definitions/persistent_archer_and_dark_mage_summons.json) | released | in place code | 2 / 2 | 0 |
| [respec](../reference/upstream/patches/definitions/respec.json) | released | in place code | 3 / 14 | 0 |
| [ring_balance_rework](../reference/upstream/patches/definitions/ring_balance_rework.json) | released | data table | 16 / 21 | 0 |
| [shared_character_warehouses](../reference/upstream/patches/definitions/shared_character_warehouses.json) | beta | in place code, injected code, expanded rom code or data | 525 / 3080 | 483 |
| [soul_return_auto_revive](../reference/upstream/patches/definitions/soul_return_auto_revive.json) | released | in place code, injected code | 13 / 130 | 0 |
| [soul_ring](../reference/upstream/patches/definitions/soul_ring.json) | released | in place code, injected code | 18 / 322 | 0 |
| [stackable_consumables](../reference/upstream/patches/definitions/stackable_consumables.json) | released | in place code, injected code | 125 / 1224 | 0 |
| [status_resistance_overflow_fix](../reference/upstream/patches/definitions/status_resistance_overflow_fix.json) | released | in place code | 1 / 2 | 0 |
| [temple_soul_fusion_rework](../reference/upstream/patches/definitions/temple_soul_fusion_rework.json) | released | data table | 135 / 136 | 0 |
| [weapon_balance_rework](../reference/upstream/patches/definitions/weapon_balance_rework.json) | released | data table | 48 / 76 | 0 |
| [world_map_warehouse](../reference/upstream/patches/definitions/world_map_warehouse.json) | released | in place code | 1 / 1 | 0 |

Level 250 and shared warehouses require deliberate EU ROM expansion. Other injected features are within the source 16 MiB address space, but still require owned EU allocations, ABI/mode audits and relocations. Classic IPS cannot represent writes at or above file offset `0x1000000`.

## Separate EU evidence levels

`not_started` means no EU investigation recorded here; `not_run` means no EU executable scenario evidence. `candidate`, ambiguous candidate and searched-without-mapping states are discovery results. `static_verified`, `runtime_verified` and `user_accepted` apply only to named claims/scenarios. A discovery match never promotes the audit automatically.

| Feature | Discovery | Audit | Runtime | Owner acceptance |
| --- | --- | --- | --- | --- |
| `counter_fix` | static_verified | static_verified | not_run (owner will test) | not_recorded |
| `equipment_set_balance_rework` | candidate_ambiguous | not_started | not_run | not_recorded |
| `four_digit_ui_display` | not_started | not_started | not_run | not_recorded |
| `level_250` | not_started | not_started | not_run | not_recorded |
| `life_leech` | not_started | not_started | not_run | not_recorded |
| `money_drop_control` | not_started | not_started | not_run | not_recorded |
| `per_character_attribute_caps` | not_started | not_started | not_run | not_recorded |
| `persistent_archer_and_dark_mage_summons` | static_verified | static_verified | runtime_verified_scoped_diagnostics | not_recorded |
| `respec` | static_verified | static_verified | runtime_verified | user_accepted |
| `ring_balance_rework` | searched_no_unique_mapping | not_started | not_run | not_recorded |
| `shared_character_warehouses` | not_started | not_started | not_run | not_recorded |
| `soul_return_auto_revive` | not_started | not_started | not_run | not_recorded |
| `soul_ring` | not_started | not_started | not_run | not_recorded |
| `stackable_consumables` | static_verified | in_progress | runtime_verified (bag/persistence + diagnostics) | user_accepted (one reported niche bug) |
| `status_resistance_overflow_fix` | static_verified | static_verified | runtime_verified (diagnostic gate/queue) | not_recorded |
| `temple_soul_fusion_rework` | candidate | not_started | not_run | not_recorded |
| `weapon_balance_rework` | candidate_ambiguous | not_started | not_run | not_recorded |
| `world_map_warehouse` | not_started | not_started | not_run | not_recorded |

Resistance is deliberately **audit in progress** while the current investigation completes; candidate/calculation evidence is not a completed gameplay or owner claim. Its leads are the EU call at file `0x690DA`, unsigned routine-prefix match at `0xB956C`, and signed routine-prefix match at `0xB9394`. Full BL re-encoding is required if a patch is justified.

Refund owner confirmation remains [recorded separately](USER_ACCEPTANCE.md): “Woooo! It works, thanks!” The message establishes that the delivered feature works, without identifying the owner’s class/language/boundary/persistence coverage. Automated coverage remains Paige/Priestess, five-language basic paths, button-driven conservation/cancel/commit and separate-process normal-save reload, plus separately labeled synthetic max-level boundaries. No other-class, multiplayer or mod-combination acceptance is implied.

## Behavior, fixtures and next actions

### counter_fix

Allow Warrior COUNTER to see the target state before the state write that otherwise suppresses counter processing.

- **Baseline/dependency review:** EU caller/callee, state and skill fields statically audited; complete moved BL re-encoded. The standalone exact-EU experimental build remains a `static_candidate`.
- **Required fixture:** Owner Warrior normal save with learned COUNTER and their known ability setup. The supplied Priestess fixture is unsuitable.
- **Decisive observation:** Owner comparison with clean EU using their known COUNTER setup; record the trigger and ability result without inferring an incoming-hit mechanic from the name.
- **Evidence:** [EU audit](counter-audit.md), [static report](evidence/counter-static/report.json), [build manifest](evidence/counter-build.json), [test build handoff](../releases/WARRIOR_COUNTER_TEST.md). Historical references remain linked in the JSON catalog.
- **Next action:** Await owner gameplay observations for `ss2-eu-warrior-counter-test.gba`. No agent tests were run, as explicitly requested. Append acceptance only after owner confirmation.

### equipment_set_balance_rework

Change equipment-set/component stats across multiple tables; recover the intended component and set-bonus values.

- **Baseline/dependency review:** No individual dependency declared. Verify each EU table separately; shared stat consumers are a semantic interaction with ring/weapon edits.
- **Required fixture:** Identified changed component and complete/partial set; unedited equipment control and sufficient class requirements.
- **Decisive observation:** Separate component-stat and complete-set bonus deltas, removal behavior and exact preserved fields.
- **Evidence:** [EU_MODDING_ASSESSMENT.md](../reference/upstream/EU_MODDING_ASSESSMENT.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md); [CHINESE_CODE_TABLE_AND_EXCEL.md](../reference/upstream/docs/CHINESE_CODE_TABLE_AND_EXCEL.md).
- **Next action:** Map one table/component by ID and consumer before attempting the multi-table batch.

### four_digit_ui_display

Display four-digit values across changed stats/item/shop/warehouse text and UI resources.

- **Baseline/dependency review:** No individual dependency declared. Locale-specific EU fonts/text differ; level-250 is a potential semantic companion. Chinese dialogue padding fix is localization-specific and not transferable evidence.
- **Required fixture:** Pages showing 999/1000/9999 boundaries across all five EU languages, shop/warehouse and character stats.
- **Decisive observation:** Rendered digits complete and aligned, no clipping/overlap; unchanged labels/dialogues and valid boundary values.
- **Evidence:** [RESEARCH_TOPICS.md](../reference/upstream/docs/RESEARCH_TOPICS.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md).
- **Next action:** Identify one EU renderer/page and its localized resource layout; do not transpose CN resource writes.

### level_250

Raise level cap to 250 using changed level logic and an extended experience table.

- **Baseline/dependency review:** No individual dependency declared. Source table is beyond EU size; expansion, pointer relocation, level/stat/save audit required. Four-digit UI is a potential companion, not a declared hard dependency.
- **Required fixture:** Legitimate progression fixtures around original cap and 249/250; clearly labeled synthetic diagnostic values if necessary.
- **Decisive observation:** Exact experience thresholds and level transitions; cap at 250; stat/skill awards, UI and save/reload remain coherent.
- **Evidence:** [level_250.md](../reference/upstream/docs/code_audits/level_250.md); [INJECTION_OWNERSHIP.md](../reference/upstream/docs/code_audits/INJECTION_OWNERSHIP.md); [01_EXP_CHEAT_TO_LEVEL_PATCH.md](../reference/upstream/analysis/tracing_cases/01_EXP_CHEAT_TO_LEVEL_PATCH.md).
- **Next action:** Audit EU XP/level representation and pointer consumer; add explicit expansion/allocation and distribution support first.

### life_leech

Add HP/MP recovery through a damage-path wrapper; establish eligible damage, recovery formula and limits from the source code.

- **Baseline/dependency review:** No individual dependency declared. Injection allocation, EU damage ABI and HP/SP fields required; allocation overlaps legacy random-map scheme in CN.
- **Required fixture:** Eligible attacker/equipment with missing HP/SP, controlled damage, capped resources and ineligible damage controls.
- **Decisive observation:** Exact recovery tied to eligible damage, no over-cap healing, no recovery for rejected path, unchanged damage/death behavior.
- **Evidence:** [life_leech.md](../reference/upstream/docs/code_audits/life_leech.md); [INJECTION_OWNERSHIP.md](../reference/upstream/docs/code_audits/INJECTION_OWNERSHIP.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md).
- **Next action:** Map EU damage hook/callees and resource fields, then design a relocated wrapper with owned allocation.

### money_drop_control

Control the gold outcome in the first monster-drop slot using existing bag/warehouse money checks.

- **Baseline/dependency review:** No individual dependency declared. Ore/money bag limit baseline fix is a relevant investigation; do not assume its cap behavior exists in EU.
- **Required fixture:** Controlled monster drop roll with known bag and warehouse gold amounts, RNG and boundary totals.
- **Decisive observation:** Exact first-slot gold decision across totals/thresholds; unaffected later slots and non-gold drops; correct inventory money accounting.
- **Evidence:** [04_BL_PATCH_TO_CALL_GRAPH.md](../reference/upstream/analysis/tracing_cases/04_BL_PATCH_TO_CALL_GRAPH.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md).
- **Next action:** Map EU drop/RNG/money-count calls and determine source gold decision before selecting an injection allocation.

### per_character_attribute_caps

Use class-specific base attribute caps; default source parameters only, not arbitrary custom values.

- **Baseline/dependency review:** No individual dependency declared. Related allocation/respec paths require EU class-index/field audit; existing skill refund does not verify attribute edits.
- **Required fixture:** Every relevant class at below/at cap, enough allocation points; save/level-up paths and cancel control.
- **Decisive observation:** No allocation beyond each default cap; exact point conservation, correct class mapping, leveling and normal-save reload.
- **Evidence:** [RESEARCH_TOPICS.md](../reference/upstream/docs/RESEARCH_TOPICS.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md).
- **Next action:** Map EU attribute allocation/class index and distinguish embedded parameter table from instructions.

### persistent_archer_and_dark_mage_summons

EU candidate: [definition](../patches/persistent-archer-and-dark-wizard-summons.json), [audit](persistent-summons-audit.md), [test build](../releases/PERSISTENT_SUMMONS_TEST.md). 329 assertions pass across 56 synthetic engine scenarios; actual class casting and scene/death/save-reload acceptance remain pending.

Freeze summon counter consumption at qualified activations for the two source lifecycles; other cleanup remains. EU producer IDs are 17 and 7; historical type18/type20 labels are not their producer IDs.

- **Baseline/dependency review:** No source dependency declared; EU dispatch, counter and cleanup verified independently on pristine EU. No injected code or baseline-fix dependency demonstrated.
- **Required fixture:** Archer and Dark Mage with summons; waiting, damage/destruction, room/town transition, death, re-summon and reload scenarios.
- **Decisive observation:** Counter is frozen at qualified activations; one-count original expiration and patched survival, plus zero/shared-flag/owner-state/duplicate cleanup observed in disclosed synthetic cases.
- **Evidence:** [EU_MODDING_ASSESSMENT.md](../reference/upstream/EU_MODDING_ASSESSMENT.md); [03_SUMMON_PATCH_TO_LIFECYCLE.md](../reference/upstream/analysis/tracing_cases/03_SUMMON_PATCH_TO_LIFECYCLE.md).
- **Next action:** Test normal Archer and Dark Wizard casting/combat on class saves, then actual transitions/death/save-reload cleanup; owner acceptance remains pending.

### respec

Left refunds one previously invested skill point; Right spends; A commits; B cancels. Attributes are unchanged.

- **Baseline/dependency review:** EU refund was implemented and tested independently on pristine EU; no five-fix port dependency was demonstrated.
- **Required fixture:** Supplied Paige level-19 Priestess normal save; five language cold boots; separate synthetic level-7 fixture.
- **Decisive observation:** Conserve total invested+unused points; exact refund/cancel/re-spend/zero/commit results and separate-process normal-save reload.
- **Evidence:** [skill-point-refund.json](../patches/skill-point-refund.json); [respec-audit.md](respec-audit.md); [TEST_RESULTS.md](TEST_RESULTS.md); [USER_ACCEPTANCE.md](USER_ACCEPTANCE.md); [respec-port-candidates.json](evidence/respec-port-candidates.json); [refund-regression.json](evidence/refund-regression.json); [max-level-boundary.json](evidence/max-level-boundary.json).
- **Next action:** Reuse the reviewed EU definition. Add class-specific or combination coverage only when needed.

### ring_balance_rework

Change ring equipment record stats; individual intended values must be recovered from the source table edits.

- **Baseline/dependency review:** No individual dependency declared. Equip/unequip and stat-field semantics need EU audit; any equipment-limit baseline relation is unestablished.
- **Required fixture:** A known edited ring, comparable unedited ring, class requirements and observed equipped stats.
- **Decisive observation:** Exact changed record fields and equipped-stat deltas, with unrelated fields and unedited item preserved.
- **Evidence:** [EU_MODDING_ASSESSMENT.md](../reference/upstream/EU_MODDING_ASSESSMENT.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md); [CHINESE_CODE_TABLE_AND_EXCEL.md](../reference/upstream/docs/CHINESE_CODE_TABLE_AND_EXCEL.md).
- **Next action:** Use record IDs and consumers to identify the EU ring table; prior 48-byte anchors did not yield unique mapping.

### shared_character_warehouses

Provide cross-character shared warehouse persistence (source beta).

- **Baseline/dependency review:** No individual dependency declared. EU Flash/save schema/checksums and isolated allocation/expansion required; withdrawal fix and stack quantities need independent investigation. Historical save-path results do not apply to current source baseline.
- **Required fixture:** At least two valid characters and an empty slot; full/empty warehouse, item-category boundaries, interrupted-save/recovery fixtures.
- **Decisive observation:** Cross-character exact item conservation and cold-process reload, correct character selection, full-store handling and interruption recovery.
- **Evidence:** [RESEARCH_TOPICS.md](../reference/upstream/docs/RESEARCH_TOPICS.md); [ITEM_AND_WAREHOUSE.md](../reference/upstream/docs/ITEM_AND_WAREHOUSE.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md).
- **Next action:** Understand EU normal-save schema/checksum/write/selection first, then build fixtures and expansion/relocation infrastructure.

### soul_return_auto_revive

Consume existing Soul Return item on lethal damage and revive at the source intended HP/SP values without adding save fields.

- **Baseline/dependency review:** No individual dependency declared. Soul Return is excluded from consumable stacking; item consumption/death path needs own EU audit. Inventory/baseline fixes are relevant adjacency checks.
- **Required fixture:** Character with 0/1/multiple Soul Return items, inventory edge slots, controlled lethal damage and subsequent deaths.
- **Decisive observation:** Exact one-item consumption and intended 80% HP/SP restoration; normal death at zero items; consecutive deaths and separate-process persistence.
- **Evidence:** [RESEARCH_TOPICS.md](../reference/upstream/docs/RESEARCH_TOPICS.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md).
- **Next action:** Map EU lethal-damage branch/item lookup/resource setters and audit a relocated handler.

### soul_ring

Allow a ring in the soul slot through multiple hooks and injected code.

- **Baseline/dependency review:** No individual dependency declared. Slot/category/stat consumers and save behavior required; CN injection region cannot be assumed free in EU.
- **Required fixture:** Ring, ordinary soul item and character able to equip both; duplicate-ring and invalid-category controls.
- **Decisive observation:** Correct allowed slot behavior and exact stats, unequip behavior, invalid-item rejection and normal-save persistence.
- **Evidence:** [soul_ring.md](../reference/upstream/docs/code_audits/soul_ring.md); [INJECTION_OWNERSHIP.md](../reference/upstream/docs/code_audits/INJECTION_OWNERSHIP.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md).
- **Next action:** Audit EU soul-slot checks, consumers and item categories before relocating injected code.

### stackable_consumables

Stack whitelisted consumables to 100; treat legacy zero count as one while preserving ore/gold and excluded Soul Return semantics.

- **Baseline/dependency review:** No individual dependency declared. Ore/money limits and withdrawal fix are relevant baseline investigations. Auto-revive/shared storage need separate record-semantic combination tests.
- **Required fixture:** Whitelisted items at counts 0/1/99/100, excluded Soul Return, ore and gold; shop, bag and warehouse operations.
- **Decisive observation:** Acquire/merge/split/use/sell/cancel conserve quantity; cap and legacy handling; adjacent categories unaffected; separate-process persistence.
- **Evidence:** [RESEARCH_TOPICS.md](../reference/upstream/docs/RESEARCH_TOPICS.md); [ITEM_AND_WAREHOUSE.md](../reference/upstream/docs/ITEM_AND_WAREHOUSE.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md).
- **EU result:** [Experimental expanded port](stacking-audit.md), [definition](../patches/stackable-consumables.json), and [BPS test patch](../releases/inventory-stacking-test.bps). 320 core checks and 125 display checks passed; real bag merge/split/cancel and separate-process normal-save reload are covered. Shop/warehouse/quick-slot gameplay and full resource consumer audit remain pending.
- **Owner feedback:** [Scoped acceptance, 2026-10-05](USER_ACCEPTANCE.md#inventory--consumable-stacking--2026-10-05): generally works, with one niche bug awaiting reproduction. Specific paths/languages tested were not stated; the build remains experimental.
- **Next action:** Await the owner's reproduction of the reported bug. Test shop buy/sell/cancel, warehouse round-trip and quick-slot use, then complete the resource consumer audit before promotion.

### status_resistance_overflow_fix

Prevent the negative status-probability numerator above 100 resistance from becoming a large unsigned quotient. EU gate/queue diagnostics confirm this behavior. A failed-gate stale payload can still dispatch; the division fix is approved for use.

- **Baseline/dependency review:** No individual dependency declared. EU signed division is justified and tested for the outer gate/queue. The baseline fixes are not automatically required. No combination built.
- **Required fixture:** Equivalent below/at/above-100 resistance inputs and a reachable status-application event; disclose synthetic setup separately.
- **Decisive observation:** Original versus proposed signed calculation and actual application outcome at resistance 99, 100, and above 100, including signed negative outputs and unaffected low resistance.
- **Evidence:** [EU audit and limits](status-resistance-audit.md); [controlled report](evidence/status-resistance-diagnostic.json); [button-reached combat report](evidence/status-resistance-gameplay.json); [combat fixture](fixtures/goblin-fort.json).
- **Next action:** Trace failed-gate payload byte across real kind-1/kind-4 caller stack histories and event consumers. Decide a safe initialization repair and a naturally equipped over-100 combat scenario as follow-up to the released division fix.

### temple_soul_fusion_rework

Change temple soul-fusion recipes and their resulting balance according to the source recipe edits; exact EU recipe meanings remain unverified.

- **Baseline/dependency review:** No individual dependency declared. Source recipe/ID interpretation and EU consumer are required; matching pre-images is insufficient.
- **Required fixture:** Character at temple with ingredients for one identified changed recipe plus an unchanged recipe and insufficient-ingredient control.
- **Decisive observation:** Exact ingredients consumed and exact output ID/quantity for baseline and patched recipe; cancellation preserves inventory.
- **Evidence:** [EU_MODDING_ASSESSMENT.md](../reference/upstream/EU_MODDING_ASSESSMENT.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md); [CHINESE_CODE_TABLE_AND_EXCEL.md](../reference/upstream/docs/CHINESE_CODE_TABLE_AND_EXCEL.md).
- **Next action:** Confirm EU recipe table identity/record fields and consumer at candidate shift -0xDB7C; choose one observable recipe.

### weapon_balance_rework

Change weapon record stats; determine exact edited fields/values before choosing one EU balance change.

- **Baseline/dependency review:** No individual dependency declared. EU record layouts and equipment/stat consumers required; sparse matching shifts do not map the table.
- **Required fixture:** One changed weapon and an unchanged control with suitable class/weapon skill and controlled target.
- **Decisive observation:** Exact record/stat change and controlled attack result, preserving requirements, identifiers and adjacent fields.
- **Evidence:** [EU_MODDING_ASSESSMENT.md](../reference/upstream/EU_MODDING_ASSESSMENT.md); [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md); [CHINESE_CODE_TABLE_AND_EXCEL.md](../reference/upstream/docs/CHINESE_CODE_TABLE_AND_EXCEL.md).
- **Next action:** Resolve sparse/competing shifts using weapon IDs, row boundaries and consumers.

### world_map_warehouse

Make warehouse access available from the world-map path (source single-byte change).

- **Baseline/dependency review:** No individual dependency declared. Warehouse withdrawal fix is relevant adjacent behavior to investigate; source single byte needs full instruction/context audit.
- **Required fixture:** Normal EU save able to access world map, with warehouse item and room for inventory transfer.
- **Decisive observation:** Reach warehouse through map input, transfer exact record once, cancel normally and persist a normal save; no repeated-withdrawal duplication.
- **Evidence:** [PATCH_CATALOG.md](../reference/upstream/docs/PATCH_CATALOG.md); [ITEM_AND_WAREHOUSE.md](../reference/upstream/docs/ITEM_AND_WAREHOUSE.md).
- **Next action:** Recover full CN instruction/control path, then locate and audit the corresponding EU access condition.

## Combinations: separate, unported

Do not count these as additional successful features. Source combinations are applied directly to the pristine CN baseline, not sequentially on already patched outputs. The upstream registry reports dynamic combination tests `not_run`; no EU combination has been audited, run or accepted.

| Definition | Source stage | Writes / bytes | Beyond 16 MiB | EU discovery / audit / runtime / acceptance |
| --- | --- | --- | --- | --- |
| [all_17_released](../reference/upstream/patches/definitions/all_17_released.json) | released | 1559 / 7011 | 224 | not started / not started / not run / not recorded |
| [all_18_beta](../reference/upstream/patches/definitions/all_18_beta.json) | beta | 2084 / 10091 | 707 | not started / not started / not run / not recorded |

Required fixture: every component scenario, plus interacting item, allocation, UI and persistence paths. Decisive observation: exact combined-ROM component behavior and interactions, including save/reload and quantity/point conservation. Next action: finish selected independent EU ports, then add dependency/conflict/overlap/allocation ownership and every definition hash to a deterministic stack manifest. See [PLAN.md §7](../PLAN.md) and [source definition registry](../reference/upstream/patches/definitions/README.md).

## Five built-in CN fixes: independent applicability backlog

The [original package README](../../README_CN_VERSION.md) names these five fixes, while the [source catalog](../reference/upstream/docs/PATCH_CATALOG.md) excludes them from selectable features. No individual definition/pre-image for them is present in the inventoried directory. All EU discovery/audit/runtime/acceptance states are **not started / not started / not run / not recorded**. Establish the same EU fault and intended correction before creating an EU patch; the localization fix may be inapplicable.

### ore_money_bag_limits

Prevent ore/money bag-limit failures.

- **Fixture:** Bag at below/at/above relevant limits, ore and 32-bit money records.
- **Decisive observation:** Pick up/transfer at boundaries; no overflow, lost item or incorrect count.
- **Next action:** Find the exact CN baseline change and its EU acquisition/cap consumers.

### infinite_warehouse_withdrawals

Prevent unlimited or duplicated warehouse withdrawal.

- **Fixture:** Normal warehouse with one known item, sufficient/full bag, repeated withdrawal and save reload.
- **Decisive observation:** One withdrawal transfers exactly one record; repetition cannot duplicate it; cancellation/full bag conserves item.
- **Next action:** Audit EU move/clear behavior and reproduce the alleged duplication trigger.

### throw_race_conditions

Correct item-throw race conditions.

- **Fixture:** Controlled repeated/overlapping throw inputs with observed inventory/world items and full/empty contexts.
- **Decisive observation:** No duplicated/lost item, stale slot or racing write; record exact input timing.
- **Next action:** Recover CN race trigger and changed synchronization/ordering, then inspect EU path.

### post_chaos_ground_item_updates

Correct ground-item updates after defeating Chaos.

- **Fixture:** Reachable Chaos defeat with controlled dropped/ground items and scene transition.
- **Decisive observation:** Ground items update/clear/reclaim as intended after victory; no stale entity or lost collectible.
- **Next action:** Recover original CN failure/expected lifecycle and compare EU victory/update path.

### chinese_dialogue_padding_cleanup

Clean Chinese-localization dialogue padding.

- **Fixture:** CN example that demonstrates padding fault; corresponding EU dialogues in five languages if applicable.
- **Decisive observation:** Establish whether EU has an equivalent visible fault; preserve encoding, pointers and layout.
- **Next action:** First determine whether this is specific to Chinese localization; do not port CN text bytes into EU.

## Reproduce the source verification (read-only)

Run from the EU project directory. This prints results and creates no ROM, save or patch output. It intentionally refuses a changed identity/pre-image; it does not treat the comparison ROM as a valid patch baseline.

```sh
python - <<'PY'
from pathlib import Path
from ss2tools.core import load_profile, verify, load_json, parse_writes
from ss2tools.core import assert_preimages, validate_identity
ids = ('ss2-cn-baseline', 'ss2-cn-source', 'ss2-eu')
roms = {i: Path(f'inputs/{i}.gba').read_bytes() for i in ids}
profiles = {i: load_profile(Path(f'profiles/{i}.json')) for i in ids}
for i in ids:
    print(i, verify(roms[i], profiles[i]))
for path in sorted(Path('reference/upstream/patches/definitions').glob('*.json')):
    definition = load_json(path)
    assert validate_identity(definition['baseline']) == profiles['ss2-cn-baseline']['identity']
    writes = parse_writes(definition, len(roms['ss2-cn-baseline']))
    assert_preimages(roms['ss2-cn-baseline'], writes)
    in_range = [w for w in writes if w['offset'] + len(w['before']) <= len(roms['ss2-cn-source'])]
    assert_preimages(roms['ss2-cn-source'], in_range)
    print(definition['id'], len(writes), 'source writes verified;',
          len(in_range), 'comparison pre-images verified;',
          len(writes) - len(in_range), 'outside comparison ROM')
PY
```

Source pre-image counts and hashes are reproducible with `python scripts/verify_port_inventory.py`; the [recorded verification](evidence/port-inventory-verification.json) does not approve EU ports.
