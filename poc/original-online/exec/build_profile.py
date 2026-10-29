#!/usr/bin/env python3
"""Compose storage + original exec in an isolated incremental module profile."""
import argparse
import datetime
import hashlib
import importlib.util
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
FLAGS = ['-O3', '-std=c++20', '-DPS2_GPU', '-msimd128', '-mtail-call',
         '-fwasm-exceptions', '-sWASM_LEGACY_EXCEPTIONS=0', '-pthread', '--use-port=emdawnwebgpu']
EXPORTS = ['main', 'ps2web_pad', 'ps2web_pad_connected', 'ps2web_resize', 'ps2web_gpu_ms',
           'ps2web_frames', 'ps2web_primitives', 'ps2web_audio_ring', 'ps2web_audio_queued_ms',
           'ps2web_idle_ms', 'ps2web_vu_interpreted']
REPLACED = {'upstream/runtime/src/kernel.cpp', 'upstream/host/web.cpp',
            'upstream/runtime/src/iop/io.cpp', 'upstream/runtime/src/iop/sif.cpp',
            'upstream/runtime/src/iop/sio2.cpp', 'diagnostic.cpp'}


def digest(path):
    h = hashlib.sha256()
    with Path(path).open('rb') as stream:
        for chunk in iter(lambda: stream.read(1 << 20), b''): h.update(chunk)
    return h.hexdigest()


