# Original Online Mode experiment

This isolated profile preserves original menu result `7`. It does not enable the local-Versus lockstep bridge or provide a network backend. Findings and acceptance limits belong in [chapter 08](../../docs/chapters/08-independent-clients.md#the-native-boundary-and-first-bounded-implementation).

`prepare.py` inserts bounded metadata observation at the original menu, mode dispatcher, connection dispatcher, battle entry and EE SIF bind/call functions. It rejects multiplayer overrides. Generated and vendor input files remain unchanged. Observation enables existing IOP module diagnostics after menu entry. Keep raw output private under `.local/`.

`prepare_runtime.py` optionally supplies the first runtime slice: retain `.iopmod` names and resolve LoadFile RPC method `9` against loaded modules. It rejects invalid request spans, preserves `-202` for unknown names and removes nonresident modules when their memory is freed. Lookup establishes identity, not startup completion or service readiness. It never registers a network service and stays separate until full-game validation establishes its effects.

Run portable preparation checks:

```sh
python3 -m unittest discover -s tests/original-online -p '*_test.py'
```

Compile the small native module-discovery regression on the allocated test host:

```sh
c++ -std=c++20 -Wall -Wextra -I poc/original-online tests/original-online/module_names_test.cpp -o .local/module-names-test
.local/module-names-test
```

Optional path/name pairs exercise original IRX metadata, for example `SMAP.IRX INET_SMAP_driver`. The files must come from the supported private disc.

Verify selected original words without executing the game:

```sh
python3 poc/original-online/verify_boundary.py --elf /private/SLPS_254.19 --irx /private/AVEWRAPM.IRX --output .local/original-online/static-boundary.json
```

After obtaining the PC slot, build from retained adaptive WASM objects:

```sh
python3 poc/original-online/build_probe.py --base .local/game-build --sdk /path/to/emsdk --work .local/online-observer-build
```

This is an incremental diagnostic, not a fresh-source reproducibility test. Use Emscripten `6.0.11` and a private cache. Add `--module-discovery` only for the optional runtime slice. Each work directory must be new. Archive and output hashes are retained in `web/build-info.json`.

Serve through the existing local game server, without `--netplay` or `--remote`, then run:

```sh
node tests/original-online/browser-probe.cjs http://127.0.0.1:8641/ .local/original-online/browser
```

Set `PLAYWRIGHT_MODULE` and `CHROME_PATH` for the test host. The harness uses browser output mute, keeps the audio engine active, blocks external page requests and disables app WebSocket/WebRTC construction. It records normal boot, original mode `7`, connection state, SIF metadata and ordinary cancel input. A passing reachability probe explicitly reports `network_success: false`.

The retained first trial used no card and neutral observation before cancel. It reached mode `7` but captured a black game area; no custom bind occurred. Its event stream did not mark the cancel boundary. The updated harness records monotonic timestamps, input phases and the latest observed connection word, and requires a new output directory per attempt. These harness additions have syntax checks but await a new PC trial.

For the next bounded input experiment, set `PROBE_CONFIRM=1` to press the ordinary confirm input once after entry. If that trace establishes a card prerequisite, compare `PROBE_CARD=none` with `PROBE_CARD=default` in separate fresh browser contexts. The latter permits the runtime's default memory-card behavior with empty browser storage; it does not import a card or establish that it is formatted. Keep the optional runtime slice off until the trace actually reaches module discovery or a custom bind. The updated acceptance also requires cancel to return, running audio with ring consumption, and no reported engine/page failure.
