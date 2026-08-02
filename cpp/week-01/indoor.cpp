#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    transform(text.begin(), text.end(), text.begin(), ::tolower);

    cout << text << endl;

    return 0;
}
