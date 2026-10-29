import { NativeDatagramSocket, TransportError } from './transport.mjs';

const allowed = new Set(['www01.kddi-mmbb.jp','gate1.jp.dnas.playstation.org','ca1202.mmcp6','ca1203.mmcp6']);
const u16 = (data,at) => new DataView(data.buffer,data.byteOffset,data.byteLength).getUint16(at);
function skipName(bytes,start) {
  let at=start;
  for(let labels=0;labels<128;labels++) {
    if(at>=bytes.length)throw new TransportError('EPROTO');
    const n=bytes[at++];
    if(n===0)return at;
    if((n&0xc0)===0xc0){if(at>=bytes.length || (((n&63)<<8)|bytes[at])>=bytes.length)throw new TransportError('EPROTO');return at+1;}
    if(n>63 || at+n>bytes.length)throw new TransportError('EPROTO');at+=n;
  }
  throw new TransportError('EPROTO');
}
export function dnsQuery(name,id) {
  if(!allowed.has(name))throw new TransportError('EACCES');
  const labels=[];
  for(const label of name.split('.')){const b=new TextEncoder().encode(label);labels.push(b.length,...b);}
  const data=new Uint8Array(12+labels.length+5);const view=new DataView(data.buffer);
  view.setUint16(0,id);view.setUint16(2,0x0100);view.setUint16(4,1);data.set(labels,12);
  view.setUint16(data.length-4,1);view.setUint16(data.length-2,1);return data;
}
export function dnsAnswers(bytes,query) {
  if(bytes.length<12 || u16(bytes,0)!==u16(query,0) || !(u16(bytes,2)&0x8000))throw new TransportError('EPROTO');
  if(u16(bytes,2)&0x0200)throw new TransportError('EMSGSIZE','truncated DNS response');
  const rcode=u16(bytes,2)&15;
  if(rcode)return {rcode,addresses:[]};
  if(u16(bytes,4)!==1)throw new TransportError('EPROTO');
  let at=skipName(bytes,12)+4;
  if(at>bytes.length || at!==query.length || !query.subarray(12).every((v,i)=>bytes[12+i]===v))throw new TransportError('EPROTO');
  const addresses=[];
  for(let i=0;i<u16(bytes,6);i++) {
    at=skipName(bytes,at);if(at+10>bytes.length)throw new TransportError('EPROTO');
    const type=u16(bytes,at),klass=u16(bytes,at+2),n=u16(bytes,at+8);at+=10;
    if(at+n>bytes.length)throw new TransportError('EPROTO');
    if(type===1 && klass===1 && n===4)addresses.push(bytes.slice(at,at+4));at+=n;
  }
  return {rcode,addresses};
}

export class PrivateDnsResolver {
  constructor({gatewayURL,token}) {this.gatewayURL=gatewayURL;this.token=token;this.next=1;this.tickets=new Map();this.generation=1;}
  start(name,{timeoutMs=3000}={}) {
    if(this.tickets.size>=16)throw new TransportError('ENOBUFS');
    const ticket=this.next++;const id=ticket&65535;const query=dnsQuery(name,id);
    const entry={generation:this.generation,state:'pending',controller:new AbortController()};this.tickets.set(ticket,entry);
    (async()=>{
      try {
        const stream=await NativeDatagramSocket.connect(new URL('udp/dns',this.gatewayURL).href,this.token);
        entry.stream=stream;
        if(entry.generation!==this.generation || !this.tickets.has(ticket)){stream.close();return;}
        await stream.write(query);
        const packet=await stream.receive({timeoutMs,signal:entry.controller.signal});
        const answer=dnsAnswers(packet,query);
        entry.state='complete';entry.result=answer;
      }catch(error){entry.state='complete';entry.error=error.code||'EIO';}
      finally{entry.stream?.close();}
    })();return ticket;
  }
  // Native 4185 boundary semantics, caller copies returned raw IPv4 bytes on its scheduler.
  lookup(ticket,maxCount=1) {
    const entry=this.tickets.get(ticket);
    if(!entry || entry.generation!==this.generation)return {status:-1,addresses:[]};
    if(entry.state==='pending')return {status:-2,addresses:[]};
    if(entry.error==='ETIMEDOUT')return {status:-6,addresses:[]};
    if(entry.error)return {unsupported:true,hostError:entry.error};
    if(entry.result.rcode || !entry.result.addresses.length)return {status:-1,addresses:[],rcode:entry.result.rcode};
    if(!Number.isInteger(maxCount)||maxCount<1||maxCount>32767)return {unsupported:true,reason:'maximum count'};
    const addresses=entry.result.addresses.slice(0,maxCount).map(x=>x.slice());
    return {status:addresses.length,addresses};
  }
  release(ticket){const entry=this.tickets.get(ticket);entry?.controller.abort();entry?.stream?.close();this.tickets.delete(ticket);}
  reset(){++this.generation;for(const id of this.tickets.keys())this.release(id);}
}
