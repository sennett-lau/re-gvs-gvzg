#!/usr/bin/env python3
"""Prepare only the pinned compatible server in a new private directory."""
import argparse
import datetime
import difflib
import gzip
import hashlib
import io
import json
import os
from pathlib import Path
import shutil
import subprocess
import tarfile

REVISION = '35ffbdad9257eca5043bb4977d26cc07468b5045'
ARCHIVE_SHA256 = '51ca60ad9cbcf735e1d769dae1501be46494392eebaa8f4e195e8241d133a1eb'
UPSTREAM = 'https://github.com/inada-s/zdxsv'
HERE = Path(__file__).resolve().parent

# Lobby lifecycle log lines for backend receipts. They only call glog; no
# message, state transition or timing changes. The login key is never logged.
EVENT_LOG = '''
// eventLog records a lobby lifecycle event with the peer's address and user.
// It only writes a log line; it never sends a message or changes state.
func eventLog(p *AppPeer, event string, args ...interface{}) {
	addr, lobby, room := "", uint16(0), uint16(0)
	if p.conn != nil && p.conn.conn != nil {
		addr = p.conn.Address()
	}
	if p.Lobby != nil {
		lobby = p.Lobby.ID
	}
	if p.Room != nil {
		room = p.Room.ID
	}
	glog.Infoln(append([]interface{}{"[lobby-event]", event, "addr", addr, "user", p.UserID,
		"session", p.SessionID, "lobby", lobby, "room", room}, args...)...)
}
'''
EVENT_EDITS = [
    ('func (a *App) OnClose(p *AppPeer) {\n',
     '\teventLog(p, "close", "after-room", p.inBattleAfterRoom)\n'),
    ('\ta.users[p.UserID] = p\n\tAskBattleResult(p)\n',
     '\tif old, ok := a.users[p.UserID]; ok && old != p {\n'
     '\t\teventLog(old, "replaced-by-new-login")\n\t}\n\teventLog(p, "login-ok")\n', 'before'),
    ('\t\tp.Lobby.Enter(&p.User)\n', '\t\teventLog(p, "enter-lobby")\n'),
    ('func (a *App) OnExitLobby(p *AppPeer) {\n', '\tif p.Lobby != nil {\n\t\teventLog(p, "exit-lobby")\n\t}\n'),
    ('func (a *App) OnEntryLobbyBattle(p *AppPeer, side byte) {\n', '\teventLog(p, "entry", "side", side)\n'),
    ('func (a *App) OnUserLogout(p *AppPeer) {\n', '\teventLog(p, "logout")\n'),
    ('func (a *App) OnUserGotoBattle(p *AppPeer) {\n', '\teventLog(p, "goto-battle", "battle-set", p.Battle != nil)\n'),
    ('\tglog.Infoln("before", p.User.User)\n',
     '\teventLog(p, "battle-result-saved", "battle", result.BattleCode, "round", result.BattleCount,\n'
     '\t\t"win", result.WinCount, "lose", result.LoseCount, "kill", result.KillCount, "death", result.DeathCount)\n', 'before'),
    ('\tfor _, u := range users {\n\t\tpeer, ok := a.users[u.UserID]\n\t\tif ok {\n\t\t\tNoticeBattleStart(peer)\n',
     '\tglog.Infoln("[lobby-event] battle-start battle", battle.BattleCode, "lobby", lobbyID, "players", len(users))\n', 'before'),
    ('\tp.inBattleAfterRoom = true\n', '\teventLog(p, "enter-after-room", "battle", battle.BattleCode)\n'),
    ('func (a *App) OnExitBattleAfterRoom(p *AppPeer) {\n', '\teventLog(p, "exit-after-room")\n'),
    ('\tr.Enter(&p.User)\n\tp.Room = r\n', '\teventLog(p, "enter-room", "room-id", r.ID)\n'),
    ('func (a *App) OnExitRoom(p *AppPeer) {\n\tif p.Room == nil {\n\t\treturn\n\t}\n', '\teventLog(p, "exit-room")\n'),
]


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def tree_files(root):
    return {str(p.relative_to(root)): p for p in sorted(root.rglob('*')) if p.is_file()}


