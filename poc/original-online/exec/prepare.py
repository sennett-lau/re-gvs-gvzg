#!/usr/bin/env python3
"""Prepare explicit overrides; never mutate pinned runtime or existing hosts."""
import argparse
import datetime
import hashlib
import json
from pathlib import Path

HERE = Path(__file__).resolve().parent
HASHES = {
    'game': '294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6',
    'utility': '8109d5bb29a16fac1f417098ac551364d232df36feb1d7e9fa8134c81b8b6cec',
}


def replace_once(text, old, new):
    if text.count(old) != 1:
        raise ValueError('Source anchor absent or ambiguous: ' + old[:100])
    return text.replace(old, new)


def prepare(kernel, host):
    kernel = '#include "runtime.hpp"\n' + replace_once(
        kernel, '    case 0x06: case 0x07: halt("program asked to run another executable"); break;',
        '    case 0x06: original_exec::request(c, pc, g_current);\n'
        '    case 0x07: halt("program asked to run another executable"); break;')
    kernel = replace_once(kernel, '            st32(args, used);',
        '            st32(args, used);\n'
        '            original_exec::observe_startup(args, pc, g_current);')
    host = '#include "runtime.hpp"\n' + replace_once(host, '    ps2::run();',
        '    try { ps2::run(); }\n'
        '    catch (original_exec::Transition& transition) {\n'
        '        original_exec::after_unwind(transition);\n'
        '        return nullptr;\n'
        '    }')
    old_halt = '''    EM_ASM({
        if (typeof Module.onHalt === 'function')
            Module.onHalt(UTF8ToString($0));
    }, ps2::halt_reason().c_str());'''
    new_halt = '''    MAIN_THREAD_ASYNC_EM_ASM({
        if (typeof Module.onHalt === 'function')
            Module.onHalt(UTF8ToString($0));
    }, ps2::halt_reason().c_str());'''
    if host.count(old_halt) + host.count(new_halt) != 1:
        raise ValueError('Original halt callback absent or ambiguous')
    host = host.replace(old_halt, new_halt)
    host = replace_once(host, '''        std::fprintf(stderr, "cannot load the game executable\\n");
        return nullptr;''', '''        std::fprintf(stderr, "cannot load the game executable\\n");
        MAIN_THREAD_ASYNC_EM_ASM({
            if (typeof Module.onHalt === 'function') Module.onHalt('cannot load the game executable');
        });
        return nullptr;''')
    return kernel, host


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['kernel', 'host', 'elf', 'output']:
        parser.add_argument('--' + name, type=Path, required=True)
    parser.add_argument('--image', choices=HASHES, required=True)
    args = parser.parse_args()
    if args.output.exists():
        parser.error('Use a new output directory')
    if sha(args.elf) != HASHES[args.image]:
        parser.error('Unsupported executable fingerprint')
    # Validate every anchor before creating output.
    kernel, host = prepare(args.kernel.read_text(), args.host.read_text())
    args.output.mkdir(parents=True)
    for name, text in [('kernel.cpp', kernel), ('web.cpp', host)]:
        (args.output / name).write_text(text)
    shell = (HERE / 'frame.html').read_text().replace('__ORIGINAL_EXEC_IMAGE__', args.image)
    shell = shell.replace('__ORIGINAL_EXEC_SHA256__', HASHES[args.image])
    shell = shell.replace('__ORIGINAL_EXEC_NETWORK__', 'false')
    (args.output / 'frame.html').write_text(shell)
    manifest = {
        'profile': 'experimental-original-loadexec-documents-v1',
        'prepared_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'image': args.image, 'elf_sha256': HASHES[args.image],
        'inputs_sha256': {str(p.resolve()): sha(p) for p in [args.kernel, args.host, args.elf]},
        'overrides_sha256': {p.name: sha(p) for p in args.output.iterdir()},
        'exec_sources_sha256': {p.name: sha(p) for p in HERE.iterdir() if p.is_file()},
        'extra_sources': [str(HERE / name) for name in ['runtime.cpp', 'web_notify.cpp']],
        'include_directory': str(HERE),
        'compile_define': 'ORIGINAL_EXEC_IMAGE="' + args.image + '"',
        'required_storage_symbol': 'ps2exec_checkpoint_card',
        'required_runtime_exports': ['FS', 'PThread', 'callMain', 'HEAPU8'],
        'shell': str((args.output / 'frame.html').resolve()),
        'web_assets': ['frame.mjs', 'session.mjs', 'audio-worklet.js'],
        'limits': ['Source preparation only; no game execution or round-trip proof',
                   'Fresh EE/IOP machine is experimental, not hardware lifecycle equivalence'],
    }
    (args.output / 'exec-preparation.json').write_text(json.dumps(manifest, indent=2) + '\n')


if __name__ == '__main__':
    main()
