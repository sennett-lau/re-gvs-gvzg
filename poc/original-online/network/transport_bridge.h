#pragma once
#include <cstddef>
#include <cstdint>

// Transport statuses are local adapter values, not AVETCP return values.
namespace original_online {
struct alignas(8) Result {
    uint32_t ok, bytes, handle, eof, host_error, generation;
    double submitted_ms, completed_ms;
};
static_assert(sizeof(Result) == 40);
static_assert(offsetof(Result, completed_ms) == 32);
// Tickets and socket handles are owned by one Module/process generation.
// Submit copies write data. Call poll only on the emulator scheduler; it writes
// caller-owned host buffers, never computes guest pointers or invokes guest ASRs.
uint32_t open(const char* host, uint32_t length, uint32_t port, uint32_t timeout_ms);
uint32_t write(uint32_t handle, const uint8_t* bytes, uint32_t length);
uint32_t read(uint32_t handle, uint32_t length, uint32_t timeout_ms);
uint32_t close(uint32_t handle);
uint32_t shutdown(uint32_t handle);
uint32_t dns(const uint8_t* bytes, uint32_t length);
uint32_t last_error();
int cancel(uint32_t ticket);
int discard(uint32_t ticket);
uint32_t available(uint32_t handle);
uint32_t stream_state(uint32_t handle);
int poll(uint32_t ticket, Result* result, uint8_t* data, uint32_t capacity);
void reset();
}
