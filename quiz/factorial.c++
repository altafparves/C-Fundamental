#include <iostream>

using namespace std;

typedef long long NewType;

NewType factorial(int n)
{
    NewType result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;

    cin >> number;

    if (number < 0)
    {
    }
    else
    {

        NewType fact = factorial(number);
        cout << fact << endl;
    }

    return 0;
}