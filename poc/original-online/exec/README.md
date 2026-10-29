# Isolated original executable replacement experiment

This profile prepares original `LoadExecPS2` syscall 6 for a browser process switch. It is separate from the default host and the local-Versus bridge. The original game and `NTGDVDJ.BIN` always use different WASM modules and documents; their overlapping EE addresses never share a dispatch registry. Research findings remain in [chapter 08](../../../docs/chapters/08-independent-clients.md#the-native-boundary-and-first-bounded-implementation).

The portable tests exercise request capture, native stack unwind, lifecycle failures, exact arguments, card ownership and actual browser document/storage adapters. The browser round trip uses **synthetic documents**, not either executable. A real game → utility → game round trip has **not** been run with this profile. Full EE/IOP restart is an explicit experimental policy; it is not a claim of hardware `LoadExecPS2` equivalence. No configuration save, network connection or battle success is implied.

## Contract

1. Syscall 6 copies the live target, supplied count and every argument before changing any machine state. It records raw registers, syscall PC, thread and guest cycles. Only the exact genuine game/utility paths and opposite-image direction are accepted. Invalid pointers, non-ASCII bytes and payloads that SetupThread would truncate fail explicitly. Syscall 7 keeps its existing failure.
2. A typed C++ exception unwinds all guest-generated and nested-call frames to the outer `ps2::run()` host call. No old guest instruction resumes, no guest return value is fabricated, and no RAM/PC patch simulates success. Unknown targets also stop and report the actual error.
3. The storage profile supplies `extern "C" int ps2exec_checkpoint_card()`. The emulation thread invokes it after the unwind, with EE/IOP execution stopped. It must force all current card data to `/memcard/Mcd001.ps2`, check writes **and close**, and return zero only on success. A nonzero return is preserved. There is deliberately no default success stub. Upstream `flush_cards()` alone is insufficient: it delays 50 ticks, returns void and clears dirty before write success.
4. The main-thread callback exports the flushed MEMFS card. The parent commits it under a client-specific IndexedDB key, waits for transaction completion, and verifies SHA-256 through a new read transaction. A Web Lock covers the whole session, so a second tab cannot write that client's card. Child documents never mount IDBFS.
5. Only after durable readback does the parent terminate the old document's pthread workers, close its AudioContext, remove the iframe, and create the successor. Fresh WASM memory discards all EE/IOP/device/overlay/host state. The new document validates the actual preloaded ELF digest and imported card bytes before boot. Its startup receipt confirms the imported host arguments. A separate bounded, read-only first-SetupThread record captures the actual guest argc/argv after the original kernel copy; real proof requires that record too.

The original supplied argument vector is preserved without interpretation. The executable pathname is prepended once at boot. Game → utility supplies `[game_path, "1"]`, producing `[utility_path, game_path, "1"]`; the helper's normal return supplies `["1"]`, producing `[game_path, "1"]`. Nothing guesses the meaning of `1` or forces a menu state.

## Prepare and integrate

`build_profile.py` composes the native-storage owner's `prepare(tree)` with these overrides in a new copied runtime, compiles the changed sources, and links one executable. It does not edit either builder or the storage source. The game path retains the adaptive base and adds the original mode-7 observer; the utility path verifies original seed coverage and maps objects by full source path so the EE and IOP `kernel.cpp` cannot be confused.

```sh
python3 poc/original-online/exec/build_profile.py --image game \
  --base /private/game-build --sdk /private/emsdk --work .local/exec-game
python3 poc/original-online/exec/build_profile.py --image utility \
  --base /private/netutility-quiet --sdk /private/emsdk --work .local/exec-utility
```

Use `--prepare-only` to validate inputs and create a complete source/command/fingerprint plan without running the compiler. It labels the output `prepared-not-built`; a completed link is labeled `built-not-runtime-tested`. The game base must have the `full-game-adaptive` profile and original retained archives/objects. The utility base must contain all recorded standalone source/object files, not only a browser package. Every retained object and compiled input is fingerprinted; a failed command is preserved in `build-info.json`. Request the PC slot before running an actual build.

Keep all prepared sources, original binaries and build outputs under a new ignored `.local/` directory. On the allocated build host, call `prepare.py` separately for each module:

```sh
python3 poc/original-online/exec/prepare.py --image utility \
  --kernel /private/utility-source/runtime/src/kernel.cpp \
  --host /private/utility-source/host/web.cpp \
  --elf /private/NTGDVDJ.BIN --output .local/exec-utility-overrides
python3 poc/original-online/exec/prepare.py --image game \
  --kernel /private/game-source/runtime/src/kernel.cpp \
  --host apps/game/src/web.cpp \
  --elf /private/core.elf --output .local/exec-game-overrides
```

Preparation checks the original ELF digest and every replacement anchor before creating output. It writes only override files and a fingerprinted `exec-preparation.json`. Both the pinned generic host and the app host are covered by preparation tests. Use the storage owner's prepared kernel when it contains other required runtime changes; source drift fails instead of silently discarding them.

For **each separate executable**:

- Compile the prepared `kernel.cpp` and `web.cpp`, plus this directory's `runtime.cpp` and `web_notify.cpp`, with the ordinary Emscripten 6.0.11 profile and exception flags. Add this directory to include paths and define `ORIGINAL_EXEC_IMAGE="game"` or `ORIGINAL_EXEC_IMAGE="utility"`. Do not define `PS2_MULTIPLAYER`; the bridge rejects it.
- Link those objects in place of the old kernel/host, and link the checked storage checkpoint implementation. Avoid duplicate objects; place replacements before archives where appropriate. Keep all other required game compatibility/generated code and the utility's observed translation seeds. Never link both executable dispatch tables into one module.
- Use the prepared `frame.html` as `--shell-file`, preload that module's genuine ELF at `/game/core.elf`, and preserve existing required function exports. Add `FS,PThread,callMain,HEAPU8` to `EXPORTED_RUNTIME_METHODS`. Retain pthreads, shared memory and JSPI. This profile does not use a saved machine state.
- Copy `frame.mjs`, `session.mjs` and `audio-worklet.js` beside each module's output. For the game, use original mode 7 sources without the multiplayer menu override. The utility uses its own generic host and contains no game address hooks.
- Preserve complete source/toolchain/object/output fingerprints and the link command. Check archive selection actually uses the new syscall/host objects; a source manifest alone does not prove the linked WASM contains them.

Use `assemble.py` to verify both built output manifests and copy their hashed outputs into one new ignored site directory:

```sh
python3 poc/original-online/exec/assemble.py --game .local/exec-game/web \
  --utility .local/exec-utility/web --output .local/exec-site
python3 scripts/game/serve.py --disc /private/disc.iso --build .local/exec-site --port 8647
```

The root `index.html` is the parent harness; modules live at `game/index.html` and `utility/index.html`. The same loopback server supplies `/disc.iso` with range reads and COOP/COEP headers. Keep the disc outside the site. The harness checks the selected disposable card's supplied SHA-256, assigns a fresh client namespace, and exposes lifecycle observations through `window.originalExec.events`. A manual stop aborts the current machine and retains the **last handoff checkpoint**; it does not claim a final save.

The standalone utility builder and existing utility-browser harness are intentionally unchanged. The coordinator must compose their tested storage profile with these overrides and build both modules; this directory does not claim an unrun WASM link. Launch every test browser with `--mute-audio`. Automated tests may additionally use `--autoplay-policy=no-user-gesture-required` so each successor's AudioContext can start. While a guest runs, audio and ring consumption remain active; teardown closes audio only after execution has stopped. Do not use the default game mute button to measure timing.

## Portable validation

```sh
python3 -B -m unittest discover -s poc/original-online/exec -p '*_test.py'
node --test poc/original-online/exec/session.test.mjs
c++ -std=c++20 -Wall -Wextra -Werror -I poc/original-online/exec \
  poc/original-online/exec/request_test.cpp -o .local/exec-request-test
.local/exec-request-test
c++ -std=c++20 -Wall -Wextra -Werror -DORIGINAL_EXEC_IMAGE='"game"' \
  -I poc/original-online/exec -I vendor/ps2-web-recomp/runtime/include \
  poc/original-online/exec/runtime.cpp poc/original-online/exec/runtime_test.cpp \
  -o .local/exec-runtime-test
.local/exec-runtime-test
PLAYWRIGHT_MODULE=/path/to/playwright CHROME_PATH=/path/to/chrome \
  node poc/original-online/exec/browser.test.cjs .local/exec-browser-new
```

The native runtime test uses mock storage and a mock main-thread publisher to verify the real capture/unwind/error path. The browser test uses synthetic card bytes only inside its synthetic host. It verifies real IndexedDB readback, distinct client keys, an exclusive writer lock, two document replacements and exact arguments; the actual frame module rejects a fake ELF. Neither test writes synthetic settings into a running game.

## First real acceptance run

After the storage owner grants the PC slot and the checked checkpoint hook is linked, replay the known fresh NET-card fixture through the original mode 7 network-settings confirmation. Require the live game syscall 6 target/count/strings, helper SetupThread argc 3, and continued original UI/audio. Use the helper's ordinary cancel/back path, observe its syscall 6 back to the exact game path with supplied argument `1`, then require fresh game SetupThread argc 2 and normal returned behavior. Retain every original error and failed attempt.

`probe.cjs` prepares that real test: it verifies the supplied fixture fingerprint, mutes Chrome output, blocks external application connections, replays captured normal inputs through the original settings warning, then provides a bounded operator loop for the unverified helper cancel path. It does not automatically guess helper prompts. Set `PLAYWRIGHT_MODULE`, `CHROME_PATH`, `PROBE_CARD_FIXTURE`, `PROBE_CARD_SHA256`, and `PROBE_CONTROL_FILE`, then run `node poc/original-online/exec/probe.cjs http://127.0.0.1:8647/ .local/exec-run-new`. Operator commands are `{ "id": 1, "action": "press", "image": "utility", "generation": 2, "code": "KeyZ" }`; inspect `operator-live.png` and its JSON before each input. Changed image/generation rejects the command. The probe requires both original syscall PCs, exact captured and actual SetupThread arguments, unchanged card hashes for this cancel-only run, running/consuming audio in all three generations, and a normal game return. Its syntax has been checked; its real-image sequence remains unrun until PC validation.

For each direction retain UTC timestamps, guest-cycle records, input phases, source/WASM/ELF/card hashes, document generations, stopped/disposed/started receipts, and audio-ring samples. An unchanged card should match bit-for-bit across both checkpoints; a changed card requires actual utility writes and a subsequent original readback. Keep raw cards, screenshots, captures and reports under `.local/`. A failed flush, unknown target, missing callback, stop timeout, digest mismatch or subsequent runtime gap must remain a failure, not a successful handoff or Online Mode result.
