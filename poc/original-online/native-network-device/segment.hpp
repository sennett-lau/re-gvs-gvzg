#pragma once

#include <cstdint>

namespace ps2::state {
class Stream;
}

namespace ps2::iop::dev9::segment {

// Optional virtual Ethernet segment behind the adaptor. It has a carrier and one router that answers
// ARP for its own address and DHCP for one locally assigned lease. It forwards nothing upstream:
// every other frame is validated, counted and dropped.
using Deliver = void (*)(const std::uint8_t *frame, std::uint16_t length);

void reset();
void transmit(const std::uint8_t *frame, std::uint16_t length, Deliver deliver);
void state(ps2::state::Stream &s);

}
