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


def run(work, modules, trace, card='none', script='idle.txt'):
    env = {**os.environ, **({'PS2_DEV9_TRACE': '1'} if trace else {})}
    done = subprocess.run([str(work / 'harness'), str(card), str(HERE / script), *map(str, modules)], cwd=work,
                          capture_output=True, text=True, timeout=600, env=env)
    (work / 'stdout.jsonl').write_text(done.stdout)
    (work / 'stderr.log').write_text(done.stderr)
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


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--modules', type=Path, required=True, help='folder with the original INET.IRX, DEV9.IRX and SMAP.IRX')
    parser.add_argument('--work', type=Path, required=True, help='new output folder')
    parser.add_argument('--game-dev9', type=Path, required=True, help="the game's NETMOD_E/DEV9.IRX")
    parser.add_argument('--config-card', type=Path, help='card holding a configuration saved by the original utility; enables the interface checks')
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
    report['passed'] = all(checks.values()) and not any(report[n]['exit'] for n in report if isinstance(report[n], dict) and 'exit' in report[n])
    (work / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'passed': report['passed'], 'failed': [k for k, v in checks.items() if not v], 'report': str(work / 'report.json')}))
    return 0 if report['passed'] else 1


if __name__ == '__main__':
    sys.exit(main())
