const fs=require('node:fs'),path=require('node:path'),{createHash}=require('node:crypto');
const {chromium}=require(process.env.PLAYWRIGHT_MODULE);
const base=new URL(process.argv[2]),out=process.argv[3];
if(base.hostname!=='127.0.0.1'||fs.existsSync(out))throw Error('fresh output and loopback required');
fs.mkdirSync(out,{recursive:true});
const sha=x=>createHash('sha256').update(x).digest('hex'),save=(n,v)=>fs.writeFileSync(path.join(out,n+'.json'),JSON.stringify(v,null,2));
const sleep=ms=>new Promise(r=>setTimeout(r,ms));
const started=performance.now(),events=[],errors=[],blocked=[];let browser,halt=null,setup=0x002BF700;
function mark(event,detail={}){const record={utc:new Date().toISOString(),elapsed_ms:performance.now()-started,event,...detail};events.push(record);fs.appendFileSync(path.join(out,'timeline.jsonl'),JSON.stringify(record)+'\n');}
const argv=['/game/core.elf','--arg','cdrom0:\\NTGUIDVD\\NTGDVDJ.BIN;1','--arg','cdrom0:\\SLPS_254.19;1','--arg','1'];
const fixture=fs.readFileSync(process.env.PROBE_CARD_FIXTURE),fresh='9431f19dc70d664e35a780d70dbcd2dc1ea33ea498c3ed75f71d961f3b425fb9';
// A card exported by an earlier capture is accepted only with its exact hash and that capture's card.json.
let provenance=null;if(sha(fixture)!==fresh){provenance=JSON.parse(fs.readFileSync(process.env.PROBE_CARD_PROVENANCE,'utf8'));if(sha(fixture)!==process.env.PROBE_CARD_SHA256||provenance.sha256!==process.env.PROBE_CARD_SHA256)throw Error('unexpected test card');}
const operatorMs=Number(process.env.PROBE_OPERATOR_MS||240000);if(!Number.isSafeInteger(operatorMs)||operatorMs<1000||operatorMs>600000)throw Error('PROBE_OPERATOR_MS must be 1000-600000');
const run={started_utc:new Date().toISOString(),argv,fixture_sha256:sha(fixture),card_provenance:provenance,operator_ms:operatorMs,harness_sha256:sha(fs.readFileSync(__filename)),setup_address_provenance:'Original startup a3=0x002BF700 and prior dynamic SetupThread; current reads are observational',muted:true,network_success:false};
const snap=async p=>({utc:new Date().toISOString(),elapsed_ms:performance.now()-started,...await p.evaluate(({setup})=>{
const read=a=>Module._ps2utility_read32(a),str=a=>{let s='';for(let i=0;i<256;i++){const n=(read((a+i)&~3)>>>(((a+i)&3)*8))&255;if(!n)break;s+=String.fromCharCode(n);}return s;};
const argc=setup?read(setup):null;return{log_counts:window.utilityLogCounts,status:document.querySelector('#status').textContent,frames:Module._ps2web_frames(),primitives:Module._ps2web_primitives(),audio:testAudioContexts.map(c=>c.state),ring:Array.from(new Int32Array(Module.HEAPU8.buffer,Module._ps2web_audio_ring(),4)),gpu:Module.gpuInfo,isolated:crossOriginIsolated,setup:setup?{address:setup,argc,argv:argc<=16?Array.from({length:argc},(_,i)=>str(read(setup+4+4*i))):[]}:null};},{setup})});
(async()=>{
const info=await(await fetch(new URL('build-info.json',base))).text();run.build_info_sha256=sha(info);fs.writeFileSync(path.join(out,'build-info.json'),info);save('run',run);
mark('launch');browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:false,timeout:240000,args:['--mute-audio','--no-first-run','--disable-background-networking','--disable-background-timer-throttling','--disable-renderer-backgrounding','--disable-backgrounding-occluded-windows']});
const ctx=await browser.newContext({viewport:{width:1280,height:900},serviceWorkers:'block'});
await ctx.route('**/*',r=>{const u=new URL(r.request().url());if(u.origin===base.origin)return r.continue();blocked.push(u.origin);return r.abort();});
await ctx.addInitScript(()=>{window.testAudioContexts=[];const A=AudioContext;window.AudioContext=new Proxy(A,{construct(t,a){const x=new t(...a);testAudioContexts.push(x);return x;}});window.WebSocket=class{constructor(){throw Error('No sockets in boundary probe');}};window.RTCPeerConnection=class{constructor(){throw Error('No peers in boundary probe');}};});
await ctx.addInitScript(()=>{
window.utilityLogCounts={seen:0,dma_suppressed:0,other_suppressed:0,emitted:0};
const output=console.log.bind(console);console.log=(...args)=>{const text=args.join(' '), c=utilityLogCounts;c.seen++;
if(text.startsWith('[iop-dma]')){c.dma_suppressed++;return;}
const essential=/SetupThread|\[ee\] halted:|\[ee\] stopped|no translated code|unknown|unhandled|cannot|failed|error/i.test(text);
if(!essential&&c.emitted>=6000){c.other_suppressed++;return;}
c.emitted++;output(...args);};
});
const page=await ctx.newPage();page.setDefaultTimeout(90000);await page.bringToFront();
page.on('console',m=>{const text=m.text();fs.appendFileSync(path.join(out,'console.log'),JSON.stringify({utc:new Date().toISOString(),elapsed_ms:performance.now()-started,text})+'\n');const match=text.match(/SetupThread\(0x3C\) [\dA-F]+ [\dA-F]+ [\dA-F]+ ([\dA-F]+)/);if(match)setup=parseInt(match[1],16);if(/\[halt\]|\[ee\] halted:|Game stopped|Halted:/.test(text)){halt=text;mark('halt',{text});}});
page.on('pageerror',e=>{errors.push(String(e));mark('pageerror',{error:String(e)});});
await page.goto(base.href);await page.locator('#start:enabled').waitFor();
page.once('dialog',d=>d.message().startsWith('Replace the memory card in slot 1 with ')?d.accept():d.dismiss());
await Promise.all([page.waitForEvent('load'),page.locator('#import-file').setInputFiles(process.env.PROBE_CARD_FIXTURE)]);mark('card-imported');
await page.locator('#start:enabled').waitFor();await page.evaluate(argv=>{Module.arguments=argv;const orig=Module.onHalt;Module.onHalt=reason=>{window.utilityHalt=reason;orig(reason);};},argv);
await page.locator('#start:enabled').click();mark('start');
let lastId=0;const deadline=performance.now()+operatorMs,samples=[];
while(performance.now()<deadline){await sleep(2000);const sample=await snap(page);samples.push(sample);save('samples',samples);save('live',sample);await page.screenshot({path:path.join(out,'live.png'),timeout:15000});
if(samples.length===1||samples.length%10===0){await page.screenshot({path:path.join(out,'sample-'+samples.length+'.png')});}
if(sample.status.startsWith('Halted:')||halt||errors.length){mark('stopped',{halt,status:sample.status});break;}
let c;try{c=JSON.parse(fs.readFileSync(process.env.PROBE_CONTROL_FILE,'utf8'));}catch{}
if(c&&Number.isSafeInteger(c.id)&&c.id>lastId){lastId=c.id;mark('command',{command:c});if(c.action==='finish')break;if(c.action!=='press'||!['KeyX','KeyZ','KeyA','KeyS','KeyQ','KeyW','Digit1','Digit2','Enter','Backspace','ArrowUp','ArrowDown','ArrowLeft','ArrowRight'].includes(c.code))throw Error('unsupported operator command');await page.screenshot({path:path.join(out,'operator-'+lastId+'-before.png')});mark('keydown',{code:c.code});await page.evaluate(code=>dispatchEvent(new KeyboardEvent('keydown',{code,bubbles:true})),c.code);await sleep(250);await page.evaluate(code=>dispatchEvent(new KeyboardEvent('keyup',{code,bubbles:true})),c.code);mark('keyup',{code:c.code});await sleep(1500);await page.screenshot({path:path.join(out,'operator-'+lastId+'-after.png')});save('operator-ack',{id:lastId});}}
await page.screenshot({path:path.join(out,'final.png')});
const download=page.waitForEvent('download',{timeout:3000}).catch(()=>null);await page.locator('#export-card').click();const d=await download;if(d){const p=path.join(out,'result-card.ps2');await d.saveAs(p);save('card',{sha256:sha(fs.readFileSync(p)),bytes:fs.statSync(p).size});}
save('result',{scope:'Standalone original utility compatibility probe, not in-place exec',network_success:false,utility_save_verified:false,run,browser:browser.version(),samples,events,halt,errors,blocked,audio_running:samples.length>0&&samples.every(s=>s.audio.length&&s.audio.every(x=>x==='running')),audio_consumed:samples.length>1&&samples.at(-1).ring[1]!==samples[0].ring[1]});
})().catch(e=>{save('failure',{message:String(e),errors,blocked,run});process.exitCode=1;}).finally(async()=>{if(browser)await browser.close();});
