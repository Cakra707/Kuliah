//program untuk menghitung banyak lembaran atau kepingan sejumlah uang menggunakan fungsi dengan parameter 
#include <iostream>
using namespace std;

int seratusRb, limaPuluhRb, duaPuluhRb, sepuluhRb, limaRb, duaRb, satuRb, limaRatusRp, duaRatusRp, seratusRp; 

int inputUang(int jumlahUang) {
    cout << "Masukan Jumlah Uang    : "; 
        cin >> jumlahUang;
    return jumlahUang;
}

void jmlPecahan(int &jumlahUang, int &nmUang, int uang) {
    nmUang = jumlahUang / uang;
        jumlahUang %= uang;
}

void hitungTotPecahan(int &totLembar, int &totKoin) {
    totLembar = seratusRb + limaPuluhRb + duaPuluhRb + sepuluhRb + limaRb + duaRb + satuRb;

    totKoin = limaRatusRp + duaRatusRp + seratusRp;
}

void cetakSesuaiPecahan(string nmUang, int uang, string jnsPecahan) {
    cout << "Pecahan " << nmUang <<"    = " << uang << jnsPecahan << endl;
}

int main() {
    int jumlahUang = 0;
    int totLembar = 0, totKoin = 0;

    jumlahUang = inputUang(jumlahUang);

    jmlPecahan (jumlahUang, seratusRb, 100000);
    jmlPecahan (jumlahUang, limaPuluhRb, 50000);
    jmlPecahan (jumlahUang, duaPuluhRb, 20000);
    jmlPecahan (jumlahUang, sepuluhRb, 10000);
    jmlPecahan (jumlahUang, limaRb, 5000);
    jmlPecahan (jumlahUang, duaRb, 2000);
    jmlPecahan (jumlahUang, satuRb, 1000);
    jmlPecahan (jumlahUang, limaRatusRp, 500);
    jmlPecahan (jumlahUang, duaRatusRp, 200);
    jmlPecahan (jumlahUang, seratusRp, 100);

    hitungTotPecahan(totLembar, totKoin);
    
    cout << "\n";
    cetakSesuaiPecahan("Rp100.000", seratusRb, " Lembar");
    cetakSesuaiPecahan("Rp50.000", limaPuluhRb, " Lembar");
    cetakSesuaiPecahan("Rp20.000", duaPuluhRb, " Lembar");
    cetakSesuaiPecahan("Rp10.000", sepuluhRb, " Lembar");
    cetakSesuaiPecahan("Rp5.000", limaRb, " Lembar");
    cetakSesuaiPecahan("Rp2.000", duaRb, " Lembar");
    cetakSesuaiPecahan("Rp1.000", satuRb, " Lembar"); 
    cetakSesuaiPecahan("Rp500", limaRatusRp, " Keping");
    cetakSesuaiPecahan("Rp200", duaRatusRp, " Keping");
    cetakSesuaiPecahan("Rp100", seratusRp, " Keping");

    cout << "Sisa uang tanpa pecahan : Rp" << jumlahUang << endl;
    
    cout << "\nTotal jumlah lembaran  = " << totLembar << " Lembar" <<endl;
    cout << "Total jumlah koin      = " << totKoin << " Keping" <<endl;

    return 0;
}