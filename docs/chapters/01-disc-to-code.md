# 01 · From a PS2 disc to C++

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/01-disc-to-code.html).

> **At a glance**
>
> - **Question:** How can we turn the disc’s executable code into something we can build?
> - **Result:** The recompiler translated the main executable and 325 loaded modules. Two code-discovery fixes were needed.
> - **Still open:** A clean rebuild package must be assembled. Generated C++ is translated game code. The original developer source was never available.

The starting point was a local disc image of [Mobile Suit Gundam: Gundam vs. Zeta Gundam](https://en.wikipedia.org/wiki/Mobile_Suit_Gundam:_Gundam_vs._Zeta_Gundam). The investigation used the Japanese PS2 release, serial `SLPS-25419`, with executable CRC `435D8236`. No original developer source tree was available. The first task was to extract executable inputs for the PS2 recompiler. Source records helped separate compiler defects from game behavior.

This chapter reconstructs that work from retained source, manifests and validation notes. It does not describe a new game build performed while writing this report. The selected facts and source fingerprints are in [baseline findings](../evidence/baseline-findings.json).

## What the tools contribute

The foundation was [ps2-web-recomp](https://github.com/snuri00/ps2-web-recomp), inspected at revision `6526f4803d98e10de50bea3af104a4d26e9df033`. Its recompiler translates PS2 executable instructions into C++ and combines them with a runtime providing the services the translated program expects. A native executable is useful for debugging. Emscripten compiles the same translated program and runtime into WebAssembly.

Translation does not recover the original variable names, comments, types or source organization. The resulting C++ is **game-derived generated code**, with dispatch machinery and operations that preserve guest-machine behavior. Reverse-engineered pseudocode and hand-written explanatory labels are separate research outputs. Both can be readable without being the developer's original source.

The guest is the PS2 system. The host is the device that runs the translated game. Translation leaves some emulation tasks in the runtime. The runtime still has to account for PS2 memory, module loading, interrupts, controllers, sound and graphics behavior.

The EE is the main Emotion Engine processor. VU programs perform vector work. GS refers to the Graphics Synthesizer. Moving EE or VU instructions into compiled code does not make the other components free.

## The executable was only part of the program

The supplied disc contained a main ELF executable and an `AFS_DATA.AFS` archive with fixed-address **MWo3 modules**. Compiling only the main ELF would omit code loaded later for menus, units and other game activity. The generic porting workflow also captured data regions as possible code windows for this executable, producing unsuitable final inputs.

The game-specific extractor, `scripts/mwo.py` in the original working tree, instead reads the archive table and checks each MWo3 header. It records the module name, fixed load address, text size, data size and uninitialized-memory extent. It checks archive bounds, rejects truncated or unexpected layouts, writes the original module image, and records the loader's initialization entry at image offset `0x80`. The retained module index contains **325 modules**.

Those details affect correctness. A module's address identifies where the guest loads it, not where C++ happens to be linked on the host. Its declared text range restricts tentative function discovery so mutable data is not translated as instructions. Additional discovered entries can be retained in `mwo-extra-entries.txt`. The build combines those entries with the extracted entries.

## Two discoveries about code boundaries

The compiler initially treated zero-filled memory within an executable segment as eligible static code. But the game could later load a module into that same memory. Translating the initial zeroes could mask the subsequently loaded image. The correction records the initialized file length separately from the total memory allocation and limits executable classification to the initialized range. The memory remains allocated. The compiler no longer assumes that this memory contains permanent code.

A second failure appeared during movement or combat at `0x00E2CD40`. Function discovery rejected a module routine whose final jump targeted the main executable. That jump was a legitimate external tail call: the runtime dispatcher could resolve it. The analysis change permits this external unconditional jump without relaxing the checks for arbitrary conditional branch targets. The accompanying `tests/analysis_tailcall.py` exercises the compiler behavior with synthetic input, avoiding a requirement to distribute the game just to test the regression.

> [!IMPORTANT]
> **Two compiler defects needed different fixes.**
>
> One concerned **which bytes count as code**. The other concerned **whether a valid function may leave its local image**.
>
> Treating every missing-code halt as an absent entry point would have hidden that distinction.

## Record the inputs needed to rebuild

The retained `scripts/build_gundam.sh` follows these steps:

1. Check for the local disc and extracted ELF.
2. Build the translation tools and run compiler regression tests.
3. Extract modules and merge entry lists.
4. Run `eerecomp` and `vurecomp`.
5. Build the native and browser targets.

The native configuration uses `-O1` to shorten iteration. Browser output uses the project's Release configuration. The recorded toolchain includes Emscripten `6.0.11`.

The input manifest fixes the ELF SHA-256, disc identifier, module count and upstream revision. That is the purpose of pinning an upstream version: a future rebuild must start from a known codebase rather than silently changing when upstream moves. It does not claim that every current experimental build shares identical patches or generated output.

The report repository currently records this method. A clean end-user rebuild package still requires selecting and exporting the matching scripts, patches, generated snapshot and dependency setup. The original disc and compressed backup remain outside the intended repository. The next chapter follows the additional compatibility work needed after translation produced compilable code.

<details>
<summary>Source trail and verification records</summary>

The original working-tree sources are `scripts/mwo.py`, `scripts/build_gundam.sh`, `recomp/main.cpp`, `recomp/elf.cpp`, `recomp/analysis.cpp`, `tests/analysis_tailcall.py`, `games/gundam-vs-z-gundam/port-inputs.json`, and `games/gundam-vs-z-gundam/mwo-modules.tsv`. Their identifiers in the evidence file refer to that retained tree, not to files already exported into this report repository.

</details>
