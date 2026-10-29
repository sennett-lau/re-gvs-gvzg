// Small driver for the retained compiler. Input provenance and live byte
// verification belong to the exporter; this tool never modifies a guest image.
#include "analysis.hpp"
#include "codegen.hpp"
#include "elf.hpp"
#include "block_flow.hpp"
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <stdexcept>

int main(int argc, char** argv) {
    try {
        const bool sparse = argc == 5 && std::string(argv[4]) == "--allow-sparse";
        if (argc != 4 && !sparse) throw std::runtime_error("usage: block_codegen HEX_BASE INPUT_BYTES NEW_OUTPUT [--allow-sparse]");
        std::size_t parsed = 0;
        const auto value = std::stoul(argv[1], &parsed, 16);
        if (parsed != std::string(argv[1]).size() || value > 0x2000000 || value % 4)
            throw std::runtime_error("Invalid EE block address");
        const auto base = static_cast<std::uint32_t>(value);
        std::ifstream input(argv[2], std::ios::binary);
        if (!input) throw std::runtime_error("Cannot read block bytes");
        std::vector<std::uint8_t> bytes{std::istreambuf_iterator<char>(input), {}};
        if (bytes.empty() || bytes.size() % 4 || bytes.size() > 0x10000 || base + bytes.size() > 0x2000000)
            throw std::runtime_error("Invalid bounded EE block extent");
        if (std::filesystem::exists(argv[3])) throw std::runtime_error("Use a new output directory");
        const auto size = static_cast<std::uint32_t>(bytes.size());
        const auto image = recomp::Image::raw(base, std::move(bytes), {0, size});
        auto program = recomp::analyse(image, {base});
        if (!program.is_code(base)) throw std::runtime_error("Block begin is not a translated instruction");
        if (program.is_code(base + size - 4) && recomp::has_delay_slot(recomp::decode(*image.word(base + size - 4), base + size - 4).op))
            throw std::runtime_error("Final instruction has an unguarded external delay slot");
        std::vector<std::uint32_t> gaps;
        for (auto pc = base; pc < base + size; pc += 4) {
            if (!program.is_code(pc)) {
                if (!sparse) throw std::runtime_error("Block includes untranslated bytes");
                gaps.push_back(pc);
            }
        }
        char prefix[48]; std::snprintf(prefix, sizeof prefix, "exec_variant_%08X_", base);
        recomp::Translation translation{&image, &program, nullptr, prefix, false, "", 0, {}};
        recomp::CodegenOptions options; options.output = argv[3];
        recomp::generate({translation}, options);
        std::ofstream analysis(std::filesystem::path(argv[3]) / "analysis.json");
        analysis << "{\"base\":" << base << ",\"bytes\":" << size << ",\"sparse_allowed\":" << (sparse ? "true" : "false") << ",\"untranslated_addresses\":[";
        for (std::size_t i = 0; i < gaps.size(); ++i) analysis << (i ? "," : "") << gaps[i];
        analysis << "],\"flow_audit\":{";
        const auto audit = original_exec_audit::audit_flow(image, program, base, base + size);
        auto addresses = [&](const char* key, const auto& values) {
            analysis << '\"' << key << "\":[";
            bool first = true;
            for (auto pc : values) { analysis << (first ? "" : ",") << pc; first = false; }
            analysis << "]";
        };
        addresses("instructions", audit.instructions); analysis << ',';
        addresses("delay_slots", audit.delay_slots); analysis << ',';
        addresses("untranslated_reachable", audit.gaps); analysis << ',';
        addresses("unsupported_delay_slots", audit.unsupported_delay_slots); analysis << ',';
        addresses("indirect_transfers", audit.indirect_transfers);
        analysis << ",\"external_edges\":[";
        bool first = true;
        for (const auto& edge : audit.external_edges) {
            analysis << (first ? "" : ",") << "{\"pc\":" << edge.pc << ",\"word\":" << edge.word
                     << ",\"target\":" << edge.target << ",\"op\":\"" << recomp::name(edge.op) << "\"}";
            first = false;
        }
        analysis << "]}}\n";
        std::printf("Translated actual input block %08X size %u; execution remains unverified\n", base, size);
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what()); return 1;
    }
}
