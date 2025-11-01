#include <iostream> 
#include <iomanip>
using namespace std;

int jenisPulsa;
char kodeOperator;
string namaOperator;
double hargaPulsa, jumlahUang, ppn, totalHarga, kembalian;

int main () {
    cout << "\tCOUNTER PULSA MAJU MUNDUR" << endl <<endl;
    cout << "Masukan Kode Operator [T/X/I] : "; cin >> kodeOperator;
    
    switch (kodeOperator) {
        case 'T' : namaOperator = "Telkomsel"; break;
        case 'X' : namaOperator = "XL"; break;
        case 'I' : namaOperator = "IM3"; break;
        default : namaOperator = "Masukan Kode Operator yang sesuai!";
    }
    cout << setw(23) << "Nama Operator   : " << namaOperator << endl << endl;
    cout << "Masukan Jenis Pulsa [5/10/20] : "; cin >> jenisPulsa;

        if (namaOperator == "Telkomsel" ) {
            if (jenisPulsa == 20) hargaPulsa = 23000;
            else if (jenisPulsa == 10) hargaPulsa = 13000;
            else if (jenisPulsa == 5) hargaPulsa = 8000;
        } 
        else if (namaOperator == "XL" ) {
            if (jenisPulsa == 20) hargaPulsa = 21000;
            else if (jenisPulsa == 10) hargaPulsa = 12000;
            else if (jenisPulsa == 5) hargaPulsa = 7000;

        } else if (namaOperator == "IM3" ) {
            if (jenisPulsa == 20) hargaPulsa = 20000;
            else if (jenisPulsa == 10) hargaPulsa = 11000;
            else if (jenisPulsa == 5) hargaPulsa = 6000;
        } 

    ppn = hargaPulsa * 0.1;
    totalHarga = hargaPulsa + ppn;
    
    cout << fixed << setprecision(2);
    cout << setw(23) << "Harga Pulsa  : Rp" << setw(10) << hargaPulsa << endl;
    cout << setw(23) <<"PPN (10%)    : Rp" << setw(10) << ppn <<endl;
    cout << setw(23) <<"Total Harga  : Rp" << setw(10) << totalHarga <<endl <<endl;
    
    cout << "Masukan Jumlah Uang  : Rp"; cin >> jumlahUang;
    kembalian = jumlahUang - totalHarga;
    cout << setw(23) << "Kembalian    : Rp" << setw(10) << kembalian << endl;

        return 0;
}
