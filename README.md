# re-gvs-gvzg

**Reverse Engineering: Gundam VS. Series - Gundam vs. Zeta Gundam**

A research record of bringing the Japanese PS2 release (`SLPS-25419`) to a browser, investigating normal-speed rendering above 60 Hz, and exploring two multiplayer architectures.

**Current snapshot: research documentation and a local Wiki reader.** The working game and experiments remain in the original research workspace. This repository does not yet contain a reconstructed game release, generated game source, or playable prebuilt package. Those remain part of the agreed export scope, described in [Repository design](docs/REPOSITORY.md).

## Read the research

The **[illustrated Wiki](.local/wiki/index.html)** is the preferred reading experience after building locally. It uses the same Markdown as the links below, with interactive explanations added to static figures. No separate copy of the article text is maintained.

| Stage | Chapters |
| --- | --- |
| Begin | [01 · From a disc to translated code](docs/chapters/01-disc-to-code.md) |
| Make it run | [02 · The browser port](docs/chapters/02-browser-port.md) |
| Optimize | [03 · Performance and usability](docs/chapters/03-performance.md) |
| Investigate higher refresh | [04 · What 120 FPS means](docs/chapters/04-frame-rate.md) · [05 · Recovering the rendering boundary](docs/chapters/05-rendering-boundary.md) · [06 · Adaptive rendering and evidence](docs/chapters/06-adaptive-rendering.md) |
| Explore multiplayer | [07 · One host, remote controllers](docs/chapters/07-host-streaming.md) · [08 · Independent clients and the original online mode](docs/chapters/08-independent-clients.md) |
| Continue | [09 · Findings and next experiments](docs/chapters/09-learnings.md) |

The report is an evidence-based reconstruction written on 2026-10-25. Historical test results are attributed to their retained records; writing the report does not rerun or extend those tests. See [Evidence conventions](docs/EVIDENCE.md).

## Run the reader locally

Requirements: Node.js 20 or newer and Python 3. No game, disc or GPU is needed to read the report.

```sh
npm ci --ignore-scripts
npm run wiki:build
npm run check
npm run wiki:serve
```

Open **http://127.0.0.1:8768/**. Stop the server with Ctrl+C. The server binds to loopback only. Build output is ignored at `.local/wiki/`; deployment is a separate action. The source Markdown remains readable without running any command.

## Scope and status

The latest retained PC test supports approximately 120 render updates and 60 gameplay updates per second in an eligible battle. Its display was 60 Hz: it does not establish physical 120 Hz presentation or current-build phone performance. The multiplayer experiments are separate from a finished original online-mode integration. The chapters preserve these distinctions and the unsuccessful experiments.

Planned game milestones use [SemVer-style versioning](docs/VERSIONS.md): `v0.1.0` baseline with subsequent `v0.1.x` compatibility fixes, `v0.2.0` performance, and `v0.3.0-alpha.1` adaptive rendering. These are packaging targets, not existing releases or tags in this repository.

## Files, attribution and notices

No original ISO, ROM or compressed disc backup is included. Generated C++ is a translation of executable instructions, not recovered developer-authored source. The eventual matched `.data` package includes the original executable and must be described accurately. See [Game files](docs/GAME_FILES.md) and [Derived artifacts](docs/DERIVED.md).

The project builds on [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp); the inspected upstream is pinned in [upstream.lock](upstream.lock). Attribution and third-party terms are documented in [Third-party notices](docs/license/THIRD_PARTY_NOTICES.md), with scope and contact status in [Content notice](docs/license/CONTENT_NOTICE.md). The license for this project's own contributions has not yet been selected; no project-wide license grant is asserted by this local draft.
