// percobaan 4
// #include <iostream>
// using namespace std;
// struct pegawai
// {
//     char nama[20];
//     int id;
//     float gaji;
// };
// int main()
// {
//     pegawai pgw;
//     cout << "Masukkan Nama : \n";
//     cin.get(pgw.nama, 20);
//     cout << "Masukkan id Pegawai : \n";
//     cin >> pgw.id;
//     cout << "Masukkan gaji : \n ";
//     cin >> pgw.gaji;
//     ;
//     cout << "\nTampilkan Information Pegawai";
//     cout << "Nama: " << pgw.nama << endl;
//     cout << "ID:" << pgw.id << endl;
//     cout << "Gaji:" << pgw.gaji;
//     return 0;
// }
// after
// #include <iostream>
// using namespace std;
// struct pegawai
// {
//     char nama[20];
//     int id;
//     int age;
//     float gaji;
//     string address;
// };
// int main()
// {
//     pegawai pgw;
//     cout << "Masukkan Nama : \n";
//     cin.get(pgw.nama, 20);
//     cout << "Masukkan id Pegawai : \n";
//     cin >> pgw.id;
//     cout << "Masukkan gaji : \n ";
//     cin >> pgw.gaji;
//     ;
//     cout << "Masukkan Address: \n";
//     cin >> pgw.address;
//     cout << "Enter Age: \n";
//     cin >> pgw.age;
//     cout << "\nTampilkan Information Pegawai";
//     cout << "Nama: " << pgw.nama << endl;
//     cout << "ID:" << pgw.id << endl;
//     cout << "Gaji:" << pgw.gaji << endl;
//     cout << "Address:" << pgw.address << endl;
//     cout << "Age:" << pgw.age;
//     return 0;
// }

// percobaan 2
// #include <iostream>
// using namespace std;

// struct Produk
// {
//     int kode;
//     float harga;
// } peg1, peg2;

// int main()
// {
//     cout << "Masukkan Produk Pertama: \n";
//     cout << "Masukkan kode Produk: \n";
//     cin >> peg1.kode;
//     cout << "Masukkan harga : \n";
//     cin >> peg1.harga;

//     cout << "Masukkan Produk Kedua: \n";
//     cout << "Masukkan kode Produk: \n";
//     cin >> peg2.kode;
//     cout << "Masukkan harga : \n";
//     cin >> peg2.harga;

//     cout << "\nTampilkan Information Produk Pertama" << endl;
//     cout << "Kode: " << peg1.kode << endl;
//     cout << "Harga: " << peg1.harga;

//     cout << "\nTampilkan Information Produk Kedua" << endl;
//     cout << "Kode: " << peg2.kode << endl;
//     cout << "Harga: " << peg2.harga;

//     return 0;
// }

// after
// #include <iostream>
// using namespace std;

// struct Produk
// {
//     int kode;
//     float harga;
// } peg1, peg2, peg3, peg4;

// int main()
// {
//     cout << "Masukkan Produk Pertama: \n";
//     cout << "Masukkan kode Produk: \n";
//     cin >> peg1.kode;
//     cout << "Masukkan harga : \n";
//     cin >> peg1.harga;

//     cout << "Masukkan Produk Kedua: \n";
//     cout << "Masukkan kode Produk: \n";
//     cin >> peg2.kode;
//     cout << "Masukkan harga : \n";
//     cin >> peg2.harga;

//     cout << "Masukkan Produk Ketiga: \n";
//     cout << "Masukkan kode Produk: \n";
//     cin >> peg3.kode;
//     cout << "Masukkan harga : \n";
//     cin >> peg3.harga;

//     cout << "Masukkan Produk Keempat: \n";
//     cout << "Masukkan kode Produk: \n";
//     cin >> peg4.kode;
//     cout << "Masukkan harga : \n";
//     cin >> peg4.harga;

//     cout << "\nTampilkan Information Produk Pertama" << endl;
//     cout << "Kode: " << peg1.kode << endl;
//     cout << "Harga: " << peg1.harga;

