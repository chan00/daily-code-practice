/*
 * Day: 03
 * Date: 2026-08-03
 * Topic: Simple Interest Calculation
 * Challenge: Ask for principal (P), rate (R), and time (T). Calculate: SI = P × R × T / 100
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: [Easy]
 * Time Taken: [10 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    double p, r, t, si;

    cout << "Enter principal: ";
    cin >> p;

    cout << "Enter rate (%): ";
    cin >> r;

    cout << "Enter time (years): ";
    cin >> t;

    si = (p * r * t) / 100;
    cout << "Simple Interest: " << si << endl;
    cout << "Total Amount: " << (p + si) << endl;
    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here