# Contributing

This section is for contributors and coding agents. It contains development procedures and project plans. The main Wiki explains the research.

## Review the existing Wiki first

Review the current [Wiki](.local/wiki/index.html) before editing. If no reader is running, [build it locally](#run-the-reader-locally).

Then read the source [overview](README.md), the relevant chapter and its evidence.

1. Identify the research question or contributor task that the change addresses.
2. Search the existing Markdown for the same topic, claim and technical terms.
3. Read matching sections and their evidence before adding content.
4. Update the existing section when it already covers the topic.
5. Link to that section from other pages instead of copying its explanation.

For example, search with `rg -n 'interpolation|render updates' docs/chapters docs/evidence`. Search related terms when exact wording differs.

Create a new research section only when the material answers a distinct question that existing sections cannot cover. Similar content belongs in the existing section.

## Choose the right place

| Content | Destination |
| --- | --- |
| Project purpose and reading path | [Overview](README.md) |
| Research question, mechanism, failed experiment or measured result | The relevant chapter in `docs/chapters/` |
| Selected measurements and source records | `docs/evidence/`, linked from the relevant chapter |
| Cross-project findings and lessons | [Findings and lessons](docs/chapters/09-learnings.md) |
| Next research experiments | The relevant chapter and [Further work](docs/chapters/10-further-work.md) |
| Contributor workflow and local reader setup | This guide |
| Repository structure and future code exports | [Repository design](docs/REPOSITORY.md) |
| Candidate versions and release acceptance | [Version plan](docs/VERSIONS.md) |
| Source and binary packaging decisions | [Artifacts and file sizes](docs/DERIVED.md) |
| Wording and visual emphasis | [Writing and presentation](docs/WRITING.md) |
| Runtime inputs and third-party terms | [Game files](docs/GAME_FILES.md) and the notices in `docs/license/` |

Keep version plans, contributor instructions, agent procedures and packaging decisions out of the overview and main research chapters. Link to their contributor reference when needed.

A technical detail belongs in a chapter when it explains the experiment. Instructions for maintaining the repository belong here or in a contributor reference.

The sidebar keeps **Contributing** collapsed on research pages. Contributor references remain available without becoming part of the main reading sequence.

## Keep one source for each explanation

Edit the Markdown source. Do not maintain another copy of the article in templates, generated HTML or agent instructions.

Before adding a page, compare its purpose with the existing navigation. Prefer an existing section or a cross-reference when the topic overlaps.

Use the [writing guide](docs/WRITING.md) for short sentences, consistent terms and callouts. Keep test conditions and limitations beside each finding.

Report a proposal as a proposal. Preserve the distinction between native tests, browser tests and physical-phone evidence. Use generic terms such as “AI” or “coding agent.”

## Run the reader locally

Requirements: Node.js 20 or newer and Python 3. The reader does not need the game, a disc or a GPU.

```sh
npm ci --ignore-scripts
npm run wiki:build
npm run check
npm run wiki:serve
```

Open **http://127.0.0.1:8768/**. Stop the server with Ctrl+C. The server binds to loopback only.

Git ignores generated output in `.local/wiki/`. Rebuild after changing the Markdown, navigation, template or styles. The Markdown remains readable without a build.

## Check the change

1. Check the diff for repeated explanations, changed claims and misplaced maintenance content.
2. Build the Wiki and run the report checker.
3. Check affected pages and navigation on desktop and mobile.
4. Check figures and callouts when their content or presentation changes.
5. Record meaningful checks and remaining limits in the commit description.

Reader checks do not establish new game-performance results. Keep game tests silent without changing system volume. Keep audio processing active during timing tests, as described in [Evidence conventions](docs/EVIDENCE.md).

## Repeatable research checks

Run `npm run verify:research` to execute the input-edge regression, verify the render-hook export and regenerate both PC figures. The display analysis also checks selected per-frame intervals and endpoint counters. The figures should leave no diff after regeneration. These checks need Python 3, but no disc, GPU or original capture archive.

The local `.github/workflows/research.yml` recipe runs these checks, builds the Wiki and checks its links on pushes and pull requests once published. Actions are pinned to commit hashes, permissions are read-only, and the workflow does not deploy. Its commands were checked locally; a hosted CI run remains pending publication.

Regenerating the video is a separate FFmpeg task that requires the original capture archive. Preserve the source fingerprints and cumulative-image-count checks in `scripts/build-comparison-media.py`.

## Reader validation

The local checker parses the curated JSON and resolves Markdown and reader links, including anchors. It checks selected privacy markers and rejects accidental game payloads or oversized files. It also checks that chapter summaries and callout text survive conversion to HTML. Each callout must retain its evidence limits inside the same block.

These are bounded checks. They do not guarantee exhaustive anonymization. Run `npm run check` after building the reader in a Git checkout. Use `node scripts/check-report.mjs --source-only` to defer reader checks until a build exists. A private comma-separated `REPORT_FORBIDDEN_TERMS` environment value can add wording checks without storing those terms in the report.

The revised reader passed these checks:

| Reader check | Result |
| --- | --- |
| Page layout | 115 checks across all 23 pages, at widths of 320, 390, 768, 1,024 and 1,440 pixels |
| Chapter summaries | All 10 summaries appeared at all five widths |
| Callouts | All 11 blocks appeared at all five widths, with their evidence limits |
| Navigation | Stage links, Evidence links, keyboard mobile menu, section tracking and source disclosure passed |
| Theme switching | Dark by default. Saved choices, keyboard switching, navigation, reload, cross-tab updates and blocked-storage fallback passed. Both themes fit seven widths from 320 to 1,440 pixels. |
| Contributor navigation | Collapsed on research pages. Keyboard access, contributor-page expansion and return to the overview passed with and without JavaScript. |
| Retained game evidence | Labeled comparison decoded and played silently in eight theme/width cases. Mobile showcase autoplay, mute, hidden controls and looping passed at 320, 390 and 1,440 pixels. The filmstrip fit those widths. Four code excerpts rendered with and without JavaScript. Public media and selected pages matched the local build. |
| JavaScript disabled | Full chapter, summary, callout and native navigation remained available |
| Page and HTTP errors | None observed in this reader test |

Negative controls removed a summary and a callout limitation from generated HTML. The checker rejected both missing-content cases. Each test restored the generated file afterward. These checks guard against losing content during conversion, including an earlier bug that removed a summary with its adjacent reader hint.

The wording review preserved the chapters' existing numeric values and code identifiers. It checked descriptive sentence length and paragraph length. The [writing guide](docs/WRITING.md) records the rules for future edits.

The later 180-Hz evidence update passed 48 layout checks across eight affected pages, two themes and widths of 320, 390 and 1,440 pixels. Both new viewing copies decoded without errors. Overview autoplay, mute, hidden controls and looping passed; the chapter video remained opt-in. The new measurements remained readable without JavaScript. No page or HTTP errors appeared in that reader check.


These checks validate the report artifact and its reading interface. They do not add a new game, phone, audio or multiplayer performance result to the historical research.

## Keep commits and publication deliberate

Keep independent changes in small commits. Describe the problem, resulting behavior, checks and limits. Do not invent historical milestones or backdate work.

Check the effective author and committer identity before creating commits. Follow the user's account and publishing rules.

Permission to edit or commit locally does not authorize a remote push, pull request or release. Obtain explicit approval for the exact publication scope.
