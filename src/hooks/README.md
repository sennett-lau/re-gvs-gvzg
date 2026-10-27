# Adaptive render implementation

The controller keeps original gameplay, input polling and sound-cue timing at 60 Hz. Eligible single-camera battles can use additional render iterations between those updates. Menus, paused scenes and unsupported configurations return to 60 Hz.

- `full_game_web_hooks.cpp`: mode eligibility, canonical-phase latch, scene reset and diagnostic counters.
- `adaptive_phase.hpp`: fractional video/simulation clock conversion.
- `full_game_interpolation.cpp` and `render_math.hpp`: graphics-copy transforms and camera interpolation, with reusable storage.
- `scene_snapshot.hpp`: one atomic scene observation for browser diagnostics.

These source files match the final measured engine. `manifest.json` records their exact hashes. The shared hook interface and generated-unit/address mapping remain in `research/source/render-hooks/`.

Run `python3 scripts/game/test-hooks.py` for synthetic scene/controller/clock cases and interpolation equivalence/allocation tests. These tests do not need a disc or an audio device. The complete browser acceptance and measured display results are separate evidence.
