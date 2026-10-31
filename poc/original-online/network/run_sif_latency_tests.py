#!/usr/bin/env python3
"""Offline checks for the opt-in SIF delivery latency candidate (B34).

sif_latency_test.cpp links the real runtime sif.cpp, vendor and prepared, with
stubs and drives EE commands through sif::set_dma. sif_latency_model.cpp links the
vendor EE kernel and shows whether a priority-63 worker gets EE time while
higher-priority threads wait for synchronous RPC replies."""
import argparse
import datetime
import hashlib
import importlib.util
import json
from pathlib import Path
import shutil
import subprocess

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
RUNTIME = ROOT / 'vendor/ps2-web-recomp/runtime'
LATENCIES = [50, 100]
MODEL_RUNS = [(0, 2), (50, 2), (100, 2), (200, 2), (0, 0), (100, 0)]


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def compile_and_run(work, name, runtime, sources, defines=()):
    binary = work / name
    flags = ['-std=c++20', '-O2', '-Wall', '-Wextra', '-Wno-unused-parameter', *defines,
             f'-I{runtime}/include', f'-I{runtime}/src', f'-I{runtime}/src/iop']
    subprocess.run(['c++', *flags, *map(str, sources), '-o', str(binary)], check=True)
    run = subprocess.run([str(binary)], capture_output=True, text=True)
    (work / f'{name}.out').write_text(run.stdout)
    (work / f'{name}.err').write_text(run.stderr)
    return run


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--work', type=Path, required=True)
    args = parser.parse_args()
    args.work.mkdir(parents=True, exist_ok=False)
    spec = importlib.util.spec_from_file_location('sif_latency_prepare', HERE / 'sif_latency_prepare.py')
    prep = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(prep)
    checks, record = {}, {'started_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(timespec='seconds'),
                          'vendor_sif_cpp_sha256': sha(RUNTIME / 'src/iop/sif.cpp'),
                          'sources_sha256': {p: sha(HERE / p) for p in ['sif_latency_prepare.py', 'sif_latency_test.cpp', 'sif_latency_model.cpp']},
                          'compiler': subprocess.run(['c++', '--version'], capture_output=True, text=True).stdout.splitlines()[0]}
    test = HERE / 'sif_latency_test.cpp'
    vendor = compile_and_run(args.work, 'vendor', RUNTIME, [RUNTIME / 'src/iop/sif.cpp', test], ['-DEXPECT_LATENCY_US=0'])
    checks['vendor test passes'] = vendor.returncode == 0
    state = lambda run: [line for line in run.stdout.splitlines() if line.startswith('state_')]
    record['manifests'] = {}
    for us in LATENCIES:
        tree = args.work / f'tree-{us}'
        shutil.copytree(RUNTIME, tree / 'runtime')
        record['manifests'][us] = prep.prepare(tree, us)
        run = compile_and_run(args.work, f'latency-{us}', tree / 'runtime', [tree / 'runtime/src/iop/sif.cpp', test], [f'-DEXPECT_LATENCY_US={us}'])
        checks[f'{us} us test passes'] = run.returncode == 0
        checks[f'{us} us state bytes equal vendor'] = bool(state(run)) and state(run) == state(vendor)
        try:
            prep.prepare(tree, us)
            checks[f'{us} us second preparation refused'] = False
        except ValueError:
            checks[f'{us} us second preparation refused'] = True
    alias = args.work / 'tree-alias'
    shutil.copytree(RUNTIME, alias / 'runtime')
    (alias / 'runtime/src/alias.cpp').write_text('void f() { ps2::schedule(ps2::hw::kEventIop, 0, {}); }\n')
    try:
        prep.prepare(alias, 100)
        checks['kEventIop used elsewhere refused'] = False
    except ValueError:
        checks['kEventIop used elsewhere refused'] = True
    for bad in [None, 0, True, 2001]:
        try:
            prep.patch((RUNTIME / 'src/iop/sif.cpp').read_text(), bad)
            checks[f'latency {bad!r} refused'] = False
        except ValueError:
            checks[f'latency {bad!r} refused'] = True
    negative = compile_and_run(args.work, 'negative-control', RUNTIME, [RUNTIME / 'src/iop/sif.cpp', test], ['-DEXPECT_LATENCY_US=100'])
    checks['negative control (vendor file, 100 us expectation) fails'] = negative.returncode != 0
    model = args.work / 'model'
    subprocess.run(['c++', '-std=c++20', '-O2', f'-I{RUNTIME}/include', f'-I{RUNTIME}/src', f'-I{RUNTIME}/src/iop',
                    str(RUNTIME / 'src/kernel.cpp'), str(HERE / 'sif_latency_model.cpp'), '-o', str(model)], check=True)
    rows = {}
    for latency, rpcs in MODEL_RUNS:
        out = subprocess.run([str(model), str(latency), '0', str(rpcs), '3000', '600'], capture_output=True, text=True, check=True).stdout
        rows[(latency, rpcs)] = json.loads(out)
    record['model'] = list(rows.values())
    worker = lambda latency, rpcs: rows[(latency, rpcs)]['worker_ms_per_s']
    checks['model: no halt'] = all(not row['halt'] for row in rows.values())
    checks['model: zero latency starves the worker'] = worker(0, 2) == 0
    checks['model: 100 us gives the worker more than 5 ms/s'] = worker(100, 2) > 5
    checks['model: worker time grows with latency'] = worker(0, 2) < worker(50, 2) < worker(100, 2) < worker(200, 2)
    checks['model: main-thread RPC alone gives under 1 ms/s at 100 us'] = worker(100, 0) < 1
    record['checks'] = checks
    record['passed'] = all(checks.values())
    (args.work / 'result.json').write_text(json.dumps(record, indent=2, default=str) + '\n')
    for name, ok in checks.items():
        print(('ok  ' if ok else 'FAIL'), name)
    raise SystemExit(0 if record['passed'] else 1)


if __name__ == '__main__':
    main()
