const test = require('node:test');
const assert = require('node:assert/strict');
const {RATES,create} = require('../../apps/game/assets/adaptive-render-policy.js');
const good = hz => ({guestRate:1,observedVideoHz:hz,audioQueuedMs:80,audioActive:true,
  renderBusyPercent:50,emuIdlePercent:30,spanMs:1000,visible:true,appliedHz:hz});

test('two overloaded windows lower below observed capacity without changing gameplay Hz', () => {
  const p = create({initialHz:120});
  const slow = {...good(120),guestRate:.82,observedVideoHz:98};
  assert.equal(p.observe(slow).changed,false);
  const result = p.observe(slow);
  assert.equal(result.targetHz,80);
  assert.equal(result.simulationHz,60);
  assert.equal(result.status,'lowered');
  assert.equal(result.changed,true);
});

test('recovery uses sustained headroom, one step, and a settling cooldown', () => {
  const p = create({initialHz:80});
  for(let i=0;i<4;++i) assert.equal(p.observe(good(80)).changed,false);
  assert.equal(p.observe(good(80)).targetHz,90);
  // Requested rate has not reached the boundary yet.
  assert.equal(p.observe(good(80)).status,'pending');
  for(let i=0;i<3;++i) assert.equal(p.observe(good(90)).changed,false);
  for(let i=0;i<4;++i) assert.equal(p.observe(good(90)).changed,false);
  assert.equal(p.observe(good(90)).targetHz,100);
});

test('low audio, high GPU estimate, busy EE, mute and overspeed cannot trigger an increase', () => {
  for(const patch of [{audioQueuedMs:40},{renderBusyPercent:90},{emuIdlePercent:10},{audioActive:false},{guestRate:1.1}]) {
    const p=create({initialHz:80});
    for(let i=0;i<20;++i) assert.equal(p.observe({...good(80),...patch}).changed,false);
    assert.equal(p.snapshot().targetHz,80);
  }
});

test('hysteresis rejects isolated slow samples and interrupted recovery streaks', () => {
  const p=create({initialHz:100});
  for(let i=0;i<10;++i) {
    assert.equal(p.observe({...good(100),guestRate:.8,observedVideoHz:80}).changed,false);
    assert.equal(p.observe(good(100)).changed,false);
  }
  const q=create({initialHz:80});
  for(let i=0;i<4;++i) q.observe(good(80));
  q.observe({...good(80),renderBusyPercent:95});
  for(let i=0;i<4;++i) assert.equal(q.observe(good(80)).changed,false);
});

test('minimum60 remains an honest slow state; maximum120 never increases', () => {
  const p=create({initialHz:60});
  p.observe({...good(60),guestRate:.7,observedVideoHz:42});
  const result=p.observe({...good(60),guestRate:.7,observedVideoHz:42});
  assert.equal(result.targetHz,60);
  assert.equal(result.status,'slow-at-minimum');
  assert.equal(result.changed,false);
  const q=create({initialHz:120});
  for(let i=0;i<30;++i) assert.equal(q.observe(good(120)).changed,false);
});

test('hidden/invalid windows and fixed selections cannot change input or simulation timing', () => {
  for(const hz of RATES) {
    const p=create({initialHz:hz,automatic:false});
    const input=Object.freeze({...good(hz),guestRate:.2,observedVideoHz:hz*.2,inputButtons:12345});
    for(let i=0;i<10;++i) {
      const result=p.observe(input);
      assert.equal(result.targetHz,hz);
      assert.equal(result.simulationHz,60);
      assert.equal(result.changed,false);
      assert.deepEqual(Object.keys(result).sort(),['changed','decisionCount','reason','simulationHz','status','targetHz']);
    }
    assert.equal(input.inputButtons,12345);
  }
  const q=create({initialHz:120});
  for(const patch of [{visible:false},{spanMs:20000},{guestRate:NaN}])
    assert.equal(q.observe({...good(120),...patch}).status,'waiting');
  assert.equal(q.snapshot().targetHz,120);
});
