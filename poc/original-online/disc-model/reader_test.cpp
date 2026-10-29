#include "fixture.hpp"
#include "ps2/disc.hpp"
#include <cassert>
#include <cstdio>

int main() {
    disc_model_test::Fixture f;
    bool partial = false, ready = true;
    auto read = [&](std::uint64_t offset, void* out, std::size_t size) {
        if (offset > f.media.size() || size > f.media.size() - offset) return std::size_t(0);
        const auto count = partial && size ? size - 1 : size;
        std::memcpy(out, f.media.data() + offset, count); return count;
    };
    assert(ps2::disc::open("synthetic", f.media.size(), read, [&](auto, auto) { return ready; }));
    const auto epoch = ps2::disc::model_media_epoch(); assert(epoch);
    assert(ps2::disc::model_media_bytes() == f.media.size());
    std::uint8_t data[2048];
    assert(ps2::disc::model_ready(75*2048, sizeof(data)));
    assert(ps2::disc::model_read_exact(75*2048, data, sizeof(data)));
    partial = true;
    assert(!ps2::disc::model_read_exact(75*2048, data, sizeof(data)));
    assert(ps2::disc::read(75, 1, data)); // Upstream permissive API unchanged.
    assert(!ps2::disc::model_read_exact(f.media.size()-1, data, 2));
    assert(!ps2::disc::model_read_exact(UINT64_MAX, data, 2));
    ready = false; assert(!ps2::disc::model_ready(75*2048, sizeof(data)));
    partial = false; ready = true;
    assert(ps2::disc::open("remount", f.media.size(), read));
    assert(ps2::disc::model_media_epoch() != epoch);
    assert(!ps2::disc::open("/nonexistent/disc-model-native-test.iso"));
    assert(!ps2::disc::model_media_epoch() && !ps2::disc::model_media_bytes());
    assert(!ps2::disc::model_ready(0, 1) && !ps2::disc::model_read_exact(0, data, 1));
    std::puts("exact reader: partial reads, bounds, readiness and remount checks passed");
}
