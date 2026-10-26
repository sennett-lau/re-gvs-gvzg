# 09 · Findings and lessons

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/09-learnings.html).

> **At a glance**
>
> - **Question:** What did the experiments establish, and what did the workflow teach us?
> - **Result:** Recompilation, reverse engineering and runtime tests solved different parts of the problem. Rendering and multiplayer prototypes now have evidence from limited tests.
> - **Still open:** Current-phone throughput, complete game flows and end-to-end multiplayer remain unverified.

Recompilation made the original game executable in a new environment. Reverse engineering made specific behavior understandable enough to change. The rendering and multiplayer prototypes have evidence from limited tests.

## The tools answer different questions

`ps2-web-recomp` translates guest instructions into C++ and supplies the runtime behavior needed to execute them as native code or WebAssembly. The generated code is not the developer's original source, and translation does not automatically identify physics, animation or network semantics.

Ghidra with the PS2 extension helped recover those meanings from the original executable. The AI-assisted analysis workflow also supported browser experiments, although its decompilation path did not accept the R5900 target. The runnable translation, static analysis and runtime observations remain complementary. Keeping all three avoids treating plausible pseudocode as a behavioral proof or a passing frame counter as an explanation.

## What the evidence supports

> [!IMPORTANT]
> **A working fixture is not yet a complete game integration.**
>
> The retained tests support specific rendering and multiplayer results. They do not establish every game mode, current-phone high-refresh performance or a complete online match flow.

| Area · partially verified | Supported by retained evidence | Not yet established |
| --- | --- | --- |
| 🟡 [Browser port](02-browser-port.md) | Executable game paths, ordinary controls and tested save persistence | Every mode and a portable clean setup for every reader |
| 🟡 [Rendering](06-adaptive-rendering.md) | Distinct native intermediate images. About 120 renders and OS display updates/s, with 60 gameplay updates/s, in bounded PC combat. | Uniform frame pacing, normal-speed 144, or 120-Hz gameplay simulation |
| 🟡 [Phone](06-adaptive-rendering.md) | Earlier saved-battle Auto capture: about 78 computed and 72 browser-observed updates/s at normal speed | Latest full-game high-refresh throughput or a fixed main-menu slowdown |
| 🟡 [Streaming](07-host-streaming.md) | Implemented two-controller/media transport and a user's two-device observation | A retained full match with separate host and two clients, measured latency and recovery |
| 🟡 [Independent clients](08-independent-clients.md) | Actor ownership, bounded deterministic trials and 2,640-tick browser agreement with delayed disc delivery | Full selection-to-rematch integration, adaptive cross-rate agreement or restored original online service |

The chapter links above explain each result. [Evidence conventions](../EVIDENCE.md) define the labels; the [evidence index](../evidence/README.md) lists records and runnable exports.

## Lessons from the workflow

The useful loop was to reproduce a symptom, trace its instructions, make a narrow change, compare controlled behavior, then test ordinary interaction. The failed Start press showed why the final step matters. A successful throughput benchmark still missed a real input defect.

- **Separate the metrics.** Computed renders, gameplay ticks and browser-shown updates measure different things. See [the rendering goal](04-frame-rate.md).
- **Keep results with their conditions.** An older phone capture and a bounded PC test cannot establish current-phone performance. See [adaptive results and limits](06-adaptive-rendering.md).
- **Keep the multiplayer routes distinct.** Streaming shares one runtime. Independent clients must agree on gameplay state. Their integration and validation needs differ.

See [Further work](10-further-work.md) for the proposed checks and integrations.
