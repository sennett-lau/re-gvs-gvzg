const test = require('node:test');
const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const {create} = require('../../apps/game/assets/cadence-debt-pacing.js');

const microtasks = async () => { for (let i = 0; i < 10; ++i) await Promise.resolve(); };
function environment() {
  let time = 0, serial = 0;
  const raf = new Map(), timers = new Map(), tasks = [];
  const options = {now: () => time,
    requestFrame: cb => { const id = ++serial; raf.set(id, cb); return id; }, cancelFrame: id => raf.delete(id),
    setTimer: (cb, delay) => { const id = ++serial; timers.set(id, {at: time + delay, cb}); return id; }, clearTimer: id => timers.delete(id),
    postTask: cb => tasks.push(cb)};
  function advance(ms) {
    const end = time + ms;
    assert.ok(ms >= -1e-6);
    for (;;) {
      const due = [...timers].filter(([, row]) => row.at <= end).sort((a, b) => a[1].at - b[1].at)[0];
      if (!due) break;
      timers.delete(due[0]); time = due[1].at; due[1].cb();
    }
    time = end;
  }
  function frame(ms) { advance(ms); const pending = [...raf.values()]; raf.clear(); for (const cb of pending) cb(time); }
  function drain() { let count = 0; while (tasks.length) { assert.ok(++count < 100); tasks.shift()(); } }
  return {options, advance, frame, drain, timers, raf, now: () => time};
}
async function setup(idleHz, options = {}) {
  const e = environment(); let hz = 0, visible = true;
  const pacer = create({...e.options, getAppliedHz: () => hz, isVisible: () => visible, ...options});
  for (let i = 0; i < 20; ++i) { e.frame(1000 / idleHz); e.drain(); await microtasks(); }
  await pacer.calibrate();
  return {e, pacer, rate: value => { hz = value; }, visible: value => { visible = value; }};
}
const runtimeSource = fs.readFileSync(path.join(__dirname, '../../vendor/ps2-web-recomp/runtime/src/system.cpp'), 'utf8');
const runtimeBody = runtimeSource.match(/EM_ASYNC_JS\(void, ps2_browser_yield, \(\), \{([\s\S]*?)\n\}\);/)[1];
const AsyncFunction = Object.getPrototypeOf(async function () {}).constructor;
const runtimeYield = new AsyncFunction('Module', 'MessageChannel', runtimeBody);

// A synthetic native producer never supplies more frames than its applied
// realtime clock. The real EM_ASYNC_JS yield body and installed FIFO bridge
// control whether the main renderer can consume those ready frames.
async function simulate({idleHz, rafHz = idleHz, targetHz = 120, seconds = 10, enabled = true, workMs = 1}) {
  const state = await setup(idleHz, {cadenceDebt: enabled});
  const {e, pacer} = state; state.rate(targetHz); pacer.resetCadence('start');
  const module = {}; pacer.attach(module);
  let canRender = true, presented = 0, maxPerRefresh = 0, lastPending = null;
  const start = e.now();
  for (let i = 1; i <= Math.floor(seconds * rafHz); ++i) {
    e.frame(start + i * 1000 / rafHz - e.now()); e.drain(); await microtasks();
    let count = 0;
    for (let attempt = 0; attempt < 6; ++attempt) {
      const due = Math.floor((e.now() - start) * targetHz / 1000 + 1e-8);
      if (!canRender || presented >= due) break;
      canRender = false; e.advance(workMs); module.onFrame(); ++presented; ++count;
      lastPending = runtimeYield(module, class {constructor() { throw Error('Installed bridge bypassed'); }}).then(() => { canRender = true; });
      await microtasks(); e.drain(); await microtasks();
    }
    maxPerRefresh = Math.max(maxPerRefresh, count);
  }
  const snapshot = pacer.snapshot();
  assert.ok(presented <= Math.floor((e.now() - start) * targetHz / 1000) + 1, 'pacer cannot create extra native frames');
  pacer.dispose(); if (lastPending) await lastPending;
  return {presented, maxPerRefresh, snapshot, seconds: Math.floor(seconds * rafHz) / rafHz};
}

test('observed55.6Hz calibration retains its evidence and reaches120cadence with occasional bounded third frames', async t => {
  const baseline = await simulate({idleHz: 55.6, enabled: false});
  const candidate = await simulate({idleHz: 55.6});
  assert.ok(Math.abs(candidate.snapshot.observedIdleHz - 55.6) < 0.01);
  assert.equal(candidate.snapshot.budgetDisplayHz, 60);
  assert.equal(candidate.snapshot.presentationsPerRefresh, 2);
  assert.ok(baseline.presented / baseline.seconds < 112, JSON.stringify(baseline));
  assert.ok(candidate.presented / candidate.seconds >= 119.5, JSON.stringify(candidate));
  assert.equal(candidate.maxPerRefresh, 3);
  assert.ok(candidate.snapshot.cadenceExtraPresentations > 50);
  assert.equal(candidate.snapshot.fallbackCount, 0);
  assert.ok(Math.abs(candidate.snapshot.cadenceDebtFrames) <= candidate.snapshot.cadenceDebtLimit);
  t.diagnostic(JSON.stringify({synthetic: true, idleHz: 55.6, baselineFps: baseline.presented / baseline.seconds,
    candidateFps: candidate.presented / candidate.seconds, maximumFramesPerRefresh: candidate.maxPerRefresh,
    extraPresentations: candidate.snapshot.cadenceExtraPresentations, fallbacks: candidate.snapshot.fallbackCount}));
});

