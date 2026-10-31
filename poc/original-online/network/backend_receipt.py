#!/usr/bin/env python3
"""Write a passive backend receipt for one game run from local logs and the database.

It reads backend.log, login.log and gateway.log in --logs and the SQLite database
read-only. It sends no network traffic. Login keys are replaced by short hashes.
"""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import re
import sqlite3

GLOG = re.compile(r'^([IWEF])(\d\d)(\d\d) (\d\d:\d\d:\d\d\.\d+)\s+\d+ (\S+?):\d+\] ?(.*)$')
STDLOG = re.compile(r'^(\d{4})/(\d\d)/(\d\d) (\d\d:\d\d:\d\d) (.*)$')
CLASSES = [
    ('dnas', re.compile(r'^dnas \S+ (POST|GET) (/gai-gw/\S+)')),
    ('login-web', re.compile(r'^dnas \S+ (POST|GET) (/00000020/\S+)')),
    ('login-http', re.compile(r'^200 .*(POST /login|GET /register|POST /register)')),
    ('lobby-event', re.compile(r'^\[lobby-event\] (\S+)')),
    ('lobby-open', re.compile(r'^A new tcp connection open\. (\S+)')),
    ('lobby-conn-end', re.compile(r'^TCP conn error: (.*)|^TCP read zero')),
    ('lobby-recv-timeout', re.compile(r'^Recv Timeout')),
    ('battle-info', re.compile(r'^Receive BattleInfo (.*)')),
    ('relay-start', re.compile(r'^\[TCP\] (\S+) Serve Start')),
    ('relay-end', re.compile(r'^\[TCP\] (\S+) Serve End')),
    ('relay-join', re.compile(r'^join success (\S+)')),
    ('relay-session', re.compile(r'^\[TCP\] SessionID (\d*)')),
    # The relay logs 'room nil' for each peer's first frame, before its join.
    ('relay-prejoin', re.compile(r'^room nil')),
    ('relay-join-failed', re.compile(r'^failed to join room|^BattleInfo not found|^User not found in BattleInfo')),
    ('relay-leave', re.compile(r'^leave peer (\S+)')),
    ('relay-error', re.compile(r'^\S+ (read|write) error')),
    ('battle-result', re.compile(r'^== BattleResult ==')),
    ('battle-timeout', re.compile(r'^Battle user timeout')),
    ('gateway-open', re.compile(r'^conn (\d+) open listener=(\S+) path=(\S+)')),
    ('gateway-close', re.compile(r'^conn (\d+) close ')),
    ('gateway-dial', re.compile(r'^conn (\d+) dial listener=(\S+) path=(\S+) service=(\S+)')),
]


class Redactor:
    def __init__(self, keys):
        self.keys = sorted((k for k in keys if k), key=len, reverse=True)

    def __call__(self, text):
        for key in self.keys:
            if key in text:
                text = text.replace(key, '<login-key:' + hashlib.sha256(key.encode()).hexdigest()[:8] + '>')
        return re.sub(r'login_key:\[([^\]<]+)\]', lambda m: 'login_key:[<redacted>]', text)


def local_tz():
    return datetime.datetime.now().astimezone().tzinfo


def parse_log(path, since, until, tz, source):
    """Yield (utc, source, level, origin, message) for lines in the window."""
    entries, last = [], None
    if not path.exists():
        return entries
    for raw in path.read_text(errors='replace').splitlines():
        m = GLOG.match(raw)
        if m:
            level, month, day, clock, origin, text = m.groups()
            when = None
            for year in (since.year, since.year - 1, since.year + 1):
                try:
                    t = datetime.datetime.strptime(f'{year}{month}{day} {clock}', '%Y%m%d %H:%M:%S.%f').replace(tzinfo=tz)
                except ValueError:
                    continue
                if when is None or abs(t - since) < abs(when - since):
                    when = t
        else:
            m = STDLOG.match(raw)
            if m:
                y, mo, d, clock, text = m.groups()
                when = datetime.datetime.strptime(f'{y}{mo}{d} {clock}', '%Y%m%d %H:%M:%S').replace(tzinfo=tz)
                level, origin = 'I', 'log'
            elif last is not None:
                last['continuation'].append(raw)
                continue
            else:
                continue
        when = when.astimezone(datetime.timezone.utc)
        last = None
        if since <= when <= until:
            last = {'utc': when.isoformat(timespec='milliseconds').replace('+00:00', 'Z'), 'source': source,
                    'level': level, 'origin': origin, 'text': text, 'continuation': []}
            entries.append(last)
    return entries


