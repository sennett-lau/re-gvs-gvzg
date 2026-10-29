#!/usr/bin/env python3
"""Prepare guarded original-code variants only from two matching live captures."""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess

from overlay_prepare import ARTIFACT_SHA, NAME, PREFIX, one, sha

BASE = 0x0117F000


def text_bounds(data):
    # MWo3 text_size excludes the 0x40-byte file header. The retained
    # compiler's main.cpp uses the same section contract for code discovery.
    if len(data) < 0x80 or data[:4] != b'MWo3':
        raise ValueError('Original overlay lacks its MWo3 section header')
    address, text_size, data_size = struct.unpack_from('<III', data, 8)
    if address != BASE or not text_size or (text_size | data_size) & 3 or 0x40 + text_size + data_size != len(data):
        raise ValueError('Invalid original MWo3 section bounds')
    return 0x40, 0x40 + text_size


def immutable_code_checks(data, pairs, ranges):
    begin, end = text_bounds(data)
    markers = {start - 0x14 for start, _ in ranges}
    return [(offset, value) for offset, value in pairs
            if begin <= offset < end and offset + BASE not in markers
            and not any(start <= offset + BASE < stop for start, stop in ranges)]


def inventory(data):
    if hashlib.sha256(data).hexdigest() != ARTIFACT_SHA:
        raise ValueError('Original artifact fingerprint mismatch')
    def word(address):
        if address % 4 or not BASE <= address <= BASE + len(data) - 4:
            raise ValueError('Inline transform metadata outside original artifact')
        return struct.unpack_from('<I', data, address - BASE)[0]
    sites = [BASE + at for at in range(0, len(data), 4) if word(BASE + at) == 0x0C46AA9A]
    rows = []
    for site in sites:
        constants, loads = {}, {}
        for pc in range(site - 0x40, site + 8, 4):
            value = word(pc); op, rs, rt, imm = value >> 26, value >> 21 & 31, value >> 16 & 31, value & 65535
            signed = imm - (65536 if imm & 32768 else 0)
            if op == 15: constants[rt] = imm << 16
            elif op == 9 and rs == rt and rs in constants: constants[rt] = (constants[rs] + signed) & 0xFFFFFFFF
            if pc >= site - 0x20 and op == 35 and rt in (5, 6, 7): loads[rt] = (rs, signed)
        if set(loads) != {5, 6, 7} or 4 not in constants: raise ValueError('Unrecognized original helper argument setup')
        table_regs = {loads[r][0] for r in (5, 6, 7)}
        if len(table_regs) != 1 or not table_regs <= {2, 3}: raise ValueError('Ambiguous inline argument table')
        table = constants[next(iter(table_regs))]
        args = [constants[4], *[word(table + loads[r][1]) for r in (5, 6, 7)]]
        length = args[1] ^ args[2]
        begin = args[0] - length if args[3] & 1 else args[0]
        end = begin + length
        if length % 4 or length > 0x800 or begin < BASE + 0x14 or end > BASE + len(data):
            raise ValueError('Invalid original protected range')
        rows.append({'site': site, 'args': args, 'begin': begin, 'end': end, 'marker': begin - 0x14})
    ranges = sorted({(row['begin'], row['end']) for row in rows})
    if len(rows) != 110 or len(ranges) != 64 or sum(not (row['args'][3] & 1) for row in rows) != 64:
        raise ValueError('Original visible transform inventory changed')
    if any(a[1] > b[0] for a, b in zip(ranges, ranges[1:])): raise ValueError('Overlapping protected ranges unsupported')
    if any(a <= start - 0x14 < b for start, _ in ranges for a, b in ranges):
        raise ValueError('Protected marker overlaps executable range')
    return rows, ranges


