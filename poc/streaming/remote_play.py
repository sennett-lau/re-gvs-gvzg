"""Private, in-memory WebRTC signaling for one host and two controller ports."""
import json
import secrets
import threading
import time
from urllib.parse import urlsplit


class Rooms:
    def __init__(self, ice_servers):
        self.ice_servers = ice_servers
        self.rooms = {}
        self.changed = threading.Condition()

    def call(self, action, data, wait=20):
        with self.changed:
            now = time.monotonic()
            self.rooms = {key: room for key, room in self.rooms.items() if now - room['active'] < 3600}
            for room in self.rooms.values():
                for port, token in list(room['players'].items()):
                    if now - room['seen'][token] > 90:
                        del room['players'][port]
                        del room['queues'][token]
                        del room['seen'][token]
                        room['queues'][room['host']].append(dict(type='left', port=port))
            if action == 'create':
                if len(self.rooms) >= 4:
                    raise ValueError('Four sessions are already open. Close an old host session first.')
                room_id, host, invite = (secrets.token_urlsafe(24) for _ in range(3))
                self.rooms[room_id] = dict(host=host, invite=invite, players={}, queues={host: []}, seen={host: now}, active=now)
                return dict(room=room_id, token=host, invite=invite, iceServers=self.ice_servers)
            room_id = data.get('room')
            room = self.rooms.get(room_id)
            if not room:
                raise ValueError('Session expired or not found. Ask the host for a new link.')
            if action == 'join':
                if not secrets.compare_digest(str(data.get('invite', '')), room['invite']):
                    raise ValueError('Invalid invitation')
                free = [port for port in range(2) if port not in room['players']]
                if not free:
                    raise ValueError('Both player slots are occupied.')
                port, token = free[0], secrets.token_urlsafe(24)
                room['players'][port] = token
                room['queues'][token] = []
                room['seen'][token] = now
                room['queues'][room['host']].append(dict(type='joined', port=port))
                room['active'] = now
                self.changed.notify_all()
                return dict(room=room_id, token=token, port=port, iceServers=self.ice_servers)
            token = data.get('token')
            if not isinstance(token, str) or token not in room['queues']:
                raise ValueError('Invalid session token')
            room['active'] = now
            room['seen'][token] = now
            is_host = secrets.compare_digest(token, room['host'])
            if action == 'poll':
                if not room['queues'][token] and wait:
                    self.changed.wait_for(lambda: room_id not in self.rooms or token not in room['queues'] or room['queues'][token], wait)
                if room_id not in self.rooms or token not in room['queues']:
                    raise ValueError('Session closed')
                messages = room['queues'][token][:]
                room['queues'][token].clear()
                return dict(messages=messages)
            if action == 'signal':
                message = data.get('message')
                if not isinstance(message, dict) or message.get('type') not in ('offer', 'answer', 'ice'):
                    raise ValueError('Invalid signal')
                if is_host:
                    port = data.get('port')
                    target = room['players'].get(port) if type(port) is int else None
                else:
                    port = next(p for p, t in room['players'].items() if t == token)
                    target = room['host']
                if target is None:
                    return dict(delivered=False)
                if len(room['queues'][target]) >= 128:
                    raise ValueError('Signaling queue is full. Reconnect to the session.')
                room['queues'][target].append(dict(type='signal', port=port, message=message))
                self.changed.notify_all()
                return dict(delivered=True)
            if action == 'leave':
                if is_host:
                    del self.rooms[room_id]
                else:
                    port = next(p for p, t in room['players'].items() if t == token)
                    del room['players'][port]
                    del room['queues'][token]
                    del room['seen'][token]
                    room['queues'][room['host']].append(dict(type='left', port=port))
                self.changed.notify_all()
                return dict(closed=True)
            raise ValueError('Unknown action')


def handler_with_remote(base, config):
    rooms = Rooms(config['iceServers'])

    class RemoteHandler(base):
        def do_POST(self):
            if not self.path.startswith('/remote-api/'):
                self.send_error(404)
                return
            origin = self.headers.get('Origin')
            if origin and urlsplit(origin).netloc != self.headers.get('Host'):
                self.send_error(403)
                return
            try:
                size = int(self.headers.get('Content-Length', '0'))
                if not 0 < size <= 131072 or self.headers.get_content_type() != 'application/json':
                    raise ValueError('Expected a JSON request up to 128 KiB')
                data = json.loads(self.rfile.read(size))
                if not isinstance(data, dict):
                    raise ValueError('Expected an object')
                result = rooms.call(self.path.removeprefix('/remote-api/'), data)
                status = 200
            except (ValueError, TypeError, KeyError) as error:
                result, status = {'error': str(error)}, 400
            payload = json.dumps(result).encode()
            self.send_response(status)
            self.send_header('Content-Type', 'application/json')
            self.send_header('Content-Length', str(len(payload)))
            self.send_header('Cache-Control', 'no-store')
            self.end_headers()
            try:
                self.wfile.write(payload)
            except (BrokenPipeError, ConnectionResetError):
                pass

    return RemoteHandler
