const test = require('node:test');
const assert = require('node:assert/strict');
const view = require('../../apps/game/assets/player-view.js');
const battle = {mode:4, stage:3, phase:2, paused:0, initialized:1, splitActive:1, humanMask:3, teamHumansA:1, teamHumansB:1};
test('own-player crop requires the two-human opposing-side Versus scene', () => {
  for (const owner of [0,1]) assert.equal(view.split(battle, owner), true);
  for (const patch of [{mode:2},{stage:0},{phase:3},{paused:1},{initialized:0},{splitActive:0},{humanMask:1},{teamHumansA:2}])
    assert.equal(view.split({...battle,...patch},0), false);
  assert.equal(view.split(battle,undefined),false);
  assert.equal(view.split(battle,0,'full'),false);
  assert.equal(view.split(null,0),false);
});
test('player crops use opposite halves without changing the full camera aspect', () => {
  for (const [width,height] of [[390,700],[1280,720]]) {
    const a=view.layout(width,height,4/3,true,0), b=view.layout(width,height,4/3,true,1);
    assert.ok(a.width<=width && a.height<=height);
    assert.equal(a.canvasWidth/a.height,4/3);
    assert.equal(a.shift,'0%'); assert.equal(b.shift,'-50%');
    assert.equal(a.canvasWidth,b.canvasWidth);
  }
});
