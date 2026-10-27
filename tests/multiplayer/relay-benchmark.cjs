// Protocol throughput only: no WASM, rendering or audio workload.
// Usage: TEST_RTT_MS=150 node tests/multiplayer/relay-benchmark.cjs \
//   ./poc/lockstep/web http://127.0.0.1:8631/netplay-api 240 3 --adaptive
// For a legacy control, use the earlier transport/game files and omit --adaptive.
const path = require('node:path');
const directory = path.resolve(process.argv[2]);
const {LockstepTransport} = require(path.join(directory, 'netplay-transport.js'));
const {GameSession} = require(path.join(directory, 'netplay-game.js'));
const endpoint = process.argv[3].replace(/\/?$/, '/'), ticks = Number(process.argv[4] || 240);
const initialDelay = Number(process.argv[5] || 3), rtt = Number(process.env.TEST_RTT_MS || 0);
const adaptive = process.argv.includes('--adaptive');
const identity = {protocol:1, seed:0, game_sha256:'1'.repeat(64), build_sha256:'2'.repeat(64), state_sha256:'3'.repeat(64)};
const sleep = ms => new Promise(resolve => setTimeout(resolve, ms));
(async () => {
  let requests = 0;
  const measuredRTT = [];
  const fetcher = async (url, options) => {
    const start = performance.now();
    if (rtt) await sleep(rtt / 2);
    const response = await fetch(url, options);
    if (rtt) await sleep(rtt / 2);
    if (url.endsWith('status')) measuredRTT.push(performance.now() - start);
    ++requests;
    return response;
  };
  const clients = [0,1].map(() => new LockstepTransport({endpoint, fetch:fetcher}));
  const room = await clients[0].create(identity, 120, initialDelay, adaptive);
  try {
    await clients[1].join(room.room, room.invite, identity);
    for (let i = 0; i < 6; ++i) await clients[0].call('status');
    if (adaptive) await Promise.all(clients.map(client => client.measureLatency()));
    const games = clients.map(client => new GameSession(client)), sums = [0,0];
    await Promise.all(games.map(game => game.step(0, '0000000000000000')));
    const start = performance.now();
    await Promise.all(games.map(async (game, player) => {
      for (let tick = 1; tick <= ticks; ++tick) {
        const at = performance.now();
        game.localPad.buttons = tick % 3 ? player + 1 : 0;
        const pair = await game.step(tick, tick % 120 === 0 ? sums[player].toString(16).padStart(16, '0') : null);
        sums[player] += pair.pads[0].buttons + pair.pads[1].buttons;
        await sleep(Math.max(0, 1000 / 60 - (performance.now() - at)));
      }
    }));
    const seconds = (performance.now() - start) / 1000;
    if (sums[0] !== sums[1]) throw Error('Input sequences diverged');
    process.stdout.write(JSON.stringify({scope:'Protocol throughput; not game FPS', ticks, seconds,
      ticks_per_second:ticks / seconds, injected_rtt_ms:rtt, input_delay:clients[0].session.input_delay,
      measured_rtt_ms:measuredRTT, matching_inputs:true, requests,
      transport:clients.map(client => client.snapshot?.())}, null, 2) + '\n');
  } finally {
    await clients[0].close();
    clients.forEach(client => client.stopHeartbeat());
  }
})().catch(error => { console.error(error); process.exitCode = 1; });
