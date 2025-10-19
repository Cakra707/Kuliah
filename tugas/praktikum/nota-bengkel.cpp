#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

double hargaAlat, ongkosKerja, pajakPPn, totalPembayaran;

int main () {
    
    cout <<"Masukan Harga Alat       : Rp "; cin >> hargaAlat;
    cout <<"Masukan Ongkos Kerja     : Rp "; cin >> ongkosKerja;
   
    pajakPPn = (hargaAlat + ongkosKerja ) * 0.1;
    totalPembayaran = hargaAlat + ongkosKerja + pajakPPn;
    system("cls");

    cout <<"\n";
    cout << setw(35) <<"BENGKEL MOBIL MAJU MUNDUR"<< endl;
    cout << setw(30) <<"NOTA PEMBAYARAN" << endl;
    cout << "----------------------------------------------" <<endl <<endl;

    cout << fixed << setprecision(2);
    cout <<"Harga Alat              : Rp " << setw(15) << hargaAlat << endl;
    cout <<"Ongkos Kerja            : Rp " << setw(15) << ongkosKerja << endl;
    cout <<"Pajak PPn(10%)          : Rp " << setw(15) << pajakPPn << endl;
    cout <<"Total Pembayaran        : Rp " << setw(15) << totalPembayaran <<endl <<endl;
    
    cout << "----------------------------------------------" <<endl;
    cout << setw(39) <<"Terima Kasih Atas Kunjungan Anda" << endl;

    return 0;
}
