#!/usr/bin/env python3
"""Add original core entries reached through browser.bin pointers to the retained unit_0089."""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import re
import struct

PROFILE = 'original-online-core-entries-v1'
UNIT, BASE = 'unit_0089', 0x00324000
RETAINED_SHA = '99fe59feaa25275b686555a1ba182bcaf06ae4412b0464b839c3ca7c8c6299c8'
CORE_SHA = '294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6'
# browser.bin inflateInit2_ stores these core thunks as default zalloc/zfree and
# calls zalloc through a register. Each thunk is `j target; nop`.
ENTRIES = {0x003271C0: 0x003272D0, 0x003271D0: 0x003273B0}
# Translated ranges absent from the retained unit: both thunks, and the zfree body
# that only the second thunk reaches (it follows a `jr ra` at 0x003273A8).
RANGES = [(0x003271C0, 0x003271E0), (0x003273B0, 0x00327410)]
BOUNDARY = {0x003273A8: 0x03E00008}


def sha(data): return hashlib.sha256(data if isinstance(data, bytes) else data.encode()).hexdigest()


def word(core, address):
    phoff, = struct.unpack_from('<I', core, 0x1C)
    size, count = struct.unpack_from('<HH', core, 0x2A)
    for i in range(count):
        kind, offset, vaddr, _, filesz, *_ = struct.unpack_from('<8I', core, phoff + i * size)
        if kind == 1 and vaddr <= address < vaddr + filesz - 3:
            return struct.unpack_from('<I', core, offset + address - vaddr)[0]
    raise ValueError('Address outside the original main executable')


def labels(text): return [int(x, 16) for x in re.findall(r'^L_([0-9A-F]{8}):$', text, re.M)]


def block(text, begin, end):
    start = text.index(f'L_{begin:08X}:\n')
    return text[start:text.index(f'L_{end:08X}:\n', start)]


def entries(text):
    match = re.search(r'const std::uint16_t entries_' + UNIT[5:] + r'\[4096\] = \{\n(.*?)\n\};', text, re.S)
    if not match: raise ValueError('Entry table missing')
    values = [int(x) for x in re.findall(r'\d+', match[1])]
    if len(values) != 4096: raise ValueError('Entry table size changed')
    return match, values


def prepare(retained, regenerated, core, output, expected=None):
    """`expected` overrides fingerprints only for synthetic tests."""
    expected = expected or {'retained': RETAINED_SHA, 'core': CORE_SHA}
    retained, regenerated, core, output = map(Path, [retained, regenerated, core, output])
    if output.exists(): raise ValueError('Use a new core entry output directory')
    old, new, main = retained.read_text(), regenerated.read_text(), core.read_bytes()
    if sha(old.encode()) != expected['retained']: raise ValueError('Retained unit fingerprint mismatch')
    if sha(main) != expected['core']: raise ValueError('Original main executable fingerprint mismatch')
    for entry, target in ENTRIES.items():
        if word(main, entry) != 0x08000000 | (target >> 2 & 0x03FFFFFF) or word(main, entry + 4) != 0:
            raise ValueError('Original thunk words changed')
    for address, value in BOUNDARY.items():
        if word(main, address) != value: raise ValueError('Original function boundary changed')
    added = sorted(set(labels(new)) - set(labels(old)))
    inside = [a for a in added if any(b <= a < e for b, e in RANGES)]
    if added != inside or not all(f'L_{b:08X}' in map(lambda a: f'L_{a:08X}', added) for b, _ in RANGES):
        raise ValueError('Regenerated labels outside the reviewed ranges')
    if set(labels(old)) - set(labels(new)): raise ValueError('Regeneration removed retained labels')
    final = set(labels(old)) | set(added)
    targets = lambda text: [int(x, 16) for x in re.findall(r'^    case \d+u: goto L_([0-9A-F]{8});$', text, re.M)]
    new_entries = sorted(set(targets(new)) - set(targets(old)))
    blocks, resumes = [], set()
    for begin, end in RANGES:
        text = block(new, begin, end)
        if re.search(r'\bunit_[0-9A-F]{4}\(|\bm_[0-9A-F]{8}_', text): raise ValueError('Inserted block calls another unit')
        for target in re.findall(r'goto L_([0-9A-F]{8});', text):
            if int(target, 16) not in final: raise ValueError('Inserted block jumps to an absent label')
        for resume in re.findall(r'c\.pc = 0x([0-9A-F]{8})u \| kUnwind', text):
            if not begin <= int(resume, 16) < end: raise ValueError('Inserted block resumes outside its range')
            resumes.add(int(resume, 16))
        if f'L_{end:08X}:\n' not in old: raise ValueError('Retained insertion anchor missing')
        blocks.append((begin, end, text))
    cases = [int(x) for x in re.findall(r'^    case (\d+)u: goto L_[0-9A-F]{8};$', old, re.M)]
    if cases != list(range(1, len(cases) + 1)): raise ValueError('Retained switch numbering changed')
    match, table = entries(old)
    # Dispatch entries: the two thunks plus loop heads that preemption resumes at.
    if new_entries != sorted(set(ENTRIES) | resumes): raise ValueError('Regenerated entries differ from thunks and resume points')
    numbers = {}
    for entry in new_entries:
        index = (entry - BASE) // 4
        if table[index]: raise ValueError('Retained entry slot already used')
        numbers[entry] = table[index] = len(cases) + len(numbers) + 1
    text = old
    for begin, end, inserted in blocks:
        text = text.replace(f'L_{end:08X}:\n', inserted + f'L_{end:08X}:\n', 1)
    last = f'    case {len(cases)}u: goto L_'
    at = text.index(last); at = text.index('\n', at) + 1
    text = text[:at] + ''.join(f'    case {n}u: goto L_{e:08X};\n' for e, n in numbers.items()) + text[at:]
    rows = ',\n'.join('    ' + ', '.join(str(v) for v in table[i:i + 32]) for i in range(0, 4096, 32))
    text = text.replace(match[0], match[0][:match.start(1) - match.start(0)] + rows + ',\n};', 1)
    if entries(text)[1] != table: raise ValueError('Entry table rewrite failed')
    output.mkdir(parents=True)
    (output / (UNIT + '.cpp')).write_text(text)
    manifest = {'profile': PROFILE, 'status': 'prepared-not-built', 'unit': UNIT,
        'created_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'retained_sha256': sha(old.encode()), 'regenerated_sha256': sha(new.encode()), 'core_sha256': sha(main),
        'entries': {f'0x{e:08X}': {'case': n, 'role': f'thunk to 0x{ENTRIES[e]:08X}' if e in ENTRIES else 'preemption resume'} for e, n in numbers.items()},
        'inserted_ranges': [[f'0x{b:08X}', f'0x{e:08X}'] for b, e in RANGES], 'added_labels': [f'0x{a:08X}' for a in added],
        'compiled_sources': [UNIT + '.cpp'], 'files_sha256': {UNIT + '.cpp': sha((output / (UNIT + '.cpp')).read_bytes())},
        'limits': ['Existing case numbers and every other unit stay unchanged', 'No runtime proof from source preparation']}
    (output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['retained', 'regenerated', 'core', 'output']: parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(prepare(args.retained, args.regenerated, args.core, args.output), indent=2))


if __name__ == '__main__': main()
