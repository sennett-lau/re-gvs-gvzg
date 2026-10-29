#pragma once
// Synthetic test media only. Never built into a game profile.
#include "model.hpp"
#include <algorithm>
#include <cstring>
#include <utility>

namespace disc_model_test {
inline void both(std::uint8_t* p, std::uint32_t n) {
    for (unsigned i = 0; i < 4; ++i) p[i] = p[7 - i] = std::uint8_t(n >> (8 * i));
}
inline std::size_t record(std::uint8_t* p, const std::string& name, unsigned sector, unsigned bytes, unsigned flags = 0) {
    const auto size = (33 + name.size() + 1) & ~std::size_t(1);
    p[0] = std::uint8_t(size); both(p + 2, sector); both(p + 10, bytes); p[25] = std::uint8_t(flags);
    p[28] = p[31] = 1; p[32] = std::uint8_t(name.size()); std::memcpy(p + 33, name.data(), name.size());
    return size;
}
struct Fixture {
    std::vector<std::uint8_t> media = std::vector<std::uint8_t>(256 * 2048);
    std::vector<std::uint8_t> reference = std::vector<std::uint8_t>(70003);
    std::string boot = "cdrom0:\\ABCD_123.45;1";
    std::uint64_t epoch = 1;
    bool available = true, short_read = false, short_reference = false;
    std::vector<std::pair<std::uint64_t, std::size_t>> reads;
    std::size_t cnf_record = 0, elf_record = 0, root_end = 0;
    Fixture() {
        for (std::size_t i = 0; i < reference.size(); ++i) reference[i] = std::uint8_t(i * 37 + 19);
        std::copy(reference.begin(), reference.end(), media.begin() + 80 * 2048);
        auto* p = media.data() + 16 * 2048;
        std::memcpy(p, "\x01" "CD001\x01", 7); both(p + 80, 256); p[129] = p[130] = 8;
        record(p + 156, std::string(1, '\0'), 20, 2048, 2);
        cnf_record = 20 * 2048;
        const auto cnf = "BOOT2 = " + boot + "\r\nVER = 1.00\r\nVMODE = NTSC\r\n";
        elf_record = cnf_record + record(media.data() + cnf_record, "SYSTEM.CNF;1", 21, unsigned(cnf.size()));
        root_end = elf_record + record(media.data() + elf_record, boot.substr(8), 80, unsigned(reference.size()));
        std::memcpy(media.data() + 21 * 2048, cnf.data(), cnf.size());
    }
    void cnf(const std::string& text) {
        std::fill(media.begin() + 21 * 2048, media.begin() + 23 * 2048, 0);
        std::memcpy(media.data() + 21 * 2048, text.data(), text.size());
        both(media.data() + cnf_record + 10, unsigned(text.size()));
    }
    original_disc_model::Input input() {
        return {epoch, media.size(), reference.size(), boot,
            [this] { return epoch; }, [this](auto, auto) { return available; },
            [this](std::uint64_t at, std::uint8_t* out, std::size_t size) {
                reads.emplace_back(at, size);
                if (short_read || at > media.size() || size > media.size() - at) return false;
                std::memcpy(out, media.data() + at, size); return true;
            }, [this](std::uint64_t at, std::uint8_t* out, std::size_t size) {
                if (short_reference || at > reference.size() || size > reference.size() - at) return false;
                std::memcpy(out, reference.data() + at, size); return true;
            }};
    }
};
}
