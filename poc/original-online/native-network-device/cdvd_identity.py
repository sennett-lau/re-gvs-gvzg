"""Opt-in runtime candidate: cdvdman exports 80 (sceCdReadGUID) and 82 (sceCdReadModelID) as the game's
DNAS280.IMG CDVDMAN has them.

The game reboots the IOP with cdrom0:\\MODULE\\DNAS280.IMG. Its CDVDMAN implements exports 80 and 82;
the utility's IOPRP280 leaves them stubs that return 0, and the runtime has neither, so a call returns 0
and stores nothing. In a run without them the DNAS IOP module called export 80 and the game then showed a
device information error (-401); with export 80 added, the module called export 82 next. The module's own
branches on these results are not observed.

This patch adds both exports with the retail derivation (cdvd_identity.hpp) from the report sceCdRI
(export 22) already gives: success, status 0 and an all-zero i.LINK ID. sceCdRI keeps that report and
behaves as before. No other export and no per-client identity is added.
"""
import hashlib
import json
import shutil
from pathlib import Path

PROFILE = 'original-online-cdvd-identity-v2'
MARKER = '// original-online-cdvd-identity-v2'
HERE = Path(__file__).resolve().parent

INCLUDES = ('''#include "kernel.hpp"

#include "ps2/disc.hpp"

#include "ps2/state.hpp"
''', '''#include "kernel.hpp"

#include "cdvd_identity.hpp"

#include "ps2/disc.hpp"

#include "ps2/state.hpp"
#include "ps2/system.hpp"
''')

PROVIDER = ('''std::uint8_t bcd(int v) { return static_cast<std::uint8_t>(((v / 10) << 4) | (v % 10)); }
''', f'''std::uint8_t bcd(int v) {{ return static_cast<std::uint8_t>(((v / 10) << 4) | (v % 10)); }}

{MARKER}: the report sceCdRI has always given here (success, status 0, all-zero
// i.LINK ID). sceCdReadGUID and sceCdReadModelID derive from the same report, as the original CDVDMAN does.
cdvd_identity::ILinkId read_ilink_id() {{ return {{1, {{}}, 0}}; }}

// A word store sceCdReadGUID or sceCdReadModelID may make: IOP RAM with its mirrors and segment aliases,
// or the scratchpad, exactly as hw.cpp maps them (is_ram, is_scratchpad). Anything else is a device or
// unmapped.
bool guid_store_supported(std::uint32_t a) {{
    const std::uint32_t p = phys(a);
    return p < 0x00800000u || (p & ~0x3FFu) == 0x1F800000u;
}}
''')

EXPORTS = ('''    def("cdvdman", 22, "sceCdRI", [](Cpu &c) {
        for (std::uint32_t i = 0; i < 8; ++i) write8(arg(c, 0) + i, 0);
        if (arg(c, 1)) write32(arg(c, 1), 0);
        c.r[2] = 1;
    });
''', '''    def("cdvdman", 22, "sceCdRI", [](Cpu &c) {
        const auto ilink = read_ilink_id();
        for (std::uint32_t i = 0; i < 8; ++i) write8(arg(c, 0) + i, ilink.id[i]);
        if (arg(c, 1)) write32(arg(c, 1), ilink.stat);
        c.r[2] = static_cast<std::uint32_t>(ilink.result);
    });
    def("cdvdman", 80, "sceCdReadGUID", [](Cpu &c) {
        const std::uint32_t out = arg(c, 0);
        const auto done = cdvd_identity::read_guid(read_ilink_id(), out, guid_store_supported,
                                                   [](std::uint32_t a, std::uint32_t v) { write32(a, v); });
        if (done == cdvd_identity::GuidResult::misaligned) {
            std::fprintf(stderr, "[iop] sceCdReadGUID output %08X is not word aligned\\n", out);
            ps2::halt("sceCdReadGUID output is not word aligned");
        }
        if (done == cdvd_identity::GuidResult::unsupported) {
            std::fprintf(stderr, "[iop] sceCdReadGUID output %08X..%08X is not IOP RAM or scratchpad\\n", out, out + 7u);
            ps2::halt("sceCdReadGUID output is not IOP RAM or scratchpad");
        }
        c.r[2] = done == cdvd_identity::GuidResult::stored ? 1u : 0u;
    });
    def("cdvdman", 82, "sceCdReadModelID", [](Cpu &c) {
        const std::uint32_t out = arg(c, 0);
        const auto done = cdvd_identity::read_model_id(read_ilink_id(), out, guid_store_supported,
                                                       [](std::uint32_t a, std::uint32_t v) { write32(a, v); });
        if (done == cdvd_identity::GuidResult::misaligned) {
            std::fprintf(stderr, "[iop] sceCdReadModelID output %08X is not word aligned\\n", out);
            ps2::halt("sceCdReadModelID output is not word aligned");
        }
        if (done == cdvd_identity::GuidResult::unsupported) {
            std::fprintf(stderr, "[iop] sceCdReadModelID output %08X..%08X is not IOP RAM or scratchpad\\n", out, out + 3u);
            ps2::halt("sceCdReadModelID output is not IOP RAM or scratchpad");
        }
        c.r[2] = done == cdvd_identity::GuidResult::stored ? 1u : 0u;
    });
''')

