#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    string nama, nim, alamat;

int umur, thnlahir;
cout << "Masukkan NIM Anda: "; getline(cin,nim);
cout << "Masukkan Nama Anda: ";getline(cin, nama);
cout << "Masukkan Alamat Anda: "; getline(cin,alamat);
cout << "Masukkan Tahun Lahir Anda : "; cin >> thnlahir;
system("cls"); //membersihkan layar

umur = 2025 - thnlahir;

cout << "\n";
cout << "NIM Anda adalah : " << nim << "\n";
cout << "Nama Anda : " << nama << "\n";
cout << "Alamat Anda di " << alamat << "\n";
cout << "Umur Anda Sekarang : " << umur << " tahun" << "\n";
}




