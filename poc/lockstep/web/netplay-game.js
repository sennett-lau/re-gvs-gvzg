/* Main-thread bridge between local controls, the relay and an EE worker. */
(function (root) {
  'use strict';
  const transportAPI = typeof module !== 'undefined' && module.exports ? require('./netplay-transport.js') : root.PS2Netplay;

  class GameSession {
    constructor(transport, {startupTimeoutMs = 45000, startupPollMs = 250} = {}) {
      if (!Number.isFinite(startupTimeoutMs) || startupTimeoutMs <= 0 || startupTimeoutMs > 45000 ||
          !Number.isFinite(startupPollMs) || startupPollMs <= 0)
        throw new Error('Invalid netplay startup wait');
      this.transport = transport;
      this.startupTimeoutMs = startupTimeoutMs;
      this.startupPollMs = startupPollMs;
      this.localPad = transportAPI.neutral();
      this.nextFrame = 0;
      this.inStep = false;
      this.attached = false;
      this.initialBarrierReady = false;
      this.error = null;
      this.failure = new Promise((_, reject) => { this.rejectFailure = reject; });
      this.failure.catch(() => {});
    }

    static async create({identity, endpoint, checkpointInterval = 120, inputDelay = 3, onStatus}) {
      const transport = new transportAPI.LockstepTransport({endpoint, onStatus});
      await transport.create(identity, checkpointInterval, inputDelay);
      return new GameSession(transport);
    }

    static async join({room, invite, identity, endpoint, onStatus}) {
      const transport = new transportAPI.LockstepTransport({endpoint, onStatus});
      await transport.join(room, invite, identity);
      return new GameSession(transport);
    }

    fail(error) {
      if (!this.error) {
        this.error = error instanceof Error ? error : new Error(String(error));
        this.rejectFailure(this.error);
      }
    }

    requireStartup() {
      if (this.error) throw this.error;
      if (this.nextFrame !== 0 || this.initialBarrierReady)
        throw new Error('Automatic lease recovery is only available before the initial state barrier');
    }

    async waitForStartupPlayers() {
      for (;;) {
        this.requireStartup();
        let status = await this.transport.call('status');
        this.requireStartup();
        // A delayed initial request must never reconnect a game which has
        // already released input to either simulation.
        if (status.status === 'paused' && status.next_frame > 0)
          throw new Error('Startup interrupted after game input was released. Create a new room.');
        if (status.players && !status.players[this.transport.session.player]) {
          status = await this.transport.resume();
          this.requireStartup();
        }
        if (status.status === 'running' && status.players && status.players.every(Boolean)) return;
        await new Promise(resolve => setTimeout(resolve, this.startupPollMs));
      }
    }

    async prepareInitialState(hash) {
      this.requireStartup();
      if (!hash) throw new Error('Missing simulation checkpoint');
      const transport = this.transport;
      if (transport.nextFrame !== 0 || transport.nextInput > transport.session.input_delay)
        throw new Error('The initial input window has already started. Create a new room.');
      const status = await transport.call('status');
      this.requireStartup();
      if (status.next_frame > 0)
        throw new Error('This room has already released game input. Create a new room.');
      // Slow device initialization can outlive a lobby lease. Only reclaim
      // this session's original owner; no new token or replacement peer.
      await transport.resume();
      this.requireStartup();
      await this.waitForStartupPlayers();
      while (transport.nextInput < transport.session.input_delay) {
        this.requireStartup();
        try {
          await transport.submit(transport.nextInput, transportAPI.neutral());
          this.requireStartup();
        } catch (error) {
          if (!/Netplay paused; resume before submitting input$/.test(String(error.message || error)) ||
              !transport.lastStatus || transport.lastStatus.status !== 'paused') throw error;
          await this.waitForStartupPlayers();
        }
      }
      for (;;) {
        this.requireStartup();
        // Short server waits let the outer startup deadline/cancellation stop
        // this loop without an unbounded checkpoint retry running behind it.
        const result = await transport.call('checkpoint', {frame: 0, hash, wait: 1});
        this.requireStartup();
        if (result.ready) {
          this.initialBarrierReady = true;
          this.lastCheckpoint = {frame: 0, hash};
          return;
        }
        if (result.status === 'paused') await this.waitForStartupPlayers();
      }
    }

    async withStartupDeadline(work) {
      let timer;
      const deadline = new Promise((_, reject) => {
        timer = setTimeout(() => reject(new Error('Initial multiplayer startup timed out before both games were ready. Create a new room and start both devices.')),
          this.startupTimeoutMs);
      });
      try { return await Promise.race([work, this.failure, deadline]); }
      finally { clearTimeout(timer); }
    }

    attach(Module) {
      if (this.attached) throw new Error('Game session is already attached');
      const owner = this.transport.session.player;
      const rumble = Module._ps2web_rumble;
      // Browser controls always address local slot zero. The relay maps that
      // input to the authenticated owner's game port on both simulations.
      Module._ps2web_pad = (port, buttons, lx, ly, rx, ry) => {
        if (port !== 0) return;
        Object.assign(this.localPad, {buttons, lx, ly, rx, ry});
      };
      Module._ps2web_pad_connected = () => {};
      Module._ps2web_pressure = (port, ...packed) => {
        if (port !== 0) return;
        this.localPad.pressure = Array.from({length: 16}, (_, i) => (packed[i >> 2] >>> ((i & 3) * 8)) & 255);
      };
      if (rumble) Module._ps2web_rumble = port => port === 0 ? rumble(owner) : 0;
      Module.netplayCheckpointInterval = this.transport.session.checkpoint_interval;
      Module.netplayStep = (frame, hash) => this.step(frame, hash);
      Module.netplaySession = {room: this.transport.session.room, player: owner,
        inputDelay: this.transport.session.input_delay, checkpointInterval: this.transport.session.checkpoint_interval};
      this.attached = true;
      return Module.netplaySession;
    }

    async step(frame, hash) {
      if (this.error) throw this.error;
      if (this.inStep || frame !== this.nextFrame) throw new Error('Netplay simulation frame is out of order');
      this.inStep = true;
      const advance = async () => {
        if (frame === 0) await this.prepareInitialState(hash);
        else if (frame % this.transport.session.checkpoint_interval === 0) {
          if (!hash) throw new Error('Missing simulation checkpoint');
          await Promise.race([this.transport.checkpoint(frame, hash), this.failure]);
          this.lastCheckpoint = {frame, hash};
        }
        this.transport.enqueue(frame + this.transport.session.input_delay, this.localPad).catch(error => this.fail(error));
        const pair = await Promise.race([this.transport.next(), this.failure]);
        if (this.error) throw this.error;
        ++this.nextFrame;
        return pair;
      };
      try {
        return await (frame === 0 ? this.withStartupDeadline(advance()) : advance());
      } catch (error) {
        this.fail(error);
        throw error;
      } finally {
        this.inStep = false;
      }
    }
  }

  const api = {GameSession};
  if (typeof module !== 'undefined' && module.exports) module.exports = api;
  else root.PS2NetplayGame = api;
})(typeof globalThis !== 'undefined' ? globalThis : this);
