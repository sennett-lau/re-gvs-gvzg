# 08 · Multiplayer route B: a game on each device

> Prefer the illustrated reader? [Read this chapter in the Wiki](https://sennett-lau.github.io/re-gvs-gvzg/08-independent-clients.html).

> **At a glance**
>
> - **Question:** Can each player run the game locally while both copies agree on the match?
> - **Result:** The 60-Hz input-sync prototype passed bounded state comparisons after disc-completion timing was corrected.
> - **Still open:** Selection, results and rematch are not integrated. Restoring the original Network Battle service is an option within this route, not a completed feature.

**🟡 Partially verified · A synchronized battle fixture works; the full game flow is unfinished.** Route B runs a copy of the game on each device. A relay exchanges inputs and state checks. It sends no video. The prototype uses the original local two-player Arcade challenge fixture. The main menu's **通信対戦 / Network Battle** service remains separate.

## Start with two independently controlled players

A fixture is a fixed test setup with known players, state and inputs. Connecting two pad slots alone did not establish independent player control. Native tests first compared neutral input with P1-only and P2-only movement and firing. Each port changed its assigned human actor, while the other human's position and ammunition matched the neutral run at all 181 sampled boundaries. The fixture places the two human players on opposing sides, each with a CPU partner, using the game's original vertical split screen.

Two native processes then executed 300 frames through an HTTP input relay, with one starting three seconds later and irregular 75 ms input delay. All 301 compared boundaries agreed, including final RAM and serialized machine state. A negative control applied the wrong input at tick 40: the first RAM difference appeared at tick 41, and both clients stopped at checkpoint 60. The failure detector was part of the proof.

These tests establish actor ownership and a bounded deterministic baseline. They do not prove browser or cross-device agreement. In the browser prototype, each client still renders the original two-player scene. CSS displays its own half. This provides separate views without a new full-width camera renderer or a reduction to rendering only one player view.

## Fix startup failures and state mismatches

The transport assigns player slots and agrees on build and initial-state identities. It buffers future inputs. Both copies wait for the shared input pair before each 60 Hz simulation tick. This approach is called lockstep.

**The retained release already uses a three-frame input delay.** Its `netplay-manifest.json` sets `runtime_config.input_delay` to `3`, matching the transport defaults. This is about 50 ms of intentional scheduling lead at 60 Hz, not a measured end-to-end latency. The first delayed ticks are primed with neutral input. The server accepts a session delay from 0 to 30 frames; three is the retained default, not the only supported setting. [Inspected source and manifest](../evidence/implementation-review.json)

At checkpoints, it compares full-RAM hashes from both copies at the same gameplay tick. Missing input pauses progress. Mismatches stop the session. There is no rollback or mid-match resynchronization.


A generic halt message initially hid whether failure came from transport, an expired lease or differing state. Diagnostics were changed to preserve the precise JavaScript error and checkpoint. An injected-clock test reproduced a 31-second initialization expiring a 30-second lease. Startup recovery now reclaims only the same player's slot before gameplay begins, resumes the initial input window and has a bounded deadline. This reproduced a possible failure. It did not identify the cause of every user's phone report.

A later browser pair still diverged at checkpoint 120 despite matching initial hashes and effectively neutral inputs. Replaying its exact inputs natively ruled out unequal controls. The next hypothesis concerned asynchronous disc loading: a false browser readiness result postponed an emulated CDVD completion by 1,000 guest microseconds. Identical disc bytes could therefore arrive at different **game times**.

A controlled native experiment changed only readiness responses. Twenty false probes reproduced a previously observed browser hash, with the first RAM difference at tick 10 and 11 changed bytes at tick 120. Some were RPC counters. Similar actor positions were not a reason to exclude those bytes from comparison.

The corrected policy waits in host time for required bytes while preserving the scheduled guest completion time. Short or failed reads halt execution. State checks remain intact. Two controlled browser trials delayed one client's relevant HTTP chunk by 600 ms and matched native checkpoints. In the diagnostic trial, all 32 MiB of checkpoint-240 RAM matched between both browsers and native replay, with zero excluded regions.

## What the longer browser test proves

> [!IMPORTANT]
> **23 checkpoints agreed across 44 guest seconds.**
>
> Both Chrome instances matched checkpoints **0 through 2,640**. **Both ran on the same desktop with neutral inputs.** One used mobile configuration.
>
> Scope: a same-PC, neutral-input fixture. [Evidence: browser release stress](../evidence/network-findings.json).

The test used the release candidate's unchanged JS/WASM. A wrapper selected delayed disc routes and observed checkpoints. There were harmless missing-favicon requests, but no recorded game/page exception.

The selected values and source hashes are in [network-findings.json](../evidence/network-findings.json). Actor-control checks cover movement and firing; the longer browser run covers continued checkpoint agreement. The remaining acceptance target is an active full match across separate devices.

### Measure checkpoint cost and input waiting

**The live checkpoint hash is FNV-1a 64-bit, not SHA-256.** `web_netplay.cpp` scans all 32 MiB of RAM every 120 ticks, before requesting the shared input pair. The release identifies this scheme as `fnv1a64-full-ram-before-input-v1`. Its cost on a phone has not been measured separately.

The existing `waitMs` counter starts **after hashing**. It combines browser dispatch, checkpoint agreement and input waiting; it cannot attribute a stall to one of them. Add separate hash durations, input-wait counts/durations and checkpoint-barrier timings, retaining median and tail latency. Only then compare another hash such as XXH3. Both peers must agree on the algorithm and version, and the deliberately wrong-input test must still detect divergence. File-audit SHA-256 hashes have a separate purpose.

Choose delay during session setup from measured relay-path round trips and jitter, then agree one value before priming neutral ticks. Compare a small range around that estimate using the input-wait distribution. RTT alone does not describe asymmetric arrivals or browser scheduling, so it should seed the experiment rather than dictate a universal formula. Keep the agreed delay fixed during a match until a synchronized change protocol exists. [Inspected implementation](../evidence/implementation-review.json)

### Rollback needs more than a RAM copy

**⬜ Untested · Rollback is future work.** Restoring a tick requires RAM, CPU/IOP state, pending events, device state and deterministic external inputs. Dirty-page snapshots could reduce RAM-copy work, but they do not capture those other components automatically.

First measure snapshot size, save/restore time and a replay checksum in the existing fixed-60 fixture. Retain a full-state reference snapshot before testing incremental pages. A correct rollback design must also handle speculative audio and presentation. The current lockstep implementation waits for missing input instead of predicting it.

## How the original online mode differs

The second main-menu entry, **対戦 / VS. Battle**, is local Versus. The second-last entry, **通信対戦 / Network Battle**, has its own online lifecycle. Offline analysis verified this dispatch chain:

```text
Network Battle selection → mode 7 → lobby/battle stage dispatch
                         → shared battle engine at 0x2B19F0
```

The original executable contains UI for both automatic matching and named operations (rooms), including title/password prompts, faction selection and returning to lobby chat. Verified string references and original instructions support the interpretation that friends could deliberately choose the same lobby and room. This review did not recover a modern shareable invitation URL, nor execute the original connection flow.

The compatible [zdxsv server](https://github.com/inada-s/zdxsv/tree/35ffbdad9257eca5043bb4977d26cc07468b5045) is a useful protocol reference. The inspected revision has separate authentication, lobby and battle responsibilities. Its password permission is disabled, password lookup is unfinished, and friend handlers are stubs. A password field is not working room access control.

Changing a hostname is therefore insufficient. The original connection calls still need mapping to a browser-compatible runtime bridge. Server-supplied R5900 patches also need review: writing guest machine code does not prove the static translation will execute the new behavior.

There are two ways to integrate the game's online menu within route B:

| Integration option | Work needed | Current status |
| --- | --- | --- |
| Browser-owned lobby | Intercept the menu handoff, agree on settings, then launch the existing input-sync route | The shorter proposed path. It is not integrated. |
| Restore the original lobby | Bridge the original network/session calls to a compatible backend | Original behavior has been inspected. No working connection has been demonstrated. |

Both belong to the independent-client route. An invitation should identify the chosen server and room, while a short code would only make sense within that server.

## What Co-op Anything contributes

The pinned [Co-op Anything review target](https://github.com/cranebeaker/coop-anything/tree/5b86e5bb10ce864ab9872f2589651f73ffcae5db) supplied development guidance and candidate testing utilities, not a Gundam multiplayer adapter. It was inspected, not installed or executed. Its trace, pose-comparison and impairment-testing ideas could help diagnose divergence. Native bridge and PC-engine detection tools need adaptation for this PS2/browser target.

Rendering interpolation is useful observability, but positions alone are not a replication schema. Projectiles, damage, randomness, ownership, timers and transitions must also agree. New cooperative rules would additionally require teams, spawning, AI, camera, HUD and win/loss work. Neither transport makes campaign co-op appear automatically.

## What to integrate and test next

First expose the proven 60 Hz fixture through a full-game launcher entry. Replace its fixed battle start with agreed selection/settings, then prove a complete battle, results, rematch and cancellation with matching checkpoints. Repeat with delayed loading and an actual phone. Personal memory-card state must not silently alter initialization.

Keep adaptive presentation separate until it preserves canonical checkpoints with different render rates and both split-screen cameras. In parallel, trace the original online requests and prove an isolated lobby connection before choosing restoration as the long-term route. A successful login alone will not establish a playable online mode.
