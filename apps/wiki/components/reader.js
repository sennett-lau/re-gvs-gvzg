import { figureSvg, escapeHtml } from "./figures.js";
const menu = document.querySelector("[data-chapter-menu]");
if (menu) {
  const wide = matchMedia("(min-width: 661px)");
  const sync = () => {
    menu.open = wide.matches;
  };
  sync();
  wide.addEventListener("change", sync);
}
for (const figure of document.querySelectorAll("figure[data-interactive]")) {
  try {
    const kind = figure.dataset.interactive;
    const data = JSON.parse(
      figure.querySelector('script[type="application/json"]').textContent,
    );
    const graphic = figure.querySelector(".figure-graphic");
    const controls = document.createElement("div");
    controls.className = "interactive-controls";
    if (kind === "render-clock") {
      controls.innerHTML = `<div class="control-row"><label for="pose-phase">Move between gameplay updates</label><input id="pose-phase" type="range" min="0" max="100" value="${data.default_phase * 100}" step="1"></div><div class="control-row" role="group" aria-label="Rendering technique"><button type="button" data-interpolate="yes" aria-pressed="true">Interpolate poses</button><button type="button" data-interpolate="no" aria-pressed="false">Repeat the previous pose</button></div><div class="control-row"><label for="render-target">Explore a render budget</label><select id="render-target">${data.render_choices_hz.map((rate) => `<option value="${rate}" ${rate === data.default_render_hz ? "selected" : ""}>${rate} Hz${data.unimplemented_render_choices_hz.includes(rate) ? " — hypothetical" : ""}</option>`).join("")}</select></div><output class="figure-output" aria-live="polite"></output><p class="concept-warning">Conceptual positions, not captured game motion. The 144-Hz choice illustrates a budget only; it is not an implemented or validated build.</p>`;
      let interpolate = true;
      const update = () => {
        const phase = Number(controls.querySelector("input").value) / 100;
        const rate = Number(controls.querySelector("select").value);
        graphic.innerHTML = figureSvg(kind, data, { phase, interpolate });
        controls.querySelector("output").textContent =
          `Phase ${phase.toFixed(2)} · gameplay step ${(1000 / data.simulation_hz).toFixed(2)} ms · render budget ${(1000 / rate).toFixed(2)} ms`;
      };
      controls.querySelector("input").addEventListener("input", update);
      controls.querySelector("select").addEventListener("change", update);
      for (const button of controls.querySelectorAll("button"))
        button.addEventListener("click", () => {
          interpolate = button.dataset.interpolate === "yes";
          for (const peer of controls.querySelectorAll("button"))
            peer.setAttribute("aria-pressed", String(peer === button));
          update();
        });
      update();
    } else if (kind === "multiplayer-routes") {
      controls.innerHTML = `<div class="control-row" role="group" aria-label="Multiplayer architecture">${data.routes.map((r, i) => `<button type="button" data-route="${r.id}" aria-pressed="${i === 0}">${escapeHtml(r.label)}</button>`).join("")}</div><output class="figure-output" aria-live="polite">${escapeHtml(data.routes[0].cost)}</output>`;
      for (const button of controls.querySelectorAll("button"))
        button.addEventListener("click", () => {
          const route = data.routes.find((r) => r.id === button.dataset.route);
          graphic.innerHTML = figureSvg(kind, data, { route: route.id });
          controls.querySelector("output").textContent = route.cost;
          for (const peer of controls.querySelectorAll("button"))
            peer.setAttribute("aria-pressed", String(peer === button));
        });
    } else continue;
    figure.querySelector("figcaption").before(controls);
  } catch (error) {
    // The pre-rendered illustration and complete article remain available.
    console.warn("Optional illustration unavailable:", error.message);
  }
}
