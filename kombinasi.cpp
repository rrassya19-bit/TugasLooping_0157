#include <iostream>
using namespace std;

// --- Variabel Global ---
int angka;
int pilihan;

// --- Prototipe Fungsi & Prosedur ---
void inputAngka();
void tampilkanMenu();
bool isPrima(int n);
bool isFibonacci(int n);
void eksekusiCekPrima();
void eksekusiCekFibonacci();
void cetakGaris(char simbol, int panjang);

// --- Main Function ---
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

// --- Implementasi Fungsi & Prosedur ---

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
    if (n % 2 == 0) return false;
    int i = 3;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i += 2;
    }
    return true;
}

bool isFibonacci(int n) {
    if (n < 0) return false;
    int a = 0, b = 1;
    if (n == a || n == b) return true;
    int c = a + b;
    while (c <= n) {
        if (c == n) return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

void eksekusiCekPrima() {
    cetakGaris('+', 42);
    cout << "  |       HASIL CEK BILANGAN PRIMA       |\n";
    cetakGaris('+', 42);
    if (isPrima(angka)) {
        cout << "  | >> " << angka << " ADALAH bilangan prima.\n";
    } else {
        cout << "  | >> " << angka << " BUKAN bilangan prima.\n";
    }
    cetakGaris('+', 42);
}

void eksekusiCekFibonacci() {
    cetakGaris('+', 42);
    cout << "  |     HASIL CEK BILANGAN FIBONACCI      |\n";
    cetakGaris('+', 42);
    if (isFibonacci(angka)) {
        cout << "  | >> " << angka << " TERMASUK deret Fibonacci.\n";
    } else {
        cout << "  | >> " << angka << " TIDAK TERMASUK deret Fibonacci.\n";
    }
    cetakGaris('+', 42);
}