//     cout << "\nTampilkan Information Produk Kedua" << endl;
//     cout << "Kode: " << peg2.kode << endl;
//     cout << "Harga: " << peg2.harga;

//     cout << "\nTampilkan Information Produk Ketiga" << endl;
//     cout << "Kode: " << peg3.kode << endl;
//     cout << "Harga: " << peg3.harga;

//     cout << "\nTampilkan Information Produk Keempat" << endl;
//     cout << "Kode: " << peg4.kode << endl;
//     cout << "Harga: " << peg4.harga;

//     return 0;
// }


// percobaan 3
// #include <iostream>
// #include <cstring>

// using namespace std;

// struct Books
// {
//     char title[50];
//     char author[50];
//     char subject[100];
//     int book_id;
// };

// int main()
// {
//     struct Books Book1; // Declare Book1 of type Book
//     struct Books Book2; // Declare Book2 of type Book

//     // book 1 specification
//     strcpy(Book1.title, "Learn C++ Programming");
//     strcpy(Book1.author, "Chand Miyan");
//     strcpy(Book1.subject, "C++ Programming");
//     Book1.book_id = 6495407;

//     // book 2 specification
//     strcpy(Book2.title, "Telecom Billing");
//     strcpy(Book2.author, "Yakit Singha");
//     strcpy(Book2.subject, "Telecom");
//     Book2.book_id = 6495700;

//     // Print Book1 info
//     cout << "Book 1 title: " << Book1.title << endl;
//     cout << "Book 1 author: " << Book1.author << endl;
//     cout << "Book 1 subject: " << Book1.subject << endl;
//     cout << "Book 1 id: " << Book1.book_id << endl;

//     // Print Book2 info
//     cout << "Book 2 title: " << Book2.title << endl;
//     cout << "Book 2 author: " << Book2.author << endl;
//     cout << "Book 2 subject: " << Book2.subject << endl;
//     cout << "Book 2 id: " << Book2.book_id << endl;

//     return 0;
// }

// after
// #include <iostream>
// #include <cstring>

// using namespace std;

// struct Books
// {
//     char title[50];
//     char author[50];
//     char subject[100];
//     int book_id;
//     char publisher[50]; // Elemen baru
//     int year;           // Elemen baru
// };

// int main()
// {
//     struct Books Book1; // Declare Book1 of type Book
//     struct Books Book2; // Declare Book2 of type Book

//     // book 1 specification
//     strcpy(Book1.title, "Learn C++ Programming");
//     strcpy(Book1.author, "Chand Miyan");
//     strcpy(Book1.subject, "C++ Programming");
//     Book1.book_id = 6495407;
//     strcpy(Book1.publisher, "TechPress");
//     Book1.year = 2020;

//     // book 2 specification
//     strcpy(Book2.title, "Telecom Billing");
//     strcpy(Book2.author, "Yakit Singha");
//     strcpy(Book2.subject, "Telecom");
//     Book2.book_id = 6495700;
//     strcpy(Book2.publisher, "Telecom World");
//     Book2.year = 2018;

//     // Print Book1 info
//     cout << "Book 1 title: " << Book1.title << endl;
//     cout << "Book 1 author: " << Book1.author << endl;
//     cout << "Book 1 subject: " << Book1.subject << endl;
//     cout << "Book 1 id: " << Book1.book_id << endl;
//     cout << "Book 1 publisher: " << Book1.publisher << endl;
//     cout << "Book 1 year: " << Book1.year << endl;

//     // Print Book2 info
//     cout << "Book 2 title: " << Book2.title << endl;
//     cout << "Book 2 author: " << Book2.author << endl;
//     cout << "Book 2 subject: " << Book2.subject << endl;
//     cout << "Book 2 id: " << Book2.book_id << endl;
//     cout << "Book 2 publisher: " << Book2.publisher << endl;
//     cout << "Book 2 year: " << Book2.year << endl;

//     return 0;
// }


// percobaan 4
// #include <iostream>
// using namespace std;

// struct Mahasiswa
// {
//     char nama[40];
//     int angkatan;
// };

