#!/usr/bin/env python3
"""Verify the two observed utility entries against original bytes and dispatch."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import struct

EXPECTED = '8109d5bb29a16fac1f417098ac551364d232df36feb1d7e9fa8134c81b8b6cec'
WORDS = {
    0x1AC77C: 0x8F82A728, 0x1AC788: 0x8C420110,
    0x1AC78C: 0x0040F809, 0x1AC790: 0x24A5A700,
    0x1B2DA0: 0x27BDFFF0, 0x1B2DA4: 0xFFBF0000,
    0x1B2DA8: 0x0C06CD20, 0x1B2DAC: 0xAC850000,
    0x1B4960: 0x27BDFF90, 0x1B4964: 0xFFBF0050,
    0x1B4968: 0x7FB40040, 0x1B496C: 0x7FB30030,
}
ENTRIES = (0x1B2DA0, 0x1B4960)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--elf', type=Path, required=True)
    parser.add_argument('--generated', type=Path, required=True)
    parser.add_argument('--baseline', type=Path)
    args = parser.parse_args()
    data = args.elf.read_bytes()
    if hashlib.sha256(data).hexdigest() != EXPECTED:
        parser.error('Unsupported original utility ELF')
    phoff = struct.unpack_from('<I', data, 28)[0]
    size, count = struct.unpack_from('<HH', data, 42)
    segments = [struct.unpack_from('<8I', data, phoff + i * size) for i in range(count)]
    checked = []
    for address, expected in WORDS.items():
        segment = next(s for s in segments if s[0] == 1 and s[2] <= address < s[2] + s[4])
        offset = segment[1] + address - segment[2]
        actual = struct.unpack_from('<I', data, offset)[0]
        if actual != expected or not segment[6] & 1:
            raise ValueError(f'Original executable word mismatch at {address:#x}')
        checked.append({'address': hex(address), 'file_offset': offset, 'word': hex(actual)})

    def entry(directory, address):
        unit, slot = divmod(address - 0x100000, 0x4000)
        text = (directory / f'unit_{unit:04X}.cpp').read_text()
        body = re.search(r'entries_[0-9A-F]+\[4096\] = \{(.*?)\};', text, re.S).group(1)
        table = [int(value) for value in re.findall(r'\d+', body)]
        if len(table) != 4096:
            raise ValueError('Unexpected dispatch table length')
        return table[slot // 4]

    dispatch = []
    for address in ENTRIES:
        after = entry(args.generated, address)
        before = entry(args.baseline, address) if args.baseline else None
        if not after or (args.baseline and before):
            raise ValueError(f'Expected missing-to-translated entry at {address:#x}')
        dispatch.append({'address': hex(address), 'baseline_token': before, 'seeded_token': after})
    print(json.dumps({'target_sha256': EXPECTED, 'original_words': checked,
                      'dispatch': dispatch, 'passed': True,
                      'scope': 'Original-byte and dispatch coverage only; runtime success is separate'}, indent=2))


if __name__ == '__main__':
    main()
