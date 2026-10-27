# Run and rebuild the game

The checkout includes the generated C++, runtime patches, adaptive hooks and one matched browser package. **The public website hosts the Wiki only; game deployment is deferred.** See the [hosting scope](REPOSITORY.md#stable-wiki-hosting). The instructions below remain available for local use and self-hosting.

Hosted players open the game URL without supplying an ISO. The server operator supplies the supported disc separately. The ISO, ROM and personal runtime state remain excluded from Git and the downloadable code package.

The target is the Japanese PS2 release of [Mobile Suit Gundam: Gundam vs. Zeta Gundam](https://en.wikipedia.org/wiki/Mobile_Suit_Gundam:_Gundam_vs._Zeta_Gundam), serial `SLPS-25419`, executable CRC `435D8236`. The server and builder verify the main executable SHA-256 against `upstream.lock` before using it.

## Download the browser package

The [v0.3.0-alpha.1 release](https://github.com/sennett-lau/re-gvs-gvzg/releases/tag/v0.3.0-alpha.1) includes `re-gvs-gvzg-v0.3.0-alpha.1-browser.zip` and `SHA256SUMS`. Verify the download, extract it and follow the host command below. This matched HTML/JS/WASM/data package includes the local server and notices. Supply the disc separately on the host. The release also provides a static Wiki archive for local reading.

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

The native tools require Clang, a C++20 standard library with `std::format`, CMake and Ninja. The script selects `clang++` by default; set `CXX` to choose a compatible Clang installation. The retained runtime uses Clang vector builtins that GCC does not provide.

```sh
python3 scripts/game/tools.py
python3 scripts/game/regenerate.py --disc /path/to/disc.iso
```

The second command extracts the supported executable and 325 MWo3 modules into ignored local output. It regenerates EE code and explicitly retains the recorded VU C++ translation. Runtime VU recording is not repeated by this command.

**Fresh regeneration differs from the retained translation.** The current patched compiler produced two additional unit files and changed 52 existing files in the export audit. `comparison.json` records the differences, and the command returns a nonzero status instead of silently replacing the supported inputs. Resolving that generator-history difference is separate from rebuilding the included, verified C++.

## Multiplayer integration

The `--multiplayer` source profile adds the original-menu handoff and normal-boot input synchronization. The published `v0.3.0-alpha.1` browser package remains the earlier adaptive build; it does not contain this integration.

```sh
python3 scripts/game/build.py --disc /path/to/disc.iso --emsdk /path/to/emsdk --work .local/multiplayer-build --multiplayer
python3 scripts/game/serve.py --disc /path/to/disc.iso --build .local/multiplayer-build/web --remote .local/ice.json --netplay
```

For a local direct-connect test, `.local/ice.json` can contain `{"iceServers": [], "iceTransportPolicy": "all"}`. Internet use needs the host's STUN/TURN configuration and HTTPS. Credentials belong in the private config file. Setting `iceTransportPolicy` to `relay` requires TURN.

Start the game and select **通信対戦 / Network Battle**, or open **Multiplayer** from the toolbar. The connection desk offers two routes:

- **Share this game:** the host plays as P1 and invites P2. Select the separate-host option when both players will connect remotely. Copy the invitation, continue to Versus, then let P2 press Start. Each player selects Ready in the original preparation screen.
- **Run on both devices:** create a room or open its invitation. Both devices press **Start together**. This starts the same normal boot at 60 Hz without personal saves. At the memory-card confirmation, Player 1 selects **はい / Yes**. Choose Network Battle or Versus, let P2 press Start, then both select Ready. The Session desk switches between the player's battle view and the full game screen.

Invitations contain room access, never the host's owner token. Closing a streaming room permits another room without reloading. Independent games stop when synchronization fails; create a fresh room after a session ends.

The earlier fixture-based POC remains under `poc/lockstep/` as a research reference. The new build reuses its transport and native input adapter with normal-boot RTC/disc handling; no private save-state fixture is needed. See [Route A](chapters/07-host-streaming.md) and [Route B](chapters/08-independent-clients.md) for measured scope and remaining work.

Run the optional silent GPU acceptance against a server with both services enabled:

```sh
node tests/browser/multiplayer-smoke.cjs http://127.0.0.1:8629/ .local/multiplayer-stream stream
node tests/browser/multiplayer-smoke.cjs http://127.0.0.1:8629/ .local/multiplayer-dedicated stream --dedicated
node tests/browser/multiplayer-smoke.cjs http://127.0.0.1:8629/ .local/multiplayer-lockstep lockstep
```

Set `PLAYWRIGHT_MODULE` and `CHROME_PATH` if needed. The test uses two isolated browser contexts (three with `--dedicated`), normal game input and muted browser output with audio processing active. It checks native menu entry, opposing-player preparation, active battle and route-specific behavior. Add `--round` to continue through the original battle timer into the round-end sequence. Results/rematch need separate coverage. These are bounded same-PC acceptance tests, not WAN benchmarks.

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
