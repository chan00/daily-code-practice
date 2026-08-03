/*
 * Day: 03
 * Date: 2026-08-03
 * Topic: Swap two variables without using a third variable
 * Challenge: Ask user for two numbers. Swap them WITHOUT using a third variable. Print before and after.
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: [Easy]
 * Time Taken: [10 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Before: a = " << a << ", b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After: a = " << a << ", b = " << b << endl;
    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here