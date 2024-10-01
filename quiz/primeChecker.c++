#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            cout << "Prime ";
        }
        else
        {
            cout << "Not Prime ";
        }
    }

    cout << endl; // Print a newline at the end
    return 0;
}