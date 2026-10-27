#!/usr/bin/env python3
"""Discover an address-taken function that tail-calls outside its image."""
from pathlib import Path
import struct
import subprocess
import tempfile
import os

root = Path(__file__).resolve().parents[2]
with tempfile.TemporaryDirectory(prefix='ps2-tailcall-test-') as temp:
    work = Path(temp)
    data = bytearray(0x150)
    data[:7] = b'\x7fELF\x01\x01\x01'
    struct.pack_into('<HHIIIIIHHHHHH', data, 16, 2, 8, 1, 0x100000, 52, 0, 0, 52, 32, 1, 40, 0, 0)
    struct.pack_into('<8I', data, 52, 1, 0x100, 0x100000, 0, 0x50, 0x50, 5, 4)
    # jal 0x100040; nop; take &0x100020; jr ra; nop
    struct.pack_into('<6I', data, 0x100, 0x0c040010, 0, 0x3c080010, 0x35080020, 0x03e00008, 0)
    # The address-taken function ends with a tail call outside this image.
    struct.pack_into('<3I', data, 0x120, 0x24020001, 0x08080000, 0)
    struct.pack_into('<2I', data, 0x140, 0x03e00008, 0)
    (work / 'input.elf').write_bytes(data)
    result = subprocess.run([os.environ['EERECOMP'], str(work / 'input.elf'),
                             '--out', str(work / 'generated')], check=True, capture_output=True, text=True)
    assert 'code 11 instructions' in result.stdout, result.stdout
print('External tail-call discovery regression passed')
