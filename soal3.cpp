#include <iostream>
using namespace std;

class Student {
public:
    // atribut
    string name;
    int age;
    double score;

    // constructor
    Student(string n, int a, double s) : name(n), age(a), score(s) {}

    // method untuk menampilkan informasi lengkap mahasiswa
    void displayInfo() {
        cout << "Nama: " << name << endl;
        cout << "Usia: " << age << " tahun" << endl;
        cout << "Nilai: " << score << endl;
    }
};

int main() {
    // membuat objek dari class Student
    Student studentExample("Hafida Ningrum", 20, 90.5);

    // menampilkan informasi lengkap mahasiswa
    cout << "Informasi Mahasiswa:" << endl;
    studentExample.displayInfo();

    return 0;
}
