# Reproduce the input-edge regression

Run with Python 3, from a clean checkout:

```sh
python3 research/source/input-gate/verify.py
```

No game install, GPU, network service or Python package is needed. The command prints its results and does not modify source files.

Expected: **1,265 phase cases; 369 failures with the old gate; zero failures with the corrected gate.** The old gate is a negative control. Additional checks exercise both controller ports and the game's pause-disable flag.

The restricted interpreter executes 356 exported executable bytes: the original edge-update and pause-request routines, plus a call instruction. The fixture comes from the Japanese `SLPS-25419` executable identified in `instructions.json`. `provenance.json` identifies the original test and generated units. The C++ files are entry-block excerpts, not complete build units.

This export replaces the original test's private ELF loader with bounded instruction blocks. It retains the interpreter, phase schedule and arrival sweep. It checks that the candidate excerpt differs only by the early return. The public test pins the historical totals and prints results instead of writing into the evidence archive.

This reproduces the instruction-level regression. It does not execute the complete input routine, asynchronous IOP scheduler, browser or game. Ordinary-control browser checks are a separate result in [chapter 05](../../../docs/chapters/05-rendering-boundary.md).

These executable-derived excerpts retain their origin. See the [content notice](../../../docs/license/CONTENT_NOTICE.md).
