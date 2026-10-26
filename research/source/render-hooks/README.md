# Render-hook interface and patch generator

This small export shows where the render-only path attaches to generated C++. It includes the original `render_hooks.hpp` interface and `gundam_render_hooks.py` helper, plus a wrapper that retains the later input and cue-clock corrections.

The [address map](address-map.json) connects 13 guest instruction sites to five generated units. An instruction address and its containing generated label can differ: the compiler groups instructions into C++ blocks.

## Inspect the boundary

| Unit | Main responsibility |
| --- | --- |
| `unit_0039.cpp` | Model-copy and attachment-transform hooks |
| `unit_0044.cpp` | Mode-update branch, camera preparation and render completion |
| `unit_0049.cpp` | Application counters, input copy and corrected pre-poll gate |
| `unit_004D.cpp` | Screen-effect update gate |
| `unit_0047.cpp` | Corrected cue-clock store |

Read [the rendering-boundary chapter](../../../docs/chapters/05-rendering-boundary.md) for the mechanism and [manifest.json](manifest.json) for supported inputs, retained output hashes and original source paths.

## Verify the export without game files

```sh
python3 research/source/render-hooks/verify.py
```

This checks exported file fingerprints and mapping integrity. It does not compile the game or prove hook semantics. The separate [input regression](../input-gate/README.md) executes the bounded input-edge test.

## Apply to matching generated inputs

If you already have the five generated units identified in the manifest:

```sh
python3 research/source/render-hooks/prepare.py \
  --generated PATH_TO_MATCHING_GENERATED_UNITS \
  --output .local/patched-render-units
```

The wrapper refuses different input hashes and existing output directories. It stages all five units, checks their hashes against retained research outputs, then writes the result. It does not modify the supplied inputs.

The shared helper predates the `0x226D30` input fix and `0x21C688` cue fix. Running it alone omits those corrections; use the wrapper for the combined patch set.

Local export validation reproduced all five retained output hashes. A changed-input control and an existing-output control were rejected. These are patch-generation checks, not a new game run.

## What this export still needs

This is a **partial hook layer**, not a standalone high-refresh library. The clock/controller, interpolation implementation, runtime changes, remaining generated code and matched link recipe are not included here. The header also depends on upstream `ps2/cpu.hpp`. The original builds linked replacement objects before the generated archive; reproducing that build still requires the [complete export package](../../../docs/REPOSITORY.md#rebuild-acceptance).

The supported executable is identified by SHA-256 in the manifest. Do not apply these addresses to another regional release. The original disc and full generated units are not bundled in this package.
