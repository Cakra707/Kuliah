#include <iostream>
using namespace std;

int no;
float a, b, luas;


float criLuas(int tipe, float x, float y) {
    float hasil;

    if (tipe == 1 ) hasil = x * y;
    else if (tipe == 2) hasil =  x * x;
    else if (tipe == 3) hasil = 3.14 * x * x;
    else if (tipe == 4) hasil = 0.5 * x * y;

    return hasil;
}

void inputdata(int tipe, float &x, float &y) {

    if (tipe == 1) {
        cout << "Masukan nilai Panjang : "; cin >> x;
        cout << "Masukan nilai Lebar : "; cin >> y;

    } else if (tipe == 2) {
        cout << "Masukan nilai Sisi : "; cin >> x;
    } else if (tipe == 3) {
         cout << "Masukan nilai Jari-Jari : "; cin >> x;
    } else if (tipe == 4) {
        cout << "Masukan nilai Alas : "; cin >> x;
        cout << "Masukan nilai Tinggi : "; cin >> y;
    }
    
}

void menu() {
    cout << "Program Mencari Luas" << endl;
    cout << "\t1. Persegi Panjang" << endl;
    cout << "\t2. Bujur Sangkar" << endl;
    cout << "\t3. Lingkaran" << endl;
    cout << "\t4. Segitiga" << endl;
    cout << "Masukan nomor bangun datar yang ingin dicari luasnya : "; cin >> no;
}

int main () {
    
    menu();
    inputdata(no, a, b);
    luas = criLuas(no, a, b);
    
    cout << "Luas : " << luas << endl;
 
   return 0;
}

