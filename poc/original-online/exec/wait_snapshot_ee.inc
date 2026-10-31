// Inserted only into an explicitly requested copied EE kernel, inside ps2::kernel.
void original_exec_wait_sample(unsigned sample, std::uint64_t cycle);
#ifdef ORIGINAL_EXEC_WAIT_IDLE
// Defined by the network adapter's opt-in idle diagnostic; absent means no idle trigger.
extern "C" __attribute__((weak)) unsigned original_online_idle_events();
#endif
void original_exec_wait_poll() {
    namespace ws = original_exec::wait_snapshot;
    static ws::Gate gate;
    const auto cycle = ps2::now();
#ifdef ORIGINAL_EXEC_WAIT_IDLE
    static ws::IdleGate idle;
    if (original_online_idle_events) {
        const unsigned events = original_online_idle_events();
        if (const int result = idle.poll(cycle, events, ps2::kEeClock)) {
            const unsigned index = result > 0 ? static_cast<unsigned>(result) % ws::idle_sample_base - 1u : 0u;
            std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"idle-gate\",\"result\":%d,\"ee_cycles\":%llu,\"trigger_cycles\":%llu,\"idle_events\":%u,\"episode\":%u,\"delay_ms\":%u}\n",
                result, static_cast<unsigned long long>(cycle), static_cast<unsigned long long>(idle.start), events, idle.episodes,
                result > 0 ? ws::idle_delays_ms[index] : 0u);
            if (result > 0) original_exec_wait_sample(static_cast<unsigned>(result), cycle);
        }
    }
#endif
    if (gate.done()) return;
    const auto state = ld32(ws::state_address);
    const int result = gate.poll(cycle, state, ps2::kEeClock);
    if (!result) return;
    std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"gate\",\"result\":%d,\"ee_cycles\":%llu,\"trigger_cycles\":%llu,\"state_word\":%u,\"delay_ms\":%u}\n",
        result, static_cast<unsigned long long>(cycle), static_cast<unsigned long long>(gate.start), state,
        result > 0 ? ws::delays_ms[static_cast<unsigned>(result - 1)] : 0u);
    if (result > 0) original_exec_wait_sample(static_cast<unsigned>(result), cycle);
}

void original_exec_wait_sample(unsigned sample, std::uint64_t cycle) {
    namespace ws = original_exec::wait_snapshot;
    std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"processor\",\"sample\":%u,\"processor\":\"EE\",\"ee_cycles\":%llu,\"current\":%d,\"pc\":%u,"
        "\"thread_count\":%zu,\"thread_limit\":%u,\"threads_limited\":%s,\"semaphore_count\":%zu,\"alarm_count\":%zu}\n",
        sample, static_cast<unsigned long long>(cycle), g_current, g_cpu.pc, g_threads.size(), ws::thread_limit,
        g_threads.size() > ws::thread_limit ? "true" : "false", g_semas.size(), g_alarms.size());
    ws::Waited waited;
    unsigned count = 0;
    for (const auto &[id, t] : g_threads) {
        if (count++ == ws::thread_limit) break;
        const bool live = id == g_current;
        const auto reg = [&](unsigned index) { return live ? g_cpu.r[index].w[0] : t.context.r[index].w[0]; };
        ws::Row r;
        r.id = id; r.status = t.status; r.priority = t.priority; r.init_priority = t.init_priority; r.order = t.order;
        r.wait = t.wait; r.wait_id = t.wait_id; r.wakeups = t.wakeups; r.entry = t.entry;
        r.pc = live ? g_cpu.pc : t.context.pc;
        r.ra = reg(31); r.sp = reg(29); r.gp = reg(28); r.v0 = reg(2); r.v1 = reg(3);
        r.a0 = reg(4); r.a1 = reg(5); r.a2 = reg(6); r.a3 = reg(7); r.s0 = reg(16); r.s1 = reg(17);
        ws::stack(r, kRamSize, [](std::uint32_t address) { return load<std::uint32_t>(g_ram + address); });
        ws::emit(sample, "EE", r);
        if (t.wait == kWaitSema) waited.add(t.wait, t.wait_id);
    }
    // Every semaphore up to the bound, then any waited one beyond it.
    const auto semaphore = [&](int id, const Semaphore &s) {
        std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"object\",\"sample\":%u,\"processor\":\"EE\",\"object\":\"semaphore\",\"id\":%d,\"present\":true,"
            "\"count\":%d,\"max\":%d,\"init\":%d,\"attr\":%u", sample, id, s.count, s.max, s.init, s.attr);
        ws::waiters(s.waiters);
        std::fprintf(stderr, "}\n");
    };
    count = 0;
    int last = -1;
    for (const auto &[id, s] : g_semas) {
        if (count++ == ws::object_limit) break;
        semaphore(id, s); last = id;
    }
    for (unsigned i = 0; i < waited.count; ++i) {
        const int id = waited.items[i].second;
        if (id <= last && g_semas.count(id)) continue;
        if (const auto it = g_semas.find(id); it != g_semas.end()) semaphore(id, it->second);
        else std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"object\",\"sample\":%u,\"processor\":\"EE\",\"object\":\"semaphore\",\"id\":%d,\"present\":false}\n", sample, id);
    }
    count = 0;
    for (const auto &[id, alarm] : g_alarms) {
        if (count++ == ws::object_limit) break;
        std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"alarm\",\"sample\":%u,\"id\":%d,\"callback\":%u,\"arg\":%u,\"due\":%llu}\n",
            sample, id, alarm.callback, alarm.arg, static_cast<unsigned long long>(alarm.due));
    }
    std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"objects\",\"sample\":%u,\"processor\":\"EE\",\"waited\":%u,\"limited\":%s,"
        "\"semaphores_limited\":%s,\"alarms_limited\":%s}\n", sample, waited.count, waited.limited ? "true" : "false",
        g_semas.size() > ws::object_limit ? "true" : "false", g_alarms.size() > ws::object_limit ? "true" : "false");
    ps2::iop::original_exec_wait_snapshot(sample);
    ps2::sif::original_exec_wait_sif(sample);
}
