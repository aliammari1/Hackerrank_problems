/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Pointers
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Via pointers, set *a to the sum and *b to the absolute difference.
 * Time       : O(1)
 * Space      : O(1)
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

#include <iostream>
#include <stdio.h>

using namespace std;

void update(int* a, int* b) {
    // Complete this function
    int x = *b;

    if (*a > *b)
        *b = *a - *b;
    else
        *b = *b - *a;

    *a += x;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
