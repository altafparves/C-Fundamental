#include <iostream>

using namespace std;

int main()
{
    int rows, cols;

    cin >> rows >> cols;

    int **array = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += array[i][j];
        }
    }

    cout << "Sum: " << sum << endl;

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}