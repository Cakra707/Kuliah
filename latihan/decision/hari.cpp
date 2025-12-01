#include <iostream>
using namespace std;

char kodeHari;
string namaHari;

main () {

    cout << "Masukan Kode Hari : "; cin >> kodeHari;
    
    if (kodeHari == 'A' || kodeHari == 'a' || kodeHari == '1') {
        namaHari = "Senin";
        cout << "Sekarang adalah hari " << namaHari << endl;

    } else if (kodeHari == 'B' || kodeHari == 'b' || kodeHari == '2') {
        namaHari = "Selasa";
        cout << "Sekarang adalah hari " << namaHari << endl;

    } else if (kodeHari == 'C' || kodeHari == 'c' || kodeHari == '3') {
        namaHari = "Rabu";
        cout << "Sekarang adalah hari " << namaHari << endl;

    } else if (kodeHari == 'D' || kodeHari == 'd' || kodeHari == '4') {
        namaHari = "Kamis";
        cout << "Sekarang adalah hari " << namaHari << endl;

    } else if (kodeHari == 'E' || kodeHari == 'e' || kodeHari == '5') {
        namaHari = "Jumat";
        cout << "Sekarang adalah hari " << namaHari << endl;

    } else if (kodeHari == 'F' || kodeHari == 'f' || kodeHari == '6') {
        namaHari = "Sabtu";
        cout << "Sekarang adalah hari " << namaHari << endl;

    } else if (kodeHari == 'G' || kodeHari == 'g' || kodeHari == '7') {
        namaHari = "Minggu";
        cout << "Sekarang adalah hari " << namaHari << endl;
        
    } else {
        cout << "Masukan kode hari dengan benar!" << endl;
    }

    

    return 0;
}