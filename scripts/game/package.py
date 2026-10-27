#!/usr/bin/env python3
"""Create a local playable-package ZIP and checksum; never create a release or upload."""
import argparse
import hashlib
from pathlib import Path
import subprocess
import sys
import zipfile

ROOT=Path(__file__).resolve().parents[2]
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--output',type=Path,default=ROOT/'.local/re-gvs-gvzg-adaptive.zip')
args=parser.parse_args()
output=args.output.resolve()
if output.exists():parser.error('Choose a new output path.')
subprocess.run([sys.executable,ROOT/'scripts/game/verify.py'],check=True)
output.parent.mkdir(parents=True,exist_ok=True)
files=[*sorted((ROOT/'apps/game/prebuilt').iterdir()),
       ROOT/'scripts/game/serve.py',ROOT/'vendor/ps2-web-recomp/scripts/disc.py',
       ROOT/'poc/streaming/remote_play.py',ROOT/'poc/lockstep/server/netplay.py',
       *sorted((ROOT/'docs/license').iterdir())]
readme='''# re-gvs-gvzg playable package

Requires Python 3.10+ and a browser supporting WebGPU, JSPI, Wasm exceptions,
SIMD and cross-origin isolation. Use your own Japanese SLPS-25419 disc image.
No ISO, ROM, personal save or memory card is included.

From this extracted folder:

    python3 scripts/game/serve.py --disc /path/to/disc.iso

Open http://127.0.0.1:8620/. Start with Auto or choose a fixed battle render
rate. Gameplay remains 60 Hz; unsupported scenes use their original timing.
Online hosting requires HTTPS and the provided isolation/range-request support.

apps/game/prebuilt/build-info.json identifies every executable artifact.
apps/game/prebuilt/LICENSES.txt retains upstream binary notices.
Original contributions use docs/license/LICENSE; game-derived content and
third-party terms are described separately in docs/license/CONTENT_NOTICE.md
and docs/license/THIRD_PARTY_NOTICES.md.
'''
with zipfile.ZipFile(output,'x',compression=zipfile.ZIP_DEFLATED,compresslevel=6) as archive:
    archive.writestr('README.md',readme)
    for file in files:
        if file.is_file():archive.write(file,file.relative_to(ROOT).as_posix())
h=hashlib.sha256()
with output.open('rb') as stream:
    for chunk in iter(lambda:stream.read(1<<20),b''):h.update(chunk)
output.with_suffix(output.suffix+'.sha256').write_text(h.hexdigest()+'  '+output.name+'\n')
print(f'Local package: {output.name} ({output.stat().st_size} bytes); checksum written alongside it.')
