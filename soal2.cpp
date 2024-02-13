#include <iostream>
using namespace std;

class Car {
public:
    // atribut
    string brand;
    int year;
    double speed; // dalam km/jam

    // constructor
    Car(string b, int y, double s) : brand(b), year(y), speed(s) {}

    // method untuk menghitung waktu yang dibutuhkan untuk menempuh jarak tertentu
    double calculateTime(double distance) {
        return distance / speed; // waktu = jarak / kecepatan
    }
};

int main() {
    // membuat objek dari class Car
    Car carExample("Toyota", 2022, 60.0); // kecepatan dalam km/jam

    // menghitung waktu yang dibutuhkan untuk menempuh jarak 100 km dengan kecepatan 60 km/jam
    double distance = 100.0;
    double timeNeeded = carExample.calculateTime(distance);

    // menampilkan informasi
    cout << "Merek Mobil: " << carExample.brand << endl;
    cout << "Tahun Pembuatan: " << carExample.year << endl;
    cout << "Kecepatan: " << carExample.speed << " km/jam" << endl;
    cout << "Jarak yang Ditempuh: " << distance << " km" << endl;
    cout << "Waktu yang Dibutuhkan: " << timeNeeded << " jam" << endl;

    return 0;
}
