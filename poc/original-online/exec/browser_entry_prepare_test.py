import importlib.util
import json
from pathlib import Path
import struct
import subprocess
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
spec = importlib.util.spec_from_file_location('browser_entry_prepare', HERE / 'browser_entry_prepare.py')
browser = importlib.util.module_from_spec(spec)
spec.loader.exec_module(browser)
P = browser.PREFIX
OLD = {0x80: 0x27BDFFE0, 0x84: 0xFFBF0010}
NEW = {**OLD, 0x2F360: 0x00A0102D, 0x2F364: 0x00C0382D, 0x2F380: 0x27BDFFC0, 0x2F384: 0xFFBF0030}

# Synthetic stand-ins for the private generated tree, image and main executable.
NATIVE = r'''#include "units.hpp"
#include <cassert>
#include <cstdio>
#include <cstring>
#include <stdexcept>
namespace gen {
void %(p)s_unit_0000(ps2::Cpu &, std::uint32_t, std::uint32_t) {}
const std::uint16_t %(p)s_entries_0000[] = {0, 1, 2};
}
namespace original_exec { const ps2::ModuleInfo* browser_overlay_modules(const ps2::ModuleInfo*, std::uint32_t); }
int main(int argc, char **) {
    static const std::uint32_t old_checks[] = {0x80, 0x27BDFFE0, 0x84, 0xFFBF0010};
    static const std::uint32_t changed[] = {0x80, 0x27BDFFE0, 0x84, 0xFFBF0011};
    static const std::uint32_t dnas[] = {0x100, 1};
    static const ps2::UnitInfo units[] = {{0, 16384, nullptr, nullptr}};
    // DNAS was already replaced by its own profile; the browser replacement follows.
    const ps2::ModuleInfo source[] = {{"0117F000_MWO_E775154D", 0x0117F000, 0xA1000, dnas, 1, units, 1},
        {"%(n)s", 0x0117F000, 0x94A80, argc > 1 ? changed : old_checks, 2, units, 1},
        {"main", 0, 0x1000, nullptr, 0, units, 1}};
    try {
        const ps2::ModuleInfo *result = original_exec::browser_overlay_modules(source, 3);
        assert(result[0].checks == dnas && result[0].units == units && result[2].units == units);
        assert(!std::strcmp(result[1].name, "%(n)s") && result[1].check_count == 6 && result[1].units != units);
        assert(result[1].checks[4] == 0x2F360 && result[1].units[0].function == gen::%(p)s_unit_0000);
        assert(source[1].checks == old_checks);
        std::puts("replaced");
    } catch (const std::runtime_error &) { std::puts("rejected"); }
}
'''


def table(checks):
    words = ', '.join(f'0x{k:08X}u, 0x{v:08X}u' for k, v in sorted(checks.items()))
    return (f'const ps2::UnitInfo {P}_units[] = {{\n    {{0x00000000u, 16384u, &{P}_unit_0000, {P}_entries_0000}},\n}};\n'
            f'const std::uint32_t {P}_checks[] = {{{words}}};\n'
            f'    {{"{browser.NAME}", 0x0117F000u, 0x00094A80u, {P}_checks, {len(checks)}u, {P}_units, 1u}},\n')


def elf(words):
    data = bytearray(0x4100)
    data[:4] = b'\x7fELF'
    struct.pack_into('<I', data, 0x1C, 0x34)
    struct.pack_into('<HH', data, 0x2A, 32, 1)
    struct.pack_into('<8I', data, 0x34, 1, 0x100, 0x00327000, 0x00327000, 0x4000, 0x4000, 5, 0x10)
    for address, word in words.items(): struct.pack_into('<I', data, 0x100 + address - 0x00327000, word)
    return bytes(data)


