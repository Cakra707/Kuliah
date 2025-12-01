//program untuk menghitung total pajak import barang
#include <iostream>
#include <iomanip>
using namespace std;

string nmBrg, jnsBrg;
int jmlBrg, klsBrg;
float hrgBrg, pjkImport, totHrgBrg, totPjk, totHrg;
char ada;

void inData() {
    cout << "Departemen Perdagangan Republik ANU" << endl << endl;

    cout << "Masukan Nama Barang : "; cin.ignore(); getline(cin, nmBrg);
    cout << "Masukan Harga Barang  : "; cin >> hrgBrg;
    cout << "Masukan Jumlah Barang : "; cin >> jmlBrg;
    cout << "Kelas Barang : " << endl;
    cout << "\t1. Makanan, Pajaknya 5%" << endl;
    cout << "\t2. Pakaian, Pajaknya 10%" << endl;
    cout << "\t3. Mesin-mesin, Pajaknya 20%" << endl;
    cout << "Pilihan [1/2/3] : "; cin >> klsBrg;
}

string cariJenis() {
    switch (klsBrg) {
        case 1 : jnsBrg = "Makanan"; break;
        case 2 : jnsBrg = "Pakaian"; break;
        case 3 : jnsBrg = "Mesin-mesin"; break;
        default : jnsBrg = "Tidak Diketahui";
    }
    return jnsBrg;
}

void cariPajak() {
    switch (klsBrg) {
        case 1 : pjkImport = 0.05; break;
        case 2 : pjkImport = 0.1; break;
        case 3 : pjkImport = 0.2; break;
        default : pjkImport = 0;
    }
}

float hitTot() {
    totHrgBrg = jmlBrg * hrgBrg;
    totPjk = totHrgBrg * pjkImport;
    return totPjk;
}

int main () {
    
    while (true) {
    system("cls");
    inData();
    cariJenis();
    cariPajak();
    hitTot();

    cout << "\nJenis Barang adalah : " << jnsBrg << endl;
    cout << "Besaran Pajak import : " << pjkImport * 100 << "%" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Harga Barang : Rp" << totHrgBrg << endl;
    cout << "Total Nilai Pajak : Rp" << totPjk << endl;

    cout << "\nAda data lagi? [y/t] : "; cin >> ada;
    if (ada == 't') break;
    }

    return 0;

}