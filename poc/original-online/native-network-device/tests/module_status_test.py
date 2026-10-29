import importlib.util
import shutil
import tempfile
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[3]
VENDOR = ROOT / 'vendor/ps2-web-recomp/runtime/src/iop'
spec = importlib.util.spec_from_file_location('module_status_prepare', HERE.parent / 'module_status.py')
status = importlib.util.module_from_spec(spec)
spec.loader.exec_module(status)


class ModuleStatusPreparation(unittest.TestCase):
    def test_module_status_alone_and_once(self):
        with tempfile.TemporaryDirectory() as temporary:
            tree = Path(temporary)
            shutil.copytree(VENDOR, tree / 'runtime/src/iop')
            manifest = status.prepare(tree)
            self.assertEqual(manifest['compiled_sources'], [])
            libs = (tree / 'runtime/src/iop/libs.cpp').read_text()
            self.assertIn('write16(p + 0x38, module_version(it->first));', libs)
            self.assertIn('write32(p + 0x3C, static_cast<std::uint32_t>(it->first));', libs)
            with self.assertRaisesRegex(ValueError, 'already has'):
                status.prepare(tree)

    def test_patches_only_named_points(self):
        before = {name: (VENDOR / name).read_bytes() for name in status.FILES}
        with tempfile.TemporaryDirectory() as temporary:
            tree = Path(temporary)
            shutil.copytree(VENDOR, tree / 'runtime/src/iop')
            status.prepare(tree)
            for name, patches in status.FILES.items():
                text = (tree / 'runtime/src/iop' / name).read_text()
                for old, new in reversed(patches):
                    text = text.replace(new, old)
                self.assertEqual(text.encode(), before[name], name)


if __name__ == '__main__':
    unittest.main()
