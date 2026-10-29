import json
from pathlib import Path
import tempfile
import struct
import unittest
from variant_prepare import BASE, immutable_code_checks, observations, text_bounds, validate_ranges


class SectionIdentityTest(unittest.TestCase):
    def image(self):
        data = bytearray(0x140)
        data[:4] = b'MWo3'
        struct.pack_into('<III', data, 8, BASE, 0x80, 0x80)
        return data

    def test_header_text_and_mutable_data_are_separate(self):
        data = self.image()
        self.assertEqual(text_bounds(data), (0x40, 0xC0))
        pairs = [(0x3C, 1), (0x40, 2), (0xBC, 3), (0xC0, 4), (0x13C, 5)]
        self.assertEqual(immutable_code_checks(data, pairs, []), [(0x40, 2), (0xBC, 3)])

    def test_marker_and_protected_bytes_stay_separately_guarded(self):
        pairs = [(0x6C, 0), (0x7C, 1), (0x80, 2), (0x84, 3), (0x88, 4)]
        self.assertEqual(immutable_code_checks(self.image(), pairs, [(BASE + 0x80, BASE + 0x88)]), [(0x7C, 1), (0x88, 4)])

    def test_invalid_sections_fail_closed(self):
        for offset, value in [(8, BASE + 4), (12, 0), (12, 0x81), (16, 0x84)]:
            data = self.image(); struct.pack_into('<I', data, offset, value)
            with self.assertRaises(ValueError): text_bounds(data)

    def test_combined_helpers_cannot_overlap_code_or_markers(self):
        validate_ranges([(0x100, 0x110), (0x140, 0x150)])
        with self.assertRaisesRegex(ValueError, 'Overlapping'):
            validate_ranges([(0x100, 0x120), (0x110, 0x130)])
        with self.assertRaisesRegex(ValueError, 'marker overlaps'):
            validate_ranges([(0x100, 0x110), (0x120, 0x130)])


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
