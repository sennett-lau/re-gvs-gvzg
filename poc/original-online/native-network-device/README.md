# Virtual DEV9/SMAP network adaptor

The original network utility reads and writes its configuration through the native card-file slice. It then reports **接続機器がありません** (no connection device). The pinned runtime has no DEV9 hardware: `DEV9.IRX` reads revision `0` from `0x1F80146E`, prints `dev9: unknown dev9 hardware.` and exits, so `SMAP.IRX` has no Ethernet controller. Findings belong in [chapter 08](../../../docs/chapters/08-independent-clients.md).

This optional slice adds an expansion-bay adaptor model that the original drivers accept. The utility's `DEV9.IRX` and `SMAP.IRX` are byte-identical to the game's `MODULE/DEV9.IRX` and `NETMOD_E/SMAP.IRX`. Register behavior follows what those drivers do:

| Part | Original driver evidence | Model |
| --- | --- | --- |
| DEV9 | `(rev & 0xF0) == 0x30` selects CXD9611; bit 0 of `0x1F801462` clear means an adaptor is present; power-on toggles `0x146C` and `0x1460` | revision `0x30`, adaptor present, registers keep written values |
| SPEED | revision `0x11` is printed as `ES2` and selects byte-swapped buffer descriptors; capability bit 0 enables SMAP setup | revision `0x11`, capabilities `0x01` (SMAP only, no ATA or flash) |
| EEPROM | 93C46 read at address 0 through the PIO pins (chip select `0x80`, clock `0x40`, data in `0x20`, data out bit 4) | MAC `02:50:53:32:00:01`, locally administered, followed by the 16-bit sum of the three MAC words |
| SMAP | DEV9 self-test resets both FIFOs and EMAC3, sends a 1,514-byte frame with PHY loopback and waits for interrupt status `0x34`; both drivers write descriptors as control, reserved, length and pointer (DEV9 byte-swapped, SMAP 2.16 plain after clearing `BD_MODE`) | TX/RX FIFOs, 64+64 descriptors, EMAC3 halves, FIFO DMA block counts, interrupt status/mask/clear and IOP interrupt 13 |
| PHY | `SMAP.IRX` requires ID `0x2000` and `0x5C2x` (DP83846A); EMAC3 STA operations `0x1000` read and `0x2000` write | DP83846A at address 1 with no link and no negotiation partner |

By default there is **no link**. A frame leaves only through PHY loopback. Any other transmitted frame completes its descriptor, is counted and dropped, and is logged. Nothing is received from outside. DMA channel 8 moves data only while the matching SMAP FIFO has its DMA-enable bit set and the IOP RAM span is valid. Any other channel-8 transfer is logged and left incomplete; it never reaches the runtime's generic completion path. This device can satisfy driver detection and adaptor enumeration. It does not establish connectivity or a connection-test result.

An earlier revision read the descriptor length and pointer one field too early. DEV9's self-test still passed, but it looped back a 0-byte frame. The native checks now require the full 1,514-byte loopback and compare received bytes.

## Optional virtual segment

`prepare(tree, segment=True)` also compiles `segment.cpp` and sets `PS2_DEV9_SEGMENT` in the generated `dev9_config.hpp`. Without it, nothing changes. The segment gives the PHY a carrier and a negotiation partner. It contains one virtual router with locally chosen MAC `02:50:53:32:00:fe` and one DHCP lease for 86,400 seconds. Router and guest addresses use a private virtual `/24` subnet defined in `segment.cpp`; these are simulated endpoints, not the host machine's network settings. The router answers ARP for its own address and DHCP DISCOVER and REQUEST messages for one isolated client: the lease belongs to the first hardware address it acknowledges until that client releases or declines it. A REQUEST that names another server is ignored, a request for another address or for a lease held by another client gets a NAK, and relayed messages (`giaddr` set) are ignored. Replies follow RFC 2131 without a relay: a NAK or a set broadcast flag is broadcast, a client with an address gets unicast to it, and otherwise the reply goes to the client hardware address and the offered address.

Incoming frames are checked before use: Ethernet type and destination, IPv4 version, header length, checksum and total length, UDP length and checksum, the BOOTP header, the DHCP magic cookie, bounded options, and a client hardware address equal to the frame's source. Replies are built with correct checksums. DNS, TCP and every other frame have no upstream: they are counted, logged and dropped, never answered. A segment with a carrier is a local link, not Internet connectivity.

With a configuration saved by the original utility, the original `INETCTL` brings the SMAP interface from `STARTING` to `STARTED` with the leased address. Without the segment, the same configuration stays `STARTING` because SMAP waits for a link.

`SMAP.IRX` also checks that DEV9 is version 2.4 or later through `ReferModuleStatus`. The runtime wrote the module id where `ModuleStatus` keeps its 16-bit version. `module_status.py` is a separate, generic runtime fix: it records each module's `.iopmod` version (DEV9 reports `0x0205`), writes version at `0x38` and id at `0x3C`, and serializes the versions with the module table. `prepare.py` applies it unless the tree already has it. Name lookup still uses filename stems, which match `DEV9.IRX` in the utility's paths.

