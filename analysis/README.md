# Offline Static Analysis Documentation

This directory allows recipients to perform limited, read-only candidate discovery on **unknown mechanisms** without using Ghidra or IDA. It is not a complete reverse-decompilation project.

## Recommended Order

1. [FUNCTION_INDEX.md]: Locate known entry points by system and Chinese semantic descriptions.
2. [STRUCTURE_FIELDS.md]: Look up confirmed or inferred data fields.
3. [PSEUDOCODE_CORE.md]: Read manually curated core pseudocode.
4. [DISCOVERY_GUIDE.md]: Controlled discovery workflow for unknown mechanisms.
5. `FUNCTION_INDEX.json`: Machine-readable index for AI / script retrieval.
6. [historical_decompilation/README.md]: Historical full Ghidra pseudocode, function tables, and string tables without file-by-file explanations.
7. [tracing_cases/README.md]: Complete case studies tracing from cheat codes and existing patches down to RAM fields, functions, call graphs, and data flows.

---

**Evidentiary Boundary:** The original Ghidra project was initially built on a historical ROM. Conclusions regarding addresses, control flow, and structures here serve only as historical static sources and require re-reading bytes against the current SS2_SC baseline SHA-256 `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`. Any pseudocode that has not been re-matched against current bytes must not be documented as final confirmation for the active baseline.

Capstone is only responsible for disassembly; it does not understand game semantics such as "lethal damage," "resurrection," or "item consumption." Game semantics must be derived from combined evidence across structure fields, call relationships, data flows, and maintainer testing.

When searching for candidates based on unknown semantics, you can perform full-text searches in `historical_decompilation/`. However, old pseudocode must have its bytes re-read and re-verified against the current baseline—the presence of a piece of C-style text in historical files alone does not qualify it as a current conclusion.