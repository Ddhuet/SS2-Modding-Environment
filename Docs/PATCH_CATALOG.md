## Feature Catalog (2026-08-30)

The standardized rollback method is to re-generate from the single SS2_SC baseline without selecting the target feature; do not apply reverse patches to the compiled ROM. Machine definitions are located in `patches/definitions`. Address ranges are subject to item-by-item writes specified in the definitions.

### released (17)

| ID | Chinese Name | Primary ROM Range / Nature | Evidence Boundary | Beginner Friendly |
| --- | --- | --- | --- | --- |
| `status_resistance_overflow_fix` | Status Resistance Overflow Fix | 2-byte code modification | released; static reconstruction passed, combined dynamic not executed | No, branch semantics |
| `life_leech` | HP / MP Leech | Two hooks, damage entry point & code near `0x080BB120` | released; control flow audit | No |
| `respec` | Point Respec | Short write near `0x0807B662` | released | Approved definitions only |
| `money_drop_control` | First Slot Gold Controlled Drop | Near `0x0805CCEA` and `0x080BB1C1` | released; contains caller & injection code | No |
| `world_map_warehouse` | World Map Warehouse | `0x08059640` single byte | released | Yes, approved definition only |
| `level_250` | Level Cap 250 | Level logic & `0x09000100` data region | released; large data range | No |
| `counter_fix` | Warrior COUNTER Fix | Near `0x0801F1C0` | released; control flow | No |
| `soul_ring` | Equip Ring in Soul Slot | Multiple hooks & `0x08F00060` injection area | released; partial audit | No |
| `stackable_consumables` | Stackable Consumables | Items, UI, warehouse & multiple injection points | released; high risk for save/combinations | No |
| `four_digit_ui_display` | Four-Digit UI | Multiple UI/font/text ranges | released; visual regression requires maintainer sign-off | No |
| `per_character_attribute_caps` | Per-Character Attribute Caps | Near `0x0807B32A` | released; related to respec | No |
| `soul_return_auto_revive` | Soul Return Auto-Revive | `0x080135C4` Hook, `0x0833C8C0` injection | released; historical maintainer sign-off != current combo re-test | No |
| `persistent_archer_and_dark_mage_summons` | Permanent Summons for 2 Classes | `0x080713C4`, `0x08072788` | released | Yes, approved bytes only |
| `ring_balance_rework` | Ring Stats Adjustments | Sparse write to equipment records | released; data table | No |
| `weapon_balance_rework` | Weapon Stats Adjustments | Sparse write to weapon records | released; data table | No |
| `equipment_set_balance_rework` | Equipment Set & Component Rework | Sparse write to multiple equipment tables | released; large scale | No |
| `temple_soul_fusion_rework` | Temple Soul Fusion Rework | Sparse write to recipe records | released; data table | No |

### beta (1)

| ID | Chinese Name | Primary Range / Risks | Evidence Boundary | Beginner Friendly |
| --- | --- | --- | --- | --- |
| `shared_character_warehouses` | Multi-Character Shared Warehouse | Hook, `0x080BC000` & `0x09001000` data; involves Flash, recovery failure, and multi-char persistence | Beta; static reconstruction passed, dynamic combination not executed | No |

### candidate (1)

| ID | Chinese Name | Primary Range / Risks | Evidence Boundary |
| --- | --- | --- | --- |
| `archer_piercing_attack` | Archer Piercing Attack | `0x08077AE8` Hook, `0x0833A7C0` Injection; target loop and RNG | candidate, internal verification only, excluded from definition directory |

### research (2)

| ID | Chinese Name | Current Status |
| --- | --- | --- |
| `dynamic_monster_scaling` | Dynamic Monster Scaling | Two static candidate paths; no formal patch |
| `weapon_skill_hit_rate` | Weapon Skill Hit Rate | Has static implementation/reconstruction info; remains research, do not release |

Non-overlapping machine addresses do not guarantee semantic compatibility. Shared call chains, RAM, Flash, save formats, and UI resources still require combination testing. The five core underlying fixes built into the baseline are not listed in this table as reusable features.

---