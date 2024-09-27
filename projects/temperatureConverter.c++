// #include <iostream>  // Mengimpor pustaka input/output standar

// using namespace std;  // Menggunakan namespace std untuk menghindari penulisan std:: secara berulang

// // Fungsi untuk mengonversi suhu dari Celsius ke Fahrenheit
// double celsiusToFahrenheit(double c) {
//     return (c * 9.0 / 5.0) + 32.0;  // Menggunakan rumus konversi Celsius ke Fahrenheit
// }

// // Fungsi untuk mengonversi suhu dari Celsius ke Kelvin
// double celsiusToKelvin(double c) {
//     return c + 273.15;  // Menggunakan rumus konversi Celsius ke Kelvin
// }

// // Fungsi untuk mengonversi suhu dari Fahrenheit ke Celsius
// double fahrenheitToCelsius(double f) {
//     return (f - 32.0) * 5.0 / 9.0;  // Menggunakan rumus konversi Fahrenheit ke Celsius
// }

// // Fungsi untuk mengonversi suhu dari Fahrenheit ke Kelvin
// double fahrenheitToKelvin(double f) {
//     return (f + 459.67) * 5.0 / 9.0;  // Menggunakan rumus konversi Fahrenheit ke Kelvin
// }

// // Fungsi untuk mengonversi suhu dari Kelvin ke Celsius
// double kelvinToCelsius(double k) {
//     return k - 273.15;  // Menggunakan rumus konversi Kelvin ke Celsius
// }

// // Fungsi untuk mengonversi suhu dari Kelvin ke Fahrenheit
// double kelvinToFahrenheit(double k) {
//     return (k * 9.0 / 5.0) - 459.67;  // Menggunakan rumus konversi Kelvin ke Fahrenheit
// }

// int main() {
//     int choice;  // Variabel untuk menyimpan pilihan unit suhu dari pengguna
//     double value;  // Variabel untuk menyimpan nilai suhu yang dimasukkan oleh pengguna

//     // Menampilkan pilihan unit suhu kepada pengguna
//     cout << "Select the source temperature unit:\n";
//     cout << "1. Celsius\n";
//     cout << "2. Fahrenheit\n";
//     cout << "3. Kelvin\n";
//     cout << "Enter your choice (1-3): ";
//     cin >> choice;  // Membaca pilihan pengguna dari input

//     // Mengevaluasi pilihan pengguna dan melakukan konversi suhu sesuai dengan pilihan
//     if (choice == 1) {
//         // Jika pengguna memilih Celsius
//         cout << "Enter temperature in Celsius: ";
//         cin >> value;  // Membaca suhu dalam Celsius dari input
//         double f = celsiusToFahrenheit(value);  // Mengonversi Celsius ke Fahrenheit
//         double k = celsiusToKelvin(value);  // Mengonversi Celsius ke Kelvin
//         cout << "Fahrenheit: " << f << "F" << endl;  // Menampilkan hasil konversi ke Fahrenheit
//         cout << "Kelvin: " << k << "K" << endl;  // Menampilkan hasil konversi ke Kelvin
//     } else if (choice == 2) {
//         // Jika pengguna memilih Fahrenheit
//         cout << "Enter temperature in Fahrenheit: ";
//         cin >> value;  // Membaca suhu dalam Fahrenheit dari input
//         double c = fahrenheitToCelsius(value);  // Mengonversi Fahrenheit ke Celsius
//         double k = fahrenheitToKelvin(value);  // Mengonversi Fahrenheit ke Kelvin
//         cout << "Celsius: " << c << "C" << endl;  // Menampilkan hasil konversi ke Celsius
//         cout << "Kelvin: " << k << "K" << endl;  // Menampilkan hasil konversi ke Kelvin
//     } else if (choice == 3) {
//         // Jika pengguna memilih Kelvin
//         cout << "Enter temperature in Kelvin: ";
//         cin >> value;  // Membaca suhu dalam Kelvin dari input
//         double c = kelvinToCelsius(value);  // Mengonversi Kelvin ke Celsius
//         double f = kelvinToFahrenheit(value);  // Mengonversi Kelvin ke Fahrenheit
//         cout << "Celsius: " << c << "C" << endl;  // Menampilkan hasil konversi ke Celsius
//         cout << "Fahrenheit: " << f << "F" << endl;  // Menampilkan hasil konversi ke Fahrenheit
//     } else {
//         // Jika pilihan tidak valid
//         cout << "Invalid choice! Please select 1, 2, or 3." << endl;  // Menampilkan pesan kesalahan
//     }

//     return 0;  // Mengakhiri program dengan kode keluar 0 (sukses)
// }


// using switch case

#include <iostream>

using namespace std;

double celsiusToFahrenheit(double conversion) {
    return (conversion * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double conversion) {
    return conversion + 273.15;
}

double fahrenheitToCelsius(double conversion) {
    return (conversion - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double conversion) {
    return (conversion + 459.67) * 5.0 / 9.0;
}

double kelvinToCelsius(double conversion) {
    return conversion - 273.15;
}

double kelvinToFahrenheit(double conversion) {
    return (conversion * 9.0 / 5.0) - 459.67;
}

int main() {
    int choice;
    double temperature;
    char repeat;

    do {
        cout << "Select the source temperature unit:\n";
        cout << "1. Celsius\n";
        cout << "2. Fahrenheit\n";
        cout << "3. Kelvin\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                cout << "Fahrenheit: " << celsiusToFahrenheit(temperature) << "F" << endl;
                cout << "Kelvin: " << celsiusToKelvin(temperature) << "°K" << endl;
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                cout << "Celsius: " << fahrenheitToCelsius(temperature) << "°C" << endl;
                cout << "Kelvin: " << fahrenheitToKelvin(temperature) << "°K" << endl;
                break;
            case 3:
                cout << "Enter temperature in Kelvin: ";
                cin >> temperature;
                cout << "Celsius: " << kelvinToCelsius(temperature) << "°C" << endl;
                cout << "Fahrenheit: " << kelvinToFahrenheit(temperature) << "°F\n";
                break;
            default:
                cout << "Invalid choice! Please select 1, 2, or 3.\n";
                break;
        }

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Program finished.\n";

    return 0;
}
