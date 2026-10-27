# Reverse Engineering: Gundam VS. Series - Gundam vs. Zeta Gundam

This project studies how [Mobile Suit Gundam: Gundam vs. Zeta Gundam](https://en.wikipedia.org/wiki/Mobile_Suit_Gundam:_Gundam_vs._Zeta_Gundam) can run in a browser. It follows the work from recompilation to performance improvements, higher refresh rates and multiplayer experiments.

> Prefer the illustrated reader? [Open the Wiki](.local/wiki/index.html).

## Results at a glance

<!-- results:start -->

### ~120 displayed updates · ~60 gameplay updates/s

**✅ Verified · PC counters + OS display events**

A **65-second fullscreen battle** on a confirmed 180-Hz desktop reached **120.02 OS-reported display updates/s**, with normal-speed gameplay. This establishes the above-60 rendering proof of concept.

[See the measured rates and game capture](docs/chapters/06-adaptive-rendering.md#the-latest-paired-pc-result).

### 23 matching checkpoints · through tick 2,640

**✅ Verified · Two-browser fixture**

Two instances on one PC agreed across **44 guest seconds**, with neutral inputs. Full matches between separate devices remain to be tested.

[Read the lockstep experiment](docs/chapters/08-independent-clients.md#what-the-longer-browser-test-proves).

### 0 failures · 1,265 input phases

**✅ Verified · Instruction regression**

The old input gate failed **369** cases. The corrected gate passed every tested arrival phase. A small test now runs from this checkout.

[Inspect the fix and reproduce the test](docs/chapters/05-rendering-boundary.md#preserve-button-presses-between-renders).

<!-- results:end -->

## Browser gameplay on a 180-Hz desktop

<video autoplay loop muted playsinline preload="metadata" poster="docs/media/pc-180hz-gameplay-poster.jpg" aria-label="Actual browser gameplay on the tested desktop: movement, boosting and firing" src="docs/media/pc-180hz-gameplay-60.mp4"></video>

*Actual desktop recording from the tested build. This silent, looping preview plays at normal speed in a compatible 60-fps viewing copy.*

[120-fps viewing copy](docs/media/pc-180hz-gameplay-120.mp4) · [Clip provenance](docs/evidence/pc-display-video-provenance.json) · [Earlier phone showcase](docs/chapters/03-performance.md#early-mobile-gameplay)

Both viewing copies resample a variable-rate recording. The [matched counters and OS display trace](docs/chapters/06-adaptive-rendering.md#the-latest-paired-pc-result) establish the measured rates.

## What interpolation changes

<video controls muted playsinline preload="none" poster="docs/media/repeat-vs-interpolate-poster.png" aria-label="Native comparison: repeat control versus interpolated motion, with sample and unique-image counts" src="docs/media/repeat-vs-interpolate-quarter-speed.mp4"></video>

*The same movement fixture produces 122 unique images with repeated poses and 241 with interpolation. This native comparison plays four times slower; it demonstrates image differences, not device throughput.*

[See the four-sample filmstrip and experiment](docs/chapters/04-frame-rate.md#experiment-2-render-without-advancing-gameplay).

## Explore the research

Follow the stages in order, or choose the feature that interests you.

### 1 · Recompile

Translate the disc's executable code into C++, then make it run in a browser.

- [01 · From a PS2 disc to C++](docs/chapters/01-disc-to-code.md)
- [02 · From C++ to the browser](docs/chapters/02-browser-port.md)

### 2 · Optimize

Improve the browser port and investigate performance problems.

- [03 · Performance and usability](docs/chapters/03-performance.md)

### 3 · Extend

#### High-refresh rendering

Draw smoother motion while preserving gameplay speed.

- [04 · Understand the goal](docs/chapters/04-frame-rate.md)
- [05 · Separate gameplay and rendering](docs/chapters/05-rendering-boundary.md)
- [06 · Adaptive results and limits](docs/chapters/06-adaptive-rendering.md)

#### Multiplayer

Compare two ways to play together on separate devices.

- [07 · Route A: One host, two controllers](docs/chapters/07-host-streaming.md)

  Run one game on a host and stream it to remote controllers.

- [08 · Route B: A game on each device](docs/chapters/08-independent-clients.md)

  Run the game on each device and keep the copies synchronized.

### Findings and further work

Review the evidence and lessons, then explore the proposed next steps.

- [09 · Findings and lessons](docs/chapters/09-learnings.md)
- [10 · Further work](docs/chapters/10-further-work.md)

For a quick read, start with each chapter's **At a glance** box and highlighted finding. Detailed measurements and test conditions stay with the relevant experiment.

Use the [Evidence index](docs/evidence/README.md) to trace a finding to its selected records.

## About this record

> [!NOTE]
> **A research record with working prototypes.**
>
> This repository contains the report, Wiki, retained generated C++, adaptive runtime sources and one matched playable web package. Multiplayer prototypes remain separate. Each chapter explains what worked, what was tested and what remains unfinished.

Use the [game setup guide](docs/GAME_FILES.md) to play with your own supported disc or rebuild the included source.

The chapters reconstruct retained research. [Evidence conventions](docs/EVIDENCE.md) define the result labels, review dates and measurement limits.

This project builds on [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp). No original ISO, ROM or compressed disc backup is included.

Independently written code and documentation use the [MIT License](docs/license/LICENSE). See [Third-party notices](docs/license/THIRD_PARTY_NOTICES.md) and [Content notice](docs/license/CONTENT_NOTICE.md) for attribution and content scope.
