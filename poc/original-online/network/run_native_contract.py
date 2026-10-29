#!/usr/bin/env python3
"""Run selected original IRX instructions with deterministic host/scheduler substitutes."""
import argparse
import datetime
import hashlib
import importlib.util
import json
from pathlib import Path
import shutil
import struct
import subprocess

HERE=Path(__file__).resolve().parent
ROOT=HERE.parents[2]
EXPECTED='aa6c1f4f0f765b6f85e7dce91ddb9bb092f1a053e43b2bae78d88e1b024bbdb1'

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--avetcp',type=Path,required=True)
    parser.add_argument('--work',type=Path,required=True)
    args=parser.parse_args();args.work.mkdir(parents=True,exist_ok=False)
    raw=args.avetcp.read_bytes()
    if hashlib.sha256(raw).hexdigest()!=EXPECTED:raise ValueError('Original AVETCP fingerprint mismatch')
    u16=lambda at:struct.unpack_from('<H',raw,at)[0]
    u32=lambda at:struct.unpack_from('<I',raw,at)[0]
    segments=[u32(28)+i*u16(42) for i in range(u16(44))]
    ph=next(p for p in segments if u32(p)==1)
    image=bytearray(u32(ph+20));image[:u32(ph+16)]=raw[u32(ph+4):u32(ph+4)+u32(ph+16)]
    base=0x10000
    def get(at):
        if at<0 or at+4>len(image):raise ValueError('Relocation outside image')
        return struct.unpack_from('<I',image,at)[0]
    def put(at,n):struct.pack_into('<I',image,at,n&0xffffffff)
    signed=lambda n:n-65536 if n&32768 else n
    v2=u16(16)==0xff81
    for i in range(u16(48)):
        sh=u32(32)+i*u16(46)
        if u32(sh+4)!=9:continue
        off,count=u32(sh+16),u32(sh+20)//8;hi=None
        for k in range(count):
            at=u32(off+k*8);kind=u32(off+k*8+4)&255;word=get(at)
            if kind==2:put(at,word+base)
            elif kind==4:put(at,(word&~0x3ffffff)|(((word&0x3ffffff)+(base>>2))&0x3ffffff))
            elif kind==5:
                if v2:
                    following=u32(off+(k+1)*8);value=signed(get(following)&65535)+(word<<16)+base
                    put(at,(word&~65535)|(((value+0x8000)>>16)&65535))
                else:hi=(at,word)
            elif kind==6:
                if not v2 and hi:
                    value=signed(word&65535)+(hi[1]<<16)+base
                    put(at,(word&~65535)|(value&65535));put(hi[0],(hi[1]&~65535)|(((value+0x8000)>>16)&65535));hi=None
                else:put(at,(word&~65535)|((signed(word&65535)+base)&65535))
            elif kind!=0:raise ValueError('Unmodeled relocation kind '+str(kind))
    private_image=args.work/'relocated-original.bin';private_image.write_bytes(image)
    tree=args.work/'upstream';(tree/'runtime/src').mkdir(parents=True)
    shutil.copytree(ROOT/'vendor/ps2-web-recomp/runtime/src/iop',tree/'runtime/src/iop')
    spec=importlib.util.spec_from_file_location('network_prepare',HERE/'prepare_runtime.py');prep=importlib.util.module_from_spec(spec);spec.loader.exec_module(prep);prep.prepare(tree)
    command=['c++','-std=c++20','-Wall','-Wextra','-Werror','-I'+str(tree/'runtime/src/iop'),str(HERE/'native_contract_probe.cpp'),str(tree/'runtime/src/iop/cpu.cpp'),str(tree/'runtime/src/iop/native_transport.cpp'),str(tree/'runtime/src/iop/sha256.cpp'),'-o',str(args.work/'probe')]
    report={'started_at':datetime.datetime.now(datetime.timezone.utc).isoformat(),'avetcp_sha256':EXPECTED,'image_sha256':hashlib.sha256(image).hexdigest(),'game_executed':False,'host_transport':'deterministic substitute','scheduler':'deterministic substitute','original_instruction_execution':True,'commands':[command,[str(args.work/'probe'),str(private_image),str(args.avetcp)]],'sources_sha256':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in HERE.iterdir() if p.is_file()}}
    try:
        for i,cmd in enumerate(report['commands']):
            proc=subprocess.run(cmd,text=True,capture_output=True,timeout=45)
            (args.work/('build.log' if i==0 else 'run.log')).write_text(proc.stdout+proc.stderr)
            if proc.returncode:raise RuntimeError('command failed: '+str(proc.returncode))
        report['success']=True
        report['checks']=[
            'raw input SHA256 and altered-byte rejection',
            'state2 retained until guarded host-handshake commit',
            'owned established timer exclusion and actual buffered count',
            'original105EC/10BC0 wait-record writes under original semaphore calls',
            'actual DECC -14 completion then stale queued helper suppression',
            'original blocking102E4 sleeps/resumes with sent count and wait cleanup',
            'original blocking102E4 resumes with -14 after actualDECC and clears wait',
            'original137CC/13670 two-phase DNS delivery under guard',
            'originalD634 half-close preserves descriptor and does not invent peerACK',
            'original7D00 RST notification/completion/cleanup retains errorbyte',
            'retained allocated descriptor reconnects through active-open boundary',
            'originalD39C full close waits for receive completion before originalAD44 release',
        ]
    except Exception as error:report['success']=False;report['error']=str(error)
    report['finished_at']=datetime.datetime.now(datetime.timezone.utc).isoformat()
    (args.work/'result.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({'success':report['success'],'work':str(args.work)}))
    return 0 if report['success'] else 1

if __name__=='__main__':raise SystemExit(main())
