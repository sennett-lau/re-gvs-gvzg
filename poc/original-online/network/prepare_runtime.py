#!/usr/bin/env python3
"""Compose an opt-in AVETCP adapter into a private copy of the runtime."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil

HERE = Path(__file__).resolve().parent
SOURCES = ['native_transport.hpp', 'native_transport.cpp', 'transport_bridge.h', 'transport_bridge.cpp','sha256.hpp','sha256.cpp']

def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def replace_once(text, old, new):
    if text.count(old) != 1:
        raise ValueError('Runtime integration anchor mismatch: ' + old)
    return text.replace(old, new)

def prepare(tree, quiet_trace=False):
    tree = Path(tree)
    iop = tree / 'runtime/src/iop'
    if (iop / 'native_transport.cpp').exists():
        raise ValueError('Runtime already has an Online transport adapter')
    paths = [iop / 'cpu.cpp', iop / 'kernel.cpp']
    before = {str(p.relative_to(tree)): digest(p) for p in paths}
    cpu, kernel = [p.read_text() for p in paths]
    cpu = '#include "native_transport.hpp"\n' + cpu
    cpu = replace_once(cpu, '        const std::uint32_t pc = c.pc;',
        '        if (original_online::intercept(c)) {\n'
        '            if (kernel::switch_pending()) return;\n'
        '            continue;\n'
        '        }\n        const std::uint32_t pc = c.pc;')
    kernel = '#include "native_transport.hpp"\n' + kernel
    kernel = replace_once(kernel, '    g_libraries[name] = table;',
        '    original_online::library(name, table);\n    g_libraries[name] = table;')
    kernel = replace_once(kernel, '    const std::string name = module_name_of(path);',
        '    const bool online_verified = original_online::verify_module(data, path);\n    const std::string name = module_name_of(path);')
    kernel = replace_once(kernel, '    std::memset(ram_ptr(base), 0, total);',
        '    original_online::authorize_module(base, online_verified);\n    std::memset(ram_ptr(base), 0, total);')
    kernel = replace_once(kernel, 'void boot() {', 'void boot() {\n    original_online::reset();')
    kernel = replace_once(kernel, '            deliver_interrupts();',
        '            original_online::pump();\n            deliver_interrupts();')
    # Host connections cannot be serialized. Refuse state operations rather than
    # silently revive stale tickets or produce a false connected save state.
    kernel = replace_once(kernel, 'void state(ps2::state::Stream &s) {\n    s.tag("iop");',
        'void state(ps2::state::Stream &s) {\n'
        '    throw std::runtime_error("savestates are unavailable in the experimental Online transport profile");\n    s.tag("iop");')
    for path, text in zip(paths, (cpu, kernel)):
        path.write_text(text)
    for name in SOURCES:
        shutil.copy2(HERE / name, iop / name)
    if quiet_trace:
        # Opt-in long-run profile: per-call traces become periodic counters.
        source = iop / 'native_transport.cpp'
        source.write_text('#define ORIGINAL_ONLINE_QUIET_TRACE 1\n' + source.read_text())
    manifest = {
        'profile': 'experimental-original-avetcp-primitives-v1',
        'quiet_trace': quiet_trace,
        'upstream_sha256': before,
        'files_sha256': {str(p.relative_to(tree)): digest(p) for p in [*paths, *(iop/n for n in SOURCES)]},
        'compiled_sources': ['runtime/src/iop/' + n for n in ['cpu.cpp', 'kernel.cpp', 'native_transport.cpp', 'transport_bridge.cpp','sha256.cpp']],
        'replaces_sources': ['runtime/src/iop/cpu.cpp', 'runtime/src/iop/kernel.cpp'],
        'includes': ['runtime/src/iop'],
        'exports': [],
        'exported_runtime_methods': ['HEAPU8'],
        'js_modules': ['wasm_host.mjs', 'async_adapter.mjs', 'transport.mjs'],
        'install': 'installOriginalOnlineBridge(Module, config) on main thread before callMain, game profile only',
        'coverage': 'original allocator/waits plus active-open, selected send/receive; unsupported owned operations stop with trace',
        'actual_original_client_executed': False,
        'input_gate': 'raw AVETCP SHA256 enforced in load_module_buffer before relocation; library base must be authorized',
    }
    (tree / 'original-online-network-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('tree', type=Path)
    parser.add_argument('--quiet-trace', action='store_true', help='count per-call traces instead of printing them')
    args = parser.parse_args()
    print(json.dumps(prepare(args.tree, args.quiet_trace), indent=2))
