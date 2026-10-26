# 10 · Further work

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/10-further-work.html).

> **At a glance**
>
> - **Question:** Which tests and integrations should come next?
> - **Result:** The proposed sequence covers current-phone comparisons, the menu bottleneck, complete game flows and integration of both multiplayer routes.
> - **Still open:** These are proposed experiments. They do not establish new game-performance or multiplayer results.

**⬜ Untested · The experiments below are the next acceptance targets.** The [findings and lessons](09-learnings.md) describe the existing results.

## What to implement next

> [!TIP]
> **Measure what reaches the display.**
>
> Start with the **fixed-60 presentation gap**, then test a confirmed 120/144-Hz session. The retained PC run reported about 56 shown updates/s at both fixed targets.
>
> Keep current-phone throughput as a separate comparison. Neither result substitutes for the other.

### 1 · Resolve the presentation gap

Record the selected monitor, OS refresh setting, browser version, window placement, fullscreen state and internal/display size. A panel specification alone does not identify the active session's cadence.

First capture an idle `requestAnimationFrame` baseline. Then compare fixed 60, fixed 120 and Auto using the same build, scene and scripted input. Use at least 60 stable seconds per condition after warm-up. Repeat windowed and fullscreen, keeping the window wholly on the selected display. With multiple monitors, record which display owns that window.

#### Align browser work with presentation events

Log a frame ID and `performance.now()` at each GPU submission, plus the scheduled `requestAnimationFrame` timestamp, callback entry time and task-yield resume time. Store these in a bounded in-memory buffer; export after the run. Keep an observer-off control and avoid per-frame console output. GPU completion is a work-completion timestamp, not a display timestamp.

Use Windows **PresentMon** to capture Chrome presentation events. Identify the game's GPU/compositor process and swapchain; recording every Chrome process is only a discovery step. Keep non-displayed rows. `DisplayedTime` reports display duration (`NA` for a frame that was not displayed), while `DisplayLatency` measures CPU-start-to-display latency. Save the tool version, command, CSV and display metadata. [PresentMon console documentation](https://github.com/GameTechDev/PresentMon/blob/main/README-ConsoleApplication.md)

For example, after verifying the installed version's options:

```powershell
PresentMon.exe --process_name chrome.exe --timed 70 --terminate_after_timed --write_display_metadata --output_file presentation.csv
```

Correlate browser frame IDs and their timing with the relevant swapchain. Report display-interval distributions and non-displayed presents. PresentMon measures OS presentation events; it does not identify whether two game images contain distinct motion or measure a panel's pixel response. Keep the native image comparison and any high-speed filming as separate checks.

Finally run a paired **diagnostic-only** trial in an isolated browser profile with `--disable-frame-rate-limit`. Chromium documents that it also implies `--disable-gpu-vsync`. Compare the same workload against the default flags; never ship this as the pacing fix. [Chromium display switches](https://github.com/chromium/chromium/blob/main/components/viz/common/switches.cc)

The existing one-second observations cannot reconstruct individual missed frames. The aligned trace will distinguish late game submissions, browser scheduling and compositor presentation before changing the scheduler. See [the historical rate plot](06-adaptive-rendering.md#the-latest-paired-pc-result).

### 2 · Validate the current phone build

Record ordinary boot, menu, selection and battle with stable measurement windows, current browser cadence and running audio.

Compare the same scene at fixed 60 and Auto. Include fullscreen and a longer warm-device session. Distinguish computation, shown callbacks and physical display evidence.

### 3 · Resolve the menu bottleneck

Batching and feedback checks already exist. Add counts for **why each batch ends**, with separate CLUT load, dispatch, slot-exhaustion and overlap counters. The [CLUT source audit](06-adaptive-rendering.md#batching-already-exists-find-what-ends-each-batch) explains why a palette address alone is insufficient. Capture the same menu and Versus scene on the affected phone, with observer-on/off controls.

If a specific flush rule dominates, test one conservative change. Compare output pixels and VRAM, including framebuffer-texture overlap cases. Fewer dispatches alone do not establish correct rendering or lower frame time.

Fast desktop menus cannot demonstrate a phone fix. See [the performance investigation](03-performance.md) for the existing evidence.

### 4 · Finish game-flow coverage

Reach natural results, re-entry and rematch. Then extend high refresh one mode/camera lifecycle at a time. Preserve pause, input edges and cue timing.

Improve effects or hierarchy-aware pose interpolation only with corresponding visual controls. See [adaptive results and limits](06-adaptive-rendering.md) for the current coverage.

### 5 · Integrate the two multiplayer routes

- **Route A · Streaming:** Compare selectable direct/relay ICE and supported media hints, then complete a host-plus-two-client match. Measure latency and recovery. See [the proposed settings](07-host-streaming.md#reduce-streaming-latency-the-proposed-experiment).
- **Route B · Independent clients:** Measure hash cost separately from input waiting, and choose a shared startup delay from relay timing and jitter. Add agreed selection and prove battle-to-rematch checkpoints. See [checkpoint and wait instrumentation](08-independent-clients.md#measure-checkpoint-cost-and-input-waiting).

Investigate the original Network Battle bridge separately before committing to restoration. It is an integration option within route B, not a completed third mode.

### 6 · Make the game experiment reproducible

The checkout now reproduces a bounded input regression and the historical rate plot, and exports a [partial render-hook layer](../../research/source/render-hooks/README.md). The CI recipe repeats portable checks. It still lacks the complete matched game package. Export pinned runtime sources, game hooks, generated-unit mappings, build commands and checksums together. Test them in an empty checkout before calling the game build reproducible. [Packaging and export scope](../REPOSITORY.md#rebuild-acceptance)

## Improvements worth proposing upstream

This work suggests five reusable compiler/runtime improvements:

- Preserve mappings from guest addresses to generated functions.
- Expose narrow, documented hook points.
- Provide deterministic tests with scripted input.
- Report simulation, presentation and audio counters separately.
- Test asynchronous resource completion at fixed guest times.

These are proposals for review, not published contributions or promises that the generic runtime should absorb game-specific behavior.

## Longer-term ideas

Wider-screen presentation, independent camera rendering and new cooperative rules remain separate projects with their own acceptance criteria.

The next useful milestone is a complete, repeatable user journey whose evidence survives beyond a successful experiment.
