import { figureSvg, motionKinds } from "./figures.js";
import { initMotionFigure } from "./motion.js";
const menu = document.querySelector("[data-chapter-menu]");
if (menu) {
  const wide = matchMedia("(min-width: 981px)");
  const sync = () => {
    menu.open = wide.matches;
  };
  sync();
  wide.addEventListener("change", sync);
}
const outlineLinks = [...document.querySelectorAll(".page-outline a")];
const headings = outlineLinks
  .map((link) =>
    document.getElementById(decodeURIComponent(link.hash.slice(1))),
  )
  .filter(Boolean);
const progress = document.querySelector(".reading-progress span");
let queued = false;
function updateReadingPosition() {
  const headerHeight = document
    .querySelector(".masthead")
    .getBoundingClientRect().height;
  const offset = headerHeight + (innerWidth <= 980 ? 110 : 47);
  const current = [...headings]
    .reverse()
    .find((heading) => heading.getBoundingClientRect().top <= offset);
  for (const link of outlineLinks) {
    if (current && link.hash === "#" + current.id)
      link.setAttribute("aria-current", "location");
    else link.removeAttribute("aria-current");
  }
  if (progress) {
    const available = document.documentElement.scrollHeight - innerHeight;
    const fraction =
      available > 0 ? Math.max(0, Math.min(1, scrollY / available)) : 0;
    progress.style.transform = `scaleX(${fraction})`;
  }
  queued = false;
}
function scheduleReadingUpdate() {
  if (!queued) {
    queued = true;
    requestAnimationFrame(updateReadingPosition);
  }
}
addEventListener("scroll", scheduleReadingUpdate, { passive: true });
addEventListener("resize", scheduleReadingUpdate);
updateReadingPosition();
for (const figure of document.querySelectorAll("figure[data-interactive]")) {
  try {
    const kind = figure.dataset.interactive;
    const data = JSON.parse(
      figure.querySelector('script[type="application/json"]').textContent,
    );
    const graphic = figure.querySelector(".figure-graphic");
    if (motionKinds.includes(kind)) {
      initMotionFigure(figure, kind, data);
      continue;
    }
    const controls = document.createElement("div");
    controls.className = "interactive-controls";
    if (kind === "render-clock") {
      controls.innerHTML = `<div class="control-row"><label for="pose-phase">Move between gameplay updates</label><input id="pose-phase" type="range" min="0" max="100" value="${data.default_phase * 100}" step="1"></div><div class="control-row" role="group" aria-label="Rendering technique"><button type="button" data-interpolate="yes" aria-pressed="true">Interpolate poses</button><button type="button" data-interpolate="no" aria-pressed="false">Repeat the previous pose</button></div><div class="control-row"><label for="render-target">Explore a render budget</label><select id="render-target">${data.render_choices_hz.map((rate) => `<option value="${rate}" ${rate === data.default_render_hz ? "selected" : ""}>${rate} Hz${data.unimplemented_render_choices_hz.includes(rate) ? " — hypothetical" : ""}</option>`).join("")}</select></div><div class="control-row"><button type="button" data-motion-play>Play motion</button><span class="motion-preference">Slowed illustration · not a game capture</span></div><output class="figure-output" aria-live="polite"></output><p class="concept-warning">Conceptual positions, not captured game motion. The 144-Hz choice illustrates a budget only; it is not an implemented or validated build.</p>`;
      let interpolate = true;
      const update = () => {
        const phase = Number(controls.querySelector("input").value) / 100;
        const rate = Number(controls.querySelector("select").value);
        graphic.innerHTML = figureSvg(kind, data, { phase, interpolate });
        controls.querySelector("output").textContent =
          `Phase ${phase.toFixed(2)} · gameplay step ${(1000 / data.simulation_hz).toFixed(2)} ms · render budget ${(1000 / rate).toFixed(2)} ms`;
      };
      const motion = controls.querySelector('[data-motion-play]');
      const reduced = matchMedia('(prefers-reduced-motion: reduce)');
      let animation = null;
      let running = false;
      let startTime = 0;
      const stopMotion = () => {
        cancelAnimationFrame(animation);
        animation = null;
        running = false;
        motion.textContent = 'Play motion';
        controls.querySelector('output').setAttribute('aria-live', 'polite');
        figure.dataset.playing = 'false';
      };
      const drawMotion = now => {
        if (!running) return;
        const phase = Math.min(1, (now - startTime) / 4000);
        controls.querySelector('input').value = String(Math.round(phase * 100));
        update();
        if (phase < 1) animation = requestAnimationFrame(drawMotion);
        else stopMotion();
      };
      motion.addEventListener('click', () => {
        if (reduced.matches) return;
        if (running) { stopMotion(); return; }
        const current = Number(controls.querySelector('input').value) / 100;
        startTime = performance.now() - (current < 1 ? current : 0) * 4000;
        running = true;
        figure.dataset.playing = 'true';
        motion.textContent = 'Pause motion';
        controls.querySelector('output').setAttribute('aria-live', 'off');
        animation = requestAnimationFrame(drawMotion);
      });
      const motionPreference = () => {
        stopMotion();
        motion.disabled = reduced.matches;
        controls.querySelector('.motion-preference').textContent = reduced.matches
          ? 'Reduced motion: move the slider manually.' : 'Slowed illustration · not a game capture';
      };
      reduced.addEventListener('change', motionPreference);
      motionPreference();
      document.addEventListener('visibilitychange', () => {if (document.hidden) stopMotion();});
      addEventListener('pagehide', stopMotion);
      if ('IntersectionObserver' in window) new IntersectionObserver(entries => {
        if (!entries[0].isIntersecting) stopMotion();
      }).observe(figure);
      controls.querySelector("input").addEventListener("input", () => {stopMotion(); update();});
      controls.querySelector("select").addEventListener("change", update);
      for (const button of controls.querySelectorAll("[data-interpolate]"))
        button.addEventListener("click", () => {
          interpolate = button.dataset.interpolate === "yes";
          for (const peer of controls.querySelectorAll("[data-interpolate]"))
            peer.setAttribute("aria-pressed", String(peer === button));
          update();
        });
      update();
    } else continue;
    figure.querySelector("figcaption").before(controls);
  } catch (error) {
    // The pre-rendered illustration and complete article remain available.
    console.warn("Optional illustration unavailable:", error.message);
  }
}
