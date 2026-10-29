#!/usr/bin/env python3
"""Build the prepared IOP runtime natively and check original MCMAN file operations on card copies."""
import argparse
import datetime
import hashlib
import json
import platform
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[3]
sys.path.insert(0, str(HERE.parent))
sys.path.insert(0, str(HERE))
import mcfs  # noqa: E402
import prepare  # noqa: E402

MODULES = {  # NTGUIDVD/MODULES on the supported disc
    'SIO2MAN.IRX': '8d9513cc55b05578b0bad1e10b89df3a6fcab2798f45f028e50e6889c6ea93d1',
    'MCMAN.IRX': '4b88925b424623c6ab7d8a43316be2a3e48db33ca84f93c92dbe39ca27f84beb',
}
CARD = '9431f19dc70d664e35a780d70dbcd2dc1ea33ea498c3ed75f71d961f3b425fb9'
IOP = ['cpu', 'kernel', 'libs', 'hw', 'spu2', 'sio2', 'io', 'cdvd', 'sif', 'cdvdfsv', 'native_storage']

# Expected ioman results by command index. Driver errors are the original MCMAN codes after its own
# translation: -2 absent entry, -6 no card in the slot, -47 unformatted card.
# The checkpoint fails (-1) while a driver descriptor is open for writing; read-only descriptors are allowed.
EXPECT = {
    'read': {0: 0, 1: -2, 2: 3, 3: 1, 4: 1, 5: 1, 6: 0, 7: 3, 8: 0, 9: 3, 10: 7148, 11: 3, 12: -2, 13: -6, 14: -2},
    'write': {0: 0, 1: 3, 2: 3000, 3: 3, 4: 3, 5: 3000, 6: 3000, 7: 3, 8: 0, 9: -2, 10: 3, 11: 1, 12: 1, 13: 1,
              14: 0, 15: 3, 16: 3, 17: 100, 18: 3, 19: 0, 20: -2, 21: 3, 22: -9, 23: 3, 24: 3, 25: -9, 26: 3,
              27: -9, 28: 3, 29: 64, 30: -1, 31: 4, 32: 3, 33: 0, 34: 4, 35: 0, 36: 0},
    'readback': {0: 3, 1: 3000, 2: 3, 3: 3, 4: 7148, 5: 3, 6: -2, 7: -2},
    'nocard': {0: -6, 1: -6, 2: -6, 3: 3, 4: -9, 5: 0, 6: 9},
    'blank': {0: -47, 1: -47, 2: -47, 3: 3, 4: -9, 5: 0, 6: 9},
}


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def pattern(size, seed):
    out = bytearray()
    for _ in range(size):
        seed = (seed * 1103515245 + 12345) & 0xFFFFFFFF
        out.append(seed >> 16 & 0xFF)
    return bytes(out)


