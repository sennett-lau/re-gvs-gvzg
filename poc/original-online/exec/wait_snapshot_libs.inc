// Inserted only into an explicitly requested copied IOP library file, inside ps2::iop::kernel.
void original_exec_wait_object(unsigned sample, int kind, int id) {
    namespace ws = original_exec::wait_snapshot;
    const char *name = kind == kWaitSema ? "semaphore" : kind == kWaitEvent ? "event_flag" : kind == kWaitMbx ? "mailbox" : "unknown";
    bool present = false;
    std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"object\",\"sample\":%u,\"processor\":\"IOP\",\"object\":\"%s\",\"id\":%d", sample, name, id);
    if (kind == kWaitSema) {
        if (const auto it = g_semas.find(id); it != g_semas.end()) {
            present = true;
            std::fprintf(stderr, ",\"count\":%d,\"max\":%d,\"attr\":%u", it->second.count, it->second.max, it->second.attr);
            ws::waiters(it->second.waiters);
        }
    } else if (kind == kWaitEvent) {
        if (const auto it = g_events.find(id); it != g_events.end()) {
            present = true;
            std::fprintf(stderr, ",\"bits\":%u,\"attr\":%u", it->second.bits, it->second.attr);
            ws::waiters(it->second.waiters);
        }
    } else if (kind == kWaitMbx) {
        if (const auto it = g_mbxs.find(id); it != g_mbxs.end()) {
            present = true;
            std::fprintf(stderr, ",\"messages\":%zu,\"attr\":%u", it->second.messages.size(), it->second.attr);
            ws::waiters(it->second.waiters);
        }
    }
    std::fprintf(stderr, ",\"present\":%s}\n", present ? "true" : "false");
}
