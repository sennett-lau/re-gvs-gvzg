# 10 · Further work

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/10-further-work.html).

> **At a glance**
>
> - **Question:** What follows the completed high-refresh proof of concept?
> - **Result:** Above-60 rendering is demonstrated. The game package now rebuilds the measured engine. Next are multiplayer integration, regeneration consistency and broader device coverage.
> - **Still open:** These are proposed experiments. They do not establish new game-performance or multiplayer results.

**Follow-up work beyond the completed rendering proof of concept.** The [findings and lessons](09-learnings.md) describe the existing results.

## What to implement next

> [!TIP]
> **Build on the reproduced engine.**
>
> The [120-render PC result](06-adaptive-rendering.md#the-latest-paired-pc-result) meets the above-60 research goal. Further pacing refinement is optional.
>
> The matched game-code export now rebuilds the measured engine. The next delivery work is multiplayer integration and resolving fresh compiler-regeneration differences.

### 1 · Preserve reproducibility

The checkout now includes pinned runtime sources, complete adaptive hooks, generated units and a matched web package. A fresh source build reproduced the measured executable files byte for byte, and the silent browser acceptance passed. Keep those checks running as the code changes. Resolve the current disc-to-C++ regeneration differences before replacing the retained generated input. [Packaging and export scope](../REPOSITORY.md#rebuild-acceptance)

### 2 · Integrate the two multiplayer routes

- **Route A · Streaming:** Compare selectable direct/relay ICE and supported media hints, then complete a host-plus-two-client match. Measure latency and recovery. See [the proposed settings](07-host-streaming.md#reduce-streaming-latency-the-proposed-experiment).
- **Route B · Independent clients:** Measure hash cost separately from input waiting, and choose a shared startup delay from relay timing and jitter. Add agreed selection and prove battle-to-rematch checkpoints. See [checkpoint and wait instrumentation](08-independent-clients.md#measure-checkpoint-cost-and-input-waiting).

Investigate the original Network Battle bridge separately before committing to restoration. It is an integration option within route B, not a completed third mode.

### 3 · Validate the current phone build

Record ordinary boot, menu, selection and battle with stable measurement windows, current browser cadence and running audio.

Compare the same scene at fixed 60 and Auto. Include fullscreen and a longer warm-device session. Distinguish computation, shown callbacks and physical display evidence.

### 4 · Resolve the menu bottleneck

Batching and feedback checks already exist. Add counts for **why each batch ends**, with separate CLUT load, dispatch, slot-exhaustion and overlap counters. The [CLUT source audit](06-adaptive-rendering.md#batching-already-exists-find-what-ends-each-batch) explains why a palette address alone is insufficient. Capture the same menu and Versus scene on the affected phone, with observer-on/off controls.

If a specific flush rule dominates, test one conservative change. Compare output pixels and VRAM, including framebuffer-texture overlap cases. Fewer dispatches alone do not establish correct rendering or lower frame time.

Fast desktop menus cannot demonstrate a phone fix. See [the performance investigation](03-performance.md) for the existing evidence.

### 5 · Finish game-flow coverage

Reach natural results, re-entry and rematch. Then extend high refresh one mode/camera lifecycle at a time. Preserve pause, input edges and cue timing.

Improve effects or hierarchy-aware pose interpolation only with corresponding visual controls. See [adaptive results and limits](06-adaptive-rendering.md) for the current coverage.

## Optional frame-pacing investigation

This is an optional refinement after the completed above-60 proof of concept. It does not block the current Wiki.

The historical 56/s reading did not recur on the confirmed 180-Hz desktop. If this investigation resumes, explain frame spacing rather than assume a persistent four-frame-per-second loss.

At fixed 120, p95 display spacing was 16.67 ms and p99 was 22.24 ms. Fixed 60 also varied, with p99 at 27.79 ms. Preserve these traces as the control before changing the scheduler.

Compare fixed 60, fixed 120 and Auto in the same scene with the same input sequence. Keep at least 60 stable seconds after warm-up. Repeat windowed and fullscreen, with the window wholly on the recorded display. An observer-off control should measure instrumentation cost.

### Align individual submissions with display changes

The accepted session aligns whole measurement windows. To investigate individual frames, assign frame IDs and log `performance.now()` at GPU submission, scheduled `requestAnimationFrame` time, callback entry and task-yield resumption. Keep a bounded memory buffer and export after the run. Avoid per-frame console output.

Use **PresentMon** in the interactive desktop session, starting before the browser. Select the game's GPU process and swapchain after capture. Save the version, options and diagnostics, and reject overflowed traces. The completed experiment used **2.6.0**, whose CSV fields include `TimeInQPC`, `MsUntilDisplayed` and `MsBetweenDisplayChange`. An `NA` field is not enough to label a frame dropped. [Versioned CSV implementation](https://github.com/GameTechDev/PresentMon/blob/v2.6.0/PresentMon/CsvOutput.cpp)

A capture command for that version is:

```powershell
PresentMon.exe --process_name chrome.exe --qpc_time --write_display_metadata --no_track_gpu --set_circular_buffer_size 32768 --timed 180 --terminate_after_timed --output_file presentation.csv
```

Use a unique session name when coordinating multiple captures. Keep QPC alignment, endpoint counters and excluded attempts with the accepted record. The [exported sample analysis](../evidence/README.md#180-hz-desktop-session-repeatable-display-analysis) now reproduces rates and interval distributions without the game.

A later controlled comparison at a **120-Hz display setting** would separate 180-Hz refresh-slot quantization from scheduling jitter. Record the active setting and restore it afterward. The completed session kept all three monitors at 180 Hz.

If late submissions remain unexplained, compare an isolated **diagnostic-only** browser with `--disable-frame-rate-limit`. Chromium states that it also implies `--disable-gpu-vsync`. This flag was not used in the accepted tests and is not a shipping fix. [Chromium display switches](https://github.com/chromium/chromium/blob/main/components/viz/common/switches.cc)

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
