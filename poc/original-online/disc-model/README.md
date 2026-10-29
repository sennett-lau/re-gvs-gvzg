# Optional reference model for the original disc-ID request

This game-only experiment implements the observed `cdvdman` export 79 (`sceCdReadDiskID`) as a scheduled HLE transaction. It is off by default and prepares a copied runtime. The default game, pinned vendor files, utility and existing GUID/model-ID preparer are unchanged. It supplies modeled device output; it does not supply physical disc authentication data or establish a network connection.

The original DNAS280 CDVDMAN clears five caller bytes in descending order, accepts disc types 18–20, reads sector 75, and requests `ReadKey(0, 0, 75)`. Its successful path requires a zero error and validity mask `0x04`, then reads registers `0x2030..34`, XORing each with `0x2039`. These registers correspond to Key10–14, not Key0–4. Private original-instruction evidence remains under `.local/original-online/exec-continuation/disc-id-contract-01/`.

The behavior reference is [PCSX2 CDVD.cpp at 33127ad0df121e5b831494c389068ed9f9f3ad4b](https://github.com/PCSX2/pcsx2/blob/33127ad0df121e5b831494c389068ed9f9f3ad4b/pcsx2/CDVD/CDVD.cpp), SHA-256 `3d5133209f33ba36747d5ec9637775259d9bcd948fafb41ab62527c6befb11c4`. That source is attributed to the PCSX2 Dev Team under GPL-3.0-or-later. This independently written narrow model expresses its command-75 mapping; no implementation source is copied. Only numeric serial bits 5–9 contribute to the fifth output byte; four output registers are zero, the validity register is 5, and the XOR register is zero. These facts describe the emulator model, not recovered hardware values. Missing metadata never becomes a default successful identifier.

## Media and lifecycle contract

- Every call reads sector 75 through an exact reader. The original permissive `disc::read` remains unchanged. Short reads, absent media and out-of-range requests fail.
- A bounded ISO primary volume and root directory identify one `SYSTEM.CNF;1` and one boot executable. Both endian fields, volume bounds, record spans and duplicate entries are checked. The supported `BOOT2` grammar is an explicit root retail executable pathname; missing, malformed and duplicate BOOT2 entries fail.
- The mounted pathname must equal the selected genuine game pathname. Every mounted executable byte is compared with `/game/core.elf`, whose original SHA-256 the isolated parent/frame contract checks before startup. File size is bounded to 16 MiB, reads/comparisons to 64 KiB each. This binds the serial to the selected executable without claiming a whole-disc fingerprint. It is not a general replacement for ISO validation in upstream boot.
- The reader's mount epoch invalidates pending work, including a failed file remount. No positive media cache survives a call. The host reader must remain immutable between mount calls; same-URL file edits outside that contract are not independently detected as a remount.
- All five output byte destinations are validated before any write. Unaligned RAM, mirrors and scratchpad are supported. Unsupported spans halt without stores; this is an explicit host guard rather than emulated CPU exception behavior. Valid destinations receive the original descending clear before media or device failures.
- The requesting IOP thread blocks with an operation ticket. Completion requires that caller, status and ticket still match. Reset, released waits, changed waits and missing callers cannot receive late output. `sceCdSync` waiters for this model use separate tickets and are checked before waking.
- A normal read callback is emitted once only after the actual sector-75 read completes. It is not emitted on an unread/failed read or abandonment before that read. Caller/reset state is rechecked after the callback. Metadata validation and modeled ReadKey completion generate no extra read callback.

This HLE boundary uses the existing modeled sector-read delay and 1 ms scheduled polling. A 30 guest-second media-readiness deadline fails explicitly. It does not reproduce the original CDVDMAN's internal semaphore/event flags, full NCMD register protocol, physical drive timing or ReadKey interrupt sequence. The existing `g_cd.busy` exclusion guards concurrent reads. Busy or interrupt-context calls fail with cleared output; unsupported blocking Sync contexts halt. No arbitrary CDVD status code is assigned to a host metadata failure. Machine snapshots are explicitly rejected in this profile; fresh documents and IOP reset clear pending model state.

The runtime's existing `sceCdGetDiskType` still reports type 20. This profile supports that mounted PS2 DVD/ISO path after its stricter media checks; it does not add CD, tray or physical media-type emulation. Callbacks may release a wait or reset the IOP, so no request reference is retained across callback execution and completion revalidates the operation afterward.

## Preparation and validation

Run the focused synthetic tests in a new ignored directory:

```sh
python3 -B poc/original-online/disc-model/test.py \
  --output .local/original-online/exec-continuation/disc-model-native-new
```

The runner retains commands, UTC timestamps, logs, input hashes and failures. It checks parser/model success and failures, exact-reader behavior against the actual prepared `disc.cpp`, and the actual adapter with mock scheduler/memory/media. The adapter test changes only its reference-file pathname to a temporary synthetic file. It also compiles the complete prepared CDVD source and checks preparation drift and GUID/model-ID composition. These are source/native tests, not original IOP, browser, network or physical-disc evidence.

Add `--disc-model-prepare poc/original-online/disc-model/prepare.py` to the isolated exec game build. The builder rejects it for utility images, fingerprints its sources and compiles the final composed CDVD/disc/IOP kernel once. Keep any GUID/model-ID option explicit and separate. Require independent source review before the first authorized PC run, retain actual model diagnostics and all original errors, and compare the original connection flow with the prior failure capture. A successful modeled read does not establish successful DNAS authentication, lobby entry or battle.
