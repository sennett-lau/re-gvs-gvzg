#include "runtime.hpp"
#include <emscripten.h>
#include <emscripten/threading.h>
#include <array>
#include <cstdio>

namespace original_exec {
void publish(const std::string& message) {
    // Static lifetime: the main-thread proxy runs after this worker returns.
    // A module has exactly one lifecycle and must never re-enter ps2::run().
    // At most one first SetupThread record and one terminal exec per machine.
    // Array elements keep their addresses until this entire document is gone.
    static std::array<std::string, 2> records;
    static std::size_t count = 0;
    if (count == records.size()) {
        std::fprintf(stderr, "[original-exec] unexpected event overflow\n");
        return;
    }
    const std::string& record = records[count++] = message;
    MAIN_THREAD_ASYNC_EM_ASM({
        const record = JSON.parse(UTF8ToString($0));
        if (record.kind === 'setup-thread' && typeof Module.onOriginalExecStartup === 'function') Module.onOriginalExecStartup(record);
        else if (record.kind === 'loadexec' && typeof Module.onOriginalExec === 'function') Module.onOriginalExec(record);
        else if (typeof Module.onHalt === 'function') Module.onHalt('exec host callback missing');
    }, record.c_str());
}
}
