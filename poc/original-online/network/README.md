# Original Online network candidate

This directory contains a browser byte transport and an opt-in runtime adapter
for the original AVETCP client. The private backend is in
[`apps/server/`](../../../apps/server/README.md). It does not use
local-Versus mode4, controller replication, or a replacement session protocol.
Two independent original mode7 clients play complete sessions through this
candidate: registration, login, lobby, pairing, battle, results and the return
to the lobby. This works with both clients on one PC and with one client on a PC
and one on a MacBook Pro. Neither client uses a synthetic protocol client or
mode4. The backend logs show this path:

1. DNAS `i-connect` and `others` requests.
2. The original browser's `GET /00000020/CRS-top.jsp`.
3. Account registration, then `POST /00000020/login`.
4. A lobby key-pair that matches each account's session.
5. Pilot creation, then auto-start in lobby 02 (エゥーゴ against ティターンズ).
6. Both clients joining the same central TCP battle relay.
7. Each client's result, the after-battle room and the lobby map.

Disconnects, rejoins and backend restarts follow the original client's own
recovery paths. The stability results are in
[chapter 08](../../../docs/chapters/08-independent-clients.md#stability-evidence).

The login request appeared only after a runtime fix: an EE thread whose entry
function returns now ends as `ExitThread`. Before the fix, the libhttp open worker
stayed runnable at the idle address and starved its equal-priority supervisor.
Missing cross-image dispatch entries were also added: browser.bin zlib and two
functions in the post-registration state machine, plus the core zlib
allocator thunks. Both changes are exec-owned opt-in profiles.

Earlier captures reached module/device discovery, Ethernet DHCP, DNS and the
DNAS TCP connection. The shared-hostname decoder fix and the completion-stub
address fix described below enabled those steps. Backend protocol tests, the
threaded WASM bridge test and the original IRX instruction tests each cover a
separate boundary.

## Intended service path

This integration requires both the modified web runtime and a running compatible
backend. Each independent instance runs and renders its own original mode7 client.
Its original AVETCP operations pass through the runtime adapter, browser
WebSocket and private gateway to the configured services. The backend handles
authentication/login, lobby and room sessions, battle allocation, and battle
packet relay; it does not emulate the game or stream rendered video.

The current battle route uses a **central TCP relay throughout the battle**.
Original command `0x6916` obtains the battle address and port from the lobby;
the original client then opens that TCP destination through AVETCP `0x4110`.
The compatible backend associates each connection with its allocated session and
forwards complete battle frames to the other participants. Both clients' gateway
connections and the battle relay must remain available. Their battle payloads
are carried unchanged; their full gameplay meaning has not been decoded here.
The reference's optional zproxy UDP/P2P and emulator GGPO paths are not enabled
by this adapter.

DNS and DNAS/login support bootstrap and authentication. Lobby/session services
support room setup, battle allocation, and post-battle or reconnect operations.
They are not shown to be queried on every battle frame; the active battle byte
path is the gateway and TCP relay. Running the complete backend continuously is
the intended arrangement. Restart and disconnect results are in the server README.
The private per-client ARP/DHCP segment supplies Ethernet bootstrap separately;
successful DHCP alone does not prove any original transport service request.

Deployment is currently **loopback-only**, optionally reached through an
explicitly authorized private tunnel. A private machine can host these services;
a paid cloud server is not intrinsic to the design. General remote hosting would
require a reachable persistent gateway/backend and origin, TLS and access
configuration. Public hosting is not implemented by this candidate, and a static
web host alone cannot provide its long-lived protocol sockets.

## Private backend

The backend (patched zdxsv build, gateway, supervisor, receipts, tunnels, and the
restart and disconnect results) is documented in
[`apps/server/README.md`](../../../apps/server/README.md).

## Runtime composition

`prepare_runtime.py` exports `prepare(copied_upstream_tree)`. It changes only the
copied IOP `cpu.cpp` and `kernel.cpp`, and supplies three additional compiled
sources: `native_transport.cpp`, `transport_bridge.cpp`, and `sha256.cpp`.
The returned manifest lists all source overrides, JS files and required runtime
exports. The exec owner can compose it through the explicit `--network-prepare`
option. Default builds and the utility document keep networking disabled.

`prepare(tree, quiet_trace=True)` (CLI `--quiet-trace`) composes the long-run
trace mode. The adapter then counts per-call API, submit, successful completion
and completion-scheduling events instead of printing them. It prints one counters
line per window of at least 10 s and one at reset. Lifecycle, DNS, stale-completion,
unsupported-operation and error lines, including negative completions, still print.

Install on the **main document thread**, before `callMain`:

```js
const bridge = installOriginalOnlineBridge(Module, {
  gatewayURL: `ws://${privateConfig.listen}/`,
  token: privateConfig.token,
  endpoints: privateConfig.endpoints
});
// At teardown, before terminating emulator workers:
bridge.reset();
```

Export `HEAPU8` through `EXPORTED_RUNTIME_METHODS`. Native submit/poll methods use
`MAIN_THREAD_EM_ASM_INT`, because the emulator runs with `PROXY_TO_PTHREAD`.
Network I/O stays asynchronous; Promise callbacks never execute guest code or
write guest RAM. A ticket is consumed once. Reset invalidates old requests and
closes transports. Save-state operations are explicitly unavailable in this
experimental profile.

Host-open validation bounds the hostname span to 1–253 bytes before copying it
out of shared WASM memory. Fatal UTF-8 decoding and the existing port, timeout and
destination checks remain in force; copying does not authorize a new destination.

If the browser runs on another private machine, use an explicitly authorized
loopback tunnel for the gateway port. Backend-advertised lobby/battle addresses
are logical destinations resolved by the adapter, so those listeners need not be
exposed. Match the browser's actual Origin in the gateway configuration. No tunnel
is automatically created by these tools.

## Original boundary and ownership

Raw AVETCP input SHA256 is checked inside the copied `load_module_buffer`, before
relocation. Only a base authorized by the exact original input may register the
hook. Non-relocated instruction signatures are also checked at registration.
An unknown build or owned operation stops with a specific diagnostic. Unowned
original operations pass through.

| Boundary | Candidate behavior |
| --- | --- |
| `avetcp` ordinal4 / `0x4105` | Original API dispatch and interface operation; never treated as a socket connect |
| Active open `CE88` | Original allocator, bind, configuration and initialization run; ownership begins at `B3D4` with caller `CF5C` |
| TCP state2 → state4 | State4 commits under the original inner semaphore only after a real host connection completes |
| Runtime completion stubs | Exact allocated control/reset addresses may lie below the module; thread, socket serial and operation epoch guards remain in force |
| `D9C8` / `DCD8` | Selected original send/receive descriptors; unchanged upper API wait records and blocking caller logic |
| `105EC` / `10BC0` | Original completion helpers run on scheduler threads with captured GP/priority, inside original `12490` / `124B8` guard calls |
| `A7CC` | Actual buffered host byte count for owned sockets, including data remaining before EOF |
| Cancellation `DECC` | Original `-14` completion; queued adapter work invalidated by operation epoch before guarded guest entry; submitted write bytes may still arrive and the TCP connection stays usable |
| Packet/timer ownership | Owned packet output uses the host socket; state2 original timeout remains; established packet timers are excluded per owned socket |
| Shutdown/full close | Original close machine runs; host write-half close preserves incoming bytes; full-close cleanup uses original `AD44` after both host halves end and pending completions finish |
| Established RST | Frame-compatible trampoline enters original `7D00`, preserving event notifications, `-6` completions, cleanup and existing error byte |
| `AD44` | Connection cleanup is distinguished from descriptor release; retained allocated descriptors remain transport-owned and can reconnect |
| DNS `139BC` / `137CC` | Original outgoing packet copied to real private UDP; original phase0/phase1 callbacks receive it under guard; original ticket workspace, parser, retry and guest-clock deadlines remain |

The host OS owns TCP retransmission and TIME_WAIT. `CloseWrite` acceptance is not
reported as a remote packet ACK. This is a socket lifecycle adapter, with explicit
packet-level timing differences. Unknown host errors, unsupported descriptor
types or send flags, passive TCP accepts and other unimplemented owned operations
remain limitations requiring actual-client traces. Original device discovery,
DEVGLUE/DEV9/SMAP bootstrap and saved settings are separate runtime integration
work; the current game capture passes DHCP and DNS and establishes the host TCP
connection, but the retained observation has no original TLS transmission.

## Executable checks

Each probe requires a fresh private evidence directory and records success or
failure, timestamps, and relevant fingerprints. Keep failed attempts too.
`/private/backend-run` is a throwaway instance from `apps/server/run_backend.py`,
and `/private/backend-build` a build from `apps/server/prepare_backend.py`.

```sh
node poc/original-online/network/wasm_open_probe.mjs /private/wasm-open-evidence
node --unhandled-rejections=strict poc/original-online/network/cancellation_probe.mjs /private/cancellation-evidence
node poc/original-online/network/protocol_probe.mjs /private/backend-run /private/protocol-evidence
node poc/original-online/network/transport_probe.mjs /private/backend-build/gateway /private/transport-evidence
node poc/original-online/network/adapter_probe.mjs /private/backend-run /private/adapter-evidence
node poc/original-online/network/wasm_host_probe.mjs /private/backend-run /private/wasm-host-evidence
node poc/original-online/network/dns_probe.mjs /private/backend-run /private/dns-evidence
node poc/original-online/network/dnas_gateway_probe.mjs /private/backend-build/zdxsv /private/backend-run /private/dnas-evidence
python3 poc/original-online/network/run_native_contract.py \
  --avetcp /private/NETMOD_AVETCP.IRX --work /private/native-contract-evidence
