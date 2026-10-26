#!/usr/bin/env python3
"""Check exported hook bytes and mapping integrity without the game inputs."""
import hashlib
import json
from pathlib import Path

HERE = Path(__file__).resolve().parent
manifest = json.loads((HERE / 'manifest.json').read_text())
for name, expected in manifest['export_sha256'].items():
    actual = hashlib.sha256((HERE / name).read_bytes()).hexdigest()
    if actual != expected:
        raise SystemExit(f'Hook export fingerprint mismatch: {name}')

mapping = json.loads((HERE / 'address-map.json').read_text())
addresses = set()
for hook in mapping['hooks']:
    address = int(hook['guest_address'], 16)
    if address in addresses or hook['generated_unit'] not in manifest['inputs_sha256']:
        raise SystemExit('Duplicate address or unknown generated unit in hook map.')
    addresses.add(address)
    if not hook['generated_anchor'].startswith('L_') or not hook['purpose']:
        raise SystemExit('Incomplete hook mapping.')

if not {0x212500, 0x226D30, 0x21C688}.issubset(addresses):
    raise SystemExit('A corrected render/input/cue boundary is missing.')
print(f'Checked {len(manifest["export_sha256"])} exported files and {len(addresses)} mapped hook sites. No game execution.')
