// Inserted only into an explicitly requested copied SIF file, inside ps2::sif.
void original_exec_wait_sif(unsigned sample) {
    namespace ws = original_exec::wait_snapshot;
    std::size_t queued = 0;
    for (const auto &[queue, list] : g_requests) queued += list.size();
    std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"sif\",\"sample\":%u,\"held_calls\":%zu,\"request_queues\":%zu,\"queued_requests\":%zu,"
        "\"pending_binds\":%zu,\"servers\":%zu,\"outgoing_packets\":%zu,\"processed\":%s}\n",
        sample, g_held_calls.size(), g_requests.size(), queued, g_binds.size(), g_servers.size(), g_outgoing.size(), g_processed ? "true" : "false");
    unsigned count = 0;
    for (const auto &[id, c] : g_held_calls) {
        if (count++ == ws::object_limit) break;
        std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"sif-held-call\",\"sample\":%u,\"key\":%u,\"rpc_id\":%u,\"rpc_number\":%u,"
            "\"send_size\":%u,\"recv\":%u,\"recv_size\":%u,\"recv_mode\":%u,\"server_data\":%u}\n",
            sample, id, c.rpc_id, c.rpc_number, c.send_size, c.recv, c.recv_size, c.recv_mode, c.server_data);
    }
    count = 0;
    for (const auto &[queue, list] : g_requests) {
        if (list.empty()) continue;
        if (count++ == ws::object_limit) break;
        const Call &c = list.front().call;
        const auto thread = g_queue_threads.find(queue);
        std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"sif-queue\",\"sample\":%u,\"queue\":%u,\"requests\":%zu,\"thread\":%d,"
            "\"first_rpc_id\":%u,\"first_rpc_number\":%u,\"first_server_data\":%u}\n",
            sample, queue, list.size(), thread == g_queue_threads.end() ? -1 : thread->second, c.rpc_id, c.rpc_number, c.server_data);
    }
    count = 0;
    for (const auto &[id, bind] : g_binds) {
        if (count++ == ws::object_limit) break;
        std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"sif-bind\",\"sample\":%u,\"key\":%u,\"deadline\":%llu}\n",
            sample, id, static_cast<unsigned long long>(bind.deadline));
    }
}
