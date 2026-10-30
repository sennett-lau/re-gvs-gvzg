// Inserted only into an explicitly requested copied IOP kernel, inside ps2::iop.
void original_exec_wait_snapshot(unsigned sample) {
    using namespace kernel;
    namespace ws = original_exec::wait_snapshot;
    std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"processor\",\"sample\":%u,\"processor\":\"IOP\",\"iop_cycles\":%llu,\"current\":%d,\"pc\":%u,"
        "\"thread_count\":%zu,\"thread_limit\":%u,\"threads_limited\":%s,\"scheduled_events\":%zu}\n",
        sample, static_cast<unsigned long long>(kernel::now()), g_current, g_cpu.pc, g_threads.size(), ws::thread_limit,
        g_threads.size() > ws::thread_limit ? "true" : "false", g_events.size());
    ws::Waited waited;
    unsigned count = 0;
    for (const auto &[id, t] : g_threads) {
        if (count++ == ws::thread_limit) break;
        const bool live = id == g_current;
        const auto reg = [&](unsigned index) { return live ? g_cpu.r[index] : t.context.r[index]; };
        ws::Row r;
        r.id = id; r.status = t.status; r.priority = t.priority; r.init_priority = t.init_priority; r.order = t.order;
        r.wait = t.wait; r.wait_id = t.wait_id; r.wakeups = t.wakeups; r.entry = t.entry;
        r.pc = live ? g_cpu.pc : t.context.pc;
        r.ra = reg(31); r.sp = reg(29); r.gp = reg(28); r.v0 = reg(2); r.v1 = reg(3);
        r.a0 = reg(4); r.a1 = reg(5); r.a2 = reg(6); r.a3 = reg(7); r.s0 = reg(16); r.s1 = reg(17);
        r.rpc_queue = t.rpc_queue; r.rpc_server = t.rpc_server; r.event_bits = t.event_bits; r.event_mode = t.event_mode;
        ws::stack(r, kRamSize, [](std::uint32_t address) { return ram32(address); });
        ws::emit(sample, "IOP", r);
        if (t.wait == kWaitSema || t.wait == kWaitEvent || t.wait == kWaitMbx) waited.add(t.wait, t.wait_id);
    }
    for (unsigned i = 0; i < waited.count; ++i)
        kernel::original_exec_wait_object(sample, waited.items[i].first, waited.items[i].second);
    std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"objects\",\"sample\":%u,\"processor\":\"IOP\",\"waited\":%u,\"limited\":%s}\n",
        sample, waited.count, waited.limited ? "true" : "false");
}
