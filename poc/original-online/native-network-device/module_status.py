"""Generic runtime candidate: report each IRX's .iopmod version through modload ReferModuleStatus."""
import hashlib
import json
import shutil
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROFILE = 'original-online-module-status-v1'

# ModuleStatus is name[56], u16 version, u16 flags, int id, entry, gp, text address and sizes. The
# runtime wrote the module id where the version belongs, so a driver's version check read the id.
KERNEL_PATCHES = [
    ('#include "kernel.hpp"\n', '#include "kernel.hpp"\n#include "module_status.hpp"\n'),
    ('std::map<int, Module> g_modules;\n', 'std::map<int, Module> g_modules;\nstd::map<int, std::uint16_t> g_module_versions;\n'),
    ('const std::map<int, Module> &modules() { return g_modules; }\n',
     '''const std::map<int, Module> &modules() { return g_modules; }

std::uint16_t module_version(int id) {
    const auto it = g_module_versions.find(id);
    return it == g_module_versions.end() ? 0 : it->second;
}
'''),
    ('    g_modules.clear();\n', '    g_modules.clear();\n    g_module_versions.clear();\n'),
    ('''    if (g_trace_modules) std::fprintf(stderr, "[iop] module %d %s at 0x%08X size 0x%X entry 0x%08X\\n", id, name.c_str(), base, total, base + entry);''',
     '''    if (g_trace_modules) std::fprintf(stderr, "[iop] module %d %s at 0x%08X size 0x%X entry 0x%08X\\n", id, name.c_str(), base, total, base + entry);
    g_module_versions[id] = elf.u16(iopmod + 24);'''),
    ('    s.string_map(g_libraries, [&s](std::uint32_t &table) { s.pod(table); });\n',
     '    s.map(g_module_versions);\n    s.string_map(g_libraries, [&s](std::uint32_t &table) { s.pod(table); });\n'),
]
LIBS_PATCHES = [
    ('#include "kernel.hpp"\n', '#include "kernel.hpp"\n#include "module_status.hpp"\n'),
    ('''        write32(p + 0x38, static_cast<std::uint32_t>(it->first));''',
     '''        write16(p + 0x38, module_version(it->first));
        write32(p + 0x3C, static_cast<std::uint32_t>(it->first));'''),
]
FILES = {'kernel.cpp': KERNEL_PATCHES, 'libs.cpp': LIBS_PATCHES}


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def prepare(tree):
    """Patch runtime/src/iop/{kernel,libs}.cpp in a copied tree and return a manifest."""
    iop = Path(tree) / 'runtime/src/iop'
    if (iop / 'module_status.hpp').exists():
        raise ValueError('Runtime tree already has the module status fix')
    before = {name: sha(iop / name) for name in FILES}
    texts = {}
    for name, patches in FILES.items():
        text = (iop / name).read_text()
        for old, new in patches:
            if text.count(old) != 1:
                raise ValueError(f'{name} changed near: {old.splitlines()[0].strip()}')
            text = text.replace(old, new)
        texts[name] = text
    for name, text in texts.items():
        (iop / name).write_text(text)
    shutil.copy2(HERE / 'module_status.hpp', iop / 'module_status.hpp')
    manifest = {
        'profile': PROFILE,
        'upstream_sha256': before,
        'files_sha256': {name: sha(iop / name) for name in [*FILES, 'module_status.hpp']},
        'replaced_sources': [f'runtime/src/iop/{name}' for name in FILES],
        'compiled_sources': [],
        'savestate': 'module versions are serialized after the module table',
    }
    (Path(tree) / 'module-status-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest
