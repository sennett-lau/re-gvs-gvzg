import test from 'node:test';
import assert from 'node:assert/strict';
import {CARD_BYTES, IMAGES, ExecSession, sha256, startupArgs, validateRequest} from './session.mjs';

const request = (source, args = source === 'game' ? [IMAGES.game.path, '1'] : ['1']) => ({schema: 1, kind: 'loadexec',
  syscall: 6, image: source, imageSha256: IMAGES[source].sha256, target: IMAGES[source === 'game' ? 'utility' : 'game'].path,
  args, a1: args.length, nativeFlushed: true, error: '', pc: source === 'game' ? 0x103f24 : 0x1002a4});

function harness(fault = {}) {
  const events = [], calls = [], docs = [];
  let persisted = new Uint8Array(CARD_BYTES); persisted[20] = 17;
  const store = {async load() { calls.push('load'); const data = persisted.slice(); if (fault.corrupt && calls.includes('commit')) data[0] ^= 1; return data; },
    async commit(data) { calls.push('commit'); if (fault.commit) throw Error('disk full'); persisted = data.slice(); }};
  const create = async (image, generation) => {
    assert.equal(docs.filter(d => !d.disposed).length, 0, 'no old machine alive at successor creation');
    calls.push('create:' + image);
    const doc = {image, generation, disposed: false, async start(data) {
      calls.push('start:' + image); doc.data = structuredClone(data);
      if (generation > 1 && fault.start) throw Error('WASM startup failed');
      return {image, imageSha256: IMAGES[image].sha256, argv: data.argv, cardSha256: fault.import ? 'wrong' : data.cardSha256};
    }, async stop() { calls.push('stop:' + image); if (fault.stop) throw Error('termination failed'); },
    async dispose() { calls.push('dispose:' + image); doc.disposed = true; }};
    docs.push(doc); return doc;
  };
  const session = new ExecSession({store, create, emit: event => events.push(event)});
  return {session, events, calls, docs, card: () => persisted.slice()};
}

test('game -> utility -> game preserves exact argv, current card and stop/dispose/start ordering', async () => {
  const h = harness(); await h.session.start();
  const card = h.card(); card[99] = 123; // Synthetic test bytes, never a guest settings fixture.
  await h.session.transition(request('game'), card, 1);
  assert.deepEqual(h.docs[1].data.argv, [IMAGES.utility.path, IMAGES.game.path, '1']);
  assert.deepEqual(h.docs[1].data.card, card);
  await h.session.transition(request('utility'), card, 2);
  assert.deepEqual(h.docs[2].data.argv, [IMAGES.game.path, '1']);
  assert.deepEqual(h.calls, ['load', 'create:game', 'start:game', 'commit', 'load', 'stop:game', 'dispose:game',
    'create:utility', 'start:utility', 'commit', 'load', 'stop:utility', 'dispose:utility', 'create:game', 'start:game']);
  assert.equal(h.events.filter(e => e.kind === 'card-durable').length, 2);
  assert.equal(h.events.every(e => Number.isFinite(Date.parse(e.utc))), true);
  await h.session.close();
});

test('snapshot immutable across asynchronous checkpoint', async () => {
  const h = harness(); await h.session.start();
  const r = request('game'), bytes = h.card();
  const transition = h.session.transition(r, bytes, 1);
  r.args[0] = 'changed'; bytes[20] = 0;
  await transition;
  assert.equal(h.docs[1].data.argv[1], IMAGES.game.path); assert.equal(h.docs[1].data.card[20], 17);
  await h.session.close();
});

for (const [name, mutate] of Object.entries({
  'unknown target': r => r.target = 'cdrom0:\\UNKNOWN.ELF;1',
  'ExecPS2 distinct': r => r.syscall = 7,
  'wrong identity': r => r.imageSha256 = '0'.repeat(64),
  'wrong argc': r => r.a1++,
  'failed native flush': r => r.nativeFlushed = false,
  'retained native error': r => r.error = 'original error -5',
  'NUL argument': r => r.args[1] = '1\0suffix',
  'oversized argument': r => r.args[1] = 'x'.repeat(256),
})) test(name + ' fails without successor or persistent write', async () => {
  const h = harness(); await h.session.start(); const r = request('game'); mutate(r);
  await assert.rejects(h.session.transition(r, h.card(), 1));
  assert.equal(h.session.state, 'failed'); assert.equal(h.docs.length, 1); assert.ok(!h.calls.includes('commit'));
});

for (const [name, fault] of [['durable write', {commit: true}], ['durable readback', {corrupt: true}], ['worker stop', {stop: true}], ['successor boot', {start: true}]])
  test(name + ' failure is terminal and recorded', async () => {
    const h = harness(fault); await h.session.start();
    await assert.rejects(h.session.transition(request('game'), h.card(), 1));
    assert.equal(h.session.state, 'failed'); assert.ok(h.events.some(e => e.kind === 'failure'));
    assert.equal(h.docs.length, fault.start ? 2 : 1);
  });

test('duplicate and stale events cannot launch another machine', async () => {
  const h = harness(); await h.session.start();
  const pending = h.session.transition(request('game'), h.card(), 1);
  await assert.rejects(h.session.transition(request('game'), h.card(), 1), /duplicate/);
  await pending;
  await assert.rejects(h.session.transition(request('game'), h.card(), 1), /stale/);
  assert.equal(h.docs.length, 2); await h.session.close();
});

test('missing card is never silently replaced; import mismatch fails', async () => {
  const h = harness({import: true}); await assert.rejects(h.session.start(), /receipt mismatch/);
  assert.equal(h.session.state, 'failed'); assert.equal(h.docs[0].disposed, true);
  const bad = harness(); bad.session.store.load = async () => null;
  await assert.rejects(bad.session.start(), /card size/); assert.equal(bad.docs.length, 0);
});

test('asynchronous native failure during checkpoint prevents successor start', async () => {
  const h = harness(); await h.session.start();
  h.session.store.commit = async () => { await h.session.reportFailure(new Error('retained device failure')); };
  await assert.rejects(h.session.transition(request('game'), h.card(), 1), /retained device failure/);
  assert.equal(h.docs.length, 1); assert.equal(h.session.state, 'failed');
});

test('zero arguments and exact empty/control strings survive; no guessed mode argument', () => {
  assert.deepEqual(startupArgs(IMAGES.game.path, []), [IMAGES.game.path]);
  assert.deepEqual(validateRequest(request('utility', ['', '\n']), 'utility').argv, [IMAGES.game.path, '', '\n']);
  assert.throws(() => startupArgs(IMAGES.game.path, ['é']), /ASCII/);
});

test('real SHA-256 differentiates changed synthetic card bytes', async () => {
  const bytes = new Uint8Array(CARD_BYTES), first = await sha256(bytes); bytes[100] = 1;
  assert.notEqual(await sha256(bytes), first);
});
