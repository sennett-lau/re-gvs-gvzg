import assert from 'node:assert/strict';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import {PrivateDnsResolver,dnsQuery,dnsAnswers} from './dns_resolver.mjs';
const [state,output]=process.argv.slice(2);if(!state||!output)throw new Error('usage: node dns_probe.mjs PRIVATE_RUN NEW_OUTPUT');
await mkdir(output,{recursive:false});const conf=JSON.parse(await readFile(`${state}/gateway.json`));
const resolver=new PrivateDnsResolver({gatewayURL:`ws://${conf.listen}/`,token:conf.token});
const result={started_at:new Date().toISOString(),native_client_connected:false,checks:[]};
const pause=ms=>new Promise(r=>setTimeout(r,ms));
try{
 for(const name of ['www01.kddi-mmbb.jp','gate1.jp.dnas.playstation.org','ca1202.mmcp6','ca1203.mmcp6']){
  const ticket=resolver.start(name);assert.equal(resolver.lookup(ticket).status,-2);
  let answer;for(let i=0;i<1000;i++){answer=resolver.lookup(ticket);if(answer.status!==-2)break;await pause(5);}
  assert.equal(answer.status,1);assert.deepEqual([...answer.addresses[0]],[127,0,0,1]);
  result.checks.push({name,answer:'127.0.0.1',api_result:answer.status});resolver.release(ticket);assert.equal(resolver.lookup(ticket).status,-1);
 }
 assert.throws(()=>resolver.start('unapproved.invalid'),{code:'EACCES'});
 const query=dnsQuery('ca1202.mmcp6',1);assert.throws(()=>dnsAnswers(new Uint8Array(1),query),{code:'EPROTO'});
 const wrong=new Uint8Array(query);wrong[0]=1;wrong[2]|=128;assert.throws(()=>dnsAnswers(wrong,query),{code:'EPROTO'});
 result.checks.push({name:'unapproved hostname, malformed packet and mismatched transaction rejected'});
 const stale=resolver.start('ca1203.mmcp6');resolver.reset();await pause(20);assert.equal(resolver.lookup(stale).status,-1);
 result.checks.push({name:'release and reset invalidate tickets without accepting stale answers'});result.success=true;
}catch(error){result.success=false;result.error={message:error.message,stack:error.stack};process.exitCode=1;}
finally{resolver.reset();result.finished_at=new Date().toISOString();await writeFile(`${output}/result.json`,JSON.stringify(result,null,2)+'\n');console.log(JSON.stringify(result));}
