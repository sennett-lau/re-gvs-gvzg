// Synthetic browser plumbing only. No game, utility ELF, disc, card fixture,
// guest execution or network setting is used by this test.
const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const http = require('node:http');
const {chromium} = require(process.env.PLAYWRIGHT_MODULE || 'playwright');
const out = process.argv[2];
if (!out || fs.existsSync(out)) throw Error('Pass a fresh ignored output directory');
fs.mkdirSync(out, {recursive: true});
const files = ['session.mjs', 'browser.mjs', 'card-store.mjs', 'frame.mjs', 'audio-worklet.js'];
const fixture = `<!doctype html><canvas id="canvas"></canvas><div id="status"></div><script type="module">
import {IMAGES, sha256} from '/session.mjs';
const token=new URL(location.href).searchParams.get('execToken');
const image=location.pathname.includes('utility')?'utility':'game';
const send=(type,data={})=>parent.postMessage({originalExec:1,token,type,...data},location.origin);
let card,argv,worker;
addEventListener('message',async event=>{
 const d=event.data;if(event.source!==parent||event.origin!==location.origin||d.token!==token)return;
 if(d.type==='start'){
  card=d.card.slice();argv=d.argv.slice();
  worker=new Worker(URL.createObjectURL(new Blob(['setInterval(()=>postMessage(1),10)'],{type:'application/javascript'})));
  worker.onmessage=()=>send('sample',{sample:{fixture:true,image}});
  send('started',{receipt:{image,imageSha256:IMAGES[image].sha256,argv,cardSha256:await sha256(card)}});
 } else if(d.type==='stop'){worker?.terminate();send('stopped');}
});
window.fire=()=>{
 const args=image==='game'?[IMAGES.game.path,'1']:['1'];
 send('exec',{record:{schema:1,kind:'loadexec',image,imageSha256:IMAGES[image].sha256,syscall:6,a1:args.length,
  target:IMAGES[image==='game'?'utility':'game'].path,args,error:'',nativeFlushed:true},card});
};
send('ready',{image,imageSha256:IMAGES[image].sha256});
</script>`;

const realFrameNegative = `<!doctype html><canvas id="canvas"></canvas><div id="status"></div><script type="module">
import {installFrame} from '/frame.mjs';import {IMAGES} from '/session.mjs';
const Module={execImage:'game',execImageSha256:IMAGES.game.sha256,FS:{readFile(){return new Uint8Array(32)}}};
window.bridge=installFrame(Module);window.bridge.ready();
</script>`;

const server = http.createServer((req, res) => {
  const name = new URL(req.url, 'http://127.0.0.1').pathname.slice(1);
  res.setHeader('Cross-Origin-Opener-Policy', 'same-origin');
  res.setHeader('Cross-Origin-Embedder-Policy', 'require-corp');
  res.setHeader('Cache-Control', 'no-store');
  if (files.includes(name)) {res.setHeader('Content-Type', 'text/javascript');res.end(fs.readFileSync(path.join(__dirname,name)));}
  else if(name==='game.html'||name==='utility.html'){res.setHeader('Content-Type','text/html');res.end(fixture);}
  else if(name==='negative.html'){res.setHeader('Content-Type','text/html');res.end(realFrameNegative);}
  else if(name===''){res.setHeader('Content-Type','text/html');res.end('<!doctype html><div id="host" style="height:600px"></div>');}
  else {res.writeHead(404);res.end();}
});

