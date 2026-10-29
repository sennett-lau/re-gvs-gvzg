import unittest
from entry_prepare import BASE, classify_edges, unit_entries


class DirectEntryTest(unittest.TestCase):
    def test_internal_labels_are_not_dispatch_entries(self):
        text = 'const std::uint16_t test_entries[4] = {0,1,0,2};\ncase 1u: goto L_00001004;\ncase 2u: goto L_0000100C;\nL_00001008:\n'
        self.assertEqual(unit_entries(text, 'test_entries', 0x1000, 16), {0x1004, 0x100C})
        with self.assertRaisesRegex(ValueError, 'mapping'):
            unit_entries(text.replace('{0,1,0,2}', '{0,1,2,0}'), 'test_entries', 0x1000, 16)
        with self.assertRaisesRegex(ValueError, 'extent'):
            unit_entries(text, 'test_entries', 0x1000, 32)

    def proof(self, target):
        return {'begin': BASE + 0x100, 'end': BASE + 0x120,
                'analysis': {'flow_audit': {'instructions': [BASE + 0x100],
                    'untranslated_reachable': [], 'unsupported_delay_slots': [], 'indirect_transfers': [BASE + 0x108],
                    'external_edges': [{'pc': BASE + 0x100, 'word': 0x0C000800, 'target': target, 'op': 'Jal'}]}}}

    def check(self, target, entries=()):
        return classify_edges([self.proof(target)], set(entries), BASE + 0x40, BASE + 0x200, BASE + 0x300)

    def test_real_text_entries_and_external_images_are_separate(self):
        self.assertEqual(self.check(BASE + 0x80)['missing_original_targets'], [BASE + 0x80])
        self.assertTrue(self.check(BASE + 0x80, [BASE + 0x80])['original_text_complete'])
        result = self.check(0x2000)
        self.assertEqual(result['external_image_targets'], [0x2000])
        self.assertEqual(len(result['unresolved_indirect_transfers']), 1)

    def test_data_markers_protected_code_and_bad_addresses_never_become_seeds(self):
        for target in [BASE + 0x200, BASE + 0x3C, BASE + 0xEC, BASE + 0x104, 0x4000000, BASE + 0x81]:
            with self.subTest(target=target), self.assertRaises(ValueError): self.check(target)
        with self.assertRaisesRegex(ValueError, 'inline data'):
            classify_edges([self.proof(BASE + 0x80)], set(), BASE + 0x40, BASE + 0x200, BASE + 0x300,
                           [(BASE + 0x70, BASE + 0x90)])

    def test_incomplete_or_unreachable_source_cannot_claim_coverage(self):
        row = self.proof(BASE + 0x80)
        for field in ['untranslated_reachable', 'unsupported_delay_slots']:
            row['analysis']['flow_audit'][field] = [BASE + 0x110]
            with self.assertRaises(ValueError): classify_edges([row], set(), BASE + 0x40, BASE + 0x200, BASE + 0x300)
            row['analysis']['flow_audit'][field] = []
        row['analysis']['flow_audit']['instructions'] = []
        with self.assertRaises(ValueError): classify_edges([row], set(), BASE + 0x40, BASE + 0x200, BASE + 0x300)


if __name__ == '__main__': unittest.main()
