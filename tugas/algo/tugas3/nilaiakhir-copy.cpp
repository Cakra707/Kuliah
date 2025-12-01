#include <iostream>
using namespace std;

int noPok, nilPert, nilTug, nilMid, nilFinal, dataKe, tgsKe, preKe;
int noPokTinggi, noPokRendah, mhsA, mhsB, mhsC, mhsD, mhsE;
string nama, ket, namaTinggi, namaRendah;
float nilTotPre, nilAkhir, nilTotTug, maks = -1, minim = 101;
char nilHuruf, masihSiswa;

void inputNilai(int pilihan);
int validasiBatas(string pesan, int dataKe , int btsBwh, int btsAtas);
float hitungTotNilai(float total, float nilainya);
float rataRata(float total, float pembagi, float pengali);
void hitungNilai();
void tampilNilai();
int akumulasiMahasiswa(int mhs);
void cekNilaiHuruf();
void cariMhsTinggirendah();
void rekapMhs();
void mhsSesuaiNilai(string mhs, int nilMhs);
void dataNilaiMhs(string ket, int noPok, string nama, float nilai);

int main () {

    while (true) {
        nilTotPre = 0; preKe = 0;
        tgsKe = 0; nilTotTug = 0;
        dataKe++;

        cout << "\nMasukan Data Mahasiswa Ke-" << dataKe << " : " << endl;
        cout << "No. Pokok  : "; cin >> noPok;
        cout << "Nama       : "; cin.ignore(); getline(cin, nama);

        cout << "\nNilai Tugas 1-5 [0-100] : " << endl;
        inputNilai(5);

        cout << "\nNilai Presensi 1-15 [1 = Hadir; 0 = Tidak hadir] : " << endl;
        inputNilai(15);

        hitungNilai();
        cekNilaiHuruf();
        cariMhsTinggirendah();
        tampilNilai();

        cout << "\nMasih ada Mahasiswa? [y/t] : "; cin >> masihSiswa;
        if (masihSiswa == 't') break;
    }

    rekapMhs();

    return 0;
}

void inputNilai(int pilihan) {
    int nilai, i;
    for (i = 1; i <= pilihan; i++) {

        if (pilihan == 15) { 
            preKe++;
            nilai = validasiBatas("\tNilai Pertemuan ke-", preKe, 0, 1);
            nilTotPre = hitungTotNilai(nilTotPre, nilai);
        }

        if (pilihan == 5) {   
            tgsKe++;
            nilai = validasiBatas("\tNilai Tugas ke-", tgsKe, 0, 100);
            nilTotTug = hitungTotNilai(nilTotTug, nilai);
        }
    }
}

int validasiBatas(string pesan, int dataKe , int btsBwh, int btsAtas) {
    int nilai;
    while (true) {
        if ( dataKe == 0 ) cout << pesan << " : "; 
        else  cout << pesan << dataKe << " : ";
        cin >> nilai;

        if (nilai < btsBwh || nilai > btsAtas) {
            cout << "\nMasukan nilai antara " << btsBwh << "-" << btsAtas << "!" << endl << endl;
            continue;
        } else break; 
    } 
    return nilai;
}

float hitungTotNilai(float total, float nilainya) {
    return total + nilainya;
}

float rataRata(float total, float pembagi, float pengali = 1) {
    return (total / pembagi) * pengali;
}

void hitungNilai() {
    nilMid = validasiBatas("\nNilai Mid", 0, 0, 100);
    nilFinal = validasiBatas("Nilai Final", 0, 0, 100);
    nilTotTug = rataRata(nilTotTug, 5);
    nilTotPre = rataRata(nilTotPre, 15, 100);
    nilAkhir = (0.1 * nilTotPre) + (0.2 * nilTotTug) + (0.3 * nilMid) + (0.4 * nilFinal);
}

void tampilNilai() {
    cout << "\nNilai Tugas : " << nilTotTug << endl;
    cout << "Nilai Presensi : " << nilTotPre << endl;
    cout << "Nilai Akhir : " << nilAkhir << endl;
    cout << "Nilai Huruf : " << nilHuruf << endl;
    cout << "Keterangan : " << ket << endl;
}

int akumulasiMahasiswa(int mhs) {
    return mhs + 1;
}

void cekNilaiHuruf() {
    if (nilAkhir >= 80 && nilAkhir <= 100) {
        nilHuruf = 'A'; ket = "LULUS"; mhsA = akumulasiMahasiswa(mhsA);
    } else if (nilAkhir >= 65 && nilAkhir < 80) {
        nilHuruf = 'B'; ket = "LULUS"; mhsB = akumulasiMahasiswa(mhsB);
    } else if (nilAkhir >= 50 && nilAkhir < 65) {
        nilHuruf = 'C'; ket = "LULUS"; mhsC = akumulasiMahasiswa(mhsC);
    } else if (nilAkhir >= 40 && nilAkhir < 50) {
        nilHuruf = 'D'; ket = "LULUS"; mhsD = akumulasiMahasiswa(mhsD);
    } else {
        nilHuruf = 'E'; ket = "TIDAK LULUS"; mhsE = akumulasiMahasiswa(mhsE);
    }
}

void cariMhsTinggirendah() {
    if (nilAkhir > maks) {
        noPokTinggi = noPok;
        namaTinggi = nama;
        maks = nilAkhir;
    }
    if (nilAkhir < minim) {
        noPokRendah = noPok;
        namaRendah = nama;
        minim = nilAkhir;
    }
}

void rekapMhs() {
    cout << "\n";
    mhsSesuaiNilai("Nilai A", mhsA);
    mhsSesuaiNilai("Nilai B", mhsB);
    mhsSesuaiNilai("Nilai C", mhsC);
    mhsSesuaiNilai("Nilai D", mhsD);
    mhsSesuaiNilai("Nilai E", mhsE);

    cout << "\n";
    dataNilaiMhs("Tertinggi", noPokTinggi, namaTinggi, maks);
    dataNilaiMhs("Terendah", noPokRendah, namaRendah, minim);
}

void mhsSesuaiNilai(string mhs, int nilMhs) {
    cout << "Jumlah Mahasiswa " << mhs << " : " << nilMhs << endl;
}

void dataNilaiMhs(string ket, int noPok, string nama, float nilai) {
    cout << "Data Mahasiswa Nilai " << ket << endl;
    cout << "\tNo. Pokok : " << noPok << endl;
    cout << "\tNama : " << nama << endl;
    cout << "\tNilai Akhir : " << nilai << endl << endl;
}
