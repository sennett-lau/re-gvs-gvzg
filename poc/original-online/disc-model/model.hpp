#pragma once
// Experimental HLE model, independently expressed from the documented
// command-75 behavior of PCSX2 33127ad0df121e5b831494c389068ed9f9f3ad4b.
// See README.md for reference provenance and the physical-hardware limitation.
#include <array>
#include <cstdint>
#include <functional>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace original_disc_model {
struct KeyResponse {
    bool accepted = false;
    std::uint8_t error = 0, valid = 0, xor_byte = 0;
    std::array<std::uint8_t, 5> registers{}; // MMIO 0x2030..34 = Key10..14.
};

inline std::string_view trim(std::string_view s) {
    const auto first = s.find_first_not_of(" \t\r");
    if (first == s.npos) return {};
    return s.substr(first, s.find_last_not_of(" \t\r") - first + 1);
}

// Deliberately narrow retail root-BOOT2 grammar. Never guess a missing serial,
// accept a second BOOT2, or substitute the selected game's name for metadata.
inline std::optional<std::string> boot_path(std::string_view cnf) {
    if (cnf.empty() || cnf.size() > 4096) return {};
    for (unsigned char c : cnf)
        if (c > 126 || (c < 32 && c != '\r' && c != '\n' && c != '\t')) return {};
    std::optional<std::string> path;
    while (!cnf.empty()) {
        const auto end = cnf.find('\n');
        const auto line = trim(cnf.substr(0, end));
        const auto eq = line.find('=');
        if (trim(line.substr(0, eq)) == "BOOT2") {
            if (path || eq == line.npos) return {};
            path = std::string(trim(line.substr(eq + 1)));
        }
        if (end == cnf.npos) break;
        cnf.remove_prefix(end + 1);
    }
    if (!path || path->size() != 21 || path->substr(0, 8) != "cdrom0:\\" ||
        (*path)[12] != '_' || (*path)[16] != '.' || path->substr(19) != ";1") return {};
    for (int i = 8; i < 12; ++i) if ((*path)[i] < 'A' || (*path)[i] > 'Z') return {};
    for (int i : {13, 14, 15, 17, 18}) if ((*path)[i] < '0' || (*path)[i] > '9') return {};
    return path;
}

inline KeyResponse command75(std::string_view serial, unsigned arg0, unsigned arg1, unsigned arg2) {
    KeyResponse response;
    if (arg0 || arg1 || arg2 != 75 || serial.size() != 10 || serial[4] != '-') return response;
    for (unsigned i = 0; i < 4; ++i) if (serial[i] < 'A' || serial[i] > 'Z') return response;
    unsigned number = 0;
    for (unsigned i = 5; i < 10; ++i) {
        if (serial[i] < '0' || serial[i] > '9') return response;
        number = number * 10 + unsigned(serial[i] - '0');
    }
    // Only numeric serial bits 5..9 are used by this five-byte response.
    // The other four exposed registers remain zero in this reference model.
    response.registers[4] = std::uint8_t(((number / 32) % 32) * 8 + 4);
    response.valid = 5;
    response.accepted = true;
    return response;
}

template<class Store> void clear_output(std::uint32_t out, Store store) {
    for (int i = 4; i >= 0; --i) store(out + unsigned(i), 0);
}
template<class Store> bool store_output(const KeyResponse& key, std::uint32_t out, Store store) {
    if (!key.accepted || key.error || !(key.valid & 4)) return false;
    for (unsigned i = 0; i < 5; ++i) {
        store(out + i, key.registers[i]);
        store(out + i, key.registers[i] ^ key.xor_byte);
    }
    return true;
}

struct Input {
    std::uint64_t epoch = 0, bytes = 0, reference_bytes = 0;
    std::string expected_boot;
    std::function<std::uint64_t()> current_epoch;
    std::function<bool(std::uint64_t, std::size_t)> ready;
    std::function<bool(std::uint64_t, std::uint8_t*, std::size_t)> read, reference;
};

// Each step does at most one bounded ready/read and compares at most 64 KiB.
// No positive cache survives a request, remount or IOP reset.
class Request {
public:
    explicit Request(Input input) : input_(std::move(input)) {}
    bool step(); // true = terminal (inspect error / key), false = pending
    const std::string& error() const { return error_; }
    const std::string& serial() const { return serial_; }
    const KeyResponse& key() const { return key_; }
    std::uint64_t compared() const { return compared_; }
    bool sector_read() const { return stage_ > 0; }
private:
    struct Entry { std::uint32_t sector, bytes; };
    bool fail(const char* message) { error_ = message; done_ = true; return true; }
    bool range(std::uint64_t offset, std::size_t size) const;
    int read(std::uint64_t offset, std::size_t size);
    std::optional<Entry> find_root(const std::string& name);
    Input input_;
    unsigned stage_ = 0;
    bool done_ = false;
    std::string error_, serial_, boot_;
    std::vector<std::uint8_t> buffer_, root_;
    Entry root_entry_{}, cnf_entry_{}, elf_entry_{};
    std::uint64_t compared_ = 0, volume_bytes_ = 0;
    KeyResponse key_;
};
}
