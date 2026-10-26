# Evidence index

Start with the claim you want to check. Each record links the report to selected measurements and the original source fingerprints. The records are small summaries; complete game captures remain in the private working archive.

> **How to read this page**
>
> - **Measured:** a retained experiment contains the relevant observation or comparison.
> - **Reported:** an observation was supplied by the user or described in a retained report.
> - **Inspected:** a conclusion comes from source code or original-byte analysis.
> - **Proposed:** the work remains to be implemented or tested.
>
> These labels describe the type of support. They are not confidence scores or claims that every device behaves the same way.

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
| What does the latest PC test prove? | `R06` | Fullscreen measurement windows, gameplay/render/cue rates, the 60-Hz screen and unmatched setups |
| Which modes are eligible? | `R07` | Active-battle guards and the unverified or excluded mode/camera lifecycles |
| Why did the later phone build stay around 60? | `R08` | The explicit Versus guard in that build, separately from its slow main menu |
| What could reduce the menu cost? | `R09` | PC dispatch counts and why they do not establish the phone’s GPU bottleneck |
| Did pose-buffer reuse preserve output? | `R10` | Allocation reduction, RGB/RAM/trace comparisons and the missing isolated phone benchmark |
| Did scheduling changes help? | `R11`–`R12` | The bounded cadence comparison and unsuccessful upload/wait experiments |
| Was above-60 play observed on a phone? | `R13` | The earlier saved-battle Auto capture, which predates the latest full-game build |

Read [04 · The frame-rate goal](../chapters/04-frame-rate.md) for the metric definitions, [05 · Game hooks](../chapters/05-rendering-boundary.md) for the mechanism, and [06 · Results and limits](../chapters/06-adaptive-rendering.md) for the device and mode boundaries.

## Multiplayer: two different routes

| Route / question | Selected record | What it supports | What it leaves open |
| --- | --- | --- | --- |
| [A · One host, two controllers](../chapters/07-host-streaming.md) | [Network findings](network-findings.json): `streaming` | Inspected transport/controller behavior and a reported two-device success | A retained full match, end-to-end latency and recovery on separate clients |
| [B · A game on each device](../chapters/08-independent-clients.md) | [Network findings](network-findings.json): `native_actor_control`, `native_lockstep`, `negative_control` | Actor ownership and bounded agreement, including a deliberately incorrect-input test | General agreement across devices and complete game flows |
| Why did browser state diverge? | [Network findings](network-findings.json): `disc_readiness_causality`, `checkpoint240_complete_ram_comparison`, `browser_release_stress` | Controlled disc-readiness failure and agreement after the timing correction | Rollback, mid-match resynchronization and long internet sessions |
| Can the original Network Battle flow be restored? | [Network findings](network-findings.json): `original_online`, `coop_anything` | Inspected dispatch/UI/server behavior and the assessment of an external approach | A working original lobby connection and complete browser integration |

## Finding the original record

A source path in a JSON record refers to the original `ps2-web-recomp` working tree. Its SHA-256 identifies the bytes reviewed. It is not a download link, and the hash alone does not let a reader rerun an unavailable test. No personal browser capture, raw memory dump or disc image is silently included here.

See [Evidence conventions](../EVIDENCE.md) for metric definitions, test conditions and the difference between a build ID, a file hash and a report commit. See [Findings and lessons](../chapters/09-learnings.md) for the research summary and [Further work](../chapters/10-further-work.md) for proposed experiments.
