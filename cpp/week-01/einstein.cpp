#include <iostream>
using namespace std;

int main()
{
    long long c = 30000000;

    cout << "m: ";
    long long m;
    cin >> m;

    long long e = m * c * c;
    cout << "E: " << e << endl;

    return 0;
}