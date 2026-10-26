#!/usr/bin/env python3
"""Apply the retained render hooks and final input/cue gates to pinned units."""
import argparse
import hashlib
import json
from pathlib import Path
import tempfile

from gundam_render_hooks import write_render_units

HERE = Path(__file__).resolve().parent


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def prepare(generated, output):
    manifest = json.loads((HERE / 'manifest.json').read_text())
    if output.exists():
        raise ValueError('Output must be a new directory; no existing files are replaced.')
    for name, expected in manifest['inputs_sha256'].items():
        if digest(generated / name) != expected:
            raise ValueError(f'Unsupported generated input: {name}')
    with tempfile.TemporaryDirectory() as temporary:
        stage = Path(temporary)
        write_render_units(generated, stage)
        # The shared helper predates both fixes. Preserve them in this export.
        unit = stage / 'unit_0049.cpp'
        text = unit.read_text()
        needle = 'L_00226D30:\n'
        if text.count(needle) != 1:
            raise ValueError('Input-poll entry is ambiguous.')
        text = text.replace(needle, needle +
            '    if (research_render_only()) { c.pc = c.r[31].w[0]; return; }\n')
        unit.write_text(text)

        text = (generated / 'unit_0047.cpp').read_text()
        begin = text.index('L_0021C660:')
        end = text.index('L_0021C6BC:', begin)
        part = text[begin:end]
        store = '    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);'
        if part.count(store) != 1:
            raise ValueError('Cue-clock store is ambiguous.')
        part = part.replace(store,
            '    if (!research_render_only()) st32((c.r[4].w[0] + 88u), c.r[3].w[0]);')
        text = '#include "render_hooks.hpp"\n' + text[:begin] + part + text[end:]
        (stage / 'unit_0047.cpp').write_text(text)

        for name, expected in manifest['outputs_sha256'].items():
            if digest(stage / name) != expected:
                raise ValueError(f'Generated output differs from retained fingerprint: {name}')
        # Publish locally only after every output passes. Never overwrite input.
        output.mkdir(parents=True, exist_ok=False)
        for name in manifest['outputs_sha256']:
            (output / name).write_bytes((stage / name).read_bytes())
    return len(manifest['outputs_sha256'])


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--generated', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    print(f'Prepared {prepare(args.generated, args.output)} fingerprint-matched units; no compilation or game execution.')
