// Screenshot-led ordinary pad input for original mode-7 clients. It chooses
// keys from the visible original screen and the read-only scene record only;
// it never writes guest memory, skips a state or fabricates a result.
const vision = require('./probe-vision.cjs');

const WAIT = {kind: 'wait'};
const press = (code, hold = 150, reason = '') => ({kind: 'press', codes: [code], hold, reason});

// Lobby screens (scene state 1). `memory` holds per-client timing between polls.
function decideLobby(features, memory, role, profile, now) {
  const screen = features.screen, stable = screen && screen === memory.previous;
  memory.previous = screen;
  if (!stable) return WAIT;
  const since = now - (memory.lastAction || 0);
  // After a match the original after-battle room (待機 / EXIT) comes first; EXIT returns to the map.
  if (memory.afterRoom && ['after-room', 'room', 'waiting'].includes(screen)) {
    if (since < 2000) return WAIT;
    return choose(memory, 'after-room', features.focus, 'lower', 'ArrowDown', 'after-room: EXIT', true);
  }
  if (screen === 'map' && memory.afterRoom) { memory.afterRoom = false; memory.lobbyReturns = (memory.lobbyReturns || 0) + 1; }
  if (screen === 'top' || screen === 'id-select') return since >= 4000 ? press('KeyX', 150, screen + ': ordinary confirm') : WAIT;
  // After the faction choice the original partner box (待機 / 戻る) looks like the room;
  // leave it alone while waiting for a partner (bounded, then the room policy resumes).
  if (memory.waitingSince && ['room', 'after-room', 'waiting'].includes(screen) && now - memory.waitingSince < 180000) return WAIT;
  if (screen === 'room' || screen === 'after-room') { // the two share one layout
    if (since < 2500) return WAIT;
    if (features.focus === 'upper') return press('ArrowDown', 150, 'room: move to partner auto-select');
    if (features.focus === 'lower') return press('KeyX', 150, 'room: partner auto-select');
    return WAIT;
  }
  if (screen === 'faction') {
    if (since < 2500 || !features.focus) return WAIT;
    if (features.focus === role.faction) { memory.waitingSince = now; return press('KeyX', 150, 'faction: confirm ' + role.faction); }
    return press(role.faction === 'left' ? 'ArrowLeft' : 'ArrowRight', 150, 'faction: focus ' + role.faction);
  }
  // Screenshots can trail the guest; let the pointer settle before measuring it.
  if (screen === 'map') return since >= 1800 ? decideMap(features, memory, profile) : WAIT;
  return WAIT; // black, loading, match start, waiting or unclassified screens
}

// Closed-loop pointer control toward the configured battlefield node.
function decideMap(features, memory, profile) {
  const map = profile.map, cone = features.cone;
  if (!cone) return WAIT;
  if (features.targetLit >= map.lit_min) { memory.nudges = 0; return press('KeyX', 150, 'map: select ' + map.label); }
  const speed = memory.speed || (memory.speed = [...map.speed_per_ms]);
  if (memory.move && memory.move.from) {
    // Learn the pointer speed from the previous held move (bounded update).
    const axis = memory.move.axis, moved = Math.abs((axis ? cone.top : cone.left) - memory.move.from[axis]);
    if (memory.move.hold >= 150 && moved > 0.01) speed[axis] = Math.min(speed[axis] * 2, Math.max(speed[axis] / 2, 0.5 * speed[axis] + 0.5 * moved / memory.move.hold));
  }
  const dx = map.target_left_top[0] - cone.left, dy = map.target_left_top[1] - cone.top;
  let axis, distance;
  if (Math.abs(dx) > map.tolerance[0]) { axis = 0; distance = dx; }
  else if (Math.abs(dy) > map.tolerance[1]) { axis = 1; distance = dy; }
  if (axis === undefined) {
    // On target but the node is not highlighted: bounded small search pattern.
    const pattern = ['ArrowRight', 'ArrowDown', 'ArrowLeft', 'ArrowLeft', 'ArrowUp', 'ArrowUp', 'ArrowRight', 'ArrowRight'];
    const code = pattern[(memory.nudges = (memory.nudges || 0) + 1) % pattern.length];
    memory.move = null;
    return press(code, 50, 'map: nudge near ' + map.label);
  }
  const hold = Math.round(Math.min(2500, Math.max(50, Math.abs(distance) / speed[axis])));
  memory.move = {axis, hold, from: [cone.left, cone.top]};
  const code = axis ? (distance > 0 ? 'ArrowDown' : 'ArrowUp') : (distance > 0 ? 'ArrowRight' : 'ArrowLeft');
  return press(code, hold, 'map: move pointer');
}

