/*
 * Day: 05
 * Date: 2026-08-05
 * Topic: Sum of N Numbers
 * Challenge: Ask the user for a number N. Calculate the sum of all numbers from 1 to N.
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: [Easy]
 * Time Taken: [05 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    int N;
    cout << "Enter a number N: ";
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; ++i)
    {
        sum += i;
    }
    cout << "The sum of numbers from 1 to " << N << " is: " << sum << endl;
    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here