# Original Online network candidate

This directory contains an executable private backend, a browser byte transport,
and an opt-in runtime adapter for the original AVETCP client. It does not use
local-Versus mode4, controller replication, or a replacement session protocol.
Two independent original mode7 clients have reached an **active battle**
through this candidate, as two browser instances on one PC. Neither client used a
synthetic protocol client or mode4. The backend logs show this path:

1. DNAS `i-connect` and `others` requests.
2. The original browser's `GET /00000020/CRS-top.jsp`.
3. Account registration, then `POST /00000020/login`.
4. A lobby key-pair that matches each account's session.
5. Pilot creation, then auto-start in lobby 02 (エゥーゴ against ティターンズ).
6. Both clients joining the same central TCP battle relay.

Round completion, results posting, return to the room, deliberate disconnects
and reconnects have not been tested yet. Two physical devices have not been
tested either.

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
`51ca60ad9cbcf735e1d769dae1501be46494392eebaa8f4e195e8241d133a1eb`, together with
the gateway in `gateway.go`. Obtain the public archive without credentials and
retain it privately. `backendctl.py` packages that build as a persistent private
service. It reads one private JSON config; `backend.example.json` shows the fields.
Relative paths in the config resolve against the config file's directory:

```sh
cp poc/original-online/network/backend.example.json /private/backend/config.json
C="python3 poc/original-online/network/backendctl.py --config /private/backend/config.json"
$C build --activate          # builds/<utc>/ from source; 'build' links the active one
$C init                      # state/: new capability token (or --import-db/--import-gateway-config)
$C start                     # supervisor; returns after all listeners are verified
$C status                    # health; exit code 0 only when healthy
$C stop
$C activate <utc>            # switch to another builds/<utc> while stopped
```

The build uses `-trimpath` and records the Go toolchain, module list, source and
output hashes in `build-info.json`. Two builds of the same inputs in different
directories gave identical executables. The SQLite driver requires cgo, so cgo
stays at the Go default. With `CGO_ENABLED=0`, the server linked a stub driver and
silently created no database.

The staged upstream changes are recorded with before/after hashes:

* Listener sites retain `127.0.0.1` instead of upstream `stripHost` widening.
* Lobbies 3 and 4 use the ordinary text description handler. Their optional
  upstream description handlers inject executable R5900 code, which is not
  translated by this static client profile. Upstream `TestLobbyExplainHacks`
  asserts that injection and therefore fails on this build; the other lobby,
  battle and server tests pass.
* Log-only `[lobby-event]` lines record login, lobby and room entry and exit,
  faction entry, battle start, battle exit, after-battle room entry, saved battle
  results and connection close. Each line names the peer address, user and session;
  none contains the login key.
* A lobby connection that closes after a newer login of the same user keeps
  that newer session. Upstream `OnClose` removes the user by ID, so an old
  connection that closed late (EOF, the 2-minute receive timeout, or a lost
  tunnel) removed the re-logged pilot from its lobby. That pilot was then never
  matched: Lobby 02 logged `Failed to start battle`. The fix logs
  `[lobby-event] stale-close`. `stale_close_test.go` reproduces both cases with
  upstream test helpers; it fails without the fix, and the build runs it.
* The battle relay's read deadline is explicit. Upstream drops a battle peer
  after 10 s without received bytes, and that stays the default. The config key
  `battle_read_timeout` (a Go duration, passed as `ZDXSV_BATTLE_READ_TIMEOUT`)
  changes it, and the server logs the value in effect. The original client sends
  nothing while it loads a battle or a round, and it waits up to 3600 ticks for
  the slowest peer, so a healthy client can be silent for longer than 10 s.
  The client has no opponent-left message: a remaining client detects a silent
  peer itself after 540 ticks and ends with its own "peer lost" error. The relay
  therefore neither notifies nor closes the remaining peer. `04 F0 00 00`, which
  the relay treats as the end of a connection, is the client's keepalive on the
  post-battle result screens.
* The separate capability-protected Go gateway provides TCP streams and DNS UDP
  datagrams only to configured loopback destinations. It logs one line when each
  WebSocket opens and one when it closes. The close line records the listener
  label, duration, close reason, byte and message counts per direction, a
  histogram of gaps between messages, and the local address of its service
  connection. The service logs that address as its peer, which joins the two
  logs. It never logs payload bytes or the capability.

### Service layout

| Path under the config root | Content |
| --- | --- |
| `builds/<utc>/` | executables, `build-info.json`, `build.log`, `source/` |
| `state/` (0700) | `backend.db`, `token`, generated `gateway.json`, `provenance.jsonl` |
| `logs/` | `backend.log`, `login.log`, `gateway.log`, `supervisor.log`, `initdb.log`, `tunnels.jsonl`, `rtt.jsonl` |
| `run/` | `supervisor.pid`, `status.json`, tunnel control sockets |
| `runs/<utc>/` | per-start `run.json`, verified listener inventory, `backend.db.before` |

Logs are appended. Every start and stop writes a marker line naming the run. The
database persists across restarts, so registered accounts, pilots and battle
records survive. `start` refuses ports that are already in use and runs `initdb`
only when no database exists, because upstream `initdb` deletes the database
file. Readiness and `status` use the OS listener inventory and a read-only
database query; they do not connect to a game port. `status --users` also reads
the operator API `/lbs/status`, which sends nothing to game clients.

### Source and license

