#!/usr/bin/env python3
"""Seed only missing original text entries reached from guarded decoded code."""
import argparse
import datetime
import hashlib
import json
from pathlib import Path
import re
import struct

from overlay_prepare import ARTIFACT_SHA, NAME, PREFIX, one, sha

BASE = 0x0117F000


def unit_entries(text, symbol, base, size):
    table = one(r'const std::uint16_t ' + symbol + r'\[(\d+)\] = \{(.*?)\};', text)
    slots = [int(value) for value in re.findall(r'\d+', table[2])]
    if len(slots) != int(table[1]) or len(slots) * 4 != size:
        raise ValueError('Original entry table extent differs from UnitInfo')
    cases = [(int(entry), int(pc, 16)) for entry, pc in re.findall(r'case (\d+)u: goto L_([0-9A-F]{8});', text)]
    expected = [(entry, base + offset * 4) for offset, entry in enumerate(slots) if entry]
    if sorted(cases) != sorted(expected) or len({entry for entry, _ in expected}) != len(expected):
        raise ValueError('Original dispatch table/case mapping changed')
    return {pc for _, pc in expected}


def dispatch_entries(bundle):
    profile = (bundle / 'overlay_profile.cpp').read_text()
    table = one(r'const ps2::UnitInfo ' + PREFIX + r'_units\[\] = \{(.*?)\};', profile)[1]
    units = re.findall(r'\{0x([0-9A-F]+)u, (\d+)u, &' + PREFIX + r'_unit_([0-9A-F]+), ' + PREFIX + r'_entries_\3\}', table)
    if not units: raise ValueError('Original UnitInfo table is absent')
    entries = set()
    for offset, size, number in units:
        base = (BASE + int(offset, 16)) & 0xFFFFFFFF
        text = (bundle / f'{PREFIX}_unit_{number}.cpp').read_text()
        entries.update(unit_entries(text, f'{PREFIX}_entries_{number}', base, int(size)))
    return entries


def classify_edges(proofs, entries, text_begin, text_end, image_end, inline_spans=()):
    ranges = [(row['begin'], row['end']) for row in proofs]
    edges, indirect = [], []
    for row in proofs:
        audit = row['analysis'].get('flow_audit')
        if audit is None: raise ValueError('Decoded compiler lacks bounded flow audit')
        if audit['untranslated_reachable'] or audit['unsupported_delay_slots']:
            raise ValueError('Reachable decoded flow has a translation gap or unsupported delay slot')
        indirect += [{'range': row['begin'], 'pc': pc} for pc in audit['indirect_transfers']]
        for edge in audit['external_edges']:
            pc, target = edge['pc'], edge['target']
            if pc not in audit['instructions'] or not row['begin'] <= pc < row['end'] or (pc | target) & 3:
                raise ValueError('Invalid decoded direct-edge provenance')
            if any(a <= target < b or target == a - 0x14 for a, b in ranges):
                raise ValueError('Cross-range protected target requires its own entry proof')
            if any(a <= target < b for a, b in inline_spans):
                raise ValueError('Decoded direct target points into original inline data')
            if BASE <= target < image_end and not text_begin <= target < text_end:
                raise ValueError('Decoded direct target points into original nontext data')
            if not 0 <= target < 0x2000000: raise ValueError('Decoded direct target is outside EE RAM')
            state = ('present' if target in entries else 'missing') if text_begin <= target < text_end else 'external-image'
            edges.append(dict(edge, range=row['begin'], coverage=state))
    missing = sorted({edge['target'] for edge in edges if edge['coverage'] == 'missing'})
    return {'original_text_complete': not missing, 'missing_original_targets': missing,
            'original_targets': sorted({edge['target'] for edge in edges if edge['coverage'] != 'external-image'}),
            'external_image_targets': sorted({edge['target'] for edge in edges if edge['coverage'] == 'external-image'}),
            'edges': edges, 'unresolved_indirect_transfers': indirect,
            'limit': 'Static direct-edge coverage only; indirect transfers and other executable images retain separate runtime requirements.'}


def prepare(bundle, expected_sha, artifact, prior_entries, output):
    bundle, artifact, prior_entries, output = map(Path, [bundle, artifact, prior_entries, output])
    if output.exists(): raise ValueError('Use a new entry preparation directory')
    if sha(bundle / 'manifest.json') != expected_sha: raise ValueError('Reviewed variant manifest changed')
    manifest = json.loads((bundle / 'manifest.json').read_text())
    for name, digest in manifest['files_sha256'].items():
        if Path(name).name != name or sha(bundle / name) != digest: raise ValueError('Variant source bundle changed')
    if sha(artifact) != ARTIFACT_SHA: raise ValueError('Original artifact fingerprint mismatch')
    original = artifact.read_bytes()
    proofs = manifest['live_variants'] + manifest['static_candidates']
    for row in proofs:
        decoded = (bundle / f"proof-{row['begin']:08X}" / 'observed.bin').read_bytes()
        if hashlib.sha256(decoded).hexdigest() != row['decoded_sha256'] or len(decoded) != row['end'] - row['begin']:
            raise ValueError('Decoded audit bytes changed')
        for edge in row['analysis']['flow_audit']['external_edges']:
            at = edge['pc'] - row['begin']
            if not 0 <= at <= len(decoded) - 4 or struct.unpack_from('<I', decoded, at)[0] != edge['word']:
                raise ValueError('Decoded direct-edge word differs from its source')
    coverage = manifest['direct_entry_coverage']
    bounds = [BASE + offset for offset in manifest['immutable_text_offsets']]
    verified = classify_edges(proofs, dispatch_entries(bundle), *bounds, BASE + len(original), manifest.get('inline_data_spans', []))
    if verified != coverage: raise ValueError('Direct-edge dispatch coverage changed')
    missing = coverage['missing_original_targets']
    if missing != sorted(set(missing)) or not set(missing) <= set(verified['original_targets']):
        raise ValueError('Missing entries are not original reachable targets')
    old = prior_entries.read_text().splitlines()
    additions = [f'{NAME}:{target - BASE:x}' for target in missing]
    new = sorted(set(old + additions))
    output.mkdir(parents=True)
    (output / 'entries.txt').write_text('\n'.join(new) + '\n')
    report = {'created_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
              'scope': 'Static original DNAS text seed preparation; no guest execution or other registry replacement',
              'bundle_manifest_sha256': expected_sha, 'artifact_sha256': ARTIFACT_SHA,
              'prior_entries_sha256': sha(prior_entries), 'entries_sha256': sha(output / 'entries.txt'),
              'added_seed_count': len(set(new) - set(old)),
              'seeds': [{'target': target, 'word': struct.unpack_from('<I', original, target - BASE)[0],
                         'edges': [edge for edge in coverage['edges'] if edge['target'] == target]} for target in missing],
              'coverage': coverage, 'preparer_sha256': sha(__file__)}
    (output / 'entry-preparation.json').write_text(json.dumps(report, indent=2) + '\n')
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['bundle', 'artifact', 'prior-entries', 'output']: parser.add_argument('--' + name, type=Path, required=True)
    parser.add_argument('--bundle-sha256', required=True)
    args = parser.parse_args()
    print(json.dumps(prepare(args.bundle, args.bundle_sha256, args.artifact, args.prior_entries, args.output), indent=2))


if __name__ == '__main__': main()
