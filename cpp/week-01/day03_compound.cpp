/*
 * Day: 03
 * Date: 2026-08-03
 * Topic: Compound Interest Calculation
 * Challenge: Ask for principal (P), rate (R), and time (T) and calculate compound interest: A = P × (1 + R/100)^T
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: [Easy]
 * Time Taken: [10 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    double p, r, t, a;
    cout << "Enter principal: ";
    cin >> p;
    cout << "Enter rate (%): ";
    cin >> r;
    cout << "Enter time (years): ";
    cin >> t;
    a = p * pow(1 + r / 100, t);
    cout << "Amount: " << a << endl;
    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here