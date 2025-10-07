#include <iostream>
using namespace std;

float diameterSumur, luasSisaBidang;

int luasBidang1, luasBidang2, kelilingBidang1, kelilingBidang2, luasTotalBidang, kelilingTotalgBidang, luasRumah, biayaPondasiperM, biayaPagarPerM, biayaPavingPerM2;

main() {

    cout << "Masukan Biaya Pemasangan Pondasi per m :" ;
    cin >> biayaPondasiperM;

    cout << "Masukan Biaya Pemasangan Pagar per m   :" ;
    cin >> biayaPagarPerM;

    cout << "Masukan Biaya Pemasangan Paving Block per m2 :" ;
    cin >> biayaPavingPerM2;

    luasBidang1 = 50 * 40;
    luasBidang2 = 30 * 20;
    luasTotalBidang = luasBidang1 + luasBidang2;
    
    kelilingBidang1 = 2 *(50 + 40);
    kelilingBidang2 = 2 *(30 + 20);
    kelilingTotalgBidang = kelilingBidang1 + kelilingBidang2;

    luasRumah = 15 * 10;
    diameterSumur = 1.5;
    luasSisaBidang = luasTotalBidang - (luasRumah + diameterSumur);

    biayaPavingPerM2 *= luasSisaBidang;
    biayaPagarPerM *= kelilingTotalgBidang;
    biayaPondasiperM *= kelilingTotalgBidang;

    cout << "Luas Total Bidang adalah " << luasTotalBidang << " m" <<endl;
    cout << "Luas Total Keliling Bidang adalah " << kelilingTotalgBidang << " m" <<endl;
    cout << "Luas Sisa Bidang adalah " << luasSisaBidang << " m" <<endl;
    cout << "Biaya Pemasangan Pagar per meter adalah Rp" << biayaPagarPerM <<endl;

    cout << "Biaya Pemasangan Pondasi per meter adalah Rp" << biayaPondasiperM << endl;

    cout << "Biaya Pemasangan Paving Block per m2 adalah Rp" <<biayaPavingPerM2 << endl;

   
    return 0;
}
