// Native IOP harness: original SIO2MAN and MCMAN on the runtime's IOP interpreter and serial card,
// with ioman calls issued by a synthetic caller module from an ordinary IOP thread.
#include "iop/iop.hpp"
#include "iop/kernel.hpp"
#include "iop/native_storage.hpp"
#include "iop/sio2.hpp"
#include "ps2/disc.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

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

using namespace ps2;

const std::map<std::string, std::uint32_t> kIoman = {
    {"open", 4}, {"close", 5}, {"read", 6}, {"write", 7}, {"lseek", 8}, {"ioctl", 9}, {"remove", 10}, {"mkdir", 11},
    {"rmdir", 12}, {"dopen", 13}, {"dclose", 14}, {"dread", 15}, {"getstat", 16}, {"chstat", 17}, {"AddDrv", 20},
    {"DelDrv", 21}, {"rename", 25}, {"sync", 27}, {"devctl", 31}};

constexpr std::uint64_t kFrameCycles = 4'915'200;  // one NTSC field of EE cycles

std::uint32_t lw(int rt, int base, int off) { return 35u << 26 | std::uint32_t(base) << 21 | std::uint32_t(rt) << 16 | (off & 0xFFFF); }
std::uint32_t sw(int rt, int base, int off) { return 43u << 26 | std::uint32_t(base) << 21 | std::uint32_t(rt) << 16 | (off & 0xFFFF); }
std::uint32_t addiu(int rt, int rs, int imm) { return 9u << 26 | std::uint32_t(rs) << 21 | std::uint32_t(rt) << 16 | (imm & 0xFFFF); }
std::uint32_t beq(int rs, int rt, int off) { return 4u << 26 | std::uint32_t(rs) << 21 | std::uint32_t(rt) << 16 | (off & 0xFFFF); }

// Entry loops over {function, a0..a3, three stack arguments, result, unused} records until function is 0.
// The module imports every ioman entry used by the commands, plus one optional other library entry.
std::vector<std::uint8_t> caller(std::uint32_t table, std::vector<std::uint32_t> &stubs, const std::string &library = "", std::uint32_t index = 0) {
    std::vector<std::uint32_t> code = {
        addiu(29, 29, -48), sw(31, 29, 44), sw(16, 29, 40), 15u << 26 | 16u << 16 | table >> 16, 13u << 26 | 16u << 21 | 16u << 16 | (table & 0xFFFF),
        lw(25, 16, 0), 0, beq(25, 0, 16), 0,
        lw(8, 16, 20), lw(9, 16, 24), lw(10, 16, 28), sw(8, 29, 16), sw(9, 29, 20), sw(10, 29, 24),
        lw(4, 16, 4), lw(5, 16, 8), lw(6, 16, 12), lw(7, 16, 16), 25u << 21 | 31u << 11 | 9u, 0,
        sw(2, 16, 32), beq(0, 0, -18), addiu(16, 16, 40),
        lw(31, 29, 44), lw(16, 29, 40), addiu(2, 0, 1), 0x03E00008u, addiu(29, 29, 48)};
    code.insert(code.end(), {0x41E00000u, 0, 0x0104u, 0x616D6F69u, 0x0000006Eu});
    for (const auto &[name, index] : kIoman) {
        stubs.push_back(static_cast<std::uint32_t>(code.size() * 4));
        code.insert(code.end(), {0x03E00008u, 0x24000000u | index});
    }
    code.insert(code.end(), {0, 0});
    if (!library.empty()) {
        char name[8] = {};
        std::memcpy(name, library.data(), std::min<std::size_t>(library.size(), 8));
        std::uint32_t words[2];
        std::memcpy(words, name, 8);
        code.insert(code.end(), {0x41E00000u, 0, 0x0101u, words[0], words[1]});
        stubs.push_back(static_cast<std::uint32_t>(code.size() * 4));
        code.insert(code.end(), {0x03E00008u, 0x24000000u | index, 0, 0});
    }
    std::vector<std::uint8_t> elf(0xA0 + code.size() * 4);
    auto put32 = [&](std::size_t at, std::uint32_t v) { std::memcpy(elf.data() + at, &v, 4); };
    auto put16 = [&](std::size_t at, std::uint16_t v) { std::memcpy(elf.data() + at, &v, 2); };
    std::memcpy(elf.data(), "\x7f" "ELF\x01\x01\x01", 7);
    put16(16, 0xFF80);
    put16(18, 8);
    put32(20, 1);
    put32(28, 52);
    put16(40, 52);
    put16(42, 32);
    put16(44, 2);
    put32(52, 0x70000080u);
    put32(56, 0x74);
    put32(84, 1);
    put32(88, 0xA0);
    put32(100, static_cast<std::uint32_t>(code.size() * 4));
    put32(104, static_cast<std::uint32_t>(code.size() * 4));
    put32(0x74, 0xFFFFFFFFu);
    put32(0x74 + 12, static_cast<std::uint32_t>(code.size() * 4));
    std::memcpy(elf.data() + 0xA0, code.data(), code.size() * 4);
    return elf;
}

