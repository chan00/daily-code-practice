#include <iostream>
#include <string>
using namespace std;

// Helper function - C++ has no simple .replace() like Python
string replaceAll(string text, string from, string to)
{
    size_t pos = 0;
    while ((pos = text.find(from, pos)) != string::npos)
    {
        text.replace(pos, from.length(), to);
        pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return text;
}

string convert(string s)
{
    s = replaceAll(s, ":)", "🙂");
    s = replaceAll(s, ":(", "🙁");
    return s;
}

int main()
{
    string text;
    getline(cin, text);
    cout << convert(text) << endl;
    return 0;
}