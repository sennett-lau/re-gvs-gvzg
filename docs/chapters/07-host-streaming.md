# 07 · Multiplayer route A: one host, two controllers

> Prefer the illustrated reader? [Read this chapter in the Wiki](../../.local/wiki/07-host-streaming.html).

> **At a glance**
>
> - **Question:** Can two devices play while a separate host does the game computation?
> - **Result:** The host streams one game’s picture and sound. Clients send input to separate controller ports. Two-device control was reported working.
> - **Still open:** A complete host-plus-two-client match, latency measurements and reconnect tests have not been retained. The current connection path requires TURN.

**Route A puts all game computation on one host.** Two other devices receive its picture and sound and send controller input. The implementation exists in the research working tree, and a user reported that two devices controlled the same screen. A complete host-plus-two-client match, measured latency and disconnect recovery still need a retained test record. This chapter reviews the available evidence on 2026-10-25.

## Move game computation to a host

A phone that struggles to execute the translated PS2 game can still be a useful remote player. Moving game computation to a stronger host changes its workload: the phone decodes video, plays audio and captures controls. It no longer executes the game WASM. This changes where computation happens. Encoding, network and decoding delays remain.

The model follows a console with two controller ports. One game owns the combat rules, state and cameras. Both controllers act on that same game. This avoids the requirement that two independent simulations remain identical, which is the separate problem in [chapter 08](08-independent-clients.md).

```text
Remote player 1 ── pad 1 input ──┐
                               ▼
                        Host browser
                       One running game
                               ▲
Remote player 2 ── pad 2 input ──┘
                               │
                      Canvas + game audio
                               │
                       WebRTC to both players
```

> [!NOTE]
> **The host must run a game browser.**
>
> A separate host computer can run the browser and supporting services without being a player. The Python signaling service alone cannot render the game.
>
> Clients control emulated game controllers. They do not receive operating-system remote desktop access.

<!-- interactive: multiplayer-routes -->

![Where game computation runs in the two multiplayer architectures](../figures/multiplayer-routes.svg)

## What the code implements

The host captures its canvas with `captureStream(60)`, attaches the game's audio stream when available, and creates one WebRTC peer per controller port. Each peer receives the same media stream. The sender requests a maximum of 60 video frames per second and approximately 3 Mbit/s. These configured limits do not guarantee actual delivery.

The client attaches received media to a video element and sends touch, keyboard or gamepad states on a data channel. The host maps these states to `Module.remotePads[0]` and `[1]`. Separate ports allow separate character control in a suitable two-player mode. Joining the transport does not select that mode or create another player character.

The signaling service manages one host and two player slots. An invitation contains a room identifier and an invitation credential. The host's own session credential is kept separate. The host page offers a copy action and a selected-text fallback. This is existing invitation behavior, rather than an implemented account or friend-list system.

Input release also matters. The client sends neutral input when focus is lost or the page is hidden. The host clears disconnected ports and treats input older than 750 ms as neutral. These mechanisms reduce stuck movement after an interruption. Complete match tests still need to cover mobile suspension and reconnect paths.

Both WebRTC endpoints currently force `iceTransportPolicy: 'relay'`. This implementation therefore needs a working TURN relay. A signaling endpoint alone does not relay the media, and this configuration does not fall back to a direct connection. Online serving requires HTTPS. These requirements belong in future setup instructions, with deployment credentials kept out of the repository.

The source references and an explicitly selected implementation summary are retained in [network-findings.json](../evidence/network-findings.json). They describe inspected code. They contain no new runtime benchmark.

## What has been tested

The user's two-device observation is encouraging evidence for connection and input, but does not establish latency, image quality, every character combination or a full match. Separately, native experiments proved that the original Arcade challenge fixture has two independently controlled opposing players. That result establishes a usable game mode. The streaming route still needs a complete acceptance test.

**Both streamed clients receive the same game picture.** If the game renders split-screen, both currently receive that split-screen picture. Sending each device a cropped view is a possible extension, with another choice between cropping before transmission and cropping on the receiver. Neither should be described as a new independent camera. The separate-client prototype already uses a page crop, but that implementation belongs to the other route.

The adaptive renderer also does not automatically create a 120 FPS stream. Capture, encoding, network delivery, receiver decoding and physical display refresh each impose their own limits. Raising the current 60 FPS capture setting without measuring those stages would only change a request.

## What to integrate and test next

Retain streaming as the lower-complexity route for friends whose client devices cannot run the game smoothly. Keep its source and acceptance work separate from the independent-client proof of concept until they are integrated into the full-game launcher.

Use one host and two actual client devices for the next acceptance run:

1. Select an established two-player mode.
2. Demonstrate independent movement and firing.
3. Finish a round.
4. Return through the normal menus.
Measure input-to-visible-response latency and dropped video frames. Repeat with a disconnected controller, a hidden client page and a return to the session. Record actual TURN use and negotiated video behavior.

Tests should remain silent while the audio engine continues consuming its ring buffer through a zero-gain output. Suspending audio would change the workload and invalidate a timing comparison. Until these checks are retained, describe streaming as an implemented research route with user observation, rather than a finished low-latency multiplayer release.
