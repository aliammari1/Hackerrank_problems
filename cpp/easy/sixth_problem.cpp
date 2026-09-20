/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Functions
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-functions/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Implement max_of_four by pairwise comparison.
 * Time       : O(1)
 * Space      : O(1)
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int x = a;
    if (x < b)
        x = b;
    if (x < c)
        x = c;
    if (x < d)
        x = d;
    return x;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d) << endl;

    return 0;
}
