// Private original-mode7 operator probe. Separate browser contexts own separate
// cards/documents/WASM memories; this does not create a mode4 lockstep session.
const fs = require('node:fs'), path = require('node:path'), {createHash} = require('node:crypto');
const {chromium} = require(process.env.PLAYWRIGHT_MODULE || 'playwright');
const {parseConfig, privateHost} = require('./private-config.cjs');
const {StateRetention} = require('./probe-retention.cjs');
const scene = require('../../../apps/game/assets/scene-snapshot.js');
const autopilot = require('./autopilot.cjs');
const base = new URL(process.argv[2]), out = path.resolve(process.argv[3]);
const count = Number(process.env.PROBE_CLIENTS || 1), operatorMs = Number(process.env.PROBE_OPERATOR_MS || 600000);
// Client labels; a cross-device run starts one labelled client per machine (for example only B).
const labels = (process.env.PROBE_LABELS || 'AB'.slice(0, count)).split('');
if (labels.length !== count || new Set(labels).size !== count || labels.some(label => !['A', 'B'].includes(label))) throw Error('PROBE_LABELS must name PROBE_CLIENTS distinct clients from A and B');
const watch = process.env.PROBE_WATCH || null;
const retainStates = process.env.PROBE_RETAIN_STATES === '1';
// Explicit: keep running after the observer's trace cap; the loss stays recorded.
const traceContinue = process.env.PROBE_TRACE_CAP_CONTINUE === '1';
// A card with a saved login offers the original 'same connection as last time' item; stop there for the operator.
const savedRoute = process.env.PROBE_ROUTE === 'saved-connection';
if(process.env.PROBE_ROUTE && !savedRoute)throw Error('PROBE_ROUTE must be saved-connection or absent');
if(process.env.PROBE_TRACE_CAP_CONTINUE && !traceContinue)throw Error('PROBE_TRACE_CAP_CONTINUE must be 1 or absent');
if(process.env.PROBE_RETAIN_STATES && !retainStates)throw Error('PROBE_RETAIN_STATES must be 1 or absent');
if (watch) {
  const match = /^([0-9a-fA-F]+),([0-9a-fA-F]+)$/.exec(watch);
  const address = match ? parseInt(match[1],16) : NaN, bytes = match ? parseInt(match[2],16) : NaN;
  if (!Number.isSafeInteger(address) || !Number.isSafeInteger(bytes) || (address & 3) || (bytes & 3) ||
      bytes < 4 || bytes > 256 || address + bytes > 0x2000000) throw Error('Invalid bounded guest code watch');
}
if (!['127.0.0.1','localhost'].includes(base.hostname) || fs.existsSync(out)) throw Error('Loopback URL and fresh output required');
if (![1,2].includes(count) || !Number.isSafeInteger(operatorMs) || operatorMs < 1000 || operatorMs > 1800000) throw Error('Invalid probe bounds');
const fixturePath = process.env.PROBE_CARD_FIXTURE, expected = process.env.PROBE_CARD_SHA256;
const digest = bytes => createHash('sha256').update(bytes).digest('hex'), fixture = fs.readFileSync(fixturePath);
if (fixture.length !== 8650752 || digest(fixture) !== expected) throw Error('Exact original saved-card fingerprint required');
// Client B may use its own fingerprinted card; otherwise every client imports the same fixture.
const fixtures = {A:{path:fixturePath,sha256:expected}};
if (process.env.PROBE_CARD_FIXTURE_B) {
  const bytes = fs.readFileSync(process.env.PROBE_CARD_FIXTURE_B);
  if (bytes.length !== 8650752 || digest(bytes) !== process.env.PROBE_CARD_SHA256_B) throw Error('Exact client B card fingerprint required');
  fixtures.B = {path:process.env.PROBE_CARD_FIXTURE_B,sha256:process.env.PROBE_CARD_SHA256_B};
}
const fixtureFor = label => fixtures[label] || fixtures.A;
// Unattended route: after the saved-connection menu, screenshot-led ordinary
// input continues through login, lobby, battle, results and lobby return.
let pilot = null;
if (process.env.PROBE_AUTOPILOT) {
  const bytes = fs.readFileSync(process.env.PROBE_AUTOPILOT);
  if (!savedRoute) throw Error('PROBE_AUTOPILOT requires PROBE_ROUTE=saved-connection');
  if (digest(bytes) !== process.env.PROBE_AUTOPILOT_SHA256) throw Error('Exact autopilot profile fingerprint required');
  // PROBE_BATTLES counts matches (battle groups); each ends after PROBE_ROUNDS_PER_MATCH rounds.
  const profile = JSON.parse(bytes), battles = Number(process.env.PROBE_BATTLES || 1), runMs = Number(process.env.PROBE_RUN_MS || 3600000);
  const roundsPerMatch = Number(process.env.PROBE_ROUNDS_PER_MATCH || 1);
  if (profile.schema !== 'original-online-autopilot-vision-v1') throw Error('Unsupported autopilot profile');
  if (!Number.isSafeInteger(roundsPerMatch) || roundsPerMatch < 1 || roundsPerMatch > 10) throw Error('PROBE_ROUNDS_PER_MATCH must be 1..10');
  if (!Number.isSafeInteger(battles) || battles < 1 || battles > 10 || !Number.isSafeInteger(runMs) || runMs < 60000 || runMs > 14400000) throw Error('Invalid autopilot bounds');
  pilot = {profile, profile_sha256: digest(bytes), battles, runMs, roles: {A: {faction: 'left'}, B: {faction: 'right'}}, roundsPerMatch, drop: null};
  // Failure control: close one client's browser context during its first battle,
  // optionally reopen it from the same card for one more battle.
  // Discovery aid: after this many finished rounds, stop autopilot input and hand both
  // clients to the bounded screenshot-led operator loop (PROBE_CONTROL_FILE).
  if (process.env.PROBE_HANDOFF_AFTER_ROUNDS) {
    const rounds = Number(process.env.PROBE_HANDOFF_AFTER_ROUNDS);
    if (!Number.isSafeInteger(rounds) || rounds < 1 || rounds > 10 || !process.env.PROBE_CONTROL_FILE) throw Error('PROBE_HANDOFF_AFTER_ROUNDS must be 1..10 with PROBE_CONTROL_FILE');
    pilot.handoffAfter = rounds;
  }
  // Failure-control aid: after this many lobby returns, stay on the lobby map without
  // input and hand both clients to the operator loop (for example a backend restart).
  if (process.env.PROBE_HANDOFF_AFTER_MATCHES) {
    const matches = Number(process.env.PROBE_HANDOFF_AFTER_MATCHES);
    if (!Number.isSafeInteger(matches) || matches < 1 || matches > 10 || !process.env.PROBE_CONTROL_FILE || pilot.handoffAfter) throw Error('PROBE_HANDOFF_AFTER_MATCHES must be 1..10 with PROBE_CONTROL_FILE and without PROBE_HANDOFF_AFTER_ROUNDS');
    pilot.handoffAfterMatches = matches;
  }
  // Login trial: finish as soon as the client first reaches the lobby map.
  if (process.env.PROBE_STOP_AT_MAP) {
    if (process.env.PROBE_STOP_AT_MAP !== '1' || process.env.PROBE_DROP || pilot.handoffAfter || pilot.handoffAfterMatches) throw Error('PROBE_STOP_AT_MAP must be 1 and alone');
    pilot.stopAtMap = true;
  }
  if (process.env.PROBE_DROP) {
    const match = /^([AB]):(\d+)$/.exec(process.env.PROBE_DROP), rejoin = process.env.PROBE_REJOIN === '1';
    if (!match || Number(match[2]) > 600000 || (process.env.PROBE_REJOIN && !rejoin)) throw Error('PROBE_DROP must be A|B:<ms in battle> and PROBE_REJOIN 1 or absent');
    if (!labels.includes(match[1]) || labels.length !== 2) throw Error('PROBE_DROP needs both clients in this probe');
    pilot.drop = {client: match[1], after_battle_ms: Number(match[2]), rejoin};
  }
}
const config = parseConfig(fs.readFileSync(process.env.PROBE_NETWORK_CONFIG,'utf8'));
const gateway = new URL(config.gatewayURL);
if (gateway.protocol !== 'ws:' || !privateHost(gateway.hostname) || gateway.pathname !== '/' || gateway.search || gateway.hash ||
    typeof config.token !== 'string' || !config.token || !config.endpoints) throw Error('Private loopback or tailnet configuration required');
fs.mkdirSync(out,{recursive:true});
const scrub = text => String(text).split(config.token).join('[private-token]');
const write = (name,value) => fs.writeFileSync(path.join(out,name+'.json'),scrub(JSON.stringify(value,null,2))+'\n');
const started=performance.now(), clients=[], sleep=ms=>new Promise(resolve=>setTimeout(resolve,ms));
// Buffered append streams: a synchronous write per console line can starve the
// event loop on a busy host and delay every later browser round trip.
// A bounded queue: past 32 MiB of unwritten data a line is counted, not queued.
const streams=new Map(),droppedLines=new Map();
const append=(name,line)=>{
  if(!streams.has(name))streams.set(name,fs.createWriteStream(path.join(out,name),{flags:'a'}));
  const stream=streams.get(name);
  if(stream.writableLength>(32<<20)){droppedLines.set(name,(droppedLines.get(name)||0)+1);return;}
  stream.write(line+'\n');
};
const appendJson=(name,value)=>append(name,scrub(JSON.stringify(value)));
const mark=(event,detail={})=>append('timeline.jsonl',scrub(JSON.stringify({utc:new Date().toISOString(),elapsed_ms:performance.now()-started,event,...detail})));
let browser;

class Client {
  constructor(label,context,page,name=label) {this.label=label;this.name=name;this.context=context;this.page=page;this.errors=[];this.blocked=[];this.traceLost=false;this.lastState=null;this.sockets=[];this.retention=retainStates?new StateRetention(out,name):null;}
  async state() {return this.page.evaluate(compact=>{const events=window.originalExec?.events||[];return {clientId:window.originalExec?.clientId,image:window.originalExec?.session?.image,
    generation:window.originalExec?.session?.generation,state:window.originalExec?.session?.state,eventCount:events.length,events:compact?events.slice(-8):events};},!!pilot);}
  frame() {const frame=this.page.frames().find(f=>/\/(game|utility)\/index\.html/.test(f.url()));if(!frame)throw Error('No executable document');return frame;}
  async snapshot() {
    const current=await this.state();let sample=null;
    if(current.state==='running') {
      sample=await this.frame().evaluate(()=>({frames:Module._ps2web_frames(),ring:Array.from(new Uint32Array(Module.HEAPU8.buffer,Module._ps2web_audio_ring(),4)),
        scene:Module._ps2web_experiment_stat?Module._ps2web_experiment_stat(19):null,audio:window.testAudioContexts.map(c=>c.state),
        bridge:Module.originalOnlineBridge?{lastError:Module.originalOnlineBridge.lastError,generation:Module.originalOnlineBridge.adapter.generation,
          requestCount:Module.originalOnlineBridge.adapter.requests.size,streamCount:Module.originalOnlineBridge.adapter.streams.size}:null}));
      if(sample.scene!==null)sample.scene=scene.decode(sample.scene);
    }
    return {label:this.label,...current,sample,lastState:this.lastState,errors:this.errors,blocked:this.blocked,traceLost:this.traceLost,sockets:this.sockets,stateRetentionLimited:this.retention?.limited||false};
  }
  async healthy() {const s=await this.state();if(this.errors.length||(this.traceLost&&!traceContinue)||s.state==='failed')throw Error(this.label+': original/browser failure or trace loss');return s;}
  async until(predicate,description,timeout=90000) {
    const deadline=performance.now()+timeout;
    while(!(await predicate())) {await this.healthy();if(performance.now()>deadline)throw Error(this.label+': timed out '+description);await sleep(100);}
  }
  // Waits until the document has drawn `count` frames after `start`. A loaded host
  // draws fewer game frames per wall-clock press and can drop a short press.
  async framesSince(frame,start,count) {
    const begin=performance.now();
    while(start!==null&&!frame.isDetached()) {
      let now;try{now=await frame.evaluate(()=>Module._ps2web_frames());}catch(error){if(frame.isDetached())break;throw error;}
      if(now-start>=count)break;
      if(performance.now()-begin>30000)throw Error(this.label+': game frames stopped during input');
      await sleep(20);
    }
    return Math.round(performance.now()-begin);
  }
  async press(code,image='game',generation=1,hold=250) {
    const current=await this.healthy();
    if(current.state!=='running'||current.image!==image||current.generation!==generation)throw Error('Input image/generation changed');
    const frame=this.frame();mark('keydown',{client:this.label,code,image,generation,lastState:this.lastState});
    const down=await frame.evaluate(code=>{dispatchEvent(new KeyboardEvent('keydown',{code,bubbles:true}));return window.Module?._ps2web_frames?Module._ps2web_frames():null;},code);await sleep(hold);
    // Hold and release each for at least 80% of the frames the same time gives at 60 fps.
    const holdExtra=await this.framesSince(frame,down,Math.floor(hold*0.048));let up=null;
    if(!frame.isDetached())try{up=await frame.evaluate(code=>{dispatchEvent(new KeyboardEvent('keyup',{code,bubbles:true}));return window.Module?._ps2web_frames?Module._ps2web_frames():null;},code);}catch(error){if(!frame.isDetached())throw error;}
    mark('keyup',{client:this.label,code,image,generation});await sleep(450);
    const gapExtra=await this.framesSince(frame,up,21);
    if(holdExtra>50||gapExtra>50)mark('input-frame-wait',{client:this.label,code,hold_extra_ms:holdExtra,gap_extra_ms:gapExtra});
  }
  async chord(codes,hold) {
    const current=await this.healthy();
    if(current.state!=='running'||current.image!=='game'||current.generation!==1)throw Error('Input image/generation changed');
    const frame=this.frame();
    await frame.evaluate(codes=>{for(const code of codes)dispatchEvent(new KeyboardEvent('keydown',{code,bubbles:true}));},codes);await sleep(hold);
    if(!frame.isDetached())try{await frame.evaluate(codes=>{for(const code of codes)dispatchEvent(new KeyboardEvent('keyup',{code,bubbles:true}));},codes);}catch(error){if(!frame.isDetached())throw error;}
  }
  async canvas() {const png=await this.frame().locator('#canvas').screenshot({timeout:30000});return {png,image:autopilot.vision.decodePNG(png)};}
  async light() {
    // Read-only: scene record, frame/audio counters and the in-document pacing summary.
    const sample=await this.frame().evaluate(()=>({frames:Module._ps2web_frames(),ring:Array.from(new Uint32Array(Module.HEAPU8.buffer,Module._ps2web_audio_ring(),4)),
      scene:Module._ps2web_experiment_stat?Module._ps2web_experiment_stat(19):null,battleClock:Module._ps2web_experiment_stat?Module._ps2web_experiment_stat(5):null}));
    sample.scene=sample.scene===null?null:scene.decode(sample.scene);return sample;
  }
  async capture(name) {
    const captureStartedUtc=new Date().toISOString(),stem=this.name+'-'+name,png=path.join(out,stem+'.png');
    await this.page.screenshot({path:png});const screenshotCompletedUtc=new Date().toISOString();
    const snapshot={...(await this.snapshot()),captureStartedUtc,screenshotCompletedUtc,snapshotCompletedUtc:new Date().toISOString()};
    write(stem,snapshot);
    if(name==='live'&&this.retention){const result=this.retention.retain(png,path.join(out,stem+'.json'),snapshot);if(result)mark('state-capture',{client:this.label,...result});}
  }
  async prompt(word,name) {
    await this.until(()=>this.lastState?.state_word===word&&this.lastState.activity===0&&this.lastState.timer4<=0&&this.lastState.timer6<=0,name,45000);
    await sleep(300);await this.capture(name+'-before');
  }
  async enterSettingsMenu() {
    await this.page.goto(base.href);const card=fixtureFor(this.label);await this.page.locator('#card').setInputFiles(card.path);await this.page.locator('#sha').fill(card.sha256);await this.page.locator('#start').click();
    await this.until(async()=>(await this.state()).state==='running','game host',180000);
    await this.until(async()=>{const s=(await this.snapshot()).sample?.scene;return s?.mode===1||(s?.mode===0&&s.state===2&&s.stage===3);},'normal boot');
    for(let i=0;i<30&&(await this.snapshot()).sample?.scene?.mode!==1;i++){await this.press('ArrowLeft');await this.press('KeyX');await sleep(1500);}
    await this.until(async()=>(await this.snapshot()).sample?.scene?.mode===1,'title flow');
    for(let i=0;i<12;i++){await this.press('Enter');await sleep(2500);if((await this.snapshot()).sample?.scene?.mode===2)break;}
    await this.until(async()=>(await this.snapshot()).sample?.scene?.mode===2,'main menu');await sleep(3500);await this.capture('main-menu');
    for(let i=0;i<7;i++)await this.press('ArrowDown');await this.press('KeyX');
    await this.until(()=>this.lastState?.state===1&&this.lastState.substate===1&&this.lastState.timer6<=0,'original mode7 confirm');
    await this.capture('mode7-confirm');await this.press('KeyX');
    for(const [word,name] of [[1026,'load-net'],[67330,'load-slot1'],[198402,'load-confirm'],[524803,'broadband'],[516,'network-connection'],[517,'connection-notice']]){
      await this.prompt(word,name);if(savedRoute&&name==='broadband')return;
      if(name==='connection-notice')await this.press('ArrowUp');await this.press('KeyX');await sleep(1500);
    }
    await this.prompt(518,'settings-menu'); // Selection of an actual saved setting is operator-led.
  }
}

