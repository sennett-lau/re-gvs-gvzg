import importlib.util
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('online_prepare', ROOT / 'poc/original-online/prepare.py')
profile = importlib.util.module_from_spec(spec)
spec.loader.exec_module(profile)


class OriginalOnlineProfile(unittest.TestCase):
    def test_observer_preserves_every_original_instruction(self):
        source = ROOT / 'generated/gundam-vs-z-gundam'
        with tempfile.TemporaryDirectory() as temporary:
            output = Path(temporary) / 'overrides'
            manifest = profile.prepare(source, output)
            self.assertFalse(manifest['lockstep'])
            self.assertFalse(manifest['guest_writes'])
            for name, points in profile.POINTS.items():
                observed = (output / name).read_text()
                observed = observed.removeprefix('#include "observer.hpp"\n')
                for kind in points.values():
                    observed = observed.replace(f'    original_online::{kind}(c);\n', '')
                self.assertEqual(observed, (source / name).read_text())
            with self.assertRaisesRegex(ValueError, 'new output'):
                profile.prepare(source, output)

    def test_rejects_versus_bridge_before_writing_anything(self):
        with tempfile.TemporaryDirectory() as temporary:
            source = Path(temporary) / 'source'
            source.mkdir()
            (source / 'unit_0044.cpp').write_text('gundam_multiplayer_menu')
            output = Path(temporary) / 'output'
            with self.assertRaisesRegex(ValueError, 'never multiplayer'):
                profile.prepare(source, output)
            self.assertFalse(output.exists())

    def test_rejects_replaced_mode7(self):
        with tempfile.TemporaryDirectory() as temporary:
            source = Path(temporary) / 'source'
            source.mkdir()
            original = (ROOT / 'generated/gundam-vs-z-gundam/unit_0044.cpp').read_text()
            (source / 'unit_0044.cpp').write_text(original.replace(
                'L_00211180:\n    set32(c.r[2], 0u + 7u);',
                'L_00211180:\n    set32(c.r[2], 0u + 4u);'))
            with self.assertRaisesRegex(ValueError, 'mode 7'):
                profile.prepare(source, Path(temporary) / 'output')


if __name__ == '__main__':
    unittest.main()