def observations(capture, begin, length):
    capture = Path(capture)
    run = json.loads((capture / 'run.json').read_text())
    failure = json.loads((capture / 'failure.json').read_text())
    client = failure['clients'][0]
    if run['clients'] != 1 or not run['muted'] or run['audioSuspendedForTiming'] or client['state'] != 'failed' or client['traceLost'] or client['errors']:
        raise ValueError('Capture lacks a complete silent single-client failure record')
    records = []
    for line in (capture / 'A-console.jsonl').read_text().splitlines():
        record = json.loads(line); text = record['text']
        if not text.startswith('[original-exec-transform] '): continue
        fields = dict(re.findall(r'(\w+)=([^ ]+)', text))
        if int(fields.get('address', '0'), 16) != begin: continue
        words = bytes().join(struct.pack('<I', int(w, 16)) for w in fields['words'].split(','))
        if len(words) < length: raise ValueError('Live observation does not cover the whole protected range')
        records.append((record, fields, words))
    if not records or len(records) % 2: raise ValueError('Incomplete original before/after observation')
    pairs = []
    for index in range(0, len(records), 2):
        pair = records[index:index+2]
        if [r[1]['phase'] for r in pair] != ['before', 'after'] or pair[0][1]['site'] != pair[1][1]['site']:
            raise ValueError('Original transform observation ordering/site changed')
        if int(pair[0][1]['args'].split(',')[3], 16) & 1: continue # Retained inverse observation, not a decoded candidate.
        pairs.append(pair)
    if not pairs: raise ValueError('No original even transform observed')
    if any([r[1] for r in pair] != [r[1] for r in pairs[0]] for pair in pairs[1:]):
        raise ValueError('Repeated original transforms are inconsistent')
    return run, client, pairs[0], len(pairs)


def live_variant(data, rows, begin, captures):
    sites = [row for row in rows if row['begin'] == begin and not row['args'][3] & 1]
    if len(sites) != 1: raise ValueError('Variant requires one exact original visible transform site')
    site = sites[0]; length = site['end'] - begin
    proofs = [observations(path, begin, length) for path in captures]
    if proofs[0][0]['started_utc'] == proofs[1][0]['started_utc'] or proofs[0][1]['clientId'] == proofs[1][1]['clientId']:
        raise ValueError('Two independent fresh captures are required')
    for key in ['build_info_sha256', 'fixture_sha256', 'harness_sha256']:
        if proofs[0][0][key] != proofs[1][0][key]: raise ValueError('Fresh capture inputs differ: ' + key)
    if [r[1] for r in proofs[0][2]] != [r[1] for r in proofs[1][2]]:
        raise ValueError('Fresh original before/after records differ')
    before, after = proofs[0][2]
    if int(before[1]['site'], 16) != site['site'] or int(before[1]['ra'], 16) != site['site'] + 8 or int(after[1]['ra'], 16) != site['site'] + 8:
        raise ValueError('Live original call/return differs from source')
    if [int(x, 16) for x in before[1]['args'].split(',')] != site['args']:
        raise ValueError('Live transform arguments differ from original inline metadata')
    if before[2][:length] != data[begin - BASE:site['end'] - BASE]: raise ValueError('Live preimage differs from original bytes')
    for record, expected in [(before, 0), (after, site['marker'])]:
        if record[1]['marker_valid'] != '1' or int(record[1]['marker_address'], 16) != site['marker'] or int(record[1]['marker'], 16) != expected:
            raise ValueError('Live original marker transition differs')
    if before[2][:length] == after[2][:length]: raise ValueError('No actual original transformation observed')
    return after[2][:length], {'begin': begin, 'end': site['end'], 'site': site['site'], 'args': site['args'], 'runtime_status': 'two-fresh-live-transforms-not-executed',
        'decoded_sha256': hashlib.sha256(after[2][:length]).hexdigest(),
        'captures': [{'path': str(path), 'console_sha256': sha(Path(path) / 'A-console.jsonl'), 'run_sha256': sha(Path(path) / 'run.json'),
                      'client_id': proof[1]['clientId'], 'consistent_pairs': proof[3], 'records': [r[0] for r in proof[2]]} for path, proof in zip(captures, proofs)]}