def buffer(calls, index, size):
    return bytes.fromhex(calls[index].get('buffer', ''))[:size] if index < len(calls) else b''


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--modules', type=Path, required=True, help='folder with the original SIO2MAN.IRX and MCMAN.IRX')
    parser.add_argument('--card', type=Path, required=True, help='fingerprinted fresh test card; it is only copied')
    parser.add_argument('--work', type=Path, required=True, help='new output folder')
    parser.add_argument('--cxx', default='clang++')
    args = parser.parse_args()
    work = args.work.resolve()
    if work.exists():
        parser.error('Use a new work folder')
    modules = [(args.modules / name).resolve() for name in MODULES]
    for path, expected in zip(modules, MODULES.values()):
        if sha(path) != expected:
            parser.error(f'Unexpected {path.name}')
    if sha(args.card) != CARD:
        parser.error('Unexpected test card')
    work.mkdir(parents=True)
    tree = work / 'upstream'
    shutil.copytree(ROOT / 'vendor/ps2-web-recomp', tree, ignore=shutil.ignore_patterns('.git'))
    manifest = prepare.prepare(tree)
    src = tree / 'runtime/src'
    flags = ['-std=c++20', '-O2', '-Wall', '-Wextra', '-Werror', '-Wno-unused-parameter', '-I', str(tree / 'runtime/include'), '-I', str(src)]
    commands, objects = [], []
    for name in IOP:
        obj = work / f'{name}.o'
        commands.append([args.cxx, *flags, '-c', str(src / 'iop' / f'{name}.cpp'), '-o', str(obj)])
        objects.append(str(obj))
    harness = work / 'harness'
    commands.append([args.cxx, *flags, str(HERE / 'harness.cpp'), *objects, '-o', str(harness)])
    for command in commands:
        subprocess.run(command, check=True)

    def run(name, card, script):
        started = datetime.datetime.now(datetime.timezone.utc).isoformat()
        command = [str(harness), card, str(HERE / 'scenarios' / script), *map(str, modules)]
        done = subprocess.run(command, cwd=work, capture_output=True, text=True, timeout=600)
        (work / f'{name}.jsonl').write_text(done.stdout)
        (work / f'{name}.log').write_text(done.stderr)
        calls = [json.loads(line) for line in done.stdout.splitlines() if '"event":"call"' in line]
        failures = [f'{name} #{i}: expected {expected}, got {calls[i]["result"] if i < len(calls) else "nothing"}'
                    for i, expected in EXPECT[name].items() if i >= len(calls) or calls[i]['result'] != expected]
        failures += [f'{name} #{c["index"]} did not complete' for c in calls if not c['completed']]
        if done.returncode or len(calls) != len(EXPECT[name]):
            failures.append(f'{name} exited {done.returncode} after {len(calls)} calls')
        return {'started_utc': started, 'command': command, 'exit': done.returncode, 'calls': len(calls), 'failures': failures}, calls

    read_card, write_card = work / 'read-card.ps2', work / 'write-card.ps2'
    shutil.copyfile(args.card, read_card)
    shutil.copyfile(args.card, write_card)
    report = {'profile': prepare.PROFILE, 'host': platform.platform(), 'compiler': subprocess.run([args.cxx, '--version'], capture_output=True, text=True).stdout.splitlines()[0],
              'modules_sha256': dict(zip(MODULES, map(sha, modules))), 'card_fixture_sha256': CARD, 'runtime': manifest,
              'harness_sha256': sha(HERE / 'harness.cpp'), 'scenarios': {}, 'checks': {}}
    before = mcfs.listing(read_card)

    report['scenarios']['read'], calls = run('read', str(read_card), 'read.txt')
    names = [buffer(calls, i, 96)[64:].split(b'\0')[0].decode() for i in range(3, 6)]
    report['checks']['root_listing'] = names
    game_save = buffer(calls, 10, 7148)
    report['checks']['read_card_unchanged'] = sha(read_card) == CARD
    report['checks']['existing_save_matches_parser'] = len(game_save) == 7148 and hashlib.sha256(game_save).hexdigest() == before['/BISLPM-65286NET/BISLPM-65286NET']['sha256']

    report['scenarios']['write'], calls = run('write', str(write_card), 'write.txt')
    report['checks']['write_reread_in_process'] = buffer(calls, 5, 3000) == pattern(3000, 7)
    after = mcfs.listing(write_card)
    report['card_after_write_sha256'] = sha(write_card)
    report['checks']['parser_new_file'] = after.get('/NSPROBE/KEPT.BIN', {}).get('sha256') == hashlib.sha256(pattern(3000, 7)).hexdigest()
    report['checks']['parser_removed_file_absent'] = '/NSPROBE/GONE.BIN' not in after
    report['checks']['parser_file_closed_after_refused_checkpoint'] = after.get('/NSPROBE/OPEN.BIN', {}).get('sha256') == hashlib.sha256(pattern(64, 3)).hexdigest()
    report['checks']['parser_existing_entries_unchanged'] = {k: v for k, v in after.items() if not k.startswith('/NSPROBE')} == before
    report['checks']['parser_listing_after_write'] = after

    written = sha(write_card)
    report['scenarios']['readback'], calls = run('readback', str(write_card), 'readback.txt')
    report['checks']['fresh_process_new_file'] = buffer(calls, 1, 3000) == pattern(3000, 7)
    report['checks']['fresh_process_existing_save'] = bool(game_save) and buffer(calls, 4, 7148) == game_save
    report['checks']['readback_card_unchanged'] = sha(write_card) == written

    report['scenarios']['nocard'], _ = run('nocard', 'none', 'nocard.txt')
    report['scenarios']['blank'], _ = run('blank', str(work / 'blank-card.ps2'), 'nocard.txt')
    report['checks']['blank_image_not_created'] = not (work / 'blank-card.ps2').exists()

    failures = [f for s in report['scenarios'].values() for f in s['failures']]
    failures += [k for k, v in report['checks'].items() if v is False]
    if report['checks']['root_listing'] != ['.', '..', 'BISLPM-65286NET']:
        failures.append('root_listing')
    report['passed'] = not failures
    report['failures'] = failures
    (work / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'passed': report['passed'], 'failures': failures, 'report': str(work / 'report.json')}))
    return 0 if report['passed'] else 1


if __name__ == '__main__':
    sys.exit(main())
