#include <iostream>
#include <iomanip>
using namespace std;

const int brs1 = 3, kol1 = 4, brs2 = 2, kol2 = 4;
const int brs3 = 5, kol3 = 4;
int m1[brs1][kol1], m2[brs2][kol2], m3[brs3][kol3];
int brs, kol;

void isiMatriks(int n, int m, int a[][4]);
void tampilMatriks(int n, int m, int a[][4]);

int main () {

    cout << "Matriks 1 :"<< endl;
    isiMatriks(brs1, kol1, m1);
    cout << "\nMatriks 2 :"<< endl;
    isiMatriks(brs2, kol2, m2);
    
    for (brs = 0; brs < brs1; brs++) {
        for (kol = 0; kol < kol1; kol++) {
            m3[brs][kol] = m1[brs][kol];
        }
    }

    for (brs = 0; brs < brs2; brs++) {
        for (kol = 0; kol < kol2; kol++) {
            cout << brs1 + brs << " ";
            m3[brs1 + brs][kol] = m2[brs][kol];
        }
    }
    
    cout << "\nMatriks hasil penggabungan : \n";
    
    tampilMatriks(brs3, kol3, m3);
    
}

void isiMatriks(int n, int m, int a[][4]) {
    int brs, kol;
    for (brs = 0; brs < n; brs++) {
        for (kol = 0; kol < m; kol++) {
            cout << "Masukan nilai untuk matriks[" << brs << "][" << kol << "] : ";
            cin >> a[brs][kol];
        }
    }
}

void tampilMatriks(int n, int m, int a[][4]) {
    int brs, kol;
    for (brs = 0; brs < n; brs++) {
        for (kol = 0; kol < m; kol++) {
            cout << setw(4) << a[brs][kol] << " ";
        }
        cout << endl;
    }
}













