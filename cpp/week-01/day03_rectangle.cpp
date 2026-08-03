/*
 * Day: 03
 * Date: 2026-08-03
 * Topic: Calculate the area and perimeter of a rectangle
 * Challenge: Take length and width as input and display the area and perimeter
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: [Easy]
 * Time Taken: [10 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    double length, width;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the width: ";
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here