test('a60Hz idle calibration can absorb a healthy55.6Hz loaded cadence without retuning calibration', async () => {
  const result = await simulate({idleHz: 60, rafHz: 55.6});
  assert.ok(result.presented / result.seconds >= 119.5, JSON.stringify(result));
  assert.ok(Math.abs(result.snapshot.observedIdleHz - 60) < 0.01);
  assert.equal(result.snapshot.presentationsPerRefresh, 2);
  assert.equal(result.maxPerRefresh, 3);
});

for (const idleHz of [120, 144]) test(`120target on${idleHz}RAF keeps the native clock and needs no extra slot`, async () => {
  const result = await simulate({idleHz});
  assert.ok(result.presented / result.seconds >= 119.5, JSON.stringify(result));
  assert.equal(result.maxPerRefresh, 1);
  assert.equal(result.snapshot.cadenceExtraBursts, 0);
  assert.equal(result.snapshot.fallbackCount, 0);
});

test('7Hz stalls and fallback windows never grant an extra slot or bank unlimited debt', async () => {
  const result = await simulate({idleHz: 60, rafHz: 7});
  assert.equal(result.snapshot.cadenceExtraBursts, 0);
  assert.equal(result.snapshot.cadenceExtraPresentations, 0);
  assert.ok(result.maxPerRefresh <= 2);
  assert.ok(Math.abs(result.snapshot.cadenceDebtFrames) <= result.snapshot.cadenceDebtLimit);
});

for (const targetHz of [80, 90]) test(`${targetHz}target on60Hz calibration cannot gain slots from overload debt`, async () => {
  const result = await simulate({idleHz: 60, targetHz, workMs: 6});
  assert.equal(result.snapshot.cadenceExtraBursts, 0);
  assert.equal(result.snapshot.cadenceExtraPresentations, 0);
  assert.ok(result.maxPerRefresh <= 2);
});

test('the original8ms work limit blocks catch-up even when the target is behind', async () => {
  const result = await simulate({idleHz: 55.6, workMs: 6});
  assert.equal(result.maxPerRefresh, 2);
  assert.equal(result.snapshot.cadenceExtraBursts, 0);
});

test('target/menu transitions and hidden reset discard old cadence debt', async () => {
  const {e, pacer, rate, visible} = await setup(55.6); rate(120);
  for (let i = 0; i < 8; ++i) { e.frame(1000 / 55.6); e.drain(); await microtasks(); }
  assert.ok(pacer.snapshot().cadenceDebtFrames > 1);
  rate(60); e.frame(1000 / 55.6); e.drain();
  assert.equal(pacer.snapshot().cadenceDebtFrames, 0);
  assert.equal(pacer.snapshot().cadenceExtraEligible, false);
  rate(120); e.frame(1000 / 55.6); e.drain();
  assert.equal(pacer.snapshot().cadenceDebtFrames, 0);
  assert.equal(pacer.snapshot().cadenceExtraEligible, false);
  visible(false); pacer.resetCadence('hidden'); e.advance(5000);
  visible(true); pacer.resetCadence('visible');
  e.frame(0); e.drain();
  assert.equal(pacer.snapshot().cadenceDebtFrames, 0);
  assert.equal(pacer.snapshot().cadenceExtraEligible, false);
  assert.equal(pacer.snapshot().cadenceExtraBursts, 0);
  pacer.dispose();
});

test('actual runtime bridge retains FIFO and real task boundaries through reset and teardown', async () => {
  const {e, pacer, rate} = await setup(120); rate(120);
  const module = {}; pacer.attach(module); module.onFrame();
  const order = [];
  const pending = [1, 2, 3].map(n => runtimeYield(module, class {constructor() {throw Error('Unexpected default channel');}}).then(() => order.push(n)));
  await microtasks(); e.drain(); await microtasks(); assert.deepEqual(order, []);
  pacer.resetCadence('visible');
  e.frame(1000 / 120); await microtasks(); assert.deepEqual(order, [], 'RAF callback itself must not resume native work');
  e.drain(); await microtasks(); assert.deepEqual(order, [1]);
  e.drain(); await microtasks(); assert.deepEqual(order, [1, 2]);
  pacer.dispose(); await Promise.all(pending);
  assert.deepEqual(order, [1, 2, 3]);
  assert.equal(e.timers.size, 0); assert.equal(e.raf.size, 0);
});

