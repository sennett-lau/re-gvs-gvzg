#!/usr/bin/env python3
"""End a returned EE thread through the runtime's own ExitThread path in a copied kernel."""
import hashlib

PROFILE = 'original-exec-thread-return-exit-v1'
MARKER = 'original_exec_thread_return'
SERVICE = 'void service(Cpu &c) {\n    if (g_in_handler) return;\n'
# The runtime starts each thread with kIdle as its return address. A thread whose
# entry function returns therefore reaches kIdle while still current and running.
ANCHORS = [
    '    t.context.r[31].sd[0] = static_cast<std::int32_t>(kIdle);\n',
    'void exit_current(Cpu &c, bool remove) {\n    Thread *t = current();\n    if (!t) return;\n    t->status = kDormant;\n',
    '    case 0x23: exit_current(c, false); break;\n',
    '    if (g_reschedule || c.pc == kIdle) reschedule(c);\n',
]
RECORD = r'''void original_exec_thread_return(const Thread &t) {
    static unsigned records = 0;
    if (records >= 64) return;
    ++records;
    std::fprintf(stderr, "[original-exec-thread-return] {\"record\":%u,\"limit\":64,\"thread\":%d,\"entry\":%u,\"priority\":%d,"
        "\"v0\":%u,\"sp\":%u,\"ee_cycles\":%llu,\"action\":\"exit_current(remove=false)\"}\n",
        records, t.id, t.entry, t.priority, g_cpu.r[2].w[0], g_cpu.r[29].w[0], static_cast<unsigned long long>(ps2::now()));
}

'''
EXIT = '''    if (c.pc == kIdle) {
        // Original PS2 threads that return from their entry end as ExitThread.
        if (Thread *t = current(); t && t->status == kRun) {
            original_exec_thread_return(*t);
            exit_current(c, false);
        }
    }
'''


def sha(text):
    return hashlib.sha256(text.encode()).hexdigest()


def prepare_kernel(text):
    if MARKER in text: raise ValueError('Thread-return exit already present')
    if text.count(SERVICE) != 1: raise ValueError('EE kernel service anchor absent or ambiguous')
    for anchor in ANCHORS:
        if text.count(anchor) != 1: raise ValueError('Thread-return anchor absent or ambiguous: ' + anchor.strip()[:80])
    return text.replace(SERVICE, RECORD + SERVICE + EXIT)


def manifest(before, after):
    return {'profile': PROFILE, 'image': 'game', 'ee_kernel': {'input_sha256': sha(before), 'output_sha256': sha(after)},
            'behavior': 'At EE kernel service, a current running thread at kIdle (its entry returned to the start RA) '
                        'takes the existing syscall 0x23 ExitThread path: dormant, then reschedule.',
            'records': 'first 64 [original-exec-thread-return] lines',
            'scope': 'copied EE kernel only; no guest memory, semaphore, RPC, network or state change'}
