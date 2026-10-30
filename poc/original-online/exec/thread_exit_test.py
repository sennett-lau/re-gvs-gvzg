import importlib.util
import json
from pathlib import Path
import subprocess
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
RUNTIME = ROOT / 'vendor/ps2-web-recomp/runtime'


def load(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    result = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(result)
    return result


exits = load('thread_exit_prepare', HERE / 'thread_exit_prepare.py')
waits = load('thread_exit_wait_prepare', HERE / 'wait_snapshot_prepare.py')
prepare = load('thread_exit_exec_prepare', HERE / 'prepare.py')
build = load('thread_exit_build', HERE / 'build_profile.py')


class ThreadReturnExitTest(unittest.TestCase):
    def run_kernel(self, kernel_text, mode):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'kernel.cpp').write_text(kernel_text)
            binary = root / 'probe'
            subprocess.run(['c++', '-std=c++20', '-Wall', '-Wextra', '-Wno-unused-parameter', '-I' + str(RUNTIME / 'include'),
                            '-I' + str(RUNTIME / 'src'), '-I' + str(RUNTIME / 'src/iop'), str(root / 'kernel.cpp'),
                            str(HERE / 'thread_exit_test.cpp'), '-o', str(binary)], check=True, capture_output=True, text=True)
            result = subprocess.run([str(binary), mode], check=True, capture_output=True, text=True, timeout=30)
        lines = [json.loads(line) for line in result.stdout.splitlines()]
        records = [json.loads(line.removeprefix('[original-exec-thread-return] ')) for line in result.stderr.splitlines()
                   if line.startswith('[original-exec-thread-return] ')]
        return lines[0], lines[1], records

    def unchanged(self, mode):
        return self.run_kernel((RUNTIME / 'src/kernel.cpp').read_text(), mode)

    def fixed(self, mode):
        return self.run_kernel(exits.prepare_kernel((RUNTIME / 'src/kernel.cpp').read_text()), mode)

    def test_unchanged_kernel_starves_equal_priority_supervisor(self):
        outcome, final, records = self.unchanged('equal')
        self.assertTrue(outcome['worker_returned'])
        self.assertFalse(outcome['supervisor_acquired'])
        self.assertFalse(outcome['main_resumed'])
        self.assertEqual(outcome['worker_status'], 1)  # still kRun at kIdle
        self.assertEqual(outcome['current'], outcome['worker'])
        self.assertGreater(outcome['idles'], 390)
        self.assertEqual((outcome['halt'], records), ('', []))

    def test_returned_thread_takes_exit_thread_path(self):
        outcome, final, records = self.fixed('equal')
        self.assertTrue(outcome['worker_returned'] and outcome['supervisor_acquired'] and outcome['main_resumed'])
        self.assertEqual(outcome['seen_worker_status'], 16)  # kDormant before the supervisor's cleanup
        self.assertEqual((outcome['terminate_result'], outcome['delete_result']), (0, 0))
        self.assertEqual(outcome['worker_status'], -1)  # deleted by the supervisor
        self.assertEqual(outcome['halt'], '')
        # The supervisor ends with an explicit ExitThread, so only the worker is retired here.
        self.assertEqual([(r['record'], r['thread'], r['entry'], r['priority']) for r in records],
                         [(1, outcome['worker'], 0x00200000, 0x3F)])
        # Sleeping main thread and exited supervisor leave the ordinary idle state.
        self.assertEqual((final['final_current'], final['final_pc']), (0, 0x00001010))

    def test_preempted_worker_is_retired_after_it_resumes_and_returns(self):
        before, before_final, _ = self.unchanged('higher')
        self.assertTrue(before['supervisor_acquired'] and before['main_resumed'] and before['worker_returned'])
        self.assertEqual(before['seen_worker_status'], 2)  # preempted, kReady
        self.assertEqual(before['worker_status'], 1)       # unchanged: zombie stays running at kIdle
        self.assertEqual(before_final['final_current'], before['worker'])
        outcome, final, records = self.fixed('higher')
        self.assertTrue(outcome['supervisor_acquired'] and outcome['main_resumed'] and outcome['worker_returned'])
        self.assertEqual(outcome['seen_worker_status'], 2)
        self.assertEqual(outcome['worker_status'], 16)
        self.assertEqual([r['thread'] for r in records], [outcome['worker']])
        self.assertEqual((final['final_current'], final['final_pc']), (0, 0x00001010))

    def test_every_returning_thread_retires_and_records_stay_bounded(self):
        before, _, _ = self.unchanged('many')
        self.assertEqual((before['returners'], before['dormant']), (1, 0))
        outcome, final, records = self.fixed('many')
        self.assertEqual((outcome['returners'], outcome['dormant']), (70, 70))
        self.assertEqual(len(records), 64)
        self.assertEqual([r['record'] for r in records], list(range(1, 65)))
        self.assertEqual((final['final_current'], final['final_pc']), (0, 0x00001010))

    def test_composition_order_anchors_and_game_only_option(self):
        kernel, _ = prepare.prepare((RUNTIME / 'src/kernel.cpp').read_text(), (ROOT / 'apps/game/src/web.cpp').read_text())
        fixed = exits.prepare_kernel(kernel)
        both = waits.prepare_kernel(fixed)
        service = both[both.index('void service(Cpu &c) {'):]
        self.assertLess(service.index('original_exec_wait_poll();'), service.index('original_exec_thread_return(*t);'))
        self.assertLess(service.index('exit_current(c, false);'), service.index('if (g_reschedule || c.pc == kIdle) reschedule(c);'))
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'kernel.cpp').write_text(both)
            subprocess.run(['c++', '-std=c++20', '-fsyntax-only', '-Wall', '-Wextra', '-DORIGINAL_EXEC_IMAGE="game"',
                            *['-I' + str(p) for p in [HERE, RUNTIME / 'include', RUNTIME / 'src', RUNTIME / 'src/iop']],
                            str(root / 'kernel.cpp')], check=True, capture_output=True)
        with self.assertRaisesRegex(ValueError, 'already present'): exits.prepare_kernel(fixed)
        with self.assertRaisesRegex(ValueError, 'anchor'):
            exits.prepare_kernel(kernel.replace('    case 0x23: exit_current(c, false); break;\n', '    case 0x23: break;\n'))
        with self.assertRaisesRegex(ValueError, 'anchor'):
            exits.prepare_kernel(kernel.replace('static_cast<std::int32_t>(kIdle);', 'static_cast<std::int32_t>(0x00001018u);'))
        manifest = exits.manifest(kernel, fixed)
        self.assertEqual(manifest['ee_kernel']['output_sha256'], exits.sha(fixed))
        with tempfile.TemporaryDirectory() as temp:
            with self.assertRaisesRegex(ValueError, 'game-only'):
                build.plan('utility', Path(temp), Path(temp), Path(temp) / 'work', Path(temp), thread_return_exit=True)


if __name__ == '__main__': unittest.main()
