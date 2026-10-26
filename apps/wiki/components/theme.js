// Apply the saved choice before styles load. A new reader starts in dark mode.
(() => {
  const key = "re-gvs-gvzg:wiki-theme";
  const root = document.documentElement;
  let toggle;

  function applyTheme(value) {
    const theme = value === "light" ? "light" : "dark";
    root.dataset.theme = theme;
    document.querySelector('meta[name="theme-color"]').content =
      theme === "dark" ? "#141b22" : "#fcfcf8";
    if (toggle) {
      const next = theme === "dark" ? "light" : "dark";
      const action = `Switch to ${next} mode`;
      toggle.setAttribute("aria-label", action);
      toggle.title = action;
      toggle.querySelector("[data-theme-label]").textContent =
        next === "light" ? "Light mode" : "Dark mode";
    }
  }

  let saved;
  try {
    saved = localStorage.getItem(key);
  } catch {
    // Storage can be unavailable. The current page still supports switching.
  }
  applyTheme(saved);

  document.addEventListener("DOMContentLoaded", () => {
    toggle = document.querySelector("[data-theme-toggle]");
    if (!toggle) return;
    applyTheme(root.dataset.theme);
    toggle.hidden = false;
    toggle.addEventListener("click", () => {
      applyTheme(root.dataset.theme === "dark" ? "light" : "dark");
      try {
        localStorage.setItem(key, root.dataset.theme);
      } catch {
        // Keep the selected theme even when it cannot be saved.
      }
    });
  });

  addEventListener("storage", (event) => {
    if (event.key === key || event.key === null) applyTheme(event.newValue);
  });
})();
