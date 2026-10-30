import {IMAGES, cardCopy, sha256, startupArgs} from './session.mjs';

export function installFrame(Module) {
  const token = new URL(location.href).searchParams.get('execToken');
  if (window === parent || !/^[a-f0-9-]{36}$/.test(token || '')) throw new Error('isolated exec parent required');
  const origin = location.origin;
  let started = false, stopped = false, audio, node, inputTimer, sampleTimer;
  const send = (type, data = {}) => parent.postMessage({originalExec: 1, token, type, ...data}, origin);
  const failure = error => { document.querySelector('#status').textContent = 'Stopped: ' + error; send('failure', {error: String(error)}); };
  Module.onHalt = failure;
  Module.onExit = status => failure('native host exited with status ' + status);
  Module.onOriginalExecStartup = record => send('startup', {record});
  Module.onOriginalExec = record => {
    clearInterval(inputTimer); clearInterval(sampleTimer);
    try {
      // Native callback is emitted only after complete guest unwind + checked
      // flush. Do not infer this from an ordinary halt string or UI status.
      if (record.error || !record.nativeFlushed) { send('exec', {record}); return; }
      const card = cardCopy(Module.FS.readFile('/memcard/Mcd001.ps2'));
      document.querySelector('#status').textContent = 'Executable replacement requested';
      send('exec', {record, card});
    } catch (error) { failure(error); }
  };
  Module.readDiscRange = async (url, offset, size) => {
    const response = await fetch(url, {headers: {Range: `bytes=${offset}-${offset + size - 1}`}});
    if (response.status !== 206) throw new Error('disc range HTTP ' + response.status);
    const bytes = new Uint8Array(await response.arrayBuffer());
    if (bytes.length !== size) throw new Error('short disc range');
    return bytes;
  };

  // Ordinary pad input only. This host has no guest-state setters or mode hook.
  // I/J/K/L tilt the left analog stick fully; the other keys are pad buttons.
  const keyMap = {KeyX: 1 << 13, KeyZ: 1 << 14, KeyS: 1 << 12, KeyA: 1 << 15, Enter: 1 << 3, Backspace: 1 << 0,
    KeyQ: 1 << 10, KeyW: 1 << 11, Digit1: 1 << 8, Digit2: 1 << 9,
    ArrowUp: 1 << 4, ArrowRight: 1 << 5, ArrowDown: 1 << 6, ArrowLeft: 1 << 7, KeyI: 0, KeyJ: 0, KeyK: 0, KeyL: 0};
  const keys = new Set();
  const axis = (low, high) => keys.has(low) ? 0 : keys.has(high) ? 255 : 128;
  addEventListener('keydown', event => { if (event.code in keyMap) { keys.add(event.code); event.preventDefault(); } });
  addEventListener('keyup', event => { keys.delete(event.code); });
  addEventListener('blur', () => keys.clear());

  async function start(data) {
    if (started || stopped) throw new Error('document can start only once');
    const expected = IMAGES[Module.execImage];
    if (!expected || data.image !== Module.execImage || data.imageSha256 !== expected.sha256 || Module.execImageSha256 !== expected.sha256)
      throw new Error('executable identity mismatch');
    const argv = startupArgs(data.argv?.[0], data.argv?.slice(1));
    if (argv[0] !== expected.path) throw new Error('startup pathname mismatch');
    const card = cardCopy(data.card);
    if (await sha256(card) !== data.cardSha256) throw new Error('card import digest mismatch');
    if (await sha256(Module.FS.readFile('/game/core.elf')) !== expected.sha256) throw new Error('preloaded executable fingerprint mismatch');
    const disc = new URL(data.discUrl, location.href);
    if (disc.origin !== origin || !Number.isSafeInteger(data.discSize) || data.discSize <= 0) throw new Error('invalid mounted disc');
    Module.discUrl = disc.href; Module.discSize = data.discSize;
    Module.FS.mkdir('/memcard'); // Fresh MEMFS only; the parent owns persistence.
    Module.FS.writeFile('/memcard/Mcd001.ps2', card);
    const imported = await sha256(Module.FS.readFile('/memcard/Mcd001.ps2'));
    if (imported !== data.cardSha256) throw new Error('MEMFS card readback mismatch');
    if (typeof Module.PThread?.terminateAllThreads !== 'function') throw new Error('PThread termination export missing');
    if (Module.execNetwork) {
      if (Module.execImage !== 'game' || !data.networkConfig) throw new Error('network-enabled game requires explicit private bridge config');
      const {installOriginalOnlineBridge} = await import('./network/wasm_host.mjs');
      installOriginalOnlineBridge(Module, data.networkConfig);
    } else if (data.networkConfig) throw new Error('private network config supplied to a build without the adapter');
    audio = new AudioContext({sampleRate: 48000, latencyHint: 'interactive'});
    await audio.resume();
    if (audio.state !== 'running') throw new Error('audio user activation required before boot');
    await audio.audioWorklet.addModule(new URL('./audio-worklet.js', import.meta.url));
    node = new AudioWorkletNode(audio, 'original-exec-output', {outputChannelCount: [2], processorOptions: {
      buffer: Module.HEAPU8.buffer, base: Module._ps2web_audio_ring(),
    }});
    node.onprocessorerror = () => failure('audio processor failed');
    node.connect(audio.destination);
    started = true;
    // This lifecycle experiment uses the original 60-Hz presentation setting.
    // These are host renderer options, not guest network settings or state.
    Module.ENV.PS2_EXPERIMENT_FPS = '60';
    Module.ENV.PS2_RENDER_AUTO = '0';
    // host/web.cpp loops over native argv beginning at index 2. callMain adds
    // program argv[0]; /game/core.elf occupies index 1; every guest arg follows.
    const hostArgs = ['/game/core.elf', ...argv.flatMap(arg => ['--arg', arg])];
    Module.arguments = hostArgs;
    Promise.resolve(Module.callMain(hostArgs)).then(code => {
      if (Number.isInteger(code) && code !== 0) failure('native main returned ' + code);
    }).catch(failure);
    inputTimer = setInterval(() => {
      const mask = [...keys].reduce((value, key) => value | keyMap[key], 0);
      Module._ps2web_pad(0, mask, axis('KeyJ', 'KeyL'), axis('KeyI', 'KeyK'), 128, 128);
    }, 16);
    sampleTimer = setInterval(() => send('sample', {sample: {image: Module.execImage,
      frames: Module._ps2web_frames(), audio: audio.state,
      ring: Array.from(new Uint32Array(Module.HEAPU8.buffer, Module._ps2web_audio_ring(), 4)),
    }}), 1000);
    document.querySelector('#status').textContent = 'Running ' + Module.execImage;
    send('started', {receipt: {image: Module.execImage, imageSha256: expected.sha256, argv, cardSha256: imported}});
  }

  addEventListener('message', async event => {
    const data = event.data;
    if (event.source !== parent || event.origin !== origin || data?.originalExec !== 1 || data.token !== token) return;
    try {
      if (data.type === 'start') await start(data);
      else if (data.type === 'stop') {
        stopped = true; clearInterval(inputTimer); clearInterval(sampleTimer); keys.clear();
        Module.originalOnlineBridge?.reset();
        Module.PThread.terminateAllThreads();
        node?.disconnect(); if (audio) await audio.close();
        send('stopped');
      }
    } catch (error) { failure(error?.stack || error); }
  });
  return {failure, ready() { send('ready', {image: Module.execImage, imageSha256: Module.execImageSha256}); }};
}
