#!/usr/bin/env python3
"""Isolated generic build of the original network settings executable."""
import argparse, concurrent.futures, datetime, hashlib, json, os, pathlib, re, shutil, subprocess, sys
parser=argparse.ArgumentParser(description="Build the original network utility separately from the game; no executable handoff or network bridge")
for name in ['sdk','elf','generated','shell','work']:
    parser.add_argument('--'+name,type=pathlib.Path,required=True)
args=parser.parse_args()
root=pathlib.Path(__file__).resolve().parents[2]
work=args.work.resolve()
if work.exists(): parser.error('Use a new work directory')
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
if sha(args.elf)!='8109d5bb29a16fac1f417098ac551364d232df36feb1d7e9fa8134c81b8b6cec': parser.error('Unsupported original utility ELF')
if sha(args.shell)!='76e8af7c6c529d6a8587b3048320b40e849ba1852c72462e81596505bba6b432': parser.error('Expected generic shell from pinned upstream6526f480')
work.mkdir(parents=True)
source=work/'upstream'; generated=work/'generated'; output=work/'web'; objects=work/'objects'
shutil.copytree(root/'vendor/ps2-web-recomp',source)
shutil.copytree(args.generated,generated)
shutil.copy2(args.elf,work/'NTGDVDJ.BIN');shutil.copy2(args.shell,work/'shell.html')
output.mkdir();objects.mkdir()
sdk=args.sdk.resolve(); em=sdk/'upstream/emscripten'
env={**os.environ,'EM_CONFIG':str(sdk/'.emscripten'),'EMSDK_PYTHON':sys.executable,'EM_CACHE':str(work/'em-cache'),'EMCC_CORES':'2','BINARYEN_CORES':'2'}
flags=['-O3','-std=c++20','-DPS2_GPU','-msimd128','-mtail-call','-fwasm-exceptions','-sWASM_LEGACY_EXCEPTIONS=0','-pthread','--use-port=emdawnwebgpu','-I'+str(source/'runtime/include'),'-I'+str(source/'runtime/src'),'-I'+str(generated)]
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
assert sha(work/'NTGDVDJ.BIN')=='8109d5bb29a16fac1f417098ac551364d232df36feb1d7e9fa8134c81b8b6cec'
version=subprocess.check_output([em/'em++','--version'],env=env,text=True); assert '6.0.11' in version.splitlines()[0]
# No precompiled VU registration: use the upstream interpreter/JIT. Diagnostic reads never write guest state.
(work/'diagnostic.cpp').write_text('''#include "ps2/system.hpp"
#include "ps2/memory.hpp"
#include <emscripten.h>
#include <cstdlib>
void register_generated_vu() { ps2::g_options.trace_iop_modules=std::getenv("PS2_UTILITY_TRACE_MODULES")!=nullptr; ps2::g_options.trace_io=std::getenv("PS2_UTILITY_TRACE_IO")!=nullptr; ps2::g_options.trace_syscalls=std::getenv("PS2_UTILITY_TRACE_SYSCALLS")!=nullptr; }
extern "C" EMSCRIPTEN_KEEPALIVE unsigned ps2utility_read32(unsigned a) { return a < 0x02000000u && (a & 3u)==0 ? ps2::ld32(a) : 0; }
''')
for filename,name in [('gs','kGsShader'),('blit','kBlitShader')]:
    content=(source/f'runtime/src/gs/gpu/{filename}.wgsl').read_text()
    (work/(filename+'_wgsl.cpp')).write_text(f'extern const char {name}[];\nconst char {name}[] = R"WGSL({content})WGSL";\n')
cmake=(source/'CMakeLists.txt').read_text()
sources=[source/p for p in re.findall(r'runtime/src/[a-z0-9_/]+\.cpp',cmake)]
sources=list(dict.fromkeys(sources))
sources += [work/'gs_wgsl.cpp',work/'blit_wgsl.cpp',source/'host/web.cpp',work/'diagnostic.cpp',*sorted(generated.glob('*.cpp'))]
commands=[]; start=datetime.datetime.now(datetime.timezone.utc).isoformat()
def compile_one(item):
    i,src=item; obj=objects/(str(i)+'-'+src.stem+'.o'); cmd=[str(em/'em++'),*flags,'-Wno-unused-label','-Wno-unused-variable','-c',str(src),'-o',str(obj)]
    commands.append(cmd); subprocess.run(cmd,env=env,check=True); print('compiled',i,src.name,flush=True); return obj
with concurrent.futures.ThreadPoolExecutor(max_workers=2) as pool: objs=list(pool.map(compile_one,enumerate(sources)))
cmd=[str(em/'em++'),*flags,'--profiling-funcs','-sJSPI','-sALLOW_MEMORY_GROWTH=1','-sINITIAL_MEMORY=268435456','-sPTHREAD_POOL_SIZE=2','-sALLOW_TABLE_GROWTH=1','-lidbfs.js','-sSTACK_SIZE=16777216','-sENVIRONMENT=web','-sMINIFY_HTML=0','-sEXPORTED_FUNCTIONS=_main,_ps2web_pad,_ps2web_pad_connected,_ps2web_resize,_ps2web_gpu_ms,_ps2web_frames,_ps2web_primitives,_ps2web_audio_ring,_ps2web_audio_queued_ms,_ps2web_idle_ms,_ps2web_vu_interpreted','-sEXPORTED_RUNTIME_METHODS=callMain,addRunDependency,removeRunDependency,HEAPU8,ENV','--shell-file',str(work/'shell.html'),'--preload-file',str(work/'NTGDVDJ.BIN')+'@/game/core.elf',*[str(p) for p in objs],'-o',str(output/'index.html')]
commands.append(cmd); subprocess.run(cmd,env=env,check=True)
info={'profile':'isolated-original-network-utility','started_utc':start,'ended_utc':datetime.datetime.now(datetime.timezone.utc).isoformat(),'target_sha256':sha(work/'NTGDVDJ.BIN'),'toolchain':version,'argv':['cdrom0:\\NTGUIDVD\\NTGDVDJ.BIN;1','cdrom0:\\SLPS_254.19;1','1'],'guest_hooks':False,'runtime_patches':False,'diagnostic_options':{'default':'producer quiet','opt_in_environment':['PS2_UTILITY_TRACE_SYSCALLS','PS2_UTILITY_TRACE_MODULES','PS2_UTILITY_TRACE_IO']},'vu':'upstream interpreter/JIT; no registered static VU programs','commands':commands,'sources_sha256':{str(p.relative_to(work)):sha(p) for p in sources},'generated_inputs_sha256':{p.name:sha(p) for p in generated.iterdir() if p.is_file()},'headers_sha256':{str(p.relative_to(work)):sha(p) for p in source.rglob('*.hpp')},'shell_sha256':sha(work/'shell.html'),'sdk_sha256':{str(p.relative_to(sdk)):sha(p) for p in [sdk/'.emscripten',em/'em++',em/'emcc.py',sdk/'upstream/bin/clang',sdk/'upstream/bin/wasm-opt']},'build_script_sha256':sha(pathlib.Path(__file__)),'files_sha256':{p.name:sha(p) for p in output.iterdir() if p.is_file()}}
(output/'build-info.json').write_text(json.dumps(info,indent=2)+'\n'); print('utility ready',flush=True)
