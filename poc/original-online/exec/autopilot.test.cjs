const test = require('node:test'), assert = require('node:assert/strict'), zlib = require('node:zlib');
const autopilot = require('./autopilot.cjs'), vision = require('./probe-vision.cjs');

const profile = {
  grid: [4, 3], limit: 6, black: 6, references: {top: [new Array(12).fill(100)]},
  regions: {room_upper: [0, 0.7, 0.5, 0.8], room_lower: [0, 0.85, 0.5, 0.95], faction_left: [0.1, 0.3, 0.45, 0.7],
    faction_right: [0.55, 0.3, 0.9, 0.7], target_label: [0.5, 0.1, 0.6, 0.15], focus_min: 0.05},
  map: {target_left_top: [0.69, 0.28], tolerance: [0.006, 0.009], speed_per_ms: [0.0002, 0.0003], lit_min: 0.3, label: 'Seattle'},
};
const lobby = {mode: 7, state: 1, substate: 0}, battle = {mode: 7, state: 2, substate: 4}, menu = {mode: 7, state: 2, substate: 1};
const stable = (features, memory, role = {faction: 'left'}, now = 100000) => {
  autopilot.decideLobby(features, memory, role, profile, now);
  return autopilot.decideLobby(features, memory, role, profile, now);
};

test('lobby actions need a stable screen and spacing', () => {
  const memory = {};
  assert.equal(autopilot.decideLobby({screen: 'top'}, memory, {faction: 'left'}, profile, 100000).kind, 'wait');
  assert.deepEqual(autopilot.decideLobby({screen: 'top'}, memory, {faction: 'left'}, profile, 100000).codes, ['KeyX']);
  memory.lastAction = 99000;
  assert.equal(autopilot.decideLobby({screen: 'top'}, memory, {faction: 'left'}, profile, 100000).kind, 'wait');
  for (const screen of ['black', 'waiting', 'match-start', null, 'loading-top']) assert.equal(stable({screen}, {}).kind, 'wait');
});

test('room and faction input follow the visible focus', () => {
  assert.deepEqual(stable({screen: 'room', focus: 'upper'}, {}).codes, ['ArrowDown']);
  assert.deepEqual(stable({screen: 'room', focus: 'lower'}, {}).codes, ['KeyX']);
  assert.equal(stable({screen: 'room', focus: null}, {}).kind, 'wait');
  assert.deepEqual(stable({screen: 'faction', focus: 'left'}, {}, {faction: 'right'}).codes, ['ArrowRight']);
  assert.deepEqual(stable({screen: 'faction', focus: 'right'}, {}, {faction: 'right'}).codes, ['KeyX']);
  assert.deepEqual(stable({screen: 'faction', focus: 'right'}, {}, {faction: 'left'}).codes, ['ArrowLeft']);
});

test('map pointer moves toward the target, then selects the lit node', () => {
  const memory = {};
  let action = stable({screen: 'map', cone: {left: 0.403, top: 0.396}, targetLit: 0}, memory);
  assert.deepEqual(action.codes, ['ArrowRight']);
  assert.equal(action.hold, Math.round((0.69 - 0.403) / 0.0002));
  action = stable({screen: 'map', cone: {left: 0.69, top: 0.396}, targetLit: 0}, memory);
  assert.deepEqual(action.codes, ['ArrowUp']);
  assert.ok(memory.speed[0] > 0 && memory.speed[0] <= 0.0004);
  action = stable({screen: 'map', cone: {left: 0.69, top: 0.28}, targetLit: 0}, memory);
  assert.equal(action.hold, 50);
  assert.deepEqual(stable({screen: 'map', cone: {left: 0.69, top: 0.28}, targetLit: 0.6}, memory).codes, ['KeyX']);
  assert.equal(stable({screen: 'map', cone: null}, {}).kind, 'wait');
});

test('scene progress counts rounds and matches; battle uses ordinary input', () => {
  const memory = {};
  for (const scene of [lobby, menu, battle, menu, battle, menu, lobby]) autopilot.progress(scene, memory, 0);
  assert.equal(memory.battlesStarted, 2); assert.equal(memory.battlesEnded, 2); assert.equal(memory.matchesEnded, 1);
  assert.equal(memory.afterRoom, true); assert.equal(memory.roundsThisMatch, 0);
  // The after-battle room is left by EXIT; reaching the map counts one lobby return.
  assert.deepEqual(stable({screen: 'after-room', focus: 'upper'}, memory).codes, ['ArrowDown']);
  assert.deepEqual(stable({screen: 'after-room', focus: 'lower'}, memory).codes, ['KeyX']);
  stable({screen: 'map', cone: null}, memory);
  assert.equal(memory.lobbyReturns, 1); assert.equal(memory.afterRoom, false);
  const keys = new Set();
  for (let i = 0; i < autopilot.COMBAT.length; i++) for (const code of autopilot.decide(battle, {}, {phase: 'battle'}, {faction: 'left'}, profile, 0).codes) keys.add(code);
  for (const code of keys) assert.ok(['KeyI', 'KeyJ', 'KeyK', 'KeyL', 'KeyA', 'KeyS', 'KeyZ'].includes(code), code);
  const m = {phase: 'battle-menu'};
  assert.deepEqual(autopilot.decide(menu, {}, m, {faction: 'left'}, profile, 5000).codes, ['KeyX']);
  m.lastAction = 4000;
  assert.equal(autopilot.decide(menu, {}, m, {faction: 'left'}, profile, 5000).kind, 'wait');
});

