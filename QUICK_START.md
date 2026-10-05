# Windows Quickest Workflow

The following commands are run from the "current project workspace" without hardcoded drive letters. Requires Python 3.8+.

## 1. Prepare and Verify Input

Place a copy of the current baseline ROM at `workspace\input\SS2_SC_bug_fixed.GBA`, then run the following from the package root directory:

```cmd
python tools\verify_rom.py "workspace\input\SS2_SC_bug_fixed.GBA"

```

It must display `Result : MATCH`. The current unique SHA-256 is `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`; otherwise, stop.

## 2. Select and Apply Definitions

Official 17-item patch set:

```cmd
python tools\apply_simple_patch.py "workspace\input\SS2_SC_bug_fixed.GBA" "patches\definitions\all_17_released.json" "workspace\output\光明之魂2_正式17项.gba"

```

Official 17-item patch set plus Beta shared storage (explicitly unstable):

```cmd
python tools\apply_simple_patch.py "workspace\input\SS2_SC_bug_fixed.GBA" "patches\definitions\all_18_beta.json" "workspace\output\光明之魂2_正式17项加Beta共享仓库_不稳定.gba"

```

The tool prohibits matching input/output paths and refuses to overwrite existing output files. Do not apply single patches prior to applying a patch combination.

To register a short patch with a known reliable address:

```cmd
python tools\new_patch_definition.py "patches\definitions\my-small-patch.json" --id my_small_patch --name "我的小修改"
notepad "patches\definitions\my-small-patch.json"

```

Addresses, offsets, pre-images (original bytes), and modified bytes must be filled in; control-flow modifications cannot be completed using templates alone.

## 3. Lead Acceptance via mGBA

Open the new output ROM and complete a cold boot, standard save copy test, target normal path, boundary path, adjacent regression checks, save, completely close mGBA, and reopen to test loading the save file. AI must not declare dynamic verification on behalf of the project lead; scopes explicitly confirmed by the lead should be recorded as `user accepted`.

## 4. Record Outputs

```cmd
python tools\verify_rom.py "workspace\output\光明之魂2_正式17项.gba" --report-only
python tools\compare_rom.py "workspace\input\SS2_SC_bug_fixed.GBA" "workspace\output\光明之魂2_正式17项.gba" --report "workspace\records\released-17-diff.json"

```

Hand over the patch JSON, output hash, diff summary, and lead acceptance record together to the AI. Showing a baseline `MISMATCH` after modification is normal; `--report-only` calculates identity only.