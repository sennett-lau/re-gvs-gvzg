import importlib.util
import json
from pathlib import Path
import subprocess
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
spec = importlib.util.spec_from_file_location('observer_budget_build', HERE / 'build_profile.py')
build = importlib.util.module_from_spec(spec)
spec.loader.exec_module(build)
ORIGINAL = HERE.parent / 'observer.hpp'


class ObserverBudgetTest(unittest.TestCase):
    def fixture(self, root):
        header = root / 'observer.hpp'
        header.write_bytes(ORIGINAL.read_bytes())
        return header, {'observer_sha256': build.digest(header)}

    def test_default_has_no_mutation_and_invalid_options_fail(self):
        self.assertIsNone(build.observer_budget('game', None, None, None))
        with self.assertRaisesRegex(ValueError, 'game-only'):
            build.observer_budget('utility', None, None, 131072)
        for value in [True, '131072', 16383, 131073, -1]:
            with self.assertRaisesRegex(ValueError, 'integer'):
                build.observer_budget('game', None, None, value)

    def test_exact_copy_and_output_fingerprint_are_enforced(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); header, manifest = self.fixture(root)
            original = header.read_bytes()
            setting = build.observer_budget('game', root, manifest, 131072)
            self.assertEqual(header.read_bytes(), original.replace(b'limit = 16384;', b'limit = 131072;'))
            self.assertEqual(setting['input_sha256'], build.digest(ORIGINAL))
            self.assertEqual(manifest['observer_sha256'], build.digest(header))
            self.assertEqual(json.loads((root / 'observer-manifest.json').read_text()), manifest)
            checks = {str(header): manifest['observer_sha256']}
            header.write_bytes(header.read_bytes() + b'\n// changed\n')
            with self.assertRaisesRegex(ValueError, 'changed during build'): build.verify_hashes(checks)
            with self.assertRaisesRegex(ValueError, 'fingerprint'): build.observer_budget('game', root, manifest, 65536)
            header, manifest = self.fixture(root)
            header.write_bytes(header.read_bytes().replace(b'limit = 16384;', b'limit = 8;'))
            manifest['observer_sha256'] = build.digest(header)
            with self.assertRaisesRegex(ValueError, 'anchor'): build.observer_budget('game', root, manifest, 131072)

    def test_real_observer_retains_boot_cap_and_post_menu_drop_reporting(self):
        # Run actual header code with only memory/clock dependencies substituted.
        for budget in [None, 131072]:
            with self.subTest(budget=budget), tempfile.TemporaryDirectory() as temp:
                root = Path(temp); header, manifest = self.fixture(root)
                build.observer_budget('game', root, manifest, budget)
                for name, text in {
                    'ps2/memory.hpp': '#include <cstdint>\nnamespace ps2 {inline constexpr unsigned kRamSize=0x2000000; inline std::uint32_t ld32(std::uint32_t){return 0;}}\n',
                    'ps2/system.hpp': 'namespace ps2 {inline unsigned long long now(){return 7;}}\n',
                    'iop/kernel.hpp': 'namespace ps2::iop::kernel {inline bool g_trace_modules=false;}\n',
                }.items():
                    path = root / name; path.parent.mkdir(exist_ok=True); path.write_text(text)
                source = root / 'probe.cpp'
                source.write_text('''#include "observer.hpp"
#include <cassert>
int main() {
 using namespace original_online;
 boot_emitted=127; log(true,"boot"," "); log(true,"lost-boot"," ");
 assert(boot_emitted==128 && boot_dropped==1);
 active=true; emitted=limit-1; log(false,"last"," "); log(false,"lost"," ");
 assert(emitted==limit && dropped==1); summary();
}
''')
                subprocess.run(['c++', '-std=c++20', '-Wall', '-Wextra', '-Werror', '-I'+str(root), str(source), '-o', str(root/'probe')], check=True, capture_output=True)
                result = subprocess.run([str(root/'probe')], check=True, capture_output=True, text=True)
                records = [json.loads(line.removeprefix('[original-online] ')) for line in result.stderr.splitlines()]
                self.assertEqual([r['event'] for r in records], ['boot', 'trace_cap', 'last', 'trace_cap', 'counters'])
                self.assertEqual(records[1]['emitted'], 128)
                self.assertEqual(records[3]['emitted'], budget or 16384)
                self.assertEqual(records[-1]['dropped'], 1)
                self.assertEqual(records[-1]['boot_dropped'], 1)


    def test_quiet_observer_is_opt_in_exact_and_game_only(self):
        self.assertIsNone(build.observer_quiet('game', None, None, False))
        with self.assertRaisesRegex(ValueError, 'game-only'): build.observer_quiet('utility', None, None, True)
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); header, manifest = self.fixture(root)
            setting = build.observer_quiet('game', root, manifest, True)
            self.assertEqual(setting['input_sha256'], build.digest(ORIGINAL))
            self.assertEqual(manifest['observer_sha256'], build.digest(header))
            self.assertNotIn(b'g_trace_modules = true', header.read_bytes())
            with self.assertRaisesRegex(ValueError, 'fingerprint'): build.observer_quiet('game', root, manifest | {'observer_sha256': '0'}, True)
            header, manifest = self.fixture(root)
            header.write_bytes(header.read_bytes().replace(b'    if (!active && !allow_boot) return;\n', b''))
            manifest['observer_sha256'] = build.digest(header)
            with self.assertRaisesRegex(ValueError, 'anchor'): build.observer_quiet('game', root, manifest, True)

    def test_real_quiet_observer_counts_sif_records_and_keeps_state_and_boot_records(self):
        for quiet in [False, True]:
            with self.subTest(quiet=quiet), tempfile.TemporaryDirectory() as temp:
                root = Path(temp); header, manifest = self.fixture(root)
                build.observer_budget('game', root, manifest, 131072)
                build.observer_quiet('game', root, manifest, quiet)
                for name, text in {
                    'ps2/memory.hpp': '#include <cstdint>\nnamespace ps2 {inline constexpr unsigned kRamSize=0x2000000; inline std::uint32_t ld32(std::uint32_t){return 0;}}\n',
                    'ps2/system.hpp': 'namespace ps2 {inline unsigned long long now(){return 7;}}\n',
                    'iop/kernel.hpp': 'namespace ps2::iop::kernel {inline bool g_trace_modules=false;}\n',
                }.items():
                    path = root / name; path.parent.mkdir(exist_ok=True); path.write_text(text)
                source = root / 'probe.cpp'
                source.write_text('''#include "observer.hpp"
#include <cassert>
struct Reg { union { unsigned w[4]; int sw[4]; }; };
struct Cpu { Reg r[32]; };
int main() {
 using namespace original_online;
 Cpu c{}; c.r[5].w[0] = 0x01270010u; bind(c);
 enter(c); c.r[5].w[0] = 0x80000400u; bind(c); call(c); call_return(c); bind_return(c);
 connection(c); summary();
 assert(ps2::iop::kernel::g_trace_modules != QUIET);
}
''')
                subprocess.run(['c++', '-std=c++20', '-Wall', '-Wextra', '-Werror', '-DQUIET=' + ('1' if quiet else '0'), '-I'+str(root), str(source), '-o', str(root/'probe')], check=True, capture_output=True)
                result = subprocess.run([str(root/'probe')], check=True, capture_output=True, text=True)
                records = [json.loads(line.removeprefix('[original-online] ')) for line in result.stderr.splitlines()]
                events = [r['event'] for r in records]
                self.assertEqual(events[:2], ['bind', 'menu'])
                self.assertIn('connection', events)
                self.assertEqual(records[1].get('observer_profile'), 'quiet' if quiet else None)
                sif = [e for e in events[2:] if e in {'bind', 'bind_return', 'call', 'call_return', 'rpc_end'}]
                self.assertEqual(sif, [] if quiet else ['bind', 'call', 'call_return', 'bind_return'])
                counters = [r for r in records if r['event'] == 'counters']
                self.assertEqual(counters[-1].get('quiet_suppressed'), 4 if quiet else None)

if __name__ == '__main__': unittest.main()
