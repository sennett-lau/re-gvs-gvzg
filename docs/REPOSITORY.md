# Repository design and export scope

The Wiki and above-60 rendering proof of concept are ready for review. This local repository contains their evidence and selected runnable research exports. A complete playable game checkout is the next delivery stage; its remaining code still lives in the original workspace.

## Where content belongs

| Path | Responsibility | Present in this snapshot |
| --- | --- | --- |
| `README.md` | Project introduction and research reading path | Yes |
| `CONTRIBUTING.md` | Contributor workflow, local setup and content placement | Yes |
| `AGENTS.md` | Entry point directing coding agents to the contributor guide | Yes |
| `docs/chapters/` | Complete, canonical English research narrative | Yes |
| `docs/evidence/` | Small curated measurements and source provenance | Yes |
| `docs/figures/` | Measured plots and retained research figures | Yes |
| `apps/wiki/` | Reader template, styles, navigation and theme controls | Yes |
| `scripts/` | Reader build, validation, media generation and repeatable numeric analyses | Yes |
| `apps/game/` | Game UI, input, diagnostics and one matched `prebuilt/` set | Future export |
| `generated/` | Selected readable generated C++ and translation tables | Future export |
| `src/hooks/`, `patches/runtime/` | Our game-specific hooks and runtime/compiler changes | Future export |
| `research/source/` | Selected RE scripts, address maps and useful exports | Input regression and partial render-hook layer exported |
| `docs/media/` | Selected real captures with provenance captions | Early mobile demo, labeled native comparison, filmstrip, PC screenshot and desktop 60/120-fps viewing copies |
| `poc/streaming/`, `poc/lockstep/` | Independently reproducible multiplayer experiments | Future export |
| `scripts/release/` | Packaging profiles, manifests and checksum generation | Future export |
| `.local/release-builds/` | Ignored temporary packaging output | Created only when needed |

There is no `distribution/` or `releases/` source folder. Future GitHub Release pages hold the version notes and download assets. A release is a versioned software delivery, not a dummy tag created solely to bypass a file limit.

## Current delivery status

The 2026-10-27 checkout audit found **13 tracked files in `research/source/`**: the input-edge regression and partial render-hook package. The reader, analysis scripts, selected evidence and videos are also committed locally. The hosted Wiki serves the built report; it is not a GitHub code release.

The proposed `apps/game/`, `generated/`, `src/hooks/`, `patches/runtime/` and `poc/` directories contain **no tracked files yet**. Their complete implementations and builds remain in the original `ps2-web-recomp` workspace. This repository has no Git remote configured at the audit date, and no game Release assets have been published from it.

The next export should preserve the existing generated C++, runtime and interpolation changes, matched JS/WASM/data package, and multiplayer prototypes. It needs the [rebuild checks below](#rebuild-acceptance), not another frame-rate target. Keep the agreed small commits and reconstructed milestones; exclude discs, personal runtime state and raw debug captures.

## Code and data boundaries

The agreed future export includes generated C++, selected reverse-engineered source, our runtime changes and a matched web package. The original ISO/ROM and compressed disc backup are excluded. Ordinary Git is suitable for readable source; one selected prebuilt milestone can live alongside it after checking its individual files. Additional builds and useful optional archives can become Release assets.

A `.data` package containing the executable is still game-derived content. Generated files must retain their provenance; the project does not describe them as independently written original game source. Our third-party notices and content notice have distinct jobs.

The large raw diagnostic JSON captures are not required for a normal checkout. Curated, sanitized excerpts support the report. Optional complete evidence exports should be prepared only when needed to reproduce a result. Arbitrary binary splitting would retain all the storage cost while making the package harder to use.

## Rebuild acceptance

The existing workspace and this checkout have different scopes. Game builds and prototypes exist locally; their complete sources and inputs have not yet been exported here. The portable input regression and [render-hook patch package](../research/source/render-hooks/README.md) are reproducible subsets. The latter exposes the interface, patch generator and address mapping; it still needs the controller, interpolation implementation and runtime to link a game.

A complete rebuild package needs:

1. Pinned upstream runtime, compiler and toolchain versions, including local patches.
2. A supported input fingerprint and extraction commands for the user's own disc.
3. Generated-unit mappings, hook sources and exact link order.
4. One matched JS/WASM/data package with file hashes and build options.
5. An empty-checkout rebuild and a silent boot, input, pause/resume and match-flow test.

Retain the commands, output hashes and failures from that clean test. Keep performance results tied to their measured build. If a rebuilt binary differs, explain the difference and rerun the corresponding acceptance checks before relabelling it as a historical milestone.

## Honest, small commits

The new history records work done now. Do not backdate commits or pretend a retained experimental build is a pristine baseline. Reconstruct a milestone from identified inputs, rerun its declared checks, then commit that coherent change with a body explaining the problem, mechanism, evidence and limitations.

The planned implementation sequence is extraction/regeneration, compiler and module-loading fixes, browser boot/input/audio/disc access, diagnostics and pacing, fullscreen cost, VU compilation, extra-render separation, interpolation, allocation reduction, mode/input/clock guards and reproducible packaging. Split independent changes; keep a fix with its relevant validation. Do not create a release for every small commit.

The report commits are separate from that future implementation sequence. No existing game binary is relabelled or moved by writing these chapters.

## Single-source reading

Read [Contributing](../CONTRIBUTING.md) before adding a page or explanation. It defines how to find related content and keep development procedures separate from the research narrative.

Markdown remains complete with captions, limitations and static figures. The Wiki pre-renders that Markdown; JavaScript adds navigation and theme controls. Measurement files stay in `docs/evidence/`, and measured plots stay in `docs/figures/`. Generated HTML is ignored and rebuilt. Source links point to the exact Markdown copied into that reader build.

## Stable Wiki hosting

The current quick tunnel is a temporary review link. A restart can change its address. For a stable public Wiki, build `.local/wiki/` and deploy that static output to an approved GitHub Pages project. [GitHub Pages](https://docs.github.com/en/pages/getting-started-with-github-pages/what-is-github-pages) serves static HTML, CSS and JavaScript from a repository.

The reader uses relative asset links. Before deployment, check it under the intended repository subpath as well as at `/`. Keep game hosting and its cross-origin isolation requirements separate from this static report. The research-check workflow only validates content; it contains no deployment step. Selecting the account, repository and public URL remains a publication decision.
