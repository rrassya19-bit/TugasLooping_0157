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
            case 0:
                cout << "\n  Terima kasih! Program selesai.\n\n";
                return 0;
            default:
                cout << "\n  [!] Pilihan tidak valid. Silakan masukkan 0, 1, atau 2.\n";
                break;
        }
        cetakGaris('-', 42);
    }
    return 0;
}

void cetakGaris(char simbol, int panjang) {
    cout << "\n  ";
    int i = 0;
    while (i < panjang) {
        cout << simbol;
        i++;
    }
    cout << "\n";
}

void tampilkanMenu() {
    cetakGaris('=', 42);
    cout << "       PROGRAM CEK PRIMA & FIBONACCI\n";
    cetakGaris('=', 42);
    cout << "  [1] Cek Bilangan Prima\n";
    cout << "  [2] Cek Bilangan Fibonacci\n";
    cout << "  [0] Keluar\n";
    cetakGaris('-', 42);
    cout << "  Pilihan Anda: ";
}

void inputAngka() {
    cout << "  Masukkan bilangan yang ingin dicek: ";
    cin >> angka;
}

bool isPrima(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    return true;
}