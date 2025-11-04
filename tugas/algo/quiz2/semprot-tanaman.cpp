#include <iostream>
#include <iomanip>
using namespace std;

int tipe;
string nama;
double luas, biaya, pot1, pot2, jumPot;

int main() {
    cout << "Masukan Data Petani : " <<endl <<endl; 
    cout << "Nama petani : ";  getline(cin,nama);
    cout << "Luas lahan : "; cin >> luas;
    cout << "Tipe Penyemprotan [1/2/3/4] : "; cin >> tipe;

    switch (tipe) {
        case 1 : biaya = luas * 250000; break;
        case 2 : biaya = luas * 500000; break;
        case 3 : biaya = luas * 750000; break;
        case 4 : biaya = luas * 1250000; break;
        default : cout << "Tipe penyemprotan salah, ulangi!";
        return 0;
}
    if (luas > 100) pot1 = 0.1 * biaya;
    else pot1 = 0.0;
    biaya -= pot1;

    if (biaya > 150000000) pot2 = 0.1 * (biaya - 150000000);
    else pot2 = 0.0;
    biaya -= pot2;
    jumPot = pot1 + pot2;

    cout << fixed << setprecision(2);
    cout << "Sdr : " << nama << " mendapat potongan Rp" << jumPot << " dan harus membayar biaya Rp" << biaya << endl; 

    return 0;
}