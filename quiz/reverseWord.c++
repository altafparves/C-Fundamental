#include <iostream>
#include <string>

using namespace std;

string ngalamReverse(string str)
{
    int n = str.length();
    string reversed = "";

    for (int i = n - 1; i >= 0; i--)
    {
        if (i > 0 && str[i] == 'g' && str[i - 1] == 'n')
        {
            reversed += "ng";
            i--;
        }
        else
        {
            reversed += str[i];
        }
    }

    return reversed;
}

int main()
{
    string inputString;

    cin >> inputString;

    string outputString = ngalamReverse(inputString);
    cout << outputString << endl;

    return 0;
}