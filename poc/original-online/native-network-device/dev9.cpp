#include "dev9.hpp"

#include "hw.hpp"
#include "iop.hpp"

#include "ps2/state.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <set>

namespace ps2::iop::dev9 {

namespace {

// Register contracts are those exercised by the original DEV9.IRX 2800 (CXD9611 path, SPEED and
// SMAP self-test, EEPROM read) and SMAP.IRX 2.16.0 (PHY identity and link handling).
constexpr std::uint32_t kDev9 = 0x1F801460u, kDev9End = 0x1F801480u;
constexpr std::uint32_t kSpeed = 0x10000000u, kSpeedEnd = 0x10010000u;
constexpr std::uint32_t kSmap = 0x10000100u, kFifo = 0x10001000u, kTxData = 0x10001100u, kRxData = 0x10001200u;
constexpr std::uint32_t kEmac3 = 0x10002000u, kEmac3End = 0x10002070u, kBd = 0x10003000u, kBdEnd = 0x10003400u;

constexpr std::uint16_t kDev9Revision = 0x0030;  // DEV9.IRX: (rev & 0xF0) == 0x30 selects CXD9611
constexpr std::uint16_t kSpeedRevision = 0x0011; // listed by DEV9.IRX as "ES2"; >= 0x11 selects BD byte swap
constexpr std::uint16_t kSpeedCaps = 0x0001;     // SMAP only: no ATA, no flash
constexpr std::uint8_t kMac[6] = {0x02, 0x50, 0x53, 0x32, 0x00, 0x01}; // locally administered

constexpr std::uint16_t kTxDnv = 1u << 2, kRxDnv = 1u << 3, kTxEnd = 1u << 4, kRxEnd = 1u << 5;
constexpr std::uint16_t kBdReady = 0x8000; // TX ready / RX empty
constexpr unsigned kTxFifo = 4096, kRxFifo = 16384, kDescriptors = 64, kInterrupt = 13;

struct Device {
    std::uint16_t dev9[16];
    std::uint16_t speed[128];
    std::uint16_t smap[128];
    std::uint16_t intr_stat, intr_mask;
    std::uint8_t pio_data, tx_ctrl, rx_ctrl;
    std::uint16_t tx_write, rx_read, rx_write, tx_frames, rx_frames;
    std::uint8_t tx_fifo[kTxFifo];
    std::uint8_t rx_fifo[kRxFifo];
    std::uint16_t bd[(kBdEnd - kBd) / 2];
    std::uint32_t tx_index, rx_index;
    std::uint32_t emac3[(kEmac3End - kEmac3) / 4];
    std::uint16_t phy[32];
    std::uint16_t eeprom[64];
    std::uint8_t ee_state, ee_count, ee_addr, ee_bit, ee_dout, ee_clock;
    std::uint16_t ee_command;
    std::uint64_t dropped, looped;
};

Device g;
std::set<std::uint32_t> g_reported;
const bool g_trace = std::getenv("PS2_DEV9_TRACE") != nullptr;

void report(const char *what, std::uint32_t a, std::uint32_t v) {
    if (g_reported.insert(a).second) std::fprintf(stderr, "[dev9] unmodelled %s 0x%08X = 0x%X (pc 0x%08X)\n", what, a, v, g_cpu.pc);
}

void update_irq() {
    if (g.intr_stat & g.intr_mask) hw::raise_interrupt(kInterrupt);
}

void reset_phy() {
    std::memset(g.phy, 0, sizeof g.phy);
    g.phy[0] = 0x3100; // BMCR: auto-negotiation, 100 Mb/s, full duplex
    g.phy[1] = 0x7809; // BMSR: 10/100 capabilities, auto-negotiation able, no link, negotiation incomplete
    g.phy[2] = 0x2000; // PHYID1 and PHYID2 as SMAP.IRX requires for DP83846A
    g.phy[3] = 0x5C20;
    g.phy[4] = 0x01E1;
}

void write_phy(unsigned reg, std::uint16_t v) {
    if (reg == 0 && (v & 0x8000)) {
        reset_phy();
        return;
    }
    if (reg == 0) v &= static_cast<std::uint16_t>(~0x0200); // restart auto-negotiation completes, still without a partner
    if (reg == 1 || reg == 2 || reg == 3) return;          // read-only status and identity
    g.phy[reg & 31] = v;
}

std::uint16_t field(unsigned index) {
    const std::uint16_t raw = g.bd[index];
    return (g.smap[1] & 1) ? static_cast<std::uint16_t>(raw << 8 | raw >> 8) : raw;
}

void set_field(unsigned index, std::uint16_t v) { g.bd[index] = (g.smap[1] & 1) ? static_cast<std::uint16_t>(v << 8 | v >> 8) : v; }

void receive(const std::uint8_t *frame, std::uint16_t length) {
    const unsigned at = (kDescriptors + g.rx_index) * 4;
    if (!(field(at) & kBdReady)) {
        g.intr_stat |= kRxDnv;
        std::fprintf(stderr, "[dev9] receive descriptor %u busy, %u-byte frame dropped\n", g.rx_index, length);
        return;
    }
    const std::uint16_t start = g.rx_write;
    for (unsigned i = 0; i < length; ++i) g.rx_fifo[(start + i) % kRxFifo] = frame[i];
    g.rx_write = static_cast<std::uint16_t>((start + ((length + 3u) & ~3u)) % kRxFifo);
    set_field(at + 1, length);
    set_field(at + 2, static_cast<std::uint16_t>(0x4000 + start));
    set_field(at, 0);
    g.rx_index = (g.rx_index + 1) % kDescriptors;
    ++g.rx_frames;
    g.intr_stat |= kRxEnd;
}

void transmit() {
    std::uint8_t frame[kTxFifo];
    for (unsigned n = 0; n < kDescriptors; ++n) {
        const unsigned at = g.tx_index * 4;
        const std::uint16_t control = field(at);
        if (!(control & kBdReady)) {
            g.intr_stat |= kTxDnv;
            break;
        }
        const std::uint16_t length = field(at + 1) < kTxFifo ? field(at + 1) : kTxFifo;
        const unsigned start = (field(at + 2) - 0x1000u) % kTxFifo;
        for (unsigned i = 0; i < length; ++i) frame[i] = g.tx_fifo[(start + i) % kTxFifo];
        set_field(at, static_cast<std::uint16_t>(control & ~kBdReady));
        if (g.tx_frames) --g.tx_frames;
        if (g.phy[0] & 0x4000) {
            ++g.looped;
            receive(frame, length);
        } else {
            ++g.dropped;
            std::fprintf(stderr, "[dev9] transmit without an external link: %u-byte frame dropped (%llu so far)\n", length,
                         static_cast<unsigned long long>(g.dropped));
        }
        g.intr_stat |= kTxEnd;
        g.tx_index = (g.tx_index + 1) % kDescriptors;
    }
    update_irq();
}

void write_emac3(unsigned reg, std::uint32_t v) {
    switch (reg) {
    case 0: // MODE0: soft reset completes at once
        if (v & 0x20000000u) {
            std::memset(g.emac3, 0, sizeof g.emac3);
            g.tx_index = g.rx_index = 0;
            v &= ~0x20000000u;
        }
        break;
    case 2: // TxMODE0: GNP0 starts transmission of ready descriptors
        g.emac3[reg] = v & ~0x80000000u;
        if (v & 0x80000000u) transmit();
        return;
    case 5: // interrupt status, write one to clear
        g.emac3[reg] &= ~v;
        return;
    case 23: { // STA control: PHY access through the EMAC3 management interface
        const unsigned phy = (v >> 5) & 31, reg_index = v & 31;
        if (v & 0x1000u) { // read, as DEV9.IRX issues 0x1020 | reg
            const std::uint16_t data = phy == 1 ? g.phy[reg_index] : 0xFFFF;
            if (g_trace) std::fprintf(stderr, "[dev9] PHY %u read %u -> 0x%04X\n", phy, reg_index, data);
            v = static_cast<std::uint32_t>(data) << 16 | (v & 0x7FFFu);
        } else if (v & 0x2000u) { // write, as DEV9.IRX issues 0x2020 | reg with the data in the high half
            if (g_trace) std::fprintf(stderr, "[dev9] PHY %u write %u = 0x%04X\n", phy, reg_index, v >> 16);
            if (phy == 1) write_phy(reg_index, static_cast<std::uint16_t>(v >> 16));
            v &= 0xFFFF7FFFu;
        }
        v |= 0x8000u;
        break;
    }
    }
    g.emac3[reg] = v;
}

void eeprom_pio(std::uint8_t v) {
    const bool select = v & 0x80, clock = v & 0x40, din = v & 0x20;
    if (!select) {
        g.ee_state = 0;
        g.ee_dout = 1;
    } else if (clock && !g.ee_clock) {
        switch (g.ee_state) {
        case 0:
            if (din) g.ee_state = 1, g.ee_count = 0, g.ee_command = 0;
            break;
        case 1:
            g.ee_command = static_cast<std::uint16_t>(g.ee_command << 1 | din);
            if (++g.ee_count == 8) {
                g.ee_addr = g.ee_command & 63;
                if ((g.ee_command >> 6) == 2) {
                    g.ee_state = 2;
                    g.ee_bit = 16;
                    g.ee_dout = 0; // dummy zero before the first data bit
                } else {
                    g.ee_state = 3;
                    std::fprintf(stderr, "[dev9] EEPROM command 0x%X ignored\n", g.ee_command);
                }
            }
            break;
        case 2:
            if (g.ee_bit == 0) {
                g.ee_bit = 16;
                g.ee_addr = (g.ee_addr + 1) & 63;
            }
            --g.ee_bit;
            g.ee_dout = (g.eeprom[g.ee_addr] >> g.ee_bit) & 1;
            break;
        }
    }
    g.ee_clock = clock;
    g.pio_data = v;
}

std::uint16_t read16(std::uint32_t a) {
    if (a >= kDev9) {
        const unsigned reg = (a - kDev9) / 2;
        if (a == 0x1F80146Eu) return kDev9Revision;
        if (a == 0x1F801462u) return 0; // bit 0 clear: adaptor present
        return g.dev9[reg];
    }
    switch (a) {
    case kSpeed + 0x02: return kSpeedRevision;
    case kSpeed + 0x04: return kSpeedCaps;
    case kSpeed + 0x28: return g.intr_stat;
    case kSpeed + 0x2A: return g.intr_mask;
    case kSpeed + 0x2E: return static_cast<std::uint16_t>((g.pio_data & ~0x10) | (g.ee_dout << 4));
    case kFifo + 0x00: return g.tx_ctrl;
    case kFifo + 0x04: return g.tx_write;
    case kFifo + 0x0C: return g.tx_frames;
    case kFifo + 0x30: return g.rx_ctrl;
    case kFifo + 0x34: return g.rx_read;
    case kFifo + 0x3C: return g.rx_frames;
    }
    if (a >= kBd && a < kBdEnd) return g.bd[(a - kBd) / 2];
    if (a >= kEmac3 && a < kEmac3End) {
        const std::uint32_t v = g.emac3[(a - kEmac3) / 4];
        return static_cast<std::uint16_t>((a & 2) ? v : v >> 16);
    }
    if (a < kSmap + 0x100) {
        const std::uint16_t v = a < kSmap ? g.speed[(a - kSpeed) / 2] : g.smap[(a - kSmap) / 2];
        report("read", a, v);
        return v;
    }
    report("read", a, 0);
    return 0;
}

void write16(std::uint32_t a, std::uint16_t v) {
    if (a >= kDev9) {
        g.dev9[(a - kDev9) / 2] = v;
        return;
    }
    switch (a) {
    case kSpeed + 0x2A:
        if (g_trace) std::fprintf(stderr, "[dev9] interrupt mask 0x%04X (status 0x%04X)\n", v, g.intr_stat);
        g.intr_mask = v;
        update_irq();
        return;
    case kSpeed + 0x2E: eeprom_pio(static_cast<std::uint8_t>(v)); return;
    case kSmap + 0x28: // INTR_CLR
        g.intr_stat &= static_cast<std::uint16_t>(~v);
        return;
    case kFifo + 0x00:
        if (v & 1) g.tx_write = g.tx_frames = 0;
        g.tx_ctrl = static_cast<std::uint8_t>(v & 2);
        return;
    case kFifo + 0x04: g.tx_write = v % kTxFifo; return;
    case kFifo + 0x10: ++g.tx_frames; return;
    case kFifo + 0x30:
        if (v & 1) g.rx_read = g.rx_write = g.rx_frames = 0;
        g.rx_ctrl = static_cast<std::uint8_t>(v & 2);
        return;
    case kFifo + 0x34: g.rx_read = v % kRxFifo; return;
    case kFifo + 0x40:
        if (g.rx_frames) --g.rx_frames;
        return;
    }
    if (a >= kBd && a < kBdEnd) {
        g.bd[(a - kBd) / 2] = v;
        return;
    }
    if (a >= kEmac3 && a < kEmac3End) {
        const unsigned reg = (a - kEmac3) / 4;
        if (a & 2) write_emac3(reg, (g.emac3[reg] & 0xFFFF0000u) | v);
        else g.emac3[reg] = (g.emac3[reg] & 0xFFFFu) | static_cast<std::uint32_t>(v) << 16;
        return;
    }
    if (a < kSmap + 0x100) {
        // Plain SPEED and SMAP control registers keep their value; these are the ones the drivers program.
        static const std::set<std::uint32_t> kStored = {kSpeed + 0x24, kSpeed + 0x2C, kSpeed + 0x32, kSpeed + 0x64, kSmap + 0x00, kSmap + 0x02};
        if (!kStored.count(a)) report("write", a, v);
        if (a < kSmap) g.speed[(a - kSpeed) / 2] = v;
        else g.smap[(a - kSmap) / 2] = v;
        return;
    }
    report("write", a, v);
}

}

bool claims(std::uint32_t a) { return (a >= kDev9 && a < kDev9End) || (a >= kSpeed && a < kSpeedEnd); }

std::uint32_t read(std::uint32_t a, unsigned size) {
    if (a == kRxData && size == 4) {
        std::uint32_t v = 0;
        for (unsigned i = 0; i < 4; ++i) v |= static_cast<std::uint32_t>(g.rx_fifo[(g.rx_read + i) % kRxFifo]) << (8 * i);
        g.rx_read = static_cast<std::uint16_t>((g.rx_read + 4) % kRxFifo);
        return v;
    }
    if (size == 4) return read16(a) | static_cast<std::uint32_t>(read16(a + 2)) << 16;
    const std::uint16_t v = read16(a & ~1u);
    return size == 1 ? (v >> ((a & 1) * 8)) & 0xFFu : v;
}

void write(std::uint32_t a, std::uint32_t v, unsigned size) {
    if (a == kTxData && size == 4) {
        for (unsigned i = 0; i < 4; ++i) g.tx_fifo[(g.tx_write + i) % kTxFifo] = static_cast<std::uint8_t>(v >> (8 * i));
        g.tx_write = static_cast<std::uint16_t>((g.tx_write + 4) % kTxFifo);
        return;
    }
    if (size == 4) {
        write16(a, static_cast<std::uint16_t>(v));
        write16(a + 2, static_cast<std::uint16_t>(v >> 16));
        return;
    }
    write16(a & ~1u, static_cast<std::uint16_t>(size == 1 && (a & 1) ? v << 8 : v));
}

bool dma(std::uint32_t madr, std::uint32_t words, bool to_device) {
    const std::uint32_t bytes = words * 4, base = madr & (kRamSize - 1);
    if (!words || words > kRxFifo / 4 || base + bytes > kRamSize) {
        std::fprintf(stderr, "[dev9] DMA of %u words at 0x%08X rejected and left incomplete\n", words, madr);
        return false;
    }
    if (to_device && (g.tx_ctrl & 2)) {
        for (std::uint32_t i = 0; i < bytes; ++i) g.tx_fifo[(g.tx_write + i) % kTxFifo] = *ram_ptr(madr + i);
        g.tx_write = static_cast<std::uint16_t>((g.tx_write + bytes) % kTxFifo);
        g.tx_ctrl &= static_cast<std::uint8_t>(~2);
        return true;
    }
    if (!to_device && (g.rx_ctrl & 2)) {
        for (std::uint32_t i = 0; i < bytes; ++i) *ram_ptr(madr + i) = g.rx_fifo[(g.rx_read + i) % kRxFifo];
        g.rx_read = static_cast<std::uint16_t>((g.rx_read + bytes) % kRxFifo);
        g.rx_ctrl &= static_cast<std::uint8_t>(~2);
        return true;
    }
    std::fprintf(stderr, "[dev9] DMA of %u words %s without an enabled SMAP FIFO left incomplete\n", words, to_device ? "to the device" : "from the device");
    return false;
}

void reset() {
    std::memset(&g, 0, sizeof g);
    g_reported.clear();
    g.ee_dout = 1;
    for (unsigned i = 0; i < 3; ++i) g.eeprom[i] = static_cast<std::uint16_t>(kMac[2 * i] | kMac[2 * i + 1] << 8);
    g.eeprom[3] = static_cast<std::uint16_t>(g.eeprom[0] + g.eeprom[1] + g.eeprom[2]);
    reset_phy();
}

void state(ps2::state::Stream &s) {
    s.tag("dev9");
    s.pod(g);
}

}
