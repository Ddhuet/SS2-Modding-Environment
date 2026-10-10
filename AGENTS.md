# SS2 Modding Environment

An **AI-first modding environment for the European (EU) version of Shining Soul II** on Game Boy Advance.

The current eu folder workspace is set up for linux development. The base folder Chinese instructions assume Windows and include Windows toolings, so it would be prudent to check there if a Windows dev environment is being used.

**Start by reading [eu/README.md](eu/README.md)** to orient yourself in this workspace. AI agents should work inside **`eu/`**, use the **EU ROM**, and follow the instructions and documentation there, including [eu/AGENTS.md](eu/AGENTS.md).

The main folder preserves a translated copy of the original Chinese modding instructions and supporting research for the **Japanese (JP) ROM and its Chinese localization**. The original introduction is now [README_CN_VERSION.md](README_CN_VERSION.md). These materials provide historical reference for EU work; their ROM addresses and patch assumptions require verification against the EU version.

ROMs are excluded from this repository. Supply your own matching copies using the [ROM checklist](ROMs/REQUIRED_ROMS.md), then follow the [EU setup guide](eu/docs/CLONE_SETUP.md) to rebuild patched ROMs and dependencies. Saves and savestates are included as testing fixtures.

**Translation track (branch `translation`):** research toward an English translation of the JP/CN base ROM lives in [translation/](translation/README.md), kept separate from `eu/`. The CN modder's USA port pack is a local-only, untracked `HugeApplePack/` folder (never edit it); its evaluated knowledge is in [translation/docs/HUGEAPPLEPACK_FINDINGS.md](translation/docs/HUGEAPPLEPACK_FINDINGS.md).
