/* Browser connection desk. Gameplay, character selection and rounds remain guest-owned. */
(function(root) {
  'use strict';
  const STORAGE = 'gundam-full-game-session-v1';
  function attach(Module, canvas) {
    let stream, game, pendingChoice, started = false, busy = false, measuring = false, invite = '', manifest;
    const dialog = document.createElement('dialog');
    dialog.id = 'multiplayer-dialog';
    dialog.setAttribute('aria-labelledby', 'mp-title');
    dialog.innerHTML = `<header><p class="mp-eyebrow">GVS / Private battle</p><h2 id="mp-title">Play together</h2><p class="mp-description">Choose where the game runs. Use the original Versus menus to choose your characters and start a round.</p></header>
      <div class="mp-body"><section id="mp-setup"><div class="mp-routes">
        <button class="mp-route" id="mp-stream"><span>A</span><strong>Share this game</strong><small>One host · two controllers. Your friend receives video and sound.</small></button>
        <button class="mp-route" id="mp-lockstep"><span>B</span><strong>Run on both devices</strong><small>Experimental · both devices run the game and exchange inputs.</small></button></div>
        <label><input type="checkbox" id="mp-dedicated"> This is a separate host; both players connect remotely</label>
        <label for="mp-join-link">Have an invitation?</label><input type="url" id="mp-join-link" placeholder="Paste your friend's invitation" autocomplete="off" spellcheck="false">
        <div class="mp-actions"><button id="mp-join">Join a friend</button></div></section>
      <section id="mp-room" hidden><p id="mp-room-title"></p><label for="mp-invite">Private invitation</label><input id="mp-invite" readonly>
        <div class="mp-actions"><button id="mp-copy">Copy invitation</button><button id="mp-end">End session</button></div>
        <p class="mp-description" id="mp-instructions"></p><label id="mp-view-label" hidden>Battle view <select id="mp-view"><option value="player">Your player view</option><option value="full">Full game screen</option></select></label></section>
      <p id="mp-status" role="status" aria-live="polite">Checking host services…</p>
      <div class="mp-actions"><button id="mp-continue" class="mp-primary" hidden>Continue to Versus</button></div></div>
      <footer><small>Invitation only · no public matchmaking</small><button id="mp-dismiss">Back to game</button></footer>`;
    document.body.append(dialog);
    const bootHelp = document.createElement('aside');
    bootHelp.id = 'multiplayer-boot-help'; bootHelp.hidden = true;
    bootHelp.innerHTML = '<span></span><button type="button">Continue without saving</button>';
    document.body.append(bootHelp);
    const atNoCardPrompt = () => {
      const scene = root.GundamSceneSnapshot.decode(Module._ps2web_experiment_stat?.(19));
      return scene?.mode === 0 && scene.state === 2 && scene.stage === 3;
    };
    bootHelp.querySelector('button').onclick = () => {
      if (!started || game?.error || game?.transport.session.player !== 0 || !atNoCardPrompt()) return;
      // Controller input, synchronized through the same relay as both players.
      // Tick-length holds survive slow frames; no direct guest-state edit.
      const sequence = [...Array.from({length:32},()=>PS2Netplay.neutral()), ...[0,128,0,8192,0].flatMap(buttons => Array.from({length:4},()=>({
        ...PS2Netplay.neutral(), buttons, pressure:Array.from({length:16},(_,i)=>buttons & (1<<i) ? 255 : 0)})))];
      if (game.queueInputSequence(sequence)) bootHelp.querySelector('span').textContent = 'Player 1 is confirming Yes…';
    };
    const el = id => dialog.querySelector('#mp-' + id);
    const toolbar = document.getElementById('multiplayer-open');
    const message = text => { el('status').textContent = text; };
    function open() {
      Module.multiplayerInputBlocked = true;
      Module.clearMultiplayerInput?.();
      document.body.classList.add('multiplayer-open');
      if (!dialog.open) dialog.showModal();
    }
    function dismiss(mode = 2) {
      if (busy) return;
      dialog.close(); document.body.classList.remove('multiplayer-open');
      Module.clearMultiplayerInput?.(); Module.multiplayerInputBlocked = false;
      if (pendingChoice) { pendingChoice(mode); pendingChoice = null; Module.multiplayerMenuWaiting = false; }
      canvas.focus();
    }
    dialog.addEventListener('cancel', event => { event.preventDefault(); dismiss(); });
    el('dismiss').onclick = () => dismiss();
    toolbar.onclick = open;
    document.getElementById('multiplayer-launch')?.addEventListener('click', open);
    Module.openMultiplayerMenu = () => { Module.multiplayerMenuWaiting = true; open(); return new Promise(resolve => { pendingChoice = resolve; }); };
    function room(title, help) {
      el('setup').hidden = true; el('room').hidden = false;
      el('room-title').textContent = title; el('instructions').textContent = help;
      el('invite').value = invite; toolbar.textContent = 'Session';
      el('continue').hidden = false;
    }
    async function action(work) {
      if (busy) return;
      busy = true; el('dismiss').disabled = true;
      try { await work(); } catch (error) { message(error.message || String(error)); }
      finally { busy = false; el('dismiss').disabled = false; }
    }
    const config = fetch('multiplayer-config.json', {cache:'no-store'}).then(r => {
      if (!r.ok) throw Error('Multiplayer services are not enabled on this host.'); return r.json();
    }).then(value => {
      el('stream').disabled = !value.streaming; el('lockstep').disabled = !value.lockstep;
      message(value.streaming || value.lockstep ? 'Choose a route, or join with an invitation.' : 'Multiplayer services are not enabled on this host.');
      return value;
    }).catch(error => { el('stream').disabled = el('lockstep').disabled = true; message(error.message); return {}; });
    async function identity() {
      if (!manifest) { const r = await fetch('netplay-manifest.json', {cache:'no-store'}); if (!r.ok) throw Error('This build does not include normal-boot multiplayer.'); manifest = await r.json(); }
      return manifest.identity;
    }
    function urlForSession(session) {
      const url = new URL(location.href); url.search = '?netplay=1';
      url.hash = new URLSearchParams({room:session.room, invite:session.invite}).toString();
      return url.href;
    }
    function storeSession() {
      sessionStorage.setItem(STORAGE, JSON.stringify(game.transport.session));
    }
    el('view').onchange = () => { Module.playerViewPreference = el('view').value; };
    function readyRoom() {
      const own = game.transport.session.player;
      el('view-label').hidden = false;
      invite = own === 0 ? urlForSession(game.transport.session) : '';
      room('Independent games · Player ' + (own + 1), 'Both players press Start together below. This starts a clean game at 60 Hz without memory cards. At the memory-card prompt, Player 1 selects はい (Yes). Then choose Network Battle or Versus; Player 2 joins in the original game. Progress is not saved.');
      el('copy').hidden = el('invite').hidden = own !== 0;
      el('invite').previousElementSibling.hidden = own !== 0;
      el('continue').textContent = 'Start together'; el('continue').disabled = true;
      storeSession();
      if (new URLSearchParams(location.search).has('netplay') && !Module.running) {
        const current = game; measuring = true;
        message('Loading the game, then checking both connections…');
        (async () => {
          const deadline = performance.now() + 300000;
          while (!Module._ps2web_netplay_stat || document.getElementById('start').disabled) {
            if (game !== current) return;
            if (Module.failed || performance.now() > deadline) throw Error('Game loading did not complete. Reload before creating a new room.');
            await new Promise(resolve => setTimeout(resolve, 250));
          }
          if (game === current) await current.transport.measureLatency();
        })().catch(error => { if (game === current) { current.connectionCheckError = error.message; message(error.message); } })
          .finally(() => { if (game === current) { measuring = false; status(current.transport.lastStatus || {}); } });
      }
    }
    function status(value) {
      if (!game || started) return;
      if (game.connectionCheckError) { el('continue').disabled = true; message(game.connectionCheckError); return; }
      const ready = value.status === 'running' && value.players?.every(Boolean) && value.delay_ready && !measuring;
      el('continue').disabled = !ready;
      message(ready ? 'Both players connected · input buffer ' + value.input_delay + ' frames (' + Math.round(value.input_delay * 1000 / 60) + ' ms). Press Start together on each device.' : value.players?.every(Boolean) ? 'Checking both connections…' : 'Waiting for your friend to join.');
    }
    el('stream').onclick = () => action(async () => {
      if (!(await config).streaming) throw Error('Streaming is not enabled.');
      if (!Module.running && !pendingChoice) throw Error('Start the game first, then select Network Battle or open Multiplayer.');
      message('Opening private session…');
      stream = await PS2RemoteHost.start(Module, canvas, {dedicated:el('dedicated').checked, onStatus:value => {
        message(value.message || (value.players.length ? 'Remote player ' + value.players.join(' + ') + ' connected.' : 'Room open. Share the invitation with your friend.'));
        document.body.dataset.streamingPlayers = value.players.join(',');
      }});
      invite = stream.invite;
      room('Shared game · ' + (el('dedicated').checked ? 'two remote players' : 'you are Player 1'), 'Your friend joins as ' + (el('dedicated').checked ? 'the next available player' : 'Player 2') + '. Select a two-player game in Versus. Both players see the same game picture.');
      el('continue').textContent = pendingChoice ? 'Continue to Versus' : 'Return to game';
    });
    function reloadForLockstep() {
      storeSession();
      const url = new URL(location.href); url.search = '?netplay=1'; url.hash = '';
      location.replace(url.href);
    }
    el('lockstep').onclick = () => action(async () => {
      if (!(await config).lockstep) throw Error('Independent games are not enabled.');
      game = await PS2NetplayGame.GameSession.create({identity:await identity(), checkpointInterval:120, inputDelay:3, adaptiveDelay:true, onStatus:status});
      readyRoom();
      if (Module.running || !new URLSearchParams(location.search).has('netplay')) reloadForLockstep();
    });
    async function joinURL(value) {
      const url = new URL(value, location.href);
      if (url.origin !== location.origin) throw Error('Open this invitation on the host that created it.');
      const hash = new URLSearchParams(url.hash.slice(1));
      if (!hash.get('room') || !hash.get('invite')) throw Error('The invitation is missing its room or key.');
      if (url.pathname.endsWith('/remote.html')) { location.assign(url.href); return; }
      if (!(await config).lockstep) throw Error('Independent games are not enabled.');
      game = await PS2NetplayGame.GameSession.join({room:hash.get('room'), invite:hash.get('invite'), identity:await identity(), onStatus:status});
      readyRoom();
      if (Module.running || !new URLSearchParams(location.search).has('netplay')) reloadForLockstep();
    }
    el('join').onclick = () => action(() => joinURL(el('join-link').value));
    el('copy').onclick = async () => {
      try { await navigator.clipboard.writeText(invite); message('Invitation copied.'); }
      catch (_) { el('invite').focus(); el('invite').select(); message('Copy the selected invitation.'); }
    };
    el('end').onclick = () => action(async () => {
      if (stream) { stream.stop(); stream = null; }
      if (game) { await (game.transport.session.player === 0 ? game.transport.close() : game.transport.leave()); game.fail(Error('Session ended')); game.transport.stopHeartbeat(); game = null; sessionStorage.removeItem(STORAGE); }
      if (started) { location.replace(location.pathname); return; }
      el('setup').hidden = false; el('room').hidden = true; el('view-label').hidden = true; el('continue').hidden = true;
      el('copy').hidden = el('invite').hidden = false; el('invite').previousElementSibling.hidden = false;
      toolbar.textContent = 'Multiplayer'; message('Session ended. You can create another.');
    });
    el('continue').onclick = async () => {
      if (busy) return;
      if (stream) { if (stream.active) dismiss(4); else message('This session ended. Close it and create another.'); return; }
      if (!game) return;
      if (started) { dismiss(); return; }
      await action(async () => {
        const state = await game.transport.call('status');
        if (state.status !== 'running' || !state.players?.every(Boolean) || !state.delay_ready || measuring) throw Error('Wait for both connection checks before starting.');
        if (!Module._ps2web_netplay_stat) throw Error('Wait for the game to finish loading.');
        if (document.getElementById('start').disabled) throw Error('The game is still loading. Try again in a moment.');
        game.attach(Module); started = true; sessionStorage.removeItem(STORAGE);
        el('continue').textContent = 'Return to game';
      });
      if (started) { dismiss(); document.getElementById('start')?.click(); }
    };
    Module.onNetplayError = error => {
      const detail = game?.transport.clean(error) || String(error);
      Module.netplayFailure ||= {message:detail, checkpoint:game?.lastCheckpoint || null};
      bootHelp.hidden = true; open();
      message(detail + ' End this session and create a new one with your friend.'); el('continue').disabled = true;
    };
    window.addEventListener('pagehide', () => {
      if (!started || !game?.transport.session) return;
      const {room, token, player} = game.transport.session;
      game.transport.stopHeartbeat();
      fetch('/netplay-api/' + (player === 0 ? 'close' : 'leave'), {method:'POST', headers:{'Content-Type':'application/json'},
        body:JSON.stringify({room, token}), keepalive:true}).catch(() => {});
    });
    const isNetplay = new URLSearchParams(location.search).has('netplay');
    if (isNetplay) {
      // All boot parameters are set by the shell before runtime initialization.
      open();
      action(async () => {
        await config;
        const saved = sessionStorage.getItem(STORAGE);
        if (saved) {
          const record = JSON.parse(saved);
          if (JSON.stringify(record.identity) !== JSON.stringify(await identity())) throw Error('Build changed. Create a new session.');
          const transport = new PS2Netplay.LockstepTransport({onStatus:status}); transport.session = record;
          const state = await transport.call('status');
          if (state.next_frame !== 0 || state.status === 'closed' || state.status === 'desynced') throw Error('This session has already started. Create a new room.');
          await transport.resume(); transport.startHeartbeat(); game = new PS2NetplayGame.GameSession(transport); readyRoom();
        } else if (location.hash) await joinURL(location.href);
        else message('Create a room or paste an invitation to start together.');
      });
    }
    setInterval(async () => {
      if (!game || busy) return;
      try {
        if (!started) status(await game.transport.call('status'));
        else {
          const scene = root.GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19));
          bootHelp.hidden = !!game.error || !!Module.failed || !atNoCardPrompt();
          const owner = game.transport.session.player;
          bootHelp.querySelector('button').hidden = owner !== 0;
          bootHelp.querySelector('button').disabled = !!game.inputSequence.length;
          if (!game.inputSequence.length) bootHelp.querySelector('span').textContent = owner === 0 ? 'No memory card · choose Yes to continue. Keyboard: ← then X (○).' : 'Player 1 chooses Yes to continue without saving.';
          const split = root.PS2PlayerView.split(scene, game.transport.session.player, Module.playerViewPreference);
          if (Module.playerViewSplit !== split) { Module.playerViewSplit = split; Module.fitMultiplayerView?.(); }
          document.body.dataset.playerView = split ? String(game.transport.session.player + 1) : 'full';
          document.body.dataset.netplaySteps = String(Module._ps2web_netplay_stat?.(0) || 0);
          document.body.dataset.verifiedCheckpoint = String(game.lastCheckpoint?.frame ?? -1);
          if (!game.error) message('Player ' + (game.transport.session.player + 1) + ' · matching state through tick ' + (game.lastCheckpoint?.frame ?? 0));
        }
      } catch (error) { message(error.message); }
    }, 1500);
    return {open, snapshot:() => game ? {route:'independent', started, checkpoint:game.lastCheckpoint || null,
      failure:Module.netplayFailure || (game.error ? {message:game.transport.clean(game.error)} : null),
      nativeSteps:Module._ps2web_netplay_stat?.(0), nativeWaitMs:Module._ps2web_netplay_stat?.(1),
      transport:game.transport.snapshot()} : {route:stream ? 'streaming' : 'local'},
      get game() { return game; }, get stream() { return stream; }, get started() { return started; }};
  }
  root.PS2Multiplayer = {attach};
})(window);
