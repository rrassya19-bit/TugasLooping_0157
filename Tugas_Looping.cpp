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
        }
        cetakGaris('-', 42);
    }
    return 0;
}