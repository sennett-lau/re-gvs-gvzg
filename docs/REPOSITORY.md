# Repository design and export scope

This local repository starts with the report and its reader. The existing game workspace remains the source for subsequent reviewed code exports. Creating these documentation commits does not reconstruct, publish or validate the proposed game milestones.

## Where content belongs

| Path | Responsibility | Present in this snapshot |
| --- | --- | --- |
| `README.md` | Project introduction and research reading path | Yes |
| `CONTRIBUTING.md` | Contributor workflow, local setup and content placement | Yes |
| `AGENTS.md` | Entry point directing coding agents to the contributor guide | Yes |
| `docs/chapters/` | Complete, canonical English research narrative | Yes |
| `docs/evidence/` | Small curated measurements and source provenance | Yes |
| `docs/figures/` | Concept parameters and generated static diagrams | Yes |
| `apps/wiki/` | Reader template, styles and reusable interactive components | Yes |
| `scripts/` | Local reader build and validation | Yes |
| `apps/game/` | Game UI, input, diagnostics and one matched `prebuilt/` set | Future export |
| `generated/` | Selected readable generated C++ and translation tables | Future export |
| `src/hooks/`, `patches/runtime/` | Our game-specific hooks and runtime/compiler changes | Future export |
| `research/source/` | Selected RE scripts, address maps and useful exports | Portable input regression exported; wider source export pending |
| `docs/media/` | Selected real captures with evidence captions | Native comparison and PC screenshot |
| `poc/streaming/`, `poc/lockstep/` | Independently reproducible multiplayer experiments | Future export |
| `scripts/release/` | Packaging profiles, manifests and checksum generation | Future export |
| `.local/release-builds/` | Ignored temporary packaging output | Created only when needed |

There is no `distribution/` or `releases/` source folder. Future GitHub Release pages hold the version notes and download assets. A release is a versioned software delivery, not a dummy tag created solely to bypass a file limit.

## Code and data boundaries

The agreed future export includes generated C++, selected reverse-engineered source, our runtime changes and a matched web package. The original ISO/ROM and compressed disc backup are excluded. Ordinary Git is suitable for readable source; one selected prebuilt milestone can live alongside it after checking its individual files. Additional builds and useful optional archives can become Release assets.

A `.data` package containing the executable is still game-derived content. Generated files must retain their provenance; the project does not describe them as independently written original game source. Our third-party notices and content notice have distinct jobs.

The large raw diagnostic JSON captures are not required for a normal checkout. Curated, sanitized excerpts support the report. Optional complete evidence exports should be prepared only when needed to reproduce a result. Arbitrary binary splitting would retain all the storage cost while making the package harder to use.

## Rebuild acceptance

The existing workspace and this checkout have different scopes. Game builds and prototypes exist locally; their complete sources and inputs have not yet been exported here. The portable input regression is the first executable research export. It is not the full game engine.

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

Markdown remains complete with captions, limitations and static figures. The Wiki pre-renders that Markdown; JavaScript adds optional interactions. Measurement files stay in `docs/evidence/`, while conceptual figures have explicitly illustrative parameters in `docs/figures/`. Generated HTML is ignored and rebuilt. Source links point to the exact Markdown copied into that reader build.

An interactive figure marker is a project convention, not native Markdown functionality. If JavaScript fails or is disabled, readers still receive the article and static figure. A future hosted URL can replace the local reader link after a real deployment is approved.
