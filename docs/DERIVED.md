# Derived artifacts and storage

The code export includes readable generated C++, selected RE sources and one matched prebuilt web package. Individual files fit ordinary Git; no LFS dependency is needed for this package. Generated code is translated executable behavior, not the developer's original source. The current `.data` package contains the original ELF.

## Size observations

The [artifact inventory](evidence/artifact-inventory.json) measures the current retained generated tree and the specific historical web trio in `build/web-gundam-vs-z-gundam`. Sizes are file bytes, not Git pack size or download size. These inputs were inspected on 2026-10-25.

| Artifact | Observed size | Packaging decision |
| --- | --- | --- |
| Generated tree | 1,186 files, 283.113 MiB total | Retained as readable source in `generated/` |
| Largest generated file, `table.cpp` | 61.247 MiB | Below the ordinary GitHub per-file limit; size warning expected |
| Retained baseline-lineage `ps2web.wasm` | 95,074,555 bytes, about 90.67 MiB | Package only with its matching loader/data and declared tests |
| Matching `ps2web.js` | 151,840 bytes | Part of the matched package |
| Matching `ps2web.data` | 6,149,694 bytes | Part of the matched package; contains the original ELF |

The exported adaptive `apps/game/prebuilt/index.wasm` is 95,090,068 bytes (90.685 MiB). Its `index.js` is 152,059 bytes and its `index.data` is 6,149,694 bytes. These three files match the fresh source rebuild. This is a different package from the historical baseline-lineage artifact above. The difference is small for storage but material for build identity; the two must not be substituted based on filenames or approximate size. Other experimental and debug variants need their own inventory.

GitHub currently warns on ordinary Git files above 50 MiB and blocks files above 100 MiB. The browser upload interface has a separate 25 MiB limit. A folder's total size is not a single-file limit. [GitHub large-file guidance](https://docs.github.com/en/repositories/working-with-files/managing-large-files/about-large-files-on-github) (checked 2026-10-25).

The selected generated files and this main web trio are individually below 100 MiB. Repeated binary snapshots can still enlarge history substantially. Measure the resulting Git pack before publication, and avoid treating every experimental build as a necessary tracked binary.

## Archives and release assets

Use ordinary Git for readable code and a selected matched prebuilt milestone. Additional builds and useful optional debug artifacts can be full compressed Release assets, accompanied by manifests and checksums. Arbitrary `.part01` splitting does not reduce total storage and makes restoration harder. Compression does not sanitize logs.

GitHub Releases attach downloads to versioned releases outside normal Git history. Current documentation allows up to 1,000 assets per release, each under 2 GiB. [GitHub Releases](https://docs.github.com/en/repositories/releasing-projects-on-github/about-releases) (checked 2026-10-25). No LFS dependency is needed for the measured main files; future oversized inputs require a separate packaging decision.

Raw browser diagnostics are optional research records, not required game files. Large captures with embedded screenshots stay local; publish only selected, reviewed excerpts needed to support a result. Do not ship duplicate captures whose only difference is JSON formatting. Keep failures and missing evidence visible when extracting a small summary.