test('a120to60 transition revokes an already granted extra slot before further work', async () => {
  const {e, pacer, rate} = await setup(55.6); rate(120);
  for (let i = 0; i < 8; ++i) { e.frame(1000 / 55.6); e.drain(); }
  pacer.markPresent(); pacer.markPresent();
  const extra = pacer.afterWork(); e.drain(); await extra;
  assert.equal(pacer.snapshot().cadenceExtraGranted, true);
  rate(60);
  let resumed = false; const waiting = pacer.afterWork().then(() => { resumed = true; });
  e.drain(); await microtasks();
  assert.equal(pacer.snapshot().cadenceExtraGranted, false);
  assert.equal(pacer.snapshot().cadenceDebtFrames, 0);
  assert.equal(resumed, false);
  e.frame(1000 / 55.6); e.drain(); await waiting; pacer.dispose();
});

test('one unhealthy RAF discards debt and requires three healthy callbacks before another extra is eligible', async () => {
  const {e, pacer, rate} = await setup(55.6); rate(120);
  for (let i = 0; i < 8; ++i) { e.frame(1000 / 55.6); e.drain(); }
  assert.equal(pacer.snapshot().cadenceExtraEligible, true);
  e.frame(30); e.drain();
  assert.equal(pacer.snapshot().cadenceExtraEligible, false);
  assert.equal(pacer.snapshot().cadenceDebtFrames, 0);
  for (let i = 1; i <= 3; ++i) {
    e.frame(1000 / 55.6); e.drain();
    assert.equal(pacer.snapshot().cadenceExtraEligible, i === 3);
  }
  pacer.dispose();
});

test('unknown idle calibration never grants extra slots', async () => {
  const e = environment(); const pacer = create({...e.options, getAppliedHz: () => 120});
  e.advance(750); await pacer.calibrate();
  assert.equal(pacer.snapshot().observedIdleHz, null);
  for (let i = 0; i < 12; ++i) { e.frame(1000 / 60); e.drain(); }
  pacer.markPresent(); pacer.markPresent();
  let resumed = false; const waiting = pacer.afterWork().then(() => { resumed = true; });
  e.drain(); await microtasks(); assert.equal(resumed, false);
  assert.equal(pacer.snapshot().cadenceExtraBursts, 0);
  pacer.dispose(); await waiting;
});

test('a frame completed between RAF and its posted paint task is charged to the new quota', async () => {
  const {e, pacer, rate} = await setup(60); rate(120);
  e.frame(1000 / 60); e.drain(); pacer.markPresent(); pacer.markPresent();
  e.frame(1000 / 60); // Post-paint task has not executed yet.
  pacer.markPresent(); e.drain(); pacer.markPresent();
  let resumed = false; const waiting = pacer.afterWork().then(() => { resumed = true; });
  e.drain(); await microtasks(); assert.equal(resumed, false);
  assert.equal(pacer.snapshot().cadenceExtraBursts, 0);
  e.frame(1000 / 60); e.drain(); await waiting; pacer.dispose();
});

test('the outer visibility gate holds actual native yields through fallback and resets cadence before resume', async () => {
  const {attach} = require('../../apps/game/assets/local-game-visibility.js');
  class Events {
    constructor() { this.hidden = false; this.listeners = new Map(); }
    addEventListener(type, cb) { if (!this.listeners.has(type)) this.listeners.set(type, new Set()); this.listeners.get(type).add(cb); }
    removeEventListener(type, cb) { this.listeners.get(type)?.delete(cb); }
    emit(type) { for (const cb of this.listeners.get(type) || []) cb({type}); }
  }
  const state = await setup(60); const {e, pacer} = state; state.rate(120);
  const module = {}, document = new Events(), window = new Events();
  pacer.attach(module);
  const visibility = attach(module, {document, window, postTask: e.options.postTask,
    onHidden: () => pacer.resetCadence('hidden'), onVisible: () => pacer.resetCadence('visible')});
  module.onFrame(); module.onFrame();
  let resumed = false;
  const pending = runtimeYield(module, class {constructor() {throw Error('Installed visibility bypassed');}}).then(() => { resumed = true; });
  await microtasks(); e.drain(); await microtasks(); assert.equal(resumed, false);
  state.visible(false); document.hidden = true; document.emit('visibilitychange');
  e.advance(50); e.drain(); await microtasks(); e.drain();
  assert.equal(resumed, false);
  assert.equal(pacer.snapshot().cadenceDebtFrames, 0);
  state.visible(true); document.hidden = false; document.emit('visibilitychange');
  await microtasks(); assert.equal(resumed, false);
  e.drain(); await pending;
  assert.equal(pacer.snapshot().cadenceExtraEligible, false);
  assert.equal(pacer.snapshot().cadenceDebtFrames, 0);
  visibility.dispose(); pacer.dispose();
});
