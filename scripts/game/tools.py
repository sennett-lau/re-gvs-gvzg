#!/usr/bin/env python3
"""Build the pinned recompiler and run its exported synthetic regressions."""
import argparse
import os
from pathlib import Path
import shutil
import subprocess
import sys
from build import ROOT, upstream, run

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--work', type=Path, default=ROOT / '.local/compiler-build')
parser.add_argument('--jobs', type=int, default=2)
args = parser.parse_args()
work = args.work.resolve()
if work.exists(): parser.error('Use a new --work directory.')
work.mkdir(parents=True)
source = upstream(work / 'source')
build = work / 'build'
run(['cmake', '-S', source, '-B', build, '-G', 'Ninja', '-DCMAKE_BUILD_TYPE=Release'])
run(['cmake', '--build', build, '--target', 'eerecomp', 'vurecomp', 'ps2runtime', '--parallel', args.jobs])
env = os.environ.copy(); env['EERECOMP'] = str(build / 'eerecomp')
for name in ['analysis_tailcall.py', 'codegen_fallthrough.py']:
    run([sys.executable, ROOT / 'tests/compiler' / name], env=env)
compiler = os.environ.get('CXX') or shutil.which('clang++') or shutil.which('g++')
if not compiler: raise SystemExit('C++ compiler required.')
run([compiler, '-std=c++20', '-O1', '-UNDEBUG', '-I' + str(source / 'runtime/include'),
     '-I' + str(source / 'runtime/src'), ROOT / 'tests/compiler/modload.cpp',
     build / 'libps2runtime.a', '-lpthread', '-o', build / 'test_modload'])
run([build / 'test_modload'])
print('Compiler and module-loader regressions passed.')
