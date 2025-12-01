#include <iostream>
#include <iomanip>
using namespace std;

const int brse = 3, kole = 3;
int m1[brse][kole], m2[brse][kole], m3[brse][kole];
int brs, kol;

void isiMatriks(int n, int m, int a[][3]);
void tampilMatriks(int n, int m, int a[][3]);

int main () {

    cout << "Mengisi matriks pertama:" << endl;
    isiMatriks(brse, kole, m1);
    cout << "\nMengisi matriks kedua:" << endl;
    isiMatriks(brse, kole, m2);

    for (brs = 0; brs < brse; brs++) {
        for (kol = 0; kol < kole; kol++) {
            m3[brs][kol] = m1[brs][kol] + m2[brs][kol];
        }
    }

    cout << "\nMatriks hasil penjumlahan : " << endl;
    tampilMatriks(brse, kole, m3);
    return 0;
    
}

void isiMatriks(int n, int m, int a[][3]) {
    int brs, kol;
    for (brs = 0; brs < n; brs++) {
        for (kol = 0; kol < m; kol++) {
            cout << "Masukan nilai untuk matriks[" << brs << "][" << kol << "] : ";
            cin >> a[brs][kol];
        }
    }
}

void tampilMatriks(int n, int m, int a[][3]) {
    int brs, kol;
    for (brs = 0; brs < n; brs++) {
        for (kol = 0; kol < m; kol++) {
            cout << setw(4) << a[brs][kol] << " ";
        }
        cout << endl;
    }
}













