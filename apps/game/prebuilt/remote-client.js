'use strict';
const statusEl = document.getElementById('status'), video = document.getElementById('video');
const welcome = document.getElementById('welcome'), join = document.getElementById('join');
const invitation = new URLSearchParams(location.hash.slice(1));
const keys = new Set(), pointers = new Map();
const keyMap = {ArrowUp:4,ArrowDown:6,ArrowLeft:7,ArrowRight:5,KeyZ:14,KeyX:13,KeyA:15,KeyS:12,KeyQ:10,KeyW:11,Digit1:8,Digit2:9,Enter:3,Backspace:0};
let stickX = 128, stickY = 128, channel, active = false, session, pc;
const axis = x => Math.max(0, Math.min(255, Math.round((x+1)*127.5)));
function currentPad() {
  let buttons = 0, lx = stickX, ly = stickY, rx = 128, ry = 128;
  for (const bit of pointers.values()) buttons |= 1 << bit;
  for (const key of keys) if (key in keyMap) buttons |= 1 << keyMap[key];
  const gamepad = navigator.getGamepads && [...navigator.getGamepads()].find(Boolean);
  if (gamepad) {
    for (const [index,bit] of PS2Remote.mapping) if (gamepad.buttons[index]?.pressed) buttons |= 1 << bit;
    if (gamepad.axes.length >= 4) {
      if (lx === 128) lx = axis(gamepad.axes[0]);
      if (ly === 128) ly = axis(gamepad.axes[1]);
      rx = axis(gamepad.axes[2]); ry = axis(gamepad.axes[3]);
    }
  }
  return [buttons,lx,ly,rx,ry];
}
function sendPad(value = currentPad()) {
  if (channel?.readyState === 'open' && channel.bufferedAmount < 4096) channel.send(JSON.stringify(value));
}
for (const button of document.querySelectorAll('[data-bit]')) {
  button.addEventListener('pointerdown', event => {
    event.preventDefault(); button.setPointerCapture(event.pointerId);
    pointers.set(event.pointerId, Number(button.dataset.bit)); button.classList.add('on'); sendPad();
  });
  for (const type of ['pointerup','pointercancel','lostpointercapture']) button.addEventListener(type, event => {
    pointers.delete(event.pointerId); button.classList.remove('on'); sendPad();
  });
}
const stick = document.getElementById('stick'), knob = document.getElementById('knob');
let stickPointer = null;
function moveStick(event) {
  if (event.pointerId !== stickPointer) return;
  const rect = stick.getBoundingClientRect(), radius = rect.width / 2;
  let x = (event.clientX - rect.left - radius) / radius, y = (event.clientY - rect.top - radius) / radius;
  const distance = Math.hypot(x,y); if (distance > 1) {x /= distance; y /= distance;}
  stickX = axis(x); stickY = axis(y);
  knob.style.transform = `translate(${x*30}px,${y*30}px)`; sendPad();
}
stick.addEventListener('pointerdown', event => {event.preventDefault(); stickPointer = event.pointerId; stick.setPointerCapture(event.pointerId); moveStick(event);});
stick.addEventListener('pointermove', moveStick);
for (const type of ['pointerup','pointercancel','lostpointercapture']) stick.addEventListener(type, event => {
  if (event.pointerId !== stickPointer) return;
  stickPointer = null; stickX = stickY = 128; knob.style.transform = ''; sendPad();
});
window.addEventListener('keydown', event => {if (event.code in keyMap) {event.preventDefault(); keys.add(event.code); sendPad();}});
window.addEventListener('keyup', event => {keys.delete(event.code); sendPad();});
function release() {keys.clear(); pointers.clear(); stickX = stickY = 128; knob.style.transform = ''; sendPad(PS2Remote.neutral);}
window.addEventListener('blur', release);
document.addEventListener('visibilitychange', () => {if (document.hidden) release();});
document.getElementById('sound').onclick = () => {video.muted = !video.muted; document.getElementById('sound').textContent = video.muted ? 'Enable sound' : 'Mute'; video.play().catch(() => {});};
document.getElementById('fullscreen').onclick = async () => {
  try {
    if (document.fullscreenElement) await document.exitFullscreen();
    else {await document.documentElement.requestFullscreen(); await screen.orientation?.lock?.('landscape').catch(() => {});}
  } catch (error) {statusEl.textContent = error.message;}
};
const leave = () => {
  if (!active) return;
  release(); active = false; pc?.close();
  if (session) PS2Remote.api('leave', session, true).catch(() => {});
};
window.addEventListener('pagehide', leave);
join.onclick = async () => {
  join.disabled = true;
  const message = document.getElementById('join-message');
  message.textContent = 'Connecting to the host…';
  try {
    if (!window.RTCPeerConnection) throw new Error('This browser does not support remote play.');
    session = await PS2Remote.api('join', {room: invitation.get('room'), invite: invitation.get('invite')});
    active = true;
    pc = new RTCPeerConnection({iceServers: session.iceServers, iceTransportPolicy: 'relay'});
    const candidates = [];
    const signal = data => PS2Remote.api('signal', {...session,message:data});
    pc.onicecandidate = event => {if (event.candidate) signal({type:'ice',data:event.candidate.toJSON()}).catch(error => {statusEl.textContent = error.message;});};
    pc.ontrack = event => {video.srcObject = event.streams[0]; video.play().catch(() => {video.muted = true; document.getElementById('sound').textContent = 'Enable sound'; video.play().catch(() => {});});};
    pc.ondatachannel = event => {channel = event.channel; channel.onopen = () => sendPad();};
    pc.onconnectionstatechange = () => {
      statusEl.textContent = 'Player ' + (session.port+1) + ' · ' + pc.connectionState;
      if (pc.connectionState === 'connected') welcome.hidden = true;
      if (pc.connectionState === 'failed') {
        leave(); welcome.hidden = false; join.disabled = false;
        message.textContent = 'Video connection failed. Make sure this device can reach the private host, then join again.';
      }
    };
    let lastSend = 0;
    function controls(now) {
      if (!active) return;
      if (now-lastSend >= 16) {sendPad(document.hidden ? PS2Remote.neutral : currentPad()); lastSend = now;}
      requestAnimationFrame(controls);
    }
    requestAnimationFrame(controls);
    while (active) {
      const {messages} = await PS2Remote.api('poll', session);
      if (!active) break;
      for (const event of messages) {
        if (event.type !== 'signal') continue;
        const {type,data} = event.message;
        if (type === 'offer') {
          await pc.setRemoteDescription(data);
          for (const candidate of candidates.splice(0)) await pc.addIceCandidate(candidate);
          await pc.setLocalDescription(await pc.createAnswer());
          await signal({type:'answer',data:pc.localDescription.toJSON()});
        }
        if (type === 'ice') {
          if (pc.remoteDescription) await pc.addIceCandidate(data);
          else candidates.push(data);
        }
      }
    }
  } catch (error) {
    leave(); welcome.hidden = false; join.disabled = false; message.textContent = error.message;
  }
};
if (!invitation.get('room') || !invitation.get('invite')) {
  join.disabled = true;
  document.getElementById('join-message').textContent = 'Open the invitation link from the host to join.';
}
