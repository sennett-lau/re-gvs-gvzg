# 03 · Making the browser build faster

> Prefer the illustrated reader? [Read this chapter in the Wiki](https://sennett-lau.github.io/re-gvs-gvzg/03-performance.html).

> **At a glance**
>
> - **Question:** Why did the working port still freeze, slow down or struggle in fullscreen?
> - **Result:** Better diagnostics, bounded display resolution and more compiled vector programs addressed specific problems.
> - **Still open:** The phone’s slow main menu and GPU device loss are unresolved. Not every improvement has an isolated phone benchmark.

The first playable port was not consistently comfortable on a phone. The user reported freezes, occasional white screens, slower fullscreen play and lagging audio. Those symptoms did not identify one common cause. The optimization work therefore combined better diagnostics, bounded presentation work and targeted compilation, followed by experiments that could reject plausible explanations.

**🟡 Partially verified · Specific fixes and controlled comparisons.** The [baseline findings](../evidence/baseline-findings.json) preserve the measurements and original sources.

## Early mobile gameplay

<video controls muted playsinline preload="none" poster="../media/early-mobile-gameplay-poster.jpg" aria-label="Early optimized phone build: movement, boosting and firing during a space battle" src="../media/early-mobile-gameplay.mp4"></video>

*The project author's phone recording after the early optimizations. This 14-second excerpt shows working gameplay; its exact build is unidentified.*

[Clip provenance](../evidence/mobile-demo-provenance.json) records the crop and compatible 60-fps encoding. The later [phone diagnostics](06-adaptive-rendering.md#what-the-phone-tests-showed) supply measured rates.

## Show why a device freezes or slows down

The page gained visible game/GPU errors and downloadable diagnostics recording build identity, browser capabilities, dimensions, mode, frame counters and audio behavior. A phone can advertise a desktop-style user agent, so relying only on that string could miss a mobile device. Detection and explicit override tests were added to make the chosen presentation policy inspectable.

An earlier `mobile-3` capture recorded an Adreno WebGPU device-loss event. At that point, it already showed `mobileMode=true`, scale 1 and a 432 × 324 canvas. This is an important negative result: the incident cannot simply be explained by a missing `mobile=1` query. The later `mobile-4` detection improvement was not evidence that the underlying GPU failure had been fixed. A white screen, a stopped game and a slow but advancing game require different investigations.

The same distinction applies to sound. An audio queue can empty because the guest runs too slowly. Changing output volume cannot repair that. For performance tests, output gain was set to zero while audio production and ring-buffer consumption remained active. Suspending the AudioContext would remove work and alter the pacing experiment.

## Limit the extra work in fullscreen

Fullscreen is a display request, not a request to emulate more pixels. The presentation changes limit rendering resolution independently of the CSS area, keep letterboxing outside the GPU surface and coalesce resize bursts. The retained validation describes 480 × 360 “fast” and 640 × 480 “sharp” presentation choices at 4:3, with separate desktop and widescreen handling. Detail can change during play. A compact FPS readout remains visible in fullscreen.

The expected benefit is less unnecessary GPU surface and resize work on high-density screens. The UI regression checks establish sizing behavior and preservation of the running game. The user reported that an optimized build felt faster, but those observations do not constitute a controlled before/after phone benchmark isolating fullscreen. The research should keep the implementation, behavioral checks and subjective report distinct.

## Compile the vector programs used in combat

The original recorded VU set covered 45 images encountered during boot and menus. Later capture expanded it to **116 program images and 187 entry points**, including combat programs. Compiling a more complete recorded set reduces reliance on the runtime's uncompiled execution path for those programs.

Two retained native captures, frames 9,000 and 10,000, matched pixel for pixel before and after the expanded VU compilation. That supports output preservation at those points. It neither proves all VU paths have been captured nor quantifies a browser/phone speedup. The default WebAssembly package also omits profiling names. Diagnostic builds can include these names when needed. A smaller or differently instrumented build must still be identified explicitly in comparisons.

## The slow menu is a separate problem

> [!IMPORTANT]
> **The slow menu needs a separate investigation.**
>
> The later full-game phone capture measured **20–24 computed FPS** and **33–40% game speed** in the main menu. It produced roughly **16,000–19,000 PCM frames/s**.
>
> Ordinary Versus battle in that build stayed near 60 computed FPS and normal speed. Neither interval generated adaptive extra frames. Interpolation therefore cannot explain the observed menu cost.

The hardware-PC control did not reproduce the phone slowdown. Its stable menu window measured 59.977 computed frames/s and 99.961% guest speed with silent, running audio. An earlier slow Mac result was also confounded by reported machine overload. Neither “all browsers are too slow” nor “the phone is definitely GPU-bound” follows from these observations.

A WebGPU observer counted existing dispatches without adding GPU commands, fences or a new wait policy. The PC comparison found approximately **1,446 raster dispatches per guest frame** in the menu versus **69** in Versus setup. This makes numerous small commands a concrete investigation lead. However, sampled GPU timestamps disproportionately captured light passes and omitted presentation/compositor work. They cannot estimate total GPU utilization or identify the phone's bottleneck. The phone needs its own comparable capture.

## What did not improve performance

Several tempting changes were tested and excluded. Shorter native time slices did not improve presentation. Chunking large WebGPU uploads into 1 MiB or 256 KiB pieces increased upload cost without establishing an overall FPS gain. A bounded early-release experiment for presentation waits produced no winning fallback releases and no meaningful menu improvement.

These results constrain the next attempt. A source comment about a slow upload path is a hypothesis, not browser-internal evidence. Time spent waiting for presentation does not by itself prove that bypassing the wait is safe. A brief faster tail of a capture cannot outweigh worse total cost or a changed game workload.

The next useful test compares the same scene on the affected device:

1. Fix the build, internal resolution, game mode, input and duration.
2. Retain rendered output, game-speed counters and audio counters.
3. Compare runs with instrumentation enabled and disabled.
4. Check controls and scene transitions afterward.
The following chapters explain why improving a counter beyond 60 requires additional game-level work even after these browser costs are reduced.

<details>
<summary>Source trail and verification records</summary>

The original sources include `docs/gundam-vs-z-gundam.md`, `web/shell.html`, `games/gundam-vs-z-gundam/build-validation.json`, `research/gundam-fps/mobile-audit/2026-10-24-c816-mode4/README.md`, `research/gundam-versus-audit/README.md`, `research/gundam-menu-gpu-probe/pc-pair-analysis.json`, and `research/gundam-fps/web-audit/render_cost_findings.md`.

</details>
