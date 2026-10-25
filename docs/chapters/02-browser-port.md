# 02 · From C++ to a browser game

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/02-browser-port.html).

> **At a glance**
>
> - **Question:** What else does the translated game need to run in a browser?
> - **Result:** Module-loading and compiler fixes, browser services and a matched web package made the tested paths work.
> - **Still open:** The earliest native tests and later browser tests belong to different stages. The first release still needs a clean, verified reconstruction.

Producing C++ was the beginning of the port. The game still needed compatible module loading, correct generated control flow, graphics and sound services, asynchronous disc reads, and a browser interface that could report failures. The practical milestone was a playable path through boot and a battle, supported by separate native, compiler and browser checks.

The retained [baseline findings](../evidence/baseline-findings.json) distinguish those checks. The original validation manifest was later updated through `gundam-mobile-4`; it is not an untouched record of the very first successful build. This matters when reconstructing a future `v0.1.0`: a filename saying “baseline” cannot establish that later optimizations were absent.

## Fix loading and generated control flow

The game's `LOADHIGH.IRX` path required IOP module operations that the runtime did not yet implement in the necessary form. The IOP is the PS2's input/output processor, used for services such as loading modules and accessing devices. Its `LoadModuleWithOption` operation loads a module with an allocation preference; `StartModule` starts a previously loaded module. Combining both actions unconditionally would change the game's expected ordering.

The runtime change separates loading from starting, supports the observed high-memory allocation case, and starts module entry points on a loader thread because they can block. Completion wakes the original caller and returns the module result. Unsupported custom options still return an error. This is a bounded implementation of the observed contract, not a claim to have implemented every possible IOP loader feature.

The compiler also emitted an invalid fallthrough in a particular delay-slot case. On the guest architecture, a branch's delay-slot instruction participates in control flow; that instruction could also have its own entry. The generated code tried to jump to a following label merely because its address was inside the current unit, even when that instruction had not been translated. The fix checks actual code membership and otherwise exits through dispatch. `tests/codegen_fallthrough.py` retains a game-free regression for this case.

Together with the module-boundary and external-tail-call changes from chapter 01, these repairs turned a booting but incomplete translation into one that could continue through the observed battle path. Small compiler/runtime fixes are useful upstream candidates because their tests can describe the general defect without requiring commercial game data.

## What the native and browser tests each showed

The retained native runner reached the animated opening, Arcade menus, stage selection and pilot-name entry, then rendered a battlefield, mobile suit, HUD and running timer. After the external-tail-call correction, an extended run continued from frame 7,990 to frame 20,000 without missing-code errors and showed the results screen at frame 19,000. An earlier 6,000-frame run produced nonzero stereo audio.

That establishes a specific native game journey. It does not prove every mode, browser compatibility or network play. At the earliest documented browser stage, interactive automation was unavailable. The checks instead established that the WebAssembly compiled with the required JSPI and exception-reference features, browser support code passed its regressions, and served artifacts and disc ranges matched expectations. Later interactive PC and phone evidence belongs to later builds and is identified accordingly throughout this report.

## What the browser package needs

The WebAssembly module contains compiled game translation and runtime work. JavaScript initializes it and connects browser services. The generated data package contains the original ELF needed by the current boot arrangement; it must not be described as an empty loader. The complete disc remains a separate runtime input, served locally through the existing disc route. A standalone WASM file is therefore not a complete playable package.

Graphics use the runtime's WebGPU path. Audio uses a running engine and browser output path. The UI supplies keyboard/gamepad input, presentation controls and diagnostics. Shared memory and the rendering path require the appropriate browser capabilities and response headers; serving online requires HTTPS. A static file upload alone does not configure these runtime requirements or provide the user's disc.

Disc reads also need explicit failure handling. The browser support changes add timeouts and validate byte-range responses, so stalled or truncated data can become an actionable error instead of an unexplained wait. Audio pacing is bounded and handles unavailable or suspended audio states. Game and GPU failures become visible and can be captured in diagnostics. These changes improve observability and recovery; they do not make every device-loss event recoverable.

One packaging problem had a simpler cause: macOS gzip timestamp rounding made freshly compressed outputs appear older than their source files. The local server consequently skipped them. Updating their timestamps after compression restored the intended compressed-response selection. Artifact checks verify actual gzip contents and headers rather than assuming that a `.gz` filename makes serving correct.

## What counts as a usable baseline

A baseline package should preserve one matched HTML/JS/WASM/data set, the build identity and its limitations. The retained validation record identifies a WASM with SHA-256 beginning `98721b1e5c4c` and a size of 95,074,555 bytes. That is a specific historical artifact, not an interchangeable name for the later adaptive builds.

The [version plan](../VERSIONS.md) reserves a `v0.1.x` maintenance series for distinct mobile, recovery and presentation fixes. The assignments are candidates until their actual diffs and matched states are recovered; the mixed manifest does not prove that chronology.

The remaining publication work is to reconstruct the intended baseline from retained inputs, verify a clean setup with a user-supplied disc, and repeat the declared boot/selection/battle/exit flow. This report does not silently replace those acceptance checks with a successful native screenshot. It supplies the evidence needed to decide what a future package can honestly promise.

<details>
<summary>Source trail and verification records</summary>

Original sources include `runtime/src/iop/kernel.cpp`, `runtime/src/iop/libs.cpp`, `recomp/codegen.cpp`, `tests/codegen_fallthrough.py`, `scripts/build_web.sh`, `scripts/serve.py`, `web/runtime-support.js`, and `games/gundam-vs-z-gundam/build-validation.json`. Source fingerprints and selected manifest fields are retained in the evidence file; raw execution logs and personal browser diagnostics are not copied here.

</details>
