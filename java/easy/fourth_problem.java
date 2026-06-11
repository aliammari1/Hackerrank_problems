/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Java Stdin and Stdout II
 * HackerRank : https://www.hackerrank.com/challenges/java-stdin-stdout/problem
 * Difficulty : Easy
 * Topic      : Introduction
 * Approach   : Read an int, a double and a string and print them in the required order.
 * Time       : O(1)
 * Space      : O(1)
 *
 * HackerRank note: the online judge expects 'public class Solution'.
 * This archive keeps a unique class per file ('public class fourth_problem') so
 * every solution can live in one folder and compile together; when
 * submitting, rename the class to 'Solution'.
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

import java.io.*;

public class fourth_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int x = Integer.parseInt(reader.readLine());
        double d = Double.parseDouble(reader.readLine());
        String s = reader.readLine();
        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + x);
    }
}
