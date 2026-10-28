// Bounded, single-instance reachability probe. It never claims network success.
const fs = require('node:fs'), path = require('node:path');
const { chromium } = require(process.env.PLAYWRIGHT_MODULE || 'playwright');
const base = new URL(process.argv[2] || 'http://127.0.0.1:8641/');
if (!['127.0.0.1', 'localhost'].includes(base.hostname)) throw Error('Loopback URL required');
const out = path.resolve(process.argv[3] || '.local/original-online/browser');
if (fs.existsSync(out)) throw Error('Use a new output directory; never mix probe attempts');
fs.mkdirSync(out, { recursive: true });
const records = [], errors = [], blocked = [];
const started = performance.now(), timeline = [];
const card = process.env.PROBE_CARD || 'none';
if (!['none', 'default'].includes(card)) throw Error('PROBE_CARD must be none or default');
const confirm = process.env.PROBE_CONFIRM === '1';
let phase = 'boot', lastConnection = null;
function mark(event, detail = {}) {
  const value = { elapsed_ms: performance.now() - started, phase, event, ...detail };
  timeline.push(value); fs.appendFileSync(path.join(out, 'timeline.jsonl'), JSON.stringify(value) + '\n');
}
const sleep = ms => new Promise(resolve => setTimeout(resolve, ms));
const save = (name, value) => fs.writeFileSync(path.join(out, name + '.json'), JSON.stringify(value, null, 2));
let browser;
async function press(page, code) {
  mark('keydown', { code });
  await page.evaluate(code => dispatchEvent(new KeyboardEvent('keydown', { code, bubbles: true })), code);
  await sleep(250);
  await page.evaluate(code => dispatchEvent(new KeyboardEvent('keyup', { code, bubbles: true })), code);
  mark('keyup', { code });
  await sleep(450);
}
const snap = async page => ({ elapsed_ms: performance.now() - started, phase,
  last_connection_word: lastConnection, ...await page.evaluate(() => ({
  scene: GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19)),
  failed: !!Module.failed, failure: Module.failure || null,
  audio: window.testAudioContexts.map(c => c.state),
  ring: Array.from(new Int32Array(Module.HEAPU8.buffer, Module._ps2web_audio_ring(), 4))
})) });
(async () => {
  // Server preparation can include hashing the private disc. Wait before launch.
  const ready = await fetch(base, { method: 'HEAD', signal: AbortSignal.timeout(15000) });
  if (!ready.ok) throw Error('Probe server is not ready: ' + ready.status);
  browser = await chromium.launch({ executablePath: process.env.CHROME_PATH || undefined,
    headless: false, args: ['--mute-audio', '--no-first-run', '--disable-background-networking',
      '--disable-background-timer-throttling', '--disable-renderer-backgrounding',
      '--disable-backgrounding-occluded-windows'] });
  const context = await browser.newContext({ viewport: { width: 1280, height: 900 }, serviceWorkers: 'block' });
  await context.route('**/*', route => {
    const url = new URL(route.request().url());
    if (url.origin === base.origin) return route.continue();
    blocked.push(url.origin); return route.abort();
  });
  await context.addInitScript(() => {
    window.testAudioContexts = [];
    const A = window.AudioContext;
    window.AudioContext = new Proxy(A, { construct(t, args) {
      const value = new t(...args); window.testAudioContexts.push(value); return value;
    } });
    // The probe has no transport. Block accidental app socket/peer creation too.
    window.WebSocket = class { constructor() { throw Error('Probe blocks WebSocket'); } };
    window.RTCPeerConnection = class { constructor() { throw Error('Probe blocks WebRTC'); } };
  });
  const page = await context.newPage(); page.setDefaultTimeout(90000);
  page.on('console', message => {
    const text = message.text(); records.push(text);
    fs.appendFileSync(path.join(out, 'console.log'), text + '\n');
    if (text.startsWith('[original-online] ')) {
      const observed = JSON.parse(text.slice(18));
      if (observed.event === 'connection') lastConnection = observed.state_word;
      mark('observer', { observed });
    }
  });
  page.on('pageerror', error => errors.push(String(error)));
  base.search = '?fps=60' + (card === 'none' ? '&nocard' : ''); await page.goto(base.href);
  await page.locator('#start:enabled').click();
  await page.waitForFunction(() => {
    const s = GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19));
    return s?.mode === 0 && s.state === 2 && s.stage === 3;
  });
  for (let i = 0; i < 30; i++) {
    if ((await snap(page)).scene?.mode === 1) break;
    await press(page, 'ArrowLeft'); await press(page, 'KeyX'); await sleep(1500);
  }
  await page.waitForFunction(() => GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19))?.mode === 1);
  for (let i = 0; i < 12; i++) {
    await press(page, 'Enter'); await sleep(2500);
    if ((await snap(page)).scene?.mode === 2) break;
  }
  await page.waitForFunction(() => GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19))?.mode === 2);
  await sleep(3500);
  phase = 'menu-selection'; mark('phase');
  for (let i = 0; i < 7; i++) await press(page, 'ArrowDown');
  await press(page, 'KeyX');
  phase = 'neutral'; mark('phase');
  if (confirm) {
    await sleep(7500);
    save('before-confirm', await snap(page));
    await page.screenshot({ path: path.join(out, 'before-confirm.png') });
    phase = 'connection-confirm'; mark('phase');
    await press(page, 'KeyX');
    phase = 'after-confirm'; mark('phase');
  }
  const samples = [];
  for (let i = 0; i < 12; i++) {
    await sleep(2500); samples.push(await snap(page)); save('samples', samples);
    if (i % 4 === 0) await page.screenshot({ path: path.join(out, `entry-${i}.png`) });
  }
  await page.screenshot({ path: path.join(out, 'original-mode7.png') });
  // Exercise original cancel, without changing state to force a transition.
  save('before-cancel', await snap(page));
  phase = 'cancel'; mark('phase');
  await press(page, 'KeyZ'); await sleep(4000);
  const final = await snap(page);
  const events = records.filter(t => t.startsWith('[original-online] ')).map(t => JSON.parse(t.slice(18)));
  const checks = {
    original_mode: events.some(e => e.event === 'menu' && e.mode === 7) &&
      samples.some(s => s.scene?.mode === 7),
    no_versus: samples.every(s => s.scene?.mode !== 4),
    cancel_returned: final.scene?.mode === 2,
    audio_running: [...samples, final].every(s => s.audio.length && s.audio.every(a => a === 'running')),
    audio_consumed: final.ring[1] !== samples[0].ring[1],
    no_failure: !errors.length && [...samples, final].every(s => !s.failed)
  };
  const passed = Object.values(checks).every(Boolean);
  save('result', { passed, scope: 'Original menu/lifecycle observation only', network_success: false,
    events, samples, after_cancel: final, errors, blocked, browser: browser.version(), muted: true,
    card, confirm, timeline, checks });
  if (!passed) throw Error('Bounded original-mode probe failed: ' + JSON.stringify(checks));
})().catch(error => { save('failure', { message: String(error), errors, blocked }); process.exitCode = 1; })
  .finally(async () => { if (browser) await browser.close(); });
