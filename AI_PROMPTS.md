# Single-Task Prompts for Weaker AIs

Copy only one section at a time, and let the AI process only one small task per execution.

If the AI supports sub-agents, spawn at most 2, and split only distinct, non-overlapping sub-tasks; multiple sub-agents are strictly forbidden from independently searching the same issue. The main AI is responsible for merging and double-checking addresses, bytes, and evidence tags.

Code or keyword searches may only be used to generate candidates. Once candidates are found, you must continue reading the surrounding function logic, callers/callees, data sources, field reads/writes, conditional branches, return value consumers, and failure/fallback paths; if you can only report search hits without explaining the control flow and data flow, the conclusion can be tagged as `hypothesis` at most.

When querying Chinese text, items, monsters, equipment, ores, or recipes, read `docs/CHINESE_CODE_TABLE_AND_EXCEL.md` first. The Chinese code table is used for u16 code value decoding; reference Excels are secondary sources from the original version. Do not merely return the searched cells—you must also inspect table headers, same-row logic, code representation methods, and corresponding ROM consumers.

## 0A. Query Chinese Code Values

```text
Read README.md, EVIDENCE_BOUNDARY.md, and docs/CHINESE_CODE_TABLE_AND_EXCEL.md first. Only query <CODE_CHARACTER_OR_HEX_BYTES>. Use tools/query_code_table.py to output code values, u16 little-endian raw bytes, glyphs/control characters, and end positions; list all code positions for duplicate glyphs. Do not modify the ROM, and do not guess addresses or pointers; if preparing to write text, you must separately list evidence for allocated space, terminators, glyphs, UI width, and pointers.

```

## 0B. Query Reference Excel

```text
Read README.md, EVIDENCE_BOUNDARY.md, docs/CHINESE_CODE_TABLE_AND_EXCEL.md, and analysis/README.md first. Only query <ITEM_MONSTER_RECIPE_OR_CODE>. Use tools/query_reference_data.py to query JSONL extracted from Excel, outputting worksheet, cell, full row context, headers, and relevant fields, along with explaining the code format. Then check the function index, structure fields, and historical pseudocode to point out corresponding ROM consumers and addresses to be re-verified against the current baseline. Extracted data is original-version secondary material and must not be directly written as currently confirmed or used to generate patches; do not merely search for cells while ignoring game logic.

```

Current Boundary: AI is responsible for static analysis, **limited read-only candidate discovery**, patch definition checks, Windows headless mGBA infrastructure self-checks, generating owner acceptance checklists, and organizing owner feedback. When there are no known addresses, searching `analysis/` indices on verified baselines, searching explicit immediate values, tracing Thumb BL callers of a single known target, and performing small-scale disassembly on up to 20 candidates are permitted; candidates can only be tagged as `hypothesis/inferred`. The AI may execute explicit small scripts on isolated copies using `tools/windows_mgba/`, but must report ROM/SAV hashes, commands, observed addresses, expected results, and actual results item by item; successful startup, PING, screenshots, or non-crashing only prove infrastructure integrity. Game functionality results must still be manually operated by the owner and registered as `user accepted`; AI must not promote them to formal acceptance on its own.

## 0. Initialization & Capstone Capability Check

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, analysis/README.md, analysis/DISCOVERY_GUIDE.md, and tools/README.md first. First run python --version, then run python -c "import capstone; print(capstone.__version__)". If Capstone is missing, report it and only suggest that the owner run python -m pip install --user -r requirements-optional.txt; do not install it yourself without explicit authorization. Capstone already includes ARM/Thumb support; do not install armips, keystone, angr, PyGhidra, Ghidra, Java, WSL, or compilers. After installation, perform a memory byte smoke test on ARM and Thumb respectively. Do not modify the input ROM, and do not refer to disassembly as decompilation or dynamic verification. Finally, report environment, version, ARM/Thumb availability, and actionable/unactionable items.

```

## 1. Read Share Package and Report Status

```text
Read README.md, PROJECT_KNOWLEDGE.md, and EVIDENCE_BOUNDARY.md first. First report the four identity items of the unique baseline read from documentation, and check the actual ROM; do not modify the input ROM, do not guess or rewrite baseline hashes, and do not present static evidence as dynamic verification. Process only one item, "Current Status Summary", at a time. List features by released/beta/candidate/research, and separately list the five built-in baseline fixes (do not apply repeatedly); output specific documents involved, addresses/offsets, known original/modified bytes, and verification status. Historical decompilations serve only as candidate sources; write "Not provided" if bytes are missing. Stop and state what evidence is missing if uncertain.

