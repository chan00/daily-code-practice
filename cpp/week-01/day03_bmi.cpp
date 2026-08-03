/*
 * Day: 03
 * Date: 2026-08-03
 * Topic: Calculate BMI (Body Mass Index)
 * Challenge: Take weight and height as input and display the BMI and Print the BMI and the category
 * What I Learned: [Fill this AFTER completing]
 * Difficulty: [Easy]
 * Time Taken: [10 minutes]
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code here
    double weight, height, bmi;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5)
    {
        cout << "Category: Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        cout << "Category: Normal" << endl;
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        cout << "Category: Overweight" << endl;
    }
    else
    {
        cout << "Category: Obese" << endl;
    }

    return 0;
}

// ============ NOTES ============
// Write any observations, tricks, or "aha!" moments here