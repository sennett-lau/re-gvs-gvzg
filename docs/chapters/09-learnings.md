# 09 · Findings and next steps

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/09-learnings.html).

> **At a glance**
>
> - **Question:** What is established, and which experiment should come next?
> - **Result:** Recompilation, reverse engineering and runtime tests solved different parts of the problem. Rendering and multiplayer prototypes now have evidence from limited tests.
> - **Still open:** Prioritize current-phone tests, menu cost, full game journeys and end-to-end multiplayer acceptance before making broader release claims.

**Report date: 2026-10-25.** Recompilation made the original game executable in a new environment. Reverse engineering made specific behavior understandable enough to change. The research has produced useful rendering and multiplayer prototypes, alongside clear evidence that a working fixture is not yet a complete game integration.

## The tools answer different questions

`ps2-web-recomp` translates guest instructions into C++ and supplies the runtime behavior needed to execute them as native code or WebAssembly. The generated code is not the developer's original source, and translation does not automatically identify physics, animation or network semantics.

Ghidra with the PS2 extension helped recover those meanings from the original executable. The AI-assisted analysis workflow also supported browser experiments, although its decompilation path did not accept the R5900 target. The runnable translation, static analysis and runtime observations remain complementary. Keeping all three avoids treating plausible pseudocode as a behavioral proof or a passing frame counter as an explanation.

The effective loop was: reproduce a symptom, trace the responsible instructions, make a narrow change, compare controlled behavior, then test ordinary interaction. The failed Start press demonstrated why that final step matters: a successful throughput benchmark still missed a real input defect.

## What the evidence supports

| Area | Supported by retained evidence | Not yet established |
| --- | --- | --- |
| Browser port | Executable game paths, ordinary controls and tested save persistence | Every mode and a portable clean setup for every reader |
| Rendering | Distinct native intermediate images. Approximately 120 computed updates at normal speed in bounded PC combat. | Physical 120-Hz delivery, normal-speed 144, or 120-Hz gameplay simulation |
| Phone | Earlier saved-battle Auto capture: about 78 computed and 72 browser-observed updates/s at normal speed | Latest full-game high-refresh throughput or a fixed main-menu slowdown |
| Streaming | Implemented two-controller/media transport and a user's two-device observation | A retained full match with separate host and two clients, measured latency and recovery |
| Independent clients | Actor ownership, bounded deterministic trials and 2,640-tick browser agreement with delayed disc delivery | Full selection-to-rematch integration, adaptive cross-rate agreement or restored original online service |

The detailed limits and source hashes are in [rendering findings](../evidence/rendering-findings.json), [network findings](../evidence/network-findings.json) and the preceding chapters. These are curated records of previous work. Assembling this report did not rerun the game.

## What to implement next

> [!TIP]
> **Test the current phone build in the same scene.**
>
> Compare fixed 60 and Auto during ordinary boot, menus and battle. Keep audio running at zero output gain. Record the build and stable measurement windows.
>
> This comparison must precede broader claims about phone performance.

1. **Validate the current phone build.** Record ordinary boot, menu, selection and battle with stable windows, current browser cadence and running audio. Compare the same scene at fixed 60 and Auto, including fullscreen and a longer warm-device session. Distinguish computation, shown callbacks and physical display evidence.
2. **Resolve the menu bottleneck.** Capture the command observer on the affected phone before modifying batching. If many small batches are implicated, prove texture and framebuffer dependencies, compare images and VRAM, and retain the conservative fallback. Fast desktop menus cannot demonstrate a phone fix.
3. **Finish game-flow coverage.** Reach natural results, re-entry and rematch, then extend high refresh one mode/camera lifecycle at a time. Preserve pause, input edges and cue timing. Improve effects or hierarchy-aware pose interpolation only with corresponding visual controls.
4. **Integrate the two multiplayer routes.** For streaming, complete a host-plus-two-client match and test latency, relay use and disconnects. For independent execution, expose agreed selection/settings and prove battle-to-rematch checkpoints. Investigate the original Network Battle bridge separately before committing to restoration. It is an integration option within the second route, not a completed third mode.

## Improvements worth proposing upstream

This work suggests five reusable compiler/runtime improvements:

- Preserve mappings from guest addresses to generated functions.
- Expose narrow, documented hook points.
- Provide deterministic tests with scripted input.
- Report simulation, presentation and audio counters separately.
- Test asynchronous resource completion at fixed guest times.
These are proposals for review, not published contributions or promises that the generic runtime should absorb game-specific behavior.

Wider-screen presentation, independent camera rendering and new cooperative rules remain separate projects with their own acceptance criteria. The next useful milestone is a complete, repeatable user journey whose evidence survives beyond a successful experiment.
