/*
 * Day: 04
 * Date: 2026-08-04
 * Topic: Sign Check
 * Challenge: Determine if a number is positive, negative, or zero
 * What I Learned: if else elif loop
 * Difficulty: [Easy]
 * Time Taken: [05 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The number is positive." << endl;
    }
    else if (num < 0)
    {
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }

    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here