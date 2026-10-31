// Read-only screenshot features for the original Online autopilot. Inputs are
// PNG screenshots of the game canvas; nothing here reads or writes guest state.
const zlib = require('node:zlib');

function decodePNG(buffer) {
  if (!Buffer.isBuffer(buffer) || buffer.readUInt32BE(0) !== 0x89504e47 || buffer.readUInt32BE(4) !== 0x0d0a1a0a) throw Error('Not a PNG');
  let offset = 8, width, height, depth, type, interlace;
  const data = [];
  while (offset < buffer.length) {
    const length = buffer.readUInt32BE(offset), kind = buffer.toString('latin1', offset + 4, offset + 8);
    const body = buffer.subarray(offset + 8, offset + 8 + length);
    if (kind === 'IHDR') { width = body.readUInt32BE(0); height = body.readUInt32BE(4); depth = body[8]; type = body[9]; interlace = body[12]; }
    else if (kind === 'IDAT') data.push(body);
    else if (kind === 'IEND') break;
    offset += 12 + length;
  }
  const channels = {2: 3, 6: 4}[type];
  if (depth !== 8 || !channels || interlace !== 0) throw Error('Unsupported PNG layout');
  const raw = zlib.inflateSync(Buffer.concat(data)), stride = width * channels;
  if (raw.length !== (stride + 1) * height) throw Error('Truncated PNG data');
  const rgba = new Uint8Array(width * height * 4), previous = new Uint8Array(stride), line = new Uint8Array(stride);
  for (let y = 0; y < height; y++) {
    const filter = raw[y * (stride + 1)], source = raw.subarray(y * (stride + 1) + 1, (y + 1) * (stride + 1));
    for (let x = 0; x < stride; x++) {
      const a = x >= channels ? line[x - channels] : 0, b = previous[x], c = x >= channels ? previous[x - channels] : 0;
      let value = source[x];
      if (filter === 1) value += a;
      else if (filter === 2) value += b;
      else if (filter === 3) value += (a + b) >> 1;
      else if (filter === 4) { const p = a + b - c, pa = Math.abs(p - a), pb = Math.abs(p - b), pc = Math.abs(p - c); value += pa <= pb && pa <= pc ? a : pb <= pc ? b : c; }
      else if (filter !== 0) throw Error('Invalid PNG filter');
      line[x] = value & 255;
    }
    for (let x = 0; x < width; x++) {
      const target = (y * width + x) * 4;
      rgba[target] = line[x * channels]; rgba[target + 1] = line[x * channels + 1]; rgba[target + 2] = line[x * channels + 2];
      rgba[target + 3] = channels === 4 ? line[x * channels + 3] : 255;
    }
    previous.set(line);
  }
  return {width, height, data: rgba};
}

// Box-average grayscale grid (ITU-R 601 luma), matching the reference builder.
function thumbnail(image, columns = 32, rows = 24) {
  const out = new Array(columns * rows);
  for (let i = 0; i < rows; i++) {
    const y0 = Math.floor(i * image.height / rows), y1 = Math.floor((i + 1) * image.height / rows);
    for (let j = 0; j < columns; j++) {
      const x0 = Math.floor(j * image.width / columns), x1 = Math.floor((j + 1) * image.width / columns);
      let sum = 0;
      for (let y = y0; y < y1; y++) for (let x = x0; x < x1; x++) {
        const p = (y * image.width + x) * 4;
        sum += (image.data[p] * 299 + image.data[p + 1] * 587 + image.data[p + 2] * 114) / 1000;
      }
      out[i * columns + j] = sum / Math.max(1, (y1 - y0) * (x1 - x0));
    }
  }
  return out;
}

function count(image, box, predicate) {
  const x0 = Math.floor(box[0] * image.width), y0 = Math.floor(box[1] * image.height);
  const x1 = Math.ceil(box[2] * image.width), y1 = Math.ceil(box[3] * image.height);
  let hits = 0, total = 0;
  for (let y = Math.max(0, y0); y < Math.min(image.height, y1); y++) for (let x = Math.max(0, x0); x < Math.min(image.width, x1); x++) {
    const p = (y * image.width + x) * 4; total++;
    if (predicate(image.data[p], image.data[p + 1], image.data[p + 2])) hits++;
  }
  return {hits, total, fraction: total ? hits / total : 0};
}
const isCyan = (r, g, b) => r < 90 && g > 170 && b > 190;
const isRed = (r, g, b) => r > 150 && g < 150 && b < 150;
const isCone = (r, g, b) => r < 40 && g > 190 && b > 230;
// Focused menu items pulse between bright cyan and a dim teal tint.
const isTeal = (r, g, b) => g - r > 25 && b - r > 30;

