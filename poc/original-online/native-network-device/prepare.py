"""Opt-in virtual DEV9/SMAP adaptor for a copied runtime tree that already has the native card-file slice."""
import hashlib
import json
import importlib.util
import shutil
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROFILE = 'original-online-native-network-device-v1'

# Each replacement must match exactly once in the copied upstream iop/hw.cpp.
HW_PATCHES = [
    ('#include "spu2.hpp"\n', '#include "spu2.hpp"\n#include "dev9.hpp"\n'),
    # Channel 8 completes only after a modelled FIFO transfer; anything else stays busy and is logged.
    ('''    if (ch == 11 || ch == 12) {''', '''    if (ch == 8) {
        if (dev9::dma(d.madr, words, (d.chcr & 1u) != 0)) dma_done(ch);
        return;
    }
    if (ch == 11 || ch == 12) {'''),
    ('''    sio2::reset();
    std::memset(g_ohci, 0, sizeof g_ohci);''', '''    sio2::reset();
    dev9::reset();
    std::memset(g_ohci, 0, sizeof g_ohci);'''),
    ('''std::uint32_t read(std::uint32_t a, unsigned size) {
    if (a >= 0x1F900000u && a < 0x1F900800u) return spu2::read(a, size);''', '''std::uint32_t read(std::uint32_t a, unsigned size) {
    if (dev9::claims(a)) return dev9::read(a, size);
    if (a >= 0x1F900000u && a < 0x1F900800u) return spu2::read(a, size);'''),
    ('''void write(std::uint32_t a, std::uint32_t v, unsigned size) {
    if (a >= 0x1F900000u && a < 0x1F900800u) { spu2::write(a, v, size); return; }''', '''void write(std::uint32_t a, std::uint32_t v, unsigned size) {
    if (dev9::claims(a)) { dev9::write(a, v, size); return; }
    if (a >= 0x1F900000u && a < 0x1F900800u) { spu2::write(a, v, size); return; }'''),
    ('''    s.pod(g_scratchpad);
}''', '''    s.pod(g_scratchpad);
    dev9::state(s);
}'''),
]

SOURCES = ['dev9.hpp', 'dev9.cpp']


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def prepare(tree):
    """Patch runtime/src/iop/hw.cpp in a copied tree prepared by native-storage and return a manifest."""
    iop = Path(tree) / 'runtime/src/iop'
    if not (iop / 'native_storage.cpp').exists():
        raise ValueError('Prepare the native card-file slice first: DEV9.IRX registers dev9x with AddDrv')
    if (iop / 'dev9.cpp').exists():
        raise ValueError('Runtime tree already prepared')
    # SMAP.IRX requires DEV9 2.4 or later from ReferModuleStatus; that generic fix is its own step.
    spec = importlib.util.spec_from_file_location('module_status', HERE / 'module_status.py')
    module_status = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module_status)
    status = None if (iop / 'module_status.hpp').exists() else module_status.prepare(tree)
    files = {'hw.cpp': HW_PATCHES}
    before = {name: sha(iop / name) for name in files}
    texts = {}
    for name, patches in files.items():
        text = (iop / name).read_text()
        for old, new in patches:
            if text.count(old) != 1:
                raise ValueError(f'{name} changed near: {old.splitlines()[0].strip()}')
            text = text.replace(old, new)
        texts[name] = text
    for name, text in texts.items():
        (iop / name).write_text(text)
    for name in SOURCES:
        shutil.copy2(HERE / name, iop / name)
    manifest = {
        'profile': PROFILE,
        'external_link': False,
        'identity': {'dev9_revision': '0x30 (CXD9611)', 'speed_revision': '0x11', 'speed_caps': '0x01 (SMAP)',
                     'phy': 'DP83846A id 0x2000/0x5C20', 'mac': '02:50:53:32:00:01 (locally administered)'},
        'upstream_sha256': before,
        'files_sha256': {name: sha(iop / name) for name in [*files, *SOURCES]},
        'replaced_sources': ['runtime/src/iop/hw.cpp', *(status or {}).get('replaced_sources', [])],
        'compiled_sources': ['runtime/src/iop/dev9.cpp'],
        'module_status': status,
    }
    (Path(tree) / 'native-network-device-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest
