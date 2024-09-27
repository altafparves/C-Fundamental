#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int int_num;
    float float_num;

    // Input two numbers
    cin >> int_num;
    cin >> float_num;

    // Perform calculations
    float sum = int_num + float_num;
    float difference = int_num - float_num;
    float product = int_num * float_num;
    float quotient = static_cast<float>(int_num) / float_num; // Ensure floating-point division

    // Set precision dynamically without forcing trailing zeros
    cout << setprecision(5) << sum << " " << difference << " " << product << " " << quotient << endl;

    return 0;
}