def db_time(value):
    """Parse a stored timestamp such as 2026-10-31 06:45:33.01936+09:00."""
    text = re.sub(r'\.(\d+)', lambda m: '.' + (m.group(1) + '000000')[:6], str(value).replace(' ', 'T'), count=1)
    return datetime.datetime.fromisoformat(text)


CLOSE = re.compile(r'^conn (\d+) close listener=(\S+) path=(\S+) duration_ms=(\d+) reason=(\S+) '
                   r'up\[bytes=(\d+) frames=(\d+) max_gap_ms=(\d+) gaps=\[([\d ]+)\]\] '
                   r'down\[bytes=(\d+) frames=(\d+) max_gap_ms=(\d+) gaps=\[([\d ]+)\]\](?: service=(\S+))?')
GAP_BUCKETS = ['<20ms', '20-50', '50-100', '100-200', '200-500', '500-1000', '>=1000ms']


def gateway_close(text):
    m = CLOSE.match(text)
    if not m:
        return None
    g = m.groups()
    side = lambda b, f, gap, hist: {'bytes': int(b), 'frames': int(f), 'max_gap_ms': int(gap),
                                    'gaps': dict(zip(GAP_BUCKETS, map(int, hist.split())))}
    return {'conn': int(g[0]), 'listener': g[1], 'path': g[2], 'duration_ms': int(g[3]), 'reason': g[4],
            'up': side(*g[5:9]), 'down': side(*g[9:13]), 'service': g[13]}


def gateway_summary(items):
    """Group closed gateway connections by path and listener."""
    groups = {}
    for item in items:
        c = item.get('close')
        if not c:
            continue
        key = c['path'] + ' @' + c['listener']
        g = groups.setdefault(key, {'connections': 0, 'reasons': {}, 'max_duration_ms': 0,
                                    'up': {'bytes': 0, 'frames': 0, 'max_gap_ms': 0, 'gaps': dict.fromkeys(GAP_BUCKETS, 0)},
                                    'down': {'bytes': 0, 'frames': 0, 'max_gap_ms': 0, 'gaps': dict.fromkeys(GAP_BUCKETS, 0)}})
        g['connections'] += 1
        g['reasons'][c['reason']] = g['reasons'].get(c['reason'], 0) + 1
        g['max_duration_ms'] = max(g['max_duration_ms'], c['duration_ms'])
        for d in ('up', 'down'):
            g[d]['bytes'] += c[d]['bytes']
            g[d]['frames'] += c[d]['frames']
            g[d]['max_gap_ms'] = max(g[d]['max_gap_ms'], c[d]['max_gap_ms'])
            for b in GAP_BUCKETS:
                g[d]['gaps'][b] += c[d]['gaps'][b]
    return groups


def attribute(timeline):
    """Join gateway connections (device listener) to service peer addresses,
    relay addresses to sessions, and sessions to users from BattleInfo."""
    service = {}
    for item in timeline:
        if item['kind'] == 'gateway-dial':
            conn, listener, path, addr = re.match(r'^conn (\d+) dial listener=(\S+) path=(\S+) service=(\S+)', item['text']).groups()
            service[addr] = {'conn': int(conn), 'listener': listener, 'path': path}
    closes = {i['close']['conn']: i['close'] for i in timeline if i.get('close')}
    users, pending, relay = {}, [], {}
    for item in timeline:
        addr = item.get('fields', {}).get('addr') if item['kind'] == 'lobby-event' else None
        match = re.search(r'127\.0\.0\.1:\d+', item['text']) if item['kind'] in ('lobby-open', 'relay-start', 'relay-join',
                                                                                    'relay-prejoin', 'relay-leave', 'relay-end') else None
        addr = addr or (match.group(0) if match else None)
        if addr and addr in service:
            item['listener'] = service[addr]['listener']
            item['gateway_conn'] = service[addr]['conn']
        if item['kind'] == 'battle-info':
            for user, session in re.findall(r'\{(\w{6}) (\d+) ', item['text']):
                users[session] = user
        elif item['kind'] == 'relay-session':
            pending.append(item['text'].split()[2] if len(item['text'].split()) > 2 else '')
        elif item['kind'] == 'relay-join' and addr:
            session = pending.pop(0) if pending else None
            relay[addr] = {'session': session, 'user': users.get(session), 'joined': item['utc'],
                           'listener': item.get('listener'), 'gateway': closes.get(item.get('gateway_conn'))}
        elif item['kind'] == 'relay-leave' and addr in relay:
            relay[addr]['left'] = item['utc']
    return relay


