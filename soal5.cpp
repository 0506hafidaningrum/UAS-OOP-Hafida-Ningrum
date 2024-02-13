#include <iostream>
using namespace std;

class Employee {
public:
    // atribut
    string name;
    double hourlyRate;
    double hoursWorked;

    // constructor
    Employee(string n, double rate, double hours) : name(n), hourlyRate(rate), hoursWorked(hours) {}

    // metode untuk menghitung gaji total
    double calculateSalary() {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    // membuat objek dari class Employee
    Employee employeeExample("Hafida Ningrum", 5000.0, 40.0);

    // menghitung gaji total
    double totalSalary = employeeExample.calculateSalary();

    // menampilkan informasi
    cout << "Informasi Karyawan:" << endl;
    cout << "Nama: " << employeeExample.name << endl;
    cout << "Gaji per Jam: Rp." << employeeExample.hourlyRate << endl;
    cout << "Jumlah Jam Kerja: " << employeeExample.hoursWorked << " jam" << endl;
    cout << "Gaji Total: Rp." << totalSalary << endl;

    return 0;
}
