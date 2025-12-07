#include <iostream>
using namespace std;

const int SIZE = 10;        // ukuran hash

int A[SIZE][5];  // tabel hash + collision
int jumlah[SIZE];   
int prima =11;      // penghitung isi tiap indeks

int myhash(int x) {
    return x % prima;
}

int main() {
    int x;

    // Inisialisasi jumlah collision = 0
    for (int i = 0; i < SIZE; i++) {
        jumlah[i] = 0;
    }

    // Input data
    cout << "=== Input Data ke Hash Table ===" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan data ke-" << i + 1 << " : ";
        cin >> x;

        int indeks = myhash(x);

        
        A[indeks][jumlah[indeks]] = x;
        cout << "\nData pada indeks ke-" << indeks << " posisi ke-" << jumlah[indeks] << " : " << A[indeks][jumlah[indeks]] << endl;
        jumlah[indeks]++;

        cout << "Masuk ke indeks: " << indeks << endl;
    }

    // Tampilkan isi hash table
    cout << "\nISI HASH TABLE:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Index " << i << " : ";
        for (int j = 0; j < jumlah[i]; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Pencarian data
    cout << "\nMasukkan data yang dicari: ";
    cin >> x;

    int indeks = myhash(x);
    bool ketemu = false;

    cout << "Jumlah di indeks " << indeks << " : " << jumlah[indeks] << endl;
    for (int j = 0; j < jumlah[indeks]; j++) {
        cout << "Cek indeks " << indeks << " posisi " << j << " : " << A[indeks][j] << endl;
        if (A[indeks][j] == x) {
            ketemu = true;
            break;
        }
    }

    if (ketemu)
        cout << "Data ditemukan pada indeks " << indeks << endl;
    else
        cout << "Data tidak ditemukan" << endl;

    return 0;
}
