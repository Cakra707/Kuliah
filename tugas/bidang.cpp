#include <iostream>
using namespace std;

float luasSumur, luasSisaTanah;

int luasBidang1, luasBidang2, kelilingBidang1, kelilingBidang2, luasTotalTanah, kelilingTotalTanah, luasRumah, biayaPondasiperM, biayaPagarPerM, biayaPavingPerM2;

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
    luasSumur = 3.14 * 0.75 * 0.75;
    luasSisaTanah = luasTotalTanah - (luasRumah + luasSumur);

    biayaPavingPerM2 *= luasSisaTanah;
    biayaPagarPerM *= kelilingTotalTanah;
    biayaPondasiperM *= kelilingTotalTanah;

    cout << "\nLuas Total Tanah adalah " << luasTotalTanah << " m2" <<endl;
    cout << "Luas Total Keliling Tanah adalah " << kelilingTotalTanah << " m" <<endl;
    cout << "Luas Rumah adalah " << luasRumah << " m2" <<endl;
    cout << "Luas Sumur adalah " << luasSumur << " m2" <<endl;
    cout << "Luas Sisa Tanah adalah " << luasSisaTanah << " m2" <<endl;

    cout << "\nBiaya Pemasangan Pagar per meter adalah Rp" << biayaPagarPerM <<endl;
    cout << "Biaya Pemasangan Pondasi per meter adalah Rp" << biayaPondasiperM << endl;
    cout << "Biaya Pemasangan Paving Block per m2 adalah Rp" << biayaPavingPerM2 << endl;

    cout << "\nTotal Biaya Keseluruhan adalah Rp" << biayaPagarPerM + biayaPondasiperM + biayaPavingPerM2 << endl;
   
    return 0;
}
