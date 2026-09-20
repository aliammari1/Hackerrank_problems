/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Multi Level Inheritance
 * HackerRank : https://www.hackerrank.com/challenges/multi-level-inheritance/problem
 * Difficulty : Easy
 * Topic      : Inheritance
 * Approach   : Equilateral derives from Isosceles derives from Triangle; add equilateral().
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
};

class Equilateral : public Isosceles {
   public:
    void equilateral() {
        cout << "I am an equilateral triangle" << endl;
    };
};

// Write your code here.

int main() {
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
