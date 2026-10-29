#include "model.hpp"
#include <algorithm>
#include <cstring>

namespace original_disc_model {
namespace {
std::uint32_t le32(const std::uint8_t* p) {
    return p[0] | std::uint32_t(p[1]) << 8 | std::uint32_t(p[2]) << 16 | std::uint32_t(p[3]) << 24;
}
bool both32(const std::uint8_t* p) {
    return p[0] == p[7] && p[1] == p[6] && p[2] == p[5] && p[3] == p[4];
}
}

bool Request::range(std::uint64_t offset, std::size_t size) const {
    const auto end = volume_bytes_ ? std::min(volume_bytes_, input_.bytes) : input_.bytes;
    return offset <= end && size <= end - offset;
}

int Request::read(std::uint64_t offset, std::size_t size) {
    if (!size || size > 65536 || !range(offset, size)) { fail("media span outside supported bounds"); return -1; }
    if (!input_.ready(offset, size)) return 0;
    buffer_.resize(size);
    if (!input_.read(offset, buffer_.data(), size)) { fail("short or failed exact media read"); return -1; }
    if (input_.current_epoch() != input_.epoch) { fail("media changed during read"); return -1; }
    return 1;
}

std::optional<Request::Entry> Request::find_root(const std::string& name) {
    std::optional<Entry> found;
    for (std::size_t at = 0; at < root_.size();) {
        const std::size_t length = root_[at];
        if (!length) { at = (at / 2048 + 1) * 2048; continue; }
        if (length < 34 || length > root_.size() - at || length > 2048 - at % 2048) {
            fail("malformed ISO root record span"); return {};
        }
        const auto* p = root_.data() + at;
        if (p[32] > length - 33 || !p[32] || !both32(p + 2) || !both32(p + 10) ||
            p[28] != 1 || p[29] || p[30] || p[31] != 1) {
            fail("malformed ISO root record fields"); return {};
        }
        if (std::string(reinterpret_cast<const char*>(p + 33), p[32]) == name) {
            const Entry e{le32(p + 2), le32(p + 10)};
            if (found || p[1] || p[25] != 0 || p[26] || p[27] ||
                !e.bytes || !range(std::uint64_t(e.sector) * 2048, e.bytes)) {
                fail("duplicate or unsupported ISO file entry"); return {};
            }
            found = e;
        }
        at += length;
    }
    if (!found) fail("required file absent from ISO root");
    return found;
}

bool Request::step() {
    if (done_) return true;
    if (!input_.epoch || input_.current_epoch() != input_.epoch) return fail("media unavailable or replaced");
    if (input_.bytes < 76 * 2048 || input_.bytes % 2048 || !input_.reference_bytes || input_.reference_bytes > 16 * 1024 * 1024)
        return fail("unsupported media or preloaded executable size");
    if (stage_ == 0) {
        // Original export79 performs this read before the ReadKey request.
        const int result = read(75 * 2048, 2048);
        if (result <= 0) return done_;
        ++stage_; return false;
    }
    if (stage_ == 1) {
        if (read(16 * 2048, 2048) <= 0) return done_;
        const auto* p = buffer_.data();
        if (std::memcmp(p, "\x01" "CD001\x01", 7) || p[128] || p[129] != 8 || p[130] != 8 || p[131] ||
            !both32(p + 80) || le32(p + 80) > input_.bytes / 2048 || le32(p + 80) < 76)
            return fail("unsupported ISO primary volume");
        volume_bytes_ = std::uint64_t(le32(p + 80)) * 2048;
        p += 156;
        if (p[0] < 34 || p[1] || p[25] != 2 || p[26] || p[27] || p[32] != 1 || p[33] ||
            p[28] != 1 || p[29] || p[30] || p[31] != 1 || !both32(p + 2) || !both32(p + 10))
            return fail("unsupported ISO root descriptor");
        root_entry_ = {le32(p + 2), le32(p + 10)};
        if (!root_entry_.bytes || root_entry_.bytes > 65536 || !range(std::uint64_t(root_entry_.sector) * 2048, root_entry_.bytes))
            return fail("ISO root outside bounded media span");
        ++stage_; return false;
    }
    if (stage_ == 2) {
        if (read(std::uint64_t(root_entry_.sector) * 2048, root_entry_.bytes) <= 0) return done_;
        root_ = buffer_;
        const auto entry = find_root("SYSTEM.CNF;1");
        if (!entry) return true;
        cnf_entry_ = *entry;
        if (cnf_entry_.bytes > 4096) return fail("SYSTEM.CNF exceeds supported bound");
        ++stage_; return false;
    }
    if (stage_ == 3) {
        if (read(std::uint64_t(cnf_entry_.sector) * 2048, cnf_entry_.bytes) <= 0) return done_;
        const auto path = boot_path(std::string_view(reinterpret_cast<const char*>(buffer_.data()), buffer_.size()));
        if (!path) return fail("malformed or unsupported SYSTEM.CNF BOOT2");
        if (*path != input_.expected_boot) return fail("mounted BOOT2 differs from selected executable");
        boot_ = *path;
        const auto entry = find_root(boot_.substr(8));
        if (!entry) return true;
        elf_entry_ = *entry;
        if (elf_entry_.bytes != input_.reference_bytes) return fail("mounted executable size mismatch");
        serial_ = boot_.substr(8, 4) + '-' + boot_.substr(13, 3) + boot_.substr(17, 2);
        ++stage_; return false;
    }
    if (stage_ == 4) {
        const auto size = std::size_t(std::min<std::uint64_t>(65536, input_.reference_bytes - compared_));
        if (read(std::uint64_t(elf_entry_.sector) * 2048 + compared_, size) <= 0) return done_;
        std::vector<std::uint8_t> expected(size);
        if (!input_.reference(compared_, expected.data(), size)) return fail("short or failed preloaded executable read");
        if (buffer_ != expected) return fail("mounted executable bytes mismatch");
        compared_ += size;
        if (compared_ != input_.reference_bytes) return false;
        ++stage_; return false;
    }
    key_ = command75(serial_, 0, 0, 75);
    if (!key_.accepted) return fail("unsupported modeled ReadKey request");
    done_ = true;
    return true;
}
}
