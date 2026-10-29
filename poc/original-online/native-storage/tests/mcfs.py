"""Independent read-only reader for a raw 8 MB PS2 memory-card image (528-byte pages with spare area).

It reads the superblock, FAT and directory entries directly from the image, without the runtime or
any card driver, so a file written through the original driver can be checked separately.
"""
import hashlib
import json
import struct
import sys
from pathlib import Path

RAW_PAGE, PAGE = 528, 512


class Card:
    def __init__(self, data):
        self.data = data
        sb = self.page(0) + self.page(1)
        if not sb.startswith(b'Sony PS2 Memory Card Format '):
            raise ValueError('not a formatted PS2 card image')
        (self.page_len, self.pages_per_cluster, self.pages_per_block, _, self.clusters, self.alloc_offset,
         self.alloc_end, self.root, self.backup1, self.backup2) = struct.unpack_from('<HHHHIIIIII', sb, 40)
        if self.page_len != PAGE or self.pages_per_cluster != 2:
            raise ValueError('unsupported card geometry')
        self.ifc = [c for c in struct.unpack_from('<32I', sb, 80) if c]
        self.cluster_size = self.page_len * self.pages_per_cluster

    def page(self, n):
        return self.data[n * RAW_PAGE:n * RAW_PAGE + PAGE]

    def cluster(self, n):
        return b''.join(self.page(n * self.pages_per_cluster + i) for i in range(self.pages_per_cluster))

    def fat(self, n):
        per = self.cluster_size // 4
        fat_index, entry = divmod(n, per)
        indirect_index, slot = divmod(fat_index, per)
        indirect = self.cluster(self.ifc[indirect_index])
        fat_cluster = struct.unpack_from('<I', indirect, slot * 4)[0]
        return struct.unpack_from('<I', self.cluster(fat_cluster), entry * 4)[0]

    def chain(self, first):
        n, seen = first, set()
        while True:
            if n in seen:
                raise ValueError('FAT loop')
            seen.add(n)
            yield n
            value = self.fat(n)
            if value == 0xFFFFFFFF:
                return
            if not value & 0x80000000:
                raise ValueError(f'unallocated cluster {n} in chain')
            n = value & 0x7FFFFFFF

    def read_chain(self, first, length):
        out = b''.join(self.cluster(self.alloc_offset + n) for n in self.chain(first))
        return out[:length]

    @staticmethod
    def entry(raw):
        mode, _, length = struct.unpack_from('<HHI', raw, 0)
        cluster, parent_entry = struct.unpack_from('<II', raw, 16)
        name = raw[64:96].split(b'\0')[0].decode('latin1')
        return {'mode': mode, 'length': length, 'cluster': cluster, 'name': name, 'created': raw[8:16].hex(), 'modified': raw[24:32].hex()}

    def directory(self, cluster, count=None):
        # A subdirectory's entry count is stored in its parent entry; the root's in its "." entry.
        if count is None:
            count = self.entry(self.read_chain(cluster, 512))['length']
        raw = self.read_chain(cluster, count * 512)
        return [self.entry(raw[i * 512:(i + 1) * 512]) for i in range(count)]

    def walk(self, cluster=None, count=None, prefix=''):
        for e in self.directory(self.root if cluster is None else cluster, count):
            if e['name'] in ('.', '..') or not e['mode'] & 0x8000:
                continue
            path = f'{prefix}/{e["name"]}'
            if e['mode'] & 0x20:
                yield path, e, None
                yield from self.walk(e['cluster'], e['length'], path)
            else:
                yield path, e, self.read_chain(e['cluster'], e['length'])


def listing(image):
    card = Card(Path(image).read_bytes())
    out = {}
    for path, e, content in card.walk():
        item = {'mode': hex(e['mode']), 'length': e['length']}
        if content is not None:
            item['sha256'] = hashlib.sha256(content).hexdigest()
        out[path] = item
    return out


if __name__ == '__main__':
    print(json.dumps(listing(sys.argv[1]), indent=1, sort_keys=True))
