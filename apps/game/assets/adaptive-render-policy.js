/* Pure render-budget policy. It can request video Hz; it never changes input,
 * audio pitch, simulation Hz, emulated cycles or the already-latched phase. */
(function (root, factory) {
  const api = factory();
  if (typeof module === 'object' && module.exports) module.exports = api;
  else root.PS2AdaptiveRenderPolicy = api;
})(typeof globalThis !== 'undefined' ? globalThis : this, function () {
  'use strict';
  const RATES = Object.freeze([60, 72, 80, 90, 100, 110, 120]);
  function create({initialHz = 120, automatic = true, cooldownSamples = 3} = {}) {
    if (!RATES.includes(initialHz)) throw new Error('Unsupported initial rendering rate');
    let targetHz = initialHz, slow = 0, stable = 0, cooldown = 0, decisionCount = 0;
    function resetWindow() { slow = stable = 0; cooldown = cooldownSamples; }
    function observe(sample) {
      const result = (reason, status = 'holding', changed = false) => ({targetHz, simulationHz: 60, changed, reason, status, decisionCount});
      const {guestRate, observedVideoHz, audioQueuedMs, renderBusyPercent, emuIdlePercent} = sample;
      if (sample.visible === false || ![guestRate, observedVideoHz, audioQueuedMs, renderBusyPercent, emuIdlePercent].every(Number.isFinite) ||
          !(sample.spanMs >= 500 && sample.spanMs <= 3000)) {
        resetWindow(); return result('No valid visible timing window', 'waiting');
      }
      if (!automatic) return result('Fixed rendering rate', guestRate < .94 ? 'slow' : 'fixed');
      if (sample.appliedHz !== undefined && sample.appliedHz !== targetHz) return result('Waiting for the next frame boundary', 'pending');
      const overloaded = guestRate < .94 || (sample.audioActive && audioQueuedMs < 20 && guestRate < .98);
      if (cooldown > 0) { --cooldown; slow = stable = 0; return result('Allowing the new rate to settle', overloaded ? 'slow' : 'holding'); }
      slow = overloaded ? slow + 1 : 0;
      if (slow >= 2) {
        slow = stable = 0;
        if (targetHz === 60) return result('Device is below normal speed even at 60 fps', 'slow-at-minimum');
        const capacity = Math.max(60, observedVideoHz * .9);
        const candidates = RATES.filter(rate => rate < targetHz && rate <= capacity);
        targetHz = candidates.length ? candidates[candidates.length - 1] : 60;
        ++decisionCount; cooldown = cooldownSamples;
        return result('Reduced rendering work to recover game and audio speed', 'lowered', true);
      }
      const headroom = guestRate >= .985 && guestRate <= 1.04 && sample.audioActive === true &&
        audioQueuedMs > 50 && renderBusyPercent < 82 && emuIdlePercent > 15;
      stable = headroom ? stable + 1 : 0;
      if (stable >= 5 && targetHz < 120) {
        targetHz = RATES[RATES.indexOf(targetHz) + 1];
        stable = slow = 0; cooldown = cooldownSamples; ++decisionCount;
        return result('Sustained audio and compute headroom; trying one higher step', 'raised', true);
      }
      return result(overloaded ? 'Checking whether the slowdown persists' : headroom ? 'Measuring sustained headroom' : 'Keeping the current rendering budget', overloaded ? 'slow' : 'holding');
    }
    return {observe, resetWindow, snapshot: () => ({targetHz, automatic, slowSamples: slow, stableSamples: stable, cooldown, decisionCount})};
  }
  return {RATES, create};
});
