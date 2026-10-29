#!/usr/bin/env python3
"""Compose storage + original exec in an isolated incremental module profile."""
import argparse
import datetime
import hashlib
import importlib.util
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
FLAGS = ['-O3', '-std=c++20', '-DPS2_GPU', '-msimd128', '-mtail-call',
         '-fwasm-exceptions', '-sWASM_LEGACY_EXCEPTIONS=0', '-pthread', '--use-port=emdawnwebgpu']
EXPORTS = ['main', 'ps2web_pad', 'ps2web_pad_connected', 'ps2web_resize', 'ps2web_gpu_ms',
           'ps2web_frames', 'ps2web_primitives', 'ps2web_audio_ring', 'ps2web_audio_queued_ms',
           'ps2web_idle_ms', 'ps2web_vu_interpreted']
REPLACED = {'upstream/runtime/src/kernel.cpp', 'upstream/host/web.cpp',
            'upstream/runtime/src/iop/io.cpp', 'upstream/runtime/src/iop/sif.cpp',
            'upstream/runtime/src/iop/sio2.cpp', 'diagnostic.cpp'}
RETAINED_GAME_ARCHIVES = {
    'base/libps2game.a': '78eff5c002c95db5a202a0297be636375aa363eccf1d140d51c2ac01b19aafe4',
    'base/libps2runtime.a': 'b55a7fe68a220412c637f412f3a9e61250f66f71f6a2cc8abbecce251ccc155f',
}


def digest(path):
    h = hashlib.sha256()
    with Path(path).open('rb') as stream:
        for chunk in iter(lambda: stream.read(1 << 20), b''): h.update(chunk)
    return h.hexdigest()


