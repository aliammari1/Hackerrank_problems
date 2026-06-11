/*
 * Auto-generated header (scripts/generate.py) -- edit metadata.json, not this block.
 *
 * Problem    : Rectangle Area
 * HackerRank : https://www.hackerrank.com/challenges/rectangle-area/problem
 * Difficulty : Easy
 * Topic      : Inheritance
 * Approach   : RectangleArea derives from Rectangle, reads dimensions, and overrides display() to print the area.
 * Time       : O(1)
 * Space      : O(1)
 *
 * Note: problem statements are the intellectual property of HackerRank.
 * This file contains only the author's own solution code.
 *
 * SPDX-License-Identifier: MIT
 */

#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
   protected:
    int width = 0;
    int height = 0;

   public:
    void display() {
        cout << width << " " << height << endl;
    };
};

class RectangleArea : public Rectangle {
   public:
    void read_input() {
        cin >> Rectangle::width;
        cin >> Rectangle::height;
    };
    void display() {
        cout << Rectangle::width * Rectangle::height << endl;
    };
};

int main() {
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}