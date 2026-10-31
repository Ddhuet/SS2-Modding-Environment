# Core Functions and Code Points Index

| Address | State | System | Name | Function & Evidence |
| --- | --- | --- | --- | --- |
| `0x080008C8` | Thumb | RNG | `RNG32` | RNG entry point; confirmed/static |
| `0x0800CCBC` | Thumb | Player Life | `player_action_life_state_machine` | Action/life state machine, completes death sequence; confirmed/static |
| `0x08013594` | Thumb | Player Life | `apply_pending_player_damage_and_test_lethal` | Applies pending damage and tests for lethal damage; confirmed/static |
| `0x080135C4` | Thumb Code Point | Player Life | `soul_return_auto_revive_hook` | Soul Return auto-revive hook; candidate/user accepted, not re-tested in current session |
| `0x08019824` | Thumb | Combat | `object_take_damage` | Generic object damage handler; confirmed/static |
| `0x0801B690` | Thumb | Stats | `rebuild_player_equipment_status` | Entry point for rebuilding equipment/status attributes; inferred/static |
| `0x0801B18C` | Thumb | Combat Stats | `weapon_skill_attack_bonus_dispatch` | Weapon skill attack power bonus dispatch; confirmed/static |
| `0x0801C87C` | Thumb | Level | `level_up_func` | Level up, caps, and reading EXP tables; confirmed/static |
| `0x0801DD8C` | Thumb | Player Life | `is_local_player_incapacitated_or_pending_death` | Comprehensive check for incapacitation/pending death; confirmed/static |
| `0x0801E358` | Thumb | Combat | `physical_damage_calc_with_counter` | Physical damage calculation and COUNTER conditions; confirmed/static |
| `0x0801F150` | Thumb | Combat | `attack_process` | Attack processing and historical physical lifesteal segment; confirmed/static |
| `0x08022D78` | Thumb | Map | `map_entry` | Writes area and initializes floor to 0; confirmed/static |
| `0x08023EB0` | Thumb | Map | `map_load_by_area` | Loads map via area jump table; confirmed/static |
| `0x08024EAC` | Thumb | Player Life | `map_loop_party_wipe_check` | Party wipe check during map loop; confirmed/static |
| `0x08026F88` | Thumb | Map | `map_init_after_entry` | Full initialization after entering map; confirmed/static |
| `0x0805CCC8` | Thumb | Drops | `drop_roll` | 3-slot range drop check; then 6.25% generic roll into `0x0805CBA4`; runtime_verified, see `../LOOT_GENERATION.md` |
| `0x0805CBA4` | Thumb | Drops | `loot_generate` | `(out, row, class)`: loot row table `0x084F4954`; chests, crates, monsters; runtime_verified |
| `0x0805C884` | Thumb | Drops | `loot_enchant` | prefix/element/+N roll, sets unidentified; runtime_verified |
| `0x0805DAA4` | Thumb | Items | `bag_money_count` | Scans 25-slot bag to tally gold; confirmed/static |
| `0x0805DAD4` | Thumb | Storage | `warehouse_money_count` | Scans 75-slot storage to tally gold; confirmed/static |
| `0x08066D04` | Thumb | Multiplayer Events | `transmit_and_compact_event_queue` | Sends and compacts 0x88-byte event queue; confirmed/static |
| `0x08068364` | Thumb | Status Sync | `enqueue_status_sync_message_8b` | Creates message 0x8B and copies 2-byte payload; confirmed/static, payload semantics not fully named |
| `0x0806A094` | Thumb | Skill Visuals | `create_skill_visual_action_object` | 32-slot visual object creator; confirmed/static, not an attack hit counter |
| `0x080705E8` | Thumb | Summons | `run_summon_type18_lifecycle` | Type 18 lifecycle; confirmed/static |
| `0x080717B4` | Thumb | Summons | `run_summon_type20_lifecycle` | Type 20 lifecycle; confirmed/static |
| `0x08073FD4` | Thumb | Skill Effects | `create_timed_effect_entity` | Writes lifespan to descriptor `+0x14`; confirmed/static |
| `0x08077374` | Thumb | Hits & Targeting | `attack_hit_target_loop` | Research entry point for attack hit/target loop; inferred/static |
| `0x0807D268` | Thumb | Items | `item_type_dispatch` | Item type dispatch; confirmed/static |
| `0x080836FC` | Thumb | Storage UI | `warehouse_ui_dispatch` | Top-level state machine for storage page; confirmed/static |
| `0x080B9CD8` | Thumb | Flash | `flash_cmd` | Flash command sequence primitive; confirmed/static |

This is not an exhaustive function table. The absence of a mechanism in this list does not mean it does not exist. For the machine-readable version, see [FUNCTION_INDEX.json].