(async()=>{
  const started=new Date().toISOString();let browser,context;const errors=[];
  try{
    await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
    browser=await chromium.launch({headless:true,executablePath:process.env.CHROME_PATH||undefined,args:['--mute-audio','--autoplay-policy=no-user-gesture-required']});
    context=await browser.newContext();const page=await context.newPage();
    page.on('pageerror',e=>errors.push(String(e)));
    await page.goto('http://127.0.0.1:'+server.address().port+'/');
    const result=await page.evaluate(async()=>{
      const {ExecSession,CARD_BYTES,IMAGES,sha256}=await import('/session.mjs');
      const {CardStore,withCardLock}=await import('/card-store.mjs');
      const {documentFactory}=await import('/browser.mjs');
      const check=(condition,message)=>{if(!condition)throw Error(message)};
      const events=[],failures=[];let session,release;
      const done=new Promise(resolve=>release=resolve);
      const lockTask=withCardLock('synthetic-client-a',async store=>{
        const bytes=new Uint8Array(CARD_BYTES);bytes[100]=45;
        await store.commit(bytes);check((await store.load())[100]===45,'durable initial readback');
        const create=documentFactory({container:document.querySelector('#host'),urls:{game:'/game.html',utility:'/utility.html'},
          discUrl:'/disc.iso',discSize:2048,timeoutMs:5000,emit:e=>events.push(e),
          onExec:(...args)=>session.transition(...args),onFailure:e=>failures.push(String(e))});
        session=new ExecSession({store,create,emit:e=>events.push(e)});window.testSession=session;
        await session.start();await done;await session.close();
      });
      const until=async fn=>{const start=Date.now();while(!fn()){if(Date.now()-start>10000)throw Error('fixture timeout');await new Promise(r=>setTimeout(r,10));}};
      await until(()=>session?.state==='running');
      let lockRejected=false;
      await withCardLock('synthetic-client-a',()=>{}).catch(e=>lockRejected=/active writer/.test(e.message));
      check(lockRejected,'second card writer rejected');
      await withCardLock('synthetic-client-b',async store=>{const other=new Uint8Array(CARD_BYTES);other[100]=91;await store.commit(other);});
      // Spoofed window, token and stale document traffic must not trigger exec.
      window.postMessage({originalExec:1,type:'exec',token:'bad'},location.origin);
      document.querySelector('iframe').contentWindow.fire();
      await until(()=>session.generation===2&&session.state==='running');
      check(session.image==='utility','utility active');
      document.querySelector('iframe').contentWindow.fire();
      await until(()=>session.generation===3&&session.state==='running');
      check(session.image==='game','game return active');
      check(document.querySelectorAll('iframe').length===1,'one active document');
      const boots=events.filter(e=>e.kind==='document-started');
      check(JSON.stringify(boots.map(e=>e.argv))===JSON.stringify([[IMAGES.game.path],[IMAGES.utility.path,IMAGES.game.path,'1'],[IMAGES.game.path,'1']]),'exact round-trip args');
      const finalCard=new CardStore('synthetic-client-a');await finalCard.open();
      const finalHash=await sha256(await finalCard.load());finalCard.close();
      release();await lockTask;
      check(document.querySelectorAll('iframe').length===0,'all documents removed');
      let reopened=false;await withCardLock('synthetic-client-a',async store=>{check((await store.load())[100]===45,'fresh store readback');reopened=true});
      await withCardLock('synthetic-client-b',async store=>check((await store.load())[100]===91,'client cards isolated'));
      check(failures.length===0,'no fixture browser failure');
      // Exercise the actual frame module rejection without supplying a real ELF.
      const negativeFailures=[];
      const negative=documentFactory({container:document.querySelector('#host'),urls:{game:'/negative.html'},discUrl:'/disc.iso',discSize:2048,
        timeoutMs:1000,onExec:()=>{throw Error('must not exec')},onFailure:e=>negativeFailures.push(String(e))});
      const doc=await negative('game',1);const bytes=new Uint8Array(CARD_BYTES);
      let rejected=false;try{await doc.start({image:'game',imageSha256:IMAGES.game.sha256,argv:[IMAGES.game.path],card:bytes,cardSha256:await sha256(bytes)});}
      catch(e){rejected=/preloaded executable fingerprint mismatch/.test(e.message)}
      await doc.dispose();check(rejected,'actual frame rejects synthetic ELF');
      return {synthetic:true,gameExecuted:false,roundTrip:true,lockRejected,reopened,finalHash,events,negativeFailures};
    });
    assert.deepEqual(errors,[]);
    fs.writeFileSync(path.join(out,'result.json'),JSON.stringify({passed:true,started,ended:new Date().toISOString(),browser:browser.version(),errors,...result},null,2)+'\n');
    console.log(JSON.stringify({passed:true,synthetic:true,events:result.events.length,gameExecuted:false}));
  }catch(error){fs.writeFileSync(path.join(out,'result.json'),JSON.stringify({passed:false,started,ended:new Date().toISOString(),errors,error:String(error.stack||error)},null,2)+'\n');throw error;}
  finally{await context?.close();await browser?.close();await new Promise(resolve=>server.close(resolve));}
})().catch(error=>{console.error(error);process.exitCode=1});
