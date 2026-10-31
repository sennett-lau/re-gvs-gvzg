#!/usr/bin/env python3
"""Insert the explicit read-only EE/IOP wait snapshot into copied runtime sources."""
import hashlib
import re
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROFILE = 'original-exec-wait-snapshot-v1'
FILES = ['wait_snapshot.hpp', 'wait_snapshot_ee.inc', 'wait_snapshot_iop.inc', 'wait_snapshot_libs.inc', 'wait_snapshot_sif.inc']
SOURCES = ['runtime/src/iop/kernel.cpp', 'runtime/src/iop/libs.cpp', 'runtime/src/iop/sif.cpp']
MARKER = 'original_exec_wait_'
SERVICE = 'void service(Cpu &c) {\n    if (g_in_handler) return;\n'
# Each copied file must still own the objects the inserted reader names.
ANCHORS = {
    'runtime/src/iop/kernel.cpp': ['std::map<int, Thread> g_threads;', 'int g_current = 0;',
                                   'std::priority_queue<Event, std::vector<Event>, std::greater<Event>> g_events;'],
    'runtime/src/iop/libs.cpp': ['std::map<int, Sema> g_semas;', 'std::map<int, EventFlag> g_events;', 'std::map<int, Mbx> g_mbxs;'],
    'runtime/src/iop/sif.cpp': ['std::map<std::uint32_t, Call> g_held_calls;', 'std::map<std::uint32_t, std::deque<Request>> g_requests;',
                                'std::map<std::uint32_t, PendingBind> g_binds;', 'std::map<std::uint32_t, int> g_queue_threads;'],
}
TAILS = {
    'runtime/src/iop/kernel.cpp': ('namespace ps2::iop::kernel { void original_exec_wait_object(unsigned sample, int kind, int id); }\n',
                                   'namespace ps2::iop {\n#include "wait_snapshot_iop.inc"\n}\n'),
    'runtime/src/iop/libs.cpp': ('', 'namespace ps2::iop::kernel {\n#include "wait_snapshot_libs.inc"\n}\n'),
    'runtime/src/iop/sif.cpp': ('', 'namespace ps2::sif {\n#include "wait_snapshot_sif.inc"\n}\n'),
}


def sha(data):
    return hashlib.sha256(data.encode() if isinstance(data, str) else data).hexdigest()


def fresh(text, name):
    if MARKER in text: raise ValueError('Wait snapshot already present in ' + name)


def prepare_kernel(text, idle=False):
    """The copied EE kernel samples at service, after the interrupt-handler guard.

    With `idle`, the network adapter's idle diagnostic also starts bounded episodes."""
    fresh(text, 'EE kernel')
    if text.count(SERVICE) != 1: raise ValueError('EE kernel service anchor absent or ambiguous')
    for anchor in ['std::map<int, Thread> g_threads;', 'std::map<int, Semaphore> g_semas;', 'std::map<int, Alarm> g_alarms;',
                   'enum WaitType { kWaitNone, kWaitSleep, kWaitSema };']:
        if text.count(anchor) != 1: raise ValueError('EE kernel anchor absent or ambiguous: ' + anchor)
    head = (('#define ORIGINAL_EXEC_WAIT_IDLE 1\n' if idle else '') + '#include "wait_snapshot.hpp"\n'
            'namespace ps2::iop { void original_exec_wait_snapshot(unsigned sample); }\n'
            'namespace ps2::sif { void original_exec_wait_sif(unsigned sample); }\n')
    return head + text.replace(SERVICE, '#include "wait_snapshot_ee.inc"\n\n' + SERVICE + '    original_exec_wait_poll();\n')


def prepare_tree(source):
    """Modify only the copied IOP kernel, library and SIF sources under `source`."""
    changes = {}
    for name in SOURCES:
        path = source / name
        before = path.read_text()
        fresh(before, name)
        for anchor in ANCHORS[name]:
            if before.count(anchor) != 1: raise ValueError('Wait snapshot anchor absent or ambiguous in ' + name + ': ' + anchor)
        declaration, tail = TAILS[name]
        after = '#include "wait_snapshot.hpp"\n' + declaration + before + ('' if before.endswith('\n') else '\n') + tail
        path.write_text(after)
        changes[name] = {'input_sha256': sha(before), 'output_sha256': sha(after)}
    return changes


def constants():
    header = (HERE / 'wait_snapshot.hpp').read_text()
    values = {name: int(value, 0) for name, value in re.findall(r'\b(\w+) = (0x[0-9A-Fa-f]+|\d+)u?\b', header)}
    delays = [int(value) for value in re.search(r'\bdelays_ms\{([^}]*)\}', header).group(1).split(',')]
    return values, delays


def idle_constants():
    header = (HERE / 'wait_snapshot.hpp').read_text()
    return [int(value) for value in re.search(r'idle_delays_ms\{([^}]*)\}', header).group(1).split(',')]


def manifest(kernel_before, kernel_after, tree):
    values, delays = constants()
    idle = '#define ORIGINAL_EXEC_WAIT_IDLE 1\n' in kernel_after
    return {
        'profile': PROFILE, 'image': 'game',
        'trigger': f'first EE kernel service with original state byte {values["trigger_state"]} at 0x{values["state_address"]:08X}',
        'delays_ms': delays,
        'idle_trigger': {'source': 'original_online_idle_events() from the network idle diagnostic', 'delays_ms': idle_constants(),
                         'episode_limit': values['idle_episode_limit'], 'sample_base': values['idle_sample_base']} if idle else None,
        'limits': {name: values[name] for name in ['thread_limit', 'stack_words', 'scan_words', 'return_limit', 'object_limit', 'waiter_limit']},
        'ee_kernel': {'input_sha256': sha(kernel_before), 'output_sha256': sha(kernel_after)},
        'copied_sources': tree,
        'inputs_sha256': {name: sha((HERE / name).read_bytes()) for name in FILES},
        'scope': 'read-only EE/IOP thread, wait-object and SIF queue records; no scheduler, memory, deadline, RPC or wake change',
    }
