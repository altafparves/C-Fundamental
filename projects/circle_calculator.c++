#include <iostream>
#include <cmath> // for M_PI constant and pow function

using namespace std;

int main()
{
    // Declare variable for radius, area, and circumference
    float radius, area, circumference;

    // Input radius from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Process: Calculate the area and circumference of the circle
    area = M_PI * pow(radius, 2);      // M_PI is a constant for pi (3.14159), used to calculate area = π * r^2
    circumference = 2 * M_PI * radius; // M_PI is used here to calculate circumference = 2 * π * r

    // Output: Display the area and circumference
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
