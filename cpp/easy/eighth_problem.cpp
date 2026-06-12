/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Arrays Introduction
 * HackerRank : https://www.hackerrank.com/challenges/arrays-introduction/problem
 * Difficulty : Easy
 * Topic      : STL
 * Approach   : Read n integers and print them in reverse order.
 * Time       : O(n)
 * Space      : O(n)
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
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
    return 0;
}
