#!/usr/bin/env python3
"""Regenerate the historical counter-rate plot without a game or plotting package."""
import json
from pathlib import Path
from statistics import median

ROOT = Path(__file__).resolve().parents[1]
data = json.loads((ROOT / 'docs/evidence/pc-cadence-samples.json').read_text())
colors = ['#edaa7a', '#9bdbba', '#9cc9f0']
parts = ['<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 760 740" role="img" aria-labelledby="title desc">',
         '<title id="title">Historical PC rendering, gameplay and browser-shown rates</title>',
         '<desc id="desc">Two roughly 70-second post-pause windows. Fixed 60 computes about 60 renders and gameplay updates per second. Fixed 120 computes about 120 renders and 60 gameplay updates. Both report about 56 browser-shown updates. These are one-second observations, not frame times or physical scanout.</desc>',
         '<rect width="760" height="740" fill="#141b22"/>',
         '<g font-family="sans-serif" font-size="16" fill="#e0e7ec">',
         '<text x="24" y="30" font-size="21" font-weight="bold">Rendering more ≠ showing more</text>']
for i, (name, color) in enumerate(zip(['Render counter', 'Gameplay counter', 'Reported shown'], colors)):
    x = 24 + i*245
    dash = ' stroke-dasharray="8 5"' if i == 1 else ''
    parts += [f'<path d="M{x} 56h22" stroke="{color}" stroke-width="3"{dash}/>',
              f'<text x="{x+30}" y="62">{name}</text>']

summary = []
for panel, run in enumerate(data['runs']):
    rows = run['samples']
    assert len(rows) == 71 and all(b[0] > a[0] for a,b in zip(rows, rows[1:]))
    assert all(all(b[c] >= a[c] for c in range(1,6)) for a,b in zip(rows, rows[1:]))
    seconds = (rows[-1][0]-rows[0][0])/1000
    total = {'requested_hz':run['requested_hz'], 'seconds':seconds,
             'render_per_s':(rows[-1][1]-rows[0][1])/seconds,
             'logic_per_s':(rows[-1][2]-rows[0][2])/seconds,
             'shown_sample_median':median(r[6] for r in rows)}
    summary.append(total)
    top = 113 + panel*300
    parts.append(f'<text x="24" y="{top-13}" font-size="19" font-weight="bold">Fixed {run["requested_hz"]} · {seconds:.2f} seconds after resume</text>')
    x0, y0, width, height = 74, top+172, 652, 166
    for tick in (0, 30, 60, 90, 120):
        y = y0-tick/130*height
        parts += [f'<path d="M{x0} {y:.2f}h{width}" stroke="#36434d"/>',
                  f'<text x="{x0-10}" y="{y+5:.2f}" text-anchor="end">{tick}</text>']
    for tick in (0, 20, 40, 60, 70):
        x = x0+tick/seconds*width
        parts.append(f'<text x="{x:.2f}" y="{y0+26}" text-anchor="middle">{tick}</text>')
    series = [[],[],[]]
    for a,b in zip(rows,rows[1:]):
        dt = (b[0]-a[0])/1000
        values = [(b[1]-a[1])/dt, (b[2]-a[2])/dt, b[6]]
        for points, value in zip(series, values):
            assert 0 <= value <= 130
            points.append(f'{x0+(b[0]/1000)/seconds*width:.2f},{y0-value/130*height:.2f}')
    for i,(points,color) in enumerate(zip(series,colors)):
        dash = ' stroke-dasharray="8 5"' if i == 1 else ''
        parts.append(f'<polyline points="{" ".join(points)}" fill="none" stroke="{color}" stroke-width="2.5"{dash}/>')
    note = ('Render = gameplay · ' if run['requested_hz'] == 60 else 'Render · ') + f"{total['render_per_s']:.2f}/s mean; shown · {total['shown_sample_median']:.2f}/s median"
    parts.append(f'<text x="24" y="{y0+54}" font-size="16">{note}</text>')
    if run['requested_hz'] == 60:
        gap = total['render_per_s'] - total['shown_sample_median']
        parts.append(f'<text x="24" y="{y0+78}" font-size="16" fill="#b9c7d0">Difference: {gap:.2f}/s between these summaries; not a dropped-frame count.</text>')
parts += ['<text x="24" y="700" fill="#b9c7d0">Y: updates/s · X: elapsed wall seconds · gameplay shown dashed</text><text x="24" y="725" fill="#b9c7d0">Historical samples · different match setups · not physical refresh</text>', '</g></svg>']
(ROOT/'docs/figures/pc-cadence.svg').write_text('\n'.join(parts)+'\n')
print(json.dumps(summary, indent=2))
