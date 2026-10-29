// Byte transport for a future verified guest adapter. No game modes or RPC guesses.
export class TransportError extends Error {
  constructor(code, message = code, bytes = 0) { super(message); this.code = code; this.bytes = bytes; }
}

export class NativeByteStream {
  static async connect(url, token, { timeoutMs = 6000, signal, WebSocketClass = globalThis.WebSocket } = {}) {
    if (signal?.aborted) throw new TransportError('ECANCELED');
    const stream = new this(new WebSocketClass(url, token));
    const abort = () => stream.close();
    signal?.addEventListener('abort', abort, { once: true });
    if (signal?.aborted) abort();
    const timer = timeoutMs > 0 ? setTimeout(() => stream.fail(new TransportError('ETIMEDOUT')), timeoutMs) : null;
    try {
      await stream.opened;
      if (signal?.aborted) { stream.close(); throw new TransportError('ECANCELED'); }
      return stream;
    } finally {
      clearTimeout(timer);
      signal?.removeEventListener('abort', abort);
    }
  }
  constructor(ws) {
    this.ws = ws; ws.binaryType = 'arraybuffer';
    this.buffer = new Uint8Array(0); this.datagrams = null; this.datagramBytes = 0; this.readers = []; this.writers = new Map();
    this.nextID = 1; this.pendingBytes = 0; this.eof = false; this.error = null; this.closed = false; this.writeClosed=false;
    this.opened = new Promise((resolve, reject) => { this.resolveOpen = resolve; this.rejectOpen = reject; });
    ws.addEventListener('message', ({ data }) => {
      if (this.closed) return;
      if (typeof data === 'string') {
        let message;
        try { message = JSON.parse(data); } catch { this.fail(new TransportError('EPROTO')); return; }
        if (message.event === 'open') this.resolveOpen();
        else if (message.event === 'sent') {
          const pending = this.writers.get(message.id);
          if (!pending || message.bytes !== pending.size) { this.fail(new TransportError('EPROTO')); return; }
          this.writers.delete(message.id); this.pendingBytes -= pending.size;
          pending.resolve(message.bytes);
        } else if (message.event === 'eof') { this.eof = true; this.flush(); }
        else if (message.event === 'error') {
          const pending = this.writers.get(message.id);
          if (pending) {
            this.writers.delete(message.id); this.pendingBytes -= pending.size;
            pending.reject(new TransportError(message.code, message.code, message.bytes));
          }
          this.fail(new TransportError(message.code));
        }
        else this.fail(new TransportError('EPROTO'));
      } else {
        const bytes = new Uint8Array(data);
        if (this.datagrams) {
          if(this.datagrams.length >= 64 || this.datagramBytes + bytes.length > 1048576) { this.fail(new TransportError('ENOBUFS')); return; }
          this.datagrams.push(bytes); this.datagramBytes += bytes.length; this.flush(); return;
        }
        if (this.buffer.length + bytes.length > 1024 * 1024) { this.fail(new TransportError('ENOBUFS')); return; }
        const merged = new Uint8Array(this.buffer.length + bytes.length);
        merged.set(this.buffer); merged.set(bytes, this.buffer.length); this.buffer = merged;
        this.flush();
      }
    });
    ws.addEventListener('error', () => this.fail(new TransportError('ECONNABORTED')));
    ws.addEventListener('close', () => { if (!this.closed) this.fail(new TransportError('ECONNRESET')); });
  }
  fail(error) {
    if (this.error) return;
    this.error = error; this.closed = true; this.rejectOpen(error);
    for (const pending of this.writers.values()) pending.reject(error);
    this.writers.clear(); this.pendingBytes = 0; this.flush();
    this.ws.close();
  }
  async write(bytes) {
    if (!(bytes instanceof Uint8Array)) throw new TypeError('write requires Uint8Array');
    if (this.error) throw this.error;
    if (this.writeClosed) throw new TransportError('EPIPE');
    if (!bytes.length && !this.datagrams) return 0;
    if (bytes.length > 65536 || this.pendingBytes + bytes.length > 1024 * 1024) throw new TransportError('ENOBUFS');
    const id = this.nextID++;
    if (id > 0xffffffff) throw new TransportError('EOVERFLOW');
    const frame = new Uint8Array(bytes.length + 4);
    new DataView(frame.buffer).setUint32(0, id); frame.set(bytes, 4);
    return new Promise((resolve, reject) => {
      this.writers.set(id, { resolve, reject, size: bytes.length }); this.pendingBytes += bytes.length;
      try { this.ws.send(frame); } catch { this.fail(new TransportError('EPIPE')); }
    });
  }
  closeWrite() {
    if(this.datagrams)return Promise.reject(new TransportError('ENOSYS'));
    if(this.error)return Promise.reject(this.error);
    if(this.writeClosed)return Promise.reject(new TransportError('EPIPE'));
    this.writeClosed=true;
    const id=this.nextID++;if(id>0xffffffff)return Promise.reject(new TransportError('EOVERFLOW'));
    const frame=new Uint8Array(4);new DataView(frame.buffer).setUint32(0,id);
    return new Promise((resolve,reject)=>{
      this.writers.set(id,{resolve,reject,size:0});
      try{this.ws.send(frame);}catch{this.fail(new TransportError('EPIPE'));}
    });
  }
  read(maxBytes, { timeoutMs = 0, signal } = {}) {
    if (!Number.isInteger(maxBytes) || maxBytes < 1 || maxBytes > 1024 * 1024) throw new RangeError('invalid read length');
    if (this.readers.length >= 64) return Promise.reject(new TransportError('ENOBUFS'));
    return new Promise((resolve, reject) => {
      const pending = { maxBytes, resolve, reject };
      const cancel = (code) => {
        const index = this.readers.indexOf(pending);
        if (index !== -1) this.readers.splice(index, 1);
        pending.cleanup(); reject(new TransportError(code));
      };
      const abort = () => cancel('ECANCELED');
      const timer = timeoutMs > 0 ? setTimeout(() => cancel('ETIMEDOUT'), timeoutMs) : null;
      pending.cleanup = () => { clearTimeout(timer); signal?.removeEventListener('abort', abort); };
      if (signal?.aborted) { pending.cleanup(); reject(new TransportError('ECANCELED')); return; }
      signal?.addEventListener('abort', abort, { once: true });
      this.readers.push(pending); this.flush();
    });
  }
  flush() {
    while (this.readers.length && (this.buffer.length || this.datagrams?.length || this.error || this.eof)) {
      const pending = this.readers.shift(); pending.cleanup();
      if (this.datagrams?.length) {
        const bytes = this.datagrams.shift(); this.datagramBytes -= bytes.length; pending.resolve(bytes);
      } else if (this.buffer.length) {
        const n = Math.min(pending.maxBytes, this.buffer.length);
        const result = this.buffer.slice(0, n); this.buffer = this.buffer.slice(n); pending.resolve(result);
      } else if (this.error) pending.reject(this.error);
      else pending.resolve(new Uint8Array(0));
    }
  }
  close() { this.buffer = new Uint8Array(0); if(this.datagrams)this.datagrams=[]; this.datagramBytes=0; this.fail(new TransportError('ECANCELED')); }
}

// One receive returns one whole datagram, including a valid zero-length datagram.
export class NativeDatagramSocket extends NativeByteStream {
  constructor(ws) { super(ws); this.datagrams=[]; }
  receive(options={}) { return super.read(65536,options); }
  read() { throw new TypeError('use receive() for datagram boundaries'); }
}
