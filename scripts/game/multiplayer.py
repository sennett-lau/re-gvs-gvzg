"""Prepare the normal-boot multiplayer profile without modifying generated input."""
import hashlib
import json
import shutil
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]

def prepare(prepared, upstream):
    unit = prepared / 'unit_0044.cpp'
    text = unit.read_text()
    before = 'L_00211180:\n    set32(c.r[2], 0u + 7u);'
    if text.count(before) != 1:
        raise ValueError('Network Battle selection is ambiguous')
    text = '#include "menu_bridge.hpp"\n' + text.replace(before,
        'L_00211180:\n    set32(c.r[2], static_cast<std::uint32_t>(gundam_multiplayer_menu()));\n    if (c.r[2].w[0] == 4u) st8(c.r[6].w[0] + 76u, 1u);')
    unit.write_text(text)
    # Preserve normal single-player RTC behavior; lockstep uses emulated time
    # with a real UTC+9 date rollover, not the host machine's clock.
    for name in ['cdvd', 'cdvdfsv']:
        text = (upstream / f'runtime/src/iop/{name}.cpp').read_text()
        if text.count('std::time(nullptr)') != 1:
            raise ValueError('RTC source is ambiguous: ' + name)
        text = text.replace('#include "kernel.hpp"', '#include "iop/kernel.hpp"')
        text = '#include "web_netplay.hpp"\n' + text.replace('std::time(nullptr)',
            '(gundam_netplay_enabled() ? gundam_netplay_rtc_seconds() + 9 * 3600 : std::time(nullptr))')
        text = text.replace('(tm->tm_hour + 9) % 24',
            '(tm->tm_hour + (gundam_netplay_enabled() ? 0 : 9)) % 24')
        (prepared / (name + '.cpp')).write_text(text)
    return [ROOT / 'src/multiplayer/menu_bridge.cpp', ROOT / 'poc/lockstep/src/web_netplay.cpp',
            prepared / 'cdvd.cpp', prepared / 'cdvdfsv.cpp']

def assets(output):
    for name in ['netplay-transport.js', 'netplay-game.js']:
        shutil.copy2(ROOT / 'poc/lockstep/web' / name, output / name)
    # A canonical boot recipe replaces the old private save-state fingerprint.
    boot = {'profile': 'normal-boot-multiplayer-1', 'rtc_utc': '2026-01-01T00:00:00Z',
            'memory_card': False, 'aspect': '4:3', 'simulation_hz': 60, 'render_hz': 60,
            'disc_completion': 'emulated-time', 'menu_entry': 'Network Battle -> Versus'}
    state = hashlib.sha256(json.dumps(boot, sort_keys=True).encode()).hexdigest()
    # Include all executing browser/native code, not just the WASM binary.
    fingerprint = {f.name: hashlib.sha256(f.read_bytes()).hexdigest() for f in sorted(output.iterdir())
                   if f.suffix in ('.wasm', '.js', '.data', '.html')}
    build = hashlib.sha256(json.dumps(fingerprint, sort_keys=True).encode()).hexdigest()
    manifest = {'boot': boot, 'identity': {'protocol': 1, 'seed': 0,
        'game_sha256': '294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6',
        'build_sha256': build, 'state_sha256': state}}
    (output / 'netplay-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