class BrowserEntryPrepareTest(unittest.TestCase):
    def fixture(self, root, regenerated_checks=NEW, calls=None, entries=('2f360', '2f380'), cases=(0x011AE360, 0x011AE380)):
        base, regen = root / 'baseline', root / 'regenerated'
        base.mkdir(); regen.mkdir()
        (base / 'table.cpp').write_text(table(OLD)); (base / 'units.hpp').write_text('// units\n')
        (regen / 'table.cpp').write_text(table(regenerated_checks))
        (regen / f'{P}_unit_0000.cpp').write_text(''.join(f'    case {i + 1}u: goto L_{t:08X};\n' for i, t in enumerate(cases)))
        image = bytearray(0x94A80)
        for offset, word in NEW.items(): struct.pack_into('<I', image, offset, word)
        (root / 'browser.bin').write_bytes(image)
        calls = calls or {site: 0x0C000000 | (target >> 2 & 0x03FFFFFF) for target, site in browser.TARGETS.items()}
        (root / 'core.elf').write_bytes(elf(calls))
        (root / 'entries.txt').write_text('OTHER:80\n' + ''.join(f'{browser.NAME}:{e}\n' for e in entries))
        expected = {'artifact': browser.sha(root / 'browser.bin'), 'table': browser.sha(base / 'table.cpp'), 'header': browser.sha(base / 'units.hpp')}
        return [base, regen, root / 'browser.bin', root / 'core.elf', root / 'entries.txt', root / 'out'], expected

    def test_export_and_chained_registry_replacement(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); args, expected = self.fixture(root)
            manifest = browser.prepare(*args, expected=expected)
            self.assertEqual(manifest['added_check_offsets'], [0x2F360, 0x2F364, 0x2F380, 0x2F384])
            self.assertEqual(manifest['compiled_sources'], ['browser_profile.cpp', f'{P}_unit_0000.cpp'])
            out = root / 'out'
            self.assertEqual(json.loads((out / 'manifest.json').read_text())['files_sha256'],
                             {p.name: browser.sha(p) for p in out.iterdir() if p.name != 'manifest.json'})
            (root / 'units.hpp').write_text('#pragma once\n#include "ps2/generated.hpp"\nnamespace gen {\n'
                f'void {P}_unit_0000(ps2::Cpu &c, std::uint32_t entry, std::uint32_t depth);\nextern const std::uint16_t {P}_entries_0000[];\n}}\n')
            (root / 'main.cpp').write_text(NATIVE % {'p': P, 'n': browser.NAME})
            subprocess.run(['c++', '-std=c++20', '-Wall', '-Wextra', '-I' + str(root), '-I' + str(HERE),
                            '-I' + str(ROOT / 'vendor/ps2-web-recomp/runtime/include'), str(out / 'browser_profile.cpp'),
                            str(root / 'main.cpp'), '-o', str(root / 'probe')], check=True, capture_output=True)
            self.assertEqual(subprocess.run([str(root / 'probe')], capture_output=True, text=True, check=True).stdout, 'replaced\n')
            # One changed retained original guard rejects the replacement.
            self.assertEqual(subprocess.run([str(root / 'probe'), 'x'], capture_output=True, text=True, check=True).stdout, 'rejected\n')

    def test_fail_closed_cases(self):
        cases = [
            ({'calls': {0x0032A670: 0x0C000000, 0x00327FB0: 0x0C46B8E0}}, 'call site changed'),
            ({'entries': ('2f360',)}, 'missing from regeneration entries'),
            ({'regenerated_checks': {0x80: 0x27BDFFE0, 0x2F360: 0x00A0102D}}, 'removed or changed'),
            ({'regenerated_checks': {**NEW, 0x2F364: 0x11111111}}, 'differs from original'),
            ({'regenerated_checks': {**NEW, 0x40000: 0}}, 'not confined'),
            ({'cases': (0x011AE360,)}, 'Missing translated entry'),
        ]
        for options, message in cases:
            with self.subTest(message=message), tempfile.TemporaryDirectory() as temp:
                root = Path(temp); args, expected = self.fixture(root, **options)
                with self.assertRaisesRegex(ValueError, message): browser.prepare(*args, expected=expected)
                self.assertFalse((root / 'out').exists())
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); args, expected = self.fixture(root)
            with self.assertRaisesRegex(ValueError, 'artifact fingerprint'): browser.prepare(*args)

    def test_build_option_requires_game_and_overlay_profile(self):
        build_spec = importlib.util.spec_from_file_location('browser_build', HERE / 'build_profile.py')
        build = importlib.util.module_from_spec(build_spec); build_spec.loader.exec_module(build)
        with tempfile.TemporaryDirectory() as temp:
            for image, overlay in [('utility', Path(temp)), ('game', None)]:
                with self.subTest(image=image), self.assertRaisesRegex(ValueError, 'requires the overlay profile'):
                    build.plan(image, Path(temp), Path(temp), Path(temp) / 'work', Path(temp), overlay_path=overlay, browser_path=Path(temp))
            self.assertFalse((Path(temp) / 'work').exists())


if __name__ == '__main__': unittest.main()
