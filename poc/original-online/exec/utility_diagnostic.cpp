#include "ps2/system.hpp"
#include "ps2/memory.hpp"
#include <emscripten.h>
#include <cstdlib>

// Same producer-quiet policy as the standalone utility profile. No game hooks
// or precompiled VU registrations; original utility VU code uses its own JIT.
void register_generated_vu() {
    ps2::g_options.trace_iop_modules = std::getenv("PS2_UTILITY_TRACE_MODULES") != nullptr;
    ps2::g_options.trace_io = std::getenv("PS2_UTILITY_TRACE_IO") != nullptr;
    ps2::g_options.trace_syscalls = std::getenv("PS2_UTILITY_TRACE_SYSCALLS") != nullptr;
}
extern "C" EMSCRIPTEN_KEEPALIVE unsigned ps2utility_read32(unsigned address) {
    return address < ps2::kRamSize && (address & 3u) == 0 ? ps2::ld32(address) : 0;
}
