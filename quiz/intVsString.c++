#include <iostream>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int digits = 0;
    int characters = 0;

    for (char c : s)
    {
        if (isdigit(c))
        {
            digits++;
        }
        else
        {
            characters++;
        }
    }

    cout << digits << " " << characters << endl;

    return 0;
}