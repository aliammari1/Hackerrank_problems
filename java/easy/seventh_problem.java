/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Java Loops
 * HackerRank : https://www.hackerrank.com/challenges/java-loops/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : For each query print a, a+2^0*b, a+(2^0+2^1)*b, ... building the series incrementally.
 * Time       : O(q * n)
 * Space      : O(1)
 *
 * HackerRank note: the online judge expects 'public class Solution'.
 * This archive keeps a unique class per file ('public class seventh_problem') so
 * every solution can live in one folder and compile together; when
 * submitting, rename the class to 'Solution'.
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

import java.io.*;

public class seventh_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int q = Integer.parseInt(reader.readLine());
        int a = 0;
        int b = 0;
        int n = 0;
        for (int i = 0; i < q; i++) {
            String[] input = reader.readLine().split(" ");
            a = Integer.parseInt(input[0]);
            b = Integer.parseInt(input[1]);
            n = Integer.parseInt(input[2]);
            for (int j = 0; j < n; j++) {
                a += Math.pow(2, j) * b;
                System.out.print(a + " ");
            }
            System.out.println();
        }
    }
}
