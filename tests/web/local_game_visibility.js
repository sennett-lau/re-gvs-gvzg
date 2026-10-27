'use strict';
const assert = require('node:assert/strict');
const test = require('node:test');
const fs = require('node:fs');
const path = require('node:path');
const {attach} = require('../../apps/game/assets/local-game-visibility.js');
const {create: createPacer} = require('../../apps/game/assets/experimental-pacing.js');

class Events {
  constructor() { this.listeners = new Map(); this.hidden = false; }
  addEventListener(type, listener) {
    if (!this.listeners.has(type)) this.listeners.set(type, new Set());
    this.listeners.get(type).add(listener);
  }
  removeEventListener(type, listener) { this.listeners.get(type)?.delete(listener); }
  emit(type, data = {}) { for (const listener of [...(this.listeners.get(type) || [])]) listener({type, ...data}); }
  count() { return [...this.listeners.values()].reduce((n, set) => n + set.size, 0); }
}

function environment(extra = {}, module = {}) {
  const document = new Events(), window = new Events(), tasks = [];
  const adapter = attach(module, {document, window, postTask: task => tasks.push(task), ...extra});
  const oneTask = () => { if (tasks.length) tasks.shift()(); };
  const allTasks = () => { let count = 0; while (tasks.length) { assert.ok(++count < 100); oneTask(); } };
  const hidden = value => { document.hidden = value; document.emit('visibilitychange'); };
  return {document, window, module, adapter, tasks, oneTask, allTasks, hidden};
}

function nativeYield(module, onResume) {
  return new Promise(resolve => {
    module.yieldWaiters.push(() => { onResume?.(); resolve(); });
    module.yieldPort.postMessage(0);
  });
}

const microtasks = async () => { for (let i = 0; i < 8; ++i) await Promise.resolve(); };

test('60Hz/no upstream port: hidden native work stays suspended until a visible task', async () => {
  const e = environment();
  e.hidden(true);
  let resumed = false;
  const waiting = nativeYield(e.module, () => { resumed = true; });
  assert.equal(e.tasks.length, 0, 'hidden work must not schedule recurring release tasks');
  e.allTasks(); await microtasks(); assert.equal(resumed, false);
  e.hidden(false); await microtasks(); assert.equal(resumed, false);
  e.allTasks(); await waiting;
  assert.equal(resumed, true);
  assert.equal(e.adapter.snapshot().pendingContinuations, 0);
  e.adapter.dispose();
});

test('a pacer continuation already in flight is held if the page becomes hidden', async () => {
  const module = {yieldWaiters: []};
  let forwarded = 0, upstreamResolve;
  const upstream = {postMessage() { ++forwarded; upstreamResolve = module.yieldWaiters.shift(); }};
  module.yieldPort = upstream;
  const e = environment({}, module);
  let resumed = false;
  const waiting = nativeYield(module, () => { resumed = true; });
  assert.equal(forwarded, 1);
  e.hidden(true); upstreamResolve();
  e.allTasks(); await microtasks(); assert.equal(resumed, false);
  e.hidden(false); await microtasks(); assert.equal(resumed, false);
  e.allTasks(); await waiting;
  assert.equal(forwarded, 1, 'resuming must not request another upstream grant');
  e.adapter.dispose(); assert.equal(module.yieldPort, upstream);
});

test('multiple suspended continuations retain FIFO through repeated visibility changes', async () => {
  const e = environment();
  const order = [];
  e.hidden(true);
  const pending = [1, 2, 3].map(n => nativeYield(e.module, () => order.push(n)));
  e.hidden(false); e.oneTask(); // The upstream grant is ready, resume task is pending.
  e.hidden(true); e.allTasks(); await microtasks();
  assert.deepEqual(order, []);
  e.hidden(false); e.hidden(false); e.allTasks(); await Promise.all(pending);
  assert.deepEqual(order, [1, 2, 3]);
  assert.equal(e.adapter.snapshot().highWaterMark, 3);
  e.adapter.dispose();
});

test('hide/return callbacks fire once per transition; async audio failure does not hold rendering', async () => {
  const calls = [], errors = [];
  const e = environment({onHidden: () => calls.push('hide'), onVisible: () => {
    calls.push('show'); return Promise.reject(new Error('audio resume denied'));
  }, onError: error => errors.push(error.message)});
  e.hidden(true); e.hidden(true);
  const waiting = nativeYield(e.module);
  e.hidden(false); e.hidden(false); e.allTasks(); await waiting; await microtasks();
  assert.deepEqual(calls, ['hide', 'show']);
  assert.deepEqual(errors, ['audio resume denied']);
  e.adapter.dispose();
});

