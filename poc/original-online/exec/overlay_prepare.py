#!/usr/bin/env python3
"""Export one exact regenerated original overlay; preserve the other images."""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct

NAME = '0117F000_MWO_E775154D'
PREFIX = 'm_' + NAME
ARTIFACT_SHA = 'c472df84645aaa4664ed28b3f4250f77484392b512fb70f05c3a693d816eb7ca'
BASELINE_TABLE_SHA = 'fb1c2785d06b8b5f1b3cf31b42cb09e05ecd952536a43879638fddc26fdd1117'
BASELINE_HEADER_SHA = 'ab64f120a13e98fec32ba09249db3b7f7d8bfd97a9a7abdaed8e4c0365912feb'
TARGETS = [0x011EF7B0, 0x011EF7C0, 0x011EF7D0]


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
    expected = '{"' + NAME + '", 0x0117F000u, 0x000A1000u, ' + PREFIX + '_checks, ' + str(len(words) // 2) + 'u, ' + PREFIX + '_units, '
    if not descriptor.startswith(expected): raise ValueError('Generated overlay descriptor/check coverage mismatch')
    return units, checks[0], dict(zip(words[::2], words[1::2])), descriptor


def prepare(baseline, regenerated, artifact, output):
    baseline, regenerated, artifact, output = map(Path, [baseline, regenerated, artifact, output])
    if output.exists(): raise ValueError('Use a new overlay output directory')
    if sha(artifact) != ARTIFACT_SHA: raise ValueError('Original DNAS_NET artifact fingerprint mismatch')
    if sha(baseline / 'table.cpp') != BASELINE_TABLE_SHA or sha(baseline / 'units.hpp') != BASELINE_HEADER_SHA:
        raise ValueError('Retained generated registry/header fingerprint mismatch')
    original = artifact.read_bytes()
    old = parts((baseline / 'table.cpp').read_text())
    new = parts((regenerated / 'table.cpp').read_text())
    if not old[2].items() <= new[2].items(): raise ValueError('Regeneration removed or changed existing code-word guards')
    for offset, word in new[2].items():
        if offset % 4 or offset + 4 > len(original) or struct.unpack_from('<I', original, offset)[0] != word:
            raise ValueError('Regenerated check differs from original image bytes')
    for target in TARGETS:
        if target - 0x0117F000 not in new[2]: raise ValueError('Missing original direct-call target guard')
    sources = sorted(regenerated.glob(PREFIX + '_unit_*.cpp'))
    if not sources: raise ValueError('No regenerated overlay sources')
    unit_numbers = re.findall(PREFIX + r'_unit_([0-9A-F]+)', new[0])
    if [p.stem.rsplit('_', 1)[1] for p in sources] != unit_numbers:
        raise ValueError('Regenerated unit table/source coverage mismatch')
    if not new[3].endswith(', ' + str(len(unit_numbers)) + 'u}'):
        raise ValueError('Regenerated descriptor/unit coverage mismatch')
    code = (regenerated / (PREFIX + '_unit_001C.cpp')).read_text()
    for target in TARGETS:
        if not re.search(r'case \d+u: goto L_' + f'{target:08X}' + ';', code):
            raise ValueError('Missing translated entry for original direct call')
    header = (baseline / 'units.hpp').read_text()
    extra = []
    for number in unit_numbers:
        symbol = PREFIX + '_unit_' + number
        if symbol not in header:
            extra += [f'void {symbol}(ps2::Cpu &c, std::uint32_t entry, std::uint32_t depth);',
                      f'extern const std::uint16_t {PREFIX}_entries_{number}[];']
    header += '\nnamespace gen {\n' + '\n'.join(extra) + '\n}\n'
    old_checks = old[1].replace(PREFIX + '_checks', 'retained_overlay_checks')
    expected = old[3].replace(PREFIX + '_checks', 'gen::retained_overlay_checks').replace(PREFIX + '_units', 'nullptr')
    replacement = new[3].replace(PREFIX + '_checks', 'gen::' + PREFIX + '_checks').replace(PREFIX + '_units', 'gen::' + PREFIX + '_units')
    implementation = '#include "units.hpp"\n#include "overlay_registry.hpp"\nnamespace gen {\n' + new[0] + '\n' + new[1] + '\n' + old_checks + '\n}\n'
    implementation += 'namespace original_exec {\nconst ps2::ModuleInfo* overlay_modules(const ps2::ModuleInfo* modules, std::uint32_t count) {\n'
    implementation += '    static std::vector<ps2::ModuleInfo> registry;\n    const ps2::ModuleInfo expected = ' + expected + ';\n'
    implementation += '    const ps2::ModuleInfo replacement = ' + replacement + ';\n'
    implementation += '    registry = replace_overlay_registry(modules, count, expected, replacement);\n    return registry.data();\n}\n}\n'
    output.mkdir(parents=True)
    (output / 'units.hpp').write_text(header)
    (output / 'overlay_profile.cpp').write_text(implementation)
    for path in sources: shutil.copy2(path, output / path.name)
    manifest = {'profile': 'original-online-dnas-overlay-entries-v1', 'status': 'prepared-not-built',
        'created_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(), 'module': NAME,
        'artifact_sha256': sha(artifact), 'baseline_table_sha256': sha(baseline / 'table.cpp'),
        'regenerated_table_sha256': sha(regenerated / 'table.cpp'),
        'targets': TARGETS, 'old_check_count': len(old[2]), 'new_check_count': len(new[2]),
        'compiled_sources': ['overlay_profile.cpp', *[p.name for p in sources]],
        'files_sha256': {p.name: sha(p) for p in output.iterdir() if p.is_file()},
        'limits': ['Original artifact identity is not live RAM identity', 'No runtime proof from source preparation',
                   'Other same-base images remain in the original registry; their behavior is unchanged']}
    (output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['baseline', 'regenerated', 'artifact', 'output']: parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(prepare(args.baseline, args.regenerated, args.artifact, args.output), indent=2))


if __name__ == '__main__': main()
