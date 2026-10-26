export const escapeHtml = (value) =>
  String(value).replace(
    /[&<>"']/g,
    (c) =>
      ({ "&": "&amp;", "<": "&lt;", ">": "&gt;", '"': "&quot;", "'": "&#39;" })[
        c
      ],
  );
const text = (
  x,
  y,
  label,
  size = 15,
  fill = "var(--diagram-ink, #223c32)",
  anchor = "start",
) =>
  `<text x="${x}" y="${y}" fill="${fill}" font-size="${size}" text-anchor="${anchor}" font-family="sans-serif">${escapeHtml(label)}</text>`;
const box = (x, y, w, h, label) =>
  `<rect x="${x}" y="${y}" width="${w}" height="${h}" fill="var(--diagram-panel, #e9eddf)" stroke="var(--diagram-line, #9da995)"/>${text(x + w / 2, y + h / 2 + 5, label, 14, "var(--diagram-ink, #223c32)", "middle")}`;
export function figureSvg(kind, data, state = {}) {
  let body, height;
  if (kind === "build-pipeline") {
    const nodes = data.steps.map((step, i) => {
      const y = 70 + i * 92;
      return box(24, y, 372, 65, `${i + 1}. ${step.node}`) +
        text(210, y + 53, step.artifact, 13, "var(--diagram-muted, #637064)", "middle") +
        (i < data.steps.length - 1 ? text(210, y + 86, "↓", 22, "var(--diagram-accent, #b34f2c)", "middle") : "");
    }).join("");
    return `<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 420 540" role="img" aria-label="${escapeHtml(data.title)}"><title>${escapeHtml(data.title)}</title><desc>${escapeHtml(data.caption)}</desc><rect width="420" height="540" fill="var(--diagram-paper, #fcfcf8)"/>${text(24, 35, "Disc → C++ → browser", 23)}${nodes}</svg>`;
  }
  if (kind === "lockstep-gate") {
    return `<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 420 400" role="img" aria-label="${escapeHtml(data.title)}"><title>${escapeHtml(data.title)}</title><desc>${escapeHtml(data.caption)}</desc><rect width="420" height="400" fill="var(--diagram-paper, #fcfcf8)"/>${text(24, 34, "Both games need the input pair", 21)}${box(24, 65, 174, 50, "P1 input")}${box(222, 65, 174, 50, "P2 input")}<path d="M111 115L210 160L309 115" fill="none" stroke="var(--diagram-accent, #b34f2c)" stroke-width="2"/>${box(74, 160, 272, 52, "Shared P1 + P2 pair")}${text(210, 245, "Missing input → wait", 17, "var(--diagram-ink, #223c32)", "middle")}${text(210, 277, "Pair ready → advance locally", 17, "var(--diagram-ink, #223c32)", "middle")}${text(210, 322, "Later: compare checkpoint hashes", 16, "var(--diagram-muted, #637064)", "middle")}${text(210, 355, "Different hashes → stop", 17, "var(--diagram-accent, #b34f2c)", "middle")}</svg>`;
  }
  if (kind === "render-clock") {
    const phase = state.phase ?? data.default_phase;
    const interpolated = state.interpolate !== false;
    const sample = interpolated ? phase : phase < 1 ? 0 : 1;
    height = 230;
    body =
      text(30, 30, data.title, 21) +
      text(
        30,
        58,
        `Gameplay: ${data.simulation_hz} Hz · retained previous/current state`,
        12,
        "var(--diagram-muted, #637064)",
      ) +
      '<line x1="70" y1="125" x2="650" y2="125" stroke="var(--diagram-line, #9da995)" stroke-width="2"/>' +
      '<circle cx="70" cy="125" r="17" fill="var(--diagram-node, #f7f4ed)" stroke="var(--diagram-ink, #223c32)"/><circle cx="650" cy="125" r="17" fill="var(--diagram-node, #f7f4ed)" stroke="var(--diagram-ink, #223c32)"/>' +
      `<circle cx="${70 + 580 * sample}" cy="125" r="11" fill="var(--diagram-accent, #b34f2c)"/>` +
      text(
        70,
        170,
        `Previous: ${data.previous_position}`,
        13,
        "var(--diagram-muted, #637064)",
        "middle",
      ) +
      text(
        650,
        170,
        `Current: ${data.current_position}`,
        13,
        "var(--diagram-muted, #637064)",
        "middle",
      ) +
      text(
        360,
        205,
        `Render sample: ${(data.previous_position + (data.current_position - data.previous_position) * sample).toFixed(2)} units`,
        14,
        "var(--diagram-accent, #b34f2c)",
        "middle",
      );
  } else {
    const route =
      data.routes.find((r) => r.id === state.route) || data.routes[0];
    height = 270;
    body =
      text(30, 30, data.title, 21) +
      text(30, 58, route.transport, 13, "var(--diagram-muted, #637064)") +
      box(200, 85, 320, 58, route.center) +
      box(20, 195, 300, 48, route.left) +
      box(400, 195, 300, 48, route.right) +
      '<path d="M280 143 L170 190 M440 143 L550 190" fill="none" stroke="var(--diagram-accent, #b34f2c)" stroke-width="2"/>' +
      text(360, 177, "↕", 24, "var(--diagram-accent, #b34f2c)", "middle");
  }
  return `<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 720 ${height}" role="img" aria-label="${escapeHtml(data.title)}"><title>${escapeHtml(data.title)}</title><desc>${escapeHtml(data.caption)}</desc><rect width="720" height="${height}" fill="var(--diagram-paper, #fcfcf8)"/>${body}</svg>`;
}

export const motionKinds = ["build-pipeline", "multiplayer-routes", "lockstep-gate"];

// Shared by the static reader and the optional step player. Explanatory content
// lives in docs/figures/*.json; the renderer only supplies layout and state.
export function figureMarkup(kind, data, state = {}) {
  if (!motionKinds.includes(kind)) return figureSvg(kind, data, state);
  const variant = kind === "multiplayer-routes"
    ? data.routes.find(r => r.id === state.variant) || data.routes[0]
    : kind === "lockstep-gate"
      ? data.scenarios.find(r => r.id === state.variant) || data.scenarios[0]
      : data;
  const index = state.step ?? 0;
  const step = variant.steps[index];
  const heading = `<div class="motion-heading"><span class="motion-counter">${String(index + 1).padStart(2, "0")} / ${String(variant.steps.length).padStart(2, "0")}</span><strong>${escapeHtml(data.title)}</strong></div>`;
  if (kind === "build-pipeline") {
    return heading + `<ol class="pipeline-map">${data.steps.map((item, i) => `<li class="${i === index ? "is-current" : i < index ? "is-past" : ""}"><span class="pipeline-index" aria-hidden="true">${i + 1}</span><div><strong>${escapeHtml(item.node)}</strong><span>${escapeHtml(item.artifact)}</span></div>${i > 0 ? `<span class="pipeline-connector" aria-hidden="true">↓${i === index && state.playing ? '<i class="pipeline-packet"></i>' : ''}</span>` : ''}</li>`).join("")}</ol>`;
  }
  const lockstep = kind === "lockstep-gate";
  const card = (label, detail, active, extra = "") => `<div class="network-node ${active ? "is-current" : ""}"><strong>${escapeHtml(label)}</strong><span>${escapeHtml(detail)}</span>${extra}</div>`;
  const tick = lockstep ? `<span class="network-tick">Tick: ${escapeHtml(step.tick)}</span>` : "";
  const center = lockstep ? card("Input relay + checkpoint gate", step.pair, true) : card(variant.center, step.label, step.active === "host");
  const left = lockstep ? card("Device 1 · local game", step.p1, step.status === "Both copies compute", tick) : card(variant.left, variant.id === "streaming" ? "Decode media · send controls" : "Execute game · send inputs", step.active === "clients");
  const right = lockstep ? card("Device 2 · local game", step.p2, step.status === "Both copies compute", tick) : card(variant.right, variant.id === "streaming" ? "Decode media · send controls" : "Execute game · send inputs", step.active === "clients");
  const up = step.flow === "up" || step.flow === "up-one";
  const paths = up ? ["M180 100L360 0", "M540 100L360 0"] : ["M360 0L180 100", "M360 0L540 100"];
  const activePaths = step.flow === "none" ? [] : step.flow === "up-one" ? paths.slice(0, 1) : paths;
  const wires = `<svg class="network-wires" viewBox="0 0 720 110" aria-hidden="true"><path d="M180 100L360 0L540 100" class="wire-base"/>${activePaths.map(path => `<path d="${path}" class="wire-active"/>${state.playing ? `<circle r="7" class="network-packet"><animateMotion dur="1.2s" repeatCount="1" fill="freeze" path="${path}"/></circle>` : ""}`).join("")}</svg>`;
  const transport = lockstep ? step.status : variant.transport;
  return heading + `<div class="network-map ${step.stopped ? "is-stopped" : ""}"><div class="network-center">${center}</div>${wires}<div class="network-clients">${left}${right}</div><p class="network-status">${escapeHtml(transport)}</p></div>`;
}
