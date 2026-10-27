const test = require('node:test'), assert = require('node:assert/strict');
const fs = require('node:fs'), vm = require('node:vm'), path = require('node:path');
const shell = fs.readFileSync(path.join(__dirname,'../../apps/game/shell.html'),'utf8');
const source = shell.slice(shell.indexOf('function pollInput() {'), shell.indexOf('// some browsers cannot show a canvas'));
test('a host dialog suppresses local controls while preserving the remote player', () => {
  const remote = {id:'remote-player-2'}, local = {id:'local-held-gamepad'};
  const calls = [], keys = new Set(['KeyX']);
  const context = {Module:{multiplayerInputBlocked:true,remotePads:[null,{gamepad:remote,lastSeen:100}]},
    keys,navigator:{getGamepads:()=>[local]},performance:{now:()=>100},
    PS2Remote:{neutral:[0,128,128,128,128],gamepad:()=>({id:'neutral'})},
    pollPlayer:(port,pad,own)=>calls.push({port,pad,own})};
  vm.runInNewContext(source+'\npollInput();',context);
  assert.equal(keys.size,0);
  assert.equal(calls[0].pad,null); assert.equal(calls[0].own,true);
  assert.equal(calls[1].pad,remote); assert.equal(calls[1].own,false);
});