// int main()
// {
//     mhs;

//     cout << "Masukkan Nama Mahasiswa :";
//     cin.get(nama, 40);

//     cout << "Masukkan Angkatan :";
//     cin >> angkatan;

//     cout << "Data Mahasiswa" << endl;
//     cout << "Nama :" << mhs.nama << endl;
//     cout << "Angkatan :" << mhs.angkatan << endl;

//     return 0;
// }

// after
// #include <iostream>
// using namespace std;

// struct Mahasiswa
// {
//     char nama[40];
//     int angkatan;
// };

// int main()
// {
//     Mahasiswa mhs; // Deklarasi variabel mhs

//     cout << "Masukkan Nama Mahasiswa :";
//     cin.get(mhs.nama, 40); // Menggunakan mhs.nama

//     cout << "Masukkan Angkatan :";
//     cin >> mhs.angkatan; // Menggunakan mhs.angkatan

//     cout << "Data Mahasiswa" << endl;
//     cout << "Nama :" << mhs.nama << endl;
//     cout << "Angkatan :" << mhs.angkatan << endl;

//     return 0;
// }

// percobaan 5
// #include <iostream>
// using namespace std;
// union Mahasiswa
// {
//     char nama[40];
//     int angkatan;
// };

// int main()
// {
//     Mahasiswa mhs;
//     cout << "Masukkan Nama Mahasiswa :";
//     cin.get(mhs.nama, 40);
//     cout << "Masukkan Angkatan :";
//     cin >> mhs.angkatan;

//     cout << "Data Mahasiswa" << endl;
//     cout << "Nama :" << mhs.nama << endl;
//     cout << "Angkatan :" << mhs.angkatan << endl;

//     count << "Alokasi memori untuk elemen nama: " << &mhs.nama << endl;
//     count << "Alokasi memori untuk elemen angkatan: " << &mhs.nama << endl;

//     count << "Ukuran dari variabel union : " << sizeof(mhs) << endl;

//     return 0;
// }

// after
// #include <iostream>
// using namespace std;
// union Mahasiswa
// {
//     char nama[40];
//     int angkatan;
// };

// int main()
// {
//     Mahasiswa mhs;
//     cout << "Masukkan Nama Mahasiswa :";
//     cin.get(mhs.nama, 40);
//     cout << "Masukkan Angkatan :";
//     cin >> mhs.angkatan;

//     cout << "Data Mahasiswa" << endl;
//     cout << "Nama :" << mhs.nama << endl;
//     cout << "Angkatan :" << mhs.angkatan << endl;

//     cout << "Alokasi memori untuk elemen nama: " << &mhs.nama << endl;         // Perbaikan: count menjadi cout
//     cout << "Alokasi memori untuk elemen angkatan: " << &mhs.angkatan << endl; // Perbaikan: count menjadi cout

//     cout << "Ukuran dari variabel union : " << sizeof(mhs) << endl;

//     return 0;
// }

// percobaan 6
// #include <iostream>
// using namespace std;

// typedef struct mahasiswa
// {
//     char nama[40];
//     int angkatan;
// } mhs;

// int main()
// {
//     mhs aku;
//     cout << "Masukkan Nama Mahasiswa :";
//     cin.get(aku.nama, 40);
//     cout << "Masukkan Angkatan :" << endl;
//     cin >> aku.angkatan;
//     cout << "Data Mahasiswa" << endl;
//     cout << "Nama :" << aku.nama << endl;
//     cout << "Angkatan :" << aku.angkatan << endl;
//     return 0;
// }

// modified
// #include <iostream>
// using namespace std;

// struct mahasiswa
// {
//     char nama[40];
//     int angkatan;
// };

// using mhs = struct mahasiswa; // Bentuk typedef lain menggunakan 'using'

// int main()
// {
//     mhs aku;
//     cout << "Masukkan Nama Mahasiswa :";
//     cin.get(aku.nama, 40);
//     cout << "Masukkan Angkatan :" << endl;
//     cin >> aku.angkatan;
//     cout << "Data Mahasiswa" << endl;
//     cout << "Nama :" << aku.nama << endl;
//     cout << "Angkatan :" << aku.angkatan << endl;
//     return 0;
// }


