# Translation workspace (JP/CN base → English)

Planning and research for an English translation built on the **CN mod baseline**: the
32 MiB Chinese-localized JP-cartridge ROM (`eu/inputs/ss2-cn-baseline.gba`) that the Chinese
mod chain builds on. Note that `ROMs/Shining_Soul_II_JP.GBA` is also Chinese, not pristine
Japanese. The goal is that CN mods apply with (near) binary compatibility,
instead of being re-ported to the US or EU ROM one hook at a time.

Work here is kept separate from [eu/](../eu/). EU facts stay in `eu/docs/`; this folder
records JP, US and CN facts, each tagged by version. Reconcile the two only when a task needs it.

## Status

Research only. No translation build exists yet, and nothing has been tested in an emulator.

## Contents

- [PLAN.md](PLAN.md): start here; phased plan and handoff.

- [docs/TEXT_ARCHITECTURE.md](docs/TEXT_ARCHITECTURE.md): how JP, US and EU store text, names
  and fonts, and why US English is the right source (JP's six language slots, US slot 1).
- [docs/HUGEAPPLEPACK_FINDINGS.md](docs/HUGEAPPLEPACK_FINDINGS.md): what the CN modder's
  USA port pack teaches. The pack itself is a local-only, untracked `HugeApplePack/` folder. Version-tagged game internals,
  process lessons, and issues found in our own docs.
- [tools/text_survey.py](tools/text_survey.py): read-only standard-library script that
  reproduces the text-architecture facts from the retail ROMs.

```sh
python3 translation/tools/text_survey.py ROMs
```

## Next steps

See [PLAN.md](PLAN.md): phased plan, handoff notes and open questions.
