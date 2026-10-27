(function (root) {
  'use strict';
  const mapping = [[0,14],[1,13],[2,15],[3,12],[4,10],[5,11],[6,8],[7,9],[8,0],[9,3],[10,1],[11,2],[12,4],[13,6],[14,7],[15,5]];
  function readPad(value) {
    if (!Array.isArray(value) || value.length !== 5 || value.some(x => !Number.isInteger(x))) return null;
    if (value[0] < 0 || value[0] > 65535 || value.slice(1).some(x => x < 0 || x > 255)) return null;
    return value;
  }
  function gamepad(value) {
    const buttons = Array.from({length: 16}, () => ({pressed: false, value: 0}));
    for (const [index, bit] of mapping) if (value[0] & (1 << bit)) buttons[index] = {pressed: true, value: 1};
    return {buttons, axes: value.slice(1).map(x => x === 128 ? 0 : x / 127.5 - 1)};
  }
  async function api(action, data, keepalive = false) {
    const controller = new AbortController();
    const timer = setTimeout(() => controller.abort(), 30000);
    try {
      const response = await fetch('/remote-api/' + action, {method: 'POST', headers: {'Content-Type': 'application/json'},
        body: JSON.stringify(data), signal: controller.signal, keepalive});
      const value = await response.json();
      if (!response.ok || value.error) throw new Error(value.error || 'Connection failed');
      return value;
    } finally { clearTimeout(timer); }
  }
  const apiObject = {mapping, readPad, gamepad, api, neutral: [0,128,128,128,128]};
  if (typeof module === 'object' && module.exports) module.exports = apiObject;
  else root.PS2Remote = apiObject;
})(globalThis);
