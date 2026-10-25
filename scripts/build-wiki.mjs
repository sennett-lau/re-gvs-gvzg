import fs from "node:fs/promises";
import path from "node:path";
import { fileURLToPath } from "node:url";
import { createHash } from "node:crypto";
import { marked } from "marked";
import { figureSvg, escapeHtml } from "../apps/wiki/components/figures.js";
const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), "..");
const out = path.join(root, ".local/wiki");
const posix = (value) => value.split(path.sep).join("/");
async function list(dir) {
  const entries = await fs.readdir(path.join(root, dir), {
    withFileTypes: true,
  });
  return (
    await Promise.all(
      entries
        .filter((e) => !e.name.startsWith("."))
        .map((e) =>
          e.isDirectory()
            ? list(path.join(dir, e.name))
            : [posix(path.join(dir, e.name))],
        ),
    )
  )
    .flat()
    .sort();
}
const figures = {};
for (const id of ["render-clock", "multiplayer-routes"]) {
  const data = JSON.parse(
    await fs.readFile(path.join(root, `docs/figures/${id}.json`), "utf8"),
  );
  figures[id] = data;
  await fs.writeFile(
    path.join(root, `docs/figures/${id}.svg`),
    figureSvg(id, data) + "\n",
  );
}
const docs = await list("docs");
const markdown = ["README.md", ...docs.filter((f) => f.endsWith(".md"))];
const pagePath = (source) =>
  source === "README.md"
    ? "index.html"
    : source.startsWith("docs/chapters/")
      ? path.basename(source, ".md") + ".html"
      : source.replace(/\.md$/, ".html");
