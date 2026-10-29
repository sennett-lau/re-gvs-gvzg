#pragma once

// This experiment accepts only the two original executable names. It does not
// normalize a requested path, synthesize arguments, or return syscall success.
#include <cstdint>
#include <cstring>
#include <stdexcept>
#include <string>
#include <vector>

namespace original_exec {
inline constexpr char game[] = "cdrom0:\\SLPS_254.19;1";
inline constexpr char utility[] = "cdrom0:\\NTGUIDVD\\NTGDVDJ.BIN;1";
inline constexpr char game_sha[] = "294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6";
inline constexpr char utility_sha[] = "8109d5bb29a16fac1f417098ac551364d232df36feb1d7e9fa8134c81b8b6cec";

struct Request {
    std::string image, target, error;
    std::vector<std::string> args;
    std::uint32_t syscall = 0, pc = 0, ra = 0, sp = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    std::uint64_t cycles = 0;
    int thread = 0;
};

// Deliberately not std::exception: generated/native stacks must unwind all the
// way to the single outer host catch, including interrupt-style guest calls.
struct Transition { Request request; };

inline std::uint32_t ram_address(std::uint32_t address, std::size_t size, std::size_t ram_size) {
    // Physical, KSEG0 and KSEG1 EE RAM only. Do not alias arbitrary device or
    // scratchpad addresses into RAM by blindly masking the high bits.
    const auto segment = address & 0xE0000000u;
    if (segment != 0 && segment != 0x80000000u && segment != 0xA0000000u)
        throw std::runtime_error("argument address is not EE RAM");
    const auto at = address & 0x1FFFFFFFu;
    if (at >= ram_size || size > ram_size - at)
        throw std::runtime_error("argument span exceeds EE RAM");
    return at;
}

inline std::string read_string(const std::uint8_t* ram, std::size_t size, std::uint32_t address) {
    if (!address) throw std::runtime_error("null argument string");
    const auto at = ram_address(address, 1, size);
    std::string result;
    for (std::size_t i = 0; i < 256 && i < size - at; ++i) {
        const auto ch = ram[at + i];
        if (!ch) return result;
        // The allowlisted flow is ASCII. Reject instead of lossy UTF-8 decode.
        if (ch > 0x7F) throw std::runtime_error("non-ASCII exec argument unsupported");
        result.push_back(static_cast<char>(ch));
    }
    throw std::runtime_error("unterminated or oversized exec argument");
}

inline Request capture(const std::uint8_t* ram, std::size_t size, Request r) {
    try {
        if (r.syscall != 6) throw std::runtime_error("only positive LoadExecPS2 syscall 6 is supported");
        if (r.a1 > 15) throw std::runtime_error("supplied argc exceeds SetupThread capacity");
        r.target = read_string(ram, size, r.a0);
        if (r.a1 && (!r.a2 || (r.a2 & 3))) throw std::runtime_error("invalid argv table alignment or null pointer");
        const auto table = r.a1 ? ram_address(r.a2, 4u * r.a1, size) : 0;
        std::size_t bytes = r.target.size() + 1;
        for (std::uint32_t i = 0; i < r.a1; ++i) {
            const auto* p = ram + table + i * 4;
            const std::uint32_t ptr = p[0] | (std::uint32_t(p[1]) << 8) |
                (std::uint32_t(p[2]) << 16) | (std::uint32_t(p[3]) << 24);
            r.args.push_back(read_string(ram, size, ptr));
            bytes += r.args.back().size() + 1;
        }
        if (bytes > 256) throw std::runtime_error("exec strings exceed SetupThread payload capacity");
        if (!((r.image == "game" && r.target == utility) || (r.image == "utility" && r.target == game)))
            throw std::runtime_error("exec target or direction is not allowlisted");
    } catch (const std::exception& e) { r.error = e.what(); }
    return r;
}

inline std::string quote(const std::string& text) {
    const char* hex = "0123456789abcdef";
    std::string result = "\"";
    for (unsigned char ch : text) {
        if (ch == '\\' || ch == '"') { result += '\\'; result += ch; }
        else if (ch < 32) { result += "\\u00"; result += hex[ch >> 4]; result += hex[ch & 15]; }
        else result += ch;
    }
    return result + '"';
}

inline std::string json(const Request& r, bool flushed) {
    std::string out = "{\"schema\":1,\"kind\":\"loadexec\",\"image\":" + quote(r.image) +
        ",\"imageSha256\":" + quote(r.image == "game" ? game_sha : utility_sha) +
        ",\"target\":" + quote(r.target) + ",\"args\":[";
    for (std::size_t i = 0; i < r.args.size(); ++i) out += (i ? "," : "") + quote(r.args[i]);
    out += "],\"error\":" + quote(r.error) + ",\"nativeFlushed\":" + (flushed ? "true" : "false") +
        ",\"syscall\":" + std::to_string(r.syscall) + ",\"pc\":" + std::to_string(r.pc) +
        ",\"ra\":" + std::to_string(r.ra) + ",\"sp\":" + std::to_string(r.sp) +
        ",\"a0\":" + std::to_string(r.a0) + ",\"a1\":" + std::to_string(r.a1) +
        ",\"a2\":" + std::to_string(r.a2) + ",\"a3\":" + std::to_string(r.a3) +
        ",\"cycles\":" + quote(std::to_string(r.cycles)) + ",\"thread\":" + std::to_string(r.thread) + "}";
    return out;
}
}
