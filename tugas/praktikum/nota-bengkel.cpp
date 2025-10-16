#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int hargaAlat, ongkosKerja, pajakPPn, totalPembayaran;

main () {
    
    cout <<"Masukan Harga Alat       : "; cin >> hargaAlat;
    cout <<"Masukan Ongkos Kerja     : "; cin >> ongkosKerja;
    system("cls");

    pajakPPn = (hargaAlat + ongkosKerja ) * 0.1;
    totalPembayaran = hargaAlat + ongkosKerja + pajakPPn;

    cout <<"\nBENGKEL MOBIL MAJU MUNDUR" << endl;
    cout <<"NOTA PEMBAYARAN" << endl;

    cout <<"\n";
    cout << setiosflags(ios::right);
    cout << setw(24) <<"Harga Alat       : " << setw(10) << "Rp" << hargaAlat << endl;
    cout << setw(24) <<"Ongkos Kerja     : " << setw(10) << "Rp" << ongkosKerja << endl;
    cout << setw(24) <<"Pajak PPn(10%)   : " << setw(10) << "Rp" << pajakPPn << endl;
    cout << setw(24) <<"Total Pembayaran : " << setw(10) << "Rp" << totalPembayaran << endl;

    cout << "\nTerima Kasih Atas Kunjungan Anda" <<endl;

    return 0;
}