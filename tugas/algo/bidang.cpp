#include <iostream>
using namespace std;

float luasSumur, luasSisaTanah, phi;

int luasBidang1, luasBidang2, kelilingBidang1, kelilingBidang2, luasTotalTanah, kelilingTotalTanah, luasRumah, biayaPondasiperM, biayaPagarPerM, biayaPavingPerM2, totalBiayaPaving, totalBiayaPagar, totalBiayaPondasi;

main() {

    cout << "Masukan Biaya Pemasangan Pondasi per m         : " ;
    cin >> biayaPondasiperM;
    cout << "Masukan Biaya Pemasangan Pagar per m           : " ;
    cin >> biayaPagarPerM;
    cout << "Masukan Biaya Pemasangan Paving Block per m2   : " ;
    cin >> biayaPavingPerM2;

    luasBidang1 = 50 * 40;
    luasBidang2 = 30 * 20;
    luasTotalTanah = luasBidang1 + luasBidang2;
    
    kelilingBidang1 = 2 *(50 + 40);
    kelilingBidang2 = 2 *(30 + 20);
    kelilingTotalTanah = kelilingBidang1 + kelilingBidang2;

    luasRumah = 15 * 10;
    phi = 3.14;
    luasSumur = phi * (1.5 / 2) * (1.5 / 2);
    luasSisaTanah = luasTotalTanah - (luasRumah + luasSumur);

    totalBiayaPondasi = biayaPondasiperM * kelilingTotalTanah;
    totalBiayaPagar = biayaPagarPerM * kelilingTotalTanah;
    totalBiayaPaving = biayaPavingPerM2 * luasSisaTanah;

    cout << "\nLuas Total Tanah adalah " << luasTotalTanah << " m2" <<endl;
    cout << "Total Keliling Tanah adalah " << kelilingTotalTanah << " m" <<endl;
    cout << "Luas Rumah adalah " << luasRumah << " m2" <<endl;
    cout << "Luas Sumur adalah " << luasSumur << " m2" <<endl;
    cout << "Luas Sisa Tanah adalah " << luasSisaTanah << " m2" <<endl;

    cout << "\nBiaya Pemasangan Pondasi adalah Rp" << totalBiayaPondasi << endl;
    cout << "Biaya Pemasangan Pagar adalah Rp" << totalBiayaPagar <<endl;
    cout << "Biaya Pemasangan Paving Block adalah Rp" << totalBiayaPaving << endl;

    cout << "\nTotal Biaya Keseluruhan adalah Rp" << totalBiayaPagar + totalBiayaPaving + totalBiayaPondasi << endl;
   
    return 0;
}
