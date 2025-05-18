#include <iostream>
using namespace std;

int main()
{
    int income, yearsJob;
    char criminalRecord, creditCardPayments;

    cout << "Enter applicant's income range: ";
    cin >> income;

    if (income < 30000)
    { 
        cout << "Does the applicant have a criminal record? (y/n): ";
        cin >> criminalRecord;

        if (criminalRecord == 'y')
        {
            cout << "Loan" << endl;
                }
        else
        {
            cout << "No loan" << endl;
        }
    }
    else if (income >= 30000 && income <= 70000)
    {
        cout << "Years in present job? ";
        cin >> yearsJob;

        if (yearsJob < 1)
        {
            cout << "No loan" << endl;
        }
        else if (yearsJob >= 1 && yearsJob <= 5)
        {
            cout << "Makes credit card payments? (y/n): ";
            cin >> creditCardPayments;

            if (creditCardPayments == 'y')
            {
                cout << "Loan" << endl;
            }
            else
            {
                cout << "No loan" << endl;
            }
        }
        else
        { 
            cout << "Loan" << endl;
        }
    }
    else if (income >= 70000)
    { 
        cout << "Does the applicant have a criminal record? (y/n): ";
        cin >> criminalRecord;

        if (criminalRecord == 'y')
        {
            cout << "No loan" << endl;
        }
        else
        {
            cout << "Loan" << endl;
        }
    }
    else
    {
        cout << "Invalid income range input." << endl;
    }

    return 0;
}