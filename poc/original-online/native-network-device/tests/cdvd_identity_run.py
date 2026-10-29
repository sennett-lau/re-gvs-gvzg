#!/usr/bin/env python3
"""Check the opt-in cdvdman exports 80 and 82 natively against the same runtime without them.

Both runtimes run tests/cdvd-identity.txt through the harness, which calls each export through an IOP
import stub as a module does. No original module is needed: the library is the runtime's own cdvdman.
"""
import argparse
import datetime
import json
import platform
import re
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[3]
sys.path.insert(0, str(HERE))
import run as device_run  # noqa: E402

SCRIPT = 'cdvd-identity.txt'
GUID = '0046000800000000'  # words 0x08004600 and 0 from an all-zero i.LINK ID, little-endian


def pattern(size, seed):
    out, value = bytearray(), seed
    for _ in range(size):
        value = (value * 1103515245 + 12345) & 0xFFFFFFFF
        out.append((value >> 16) & 0xFF)
    return out.hex()


def build(work, corrected, cxx, runtime_patch=None):
    tree = work / 'upstream'
    shutil.copytree(ROOT / 'vendor/ps2-web-recomp', tree, ignore=shutil.ignore_patterns('.git'))
    if runtime_patch:
        subprocess.run(['patch', '-p1', '-s', '-i', str(runtime_patch)], cwd=tree, check=True)
    manifests = [device_run.load('storage', ROOT / 'poc/original-online/native-storage/prepare.py').prepare(tree)]
    if corrected:
        manifests.append(device_run.load('cdvd_identity', HERE.parent / 'cdvd_identity.py').prepare(tree))
    src = tree / 'runtime/src'
    flags = ['-std=c++20', '-O2', '-Wall', '-Wextra', '-Werror', '-Wno-unused-parameter', '-I', str(tree / 'runtime/include'), '-I', str(src)]
    objects = []
    for name in device_run.IOP:
        obj = work / f'{name}.o'
        subprocess.run([cxx, *flags, '-c', str(src / 'iop' / f'{name}.cpp'), '-o', str(obj)], check=True)
        objects.append(str(obj))
    subprocess.run([cxx, *flags, str(device_run.HARNESS), *objects, '-o', str(work / 'harness')], check=True)
    return manifests


def scenario(work):
    done = subprocess.run([str(work / 'harness'), 'none', str(HERE / SCRIPT)], cwd=work, capture_output=True, text=True, timeout=600)
    (work / 'cdvd-identity.jsonl').write_text(done.stdout)
    (work / 'cdvd-identity.log').write_text(done.stderr)
    # A call line repeats "buffer" once per buffer argument, so keep all of them, in argument order.
    events = [{**json.loads(l), 'buffers': re.findall(r'"buffer":"([0-9a-f]*)"', l)} for l in done.stdout.splitlines()]
    calls = [e for e in events if e['event'] == 'call']
    halts = [(sum(1 for e in events[:i] if e['event'] == 'call'), e['reason']) for i, e in enumerate(events) if e['event'] == 'halt']
    return done.returncode, calls, halts, done.stderr


SPAN = 'sceCdReadGUID output is not IOP RAM or scratchpad'
MODEL_SPAN = 'sceCdReadModelID output is not IOP RAM or scratchpad'
GUID_CALLS = [1, 3, 6, 9, 12, 14, 16, 19, 21, 22, 23, 25]  # every export 80 call in the script
MODEL_CALLS = [28, 30, 32, 34, 36, 37, 38, 39]  # every export 82 call