test('post-round prompts end the match and keep the card unchanged', () => {
  const post = (features, memory, role = {faction: 'left'}) => {
    autopilot.decidePostRound(features, memory, role, profile, 100000, 1);
    return autopilot.decidePostRound(features, memory, role, profile, 100000, 1);
  };
  const ended = {roundsThisMatch: 1};
  assert.deepEqual(post({screen: 'result'}, {...ended}).codes, ['KeyX']);
  assert.deepEqual(post({screen: 'rematch', rematch: {top: 'continue', bottom: 'continue'}}, {...ended}).codes, ['ArrowRight']);
  assert.deepEqual(post({screen: 'rematch', rematch: {top: 'end', bottom: 'continue'}}, {...ended}).codes, ['KeyX']);
  // Client B's own choice is the bottom row; an unclear highlight never confirms the panel.
  assert.deepEqual(post({screen: 'rematch', rematch: {top: 'end', bottom: 'continue'}}, {...ended}, {faction: 'right'}).codes, ['ArrowRight']);
  const unclear = {...ended};
  assert.deepEqual(post({screen: 'rematch', rematch: {top: null, bottom: null}}, unclear).codes, ['ArrowRight']);
  for (let i = 0; i < 6; i++) assert.equal(post({screen: 'rematch', rematch: {top: null, bottom: null}}, unclear).kind, 'wait');
  // With more rounds wanted, the default continue is confirmed.
  assert.deepEqual(post({screen: 'rematch', rematch: {top: 'continue'}}, {roundsThisMatch: 0}).codes, ['KeyX']);
  assert.deepEqual(post({screen: 'save-slot'}, {}).codes, ['KeyZ']);
  assert.deepEqual(post({screen: 'save-end', focus: 'no'}, {}).codes, ['ArrowUp']);
  assert.deepEqual(post({screen: 'save-end', focus: 'yes'}, {}).codes, ['KeyX']);
  assert.deepEqual(post({screen: 'save-create', focus: 'no'}, {}).codes, ['KeyX']);
  assert.deepEqual(post({screen: 'friend', focus: 'yes'}, {}).codes, ['ArrowDown']);
  assert.deepEqual(post({screen: 'friend', focus: 'no'}, {}).codes, ['KeyX']);
  // Prompts that loop back on a wrong answer may be confirmed blind after one move.
  const blind = {};
  assert.deepEqual(post({screen: 'friend', focus: null}, blind).codes, ['ArrowDown']);
  let action;
  for (let i = 0; i < 4 && (action = post({screen: 'friend', focus: null}, blind)).kind === 'wait'; i++);
  assert.deepEqual(action.codes, ['KeyX']);
  for (const screen of [null, 'transition', 'black']) assert.equal(post({screen}, {}).kind, 'wait');
});

function png(width, height, pixel) {
  const raw = Buffer.alloc((width * 3 + 1) * height);
  for (let y = 0; y < height; y++) {
    raw[y * (width * 3 + 1)] = y % 5; // exercise every filter type with plain bytes
    for (let x = 0; x < width; x++) raw.set(pixel(x, y), y * (width * 3 + 1) + 1 + x * 3);
  }
  // Re-filter rows so that the decoder must undo the selected filter.
  const out = Buffer.from(raw), stride = width * 3;
  for (let y = height - 1; y >= 0; y--) {
    const row = y * (stride + 1) + 1, prior = y ? (y - 1) * (stride + 1) + 1 : -1, filter = raw[row - 1];
    for (let x = stride - 1; x >= 0; x--) {
      const a = x >= 3 ? raw[row + x - 3] : 0, b = prior >= 0 ? raw[prior + x] : 0, c = x >= 3 && prior >= 0 ? raw[prior + x - 3] : 0;
      const p = a + b - c, pa = Math.abs(p - a), pb = Math.abs(p - b), pc = Math.abs(p - c);
      const predictor = [0, a, b, (a + b) >> 1, pa <= pb && pa <= pc ? a : pb <= pc ? b : c][filter];
      out[row + x] = (raw[row + x] - predictor) & 255;
    }
  }
  const chunk = (kind, body) => { const b = Buffer.alloc(12 + body.length); b.writeUInt32BE(body.length, 0); b.write(kind, 4, 'latin1'); body.copy(b, 8); return b; };
  const header = Buffer.alloc(13); header.writeUInt32BE(width, 0); header.writeUInt32BE(height, 4); header[8] = 8; header[9] = 2;
  return Buffer.concat([Buffer.from([0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a]), chunk('IHDR', header), chunk('IDAT', zlib.deflateSync(out)), chunk('IEND', Buffer.alloc(0))]);
}

test('vision decodes filtered PNG rows and finds the pointer, label and focus', () => {
  const width = 200, height = 140;
  const image = vision.decodePNG(png(width, height, (x, y) => {
    if (x >= 120 && x < 124 && y >= 40 && y < 45) return [0, 230, 255];              // cone
    if (x >= 100 && x < 120 && y >= 14 && y < 21) return [220, 80, 80];              // lit label
    if (x >= 5 && x < 95 && y >= 100 && y < 110) return [60, 230, 250];               // upper focus
    return [(x * 7 + y) & 127, 90, 60];
  }));
  assert.equal(image.width, width); assert.deepEqual([...image.data.subarray(0, 4)], [0, 90, 60, 255]);
  const cone = vision.cone(image);
  assert.ok(Math.abs(cone.left - 0.6) < 1e-9 && Math.abs(cone.top - 40 / 140) < 1e-9);
  assert.ok(vision.count(image, [0.5, 0.1, 0.6, 0.15], vision.isRed).fraction > 0.3);
  const features = vision.features(image, {...profile, grid: [4, 3], references: {room: [vision.thumbnail(image, 4, 3)]}});
  assert.equal(features.screen, 'room'); assert.equal(features.focus, 'upper');
  assert.throws(() => vision.decodePNG(Buffer.from('not a png')), /PNG/);
});
