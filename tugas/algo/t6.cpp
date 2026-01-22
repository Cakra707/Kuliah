//program untuk mencatat transaksi penjualan
#include <iostream>
#include <iomanip>
using namespace std;

struct dtBrg {
    string kdBrg, nmBrg;
    int jmlBli;
    float hrgSatuan, totHrg;
};

struct dtPlgn {
    string kdPlgn, nmPlgn;
    struct dtBrg brg[50];
    float subTot, pot, grandTot;
};

struct dtPlgn plgn[100];

int main () {
    int i=0; char jwb;

    cout << "PENJUALAN TOKO SERBA ADA ADA AJA" << endl;
    cout << string(35, '-') << endl;
    while (1) {
        cout << "\nMasukan Data Pembeli Ke-" << i + 1 << " : " << endl;
        cout << "Kode Pelanggan : "; cin >> plgn[i].kdPlgn;
        cout << "Nama Pelanggan : "; cin.ignore(); getline(cin, plgn[i].nmPlgn);

        int j = 0, totBrg = 0; 
        plgn[i].subTot = 0;
        cout << fixed << setprecision(2) << endl;
        while (1) {
           
            cout << "\nMasukan Data Barang Ke-" << j + 1 << " : " << endl;
            cout << "Kode Barang : "; cin >> plgn[i].brg[j].kdBrg;
            cout << "Nama Barang : "; cin.ignore(); getline(cin, plgn[i].brg[j].nmBrg);
            cout << "Harga Satuan : Rp"; cin >> plgn[i].brg[j].hrgSatuan;
            cout << "Jumlah Beli : "; cin >> plgn[i].brg[j].jmlBli;

            plgn[i].brg[j].totHrg = plgn[i].brg[j].hrgSatuan * plgn[i].brg[j].jmlBli;
            
            cout << "Total Harga : Rp"  << plgn[i].brg[j].totHrg << endl;

            totBrg += plgn[i].brg[j].jmlBli;
            plgn[i].subTot += plgn[i].brg[j].totHrg;
            cout << "Sub Total Harga : Rp" << plgn[i].subTot << endl;
            j++;

            cout << "\nAda Barang Lagi? (y/t) : ";  cin >> jwb;
            if (jwb == 't') break;
    }

    if (totBrg >= 5 && totBrg <= 10 ) plgn[i].pot = 0.05;
    else if (totBrg >= 11 && totBrg <= 20) plgn[i].pot = 0.1;
    else if (totBrg > 20 ) plgn[i].pot = 0.2;
    else plgn[i].pot = 0;

    plgn[i].grandTot = plgn[i].subTot - (plgn[i].subTot * plgn[i].pot);

    cout << "\nNOTA TRANSAKSI" << endl;
    cout << "Kode Pelanggan : " << plgn[i].kdPlgn << endl;
    cout << "Nama Pelanggan : " << plgn[i].nmPlgn << endl << endl;

    cout << string(70, '-') << endl;
    cout << left << 
    setw(5) << "No." << 
    setw(10) << "Kode Brg"<< 
    setw(15) << "Nama Brg" << 
    setw(15) << "Harga Satuan" <<
    setw(10) << "Jumlah" << 
    setw(15) << "Tot Harga" << endl;
    cout << string(70, '-') << endl;

    for (int d = 0; d < j; d++) {
        
        cout << 
            setw(5) << d + 1 << 
            setw(10) << plgn[i].brg[d].kdBrg << 
            setw(15) << plgn[i].brg[d].nmBrg << 
            " Rp" << setw(13) << plgn[i].brg[d].hrgSatuan <<
            setw(10) << plgn[i].brg[d].jmlBli << 
            " Rp" << setw(13) << plgn[i].brg[d].totHrg << endl;
    }
    cout << string(70, '-') << endl;

    cout << "\nSub Total Harga   : Rp" << plgn[i].subTot << endl;
    cout << "Total Jumlah Barang : " << totBrg << endl;
    cout << "Potongan            : " << plgn[i].pot * 100 << "%" << endl;
    cout << "Jumlah yang harus dibayar : Rp" << plgn[i].grandTot << endl;
    i++;

    cout << "\nInput Transaksi berikutnya [y/t] : ";  cin >> jwb;
    if (jwb == 't') break;
    }

    return 0;
}