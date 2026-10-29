// sceCdReadGUID and sceCdReadModelID derivation (cdvd_identity.hpp) against the retail path of DNAS280.IMG
// CDVDMAN exports 80 and 82.
#include "cdvd_identity.hpp"

#include <cassert>
#include <cstdio>
#include <utility>
#include <vector>

using ps2::iop::cdvd_identity::GuidResult;
using ps2::iop::cdvd_identity::ILinkId;
using Stores = std::vector<std::pair<std::uint32_t, std::uint32_t>>;

// The runtime's IOP map (hw.cpp is_ram after phys(), with mirrors, and is_scratchpad), as the patch uses it.
static bool supported(std::uint32_t a) {
    const std::uint32_t p = a & 0x1FFFFFFFu;
    return p < 0x00800000u || (p & ~0x3FFu) == 0x1F800000u;
}

static GuidResult run(const ILinkId &ilink, std::uint32_t out, Stores &stores) {
    stores.clear();
    return ps2::iop::cdvd_identity::read_guid(ilink, out, supported, [&](std::uint32_t a, std::uint32_t v) { stores.emplace_back(a, v); });
}

static GuidResult model(const ILinkId &ilink, std::uint32_t out, Stores &stores) {
    stores.clear();
    return ps2::iop::cdvd_identity::read_model_id(ilink, out, supported, [&](std::uint32_t a, std::uint32_t v) { stores.emplace_back(a, v); });
}

int main() {
    Stores stores;
    // The report sceCdRI gives in the runtime: success, status 0, all-zero ID.
    const ILinkId zero{1, {}, 0};
    assert(run(zero, 0x00100000u, stores) == GuidResult::stored);
    assert((stores == Stores{{0x00100000u, 0x08004600u}, {0x00100004u, 0x00000000u}}));

    // Byte 0 lands under the OUI, bytes 4-7 form the second word; bytes 1-3 are not part of the GUID.
    const ILinkId id{1, {0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6, 0x07, 0x18}, 0};
    assert(run(id, 0x001FFFF0u, stores) == GuidResult::stored);
    assert((stores == Stores{{0x001FFFF0u, 0x080046A1u}, {0x001FFFF4u, 0x1807F6E5u}}));

    // Any nonzero sceCdRI result counts as success, as the original only tests for zero.
    assert(run(ILinkId{-1, {}, 0}, 0x100u, stores) == GuidResult::stored && stores.size() == 2);

    // Failure stores nothing: sceCdRI returned 0, or reported a status (the original presets it to -1).
    assert(run(ILinkId{0, {1, 2, 3, 4, 5, 6, 7, 8}, 0}, 0x100u, stores) == GuidResult::failed && stores.empty());
    assert(run(ILinkId{1, {}, 1}, 0x100u, stores) == GuidResult::failed && stores.empty());
    assert(run(ILinkId{1, {}, 0xFFFFFFFFu}, 0x100u, stores) == GuidResult::failed && stores.empty());

    // An unaligned output stores nothing; a failed sceCdRI is reported first, since no store is reached.
    for (std::uint32_t low = 1; low < 4; ++low) {
        assert(run(zero, 0x100u + low, stores) == GuidResult::misaligned && stores.empty());
        assert(run(ILinkId{0, {}, 0}, 0x100u + low, stores) == GuidResult::failed && stores.empty());
    }

    // Supported spans keep the runtime's addresses: segment aliases, a RAM mirror, the mirror boundary
    // (the second word lands on the next mirror, at RAM 0) and the last scratchpad words.
    assert(run(zero, 0x80010000u, stores) == GuidResult::stored && (stores == Stores{{0x80010000u, 0x08004600u}, {0x80010004u, 0}}));
    assert(run(zero, 0xA0610000u, stores) == GuidResult::stored && stores.size() == 2);
    assert(run(zero, 0x001FFFFCu, stores) == GuidResult::stored && (stores == Stores{{0x001FFFFCu, 0x08004600u}, {0x00200000u, 0}}));
    assert(run(zero, 0x1F8003F8u, stores) == GuidResult::stored && (stores == Stores{{0x1F8003F8u, 0x08004600u}, {0x1F8003FCu, 0}}));

    // A span with either word outside RAM and scratchpad stores neither word: RAM end into devices,
    // scratchpad end into devices, a device span, and the address that wraps to 0.
    for (const std::uint32_t out : {0x007FFFFCu, 0x1F8003FCu, 0x1F801070u, 0xFFFFFFFCu, 0x1FC00000u, 0x00800000u})
        assert(run(zero, out, stores) == GuidResult::unsupported && stores.empty());
    // Failure and alignment are decided before the span, as no store is reached for them.
    assert(run(ILinkId{0, {}, 0}, 0x1F801070u, stores) == GuidResult::failed && stores.empty());
    assert(run(zero, 0x1F801072u, stores) == GuidResult::misaligned && stores.empty());

    // Export 82: one word, ID bytes 1-3 (byte 0 and bytes 4-7 are not part of it), 0 for the runtime's ID.
    assert(model(zero, 0x00100000u, stores) == GuidResult::stored && (stores == Stores{{0x00100000u, 0}}));
    assert(model(id, 0x00100000u, stores) == GuidResult::stored && (stores == Stores{{0x00100000u, 0x00D4C3B2u}}));
    assert(model(ILinkId{0, {1, 2, 3, 4}, 0}, 0x100u, stores) == GuidResult::failed && stores.empty());
    assert(model(ILinkId{1, {}, 1}, 0x100u, stores) == GuidResult::failed && stores.empty());
    for (std::uint32_t low = 1; low < 4; ++low) assert(model(zero, 0x100u + low, stores) == GuidResult::misaligned && stores.empty());
    // One word may end the RAM window or the scratchpad; one word past either, a device or a wrap may not.
    for (const std::uint32_t out : {0x007FFFFCu, 0x1F8003FCu, 0x8001FFFCu})
        assert(model(zero, out, stores) == GuidResult::stored && (stores == Stores{{out, 0}}));
    for (const std::uint32_t out : {0x00800000u, 0x1F800400u, 0x1F801070u, 0xFFFFFFFCu})
        assert(model(zero, out, stores) == GuidResult::unsupported && stores.empty());
    std::puts("cdvd identity derivation: ok");
}
