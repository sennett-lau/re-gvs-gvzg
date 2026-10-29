// Uses only fake EventTarget sockets: no backend, browser, or native game traffic.
import assert from 'node:assert/strict';
import { readFile, writeFile, mkdir } from 'node:fs/promises';
import { createHash } from 'node:crypto';

const [output] = process.argv.slice(2);
if (!output) throw new Error('usage: node cancellation_probe.mjs NEW_PRIVATE_OUTPUT');
await mkdir(output, { recursive: false });
const result = { started_at: new Date().toISOString(), native_client_connected: false,
  scope: 'Offline transport lifecycle regression with fake EventTarget sockets; no network, browser or game traffic', checks: [] };
const previousWebSocket = globalThis.WebSocket;
import { OriginalOnlineAdapter } from './async_adapter.mjs';
import { NativeByteStream } from './transport.mjs';
class OfflineSocket extends EventTarget {
  static instances = [];
  static constructorHook = null;
  constructor(url) {
    super(); this.url = url; this.closeCalls = 0; this.sent = [];
    OfflineSocket.instances.push(this); OfflineSocket.constructorHook?.();
  }
  close() { ++this.closeCalls; }
  send(bytes) { assert.equal(this.closeCalls, 0); this.sent.push(new Uint8Array(bytes)); }
  event(value) { this.dispatchEvent(new MessageEvent('message', { data: JSON.stringify(value) })); }
  bytes(value) { this.dispatchEvent(new MessageEvent('message', { data: new Uint8Array(value).buffer })); }
}
globalThis.WebSocket = OfflineSocket;
const tick = () => new Promise(resolve => setImmediate(resolve));
const make = () => new OriginalOnlineAdapter({ gatewayURL: 'ws://127.0.0.1:18820/', token: 'offline', endpoints: {} });
const openRequest = { op: 'open', host: 'gate1.jp.dnas.playstation.org', port: 443, timeoutMs: 0 };
async function test(name, fn) {
  try { await fn(); result.checks.push({ name, passed: true, at: new Date().toISOString() }); }
  catch (error) { result.checks.push({ name, passed: false, at: new Date().toISOString() }); throw error; }
}

