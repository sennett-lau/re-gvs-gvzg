# Original Online Mode experiment

This isolated profile preserves original menu result `7`. It does not enable the local-Versus lockstep bridge or provide a network backend. Findings and acceptance limits belong in [chapter 08](../../docs/chapters/08-independent-clients.md#the-native-boundary-and-first-bounded-implementation).

`prepare.py` inserts bounded observation at 16 original labels across five generated units. It rejects multiplayer overrides and preserves every guest instruction. The observer records input-helper returns, connection fields, UI queue production/consumption, SIF entry/return and local RPC-end acknowledgements. These acknowledgements do not establish operation success. Keep raw output private under `.local/`.

Version 3 records guest-cycle timestamps, all four state bytes and changed values, with per-site hit counts. A 16,384-record post-menu cap has explicit drop reporting and independently bounded summaries. The earlier 1,024-record cap failed during fresh-card setup; that run remains a failed trace acceptance. Repeated service `0x80000400` call metadata and return/reply values are deduplicated per method, while first and changed values remain visible. Counters preserve calls, completions and suppressed repeats. This observes metadata and selected reply fields, not full request payloads. Custom service records are not deduplicated. A separate 128-record boot bucket covers only custom services `0x01270010` and `0x01270030`. Observed background CDVD/pad/service-zero traffic is counted after menu entry rather than exhausting the event budget. Earlier module startup remains outside full lifecycle coverage. The module diagnostic flag starts at menu entry and also logs IOP DMA starts in this runtime; tracing changes host overhead. No performance result is inferred.

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

The synthetic observer regression checks register/RAM preservation, changed-value suppression, bounded boot coverage, ambiguous reply correlation and cap/drop counters. It does not execute the game:

```sh
c++ -std=c++20 -Wall -Wextra -I poc/original-online -I vendor/ps2-web-recomp/runtime/include -I vendor/ps2-web-recomp/runtime/src tests/original-online/observer_test.cpp -o .local/observer-test
.local/observer-test 2> .local/observer-test.jsonl
```

Verify selected original words without executing the game:

```sh
python3 poc/original-online/verify_boundary.py --elf /private/SLPS_254.19 --irx /private/AVEWRAPM.IRX --output .local/original-online/static-boundary.json
```

After obtaining the PC slot, build from retained adaptive WASM objects:

```sh
python3 poc/original-online/build_probe.py --base .local/game-build --sdk /path/to/emsdk --work .local/online-observer-build
```

This is an incremental diagnostic, not a fresh-source reproducibility test. Use Emscripten `6.0.11` and a private cache. Add `--module-discovery` only for the optional runtime slice. Each work directory must be new. `web/build-info.json` records every linked object, both archives, inputs, observer/header, shell/build scripts, SDK tools, commands and output hashes. Retain the supported generated source tree; renderer unit `0099` is a new observer input.

Serve through the existing local game server, without `--netplay` or `--remote`, then run:

```sh
node tests/original-online/browser-probe.cjs http://127.0.0.1:8641/ .local/original-online/browser
```

Set `PLAYWRIGHT_MODULE` and `CHROME_PATH` for the test host. The harness uses browser output mute, keeps the audio engine active, blocks external page requests and disables app WebSocket/WebRTC construction. It records normal boot, original mode `7`, connection state, SIF metadata and ordinary cancel input. A passing reachability probe explicitly reports `network_success: false`.

The retained first trial used no card and neutral observation before cancel. It reached mode `7` but captured a black game area; no post-menu custom bind was recorded; the earlier observer did not cover boot-time custom services. Its event stream did not mark the cancel boundary. The updated harness records monotonic timestamps, input phases and the latest observed connection word, and requires a new output directory per attempt. The follow-up interactive-desktop trials exercised these additions: ordinary confirm reached state `2`, no-card prompted for a card, and a fresh default card reached the original NET-file creation prompt. See the canonical findings for exact phase timing and later setup results.

Set `PROBE_CONFIRM=1` to press ordinary confirm once after observing connection state `1`, substate `1`, with timer `CD1366` expired. Acceptance requires input mask `0x20` with the gate enabled, a nonzero confirm-helper return, and progression to connection state `2`. Main-menu and pre-confirm screenshots help distinguish rendering context from an original-mode UI problem. Guest-cycle and host-receipt timestamps remain distinct clocks.

Keep the baseline card setting for the confirm-only comparison. If that trace establishes a card prerequisite, compare `PROBE_CARD=none` with `PROBE_CARD=default` in separate fresh browser contexts. The latter permits the runtime's default memory-card behavior with empty browser storage; it does not import a card or establish that it is formatted. Keep the optional runtime slice off until the trace actually reaches module discovery or a custom bind. Cancellation is checked against the state-1 contract only while still in that state; later-state outcomes are retained separately. Acceptance also requires running audio with ring consumption, no trace-cap loss, and no reported engine/page failure.

After verifying the NET-file-missing prompt, `PROBE_CREATE_NET=1` confirms it at state `2` / substate `21`. `PROBE_NET_SLOT1=1` additionally confirms the observed slot-1 selection at substate `23`. Both require a fresh default card; slot selection waits for both original timers to expire. Export is attempted only into the ignored capture directory; absence of a saved card is recorded separately from game acceptance.

For subsequent observed prompts, `PROBE_CONTROL_FILE=/private/commands.json` enables an operator loop, defaulting to three minutes. `PROBE_OPERATOR_MS` may set 1,000–600,000 ms. Each command is `{ "id": 1, "action": "press", "code": "KeyX", "state_word": 136962 }`; use the current `operator-live.json` and screenshot, never a guessed state. Supported keys are confirm, cancel and arrows. Unknown commands, full state-word mismatches and input after trace loss are rejected. `{ "id": 2, "action": "finish" }` ends the loop. Inputs and before/after screenshots are retained; this interface never writes guest memory.

To replay only a previously exported isolated test card, set `PROBE_CARD=default`, `PROBE_CARD_FIXTURE=/private/fresh-test-card.ps2` and its exact `PROBE_CARD_SHA256`. Leave fresh-card creation flags unset. The harness uses the ordinary card-import UI before starting the game, verifies the file fingerprint, and records provenance. Never point this probe at a personal card.

`PROBE_BROADBAND=1` replays the six observed NET-load and broadband prompts with the fingerprinted fixture. It waits for exact state words, inactive UI activity and both expired timers before sending normal keys. An earlier run checked only timer6 and lost its network-menu confirm while timer4 remained active; that failure is retained. A bounded operator loop may follow the known sequence for new prompts.

The first observed runtime stop is the original network-settings editor calling `LoadExecPS2` for `NTGUIDVD/NTGDVDJ.BIN`. Verify its original call/return arguments and overlapping ELF ranges without executing it:

```sh
python3 poc/original-online/verify_handoff.py --elf /private/SLPS_254.19 --overlay /private/0117F000_MWO_2664CCF5.bin --target /private/NTGDVDJ.BIN --output .local/original-online/static-handoff.json
```

The target is a separate program; the current observer never converts that unsupported handoff into success. The fresh-card replay, exact halt, failed acceptance checks and next utility-only experiment are recorded in chapter 08.
