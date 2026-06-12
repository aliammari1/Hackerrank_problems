/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Inheritance Introduction
 * HackerRank : https://www.hackerrank.com/challenges/inheritance-introduction/problem
 * Difficulty : Easy
 * Topic      : Inheritance
 * Approach   : Add a description() method to an Isosceles class that derives from Triangle.
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

class Triangle {
   public:
    void triangle() {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle {
   public:
    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }
    void description() {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};

int main() {
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}
