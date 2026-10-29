import unittest
from overlay_prepare import guard_translation


class GuardTranslationTest(unittest.TestCase):
    def fixture(self):
        return '''void m_0117F000_MWO_E775154D_unit_0001(Cpu& c, unsigned entry, unsigned depth) {
L_01181C40:
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x01181C50u); set32(c.r[6], ld32(c.r[3].w[0] + 4u)); if (depth < kMaxDepth) helper(c, 1u, depth + 1u); else { c.pc = 0x011AAA68u; return; } if (c.pc != 0x01181C50u) [[unlikely]] return; }
L_01181C50:
    goto L_01181C84;
L_01181C84:
    c.budget -= 8;
}
'''

    def checks(self):
        return {address - 0x0117F000: address ^ 0x12345678
                for address in [0x01181C40, 0x01181C44, 0x01181C50, 0x01181C54, 0x01181C84, 0x01181C88]}

    def test_inline_destination_and_delay_slot_observation(self):
        text, blocks, calls = guard_translation(self.fixture(), self.checks())
        self.assertEqual((blocks, calls), (3, 1))
        self.assertIn('L_01181C84:\n    if (!original_exec::guard_block(c, 0x01181C84u, exec_guard_01181C84)) return;', text)
        self.assertLess(text.index('set32(c.r[6]'), text.index('observe_before(c, 0x01181C48u)'))
        self.assertLess(text.index('if (c.pc != 0x01181C50u)'), text.index('observe_words(c, exec_observation, "after")'))
        first = text.split('exec_guard_01181C40[] = {', 1)[1].split('};', 1)[0]
        self.assertIn('0x01181C44u', first)
        self.assertNotIn('0x01181C50u', first)

    def test_missing_label_guard_fails(self):
        checks = self.checks(); del checks[0x01181C84 - 0x0117F000]
        with self.assertRaisesRegex(ValueError, 'coverage'):
            guard_translation(self.fixture(), checks)

    def test_changed_call_shape_fails(self):
        with self.assertRaisesRegex(ValueError, 'source changed'):
            guard_translation(self.fixture().replace(' [[unlikely]] return; }', ' return; }'), self.checks())

    def test_duplicate_labels_fail(self):
        with self.assertRaisesRegex(ValueError, 'duplicated'):
            guard_translation(self.fixture() + 'L_01181C84:\n', self.checks())


if __name__ == '__main__': unittest.main()
