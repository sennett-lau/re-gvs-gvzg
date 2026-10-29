import json
from pathlib import Path
import tempfile
import unittest
from variant_prepare import observations


class ObservationTest(unittest.TestCase):
    def write_capture(self, root, texts, trace_lost=False):
        root.joinpath('run.json').write_text(json.dumps({'clients': 1, 'muted': True, 'audioSuspendedForTiming': False}))
        root.joinpath('failure.json').write_text(json.dumps({'clients': [{'state': 'failed', 'traceLost': trace_lost, 'errors': []}]}))
        root.joinpath('A-console.jsonl').write_text('\n'.join(json.dumps({'utc': str(i), 'text': text}) for i, text in enumerate(texts)))

    def pair(self):
        common = ' site=01181C48 address=01181C84 ra=01181C50 args=01181C84,1,0,0 words=00000001 marker_valid=1 marker_address=01181C70 marker=0'
        return ['[original-exec-transform] phase=before' + common, '[original-exec-transform] phase=after' + common]

    def test_consistent_repeated_pairs_are_retained(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); self.write_capture(root, self.pair() * 2)
            self.assertEqual(observations(root, 0x1181C84, 4)[3], 2)

    def test_incomplete_pair_cannot_authorize_code(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); self.write_capture(root, self.pair()[:1])
            with self.assertRaisesRegex(ValueError, 'Incomplete'): observations(root, 0x1181C84, 4)

    def test_changed_repeat_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); texts = self.pair() * 2; texts[-1] = texts[-1].replace('words=00000001', 'words=00000002')
            self.write_capture(root, texts)
            with self.assertRaisesRegex(ValueError, 'inconsistent'): observations(root, 0x1181C84, 4)

    def test_trace_loss_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); self.write_capture(root, self.pair(), True)
            with self.assertRaisesRegex(ValueError, 'complete silent'): observations(root, 0x1181C84, 4)


if __name__ == '__main__': unittest.main()
