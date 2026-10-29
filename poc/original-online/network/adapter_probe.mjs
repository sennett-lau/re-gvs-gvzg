import assert from 'node:assert/strict';
import { readFile, writeFile, mkdir } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { OriginalOnlineAdapter } from './async_adapter.mjs';
const [state, output] = process.argv.slice(2);
if(!state||!output)throw new Error('usage: node adapter_probe.mjs PRIVATE_RUN NEW_OUTPUT');
await mkdir(output,{recursive:false});
const conf=JSON.parse(await readFile(`${state}/gateway.json`));
const adapter=new OriginalOnlineAdapter({gatewayURL:`ws://${conf.listen}/`,token:conf.token,endpoints:conf.endpoints});
const result={started_at:new Date().toISOString(),native_client_connected:false,checks:[]};
const checked=name=>result.checks.push({name,at:new Date().toISOString()});
const pause=ms=>new Promise(r=>setTimeout(r,ms));
async function complete(ticket){for(let i=0;i<1000;i++){const value=adapter.poll(ticket);assert.ok(value);if(value.state==='complete')return value;await pause(5);}throw new Error('completion deadline');}
const [host,portText]=conf.endpoints.lobby.split(':');const port=Number(portText);
try{
  assert.equal(adapter.endpoint('www01.kddi-mmbb.jp',443),'dnas');
  assert.equal(adapter.endpoint('gate1.jp.dnas.playstation.org',443),'dnas');
  assert.throws(()=>adapter.endpoint('unapproved.invalid',443),{code:'EACCES'});
  assert.throws(()=>adapter.endpoint(host,port+100),{code:'EACCES'});
  checked('exact legacy auth and advertised lobby/battle destination routes');
  const opened=adapter.submit({op:'open',host,port});
  assert.equal(adapter.poll(opened).state,'pending');
  const connection=await complete(opened);assert.equal(connection.ok,true);
  assert.equal(adapter.poll(opened),undefined);checked('open completes asynchronously and completion is consumed once');
  const handle=connection.handle;
  let greeting=await complete(adapter.submit({op:'read',handle,maxBytes:14,timeoutMs:1000}));
  assert.equal(greeting.ok,true);assert.equal(greeting.data[0],0x18);
  // Read arbitrary partial bytes; completion copies must not alias a reused guest buffer.
  let remaining=14-greeting.data.length;
  while(remaining>0){const r=await complete(adapter.submit({op:'read',handle,maxBytes:remaining,timeoutMs:1000}));remaining-=r.data.length;}
  const timeout=await complete(adapter.submit({op:'read',handle,maxBytes:1,timeoutMs:20}));
  assert.equal(timeout.error,'ETIMEDOUT');checked('native-facing pending read completes with actual host timeout');
  const pending=adapter.submit({op:'read',handle,maxBytes:1});assert.equal(adapter.cancel(pending),true);
  assert.equal((await complete(pending)).error,'ECANCELED');
  assert.equal(adapter.streams.has(handle),true);checked('cancelling a read preserves session ownership');
  // Echo original lobby command 0x600E without interpreting its arbitrary body.
  const packet=Buffer.from('8101600e0004000200ffffff001122ff','hex');
  const writing=adapter.submit({op:'write',handle,bytes:packet});packet.fill(0);
  assert.equal((await complete(writing)).bytes,16);
  const chunks=[];let count=0;
  while(count<16){const r=await complete(adapter.submit({op:'read',handle,maxBytes:16-count,timeoutMs:1000}));assert.equal(r.ok,true);chunks.push(r.data);count+=r.data.length;}
  const echoed=Buffer.concat(chunks);assert.equal(echoed.subarray(12).toString('hex'),'001122ff');
  checked('write snapshots source bytes and read returns original backend echo');
  const cancelledPacket=Buffer.from('8101600e0004000300ffffffaabbccdd','hex');
  const cancelledWrite=adapter.submit({op:'write',handle,bytes:cancelledPacket});
  assert.equal(adapter.cancel(cancelledWrite),true);
  assert.equal((await complete(cancelledWrite)).error,'ECANCELED');assert.equal(adapter.streams.has(handle),true);
  const afterCancel=[];let afterCount=0;
  while(afterCount<16){const r=await complete(adapter.submit({op:'read',handle,maxBytes:16-afterCount,timeoutMs:1000}));assert.equal(r.ok,true);afterCancel.push(r.data);afterCount+=r.data.length;}
  assert.equal(Buffer.concat(afterCancel).subarray(12).toString('hex'),'aabbccdd');
  checked('cancelled submitted write preserves TCP session and does not pretend issued bytes were unsent');
  const late=adapter.submit({op:'open',host,port});const staleRead=adapter.submit({op:'read',handle,maxBytes:1});
  adapter.reset();await pause(50);
  assert.equal(adapter.poll(late),undefined);assert.equal(adapter.poll(staleRead),undefined);
  assert.equal(adapter.streams.size,0);assert.equal(adapter.requests.size,0);
  const invalid=await complete(adapter.submit({op:'read',handle,maxBytes:1}));assert.equal(invalid.error,'EBADF');
  checked('reset rejects stale callbacks and handles without guest-memory writes');
  assert.throws(()=>adapter.submit({op:'avetcp-guessed-opcode'}),{code:'ENOSYS'});
  checked('unmapped native operations cannot claim success');result.success=true;
}catch(error){result.success=false;result.error={message:error.message,stack:error.stack};process.exitCode=1;}
finally{adapter.reset();result.finished_at=new Date().toISOString();result.source_sha256=createHash('sha256').update(await readFile(new URL('./async_adapter.mjs',import.meta.url))).digest('hex');await writeFile(`${output}/result.json`,JSON.stringify(result,null,2)+'\n');console.log(JSON.stringify(result));}
