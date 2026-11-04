# 09 · Findings and lessons

> Prefer the illustrated reader? [Read this chapter in the Wiki](https://sennett-lau.github.io/re-gvs-gvzg/09-learnings.html).

> **At a glance**
>
> - **Question:** What did the experiments establish, and what did the workflow teach us?
> - **Result:** Recompilation, reverse engineering and runtime tests solved different parts of the problem. Rendering and multiplayer prototypes now have evidence from limited tests.
> - **Still open:** Current-phone throughput, public Online hosting, four-player sessions and the lockstep POC across physical devices remain open.

Recompilation made the original game executable in a new environment. Reverse engineering made specific behavior understandable enough to change. Original Online Mode now runs complete sessions through a private backend. The rendering and lockstep prototypes have evidence from limited tests.

## The tools answer different questions

`ps2-web-recomp` translates guest instructions into C++ and supplies the runtime behavior needed to execute them as native code or WebAssembly. The generated code is not the developer's original source, and translation does not automatically identify physics, animation or network semantics.

Ghidra with the PS2 extension helped recover those meanings from the original executable. The AI-assisted analysis workflow also supported browser experiments, although its decompilation path did not accept the R5900 target. The runnable translation, static analysis and runtime observations remain complementary. Keeping all three avoids treating plausible pseudocode as a behavioral proof or a passing frame counter as an explanation.

## What the evidence supports

> [!IMPORTANT]
> **A working fixture is not yet a complete game integration.**
>
> The retained tests support specific rendering and multiplayer results. Original Online Mode completed full sessions on two tested hosts through a private backend. The tests do not establish every game mode, current-phone high-refresh performance or public Online hosting.

| Area | Supported by retained evidence | Further scope |
| --- | --- | --- |
| 🟡 [Browser port](02-browser-port.md) | Executable game paths, ordinary controls and tested save persistence | Every mode and a portable clean setup for every reader |
| ✅ [Above-60 rendering PoC](06-adaptive-rendering.md) | Distinct native intermediate images. About 120 renders and OS display updates/s, with 60 gameplay updates/s, in bounded PC combat. | More game modes and sustained current-build phone use; further pacing refinement is optional |
| 🟡 [Phone](06-adaptive-rendering.md) | Earlier saved-battle Auto capture: about 78 computed and 72 browser-observed updates/s at normal speed | Latest full-game high-refresh throughput or a fixed main-menu slowdown |
| 🟡 [Streaming](07-host-streaming.md) | Native menu entry, two streaming clients, active battle and same-port rejoin on one PC | A retained full match with separate host and two clients, measured latency and recovery |
| ✅ [Original Online Mode](08-independent-clients.md#original-online-mode-works-end-to-end) | Registration, login, lobby, pairing, full matches, results and lobby return between two original clients. One PC, and a PC with a MacBook Pro, through a private backend. | Public hosting, phones, four-player sessions and a backend restart during a battle |
| 🟡 [Lockstep POC](08-independent-clients.md#the-local-versus-lockstep-experiment) | Normal boot, original selection, active two-human battle, round-end agreement and re-entry observations | Full selection-to-rematch integration, separate devices and adaptive cross-rate agreement |

The chapter links above explain each result. [Evidence conventions](../EVIDENCE.md) define the labels; the [evidence index](../evidence/README.md) lists records and runnable exports.

## Lessons from the workflow

The useful loop was to reproduce a symptom, trace its instructions, make a narrow change, compare controlled behavior, then test ordinary interaction. The failed Start press showed why the final step matters. A successful throughput benchmark still missed a real input defect.

- **Separate the metrics.** Computed renders, gameplay ticks and browser-shown updates measure different things. See [the rendering goal](04-frame-rate.md).
- **Keep results with their conditions.** An older phone capture and a bounded PC test cannot establish current-phone performance. See [adaptive results and limits](06-adaptive-rendering.md).
- **Keep the multiplayer routes distinct.** Streaming shares one runtime. Independent clients must agree on gameplay state. Their integration and validation needs differ.
- **Prove a cause with two builds.** A read-only snapshot suggested the returned-thread cause. Two builds that differed in one change proved it. The same design proved the SIF-latency fix. See [the technical findings](08-independent-clients.md#technical-findings).
- **Check the whole program, not one image.** Overlays call the main executable and share address windows. Coverage has to be checked against each image that can be loaded.
- **A runtime that is too fast can break original code.** Zero-latency SIF replies starved a low-priority thread. Timing that differs from the console is a defect even when every result is correct.
- **Test in the target browser.** Shared-memory decoding passed in Node and failed in Chromium.
- **Do not put lockstep traffic in one TCP stream.** A lost packet in a shared tunnel delayed every client on that device.

## Lessons from an AI-agent team

The original Online Mode work used a coordinating AI agent with several worker agents. Workers owned the executable build, the network backend, card storage and reviews. One shared PC ran most game tests, and a MacBook Pro ran the cross-device and A/B tests.

From the user's request to the first paired battle took **51.2 hours**. For **36.2 hours** of that, no agent worked on the project. The remaining **14.9 hours** contained all the work.

The whole record, through the stability tests and the release candidate, took **69.9 hours**. Agents worked for **26.4 hours** of it. Six idle periods accounted for the other **43.5 hours**.

| Idle period | Duration | Cause |
| --- | ---: | --- |
| Coordinator ended its turn after a checkpoint | 184 min | A research summary was treated as completion |
| Workers waited for an unanswered question | 67 min | The coordinator was idle when two workers asked about the disc-ID result |
| First provider's weekly usage limit | 1,920 min | All agents stopped until another provider's agents resumed the work |
| Second provider's weekly usage limit | 4 min | An account switch restored the agents |
| Second provider's 5-hour usage limit | 227 min | All four agents stopped until the reset |
| Second provider's 5-hour usage limit, again | 210 min | Three parallel workers used one 5-hour window in about 1.5 hours |

Three practices kept these stops from losing work:

1. Every capture, build and review was saved with fingerprints. A new agent could resume from files.
2. Each agent recorded its next experiment before stopping. The read-only thread snapshot was planned before the first usage limit.
3. Corrections stayed opt-in. A failed candidate never entered the default build.

The stops also exposed coordination rules:

- A coordinator keeps waiting on its workers while the goal is unmet.
- A worker question is blocking work. It needs an answer or an explicit decision.
- Usage limits are a planned resource. Record the stopping point before a limit arrives.
- Each failure names its layer: game, runtime, test harness or host. Six captures failed in the harness or environment, not in the game.
- Shared machines need a load record for each run. Heavy unrelated work on a host changed both frame rate and probe timing.

Token use from the request to the first battle was about **1.66 billion** tokens. The whole record used about **2.73 billion**. In both, **99%** were cached input, and output was about **6.6 million** tokens in total. Re-reading long contexts, not generating code, dominated the cost.

> [!NOTE]
> **Token totals come from local agent transcripts.**
>
> They count each model response once. One coordinator also served two other projects, so its share is an upper bound. Subagents launched inside some sessions are not counted, and one follow-up task shared a worker's session. Later documentation sessions are excluded.

See [Further work](10-further-work.md) for the proposed checks and integrations.
