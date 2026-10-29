import { OriginalOnlineAdapter } from './async_adapter.mjs';

// Internal bridge error numbers, NOT Sony/AVE error numbers.
export const hostErrors = Object.freeze({ OK:0, EIO:1, ECONNREFUSED:2, ECONNRESET:3, ETIMEDOUT:4,
  ECANCELED:5, EBADF:6, EACCES:7, ENOBUFS:8, EPROTO:9, EPIPE:10, ECONNABORTED:11,
  ENOSYS:12, EOVERFLOW:13, EINVAL:14 });

// Install explicitly into the experimental Module. This does not register an IOP import.
export function installOriginalOnlineBridge(Module, config) {
  const adapter = new OriginalOnlineAdapter(config);
  const span = (pointer, length) => Number.isInteger(pointer) && Number.isInteger(length)
    && pointer >= 0 && length >= 0 && pointer <= Module.HEAPU8.length - length;
  const code = error => hostErrors[error?.code] ?? hostErrors.EIO;
  const bridge = {
    adapter, lastError:0,
    submit(request) {
      try { const ticket=adapter.submit(request); bridge.lastError=0; return ticket; }
      catch(error) {bridge.lastError=code(error);return 0;}
    },
    open(pointer,length,port,timeoutMs) {
      if (!span(pointer,length) || length < 1 || length > 253 || !Number.isInteger(port) || port < 1 || port > 65535)
        {bridge.lastError=hostErrors.EINVAL;return 0;}
      let host;
      try {
        // Browser decoders may reject shared WASM views. Copy the validated span.
        const bytes=new Uint8Array(Module.HEAPU8.subarray(pointer,pointer+length));
        host=new TextDecoder('utf-8',{fatal:true}).decode(bytes);
      }
      catch {bridge.lastError=hostErrors.EINVAL;return 0;}
      return bridge.submit({op:'open',host,port,timeoutMs});
    },
    write(handle,pointer,length) {
      if(!span(pointer,length) || length>65536) {bridge.lastError=hostErrors.EINVAL;return 0;}
      return bridge.submit({op:'write',handle,bytes:Module.HEAPU8.subarray(pointer,pointer+length)});
    },
    read(handle,length,timeoutMs) {return bridge.submit({op:'read',handle,maxBytes:length,timeoutMs});},
    close(handle) {return bridge.submit({op:'close',handle});},
    shutdown(handle) {return bridge.submit({op:'shutdown',handle});},
    dns(pointer,length) {
      if(!span(pointer,length)) {bridge.lastError=hostErrors.EINVAL;return 0;}
      return bridge.submit({op:'dns',bytes:Module.HEAPU8.subarray(pointer,pointer+length)});
    },
    cancel(ticket) {return adapter.cancel(ticket) ? 1 : 0;},
    discard(ticket) {return adapter.discard(ticket) ? 1 : 0;},
    available(handle) {return adapter.streams.get(handle)?.buffer.length ?? 0;},
    streamState(handle) {
      const stream=adapter.streams.get(handle);
      return stream ? ((stream.eof?1:0) | (stream.error ? code(stream.error)<<8 : 0)) : hostErrors.EBADF<<8;
    },
    reset() {adapter.reset();},
    // 0 pending, 1 consumed completion, -1 unknown, -3 invalid span, -4 insufficient data capacity.
    // The result span is 40 bytes, aligned to 8. Guest RAM is never touched here implicitly.
    poll(ticket,resultPointer,dataPointer,capacity) {
      if(!resultPointer || resultPointer%8 || !span(resultPointer,40) || !span(dataPointer,capacity)
        || (capacity && resultPointer < dataPointer+capacity && dataPointer < resultPointer+40))return -3;
      const pending=adapter.peek(ticket);
      if(!pending)return -1;
      if(pending.state==='pending')return 0;
      const data=pending.result?.data;
      if(data && data.length>capacity)return -4;
      const result=adapter.poll(ticket);
      const view=new DataView(Module.HEAPU8.buffer,Module.HEAPU8.byteOffset,Module.HEAPU8.byteLength);
      view.setUint32(resultPointer,result.ok?1:0,true);
      view.setUint32(resultPointer+4,data?.length??result.bytes??0,true);
      view.setUint32(resultPointer+8,result.handle??0,true);
      view.setUint32(resultPointer+12,result.eof?1:0,true);
      view.setUint32(resultPointer+16,result.ok?0:(hostErrors[result.error]??hostErrors.EIO),true);
      view.setUint32(resultPointer+20,result.generation,true);
      view.setFloat64(resultPointer+24,result.submittedAt,true);
      view.setFloat64(resultPointer+32,result.completedAt,true);
      if(data)Module.HEAPU8.set(data,dataPointer);
      return 1;
    }
  };
  Module.originalOnlineBridge=bridge;
  return bridge;
}
