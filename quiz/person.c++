#include <iostream>
#include <string>

struct Person
{
    std::string name;
    int age;
    int height;
};

int main()
{
    int n;
    std::cin >> n;

    Person *people = new Person[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> people[i].name >> people[i].age >> people[i].height;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "Name: " << people[i].name << ", Age: " << people[i].age
                  << ", Height: " << people[i].height << std::endl;
    }

    delete[] people;
    return 0;
}