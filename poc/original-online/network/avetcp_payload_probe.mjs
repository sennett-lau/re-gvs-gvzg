import assert from 'node:assert/strict';
import { mkdir,readFile,writeFile } from 'node:fs/promises';
import { OriginalOnlineAdapter } from './async_adapter.mjs';
import { AvetcpPayloadSlice } from './avetcp_payload.mjs';
const [state,output]=process.argv.slice(2);if(!state||!output)throw new Error('usage: node avetcp_payload_probe.mjs PRIVATE_RUN NEW_OUTPUT');
await mkdir(output,{recursive:false});const conf=JSON.parse(await readFile(`${state}/gateway.json`));
const adapter=new OriginalOnlineAdapter({gatewayURL:`ws://${conf.listen}/`,token:conf.token,endpoints:conf.endpoints});
const ram=new Uint8Array(4096),view=new DataView(ram.buffer),slice=new AvetcpPayloadSlice(adapter,()=>ram);
const result={started_at:new Date().toISOString(),native_client_connected:false,original_module_executed:false,checks:[]};
const check=name=>result.checks.push({name,at:new Date().toISOString()});
const pause=ms=>new Promise(r=>setTimeout(r,ms));
async function done(ticket,owner=adapter){for(let i=0;i<1000;i++){const r=owner.poll(ticket);if(r?.state==='complete'||(r?.kind&&r.kind!=='pending'))return r;await pause(5);}throw new Error('completion timeout');}
async function open(endpoint){const [host,port]=conf.endpoints[endpoint].split(':');return (await done(adapter.submit({op:'open',host,port:Number(port)}))).handle;}
async function receive(nativeHandle,n,destination=512){view.setInt16(64,nativeHandle,true);view.setInt16(66,n,true);view.setUint32(68,destination,true);view.setUint32(72,0,true);const begun=slice.begin(0x4119,64);assert.equal(begun.kind,'pending');return done(begun.ticket,slice);}
try{
  assert.equal(slice.begin(0x4105,64).kind,'unsupported');
  assert.deepEqual(slice.begin(0x4119,64),{kind:'native-result',status:-4});
  const handle=await open('lobby');slice.adopt(0,handle);
  let received=await receive(0,14);assert.equal(received.status,14);assert.equal(ram[512],0x18);
  check('original signed handle and receive envelope consume real lobby greeting');
  ram.set(Buffer.from('8101600e0004000200ffffff001122ff','hex'),256);
  view.setInt16(64,0,true);view.setUint32(68,0,true);ram[72]=0;ram[73]=2;
  view.setInt16(76,8,true);view.setUint32(80,256,true);view.setInt16(84,8,true);view.setUint32(88,264,true);
  const sent=slice.begin(0x4118,64);assert.equal(sent.kind,'pending');ram.fill(0,256,272);
  assert.equal((await done(sent.ticket,slice)).status,16);
  received=await receive(0,16);assert.equal(received.status,16);assert.equal(Buffer.from(ram.subarray(524,528)).toString('hex'),'001122ff');
  check('two original vectors snapshot bytes and carry original echo through real transport');
  ram[73]=5;view.setInt16(64,0,true);view.setUint32(68,0,true);ram[72]=0;assert.equal(slice.begin(0x4118,64).status,-12);
  ram[73]=1;view.setInt16(76,-1,true);assert.equal(slice.begin(0x4118,64).kind,'unsupported');
  view.setInt16(76,0,true);assert.equal(slice.begin(0x4118,64).status,0);
  view.setInt16(76,1,true);view.setUint32(68,1234,true);assert.equal(slice.begin(0x4118,64).kind,'unsupported');
  check('verified vector errors retained; unverified lengths and ASRs cannot report success');
  const battle=await open('battle');slice.adopt(1,battle);await receive(1,12);
  ram.fill(0,256,278);ram.set(Buffer.from('0000000000'),268);
  view.setInt16(64,1,true);view.setUint32(68,0,true);ram[72]=0;ram[73]=1;
  view.setInt16(76,22,true);view.setUint32(80,256,true);
  assert.equal((await done(slice.begin(0x4118,64).ticket,slice)).status,22);
  assert.equal((await receive(1,1)).status,-8);
  check('actual rejected-session EOF becomes verified AVETCP -8, not POSIX zero');
  result.success=true;
}catch(error){result.success=false;result.error={message:error.message,stack:error.stack};process.exitCode=1;}
finally{slice.reset();result.finished_at=new Date().toISOString();await writeFile(`${output}/result.json`,JSON.stringify(result,null,2)+'\n');console.log(JSON.stringify(result));}
