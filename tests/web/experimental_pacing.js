'use strict';
const assert = require('node:assert/strict');
const test = require('node:test');
const fs = require('node:fs');
const path = require('node:path');
const {create} = require('../../apps/game/assets/experimental-pacing.js');

function environment() {
  let time = 0, serial = 0;
  const raf = new Map(), timers = new Map(), tasks = [];
  const options = {
    now: () => time,
    requestFrame: cb => { const id = ++serial; raf.set(id, cb); return id; },
    cancelFrame: id => raf.delete(id),
    setTimer: (cb, delay) => { const id = ++serial; timers.set(id, {at: time + delay, cb}); return id; },
    clearTimer: id => timers.delete(id),
    postTask: cb => tasks.push(cb),
  };
  function advance(ms) {
    const until = time + ms;
    for (;;) {
      const due = [...timers].filter(([, t]) => t.at <= until).sort((a, b) => a[1].at - b[1].at)[0];
      if (!due) break;
      timers.delete(due[0]); time = due[1].at; due[1].cb();
    }
    time = until;
  }
  function frame(ms) {
    advance(ms);
    const callbacks = [...raf.values()]; raf.clear();
    for (const cb of callbacks) cb(time);
  }
  function paintTasks() { while (tasks.length) tasks.shift()(); }
  return {options, advance, frame, paintTasks, timers, raf};
}

async function calibrate(hz, extra = {}) {
  const e = environment();
  const pacer = create({...e.options, ...extra});
  for (let i = 0; i < 20; ++i) { e.frame(1000 / hz); e.paintTasks(); }
  await pacer.calibrate();
  return {e, pacer};
}

for (const [hz, budget] of [[60, 2], [90, 2], [119.5, 1], [120, 1], [144, 1]]) {
  test(`idle ${hz} Hz fixes a ${budget}-presentation refresh budget`, async () => {
    const {e, pacer} = await calibrate(hz);
    assert.equal(pacer.snapshot().presentationsPerRefresh, budget);
    for (let i = 0; i < budget; ++i) { await pacer.beforePresent(); pacer.markPresent(); }
    let released = false;
    const waiting = pacer.beforePresent().then(() => { released = true; });
    await Promise.resolve(); assert.equal(released, false);
    e.frame(1000 / hz);
    await Promise.resolve(); assert.equal(released, false, 'RAF itself must not resume Wasm before paint');
    e.paintTasks(); await waiting;
    assert.equal(released, true);
    assert.equal(pacer.snapshot().freshRafCount, 1);
    assert.equal(pacer.snapshot().coalescedPresentations, budget - 1);
    assert.equal(pacer.snapshot().uniqueVisualFrames, null);
    pacer.dispose();
  });
}

test('8ms elapsed burst limit yields even if the second presentation quota remains', async () => {
  const {e, pacer} = await calibrate(60);
  await pacer.beforePresent(); pacer.markPresent();
  e.advance(8);
  let released = false;
  const waiting = pacer.beforePresent().then(() => { released = true; });
  await Promise.resolve(); assert.equal(released, false);
  e.frame(8.667); e.paintTasks(); await waiting;
  assert.equal(pacer.snapshot().fallbackCount, 0);
  pacer.dispose();
});

test('loaded 7Hz RAF never increases the calibrated budget, and fallback is bounded', async () => {
  const {e, pacer} = await calibrate(120);
  await pacer.beforePresent(); pacer.markPresent();
  let released = false;
  const waiting = pacer.beforePresent().then(() => { released = true; });
  e.advance(33); await Promise.resolve(); assert.equal(released, false);
  e.advance(1); await waiting;
  assert.equal(pacer.snapshot().fallbackCount, 1);
  e.frame(1000 / 7); e.paintTasks();
  assert.equal(pacer.snapshot().presentationsPerRefresh, 1);
  assert.ok(pacer.snapshot().observedIdleHz > 119);
  pacer.dispose();
});

test('an idle 60Hz display admits 120 presentations in one second without accumulated backlog', async () => {
  const {e, pacer} = await calibrate(60);
  const before = pacer.snapshot().completedPresentations;
  for (let i = 0; i < 60; ++i) {
    e.frame(1000 / 60 - (i ? 2 : 0)); e.paintTasks();
    await pacer.beforePresent(); pacer.markPresent();
    e.advance(2);
    await pacer.beforePresent(); pacer.markPresent();
  }
  assert.equal(pacer.snapshot().completedPresentations - before, 120);
  assert.equal(pacer.snapshot().fallbackCount, 0);
  pacer.dispose();
});

test('a 120Hz display admits one frame each refresh rather than imposing a 60Hz cap', async () => {
  const {e, pacer} = await calibrate(120);
  const before = pacer.snapshot().completedPresentations;
  for (let i = 0; i < 120; ++i) {
    e.frame(1000 / 120); e.paintTasks();
    await pacer.beforePresent(); pacer.markPresent();
  }
  assert.equal(pacer.snapshot().completedPresentations - before, 120);
  assert.equal(pacer.snapshot().fallbackCount, 0);
  pacer.dispose();
});

test('missing idle RAF completes calibration conservatively and teardown releases waiters', async () => {
  const e = environment();
  const pacer = create(e.options);
  e.advance(750); await pacer.calibrate();
  assert.equal(pacer.snapshot().calibrationReason, 'timeout');
  assert.equal(pacer.snapshot().observedIdleHz, null);
  assert.equal(pacer.snapshot().presentationsPerRefresh, 2);
  await pacer.beforePresent(); await pacer.beforePresent();
  const waiting = pacer.beforePresent();
  pacer.dispose(); await waiting;
  await assert.rejects(pacer.beforePresent(), /disposed/);
  assert.equal(e.raf.size, 0);
  assert.equal(e.timers.size, 0);
});

