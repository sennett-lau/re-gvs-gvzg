"""Two-client deterministic input relay. The server never runs game simulation.

The input for frame N is released only after both players submit it, and a
matching checkpoint has unlocked its interval. A missing player pauses the
room; slots are never reassigned. Tokens stay in POST bodies, not URLs.
"""
import argparse
import http.server
import json
import re
import secrets
import threading
import time
from urllib.parse import urlsplit


class ProtocolError(ValueError):
    pass


def integer(value, low, high, name):
    if type(value) is not int or not low <= value <= high:
        raise ProtocolError('Invalid ' + name)
    return value


def fields(data, allowed):
    if not isinstance(data, dict) or set(data) - set(allowed):
        raise ProtocolError('Unexpected request fields')


def identity(value):
    fields(value, ('protocol', 'game_sha256', 'build_sha256', 'state_sha256', 'seed'))
    if type(value.get('protocol')) is not int or value.get('protocol') != 1:
        raise ProtocolError('Unsupported protocol')
    out = {'protocol': 1, 'seed': integer(value.get('seed'), 0, 0xffffffff, 'seed')}
    for name in ('game_sha256', 'build_sha256', 'state_sha256'):
        if not isinstance(value.get(name), str) or not re.fullmatch('[0-9a-f]{64}', value[name]):
            raise ProtocolError('Invalid ' + name)
        out[name] = value[name]
    return out


def pad(value):
    fields(value, ('buttons', 'lx', 'ly', 'rx', 'ry', 'pressure'))
    out = {'buttons': integer(value.get('buttons'), 0, 65535, 'buttons')}
    for name in ('lx', 'ly', 'rx', 'ry'):
        out[name] = integer(value.get(name), 0, 255, name)
    pressures = value.get('pressure', [0] * 16)
    if not isinstance(pressures, list) or len(pressures) != 16:
        raise ProtocolError('Expected sixteen pressure values')
    out['pressure'] = [integer(v, 0, 255, 'pressure') for v in pressures]
    return out


