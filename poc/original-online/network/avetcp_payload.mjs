// Selected original AVETCP 0x4118/0x4119 payload contract, callback-null only.
// This is deliberately NOT a library registration or a complete AT_apiCall implementation.
// See verify_contract.py for original-byte fingerprints and selected instructions.
export class AvetcpPayloadSlice {
  constructor(adapter, memory) { this.adapter=adapter; this.memory=memory; this.handles=new Map(); this.pending=new Map(); }
  adopt(nativeHandle,hostHandle) {
    if(!Number.isInteger(nativeHandle)||nativeHandle<0||nativeHandle>32767||!this.adapter.streams.has(hostHandle))
      throw new Error('association requires an existing real transport stream and native handle');
    if(this.handles.has(nativeHandle))throw new Error('native handle already associated');
    this.handles.set(nativeHandle,{hostHandle,generation:this.adapter.generation});
  }
  span(pointer,length) {const ram=this.memory();return Number.isInteger(pointer)&&pointer>=0&&Number.isInteger(length)&&length>=0&&pointer<=ram.length-length;}
  begin(opcode,pointer,{allowCallback=false}={}) {
    if(![0x4118,0x4119].includes(opcode))return {kind:'unsupported',reason:'opcode'};
    const ram=this.memory();
    if(!this.span(pointer,12))return {kind:'unsupported',reason:'input span'};
    const view=new DataView(ram.buffer,ram.byteOffset,ram.byteLength);
    const handle=view.getInt16(pointer,true), association=this.handles.get(handle);
    if(!association||association.generation!==this.adapter.generation)return {kind:'native-result',status:-4};
    const hostHandle=association.hostHandle;
    let ticket, destination=null;
    if(opcode===0x4118) {
      const count=ram[pointer+9];
      if(count>4)return {kind:'native-result',status:-12};
      const chunks=[];let total=0;
      for(let i=0;i<count;i++) {
        if(!this.span(pointer+12+8*i,8))return {kind:'unsupported',reason:'vector span'};
        const length=view.getInt16(pointer+12+8*i,true), data=view.getUint32(pointer+16+8*i,true);
        if(length<0)return {kind:'unsupported',reason:'negative signed vector length'};
        if(!this.span(data,length))return {kind:'unsupported',reason:'send data span'};
        chunks.push(ram.slice(data,data+length));total+=length;
      }
      if(!total)return {kind:'native-result',status:0};
      if(!allowCallback && view.getUint32(pointer+4,true)!==0)return {kind:'unsupported',reason:'send callback scheduling'};
      if(ram[pointer+8]!==0)return {kind:'unsupported',reason:'send flags'};

      if(total>32767)return {kind:'unsupported',reason:'signed completion range'};
      const data=new Uint8Array(total);let offset=0;
      for(const chunk of chunks){data.set(chunk,offset);offset+=chunk.length;}
      ticket=this.adapter.submit({op:'write',handle:hostHandle,bytes:data});
    }else{
      const length=view.getInt16(pointer+2,true),data=view.getUint32(pointer+4,true);
      if(!allowCallback && view.getUint32(pointer+8,true)!==0)return {kind:'unsupported',reason:'receive callback scheduling'};
      if(length<=0)return {kind:'unsupported',reason:'nonpositive receive length'};
      if(!this.span(data,length))return {kind:'unsupported',reason:'receive data span'};
      destination={pointer:data,length};
      ticket=this.adapter.submit({op:'read',handle:hostHandle,maxBytes:length});
    }
    this.pending.set(ticket,{opcode,destination,generation:this.adapter.generation});
    // A blocking guest API must sleep its caller, not return -1 as if it had an ASR.
    return {kind:'pending',ticket};
  }
  poll(ticket) {
    const operation=this.pending.get(ticket);
    if(!operation)return {kind:'unknown'};
    if(operation.generation!==this.adapter.generation){this.pending.delete(ticket);return {kind:'stale'};}
    const completion=this.adapter.poll(ticket);
    if(!completion)return {kind:'unknown'};
    if(completion.state==='pending')return {kind:'pending',ticket};
    this.pending.delete(ticket);
    if(!completion.ok)return {kind:'unsupported',reason:'native error mapping',hostError:completion.error,hostBytes:completion.bytes};
    if(operation.opcode===0x4118)return {kind:'native-result',status:(completion.bytes<<16)>>16};
    const {pointer,length}=operation.destination;
    if(!this.span(pointer,length))return {kind:'unsupported',reason:'receive span changed before completion'};
    if(completion.data.length>length)return {kind:'unsupported',reason:'transport exceeded requested length'};
    // Only this scheduler-driven poll writes payload bytes. It does not synthesize socket
    // state, ASR arguments, the separate receive metadata word or an RPC acknowledgement.
    this.memory().set(completion.data,pointer);
    return {kind:'native-result',status:completion.data.length ? (completion.data.length<<16)>>16 : -8,
      receiveMetadata:'discarded by original API thunk at 0x5c4'};
  }
  reset() {this.adapter.reset();this.handles.clear();this.pending.clear();}
}
