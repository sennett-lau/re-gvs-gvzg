#!/usr/bin/env python3
"""Check the opt-in module start correction natively against the same runtime without it."""
import argparse
import datetime
import json
import os
import platform
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[3]
sys.path.insert(0, str(HERE))
import run as device_run  # noqa: E402

START_STACK = 0x4000


def build(work, corrected, cxx, runtime_patch=None):
    tree = work / 'upstream'
    shutil.copytree(ROOT / 'vendor/ps2-web-recomp', tree, ignore=shutil.ignore_patterns('.git'))
    if runtime_patch:
        subprocess.run(['patch', '-p1', '-s', '-i', str(runtime_patch)], cwd=tree, check=True)
    manifests = [device_run.load('storage', ROOT / 'poc/original-online/native-storage/prepare.py').prepare(tree),
                 device_run.load('device', HERE.parent / 'prepare.py').prepare(tree)]
    if corrected:
        manifests.append(device_run.load('module_start', HERE.parent / 'module_start.py').prepare(tree))
    src = tree / 'runtime/src'
    flags = ['-std=c++20', '-O2', '-Wall', '-Wextra', '-Werror', '-Wno-unused-parameter', '-I', str(tree / 'runtime/include'), '-I', str(src)]
    objects = []
    for name in device_run.IOP + ['dev9']:
        obj = work / f'{name}.o'
        subprocess.run([cxx, *flags, '-c', str(src / 'iop' / f'{name}.cpp'), '-o', str(obj)], check=True)
        objects.append(str(obj))
    subprocess.run([cxx, *flags, str(device_run.HARNESS), *objects, '-o', str(work / 'harness')], check=True)
    return manifests


def scenario(work, modules, script, direct):
    env = {**os.environ, **({'PS2_HARNESS_DIRECT': '1'} if direct else {})}
    env.pop('PS2_DEV9_TRACE', None)
    done = subprocess.run([str(work / 'harness'), 'none', str(HERE / script), *map(str, modules)], cwd=work,
                          capture_output=True, text=True, timeout=600, env=env)
    stem = Path(script).stem
    (work / f'{stem}.jsonl').write_text(done.stdout)
    (work / f'{stem}.log').write_text(done.stderr)
    calls = [json.loads(l) for l in done.stdout.splitlines() if '"event":"call"' in l]
    return done.returncode, calls, done.stderr


def at(calls, index):
    return calls[index] if len(calls) > index else {}


def check_lifetime(calls, corrected):
    modules, before, after = at(calls, 1).get('modules', []), at(calls, 2).get('threads', []), at(calls, 54).get('threads', [])
    entries = {m['entry'] for m in modules}
    starts = lambda threads: [t for t in threads if t['entry'] in entries]
    key = lambda t: (t['id'], t['entry'], t['stack'], t['stack_size'])
    kept = {key(t) for t in before if t['entry'] not in entries} <= {key(t) for t in after}
    added = [t for t in after if t['id'] not in {b['id'] for b in before}]
    freed = at(calls, 2).get('free_total', 0) - at(calls, 54).get('free_total', 0)
    callers = calls[3:53]
    common = len(calls) == 55 and len(callers) == 50 and all(c['completed'] for c in callers)
    if corrected:
        return {'lifetime: 50 callers completed': common,
                'lifetime: no start thread of a loaded module remains': common and not starts(before) and not starts(after),
                'lifetime: no caller thread remains': common and not added,
                'lifetime: free memory unchanged by the callers': common and freed == 0,
                'lifetime: every other thread kept with its stack': common and kept and len(before) > 0}
    return {'control lifetime: each finished start thread keeps its stack': common and len(added) == 50 and all(t['status'] == 16 and t['stack_size'] == START_STACK for t in added),
            'control lifetime: callers hold 50 start stacks': common and freed == 50 * START_STACK,
            'control lifetime: loaded modules left dormant start threads': len(starts(before)) == len(modules) and all(t['status'] == 16 for t in starts(before))}


