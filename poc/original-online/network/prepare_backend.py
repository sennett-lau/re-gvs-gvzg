#!/usr/bin/env python3
"""Prepare only the pinned compatible server in a new private directory."""
import argparse
import datetime
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tarfile

REVISION = '35ffbdad9257eca5043bb4977d26cc07468b5045'
ARCHIVE_SHA256 = '51ca60ad9cbcf735e1d769dae1501be46494392eebaa8f4e195e8241d133a1eb'
HERE = Path(__file__).resolve().parent

def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--archive', type=Path, required=True)
    parser.add_argument('--work', type=Path, required=True)
    args = parser.parse_args()
    if digest(args.archive) != ARCHIVE_SHA256:
        raise SystemExit('pinned archive fingerprint mismatch')
    work = args.work.resolve()
    work.mkdir(parents=True, exist_ok=False)
    with tarfile.open(args.archive) as archive:
        for member in archive.getmembers():
            path = (work / member.name).resolve()
            if work not in path.parents or not (member.isfile() or member.isdir()):
                raise SystemExit('unsafe archive member: ' + member.name)
        archive.extractall(work)
    source = work / ('zdxsv-' + REVISION)
    before = {str(p.relative_to(source)): digest(p) for p in source.rglob('*') if p.is_file()}
    # Upstream stripHost deliberately widens game listeners to all interfaces.
    # Only remove it at listener sites; preserve its address-formatting uses.
    replacements = {
        'src/zdxsv/all.go': ['stripHost(config.Conf.Battle.Addr)'],
        'pkg/lobby/app.go': ['stripHost(config.Conf.Lobby.RPCAddr)'],
        'src/zdxsv/login.go': ['stripHost(config.Conf.Login.Addr)'],
        'src/zdxsv/lobby.go': ['stripHost(config.Conf.Lobby.Addr)', 'stripHost(config.Conf.Lobby.RPCAddr)'],
        'src/zdxsv/battle.go': ['stripHost(config.Conf.Battle.Addr)', 'stripHost(config.Conf.Battle.RPCAddr)'],
    }
    edits = []
    for relative, patterns in replacements.items():
        path = source / relative
        text = path.read_text()
        for pattern in patterns:
            count = text.count(pattern)
            expected = 2 if relative.endswith('battle.go') and '.Battle.Addr)' in pattern else 1
            if count != expected:
                raise SystemExit('listener patch precondition failed: ' + relative + ' ' + pattern)
            text = text.replace(pattern, pattern[len('stripHost('):-1])
        path.write_text(text)
        edits.append({'file': relative, 'before': before[relative], 'after': digest(path)})
    # These optional description handlers send an overflow and injected R5900
    # code. The static client has no translations for that code. Keep ordinary
    # descriptions and the original baseline session/lobby/battle protocol.
    relative = 'pkg/lobby/msg_lobby.go'
    path = source / relative
    text = path.read_text()
    injection = '\tcase 3:\n\t\ta = SetPadDelayLobbyHack(p, m)\n\tcase 4:\n\t\ta = SetWideScreenLobbyHack(p, m)\n'
    if text.count(injection) != 1:
        raise SystemExit('optional lobby code injection patch precondition failed')
    path.write_text(text.replace(injection, ''))
    compatibility_edits = [{'file': relative, 'before': before[relative], 'after': digest(path),
        'reason': 'lobbies 3 and 4 use existing ordinary description handler; disable optional executable injection'}]
    gateway = source / 'src/original-online-gateway'
    gateway.mkdir()
    shutil.copyfile(HERE / 'gateway.go', gateway / 'main.go')
    commands = [['go', 'build', '-mod=readonly', '-o', str(work/'zdxsv'), './src/zdxsv'],
                ['go', 'build', '-mod=readonly', '-o', str(work/'gateway'), './src/original-online-gateway']]
    manifest = {'timestamp': datetime.datetime.now(datetime.timezone.utc).isoformat(),
                'upstream_revision': REVISION, 'archive_sha256': ARCHIVE_SHA256,
                'upstream_files': before, 'listener_edits': edits, 'compatibility_edits': compatibility_edits,
                'integration_sources': {p.name: digest(p) for p in HERE.glob('*') if p.is_file()},
                'commands': commands, 'source': str(source), 'game_executed': False}
    env = dict(os.environ, GOMAXPROCS='2')
    try:
        with (work/'build.log').open('w') as log:
            for command in commands:
                subprocess.run(command, cwd=source, env=env, stdout=log, stderr=subprocess.STDOUT, check=True)
        manifest['go_version'] = subprocess.check_output(['go','version'], cwd=source, env=env, text=True).strip()
        manifest['outputs'] = {p: digest(work/p) for p in ['zdxsv','gateway']}
        manifest['build_success'] = True
    finally:
        (work/'build-info.json').write_text(json.dumps(manifest, indent=2)+'\n')
    print(json.dumps({'work': str(work), 'build_success': True}))

if __name__ == '__main__':
    main()
