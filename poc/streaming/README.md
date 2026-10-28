# Stream Mode: one host and remote controllers

One browser runs the game, in local Versus or another game mode. Its video/audio stream reaches remote clients, and each client's input occupies one of the host's two controller ports. The browser source is shared with `apps/game/assets/remote-*.js` and `remote.html`; `remote_play.py` provides invitation-based signaling. See the canonical [Stream Mode chapter](../../docs/chapters/07-host-streaming.md) for findings and acceptance limits.

Run the game server with your own private TURN configuration:

```sh
python3 scripts/game/serve.py --disc /path/to/disc.iso --remote .local/turn.json
```

The configuration has an `iceServers` array in the standard WebRTC format. Use a TURN URL and credentials from your own relay; no saved credentials are included. The current source supports direct and relay candidates, with configurable relay-only policy. See the chapter's transport settings and measured scope.

Open the host page, start the game, then use its remote-play controls to generate an invitation. Share that invitation with the other controller device. Serving online requires HTTPS and the server's isolation headers. Static Wiki hosting does not provide these game or signaling services.

Run the room/ownership tests with `python3 -m unittest discover -s tests/multiplayer -p '*_test.py'` and controller tests with `node --test tests/multiplayer/remote_input.js`. Tests use loopback/fake ICE configuration and do not contact a TURN server. The research chapter records the earlier real-device results; this export does not add a new internet latency measurement.
