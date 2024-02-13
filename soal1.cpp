#include <iostream>
using namespace std;

// deklarasi class Book
class Book {
public:
    // atribut
    string title, author;
    int year;

    // constructor
    Book(string t, string a, int y) : title(t), author(a), year(y) {}

    // method untuk menampilkan informasi lengkap buku
    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year of Publication: " << year << endl;
    }

    // method untuk menentukan apakah buku sudah "kuno" atau tidak
    bool isAntique() {
        return year < 2000;
    }
};

int main() {
    // membuat objek dari class Book
    Book bookExample("Jejak Langkah", "Pramoedya Ananta Toer", 1995);

    // menampilkan informasi lengkap buku
    cout << "Informasi Buku:" << endl;
    bookExample.displayInfo();

    // menentukan status "kuno" atau tidak
    if (bookExample.isAntique()) {
        cout << "Status: Kuno" << endl;
    } else {
        cout << "Status: Tidak Kuno" << endl;
    }

    return 0;
}
