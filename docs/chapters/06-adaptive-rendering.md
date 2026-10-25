# 06 · Adaptive rendering: results and limits

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/06-adaptive-rendering.html).

> **At a glance**
>
> - **Question:** Can the amount of extra rendering adapt to the device’s available time?
> - **Result:** A bounded controller adjusts the target while preserving 60-Hz gameplay. The latest retained PC test reached about 120 render updates at normal speed.
> - **Still open:** That PC used a 60-Hz display. The current full-game build still needs phone measurements and complete match-flow validation.

**Adaptive rendering adjusts the drawing workload while keeping gameplay at 60 updates per emulated second.** The early fixed-120 schedule advanced gameplay on every second render interval. If a device completed only 80 intervals per wall second, gameplay fell to 40 updates and audio slowed down. At a correctly scheduled target of 80, those 80 intervals can contain all 60 gameplay updates.

That does not accelerate a device unable to sustain the original 60-update workload. The main-menu phone slowdown remains an example of this lower bound. The evidence review took place on 2026-10-25. It records prior experiments. No gameplay test was rerun for this report.

## Keep game time continuous as the target changes

The native controller accumulates the **previously scheduled** video interval in EE cycles. It derives a canonical tick at 60 Hz. Once per VBlank, it stores the next requested rate. A repeated canonical tick marks an extra rendering interval. The fractional remainder determines interpolation between retained poses.

Changing the target does not reset this fraction. Resetting it could add or remove game time or visibly jump a pose. Even a return to 60 can retain a fractional offset, so interpolation history cannot always be bypassed just because the current target is 60. Scene changes reset pose history while the time accumulator remains continuous.

Fixed native tests at 80, 90, 100 and 120 produced 120 logic ticks and 96,000 audio frames over two emulated seconds. Tracked canonical fields matched the reference, with distinct captured images.

A longer controlled run made 45 rate changes over 30 emulated seconds. It included pause, resume and observed death/respawn. All 2,296 candidate observations matched, with 1,800 logical updates.

These comparisons used matched game-facing input-cache replay. A separate strict comparison with ordinary asynchronous input failed. They are not proof of network determinism across adaptive clients. [R03](../evidence/rendering-findings.json)

The implementation accepts 60–120. The policy selects 60, 72, 80, 90, 100, 110 or 120. Integer cycle division gives some rates a small timing approximation. The evidence for bounded runs does not establish arbitrarily long-term exact timing at every possible integer request.

## Adapt the target and give the browser time to paint

The browser policy samples guest speed, completed video work, audio queue health and software timing estimates. Two sustained slow samples can reduce the target. Five healthy samples can trigger a trial at the next higher step, followed by a settling period. Invalid, hidden or transitional windows do not justify an increase. This hysteresis avoids chasing every brief fluctuation.

A second problem was browser scheduling. Resolving a suspended WASM continuation inside `requestAnimationFrame` can resume work before the browser paints. The bounded presentation scheduler yields into a later task and limits bursts. A later correction permits one additional presentation slot for a small accumulated cadence deficit near the calibrated display cadence. It does not change gameplay or audio clocks, and it is not permission to run unlimited catch-up work when the browser is overloaded.

In the same-package PC comparison, this allowance increased the computed rate from 112.43 to 120.03 updates per wall second. Gameplay increased from 56.21 to 60.01 ticks per wall second. The measured window used 224 extra presentation slots and no new timer fallback. Shown cadence stayed around 56. The cadence-only candidate was nevertheless withheld after the missed-Start test described in Chapter 05: throughput and ordinary controls were separate acceptance gates. [R11](../evidence/rendering-findings.json)

Other hypotheses failed. Splitting uploads into 1 MiB or 256 KiB writes increased measured upload time. Shorter native slices did not establish better presentation. A bounded menu-wait deadline produced no winning escapes.

These variants stayed excluded. Arbitrary packet dropping was not established safe. [R12](../evidence/rendering-findings.json)

## The latest paired PC result

The corrected build identity is `22ac74de6d4a4c9d9bc3ce2509225bcf3f8891ea71c51075c4464f8a56c8252f`. Two sequential hardware-browser runs used normal boot, original single-human Versus setup, two pause/Resume cycles and a further 70-second combat observation. Audio gain stayed zero while its engine and ring-buffer consumption remained active. Strict measurement windows required stable scene identity, fullscreen at both endpoints and monotonic counters. [R06](../evidence/rendering-findings.json)

| Fixed target | Stable fullscreen seconds | Render updates/s | Gameplay ticks/s | Cue-clock ticks/s | Guest speed | Produced PCM frames/s |
| ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| 60 | 77.35754 | 60.0329 | 60.0200 | 60.0200 | 100.0550% | 48,021.4 |
| 120 | 77.28849 | 119.9661 | 59.9831 | 59.9831 | 99.9719% | 47,987.7 |