test('normal pagehide detaches without waking the unloading native loop', async () => {
  let pageHides = 0, resumed = false;
  const e = environment({onPageHide: () => { ++pageHides; }});
  nativeYield(e.module, () => { resumed = true; });
  e.window.emit('pagehide', {persisted: false});
  e.allTasks(); await microtasks();
  assert.equal(resumed, false);
  assert.equal(pageHides, 1);
  assert.equal(e.adapter.snapshot().pendingContinuations, 0);
  assert.equal(e.adapter.snapshot().disposed, true);
  assert.equal(e.document.count() + e.window.count(), 0);
  assert.equal(e.module.yieldPort, undefined);
});

test('persisted pagehide keeps a bounded paused continuation and pageshow resumes it', async () => {
  const e = environment();
  e.window.emit('pagehide', {persisted: true});
  let resumed = false;
  const waiting = nativeYield(e.module, () => { resumed = true; });
  e.allTasks(); await microtasks(); assert.equal(resumed, false);
  assert.equal(e.adapter.snapshot().cached, true);
  e.window.emit('pageshow', {persisted: true});
  await microtasks(); assert.equal(resumed, false);
  e.allTasks(); await waiting;
  assert.equal(e.adapter.snapshot().cached, false);
  e.adapter.dispose();
});

test('remote host skip leaves existing yield behavior and lifecycle untouched', () => {
  const upstream = {}, module = {yieldPort: upstream};
  const e = environment({skip: true}, module);
  e.hidden(true);
  assert.equal(module.yieldPort, upstream);
  assert.equal(e.document.count() + e.window.count(), 0);
  assert.equal(e.adapter.snapshot().skipped, true);
  e.adapter.dispose();
});

test('hidden pending memory is explicitly bounded', async () => {
  const e = environment({maxPending: 2});
  e.hidden(true);
  nativeYield(e.module); nativeYield(e.module);
  await assert.rejects(nativeYield(e.module), /Too many pending/);
  assert.equal(e.adapter.snapshot().pendingContinuations, 2);
  assert.equal(e.tasks.length, 0);
  e.adapter.dispose();
});

test('actual runtime browser_yield body composes with visibility suspension', async () => {
  const source = fs.readFileSync(path.join(__dirname, '../../vendor/ps2-web-recomp/runtime/src/system.cpp'), 'utf8');
  const match = source.match(/EM_ASYNC_JS\(void, ps2_browser_yield, \(\), \{([\s\S]*?)\n\}\);/);
  assert.ok(match);
  const AsyncFunction = Object.getPrototypeOf(async function () {}).constructor;
  const runtimeYield = new AsyncFunction('Module', 'MessageChannel', match[1]);
  const e = environment(); e.hidden(true);
  let resumed = false;
  const waiting = runtimeYield(e.module, class {
    constructor() { throw new Error('Runtime bypassed installed visibility port'); }
  }).then(() => { resumed = true; });
  e.allTasks(); await microtasks(); assert.equal(resumed, false);
  e.hidden(false); e.allTasks(); await waiting;
  assert.equal(resumed, true);
  e.adapter.dispose();
});

test('actual presentation pacer fallback cannot wake a hidden native continuation', async () => {
  const document = new Events(), window = new Events(), tasks = [], timers = new Map();
  let time = 0, nextTimer = 0, raf;
  const drainTasks = () => { let n = 0; while (tasks.length) { assert.ok(++n < 100); tasks.shift()(); } };
  const pacer = createPacer({now: () => time,
    requestFrame: callback => { raf = callback; return 1; }, cancelFrame() {},
    setTimer: (callback, delay) => { const id = ++nextTimer; timers.set(id, {callback, at: time + delay}); return id; },
    clearTimer: id => timers.delete(id), postTask: callback => tasks.push(callback)});
  for (let i = 0; i < 20; ++i) { time += 1000 / 60; raf(time); drainTasks(); }
  await pacer.calibrate();
  const module = {};
  pacer.attach(module);
  const visibility = attach(module, {document, window, postTask: callback => tasks.push(callback)});
  module.onFrame(); module.onFrame(); // Exhaust the real pacer's two-frame quota.
  let resumed = false;
  const waiting = nativeYield(module, () => { resumed = true; });
  await microtasks(); drainTasks(); await microtasks();
  assert.equal(pacer.snapshot().waitingWork, 1);
  document.hidden = true; document.emit('visibilitychange');
  time += 50;
  for (const [id, timer] of [...timers]) if (timer.at <= time) { timers.delete(id); timer.callback(); }
  await microtasks(); drainTasks(); await microtasks();
  assert.equal(pacer.snapshot().fallbackCount, 1);
  assert.equal(resumed, false);
  assert.equal(visibility.snapshot().pendingContinuations, 1);
  assert.equal(timers.size, 0, 'the hidden continuation must not restart fallback timers');
  document.hidden = false; document.emit('visibilitychange');
  await microtasks(); assert.equal(resumed, false);
  drainTasks(); await waiting;
  assert.equal(resumed, true);
  assert.equal(pacer.snapshot().completedPresentations, 2);
  visibility.dispose(); pacer.dispose();
});
