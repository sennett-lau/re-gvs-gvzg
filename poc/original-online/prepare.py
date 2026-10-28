#!/usr/bin/env python3
"""Prepare read-only native Online Mode observation; never enable lockstep."""
import argparse
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
POINTS = {
    'unit_0044.cpp': {0x211180: 'enter'},
    'unit_0081.cpp': {0x306720: 'mode', 0x307E30: 'battle'},
    'unit_009A.cpp': {0x368A80: 'connection'},
    'unit_0001.cpp': {0x1074D8: 'bind', 0x1076A8: 'call'},
}


def prepare(source, output):
    """Use fresh overrides, optionally from the adaptive preparation output."""
    source, output = Path(source), Path(output)
    if output.exists():
        raise ValueError('Use a new output directory')
    originals = {}
    for name, points in POINTS.items():
        path = source / name
        if not path.exists():
            path = ROOT / 'generated/gundam-vs-z-gundam' / name
        text = path.read_text()
        if 'gundam_multiplayer_menu' in text or 'original_online::' in text:
            raise ValueError('Use adaptive/original sources, never multiplayer overrides')
        for address in points:
            if text.count(f'\nL_{address:08X}:\n') != 1:
                raise ValueError(f'Missing or ambiguous entry {address:08X}')
        if name == 'unit_0044.cpp' and 'L_00211180:\n    set32(c.r[2], 0u + 7u);' not in text:
            raise ValueError('Original mode 7 selection changed')
        originals[name] = (text, hashlib.sha256(path.read_bytes()).hexdigest())
    output.mkdir(parents=True)
    manifest = {'profile': 'original-online-observer-v1', 'network_backend': None,
                'guest_writes': False, 'lockstep': False, 'sources': {}}
    for name, (text, digest) in originals.items():
        for address, kind in POINTS[name].items():
            label = f'\nL_{address:08X}:\n'
            text = text.replace(label, label + f'    original_online::{kind}(c);\n')
        text = '#include "observer.hpp"\n' + text
        (output / name).write_text(text)
        manifest['sources'][name] = {'input_sha256': digest,
            'output_sha256': hashlib.sha256(text.encode()).hexdigest()}
    (output / 'observer.hpp').write_bytes(Path(__file__).with_name('observer.hpp').read_bytes())
    (output / 'observer-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=ROOT / 'generated/gundam-vs-z-gundam')
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(prepare(args.source, args.output), indent=2))
