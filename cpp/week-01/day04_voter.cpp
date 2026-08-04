/*
 * Day: 04
 * Date: 2026-08-04
 * Topic: Voter Eligibility
 * Challenge: Ask for the user's age. Print "You can vote!" if 18 or older, otherwise print "You cannot vote yet. X years to go." where X is how many years they need to wait.
 * What I Learned: if else elif loop
 * Difficulty: [Easy]
 * Time Taken: [05 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote!" << endl;
    }
    else
    {
        int yearsToGo = 18 - age;
        cout << "You cannot vote yet. " << yearsToGo << " years to go." << endl;
    }

    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here