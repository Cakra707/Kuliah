#include <iostream>
using namespace std;

int angka1, angka2, hasil;
string op, operasi, hasil1;

void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus1();
void maximum();
void minimum();
void menu();

int main () {
    cout << "Masukan angka 1 : "; cin >> angka1;
    cout << "Masukan angka 2 : "; cin >> angka2;
    menu();

    if (op == "+" ) penjumlahan();
    else if (op == "-") pengurangan();
    else if (op == "*") perkalian();
    else if (op == "/") pembagian();
    else if (op == "%") modulus1();
    else if (op == ">") maximum();
    else if (op == "<") minimum();
    cout << "Hasil dari " << operasi << " adalah " << hasil << endl;

    return 0;
}


void menu () {
    cout << "\nOperasi yang tersedia : " << endl;
    cout << "\t+" << endl;
    cout << "\t-" << endl;
    cout << "\t*" << endl;
    cout << "\t/" << endl;
    cout << "\t%" << endl;
    cout << "\t>" << endl;
    cout << "\t<" << endl;
    cout << "Masukan pilihan operasi yang diinginkan : "; cin >> op;

}

void penjumlahan () {
    int jumlah;
    jumlah = angka1 + angka2;
    hasil = jumlah;
    operasi = "Penjumlahan";
}

void pengurangan () {
    int kurang;
    kurang = angka1 - angka2;
    hasil = kurang;
    operasi = "Pengurangan";
}

void perkalian () {
    int kali;
    kali = angka1 * angka2;
    hasil = kali;
    operasi = "Perkalian";
}

void pembagian () {
    int bagi;
    bagi = angka1 / angka2;
    hasil = bagi;
    operasi = "Pembagian";
}

void modulus1 () {
    int mod;
    mod = angka1 % angka2;
    hasil = mod;
    operasi = "Modulus";
}

void maximum () {
    int max = -1;
    if (angka1 > max) max = angka1;
    if (angka2 > max) max = angka2;
    hasil = max;
    operasi = "Maximum";
}

void minimum () {
    int min = 999;
    if (angka1 < min) min = angka1;
    if (angka2 < min) min = angka2;
    hasil = min;
    operasi = "Minimum";
}