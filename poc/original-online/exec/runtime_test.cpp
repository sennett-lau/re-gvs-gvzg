#include "runtime.hpp"
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include <cassert>
#include <cstring>
#include <iostream>

namespace {
int checkpoint_result = 0, checkpoint_calls = 0;
std::string notification, halt_text;
}
namespace ps2 {
std::uint8_t g_ram[kRamSize];
std::uint64_t now() { return 123456789; }
void halt(const std::string& message) { halt_text = message; }
}
namespace original_exec {
void publish(const std::string& value) { notification = value; }
}
extern "C" int ps2exec_checkpoint_card() { ++checkpoint_calls; return checkpoint_result; }

int main() {
    using namespace original_exec;
    ps2::Cpu cpu{};
    cpu.r[3].w[0] = 6; cpu.r[4].w[0] = 0x100; cpu.r[5].w[0] = 2; cpu.r[6].w[0] = 0x400;
    cpu.r[7].w[0] = 99; cpu.r[29].w[0] = 0x500; cpu.r[31].w[0] = 0x600;
    std::strcpy(reinterpret_cast<char*>(ps2::g_ram + 0x100), utility);
    std::strcpy(reinterpret_cast<char*>(ps2::g_ram + 0x200), game);
    std::strcpy(reinterpret_cast<char*>(ps2::g_ram + 0x300), "1");
    ps2::store<std::uint32_t>(ps2::g_ram + 0x400, 0x200);
    ps2::store<std::uint32_t>(ps2::g_ram + 0x404, 0x300);
    const auto original_cpu = cpu;
    bool resumed = false;
    try { request(cpu, 0x103f24, 7); resumed = true; }
    catch (Transition& t) {
        assert(checkpoint_calls == 0 && notification.empty());
        assert(t.request.cycles == 123456789 && t.request.thread == 7 && t.request.a3 == 99);
        after_unwind(t);
        assert(t.request.error.empty());
    }
    assert(!resumed && std::memcmp(&cpu, &original_cpu, sizeof cpu) == 0);
    assert(checkpoint_calls == 1 && notification.find("\"nativeFlushed\":true") != std::string::npos);
    assert(halt_text == "LoadExecPS2: machine stopped for host replacement");
    std::cout << notification << '\n';
    checkpoint_result = -37;
    try { request(cpu, 0x103f24, 7); }
    catch (Transition& t) { after_unwind(t); assert(t.request.error == "native card checkpoint failed: -37"); }
    assert(notification.find("\"nativeFlushed\":false") != std::string::npos && checkpoint_calls == 2);
    std::cout << notification << '\n';
    cpu.r[4].w[0] = 0;
    try { request(cpu, 0x103f24, 7); }
    catch (Transition& t) { after_unwind(t); assert(t.request.error == "null argument string"); }
    assert(checkpoint_calls == 2); // Invalid requests never invoke the storage writer.
    std::cout << notification << '\n';
    ps2::store<std::uint32_t>(ps2::g_ram + 0x700, 2);
    ps2::store<std::uint32_t>(ps2::g_ram + 0x704, 0x200);
    ps2::store<std::uint32_t>(ps2::g_ram + 0x708, 0x300);
    observe_startup(0x700, 0x1001c8, 1);
    assert(notification.find("\"kind\":\"setup-thread\"") != std::string::npos);
    assert(notification.find("\"argc\":2") != std::string::npos);
    std::cout << notification << '\n';
    const auto first_startup = notification;
    observe_startup(0, 0, 0);
    assert(notification == first_startup); // Bounded first-startup observation.
}
