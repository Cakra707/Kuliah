#include <iostream>
using namespace std;

const int SIZE = 10; 
const int N = 11;     

int A[SIZE];


int myhash(int x) {
    return x % N;
}

int main() {
    int x=0, indeks=0, h=0;


    cout << "=== Input Data ke Hash Table ===" << endl;
    for (int idx = 0; idx < SIZE; idx++) {
        cout << "Masukkan data ke-" << idx + 1 << " : ";
        cin >> x;

        indeks = myhash(x);
        while (A[indeks] != 0) { 
           indeks = (indeks + 1) % SIZE;
        }
        
        
        A[indeks] = x;
        cout << "Data pada indeks ke-" << indeks << " : " << A[indeks] << endl;
    }

    while (h < SIZE ) {
        cout << A[h] << endl;
        h++;
    }

    
    cout << "\nMasukkan data yang dicari: ";
    cin >> x;

    indeks = myhash(x);
    
    while (A[indeks] != x && A[indeks] != 0) {
        indeks = (indeks + 1) % SIZE;
    }

    if (A[indeks] == x) {
        cout << "Data ditemukan pada indeks ke-" << indeks << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
