const test=require('node:test');
const assert=require('node:assert/strict');
const fs=require('node:fs');
const vm=require('node:vm');
const path=require('node:path');
const policy=require('../../apps/game/assets/adaptive-render-policy.js');
const source=fs.readFileSync(path.join(__dirname,'../../apps/game/assets/full-game-adaptive-render.js'),'utf8');
function setup(){
  let time=1000;const calls=[],status=[];
  const values={0:60,6:60,7:48000,8:60,9:1,10:120,11:0,12:0,13:60,14:294912000,15:0,16:2,17:1,18:60};
  const ram=new SharedArrayBuffer(32);Atomics.store(new Int32Array(ram),3,1);
  const Module={running:true,HEAPU8:new Uint8Array(ram),_ps2web_audio_ring:()=>0,_ps2web_experiment_stat:n=>values[n],
    _ps2web_audio_queued_ms:()=>80,_ps2web_gpu_ms:()=>time*.4,_ps2web_idle_ms:()=>time*.3,
    _ps2web_request_fps:hz=>{calls.push(hz);values[10]=hz;return 1;}};
  const context={PS2AdaptiveRenderPolicy:policy,document:{hidden:false},Int32Array,Atomics,setInterval:()=>1,clearInterval(){}};
  vm.createContext(context);vm.runInContext(source,context);
  const control=context.PS2FullGameAdaptiveRender.attach(Module,{mode:'auto',initialHz:120,now:()=>time,onStatus:s=>status.push(s)});
  function advance(guest=1,video=60){time+=1000;values[9]+=guest;values[6]+=video;values[0]+=guest*60;values[7]+=guest*48000;control.sample();}
  return{Module,control,values,calls,status,advance};
}
test('menus remain native60 and preserve120 battle target without policy oscillation',()=>{
  const t=setup();t.control.sample();for(let i=0;i<10;i++)t.advance(.8,48);
  assert.deepEqual(t.calls,[]);assert.equal(t.control.snapshot().policy.targetHz,120);
  assert.equal(t.status.at(-1).decision.status,'mode-60');assert.equal(t.status.at(-1).adaptiveCapable,false);
});
test('scene transition resets measurement windows and battle overload can reduce rendering',()=>{
  const t=setup();t.control.sample();t.advance();
  Object.assign(t.values,{8:120,15:1,16:1795,17:2,18:120});t.advance(.2,24);
  // Transition gap is excluded; normal one-second battle windows follow.
  for(let i=0;i<5;i++)t.advance(.8,96);
  assert.deepEqual(t.calls,[80]);assert.ok(Math.abs(t.control.snapshot().latest.guestRate-.8)<1e-10);
  assert.equal(t.control.snapshot().latest.simulationRate,48);
});
test('learned target survives unsupported scenes and is restored if native scene setup resets request',()=>{
  const t=setup();Object.assign(t.values,{8:120,15:1,17:2,18:120});t.control.sample();
  for(let i=0;i<5;i++)t.advance(.8,96);
  assert.deepEqual(t.calls,[80]);
  Object.assign(t.values,{8:60,15:0,16:2,17:3,18:60});t.advance();t.advance();
  assert.equal(t.control.snapshot().policy.targetHz,80);
  Object.assign(t.values,{8:120,10:120,15:1,16:1795,17:4,18:120});t.advance();
  assert.deepEqual(t.calls,[80,80]);
  assert.equal(t.control.snapshot().changes.filter(c=>c.kind==='scene').length,3);
});
test('native eligibility settling within the same generation also resets the timing window',()=>{
  const t=setup();t.control.sample();t.advance();
  const previous=t.control.snapshot().latest.wallMs;
  Object.assign(t.values,{8:120,15:1,18:120});t.advance(.1,12);
  assert.equal(t.control.snapshot().latest.wallMs,previous);
  assert.equal(t.control.snapshot().changes.at(-1).adaptiveCapable,true);
  t.advance(1,120);assert.equal(t.control.snapshot().latest.guestRate,1);
  assert.deepEqual(t.calls,[]);
});
