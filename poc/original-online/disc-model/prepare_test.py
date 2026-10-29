import importlib.util
from pathlib import Path
import shutil
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
spec = importlib.util.spec_from_file_location('disc_model_prepare', HERE / 'prepare.py')
prepare = importlib.util.module_from_spec(spec)
spec.loader.exec_module(prepare)


class PreparationTest(unittest.TestCase):
    def tree(self, path):
        for name in ['runtime/src/iop/cdvd.cpp', 'runtime/src/iop/kernel.cpp', 'runtime/src/iop/kernel.hpp',
                     'runtime/src/iop/hw.cpp', 'runtime/src/disc.cpp', 'runtime/include/ps2/disc.hpp']:
            dst = path / name; dst.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(ROOT / 'vendor/ps2-web-recomp' / name, dst)

    def test_exact_copy_and_no_default_mutation(self):
        original = ROOT / 'vendor/ps2-web-recomp/runtime/src/disc.cpp'
        before = prepare.sha(original)
        with tempfile.TemporaryDirectory() as temp:
            tree = Path(temp); self.tree(tree)
            result = prepare.prepare(tree)
            self.assertEqual(result['profile'], prepare.PROFILE)
            self.assertEqual(prepare.sha(original), before)
            self.assertIn('g_reader(offset, out, bytes) == bytes', (tree / 'runtime/src/disc.cpp').read_text())
            self.assertIn('return got > 0 || !count;', (tree / 'runtime/src/disc.cpp').read_text())
            self.assertIn('"sceCdReadDiskID", disc_model_begin', (tree / 'runtime/src/iop/cdvd.cpp').read_text())
            with self.assertRaisesRegex(ValueError, 'already'): prepare.prepare(tree)

    def test_drift_rejected_before_any_mutation(self):
        with tempfile.TemporaryDirectory() as temp:
            tree = Path(temp); self.tree(tree)
            header = tree / 'runtime/src/iop/kernel.hpp'
            header.write_text(header.read_text().replace('    kJobCount\n', '    kJobCount = 99\n'))
            before = {str(p): p.read_bytes() for p in tree.rglob('*') if p.is_file()}
            with self.assertRaisesRegex(ValueError, 'anchor'): prepare.prepare(tree)
            self.assertEqual(before, {str(p): p.read_bytes() for p in tree.rglob('*') if p.is_file()})

    def test_identity_composition_remains_separate(self):
        spec = importlib.util.spec_from_file_location('disc_model_identity_test', HERE.parent / 'native-network-device/cdvd_identity.py')
        identity = importlib.util.module_from_spec(spec); spec.loader.exec_module(identity)
        with tempfile.TemporaryDirectory() as temp:
            tree = Path(temp); self.tree(tree)
            identity.prepare(tree); prepare.prepare(tree)
            cdvd = (tree / 'runtime/src/iop/cdvd.cpp').read_text()
            for ordinal in [79, 80, 82]: self.assertEqual(cdvd.count(f'"cdvdman", {ordinal},'), 1)


if __name__ == '__main__': unittest.main()
