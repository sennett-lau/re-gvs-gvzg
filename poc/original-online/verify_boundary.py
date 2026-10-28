#!/usr/bin/env python3
"""Verify selected Online Mode boundaries against original, caller-supplied bytes."""
import argparse
import hashlib
import json
import struct
from pathlib import Path

ELF_SHA = '294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6'
IRX_SHA = '7cdd91a27472e43e055c4636ad2c55be648daaac79edbc57e172aecb64658cc7'


class Image:
    def __init__(self, path, expected):
        self.data = Path(path).read_bytes()
        self.sha256 = hashlib.sha256(self.data).hexdigest()
        if self.sha256 != expected:
            raise ValueError('Unsupported input fingerprint: ' + Path(path).name)
        offset = struct.unpack_from('<I', self.data, 28)[0]
        size, count = struct.unpack_from('<HH', self.data, 42)
        self.segments = [struct.unpack_from('<8I', self.data, offset + i * size) for i in range(count)]
        self.checks = []

    def offset(self, address, size=4):
        for kind, offset, va, _, filesz, *_ in self.segments:
            if kind == 1 and va <= address and address + size <= va + filesz:
                return offset + address - va
        raise ValueError('Unmapped address: ' + hex(address))

    def word(self, address):
        return struct.unpack_from('<I', self.data, self.offset(address))[0]

    def require(self, address, expected, meaning):
        actual = self.word(address)
        if actual != expected:
            raise ValueError(f'{address:08x}: {actual:08x} != {expected:08x}')
        self.checks.append({'address': hex(address), 'file_offset': hex(self.offset(address)),
                            'word': f'{actual:08x}', 'meaning': meaning})


