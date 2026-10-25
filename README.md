# re-gvs-gvzg

**Reverse Engineering: Gundam VS. Series - Gundam vs. Zeta Gundam**

A research record of bringing the Japanese PS2 release (`SLPS-25419`) to a browser, investigating normal-speed rendering above 60 Hz, and exploring two multiplayer architectures.

## Findings in brief

1. **Recompilation produced runnable game paths.** The work combined translated C++, runtime fixes and browser services. A clean release package still needs reconstruction.
2. **Extra rendering can preserve normal game speed.** An eligible PC battle reached about **120 render updates/s** with **60 gameplay updates/s**. Its screen was **60 Hz**, so physical 120-Hz delivery remains unverified.
3. **Multiplayer has two separate prototypes.** One host streams to remote controllers. Independent clients instead exchange inputs. Complete game flows and original online-mode integration remain unfinished.

> [!NOTE]
> **This repository contains the report and Wiki.**
>
> The working game and experiments remain in the original research workspace. Generated game source, reconstructed releases and playable packages remain part of the agreed [export scope](docs/REPOSITORY.md).

## Read the research

The **[illustrated Wiki](.local/wiki/index.html)** is the preferred reading experience after building locally. It uses the same Markdown as the links below, with interactive explanations added to static figures. No separate copy of the article text is maintained.

| Stage | What you will learn | Read |
| --- | --- | --- |
| **1 · Recompile** | Turn disc executables into C++, then make the game run in a browser | [01 · Disc → C++](docs/chapters/01-disc-to-code.md) · [02 · C++ → browser](docs/chapters/02-browser-port.md) |
| **2 · Optimize** | Improve the working port and identify the remaining performance problems | [03 · Performance](docs/chapters/03-performance.md) |
| **3 · Extend — high refresh** | Separate gameplay from rendering, then adapt rendering to the device | [04 · The goal](docs/chapters/04-frame-rate.md) · [05 · The game hooks](docs/chapters/05-rendering-boundary.md) · [06 · Results and limits](docs/chapters/06-adaptive-rendering.md) |
| **3 · Extend — multiplayer, route A** | One host runs the game. Both players receive a stream and send controller input. | [07 · One host, two controllers](docs/chapters/07-host-streaming.md) |
| **3 · Extend — multiplayer, route B** | Each device runs the game. Both copies exchange inputs and compare state. | [08 · A game on each device](docs/chapters/08-independent-clients.md) |
| **Next steps** | Understand what is proven and what needs another experiment | [09 · Findings and next steps](docs/chapters/09-learnings.md) |

**For a quick read:** scan each chapter’s **At a glance** box, then read the results in chapters [06](docs/chapters/06-adaptive-rendering.md), [07](docs/chapters/07-host-streaming.md) and [08](docs/chapters/08-independent-clients.md). Follow the full order above for the technical journey.

**To check a claim:** use the [Evidence index](docs/evidence/README.md). It connects the main findings to the relevant chapter and selected records. [Evidence conventions](docs/EVIDENCE.md) explain what each kind of test can establish.

The report is an evidence-based reconstruction written on 2026-10-25. Historical test results link to their retained records. Writing the report does not rerun or extend those tests.

## Run the reader locally

Requirements: Node.js 20 or newer and Python 3. No game, disc or GPU is needed to read the report.

```sh
npm ci --ignore-scripts
npm run wiki:build
npm run check
npm run wiki:serve
```

Open **http://127.0.0.1:8768/**. Stop the server with Ctrl+C. The server binds to loopback only. Git ignores the build output at `.local/wiki/`. Deployment is a separate action. The source Markdown remains readable without running any command.

## Version plan

Planned game milestones use [SemVer-style versioning](docs/VERSIONS.md): `v0.1.0` baseline with subsequent `v0.1.x` compatibility fixes, `v0.2.0` performance, and `v0.3.0-alpha.1` adaptive rendering. These are packaging targets, not existing releases or tags in this repository.

## Files, attribution and notices

No original ISO, ROM or compressed disc backup is included. Generated C++ is a translation of executable instructions, not recovered developer-authored source. The eventual matched `.data` package includes the original executable and must be described accurately. See [Game files](docs/GAME_FILES.md) and [Derived artifacts](docs/DERIVED.md).

The project builds on [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp). [upstream.lock](upstream.lock) pins the inspected upstream revision. Attribution and third-party terms are documented in [Third-party notices](docs/license/THIRD_PARTY_NOTICES.md), with scope and contact status in [Content notice](docs/license/CONTENT_NOTICE.md). The license for this project's own contributions remains unselected. This local draft makes no project-wide license grant.