def static_candidates(data, rows, catalog_path, expected_sha):
    catalog_path = Path(catalog_path)
    if sha(catalog_path) != expected_sha: raise ValueError('Reviewed static catalog fingerprint mismatch')
    catalog = json.loads(catalog_path.read_text())
    if catalog.get('source_sha256') != ARTIFACT_SHA or catalog.get('errors') or not catalog.get('passed'):
        raise ValueError('Invalid original static comparison catalog')
    result = {}
    for item in catalog['ranges']:
        begin, length = int(item['start'], 16), item['length']
        sites = [row for row in rows if row['begin'] == begin and not row['args'][3] & 1]
        if len(sites) != 1 or sites[0]['end'] - begin != length: raise ValueError('Static catalog range differs from original metadata')
        site = sites[0]
        if int(item['even']['site'], 16) != site['site'] or item['even']['seed'] != site['args'][2] or item['even']['mode'] != site['args'][3]:
            raise ValueError('Static candidate original inputs differ')
        source = catalog_path.parent / f'{begin:08x}.bin'
        decoded = source.read_bytes()
        if len(decoded) != length or sha(source) != item['derived_sha256']:
            raise ValueError('Static candidate bytes/fingerprint changed')
        original = data[begin - BASE:begin - BASE + length]
        if hashlib.sha256(original).hexdigest() != item['original_sha256']: raise ValueError('Static catalog original bytes differ')
        for offset in item['excluded_offsets']:
            if offset % 4 or not 0 <= offset <= length - 4 or original[offset:offset+4] != decoded[offset:offset+4]:
                raise ValueError('Original excluded instruction word changed')
        if not length: continue # Original marker-only helper still executes; no empty code is installed.
        if begin in result: raise ValueError('Duplicate static candidate')
        result[begin] = (decoded, {'begin': begin, 'end': begin + length, 'site': site['site'], 'args': site['args'],
            'runtime_status': 'unverified-static-candidate', 'decoded_sha256': item['derived_sha256'],
            'catalog_sha256': expected_sha, 'catalog_metadata': item})
    if len(result) != 63: raise ValueError('Reviewed static catalog must cover all nonempty visible ranges')
    return result


