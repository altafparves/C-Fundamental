#include <iostream>
using namespace std;

int main()
{
    string input;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        char c = tolower(input[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowels++;
        }

        else if (c >= 'a' && c <= 'z')
        {
            consonants++;
        }
    }

    cout << vowels << " " << consonants << endl;

    return 0;
}