`prepare.py` requires a tree already prepared by `native-storage`, because DEV9 registers `dev9x` with `AddDrv`. It patches `hw.cpp` at exact source points and records hashes. Its manifest lists `replaced_sources` (`hw.cpp`, `kernel.cpp`, `libs.cpp`) and `compiled_sources` (`dev9.cpp`) so a composed build recompiles every changed file. `build_utility.py --native-storage --native-network-device` applies both slices. Set `PS2_DEV9_TRACE` to log PHY operations and interrupt-mask changes.

## Optional module start correction

The original `MODLOAD` in the game's `IOPRP280.IMG` (module version 1.06) creates one loader thread when it starts, with a 0x1000-byte stack and priority 8. It runs every module start routine on that thread: each request restarts the thread, which returns to dormant when the routine is done. The pinned runtime instead creates a new thread with a 0x4000-byte stack for every module start and never deletes it. The real game runs load 32 modules, so finished start threads hold about 512 KiB of the 2 MiB IOP memory. The runtime also ignores a failed stack allocation, and the thread then runs with its stack at address 0.

`module_start.py` is a separate opt-in correction; neither `prepare.py` nor the game build applies it. It deletes a start thread when its start routine has returned and the load callback has run. CreateThread returns `KE_NO_MEMORY` (-400) when the stack does not fit, as the original does. A module whose start thread cannot be created is not started, and a combined load and start releases its image. Threads that a module creates are not touched. The correction applies to the pinned source and to the game's split load/start form (`patches/runtime/gundam-support.patch`).

`tests/module_start_run.py` builds the same runtime with and without the correction and runs the game's `AVETCP`, `DEVGLUE`, `DEV9`, `SMAP` and `AVEWRAPE`, then three scripts. With `PS2_HARNESS_DIRECT` set, the harness neither reserves memory nor frees finished threads itself. Without the correction, 50 module starts hold 50 stacks, a CreateThread that does not fit returns a thread on address 0, and the second caller would start on address 0. The harness stops before running it. With the correction:

- 50 starts leave no start thread and no memory behind, and every other thread keeps its stack;
- a 0x3000-byte stack fits exactly where 0x3001 bytes return -400, while more than 0x3100 bytes are free in total;
- five starts reuse one block;
- a start that fits nowhere fails with -400 and frees what it took.

```sh
python3 poc/original-online/native-network-device/tests/module_start_run.py --modules /private/NTGUIDVD/MODULES --game-dev9 /private/NETMOD_E/DEV9.IRX --game-modules /private/game-modules --work .local/module-start-run [--runtime-patch patches/runtime/gundam-support.patch]
```

## Checks

```sh
python3 -m unittest discover -s poc/original-online/native-network-device/tests -p '*_test.py'
python3 poc/original-online/native-network-device/tests/run.py --modules /private/NTGUIDVD/MODULES --game-dev9 /private/NETMOD_E/DEV9.IRX --config-card /private/utility-saved-card.ps2 --work .local/native-network-device-run
```

The native run loads the original `INET.IRX`, `DEV9.IRX` and `SMAP.IRX` on the runtime's IOP interpreter, twice. Without the adaptor, DEV9 reports unknown hardware and SMAP does not stay resident. With it, DEV9 detects a CXD9611, names the SPEED chip, passes its loopback self-test and registers `dev9x`; SMAP stays resident. The check also requires no unmodelled register access and no transmit outside loopback. It repeats the device case with the game's `NETMOD_E/DEV9.IRX` (release 2710), which differs from the utility's release 2800. `dev9_test.cpp` checks the address windows, register isolation, PHY access, the EEPROM protocol, DMA refusal and loopback directly. With `--config-card` and a card saved by the original utility, the run also loads the original `SIO2MAN`, `MCMAN`, `NETCNF` (with the utility's icon arguments) and `INETCTL` with `mc0:/BWNETCNF/net000.cnf`. It requires `STARTING` without the segment and `STARTED` with the lease, one offer and one acknowledgement with it. `segment_test.cpp` checks reply headers, checksums, options and addressing, the server-selection, relay and lease-ownership rules, and rejects bad checksums, a mismatched client address, truncation, ARP for another host, non-IPv4 frames and DNS queries. `segment_frames` sends frames from files to one segment and writes each reply to a file, so another checker can feed frames produced by original code. With `--game-modules`, `harness-limits.txt` also checks the harness: a function inside AVEWRAPE is called as its own code calls it, calls outside a loaded module are refused, 300 library calls complete because each caller's start-thread stack is freed, and with IOP memory exhausted on purpose a call is refused instead of starting without a stack, also when one block is just above the stack size but the call's own allocations leave too little. Before each call the harness makes the loader's allocations in the same order and frees them, so the refusal is exact. `harness-malformed.txt` checks that numbers which wrap or carry trailing characters, missing or extra tokens, oversized buffers and pointers outside their buffer are refused without stopping the run. None of this is a browser, WASM or utility result.
