# Core Pseudocode Summary



These are manually curated control-flow summaries, not source code. Variable names are chosen for readability; each specific modification still requires reading the current baseline raw bytes.

## Generic Object Take Damage `0x08019824`

```c
object_take_damage(target, damage, context, flags) {
    // Performs multiple checks on target state and damage parameters;
    // Updates target's pending/health-related fields;
    // Called by multiple attack paths.
}

```

Confirmed: This is the convergence point for generic object damage. Unconfirmed: Whether all player lethal paths pass through here; players have a separate `0x08013594` submission path.

## Player Lethal Damage Submission `0x08013594`

```c
apply_pending_player_damage_and_test_lethal(player) {
    hp = hp - pending_damage;
    apply_special_keep_one_hp_rule_if_needed();
    return signed_hp_is_zero_or_negative;
}

```

After returning lethal, the execution flow enters the health state machine, death sequence presentation, and party wipe checks; "returning lethal" does not mean the death sequence is complete.

## Physical Damage and COUNTER `0x0801E358`

```c
physical_damage_calc_with_counter(attacker, target, attack_ctx, arg3) {
    damage = calculate_physical_damage(...);
    if (attacker_is_warrior && counter_skill_nonzero && target_state == 2) {
        damage = apply_counter_multiplier(damage, counter_level);
    }
    return damage;
}

```

`counter_fix` adjusts the order of execution calls and target state writes, rather than removing the conditions above.

## Level Up `0x0801C87C`

```c
level_up(player, gained_exp) {
    add_experience(gained_exp);
    if (stored_level <= cap_compare_value)
        compare_total_exp_with_table[stored_level + 1];
}

```

Two literal locations jointly reference the experience table; changing the cap without updating all consumers will cause edge-case bugs.

## Storage / Inventory Gold Summation



```c
sum_money(records, count) {
    total = 0;
    for each 16_byte_record:
        if (record.type == MONEY_TYPE)
            total += record.amount;
    return total;
}

```

The inventory consumer uses 25 entries, while the storage consumer uses 75 entries. Item records must be copied completely as 16-byte blocks.

## Map Entry and Loading



```c
map_entry(ctx, area) {
    ctx->area = area;
    ctx->floor = 0;
    map_load_by_area(ctx->area);
}

```

Floor-switching logic resides in separate update paths; do not mistake entry initialization as writing to all `floor` values.

## Soul Return Auto-Revive Research Chain



```c
lethal = apply_pending_player_damage_and_test_lethal(player);
if (lethal) {
    // Candidate Hook is located at 0x080135C4; extended logic checks character-corresponding item,
    // If conditions are met, consumes item and restores health state; otherwise falls back to original death path.
}

```

Confirmed lethal submission entry point is `0x08013594`, Hook location is `0x080135C4`, and candidate injection area is `0x0833C8C0-0x0833C9C0`. The owner has a recorded `user accepted` state, but it has not been re-tested in the current session; static entry points, owner acceptance, and dynamic verification in this session must be stated separately.