#include <iostream>

using namespace std;

double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double c) {
    return c + 273.15;
}

double fahrenheitToCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double f) {
    return (f + 459.67) * 5.0 / 9.0;
}

double kelvinToCelsius(double k) {
    return k - 273.15;
}

double kelvinToFahrenheit(double k) {
    return (k * 9.0 / 5.0) - 459.67;
}

int main() {
    int choice;
    double value;

    cout << "Select the source temperature unit:\n";
    cout << "1. Celsius\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Kelvin\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> value;
        double f = celsiusToFahrenheit(value);
        double k = celsiusToKelvin(value);
        cout << "Fahrenheit: " << f << "F" << endl;
        cout << "Kelvin: " << k << "K" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> value;
        double c = fahrenheitToCelsius(value);
        double k = fahrenheitToKelvin(value);
        cout << "Celsius: " << c << "C" << endl;
        cout << "Kelvin: " << k << "K" << endl;
    } else if (choice == 3) {
        cout << "Enter temperature in Kelvin: ";
        cin >> value;
        double c = kelvinToCelsius(value);
        double f = kelvinToFahrenheit(value);
        cout << "Celsius: " << c << "C" << endl;
        cout << "Fahrenheit: " << f << "F" << endl;
    } else {
        cout << "Invalid choice! Please select 1, 2, or 3." << endl;
    }

    return 0;
}
