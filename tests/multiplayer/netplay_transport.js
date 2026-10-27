const test = require('node:test');
const assert = require('node:assert/strict');
const {spawn} = require('node:child_process');
const {createHash} = require('node:crypto');
const {once} = require('node:events');
const path = require('node:path');
const {LockstepTransport, neutral} = require('../../poc/lockstep/web/netplay-transport.js');
const {GameSession} = require('../../poc/lockstep/web/netplay-game.js');

let server, endpoint;
const identity = {protocol: 1, game_sha256: 'a'.repeat(64), build_sha256: 'b'.repeat(64), state_sha256: 'c'.repeat(64), seed: 123};
const digest = value => createHash('sha256').update(JSON.stringify(value)).digest('hex');

test.before(async () => {
  server = spawn('python3', ['-u', 'poc/lockstep/server/netplay.py', '--port', '0'], {cwd: path.resolve(__dirname, '../..'), stdio: ['ignore', 'pipe', 'ignore']});
  let text = '';
  endpoint = await new Promise((resolve, reject) => {
    server.once('error', reject);
    server.once('exit', code => reject(new Error('Relay exited before startup: ' + code)));
    server.stdout.on('data', data => {
      text += data.toString();
      const match = text.match(/http:\/\/127\.0\.0\.1:\d+\/netplay-api\//);
      if (match) resolve(match[0]);
    });
    server.once('exit', code => reject(new Error('Relay exited ' + code)));
  });
});
test.after(async () => {
  if (server && server.exitCode === null) { server.kill('SIGTERM'); await once(server, 'exit'); }
});

test('two browser transport instances stay ordered through delay, buffered inputs and checkpoints', async () => {
  const a = new LockstepTransport({endpoint});
  const b = new LockstepTransport({endpoint, fetch: async (url, init) => {
    const data = JSON.parse(init.body);
    if (url.endsWith('/input') && data.frame % 7 === 0) await new Promise(r => setTimeout(r, 18));
    return fetch(url, init);
  }});
  const room = await a.create(identity, 60, 3);
  await b.join(room.room, room.invite, identity);
  assert.equal(a.session.player, 0);
  assert.equal(b.session.player, 1);
  assert.equal(b.session.input_delay, 3);
  const histories = [[], []];
  const totals = [0, 0];
  await Promise.all([a.prime(), b.prime()]);
  async function run(client, owner) {
    for (let frame = 0; frame < 180; ++frame) {
      if (frame % 60 === 0) await client.checkpoint(frame, digest(totals[owner]));
      await client.submit(frame + 3, {...neutral(), buttons: (owner + 1) * ((frame % 8) + 1)});
      const pair = await client.next();
      assert.equal(pair.frame, frame);
      histories[owner].push(pair);
      totals[owner] += pair.pads[0].buttons + pair.pads[1].buttons;
    }
    await client.checkpoint(180, digest(totals[owner]));
  }
  await Promise.all([run(a, 0), run(b, 1)]);
  assert.deepEqual(histories[0], histories[1]);
  assert.equal(totals[0], totals[1]);
  assert.equal(histories[0].length, 180);
  await a.close();
});

test('transport pauses without fabricating inputs and resumes the original owner', async () => {
  const a = new LockstepTransport({endpoint}), b = new LockstepTransport({endpoint});
  const room = await a.create(identity);
  await b.join(room.room, room.invite, identity);
  await Promise.all([a.checkpoint(0, digest(0)), b.checkpoint(0, digest(0))]);
  await a.submit(0, neutral());
  await b.leave();
  await assert.rejects(a.next(), /paused/);
  assert.equal(a.nextFrame, 0);
  await b.resume();
  await b.submit(0, {...neutral(), buttons: 8});
  const pair = await a.next();
  assert.equal(pair.frame, 0);
  assert.equal(pair.pads[1].buttons, 8);
  await a.close();
});

test('checkpoint mismatch stops both consumers', async () => {
  const a = new LockstepTransport({endpoint}), b = new LockstepTransport({endpoint});
  const room = await a.create(identity);
  await b.join(room.room, room.invite, identity);
  const result = await Promise.allSettled([a.checkpoint(0, digest(1)), b.checkpoint(0, digest(2))]);
  assert.ok(result.every(item => item.status === 'rejected' && /mismatch/.test(item.reason.message)));
  assert.equal(a.closed, true);
  assert.equal(b.closed, true);
  await a.close();
});

test('real relay tolerates a lost accepted-input response and checkpoint response without changing inputs', async () => {
  const lost = new Set();
  const a = new LockstepTransport({endpoint, retryDelayMs: 1, fetch: async (url, init) => {
    const response = await fetch(url, init);
    const action = url.slice(url.lastIndexOf('/') + 1);
    if (['input', 'checkpoint'].includes(action) && !lost.has(action)) {
      lost.add(action);
      await response.json(); // The relay accepted it, but the reply was lost.
      throw new TypeError('Simulated lost response');
    }
    return response;
  }});
  const b = new LockstepTransport({endpoint});
  const room = await a.create(identity);
  try {
    await b.join(room.room, room.invite, identity);
    await Promise.all([a.checkpoint(0, digest(0)), b.checkpoint(0, digest(0))]);
    await Promise.all([a.submit(0, {...neutral(), buttons: 16}), b.submit(0, {...neutral(), buttons: 32})]);
    const [left, right] = await Promise.all([a.next(), b.next()]);
    assert.deepEqual(left, right);
    assert.deepEqual(left.pads.map(p => p.buttons), [16, 32]);
    assert.equal(a.nextInput, 1);
    assert.equal(a.nextFrame, 1);
    assert.equal(a.retryEvents.length, 2);
  } finally { await a.close(); b.stopHeartbeat(); }
});

test('game bridge owns local controls, batches future inputs and feeds identical pairs', async () => {
  let inputRequests = 0, maxBatch = 0;
  const delayedFetch = async (url, init) => {
    if (url.endsWith('/inputs')) {
      ++inputRequests;
      maxBatch = Math.max(maxBatch, JSON.parse(init.body).inputs.length);
      // Simulate a response taking40ms. The accepted input reaches the relay
      // before its response; the outbox must accumulate later input meanwhile.
      const response = await fetch(url, init);
      await new Promise(resolve => setTimeout(resolve, 40));
      return response;
    }
    return fetch(url, init);
  };
  const transports = [new LockstepTransport({endpoint, fetch: delayedFetch}), new LockstepTransport({endpoint, fetch: delayedFetch})];
  const room = await transports[0].create(identity, 60, 6);
  await transports[1].join(room.room, room.invite, identity);
  const sessions = transports.map(t => new GameSession(t));
  const rawWrites = [];
  const modules = [0, 1].map(owner => ({_ps2web_pad: (...args) => rawWrites.push(args),
    _ps2web_pad_connected: (...args) => rawWrites.push(args), _ps2web_pressure: (...args) => rawWrites.push(args),
    _ps2web_rumble: port => port + 10}));
  sessions.forEach((session, i) => session.attach(modules[i]));
  assert.equal(modules[0]._ps2web_rumble(0), 10);
  assert.equal(modules[1]._ps2web_rumble(0), 11);
  const histories = [[], []], state = [0, 0];
  const start = performance.now();
  async function simulate(owner) {
    const Module = modules[owner];
    for (let frame = 0; frame < 180; ++frame) {
      Module._ps2web_pad(0, (owner + 1) * ((frame % 8) + 1), 128 + owner, 128, 128, 128);
      Module._ps2web_pad(1, 65535, 0, 0, 0, 0); // Other local devices cannot write the peer.
      Module._ps2web_pressure(0, 0x04030201, 0, 0, 0);
      Module._ps2web_pad_connected(0, 1);
      const pair = await Module.netplayStep(frame, frame % 60 === 0 ? digest(state[owner]) : null);
      histories[owner].push(pair);
      state[owner] += pair.pads[0].buttons + pair.pads[1].buttons;
    }
  }
  await Promise.all([simulate(0), simulate(1)]);
  const elapsed = performance.now() - start;
  assert.deepEqual(histories[0], histories[1]);
  assert.equal(rawWrites.length, 0, 'Controls must not bypass merged network input');
  assert.ok(maxBatch >= 2, 'Inputs must accumulate while earlier responses are delayed');
  assert.ok(inputRequests < 180, 'Both peers should need fewer POSTs than one perframe');
  assert.ok(elapsed < 5000, 'The loop must avoid waiting40ms for every frame: ' + elapsed);
  assert.deepEqual(histories[0][10].pads[1].pressure.slice(0, 4), [1, 2, 3, 4]);
  await transports[0].close();
});
