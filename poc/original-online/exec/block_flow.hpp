// Read-only reachability audit using the same instruction decoder as codegen.
#pragma once
#include "analysis.hpp"
#include <deque>
#include <optional>
#include <set>
#include <vector>

namespace original_exec_audit {
struct Edge { std::uint32_t pc, word, target; recomp::Op op; };
struct FlowAudit {
    std::set<std::uint32_t> instructions, delay_slots, gaps, unsupported_delay_slots;
    std::vector<Edge> external_edges;
    std::set<std::uint32_t> indirect_transfers;
};

// Only register-independent facts are used to remove branch paths. No guest
// values, propagated guesses, helper results or actual code bytes are changed.
inline std::optional<bool> constant_branch(const recomp::Insn& i) {
    using enum recomp::Op;
    switch (i.op) {
    case Beq: case Beql: if (i.rs() == i.rt()) return true; break;
    case Bne: case Bnel: if (i.rs() == i.rt()) return false; break;
    case Blez: case Blezl: case Bgez: case Bgezl: case Bgezal: case Bgezall:
        if (i.rs() == 0) return true; break;
    case Bgtz: case Bgtzl: case Bltz: case Bltzl: case Bltzal: case Bltzall:
        if (i.rs() == 0) return false; break;
    default: break;
    }
    return {};
}

inline FlowAudit audit_flow(const recomp::Image& image, const recomp::Program& program,
                            std::uint32_t begin, std::uint32_t end) {
    FlowAudit result;
    std::deque<std::uint32_t> pending{begin};
    auto local = [&](std::uint32_t pc) { if (begin <= pc && pc < end) pending.push_back(pc); };
    while (!pending.empty()) {
        auto pc = pending.front(); pending.pop_front();
        if (!result.instructions.insert(pc).second) continue;
        if (!program.is_code(pc)) { result.gaps.insert(pc); continue; }
        const auto i = recomp::decode(*image.word(pc), pc);
        const auto flow = recomp::flow(i.op);
        using enum recomp::Flow;
        if (flow == Stop) continue;
        if (flow == None) { local(pc + 4); continue; }
        const auto condition = constant_branch(i);
        const bool likely = flow == BranchLikely || i.op == recomp::Op::Bltzall || i.op == recomp::Op::Bgezall;
        const bool annulled = likely && condition == false;
        if (!annulled) {
            if (pc + 4 >= end || !program.is_code(pc + 4)) { result.gaps.insert(pc + 4); continue; }
            const auto slot = recomp::decode(*image.word(pc + 4), pc + 4);
            result.delay_slots.insert(pc + 4);
            // The generated runtime stops on a control instruction in a delay
            // slot. Do not infer a target after that explicit failure.
            if (recomp::has_delay_slot(slot.op) || slot.op == recomp::Op::Eret ||
                slot.op == recomp::Op::Invalid || slot.op == recomp::Op::Syscall) {
                result.unsupported_delay_slots.insert(pc + 4);
                if (likely && condition != true) local(pc + 8);
                continue;
            }
        }
        if (flow == JumpRegister || flow == CallRegister) {
            result.indirect_transfers.insert(pc);
            if (flow == CallRegister) local(pc + 8);
            continue;
        }
        if (condition != false) {
            const auto target = i.branch_target_of();
            if (begin <= target && target < end) local(target);
            else result.external_edges.push_back({pc, i.word, target, i.op});
        }
        if (flow == Call || ((flow == Branch || flow == BranchLikely) && condition != true)) local(pc + 8);
    }
    return result;
}
}
