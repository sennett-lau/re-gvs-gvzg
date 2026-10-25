# Third-party notices

These notices distinguish tools used in research, dependencies of this reader, and software proposed for future game packaging. This local report does not bundle the upstream game runtime, the generated game source, or the referenced replacement server.

| Component | Relationship | Recorded version / terms |
| --- | --- | --- |
| [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp) | Upstream static recompiler and runtime used by the game work | Commit `6526f4803d98e10de50bea3af104a4d26e9df033`; MIT. Preserve its original notices when exporting its code. |
| [Emscripten](https://github.com/emscripten-core/emscripten) | Toolchain used for retained web builds | `6.0.11`, as recorded by the game build validation; toolchain not bundled here. |
| [Ghidra](https://github.com/NationalSecurityAgency/ghidra) | Static analysis with a PS2 processor extension | `12.1.4` in the retained research notes; tools and extension not bundled. Exact extension pin remains to be captured for a reproducible RE setup. |
| [Marked](https://github.com/markedjs/marked) | Markdown parser installed to build the Wiki | Exact version and package integrity in `package-lock.json`; MIT. Distribution installed by npm retains its own license. |
| [zdxsv](https://github.com/inada-s/zdxsv) | External replacement-server reference reviewed for original online-mode behavior | Reference only; not integrated or copied into this repository. See Chapter 08 for the inspected implementation and its limitations. |
| [coop-anything](https://github.com/cranebeaker/coop-anything) | External approach assessed for multiplayer research | Reference only; not integrated or bundled. See Chapter 08. |

This file is a provenance inventory, not a replacement for dependency license texts. When game code or a third-party source snapshot is actually imported, record its exact revision, scope, license and original notices in the same change. An upstream tool's license does not license the game it translates.
