// experiment 3
// #include <iostream>
// #include <string>
// using namespace std;

// typedef struct Person {
//     string name;
//     int NIM;
//     int age;
// } Student;

// int main() {
//     int i, n;

//     cout << "Masukkan jumlah data mahasiswa: ";
//     cin >> n;
//     cout << endl;

//     Student s_array[n];

//     cout << "Masukkan Data Mahasiswa \n";
//     for (i = 0; i < n; i++) {
//         cout << "Masukkan Nama mahasiswa: ";
//         cin >> s_array[i].name;
//         cout << "Masukkan NIM mahasiswa: ";
//         cin >> s_array[i].NIM;
//         cout << "Masukkan Umur mahasiswa: ";
//         cin >> s_array[i].age;
//         cout << endl;
//     }

//     cout << "\nDaftar Mahasiswa\n";
//     cout << "\nNo.\tNama\t\tNIM\t\tUmur\n";
//     for (i = 0; i < n; i++) {
//         cout << i + 1 << "\t" << s_array[i].name << "\t\t" << s_array[i].NIM << "\t\t" << s_array[i].age << endl;
//     }

//     return 0;
// }

// experiment 4
// #include <iostream>
// using namespace std;

// int main()
// {
//     int A[5][5], i, j, k, li; // deklarasi array A bertipe integer dan memiliki ukuran baris 5 dan kolom 5

//     // inisialisasi indeks dari array A dimulai dari indeks [0][0]
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++) // set nilai elemen dimulai dari array A[0][0], baris ke 0 akan diset ke nilai 100 selanjutnya kenaikan baris akan bertambah 1
//         {
//             A[i][j] = 1 + 100;
//         }
//     }

//     cout << "Indeks\t\tNilai Elemen\tAlamat" << endl;
//     // menampilkan indeks dan nilai dari tiap elemen array A serta lokasi alamat memorinya
//     for (int k = 0; k < 5; k++)
//     {
//         for (int l = 0; l < 5; l++)
//         {
//             cout << "[" << k << "]"
//                  << "[" << l << "]"
//                  << "\t\t" << A[k][l]
//                  << "\t\t\t\t" << &A[k][l] << endl;
//         }
//     }
// }

// experiment 5
// #include <iostream>
// using namespace std;

// int main()
// {
//     int s[3][3];
//     int i, j;

//     cout << "\nMasukkan SKS Mahasiswa untuk 3 Angkatan yang berbeda\n";

//     for (i = 0; i < 3; i++)
//     {
//         cout << "\nAngkatan 202" << i << "\t";
//         for (j = 0; j < 3; j++)
//         {
//             cout << "\nSKS Mahasiswa [" << i << "][" << j << "] = ";
//             cin >> s[i][j];
//         }
//     }

//     cout << endl;
//     cout << "\nTampilkan data SKS Mahasiswa 3 Angkatan\n";
//     cout << "\nAngkatan\t\tSKS\n";

//     for (i = 0; i < 3; i++)
//     {
//         cout << "202" << i << "\t\t";
//         for (j = 0; j < 3; j++)
//         {
//             cout << "\t" << s[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }

// experiment 6
#include <iostream>
using namespace std;

struct Rectangular {
    int length;
    int width;
};

int main() {
    Rectangular *ptr, r;
    int area;

    ptr = &r;

    cout << "Enter length: " << endl;
    cin >> (*ptr).length;

    cout << "Enter width: " << endl;
    cin >> (*ptr).width;

    area = (*ptr).length * (*ptr).width;

    cout << "Displaying information of Rectangular" << endl;
    cout << "Length = " << (*ptr).length << "\tWidth = " << (*ptr).width << endl;
    cout << "Area = " << area << endl;

    return 0;
}