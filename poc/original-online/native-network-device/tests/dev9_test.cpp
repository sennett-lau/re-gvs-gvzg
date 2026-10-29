// Direct register checks for the virtual adaptor, linked with the prepared IOP runtime objects.
#include "iop/dev9.hpp"
#include "iop/hw.hpp"
#include "iop/iop.hpp"
#include "ps2/disc.hpp"
#include "ps2/system.hpp"

#include <cstdio>
#include <cstring>

namespace ps2 {
Options g_options;
alignas(64) std::uint8_t g_ram[32u << 20];
std::uint64_t now() { return 0; }
void watch_span(std::uint32_t, std::uint32_t, const char *) {}
namespace hw {
void dmac_raise(unsigned) {}
}
namespace disc {
std::optional<Entry> find(const std::string &) { return std::nullopt; }
std::uint32_t layer1_start() { return 0; }
bool read(std::uint32_t, std::uint32_t, void *) { return false; }
bool ready(std::uint32_t, std::uint32_t) { return true; }
}
}

namespace {

using namespace ps2::iop;
int g_failures = 0;

void expect(bool ok, const char *what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what);
    if (!ok) ++g_failures;
}

std::uint32_t r16(std::uint32_t a) { return dev9::read(a, 2); }
void w16(std::uint32_t a, std::uint32_t v) { dev9::write(a, v, 2); }
void w8(std::uint32_t a, std::uint32_t v) { dev9::write(a, v, 1); }

std::uint16_t eeprom_word(int index) {
    // The original DEV9.IRX sequence: start bit and READ opcode, address 0, dummy zero, then data.
    std::uint16_t words[4] = {};
    w8(0x1000002C, 0xE1);
    w8(0x1000002E, 0x80);
    for (int i = 0; i < 2; ++i) w8(0x1000002E, 0xA0), w8(0x1000002E, 0xE0);
    for (int i = 0; i < 7; ++i) w8(0x1000002E, 0x80), w8(0x1000002E, 0xC0);
    w8(0x1000002E, 0xC0);
    const bool dummy_zero = !(dev9::read(0x1000002E, 1) & 0x10);
    w8(0x1000002E, 0x80);
    for (auto &word : words)
        for (int bit = 15; bit >= 0; --bit) {
            w8(0x1000002E, 0xC0);
            if (dev9::read(0x1000002E, 1) & 0x10) word |= static_cast<std::uint16_t>(1u << bit);
            w8(0x1000002E, 0x80);
        }
    w8(0x1000002E, 0);
    return dummy_zero ? words[index] : 0xDEAD;
}

void queue_frame(std::uint16_t length) {
    w16(0x10001004, 0);
    for (std::uint32_t i = 0; i < length; i += 4) dev9::write(0x10001100, 0x11223344u + i, 4);
    // Byte-swapped {control, reserved, length, pointer}, as DEV9.IRX writes them once BD_MODE is set.
    w16(0x10003004, static_cast<std::uint16_t>(length << 8 | length >> 8));
    w16(0x10003006, 0x0010);
    w16(0x10003000, 0x0083);
    w16(0x10002008, 0x8000);
    w16(0x1000200A, 0x0000);
}

}

int main() {
    reset();
    expect(dev9::claims(0x1F801460) && dev9::claims(0x1F80146E) && !dev9::claims(0x1F80145E) && !dev9::claims(0x1F801480), "DEV9 window");
    expect(dev9::claims(0x10000000) && dev9::claims(0x100033FE) && !dev9::claims(0x0FFFFFFE) && !dev9::claims(0x10010000), "SPEED/SMAP window");
    expect(r16(0x1F80146E) == 0x30 && r16(0x10000002) == 0x11 && r16(0x10000004) == 0x01, "revisions and capabilities");

    w16(0x1F801460, 0x1234);
    w16(0x10000024, 0x0005);
    w16(0x10003000, 0xBEEF);
    expect(r16(0x1F801460) == 0x1234 && r16(0x10000024) == 0x0005 && r16(0x10003000) == 0xBEEF, "registers keep their own values");
    expect(r16(0x10000002) == 0x11 && r16(0x1F801462) == 0, "SPEED and DEV9 identity unchanged by neighbouring writes");

    w16(0x10002004, 0x8164);
    w16(0x10002006, 0x8000);
    expect(r16(0x10002004) == 0x8164 && r16(0x10002006) == 0x8000, "EMAC3 register halves");

    w16(0x1000205C, 0);
    w16(0x1000205E, 0x1020 | 2);
    expect((r16(0x1000205E) & 0x8000) && r16(0x1000205C) == 0x2000, "STA read of PHYID1");
    w16(0x1000205C, 0);
    w16(0x1000205E, 0x1020 | 3);
    expect((r16(0x1000205C) & 0xFFF0) == 0x5C20, "STA read of PHYID2");
    w16(0x1000205C, 0);
    w16(0x1000205E, 0x1020 | 1);
    expect(!(r16(0x1000205C) & 0x0004), "PHY reports no link");

    const std::uint16_t mac0 = eeprom_word(0), mac1 = eeprom_word(1), mac2 = eeprom_word(2), sum = eeprom_word(3);
    expect(mac0 == 0x5002 && mac1 == 0x3253 && mac2 == 0x0100 && sum == static_cast<std::uint16_t>(mac0 + mac1 + mac2), "EEPROM read protocol");

    expect(!dev9::dma(0x00100000, 0, true), "zero-length DMA refused");
    expect(!dev9::dma(0x001FFFF0, 8, true), "DMA beyond IOP RAM refused");
    expect(!dev9::dma(0x00100000, 8, true), "DMA without TX FIFO enable refused");
    w8(0x10001000, 0x01);
    w8(0x10001000, 0x02);
    expect(dev9::dma(0x00100000, 8, true) && r16(0x10001004) == 32, "TX FIFO DMA moves 32 bytes");

    w8(0x10000102, 1);
    w16(0x1000002A, 0);
    w16(0x10000128, 0xFFFF);
    queue_frame(64);
    expect((r16(0x10003000) & 0x0080) == 0 && (r16(0x10000028) & 0x14) == 0x14, "transmit without loopback completes and is dropped");
    expect(!(r16(0x10000028) & 0x20), "nothing received without loopback");

    w16(0x10002000, 0x2000); // EMAC3 soft reset restarts at descriptor 0
    w16(0x10002002, 0x0000);
    expect(!(r16(0x10002000) & 0x2000), "EMAC3 soft reset completes");
    w16(0x1000205C, 0x6100);
    w16(0x1000205E, 0x2020);
    w16(0x10003200, 0x0080);
    w16(0x10000128, 0xFFFF);
    queue_frame(64);
    expect((r16(0x10000028) & 0x34) == 0x34 && r16(0x10003200) == 0 && r16(0x10003204) == 0x4000 && r16(0x10003206) == 0x0040, "PHY loopback receives the frame with its length and pointer");
    expect(dev9::read(0x10001200, 4) == 0x11223344u && dev9::read(0x10001200, 4) == 0x11223348u, "received bytes match the transmitted frame");

    std::printf("%d failures\n", g_failures);
    return g_failures ? 1 : 0;
}
