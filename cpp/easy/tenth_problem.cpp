/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : StringStream
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
 * Difficulty : Easy
 * Topic      : Strings
 * Approach   : Parse a comma-separated list of ints with a stringstream, discarding commas.
 * Time       : O(n)
 * Space      : O(n)
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    char ch = 0;
    int x = 0;
    int l = 0;
    vector<int> a;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',')
            l++;
    }
    for (int i = 0; i <= l; i++) {
        ss >> x;
        ss >> ch;
        a.push_back(x);
    }
    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}