zdxsv is licensed under the GNU Affero General Public License version 3. Each
build keeps `source/LICENSE`, a `NOTICE`, `patches.diff` and a deterministic
archive of the complete patched source next to the executables. Provide that
source to anyone who receives the executables or uses the service over a network.
Protocol probe encoding is derived from upstream AGPL code and is marked as such.
The upstream module requires Go 1.25; a Go installation with toolchain selection
can obtain that version.

Services at base port `B` are lobby `B`, STUN/RPC `B+1`, STUN test `B+2`, API `B+3`,
login `B+4`, battle `B+10`, gateway `B+20`, DNAS `B+43`, and DNS `B+53`. The
config's `listeners` add labelled gateway ports; they must not collide with a
service port. The gateway is the browser's sole network endpoint. DNAS carries the
original SSLv2-format hello/TLS1.0 bytes unchanged; its `/00000020/` path serves
the login proxy. No external HTTPS fallback, GGPO relay, or operations service is
configured. `run_backend.py` remains the single-use launcher for throwaway probe
instances: it always creates a new database in a new directory.

### Other devices

Every service, including the gateway, listens on loopback only. Another device
reaches the gateway through an SSH reverse tunnel from the backend machine:

```sh
$C tunnel up <ssh-host>      # <ssh-host>: 127.0.0.1:<remote_port> -> 127.0.0.1:<listener port>
$C tunnel check <ssh-host>
$C rtt <ssh-host>            # gateway-only HTTP round trips; never during a capture
$C tunnel forward <ssh-host> --local 18647:8647   # add a loopback forward to the running tunnel
$C tunnel cancel <ssh-host> --local 18647:8647
$C tunnel down <ssh-host>
```

`tunnel forward` and `tunnel cancel` add or remove one more loopback-only
forward on an open tunnel without interrupting it. `--local L:R` maps this
machine's `127.0.0.1:L` to the device's `127.0.0.1:R`; `--remote R:L` maps the
device's `127.0.0.1:R` to this machine's `127.0.0.1:L`. Chaining the two can
serve one device's page server to another device through the backend machine.

The remote end binds only that device's `127.0.0.1`. The device's browser uses
`ws://127.0.0.1:<remote_port>/` as on the backend machine. Backend-advertised
lobby and battle addresses stay logical destinations that the adapter resolves
through the gateway. Give each device its own labelled listener so the gateway
log attributes its connections. Security limits:

* No service listens on a LAN or tailnet address. Only a process on a tunnelled
  device can reach the gateway, and the tunnel exists only while SSH access to
  that device is authorized.
* Each connection still needs the capability token and an allowed Origin. The
  gateway accepts only the `127.0.0.1` Host and reaches only configured loopback
  services.
* Traffic between machines is carried inside SSH. The gateway itself has no TLS
  and is not suitable for direct exposure or public hosting.

On 2026-10-31 the backend ran on a Mac, with tunnels to a Windows PC and to a
second Mac on the same tailnet (both direct LAN paths). Gateway HTTP round trips
on a reused connection had median times of 3.6 ms (PC) and 10.2 ms (second Mac).
A battle between those two devices has not been tested yet.

### Receipts

`backend_receipt.py` writes a passive receipt for one run window. It reads the
three logs and the database read-only, and it sends no traffic. It replaces every
known login key with a short hash:

```sh
python3 poc/original-online/network/backend_receipt.py --logs /private/backend/logs \
  --db /private/backend/state/backend.db --since 2026-10-31T00:30:00Z \
  --until 2026-10-31T02:00:00Z --run-id <run> --out /private/receipts/<run>
```

The receipt lists DNAS and login requests, lobby key-pairs, `[lobby-event]` lines,
`BattleInfo`, relay joins and leaves, `BattleResult` bodies, `battle_record` rows
created or updated in the window, disconnects, gateway connection statistics and
errors. A `checks` object summarizes them. `battle_connections` joins each relay
address to its session and user (from `BattleInfo`), its device listener, and
its gateway statistics. Repeat `--client LABEL=USER` (for example `A=P899XG`) to
group each client's lobby events, battle connections, results and
`battle_record` rows when several clients share one device.

### Restart and disconnect behavior

These results come from the backend logs, throwaway server instances and static
analysis of the original client. How the original clients react to a backend
restart or a closed opponent has not yet been observed in a game run.

* **Restart.** On 2026-10-31, `stop` followed by `start` took 1-3 s. The
  database, capability token and device tunnels were unchanged. Lobby users,
  rooms, pending battle allocations and after-battle entries are kept in memory and
  are lost. Every lobby and relay connection closes. A result that arrives after a
  restart is still saved to `battle_record`, because the lookup uses the database.
  The returning client then receives the ordinary pilot list instead of its
  after-battle entry.
* **Same pilot logs in again.** Covered by the stale-close fix above. Without it,
  the old connection's late close removed the new session.
* **Opponent leaves during a battle.** The relay frees the leaving peer's slot and
  sends nothing to the remaining peer. The original client has no opponent-left
  message. It counts each peer's silence and, after 540 ticks, ends with its own
  "peer lost" error, keeps the result, and leaves the battle. Closing the
  remaining peer's socket instead would produce a different client error.
* **Silent client.** The relay drops a peer after the read deadline above,
  10 s by default. A client that is still loading or waiting at the ready barrier
  sends nothing during that time.
* **Tunnel loss.** The backend machine's SSH client gives up after four
  unanswered 15 s keepalives and closes every forwarded connection; the services
  then see EOF. `tunnel up` replaces a dead master's stale control socket. Loss
  without any TCP close (for example a sleeping device) has not been tested. The
  device's SSH server may hold the old listener until it notices the dead session.

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