```

The protocol probe uses backend-issued distinct accounts and sessions, all 25
lobby descriptions, a named room, battle allocation, bidirectional fragmented
battle frames, rejection/EOF and reconnect/logout. Its battle bytes are synthetic,
not gameplay. The DNAS probe runs upstream's synthetic PS2 TLS client through the
real JS/WebSocket/TCP path.

The offline host-open probe uses shared WASM memory, records adapter submissions,
and requires decoder input to be nonshared. It checks byte preservation, bounds,
fatal UTF-8 errors and updated memory views without opening a socket. Node's own
decoder accepts shared views, so the Chromium reproduction is separate evidence.

The offline cancellation probe uses fake sockets to check pending TCP and DNS
handshakes, cancel/discard/reset, abort races, explicit timeout errors, listener
cleanup and normal byte transfers. Cancellation closes a connection attempt
before its gateway handshake completes, including when no host timeout is set.
Canceling an issued read or write preserves the established stream; bytes already
submitted cannot be recalled. These checks make no backend or original-client
connection.

`run_native_contract.py` verifies and relocates the private original IRX, then
executes selected original instructions with the real IOP interpreter. Its host
transport, scheduler and OS imports are deterministic substitutes. It tests actual
blocking `4118` success/cancel return, wait-record cleanup, original `DECC`, guarded
completion and DNS callbacks, shutdown, RST cleanup and reconnect. It does not
prove full-runtime scheduling contention or actual original network bootstrap.
The complete contract runs with small runtime allocations both above and below
the module base. Unrelated lower addresses, neighboring stub instructions and
the exact control stub in an unrelated thread cannot commit the connected state.

`run_sif_latency_tests.py --work /private/sif-latency-evidence` checks an opt-in
candidate for the DNAS stall in which the browser's request never leaves (B34).
In the vendored runtime, an HLE RPC server replies inside the EE's SIF command. A
synchronous RPC therefore never gives the EE to a lower-priority thread. The
original browser's priority-63 HTTP worker only runs while its higher-priority
threads wait for such replies. `sif_latency_prepare.py <copied tree> --latency-us N`
edits only a copied `runtime/src/iop/sif.cpp`. It has no default value. Every
IOP-to-EE packet then reaches EE RAM no earlier than N us after it was queued, in
the original order. The retry uses `hw::kEventIop`, which the runtime declares but never uses;
the preparer refuses a tree that uses it. The save-state format is unchanged.
Packets restored from a state are due at once.

The check links the real `sif.cpp`, vendor and prepared at 50 and 100 us, and
drives EE commands through `sif::set_dma`. Each saved state is byte-identical to
the vendor state. A model with the vendor EE kernel gives the worker no EE time
when replies arrive with no latency, 6 ms/s at 50 us and 12 ms/s at 100 us; it
assumes two synchronous RPCs per frame. The delay also applies to CD, file and
asynchronous replies.

On 2026-10-31 two builds from one commit were compared on the second Mac, where
the stall recurs. The builds differed only in `--sif-latency-us 100`. Each run
started two clients, which logged in and stopped on the lobby map. The control
and latency runs alternated, and both used the same backend build and the same
direct tailnet listener.

| Build | Runs | Logins | Logins with a stalled DNAS connection |
|---|---|---|---|
| Control | 4 | 8 | 7 |
| 100 us latency | 5 | 10 | 0 |

The one-sided Fisher exact p is 0.00025. The receipts' `dnas_stalled` counts
matched the adapter's idle reports for every client.

* Each stalled login got through 10-34 s after the service closed the stalled
  connection, 89-301 s after the run's first DNAS request.
* With the latency, every client reached the lobby 24-27 s after the run's first
  DNAS request.
* The clients' own timings showed the same load time before DNAS in both builds.

In capture56 the PC played one full match with the same 100 us build. The relay
saw 19.3 frames per second in each direction, longest gaps of 1.7-2.0 s, and
results with no battle error. This matched capture39 and capture41 without the
latency. The clients reported the same battle load time, frame pacing and audio
consumption.

`threaded_bridge_probe.cpp` with `threaded_bridge_pre.js` is a small real Emscripten
`-pthread -sPROXY_TO_PTHREAD=1 -sPTHREAD_POOL_SIZE=1 -sENVIRONMENT=node`
test. Build it with `transport_bridge.cpp`, `--pre-js threaded_bridge_pre.js`,
`-sEXPORTED_RUNTIME_METHODS='["HEAPU8"]'`, and `-sEXIT_RUNTIME=1`. Set
`ORIGINAL_ONLINE_SMOKE_CONFIG` to the private gateway JSON path and
`ORIGINAL_ONLINE_HOST_MODULE` to the absolute file URL of `wasm_host.mjs`, then
run the generated CommonJS file with the lobby port argument. It verifies the real
worker/main-thread boundary against actual TCP and UDP services.

Actual game testing must use a muted browser while the AudioContext and ring
consumer continue. The next acceptance step is original DNAS execution reaching
its connected state and transmitting the TLS handshake, followed by genuine
authentication and login. Then use two independent original instances with
separate account registrations and card namespaces to reach the same lobby and
complete a real mode7 battle. Do not clone account bytes or substitute mode4.
Preserve failure codes and request bytes in private evidence before changing any
uncovered contract.
