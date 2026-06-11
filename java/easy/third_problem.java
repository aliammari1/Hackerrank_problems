/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Java If-Else
 * HackerRank : https://www.hackerrank.com/challenges/java-if-else/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Classify n as Weird/Not Weird per the odd/even and range rules.
 * Time       : O(1)
 * Space      : O(1)
 *
 * HackerRank note: the online judge expects 'public class Solution'.
 * This archive keeps a unique class per file ('public class third_problem') so
 * every solution can live in one folder and compile together; when
 * submitting, rename the class to 'Solution'.
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

import java.io.*;

public class third_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());

        bufferedReader.close();
        System.out.println(
                (N % 2 == 1) || (N % 2 == 0 && N >= 6 && N <= 20) ? "Weird" : "Not Weird");
    }
}
