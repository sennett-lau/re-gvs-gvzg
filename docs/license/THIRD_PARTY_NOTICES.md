# Third-party notices

These notices distinguish tools used in research, dependencies of this reader, and software bundled in the game package. The compiler and runtime source snapshot is bundled under `vendor/ps2-web-recomp/`. Its exact file hashes are in `vendor/manifest.json`. The compatible-server source snapshot and binaries are not bundled; the original Online integration includes a separately identified server-derived protocol probe.

| Component | Relationship | Recorded version / terms |
| --- | --- | --- |
| [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp) | Upstream static recompiler and runtime used by the game work | Commit `6526f4803d98e10de50bea3af104a4d26e9df033`; MIT; the unmodified original license is retained in `vendor/ps2-web-recomp/LICENSE`. Local changes are separate patches. |
| [Emscripten](https://github.com/emscripten-core/emscripten) | Toolchain used for retained web builds | `6.0.11`, as recorded by the game build validation; toolchain not bundled here. |
| [Ghidra](https://github.com/NationalSecurityAgency/ghidra) | Static analysis with a PS2 processor extension | `12.1.4` in the retained research notes; tools and extension not bundled. Exact extension pin remains to be captured for a reproducible RE setup. |
| [Marked](https://github.com/markedjs/marked) | Markdown parser installed to build the Wiki | Exact version and package integrity in `package-lock.json`; MIT. Distribution installed by npm retains its own license. |
| [zdxsv](https://github.com/inada-s/zdxsv) | Compatible-server dependency built in private directories by the original Online server (`apps/server/README.md`); source-derived synthetic protocol probe included | Commit `35ffbdad9257eca5043bb4977d26cc07468b5045` supplies an AGPLv3 license. Its complete, unmodified text is retained in [ZDXSV_AGPL-3.0.txt](ZDXSV_AGPL-3.0.txt). The derived probe is marked `AGPL-3.0-only`; the server source snapshot and binaries are not bundled. |
| [coop-anything](https://github.com/cranebeaker/coop-anything) | External approach assessed for multiplayer research | Reference only; not integrated or bundled. See Chapter 08. |

This file is a provenance inventory, not a replacement for dependency license texts. When game code or a third-party source snapshot is actually imported, record its exact revision, scope, license and original notices in the same change. An upstream tool's license does not license the game it translates.

The zdxsv preparer verifies the pinned source archive and records its private changes: loopback listeners and ordinary descriptions for lobbies 3 and 4 in place of optional executable injection. `poc/original-online/network/protocol_probe.mjs` derives protocol encoding and sequencing from that revision's `pkg/lobby/flow_test.go`, `pkg/lobby/message/message.go` and `pkg/sessionid/sessionid.go`; its header retains those source attributions. The probe's license notice is separate from the project's MIT grant for independently written contributions. These records describe provenance and terms, not a successful original-client login or battle.

## Reader typeface

The Wiki self-hosts **Manrope** from the [Google Fonts source distribution](https://github.com/google/fonts/tree/main/ofl/manrope). Copyright 2018 The Manrope Project Authors. The unmodified variable TTF is supplied under the SIL Open Font License 1.1, with the complete original license at `apps/wiki/fonts/OFL.txt`; the reader build copies that license alongside the font. No external font service is contacted by readers.

The bundled file SHA-256 is `3ae11c49db0455a3cc33e37d380f20fdb8c7f8b41dc07625c177e3d87a9d6ae6`. This is a font-specific license, separate from the MIT license for the project's own contributions.

## IPU implementation

The upstream runtime carries a separate BSD-style notice for its IPU implementation, retained verbatim at `vendor/ps2-web-recomp/runtime/src/ipu/NOTICE`. The playable package reproduces that notice together with the upstream MIT text in `apps/game/prebuilt/LICENSES.txt`.
