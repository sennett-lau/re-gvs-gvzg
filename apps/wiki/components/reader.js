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
