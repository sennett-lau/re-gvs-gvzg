#!/usr/bin/env python3
"""Copy an assembled site and give the game document the full ordinary pad mapping."""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import shutil

# The same edit as frame.mjs in this directory: more pad buttons and the left
# analog stick. Input still reaches the guest only through ps2web_pad.
REPLACEMENTS = [
    ("""  const keyMap = {KeyX: 1 << 13, KeyZ: 1 << 14, Enter: 1 << 3,
    ArrowUp: 1 << 4, ArrowRight: 1 << 5, ArrowDown: 1 << 6, ArrowLeft: 1 << 7};
  const keys = new Set();
  addEventListener('keydown', event => { if (keyMap[event.code]) { keys.add(event.code); event.preventDefault(); } });""",
     """  // I/J/K/L tilt the left analog stick fully; the other keys are pad buttons.
  const keyMap = {KeyX: 1 << 13, KeyZ: 1 << 14, KeyS: 1 << 12, KeyA: 1 << 15, Enter: 1 << 3, Backspace: 1 << 0,
    KeyQ: 1 << 10, KeyW: 1 << 11, Digit1: 1 << 8, Digit2: 1 << 9,
    ArrowUp: 1 << 4, ArrowRight: 1 << 5, ArrowDown: 1 << 6, ArrowLeft: 1 << 7, KeyI: 0, KeyJ: 0, KeyK: 0, KeyL: 0};
  const keys = new Set();
  const axis = (low, high) => keys.has(low) ? 0 : keys.has(high) ? 255 : 128;
  addEventListener('keydown', event => { if (event.code in keyMap) { keys.add(event.code); event.preventDefault(); } });"""),
    ("      Module._ps2web_pad(0, mask, 128, 128, 128, 128);",
     "      Module._ps2web_pad(0, mask, axis('KeyJ', 'KeyL'), axis('KeyI', 'KeyK'), 128, 128);"),
]


def sha(path): return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def apply(text):
    for old, new in REPLACEMENTS:
        if text.count(old) != 1: raise ValueError('Frame input anchor absent or ambiguous')
        text = text.replace(old, new)
    return text


def prepare(source, output, source_sha):
    source, output = Path(source), Path(output)
    if output.exists(): raise ValueError('Use a new site directory')
    if sha(source / 'build-info.json') != source_sha: raise ValueError('Reviewed site changed')
    info = json.loads((source / 'build-info.json').read_text())
    if info.get('profile') != 'experimental-original-exec-documents-v1' or info.get('input_overlay'):
        raise ValueError('Expected an assembled site without an input overlay')
    for name, digest in info['files_sha256'].items():
        path = Path(name)
        if path.is_absolute() or '..' in path.parts or '\\' in name or ':' in name or sha(source / path) != digest:
            raise ValueError('Assembled site bytes changed')
    frame = apply((source / 'game/frame.mjs').read_text())
    shutil.copytree(source, output)
    (output / 'game/frame.mjs').write_text(frame)
    for name, digest in info['files_sha256'].items():
        if name != 'game/frame.mjs' and sha(output / name) != digest: raise ValueError('Unrelated site output changed')
    info['input_overlay'] = {
        'schema': 1, 'created_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'status': 'post-link-js-input-overlay-not-runtime-tested', 'base_site_sha256': source_sha,
        'changes': {'game/frame.mjs': {'base_sha256': info['files_sha256']['game/frame.mjs'], 'sha256': sha(output / 'game/frame.mjs')}},
        'preparer_sha256': sha(__file__),
        'preserved_wasm_sha256': {image: sha(output / image / 'index.wasm') for image in ['game', 'utility']},
        'scope': 'ordinary pad buttons and left analog stick through ps2web_pad; no guest memory or state access',
    }
    info['files_sha256']['game/frame.mjs'] = sha(output / 'game/frame.mjs')
    info['runtime_tested'] = False
    (output / 'build-info.json').write_text(json.dumps(info, indent=2) + '\n')
    return info


def main():
    p = argparse.ArgumentParser(description=__doc__)
    for name in ['source', 'output']: p.add_argument('--' + name, type=Path, required=True)
    p.add_argument('--source-sha256', required=True)
    a = p.parse_args()
    print(json.dumps(prepare(a.source, a.output, a.source_sha256)['input_overlay'], indent=2))


if __name__ == '__main__': main()
