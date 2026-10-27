# 02 · From C++ to a browser game

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/02-browser-port.html).

> **At a glance**
>
> - **Question:** What else does the translated game need to run in a browser?
> - **Result:** Module-loading and compiler fixes, browser services and a matched web package made the tested paths work.
> - **Still open:** The earliest native tests and later browser tests belong to different stages. The first release still needs a clean, verified reconstruction.

Producing C++ was the beginning of the port. The game still needed compatible module loading, correct control flow, graphics and sound services, and asynchronous disc reads. The browser interface also needed error reporting. The practical milestone was a playable path through boot and a battle, supported by separate native, compiler and browser checks.

The [test-record guide](../evidence/README.md#recompilation-and-performance) explains the records behind this chapter. It links to `baseline-findings.json`, a structured summary of earlier test results, build-file details and their sources.

The original validation manifest is a file list and test checklist. It was updated during development, including later mobile fixes labelled `gundam-mobile-4`. This is an internal build name used to identify a mobile compatibility revision. **The saved checklist does not tell us exactly which fixes were present in the first playable browser build.**

**🟡 Partially verified · Tested browser paths; clean baseline reconstruction pending.**

## Fix loading and generated control flow

The game's `LOADHIGH.IRX` path required IOP module operations that the runtime did not yet implement in the necessary form. The IOP is the PS2's input/output processor, used for services such as loading modules and accessing devices. Its `LoadModuleWithOption` operation loads a module with an allocation preference. `StartModule` starts a previously loaded module. Combining both actions unconditionally would change the game's expected ordering.

The runtime change separates loading from starting and supports the observed high-memory allocation case. It starts module entry points on a loader thread because they can block. Completion wakes the original caller and returns the module result. Unsupported custom options still return an error. This is a bounded implementation of the observed contract, not a claim to have implemented every possible IOP loader feature.

The compiler also emitted an invalid fallthrough in a particular delay-slot case. On the guest architecture, a branch's delay-slot instruction participates in control flow. That instruction could also have its own entry. The generated code tried to jump to a following label because its address was inside the current unit. It did not check whether that instruction had been translated. The fix checks actual code membership and otherwise exits through dispatch. `tests/codegen_fallthrough.py` retains a game-free regression for this case.

These repairs complemented the module-boundary and external-tail-call changes from chapter 01. Together, they allowed the translation to continue from boot through the observed battle path. Small compiler/runtime fixes are useful upstream candidates because their tests can describe the general defect without requiring commercial game data.

## What the native and browser tests each showed

The retained native runner reached the animated opening, Arcade menus, stage selection and pilot-name entry, then rendered a battlefield, mobile suit, HUD and running timer. After the external-tail-call correction, an extended run continued from frame 7,990 to frame 20,000 without missing-code errors and showed the results screen at frame 19,000. An earlier 6,000-frame run produced nonzero stereo audio.

> [!NOTE]
> **The completed match was a native test.**
>
> It established a specific game journey. It did not establish every mode, browser compatibility or network play.
>
> The later browser and phone results belong to later builds.

At the earliest documented browser stage, interactive automation was unavailable. The WebAssembly compiled with the required JSPI and exception-reference features. Browser support code passed its regression tests. Served artifacts and disc ranges matched expectations. Later interactive PC and phone evidence belongs to later builds and is identified accordingly throughout this report.

## What the browser package needs

The WebAssembly module contains compiled game translation and runtime work. JavaScript initializes it and connects browser services. The current boot arrangement needs the original ELF inside the generated data package. This package contains game data, including executable code. The complete disc remains a separate runtime input, served locally through the existing disc route. A standalone WASM file is therefore not a complete playable package.

Graphics use the runtime's WebGPU path. Audio uses a running engine and browser output path. The UI supplies keyboard/gamepad input, presentation controls and diagnostics. Shared memory and the rendering path require specific browser capabilities and response headers. Serving online requires HTTPS. The host supplies the disc through range requests, so visitors need no local disc file. Deployment must also preserve the isolation headers; [Game setup](../GAME_FILES.md) describes the hosting arrangement.

Disc reads also need explicit failure handling. The browser support changes add timeouts and validate byte-range responses, so stalled or truncated data can become an actionable error instead of an unexplained wait. Audio pacing is bounded and handles unavailable or suspended audio states. Game and GPU failures become visible and can be captured in diagnostics. These changes help identify failures and recover from some of them. They do not establish recovery from every GPU device-loss event.

One packaging problem had a simpler cause: macOS gzip timestamp rounding made freshly compressed outputs appear older than their source files. The local server consequently skipped them. Updating their timestamps after compression restored the intended compressed-response selection. Artifact checks verify actual gzip contents and headers rather than assuming that a `.gz` filename makes serving correct.

## What counts as a usable baseline

A baseline package should preserve one matched HTML/JS/WASM/data set, the build identity and its limitations. The retained validation record identifies a WASM with SHA-256 beginning `98721b1e5c4c` and a size of 95,074,555 bytes. That is a specific historical artifact, not an interchangeable name for the later adaptive builds.

The remaining publication work has three steps:

1. Reconstruct the intended baseline from retained inputs.
2. Check a clean host setup with a separately supplied disc.
3. Repeat the declared boot, selection, battle and exit flow.

This report does not silently replace those acceptance checks with a successful native screenshot. It supplies the evidence needed to decide what a future package can honestly promise.

<details>
<summary>Source trail and verification records</summary>

Original sources include `runtime/src/iop/kernel.cpp`, `runtime/src/iop/libs.cpp`, `recomp/codegen.cpp`, `tests/codegen_fallthrough.py`, `scripts/build_web.sh`, `scripts/serve.py`, `web/runtime-support.js`, and `games/gundam-vs-z-gundam/build-validation.json`. The evidence file retains source fingerprints and selected manifest fields. Raw execution logs and personal browser diagnostics remain outside this repository.

</details>