// Two-choice prompts: confirm only the wanted option. A pulsing highlight can hide
// the focus for a few polls; prompts that loop back on a wrong answer may then
// be confirmed after one move (blind), others wait for clear focus.
function choose(memory, screen, focus, want, move, label, blind) {
  const state = memory.choice?.screen === screen ? memory.choice : (memory.choice = {screen, moves: 0, unclear: 0});
  if (focus === want) { state.unclear = 0; return press('KeyX', 150, label + ': confirm'); }
  if (focus && state.moves < 3) { state.moves++; state.unclear = 0; return press(move, 150, label + ': move focus'); }
  if (!focus && !state.moves) { state.moves++; return press(move, 150, label + ': move focus (highlight unclear)'); }
  if (!focus && blind && ++state.unclear >= 4) { state.unclear = 0; return press('KeyX', 150, label + ': confirm after move (highlight unclear)'); }
  return WAIT;
}

// After each round: result report, the per-player continue/end panel (cursor starts on
// continue; any confirmed end ends the group; 30 s without a choice also ends it), the
// system-data save prompts and the 戦友登録 prompt. These test cards keep no save data.
function decidePostRound(features, memory, role, profile, now, roundsPerMatch) {
  const screen = features.screen, stable = screen && screen === memory.previous;
  memory.previous = screen;
  if (!screen) { memory.unknownSince ??= now; } else memory.unknownSince = null;
  const since = now - (memory.lastAction || 0);
  if (!stable || since < 1200) return WAIT;
  const wantEnd = (memory.roundsThisMatch || 0) >= roundsPerMatch;
  if (screen === 'result') return since >= 2500 ? press('KeyX', 150, 'result: ordinary confirm') : WAIT;
  if (screen === 'rematch') {
    const own = features.rematch?.[role.faction === 'left' ? 'top' : 'bottom'];
    if (!wantEnd) return own === 'continue' ? press('KeyX', 150, 'rematch: confirm continue') : WAIT;
    // Never confirm while the highlight is unclear: the panel's own timeout ends the match.
    return choose(memory, 'rematch', own === 'end' ? 'end' : own, 'end', 'ArrowRight', 'rematch: end match', false);
  }
  if (screen === 'save-slot') return since >= 2500 ? press('KeyZ', 150, 'save: cancel slot choice') : WAIT;
  if (screen === 'save-end') return choose(memory, screen, features.focus, 'yes', 'ArrowUp', 'save: end without saving', true);
  if (screen === 'save-create') return choose(memory, screen, features.focus, 'no', 'ArrowDown', 'save: do not create', true);
  if (screen === 'friend') return choose(memory, screen, features.focus, 'no', 'ArrowDown', '戦友登録: do not record', true);
  return WAIT;
}

// Simple ordinary battle input: move with the left stick, shoot, boost, melee.
const COMBAT = [
  {codes: ['KeyI', 'KeyA'], hold: 700}, {codes: ['KeyA'], hold: 150}, {codes: ['KeyL', 'KeyZ'], hold: 400},
  {codes: ['KeyS'], hold: 200}, {codes: ['KeyJ', 'KeyA'], hold: 500}, {codes: ['KeyK', 'KeyZ'], hold: 300},
];
function decideCombat(memory) {
  const step = COMBAT[(memory.combat = ((memory.combat ?? -1) + 1)) % COMBAT.length];
  return {kind: 'press', codes: step.codes, hold: step.hold, reason: 'battle: ordinary input'};
}

// Track rounds, matches and lobby returns from the read-only scene record. A match
// is one battle group: its rounds run until the continue/end panel ends it.
function progress(scene, memory, now) {
  const events = [];
  let phase = scene?.mode !== 7 ? 'other' : scene.state === 2 ? (scene.substate === 4 ? 'battle' : 'battle-menu') : scene.state === 1 ? 'lobby' : 'connect';
  if (phase === 'battle-menu' && (memory.postRound || memory.phase === 'battle')) phase = 'post-round';
  if (phase !== memory.phase) {
    events.push({from: memory.phase || null, to: phase});
    if (phase === 'battle') { memory.battlesStarted = (memory.battlesStarted || 0) + 1; memory.postRound = false; }
    if (memory.phase === 'battle') {
      memory.battlesEnded = (memory.battlesEnded || 0) + 1; memory.roundsThisMatch = (memory.roundsThisMatch || 0) + 1;
      if (phase === 'post-round') memory.postRound = true;
    }
    if (phase === 'lobby' && memory.roundsThisMatch) {
      memory.matchesEnded = (memory.matchesEnded || 0) + 1; memory.roundsThisMatch = 0; memory.postRound = false; memory.afterRoom = true;
    }
    memory.phase = phase; memory.phaseSince = now; memory.choice = null; memory.waitingSince = null;
  }
  return {phase, events};
}

function decide(scene, features, memory, role, profile, now, roundsPerMatch = 1) {
  const {phase} = progress(scene, memory, now);
  if (phase === 'lobby') return decideLobby(features, memory, role, profile, now);
  if (phase === 'battle') return decideCombat(memory);
  if (phase === 'post-round') return decidePostRound(features, memory, role, profile, now, roundsPerMatch);
  if (phase === 'battle-menu') return now - (memory.lastAction || 0) >= 3000 ? press('KeyX', 150, 'battle menu: ordinary confirm') : WAIT;
  return WAIT;
}

module.exports = {decide, decideLobby, decidePostRound, decideMap, decideCombat, choose, progress, COMBAT, vision};
