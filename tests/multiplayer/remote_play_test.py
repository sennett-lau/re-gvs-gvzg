#!/usr/bin/env python3
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[2] / 'poc/streaming'))
from remote_play import Rooms


class RemotePlay(unittest.TestCase):
    def setUp(self):
        self.rooms = Rooms([{'urls': 'turn:test.invalid:3478'}])
        self.host = self.rooms.call('create', {})

    def join(self):
        return self.rooms.call('join', self.host)

    def test_two_devices_get_separate_ports(self):
        a, b = self.join(), self.join()
        self.assertEqual((a['port'], b['port']), (0, 1))
        self.assertNotEqual(a['token'], b['token'])
        with self.assertRaisesRegex(ValueError, 'occupied'):
            self.join()

    def test_invitation_does_not_grant_host_authority(self):
        with self.assertRaisesRegex(ValueError, 'Invalid session token'):
            self.rooms.call('leave', {'room': self.host['room'], 'token': self.host['invite']})
        with self.assertRaisesRegex(ValueError, 'Invalid invitation'):
            self.rooms.call('join', {'room': self.host['room'], 'invite': 'wrong'})

    def test_client_cannot_choose_another_players_port(self):
        a, b = self.join(), self.join()
        self.rooms.call('poll', self.host, wait=0)
        self.rooms.call('signal', dict(a, port=1, message={'type': 'answer', 'data': 'player zero'}))
        messages = self.rooms.call('poll', self.host, wait=0)['messages']
        self.assertEqual(messages[0]['port'], 0)
        self.assertEqual(self.rooms.call('poll', b, wait=0)['messages'], [])

    def test_host_offer_only_reaches_its_selected_player(self):
        a, b = self.join(), self.join()
        self.rooms.call('signal', dict(self.host, port=1, message={'type': 'offer', 'data': 'offer'}))
        self.assertEqual(self.rooms.call('poll', a, wait=0)['messages'], [])
        self.assertEqual(self.rooms.call('poll', b, wait=0)['messages'][0]['message']['data'], 'offer')

    def test_departing_or_stale_player_releases_slot(self):
        a, b = self.join(), self.join()
        self.rooms.call('leave', a)
        replacement = self.join()
        self.assertEqual(replacement['port'], 0)
        self.rooms.rooms[b['room']]['seen'][b['token']] -= 100
        self.assertEqual(self.join()['port'], 1)

    def test_host_closing_invalidates_all_players(self):
        a = self.join()
        self.rooms.call('leave', self.host)
        with self.assertRaisesRegex(ValueError, 'expired'):
            self.rooms.call('poll', a, wait=0)


if __name__ == '__main__':
    unittest.main()
