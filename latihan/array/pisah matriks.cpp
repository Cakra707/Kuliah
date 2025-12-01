#include <iostream>
#include <iomanip>
using namespace std;

const int brs1 = 4, kol1 = 2, brs2 = 4, kol2 = 3;
const int brs3 = 4, kol3 = 5;
int m1[brs1][kol3], m2[brs2][kol3], m3[brs3][kol3];
int brs, kol;

void isiMatriks(int n, int m, int a[][5]);
void tampilMatriks(int n, int m, int a[][5]);

int main () {

    isiMatriks(brs3, kol3, m3);

     cout << "Sebelum dipecah : " << endl;
    for (brs = 0; brs < brs3; brs++) {
        for (kol = 0; kol < kol3; kol++) {
            cout << setw(4) << 
            m3[brs][kol] << " ";
        }
        cout << endl;
    }
    
    for (brs = 0; brs < brs1; brs++) {
        for (kol = 0; kol < kol1; kol++) {
            m1[brs][kol] = m3[brs][kol];
        }
    }

    for (brs = 0; brs < brs2; brs++) {
        for (kol = 0; kol < kol2; kol++) {
            m2[brs][kol] = m3[brs][kol + kol1];
        }
    }
    
    cout << "\nMatriks 1 : " << endl;
    tampilMatriks(brs1, kol1, m1);
    cout << "\nMatriks 2 : " << endl;
    tampilMatriks(brs2, kol2, m2);

    return 0;
    
}

void isiMatriks(int n, int m, int a[][5]) {
    int brs, kol;
    for (brs = 0; brs < n; brs++) {
        for (kol = 0; kol < m; kol++) {
            cout << "Masukan nilai untuk matriks[" << brs << "][" << kol << "] : ";
            cin >> a[brs][kol];
        }
    }
}

void tampilMatriks(int n, int m, int a[][5]) {
    int brs, kol;
    for (brs = 0; brs < n; brs++) {
        for (kol = 0; kol < m; kol++) {
            cout << setw(4) << a[brs][kol] << " ";
        }
        cout << endl;
    }
}













