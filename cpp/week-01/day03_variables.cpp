/*
 * Day: 01
 * Date: 2025-08-03
 * Topic: Store your name, age, city, and profession in variables
 * Challenge: Print a Personal info card using variables by taking input from the user.
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: Easy
 * Time Taken: [XX minutes]
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // --- Taking input from the user ---
    string name, age, city, profession;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    getline(cin, age);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your profession: ";
    getline(cin, profession);

    // --- Personal Introduction ---
    cout << "==============================" << endl;
    cout << "  Name:        " << name << endl;
    cout << "  Age:         " << age << endl;
    cout << "  City:        " << city << endl;
    cout << "  Profession:  " << profession << endl;
    cout << "==============================" << endl;

    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here:
//
