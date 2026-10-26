# 04 · Understanding the frame-rate goal

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/04-frame-rate.html).

> **At a glance**
>
> - **Question:** Can we show smoother motion without making the game run too fast?
> - **Result:** Keep gameplay at 60 updates per second and draw intermediate poses. Simply increasing the video clock accelerated the game.
> - **Still open:** Rendering 120 images does not prove a screen displayed them. Normal-speed 144 Hz and 120-Hz gameplay simulation remain unproven.

The first high-refresh experiment made the game run faster, not correctly. The later prototype took a different route: retain 60 gameplay updates per emulated second, but render intermediate model and camera poses more often. This distinction explains both the progress and the remaining gap between a counter showing 120 and a phone displaying smooth, normal-speed play.

**✅ Verified · Native timing and image comparisons.** See [R01–R03](../evidence/rendering-findings.json) for the retained controls.

## Read the five frame-rate measurements

| Measurement | What it establishes | What it does not establish |
| --- | --- | --- |
| Virtual video rate | How frequently the guest receives scheduled video intervals | Correct gameplay speed |
| Gameplay updates | How frequently movement, combat and timers advance | How many images reach the screen |
| Computed render updates | How many rendering iterations finish | Unique image content or physical display delivery |
| Browser “shown” cadence | Browser callbacks with newly completed presentations | Direct measurement of screen scanout |
| Physical display refresh | The screen's refresh capability | That the game supplies a distinct image for each refresh |

Audio adds another independent clock. The EE clock runs at 294,912,000 cycles per emulated second. The IOP runs at EE/8. The SPU2 audio path produces 48,000 stereo sample frames per emulated second. Producing only 24,000 sample frames per wall second means the game is falling behind even if a video counter looks high. Generated audio duration also cannot prove that a device played it without underruns.

“Emulated second” and “wall second” must remain separate. An offline run can correctly generate 120 frames for one emulated second while taking two real seconds to do so. A high-refresh display is then irrelevant to the immediate throughput problem.

## Experiment 1: increase the video clock

The rate-only probe loaded the same saved battle and scheduled video at 60, 120 or 144 Hz. The EE/IOP clocks and audio sample rate stayed unchanged. It excluded the inherited first interval from measurement. Each row below covers five **emulated** seconds, not a five-second real-time performance claim.

| Video target | Battle updates | Countdown ticks | Countdown seconds | Produced audio frames |
| ---: | ---: | ---: | ---: | ---: |
| 60 Hz | 300 | 300 | 5 | 240,000 |
| 120 Hz | 600 | 600 | 10 | 240,000 |
| 144 Hz | 720 | 720 | 12 | 240,000 |
| 120 Hz, countdown-only control | 600 | 300 | 5 | 240,000 |
| 144 Hz, countdown-only control | 720 | 300 | 5 | 240,000 |

The countdown-only control was a diagnostic intervention. It did not become a playable patch. At the higher rates, actor positions still matched the corresponding accelerated run despite the corrected countdown. In the movement comparison, one second at 120 Hz reached the same positions as two seconds at 60 Hz. One second at 144 Hz matched 2.4 seconds at 60 Hz. The game advances substantial behavior once per update rather than through a universal elapsed-time parameter recovered by this investigation.

Simply replacing timer constants would also be incomplete. The original match clock is a signed 16-bit field: 300 seconds multiplied by 144 would require 43,200 ticks, beyond its positive range. Expiry, exact event thresholds and initialization all matter. A timer that looks right is weak evidence when movement, damage, animation and AI have not been checked.

## Experiment 2: render without advancing gameplay

The next prototype used an existing branch that bypasses the mode update while retaining drawing callbacks. At 120 video intervals, it ran canonical gameplay on one interval and additional rendering on the other. Here, canonical state means the gameplay state at a regular 60-Hz update. This corrected the update cadence but initially drew almost the same state twice. A two-second moving sequence contained 241 captures, including its initial observation. Only 122 images were distinct.

Interpolation changed the rendering copies of model transforms and the camera between their previous and current canonical states. The same sequence then contained 241 distinct image hashes while its tracked simulation state continued to match the 60-Hz reference. This is evidence of new visual samples in that captured scene, not merely repeated framebuffers.

> [!IMPORTANT]
> **120 render updates can retain 60 gameplay updates.**
>
> Input, collisions and combat decisions still advance at 60. The additional image shows an intermediate pose between retained states.
>
> The implemented method adds approximately **16.7 ms** of presentation delay, or one simulation tick. It produces smoother motion at the cost of some visual delay. Input responsiveness does not double.

<!-- interactive: render-clock -->

![Conceptual interpolation between two canonical gameplay updates](../figures/render-clock.svg)

## Two research routes, with different costs

| Route | Current result | Remaining work |
| --- | --- | --- |
| Keep gameplay at 60 and interpolate extra renders | Implemented and tested in bounded battle paths | Physical high-refresh presentation, more effects and modes, sustained phone throughput |
| Run gameplay at 120/144 with smaller timesteps | Not implemented | Recover and retime movement, acceleration, collision, animation, AI, input, cooldowns and scheduler behavior |

The adaptive implementation is bounded to 60–120 video Hz. Normal-speed 144 rendering has not been demonstrated. Its fractional relationship to 60-Hz simulation requires correct phase handling. The render budget shrinks from 8.33 ms at 120 to 6.94 ms at 144. Raising a constant would not establish that either the behavior or the hardware meets that budget.

## How to prove that higher refresh works

A defensible result needs separate checks on the intended device:

- Normal-speed gameplay, correct controls and correct transitions.
- Stable audio production and consumption.
- Distinct rendered motion.
- Measured display delivery.
The latest PC result supports approximately 120 computed render updates at normal game speed in a narrow Versus scene. Its captured browser cadence was near 60 Hz, with about 56 shown updates per second. Physical 120-Hz delivery and current-build phone performance remain open tests.

The next chapters explain the recovered rendering boundary. They cover continuous timing, button-press detection and the conditions that permit extra rendering.

<details>
<summary>Source trail and verification records</summary>

[R01–R03 in the curated evidence file](../evidence/rendering-findings.json) identify the original working-tree sources, their SHA-256 hashes, and the selected measurements. The principal source reports are `docs/gundam-high-fps-research.md` and `docs/gundam-120fps-prototype.md` in the original `ps2-web-recomp` working tree. Selected visuals are included below. Raw RAM and save states remain outside this report repository.

</details>

## See repeated frames and interpolated motion

**Left: the repeat control. Right: interpolated model and camera poses.** Both sequences contain 241 native captures from the same two-second movement fixture, including the initial image. The control has 122 unique images; interpolation has 241.

<video controls muted playsinline preload="none" poster="../media/repeat-vs-interpolate-poster.png" aria-label="Four-times slower comparison: repeated frames on the left, interpolation on the right" src="../media/repeat-vs-interpolate-quarter-speed.mp4"></video>

*Playback is four times slower: 120 captured samples per emulated second are encoded at 30 FPS. This makes intermediate poses visible on an ordinary display. It is an offline visual comparison, not a browser performance recording.*

[Download the silent comparison](../media/repeat-vs-interpolate-quarter-speed.mp4) · [Capture and encoding provenance](../evidence/review-provenance.json)
