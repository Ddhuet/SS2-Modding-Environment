## Random Map Topic

### Known Facts

* `0x08022D84`: Key write point for `area`/`floor` upon entering map.
* `0x08023EB0`: Selects level monster group table by `area`/`floor`.
* `0x08024D4E`: Writes new `floor` during layer transitions.
* `0x08026F88`: Complete initialization upon map entry; historical tests show it must not be overwritten arbitrarily.
* `0x080008C8`: RNG32.
* Historical random exploration utilized trampolines around `0x080BB140`, but this area overlaps with the released `life_leech` injection region (`0x080BB120-0x080BB190`) and cannot be directly merged into official build combinations.

### Current Boundaries

The source project currently lacks `research/random/state.md`, retaining only legacy implementation notes, debugging conclusions, and scene audit summaries. Therefore, random map is classified as a historical research topic rather than a catalog feature. Legacy ROMs, legacy save states, and 209-scene scans cannot substitute for fresh builds and dynamic acceptance on the current baseline.

### Risks and Next Steps

Risks include map initialization state, Boss/special scenes, layer transition counts, random pool validity, injection region conflicts, and save state identity match. Next steps involve registering the feature as research, reallocating non-conflicting injection regions, auditing original hook bytes, and building isolated POCs from the current baseline.

Small tasks suited for weak AI: List map addresses and evidence tiers from this package, or verify if a new design inadvertently uses `0x080BB120-0x080BB190`; do not task weak AI with independently generating random map hooks.

---