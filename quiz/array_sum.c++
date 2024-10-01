#include <iostream>

using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 2;

    int **array = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }

    cout << "Masukkan " << rows * cols << " angka:\n";
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

    cout << "Jumlah semua elemen: " << sum << endl;

    // Deallocate memory
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}