#include <iostream>
using namespace std;

void homework1()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << number << " is even." << endl;
    }
    else
    {
        cout << number << " is odd." << endl;
    }
}

void homework2()
{
    // decraling variables
    int num1, num2, num3;
    cout << "<=== Enter three numbers ===>\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    // setting min and max values
    int minVal = num1, maxVal = num1;

    // checking for min values
    if (num2 < minVal)
        minVal = num2;
    if (num3 < minVal)
        minVal = num3;

    // checking for max values
    if (num2 > maxVal)
        maxVal = num2;
    if (num3 > maxVal)
        maxVal = num3;

    // printing min and max values
    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;
}

void homework3(){
    int total_spent;
    cout << "Enter the total amount spent: ";
    cin >> total_spent;

    // declaring final_amount variables
    double final_amount = total_spent;
    // set discount percentage
    int discount_percentage = 0;
    // checking for discount
    if (total_spent >= 100 && total_spent <= 500)
    {
        discount_percentage = 5; // 5% discount
        final_amount = total_spent * 0.95;
    }
    else if (total_spent >= 501 && total_spent <= 1000)
    {
        discount_percentage = 10; // 10% discount
        final_amount = total_spent * 0.90;
    }
    else if (total_spent > 1000)
    {
        discount_percentage = 15; // 15% discount
        final_amount = total_spent * 0.85;
    }

    cout << "Discount applied: " << discount_percentage << "%" << endl;
    cout << "Final amount to be paid: $" << final_amount << endl;
}

int main()
{
    int choice;
    cout << "Select Program";
    cout << "1. Even or odd number program\n";
    cout << "2. Max or min value program\n";
    cout << "3. Discound calculator program\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        homework1();
        break;
    case 2:
        homework2();
        break;
    case 3:
        homework3();
        break;
    default:
        cout << "Invalid choice! Please select 1, 2, or 3.\n";
        break;
    }

    return 0;
}
