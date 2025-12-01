#include <iostream>
using namespace std;

string namaKaryawan, statusPerkawinan, golongan;

int gajiPokok, nik, tunjanganKeluarga, gajiBersih;

main() {
    cout << "Masukan Nama Anda :";
    cin >> namaKaryawan;
    cout << "Masukan Status Perkawinan Anda (masukan M jika sudah menikah, jika belum masukan 0 ) :";
    cin >> statusPerkawinan;
    cout << "Masukan Golongan Anda (A/B/C) : ";
    cin >> golongan;

    if (golongan == "A") {
        gajiPokok = 500000;
    } else if (golongan == "B") {
        gajiPokok = 750000;
    } else if ( golongan == "C") {
        gajiPokok = 1000000;
    }



    if (statusPerkawinan != "M") {
        tunjanganKeluarga = 0;
    } else {
        tunjanganKeluarga = 0.1 * gajiPokok;
    }

    gajiBersih = gajiPokok + tunjanganKeluarga;

    
    cout << "Gaji Pokok Anda adalah " << gajiPokok <<endl;
    cout << "Tunjangan Keluarga Anda adalah " << tunjanganKeluarga << endl;
    cout << "Gaji Bersih Anda adalah " << gajiBersih << endl;

    return 0;

}