async function runAutopilot(client,{battles=pilot.battles,dropAfterMs=null}={}) {
  const role=pilot.roles[client.label], memory={};let stages=0;
  const stage=(name,detail={})=>{mark('stage',{client:client.label,instance:client.name,stage:name,...detail});return client.capture('stage-'+String(++stages).padStart(3,'0')+'-'+name);};
  // Original saved connection: notice (cursor starts on back), loaded settings, DNAS and login.
  // A prompt's state word can appear a moment before its dialog takes input, so each
  // prompt is pressed again (bounded) while its original state word stays unchanged.
  // On the two-item notice only the first press of a visit moves up; a later ○ that
  // lands on 戻る returns to the menu, which starts the sequence again.
  const prompts={524803:'saved-connection',517:'notice',518:'settings-loaded'};
  let word=null,since=0,presses=0,total=0,confirmed=false;
  for(const deadline=performance.now()+240000;;) {
    await client.healthy();if(performance.now()>deadline)throw Error(client.label+': original pre-login prompts did not advance');
    const s=client.lastState,now=performance.now();
    if(s?.state_word!==word){word=s?.state_word;since=now;presses=0;}
    if(confirmed&&!(word in prompts)&&word!==771)break;
    const ready=word in prompts&&s.activity===0&&s.timer4<=0&&s.timer6<=0&&now-since>=300;
    if(ready&&(presses===0||now-since>=6000*presses)){
      if(++total>15)throw Error(client.label+': original pre-login prompts did not accept input');
      if(presses>0)mark('prompt-retry',{client:client.label,instance:client.name,prompt:prompts[word],state_word:word,attempt:presses+1});
      if(word===517&&presses===0)await client.press('ArrowUp');
      await client.press('KeyX');presses++;confirmed=word===518||(confirmed&&word!==524803);
    }
    await sleep(200);
  }
  await stage('dnas-started');
  // Online mode 7, state 1 is the lobby. A failed login returns to the main menu (mode 2, state 1).
  await client.until(async()=>{const s=(await client.light()).scene;return s?.mode===7&&s.state===1;},'original login',300000);await stage('logged-in');
  const deadline=performance.now()+pilot.runMs;let lastLive=0,lastScreen=null,lastChange=performance.now(),inputs=0,screens=0;
  while(true) {
    await client.healthy();const now=performance.now();if(now>deadline)throw Error(client.label+': autopilot run bound expired');
    const light=await client.light();const progress=autopilot.progress(light.scene,memory,now);
    for(const event of progress.events)await stage(event.to,{from:event.from,battles_started:memory.battlesStarted||0,battles_ended:memory.battlesEnded||0});
    if(pilot.handoffAfter&&(memory.battlesEnded||0)>=pilot.handoffAfter){await stage('handoff');return {handoff:true,battles_started:memory.battlesStarted,battles_ended:memory.battlesEnded,inputs};}
    const shot=['lobby','post-round'].includes(progress.phase)?await client.canvas():null,features=shot?autopilot.vision.features(shot.image,pilot.profile):{};
    if(features.screen!==lastScreen){
      // Keep the canvas image behind each classification change for later review.
      const name=shot?client.name+'-screen-'+String(++screens).padStart(3,'0')+'-'+(features.screen??'unclassified')+'.png':null;if(name)fs.writeFileSync(path.join(out,name),shot.png);
      mark('screen',{client:client.label,instance:client.name,screen:features.screen??null,focus:features.focus??null,distance:features.match?.distance??null,nearest:features.match?.nearest??null,file:name});lastScreen=features.screen;lastChange=now;}
    if(dropAfterMs!==null&&progress.phase==='battle'&&now-memory.phaseSince>=dropAfterMs){
      // Abrupt close of this client's whole browser context, as when a player closes the window.
      await stage('drop');mark('client-drop',{client:client.label,instance:client.name,after_battle_ms:Math.round(now-memory.phaseSince)});
      client.closed=true;await client.context.close();return {dropped:true,battles_started:memory.battlesStarted,inputs};
    }
    if(pilot.stopAtMap&&progress.phase==='lobby'&&features.screen==='map'){await stage('map-reached');return {stopped_at_map:true,inputs};}
    if(progress.phase==='lobby'&&(memory.lobbyReturns||0)>=battles&&features.screen==='map'){await stage('done');return {rounds_started:memory.battlesStarted,rounds_ended:memory.battlesEnded,matches_ended:memory.matchesEnded,lobby_returns:memory.lobbyReturns,inputs};}
    const before=memory.lobbyReturns||0,action=autopilot.decide(light.scene,features,memory,role,pilot.profile,now,pilot.roundsPerMatch);
    if((memory.lobbyReturns||0)>before)await stage('lobby-return',{matches_ended:memory.matchesEnded,lobby_returns:memory.lobbyReturns});
    if(pilot.handoffAfterMatches&&(memory.lobbyReturns||0)>=pilot.handoffAfterMatches){await stage('handoff');return {handoff:true,matches_ended:memory.matchesEnded,lobby_returns:memory.lobbyReturns,inputs};}
    if(action.kind==='press'){
      mark('autopilot-input',{client:client.label,instance:client.name,codes:action.codes,hold:action.hold,reason:action.reason,screen:features.screen??null,focus:features.focus??null,cone:features.cone??null,lit:features.targetLit??null});
      await client.chord(action.codes,action.hold);memory.lastAction=performance.now();inputs++;
    }
    if(now-lastLive>=10000){lastLive=now;await client.capture('live');
      const pacing=await client.frame().evaluate(()=>window.originalExecPacing?.take()??null);
      appendJson('pacing.jsonl',{client:client.label,instance:client.name,phase:progress.phase,screen:features.screen??null,frames:light.frames,ring:light.ring,battle_clock:light.battleClock,pacing});}
    // A lobby screen that never changes (other than waiting for a partner) is a stall.
    if(progress.phase==='lobby'&&features.screen!=='waiting'&&now-lastChange>600000)throw Error(client.label+': lobby screen unchanged for 10 minutes ('+features.screen+')');
    await sleep(progress.phase==='battle'?100:500);
  }
}