def checks(code, calls, halts, log, corrected):
    at = lambda i: calls[i] if len(calls) > i else {}
    result = lambda i: at(i).get('result')
    data = lambda i: at(i).get('buffer')
    out, odd, seg, mirror, model = pattern(16, 7), pattern(16, 9), pattern(16, 11), pattern(16, 13), pattern(12, 15)
    common = code == 0 and len(calls) == 41 and all(c.get('completed') for c in calls)
    unchanged = common and data(15) == data(17) and data(18) == data(20)
    ri = {'sceCdRI report unchanged: result 1, zero ID, status 0': common and result(0) == 1 and at(0).get('buffers') == ['00' * 8, '00' * 4]}
    if corrected:
        return {**ri,
                'export 80: returns 1 and stores the retail GUID in 8 bytes': common and result(1) == 1 and data(1) == GUID + pattern(16, 80)[16:],
                'export 80: interior aligned output changes only its 8 bytes': common and result(3) == 1 and data(4) == out[:8] + GUID + out[24:],
                'export 80: segment alias and RAM mirror store into the same buffer': common and result(9) == 1 and data(10) == seg[:8] + GUID + seg[24:]
                and result(12) == 1 and data(13) == mirror[:16] + GUID,
                'export 80: last scratchpad words are stored': common and result(14) == 1 and data(15)[16:] == GUID,
                'export 80: second word across the 2 MiB mirror lands on RAM 0': common and result(23) == 1 and data(24) == GUID[:8]
                and result(25) == 1 and data(26) == data(18)[:8] + GUID[:8] and data(27) == GUID[8:],
                'export 80: unaligned output stops the run and stores nothing': common and result(6) == 0 and data(7) == odd,
                'export 80: unsupported spans stop the run and store nothing': unchanged and [result(i) for i in (16, 19, 21, 22)] == [0, 0, 0, 0],
                'export 82: returns 1 and stores one zero word over a pattern': common and result(28) == 1 and data(28) == '00' * 4 + pattern(8, 82)[8:]
                and result(30) == 1 and data(31) == model[:8] + '00' * 4 + model[16:],
                'export 82: unaligned output stops the run and stores nothing': common and result(32) == 0 and data(33) == data(31),
                'export 82: one word may end the RAM window or the scratchpad': common and result(34) == 1
                and data(35) == data(26)[:8] + '00' * 4 and data(26)[8:] != '00' * 4 and result(36) == 1,
                'export 82: one word past them or a wrap stops the run and stores nothing': common
                and [result(i) for i in (37, 38, 39)] == [0, 0, 0] and data(40) == data(35),
                'exports 80 and 82: one stop for each refused output, in order':
                halts == [(6, 'sceCdReadGUID output is not word aligned'), (16, SPAN), (19, SPAN), (21, SPAN), (22, SPAN),
                          (32, 'sceCdReadModelID output is not word aligned'), (37, MODEL_SPAN), (38, MODEL_SPAN), (39, MODEL_SPAN)],
                'exports 80 and 82: no missing-export report': '[iop] missing cdvdman #80' not in log and '[iop] missing cdvdman #82' not in log}
    return {**ri,
            'control export 80: missing export returns 0 and stores nothing': common and all(result(i) == 0 for i in GUID_CALLS)
            and data(1) == pattern(16, 80) and data(4) == out and data(7) == odd and data(10) == seg and data(13) == mirror
            and unchanged and data(26) == data(18) and data(27) == data(24) and not halts,
            'control export 82: missing export returns 0 and stores nothing': common and all(result(i) == 0 for i in MODEL_CALLS)
            and data(28) == pattern(8, 82) and data(31) == model and data(33) == model and data(35) == data(26) and data(40) == data(35),
            'control exports 80 and 82: runtime reports both missing exports': '[iop] missing cdvdman #80' in log and '[iop] missing cdvdman #82' in log}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--work', type=Path, required=True, help='new output folder')
    parser.add_argument('--runtime-patch', type=Path, help='apply this runtime patch first, e.g. patches/runtime/gundam-support.patch')
    parser.add_argument('--cxx', default='clang++')
    args = parser.parse_args()
    work = args.work.resolve()
    if work.exists():
        parser.error('Use a new work folder')
    work.mkdir(parents=True)
    report = {'started_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(), 'host': platform.platform(),
              'harness_sha256': device_run.sha(device_run.HARNESS), 'script_sha256': device_run.sha(HERE / SCRIPT),
              'cdvd_identity_sha256': {name: device_run.sha(HERE.parent / name) for name in ('cdvd_identity.py', 'cdvd_identity.hpp')},
              'runtime_patch_sha256': args.runtime_patch and device_run.sha(args.runtime_patch), 'checks': {}}
    derivation = work / 'cdvd-identity-test'
    subprocess.run([args.cxx, '-std=c++20', '-O1', '-Wall', '-Wextra', '-Werror', '-I', str(HERE.parent), str(HERE / 'cdvd_identity_test.cpp'),
                    '-o', str(derivation)], check=True)
    unit = subprocess.run([str(derivation)], capture_output=True, text=True)
    report['checks']['derivation unit test'] = unit.returncode == 0 and unit.stdout.strip() == 'cdvd identity derivation: ok'
    for name, corrected in [('control', False), ('corrected', True)]:
        folder = work / name
        folder.mkdir()
        report[name + '_runtime'] = build(folder, corrected, args.cxx, args.runtime_patch and args.runtime_patch.resolve())
        code, calls, halts, log = scenario(folder)
        report['checks'].update(checks(code, calls, halts, log, corrected))
        report[name] = {'exit': code, 'calls': len(calls), 'halts': halts}
    report['passed'] = all(report['checks'].values())
    (work / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'passed': report['passed'], 'failed': [k for k, v in report['checks'].items() if not v], 'report': str(work / 'report.json')}))
    return 0 if report['passed'] else 1


if __name__ == '__main__':
    sys.exit(main())
