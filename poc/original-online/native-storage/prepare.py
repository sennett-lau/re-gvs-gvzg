"""Opt-in native card-file slice for a copied runtime tree; the pinned vendor tree is never edited."""
import hashlib
import json
import shutil
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROFILE = 'original-online-native-storage-v1'

# Each replacement must match exactly once in the copied upstream source.
IO_PATCHES = [
    ('#include "kernel.hpp"\n', '#include "kernel.hpp"\n#include "native_storage.hpp"\n'),
    ('        if (!g_files.count(fd)) return fd;', '        if (!g_files.count(fd) && !native_storage::reserved(fd)) return fd;'),
    ('''int close(int fd) { return g_files.erase(fd) ? 0 : kBadFd; }''',
     '''int close(int fd) { return g_files.erase(fd) ? 0 : kBadFd; }

bool host_fd_in_use(int fd) { return g_files.count(fd) != 0; }'''),
    # Disc and ROM files are read-only; the original IOMAN returns EBADF for a descriptor without
    # write mode instead of reporting the byte count as written.
    ('''    return g_files.count(fd) ? static_cast<int>(size) : kBadFd;''',
     '''    if (g_files.count(fd)) std::fprintf(stderr, "[io] write of %u bytes to read-only fd %d rejected\\n", size, fd);
    return kBadFd;'''),
    ('''void def(const char *library, std::uint32_t index, const char *name, std::function<void(Cpu &)> body) {
    register_hle(library, index, [library, name, body = std::move(body)](Cpu &c) {''',
     '''void def(const char *library, std::uint32_t index, const char *name, std::function<void(Cpu &)> body) {
    body = native_storage::wrap(index, std::move(body));
    register_hle(library, index, [library, name, body = std::move(body)](Cpu &c) {'''),
    ('''    io::reset();
    register_hle_library("ioman", 0x0104);''', '''    io::reset();
    native_storage::reset();
    register_hle_library("ioman", 0x0104);'''),
]

# Both EE fileio write handlers ask the same descriptor layer instead of echoing the request size.
SIF_PATCHES = [
    ('''        fileio_reply(args, 3, {word(20), 0, 0, 0});''',
     '''        fileio_reply(args, 3, {static_cast<std::uint32_t>(iop::io::write(static_cast<int>(word(12)), nullptr, word(20))), 0, 0, 0});'''),
    ('''        case 3: result = static_cast<std::int32_t>(word(2)); break;''',
     '''        case 3: result = iop::io::write(static_cast<int>(word(0)), nullptr, word(2)); break;'''),
]

# The debounced card flush and the explicit checkpoint share one checked writer. The card stays dirty
# until the complete image has been written, renamed into place and read back unchanged.
SIO2_PATCHES = [
    ('''void flush_cards() {
    Card &c = g_card;
    if (!c.dirty || ++c.quiet < 50) return;
    c.dirty = false;
    std::ofstream out(g_options.memcard_path, std::ios::binary | std::ios::trunc);
    if (out) out.write(reinterpret_cast<const char *>(c.data.data()), static_cast<std::streamsize>(c.data.size()));
    if (!out) {
        std::fprintf(stderr, "[mc] cannot write %s\\n", g_options.memcard_path.c_str());
        return;
    }
    out.close();
    if (g_options.on_memcard_saved) g_options.on_memcard_saved();
}''', '''int checkpoint_cards() {
    Card &c = g_card;
    const std::string &path = g_options.memcard_path;
    if (!c.present || path.empty()) {
        std::fprintf(stderr, "[mc] no card image to write\\n");
        return -1;
    }
    const std::string partial = path + ".partial";
    std::ofstream out(partial, std::ios::binary | std::ios::trunc);
    out.write(reinterpret_cast<const char *>(c.data.data()), static_cast<std::streamsize>(c.data.size()));
    out.close();
    if (!out || std::rename(partial.c_str(), path.c_str()) != 0) {
        std::fprintf(stderr, "[mc] cannot write %s\\n", path.c_str());
        std::remove(partial.c_str());
        return -1;
    }
    std::ifstream in(path, std::ios::binary);
    std::vector<std::uint8_t> stored(c.data.size() + 1);
    in.read(reinterpret_cast<char *>(stored.data()), static_cast<std::streamsize>(stored.size()));
    if (static_cast<std::size_t>(in.gcount()) != c.data.size() || !std::equal(c.data.begin(), c.data.end(), stored.begin())) {
        std::fprintf(stderr, "[mc] %s does not match the card after writing\\n", path.c_str());
        return -1;
    }
    c.dirty = false;
    c.quiet = 0;
    return 0;
}

void flush_cards() {
    Card &c = g_card;
    if (!c.dirty || ++c.quiet < 50) return;
    if (checkpoint_cards() == 0 && g_options.on_memcard_saved) g_options.on_memcard_saved();
}'''),
]

SOURCES = ['native_storage.hpp', 'native_storage.cpp']


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def patch(text, patches, name):
    for old, new in patches:
        if text.count(old) != 1:
            raise ValueError(f'{name} changed near: {old.splitlines()[0].strip()}')
        text = text.replace(old, new)
    return text


def prepare(tree):
    """Patch runtime/src/iop in a copied upstream tree and return its manifest."""
    iop = Path(tree) / 'runtime/src/iop'
    if (iop / 'native_storage.cpp').exists():
        raise ValueError('Runtime tree already prepared')
    io, sif, sio2 = iop / 'io.cpp', iop / 'sif.cpp', iop / 'sio2.cpp'
    before = {path.name: sha(path) for path in (io, sif, sio2)}
    texts = {io: patch(io.read_text(), IO_PATCHES, 'io.cpp'), sif: patch(sif.read_text(), SIF_PATCHES, 'sif.cpp'),
             sio2: patch(sio2.read_text(), SIO2_PATCHES, 'sio2.cpp')}
    for path, text in texts.items():
        path.write_text(text)
    for name in SOURCES:
        shutil.copy2(HERE / name, iop / name)
    manifest = {
        'profile': PROFILE,
        'ioman_state': 'file/device records in IOP kernel memory; one frame below the calling thread stack per driver call',
        'fabricated_results': False,
        'upstream_sha256': before,
        'files_sha256': {name: sha(iop / name) for name in ['io.cpp', 'sif.cpp', 'sio2.cpp', *SOURCES]},
        'replaced_sources': ['runtime/src/iop/io.cpp', 'runtime/src/iop/sif.cpp', 'runtime/src/iop/sio2.cpp'],
        'compiled_sources': ['runtime/src/iop/native_storage.cpp'],
    }
    (Path(tree) / 'native-storage-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest
