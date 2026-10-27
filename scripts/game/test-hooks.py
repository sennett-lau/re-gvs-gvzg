#!/usr/bin/env python3
"""Run the exported controller and interpolation regressions without game IO."""
import os
from pathlib import Path
import shutil
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[2]
compiler = os.environ.get('CXX') or shutil.which('clang++') or shutil.which('g++')
if not compiler: raise SystemExit('C++20 compiler required.')
flags = [compiler, '-std=c++20', '-O2', '-UNDEBUG', *['-I' + str(ROOT / p) for p in
         ['vendor/ps2-web-recomp/runtime/include', 'src/hooks', 'research/source/render-hooks']]]
source = ROOT / 'tests/hooks'
controller = '-DCONTROLLER="' + str(ROOT / 'src/hooks/full_game_web_hooks.cpp') + '"'
def run(command): subprocess.run(list(map(str, command)), check=True, stdout=subprocess.DEVNULL)
with tempfile.TemporaryDirectory(prefix='gvs-hooks-') as directory:
    work = Path(directory)
    for name in ['controller_test', 'controller_phase_test', 'render_math_test']:
        run([*flags, controller, '-DCANDIDATE', source / (name + '.cpp'), '-o', work / name])
    for case in ['predicates', 'legacy', 'versus']: run([work / 'controller_test', case])
    for case in [*(f'fixed{n}' for n in range(60,121)), 'dynamic', 'variable']:
        run([work / 'controller_phase_test', case])
    run([work / 'render_math_test'])
    names = ['model_copy','interpolated_models','attachment_source','camera_begin','camera_end','interpolated_cameras','reset_interpolation']
    objects = []
    for label, file in [('reference', source / 'full_game_interpolation_reference.cpp'),
                        ('candidate', ROOT / 'src/hooks/full_game_interpolation.cpp')]:
        obj = work / (label + '.o'); objects.append(obj)
        run([*flags, *[f'-Dresearch_{n}={label}_{n}' for n in names], '-c', file, '-o', obj])
    for name in ['interpolation_equivalence', 'interpolation_allocations']:
        run([*flags, source / (name + '.cpp'), *objects, '-o', work / name])
        result = subprocess.check_output([str(work / name)], text=True)
        print(result.strip())
print('Controller predicates, scene transitions, 63 phase suites and render math passed.')
