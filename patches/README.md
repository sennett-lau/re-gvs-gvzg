# Local changes to the pinned runtime

Apply these patches only to the revision in `vendor/manifest.json`. `scripts/game/build.py` copies that source into a new ignored workspace before applying them.

| Patch | Purpose |
| --- | --- |
| `compiler/gundam-support.patch` | Bound static code discovery to initialized ELF/MWo3 text; handle untranslated fallthrough and external tail calls |
| `runtime/gundam-support.patch` | Separate IOP load/start operations and allocation mode; report WebGPU validation/device-loss errors |
| `runtime/adaptive-system.patch` | Apply the adaptive video clock and latch the canonical simulation phase before the guest VBlank interrupt |
| `runtime/adaptive-vif.patch` | Preserve the render experiment's VIF/VU boundary |

The first two patches build the base compiler/runtime. The two adaptive runtime files are compiled separately and linked before the base runtime archive. Five generated-unit replacements come from `research/source/render-hooks/prepare.py`; `src/hooks/` supplies their controller and interpolation implementation.

The original upstream sources and notices stay unchanged in `vendor/`. The build fails if a patch no longer applies.
