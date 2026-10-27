const test = require('node:test');
const assert = require('node:assert/strict');
const {spawn} = require('node:child_process');
const {once} = require('node:events');
const path = require('node:path');
const {LockstepTransport} = require('../../poc/lockstep/web/netplay-transport.js');
const {GameSession} = require('../../poc/lockstep/web/netplay-game.js');

let server, endpoint;
const identity = {protocol: 1, seed: 0, game_sha256: 'a'.repeat(64), build_sha256: 'b'.repeat(64), state_sha256: 'c'.repeat(64)};
const hash = 'd6ebc32d3bb5d8a2';
const sleep = ms => new Promise(resolve => setTimeout(resolve, ms));
test.before(async () => {
  server = spawn('python3', ['-u', 'tests/multiplayer/netplay_startup_relay.py'], {
    cwd: path.resolve(__dirname, '../..'), stdio: ['ignore', 'pipe', 'ignore']});
  endpoint = await new Promise((resolve, reject) => {
    let output = '';
    server.once('error', reject);
    server.once('exit', code => reject(new Error('Relay exited before startup: ' + code)));
    server.stdout.on('data', bytes => {
      output += bytes;
      const match = output.match(/http:\/\/127\.0\.0\.1:\d+\/netplay-api\//);
      if (match) resolve(match[0]);
    });
  });
});
test.after(async () => {
  if (server && server.exitCode === null) {server.kill(); await once(server, 'exit');}
});
async function advance(seconds) {
  const response = await fetch(new URL('/test/advance', endpoint), {method: 'POST',
    headers: {'Content-Type': 'application/json'}, body: JSON.stringify({seconds})});
  assert.equal(response.status, 200);
}
async function pair(options = {}) {
  const requests = [[], []];
  const transports = [0, 1].map(owner => new LockstepTransport({endpoint, retryLimit: 0,
    fetch: async (url, init) => {
      const action = url.split('/').pop(), body = JSON.parse(init.body);
      requests[owner].push({action, frame: body.frame, hash: body.hash});
      const response = await fetch(url, init);
      if (options.afterResponse) await options.afterResponse(owner, action, body, response.clone());
      return response;
    }}));
  const room = await transports[0].create(identity, 120, 3);
  await transports[1].join(room.room, room.invite, identity);
  // Tests advance the server clock explicitly; background heartbeats would
  // obscure which startup operation reclaimed an expired slot.
  transports.forEach(t => t.stopHeartbeat());
  const sessions = transports.map(t => new GameSession(t, {startupTimeoutMs: 5000, startupPollMs: 5, ...options.session}));
  return {transports, sessions, requests, async close() {
    sessions.forEach(s => s.fail(new Error('test cleanup')));
    transports.forEach(t => t.stopHeartbeat());
    await transports[0].close();
  }};
}

test('31-second expired startup leases recover original owners and keep the hash barrier', async () => {
  const p = await pair();
  try {
    const tokens = p.transports.map(t => t.session.token);
    await advance(31);
    assert.equal((await p.transports[0].call('status')).status, 'paused');
    let firstFinished = false;
    const first = p.sessions[0].step(0, hash).then(value => {firstFinished = true; return value;});
    await sleep(35);
    assert.equal(firstFinished, false, 'No guessed peer input while initialization is delayed');
    const both = await Promise.all([first, p.sessions[1].step(0, hash)]);
    assert.deepEqual(both[0], both[1]);
    assert.deepEqual(p.transports.map(t => t.session.token), tokens);
    assert.deepEqual(p.sessions.map(s => s.lastCheckpoint), [{frame: 0, hash}, {frame: 0, hash}]);
    assert.deepEqual(p.sessions.map(s => s.nextFrame), [1, 1]);
  } finally {await p.close();}
});

test('lease expiry after part of neutral prime retries the unaccepted input only', async () => {
  let advanced = false;
  const p = await pair({afterResponse: async (owner, action, body, response) => {
    if (!advanced && owner === 0 && action === 'input' && body.frame === 0 && (await response.json()).accepted === 0) {
      advanced = true;
      await advance(31);
    }
  }});
  try {
    const first = p.sessions[0].step(0, hash);
    await sleep(60);
    const both = await Promise.all([first, p.sessions[1].step(0, hash)]);
    assert.deepEqual(both[0], both[1]);
    assert.equal(advanced, true);
    assert.equal(p.requests[0].filter(r => r.action === 'input' && r.frame === 0).length, 1);
    assert.ok(p.requests[0].filter(r => r.action === 'input' && r.frame === 1).length >= 2);
    assert.equal(p.sessions[0].nextFrame, 1);
  } finally {await p.close();}
});

test('initial hash mismatch remains terminal and is never hidden by recovery', async () => {
  const p = await pair();
  try {
    const result = await Promise.allSettled([p.sessions[0].step(0, hash), p.sessions[1].step(0, 'e'.repeat(16))]);
    assert.ok(result.every(r => r.status === 'rejected' && /State hash mismatch at frame 0/.test(r.reason.message)));
    assert.deepEqual(p.sessions.map(s => s.nextFrame), [0, 0]);
    assert.ok(p.transports.every(t => t.closed));
  } finally {await p.close();}
});

test('startup cancellation stops later polling without submitting input', async () => {
  const p = await pair();
  try {
    await advance(31);
    const work = p.sessions[0].step(0, hash);
    const rejected = assert.rejects(work, /cancelled by test/);
    await sleep(25);
    p.sessions[0].fail(new Error('cancelled by test'));
    await rejected;
    await sleep(30);
    const count = p.requests[0].length;
    await sleep(30);
    assert.equal(p.requests[0].length, count);
    assert.equal(p.transports[0].nextInput, 0);
  } finally {await p.close();}
});

test('startup wait has a bounded deadline and does not silently restart after timing out', async () => {
  const p = await pair({session: {startupTimeoutMs: 60}});
  try {
    await advance(31);
    await assert.rejects(p.sessions[0].step(0, hash), /Initial multiplayer startup timed out/);
    await sleep(30);
    const count = p.requests[0].length;
    await sleep(30);
    assert.equal(p.requests[0].length, count);
    assert.equal(p.sessions[0].nextFrame, 0);
    await assert.rejects(p.sessions[0].step(0, hash), /Initial multiplayer startup timed out/);
  } finally {await p.close();}
});

test('a disconnect after the first simulated frame never triggers automatic resume', async () => {
  const p = await pair();
  try {
    await Promise.all(p.sessions.map(s => s.step(0, hash)));
    await p.transports[1].leave();
    const resumeCount = p.requests[0].filter(r => r.action === 'resume').length;
    // Already delivered, agreed delay-window inputs may still be consumed.
    // The first request for unavailable input must stop, without resuming.
    let stopped;
    for (let frame = 1; frame < 8; ++frame) {
      try {await p.sessions[0].step(frame, null);}
      catch (error) {stopped = error; break;}
    }
    assert.match(stopped && stopped.message, /paused/);
    assert.equal(p.requests[0].filter(r => r.action === 'resume').length, resumeCount);
    assert.ok(p.sessions[0].nextFrame >= 1 && p.sessions[0].nextFrame <= 4);
  } finally {await p.close();}
});

test('a fresh local session cannot auto-resume an original token after relay input was released', async () => {
  const p = await pair();
  try {
    await Promise.all(p.sessions.map(s => s.step(0, hash)));
    await p.transports[1].leave();
    const replacement = new LockstepTransport({endpoint, retryLimit: 0});
    replacement.session = p.transports[1].session;
    let resumes = 0;
    const resume = replacement.resume.bind(replacement);
    replacement.resume = (...args) => {++resumes; return resume(...args);};
    const fresh = new GameSession(replacement, {startupTimeoutMs: 1000, startupPollMs: 5});
    await assert.rejects(fresh.step(0, hash), /already released game input/);
    assert.equal(resumes, 0);
    assert.equal(fresh.nextFrame, 0);
  } finally {await p.close();}
});
