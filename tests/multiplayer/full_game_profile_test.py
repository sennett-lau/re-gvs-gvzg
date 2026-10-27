import importlib.util
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('multiplayer_profile', ROOT / 'scripts/game/multiplayer.py')
profile = importlib.util.module_from_spec(spec); spec.loader.exec_module(profile)

class FullGameProfile(unittest.TestCase):
    def test_network_selection_handoff_preserves_original_and_sets_versus_variant(self):
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory)
            original = (ROOT / 'generated/gundam-vs-z-gundam/unit_0044.cpp').read_bytes()
            (output / 'unit_0044.cpp').write_bytes(original)
            sources = profile.prepare(output, ROOT / 'vendor/ps2-web-recomp')
            actual = (output / 'unit_0044.cpp').read_text()
            self.assertEqual(actual.count('gundam_multiplayer_menu()'), 1)
            self.assertIn('if (c.r[2].w[0] == 4u) st8(c.r[6].w[0] + 76u, 1u);', actual)
            self.assertEqual((ROOT / 'generated/gundam-vs-z-gundam/unit_0044.cpp').read_bytes(), original)
            self.assertEqual(len(sources), 4)
            for name in ['cdvd', 'cdvdfsv']:
                source = (output / (name + '.cpp')).read_text()
                self.assertIn('gundam_netplay_enabled() ? gundam_netplay_rtc_seconds() + 9 * 3600 : std::time(nullptr)', source)
            with self.assertRaisesRegex(ValueError, 'ambiguous'):
                profile.prepare(output, ROOT / 'vendor/ps2-web-recomp')

    def test_boot_identity_changes_with_executing_code_not_css(self):
        import json
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory)
            (output / 'index.wasm').write_bytes(b'first code')
            profile.assets(output)
            first = json.loads((output / 'netplay-manifest.json').read_text())
            self.assertFalse(first['boot']['memory_card'])
            self.assertNotIn('stateUrl', first['boot'])
            (output / 'multiplayer.css').write_text('/* presentation */')
            profile.assets(output)
            self.assertEqual(first, json.loads((output / 'netplay-manifest.json').read_text()))
            (output / 'index.wasm').write_bytes(b'second code')
            profile.assets(output)
            second = json.loads((output / 'netplay-manifest.json').read_text())
            self.assertNotEqual(first['identity']['build_sha256'], second['identity']['build_sha256'])
            self.assertEqual(first['identity']['state_sha256'], second['identity']['state_sha256'])