def prepare(bundle, artifact, compiler, variants, output, candidate_catalog=None, candidate_catalog_sha=None):
    bundle, artifact, compiler, output = map(Path, [bundle, artifact, compiler, output])
    if output.exists(): raise ValueError('Use a new variant output directory')
    manifest = json.loads((bundle / 'manifest.json').read_text())
    if not manifest.get('block_guard_count') or manifest.get('variants'):
        raise ValueError('Start from an original guarded overlay bundle')
    for name, expected in manifest['files_sha256'].items():
        if Path(name).name != name or sha(bundle / name) != expected: raise ValueError('Guarded overlay bundle changed')
    data = artifact.read_bytes(); rows, ranges = inventory(data)
    text_begin, text_end = text_bounds(data)
    if any(not BASE + text_begin <= begin - 0x14 <= begin <= end <= BASE + text_end for begin, end in ranges):
        raise ValueError('Protected code/marker outside original text')
    verified = {}
    for address, first, second in variants:
        begin = int(address, 16)
        if begin in verified: raise ValueError('Duplicate live variant')
        verified[begin] = live_variant(data, rows, begin, [first, second])
    if not verified: raise ValueError('At least one live-verified decoded variant is required')
    if candidate_catalog:
        for begin, candidate in static_candidates(data, rows, candidate_catalog, candidate_catalog_sha).items():
            if begin in verified:
                if candidate[0] != verified[begin][0]: raise ValueError('Static candidate differs from actual two-run observation')
            else: verified[begin] = candidate
    output.mkdir()
    for name in manifest['files_sha256']: shutil.copy2(bundle / name, output / name)
    header = (output / 'units.hpp').read_text()
    declarations, descriptors, added_sources, rejected = [], [], [], []
    all_labels = set()
    for name in manifest['compiled_sources']:
        if not name.startswith(PREFIX + '_unit_'): continue
        path = output / name; text = path.read_text()
        def protect(match):
            pc = int(match[1], 16); all_labels.add(pc)
            return match[0] + '\n    { const auto state = original_exec::guard_protected(c, 0x%08Xu); if (state == original_exec::CodeState::invalid) return; if (state == original_exec::CodeState::decoded) { c.pc = 0x%08Xu; [[clang::musttail]] return dispatch(c, 0u, depth); } }' % (pc, pc)
        text = re.sub(r'^L_([0-9A-F]{8}):$', protect, text, flags=re.M)
        text = text.replace('original_exec::guard_block(', 'original_exec::guard_original_block(')
        path.write_text('#include "code_variant.hpp"\n' + text)
    for begin, end in ranges:
        encrypted = data[begin - BASE:end - BASE]
        name = f'protected_{begin:08X}'
        words = lambda value: ','.join(f'0x{x:08X}u' for x in struct.unpack('<%dI' % (len(value) // 4), value))
        encrypted_ref = '{}'
        if encrypted:
            declarations.append(f'static const std::uint32_t {name}_encrypted[] = {{{words(encrypted)}}};')
            encrypted_ref = name + '_encrypted'
        decoded_ref, units_ref = '{}', '{}'
        if begin in verified:
            # An encrypted first word may be invalid code and have no original
            # entry. Its original incoming branch already dispatches; the
            # decoded range supplies its own verified entry. Exits still need
            # genuine unchanged original continuation entries.
            if end not in all_labels: raise ValueError('Protected range exit lacks an original translated entry')
            proof_original_entry = begin in all_labels
            decoded, proof = verified[begin]
            proof['original_begin_entry_present'] = proof_original_entry
            private = output / f'proof-{begin:08X}'; private.mkdir()
            source_bytes = private / 'observed.bin'; source_bytes.write_bytes(decoded)
            generated = private / 'generated'
            command = [str(compiler.resolve()), f'{begin:X}', str(source_bytes), str(generated), '--allow-sparse']
            result = subprocess.run(command, text=True, capture_output=True)
            (private / 'compiler.log').write_text(result.stdout + result.stderr)
            if result.returncode:
                if proof['runtime_status'] != 'unverified-static-candidate': raise ValueError('Original block compiler failed: ' + result.stderr)
                proof.update(runtime_status='rejected-static-candidate', compiler_error=result.stderr.strip(), command=command, compiler_sha256=sha(compiler))
                (private / 'proof.json').write_text(json.dumps(proof, indent=2) + '\n')
                rejected.append(proof); del verified[begin]
                descriptors.append('{0x%08Xu,0x%08Xu,0x%08Xu,%s,{},{},nullptr,nullptr}' % (begin, end, begin - 0x14, encrypted_ref))
                continue
            proof.update(compiler_sha256=sha(compiler), command=command)
            proof['analysis'] = json.loads((generated / 'analysis.json').read_text())
            header += '\n' + (generated / 'units.hpp').read_text()
            for path in sorted(generated.glob('exec_variant_*.cpp')):
                text = path.read_text()
                text = re.sub(r'^(L_([0-9A-F]{8}):)$', lambda m: m[1] + '\n    if (!original_exec::guard_decoded(c, 0x' + m[2] + 'u)) return;', text, flags=re.M)
                (output / path.name).write_text('#include "code_variant.hpp"\n' + text)
                added_sources.append(path.name)
            unit_table = one(r'const ps2::UnitInfo kUnits\[\] = \{.*?\};', (generated / 'table.cpp').read_text())[0]
            unit_table = unit_table.replace('kUnits', name + '_units')
            unit_table = re.sub(r'&?(exec_variant_[A-F0-9]+_(?:unit|entries)_[A-F0-9]+)', lambda m: m[0].replace(m[1], 'gen::' + m[1]), unit_table)
            declarations += [f'static const std::uint32_t {name}_decoded[] = {{{words(decoded)}}};', unit_table]
            decoded_ref, units_ref = name + '_decoded', name + '_units'
            (private / 'proof.json').write_text(json.dumps(proof, indent=2) + '\n')
        metadata = (json.dumps(verified[begin][1]['decoded_sha256']) + ',' + json.dumps(verified[begin][1]['runtime_status'])) if begin in verified else 'nullptr,nullptr'
        descriptors.append('{0x%08Xu,0x%08Xu,0x%08Xu,%s,%s,%s,%s}' % (begin, end, begin - 0x14, encrypted_ref, decoded_ref, units_ref, metadata))
    (output / 'units.hpp').write_text(header)
    profile = (output / 'overlay_profile.cpp').read_text()
    check_match = one(r'const std::uint32_t ' + PREFIX + r'_checks\[\] = \{(.*?)\};', profile)
    values = [int(v, 16) for v in re.findall(r'0x([0-9A-F]+)u', check_match[1])]
    pairs = list(zip(values[::2], values[1::2]))
    immutable = immutable_code_checks(data, pairs, ranges)
    mutable_data_checks = sum(not text_begin <= offset < text_end for offset, _ in pairs)
    nonzero = [pair for pair in immutable if pair[1]]
    if len(nonzero) < 32: raise ValueError('Insufficient immutable identity anchors')
    anchors = [nonzero[index * len(nonzero) // 32] for index in range(32)]
    check_decl = 'const std::uint32_t ' + PREFIX + '_checks[] = {' + ','.join('0x%08Xu,0x%08Xu' % pair for pair in immutable) + '};'
    profile = profile.replace(check_match[0], check_decl)
    profile = profile.replace(f'gen::{PREFIX}_checks, {len(pairs)}u,', f'gen::{PREFIX}_checks, {len(immutable)}u,')
    (output / 'overlay_profile.cpp').write_text(profile)
    range_code = '#include "units.hpp"\n#include "code_variant.hpp"\nnamespace original_exec {\n' + '\n'.join(declarations)
    range_code += '\nstatic const ProtectedRange ranges[] = {' + ',\n'.join(descriptors) + '};\nstd::span<const ProtectedRange> protected_ranges() { return ranges; }\n}\n'
    range_code += '\nnamespace original_exec {\nstatic const std::uint32_t identity_checks[] = {' + ','.join('0x%08Xu,0x%08Xu' % (offset + BASE, value) for offset, value in anchors) + '};\nstd::span<const std::uint32_t> protected_identity_checks() { return identity_checks; }\n}\n'
    range_code += '\nnamespace original_exec { std::pair<std::uint32_t, std::uint32_t> protected_text_bounds() { return {0x%08Xu,0x%08Xu}; } }\n' % (BASE + text_begin, BASE + text_end)
    nontext = [(offset + BASE, value) for offset, value in pairs if not text_begin <= offset < text_end]
    range_code += '\nnamespace original_exec {\nstatic const std::uint32_t nontext_checks[] = {' + ','.join('0x%08Xu,0x%08Xu' % pair for pair in nontext) + '};\nstd::span<const std::uint32_t> excluded_nontext_checks() { return nontext_checks; }\n}\n'
    (output / 'protected_ranges.cpp').write_text(range_code)
    manifest.update(status='prepared-not-built', created_utc=datetime.datetime.now(datetime.timezone.utc).isoformat(),
        variants=True, protected_ranges=len(ranges), transform_sites=len(rows), immutable_check_count=len(immutable),
        immutable_text_offsets=[text_begin, text_end], excluded_nontext_checks=mutable_data_checks,
        moved_identity_checks=len(pairs)-len(immutable), live_variants=[p[1] for p in verified.values() if p[1]['runtime_status'].startswith('two-fresh')],
        inline_identity_anchors=[hex(offset + BASE) for offset, value in anchors],
        static_candidates=[p[1] for p in verified.values() if p[1]['runtime_status']=='unverified-static-candidate'], rejected_candidates=rejected,
        compiled_sources=manifest['compiled_sources'] + added_sources + ['protected_ranges.cpp'],
        source_bundle_manifest_sha256=sha(bundle / 'manifest.json'), preparer_sha256=sha(__file__))
    manifest['files_sha256'] = {path.name: sha(path) for path in output.iterdir() if path.is_file()}
    (output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['bundle', 'artifact', 'compiler', 'output']: parser.add_argument('--' + name, type=Path, required=True)
    parser.add_argument('--variant', nargs=3, action='append', required=True, metavar=('HEX_BEGIN', 'FIRST_CAPTURE', 'SECOND_CAPTURE'))
    parser.add_argument('--candidate-catalog', type=Path)
    parser.add_argument('--candidate-catalog-sha256')
    args = parser.parse_args()
    print(json.dumps(prepare(args.bundle, args.artifact, args.compiler, args.variant, args.output, args.candidate_catalog, args.candidate_catalog_sha256), indent=2))


if __name__ == '__main__': main()
