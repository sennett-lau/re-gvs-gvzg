#!/usr/bin/env node
// Bounded checks for this report and its generated reader. This is not a
// comprehensive secret scanner, anonymization guarantee, or game validation.
import fs from "node:fs";
import path from "node:path";
import { fileURLToPath } from "node:url";
import { execFileSync } from "node:child_process";
import { marked } from "marked";

const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), "..");
const wiki = path.join(root, ".local/wiki");
const sourceOnly = process.argv.includes("--source-only");
const errors = [];
const counts = {
  files: 0,
  json: 0,
  markdown: 0,
  html: 0,
  callouts: 0,
  links: 0,
  pendingWikiLinks: 0,
};
const textCache = new Map();
const relative = (file) => path.relative(root, file).split(path.sep).join("/");
const inside = (file, directory) =>
  file === directory || file.startsWith(directory + path.sep);
const fail = (file, message) => errors.push(`${relative(file)}: ${message}`);
const read = (file) => {
  if (!textCache.has(file)) textCache.set(file, fs.readFileSync(file, "utf8"));
  return textCache.get(file);
};

function walk(directory) {
  if (!fs.existsSync(directory)) return [];
  return fs.readdirSync(directory, { withFileTypes: true }).flatMap((entry) => {
    const file = path.join(directory, entry.name);
    return entry.isDirectory() ? walk(file) : entry.isFile() ? [file] : [];
  });
}

function lineAt(text, offset) {
  return text.slice(0, offset).split("\n").length;
}

