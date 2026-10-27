# Repository design and export scope

This repository contains the research Wiki, complete retained C++ translation, runtime/compiler patches, adaptive hooks, one matched playable web package and separate multiplayer POC sources. [Run and rebuild the game](GAME_FILES.md) gives the supported setup.

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
| `scripts/` | Reader, game build/server, verification, packaging and numeric analysis | Yes |
| `apps/game/` | Game UI, input, diagnostics and one matched `prebuilt/` set | Exported; measured adaptive engine |
| `generated/` | Complete retained generated C++ and translation tables | 1,186 fingerprinted files |
| `src/hooks/`, `patches/` | Game-specific hooks and runtime/compiler changes | Exported with regressions |
| `vendor/` | Unmodified pinned compiler/runtime source and notices | Exported with per-file hashes |
| `research/source/` | Selected RE scripts, address maps and useful exports | Input regression, hook preparation and address map |
| `docs/media/` | Selected real captures with provenance captions | Early mobile demo, labeled native comparison, filmstrip, PC screenshot and desktop 60/120-fps viewing copies |
| `poc/streaming/`, `poc/lockstep/` | Multiplayer source and isolated protocol tests | Streaming support; source-only lockstep POC |
| `scripts/game/package.py` | Local playable ZIP and SHA-256 generation | Exported; no publishing action |
| `.local/release-builds/` | Ignored temporary packaging output | Created only when needed |

There is no `distribution/` or `releases/` source folder. Future GitHub Release pages hold the version notes and download assets. A release is a versioned software delivery, not a dummy tag created solely to bypass a file limit.

## Current delivery status

The 2026-10-27 source export reproduced the measured engine's WASM, JavaScript and data byte for byte. Both base archives and all ten replacement objects also matched. A silent PC browser test passed normal boot, menu input, Versus entry, active audio consumption, pause/resume and fullscreen. The [acceptance record](evidence/rebuild-acceptance.json) identifies the exact scope.

The source build uses a fresh output directory and the existing pinned SDK; it does not consume the original workspace's object files. The original workspace remains an archive of broader experiments. A current recompiler pass differs from the retained generated input, and the lockstep fixture is not exported. [Setup](GAME_FILES.md) describes these boundaries.

All changes are local commits. No remote, pull request, tag or GitHub Release is created by the preparation or packaging scripts.

## Code and data boundaries

The code export includes generated C++, selected reverse-engineered source, our runtime changes and a matched web package. The original ISO/ROM and compressed disc backup are excluded. Ordinary Git is suitable for readable source; one selected prebuilt package lives alongside it with its file hashes. Additional builds and useful optional archives can become Release assets.

A `.data` package containing the executable is still game-derived content. Generated files must retain their provenance; the project does not describe them as independently written original game source. Our third-party notices and content notice have distinct jobs.

The large raw diagnostic JSON captures are not required for a normal checkout. Curated, sanitized excerpts support the report. Optional complete evidence exports should be prepared only when needed to reproduce a result. Arbitrary binary splitting would retain all the storage cost while making the package harder to use.

## Rebuild acceptance

The exported package now provides the pinned vendor source, explicit compatibility patches, generated-unit mappings, hook/controller/interpolation sources, a portable link recipe, and a matched prebuilt package. The local rebuild and browser acceptance are recorded in [rebuild-acceptance.json](evidence/rebuild-acceptance.json).

For future changes, rerun source and artifact checks, build into a new empty output directory, and test boot, input, pause/resume and a battle silently. Preserve the audio engine's workload. Keep performance conclusions tied to the exact measured binary; a changed artifact needs new acceptance before inheriting a historical result.

The compiler-regeneration comparison is intentionally separate: the supported C++ input is retained and fingerprinted, while a fresh disc-to-C++ pass is a research candidate until its differences are resolved.

## Honest, small commits

The new history records work done now. Do not backdate commits or pretend a retained experimental build is a pristine baseline. Reconstruct a milestone from identified inputs, rerun its declared checks, then commit that coherent change with a body explaining the problem, mechanism, evidence and limitations.

The planned implementation sequence is extraction/regeneration, compiler and module-loading fixes, browser boot/input/audio/disc access, diagnostics and pacing, fullscreen cost, VU compilation, extra-render separation, interpolation, allocation reduction, mode/input/clock guards and reproducible packaging. Split independent changes; keep a fix with its relevant validation. Do not create a release for every small commit.

The local export commits preserve existing source and name their checks. They do not pretend to recreate the dates or exact intermediate states of uncommitted historical work. No historical binary is relabelled as an earlier baseline.

## Single-source reading

Read [Contributing](../CONTRIBUTING.md) before adding a page or explanation. It defines how to find related content and keep development procedures separate from the research narrative.

Markdown remains complete with captions, limitations and static figures. The Wiki pre-renders that Markdown; JavaScript adds navigation and theme controls. Measurement files stay in `docs/evidence/`, and measured plots stay in `docs/figures/`. Generated HTML is ignored and rebuilt. Source links point to the exact Markdown copied into that reader build.

## Stable Wiki hosting

The current quick tunnel is a temporary review link. A restart can change its address. For a stable public Wiki, build `.local/wiki/` and deploy that static output to an approved GitHub Pages project. [GitHub Pages](https://docs.github.com/en/pages/getting-started-with-github-pages/what-is-github-pages) serves static HTML, CSS and JavaScript from a repository.

The reader uses relative asset links. Before deployment, check it under the intended repository subpath as well as at `/`. Keep game hosting and its cross-origin isolation requirements separate from this static report. The research-check workflow only validates content; it contains no deployment step. Selecting the account, repository and public URL remains a publication decision.