def module(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    result = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(result)
    return result


def base_metadata(image, base):
    path = base / 'web/build-info.json'
    if path.is_file():
        raw = path.read_bytes()
        return json.loads(raw), hashlib.sha256(raw).hexdigest(), None
    if image != 'game': raise ValueError('Utility build metadata is required')
    # The retained PC source/object bundle predates its web metadata copy. This
    # exact archive pair was independently fingerprinted in native-boundary.
    actual = {name: digest(base / name) for name in RETAINED_GAME_ARCHIVES}
    if actual != RETAINED_GAME_ARCHIVES: raise ValueError('Unrecognized game archive pair without build metadata')
    return None, None, {'method': 'exact retained archive pair', 'web_build_metadata': 'absent', 'archives_sha256': actual}


def utility_objects(base, info, replaced=None):
    """Use source-to-object records, never ambiguous stems (EE/IOP kernel)."""
    known = info['sources_sha256']
    mappings = {}
    for command in info['commands']:
        if '-c' not in command: continue
        source = command[command.index('-c') + 1].replace('\\', '/')
        names = [name for name in known if source.endswith('/' + name)]
        if len(names) != 1: raise ValueError('Ambiguous recorded utility compile source: ' + source)
        name = names[0]
        if name in mappings: raise ValueError('Duplicate utility compile record: ' + name)
        obj_name = command[command.index('-o') + 1].replace('\\', '/').rsplit('/', 1)[-1]
        mappings[name] = base / 'objects' / obj_name
    if set(mappings) != set(known): raise ValueError('Utility compile/source manifest coverage mismatch')
    for name, expected in known.items():
        if digest(base / name) != expected: raise ValueError('Utility source changed: ' + name)
        if not mappings[name].is_file(): raise ValueError('Missing retained utility object: ' + str(mappings[name]))
    replaced = REPLACED if replaced is None else replaced
    return [obj for name, obj in mappings.items() if name not in replaced]


def manifest_sources(tree, *manifests):
    """Compile each final composed source once, including every replacement."""
    names = []
    for manifest in manifests:
        if not manifest: continue
        for key in ['replaced_sources', 'replaces_sources', 'compiled_sources']:
            for name in manifest.get(key, []):
                path = Path(name)
                if path.is_absolute() or '..' in path.parts or '\\' in name or ':' in name:
                    raise ValueError('Invalid composed source path: ' + name)
                actual = (tree / path).resolve()
                if not actual.is_relative_to(tree.resolve()) or not actual.is_file():
                    raise ValueError('Missing or escaped composed source: ' + name)
                if name not in names: names.append(name)
    return names


def require_overlay_coverage(manifest):
    if not manifest.get('variants'): return
    coverage = manifest.get('direct_entry_coverage', {})
    if coverage.get('original_text_complete') is not True or coverage.get('missing_original_targets') != []:
        raise ValueError('Decoded profile lacks complete original direct-entry coverage')
    if not manifest.get('inline_data_spans') or len(manifest['inline_data_spans']) != manifest.get('transform_sites'):
        raise ValueError('Decoded profile lacks original inline-data exclusion proofs')


def compose_cdvd_identity(image, source, path):
    """An explicit game-only experiment; utility's original ordinal remains unchanged."""
    if path is None: return None, {}
    if image != 'game': raise ValueError('CDVD identity composition is game-only; utility remains original')
    inputs = {str(p): digest(p) for p in [path, path.with_name('cdvd_identity.hpp')]}
    preparer = module('exec_cdvd_identity', path)
    manifest = preparer.prepare(source)
    if manifest.get('profile') not in {'original-online-cdvd-identity-v1', 'original-online-cdvd-identity-v2'}:
        raise ValueError('Unsupported CDVD identity profile')
    if manifest.get('replaced_sources') != ['runtime/src/iop/cdvd.cpp'] or manifest.get('compiled_sources') != []:
        raise ValueError('Unexpected CDVD identity source scope')
    for filename, expected in inputs.items():
        if digest(filename) != expected: raise ValueError('CDVD identity input changed during composition: ' + filename)
    return manifest, inputs


def plan(image, base, sdk, work, storage_path, network_path=None, source_root=ROOT, device_path=None, device_segment=False, overlay_path=None, cdvd_identity_path=None):
    if work.exists(): raise ValueError('Use a new work directory')
    if network_path and image != 'game': raise ValueError('Network composition is game-only; utility remains original')
    if device_segment and not device_path: raise ValueError('Device segment requires an explicit device preparer')
    if overlay_path and image != 'game': raise ValueError('Original overlay entry profile is game-only')
    if cdvd_identity_path and image != 'game': raise ValueError('CDVD identity composition is game-only; utility remains original')
    info_path = base / 'web/build-info.json'
    info, info_sha, retained_provenance = base_metadata(image, base)
    prep = module('exec_preparation', HERE / 'prepare.py')
    elf = base / ('inputs/core.elf' if image == 'game' else 'NTGDVDJ.BIN')
    if digest(elf) != prep.HASHES[image]: raise ValueError('Original executable digest mismatch')
    if image == 'game':
        if info is not None and info.get('profile') != 'full-game-adaptive': raise ValueError('Game base must be original adaptive, without multiplayer overrides')
        names = ['system', 'full_game_web_hooks', 'full_game_interpolation', 'vif', 'unit_0039', 'unit_0049', 'unit_004D', 'unit_0047']
        retained = [base / 'overrides' / (name + '.o') for name in names]
        retained += [base / 'base/libps2game.a', base / 'base/libps2runtime.a']
        generated = source_root / 'generated/gundam-vs-z-gundam'
    else:
        if not info.get('profile', '').startswith('isolated-original-network-utility'):
            raise ValueError('Utility base must be the verified standalone utility build')
        retained = utility_objects(base, info)
        generated = base / 'generated'
        # Original entry bytes + both observed translation targets are required.
        subprocess.run([sys.executable, str(source_root / 'poc/original-online/verify_utility.py'), '--elf', str(elf), '--generated', str(generated)], check=True)
    storage_hash = digest(storage_path)
    storage = module('exec_storage_preparation', storage_path)
    work.mkdir(parents=True)
    source = work / 'upstream'
    shutil.copytree(base / 'upstream', source, ignore=shutil.ignore_patterns('._*', '__pycache__'))
    storage_manifest = storage.prepare(source)
    if digest(storage_path) != storage_hash: raise ValueError('Storage preparer changed during composition')
    device_manifest = None
    if device_path:
        device_hash = digest(device_path)
        device = module('exec_device_preparation', device_path)
        device_manifest = device.prepare(source, segment=True) if device_segment else device.prepare(source)
        if digest(device_path) != device_hash: raise ValueError('Device preparer changed during composition')
    network_manifest = None
    if network_path:
        network_hash = digest(network_path)
        network = module('exec_network_preparation', network_path)
        network_manifest = network.prepare(source)
        if digest(network_path) != network_hash: raise ValueError('Network preparer changed during composition')
    discovery = module('exec_module_discovery', HERE / 'discovery_prepare.py')
    discovery_manifest = discovery.prepare(source, source_root / 'poc/original-online/module_names.hpp')
    cdvd_identity_manifest, cdvd_identity_inputs = compose_cdvd_identity(image, source, cdvd_identity_path)
    overlay_manifest = None
    if overlay_path:
        overlay_manifest = json.loads((overlay_path / 'manifest.json').read_text())
        if overlay_manifest.get('profile') != 'original-online-dnas-overlay-entries-v1':
            raise ValueError('Unsupported original overlay profile')
        if overlay_manifest.get('artifact_sha256') != module('exec_overlay_preparer', HERE / 'overlay_prepare.py').ARTIFACT_SHA:
            raise ValueError('Unsupported original overlay fingerprint')
        require_overlay_coverage(overlay_manifest)
        for name, expected in overlay_manifest['files_sha256'].items():
            if Path(name).name != name or digest(overlay_path / name) != expected:
                raise ValueError('Original overlay bundle changed: ' + name)
        dispatch_path = source / 'runtime/src/dispatch.cpp'
        dispatch = '#include "dispatch_observer.hpp"\n' + dispatch_path.read_text()
        dispatch = prep.replace_once(dispatch, 'namespace ps2 {',
            'namespace original_exec { const ps2::ModuleInfo* overlay_modules(const ps2::ModuleInfo*, std::uint32_t); }\nnamespace ps2 {')
        dispatch = prep.replace_once(dispatch, '    g_modules = modules;', '    g_modules = original_exec::overlay_modules(modules, count);')
        dispatch = prep.replace_once(dispatch, '            if (entry) {\n                c.base = base;',
            '            original_exec::observe_dispatch(c, pc, m->module, entry);\n            if (entry) {\n                c.base = base;')
        dispatch = prep.replace_once(dispatch, '        record_miss(pc);',
            '        record_miss(pc);\n        original_exec::observe_dispatch(c, pc, nullptr, 0);')
        if overlay_manifest.get('variants'):
            dispatch = '#include "code_variant.hpp"\n' + dispatch
            dispatch = prep.replace_once(dispatch, 'bool loaded_at(const ModuleInfo &m, std::uint32_t base) {',
                'bool loaded_at(const ModuleInfo &m, std::uint32_t base) {\n    if (original_exec::dnas_module(&m) && !original_exec::protected_markers_valid()) return false;')
            dispatch = prep.replace_once(dispatch,
                '        if (ld32(base + m.checks[2 * k]) != m.checks[2 * k + 1]) return false;', '''        if (const auto actual = ld32(base + m.checks[2 * k]); actual != m.checks[2 * k + 1]) {
            if (original_exec::dnas_module(&m))
                original_exec::observe_identity_rejection("immutable-word", base + m.checks[2 * k], m.checks[2 * k + 1], actual);
            return false;
        }''')
            dispatch = prep.replace_once(dispatch, '    return true;\n}\n\n// The word a call checks',
                '    if (original_exec::dnas_module(&m)) original_exec::observe_nontext_change();\n    return true;\n}\n\n// The word a call checks')
            dispatch = prep.replace_once(dispatch, 'if (full || !i.module->fixed_base)',
                'if (full || !i.module->fixed_base || original_exec::dnas_module(i.module))')
            dispatch = prep.replace_once(dispatch, 'const Instance *in_place(const Instance &i) {', '''const Instance *in_place(const Instance &i) {
    if (original_exec::dnas_module(i.module)) {
        static std::uint64_t checks = 0;
        ++checks;
        if (!(checks & (checks - 1)))
            std::fprintf(stderr, "[original-exec-identity] cached_full_checks=%llu words_per_check=%u\\n",
                         static_cast<unsigned long long>(checks), i.module->check_count);
    }''')
            dispatch = prep.replace_once(dispatch, '    const Instance *m = instance_for(pc);\n    const UnitInfo *mu',
                '    const Instance *m = instance_for(pc);\n    if (m && original_exec::dnas_module(m->module) && !original_exec::original_entry_address(pc)) return false;\n    if (m && original_exec::dnas_module(m->module) && original_exec::protected_range(pc)) return original_exec::has_variant_code(pc, m->module);\n    const UnitInfo *mu')
            dispatch = prep.replace_once(dispatch, '            const std::uint32_t base = m->base;',
                '            if (original_exec::dispatch_variant(c, pc, depth, m->module)) return;\n            const std::uint32_t base = m->base;')
            flush = '''void original_exec_flush_cache() {
    const bool had_dnas = std::any_of(g_instances.begin(), g_instances.end(),
        [](const Instance& instance) { return original_exec::dnas_module(instance.module); });
    const auto count = g_instances.size();
    g_instances.clear();
    static unsigned records = 0;
    if (had_dnas && records++ < 64)
        std::fprintf(stderr, "[original-exec-cache] original_flush invalidated=%zu\\n", count);
}

'''
            dispatch = prep.replace_once(dispatch, 'bool has_code(std::uint32_t pc) {', flush + 'bool has_code(std::uint32_t pc) {')
        dispatch_path.write_text(dispatch)
    prepared = work / 'exec'; prepared.mkdir()
    host = source_root / 'apps/game/src/web.cpp' if image == 'game' else source / 'host/web.cpp'
    kernel_text, host_text = prep.prepare((source / 'runtime/src/kernel.cpp').read_text(), host.read_text())
    if overlay_manifest and overlay_manifest.get('variants'):
        # The file starts in ps2::kernel and only opens ps2 later. The cache
        # declaration must precede that first namespace and its syscall body.
        kernel_text = 'namespace ps2 { void original_exec_flush_cache(); }\n' + kernel_text
        kernel_text = prep.replace_once(kernel_text, 'case 0x64: case 0x68: ret(c, 0); break;',
            'case 0x64: case 0x68: original_exec_flush_cache(); ret(c, 0); break;')
    (prepared / 'kernel.cpp').write_text(kernel_text)
    (prepared / 'web.cpp').write_text(host_text)
    shell = (HERE / 'frame.html').read_text().replace('__ORIGINAL_EXEC_IMAGE__', image).replace('__ORIGINAL_EXEC_SHA256__', prep.HASHES[image])
    shell = shell.replace('__ORIGINAL_EXEC_NETWORK__', 'true' if network_path else 'false')
    (prepared / 'frame.html').write_text(shell)
    inputs = work / 'inputs'; inputs.mkdir(); shutil.copy2(elf, inputs / 'core.elf')
    sources = [prepared / 'kernel.cpp', prepared / 'web.cpp', HERE / 'runtime.cpp', HERE / 'web_notify.cpp']
    sources += [source / 'runtime/src/iop' / name for name in ['io.cpp', 'sif.cpp', 'sio2.cpp', 'native_storage.cpp']]
    if image == 'utility': sources.append(HERE / 'utility_diagnostic.cpp')
    composed_names = manifest_sources(source, device_manifest, network_manifest, discovery_manifest, cdvd_identity_manifest)
    for name in composed_names:
        path = source / name
        if path not in sources: sources.append(path)
    if overlay_manifest:
        sources.append(source / 'runtime/src/dispatch.cpp')
        for name in overlay_manifest['compiled_sources']:
            if Path(name).name != name or name not in overlay_manifest['files_sha256']:
                raise ValueError('Invalid overlay source path')
            sources.append(overlay_path / name)
    if image == 'utility' and composed_names:
        retained = utility_objects(base, info, REPLACED | {'upstream/' + name for name in composed_names})
    retained_hashes = {str(path): digest(path) for path in retained}
    observer = None
    if image == 'game':
        online = module('exec_online_observation', source_root / 'poc/original-online/prepare.py')
        observation = work / 'observation'
        observer = online.prepare(base / 'overrides', observation)
        sources += [observation / name for name in online.POINTS]
    includes = [HERE, source / 'runtime/include', source / 'runtime/src', source / 'runtime/src/iop', generated,
                source_root / 'src/hooks', source_root / 'research/source/render-hooks', work / 'observation']
    flags = [*FLAGS, '-DORIGINAL_EXEC_IMAGE="' + image + '"', *['-I' + str(path) for path in includes]]
    if image == 'game': flags.append('-DNDEBUG')
    objects = work / 'objects'; objects.mkdir()
    web = work / 'web'; web.mkdir()
    emxx = sdk / 'upstream/emscripten/em++'
    commands, compiled = [], []
    for i, src in enumerate(sources):
        obj = objects / (str(i) + '-' + src.stem + '.o'); compiled.append(obj)
        commands.append([str(emxx), *flags, '-c', str(src), '-o', str(obj)])
    exports = EXPORTS + (['ps2web_experiment_stat', 'ps2web_request_fps'] if image == 'game' else [])
    if network_manifest: exports += network_manifest['exports']
    runtime_methods = ['callMain', 'addRunDependency', 'removeRunDependency', 'HEAPU8', 'ENV', 'FS', 'PThread']
    if network_manifest:
        runtime_methods = list(dict.fromkeys([*runtime_methods, *network_manifest.get('exported_runtime_methods', [])]))
    commands.append([str(emxx), *flags, '--profiling-funcs', '-sJSPI', '-sALLOW_MEMORY_GROWTH=1', '-sINITIAL_MEMORY=268435456',
        '-sPTHREAD_POOL_SIZE=2', '-sALLOW_TABLE_GROWTH=1', '-sSTACK_SIZE=16777216', '-sENVIRONMENT=web', '-sMINIFY_HTML=0',
        '-sEXPORTED_FUNCTIONS=' + ','.join('_' + name for name in exports),
        '-sEXPORTED_RUNTIME_METHODS=' + ','.join(runtime_methods),
        '--shell-file', str(prepared / 'frame.html'), '--preload-file', str(inputs / 'core.elf') + '@/game/core.elf',
        *map(str, compiled), *map(str, retained), '-o', str(web / 'index.html')])
    for name in ['frame.mjs', 'session.mjs', 'audio-worklet.js']: shutil.copy2(HERE / name, web / name)
    network_js_hashes = {}
    if network_manifest:
        destination = web / 'network'; destination.mkdir()
        for name in network_manifest['js_modules']:
            if Path(name).name != name: raise ValueError('Invalid network module name')
            original = network_path.parent / name
            shutil.copy2(original, destination / name)
            network_js_hashes[str(original)] = digest(original)
    manifest = {
        'profile': 'experimental-original-exec-with-native-storage-v1', 'image': image, 'fresh_build': False,
        'status': 'prepared-not-built', 'prepared_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'elf_sha256': prep.HASHES[image], 'base_build_info_sha256': info_sha, 'retained_baseline_provenance': retained_provenance,
        'retained_objects_sha256': retained_hashes, 'sources_sha256': {str(path): digest(path) for path in sources},
        'headers_sha256': {str(path): digest(path) for path in source.rglob('*.hpp')},
        'repository_inputs_sha256': {str(path): digest(path) for path in
            [host, *generated.glob('*.hpp'), *(source_root / 'src/hooks').glob('*.hpp'),
             *(source_root / 'research/source/render-hooks').glob('*.hpp'),
             source_root / 'poc/original-online/prepare.py', source_root / 'poc/original-online/observer.hpp',
             source_root / 'poc/original-online/verify_utility.py', source_root / 'poc/original-online/module_names.hpp']},
        'exec_inputs_sha256': {str(path): digest(path) for path in HERE.iterdir() if path.is_file()},
        'storage_preparation_sha256': storage_hash, 'storage': storage_manifest, 'observer': observer,
        'device_preparation_sha256': device_hash if device_path else None, 'device': device_manifest,
        'resident_module_lookup': discovery_manifest,
        'cdvd_identity': cdvd_identity_manifest, 'cdvd_identity_inputs_sha256': cdvd_identity_inputs,
        'overlay': overlay_manifest,
        'overlay_inputs_sha256': {str(overlay_path / name): value for name, value in overlay_manifest['files_sha256'].items()} if overlay_manifest else {},
        'network_preparation_sha256': network_hash if network_path else None,
        'network': network_manifest, 'network_js_sha256': network_js_hashes,
        'commands': commands, 'shell_sha256': digest(prepared / 'frame.html'),
        'limits': ['Incremental link from fingerprinted retained objects', 'No actual image round-trip proof from preparation/build'],
    }
    (work / 'build-plan.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--image', choices=['game', 'utility'], required=True)
    for name in ['base', 'sdk', 'work']: parser.add_argument('--' + name, type=Path, required=True)
    parser.add_argument('--storage-prepare', type=Path, default=HERE.parent / 'native-storage/prepare.py')
    parser.add_argument('--prepare-only', action='store_true', help='Prepare sources and exact command plan; never run compiler or game')
    parser.add_argument('--network-prepare', type=Path, help='Explicitly compose the network-owned game runtime adapter; off by default')
    parser.add_argument('--device-prepare', type=Path, help='Explicitly compose the device-owned DEV9/SMAP slice after storage; off by default')
    parser.add_argument('--device-segment', action='store_true', help='Explicitly enable the device owner\'s local ARP/DHCP segment; requires --device-prepare')
    parser.add_argument('--overlay-profile', type=Path, help='Explicit exact original DNAS_NET entry-coverage bundle; game-only and off by default')
    parser.add_argument('--cdvd-identity-prepare', type=Path, help='Explicit game-only cdvdman ordinal80/82 candidate from the device owner; off by default')
    parser.add_argument('--source-root', type=Path, default=ROOT, help='Unchanged repository input snapshot; supports a partial build machine checkout')
    args = parser.parse_args()
    base, sdk, work = args.base.resolve(), args.sdk.resolve(), args.work.resolve()
    existed = work.exists()
    try:
        manifest = plan(args.image, base, sdk, work, args.storage_prepare.resolve(), args.network_prepare.resolve() if args.network_prepare else None, args.source_root.resolve(), args.device_prepare.resolve() if args.device_prepare else None, args.device_segment, args.overlay_profile.resolve() if args.overlay_profile else None, args.cdvd_identity_prepare.resolve() if args.cdvd_identity_prepare else None)
    except Exception as error:
        if not existed and work.exists():
            failure = {'status': 'preparation-failed', 'recorded_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
                       'error': repr(error), 'argv': sys.argv, 'image': args.image}
            (work / 'preparation-failure.json').write_text(json.dumps(failure, indent=2) + '\n')
        raise
    if args.prepare_only:
        print('Prepared only:', work / 'build-plan.json'); return
    env = {**os.environ, 'EM_CONFIG': str(sdk / '.emscripten'), 'EMSDK_PYTHON': sys.executable,
           'EM_CACHE': str(work / 'em-cache'), 'EMCC_CORES': '2', 'BINARYEN_CORES': '2'}
    try:
        version = subprocess.check_output([str(sdk / 'upstream/emscripten/em++'), '--version'], env=env, text=True)
        if '6.0.11' not in version.splitlines()[0]: raise ValueError('Emscripten 6.0.11 required')
        manifest['toolchain'] = version
        manifest['sdk_sha256'] = {str(path): digest(path) for path in [sdk / '.emscripten', sdk / 'upstream/emscripten/em++',
            sdk / 'upstream/emscripten/emcc.py', sdk / 'upstream/bin/clang', sdk / 'upstream/bin/wasm-opt']}
        for command in manifest['commands']:
            manifest['active_command'] = command
            subprocess.run(command, env=env, check=True)
        for category in ['sources_sha256', 'retained_objects_sha256', 'headers_sha256', 'repository_inputs_sha256', 'exec_inputs_sha256', 'network_js_sha256', 'overlay_inputs_sha256', 'cdvd_identity_inputs_sha256']:
            for filename, expected in manifest[category].items():
                if digest(filename) != expected: raise ValueError('Build input changed during build: ' + filename)
        manifest['status'] = 'built-not-runtime-tested'
        manifest['outputs_sha256'] = {path.relative_to(work / 'web').as_posix(): digest(path) for path in (work / 'web').rglob('*') if path.is_file()}
    except Exception as error:
        manifest['status'] = 'failed'; manifest['error'] = repr(error)
        raise
    finally:
        manifest['ended_utc'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
        (work / 'web/build-info.json').write_text(json.dumps(manifest, indent=2) + '\n')


if __name__ == '__main__': main()
