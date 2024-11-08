#include <iostream> // Library untuk input-output
using namespace std;

class Address
{
public:
    string street;   // Nama jalan
    string postcode; // Kode pos

    // default konstruktor
    Address() {}
    // Konstruktor untuk menginisialisasi street dan postcode
    Address(const string &street, const string &postcode)
    {
        this->street = street;
        this->postcode = postcode;
    }
};

class Student
{
public:
    string name;     // Nama siswa
    int id;          // ID siswa
    Address address; // Objek Address untuk menyimpan alamat siswa

    // Constructor tanpa initializer list
    Student(string nama, int x, const Address &adress)
    {
        name = nama;
        id = x;
        address = address;
    }
};

// GradStudent adalah turunan dari Student dengan tambahan thesisTopic
class GradStudent : public Student
{
public:
    string thesisTopic; // Topik tesis mahasiswa pascasarjana

    // Konstruktor GradStudent yang juga memanggil konstruktor Student
    GradStudent(const string &name, int id, const Address &address, const string &thesisTopic)
        : Student(name, id, address), thesisTopic(thesisTopic) {}

    void printData();
};

void GradStudent::printData()
{
    cout << "Name: " << name << endl;
    cout << "ID is " << id << endl;
    cout << "Street: " << address.street << endl;
    cout << "Postcode: " << address.postcode << endl;
    cout << "Thesis Topic: " << thesisTopic << endl;
}

int main()
{
    Address address("Jl. grafika", "55555");                                     // Membuat objek Address
    Address address2("Jl. Medika", "55281");                                     // Membuat objek Address
    GradStudent gradStudent("aknap", 12345, address, "Artificial Intelligence"); // Membuat objek GradStudent
    GradStudent gradStudent2("Bambang", 12346, address2, "Machine Learning");    // Membuat objek GradStudent

    gradStudent.printData();  // Menampilkan informasi GradStudent
    gradStudent2.printData(); // Menampilkan informasi GradStudent

    return 0;
}
