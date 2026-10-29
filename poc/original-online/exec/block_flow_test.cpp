#include "block_flow.hpp"
#include <cassert>
#include <cstring>
#include <initializer_list>
#include <iostream>

using original_exec_audit::FlowAudit;
static FlowAudit run(std::initializer_list<std::uint32_t> words) {
    std::vector<std::uint8_t> bytes(words.size() * 4);
    std::memcpy(bytes.data(), words.begin(), bytes.size());
    const auto size = static_cast<std::uint32_t>(bytes.size());
    auto image = recomp::Image::raw(0x1000, std::move(bytes), {0, size});
    auto program = recomp::analyse(image, {0x1000});
    return original_exec_audit::audit_flow(image, program, 0x1000, 0x1000 + size);
}
int main() {
    // An unconditional branch skips a literal that resembles an external JAL.
    auto a = run({0x10000003,0,0x0D4B4F20,0,0x0C000800,0});
    assert(a.external_edges.size() == 1 && a.external_edges[0].target == 0x2000);
    assert(!a.instructions.contains(0x1008) && a.delay_slots.contains(0x1004));
    // Never-taken likely branch annuls its slot; no fabricated call emerges.
    a = run({0x54000003,0x0C000C00,0x0C000800,0,0,0});
    assert(a.external_edges.size() == 1 && a.external_edges[0].target == 0x2000);
    assert(!a.delay_slots.contains(0x1004));
    a = run({0x04120003,0x0C000C00,0x0C000800,0,0,0}); // BLTZALL zero: not taken.
    assert(a.external_edges.size() == 1 && !a.delay_slots.contains(0x1004));
    a = run({0x54850003,0x0C000C00,0x0C000800,0,0,0}); // Unknown BEQL: false path survives bad slot.
    assert(a.external_edges.size() == 1 && a.unsupported_delay_slots.contains(0x1004));
    // Unknown conditions retain both possible branches and ordinary call return.
    a = run({0x10850003,0,0x0C000800,0,0x0C000C00,0});
    assert(a.external_edges.size() == 2);
    // A direct jump ends the path; a call still has a possible return.
    a = run({0x08000800,0,0x0C000C00,0});
    assert(a.external_edges.size() == 1 && !a.instructions.contains(0x1008));
    a = run({0x0320F809,0,0x0C000C00,0});
    assert(a.indirect_transfers.contains(0x1000) && a.external_edges.size() == 1);
    a = run({0x03E00008,0,0x0C000C00,0});
    assert(a.indirect_transfers.contains(0x1000) && a.external_edges.empty());
    // An invalid/control delay slot is a real runtime stop, not a new seed.
    a = run({0x0C000800,0x08000C00,0,0});
    assert(a.unsupported_delay_slots.contains(0x1004) && a.external_edges.empty());
    a = run({0x0C000800,0x0000000C,0,0});
    assert(a.unsupported_delay_slots.contains(0x1004) && a.external_edges.empty());
    // Retained breakpoint() only logs: it must not hide reachable targets.
    a = run({0x000001CD,0x0C000800,0x000001CD,0});
    assert(a.unsupported_delay_slots.empty() && a.external_edges.size() == 1);
    // All signed-zero branch facts and same-register facts are explicit.
    using enum recomp::Op;
    for (auto op : {Blez,Blezl,Bgez,Bgezl,Bgezal,Bgezall,Beq,Beql})
        assert(original_exec_audit::constant_branch({0,0,op}) == true);
    for (auto op : {Bgtz,Bgtzl,Bltz,Bltzl,Bltzal,Bltzall,Bne,Bnel})
        assert(original_exec_audit::constant_branch({0,0,op}) == false);
    assert(!original_exec_audit::constant_branch({0,0x00220000,Beq}).has_value());
    std::cout << "Bounded direct-flow, branch facts, delay slots and dynamic limits passed\n";
}
