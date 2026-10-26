#!/usr/bin/env python3
"""Render labeled viewing derivatives from the retained native PPM captures."""
import argparse
import hashlib
import json
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--captures', type=Path, required=True)
args = parser.parse_args()
media = ROOT / 'docs/media'
manifest_path = ROOT / 'docs/evidence/review-provenance.json'
manifest = json.loads(manifest_path.read_text())
font = ROOT / 'apps/wiki/fonts/Manrope-variable.ttf'
def sha(path): return hashlib.sha256(path.read_bytes()).hexdigest()
def run(*args): subprocess.run(['ffmpeg', '-v', 'error', '-y', *map(str,args)], check=True)
def text(label, x, y, size=22, color='white'):
    return f"drawtext=fontfile='{font}':text='{label}':x={x}:y={y}:fontsize={size}:fontcolor={color}"

sequences = {}
for name in ('repeat120', 'movement120'):
    frames = sorted((args.captures / name).glob('frame_*.ppm'))
    hashes = [sha(p) for p in frames]
    listing = ''.join(f'{p.name} {h}\n' for p,h in zip(frames,hashes))
    assert hashlib.sha256(listing.encode()).hexdigest() == manifest['media']['sequences'][name]['ordered_name_sha256_list_sha256']
    seen, counts = set(), []
    for h in hashes:
        seen.add(h)
        counts.append(len(seen))
    sequences[name] = (frames, hashes, counts)
assert len(sequences['repeat120'][0]) == len(sequences['movement120'][0]) == 241
# The compact overlay formula is accepted only after checking all raw hashes.
assert sequences['repeat120'][2] == [min(n+1, (n+1)//2+2) for n in range(241)]
assert sequences['movement120'][2] == list(range(1,242))

labels = [('REPEAT', 'min(n+1,floor((n+1)/2)+2)', 122, '0xedaa7a'),
          ('INTERPOLATED', 'n+1', 241, '0x9bdbba')]
filters = []
for i,(label,expression,total,color) in enumerate(labels):
    counter = f'Sample %{{eif\\:n\\:d\\:3}} / 240   Unique %{{eif\\:{expression}\\:d\\:3}} / {total}'
    filters.append(f'[{i}:v]pad=640:528:0:80:color=0x141b22,' +
                   text(label,16,10,28,color)+','+text(counter,16,49,21)+f'[v{i}]')
filters.append('[v0][v1]hstack,pad=1280:568:0:0:color=0x141b22,'+
               text('Native captures | 4x slower playback | 60 gameplay updates per emulated second',16,539,21)+'[out]')
video = media/'repeat-vs-interpolate-quarter-speed.mp4'
run('-threads','2','-framerate','30','-i',args.captures/'repeat120/frame_%05d.ppm',
    '-framerate','30','-i',args.captures/'movement120/frame_%05d.ppm',
    '-filter_complex',';'.join(filters),'-map','[out]','-frames:v','241',
    '-c:v','libx264','-threads','2','-crf','22','-level:v','4.1','-pix_fmt','yuv420p',
    '-an','-map_metadata','-1','-movflags','+faststart',video)
poster = media/'repeat-vs-interpolate-poster.png'
run('-ss','4','-i',video,'-frames:v','1',poster)

# Four consecutive samples, equal pixel crop on every source image. No resize.
indices = list(range(61,65))
left = [sequences['repeat120'][1][n] for n in indices]
right = [sequences['movement120'][1][n] for n in indices]
assert left[0] == left[1] and left[2] == left[3] and left[0] != left[2]
assert len(set(right)) == 4
with tempfile.TemporaryDirectory() as tmp:
    tiles=[]
    for row,n in enumerate(indices):
        for col,name in enumerate(('repeat120','movement120')):
            frames, hashes, counts = sequences[name]
            tile = Path(tmp)/f'{row}-{col}.png'
            vf = 'crop=320:256:176:192,pad=320:322:0:36:color=0x141b22,' + text(f'Sample {n:03d}',12,4,23) + ',' + text(f'Unique so far {counts[n]:03d}',12,295,20)
            run('-i',frames[n],'-vf',vf,'-frames:v','1',tile)
            tiles.append(tile)
    inputs = [v for p in tiles for v in ('-i',p)]
    layout = '|'.join(f'{(i%2)*320}_{(i//2)*322}' for i in range(8))
    vf = ''.join(f'[{i}:v]' for i in range(8))+f'xstack=inputs=8:layout={layout},pad=640:1388:0:64:color=0x141b22,'+text('REPEAT',12,14,28,'0xedaa7a')+','+text('INTERPOLATED',332,14,28,'0x9bdbba')+','+text('Consecutive samples | Same crop | Original PPM pixels',12,1363,17)
    filmstrip = media/'repeat-vs-interpolate-filmstrip.png'
    run(*inputs,'-filter_complex',vf,'-frames:v','1',filmstrip)

manifest['media']['command'] = 'python3 scripts/build-comparison-media.py --captures RETAINED_CAPTURE_DIRECTORY'
manifest['media']['comparison'] = 'Left: repeat120. Right: movement120. 241 captures each, including sample000. Burned labels show sample index and cumulative unique original-PPM hashes. Playback is 30 FPS, four times slower. No audio.'
manifest['media']['filmstrip'] = {'samples':indices,'crop':[176,192,320,256],
    'layout':'Two columns, four rows. No scaling of the original crop.',
    'left_unique_counts':[sequences['repeat120'][2][n] for n in indices],
    'right_unique_counts':[sequences['movement120'][2][n] for n in indices],
    'source_sha256':{'repeat120':left,'movement120':right}}
for p in (video,poster,filmstrip): manifest['export_sha256'][str(p.relative_to(ROOT))] = sha(p)
manifest_path.write_text(json.dumps(manifest,indent=2)+'\n')
print('Labeled 241 samples; unique totals 122/241; filmstrip pairs 61=62, 63=64 verified from original pixels.')