def fields(text):
    """Parse 'key value' pairs after a [lobby-event] name, or key=value tokens."""
    if text.startswith('[lobby-event]'):
        words = text.split()[2:]
        return dict(zip(words[0::2], words[1::2]))
    return dict(re.findall(r'(\w+)=(\[[^\]]*\]|\S+)', text))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--logs', type=Path, required=True)
    parser.add_argument('--db', type=Path, required=True)
    parser.add_argument('--since', required=True, help='UTC ISO time, e.g. 2026-10-31T01:00:00Z')
    parser.add_argument('--until', required=True)
    parser.add_argument('--run-id', required=True)
    parser.add_argument('--out', type=Path, required=True, help='new private directory')
    parser.add_argument('--client', action='append', default=[], metavar='LABEL=USER',
                        help='label a client by its pilot user ID, for example A=P899XG; repeatable')
    args = parser.parse_args()
    since = datetime.datetime.fromisoformat(args.since.replace('Z', '+00:00'))
    until = datetime.datetime.fromisoformat(args.until.replace('Z', '+00:00'))
    args.out.mkdir(parents=True, exist_ok=False)
    connection = sqlite3.connect(f'file:{args.db.resolve()}?mode=ro', uri=True)
    connection.row_factory = sqlite3.Row
    redact = Redactor([r[0] for r in connection.execute('SELECT login_key FROM account')])
    tz = local_tz()
    entries = []
    sources = {}
    for name in ('backend.log', 'login.log', 'gateway.log'):
        path = args.logs / name
        found = parse_log(path, since, until, tz, name)
        entries += found
        sources[name] = {'bytes': path.stat().st_size if path.exists() else None, 'lines_in_window': len(found)}
    entries.sort(key=lambda e: e['utc'])
    timeline, summary = [], {k: [] for k in ('dnas', 'login', 'lobby_events', 'battle_info', 'relay', 'battle_results',
                                             'disconnects', 'gateway', 'errors')}
    for e in entries:
        text = redact(e['text'])
        kind = next((name for name, pattern in CLASSES if pattern.search(text)), None)
        if e['origin'] == 'msg_login.go' and text.isdigit():
            kind = 'lobby-keypair'
        if e['level'] in 'EF' and kind is None:
            kind = 'error'
        if kind is None:
            continue
        item = {'utc': e['utc'], 'source': e['source'], 'kind': kind, 'text': text[:400]}
        if kind == 'battle-result':
            body = '\n'.join(redact(line) for line in e['continuation'])
            match = re.search(r'\{.*\}', body, re.S)
            ident = re.search(r'ID: (\S+)', body)
            item['user'] = ident.group(1) if ident else None
            try:
                item['result'] = json.loads(match.group(0)) if match else None
            except ValueError:
                item['result_text'] = body[:2000]
            summary['battle_results'].append(item)
        elif kind == 'lobby-event':
            item['event'] = text.split()[1]
            item['fields'] = fields(text)
            summary['lobby_events'].append(item)
            if item['event'] == 'close':
                summary['disconnects'].append(item)
        elif kind in ('dnas', 'login-web'):
            summary['dnas'].append(item)
        elif kind in ('login-http', 'lobby-keypair'):
            summary['login'].append(item)
        elif kind == 'battle-info':
            summary['battle_info'].append(item)
        elif kind.startswith('relay') or kind == 'battle-timeout':
            summary['relay'].append(item)
        elif kind in ('lobby-conn-end', 'lobby-recv-timeout'):
            summary['disconnects'].append(item)
        elif kind.startswith('gateway'):
            item['fields'] = fields(text)
            if kind == 'gateway-close':
                item['close'] = gateway_close(text)
            summary['gateway'].append(item)
        if e['level'] in 'EF' or kind == 'error':
            summary['errors'].append(item)
        timeline.append(item)
    window = (since.isoformat(), until.isoformat())
    records = [dict(r) for r in connection.execute(
        'SELECT battle_code, user_id, pilot_name, players, pos, side, round, win, lose, kill, death, frame, '
        'length(result) AS result_bytes, created, updated FROM battle_record ORDER BY created')]
    in_window = []
    for r in records:
        stamps = [db_time(r[k]) for k in ('created', 'updated') if r[k]]
        if any(since <= s <= until for s in stamps):
            in_window.append(r)
    users = {r['user_id'] for r in in_window} | {i['fields'].get('user') for i in summary['lobby_events']}
    user_rows = [dict(r) for r in connection.execute(
        'SELECT user_id, name, team, battle_count, win_count, lose_count, kill_count, death_count FROM user')
        if r['user_id'] in users]
    events = [i['event'] for i in summary['lobby_events']]
    checks = {
        'dnas': bool(summary['dnas']),
        'login': bool(summary['login']) or 'login-ok' in events,
        'lobby': 'enter-lobby' in events,
        'battle_info': bool(summary['battle_info']),
        'relay_joins': sum(1 for i in summary['relay'] if i['kind'] == 'relay-join'),
        # The client answers the post-login result question with an empty battle
        # code when it has no battle to report; only coded answers are results.
        'battle_results': sum(1 for i in summary['battle_results'] if (i.get('result') or {}).get('battle_code')),
        'empty_result_answers': sum(1 for i in summary['battle_results'] if not (i.get('result') or {}).get('battle_code')),
        'battle_record_rows_in_window': len(in_window),
        'battle_record_rows_with_result': sum(1 for r in in_window if r['result_bytes']),
        'lobby_return_after_battle': 'enter-after-room' in events,
        'lobby_disconnects': sum(1 for i in summary['disconnects'] if i['kind'] == 'lobby-event'),
        'gateway_connections_closed': sum(1 for i in summary['gateway'] if i.get('close')),
        'gateway_connections_open_at_end': len({i['text'].split()[1] for i in summary['gateway'] if i['kind'] == 'gateway-open'}
                                               - {str(i['close']['conn']) for i in summary['gateway'] if i.get('close')}),
    }
    battle_connections = attribute(timeline)
    clients = {}
    for spec in args.client:
        label, user = spec.split('=', 1)
        events = [{'utc': i['utc'], 'event': i['event'], 'listener': i.get('listener'), 'lobby': i['fields'].get('lobby')}
                  for i in summary['lobby_events'] if i['fields'].get('user') == user]
        relay = {addr: c for addr, c in battle_connections.items() if c.get('user') == user}
        results = [i for i in summary['battle_results'] if i.get('user') == user]
        clients[label] = {'user': user, 'lobby_events': events, 'battle_connections': relay,
                          'battle_results': [{'utc': r['utc'], 'result': r.get('result')} for r in results],
                          'battle_record_rows': [r for r in in_window if r['user_id'] == user]}
        for item in timeline:
            if item.get('fields', {}).get('user') == user or item.get('user') == user:
                item['client'] = label
    receipt = {'run_id': args.run_id, 'written_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
               'scope': 'passive local logs and read-only database; no network traffic; login keys redacted',
               'window': window, 'log_timezone': str(tz), 'sources': sources, 'checks': checks,
               'gateway_summary': gateway_summary(summary['gateway']),
               'battle_connections': battle_connections, 'clients': clients,
               'battle_record_rows': in_window, 'users': user_rows, 'summary': summary, 'timeline': timeline}
    (args.out / 'receipt.json').write_text(json.dumps(receipt, indent=1, ensure_ascii=False) + '\n')
    print(json.dumps({'out': str(args.out / 'receipt.json'), 'checks': checks}, indent=2))


if __name__ == '__main__':
    main()
