#!/usr/bin/env python3
"""Assemble two separately built private exec modules and the parent harness."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil

HERE = Path(__file__).resolve().parent


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['game', 'utility', 'output']: parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    if args.output.exists(): parser.error('Use a new output directory')
    modules = {}
    for image, directory in [('game', args.game), ('utility', args.utility)]:
        info = json.loads((directory / 'build-info.json').read_text())
        if info.get('status') != 'built-not-runtime-tested' or info.get('image') != image:
            parser.error('Expected a completed separate exec build for ' + image)
        if not {'index.html', 'index.js', 'index.wasm', 'index.data'}.issubset(info['outputs_sha256']):
            parser.error('Missing compiled module artifacts for ' + image)
        for filename, expected in info['outputs_sha256'].items():
            if Path(filename).name != filename or digest(directory / filename) != expected:
                parser.error('Module output fingerprint mismatch: ' + filename)
        modules[image] = {'build_info_sha256': digest(directory / 'build-info.json'), 'elf_sha256': info['elf_sha256'],
                          'files': list(info['outputs_sha256'])}
    args.output.mkdir(parents=True)
    for image, directory in [('game', args.game), ('utility', args.utility)]:
        destination = args.output / image; destination.mkdir()
        for filename in [*modules[image]['files'], 'build-info.json']: shutil.copy2(directory / filename, destination / filename)
    shutil.copy2(HERE / 'harness.html', args.output / 'index.html')
    for filename in ['session.mjs', 'browser.mjs', 'card-store.mjs']: shutil.copy2(HERE / filename, args.output / filename)
    info = {'profile': 'experimental-original-exec-documents-v1', 'modules': modules, 'runtime_tested': False,
            'files_sha256': {path.relative_to(args.output).as_posix(): digest(path) for path in args.output.rglob('*') if path.is_file()}}
    (args.output / 'build-info.json').write_text(json.dumps(info, indent=2) + '\n')


if __name__ == '__main__': main()
