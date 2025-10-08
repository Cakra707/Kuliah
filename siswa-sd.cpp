#include <iostream>
using namespace std;

int jumlahSiswa, bus, minibus, sisaDariBus, sisaSiswa, siswaDiBus, siswaDiMinibus;

main() {

    cout <<"Masukan Jumlah Siswa : ";
    cin >> jumlahSiswa;

    bus = jumlahSiswa / 30;
    sisaDariBus = jumlahSiswa % 30;
    siswaDiBus = jumlahSiswa - sisaDariBus;

    minibus = sisaDariBus / 7;
    sisaSiswa = sisaDariBus % 7;
    siswaDiMinibus = sisaDariBus - sisaSiswa;

    cout << "\nJumlah Bus yang digunakan adalah " << bus << " bus -> ( " << siswaDiBus << " siswa )" <<endl; 
    cout << "Jumlah minibus yang digunakan adalah " << minibus << " minibus -> ( " << siswaDiMinibus << " siswa )" <<endl;
     cout << "Jumlah siswa yang tidak kebagian tempat adalah " << sisaSiswa << " siswa ";
     
     return 0;
}