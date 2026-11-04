# Original Online server

This directory is the private backend for original Online Mode (menu mode 7):
a pinned, patched build of the compatible server inada-s/zdxsv, the
capability-protected WebSocket gateway, and the supervisor that runs them. The
game-side transport, runtime adapter and protocol probes stay in
[`poc/original-online/network/`](../../poc/original-online/network/README.md),
which also describes the service path from the original client to these
services.

Files:

| File | Purpose |
| --- | --- |
| `prepare_backend.py` | Builds zdxsv and the gateway from the pinned archive, applies and records the patch set |
| `backendctl.py` | Persistent private service: build, init, start, status, stop, tunnels |
| `backend.example.json` | Config fields for `backendctl.py` |
| `run_backend.py` | Single-use launcher for throwaway probe instances |
| `backend_receipt.py` | Passive receipt for one run window |
| `gateway.go`, `gateway_tcpinfo_*.go` | WebSocket gateway source, copied into the build |
| `stale_close_test.go`, `read_timeout_test.go` | Regression tests copied into the patched zdxsv source and run by the build |

## Build and run

`prepare_backend.py` builds inada-s/zdxsv revision
`35ffbdad9257eca5043bb4977d26cc07468b5045` from the exact archive SHA256
`51ca60ad9cbcf735e1d769dae1501be46494392eebaa8f4e195e8241d133a1eb`, together with
the gateway in `gateway.go`. Obtain the public archive without credentials and
retain it privately. `backendctl.py` packages that build as a persistent private
service. It reads one private JSON config; `backend.example.json` shows the fields.
Relative paths in the config resolve against the config file's directory:

```sh
cp apps/server/backend.example.json /private/backend/config.json
C="python3 apps/server/backendctl.py --config /private/backend/config.json"
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

## Service layout

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

## Source and license

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

## Other devices

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

## Receipts

`backend_receipt.py` writes a passive receipt for one run window. It reads the
three logs and the database read-only, and it sends no traffic. It replaces every
known login key with a short hash:

```sh
python3 apps/server/backend_receipt.py --logs /private/backend/logs \
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

## Restart and disconnect behavior

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
