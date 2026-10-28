#!/usr/bin/env python3
"""Verify the observed network-editor handoff against private original bytes."""
import argparse
import hashlib
import json
from pathlib import Path
import struct

from verify_boundary import Image, ELF_SHA

OVERLAY_SHA = '5be579873c2ecad74307083d7449b61a70166bd55cff8c4ea83ff73b4616d2bf'
TARGET_SHA = '8109d5bb29a16fac1f417098ac551364d232df36feb1d7e9fa8134c81b8b6cec'


def verify(elf, overlay, target):
    main = Image(elf, ELF_SHA)
    helper = Image(target, TARGET_SHA)
    data = Path(overlay).read_bytes()
    if hashlib.sha256(data).hexdigest() != OVERLAY_SHA:
        raise ValueError('Unsupported network UI overlay fingerprint')
    if data[:4] != b'MWo3' or struct.unpack_from('<I', data, 8)[0] != 0x117F000:
        raise ValueError('Unexpected overlay load address')
    checks = []
    for address, expected, meaning in [
        (0x36AA30, 0x0C45FD1C, 'Connection state6 calls network UI at 0x117F470'),
        (0x10D998, 0x0C043642, 'LoadExec wrapper calls shutdown preparation'),
        (0x10D9C0, 0x08040FC8, 'LoadExec wrapper tail-calls syscall stub 0x103F20'),
        (0x103F20, 0x24030006, 'LoadExecPS2 syscall number 6'),
        (0x103F24, 0x0000000C, 'Original syscall instruction'),
    ]:
        main.require(address, expected, meaning)
    for address, expected, meaning in [
        (0x117F7D8, 0x0C461274, 'Observed halted caller enters helper launcher 0x11849D0'),
        (0x1184A58, 0x3C040119, 'Target address high half'),
        (0x1184A5C, 0x3C060119, 'Argument-vector address high half'),
        (0x1184A60, 0x2484AAE0, 'Target string address 0x118AAE0'),
        (0x1184A64, 0x24050002, 'Two original arguments'),
        (0x1184A68, 0x0C043660, 'Call LoadExec wrapper 0x10D980'),
        (0x1184A6C, 0x24C69458, 'Argument-vector address 0x1189458 in delay slot'),
    ]:
        offset = address - 0x117F000
        actual = struct.unpack_from('<I', data, offset)[0]
        if actual != expected:
            raise ValueError(f'Overlay word mismatch at {address:#x}')
        checks.append({'address': hex(address), 'file_offset': hex(offset),
                       'word': f'{actual:08x}', 'meaning': meaning})

    def string(address):
        offset = address - 0x117F000
        if offset < 0 or offset >= len(data):
            raise ValueError('String is outside original overlay')
        end = data.find(b'\0', offset, min(offset + 256, len(data)))
        if end < 0:
            raise ValueError('Original string is not bounded')
        return data[offset:end].decode('ascii')

    target_path = string(0x118AAE0)
    pointers = struct.unpack_from('<II', data, 0x1189458 - 0x117F000)
    args = [string(address) for address in pointers]
    if target_path != 'cdrom0:\\NTGUIDVD\\NTGDVDJ.BIN;1' or args != ['cdrom0:\\SLPS_254.19;1', '1']:
        raise ValueError('Original executable or argument strings changed')
    entry = struct.unpack_from('<I', helper.data, 24)[0]
    if entry != 0x100008:
        raise ValueError('Unexpected helper entry')
    for address, expected, meaning in [
        (0x1137A4, 0x0080902D, 'Helper main retains argc in s2'),
        (0x1137AC, 0x00A0882D, 'Helper main retains argv in s1'),
        (0x113C4C, 0x8E240004, 'Helper return target is argv[1]'),
        (0x113C50, 0x2645FFFE, 'Helper return passes argc minus two'),
        (0x113C54, 0x0C042740, 'Helper calls its own LoadExec wrapper'),
        (0x113C58, 0x26260008, 'Helper return passes argv plus two'),
        (0x109D40, 0x080400A8, 'Helper wrapper jumps to its syscall stub'),
        (0x1002A0, 0x24030006, 'Helper return uses LoadExecPS2 number6'),
        (0x1002A4, 0x0000000C, 'Helper return syscall instruction'),
    ]:
        helper.require(address, expected, meaning)
    segments = [{'address': hex(va), 'file_offset': offset, 'file_bytes': filesz,
                 'memory_bytes': memsz, 'end': hex(va + memsz), 'flags': flags}
                for kind, offset, va, _, filesz, memsz, flags, _ in helper.segments if kind == 1]
    return {'scope': 'Static original-byte verification tied to the observed halt stack; not dynamic syscall-register capture',
            'syscall': {'number': 6, 'name': 'LoadExecPS2', 'address': '0x103f24'},
            'caller': '0x1184a68', 'target': target_path, 'argc': 2, 'argv': args,
            'main_sha256': main.sha256, 'overlay_sha256': OVERLAY_SHA,
            'target_sha256': helper.sha256, 'target_bytes': len(helper.data),
            'target_entry': hex(entry), 'target_segments': segments,
            'entry_words': {'main': [f'{main.word(entry+i):08x}' for i in range(0, 32, 4)],
                            'target': [f'{helper.word(entry+i):08x}' for i in range(0, 32, 4)]},
            'main_checks': main.checks, 'overlay_checks': checks, 'target_checks': helper.checks,
            'helper_boot_argv_inferred': [target_path, *args], 'failures': 0,
            'limits': ['The target overlaps main-game addresses and requires its own translation/dispatch',
                       'No helper boot, process reset, network configuration or server connection is established by this check']}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ['elf', 'overlay', 'target', 'output']:
        parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    result = verify(args.elf, args.overlay, args.target)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, indent=2) + '\n')
    print('Verified LoadExecPS2 handoff, original argv and separate target ELF')
