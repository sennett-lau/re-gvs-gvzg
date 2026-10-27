#!/usr/bin/env python3
"""Serve one matched game build with a user-supplied disc and isolation headers."""
import argparse
import functools
import hashlib
import http.server
import importlib.util
import json
import mimetypes
from pathlib import Path
import re
import sys
from urllib.parse import unquote, urlsplit

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'poc/streaming'))
sys.path.insert(0, str(ROOT / 'poc/lockstep/server'))


def supported_disc(path):
    spec = importlib.util.spec_from_file_location('disc', ROOT / 'vendor/ps2-web-recomp/scripts/disc.py')
    module = importlib.util.module_from_spec(spec); spec.loader.exec_module(module)
    image = module.Image(path)
    try:
        entry = image.find('SLPS_254.19')
        if entry is None:
            raise ValueError('Expected the Japanese SLPS-25419 disc.')
        image.file.seek(entry[2] * 2048)
        if hashlib.sha256(image.file.read(entry[3])).hexdigest() != '294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6':
            raise ValueError('Unsupported disc executable fingerprint.')
    finally:
        image.file.close()


def handler(build, disc):
    build, disc = Path(build).resolve(), Path(disc).resolve()
    class Handler(http.server.BaseHTTPRequestHandler):
        def target(self):
            name = unquote(urlsplit(self.path).path)
            if name == '/disc.iso':
                return disc
            name = name.lstrip('/') or 'index.html'
            file = (build / name).resolve()
            return file if file.is_relative_to(build) and file.is_file() else None

        def send_file(self, head=False):
            file = self.target()
            if file is None:
                self.send_error(404); return
            size = file.stat().st_size
            start, end = 0, size - 1
            range_header = self.headers.get('Range')
            if range_header:
                match = re.fullmatch(r'bytes=(\d*)-(\d*)', range_header)
                if not match or not any(match.groups()):
                    self.send_error(416); return
                a, b = match.groups()
                if a:
                    start, end = int(a), min(int(b), end) if b else end
                else:
                    start = max(0, size - int(b))
                if start >= size or start > end:
                    self.send_response(416)
                    self.send_header('Content-Range', f'bytes */{size}')
                    self.send_header('Content-Length', '0'); self.end_headers(); return
            self.send_response(206 if range_header else 200)
            if range_header:
                self.send_header('Content-Range', f'bytes {start}-{end}/{size}')
            types = {'.wasm': 'application/wasm', '.js': 'text/javascript', '.data': 'application/octet-stream'}
            self.send_header('Content-Type', types.get(file.suffix, mimetypes.guess_type(str(file))[0] or 'application/octet-stream'))
            self.send_header('Content-Length', str(end - start + 1))
            self.send_header('Accept-Ranges', 'bytes')
            self.send_header('Cache-Control', 'no-cache')
            self.send_header('Cross-Origin-Opener-Policy', 'same-origin')
            self.send_header('Cross-Origin-Embedder-Policy', 'require-corp')
            self.send_header('Cross-Origin-Resource-Policy', 'same-origin')
            self.end_headers()
            if head: return
            try:
                with file.open('rb') as stream:
                    stream.seek(start); remaining = end - start + 1
                    while remaining:
                        data = stream.read(min(1 << 20, remaining))
                        if not data: break
                        self.wfile.write(data); remaining -= len(data)
            except (BrokenPipeError, ConnectionResetError):
                pass

        def do_HEAD(self): self.send_file(head=True)
        def do_GET(self): self.send_file()
        def log_message(self, *_): pass
    return Handler


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--disc', type=Path, required=True)
    parser.add_argument('--build', type=Path, default=ROOT / 'apps/game/prebuilt')
    parser.add_argument('--host', default='127.0.0.1')
    parser.add_argument('--port', type=int, default=8620)
    parser.add_argument('--remote', type=Path, help='Private JSON with iceServers for the streaming POC')
    parser.add_argument('--netplay', action='store_true', help='Enable the experimental lockstep HTTP relay')
    args = parser.parse_args()
    disc, build = args.disc.resolve(), args.build.resolve()
    if not (build / 'index.html').is_file(): parser.error('Build directory needs index.html.')
    supported_disc(disc)
    base = handler(build, disc)
    if args.remote:
        from remote_play import handler_with_remote
        base = handler_with_remote(base, json.loads(args.remote.read_text()))
    if args.netplay:
        from netplay import handler_with_netplay
        base = handler_with_netplay(base)
    server = http.server.ThreadingHTTPServer((args.host, args.port), base)
    print(f'Game ready at http://{args.host}:{server.server_port}/', flush=True)
    try: server.serve_forever()
    except KeyboardInterrupt: pass
    finally: server.server_close()


if __name__ == '__main__': main()
