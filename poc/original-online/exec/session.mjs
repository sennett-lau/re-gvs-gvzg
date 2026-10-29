export const CARD_BYTES = 8650752;
export const IMAGES = Object.freeze({
  game: Object.freeze({path: 'cdrom0:\\SLPS_254.19;1', sha256: '294c5dfd3d028d5da16cd7f71d8135cca18486ac7b8d3d23dcd0f864ca7b24e6'}),
  utility: Object.freeze({path: 'cdrom0:\\NTGUIDVD\\NTGDVDJ.BIN;1', sha256: '8109d5bb29a16fac1f417098ac551364d232df36feb1d7e9fa8134c81b8b6cec'}),
});

export function startupArgs(target, supplied) {
  if (!Array.isArray(supplied) || supplied.length > 15) throw new Error('invalid supplied argc');
  const argv = [target, ...supplied];
  if (argv.some(s => typeof s !== 'string' || /[^\x01-\x7f]/.test(s)))
    throw new Error('exec argv must be exact non-NUL ASCII strings');
  if (argv.reduce((n, s) => n + s.length + 1, 0) > 256) throw new Error('SetupThread payload overflow');
  return argv;
}

export function validateRequest(record, source) {
  if (!record || record.schema !== 1 || record.kind !== 'loadexec' || record.syscall !== 6)
    throw new Error('unsupported exec event');
  if (record.image !== source || record.imageSha256 !== IMAGES[source]?.sha256)
    throw new Error('source executable identity mismatch');
  if (record.error) throw new Error(record.error);
  if (record.nativeFlushed !== true) throw new Error('native card checkpoint is not acknowledged');
  const target = source === 'game' ? 'utility' : 'game';
  if (record.target !== IMAGES[target].path) throw new Error('target or exec direction is not allowlisted');
  if (!Array.isArray(record.args) || record.a1 !== record.args.length) throw new Error('captured argc mismatch');
  return {image: target, argv: startupArgs(record.target, record.args)};
}

export function cardCopy(bytes) {
  if (!(bytes instanceof Uint8Array) || bytes.byteLength !== CARD_BYTES) throw new Error('invalid card size or type');
  return bytes.slice();
}

export async function sha256(bytes) {
  const digest = await globalThis.crypto.subtle.digest('SHA-256', bytes);
  return Array.from(new Uint8Array(digest), b => b.toString(16).padStart(2, '0')).join('');
}

// Factory contract: create(image, generation) returns a *fresh*, not-running
// document. start imports + verifies card before callMain; stop terminates all
// pthread workers/audio after guest unwind; dispose destroys the document.
// Store contract: commit is durable; load returns bytes from a new read tx.
export class ExecSession {
  constructor({store, create, emit = () => {}, digest = sha256}) {
    this.store = store; this.create = create; this.emit = emit; this.digest = digest;
    this.state = 'idle'; this.generation = 0; this.document = null; this.busy = false;
    this.terminalError = null;
  }
  record(kind, detail = {}) { this.emit({utc: new Date().toISOString(), kind, generation: this.generation, state: this.state, ...detail}); }
  healthy() { if (this.terminalError) throw this.terminalError; }
  async reportFailure(error) {
    this.terminalError ||= error instanceof Error ? error : new Error(String(error));
    // Do not race teardown against a checkpoint/create/start already in flight.
    if (!this.busy && !this.failing) await this.fail(this.terminalError);
  }
  async boot(image, argv, bytes) {
    this.healthy();
    this.state = 'starting'; this.image = image; ++this.generation;
    this.record('document-create', {image, argv: [...argv]});
    this.document = await this.create(image, this.generation);
    this.healthy();
    const expected = await this.digest(bytes);
    this.healthy();
    const receipt = await this.document.start({image, imageSha256: IMAGES[image].sha256, argv: [...argv], card: bytes.slice(), cardSha256: expected});
    this.healthy();
    if (receipt?.cardSha256 !== expected || receipt?.image !== image || receipt?.imageSha256 !== IMAGES[image].sha256 ||
        JSON.stringify(receipt?.argv) !== JSON.stringify(argv)) throw new Error('successor import/start receipt mismatch');
    this.state = 'running'; this.record('document-started', {image, argv: [...argv], cardSha256: expected});
  }
  async start() {
    if (this.state !== 'idle') throw new Error('session already started');
    this.busy = true;
    try { await this.boot('game', [IMAGES.game.path], cardCopy(await this.store.load())); }
    catch (error) { await this.fail(error); throw error; }
    finally { this.busy = false; }
  }
  async transition(record, bytes, generation) {
    if (this.busy || this.state !== 'running' || generation !== this.generation)
      throw new Error('duplicate, stale, or out-of-state exec event');
    this.busy = true;
    // Freeze the delivered snapshot before the first await.
    const captured = structuredClone(record);
    try {
      const next = validateRequest(captured, this.image);
      const card = cardCopy(bytes), digest = await this.digest(card);
      this.healthy();
      this.state = 'checkpointing'; this.record('exec-captured', {request: captured, cardSha256: digest});
      await this.store.commit(card.slice());
      this.healthy();
      const readback = cardCopy(await this.store.load());
      if (await this.digest(readback) !== digest) throw new Error('durable card readback mismatch');
      this.healthy();
      this.record('card-durable', {cardSha256: digest});
      await this.destroy();
      await this.boot(next.image, next.argv, readback);
      return {image: next.image, generation: this.generation, cardSha256: digest};
    } catch (error) { await this.fail(error); throw error; }
    finally { this.busy = false; }
  }
  async destroy() {
    if (!this.document) return;
    this.state = 'stopping';
    await this.document.stop(); this.record('document-stopped', {image: this.image});
    await this.document.dispose(); this.document = null;
    this.record('document-disposed', {image: this.image});
  }
  async fail(error) {
    this.terminalError ||= error instanceof Error ? error : new Error(String(error));
    if (this.failing) return;
    this.failing = true;
    this.state = 'failed'; this.record('failure', {error: String(error?.stack || error)});
    try { await this.destroy(); }
    catch (cleanup) { this.record('cleanup-failure', {error: String(cleanup?.stack || cleanup)}); }
    this.state = 'failed';
    this.failing = false;
  }
  async close() {
    if (this.busy) throw new Error('cannot close during a lifecycle transition');
    await this.destroy(); this.state = 'closed'; this.record('closed');
  }
}
