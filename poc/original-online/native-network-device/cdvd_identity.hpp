#pragma once
// original-online-cdvd-identity-v2: console GUID and model ID of the CDVDMAN in the game's DNAS280.IMG,
// exports 80 and 82.
#include <cstdint>

namespace ps2::iop::cdvd_identity {

// What sceCdRI (cdvdman export 22) reports: its return value, the 8-byte i.LINK ID and the status word.
struct ILinkId {
    std::int32_t result = 0;
    std::uint8_t id[8] = {};
    std::uint32_t stat = 0;
};

enum class GuidResult { failed, misaligned, unsupported, stored };

// sceCdReadGUID(u32 *out) on a retail console (QueryBootMode(6) returns no entry): export 80 at 0x4014
// calls 0x3EC4 with mode 0, which calls sceCdRI and returns 0 without storing when sceCdRI returns 0 or
// reports a nonzero status. Otherwise it stores two words with sw: Sony's IEEE OUI 08:00:46 above the
// ID's first byte, then ID bytes 4-7, and returns 1. An unaligned out would raise an address error on
// the first store. Both word addresses (out + 4 wraps as on the CPU) are checked with supported() before
// the first store, so a span the runtime cannot store to leaves memory and devices untouched.
template <class Supported, class Store>
GuidResult read_guid(const ILinkId &ilink, std::uint32_t out, Supported &&supported, Store &&store) {
    if (!ilink.result || ilink.stat) return GuidResult::failed;
    if (out & 3u) return GuidResult::misaligned;
    if (!supported(out) || !supported(out + 4u)) return GuidResult::unsupported;
    store(out, 0x08004600u | ilink.id[0]);
    store(out + 4u, ilink.id[4] | ilink.id[5] << 8 | ilink.id[6] << 16 | static_cast<std::uint32_t>(ilink.id[7]) << 24);
    return GuidResult::stored;
}

// sceCdReadModelID(u32 *out), export 82 at 0x4038: the same routine with mode 1. The retail path makes the
// same sceCdRI call and failure checks, then stores one word with sw, the ID's first word shifted right by
// 8 (ID bytes 1-3), and returns 1. The 0x1A0002 substitution in 0x3EC4 belongs to the boot mode 6 board path.
template <class Supported, class Store>
GuidResult read_model_id(const ILinkId &ilink, std::uint32_t out, Supported &&supported, Store &&store) {
    if (!ilink.result || ilink.stat) return GuidResult::failed;
    if (out & 3u) return GuidResult::misaligned;
    if (!supported(out)) return GuidResult::unsupported;
    store(out, ilink.id[1] | ilink.id[2] << 8 | static_cast<std::uint32_t>(ilink.id[3]) << 16);
    return GuidResult::stored;
}

}
