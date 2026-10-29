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
    def test_copied_adapter_include_is_checked_after_build(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); copied = root / 'runtime/src/iop/adapter.inc'
            copied.parent.mkdir(parents=True); copied.write_text('prepared adapter')
            inputs = build.prepared_headers(root)
            self.assertEqual(inputs, {str(copied): build.digest(copied)})
            build.verify_hashes(inputs)
            copied.write_text('changed after preparation')
            with self.assertRaisesRegex(ValueError, 'changed during build'): build.verify_hashes(inputs)

    def test_disc_model_is_opt_in_and_game_only(self):
        self.assertEqual(build.compose_disc_model('game', None, None), (None, {}))
        with self.assertRaisesRegex(ValueError, 'game-only'):
            build.compose_disc_model('utility', None, Path('/nonexistent/prepare.py'))

    def test_disc_model_fingerprints_and_scope(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); script = root / 'prepare.py'
            for name in ['model.hpp', 'model.cpp', 'adapter.inc']: (root / name).write_text('synthetic helper')
            expected = {'profile': 'original-online-disc-model-pcsx2-command75-v1',
                        'replaced_sources': ['runtime/src/iop/cdvd.cpp', 'runtime/src/iop/kernel.cpp', 'runtime/src/disc.cpp'],
                        'compiled_sources': ['runtime/src/iop/model.cpp']}
            script.write_text('def prepare(source):\n return '+repr(expected)+'\n')
            result, inputs = build.compose_disc_model('game', root, script)
            self.assertEqual(result, expected)
            self.assertEqual(set(inputs), {str(root / name) for name in ['prepare.py', 'model.hpp', 'model.cpp', 'adapter.inc']})
            for bad in [dict(expected, profile='unknown'), dict(expected, replaced_sources=['runtime/src/system.cpp'])]:
                script.write_text('def prepare(source):\n return '+repr(bad)+'\n')
                with self.assertRaisesRegex(ValueError, 'profile|source scope'): build.compose_disc_model('game', root, script)
            script.write_text("from pathlib import Path\ndef prepare(source):\n Path(__file__).with_name('model.hpp').write_text('changed')\n return "+repr(expected)+'\n')
            with self.assertRaisesRegex(ValueError, 'changed during composition'): build.compose_disc_model('game', root, script)

    def test_cdvd_identity_is_opt_in_and_rejects_utility_before_mutation(self):
        self.assertEqual(build.compose_cdvd_identity('game', None, None), (None, {}))
        with self.assertRaisesRegex(ValueError, 'game-only'):
            build.compose_cdvd_identity('utility', None, Path('/nonexistent/cdvd_identity.py'))

    def test_cdvd_identity_scope_and_input_fingerprints(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); script = root / 'cdvd_identity.py'; header = root / 'cdvd_identity.hpp'
            header.write_text('synthetic helper')
            for version in [1, 2]:
                script = root / f'cdvd_identity_v{version}.py'
                profile = f'original-online-cdvd-identity-v{version}'
                script.write_text("def prepare(source):\n return {'profile':"+repr(profile)+",'replaced_sources':['runtime/src/iop/cdvd.cpp'],'compiled_sources':[]}\n")
                manifest, inputs = build.compose_cdvd_identity('game', root, script)
                self.assertEqual(manifest['profile'], profile)
                self.assertEqual(set(inputs), {str(script), str(header)})
                self.assertEqual(inputs[str(header)], build.digest(header))
            for bad in ["{'profile':'unknown'}", "{'profile':'original-online-cdvd-identity-v1','replaced_sources':['runtime/src/kernel.cpp'],'compiled_sources':[]}"]:
                script.write_text('def prepare(source):\n return '+bad+'\n')
                with self.assertRaisesRegex(ValueError, 'profile|source scope'):
                    build.compose_cdvd_identity('game', root, script)
            script.write_text("from pathlib import Path\ndef prepare(source):\n Path(__file__).with_name('cdvd_identity.hpp').write_text('changed during preparation')\n return {'profile':'original-online-cdvd-identity-v1','replaced_sources':['runtime/src/iop/cdvd.cpp'],'compiled_sources':[]}\n")
            with self.assertRaisesRegex(ValueError, 'changed during composition'):
                build.compose_cdvd_identity('game', root, script)

    def test_analysis_only_or_unaudited_variants_cannot_be_built(self):
        build.require_overlay_coverage({'variants': False})
        for coverage in [{}, {'original_text_complete': False, 'missing_original_targets': [0x1180000]},
                         {'original_text_complete': True, 'missing_original_targets': [0x1180000]}]:
            with self.assertRaisesRegex(ValueError, 'direct-entry coverage'):
                build.require_overlay_coverage({'variants': True, 'direct_entry_coverage': coverage})
        complete = {'variants': True, 'direct_entry_coverage': {
            'original_text_complete': True, 'missing_original_targets': []}}
        with self.assertRaisesRegex(ValueError, 'inline-data exclusion'): build.require_overlay_coverage(complete)
        build.require_overlay_coverage(dict(complete, transform_sites=1, inline_data_spans=[[0x1000, 0x1010]]))

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
