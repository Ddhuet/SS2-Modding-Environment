# Provenance

The parent directory is the supplied Chinese Shining Soul II modding package, with English documentation translations. No upstream repository URL or license for that package was supplied in this chat. The original tree has been preserved.

`reference/upstream/` is a local snapshot of its `analysis/`, `docs/`, `reference_data/`, and `patches/` directories plus the previous USA-port notes and the first EU assessment. Historical findings carry their original region/baseline limitations. Translation-generated Google search link targets were removed in the parent before the snapshot; bracketed labels remain.

The parent directory is now the Git repository root, including these original
reference sources. The duplicate snapshot stays ignored and is reconstructed
by `scripts/setup_reference.py`. No new license claim is made for the supplied
package. ROM files, bundled emulator binaries and installed dependencies are excluded
from the source tree. The normal saves and savestates, including required
state-binding sidecars, are tracked testing fixtures and ship with a clone.

The first EU skill-refund patch is derived from upstream `patches/definitions/respec.json`, independently relocated and audited against the exact EU profile. The EU audit and test evidence explain which claims are newly verified. Upstream labels such as "released" are not inherited as EU validation.

ROMs and save data were supplied by the user. ROM copies stay ignored under
`inputs/`; normal saves and all `.ss1` states with `.ss1.json` sidecars are
tracked at their existing fixture paths. Every emulator session creates its
own copies. The EU normal save originally came from
`../ROMs/saves/Shining_Soul_II.sav`; its SHA-256 is recorded in
`inputs/README.md`.

The emulator's upstream revision, build settings, license and bindings assessment are recorded under `emulator/`. No original custom Windows binary is required by the new harness.