```

## 2. Query a ROM Address or Data Table

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, and analysis/README.md first. First use analysis/FUNCTION_INDEX.json and tools/search_analysis_index.py to query address <ADDRESS> or keyword <KEYWORD>. If an address is provided, process only that address; if only a keyword is provided, up to 20 candidates may be returned, but candidates must not be named as confirmed functions. Upon a hit, you must read the surrounding logic, call relationships, data sources, field reads/writes, branch targets, and return value consumers of the containing function; do not merely report search results. Do not modify input ROM; do not guess baseline hashes; do not present static evidence as dynamic verification. Report source file, ROM address, file offset, ARM/Thumb/data state, actual raw bytes read from the current baseline, known modified bytes, structure/cross-references, and verification status. State the next minimal read-only evidence needed if uncertain.

```

## 2A. Verify an Unknown Mechanism

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, analysis/README.md, analysis/STRUCTURE_FIELDS.md, analysis/PSEUDOCODE_CORE.md, and analysis/DISCOVERY_GUIDE.md first. This run is solely to investigate the rumor: <CLAIM>.

First search FUNCTION_INDEX.json for Chinese/English keywords; no direct hit does not mean the mechanism doesn't exist. After confirming that input ROM size, MD5, SHA-256, and CRC32 match completely, limited read-only discovery is permitted: search for an explicit immediate value, trace one layer of Thumb BL references from a known function, or disassemble 32–96 bytes for up to 20 candidates each. Do not modify ROM, do not scan and dump the entire ROM, and do not directly interpret constant hits as game semantics.

Separately output: known facts, candidate addresses, file offsets, ARM/Thumb state, current baseline raw bytes, comparisons/branches, data sources, call targets, confirmed/static, inferred, hypothesis, and missing evidence. If candidates exceed 20, stop and propose a narrowing condition. Static chain closure can only be claimed if field semantics, bit width/signedness, threshold, branch direction, and final effect writes are all simultaneously proven; otherwise, generating fix bytes or patch JSON is prohibited.

```

## 3. Analyze Small-Range Differences Between Two ROMs

```text
Read README.md, PROJECT_KNOWLEDGE.md, and EVIDENCE_BOUNDARY.md first. Only analyze <RANGE> in the Compare-Rom JSON provided by the user; do not accept or modify the input ROM. Do not guess baseline hashes; do not present static evidence as dynamic verification; process only one small range at a time. Itemize output for source file, ROM address, offset, raw bytes, modified bytes, potential type, and verification status. Stop and state what evidence is missing if uncertain.

```

## 4. Register Short-Byte Modifications as Patch JSON

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, and patches/README.md first. Only register an explicitly provided single-byte or short-byte modification as JSON; do not modify input ROM. Do not guess baseline hashes or any bytes; do not present static evidence as dynamic verification. Output specific JSON filename, address, offset, raw bytes, modified bytes, and verification status; handle only one feature at a time. Stop and state what evidence is missing if uncertain.

```

## 5. Check Patch JSON

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, and patches/README.md first. Only review <PATCH_JSON>; do not modify input ROM. Do not guess baseline hashes; do not present static evidence as dynamic verification. Verify address-0x08000000=offset, hex length, raw byte source, write overlap, stage, and evidence; output file, address, offset, raw/modified bytes, and verification status. Check only one JSON at a time; stop and state what evidence is missing if uncertain.

```

## 6. Generate Manual Acceptance Checklist for Owner

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, and MGBA_TEST_GUIDE.md first. This task generates a checklist only; do not start or claim to have run mGBA. Generate one normal, one boundary, and one regression acceptance path solely for feature <ID> for manual execution by the owner. List relevant files, address/offset, raw/modified bytes (write unknown if unknown), mandatory ROM SHA-256 to verify, save file starting point, key inputs, expected outcome, and actual result entry fields. Mark all items initially as "Pending owner acceptance". Do not modify input ROM, do not guess baseline hashes, do not present as dynamic verification; stop and state what is missing if evidence is insufficient.

```

## 6A. Windows Headless mGBA Infrastructure & Single-Point Observation

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, MGBA_TEST_GUIDE.md, and tools/windows_mgba/README.md first. Process only a single explicit observation target <TARGET>. Run integration_test.py first, strictly using isolated copies of personal ROM/SAV files within the current workspace; do not modify input ROM or original SAV. After passing, create a new instance and execute only the minimum necessary PING, WAIT, KEYS, READ, REG, SHOT, or SAVESTATE commands, recording input ROM/SAV hashes, session, commands, address/width, expected, actual, and output files. If RAM writes are strictly necessary, only read-first then write-back same value is allowed unless explicit address and value approval is granted by the owner. Infrastructure passing, successful booting, taking screenshots, or lack of crashes cannot be framed as functional verification; results requiring character operation or screen semantic judgment must all generate checklists handed to the owner for acceptance. Stop and state missing save starting point, observation address, or expected values if uncertain.

