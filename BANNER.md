# Banner / social preview

One prompt, two crops. Generate with the `brandkit` skill (or any image model),
export to `assets/banner.png` (1280×640, GitHub social preview) and
`assets/banner-hero.svg` (or `.png`, wide README hero), then:

1. Replace the `TODO(banner)` comment at the top of `README.md` with the hero
   (`assets/banner-hero.*`).
2. Set `assets/banner.png` as the GitHub social preview
   (Settings → Social preview).

Commit the assets **locally** so they never rate-limit or 404.

## The prompt

> A dark code-terminal banner, near-black background `#0a0e0a` with a faint
> CRT scanline texture and subtle vignette. A monospace title reads
> **"HackerRank Problems"** in HackerRank green `#2EC866`, with a dimmer
> `#1BA94C` subtitle **"C++ · Java · compile-checked archive"** beneath it.
> To the left, a green `>` prompt glyph and a single typed command line
> `> g++ -std=c++17 -Wall solution.cpp` with a blinking block cursor. A small
> stat line in muted green reads **"30 problems · 2 languages"**. The handle
> `@aliammari1` sits understated in the bottom-right corner. Flat, technical,
> editorial — no stock clip-art, no gradients beyond the vignette, no people.
> The mood: "the work speaks for me."

## Specs

| File | Size | Use |
|------|------|-----|
| `assets/banner.png` | 1280×640 | GitHub social preview |
| `assets/banner-hero.svg` / `.png` | ~1600×400 | wide README hero |

Palette: terminal-black `#0a0e0a`, HackerRank green `#2EC866`, dim green
`#1BA94C`. Type: a clean monospace (e.g. JetBrains Mono / IBM Plex Mono).
