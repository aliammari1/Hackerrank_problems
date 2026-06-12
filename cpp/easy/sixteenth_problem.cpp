/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Vector-Sort
 * HackerRank : https://www.hackerrank.com/challenges/vector-sort/problem
 * Difficulty : Easy
 * Topic      : STL
 * Approach   : Read into a vector and std::sort ascending.
 * Time       : O(n log n)
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
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
