import importlib.util
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
RUNTIME = ROOT / 'vendor/ps2-web-recomp/runtime'


def load(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    result = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(result)
    return result


waits = load('wait_snapshot_prepare', HERE / 'wait_snapshot_prepare.py')
prepare = load('wait_snapshot_exec_prepare', HERE / 'prepare.py')
build = load('wait_snapshot_build', HERE / 'build_profile.py')

# Substitutes only the runtime objects the inserted readers name. The actual
# vendor sources are separately compiled with the same insertions below.
MOCK = r'''
#include "wait_snapshot.hpp"
#include <cassert>
#include <cstring>
#include <deque>
#include <map>
#include <tuple>
#include <vector>
namespace ps2 {
inline constexpr std::uint64_t kEeClock = 294912000ull;
inline constexpr std::uint32_t kRamSize = 0x2000000u;
union Reg128 { std::uint32_t w[4]; std::uint64_t d[2]; };
struct Cpu { Reg128 r[32]; std::uint32_t pc; };
struct ThreadContext { Reg128 r[32]; std::uint32_t pc; };
Cpu g_cpu{};
std::uint8_t *g_ram = nullptr;
std::uint64_t g_clock = 0;
std::uint64_t now() { return g_clock; }
template<class T> T load(const std::uint8_t *p) { T v; std::memcpy(&v, p, sizeof v); return v; }
std::uint32_t ld32(std::uint32_t a) { return load<std::uint32_t>(g_ram + a); }
namespace iop { void original_exec_wait_snapshot(unsigned sample); }
namespace sif { void original_exec_wait_sif(unsigned sample); }
namespace kernel {
enum Status { kRun = 1, kReady = 2, kWait = 4 };
enum WaitType { kWaitNone, kWaitSleep, kWaitSema };
struct Thread { int id{}, status{}, priority{}, init_priority{}; std::uint32_t entry{}; int wakeups{}; WaitType wait{}; int wait_id{};
                std::uint64_t order{}; ThreadContext context{}; };
struct Semaphore { int count{}, max{}, init{}; std::uint32_t attr{}; std::deque<int> waiters; };
struct Alarm { std::uint32_t callback{}, arg{}; std::uint64_t due{}; };
std::map<int, Thread> g_threads;
std::map<int, Semaphore> g_semas;
std::map<int, Alarm> g_alarms;
int g_current = 0;
#include "wait_snapshot_ee.inc"
}
namespace iop {
inline constexpr std::uint32_t kRamSize = 2u << 20;
struct Cpu { std::uint32_t r[32]; std::uint32_t pc; };
Cpu g_cpu{};
std::uint8_t ram[kRamSize]{};
std::uint32_t ram32(std::uint32_t a) { std::uint32_t v; std::memcpy(&v, ram + (a & (kRamSize - 1)), 4); return v; }
namespace kernel {
enum WaitKind { kWaitNone, kWaitSleep, kWaitDelay, kWaitSema, kWaitEvent, kWaitMbx, kWaitFpl, kWaitVblank, kWaitRpc };
struct Thread { int id{}, status{}, priority{}, init_priority{}; std::uint32_t entry{}; int wakeups{}; WaitKind wait{}; int wait_id{};
                std::uint64_t order{}; Cpu context{};
                std::uint32_t rpc_queue{}, rpc_server{}, event_bits{}, event_mode{}; };
std::map<int, Thread> g_threads;
int g_current = 0;
std::vector<int> g_events{1, 2};
std::uint64_t now() { return 1234; }
void original_exec_wait_object(unsigned sample, int kind, int id);
struct Sema { int count, max; std::uint32_t attr, option; std::deque<int> waiters; };
struct EventFlag { std::uint32_t bits, attr, option; std::deque<int> waiters; };
struct Mbx { std::uint32_t attr, option; std::deque<std::uint32_t> messages; std::deque<int> waiters; };
std::map<int, Sema> g_semas;
std::map<int, EventFlag> g_events_flags;
std::map<int, Mbx> g_mbxs;
}
#include "wait_snapshot_iop.inc"
}
namespace sif {
struct Call { std::uint32_t rpc_id, client_data, rpc_number, send_size, recv, recv_size, recv_mode, server_data; };
struct Request { Call call; };
struct PendingBind { std::uint64_t deadline; };
std::map<std::uint32_t, Call> g_held_calls;
std::map<std::uint32_t, std::deque<Request>> g_requests;
std::map<std::uint32_t, PendingBind> g_binds;
std::map<std::uint32_t, int> g_queue_threads;
std::map<std::uint32_t, int> g_servers;
std::deque<int> g_outgoing;
bool g_processed = true;
#include "wait_snapshot_sif.inc"
}
}
// The library reader resolves g_events to event flags, as in the copied libs.cpp.
namespace ps2::iop::kernel::flags {
std::map<int, EventFlag> &g_events = g_events_flags;
#include "wait_snapshot_libs.inc"
}
namespace ps2::iop::kernel {
void original_exec_wait_object(unsigned sample, int kind, int id) { flags::original_exec_wait_object(sample, kind, id); }
}

int main() {
    using namespace ps2;
    std::vector<std::uint8_t> ram(kRamSize);
    g_ram = ram.data();
    // EE: running thread 1, thread 2 waiting on semaphore 5 with a real call return on its stack.
    kernel::g_current = 1;
    g_cpu.pc = 0x00200000u; g_cpu.r[29].w[0] = 0x01000000u; g_cpu.r[31].w[0] = 0x00200100u;
    kernel::Thread waiting{}; waiting.id = 2; waiting.status = kernel::kWait; waiting.priority = 30;
    waiting.init_priority = 31; waiting.entry = 0x011B4998u; waiting.order = 77;
    waiting.wait = kernel::kWaitSema; waiting.wait_id = 5; waiting.context.pc = 0x00104000u;
    waiting.context.r[29].w[0] = 0x01100000u; waiting.context.r[31].w[0] = 0x00297894u;
    kernel::g_threads[1] = kernel::Thread{1, kernel::kRun, 10, 10, 0x00100000u, 0, kernel::kWaitNone, 0, 1, {}};
    kernel::g_threads[2] = waiting;
    kernel::Thread misaligned = waiting; misaligned.id = 3; misaligned.wait = kernel::kWaitSleep; misaligned.wait_id = 0;
    misaligned.context.r[29].w[0] = 0x01100002u;
    kernel::g_threads[3] = misaligned;
    kernel::Thread edge = waiting; edge.id = 4; edge.context.r[29].w[0] = kRamSize - 64u;
    kernel::g_threads[4] = edge;
    kernel::g_semas[5] = kernel::Semaphore{0, 1, 0, 0, {2, 4}};
    kernel::g_semas[6] = kernel::Semaphore{1, 1, 0, 0, {}};
    for (int id = 7; id < 40; ++id) kernel::g_semas[id] = kernel::Semaphore{0, 1, 0, 0, {}};
    kernel::g_semas[50] = kernel::Semaphore{0, 1, 0, 0, {9}};
    kernel::Thread far = waiting; far.id = 9; far.wait_id = 50; kernel::g_threads[9] = far;
    kernel::g_alarms[3] = kernel::Alarm{0x00104000u, 7, 123456};
    const std::uint32_t jal = 0x0C000000u | (0x00297000u >> 2);
    std::memcpy(g_ram + 0x00297894u - 8u, &jal, 4);
    const std::uint32_t frame[4] = {0x00297894u, 0x00297895u, 0x00400000u, 0x00297894u};
    std::memcpy(g_ram + 0x01100000u, frame, sizeof frame);
    // IOP: a semaphore waiter, event-flag waiter, mailbox waiter and SIF RPC waiter.
    iop::kernel::g_current = 0;
    for (auto [id, kind, object] : std::vector<std::tuple<int, iop::kernel::WaitKind, int>>{
             {10, iop::kernel::kWaitSema, 7}, {11, iop::kernel::kWaitEvent, 8}, {12, iop::kernel::kWaitMbx, 9},
             {13, iop::kernel::kWaitRpc, 0x1F000}, {14, iop::kernel::kWaitSema, 99}}) {
        iop::kernel::Thread t{}; t.id = id; t.status = 4; t.wait = kind; t.wait_id = object;
        t.context.r[29] = 0x001F0000u; t.context.pc = 0x00072300u; t.rpc_queue = id == 13 ? 0x1F000u : 0;
        iop::kernel::g_threads[id] = t;
    }
    iop::kernel::g_semas[7] = iop::kernel::Sema{0, 1, 0, 0, {10}};
    iop::kernel::g_events_flags[8] = iop::kernel::EventFlag{0x2, 0, 0, {11}};
    iop::kernel::g_mbxs[9] = iop::kernel::Mbx{0, 0, {}, {12}};
    sif::g_held_calls[0x01270030u] = sif::Call{3041, 0, 19, 16, 0x92A000u, 32, 0, 0};
    sif::g_requests[0x1F000u].push_back(sif::Request{sif::Call{3042, 0, 1, 16, 0, 144, 1, 749514429}});
    sif::g_queue_threads[0x1F000u] = 13;
    const auto clock = kEeClock;
    auto poll = [&](std::uint64_t at) { g_clock = at; kernel::original_exec_wait_poll(); };
    std::fprintf(stderr, "phase before-trigger\n");
    for (std::uint32_t state : {0u, 35u, 37u, 0x2700u}) { std::memcpy(g_ram + 0x00CD1360u, &state, 4); poll(clock * 2); }
    std::fprintf(stderr, "phase trigger\n");
    const std::uint32_t state = 0x00050027u;
    std::memcpy(g_ram + 0x00CD1360u, &state, 4);
    // Guest memory and kernel objects are compared after this point.
    const auto ram_before = ram;
    const auto iop_before = std::vector<std::uint8_t>(iop::ram, iop::ram + iop::kRamSize);
    const auto threads_before = kernel::g_threads.size();
    poll(clock * 10);
    poll(clock * 10 + clock / 4);
    std::fprintf(stderr, "phase samples\n");
    for (std::uint64_t ms = 0; ms <= 300000; ms += 250) poll(clock * 10 + ms * clock / 1000);
    std::fprintf(stderr, "phase done\n");
    poll(clock * 1000);
    assert(std::memcmp(ram.data(), ram_before.data(), ram.size()) == 0);
    assert(std::memcmp(iop::ram, iop_before.data(), iop_before.size()) == 0);
    assert(kernel::g_threads.size() == threads_before && kernel::g_semas.at(5).waiters.size() == 2);
    assert(sif::g_requests.at(0x1F000u).size() == 1 && sif::g_held_calls.size() == 1);
    std::fprintf(stderr, "phase regress\n");
    original_exec::wait_snapshot::Gate gate;
    assert(gate.poll(100, 39, 1000) == -2 && gate.poll(99, 39, 1000) == -1 && gate.done() && gate.poll(1000000, 39, 1000) == 0);
}
'''


class WaitSnapshotTest(unittest.TestCase):
    def tree(self, root):
        source = root / 'upstream'
        shutil.copytree(RUNTIME, source / 'runtime', ignore=shutil.ignore_patterns('._*'))
        return source

    def test_actual_sources_compile_with_insertions_and_default_stays_unchanged(self):
        kernel = (RUNTIME / 'src/kernel.cpp').read_text()
        host = (ROOT / 'apps/game/src/web.cpp').read_text()
        default_kernel, _ = prepare.prepare(kernel, host)
        self.assertNotIn(waits.MARKER, default_kernel)
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); source = self.tree(root)
            originals = {name: (source / name).read_text() for name in waits.SOURCES}
            tree = waits.prepare_tree(source)
            prepared = waits.prepare_kernel(default_kernel)
            self.assertEqual(prepared.count('    original_exec_wait_poll();\n'), 1)
            self.assertIn('if (g_in_handler) return;\n    original_exec_wait_poll();', prepared)
            for name in waits.SOURCES:
                after = (source / name).read_text()
                self.assertTrue(after.endswith('}\n') and originals[name] in after)
                self.assertEqual(tree[name]['input_sha256'], waits.sha(originals[name]))
                self.assertEqual(tree[name]['output_sha256'], waits.sha(after))
            (root / 'kernel.cpp').write_text(prepared)
            includes = [HERE, RUNTIME / 'include', source / 'runtime/src', source / 'runtime/src/iop']
            for path in [root / 'kernel.cpp', *[source / name for name in waits.SOURCES]]:
                with self.subTest(path=path.name):
                    subprocess.run(['c++', '-std=c++20', '-fsyntax-only', '-Wall', '-Wextra', '-DORIGINAL_EXEC_IMAGE="game"',
                                    *['-I' + str(p) for p in includes], str(path)], check=True, capture_output=True)
            manifest = waits.manifest(default_kernel, prepared, tree)
            self.assertEqual(manifest['delays_ms'][0], 500)
            self.assertGreater(manifest['delays_ms'][-1], 120000)
            self.assertEqual(manifest['limits']['stack_words'], 32)
            self.assertEqual(set(manifest['inputs_sha256']), set(waits.FILES))
            self.assertIn('0x00CD1360', manifest['trigger'])

    def test_double_application_and_drift_fail_closed(self):
        kernel, _ = prepare.prepare((RUNTIME / 'src/kernel.cpp').read_text(), (ROOT / 'apps/game/src/web.cpp').read_text())
        with self.assertRaisesRegex(ValueError, 'already present'): waits.prepare_kernel(waits.prepare_kernel(kernel))
        with self.assertRaisesRegex(ValueError, 'service anchor'):
            waits.prepare_kernel(kernel.replace('    if (g_in_handler) return;\n    run_alarms(c);', '    run_alarms(c);'))
        with tempfile.TemporaryDirectory() as temp:
            source = self.tree(Path(temp))
            waits.prepare_tree(source)
            with self.assertRaisesRegex(ValueError, 'already present'): waits.prepare_tree(source)
        with tempfile.TemporaryDirectory() as temp:
            source = self.tree(Path(temp))
            path = source / 'runtime/src/iop/libs.cpp'
            path.write_text(path.read_text().replace('std::map<int, Mbx> g_mbxs;', 'std::map<int, Mbx> g_mailboxes;'))
            before = (source / waits.SOURCES[0]).read_text()
            with self.assertRaisesRegex(ValueError, 'anchor absent'): waits.prepare_tree(source)
            # Earlier files may be written before a later drift is detected; the
            # builder then fails the whole fresh work directory.
            self.assertIn(before, (source / waits.SOURCES[0]).read_text())

    def test_build_option_is_game_only(self):
        with tempfile.TemporaryDirectory() as temp:
            work = Path(temp) / 'work'
            with self.assertRaisesRegex(ValueError, 'game-only'):
                build.plan('utility', Path(temp), Path(temp), work, Path(temp), wait_snapshot=True)
            self.assertFalse(work.exists())

    def test_mock_runtime_records_are_bounded_scheduled_and_read_only(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'probe.cpp').write_text(MOCK)
            subprocess.run(['c++', '-std=c++20', '-Wall', '-Wextra', '-Werror', '-Wno-unused-variable', '-I' + str(HERE),
                            str(root / 'probe.cpp'), '-o', str(root / 'probe')], check=True, capture_output=True)
            result = subprocess.run([str(root / 'probe')], check=True, capture_output=True, text=True)
        phases, current = {}, None
        for line in result.stderr.splitlines():
            if line.startswith('phase '): current = line[6:]; phases[current] = []; continue
            self.assertTrue(line.startswith('[original-exec-wait] '), line)
            phases[current].append(json.loads(line.removeprefix('[original-exec-wait] ')))
        self.assertEqual(phases['before-trigger'], [])
        self.assertEqual([r['result'] for r in phases['trigger']], [-2])
        self.assertEqual(phases['trigger'][0]['state_word'], 0x00050027)
        self.assertEqual(phases['done'], [])
        records = phases['samples']
        gates = [r for r in records if r['kind'] == 'gate']
        self.assertEqual([r['result'] for r in gates], list(range(1, 12)))
        self.assertEqual([r['delay_ms'] for r in gates], waits.constants()[1])
        for gate in gates:
            elapsed_ms = (gate['ee_cycles'] - gate['trigger_cycles']) * 1000 // 294912000
            self.assertGreaterEqual(elapsed_ms, gate['delay_ms'])
            self.assertLess(elapsed_ms, gate['delay_ms'] + 250)
        first = [r for r in records if r.get('sample') == 1]
        kinds = [(r['kind'], r.get('processor')) for r in first]
        self.assertEqual(kinds.count(('thread', 'EE')), 5)
        self.assertEqual(kinds.count(('thread', 'IOP')), 5)
        ee = {r['id']: r for r in first if r['kind'] == 'thread' and r['processor'] == 'EE'}
        self.assertEqual(ee[2]['wait'], 2)
        self.assertEqual(ee[2]['wait_id'], 5)
        self.assertEqual(ee[2]['ra'], 0x00297894)
        self.assertEqual((ee[2]['entry'], ee[2]['init_priority'], ee[2]['order']), (0x011B4998, 31, 77))
        self.assertEqual(len(ee[2]['stack_words']), 32)
        self.assertEqual(ee[2]['return_candidates'], [0x00297894, 0x00297894])
        self.assertFalse(ee[3]['stack_span_valid'])
        self.assertEqual(ee[3]['stack_words'], [])
        self.assertFalse(ee[4]['stack_span_valid'])
        self.assertEqual(ee[1]['pc'], 0x00200000)
        objects = {(r['processor'], r['object'], r['id']): r for r in first if r['kind'] == 'object'}
        self.assertEqual(objects[('EE', 'semaphore', 5)]['waiters'], [2, 4])
        self.assertEqual(objects[('EE', 'semaphore', 6)]['count'], 1)
        ee_semaphores = [r['id'] for r in first if r['kind'] == 'object' and r['processor'] == 'EE']
        self.assertEqual(ee_semaphores, [5, 6, *range(7, 37), 50])  # 32 bounded, then waited 50
        objects_record = next(r for r in first if r['kind'] == 'objects' and r['processor'] == 'EE')
        self.assertTrue(objects_record['semaphores_limited'])
        self.assertFalse(objects_record['alarms_limited'])
        self.assertEqual([(r['id'], r['callback'], r['arg'], r['due']) for r in first if r['kind'] == 'alarm'], [(3, 0x00104000, 7, 123456)])
        self.assertEqual(objects[('IOP', 'semaphore', 7)]['count'], 0)
        self.assertEqual(objects[('IOP', 'event_flag', 8)]['bits'], 2)
        self.assertEqual(objects[('IOP', 'mailbox', 9)]['waiters'], [12])
        self.assertFalse(objects[('IOP', 'semaphore', 99)]['present'])
        iop = {r['id']: r for r in first if r['kind'] == 'thread' and r['processor'] == 'IOP'}
        self.assertEqual(iop[13]['rpc_queue'], 0x1F000)
        sif = [r for r in first if r['kind'].startswith('sif')]
        self.assertEqual([r['kind'] for r in sif], ['sif', 'sif-held-call', 'sif-queue'])
        self.assertEqual(sif[1]['rpc_number'], 19)
        self.assertEqual(sif[2]['thread'], 13)
        self.assertEqual(phases['regress'], [])


if __name__ == '__main__': unittest.main()
