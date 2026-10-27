#!/usr/bin/env python3
"""Extract fixed-address MWo3 code images from an AFS file on a PS2 disc.

Usage: python3 scripts/mwo.py games/NAME/disc.iso AFS_DATA.AFS games/NAME
Pass --name pl1a_0.bin (repeatable) to prepare only selected modules.
Uses the existing --overlays recompiler support; game data stays under games/.
"""

import argparse
import binascii
from pathlib import Path
import struct

import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[2] / 'vendor/ps2-web-recomp/scripts'))
from disc import Image


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('iso')
    parser.add_argument('archive')
    parser.add_argument('game', type=Path)
    parser.add_argument('--name', action='append')
    args = parser.parse_args()
    image = Image(args.iso)
    entry = image.find(args.archive)
    if entry is None:
        parser.error('archive not found on disc')
    archive_at, archive_size = entry[2] * 2048, entry[3]
    image.file.seek(archive_at)
    magic, count = struct.unpack('<4sI', image.file.read(8))
    if magic != b'AFS\0' or count * 8 + 8 > archive_size:
        parser.error('invalid AFS table')
    table = image.file.read(count * 8)
    out = args.game / 'mwo-overlays'
    out.mkdir(parents=True, exist_ok=True)
    entries = set()
    modules = []
    for index in range(count):
        offset, size = struct.unpack_from('<II', table, index * 8)
        if offset + size > archive_size:
            parser.error('AFS entry extends past archive')
        image.file.seek(archive_at + offset)
        header = image.file.read(min(size, 128))
        if len(header) < 128 or header[:4] != b'MWo3':
            continue
        _, base, text_size, data_size, bss_size, end, _ = struct.unpack_from('<7I', header, 4)
        name = header[32:64].split(b'\0', 1)[0].decode('ascii')
        if args.name and name not in args.name:
            continue
        if size != 0x40 + text_size + data_size or base + size != end or base + size + bss_size > 32 << 20:
            parser.error('unexpected MWo3 layout: ' + name)
        image.file.seek(archive_at + offset)
        data = image.file.read(size)
        if len(data) != size:
            parser.error('truncated module: ' + name)
        stem = '%08X_MWO_%08X' % (base, binascii.crc32(data) & 0xffffffff)
        target = out / (stem + '.bin')
        if not target.exists() or target.read_bytes() != data:
            target.write_bytes(data)
        # The game's loader calls the initialization routine at image + 0x80.
        # Data-only modules have a tiny shared initializer at this address too.
        entries.add(stem + ':80')
        modules.append('%s\t%08X\t%d\t%s' % (name, base, size, stem))
    entry_path = args.game / 'mwo-entries.txt'
    entry_path.write_text(''.join(line + '\n' for line in sorted(entries)))
    (args.game / 'mwo-modules.tsv').write_text('name\tbase\tsize\toverlay\n' + '\n'.join(modules) + '\n')
    image.file.close()
    print('%d MWo3 modules in %s; entries in %s' % (len(modules), out, entry_path))


if __name__ == '__main__':
    main()