def verify(elf_path, irx_path):
    ee, iop = Image(elf_path, ELF_SHA), Image(irx_path, IRX_SHA)
    for address, word, meaning in [
        (0x211180, 0x24020007, 'Network Battle returns mode 7'),
        (0x4AE0DC, 0x306720, 'Top-level mode table entry 7'),
        (0x306758, 0x0C0C1AA4, 'mode 7 calls initializer 0x306A90'),
        (0x5EB7D8, 0x306AC0, 'initializer stage 0'),
        (0x5EB7DC, 0x306BD0, 'initializer stage 1'),
        (0x306B64, 0x0C0DA290, 'reset connection state at 0x368A40'),
        (0x306BEC, 0x0C0DA2A0, 'run connection dispatcher 0x368A80'),
        (0x6080B0, 0x369870, 'connection dispatcher state 0'),
        (0x6080B4, 0x3699C0, 'connection dispatcher state 1'),
        (0x5EB85C, 0x307A20, 'mode 7 battle stage dispatch'),
        (0x5EB880, 0x307E30, 'battle stage substate 4'),
        (0x307E38, 0x0C0AC67C, 'call common battle engine 0x2B19F0'),
        (0x30E2D4, 0x3C020127, 'AVE wrapper bind service high half'),
        (0x30E2E4, 0x34450030, 'AVE wrapper bind service low half, delay slot'),
        (0x30E2E0, 0x0C041D36, 'call SifBindRpc 0x1074D8'),
        (0x30E3F8, 0x24E72C80, 'RPC staging buffer 0xC22C80'),
        (0x30E420, 0x84222C98, 'read signed 16-bit result at buffer +24'),
        (0x33734C, 0x3C020127, 'module control bind high half'),
        (0x337358, 0x34450010, 'module control bind low half, delay slot'),
        (0x107040, 0x27BDFFC0, 'EE RPC-end handler entry before original stack change'),
        (0x1075FC, 0xDFBF0060, 'bind return before restoring saved registers'),
        (0x10786C, 0xDFBF00B0, 'call return before restoring saved registers'),
        (0x369AC0, 0x0C0D8DB0, 'state 1 calls confirm input helper'),
        (0x369AC8, 0x1040000D, 'confirm zero branch; observed v0 is still intact'),
        (0x369B00, 0x0C0D8DD8, 'state 1 calls cancel input helper'),
        (0x369B08, 0x1040003D, 'cancel zero branch; observed v0 is still intact'),
        (0x369B24, 0x2402000A, 'cancel selects substate 10'),
        (0x369B30, 0xA0221361, 'store cancellation substate at CD1361'),
        (0x369BC8, 0x0C0D8E1C, 'cancellation polls activity predicate'),
        (0x369BD0, 0x1440000B, 'nonzero activity continues waiting'),
        (0x363870, 0x8F82A814, 'activity reads gp-22508, not RPC status'),
        (0x363878, 0x0002102B, 'activity normalizes the word to a boolean'),
        (0x3636D0, 0x80229148, 'input gate at 0x839148'),
        (0x2276E0, 0x94222544, 'player-one input halfword at 0x6F2544'),
        (0x22770C, 0x30420020, 'confirm input mask 0x20'),
        (0x22778C, 0x30420040, 'cancel input mask 0x40'),
        (0x36983C, 0x9022136E, 'renderer control byte at 0xCD136E'),
        (0x369840, 0x30420002, 'renderer suppression mask 2'),
        (0x369844, 0x14400004, 'set mask suppresses renderer call'),
        (0x36984C, 0x0C0D8E18, 'otherwise call renderer wrapper 0x363860'),
        (0x363860, 0x080D92C4, 'tail jump to original renderer 0x364B10'),
        (0x364B10, 0x27BDFFD0, 'original renderer entry'),
        (0x364D70, 0x3C0100CD, 'first queue-consumption block entry'),
        (0x365048, 0x3C0100CD, 'second queue-consumption block entry'),
    ]: ee.require(address, word, meaning)
    for address, word, meaning in [
        (0x1734, 0x3C050127, 'RPC registration service high half'),
        (0x1738, 0x34A50030, 'RPC registration service low half'),
        (0x1740, 0x24C613E8, 'RPC dispatcher function offset'),
        (0x1748, 0x24E71C38, 'RPC receive buffer offset'),
        (0x1754, 0x0C00065A, 'call sifcmd import stub 0x1968'),
        (0x1968, 0x03E00008, 'sifcmd import stub return instruction'),
        (0x196C, 0x24000011, 'sifcmd ordinal 17: RPC registration'),
        (0x13F8, 0x2C620042, 'unsigned RPC method must be below 66'),
        (0x1410, 0x8C221AD0, 'RPC method jump table at offset 0x1AD0'),
        (0x1AD4, 0x1430, 'method 1 selects branch 0x1430'),
        (0x1430, 0x0C000073, 'method 1 calls handler 0x1CC'),
        (0x1E4, 0x8E02001C, 'method 1 reads payload word at +28'),
        (0x1E8, 0x24044105, 'method 1 passes opcode 0x4105 to avetcp'),
        (0x204, 0x0C000639, 'method 1 calls avetcp import stub 0x18E4'),
        (0x18E8, 0x24000004, 'avetcp import ordinal 4'),
        (0x214, 0xAE020018, 'method 1 writes sign-extended status at +24'),
    ]: iop.require(address, word, meaning)
    dispatch = []
    for method in range(66):
        branch = iop.word(0x1AD0 + 4 * method)
        instruction = iop.word(branch)
        dispatch.append({'method': method, 'branch_offset': hex(branch),
            'handler_offset': hex((instruction & 0x3FFFFFF) << 2) if instruction >> 26 == 3 else None})
    return {'scope': 'Static original-byte verification; no guest execution or network connection',
        'elf_sha256': ee.sha256, 'avewrapm_irx_sha256': iop.sha256,
        'ee_checks': ee.checks, 'iop_checks': iop.checks, 'avewrapm_dispatch': dispatch,
        'failures': 0, 'limitations': [
            'IOP addresses are module-relative, before relocation.',
            'Only AVEWRAPM was inspected; Ethernet AVEWRAPE is not assumed identical.',
            'The complete wire protocol, authentication, battle synchronization and service 0x01270010 remain unresolved.',
            'Method numbers and AVE opcodes are observed; API semantic names are not inferred from numbers.',
            'REA rejected the IRX type in its Ghidra lane; these are Python byte checks, not decompiler Evidence.']}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--elf', type=Path, required=True)
    parser.add_argument('--irx', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    result = verify(args.elf, args.irx)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({'ee_checks': len(result['ee_checks']), 'iop_checks': len(result['iop_checks']),
                      'dispatch_entries': len(result['avewrapm_dispatch']), 'failures': 0}))
