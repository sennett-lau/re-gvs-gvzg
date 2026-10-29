// Keep the original ring consumer running. Silence is applied at the browser
// output (--mute-audio), not by suspending AudioContext or changing system volume.
class Output extends AudioWorkletProcessor {
  constructor(options) {
    super();
    const {buffer, base} = options.processorOptions;
    this.ring = new Uint32Array(buffer, base, 4);
    this.samples = new Int16Array(buffer, base + 16, this.ring[2] * 2);
    this.left = this.right = 0;
  }
  process(inputs, outputs) {
    const left = outputs[0][0], right = outputs[0][1];
    const write = Atomics.load(this.ring, 0), mask = this.ring[2] - 1;
    let read = Atomics.load(this.ring, 1);
    for (let i = 0; i < left.length; ++i) {
      if (read !== write) {
        const at = (read & mask) * 2;
        this.left = this.samples[at] / 32768; this.right = this.samples[at + 1] / 32768;
        read = (read + 1) >>> 0;
      } else { this.left *= 0.995; this.right *= 0.995; }
      left[i] = this.left; right[i] = this.right;
    }
    Atomics.store(this.ring, 1, read); Atomics.store(this.ring, 3, 1);
    return true;
  }
}
registerProcessor('original-exec-output', Output);
