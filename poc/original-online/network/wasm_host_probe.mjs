import assert from 'node:assert/strict';
import { mkdir,readFile,writeFile } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { installOriginalOnlineBridge, hostErrors } from './wasm_host.mjs';
const [state,output]=process.argv.slice(2);if(!state||!output)throw new Error('usage: node wasm_host_probe.mjs PRIVATE_RUN NEW_OUTPUT');
await mkdir(output,{recursive:false});const conf=JSON.parse(await readFile(`${state}/gateway.json`));
const Module={HEAPU8:new Uint8Array(4096)};
const bridge=installOriginalOnlineBridge(Module,{gatewayURL:`ws://${conf.listen}/`,token:conf.token,endpoints:conf.endpoints});
const result={started_at:new Date().toISOString(),native_client_connected:false,wasm_linked:false,checks:[]};
const check=name=>result.checks.push({name,at:new Date().toISOString()});
const pause=ms=>new Promise(r=>setTimeout(r,ms));
async function ready(ticket){for(let i=0;i<1000;i++){if(bridge.adapter.peek(ticket)?.state==='complete')return;await pause(5);}throw new Error('completion deadline');}
const view=()=>new DataView(Module.HEAPU8.buffer);
try{
  assert.equal(bridge.open(4090,100,1,100),0);assert.equal(bridge.lastError,hostErrors.EINVAL);
  assert.equal(bridge.write(1,0xffffffff,3),0);assert.equal(bridge.lastError,hostErrors.EINVAL);
  check('invalid source spans rejected without dereference');
  const [host,port]=conf.endpoints.lobby.split(':');Module.HEAPU8.set(Buffer.from(host),64);
  const ticket=bridge.open(64,host.length,Number(port),6000);assert.ok(ticket);
  const before=Module.HEAPU8.slice();assert.equal(bridge.poll(ticket,128,256,64),0);
  await ready(ticket);assert.deepEqual(Module.HEAPU8,before);
  check('promise completion does not write host or guest memory');
  assert.equal(bridge.poll(ticket,129,256,64),-3);
  assert.equal(bridge.poll(ticket,128,140,64),-3);
  assert.equal(bridge.poll(ticket,4080,256,64),-3);
  check('unaligned, overlapping and out-of-bounds result spans rejected without consumption');
  // Simulate WASM memory growth/replacement before polling.
  Module.HEAPU8=new Uint8Array(8192);assert.equal(bridge.poll(ticket,128,256,64),1);
  const handle=view().getUint32(136,true);assert.ok(handle);assert.equal(view().getUint32(128,true),1);
  assert.equal(bridge.poll(ticket,128,256,64),-1);
  check('poll writes current memory view and consumes completion once');
  const reading=bridge.read(handle,14,2000);await ready(reading);
  const count=bridge.adapter.peek(reading).result.data.length;assert.ok(count>0);
  assert.equal(bridge.poll(reading,128,256,count-1),-4);
  assert.equal(bridge.poll(reading,128,256,count),1);
  assert.equal(view().getUint32(132,true),count);assert.equal(Module.HEAPU8[256],0x18);
  check('insufficient output capacity preserves a completion for retry');
  const invalid=bridge.read(0x7fffffff,1,0);await ready(invalid);
  assert.equal(bridge.poll(invalid,128,256,64),1);assert.equal(view().getUint32(128,true),0);
  assert.equal(view().getUint32(144,true),hostErrors.EBADF);
  check('internal host error is explicit and not an invented AVETCP status');
  const pending=bridge.read(handle,1,0);bridge.reset();await pause(20);
  assert.equal(bridge.poll(pending,128,256,64),-1);check('reset invalidates queued tickets');
  result.success=true;
}catch(error){result.success=false;result.error={message:error.message,stack:error.stack};process.exitCode=1;}
finally{bridge.reset();result.finished_at=new Date().toISOString();result.source_sha256=createHash('sha256').update(await readFile(new URL('./wasm_host.mjs',import.meta.url))).digest('hex');await writeFile(`${output}/result.json`,JSON.stringify(result,null,2)+'\n');console.log(JSON.stringify(result));}
