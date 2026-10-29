#pragma once

#include <cstdint>

namespace ps2::state {
class Stream;
}

namespace ps2::iop::dev9 {

// Expansion-bay DEV9 (CXD9611) with a SPEED chip, the SMAP Ethernet controller, its 93C46 EEPROM
// and a DP83846A PHY, as the original DEV9.IRX and SMAP.IRX drive them. By default there is no
// link: frames leave only through PHY loopback, and anything else transmitted is counted and dropped.
// A build prepared with the optional segment (segment.hpp) has a carrier to a local virtual router.
bool claims(std::uint32_t address);
std::uint32_t read(std::uint32_t address, unsigned size);
void write(std::uint32_t address, std::uint32_t value, unsigned size);
bool dma(std::uint32_t madr, std::uint32_t words, bool to_device);
void reset();
void state(ps2::state::Stream &s);

}
