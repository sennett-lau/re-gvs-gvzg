#!/usr/bin/env python3
"""Build the prepared IOP runtime natively and check original DEV9/SMAP detection of the virtual adaptor."""
import argparse
import datetime
import hashlib
import json
import os
import platform
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[3]
HARNESS = ROOT / 'poc/original-online/native-storage/tests/harness.cpp'
MODULES = {  # NTGUIDVD/MODULES on the supported disc; SMAP is identical to the game's NETMOD_E copy
    'INET.IRX': '01a2ebe9c82d5726',
    'DEV9.IRX': '87ce732b196612d7',
    'SMAP.IRX': '1590f19218200201',
}
# Every DEV9 the disc carries: the utility's (also MODULE/DEV9.IRX) and the game's NETMOD_E/DEV9.IRX.
DEV9_VARIANTS = {'87ce732b196612d7': 'utility 2800', '091b2ec1a25474fe': 'game NETMOD_E 2710'}
IOP = ['cpu', 'kernel', 'libs', 'hw', 'spu2', 'sio2', 'io', 'cdvd', 'sif', 'cdvdfsv', 'native_storage']


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def load(name, path):
    import importlib.util
    spec = importlib.util.spec_from_file_location(name, path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def build(work, device, cxx, segment=False):
    tree = work / 'upstream'
    shutil.copytree(ROOT / 'vendor/ps2-web-recomp', tree, ignore=shutil.ignore_patterns('.git'))
    manifests = [load('storage', ROOT / 'poc/original-online/native-storage/prepare.py').prepare(tree)]
    if device:
        manifests.append(load('device', HERE.parent / 'prepare.py').prepare(tree, segment=segment))
    src = tree / 'runtime/src'
    flags = ['-std=c++20', '-O2', '-Wall', '-Wextra', '-Werror', '-Wno-unused-parameter', '-I', str(tree / 'runtime/include'), '-I', str(src)]
    objects = []
    for name in IOP + (['dev9'] if device else []) + (['segment'] if segment else []):
        obj = work / f'{name}.o'
        subprocess.run([cxx, *flags, '-c', str(src / 'iop' / f'{name}.cpp'), '-o', str(obj)], check=True)
        objects.append(str(obj))
    subprocess.run([cxx, *flags, str(HARNESS), *objects, '-o', str(work / 'harness')], check=True)
    if device and not segment:
        subprocess.run([cxx, *flags, str(HERE / 'dev9_test.cpp'), *objects, '-o', str(work / 'dev9-test')], check=True)
    if segment:
        subprocess.run([cxx, *flags, str(HERE / 'segment_test.cpp'), str(work / 'segment.o'), '-o', str(work / 'segment-test')], check=True)
        subprocess.run([cxx, *flags, str(HERE / 'segment_frames.cpp'), str(work / 'segment.o'), '-o', str(work / 'segment-frames')], check=True)
    return manifests


def run(work, modules, trace, card='none', script='idle.txt', prefix=''):
    env = {**os.environ, **({'PS2_DEV9_TRACE': '1'} if trace else {})}
    done = subprocess.run([str(work / 'harness'), str(card), str(HERE / script), *map(str, modules)], cwd=work,
                          capture_output=True, text=True, timeout=600, env=env)
    (work / f'{prefix}stdout.jsonl').write_text(done.stdout)
    (work / f'{prefix}stderr.log').write_text(done.stderr)
    loaded = {Path(r['path'].split('::')[0]).name: r for r in map(json.loads, done.stdout.splitlines()) if r['event'] == 'module'}
    return done.returncode, loaded, done.stderr


# The utility loads NETCNF with these icon paths; INETCTL is given the saved combination file.
CONFIG_MODULES = ['SIO2MAN.IRX', 'MCMAN.IRX', 'INET.IRX',
                  'NETCNF.IRX::icon=cdrom0:\\NTGUIDVD\\CONF\\JAPANESE\\SYS_NET.ICO;1::iconsys=cdrom0:\\NTGUIDVD\\CONF\\JAPANESE\\ICON.SYS;1',
                  'INETCTL.IRX::-verbose::mc0:/BWNETCNF/net000.cnf', 'DEV9.IRX', 'SMAP.IRX']


def interface(args, work, report):
    checks = report['checks']
    for name, segment in [('interface_disconnected', False), ('interface_segment', True)]:
        folder = work / name
        folder.mkdir(parents=True)
        report[name + '_runtime'] = build(folder, True, args.cxx, segment)
        card = folder / 'card.ps2'
        shutil.copyfile(args.config_card, card)
        before = sha(card)
        modules = [str(args.modules.resolve() / spec.split('::')[0]) + spec[len(spec.split('::')[0]):] for spec in CONFIG_MODULES]
        code, loaded, log = run(folder, modules, True, card, 'interface.txt')
        report[name] = {'exit': code, 'results': {k: v['result'] for k, v in loaded.items()}, 'card_sha256': before,
                        'inetctl': [l for l in log.splitlines() if 'inetctl:' in l], 'segment': [l for l in log.splitlines() if '[dev9-segment]' in l]}
        checks[f'{name}: configuration loaded'] = 'inetctl: (ID=1) display_name=ifc000.dat + dev000.dat' in log and 'decoding error' not in log
        checks[f'{name}: card unchanged'] = sha(card) == before
        started = 'inetctl: (ID=1) STARTING --Start-> STARTED' in log
        if segment:
            unit = subprocess.run([str(folder / 'segment-test')], capture_output=True, text=True, timeout=120)
            (folder / 'segment-test.log').write_text(unit.stdout + unit.stderr)
            checks['segment frame checks'] = unit.returncode == 0
            checks[f'{name}: interface started with the lease'] = started and 'inetctl: (ID=1) [ 192.168.208.10 ]' in log
            checks[f'{name}: one DHCP offer and acknowledgement'] = sum('DHCP reply 2:' in l for l in log.splitlines()) == 1 and sum('DHCP reply 5:' in l for l in log.splitlines()) == 1
            checks[f'{name}: no invalid or dropped frames'] = 'invalid' not in ''.join(report[name]['segment']) and 'dropped' not in ''.join(report[name]['segment'])
        else:
            checks[f'{name}: interface never started without a link'] = 'DETACHED --Attach-> STARTING' in log and not started


GAME_MODULES = {'AVETCP.IRX': 'aa6c1f4f0f765b6f', 'DEVGLUE.IRX': 'a3fbd8eaa84bcf61', 'AVEWRAPE.IRX': '0d85884973dfd933'}


def game_stack(args, work, report, smap):
    folder = work / 'game_stack'
    folder.mkdir(parents=True)
    report['game_stack_runtime'] = build(folder, True, args.cxx)
    found = {name: (args.game_modules / name).resolve() for name in GAME_MODULES}
    for name, prefix in GAME_MODULES.items():
        if not sha(found[name]).startswith(prefix):
            raise SystemExit(f'Unexpected game {name}')
    order = [found['AVETCP.IRX'], found['DEVGLUE.IRX'], work / 'game-modules/DEV9.IRX', smap, found['AVEWRAPE.IRX']]
    code, loaded, log = run(folder, order, True, 'none', 'game-stack.txt')
    calls = [json.loads(l) for l in (folder / 'stdout.jsonl').read_text().splitlines() if '"event":"call"' in l]
    report['game_stack'] = {'exit': code, 'results': {k: v['result'] for k, v in loaded.items()}, 'calls': calls,
                            'devglue': [l for l in log.splitlines() if 'Register NetDev' in l or 'name' in l and '[iop-tty]' in l]}
    checks = report['checks']
    checks['game stack: SMAP registered with DEVGLUE'] = all(x in log for x in ['Register NetDev [0]', 'module_name smap', 'vendor_name SCE', 'device_name Ethernet (Network Adaptor)'])
    checks['game stack: DEVGLUE counts one device'] = len(calls) > 1 and calls[1]['completed'] and calls[1]['result'] == 1 and calls[1].get('buffer') == '01000000'
    checks['game stack: malformed calls refused'] = len(calls) == 7 and all(not c['completed'] and c.get('rejected') for c in calls[2:])

    code, _, log = run(folder, order, False, 'none', 'harness-limits.txt', 'limits-')
    calls = [json.loads(l) for l in (folder / 'limits-stdout.jsonl').read_text().splitlines() if '"event":"call"' in l]
    report['harness_limits'] = {'exit': code, 'calls': len(calls), 'refusals': [c for c in calls if not c['completed'] and 'fill' not in c['command']],
                                'out_of_memory': [l for l in log.splitlines() if 'out of memory' in l]}
    word = lambda c, at: int.from_bytes(bytes.fromhex(c['buffer'])[at:at + 4], 'little')
    no_stack = "IOP memory has no room for the caller module's start thread"
    complete = len(calls) == 727
    checks['harness: callat reaches code inside a module'] = complete and calls[1]['completed'] and word(calls[1], 0) == 1 and word(calls[1], 24) == 1
    checks['harness: peek reads the module image'] = complete and calls[2].get('buffer') == 'e8ffbd27'
    checks['harness: callat outside a loaded module refused'] = complete and all(not c['completed'] and c.get('rejected') for c in calls[3:6])
    checks['harness: caller start stacks are freed'] = complete and all(c['completed'] and c['result'] == 1 for c in calls[6:306])
    checks['harness: call refused when no start stack fits'] = complete and calls[323]['command'] == 'call devglue 6 b:4' and calls[323].get('rejected') == no_stack
    # Before the call, the largest block is at least 0x4200 bytes: after its 0x100-byte b:4 buffer a free_max test
    # against 0x4100 would pass, yet buffer, table, image and arguments (0x500 bytes) leave less than 0x4000.
    free = calls[725] if complete else {}
    checks['harness: near-threshold call refused'] = (complete and calls[724]['command'] == 'release big' and 0x4200 <= free.get('free_max', 0) < 0x4500
                                                      and calls[726].get('rejected') == no_stack)
    checks['harness: only the two refused calls ran out of memory'] = report['harness_limits']['out_of_memory'] == ['[iop] out of memory allocating 0x4000'] * 2

    code, _, log = run(folder, order, False, 'none', 'harness-malformed.txt', 'malformed-')
    calls = [json.loads(l) for l in (folder / 'malformed-stdout.jsonl').read_text().splitlines() if '"event":"call"' in l]
    script = [l for l in (HERE / 'harness-malformed.txt').read_text().splitlines() if l and not l.startswith('#')]
    report['harness_malformed'] = {'exit': code, 'calls': len(calls), 'accepted': [c['command'] for c in calls[2:-2] if c['completed']]}
    checks['harness: malformed input refused without stopping'] = (len(calls) == len(script) and all(c['completed'] for c in calls[:2] + calls[-2:])
                                                                   and all(not c['completed'] and c.get('rejected') for c in calls[2:-2]))
    if len(calls) == len(script):
        kept_a, control = calls[1], calls[-2]
        own = control.get('addresses', [0])[0]
        checks['harness: word buffers hold relative pointers and kept-buffer pointers'] = (
            control['result'] == 1 and word(control, 0) == 1 and word(control, 4) == own + 8 and word(control, 8) == kept_a['address'] + 4)
    else:
        checks['harness: word buffers hold relative pointers and kept-buffer pointers'] = False


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--modules', type=Path, required=True, help='folder with the original INET.IRX, DEV9.IRX and SMAP.IRX')
    parser.add_argument('--work', type=Path, required=True, help='new output folder')
    parser.add_argument('--game-dev9', type=Path, required=True, help="the game's NETMOD_E/DEV9.IRX")
    parser.add_argument('--config-card', type=Path, help='card holding a configuration saved by the original utility; enables the interface checks')
    parser.add_argument('--game-modules', type=Path, help="folder with the game's NETMOD/AVETCP.IRX, NETMOD_E/DEVGLUE.IRX and NETMOD_E/AVEWRAPE.IRX")
    parser.add_argument('--cxx', default='clang++')
    args = parser.parse_args()
    work = args.work.resolve()
    if work.exists():
        parser.error('Use a new work folder')
    modules = [(args.modules / name).resolve() for name in MODULES]
    for path, prefix in zip(modules, MODULES.values()):
        if prefix and not sha(path).startswith(prefix):
            parser.error(f'Unexpected {path.name}')
    game_dev9 = args.game_dev9.resolve()
    if DEV9_VARIANTS.get(sha(game_dev9)[:16]) != 'game NETMOD_E 2710':
        parser.error('Unexpected game DEV9.IRX')
    report = {'started_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(), 'host': platform.platform(),
              'modules_sha256': {p.name: sha(p) for p in modules}, 'harness_sha256': sha(HARNESS), 'checks': {}}
    # Module lookup uses the file name, as for cdrom0:\\NETMOD_E\\DEV9.IRX;1 in the game.
    (work / 'game-modules').mkdir(parents=True)
    shutil.copyfile(game_dev9, work / 'game-modules/DEV9.IRX')
    variants = {'control': (False, modules), 'device': (True, modules), 'device_game_dev9': (True, [modules[0], work / 'game-modules/DEV9.IRX', modules[2]])}
    for name, (device, chosen) in variants.items():
        folder = work / name
        folder.mkdir(parents=True)
        report[name + '_runtime'] = build(folder, device, args.cxx)
        if name == 'device':
            unit = subprocess.run([str(folder / 'dev9-test')], capture_output=True, text=True, timeout=120)
            (folder / 'dev9-test.log').write_text(unit.stdout + unit.stderr)
            report['checks']['register unit checks'] = unit.returncode == 0
        code, loaded, log = run(folder, chosen, device)
        report[name] = {'exit': code, 'results': {k: v['result'] for k, v in loaded.items()},
                        'dev9_lines': [l for l in log.splitlines() if 'dev9' in l and ('[iop-tty]' in l or '[native-storage]' in l)],
                        'unmodelled': [l for l in log.splitlines() if 'unmodelled' in l]}
    c = report['control']
    checks = report['checks']
    checks['control_unknown_hardware'] = '[iop-tty] dev9: unknown dev9 hardware.' in c['dev9_lines'] and c['results'].get('DEV9.IRX') == 1
    checks['control_smap_not_resident'] = c['results'].get('SMAP.IRX') == 1
    for name in ['device', 'device_game_dev9']:
        d = report[name]
        for line in ['dev9: CXD9611 detected.', 'dev9: Speed chip: ES2', 'dev9: CXD9611(ssbus buffer) driver start']:
            checks[f'{name}: {line}'] = '[iop-tty] ' + line in d['dev9_lines']
        checks[f'{name}: dev9x registered'] = '[native-storage] AddDrv dev9x init -> 0, AddDrv -> 0' in d['dev9_lines']
        checks[f'{name}: DEV9 resident'] = d['results'].get('DEV9.IRX') == 0
        checks[f'{name}: SMAP resident'] = d['results'].get('SMAP.IRX') == 2
        log = (work / name / 'stderr.log').read_text()
        checks[f'{name}: self-test used PHY loopback'] = '[dev9] PHY 1 write 0 = 0x6100' in log
        checks[f'{name}: self-test frame looped back in full'] = '[dev9] loopback of a 1514-byte frame' in log
        checks[f'{name}: no unmodelled access'] = not d['unmodelled']
        checks[f'{name}: no transmit outside loopback'] = 'transmit without an external link' not in log
    if args.config_card:
        interface(args, work, report)
    if args.game_modules:
        game_stack(args, work, report, modules[2])
    report['passed'] = all(checks.values()) and not any(report[n]['exit'] for n in report if isinstance(report[n], dict) and 'exit' in report[n])
    (work / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'passed': report['passed'], 'failed': [k for k, v in checks.items() if not v], 'report': str(work / 'report.json')}))
    return 0 if report['passed'] else 1


if __name__ == '__main__':
    sys.exit(main())
