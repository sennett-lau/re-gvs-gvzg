# Versioning and reconstructed milestones

The project uses the published [Semantic Versioning 2.0.0](https://semver.org/spec/v2.0.0.html) format. `0.3.0-alpha.1` has a three-part core, `0.3.0`, followed by a prerelease identifier. The final `1` counts alpha iterations; it is not a fourth core version. A Git tag may use a leading `v` for readability.

This project is in initial development. Its future compatibility contract will cover supported game inputs, setup commands, configuration, saved-state handling and documented multiplayer behavior. That contract is not yet stable. For this 0.x series we use patch versions for compatible fixes and minor versions for coherent new capabilities or substantial performance milestones. This project policy is more specific than SemVer's flexible rules for major version zero.

## The 0.1 series should show its fixes

Mobile and browser fixes do not have to disappear into one large `v0.2.0` release. The agreed plan now explicitly allows a `v0.1.x` maintenance series. The following table is a **reconstruction plan**, not a claim that these versions already existed or have passed acceptance:

| Candidate version | Intended change | Required evidence before assigning the tag |
| --- | --- | --- |
| `v0.1.0` · Baseline | First working browser package and its stated game journey | Recover matched inputs; distinguish earliest browser proof from native-only validation |
| `v0.1.1` · Mobile compatibility | Mobile detection/defaults and visible failure diagnostics | Identify the actual delta; test touch-device detection and explicit overrides; retain the unresolved GPU device-loss limitation |
| `v0.1.2` · Runtime recovery | Compatible audio pacing/recovery and disc-request validation fixes | Recover a distinct patch set; validate stalled/truncated requests and active audio recovery |
| `v0.1.3` · Presentation fixes | Fullscreen/resize corrections that preserve the intended game behavior | Recover a distinct delta; verify live resizing and bounded rendering dimensions |
| `v0.2.0` · Performance Update | A reviewed performance milestone, including translated VU coverage and measured renderer/runtime improvements that remain after the 0.1 fixes | Reconcile which changes are already in 0.1.x; compare the matched builds without counting the same work twice |
| `v0.2.1`, `v0.2.2`, … | Subsequent distinct compatible fixes or small performance improvements | A new verified delta after 0.2.0; do not merely rename earlier optimizations |
| `v0.3.0-alpha.1` · Adaptive Rendering — Alpha 1 | 60-Hz canonical gameplay with guarded extra renders and interpolation | Reconstruct the measured composition; verify its package and state the tested mode/device scope |

The exact assignment of early fixes may change after reconstruction. For example, a recovery fix already required for the earliest working baseline belongs in `v0.1.0`; it cannot also be advertised as a newly introduced `v0.1.2` change. Likewise a fullscreen performance feature may belong in `v0.2.0` if it is not simply a compatible correction. The retained `gundam-mobile-4` manifest spans several changes and cannot by itself resolve this chronology.

Small commits explain each implementation step. A release groups a useful, tested state: neither every commit nor every historical experiment needs its own version. If no distinct recoverable state supports a proposed patch release, combine it with the appropriate milestone and say why. No commit is backdated and no lost history is invented.

## Preview progression

The available progression is `v0.3.0-alpha.1` → `v0.3.0-alpha.2` → `v0.3.0-beta.1` → `v0.3.0-rc.1` → `v0.3.0`. These are possible stages, not a requirement to manufacture every one.

| Stage | Project acceptance meaning |
| --- | --- |
| Alpha | Experimental implementation with explicitly limited mode and device evidence |
| Beta | Intended scope implemented and core journeys tested; broader regressions still being exercised |
| Release candidate | Declared scope has no known blocking defects; final packaging/setup verification remains |
| Normal 0.3.0 | Declared scope and package verified; no promise of 120 Hz on every phone |
| 1.0.0 | Supported inputs, compatibility contract, clean setup and complete declared flows are mature |

GitHub's prerelease flag is separate from the spelling of a tag. When publication is eventually authorized, preview releases should be marked as prereleases explicitly. Published package contents should not be replaced in place with different bytes; issue a new version.

## Current repository status

The report, reader, complete retained game source, matched adaptive package, selected measurements and media are committed locally. The above-60 proof of concept and source rebuild are established. Historical baseline/optimization milestones still need their own reconstruction before version tags are assigned. The [research goal](chapters/04-frame-rate.md) defines the measured capability; further pacing refinement is optional.

There are no game release tags or published assets in this repository. A future GitHub Release should carry meaningful version notes, a matched playable package where applicable, a build manifest and checksums. A dummy `v0.0.0` is not needed to store large files. See [current delivery status](REPOSITORY.md#current-delivery-status) and [Derived artifacts](DERIVED.md).
