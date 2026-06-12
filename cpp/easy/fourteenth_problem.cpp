/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Classes and Objects
 * HackerRank : https://www.hackerrank.com/challenges/classes-objects/problem
 * Difficulty : Easy
 * Topic      : Classes
 * Approach   : Build n Student objects, total each one's five scores, and count how many beat student 0 (Kristen).
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
#include <cassert>
using namespace std;

class Student {
    vector<int> scores = {};

   public:
    void input() {
        for (int i = 0; i < 5; i++) {
            int x = 0;
            cin >> x;
            scores.push_back(x);
        }
    };
    int calculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < scores.size(); i++) {
            sum += scores[i];
        }
        return sum;
    };
};

int main() {
    int n;  // number of students
    cin >> n;
    Student* s = new Student[n];  // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
