# re-gvs-gvzg

**Reverse Engineering: Gundam VS. Series - Gundam vs. Zeta Gundam**

This project studies how a PS2 game can run in a browser. It follows the work from recompilation to performance improvements, higher refresh rates and multiplayer experiments.

> Prefer the illustrated reader? [Open the Wiki](.local/wiki/index.html).

> [!NOTE]
> **A research record with working prototypes.**
>
> This repository contains the report and Wiki. The game builds remain in the original research workspace. Each chapter explains what worked, what was tested and what remains unfinished.

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

### Findings and next steps

See what the research supports and which experiments come next.

- [09 · Findings and next steps](docs/chapters/09-learnings.md)

For a quick read, start with each chapter's **At a glance** box and highlighted finding. Detailed measurements and test conditions stay with the relevant experiment.

Use the [Evidence index](docs/evidence/README.md) to trace a finding to its selected records.

## About this record

The chapters reconstruct retained research, reviewed on 2026-10-25. Writing this report did not rerun the game tests. [Evidence conventions](docs/EVIDENCE.md) explain how to interpret the results.

This project builds on [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp). No original ISO, ROM or compressed disc backup is included.

See [Third-party notices](docs/license/THIRD_PARTY_NOTICES.md) and [Content notice](docs/license/CONTENT_NOTICE.md) for attribution and the scope of this local draft.
