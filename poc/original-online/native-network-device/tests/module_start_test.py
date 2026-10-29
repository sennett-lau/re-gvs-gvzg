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
spec = importlib.util.spec_from_file_location('module_start_prepare', HERE.parent / 'module_start.py')
start = importlib.util.module_from_spec(spec)
spec.loader.exec_module(start)


def copy(tree, game_patch=False):
    shutil.copytree(VENDOR / 'runtime/src/iop', tree / 'runtime/src/iop')
    if game_patch:
        shutil.copytree(VENDOR / 'runtime/src/gs', tree / 'runtime/src/gs')
        subprocess.run(['patch', '-p1', '-s', '-i', str(GAME_PATCH)], cwd=tree, check=True)
    return tree / 'runtime/src/iop/kernel.cpp'


class ModuleStartPreparation(unittest.TestCase):
    def test_pinned_runtime_once(self):
        with tempfile.TemporaryDirectory() as temporary:
            kernel = copy(Path(temporary))
            manifest = start.prepare(temporary)
            self.assertEqual((manifest['variant'], manifest['compiled_sources']), ('pinned', []))
            text = kernel.read_text()
            self.assertIn('if (!t.stack) return -400;', text)
            self.assertIn('g_threads.erase(self);', text)
            self.assertIn('g_modules.erase(id);', text)
            with self.assertRaisesRegex(ValueError, 'already has'):
                start.prepare(temporary)

    def test_split_load_start_runtime(self):
        with tempfile.TemporaryDirectory() as temporary:
            kernel = copy(Path(temporary), game_patch=True)
            self.assertEqual(start.prepare(temporary)['variant'], 'split-load-start')
            text = kernel.read_text()
            self.assertIn('const std::int32_t started = start_module(id, path, args, std::move(done));', text)
            self.assertEqual(text.count('g_threads.erase(self);'), 1)

    def test_patches_only_named_points(self):
        for game_patch in (False, True):
            with tempfile.TemporaryDirectory() as temporary:
                kernel = copy(Path(temporary), game_patch)
                before = kernel.read_text()
                manifest = start.prepare(temporary)
                text = kernel.read_text()
                patches = [start.CREATE, start.RELEASE, start.START_VARIANTS[manifest['variant']]]
                patches += [start.SPLIT_LOAD] if game_patch else []
                for old, new in reversed(patches):
                    text = text.replace(new, old)
                self.assertEqual(text, before)

    def test_changed_start_is_refused(self):
        with tempfile.TemporaryDirectory() as temporary:
            kernel = copy(Path(temporary))
            kernel.write_text(kernel.read_text().replace('0x4000u, kDefaultModulePriority', '0x2000u, kDefaultModulePriority'))
            with self.assertRaisesRegex(ValueError, 'module start changed'):
                start.prepare(temporary)


if __name__ == '__main__':
    unittest.main()
