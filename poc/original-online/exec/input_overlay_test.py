import importlib.util
import json
from pathlib import Path
import subprocess
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
spec = importlib.util.spec_from_file_location('input_overlay', HERE / 'input_overlay.py')
overlay = importlib.util.module_from_spec(spec)
spec.loader.exec_module(overlay)
# The frame before the input change, from history.
PREVIOUS = lambda: subprocess.run(['git', 'show', '018d974:poc/original-online/exec/frame.mjs'], cwd=HERE, check=True,
                                  capture_output=True, text=True).stdout


class InputOverlayTest(unittest.TestCase):
    def test_overlay_matches_the_reviewed_frame(self):
        previous = PREVIOUS()
        self.assertEqual(overlay.apply(previous), (HERE / 'frame.mjs').read_text())
        with self.assertRaisesRegex(ValueError, 'anchor'): overlay.apply(overlay.apply(previous))

    def test_site_copy_changes_only_the_game_frame(self):
        previous = PREVIOUS()
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); site = root / 'site'
            for name, text in {'game/frame.mjs': previous, 'utility/frame.mjs': previous, 'game/index.wasm': 'g', 'utility/index.wasm': 'u'}.items():
                (site / name).parent.mkdir(parents=True, exist_ok=True); (site / name).write_text(text)
            info = {'profile': 'experimental-original-exec-documents-v1', 'files_sha256': {
                n: overlay.sha(site / n) for n in ['game/frame.mjs', 'utility/frame.mjs', 'game/index.wasm', 'utility/index.wasm']}}
            (site / 'build-info.json').write_text(json.dumps(info))
            result = overlay.prepare(site, root / 'out', overlay.sha(site / 'build-info.json'))
            self.assertEqual((root / 'out/game/frame.mjs').read_text(), overlay.apply(previous))
            self.assertEqual((root / 'out/utility/frame.mjs').read_text(), previous)
            self.assertEqual(result['files_sha256']['game/frame.mjs'], overlay.sha(root / 'out/game/frame.mjs'))
            with self.assertRaisesRegex(ValueError, 'Reviewed site'): overlay.prepare(site, root / 'out2', '0' * 64)
            with self.assertRaisesRegex(ValueError, 'without an input overlay'):
                overlay.prepare(root / 'out', root / 'out3', overlay.sha(root / 'out/build-info.json'))


if __name__ == '__main__': unittest.main()
