/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Variable Sized Arrays
 * HackerRank : https://www.hackerrank.com/challenges/variable-sized-arrays/problem
 * Difficulty : Easy
 * Topic      : STL
 * Approach   : Store a jagged 2D vector, then answer (i, j) index queries in O(1) each.
 * Time       : O(total elements + q)
 * Space      : O(total elements)
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0, q = 0;
    cin >> n >> q;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        int k = 0;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int x = 0;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < q; i++) {
        int s = 0, d = 0;
        cin >> s >> d;
        cout << v[s][d] << endl;
    }
    return 0;
}
