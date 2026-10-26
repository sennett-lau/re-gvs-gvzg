import { escapeHtml, figureMarkup } from "./figures.js";

// One finite, reader-controlled sequence. No animation runs on page load.
export function initMotionFigure(figure, kind, data) {
  const graphic = figure.querySelector('.figure-graphic');
  const variants = data.routes || data.scenarios || [];
  let variant = variants[0] || data;
  let step = 0;
  let timer = null;
  let playing = false;
  const reduced = matchMedia('(prefers-reduced-motion: reduce)');
  const controls = document.createElement('div');
  controls.className = 'interactive-controls motion-controls';
  controls.innerHTML = `${variants.length ? `<div class="control-row motion-choices" role="group" aria-label="${kind === 'multiplayer-routes' ? 'Multiplayer architecture' : 'Input arrival scenario'}">${variants.map((v, i) => `<button type="button" data-variant="${escapeHtml(v.id)}" aria-pressed="${i === 0}">${escapeHtml(v.label)}</button>`).join('')}</div>` : ''}<div class="motion-step-nav" role="group" aria-label="Explanation steps"></div><div class="motion-explanation" role="status" aria-live="polite" aria-atomic="true"><strong></strong><p></p></div><div class="control-row motion-playback"><button type="button" data-play>Play steps</button><button type="button" data-next>Next step</button><button type="button" data-reset>Restart</button><span class="motion-preference"></span></div>`;
  figure.classList.add('motion-figure');
  figure.querySelector('figcaption').before(controls);
  const play = controls.querySelector('[data-play]');
  const next = controls.querySelector('[data-next]');
  const nav = controls.querySelector('.motion-step-nav');
  function buildNav() {
    nav.style.setProperty('--step-count', String(variant.steps.length));
    nav.innerHTML = variant.steps.map((s, i) => `<button type="button" data-step="${i}" aria-label="Step ${i + 1}: ${escapeHtml(s.title)}"><span>${String(i + 1).padStart(2, '0')}</span>${escapeHtml(s.label)}</button>`).join('');
  }
  function render() {
    figure.dataset.step = String(step);
    figure.dataset.playing = String(playing);
    graphic.innerHTML = figureMarkup(kind, data, {variant: variant.id, step, playing: playing && !reduced.matches});
    nav.querySelectorAll('button').forEach((b, i) => {
      if (i === step) b.setAttribute('aria-current', 'step');
      else b.removeAttribute('aria-current');
    });
    controls.querySelector('.motion-explanation strong').textContent = variant.steps[step].title;
    controls.querySelector('.motion-explanation p').textContent = variant.steps[step].detail;
    play.textContent = playing ? 'Pause steps' : step === variant.steps.length - 1 ? 'Replay steps' : 'Play steps';
    play.disabled = reduced.matches;
    next.disabled = step === variant.steps.length - 1;
    controls.querySelector('.motion-preference').textContent = reduced.matches ? 'Reduced motion: use the step buttons.' : 'Illustration · not measured timing';
  }
  function stop() {
    clearTimeout(timer);
    timer = null;
    playing = false;
  }
  function schedule() {
    timer = setTimeout(() => {
      if (!playing) return;
      if (step < variant.steps.length - 1) {
        step++;
        render();
        schedule();
      } else {
        stop();
        render();
      }
    }, 4000);
  }
  play.addEventListener('click', () => {
    if (reduced.matches) return;
    if (playing) stop();
    else {
      if (step === variant.steps.length - 1) step = 0;
      playing = true;
      schedule();
    }
    render();
  });
  next.addEventListener('click', () => {
    stop();
    step = Math.min(step + 1, variant.steps.length - 1);
    render();
  });
  controls.querySelector('[data-reset]').addEventListener('click', () => {stop(); step = 0; render();});
  nav.addEventListener('click', event => {
    const button = event.target.closest('[data-step]');
    if (!button) return;
    stop(); step = Number(button.dataset.step); render();
  });
  controls.querySelectorAll('[data-variant]').forEach(button => button.addEventListener('click', () => {
    stop(); variant = variants.find(v => v.id === button.dataset.variant); step = 0;
    controls.querySelectorAll('[data-variant]').forEach(b => b.setAttribute('aria-pressed', String(b === button)));
    buildNav(); render();
  }));
  const pause = () => {if (playing) {stop(); render();}};
  reduced.addEventListener('change', () => {stop(); render();});
  document.addEventListener('visibilitychange', () => {if (document.hidden) pause();});
  addEventListener('pagehide', pause);
  if ('IntersectionObserver' in window) {
    const observer = new IntersectionObserver(entries => {if (!entries[0].isIntersecting) pause();});
    observer.observe(figure);
  }
  buildNav(); render();
}
