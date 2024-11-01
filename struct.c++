// struct is similar to class
//  struct is a class where members are public by default, while class is private by default

#include <iostream>
#include <string>
using namespace std;

// basic example of struct
struct Animal
{
    string name;
    bool isMammal;
    int legs;
    string color;
};

// Advanced example of struct
struct Student
{
    string name;
    int age;
    bool isMale;
    string address;

    // same as class, struct can have member functions
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Male? " << isMale << endl;
        cout << "Address: " << address << endl;
    }
};

// Struct with constructor
struct Car
{
    string name;
    string model;
    int year;

    // Constructor to initialize members
    Car(string m, string mo, int y) : name(m), model(mo), year(y) {}
};

int main()
{

    // ====== first  Struct ======
    // create an object instance of animal
    Animal horse;
    // assign values to horse
    horse.name = "Horse";
    horse.isMammal = true;
    horse.legs = 4;
    // Access and print the members
    cout << "Name: " << horse.name << endl;
    cout << "Mammals: " << horse.isMammal << endl;
    cout << "How many legs: " << horse.legs << endl;

    // ====== second  Struct ======
    Student student1;
    student1.name = "John";
    student1.age = 21;
    student1.isMale = true;
    student1.address = "1234, 5th Street, New York";
    // call the member function
    student1.display();

    // ====== Struct with Constructor ======
    // Create an instance and initialize using the constructor
    Car car1("Toyota", "Camry", 2020);

    cout << "name: " << car1.name << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;

    return 0;
}