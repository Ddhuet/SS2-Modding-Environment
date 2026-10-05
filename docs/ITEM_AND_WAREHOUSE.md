## Item, Warehouse, and Save Logic

### Known Facts

* Current `PLAYER` is pointed to by `[0x03003580]`.
* Inventory is located at `PLAYER+0x158` (25 slots); character warehouse is at `PLAYER+0x2E8` (75 slots); each slot is 16 bytes.
* Basic record layout: `+0x00 type:u16`, `+0x02 code:u16`, `+0x04` category-dependent field.
* Original logic often only cleared `type`; remaining bytes in empty slots carry no valid semantics.
* Normal moves and shared warehouse research implementations copy complete 16-byte records; no confirmed `type1 ↔ type9` conversions exist.

### Category Boundaries

* `type 0x01`: Standard items. Stacking research only introduces quantity for whitelisted codes (`00..06,08..13,15..1D,24,54..58`); `07` Soul Return is explicitly excluded.
* `type 0x09`: Ores / Crystals; `+4` represents forging value/purity contribution and must not be decremented or merged as normal item counts.
* `type 0x0A`: Gold currency; processed via 32-bit amount path starting at `+4`, with independent cap logic.

### Shared Warehouse

Research Hooks include `0x08002E7A`, `0x080836F8`, `0x080838A8`, `0x080851BC`, with injection ranges `0x080BC000-0x080BC1B8` and `0x09001000-0x09001F18`. Current catalog status remains `research`.

Historical artifacts achieved multi-character switching, saving, full restarts, and stress testing paths; however, a 5-byte difference exists inside the save function on the current baseline, meaning historical dynamic results cannot be automatically inherited. Re-verification must use save file copies covering: saving, full emulator exit, re-loading, exception interrupts, valid/empty character slots, full warehouse, multi-character switching, and co-existence with stacked item quantities.

### Minimum Safe Research Tasks

Tasks suited for weak AI: List read/write offsets for a function accessing a 16-byte record; check if a patch JSON touches catalog ranges; categorize manual test outputs under evidence tags. Do not assign weak AI to design Flash write routines or construct combined shared warehouse / item stacking patches directly.