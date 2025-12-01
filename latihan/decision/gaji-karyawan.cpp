#include <iostream>
using namespace std;

char golonganKaryawan;
string namaKaryawan;
int upahPerJam, jamKerjaSebulan, lembur, upahLemburPerjam, totalGajiSebulan;

//chatgpt
string formatRupiah(long long angka) {
    string hasil = to_string(angka);
    int pos = hasil.length() - 3;
    while (pos > 0) {
        hasil.insert(pos, ".");
        pos -= 3;
    }
    return hasil;
}
//

main() {

    cout << "Masukan Nama Anda      : "; cin >> namaKaryawan;
    cout << "Masukan Golongan Anda  : "; cin >> golonganKaryawan;
    cout << "Masukan Jam Keja Anda dalam Satu Bulan  : "; cin >> jamKerjaSebulan;

    switch (golonganKaryawan) {
        case 'A' : upahPerJam = 5000;
        break;
        case 'B' : upahPerJam = 6000;
        break;
        case 'C' : upahPerJam = 7500;
        break;
        case 'D' : upahPerJam = 9000;
        break;

        default : cout << "Masukan Golongan dari A sampai D" << endl;
    }

    if ( jamKerjaSebulan > 150) {
        lembur = jamKerjaSebulan - 150;
        jamKerjaSebulan -= lembur;
        upahLemburPerjam = upahPerJam + (upahPerJam * 0.25);
    } else {
        lembur = 0;
    }
    
    totalGajiSebulan = (upahPerJam * jamKerjaSebulan) + (upahLemburPerjam * lembur);
    
    cout << "\nUpah per jam           : Rp" << formatRupiah(upahPerJam )<<endl;
    cout << "Jam Lembur             : " << lembur <<  " jam" << endl;
    cout << "Upah Lembur per jam    : Rp" << formatRupiah(upahLemburPerjam) <<endl;
    cout << "Total Gaji Satu Bulan yang Diterima Saudara " << namaKaryawan << " adalah Rp" << formatRupiah(totalGajiSebulan) << endl;
   





}