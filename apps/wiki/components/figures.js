export const escapeHtml = (value) =>
  String(value).replace(
    /[&<>"']/g,
    (c) =>
      ({ "&": "&amp;", "<": "&lt;", ">": "&gt;", '"': "&quot;", "'": "&#39;" })[
        c
      ],
  );
const text = (x, y, label, size = 15, fill = "#223c32", anchor = "start") =>
  `<text x="${x}" y="${y}" fill="${fill}" font-size="${size}" text-anchor="${anchor}" font-family="sans-serif">${escapeHtml(label)}</text>`;
const box = (x, y, w, h, label) =>
  `<rect x="${x}" y="${y}" width="${w}" height="${h}" fill="#e9eddf" stroke="#9da995"/>${text(x + w / 2, y + h / 2 + 5, label, 14, "#223c32", "middle")}`;
export function figureSvg(kind, data, state = {}) {
  let body, height;
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
        "#637064",
      ) +
      '<line x1="70" y1="125" x2="650" y2="125" stroke="#9da995" stroke-width="2"/>' +
      '<circle cx="70" cy="125" r="17" fill="#f7f4ed" stroke="#223c32"/><circle cx="650" cy="125" r="17" fill="#f7f4ed" stroke="#223c32"/>' +
      `<circle cx="${70 + 580 * sample}" cy="125" r="11" fill="#b34f2c"/>` +
      text(
        70,
        170,
        `Previous: ${data.previous_position}`,
        13,
        "#637064",
        "middle",
      ) +
      text(
        650,
        170,
        `Current: ${data.current_position}`,
        13,
        "#637064",
        "middle",
      ) +
      text(
        360,
        205,
        `Render sample: ${(data.previous_position + (data.current_position - data.previous_position) * sample).toFixed(2)} units`,
        14,
        "#b34f2c",
        "middle",
      );
  } else {
    const route =
      data.routes.find((r) => r.id === state.route) || data.routes[0];
    height = 270;
    body =
      text(30, 30, data.title, 21) +
      text(30, 58, route.transport, 13, "#637064") +
      box(200, 85, 320, 58, route.center) +
      box(20, 195, 300, 48, route.left) +
      box(400, 195, 300, 48, route.right) +
      '<path d="M280 143 L170 190 M440 143 L550 190" fill="none" stroke="#b34f2c" stroke-width="2"/>' +
      text(360, 177, "↕", 24, "#b34f2c", "middle");
  }
  return `<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 720 ${height}" role="img" aria-label="${escapeHtml(data.title)}"><title>${escapeHtml(data.title)}</title><desc>${escapeHtml(data.caption)}</desc>${body}</svg>`;
}
