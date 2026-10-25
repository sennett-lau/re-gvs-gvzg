# 10 · Further work

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/10-further-work.html).

> **At a glance**
>
> - **Question:** Which tests and integrations should come next?
> - **Result:** The proposed sequence covers current-phone comparisons, the menu bottleneck, complete game flows and integration of both multiplayer routes.
> - **Still open:** These are proposed experiments. They do not establish new game-performance or multiplayer results.

The [findings and lessons](09-learnings.md) describe what the retained evidence supports. This page collects the unfinished experiments and possible extensions.

## What to implement next

> [!TIP]
> **Test the current phone build in the same scene.**
>
> Compare fixed 60 and Auto during ordinary boot, menus and battle. Keep audio running at zero output gain. Record the build and stable measurement windows.
>
> This comparison must precede broader claims about phone performance.

### 1 · Validate the current phone build

Record ordinary boot, menu, selection and battle with stable measurement windows, current browser cadence and running audio.

Compare the same scene at fixed 60 and Auto. Include fullscreen and a longer warm-device session. Distinguish computation, shown callbacks and physical display evidence.

### 2 · Resolve the menu bottleneck

Capture the command observer on the affected phone before modifying batching. If many small batches are implicated, prove texture and framebuffer dependencies, compare images and VRAM, and retain the conservative fallback.

Fast desktop menus cannot demonstrate a phone fix. See [the performance investigation](03-performance.md) for the existing evidence.

### 3 · Finish game-flow coverage

Reach natural results, re-entry and rematch. Then extend high refresh one mode/camera lifecycle at a time. Preserve pause, input edges and cue timing.

Improve effects or hierarchy-aware pose interpolation only with corresponding visual controls. See [adaptive results and limits](06-adaptive-rendering.md) for the current coverage.

### 4 · Integrate the two multiplayer routes

- **Route A · Streaming:** Complete a host-plus-two-client match. Test latency, relay use and disconnects. See [one host, two controllers](07-host-streaming.md).
- **Route B · Independent clients:** Expose agreed selection and settings. Prove battle-to-rematch checkpoints. See [a game on each device](08-independent-clients.md).

Investigate the original Network Battle bridge separately before committing to restoration. It is an integration option within route B, not a completed third mode.

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
