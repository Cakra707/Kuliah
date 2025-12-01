#include <iostream>
using namespace std;

const int MAKS_MHS = 40;

// Deklarasi array global
int    noPokok[MAKS_MHS];
string namaMhs[MAKS_MHS];
float  nilaiAkhir[MAKS_MHS];
string keterangan[MAKS_MHS];

// Fungsi-fungsi
void inputData(int &jmlMhs);
float hitungRata(int jmlMhs);
void tentukanKelulusan(int jmlMhs, float rata, int &jmlLulus, int &jmlTidakLulus);
void cetakDaftar(int jmlMhs, float rata, int jmlLulus, int jmlTidakLulus);

int main() {
    int jmlMhs;
    float rata;
    int jmlLulus, jmlTidakLulus;

    inputData(jmlMhs);
    rata = hitungRata(jmlMhs);
    tentukanKelulusan(jmlMhs, rata, jmlLulus, jmlTidakLulus);
    cetakDaftar(jmlMhs, rata, jmlLulus, jmlTidakLulus);

    return 0;
}

// -------------------- DEFINISI FUNGSI --------------------

// Menginput data mahasiswa
void inputData(int &jmlMhs) {
    cout << "Masukkan jumlah mahasiswa (maksimal " << MAKS_MHS << "): ";
    cin >> jmlMhs;

    if (jmlMhs > MAKS_MHS) {
        cout << "Jumlah melebihi maksimum, otomatis diset ke " << MAKS_MHS << endl;
        jmlMhs = MAKS_MHS;
    }

    cout << endl;
    for (int i = 0; i < jmlMhs; i++) {
        cout << "Data mahasiswa ke-" << i + 1 << endl;

        cout << "No. Pokok     : ";
        cin >> noPokok[i];

        cout << "Nama          : ";
        cin >> namaMhs[i];      // nama tanpa spasi untuk memudahkan pemula

        cout << "Nilai Akhir   : ";
        cin >> nilaiAkhir[i];

        cout << endl;
    }
}

// Menghitung rata-rata nilai akhir
float hitungRata(int jmlMhs) {
    float total = 0;

    for (int i = 0; i < jmlMhs; i++) {
        total = total + nilaiAkhir[i];
    }

    float rata = 0;
    if (jmlMhs > 0) {
        rata = total / jmlMhs;
    }

    return rata;
}

// Menentukan keterangan LULUS / TIDAK LULUS
void tentukanKelulusan(int jmlMhs, float rata, int &jmlLulus, int &jmlTidakLulus) {
    jmlLulus = 0;
    jmlTidakLulus = 0;

    for (int i = 0; i < jmlMhs; i++) {
        if (nilaiAkhir[i] >= rata) {
            keterangan[i] = "LULUS";
            jmlLulus++;
        } else {
            keterangan[i] = "TIDAK LULUS";
            jmlTidakLulus++;
        }
    }
}

// Mencetak daftar nilai mahasiswa
void cetakDaftar(int jmlMhs, float rata, int jmlLulus, int jmlTidakLulus) {
    cout << endl;
    cout << "DAFTAR NILAI MAHASISWA KELAS: ALGORITMA & PEMROGRAMAN" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "No.Pokok\tNama\t\tNilai Akhir\tKeterangan" << endl;
    cout << "-----------------------------------------------------" << endl;

    for (int i = 0; i < jmlMhs; i++) {
        cout << noPokok[i] << "\t\t"
             << namaMhs[i] << "\t\t"
             << nilaiAkhir[i] << "\t\t"
             << keterangan[i] << endl;
    }

    cout << "-----------------------------------------------------" << endl;
    cout << "Rata-rata Nilai  : " << rata << endl;
    cout << "Jumlah Lulus     : " << jmlLulus << endl;
    cout << "Jumlah Tdk Lulus : " << jmlTidakLulus << endl;
}