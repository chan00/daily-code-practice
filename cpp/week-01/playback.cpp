#include <iostream>
#include <string>
using namespace std;

string replaceAll(string text, string from, string to)
{
    size_t pos = 0;

    while ((pos = text.find(from, pos)) != string::npos)
    {
        text.replace(pos, from.length(), to);
        pos += to.length();
    }

    return text;
}

int main()
{
    string text;
    getline(cin, text);
    cout << replaceAll(text, " ", "...") << endl;
    return 0;
}