// cek poin 1
// #include <iostream>
// using namespace std;
// struct Mahasiswa
// {
//     char nama[40];
//     int angkatan;
// };

// int main()
// {
//     mahasiswa mhs;
//     cout << "Masukkan Nama Mahasiswa :";
//     cin.get(mhs.nama, 40);
//     cout << "Masukkan Angkatan :";
//     cin >> angkatan;
//     cout << "Data Mahasiswa" << endl;
//     cout << "Nama :" << mhs.nama << endl;
//     cout << "Angkatan :" << mhs.angkatan << endl;
//     count << "Alokasi memori untuk elemen nama: " << &mhs.nama << endl;
//     count << "Alokasi memori untuk elemen angkatan : " << &mhs.nama << endl;
//     count << "Ukuran dari variabel union : " << sizeof(mahasiswa) << endl;
//     return 0;
// }

// fixed code
// #include <iostream>
// using namespace std;

// struct Mahasiswa
// {
//     char nama[40];
//     int angkatan;
// };

// int main()
// {
//     Mahasiswa mhs; // Perbaikan: 'mahasiswa' menjadi 'Mahasiswa'
//     cout << "Masukkan Nama Mahasiswa :";
//     cin.get(mhs.nama, 40);
//     cout << "Masukkan Angkatan :";
//     cin >> mhs.angkatan; // Perbaikan: 'angkatan' menjadi 'mhs.angkatan'
//     cout << "Data Mahasiswa" << endl;
//     cout << "Nama :" << mhs.nama << endl;
//     cout << "Angkatan :" << mhs.angkatan << endl;
//     cout << "Alokasi memori untuk elemen nama: " << &mhs.nama << endl;          // Perbaikan: 'count' menjadi 'cout'
//     cout << "Alokasi memori untuk elemen angkatan : " << &mhs.angkatan << endl; // Perbaikan: 'count' menjadi 'cout', '&mhs.nama' menjadi '&mhs.angkatan'
//     cout << "Ukuran dari variabel union : " << sizeof(Mahasiswa) << endl;       // Perbaikan: 'count' menjadi 'cout', 'mahasiswa' menjadi 'Mahasiswa'
//     return 0;
// }

// cek poin 3

#include <iostream>
#include <string>

using namespace std;

// Struct untuk menyimpan data film
struct Film
{
    string title;    // Judul film
    string director; // Sutradara
    int duration;    // Durasi dalam menit
    float rating;    // Rating film
    int releaseYear; // Tahun rilis
};

int main()
{
    // Array berisi 3 film
    Film films[3] = {
        {"Inception", "Christopher Nolan", 148, 8.8, 2010},
        {"Interstellar", "Christopher Nolan", 169, 8.6, 2014},
        {"Parasite", "Bong Joon-ho", 132, 8.6, 2019}};

    // Menampilkan informasi film
    cout << "Data Film:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nFilm " << i + 1 << ":" << endl;
        cout << "Judul     : " << films[i].title << endl;
        cout << "Sutradara : " << films[i].director << endl;
        cout << "Durasi    : " << films[i].duration << " menit" << endl;
        cout << "Rating    : " << films[i].rating << endl;
        cout << "Tahun Rilis: " << films[i].releaseYear << endl;
    }

    // Menampilkan ukuran byte dari setiap elemen struct
    cout << "\nUkuran byte setiap elemen dalam struct Film:" << endl;
    cout << "String title     : " << sizeof(string) << " byte" << endl;
    cout << "String director  : " << sizeof(string) << " byte" << endl;
    cout << "Int duration     : " << sizeof(int) << " byte" << endl;
    cout << "Float rating     : " << sizeof(float) << " byte" << endl;
    cout << "Int releaseYear  : " << sizeof(int) << " byte" << endl;

    // Menampilkan ukuran struct Film
    cout << "\nUkuran struct Film     : " << sizeof(Film) << " byte" << endl;

    return 0;
}