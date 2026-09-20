/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Vector-Erase
 * HackerRank : https://www.hackerrank.com/challenges/vector-erase/problem
 * Difficulty : Easy
 * Topic      : STL
 * Approach   : Erase a single 1-based index, then erase a [a, b) range, then print the remaining size and elements.
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
    int N = 0;
    cin >> N;
    vector<int> v(N);
    for (auto i = 0; i < v.size(); i++)
        cin >> v[i];
    int x = 0;
    cin >> x;
    v.erase(v.begin() + x - 1);
    int a = 0, b = 0;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
