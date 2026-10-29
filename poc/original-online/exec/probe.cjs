// Real-image continuation probe. Replays only captured normal-input phases;
// new utility prompts stay in a bounded, screenshot-led operator loop.
const fs = require('node:fs'), path = require('node:path'), {createHash} = require('node:crypto');
const {chromium} = require(process.env.PLAYWRIGHT_MODULE || 'playwright');
const scene = require('../../../apps/game/assets/scene-snapshot.js');
const base = new URL(process.argv[2]), out = path.resolve(process.argv[3]);
if (!['127.0.0.1', 'localhost'].includes(base.hostname) || fs.existsSync(out)) throw Error('Loopback URL and fresh output directory required');
const fixturePath = process.env.PROBE_CARD_FIXTURE, expected = process.env.PROBE_CARD_SHA256;
const fixture = fs.readFileSync(fixturePath), digest = value => createHash('sha256').update(value).digest('hex');
if (fixture.length !== 8650752 || digest(fixture) !== expected) throw Error('Exact disposable test-card fingerprint required');
const operatorMs = Number(process.env.PROBE_OPERATOR_MS || 180000);
if (!Number.isSafeInteger(operatorMs) || operatorMs < 1000 || operatorMs > 600000) throw Error('Operator window must be 1000..600000ms');
fs.mkdirSync(out, {recursive: true});
const started = performance.now(), errors = [], blocked = [], consoleRecords = [];
let browser, page, lastState, traceLost = false;
const sleep = ms => new Promise(resolve => setTimeout(resolve, ms));
const write = (name, data) => fs.writeFileSync(path.join(out, name + '.json'), JSON.stringify(data, null, 2) + '\n');
const mark = (event, detail = {}) => fs.appendFileSync(path.join(out, 'timeline.jsonl'), JSON.stringify({utc:new Date().toISOString(),elapsed_ms:performance.now()-started,event,...detail})+'\n');
async function state() {
  return page.evaluate(() => ({image:window.originalExec?.session?.image,generation:window.originalExec?.session?.generation,
    state:window.originalExec?.session?.state,events:window.originalExec?.events||[]}));
}
async function currentFrame() {
  const frame = page.frames().find(frame => /\/(game|utility)\/index\.html/.test(frame.url()));
  if (!frame) throw Error('No active original executable document'); return frame;
}
async function snapshot() {
  const current = await state(); let sample = null;
  if (current.state === 'running') {
    const frame = await currentFrame();
    sample = await frame.evaluate(() => ({frames:Module._ps2web_frames(),ring:Array.from(new Uint32Array(Module.HEAPU8.buffer,Module._ps2web_audio_ring(),4)),
      scene:Module._ps2web_experiment_stat?Module._ps2web_experiment_stat(19):null,audio:window.testAudioContexts.map(context=>context.state)}));
    if (sample.scene !== null) sample.scene = scene.decode(sample.scene);
  }
  return {...current,sample,lastState,traceLost};
}
async function healthy() {
  const current = await state();
  if (errors.length || traceLost || current.state === 'failed') throw Error('Observed original/browser failure or trace loss');
  return current;
}
async function until(predicate, description, timeout = 90000) {
  const deadline = performance.now() + timeout;
  while (!(await predicate())) {
    await healthy();
    if (performance.now() > deadline) throw Error('Timed out: ' + description);
    await sleep(100);
  }
}
async function press(code, image = 'game', generation = 1) {
  const current = await healthy();
  if (current.image !== image || current.generation !== generation || current.state !== 'running') throw Error('Input image/generation changed');
  const frame = await currentFrame(); mark('keydown', {code,image,generation,lastState});
  await frame.evaluate(code => dispatchEvent(new KeyboardEvent('keydown',{code,bubbles:true})),code);
  await sleep(250);
  // A genuine exec may destroy the document during keydown; never deliver the
  // corresponding release into the new executable's document.
  if (!frame.isDetached()) {
    try { await frame.evaluate(code => dispatchEvent(new KeyboardEvent('keyup',{code,bubbles:true})),code); }
    catch(error) { if(!frame.isDetached())throw error; }
  }
  mark('keyup',{code,image,generation}); await sleep(450);
}
async function screenshot(name) { await page.screenshot({path:path.join(out,name+'.png')}); write(name,await snapshot()); }
async function observedPrompt(word, name) {
  await until(()=>lastState?.state_word===word&&lastState.activity===0&&lastState.timer4<=0&&lastState.timer6<=0,name,45000);
  await sleep(300); await screenshot(name+'-before');
}

