#!/usr/bin/env python3
"""Test-only loopback relay with an injectable lease clock; never used by serving code."""
import http.server
import json
from pathlib import Path
import sys
import time

sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'poc/lockstep/server'))
from netplay import Rooms,handler_with_netplay

offset=[0.0]
rooms=Rooms(clock=lambda:time.monotonic()+offset[0],max_rooms=32)

class TestHandler(http.server.BaseHTTPRequestHandler):
    def log_message(self,*args): pass
    def do_POST(self):
        if self.path!='/test/advance': return self.send_error(404)
        value=json.loads(self.rfile.read(int(self.headers['Content-Length'])))
        with rooms.changed: offset[0]+=float(value['seconds'])
        payload=b'{}'
        self.send_response(200)
        self.send_header('Content-Type','application/json')
        self.send_header('Content-Length',str(len(payload)))
        self.end_headers()
        self.wfile.write(payload)

server=http.server.ThreadingHTTPServer(('127.0.0.1',0),handler_with_netplay(TestHandler,rooms))
print('http://127.0.0.1:%d/netplay-api/'%server.server_port,flush=True)
server.serve_forever()
