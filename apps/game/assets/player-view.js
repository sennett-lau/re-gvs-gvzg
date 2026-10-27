/* Presentation-only crop. Both clients still simulate and render both cameras. */
(function(root, factory) {
  const api = factory();
  if (typeof module === 'object' && module.exports) module.exports = api;
  else root.PS2PlayerView = api;
})(typeof globalThis !== 'undefined' ? globalThis : this, function() {
  function split(scene, owner, preference) {
    return preference !== 'full' && (owner === 0 || owner === 1) && scene?.mode === 4 &&
      scene.stage === 3 && scene.phase === 2 && scene.paused === 0 && scene.initialized === 1 && scene.splitActive === 1 && scene.humanMask === 3 &&
      scene.teamHumansA === 1 && scene.teamHumansB === 1;
  }
  function layout(width, height, ratio, cropped, owner) {
    const visibleRatio = cropped ? ratio / 2 : ratio;
    const visibleWidth = Math.max(1, Math.min(width, height * visibleRatio));
    return {width:visibleWidth, height:visibleWidth / visibleRatio,
      canvasWidth:visibleWidth * (cropped ? 2 : 1), shift:cropped && owner === 1 ? '-50%' : '0%'};
  }
  return {split, layout};
});
