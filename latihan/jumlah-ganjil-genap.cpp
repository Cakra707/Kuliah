#include <iostream>
using namespace std;

int x, i, jumlahgenap, jumlahganjil, angkagenap, angkaganjil;

main () {

    cout << "Masukan angka : "; cin >> x;
    
    for (i=1; i<=x; i++) {
        if (i % 2 == 0 ){
           jumlahgenap +=i;
           angkagenap++;


        } else {
            jumlahganjil +=i;
            angkaganjil++;
        }
    }
    cout << jumlahgenap << endl;
    cout << jumlahganjil << endl;
    cout << angkagenap << endl;
    cout << angkaganjil;


    
   
}