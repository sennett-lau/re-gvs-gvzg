// Optional GPU acceptance test. All audio processing stays active; browser output is muted.
const fs = require('node:fs');
const path = require('node:path');
const {chromium} = require(process.env.PLAYWRIGHT_MODULE || 'playwright');
const url = process.argv[2] || 'http://127.0.0.1:8620/?fps=120';
const output = path.resolve(process.argv[3] || '.local/game-smoke');
fs.mkdirSync(output, {recursive: true});
const write = (name, value) => fs.writeFileSync(path.join(output, name), JSON.stringify(value, null, 2) + '\n');
const progress = stage => {write('status.json', {stage}); console.log(stage);};
const wait = ms => new Promise(resolve => setTimeout(resolve, ms));
let browser;
(async () => {
  browser = await chromium.launch({executablePath: process.env.CHROME_PATH || undefined,
    headless: !process.argv.includes('--headed'), args: ['--mute-audio','--no-first-run']});
  const context = await browser.newContext({viewport: {width: 1280, height: 900}});
  await context.addInitScript(() => {
    window.testAudioContexts = [];
    const Constructor = window.AudioContext;
    window.AudioContext = new Proxy(Constructor, {construct(target, args) {
      const value = new target(...args); window.testAudioContexts.push(value); return value;
    }});
  });
  const page = await context.newPage();
  page.setDefaultTimeout(30000);
  const errors = [];
  page.on('pageerror', error => errors.push(String(error)));
  const press = async code => {
    await page.evaluate(code => window.dispatchEvent(new KeyboardEvent('keydown', {code, bubbles: true})), code);
    await wait(180);
    await page.evaluate(code => window.dispatchEvent(new KeyboardEvent('keyup', {code, bubbles: true})), code);
    await wait(200);
  };
  const snapshot = () => page.evaluate(() => ({
    scene: GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19)),
    stats: Array.from({length:21}, (_,i) => Module._ps2web_experiment_stat(i)),
    audioContexts: window.testAudioContexts.map(context => context.state),
    queuedMs: Module.audioQueuedMs(),
    ring: Array.from(new Int32Array(Module.HEAPU8.buffer, Module._ps2web_audio_ring(), 4)),
    isolated: crossOriginIsolated, fullscreen: !!document.fullscreenElement,
    gpu: Module.gpuInfo, running: Module.running,
  }));
  progress('loading');
  await page.goto(url, {timeout:120000});
  await page.locator('#start:enabled').waitFor({timeout:120000});
  await page.locator('#start').click();
  progress('normal-boot');
  await wait(35000);
  await page.screenshot({path:path.join(output,'boot.png')});
  await press('Enter');
  await page.locator("body[data-game-mode='2']").waitFor({timeout:90000});
  await wait(5000); await press('ArrowDown'); await press('KeyX');
  await page.locator("body[data-game-mode='4']").waitFor({timeout:90000});
  await wait(6000); await press('ArrowDown'); await press('KeyX');
  progress('entering-versus');
  await page.locator("body[data-game-mode='772'][data-game-adaptive-capable='true']").waitFor({timeout:120000});
  await wait(3000);
  const before = await snapshot();
  for (const key of ['ArrowUp','KeyZ','ArrowRight','KeyA']) await press(key);
  await wait(4000);
  const after = await snapshot();
  if (!after.isolated || !after.running || !after.audioContexts.includes('running'))
    throw Error('Isolation, game execution or active audio failed.');
  if (after.stats[9] <= before.stats[9]) throw Error('Gameplay clock did not advance.');
  if (JSON.stringify(after.ring) === JSON.stringify(before.ring)) throw Error('Audio ring did not advance.');
  await press('Enter');
  await page.waitForFunction(() => GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19))?.paused === 1);
  const paused = await snapshot();
  await press('Enter');
  await page.waitForFunction(() => GundamSceneSnapshot.decode(Module._ps2web_experiment_stat(19))?.paused === 0);
  await page.locator('#fullscreen').click();
  await page.waitForFunction(() => !!document.fullscreenElement);
  await wait(2000);
  const resumed = await snapshot();
  await page.screenshot({path:path.join(output,'battle.png')});
  if (errors.length) throw Error('Browser errors: ' + errors.join('; '));
  write('result.json', {passed:true, browser:browser.version(), browserOutputMuted:true,
    build:await page.evaluate(() => Module.buildInfo), before, after, paused, resumed,
    checks:['normal boot','menu input','Versus battle','gameplay clock advances','active audio consumption',
      'pause','resume','fullscreen','cross-origin isolation','no page errors'],
    scope:'Packaging smoke test, not a new frame-pacing or display-delivery measurement.'});
  progress('passed');
})().catch(error => {write('failure.json',{error:String(error)});progress('failed');process.exitCode=1;})
  .finally(async () => {if (browser) await browser.close();});
