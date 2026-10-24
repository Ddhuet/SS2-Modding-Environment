# Beta and Release Patch Definitions (SS2_SC Baseline)

This directory only contains definitions whose current stage is `released` or `beta`, and whose pre-image can be explicitly read from the current SS2_SC baseline.

## Combination Entries

* `all_17_released.json`: 17 release items combination.
* `all_18_beta.json`: 17 release features plus `shared_character_warehouses`; explicitly marked as an unstable Beta.

Authoritative Build Registry:

| Combination | MD5 | SHA-256 | CRC32 | Dynamic Combination Test |
| --- | --- | --- | --- | --- |
| Release 17 | `28f73b8efa72b86e50cd2ca6fa005312` | `dcdb1e041eee3676c6398de6080d7cb1be73176f7b5e3a615a973fd3f5f0f868` | `A1E0B4B0` | `not_run` |
| Beta 18 | `f0ed144e3f5ff480bd63f16fc00684c2` | `ba7223dd7ac7de5d631bc9e6918bd668d67809813d899cdd41a74c61e0ccf377` | `D1877FB6` | `not_run` |

## Individual Definitions

17 `released`: `status_resistance_overflow_fix`, `life_leech`, `respec`, `money_drop_control`, `world_map_warehouse`, `level_250`, `counter_fix`, `soul_ring`, `stackable_consumables`, `four_digit_ui_display`, `per_character_attribute_caps`, `soul_return_auto_revive`, `persistent_archer_and_dark_mage_summons`, `ring_balance_rework`, `weapon_balance_rework`, `equipment_set_balance_rework`, `temple_soul_fusion_rework`.

1 `beta`: `shared_character_warehouses`.

All definitions bound to: size `33554432`, MD5 `35eb6567d94f855480c5d7ba2dff4389`, SHA-256 `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`, CRC32 `AFCFC96D`. Written data originates from the 2026-08-30 official offline builder BUNDLE; `before_hex` is read segment-by-segment from this baseline.

Do not sequentially apply multiple individual definitions, nor apply combination definitions to an already modified ROM. When a combination is required, apply the corresponding combination directly from the current baseline. Successful generation, successful boot, and absence of crashes do not indicate that feature acceptance testing is complete.