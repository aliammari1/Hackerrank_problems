#!/usr/bin/env python3
"""Header + README index generator for the HackerRank solution archive.

Two jobs, both idempotent:

1. ``--headers``  Prepend (or refresh) a standardized header block at the top of
   every C++ / Java solution. The block is delimited by sentinel lines so it can
   be regenerated in place without touching the actual solution code. Fields are
   read from ``scripts/metadata.json``; any field left ``null`` there is rendered
   as a clearly-marked ``TODO`` so nothing is fabricated.

2. ``--readme``   Regenerate the solutions table and the real per-language counts
   in ``README.md`` between the ``<!-- SOLUTIONS:START -->`` / ``:END`` markers.

With no flag (or ``--check``) it runs both and, in ``--check`` mode, exits non-zero
if anything would change -- suitable as a CI gate.

SPDX-License-Identifier: MIT
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
META_PATH = ROOT / "scripts" / "metadata.json"

H_START = "Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block."
TODO = "TODO: confirm"

README_START = "<!-- SOLUTIONS:START -->"
README_END = "<!-- SOLUTIONS:END -->"


def load_meta() -> dict:
    data = json.loads(META_PATH.read_text(encoding="utf-8"))
    return {k: v for k, v in data.items() if not k.startswith("_")}


def field(value):
    return value if value else TODO


def difficulty_for(rel: str) -> str:
    parts = rel.split("/")
    if len(parts) >= 2:
        return parts[1].capitalize()
    return "Easy"


def lang_for(rel: str) -> str:
    return "C++" if rel.endswith(".cpp") else "Java"


def header_lines(rel: str, meta: dict) -> list[str]:
    name = field(meta.get("name"))
    url = meta.get("url") or TODO
    topic = field(meta.get("topic"))
    difficulty = difficulty_for(rel)
    approach = field(meta.get("approach"))
    time = field(meta.get("time"))
    space = field(meta.get("space"))
    lines = [
        H_START,
        "",
        f"Problem    : {name}",
        f"HackerRank : {url}",
        f"Difficulty : {difficulty}",
        f"Topic      : {topic}",
        f"Approach   : {approach}",
        f"Time       : {time}",
        f"Space      : {space}",
    ]
    if lang_for(rel) == "Java":
        cls = Path(rel).stem
        lines += [
            "",
            f"HackerRank note: the online judge expects 'public class Solution'.",
            f"This archive keeps a unique class per file ('public class {cls}') so",
            "every solution can live in one folder and compile together; when",
            "submitting, rename the class to 'Solution'.",
        ]
    lines += [
        "",
        "Note: problem statements are the intellectual property of HackerRank.",
        "This file contains only the author's own solution code.",
        "",
        "SPDX-License-Identifier: MIT",
    ]
    return lines


def render_block(rel: str, meta: dict) -> str:
    body = "\n".join(f" * {ln}".rstrip() for ln in header_lines(rel, meta))
    return f"/*\n{body}\n */\n"


# A managed block is a leading C-style comment that starts with our sentinel.
MANAGED_RE = re.compile(
    r"\A/\*\s*\n(?:.*\n)*? \* " + re.escape(H_START) + r"\n(?:.*\n)*?\s*\*/\n+",
)
# Also strip a pre-existing block even if it is the very first comment.
LEADING_BLOCK_RE = re.compile(
    r"\A/\*(?:(?!\*/).)*?" + re.escape(H_START) + r".*?\*/\s*\n+", re.S
)


def inject_header(path: Path, rel: str, meta: dict) -> bool:
    text = path.read_text(encoding="utf-8")
    text = LEADING_BLOCK_RE.sub("", text, count=1)
    new = render_block(rel, meta) + "\n" + text.lstrip("\n")
    if new != path.read_text(encoding="utf-8"):
        path.write_text(new, encoding="utf-8", newline="\n")
        return True
    return False


def discover() -> list[str]:
    files = []
    for ext in ("cpp", "java"):
        for p in sorted((ROOT / ext).rglob(f"*.{ext}")):
            files.append(p.relative_to(ROOT).as_posix())
    return files


def ordinal_key(rel: str):
    order = [
        "first", "second", "third", "forth", "fourth", "fifth", "sixth",
        "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth",
        "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth",
        "eighteenth", "nineteenth", "twentieth", "twentyfirst",
        "twentysecond", "twentythird",
    ]
    stem = Path(rel).stem.replace("_problem", "")
    idx = order.index(stem) if stem in order else len(order)
    return (lang_for(rel), idx, rel)


def build_headers(check: bool) -> tuple[int, list[str]]:
    meta = load_meta()
    changed = []
    missing = []
    for rel in discover():
        m = meta.get(rel)
        if m is None:
            missing.append(rel)
            m = {}
        if inject_header(ROOT / rel, rel, m):
            changed.append(rel)
    if missing:
        print("WARNING: no metadata entry for:\n  " + "\n  ".join(missing), file=sys.stderr)
    return len(changed), changed


def build_readme(check: bool) -> bool:
    meta = load_meta()
    files = sorted(discover(), key=ordinal_key)
    cpp = [f for f in files if f.endswith(".cpp")]
    java = [f for f in files if f.endswith(".java")]

    rows = ["| # | Problem | Language | Difficulty | Topic | HackerRank |",
            "|---|---------|----------|------------|-------|------------|"]
    for i, rel in enumerate(files, 1):
        m = meta.get(rel, {})
        name = field(m.get("name"))
        topic = field(m.get("topic"))
        url = m.get("url")
        link = f"[link]({url})" if url else TODO
        rows.append(
            f"| {i} | [`{name}`]({rel}) | {lang_for(rel)} | "
            f"{difficulty_for(rel)} | {topic} | {link} |"
        )

    table = "\n".join(rows)
    summary = (
        f"**Totals:** {len(files)} solutions "
        f"&mdash; {len(cpp)} C++, {len(java)} Java.\n\n"
    )
    block = f"{README_START}\n\n{summary}{table}\n\n{README_END}"

    readme = ROOT / "README.md"
    text = readme.read_text(encoding="utf-8")
    pattern = re.compile(
        re.escape(README_START) + r".*?" + re.escape(README_END), re.S
    )
    if pattern.search(text):
        new = pattern.sub(block, text)
    else:
        new = text.rstrip() + "\n\n## Solutions Index\n\n" + block + "\n"
    if new != text:
        if not check:
            readme.write_text(new, encoding="utf-8", newline="\n")
        return True
    return False


def build_docs(check: bool) -> bool:
    """Regenerate docs/solutions.md and docs/side-by-side.md from metadata."""
    meta = load_meta()
    files = sorted(discover(), key=ordinal_key)
    docs = ROOT / "docs"
    changed = False

    # --- solutions.md : one table, all solutions ---
    rows = ["# Solutions", "",
            "| Problem | Language | Topic | HackerRank |",
            "|---------|----------|-------|------------|"]
    for rel in files:
        m = meta.get(rel, {})
        url = m.get("url")
        link = f"[open]({url})" if url else TODO
        rows.append(
            f"| `{field(m.get('name'))}` | {lang_for(rel)} | "
            f"{field(m.get('topic'))} | {link} |"
        )
    sol = "\n".join(rows) + "\n"

    # --- side-by-side.md : content tabs pairing C++ and Java by topic ---
    cpp = [f for f in files if f.endswith(".cpp")]
    java = [f for f in files if f.endswith(".java")]
    out = ["# C++ vs Java", "",
           "The same fundamentals solved in both languages. Use the tabs to flip "
           "between a representative C++ solution and a Java one.", ""]

    def code_tab(rel: str) -> list[str]:
        lang = "cpp" if rel.endswith(".cpp") else "java"
        m = meta.get(rel, {})
        body = (ROOT / rel).read_text(encoding="utf-8")
        label = "C++" if lang == "cpp" else "Java"
        block = [f'=== "{label}"', "",
                 f"    **{field(m.get('name'))}** — `{rel}`", ""]
        block.append(f"    ```{lang}")
        for line in body.splitlines():
            block.append("    " + line if line else "")
        block.append("    ```")
        block.append("")
        return block

    # Pair the first few C++ intro problems with their Java analogues.
    pairs = [
        ("Hello World", "cpp/easy/first_problem.cpp", "java/easy/first_problem.java"),
        ("Read 3 integers", "cpp/easy/second_problem.cpp", "java/easy/second_problem.java"),
    ]
    for title, c, j in pairs:
        out.append(f"## {title}")
        out.append("")
        out += code_tab(c)
        out += code_tab(j)
    sbs = "\n".join(out) + "\n"

    for path, content in ((docs / "solutions.md", sol),
                          (docs / "side-by-side.md", sbs)):
        existing = path.read_text(encoding="utf-8") if path.exists() else ""
        if existing != content:
            changed = True
            if not check:
                path.write_text(content, encoding="utf-8", newline="\n")

    return changed


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--headers", action="store_true", help="inject/refresh source headers")
    ap.add_argument("--readme", action="store_true", help="regenerate README index")
    ap.add_argument("--docs", action="store_true", help="regenerate docs/ pages")
    ap.add_argument("--check", action="store_true", help="fail if anything is out of date")
    args = ap.parse_args()

    do_all = not (args.headers or args.readme or args.docs)

    dirty = False
    if args.headers or do_all:
        n, changed = build_headers(args.check)
        if args.check and n:
            dirty = True
            print(f"[check] {n} header(s) out of date:\n  " + "\n  ".join(changed))
        else:
            print(f"Headers updated: {n}")

    if args.readme or do_all:
        rd = build_readme(args.check)
        if args.check and rd:
            dirty = True
            print("[check] README index out of date")
        elif not args.check:
            print("README index regenerated" if rd else "README index already up to date")

    if args.docs or do_all:
        dc = build_docs(args.check)
        if args.check and dc:
            dirty = True
            print("[check] docs pages out of date")
        elif not args.check:
            print("docs pages regenerated" if dc else "docs pages already up to date")

    if args.check and dirty:
        print("\nRun: python scripts/generate.py  (then commit)", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
