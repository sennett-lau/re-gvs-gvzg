#!/usr/bin/env python3
"""Run the prepared compatible backend and gateway on loopback until interrupted."""
import argparse
import datetime
import hashlib
import json
import os
from pathlib import Path
import secrets
import re
import signal
import socket
import subprocess
import time


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--build', type=Path, required=True)
    parser.add_argument('--state', type=Path, required=True, help='new private run directory; database is never reused or erased')
    parser.add_argument('--base-port', type=int, default=18200)
    parser.add_argument('--origin', action='append', default=[])
    args = parser.parse_args()
    if not 1024 <= args.base_port <= 65480:
        parser.error('base-port must leave room for the private services')
    build = args.build.resolve()
    manifest = json.loads((build/'build-info.json').read_text())
    for name in ('zdxsv', 'gateway'):
        if hashlib.sha256((build/name).read_bytes()).hexdigest() != manifest['outputs'][name]:
            raise SystemExit('built executable fingerprint mismatch: '+name)
    state = args.state.resolve()
    state.mkdir(parents=True, exist_ok=False)
    os.chmod(state, 0o700)
    ports = {name: args.base_port+delta for name,delta in {
        'lobby':0, 'stun':1, 'stun_test':2, 'api':3, 'login':4,
        'battle':10, 'gateway':20, 'dnas':43, 'dns':53}.items()}
    addresses = {name: '127.0.0.1:'+str(port) for name,port in ports.items()}
    conf = {'listen': addresses['gateway'], 'token': 'oo-'+secrets.token_hex(24),
            'origins': args.origin, 'udp': {'dns': addresses['dns']},
            'endpoints': {name:addresses[name] for name in ('lobby','battle','dnas','login')}}
    # Empty inherited service variables: no external upstream, relay or ops service.
    env = {k:v for k,v in os.environ.items() if not k.startswith('ZDXSV_')}
    env.update({
        'ZDXSV_DB_NAME':str(state/'backend.db'),
        'ZDXSV_DNS_ADDR':addresses['dns'], 'ZDXSV_DNAS_ADDR':addresses['dnas'],
        'ZDXSV_DNAS_PUBLIC_ADDR':'127.0.0.1', 'ZDXSV_DNAS_HTTPS_BACKEND':'',
        'ZDXSV_LOGIN_ADDR':addresses['login'], 'ZDXSV_LOGIN_PUBLIC_ADDR':'127.0.0.1',
        'ZDXSV_LOBBY_ADDR':addresses['lobby'], 'ZDXSV_LOBBY_RPC_ADDR':addresses['stun'],
        'ZDXSV_LOBBY_PUBLIC_ADDR':addresses['lobby'], 'ZDXSV_LOBBY_API_ADDR':addresses['api'],
        'ZDXSV_BATTLE_ADDR':addresses['battle'], 'ZDXSV_BATTLE_PUBLIC_ADDR':addresses['battle'],
        'ZDXSV_LOBBY_RELAY_ADDR':'', 'ZDXSV_LOBBY_OPS_ADDR':'', 'GOMAXPROCS':'2'})
    config_path = state/'gateway.json'
    config_path.write_text(json.dumps(conf,indent=2)+'\n')
    os.chmod(config_path,0o600)
    commands = [[str(build/'zdxsv'),'-profile=0','initdb'],
                [str(build/'zdxsv'),'-profile=0','all'],
                [str(build/'zdxsv'),'-profile=0','login'],
                [str(build/'gateway'),'-config',str(config_path)]]
    receipt = {'timestamp':datetime.datetime.now(datetime.timezone.utc).isoformat(), 'ports':ports,
               'commands':commands, 'environment':{k:v for k,v in env.items() if k.startswith('ZDXSV_')},
               'build_info_sha256':hashlib.sha256((build/'build-info.json').read_bytes()).hexdigest(),
               'native_client_connected':False, 'ready':False, 'launcher_pid':os.getpid()}
    processes, logs = [], []
    stop = False
    def stopping(*_):
        nonlocal stop
        stop = True
    signal.signal(signal.SIGINT,stopping)
    signal.signal(signal.SIGTERM,stopping)
    try:
        log = (state/'initdb.log').open('w')
        logs.append(log)
        subprocess.run(commands[0], cwd=state, env=env, stdout=log, stderr=subprocess.STDOUT, check=True)
        for name, command in zip(('backend','login','gateway'),commands[1:]):
            log = (state/(name+'.log')).open('w')
            logs.append(log)
            processes.append(subprocess.Popen(command,cwd=state,env=env,stdout=log,stderr=subprocess.STDOUT))
        deadline = time.monotonic()+20
        while time.monotonic() < deadline and not stop:
            if any(p.poll() is not None for p in processes):
                raise RuntimeError('a service exited; see retained service logs')
            try:
                for name in ('lobby','battle','api','dnas','login','gateway'):
                    with socket.create_connection(('127.0.0.1',ports[name]),0.2): pass
                break
            except OSError:
                time.sleep(.1)
        else:
            raise RuntimeError('startup timed out or cancelled')
        # Actual OS listener inventory is required on this local macOS/Linux setup.
        inventory = subprocess.check_output(['lsof','-nP','-a','-p',','.join(str(p.pid) for p in processes),'-i'],text=True)
        (state/'listeners.txt').write_text(inventory)
        listeners = set()
        for line in inventory.splitlines()[1:]:
            if 'LISTEN' in line or ' UDP ' in line:
                if '127.0.0.1:' not in line or '*:' in line:
                    raise RuntimeError('non-loopback listener: '+line)
                match = re.search(r'(TCP|UDP) 127[.]0[.]0[.]1:(\d+)',line)
                if match: listeners.add((match[1],int(match[2])))
        expected = {('TCP',ports[name]) for name in ('lobby','stun','api','login','battle','gateway','dnas')}
        expected |= {('UDP',ports[name]) for name in ('dns','stun','stun_test','battle')}
        if expected != listeners:
            raise RuntimeError('owned listener mismatch: missing='+str(expected-listeners)+' extra='+str(listeners-expected))
        receipt.update(ready=True,pids=[p.pid for p in processes],listeners=sorted(listeners))
        (state/'run.json').write_text(json.dumps(receipt,indent=2)+'\n')
        print(json.dumps({'ready':True,'state':str(state),'ports':ports}),flush=True)
        while not stop:
            if any(p.poll() is not None for p in processes):
                raise RuntimeError('a service exited; see retained logs')
            time.sleep(.2)
    except BaseException as error:
        receipt['error'] = str(error)
        raise
    finally:
        for p in processes:
            if p.poll() is None: p.terminate()
        for p in processes:
            try: p.wait(timeout=5)
            except subprocess.TimeoutExpired:
                p.kill(); p.wait()
        for log in logs: log.close()
        receipt['stopped_at'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
        receipt['exit_codes'] = [p.returncode for p in processes]
        (state/'run.json').write_text(json.dumps(receipt,indent=2)+'\n')

if __name__ == '__main__': main()
