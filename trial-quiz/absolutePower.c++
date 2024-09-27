#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float num1;
    float num2;
    cin >> num1;
    cin >> num2;

    double power = pow(num1, num2);
    double square = sqrt(num1);
    double minus = num1 - num2;

    cout << power << "\t";
    cout << square << "\t";
    cout << minus << "\t";

    return 0;
}