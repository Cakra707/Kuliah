#include <iostream>
using namespace std;

const int brsA = 2, brsAT = 3;
const int kolA = 3, kolAT = 2;   
int A[brsA][kolA] , AT[brsAT][kolAT], brs, kol;

int main() {

    for (brs = 0; brs < brsA; brs++) {
        for (kol = 0; kol < kolA; kol++) {
            cout << "Masukan nilai untuk matriks[" << brs << "][" << kol << "] : "; cin >> A[brs][kol];
        }
    }
    cout << "\nSebelum Transpose Matriks A : " << endl;
    for (brs = 0; brs < brsA; brs++) {
        for (kol = 0; kol < kolA; kol++) {
            cout << A[brs][kol] << " ";
        }
        cout << endl;
    }

    cout << "\nSetelah Transpose Matriks A : " << endl;

    for (brs = 0; brs < brsAT; brs++) {
        for (kol = 0; kol < kolAT; kol++) {
            AT[brs][kol] = A[kol][brs];
        }
    }

    for (brs = 0; brs < brsAT; brs++) {
        for (kol = 0; kol < kolAT; kol++) {
            cout << AT[brs][kol] << " ";
        }
        cout << endl;
}
}
    

