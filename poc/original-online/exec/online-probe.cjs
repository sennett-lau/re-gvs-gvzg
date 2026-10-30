// Private original-mode7 operator probe. Separate browser contexts own separate
// cards/documents/WASM memories; this does not create a mode4 lockstep session.
const fs = require('node:fs'), path = require('node:path'), {createHash} = require('node:crypto');
const {chromium} = require(process.env.PLAYWRIGHT_MODULE || 'playwright');
const {parseConfig} = require('./private-config.cjs');
const {StateRetention} = require('./probe-retention.cjs');
const scene = require('../../../apps/game/assets/scene-snapshot.js');
const base = new URL(process.argv[2]), out = path.resolve(process.argv[3]);
const count = Number(process.env.PROBE_CLIENTS || 1), operatorMs = Number(process.env.PROBE_OPERATOR_MS || 600000);
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
const config = parseConfig(fs.readFileSync(process.env.PROBE_NETWORK_CONFIG,'utf8'));
const gateway = new URL(config.gatewayURL);
if (gateway.protocol !== 'ws:' || gateway.hostname !== '127.0.0.1' || gateway.pathname !== '/' || gateway.search || gateway.hash ||
    typeof config.token !== 'string' || !config.token || !config.endpoints) throw Error('Private loopback configuration required');
fs.mkdirSync(out,{recursive:true});
const scrub = text => String(text).split(config.token).join('[private-token]');
const write = (name,value) => fs.writeFileSync(path.join(out,name+'.json'),scrub(JSON.stringify(value,null,2))+'\n');
const started=performance.now(), clients=[], sleep=ms=>new Promise(resolve=>setTimeout(resolve,ms));
const mark=(event,detail={})=>fs.appendFileSync(path.join(out,'timeline.jsonl'),scrub(JSON.stringify({utc:new Date().toISOString(),elapsed_ms:performance.now()-started,event,...detail}))+'\n');
let browser;

