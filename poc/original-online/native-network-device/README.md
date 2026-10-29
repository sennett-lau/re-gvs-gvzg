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

There is **no external link**. A frame leaves only through PHY loopback. Any other transmitted frame completes its descriptor, is counted and dropped, and is logged. Nothing is received from outside. DMA channel 8 moves data only while the matching SMAP FIFO has its DMA-enable bit set and the IOP RAM span is valid. Any other channel-8 transfer is logged and left incomplete; it never reaches the runtime's generic completion path. This device can satisfy driver detection and adaptor enumeration. It does not establish connectivity or a connection-test result.

An earlier revision read the descriptor length and pointer one field too early. DEV9's self-test still passed, but it looped back a 0-byte frame, so that resident driver and status-bit result did not prove payload loopback. The native checks now require the full 1,514-byte loopback and compare received bytes.

`SMAP.IRX` also checks that DEV9 is version 2.4 or later through `ReferModuleStatus`. The runtime wrote the module id where `ModuleStatus` keeps its 16-bit version. `module_status.py` is a separate, generic runtime fix: it records each module's `.iopmod` version (DEV9 reports `0x0205`), writes version at `0x38` and id at `0x3C`, and serializes the versions with the module table. `prepare.py` applies it unless the tree already has it. Name lookup still uses filename stems, which match `DEV9.IRX` in the utility's paths.

`prepare.py` requires a tree already prepared by `native-storage`, because DEV9 registers `dev9x` with `AddDrv`. It patches `hw.cpp` at exact source points and records hashes. Its manifest lists `replaced_sources` (`hw.cpp`, `kernel.cpp`, `libs.cpp`) and `compiled_sources` (`dev9.cpp`) so a composed build recompiles every changed file. `build_utility.py --native-storage --native-network-device` applies both slices. Set `PS2_DEV9_TRACE` to log PHY operations and interrupt-mask changes.

## Checks

```sh
python3 -m unittest discover -s poc/original-online/native-network-device/tests -p '*_test.py'
python3 poc/original-online/native-network-device/tests/run.py --modules /private/NTGUIDVD/MODULES --game-dev9 /private/NETMOD_E/DEV9.IRX --work .local/native-network-device-run
```

The native run loads the original `INET.IRX`, `DEV9.IRX` and `SMAP.IRX` on the runtime's IOP interpreter, twice. Without the adaptor, DEV9 reports unknown hardware and SMAP does not stay resident. With it, DEV9 detects a CXD9611, names the SPEED chip, passes its loopback self-test and registers `dev9x`; SMAP stays resident. The check also requires no unmodelled register access and no transmit outside loopback. It repeats the device case with the game's `NETMOD_E/DEV9.IRX` (release 2710), which differs from the utility's release 2800. `dev9_test.cpp` checks the address windows, register isolation, PHY access, the EEPROM protocol, DMA refusal and loopback directly. None of this is a browser, WASM or utility result.
