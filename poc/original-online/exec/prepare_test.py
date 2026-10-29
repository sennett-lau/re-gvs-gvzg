import importlib.util
import pathlib
import unittest

HERE = pathlib.Path(__file__).resolve().parent
ROOT = HERE.parents[2]
spec = importlib.util.spec_from_file_location('exec_prepare', HERE / 'prepare.py')
prepare = importlib.util.module_from_spec(spec)
spec.loader.exec_module(prepare)


class PreparationTest(unittest.TestCase):
    def test_both_actual_hosts_preserve_syscall7_and_outer_halt(self):
        kernel = (ROOT / 'vendor/ps2-web-recomp/runtime/src/kernel.cpp').read_text()
        for filename in ['vendor/ps2-web-recomp/host/web.cpp', 'apps/game/src/web.cpp']:
            host = (ROOT / filename).read_text()
            actual_kernel, actual_host = prepare.prepare(kernel, host)
            self.assertIn('case 0x07: halt("program asked to run another executable"); break;', actual_kernel)
            self.assertIn('catch (original_exec::Transition& transition)', actual_host)
            self.assertEqual(actual_host.count('ps2::run();'), 1)
            self.assertEqual(actual_host.count('Module.onHalt('), host.count('Module.onHalt('))
            self.assertNotIn('case 0x06: case 0x07:', actual_kernel)

    def test_drift_and_double_application_fail_closed(self):
        kernel = (ROOT / 'vendor/ps2-web-recomp/runtime/src/kernel.cpp').read_text()
        host = (ROOT / 'vendor/ps2-web-recomp/host/web.cpp').read_text()
        for k, h in [(kernel + kernel, host), (kernel, host + host), (kernel, host.replace('ps2::run();', 'ps2::run(1);'))]:
            with self.assertRaises(ValueError): prepare.prepare(k, h)
        with self.assertRaises(ValueError): prepare.prepare(*prepare.prepare(kernel, host))


if __name__ == '__main__': unittest.main()
