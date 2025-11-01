#include <iostream>
#include <iomanip>
using namespace std;

double gajiBersih = 0, gajiPokok = 3000000, tunjanganJabatan = 0, tunjanganKeluarga = 0, tunjanganAnak = 0, tambahanGaji = 0, potonganGaji = 0, gajiKotor = 0, pajak = 0, tunjanganPendidikan = 0;
int nik, jumlahJamKerja, jumlahAnak;
string namaKaryawan, tingkatPendidikan, status;
char kodeJabatan;

int main () {

    cout << setw(30) << "DATA DIRI ANDA" <<endl <<endl;
    cout << "NIK                                : "; cin >> nik;
    cout << "Nama                               : "; cin.ignore(); getline(cin, namaKaryawan);
    cout << "Kode Jabatan (S/T/B)               : "; cin >> kodeJabatan;
    cout << "Tingkat Pendidikan (SMA/D3/S1)     : "; cin >> tingkatPendidikan;
    cout << "Status Perkawinan (MENIKAH/BELUM)  : "; cin >> status;
    if (status == "MENIKAH") {
        cout << "Jumlah anak                        : "; cin >> jumlahAnak;
        tunjanganKeluarga = 0.1 * gajiPokok;
        if (jumlahAnak > 3 ) jumlahAnak = 3;
        tunjanganAnak = 0.05 *  gajiPokok * jumlahAnak;
    }
    cout << "Jumlah Jam Kerja                   : "; cin >> jumlahJamKerja;
    
    switch (kodeJabatan) {
        case 'S' : tunjanganJabatan = 0.2 * gajiPokok;
            break;
        case 'T' : tunjanganJabatan = 0.15 * gajiPokok;
            break;
        case 'B' : tunjanganJabatan = 0.05 * gajiPokok;
            break;
        default : cout << "\nMasukan Kode Jabatan Yang Sesuai!" <<endl;
    }

   if (tingkatPendidikan == "SMA") tunjanganPendidikan = 0.05 * gajiPokok;
     else if (tingkatPendidikan == "D3") tunjanganPendidikan = 0.1 * gajiPokok;
          else if (tingkatPendidikan == "S1") tunjanganPendidikan = 0.15 * gajiPokok;
               else cout << "\nMasukan Tingkat Pendidikan Yang Sesuai!" <<endl;
   
   
   
   if (jumlahJamKerja > 200) tambahanGaji = 0.05 * gajiPokok;
    else potonganGaji = 0.05 * gajiPokok;
   
    
    gajiKotor = (gajiPokok + tambahanGaji + tunjanganAnak + tunjanganJabatan + tunjanganKeluarga + tunjanganPendidikan) - potonganGaji;

    if (gajiKotor > 3500000) pajak = 0.025 * gajiKotor;
   
   gajiBersih = gajiKotor - pajak;

   cout << "\n" <<endl;
   cout << setw(34) <<"HASIL PERHITUNGAN GAJI" <<endl <<endl;

   cout << fixed << setprecision(2); 
   cout << "Gaji Pokok                         : Rp" << setw(15) << gajiPokok << endl;
   cout << "Tunjangan Keluarga                 : Rp" << setw(15) << tunjanganKeluarga << endl;
   cout << "Tunjangan Jabatan                  : Rp" << setw(15) << tunjanganJabatan << endl;
   cout << "Tunjangan Pendidikan               : Rp" << setw(15) << tunjanganPendidikan << endl;
   cout << "Tunjangan Anak                     : Rp" << setw(15) << tunjanganAnak << endl;
   cout << "Tambahan Gaji                      : Rp" << setw(15) << tambahanGaji << endl;
   cout << "Potongan Gaji                      : Rp" << setw(15) << potonganGaji << endl;
   cout << "Gaji Kotor                         : Rp" << setw(15) << gajiKotor << endl;
   cout << "Pajak                              : Rp" << setw(15) << pajak << endl;
   cout << "Gaji Bersih                        : Rp" << setw(15) << gajiBersih << endl;

   return 0;
}
