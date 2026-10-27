/* Bounded presentation scheduling for the isolated 120-Hz experiment.
 * This does not change guest/video/audio clocks. It only yields the main
 * rendering thread so the browser gets a paint opportunity between bursts.
 */
(function (root, factory) {
  const api = factory();
  if (typeof module === 'object' && module.exports) module.exports = api;
  else root.PS2ExperimentalPacing = api;
})(typeof globalThis !== 'undefined' ? globalThis : this, function () {
  'use strict';

  function create(options = {}) {
    const now = options.now || (() => performance.now());
    const requestFrame = options.requestFrame || (callback => requestAnimationFrame(callback));
    const cancelFrame = options.cancelFrame || (id => cancelAnimationFrame(id));
    const setTimer = options.setTimer || ((callback, delay) => setTimeout(callback, delay));
    const clearTimer = options.clearTimer || (id => clearTimeout(id));
    const targetHz = options.targetHz || 120;
    const burstMs = options.burstMs === undefined ? 8 : options.burstMs;
    const calibrationSamples = options.calibrationSamples || 18;
    const calibrationTimeoutMs = options.calibrationTimeoutMs || 750;
    const historyLimit = options.historyLimit || 120;
    if (!(targetHz > 0 && burstMs > 0 && calibrationSamples >= 2 && historyLimit >= 1)) {
      throw new Error('Invalid experimental presentation pacing options');
    }

    // A promise resolved inside RAF resumes JSPI/Wasm before paint. Release
    // waiters in a later task instead, after the RAF rendering opportunity.
    let channel = null;
    const taskQueue = [];
    let disposed = false;
    const postTask = options.postTask || (callback => {
      if (typeof MessageChannel !== 'undefined') {
        if (!channel) {
          channel = new MessageChannel();
          channel.port1.onmessage = () => {
            const task = taskQueue.shift();
            if (!disposed && task) task();
          };
        }
        taskQueue.push(callback);
        channel.port2.postMessage(0);
      } else {
        setTimer(() => { if (!disposed) callback(); }, 0);
      }
    });

    let resolveReady;
    const ready = new Promise(resolve => { resolveReady = resolve; });
    const intervals = [];
    const history = [];
    const waiters = [];
    const workWaiters = [];
    const workResolvers = new Set();
    let calibrated = false;
    let calibrationReason = 'pending';
    let observedIdleHz = null;
    let budgetDisplayHz = 60;
    let perRefresh = 2;
    let fallbackDelayMs = 42;
    let lastRafAt = null;
    let lastRafCompleted = 0;
    let rafCount = 0;
    let freshRafCount = 0;
    let coalescedPresentations = 0;
    let completedPresentations = 0;
    let grantedPresentations = 0;
    let fallbackCount = 0;
    let used = 0;
    let burstStartedAt = null;
    let waitingForPaintTask = false;
    let fallbackTimer = null;
    let calibrationTimer = null;
    let rafId = null;
    let workBurstStartedAt = now();
    let completedAtBurstStart = 0;
    let attachedModule = null;
    let bridge = null;
    let wrappedOnFrame = null;
    let previousOnFrame = null;
    let rafEpoch = 0;

    function finishCalibration(reason) {
      if (calibrated || disposed) return;
      calibrated = true;
      calibrationReason = reason;
      if (calibrationTimer !== null) clearTimer(calibrationTimer);
      calibrationTimer = null;
      if (intervals.length >= 6) {
        const sorted = intervals.slice().sort((a, b) => a - b);
        const middle = sorted.length >> 1;
        const median = sorted.length & 1 ? sorted[middle] : (sorted[middle - 1] + sorted[middle]) / 2;
        observedIdleHz = 1000 / median;
        budgetDisplayHz = Math.max(60, Math.min(240, observedIdleHz));
      }
      // A slightly jittery 120-Hz calibration must still use one presentation
      // per refresh. Never increase the budget from a loaded/stalled RAF rate.
      perRefresh = budgetDisplayHz >= targetHz * 0.95 ? 1 : Math.min(2, Math.ceil(targetHz / budgetDisplayHz));
      fallbackDelayMs = Math.min(50, Math.max(34, 2000 / budgetDisplayHz + 8));
      resolveReady(snapshot());
    }

    function canGrant() {
      return !waitingForPaintTask && used < perRefresh &&
        (used === 0 || now() - burstStartedAt < burstMs);
    }

    function grant(resolve) {
      if (used === 0) burstStartedAt = now();
      ++used;
      ++grantedPresentations;
      resolve();
    }

    function armFallback() {
      if (fallbackTimer !== null || (!waiters.length && !workWaiters.length) || disposed) return;
      fallbackTimer = setTimer(() => {
        fallbackTimer = null;
        if ((!waiters.length && !workWaiters.length) || disposed) return;
        ++fallbackCount;
        openBurst();
      }, fallbackDelayMs);
    }

    function openBurst(completedBaseline = completedPresentations) {
      if (disposed) return;
      if (fallbackTimer !== null) clearTimer(fallbackTimer);
      fallbackTimer = null;
      waitingForPaintTask = false;
      used = 0;
      burstStartedAt = null;
      workBurstStartedAt = now();
      // In afterWork mode a frame may finish after RAF but before this task.
      // It belongs to this refresh's quota and must not be erased here.
      completedAtBurstStart = completedBaseline;
      while (waiters.length && canGrant()) grant(waiters.shift());
      while (workWaiters.length) workWaiters.shift()();
      armFallback();
    }

    function onFrame() {
      if (disposed) return;
      const at = now();
      const interval = lastRafAt === null ? null : at - lastRafAt;
      lastRafAt = at;
      ++rafCount;
      if (!calibrated && interval !== null && interval > 0 && interval <= 100) {
        intervals.push(interval);
        if (intervals.length >= calibrationSamples) finishCalibration('samples');
      }
      const completed = completedPresentations - lastRafCompleted;
      lastRafCompleted = completedPresentations;
      if (completed > 0) ++freshRafCount;
      coalescedPresentations += Math.max(0, completed - 1);
      history.push({atMs: at, intervalMs: interval, completedSincePreviousRaf: completed});
      if (history.length > historyLimit) history.shift();
      waitingForPaintTask = true;
      const epoch = ++rafEpoch;
      const completedAtRaf = completedPresentations;
      postTask(() => { if (epoch === rafEpoch) openBurst(completedAtRaf); });
      rafId = requestFrame(onFrame);
    }

    function beforePresent() {
      if (disposed) return Promise.reject(new Error('Presentation pacer is disposed'));
      if (!calibrated) return ready.then(beforePresent);
      return new Promise(resolve => {
        if (!waiters.length && canGrant()) grant(resolve);
        else { waiters.push(resolve); armFallback(); }
      });
    }

    function markPresent() {
      if (!disposed) ++completedPresentations;
    }

    // Alternate integration for the existing ps2_browser_yield EM_ASYNC_JS:
    // called after every render_pending busy/present result, including partial
    // frames. Each invocation retains a task yield even when budget remains.
    function afterWork() {
      if (disposed) return Promise.reject(new Error('Presentation pacer is disposed'));
      if (!calibrated) return ready.then(afterWork);
      return new Promise(resolve => {
        const done = () => { workResolvers.delete(done); resolve(); };
        workResolvers.add(done);
        postTask(() => {
          if (disposed) { done(); return; }
          const remaining = completedPresentations - completedAtBurstStart < perRefresh &&
            now() - workBurstStartedAt < burstMs;
          if (!waitingForPaintTask && remaining) done();
          else { workWaiters.push(done); armFallback(); }
        });
      });
    }

    function attach(module) {
      if (attachedModule || module.yieldPort) throw new Error('Attach the presentation pacer once, before callMain');
      attachedModule = module;
      module.yieldWaiters = [];
      // The main render loop has one outstanding yield. Preserve FIFO even if
      // another producer is introduced; never run caller resolvers inside RAF.
      let chain = Promise.resolve();
      bridge = {postMessage() {
        const resume = () => {
          const resolve = module.yieldWaiters.shift();
          if (resolve) resolve();
        };
        chain = chain.then(() => disposed ? undefined : afterWork()).then(resume, error => {
          resume();
          if (!disposed && typeof module.onAbort === 'function') module.onAbort(String(error));
        });
      }};
      module.yieldPort = bridge;
      previousOnFrame = module.onFrame;
      wrappedOnFrame = function (...args) {
        markPresent();
        if (previousOnFrame) return previousOnFrame.apply(this, args);
      };
      module.onFrame = wrappedOnFrame;
      return module;
    }

    function snapshot() {
      return {
        targetHz, calibrated, calibrationReason, observedIdleHz, budgetDisplayHz,
        presentationsPerRefresh: perRefresh, burstMs, fallbackDelayMs,
        rafCount, freshRafCount, completedPresentations, grantedPresentations,
        coalescedPresentations, fallbackCount, waitingPresentations: waiters.length,
        waitingWork: workWaiters.length, bridgeAttached: !!attachedModule,
        // Fresh RAF callbacks and submissions do not prove different pixels.
        uniqueVisualFrames: null,
        rafHistory: history.map(row => ({...row})),
      };
    }

    function dispose() {
      if (disposed) return;
      disposed = true;
      if (rafId !== null) cancelFrame(rafId);
      if (fallbackTimer !== null) clearTimer(fallbackTimer);
      if (calibrationTimer !== null) clearTimer(calibrationTimer);
      taskQueue.length = 0;
      if (channel) { channel.port1.close(); channel.port2.close(); }
      // Release a suspended JSPI invocation on teardown; future calls reject.
      while (waiters.length) waiters.shift()();
      while (workWaiters.length) workWaiters.shift()();
      for (const resolve of workResolvers) resolve();
      if (attachedModule) {
        if (attachedModule.onFrame === wrappedOnFrame) attachedModule.onFrame = previousOnFrame;
        // Pending bridge calls are already suspended native continuations.
        // Release them on teardown, then let a future run create its own port.
        while (attachedModule.yieldWaiters.length) attachedModule.yieldWaiters.shift()();
        if (attachedModule.yieldPort === bridge) delete attachedModule.yieldPort;
      }
      if (!calibrated) resolveReady(snapshot());
    }

    calibrationTimer = setTimer(() => finishCalibration('timeout'), calibrationTimeoutMs);
    rafId = requestFrame(onFrame);
    return {calibrate: () => ready, beforePresent, afterWork, markPresent, attach, snapshot, dispose};
  }

  return {create};
});
