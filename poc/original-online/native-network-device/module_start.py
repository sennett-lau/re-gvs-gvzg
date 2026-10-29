"""Opt-in runtime candidate: module start threads release their stacks, and thread stacks that do not fit fail.

The original MODLOAD (IOPRP280, modload 1.06) creates one loader thread when it starts (stack 0x1000,
priority 8) and runs every module start routine on it: each request restarts that thread, which
returns to dormant when the start routine is done. The runtime instead creates a new thread with a
0x4000-byte stack for each module start and never deletes it, so every module keeps 16 KiB of IOP
memory. It also ignores a failed stack allocation, and the thread then runs with its stack at
address 0.

This patch deletes a start thread when its start routine has returned and the load callback has
run, and makes CreateThread return KE_NO_MEMORY (-400) when the stack does not fit, as the original
does. A module whose start thread cannot be created is not started. Threads that a module creates
are never touched.
"""
import hashlib
import json
from pathlib import Path

PROFILE = 'original-online-module-start-v1'
MARKER = '// original-online-module-start-v1'

CREATE = ('''    t.stack = alloc(t.stack_size, 1);
''', f'''    t.stack = alloc(t.stack_size, 1);
    {MARKER}: like the original CreateThread, a stack that does not fit is KE_NO_MEMORY.
    if (!t.stack) return -400;
''')

# The start thread's exit callback runs with the thread already dormant, after the result is read and
# the caller is told. Both exit paths (the exit stub and ExitThread) moved the callback out of the
# thread first and do not use the thread afterwards, so it can be deleted here.
RELEASE = ('''        if ((result & 3u) == 1u) {
            const Module &m = g_modules[id];
            free(m.base);
        }
    };
''', '''        if ((result & 3u) == 1u) {
            const Module &m = g_modules[id];
            free(m.base);
        }
        // The original runs start routines on one loader thread whose stack stays allocated; this
        // thread served one start, so its stack is released when the start routine has returned.
        const auto self = g_threads.find(tid);
        if (self != g_threads.end() && self->second.status == kDormant) {
            if (self->second.stack) free(self->second.stack);
            g_threads.erase(self);
            if (g_current == tid) g_current = 0;
        }
    };
''')

# The pinned runtime loads and starts in one function; the game build splits them (start_module).
START_VARIANTS = {
    'pinned': ('''    const int tid = create_thread(base + entry, 0x4000u, kDefaultModulePriority, base + gp, 0x02000000u, 0);
    Thread *t = thread(tid);
''', '''    const int tid = create_thread(base + entry, 0x4000u, kDefaultModulePriority, base + gp, 0x02000000u, 0);
    if (tid < 0) {
        // No start stack: the module is not started, and its image and arguments are released.
        free(argv_at);
        free(base);
        g_modules.erase(id);
        return tid;
    }
    Thread *t = thread(tid);
'''),
    'split-load-start': ('''    const int tid = create_thread(m.entry, 0x4000u, kDefaultModulePriority, m.gp, 0x02000000u, 0);
    Thread *t = thread(tid);
''', '''    const int tid = create_thread(m.entry, 0x4000u, kDefaultModulePriority, m.gp, 0x02000000u, 0);
    if (tid < 0) {
        // No start stack: the module stays loaded but is not started; its arguments are released.
        free(argv_at);
        return tid;
    }
    Thread *t = thread(tid);
'''),
}

# In the split form a load that also starts returns the start result, so the caller gets no module id: a
# failed start must not leave the image behind. StartModule on a module loaded earlier keeps it loaded.
SPLIT_LOAD = ('''    return start ? start_module(id, path, args, std::move(done)) : id;
}

std::int32_t start_module(''', '''    if (!start) return id;
    const std::int32_t started = start_module(id, path, args, std::move(done));
    if (started < 0) {
        free(base);
        g_modules.erase(id);
    }
    return started;
}

std::int32_t start_module(''')


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def prepare(tree):
    """Patch runtime/src/iop/kernel.cpp in a copied tree and return a manifest."""
    kernel = Path(tree) / 'runtime/src/iop/kernel.cpp'
    text = kernel.read_text()
    if MARKER in text:
        raise ValueError('Runtime tree already has the module start fix')
    variants = [name for name, (old, _) in START_VARIANTS.items() if text.count(old) == 1]
    if len(variants) != 1:
        raise ValueError('kernel.cpp module start changed')
    before = sha(kernel)
    patches = [CREATE, RELEASE, START_VARIANTS[variants[0]]] + ([SPLIT_LOAD] if variants[0] == 'split-load-start' else [])
    for old, new in patches:
        if text.count(old) != 1:
            raise ValueError(f'kernel.cpp changed near: {old.splitlines()[0].strip()}')
        text = text.replace(old, new)
    kernel.write_text(text)
    manifest = {
        'profile': PROFILE,
        'variant': variants[0],
        'upstream_sha256': {'kernel.cpp': before},
        'files_sha256': {'kernel.cpp': sha(kernel)},
        'replaced_sources': ['runtime/src/iop/kernel.cpp'],
        'compiled_sources': [],
        'original_reference': 'IOPRP280 MODLOAD sha256 4569182f67d2f6966791fdcc9c347808bd272ff53b466210d5ff9854bedac06b: one loader thread (CreateThread at 0xf8, stack 0x1000, priority 8), restarted per request (StartThread at 0x7f4); start routines run on it (jalr at 0x1120)',
    }
    (Path(tree) / 'module-start-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest
