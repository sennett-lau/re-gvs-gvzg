// Bounded, single-instance reachability probe. It never claims network success.
const fs = require('node:fs'), path = require('node:path');
const { createHash } = require('node:crypto');
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
const createNet = process.env.PROBE_CREATE_NET === '1';
const selectSlot = process.env.PROBE_NET_SLOT1 === '1';
const controlFile = process.env.PROBE_CONTROL_FILE;
const cardFixture = process.env.PROBE_CARD_FIXTURE;
const broadband = process.env.PROBE_BROADBAND === '1';
if (broadband && (!cardFixture || !confirm)) throw Error('Broadband replay requires a verified fixture and confirm');
const operatorMs = Number(process.env.PROBE_OPERATOR_MS || 180000);
if (!Number.isSafeInteger(operatorMs) || operatorMs < 1000 || operatorMs > 600000) throw Error('Operator window must be 1000–600000 ms');
let fixture = null;
if (cardFixture) {
  if (card !== 'default' || createNet || selectSlot) throw Error('Fixture replay requires default card without fresh-card setup flags');
  const bytes = fs.readFileSync(cardFixture);
  const sha256 = createHash('sha256').update(bytes).digest('hex');
  if (sha256 !== process.env.PROBE_CARD_SHA256) throw Error('Explicit fresh test-card fingerprint required');
  fixture = { sha256, size: bytes.length, source: 'Previously exported isolated test card' };
}
if (createNet && (!confirm || card !== 'default')) throw Error('NET creation requires confirm and a fresh default card');
if (selectSlot && !createNet) throw Error('NET slot selection requires NET creation');
let phase = 'boot', lastConnection = null, lastState = null;
let traceLost = false;
let beforeCancel = null, confirmStart = null, confirmEnd = null;
const run = { started_utc: new Date().toISOString(), argv: process.argv.slice(2), card, confirm, createNet, selectSlot, fixture, broadband, operatorMs,
  harness_sha256: createHash('sha256').update(fs.readFileSync(__filename)).digest('hex') };
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
  last_connection_word: lastConnection, connection: lastState, ...await page.evaluate(() => ({
  scene: GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19)),
  failed: !!Module.failed, failure: Module.failure || null,
  gpu: Module.gpuInfo || null, isolated: crossOriginIsolated,
  audio: window.testAudioContexts.map(c => c.state),
  ring: Array.from(new Int32Array(Module.HEAPU8.buffer, Module._ps2web_audio_ring(), 4))
})) });
(async () => {
  // Server preparation can include hashing the private disc. Wait before launch.
  const ready = await fetch(base, { method: 'HEAD', signal: AbortSignal.timeout(15000) });
  if (!ready.ok) throw Error('Probe server is not ready: ' + ready.status);
  const buildResponse = await fetch(new URL('build-info.json', base));
  if (!buildResponse.ok) throw Error('Build provenance is required');
  const buildText = await buildResponse.text();
  run.build_info_sha256 = createHash('sha256').update(buildText).digest('hex');
  fs.writeFileSync(path.join(out, 'build-info.json'), buildText); save('run', run);
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
  const page = await context.newPage(); page.setDefaultTimeout(90000); await page.bringToFront();
  page.on('console', message => {
    const text = message.text(); records.push(text);
    fs.appendFileSync(path.join(out, 'console.log'), text + '\n');
    if (text.startsWith('[original-online] ')) {
      const observed = JSON.parse(text.slice(18));
      if (observed.event === 'trace_cap' || observed.dropped > 0 || observed.boot_dropped > 0) traceLost = true;
      if (observed.event === 'connection') lastConnection = observed.state_word;
      if (observed.state !== undefined && observed.substate !== undefined) lastState = observed;
      mark('observer', { observed });
    }
  });
  page.on('pageerror', error => errors.push(String(error)));
  base.search = '?fps=60' + (card === 'none' ? '&nocard' : ''); await page.goto(base.href);
  if (cardFixture) {
    await page.locator('#start:enabled').waitFor();
    page.once('dialog', dialog => {
      if (!dialog.message().startsWith('Replace the memory card in slot 1 with ')) return dialog.dismiss();
      return dialog.accept();
    });
    await Promise.all([page.waitForEvent('load'), page.locator('#import-file').setInputFiles(cardFixture)]);
    mark('test-card-import', { fixture });
  }
  await page.locator('#start:enabled').click();
  await page.waitForFunction(() => {
    const s = GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19));
    return s?.mode === 1 || (s?.mode === 0 && s.state === 2 && s.stage === 3);
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
  await page.screenshot({ path: path.join(out, 'main-menu.png') });
  phase = 'menu-selection'; mark('phase');
  for (let i = 0; i < 7; i++) await press(page, 'ArrowDown');
  await press(page, 'KeyX');
  phase = 'neutral'; mark('phase');
  if (confirm) {
    const deadline = performance.now() + 45000;
    while (!(lastState?.state === 1 && lastState.substate === 1 && lastState.timer6 <= 0)) {
      if (performance.now() > deadline) {
        save('confirm-not-ready', await snap(page));
        await page.screenshot({ path: path.join(out, 'confirm-not-ready.png') });
        throw Error('Original input state1/substate1 with expired timer was not observed');
      }
      await sleep(100);
    }
    await sleep(300); // Menu key is already released; preserve an ordinary new edge.
    save('before-confirm', await snap(page));
    await page.screenshot({ path: path.join(out, 'before-confirm.png') });
    phase = 'connection-confirm'; mark('phase');
    confirmStart = performance.now() - started;
    await press(page, 'KeyX');
    confirmEnd = performance.now() - started;
    phase = 'after-confirm'; mark('phase');
  }
  if (createNet) {
    const deadline = performance.now() + 45000;
    while (!(lastState?.state === 2 && lastState.substate === 21 && lastState.timer6 <= 0)) {
      if (performance.now() > deadline) throw Error('Verified original NET-file creation prompt was not reached');
      await sleep(100);
    }
    save('before-create-net', await snap(page));
    await page.screenshot({ path: path.join(out, 'before-create-net.png') });
    phase = 'create-net-confirm'; mark('phase');
    await press(page, 'KeyX');
    phase = 'after-create-net'; mark('phase');
  }
  if (selectSlot) {
    const deadline = performance.now() + 45000;
    while (!(lastState?.state === 2 && lastState.substate === 23 && lastState.timer4 <= 0 && lastState.timer6 <= 0)) {
      if (performance.now() > deadline) throw Error('Verified original card-slot prompt was not reached');
      await sleep(100);
    }
    save('before-slot1', await snap(page));
    await page.screenshot({ path: path.join(out, 'before-slot1.png') });
    phase = 'slot1-confirm'; mark('phase');
    await press(page, 'KeyX');
    phase = 'after-slot1'; mark('phase');
  }
  if (broadband) {
    // These exact prompts were independently captured in the operator replay.
    // A changed state fails the probe; no guest state or network result is forced.
    const prompts = [[1026, 'load-net'], [67330, 'load-slot1'], [198402, 'load-confirm'],
      [524803, 'broadband'], [516, 'network-connection'], [517, 'connection-notice']];
    for (const [word, name] of prompts) {
      const deadline = performance.now() + 30000;
      while (!(lastState?.state_word === word && lastState.activity === 0 && lastState.timer4 <= 0 && lastState.timer6 <= 0)) {
        if (traceLost || performance.now() > deadline) {
          save(name + '-not-ready', await snap(page));
          await page.screenshot({ path: path.join(out, name + '-not-ready.png') });
          throw Error('Expected original prompt not reached: ' + name);
        }
        await sleep(100);
      }
      if (traceLost) throw Error('Trace lost before original prompt: ' + name);
      await sleep(300);
      phase = name; mark('phase');
      save(name + '-before', await snap(page));
      await page.screenshot({ path: path.join(out, name + '-before.png') });
      if (name === 'connection-notice') await press(page, 'ArrowUp');
      await press(page, 'KeyX'); await sleep(1500);
    }
    phase = 'after-broadband'; mark('phase');
  }
  if (controlFile) {
    // A bounded operator loop accepts ordinary keys only, guarded by the last
    // observed original state. Commands and screenshots remain private evidence.
    phase = 'operator'; mark('phase');
    const deadline = performance.now() + operatorMs;
    let lastId = 0;
    while (performance.now() < deadline) {
      save('operator-live', await snap(page));
      await page.screenshot({ path: path.join(out, 'operator-live.png') });
      let command;
      try { command = JSON.parse(fs.readFileSync(controlFile, 'utf8')); } catch {}
      if (command && Number.isSafeInteger(command.id) && command.id > lastId) {
        lastId = command.id;
        mark('operator-command', { command });
        if (command.action === 'finish') break;
        const keys = ['KeyX', 'KeyZ', 'ArrowUp', 'ArrowDown', 'ArrowLeft', 'ArrowRight'];
        if (traceLost || command.action !== 'press' || !keys.includes(command.code) ||
            command.state_word !== lastState?.state_word) {
          mark('operator-rejected', { reason: 'Trace lost, unknown key/action or observed state word changed' });
        } else {
          await page.screenshot({ path: path.join(out, `operator-${lastId}-before.png`) });
          await press(page, command.code); await sleep(1500);
          save(`operator-${lastId}-after`, await snap(page));
          await page.screenshot({ path: path.join(out, `operator-${lastId}-after.png`) });
        }
        fs.writeFileSync(path.join(out, 'operator-ack.json'), JSON.stringify({ id: lastId }));
      }
      await sleep(1500);
    }
    phase = 'after-operator'; mark('phase');
  }
  const samples = [];
  for (let i = 0; i < 12; i++) {
    await sleep(2500); samples.push(await snap(page)); save('samples', samples);
    if (i % 4 === 0) await page.screenshot({ path: path.join(out, `entry-${i}.png`) });
  }
  await page.screenshot({ path: path.join(out, 'original-mode7.png') });
  if (createNet) {
    const downloadPromise = page.waitForEvent('download', { timeout: 2000 }).catch(() => null);
    await page.getByRole('button', { name: 'Export card', exact: true }).click();
    const download = await downloadPromise;
    if (download) {
      const cardPath = path.join(out, 'fresh-test-card.ps2');
      await download.saveAs(cardPath);
      const bytes = fs.readFileSync(cardPath);
      save('fresh-test-card', { source: 'Fresh isolated browser; no imported or personal save',
        available: true, size: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex'),
        note: 'Export is not proof that original NET creation succeeded; inspect UI and trace' });
    } else save('fresh-test-card', { available: false, reason: 'No saved card download was produced' });
  }
  // Exercise original cancel, without changing state to force a transition.
  beforeCancel = await snap(page); save('before-cancel', beforeCancel);
  phase = 'cancel'; mark('phase');
  await press(page, 'KeyZ'); await sleep(4000);
  const final = await snap(page);
  const events = records.filter(t => t.startsWith('[original-online] ')).map(t => JSON.parse(t.slice(18)));
  const checks = {
    original_mode: events.some(e => e.event === 'menu' && e.mode === 7) &&
      samples.some(s => s.scene?.mode === 7),
    no_versus: samples.every(s => s.scene?.mode !== 4) &&
      events.filter(e => e.event === 'mode').every(e => (e.state_word & 255) !== 4),
    cancel_returned: final.scene?.mode === 2,
    audio_running: [...samples, final].every(s => s.audio.length && s.audio.every(a => a === 'running')),
    audio_consumed: final.ring[1] !== samples[0].ring[1],
    no_failure: !errors.length && [...samples, final].every(s => !s.failed),
    trace_complete: !events.some(e => e.event === 'trace_cap' || e.dropped > 0 || e.boot_dropped > 0)
  };
  const confirmEvents = timeline.filter(e => e.event === 'observer' && e.elapsed_ms >= confirmStart &&
    e.elapsed_ms <= beforeCancel.elapsed_ms).map(e => e.observed);
  const accepted = confirmEvents.some(e => e.event === 'confirm_result' && e.return_value !== 0 &&
    (e.input_gate & 1) !== 0 && (e.input_edge & 0x20) !== 0);
  const progressed = confirmEvents.some(e => e.state === 2);
  const confirmOutcome = { requested: confirm, input_accepted: accepted, connection_state2_seen: progressed,
    input_start_ms: confirmStart, input_end_ms: confirmEnd };
  if (confirm) checks.confirm_accepted = accepted && progressed;
  // Later original states have different cancellation semantics. Preserve the
  // observed result without treating state1's cancel contract as universal.
  const cancelRequired = !confirm || (beforeCancel.connection?.state === 1 && beforeCancel.connection?.substate === 1);
  if (!cancelRequired) delete checks.cancel_returned;
  const passed = Object.values(checks).every(Boolean);
  save('result', { passed, scope: 'Original menu/lifecycle observation only', network_success: false,
    events, samples, after_cancel: final, errors, blocked, browser: browser.version(), muted: true,
    card, confirm, timeline, checks, confirm_outcome: confirmOutcome,
    cancel: { contract_required: cancelRequired, before: beforeCancel, returned_to_menu: final.scene?.mode === 2 }, run });
  if (!passed) throw Error('Bounded original-mode probe failed: ' + JSON.stringify(checks));
})().catch(error => { save('failure', { message: String(error), errors, blocked }); process.exitCode = 1; })
  .finally(async () => { if (browser) await browser.close(); });
