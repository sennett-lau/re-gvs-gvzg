# Evidence index

Start with the claim you want to check. Each record links to selected measurements and original source fingerprints. This checkout now includes selected visuals, code excerpts, numeric samples and a runnable regression and hook-generation export. Complete game captures remain in the working archive.

> **How to read this page**
>
> - **Measured:** a retained experiment contains the relevant observation or comparison.
> - **Reported:** an observation was supplied by the user or described in a retained report.
> - **Inspected:** a conclusion comes from source code or original-byte analysis.
> - **Proposed:** the work remains to be implemented or tested.
>
> These labels describe the type of support. They are not confidence scores or claims that every device behaves the same way.

The separate ✅ / 🟡 / ⬜ [result labels](../EVIDENCE.md#result-labels) state whether the described check or journey is verified, partial or untested.

## What you can reproduce from this checkout

### Input-edge regression · executable check

Run `python3 research/source/input-gate/verify.py` from the repository root. Expected: **1,265 cases, 369 old failures, zero corrected failures**. The [test package](../../research/source/input-gate/README.md) includes the restricted interpreter, 356 original instruction bytes and generated entry excerpts. It runs without the game or GPU.

### Render-hook export · inspectable and repeatable patches

The [hook package](../../research/source/render-hooks/README.md) contains `render_hooks.hpp`, the shared patch helper, a wrapper with the final input/cue fixes, and a 13-site guest-address map. Run `python3 research/source/render-hooks/verify.py` without game files. With the matching generated inputs, the wrapper reproduces five retained unit hashes. The focused hook export now links to the complete controller/runtime and source build described in [Game setup](../GAME_FILES.md).

### PC rate plot · repeatable analysis

Run `python3 scripts/plot-pc-cadence.py`. The [plot script](../../scripts/plot-pc-cadence.py) regenerates [the chart](../figures/pc-cadence.svg) from [142 selected numeric observations](pc-cadence-samples.json), 71 per run. It prints the window duration and render/gameplay/shown rates. These roughly 70-second windows are the longest eligible post-pause segments, not the aggregate R06 windows. This redoes the analysis; it does not rerun the historical game.

### 180-Hz desktop session · repeatable display analysis

Run `python3 scripts/plot-pc-display.py`. The [script](../../scripts/plot-pc-display.py) checks endpoint counters, active silent audio, chronological presentation samples and interval agreement. It regenerates the [new figure](../figures/pc-display-180hz.svg) from **11,704 selected display-tracked presents** in [the curated record](pc-display-180hz.json).

The two approximately 65-second windows contain 3,901 fixed-60 and 7,803 fixed-120 presents. Expected mean display rates are **60.00/s** and **120.02/s**. The JSON retains relative presentation/display times and intervals, with build and source fingerprints. Absolute times, process IDs, swapchain addresses and personal browser state are excluded.

This reproduces the numeric analysis. Rerunning the game still requires the matched build and test environment described in Chapter 06.

### Visuals and patch excerpts · inspectable artifacts

- [New PC gameplay: 60-fps preview](../media/pc-180hz-gameplay-60.mp4) and [120-fps viewing copy](../media/pc-180hz-gameplay-120.mp4): actual desktop recording from the tested build. [Provenance](pc-display-video-provenance.json) explains the variable-rate source and timestamp resampling.
- [Early mobile gameplay](../media/early-mobile-gameplay.mp4): a user-recorded showcase from an early optimized phone build. [Clip provenance](mobile-demo-provenance.json) records the trim and crop. Its exact build is unidentified.
- [Labeled native comparison](../media/repeat-vs-interpolate-quarter-speed.mp4) and [four-sample filmstrip](../media/repeat-vs-interpolate-filmstrip.png): repeat control on the left, interpolation on the right. Labels and cumulative unique counts remain visible when downloaded.
- [Unedited PC screenshot](../media/pc-versus-120-request.png): the actual Versus scene and test overlay.
- [Disassembly](code/hook-instructions.txt), [render branch](code/render-boundary.diff), [input gate](code/input-gate.diff) and [cue-clock diff](code/cue-clock.diff).
- [Provenance](review-provenance.json): source/output hashes, selected frame-sequence fingerprints and the video encoding command.

The [media generator](../../scripts/build-comparison-media.py) verifies all 241 source hashes per sequence before adding labels and making the filmstrip. It requires the retained PPM capture archive; the original images are not reconstructed from the compressed video.

### Full game rebuild · reproduced from source

The checkout now includes the retained generated C++, pinned runtime, adaptive hooks, matched web package and multiplayer POC sources. The [rebuild acceptance record](rebuild-acceptance.json) records byte-identical executable outputs and a silent normal-boot browser test. See [Game setup](../GAME_FILES.md) for commands and the [export inventory](../REPOSITORY.md#rebuild-acceptance) for boundaries. Raw captures, personal state and the private lockstep fixture remain excluded.

## Recompilation and performance

The linked `baseline-findings.json` collects records from several development stages. Its filename does not mean every result came from the first playable build.

For example, `native_validation` describes an early match run outside the browser. `historical_browser_manifest` identifies saved build files and the later `gundam-mobile-4` revision described in [chapter 02](../chapters/02-browser-port.md). `phone_menu_observation` records a separate, later phone capture. Each group states the limits of its evidence.

Use the chapters for explanations and the JSON fields to check their source records.

| Question | Where to read the finding | Selected record | Boundary of the evidence |
| --- | --- | --- | --- |
| What was extracted and translated? | [01 · Disc → C++](../chapters/01-disc-to-code.md) | [Baseline findings](baseline-findings.json): `target`, `direct_inventory`, source fingerprints | The 325-module inventory was checked; no developer source was recovered |
| Did the first port complete a match? | [02 · C++ → browser](../chapters/02-browser-port.md) | [Baseline findings](baseline-findings.json): `native_validation`, `historical_browser_manifest` | The retained early match completion is native evidence; the manifest includes later mobile changes |
| Which optimizations have evidence? | [03 · Performance](../chapters/03-performance.md) | [Baseline findings](baseline-findings.json): native pixel comparison, observer windows and rejected hypotheses | Native image agreement does not measure a phone speedup |
| Will the intended source and web files fit? | [Derived artifacts](../DERIVED.md) | [Artifact inventory](artifact-inventory.json) | A local file-size measurement, not a Git pack or upload test |

## High-refresh rendering

The numbered records below are in [rendering-findings.json](rendering-findings.json). Each includes source paths, hashes, extraction notes and limitations.

| Question | Records | What to check |
| --- | --- | --- |
| Why did the first 120/144 attempt run too fast? | `R01` | Battle updates and countdown behavior in the rate-only and countdown-only controls |
| Are the extra images different? | `R02`–`R03` | Native image comparisons, controlled state checks and the scope of input replay |
| Why did Start sometimes fail? | `R04` | The input-edge failure, the original-instruction test and ordinary-control continuation |
| Which additional clock needed repair? | `R05` | Cue/marker timing; the earlier audible-fade interpretation was withdrawn |
| What did the historical PC pair prove? | `R06` | Fullscreen counter rates and a captured browser cadence near 60; panel maximum refresh was not measured |
| Does 120 rendering reach a higher-refresh desktop? | [New display record](pc-display-180hz.json) | Confirmed 180-Hz session, matched counter windows and OS display events; uneven frame spacing remains |
| Which modes are eligible? | `R07` | Active-battle guards and the unverified or excluded mode/camera lifecycles |
| Why did the later phone build stay around 60? | `R08` | The explicit Versus guard in that build, separately from its slow main menu |
| What could reduce the menu cost? | `R09` | PC dispatch counts and why they do not establish the phone’s GPU bottleneck |
| Did pose-buffer reuse preserve output? | `R10` | Allocation reduction, RGB/RAM/trace comparisons and the missing isolated phone benchmark |
| Did scheduling changes help? | `R11`–`R12` | The bounded cadence comparison and unsuccessful upload/wait experiments |
| Was above-60 play observed on a phone? | `R13` | The earlier saved-battle Auto capture, which predates the latest full-game build |

Read [04 · The frame-rate goal](../chapters/04-frame-rate.md) for the metric definitions, [05 · Game hooks](../chapters/05-rendering-boundary.md) for the mechanism, and [06 · Results and limits](../chapters/06-adaptive-rendering.md) for the device and mode boundaries.

## Multiplayer: two different routes

The [current implementation review](implementation-review.json) checks suggestions against actual source: GPU/CLUT batching, relay-only streaming, configurable lockstep delay and the live FNV-1a hash/wait path. It records source inspection, not a new performance result.

| Route / question | Selected record | What it supports | What it leaves open |
| --- | --- | --- | --- |
| [A · One host, two controllers](../chapters/07-host-streaming.md) | [Network findings](network-findings.json): `streaming` | Inspected transport/controller behavior and a reported two-device success | A retained full match, end-to-end latency and recovery on separate clients |
| [B · A game on each device](../chapters/08-independent-clients.md) | [Network findings](network-findings.json): `native_actor_control`, `native_lockstep`, `negative_control` | Actor ownership and bounded agreement, including a deliberately incorrect-input test | General agreement across devices and complete game flows |
| Why did browser state diverge? | [Network findings](network-findings.json): `disc_readiness_causality`, `checkpoint240_complete_ram_comparison`, `browser_release_stress` | Controlled disc-readiness failure and agreement after the timing correction | Rollback, mid-match resynchronization and long internet sessions |
| Can the original Network Battle flow be restored? | [Network findings](network-findings.json): `original_online`, `coop_anything` | Inspected dispatch/UI/server behavior and the assessment of an external approach | A working original lobby connection and complete browser integration |

## Finding the original record

A historical source path refers to the original `ps2-web-recomp` working tree. New records identify their own archive root. A SHA-256 identifies reviewed bytes; it is not a download link or a substitute for missing test inputs. Personal browser state, raw memory dumps and disc images are excluded.

See [Evidence conventions](../EVIDENCE.md) for metric definitions, test conditions and the difference between a build ID, a file hash and a report commit. See [Findings and lessons](../chapters/09-learnings.md) for the research summary and [Further work](../chapters/10-further-work.md) for proposed experiments.
