#include <iostream>
#include <iomanip>
using namespace std;

double gajiBersih, gajiPokok = 3000000, tunjanganJabatan, tunjanganKeluarga, tunjanganAnak, tambahanGaji, potonganGaji, gajiKotor, pajak, tunjanganPendidikan;
int nik, jumlahJamKerja, jumlahAnak;
string namaKaryawan, tingkatPendidikan, status;
char kodeJabatan;

int main () {

    cout << "DATA DIRI ANDA" <<endl <<endl;
    cout << "NIK                                : "; cin >> nik;
    cout << "Nama                               : "; cin.ignore(); getline(cin, namaKaryawan);
    cout << "Kode Jabatan (S/T/B)               : "; cin >> kodeJabatan;
    cout << "Tingkat Pendidikan (SMA/D3/S1)     : "; cin >> tingkatPendidikan;
    cout << "Status Perkawinan (MENIKAH/BELUM)  :"; cin >> status;

    if (status == "MENIKAH") {
        cout << "Jumlah anak                    : "; cin >> jumlahAnak;
        tunjanganKeluarga = 0.1 * gajiPokok;
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
   
   if (jumlahAnak > 3 ) jumlahAnak = 3;
   
   if (jumlahJamKerja > 200) tambahanGaji = 0.05 * gajiPokok;
    else potonganGaji = 0.05 * gajiPokok;
   

    gajiKotor = (gajiPokok + tambahanGaji + tunjanganAnak + tunjanganJabatan + tunjanganKeluarga + tunjanganPendidikan) - potonganGaji;

    if (gajiKotor > 3500000) pajak = 0.025 * gajiKotor;
   
   tunjanganAnak = 0.05 *  gajiPokok * jumlahAnak;
   gajiBersih = gajiKotor - pajak;

   cout << "\nHASIL PERHITUNGAN GAJI" <<endl <<endl;

   cout << fixed << setprecision(2);
   cout << "Gaji Pokok                         : " << gajiPokok << endl;
   cout << "Tunjangan Keluarga                 : " << tunjanganKeluarga << endl;
   cout << "Tunjangan Jabatan                  : " << tunjanganJabatan << endl;
   cout << "Tunjangan pendidikan               : " << tunjanganPendidikan << endl;
   cout << "Tunjangan Anak                     : " << tunjanganAnak << endl;
   cout << "Tambahan Gaji                      : " << tambahanGaji << endl;
   cout << "Potongan Gaji                      : " << potonganGaji << endl;
   cout << "Pajak                              : " << pajak << endl;
   cout << "Gaji Kotor                         : " << gajiKotor << endl;
   cout << "Gaji Bersih                        : " << gajiBersih << endl;

   return 0;
}
