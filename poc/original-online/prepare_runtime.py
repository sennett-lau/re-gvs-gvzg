"""Optional, isolated module-discovery slice; no network service is fabricated."""
import hashlib
import json
import re
from pathlib import Path


def prepare(source, output):
    source, output = Path(source), Path(output)
    if output.exists():
        raise ValueError('Use a new runtime output directory')
    kernel = (source / 'runtime/src/iop/kernel.cpp').read_text()
    sif = (source / 'runtime/src/iop/sif.cpp').read_text()
    old = 'g_modules[id] = Module{id, name, base, total, base + entry, base + gp};'
    if kernel.count(old) != 1:
        raise ValueError('Module registry insertion changed')
    kernel = '#include "module_names.hpp"\n' + kernel.replace(old,
        'g_modules[id] = Module{id, original_online::irx_module_name(data, name), base, total, base + entry, base + gp};')
    old = '''            const Module &m = g_modules[id];
            free(m.base);'''
    if kernel.count(old) != 1:
        raise ValueError('Nonresident module cleanup changed')
    kernel = kernel.replace(old, old + '\n            g_modules.erase(id);')
    signature = 'register_hle_server(0x80000006u, [](std::uint32_t method, std::uint32_t args, std::uint32_t, std::uint32_t ret, std::uint32_t) {'
    old = '''        if (method == 0x09) {
            store<std::int32_t>(g_ram + ret, -202);
            return true;
        }'''
    if sif.count(signature) != 1 or sif.count(old) != 1:
        raise ValueError('LoadFile09 source changed')
    sif = '#include "module_names.hpp"\n' + sif.replace(signature,
        signature.replace('args, std::uint32_t,', 'args, std::uint32_t send_size,').replace(
            'ret, std::uint32_t)', 'ret, std::uint32_t recv_size)'))
    sif = sif.replace(old, '''        if (method == 0x09) {
            if (recv_size < 4 || ret > kRamSize - 4)
                throw std::runtime_error("Invalid LoadFile09 reply span");
            const auto name = original_online::loadfile_name(g_ram, kRamSize, args, send_size);
            const int id = original_online::find_module(iop::kernel::modules(), name);
            store<std::int32_t>(g_ram + ret, id);
            watch_span(ret, 4, "sif:loadfile09");
            return true;
        }''')
    output.mkdir(parents=True)
    for name, text in [('kernel.cpp', kernel), ('sif.cpp', sif)]:
        # Preserve the original source's quoted-include resolution when copied.
        # runtime/src and runtime/src/iop both contain kernel.hpp and hw.hpp.
        origin = source.resolve() / 'runtime/src/iop'
        def original_include(match):
            target = origin / match.group(1)
            return '#include "' + str(target.resolve()) + '"' if target.is_file() else match.group(0)
        text = re.sub(r'#include "([^"]+)"', original_include, text)
        (output / name).write_text(text)
    (output / 'module_names.hpp').write_bytes(Path(__file__).with_name('module_names.hpp').read_bytes())
    manifest = {'profile': 'original-online-module-discovery-v1', 'network_service': False,
        'files_sha256': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in output.iterdir()}}
    (output / 'runtime-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest
