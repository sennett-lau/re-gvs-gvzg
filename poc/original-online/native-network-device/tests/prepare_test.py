import importlib.util
import shutil
import tempfile
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[3]
VENDOR = ROOT / 'vendor/ps2-web-recomp/runtime/src/iop'


def load(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


storage = load('native_storage_prepare', ROOT / 'poc/original-online/native-storage/prepare.py')
device = load('native_network_device_prepare', HERE.parent / 'prepare.py')
status = load('module_status_prepare', HERE.parent / 'module_status.py')


class NativeNetworkDevicePreparation(unittest.TestCase):
    def test_requires_card_file_slice_and_patches_only_named_points(self):
        before = {name: (VENDOR / name).read_bytes() for name in ['hw.cpp', 'kernel.cpp', 'libs.cpp']}
        with tempfile.TemporaryDirectory() as temporary:
            tree = Path(temporary)
            shutil.copytree(VENDOR, tree / 'runtime/src/iop')
            with self.assertRaisesRegex(ValueError, 'card-file slice first'):
                device.prepare(tree)
            storage.prepare(tree)
            manifest = device.prepare(tree)
            self.assertFalse(manifest['external_link'])
            self.assertEqual(manifest['compiled_sources'], ['runtime/src/iop/dev9.cpp'])
            self.assertEqual(manifest['replaced_sources'], ['runtime/src/iop/hw.cpp', 'runtime/src/iop/kernel.cpp', 'runtime/src/iop/libs.cpp'])
            self.assertIn('serialized', manifest['module_status']['savestate'])
            for name, patches in [('hw.cpp', device.HW_PATCHES), ('kernel.cpp', status.KERNEL_PATCHES), ('libs.cpp', status.LIBS_PATCHES)]:
                text = (tree / 'runtime/src/iop' / name).read_text()
                for old, new in reversed(patches):
                    text = text.replace(new, old)
                self.assertEqual(text.encode(), before[name], name)
            with self.assertRaisesRegex(ValueError, 'already prepared'):
                device.prepare(tree)
        for name, data in before.items():
            self.assertEqual((VENDOR / name).read_bytes(), data)


if __name__ == '__main__':
    unittest.main()