(async()=>{
  const response = await fetch(new URL('build-info.json',base));
  if (!response.ok) throw Error('Assembled build provenance missing');
  const buildText = await response.text(); fs.writeFileSync(path.join(out,'build-info.json'),buildText);
  write('run',{started_utc:new Date().toISOString(),fixture:{sha256:expected,bytes:fixture.length,source:'Disposable isolated NET-card clone'},
    build_info_sha256:digest(buildText),harness_sha256:digest(fs.readFileSync(__filename)),argv:process.argv.slice(2),operatorMs,
    muted:true,audioSuspendedForTiming:false,network_success:false});
  browser = await chromium.launch({executablePath:process.env.CHROME_PATH||undefined,headless:false,args:['--mute-audio','--autoplay-policy=no-user-gesture-required',
    '--no-first-run','--disable-background-networking','--disable-background-timer-throttling','--disable-renderer-backgrounding','--disable-backgrounding-occluded-windows']});
  const context = await browser.newContext({viewport:{width:1280,height:1000},serviceWorkers:'block'});
  await context.route('**/*',route=>{
    const url=new URL(route.request().url());if(url.origin===base.origin)return route.continue();blocked.push(url.origin);return route.abort();
  });
  await context.addInitScript(()=>{
    window.testAudioContexts=[];const Original=AudioContext;
    window.AudioContext=new Proxy(Original,{construct(target,args){const value=new target(...args);window.testAudioContexts.push(value);return value;}});
    window.WebSocket=class{constructor(){throw Error('Exec probe blocks app WebSocket')}};
    window.RTCPeerConnection=class{constructor(){throw Error('Exec probe blocks app WebRTC')}};
  });
  page=await context.newPage();page.setDefaultTimeout(120000);await page.bringToFront();
  page.on('pageerror',error=>{errors.push(String(error));mark('pageerror',{error:String(error)});});
  page.on('console',message=>{
    const text=message.text();consoleRecords.push(text);fs.appendFileSync(path.join(out,'console.jsonl'),JSON.stringify({utc:new Date().toISOString(),text})+'\n');
    if(text.startsWith('[original-online] ')){
      const observed=JSON.parse(text.slice(18));
      if(observed.event==='trace_cap'||observed.dropped>0||observed.boot_dropped>0)traceLost=true;
      if(observed.state!==undefined&&observed.substate!==undefined)lastState=observed;
    }
  });
  await page.goto(base.href);await page.locator('#card').setInputFiles(fixturePath);await page.locator('#sha').fill(expected);await page.locator('#start').click();
  await until(async()=> (await state()).state==='running','game host start',180000);
  await until(async()=>{const s=(await snapshot()).sample?.scene;return s?.mode===1||(s?.mode===0&&s.state===2&&s.stage===3);},'normal boot');
  for(let i=0;i<30&&(await snapshot()).sample?.scene?.mode!==1;i++){await press('ArrowLeft');await press('KeyX');await sleep(1500);}
  await until(async()=> (await snapshot()).sample?.scene?.mode===1,'title');
  for(let i=0;i<12;i++){await press('Enter');await sleep(2500);if((await snapshot()).sample?.scene?.mode===2)break;}
  await until(async()=> (await snapshot()).sample?.scene?.mode===2,'main menu');await sleep(3500);await screenshot('main-menu');
  for(let i=0;i<7;i++)await press('ArrowDown');await press('KeyX');
  await until(()=>lastState?.state===1&&lastState.substate===1&&lastState.timer6<=0,'mode7 confirm');
  await screenshot('mode7-confirm');await press('KeyX');
  for(const [word,name] of [[1026,'load-net'],[67330,'load-slot1'],[198402,'load-confirm'],[524803,'broadband'],[516,'network-connection'],[517,'connection-notice']]){
    await observedPrompt(word,name);if(name==='connection-notice')await press('ArrowUp');await press('KeyX');await sleep(1500);
  }
  // These three state-518 inputs are retained in native-boundary/timeline.jsonl.
  // The first opens settings edit, Up selects Yes, the last confirms its warning.
  for(const [index,code] of ['KeyX','ArrowUp','KeyX'].entries()){
    await observedPrompt(518,'settings-'+index);await press(code);await sleep(1500);
  }
  await until(async()=>{const current=await state();return current.image==='utility'&&current.state==='running';},'original utility document',180000);
  await screenshot('utility-entry');
  const deadline=performance.now()+operatorMs;let lastId=0;
  while(performance.now()<deadline){
    const current=await healthy();if(current.generation===3&&current.image==='game'&&current.state==='running')break;
    await screenshot('operator-live');
    let command;try{command=JSON.parse(fs.readFileSync(process.env.PROBE_CONTROL_FILE,'utf8'));}catch{}
    if(command&&Number.isSafeInteger(command.id)&&command.id>lastId){
      lastId=command.id;mark('operator-command',{command});
      if(command.action==='finish')break;
      if(command.action==='press'&&['KeyX','KeyZ','ArrowUp','ArrowDown','ArrowLeft','ArrowRight'].includes(command.code)&&
         command.image===current.image&&command.generation===current.generation){
        await screenshot('operator-'+lastId+'-before');await press(command.code,command.image,command.generation);await sleep(1500);
        await screenshot('operator-'+lastId+'-after');
      }else mark('operator-rejected',{reason:'Unsupported action/key or image/generation mismatch'});
      write('operator-ack',{id:lastId});
    }
    await sleep(1000);
  }
  await until(async()=>{const current=await state();return current.generation===3&&current.image==='game'&&current.state==='running';},'normal helper return',15000);
  await sleep(5000);await screenshot('returned-game');
  const final=await snapshot(), events=final.events, starts=events.filter(e=>e.type==='startup').map(e=>e.record), transitions=events.filter(e=>e.kind==='exec-captured');
  const game='cdrom0:\\SLPS_254.19;1',utility='cdrom0:\\NTGUIDVD\\NTGDVDJ.BIN;1';
  const expectedArgs=[[game],[utility,game,'1'],[game,'1']];
  const samples=events.filter(e=>e.type==='sample');
  const checks={
    original_mode7:consoleRecords.some(text=>text.startsWith('[original-online] ')&&/"event":"menu".*"mode":7/.test(text)),
    two_native_syscalls:transitions.length===2&&transitions.every(e=>e.request.syscall===6&&e.request.nativeFlushed&&!e.request.error),
    original_syscall_sites:JSON.stringify(transitions.map(e=>e.request.pc))===JSON.stringify([0x103f24,0x1002a4]),
    exact_startup:starts.length===3&&starts.every((record,i)=>!record.error&&record.argc===expectedArgs[i].length&&JSON.stringify(record.argv)===JSON.stringify(expectedArgs[i])),
    exact_supplied:JSON.stringify(transitions.map(e=>[e.request.target,e.request.args]))===JSON.stringify([[utility,[game,'1']],[game,['1']]]),
    same_card:events.filter(e=>e.kind==='card-durable').length===2&&events.filter(e=>e.kind==='card-durable').every(e=>e.cardSha256===expected),
    normal_return:final.generation===3&&final.image==='game'&&final.state==='running'&&final.sample?.scene?.mode!==4,
    audio: [1,2,3].every(generation=>{const group=samples.filter(e=>e.generation===generation);return group.length>=2&&group.every(e=>e.sample.audio==='running')&&group[0].sample.ring[1]!==group.at(-1).sample.ring[1];}),
    trace_complete:!traceLost,no_failure:!errors.length&&!events.some(e=>['failure','harness-failure','cleanup-failure'].includes(e.kind)),
  };
  const passed=Object.values(checks).every(Boolean);
  write('result',{passed,network_success:false,scope:'Original settings launch and ordinary utility cancel/return only',browser:browser.version(),checks,final,errors,blocked});
  if(!passed)throw Error('Real original-exec acceptance failed: '+JSON.stringify(checks));
})().catch(async error=>{
  mark('failure',{error:String(error.stack||error)});let final=null;try{if(page)final=await snapshot();}catch{}
  write('failure',{error:String(error.stack||error),errors,blocked,traceLost,final});process.exitCode=1;
}).finally(async()=>{if(browser)await browser.close();});
