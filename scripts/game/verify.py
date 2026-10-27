#!/usr/bin/env python3
"""Verify the exported source pins and the complete matched prebuilt package."""
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
def sha(p):
    h=hashlib.sha256()
    with p.open('rb') as f:
        for chunk in iter(lambda:f.read(1<<20),b''): h.update(chunk)
    return h.hexdigest()
def verify(folder, files, sizes=False):
    actual={p.relative_to(folder).as_posix() for p in folder.rglob('*') if p.is_file() and '__pycache__' not in p.parts}
    if actual!=set(files): raise ValueError('Unexpected or missing files in '+str(folder.relative_to(ROOT)))
    for name, record in files.items():
        p=folder/name;expected=record['sha256'] if sizes else record
        if sha(p)!=expected: raise ValueError('Fingerprint mismatch: '+str(p.relative_to(ROOT)))
        if sizes and p.stat().st_size!=record['bytes']: raise ValueError('Size mismatch: '+name)
verify(ROOT/'vendor/ps2-web-recomp',json.loads((ROOT/'vendor/manifest.json').read_text())['files_sha256'])
generated=json.loads((ROOT/'generated/manifest.json').read_text())
verify(ROOT/'generated/gundam-vs-z-gundam',generated['files'],True)
for name,expected in json.loads((ROOT/'src/hooks/manifest.json').read_text())['files_sha256'].items():
    if sha(ROOT/name)!=expected: raise ValueError('Hook source changed: '+name)
prebuilt=ROOT/'apps/game/prebuilt';info=json.loads((prebuilt/'build-info.json').read_text())
files=info['files']
if {p.name for p in prebuilt.iterdir()}!=set(files)|{'build-info.json'}:raise ValueError('Unexpected prebuilt file set')
for name,record in files.items():
    if sha(prebuilt/name)!=record['sha256']:raise ValueError('Prebuilt hash mismatch: '+name)
    if (prebuilt/name).stat().st_size!=record['bytes']:raise ValueError('Prebuilt size mismatch: '+name)
    if record['bytes']>=100*1024*1024:raise ValueError('Prebuilt file exceeds ordinary Git limit: '+name)
for p in (ROOT/'apps/game/assets').iterdir():
    if p.name=='package.json':continue
    if p.is_file() and sha(p)!=sha(prebuilt/p.name):raise ValueError('Asset and prebuilt differ: '+p.name)
print(f'Pinned vendor, {generated["file_count"]} generated files, final hooks and {len(files)} matched prebuilt files verified.')
