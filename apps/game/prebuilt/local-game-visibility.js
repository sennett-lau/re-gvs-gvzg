/* Pause local rendering at the existing native browser_yield boundary.
 * Attach after the presentation pacer and before callMain. This only owns the
 * main-thread continuation; bounded runtime queues apply worker backpressure.
 * Remote video hosts should pass skip:true and keep their existing behavior.
 */
(function (root, factory) {
  const api = factory();
  if (typeof module === 'object' && module.exports) module.exports = api;
  else root.PS2LocalGameVisibility = api;
})(typeof globalThis !== 'undefined' ? globalThis : this, function () {
  'use strict';

  function attach(Module, options = {}) {
    if (options.skip) return {
      snapshot: () => ({enabled: false, skipped: true, disposed: false, pendingContinuations: 0}),
      dispose() {},
    };
    const document = options.document || globalThis.document;
    const lifecycle = options.window || globalThis;
    const maxPending = options.maxPending || 32;
    if (!document || !document.addEventListener || !lifecycle.addEventListener || maxPending < 1) {
      throw new Error('Invalid local-game visibility environment');
    }
    if (Module.yieldWaiters && Module.yieldWaiters.length) {
      throw new Error('Attach visibility control before callMain, with no pending yield');
    }
    const previousPort = Module.yieldPort;
    Module.yieldWaiters = Module.yieldWaiters || [];
    const records = [];
    const tasks = [];
    let channel = null;
    let disposed = false;
    let cached = false;
    let forwarded = null;
    let hidden = !!document.hidden;
    let hiddenEvents = 0, visibleEvents = 0, resumedContinuations = 0;
    let queuedWhileHidden = 0, highWaterMark = 0, callbackErrors = 0;

    const postTask = options.postTask || (callback => {
      if (!channel) {
        channel = new MessageChannel();
        channel.port1.onmessage = () => {
          const task = tasks.shift();
          if (!disposed && task) task();
        };
      }
      tasks.push(callback);
      channel.port2.postMessage(0);
    });

    function snapshot() {
      return {enabled: true, skipped: false, disposed, hidden, cached,
        pendingContinuations: records.length, upstreamPending: !!forwarded,
        hiddenEvents, visibleEvents, resumedContinuations, queuedWhileHidden,
        highWaterMark, callbackErrors, maxPending};
    }

    function report(error) {
      ++callbackErrors;
      if (typeof options.onError === 'function') {
        try { options.onError(error); } catch (_) {}
      }
    }

    function notify(name, event) {
      if (typeof options[name] !== 'function') return;
      try { Promise.resolve(options[name](event, snapshot())).catch(report); }
      catch (error) { report(error); }
    }

    // Equivalent to the runtime's default MessageChannel yield if no pacer
    // installed a port. No timer repeatedly releases work while hidden.
    const upstream = previousPort || {postMessage() {
      postTask(() => {
        if (disposed) return;
        const resolve = Module.yieldWaiters.shift();
        if (resolve) resolve();
      });
    }};

    function pump() {
      if (disposed || hidden || !records.length) return;
      const record = records[0];
      if (record.ready) {
        if (record.resumeScheduled) return;
        record.resumeScheduled = true;
        postTask(() => {
          record.resumeScheduled = false;
          if (disposed || hidden || records[0] !== record) return;
          records.shift();
          ++resumedContinuations;
          const resume = record.resume;
          record.resume = null;
          if (resume) resume();
          pump();
        });
      } else if (!forwarded) {
        forwarded = record;
        // The original runtime does push(resolve); postMessage() synchronously.
        // Our public port removes that last resolver, retaining it privately.
        // Only this sentinel is exposed to an upstream pacer's FIFO shift().
        Module.yieldWaiters.push(() => {
          if (disposed) return;
          forwarded = null;
          record.ready = true;
          pump();
        });
        try { upstream.postMessage(0); }
        catch (error) { report(error); dispose(); }
      }
    }

    const port = {postMessage() {
      if (disposed) throw new Error('Local-game visibility control is disposed');
      const resume = Module.yieldWaiters.pop();
      if (typeof resume !== 'function') throw new Error('Missing native yield continuation');
      if (records.length >= maxPending) throw new Error('Too many pending local render continuations');
      records.push({resume, ready: false, resumeScheduled: false});
      if (hidden) ++queuedWhileHidden;
      highWaterMark = Math.max(highWaterMark, records.length);
      pump();
    }};
    Module.yieldPort = port;

    function reconcile(event) {
      if (disposed) return;
      const next = cached || !!document.hidden;
      if (next !== hidden) {
        hidden = next;
        if (hidden) { ++hiddenEvents; notify('onHidden', event); }
        else { ++visibleEvents; notify('onVisible', event); }
      }
      if (!hidden) pump();
    }

    function pageHide(event) {
      if (disposed) return;
      notify('onPageHide', event);
      if (event.persisted) {
        cached = true;
        reconcile(event);
      } else {
        dispose();
      }
    }

    function pageShow(event) {
      if (!event.persisted || disposed) return;
      cached = false;
      reconcile(event);
    }

    function dispose() {
      if (disposed) return;
      disposed = true;
      document.removeEventListener('visibilitychange', reconcile);
      lifecycle.removeEventListener('pagehide', pageHide);
      lifecycle.removeEventListener('pageshow', pageShow);
      tasks.length = 0;
      if (channel) { channel.port1.close(); channel.port2.close(); }
      // Do not wake a hidden/unloading native loop. The page's Wasm lifetime
      // owns its suspended stack. An already-forwarded upstream sentinel may
      // still fire once; it becomes a no-op and retains no native resolver.
      for (const record of records) record.resume = null;
      records.length = 0;
      forwarded = null;
      if (Module.yieldPort === port) {
        if (previousPort) Module.yieldPort = previousPort;
        else delete Module.yieldPort;
      }
    }

    document.addEventListener('visibilitychange', reconcile);
    lifecycle.addEventListener('pagehide', pageHide);
    lifecycle.addEventListener('pageshow', pageShow);
    if (hidden) { ++hiddenEvents; notify('onHidden', {type: 'attach', persisted: false}); }
    return {snapshot, dispose};
  }

  return {attach};
});
