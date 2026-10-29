import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch
import shutil
from overlay_site import prepare, sha


class OverlaySiteTest(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(); self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name); self.source = self.root / 'base'; self.source.mkdir()
        self.modules = {}
        for name in ['game', 'utility']:
            p = self.source / name; p.mkdir()
            (p / 'index.wasm').write_bytes(b'untouched synthetic ' + name.encode())
            (p / 'build-info.json').write_text('{}\n')
            self.modules[name] = {'network_enabled': name == 'game', 'files': ['index.wasm'], 'build_info_sha256': sha(p / 'build-info.json')}
        (self.source / 'game/network').mkdir()
        (self.source / 'game/network/wasm_host.mjs').write_text('original synthetic bridge')
        (self.source / 'game/frame.mjs').write_text('      installOriginalOnlineBridge(Module, data.networkConfig);\n')
        self.bridge = self.root / 'bridge.mjs'; self.bridge.write_text('reviewed synthetic bridge')
        self.observer = self.root / 'observer.mjs'; self.observer.write_text('reviewed synthetic observer')
        self.manifest()

    def manifest(self):
        self.info = {'profile': 'experimental-original-exec-documents-v1', 'modules': self.modules, 'runtime_tested': False,
            'files_sha256': {p.relative_to(self.source).as_posix(): sha(p) for p in self.source.rglob('*') if p.is_file() and p.name != 'build-info.json'}}
        for image in self.modules: self.info['files_sha256'][image + '/build-info.json'] = sha(self.source / image / 'build-info.json')
        (self.source / 'build-info.json').write_text(json.dumps(self.info))
        self.source_sha = sha(self.source / 'build-info.json')
        self.bridge_sha, self.observer_sha = sha(self.bridge), sha(self.observer)

    def run_prepare(self):
        return prepare(self.source, self.root / 'new', self.bridge, self.observer, self.source_sha, self.bridge_sha, self.observer_sha)

    def test_only_explicit_js_changes_and_original_wasm_manifests_preserved(self):
        info = self.run_prepare(); new = self.root / 'new'
        self.assertEqual(set(info['post_link_overlay']['changes']), {'game/frame.mjs', 'game/network/wasm_host.mjs', 'game/bridge_observer.mjs'})
        for image in self.modules:
            for name in ['index.wasm', 'build-info.json']:
                self.assertEqual((new / image / name).read_bytes(), (self.source / image / name).read_bytes())
        for name, digest in info['files_sha256'].items(): self.assertEqual(sha(new / name), digest)
        self.assertFalse(info['runtime_tested'])
        with self.assertRaisesRegex(ValueError, 'new site'): self.run_prepare()

    def test_override_or_original_output_drift_fails_before_output(self):
        for which in ['bridge', 'observer', 'original', 'manifest']:
            with self.subTest(which=which):
                self.setUp()
                path = {'bridge': self.bridge, 'observer': self.observer, 'original': self.source / 'game/index.wasm', 'manifest': self.source / 'build-info.json'}[which]
                path.write_text('changed')
                with self.assertRaises(ValueError): self.run_prepare()
                self.assertFalse((self.root / 'new').exists())

    def test_ambiguous_frame_and_unsafe_paths_fail(self):
        frame = self.source / 'game/frame.mjs'; frame.write_text(frame.read_text() * 2); self.manifest()
        with self.assertRaisesRegex(ValueError, 'anchor'): self.run_prepare()
        self.info['files_sha256']['../escape'] = 'not-a-digest'
        (self.source / 'build-info.json').write_text(json.dumps(self.info)); self.source_sha = sha(self.source / 'build-info.json')
        with self.assertRaisesRegex(ValueError, 'path'): self.run_prepare()

    def test_override_change_during_copy_is_rejected(self):
        original = shutil.copy2
        for name in ['bridge', 'observer']:
            with self.subTest(name=name):
                self.setUp(); target = getattr(self, name)
                def changed(source, destination, *args, **kwargs):
                    if Path(source) == target: target.write_text('changed after source verification')
                    return original(source, destination, *args, **kwargs)
                with patch('overlay_site.shutil.copy2', changed), self.assertRaisesRegex(ValueError, 'during copying'):
                    self.run_prepare()


if __name__ == '__main__': unittest.main()
