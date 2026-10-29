import assert from 'node:assert/strict';
import net from 'node:net';
import dgram from 'node:dgram';
import http from 'node:http';
import { once } from 'node:events';
import { spawn } from 'node:child_process';
import { readFile, writeFile, mkdir, open } from 'node:fs/promises';
import { randomBytes, createHash } from 'node:crypto';
import path from 'node:path';
import { NativeByteStream, NativeDatagramSocket } from './transport.mjs';

const [gateway, outputArg] = process.argv.slice(2);
if(!gateway || !outputArg) throw new Error('usage: node transport_probe.mjs BUILT_GATEWAY NEW_PRIVATE_OUTPUT');
const output=path.resolve(outputArg); await mkdir(output,{recursive:false});
const result={started_at:new Date().toISOString(),native_client_connected:false,checks:[]};
const checked=name=>result.checks.push({name,at:new Date().toISOString()});
const servers=[], sockets=new Set(), streams=[];
let child, log;
async function server(handler) {
  const s=net.createServer({allowHalfOpen:true},c=>{sockets.add(c);c.on('close',()=>sockets.delete(c));handler(c);});
  s.listen(0,'127.0.0.1'); await once(s,'listening'); servers.push(s); return s.address().port;
}
const pause=ms=>new Promise(r=>setTimeout(r,ms));
try {
  const udp=dgram.createSocket('udp4');udp.on('message',(data,peer)=>udp.send(data,peer.port,peer.address));
  udp.bind(0,'127.0.0.1');await once(udp,'listening');servers.push(udp);
  const echo=await server(c=>c.pipe(c));
  const quiet=await server(()=>{});
  const eof=await server(c=>c.end(Buffer.from('tail')));
  const reset=await server(c=>c.on('data',()=>c.resetAndDestroy()));
  const half=await server(c=>{let bytes=Buffer.alloc(0);c.on('data',data=>bytes=Buffer.concat([bytes,data]));c.on('end',()=>c.end(Buffer.concat([Buffer.from('after-fin:'),bytes])));});
  const deadServer=net.createServer(); deadServer.listen(0,'127.0.0.1'); await once(deadServer,'listening');
  const dead=deadServer.address().port; await new Promise(r=>deadServer.close(r));
  const reserved=net.createServer(); reserved.listen(0,'127.0.0.1'); await once(reserved,'listening');
  const port=reserved.address().port; await new Promise(r=>reserved.close(r));
  const conf={listen:`127.0.0.1:${port}`,token:'oo-'+randomBytes(24).toString('hex'),origins:['http://127.0.0.1:8641'],
    udp:{echo:`127.0.0.1:${udp.address().port}`},
    endpoints:Object.fromEntries(Object.entries({echo,quiet,eof,reset,dead,half}).map(([k,p])=>[k,`127.0.0.1:${p}`]))};
  const configFile=path.join(output,'gateway.json'); await writeFile(configFile,JSON.stringify(conf,null,2),{mode:0o600});
  log=await open(path.join(output,'gateway.log'),'w');
  child=spawn(path.resolve(gateway),['-config',configFile],{stdio:['ignore',log.fd,log.fd]});
  const url=name=>`ws://${conf.listen}/tcp/${name}`;
  for(let i=0;i<50;i++) {
    if(child.exitCode!==null) throw new Error('gateway exited at startup');
    try { const s=await NativeByteStream.connect(url('echo'),conf.token,{timeoutMs:100}); s.close(); break; }
    catch(error) { if(i===49) throw error; await pause(20); }
  }
  async function connect(name) {const s=await NativeByteStream.connect(url(name),conf.token);streams.push(s);return s;}
  await assert.rejects(NativeByteStream.connect(url('dead'),conf.token),{code:'ECONNREFUSED'});
  checked('real connect refusal preserves ECONNREFUSED');
  await assert.rejects(NativeByteStream.connect(url('echo'),'wrong-capability'),{code:'ECONNABORTED'});
  await assert.rejects(NativeByteStream.connect(url('unknown'),conf.token),{code:'ECONNABORTED'});
  checked('invalid capability and unconfigured endpoint rejected before connect');
  const forbidden=await new Promise((resolve,reject)=>{
    const request=http.request(`http://${conf.listen}/tcp/echo`,{headers:{Connection:'Upgrade',Upgrade:'websocket','Sec-WebSocket-Version':'13','Sec-WebSocket-Key':randomBytes(16).toString('base64'),'Sec-WebSocket-Protocol':conf.token,Origin:'https://unapproved.invalid'}},response=>{response.resume();resolve(response.statusCode);});
    request.on('error',reject);request.on('upgrade',(_,socket)=>{socket.destroy();resolve(101);});request.end();
  });
  assert.equal(forbidden,403);checked('unapproved browser Origin rejected');
  const datagram=await NativeDatagramSocket.connect(`ws://${conf.listen}/udp/echo`,conf.token);streams.push(datagram);
  for(const bytes of [Buffer.alloc(0),Buffer.from([255]),Buffer.from([0,1,2])]){
    assert.equal(await datagram.write(bytes),bytes.length);assert.deepEqual(Buffer.from(await datagram.receive({timeoutMs:1000})),bytes);
  }
  checked('UDP datagram boundaries and zero-length datagrams preserved');
  const stream=await connect('echo');
  assert.equal(await stream.write(Buffer.from([0,255,128,65,0,10])),6);
  assert.deepEqual([...await stream.read(2,{timeoutMs:1000})],[0,255]);
  assert.deepEqual([...await stream.read(4,{timeoutMs:1000})],[128,65,0,10]);
  checked('binary byte preservation, confirmed write count and partial reads');
  const first=stream.read(2,{timeoutMs:1000}),second=stream.read(2,{timeoutMs:1000});
  await stream.write(Buffer.from([1,2,3,4]));
  assert.deepEqual([...await first],[1,2]); assert.deepEqual([...await second],[3,4]);
  checked('concurrent reads complete FIFO without duplicate bytes');
  await assert.rejects(stream.read(1,{timeoutMs:25}),{code:'ETIMEDOUT'});
  const controller=new AbortController(); const cancelled=stream.read(1,{signal:controller.signal}); controller.abort();
  await assert.rejects(cancelled,{code:'ECANCELED'});
  await stream.write(Buffer.from([17])); assert.deepEqual([...await stream.read(1,{timeoutMs:1000})],[17]);
  checked('read timeout and abort preserve a usable stream');
  await assert.rejects(stream.write(new Uint8Array(65537)),{code:'ENOBUFS'});
  checked('oversized writes rejected without sending a partial protocol frame');
  const tail=await connect('eof');
  assert.equal(Buffer.from(await tail.read(2,{timeoutMs:1000})).toString(),'ta');
  assert.equal(Buffer.from(await tail.read(8,{timeoutMs:1000})).toString(),'il');
  assert.equal((await tail.read(8,{timeoutMs:1000})).length,0);
  checked('peer EOF drains buffered bytes before zero-length read');
  const halfStream=await NativeByteStream.connect(url('half'),conf.token);streams.push(halfStream);
  await halfStream.write(Buffer.from('payload'));await halfStream.closeWrite();
  await assert.rejects(halfStream.write(Buffer.from('late')),{code:'EPIPE'});
  const halves=[];for(;;){const data=await halfStream.read(3,{timeoutMs:1000});if(!data.length)break;halves.push(data);}
  assert.equal(Buffer.concat(halves).toString(),'after-fin:payload');
  checked('write-half close preserves real peer response and drains bytes before EOF');
  const rst=await connect('reset'); const failure=rst.read(1,{timeoutMs:1000});
  await rst.write(Buffer.from([1])); await assert.rejects(failure,{code:'ECONNRESET'});
  checked('real peer reset remains ECONNRESET');
  const waiting=await connect('quiet'); const pending=waiting.read(1);
  waiting.close(); await assert.rejects(pending,{code:'ECANCELED'});
  checked('local close cancels pending reads');
  // Write text to the actual gateway and observe its adapter-level error.
  const raw=new WebSocket(url('quiet'),conf.token); await once(raw,'open');
  const controls=[];raw.addEventListener('message',({data})=>{if(typeof data==='string')controls.push(JSON.parse(data));});
  raw.send('text frame is invalid'); await once(raw,'close');
  assert.ok(controls.some(x=>x.event==='error'&&x.code==='EPROTO'));checked('text payload rejected as EPROTO');
  const gone=await connect('quiet'); const lost=gone.read(1,{timeoutMs:1000});
  child.kill('SIGTERM'); await once(child,'exit');
  await assert.rejects(lost,{code:'ECONNABORTED'}); checked('gateway termination reports WebSocket ECONNABORTED, distinct from peer TCP reset');
  result.success=true;
} catch(error) {result.success=false;result.error={message:error.message,stack:error.stack,code:error.code};process.exitCode=1;}
finally {
  for(const s of streams)s.close();
  if(child&&child.exitCode===null&&child.signalCode===null){child.kill('SIGTERM');await once(child,'exit');}
  for(const socket of sockets)socket.destroy();
  await Promise.all(servers.map(s=>new Promise(r=>s.close(r))));await log?.close();
  result.finished_at=new Date().toISOString();result.source_sha256=createHash('sha256').update(await readFile(new URL('./transport.mjs',import.meta.url))).digest('hex');
  await writeFile(path.join(output,'result.json'),JSON.stringify(result,null,2)+'\n');console.log(JSON.stringify(result));
}
