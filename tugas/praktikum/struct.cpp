#include <iostream>
#include <iomanip>
using namespace std;

struct DataMatakuliah {
    string KodeMK;
    string NamaMK;
    char NH;        
    short Bobot;   
    short SKS;
};

struct DataMahasiswa {
    string NIM;
    string NamaMHS;
    short JumlahMK;
    DataMatakuliah MK[70];
    short TotalSKS;
    float IPK;
};

struct DataMahasiswa MHS[40];   

short getBobot(char nh) {
    int bbt;
    if (nh == 'A') bbt = 4;
    else if (nh == 'B') bbt = 3;
    else if (nh == 'C') bbt =  2;
    else if (nh == 'D') bbt =  1;
    else bbt = 0;
    return bbt;
}

void inputMatakuliah(DataMahasiswa &mhs) {
    mhs.TotalSKS = 0;
    float totalBobotSKS = 0;
    int i=0;

    while (i < mhs.JumlahMK) {
        cout << "\nMasukkan Data Matakuliah ke-" << i + 1 << endl;
        cout << "Kode Matakuliah  : "; cin >> mhs.MK[i].KodeMK;
        cout << "Nama Matakuliah  : "; cin.ignore(); getline(cin, mhs.MK[i].NamaMK);
        cout << "Nilai Huruf [A/B/C/D/E] : "; cin >> mhs.MK[i].NH;

        mhs.MK[i].Bobot = getBobot(mhs.MK[i].NH);
        cout << "Bobot Nilai         : " << mhs.MK[i].Bobot << endl;

        cout << "Nilai SKS [1/2/3/4]     : "; cin >> mhs.MK[i].SKS;
        cout << fixed << setprecision(2);
        cout << "Bobot x SKS        : " << float(mhs.MK[i].Bobot) * mhs.MK[i].SKS << endl;
        
        mhs.TotalSKS += mhs.MK[i].SKS;
        totalBobotSKS += mhs.MK[i].Bobot * mhs.MK[i].SKS;

        cout << "Total Bobot x SKS : " << totalBobotSKS << endl;
        cout << "Total SKS         : " << mhs.TotalSKS << endl;
        i++;
    }

    mhs.IPK = totalBobotSKS / mhs.TotalSKS;
}

void cetakTranskrip(DataMahasiswa mhs) {

    cout << "\nTRANSKRIP NILAI " << endl;
    cout << "NIM             : " << mhs.NIM << endl;
    cout << "Nama Mahasiswa  : " << mhs.NamaMHS << endl << endl;

    cout << left << setw(5) << "No" << setw(10) << "Kode MK"<<  setw(15) << "Nama MK"<<  setw(7) << "NH"<< setw(7)<< "Bobot"<< setw(7)<< "SKS" << setw(10) << "Bobot x SKS" << endl;
    
    float totalBobotSKS = 0;
    int i = 0;
    while (i < mhs.JumlahMK) { 
        float bxSKS = mhs.MK[i].Bobot * mhs.MK[i].SKS;
        totalBobotSKS += bxSKS;

        cout << setw(5) << i + 1<< setw(10) << mhs.MK[i].KodeMK<< setw(15) << mhs.MK[i].NamaMK << setw(7) << mhs.MK[i].NH << setw(7) << mhs.MK[i].Bobot << setw(7) <<mhs.MK[i].SKS<< setw(10) << bxSKS << endl;
        i++;
    }
    
    cout << "\nTotal Bobot x SKS        : " << totalBobotSKS << endl;
    cout << "Total SKS                  : " << mhs.TotalSKS << endl;
    cout << "Indeks Prestasi Kumulatif  : " << mhs.IPK << endl;
   
}

int main() {
    int i = 0;
    char masih;

    while (true) {
        cout << "\nMasukkan Data Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM            : "; cin >> MHS[i].NIM;
        cout << "Nama Mahasiswa : "; cin.ignore(); getline(cin, MHS[i].NamaMHS);
        cout << "Jumlah Matakuliah : "; cin >> MHS[i].JumlahMK;

        inputMatakuliah(MHS[i]);
        cetakTranskrip(MHS[i]);
        i++;
        cout << "\nInput Data Transkrip Mahasiswa lain [y/t] : ";
        cin >> masih;

        if (masih == 't') break;
    }

    return 0;
}
