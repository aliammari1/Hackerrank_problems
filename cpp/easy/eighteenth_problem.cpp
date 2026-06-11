/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Lower Bound-STL
 * HackerRank : https://www.hackerrank.com/challenges/cpp-lower-bound/problem
 * Difficulty : Easy
 * Topic      : STL
 * Approach   : For each query, binary_search for presence and lower_bound for the 1-based position.
 * Time       : O((n + q) log n)
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
    vector<unsigned long long> X(N, 0);
    for (int i = 0; i < N; i++)
        cin >> X[i];
    int Q = 0;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        unsigned long long Y = 0;
        cin >> Y;
        (binary_search(X.begin(), X.end(), Y)) ? cout << "Yes " : cout << "No ";
        cout << distance(X.begin(), lower_bound(X.begin(), X.end(), Y)) + 1 << endl;
    }
    return 0;
}
