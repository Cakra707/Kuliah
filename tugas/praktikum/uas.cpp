#include <iostream>
#include <iomanip>
using namespace std;

struct dataSw {
    string noKtp;
    string nama;
    string jsnMbl;
    string jnsSw;
    int lmSw;
    string jnsPakai;
    double hrgSw;
    double biayaSw;
    double dp;
    double sisaByr;
    string ket;
};

void jmlMbl(dataSw data[], int n) {
    int a = 0, x = 0, in = 0, c = 0;
    for(int i = 0; i < n; i++) {
        if(data[i].jsnMbl == "Avansa") a++;
        else if(data[i].jsnMbl == "Xenia") x++;
        else if(data[i].jsnMbl == "Innova") in++;
        else if(data[i].jsnMbl == "Camry") c++;
    }
    cout << "Total Jumlah Mobil sesuai jenisnya :" << endl;
    cout << "   [Avansa: " << a << "] [Xenia: " << x
         << "] [Innova: " << in << "] [Camry: " << c << "]" << endl;
}

void maxMinLamaSewa(dataSw data[], int n) {
    int totH = 0, maxH = -1, minH = 9999;
    int totJ = 0, maxJ = -1, minJ = 9999;

    for(int i = 0; i < n; i++) {
        if(data[i].jnsSw == "Hari") {
            totH += data[i].lmSw;
            if(data[i].lmSw > maxH) maxH = data[i].lmSw;
            if(data[i].lmSw < minH) minH = data[i].lmSw;
        } else {
            totJ += data[i].lmSw;
            if(data[i].lmSw > maxJ) maxJ = data[i].lmSw;
            if(data[i].lmSw < minJ) minJ = data[i].lmSw;
        }
    }

    cout << "\nTotal Lama Penyewaan sesuai jenisnya :\n";
    if (maxH == -1) maxH = 0;
    if (minH == 9999) minH = 0;
    cout << "Hari   = "<< endl; 
    cout << "Total  : " << totH << " hari" << endl;
    cout << "Maks   : "<< maxH << " hari" << endl;
    cout << "Min    : " << minH << endl;

    if (maxJ == -1) maxJ = 0;
    if (minJ == 9999) minJ = 0;
    cout << "Jam   = "<< endl; 
    cout << "Total  : " << totJ << " jam" << endl;
    cout << "Maks   : "<< maxJ << " jam" << endl;
    cout << "Min    : " << minJ << " jam" <<  endl;
}

void tambahanDaerah(dataSw data[], int n) {
    double totalTambahan = 0;
    for(int i = 0; i < n; i++) {
        if(data[i].jnsPakai == "Daerah") {
            totalTambahan += (data[i].biayaSw / 11);
        }
    }
    cout << "\nTotal Tamabahan Pemakaian Daerah : Rp " << fixed << setprecision(2) << totalTambahan << endl;
}

void maxMinBiaya(dataSw data[], int n) {
    int maks = 0, minim = 0;
    for(int i = 1; i < n; i++) {
        if(data[i].biayaSw > data[maks].biayaSw) maks = i;
        if(data[i].biayaSw < data[minim].biayaSw) minim = i;
    }

    cout << "\nMaks/Min Biaya Penyewa :\n";
    cout << "   Terbesar : " << left << setw(15)<< data[maks].nama << " (Rp "<< data[maks].biayaSw << ")" << endl;
    cout << "   Terkecil : " << left << setw(15)<< data[minim].nama << " (Rp "<< data[minim].biayaSw << ")" << endl;
}

void printDaftar(dataSw data[], int n) {
    cout << "\nDaftar Data Penyewa :\n";
    cout << string(85, '-') << endl;//
    cout << left << setw(15) << "Nama" << setw(12) << "Mobil" << setw(12) << "Durasi" << setw(15) << "Biaya" << "Status" << endl;
    cout << string(85, '-') << endl; //

    for(int i = 0; i < n; i++) {
        cout << left << setw(15) << data[i].nama << setw(12) << data[i].jsnMbl<< setw(3) << data[i].lmSw << setw(9) << data[i].jnsSw << "Rp " << setw(12) << data[i].biayaSw<< data[i].ket << endl;
    }
    cout << string(85, '-') << endl; //
}

