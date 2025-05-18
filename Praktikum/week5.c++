// percobaan 1
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int a = 69;
//     int b = 4;
//     int c = 2;
//     int d = 0;
//     float pangkat, akar, vsin, vcos, vtan;
//     akar = sqrt(a);
//     cout << "Akar dari " << a << " adalah" << akar << endl;
//     pangkat = pow(b, c);
//     cout << b << " pangkat " << c << " adalah" << pangkat << endl;
//     vsin = sin(d);
//     cout << "sin sudut " << d << " derajat adalah" << vsin << endl;
//     vcos = cos(d);
//     cout << "cos sudut " << d << " derajat adalah" << vcos << endl;
//     vtan = tan(d);
//     cout << "tan sudut " << d << " derajat adalah" << vtan;
//     return 0;
// }

// percobaan 1 english ver
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int number = 69;
//     int base = 4;
//     int exponent = 2;
//     int angleInDegrees = 0;
//     float powerResult, squareRootResult, sineValue, cosineValue, tangentValue;
//     squareRootResult = sqrt(number);
//     cout << "Square root of " << number << " is " << squareRootResult << endl;
//     powerResult = pow(base, exponent);
//     cout << base << " to the power of " << exponent << " is " << powerResult << endl;
//     sineValue = sin(angleInDegrees);
//     cout << "Sine of angle " << angleInDegrees << " degrees is " << sineValue << endl;
//     cosineValue = cos(angleInDegrees);
//     cout << "Cosine of angle " << angleInDegrees << " degrees is " << cosineValue << endl;
//     tangentValue = tan(angleInDegrees);
//     cout << "Tangent of angle " << angleInDegrees << " degrees is " << tangentValue;
//     return 0;
// }

// percobaan 2
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     char angka[4]; // variabel angka untuk menyimpan angka bertipe data char
//     int a;         // variabel a bertipe data integer
//     cout << "Masukan karakter angka  = " << endl;
//     cin.get(angka, 4);
//     a = atoi(angka); // variabel  angka bertipe data char dikonversikan menjadi variabel a yang bertipe data int
//     cout << "Angka dalam tipe character  = " << angka << endl;
//     cout << "Angka dalam tipe integer = " << a << endl;
//     return 0;
// }

// english ver
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     char numberCharacters[4]; // variable numberCharacters to store characters of number data type
//     int integerNumber;        // variable integerNumber of integer data type
//     cout << "Enter number characters = " << endl;
//     cin.get(numberCharacters, 4);
//     integerNumber = atoi(numberCharacters); // variable numberCharacters of character data type is converted to variable integerNumber of integer data type
//     cout << "Number in character type = " << numberCharacters << endl;
//     cout << "Number in integer type = " << integerNumber << endl;
//     return 0;
// }

// modified
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     char angka[5]; // 4 digit + null terminator
//     int a;

//     cout << "Masukan karakter angka = " << endl;
//     cin >> angka; // Ganti dari cin.get ke cin >>
//     a = atoi(angka);

//     cout << "Angka dalam tipe character = " << angka << endl;
//     cout << "Angka dalam tipe integer = " << a << endl;

//     return 0;
// }


//percobaan 3
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string nama;
//     int ukur, ukur2;
//     cout << "Masukkan namamu:" << endl;
//     getline(cin, nama);
//     cout << "Nama yang dimasukkan: " << nama << endl;
//     ukur = nama.size();
//     cout << "Ukuran dari string nama dengan perintah size : " << ukur << endl;
//     ukur2 = nama.length();
//     cout << "Ukuran dari string nama dengan perintah length : " << ukur2 << endl;
// }

// english ver
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string name;
//     int sizeOfName, lengthOfName;
//     cout << "Enter your name:" << endl;
//     getline(cin, name);
//     cout << "Entered name: " << name << endl;
//     sizeOfName = name.size();
//     cout << "Size of the name string using the size command: " << sizeOfName << endl;
//     lengthOfName = name.length();
//     cout << "Size of the name string using the length command: " << lengthOfName << endl;
// }


// percobaan 4
// #include <iostream>

// #include <string>

// using namespace std;

// int main()

