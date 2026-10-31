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
  logs. It never logs payload bytes or the capability. On SIGTERM or SIGINT it
  closes every open connection with reason `gateway-stop`, waits up to 2 s for
  their close lines and exits. The supervisor stops the gateway before the other
  services, so no service EOF reaches a browser during a stop. The adapter
  reports a closed WebSocket as a reset either way.

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

Another device reaches the gateway in one of two ways. Both are private.
Every service other than the gateway still listens only on loopback.

**Direct tailnet listeners (default for play between devices).** The config's
`tailnet_listeners` maps a label to a port and the tailnet addresses of the peers
allowed to use it. The gateway binds that port only to this machine's tailnet
address. It is never bound to `0.0.0.0` or a LAN address. Connections from
any address not in the list are closed at accept. Both the listener address
and the peer addresses must be in Tailscale's shared range (CGNAT, the /10 that
starts at 100.64). The device's
browser uses `ws://<this machine's tailnet address>:<port>/`. The Host header
must equal that listener address. The capability token and the allowed Origins
are still required. The gateway still reaches only the configured loopback
services. Each game connection is its own TCP flow over the tailnet, so a lost
packet delays only that flow. When each WebSocket closes, the gateway logs the
kernel's TCP statistics for it: smoothed RTT and variance, retransmitted bytes
and packets, out-of-order bytes (macOS only).

**SSH reverse tunnel (fallback).** `tunnel up` binds only the device's own
`127.0.0.1`. That device then uses `ws://127.0.0.1:<remote_port>/`, as on the
backend machine. Give each device its own labelled loopback listener so that
the gateway log attributes its connections:

```sh
$C tunnel up <ssh-host>      # <ssh-host>: 127.0.0.1:<remote_port> -> 127.0.0.1:<listener port>
$C tunnel check <ssh-host>
$C rtt <ssh-host>            # gateway-only HTTP round trips; never during a capture
$C tunnel forward <ssh-host> --local 18647:8647   # add a loopback forward to the running tunnel
$C tunnel cancel <ssh-host> --local 18647:8647
$C tunnel stats <ssh-host>   # passive TCP statistics of the tunnel's SSH transport
$C tunnel down <ssh-host>
```

`tunnel forward` and `tunnel cancel` add or remove one more loopback-only
forward on an open tunnel without interrupting it. `--local L:R` maps this
machine's `127.0.0.1:L` to the device's `127.0.0.1:R`; `--remote R:L` maps the
device's `127.0.0.1:R` to this machine's `127.0.0.1:L`. Chaining the two can
serve one device's page server to another device through the backend machine.

Backend-advertised lobby and battle addresses remain logical destinations. The
adapter resolves them through the gateway in both modes. Security limits:

* No service listens on a LAN address, and nothing is reachable from outside the
  tailnet. Tailnet listeners accept only listed peer addresses, which WireGuard
  authenticates per device key. A tunnel exists only while SSH access to that
  device is authorized.
* The gateway has no TLS of its own. Traffic between machines is encrypted by
  WireGuard or SSH. The gateway is not suitable for public hosting.

**Deployment requirement: no shared TCP stream for lockstep traffic.** The
battle relay runs in lockstep, so every client waits for every other client's
frames. An SSH tunnel carries every connection of its device in one TCP stream.
Any packet lost on that stream therefore delays every battle frame of every
client on the device until TCP retransmits. In capture31 both clients ran on a
Mac that used Wi-Fi on a different routed subnet. Each client's frames took a
median of 17 ms to reach the other client, but the 90th percentile was 785 ms
and the 99th 1161 ms. That was in every minute of the run, and the game clock
advanced about five times slower than in capture28. capture28 and capture29 used
the same tunnel; there the 90th percentile was 17 ms. By the end of capture31,
the backend machine had retransmitted 6.3% of the bytes it had sent on that
tunnel's transport since the tunnel opened. Use direct tailnet listeners for
play between devices, and prefer wired links. `tunnel stats` records the
transport's retransmitted and duplicate bytes and its smoothed RTT (macOS
`nettop`, no traffic sent).

On 2026-10-31 the backend ran on a Mac, with tunnels to a Windows PC and to a
second Mac on the same tailnet (both direct LAN paths). Gateway HTTP round trips
on a reused connection had median times of 3.6 ms (PC) and 10.2 ms (second Mac).

The same day, one client on the PC and one on the second Mac played a full
match in both modes:

* capture35 used the direct tailnet listeners.
* capture36 used the SSH tunnels.

In both captures each client logged in and was matched in Lobby 02. Each relay
session ended through the original end path. Both clients then posted the
match's result with no battle error, and `battle_record` stored both answers.
Both modes gave the same match pacing:

| | Direct listeners (capture35) | SSH tunnels (capture36) |
|---|---|---|
| Relay frames per second, each direction | 18.8-18.9 | 18.5-18.6 |
| Longest gap between frames | 1.7-2.1 s | 1.7-2.0 s |
| Gaps of 200 ms or longer, each direction | 1-3 | 1-3 |
| Retransmissions on the connections | none (kernel smoothed RTT 22 ms and 9 ms) | 604 bytes on the PC's tunnel transport, none on the Mac's |