void step() {
    iop::run(kFrameCycles);
    iop::vblank(true);
    iop::vblank(false);
    iop::sio2::flush_cards();
}

bool wait_for(bool &done, int frames) {
    for (int i = 0; i < frames && !done; ++i) step();
    return done;
}

// PATH or PATH::ARG::ARG..., with the arguments passed NUL-separated as LoadModule does.
bool load(const std::string &spec) {
    const auto split = spec.find("::");
    const std::string path = spec.substr(0, split);
    std::string args = split == std::string::npos ? "" : spec.substr(split + 2);
    for (std::size_t at; (at = args.find("::")) != std::string::npos;) args.replace(at, 2, std::string(1, '\0'));
    std::ifstream in(path, std::ios::binary);
    std::vector<std::uint8_t> bytes((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    bool done = false;
    int result = 0;
    const int id = iop::load_module_buffer(bytes, path, args, [&](int, int r) { done = true; result = r; });
    const bool ok = id >= 0 && wait_for(done, 600);
    std::printf("{\"event\":\"module\",\"path\":\"%s\",\"id\":%d,\"started\":%s,\"result\":%d}\n", path.c_str(), id, ok ? "true" : "false", result);
    return ok;
}

std::string hex(const std::uint8_t *p, std::size_t n) {
    static const char *digits = "0123456789abcdef";
    std::string s;
    for (std::size_t i = 0; i < n; ++i) s += digits[p[i] >> 4], s += digits[p[i] & 15];
    return s;
}

std::string json_string(const std::string &s) {
    std::string out = "\"";
    for (char ch : s) {
        if (ch == '"' || ch == '\\') out += '\\';
        if (static_cast<unsigned char>(ch) < 0x20) out += '?';
        else out += ch;
    }
    return out + "\"";
}

// One command line: function name followed by arguments. "s:text" places a string, "b:N" an N-byte
// zeroed buffer, "p:N:seed" an N-byte pattern buffer, "$k" the result of command k, otherwise an integer.
struct Runner {
    std::vector<std::int32_t> results;

    std::int32_t run(const std::string &line) {
        std::istringstream words(line);
        std::string name, library, index_word;
        std::uint32_t library_index = 0;
        words >> name;
        std::string rejected;
        if (name == "call") { // call LIBRARY INDEX args...
            words >> library >> index_word;
            const bool digits = !index_word.empty() && index_word.find_first_not_of("0123456789") == std::string::npos;
            if (library.empty() || library.size() > 8) rejected = "library name must be 1-8 characters";
            else if (!digits || index_word.size() > 5 || std::stoul(index_word) > 0xFFFF) rejected = "index must be 0-65535";
            else library_index = static_cast<std::uint32_t>(std::stoul(index_word));
        }
        std::vector<std::uint32_t> args, buffers;
        std::vector<std::pair<std::uint32_t, std::uint32_t>> dumps;
        std::string word;
        while (words >> word) {
            if (word.rfind("s:", 0) == 0) {
                const std::string text = word.substr(2);
                const std::uint32_t at = iop::kernel::alloc(static_cast<std::uint32_t>(text.size() + 1));
                std::memcpy(iop::ram_ptr(at), text.c_str(), text.size() + 1);
                args.push_back(at), buffers.push_back(at);
            } else if (word.rfind("b:", 0) == 0 || word.rfind("p:", 0) == 0) {
                const std::uint32_t size = static_cast<std::uint32_t>(std::stoul(word.substr(2)));
                const std::uint32_t at = iop::kernel::alloc(size);
                std::memset(iop::ram_ptr(at), 0, size);
                if (word[0] == 'p') {
                    std::uint32_t seed = static_cast<std::uint32_t>(std::stoul(word.substr(word.rfind(':') + 1)));
                    for (std::uint32_t i = 0; i < size; ++i) seed = seed * 1103515245u + 12345u, *iop::ram_ptr(at + i) = static_cast<std::uint8_t>(seed >> 16);
                }
                args.push_back(at), buffers.push_back(at), dumps.emplace_back(at, size);
            } else if (word[0] == '$') {
                args.push_back(static_cast<std::uint32_t>(results.at(std::stoul(word.substr(1)))));
            } else {
                args.push_back(static_cast<std::uint32_t>(std::stol(word, nullptr, 0)));
            }
        }
        std::int32_t result = 0;
        bool ok = true;
        if (args.size() > 7 && rejected.empty()) rejected = "more than the caller's seven argument slots";
        if (!rejected.empty()) {
            std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":false,\"rejected\":%s}\n", results.size(), json_string(line).c_str(),
                        json_string(rejected).c_str());
            std::fflush(stdout);
            for (std::uint32_t at : buffers) iop::kernel::free(at);
            results.push_back(0);
            return 0;
        }
        if (name == "checkpoint") {
            result = ps2exec_checkpoint_card();
        } else if (name == "frames") {
            for (std::uint32_t i = 0; i < args.at(0); ++i) step();
        } else {
            std::vector<std::uint32_t> stubs;
            const std::uint32_t table = iop::kernel::alloc(80);
            const auto elf = caller(table, stubs, library, library_index);
            bool done = false;
            const int id = iop::load_module_buffer(elf, "caller", "", [&](int, int) { done = true; });
            const std::uint32_t base = iop::kernel::modules().at(id).base;
            std::uint32_t stub = 0, k = 0;
            for (const auto &[n, index] : kIoman) {
                if (n == name) stub = base + stubs[k];
                ++k;
            }
            if (name == "call") stub = base + stubs.back();
            if (!stub) throw std::runtime_error("unknown command " + name);
            std::memset(iop::ram_ptr(table), 0, 80);
            iop::set_ram32(table, stub);
            for (std::size_t i = 0; i < args.size() && i < 7; ++i) iop::set_ram32(table + 4 + static_cast<std::uint32_t>(i) * 4, args[i]);
            ok = wait_for(done, 3000);
            result = static_cast<std::int32_t>(iop::ram32(table + 32));
            iop::kernel::free(table);
        }
        std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":%s,\"result\":%d", results.size(), json_string(line).c_str(), ok ? "true" : "false", result);
        for (const auto &[at, size] : dumps) {
            std::printf(",\"buffer\":\"%s\"", hex(iop::ram_ptr(at), size).c_str());
        }
        std::printf("}\n");
        std::fflush(stdout);
        for (std::uint32_t at : buffers) iop::kernel::free(at);
        results.push_back(result);
        return result;
    }
};

}

int main(int argc, char **argv) {
    if (argc < 4) {
        std::fprintf(stderr, "usage: %s CARD|none SCRIPT MODULE...\n", argv[0]);
        return 2;
    }
    if (std::string(argv[1]) != "none") g_options.memcard_path = argv[1];
    iop::reset();
    for (int i = 3; i < argc; ++i)
        if (!load(argv[i])) return 3;
    std::ifstream script(argv[2]);
    Runner runner;
    for (std::string line; std::getline(script, line);) {
        if (line.empty() || line[0] == '#') continue;
        runner.run(line);
    }
    return 0;
}
