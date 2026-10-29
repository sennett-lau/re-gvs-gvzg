#!/usr/bin/env python3
"""Retain native/source test commands, failures, timestamps and fingerprints."""
import argparse
import datetime
import hashlib
import importlib.util
import json
from pathlib import Path
import shutil
import subprocess
import sys

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--cxx', default='c++')
    args = parser.parse_args()
    out = args.output.resolve(); out.mkdir(parents=True, exist_ok=False)
    records = []
    report = {'synthetic_only': True, 'game_executed': False, 'commands': records,
              'sources_sha256': {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in HERE.iterdir() if p.is_file()}}
    def run(command):
        record = {'command': list(map(str, command)), 'started_utc': datetime.datetime.now(datetime.timezone.utc).isoformat()}
        result = subprocess.run(record['command'], cwd=out, capture_output=True, text=True)
        log = out / f'command-{len(records):02d}.log'; log.write_text(result.stdout + result.stderr)
        record.update(ended_utc=datetime.datetime.now(datetime.timezone.utc).isoformat(), exit_code=result.returncode,
                      log=log.name, sha256=hashlib.sha256(log.read_bytes()).hexdigest())
        records.append(record)
        if result.returncode: raise RuntimeError(f'Command failed; retained {log}')
    try:
        spec = importlib.util.spec_from_file_location('disc_model_runner', HERE / 'prepare.py')
        prep = importlib.util.module_from_spec(spec); spec.loader.exec_module(prep)
        tree = out / 'upstream'
        shutil.copytree(ROOT / 'vendor/ps2-web-recomp/runtime', tree / 'runtime')
        report['preparation'] = prep.prepare(tree)
        # The adapter's only synthetic adjustment is the fixture pathname.
        source = (HERE / 'adapter.inc').read_text()
        assert source.count('"/game/core.elf"') == 1
        adapted = source.replace('"/game/core.elf"', '"reference.elf"')
        (out / 'adapter-fixture.inc').write_text(adapted)
        report['adapter_fixture_adjustment'] = 'Only /game/core.elf -> relative synthetic reference.elf; no production API override'
        flags = ['-std=c++20', '-O1', '-g', '-Wall', '-Wextra', '-Werror', '-I'+str(HERE), '-I'+str(out),
                 '-I'+str(tree / 'runtime/include'), '-I'+str(tree / 'runtime/src')]
        for name, sources in [('model', [HERE / 'model.cpp', HERE / 'model_test.cpp']),
                              ('reader', [tree / 'runtime/src/disc.cpp', HERE / 'reader_test.cpp']),
                              ('adapter', [HERE / 'model.cpp', HERE / 'adapter_test.cpp'])]:
            binary = out / (name + '-test')
            run([args.cxx, *flags, *sources, '-o', binary]); run([binary])
        # Compile the actual fully prepared runtime source, not just fragments.
        run([args.cxx, *flags, '-Wno-unused-parameter', '-c', tree / 'runtime/src/iop/cdvd.cpp', '-o', out / 'cdvd.o'])
        run([sys.executable, '-B', '-m', 'unittest', 'discover', '-s', HERE, '-p', 'prepare_test.py'])
        for name, expected in report['sources_sha256'].items():
            if hashlib.sha256((HERE / name).read_bytes()).hexdigest() != expected:
                raise RuntimeError('Test source changed during run: ' + name)
        report['passed'] = True
    except Exception as error:
        report['passed'] = False; report['error'] = str(error)
    finally:
        report['ended_utc'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
        (out / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'passed': report['passed'], 'report': str(out / 'report.json'), 'error': report.get('error')}))
    return 0 if report['passed'] else 1


if __name__ == '__main__': sys.exit(main())
