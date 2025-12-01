#include <iostream>
using namespace std;

int angka1, angka2, hasil;
string op, operasi;

int penjumlahan();
int pengurangan();
int perkalian();
int pembagian();
int modulus1();
int maximum();
int minimum();
string menu();

int main () {
    cout << "Masukan angka 1 : "; cin >> angka1;
    cout << "Masukan angka 2 : "; cin >> angka2;

    op = menu();

    if (op == "+" ) {hasil = penjumlahan(); operasi = "Penjumlahan";}
    else if (op == "-") {hasil = pengurangan(); operasi = "Pengurangan";}
    else if (op == "*") {hasil = perkalian();  operasi = "Perkalian";}
    else if (op == "/") {hasil = pembagian(); operasi = "Pembagian";}
    else if (op == "%") {hasil = modulus1(); operasi = "Modulus";}
    else if (op == ">") {hasil = maximum(); operasi = "Maximum";}
    else if (op == "<") {hasil = minimum(); operasi = "Minimum";}
    cout << "Hasil dari " << operasi << " adalah " << hasil << endl;

    return 0;
}


string menu () {
    string opMenu;
    cout << "\nOperasi yang tersedia : " << endl;
    cout << "\t+" << endl;
    cout << "\t-" << endl;
    cout << "\t*" << endl;
    cout << "\t/" << endl;
    cout << "\t%" << endl;
    cout << "\t>" << endl;
    cout << "\t<" << endl;
    cout << "Masukan pilihan operasi yang diinginkan : "; cin >> opMenu;

    return opMenu;
}

int penjumlahan () {
    return angka1 + angka2;
}

int pengurangan () {
    return angka1 - angka2;
}

int perkalian () {
    return angka1 * angka2;
}

int pembagian () {
   return angka1 / angka2;
}

int modulus1 () {
    return angka1 % angka2;
}

int maximum () {
    int max = -1;
    if (angka1 > max) max = angka1;
    if (angka2 > max) max = angka2;
    return max;
}

int minimum () {
    int min = 999;
    if (angka1 < min) min = angka1;
    if (angka2 < min) min = angka2;
    return min;
}