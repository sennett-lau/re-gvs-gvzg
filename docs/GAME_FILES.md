# Run and rebuild the game

The checkout includes the generated C++, runtime patches, adaptive hooks and one matched browser package. **Only the Wiki is planned for public hosting; game deployment is deferred.** See the [hosting scope](REPOSITORY.md#stable-wiki-hosting). The instructions below remain available for local use and self-hosting.

Hosted players open the game URL without supplying an ISO. The server operator supplies the supported disc separately. The ISO, ROM and personal runtime state remain excluded from Git and the downloadable code package.

The target is the Japanese PS2 release of [Mobile Suit Gundam: Gundam vs. Zeta Gundam](https://en.wikipedia.org/wiki/Mobile_Suit_Gundam:_Gundam_vs._Zeta_Gundam), serial `SLPS-25419`, executable CRC `435D8236`. The server and builder verify the main executable SHA-256 against `upstream.lock` before using it.

## Play a hosted game

Open the deployed game URL in a supported browser and press **Start full game**. The browser downloads the runtime and requests the required disc ranges from the host. Game simulation and rendering run on the player's device. The host serves data; it does not compute a separate game for each visitor.

This flow is already implemented through `/disc.iso` and HTTP byte-range requests. It needs no disc picker or upload step. A permanent public game URL has not been selected yet.

## Run your own host

The operator needs Python 3.10 or newer and a supported disc image. Players need a browser with WebGPU, JSPI, Wasm exceptions, SIMD and cross-origin isolation. The package acceptance used Chrome 156 on Windows with hardware WebGPU.

From the repository root on the host:

```sh
python3 scripts/game/verify.py
python3 scripts/game/serve.py --disc /path/to/disc.iso
```

Open **http://127.0.0.1:8620/** and press **Start full game**. The server binds to loopback by default and serves the supplied image at `/disc.iso` using byte ranges. The small `.data` file contains the original executable; it does not replace the rest of the disc.

The default **Auto** mode adjusts eligible battles between 60 and 120 render updates per second. Gameplay remains at 60 Hz; menus, paused scenes and unsupported configurations keep their original timing. Use `?fps=60` or `?fps=120` to choose a fixed battle target. Hardware may not sustain that target.

Keyboard controls include arrows for movement, Enter for Start/pause, X for Circle/confirm and Z for Cross. Touch controls and browser gamepads are also available. Memory-card storage uses the browser origin; export a card before clearing that origin's data. `?nocard=1` disables the card and leaves the game's original confirmation prompt, which must be answered before continuing.

## Deploy the hosted game

Use the existing game server behind an HTTPS reverse proxy. Serve the UI, JS/WASM/data and `/disc.iso` through the same public origin, preserving HTTP `Range` requests, `206` responses and the COOP/COEP isolation headers. Keeping those resources together matches the current client and avoids a cross-origin disc integration change. Store the disc outside the repository and point `--disc` at that host-side file.

The Wiki can use GitHub Pages independently. The current disc is 4,140,204,032 bytes (4.14 GB), while a published Pages site is limited to 1 GB, so the complete disc-backed game cannot be hosted entirely there. [GitHub Pages limits](https://docs.github.com/en/pages/getting-started-with-github-pages/github-pages-limits) (checked 2026-10-27).

A later split between a static frontend and an asset host would need a configurable disc URL, compatible CORS/range responses and cross-origin isolation. A local disc picker is an optional alternative for self-contained play, not a prerequisite for the hosted experience. Multiplayer services remain separate from static Wiki hosting.

## Rebuild from the included C++

Requirements: Python 3.10+, CMake 3.20+, Ninja and an activated **Emscripten 6.0.11** SDK. The SDK is not bundled. Set `EMSDK` to its root or pass `--emsdk PATH`.

```sh
python3 scripts/game/build.py --disc /path/to/disc.iso --jobs 2
python3 scripts/game/serve.py --disc /path/to/disc.iso --build .local/game-build/web
```

Use a fresh `--work` directory for another build. The builder refuses to overwrite an existing workspace. Two compile jobs are the default to limit memory pressure; more jobs can reduce build time on a machine with spare capacity.

The build copies the pinned vendor source, applies the compatibility patches, compiles all retained generated units, prepares five fingerprint-checked replacements, then links the controller/interpolation and runtime overrides before the base archives. It does not read old `.o` or `.a` files. The output includes a file manifest and source fingerprints.

The fresh-output rebuild on 2026-10-27 produced **byte-identical WASM, JavaScript and data** to the measured engine `22ac74de…`. All ten override objects and both base archives matched too. The packaged HTML removes links to unbundled experimental routes. The [acceptance record](evidence/rebuild-acceptance.json) separates compilation, browser smoke checks and protocol tests.

## Recompiler and extraction research

Build the compiler and run its synthetic regressions:

```sh
python3 scripts/game/tools.py
python3 scripts/game/regenerate.py --disc /path/to/disc.iso
```

The second command extracts the supported executable and 325 MWo3 modules into ignored local output. It regenerates EE code and explicitly retains the recorded VU C++ translation. Runtime VU recording is not repeated by this command.

**Fresh regeneration differs from the retained translation.** The current patched compiler produced two additional unit files and changed 52 existing files in the export audit. `comparison.json` records the differences, and the command returns a nonzero status instead of silently replacing the supported inputs. Resolving that generator-history difference is separate from rebuilding the included, verified C++.

## Multiplayer prototypes

**Route A — streaming:** use `--remote .local/turn.json` with your own WebRTC `iceServers` configuration. The included host/remote UI and `poc/streaming/remote_play.py` provide invitations and two controller ports. The retained policy requires TURN relay transport. Credentials are not bundled.

**Route B — independent clients:** `poc/lockstep/` contains the relay, browser transport/lobby, native adapters and controller sequences. Its protocol tests run independently. The private versus save-state fixture is excluded, so this source-only POC is not a selectable mode in the included normal-boot package. Fixture recreation and full-game integration remain work described in [Chapter 08](chapters/08-independent-clients.md).

## Check and package locally

```sh
npm ci --ignore-scripts
npm run verify:game
npm run verify:research
python3 scripts/check-publication.py --history
python3 scripts/game/package.py
```

The packaging command writes `.local/re-gvs-gvzg-adaptive.zip` and its SHA-256 file. It includes the matched browser package, a local server and notices. It does not create a Git tag, upload a file or publish a GitHub Release.

An optional GPU smoke test is in `tests/browser/game-smoke.cjs`. Install Playwright separately or point `PLAYWRIGHT_MODULE` to an existing installation; `CHROME_PATH` selects the browser. Run it against the game server with `node tests/browser/game-smoke.cjs URL OUTPUT_DIRECTORY --headed`. It uses an isolated browser context and muted browser output while audio processing continues. Output screenshots and profiles belong under `.local/`.
