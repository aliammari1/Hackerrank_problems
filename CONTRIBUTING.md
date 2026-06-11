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

## Scope

Problem statements and test data are HackerRank's intellectual property — never
commit them. Only your own solution code belongs here.
