#include <iostream>
using namespace std;

int factorial(int n)
{
    int hasil = 1;
    for (int i = 1; i <= n; ++i)
    {
        hasil *= i;
    }
    return hasil;
}

int main()
{
    int n;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    if (n >= 0)
    {
        cout << factorial(n) << endl;
    }
    else
    {
        cout << "Harap masukkan bilangan bulat positif." << endl;
    }

    return 0;
}
