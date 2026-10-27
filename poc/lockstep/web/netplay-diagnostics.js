/* Observation only: preserve the specific relay failure when the EE worker
 * subsequently reports its generic halt reason. Never records player tokens,
 * invitations, request bodies, pads, URLs or replacement simulation state. */
(function (root) {
  'use strict';
  const lobby = root.GundamNetplayLobby;
  const Transport = root.PS2Netplay.LockstepTransport;
  const GameSession = root.PS2NetplayGame.GameSession;
  const record = {version: 1, failure: null, checkpoint: null, requests: []};
  let ModuleRef;
  const now = () => Math.round(root.performance.now());
  function clean(error) {
    let text = String(error && error.message || error);
    // Transport errors normally contain only protocol text. Redact credentials
    // defensively before retaining any unexpected exception from a browser.
    const own = ModuleRef && ModuleRef.netplaySession;
    if (own && own.room) text = text.split(own.room).join('[room]');
    return text.slice(0, 600);
  }
  const originalCall = Transport.prototype.call;
  Transport.prototype.call = async function (action, values, authenticated) {
    const entry = {action, startedMs: now()};
    if (values && Number.isInteger(values.frame)) entry.frame = values.frame;
    if (values && Number.isInteger(values.from)) entry.from = values.from;
    record.requests.push(entry);
    if (record.requests.length > 24) record.requests.shift();
    try {
      const result = await originalCall.call(this, action, values, authenticated);
      entry.status = result.status || 'ok';
      if (Number.isInteger(result.next_frame)) entry.nextFrame = result.next_frame;
      if (Number.isInteger(result.checkpoint_frame)) entry.nextCheckpoint = result.checkpoint_frame;
      if (Array.isArray(result.players)) entry.players = result.players.map(Boolean);
      return result;
    } catch (error) {
      let text = clean(error);
      for (const key of ['room', 'token', 'invite']) {
        const secret = this.session && this.session[key];
        if (secret) text = text.split(secret).join('[' + key + ']');
      }
      entry.error = text;
      throw error;
    } finally {
      entry.elapsedMs = now() - entry.startedMs;
      if (this.retryEvents) record.retries = this.retryEvents.slice();
    }
  };
  const originalStep = GameSession.prototype.step;
  GameSession.prototype.step = function (frame, hash) {
    if (hash) record.checkpoint = {frame, hash};
    return originalStep.call(this, frame, hash);
  };
  const originalPrepare = lobby.prepare;
  lobby.prepare = async function (Module) {
    ModuleRef = Module;
    const originalHalt = Module.onHalt;
    Module.onHalt = function (reason) {
      return originalHalt.call(this, record.failure && /^Netplay stopped:/.test(reason)
        ? record.failure.message : reason);
    };
    return originalPrepare.call(this, Module);
  };
  const originalStart = lobby.start;
  lobby.start = async function (Module) {
    await originalStart.call(this, Module);
    const originalError = Module.onNetplayError;
    Module.onNetplayError = function (error) {
      const failedRequest = [...record.requests].reverse().find(entry => entry.error);
      record.failure = {message: failedRequest ? failedRequest.error : clean(error), atMs: now(),
        action: failedRequest ? failedRequest.action : null,
        checkpointFrame: record.checkpoint ? record.checkpoint.frame : null};
      document.body.dataset.netplayError = record.failure.message;
      if (originalError) originalError.call(this, record.failure.message);
    };
  };
  const originalStats = lobby.stats;
  lobby.stats = function (Module) {
    const stats = originalStats.call(this, Module);
    return stats ? {...stats, diagnostics: JSON.parse(JSON.stringify(record))} : null;
  };
})(globalThis);
