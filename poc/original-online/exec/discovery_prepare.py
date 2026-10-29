"""Compose the existing generic resident-name lookup into a copied runtime."""
import hashlib
import json
from pathlib import Path


def replace_once(text, old, new):
    if text.count(old) != 1: raise ValueError('Resident lookup anchor changed: ' + old[:100])
    return text.replace(old, new)


def prepare(tree, helper):
    iop = Path(tree) / 'runtime/src/iop'
    if (iop / 'module_names.hpp').exists(): raise ValueError('Resident-name lookup already prepared')
    kernel, sif = iop / 'kernel.cpp', iop / 'sif.cpp'
    originals = {p.name: p.read_bytes() for p in [kernel, sif]}
    k = '#include "module_names.hpp"\n' + replace_once(kernel.read_text(),
        'g_modules[id] = Module{id, name, base, total, base + entry, base + gp};',
        'g_modules[id] = Module{id, ::original_online::irx_module_name(data, name), base, total, base + entry, base + gp};')
    k = replace_once(k, '            const Module &m = g_modules[id];\n            free(m.base);',
        '            const Module &m = g_modules[id];\n            free(m.base);\n            g_modules.erase(id);')
    if k.count('    g_modules.clear();') != 1: raise ValueError('Original registry reset changed')
    signature = 'register_hle_server(0x80000006u, [](std::uint32_t method, std::uint32_t args, std::uint32_t, std::uint32_t ret, std::uint32_t) {'
    s = '#include "module_names.hpp"\n' + replace_once(sif.read_text(), signature,
        signature.replace('args, std::uint32_t,', 'args, std::uint32_t send_size,').replace('ret, std::uint32_t)', 'ret, std::uint32_t recv_size)'))
    s = replace_once(s, '''        if (method == 0x09) {
            store<std::int32_t>(g_ram + ret, -202);
            return true;
        }''', '''        if (method == 0x09) {
            if (recv_size < 4 || ret > kRamSize - 4)
                throw std::runtime_error("Invalid LoadFile09 reply span");
            const auto name = ::original_online::loadfile_name(g_ram, kRamSize, args, send_size);
            const int id = ::original_online::find_module(iop::kernel::modules(), name);
            store<std::int32_t>(g_ram + ret, id);
            watch_span(ret, 4, "sif:loadfile09");
            return true;
        }''')
    # Helpers stay in their original global namespace. The transport adapter has
    # a separate ps2::iop::original_online namespace in this same composed tree.
    data = Path(helper).read_bytes()
    kernel.write_text(k); sif.write_text(s); (iop / 'module_names.hpp').write_bytes(data)
    sha = lambda data: hashlib.sha256(data).hexdigest()
    manifest = {'profile': 'original-online-resident-module-lookup-v1', 'network_service': False,
        'upstream_sha256': {name: sha(data) for name, data in originals.items()},
        'files_sha256': {name: sha((iop / name).read_bytes()) for name in ['kernel.cpp', 'sif.cpp', 'module_names.hpp']},
        'replaced_sources': ['runtime/src/iop/kernel.cpp', 'runtime/src/iop/sif.cpp'], 'compiled_sources': [],
        'semantics': 'Actual resident .iopmod name -> module id; missing -> -202; original reset clears registry; nonresident entries removed'}
    (Path(tree) / 'resident-module-lookup-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest
