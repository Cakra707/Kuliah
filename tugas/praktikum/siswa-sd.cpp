#include <iostream>
using namespace std;

int jumlahSiswa, bus, minibus, sisaDariBus, sisaSiswa, siswaDiBus, siswaDiMinibus;

main() {

    cout <<"Masukan Jumlah Siswa   : ";
    cin >> jumlahSiswa;

    bus = jumlahSiswa / 40;
    sisaDariBus = jumlahSiswa % 40;
    siswaDiBus = jumlahSiswa - sisaDariBus;

    minibus = sisaDariBus / 12;
    sisaSiswa = sisaDariBus % 12;
    siswaDiMinibus = sisaDariBus - sisaSiswa;

    cout << "Jumlah Bus             : " << bus << " bus        = " << siswaDiBus << " siswa" << endl;
    cout << "Jumlah Minibus         : " << minibus << " minibus     = " << siswaDiMinibus << " siswa" << endl;
    cout << "Jumlah tertolak        : " << sisaSiswa << " siswa" <<endl;
     
     return 0;
}
