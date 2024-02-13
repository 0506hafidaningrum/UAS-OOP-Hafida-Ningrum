#include <iostream>
using namespace std;

class BankAccount {
public:
    // atribut
    string owner;
    double balance;

    // constructor
    BankAccount(string o, double b) : owner(o), balance(b) {}

    // metode untuk melakukan penyetoran uang
    void deposit(double amount) {
        balance += amount;
        cout << "Penyetoran berhasil. Saldo sekarang: " << balance << endl;
    }

    // metode untuk melakukan penarikan uang
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Penarikan berhasil. Saldo sekarang: " << balance << endl;
        } else {
            cout << "Penarikan gagal. Saldo tidak mencukupi." << endl;
        }
    }
};

int main() {
    // membuat objek dari class BankAccount
    BankAccount accountExample("Hafida Ningrum", 1000.0);

    // menampilkan saldo awal
    cout << "Saldo awal: " << accountExample.balance << endl;

    // melakukan beberapa penyetoran dan penarikan uang
    accountExample.deposit(500.0);
    accountExample.withdraw(200.0);
    accountExample.deposit(1000.0);
    accountExample.withdraw(1500.0);

    // menampilkan saldo terkini
    cout << "Saldo terkini: " << accountExample.balance << endl;

    return 0;
}