function scanText(file, text, { brands = true } = {}) {
  const rules = [
    [
      "private home path",
      /(?:\/(?:Users|home)\/[^\s/<>)"']+|[A-Z]:[\\/]Users[\\/][^\s<>"']+)/gi,
    ],
    [
      "private or non-public host address",
      /\b(?:10(?:\.\d{1,3}){3}|192\.168(?:\.\d{1,3}){2}|172\.(?:1[6-9]|2\d|3[01])(?:\.\d{1,3}){2}|100\.(?:6[4-9]|[7-9]\d|1[01]\d|12[0-7])(?:\.\d{1,3}){2}|169\.254(?:\.\d{1,3}){2})\b/g,
    ],
    [
      "private IPv6 address",
      /\b(?:f[cd][0-9a-f]{2}|fe[89ab][0-9a-f]):[0-9a-f:]+(?:%[\w.-]+)?/gi,
    ],
  ];
  const terms = (process.env.REPORT_FORBIDDEN_TERMS || "")
    .split(",")
    .map((term) => term.trim())
    .filter(Boolean);
  if (brands && terms.length)
    rules.push([
      "disallowed term",
      new RegExp(
        "\\b(?:" +
          terms
            .map((term) => term.replace(/[.*+?^${}()|[\]\\]/g, "\\$&"))
            .join("|") +
          ")\\b",
        "gi",
      ),
    ]);
  for (const [label, expression] of rules) {
    for (const match of text.matchAll(expression)) {
      // Report location and category, never echo a potentially sensitive value.
      fail(
        file,
        `${label} at line ${lineAt(text, match.index)}; review or replace it`,
      );
    }
  }
  const approvedEmail = "47737641+sennett-lau@users.noreply.github.com";
  for (const match of text.matchAll(
    /\b[A-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[A-Z0-9](?:[A-Z0-9.-]*[A-Z0-9])?\.[A-Z]{2,}\b/gi,
  )) {
    if (match[0] !== approvedEmail)
      fail(
        file,
        `email address at line ${lineAt(text, match.index)}; review before including it`,
      );
  }
}

function decodeEntities(text) {
  return text.replace(
    /&(?:amp|quot|apos|lt|gt|#39|#x[0-9a-f]+|#\d+);/gi,
    (entity) => {
      const named = {
        "&amp;": "&",
        "&quot;": '"',
        "&apos;": "'",
        "&#39;": "'",
        "&lt;": "<",
        "&gt;": ">",
      };
      if (named[entity.toLowerCase()]) return named[entity.toLowerCase()];
      const number = entity.toLowerCase().startsWith("&#x")
        ? parseInt(entity.slice(3, -1), 16)
        : parseInt(entity.slice(2, -1), 10);
      return Number.isFinite(number) && number <= 0x10ffff
        ? String.fromCodePoint(number)
        : entity;
    },
  );
}

function headingIds(text) {
  const ids = new Set();
  const used = new Map();
  const body = text.replace(/^(`{3,}|~{3,}).*$[\s\S]*?^\1\s*$/gm, "");
  for (const match of body.matchAll(/^#{1,6}\s+(.+?)(?:\s+#+)?\s*$/gm)) {
    const title = match[1]
      .replace(/\[([^\]]+)\]\([^)]*\)/g, "$1")
      .replace(/<[^>]*>/g, "");
    const id = decodeEntities(title)
      .toLowerCase()
      .replace(/[^\p{L}\p{N}\p{M}_\s-]/gu, "")
      .replace(/\s/g, "-");
    const duplicate = used.get(id) || 0;
    used.set(id, duplicate + 1);
    ids.add(duplicate ? `${id}-${duplicate}` : id);
    // A static renderer may collapse punctuation gaps; support both common
    // slug forms here, then check its exact HTML ids in the generated reader.
    ids.add(id.replace(/-+/g, "-").replace(/^-|-$/g, ""));
  }
  for (const match of body.matchAll(/\b(?:id|name)\s*=\s*["']([^"']+)["']/gi))
    ids.add(decodeEntities(match[1]));
  return ids;
}

function checkLink(from, raw, context, isImage = false) {
  let url = decodeEntities(raw.trim());
  if (!url || /^(?:https?:|mailto:|tel:|data:|blob:|\/\/)/i.test(url)) return;
  if (/^[A-Za-z][A-Za-z\d+.-]*:/.test(url)) {
    fail(from, `unsupported local-link scheme in ${context}`);
    return;
  }
  let pathname, fragment;
  try {
    const hashAt = url.indexOf("#");
    fragment = hashAt < 0 ? "" : decodeURIComponent(url.slice(hashAt + 1));
    pathname = decodeURIComponent(
      (hashAt < 0 ? url : url.slice(0, hashAt)).split("?")[0],
    );
  } catch {
    fail(from, `invalid URL escaping in ${context}`);
    return;
  }
  const fromWiki = inside(from, wiki);
  const base = fromWiki ? wiki : root;
  let target = pathname
    ? path.resolve(
        pathname.startsWith("/") ? base : path.dirname(from),
        pathname.replace(/^\/+/, ""),
      )
    : from;
  if (!inside(target, root)) {
    fail(from, `${context} escapes the report directory`);
    return;
  }
  if (sourceOnly && inside(target, wiki)) {
    counts.pendingWikiLinks++;
    return;
  }
  counts.links++;
  if (!fs.existsSync(target)) {
    fail(from, `missing ${context} target ${relative(target)}`);
    return;
  }
  if (fs.statSync(target).isDirectory()) {
    target = path.join(target, "index.html");
    if (!fs.existsSync(target)) {
      fail(
        from,
        `directory ${context} has no index.html: ${relative(path.dirname(target))}`,
      );
      return;
    }
  }
  if (!inside(fs.realpathSync(target), root)) {
    fail(from, `${context} resolves outside the report through a symlink`);
    return;
  }
  if (fragment && !isImage && /\.(?:md|html?)$/i.test(target)) {
    const targetText = read(target);
    const ids = /\.md$/i.test(target)
      ? headingIds(targetText)
      : new Set(
          [
            ...targetText.matchAll(/\b(?:id|name)\s*=\s*["']([^"']+)["']/gi),
          ].map((match) => decodeEntities(match[1])),
        );
    if (!ids.has(fragment))
      fail(from, `missing anchor #${fragment} in ${relative(target)}`);
  }
}

function checkMarkdown(file) {
  counts.markdown++;
  const text = read(file);
  scanText(file, text);
  // Code examples are not live links. Inline links, images and reference
  // definitions cover the conventions used by this repository's prose.
  const body = text
    .replace(/^(`{3,}|~{3,}).*$[\s\S]*?^\1\s*$/gm, "")
    .replace(/`[^`\n]+`/g, "");
  for (const match of body.matchAll(
    /(!?)\[[^\]\n]*\]\(\s*(?:<([^>]+)>|([^\s)]+))(?:\s+["'][^\n]*?["'])?\s*\)/g,
  )) {
    checkLink(file, match[2] || match[3], "Markdown link", Boolean(match[1]));
  }
  for (const match of body.matchAll(
    /^\s{0,3}\[[^\]]+\]:\s*(?:<([^>]+)>|(\S+))/gm,
  ))
    checkLink(file, match[1] || match[2], "Markdown reference");
  for (const match of body.matchAll(/\b(href|src)\s*=\s*["']([^"']+)["']/gi))
    checkLink(
      file,
      match[2],
      "embedded HTML link",
      match[1].toLowerCase() === "src",
    );
}

function checkHtml(file) {
  counts.html++;
  const text = read(file);
  const title = /<title\b[^>]*>([\s\S]*?)<\/title>/i.exec(text)?.[1]?.trim();
  if (!title || /\b(?:undefined|null)\b/i.test(title))
    fail(file, "missing or undefined document title");
  if (!/<main\b/i.test(text)) fail(file, "missing <main> reading region");
  const prose = decodeEntities(
    text
      .replace(/<(script|style)\b[^>]*>[\s\S]*?<\/\1>/gi, "")
      .replace(/<[^>]*>/g, " "),
  );
  scanText(file, prose);
  const ids = [...text.matchAll(/\bid\s*=\s*["']([^"']+)["']/gi)].map((match) =>
    decodeEntities(match[1]),
  );
  const seen = new Set();
  for (const id of ids) {
    if (seen.has(id)) fail(file, `duplicate HTML id ${id}`);
    seen.add(id);
  }
  for (const match of text.matchAll(/\b(href|src)\s*=\s*["']([^"']+)["']/gi))
    checkLink(file, match[2], "HTML link", match[1].toLowerCase() === "src");
}

function checkChapterBrief(source) {
  const file = path.join(wiki, path.basename(source, ".md") + ".html");
  if (!fs.existsSync(file)) {
    fail(source, "chapter is missing from the generated reader");
    return;
  }
  const brief = /^> \*\*At a glance\*\*\r?\n((?:>[^\n]*(?:\n|$))+)/m.exec(
    read(source),
  );
  if (!brief) {
    fail(source, "missing chapter summary");
    return;
  }
  const plain = (html) =>
    decodeEntities(html.replace(/<[^>]*>/g, " "))
      .replace(/\s+/g, " ")
      .trim();
  const output = plain(read(file));
  // A reader hint and the following summary can merge into one blockquote.
  // Check the actual sentences so stripping that hint cannot erase the brief.
  for (const item of brief[1].matchAll(/^> - (.+)$/gm)) {
    if (!output.includes(plain(marked.parseInline(item[1]))))
      fail(file, "chapter brief text missing from the generated reader");
  }
}

function checkCalloutContent(source) {
  const name = relative(source);
  const output =
    name === "README.md"
      ? "index.html"
      : name.startsWith("docs/chapters/")
        ? path.basename(name, ".md") + ".html"
        : name.replace(/\.md$/, ".html");
  const file = path.join(wiki, output);
  if (!fs.existsSync(file)) return;
  const plain = (html) =>
    decodeEntities(html.replace(/<[^>]*>/g, " "))
      .replace(/\s+/g, " ")
      .trim();
  const html = read(file);
  const bodies = [
    ...html.matchAll(
      /<aside\b[^>]*class="research-callout[^>]*>([\s\S]*?)<\/aside>/g,
    ),
  ].map((match) => plain(match[1]));
  const expected = [];
  marked.walkTokens(marked.lexer(read(source)), (token) => {
    if (token.type !== "blockquote") return;
    const marker = /^\[!(IMPORTANT|NOTE|TIP)\][ \t]*(?:\n|$)/.exec(token.text);
    if (marker)
      expected.push(plain(marked.parse(token.text.slice(marker[0].length))));
  });
  if (bodies.length !== expected.length)
    fail(file, "callout count differs from the Markdown source");
  for (const content of expected) {
    if (!bodies.some((body) => body.includes(content)))
      fail(
        file,
        "callout text or evidence limit missing from its generated block",
      );
  }
  counts.callouts += expected.length;
}

let files = [];
try {
  files = [
    ...new Set(
      execFileSync(
        "git",
        ["ls-files", "--cached", "--others", "--exclude-standard", "-z"],
        { cwd: root, encoding: "utf8" },
      )
        .split("\0")
        .filter(Boolean),
    ),
  ].map((file) => path.join(root, file));
} catch {
  fail(
    root,
    "cannot enumerate Git-tracked and nonignored files; run this inside the report repository",
  );
}

for (const file of files) {
  if (!fs.existsSync(file)) {
    fail(
      file,
      "tracked file is missing; restore it or stage its intentional removal",
    );
    continue;
  }
  const stat = fs.statSync(file);
  if (!stat.isFile()) continue;
  counts.files++;
  if (!inside(fs.realpathSync(file), root)) {
    fail(file, "symlink points outside the report directory");
    continue;
  }
  if (stat.size > 100 * 1024 * 1024)
    fail(
      file,
      "file exceeds 100 MiB; do not include this payload in ordinary Git",
    );
  if (
    /\.(?:iso|rom|7z|cso|chd|ps2|mcr|mc2|memcard)$/i.test(file) ||
    /(?:disc|rom|mem(?:ory)?[-_ ]?card)[^/]*\.bin$/i.test(file)
  ) {
    fail(
      file,
      "disc/ROM/archive or memory-card file is outside this report-only scope",
    );
  }
  if (/\.md$/i.test(file)) checkMarkdown(file);
  else if (
    /\.(?:json|csv|svg)$/i.test(file) &&
    inside(file, path.join(root, "docs"))
  )
    scanText(file, read(file));
}

const jsonFiles = [
  path.join(root, "upstream.lock"),
  ...walk(path.join(root, "docs/evidence")).filter((file) =>
    file.endsWith(".json"),
  ),
  ...walk(path.join(root, "docs/figures")).filter((file) =>
    file.endsWith(".json"),
  ),
];
for (const file of jsonFiles) {
  try {
    JSON.parse(read(file));
    counts.json++;
    if (path.basename(file) === "upstream.lock") scanText(file, read(file));
  } catch (error) {
    fail(file, `invalid or missing JSON (${error.name})`);
  }
}

if (!sourceOnly) {
  if (!fs.existsSync(path.join(wiki, "index.html")))
    fail(wiki, "reader is not built; run npm run wiki:build first");
  for (const file of walk(wiki).filter((file) => /\.html?$/i.test(file)))
    checkHtml(file);
  for (const source of walk(path.join(root, "docs/chapters")).filter((file) =>
    file.endsWith(".md"),
  ))
    checkChapterBrief(source);
  for (const source of files.filter((file) => file.endsWith(".md")))
    checkCalloutContent(source);
}

if (errors.length) {
  console.error(`Report check failed with ${errors.length} issue(s):`);
  for (const error of errors) console.error(`- ${error}`);
  process.exitCode = 1;
} else {
  console.log(
    `Report checks passed: ${counts.files} files, ${counts.json} JSON documents, ${counts.markdown} Markdown documents, ${counts.html} HTML pages, ${counts.callouts} callouts, ${counts.links} local references.`,
  );
  if (sourceOnly)
    console.log(
      `Source-only mode: ${counts.pendingWikiLinks} Wiki references await a build.`,
    );
  console.log(
    "Scope: syntax, local references, selected privacy markers and accidental payload checks. External URLs, exhaustive anonymization and game behavior are not tested.",
  );
}