// {
//     string str1, str2, str3, str4, str5;
//     int len1, len2, len3, len4, len5;
//     cout << "Masukkan 3 kata yang berbeda:" << endl;
//     cout << "Masukkan kata pertama:" << endl;
//     getline(cin, str1);
//     cout << "Masukkan kata kedua:" << endl;
//     getline(cin, str2);
//     cout << "Masukkan kata ketiga:" << endl;
//     getline(cin, str3);
//     cout << "Kata pertama : " << str1 << endl;
//     cout << "Kata kedua : " << str2 << endl;
//     cout << "Kata ketiga : " << str3 << endl;
//     // copy of string
//     str4 = str1;
//     // concatenates string
//     str4 = str4.append(str2);
//     cout << "Kata keempat : " << str4 << endl;
//     str5 = str4 + str3;
//     cout << "Kata kelima : " << str5 << endl;
//     // copy of substring
//     string str6(str5, 0, 8);
//     cout << "Kata keenam : " << str6 << endl;
//     // size of string
//     len1 = str1.size();
//     cout << "Ukuran Kata Pertama : " << len1 << endl;
//     len2 = str2.size();
//     cout << "Ukuran Kata Kedua : " << len2 << endl;

//     len3 = str3.size();

//     cout << "Ukuran Kata Ketiga : " << len3 << endl;

//     len4 = str4.size();

//     // total length of str3 after concatenation

//     cout << "Ukuran Kata Keempat : " << len4 << endl;

//     len5 = str5.size();

//     cout << "Ukuran Kata Kelima : " << len5 << endl;

//     return 0;
// }

// english ver
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string string1, string2, string3, string4, string5;
//     int length1, length2, length3, length4, length5;
//     cout << "Enter 3 different words:" << endl;
//     cout << "Enter the first word:" << endl;
//     getline(cin, string1);
//     cout << "Enter the second word:" << endl;
//     getline(cin, string2);
//     cout << "Enter the third word:" << endl;
//     getline(cin, string3);
//     cout << "First word : " << string1 << endl;
//     cout << "Second word : " << string2 << endl;
//     cout << "Third word : " << string3 << endl;
//     // copy of string
//     string4 = string1;
//     // concatenates string
//     string4 = string4.append(string2);
//     cout << "Fourth word : " << string4 << endl;
//     string5 = string4 + string3;
//     cout << "Fifth word : " << string5 << endl;
//     // copy of substring
//     string string6(string5, 0, 8);
//     cout << "Sixth word : " << string6 << endl;
//     // size of string
//     length1 = string1.size();
//     cout << "Size of First Word : " << length1 << endl;
//     length2 = string2.size();
//     cout << "Size of Second Word : " << length2 << endl;
//     length3 = string3.size();
//     cout << "Size of Third Word : " << length3 << endl;
//     length4 = string4.size();
//     // total length of string3 after concatenation
//     cout << "Size of Fourth Word : " << length4 << endl;
//     length5 = string5.size();
//     cout << "Size of Fifth Word : " << length5 << endl;
//     return 0;
// }

// percobaan 5
// #include <iostream>
// #include <string>
// using namespace std;

// int main()

// {
//     string str1 = "Happy Year";
//     string str2 = "New ";
//     string str3, str4, str5, str6, str7;
//     str3 = str1.insert(6, str2);
//     cout << "str3 : " << str3 << endl;
//     str4 = str1.replace(6, 3, str2, 0, 3);
//     cout << "str4 : " << str4 << endl;
//     str5 = str3.substr(6, 4);

//     cout << "str5 : " << str5 << endl;

//     str6 = str3.substr(0, 5);

//     cout << "str6 : " << str6 << endl;

//     cout << str3.find("New") << endl;

//     cout << str3.find("ar") << endl;

//     cout << str3.find("ro") << endl;

//     str7 = str3.erase(6);

//     cout << "str7 : " << str7 << endl;

//     str7 = str1.replace(6, 3, str2, 1, 2);

//     cout << "str7 : " << str7 << endl;

//     return 0;
// }

// percobaan 6

// #include <iostream>

// using namespace std;

// void add_print(int, int); // function declaration

// int main() // main program
// {
//     int a = 4;
//     int b = 5;
//     cout << "Fungsi untuk mencetak hasil penambahan dua bilangan" << endl;
//     add_print(a, b); // function call

//     return 0;
// }

