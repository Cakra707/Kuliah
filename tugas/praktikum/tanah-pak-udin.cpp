#include <iostream>
#include <iomanip>
using namespace std;

double luasTanah, luasKolam, luasDipasangKeramik, luasDitanamRumput, biayaBuatKolamPerM, biayaPasangKeramikPerM, biayaTanamRumputPerM, biayaKolam, biayaKeramik, biayaRumput, totalBiaya;

int main () {

    cout << "Masukan Luas Tanah                         : ";    cin >> luasTanah;
    cout << "Masukan Biaya Pembuatan Kolam Ikan per m2  : Rp  "; cin >> biayaBuatKolamPerM;
    cout << "Masukan Biaya Pemasangan Keramik per m2    : Rp  "; cin >> biayaPasangKeramikPerM;
    cout << "Masukan Biaya Penanaman Rumput per m2      : Rp  "; cin >> biayaTanamRumputPerM;

    luasKolam = luasTanah * 0.25;
    luasDipasangKeramik = luasTanah * 0.4;
    luasDitanamRumput = luasTanah - (luasKolam + luasDipasangKeramik);
    biayaKolam = luasKolam * biayaBuatKolamPerM;
    biayaKeramik = luasDipasangKeramik * biayaPasangKeramikPerM;
    biayaRumput = luasDitanamRumput * biayaTanamRumputPerM;
    totalBiaya = biayaKolam + biayaRumput + biayaKeramik;

    cout << fixed << setprecision(2);
    cout <<"\n";
    cout << setw(36) <<"HASIL PERHITUNGAN TANAH" <<endl <<endl;
    cout << "Luas Tanah             :   " << setw(20) << luasTanah <<" m2" <<endl;
    cout << "Luas Kolam Ikan        :   " << setw(20) << luasKolam <<" m2" <<endl;
    cout << "Luas Pasang Keramik    :   " << setw(20) << luasDipasangKeramik <<" m2" <<endl;
    cout << "Luas Tanam Rumput      :   " << setw(20) << luasDitanamRumput <<" m2" <<endl <<endl <<endl;
    
    cout << setw(35) << "HASIL PERHITUNGAN BIAYA" <<endl <<endl;
    cout << "Biaya Buat Kolam Ikan  : Rp"  << setw(20) << biayaKolam <<endl;
    cout << "Biaya Pasang Keramik   : Rp"  << setw(20) << biayaKeramik <<endl;
    cout << "Biaya Tanam Rumput     : Rp"  << setw(20) << biayaRumput <<endl << endl;
    cout << "Total Seluruh Biaya    : Rp"  << setw(20) << totalBiaya;

    return 0;
}
