/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Java Stdin and Stdout I
 * HackerRank : https://www.hackerrank.com/challenges/java-stdin-and-stdout-1/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Read three integers from stdin and echo them on separate lines.
 * Time       : O(1)
 * Space      : O(1)
 *
 * HackerRank note: the online judge expects 'public class Solution'.
 * This archive keeps a unique class per file ('public class second_problem') so
 * every solution can live in one folder and compile together; when
 * submitting, rename the class to 'Solution'.
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

import java.io.*;

public class second_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int x = Integer.parseInt(reader.readLine());
        int y = Integer.parseInt(reader.readLine());
        int z = Integer.parseInt(reader.readLine());
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
    }
}
