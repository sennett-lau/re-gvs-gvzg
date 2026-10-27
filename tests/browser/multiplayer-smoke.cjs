// Optional GPU acceptance. Isolated browser contexts; browser output muted,
// AudioContext/worklets and the native audio ring continue processing normally.
const fs = require('node:fs'), path = require('node:path');
const {chromium} = require(process.env.PLAYWRIGHT_MODULE || 'playwright');
const base = new URL(process.argv[2] || 'http://127.0.0.1:8629/');
const out = path.resolve(process.argv[3] || '.local/multiplayer-smoke');
const route = process.argv[4] || 'lockstep';
const dedicated = route === 'stream' && process.argv.includes('--dedicated');
const finishRound = process.argv.includes('--round');
if (!['stream', 'lockstep'].includes(route)) throw Error('Choose stream or lockstep');
fs.mkdirSync(out, {recursive:true});
const save = (name, value) => fs.writeFileSync(path.join(out, name + '.json'), JSON.stringify(value, null, 2) + '\n');
const sleep = ms => new Promise(resolve => setTimeout(resolve, ms));
const progress = stage => { save('status', {route, stage}); console.log(stage); };
const pages = [], errors = [];
let browser;
async function press(page, code, duration = 220) {
  await page.evaluate(code => dispatchEvent(new KeyboardEvent('keydown', {code, bubbles:true})), code);
  try { await sleep(duration); }
  finally { await page.evaluate(code => dispatchEvent(new KeyboardEvent('keyup', {code, bubbles:true})), code); }
  await sleep(450);
}
const snapshot = page => page.evaluate(() => ({
  scene: GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19)),
  ticks: Module._ps2web_netplay_stat?.(0), waitMs: Module._ps2web_netplay_stat?.(1),
  checkpoint: Module.multiplayer?.game?.lastCheckpoint,
  error: Module.multiplayer?.game?.error?.message || Module.failure || null,
  running: !!Module.running, failed: !!Module.failed, playerView: document.body.dataset.playerView,
  audioContexts: window.testAudioContexts.map(a => a.state),
  audioRing: Array.from(new Int32Array(Module.HEAPU8.buffer, Module._ps2web_audio_ring(), 4)),
}));
async function mainMenu(page) {
  // No personal memory card participates in the deterministic boot recipe.
  await page.waitForFunction(() => {
    const s = GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19));
    return s?.mode === 0 && s.state === 2 && s.stage === 3;
  }, undefined, {timeout:90000});
  // The scene ID changes before the original dialog has finished appearing.
  // Retry its normal Yes input while still in boot, never after title entry.
  for (let i = 0; i < 30; i++) {
    const scene = (await snapshot(page)).scene;
    if (scene.mode === 1) break;
    if (scene.mode === 0 && scene.state === 2 && scene.stage === 3) {
      await press(page, 'ArrowLeft'); await press(page, 'KeyX');
    }
    await sleep(1500);
  }
  await page.waitForFunction(() => GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19))?.mode === 1);
  for (let i = 0; i < 12; i++) {
    await press(page, 'Enter'); await sleep(2500);
    if ((await snapshot(page)).scene.mode === 2) break;
  }
  await page.waitForFunction(() => document.body.dataset.gameMode === '2'); await sleep(3500);
}
async function networkMenu(page) {
  for (let i = 0; i < 7; i++) await press(page, 'ArrowDown');
  await press(page, 'KeyX');
}
async function startBattle(host, playerOne, guest) {
  await host.waitForFunction(() => GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19))?.mode === 4);
  await sleep(6000);
  // Original Versus flow: P2 joins, then each player selects Ready.
  await press(guest, 'Enter'); await sleep(1500);
  await press(playerOne, 'ArrowDown'); await sleep(700); await press(playerOne, 'KeyX');
  await press(guest, 'ArrowUp'); await sleep(700); await press(guest, 'KeyX');
  await host.waitForFunction(() => {
    const s = GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19));
    return s?.mode === 4 && s.stage === 3 && s.humanMask === 3 && s.splitActive === 1 &&
      s.teamHumansA === 1 && s.teamHumansB === 1;
  }, undefined, {timeout:90000});
  await sleep(7000);
}
(async () => {
  browser = await chromium.launch({executablePath:process.env.CHROME_PATH || undefined,
    headless:process.argv.includes('--headless'), args:['--mute-audio','--no-first-run',
      '--disable-background-timer-throttling','--disable-renderer-backgrounding','--disable-backgrounding-occluded-windows']});
  async function makePage() {
    const context = await browser.newContext({viewport:{width:1280,height:900}});
    await context.addInitScript(() => {
      window.testAudioContexts = []; const Constructor = window.AudioContext;
      window.AudioContext = new Proxy(Constructor, {construct(target, args) {
        const value = new target(...args); window.testAudioContexts.push(value); return value;
      }});
    });
    const page = await context.newPage(); page.setDefaultTimeout(90000);
    page.on('pageerror', error => errors.push(String(error))); pages.push(page); return page;
  }
  const host = await makePage(); const url = new URL(base); url.search = '?fps=60&nocard';
  progress('loading'); await host.goto(url.href);
  let guest, playerOne = host;
  if (route === 'lockstep') {
    await host.locator('#multiplayer-launch').click(); await host.locator('#mp-lockstep:enabled').click();
    await host.waitForURL(/netplay=1/);
    await host.waitForFunction(() => document.querySelector('#mp-invite')?.value.startsWith('http'));
    const invitation = await host.locator('#mp-invite').inputValue();
    guest = await makePage(); await guest.goto(invitation);
    await Promise.all(pages.map(p => p.locator('#mp-continue:enabled').waitFor()));
    await Promise.all(pages.map(p => p.locator('#start:enabled').waitFor()));
    await Promise.all(pages.map(p => p.locator('#mp-continue').click()));
    progress('two normal boots'); await mainMenu(host); await networkMenu(host);
  } else {
    await host.locator('#start:enabled').click(); await mainMenu(host); await networkMenu(host);
    await host.locator('#multiplayer-dialog[open]').waitFor();
    await host.screenshot({path:path.join(out,'native-menu.png')});
    if (dedicated) await host.locator('#mp-dedicated').check();
    await host.locator('#mp-stream:enabled').click();
    await host.waitForFunction(() => document.querySelector('#mp-invite').value.startsWith('http'));
    const invitation = await host.locator('#mp-invite').inputValue();
    if (dedicated) {
      playerOne = await makePage(); await playerOne.goto(invitation); await playerOne.locator('#join').click();
      await host.waitForFunction(() => document.body.dataset.streamingPlayers === '1');
    }
    guest = await makePage(); await guest.goto(invitation); await guest.locator('#join').click();
    await host.waitForFunction(expected => document.body.dataset.streamingPlayers === expected, dedicated ? '1,2' : '2');
    await host.locator('#mp-continue').click();
  }
  progress('native Versus selection'); await startBattle(host, playerOne, guest);
  const gamePages = route === 'lockstep' ? pages : [host];
  const before = await Promise.all(gamePages.map(snapshot)); save('battle-start', before);
  for (let i = 0; i < 6; i++) {
    await press(playerOne, i % 2 ? 'KeyZ' : 'ArrowUp', 500);
    await press(guest, i % 2 ? 'KeyZ' : 'ArrowLeft', 500);
  }
  await sleep(10000);
  const after = await Promise.all(gamePages.map(snapshot)); save('battle-end', after);
  for (let i = 0; i < after.length; i++) {
    const value = after[i];
    if (value.failed || value.error || !value.running) throw Error('Game stopped: ' + value.error);
    if (!value.audioContexts.includes('running') || JSON.stringify(value.audioRing) === JSON.stringify(before[i].audioRing))
      throw Error('Active audio consumption was not preserved');
    if (route === 'lockstep' && (!value.checkpoint || value.checkpoint.frame <= before[i].checkpoint.frame))
      throw Error('No new agreed checkpoint during active input');
  }
  if (route === 'lockstep') {
    if (after[0].playerView !== '1' || after[1].playerView !== '2') throw Error('Own-player views did not activate');
    await press(host,'Enter');
    await host.waitForFunction(() => document.body.dataset.playerView === 'full');
    await press(host,'Enter');
    await host.waitForFunction(() => document.body.dataset.playerView === '1');
    progress('pause restores full menu; resume restores own views');
  } else {
    const clients = dedicated ? [playerOne, guest] : [guest];
    const video = await Promise.all(clients.map(p => p.evaluate(() => ({seconds:document.getElementById('video').currentTime,
      decodedFrames:document.getElementById('video').getVideoPlaybackQuality().totalVideoFrames}))));
    if (video.some(v => v.decodedFrames < 60)) throw Error('No sustained decoded video'); save('video', video);
    const framesBefore = await host.evaluate(() => Module._ps2web_frames());
    const cover = await host.context().newPage(); await cover.goto('about:blank'); await sleep(3000);
    const framesAfter = await host.evaluate(() => Module._ps2web_frames());
    if (framesAfter <= framesBefore + 2) throw Error('Hidden streaming host stopped');
    await cover.close();
    await host.locator('#multiplayer-open').click();
    await press(guest, 'ArrowLeft', 500); await host.locator('#mp-copy').click();
    await host.locator('#mp-dismiss').click();
    await guest.locator('#leave').click();
    await host.waitForFunction(expected => document.body.dataset.streamingPlayers === expected, dedicated ? '1' : '');
    await guest.locator('#join').click();
    await host.waitForFunction(expected => document.body.dataset.streamingPlayers === expected, dedicated ? '1,2' : '2');
    progress('hidden host, invitation access and same-port rejoin');
  }
  if (finishRound) {
    progress('waiting for original round completion');
    const samples = [];
    // Let the unmodified round timer and computer teammates finish the round.
    for (let i = 0; i < 60; i++) {
      const values = await Promise.all(gamePages.map(snapshot));
      if (values.some(value => value.failed || value.error || !value.running)) throw Error('Game stopped before round completion');
      samples.push(values); save('round-progress', samples);
      if (values.every(value => value.scene.mode === 4 && value.scene.stage !== 3)) break;
      await sleep(5000);
    }
    const end = await Promise.all(gamePages.map(snapshot));
    if (end.some(value => value.scene.mode !== 4 || value.scene.stage === 3)) throw Error('Round did not leave active battle within five minutes');
    await sleep(5000);
    if (route === 'lockstep') await Promise.all(gamePages.map(p => p.waitForFunction(() => document.body.dataset.playerView === 'full')));
    save('round-end', await Promise.all(gamePages.map(snapshot)));
    progress('original round-end sequence reached');
  }
  await Promise.all(pages.map((p,i) => p.screenshot({path:path.join(out,'battle-'+i+'.png')})));
  if (errors.length) throw Error(errors.join('; '));
  save('result', {passed:true, route, dedicated, finishRound, browser:browser.version(), browserOutputMuted:true,
    scope:'Same-PC browser contexts, real normal boot and active two-human Versus battle; no full-match or WAN latency claim.',
    before, after, errors}); progress('passed');
})().catch(async error => {
  save('failure', {error:String(error), stack:error.stack, pageErrors:errors}); progress('failed'); process.exitCode = 1;
  for (let i=0; i<pages.length; i++) try { await pages[i].screenshot({path:path.join(out,'failure-'+i+'.png')}); } catch {}
}).finally(async () => { if (browser) await browser.close(); });
