// Synthetic instrumentation test, not guest execution or network evidence.
#include "observer.hpp"
#include <cassert>
#include <cstring>
#include <vector>
namespace ps2 {
std::uint8_t g_ram[kRamSize]{}, g_spr[kScratchpadSize]{};
std::uint64_t now() { return 77; }
std::uint32_t slow_ld32(std::uint32_t) { assert(false); return 0; }
namespace iop::kernel { bool g_trace_modules = false; }
}
int main() {
    using namespace original_online;
    ps2::Cpu c{};
    auto put = [](std::uint32_t a, std::uint32_t v) { std::memcpy(ps2::g_ram+a, &v, 4); };
    c.r[4].w[0] = 0x1000; c.r[5].w[0] = 0x01270010; c.r[31].w[0] = 0x337360;
    bind(c); assert(!active && boot_emitted == 1 && emitted == 0);
    put(0x201c, 0x1000); put(0x2020, 0x80000009); put(0x2024, 0x01270010 ^ 0xacacacac);
    c.r[4].w[0] = 0x2000; rpc_end(c); assert(boot_emitted == 2);
    enter(c); assert(active && boot_emitted == 2 && emitted == 1);
    c.r[28].w[0] = 0x500000; c.r[2].sw[0] = 1;
    put(0xcd1360, 0x101); put(0xcd1364, 0); put(0x839148, 1); put(0x6f2544, 0x20);
    const auto cpu_before = c;
    const std::vector<std::uint8_t> ram_before(ps2::g_ram, ps2::g_ram+ps2::kRamSize);
    confirm_result(c); const auto first = emitted;
    for (unsigned i=0;i<30;++i) confirm_result(c);
    assert(emitted == first && hits[5] == 31); // Repeated identical observations do not consume the cap.
    connection(c); ui_produced(c); ui_render(c); ui_queue1(c); ui_queue2(c);
    cancel_result(c); activity_result(c);
    assert(std::memcmp(&c, &cpu_before, sizeof c) == 0);
    assert(std::memcmp(ps2::g_ram, ram_before.data(), ram_before.size()) == 0);
    assert(read32(0x1fffffffu) == ~0u); // Out-of-RAM observation never invokes MMIO.
    put(0x1024, 0x01270030 ^ 0xacacacac);
    c.r[4].w[0] = 0x1000; c.r[5].w[0] = 1; c.r[9].w[0] = 0x3000; c.r[10].w[0] = 32;
    call(c); call(c); assert(pending_collisions == 1);
    put(0x2020, 0x8000000a); c.r[4].w[0] = 0x2000; rpc_end(c);
    assert(!pending[0].used); // Ambiguous correlation is reported without a guessed reply payload.
    const std::array<std::uint32_t, 9> first_reply{0, 0, 0, 0, 0, 1, 0};
    auto changed_reply = first_reply; changed_reply[6] = 0xfffffff5;
    assert(!repeated_card(2, 0x80000400, 1, first_reply));
    assert(repeated_card(2, 0x80000400, 1, first_reply));
    assert(!repeated_card(2, 0x80000400, 1, changed_reply));
    assert(!repeated_card(2, 0x80000400, 1, first_reply)); // Return-value changes remain visible.
    assert(!repeated_card(2, 0x01270030, 1, first_reply)); // Custom-service records are never deduplicated.
    emitted = limit - 1;
    log(false, "last", ""); log(false, "lost", ""); log(false, "lost", "");
    assert(emitted == limit && dropped == 2); summary();
}
