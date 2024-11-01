#include <iostream>
using namespace std;

int main() {
    // static array
    // declaration of array, size of array is 2 (the size is static), init values are 1 and 2
    // int array[2]={1,2};
    // for (size_t i = 0; i < 2; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // 2d array
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};


    // // Loop untuk menampilkan isi array
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl; // Untuk membuat baris baru setelah tiap baris selesai ditampilkan
    // }

    return 0;
}