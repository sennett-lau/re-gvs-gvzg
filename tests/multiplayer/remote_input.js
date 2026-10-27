const test = require('node:test');
const assert = require('node:assert/strict');
const {readPad, gamepad, neutral, mapping} = require('../../apps/game/assets/remote-common.js');

test('remote input rejects malformed and out-of-range controller packets', () => {
  for (const packet of [null, {}, [0], [0,128,128,128,NaN], [65536,128,128,128,128], [0,-1,128,128,128], [0,1.5,128,128,128]]) assert.equal(readPad(packet), null);
  assert.deepEqual(readPad(neutral), neutral);
});
test('each PS2 button maps to the expected browser gamepad control', () => {
  for (const [index,bit] of mapping) {
    const pad = gamepad([1 << bit,128,128,128,128]);
    assert.equal(pad.buttons[index].pressed, true);
    assert.equal(pad.buttons.filter(button => button.pressed).length, 1);
  }
});
test('neutral input releases every button and centers all sticks', () => {
  const pad = gamepad(neutral);
  assert.equal(pad.buttons.some(button => button.pressed), false);
  assert.deepEqual(pad.axes, [0,0,0,0]);
  assert.deepEqual(gamepad([0,0,255,0,255]).axes, [-1,1,-1,1]);
});