// // function definition
// void add_print(int val1, int val2)
// {
//     int c;
//     cout << "Dua Bilangan yang akan dijumlahkan adalah: " << val1 << " dan "<<val2<<endl;
//         c = val1 + val2;
//     cout << "Hasil penjumlahannya adalah : " << c << endl;
// }

// corrected version
// #include <iostream>
// using namespace std;

// void add_print(int val1, int val2); // function declaration

// int main() // main program
// {
//     int a = 4;
//     int b = 5;
//     cout << "Fungsi untuk mencetak hasil penambahan dua bilangan" << endl;
//     add_print(a, b); // function call
//     return 0;
// }

// // function definition
// void add_print(int val1, int val2)
// {
//     int sum; // Declare a variable to store the sum
//     cout << "Dua Bilangan yang akan dijumlahkan adalah: " << val1 << " dan " << val2 << endl;
//     sum = val1 + val2;                                       // Calculate the sum
//     cout << "Hasil penjumlahannya adalah : " << sum << endl; // Display the sum
// }

// percobaan 7
// #include <iostream>

// using namespace std;

// void area(float);

// int main()
// {
//     float radius;
//     cin >> radius;
//     area(radius);
// }

// void area(float r)
// {
//     float A;
//     A = 3.1416 * r * r;
//     cout << "The area of the circle is " << A << endl;
// }

// cek poin 1
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int a = 69;
//     int b = 4;
//     int c = 2;
//     int d = 0;
//     int e = -4;
//     float hasil1, hasil2, hasil3, hasil4;
//     hasil1 = sqrt(a) / d;
//     cout << "Hasil dari sqrt(a)/d adalah " << hasil1 << endl;
//     hasil2 = sqrt(e);
//     cout << " Hasil dari sqrt(e) adalah " << hasil2 << endl;
//     hasil3 = min(c)
//                  cout
//              << " Hasil dari min(c) adalah " << hasil3 << endl;
//     hasil4 = abs(e);
//     cout << " Hasil dari abs(e) adalah " << hasil4 << endl;

//     return 0;
// }


// corrected
// #include <iostream>
// #include <cmath>
// #include <algorithm> // agar bisa pakai min()
// using namespace std;

// int main()
// {
//     int a = 69;
//     int b = 4;
//     int c = 2;
//     int d = 1; // Ganti dari 0 jadi 1 agar tidak terjadi pembagian dengan nol
//     int e = -4;
//     float hasil1, hasil2, hasil3, hasil4;

//     hasil1 = sqrt(a) / d;
//     cout << "Hasil dari sqrt(a)/d adalah " << hasil1 << endl;

//     if (e >= 0)
//     {
//         hasil2 = sqrt(e);
//     }
//     else
//     {
//         hasil2 = sqrt(abs(e)); // hindari akar negatif
//         cout << "(akar dari bilangan negatif dihitung dengan ambil nilai absolut)" << endl;
//     }
//     cout << "Hasil dari sqrt(e) adalah " << hasil2 << endl;

//     hasil3 = min(b, c); // fungsi min() harus ada dua argumen
//     cout << "Hasil dari min(b, c) adalah " << hasil3 << endl;

//     hasil4 = abs(e);
//     cout << "Hasil dari abs(e) adalah " << hasil4 << endl;

//     return 0;
// }

// program 2

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char s1[10], s2[20], s3[20], i;
//     cout << "Masukkan string pertama untuk ditemukan panjang string tersebut :";
//     cin >> s1;
//     cout << "\nString yang dimasukkan : " << s1;

//     cout << "\nPanjang String tersebut adalah : " << strlen(s1);
//     cout << "\nMasukkan string kedua untuk ditemukan panjang string tersebut :";
//     cin >> s2;
//     cout << "\nString yang dimasukkan : " << s2;

//     cout << "\nPanjang String tersebut adalah : " << strlen(s2);

//     strcpy(s3, s2);
//     cout << "\nSalin string kedua dalam string ketiga ";
//     cout << "\nString ketiga adalah : " << s3;

//     cout << "\nSambungkan string pertama dan kedua:";
//     strcat(s1, s2);
//     cout << "\nHasil penyambungan string pertama dan kedua adalah : " << s1 << endl;

//     cout << endl
//          << "\nBandingkan string pertama dan kedua :";

