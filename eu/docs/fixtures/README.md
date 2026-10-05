# EU gameplay fixtures

[Paige at Goblin Fort](goblin-fort.json) records the normal-save identity, class/level/language, prerequisites, exact input transcript, test reports and each state's hash binding. Dialogue is finished, the player can move, and real attack processing was observed. No RAM/register edits were used to create either combat-ready state.

Tracked combat-ready states:

| ROM | Combat-ready native state |
| --- | --- |
| Original EU | `runs/resistance-gameplay-003/original/states/combat-ready.ss1` |
| Signed resistance candidate | `runs/resistance-gameplay-003/signed/states/combat-ready.ss1` |

Each state and its adjacent `.ss1.json` binding are tracked fixtures and ship with a clone. All other normal-save and savestate fixtures are also tracked at their existing paths. Treat them as immutable; use a fresh, unused `runs/` directory for each new test. The [button transcript](goblin-fort-buttons.json) and script can reproduce the scenario from a normal save. Do not load one ROM's state into another, including the confirmed refund ROM.

From `eu/`, skip the goblin conversation using a fresh isolated session:

```python
from pathlib import Path
from emulator import Session
with Session('inputs/ss2-eu.gba', save='inputs/ss2-eu.sav',
             run_dir='runs/new-combat-research') as s:
    s.load_state(Path('runs/resistance-gameplay-003/original/states/combat-ready.ss1').resolve())
    s.run_frames(16, 'RIGHT')
    s.screenshot('screenshots/moved.png')
```

For the candidate, use `artifacts/ss2-eu-resistance-candidate-001.gba` and the signed variant state. A state is a paused native-core research fixture; it is separate from a normal `.sav` and no game-save persistence is claimed for these combat observations.

Regenerate both states and repeat the natural-path/two-write resistance checks:

```sh
python scripts/test_status_resistance_gameplay.py --output runs/new-combat-fixture
```

The test records the original unaffected kind-5 combat event, then separately labels the affected-kind/resistance variants as synthetic. It saves combat-ready states **before** those variants. The longer direct-call diagnostic uses a separate synthetic stack, CPU setup and draw overrides; see [the audit](../status-resistance-audit.md). Neither kind of boundary experiment is naturally equipped gameplay acceptance.