At 120, 9,272 renders accompanied 4,636 gameplay and cue-clock ticks. At 60, the extra-render counters did not grow. Changing combat, damage, respawn and pause overlays were visually checked. The one-frame render/logic endpoint difference in the 60 control is retained in the underlying evidence.

> [!IMPORTANT]
> **About 120 render updates/s, with gameplay near 60 updates/s.**
>
> The eligible PC battle ran at normal game speed. **The display was 60 Hz.** Median browser-shown rates were 55.753 and 55.789 per second.
>
> Physical 120-Hz presentation and latest-build phone throughput remain unverified. [Evidence: R06](../evidence/rendering-findings.json).

The automatic setups used different suits, CPU choices and stages, so this is a counter-rate and continuation comparison, not a deterministic same-match pixel/RAM A/B. Neither run reached natural results. Exact audio underrun counts were unavailable.

## Which game modes can use extra rendering?

| Original menu mode | Current high-refresh boundary |
| --- | --- |
| Arcade | Verified single-human active battle. Selection, countdown, pause and results keep the original rate. |
| VS. Battle | Verified compatible single-camera, single-human active battle. Split-screen remains excluded. |
| U.C. Mode | Remains 60. The shared engine alone does not cover campaign transitions and saves. |
| Survival | Remains 60. Successive rounds, variant behavior and exits need testing. |
| Training | Remains 60. Reset, timer, CPU behavior and camera signatures need testing. |
| Replay | Remains 60. Recorded-input and playback lifecycle need separate proof. |
| Collection | Remains 60. UI/preview animation is not an active-battle signature. |
| Network Battle | Remains 60. Original synchronization and session flow remain unintegrated. |
| Options | Remains 60. Original navigation and memory-card behavior must be preserved. |

A whole-game launcher therefore does not imply whole-game high refresh. The controller keeps the requested target but applies 60 in unsupported scenes. Natural match results/re-entry and the latest build's longer journeys remain acceptance work. [R07](../evidence/rendering-findings.json)

## What the phone tests showed

An earlier **saved-battle** Auto build, `8b1037f5…`, did demonstrate normal-speed phone play above 60 computed and browser-observed updates per second. A 53.410915-second window excluded the first three startup samples. It measured:

| Metric | Earlier saved-battle phone capture |
| --- | ---: |
| Render updates/s | 78.055 |
| Browser callbacks with newly submitted output/s | 71.615 |
| Gameplay ticks/s | 60.006 |
| Game speed | 99.995% |
| Produced PCM frames/s | 47,999.8 |

No fatal error was recorded, and no further pacing fallback occurred in that settled window. The user-supplied capture had a running audio context. During startup, the game ran slowly and the audio queue emptied. Both recovered afterward. [R13](../evidence/rendering-findings.json)

Auto moved through 80 → 60 → 72 → 80 → 90. Browser callbacks ran near 120 Hz for much of the session, then near 60 in the last four samples while game speed stayed normal. The startup label of approximately 60 Hz therefore did not describe a permanent browser ceiling. This is useful above-60 phone evidence, but not sustained 120 FPS or direct physical scanout measurement. Different target groups covered different scenes and cannot establish that 80 is always better than 90.

It also predates the full-game allocation, input and cue-clock changes. It cannot validate their phone performance retrospectively.

A separate, later **full-game** phone capture used `c816cfe3…`. All 219 samples were ineligible for extra rendering. Its Versus battle averaged 59.94 computed FPS under an explicit 60-Hz mode guard. A brief 63.07 reading was not a high-refresh result.

The same capture's main menu averaged 23.92 FPS on its first visit and about 20 on return, with insufficient audio production. That is a separate performance problem. [R08](../evidence/rendering-findings.json)

A subsequent PC observer found roughly 1,446 raster dispatches per main-menu frame versus 69 in Versus setup. This identifies many small graphics batches as an investigation lead. The PC itself stayed near 60 and did not reproduce the phone slowdown. Existing timestamp samples favored light passes, so extrapolating them into total GPU utilization would be misleading. A phone-side controlled capture and proven texture/read-write dependencies are needed before changing batching. [R09](../evidence/rendering-findings.json)

Pose-buffer reuse already removed six warmed allocations per model-copy call, with 63/63 actual RGB captures, full 32 MiB RAM and traces matching its control. That establishes reduced allocation work, not an isolated phone FPS improvement. The next acceptance target is a same-scene phone A/B plus physical high-refresh delivery, followed by full-match and mode-transition coverage. [R10](../evidence/rendering-findings.json)