These were LAN paths with little loss, so the head-of-line delay described above
did not appear.

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
its gateway statistics. `dnas_stalled` lists DNAS connections that stayed open for
10 s or more. A completed DNAS exchange takes under 1 s. In a stalled one the client
sent no bytes (`no-handshake`), only its first TLS handshake message
(`handshake-incomplete`), or a completed handshake without a request (`no-request`)
before the service closed it. This is how the stalled DNAS request (B34) appears on
the backend. `tunnel_tcp` reports each tunnel's retransmitted and
duplicate bytes and RTT range over the window. A direct connection's kernel TCP
statistics appear with its gateway statistics. Repeat `--client LABEL=USER` (for example `A=P899XG`) to
group each client's lobby events, battle connections, results and
`battle_record` rows when several clients share one device.

### Restart and disconnect behavior

These results come from the backend logs, throwaway server instances, static
analysis of the original client and the game runs named below. A restart during
a battle has not yet been observed in a game run.

* **Restart.** On 2026-10-31, `stop` followed by `start` took 1-3 s. The
  database, capability token and device tunnels were unchanged. Lobby users,
  rooms, pending battle allocations and after-battle entries are kept in memory and
  are lost. Every lobby and relay connection closes. A result that arrives after a
  restart is still saved to `battle_record`, because the lookup uses the database.
  The returning client then receives the ordinary pilot list instead of its
  after-battle entry. The backend was restarted between capture35 and capture36,
  with no client connected. The database, token and record counts were the same
  before and after. In capture36 the same cards then logged in with the same
  pilots, were matched, and both posted their results.
* **Restart while clients are in the lobby.** In capture40 two clients had
  finished a match and were idle on the lobby map. The restart took 1.7 s, and
  the lobby logged a close for both sessions. The clients sent nothing more and
  showed no error at first. About 121 s after the close, each client showed the
  original message 「回線が不安定なため切断されました。○ボタンを押して下さい」 (the
  connection is unstable and was cut; press ○). ○ led to the original top page.
  The ordinary login then reached the lobby map on new sessions with the same
  pilots. At this login each client answered the result question again with the
  result of its last battle. The backend updated the same two `battle_record` rows
  with the same values, so a repeated result is harmless.
* **Session end and results.** Lobby 02 uses the default battle rule, which sets
  no fixed number of consecutive matches. Clients therefore keep playing in one
  relay session until a player chooses to end on the continue/end panel shown after
  each match, or nobody answers that panel for 30 s. The first result-screen
  keepalive then closes each relay connection. Each client logs in to the lobby
  again on its battle session and answers the result question. It then enters the
  after-battle room and can leave it for the lobby map. Capture29 on 2026-10-31
  followed this path, and `battle_record` stored both answers with the correct
  battle code and sides. The client sends the same layout that the server parses.
  It zeroes match, win, loss and kill counters unless the session has four
  players, so a one-against-one session reports zeros. A session that ends because
  the browsers close sends no result.
* **Same pilot logs in again.** Covered by the stale-close fix above. Without it,
  the old connection's late close removed the new session.
* **Opponent leaves during a battle.** The relay frees the leaving peer's slot and
  sends nothing to the remaining peer. The original client has no opponent-left
  message. It counts each peer's silence and, after 540 ticks, ends with its own
  "peer lost" error, keeps the result, and leaves the battle. Closing the
  remaining peer's socket instead would produce a different client error. In
  capture33, capture34 and capture37 one client's browser context was closed 60 s
  into a round. Each time, the other client closed its own relay connection
  13.1-13.2 s later. It then logged in to the lobby again and posted a result with
  battle error 8 ("peer lost") and a longest silence of 523-524 ticks.
* **Rejoining after a drop.** In capture37 the dropped client was reopened from
  the same card 30 s later. It logged in with the same pilot on a new session,
  was matched again in Lobby 02 and played a second match. Both clients posted
  that match's results with no battle error. Its earlier lobby connection had
  closed when it entered the battle, so no session overlapped.
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

`run_sif_latency_tests.py --work /private/sif-latency-evidence` checks an opt-in
candidate for the DNAS stall in which the browser's request never leaves (B34).
In the vendored runtime, an HLE RPC server replies inside the EE's SIF command. A
synchronous RPC therefore never gives the EE to a lower-priority thread. The
original browser's priority-63 HTTP worker only runs while its higher-priority
threads wait for such replies. `sif_latency_prepare.py <copied tree> --latency-us N`
edits only a copied `runtime/src/iop/sif.cpp`. It has no default value. Every
IOP-to-EE packet then reaches EE RAM N us after it was queued, in the original
order. The retry uses `hw::kEventIop`, which the runtime declares but never uses;
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

Battle-time effects of the latency are not yet established.

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