// The original map pointer is a saturated cyan cone; returns its normalized bbox.
function cone(image) {
  let minX = Infinity, minY = Infinity, maxX = -1, maxY = -1, hits = 0;
  for (let y = 0; y < image.height; y++) for (let x = 0; x < image.width; x++) {
    const p = (y * image.width + x) * 4;
    if (!isCone(image.data[p], image.data[p + 1], image.data[p + 2])) continue;
    hits++; if (x < minX) minX = x; if (y < minY) minY = y; if (x > maxX) maxX = x; if (y > maxY) maxY = y;
  }
  const area = hits / (image.width * image.height);
  // Expected cone: about 0.05% of the canvas, within a small box.
  if (area < 0.00025 || area > 0.0012 || (maxX - minX) / image.width > 0.05 || (maxY - minY) / image.height > 0.07) return null;
  return {left: minX / image.width, top: minY / image.height, right: maxX / image.width, bottom: maxY / image.height, area};
}

function meanLuma(values) { return values.reduce((a, b) => a + b, 0) / values.length; }

// Nearest labelled reference thumbnail by mean absolute difference.
function classify(values, references, limit) {
  let best = {label: null, distance: Infinity}, second = {label: null, distance: Infinity};
  for (const [label, items] of Object.entries(references)) for (const item of items) {
    let total = 0;
    for (let i = 0; i < values.length; i++) total += Math.abs(values[i] - item[i]);
    const distance = total / values.length;
    if (distance < best.distance) { if (best.label !== label) second = best; best = {label, distance}; }
    else if (distance < second.distance && label !== best.label) second = {label, distance};
  }
  return {label: best.distance <= limit ? best.label : null, nearest: best.label, distance: best.distance, second: second.label, secondDistance: second.distance};
}

function features(image, profile) {
  const values = thumbnail(image, profile.grid[0], profile.grid[1]);
  const result = {mean: meanLuma(values), match: classify(values, profile.references, profile.limit)};
  if (result.mean < profile.black) result.screen = 'black';
  else result.screen = result.match.label;
  const regions = profile.regions;
  if (result.screen === 'room' || result.screen === 'waiting') {
    const upper = count(image, regions.room_upper, isCyan).fraction, lower = count(image, regions.room_lower, isCyan).fraction;
    result.focus = upper > regions.focus_min && upper > lower * 2 ? 'upper' : lower > regions.focus_min && lower > upper * 2 ? 'lower' : null;
    // The waiting box has no cyan focus; a focused room menu always has one.
    result.screen = result.focus ? 'room' : 'waiting';
  }
  if (result.screen === 'faction') {
    const left = count(image, regions.faction_left, isCyan).fraction, right = count(image, regions.faction_right, isCyan).fraction;
    result.focus = left > regions.focus_min && left > right * 2 ? 'left' : right > regions.focus_min && right > left * 2 ? 'right' : null;
  }
  // Two-choice focus: a choice counts only when clearly brighter than the other.
  const pick = (first, second, names) => {
    const a = count(image, first, isTeal).fraction, b = count(image, second, isTeal).fraction;
    return a >= regions.choice_min && a > b * 2 ? names[0] : b >= regions.choice_min && b > a * 2 ? names[1] : null;
  };
  if (['save-end', 'save-create', 'friend'].includes(result.screen)) result.focus = pick(regions.choice_yes, regions.choice_no, ['yes', 'no']);
  if (result.screen === 'after-room') result.focus = pick(regions.after_upper, regions.after_lower, ['upper', 'lower']);
  if (result.screen === 'rematch') result.rematch = {
    top: pick(regions.rematch_top_continue, regions.rematch_top_end, ['continue', 'end']),
    bottom: pick(regions.rematch_bottom_continue, regions.rematch_bottom_end, ['continue', 'end'])};
  if (result.screen === 'map') {
    result.cone = cone(image);
    result.targetLit = count(image, regions.target_label, isRed).fraction;
  }
  return result;
}

module.exports = {decodePNG, thumbnail, count, cone, classify, features, isCyan, isRed, isCone, isTeal};
