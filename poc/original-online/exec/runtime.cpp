#include "runtime.hpp"
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include <cstdio>

#ifndef ORIGINAL_EXEC_IMAGE
#error Define ORIGINAL_EXEC_IMAGE as game or utility for this individual module
#endif
#ifdef PS2_MULTIPLAYER
#error The original LoadExecPS2 experiment must not include the mode4 multiplayer bridge
#endif

namespace original_exec {
void observe_startup(std::uint32_t args, std::uint32_t pc, int thread) {
    static bool observed = false;
    if (observed) return;
    observed = true;
    std::vector<std::string> argv;
    std::string error;
    std::uint32_t count = 0;
    try {
        const auto at = ram_address(args, 4, ps2::kRamSize);
        count = ps2::load<std::uint32_t>(ps2::g_ram + at);
        if (count > 16) throw std::runtime_error("SetupThread argc exceeds capacity");
        ram_address(args, 4u + count * 4u, ps2::kRamSize);
        for (std::uint32_t i = 0; i < count; ++i)
            argv.push_back(read_string(ps2::g_ram, ps2::kRamSize, ps2::load<std::uint32_t>(ps2::g_ram + at + 4 + i * 4)));
    } catch (const std::exception& e) { error = e.what(); }
    std::string record = "{\"schema\":1,\"kind\":\"setup-thread\",\"image\":" + quote(ORIGINAL_EXEC_IMAGE) +
        ",\"pc\":" + std::to_string(pc) + ",\"thread\":" + std::to_string(thread) +
        ",\"cycles\":" + quote(std::to_string(ps2::now())) + ",\"argc\":" + std::to_string(count) + ",\"argv\":[";
    for (std::size_t i = 0; i < argv.size(); ++i) record += (i ? "," : "") + quote(argv[i]);
    record += "],\"error\":" + quote(error) + "}";
    std::fprintf(stderr, "[original-exec-startup] %s\n", record.c_str());
    publish(record);
}

[[noreturn]] void request(ps2::Cpu& c, std::uint32_t pc, int thread) {
    Request r;
    r.image = ORIGINAL_EXEC_IMAGE;
    r.syscall = c.r[3].w[0]; r.pc = pc; r.ra = c.r[31].w[0]; r.sp = c.r[29].w[0];
    r.a0 = c.r[4].w[0]; r.a1 = c.r[5].w[0]; r.a2 = c.r[6].w[0]; r.a3 = c.r[7].w[0];
    r.cycles = ps2::now(); r.thread = thread;
    throw Transition{capture(ps2::g_ram, ps2::kRamSize, r)};
}

void after_unwind(Transition& transition) {
    auto& r = transition.request;
    bool flushed = false;
    if (r.error.empty()) {
        const int result = ps2exec_checkpoint_card();
        flushed = result == 0;
        if (!flushed) r.error = "native card checkpoint failed: " + std::to_string(result);
    }
    ps2::halt(r.error.empty() ? "LoadExecPS2: machine stopped for host replacement" : r.error);
    const std::string record = json(r, flushed);
    std::fprintf(stderr, "[original-exec] %s\n", record.c_str());
    publish(record);
}
}
