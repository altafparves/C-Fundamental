#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Perbandingan a dan b
    if (num > 0)
    {
        cout << "Positive" << endl;
    }
    else if (num < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    return 0;
}
