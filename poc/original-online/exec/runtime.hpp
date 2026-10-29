#pragma once
#include "request.hpp"
#include "ps2/cpu.hpp"

namespace original_exec {
[[noreturn]] void request(ps2::Cpu&, std::uint32_t pc, int thread);
void after_unwind(Transition&);
void observe_startup(std::uint32_t args, std::uint32_t pc, int thread);
void publish(const std::string&);
}

// Supplied by the storage profile. Called ONLY on the emulation thread after
// the guest stack has unwound. Must flush dirty serial-card and native-driver
// data, check write + close, and return 0 only when MEMFS has the current card.
// No permissive default implementation is linked by this profile.
extern "C" int ps2exec_checkpoint_card();