def check_createthread(calls, corrected):
    common = len(calls) == 72 and at(calls, 68).get('result', 0) > 0 and at(calls, 69).get('result') == 0
    zero = [t for t in at(calls, 71).get('threads', []) if not t['stack']]
    if corrected:
        return {'createthread: exact 0x3000 stack fits and is deleted': common,
                'createthread: 0x3001 stack is KE_NO_MEMORY': common and at(calls, 70).get('result') == -400,
                'createthread: no thread without a stack': common and not zero,
                # The caller takes 0x4500 bytes (word buffer, table, arguments 0x100 each, image 0x200, start stack
                # 0x4000) from the 0x5000-byte block. More than 0x3100 bytes then remain free in total, so the
                # 0x3001-byte request fails for want of one block that large, not for want of memory.
                'createthread: free memory is fragmented, not exhausted': common and at(calls, 67).get('free_max') == 0x5000
                and at(calls, 67).get('free_total', 0) - 0x4500 >= 0x3100}
    created = at(calls, 70).get('result', 0)
    return {'control createthread: 0x3001 stack gives a thread on address 0': common and created > 0 and [t['id'] for t in zero] == [created]}


def check_failure(code, calls, corrected):
    callers = calls[68:73]
    if corrected:
        before, after = at(calls, 74), at(calls, 76)
        return {'failure: five callers reuse one start stack block': code == 0 and len(callers) == 5 and all(c['completed'] for c in callers),
                'failure: start without a stack fails with KE_NO_MEMORY': code == 0 and at(calls, 75).get('load_result') == -400,
                'failure: failed start releases image and arguments': code == 0 and before.get('free_total') == after.get('free_total') and before.get('threads') == after.get('threads'),
                'failure: no thread without a stack': code == 0 and not [t for c in calls for t in c.get('threads', []) if not t['stack']]}
    last = calls[-1] if calls else {}
    return {'control failure: second caller would start on address 0': code == 5 and len(calls) == 70 and 'has no stack' in last.get('stopped', '')}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--modules', type=Path, required=True, help='folder with the original SMAP.IRX')
    parser.add_argument('--game-dev9', type=Path, required=True, help="the game's NETMOD_E/DEV9.IRX")
    parser.add_argument('--game-modules', type=Path, required=True, help="folder with the game's AVETCP.IRX, DEVGLUE.IRX and AVEWRAPE.IRX")
    parser.add_argument('--work', type=Path, required=True, help='new output folder')
    parser.add_argument('--runtime-patch', type=Path, help='apply this runtime patch first, e.g. patches/runtime/gundam-support.patch')
    parser.add_argument('--cxx', default='clang++')
    args = parser.parse_args()
    work = args.work.resolve()
    if work.exists():
        parser.error('Use a new work folder')
    found = {name: (args.game_modules / name).resolve() for name in device_run.GAME_MODULES}
    for name, prefix in device_run.GAME_MODULES.items():
        if not device_run.sha(found[name]).startswith(prefix):
            parser.error(f'Unexpected game {name}')
    if device_run.DEV9_VARIANTS.get(device_run.sha(args.game_dev9)[:16]) != 'game NETMOD_E 2710':
        parser.error('Unexpected game DEV9.IRX')
    smap = (args.modules / 'SMAP.IRX').resolve()
    if not device_run.sha(smap).startswith(device_run.MODULES['SMAP.IRX']):
        parser.error('Unexpected SMAP.IRX')
    (work / 'game-modules').mkdir(parents=True)
    shutil.copyfile(args.game_dev9, work / 'game-modules/DEV9.IRX')
    order = [found['AVETCP.IRX'], found['DEVGLUE.IRX'], work / 'game-modules/DEV9.IRX', smap, found['AVEWRAPE.IRX']]
    report = {'started_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(), 'host': platform.platform(),
              'harness_sha256': device_run.sha(device_run.HARNESS), 'module_start_sha256': device_run.sha(HERE.parent / 'module_start.py'),
              'runtime_patch_sha256': args.runtime_patch and device_run.sha(args.runtime_patch), 'checks': {}}
    for name, corrected in [('control', False), ('corrected', True)]:
        folder = work / name
        folder.mkdir()
        report[name + '_runtime'] = build(folder, corrected, args.cxx, args.runtime_patch and args.runtime_patch.resolve())
        _, calls, _ = scenario(folder, order, 'module-start-lifetime.txt', True)
        report['checks'].update(check_lifetime(calls, corrected))
        _, calls, _ = scenario(folder, order, 'module-start-createthread.txt', False)
        report['checks'].update(check_createthread(calls, corrected))
        code, calls, _ = scenario(folder, order, 'module-start-failure.txt', True)
        report['checks'].update(check_failure(code, calls, corrected))
        report[name] = {'failure_exit': code, 'failure_calls': len(calls)}
    report['passed'] = all(report['checks'].values())
    (work / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'passed': report['passed'], 'failed': [k for k, v in report['checks'].items() if not v], 'report': str(work / 'report.json')}))
    return 0 if report['passed'] else 1


if __name__ == '__main__':
    sys.exit(main())
