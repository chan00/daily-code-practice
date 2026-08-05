/*
 * Day: 05
 * Date: 2026-08-05
 * Topic: Print a Right Triangle
 * Challenge: Ask for number of rows. Print a right triangle of *
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
    cout << "Enter the number of rows: ";
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here