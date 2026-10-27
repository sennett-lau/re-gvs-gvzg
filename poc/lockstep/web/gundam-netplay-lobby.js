/* Lobby for two independent local game instances. Player tokens never enter
 * invitation links. Pending sessions survive reload only before game start. */
(function (root) {
  'use strict';
  const STORAGE = 'gundam-netplay-pending';
  let manifest, session, pollTimer, ModuleRef, started = false;
  const el = id => document.getElementById(id);

  function message(text) {
    for (const id of ['netplay-status', 'netplay-lobby-status']) {
      const target = el(id);
      if (target) target.textContent = text;
    }
  }

  function fail(error) {
    message(String(error.message || error));
    document.body.dataset.netplayState = 'error';
    if (el('start')) el('start').disabled = true;
    if (ModuleRef && ModuleRef.printErr) ModuleRef.printErr('[netplay lobby] ' + String(error));
  }

  function update(status) {
    if (status.status === 'desynced' || status.status === 'closed') return fail(status.reason || status.status);
    if (started) {
      if (status.status === 'paused') message('Peer disconnected. The simulation is paused.');
      else message('Player ' + (session.transport.session.player + 1) + (session.lastCheckpoint
        ? ' · state matched at tick ' + session.lastCheckpoint.frame : ' · waiting for the initial state check'));
      return;
    }
    const ready = status.status === 'running' && status.players && status.players.every(Boolean);
    el('start').disabled = !ready;
    el('start').textContent = ready ? 'Start match' : 'Waiting for the other player';
    message(ready ? 'Both players connected. Press Start on both devices.' : 'Share the invitation and wait for your friend.');
    document.body.dataset.netplayState = ready ? 'ready' : 'waiting';
    document.body.dataset.netplayReady = ready ? 'true' : 'false';
  }

  function rememberPending() {
    try { sessionStorage.setItem(STORAGE, JSON.stringify({version: 1, started: false,
      build: manifest.identity.build_sha256, session: session.transport.session})); } catch (_) {}
  }

  function showSession() {
    el('netplay-create').disabled = true;
    el('netplay-join').disabled = true;
    const own = session.transport.session;
    if (own.invite) {
      const link = new URL(location.href);
      link.search = '';
      link.hash = new URLSearchParams({room: own.room, invite: own.invite}).toString();
      el('netplay-invite').value = link.href;
      el('netplay-invite-row').hidden = false;
    }
    rememberPending();
    if (pollTimer) clearInterval(pollTimer);
    const poll = () => session.transport.call('status').then(update).catch(fail);
    poll();
    pollTimer = setInterval(poll, 2000);
  }

  async function restorePending() {
    let pending;
    try { pending = JSON.parse(sessionStorage.getItem(STORAGE) || 'null'); } catch (_) {}
    if (!pending || pending.version !== 1 || pending.started !== false ||
        pending.build !== manifest.identity.build_sha256 || !pending.session) return false;
    const transport = new root.PS2Netplay.LockstepTransport({onStatus: update});
    transport.session = pending.session;
    const state = await transport.call('status');
    const sameIdentity = state.identity && Object.keys(manifest.identity).every(key => state.identity[key] === manifest.identity[key]);
    if (state.input_next !== 0 || state.next_frame !== 0 || state.checkpoint_frame !== 0 ||
        state.player !== pending.session.player || !sameIdentity)
      throw new Error('This saved lobby has already started or uses a different build. Create a new room.');
    await transport.resume();
    session = new root.PS2NetplayGame.GameSession(transport);
    showSession();
    return true;
  }

  async function prepare(Module) {
    ModuleRef = Module;
    const response = await fetch('netplay-manifest.json', {cache: 'no-store'});
    if (!response.ok) throw new Error('Cannot load this build’s multiplayer identity');
    manifest = await response.json();
    el('netplay-create').disabled = false;
    el('start').disabled = true;
    el('start').textContent = 'Create or join a room first';
    const invitation = new URLSearchParams(location.hash.slice(1));
    const room = invitation.get('room'), invite = invitation.get('invite');
    el('netplay-join').hidden = !(room && invite);
    el('netplay-join').disabled = false;
    el('netplay-create').onclick = async () => {
      try {
        el('netplay-create').disabled = true;
        session = await root.PS2NetplayGame.GameSession.create({identity: manifest.identity,
          checkpointInterval: manifest.runtime_config.checkpoint_interval,
          inputDelay: manifest.runtime_config.input_delay, onStatus: update});
        showSession();
      } catch (error) { el('netplay-create').disabled = false; fail(error); }
    };
    el('netplay-join').onclick = async () => {
      try {
        el('netplay-join').disabled = true;
        session = await root.PS2NetplayGame.GameSession.join({room, invite, identity: manifest.identity, onStatus: update});
        showSession();
      } catch (error) { el('netplay-join').disabled = false; fail(error); }
    };
    el('netplay-copy').onclick = async () => {
      try { await navigator.clipboard.writeText(el('netplay-invite').value); message('Invitation copied.'); }
      catch (_) { el('netplay-invite').select(); message('Select and copy the invitation link.'); }
    };
    if (el('netplay-view')) el('netplay-view').onchange = () => window.dispatchEvent(new Event('resize'));
    try { if (await restorePending()) return; }
    catch (error) {
      try { sessionStorage.removeItem(STORAGE); } catch (_) {}
      message(error.message);
      return;
    }
    message(room && invite ? 'Invitation found. Join as player 2.' : 'Create a room, then share its invitation.');
    document.body.dataset.netplayState = 'lobby';
  }

  async function start(Module) {
    if (!session || started) throw new Error('Create or join a room before starting');
    const status = await session.transport.call('status');
    if (status.status !== 'running' || !status.players.every(Boolean)) throw new Error('Wait for both players to connect');
    // Reload cannot reconstruct a running simulation from a credential alone.
    try { sessionStorage.removeItem(STORAGE); } catch (_) {}
    session.attach(Module);
    Module.onNetplayError = fail;
    started = true;
    clearInterval(pollTimer);
    document.body.dataset.netplayState = 'playing';
    message('Waiting for both games to reach the initial state barrier…');
  }

  function stats(Module) {
    if (!started || !Module._ps2web_netplay_stat) return null;
    const value = {player: session.transport.session.player, steps: Module._ps2web_netplay_stat(0),
      waitMs: Module._ps2web_netplay_stat(1), checkpointInterval: session.transport.session.checkpoint_interval,
      verifiedCheckpoint: session.lastCheckpoint || null};
    document.body.dataset.netplaySteps = String(value.steps);
    return value;
  }

  function layout(stage, canvas) {
    const crop = el('netplay-crop');
    const both = !session || (el('netplay-view') && el('netplay-view').value === 'both');
    const visibleWidth = both ? 640 : 320;
    const scale = Math.max(0, Math.min(stage.clientWidth / visibleWidth, stage.clientHeight / 448));
    crop.style.width = visibleWidth * scale + 'px';
    crop.style.height = 448 * scale + 'px';
    canvas.style.width = 640 * scale + 'px';
    canvas.style.height = 448 * scale + 'px';
    canvas.style.position = 'absolute';
    canvas.style.top = '0';
    canvas.style.left = (both ? 0 : -session.transport.session.player * 320 * scale) + 'px';
    // Existing GPU presentation maps the full framebuffer to4:3. Displaying
    // that surface at640:448 restores native pixel proportions before crop.
    return [640, 480];
  }
  root.GundamNetplayLobby = {prepare, start, stats, layout, fail, STORAGE};
})(globalThis);
