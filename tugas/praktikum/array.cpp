#include <iostream>
#include <iomanip>
using namespace std;

const int maksMhs = 100;
int nim[maksMhs], nil[maksMhs];
int mhsA, mhsB, mhsC, mhsE, mhsD, maks = 0, minim = 100, nimMaks, nimMin;
string nama[maksMhs], namaMaks, namaMin;
char nilHuruf[maksMhs];

char cekNilHuruf(int i) {
    char huruf;
     if (nil[i] > 80 && nil[i] <= 100) {
       huruf =  'A'; mhsA++;
        } else if (nil[i] > 65 && nil[i] <= 80) {
            huruf = 'B'; mhsB++;
        } else if (nil[i] > 50 && nil[i] <= 65) {
            huruf =  'C'; mhsC++;
        } else if (nil[i] > 35 && nil[i] <= 50) {
            huruf =  'D'; mhsD++;
        } else {
            huruf =  'E'; mhsE++;
        }

    return huruf;
}

void inData(int i, float &nilTot) {
    cout << "\nMasukan Data Mahasiswa Ke-" << i + 1 << " : " << endl;
    cout << "Nim    : "; cin >> nim[i];
    cout << "Nama   : "; cin.ignore(); getline(cin, nama[i]);
    cout << "Nilai [0-100] : "; cin >> nil[i];
    nilHuruf[i] = cekNilHuruf(i);
    cout << "Nilai Huruf    : " << nilHuruf[i] << endl;
    nilTot += nil[i];
}

void cekMaksMin(int i) {

    if (nil[i] > maks) {
        maks = nil[i]; nimMaks = nim[i]; namaMaks = nama[i];
    }

    if (nil[i] < minim) {
        minim = nil[i]; nimMin = nim[i]; namaMin = nama[i];
    }
}

void mhsNilHuruf(string a, char b, int c) {
        if (c == 'A') cout << a << " Nilai " << b << "  : " << c << endl;
        else cout << "       Nilai " << b << "  : " << c << endl;
    }

void nilTinggiRendah(string a, int b, int c,  string d) {
        cout << "Nilai "<< a << " : " << b << " NIM  : " << c << " Nama     : " << d << endl;
    }

int main() {
    int i = 0, a = 0;
    float  nilTot = 0, rata = 0;
    char masihMhs;

    cout << "Input Data Mahasiswa" << endl;
    cout << "----------------------------";
    while (1) {
   
        inData(i, nilTot);
        cekMaksMin(i);
        i++;

        cout << "\nMasih Ada Mahasiswa [y/t] : "; cin >> masihMhs;
            if (masihMhs == 't') break; 
    }

    rata = nilTot / i;

    cout << "\nHASIL REKAPITULASI" << endl;
    cout << "----------------------------" << endl;
    cout << "Rata-Rata Nilai : " << fixed << setprecision(2) << rata << endl;
    mhsNilHuruf("Jumlah", 'A', mhsA);
    mhsNilHuruf("", 'B', mhsB);
    mhsNilHuruf("", 'C', mhsC);
    mhsNilHuruf("", 'D', mhsD);
    mhsNilHuruf("", 'E', mhsE);

    cout << setw(20) << "\nDAFTAR NILAI MAHASISWA" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << setw(6) << left <<"No." << setw(10) << "NIM" <<  setw(20) << "Nama Mahasiswa" << setw(13) <<"Nilai" << setw(12) << "N.Huruf" << endl;
    cout << "-----------------------------------------------------" << endl;

    while (a < i) {
        cout << setw(6) << a + 1 << setw(10) << nim[a] << setw(20) << nama[a] << setw(13)<< nil[a] << setw(12)<< nilHuruf[a] << endl;
        a++;
    }

    cout << "-----------------------------------------------------" << endl;
    nilTinggiRendah("Tertinggi", maks, nimMaks, namaMaks);
    nilTinggiRendah("Terendah", minim, nimMin, namaMin);
    return 0;
}