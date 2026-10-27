#include "menu_bridge.hpp"
#include "web_netplay.hpp"
#include <emscripten.h>
#include <emscripten/threading.h>
#include <atomic>

namespace { std::atomic<int> choice{0}; }
int gundam_multiplayer_menu() {
    // The input stream already synchronizes this choice on both simulations.
    if (gundam_netplay_enabled()) return 4;
    choice.store(0, std::memory_order_release);
    MAIN_THREAD_ASYNC_EM_ASM({
        const address = $0;
        const finish = value => {
            Atomics.store(HEAP32, address >> 2, value === 4 ? 4 : 2);
            Atomics.notify(HEAP32, address >> 2);
        };
        if (!Module.openMultiplayerMenu) { finish(2); return; }
        Promise.resolve().then(() => Module.openMultiplayerMenu()).then(finish, () => finish(2));
    }, &choice);
    while (!choice.load(std::memory_order_acquire))
        emscripten_futex_wait(&choice, 0, 1000);
    return choice.load(std::memory_order_acquire);
}
