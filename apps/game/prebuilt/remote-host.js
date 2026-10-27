window.PS2RemoteHost = {
  async start(Module, canvas) {
    const panel = document.getElementById('remote-panel');
    const status = document.getElementById('remote-status');
    panel.hidden = false;
    status.textContent = 'Opening private session…';
    if (!canvas.captureStream || !window.RTCPeerConnection) throw new Error('This browser cannot host video. Use Chrome or Edge.');
    const session = await PS2Remote.api('create', {});
    const auth = {room: session.room, token: session.token};
    const peers = new Map();
    const stream = canvas.captureStream(60);
    if (Module.remoteAudioStream) for (const track of Module.remoteAudioStream.getAudioTracks()) stream.addTrack(track.clone());
    Module.remotePads = [null, null];
    let active = true;
    const invite = new URL('remote.html', location.href);
    invite.hash = new URLSearchParams({room: session.room, invite: session.invite}).toString();
    document.getElementById('remote-invite').value = invite.href;
    document.getElementById('remote-copy').onclick = async () => {
      try { await navigator.clipboard.writeText(invite.href); document.getElementById('remote-copy').textContent = 'Copied'; }
      catch { document.getElementById('remote-invite').select(); status.textContent = 'Copy the selected invitation link.'; }
    };
    const update = () => {
      const ports = [...peers].filter(([,p]) => p.pc.connectionState === 'connected').map(([port]) => port + 1);
      status.textContent = ports.length ? 'Hosting · player ' + ports.join(' + ') + ' connected' : 'Hosting · share the invitation below';
    };
    const remove = port => {
      const peer = peers.get(port);
      if (peer) peer.pc.close();
      peers.delete(port);
      Module.remotePads[port] = null;
      update();
    };
    const signal = (port, message) => PS2Remote.api('signal', {...auth, port, message});
    const createPeer = async port => {
      remove(port);
      const pc = new RTCPeerConnection({iceServers: session.iceServers, iceTransportPolicy: 'relay'});
      const peer = {pc, candidates: []};
      peers.set(port, peer);
      pc.onicecandidate = event => { if (event.candidate) signal(port, {type: 'ice', data: event.candidate.toJSON()}).catch(error => {status.textContent = error.message;}); };
      pc.onconnectionstatechange = () => {
        update();
        if (pc.connectionState === 'failed') status.textContent = 'Player ' + (port+1) + ' could not connect. Check that both devices can reach the private host.';
        if (['failed','disconnected','closed'].includes(pc.connectionState)) Module.remotePads[port] = null;
      };
      for (const track of stream.getTracks()) {
        const sender = pc.addTrack(track, stream);
        if (track.kind === 'video') {
          const parameters = sender.getParameters();
          parameters.encodings = [{maxBitrate: 3000000, maxFramerate: 60}];
          await sender.setParameters(parameters);
        }
      }
      const channel = pc.createDataChannel('controller', {ordered: false, maxRetransmits: 0});
      channel.onmessage = event => {
        if (typeof event.data !== 'string' || event.data.length > 128) return;
        let pad; try { pad = PS2Remote.readPad(JSON.parse(event.data)); } catch { return; }
        if (pad) Module.remotePads[port] = {gamepad: PS2Remote.gamepad(pad), lastSeen: performance.now()};
      };
      channel.onclose = () => { Module.remotePads[port] = null; };
      await pc.setLocalDescription(await pc.createOffer());
      await signal(port, {type: 'offer', data: pc.localDescription.toJSON()});
    };
    const stop = () => {
      if (!active) return;
      active = false;
      for (const port of [...peers.keys()]) remove(port);
      for (const track of stream.getTracks()) track.stop();
      PS2Remote.api('leave', auth, true).catch(() => {});
      status.textContent = 'Session closed. Reload the host page to open another.';
    };
    document.getElementById('remote-stop').onclick = stop;
    window.addEventListener('pagehide', stop, {once: true});
    update();
    while (active) {
      try {
        const {messages} = await PS2Remote.api('poll', auth);
        if (!active) break;
        for (const event of messages) {
          if (event.type === 'joined') await createPeer(event.port);
          if (event.type === 'left') remove(event.port);
          if (event.type !== 'signal') continue;
          const peer = peers.get(event.port);
          if (!peer) continue;
          const {type, data} = event.message;
          if (type === 'answer') {
            await peer.pc.setRemoteDescription(data);
            for (const candidate of peer.candidates.splice(0)) await peer.pc.addIceCandidate(candidate);
          }
          if (type === 'ice') {
            if (peer.pc.remoteDescription) await peer.pc.addIceCandidate(data);
            else peer.candidates.push(data);
          }
        }
      } catch (error) {
        if (active) { stop(); status.textContent = 'Session stopped: ' + error.message + '. Reload to reopen it.'; }
      }
    }
  }
};
