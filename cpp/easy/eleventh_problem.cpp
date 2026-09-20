/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Strings
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-strings/problem
 * Difficulty : Easy
 * Topic      : Strings
 * Approach   : Print both lengths, the concatenation, then swap the first characters and reprint.
 * Time       : O(|a| + |b|)
 * Space      : O(|a| + |b|)
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

// first method
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a = "", b = "";
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    char c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout << a << " " << b << endl;
    return 0;
}

// second method
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a="",b="";
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    cout << b[0] + a.substr(1,a.size() - 1) << " " << a[0] + b.substr(1,b.size() - 1) << endl;
    return 0;
}*/