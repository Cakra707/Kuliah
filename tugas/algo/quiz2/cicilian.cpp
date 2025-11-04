#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int lama, n, thn, bln;
double modal, cicilan, bunga;
double modalBulanan, bungaBulanan, modalTahunan, bungaTahunan;

int main() {
    
    cout << "Masukan Modal yang akan dipinjamkan : "; cin >> modal;
    cout << "Masukan Bunga Pinjaman per tahun: "; cin >> bunga;
    cout << "Berapa tahun akan dipinjam: "; cin >> lama;

    bunga /= 12;
    n = lama * 12;
    cicilan = (modal * bunga * pow((bunga+1),n) ) / (pow((bunga+1),n) - 1);

    cout << fixed << setprecision(2);
    cout << "Pembayaran cicilan setiap bulan = Rp " << cicilan << endl;
    cout << "Tahun, Bulan, ModalTerbayar, Bungaterbayar" << endl;

    for (thn = 1; thn<=lama; thn++) {
        bungaTahunan = 0.0;
        modalTahunan = 0.0;

        for (bln = 1; bln <=12; bln++) {
            bungaBulanan = bunga * modal;
            modalBulanan = cicilan - bungaBulanan;
            bungaTahunan += bungaBulanan;
            modalTahunan += modalBulanan;
            cout << thn <<"\t" << bln << "\t" << modalBulanan << "\t" << bungaBulanan << endl;
            modal -= modalBulanan;
        }

        cout << "Akhir tahun-" << thn <<endl;
        cout << "Modal Terbayar = " << modalTahunan << " Bunga Terbayar = " << bungaTahunan <<endl;
        cout << "Sisa Utang Modal = Rp" << modal << endl;
    }

    return 0;
}