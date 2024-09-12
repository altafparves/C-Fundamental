#include <iostream>
using namespace std;


void isPrime(){
    int num;
    bool isPrime = true;

    // Meminta input dari pengguna
    cout << "Enter a number: ";
    cin >> num;

    // Bilangan kurang dari atau sama dengan 1 bukan bilangan prima
    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        // Looping dari 2 hingga kurang dari num
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            { // Jika num habis dibagi i, maka bukan bilangan prima
                isPrime = false;
                break; // Keluar dari loop jika ditemukan pembagi
            }
        }
    }

    // Menampilkan hasil
    if (isPrime)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
};

int main()
{
    // Loop from 1 to 10
    // int 1 = 1 ==== declare a variable named  with the value of 1
    // i <= 10 ==== check if i is less than or equal to 10 (this is the condition)
    // i++ ==== increment i by 1 (action, as long as the condition is true, this action will be executed)
    for (int i = 1; i <= 10; i++)
    {
        //  print out the value of i
        cout << i << endl; 
    }

    return 0;
}