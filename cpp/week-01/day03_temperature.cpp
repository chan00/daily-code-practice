/*
 * Day: 03
 * Date: 2026-08-03
 * Topic: Convert temperature from Celsius to Fahrenheit
 * Challenge: Take temperature in Celsius as input and display it in Fahrenheit. Then do the reverse too — ask for Fahrenheit and convert it to Celsius.
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: [Easy]
 * Time Taken: [10 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    double celsius, fahrenheit;

    cout << "Enter Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Fahrenheit: " << fahrenheit << endl;

    cout << "Enter Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Celsius: " << celsius << endl;

    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here