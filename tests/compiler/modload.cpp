#include "iop/kernel.hpp"

#include <cstdio>
#include <cstdlib>

namespace {
void require(bool value, const char *message) {
    if (!value) { std::fprintf(stderr, "FAIL: %s\n", message); std::exit(1); }
}

std::vector<std::uint8_t> module() {
    std::vector<std::uint8_t> elf(0x14c);
    const auto u16 = [&](std::size_t at, std::uint16_t value) { std::memcpy(elf.data() + at, &value, 2); };
    const auto u32 = [&](std::size_t at, std::uint32_t value) { std::memcpy(elf.data() + at, &value, 4); };
    std::memcpy(elf.data(), "\x7f" "ELF", 4);
    elf[4] = elf[5] = elf[6] = 1;
    u16(16, 0xff80); u16(18, 8); u32(20, 1);
    u32(28, 52); u16(40, 52); u16(42, 32); u16(44, 2); u16(46, 40);
    u32(52, 0x70000080); u32(56, 0x100);
    u32(84, 1); u32(88, 0x140); u32(100, 12); u32(104, 12);
    u32(0x10c, 12);
    u32(0x140, 0x24020002); // addiu v0, zero, 2: resident module
    u32(0x144, 0x03e00008); // jr ra
    return elf;
}
}

int main() {
    using namespace ps2::iop;
    reset();
    const auto elf = module();
    bool finished = false;
    const int low = load_module_buffer(elf, "test-low.irx", "", {}, false);
    const int high = load_module_buffer(elf, "test-high.irx", "", {}, false, 1);
    require(low > 0 && high > low, "deferred modules receive distinct IDs");
    require(kernel::modules().at(high).base > kernel::modules().at(low).base, "high allocation is honored");
    run(100000);
    require(kernel::thread(1) == nullptr, "loading alone does not create a start thread");
    require(start_module(low, "test-low.irx", std::string("one\0two", 7), [&](int id, int result) {
        require(id == low && result == 2, "start callback gets the module ID and guest result");
        finished = true;
    }) == low, "start returns the loaded module ID");
    require(!finished, "guest startup is asynchronous");
    const auto &startup = kernel::thread(1)->context;
    require(startup.r[4] == 3, "module arguments include the path and both NUL-separated values");
    require(ram_string(read32(startup.r[5] + 8)) == "two", "argument payload reaches the guest");
    run(100000);
    require(finished, "guest module ran and completed");
    require(start_module(-1, "", "") == -202, "unknown module returns an error");
    bool automatic = false;
    require(load_module_buffer(elf, "test-auto.irx", "", [&](int, int result) {
        require(result == 2, "default startup preserves guest return value");
        automatic = true;
    }) > 0, "default load-and-start succeeds");
    run(100000);
    require(automatic, "existing callers still start modules automatically");
    int starts = 0;
    kernel::register_hle_module("TESTHLE", [&]() { ++starts; });
    const int hle = load_module_buffer({}, "rom0:TESTHLE", "", {}, false);
    require(hle > 0 && starts == 0, "HLE startup is deferred too");
    require(start_module(hle, "rom0:TESTHLE", "") == hle && starts == 1, "deferred HLE module starts");
    std::puts("Module loading checks passed");
}
