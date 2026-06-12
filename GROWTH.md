# GROWTH — discoverability & community kit

Internal playbook for making this HackerRank solution archive **discoverable**
and **useful to others** (the two things that actually drive stars). Everything
here is copy-paste ready. Items marked 👤 need the GitHub account / posting.

---

## 1. Repo metadata (GitHub → About) 👤

**Description (About):**

> HackerRank solutions in C++ and Java, organized by topic, each with a
> complexity-annotated header and compiled in CI. Searchable live docs.

**Website:** `https://hackerrank-problems.pages.dev`

**Topics (exact-match, 8 — stay under the 20 cap):**

```
hackerrank
competitive-programming
dsa
cpp
java
hacktoberfest
coding-interview
algorithms
```

These match the literal phrases people search and the GitHub topic pages that
index repos. Keep commits flowing so the repo stays "active."

---

## 2. SEO (already wired in-repo)

- Live docs are titled for the **"hackerrank \<challenge\> solution"** long-tail:
  - Home → *HackerRank Solutions in C++ and Java*
  - Index → *HackerRank Solutions Index (C++ & Java)*
  - Compare → *HackerRank Solutions — C++ vs Java (side by side)*
- Each page carries front-matter `title` + `description` so search engines and
  the in-site search both surface the right keywords.
- Every solution file links back to its original challenge; the topic column
  makes the index crawlable by topic (STL, Strings, Classes, Inheritance, …).

To do 👤: once the Cloudflare Pages site is live, submit the sitemap in Google
Search Console and confirm the repo's GitHub topics (above) are set.

---

## 3. Good first issues + Hacktoberfest

This archive is the **ideal first-contribution surface**: each missing problem is
one self-contained PR (add one file + one `metadata.json` entry, run the
generator). Seed issues like these and label them `good first issue` +
`hacktoberfest` 👤:

- "Add solution: <HackerRank challenge name> (C++)" — link the challenge, point
  at `CONTRIBUTING.md`.
- "Fill in `TODO: confirm` link for `java/easy/first_problem.java`."
- "Add a Java analogue for `cpp/easy/<file>.cpp` so it shows in the C++ vs Java
  tabs."
- "Add a `medium/` tier with the first medium-difficulty solution."

Hacktoberfest angle: the `hacktoberfest` topic + labelled issues make the repo
show up in Hacktoberfest issue searches every October — a recurring, free influx
of contributors and stars. Keep ~5 good-first-issues open going into October.

---

## 4. Awesome-list / directory submissions 👤

Compounding, passive faucets. Submit once the live docs are public:

- **`lnishan/awesome-competitive-programming`** — submit under
  *Solutions / Resources*:

  > - [aliammari1/Hackerrank_problems](https://github.com/aliammari1/Hackerrank_problems)
  >   — HackerRank solutions in C++ and Java, organized by topic with complexity
  >   analysis and a searchable live-docs site (C++ vs Java side by side).

- **`jwasham/coding-interview-university`** discussions / awesome-leetcode-resources
  — list as a HackerRank companion to the LeetCode archive.
- **awesome lists for `cpp` and `java`** — only if a "practice/solutions" section
  exists; otherwise skip (respect each list's scope to avoid rejected PRs).

Pre-submit checklist: live docs reachable, README leads with value + ⭐ CTA,
license MIT, topics set, last commit recent.

---

## 5. Cross-linking (ecosystem)

- README + docs already link **Related: Leetcode_problems** and the
  **@aliammari1 profile hub** (a star on one repo makes the others discoverable).
- On the profile README hub, list this repo next to `Leetcode_problems` under a
  "Practice / DSA" group with star badges.

---

## 6. Ready-to-paste community post

Short, story-first (story headlines out-perform feature lists ~3×). Post to
**r/learnprogramming** or cross-post to **dev.to** Tue–Thu, 13:00–16:00 UTC. 👤

**Title:** I open-sourced my HackerRank solutions (C++ & Java) — organized by
topic, with complexity notes, and a searchable site

**Body:**

> When I was grinding HackerRank I kept re-deriving the same STL / string / OOP
> patterns, so I started keeping my solutions in one place with a tiny header on
> each file: the challenge link, topic, approach, and time/space complexity.
>
> It grew into a small archive (23 C++ / 7 Java so far) where every file is
> compiled in CI on every push, so nothing rots, and there's a searchable
> mkdocs site that shows **C++ vs Java side by side** in tabs — handy if you're
> switching languages for interviews.
>
> Repo: https://github.com/aliammari1/Hackerrank_problems
> Browse: https://hackerrank-problems.pages.dev
>
> It's MIT and beginner-friendly to contribute to — each missing problem is one
> small PR. Happy to take suggestions on which challenges to add next.

(Reply to comments within the first hour; that window drives most of the reach.)

---

## 7. About / footer note

> **About:** A personal, compile-checked archive of HackerRank solutions in C++
> and Java by [@aliammari1](https://github.com/aliammari1). Companion to the
> [LeetCode archive](https://github.com/aliammari1/Leetcode_problems). MIT —
> solution code only; HackerRank owns the problem statements.
