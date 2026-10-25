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
const markdown = [
  "README.md",
  "CONTRIBUTING.md",
  ...docs.filter((f) => f.endsWith(".md")),
];
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
const navigation = JSON.parse(
  await fs.readFile(path.join(root, "apps/wiki/navigation.json"), "utf8"),
);
const pageBySource = new Map(pages.map((page) => [page.source, page]));
const projectName = pageBySource.get("README.md").title;
const stageItems = (stage) =>
  stage.items || stage.groups.flatMap((group) => group.items);
for (const item of [
  ...navigation.stages.flatMap(stageItems),
  navigation.conclusion,
  ...navigation.evidence,
  ...navigation.project,
  ...navigation.contributing,
]) {
  if (!pageBySource.has(item.source))
    throw Error(`Missing navigation source: ${item.source}`);
}
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
await fs.cp(
  path.join(root, "apps/wiki/fonts"),
  path.join(out, "assets/fonts"),
  { recursive: true },
);
for (const source of [
  "README.md",
  "CONTRIBUTING.md",
  "upstream.lock",
  ...docs,
]) {
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
  const outline = [];
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
    if (depth === 2) outline.push({ id, label: text.replace(/[*`]/g, "") });
    return `<h${depth} id="${escapeHtml(id)}">${this.parser.parseInline(tokens)}</h${depth}>\n`;
  };
  renderer.link = function ({ href, title, tokens }) {
    return `<a href="${escapeHtml(rewrite(href))}"${title ? ` title="${escapeHtml(title)}"` : ""}>${this.parser.parseInline(tokens)}</a>`;
  };
  renderer.image = function ({ href, text }) {
    return `<img src="${escapeHtml(rewrite(href))}" alt="${escapeHtml(text)}" loading="lazy">`;
  };
  renderer.blockquote = function ({ text, tokens }) {
    const marker = /^\[!(IMPORTANT|NOTE|TIP)\][ \t]*(?:\n|$)/.exec(text);
    if (!marker)
      return `<blockquote>\n${this.parser.parse(tokens)}</blockquote>\n`;
    const labels = {
      IMPORTANT: "Key finding",
      NOTE: "Context & limits",
      TIP: "Next check",
    };
    const kind = marker[1].toLowerCase();
    const label = escapeHtml(labels[marker[1]]);
    const content = this.parser.parse(
      marked.lexer(text.slice(marker[0].length)),
    );
    return `<aside class="research-callout callout-${kind}" aria-label="${label}"><p class="callout-label"><span aria-hidden="true">◇</span>${label}</p><div class="callout-body">${content}</div></aside>\n`;
  };
  // Remove only the Markdown reader hint before parsing. Adjacent blockquotes
  // can merge, so removing the resulting HTML block would also erase a brief.
  let body = marked.parse(
    page.text.replace(/^> Prefer the illustrated reader\?.*$/m, ""),
    { renderer, gfm: true },
  );
  body = body.replace(/^<h1[^>]*>[\s\S]*?<\/h1>\s*/, "");
  body = body.replace(
    /<blockquote>\s*<p><strong>At a glance<\/strong><\/p>/g,
    '<blockquote class="chapter-brief" aria-label="At a glance"><p><strong>At a glance</strong></p>',
  );
  body = body.replace(
    /<p><strong>Current snapshot:/g,
    '<p class="snapshot-note"><strong>Current snapshot:',
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
  const navLink = (item, className = "") => {
    const destination = pageBySource.get(item.source);
    const active = item.source === page.source;
    return `<a class="nav-link ${className}" href="${escapeHtml(rel(destination.output))}"${active ? ' aria-current="page"' : ""}><span>${escapeHtml(item.label)}</span>${active ? '<i aria-hidden="true">↗</i>' : ""}</a>`;
  };
  const activeStage = navigation.stages.find((stage) =>
    stageItems(stage).some((item) => item.source === page.source),
  );
  const activeGroup = activeStage?.groups?.find((group) =>
    group.items.some((item) => item.source === page.source),
  );
  const stageHtml = navigation.stages
    .map(
      (stage) =>
        `<section class="nav-stage${stage === activeStage ? " is-active-stage" : ""}" aria-label="Stage ${stage.number}: ${stage.title}"><h2><span>${stage.number}</span>${escapeHtml(stage.title)}</h2>${stage.items ? stage.items.map((item) => navLink(item)).join("") : stage.groups.map((group) => `<section class="nav-feature" aria-label="${escapeHtml(group.title)}"><h3>${escapeHtml(group.title)}</h3>${group.items.map((item) => navLink(item, group.title === "Multiplayer" ? "route-link" : "")).join("")}</section>`).join("")}</section>`,
    )
    .join("");
  const contributorPage = navigation.contributing.some(
    (item) => item.source === page.source,
  );
  const secondaryNav = (items, label) =>
    `<details class="project-links"${items.some((item) => item.source === page.source) ? " open" : ""}><summary>${escapeHtml(label)}</summary><nav aria-label="${escapeHtml(label)}">${items.map((item) => navLink(item)).join("")}</nav></details>`;
  const nav = `<nav aria-label="Research stages">${navLink({ source: "README.md", label: "Overview" }, "overview-link")}${stageHtml}<div class="nav-conclusion">${navLink(navigation.conclusion)}</div></nav><nav class="evidence-links" aria-label="Evidence"><h2><span class="evidence-symbol" aria-hidden="true">◇</span> Evidence</h2>${navigation.evidence.map((item) => navLink(item)).join("")}</nav>${secondaryNav(navigation.project, "Project reference")}${secondaryNav(navigation.contributing, "Contributing")}`;
  const stageMap =
    page.source === "README.md"
      ? `<nav class="stage-map" aria-label="The research journey">${navigation.stages.map((stage) => `<a href="${rel(pageBySource.get(stageItems(stage)[0].source).output)}"><span>${stage.number}</span><strong>${escapeHtml(stage.title)}</strong><i aria-hidden="true">↗</i></a>`).join("")}</nav>`
      : "";
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
    TITLE: escapeHtml(
      page.source === "README.md"
        ? projectName
        : `${page.title} · ${projectName}`,
    ),
    PROJECT_NAME: escapeHtml(projectName),
    HEADING: escapeHtml(page.title.replace(/^\d+\s*[·—-]\s*/, "")),
    PAGE_CLASS:
      page.source === "README.md"
        ? "overview-page"
        : index >= 0
          ? "chapter-page"
          : "reference-page",
    STAGE_MAP: stageMap,
    OUTLINE: outline
      .map(
        (item) =>
          `<a href="#${escapeHtml(item.id)}">${escapeHtml(item.label)}</a>`,
      )
      .join(""),
    READING_META:
      index >= 0
        ? `<span>Chapter ${String(index + 1).padStart(2, "0")}</span><span>${Math.max(1, Math.ceil(page.text.split(/\s+/).length / 220))} min read</span><span>Research record</span>`
        : `<span>${page.source === "README.md" ? "PS2 → C++ → WebAssembly" : contributorPage ? "Contributor reference" : "Project reference"}</span>`,
    ASSETS: rel("assets"),
    HOME: rel("index.html"),
    NAV: nav,
    SOURCE: rel("sources/" + page.source),
    KICKER: activeStage
      ? `STAGE ${activeStage.number} / ${escapeHtml(activeStage.title)}${activeGroup ? " / " + escapeHtml(activeGroup.title) : ""}`
      : page.source.startsWith("docs/evidence/") ||
          page.source === "docs/EVIDENCE.md"
        ? "EVIDENCE / RESEARCH NOTES"
        : page.source === "README.md"
          ? "REVERSE ENGINEERING / A RESEARCH JOURNEY"
          : contributorPage
            ? "CONTRIBUTING / PROJECT WORK"
            : index === chapters.length - 1
              ? "LOOKING AHEAD / FINDINGS"
              : "PROJECT / REFERENCE",
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
