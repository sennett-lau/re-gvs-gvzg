# Original Online network candidate

This directory contains an executable private backend, a browser byte transport,
and an opt-in runtime adapter for the original AVETCP client. It does not use
local-Versus mode4, controller replication, or a replacement session protocol.
The original game has **not yet authenticated or reached a lobby or battle**
through this candidate.
Actual game captures show original module/device discovery, an Ethernet DHCP
handshake and accepted lease, and guarded execution of original DNAS code.
Capture16 reaches a DNS gateway exchange and two original DNS callbacks, then
halts when the browser bridge rejects the host-open submission with internal
`EINVAL`. An isolated test in the same Chromium build reproduces rejection of
the shared hostname buffer by `TextDecoder`; the bridge now copies the validated
hostname bytes before decoding. That isolated test does not establish a successful
original TCP connection, DNAS authentication, account login, lobby or battle.
Backend protocol tests, a real threaded WASM bridge test, and selected original
IRX instruction tests cover different boundaries; none establishes two game
instances reaching a lobby or battle.

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
the intended arrangement, with actual-client recovery behavior still unproved.
The private per-client ARP/DHCP segment supplies Ethernet bootstrap separately;
successful DHCP alone does not prove any original transport service request.

Deployment is currently **loopback-only**, optionally reached through an
explicitly authorized private tunnel. A private machine can host these services;
a paid cloud server is not intrinsic to the design. General remote hosting would
require a reachable persistent gateway/backend and origin, TLS and access
configuration. Public hosting is not implemented by this candidate, and a static
web host alone cannot provide its long-lived protocol sockets.

## Private backend

`prepare_backend.py` builds inada-s/zdxsv revision
`35ffbdad9257eca5043bb4977d26cc07468b5045` from the exact archive SHA256
`51ca60ad9cbcf735e1d769dae1501be46494392eebaa8f4e195e8241d133a1eb`.
Obtain the public archive without credentials, retain it privately, and use fresh
output directories:

```sh
python3 poc/original-online/network/prepare_backend.py \
  --archive /private/zdxsv-source.tar.gz --work /private/backend-build
python3 poc/original-online/network/run_backend.py \
  --build /private/backend-build --state /private/backend-run \
  --base-port 18800 --origin http://127.0.0.1:8000
```

The launcher creates a new SQLite database and private capability file, validates
the built binaries, and verifies its own listeners against the expected loopback
TCP/UDP set. It never reuses or deletes a prior database. Stop it with SIGTERM or
Ctrl-C. Keep the capability file private; do not commit generated source trees,
databases, keys, game assets, IRX inputs, cards, or captures.

The staged upstream changes are recorded with before/after hashes:

* Listener sites retain `127.0.0.1` instead of upstream `stripHost` widening.
* Lobbies 3 and 4 use the ordinary text description handler. Their optional
  upstream description handlers inject executable R5900 code, which is not
  translated by this static client profile.
* The separate capability-protected Go gateway provides TCP streams and DNS UDP
  datagrams only to configured loopback destinations.

The upstream module requires Go 1.25; a Go installation with toolchain selection
can obtain that version. Its source and license remain in the private build.
Protocol probe encoding is derived from upstream AGPL code and is marked as such.

Services at base port `B` are lobby `B`, STUN/RPC `B+1`, STUN test `B+2`, API `B+3`,
login `B+4`, battle `B+10`, gateway `B+20`, DNAS `B+43`, and DNS `B+53`.
The gateway is the browser's sole network endpoint. DNAS carries the original
SSLv2-format hello/TLS1.0 bytes unchanged; its `/00000020/` path serves the login
proxy. No external HTTPS fallback, GGPO relay, or operations service is configured.

## Runtime composition

`prepare_runtime.py` exports `prepare(copied_upstream_tree)`. It changes only the
copied IOP `cpu.cpp` and `kernel.cpp`, and supplies three additional compiled
sources: `native_transport.cpp`, `transport_bridge.cpp`, and `sha256.cpp`.
The returned manifest lists all source overrides, JS files and required runtime
exports. The exec owner can compose it through the explicit `--network-prepare`
option. Default builds and the utility document keep networking disabled.

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
work; the current game capture passes DHCP and reaches the DNS route before
failing host-open admission. It has not established an original TCP connection.

## Executable checks

Each probe requires a fresh private evidence directory and records success or
failure, timestamps, and relevant fingerprints. Keep failed attempts too.

```sh
node poc/original-online/network/wasm_open_probe.mjs /private/wasm-open-evidence
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

`run_native_contract.py` verifies and relocates the private original IRX, then
executes selected original instructions with the real IOP interpreter. Its host
transport, scheduler and OS imports are deterministic substitutes. It tests actual
blocking `4118` success/cancel return, wait-record cleanup, original `DECC`, guarded
completion and DNS callbacks, shutdown, RST cleanup and reconnect. It does not
prove full-runtime scheduling contention or actual original network bootstrap.

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
an actual TCP connection after its DNS exchange, followed by genuine
authentication and login. Then use two independent original instances with
separate account registrations and card namespaces to reach the same lobby and
complete a real mode7 battle. Do not clone account bytes or substitute mode4.
Preserve failure codes and request bytes in private evidence before changing any
uncovered contract.
