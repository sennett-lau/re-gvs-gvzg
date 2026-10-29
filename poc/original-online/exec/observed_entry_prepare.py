#!/usr/bin/env python3
"""Prepare an original text seed from a fingerprinted live indirect-call miss."""
import argparse
import datetime
import json
from pathlib import Path
import re
import struct

from entry_prepare import BASE, dispatch_entries
from overlay_prepare import ARTIFACT_SHA, NAME, PREFIX, one, sha
from variant_prepare import FIRST_HELPER, SECOND_HELPER, inventory, inline_data_spans, text_bounds


RECORD = re.compile(r'\[original-exec-code\] pc=([0-9A-F]{8}) ra=([0-9A-F]{8}) '
                    r'module=(\S+) entry=(\d+) valid=(\d+) words=([0-9A-F,]+)')


def observation(lines, target):
    matches = []
    for index, row in enumerate(lines):
        match = RECORD.fullmatch(row['text'])
        if match and int(match[1], 16) == target:
            matches.append((index, row, match))
    if len(matches) != 1: raise ValueError('Expected one bounded target observation')
    index, row, match = matches[0]
    pc, ra = int(match[1], 16), int(match[2], 16)
    if match[3] != NAME or match[4] != '0' or match[5] != '1':
        raise ValueError('Observed target is not a valid missing entry in the original module')
    words = [int(word, 16) for word in match[6].split(',')]
    if len(words) != 16: raise ValueError('Expected all sixteen observed target words')
    following = lines[index + 1:index + 20]
    missing = f'[ee] no translated code at 0x{pc:08X} (ra 0x{ra:08X})'
    halted = f'[ee] halted: missing code at 0x{pc:08X} (ra 0x{ra:08X})'
    if not following or following[0]['text'] != missing or not any(r['text'] == halted for r in following):
        raise ValueError('Observation lacks its actual missing-code failure')
    registers = {}
    for item in following:
        registers_match = re.fullmatch(r'\[ee\]   r(\d+) +([0-9A-F]{8}) ([0-9A-F]{8}) ([0-9A-F]{8}) ([0-9A-F]{8})', item['text'])
        if registers_match:
            start = int(registers_match[1])
            for offset in range(4):
                register = start + offset
                if register in registers: raise ValueError('Repeated failure register')
                registers[register] = int(registers_match[offset + 2], 16)
    if set(registers) != set(range(1, 33)) or registers[31] != ra:
        raise ValueError('Missing or inconsistent failure register evidence')
    return {'pc': pc, 'ra': ra, 'words': words, 'registers': registers,
            'line': index + 1, 'record': row}


def validate_target(original, manifest, entries, checks, observed, ranges):
    begin, end = text_bounds(original)
    if manifest['immutable_text_offsets'] != [begin, end]:
        raise ValueError('Recorded original text bounds differ')
    if manifest.get('protected_ranges') != len(ranges):
        raise ValueError('Incomplete protected range inventory')
    def plain(address, size):
        if address & 3 or not BASE + begin <= address < address + size <= BASE + end:
            raise ValueError('Observed target/caller outside original text')
        spans = list(manifest['inline_data_spans']) + [(a - 0x14, a - 0x10) for a, _ in ranges] + list(ranges)
        if any(address < stop and start < address + size for start, stop in spans):
            raise ValueError('Observed target/caller overlaps protected code, marker or inline data')
    pc, ra = observed['pc'], observed['ra']
    plain(pc, 64); plain(ra - 8, 8)
    if pc in entries: raise ValueError('Observed target already has a dispatch entry')
    if tuple(observed['words']) != struct.unpack_from('<16I', original, pc - BASE):
        raise ValueError('Observed target words differ from original bytes')
    call, delay = struct.unpack_from('<II', original, ra - 8 - BASE)
    rs = call >> 21 & 31
    if call & 0xFC1FFFFF != 0x0000F809 or not 1 <= rs <= 30:
        raise ValueError('Original caller is not jalr ra, register')
    if observed['registers'][rs] != pc:
        raise ValueError('Captured indirect-call register differs from target')
    if checks.get(ra - 8 - BASE) != call or checks.get(ra - 4 - BASE) != delay:
        raise ValueError('Original caller lacks immutable word guards')
    # A delay slot that changes the target register needs additional provenance.
    # Admit only the original no-op here; do not infer pre-delay register values.
    if delay != 0: raise ValueError('Nontrivial indirect-call delay slot needs separate evidence')
    return {'target': pc, 'return_address': ra, 'callsite': ra - 8,
            'call_word': call, 'delay_word': delay, 'target_register': rs,
            'observed_words': observed['words'], 'observed_utc': observed['record']['utc']}


