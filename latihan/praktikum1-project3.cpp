#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int nilai1;
float nilai2;
string nama;
double gaji;

int main() {


    cout << "Masukkan nilai bulat : "; cin>>nilai1;
    cout << "Tampilan nilai yang anda masukkan " << endl;
    cout << "Menggunakan setw(8) : " << setw(8) << nilai1 << endl;
    cout << "Menggunakan setw(-8):" << setw(-8) << nilai1 << endl;
    cout << "Menggunakan setw(8) dan setfill('*') : ";
    cout << setfill('*') << setw(8) << nilai1 << endl;
    cout << setfill(' '); //menormalkan penggunaan setfill('*')
    cin.ignore();
    cin.get(); //menunda proses hingga penekanan enter
    cout << "Masukkan nilai pecahan : "; cin>>nilai2;
    cout << "Tampilan nilai yang anda masukkan " << endl;
    cout << "Menggunakan setiosflags(ios: :fixed) : "
    << setiosflags(ios :: fixed) << nilai2 << endl;
    cout << "Menggunakan setiosflags(ios: :scientific) : "
    << setiosflags(ios :: scientific) << nilai2 << endl;
    cout << resetiosflags(ios :: scientific);
    cout << "Menggunakan setprecision(4) : ";
    cout << setprecision(4) << nilai2 << endl;
    cin.ignore();
    cin.get();
    cout << "Masukkan nama anda : "; getline(cin, nama);
    cout << "Masukkan uang saku anda perbulan : "; cin>>gaji;
    cout << "\nTampilan data yang anda masukkan " << endl;
    cout << "Menggunakan setiosflags(ios: :left) dan setiosflags(ios: :right) : ";
    cout << endl;
    cout << setiosflags(ios :: left) << setw(25) << "N A M A";
    cout << setiosflags(ios :: right) << setw(20) << "UANG SAKU" << endl;
    cout << resetiosflags(ios :: right);
    cout << setiosflags(ios :: left) << setw(25) << nama;
    cout << setiosflags(ios :: right) << setw(20) << gaji << endl;
    return 0;
}
