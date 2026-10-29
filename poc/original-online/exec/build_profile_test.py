import hashlib
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
spec = importlib.util.spec_from_file_location('exec_build_profile', HERE / 'build_profile.py')
build = importlib.util.module_from_spec(spec)
spec.loader.exec_module(build)


class ProfileTest(unittest.TestCase):
    def test_source_paths_distinguish_ee_and_iop_kernel_objects(self):
        with tempfile.TemporaryDirectory() as temp:
            base = Path(temp)
            names = ['upstream/runtime/src/kernel.cpp', 'upstream/runtime/src/iop/kernel.cpp',
                     'upstream/host/web.cpp', 'generated/table.cpp']
            info = {'sources_sha256': {}, 'commands': []}
            (base / 'objects').mkdir()
            for i, name in enumerate(names):
                source = base / name; source.parent.mkdir(parents=True, exist_ok=True); source.write_text(name)
                info['sources_sha256'][name] = hashlib.sha256(name.encode()).hexdigest()
                obj = base / 'objects' / (str(i) + '-' + source.stem + '.o'); obj.write_bytes(b'synthetic-test-object')
                info['commands'].append(['em++', '-c', '/recorded/build/' + name, '-o', '/recorded/build/objects/' + obj.name])
            objects = build.utility_objects(base, info)
            self.assertEqual([path.name for path in objects], ['1-kernel.o', '3-table.o'])
            (base / names[1]).write_text('changed')
            with self.assertRaisesRegex(ValueError, 'source changed'): build.utility_objects(base, info)

    def test_unknown_compile_source_or_missing_mapping_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            info = {'sources_sha256': {'generated/unit.cpp': '0' * 64},
                    'commands': [['em++', '-c', '/other.cpp', '-o', '/other.o']]}
            with self.assertRaisesRegex(ValueError, 'Ambiguous'): build.utility_objects(Path(temp), info)
            info['commands'] = []
            with self.assertRaisesRegex(ValueError, 'coverage'): build.utility_objects(Path(temp), info)


if __name__ == '__main__': unittest.main()
