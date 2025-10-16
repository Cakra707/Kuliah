#include <iostream>
#include <iomanip>
using namespace std;

int biayaBuatKolamPerM, biayaPasangKeramikPerM, biayaTanamRumputPerM, biayaKolam, biayaKeramik, biayaRumput, totalBiaya;
float luasTanah, luasKolam, luasDipasangKeramik, luasDitanamRumput;

main () {

    cout << "Masukan Luas Tanah                             : "; cin >> luasTanah;
    cout << "Masukan Biaya Pembuatan Kolam Ikan per meter   : "; cin >> biayaBuatKolamPerM;
    cout << "Masukan Biaya Pemasangan Keramik per meter     : "; cin >> biayaPasangKeramikPerM;
    cout << "Masukan Biaya Penanaman Rumput per meter       : "; cin >> biayaTanamRumputPerM;

    luasKolam = luasTanah * 0.25;
    luasDipasangKeramik = luasTanah * 0.4;
    luasDitanamRumput = luasTanah - (luasKolam + luasDipasangKeramik);

    biayaKolam = luasKolam * biayaBuatKolamPerM;
    biayaKeramik = luasDipasangKeramik * biayaPasangKeramikPerM;
    biayaRumput = luasDitanamRumput * biayaTanamRumputPerM;

    totalBiaya = biayaKolam + biayaRumput + biayaKeramik;

    cout << "\nHASIL PERHITUNGAN" <<endl;

    cout <<"\n";
    cout << setiosflags(ios::right);
    cout << setw(24) << "Luas Tanah     :   " << setw(10) << luasTanah <<endl;
    cout << setw(24) << "Luas Kolam     :   " << setw(10) << luasKolam <<endl;
    cout << setw(24) << "Luas Keramik   :   " << setw(10) << luasDipasangKeramik <<endl;
    cout << setw(24) << "Luas Rumput    :   " << setw(10) << luasDitanamRumput <<endl;
    cout << setw(24) << "Biaya Kolam    : Rp"  << setw(10) << biayaKolam <<endl;
    cout << setw(24) << "Biaya Keramik  : Rp"  << setw(10) << biayaKeramik <<endl;
    cout << setw(24) << "Biaya Rumput   : Rp"  << setw(10) << biayaRumput <<endl;

    cout << "\n";
    cout << setw(24) << "Total Biaya    :   "  << setw(10) << totalBiaya;

    return 0;

}