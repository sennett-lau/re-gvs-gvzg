import importlib.util
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[3]
VENDOR = ROOT / 'vendor/ps2-web-recomp'
GAME_PATCH = ROOT / 'patches/runtime/gundam-support.patch'
spec = importlib.util.spec_from_file_location('cdvd_identity_prepare', HERE.parent / 'cdvd_identity.py')
identity = importlib.util.module_from_spec(spec)
spec.loader.exec_module(identity)


def copy(tree, game_patch=False):
    shutil.copytree(VENDOR / 'runtime/src/iop', tree / 'runtime/src/iop')
    if game_patch:
        shutil.copytree(VENDOR / 'runtime/src/gs', tree / 'runtime/src/gs')
        subprocess.run(['patch', '-p1', '-s', '-i', str(GAME_PATCH)], cwd=tree, check=True)
    return tree / 'runtime/src/iop/cdvd.cpp'


class CdvdIdentityPreparation(unittest.TestCase):
    def test_pinned_and_game_runtime_once(self):
        for game_patch in (False, True):
            with tempfile.TemporaryDirectory() as temporary:
                cdvd = copy(Path(temporary), game_patch)
                manifest = identity.prepare(temporary)
                text = cdvd.read_text()
                self.assertEqual(text.count('def("cdvdman", 80, "sceCdReadGUID"'), 1)
                self.assertEqual(text.count('def("cdvdman", 82, "sceCdReadModelID"'), 1)
                self.assertEqual(text.count('def("cdvdman", 22, "sceCdRI"'), 1)
                self.assertEqual((Path(temporary) / 'runtime/src/iop/cdvd_identity.hpp').read_bytes(),
                                 (HERE.parent / 'cdvd_identity.hpp').read_bytes())
                self.assertEqual(manifest['files_sha256']['cdvd.cpp'], identity.sha(cdvd))
                with self.assertRaisesRegex(ValueError, 'already has'):
                    identity.prepare(temporary)

    def test_patches_only_named_points(self):
        for game_patch in (False, True):
            with tempfile.TemporaryDirectory() as temporary:
                cdvd = copy(Path(temporary), game_patch)
                before = cdvd.read_text()
                identity.prepare(temporary)
                text = cdvd.read_text()
                for old, new in (identity.EXPORTS, identity.PROVIDER, identity.INCLUDES):
                    text = text.replace(new, old)
                self.assertEqual(text, before)

    def test_changed_source_is_refused(self):
        with tempfile.TemporaryDirectory() as temporary:
            cdvd = copy(Path(temporary))
            cdvd.write_text(cdvd.read_text().replace('write8(arg(c, 0) + i, 0);', 'write8(arg(c, 0) + i, 1);'))
            with self.assertRaisesRegex(ValueError, 'cdvd.cpp changed'):
                identity.prepare(temporary)
            self.assertFalse((Path(temporary) / 'runtime/src/iop/cdvd_identity.hpp').exists())

    def test_changed_address_map_is_refused(self):
        with tempfile.TemporaryDirectory() as temporary:
            cdvd = copy(Path(temporary))
            before = cdvd.read_text()
            hw = Path(temporary) / 'runtime/src/iop/hw.cpp'
            hw.write_text(hw.read_text().replace('return p < 0x00800000u;', 'return p < 0x00200000u;'))
            with self.assertRaisesRegex(ValueError, 'address map changed'):
                identity.prepare(temporary)
            self.assertEqual(cdvd.read_text(), before)

    def test_existing_export_80_or_82_is_refused(self):
        for index in (80, 82):
            with tempfile.TemporaryDirectory() as temporary:
                cdvd = copy(Path(temporary))
                cdvd.write_text(cdvd.read_text().replace('    def("cdvdman", 24,', f'    def("cdvdman", {index}, "x", [](Cpu &) {{}});\n    def("cdvdman", 24,'))
                with self.assertRaisesRegex(ValueError, 'already defines'):
                    identity.prepare(temporary)


if __name__ == '__main__':
    unittest.main()
