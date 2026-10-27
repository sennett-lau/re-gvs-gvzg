const test=require('node:test'),assert=require('node:assert/strict');
const fs=require('node:fs'),vm=require('node:vm');
const {GameSession}=require('../../poc/lockstep/web/netplay-game.js');
const {LockstepTransport,neutral}=require('../../poc/lockstep/web/netplay-transport.js');
function game(){const t={session:{player:0,input_delay:3,checkpoint_interval:120}};const s=new GameSession(t),m={};s.attach(m);return {s,m};}
test('press and release between slow frames produce one pressed input followed by release',()=>{
 const {s,m}=game();m._ps2web_pad(0,128,128,128,128,128);m._ps2web_pressure(0,0x7f,0,0,0);
 m._ps2web_pad(0,0,128,128,128,128);m._ps2web_pressure(0,0,0,0,0);
 assert.equal(s.captureInput().buttons,128);assert.equal(s.captureInput().buttons,0);
});
test('a confirmed menu action uses a bounded sequence of real controller frames',()=>{
 const {s}=game();const seq=[neutral(),{...neutral(),buttons:128},neutral(),{...neutral(),buttons:8192},neutral()];
 assert.equal(s.queueInputSequence(seq),true);assert.equal(s.queueInputSequence(seq),false);
 assert.deepEqual(seq.map(()=>s.captureInput().buttons),[0,128,0,8192,0]);
 assert.equal(s.captureInput().buttons,0);assert.equal(s.queueInputSequence(Array(61).fill(neutral())),false);
});
test('transport diagnostics retain failure and timing without room credentials',async()=>{
 const t=new LockstepTransport({retryLimit:0,fetch:async()=>{throw Error('Disconnected TOKEN-SECRET https://private.invalid/room');}});
 t.session={room:'ROOM-SECRET',token:'TOKEN-SECRET',invite:'INVITE-SECRET'};
 await assert.rejects(t.call('poll'),/Disconnected \[token\] \[url\]/);
 const report=JSON.stringify(t.snapshot());for(const secret of ['ROOM-SECRET','TOKEN-SECRET','INVITE-SECRET','private.invalid'])assert.ok(!report.includes(secret));
 assert.equal(t.snapshot().failure.action,'poll');assert.ok(t.snapshot().requests[0].elapsedMs>=0);
});
test('the precise multiplayer error survives the native generic stop and log overflow',()=>{
 const source=fs.readFileSync(require.resolve('../../apps/game/shell.html'),'utf8');
 const start=source.indexOf('function fatalError(text) {'),end=source.indexOf("document.getElementById('problem-dismiss')",start);
 let shown;const context={Module:{netplayFailure:{message:'Netplay poll: peer disconnected'}},Date,document:{getElementById:()=>({textContent:'20 fps'})},showProblem:text=>{shown=text;}};
 vm.runInNewContext(source.slice(start,end),context);
 vm.runInNewContext("fatalError('Game stopped: Netplay stopped: missing peer, transport failure or state mismatch')",context);
 assert.equal(context.Module.failure.message,'Game stopped: Netplay poll: peer disconnected');assert.equal(shown,context.Module.failure.message);
});
