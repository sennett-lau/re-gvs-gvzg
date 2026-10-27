#!/usr/bin/env python3
"""Compile the exported C++ and adaptive hooks without historical object files."""
import argparse
import hashlib
import importlib.util
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
ELF_SHA = '294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6'
VENDOR = ROOT / 'vendor/ps2-web-recomp'
EXPORTS = ['main', 'ps2web_pad', 'ps2web_pad_connected', 'ps2web_resize',
           'ps2web_gpu_ms', 'ps2web_frames', 'ps2web_primitives', 'ps2web_audio_ring',
           'ps2web_audio_queued_ms', 'ps2web_idle_ms', 'ps2web_vu_interpreted',
           'ps2web_experiment_stat', 'ps2web_request_fps']
FLAGS = ['-O3', '-DNDEBUG', '-std=c++20', '-DPS2_GPU', '-msimd128', '-mtail-call',
         '-fwasm-exceptions', '-sWASM_LEGACY_EXCEPTIONS=0', '-pthread', '--use-port=emdawnwebgpu']


def digest(file):
    h = hashlib.sha256()
    with file.open('rb') as stream:
        for block in iter(lambda: stream.read(1 << 20), b''):
            h.update(block)
    return h.hexdigest()


def run(command, cwd=None, env=None):
    subprocess.run([str(v) for v in command], cwd=cwd, env=env, check=True)


def upstream(output):
    """Copy a verified pin; apply the exported compiler/runtime compatibility fixes."""
    expected = json.loads((ROOT / 'vendor/manifest.json').read_text())['files_sha256']
    for name, sha in expected.items():
        if digest(VENDOR / name) != sha:
            raise ValueError('Pinned vendor source changed: ' + name)
    shutil.copytree(VENDOR, output)
    for name in ['compiler/gundam-support.patch', 'runtime/gundam-support.patch']:
        run(['git', 'apply', '--unsafe-paths', '--directory=' + str(output), ROOT / 'patches' / name], cwd=ROOT)
    return output


