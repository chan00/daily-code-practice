/*
 * Day: 04
 * Date: 2026-08-04
 * Topic: Grades
 * Challenge: Ask for a grade (0-100) and print the corresponding letter grade.
 * What I Learned: if else elif loop
 * Difficulty: [Easy]
 * Time Taken: [05 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    int grade;
    cout << "Enter your grade (0-100): ";
    cin >> grade;

    if (grade >= 90 && grade <= 100)
    {
        cout << "Your letter grade is: A" << endl;
    }
    else if (grade >= 80 && grade <= 89)
    {
        cout << "Your letter grade is: B" << endl;
    }
    else if (grade >= 70 && grade <= 79)
    {
        cout << "Your letter grade is: C" << endl;
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "Your letter grade is: D" << endl;
    }
    else if (grade < 60)
    {
        cout << "Your letter grade is: F" << endl;
    }
    else
    {
        cout << "Invalid grade entered. Please enter a grade between 0 and 100." << endl;
    }

    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here