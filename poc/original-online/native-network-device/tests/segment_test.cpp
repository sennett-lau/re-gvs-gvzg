// Frame-level checks of the optional virtual segment, without the runtime or the original drivers.
#include "iop/segment.hpp"

#include <cstdio>
#include <cstring>
#include <vector>

namespace {

using Frame = std::vector<std::uint8_t>;
std::vector<Frame> g_delivered;
int g_failures = 0;

void deliver(const std::uint8_t *frame, std::uint16_t length) { g_delivered.emplace_back(frame, frame + length); }

void expect(bool ok, const char *what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what);
    if (!ok) ++g_failures;
}

unsigned be16(const std::uint8_t *p) { return static_cast<unsigned>(p[0] << 8 | p[1]); }
void put16(std::uint8_t *p, unsigned v) { p[0] = static_cast<std::uint8_t>(v >> 8), p[1] = static_cast<std::uint8_t>(v); }

unsigned sum(const std::uint8_t *p, unsigned n, std::uint32_t s = 0) {
    for (unsigned i = 0; i + 1 < n; i += 2) s += be16(p + i);
    if (n & 1) s += static_cast<std::uint32_t>(p[n - 1]) << 8;
    while (s >> 16) s = (s & 0xFFFF) + (s >> 16);
    return ~s & 0xFFFF;
}

unsigned udp_sum(const std::uint8_t *ip, const std::uint8_t *udp, unsigned length) {
    return sum(udp, length, be16(ip + 12) + be16(ip + 14) + be16(ip + 16) + be16(ip + 18) + 17u + length);
}

const std::uint8_t kClient[6] = {0x02, 0x50, 0x53, 0x32, 0x00, 0x01};

// A client DHCP message with valid IPv4 and UDP checksums, built like the original stack's frames.
Frame dhcp(std::uint8_t type, const std::uint8_t *requested = nullptr, const std::uint8_t *chaddr = kClient, const std::uint8_t *server = nullptr,
           bool broadcast_flag = false) {
    Frame f(14 + 20 + 8 + 240 + 16, 0);
    std::memset(f.data(), 0xFF, 6);
    std::memcpy(f.data() + 6, chaddr, 6);
    put16(f.data() + 12, 0x0800);
    std::uint8_t *ip = f.data() + 14, *udp = ip + 20, *b = udp + 8;
    ip[0] = 0x45, put16(ip + 2, static_cast<unsigned>(f.size() - 14)), ip[8] = 64, ip[9] = 17;
    std::memset(ip + 16, 0xFF, 4);
    put16(udp, 68), put16(udp + 2, 67), put16(udp + 4, static_cast<unsigned>(f.size() - 34));
    b[0] = 1, b[1] = 1, b[2] = 6, b[4] = 0x6C, b[5] = 0xF2, b[6] = 0xE3, b[7] = 0x3C, b[10] = broadcast_flag ? 0x80 : 0;
    std::memcpy(b + 28, chaddr, 6);
    b[236] = 0x63, b[237] = 0x82, b[238] = 0x53, b[239] = 0x63;
    std::uint8_t *o = b + 240;
    *o++ = 53, *o++ = 1, *o++ = type;
    if (requested) *o++ = 50, *o++ = 4, std::memcpy(o, requested, 4), o += 4;
    if (server) *o++ = 54, *o++ = 4, std::memcpy(o, server, 4), o += 4;
    *o = 255;
    put16(ip + 10, sum(ip, 20));
    put16(udp + 6, udp_sum(ip, udp, static_cast<unsigned>(f.size() - 34)));
    return f;
}

const std::uint8_t *option(const Frame &f, std::uint8_t code) {
    for (std::size_t at = 14 + 20 + 8 + 240; at + 1 < f.size() && f[at] != 255; at += 2u + f[at + 1])
        if (f[at] == code) return &f[at + 2];
    return nullptr;
}

bool valid_reply(const Frame &f, std::uint8_t type, const std::uint8_t *client = kClient) {
    const std::uint8_t *ip = f.data() + 14, *udp = ip + 20;
    const std::uint8_t *t = option(f, 53);
    return f.size() >= 14 + 20 + 8 + 240 && be16(f.data() + 12) == 0x0800 && !sum(ip, 20) && be16(udp) == 67 && be16(udp + 2) == 68 &&
           !udp_sum(ip, udp, be16(udp + 4)) && udp[8] == 2 && !std::memcmp(udp + 12, "\x6C\xF2\xE3\x3C", 4) &&
           !std::memcmp(udp + 8 + 28, client, 6) && t && *t == type;
}

std::size_t run(const Frame &f) {
    g_delivered.clear();
    ps2::iop::dev9::segment::transmit(f.data(), static_cast<std::uint16_t>(f.size()), deliver);
    return g_delivered.size();
}

}