class Client {
  constructor(label,context,page) {this.label=label;this.context=context;this.page=page;this.errors=[];this.blocked=[];this.traceLost=false;this.lastState=null;this.sockets=[];this.retention=retainStates?new StateRetention(out,label):null;}
  async state() {return this.page.evaluate(()=>({clientId:window.originalExec?.clientId,image:window.originalExec?.session?.image,
    generation:window.originalExec?.session?.generation,state:window.originalExec?.session?.state,events:window.originalExec?.events||[]}));}
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
  async press(code,image='game',generation=1,hold=250) {
    const current=await this.healthy();
    if(current.state!=='running'||current.image!==image||current.generation!==generation)throw Error('Input image/generation changed');
    const frame=this.frame();mark('keydown',{client:this.label,code,image,generation,lastState:this.lastState});
    await frame.evaluate(code=>dispatchEvent(new KeyboardEvent('keydown',{code,bubbles:true})),code);await sleep(hold);
    if(!frame.isDetached())try{await frame.evaluate(code=>dispatchEvent(new KeyboardEvent('keyup',{code,bubbles:true})),code);}catch(error){if(!frame.isDetached())throw error;}
    mark('keyup',{client:this.label,code,image,generation});await sleep(450);
  }
  async capture(name) {
    const captureStartedUtc=new Date().toISOString(),stem=this.label+'-'+name,png=path.join(out,stem+'.png');
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

(async()=>{
  const response=await fetch(new URL('build-info.json',base));if(!response.ok)throw Error('Build provenance missing');
  const buildText=await response.text(), build=JSON.parse(buildText);
  if(!build.modules?.game?.network_enabled||build.modules.utility.network_enabled)throw Error('Expected game-only native network adapter');
  fs.writeFileSync(path.join(out,'build-info.json'),buildText);
  write('run',{started_utc:new Date().toISOString(),scope:'Original mode7 with independent contexts and private byte transport',
    clients:count,route:savedRoute?'saved-connection':'settings-menu',fixture_sha256:expected,fixtures_sha256:Object.fromEntries(Object.entries(fixtures).map(([k,v])=>[k,v.sha256])),trace_cap_continue:traceContinue,fixture_bytes:fixture.length,build_info_sha256:digest(buildText),harness_sha256:digest(fs.readFileSync(__filename)),
    muted:true,audioSuspendedForTiming:false,gateway_origin:gateway.origin,operatorMs,watch,retainStates,
    stateRetention:retainStates?{limit:96,retention_sha256:digest(fs.readFileSync(require.resolve('./probe-retention.cjs'))),
      sampling:'Periodic screenshots followed by a read-only snapshot; intermediate transitions may be missed, timestamps are retained.'}:null,
    argv:process.argv.slice(2),network_success:false,battle_success:false});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||undefined,headless:false,args:['--mute-audio','--autoplay-policy=no-user-gesture-required',
    '--no-first-run','--disable-background-networking','--disable-background-timer-throttling','--disable-renderer-backgrounding','--disable-backgrounding-occluded-windows']});
  for(let i=0;i<count;i++) {
    const context=await browser.newContext({viewport:{width:1280,height:1000},serviceWorkers:'block'}),page=await context.newPage();
    const client=new Client(String.fromCharCode(65+i),context,page);clients.push(client);page.setDefaultTimeout(120000);
    await context.route('**/*',route=>{const url=new URL(route.request().url());if(url.origin===base.origin)return route.continue();client.blocked.push(url.origin);return route.abort();});
    await context.addInitScript(({config,watch})=>{
      window.originalExecNetworkConfig=config;window.testAudioContexts=[];
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
    page.on('pageerror',error=>{client.errors.push(scrub(error));mark('pageerror',{client:client.label,error:scrub(error)});});
    page.on('console',message=>{
      const text=scrub(message.text());fs.appendFileSync(path.join(out,client.label+'-console.jsonl'),JSON.stringify({utc:new Date().toISOString(),text})+'\n');
      if(text.startsWith('[original-online] ')) {
        try{const record=JSON.parse(text.slice(18));if((record.event==='trace_cap'||record.dropped>0||record.boot_dropped>0)&&!client.traceLost){client.traceLost=true;if(traceContinue)mark('trace-cap-continue',{client:client.label,record});}
          if(record.state!==undefined&&record.substate!==undefined)client.lastState=record;
        }catch(error){client.errors.push('Original observer record parse failed: '+String(error));}
      }
    });
    page.on('websocket',socket=>{
      const item={url:socket.url(),created_utc:new Date().toISOString(),sent:0,received:0,sentBytes:0,receivedBytes:0,closed:false};client.sockets.push(item);
      for(const [event,key] of [['framesent','sent'],['framereceived','received']])socket.on(event,({payload})=>{
        const bytes=typeof payload==='string'?Buffer.from(payload):payload;item[key]++;item[key+'Bytes']+=bytes.length;
        mark('websocket-frame',{client:client.label,url:item.url,direction:key,bytes:bytes.length,sha256:digest(bytes)});
      });
      socket.on('close',()=>{item.closed=true;item.closed_utc=new Date().toISOString();});
      socket.on('socketerror',error=>{item.error=scrub(error);mark('websocket-error',{client:client.label,url:item.url,error:item.error});});
    });
    await page.bringToFront();await client.enterSettingsMenu();
  }
  const initial=await Promise.all(clients.map(c=>c.snapshot()));
  if(new Set(initial.map(s=>s.clientId)).size!==count)throw Error('Independent card namespaces are not distinct');
  write('independent-start',initial);mark('operator-ready',{clients:count});
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
          mark('card-export',{client:client.label,file:name,bytes:bytes.length,sha256:digest(bytes),scope:'running MEMFS card, not a durable checkpoint'});
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
}).finally(async()=>{if(browser)await browser.close();});
