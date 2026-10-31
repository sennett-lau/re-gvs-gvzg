import { NativeByteStream, NativeDatagramSocket, TransportError } from './transport.mjs';

// Host-side request queue. It has no guest-memory access and does not know AVETCP errno.
// The emulator must consume poll() on its scheduler and marshal a verified native ABI.
export class OriginalOnlineAdapter {
  constructor({ gatewayURL, token, endpoints, now = () => performance.now() }) {
    const parsed = new URL(gatewayURL);
    // Loopback (local backend or SSH tunnel) or a private tailnet address in 100.64.0.0/10.
    const octets = parsed.hostname.split('.').map(Number);
    const tailnet = octets.length === 4 && octets.every(n => Number.isInteger(n) && n >= 0 && n <= 255) &&
      octets[0] === 100 && octets[1] >= 64 && octets[1] <= 127;
    if (parsed.protocol !== 'ws:' || !(parsed.hostname === '127.0.0.1' || tailnet) || parsed.pathname !== '/' ||
        parsed.search || parsed.hash || parsed.username || parsed.password)
      throw new Error('private gateway must be ws://127.0.0.1:PORT/ or ws://<tailnet 100.64.0.0/10 address>:PORT/');
    this.gatewayURL = gatewayURL; this.token = token; this.endpoints = endpoints; this.now = now;
    this.generation = 1; this.nextTicket = 1; this.nextHandle = 1;
    this.requests = new Map(); this.streams = new Map();
  }
  // The HTTPS bytes (including guest TLS) pass unchanged to local DNAS.
  // Dynamic lobby/battle addresses must exactly match this backend's advertisements.
  endpoint(host, port) {
    if (port === 443 && ['127.0.0.1', 'www01.kddi-mmbb.jp', 'gate1.jp.dnas.playstation.org'].includes(host)) return 'dnas';
    for (const name of ['lobby', 'battle']) if (this.endpoints[name] === `${host}:${port}`) return name;
    throw new TransportError('EACCES', 'destination is outside the private native route');
  }
  submit(request) {
    if (this.requests.size >= 256) throw new TransportError('ENOBUFS');
    if (!['open', 'read', 'write', 'close', 'dns','shutdown'].includes(request.op)) throw new TransportError('ENOSYS');
    if (request.op === 'open' && this.streams.size + [...this.requests.values()].filter(r => r.op === 'open').length >= 64)
      throw new TransportError('ENOBUFS');
    if (['write','dns'].includes(request.op) && !(request.bytes instanceof Uint8Array)) throw new TransportError('EINVAL');
    if (request.op === 'dns' && (request.bytes.length < 12 || request.bytes.length > 2048)) throw new TransportError('EINVAL');
    if (request.op === 'read' && (!Number.isInteger(request.maxBytes) || request.maxBytes < 1 || request.maxBytes > 1048576))
      throw new TransportError('EINVAL');
    if (request.timeoutMs !== undefined && (!Number.isFinite(request.timeoutMs) || request.timeoutMs < 0 || request.timeoutMs > 600000))
      throw new TransportError('EINVAL');
    const ticket = this.nextTicket++, generation = this.generation;
    if (ticket > 0x7fffffff) throw new TransportError('EOVERFLOW');
    const entry = { ticket, generation, submittedAt: this.now(), op: request.op,
      state: 'pending', controller: new AbortController(), handle: request.handle };
    this.requests.set(ticket, entry);
    // Snapshot outgoing bytes before yielding. A guest may reuse its send buffer.
    const bytes = ['write','dns'].includes(request.op) ? new Uint8Array(request.bytes) : null;
    const finish = (value, error = null) => {
      if (this.generation !== generation || !this.requests.has(ticket) || entry.state !== 'pending') {
        if (request.op === 'open' && value?.stream) value.stream.close();
        return;
      }
      if (value?.stream) {
        const handle = this.nextHandle++;
        this.streams.set(handle, value.stream); value = { handle };
      }
      entry.state = 'complete'; entry.completedAt = this.now();
      entry.result = error ? { ok: false, error: error.code || 'EIO', bytes: error.bytes || 0 }
        : { ok: true, ...value };
    };
    let operation;
    try {
      if (request.op === 'dns') {
        operation = (async () => {
          const socket=await NativeDatagramSocket.connect(new URL('udp/dns',this.gatewayURL).href,this.token,{timeoutMs:0,signal:entry.controller.signal});
          const stop=()=>socket.close();entry.controller.signal.addEventListener('abort',stop,{once:true});
          try {
            if(entry.controller.signal.aborted)throw new TransportError('ECANCELED');
            await socket.write(bytes);
            return {data:await socket.receive({timeoutMs:0,signal:entry.controller.signal})};
          } finally {entry.controller.signal.removeEventListener('abort',stop);socket.close();}
        })();
      } else if (request.op === 'open') {
        const endpoint = this.endpoint(request.host, request.port);
        operation = NativeByteStream.connect(new URL(`tcp/${endpoint}`, this.gatewayURL).href,
          this.token, { timeoutMs: request.timeoutMs ?? 6000, signal: entry.controller.signal }).then(stream => ({ stream }));
      } else {
        const stream = this.streams.get(request.handle);
        if (!stream) throw new TransportError('EBADF');
        if (request.op === 'read') operation = stream.read(request.maxBytes,
          { timeoutMs: request.timeoutMs ?? 0, signal: entry.controller.signal }).then(data => ({ data, eof: data.length === 0 }));
        else if (request.op === 'write') operation = stream.write(bytes).then(count => ({ bytes: count }));
        else if (request.op === 'shutdown') operation = stream.closeWrite().then(() => ({}));
        else {
          this.streams.delete(request.handle); stream.close();
          operation = Promise.resolve({});
        }
      }
    } catch (error) { operation = Promise.reject(error); }
    operation.then(value => finish(value), error => finish(null, error));
    return ticket;
  }
  // Complete results are consumed once. Undefined means stale/unknown, pending is explicit.
  peek(ticket) { return this.requests.get(ticket); }
  poll(ticket) {
    const entry = this.requests.get(ticket);
    if (!entry) return undefined;
    if (entry.state === 'pending') return { state: 'pending', generation: entry.generation };
    this.requests.delete(ticket);
    return { state: 'complete', generation: entry.generation, submittedAt: entry.submittedAt,
      completedAt: entry.completedAt, ...entry.result };
  }
  cancel(ticket) {
    const entry = this.requests.get(ticket);
    if (!entry || entry.state !== 'pending') return false;
    entry.state = 'complete'; entry.completedAt = this.now();
    entry.result = { ok: false, error: 'ECANCELED', bytes: 0 };
    entry.controller.abort();
    // A submitted TCP write cannot be unsent. Invalidate its waiter and ignore
    // the late acknowledgment, but preserve the connection just as original
    // cancellation preserves bytes already issued to TCP. The peer may receive
    // some/all submitted bytes; ECANCELED makes no remote-delivery claim.
    return true;
  }
  discard(ticket) {
    if(!this.requests.has(ticket))return false;
    this.cancel(ticket);this.requests.delete(ticket);return true;
  }
  reset() {
    ++this.generation;
    for (const entry of this.requests.values()) entry.controller.abort();
    for (const stream of this.streams.values()) stream.close();
    this.requests.clear(); this.streams.clear();
    // Tickets/handles are never reused; callbacks from old generations are discarded.
  }
}
