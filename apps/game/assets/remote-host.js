/* One running game, two real controller ports. No DOM or lobby ownership here. */
window.PS2RemoteHost = {
  async start(Module, canvas, {dedicated = false, onStatus = () => {}} = {}) {
    if (!canvas.captureStream || !window.RTCPeerConnection)
      throw new Error('This browser cannot host video. Use Chrome or Edge.');
    const session = await PS2Remote.api('create', {reserved: dedicated ? [] : [0]});
    const auth = {room: session.room, token: session.token};
    const peers = new Map();
    const stream = canvas.captureStream(60);
    for (const track of stream.getVideoTracks()) track.contentHint = 'motion';
    if (Module.remoteAudioStream) for (const track of Module.remoteAudioStream.getAudioTracks()) stream.addTrack(track.clone());
    Module.remotePads = [null, null];
    Module.remoteReserved = dedicated ? [true, true] : [false, true];
    let active = true;
    Module.streamingActive = true;
    Module.localVisibility?.setKeepRunning(true);
    const invite = new URL('remote.html', location.href);
    invite.hash = new URLSearchParams({room: session.room, invite: session.invite}).toString();
    const update = message => onStatus({active, message, players: [...peers]
      .filter(([,p]) => p.pc.connectionState === 'connected').map(([port]) => port + 1)});
    const remove = port => {
      const peer = peers.get(port);
      peers.delete(port);
      if (peer) { peer.pc.onconnectionstatechange = null; peer.pc.close(); }
      Module.remotePads[port] = null;
      update();
    };
    const signal = (port, message) => PS2Remote.api('signal', {...auth, port, message});
    const stop = () => {
      if (!active) return;
      active = false;
      Module.streamingActive = false;
      Module.localVisibility?.setKeepRunning(false);
      window.removeEventListener('pagehide', stop);
      for (const port of [...peers.keys()]) remove(port);
      for (const track of stream.getTracks()) track.stop();
      Module.remoteReserved = null;
      PS2Remote.api('leave', auth, true).catch(() => {});
      update('Session closed');
    };
    const createPeer = async port => {
      remove(port);
      const pc = new RTCPeerConnection({iceServers: session.iceServers, iceTransportPolicy: session.iceTransportPolicy || 'all'});
      const peer = {pc, candidates: []};
      peers.set(port, peer);
      pc.onicecandidate = event => { if (event.candidate) signal(port, {type:'ice', data:event.candidate.toJSON()}).catch(error => update(error.message)); };
      pc.onconnectionstatechange = () => {
        if (['failed','disconnected','closed'].includes(pc.connectionState)) Module.remotePads[port] = null;
        update(pc.connectionState === 'failed' ? 'Player ' + (port+1) + ' could not connect. Check the host TURN configuration.' : null);
      };
      for (const track of stream.getTracks()) {
        const sender = pc.addTrack(track, stream);
        if (track.kind === 'video') {
          const parameters = sender.getParameters();
          parameters.encodings = [{maxBitrate: 3000000, maxFramerate: 60}];
          parameters.degradationPreference = 'maintain-framerate';
          try { await sender.setParameters(parameters); } catch (_) { /* Browser may not support tuning. */ }
        }
      }
      const channel = pc.createDataChannel('controller', {ordered:false, maxRetransmits:0});
      channel.onmessage = event => {
        if (!active || peers.get(port) !== peer || typeof event.data !== 'string' || event.data.length > 128) return;
        let pad; try { pad = PS2Remote.readPad(JSON.parse(event.data)); } catch { return; }
        if (pad) Module.remotePads[port] = {gamepad:PS2Remote.gamepad(pad), lastSeen:performance.now()};
      };
      channel.onclose = () => { if (peers.get(port) === peer) Module.remotePads[port] = null; };
      await pc.setLocalDescription(await pc.createOffer());
      if (active) await signal(port, {type:'offer', data:pc.localDescription.toJSON()});
    };
    window.addEventListener('pagehide', stop);
    update();
    (async () => {
      try {
        while (active) {
          const {messages} = await PS2Remote.api('poll', auth);
          if (!active) break;
          for (const event of messages) {
            if (!active) break;
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
        }
      } catch (error) { if (active) { stop(); update('Session stopped: ' + error.message); } }
    })();
    return {invite:invite.href, stop, get active() { return active; }};
  }
};
