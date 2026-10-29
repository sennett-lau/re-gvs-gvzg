#pragma once

#include <cstdint>
#include <functional>

namespace ps2::iop {
struct Cpu;
}

namespace ps2::iop::native_storage {

// Device drivers that guest modules register with ioman AddDrv, such as the original MCMAN "mc"
// driver. Their operations run as guest code on the calling IOP thread, as in the original
// IOPRP 2.80 IOMAN, so blocking drivers keep normal scheduling.
void reset();
bool reserved(int fd);
std::function<void(Cpu &)> wrap(std::uint32_t index, std::function<void(Cpu &)> host);

}

namespace ps2::iop::io {

bool host_fd_in_use(int fd);

}

namespace ps2::iop::sio2 {

// Writes the whole serial-card image now; 0 only after the stored file reads back identical.
// Data a guest driver still caches in IOP memory is not part of the image until the guest closes it.
int checkpoint_cards();

}

// Checked card checkpoint for a process replacement after guest frames have unwound. It fails while a
// guest driver descriptor is open for writing or a driver call is unfinished.
extern "C" int ps2exec_checkpoint_card();
