#!/usr/bin/env python3
"""Build, start, stop and check the private original Online backend and its device tunnels.

All paths come from one private JSON config (see backend.example.json); relative
paths resolve against the config file's directory. Every service listens on
loopback only. Another device reaches the gateway through an SSH reverse tunnel
that binds that device's own loopback address.
"""
import argparse
import datetime
import hashlib
import importlib.util
import json
import os
from pathlib import Path
import re
import secrets
import shutil
import signal
import socket
import sqlite3
import subprocess
import sys
import time
import urllib.request

HERE = Path(__file__).resolve().parent
OFFSETS = {'lobby': 0, 'stun': 1, 'stun_test': 2, 'api': 3, 'login': 4,
           'battle': 10, 'gateway': 20, 'dnas': 43, 'dns': 53}
SERVICES = ('backend', 'login', 'gateway')


def utc():
    return datetime.datetime.now(datetime.timezone.utc).strftime('%Y-%m-%dT%H:%M:%SZ')


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def write_json(path, value, mode=None):
    tmp = path.with_suffix('.tmp')
    tmp.write_text(json.dumps(value, indent=2, ensure_ascii=False) + '\n')
    if mode:
        os.chmod(tmp, mode)
    tmp.replace(path)


def alive(pid):
    try:
        os.kill(pid, 0)
        return True
    except (OSError, TypeError):
        return False


