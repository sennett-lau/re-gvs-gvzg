const test = require('node:test');
const assert = require('node:assert/strict');
const {LockstepTransport, neutral} = require('../../poc/lockstep/web/netplay-transport.js');

const success = value => ({ok: true, status: 200, json: async () => value});
function client(fetcher) {
  const value = new LockstepTransport({fetch: fetcher, retryDelayMs: 1});
  value.session = {room: 'r', token: 't', input_delay: 3};
  return value;
}

test('a lost input acknowledgement retries the identical payload without advancing its frame twice', async () => {
  const bodies = [];
  const t = client(async (url, init) => {
    bodies.push(init.body);
    if (bodies.length === 1) throw new TypeError('Failed to fetch');
    return success({accepted: 0, duplicate: true, status: 'running'});
  });
  await t.submit(0, neutral());
  assert.equal(t.nextInput, 1);
  assert.equal(bodies.length, 2);
  assert.equal(bodies[0], bodies[1]);
  assert.equal(t.retryEvents[0].action, 'input');
});

test('an upstream gateway failure retries but forbidden and mismatch failures do not', async () => {
  let requests = 0;
  const t = client(async () => ++requests === 1
    ? {ok: false, status: 502, json: async () => {throw new SyntaxError();}}
    : success({status: 'running', frames: []}));
  await t.call('poll', {from: 0, wait: 20});
  assert.equal(requests, 2);
  requests = 0;
  t.fetcher = async () => {++requests; return {ok: false, status: 403, json: async () => {throw new SyntaxError();}};};
  await assert.rejects(t.call('poll'), /Netplay poll: HTTP 403/);
  assert.equal(requests, 1);
  requests = 0;
  t.fetcher = async () => {++requests; return success({status: 'desynced', reason: 'State hash mismatch at frame 0'});};
  await assert.rejects(t.call('checkpoint'), /State hash mismatch at frame 0/);
  assert.equal(requests, 1);
  assert.equal(t.closed, true);
});

test('create and join are never retried, and persistent loss has a bounded retry count', async () => {
  let requests = 0;
  const t = client(async () => {++requests; throw new TypeError('Failed to fetch');});
  await assert.rejects(t.call('create', {}, false), /Netplay create: Failed to fetch/);
  assert.equal(requests, 1);
  await assert.rejects(t.call('join', {}, false), /Netplay join: Failed to fetch/);
  assert.equal(requests, 2);
  requests = 0;
  await assert.rejects(t.call('poll'), /Netplay poll: Failed to fetch/);
  assert.equal(requests, 3);
  assert.equal(t.nextFrame, 0);
});
