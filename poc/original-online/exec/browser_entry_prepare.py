#!/usr/bin/env python3
"""Export regenerated original browser.bin units with main-executable direct-call entries."""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct

NAME = '0117F000_MWO_D4AF0758'
PREFIX = 'm_' + NAME
BASE, SIZE = 0x0117F000, 0x00094A80
PROFILE = 'original-online-browser-overlay-entries-v1'
ARTIFACT_SHA = 'f06fd3dfb5022e46b8fab3705f814e5ad2dfc24ec9bd2bcc8687315531a07780'
BASELINE_TABLE_SHA = 'fb1c2785d06b8b5f1b3cf31b42cb09e05ecd952536a43879638fddc26fdd1117'
BASELINE_HEADER_SHA = 'ab64f120a13e98fec32ba09249db3b7f7d8bfd97a9a7abdaed8e4c0365912feb'
# Original main-executable `jal` sites: 0x0032A670 -> 0x011AE360 (observed miss
# in capture20) and 0x00327FB0 -> 0x011AE380. Both follow a function end.
TARGETS = {0x011AE360: 0x0032A670, 0x011AE380: 0x00327FB0}


def sha(path): return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def one(pattern, text):
    values = list(re.finditer(pattern, text, re.S))
    if len(values) != 1: raise ValueError('Ambiguous or missing generated overlay structure')
    return values[0]


def parts(table):
    units = one(r'const ps2::UnitInfo ' + PREFIX + r'_units\[\] = \{.*?\};', table)[0]
    checks = one(r'const std::uint32_t ' + PREFIX + r'_checks\[\] = \{(.*?)\};', table)
    words = [int(x, 16) for x in re.findall(r'0x([0-9A-F]+)u', checks[1])]
    if len(words) % 2: raise ValueError('Odd generated check-word count')
    if words[::2] != sorted(set(words[::2])): raise ValueError('Duplicate or unordered generated code-word guards')
    descriptor = one(r'\{"' + NAME + r'",[^\n]+\}', table)[0]
    expected = f'{{"{NAME}", 0x{BASE:08X}u, 0x{SIZE:08X}u, {PREFIX}_checks, {len(words) // 2}u, {PREFIX}_units, '
    if not descriptor.startswith(expected): raise ValueError('Generated overlay descriptor/check coverage mismatch')
    return units, checks[0], dict(zip(words[::2], words[1::2])), descriptor


def call_site(core, address):
    """Read one word from the original main executable's loadable segments."""
    phoff, = struct.unpack_from('<I', core, 0x1C)
    size, count = struct.unpack_from('<HH', core, 0x2A)
    for i in range(count):
        kind, offset, vaddr, _, filesz, *_ = struct.unpack_from('<8I', core, phoff + i * size)
        if kind == 1 and vaddr <= address < vaddr + filesz - 3:
            return struct.unpack_from('<I', core, offset + address - vaddr)[0]
    raise ValueError('Call site outside the original main executable')


