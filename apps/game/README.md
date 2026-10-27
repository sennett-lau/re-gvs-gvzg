# Browser game

The [setup guide](../../docs/GAME_FILES.md) is the canonical launch and rebuild documentation.

- `prebuilt/` contains one matched package of the measured adaptive engine. Its executable files are unchanged; launch links to unbundled experiments have been removed.
- `src/web.cpp` is the browser host.
- `shell.html` is the UI template used when linking.
- `assets/` contains the browser controllers, pacing, input, diagnostics and streaming client support. The prebuilt copies are checked against these source assets.

The host operator supplies the supported disc separately; visitors open the game URL without supplying an ISO. A complete ISO is not included in the small `.data` package.