```

## 6B. Single-Frame Pause, Batch Memory, or PC Tracing

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, MGBA_TEST_GUIDE.md, and tools/windows_mgba/README.md first. This run investigates only one explicit address, range, or execution sentinel <TARGET>. Launch with --paused on an isolated copy, recording FRAMES=0, ROM/SAV hashes, and pre-modification observed values first; execute only minimum frame N when screen rendering is needed. Prefer READBLOCK for batch reads; DUMPBLOCK can only write to this instance's analysis/ directory and must not export large ROM sections. For PC tracing, set at most a small number of even code addresses required by the task and explicit max_hits; run TRACE_PC_RESULT, TRACE_PC_STOP, and stop instance upon completion. Zero hits must be recorded as "No hit in this scene" and never as unreachable; hits must also be evaluated in combination with surrounding logic, registers/memory, and owner scenario context. Do not wait for WAIT while paused; do not frame tool loop closure as functional acceptance.

```

## 7. Update Status Based on Owner Acceptance Log

```text
Read README.md, PROJECT_KNOWLEDGE.md, and EVIDENCE_BOUNDARY.md first. Organize only this single mGBA acceptance record provided by the owner: <PASTE_RECORD>. Do not modify input ROM, do not guess baseline hashes, do not frame as AI dynamic verification. If the owner explicitly confirms results, use the evidence tag `user accepted`, and clearly specify owner acceptance scope, ROM SHA-256, save file, steps, actual results, unaccepted items, and what can or cannot be proven. Process only one feature at a time; stop and list missing items if explicit owner conclusions or ROM identity are lacking.

```

## 8. Analyze a Crash or Black Screen

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, and docs/DEBUGGING_NOTES.md first. Analyze only a single reproducible black screen/crash record. Do not modify input ROM; do not guess baseline hashes; do not present static evidence as dynamic verification. List up to three hypotheses prioritized, providing files to inspect, address/offset, raw/modified bytes, and verification status for each; suggest only one minimal read-only check at a time. Stop and state what evidence is missing if uncertain.

```

## 9. Organize New Research Findings

```text
Read README.md, PROJECT_KNOWLEDGE.md, and EVIDENCE_BOUNDARY.md first. Organize only one new finding on topic <TOPIC>, without modifying input ROM. Do not guess baseline hashes; do not present static evidence as dynamic verification. Output proposed files to update, known facts, address/offset, raw/modified bytes, evidence tag, failed attempts, risks, and next steps; process only one small conclusion at a time. Stop and state what evidence is missing if uncertain.

```

## 10. Check Address Conflicts Between Two Simple Patches

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, and patches/README.md first. Compare only <PATCH_A> and <PATCH_B>; do not modify input ROM. Do not guess baseline hashes; do not present static evidence as dynamic verification. Itemize output for files, address, offset, raw/modified bytes, direct range overlap, adjacent writes, and declared semantic risks; compare only these two patches at a time. Stop and state what evidence is missing if uncertain. Note that "Does not imply semantic compatibility" even if there is no address overlap.

```

## Shortest Prompt A: First Time Handover to New AI

```text
Read README.md, PROJECT_KNOWLEDGE.md, and EVIDENCE_BOUNDARY.md first. Only report current released/beta/candidate/research status, and list the five built-in baseline fixes separately. Do not modify input ROM, do not guess hashes, do not write static as dynamic. List source files, address/offset, raw/modified bytes, and verification status; historical pseudocode must indicate old baseline source, write unknown if unknown, stop if evidence is insufficient.

```

## Shortest Prompt B: Implement a Small Modification for a Known Address

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, and patches/README.md first. Only generate patch JSON for one address and raw/modified bytes I have provided; do not modify input ROM, do not guess hashes or bytes, do not write static as dynamic. Check offset and output file, address, offset, raw/modified bytes, verification status; stop if missing evidence.

```

## Shortest Prompt C: Register Owner Acceptance

```text
Read README.md, PROJECT_KNOWLEDGE.md, and EVIDENCE_BOUNDARY.md first. AI does not run mGBA, only organizes an acceptance record provided by the owner. Mark `user accepted` only after explicit confirmation by the owner; do not mark as AI dynamic verification. Output ROM SHA-256, record file, address/offset, raw/modified bytes, acceptance scope, and what cannot be proven; stop if missing owner conclusion, ROM identity, steps, or actual results.

```

## Shortest Prompt D: Investigate an Unknown Mechanism

```text
Read README.md, PROJECT_KNOWLEDGE.md, EVIDENCE_BOUNDARY.md, and analysis/README.md first. Investigate only "<CLAIM>". First check function/field/pseudocode indices; then perform a limited read-only scan on a baseline ROM with a complete hash match, up to 20 candidates, at most 96 bytes each. Output address, offset, mode, actual bytes read, instructions, data sources, branch targets, and evidence level. Constant hits count only as hypothesis; patch proposals are prohibited before fields, signedness, branches, and effect writes are closed. Do not modify ROM, and do not write static results as dynamic verification.

```