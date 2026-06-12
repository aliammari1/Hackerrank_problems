---
title: HackerRank Solutions in C++ and Java
description: A searchable, compile-checked archive of HackerRank solutions in C++ and Java, organized by topic with complexity analysis.
---

# HackerRank Solutions in C++ and Java

A compile-checked archive of my [HackerRank](https://www.hackerrank.com/)
solutions, written in **C++** and **Java**, organized by topic with complexity
analysis. Use the **search** (top bar) to jump straight to a
*hackerrank \<challenge\> solution*.

!!! note "Problem statements are HackerRank IP"
    This site and repository contain **only my own solution code** — never the
    problem text or test data, which are the intellectual property of HackerRank.
    Each solution links back to its original challenge.

## What's here

- **[Solutions](solutions.md)** — the full index, by language and topic.
- **[C++ vs Java](side-by-side.md)** — the same fundamentals solved in both
  languages, shown with content tabs.

## How it stays correct

Every push runs CI that:

1. Compiles **every** `.cpp` with `g++ -std=c++17 -Wall` and **every** `.java`
   with `javac` — the build **fails on any error**.
2. Enforces `clang-format` (C++) and `google-java-format` (Java).
3. Verifies the per-file header blocks and this index are regenerated and
   committed (`scripts/generate.py --check`).

## Java & the HackerRank judge

The judge expects `public class Solution`. To keep every solution in one folder
and compile together, this archive uses a **unique class per file**
(`first_problem`, `second_problem`, …). When submitting on HackerRank, rename the
class to `Solution` — every Java file repeats this note in its header.

## Related projects

- **[LeetCode solutions](https://github.com/aliammari1/Leetcode_problems)** —
  the companion LeetCode archive (same header + complexity style).
- **[@aliammari1](https://github.com/aliammari1)** — profile hub for the rest of
  the projects.
