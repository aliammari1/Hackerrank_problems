# Roadmap

This is an archive, not a product, so the roadmap is deliberately small.

## Done

- Real CI: compiles **every** `.cpp` (`g++ -std=c++17 -Wall`) and **every**
  `.java`, failing on any error (no more `head -5 || echo`).
- Standardized, auto-generated header blocks (problem, link, difficulty, topic,
  approach, complexity) + a generator (`scripts/generate.py`) that also keeps the
  README index and the mkdocs docs in sync.
- `clang-format` (C++) and `google-java-format` (Java) enforced in CI.
- mkdocs-material docs site with C++/Java content tabs; Cloudflare Pages deploy
  workflow (gated on CF secrets).
- Relicensed to MIT (solution code only; problem statements remain HackerRank IP).

## Next

- Fill the remaining header `TODO: confirm` fields (a couple of ordinally-named
  Java files whose exact HackerRank slug isn't certain — see `scripts/metadata.json`).
- Add a banner/social preview per `BANNER.md`.
- Optional: a golden-file `stdin/stdout` test harness (`tests/<problem>/{input,expected}.txt`)
  for solutions whose behaviour is worth pinning beyond "it compiles".
- Grow beyond `easy/` as more problems are solved; the layout and generator
  already support `medium/` and `hard/` subfolders.
