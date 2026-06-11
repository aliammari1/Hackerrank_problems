/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : For Loop
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Iterate from a to b; print the word for 1..9, otherwise 'even'/'odd'.
 * Time       : O(b - a)
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

int main() {
    // Complete the code.
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++) {
        if (i == 1)
            cout << "one" << endl;
        else if (i == 2)
            cout << "two" << endl;
        else if (i == 3)
            cout << "three" << endl;
        else if (i == 4)
            cout << "four" << endl;
        else if (i == 5)
            cout << "five" << endl;
        else if (i == 6)
            cout << "six" << endl;
        else if (i == 7)
            cout << "seven" << endl;
        else if (i == 8)
            cout << "eight" << endl;
        else if (i == 9)
            cout << "nine" << endl;
        else if (i > 9 && i % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    return 0;
}
