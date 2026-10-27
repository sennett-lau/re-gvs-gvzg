/* Two independent simulations consume exactly the same ordered pad pairs.
 * This module transports inputs; it does not implement a game mode or video.
 */
(function (root) {
  'use strict';
  const neutral = () => ({buttons: 0, lx: 128, ly: 128, rx: 128, ry: 128, pressure: Array(16).fill(0)});

  class LockstepTransport {
    constructor({endpoint = '/netplay-api/', fetch: fetcher = root.fetch.bind(root), timeoutMs = 25000,
      retryLimit = 2, retryDelayMs = 200, retryBudgetMs = 45000, onStatus = () => {}} = {}) {
      this.endpoint = endpoint;
      this.fetcher = fetcher;
      this.timeoutMs = timeoutMs;
      this.onStatus = onStatus;
      this.retryLimit = retryLimit;
      this.retryDelayMs = retryDelayMs;
      this.retryBudgetMs = retryBudgetMs;
      this.retryEvents = [];
      this.session = null;
      this.nextInput = 0;
      this.nextFrame = 0;
      this.pendingFrames = [];
      this.nextBusy = false;
      this.inputBusy = false;
      this.outbox = [];
      this.outboxRunning = false;
      this.outboxFailed = null;
      this.closed = false;
      this.heartbeat = null;
      this.heartbeatBusy = false;
    }

    async call(action, values = {}, authenticated = true) {
      const body = {...(authenticated && this.session ? {room: this.session.room, token: this.session.token} : {}), ...values};
      // Identical input/checkpoint retries are checked by the relay. Creating a
      // room or claiming its second slot is not idempotent and is never retried.
      const safe = ['status', 'resume', 'input', 'inputs', 'poll', 'checkpoint', 'leave', 'close'].includes(action);
      const payload = JSON.stringify(body);
      const now = () => root.performance.now();
      const deadline = now() + this.retryBudgetMs;
      for (let attempt = 0; ; ++attempt) {
        const controller = new AbortController();
        const timer = setTimeout(() => controller.abort(), Math.max(1, Math.min(this.timeoutMs, deadline - now())));
        let retryable = true, httpStatus = null;
        try {
          const response = await this.fetcher(this.endpoint + action, {method: 'POST',
            headers: {'Content-Type': 'application/json'}, body: payload,
            cache: 'no-store', credentials: 'same-origin', signal: controller.signal});
          httpStatus = response.status;
          retryable = [502, 503, 504].includes(response.status);
          let result;
          try { result = await response.json(); }
          catch (_) { throw new Error('HTTP ' + response.status + ' returned an invalid relay response'); }
          if (!response.ok) throw new Error(result.error || 'HTTP ' + response.status);
          retryable = false;
          if (result.error) throw new Error(result.error);
          if (result.status) { this.lastStatus = result; this.onStatus(result); }
          if (result.status === 'desynced' || result.status === 'closed') {
            this.closed = true;
            this.stopHeartbeat();
            if (action !== 'close') throw new Error(result.reason || result.status);
          }
          return result;
        } catch (error) {
          const delay = this.retryDelayMs * (attempt + 1);
          if (!safe || !retryable || this.closed || attempt >= this.retryLimit || now() + delay >= deadline) {
            const detail = error.name === 'AbortError' ? 'request timed out' : String(error.message || error);
            throw new Error('Netplay ' + action + ': ' + detail);
          }
          this.retryEvents.push({action, attempt: attempt + 1, httpStatus,
            reason: controller.signal.aborted ? 'timeout' : httpStatus ? 'gateway' : 'network'});
          if (this.retryEvents.length > 24) this.retryEvents.shift();
          await new Promise(resolve => setTimeout(resolve, delay));
        } finally {
          clearTimeout(timer);
        }
      }
    }

    async create(identity, checkpointInterval = 60, inputDelay = 3) {
      if (this.session) throw new Error('Transport already owns a player');
      this.session = await this.call('create', {identity, checkpoint_interval: checkpointInterval, input_delay: inputDelay}, false);
      this.startHeartbeat();
      return this.session;
    }

    async join(room, invite, identity) {
      if (this.session) throw new Error('Transport already owns a player');
      this.session = await this.call('join', {room, invite, identity}, false);
      this.startHeartbeat();
      return this.session;
    }

    requireSession() {
      if (!this.session || this.closed) throw new Error('No active netplay session');
    }

    startHeartbeat() {
      this.stopHeartbeat();
      this.heartbeat = setInterval(async () => {
        if (this.heartbeatBusy || this.closed) return;
        this.heartbeatBusy = true;
        try { await this.call('status'); } catch (error) { this.lastHeartbeatError = error; }
        finally { this.heartbeatBusy = false; }
      }, 10000);
      if (this.heartbeat.unref) this.heartbeat.unref();
    }

    stopHeartbeat() { if (this.heartbeat) clearInterval(this.heartbeat); this.heartbeat = null; }

    async submit(frame, pad) {
      this.requireSession();
      if (this.inputBusy) throw new Error('Only one input submission may run at once');
      if (this.outboxRunning || this.outbox.length) throw new Error('Cannot mix submit with queued inputs');
      if (frame !== this.nextInput) throw new Error('Expected local input frame ' + this.nextInput);
      this.inputBusy = true;
      try {
        const result = await this.call('input', {frame, pad});
        if (result.accepted !== frame) throw new Error('Netplay paused; resume before submitting input');
        ++this.nextInput;
        return result;
      } finally {
        this.inputBusy = false;
      }
    }

    // Capture inputs at simulation cadence while the previous request is in
    // flight. Consecutive queued inputs are sent together after its response.
    // Callers await next(), not each future input's acknowledgement.
    enqueue(frame, pad) {
      this.requireSession();
      if (this.inputBusy) throw new Error('Cannot mix enqueue with submit');
      if (this.outboxFailed) return Promise.reject(this.outboxFailed);
      if (frame !== this.nextInput || this.outbox.length >= 128) throw new Error('Invalid or overflowing input outbox');
      const snapshot = JSON.parse(JSON.stringify(pad));
      ++this.nextInput;
      const promise = new Promise((resolve, reject) => this.outbox.push({frame, pad: snapshot, resolve, reject}));
      this.flushOutbox();
      return promise;
    }

    async flushOutbox() {
      if (this.outboxRunning) return;
      this.outboxRunning = true;
      try {
        while (this.outbox.length) {
          const batch = this.outbox.slice(0, 64);
          const result = await this.call('inputs', {inputs: batch.map(({frame, pad}) => ({frame, pad}))});
          if (result.accepted !== batch[batch.length - 1].frame) throw new Error('Input relay paused');
          this.outbox.splice(0, batch.length);
          for (const item of batch) item.resolve(result);
        }
      } catch (error) {
        this.outboxFailed = error;
        for (const item of this.outbox.splice(0)) item.reject(error);
      } finally {
        this.outboxRunning = false;
      }
    }

    async checkpoint(frame, hash) {
      this.requireSession();
      for (;;) {
        const result = await this.call('checkpoint', {frame, hash, wait: 20});
        if (result.status === 'paused') throw new Error('Netplay paused; resume both players before continuing');
        if (result.ready) return result;
      }
    }

    async next() {
      this.requireSession();
      if (this.nextBusy) throw new Error('Only one frame consumer may run at once');
      this.nextBusy = true;
      try {
        while (!this.pendingFrames.length) {
          const result = await this.call('poll', {from: this.nextFrame, wait: 20});
          if (result.status === 'paused') throw new Error('Netplay paused; resume both players before continuing');
          this.pendingFrames = result.frames || [];
        }
        const value = this.pendingFrames.shift();
        if (value.frame !== this.nextFrame || !Array.isArray(value.pads) || value.pads.length !== 2) {
          this.closed = true;
          throw new Error('Invalid frame sequence from relay');
        }
        ++this.nextFrame;
        return value;
      } finally {
        this.nextBusy = false;
      }
    }

    // Submit neutral inputs for the agreed input-delay window before running.
    async prime(delayFrames = this.session ? this.session.input_delay : 0) {
      this.requireSession();
      if (!Number.isInteger(delayFrames) || delayFrames < 0 || delayFrames > 30 || this.nextInput !== 0)
        throw new Error('Invalid input delay');
      for (let frame = 0; frame < delayFrames; ++frame) await this.submit(frame, neutral());
    }

    async resume() { this.requireSession(); const result = await this.call('resume'); this.startHeartbeat(); return result; }
    async leave() { this.requireSession(); this.stopHeartbeat(); return this.call('leave'); }
    async close() {
      if (!this.session) throw new Error('No netplay session');
      return this.call('close');
    }
  }

  const api = {LockstepTransport, neutral};
  if (typeof module !== 'undefined' && module.exports) module.exports = api;
  else root.PS2Netplay = api;
})(typeof globalThis !== 'undefined' ? globalThis : this);
