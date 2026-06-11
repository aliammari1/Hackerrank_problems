/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Class
 * HackerRank : https://www.hackerrank.com/challenges/c-tutorial-class/problem
 * Difficulty : Easy
 * Topic      : Classes
 * Approach   : Encapsulate Student fields behind getters/setters plus a to_string() helper.
 * Time       : O(1)
 * Space      : O(1)
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

#include <iostream>
#include <sstream>
using namespace std;

class Student {
    int age;
    string first_name;
    string last_name;
    int standard;

   public:
    void set_age(int a) {
        age = a;
    };
    void set_standard(int s) {
        standard = s;
    };
    void set_first_name(string f) {
        first_name = f;
    };
    void set_last_name(string l) {
        last_name = l;
    };
    int get_age() {
        return age;
    };
    int get_standard() {
        return standard;
    };
    string get_first_name() {
        return first_name;
    };
    string get_last_name() {
        return last_name;
    };
    string to_string() {
        stringstream ss("");
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    };
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}