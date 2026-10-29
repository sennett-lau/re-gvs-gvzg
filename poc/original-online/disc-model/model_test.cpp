#include "fixture.hpp"
#include <cassert>
#include <cstdio>
using namespace original_disc_model;
using namespace disc_model_test;

static Request run(Fixture& f) {
    Request r(f.input());
    for (unsigned i = 0; i < 100 && !r.step(); ++i) {}
    assert(r.step()); return r;
}
int main() {
    Fixture good;
    auto r = run(good);
    assert(r.error().empty() && r.serial() == "ABCD-12345" && r.compared() == good.reference.size());
    assert(r.key().accepted && r.key().valid == 5 && r.key().xor_byte == 0 && r.key().registers[4] == 12);
    assert(good.reads.front().first == 75 * 2048);
    for (const auto& item : good.reads) assert(item.second <= 65536);
    unsigned cases = 1;
    const auto reject = [&](const char* expected, auto mutate) {
        Fixture f; mutate(f); const auto failed = run(f);
        assert(failed.error().find(expected) != std::string::npos && !failed.key().accepted); ++cases;
    };
    reject("read", [](auto& f) { f.short_read = true; });
    reject("preloaded", [](auto& f) { f.short_reference = true; });
    reject("unavailable", [](auto& f) { f.epoch = 0; });
    reject("bytes mismatch", [](auto& f) { f.media[80 * 2048 + 65540] ^= 1; });
    reject("size mismatch", [](auto& f) { both(f.media.data() + f.elf_record + 10, 10); });
    reject("primary volume", [](auto& f) { f.media[16 * 2048 + 128] = 1; });
    reject("primary volume", [](auto& f) { f.media[16 * 2048 + 84] ^= 1; });
    reject("outside", [](auto& f) { both(f.media.data() + 16 * 2048 + 158, 300); });
    reject("file entry", [](auto& f) { both(f.media.data() + 16 * 2048 + 80, 80); });
    reject("file entry", [](auto& f) { f.media[f.elf_record + 25] = 2; });
    reject("record span", [](auto& f) { f.media[f.cnf_record] = 33; });
    reject("record fields", [](auto& f) { f.media[f.cnf_record + 32] = 255; });
    reject("file entry", [](auto& f) { record(f.media.data() + f.root_end, "SYSTEM.CNF;1", 21, 20); });
    reject("BOOT2", [](auto& f) { f.cnf("BOOT2 = " + f.boot + "\nBOOT2 = " + f.boot + "\n"); });
    reject("BOOT2", [](auto& f) { f.cnf("VER = 1.00\n"); });
    reject("BOOT2", [](auto& f) { f.cnf("BOOT2 = cdrom0:\\ABCD_123.4\n"); });
    reject("BOOT2", [](auto& f) { f.cnf(std::string("BOOT2 = ") + f.boot + '\0'); });
    reject("differs", [](auto& f) { f.boot = "cdrom0:\\EFGH_999.99;1"; });
    reject("bound", [](auto& f) { both(f.media.data() + f.cnf_record + 10, 4097); });
    Fixture delayed; delayed.available = false; Request wait(delayed.input());
    assert(!wait.step() && delayed.reads.empty()); delayed.available = true;
    assert(!wait.step() && delayed.reads.size() == 1); ++delayed.epoch;
    assert(wait.step() && wait.error().find("replaced") != std::string::npos); ++cases;
    Fixture during; auto input = during.input(); auto read = input.read;
    input.read = [&](auto a, auto b, auto c) { const auto okay = read(a,b,c); ++during.epoch; return okay; };
    Request changed(input); assert(changed.step() && changed.error().find("during") != std::string::npos); ++cases;
    for (auto target : {std::uint64_t(16*2048), std::uint64_t(20*2048), std::uint64_t(21*2048), std::uint64_t(80*2048)}) {
        Fixture f; auto partial = f.input(); auto exact = partial.read;
        partial.read = [=](auto a, auto b, auto c) { return a == target ? false : exact(a,b,c); };
        Request request(partial); for (unsigned i = 0; i < 100 && !request.step(); ++i) {}
        assert(request.error().find("short or failed") != std::string::npos && !request.key().accepted); ++cases;
    }
    for (const auto& serial : {"ABCD-00000", "ABCD-00031", "EFGH-00032", "IJKL-01023", "MNOP-99999"}) {
        auto key = command75(serial, 0, 0, 75);
        assert(key.accepted && key.valid == 5);
        assert(key.registers[4] == (((std::stoul(serial + 5) & 0x3E0u) >> 2) | 4));
    }
    for (const auto& bad : {"", "ABCD-0000", "abcd-12345", "ABCD-1234x", "ABCD_12345"}) assert(!command75(bad,0,0,75).accepted);
    assert(!command75("ABCD-12345",1,0,75).accepted && !command75("ABCD-12345",0,1,75).accepted && !command75("ABCD-12345",0,0,1).accepted);
    std::vector<std::pair<unsigned,unsigned>> stores;
    auto store = [&](unsigned a, unsigned v) { stores.emplace_back(a,v); };
    clear_output(101, store);
    assert((stores == std::vector<std::pair<unsigned,unsigned>>{{105,0},{104,0},{103,0},{102,0},{101,0}}));
    KeyResponse key{true,0,4,0xA5,{11,22,33,44,55}};
    assert(store_output(key,101,store) && stores.size() == 15);
    for (unsigned i = 0; i < 5; ++i) {
        assert(stores[5+i*2].first == 101+i && stores[5+i*2].second == key.registers[i]);
        assert(stores[6+i*2].second == (key.registers[i] ^ key.xor_byte));
    }
    stores.clear(); key.error = 1; assert(!store_output(key,101,store) && stores.empty());
    key.error = 0; key.valid = 1; assert(!store_output(key,101,store) && stores.empty());
    key.valid = 4; key.accepted = false; assert(!store_output(key,101,store) && stores.empty());
    std::printf("disc model: %u media cases plus command/output contracts passed\n", cases);
}
