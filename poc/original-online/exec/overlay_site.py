#!/usr/bin/env python3
"""Create a new explicit JS overlay site, retaining both compiled executables."""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import shutil


def sha(path): return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def prepare(source, output, bridge, observer, source_sha, bridge_sha, observer_sha):
    source, output, bridge, observer = map(Path, [source, output, bridge, observer])
    if output.exists(): raise ValueError('Use a new site directory')
    if sha(source / 'build-info.json') != source_sha or sha(bridge) != bridge_sha or sha(observer) != observer_sha:
        raise ValueError('Reviewed site or override source changed')
    info = json.loads((source / 'build-info.json').read_text())
    if info.get('profile') != 'experimental-original-exec-documents-v1' or info.get('post_link_overlay'):
        raise ValueError('Expected an original assembled site without overrides')
    if not info['modules']['game']['network_enabled'] or info['modules']['utility']['network_enabled']:
        raise ValueError('Expected game-only network bridge')
    for name, digest in info['files_sha256'].items():
        path = Path(name)
        if path.is_absolute() or '..' in path.parts or '\\' in name or ':' in name:
            raise ValueError('Invalid site file path')
        target = (source / path).resolve()
        if not target.is_relative_to(source.resolve()) or sha(target) != digest:
            raise ValueError('Original assembled site bytes changed')
    actual = {p.relative_to(source).as_posix() for p in source.rglob('*') if p.is_file() and p != source / 'build-info.json'}
    if actual != set(info['files_sha256']): raise ValueError('Unrecorded or missing assembled site files')
    for image in ['game', 'utility']:
        if sha(source / image / 'build-info.json') != info['modules'][image]['build_info_sha256']:
            raise ValueError('Original module manifest changed')
    frame = (source / 'game/frame.mjs').read_text()
    anchor = '      installOriginalOnlineBridge(Module, data.networkConfig);'
    if frame.count(anchor) != 1: raise ValueError('Network installation anchor changed')
    frame = frame.replace(anchor, anchor + "\n      const {observeBridgeOpen} = await import('./bridge_observer.mjs');\n      observeBridgeOpen(Module);")
    shutil.copytree(source, output)
    (output / 'game/frame.mjs').write_text(frame)
    shutil.copy2(bridge, output / 'game/network/wasm_host.mjs')
    shutil.copy2(observer, output / 'game/bridge_observer.mjs')
    if sha(output / 'game/network/wasm_host.mjs') != bridge_sha or sha(output / 'game/bridge_observer.mjs') != observer_sha:
        raise ValueError('Reviewed override bytes changed during copying')
    changed = ['game/frame.mjs', 'game/network/wasm_host.mjs', 'game/bridge_observer.mjs']
    changes = {name: {'base_sha256': info['files_sha256'].get(name), 'sha256': sha(output / name)} for name in changed}
    for name, digest in info['files_sha256'].items():
        if name not in changed and sha(output / name) != digest: raise ValueError('Unrelated site output changed')
    info['modules']['game']['files'].append('bridge_observer.mjs')
    info['post_link_overlay'] = {
        'schema': 1, 'created_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'status': 'post-link-js-overlay-not-runtime-tested', 'base_site_sha256': source_sha,
        'base_manifest_contract': 'Module build-info files retain the original compiled-build provenance; this site manifest records final bytes after the explicit JS overrides.',
        'changes': changes, 'source_sha256': {'bridge': bridge_sha, 'observer': observer_sha, 'preparer': sha(__file__)},
        'preserved_wasm_sha256': {image: sha(output / image / 'index.wasm') for image in ['game', 'utility']},
    }
    info['runtime_tested'] = False
    info['files_sha256'] = {path.relative_to(output).as_posix(): sha(path) for path in output.rglob('*') if path.is_file() and path != output / 'build-info.json'}
    (output / 'build-info.json').write_text(json.dumps(info, indent=2) + '\n')
    return info


def main():
    p = argparse.ArgumentParser(description=__doc__)
    for name in ['source', 'output', 'bridge', 'observer']: p.add_argument('--' + name, type=Path, required=True)
    for name in ['source', 'bridge', 'observer']: p.add_argument('--' + name + '-sha256', required=True)
    a = p.parse_args()
    print(json.dumps(prepare(a.source, a.output, a.bridge, a.observer, a.source_sha256, a.bridge_sha256, a.observer_sha256)['post_link_overlay'], indent=2))


if __name__ == '__main__': main()
