// SPDX-License-Identifier: AGPL-3.0-only
// Protocol encoding and sequence derived from inada-s/zdxsv at 35ffbdad9257eca5043bb4977d26cc07468b5045
// pkg/lobby/flow_test.go, pkg/lobby/message/message.go, pkg/sessionid/sessionid.go.
// This is a synthetic protocol peer, never an original game instance.
import assert from 'node:assert/strict';
import { readFile, writeFile, mkdir } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { NativeByteStream } from './transport.mjs';

const [state, output] = process.argv.slice(2);
if (!state || !output) throw new Error('usage: node protocol_probe.mjs PRIVATE_RUN NEW_OUTPUT_DIRECTORY');
await mkdir(output, { recursive: false });
const conf = JSON.parse(await readFile(`${state}/gateway.json`));
const streams = [];
const evidence = { started_at: new Date().toISOString(), native_client_connected: false,
  kind: 'synthetic protocol clients through real WebSocket/TCP gateway and pinned backend', checks: [], packets: [] };
const check = (name, details = {}) => evidence.checks.push({ name, at: new Date().toISOString(), ...details });
const hash = (bytes) => createHash('sha256').update(bytes).digest('hex');
async function connect(endpoint) {
  const stream = await NativeByteStream.connect(`ws://${conf.listen}/tcp/${endpoint}`, conf.token);
  streams.push(stream); return stream;
}
async function exact(stream, n) {
  const bytes = Buffer.alloc(n); let offset = 0;
  while (offset < n) {
    const chunk = await stream.read(n - offset, { timeoutMs: 4000 });
    if (!chunk.length) throw new Error(`EOF with ${n-offset} bytes missing`);
    bytes.set(chunk, offset); offset += chunk.length;
  }
  return bytes;
}
async function http(path, body = null) {
  const stream = await connect('login');
  const data = body === null ? '' : body;
  const request = `${body === null ? 'GET' : 'POST'} ${path} HTTP/1.1\r\nHost: www01.kddi-mmbb.jp\r\nConnection: close\r\nContent-Type: application/x-www-form-urlencoded\r\nContent-Length: ${Buffer.byteLength(data)}\r\n\r\n${data}`;
  await stream.write(Buffer.from(request));
  const chunks = [];
  for (;;) { const chunk = await stream.read(65536, { timeoutMs: 4000 }); if (!chunk.length) break; chunks.push(chunk); }
  stream.close();
  const bytes = Buffer.concat(chunks); assert.match(bytes.toString('ascii'), /^HTTP\/1.1 200 /);
  return new TextDecoder('shift_jis').decode(bytes);
}
const word = (n) => { const b = Buffer.alloc(2); b.writeUInt16BE(n); return b; };
const plain = (s) => Buffer.concat([word(Buffer.byteLength(s)), Buffer.from(s)]);
function encrypted(seq, text) {
  const bytes = Buffer.from(text); let sum = 0; const out = Buffer.alloc(bytes.length);
  const fix = [21,23,10,17,23,19,6,13], masks = [0x33,0x30,0x3c,0x34,0x2d,0x30,0x3c,0x34];
  for (let j=0; j<bytes.length; j++) {
    const i = j & 255, p = seq & 255;
    out[j] = bytes[j] ^ ((fix[i&7] - (i&0xf8) - p + (((p-9+i)&255)&masks[i&7])*2)&255);
    sum = (sum + bytes[j]) & 65535;
  }
  return Buffer.concat([word(out.length+2), word(sum), out]);
}
function sessionValue(session) {
  assert.match(session, /^\d{8}$/);
  return String(Number(`0${session.slice(0,4)}0${session.slice(4)}`)+100001).padStart(10,'0');
}
function readString(body) { const n = body.readUInt16BE(0); assert.ok(n+2 <= body.length); return body.subarray(2,2+n).toString(); }
class Lobby {
  constructor(stream, label) { this.stream=stream; this.label=label; this.seq=2; this.queue=[]; }
  async send(command, category=1, body=Buffer.alloc(0), seq=this.seq++) {
    const packet=Buffer.alloc(12+body.length);
    packet[0]=0x81; packet[1]=category; packet.writeUInt16BE(command,2); packet.writeUInt16BE(body.length,4);
    packet.writeUInt16BE(seq,6); packet.writeUInt32BE(0x00ffffff,8); packet.set(body,12);
    // Deliberately fragment original protocol across separate WebSocket writes.
    await this.stream.write(packet.subarray(0,5)); await this.stream.write(packet.subarray(5));
    evidence.packets.push({ peer:this.label, direction:'send', command, category, seq, bytes:packet.length, sha256:hash(packet) });
    return seq;
  }
  async expect(command, category) {
    for (let count=0; count<100; count++) {
      const index=this.queue.findIndex(m=>m.command===command && m.category===category);
      if(index!==-1) return this.queue.splice(index,1)[0];
      const header=await exact(this.stream,12);
      assert.equal(header[0],0x18);
      const body=await exact(this.stream,header.readUInt16BE(4));
      const m={ command:header.readUInt16BE(2), category:header[1], seq:header.readUInt16BE(6), status:header.readUInt32BE(8), body };
      evidence.packets.push({peer:this.label,direction:'receive',command:m.command,category:m.category,seq:m.seq,bytes:12+body.length,sha256:hash(Buffer.concat([header,body]))});
      if(m.command===0x6001 && m.category===1) await this.send(0x6001,2,Buffer.alloc(0),m.seq);
      else this.queue.push(m);
    }
    throw new Error('too many unrelated lobby packets');
  }
  async ask(command,body=Buffer.alloc(0)) {
    const seq=await this.send(command,1,body); const answer=await this.expect(command,2);
    assert.equal(answer.seq,seq); return answer;
  }
  async login(account,name,user='******') {
    const key=await this.expect(0x6101,1);
    await this.send(0x6101,2,Buffer.concat([plain(sessionValue(account.session)),encrypted(key.seq,account.key)]),key.seq);
    const first=await this.expect(0x6103,1); await this.send(0x6103,2,Buffer.alloc(0),first.seq);
    await this.expect(0x6131,0x10);
    const seq=this.seq++;
    await this.send(0x6132,1,Buffer.concat([encrypted(seq,user),encrypted(seq,name)]),seq);
    const resultQuestion=await this.expect(0x6138,1);
    await this.expect(0x6104,0x10);
    const decided=await this.expect(0x6132,2); assert.equal(decided.status,0x00ffffff);
    return {user:readString(decided.body),resultQuestion};
  }
}
try {
  const invalid=await http('/login','login_key=short');
  assert.ok(!invalid.includes('CRS-GAME-START')); check('invalid login key does not issue a session');
  const players=[];
  for(let i=0;i<2;i++) {
    const registered=await http('/register');
    const key=registered.match(/<!--INPUT-IDS\s+([a-zA-Z0-9]{10})-->/)?.[1]; assert.ok(key);
    const login=await http('/login',`login_key=${key}`);
    const session=login.match(/"OK",\s*"[a-zA-Z0-9]{10}",\s*"(\d{8})"/)?.[1]; assert.ok(session);
    assert.ok(login.includes(`"${conf.endpoints.lobby}"`));
    const account={key,session}; const peer=new Lobby(await connect('lobby'),`peer${i}`);
    const {user}=await peer.login(account,`pilot${i}`); assert.equal(user.length,6);
    players.push({account,peer,user});
  }
  assert.notEqual(players[0].account.session,players[1].account.session);
  check('two distinct backend-issued sessions authenticate through original lobby protocol');
  const countReply=await players[0].peer.ask(0x6301);
  const lobbyCount=countReply.body.readUInt16BE(0);
  assert.ok(lobbyCount>0 && lobbyCount<=100);
  for(let lobbyID=1;lobbyID<=lobbyCount;++lobbyID){
    const answer=await players[0].peer.ask(0x6308,word(lobbyID));
    assert.equal(answer.body.readUInt16BE(0),lobbyID);
    const description=readString(answer.body.subarray(2));
    assert.match(description,new RegExp(`^<B>Lobby ${String(lobbyID).padStart(2,'0')}`));
    assert.ok(description.endsWith('<END>'));assert.ok(answer.body.length<128);
  }
  check('all displayed lobby descriptions use ordinary text without executable injection',{lobbyCount});
  // Original named-room path: create, reject second ownership, join, faction entry, start.
  for(const p of players) assert.equal((await p.peer.ask(0x6305,word(4))).status,0x00ffffff);
  const [owner,guest]=players.map(p=>p.peer);
  assert.equal((await owner.ask(0x6407,word(1))).status,0x00ffffff);
  assert.equal((await guest.ask(0x6407,word(1))).status,0xffffffff);
  let seq=owner.seq++;
  await owner.send(0x6609,1,encrypted(seq,'local-test'),seq); await owner.expect(0x6609,2);
  await owner.ask(0x660C);
  await guest.ask(0x6406,Buffer.from([0,1,0,0,0,0]));
  await owner.expect(0x6503,0x10);
  await owner.ask(0x6504,Buffer.from([1])); await guest.ask(0x6504,Buffer.from([2]));
  await owner.send(0x6508,0x10);
  const codes=[];
  for(const p of players) {
    await p.peer.expect(0x6910,0x10);
    assert.equal((await p.peer.ask(0x6911)).body[0],2);
    codes.push(readString((await p.peer.ask(0x6915)).body));
    const address=(await p.peer.ask(0x6916)).body;
    assert.deepEqual([...address.subarray(2,6)],[127,0,0,1]);
    assert.equal(address.readUInt16BE(8),Number(conf.endpoints.battle.split(':')[1]));
  }
  assert.equal(codes[0],codes[1]); check('named room create, second-owner rejection, join and shared battle allocation',{battle_code:codes[0]});
  for(const p of players) {
    await p.peer.ask(0x6002); p.peer.stream.close();
    p.battle=await connect('battle');
    assert.equal((await exact(p.battle,12)).toString('hex'),'280110310000000100ffffff');
    await p.battle.write(Buffer.concat([Buffer.alloc(12),Buffer.from(sessionValue(p.account.session))]));
  }
  // Server has no join acknowledgement. A read timeout below permits processing but is not accepted as join proof.
  await assert.rejects(players[0].battle.read(1,{timeoutMs:100}),{code:'ETIMEDOUT'});
  await players[0].battle.write(Buffer.from([3,0x0a]));
  await assert.rejects(players[1].battle.read(1,{timeoutMs:50}),{code:'ETIMEDOUT'});
  await players[0].battle.write(Buffer.from([0x0b,4,0x0c,0x0d,0x0e]));
  assert.equal((await exact(players[1].battle,7)).toString('hex'),'030a0b040c0d0e');
  await players[1].battle.write(Buffer.from([2,0x55]));
  assert.equal((await exact(players[0].battle,2)).toString('hex'),'0255');
  check('allocated sessions relay fragmented size-prefixed battle packets in both directions',{gameplay_payload:false});
  const unknown=await connect('battle'); await exact(unknown,12);
  await unknown.write(Buffer.concat([Buffer.alloc(12),Buffer.from('0000000000')]));
  assert.equal((await unknown.read(1,{timeoutMs:3000})).length,0); unknown.close();
  check('unknown battle session receives real EOF');
  // Protocol-invalid frame must close the actual battle stream, not fabricate success.
  await players[0].battle.write(Buffer.from([0]));
  assert.equal((await players[0].battle.read(1,{timeoutMs:3000})).length,0);
  players[0].battle.close(); players[1].battle.close();
  check('zero-length battle frame closes its stream');
  for(const [i,p] of players.entries()) {
    const peer=new Lobby(await connect('lobby'),`rejoin${i}`);
    const result=await peer.login(p.account,`pilot${i}`,p.user);
    assert.equal(result.user,p.user);
    await peer.ask(0x6006); peer.stream.close();
  }
  check('same sessions reconnect as the same users and log out');
  evidence.success=true;
} catch(error) {
  evidence.success=false; evidence.error={name:error.name,message:error.message,stack:error.stack,code:error.code}; process.exitCode=1;
} finally {
  for(const stream of streams) stream.close();
  evidence.finished_at=new Date().toISOString();
  evidence.sources={};
  for(const file of ['protocol_probe.mjs','transport.mjs']) evidence.sources[file]=hash(await readFile(new URL(file,import.meta.url)));
  await writeFile(`${output}/result.json`,JSON.stringify(evidence,null,2)+'\n');
  console.log(JSON.stringify({success:evidence.success,checks:evidence.checks,error:evidence.error}));
}