// A reopened client keeps its role label but writes under its own file prefix (B2, ...).
async function openClient(label,name=label) {
    const context=await browser.newContext({viewport:{width:1280,height:1000},serviceWorkers:'block'}),page=await context.newPage();
    const client=new Client(label,context,page,name);page.setDefaultTimeout(120000);
    await context.route('**/*',route=>{const url=new URL(route.request().url());if(url.origin===base.origin)return route.continue();client.blocked.push(url.origin);return route.abort();});
    await context.addInitScript(({config,watch})=>{
      window.originalExecNetworkConfig=config;window.testAudioContexts=[];
      if(/\/game\/index\.html$/.test(location.pathname)){
        // Read-only frame pacing: emulated-frame counter sampled at each animation frame.
        const edges=[8,12,15,18,22,30,50,100],p={hist:new Array(edges.length+1).fill(0),steps:[0,0,0,0],rafs:0,since:performance.now(),frames:null,at:null,max:0};
        window.originalExecPacing={take(){const r={utc:new Date().toISOString(),window_ms:performance.now()-p.since,rafs:p.rafs,frames:p.frames,edges,interval_hist:[...p.hist],increments_per_raf:[...p.steps],max_gap_ms:p.max};
          p.hist.fill(0);p.steps.fill(0);p.rafs=0;p.max=0;p.since=performance.now();return r;}};
        const tick=t=>{let f=null;try{f=window.Module?._ps2web_frames?window.Module._ps2web_frames():null;}catch{}
          if(f!==null){p.rafs++;if(p.frames!==null){const d=f-p.frames;p.steps[Math.min(3,Math.max(0,d))]++;
            if(d>0){if(p.at!==null){if(t-p.at>p.max)p.max=t-p.at;const ms=(t-p.at)/d;let i=0;while(i<edges.length&&ms>=edges[i])i++;p.hist[i]+=d;}p.at=t;}}p.frames=f;}
          requestAnimationFrame(tick);};
        requestAnimationFrame(tick);
      }
      if(watch) addEventListener('message',event=>{
        if(event.source===parent&&event.origin===location.origin&&event.data?.originalExec===1&&
           event.data.type==='start'&&window.Module?.execImage==='game') {
          // Original runtime watchpoint logs stores/bulk copies only. It does
          // not write guest RAM or change dispatch/matching behavior.
          Module.ENV.PS2_WATCH=watch;
        }
      });
      const Audio=AudioContext;window.AudioContext=new Proxy(Audio,{construct(target,args){const value=new target(...args);window.testAudioContexts.push(value);return value;}});
      const Socket=WebSocket, allowed=new URL(config.gatewayURL).origin;
      window.WebSocket=new Proxy(Socket,{construct(target,args){const url=new URL(args[0]);
        if(url.origin!==allowed||!['/tcp/dnas','/tcp/lobby','/tcp/battle','/udp/dns'].includes(url.pathname)||url.search||url.hash)throw Error('Outside private native route');
        return Reflect.construct(target,args);}});
      window.RTCPeerConnection=class{constructor(){throw Error('Original-mode7 probe blocks WebRTC')}};
    },{config,watch});
    page.on('pageerror',error=>{client.errors.push(scrub(error));mark('pageerror',{client:client.label,instance:client.name,error:scrub(error)});});
    page.on('console',message=>{
      const text=scrub(message.text()),now=new Date();append(client.name+'-console.jsonl',JSON.stringify({utc:now.toISOString(),text}));
      if(text.startsWith('[exec-host] ')){
        // The host page stamps each record; a growing gap means this process is behind its browser events.
        try{const lag=(now-new Date(JSON.parse(text.slice(12)).utc))/1000;client.consoleLag=lag;
          if(lag>15&&!client.backlogMarked){client.backlogMarked=true;mark('probe-backlog',{client:client.label,instance:client.name,lag_s:lag});}
          if(lag>60)client.errors.push('Probe host overloaded: browser events processed '+Math.round(lag)+' s late');}catch{}
      }
      if(text.startsWith('[original-online] ')) {
        try{const record=JSON.parse(text.slice(18));if((record.event==='trace_cap'||record.dropped>0||record.boot_dropped>0)&&!client.traceLost){client.traceLost=true;if(traceContinue)mark('trace-cap-continue',{client:client.label,instance:client.name,record});}
          if(record.state!==undefined&&record.substate!==undefined)client.lastState=record;
        }catch(error){client.errors.push('Original observer record parse failed: '+String(error));}
      }
    });
    page.on('websocket',socket=>{
      const item={url:socket.url(),created_utc:new Date().toISOString(),sent:0,received:0,sentBytes:0,receivedBytes:0,closed:false};client.sockets.push(item);
      for(const [event,key] of [['framesent','sent'],['framereceived','received']])socket.on(event,({payload})=>{
        const bytes=typeof payload==='string'?Buffer.from(payload):payload;item[key]++;item[key+'Bytes']+=bytes.length;
        mark('websocket-frame',{client:client.label,instance:client.name,url:item.url,direction:key,bytes:bytes.length,sha256:digest(bytes)});
      });
      socket.on('close',()=>{item.closed=true;item.closed_utc=new Date().toISOString();});
      socket.on('socketerror',error=>{item.error=scrub(error);mark('websocket-error',{client:client.label,instance:client.name,url:item.url,error:item.error});});
    });
    await page.bringToFront();await client.enterSettingsMenu();return client;
}

