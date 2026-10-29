// Native IOP harness: original SIO2MAN and MCMAN on the runtime's IOP interpreter and serial card,
// with ioman calls issued by a synthetic caller module from an ordinary IOP thread.
#include "iop/iop.hpp"
#include "iop/kernel.hpp"
#include "iop/native_storage.hpp"
#include "iop/sio2.hpp"
#include "ps2/disc.hpp"
#include "ps2/system.hpp"

#include <algorithm>
#include <cctype>
#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <optional>
#include <set>
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

// PATH or PATH::ARG::ARG..., with each argument NUL-terminated as LoadModule receives them.
// "PATH::" passes one empty argument (a single NUL byte).
bool load(const std::string &spec) {
    const auto split = spec.find("::");
    const std::string path = spec.substr(0, split);
    std::string args = split == std::string::npos ? "" : spec.substr(split + 2) + std::string(1, '\0');
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

constexpr std::uint32_t kMaxBuffer = 0x10000;

// A whole word as an unsigned number (decimal, 0x hex or leading-0 octal), at most max. Signs,
// trailing characters and values that do not fit are refused rather than wrapped.
std::optional<std::uint32_t> number(const std::string &word, std::uint64_t max = 0xFFFFFFFFu) {
    if (word.empty() || !std::isdigit(static_cast<unsigned char>(word[0]))) return std::nullopt;
    errno = 0;
    char *end = nullptr;
    const unsigned long long v = std::strtoull(word.c_str(), &end, 0);
    if (errno || *end || v > max) return std::nullopt;
    return static_cast<std::uint32_t>(v);
}

// An argument word: a number below 2^32 or a negative number down to -2^31, as a 32-bit register value.
std::optional<std::uint32_t> integer(const std::string &word) {
    if (word.empty() || word[0] != '-') return number(word);
    const auto magnitude = number(word.substr(1), 0x80000000u);
    if (!magnitude) return std::nullopt;
    return static_cast<std::uint32_t>(0u - *magnitude);
}

// One command line: function name followed by arguments. "s:text" places a string, "b:N" an N-byte
// zeroed buffer, "p:N:seed" an N-byte pattern buffer, "$k" the result of command k, otherwise an integer.
struct Runner {
    std::vector<std::int32_t> results;
    std::map<std::string, std::pair<std::uint32_t, std::uint32_t>> kept; // name -> address, size
    std::set<std::uint32_t> caller_entries;
    int highest_thread = 0;
    const bool direct = std::getenv("PS2_HARNESS_DIRECT") != nullptr;

    static const iop::kernel::Module *loaded(const std::string &name) {
        for (const auto &[id, m] : iop::kernel::modules())
            if (m.name == name && m.base) return &m;
        return nullptr;
    }

    // Each call loads a caller module whose finished start thread keeps its stack, as the runtime has no
    // loadcore cleanup. Delete those dormant threads so long scripts do not exhaust IOP memory.
    void reclaim(std::uint32_t entry) {
        caller_entries.insert(entry);
        for (int id = 1; id <= highest_thread + 256; ++id) {
            const iop::kernel::Thread *t = iop::kernel::thread(id);
            if (!t) continue;
            highest_thread = std::max(highest_thread, id);
            if (t->status == iop::kernel::kDormant && caller_entries.count(t->entry)) iop::kernel::delete_thread(id);
        }
    }

    void refuse(const std::string &line, const std::string &why) {
        std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":false,\"rejected\":%s}\n", results.size(), json_string(line).c_str(),
                    json_string(why).c_str());
        std::fflush(stdout);
        results.push_back(0);
    }

    std::int32_t run(const std::string &line) {
        std::istringstream words(line);
        std::string name, library, index_word;
        std::uint32_t library_index = 0;
        words >> name;
        std::string rejected;
        if (name == "call") { // call LIBRARY INDEX args...
            words >> library >> index_word;
            const auto index = number(index_word, 0xFFFF);
            if (library.empty() || library.size() > 8) rejected = "library name must be 1-8 characters";
            else if (!index) rejected = "index must be 0-65535";
            else library_index = *index;
        }
        std::uint32_t target = 0;
        if (name == "callat") { // callat MODULE OFFSET args...: a function inside a loaded module, as its own code calls it
            std::string module_name, offset_word;
            words >> module_name >> offset_word;
            const iop::kernel::Module *module = loaded(module_name);
            const auto offset = number(offset_word);
            if (!module) rejected = "no loaded module " + module_name;
            else if (!offset) rejected = "offset must be a number below 2^32";
            else if (*offset & 3) rejected = "offset is not word-aligned";
            else if (*offset >= module->size) rejected = "offset outside the module";
            else target = module->base + *offset;
        }
        if (name == "peek") { // peek MODULE OFFSET SIZE prints bytes of a loaded module's image without changing them
            std::string module_name, offset_word, size_word, extra;
            words >> module_name >> offset_word >> size_word >> extra;
            const iop::kernel::Module *module = loaded(module_name);
            const auto offset = number(offset_word), size = number(size_word, 0x1000);
            if (!module) refuse(line, "no loaded module " + module_name);
            else if (!offset || !size || !*size || !extra.empty()) refuse(line, "peek needs MODULE OFFSET SIZE with SIZE 1-4096");
            else if (*offset > module->size || *size > module->size - *offset) refuse(line, "range outside the module");
            else {
                std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":true,\"result\":0,\"buffer\":\"%s\"}\n", results.size(),
                            json_string(line).c_str(), hex(iop::ram_ptr(module->base + *offset), *size).c_str());
                std::fflush(stdout);
                results.push_back(0);
            }
            return 0;
        }
        if (name == "modules") { // modules lists every loaded module with its base, entry and size
            std::string extra, list;
            if (words >> extra) { refuse(line, "modules takes no arguments"); return 0; }
            for (const auto &[id, m] : iop::kernel::modules())
                list += (list.empty() ? "" : ",") + std::string("{\"id\":") + std::to_string(id) + ",\"name\":" + json_string(m.name) +
                        ",\"base\":" + std::to_string(m.base) + ",\"entry\":" + std::to_string(m.entry) + ",\"size\":" + std::to_string(m.size) + "}";
            std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":true,\"result\":0,\"modules\":[%s]}\n", results.size(),
                        json_string(line).c_str(), list.c_str());
            std::fflush(stdout);
            results.push_back(0);
            return 0;
        }
        if (name == "threads") { // threads lists every IOP thread with its entry, status and stack
            std::string extra;
            if (words >> extra) { refuse(line, "threads takes no arguments"); return 0; }
            std::string list;
            for (int tid = 1; tid <= highest_thread + 256; ++tid) {
                const iop::kernel::Thread *t = iop::kernel::thread(tid);
                if (!t) continue;
                highest_thread = std::max(highest_thread, tid);
                char item[160];
                std::snprintf(item, sizeof item, "%s{\"id\":%d,\"entry\":%u,\"status\":%d,\"priority\":%d,\"stack\":%u,\"stack_size\":%u}",
                              list.empty() ? "" : ",", tid, t->entry, t->status, t->priority, t->stack, t->stack_size);
                list += item;
            }
            std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":true,\"result\":0,\"threads\":[%s],\"free_max\":%u,\"free_total\":%u}\n",
                        results.size(), json_string(line).c_str(), list.c_str(), iop::kernel::free_max(), iop::kernel::free_total());
            std::fflush(stdout);
            results.push_back(0);
            return 0;
        }
        if (name == "free" || name == "release") { // free prints the IOP memory left; release NAME frees a kept buffer
            std::string label, extra;
            words >> label >> extra;
            if (name == "release" && (!kept.count(label) || !extra.empty())) { refuse(line, "release needs a kept buffer name"); return 0; }
            if (name == "free" && !label.empty()) { refuse(line, "free takes no arguments"); return 0; }
            if (name == "release") iop::kernel::free(kept[label].first), kept.erase(label);
            std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":true,\"result\":0,\"free_max\":%u,\"free_total\":%u}\n",
                        results.size(), json_string(line).c_str(), iop::kernel::free_max(), iop::kernel::free_total());
            std::fflush(stdout);
            results.push_back(0);
            return 0;
        }
        // keep NAME SIZE: a buffer that outlives commands; dump NAME prints it. keep NAME leave:BYTES takes the
        // largest free block except BYTES, so a script can exhaust IOP memory and check that calls are refused.
        if (name == "keep" || name == "dump") {
            std::string label, size_word, extra;
            words >> label;
            if (name == "keep") words >> size_word;
            words >> extra;
            if (label.empty() || !extra.empty()) { refuse(line, "keep NAME SIZE or dump NAME"); return 0; }
            if (name == "dump" && !kept.count(label)) { refuse(line, "no kept buffer " + label); return 0; }
            if (name == "keep" && kept.count(label)) { refuse(line, "kept buffer " + label + " already exists"); return 0; }
            if (name == "keep") {
                std::uint32_t size = 0;
                if (size_word.rfind("leave:", 0) == 0) {
                    const auto leave = number(size_word.substr(6));
                    const std::uint32_t largest = iop::kernel::free_max();
                    if (!leave) { refuse(line, "leave needs a number"); return 0; }
                    if (largest < std::uint64_t{*leave} + 0x100u) { refuse(line, "largest free block " + std::to_string(largest)); return 0; }
                    size = (largest - *leave) & ~0xFFu;
                } else {
                    const auto explicit_size = number(size_word, kMaxBuffer);
                    if (!explicit_size || !*explicit_size) { refuse(line, "keep size must be 1-65536"); return 0; }
                    size = *explicit_size;
                }
                const std::uint32_t at = iop::kernel::alloc(size);
                if (!at) { refuse(line, "IOP memory has no room for the buffer"); return 0; }
                std::memset(iop::ram_ptr(at), 0, size);
                kept[label] = {at, size};
            }
            const auto &[at, size] = kept.at(label);
            std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":true,\"result\":0,\"address\":%u,\"size\":%u,\"buffer\":\"%s\"}\n",
                        results.size(), json_string(line).c_str(), at, size, size <= 0x1000u ? hex(iop::ram_ptr(at), size).c_str() : "");
            std::fflush(stdout);
            results.push_back(0);
            return 0;
        }
        const bool ioman = kIoman.count(name) != 0;
        if (rejected.empty() && !ioman && name != "call" && name != "callat" && name != "frames" && name != "checkpoint") rejected = "unknown command " + name;
        std::vector<std::uint32_t> args, buffers;
        std::vector<std::pair<std::uint32_t, std::uint32_t>> dumps;
        std::string word;
        while (rejected.empty() && words >> word) {
            if (word.rfind("s:", 0) == 0) {
                const std::string text = word.substr(2);
                const std::uint32_t at = iop::kernel::alloc(static_cast<std::uint32_t>(text.size() + 1));
                if (!at) { rejected = "IOP memory has no room for the buffer"; break; }
                std::memcpy(iop::ram_ptr(at), text.c_str(), text.size() + 1);
                args.push_back(at), buffers.push_back(at);
            } else if (word.rfind("b:", 0) == 0 || word.rfind("p:", 0) == 0) {
                const auto colon = word.find(':', 2);
                const auto size = number(word.substr(2, colon == std::string::npos ? std::string::npos : colon - 2), kMaxBuffer);
                const auto seed = word[0] == 'p' && colon != std::string::npos ? number(word.substr(colon + 1)) : std::optional<std::uint32_t>(0);
                if (!size || !*size || !seed || (word[0] == 'b') != (colon == std::string::npos)) { rejected = "b:SIZE or p:SIZE:SEED with SIZE 1-65536"; break; }
                const std::uint32_t at = iop::kernel::alloc(*size);
                if (!at) { rejected = "IOP memory has no room for the buffer"; break; }
                std::memset(iop::ram_ptr(at), 0, *size);
                if (word[0] == 'p')
                    for (std::uint32_t i = 0, value = *seed; i < *size; ++i) value = value * 1103515245u + 12345u, *iop::ram_ptr(at + i) = static_cast<std::uint8_t>(value >> 16);
                args.push_back(at), buffers.push_back(at), dumps.emplace_back(at, *size);
            } else if (word.rfind("w:", 0) == 0) {
                // w:SIZE:v0,v1,... fills 32-bit words; @OFFSET is this buffer's address plus OFFSET and
                // ^NAME+OFFSET an address inside a kept buffer. Both offsets must stay inside their buffer.
                const auto colon = word.find(':', 2);
                const auto size = number(word.substr(2, colon == std::string::npos ? std::string::npos : colon - 2), kMaxBuffer);
                if (!size || !*size) { rejected = "w:SIZE needs SIZE 1-65536"; break; }
                std::vector<std::pair<bool, std::uint32_t>> values; // relative to this buffer, value
                std::stringstream list(colon == std::string::npos ? "" : word.substr(colon + 1));
                for (std::string value; rejected.empty() && std::getline(list, value, ',');) {
                    std::optional<std::uint32_t> v;
                    bool relative = false;
                    if (!value.empty() && value[0] == '@') {
                        const auto offset = number(value.substr(1));
                        if (offset && *offset < *size) v = *offset, relative = true;
                    } else if (!value.empty() && value[0] == '^') {
                        const auto plus = value.find('+');
                        const auto found = kept.find(value.substr(1, plus == std::string::npos ? std::string::npos : plus - 1));
                        const auto offset = plus == std::string::npos ? std::optional<std::uint32_t>(0) : number(value.substr(plus + 1));
                        if (found != kept.end() && offset && *offset < found->second.second) v = found->second.first + *offset;
                    } else {
                        v = integer(value);
                    }
                    if (!v) rejected = "bad word " + value;
                    else values.emplace_back(relative, *v);
                }
                if (!rejected.empty()) break;
                if (values.size() * 4 > *size) { rejected = "more words than w:SIZE holds"; break; }
                const std::uint32_t at = iop::kernel::alloc(*size);
                if (!at) { rejected = "IOP memory has no room for the buffer"; break; }
                std::memset(iop::ram_ptr(at), 0, *size);
                for (std::size_t i = 0; i < values.size(); ++i)
                    iop::set_ram32(at + static_cast<std::uint32_t>(i) * 4, values[i].first ? at + values[i].second : values[i].second);
                args.push_back(at), buffers.push_back(at), dumps.emplace_back(at, *size);
            } else if (word[0] == '$') {
                const auto k = number(word.substr(1));
                if (!k || *k >= results.size()) { rejected = "no earlier result " + word; break; }
                args.push_back(static_cast<std::uint32_t>(results[*k]));
            } else if (const auto v = integer(word)) {
                args.push_back(*v);
            } else {
                rejected = "bad argument " + word;
            }
        }
        if (rejected.empty() && name == "frames" && args.size() != 1) rejected = "frames needs one count";
        std::int32_t result = 0;
        bool ok = true;
        if (args.size() > 7 && rejected.empty()) rejected = "more than the caller's seven argument slots";
        // The caller needs its call table, then the loader takes the module image, its argument vector and
        // a 0x4000-byte start stack, and does not check those allocations. Make the same allocations in the
        // same order and modes first; the allocator is deterministic, so after they are freed again the load
        // gets exactly these blocks. Refuse the call if any of them does not fit.
        // With PS2_HARNESS_DIRECT set, the harness does neither, nor does it free finished caller threads,
        // so a run shows how the runtime itself handles module start stacks.
        const bool guest = rejected.empty() && name != "checkpoint" && name != "frames";
        std::uint32_t table = 0;
        std::vector<std::uint32_t> stubs;
        std::vector<std::uint8_t> elf;
        if (guest && direct) {
            table = iop::kernel::alloc(80);
            if (table) elf = caller(table, stubs, library, library_index);
            else rejected = "IOP memory has no room for the caller module's call table";
        } else if (guest) {
            table = iop::kernel::alloc(80);
            if (table) elf = caller(table, stubs, library, library_index);
            const std::uint32_t image = table ? iop::kernel::alloc(static_cast<std::uint32_t>(elf.size() - 0xA0) + 0x40u) : 0;
            const std::uint32_t arguments = image ? iop::kernel::alloc(4u * 2u + sizeof "caller") : 0;
            const std::uint32_t stack = arguments ? iop::kernel::alloc(0x4000u, 1) : 0;
            for (std::uint32_t at : {image, arguments, stack})
                if (at) iop::kernel::free(at);
            if (!stack) {
                rejected = std::string("IOP memory has no room for the caller module's ") +
                           (!table ? "call table" : !image ? "image" : !arguments ? "arguments" : "start thread");
                if (table) iop::kernel::free(table);
            }
        }
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
            bool done = false;
            const int id = iop::load_module_buffer(elf, "caller", "", [&](int, int) { done = true; });
            if (id < 0) {
                std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":false,\"load_result\":%d,\"free_max\":%u,\"free_total\":%u}\n",
                            results.size(), json_string(line).c_str(), id, iop::kernel::free_max(), iop::kernel::free_total());
                std::fflush(stdout);
                iop::kernel::free(table);
                for (std::uint32_t at : buffers) iop::kernel::free(at);
                results.push_back(id);
                return id;
            }
            // A start thread without a stack would run on address 0 and overwrite low IOP memory: stop first.
            for (int tid = 1; tid <= highest_thread + 256; ++tid) {
                const iop::kernel::Thread *t = iop::kernel::thread(tid);
                if (!t) continue;
                highest_thread = std::max(highest_thread, tid);
                if (t->entry == iop::kernel::modules().at(id).entry && !t->stack) {
                    std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":false,\"stopped\":\"start thread %d has no stack\"}\n",
                                results.size(), json_string(line).c_str(), tid);
                    std::fflush(stdout);
                    std::exit(5);
                }
            }
            const std::uint32_t base = iop::kernel::modules().at(id).base;
            std::uint32_t stub = 0, k = 0;
            for (const auto &[n, index] : kIoman) {
                if (n == name) stub = base + stubs[k];
                ++k;
            }
            if (name == "call") stub = base + stubs.back();
            if (name == "callat") stub = target;
            if (!stub) throw std::runtime_error("unknown command " + name);
            std::memset(iop::ram_ptr(table), 0, 80);
            iop::set_ram32(table, stub);
            for (std::size_t i = 0; i < args.size() && i < 7; ++i) iop::set_ram32(table + 4 + static_cast<std::uint32_t>(i) * 4, args[i]);
            ok = wait_for(done, 3000);
            result = static_cast<std::int32_t>(iop::ram32(table + 32));
            iop::kernel::free(table);
            if (!direct && iop::kernel::modules().count(id)) reclaim(iop::kernel::modules().at(id).entry);
        }
        std::printf("{\"event\":\"call\",\"index\":%zu,\"command\":%s,\"completed\":%s,\"result\":%d", results.size(), json_string(line).c_str(), ok ? "true" : "false", result);
        std::string addresses;
        for (const auto &[at, size] : dumps) {
            std::printf(",\"buffer\":\"%s\"", hex(iop::ram_ptr(at), size).c_str());
            addresses += (addresses.empty() ? "" : ",") + std::to_string(at);
        }
        std::printf("%s}\n", dumps.empty() ? "" : (",\"addresses\":[" + addresses + "]").c_str());
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
        if (line.rfind("repeat ", 0) != 0) {
            runner.run(line);
            continue;
        }
        // repeat N COMMAND...: runs COMMAND N times (1-100000) with each '#' replaced by the run number.
        const auto space = line.find(' ', 7);
        const auto times = number(line.substr(7, space == std::string::npos ? std::string::npos : space - 7), 100000);
        if (!times || !*times || space == std::string::npos || space + 1 >= line.size()) {
            runner.refuse(line, "repeat needs a count 1-100000 and a command");
            continue;
        }
        for (std::uint32_t i = 0; i < *times; ++i) {
            std::string command = line.substr(space + 1);
            for (std::size_t at; (at = command.find('#')) != std::string::npos;) command.replace(at, 1, std::to_string(i));
            runner.run(command);
        }
    }
    return 0;
}
