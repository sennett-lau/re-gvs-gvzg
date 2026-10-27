(function(root) {
  "use strict";
  const fields = [
    ["mode",0,4], ["state",4,4], ["stage",8,5], ["initialized",13,3],
    ["phase",16,4], ["humanMask",20,4], ["paused",24,1],
    ["splitActive",25,1], ["splitPending",26,1], ["menuVariant",27,4],
    ["substate",31,8], ["viewIndex",39,2], ["cameraKind",41,2],
    ["teamHumansA",43,2], ["teamHumansB",45,2], ["configurationValid",47,1]
  ];
  function decode(record) {
    if (!Number.isSafeInteger(record) || record < 0 || record >= 2 ** 48) return null;
    const bits = BigInt(record);
    return Object.fromEntries(fields.map(([name,shift,width]) =>
      [name, Number((bits >> BigInt(shift)) & ((1n << BigInt(width)) - 1n))]));
  }
  const api = Object.freeze({decode, fields});
  if (typeof module === "object" && module.exports) module.exports = api;
  else root.GundamSceneSnapshot = api;
})(globalThis);
