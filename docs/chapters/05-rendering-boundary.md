# 05 · Recovering a safe rendering boundary

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/05-rendering-boundary.html).

A high-refresh patch needs to know which instructions advance the game and which only prepare a picture. The recompiler supplied executable experiments; reverse engineering supplied the meanings needed to change them. Neither tool automatically found a safe, whole-game 120-Hz switch.

This account was reviewed on 2026-10-25. [Evidence records R02, R04 and R05](../evidence/rendering-findings.json) distinguish original-byte analysis, targeted regressions and actual browser continuation tests.

## Tool roles and the original executable

The target was the Japanese `SLPS-25419` executable, SHA-256 `294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6`. Findings and guest addresses in these chapters refer to that executable; they are not portable patch offsets for other regional releases.

Direct Ghidra analysis with the PS2/R5900 extension recovered the relevant disassembly and decompiled control flow. The AI-assisted RE tooling rejected this R5900 target with `architecture_unsupported`; treating it as generic MIPS would not have established correct register or instruction semantics. Later, the AI agent’s supported browser scenarios helped exercise the actual Windows PC build. The adapter limitation did not mean Ghidra analysis or the runnable recompilation had failed.

The early static investigation checked 2,738 retained instruction rows across 38 focused exports against original ELF bytes. The expanded rendering investigation checked 4,541 rows across 75 exports. These checks bind the retained disassembly to the input binary. They do not prove every semantic label, resolve every indirect call, or cover the entire game.

## Finding the split

The main worker combines mode updates, object preparation, graphics callbacks and rendering. Skipping the whole worker would skip the desired drawing as well. The useful boundary was the original branch at `0x212500`: it bypasses the main mode update while preserving drawing callbacks. The prototype uses this path for extra rendering intervals.

That branch alone was insufficient. Input polling/history, application counters and a screen-effect update also needed canonical 60-Hz handling. The graphics packet and DMA pipeline remained active. A separate review found that the queue-reset function starts the previous buffer's DMA before a later function waits for it; skipping arbitrary submissions while retaining their waits could deadlock. No general packet-dropping shortcut was accepted.

The hook experiments modified copies of generated C++ units and linked those objects ahead of the existing archive. Writing an instruction into guest RAM would not automatically rewrite C++ already emitted by static recompilation. The recovered guest address therefore had to map to a generated function and a rebuilt unit.

## Interpolate rendering copies, retain canonical state

The entity-to-model copy at `0x1E4370` provided a place to retain previous and current rendering poses. The hooks interpolate root translation and wrapped angles, plus world-space bone transforms. Bone rotation uses shortest-path quaternion interpolation; translation and scale are treated separately. Invalid or disabled matrices take a conservative fallback. Two verified attachment reads use the corresponding interpolated model bones.

The camera requires more than moving its position. The prototype interpolates eye, target and up vectors, reconstructs the original look-at view and projection products, and restores canonical camera fields after drawing. The game's entity positions and skeletal simulation matrices are not overwritten by these rendering hooks.

Controlled comparisons tracked positions, canonical bone and camera hashes, health, ammunition and reload state. The final native suite retained 16 runs and 6,852 aligned state/clock comparisons, with no reported failures. All 241 VU-threaded captures in its moving-scene comparison matched the serial renderer. These checks support the tested state trajectory and rendering consistency; they are not whole-game or exhaustive full-RAM equivalence.

World-space bone interpolation can change joint spacing between samples. Culling, projectiles, lighting, HUD animation and special effects are not comprehensively interpolated. Camera cuts and teleports also need suitable history resets. Retaining these limits is part of the design, rather than calling the feature complete because one moving suit looks smooth.

## A real input failure exposed a second boundary

An earlier browser candidate sustained high-rate rendering but missed an ordinary Start press. The old gate skipped only the copied input record. The original pad routine at `0x226D30` still updated live history on extra intervals, publishing a rising edge before the mode update was skipped. The following canonical interval polled the held button again and replaced that edge with zero. The pause handler read this live edge, so holding Start longer did not help.

The correction returns from the pad routine before its prologue on render-only intervals. Ordinary host input and asynchronous IOP polling remain in use. A restricted interpreter executing the original edge and pause instructions tested 1,265 arrival phases: the previous arrangement failed 369 cases; the corrected gate failed none. Subsequent PC journeys visibly paused, resumed and exited with ordinary controls.

This solves a lost edge, not all input latency variation. An earlier dynamic-rate comparison still saw asynchronous IOP arrival shift by one logical update. Replaying matched game-facing input records made controlled state comparisons pass, but that replay was a diagnostic, not the interactive product path or proof of adaptive lockstep networking.

## A shared cue clock needed its own correction

The VBlank interrupt increments a field at context offset `0x58`. An outer callback uses it to advance sound-associated time/marker records. At 120 video intervals this counter advanced twice as fast even when battle logic stayed at 60. A synthetic active record with a 60-tick terminal marker ended after approximately 0.508 seconds instead of 1.017 seconds.

The correction gates only the generated store corresponding to original instruction `0x21C688` during an extra render. The remaining interrupt instructions, physical VBlank counter, GS wait behavior and outer callback continue. A bounded original-instruction regression and later paired PC tests verify that the cue counter follows canonical ticks while extra rendering survives.

An earlier “volume envelope/fade” interpretation was withdrawn. The verified description is a sound-associated cue/marker clock; a voice or portrait animation role remains an inference. Counter-rate correctness does not prove a particular audible fade, PCM pitch change, or every audio effect.

## Why mode guards remain essential

Arcade and local Versus call a shared battle engine, but selection, pause, results, split-screen and network synchronization have different lifecycles. A safe guard includes state, stage, initialization, active phase, human mask and pause state. The Versus extension additionally checks both split-camera flags and the active graphics camera. Scene changes clear interpolation history after restoring temporary camera data.

The useful outcome of reverse engineering is this narrower contract: known rendering work can run more often under verified conditions. The next task is to extend that contract with evidence, not to remove its conditions globally.