class Rooms:
    def __init__(self, *, lease_seconds=30, room_seconds=3600, max_rooms=4,
                 history_limit=256, ahead_limit=128, clock=time.monotonic):
        self.rooms = {}
        self.changed = threading.Condition()
        self.lease_seconds = lease_seconds
        self.room_seconds = room_seconds
        self.max_rooms = max_rooms
        self.history_limit = history_limit
        self.ahead_limit = ahead_limit
        self.clock = clock

    def _refresh(self, room, now):
        if room['terminal']:
            return
        for player in room['players']:
            if player and now - player['seen'] > self.lease_seconds:
                player['connected'] = False

    def _status(self, room):
        if room['terminal']:
            return room['terminal']
        if not room['players'][1]:
            return 'waiting'
        if not all(p['connected'] for p in room['players']):
            return 'paused'
        return 'running'

    def _summary(self, room):
        return {'status': self._status(room), 'next_frame': room['next_frame'],
                'checkpoint_frame': room['checkpoint_frame'],
                'players': [bool(p and p['connected']) for p in room['players']],
                'reason': room['reason']}

    def _release(self, room):
        if self._status(room) != 'running':
            return
        while room['next_frame'] < room['checkpoint_frame']:
            frame = room['next_frame']
            pair = room['pending'].get(frame)
            if not pair or None in pair or len(room['history']) >= self.history_limit:
                break
            room['history'][frame] = {'frame': frame, 'pads': pair}
            del room['pending'][frame]
            room['next_frame'] += 1
        self.changed.notify_all()

    def _authenticate(self, room, token):
        if not isinstance(token, str):
            raise ProtocolError('Invalid player token')
        for index, player in enumerate(room['players']):
            if player and secrets.compare_digest(token, player['token']):
                return index, player
        raise ProtocolError('Invalid player token')

    def call(self, action, data):
        allowed = {
            'create': ('identity', 'checkpoint_interval', 'input_delay'),
            'join': ('room', 'invite', 'identity'),
            'input': ('room', 'token', 'frame', 'pad'),
            'inputs': ('room', 'token', 'inputs'),
            'poll': ('room', 'token', 'from', 'wait'),
            'checkpoint': ('room', 'token', 'frame', 'hash', 'wait'),
            'resume': ('room', 'token'), 'leave': ('room', 'token'),
            'status': ('room', 'token'), 'close': ('room', 'token'),
        }
        if action not in allowed:
            raise ProtocolError('Unknown action')
        fields(data, allowed[action])
        with self.changed:
            now = self.clock()
            self.rooms = {key: room for key, room in self.rooms.items()
                          if now - room['active'] <= self.room_seconds}
            if action == 'create':
                ident = identity(data.get('identity'))
                interval = integer(data.get('checkpoint_interval', 60), 1, 120, 'checkpoint interval')
                delay = integer(data.get('input_delay', 3), 0, 30, 'input delay')
                # Terminal sessions no longer consume playable slots. Retain
                # recent records so peers still receive the useful close or
                # desync reason, but never evict an active/waiting session.
                terminal = sorted((key for key, room in self.rooms.items() if room['terminal']),
                                  key=lambda key: self.rooms[key]['active'])
                for key in terminal[:-self.max_rooms]:
                    del self.rooms[key]
                if sum(room['terminal'] is None for room in self.rooms.values()) >= self.max_rooms:
                    raise ProtocolError('Room capacity reached')
                room_id, token, invite = (secrets.token_urlsafe(24) for _ in range(3))
                player = {'token': token, 'seen': now, 'connected': True, 'ack': -1, 'delivered': -1, 'input_next': 0}
                self.rooms[room_id] = {'identity': ident, 'invite': invite, 'active': now,
                    'players': [player, None], 'pending': {}, 'history': {}, 'next_frame': 0,
                    'checkpoint_frame': 0, 'checkpoint_interval': interval, 'input_delay': delay, 'checkpoints': {},
                    'terminal': None, 'reason': None}
                return {'room': room_id, 'token': token, 'invite': invite, 'player': 0,
                        'identity': ident, 'checkpoint_interval': interval, 'input_delay': delay}
            room_id = data.get('room')
            if not isinstance(room_id, str) or room_id not in self.rooms:
                raise ProtocolError('Room expired or not found')
            room = self.rooms[room_id]
            self._refresh(room, now)
            if action == 'join':
                invite = data.get('invite')
                if not isinstance(invite, str) or not secrets.compare_digest(invite, room['invite']):
                    raise ProtocolError('Invalid invitation')
                if identity(data.get('identity')) != room['identity']:
                    raise ProtocolError('Game, build, state or seed does not match')
                if room['players'][1] is not None or room['terminal']:
                    raise ProtocolError('Room already has two owners; resume with your original token')
                token = secrets.token_urlsafe(24)
                room['players'][1] = {'token': token, 'seen': now, 'connected': True, 'ack': -1, 'delivered': -1, 'input_next': 0}
                room['active'] = now
                self.changed.notify_all()
                return {'room': room_id, 'token': token, 'player': 1, 'identity': room['identity'],
                        'checkpoint_interval': room['checkpoint_interval'], 'input_delay': room['input_delay']}
            index, player = self._authenticate(room, data.get('token'))
            room['active'] = now
            player['seen'] = now
            if action == 'resume':
                if room['terminal']:
                    raise ProtocolError('Terminal room cannot resume')
                player['connected'] = True
                self._release(room)
                return self._summary(room)
            if action == 'leave':
                player['connected'] = False
                self.changed.notify_all()
                return self._summary(room)
            if action == 'close':
                if index != 0:
                    raise ProtocolError('Only the room creator can close it')
                room['terminal'], room['reason'] = 'closed', 'Room closed by creator'
                self.changed.notify_all()
                return self._summary(room)
            if action == 'status':
                return dict(self._summary(room), player=index, identity=room['identity'],
                            input_next=player['input_next'], checkpoint_interval=room['checkpoint_interval'],
                            input_delay=room['input_delay'])
            if room['terminal']:
                return self._summary(room)
            if not player['connected']:
                return self._summary(room)
            if action in ('input', 'inputs'):
                items = [{'frame': data.get('frame'), 'pad': data.get('pad')}] if action == 'input' else data.get('inputs')
                if not isinstance(items, list) or not 1 <= len(items) <= 64:
                    raise ProtocolError('Expected one to sixty-four inputs')
                planned, expected, previous = [], player['input_next'], None
                for item in items:
                    fields(item, ('frame', 'pad'))
                    frame = integer(item.get('frame'), 0, 0x7fffffff, 'frame')
                    value = pad(item.get('pad'))
                    if previous is not None and frame != previous + 1:
                        raise ProtocolError('Batch frames must be consecutive')
                    previous = frame
                    old = room['history'].get(frame)
                    pair = room['pending'].get(frame)
                    existing = old['pads'][index] if old else (pair[index] if pair else None)
                    if existing is not None:
                        if existing != value:
                            raise ProtocolError('Conflicting duplicate input')
                        continue
                    if frame != expected:
                        raise ProtocolError('Out-of-order input; expected frame %d' % expected)
                    if frame >= room['next_frame'] + self.ahead_limit:
                        raise ProtocolError('Input buffer full; wait for the other player')
                    if frame < room['next_frame']:
                        raise ProtocolError('Input is older than retained history')
                    planned.append((frame, value))
                    expected += 1
                # Validate the complete batch before mutating any frame.
                for frame, value in planned:
                    room['pending'].setdefault(frame, [None, None])[index] = value
                player['input_next'] = expected
                self._release(room)
                return dict(self._summary(room), accepted=items[-1]['frame'], duplicate=not planned)
            if action == 'checkpoint':
                frame = integer(data.get('frame'), 0, 0x7fffffff, 'checkpoint frame')
                digest = data.get('hash')
                if not isinstance(digest, str) or not re.fullmatch('(?:[0-9a-f]{16}|[0-9a-f]{64})', digest):
                    raise ProtocolError('Expected a hexadecimal checkpoint hash')
                pair = room['checkpoints'].get(frame)
                if frame != room['checkpoint_frame'] and pair is None:
                    raise ProtocolError('Unexpected checkpoint frame')
                if frame > room['next_frame']:
                    raise ProtocolError('Checkpoint cannot skip game frames')
                pair = room['checkpoints'].setdefault(frame, [None, None])
                if pair[index] is not None and pair[index] != digest:
                    raise ProtocolError('Conflicting duplicate checkpoint')
                pair[index] = digest
                if all(value is not None for value in pair):
                    if pair[0] != pair[1]:
                        room['terminal'], room['reason'] = 'desynced', 'State hash mismatch at frame %d' % frame
                    elif frame == room['checkpoint_frame']:
                        room['checkpoint_frame'] += room['checkpoint_interval']
                        # Keep the immediately previous checkpoint for reliable retries.
                        room['checkpoints'] = {f: p for f, p in room['checkpoints'].items()
                                               if f >= frame - room['checkpoint_interval']}
                        self._release(room)
                    self.changed.notify_all()
                wait = integer(data.get('wait', 0), 0, 20, 'wait')
                if wait and not all(v is not None for v in pair):
                    self.changed.wait_for(lambda: all(v is not None for v in pair) or room['terminal']
                                          or self._status(room) == 'paused', wait)
                self._refresh(room, self.clock())
                return dict(self._summary(room), ready=bool(not room['terminal'] and
                            self._status(room) == 'running' and all(v is not None for v in pair) and pair[0] == pair[1]))
            if action == 'poll':
                first = integer(data.get('from'), 0, 0x7fffffff, 'poll cursor')
                wait = integer(data.get('wait', 20), 0, 20, 'wait')
                if first > room['next_frame']:
                    raise ProtocolError('Poll cursor skips unreleased frames')
                if first > player['delivered'] + 1:
                    raise ProtocolError('Poll cursor skips undelivered frames')
                if first < player['ack'] + 1:
                    raise ProtocolError('Poll cursor moved backwards')
                player['ack'] = first - 1
                if room['players'][1]:
                    floor = min(p['ack'] for p in room['players'])
                    room['history'] = {f: value for f, value in room['history'].items() if f > floor}
                self._release(room)
                if first not in room['history'] and wait and self._status(room) != 'paused':
                    self.changed.wait_for(lambda: first in room['history'] or room['terminal'] or
                                          self._status(room) == 'paused', wait)
                self._refresh(room, self.clock())
                frames = []
                if self._status(room) == 'running':
                    frames = [room['history'][f] for f in range(first, min(first + 64, room['next_frame']))
                              if f in room['history']]
                    if frames:
                        player['delivered'] = max(player['delivered'], frames[-1]['frame'])
                return dict(self._summary(room), frames=frames)


