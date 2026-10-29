// Frame runner for external checks: each input file is one Ethernet frame sent to the virtual segment,
// in order and with one segment state; each reply is written to OUTDIR/<input>-<n>.bin.
#include "iop/segment.hpp"

#include <cstdio>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

namespace {
std::vector<std::vector<std::uint8_t>> g_replies;
void deliver(const std::uint8_t *frame, std::uint16_t length) { g_replies.emplace_back(frame, frame + length); }
}

int main(int argc, char **argv) {
    if (argc < 3) {
        std::fprintf(stderr, "usage: %s OUTDIR FRAME.bin...\n", argv[0]);
        return 2;
    }
    ps2::iop::dev9::segment::reset();
    for (int i = 2; i < argc; ++i) {
        std::ifstream in(argv[i], std::ios::binary);
        const std::vector<std::uint8_t> frame((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
        if (!in.is_open() || frame.empty() || frame.size() > 1518) {
            std::fprintf(stderr, "cannot use %s\n", argv[i]);
            return 3;
        }
        g_replies.clear();
        ps2::iop::dev9::segment::transmit(frame.data(), static_cast<std::uint16_t>(frame.size()), deliver);
        for (std::size_t k = 0; k < g_replies.size(); ++k) {
            const std::string name = std::string(argv[1]) + "/" + std::to_string(i - 1) + "-" + std::to_string(k) + ".bin";
            std::ofstream(name, std::ios::binary).write(reinterpret_cast<const char *>(g_replies[k].data()), static_cast<std::streamsize>(g_replies[k].size()));
        }
        std::printf("{\"input\":\"%s\",\"bytes\":%zu,\"replies\":%zu}\n", argv[i], frame.size(), g_replies.size());
    }
    return 0;
}
