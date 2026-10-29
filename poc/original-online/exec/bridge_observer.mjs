// Explicit diagnostic overlay only. Never install in the default game host.
export function observeBridgeOpen(Module, emit = record => console.log('[original-exec-open] ' + JSON.stringify(record))) {
  const bridge = Module.originalOnlineBridge;
  if (!bridge || typeof bridge.open !== 'function' || bridge.open.originalExecObserved)
    throw new Error('Expected one unobserved original network bridge');
  const original = bridge.open;
  let count = 0;
  function observed(...args) {
    if (count >= 4) return Reflect.apply(original, this, args);
    const [pointer, length, port, timeoutMs] = args;
    const record = {utc: new Date().toISOString(), ordinal: ++count, pointer, length, port, timeoutMs};
    try {
      const heap = Module.HEAPU8;
      record.heapLength = heap.length;
      record.shared = heap.buffer instanceof SharedArrayBuffer;
      record.spanValid = Number.isInteger(pointer) && Number.isInteger(length) && pointer >= 0 && length >= 1 && length <= 253 && pointer <= heap.length - length;
      record.portValid = Number.isInteger(port) && port >= 1 && port <= 65535;
      if (record.spanValid) {
        const bytes = new Uint8Array(heap.subarray(pointer, pointer + length));
        record.addressBytes = [...bytes];
        try { record.address = new TextDecoder('utf-8', {fatal: true}).decode(bytes); }
        catch (error) { record.decodeError = {name: error.name, message: error.message}; }
      }
    } catch (error) { record.observerError = String(error); }
    // Observation must never replace an actual result or suppress a throw.
    const report = () => { try { emit(record); } catch {} };
    let result;
    try { result = Reflect.apply(original, this, args); }
    catch (error) {
      try { record.thrown = {name: error?.name, message: error?.message}; report(); } catch {}
      throw error;
    }
    try { record.result = result; record.lastError = bridge.lastError; report(); } catch {}
    return result;
  }
  Object.defineProperty(observed, 'originalExecObserved', {value: true});
  bridge.open = observed;
}