def extract_disc(disc, output):
    spec = importlib.util.spec_from_file_location('disc', VENDOR / 'scripts/disc.py')
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    image = module.Image(disc)
    try:
        entry = image.find('SLPS_254.19')
        if entry is None:
            raise ValueError('Expected the Japanese SLPS-25419 disc.')
        image.copy(entry, output / 'core.elf')
        if digest(output / 'core.elf') != ELF_SHA:
            raise ValueError('Executable fingerprint differs from the supported SLPS-25419 disc.')
        # Original BOOT2 argument. This is metadata, not another executable.
        (output / 'boot.txt').write_bytes(b'cdrom0:\\SLPS_254.19;1\n')
    finally:
        image.file.close()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--disc', type=Path, required=True)
    parser.add_argument('--emsdk', type=Path, default=os.environ.get('EMSDK'))
    parser.add_argument('--work', type=Path, default=ROOT / '.local/game-build')
    parser.add_argument('--jobs', type=int, default=2)
    args = parser.parse_args()
    if not args.emsdk:
        parser.error('Set EMSDK or pass --emsdk pointing to an activated Emscripten 6.0.11 SDK.')
    if args.jobs < 1:
        parser.error('--jobs must be positive')
    work = args.work.resolve()
    if work.exists():
        parser.error('Use a new --work directory; existing builds are never overwritten.')
    em = args.emsdk.resolve() / 'upstream/emscripten'
    emxx = em / 'em++'
    if sys.version_info < (3, 10):
        parser.error('Game builds require Python 3.10 or newer.')
    os.environ.setdefault('EMSDK_PYTHON', sys.executable)
    os.environ.setdefault('EM_CONFIG', str(args.emsdk.resolve() / '.emscripten'))
    version = subprocess.check_output([str(emxx), '--version'], text=True)
    if '6.0.11' not in version.splitlines()[0]:
        parser.error('The exported profile requires Emscripten 6.0.11.')
    work.mkdir(parents=True)
    source_files = {}
    for directory in ['vendor/ps2-web-recomp', 'generated/gundam-vs-z-gundam', 'patches', 'src/hooks',
                      'apps/game/src', 'apps/game/assets', 'research/source/render-hooks', 'scripts/game']:
        for file in sorted((ROOT / directory).rglob('*')):
            if file.is_file() and '__pycache__' not in file.parts:
                source_files[file.relative_to(ROOT).as_posix()] = digest(file)
    source_files['apps/game/shell.html'] = digest(ROOT / 'apps/game/shell.html')
    inputs = work / 'inputs'; inputs.mkdir()
    extract_disc(args.disc.resolve(), inputs)
    source = upstream(work / 'upstream')
    generated = ROOT / 'generated/gundam-vs-z-gundam'
    hooks = ROOT / 'src/hooks'
    prepared = work / 'overrides'
    run([sys.executable, ROOT / 'research/source/render-hooks/prepare.py', '--generated', generated, '--output', prepared])
    for name in ['system', 'vif']:
        # Adaptive changes are separate from the base runtime archive.
        patch = ROOT / f'patches/runtime/adaptive-{name}.patch'
        temporary = work / ('override-' + name)
        target = temporary / 'runtime/src'; target.mkdir(parents=True)
        shutil.copy2(source / f'runtime/src/{name}.cpp', target / (name + '.cpp'))
        run(['git', 'apply', '--unsafe-paths', '--directory=' + str(temporary), patch], cwd=ROOT)
        shutil.copy2(target / (name + '.cpp'), prepared / (name + '.cpp'))
    env = os.environ.copy()
    env.update(EMCC_CORES=str(args.jobs), BINARYEN_CORES=str(args.jobs))
    base = work / 'base'
    run([em / 'emcmake', 'cmake', '-S', source, '-B', base, '-G', 'Ninja',
         '-DCMAKE_BUILD_TYPE=Release', '-DPS2_GENERATED=' + str(generated),
         '-DPS2_WEB_ELF=' + str(inputs / 'core.elf'),
         '-DPS2_WEB_BOOT_FILE=' + str(inputs / 'boot.txt')], env=env)
    run(['cmake', '--build', base, '--target', 'ps2game', 'ps2runtime', '--parallel', args.jobs], env=env)
    includes = ['-I' + str(p) for p in [hooks, ROOT / 'research/source/render-hooks',
                source / 'runtime/include', source / 'runtime/src', generated]]
    sources = [prepared / 'system.cpp', ROOT / 'apps/game/src/web.cpp',
               hooks / 'full_game_web_hooks.cpp', hooks / 'full_game_interpolation.cpp',
               prepared / 'vif.cpp', *[prepared / (n + '.cpp') for n in
               ['unit_0044', 'unit_0039', 'unit_0049', 'unit_004D', 'unit_0047']]]
    objects = []
    for source_file in sources:
        obj = prepared / (source_file.stem + '.o')
        print('Compile override:', source_file.name, flush=True)
        run([emxx, *FLAGS, *includes, '-c', source_file, '-o', obj], env=env)
        objects.append(obj)
    output = work / 'web'; output.mkdir()
    # Relative preload paths keep private checkout paths out of the data loader.
    run([emxx, *FLAGS, '-sJSPI', '-sALLOW_MEMORY_GROWTH=1', '-sINITIAL_MEMORY=268435456',
         '-sPTHREAD_POOL_SIZE=2', '-sALLOW_TABLE_GROWTH=1', '-lidbfs.js', '-sSTACK_SIZE=16777216',
         '-sENVIRONMENT=web', '-sMINIFY_HTML=0',
         '-sEXPORTED_FUNCTIONS=' + ','.join('_' + n for n in EXPORTS),
         '-sEXPORTED_RUNTIME_METHODS=callMain,addRunDependency,removeRunDependency,HEAPU8,ENV',
         '--shell-file', ROOT / 'apps/game/shell.html',
         '--preload-file', '../inputs/boot.txt@/game/boot.txt',
         '--preload-file', '../inputs/core.elf@/game/core.elf',
         *objects, base / 'libps2game.a', base / 'libps2runtime.a', '-o', 'index.html'], cwd=output, env=env)
    for asset in (ROOT / 'apps/game/assets').iterdir():
        if asset.is_file() and asset.name != 'package.json':
            shutil.copy2(asset, output / asset.name)
    files = {p.name: {'sha256': digest(p), 'bytes': p.stat().st_size} for p in sorted(output.iterdir()) if p.is_file()}
    info = {'profile': 'full-game-adaptive', 'emscripten': '6.0.11', 'elf_sha256': ELF_SHA,
            'simulation_hz': 60, 'render_rates': [60, 72, 80, 90, 100, 110, 120],
            'source_files_sha256': source_files,
            'files': files}
    for name, expected in source_files.items():
        if digest(ROOT / name) != expected:
            raise ValueError('Source changed during build: ' + name)
    (output / 'build-info.json').write_text(json.dumps(info, indent=2) + '\n')
    print('Fresh build completed:', output, flush=True)


if __name__ == '__main__':
    main()
