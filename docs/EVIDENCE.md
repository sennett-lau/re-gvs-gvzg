# Evidence conventions

This report separates a measured result, a user observation, a hypothesis and a proposed implementation. A successful fixture test is not full-game acceptance; a native test is not a browser or phone benchmark. A compiled artifact is not proof that its interactive game paths work.

## What the records mean

The JSON files in `docs/evidence/` contain deliberately selected metrics and provenance from the original research workspace. Their source paths are relative to the original `ps2-web-recomp` working tree. Those source files are retained locally, not silently bundled with this report. Source hashes identify the records reviewed; they do not authenticate a result independently or make unavailable raw captures reproducible for a reader.

Each curated record states its extraction or review method and limitations. Where a number is copied from an earlier written analysis rather than recalculated from raw samples, it is identified as a reported historical measurement. A source hash refers to the source bytes; a build ID, WASM hash and report commit are different identities.

Raw captures can include screenshots, browser state, device characteristics, connection details and personal paths. Only selected measurements and explanatory material belong here. Compression does not remove personal information. Complete logs, memory cards, disc images, home-directory paths and operational credentials stay outside this repository.

## How to interpret frame rates

| Metric | What it can show | What it cannot establish alone |
| --- | --- | --- |
| Gameplay updates per second | Progress of the game's canonical simulation | Smooth display presentation |
| Render updates per second | Completed guest render iterations | Distinct frames scanned out by the screen |
| Shown updates per second | Browser callbacks observing new game output | A photometric measurement of physical refresh |
| Browser callback frequency | Current scheduling cadence | A permanent panel capability |
| Game speed | Guest-time progress per wall-clock time | Low input or streaming latency |
| PCM frames per second | Audio production rate | Audible equivalence, absence of every glitch |

An early saved-fight phone capture, a later full-game phone capture and the latest PC build are separate experiments. Their rates cannot be treated as a single device comparison or proof that one code change caused a gain.

## Repeatable tests to retain with future code exports

A useful acceptance record identifies the matched build, requested rate, effective mode, internal/display size, physical device and refresh mode, duration, exact measurement window, game speed, frame counters, input sequence, audio production/consumption and failures. Record menu, loading, pause, resume, results and re-entry, not only steady combat.

For performance tests, use zero output gain while keeping the AudioContext and ring-buffer consumption active. Suspending audio changes the workload. Do not alter system-wide volume. For multiplayer, keep both endpoint records, the input sequence, guest tick/checkpoint comparisons and any intentionally injected transport or disc delay.

## AI assistance

AI agents assisted code investigation, test preparation and writing. Claims in this report rest on retained code, byte checks, measurements and observed behavior; an agent's explanation alone is not experimental evidence. Agent, model and provider names are intentionally omitted.

## Checks on this report

During assembly, 69 unique original-source SHA-256 fingerprints matched the retained files.

[Reader validation](../CONTRIBUTING.md#reader-validation) records the Wiki build and interface checks. Those checks do not add evidence about game performance.
