const menu = document.querySelector("[data-chapter-menu]");
if (menu) {
  const wide = matchMedia("(min-width: 661px)");
  const sync = () => {
    menu.open = wide.matches;
  };
  sync();
  wide.addEventListener("change", sync);
}
