#!/usr/bin/env python3
"""Bounded privacy, payload-size and commit-identity checks; never publish anything."""
import argparse
from pathlib import Path
import re
import subprocess

ROOT=Path(__file__).resolve().parents[1]
APPROVED='sennett-lau <47737641+sennett-lau@users.noreply.github.com>'
RULES=[
 ('private home path',rb'(?:/(?:Users|home)/[A-Za-z0-9_.-]+|[A-Z]:[\\/]Users[\\/][A-Za-z0-9_.-]+)'),
 ('private IPv4 address',rb'\b(?:192\.168(?:\.\d{1,3}){2}|10(?:\.\d{1,3}){3}|172\.(?:1[6-9]|2\d|3[01])(?:\.\d{1,3}){2}|100\.(?:6[4-9]|[7-9]\d|1[01]\d|12[0-7])(?:\.\d{1,3}){2})\b'),
 ('tailnet hostname',rb'\b[A-Za-z0-9.-]+\.ts\.net\b'),
 ('credential-looking token',rb'\b(?:gh[pousr]_[A-Za-z0-9]{30,}|github_pat_[A-Za-z0-9_]{40,}|sk-(?:proj-)?[A-Za-z0-9_-]{40,})\b'),
]
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--history',action='store_true',help='Also inspect HEAD history (the branch being published), excluding unrelated local refs')
args=parser.parse_args()
def git(*values):return subprocess.check_output(['git',*values],cwd=ROOT)
issues=[]
def scan(data,label,source=''):
 for reason,pattern in RULES:
  matches = list(re.finditer(pattern, data))
  # Emscripten's virtual filesystem default is not a machine/user home path.
  if reason == 'private home path':
   matches = [match for match in matches if match.group() != b'/home/' + b'web_user']
  if reason == 'private IPv4 address':
   # A network-range declaration is not a device address. Keep bare addresses flagged.
   matches = [match for match in matches if not (
    match.group() == b'100.' + b'64.0.0' and
    re.match(rb'/10(?!\w)',data[match.end():]))]
   # These two fixed guest addresses belong to the isolated virtual segment,
   # not the host LAN. Limit the exception to their implementation and record.
   if source in {
    'poc/original-online/native-network-device/prepare.py',
    'poc/original-online/native-network-device/tests/run.py',
    'poc/original-online/native-network-device/README.md',
    'virtual-segment-commit',
   }:
    matches = [match for match in matches if match.group() not in {
     b'192.' + b'168.208.1',b'192.' + b'168.208.10'}]
  if matches: issues.append((label,reason))
paths=git('ls-files','--cached','--others','--exclude-standard','-z').split(b'\0')
count=0
for entry in paths:
 if not entry:continue
 name=entry.decode();p=ROOT/name
 if not p.exists() or not p.is_file():continue
 count+=1
 if p.stat().st_size>=100*1024*1024:issues.append((name,'ordinary Git file limit'))
 if re.search(r'\.(iso|rom|7z|cso|chd|ps2|mcr|mc2|memcard|state)$',name,re.I):issues.append((name,'excluded disc/archive/runtime state'))
 scan(p.read_bytes(),name,name)
if args.history:
 identities=set(git('log','HEAD','--format=%an <%ae>%n%cn <%ce>').decode().splitlines())
 if identities!={APPROVED}:issues.append(('commit history','unexpected author or committer identity'))
 # Object IDs and filenames are safe to report; matching private contents are not echoed.
 objects=git('rev-list','--objects','HEAD').splitlines()
 child=subprocess.Popen(['git','cat-file','--batch'],cwd=ROOT,stdin=subprocess.PIPE,stdout=subprocess.PIPE)
 blobs=0
 for row in objects:
  oid=row.split(b' ',1)[0];child.stdin.write(oid+b'\n');child.stdin.flush()
  header=child.stdout.readline().split();size=int(header[2]);data=child.stdout.read(size);child.stdout.read(1)
  if header[1]==b'commit':
   subject=data.split(b'\n\n',1)[1].split(b'\n',1)[0]
   source='virtual-segment-commit' if subject==b'Add an opt-in virtual Ethernet segment with ARP and DHCP' else ''
   scan(data, 'history commit '+oid.decode(),source)
  if header[1]==b'blob':
   source=row.split(b' ',1)[1].decode() if b' ' in row else ''
   blobs+=1;scan(data,'history blob '+oid.decode(),source)
   if size>=100*1024*1024:issues.append(('history blob '+oid.decode(),'ordinary Git file limit'))
 child.stdin.close();child.wait()
 print('Checked',blobs,'blobs and all commit identities reachable from HEAD.')
if issues:
 for name,reason in issues:print(f'{name}: {reason}')
 raise SystemExit(f'Publication check found {len(issues)} item(s) requiring review.')
print(f'Checked {count} files: no selected private markers, excluded payloads or oversized files found.')
print('This bounded scan does not guarantee exhaustive anonymization. No remote operation was performed.')
