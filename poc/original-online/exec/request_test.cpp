#include "request.hpp"
#include <cassert>
#include <iostream>

int main() {
    using namespace original_exec;
    std::vector<std::uint8_t> ram(0x10000);
    const auto put = [&](std::uint32_t at, const std::string& value) { std::memcpy(ram.data() + at, value.c_str(), value.size() + 1); };
    const auto word = [&](std::uint32_t at, std::uint32_t value) {
        for (int i = 0; i < 4; ++i) ram[at + i] = value >> (8 * i);
    };
    put(0x100, utility); put(0x200, game); put(0x300, "1");
    word(0x400, 0x200); word(0x404, 0x300);
    Request input;
    input.image = "game"; input.syscall = 6; input.pc = 0x103f24; input.a0 = 0x100; input.a1 = 2; input.a2 = 0x400;
    const auto snapshot = ram;
    auto r = capture(ram.data(), ram.size(), input);
    assert(r.error.empty() && r.target == utility && r.args == std::vector<std::string>({game, "1"}));
    assert(snapshot == ram);
    auto alias = input; alias.a0 |= 0x80000000u; alias.a2 |= 0xa0000000u;
    assert(capture(ram.data(), ram.size(), alias).error.empty());
    auto failed = [&](Request candidate) { assert(!capture(ram.data(), ram.size(), candidate).error.empty()); };
    auto bad = input; bad.a0 = 0x70000100; failed(bad);
    bad = input; bad.a0 = 0; failed(bad);
    bad = input; bad.a0 = ram.size(); failed(bad);
    bad = input; bad.a1 = 0xffffffff; failed(bad);
    bad = input; bad.a2 = 0x401; failed(bad);
    bad = input; bad.a2 = ram.size() - 4; failed(bad);
    bad = input; bad.syscall = 7; failed(bad);
    bad = input; bad.syscall = 0xfffffffau; failed(bad);
    bad = input; bad.image = "utility"; failed(bad);
    put(0x100, "cdrom0:\\OTHER.BIN;1"); failed(input); put(0x100, utility);
    put(0x300, std::string(256, 'x')); failed(input); put(0x300, "1");
    ram[0x300] = 0x80; failed(input); put(0x300, "1");
    word(0x404, ram.size() - 1); ram.back() = 'x'; failed(input); word(0x404, 0x300);
    put(0x300, std::string(220, 'x')); failed(input); put(0x300, "1");
    // Return request is copied from helper argv[1], argc-2, argv+2. Target is
    // prepended by the browser boot adapter, never substituted into supplied args.
    input.image = "utility"; input.a0 = 0x200; input.a1 = 1; input.a2 = 0x404;
    auto back = capture(ram.data(), ram.size(), input);
    assert(back.error.empty() && back.target == game && back.args == std::vector<std::string>({"1"}));
    // Full C++ unwind: no post-syscall code and every stack guard released.
    int guards = 0, after = 0;
    struct Guard { int& n; explicit Guard(int& n): n(n) {++n;} ~Guard() {--n;} };
    auto inner = [&] { Guard guard(guards); throw Transition{r}; ++after; };
    auto outer = [&] { Guard guard(guards); inner(); ++after; };
    try { outer(); assert(false); } catch (Transition& value) { assert(value.request.args == r.args); }
    assert(guards == 0 && after == 0);
    assert(quote("\"\\\n") == "\"\\\"\\\\\\u000a\"");
    std::cout << json(r, true) << '\n' << json(back, true) << '\n';
}
