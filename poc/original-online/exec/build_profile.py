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


def prepared_headers(source):
    return {str(path): digest(path) for pattern in ['*.hpp', '*.inc'] for path in source.rglob(pattern)}


def verify_hashes(inputs):
    for filename, expected in inputs.items():
        if digest(filename) != expected: raise ValueError('Build input changed during build: ' + filename)


def observer_budget(image, directory, manifest, limit):
    """Change only the copied observer's bounded log budget, when requested."""
    if limit is None: return None
    if image != 'game': raise ValueError('Observer budget is game-only')
    if type(limit) is not int or not 16384 <= limit <= 131072:
        raise ValueError('Observer budget must be an integer from 16384 through 131072')
    header = directory / 'observer.hpp'
    original = header.read_bytes()
    expected = manifest.get('observer_sha256')
    if hashlib.sha256(original).hexdigest() != expected:
        raise ValueError('Prepared observer fingerprint mismatch')
    anchor = b'inline constexpr unsigned limit = 16384;'
    if original.count(anchor) != 1: raise ValueError('Observer budget anchor changed')
    updated = original.replace(anchor, f'inline constexpr unsigned limit = {limit};'.encode())
    header.write_bytes(updated)
    setting = {'requested': limit, 'default': 16384, 'maximum': 131072,
               'input_sha256': expected, 'output_sha256': digest(header),
               'scope': 'copied observer log budget only; trace_cap and dropped signaling retained'}
    manifest['observer_sha256'] = setting['output_sha256']
    manifest['trace_budget_override'] = setting
    (directory / 'observer-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return setting


QUIET_EDITS = [
    # Post-menu SIF metadata records are counted, not printed. Boot-scope
    # custom-service records, state/mode records and cap reporting remain.
    (b'#include <cstdio>\n', b'#include <cstdio>\n#include <cstring>\n'),
    (b'inline std::uint32_t last_mode = ~0u;\n', b'''inline std::uint32_t last_mode = ~0u;
inline unsigned quiet_suppressed = 0;
inline bool quiet_event(const char *event) {
    for (const char *name : {"bind", "bind_return", "call", "call_return", "rpc_end"})
        if (!std::strcmp(event, name)) return true;
    return false;
}
'''),
    (b'    if (!active && !allow_boot) return;\n',
     b'    if (!active && !allow_boot) return;\n    if (active && quiet_event(event)) { ++quiet_suppressed; return; }\n'),
    (b'\\"end_hits\\":%u,\\"background_calls\\":%u,', b'\\"end_hits\\":%u,\\"quiet_suppressed\\":%u,\\"background_calls\\":%u,'),
    (b'bind_hits, call_hits, end_hits, background_calls,', b'bind_hits, call_hits, end_hits, quiet_suppressed, background_calls,'),
    # The module flag also logs every IOP DMA start; the quiet profile leaves it off.
    (b'    ps2::iop::kernel::g_trace_modules = true;\n', b'    // Quiet profile: the runtime module/IOP DMA log flag stays off.\n'),
    (b'",\\"mode\\":7,\\"observer_version\\":3"', b'",\\"mode\\":7,\\"observer_version\\":3,\\"observer_profile\\":\\"quiet\\""'),
]


def observer_quiet(image, directory, manifest, enabled):
    """Lower the copied observer's log volume for long runs, when requested."""
    if not enabled: return None
    if image != 'game': raise ValueError('Quiet observer is game-only')
    header = directory / 'observer.hpp'
    original = header.read_bytes()
    expected = manifest.get('observer_sha256')
    if hashlib.sha256(original).hexdigest() != expected:
        raise ValueError('Prepared observer fingerprint mismatch')
    updated = original
    for anchor, replacement in QUIET_EDITS:
        if updated.count(anchor) != 1: raise ValueError('Quiet observer anchor changed: ' + anchor.decode()[:60])
        updated = updated.replace(anchor, replacement)
    header.write_bytes(updated)
    setting = {'profile': 'quiet', 'input_sha256': expected, 'output_sha256': digest(header),
               'suppressed_post_menu_events': ['bind', 'bind_return', 'call', 'call_return', 'rpc_end'],
               'module_trace_flag': 'not set at menu entry',
               'retained': ['boot custom-service records', 'menu/mode/state records', 'counters', 'trace_cap and dropped reporting'],
               'scope': 'copied observer logging only; guest memory, registers and scheduling are unchanged'}
    manifest['observer_sha256'] = setting['output_sha256']
    manifest['quiet_override'] = setting
    (directory / 'observer-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return setting


# Reviewed corrections that let two original mode-7 clients reach a battle.
# Committed preparers resolve under the source root; the three generated entry
# bundles are private and must be supplied. Diagnostics stay separately opt-in.
ORIGINAL_ONLINE_BUNDLE = 'original-online-v1'
ORIGINAL_ONLINE_PREPARERS = {
    'device_prepare': 'poc/original-online/native-network-device/prepare.py',
    'network_prepare': 'poc/original-online/network/prepare_runtime.py',
    'cdvd_identity_prepare': 'poc/original-online/native-network-device/cdvd_identity.py',
    'disc_model_prepare': 'poc/original-online/disc-model/prepare.py',
}
ORIGINAL_ONLINE_SWITCHES = ['device_segment', 'thread_return_exit']
ORIGINAL_ONLINE_PRIVATE = ['overlay_profile', 'browser_entry_profile', 'core_entry_profile']


def original_online(options, source_root):
    """Fill the bundle's options; reject partial or conflicting selections."""
    if options['image'] != 'game': raise ValueError('The original Online bundle is game-only')
    conflicts = [name for name in [*ORIGINAL_ONLINE_PREPARERS, *ORIGINAL_ONLINE_SWITCHES] if options.get(name)]
    if conflicts: raise ValueError('The original Online bundle defines these options: ' + ', '.join(conflicts))
    missing = [name for name in ORIGINAL_ONLINE_PRIVATE if not options.get(name)]
    if missing: raise ValueError('The original Online bundle requires private inputs: ' + ', '.join(missing))
    resolved = dict(options)
    components = {}
    for name, relative in ORIGINAL_ONLINE_PREPARERS.items():
        path = (source_root / relative).resolve()
        if not path.is_file(): raise ValueError('Missing committed bundle preparer: ' + relative)
        resolved[name] = path
        components[name] = {'path': str(path), 'sha256': digest(path)}
    for name in ORIGINAL_ONLINE_SWITCHES: resolved[name] = True
    for name in ORIGINAL_ONLINE_PRIVATE:
        path = options[name] / 'manifest.json'
        components[name] = {'path': str(options[name]), 'manifest_sha256': digest(path) if path.is_file() else None}
    record = {'name': ORIGINAL_ONLINE_BUNDLE, 'components': components, 'switches': ORIGINAL_ONLINE_SWITCHES,
              'diagnostics': {'wait_snapshot': bool(options.get('wait_snapshot')),
                              'observer_trace_budget': options.get('observer_trace_budget'),
                              'quiet_logs': bool(options.get('quiet_logs'))}}
    return resolved, record


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


def compose_disc_model(image, source, path):
    """Explicit reference-emulator HLE; no physical-disc identity claim."""
    if path is None: return None, {}
    if image != 'game': raise ValueError('Disc model composition is game-only; utility remains original')
    inputs = {str(p): digest(p) for p in [path, *[path.with_name(name) for name in ['model.hpp', 'model.cpp', 'adapter.inc']]]}
    preparer = module('exec_disc_model', path)
    manifest = preparer.prepare(source)
    if manifest.get('profile') != 'original-online-disc-model-pcsx2-command75-v1':
        raise ValueError('Unsupported disc model profile')
    if manifest.get('replaced_sources') != ['runtime/src/iop/cdvd.cpp', 'runtime/src/iop/kernel.cpp', 'runtime/src/disc.cpp'] or \
            manifest.get('compiled_sources') != ['runtime/src/iop/model.cpp']:
        raise ValueError('Unexpected disc model source scope')
    for filename, expected in inputs.items():
        if digest(filename) != expected: raise ValueError('Disc model input changed during composition: ' + filename)
    return manifest, inputs


def plan(image, base, sdk, work, storage_path, network_path=None, source_root=ROOT, device_path=None, device_segment=False, overlay_path=None, cdvd_identity_path=None, disc_model_path=None, trace_budget=None, wait_snapshot=False, thread_return_exit=False, browser_path=None, core_entry_path=None, quiet_logs=False, bundle=None):
    if image != 'game' and trace_budget is not None: raise ValueError('Observer budget is game-only')
    if image != 'game' and wait_snapshot: raise ValueError('Wait snapshot is game-only')
    if image != 'game' and quiet_logs: raise ValueError('Quiet logs are game-only')
    if image != 'game' and thread_return_exit: raise ValueError('Thread-return exit is game-only')
    if browser_path and (image != 'game' or not overlay_path): raise ValueError('Browser entry profile is game-only and requires the overlay profile')
    if core_entry_path and image != 'game': raise ValueError('Core entry profile is game-only')
    if work.exists(): raise ValueError('Use a new work directory')
    if network_path and image != 'game': raise ValueError('Network composition is game-only; utility remains original')
    if device_segment and not device_path: raise ValueError('Device segment requires an explicit device preparer')
    if overlay_path and image != 'game': raise ValueError('Original overlay entry profile is game-only')
    if cdvd_identity_path and image != 'game': raise ValueError('CDVD identity composition is game-only; utility remains original')
    if disc_model_path and image != 'game': raise ValueError('Disc model composition is game-only; utility remains original')
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
        # Quiet logs also count the adapter's per-call trace lines instead of printing them.
        network_manifest = network.prepare(source, quiet_trace=True) if quiet_logs else network.prepare(source)
        if digest(network_path) != network_hash: raise ValueError('Network preparer changed during composition')
    discovery = module('exec_module_discovery', HERE / 'discovery_prepare.py')
    discovery_manifest = discovery.prepare(source, source_root / 'poc/original-online/module_names.hpp')
    cdvd_identity_manifest, cdvd_identity_inputs = compose_cdvd_identity(image, source, cdvd_identity_path)
    disc_model_manifest, disc_model_inputs = compose_disc_model(image, source, disc_model_path)
    overlay_manifest = None
    if overlay_path:
        overlay_manifest = json.loads((overlay_path / 'manifest.json').read_text())
        if overlay_manifest.get('profile') != 'original-online-dnas-overlay-entries-v1':
            raise ValueError('Unsupported original overlay profile')
        if overlay_manifest.get('artifact_sha256') != module('exec_overlay_preparer', HERE / 'overlay_prepare.py').ARTIFACT_SHA:
            raise ValueError('Unsupported original overlay fingerprint')
        require_overlay_coverage(overlay_manifest)
    browser_manifest = None
    if browser_path:
        browser_manifest = json.loads((browser_path / 'manifest.json').read_text())
        browser_preparer = module('exec_browser_preparer', HERE / 'browser_entry_prepare.py')
        if browser_manifest.get('profile') != browser_preparer.PROFILE or browser_manifest.get('artifact_sha256') != browser_preparer.ARTIFACT_SHA:
            raise ValueError('Unsupported original browser overlay profile')
        for name, expected in browser_manifest['files_sha256'].items():
            if Path(name).name != name or digest(browser_path / name) != expected:
                raise ValueError('Original browser overlay bundle changed: ' + name)
    core_entry_manifest = None
    if core_entry_path:
        core_entry_manifest = json.loads((core_entry_path / 'manifest.json').read_text())
        core_preparer = module('exec_core_entry_preparer', HERE / 'core_entry_prepare.py')
        if core_entry_manifest.get('profile') != core_preparer.PROFILE or core_entry_manifest.get('retained_sha256') != core_preparer.RETAINED_SHA:
            raise ValueError('Unsupported original core entry profile')
        for name, expected in core_entry_manifest['files_sha256'].items():
            if Path(name).name != name or digest(core_entry_path / name) != expected:
                raise ValueError('Original core entry bundle changed: ' + name)
    if overlay_manifest:
        for name, expected in overlay_manifest['files_sha256'].items():
            if Path(name).name != name or digest(overlay_path / name) != expected:
                raise ValueError('Original overlay bundle changed: ' + name)
        dispatch_path = source / 'runtime/src/dispatch.cpp'
        dispatch = '#include "dispatch_observer.hpp"\n' + dispatch_path.read_text()
        dispatch = prep.replace_once(dispatch, 'namespace ps2 {',
            'namespace original_exec { const ps2::ModuleInfo* overlay_modules(const ps2::ModuleInfo*, std::uint32_t); }\nnamespace ps2 {')
        modules_expression = 'original_exec::overlay_modules(modules, count)'
        if browser_manifest:
            dispatch = prep.replace_once(dispatch, 'namespace ps2 {',
                'namespace original_exec { const ps2::ModuleInfo* browser_overlay_modules(const ps2::ModuleInfo*, std::uint32_t); }\nnamespace ps2 {')
            modules_expression = 'original_exec::browser_overlay_modules(' + modules_expression + ', count)'
        dispatch = prep.replace_once(dispatch, '    g_modules = modules;', '    g_modules = ' + modules_expression + ';')
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
    waits = module('exec_wait_snapshot', HERE / 'wait_snapshot_prepare.py') if wait_snapshot else None
    wait_tree = waits.prepare_tree(source) if waits else None
    prepared = work / 'exec'; prepared.mkdir()
    host = source_root / 'apps/game/src/web.cpp' if image == 'game' else source / 'host/web.cpp'
    kernel_text, host_text = prep.prepare((source / 'runtime/src/kernel.cpp').read_text(), host.read_text())
    if overlay_manifest and overlay_manifest.get('variants'):
        # The file starts in ps2::kernel and only opens ps2 later. The cache
        # declaration must precede that first namespace and its syscall body.
        kernel_text = 'namespace ps2 { void original_exec_flush_cache(); }\n' + kernel_text
        kernel_text = prep.replace_once(kernel_text, 'case 0x64: case 0x68: ret(c, 0); break;',
            'case 0x64: case 0x68: original_exec_flush_cache(); ret(c, 0); break;')
    thread_exit_manifest = None
    if thread_return_exit:
        exits = module('exec_thread_exit', HERE / 'thread_exit_prepare.py')
        before = kernel_text
        kernel_text = exits.prepare_kernel(kernel_text)
        thread_exit_manifest = exits.manifest(before, kernel_text)
    wait_manifest = None
    if waits:
        before = kernel_text
        kernel_text = waits.prepare_kernel(kernel_text)
        wait_manifest = waits.manifest(before, kernel_text, wait_tree)
    (prepared / 'kernel.cpp').write_text(kernel_text)
    (prepared / 'web.cpp').write_text(host_text)
    shell = (HERE / 'frame.html').read_text().replace('__ORIGINAL_EXEC_IMAGE__', image).replace('__ORIGINAL_EXEC_SHA256__', prep.HASHES[image])
    shell = shell.replace('__ORIGINAL_EXEC_NETWORK__', 'true' if network_path else 'false')
    (prepared / 'frame.html').write_text(shell)
    inputs = work / 'inputs'; inputs.mkdir(); shutil.copy2(elf, inputs / 'core.elf')
    sources = [prepared / 'kernel.cpp', prepared / 'web.cpp', HERE / 'runtime.cpp', HERE / 'web_notify.cpp']
    sources += [source / 'runtime/src/iop' / name for name in ['io.cpp', 'sif.cpp', 'sio2.cpp', 'native_storage.cpp']]
    if image == 'utility': sources.append(HERE / 'utility_diagnostic.cpp')
    composed_names = manifest_sources(source, device_manifest, network_manifest, discovery_manifest, cdvd_identity_manifest, disc_model_manifest)
    for name in composed_names:
        path = source / name
        if path not in sources: sources.append(path)
    if waits:
        for name in waits.SOURCES:
            if source / name not in sources: sources.append(source / name)
    if overlay_manifest:
        sources.append(source / 'runtime/src/dispatch.cpp')
        for name in overlay_manifest['compiled_sources']:
            if Path(name).name != name or name not in overlay_manifest['files_sha256']:
                raise ValueError('Invalid overlay source path')
            sources.append(overlay_path / name)
    if core_entry_manifest:
        # The amended unit is linked before the archive, so its retained member is not used.
        for name in core_entry_manifest['compiled_sources']:
            if Path(name).name != name or name not in core_entry_manifest['files_sha256']:
                raise ValueError('Invalid core entry source path')
            sources.append(core_entry_path / name)
    if browser_manifest:
        for name in browser_manifest['compiled_sources']:
            if Path(name).name != name or name not in browser_manifest['files_sha256']:
                raise ValueError('Invalid browser overlay source path')
            sources.append(browser_path / name)
    if image == 'utility' and composed_names:
        retained = utility_objects(base, info, REPLACED | {'upstream/' + name for name in composed_names})
    retained_hashes = {str(path): digest(path) for path in retained}
    observer = None
    observer_headers = {}
    if image == 'game':
        online = module('exec_online_observation', source_root / 'poc/original-online/prepare.py')
        observation = work / 'observation'
        observer = online.prepare(base / 'overrides', observation)
        observer_budget(image, observation, observer, trace_budget)
        observer_quiet(image, observation, observer, quiet_logs)
        observer_headers = {str(observation / 'observer.hpp'): digest(observation / 'observer.hpp')}
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
        'headers_sha256': prepared_headers(source),
        'repository_inputs_sha256': {str(path): digest(path) for path in
            [host, *generated.glob('*.hpp'), *(source_root / 'src/hooks').glob('*.hpp'),
             *(source_root / 'research/source/render-hooks').glob('*.hpp'),
             source_root / 'poc/original-online/prepare.py', source_root / 'poc/original-online/observer.hpp',
             source_root / 'poc/original-online/verify_utility.py', source_root / 'poc/original-online/module_names.hpp']},
        'exec_inputs_sha256': {str(path): digest(path) for path in HERE.iterdir() if path.is_file()},
        'storage_preparation_sha256': storage_hash, 'storage': storage_manifest, 'observer': observer,
        'observer_headers_sha256': observer_headers,
        'device_preparation_sha256': device_hash if device_path else None, 'device': device_manifest,
        'resident_module_lookup': discovery_manifest,
        'cdvd_identity': cdvd_identity_manifest, 'cdvd_identity_inputs_sha256': cdvd_identity_inputs,
        'disc_model': disc_model_manifest, 'disc_model_inputs_sha256': disc_model_inputs,
        'wait_snapshot': wait_manifest, 'thread_return_exit': thread_exit_manifest,
        'wait_snapshot_inputs_sha256': {str(HERE / name): value for name, value in wait_manifest['inputs_sha256'].items()} if wait_manifest else {},
        'overlay': overlay_manifest, 'browser_overlay': browser_manifest, 'core_entries': core_entry_manifest,
        'core_entry_inputs_sha256': {str(core_entry_path / name): value for name, value in core_entry_manifest['files_sha256'].items()} if core_entry_manifest else {},
        'browser_overlay_inputs_sha256': {str(browser_path / name): value for name, value in browser_manifest['files_sha256'].items()} if browser_manifest else {},
        'overlay_inputs_sha256': {str(overlay_path / name): value for name, value in overlay_manifest['files_sha256'].items()} if overlay_manifest else {},
        'network_preparation_sha256': network_hash if network_path else None,
        'network': network_manifest, 'network_js_sha256': network_js_hashes,
        'commands': commands, 'shell_sha256': digest(prepared / 'frame.html'),
        'limits': ['Incremental link from fingerprinted retained objects', 'No actual image round-trip proof from preparation/build'],
    }
    if bundle: manifest['bundle'] = bundle
    (work / 'build-plan.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--image', choices=['game', 'utility'], required=True)
    for name in ['base', 'sdk', 'work']: parser.add_argument('--' + name, type=Path, required=True)
    parser.add_argument('--storage-prepare', type=Path, default=HERE.parent / 'native-storage/prepare.py')
    parser.add_argument('--prepare-only', action='store_true', help='Prepare sources and exact command plan; never run compiler or game')
    parser.add_argument('--observer-trace-budget', type=int, help='Explicit game diagnostic log limit, 16384..131072; default observer stays unchanged')
    parser.add_argument('--wait-snapshot', action='store_true', help='Explicit game-only read-only EE/IOP wait records after original state 39; off by default')
    parser.add_argument('--thread-return-exit', action='store_true', help='Explicit game-only ExitThread for an EE thread whose entry returns; off by default')
    parser.add_argument('--browser-entry-profile', type=Path, help='Explicit exact original browser.bin direct-call entry bundle; game-only, requires --overlay-profile')
    parser.add_argument('--core-entry-profile', type=Path, help='Explicit amended retained core unit with original entries reached from browser.bin; game-only')
    parser.add_argument('--network-prepare', type=Path, help='Explicitly compose the network-owned game runtime adapter; off by default')
    parser.add_argument('--device-prepare', type=Path, help='Explicitly compose the device-owned DEV9/SMAP slice after storage; off by default')
    parser.add_argument('--device-segment', action='store_true', help='Explicitly enable the device owner\'s local ARP/DHCP segment; requires --device-prepare')
    parser.add_argument('--overlay-profile', type=Path, help='Explicit exact original DNAS_NET entry-coverage bundle; game-only and off by default')
    parser.add_argument('--cdvd-identity-prepare', type=Path, help='Explicit game-only cdvdman ordinal80/82 candidate from the device owner; off by default')
    parser.add_argument('--disc-model-prepare', type=Path, help='Explicit game-only reference-emulator command75 HLE; modeled output, off by default')
    parser.add_argument('--source-root', type=Path, default=ROOT, help='Unchanged repository input snapshot; supports a partial build machine checkout')
    parser.add_argument('--original-online', action='store_true', help='Game-only bundle of the reviewed original Online corrections; requires the three private entry bundles')
    parser.add_argument('--quiet-logs', action='store_true', help='Explicit game-only long-run logging: the observer and network adapter count per-call records instead of printing them; off by default')
    args = parser.parse_args()
    bundle = None
    if args.original_online:
        options = {name: getattr(args, name) for name in ['image', *ORIGINAL_ONLINE_PREPARERS, *ORIGINAL_ONLINE_SWITCHES, *ORIGINAL_ONLINE_PRIVATE,
                                                          'wait_snapshot', 'observer_trace_budget', 'quiet_logs']}
        options = {name: value.resolve() if isinstance(value, Path) else value for name, value in options.items()}
        resolved, bundle = original_online(options, args.source_root.resolve())
        for name in [*ORIGINAL_ONLINE_PREPARERS, *ORIGINAL_ONLINE_SWITCHES]: setattr(args, name, resolved[name])
    base, sdk, work = args.base.resolve(), args.sdk.resolve(), args.work.resolve()
    existed = work.exists()
    try:
        manifest = plan(args.image, base, sdk, work, args.storage_prepare.resolve(), args.network_prepare.resolve() if args.network_prepare else None, args.source_root.resolve(), args.device_prepare.resolve() if args.device_prepare else None, args.device_segment, args.overlay_profile.resolve() if args.overlay_profile else None, args.cdvd_identity_prepare.resolve() if args.cdvd_identity_prepare else None, args.disc_model_prepare.resolve() if args.disc_model_prepare else None, args.observer_trace_budget, args.wait_snapshot, args.thread_return_exit, args.browser_entry_profile.resolve() if args.browser_entry_profile else None, args.core_entry_profile.resolve() if args.core_entry_profile else None, args.quiet_logs, bundle)
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
        for category in ['sources_sha256', 'retained_objects_sha256', 'headers_sha256', 'observer_headers_sha256', 'repository_inputs_sha256', 'exec_inputs_sha256', 'network_js_sha256', 'overlay_inputs_sha256', 'cdvd_identity_inputs_sha256', 'disc_model_inputs_sha256', 'wait_snapshot_inputs_sha256', 'browser_overlay_inputs_sha256', 'core_entry_inputs_sha256']:
            verify_hashes(manifest[category])
        manifest['status'] = 'built-not-runtime-tested'
        manifest['outputs_sha256'] = {path.relative_to(work / 'web').as_posix(): digest(path) for path in (work / 'web').rglob('*') if path.is_file()}
    except Exception as error:
        manifest['status'] = 'failed'; manifest['error'] = repr(error)
        raise
    finally:
        manifest['ended_utc'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
        (work / 'web/build-info.json').write_text(json.dumps(manifest, indent=2) + '\n')


if __name__ == '__main__': main()