//     i = strcmp(s1, s2);
//     if (i == 0)
//         cout << "\nBoth strings are equal\n";
//     else if (i < 0)
//         cout << s1 << " is less than " << s2 << endl;
//     else
//         cout << s1 << " is greater than " << s2;

//     cout << endl
//          << "\nBandingkan string kedua dan ketiga :";

//     i = strcmp(s2, s3);
//     if (i == 0)
//         cout << "\nBoth strings are equal\n";
//     else if (i < 0)
//         cout << s2 << " is less than " << s3 << endl;
//     else
//         cout << s2 << " is greater than " << s3;

//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char s1[50], s2[50], s3[50]; // Ukuran array diperbesar
//     int i;                       // ganti dari char ke int

//     cout << "Masukkan string pertama untuk ditemukan panjang string tersebut: ";
//     cin >> s1;
//     cout << "\nString yang dimasukkan: " << s1;

//     cout << "\nPanjang String tersebut adalah: " << strlen(s1);
//     cout << "\nMasukkan string kedua untuk ditemukan panjang string tersebut: ";
//     cin >> s2;
//     cout << "\nString yang dimasukkan: " << s2;

//     cout << "\nPanjang String tersebut adalah: " << strlen(s2);

//     strcpy(s3, s2);
//     cout << "\nSalin string kedua dalam string ketiga.";
//     cout << "\nString ketiga adalah: " << s3;

//     cout << "\nSambungkan string pertama dan kedua:";
//     strcat(s1, s2);
//     cout << "\nHasil penyambungan string pertama dan kedua adalah: " << s1 << endl;

//     cout << "\n\nBandingkan string pertama dan kedua:";
//     i = strcmp(s1, s2);
//     if (i == 0)
//         cout << "\nBoth strings are equal\n";
//     else if (i < 0)
//         cout << s1 << " is less than " << s2 << endl;
//     else
//         cout << s1 << " is greater than " << s2;

//     cout << "\n\nBandingkan string kedua dan ketiga:";
//     i = strcmp(s2, s3);
//     if (i == 0)
//         cout << "\nBoth strings are equal\n";
//     else if (i < 0)
//         cout << s2 << " is less than " << s3 << endl;
//     else
//         cout << s2 << " is greater than " << s3;

//     return 0;
// }


// program 3
// #include <iostream>

// using namespace std;

// float area(float);

// int main()
// {
//     int radius, y;
//     cin >> radius;
//     y = area(radius);
//     cout << "The area of the circle is " << y;
// }

// float area(float r)
// {
//     return (3.1416 * r * r);
// }

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char s1[20], s2[20], s3[40]; // Increased size to prevent buffer overflows
//     int i;

//     cout << "Masukkan string pertama untuk ditemukan panjang string tersebut :";
//     cin.getline(s1, 20); // Use cin.getline to handle spaces
//     cout << "\nString yang dimasukkan : " << s1;
//     cout << "\nPanjang String tersebut adalah : " << strlen(s1);

//     cout << "\nMasukkan string kedua untuk ditemukan panjang string tersebut :";
//     cin.getline(s2, 20); // Use cin.getline to handle spaces
//     cout << "\nString yang dimasukkan : " << s2;
//     cout << "\nPanjang String tersebut adalah : " << strlen(s2);

//     strcpy(s3, s2);
//     cout << "\nSalin string kedua dalam string ketiga ";
//     cout << "\nString ketiga adalah : " << s3;

//     cout << "\nSambungkan string pertama dan kedua:";
//     strcpy(s1, s2); // Corrected: Copy s2 to s1 first to avoid unexpected behavior
//     strcat(s1, s2);
//     cout << "\nHasil penyambungan string pertama dan kedua adalah : " << s1 << endl;

//     cout << endl
//          << "\nBandingkan string pertama dan kedua :";
//     i = strcmp(s1, s2);
//     if (i == 0)
//         cout << "\nBoth strings are equal\n";
//     else if (i < 0)
//         cout << s1 << " is less than " << s2 << endl;
//     else
//         cout << s1 << " is greater than " << s2;

