/*
 * Day: 05
 * Date: 2026-08-05
 * Topic: Multiplication Table
 * Challenge: Ask the user for a number. Print its multiplication table from 1 to 10.
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: [Easy]
 * Time Taken: [05 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Multiplication Table for " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i)
    {
        int result = number * i;
        cout << number << " x " << i << " = " << result << endl;
    }
    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here