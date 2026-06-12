---
title: HackerRank Solutions — C++ vs Java (side by side)
description: HackerRank solutions shown in C++ and Java side by side with content tabs, so you can compare the two languages directly.
---

# HackerRank Solutions: C++ vs Java

The same fundamentals solved in both languages. Use the tabs to flip between a representative C++ solution and a Java one.

## Hello World

=== "C++"

    **Say "Hello, World!" With C++** — `cpp/easy/first_problem.cpp`

    ```cpp
    /*
     * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
     *
     * Problem    : Say "Hello, World!" With C++
     * HackerRank : https://www.hackerrank.com/challenges/cpp-hello-world/problem
     * Difficulty : Easy
     * Topic      : Introduction
     * Approach   : Print the required string to stdout.
     * Time       : O(1)
     * Space      : O(1)
     *
     * Note: problem statements are the intellectual property of HackerRank.
     * This file contains only the author's own solution code.
     *
     * SPDX-License-Identifier: MIT
     */

    // First Method
    #include <iostream>
    #include <cstdio>
    using namespace std;

    int main() {
        cout << "Hello, World!" << endl;
        return 0;
    }

    // second method

    /* #include <iostream>
    #include <cstdio>
    using namespace std;

    int main() {
        printf("Hello, World!");
        return 0;
    } */
    ```

=== "Java"

    **Welcome to Java! / Java Stdin and Stdout I** — `java/easy/first_problem.java`

    ```java
    /*
     * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
     *
     * Problem    : Welcome to Java! / Java Stdin and Stdout I
     * HackerRank : TODO: confirm
     * Difficulty : Easy
     * Topic      : Introduction
     * Approach   : Print the two required greeting lines. (Ordinal filename; exact challenge slug unconfirmed.)
     * Time       : O(1)
     * Space      : O(1)
     *
     * HackerRank note: the online judge expects 'public class Solution'.
     * This archive keeps a unique class per file ('public class first_problem') so
     * every solution can live in one folder and compile together; when
     * submitting, rename the class to 'Solution'.
     *
     * Note: problem statements are the intellectual property of HackerRank.
     * This file contains only the author's own solution code.
     *
     * SPDX-License-Identifier: MIT
     */

    public class first_problem {
        public static void main(String[] args) {
            System.out.println("Hello, World.");
            System.out.println("Hello, Java.");
        }
    }
    ```

## Read 3 integers

=== "C++"

    **Input and Output** — `cpp/easy/second_problem.cpp`

    ```cpp
    /*
     * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
     *
     * Problem    : Input and Output
     * HackerRank : https://www.hackerrank.com/challenges/cpp-input-and-output/problem
     * Difficulty : Easy
     * Topic      : Introduction
     * Approach   : Read three integers and print their sum.
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

    int main() {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int x = 0, y = 0, z = 0;
        cin >> x;
        cin >> y;
        cin >> z;
        cout << x + y + z << endl;
        return 0;
    }
    ```

=== "Java"

    **Java Stdin and Stdout I** — `java/easy/second_problem.java`

    ```java
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
    ```

