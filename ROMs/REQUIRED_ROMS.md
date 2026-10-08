# Required local ROMs

Place both supplied Shining Soul II ROMs in this folder. They are private inputs;
Git ignores every `.gba` file, including uppercase `.GBA`, throughout the repository.
ROMs are not included in a clone. Check the exact bytes before using them.

| Filename | Size (bytes) | SHA-256 |
| --- | ---: | --- |
| `Shining_Soul_II_EU.gba` | 16,777,216 | `e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2` |
| `Shining_Soul_II_JP.GBA` | 16,777,216 | `8a7ebaa88682995fd7bf1bf8dc8e77a3f4fc4a9893a7639af953c553821d9ab9` |

Ideally, use the 32MB expanded version of the EU ROM any time extra space is needed. The tools should already support that SHA too.

SHA-1, for comparison with tools that use it:

- EU: `aa1288be9257337abdfe3034898cf6c7aa778fbc`
- JP filename: `a3318388249bba1a51d76b03f88f3749a97afc27`

From this folder, run `sha256sum Shining_Soul_II_EU.gba Shining_Soul_II_JP.GBA`.

The JP-named file has an AU2J header and **exactly matches the Chinese-localized
`ss2-cn-source` profile** in `eu/profiles/`. Its filename does not establish that
it is an unmodified Japanese retail dump. These hashes identify the supplied
files, not every Japanese or European release.

The EU ROM is the target for EU builds; the AU2J source is a comparison input
for Chinese-to-EU port research. The separate 32 MiB Chinese modified baseline
is also needed for some upstream definitions; it is not interchangeable with
the 16 MiB JP-named file. See [fresh-clone setup](../eu/docs/CLONE_SETUP.md) for
working-copy paths, profile checks and rebuilding the ignored patched ROMs.