try {

for (const op of ['open', 'dns']) for (const action of ['cancel', 'discard', 'reset']) {
  await test(`${op}: ${action} closes unacknowledged handshake`, async () => {
    const adapter = make();
    const ticket = adapter.submit(op === 'open' ? openRequest : { op, bytes: new Uint8Array(12) });
    const ws = OfflineSocket.instances.at(-1);
    assert.equal(ws.closeCalls, 0); await tick(); assert.equal(ws.closeCalls, 0);
    assert.equal(adapter.poll(ticket).state, 'pending');
    adapter[action](ticket); await tick(); assert.equal(ws.closeCalls, 1);
    const result = adapter.poll(ticket);
    if (action === 'cancel') assert.equal(result.error, 'ECANCELED'); else assert.equal(result, undefined);
    assert.equal(adapter.requests.size, 0); assert.equal(adapter.streams.size, 0);
    ws.event({ event: 'open' }); await tick();
    assert.equal(ws.sent.length, 0); assert.equal(ws.closeCalls, 1); assert.equal(adapter.streams.size, 0);
  });
}
await test('pre-aborted connect creates no socket', async () => {
  const control = new AbortController(); control.abort(); const before = OfflineSocket.instances.length;
  await assert.rejects(NativeByteStream.connect('ws://127.0.0.1:18820/tcp/dnas','offline',{timeoutMs:0,signal:control.signal}), {code:'ECANCELED'});
  assert.equal(OfflineSocket.instances.length, before);
});
await test('abort during socket construction closes the created socket', async () => {
  const control = new AbortController(); OfflineSocket.constructorHook = () => control.abort();
  try {
    await assert.rejects(NativeByteStream.connect('ws://127.0.0.1:18820/tcp/dnas','offline',{timeoutMs:0,signal:control.signal}), {code:'ECANCELED'});
    assert.equal(OfflineSocket.instances.at(-1).closeCalls, 1);
  } finally { OfflineSocket.constructorHook = null; }
});
await test('handshake/abort microtask race produces cancellation and no retained handle', async () => {
  const adapter = make(); const ticket = adapter.submit(openRequest); const ws = OfflineSocket.instances.at(-1);
  ws.event({event:'open'}); adapter.cancel(ticket); await tick();
  assert.equal(adapter.poll(ticket).error,'ECANCELED'); assert.equal(adapter.streams.size,0); assert.equal(ws.closeCalls,1);
});
await test('explicit host timeout preserves ETIMEDOUT', async () => {
  await assert.rejects(NativeByteStream.connect('ws://127.0.0.1:18820/tcp/dnas','offline',{timeoutMs:2}),{code:'ETIMEDOUT'});
  assert.equal(OfflineSocket.instances.at(-1).closeCalls,1);
});
await test('normal open, read cancellation, byte write, late write acknowledgment and reset', async () => {
  const adapter = make(); let ticket=adapter.submit(openRequest); const ws=OfflineSocket.instances.at(-1);
  ws.event({event:'open'}); await tick(); const opened=adapter.poll(ticket); assert.equal(opened.ok,true);
  const handle=opened.handle; ticket=adapter.submit({op:'read',handle,maxBytes:4}); adapter.cancel(ticket);
  assert.equal(adapter.poll(ticket).error,'ECANCELED'); assert.equal(ws.closeCalls,0);
  ticket=adapter.submit({op:'write',handle,bytes:new Uint8Array([4,5,6])});
  const frame=ws.sent.at(-1); assert.deepEqual([...frame.slice(4)],[4,5,6]);
  adapter.cancel(ticket); assert.equal(adapter.poll(ticket).error,'ECANCELED'); assert.equal(ws.closeCalls,0);
  ws.event({event:'sent',id:new DataView(frame.buffer).getUint32(0),bytes:3}); await tick();
  ticket=adapter.submit({op:'read',handle,maxBytes:4}); ws.bytes([7,8]); await tick();
  assert.deepEqual([...adapter.poll(ticket).data],[7,8]); assert.equal(ws.closeCalls,0);
  adapter.reset(); assert.equal(ws.closeCalls,1); assert.equal(adapter.streams.size,0);
});
await test('normal DNS preserves packet bytes and closes owned socket', async () => {
  const adapter=make(); const bytes=new Uint8Array(12);bytes[1]=42;
  const ticket=adapter.submit({op:'dns',bytes});const ws=OfflineSocket.instances.at(-1);
  ws.event({event:'open'});await tick();const frame=ws.sent.at(-1);assert.deepEqual(frame.slice(4),bytes);
  ws.event({event:'sent',id:new DataView(frame.buffer).getUint32(0),bytes:12});ws.bytes(bytes);await tick();
  const result=adapter.poll(ticket);assert.equal(result.ok,true);assert.deepEqual(result.data,bytes);assert.equal(ws.closeCalls,1);
});
await test('DNS cancellation after open also closes a pending write',async()=>{
  const adapter=make();const ticket=adapter.submit({op:'dns',bytes:new Uint8Array(12)});const ws=OfflineSocket.instances.at(-1);
  ws.event({event:'open'});await tick();assert.equal(ws.sent.length,1);adapter.cancel(ticket);await tick();
  assert.equal(adapter.poll(ticket).error,'ECANCELED');assert.equal(ws.closeCalls,1);
});
await test('repeated reset does not accumulate untracked pending sockets',async()=>{
  const adapter=make();const before=OfflineSocket.instances.length;
  for(let i=0;i<64;i++){adapter.submit(i%2 ? openRequest : {op:'dns',bytes:new Uint8Array(12)});adapter.reset();}
  await tick();assert.equal(adapter.requests.size,0);assert.equal(adapter.streams.size,0);
  assert.equal(OfflineSocket.instances.slice(before).filter(ws=>!ws.closeCalls).length,0);
});
await test('successful connect removes its abort listener and timer before ownership handoff',async()=>{
  class CountedSignal extends EventTarget {
    aborted=false; listeners=new Set();
    addEventListener(type,fn,options){if(type==='abort')this.listeners.add(fn);super.addEventListener(type,fn,options);}
    removeEventListener(type,fn,options){if(type==='abort')this.listeners.delete(fn);super.removeEventListener(type,fn,options);}
    abort(){this.aborted=true;this.dispatchEvent(new Event('abort'));}
  }
  const savedSet=globalThis.setTimeout,savedClear=globalThis.clearTimeout,active=new Set();
  globalThis.setTimeout=(fn,ms)=>{const id={fn,ms};active.add(id);return id;};
  globalThis.clearTimeout=id=>active.delete(id);
  const signal=new CountedSignal();let stream;
  try{
    const pending=NativeByteStream.connect('ws://127.0.0.1:18820/tcp/dnas','offline',{timeoutMs:6000,signal});
    const ws=OfflineSocket.instances.at(-1);assert.equal(active.size,1);assert.equal(signal.listeners.size,1);
    ws.event({event:'open'});stream=await pending;
    assert.equal(active.size,0);assert.equal(signal.listeners.size,0);
    signal.abort();assert.equal(ws.closeCalls,0);stream.close();assert.equal(ws.closeCalls,1);
  }finally{globalThis.setTimeout=savedSet;globalThis.clearTimeout=savedClear;stream?.close();}
});
await test('cancel after connect handoff but before adapter finish closes late stale stream',async()=>{
  const adapter=make();const ticket=adapter.submit(openRequest);const ws=OfflineSocket.instances.at(-1);
  ws.event({event:'open'});
  await Promise.resolve(); // Resume connect and remove its handshake listener before adapter finish.
  assert.equal(adapter.peek(ticket).state,'pending');assert.equal(ws.closeCalls,0);
  adapter.cancel(ticket);assert.equal(ws.closeCalls,0);
  await tick();assert.equal(ws.closeCalls,1);assert.equal(adapter.streams.size,0);
  assert.equal(adapter.poll(ticket).error,'ECANCELED');
});
  result.success = true;
} catch (error) {
  result.success = false; result.error = { message: error.message, stack: error.stack, code: error.code };
  process.exitCode = 1;
} finally {
  globalThis.WebSocket = previousWebSocket;
  result.finished_at = new Date().toISOString();
  result.fake_socket_count = OfflineSocket.instances.length;
  result.source_sha256 = {};
  for (const name of ['transport.mjs', 'async_adapter.mjs', 'cancellation_probe.mjs']) {
    result.source_sha256[name] = createHash('sha256').update(await readFile(new URL(name, import.meta.url))).digest('hex');
  }
  await writeFile(`${output}/result.json`, JSON.stringify(result, null, 2) + '\n');
  console.log(JSON.stringify(result));
}
