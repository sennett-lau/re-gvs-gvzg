import importlib.util
from pathlib import Path
import re
import struct
import subprocess
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
spec = importlib.util.spec_from_file_location('core_entry_prepare', HERE / 'core_entry_prepare.py')
core = importlib.util.module_from_spec(spec)
spec.loader.exec_module(core)

THUNKS = '''L_003271C0:
    c.budget -= 2;
    {  goto L_003272D0; }
L_003271D0:
    c.budget -= 2;
    {  goto L_003273B0; }
'''
ZFREE = '''L_003273B0:
    c.budget -= 1;
L_003273C8:
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003273C8u | kUnwind; return; } goto L_003273C8; } }
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
'''


def unit(cases, table, thunks='', zfree=''):
    rows = ',\n'.join('    ' + ', '.join(str(v) for v in table[i:i + 32]) for i in range(0, 4096, 32))
    return ('#include "units.hpp"\n\nnamespace gen {\n\nusing namespace ps2;\n\nconst std::uint16_t entries_0089[4096] = {\n' + rows + ',\n};\n\n'
            'void unit_0089(Cpu &c, std::uint32_t entry, std::uint32_t depth) {\n    switch (entry) {\n' +
            ''.join(f'    case {n}u: goto L_{a:08X};\n' for n, a in cases) +
            '    default: bad_entry(c, 0x00324000u); return;\n    }\nL_00324000:\n    { c.pc = c.r[31].w[0]; return; }\n' +
            thunks + 'L_003271E0:\n    { c.pc = c.r[31].w[0]; return; }\nL_003272D0:\n    { c.pc = c.r[31].w[0]; return; }\n' +
            zfree + 'L_00327410:\n    { c.pc = c.r[31].w[0]; return; }\n}\n\n}\n')


def table(entries):
    values = [0] * 4096
    for address, number in entries.items(): values[(address - 0x00324000) // 4] = number
    return values


def elf(words):
    data = bytearray(0x8100)
    data[:4] = b'\x7fELF'
    struct.pack_into('<I', data, 0x1C, 0x34)
    struct.pack_into('<HH', data, 0x2A, 32, 1)
    struct.pack_into('<8I', data, 0x34, 1, 0x100, 0x00324000, 0x00324000, 0x8000, 0x8000, 5, 0x10)
    for address, word in words.items(): struct.pack_into('<I', data, 0x100 + address - 0x00324000, word)
    return bytes(data)


WORDS = {0x003271C0: 0x080C9CB4, 0x003271D0: 0x080C9CEC, 0x003273A8: 0x03E00008}
OLD_CASES = [(1, 0x00324000), (2, 0x003271E0), (3, 0x003272D0), (4, 0x00327410)]


class CoreEntryPrepareTest(unittest.TestCase):
    def fixture(self, root, retained=None, regenerated=None, words=WORDS):
        retained = retained or unit(OLD_CASES, table({a: n for n, a in OLD_CASES}))
        new_cases = [(1, 0x00324000), (2, 0x003271C0), (3, 0x003271D0), (4, 0x003271E0), (5, 0x003272D0), (6, 0x003273C8), (7, 0x00327410)]
        regenerated = regenerated or unit(new_cases, table({a: n for n, a in new_cases}), THUNKS, ZFREE)
        (root / 'retained.cpp').write_text(retained); (root / 'regenerated.cpp').write_text(regenerated)
        (root / 'core.elf').write_bytes(elf(words))
        expected = {'retained': core.sha(retained.encode()), 'core': core.sha((root / 'core.elf').read_bytes())}
        return [root / 'retained.cpp', root / 'regenerated.cpp', root / 'core.elf', root / 'out'], expected

    def test_appends_entries_without_renumbering(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); args, expected = self.fixture(root)
            manifest = core.prepare(*args, expected=expected)
            self.assertEqual({k: v['case'] for k, v in manifest['entries'].items()}, {'0x003271C0': 5, '0x003271D0': 6, '0x003273C8': 7})
            text = (root / 'out/unit_0089.cpp').read_text()
            for number, address in OLD_CASES: self.assertIn(f'    case {number}u: goto L_{address:08X};\n', text)
            values = core.entries(text)[1]
            self.assertEqual([values[(a - 0x00324000) // 4] for a in [0x003271C0, 0x003271D0, 0x003273C8, 0x003272D0]], [5, 6, 7, 3])
            self.assertLess(text.index('L_003271C0:'), text.index('L_003271E0:'))
            self.assertLess(text.index('L_003273B0:'), text.index('L_00327410:'))
            self.assertEqual(manifest['files_sha256']['unit_0089.cpp'], core.sha((root / 'out/unit_0089.cpp').read_bytes()))
            # The amended source still compiles as a generated unit.
            (root / 'units.hpp').write_text('#pragma once\n#include "ps2/generated.hpp"\n')
            subprocess.run(['c++', '-std=c++20', '-fsyntax-only', '-Wno-unused-label', '-Wno-unused-parameter', '-I' + str(root),
                            '-I' + str(ROOT / 'vendor/ps2-web-recomp/runtime/include'), str(root / 'out/unit_0089.cpp')], check=True, capture_output=True)

    def test_fail_closed(self):
        new_cases = [(1, 0x00324000), (2, 0x003271C0), (3, 0x003271D0), (4, 0x003271E0), (5, 0x003272D0), (6, 0x003273C8), (7, 0x00327410)]
        regen = lambda thunks=THUNKS, zfree=ZFREE, cases=new_cases: unit(cases, table({a: n for n, a in cases}), thunks, zfree)
        cases = [
            ({'words': {**WORDS, 0x003271C0: 0x080C9CB5}}, 'thunk words changed'),
            ({'words': {**WORDS, 0x003273A8: 0}}, 'boundary changed'),
            ({'regenerated': regen(thunks=THUNKS.replace('goto L_003273B0;', 'unit_0007(c, 1u, depth);'))}, 'calls another unit'),
            ({'regenerated': regen(thunks=THUNKS + 'L_00327300:\n')}, 'outside the reviewed ranges'),
            ({'regenerated': regen(cases=new_cases + [(8, 0x003273B0)])}, 'differ from thunks'),
            ({'retained': unit(OLD_CASES, table({**{a: n for n, a in OLD_CASES}, 0x003271C0: 9}))}, 'slot already used'),
        ]
        for options, message in cases:
            with self.subTest(message=message), tempfile.TemporaryDirectory() as temp:
                root = Path(temp); args, expected = self.fixture(root, **options)
                with self.assertRaisesRegex(ValueError, message): core.prepare(*args, expected=expected)
                self.assertFalse((root / 'out').exists())
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); args, _ = self.fixture(root)
            with self.assertRaisesRegex(ValueError, 'Retained unit fingerprint'): core.prepare(*args)


if __name__ == '__main__': unittest.main()
