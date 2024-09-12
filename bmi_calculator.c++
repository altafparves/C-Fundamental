#include <iostream>
#include <cmath> // library for math operations

using namespace std;

int main()
{
    // Declare variables for weight and height
    float weight, height_cm, height_m, bmi;

    // Input weight (in kg) and height (in cm)
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (cm): ";
    cin >> height_cm;

    // Convert height from cm to meters
    height_m = height_cm / 100;

    // Process: calculate BMI
    bmi = weight / pow(height_m, 2); // BMI = weight / height^2 (in meters), pow() is a function from cmath library

    // Output BMI and category
    cout << "Your BMI is: " << bmi << endl;
    // Determine category
    if (bmi < 18.5)
    {
        cout << "Category: Underweight" << endl;
    }
    // BMI is between 18.5 and 24.9
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        cout << "Category: Normal" << endl;
    }
    // BMI is between 25 and 29.9
    else if (bmi >= 25 && bmi < 29.9)
    {
        cout << "Category: Overweight" << endl;
    }
    // BMI is 30 or more
    else
    {
        cout << "Category: Obesity" << endl;
    }

    return 0;
}
