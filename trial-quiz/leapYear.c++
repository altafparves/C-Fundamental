#include <iostream>
using namespace std;

int main()
{
    int year;

    // Input tahun
    cin >> year;

    // Mengecek apakah tahun adalah tahun kabisat
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Normal Year" << endl;
    }

    return 0;
}
