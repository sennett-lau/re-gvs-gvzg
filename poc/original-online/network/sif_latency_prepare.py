#!/usr/bin/env python3
"""Opt-in B34 candidate: hardware-like delivery latency for IOP->EE SIF packets.

The runtime puts an RPC reply into EE RAM as soon as the IOP server function
returns. Hardware adds SIF DMA, IOP interrupt and thread-switch latency, and
lower-priority EE threads run while a synchronous caller waits. This edits only a
copied runtime tree. Each packet queued for the EE gets a delivery time (queue
time + latency). pump() delivers in order, and only when the front packet is due;
otherwise it schedules a retry on hw::kEventIop, which the runtime declares but
never uses. sync_iop() also calls pump(), so an event restored from a state
without its action does no harm. The latency has no default and is never part of
a default build."""
import argparse
import hashlib
import json
from pathlib import Path
import re

PROFILE = 'sif-delivery-latency-v1'
EE_CLOCK = 294912000
MUTATIONS = re.compile(r'g_outgoing\.(emplace_back|push_back|emplace_front|push_front|pop_front|pop_back|clear|erase|insert|swap|assign)\b')
EVENT_DECLARATION = ('runtime/src/hw.hpp', '    kEventIop = kEventDma0 + 10,\n')
LIMITS = [
    'every IOP->EE packet is delayed, including CD/file and NOWAIT replies, so load timing also shifts; never a default',
    'delivery times are not saved; packets restored from a save state are due at once',
    'the latency is a parameter, not a hardware measurement',
]


def replace_once(text, old, new):
    if text.count(old) != 1:
        raise ValueError('SIF latency anchor absent or ambiguous: ' + old.splitlines()[0])
    return text.replace(old, new)


def check_event_unused(tree):
    """kEventIop must still be declared once and used nowhere, so the retry cannot alias a vendor event."""
    runtime = Path(tree) / 'runtime'
    uses = []
    for path in sorted(runtime.rglob('*')):
        if path.suffix in ('.cpp', '.hpp', '.h', '.inc') and path.is_file():
            text = path.read_text(errors='replace')
            uses += [(path.relative_to(tree).as_posix(), n) for n in range(text.count('kEventIop'))]
    declaration = (Path(tree) / EVENT_DECLARATION[0]).read_text()
    if uses != [(EVENT_DECLARATION[0], 0)] or declaration.count(EVENT_DECLARATION[1]) != 1:
        raise ValueError('hw::kEventIop is no longer declared once and unused: %s' % uses)


def patch(text, latency_us):
    if isinstance(latency_us, bool) or not isinstance(latency_us, int) or not 1 <= latency_us <= 2000:
        raise ValueError('latency_us must be an explicit integer 1..2000')
    if 'g_outgoing_due' in text:
        raise ValueError('SIF latency already present')
    sites = sorted(m.group(1) for m in MUTATIONS.finditer(text))
    if sites != ['clear', 'emplace_back', 'emplace_back', 'pop_front'] or text.count('s.deque(g_outgoing,') != 1:
        raise ValueError('unexpected g_outgoing mutation sites: %s' % sites)
    text = replace_once(text, 'std::deque<std::vector<std::uint8_t>> g_outgoing;\n',
        'std::deque<std::vector<std::uint8_t>> g_outgoing;\n'
        '// Opt-in B34 candidate: earliest EE time each queued packet may be delivered.\n'
        f'constexpr std::uint64_t kSifDeliveryLatency = kEeClock * {latency_us}u / 1000000u;\n'
        'std::deque<std::uint64_t> g_outgoing_due;\n')
    text = replace_once(text, '    g_outgoing.emplace_back(bytes, bytes + size);\n    pump();\n',
        '    g_outgoing.emplace_back(bytes, bytes + size);\n    g_outgoing_due.push_back(now() + kSifDeliveryLatency);\n    pump();\n')
    text = replace_once(text,
        '            g_outgoing.emplace_back(reinterpret_cast<const std::uint8_t *>(&r), reinterpret_cast<const std::uint8_t *>(&r) + sizeof r);\n'
        '            it = g_binds.erase(it);\n',
        '            g_outgoing.emplace_back(reinterpret_cast<const std::uint8_t *>(&r), reinterpret_cast<const std::uint8_t *>(&r) + sizeof r);\n'
        '            g_outgoing_due.push_back(t + kSifDeliveryLatency);\n'
        '            it = g_binds.erase(it);\n')
    text = replace_once(text, '    if (!g_processed || g_outgoing.empty() || !g_ee_recv) return;\n',
        '    if (!g_processed || g_outgoing.empty() || !g_ee_recv) return;\n'
        '    if (t < g_outgoing_due.front()) {\n'
        '        schedule(hw::kEventIop, g_outgoing_due.front(), [] { pump(); });\n'
        '        return;\n'
        '    }\n')
    text = replace_once(text, '    g_outgoing.pop_front();\n', '    g_outgoing.pop_front();\n    g_outgoing_due.pop_front();\n')
    text = replace_once(text, '    g_outgoing.clear();\n', '    g_outgoing.clear();\n    g_outgoing_due.clear();\n')
    text = replace_once(text, '    s.deque(g_outgoing, [&s](std::vector<std::uint8_t> &packet) { s.vec(packet); });\n',
        '    s.deque(g_outgoing, [&s](std::vector<std::uint8_t> &packet) { s.vec(packet); });\n'
        '    if (s.loading()) g_outgoing_due.assign(g_outgoing.size(), 0);\n')
    return text


def prepare(tree, latency_us):
    check_event_unused(tree)
    path = Path(tree) / 'runtime/src/iop/sif.cpp'
    before = path.read_text()
    after = patch(before, latency_us)
    path.write_text(after)
    return {'profile': PROFILE, 'latency_us': latency_us, 'latency_ee_cycles': EE_CLOCK * latency_us // 1000000,
            'event': 'hw::kEventIop (declared once, otherwise unused; checked)', 'file': 'runtime/src/iop/sif.cpp',
            'before_sha256': hashlib.sha256(before.encode()).hexdigest(), 'after_sha256': hashlib.sha256(after.encode()).hexdigest(),
            'scope': 'every IOP->EE SIF packet keeps its order and reaches EE RAM no earlier than queue time + latency',
            'state_format': 'unchanged', 'limits': LIMITS}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('tree', type=Path, help='copied source tree that contains runtime/')
    parser.add_argument('--latency-us', type=int, required=True, help='explicit delivery latency, 1..2000 us')
    args = parser.parse_args()
    print(json.dumps(prepare(args.tree, args.latency_us), indent=2))
