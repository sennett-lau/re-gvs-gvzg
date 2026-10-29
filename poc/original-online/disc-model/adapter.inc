// Included inside cdvd.cpp's anonymous kernel namespace in an opt-in copy.
// This is an HLE transaction, not execution of the original CDVDMAN body.
struct DiscModelPending {
    std::unique_ptr<original_disc_model::Request> request;
    std::uint32_t ticket = 0, out = 0;
    int caller = 0;
    std::uint64_t deadline = 0;
    std::vector<int> sync_waiters;
    bool read_callback_sent = false;
};
DiscModelPending g_disc_model;
std::uint32_t g_disc_model_ticket = 0;

bool disc_model_output(std::uint32_t out) {
    if (out > 0xFFFFFFFFu - 4) return false;
    for (unsigned i = 0; i < 5; ++i) {
        const auto p = phys(out + i);
        if (!(p < 0x00800000u || (p & ~0x3FFu) == 0x1F800000u)) return false;
    }
    return true;
}

bool disc_model_sync(Cpu& c) {
    if (!g_disc_model.request) return false;
    if (in_interrupt() || !current()) {
        ps2::halt("disc-model sceCdSync cannot block outside an ordinary IOP thread"); return true;
    }
    g_disc_model.sync_waiters.push_back(current()->id);
    block(c, kWaitHle, -int(g_disc_model.ticket));
    return true;
}

void disc_model_finish() {
    g_cd.busy = false;
    for (int id : g_disc_model.sync_waiters) {
        Thread* t = thread(id);
        if (t && (t->status == kWait || t->status == kWaitSuspend) &&
            t->wait == kWaitHle && t->wait_id == -int(g_disc_model.ticket)) wake(*t, 0);
    }
    g_disc_model = {};
    reschedule();
}

void disc_model_poll(const Job& job) {
    if (!g_disc_model.request || job.a != g_disc_model.ticket) return;
    Thread* caller = thread(g_disc_model.caller);
    if (!caller || (caller->status != kWait && caller->status != kWaitSuspend) ||
        caller->wait != kWaitHle || caller->wait_id != int(g_disc_model.ticket)) {
        std::fprintf(stderr, "[disc-model] abandoned caller; no deferred output written\n");
        disc_model_finish(); return;
    }
    const bool timeout = now() >= g_disc_model.deadline;
    const bool done = timeout || g_disc_model.request->step();
    if (g_disc_model.request->sector_read() && !g_disc_model.read_callback_sent) {
        g_disc_model.read_callback_sent = true;
        // Emit the existing read callback only for the completed sector75
        // read, never for a failed read, metadata validation or abandonment.
        if (g_cd.callback) call_guest(g_cd.callback, 1);
        if (!g_disc_model.request || job.a != g_disc_model.ticket) return;
        caller = thread(g_disc_model.caller);
        if (!caller || (caller->status != kWait && caller->status != kWaitSuspend) ||
            caller->wait != kWaitHle || caller->wait_id != int(g_disc_model.ticket)) {
            disc_model_finish(); return;
        }
    }
    if (!done) {
        schedule(now() + usec_to_cycles(1000), job); return;
    }
    const auto& request = *g_disc_model.request;
    const auto error = timeout ? "model media readiness deadline exceeded" : request.error().c_str();
    const bool success = !*error && original_disc_model::store_output(request.key(), g_disc_model.out,
        [](std::uint32_t address, std::uint8_t value) { write8(address, value); });
    std::fprintf(stderr, "[disc-model] model=pcsx2-command75-hle-v1 caller=%d out=%08X serial=%s compared=%llu "
        "result=%u valid=%02X xor=%02X key=%02X%02X%02X%02X%02X error=%s\n", g_disc_model.caller, g_disc_model.out,
        request.serial().c_str(), static_cast<unsigned long long>(request.compared()), success ? 1u : 0u,
        request.key().valid, request.key().xor_byte, request.key().registers[0], request.key().registers[1],
        request.key().registers[2], request.key().registers[3], request.key().registers[4], error);
    // No made-up CDVD error code for metadata/host-model failure. The original
    // caller receives failure with its already-cleared output and a precise log.
    g_cd.error = request.key().error;
    wake(*caller, success ? 1u : 0u);
    disc_model_finish();
}

void disc_model_begin(Cpu& c) {
    const auto out = arg(c, 0);
    c.r[2] = 0;
    if (!disc_model_output(out)) {
        ps2::halt("sceCdReadDiskID output is not five supported IOP bytes"); return;
    }
    original_disc_model::clear_output(out, [](std::uint32_t a, std::uint8_t v) { write8(a, v); });
    if (g_cd.busy || g_disc_model.request || !current() || in_interrupt()) {
        std::fprintf(stderr, "[disc-model] unsupported busy or nonthread ReadDiskID call; output cleared\n"); return;
    }
    const auto epoch = disc::model_media_epoch();
    if (!epoch) { std::fprintf(stderr, "[disc-model] no current mounted media; output cleared\n"); return; }
    const auto reference = std::shared_ptr<std::FILE>(std::fopen("/game/core.elf", "rb"), std::fclose);
    if (!reference || std::fseek(reference.get(), 0, SEEK_END)) {
        std::fprintf(stderr, "[disc-model] verified preloaded executable unavailable; output cleared\n"); return;
    }
    const long size = std::ftell(reference.get());
    if (size <= 0 || size > 16 * 1024 * 1024) {
        std::fprintf(stderr, "[disc-model] preloaded executable size unsupported; output cleared\n"); return;
    }
    original_disc_model::Input input;
    input.epoch = epoch; input.bytes = disc::model_media_bytes(); input.reference_bytes = std::uint64_t(size);
    input.expected_boot = "cdrom0:\\SLPS_254.19;1";
    input.current_epoch = disc::model_media_epoch;
    input.ready = disc::model_ready;
    input.read = disc::model_read_exact;
    input.reference = [reference](std::uint64_t offset, std::uint8_t* bytes, std::size_t count) {
        return offset <= 16 * 1024 * 1024 && !std::fseek(reference.get(), long(offset), SEEK_SET) &&
            std::fread(bytes, 1, count, reference.get()) == count;
    };
    // Positive wait_id avoids collision with ordinary HLE waits (zero), and
    // monotonically assigned tickets reject late jobs after install/reset.
    g_disc_model_ticket = g_disc_model_ticket % 0x7FFFFFFFu + 1;
    g_disc_model = {std::make_unique<original_disc_model::Request>(std::move(input)),
        g_disc_model_ticket, out, current()->id, now() + usec_to_cycles(30'000'000), {}, false};
    g_cd.busy = true; g_cd.error = 0;
    block(c, kWaitHle, int(g_disc_model_ticket));
    schedule(now() + read_cycles(1), Job{kJobDiscModel, g_disc_model_ticket});
}
