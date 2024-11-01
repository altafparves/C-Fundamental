#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Ukuran matriks

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "1 ";
        }
        for (int j = i + 1; j < n; j++)
        {
            cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
