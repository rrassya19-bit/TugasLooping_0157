#include <iostream>
using namespace std;

int angka;
int pilihan;

void inputAngka();
void tampilkanMenu();
bool isPrima(int n);
bool isFibonacci(int n);
void eksekusiCekPrima();
void eksekusiCekFibonacci();
void cetakGaris(char simbol, int panjang);

int main() {
    while (true) {
        tampilkanMenu();
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "\n  --- CEK BILANGAN PRIMA ---\n";
                inputAngka();
                eksekusiCekPrima();
                break;
            case 2:
                cout << "\n  --- CEK BILANGAN FIBONACCI ---\n";
                inputAngka();
                eksekusiCekFibonacci();
                break;
        }
        cetakGaris('-', 42);
    }
    return 0;
}