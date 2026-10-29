#include "overlay_registry.hpp"
#include <array>
#include <cassert>

int main() {
    using ps2::ModuleInfo;
    const std::uint32_t old_checks[] = {0, 0x11223344, 4, 0x55667788};
    const std::uint32_t new_checks[] = {0, 0x11223344, 4, 0x55667788, 8, 0x99001122};
    const std::uint32_t bad_checks[] = {0, 0x11223344, 4, 0x55667789};
    const ps2::UnitInfo units[] = {{0, 16, nullptr, nullptr}};
    const ModuleInfo old{"target", 0x1000, 16, old_checks, 2, units, 1};
    const ModuleInfo replacement{"target", 0x1000, 16, new_checks, 3, units, 1};
    const ModuleInfo sibling{"same-address-other-image", 0x1000, 16, bad_checks, 2, units, 1};
    const std::array source{old, sibling};
    const auto copy = original_exec::replace_overlay_registry(source.data(), source.size(), old, replacement);
    assert(copy.size() == 2 && copy[0].checks == new_checks && source[0].checks == old_checks);
    assert(copy[1].name == sibling.name && copy[1].checks == sibling.checks && copy[1].units == sibling.units);
    const auto rejects = [&](auto source, auto expected, auto next) {
        bool failed = false;
        try { original_exec::replace_overlay_registry(source.data(), source.size(), expected, next); }
        catch (const std::runtime_error&) { failed = true; }
        assert(failed);
    };
    auto corrupted = source; corrupted[0].checks = bad_checks;
    rejects(corrupted, old, replacement); // One changed original guard must reject.
    rejects(std::array{old, old}, old, replacement);
    rejects(std::array{sibling}, old, replacement);
    auto wrong = replacement; wrong.fixed_base += 4;
    rejects(source, old, wrong);
    wrong = replacement; wrong.name = sibling.name;
    rejects(source, old, wrong);
    wrong = old; wrong.count += 1;
    rejects(source, wrong, replacement);
}