(async()=>{
  const response=await fetch(new URL('build-info.json',base));if(!response.ok)throw Error('Build provenance missing');
  const buildText=await response.text(), build=JSON.parse(buildText);
  if(!build.modules?.game?.network_enabled||build.modules.utility.network_enabled)throw Error('Expected game-only native network adapter');
  fs.writeFileSync(path.join(out,'build-info.json'),buildText);
  write('run',{started_utc:new Date().toISOString(),scope:'Original mode7 with independent contexts and private byte transport',
    clients:count,labels,route:savedRoute?'saved-connection':'settings-menu',fixture_sha256:expected,fixtures_sha256:Object.fromEntries(Object.entries(fixtures).map(([k,v])=>[k,v.sha256])),trace_cap_continue:traceContinue,fixture_bytes:fixture.length,build_info_sha256:digest(buildText),harness_sha256:digest(fs.readFileSync(__filename)),
    muted:true,audioSuspendedForTiming:false,gateway_origin:gateway.origin,operatorMs,watch,retainStates,
    stateRetention:retainStates?{limit:96,retention_sha256:digest(fs.readFileSync(require.resolve('./probe-retention.cjs'))),
      sampling:'Periodic screenshots followed by a read-only snapshot; intermediate transitions may be missed, timestamps are retained.'}:null,
    argv:process.argv.slice(2),network_success:false,battle_success:false,
    autopilot:pilot?{profile_sha256:pilot.profile_sha256,battles:pilot.battles,run_ms:pilot.runMs,roles:pilot.roles,autopilot_sha256:digest(fs.readFileSync(require.resolve('./autopilot.cjs'))),vision_sha256:digest(fs.readFileSync(require.resolve('./probe-vision.cjs')))}:null});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||undefined,headless:false,args:['--mute-audio','--autoplay-policy=no-user-gesture-required',
    '--no-first-run','--disable-background-networking','--disable-background-timer-throttling','--disable-renderer-backgrounding','--disable-backgrounding-occluded-windows']});
  for(const label of labels)clients.push(await openClient(label));
  const initial=await Promise.all(clients.map(c=>c.snapshot()));
  if(new Set(initial.map(s=>s.clientId)).size!==count)throw Error('Independent card namespaces are not distinct');
  write('independent-start',initial);mark('operator-ready',{clients:count});
  if(pilot) {
    let summaries;
    if(pilot.drop) {
      const victim=clients.find(c=>c.label===pilot.drop.client);
      const runs=clients.map(c=>c===victim?runAutopilot(c,{dropAfterMs:pilot.drop.after_battle_ms}):runAutopilot(c,{battles:pilot.drop.rejoin?2:1}));
      const dropped=await runs[clients.indexOf(victim)];let rejoined=null;
      if(pilot.drop.rejoin) {
        // Fresh document from the same fingerprinted card; the backend sees an ordinary new login.
        await sleep(30000);mark('client-rejoin',{client:victim.label});
        const fresh=await openClient(victim.label,victim.label+'2');clients[clients.indexOf(victim)]=fresh;
        rejoined=await runAutopilot(fresh,{battles:1});
      }
      const others=await Promise.all(runs.filter((r,i)=>clients[i].label!==victim.label));
      summaries=clients.map(c=>c.label===victim.label?{dropped,rejoined}:others.shift());
    } else summaries=await Promise.all(clients.map(c=>runAutopilot(c)));
    if(summaries.some(s=>s?.handoff))mark('operator-handoff',{summaries});
    else {
    for(const client of clients) {
      if(client.closed)continue; // a dropped client without rejoin has no document left
      await client.capture('final');
      const encoded=await client.frame().evaluate(()=>{const data=Module.FS.readFile('/memcard/Mcd001.ps2');let text='';
        for(let i=0;i<data.length;i+=0x8000)text+=String.fromCharCode.apply(null,data.subarray(i,i+0x8000));return btoa(text);});
      const bytes=Buffer.from(encoded,'base64'),name=client.name+'-card-final.ps2';fs.writeFileSync(path.join(out,name),bytes);
      mark('card-export',{client:client.label,instance:client.name,file:name,bytes:bytes.length,sha256:digest(bytes),scope:'running MEMFS card, not a durable checkpoint'});
    }
    write('result',{capture_complete:true,browser:browser.version(),network_success:false,battle_success:false,
      autopilot:Object.fromEntries(clients.map((c,i)=>[c.label,summaries[i]])),
      acceptance:'Requires review of original guest state, both independent clients and correlated backend evidence (BattleResult, battle record); screens and inputs alone are insufficient.',
      clients:await Promise.all(clients.filter(c=>!c.closed).map(c=>c.snapshot()))});
    return;
    }
  }
  const deadline=performance.now()+operatorMs;let lastId=0,finished=false;
  while(performance.now()<deadline) {
    for(const client of clients){await client.healthy();await client.capture('live');}
    let command;try{command=JSON.parse(fs.readFileSync(process.env.PROBE_CONTROL_FILE,'utf8'));}catch{}
    if(command&&Number.isSafeInteger(command.id)&&command.id>lastId) {
      lastId=command.id;mark('operator-command',{command});
      if(command.action==='finish'){finished=true;break;}
      if(command.action==='export-card') {
        // Read-only copy of the running document's current card file; it is
        // not a durable checkpoint and never writes guest or browser storage.
        const client=clients.find(c=>c.label===command.client);
        if(client&&(await client.state()).state==='running') {
          const encoded=await client.frame().evaluate(()=>{const data=Module.FS.readFile('/memcard/Mcd001.ps2');let text='';
            for(let i=0;i<data.length;i+=0x8000)text+=String.fromCharCode.apply(null,data.subarray(i,i+0x8000));return btoa(text);});
          const bytes=Buffer.from(encoded,'base64'),name=client.label+'-card-'+lastId+'.ps2';fs.writeFileSync(path.join(out,name),bytes);
          mark('card-export',{client:client.label,instance:client.name,file:name,bytes:bytes.length,sha256:digest(bytes),scope:'running MEMFS card, not a durable checkpoint'});
        }else mark('operator-rejected',{reason:'Card export requires a running client'});
        write('operator-ack',{id:lastId});continue;
      }
      const client=clients.find(c=>c.label===command.client),current=client?await client.state():null;
      const hold=command.hold_ms===undefined?250:command.hold_ms;
      if(command.action==='press'&&client&&['KeyX','KeyZ','KeyS','KeyA','Enter','Backspace','KeyQ','KeyW','Digit1','Digit2','ArrowUp','ArrowDown','ArrowLeft','ArrowRight','KeyI','KeyJ','KeyK','KeyL'].includes(command.code)&&
         Number.isSafeInteger(hold)&&hold>=50&&hold<=3000&&
         command.image===current.image&&command.generation===current.generation&&
         (command.state_word===undefined||command.state_word===client.lastState?.state_word)) {
        await client.capture('operator-'+lastId+'-before');await client.press(command.code,command.image,command.generation,hold);await sleep(1500);
        await client.capture('operator-'+lastId+'-after');
      }else mark('operator-rejected',{reason:'Unsupported input or client/image/generation/state mismatch'});
      write('operator-ack',{id:lastId});
    }
    await sleep(1000);
  }
  if(!finished)throw Error('Operator window expired; no room or battle success inferred');
  for(const client of clients)await client.capture('final');
  write('result',{capture_complete:true,browser:browser.version(),network_success:false,battle_success:false,
    acceptance:'Requires review of original guest state, both independent clients and correlated backend evidence; socket activity alone is insufficient.',
    clients:await Promise.all(clients.map(c=>c.snapshot()))});
})().catch(async error=>{
  mark('failure',{error:scrub(error.stack||error)});const snapshots=[];
  for(const client of clients)try{await client.capture('failure');snapshots.push(await client.snapshot());}catch{}
  write('failure',{error:scrub(error.stack||error),clients:snapshots,network_success:false,battle_success:false});process.exitCode=1;
}).finally(async()=>{if(browser)await browser.close();
  if(droppedLines.size)fs.writeFileSync(path.join(out,'dropped-log-lines.json'),JSON.stringify(Object.fromEntries(droppedLines),null,2)+'\n');
  await Promise.all([...streams.values()].map(s=>new Promise(resolve=>s.end(resolve))));});