def module(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    result = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(result)
    return result


def utility_objects(base, info):
    """Use source-to-object records, never ambiguous stems (EE/IOP kernel)."""
    known = info['sources_sha256']
    mappings = {}
    for command in info['commands']:
        if '-c' not in command: continue
        source = command[command.index('-c') + 1].replace('\\', '/')
        names = [name for name in known if source.endswith('/' + name)]
        if len(names) != 1: raise ValueError('Ambiguous recorded utility compile source: ' + source)
        name = names[0]
        if name in mappings: raise ValueError('Duplicate utility compile record: ' + name)
        obj_name = command[command.index('-o') + 1].replace('\\', '/').rsplit('/', 1)[-1]
        mappings[name] = base / 'objects' / obj_name
    if set(mappings) != set(known): raise ValueError('Utility compile/source manifest coverage mismatch')
    for name, expected in known.items():
        if digest(base / name) != expected: raise ValueError('Utility source changed: ' + name)
        if not mappings[name].is_file(): raise ValueError('Missing retained utility object: ' + str(mappings[name]))
    return [obj for name, obj in mappings.items() if name not in REPLACED]


def plan(image, base, sdk, work, storage_path, network_path=None):
    if work.exists(): raise ValueError('Use a new work directory')
    if network_path and image != 'game': raise ValueError('Network composition is game-only; utility remains original')
    info_path = base / 'web/build-info.json'
    info = json.loads(info_path.read_text())
    prep = module('exec_preparation', HERE / 'prepare.py')
    elf = base / ('inputs/core.elf' if image == 'game' else 'NTGDVDJ.BIN')
    if digest(elf) != prep.HASHES[image]: raise ValueError('Original executable digest mismatch')
    if image == 'game':
        if info.get('profile') != 'full-game-adaptive': raise ValueError('Game base must be original adaptive, without multiplayer overrides')
        names = ['system', 'full_game_web_hooks', 'full_game_interpolation', 'vif', 'unit_0039', 'unit_0049', 'unit_004D', 'unit_0047']
        retained = [base / 'overrides' / (name + '.o') for name in names]
        retained += [base / 'base/libps2game.a', base / 'base/libps2runtime.a']
        generated = ROOT / 'generated/gundam-vs-z-gundam'
    else:
        if not info.get('profile', '').startswith('isolated-original-network-utility'):
            raise ValueError('Utility base must be the verified standalone utility build')
        retained = utility_objects(base, info)
        generated = base / 'generated'
        # Original entry bytes + both observed translation targets are required.
        subprocess.run([sys.executable, str(HERE.parent / 'verify_utility.py'), '--elf', str(elf), '--generated', str(generated)], check=True)
    retained_hashes = {str(path): digest(path) for path in retained}
    storage_hash = digest(storage_path)
    storage = module('exec_storage_preparation', storage_path)
    work.mkdir(parents=True)
    source = work / 'upstream'
    shutil.copytree(base / 'upstream', source, ignore=shutil.ignore_patterns('._*', '__pycache__'))
    storage_manifest = storage.prepare(source)
    if digest(storage_path) != storage_hash: raise ValueError('Storage preparer changed during composition')
    network_manifest = None
    if network_path:
        network_hash = digest(network_path)
        network = module('exec_network_preparation', network_path)
        network_manifest = network.prepare(source)
        if digest(network_path) != network_hash: raise ValueError('Network preparer changed during composition')
    prepared = work / 'exec'; prepared.mkdir()
    host = ROOT / 'apps/game/src/web.cpp' if image == 'game' else source / 'host/web.cpp'
    kernel_text, host_text = prep.prepare((source / 'runtime/src/kernel.cpp').read_text(), host.read_text())
    (prepared / 'kernel.cpp').write_text(kernel_text)
    (prepared / 'web.cpp').write_text(host_text)
    shell = (HERE / 'frame.html').read_text().replace('__ORIGINAL_EXEC_IMAGE__', image).replace('__ORIGINAL_EXEC_SHA256__', prep.HASHES[image])
    shell = shell.replace('__ORIGINAL_EXEC_NETWORK__', 'true' if network_path else 'false')
    (prepared / 'frame.html').write_text(shell)
    inputs = work / 'inputs'; inputs.mkdir(); shutil.copy2(elf, inputs / 'core.elf')
    sources = [prepared / 'kernel.cpp', prepared / 'web.cpp', HERE / 'runtime.cpp', HERE / 'web_notify.cpp']
    sources += [source / 'runtime/src/iop' / name for name in ['io.cpp', 'sif.cpp', 'sio2.cpp', 'native_storage.cpp']]
    if image == 'utility': sources.append(HERE / 'utility_diagnostic.cpp')
    if network_manifest:
        for name in network_manifest['compiled_sources']:
            path = source / name
            if path in sources: raise ValueError('Duplicate composed runtime source: ' + name)
            sources.append(path)
    observer = None
    if image == 'game':
        online = module('exec_online_observation', HERE.parent / 'prepare.py')
        observation = work / 'observation'
        observer = online.prepare(base / 'overrides', observation)
        sources += [observation / name for name in online.POINTS]
    includes = [HERE, source / 'runtime/include', source / 'runtime/src', source / 'runtime/src/iop', generated,
                ROOT / 'src/hooks', ROOT / 'research/source/render-hooks', work / 'observation']
    flags = [*FLAGS, '-DORIGINAL_EXEC_IMAGE="' + image + '"', *['-I' + str(path) for path in includes]]
    if image == 'game': flags.append('-DNDEBUG')
    objects = work / 'objects'; objects.mkdir()
    web = work / 'web'; web.mkdir()
    emxx = sdk / 'upstream/emscripten/em++'
    commands, compiled = [], []
    for i, src in enumerate(sources):
        obj = objects / (str(i) + '-' + src.stem + '.o'); compiled.append(obj)
        commands.append([str(emxx), *flags, '-c', str(src), '-o', str(obj)])
    exports = EXPORTS + (['ps2web_experiment_stat', 'ps2web_request_fps'] if image == 'game' else [])
    if network_manifest: exports += network_manifest['exports']
    runtime_methods = ['callMain', 'addRunDependency', 'removeRunDependency', 'HEAPU8', 'ENV', 'FS', 'PThread']
    if network_manifest:
        runtime_methods = list(dict.fromkeys([*runtime_methods, *network_manifest.get('exported_runtime_methods', [])]))
    commands.append([str(emxx), *flags, '--profiling-funcs', '-sJSPI', '-sALLOW_MEMORY_GROWTH=1', '-sINITIAL_MEMORY=268435456',
        '-sPTHREAD_POOL_SIZE=2', '-sALLOW_TABLE_GROWTH=1', '-sSTACK_SIZE=16777216', '-sENVIRONMENT=web', '-sMINIFY_HTML=0',
        '-sEXPORTED_FUNCTIONS=' + ','.join('_' + name for name in exports),
        '-sEXPORTED_RUNTIME_METHODS=' + ','.join(runtime_methods),
        '--shell-file', str(prepared / 'frame.html'), '--preload-file', str(inputs / 'core.elf') + '@/game/core.elf',
        *map(str, compiled), *map(str, retained), '-o', str(web / 'index.html')])
    for name in ['frame.mjs', 'session.mjs', 'audio-worklet.js']: shutil.copy2(HERE / name, web / name)
    network_js_hashes = {}
    if network_manifest:
        destination = web / 'network'; destination.mkdir()
        for name in network_manifest['js_modules']:
            if Path(name).name != name: raise ValueError('Invalid network module name')
            original = network_path.parent / name
            shutil.copy2(original, destination / name)
            network_js_hashes[str(original)] = digest(original)
    manifest = {
        'profile': 'experimental-original-exec-with-native-storage-v1', 'image': image, 'fresh_build': False,
        'status': 'prepared-not-built', 'prepared_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'elf_sha256': prep.HASHES[image], 'base_build_info_sha256': digest(info_path),
        'retained_objects_sha256': retained_hashes, 'sources_sha256': {str(path): digest(path) for path in sources},
        'headers_sha256': {str(path): digest(path) for path in source.rglob('*.hpp')},
        'exec_inputs_sha256': {str(path): digest(path) for path in HERE.iterdir() if path.is_file()},
        'storage_preparation_sha256': storage_hash, 'storage': storage_manifest, 'observer': observer,
        'network_preparation_sha256': network_hash if network_path else None,
        'network': network_manifest, 'network_js_sha256': network_js_hashes,
        'commands': commands, 'shell_sha256': digest(prepared / 'frame.html'),
        'limits': ['Incremental link from fingerprinted retained objects', 'No actual image round-trip proof from preparation/build'],
    }
    (work / 'build-plan.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--image', choices=['game', 'utility'], required=True)
    for name in ['base', 'sdk', 'work']: parser.add_argument('--' + name, type=Path, required=True)
    parser.add_argument('--storage-prepare', type=Path, default=HERE.parent / 'native-storage/prepare.py')
    parser.add_argument('--prepare-only', action='store_true', help='Prepare sources and exact command plan; never run compiler or game')
    parser.add_argument('--network-prepare', type=Path, help='Explicitly compose the network-owned game runtime adapter; off by default')
    args = parser.parse_args()
    base, sdk, work = args.base.resolve(), args.sdk.resolve(), args.work.resolve()
    existed = work.exists()
    try:
        manifest = plan(args.image, base, sdk, work, args.storage_prepare.resolve(), args.network_prepare.resolve() if args.network_prepare else None)
    except Exception as error:
        if not existed and work.exists():
            failure = {'status': 'preparation-failed', 'recorded_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
                       'error': repr(error), 'argv': sys.argv, 'image': args.image}
            (work / 'preparation-failure.json').write_text(json.dumps(failure, indent=2) + '\n')
        raise
    if args.prepare_only:
        print('Prepared only:', work / 'build-plan.json'); return
    env = {**os.environ, 'EM_CONFIG': str(sdk / '.emscripten'), 'EMSDK_PYTHON': sys.executable,
           'EM_CACHE': str(work / 'em-cache'), 'EMCC_CORES': '2', 'BINARYEN_CORES': '2'}
    try:
        version = subprocess.check_output([str(sdk / 'upstream/emscripten/em++'), '--version'], env=env, text=True)
        if '6.0.11' not in version.splitlines()[0]: raise ValueError('Emscripten 6.0.11 required')
        manifest['toolchain'] = version
        manifest['sdk_sha256'] = {str(path): digest(path) for path in [sdk / '.emscripten', sdk / 'upstream/emscripten/em++',
            sdk / 'upstream/emscripten/emcc.py', sdk / 'upstream/bin/clang', sdk / 'upstream/bin/wasm-opt']}
        for command in manifest['commands']:
            manifest['active_command'] = command
            subprocess.run(command, env=env, check=True)
        for category in ['sources_sha256', 'retained_objects_sha256', 'headers_sha256', 'exec_inputs_sha256', 'network_js_sha256']:
            for filename, expected in manifest[category].items():
                if digest(filename) != expected: raise ValueError('Build input changed during build: ' + filename)
        manifest['status'] = 'built-not-runtime-tested'
        manifest['outputs_sha256'] = {path.relative_to(work / 'web').as_posix(): digest(path) for path in (work / 'web').rglob('*') if path.is_file()}
    except Exception as error:
        manifest['status'] = 'failed'; manifest['error'] = repr(error)
        raise
    finally:
        manifest['ended_utc'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
        (work / 'web/build-info.json').write_text(json.dumps(manifest, indent=2) + '\n')


if __name__ == '__main__': main()
