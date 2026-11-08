"""Exercise publication privacy rules in disposable repositories."""
from pathlib import Path
import os
import shutil
import subprocess
import sys
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / 'scripts/check-publication.py'


def address(*octets):
    return '.'.join(map(str, octets))


class PublicationTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        (self.root / 'scripts').mkdir()
        shutil.copyfile(SCRIPT, self.root / 'scripts/check-publication.py')
        self.env = dict(os.environ)
        for key in list(self.env):
            if key.startswith('GIT_'):
                del self.env[key]
        self.git('init', '-q')
        self.git('config', 'user.name', 'sennett-lau')
        self.git('config', 'user.email', '47737641+sennett-lau@users.noreply.github.com')

    def git(self, *args):
        return subprocess.check_output(['git', *args], cwd=self.root, env=self.env, stderr=subprocess.STDOUT)

    def write(self, path, content):
        target = self.root / path
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(content)

    def check(self, ok, *args):
        result = subprocess.run([sys.executable, 'scripts/check-publication.py', *args],
                                cwd=self.root, env=self.env, capture_output=True, text=True)
        self.assertEqual(result.returncode, 0 if ok else 1, result.stdout + result.stderr)

    def test_range_declaration_does_not_allow_device_addresses(self):
        network = address(100, 64, 0, 0)
        for suffix in ['/10', '/10.', '/10)']:
            self.write('example.txt', network + suffix)
            self.check(True)
        for value in [network, network + '/100', network + '/10extra', address(100, 64, 0, 1), address(10, 0, 0, 1)]:
            with self.subTest(value=value):
                self.write('example.txt', value)
                self.check(False)

    def test_virtual_fixture_exception_is_scoped(self):
        path = 'poc/original-online/native-network-device/prepare.py'
        fixture = address(192, 168, 208, 1)
        self.write(path, fixture)
        self.check(True)
        self.write(path, address(192, 168, 208, 2))
        self.check(False)
        self.write(path, fixture)
        self.write('unrelated.txt', fixture)
        self.check(False)

    def test_other_private_markers_still_fail(self):
        for value in ['/' + 'Users/private-person', 'ghp_' + 'x' * 40, 'host.' + 'ts.net']:
            with self.subTest(value=value):
                self.write('example.txt', value)
                self.check(False)

    def test_history_ignores_unpublished_checkpoint_but_checks_ancestors(self):
        self.git('add', '.')
        self.git('commit', '-qm', 'Approved base')
        base = self.git('rev-parse', 'HEAD').decode().strip()
        self.git('-c', 'user.name=Checkpoint', '-c', 'user.email=checkpoint@example.invalid',
                 'commit', '--allow-empty', '-qm', 'Unpublished checkpoint')
        self.git('update-ref', 'refs/t3/checkpoint', 'HEAD')
        self.git('checkout', '--detach', '-q', base)
        self.check(True, '--history')
        self.write('old.txt', address(100, 64, 0, 1))
        self.git('add', '.')
        self.git('commit', '-qm', 'Private address in ancestor')
        self.git('rm', 'old.txt')
        self.git('commit', '-qm', 'Remove current copy')
        self.check(True)
        self.check(False, '--history')

    def test_history_rejects_unapproved_commit_identity(self):
        self.git('add', '.')
        self.git('-c', 'user.name=Unapproved', '-c', 'user.email=unapproved@example.invalid',
                 'commit', '-qm', 'Wrong identity')
        self.check(False, '--history')


if __name__ == '__main__':
    unittest.main()
