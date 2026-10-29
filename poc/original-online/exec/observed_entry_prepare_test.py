import copy
import struct
import unittest

from observed_entry_prepare import BASE, NAME, observation, validate_target


class ObservedEntryTest(unittest.TestCase):
    def setUp(self):
        self.target, self.ra = BASE + 0x100, BASE + 0x88
        self.original = bytearray(0x300)
        self.original[:4] = b'MWo3'
        struct.pack_into('<III', self.original, 8, BASE, 0x200, 0xC0)
        struct.pack_into('<II', self.original, 0x80, 0x0040F809, 0)
        struct.pack_into('<16I', self.original, 0x100, *range(16))
        self.manifest = {'immutable_text_offsets': [0x40, 0x240], 'inline_data_spans': [[BASE + 0x1C0, BASE + 0x1D0]], 'protected_ranges': 1}
        self.ranges = [(BASE + 0x200, BASE + 0x220)]
        self.checks = {0x80: 0x0040F809, 0x84: 0}
        self.lines = [{'utc': '2026-10-29T09:11:10Z', 'text': text} for text in [
            f'[original-exec-code] pc={self.target:08X} ra={self.ra:08X} module={NAME} entry=0 valid=1 words=' + ','.join(f'{word:08X}' for word in range(16)),
            f'[ee] no translated code at 0x{self.target:08X} (ra 0x{self.ra:08X})',
            *['[ee]   r%-2d %s' % (start, ' '.join(f'{self.target if r == 2 else self.ra if r == 31 else 0:08X}' for r in range(start, start + 4))) for start in range(1, 33, 4)],
            f'[ee] halted: missing code at 0x{self.target:08X} (ra 0x{self.ra:08X})']]
        self.observed = observation(self.lines, self.target)

    def validate(self, entries=()):
        return validate_target(self.original, self.manifest, entries, self.checks, self.observed, self.ranges)

    def test_exact_original_missing_indirect_entry(self):
        result = self.validate()
        self.assertEqual(result['callsite'], BASE + 0x80)
        self.assertEqual(result['target_register'], 2)
        self.assertEqual(result['target'], self.target)

    def test_observation_requires_identity_complete_words_failure_and_registers(self):
        for old, new in [(NAME, 'other'), ('entry=0', 'entry=1'), ('valid=1', 'valid=0'), (',0000000F', ''), ('[ee] halted:', '[ignored] halted:'), ('[ee]   r1 ', '[ignored]   r1 ')]:
            with self.subTest(old=old):
                lines = copy.deepcopy(self.lines)
                for row in lines: row['text'] = row['text'].replace(old, new)
                with self.assertRaises(ValueError): observation(lines, self.target)
        with self.assertRaises(ValueError): observation(self.lines + self.lines, self.target)

    def test_changed_target_caller_register_guard_and_delay_fail(self):
        for change in ['target', 'call', 'register', 'guard', 'delay']:
            with self.subTest(change=change):
                self.setUp()
                if change == 'target': self.original[0x13F] ^= 1
                if change == 'call': struct.pack_into('<I', self.original, 0x80, 0x00400008)
                if change == 'register': self.observed['registers'][2] += 4
                if change == 'guard': self.checks[0x80] ^= 1
                if change == 'delay':
                    struct.pack_into('<I', self.original, 0x84, 0x24420001)
                    self.checks[0x84] = 0x24420001
                with self.assertRaises(ValueError): self.validate()

    def test_existing_data_protected_marker_unaligned_and_overlapping_spans_fail(self):
        with self.assertRaises(ValueError): self.validate([self.target])
        for address in [BASE + 0x20, BASE + 0x101, BASE + 0x204, BASE + 0x1EC, BASE + 0x1C0, BASE + 0x230, BASE + 0x240, BASE + 0x1A0]:
            with self.subTest(address=address):
                self.observed['pc'] = address
                with self.assertRaises(ValueError): self.validate()

    def test_manifest_section_and_range_counts_are_checked(self):
        self.manifest['immutable_text_offsets'][1] += 4
        with self.assertRaises(ValueError): self.validate()
        self.setUp(); self.manifest['protected_ranges'] = 0
        with self.assertRaises(ValueError): self.validate()


if __name__ == '__main__': unittest.main()
