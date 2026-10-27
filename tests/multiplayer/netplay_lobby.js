const test = require('node:test');
const assert = require('node:assert/strict');
const vm = require('node:vm');
const fs = require('node:fs');
const path = require('node:path');

test('lobby callbacks survive removal of the startup overlay and do not expose tokens in invitations', async () => {
  const ids = ['netplay-status', 'netplay-lobby-status', 'start', 'netplay-create', 'netplay-join',
    'netplay-copy', 'netplay-invite', 'netplay-invite-row', 'netplay-view', 'netplay-crop'];
  const elements = Object.fromEntries(ids.map(id => [id, {textContent: '', disabled: true, hidden: false, value: '', style: {}}]));
  elements['netplay-view'].value = 'my';
  const storage = new Map();
  const identity = {protocol: 1, seed: 0, game_sha256: 'a'.repeat(64), build_sha256: 'b'.repeat(64), state_sha256: 'c'.repeat(64)};
  let statusCallback, attached = false;
  const connected = {status: 'running', players: [true, true], next_frame: 0, checkpoint_frame: 0};
  const gameSession = {
    transport: {session: {room: 'public-room', token: 'PRIVATE-PLAYER-TOKEN', invite: 'share-invite', player: 0,
      identity, checkpoint_interval: 120, input_delay: 3},
      call: async () => connected},
    attach(Module) { attached = true; Module.netplayStep = async () => {}; },
  };
  const context = {
    document: {body: {dataset: {}}, getElementById: id => elements[id] || null},
    sessionStorage: {getItem: key => storage.get(key), setItem: (key, value) => storage.set(key, value), removeItem: key => storage.delete(key)},
    location: {href: 'https://example.test/experimental-pvp/?audio=off', hash: ''},
    navigator: {clipboard: {writeText: async () => {}}},
    URL, URLSearchParams, JSON, Error, String, Object,
    setInterval: () => 1, clearInterval: () => {},
    fetch: async () => ({ok: true, json: async () => ({identity, runtime_config: {checkpoint_interval: 120, input_delay: 3}})}),
    PS2NetplayGame: {GameSession: {create: async options => { statusCallback = options.onStatus; return gameSession; }}},
  };
  vm.createContext(context);
  vm.runInContext(fs.readFileSync(path.join(__dirname, '../../poc/lockstep/web/gundam-netplay-lobby.js'), 'utf8'), context);
  const Module = {printErr() {}, _ps2web_netplay_stat: which => which ? 4 : 120};
  await context.GundamNetplayLobby.prepare(Module);
  await elements['netplay-create'].onclick();
  assert.match(elements['netplay-invite'].value, /#room=public-room&invite=share-invite$/);
  assert.ok(!elements['netplay-invite'].value.includes('PRIVATE-PLAYER-TOKEN'));
  assert.ok(storage.get(context.GundamNetplayLobby.STORAGE).includes('PRIVATE-PLAYER-TOKEN'));
  const canvas = {style: {}};
  assert.deepEqual(Array.from(context.GundamNetplayLobby.layout({clientWidth: 1000, clientHeight: 700}, canvas)), [640, 480]);
  assert.equal(elements['netplay-crop'].style.width, '500px');
  assert.equal(elements['netplay-crop'].style.height, '700px');
  assert.equal(canvas.style.left, '0px');
  gameSession.transport.session.player = 1;
  context.GundamNetplayLobby.layout({clientWidth: 1000, clientHeight: 700}, canvas);
  assert.equal(canvas.style.left, '-500px');
  elements['netplay-view'].value = 'both';
  context.GundamNetplayLobby.layout({clientWidth: 900, clientHeight: 700}, canvas);
  assert.equal(elements['netplay-crop'].style.width, '900px');
  assert.equal(elements['netplay-crop'].style.height, '630px');
  assert.equal(canvas.style.left, '0px');
  gameSession.transport.session.player = 0;
  await context.GundamNetplayLobby.start(Module);
  assert.ok(attached);
  assert.equal(storage.has(context.GundamNetplayLobby.STORAGE), false);
  for (const id of ['start', 'netplay-lobby-status', 'netplay-create', 'netplay-join']) delete elements[id];
  assert.doesNotThrow(() => statusCallback(connected));
  assert.match(elements['netplay-status'].textContent, /Player 1/);
  assert.doesNotThrow(() => statusCallback({status: 'paused'}));
  assert.match(elements['netplay-status'].textContent, /paused/);
  assert.doesNotThrow(() => context.GundamNetplayLobby.stats(Module));
  assert.equal(context.document.body.dataset.netplaySteps, '120');
  assert.doesNotThrow(() => Module.onNetplayError('checkpoint mismatch'));
  assert.match(elements['netplay-status'].textContent, /checkpoint mismatch/);
});
