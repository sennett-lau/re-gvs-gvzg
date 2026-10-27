#!/usr/bin/env python3
"""Real HTTP tests for the deterministic two-client input relay."""
from concurrent.futures import ThreadPoolExecutor
import http.server
import copy
import json
from pathlib import Path
import sys
import threading
import time
import unittest
import urllib.error
import urllib.request

sys.path.insert(0, str(Path(__file__).resolve().parents[2] / 'poc/lockstep/server'))
from netplay import Rooms, handler_with_netplay

IDENTITY = {'protocol': 1, 'game_sha256': 'a' * 64, 'build_sha256': 'b' * 64,
            'state_sha256': 'c' * 64, 'seed': 123}
NEUTRAL = {'buttons': 0, 'lx': 128, 'ly': 128, 'rx': 128, 'ry': 128}


class QuietHandler(http.server.BaseHTTPRequestHandler):
    def log_message(self, *args):
        pass


class Netplay(unittest.TestCase):
    def setUp(self):
        self.rooms = Rooms()
        self.server = http.server.ThreadingHTTPServer(('127.0.0.1', 0), handler_with_netplay(QuietHandler, self.rooms))
        self.worker = threading.Thread(target=self.server.serve_forever, daemon=True)
        self.worker.start()
        self.url = 'http://127.0.0.1:%d/netplay-api/' % self.server.server_port
        self.a = self.post('create', {'identity': IDENTITY, 'input_delay': 3})
        self.b = self.post('join', {'room': self.a['room'], 'invite': self.a['invite'], 'identity': IDENTITY})

    def tearDown(self):
        self.server.shutdown()
        self.server.server_close()
        self.worker.join()

    def post(self, action, data, code=200, origin=None):
        headers = {'Content-Type': 'application/json'}
        if origin:
            headers['Origin'] = origin
        request = urllib.request.Request(self.url + action, json.dumps(data).encode(), headers)
        try:
            response = urllib.request.urlopen(request, timeout=5)
        except urllib.error.HTTPError as error:
            response = error
        with response:
            self.assertEqual(response.status, code)
            body = response.read()
            return json.loads(body) if response.headers.get_content_type() == 'application/json' else body

    def player(self, action, session, code=200, **extra):
        return self.post(action, dict(room=session['room'], token=session['token'], **extra), code)

    def unlock(self, frame=0):
        self.assertFalse(self.player('checkpoint', self.a, frame=frame, hash='d' * 64)['ready'])
        self.assertTrue(self.player('checkpoint', self.b, frame=frame, hash='d' * 64)['ready'])

    def test_two_clients_delayed_input_barrier_and_identical_delivery(self):
        self.unlock()
        self.player('input', self.a, frame=0, pad=dict(NEUTRAL, buttons=16))
        with ThreadPoolExecutor(1) as pool:
            waiting = pool.submit(self.player, 'poll', self.a, **{'from': 0, 'wait': 2})
            time.sleep(.1)
            self.assertFalse(waiting.done(), 'A may not advance while B input is missing')
            self.player('input', self.b, frame=0, pad=dict(NEUTRAL, buttons=32))
            delivered = waiting.result()['frames']
        self.assertEqual(delivered, self.player('poll', self.b, **{'from': 0, 'wait': 0})['frames'])
        self.assertEqual([p['buttons'] for p in delivered[0]['pads']], [16, 32])
        self.assertEqual((self.a['player'], self.b['player']), (0, 1))

    def test_future_buffer_and_checkpoint_gate(self):
        self.unlock()
        for frame in range(65):
            for session in (self.a, self.b):
                self.player('input', session, frame=frame, pad=NEUTRAL)
        a = self.player('poll', self.a, **{'from': 0, 'wait': 0})
        b = self.player('poll', self.b, **{'from': 0, 'wait': 0})
        self.assertEqual(a['frames'], b['frames'])
        self.assertEqual(len(a['frames']), 60)
        self.assertEqual(a['next_frame'], 60)
        self.assertEqual(self.player('poll', self.a, **{'from': 60, 'wait': 0})['frames'], [])
        self.unlock(60)
        self.assertEqual([f['frame'] for f in self.player('poll', self.a, **{'from': 60, 'wait': 0})['frames']], list(range(60, 65)))

    def test_retries_out_of_order_and_ownership(self):
        self.unlock()
        self.player('input', self.a, 400, frame=1, pad=NEUTRAL)
        self.player('input', self.a, 400, frame=0, pad=NEUTRAL, player=1)
        self.player('input', self.a, frame=0, pad=NEUTRAL)
        self.assertTrue(self.player('input', self.a, frame=0, pad=NEUTRAL)['duplicate'])
        self.player('input', self.a, 400, frame=0, pad=dict(NEUTRAL, buttons=1))
        self.player('input', self.b, frame=0, pad=NEUTRAL)
        self.assertTrue(self.player('input', self.a, frame=0, pad=NEUTRAL)['duplicate'])
        self.player('poll', self.a, 400, **{'from': 1, 'wait': 0})
        self.post('input', {'room': self.a['room'], 'token': self.a['invite'], 'frame': 0, 'pad': NEUTRAL}, 400)

    def test_hash_mismatch_is_terminal(self):
        self.player('checkpoint', self.a, frame=0, hash='1' * 16)
        b = self.player('checkpoint', self.b, frame=0, hash='2' * 16)
        self.assertEqual(b['status'], 'desynced')
        self.assertFalse(b['ready'])
        self.assertEqual(self.player('input', self.a, frame=0, pad=NEUTRAL)['status'], 'desynced')
        self.player('resume', self.a, 400)

    def test_leave_resume_retains_owner_and_pending_input(self):
        self.unlock()
        self.player('input', self.a, frame=0, pad=NEUTRAL)
        self.assertEqual(self.player('leave', self.b)['status'], 'paused')
        self.assertEqual(self.player('poll', self.a, **{'from': 0, 'wait': 0})['frames'], [])
        self.post('join', {'room': self.a['room'], 'invite': self.a['invite'], 'identity': IDENTITY}, 400)
        self.assertEqual(self.player('input', self.b, frame=0, pad=NEUTRAL)['status'], 'paused')
        self.assertEqual(self.player('resume', self.b)['status'], 'running')
        self.player('input', self.b, frame=0, pad=NEUTRAL)
        self.assertEqual(len(self.player('poll', self.a, **{'from': 0, 'wait': 0})['frames']), 1)

    def test_expired_lease_does_not_silently_resume(self):
        self.unlock()
        self.rooms.rooms[self.a['room']]['players'][1]['seen'] -= 40
        self.assertEqual(self.player('status', self.a)['status'], 'paused')
        self.assertEqual(self.player('status', self.b)['status'], 'paused')
        self.assertEqual(self.player('resume', self.b)['status'], 'running')

    def test_handshake_rejects_different_build(self):
        host = self.post('create', {'identity': IDENTITY})
        self.post('join', {'room': host['room'], 'invite': host['invite'], 'identity': dict(IDENTITY, build_sha256='e' * 64)}, 400)

    def test_bounded_future_inputs_and_malformed_values(self):
        self.unlock()
        for frame in range(128):
            self.player('input', self.a, frame=frame, pad=NEUTRAL)
        self.player('input', self.a, 400, frame=128, pad=NEUTRAL)
        for bad in (dict(NEUTRAL, buttons=True), dict(NEUTRAL, lx=256), dict(NEUTRAL, pressure=[0])):
            self.player('input', self.b, 400, frame=0, pad=bad)
        self.post('status', {'room': self.a['room'], 'token': self.a['token']}, 403, 'https://unrelated.invalid')

    def test_only_creator_can_close_and_capacity_is_reclaimed(self):
        self.player('close', self.b, 400)
        self.assertEqual(self.player('close', self.a)['status'], 'closed')
        self.assertEqual(self.player('status', self.b)['status'], 'closed')
        for _ in range(6):
            session = self.post('create', {'identity': IDENTITY})
            self.player('close', session)

    def test_batch_validation_is_atomic_and_retries_are_idempotent(self):
        self.unlock()
        self.player('inputs', self.a, 400, inputs=[{'frame': 0, 'pad': NEUTRAL}, {'frame': 2, 'pad': NEUTRAL}])
        batch = [{'frame': frame, 'pad': dict(NEUTRAL, buttons=frame)} for frame in range(10)]
        self.assertEqual(self.player('inputs', self.a, inputs=batch)['accepted'], 9)
        self.assertTrue(self.player('inputs', self.a, inputs=batch)['duplicate'])
        self.player('inputs', self.b, inputs=batch)
        self.assertEqual(len(self.player('poll', self.a, **{'from': 0, 'wait': 0})['frames']), 10)

    def test_closed_and_desynced_rooms_do_not_consume_playable_slots(self):
        waiting = self.post('create', {'identity': IDENTITY})
        for index in range(self.rooms.max_rooms * 3):
            host = self.post('create', {'identity': IDENTITY})
            if index % 2:
                peer = self.post('join', {'room': host['room'], 'invite': host['invite'], 'identity': IDENTITY})
                self.player('checkpoint', host, frame=0, hash='1' * 16)
                self.assertEqual(self.player('checkpoint', peer, frame=0, hash='2' * 16)['status'], 'desynced')
            else:
                self.player('close', host)
            self.assertIn(self.a['room'], self.rooms.rooms)
            self.assertIn(waiting['room'], self.rooms.rooms)
            self.assertLessEqual(len(self.rooms.rooms), self.rooms.max_rooms * 2)
        self.assertEqual(self.player('status', self.a)['status'], 'running')
        self.assertEqual(self.player('status', waiting)['status'], 'waiting')

    def test_concurrent_room_creation_keeps_active_capacity_limit(self):
        def attempt(_):
            request = urllib.request.Request(self.url + 'create', json.dumps({'identity': IDENTITY}).encode(),
                                             {'Content-Type': 'application/json'})
            try:
                response = urllib.request.urlopen(request, timeout=5)
            except urllib.error.HTTPError as error:
                response = error
            with response:
                return response.status, json.loads(response.read())
        with ThreadPoolExecutor(8) as pool:
            results = list(pool.map(attempt, range(8)))
        self.assertEqual(sum(code == 200 for code, _ in results), self.rooms.max_rooms - 1)
        self.assertTrue(all(code == 200 or body.get('error') == 'Room capacity reached' for code, body in results))
        self.assertEqual(sum(room['terminal'] is None for room in self.rooms.rooms.values()), self.rooms.max_rooms)
        self.assertIn(self.a['room'], self.rooms.rooms)

    def test_status_exposes_no_credentials_and_does_not_advance_simulation(self):
        room = self.rooms.rooms[self.a['room']]
        names = ('pending', 'history', 'next_frame', 'checkpoint_frame', 'checkpoints')
        before = copy.deepcopy({name: room[name] for name in names})
        a = self.player('status', self.a)
        b = self.player('status', self.b)
        encoded = json.dumps([a, b])
        for private in (self.a['token'], self.b['token'], self.a['invite']):
            self.assertNotIn(private, encoded)
        self.assertNotIn('token', a)
        self.assertNotIn('invite', a)
        self.assertEqual(before, {name: room[name] for name in names})


if __name__ == '__main__':
    unittest.main()
