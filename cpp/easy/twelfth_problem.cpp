/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Structs
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-struct/problem
 * Difficulty : Easy
 * Topic      : Classes
 * Approach   : Read a Student struct's fields and print them back.
 * Time       : O(1)
 * Space      : O(1)
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

struct Student {
    int age, standard;
    string first_name, last_name;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}