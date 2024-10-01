#include <iostream>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int gcdResult = gcd(num1, num2);
    int lcmResult = lcm(num1, num2);

    cout << "GCD: " << gcdResult << endl;
    cout << "LCM: " << lcmResult << endl;

    return 0;
}