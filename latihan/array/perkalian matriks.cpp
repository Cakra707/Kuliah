#include <iostream>
#include <iomanip>
using namespace std;

int brsA = 3, kolA = 4, brsB = 4, kolB = 5;
int A[3][4], B[4][5], i,k,j, C[3][5];



int main () {

    cout << "Mengisi matriks A :" << endl;
     for (i = 0; i < brsA; i++) {
        for (k = 0; k < kolA; k++) {
            cout << "Masukan nilai untuk matriks[" << i << "][" << k << "] : ";
            cin >> A[i][k];
        }
    }

    cout << "Mengisi matriks B :" << endl;
    for (i = 0; i < brsB; i++) {
        for (j = 0; j < kolB; j++) {
            cout << "Masukan nilai untuk matriks[" << i << "][" << j << "] : ";
            cin >> B[i][j];
        }
    }

    cout << "mengalikan kedua matriks : " << endl;
    for (i = 0; i < brsA; i++) {
        for (j = 0; j < kolB; j++) {
            C[i][j] = 0;
            for (k = 0; k < kolA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMatriks hasil perkalian : " << endl;
     for (i = 0; i < brsA; i++) {
        for (j = 0; j < kolB; j++) {
            cout << setw(4) << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
    
}

















