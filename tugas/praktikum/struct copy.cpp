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

DataMahasiswa MHS[40];   

short getBobot(char nh) {
    if (nh == 'A') return 4;
    else if (nh == 'B') return 3;
    else if (nh == 'C') return 2;
    else if (nh == 'D') return 1;
    else return 0;
}

// =====================
// FUNGSI INPUT DATA MATAKULIAH
// =====================
void inputMatakuliah(DataMahasiswa &mhs) {
    mhs.TotalSKS = 0;
    float totalBobotSKS = 0;

    for (int i = 0; i < mhs.JumlahMK; i++) {
        cout << "\nMasukkan Data Matakuliah ke-" << i + 1 << endl;
        cout << "Kode Matakuliah  : ";
        cin >> mhs.MK[i].KodeMK;
        cout << "Nama Matakuliah  : ";
        cin.ignore();
        getline(cin, mhs.MK[i].NamaMK);
        cout << "Nilai Huruf [A/B/C/D/E] : ";
        cin >> mhs.MK[i].NH;

        mhs.MK[i].Bobot = getBobot(mhs.MK[i].NH);

        cout << "Nilai SKS [1/2/3/4]     : ";
        cin >> mhs.MK[i].SKS;

        mhs.TotalSKS += mhs.MK[i].SKS;
        totalBobotSKS += mhs.MK[i].Bobot * mhs.MK[i].SKS;
    }

    mhs.IPK = totalBobotSKS / mhs.TotalSKS;
}

void cetakTranskrip(DataMahasiswa mhs) {
    cout << "\n============================================" << endl;
    cout << "              TRANSKRIP NILAI               " << endl;
    cout << "============================================" << endl;
    cout << "NIM             : " << mhs.NIM << endl;
    cout << "Nama Mahasiswa  : " << mhs.NamaMHS << endl;


"\n---------------------------------------------------------------\n";

    cout << left << setw(5) << "No" << setw(12) << "Kode MK"<<  setw(15) << "Nama MK"<<  setw(7) << "NH"<< setw(7)<< "Bobot"<< setw(7)<< "SKS" << setw(10) << "Bobot x SKS" << endl;
    
    cout << "---------------------------------------------------------------\n";

    float totalBobotSKS = 0;
    for (int i = 0; i < mhs.JumlahMK; i++) {
        float bxSKS = mhs.MK[i].Bobot * mhs.MK[i].SKS;
        totalBobotSKS += bxSKS;

        cout << left << setw(5) << i + 1<<setw(12) << mhs.MK[i].KodeMK<< setw(7) << mhs.MK[i].NH<< setw(7) <<mhs.MK[i].Bobot<< setw(15) << mhs.MK[i].NamaMK << setw(7) <<mhs.MK[i].SKS<< setw(10) << bxSKS << endl;
    }

    cout << "---------------------------------------------------------------\n";
    cout << "Total Bobot x SKS          : " << totalBobotSKS << endl;
    cout << "Total SKS                  : " << mhs.TotalSKS << endl;
    cout << "Indeks Prestasi Kumulatif  : " << fixed << setprecision(2)
         << mhs.IPK << endl;
    cout << "===============================================================\n";
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
