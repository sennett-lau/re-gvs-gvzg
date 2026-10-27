# Route B: independent clients

This source-only prototype runs the game on both devices and exchanges controller inputs and periodic state hashes. It is separate from the normal-boot adaptive package. It is not an implementation of the original official online service.

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

The private versus save-state fixture and its derivative WASM build are excluded from this source export. A standalone Route B build still needs a repeatable normal-boot-to-versus fixture procedure, an identity manifest covering that fixture and every executable asset, and another two-client game acceptance run. The controller sequences here start from an existing battle checkpoint; they are not a complete fixture-from-disc recipe.

The normal game UI therefore does not advertise a working online battle button. Preserve input ownership, startup identity checks and mismatch stops when integrating this prototype. Original-menu online-service integration, adaptive RTT-based delay and rollback remain further work.
