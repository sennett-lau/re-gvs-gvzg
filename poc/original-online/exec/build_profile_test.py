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
    def test_missing_metadata_never_labels_an_unknown_archive_pair_as_a_game(self):
        with tempfile.TemporaryDirectory() as temp:
            base = Path(temp); (base / 'base').mkdir()
            for filename in build.RETAINED_GAME_ARCHIVES: (base / filename).write_bytes(b'unknown archive')
            with self.assertRaisesRegex(ValueError, 'Unrecognized'): build.base_metadata('game', base)
            with self.assertRaisesRegex(ValueError, 'metadata is required'): build.base_metadata('utility', base)

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
            objects = build.utility_objects(base, info, build.REPLACED | {'upstream/runtime/src/iop/kernel.cpp'})
            self.assertEqual([path.name for path in objects], ['3-table.o'])
            (base / names[1]).write_text('changed')
            with self.assertRaisesRegex(ValueError, 'source changed'): build.utility_objects(base, info)

    def test_unknown_compile_source_or_missing_mapping_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            info = {'sources_sha256': {'generated/unit.cpp': '0' * 64},
                    'commands': [['em++', '-c', '/other.cpp', '-o', '/other.o']]}
            with self.assertRaisesRegex(ValueError, 'Ambiguous'): build.utility_objects(Path(temp), info)
            info['commands'] = []
            with self.assertRaisesRegex(ValueError, 'coverage'): build.utility_objects(Path(temp), info)

    def test_overlapping_device_and_network_changes_compile_once(self):
        with tempfile.TemporaryDirectory() as temp:
            tree = Path(temp)
            for name in ['kernel.cpp', 'libs.cpp', 'dev9.cpp', 'cpu.cpp']:
                path = tree / 'runtime/src/iop' / name
                path.parent.mkdir(parents=True, exist_ok=True); path.write_text('synthetic source')
            device = {'replaced_sources': ['runtime/src/iop/kernel.cpp', 'runtime/src/iop/libs.cpp'],
                      'compiled_sources': ['runtime/src/iop/dev9.cpp']}
            network = {'replaces_sources': ['runtime/src/iop/kernel.cpp'],
                       'compiled_sources': ['runtime/src/iop/cpu.cpp', 'runtime/src/iop/kernel.cpp']}
            self.assertEqual(build.manifest_sources(tree, device, network),
                ['runtime/src/iop/kernel.cpp', 'runtime/src/iop/libs.cpp', 'runtime/src/iop/dev9.cpp', 'runtime/src/iop/cpu.cpp'])
            for invalid in ['../kernel.cpp', '/kernel.cpp', 'C:/kernel.cpp', 'runtime\\kernel.cpp', 'missing.cpp']:
                with self.assertRaises(ValueError): build.manifest_sources(tree, {'compiled_sources': [invalid]})


if __name__ == '__main__': unittest.main()