def prepare(baseline, regenerated, artifact, core, entries, output, expected=None):
    """`expected` overrides fingerprints only for synthetic tests."""
    expected = expected or {'artifact': ARTIFACT_SHA, 'table': BASELINE_TABLE_SHA, 'header': BASELINE_HEADER_SHA}
    baseline, regenerated, artifact, core, entries, output = map(Path, [baseline, regenerated, artifact, core, entries, output])
    if output.exists(): raise ValueError('Use a new browser overlay output directory')
    if sha(artifact) != expected['artifact']: raise ValueError('Original browser.bin artifact fingerprint mismatch')
    if sha(baseline / 'table.cpp') != expected['table'] or sha(baseline / 'units.hpp') != expected['header']:
        raise ValueError('Retained generated registry/header fingerprint mismatch')
    lines = [line for line in entries.read_text().splitlines() if line.startswith(NAME + ':')]
    seeds = sorted(int(line.split(':', 1)[1], 16) + BASE for line in lines)
    original = artifact.read_bytes()
    main = core.read_bytes()
    for target, site in TARGETS.items():
        word = call_site(main, site)
        if word != 0x0C000000 | (target >> 2 & 0x03FFFFFF): raise ValueError('Original main-executable call site changed')
        if target not in seeds: raise ValueError('Direct-call target missing from regeneration entries')
    old = parts((baseline / 'table.cpp').read_text())
    new = parts((regenerated / 'table.cpp').read_text())
    if old[0] != new[0]: raise ValueError('Regenerated unit table changed')
    if not old[2].items() <= new[2].items(): raise ValueError('Regeneration removed or changed existing code-word guards')
    for offset, word in new[2].items():
        if offset % 4 or offset + 4 > len(original) or struct.unpack_from('<I', original, offset)[0] != word:
            raise ValueError('Regenerated check differs from original image bytes')
    added = sorted(set(new[2]) - set(old[2]))
    if not added or any(not any(t - BASE <= offset < t - BASE + 0x100 for t in TARGETS) for offset in added):
        raise ValueError('New code-word guards are not confined to the added original functions')
    sources = sorted(regenerated.glob(PREFIX + '_unit_*.cpp'))
    unit_numbers = re.findall(PREFIX + r'_unit_([0-9A-F]+)', new[0])
    if [p.stem.rsplit('_', 1)[1] for p in sources] != unit_numbers:
        raise ValueError('Regenerated unit table/source coverage mismatch')
    for target in TARGETS:
        if sum(bool(re.search(r'case \d+u: goto L_' + f'{target:08X}' + ';', p.read_text())) for p in sources) != 1:
            raise ValueError('Missing translated entry for original direct call')
    old_checks = old[1].replace(PREFIX + '_checks', 'retained_browser_checks')
    new_checks = new[1].replace(PREFIX + '_checks', 'browser_checks')
    units = new[0].replace(PREFIX + '_units', 'browser_units')
    retained = old[3].replace(PREFIX + '_checks', 'gen::retained_browser_checks').replace(PREFIX + '_units', 'nullptr').rstrip(',')
    replacement = new[3].replace(PREFIX + '_checks', 'gen::browser_checks').replace(PREFIX + '_units', 'gen::browser_units').rstrip(',')
    implementation = ('#include "units.hpp"\n#include "overlay_registry.hpp"\nnamespace gen {\n' + units + '\n' + new_checks + '\n' + old_checks + '\n}\n'
        'namespace original_exec {\n'
        '// Applied after any other overlay replacement; every other image stays as given.\n'
        'const ps2::ModuleInfo* browser_overlay_modules(const ps2::ModuleInfo* modules, std::uint32_t count) {\n'
        '    static std::vector<ps2::ModuleInfo> registry;\n'
        '    const ps2::ModuleInfo expected = ' + retained + ';\n'
        '    const ps2::ModuleInfo replacement = ' + replacement + ';\n'
        '    registry = replace_overlay_registry(modules, count, expected, replacement);\n'
        '    return registry.data();\n}\n}\n')
    output.mkdir(parents=True)
    (output / 'browser_profile.cpp').write_text(implementation)
    for path in sources: shutil.copy2(path, output / path.name)
    manifest = {'profile': PROFILE, 'status': 'prepared-not-built', 'module': NAME,
        'created_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'artifact_sha256': sha(artifact), 'core_sha256': sha(core), 'entries_sha256': sha(entries),
        'baseline_table_sha256': sha(baseline / 'table.cpp'), 'regenerated_table_sha256': sha(regenerated / 'table.cpp'),
        'targets': {f'0x{t:08X}': f'0x{s:08X}' for t, s in TARGETS.items()},
        'old_check_count': len(old[2]), 'new_check_count': len(new[2]), 'added_check_offsets': added,
        'compiled_sources': ['browser_profile.cpp', *[p.name for p in sources]],
        'files_sha256': {p.name: sha(p) for p in output.iterdir() if p.is_file()},
        'limits': ['Original artifact identity is not live RAM identity', 'No runtime proof from source preparation',
                   'Other same-base images keep their registry entries; the DNAS replacement is applied first']}
    (output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['baseline', 'regenerated', 'artifact', 'core', 'entries', 'output']:
        parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(prepare(args.baseline, args.regenerated, args.artifact, args.core, args.entries, args.output), indent=2))


if __name__ == '__main__': main()
