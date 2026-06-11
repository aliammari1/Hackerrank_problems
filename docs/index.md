# HackerRank Problems — C++ & Java

A compile-checked archive of my [HackerRank](https://www.hackerrank.com/)
solutions, written in **C++** and **Java**.

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