def prepare(bundle, expected_sha, artifact, prior_entries, capture, build_info, target, output):
    bundle, artifact, prior_entries, capture, build_info, output = map(Path,
        [bundle, artifact, prior_entries, capture, build_info, output])
    if output.exists(): raise ValueError('Use a new observed-entry preparation directory')
    if sha(bundle / 'manifest.json') != expected_sha: raise ValueError('Reviewed bundle manifest changed')
    manifest = json.loads((bundle / 'manifest.json').read_text())
    for name, digest in manifest['files_sha256'].items():
        if Path(name).name != name or sha(bundle / name) != digest: raise ValueError('Variant source bundle changed')
    if sha(artifact) != ARTIFACT_SHA: raise ValueError('Original artifact fingerprint mismatch')
    run = json.loads((capture / 'run.json').read_text())
    site = json.loads((capture / 'build-info.json').read_text())
    build = json.loads(build_info.read_text())
    if run['build_info_sha256'] != sha(capture / 'build-info.json') or site['modules']['game']['build_info_sha256'] != sha(build_info):
        raise ValueError('Capture and game build fingerprints differ')
    if build['image'] != 'game' or build['status'] != 'built-not-runtime-tested' or build['overlay'] != manifest:
        raise ValueError('Captured game does not contain the reviewed overlay')
    lines = [json.loads(line) for line in (capture / 'A-console.jsonl').read_text().splitlines()]
    observed = observation(lines, target)
    original = artifact.read_bytes()
    table = one(r'const std::uint32_t ' + PREFIX + r'_checks\[\] = \{(.*?)\};',
                (bundle / 'overlay_profile.cpp').read_text())[1]
    values = [int(value, 16) for value in re.findall(r'0x([0-9A-F]+)u', table)]
    if len(values) % 2 or values[::2] != sorted(set(values[::2])):
        raise ValueError('Invalid immutable check table')
    checks = dict(zip(values[::2], values[1::2]))
    for offset, word in checks.items():
        if offset & 3 or not 0 <= offset <= len(original) - 4 or struct.unpack_from('<I', original, offset)[0] != word:
            raise ValueError('Immutable guard differs from original bytes')
    rows, ranges = inventory(original, FIRST_HELPER)
    more_rows, more_ranges = inventory(original, SECOND_HELPER)
    rows += more_rows; ranges = sorted(set(ranges + more_ranges))
    _, spans = inline_data_spans(original, rows, ranges)
    if [list(span) for span in spans] != manifest['inline_data_spans']:
        raise ValueError('Original inline data inventory differs')
    proof = validate_target(original, manifest, dispatch_entries(bundle), checks, observed, ranges)
    old = prior_entries.read_text().splitlines()
    seed = f'{NAME}:{target - BASE:x}'
    if seed in old: raise ValueError('Observed entry already exists in prior seed list')
    new = sorted(set(old + [seed]))
    output.mkdir(parents=True)
    (output / 'entries.txt').write_text('\n'.join(new) + '\n')
    report = {'created_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'scope': 'One observed original indirect-call entry; no guest execution or registry replacement',
        'bundle_manifest_sha256': expected_sha, 'artifact_sha256': ARTIFACT_SHA,
        'capture': str(capture), 'capture_files_sha256': {name: sha(capture / name) for name in ['run.json', 'build-info.json', 'A-console.jsonl']},
        'game_build_info_sha256': sha(build_info), 'prior_entries_sha256': sha(prior_entries),
        'entries_sha256': sha(output / 'entries.txt'), 'added_seed_count': 1, 'seed': seed,
        'proof': proof, 'observation': observed['record'], 'observation_line': observed['line'],
        'preparer_sha256': sha(__file__),
        'limits': ['Original source bytes and a live miss justify a seed, not successful execution',
                   'Regeneration must preserve all previous entries, guards and separate images']}
    (output / 'entry-preparation.json').write_text(json.dumps(report, indent=2) + '\n')
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['bundle', 'artifact', 'prior-entries', 'capture', 'build-info', 'output']:
        parser.add_argument('--' + name, type=Path, required=True)
    parser.add_argument('--bundle-sha256', required=True)
    parser.add_argument('--target', type=lambda value: int(value, 16), required=True)
    args = parser.parse_args()
    print(json.dumps(prepare(args.bundle, args.bundle_sha256, args.artifact, args.prior_entries,
        args.capture, args.build_info, args.target, args.output), indent=2))


if __name__ == '__main__': main()
