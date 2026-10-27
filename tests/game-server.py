#!/usr/bin/env python3
"""Exercise actual HTTP range/isolation behavior using synthetic local files."""
import http.server
import importlib.util
from pathlib import Path
import tempfile
import threading
import unittest
from urllib.request import Request,urlopen
from urllib.error import HTTPError

ROOT=Path(__file__).resolve().parents[1]
spec=importlib.util.spec_from_file_location('game_server',ROOT/'scripts/game/serve.py')
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
class Server(unittest.TestCase):
 def test_ranges_isolation_and_path_boundary(self):
  with tempfile.TemporaryDirectory() as temporary:
   root=Path(temporary);build=root/'web';build.mkdir();(build/'index.html').write_text('<title>Fixture</title>')
   (build/'fixture.wasm').write_bytes(b'wasm-fixture');disc=root/'test.bin';disc.write_bytes(bytes(range(256))*16)
   (build/'escape').symlink_to(disc)
   server=http.server.ThreadingHTTPServer(('127.0.0.1',0),module.handler(build,disc))
   worker=threading.Thread(target=server.serve_forever,daemon=True);worker.start()
   base=f'http://127.0.0.1:{server.server_port}'
   def request(path,headers=None,method='GET'):
    try:return urlopen(Request(base+path,headers=headers or {},method=method),timeout=3)
    except HTTPError as error:return error
   try:
    with request('/') as response:
     self.assertEqual(response.status,200);self.assertEqual(response.headers['Cross-Origin-Embedder-Policy'],'require-corp')
     self.assertEqual(response.headers['Cross-Origin-Opener-Policy'],'same-origin')
    with request('/fixture.wasm',method='HEAD') as response:
     self.assertEqual(response.headers['Content-Type'],'application/wasm');self.assertEqual(response.read(),b'')
    for value,start,end in [('bytes=0-15',0,15),('bytes=4090-',4090,4095),('bytes=-6',4090,4095)]:
     with request('/disc.iso',{'Range':value}) as response:
      self.assertEqual(response.status,206);self.assertEqual(response.read(),disc.read_bytes()[start:end+1])
      self.assertEqual(response.headers['Content-Range'],f'bytes {start}-{end}/4096')
    for value in ['bytes=4096-','bytes=8-7','bytes=0-2,5-6','bytes=-0']:
     with request('/disc.iso',{'Range':value}) as response:self.assertEqual(response.status,416)
    for path in ['/../test.bin','/%2e%2e/test.bin','/escape']:
     with request(path) as response:self.assertEqual(response.status,404)
   finally:server.shutdown();server.server_close();worker.join()
if __name__=='__main__':unittest.main()
