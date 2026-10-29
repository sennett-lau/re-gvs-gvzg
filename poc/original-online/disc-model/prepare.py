"""Opt-in command75 reference model in a copied runtime; no vendor mutation."""
import hashlib
import json
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROFILE = 'original-online-disc-model-pcsx2-command75-v1'
REFERENCE = {
    'project': 'PCSX2',
    'commit': '33127ad0df121e5b831494c389068ed9f9f3ad4b',
    'url': 'https://github.com/PCSX2/pcsx2/blob/33127ad0df121e5b831494c389068ed9f9f3ad4b/pcsx2/CDVD/CDVD.cpp',
    'sha256': '3d5133209f33ba36747d5ec9637775259d9bcd948fafb41ab62527c6befb11c4',
    'scope': 'Behavioral reference only; no GPL source copied; modeled output is not physical disc authentication data',
}
SOURCES = ['model.hpp', 'model.cpp', 'adapter.inc']


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def replace(text, old, new):
    if text.count(old) != 1:
        raise ValueError('Disc model source anchor absent or ambiguous: ' + old[:90])
    return text.replace(old, new)


DECL = '''
// Experimental model-only exact reader. Existing read() semantics unchanged.
std::uint64_t model_media_epoch();
std::uint64_t model_media_bytes();
bool model_ready(std::uint64_t offset, std::size_t bytes);
bool model_read_exact(std::uint64_t offset, std::uint8_t* out, std::size_t bytes);
'''
READER = '''
std::uint64_t model_media_epoch() { return g_model_available ? g_model_epoch : 0; }
std::uint64_t model_media_bytes() { return g_model_available ? g_size : 0; }
bool model_ready(std::uint64_t offset, std::size_t bytes) {
    return g_model_available && g_reader && offset <= g_size && bytes <= g_size - offset &&
        (!g_probe || g_probe(offset, bytes));
}
bool model_read_exact(std::uint64_t offset, std::uint8_t* out, std::size_t bytes) {
    if (!g_model_available || !g_reader || !out || !bytes || offset > g_size || bytes > g_size - offset) return false;
    return g_reader(offset, out, bytes) == bytes;
}
'''


def prepare(tree):
    tree = Path(tree)
    names = ['runtime/src/iop/cdvd.cpp', 'runtime/src/iop/kernel.hpp',
             'runtime/include/ps2/disc.hpp', 'runtime/src/disc.cpp']
    texts = {name: (tree / name).read_text() for name in names}
    if any('disc_model' in text or 'model_media_epoch' in text or 'kJobDiscModel' in text for text in texts.values()):
        raise ValueError('Disc model already prepared')
    hw = (tree / 'runtime/src/iop/hw.cpp').read_text()
    for anchor in ['bool is_ram(std::uint32_t p) { return p < 0x00800000u; }',
                   'bool is_scratchpad(std::uint32_t p) { return (p & ~0x3FFu) == 0x1F800000u; }']:
        if hw.count(anchor) != 1: raise ValueError('Disc model IOP output map changed')
    if '"cdvdman", 79,' in texts[names[0]]: raise ValueError('cdvdman export79 already defined')
    cdvd = '#include "model.hpp"\n#include "ps2/system.hpp"\n' + texts[names[0]]
    anchor = 'bool start_read(std::uint32_t lsn, std::uint32_t sectors, std::uint32_t buffer, std::uint32_t mode, bool ee_memory);'
    cdvd = replace(cdvd, anchor, anchor + '\n\n#include "adapter.inc"')
    cdvd = replace(cdvd, '    g_cd = CdState{};', '    g_cd = CdState{};\n    g_disc_model = {};\n    register_job(kJobDiscModel, disc_model_poll);')
    cdvd = replace(cdvd, '        g_cd.sync_waiters.push_back(current()->id);',
        '        if (disc_model_sync(c)) return;\n        g_cd.sync_waiters.push_back(current()->id);')
    cdvd = replace(cdvd, '    def("cdvdman", 78, "sceCdPOffCallback", [](Cpu &c) { c.r[2] = 0; });',
        '    def("cdvdman", 78, "sceCdPOffCallback", [](Cpu &c) { c.r[2] = 0; });\n'
        '    def("cdvdman", 79, "sceCdReadDiskID", disc_model_begin);')
    cdvd = replace(cdvd, '    s.tag("cdvd");',
        '    throw std::runtime_error("disc-model profile does not support machine snapshots");\n    s.tag("cdvd");')
    texts[names[0]] = cdvd
    texts[names[1]] = replace(texts[names[1]], '    kJobCount\n', '    kJobDiscModel,\n    kJobCount\n')
    texts[names[2]] = replace(texts[names[2]], 'bool is_open();', 'bool is_open();\n' + DECL)
    disc = replace(texts[names[3]], 'Reader g_reader;', 'Reader g_reader;\nstd::uint64_t g_model_epoch = 0;\nbool g_model_available = false;')
    disc = replace(disc, '    g_file = std::fopen(path.c_str(), "rb");',
        '    ++g_model_epoch; g_model_available = false;\n    g_file = std::fopen(path.c_str(), "rb");')
    disc = replace(disc, '    g_reader = std::move(reader);',
        '    ++g_model_epoch; g_model_available = false;\n    g_reader = std::move(reader);')
    disc = replace(disc, '    return true;\n}\n\nbool is_open()',
        '    g_model_available = bool(g_reader);\n    return true;\n}\n\n' + READER + '\nbool is_open()')
    texts[names[3]] = disc
    targets = [(tree / 'runtime/src/iop' / name, (HERE / name).read_bytes()) for name in SOURCES]
    if any(path.exists() for path, _ in targets): raise ValueError('Disc model helper destination already exists')
    before = {name: sha(tree / name) for name in names}
    # Validate every source anchor before the first write.
    for name, text in texts.items(): (tree / name).write_text(text)
    for path, data in targets: path.write_bytes(data)
    manifest = {
        'profile': PROFILE, 'reference': REFERENCE,
        'upstream_sha256': before,
        'files_sha256': {name: sha(tree / name) for name in names},
        'helpers_sha256': {name: sha(HERE / name) for name in SOURCES},
        # The added JobKind changes g_jobs capacity in the IOP kernel.
        'replaced_sources': ['runtime/src/iop/cdvd.cpp', 'runtime/src/iop/kernel.cpp', 'runtime/src/disc.cpp'],
        'compiled_sources': ['runtime/src/iop/model.cpp'],
        'limits': ['HLE export79, not physical MECHACON or IRQ/timing emulation',
                   'No machine snapshots; fresh process and IOP reset clear pending model state',
                   'No model cache; mount epoch invalidates requests; mounted reader must remain immutable between open calls',
                   'All boot bytes compared to the isolated host verified /game/core.elf; not a whole-disc hash',
                   'Existing CD read delay and 1ms polling; 30 guest-second host-readiness deadline is experimental',
                   'Invalid output span halts before any write; valid output clears in original descending byte order'],
    }
    (tree / 'disc-model-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest
