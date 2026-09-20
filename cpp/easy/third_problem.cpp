/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Basic Data Types
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Read int, long, char, float, double and print each with the required precision.
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

// first Method
int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout.precision(3);
    cout << fixed << d << endl;
    cout.precision(9);
    cout << fixed << e << endl;
    return 0;
}

// second Method
/*
int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    printf("%.3f\n",d);
    printf("%.9lf",e);
    return 0;
}
*/