class Backend:
    def __init__(self, config_path):
        self.config_path = config_path.resolve()
        self.conf = json.loads(self.config_path.read_text())
        base = self.config_path.parent
        self.root = (base / self.conf.get('root', '.')).resolve()
        self.archive = (base / self.conf['archive']).resolve() if self.conf.get('archive') else None
        self.base_port = int(self.conf.get('base_port', 18800))
        if not 1024 <= self.base_port <= 65480:
            raise SystemExit('base_port must leave room for the private services')
        self.ports = {name: self.base_port + delta for name, delta in OFFSETS.items()}
        self.listeners = {label: int(port) for label, port in self.conf.get('listeners', {}).items()}
        if label_clash := set(self.listeners.values()) & set(self.ports.values()):
            raise SystemExit('listener port collides with a service port: ' + str(label_clash))
        self.tunnels = self.conf.get('tunnels', {})
        for host, tunnel in self.tunnels.items():
            if tunnel.get('listener', 'default') not in ('default', *self.listeners):
                raise SystemExit('tunnel ' + host + ' names an unknown listener')
        self.state, self.logs, self.run = self.root / 'state', self.root / 'logs', self.root / 'run'
        self.build = self.root / 'build'

    def address(self, name):
        return '127.0.0.1:' + str(self.ports[name])

    def expected_listeners(self):
        tcp = {('TCP', self.ports[n]) for n in ('lobby', 'stun', 'api', 'login', 'battle', 'gateway', 'dnas')}
        tcp |= {('TCP', port) for port in self.listeners.values()}
        return tcp | {('UDP', self.ports[n]) for n in ('dns', 'stun', 'stun_test', 'battle')}

    def environment(self):
        # Empty inherited service variables: no external upstream, relay or ops service.
        env = {k: v for k, v in os.environ.items() if not k.startswith('ZDXSV_')}
        a = self.address
        env.update({
            'ZDXSV_DB_NAME': str(self.state / 'backend.db'),
            'ZDXSV_DNS_ADDR': a('dns'), 'ZDXSV_DNAS_ADDR': a('dnas'),
            'ZDXSV_DNAS_PUBLIC_ADDR': '127.0.0.1', 'ZDXSV_DNAS_HTTPS_BACKEND': '',
            'ZDXSV_LOGIN_ADDR': a('login'), 'ZDXSV_LOGIN_PUBLIC_ADDR': '127.0.0.1',
            'ZDXSV_LOBBY_ADDR': a('lobby'), 'ZDXSV_LOBBY_RPC_ADDR': a('stun'),
            'ZDXSV_LOBBY_PUBLIC_ADDR': a('lobby'), 'ZDXSV_LOBBY_API_ADDR': a('api'),
            'ZDXSV_BATTLE_ADDR': a('battle'), 'ZDXSV_BATTLE_PUBLIC_ADDR': a('battle'),
            'ZDXSV_LOBBY_RELAY_ADDR': '', 'ZDXSV_LOBBY_OPS_ADDR': '', 'GOMAXPROCS': '2'})
        # Battle relay read deadline as a Go duration; unset keeps upstream 10 s.
        if self.conf.get('battle_read_timeout'):
            env['ZDXSV_BATTLE_READ_TIMEOUT'] = str(self.conf['battle_read_timeout'])
        return env

    def gateway_config(self):
        token = (self.state / 'token').read_text().strip()
        return {'listen': self.address('gateway'), 'token': token,
                'listeners': {label: '127.0.0.1:' + str(port) for label, port in self.listeners.items()},
                'origins': self.conf.get('origins', []), 'udp': {'dns': self.address('dns')},
                'endpoints': {n: self.address(n) for n in ('lobby', 'battle', 'dnas', 'login')}}

    def verified_build(self):
        build = self.build.resolve()
        manifest = json.loads((build / 'build-info.json').read_text())
        for name in ('zdxsv', 'gateway'):
            if digest(build / name) != manifest['outputs'][name]:
                raise SystemExit('built executable fingerprint mismatch: ' + name)
        return build, manifest

    def inventory(self, pids):
        """Actual OS listeners of the given processes; never connects to a game port."""
        if not pids:
            return set(), ''
        result = subprocess.run(['lsof', '-nP', '-a', '-p', ','.join(map(str, pids)), '-i'],
                                capture_output=True, text=True)
        listeners = set()
        for line in result.stdout.splitlines()[1:]:
            if 'LISTEN' in line or ' UDP ' in line:
                if '127.0.0.1:' not in line or '*:' in line:
                    raise RuntimeError('non-loopback listener: ' + line)
                match = re.search(r'(TCP|UDP) 127[.]0[.]0[.]1:(\d+)', line)
                if match:
                    listeners.add((match[1], int(match[2])))
        return listeners, result.stdout

    def port_holders(self):
        ports = sorted({p for _, p in self.expected_listeners()})
        result = subprocess.run(['lsof', '-nP', *[f'-i:{p}' for p in ports]], capture_output=True, text=True)
        return [line for line in result.stdout.splitlines()[1:] if 'LISTEN' in line or ' UDP ' in line]

    def status_file(self):
        path = self.run / 'status.json'
        return json.loads(path.read_text()) if path.exists() else {}

    # ---- commands -------------------------------------------------------

    def cmd_build(self, args):
        spec = importlib.util.spec_from_file_location('prepare_backend', HERE / 'prepare_backend.py')
        prepare = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(prepare)
        archive = Path(args.archive).resolve() if args.archive else self.archive
        if not archive:
            raise SystemExit('no source archive configured')
        work = self.root / 'builds' / datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%SZ')
        work.parent.mkdir(parents=True, exist_ok=True)
        manifest = prepare.prepare(archive, work)
        if args.activate or not self.build.exists():
            self.activate(work)
        print(json.dumps({'build': str(work), 'outputs': manifest['outputs'], 'go': manifest['go_version'],
                          'active': self.build.resolve() == work}, indent=2))

    def cmd_activate(self, args):
        work = (self.root / 'builds' / args.build).resolve()
        if work.parent != (self.root / 'builds').resolve() or not (work / 'build-info.json').exists():
            raise SystemExit('not a build under builds/: ' + args.build)
        previous = self.build.resolve() if self.build.exists() else None
        self.activate(work)
        self.verified_build()
        print(json.dumps({'previous': str(previous), 'active': str(work)}, indent=2))

    def activate(self, work):
        if self.supervisor_pid():
            raise SystemExit('stop the backend before activating another build')
        link = self.build
        if link.is_symlink():
            link.unlink()
        link.symlink_to(os.path.relpath(work, link.parent))

    def cmd_init(self, args):
        self.state.mkdir(parents=True, exist_ok=True)
        os.chmod(self.state, 0o700)
        record = {'utc': utc()}
        if args.import_db:
            target = self.state / 'backend.db'
            if target.exists():
                raise SystemExit('state already has backend.db; it is never overwritten')
            source = Path(args.import_db).resolve()
            shutil.copy2(source, target)
            record['imported_db'] = {'source': str(source), 'sha256': digest(target)}
        token = self.state / 'token'
        if not token.exists():
            if args.import_gateway_config:
                value = json.loads(Path(args.import_gateway_config).read_text())['token']
                record['imported_token_from'] = str(Path(args.import_gateway_config).resolve())
            else:
                value = 'oo-' + secrets.token_hex(24)
            token.write_text(value + '\n')
            os.chmod(token, 0o600)
        with (self.state / 'provenance.jsonl').open('a') as f:
            f.write(json.dumps(record) + '\n')
        print(json.dumps(record, indent=2))

    def supervisor_pid(self):
        path = self.run / 'supervisor.pid'
        if path.exists():
            pid = int(path.read_text())
            if alive(pid):
                return pid
        return None

    def cmd_start(self, args):
        if pid := self.supervisor_pid():
            raise SystemExit(f'backend already running (supervisor {pid})')
        if not (self.state / 'token').exists():
            raise SystemExit('run init first')
        self.verified_build()
        if holders := self.port_holders():
            raise SystemExit('configured ports are in use:\n' + '\n'.join(holders))
        for path in (self.logs, self.run, self.root / 'runs'):
            path.mkdir(parents=True, exist_ok=True)
        run_id = datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%SZ')
        run_dir = self.root / 'runs' / run_id
        run_dir.mkdir()
        if (self.state / 'backend.db').exists():
            shutil.copy2(self.state / 'backend.db', run_dir / 'backend.db.before')
        (self.run / 'status.json').unlink(missing_ok=True)
        log = (self.logs / 'supervisor.log').open('a')
        subprocess.Popen([sys.executable, str(Path(__file__).resolve()), '--config', str(self.config_path),
                          'supervise', run_id], cwd=self.root, stdin=subprocess.DEVNULL, stdout=log,
                         stderr=subprocess.STDOUT, start_new_session=True)
        deadline = time.monotonic() + args.wait
        while time.monotonic() < deadline:
            status = self.status_file()
            if status.get('run_id') == run_id and (status.get('ready') or status.get('stopped_at')):
                print(json.dumps({k: status.get(k) for k in ('run_id', 'ready', 'error', 'pids', 'ports', 'build')}, indent=2))
                return 0 if status.get('ready') else 1
            time.sleep(0.2)
        raise SystemExit('backend did not report ready; see ' + str(self.logs / 'supervisor.log'))

    def cmd_supervise(self, args):
        build, manifest = self.verified_build()
        run_dir = self.root / 'runs' / args.run_id
        (self.run / 'supervisor.pid').write_text(str(os.getpid()))
        gateway_json = self.state / 'gateway.json'
        write_json(gateway_json, self.gateway_config(), 0o600)
        env = self.environment()
        commands = {'initdb': [str(build / 'zdxsv'), '-profile=0', 'initdb'],
                    'backend': [str(build / 'zdxsv'), '-profile=0', 'all'],
                    'login': [str(build / 'zdxsv'), '-profile=0', 'login'],
                    'gateway': [str(build / 'gateway'), '-config', str(gateway_json)]}
        status = {'run_id': args.run_id, 'started_at': utc(), 'build': str(build),
                  'build_outputs': manifest['outputs'], 'ports': self.ports, 'listeners': self.listeners,
                  'commands': commands, 'environment': {k: v for k, v in env.items() if k.startswith('ZDXSV_')},
                  'supervisor_pid': os.getpid(), 'ready': False}
        stop, processes, logs = False, {}, []

        def stopping(*_):
            nonlocal stop
            stop = True
        signal.signal(signal.SIGINT, stopping)
        signal.signal(signal.SIGTERM, stopping)
        try:
            marker = f'==== backendctl run {args.run_id} start {utc()} build {build.name} ====\n'
            if not (self.state / 'backend.db').exists():
                with (self.logs / 'initdb.log').open('a') as log:
                    log.write(marker)
                    log.flush()
                    subprocess.run(commands['initdb'], cwd=self.state, env=env, stdout=log, stderr=subprocess.STDOUT, check=True)
                # zdxsv ignores a failed schema creation; require the database file.
                if not (self.state / 'backend.db').exists():
                    raise RuntimeError('initdb created no database; see initdb.log')
                status['initdb'] = True
            for name in SERVICES:
                log = (self.logs / (name + '.log')).open('a')
                log.write(marker)
                log.flush()
                logs.append(log)
                processes[name] = subprocess.Popen(commands[name], cwd=self.state, env=env, stdout=log, stderr=subprocess.STDOUT)
            status['pids'] = {n: p.pid for n, p in processes.items()}
            write_json(self.run / 'status.json', status)
            deadline = time.monotonic() + 20
            while not stop:
                if exited := [n for n, p in processes.items() if p.poll() is not None]:
                    raise RuntimeError('service exited during startup: ' + ','.join(exited))
                listeners, inventory = self.inventory([p.pid for p in processes.values()])
                if listeners == self.expected_listeners():
                    break
                if time.monotonic() > deadline:
                    raise RuntimeError('listener mismatch: missing=' + str(self.expected_listeners() - listeners)
                                       + ' extra=' + str(listeners - self.expected_listeners()))
                time.sleep(0.2)
            if stop:
                raise RuntimeError('stopped during startup')
            (run_dir / 'listeners.txt').write_text(inventory)
            status.update(ready=True, ready_at=utc(), listeners_verified=sorted(listeners))
            write_json(self.run / 'status.json', status)
            print(f'ready {args.run_id} pids {status["pids"]}', flush=True)
            while not stop:
                if exited := {n: p.returncode for n, p in processes.items() if p.poll() is not None}:
                    raise RuntimeError('service exited: ' + json.dumps(exited))
                time.sleep(0.5)
        except BaseException as error:
            status['error'] = str(error)
            print('error', error, flush=True)
        finally:
            for p in processes.values():
                if p.poll() is None:
                    p.terminate()
            for p in processes.values():
                try:
                    p.wait(timeout=5)
                except subprocess.TimeoutExpired:
                    p.kill()
                    p.wait()
            for log in logs:
                log.write(f'==== backendctl run {args.run_id} stop {utc()} ====\n')
                log.close()
            status.update(ready=False, stopped_at=utc(), exit_codes={n: p.returncode for n, p in processes.items()})
            write_json(self.run / 'status.json', status)
            write_json(run_dir / 'run.json', status)
            (self.run / 'supervisor.pid').unlink(missing_ok=True)
        return 1 if status.get('error') else 0

    def cmd_stop(self, args):
        status = self.status_file()
        pid = self.supervisor_pid()
        if pid:
            os.kill(pid, signal.SIGTERM)
            deadline = time.monotonic() + args.wait
            while alive(pid) and time.monotonic() < deadline:
                time.sleep(0.2)
            if alive(pid):
                raise SystemExit(f'supervisor {pid} did not stop')
        # A supervisor killed without cleanup can leave its services behind.
        for name, child in (status.get('pids') or {}).items():
            if alive(child) and child != os.getpid():
                os.kill(child, signal.SIGTERM)
        print(json.dumps({'stopped': bool(pid), 'run_id': status.get('run_id'), 'port_holders': self.port_holders()}, indent=2))

    def cmd_status(self, args):
        status = self.status_file()
        report = {'utc': utc(), 'run_id': status.get('run_id'), 'supervisor': self.supervisor_pid(),
                  'services': {}, 'tunnels': {}, 'healthy': False}
        pids = status.get('pids') or {}
        for name in SERVICES:
            report['services'][name] = {'pid': pids.get(name), 'alive': alive(pids.get(name))}
        try:
            listeners, _ = self.inventory([p for p in pids.values() if alive(p)])
            missing = self.expected_listeners() - listeners
            report['listeners'] = {'expected': len(self.expected_listeners()), 'missing': sorted(missing),
                                   'extra': sorted(listeners - self.expected_listeners())}
        except RuntimeError as error:
            report['listeners'] = {'error': str(error)}
            missing = True
        db = self.state / 'backend.db'
        if db.exists():
            with sqlite3.connect(f'file:{db}?mode=ro', uri=True) as connection:
                report['database'] = {table: connection.execute(f'SELECT count(*) FROM {table}').fetchone()[0]
                                      for table in ('account', 'user', 'battle_record')}
        for host in self.tunnels:
            report['tunnels'][host] = self.tunnel_check(host)
        if args.users:
            # Read-only operator API on its own port; it sends nothing to game clients.
            with urllib.request.urlopen(f'http://{self.address("api")}/lbs/status', timeout=3) as response:
                report['lobby_status'] = json.loads(response.read())
        report['healthy'] = bool(report['supervisor'] and status.get('ready') and not missing and report.get('database')
                                 and all(s['alive'] for s in report['services'].values()))
        print(json.dumps(report, indent=2, ensure_ascii=False))
        return 0 if report['healthy'] else 1

    # ---- tunnels --------------------------------------------------------

    def tunnel_socket(self, host):
        # Relative to run/: macOS limits a control socket path to 104 bytes.
        return 'tunnel-' + re.sub(r'[^A-Za-z0-9_.-]', '_', host) + '.sock'

    def tunnel_check(self, host):
        result = subprocess.run(['ssh', '-S', self.tunnel_socket(host), '-O', 'check', host],
                                cwd=self.run, capture_output=True, text=True)
        return {'up': result.returncode == 0, 'detail': (result.stderr or result.stdout).strip()}

    def cmd_tunnel(self, args):
        if args.host not in self.tunnels:
            raise SystemExit('host is not configured under tunnels: ' + args.host)
        tunnel = self.tunnels[args.host]
        self.run.mkdir(parents=True, exist_ok=True)
        local = self.ports['gateway'] if tunnel.get('listener', 'default') == 'default' else self.listeners[tunnel['listener']]
        remote = int(tunnel.get('remote_port', self.ports['gateway']))
        record = {'utc': utc(), 'host': args.host, 'action': args.action, 'remote': f'127.0.0.1:{remote}',
                  'local': f'127.0.0.1:{local}', 'listener': tunnel.get('listener', 'default')}
        if args.action == 'up':
            # A master that died without cleanup leaves its socket behind; a new
            # master would then run without one and could not be checked or stopped.
            sock = self.run / self.tunnel_socket(args.host)
            if sock.exists() and not self.tunnel_check(args.host)['up']:
                sock.unlink()
                record['removed_stale_socket'] = True
            # The remote end binds only that device's loopback address.
            command = ['ssh', '-M', '-S', self.tunnel_socket(args.host), '-fN', '-o', 'BatchMode=yes',
                       '-o', 'ExitOnForwardFailure=yes', '-o', 'ServerAliveInterval=15', '-o', 'ServerAliveCountMax=4',
                       '-R', f'127.0.0.1:{remote}:127.0.0.1:{local}', args.host]
            result = subprocess.run(command, cwd=self.run, capture_output=True, text=True)
            record.update(command=command, returncode=result.returncode, stderr=result.stderr.strip())
        elif args.action in ('forward', 'cancel'):
            # Add or remove one extra loopback forward on the running tunnel,
            # for example a page server: --local 18647:8647 or --remote 8647:18647.
            spec = args.local or args.remote
            if not spec or bool(args.local) == bool(args.remote):
                raise SystemExit('give exactly one of --local or --remote as PORT:PORT')
            first, second = (int(port) for port in spec.split(':'))
            flag = '-L' if args.local else '-R'
            forward = f'127.0.0.1:{first}:127.0.0.1:{second}'
            result = subprocess.run(['ssh', '-S', self.tunnel_socket(args.host), '-O', args.action, flag, forward, args.host],
                                    cwd=self.run, capture_output=True, text=True)
            record.update(forward=[flag, forward], returncode=result.returncode, stderr=result.stderr.strip())
        elif args.action == 'down':
            result = subprocess.run(['ssh', '-S', self.tunnel_socket(args.host), '-O', 'exit', args.host],
                                    cwd=self.run, capture_output=True, text=True)
            record.update(returncode=result.returncode, stderr=result.stderr.strip())
        record['check'] = self.tunnel_check(args.host)
        self.logs.mkdir(parents=True, exist_ok=True)
        with (self.logs / 'tunnels.jsonl').open('a') as f:
            f.write(json.dumps(record) + '\n')
        print(json.dumps(record, indent=2))
        return 0 if record.get('returncode', 0) == 0 else 1

    def cmd_rtt(self, args):
        """Time HTTP requests from a device through its tunnel to the gateway.

        Each request is answered by the gateway's own 404 handler; no game
        service is contacted. Run it outside game captures."""
        tunnel = self.tunnels[args.host]
        remote = int(tunnel.get('remote_port', self.ports['gateway']))
        url = f'http://127.0.0.1:{remote}/rtt'
        sink = 'NUL' if tunnel.get('windows') else '/dev/null'
        curl = 'curl.exe' if tunnel.get('windows') else 'curl'
        transfers = []
        for _ in range(args.count):
            transfers += ['-o', sink, url]
        command = [curl, '-s', '-w', '%{time_connect} %{time_starttransfer} %{time_total} %{http_code}\\n', *transfers]
        result = subprocess.run(['ssh', '-o', 'BatchMode=yes', args.host, ' '.join(
            f'"{part}"' if ' ' in part else part for part in command)], capture_output=True, text=True, timeout=120)
        rows = [line.split() for line in result.stdout.splitlines() if line.strip()]
        ms = sorted(float(r[2]) * 1000 for r in rows[1:] if len(r) == 4 and r[3] == '404')
        record = {'utc': utc(), 'host': args.host, 'url': url, 'requests': len(rows),
                  'first_total_ms': float(rows[0][2]) * 1000 if rows else None,
                  'reused_connection_ms': {'min': ms[0], 'median': ms[len(ms) // 2], 'max': ms[-1]} if ms else None,
                  'returncode': result.returncode, 'stderr': result.stderr.strip()[-500:]}
        if shutil.which('tailscale') and tunnel.get('tailnet_name'):
            ping = subprocess.run(['tailscale', 'ping', '-c', str(args.count), tunnel['tailnet_name']],
                                  capture_output=True, text=True, timeout=120)
            record['tailscale_ping'] = ping.stdout.strip().splitlines()[-args.count:]
        self.logs.mkdir(parents=True, exist_ok=True)
        with (self.logs / 'rtt.jsonl').open('a') as f:
            f.write(json.dumps(record) + '\n')
        print(json.dumps(record, indent=2))


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--config', type=Path, required=True)
    sub = parser.add_subparsers(dest='command', required=True)
    p = sub.add_parser('build', help='build the pinned server and gateway from source into builds/<utc>')
    p.add_argument('--archive', help='override the configured source archive')
    p.add_argument('--activate', action='store_true', help='make this the active build')
    p = sub.add_parser('activate', help='make an existing builds/<utc> the active build (backend stopped)')
    p.add_argument('build', help='directory name under builds/')
    p = sub.add_parser('init', help='create private state: capability token and optional imported database')
    p.add_argument('--import-db', help='copy an existing backend.db (accounts, pilots, records) into new state')
    p.add_argument('--import-gateway-config', help='reuse the capability token of an earlier gateway.json')
    p = sub.add_parser('start', help='start the supervisor and wait until every listener is verified')
    p.add_argument('--wait', type=float, default=30)
    p = sub.add_parser('supervise', help=argparse.SUPPRESS)
    p.add_argument('run_id')
    p = sub.add_parser('stop', help='stop the supervisor and its services')
    p.add_argument('--wait', type=float, default=20)
    p = sub.add_parser('status', help='health: processes, loopback listeners, database, tunnels')
    p.add_argument('--users', action='store_true', help='also read the lobby operator API /lbs/status')
    p = sub.add_parser('tunnel', help='SSH reverse tunnel from a configured device to the gateway')
    p.add_argument('action', choices=['up', 'down', 'check', 'forward', 'cancel'])
    p.add_argument('host')
    p.add_argument('--local', help='forward/cancel: LOCAL:REMOTE, this machine 127.0.0.1:LOCAL -> device 127.0.0.1:REMOTE')
    p.add_argument('--remote', help='forward/cancel: REMOTE:LOCAL, device 127.0.0.1:REMOTE -> this machine 127.0.0.1:LOCAL')
    p = sub.add_parser('rtt', help='time gateway HTTP round trips from a device through its tunnel')
    p.add_argument('host')
    p.add_argument('--count', type=int, default=20)
    args = parser.parse_args()
    backend = Backend(args.config)
    sys.exit(getattr(backend, 'cmd_' + args.command)(args) or 0)


if __name__ == '__main__':
    main()