# guid_store_supported copies these two hw.cpp rules; a tree with a different address map is refused.
ADDRESS_MAP = ('bool is_ram(std::uint32_t p) { return p < 0x00800000u; }\n',
               'bool is_scratchpad(std::uint32_t p) { return (p & ~0x3FFu) == 0x1F800000u; }\n')

ORIGINAL_REFERENCE = {
    'image': 'cdrom0:\\MODULE\\DNAS280.IMG sha256 15a44eec943a6f00a06274e9e3ae37741e3bd080ee653c8589482abc3483b62a',
    'cdvdman': 'CDVDMAN in DNAS280.IMG, version 0x223, sha256 3606ad9604aa966867f02e23a64d1d962fa0b802c8b982fa20568c803bfd60b5',
    'export_80': '0x4014 calls 0x3EC4(0, out); retail: QueryBootMode(6) (loadcore 12) gives no entry, sceCdRI (export 22 at 0xB514) '
                 'with status preset -1; return 0 if sceCdRI returns 0 or status is nonzero; else sw 0x08004600|id[0] at out, '
                 'sw id[4..7] at out+4, return 1',
    'export_82': '0x4038 calls 0x3EC4(1, out); retail: same sceCdRI call and failure checks, then sw (id word 0 >> 8) at out, return 1',
    'utility_ioprp280': 'NTGUIDVD IOPRP280 CDVDMAN exports 80 and 82 are the shared stub at 0xB938 (return 0)',
}


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def prepare(tree):
    """Patch runtime/src/iop/cdvd.cpp in a copied tree, add cdvd_identity.hpp and return a manifest."""
    iop = Path(tree) / 'runtime/src/iop'
    cdvd = iop / 'cdvd.cpp'
    text = cdvd.read_text()
    if MARKER in text:
        raise ValueError('Runtime tree already has the cdvd identity export')
    if 'cdvdman", 80,' in text or 'cdvdman", 82,' in text or (iop / 'cdvd_identity.hpp').exists():
        raise ValueError('Runtime tree already defines cdvdman export 80 or 82')
    hw = (iop / 'hw.cpp').read_text()
    if any(hw.count(rule) != 1 for rule in ADDRESS_MAP):
        raise ValueError('hw.cpp address map changed')
    before = sha(cdvd)
    for old, new in (INCLUDES, PROVIDER, EXPORTS):
        if text.count(old) != 1:
            raise ValueError(f'cdvd.cpp changed near: {old.splitlines()[0].strip()}')
        text = text.replace(old, new)
    cdvd.write_text(text)
    shutil.copyfile(HERE / 'cdvd_identity.hpp', iop / 'cdvd_identity.hpp')
    manifest = {
        'profile': PROFILE,
        'upstream_sha256': {'cdvd.cpp': before},
        'files_sha256': {'cdvd.cpp': sha(cdvd), 'cdvd_identity.hpp': sha(iop / 'cdvd_identity.hpp')},
        'replaced_sources': ['runtime/src/iop/cdvd.cpp'],
        'added_sources': ['runtime/src/iop/cdvd_identity.hpp'],
        'compiled_sources': [],
        'ilink_id': 'unchanged sceCdRI report: success, status 0, all-zero ID',
        'output_span': 'every output word (two for export 80, one for 82) checked before the first store against hw.cpp is_ram '
                       '(mirrors and aliases) and is_scratchpad; unaligned or unsupported output halts with no store',
        'original_reference': ORIGINAL_REFERENCE,
    }
    (Path(tree) / 'cdvd-identity-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest
