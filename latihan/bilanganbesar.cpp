#include <iostream>
using namespace std;

int n, i, angka, maks = -1;

main () {

    cout << "Masukan total angka : "; cin >> n;

    for (i=1; i <=n; i++) {
        cout << "Masukan angka : "; cin >> angka;
        if (angka > maks) maks = angka;
        
    }
    cout << maks;
}