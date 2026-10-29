#!/usr/bin/env python3
"""Verify selected original AVE payload words. No original bytes are modified."""
import argparse, datetime, hashlib, json, struct
from pathlib import Path
INPUTS = {
 'ethernet': ('0d85884973dfd933407679ece4b0e66a9526d4026924f0ba868505f8033d0050', {
  0x77c:0x24044118, 0x790:0xafa00014, 0x794:0xa3a00018, 0x798:0xa3a20019,
  0x7a8:0xafa20020, 0x7b0:0xa7a3001c, 0x7e8:0x24044119, 0x800:0x9603001e,
  0x808:0xafa20014, 0x80c:0xafa00018, 0x81c:0x00021403, 0x820:0xae020018}),
 'avetcp': ('aa6c1f4f0f765b6f85e7dce91ddb9bb092f1a053e43b2bae78d88e1b024bbdb1', {
  0x1031c:0x2402fffc, 0x1032c:0x92830009, 0x10340:0x2c420005, 0x10348:0x2402fff4,
  0x10374:0x8e050010, 0x10380:0x9603000c, 0x10394:0x00031c03,
  0x103c0:0x10400082, 0x103c4:0x00001021,
  0x1094c:0x2402fffc, 0x10a34:0x86060002, 0x10a38:0x8e070008,
  0x10a8c:0x2402ffff, 0x10b58:0xa6420000, 0x10ba4:0x2402fff8})}

def main():
 p=argparse.ArgumentParser(description=__doc__)
 for name in INPUTS:p.add_argument('--'+name,type=Path,required=True)
 p.add_argument('--output',type=Path,required=True);args=p.parse_args()
 report={'timestamp':datetime.datetime.now(datetime.timezone.utc).isoformat(),'game_executed':False,'artifacts':[]}
 for name,(expected,words) in INPUTS.items():
  path=getattr(args,name);data=path.read_bytes();actual=hashlib.sha256(data).hexdigest()
  if actual!=expected:raise SystemExit(name+' original fingerprint mismatch')
  selected=[]
  for address,word in words.items():
   got=struct.unpack_from('<I',data,0xb0+address)[0]
   if got!=word:raise SystemExit(name+' word mismatch at '+hex(address))
   selected.append({'module_relative':hex(address),'file_offset':hex(0xb0+address),'word':f'{word:08x}'})
  report['artifacts'].append({'name':name,'sha256':actual,'bytes':len(data),'words':selected})
 report['success']=True
 with args.output.open('x') as f:json.dump(report,f,indent=2);f.write('\n')
 print(json.dumps({'success':True,'selected_words':sum(len(x[1]) for x in INPUTS.values())}))
if __name__=='__main__':main()