const pages = [];
for (const source of markdown) {
  const text = await fs.readFile(path.join(root, source), "utf8");
  const title = text.match(/^# (.+)$/m)?.[1];
  if (!title) throw Error(`No title: ${source}`);
  pages.push({ source, text, title, output: pagePath(source) });
}
const chapters = pages.filter((p) => p.source.startsWith("docs/chapters/"));
const references = [
  "docs/REPOSITORY.md",
  "docs/VERSIONS.md",
  "docs/EVIDENCE.md",
  "docs/DERIVED.md",
  "docs/GAME_FILES.md",
  "docs/license/CONTENT_NOTICE.md",
  "docs/license/THIRD_PARTY_NOTICES.md",
];
// The digest describes the exact content/templates used, independent of commit time.
const manifest = { schema: 1, source_sha256: {} };
for (const file of [
  ...markdown,
  ...docs.filter((f) => !f.endsWith(".md")),
  "upstream.lock",
  "package.json",
  "package-lock.json",
  ...(await list("apps/wiki")),
  "scripts/build-wiki.mjs",
]) {
  manifest.source_sha256[file] = createHash("sha256")
    .update(await fs.readFile(path.join(root, file)))
    .digest("hex");
}
const sourceId = createHash("sha256")
  .update(JSON.stringify(manifest.source_sha256))
  .digest("hex");
manifest.source_set_sha256 = sourceId;
// Only replace this script's generated site directory; never touch source content.
await fs.rm(out, { recursive: true, force: true });
await fs.mkdir(out, { recursive: true });
await fs.mkdir(path.join(out, "assets"), { recursive: true });
for (const [src, dst] of [
  ["apps/wiki/wiki.css", "wiki.css"],
  ["apps/wiki/components/reader.js", "reader.js"],
  ["apps/wiki/components/figures.js", "figures.js"],
])
  await fs.copyFile(path.join(root, src), path.join(out, "assets", dst));
for (const source of ["README.md", "upstream.lock", ...docs]) {
  const target = path.join(out, "sources", source);
  await fs.mkdir(path.dirname(target), { recursive: true });
  await fs.copyFile(path.join(root, source), target);
  if (!source.endsWith(".md")) {
    const asset = path.join(out, source);
    await fs.mkdir(path.dirname(asset), { recursive: true });
    await fs.copyFile(path.join(root, source), asset);
  }
}
const template = await fs.readFile(
  path.join(root, "apps/wiki/template.html"),
  "utf8",
);
for (const page of pages) {
  const rel = (target) =>
    posix(path.relative(path.dirname(page.output), target)) ||
    path.basename(target);
  const rewrite = (url) => {
    if (/^(?:[a-z]+:|\/\/|#)/i.test(url)) return url;
    const [rawPath, fragment] = url.split("#");
    const canonical = posix(
      path.normalize(
        path.join(path.dirname(page.source), decodeURIComponent(rawPath)),
      ),
    );
    let destination;
    if (canonical.startsWith(".local/wiki/"))
      destination = canonical.slice(".local/wiki/".length);
    else if (markdown.includes(canonical)) destination = pagePath(canonical);
    else destination = canonical;
    return rel(destination) + (fragment ? "#" + fragment : "");
  };
  const ids = new Map();
  const renderer = new marked.Renderer();
  renderer.heading = function ({ tokens, depth, text }) {
    const base = text
      .toLowerCase()
      .replace(/<[^>]*>/g, "")
      .replace(/[^\p{L}\p{N}\s-]/gu, "")
      .trim()
      .replace(/\s+/g, "-");
    const count = ids.get(base) || 0;
    ids.set(base, count + 1);
    const id = base + (count ? `-${count}` : "");
    return `<h${depth} id="${escapeHtml(id)}">${this.parser.parseInline(tokens)}</h${depth}>\n`;
  };
  renderer.link = function ({ href, title, tokens }) {
    return `<a href="${escapeHtml(rewrite(href))}"${title ? ` title="${escapeHtml(title)}"` : ""}>${this.parser.parseInline(tokens)}</a>`;
  };
  renderer.image = function ({ href, text }) {
    return `<img src="${escapeHtml(rewrite(href))}" alt="${escapeHtml(text)}" loading="lazy">`;
  };
  let body = marked.parse(page.text, { renderer, gfm: true });
  body = body.replace(
    /<blockquote>\s*<p>Prefer the illustrated reader\?[\s\S]*?<\/blockquote>\s*/,
    "",
  );
  body = body.replace(
    /<!-- interactive: ([a-z-]+) -->\s*<p><img[^>]+><\/p>/g,
    (_, id) => {
      const data = figures[id];
      if (!data) throw Error(`Unknown figure ${id}`);
      return `<figure data-interactive="${id}"><p class="eyebrow">Interactive explanation · illustrative</p><div class="figure-graphic">${figureSvg(id, data)}</div><script type="application/json">${JSON.stringify(data).replace(/</g, "\\u003c")}</script><figcaption>${escapeHtml(data.caption)}</figcaption></figure>`;
    },
  );
  body = body
    .replace(
      /<table>/g,
      '<div class="table-wrap" role="region" aria-label="Research table" tabindex="0"><table>',
    )
    .replace(/<\/table>/g, "</table></div>");
  const navLink = (p, label, num) =>
    `<a href="${escapeHtml(rel(p.output))}"${p.source === page.source ? ' aria-current="page"' : ""}><span>${num}</span>${escapeHtml(label)}</a>`;
  const nav =
    '<nav aria-label="Chapters">' +
    navLink(pages[0], "Overview", "—") +
    chapters
      .map((p, i) =>
        navLink(
          p,
          p.title.replace(/^\d+\s*[·—-]\s*/, ""),
          String(i + 1).padStart(2, "0"),
        ),
      )
      .join("") +
    '</nav><nav class="reference-links" aria-label="Project reference">' +
    references
      .map((source) => {
        const p = pages.find((p) => p.source === source);
        return p ? navLink(p, p.title, "↗") : "";
      })
      .join("") +
    "</nav>";
  const index = chapters.findIndex((p) => p.source === page.source);
  let pager = "";
  if (page.source === "README.md")
    pager = `<span>Begin the investigation</span><a href="${rel(chapters[0].output)}">From disc to code →</a>`;
  else if (index >= 0) {
    pager =
      index > 0
        ? `<a href="${rel(chapters[index - 1].output)}">← ${escapeHtml(chapters[index - 1].title)}</a>`
        : `<a href="${rel("index.html")}">← Overview</a>`;
    if (index < chapters.length - 1)
      pager += `<a href="${rel(chapters[index + 1].output)}">${escapeHtml(chapters[index + 1].title)} →</a>`;
  }
  const values = {
    TITLE: escapeHtml(page.title),
    ASSETS: rel("assets"),
    HOME: rel("index.html"),
    NAV: nav,
    SOURCE: rel("sources/" + page.source),
    KICKER:
      index >= 0
        ? `CHAPTER ${String(index + 1).padStart(2, "0")} / ${String(chapters.length).padStart(2, "0")}`
        : "PROJECT RECORD",
    BODY: body,
    PAGER: pager,
    SOURCE_ID: sourceId.slice(0, 12),
  };
  const html = template.replace(/\{\{([A-Z_]+)\}\}/g, (_, key) => {
    if (!(key in values)) throw Error(`Unknown template variable ${key}`);
    return values[key];
  });
  const target = path.join(out, page.output);
  await fs.mkdir(path.dirname(target), { recursive: true });
  await fs.writeFile(target, html);
}
await fs.writeFile(
  path.join(out, "source-manifest.json"),
  JSON.stringify(manifest, null, 2) + "\n",
);
console.log(
  `Built ${pages.length} pages from ${chapters.length} chapters. Source set ${sourceId.slice(0, 12)}.`,
);
