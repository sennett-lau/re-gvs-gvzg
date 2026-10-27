#!/usr/bin/env python3
"""Regenerate EE/MWo3 translations from a supported disc; retain the recorded VU translation."""
import argparse
import json
from pathlib import Path
import shutil
import sys
from build import ROOT, digest, extract_disc, run

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--disc', type=Path, required=True)
parser.add_argument('--eerecomp', type=Path, default=ROOT / '.local/compiler-build/build/eerecomp')
parser.add_argument('--output', type=Path, default=ROOT / '.local/regenerated-game')
args = parser.parse_args()
out = args.output.resolve()
if out.exists(): parser.error('Use a new output directory.')
out.mkdir(parents=True)
inputs = out / 'inputs'; inputs.mkdir()
extract_disc(args.disc.resolve(), inputs)
run([sys.executable, ROOT / 'scripts/game/mwo.py', args.disc.resolve(), 'AFS_DATA.AFS', inputs])
result = out / 'generated'
run([args.eerecomp.resolve(), inputs / 'core.elf', '--entries', inputs / 'mwo-entries.txt',
     '--overlays', inputs / 'mwo-overlays', '--out', result])
# Recorded VU programs came from runtime coverage, not static EE extraction.
retained = ROOT / 'generated/gundam-vs-z-gundam'
for source in retained.glob('vu*'):
    if source.is_file(): shutil.copy2(source, result / source.name)
manifest = json.loads((ROOT / 'generated/manifest.json').read_text())
expected = manifest['files']
actual = {p.name for p in result.iterdir() if p.is_file()}
changed = [name for name, record in expected.items() if name in actual and digest(result / name) != record['sha256']]
comparison = {'missing': sorted(set(expected) - actual), 'added': sorted(actual - set(expected)),
              'changed': sorted(changed), 'vu_policy': 'Retain recorded VU C++ explicitly'}
(out / 'comparison.json').write_text(json.dumps(comparison, indent=2) + '\n')
if comparison['missing'] or comparison['added'] or changed:
    raise SystemExit('Regeneration differs from the retained translation; inspect comparison.json. The supported game build continues to use the fingerprinted generated/ tree.')
print(f'All {len(actual)} files match: EE/MWo3 regenerated; recorded VU C++ retained explicitly.')
