#include "module_names.hpp"
#include <cassert>
#include <fstream>
#include <iterator>
#include <map>

int main(int argc, char **argv) {
    using namespace original_online;
    std::vector<std::uint8_t> bytes(128);
    const auto put = [&](int at, std::uint32_t v) {
        for (int i=0; i<4; ++i) bytes.at(at+i) = v >> (8*i);
    };
    put(0, 0x464c457f); bytes[4] = bytes[5] = 1;
    put(28, 52); bytes[42] = 32; bytes[44] = 1;
    put(52, 0x70000080); put(56, 84); put(68, 44);
    const std::string name = "INET_SMAP_driver";
    std::copy(name.begin(), name.end(), bytes.begin()+110);
    assert(irx_module_name(bytes, "SMAP") == name);
    auto bad = bytes; bad.resize(125); assert(irx_module_name(bad, "SMAP") == "SMAP");
    bad = bytes; bad[44] = 255; assert(irx_module_name(bad, "SMAP") == "SMAP");
    bad = bytes; std::fill(bad.begin()+110, bad.end(), 'X');
    assert(irx_module_name(bad, "SMAP") == "SMAP");
    std::vector<std::uint8_t> ram(512);
    std::copy(name.begin(), name.end(), ram.begin()+8);
    struct Module { std::string name; };
    const std::map<int, Module> registry = {{3, {name}}, {9, {"Capcom_AVE_TCP_Wrapper"}}};
    assert(find_module(registry, loadfile_name(ram.data(), ram.size(), 0, 512)) == 3);
    assert(find_module(registry, "SMAP") == -202);
    assert(find_module(registry, "absent") == -202);
    for (const auto [args, size] : {std::pair{0u, 8u}, {500u, 512u}, {0xffffffffu, 512u}}) {
        bool rejected = false;
        try { loadfile_name(ram.data(), ram.size(), args, size); }
        catch (const std::runtime_error &) { rejected = true; }
        assert(rejected);
    }
    std::fill(ram.begin()+8, ram.end(), 'X');
    bool rejected = false;
    try { loadfile_name(ram.data(), ram.size(), 0, 512); }
    catch (const std::runtime_error &) { rejected = true; }
    assert(rejected);
    // Optional real IRX corroboration. Arguments are PATH EXPECTED_NAME pairs.
    assert(argc % 2 == 1);
    for (int i=1; i<argc; i+=2) {
        std::ifstream input(argv[i], std::ios::binary); assert(input);
        const std::vector<std::uint8_t> actual((std::istreambuf_iterator<char>(input)), {});
        assert(irx_module_name(actual, "unrecognized") == argv[i+1]);
    }
}
