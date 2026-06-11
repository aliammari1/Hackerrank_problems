/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Java Output Formatting
 * HackerRank : https://www.hackerrank.com/challenges/java-output-formatting/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Use printf with %-14s and %03d to left-pad strings and zero-pad numbers.
 * Time       : O(1)
 * Space      : O(1)
 *
 * HackerRank note: the online judge expects 'public class Solution'.
 * This archive keeps a unique class per file ('public class fifth_problem') so
 * every solution can live in one folder and compile together; when
 * submitting, rename the class to 'Solution'.
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

import java.io.*;

public class fifth_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("================================");
        for (int i = 0; i < 3; i++) {
            String[] input = reader.readLine().split(" ");
            String s = input[0];
            int n = Integer.parseInt(input[1]);
            System.out.printf("%-14s %03d%n", s, n);
        }
        System.out.println("================================");
    }
}
