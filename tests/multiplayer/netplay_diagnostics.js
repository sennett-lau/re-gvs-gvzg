const test = require('node:test');
const assert = require('node:assert/strict');
const vm = require('node:vm');
const fs = require('node:fs');

function harness() {
  let halt, error;
  class Transport {
    constructor() { this.session = {room: 'ROOM-SECRET', token: 'TOKEN-SECRET', invite: 'INVITE-SECRET'}; }
    async call(action) {
      if (action === 'checkpoint') throw new Error('State hash mismatch at frame 0');
      if (action === 'poll') throw new Error('Failed to fetch TOKEN-SECRET');
      return {status: 'running', next_frame: 0, checkpoint_frame: 0, players: [true, true]};
    }
  }
  class GameSession { step(frame) { return Promise.resolve({frame}); } }
  const lobby = {prepare: async () => {}, start: async Module => {Module.onNetplayError = value => {error = value;};}, stats: () => ({steps: 0})};
  const Module = {onHalt: reason => {halt = reason;}, netplaySession: {room: 'ROOM-SECRET'}};
  const context = {PS2Netplay: {LockstepTransport: Transport}, PS2NetplayGame: {GameSession}, GundamNetplayLobby: lobby,
    performance: {now: () => 10}, document: {body: {dataset: {}}}};
  vm.createContext(context);
  vm.runInContext(fs.readFileSync(require.resolve('../../poc/lockstep/web/netplay-diagnostics.js'), 'utf8'), context);
  return {Module, lobby, transport: new Transport(), session: new GameSession(), halt: () => halt, error: () => error};
}

test('specific initial checkpoint failure survives the later generic native halt', async () => {
  const h = harness();
  await h.lobby.prepare(h.Module);
  await h.lobby.start(h.Module);
  assert.equal((await h.session.step(0, 'abc123')).frame, 0);
  await assert.rejects(h.transport.call('checkpoint', {frame: 0, hash: 'abc123'}), /State hash mismatch/);
  h.Module.onNetplayError('Error: State hash mismatch at frame 0');
  h.Module.onHalt('Netplay stopped: missing peer, transport failure or state mismatch');
  assert.equal(h.halt(), 'State hash mismatch at frame 0');
  assert.equal(h.error(), h.halt());
  const report = h.lobby.stats(h.Module).diagnostics;
  assert.equal(report.failure.action, 'checkpoint');
  assert.equal(report.checkpoint.frame, 0);
  assert.equal(report.checkpoint.hash, 'abc123');
  assert.equal(report.requests[0].elapsedMs, 0);
});

test('unrelated halts remain intact and retained requests are bounded and credential-free', async () => {
  const h = harness();
  await h.lobby.prepare(h.Module); await h.lobby.start(h.Module);
  for (let i = 0; i < 30; ++i) await h.transport.call('status');
  await assert.rejects(h.transport.call('poll', {from: 0}), /Failed to fetch/);
  h.Module.onNetplayError('Failed to fetch TOKEN-SECRET');
  h.Module.onHalt('Illegal instruction');
  assert.equal(h.halt(), 'Illegal instruction');
  const report = h.lobby.stats(h.Module).diagnostics;
  assert.equal(report.requests.length, 24);
  assert.equal(report.failure.message, 'Failed to fetch [token]');
  for (const value of ['ROOM-SECRET', 'TOKEN-SECRET', 'INVITE-SECRET']) assert.ok(!JSON.stringify(report).includes(value));
});