//     cout << endl
//          << "\nBandingkan string kedua dan ketiga :";
//     i = strcmp(s2, s3);
//     if (i == 0)
//         cout << "\nBoth strings are equal\n";
//     else if (i < 0)
//         cout << s2 << " is less than " << s3 << endl;
//     else
//         cout << s2 << " is greater than " << s3;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// float area(float);

// int main()
// {
//     float radius, y;
//     cin >> radius;
//     y = area(radius);
//     cout << "The area of the circle is " << y << endl;
//     return 0;
// }

// float area(float r)
// {
//     return (3.1416 * r * r);
// }

// cek poin 2
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string countryCode, areaCode, phoneNumber, fullNumber;

//     // Input
//     cout << "Enter country code (e.g. +62): ";
//     cin >> countryCode;
//     cout << "Enter area code (e.g. 21): ";
//     cin >> areaCode;
//     cout << "Enter phone number (e.g. 12345678): ";
//     cin >> phoneNumber;

//     // Combine all
//     fullNumber = countryCode + areaCode + phoneNumber;
//     cout << "Full phone number: " << fullNumber << endl;

//     // Remove country and area code
//     string numberOnly = fullNumber.substr(countryCode.length() + areaCode.length());
//     cout << "Phone number without country and area code: " << numberOnly << endl;

//     return 0;
// }

// #include <iostream>
// #include <cmath> // for M_PI
// using namespace std;

// // Function to input diameter
// void inputData(double &diameter)
// {
//     cout << "Enter the diameter of the sphere: ";
//     cin >> diameter;
// }

// // Function to calculate surface area and volume
// void calculateSphere(double diameter, double &surfaceArea, double &volume)
// {
//     double radius = diameter / 2.0;
//     surfaceArea = 4 * M_PI * pow(radius, 2);
//     volume = (4.0 / 3) * M_PI * pow(radius, 3);
// }

// // Function to print results
// void printResult(double diameter, double surfaceArea, double volume)
// {
//     cout << "\n--- Sphere Info ---\n";
//     cout << "Diameter      : " << diameter << endl;
//     cout << "Surface Area  : " << surfaceArea << endl;
//     cout << "Volume        : " << volume << endl;
// }

// int main()
// {
//     double diameter, surfaceArea, volume;

//     inputData(diameter);                            // Actual parameter: diameter
//     calculateSphere(diameter, surfaceArea, volume); // Actual parameters: diameter, surfaceArea, volume
//     printResult(diameter, surfaceArea, volume);     // Actual parameters: diameter, surfaceArea, volume

//     return 0;
// }


// cek poin 3
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string nim;

//     // Input NIM
//     cout << "Enter your NIM (example: 2204112345): ";
//     cin >> nim;

//     // Split NIM
//     string year = nim.substr(0, 2);
//     string niu = nim.substr(2, 2);
//     string facultyCode = nim.substr(4, 2);
//     string nif = nim.substr(6);

//     // Output
//     cout << "Year         : " << year << endl;
//     cout << "NIU          : " << niu << endl;
//     cout << "Faculty Code : " << facultyCode << endl;
//     cout << "NIF          : " << nif << endl;

//     return 0;
// }


//
#include <iostream>
#include <string>
using namespace std;

// Function to input 5 data
void inputData(string nim[], string course[], int sks[], double grade[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Data " << i + 1 << endl;
        cout << "NIM         : ";
        cin >> nim[i];
        cout << "Course name : ";
        cin >> course[i];
        cout << "SKS         : ";
        cin >> sks[i];
        cout << "Grade       : ";
        cin >> grade[i];
        cout << endl;
    }
}

// Function to calculate GPA (IPK)
double calculateGPA(int sks[], double grade[], int n)
{
    double totalScore = 0;
    int totalSKS = 0;
    for (int i = 0; i < n; i++)
    {
        totalScore += grade[i] * sks[i];
        totalSKS += sks[i];
    }
    return totalScore / totalSKS;
}

// Function to print result
void printResult(string nim, double gpa)
{
    cout << "Student NIM : " << nim << endl;
    cout << "Final GPA   : " << gpa << endl;
}

int main()
{
    const int n = 5;
    string nim[n], course[n];
    int sks[n];
    double grade[n];

    inputData(nim, course, sks, grade, n);
    double gpa = calculateGPA(sks, grade, n);
    printResult(nim[0], gpa);

    return 0;
}
