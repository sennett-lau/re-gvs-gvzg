# Native card-file slice

The original network utility saves through IOP `NETCNF.IRX`, which calls `ioman` with paths such as `mc0:/BWNETCNF/BWNETCNF`. The pinned runtime implements `ioman` in host code and rejects every device except `cdrom` and `rom`. The original `MCMAN.IRX` does run, but its `AddDrv` call reached a stub that returned `-1`. Findings and acceptance limits belong in [chapter 08](../../../docs/chapters/08-independent-clients.md#a-separate-utility-boot-reaches-the-card-file-boundary).

This optional slice makes `AddDrv` and the device operations follow the original IOPRP 2.80 `IOMAN` (`IO/File_Manager`, library `ioman` 1.04). Its own code fixed these contracts:

- File records are `{mode, unit, device, privdata}`; the descriptor is the record index and a record is free while `device` is zero.
- `AddDrv` refuses duplicates or a full table, calls the driver's `init` on the calling thread and inserts the device only after success. `DelDrv` calls `deinit` before unlinking.
- `open` and `dopen` return the descriptor; `close` returns the descriptor on success; path operations return `0` on success; `devctl` returns the driver value.
- Errors keep their original values: `-9` for a descriptor without read, write or directory mode, `-22` for an invalid `lseek` origin, `-24` without a free record, `-18` for a cross-device rename and `-48` when an extended operation reaches a non-extended device.

A registered driver operation runs as guest code on the thread that called `ioman`. The HLE entry continues into the driver with a 48-byte frame below the caller's stack. That frame holds the argument home area, up to three stack arguments and the return state. The driver can wait on semaphores, SIO2 transfers and other threads under normal scheduling. The nested `call_guest` helper is not used. A driver call in interrupt context is refused with `-1` and logged.

The runtime keeps its own `cdrom`, `rom` and terminal handling, and unregistered devices keep the earlier runtime result. Disc and ROM descriptors share one descriptor namespace with driver files. Writes to them now return `-9`; before this change, the runtime reported the requested byte count as written. This applies to IOP `ioman` writes and to both EE fileio write handlers. EE fileio still cannot reach a guest driver: that would need an IOP thread for the original `FILEIO` server. This is a known correctness gap, not yet on the tested path. The game's power-off thread (`SLPS_254.19` `0x125090`, started through `0x125040` and `0x125150`) calls `sceDevctl("dev9x:", 0x4402)` and then `sceDevctl("cdrom0:", 0x4328/0x4323)`, retrying while the result is negative. EE fileio answers `-19` for `dev9x:`, so that thread would retry indefinitely. It was not observed in the tested normal flow.

The serial-card writer is shared by the debounced flush and `ps2exec_checkpoint_card()`. It writes a temporary image, renames it into place and compares the complete stored file with the card. The card remains dirty unless all three steps succeed. A driver such as MCMAN can still cache card data in IOP memory while a file is open for writing. `ps2exec_checkpoint_card()` therefore returns `-1` while a driver descriptor is open for writing, a driver call is unfinished or `AddDrv`/`DelDrv` is in progress. Read-only and directory descriptors are reported but allowed. The native write scenario covers that refusal and checks that the file is intact after its original close. Files opened through `MCSERV` RPC are not `ioman` descriptors and are outside this check.

`prepare.py` patches a copied runtime tree at exact source points and records upstream and prepared hashes. It never edits `vendor/`. `build_utility.py --native-storage` applies it and records the manifest as `runtime_patches` in `build-info.json`.

## Checks

```sh
python3 -m unittest discover -s poc/original-online/native-storage/tests -p '*_test.py'
python3 poc/original-online/native-storage/tests/run.py --modules /private/NTGUIDVD/MODULES --card /private/fresh-test-card.ps2 --work .local/native-storage-run
```

The native run requires the original `SIO2MAN.IRX`, `MCMAN.IRX` and the fingerprinted fresh test card; it copies the card and never writes the fixture. It compiles the prepared IOP sources with the host compiler. A synthetic caller module issues `ioman` calls from an ordinary IOP thread to the original drivers. The runtime's serial card holds a card copy. Separate processes cover read-only controls, writes, a fresh-process readback, no card and a blank image.

`tests/mcfs.py` reads the card filesystem directly from the image, without the runtime or a driver. It confirms new and removed files and checks that the existing game save is unchanged. This native run is not a browser, WASM or original-utility result.
