<!-- TODO(banner): replace this comment with the wide hero once generated:
     ![HackerRank Problems](assets/banner-hero.svg)
     and set assets/banner.png as the GitHub social preview. See BANNER.md for
     the single image-gen prompt. Until then no remote hero is referenced, so
     nothing 404s. -->

# HackerRank Problems &mdash; C++ & Java Archive

A personal, compile-checked archive of my [HackerRank](https://www.hackerrank.com/)
solutions in **C++** and **Java**. Every file carries a standardized header
(problem, link, difficulty, topic, approach, complexity) and is compiled in CI on
every push, so the archive stays green and self-documenting.

[![CI](https://github.com/aliammari1/Hackerrank_problems/actions/workflows/ci.yml/badge.svg)](https://github.com/aliammari1/Hackerrank_problems/actions/workflows/ci.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
![C++17](https://img.shields.io/badge/C%2B%2B-17-00599C?logo=c%2B%2B)
![Java](https://img.shields.io/badge/Java-21-007396?logo=openjdk)

> Problem statements are the intellectual property of HackerRank. This repo
> contains **only my own solution code**, not the problem text or test data.

## Browse online (live docs)

The whole archive is published as a searchable **mkdocs-material** site on
**Cloudflare Pages** — the easiest way to browse:

**▶ Live docs: https://hackerrank-problems.pages.dev**

- **Solutions** — the full index, filterable by language and topic.
- **C++ vs Java** — the same fundamentals solved in both languages, shown with
  **content tabs** so you can flip between them side by side.

The site is rebuilt and redeployed by [`docs.yml`](.github/workflows/docs.yml)
on every push that touches a solution or the docs. To run it locally:

```bash
pip install -r docs/requirements.txt
mkdocs serve   # then open http://127.0.0.1:8000
```

## How to navigate

- **Quick scan** → the [Solutions Index](#solutions-index) table below (problem,
  language, difficulty, topic, original link).
- **By language** → [`cpp/easy/`](cpp/easy) and [`java/easy/`](java/easy).
- **C++ vs Java** → the [side-by-side page](docs/side-by-side.md) on the live
  site renders both in tabs.
- Every file opens with a header block (problem, link, difficulty, topic,
  approach, complexity), so any single file is self-explanatory.

## Repository layout

```
Hackerrank_problems/
├── cpp/easy/        # C++ solutions (one file per problem)
├── java/easy/       # Java solutions (one file per problem)
├── scripts/         # generate.py + metadata.json (headers + this index)
├── docs/            # mkdocs-material site (C++ vs Java side-by-side)
└── .github/         # CI: real compile-all gate + linters
```

## Conventions

- **C++** files are `snake_case.cpp`, compiled with `g++ -std=c++17 -Wall`.
- **Java** files keep a **unique `public class <name>` per file** (e.g.
  `public class first_problem`) so they all live in one folder and compile
  together. HackerRank's judge expects `public class Solution`, so **rename the
  class to `Solution` when submitting** — every file's header repeats this note.
- Each solution starts with an **auto-generated header block**. Do not edit it by
  hand; edit `scripts/metadata.json` and run the generator (below). Fields that
  could not be reliably tied to a real HackerRank problem from an ordinal
  filename are left as a visible `TODO: confirm` rather than guessed.

## Building locally

```bash
# C++
g++ -std=c++17 -Wall cpp/easy/first_problem.cpp -o sol && ./sol

# Java (rename the class to Solution first if running on HackerRank)
javac java/easy/first_problem.java && java -cp . first_problem
```

## Regenerating headers + this index

```bash
python scripts/generate.py            # refresh source headers and the table below
python scripts/generate.py --check    # CI mode: non-zero exit if anything is stale
```

## Solutions Index

<!-- SOLUTIONS:START -->

**Totals:** 30 solutions &mdash; 23 C++, 7 Java.

| # | Problem | Language | Difficulty | Topic | HackerRank |
|---|---------|----------|------------|-------|------------|
| 1 | [`Say "Hello, World!" With C++`](cpp/easy/first_problem.cpp) | C++ | Easy | Introduction | [link](https://www.hackerrank.com/challenges/cpp-hello-world/problem) |
| 2 | [`Input and Output`](cpp/easy/second_problem.cpp) | C++ | Easy | Introduction | [link](https://www.hackerrank.com/challenges/cpp-input-and-output/problem) |
| 3 | [`Basic Data Types`](cpp/easy/third_problem.cpp) | C++ | Easy | Introduction | [link](https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem) |
| 4 | [`Conditional Statements (number to word, n <= 9)`](cpp/easy/forth_problem.cpp) | C++ | Easy | Introduction | [link](https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem) |
| 5 | [`For Loop`](cpp/easy/fifth_problem.cpp) | C++ | Easy | Introduction | [link](https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem) |
| 6 | [`Functions`](cpp/easy/sixth_problem.cpp) | C++ | Easy | Introduction | [link](https://www.hackerrank.com/challenges/c-tutorial-functions/problem) |
| 7 | [`Pointers`](cpp/easy/seventh_problem.cpp) | C++ | Easy | Introduction | [link](https://www.hackerrank.com/challenges/c-tutorial-pointer/problem) |
| 8 | [`Arrays Introduction`](cpp/easy/eighth_problem.cpp) | C++ | Easy | STL | [link](https://www.hackerrank.com/challenges/arrays-introduction/problem) |
| 9 | [`Variable Sized Arrays`](cpp/easy/ninth_problem.cpp) | C++ | Easy | STL | [link](https://www.hackerrank.com/challenges/variable-sized-arrays/problem) |
| 10 | [`StringStream`](cpp/easy/tenth_problem.cpp) | C++ | Easy | Strings | [link](https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem) |
| 11 | [`Strings`](cpp/easy/eleventh_problem.cpp) | C++ | Easy | Strings | [link](https://www.hackerrank.com/challenges/c-tutorial-strings/problem) |
| 12 | [`Structs`](cpp/easy/twelfth_problem.cpp) | C++ | Easy | Classes | [link](https://www.hackerrank.com/challenges/c-tutorial-struct/problem) |
| 13 | [`Class`](cpp/easy/thirteenth_problem.cpp) | C++ | Easy | Classes | [link](https://www.hackerrank.com/challenges/c-tutorial-class/problem) |
| 14 | [`Classes and Objects`](cpp/easy/fourteenth_problem.cpp) | C++ | Easy | Classes | [link](https://www.hackerrank.com/challenges/classes-objects/problem) |
| 15 | [`Box It!`](cpp/easy/fifteenth_problem.cpp) | C++ | Easy | Classes | [link](https://www.hackerrank.com/challenges/box-it/problem) |
| 16 | [`Vector-Sort`](cpp/easy/sixteenth_problem.cpp) | C++ | Easy | STL | [link](https://www.hackerrank.com/challenges/vector-sort/problem) |
| 17 | [`Vector-Erase`](cpp/easy/seventeenth_problem.cpp) | C++ | Easy | STL | [link](https://www.hackerrank.com/challenges/vector-erase/problem) |
| 18 | [`Lower Bound-STL`](cpp/easy/eighteenth_problem.cpp) | C++ | Easy | STL | [link](https://www.hackerrank.com/challenges/cpp-lower-bound/problem) |
| 19 | [`Sets-STL`](cpp/easy/nineteenth_problem.cpp) | C++ | Easy | STL | [link](https://www.hackerrank.com/challenges/cpp-sets/problem) |
| 20 | [`Maps-STL`](cpp/easy/twentieth_problem.cpp) | C++ | Easy | STL | [link](https://www.hackerrank.com/challenges/cpp-maps/problem) |
| 21 | [`Inheritance Introduction`](cpp/easy/twentyfirst_problem.cpp) | C++ | Easy | Inheritance | [link](https://www.hackerrank.com/challenges/inheritance-introduction/problem) |
| 22 | [`Rectangle Area`](cpp/easy/twentysecond_problem.cpp) | C++ | Easy | Inheritance | [link](https://www.hackerrank.com/challenges/rectangle-area/problem) |
| 23 | [`Multi Level Inheritance`](cpp/easy/twentythird_problem.cpp) | C++ | Easy | Inheritance | [link](https://www.hackerrank.com/challenges/multi-level-inheritance/problem) |
| 24 | [`Welcome to Java! / Java Stdin and Stdout I`](java/easy/first_problem.java) | Java | Easy | Introduction | TODO: confirm |
| 25 | [`Java Stdin and Stdout I`](java/easy/second_problem.java) | Java | Easy | Introduction | [link](https://www.hackerrank.com/challenges/java-stdin-and-stdout-1/problem) |
| 26 | [`Java If-Else`](java/easy/third_problem.java) | Java | Easy | Introduction | [link](https://www.hackerrank.com/challenges/java-if-else/problem) |
| 27 | [`Java Stdin and Stdout II`](java/easy/fourth_problem.java) | Java | Easy | Introduction | [link](https://www.hackerrank.com/challenges/java-stdin-stdout/problem) |
| 28 | [`Java Output Formatting`](java/easy/fifth_problem.java) | Java | Easy | Introduction | [link](https://www.hackerrank.com/challenges/java-output-formatting/problem) |
| 29 | [`Java Loops II (multiplication table)`](java/easy/sixth_problem.java) | Java | Easy | Introduction | TODO: confirm |
| 30 | [`Java Loops`](java/easy/seventh_problem.java) | Java | Easy | Introduction | [link](https://www.hackerrank.com/challenges/java-loops/problem) |

<!-- SOLUTIONS:END -->

## Contributing

See [CONTRIBUTING.md](CONTRIBUTING.md) — it is intentionally short (naming +
header rules only; this is an archive, not a product). Missing solutions are
tracked as [good first issues](https://github.com/aliammari1/Hackerrank_problems/issues?q=is%3Aissue+is%3Aopen+label%3A%22good+first+issue%22).

## Topics

For discoverability, set the GitHub repo topics to: `hackerrank`,
`competitive-programming`, `dsa`, `cpp`, `java`, `hacktoberfest`.

## License

[MIT](LICENSE) © Ali Ammari ([@aliammari1](https://github.com/aliammari1)).
Solution code only; HackerRank owns the problem statements.
