// Small browser-independent helpers, also exercised by the Node regression tests.
(function (root) {
  'use strict';
  async function withTimeout(task, ms, message, onTimeout = () => {}) {
    let timer;
    try {
      return await Promise.race([Promise.resolve().then(task), new Promise((_, reject) => {
        timer = setTimeout(() => { reject(new Error(message)); onTimeout(); }, ms);
      })]);
    } finally { clearTimeout(timer); }
  }

  async function readDiscRange(url, offset, size, options = {}) {
    const controller = new AbortController();
    const fetcher = options.fetch || fetch;
    return withTimeout(async () => {
      const response = await fetcher(url, {
        headers: { Range: 'bytes=' + offset + '-' + (offset + size - 1) },
        signal: controller.signal,
      });
      // A proxy ignoring Range could otherwise buffer the entire multi-GB ISO.
      const range = /^bytes (\d+)-(\d+)\/(\d+)$/.exec(response.headers.get('content-range') || '');
      if (response.status !== 206 || !range || Number(range[1]) !== offset || Number(range[2]) !== offset + size - 1) {
        if (response.body) response.body.cancel().catch(() => {});
        throw new Error('Disc server returned an invalid byte range (HTTP ' + response.status + ')');
      }
      const bytes = new Uint8Array(await response.arrayBuffer());
      if (bytes.length !== size) throw new Error('Incomplete disc read: ' + bytes.length + '/' + size + ' bytes');
      return bytes;
    }, options.timeoutMs || 15000, 'Disc request timed out; retrying', () => controller.abort());
  }

  function canvasSize(width, height, pixelRatio, mobile, maxWidth = 480) {
    const ratio = mobile ? Math.min(1, maxWidth / Math.max(1, width)) : Math.min(pixelRatio || 1, 2);
    return [Math.max(1, Math.round(width * ratio)), Math.max(1, Math.round(height * ratio))];
  }
  function mobileModeEnabled(params, navigator, coarsePointer) {
    const override = params.get('mobile');
    if (override === '0' || override === '1') return override === '1';
    // Touch-first devices can advertise a desktop user agent. Prefer a bounded
    // surface there, while leaving mouse-first touch laptops at desktop detail.
    return Boolean(navigator.userAgentData?.mobile ||
      /Android|iPhone|iPad|iPod/i.test(navigator.userAgent || '') || coarsePointer ||
      (navigator.platform === 'MacIntel' && navigator.maxTouchPoints > 1));
  }
  const api = { withTimeout, readDiscRange, canvasSize, mobileModeEnabled };
  if (typeof module === 'object' && module.exports) module.exports = api;
  else root.PS2WebSupport = api;
})(globalThis);
