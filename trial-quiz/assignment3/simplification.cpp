#include <iostream>
#include <string>
using namespace std;

string compressString(const string &s)
{
    string compressed = "";
    int count = 1;

    for (int i = 1; i <= s.length(); i++)
    {
        if (i < s.length() && s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            compressed += s[i - 1];
            if (count > 1)
            {
                compressed += to_string(count);
            }
            count = 1;
        }
    }

    return compressed;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string compressed = compressString(s);

    if (compressed.length() < s.length())
    {
        cout << compressed << endl;
    }
    else
    {
        cout << s << endl;
    }

    return 0;
}