def handler_with_netplay(base, rooms=None):
    rooms = rooms or Rooms()

    class NetplayHandler(base):
        def do_POST(self):
            path = urlsplit(self.path).path
            if not path.startswith('/netplay-api/'):
                parent = getattr(super(), 'do_POST', None)
                return parent() if parent else self.send_error(404)
            origin = self.headers.get('Origin')
            if origin and urlsplit(origin).netloc != self.headers.get('Host'):
                self.send_error(403)
                return
            try:
                size = int(self.headers.get('Content-Length', '0'))
                if not 0 < size <= 16384 or self.headers.get_content_type() != 'application/json':
                    raise ProtocolError('Expected JSON up to 16 KiB')
                data = json.loads(self.rfile.read(size))
                result = rooms.call(path[len('/netplay-api/'):], data)
                code = 200
            except (ValueError, TypeError, KeyError, UnicodeDecodeError) as error:
                result, code = {'error': str(error)}, 400
            payload = json.dumps(result, separators=(',', ':')).encode()
            self.send_response(code)
            self.send_header('Content-Type', 'application/json')
            self.send_header('Content-Length', str(len(payload)))
            self.send_header('Cache-Control', 'no-store')
            self.send_header('Cross-Origin-Resource-Policy', 'same-origin')
            self.end_headers()
            try:
                self.wfile.write(payload)
            except (BrokenPipeError, ConnectionResetError):
                pass

    return NetplayHandler


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--host', default='127.0.0.1')
    parser.add_argument('--port', type=int, default=8622)
    args = parser.parse_args()
    server = http.server.ThreadingHTTPServer((args.host, args.port), handler_with_netplay(http.server.BaseHTTPRequestHandler))
    print('Netplay relay on http://%s:%d/netplay-api/' % server.server_address, flush=True)
    server.serve_forever()