const microtasks = async () => { for (let i = 0; i < 8; ++i) await Promise.resolve(); };

test('afterWork preserves task yields, bounds two 60Hz presentations and waits past paint', async () => {
  const {e, pacer} = await calibrate(60);
  let released = false;
  pacer.markPresent();
  const first = pacer.afterWork().then(() => { released = true; });
  await microtasks(); assert.equal(released, false, 'must retain an actual task yield');
  e.paintTasks(); await first;
  released = false;
  pacer.markPresent();
  const second = pacer.afterWork().then(() => { released = true; });
  e.paintTasks(); await microtasks(); assert.equal(released, false, 'two presentations exhaust the refresh budget');
  e.frame(1000 / 60);
  await microtasks(); assert.equal(released, false, 'RAF callback itself is not a completed paint');
  e.paintTasks(); await second;
  pacer.dispose();
});

test('partial render work yields to RAF after the wall-time budget even with no completed frame', async () => {
  const {e, pacer} = await calibrate(120);
  e.advance(6);
  const partial = pacer.afterWork(); e.paintTasks(); await partial;
  e.advance(6);
  let released = false;
  const waiting = pacer.afterWork().then(() => { released = true; });
  e.paintTasks(); await microtasks(); assert.equal(released, false);
  e.frame(1000 / 120); e.paintTasks(); await waiting;
  assert.equal(pacer.snapshot().completedPresentations, 0);
  pacer.dispose();
});

test('yieldPort bridge preserves FIFO and onFrame while enforcing a 120Hz paint boundary', async () => {
  const {e, pacer} = await calibrate(120);
  let originalFrames = 0;
  const module = {onFrame: () => { ++originalFrames; }};
  pacer.attach(module);
  assert.throws(() => pacer.attach(module), /once/);
  module.onFrame();
  assert.equal(originalFrames, 1);
  assert.equal(pacer.snapshot().completedPresentations, 1);
  const order = [];
  module.yieldWaiters.push(() => order.push(1)); module.yieldPort.postMessage(0);
  module.yieldWaiters.push(() => order.push(2)); module.yieldPort.postMessage(0);
  await microtasks(); e.paintTasks(); await microtasks();
  assert.deepEqual(order, []);
  e.frame(1000 / 120); e.paintTasks(); await microtasks();
  assert.deepEqual(order, [1]);
  e.paintTasks(); await microtasks();
  assert.deepEqual(order, [1, 2]);
  pacer.dispose();
  module.onFrame(); assert.equal(originalFrames, 2);
  assert.equal(module.yieldPort, undefined);
});

test('teardown resolves afterWork even before its posted task and with queued bridge calls', async () => {
  const {pacer} = await calibrate(120);
  const pending = pacer.afterWork();
  const module = {};
  pacer.attach(module);
  const order = [];
  module.yieldWaiters.push(() => order.push(1)); module.yieldPort.postMessage(0);
  module.yieldWaiters.push(() => order.push(2)); module.yieldPort.postMessage(0);
  pacer.dispose();
  await pending; await microtasks();
  assert.deepEqual(order, [1, 2]);
});

test('actual runtime EM_ASYNC_JS browser_yield body uses the installed bridge and awaits paint', async () => {
  const source = fs.readFileSync(path.join(__dirname, '../../vendor/ps2-web-recomp/runtime/src/system.cpp'), 'utf8');
  const match = source.match(/EM_ASYNC_JS\(void, ps2_browser_yield, \(\), \{([\s\S]*?)\n\}\);/);
  assert.ok(match, 'runtime browser_yield contract changed; review the adapter');
  const AsyncFunction = Object.getPrototypeOf(async function () {}).constructor;
  const runtimeYield = new AsyncFunction('Module', 'MessageChannel', match[1]);
  const {e, pacer} = await calibrate(120);
  const module = {};
  pacer.attach(module); module.onFrame();
  let resumed = false;
  const waiting = runtimeYield(module, class {
    constructor() { throw new Error('Runtime must use the installed yieldPort'); }
  }).then(() => { resumed = true; });
  await microtasks(); e.paintTasks(); await microtasks();
  assert.equal(resumed, false);
  e.frame(1000 / 120); await microtasks();
  assert.equal(resumed, false);
  e.paintTasks(); await waiting;
  assert.equal(resumed, true);
  assert.deepEqual(module.yieldWaiters, []);
  pacer.dispose();
});

test('a presentation finishing between RAF and its paint task is charged to the new refresh', async () => {
  const {e, pacer} = await calibrate(60);
  e.frame(1000 / 60);
  pacer.markPresent(); // An already-running frame finishes before the RAF task.
  e.paintTasks();
  let released = false;
  pacer.markPresent(); // This is the second, not the first, in the new refresh.
  const waiting = pacer.afterWork().then(() => { released = true; });
  e.paintTasks(); await microtasks();
  assert.equal(released, false, 'must not grant a third presentation before next RAF');
  e.frame(1000 / 60); e.paintTasks(); await waiting;
  const row = pacer.snapshot().rafHistory.at(-1);
  assert.equal(row.completedSincePreviousRaf, 2);
  pacer.dispose();
});
