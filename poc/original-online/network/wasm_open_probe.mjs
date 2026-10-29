import assert from 'node:assert/strict';
import { mkdir, readFile, writeFile } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { installOriginalOnlineBridge, hostErrors } from './wasm_host.mjs';

const [output] = process.argv.slice(2);
if (!output) throw new Error('usage: node wasm_open_probe.mjs NEW_PRIVATE_OUTPUT');
await mkdir(output, { recursive: false });
const result = { started_at: new Date().toISOString(), native_client_connected: false,
  scope: 'Offline bridge ingress with real shared WASM memory and a decoder that rejects shared views; adapter submission is a recorder', checks: [] };
const NativeDecoder = globalThis.TextDecoder;
const decoded = [];
// Node accepts shared views, unlike the Chromium build that exposed this bug.
// Require a private input here so this regression also fails under Node.
class PrivateInputDecoder {
  constructor(...args) { this.decoder = new NativeDecoder(...args); }
  decode(bytes) {
    if (bytes.buffer instanceof SharedArrayBuffer) throw new TypeError('ArrayBufferView must not be shared');
    decoded.push(bytes);
    return this.decoder.decode(bytes);
  }
}
const memory = new WebAssembly.Memory({ initial: 1, maximum: 2, shared: true });
const Module = { HEAPU8: new Uint8Array(memory.buffer) };
const bridge = installOriginalOnlineBridge(Module, {
  gatewayURL: 'ws://127.0.0.1:18820/', token: 'offline-unused', endpoints: {}
});
const submissions = [];
bridge.adapter.submit = request => { submissions.push(request); return 17; };
async function check(name, run) {
  try { await run(); result.checks.push({ name, passed: true }); }
  catch (error) { result.checks.push({ name, passed: false }); throw error; }
}
function put(host, pointer = 32) {
  const bytes = new TextEncoder().encode(host);
  Module.HEAPU8.set(bytes, pointer);
  return bytes.length;
}
function rejected(pointer, length, port) {
  const count = submissions.length;
  assert.equal(bridge.open(pointer, length, port, 0), 0);
  assert.equal(bridge.lastError, hostErrors.EINVAL);
  assert.equal(submissions.length, count);
}
try {
  globalThis.TextDecoder = PrivateInputDecoder;
  await check('shared WASM hostname is copied before fatal decoding and keeps timeout zero', () => {
    const length = put('127.0.0.1');
    assert.equal(bridge.open(32, length, 443, 0), 17);
    assert.equal(bridge.lastError, 0);
    assert.deepEqual(submissions.at(-1), { op: 'open', host: '127.0.0.1', port: 443, timeoutMs: 0 });
    assert.equal(decoded.at(-1).byteLength, length);
    assert.notEqual(decoded.at(-1).buffer, memory.buffer);
    Module.HEAPU8.fill(0, 32, 32 + length);
    assert.equal(new NativeDecoder().decode(decoded.at(-1)), '127.0.0.1');
    assert.equal(submissions.at(-1).host, '127.0.0.1');
  });
  await check('minimum and maximum host lengths preserve exact bytes', () => {
    for (const host of ['a', 'a'.repeat(253)]) {
      assert.equal(bridge.open(32, put(host), 443, 6000), 17);
      assert.equal(submissions.at(-1).host, host);
      assert.equal(decoded.at(-1).length, host.length);
    }
  });
  await check('invalid spans, host lengths and ports fail before decoder or submission', () => {
    const count = decoded.length;
    for (const args of [[-1, 9, 443], [0.5, 9, 443], [65530, 9, 443],
      [32, -1, 443], [32, 0, 443], [32, 254, 443], [32, 1.5, 443],
      [32, 9, 0], [32, 9, 65536], [32, 9, 443.5]]) rejected(...args);
    assert.equal(decoded.length, count);
  });
  await check('malformed and truncated UTF8 still return EINVAL without replacement', () => {
    for (const bytes of [[255], [0xc0, 0xaf], [0xe2, 0x82]]) {
      Module.HEAPU8.set(bytes, 32); rejected(32, bytes.length, 443);
    }
    const host = 'é.example';
    assert.equal(bridge.open(32, put(host), 443, 0), 17);
    assert.equal(submissions.at(-1).host, host);
  });
  await check('updated heap view after shared memory growth supplies the hostname', () => {
    memory.grow(1); Module.HEAPU8 = new Uint8Array(memory.buffer);
    const host = 'gate1.jp.dnas.playstation.org';
    assert.equal(bridge.open(70000, put(host, 70000), 443, 0), 17);
    assert.equal(submissions.at(-1).host, host);
  });
  await check('ordinary nonshared heap remains supported', () => {
    Module.HEAPU8 = new Uint8Array(4096);
    assert.equal(bridge.open(32, put('127.0.0.1'), 18800, 6000), 17);
    assert.equal(submissions.at(-1).port, 18800);
    assert.equal(submissions.at(-1).timeoutMs, 6000);
  });
  result.success = true;
} catch (error) {
  result.success = false; result.error = { message: error.message, stack: error.stack };
  process.exitCode = 1;
} finally {
  globalThis.TextDecoder = NativeDecoder;
  bridge.reset(); result.finished_at = new Date().toISOString();
  result.source_sha256 = {};
  for (const name of ['wasm_host.mjs', 'wasm_open_probe.mjs']) {
    result.source_sha256[name] = createHash('sha256').update(await readFile(new URL(name, import.meta.url))).digest('hex');
  }
  await writeFile(`${output}/result.json`, JSON.stringify(result, null, 2) + '\n');
  console.log(JSON.stringify(result));
}
