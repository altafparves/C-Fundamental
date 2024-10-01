#include <iostream>

using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int array[rows][cols];

    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << "Sum of each row:\n";
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += array[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}