int main() {
    using ps2::iop::dev9::segment::reset;
    reset();
    const std::uint8_t lease[4] = {192, 168, 208, 10}, other[4] = {192, 168, 208, 99}, router[4] = {192, 168, 208, 1};

    expect(run(dhcp(1)) == 1 && valid_reply(g_delivered[0], 2), "DISCOVER gets a checksummed OFFER");
    const Frame offer = g_delivered[0];
    expect(!std::memcmp(offer.data() + 14 + 20 + 8 + 16, lease, 4) && option(offer, 54) && !std::memcmp(option(offer, 54), router, 4) &&
               option(offer, 1) && option(offer, 3) && option(offer, 51) && be16(option(offer, 51) + 2) == 86400 % 65536,
           "OFFER carries the lease, server, mask, router and lease time");
    expect(!std::memcmp(offer.data(), kClient, 6) && !std::memcmp(offer.data() + 14 + 16, lease, 4),
           "without the broadcast flag the OFFER goes to the client hardware address and offered address");
    expect(run(dhcp(1, nullptr, kClient, nullptr, true)) == 1 && !std::memcmp(g_delivered[0].data(), "\xFF\xFF\xFF\xFF\xFF\xFF", 6) &&
               !std::memcmp(g_delivered[0].data() + 14 + 16, "\xFF\xFF\xFF\xFF", 4), "the broadcast flag gets a broadcast OFFER");
    const std::uint8_t elsewhere[4] = {192, 168, 208, 254};
    expect(run(dhcp(3, lease, kClient, elsewhere)) == 0, "REQUEST that selects another server is ignored");
    Frame relayed = dhcp(1);
    relayed[14 + 20 + 8 + 24] = 10;
    {
        std::uint8_t *rip = relayed.data() + 14, *rudp = rip + 20;
        put16(rudp + 6, 0);
        put16(rudp + 6, udp_sum(rip, rudp, be16(rudp + 4)));
    }
    expect(run(relayed) == 0, "relayed DISCOVER is ignored");
    expect(run(dhcp(3, other, kClient, router)) == 1 && valid_reply(g_delivered[0], 6) &&
               !std::memcmp(g_delivered[0].data() + 14 + 20 + 8 + 16, "\0\0\0\0", 4) && !std::memcmp(g_delivered[0].data(), "\xFF\xFF\xFF\xFF\xFF\xFF", 6),
           "REQUEST for another address gets a broadcast NAK without an address");
    expect(run(dhcp(3, lease, kClient, router)) == 1 && valid_reply(g_delivered[0], 5), "REQUEST for the lease gets an ACK");
    const std::uint8_t second[6] = {0x02, 0x50, 0x53, 0x32, 0x00, 0x02};
    expect(run(dhcp(1, nullptr, second)) == 0, "a second client gets no offer for the bound lease");
    expect(run(dhcp(3, lease, second, router)) == 1 && valid_reply(g_delivered[0], 6, second), "a second client requesting the bound lease gets a NAK");
    expect(run(dhcp(7, nullptr, kClient, router)) == 0 && run(dhcp(1, nullptr, second)) == 1 && valid_reply(g_delivered[0], 2, second),
           "RELEASE frees the lease for another client");

    Frame bad = dhcp(1);
    bad[14 + 10] ^= 1;
    expect(run(bad) == 0, "IPv4 checksum error is rejected");
    bad = dhcp(1);
    bad[14 + 20 + 6] ^= 1;
    expect(run(bad) == 0, "UDP checksum error is rejected");
    const std::uint8_t stranger[6] = {0x02, 0, 0, 0, 0, 0x99};
    Frame mismatch = dhcp(1, nullptr, stranger);
    std::memcpy(mismatch.data() + 6, kClient, 6);
    expect(run(mismatch) == 0, "chaddr that differs from the source is rejected");
    bad = dhcp(1);
    bad.resize(14 + 20 + 8 + 100);
    expect(run(bad) == 0, "truncated datagram is rejected");

    Frame arp(60, 0);
    std::memset(arp.data(), 0xFF, 6);
    std::memcpy(arp.data() + 6, kClient, 6);
    put16(arp.data() + 12, 0x0806);
    std::uint8_t *a = arp.data() + 14;
    put16(a, 1), put16(a + 2, 0x0800), a[4] = 6, a[5] = 4, put16(a + 6, 1);
    std::memcpy(a + 8, kClient, 6);
    std::memcpy(a + 14, lease, 4);
    std::memcpy(a + 24, router, 4);
    expect(run(arp) == 1 && be16(g_delivered[0].data() + 14 + 6) == 2 && !std::memcmp(g_delivered[0].data(), kClient, 6) &&
               !std::memcmp(g_delivered[0].data() + 14 + 14, router, 4) && !std::memcmp(g_delivered[0].data() + 14 + 18, kClient, 6),
           "ARP for the router is answered");
    std::memcpy(a + 24, lease, 4);
    expect(run(arp) == 0, "ARP for another address is not answered");

    Frame ipv6(60, 0);
    std::memcpy(ipv6.data() + 6, kClient, 6);
    put16(ipv6.data() + 12, 0x86DD);
    expect(run(ipv6) == 0, "non-IPv4 frame is dropped");
    Frame dns = dhcp(1);
    std::uint8_t *ip = dns.data() + 14, *udp = ip + 20;
    put16(udp, 1024), put16(udp + 2, 53), put16(udp + 6, 0);
    put16(udp + 6, udp_sum(ip, udp, be16(udp + 4)));
    expect(run(dns) == 0, "DNS query gets no invented answer");

    std::printf("%d failures\n", g_failures);
    return g_failures ? 1 : 0;
}
