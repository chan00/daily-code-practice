#include <iostream>
#include <string>
#include <iomanip> // for setprecision and fixed
using namespace std;

float dollars_to_float(string d)
{
    // Remove "$" from the start
    if (d[0] == '$')
    {
        d = d.substr(1); // everything after first character
    }

    return stof(d); // string to float
}

float percent_to_float(string p)
{
    // Remove "%" from the end
    if (p.back() == '%')
    {
        p.pop_back(); // removes last character
    }

    return stof(p) / 100;
}

int main()
{
    string meal, pct;
    cout << "How much was the meal? ";
    getline(cin, meal);
    cout << "What percentage would you like to tip? ";
    getline(cin, pct);
    float dollars = dollars_to_float(meal);
    float percent = percent_to_float(pct);
    float tip = dollars * percent;
    cout << "Leave $" << fixed << setprecision(2) << tip << endl;
    return 0;
}