# Contributing

This is a personal, archive-style collection of HackerRank solutions. It is not a
product, so the rules are intentionally short. Contributions that add a clean,
correct solution (or fix an existing one) are welcome.

## Naming

- **C++**: `cpp/<difficulty>/<name>_problem.cpp` (snake_case, e.g. `cpp/easy/first_problem.cpp`).
- **Java**: `java/<difficulty>/<name>_problem.java` with a **unique** `public class <name>_problem`.
  The HackerRank judge expects `public class Solution`; keeping a unique class per
  file lets every solution live in one folder and compile together. Rename the
  class to `Solution` only when you submit.

## Header block (required)

Every solution carries an auto-generated header. **Do not hand-edit it.** Instead:

1. Add an entry for your file to `scripts/metadata.json` (problem name, HackerRank
   URL, topic, approach, time/space complexity). If you genuinely cannot identify
   the real problem, leave that field `null` — the generator renders a visible
   `TODO: confirm` rather than a fabricated value.
2. Run the generator:

   ```bash
   python scripts/generate.py        # injects headers, regenerates README + docs
   python scripts/generate.py --check  # what CI runs; must exit 0
   ```

## Before opening a PR

```bash
# C++: must compile clean
g++ -std=c++17 -Wall cpp/easy/your_file.cpp -o /tmp/sol

# C++ formatting
clang-format -i cpp/**/*.cpp

# Java: must compile clean + be formatted
javac java/easy/your_file.java
google-java-format --aosp --replace java/**/*.java

# Index/header check
python scripts/generate.py --check
```

CI runs exactly these checks and **fails on any error** — no warnings are
swallowed.

## Good first issues

Want to help but not sure where to start? Open issues labelled
[`good first issue`](https://github.com/aliammari1/Hackerrank_problems/issues?q=is%3Aissue+is%3Aopen+label%3A%22good+first+issue%22)
track problems that still need a solution (or a `TODO: confirm` link to fill in).
Each is small and self-contained — add one file, one `metadata.json` entry, run
the generator, open the PR.

## Scope

Problem statements and test data are HackerRank's intellectual property — never
commit them. Only your own solution code belongs here.

> Discoverability note (maintainer): this archive is a candidate for the
> [`lnishan/awesome-competitive-programming`](https://github.com/lnishan/awesome-competitive-programming)
> list — open a PR there once the live docs site is published.
