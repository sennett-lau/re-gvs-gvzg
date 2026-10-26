#!/usr/bin/env python3
"""Check selected presentation samples and regenerate the 180-Hz session figure."""
import json
from pathlib import Path
from statistics import median

ROOT = Path(__file__).resolve().parents[1]
data = json.loads((ROOT / 'docs/evidence/pc-display-180hz.json').read_text())
summaries = []


def percentile(values, fraction):
    return sorted(values)[int(fraction * (len(values) - 1))]


for run in data['runs']:
    before, after = run['bounds']['before'], run['bounds']['after']
    seconds = (after['elapsed_ms'] - before['elapsed_ms']) / 1000
    assert abs(seconds - run['window_seconds']) < 0.000001
    for field, rate in [('render_updates', 'render_hz'), ('gameplay_ticks', 'logic_hz'),
                        ('cue_ticks', 'cue_hz'), ('guest_seconds', 'guest_speed'),
                        ('pcm_frames', 'pcm_hz'), ('extra_renders', 'extra_hz')]:
        measured = (after[field] - before[field]) / seconds
        assert abs(measured - run['rates'][rate]) < 0.0001
    assert all(b['audio_gain'] == 0 and b['audio_context'] == 'running'
               and b['ring_active'] == 1 for b in (before, after))
    assert after['ring_read_frames'] > before['ring_read_frames']
    assert run['browser_trace_overflow'] == 0
    pm = run['presentmon']
    assert pm['untracked_rows'] == 0 and pm['trace_warning'] == ''
    rows = pm['samples']
    assert len(rows) > 3000
    assert all(0 <= row[0] < seconds * 1000 and row[1] >= row[0] and row[2] > 0
               for row in rows)
    assert all(b[0] > a[0] and b[1] > a[1] for a, b in zip(rows, rows[1:]))
    # The CSV's display interval should agree with successive aligned display times.
    assert all(abs((b[1] - a[1]) - b[2]) < 0.02 for a, b in zip(rows, rows[1:]))
    intervals = [row[2] for row in rows]
    buckets = [sum(lo <= value < hi for value in intervals)
               for lo, hi in [(0, 8.3333), (8.3333, 13.8889),
                              (13.8889, 19.4444), (19.4444, 25), (25, float('inf'))]]
    summary = {
        'requested_hz': run['requested_hz'], 'seconds': seconds,
        'render_per_s': run['rates']['render_hz'],
        'gameplay_per_s': run['rates']['logic_hz'],
        'display_tracked_presents': len(rows),
        'display_updates_per_s': 1000 * (len(rows) - 1) / (rows[-1][1] - rows[0][1]),
        'display_interval_median_ms': median(intervals),
        'display_interval_p95_ms': percentile(intervals, .95),
        'display_interval_p99_ms': percentile(intervals, .99),
        'interval_buckets': buckets,
    }
    summaries.append(summary)

parts = [
    '<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 800 700" role="img" aria-labelledby="title desc">',
    '<title id="title">Normal-speed 120 rendering reaches the desktop display</title>',
    '<desc id="desc">Two approximately 65-second fullscreen runs on a 180-Hz desktop. '
    'Render, gameplay and OS display rates are compared above. Histograms below show '
    'uneven display intervals; an average of 120 updates does not mean uniform 8.33-millisecond spacing.</desc>',
    '<rect width="800" height="700" fill="#141b22"/>',
    '<g font-family="sans-serif" fill="#e0e7ec" font-size="16">',
    '<text x="28" y="35" font-size="23" font-weight="bold">120 updates reach the display · pacing still varies</text>',
    '<text x="28" y="64" fill="#b9c7d0">180-Hz desktop · 2560 × 1440 fullscreen canvas · normal game speed</text>',
]
colors = ['#edaa7a', '#9bdbba', '#9cc9f0']
for i, (label, color) in enumerate(zip(['Render /s', 'Gameplay /s', 'OS display /s'], colors)):
    x = 30 + i * 253
    parts += [f'<rect x="{x}" y="86" width="14" height="14" fill="{color}"/>',
              f'<text x="{x+22}" y="99">{label}</text>']

for i, s in enumerate(summaries):
    x = 28 + i * 392
    parts.append(f'<text x="{x}" y="137" font-size="20" font-weight="bold">Fixed {s["requested_hz"]} · {s["seconds"]:.2f} s</text>')
    for j, (key, color) in enumerate(zip(['render_per_s', 'gameplay_per_s', 'display_updates_per_s'], colors)):
        y = 156 + j * 32
        parts += [f'<rect x="{x}" y="{y}" width="{s[key]/130*265:.2f}" height="20" fill="{color}"/>',
                  f'<text x="{x+280}" y="{y+16}">{s[key]:.2f}</text>']
    parts.append(f'<text x="{x}" y="277">{s["display_tracked_presents"]:,} display-tracked presents</text>')

parts += ['<path d="M28 300h744" stroke="#36434d"/>',
          '<text x="28" y="334" font-size="20" font-weight="bold">Time between OS display changes</text>',
          '<text x="28" y="360" fill="#b9c7d0">Bars: share of recorded intervals · labels: interval in milliseconds</text>']
labels = ['&lt;8.33', '8.33–13.89', '13.89–19.44', '19.44–25', '≥25']
for i, s in enumerate(summaries):
    x = 28 + i * 392
    parts.append(f'<text x="{x}" y="393" font-weight="bold">Fixed {s["requested_hz"]}</text>')
    for j, (label, count) in enumerate(zip(labels, s['interval_buckets'])):
        y = 410 + j * 29
        share = count / s['display_tracked_presents']
        parts += [f'<text x="{x}" y="{y+15}" font-size="14">{label}</text>',
                  f'<rect x="{x+103}" y="{y}" width="{share*180:.2f}" height="19" fill="#9cc9f0"/>',
                  f'<text x="{x+290}" y="{y+15}" font-size="14">{share*100:.1f}%</text>']
    parts += [f'<text x="{x}" y="578">p95 {s["display_interval_p95_ms"]:.2f} ms</text>',
              f'<text x="{x}" y="602">p99 {s["display_interval_p99_ms"]:.2f} ms</text>']
parts += ['<text x="28" y="646" fill="#b9c7d0">PresentMon 2.6.0 · matched counter windows · no trace warnings in these runs</text>',
          '<text x="28" y="674" fill="#b9c7d0">OS presentation evidence; not a panel pixel-response or same-match image test</text>',
          '</g></svg>']
(ROOT / 'docs/figures/pc-display-180hz.svg').write_text('\n'.join(parts) + '\n')
print(json.dumps(summaries, indent=2))
