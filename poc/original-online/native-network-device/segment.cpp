#include "segment.hpp"

#include "ps2/state.hpp"

#include <cstdio>
#include <cstring>

namespace ps2::iop::dev9::segment {

namespace {

// Locally chosen identity of the virtual segment; nothing here describes a real network.
constexpr std::uint8_t kRouterMac[6] = {0x02, 0x50, 0x53, 0x32, 0x00, 0xFE};
constexpr std::uint8_t kRouter[4] = {192, 168, 208, 1};
constexpr std::uint8_t kLease[4] = {192, 168, 208, 10};
constexpr std::uint8_t kMask[4] = {255, 255, 255, 0};
constexpr std::uint32_t kLeaseSeconds = 86400;
constexpr std::uint8_t kBroadcast[6] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
constexpr unsigned kEthernet = 14, kIp = 20, kUdp = 8, kBootp = 236, kMinimumFrame = 60;

enum Message : std::uint8_t { kDiscover = 1, kOffer, kRequest, kDecline, kAck, kNak, kRelease, kInform };

// One isolated client: the lease belongs to the first hardware address that is acknowledged.
struct Counters {
    std::uint32_t frames, invalid, arp_replies, arp_ignored, offers, acks, naks, dhcp_ignored, dropped;
    std::uint16_t ip_id;
    std::uint8_t owner[6];
};

Counters g;

std::uint16_t be16(const std::uint8_t *p) { return static_cast<std::uint16_t>(p[0] << 8 | p[1]); }
void put16(std::uint8_t *p, unsigned v) { p[0] = static_cast<std::uint8_t>(v >> 8), p[1] = static_cast<std::uint8_t>(v); }
void put32(std::uint8_t *p, std::uint32_t v) { put16(p, v >> 16), put16(p + 2, v & 0xFFFFu); }

std::uint16_t checksum(const std::uint8_t *p, unsigned n, std::uint32_t sum = 0) {
    for (unsigned i = 0; i + 1 < n; i += 2) sum += be16(p + i);
    if (n & 1) sum += static_cast<std::uint32_t>(p[n - 1]) << 8;
    while (sum >> 16) sum = (sum & 0xFFFFu) + (sum >> 16);
    return static_cast<std::uint16_t>(~sum);
}

std::uint16_t udp_checksum(const std::uint8_t *ip, const std::uint8_t *udp, unsigned length) {
    std::uint32_t sum = be16(ip + 12) + be16(ip + 14) + be16(ip + 16) + be16(ip + 18) + 17u + length;
    return checksum(udp, length, sum);
}

void invalid(const char *why, std::uint16_t length) {
    ++g.invalid;
    std::fprintf(stderr, "[dev9-segment] invalid %u-byte frame: %s\n", length, why);
}

void drop(const char *what, std::uint16_t length) {
    ++g.dropped;
    std::fprintf(stderr, "[dev9-segment] %s (%u bytes) has no upstream; dropped (%u so far)\n", what, length, g.dropped);
}

void send(std::uint8_t *frame, unsigned length, Deliver deliver) {
    if (length < kMinimumFrame) {
        std::memset(frame + length, 0, kMinimumFrame - length);
        length = kMinimumFrame;
    }
    deliver(frame, static_cast<std::uint16_t>(length));
}

void arp(const std::uint8_t *frame, std::uint16_t length, Deliver deliver) {
    const std::uint8_t *a = frame + kEthernet;
    if (length < kEthernet + 28 || be16(a) != 1 || be16(a + 2) != 0x0800 || a[4] != 6 || a[5] != 4) return invalid("ARP header", length);
    if (be16(a + 6) != 1 || std::memcmp(a + 24, kRouter, 4) != 0) {
        ++g.arp_ignored;
        return;
    }
    std::uint8_t reply[kMinimumFrame] = {};
    std::memcpy(reply, frame + 6, 6);
    std::memcpy(reply + 6, kRouterMac, 6);
    put16(reply + 12, 0x0806);
    std::uint8_t *r = reply + kEthernet;
    put16(r, 1), put16(r + 2, 0x0800), r[4] = 6, r[5] = 4, put16(r + 6, 2);
    std::memcpy(r + 8, kRouterMac, 6);
    std::memcpy(r + 14, kRouter, 4);
    std::memcpy(r + 18, a + 8, 10); // requester's hardware and protocol address
    ++g.arp_replies;
    std::fprintf(stderr, "[dev9-segment] ARP %u.%u.%u.%u is-at router (%u replies)\n", kRouter[0], kRouter[1], kRouter[2], kRouter[3], g.arp_replies);
    send(reply, kEthernet + 28, deliver);
}

void dhcp(const std::uint8_t *frame, std::uint16_t length, const std::uint8_t *udp, unsigned udp_length, Deliver deliver) {
    const std::uint8_t *b = udp + kUdp;
    const unsigned bootp_length = udp_length - kUdp;
    if (bootp_length < kBootp + 4 || b[0] != 1 || b[1] != 1 || b[2] != 6 || be16(b + kBootp) != 0x6382 || be16(b + kBootp + 2) != 0x5363)
        return invalid("BOOTP request header", length);
    if (std::memcmp(b + 28, frame + 6, 6) != 0) return invalid("DHCP chaddr differs from the source address", length);
    if (std::memcmp(b + 24, "\0\0\0\0", 4) != 0) {
        ++g.dhcp_ignored;
        std::fprintf(stderr, "[dev9-segment] relayed DHCP message ignored: no relay on this segment\n");
        return;
    }
    std::uint8_t type = 0;
    const std::uint8_t *requested = nullptr, *server = nullptr;
    for (unsigned at = kBootp + 4; at < bootp_length;) {
        const std::uint8_t code = b[at];
        if (code == 255) break;
        if (code == 0) {
            ++at;
            continue;
        }
        if (at + 2 > bootp_length || at + 2 + b[at + 1] > bootp_length) return invalid("DHCP option length", length);
        const std::uint8_t size = b[at + 1], *value = b + at + 2;
        if (code == 53 && size == 1) type = value[0];
        if (code == 50 && size == 4) requested = value;
        if (code == 54 && size == 4) server = value;
        at += 2u + size;
    }
    const bool unclaimed = !std::memcmp(g.owner, "\0\0\0\0\0\0", 6), owner = !std::memcmp(g.owner, b + 28, 6);
    std::uint8_t reply_type = 0;
    if (type == kDiscover && (unclaimed || owner)) reply_type = kOffer;
    else if (type == kRequest && (!server || !std::memcmp(server, kRouter, 4))) {
        // A REQUEST naming another server means the client chose that server: stay silent.
        const bool address = requested ? !std::memcmp(requested, kLease, 4) : !std::memcmp(b + 12, kLease, 4);
        reply_type = address && (unclaimed || owner) ? kAck : kNak;
    } else if ((type == kRelease || type == kDecline) && owner && (!server || !std::memcmp(server, kRouter, 4))) {
        std::memset(g.owner, 0, 6);
        std::fprintf(stderr, "[dev9-segment] lease %u.%u.%u.%u released by DHCP message %u\n", kLease[0], kLease[1], kLease[2], kLease[3], type);
    }
    std::fprintf(stderr, "[dev9-segment] DHCP message %u xid %08X from %02x:%02x:%02x:%02x:%02x:%02x\n", type, static_cast<unsigned>(be16(b + 4)) << 16 | be16(b + 6),
                 frame[6], frame[7], frame[8], frame[9], frame[10], frame[11]);
    if (!reply_type) {
        ++g.dhcp_ignored;
        return;
    }
    std::uint8_t reply[kEthernet + kIp + kUdp + kBootp + 64] = {};
    std::uint8_t *o = reply + kEthernet + kIp + kUdp, *opt = o + kBootp + 4;
    o[0] = 2, o[1] = 1, o[2] = 6;
    std::memcpy(o + 4, b + 4, 4);   // xid
    std::memcpy(o + 10, b + 10, 2); // flags
    std::memcpy(o + 12, b + 12, 4); // ciaddr
    if (reply_type != kNak) std::memcpy(o + 16, kLease, 4);
    std::memcpy(o + 28, b + 28, 16);
    put32(o + kBootp, 0x63825363u);
    auto option = [&opt](std::uint8_t code, const std::uint8_t *value, std::uint8_t size) {
        opt[0] = code, opt[1] = size;
        std::memcpy(opt + 2, value, size);
        opt += 2u + size;
    };
    std::uint8_t seconds[4];
    put32(seconds, kLeaseSeconds);
    option(53, &reply_type, 1);
    option(54, kRouter, 4);
    if (reply_type != kNak) {
        option(51, seconds, 4);
        option(1, kMask, 4);
        option(3, kRouter, 4);
        option(6, kRouter, 4);
    }
    *opt++ = 255;
    const unsigned bootp = static_cast<unsigned>(opt - o), udp_out = kUdp + bootp, ip_out = kIp + udp_out;
    // RFC 2131 4.1 without a relay: NAK and the broadcast flag broadcast, a client with an address gets
    // unicast to it, and otherwise the reply goes to the client hardware address and the offered address.
    const bool has_address = std::memcmp(b + 12, "\0\0\0\0", 4) != 0;
    const bool broadcast = reply_type == kNak || (!has_address && (b[10] & 0x80));
    std::memcpy(reply, broadcast ? kBroadcast : frame + 6, 6);
    std::memcpy(reply + 6, kRouterMac, 6);
    put16(reply + 12, 0x0800);
    std::uint8_t *r = reply + kEthernet;
    r[0] = 0x45, put16(r + 2, ip_out), put16(r + 4, ++g.ip_id), r[8] = 64, r[9] = 17;
    std::memcpy(r + 12, kRouter, 4);
    if (broadcast) std::memset(r + 16, 0xFF, 4);
    else std::memcpy(r + 16, has_address ? b + 12 : kLease, 4);
    put16(r + 10, checksum(r, kIp));
    std::uint8_t *u = r + kIp;
    put16(u, 67), put16(u + 2, 68), put16(u + 4, udp_out);
    const std::uint16_t sum = udp_checksum(r, u, udp_out);
    put16(u + 6, sum ? sum : 0xFFFF);
    if (reply_type == kOffer) ++g.offers;
    else if (reply_type == kAck) {
        ++g.acks;
        std::memcpy(g.owner, b + 28, 6);
    }
    else ++g.naks;
    std::fprintf(stderr, "[dev9-segment] DHCP reply %u: %u.%u.%u.%u/24 router %u.%u.%u.%u lease %u s\n", reply_type, kLease[0], kLease[1], kLease[2],
                 kLease[3], kRouter[0], kRouter[1], kRouter[2], kRouter[3], kLeaseSeconds);
    send(reply, kEthernet + ip_out, deliver);
}

}

void reset() { std::memset(&g, 0, sizeof g); }

void transmit(const std::uint8_t *frame, std::uint16_t length, Deliver deliver) {
    ++g.frames;
    if (length < kEthernet) return invalid("shorter than an Ethernet header", length);
    const bool to_router = !std::memcmp(frame, kRouterMac, 6), to_all = !std::memcmp(frame, kBroadcast, 6);
    const std::uint16_t type = be16(frame + 12);
    if (type == 0x0806 && (to_router || to_all)) return arp(frame, length, deliver);
    if (type != 0x0800) return drop("non-IPv4 frame", length);
    const std::uint8_t *ip = frame + kEthernet;
    if (length < kEthernet + kIp || ip[0] >> 4 != 4 || (ip[0] & 15) < 5) return invalid("IPv4 header", length);
    const unsigned header = (ip[0] & 15u) * 4u, total = be16(ip + 2);
    if (total < header || kEthernet + total > length || checksum(ip, header)) return invalid("IPv4 length or checksum", length);
    if (ip[9] != 17 || (be16(ip + 6) & 0x3FFF)) return drop("IPv4 packet other than an unfragmented UDP datagram", length);
    const std::uint8_t *udp = ip + header;
    const unsigned udp_length = total - header;
    if (udp_length < kUdp || be16(udp + 4) != udp_length) return invalid("UDP length", length);
    if (be16(udp + 6) && udp_checksum(ip, udp, udp_length)) return invalid("UDP checksum", length);
    if (be16(udp) == 68 && be16(udp + 2) == 67 && (to_all || to_router)) return dhcp(frame, length, udp, udp_length, deliver);
    drop("UDP datagram", length);
}

void state(ps2::state::Stream &s) {
    s.tag("dev9seg");
    s.pod(g);
}

}