def source_bundle(source, pristine, out):
    """Write the exact patched source, its patch and the license beside the build."""
    out.mkdir()
    shutil.copyfile(source / 'LICENSE', out / 'LICENSE')
    diff = []
    old, new = tree_files(pristine), tree_files(source)
    for name in sorted(set(old) | set(new)):
        if name in old and name in new and old[name].read_bytes() == new[name].read_bytes():
            continue
        a = old[name].read_text().splitlines(True) if name in old else []
        b = new[name].read_text().splitlines(True) if name in new else []
        if a != b:
            diff += difflib.unified_diff(a, b, 'a/' + name if a else '/dev/null', 'b/' + name)
    (out / 'patches.diff').write_text(''.join(diff))
    # Deterministic archive: sorted members, fixed owner and time.
    raw = io.BytesIO()
    with tarfile.open(fileobj=raw, mode='w', format=tarfile.PAX_FORMAT) as archive:
        for name, path in new.items():
            info = tarfile.TarInfo(source.name + '/' + name)
            info.size, info.mtime, info.mode = path.stat().st_size, 0, 0o644
            with path.open('rb') as handle:
                archive.addfile(info, handle)
    with gzip.GzipFile(out / (source.name + '-patched.tar.gz'), 'wb', mtime=0) as handle:
        handle.write(raw.getvalue())
    (out / 'NOTICE').write_text(
        'The zdxsv and gateway executables in this build are compiled from inada-s/zdxsv\n'
        f'{UPSTREAM} revision {REVISION}, licensed under the GNU Affero General\n'
        'Public License version 3 (see LICENSE), with the changes in patches.diff.\n'
        f'{source.name}-patched.tar.gz is the complete corresponding source of this build;\n'
        'Go module dependencies are fixed by its go.sum. Provide this source to anyone\n'
        'who receives the executables or interacts with the service over a network.\n')
    return {p.name: digest(p) for p in sorted(out.iterdir())}


def prepare(archive, work):
    if digest(archive) != ARCHIVE_SHA256:
        raise SystemExit('pinned archive fingerprint mismatch')
    work = work.resolve()
    work.mkdir(parents=True, exist_ok=False)
    pristine = work / 'pristine'
    with tarfile.open(archive) as handle:
        for member in handle.getmembers():
            path = (work / member.name).resolve()
            if work not in path.parents or not (member.isfile() or member.isdir()):
                raise SystemExit('unsafe archive member: ' + member.name)
        handle.extractall(work)
        handle.extractall(pristine)
    source = work / ('zdxsv-' + REVISION)
    pristine = pristine / ('zdxsv-' + REVISION)
    before = {name: digest(p) for name, p in tree_files(source).items()}
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
    relative = 'pkg/lobby/app_core.go'
    path = source / relative
    text = path.read_text()
    for anchor, line, *where in EVENT_EDITS:
        if text.count(anchor) != 1:
            raise SystemExit('lobby event log patch precondition failed: ' + anchor.splitlines()[0])
        text = text.replace(anchor, line + anchor if where else anchor + line)
    path.write_text(text + EVENT_LOG)
    observability_edits = [{'file': relative, 'before': before[relative], 'after': digest(path),
        'reason': 'log-only [lobby-event] lines for backend receipts; no protocol or state change'}]
    gateway = source / 'src/original-online-gateway'
    gateway.mkdir()
    shutil.copyfile(HERE / 'gateway.go', gateway / 'main.go')
    flags = ['-mod=readonly', '-trimpath', '-buildvcs=false']
    commands = [['go', 'build', *flags, '-o', str(work/'zdxsv'), './src/zdxsv'],
                ['go', 'build', *flags, '-o', str(work/'gateway'), './src/original-online-gateway'],
                ['go', 'vet', './pkg/lobby', './src/original-online-gateway']]
    manifest = {'timestamp': datetime.datetime.now(datetime.timezone.utc).isoformat(),
                'upstream': UPSTREAM, 'upstream_revision': REVISION, 'archive_sha256': ARCHIVE_SHA256,
                'upstream_files': before, 'listener_edits': edits, 'compatibility_edits': compatibility_edits,
                'observability_edits': observability_edits,
                'integration_sources': {p.name: digest(p) for p in HERE.glob('*') if p.is_file()},
                'commands': commands, 'source': str(source), 'game_executed': False}
    # The SQLite driver (mattn/go-sqlite3) requires cgo; a CGO_ENABLED=0 build
    # links a stub that fails at run time, so cgo stays at the Go default.
    env = dict(os.environ, GOMAXPROCS='2', GOFLAGS='')
    env.pop('CGO_ENABLED', None)
    try:
        with (work/'build.log').open('w') as log:
            for command in commands:
                subprocess.run(command, cwd=source, env=env, stdout=log, stderr=subprocess.STDOUT, check=True)
        manifest['go_version'] = subprocess.check_output(['go', 'version'], cwd=source, env=env, text=True).strip()
        manifest['modules'] = subprocess.check_output(['go', 'list', '-m', 'all'], cwd=source, env=env, text=True).split('\n')[:-1]
        manifest['outputs'] = {p: digest(work/p) for p in ['zdxsv', 'gateway']}
        manifest['source_bundle'] = source_bundle(source, pristine, work/'source')
        shutil.rmtree(pristine.parent)
        manifest['build_success'] = True
    finally:
        (work/'build-info.json').write_text(json.dumps(manifest, indent=2)+'\n')
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--archive', type=Path, required=True)
    parser.add_argument('--work', type=Path, required=True)
    args = parser.parse_args()
    prepare(args.archive, args.work)
    print(json.dumps({'work': str(args.work.resolve()), 'build_success': True}))


if __name__ == '__main__':
    main()
