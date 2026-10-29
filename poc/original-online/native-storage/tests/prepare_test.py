import importlib.util
import shutil
import tempfile
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[3]
spec = importlib.util.spec_from_file_location('native_storage_prepare', HERE.parent / 'prepare.py')
prepare = importlib.util.module_from_spec(spec)
spec.loader.exec_module(prepare)
VENDOR = ROOT / 'vendor/ps2-web-recomp'


def copy_runtime(target):
    shutil.copytree(VENDOR / 'runtime/src/iop', target / 'runtime/src/iop')


class NativeStoragePreparation(unittest.TestCase):
    def test_patches_only_named_points_in_a_copy(self):
        before = {name: (VENDOR / 'runtime/src/iop' / name).read_bytes() for name in ['io.cpp', 'sif.cpp', 'sio2.cpp']}
        with tempfile.TemporaryDirectory() as temporary:
            tree = Path(temporary)
            copy_runtime(tree)
            manifest = prepare.prepare(tree)
            self.assertFalse(manifest['fabricated_results'])
            self.assertEqual(manifest['compiled_sources'], ['runtime/src/iop/native_storage.cpp'])
            for name, patches in [('io.cpp', prepare.IO_PATCHES), ('sif.cpp', prepare.SIF_PATCHES), ('sio2.cpp', prepare.SIO2_PATCHES)]:
                text = (tree / 'runtime/src/iop' / name).read_text()
                for old, new in patches:
                    text = text.replace(new, old)
                self.assertEqual(text.encode(), before[name], name)
            # Both EE fileio write handlers no longer echo the requested size.
            sif = (tree / 'runtime/src/iop/sif.cpp').read_text()
            self.assertNotIn('fileio_reply(args, 3, {word(20)', sif)
            self.assertNotIn('result = static_cast<std::int32_t>(word(2))', sif)
            with self.assertRaisesRegex(ValueError, 'already prepared'):
                prepare.prepare(tree)
        for name, data in before.items():
            self.assertEqual((VENDOR / 'runtime/src/iop' / name).read_bytes(), data)

    def test_rejects_changed_upstream_source_before_writing(self):
        with tempfile.TemporaryDirectory() as temporary:
            tree = Path(temporary)
            copy_runtime(tree)
            io = tree / 'runtime/src/iop/io.cpp'
            io.write_text(io.read_text().replace('        if (!g_files.count(fd)) return fd;', '        return fd;'))
            sif = (tree / 'runtime/src/iop/sif.cpp').read_bytes()
            with self.assertRaisesRegex(ValueError, 'io.cpp changed'):
                prepare.prepare(tree)
            self.assertEqual((tree / 'runtime/src/iop/sif.cpp').read_bytes(), sif)
            self.assertFalse((tree / 'runtime/src/iop/native_storage.cpp').exists())


if __name__ == '__main__':
    unittest.main()
