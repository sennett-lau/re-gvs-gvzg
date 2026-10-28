# Experimental local-Versus lockstep

This prototype runs a local-Versus game on both devices and exchanges controller inputs and periodic state hashes. Its menu bridge returns mode `4`. It is separate from the normal-boot adaptive package and does not implement **Online Mode**, which requires independent instances using original 通信対戦 mode `7`. See the canonical [Online Mode and independent-client experiments chapter](../../docs/chapters/08-independent-clients.md) for the distinction and retained results.

| Directory | Content |
| --- | --- |
| `server/` | HTTP input/checkpoint relay with room, ownership, timeout and retry rules |
| `web/` | Browser transport, game session, invitation lobby, diagnostics and retained UI template |
| `src/` | Native/WASM step adapter and retained strict-disc host, RTC and render-hook source |
| `inputs/` | Controller sequences used in the native two-player fixture experiments |

Run the isolated protocol tests:

```sh
python3 -m unittest discover -s tests/multiplayer -p '*_test.py'
node --test --test-timeout=60000 tests/multiplayer/*.js
```

The tests launch their own loopback relay and clean it up. They cover delayed input, identical delivery, wrong ownership, invalid invitations, retries, startup leases and deliberate checkpoint mismatches. They do not emulate two complete games.

The retained game experiment used a fixed versus save state, 60-Hz gameplay, a three-frame input delay, fixed RTC conversion and full-RAM FNV-1a checkpoints every 120 ticks. The strict-disc host waits for the requested bytes at deterministic virtual completion points. `source-map.json` in the parent directory records the original source fingerprints.

## Remaining game integration

The private versus save-state fixture and its derivative WASM build are excluded from this source export. The controller sequences here start from an existing battle checkpoint; they are not a complete fixture-from-disc recipe. The later normal-boot local-Versus integration and its acceptance evidence are documented in [chapter 08](../../docs/chapters/08-independent-clients.md#move-from-the-fixture-into-the-full-game).

Preserve input ownership, startup identity checks and mismatch stops when integrating this prototype. Original Online Mode research stays isolated in [its own experiment](../original-online/README.md). Adaptive RTT-based delay and rollback remain further work for lockstep.
