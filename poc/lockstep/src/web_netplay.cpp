#include "web_netplay.hpp"
#include "ps2/system.hpp"
#include "ps2/memory.hpp"
#include <emscripten.h>
#include <emscripten/threading.h>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <cstdio>

namespace {
std::atomic<bool> enabled{false};
std::atomic<std::uint32_t> steps{0};
std::atomic<double> wait_ms{0};
unsigned checkpoint_interval = 120;
struct Reply {
    std::atomic<std::int32_t> ready{0};
    std::int32_t pads[42]{};
};
static_assert(offsetof(Reply, pads) == 4);
Reply reply;
char checkpoint[17]{};

EM_JS(int, configured, (), { return typeof Module.netplayStep === 'function' ? 1 : 0; });
EM_JS(int, interval, (), { return Module.netplayCheckpointInterval || 120; });

void request_frame(std::uint32_t frame, bool with_hash) {
    MAIN_THREAD_ASYNC_EM_ASM({
        const frame = $0;
        const hash = $1 ? UTF8ToString($1) : null;
        const address = $2;
        const finish = value => {
            Atomics.store(HEAP32, address >> 2, value);
            Atomics.notify(HEAP32, address >> 2);
        };
        Promise.resolve().then(() => Module.netplayStep(frame, hash)).then(result => {
            if (!result || result.frame !== frame || !Array.isArray(result.pads) || result.pads.length !== 2)
                throw new Error('Invalid merged input frame');
            const values = [];
            for (const pad of result.pads) {
                const scalar = [pad.buttons, pad.lx, pad.ly, pad.rx, pad.ry];
                if (!scalar.every((v, i) => Number.isInteger(v) && v >= 0 && v <= (i ? 255 : 65535)))
                    throw new Error('Invalid merged pad values');
                const pressure = pad.pressure || Array(16).fill(0);
                if (!Array.isArray(pressure) || pressure.length !== 16 ||
                    !pressure.every(v => Number.isInteger(v) && v >= 0 && v <= 255))
                    throw new Error('Invalid merged pad pressures');
                values.push(...scalar, ...pressure);
            }
            HEAP32.set(values, (address >> 2) + 1);
            finish(1);
        }).catch(error => {
            if (Module.printErr) Module.printErr('[netplay] ' + String(error));
            if (Module.onNetplayError) Module.onNetplayError(String(error));
            finish(-1);
        });
    }, frame, with_hash ? checkpoint : nullptr, &reply);
}
}

bool gundam_netplay_enabled() { return enabled.load(std::memory_order_acquire); }

std::int64_t gundam_netplay_rtc_seconds() {
    // 2026-01-01T00:00:00Z plus emulated time, identical on both machines.
    return 1767225600ll + static_cast<std::int64_t>(ps2::now() / ps2::kEeClock);
}

void gundam_netplay_configure() {
    const int value = interval();
    checkpoint_interval = value >= 1 && value <= 120 ? static_cast<unsigned>(value) : 120;
    enabled.store(configured() != 0, std::memory_order_release);
}

void gundam_netplay_begin() {
    if (!gundam_netplay_enabled()) return;
    steps.store(0);
    wait_ms.store(0);
    for (int pad = 0; pad < 2; ++pad) {
        ps2::set_pad_connected(pad, true);
        ps2::set_pad_buttons(0, pad);
        for (int axis = 0; axis < 4; ++axis) ps2::set_pad_axis(axis, 128, pad);
        for (int button = 0; button < 16; ++button) ps2::set_pad_pressure(button, 0, pad);
    }
    std::fprintf(stderr, "[netplay] two local simulations; checkpoint interval %u\n", checkpoint_interval);
}

void gundam_netplay_step() {
    if (!gundam_netplay_enabled() || ps2::halted()) return;
    const auto frame = steps.load(std::memory_order_relaxed);
    const bool with_hash = frame % checkpoint_interval == 0;
    if (with_hash) {
        std::uint64_t value = 14695981039346656037ull;
        for (std::size_t i = 0; i < ps2::kRamSize; ++i)
            value = (value ^ ps2::g_ram[i]) * 1099511628211ull;
        std::snprintf(checkpoint, sizeof checkpoint, "%016llx", static_cast<unsigned long long>(value));
    }
    reply.ready.store(0, std::memory_order_release);
    const double start = emscripten_get_now();
    request_frame(frame, with_hash);
    while (reply.ready.load(std::memory_order_acquire) == 0) {
        emscripten_futex_wait(&reply.ready, 0, 1000);
        if (emscripten_get_now() - start > 60000) {
            ps2::halt("Netplay input timed out; simulation stopped without guessing input");
            return;
        }
    }
    wait_ms.store(wait_ms.load(std::memory_order_relaxed) + emscripten_get_now() - start, std::memory_order_relaxed);
    if (reply.ready.load(std::memory_order_acquire) != 1) {
        ps2::halt("Netplay stopped: missing peer, transport failure or state mismatch");
        return;
    }
    for (int pad = 0; pad < 2; ++pad) {
        const auto *p = reply.pads + pad * 21;
        ps2::set_pad_buttons(static_cast<std::uint16_t>(p[0]), pad);
        ps2::set_pad_axis(0, static_cast<std::uint8_t>(p[3]), pad);
        ps2::set_pad_axis(1, static_cast<std::uint8_t>(p[4]), pad);
        ps2::set_pad_axis(2, static_cast<std::uint8_t>(p[1]), pad);
        ps2::set_pad_axis(3, static_cast<std::uint8_t>(p[2]), pad);
        for (int button = 0; button < 16; ++button)
            ps2::set_pad_pressure(button, static_cast<std::uint8_t>(p[5 + button]), pad);
    }
    steps.store(frame + 1, std::memory_order_release);
}

extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_netplay_stat(int which) {
    if (which == 0) return steps.load(std::memory_order_acquire);
    if (which == 1) return wait_ms.load(std::memory_order_relaxed);
    return gundam_netplay_enabled() ? 1 : 0;
}
