/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Conditional Statements (number to word, n <= 9)
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Map 1..9 to its English word, otherwise print 'Greater than 9'. Uses a custom ltrim/rtrim to clean the input line.
 * Time       : O(1)
 * Space      : O(1)
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if (n == 1) {
        cout << "one" << endl;
    } else if (n == 2) {
        cout << "two" << endl;
    } else if (n == 3) {
        cout << "three" << endl;
    } else if (n == 4) {
        cout << "four" << endl;
    } else if (n == 5) {
        cout << "five" << endl;
    } else if (n == 6) {
        cout << "six" << endl;
    } else if (n == 7) {
        cout << "seven" << endl;
    } else if (n == 8) {
        cout << "eight" << endl;
    } else if (n == 9) {
        cout << "nine" << endl;
    } else {
        cout << "Greater than 9" << endl;
    }
    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch) { return !isspace(ch); }));

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(find_if(s.rbegin(), s.rend(), [](int ch) { return !isspace(ch); }).base(), s.end());

    return s;
}