void konversi(dataSw data[], int n) {
    int i =n;
    int hari = data[i].lmSw / 24;
    int sisaJam = data[i].lmSw % 24;
    double h, j;

    if (data[i].jsnMbl == "Avansa" || data[i].jsnMbl == "Xenia") {
        h = 400000; j = 30000;
    } else if (data[i].jsnMbl == "Innova") {
        h = 500000; j = 35000;
    } else {
        h = 800000; j = 40000;
    }

    if (data[i].jnsPakai == "Daerah") {
        h *= 1.1;
        j *= 1.1;
    }

    data[i].biayaSw = (hari * h) + (sisaJam * j);
    cout << "Durasi lebih dari 24 Jam dikonversi ke " << hari << " Hari dan " << sisaJam << " Jam." << endl;
}

void printLunas(dataSw data[], int n) {
    cout << "\nDaftar Penyewa Lunas:" << endl;
    for(int i = 0; i < n; i++) {
        if(data[i].ket == "Lunas") {
            cout << "   - " << left << setw(15)
                 << data[i].nama << " [ "
                 << data[i].jsnMbl << " ]" << endl;
        }
    }
    cout << string(60, '=') << endl;//
}

int main() {
    int i = 0;
    char lanjut;
    struct dataSw data[100];

    while (true) {
        cout << "\nTransaksi Ke-" << i + 1 << " : " << endl;
        cout << "No KTP          : "; cin >> data[i].noKtp;
        cout << "Nama Penyewa    : "; cin.ignore(); getline(cin, data[i].nama);
        cout << "Jenis Mobil     : "; cin >> data[i].jsnMbl;
        cout << "Jenis Sewa (Hari/Jam) : "; cin >> data[i].jnsSw;
        cout << "Lama Sewa       : "; cin >> data[i].lmSw;
        cout << "Pemakaian (Kota/Daerah) : "; cin >> data[i].jnsPakai;

        if (data[i].jsnMbl == "Avansa" || data[i].jsnMbl == "Xenia")
            if (data[i].jnsSw == "Hari") data[i].hrgSw = 400000;
            else data[i].hrgSw = 30000;
        else if (data[i].jsnMbl == "Innova")
            if (data[i].jnsSw == "Hari") data[i].hrgSw = 500000;
            else data[i].hrgSw = 35000;
        else if (data[i].jsnMbl == "Camry")
            if (data[i].jnsSw == "Hari") data[i].hrgSw = 800000;
            else data[i].hrgSw = 40000;
        else {cout << "Masukan Jenis Mobil yang sesuai"; continue;}

        if (data[i].jnsPakai == "Daerah")
            data[i].hrgSw += (data[i].hrgSw * 0.1);

        data[i].biayaSw = data[i].lmSw * data[i].hrgSw;

        if (data[i].jnsSw == "Jam" && data[i].lmSw > 24)
            konversi(data, i);

        do {
            cout << "Masukkan DP (Min Rp" << fixed << setprecision(2) << data[i].biayaSw * 0.3 << ") : ";
            cin >> data[i].dp;
        } while (data[i].dp < data[i].biayaSw * 0.3);

        data[i].sisaByr = data[i].biayaSw - data[i].dp;
        if (data[i].sisaByr <= 0) data[i].ket = "Lunas";
        else data[i].ket = "Belum Lunas";
        cout << "----------------------------------------" << endl;
        cout << "Total Biaya     : Rp" << data[i].biayaSw << endl;
        cout << "Sisa Bayar      : Rp" << data[i].sisaByr << endl;
        cout << "Status          : " << data[i].ket << endl;

        i++;
        cout << "Masih Ada Data? [y/t] : "; cin >> lanjut;
        if (lanjut == 't') break;
    }

    jmlMbl(data, i);
    maxMinLamaSewa(data, i);
    tambahanDaerah(data, i);
    maxMinBiaya(data, i);
    printDaftar(data, i);
    printLunas(data, i);

    return 0;
}

