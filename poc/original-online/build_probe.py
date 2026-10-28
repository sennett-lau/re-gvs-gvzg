#!/usr/bin/env python3
"""Incremental diagnostic from retained adaptive WASM objects; never a fresh build."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'scripts/game'))
import build
import prepare


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--base', type=Path, default=ROOT / '.local/game-build')
    parser.add_argument('--sdk', type=Path, required=True)
    parser.add_argument('--work', type=Path, required=True)
    parser.add_argument('--module-discovery', action='store_true', help='Opt into real IRX name / LoadFile09 support')
    args = parser.parse_args()
    base, work, sdk = args.base.resolve(), args.work.resolve(), args.sdk.resolve()
    if work.exists():
        parser.error('Use a new work directory')
    em = sdk / 'upstream/emscripten'
    env = {**os.environ, 'EM_CONFIG': str(sdk / '.emscripten'),
           'EMSDK_PYTHON': sys.executable, 'EMCC_CORES': '2', 'BINARYEN_CORES': '2'}
    version = subprocess.check_output([em / 'em++', '--version'], env=env, text=True)
    if '6.0.11' not in version.splitlines()[0]:
        parser.error('Expected Emscripten 6.0.11')
    work.mkdir(parents=True)
    prepared = work / 'overrides'
    manifest = prepare.prepare(base / 'overrides', prepared)
    for file in (base / 'overrides').glob('*.o'):
        if file.stem + '.cpp' not in prepare.POINTS:
            shutil.copy2(file, prepared / file.name)
    includes = ['-I' + str(p) for p in [prepared, ROOT / 'src/hooks',
        ROOT / 'research/source/render-hooks', base / 'upstream/runtime/include',
        base / 'upstream/runtime/src', ROOT / 'generated/gundam-vs-z-gundam']]
    commands = []
    def run(command, cwd=None):
        command = [str(x) for x in command]
        commands.append({'argv': command, 'cwd': str(cwd or ROOT)})
        subprocess.run(command, env=env, cwd=cwd, check=True)
    for name in prepare.POINTS:
        print('Compile observer:', name, flush=True)
        run([em / 'em++', *build.FLAGS, *includes, '-c', prepared / name,
             '-o', prepared / (Path(name).stem + '.o')])
    runtime_objects = []
    if args.module_discovery:
        import prepare_runtime
        runtime = work / 'runtime-overrides'
        manifest['runtime_slice'] = prepare_runtime.prepare(base / 'upstream', runtime)
        for name in ['kernel', 'sif']:
            obj = runtime / (name + '.o')
            run([em / 'em++', *build.FLAGS, *includes, '-I' + str(runtime),
                 '-I' + str(base / 'upstream/runtime/src/iop'), '-c', runtime / (name + '.cpp'), '-o', obj])
            runtime_objects.append(obj)
    shutil.copytree(base / 'inputs', work / 'inputs')
    output = work / 'web'; output.mkdir()
    objects = [prepared / (name + '.o') for name in ['system', 'web',
        'full_game_web_hooks', 'full_game_interpolation', 'vif', 'unit_0044',
        'unit_0039', 'unit_0049', 'unit_004D', 'unit_0047', 'unit_0001', 'unit_0081', 'unit_009A', 'unit_0099']]
    archives = [base / 'base/libps2game.a', base / 'base/libps2runtime.a']
    provenance = {str(p.relative_to(base)): build.digest(p) for p in archives}
    run([em / 'em++', *build.FLAGS, '-sJSPI', '-sALLOW_MEMORY_GROWTH=1',
        '-sINITIAL_MEMORY=268435456', '-sPTHREAD_POOL_SIZE=2', '-sALLOW_TABLE_GROWTH=1',
        '-lidbfs.js', '-sSTACK_SIZE=16777216', '-sENVIRONMENT=web', '-sMINIFY_HTML=0',
        '-sEXPORTED_FUNCTIONS=' + ','.join('_' + n for n in build.EXPORTS),
        '-sEXPORTED_RUNTIME_METHODS=callMain,addRunDependency,removeRunDependency,HEAPU8,ENV',
        '--shell-file', ROOT / 'apps/game/shell.html', '--preload-file',
        '../inputs/boot.txt@/game/boot.txt', '--preload-file', '../inputs/core.elf@/game/core.elf',
        *objects, *runtime_objects, *archives, '-o', 'index.html'], cwd=output)
    for file in (ROOT / 'apps/game/assets').iterdir():
        if file.is_file() and file.name != 'package.json': shutil.copy2(file, output / file.name)
    for name in ['netplay-game.js', 'netplay-transport.js']:
        shutil.copy2(ROOT / 'poc/lockstep/web' / name, output / name)
    result = {'profile': 'original-online-observer-v3', 'fresh_build': False,
        'toolchain': version.splitlines()[0], 'archives_sha256': provenance,
        'observer': manifest,
        'linked_objects_sha256': {str(p.relative_to(work)): build.digest(p) for p in objects + runtime_objects},
        'inputs_sha256': {p.name: build.digest(p) for p in (work / 'inputs').iterdir() if p.is_file()},
        'build_sources_sha256': {str(p.relative_to(ROOT)): build.digest(p) for p in [
            Path(__file__), Path(prepare.__file__), ROOT / 'poc/original-online/observer.hpp',
            ROOT / 'poc/original-online/prepare_runtime.py', ROOT / 'poc/original-online/module_names.hpp',
            ROOT / 'scripts/game/build.py', ROOT / 'apps/game/shell.html']},
        'sdk_sha256': {str(p.relative_to(sdk)): build.digest(p) for p in [
            sdk / '.emscripten', em / 'em++', em / 'emcc.py',
            sdk / 'upstream/bin/clang', sdk / 'upstream/bin/wasm-opt']},
        'commands': commands,
        'files_sha256': {p.name: build.digest(p) for p in output.iterdir()}}
    (output / 'build-info.json').write_text(json.dumps(result, indent=2) + '\n')
    print('Observer ready:', output, flush=True)


if __name__ == '__main__': main()
