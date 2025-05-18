// Percobaan 1
// #include <iostream>

// using namespace std;

// int main()
// {
//     int i, batas;

//     cout << "Masukkan jumlah pengulangan: ";
//     cin >> batas;

//     for (i = 0; i < batas; i++)
//     {
//         cout << i - 1;
//     }

//     return 0;
// }

// percobaan 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int angka;
//     cout << "Masukkan angka max : ";
//     cin >> angka;
//     while (angka > 0)
//     {
//         cout << angka << endl;
//         // angka increment diganti jadi decrement
//         angka--;
//     }
//     return 0;
// }

// percobaan 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 0;
//     int sum = 0;
//     do
//     {
//         sum += n;
//         cout << "Enter a number: ";
//         cin >> n;
//     } while (n >= 0);
//     cout << "\nThe sum is " << sum << endl;
//     return 0;
// }

// percobaan 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1, j=0 ;
//     do
//     {
//         j=1;
//         do
//         {
//             cout << i << " " << j<< "\n";
//             j++;
//         } while (j <= 3);
//         i++;
//     } while (i <= 3);
//     return 0;
// }

// percobaan 5
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j=0 ;

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}


// cekpoin 1
// #include <iostream>
// using namespace std;
// int main(){
//     int mult4=0;
//     do {
//         cout << mult4 << endl;
//         mult4+=4;
//     }while(mult4<=100);
// }

// cekpoin 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, x = 1, y, num = 1;
//     cout << "Enter a number of rows: ";
//     cin >> n;
//     do
//     {
//         y = 1; 
//         do
//         {
//             cout << num << " "; 
//             num++;
//             y++;
//         } while (y <= n);
//         cout << endl;
//         x++;
//     } while (x <= n);
//     return 0;
// }

// cekpoin 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, digit, num, rev = 0;
//     cout << "Masukkan bilangan: ";
//     cin >> num;
//     n = num;
//     do
//     {
//         digit = num % 10;
//         rev = rev * 10 + digit;
//         num = num / 10;
//     } while (num != 0);
//     cout << "Reversed number: " << rev << endl;

//     if (rev == n)
//     {
//         cout << "Palindrome" << endl;
//     }
//     else
//     {
//         cout << "Non-palindrome" << endl;
//     }
//     return 0;
// }

// #include <iostream>

// int main()
// {
//     int n, ev;

//     std::cout << "Masukkan nilai n: ";
//     std::cin >> n;

//     ev = 0;
//     while (ev < n)
//     {
//         std::cout << ev;
//         ev = ev + 3;
//     }

//     std::cout << std::endl; // Tambahkan newline di akhir output

//     return 0;
// }